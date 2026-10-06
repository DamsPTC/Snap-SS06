/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107bcbff4; end: 107bcc137; -[SCDiscoverLogger logSubscribeToChannelWithPublisherId:source:editionId:trackingId:collectionId:collectionPos:collectionType:dSnapId:] */

void FUN_107bcbff4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d6fa0;
  _objc_retain(param_10);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1e5b60();
  _objc_release(param_3);
  if (param_4 - 1U < 5) {
    uVar2 = *(undefined8 *)(&UNK_10dee2008 + (param_4 - 1U) * 8);
  }
  else {
    uVar2 = 0xf;
  }
  func_0x00010c206c40(puVar1,param_2,uVar2);
  func_0x00010c193c40(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c219300(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c1921a0(puVar1,param_2,param_10);
  _objc_release(param_10);
  func_0x00010c17e5a0(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c17e640(puVar1,param_2,param_8);
  func_0x00010c17e680(puVar1,param_2,param_9);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bcc138; end: 107bcc237; -[SCDiscoverLogger logUnsubscribeFromChannelWithPublisherId:trackingId:collectionId:collectionPos:collectionType:source:] */

void FUN_107bcc138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d6fa8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1e5b60();
  _objc_release(param_3);
  func_0x00010c219300(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c17e5a0(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c17e640(puVar1,param_2,param_6);
  func_0x00010c17e680(puVar1,param_2,param_7);
  if (param_8 - 1U < 5) {
    uVar2 = *(undefined8 *)(&UNK_10dee2008 + (param_8 - 1U) * 8);
  }
  else {
    uVar2 = 0xf;
  }
  func_0x00010c206c40(puVar1,param_2,uVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bcc238; end: 107bcc543; -[SCDiscoverLogger logBeginSharing] */

void FUN_107bcc238(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c083600();
  _objc_release(uVar1);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0837a0();
  _objc_release(lVar3);
  if ((int)lVar4 == 0) {
    if ((uVar2 & 1) != 0) {
      return;
    }
    puVar5 = PTR_PTR_1126d6fb8;
    _objc_alloc_init(PTR_PTR_1126d6fb8);
    lVar3 = param_1 + 0x58;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c0837c0();
    _objc_release(lVar3);
    if ((int)lVar4 == 0) {
      lVar3 = param_1 + 0x58;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c0837e0();
      _objc_release(lVar3);
      if ((int)lVar4 == 0) {
        lVar3 = param_1 + 0x58;
        _objc_loadWeakRetained();
        lVar4 = lVar3;
        func_0x00010c0836c0();
        _objc_release(lVar3);
        if ((int)lVar4 == 0) {
          lVar3 = param_1 + 0x58;
          _objc_loadWeakRetained();
          lVar4 = lVar3;
          func_0x00010c0836e0();
          _objc_release(lVar3);
          if ((int)lVar4 == 0) {
            lVar3 = param_1 + 0x58;
            _objc_loadWeakRetained();
            lVar4 = lVar3;
            func_0x00010c083720();
            _objc_release(lVar3);
            if ((int)lVar4 == 0) {
              lVar3 = param_1 + 0x58;
              _objc_loadWeakRetained();
              lVar4 = lVar3;
              func_0x00010c083780();
              _objc_release(lVar3);
              if ((int)lVar4 == 0) goto LAB_107bcc374;
              uVar8 = 0xc;
            }
            else {
              uVar8 = 4;
            }
          }
          else {
            uVar8 = 10;
          }
          func_0x00010c1c0e40(puVar5,param_2,uVar8);
        }
        else {
          func_0x00010c1c0e40(puVar5,param_2,1);
          lVar3 = param_1 + 0x58;
          _objc_loadWeakRetained(lVar3);
          lVar4 = lVar3;
          func_0x00010bf5f340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c221be0(puVar5,param_2,lVar4);
          _objc_release(lVar4);
          _objc_release(lVar3);
        }
        goto LAB_107bcc374;
      }
      uVar8 = 1;
    }
    else {
      uVar8 = 2;
    }
  }
  else {
    if ((uVar2 & 1) != 0) {
      return;
    }
    puVar5 = PTR_PTR_1126d6fb0;
    _objc_alloc_init(PTR_PTR_1126d6fb0);
    uVar1 = param_1 + 0x58;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c0837c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = param_1 + 0x58;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c0837e0();
      _objc_release(lVar3);
      if ((int)lVar4 == 0) goto LAB_107bcc374;
      uVar8 = 1;
    }
    else {
      uVar8 = 2;
    }
  }
  func_0x00010c1c5440(puVar5,param_2,uVar8);
LAB_107bcc374:
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010beeeb20();
  uVar8 = 10;
  if (lVar4 != 2) {
    uVar8 = 6;
  }
  if (lVar4 == 0) {
    uVar8 = 0xffffffffffffffff;
  }
  func_0x00010c196820(puVar5,param_2,uVar8);
  _objc_release(lVar3);
  func_0x00010bea2cc0(param_1,param_2,puVar5);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar6 = lVar3;
  func_0x00010bf5e5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar7 = lVar4;
  func_0x00010bf60120();
  func_0x00010bea2ca0(param_1,param_2,puVar5,lVar6,lVar7);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0f1da0();
  func_0x00010c215700(puVar5);
  _objc_release(lVar3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x40),param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107bcc544; end: 107bccba3; -[SCDiscoverLogger logCompletedSharingContentWithSharingParameters:] */

void FUN_107bcc544(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c083600();
  _objc_release(uVar1);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0837a0();
  _objc_release(lVar3);
  if ((int)lVar4 != 0) {
    if ((uVar2 & 1) != 0) goto LAB_107bcca70;
    puVar5 = PTR_PTR_1126d6fc0;
    _objc_alloc_init(PTR_PTR_1126d6fc0);
    uVar1 = param_1 + 0x58;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c0837c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = param_1 + 0x58;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c0837e0();
      _objc_release(lVar3);
      if ((int)lVar4 == 0) goto LAB_107bcc67c;
      uVar10 = 1;
    }
    else {
      uVar10 = 2;
    }
    goto LAB_107bcc678;
  }
  if ((uVar2 & 1) != 0) goto LAB_107bcca70;
  puVar5 = PTR_PTR_1126d6fc8;
  _objc_alloc_init(PTR_PTR_1126d6fc8);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0837c0();
  _objc_release(lVar3);
  if ((int)lVar4 == 0) {
    lVar3 = param_1 + 0x58;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c0837e0();
    _objc_release(lVar3);
    if ((int)lVar4 != 0) {
      uVar10 = 1;
      goto LAB_107bcc678;
    }
    lVar3 = param_1 + 0x58;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c0836c0();
    _objc_release(lVar3);
    if ((int)lVar4 == 0) {
      lVar3 = param_1 + 0x58;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c0836e0();
      _objc_release(lVar3);
      if ((int)lVar4 == 0) {
        lVar3 = param_1 + 0x58;
        _objc_loadWeakRetained();
        lVar4 = lVar3;
        func_0x00010c083720();
        _objc_release(lVar3);
        if ((int)lVar4 == 0) {
          lVar3 = param_1 + 0x58;
          _objc_loadWeakRetained();
          lVar4 = lVar3;
          func_0x00010c083780();
          _objc_release(lVar3);
          if ((int)lVar4 == 0) goto LAB_107bcc67c;
          uVar10 = 0xc;
        }
        else {
          uVar10 = 4;
        }
      }
      else {
        uVar10 = 10;
      }
      func_0x00010c1c0e40(puVar5,param_2,uVar10);
    }
    else {
      func_0x00010c1c0e40(puVar5,param_2,1);
      lVar3 = param_1 + 0x58;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010bf5f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c221be0(puVar5,param_2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  else {
    uVar10 = 2;
LAB_107bcc678:
    func_0x00010c1c5440(puVar5,param_2,uVar10);
  }
LAB_107bcc67c:
  func_0x00010bea2cc0(param_1,param_2,puVar5);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar6 = lVar3;
  func_0x00010bf5e5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar7 = lVar4;
  func_0x00010bf60120();
  func_0x00010bea2ca0(param_1,param_2,puVar5,lVar6,lVar7);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0f1da0();
  func_0x00010c215700(puVar5);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010beeeb20();
  uVar10 = 10;
  if (lVar4 != 2) {
    uVar10 = 6;
  }
  if (lVar4 == 0) {
    uVar10 = 0xffffffffffffffff;
  }
  func_0x00010c196820(puVar5,param_2,uVar10);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2a618);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b4ca0();
  func_0x00010c178460(puVar5,param_2,lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29718);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f3c0();
  func_0x00010c191960(puVar5,param_2,lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e27f38);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000108442be8();
  func_0x00010c19c1c0(puVar5,param_2,lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e27f78);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000108442868();
  func_0x00010c19c760(puVar5,param_2,lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db9478);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067fc0();
  _objc_release(lVar3);
  uVar1 = lVar4 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) == 0) {
      if (uVar1 == 8) {
        uVar10 = 5;
      }
      else {
        if (uVar1 != 10) goto LAB_107bccb40;
        uVar10 = 0xe;
      }
    }
    else {
      uVar10 = 1;
      if ((lVar4 + 1U < 0x1c) && ((1L << (lVar4 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (lVar4 + 1U < 0x1b) {
          uVar10 = *(undefined8 *)(&UNK_10dee2030 + (lVar4 + 1U) * 8);
        }
        else {
          uVar10 = 0;
        }
      }
    }
  }
  else {
LAB_107bccb40:
    uVar10 = 2;
  }
  func_0x00010c1c5440(puVar5,param_2,uVar10);
  puVar8 = PTR_PTR_1126b6008;
  func_0x00010c122f60(PTR_PTR_1126b6008);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b4ca0();
  func_0x00010c1e88a0(puVar5,param_2,lVar4);
  _objc_release(lVar3);
  _objc_release(puVar8);
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29758);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010bf885a0(lVar3);
    func_0x00010c205880(puVar5);
  }
  lVar4 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar6 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar4);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar7);
  if (((ulong)puVar8 & 1) == 0) {
    func_0x00010c219300(puVar5,param_2,lVar7);
  }
  lVar4 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar6 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf3ffe0();
  func_0x00010c17e640(puVar5,param_2,lVar9);
  _objc_release(lVar6);
  _objc_release(lVar4);
  lVar4 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar6 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf400c0();
  func_0x00010c17e680(puVar5,param_2,lVar9);
  _objc_release(lVar6);
  _objc_release(lVar4);
  lVar4 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar6 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf3fe40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e5a0(puVar5,param_2,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x40),param_2,puVar5);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(puVar5);
LAB_107bcca70:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bccba4; end: 107bccf4b; -[SCDiscoverLogger logDeniedSharing] */

void FUN_107bccba4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  uVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c083600();
  _objc_release(uVar1);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0837a0();
  _objc_release(lVar3);
  if ((int)lVar4 == 0) {
    if ((uVar2 & 1) != 0) {
      return;
    }
    puVar5 = PTR_PTR_1126d6fd8;
    _objc_alloc_init(PTR_PTR_1126d6fd8);
    lVar3 = param_1 + 0x58;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c0836c0();
    _objc_release(lVar3);
    if ((int)lVar4 == 0) {
      lVar3 = param_1 + 0x58;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c0836e0();
      _objc_release(lVar3);
      if ((int)lVar4 == 0) {
        lVar3 = param_1 + 0x58;
        _objc_loadWeakRetained();
        lVar4 = lVar3;
        func_0x00010c083720();
        _objc_release(lVar3);
        if ((int)lVar4 == 0) {
          lVar3 = param_1 + 0x58;
          _objc_loadWeakRetained();
          lVar4 = lVar3;
          func_0x00010c083780();
          _objc_release(lVar3);
          if ((int)lVar4 == 0) goto LAB_107bccd78;
          uVar9 = 0xc;
        }
        else {
          uVar9 = 4;
        }
      }
      else {
        uVar9 = 10;
      }
      func_0x00010c1c0e40(puVar5,param_2,uVar9);
    }
    else {
      func_0x00010c1c0e40(puVar5,param_2,1);
      lVar3 = param_1 + 0x58;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010bf5f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c221be0(puVar5,param_2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  else {
    if ((uVar2 & 1) != 0) {
      return;
    }
    puVar5 = PTR_PTR_1126d6fd0;
    _objc_alloc_init(PTR_PTR_1126d6fd0);
    uVar1 = param_1 + 0x58;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c0837c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = param_1 + 0x58;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c0837e0();
      _objc_release(lVar3);
      if ((int)lVar4 == 0) goto LAB_107bccd78;
      uVar9 = 1;
    }
    else {
      uVar9 = 2;
    }
    func_0x00010c1c5440(puVar5,param_2,uVar9);
  }
LAB_107bccd78:
  func_0x00010bea2cc0(param_1,param_2,puVar5);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar6 = lVar3;
  func_0x00010bf5e5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar7 = lVar4;
  func_0x00010bf60120();
  func_0x00010bea2ca0(param_1,param_2,puVar5,lVar6,lVar7);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0f1da0();
  func_0x00010c215700(puVar5);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar6);
  if (((ulong)puVar8 & 1) == 0) {
    func_0x00010c219300(puVar5,param_2,lVar6);
  }
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf3ffe0();
  func_0x00010c17e640(puVar5,param_2,lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf400c0();
  func_0x00010c17e680(puVar5,param_2,lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bf3fe40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e5a0(puVar5,param_2,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x40),param_2,puVar5);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107bccf4c; end: 107bcdcbf; -[SCDiscoverLogger logEditionViewStorySessionId:] */

void FUN_107bccf4c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  
  _objc_retain(param_4);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfd68a0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) goto LAB_107bcdc98;
  puVar3 = PTR_PTR_1126d5138;
  _objc_opt_new(PTR_PTR_1126d5138);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c160580();
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185c40(puVar3,param_3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = (undefined *)(param_2 + 0x58);
  _objc_loadWeakRetained();
  puVar5 = puVar4;
  func_0x00010bf8c980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf8c9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar6 != 0) {
    lVar1 = param_2 + 0x58;
    _objc_loadWeakRetained();
    lVar6 = lVar1;
    func_0x00010bf8c980();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2 + 0x58;
    _objc_loadWeakRetained();
    lVar7 = lVar2;
    func_0x00010bf8c9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_3,&PTR____CFConstantStringClassReference_110dc0f98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar1);
    puVar5 = puVar4;
  }
  func_0x00010c20d1a0(puVar3,param_3,puVar5);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf4e080();
  FUN_107bc70a4();
  func_0x00010c206c40(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0de640();
  func_0x00010c203cc0(puVar3,param_3,lVar2 + 1);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf68060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a920(puVar3,param_3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c141de0(param_1,PTR_PTR_1126cecb8);
  func_0x00010c215700(puVar3);
  puVar4 = PTR_PTR_1126cecb8;
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c160560();
  func_0x00010c141de0(puVar4);
  func_0x00010c215760(puVar3);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf97160();
  func_0x00010c196820(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf972a0();
  func_0x00010c196920(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ea860();
  func_0x00010c1d5500(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c27dd80();
  func_0x000107bc70e8();
  func_0x00010c198340(puVar3,param_3,lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf9b860();
  func_0x00010c198400(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0de820();
  func_0x00010c1cf460(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ddfe0();
  func_0x00010c1cee20(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf356a0();
  if (lVar2 == 0x7fffffffffffffff) {
    func_0x00010c222660(puVar3,param_3,0xffffffffffffffff);
  }
  else {
    lVar2 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar2);
    lVar6 = lVar2;
    func_0x00010bf356a0();
    func_0x00010c222660(puVar3,param_3,lVar6);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  uVar8 = param_2 + 0x58;
  _objc_loadWeakRetained(uVar8);
  uVar9 = uVar8;
  func_0x00010c080120();
  func_0x00010c1a0ce0(puVar3,param_3,uVar9 & 0xffffffff);
  _objc_release(uVar8);
  lVar1 = param_2;
  func_0x00010be070c0(param_2);
  func_0x00010c1e7f00(puVar3,param_3,lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c29d360();
  func_0x00010c222620(puVar3,param_3,lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c29d360();
  func_0x000108534aa8();
  func_0x00010c222c00(puVar3,param_3,lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfd49e0();
  func_0x00010c1a16e0(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c083700();
  _objc_release(lVar1);
  uVar10 = 10;
  if ((int)lVar2 != 0) {
    uVar10 = 0xb;
  }
  func_0x00010c20ddc0(puVar3,param_3,uVar10);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c25b7c0();
  func_0x00010c20de00(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c07b500();
  func_0x00010c1b39c0(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0724e0();
  func_0x00010c1b0ca0(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  uVar10 = param_4;
  func_0x00010c0b4ca0(param_4);
  func_0x00010c20d9e0(puVar3,param_3,uVar10);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c079c60();
  func_0x00010c1b3340(puVar3,param_3,lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df6e0(puVar3,param_3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c25b7c0();
  if (lVar2 == 0xd) {
LAB_107bcd56c:
    _objc_release(lVar1);
LAB_107bcd574:
    func_0x00010c1e7840(puVar3,param_3,puVar5);
  }
  else {
    lVar2 = param_2 + 0x58;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010c25b7c0();
    if (lVar6 == 0x28) {
LAB_107bcd564:
      _objc_release(lVar2);
      goto LAB_107bcd56c;
    }
    lVar6 = param_2 + 0x58;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c25b7c0();
    if (lVar7 == 0x21) {
      _objc_release(lVar6);
      goto LAB_107bcd564;
    }
    lVar7 = param_2 + 0x58;
    _objc_loadWeakRetained();
    lVar13 = lVar7;
    func_0x00010c25b7c0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar13 == 0x2f) goto LAB_107bcd574;
  }
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c15ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dfe0(puVar3,param_3,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf1dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf1dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c06dc80();
    func_0x00010c1afbe0(puVar3,param_3,lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf1dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bfd5080();
    func_0x00010c1a5b00(puVar3,param_3,lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x40),param_3,puVar3);
  uVar8 = param_2 + 0x58;
  _objc_loadWeakRetained();
  uVar9 = uVar8;
  func_0x00010bf4e080();
  _objc_release(uVar8);
  puVar4 = (undefined *)(param_2 + 0x58);
  _objc_loadWeakRetained();
  puVar11 = puVar4;
  func_0x00010c083700();
  if ((int)puVar11 == 0) {
LAB_107bcdc80:
    _objc_release(puVar4);
  }
  else {
    FUN_107bc70a4();
    _objc_release(puVar4);
    if ((uVar9 & 0xfffffffffffffffd) == 8) {
      puVar4 = PTR_PTR_1126d6fe0;
      _objc_opt_new(PTR_PTR_1126d6fe0);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c160580();
      _objc_release(lVar1);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c11b1e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c185c40(puVar4,param_3,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar11 = (undefined *)(param_2 + 0x58);
      _objc_loadWeakRetained();
      puVar12 = puVar11;
      func_0x00010bf8c980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf8c9e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar6 != 0) {
        lVar1 = param_2 + 0x58;
        _objc_loadWeakRetained();
        lVar6 = lVar1;
        func_0x00010bf8c980();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_2 + 0x58;
        _objc_loadWeakRetained();
        lVar7 = lVar2;
        func_0x00010bf8c9e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar11,param_3,&PTR____CFConstantStringClassReference_110dc0f98);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(lVar7);
        _objc_release(lVar2);
        _objc_release(lVar6);
        _objc_release(lVar1);
        puVar12 = puVar11;
      }
      func_0x00010c20d1a0(puVar4,param_3,puVar12);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bf4e080();
      FUN_107bc70a4();
      func_0x00010c206c40(puVar4,param_3,lVar2);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c0de640();
      func_0x00010c203cc0(puVar4,param_3,lVar2 + 1);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bf68060();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18a920(puVar4,param_3,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010c141de0(param_1,PTR_PTR_1126cecb8);
      func_0x00010c215700(puVar4);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c27dd80();
      func_0x000107bc70e8();
      func_0x00010c198340(puVar4,param_3,lVar6);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c0de820();
      func_0x00010c1cf460(puVar4,param_3,lVar2);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c0ddfe0();
      func_0x00010c1cee20(puVar4,param_3,lVar2);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf356a0();
      if (lVar2 == 0x7fffffffffffffff) {
        func_0x00010c222660(puVar4,param_3,0xffffffffffffffff);
      }
      else {
        lVar2 = param_2 + 0x58;
        _objc_loadWeakRetained(lVar2);
        lVar6 = lVar2;
        func_0x00010bf356a0();
        func_0x00010c222660(puVar4,param_3,lVar6);
        _objc_release(lVar2);
      }
      _objc_release(lVar1);
      uVar8 = param_2 + 0x58;
      _objc_loadWeakRetained(uVar8);
      uVar9 = uVar8;
      func_0x00010c080120();
      func_0x00010c1a0ce0(puVar4,param_3,uVar9 & 0xffffffff);
      _objc_release(uVar8);
      lVar1 = param_2;
      func_0x00010be070c0(param_2);
      func_0x00010c1e7f00(puVar4,param_3,lVar1);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c0b39c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c29d360();
      func_0x00010c222620(puVar4,param_3,lVar6);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c0b39c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c29d360();
      func_0x000108534aa8();
      func_0x00010c222c00(puVar4,param_3,lVar6);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bfd49e0();
      func_0x00010c1a16e0(puVar4,param_3,lVar2);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c083700();
      _objc_release(lVar1);
      uVar10 = 10;
      if ((int)lVar2 != 0) {
        uVar10 = 0xb;
      }
      func_0x00010c20ddc0(puVar4,param_3,uVar10);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c25b7c0();
      func_0x00010c20de00(puVar4,param_3,lVar2);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c07b500();
      func_0x00010c1b39c0(puVar4,param_3,lVar2);
      _objc_release(lVar1);
      lVar1 = param_2 + 0x58;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c0724e0();
      func_0x00010c1b0ca0(puVar4,param_3,lVar2);
      _objc_release(lVar1);
      puVar11 = PTR_PTR_1126d6fe8;
      _objc_opt_new(PTR_PTR_1126d6fe8);
      func_0x00010c194940();
      puVar14 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
      func_0x00010c22bc20(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010befe540();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1663a0(puVar11,param_3,puVar16);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      puVar14 = PTR_PTR_1126af390;
      func_0x00010bfbb8a0(PTR_PTR_1126af390);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a95a0(puVar11,param_3,puVar14);
      _objc_release(puVar14);
      puVar14 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
      func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bfe5f00();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c169d80(puVar11,param_3,puVar16);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      func_0x00010c1ada20(puVar4,param_3,puVar11);
      uVar10 = param_4;
      func_0x00010c0b4ca0(param_4);
      func_0x00010c20d9e0(puVar4,param_3,uVar10);
      func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x40),param_3,puVar4);
      _objc_release(puVar11);
      _objc_release(puVar12);
      goto LAB_107bcdc80;
    }
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
LAB_107bcdc98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bcdcc0; end: 107bcdccb; -[SCDiscoverLogger setCurrentEditionSession:] */

void FUN_107bcdcc0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 107bcdccc; end: 107bce603; -[SCDiscoverLogger logDiscoverTopSnapSnapViewWithFullView:mediaDisplayTimeSec:durationSec:mediaType:stalledTimeMs:storySessionId:mediaViewTimeFixEnabled:totalMediaViewTime:] */

void FUN_107bcdccc(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  undefined4 param_6,ulong param_7,long param_8,long param_9,uint param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  dVar13 = param_1;
  dVar14 = param_2;
  _objc_retain(param_9);
  puVar2 = PTR_PTR_1126d5128;
  _objc_opt_new();
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c29d360();
  func_0x00010c222620(puVar2,param_5,lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf972a0();
  func_0x00010c196920(puVar2,param_5,lVar4);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0ea860();
  func_0x00010c1d5500(puVar2,param_5,lVar4);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c29d360();
  func_0x000108534aa8();
  func_0x00010c222c00(puVar2,param_5,lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar6 = param_4 + 0x58;
  _objc_loadWeakRetained(uVar6);
  uVar7 = uVar6;
  func_0x00010c080120();
  func_0x00010c1a0ce0(puVar2,param_5,uVar7 & 0xffffffff);
  _objc_release(uVar6);
  lVar3 = param_4;
  func_0x00010be070c0(param_4);
  func_0x00010c1e7f00(puVar2,param_5,lVar3);
  puVar8 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf5e720();
  func_0x000108442d68();
  func_0x00010c16ef20(puVar2,param_5,puVar9);
  _objc_release(puVar8);
  uVar6 = param_4 + 0x58;
  _objc_loadWeakRetained();
  uVar7 = uVar6;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c27dd80();
  _objc_release(uVar7);
  _objc_release(uVar6);
  if ((uVar10 < 0xd) && ((1L << (uVar10 & 0x3f) & 0x1430U) != 0)) {
    lVar3 = param_4 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f200();
    func_0x00010c211ce0(puVar2,param_5,(long)dVar13);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_4 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f200();
    func_0x00010c211d20(puVar2,param_5,(long)dVar14);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_4 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f260();
    func_0x00010c211d00(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_4 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f280();
    func_0x00010c211d40(puVar2);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  fVar12 = SUB84(dVar13,0);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185c40(puVar2,param_5,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar8 = (undefined *)(param_4 + 0x58);
  _objc_loadWeakRetained(puVar8);
  puVar9 = puVar8;
  func_0x00010bf8c980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf8c9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar5 != 0) {
    lVar3 = param_4 + 0x58;
    _objc_loadWeakRetained();
    lVar5 = lVar3;
    func_0x00010bf8c980();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4 + 0x58;
    _objc_loadWeakRetained();
    lVar11 = lVar4;
    func_0x00010bf8c9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar8,param_5,&PTR____CFConstantStringClassReference_110dc0f98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(lVar11);
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar3);
    puVar9 = puVar8;
  }
  func_0x00010c20d1a0(puVar2,param_5,puVar9);
  if (param_9 != 0) {
    lVar3 = param_9;
    func_0x00010c0b4ca0(param_9);
    func_0x00010c20d9e0(puVar2,param_5,lVar3);
  }
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf4e080();
  FUN_107bc70a4();
  func_0x00010c206c40(puVar2,param_5,lVar4);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0de640();
  func_0x00010c204800(puVar2,param_5,lVar4 + 1);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf68060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a920(puVar2,param_5,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar8 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  dVar13 = (double)fVar12;
  func_0x00010c1dda00(dVar13,puVar2);
  _objc_release(puVar8);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c079c60();
  func_0x00010c1b3340(puVar2,param_5,lVar4);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf09b40();
  func_0x00010c1a6fa0(puVar2,param_5,lVar4);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c07e080();
  func_0x00010c224a80(puVar2,param_5,lVar4);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c261260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f820(puVar2,param_5,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c07b500();
  func_0x00010c1b39c0(puVar2,param_5,lVar4);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0724e0();
  func_0x00010c1b0ca0(puVar2,param_5,lVar4);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0f1da0();
  _objc_release(lVar3);
  func_0x00010c141de0(dVar13,PTR_PTR_1126cecb8);
  func_0x00010c215700(puVar2);
  if ((param_10 & 1) == 0) {
    param_3 = (dVar13 * 1000.0 - (double)param_8) / 1000.0;
  }
  func_0x00010c215760(param_3,puVar2);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27dd80();
  func_0x000107bc70e8();
  func_0x00010c198340(puVar2,param_5,lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bf9b860();
  func_0x00010c198400(puVar2,param_5,lVar4);
  _objc_release(lVar3);
  puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(-dVar13,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fc0(puVar2,param_5,puVar8);
  _objc_release(puVar8);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf5e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_4 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf5e5a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20db00(puVar2,param_5,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_4 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf60120();
    func_0x00010c204840(puVar2,param_5,lVar4 + 1);
    _objc_release(lVar3);
  }
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c083760();
  uVar6 = 0xc;
  if ((int)lVar4 == 0) {
    uVar6 = param_7;
  }
  func_0x00010c1c5440(puVar2,param_5,uVar6);
  _objc_release(lVar3);
  if ((param_7 & 0xfffffffffffffff7) == 2) {
    func_0x00010c1a16e0(puVar2,param_5,1);
  }
  else if (param_7 == 1) {
    func_0x00010c1a16e0(puVar2,param_5,param_6);
    func_0x00010c222320(param_1,puVar2);
    func_0x00010c205820(param_2,puVar2);
  }
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c083700();
  _objc_release(lVar3);
  uVar1 = 10;
  if ((int)lVar4 != 0) {
    uVar1 = 0xb;
  }
  func_0x00010c20ddc0(puVar2,param_5,uVar1);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c25b7c0();
  func_0x00010c20de00(puVar2,param_5,lVar4);
  _objc_release(lVar3);
  func_0x00010c20cac0(puVar2,param_5,2);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df6e0(puVar2,param_5,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0c5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4ee0(puVar2,param_5,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_4 + 0x58;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c15ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dfe0(puVar2,param_5,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar8 = PTR_PTR_1126aed60;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107bce604;
  puStack_98 = &UNK_1108529c0;
  puStack_90 = puVar2;
  lStack_88 = param_4;
  _objc_retain(puVar2);
  func_0x00010bf5e0c0(puVar8,param_5,&puStack_b0);
  _objc_release(puStack_90);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(param_9);
  return;
}



/* Entry: 107bce604; end: 107bce633;  */

void FUN_107bce604(long param_1,undefined8 param_2)

{
  func_0x00010c1dd480(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0b2e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40),PTR_s_logUserTrackedEvent__11260a5a8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107bce634; end: 107bcef47; -[SCDiscoverLogger logDiscoverBloopsSnapSnapViewWithFullView:mediaDisplayTimeSec:durationSec:mediaType:] */

void FUN_107bce634(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  puVar1 = PTR_PTR_1126d5128;
  dVar12 = param_1;
  dVar13 = param_2;
  _objc_opt_new();
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c29d360();
  func_0x00010c222620(puVar1,param_4,lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf972a0();
  func_0x00010c196920(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0ea860();
  func_0x00010c1d5500(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c29d360();
  func_0x000108534aa8();
  func_0x00010c222c00(puVar1,param_4,lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar5 = param_3 + 0x58;
  _objc_loadWeakRetained(uVar5);
  uVar6 = uVar5;
  func_0x00010c080120();
  func_0x00010c1a0ce0(puVar1,param_4,uVar6 & 0xffffffff);
  _objc_release(uVar5);
  lVar2 = param_3;
  func_0x00010be070c0(param_3);
  func_0x00010c1e7f00(puVar1,param_4,lVar2);
  puVar7 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf5e720();
  func_0x000108442d68();
  func_0x00010c16ef20(puVar1,param_4,puVar8);
  _objc_release(puVar7);
  uVar5 = param_3 + 0x58;
  _objc_loadWeakRetained();
  uVar6 = uVar5;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c27dd80();
  _objc_release(uVar6);
  _objc_release(uVar5);
  if ((uVar9 < 0xd) && ((1L << (uVar9 & 0x3f) & 0x1430U) != 0)) {
    lVar2 = param_3 + 0x58;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f200();
    func_0x00010c211ce0(puVar1,param_4,(long)dVar12);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3 + 0x58;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f200();
    func_0x00010c211d20(puVar1,param_4,(long)dVar13);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3 + 0x58;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f260();
    func_0x00010c211d00(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3 + 0x58;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f280();
    func_0x00010c211d40(puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  fVar11 = SUB84(dVar12,0);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185c40(puVar1,param_4,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar7 = (undefined *)(param_3 + 0x58);
  _objc_loadWeakRetained(puVar7);
  puVar8 = puVar7;
  func_0x00010bf8c980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf8c9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar4 != 0) {
    lVar2 = param_3 + 0x58;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010bf8c980();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3 + 0x58;
    _objc_loadWeakRetained();
    lVar10 = lVar3;
    func_0x00010bf8c9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar7,param_4,&PTR____CFConstantStringClassReference_110dc0f98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(lVar10);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar8 = puVar7;
  }
  func_0x00010c20d1a0(puVar1,param_4,puVar8);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf4e080();
  FUN_107bc70a4();
  func_0x00010c206c40(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c079c60();
  func_0x00010c1b3340(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf68060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a920(puVar1,param_4,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  dVar12 = (double)fVar11;
  func_0x00010c1dda00(dVar12,puVar1);
  _objc_release(puVar7);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf09b40();
  func_0x00010c1a6fa0(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c07e080();
  func_0x00010c224a80(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c261260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f820(puVar1,param_4,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c07b500();
  func_0x00010c1b39c0(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0724e0();
  func_0x00010c1b0ca0(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  func_0x00010c1c5440(puVar1,param_4,param_6);
  puVar7 = PTR_PTR_1126cecb8;
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0f1da0();
  func_0x00010c141de0(puVar7);
  func_0x00010c215700(puVar1);
  _objc_release(lVar2);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0f1da0();
  func_0x00010bf65600(-dVar12,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fc0(puVar1,param_4,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar2);
  if (param_6 == 0x12) {
    func_0x00010c1a16e0(puVar1,param_4,param_5);
    func_0x00010c222320(param_1,puVar1);
    func_0x00010c205820(param_2,puVar1);
  }
  else if (param_6 == 2) {
    func_0x00010c1a16e0(puVar1,param_4,1);
  }
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27dd80();
  func_0x000107bc70e8();
  func_0x00010c198340(puVar1,param_4,lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf9b860();
  func_0x00010c198400(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0de640();
  func_0x00010c204800(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf5e5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20db00(puVar1,param_4,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf60120();
  func_0x00010c204840(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  func_0x00010c20ddc0(puVar1,param_4,10);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c25b7c0();
  func_0x00010c20de00(puVar1,param_4,lVar3);
  _objc_release(lVar2);
  func_0x00010c20cac0(puVar1,param_4,2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfe4640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1df6e0(puVar1,param_4,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0c5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4ee0(puVar1,param_4,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dfe0(puVar1,param_4,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf1dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3 + 0x58;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf1dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c06dc80();
    func_0x00010c1afbe0(puVar1,param_4,lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3 + 0x58;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf1dfc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfd5080();
    func_0x00010c1a5b00(puVar1,param_4,lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  puVar7 = PTR_PTR_1126aed60;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107bcef48;
  puStack_88 = &UNK_1108529c0;
  puStack_80 = puVar1;
  lStack_78 = param_3;
  _objc_retain(puVar1);
  func_0x00010bf5e0c0(puVar7,param_4,&puStack_a0);
  _objc_release(puStack_80);
  _objc_release(puVar1);
  _objc_release(puVar8);
  return;
}



/* Entry: 107bcef48; end: 107bcef77;  */

void FUN_107bcef48(long param_1,undefined8 param_2)

{
  func_0x00010c1dd480(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0b2e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40),PTR_s_logUserTrackedEvent__11260a5a8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107bcef78; end: 107bcf127; -[SCDiscoverLogger logPlaybackStallCount:firstStallMediaTime:firstStallDuration:totalStallDuration:currentlyStalled:firstItemType:] */

void FUN_107bcef78(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = param_4;
  func_0x00010c232da0();
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126c45f8;
    _objc_alloc_init(PTR_PTR_1126c45f8);
    func_0x00010c2091c0();
    func_0x00010c19d620(puVar2,param_5,(long)(param_1 * 1000.0));
    func_0x00010c19d5e0(puVar2,param_5,(long)(param_2 * 1000.0));
    func_0x00010c2189a0(puVar2,param_5,(long)(param_3 * 1000.0));
    func_0x00010c198660(puVar2,param_5,param_7);
    func_0x00010c226f60(puVar2,param_5,1);
    lVar1 = param_4 + 0x58;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c29d360();
    func_0x000108534aa8();
    func_0x00010c222c00(puVar2,param_5,lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b2930;
    func_0x00010bf70ea0(PTR_PTR_1126b2930);
    func_0x00010c18cd80(puVar2,param_5,puVar5);
    if (param_8 != -1) {
      func_0x00010c1b6340(puVar2,param_5,param_8);
    }
    puVar5 = PTR_PTR_1126c4600;
    _objc_alloc_init(PTR_PTR_1126c4600);
    puVar6 = PTR_PTR_1126b7410;
    func_0x00010c22b6a0(PTR_PTR_1126b7410);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf5e460();
    func_0x00010c180de0(puVar5,param_5,puVar7);
    _objc_release(puVar6);
    func_0x00010c1cc120(puVar2,param_5,puVar5);
    func_0x00010c0b2e60(*(undefined8 *)(param_4 + 0x40),param_5,puVar2);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107bcf128; end: 107bcf4fb; -[SCDiscoverLogger logLongformVideoViewWithStartedWithCaptionOn:videoWithCaptionOnTimeViewedSeconds:videoDurationSeconds:videoViewDurationSeconds:aspectRatio:videoInLandscapeModeTimeViewedSeconds:videoRotationEnabled:videoRollMinDegree:videoRollMaxDegree:] */

void FUN_107bcf128(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  uVar1 = param_6 + 0x58;
  uVar10 = param_1;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c083600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126d6ff0;
    _objc_opt_new();
    lVar4 = param_6 + 0x58;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c0f1da0();
    _objc_release(lVar4);
    func_0x00010bea2cc0(param_6,param_7,puVar3);
    func_0x00010c141de0(uVar10,PTR_PTR_1126cecb8);
    func_0x00010c215700(puVar3);
    lVar4 = param_6 + 0x58;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c27dd80();
    func_0x000107bc70e8();
    func_0x00010c198340(puVar3,param_7,lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_6 + 0x58;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c278ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_7,lVar6);
    if (((ulong)puVar7 & 1) == 0) {
      func_0x00010c219300(puVar3,param_7,lVar6);
    }
    lVar4 = param_6 + 0x58;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010bf3ffe0();
    func_0x00010c17e640(puVar3,param_7,lVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_6 + 0x58;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010bf400c0();
    func_0x00010c17e680(puVar3,param_7,lVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_6 + 0x58;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010bf3fe40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17e5a0(puVar3,param_7,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_6 + 0x58;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf5e5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      lVar4 = param_6 + 0x58;
      _objc_loadWeakRetained(lVar4);
      lVar8 = lVar4;
      func_0x00010bf5e5a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_6 + 0x58;
      _objc_loadWeakRetained(lVar5);
      lVar9 = lVar5;
      func_0x00010bf60120();
      func_0x00010bea2ca0(param_6,param_7,puVar3,lVar8,lVar9);
      _objc_release(lVar5);
      _objc_release(lVar8);
      _objc_release(lVar4);
      func_0x00010c1c0e40(puVar3,param_7,1);
      lVar4 = param_6 + 0x58;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010bf5f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c221be0(puVar3,param_7,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    func_0x00010c225f20(puVar3,param_7,param_8);
    func_0x00010c222320(param_3,puVar3);
    func_0x00010c178b00(param_1,puVar3);
    func_0x00010c16a720((double)(long)(param_4 * 100.0) / 100.0,puVar3);
    func_0x00010c141de0(param_2,PTR_PTR_1126cecb8);
    func_0x00010c192ec0(puVar3);
    func_0x00010c141de0(param_5,PTR_PTR_1126cecb8);
    func_0x00010c1b7460(puVar3);
    puVar7 = PTR_PTR_1126aed60;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_107bcf4fc;
    puStack_98 = &UNK_1108529c0;
    puStack_90 = puVar3;
    lStack_88 = param_6;
    _objc_retain(puVar3);
    func_0x00010bf5e0c0(puVar7,param_7,&puStack_b0);
    _objc_release(puStack_90);
    _objc_release(puVar3);
    _objc_release(lVar6);
  }
  return;
}



/* Entry: 107bcf4fc; end: 107bcf52b;  */

void FUN_107bcf4fc(long param_1,undefined8 param_2)

{
  func_0x00010c1dd480(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0b2e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40),PTR_s_logUserTrackedEvent__11260a5a8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107bcf52c; end: 107bcf757; -[SCDiscoverLogger logInlineInlineVideoViewWithID:mediaDisplayedTime:totalVideoDuration:fullscreenTime:inlineTime:startedWithCaptionOn:videoAspectRatio:videoInLandscapeModeTimeViewed:videoWithCaptionOnTimeViewed:] */

void FUN_107bcf52c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = param_1;
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126d6ff8;
  _objc_alloc_init(PTR_PTR_1126d6ff8);
  lVar2 = param_8 + 0x58;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0f1da0();
  _objc_release(lVar2);
  func_0x00010bea2cc0(param_8,param_9,puVar1);
  func_0x00010c141de0(uVar6,PTR_PTR_1126cecb8);
  func_0x00010c215700(puVar1);
  lVar2 = param_8 + 0x58;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf5e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_8 + 0x58;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010bf5e5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_8 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar5 = lVar3;
    func_0x00010bf60120();
    func_0x00010bea2ca0(param_8,param_9,puVar1,lVar4,lVar5);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  func_0x00010c1ad0e0(puVar1,param_9,param_10);
  func_0x00010c141de0(param_1,PTR_PTR_1126cecb8);
  func_0x00010c222320(puVar1);
  func_0x00010c141de0(param_2,PTR_PTR_1126cecb8);
  func_0x00010c192ec0(puVar1);
  func_0x00010c141de0(param_2,PTR_PTR_1126cecb8);
  func_0x00010c1c5420(puVar1);
  func_0x00010c141de0(param_3,PTR_PTR_1126cecb8);
  func_0x00010c1c47e0(puVar1);
  func_0x00010c141de0(param_4,PTR_PTR_1126cecb8);
  func_0x00010c1c4980(puVar1);
  func_0x00010c225f20(puVar1,param_9,param_11);
  func_0x00010c16a720((double)(long)(param_5 * 100.0) / 100.0,puVar1);
  func_0x00010c141de0(param_6,PTR_PTR_1126cecb8);
  func_0x00010c1b7460(puVar1);
  func_0x00010c141de0(param_7,PTR_PTR_1126cecb8);
  func_0x00010c178b00(puVar1);
  func_0x00010c0b2e60(*(undefined8 *)(param_8 + 0x40),param_9,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_10);
  return;
}



/* Entry: 107bcf758; end: 107bcfbe3; -[SCDiscoverLogger logScreenshot] */

void FUN_107bcf758(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  uVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c083600();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0836a0();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
LAB_107bcf888:
    puVar4 = PTR_PTR_1126d7008;
    _objc_opt_new(PTR_PTR_1126d7008);
    func_0x00010bea2cc0(param_1,param_2,puVar4);
    lVar5 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf5e5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010bf60120();
    func_0x00010bea2ca0(param_1,param_2,puVar4,lVar6,lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    uVar1 = param_1 + 0x58;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c0837c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_1 + 0x58;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      func_0x00010c0837e0();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        lVar5 = param_1 + 0x58;
        _objc_loadWeakRetained();
        lVar7 = lVar5;
        func_0x00010c083640();
        _objc_release(lVar5);
        if ((int)lVar7 == 0) goto LAB_107bcf978;
        uVar10 = 10;
      }
      else {
        uVar10 = 1;
      }
    }
    else {
      uVar10 = 2;
    }
  }
  else {
    uVar2 = param_1 + 0x58;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c083640();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_107bcf888;
    puVar4 = PTR_PTR_1126d7000;
    _objc_opt_new(PTR_PTR_1126d7000);
    func_0x00010bea2cc0(param_1,param_2,puVar4);
    lVar5 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf5e5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010bf60120();
    func_0x00010bea2ca0(param_1,param_2,puVar4,lVar6,lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = param_1 + 0x58;
    _objc_loadWeakRetained();
    lVar7 = lVar5;
    func_0x00010c0837c0();
    _objc_release(lVar5);
    if ((int)lVar7 == 0) {
      lVar5 = param_1 + 0x58;
      _objc_loadWeakRetained();
      lVar7 = lVar5;
      func_0x00010c0837e0();
      _objc_release(lVar5);
      if ((int)lVar7 == 0) {
        lVar5 = param_1 + 0x58;
        _objc_loadWeakRetained();
        lVar7 = lVar5;
        func_0x00010c0836c0();
        _objc_release(lVar5);
        if ((int)lVar7 == 0) {
          lVar5 = param_1 + 0x58;
          _objc_loadWeakRetained();
          lVar7 = lVar5;
          func_0x00010c0836e0();
          _objc_release(lVar5);
          if ((int)lVar7 == 0) {
            lVar5 = param_1 + 0x58;
            _objc_loadWeakRetained();
            lVar7 = lVar5;
            func_0x00010c083720();
            _objc_release(lVar5);
            if ((int)lVar7 == 0) {
              lVar5 = param_1 + 0x58;
              _objc_loadWeakRetained();
              lVar7 = lVar5;
              func_0x00010c083780();
              _objc_release(lVar5);
              if ((int)lVar7 == 0) goto LAB_107bcf978;
              uVar10 = 0xc;
            }
            else {
              uVar10 = 4;
            }
          }
          else {
            uVar10 = 10;
          }
          func_0x00010c1c0e40(puVar4,param_2,uVar10);
        }
        else {
          func_0x00010c1c0e40(puVar4,param_2,1);
          lVar5 = param_1 + 0x58;
          _objc_loadWeakRetained(lVar5);
          lVar7 = lVar5;
          func_0x00010bf5f340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c221be0(puVar4,param_2,lVar7);
          _objc_release(lVar7);
          _objc_release(lVar5);
        }
        goto LAB_107bcf978;
      }
      uVar10 = 1;
    }
    else {
      uVar10 = 2;
    }
  }
  func_0x00010c1c5440(puVar4,param_2,uVar10);
LAB_107bcf978:
  lVar5 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar5);
  lVar7 = lVar5;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar5);
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar6);
  if (((ulong)puVar9 & 1) == 0) {
    func_0x00010c219300(puVar4,param_2,lVar6);
  }
  lVar5 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar5);
  lVar7 = lVar5;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf3ffe0();
  func_0x00010c17e640(puVar4,param_2,lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  lVar5 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar5);
  lVar7 = lVar5;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf400c0();
  func_0x00010c17e680(puVar4,param_2,lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  lVar5 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar5);
  lVar7 = lVar5;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf3fe40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e5a0(puVar4,param_2,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x40),param_2,puVar4);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107bcfbe4; end: 107bcfeef; -[SCDiscoverLogger logRemoteWebpageViewWithPageLoadCount:pageLoadErrorCount:loadedOnEntry:loadedOnExit:visiblePageLoadTimeSec:userPermissionPromptCount:userPermissionPromptAllowedCount:webpageAutofillDetectedFields:webpageDetectedFields:webpageOnEditAutofilledFields:totalInteractionItemCount:lastInteractiveItemIndex:isTopSnap:] */

void FUN_107bcfbe4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  char in_stack_00000028;
  
  uVar1 = param_2 + 0x58;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c083600();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (in_stack_00000028 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010c0a5310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0,0,0,param_2,PTR_s_logDiscoverTopSnapSnapViewWithFu_112606ed0,1,10,0,0,0);
    return;
  }
  puVar3 = PTR_PTR_1126d6ff0;
  _objc_opt_new(PTR_PTR_1126d6ff0);
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0f1da0();
  _objc_release(lVar4);
  func_0x00010bea2cc0(param_2);
  func_0x00010c141de0(param_1,PTR_PTR_1126cecb8);
  func_0x00010c215700(puVar3);
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x000107bc70e8();
  func_0x00010c198340(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x00010c219300(puVar3);
  }
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ffe0();
  func_0x00010c17e640(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf400c0();
  func_0x00010c17e680(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf3fe40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e5a0(puVar3);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf5e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    lVar4 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar4);
    lVar8 = lVar4;
    func_0x00010bf5e5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bf60120();
    func_0x00010bea2ca0(param_2);
    _objc_release(lVar5);
    _objc_release(lVar8);
    _objc_release(lVar4);
    func_0x00010c1c0e40(puVar3);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x40));
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107bcfef0; end: 107bcffef; -[SCDiscoverLogger logLongformCameraViewWithLensSessionId:lensLoadedOnEntry:lensLoadedOnExit:loadingTimeSec:viewDurationTimeSec:] */

void FUN_107bcfef0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d6ff0;
  _objc_opt_new(PTR_PTR_1126d6ff0);
  func_0x00010bea2cc0(param_3,param_4,puVar1);
  lVar2 = param_3 + 0x58;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf5e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3 + 0x58;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010bf5e5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar5 = lVar3;
    func_0x00010bf60120();
    func_0x00010bea2ca0(param_3,param_4,puVar1,lVar4,lVar5);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  func_0x00010c1c0e40(puVar1,param_4,0x10);
  func_0x00010c192ec0(param_2,puVar1);
  func_0x00010c0b2e60(*(undefined8 *)(param_3 + 0x40),param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bcfff0; end: 107bd02b7; -[SCDiscoverLogger logStoreView] */

void FUN_107bcfff0(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = param_2 + 0x58;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c083600();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  puVar3 = PTR_PTR_1126d6ff0;
  _objc_opt_new(PTR_PTR_1126d6ff0);
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0f1da0();
  _objc_release(lVar4);
  func_0x00010bea2cc0(param_2,param_3,puVar3);
  func_0x00010c141de0(param_1,PTR_PTR_1126cecb8);
  func_0x00010c215700(puVar3);
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c27dd80();
  func_0x000107bc70e8();
  func_0x00010c198340(puVar3,param_3,lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,lVar6);
  if (((ulong)puVar7 & 1) == 0) {
    func_0x00010c219300(puVar3,param_3,lVar6);
  }
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf3ffe0();
  func_0x00010c17e640(puVar3,param_3,lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf400c0();
  func_0x00010c17e680(puVar3,param_3,lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf3fe40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e5a0(puVar3,param_3,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = param_2 + 0x58;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf5e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    lVar4 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar4);
    lVar8 = lVar4;
    func_0x00010bf5e5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar5);
    lVar9 = lVar5;
    func_0x00010bf60120();
    func_0x00010bea2ca0(param_2,param_3,puVar3,lVar8,lVar9);
    _objc_release(lVar5);
    _objc_release(lVar8);
    _objc_release(lVar4);
    func_0x00010c1c0e40(puVar3,param_3,4);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x40),param_3,puVar3);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107bd02b8; end: 107bd0547; -[SCDiscoverLogger logSubscriptionLongformView] */

void FUN_107bd02b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126d6ff0;
  _objc_opt_new(PTR_PTR_1126d6ff0);
  lVar2 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0f1da0();
  _objc_release(lVar2);
  func_0x00010bea2cc0(param_2,param_3,puVar1);
  func_0x00010c141de0(param_1,PTR_PTR_1126cecb8);
  func_0x00010c215700(puVar1);
  lVar2 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27dd80();
  func_0x000107bc70e8();
  func_0x00010c198340(puVar1,param_3,lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c278ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,lVar4);
  if (((ulong)puVar5 & 1) == 0) {
    func_0x00010c219300(puVar1,param_3,lVar4);
  }
  lVar2 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf3ffe0();
  func_0x00010c17e640(puVar1,param_3,lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf400c0();
  func_0x00010c17e680(puVar1,param_3,lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf3fe40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17e5a0(puVar1,param_3,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_2 + 0x58;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf5e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar2);
    lVar6 = lVar2;
    func_0x00010bf5e5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar7 = lVar3;
    func_0x00010bf60120();
    func_0x00010bea2ca0(param_2,param_3,puVar1,lVar6,lVar7);
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(lVar2);
    func_0x00010c1c0e40(puVar1,param_3,0xc);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x40),param_3,puVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bd0548; end: 107bd069f; -[SCDiscoverLogger logProductView] */

void FUN_107bd0548(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126d6ff0;
  _objc_opt_new(PTR_PTR_1126d6ff0);
  func_0x00010bea2cc0(param_2,param_3,puVar1);
  lVar2 = param_2 + 0x58;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf5e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar2;
    func_0x00010bf5e5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar3);
    lVar5 = lVar3;
    func_0x00010bf60120();
    func_0x00010bea2ca0(param_2,param_3,puVar1,lVar4,lVar5);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  lVar2 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0f1da0();
  _objc_release(lVar2);
  func_0x00010c141de0(param_1,PTR_PTR_1126cecb8);
  func_0x00010c215700(puVar1);
  lVar2 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27dd80();
  func_0x000107bc70e8();
  func_0x00010c198340(puVar1,param_3,lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x40),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bd06a0; end: 107bd06ff; -[SCDiscoverLogger logSubtitleStateChanged:userTriggered:] */

void FUN_107bd06a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7010;
  _objc_opt_new(PTR_PTR_1126d7010);
  func_0x00010c16a1e0();
  func_0x00010c1b5820(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bd0700; end: 107bd08eb; -[SCDiscoverLogger _setCommonEditionSessionPropertiesForEvent:] */

void FUN_107bd0700(float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c11b1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8f20(param_4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf8c980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8f20(param_4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_setSource__11265f538);
  if ((uVar3 & 1) != 0) {
    lVar1 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf4e080();
    FUN_107bc70a4();
    func_0x00010c206c40(param_4);
    _objc_release(lVar1);
  }
  lVar1 = param_2 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0de640();
  func_0x00010c204800(param_4);
  _objc_release(lVar1);
  uVar3 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_setDeepLinkId__112640468);
  if ((uVar3 & 1) != 0) {
    lVar1 = param_2 + 0x58;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf68060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18a920(param_4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  uVar3 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_setPlaybackVolume__1126550a8);
  if ((uVar3 & 1) != 0) {
    puVar4 = PTR_PTR_1126aed60;
    func_0x00010c15fac0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ef220();
    func_0x00010c1dda00((double)param_1,param_4);
    _objc_release(puVar4);
  }
  uVar3 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_setIsPayToPromote__11264a6f8);
  if ((uVar3 & 1) != 0) {
    param_2 = param_2 + 0x58;
    _objc_loadWeakRetained(param_2);
    func_0x00010c079c60();
    func_0x00010c1b3340(param_4);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bd08ec; end: 107bd093b; -[SCDiscoverLogger _setCommonDSnapPropertiesForEvent:dSnapId:snapIndexPos:] */

void FUN_107bd08ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  _objc_retain(param_3);
  func_0x00010c1921a0(param_3,param_2,param_4);
  func_0x00010c204840(param_3,param_2,param_5 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd093c; end: 107bd0943; -[SCDiscoverLogger _editionReadState] */

undefined8 FUN_107bd093c(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 107bd0944; end: 107bd095b; +[SCDiscoverLogger roundCGFloat:] */

double FUN_107bd0944(double param_1)

{
  return (double)(long)(param_1 * 1000.0) / 1000.0;
}



/* Entry: 107bd095c; end: 107bd0a5b; -[SCDiscoverLogger didFinishLoadingSnapId:snapIndexPos:isAd:chunkHash:loadingError:success:] */

void FUN_107bd095c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bf5e840();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_1;
      func_0x00010c08ab20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c0720c0(param_3,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((int)lVar3 != 0) {
        func_0x00010bf77000(param_1,param_2,param_3,param_4,param_5,param_6,param_8,param_7,0);
      }
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd0a5c; end: 107bd0c1f; -[SCDiscoverLogger didStartWaitingForSnapId:] */

void FUN_107bd0a5c(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar5 = param_3;
  func_0x00010c1b9000(param_1,param_2,param_3);
  puVar1 = param_3;
  func_0x00010c08fa60();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar1 != (undefined *)0x0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110dae8d8;
    lVar2 = param_1;
    func_0x00010bf5e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4e080();
    func_0x000107bc7768();
    func_0x00010c0df780(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    param_5 = 1;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_68,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf9a0e0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = param_3;
    func_0x00010c1d0640();
    _objc_release(lVar3);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf9a2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    puVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      _CACurrentMediaTime();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9a2c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      param_4 = param_3;
      func_0x00010c1d0640();
      _objc_release(param_1);
      _objc_release(puVar4);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(param_5);
  puVar4 = param_3;
  func_0x00010c08ab20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c08fa60();
  _objc_release(puVar4);
  if (puVar1 != (undefined *)0x0) {
    func_0x00010bf77000(param_3,param_2,puVar5,param_6,param_4,param_5,0,0,1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107bd0c20; end: 107bd0cd7; -[SCDiscoverLogger didPossiblyAbandonLoadingSnapId:isAd:chunkHash:snapIndexPos:] */

void FUN_107bd0c20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c08ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bf77000(param_1,param_2,param_3,param_6,param_4,param_5,0,0,1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd0cd8; end: 107bd0d8f; -[SCDiscoverLogger _playSourceForCurrentEdition] */

undefined8 FUN_107bd0cd8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf5e840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4e080();
  if (lVar2 != 4) {
    lVar2 = param_1;
    func_0x00010bf5e840();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4e080();
    if (lVar3 != 5) {
      func_0x00010bf5e840();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf4e080();
      _objc_release(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 == 6) {
        return 5;
      }
      return 1;
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return 5;
}



/* Entry: 107bd0d90; end: 107bd0d93; -[SCDiscoverLogger _shouldLogPlaybackMetrics] */

void FUN_107bd0d90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c232db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldSamplePlaybackMetrics_11266a590);
  return;
}



/* Entry: 107bd0d94; end: 107bd0fbb; -[SCDiscoverLogger logPlaybackItemActionForEditionId:snapId:isLoaded:isAd:endpoint:] */

void FUN_107bd0d94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar2 = param_1;
  func_0x00010beb4660();
  if ((int)lVar2 != 0) {
    puVar3 = PTR_PTR_1126d7018;
    _objc_alloc_init();
    func_0x00010c1b60e0();
    func_0x00010c1b6100(puVar3,param_2,0xffffffffffffffff);
    func_0x00010c1b60c0(puVar3,param_2,param_5);
    lVar2 = param_1;
    func_0x00010be749c0(param_1);
    func_0x00010c1dd2a0(puVar3,param_2,lVar2);
    lVar2 = param_1;
    func_0x00010bf5e840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c29d360();
    func_0x000108534aa8();
    func_0x00010c222c00(puVar3,param_2,lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    func_0x00010c19aa40(puVar3,param_2,0);
    func_0x00010c1b5f20(puVar3,param_2,param_4);
    uVar1 = 2;
    if (param_6 == 0) {
      uVar1 = 3;
    }
    func_0x00010c1b6340(puVar3,param_2,uVar1);
    func_0x00010c1b5f00(puVar3,param_2,param_3);
    puVar6 = PTR_PTR_1126b7410;
    func_0x00010c22b6a0(PTR_PTR_1126b7410);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf5e460();
    func_0x00010c180de0(puVar3,param_2,puVar7);
    _objc_release(puVar6);
    if ((int)param_5 == 0) {
      puVar6 = PTR_PTR_1126b7f68;
      func_0x00010c22b6a0(PTR_PTR_1126b7f68);
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_107bd0fbc;
      puStack_78 = &UNK_1108a77e8;
      _objc_retain(puVar3);
      puStack_70 = puVar3;
      lStack_68 = param_1;
      func_0x00010bf89020(puVar6,param_2,param_7,PTR___dispatch_main_q_11034be20,&puStack_90);
      _objc_release(puVar6);
      _objc_release(puStack_70);
    }
    else {
      func_0x00010c1b60a0(puVar3,param_2,3);
      func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x40),param_2,puVar3);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107bd0fbc; end: 107bd1003;  */

void FUN_107bd0fbc(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 4) {
    uVar1 = *(undefined8 *)(&UNK_10dee2108 + param_2 * 8);
  }
  else {
    uVar1 = 2;
  }
  func_0x00010c1b60a0(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0b2e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40),PTR_s_logUserTrackedEvent__11260a5a8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107bd1004; end: 107bd1047; -[SCDiscoverLogger didFinishWaitingForSnapId:snapIndexPos:isAd:chunkHash:success:error:abandoned:] */

void FUN_107bd1004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c0a1b00(param_1,param_2,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1b9010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setLastViewedLoadingSnapId__11264be28,0);
  return;
}



/* Entry: 107bd1048; end: 107bd1593; -[SCDiscoverLogger logBlizzardDsnapWaitEvent:snapId:isAd:chunkHash:success:error:abandoned:] */

void FUN_107bd1048(double param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined4 param_6,undefined **param_7,undefined8 param_8,
                  long param_9,byte param_10)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  double dVar13;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  lVar12 = param_5;
  func_0x00010c08fa60();
  if (lVar12 == 0) goto LAB_107bd155c;
  ppuVar1 = param_2;
  func_0x00010bf9a2c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar1);
  if (ppuVar2 == (undefined **)0x0) goto LAB_107bd155c;
  puVar3 = PTR_PTR_1126d7020;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = param_2;
  func_0x00010bf5e840(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf8c980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar4,param_3,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193c40(puVar3,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1921a0(puVar3,param_3,puVar4);
  _objc_release(puVar4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_7 != (undefined **)0x0) {
    ppuVar1 = param_7;
  }
  func_0x00010c1a7420(puVar3,param_3,ppuVar1);
  puVar4 = PTR_PTR_1126d7028;
  _objc_alloc_init(PTR_PTR_1126d7028);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0b4ca0();
  func_0x00010c204840(puVar4,param_3,puVar6);
  _objc_release(puVar5);
  ppuVar1 = param_2;
  func_0x00010bf5e840(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0de640();
  func_0x00010c204800(puVar4,param_3,ppuVar2);
  _objc_release(ppuVar1);
  ppuVar2 = param_2;
  func_0x00010bf5e840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar2;
  func_0x00010c15ff60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar1 = ppuVar7;
  }
  func_0x00010c222b60(puVar4,param_3,ppuVar1);
  _objc_release(ppuVar7);
  _objc_release(ppuVar2);
  ppuVar1 = param_2;
  func_0x00010bf9a0e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined **)0x0) {
LAB_107bd1360:
    _objc_release(ppuVar1);
  }
  else {
    ppuVar7 = param_2;
    func_0x00010bf9a0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    if (ppuVar9 != (undefined **)0x0) {
      ppuVar2 = param_2;
      func_0x00010bf9a0e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      _objc_release(ppuVar2);
      ppuVar2 = ppuVar1;
      func_0x00010c067ec0(ppuVar1);
      func_0x00010c206c40(puVar4,param_3,(long)(int)ppuVar2);
      goto LAB_107bd1360;
    }
  }
  func_0x00010c1af0a0(puVar4,param_3,param_6);
  puVar5 = PTR_PTR_1126d7030;
  _objc_alloc_init(PTR_PTR_1126d7030);
  if ((param_10 & 1) == 0) {
    if (param_9 == 0) {
      uVar11 = 0;
    }
    else {
      lVar12 = param_9;
      func_0x00010bf3ec40();
      if (lVar12 == 0x280) {
        uVar11 = 2;
      }
      else {
        lVar12 = param_9;
        func_0x00010bf87dc0();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar12;
        func_0x00010c0720c0();
        _objc_release(lVar12);
        uVar11 = 3;
        if ((int)lVar10 != 0) {
          uVar11 = 1;
        }
      }
    }
  }
  else {
    uVar11 = 4;
  }
  func_0x00010c215c80(puVar5,param_3,uVar11);
  ppuVar1 = param_2;
  func_0x00010bf9a300();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf4b900();
  _objc_release(ppuVar1);
  if (((ulong)ppuVar2 & 1) == 0) {
    ppuVar1 = param_2;
    func_0x00010bf9a2c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar13 = param_1;
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    _CACurrentMediaTime();
    lVar12 = (long)(dVar13 - param_1);
  }
  else {
    lVar12 = 0;
  }
  func_0x00010c215c60(puVar5,param_3,lVar12);
  func_0x00010c215d40(puVar5,param_3,1);
  puVar6 = PTR_PTR_1126d7038;
  _objc_alloc_init(PTR_PTR_1126d7038);
  func_0x00010c18f240();
  func_0x00010c1d58a0(puVar6,param_3,puVar4);
  func_0x00010c1da9a0(puVar6,param_3,puVar5);
  func_0x00010c0b2b40(param_2[7],param_3,puVar6);
  ppuVar1 = param_2;
  func_0x00010bf9a300(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(ppuVar1);
  ppuVar1 = param_2;
  func_0x00010bf9a2c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
  _objc_release(ppuVar1);
  func_0x00010bf9a0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
  _objc_release(param_2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_107bd155c:
  _objc_release(param_9);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107bd1594; end: 107bd1653; -[SCDiscoverLogger didViewDsnapWithoutWaitingForSnapId:snapIndexPos:isAd:chunkHash:] */

void FUN_107bd1594(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010bf7c000(param_1,param_2,param_3);
    uVar2 = param_1;
    func_0x00010bf9a300(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar2);
    func_0x00010bf77000(param_1,param_2,param_3,param_4,param_5,param_6,1,0,0);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd1654; end: 107bd174f; -[SCDiscoverLogger logDiscoverNotificationOpenEvent:isSubscribed:isSystem:itemType:itemTypeSpecific:notifType:section:] */

void FUN_107bd1654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7040;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1b4ca0();
  func_0x00010c1b4e80(puVar1,param_2,param_5);
  func_0x00010c1b6340(puVar1,param_2,param_6);
  func_0x00010c1b63a0(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c1ce180(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1ce740(puVar1,param_2,param_8);
  _objc_release(param_8);
  func_0x00010c1f9160(puVar1,param_2,param_9);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bd1750; end: 107bd1857; -[SCDiscoverLogger logDiscoverNotificationOpenErrorEvent:isSubscribed:isSystem:itemType:itemTypeSpecific:notifType:section:error:] */

void FUN_107bd1750(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7048;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1b4ca0();
  func_0x00010c1b4e80(puVar1,param_2,param_5);
  func_0x00010c1b6340(puVar1,param_2,param_6);
  func_0x00010c1b63a0(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c1ce180(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1ce740(puVar1,param_2,param_8);
  _objc_release(param_8);
  func_0x00010c1f9160(puVar1,param_2,param_9);
  func_0x00010c197380(puVar1,param_2,param_10);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bd1858; end: 107bd186f; -[SCDiscoverLogger currentEditionSession] */

void FUN_107bd1858(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bd1870; end: 107bd1877; -[SCDiscoverLogger lastViewedLoadingSnapId] */

undefined8 FUN_107bd1870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107bd1878; end: 107bd187f; -[SCDiscoverLogger setLastViewedLoadingSnapId:] */

void FUN_107bd1878(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107bd1880; end: 107bd1887; -[SCDiscoverLogger eventStartTimeMap] */

undefined8 FUN_107bd1880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107bd1888; end: 107bd18b7; -[SCDiscoverLogger setEventStartTimeMap:] */

void FUN_107bd1888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bd18b8; end: 107bd18bf; -[SCDiscoverLogger eventParameterMap] */

undefined8 FUN_107bd18b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107bd18c0; end: 107bd18ef; -[SCDiscoverLogger setEventParameterMap:] */

void FUN_107bd18c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bd18f0; end: 107bd18f7; -[SCDiscoverLogger eventT0Set] */

undefined8 FUN_107bd18f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107bd18f8; end: 107bd1927; -[SCDiscoverLogger setEventT0Set:] */

void FUN_107bd18f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bd1928; end: 107bd192f; -[SCDiscoverLogger sessionOpenTime] */

undefined8 FUN_107bd1928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107bd1930; end: 107bd195f; -[SCDiscoverLogger setSessionOpenTime:] */

void FUN_107bd1930(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bd1960; end: 107bd1967; -[SCDiscoverLogger shouldSamplePlaybackMetrics] */

undefined1 FUN_107bd1960(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 107bd1968; end: 107bd196f; -[SCDiscoverLogger setShouldSamplePlaybackMetrics:] */

void FUN_107bd1968(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 107bd1970; end: 107bd1a2b; -[SCDiscoverLogger .cxx_destruct] */

void FUN_107bd1970(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 107bd1a2c; end: 107bd1b4b;  */

ulong FUN_107bd1a2c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb3778);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  if ((uVar2 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea1ad8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0;
    func_0x00010bf4b900(&PTR__OBJC_CLASS___NSConstantArray_111181940,param_2,uVar3);
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea1ad8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c0720c0();
      if ((int)uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar4 = param_1;
        func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ea1af8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
      }
      _objc_release(uVar2);
    }
    else {
      uVar5 = 1;
    }
    _objc_release(uVar3);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 107bd1b4c; end: 107bd1b5b; +[SCRankingBlizzardEventLogger shouldSamplePlaybackMetrics] */

void FUN_107bd1b4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c232710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4024000000000000,PTR__OBJC_CLASS___UIDevice_1126aeb10,
             PTR_s_shouldReportForPercentage__11266a3e8);
  return;
}



/* Entry: 107bd1b5c; end: 107bd1f77; +[SCRankingBlizzardEventLogger logFeedPageOpenWithData:blizzardLogger:] */

void FUN_107bd1b5c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d7050;
  _objc_opt_new(PTR_PTR_1126d7050);
  func_0x00010bea2340(PTR_PTR_1126d6f70);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1a2e40(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21eb00(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c196bc0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c206f20(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1967e0(puVar1);
    _objc_release(uVar2);
  }
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if (uVar3 != 0) {
    func_0x00010c206f80(puVar1);
  }
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  if (uVar3 != 0) {
    func_0x00010c067fc0(uVar5);
    func_0x00010c1769e0(puVar1);
  }
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c2368;
  _objc_opt_class(PTR_PTR_1126c2368);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  if (uVar5 != 0) {
    func_0x00010c1722e0(puVar1);
  }
  uVar7 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar4);
  uVar6 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  uVar8 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar4);
  uVar7 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar8);
  if (uVar6 != 0 || uVar7 != 0) {
    uVar9 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar10 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar4);
    uVar8 = uVar9;
    if ((uVar10 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar9);
    puVar4 = PTR_PTR_1126d7058;
    _objc_opt_new(PTR_PTR_1126d7058);
    func_0x00010c1ce740();
    func_0x00010c1ce6a0(puVar4);
    func_0x00010c20d1a0(puVar4);
    _objc_release(uVar8);
    func_0x00010c196960(puVar1);
    _objc_release(puVar4);
  }
  func_0x00010c0b2e60(param_4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd1f78; end: 107bd211f; +[SCRankingBlizzardEventLogger logFeedPageUpdateWithData:blizzardLogger:] */

void FUN_107bd1f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d7060;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bea2340(PTR_PTR_1126d6f70,param_2,puVar1,param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed79b8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4ca0();
  func_0x00010c1a2e40(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dcad78);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4ca0();
  func_0x00010c1d8800(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f43398);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4ca0();
  func_0x00010c21c5c0(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e5f1f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8620(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41c18);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4ca0();
  func_0x00010c1f9160(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41cb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1f9520(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bd2120; end: 107bd2683; +[SCRankingBlizzardEventLogger logFeedPageViewWithData:blizzardLogger:] */

void FUN_107bd2120(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d7068;
  _objc_opt_new(PTR_PTR_1126d7068);
  func_0x00010bea2340(PTR_PTR_1126d6f70);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1a2e40(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c215780(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9400(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c19b140(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c19b040(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c196b80(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1d8520(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c19d200(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17b6e0(puVar1);
  _objc_release(uVar2);
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  if (uVar2 != 0) {
    func_0x00010c0b4ca0(uVar3);
    func_0x00010c205c00(puVar1);
  }
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c19b120(puVar1);
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c196ae0(puVar1);
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1cf280(puVar1);
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c2157a0(puVar1);
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20cd60(puVar1);
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20cd40(puVar1);
    _objc_release(uVar3);
  }
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  if (uVar3 != 0) {
    func_0x00010bf1f3c0(uVar5);
    func_0x00010c1a5800(puVar1);
  }
  func_0x00010c0b2e60(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd2684; end: 107bd26e3; +[SCRankingBlizzardEventLogger logFullScreenContentViewSessionWithData:blizzardLogger:] */

void FUN_107bd2684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7070;
  _objc_retain(param_4);
  func_0x00010c0d8d20(puVar1,param_2,param_3);
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bd26e4; end: 107bd27b7; +[SCRankingBlizzardEventLogger logFeedPageViewWithPageType:pageTypeSpecific:pageSessionId:gesture:timeViewedSec:blizzardLogger:] */

void FUN_107bd26e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7068;
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010c1d8800();
  func_0x00010c1d8820(puVar1,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c1d8620(puVar1,param_3,param_6);
  _objc_release(param_6);
  func_0x00010c1a2e40(puVar1,param_3,param_7);
  func_0x00010c215780(param_1,puVar1);
  func_0x00010c0b2e60(param_8,param_3,puVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bd27b8; end: 107bd36d7; +[SCRankingBlizzardEventLogger logContentCommentsActionWithData:blizzardLogger:] */

void FUN_107bd27b8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d7078;
  _objc_opt_new(PTR_PTR_1126d7078);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c161fe0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1a2e40(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c2115c0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c182a00(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182a20(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1af180(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1d8800(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8620(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f060(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c182be0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c17efc0(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c17efe0(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c17efa0(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ee20(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df740(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7c60(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c215800(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c205300(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c215820(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1adfe0(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9040(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ed0a0(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9060(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19b200(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b4ca0(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c19b040(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1c6b00(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1c69e0(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ee80(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1f9160(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9520(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c17f040(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1adfe0(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1947c0(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c194680(puVar1);
    _objc_release(uVar2);
  }
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    func_0x00010c180620(puVar1);
  }
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    func_0x00010c1d9080(puVar1);
  }
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b140(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b720(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20b7a0(puVar1);
    _objc_release(uVar5);
  }
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1be3c0(puVar1);
    _objc_release(uVar5);
  }
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b0ea0(puVar1);
    _objc_release(uVar5);
  }
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    uVar5 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c19b5a0(puVar1);
    _objc_release(uVar5);
  }
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  uVar6 = uVar5;
  func_0x00010c08fa60();
  if (uVar6 != 0) {
    func_0x00010c20fae0(puVar1);
  }
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar6 != 0) {
    uVar6 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c17ef80(puVar1);
    _objc_release(uVar6);
  }
  func_0x00010c0b2e60(param_4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd36d8; end: 107bd3793; +[SCRankingBlizzardEventLogger logFeedPageRefreshWithData:blizzardLogger:] */

void FUN_107bd36d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d7080;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bea2340(PTR_PTR_1126d6f70,param_2,puVar1,param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed79b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0b4ca0(uVar2);
  func_0x00010c1a2e40(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bd3794; end: 107bd397b; +[SCRankingBlizzardEventLogger logFeedPageScrollWithData:blizzardLogger:] */

void FUN_107bd3794(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d7088;
  _objc_opt_new(PTR_PTR_1126d7088);
  func_0x00010bea2340(PTR_PTR_1126d6f70,param_2,puVar1,param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed79b8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b4ca0();
  func_0x00010c1a2e40(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41a58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7c80(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41a78);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41a58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(lVar2,param_2,lVar3);
  func_0x00010c1f7ae0(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41c18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41c18);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1f9160(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41c98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41c98);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1f95a0(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd397c; end: 107bd39fb; +[SCRankingBlizzardEventLogger logFeedItemImpressionWithData:blizzardLogger:] */

void FUN_107bd397c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7090;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bea3ea0(PTR_PTR_1126d6f70,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bd39fc; end: 107bd3c13; +[SCRankingBlizzardEventLogger logFeedItemImpressionBatchWithData:blizzardLogger:] */

void FUN_107bd39fc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d7098;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010bea2340(PTR_PTR_1126d6f70);
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1ec6e0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1b6080(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1f9160(puVar1);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1f95a0(puVar1);
    _objc_release(uVar2);
  }
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  func_0x00010c20d120(puVar1);
  _objc_release(uVar2);
  func_0x00010c0b2e60(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd3c14; end: 107bd4653; +[SCRankingBlizzardEventLogger _setFeedImpressionDataForEvent:data:] */

void FUN_107bd3c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bea2340(PTR_PTR_1126d6f70);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e540(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a93a0(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1ec6e0(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1b61a0(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1b6080(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1b6340(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b63a0(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7840(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1f9160(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1f95a0(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c206c40(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16af80(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184460(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214840(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2204e0(param_3);
  _objc_release(uVar1);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010c0b4ca0(uVar2);
    func_0x00010c20de40(param_3);
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c21a460(param_3);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c2147c0(param_3);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c2147a0(param_3);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1b39c0(param_3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1b0ca0(param_3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b4ca0(param_3);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a440(param_3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b26e0(param_3);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185c40(param_3);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b0c60(param_3);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df6e0(param_3);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c179bc0(param_3);
    _objc_release(uVar2);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  if ((uVar2 != 0) && (func_0x00010c08fa60(), uVar4 != 0)) {
    func_0x00010c2177e0(param_3);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c217a00(param_3);
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1d6360(param_3);
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1b0280(param_3);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1a5b00(param_3);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1c87a0(param_3);
    _objc_release(uVar4);
  }
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  uVar5 = uVar4;
  func_0x00010c08fa60();
  if (uVar5 != 0) {
    func_0x00010c1bbd60(param_3);
  }
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    uVar5 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183100(param_3);
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd4654; end: 107bd483b; +[SCRankingBlizzardEventLogger logFeedItemLongImpressionWithData:blizzardLogger:] */

void FUN_107bd4654(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d70a0;
  _objc_opt_new(PTR_PTR_1126d70a0);
  func_0x00010bea3ea0(PTR_PTR_1126d6f70,param_2,puVar1,param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42038);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aae40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72498);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1aaec0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42118);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1aae20(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42158);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f3c0();
  func_0x00010c227180(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42358);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42358);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    func_0x00010c1ee2e0(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41d98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41d98);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1af920(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd483c; end: 107bd49e3; +[SCRankingBlizzardEventLogger logDiscoverFeedItemImpressionWithData:blizzardLogger:] */

void FUN_107bd483c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d70a8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126d66c8;
  _objc_opt_new(PTR_PTR_1126d66c8);
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e02998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea1ad8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea1ad8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b4ca0();
    func_0x00010c1b6340(puVar2,param_2,lVar4);
    _objc_release(lVar3);
  }
  puVar5 = PTR_PTR_1126c8408;
  _objc_opt_new(PTR_PTR_1126c8408);
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dcad78);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b4ca0();
  func_0x00010c1d8800(puVar5,param_2,lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e5f1f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8620(puVar5,param_2,lVar3);
  _objc_release(lVar3);
  func_0x00010c1d8360(puVar1,param_2,puVar2);
  func_0x00010c1d8300(puVar1,param_2,puVar5);
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd49e4; end: 107bd4d8f; +[SCRankingBlizzardEventLogger logContentCommentLongImpressionWithData:blizzardLogger:] */

void FUN_107bd49e4(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d70b0;
  _objc_opt_new(PTR_PTR_1126d70b0);
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f42ff8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f42ff8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ee20(puVar1,param_3,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f43038);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f43038);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9040(puVar1,param_3,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f43058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f43058);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ed0a0(puVar1,param_3,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f42038);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f42038);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1aae60(puVar1,param_3,(long)param_1);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110e72498);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110e72498);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1aae80(puVar1,param_3,(long)(param_1 * 1000.0));
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f420d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f420d8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1dee80(puVar1,param_3,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110dcad78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110dcad78);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1d8800(puVar1,param_3,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110dba818);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110dba818);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar1,param_3,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f430f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_3,&PTR____CFConstantStringClassReference_110f430f8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17f060(puVar1,param_3,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  func_0x00010c0b2e60(param_5,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bd4d90; end: 107bd4f67; +[SCRankingBlizzardEventLogger logContentTooltipImpressionWithData:blizzardLogger:] */

void FUN_107bd4d90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d70b8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e02998);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e02998);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5f20(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea1ad8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea1ad8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1b6340(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e5f1f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8620(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dcad78);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b4ca0();
  func_0x00010c1d8800(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb3738);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8820(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42378);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b4ca0();
  func_0x00010c217280(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd4f68; end: 107bd53bb; +[SCRankingBlizzardEventLogger logStoryFeedTileViewWithData:blizzardLogger:] */

void FUN_107bd4f68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d70c0;
  _objc_opt_new(PTR_PTR_1126d70c0);
  func_0x00010bea2340(param_1,param_2,puVar1,param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41c18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41c18);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1f9160(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e02998);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e02998);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b5f20(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72518);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1b61a0(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea1ad8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea1ad8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1b6340(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42198);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42198);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20efc0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41ed8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214840(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42bd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42bd8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1aab60(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41fb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41fb8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c214980(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42ab8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42ab8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1cf480(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41f78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41f78);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1ca720(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41f98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41f98);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c21be00(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f43a98);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f3c0();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    func_0x00010c1ae6a0(puVar1,param_2,1);
  }
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd53bc; end: 107bd5823; +[SCRankingBlizzardEventLogger logContentCommentsSnapReplyActionWithData:blizzardLogger:] */

void FUN_107bd53bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d70c8;
  _objc_opt_new(PTR_PTR_1126d70c8);
  func_0x00010bea2340(param_1,param_2,puVar1,param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f430f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f430f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17f060(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc60f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc60f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dba818);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dba818);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41e78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41e78);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c182be0(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dcad78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dcad78);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1d8800(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f437d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f437d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205380(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f437f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f437f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205360(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f43818);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f43818);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c161fe0(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f43838);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f43838);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c17ef80(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e72518);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1b61a0(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed79b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed79b8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1a2e40(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f430d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f430d8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1af180(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd5824; end: 107bd58a3; +[SCRankingBlizzardEventLogger logFeedItemActionWithData:blizzardLogger:] */

void FUN_107bd5824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d70d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bea18e0(PTR_PTR_1126d6f70,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bd58a4; end: 107bd6faf; +[SCRankingBlizzardEventLogger _setActionDataForEvent:data:] */

void FUN_107bd58a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bea2340(PTR_PTR_1126d6f70);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e540(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a93a0(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1ec6e0(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  func_0x00010c1b61a0(param_3);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1b6080(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1b6340(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6720(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184460(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b63a0(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7840(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1a2e40(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c161620(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1d85a0(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20efc0(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20efe0(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c206c40(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1f9160(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1f95a0(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a440(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c21a480(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1833c0(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7520(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce180(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1eaec0(param_3);
    _objc_release(uVar1);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c240(param_3);
    _objc_release(uVar1);
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d50c0;
  _objc_opt_class(PTR_PTR_1126d50c0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010c11fd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125a80();
    func_0x00010c1c87a0(param_3);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16af80(param_3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1b39c0(param_3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1b0ca0(param_3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214840(param_3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2204e0(param_3);
  _objc_release(uVar2);
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  if (uVar2 != 0) {
    func_0x00010c0b4ca0(uVar4);
    func_0x00010c20de40(param_3);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1b0280(param_3);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b4ca0(param_3);
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1adfe0(param_3);
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1ae000(param_3);
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a0c0(param_3);
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b26e0(param_3);
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185c40(param_3);
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1a5b00(param_3);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1afbe0(param_3);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c227180(param_3);
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1b3340(param_3);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df6e0(param_3);
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b4480(param_3);
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1af920(param_3);
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1afde0(param_3);
    _objc_release(uVar4);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = param_4;
  func_0x000107cb6e48(param_4,&PTR____CFConstantStringClassReference_110f42298,puVar3);
  if ((int)uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b07a0(param_3);
    _objc_release(uVar4);
  }
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar4 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c217a00(param_3);
    _objc_release(uVar4);
  }
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  uVar5 = uVar4;
  func_0x00010c08fa60();
  if (uVar5 != 0) {
    func_0x00010c2177e0(param_3);
  }
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 != 0) {
    uVar5 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c183120(param_3);
    _objc_release(uVar5);
  }
  uVar6 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  uVar6 = uVar5;
  func_0x00010c08fa60();
  if (uVar6 != 0) {
    func_0x00010c20fae0(param_3);
  }
  uVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar3);
  uVar6 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  uVar7 = uVar6;
  func_0x00010c08fa60();
  if (uVar7 != 0) {
    func_0x00010c17f020(param_3);
  }
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar3);
  uVar7 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar7);
  if (uVar7 != 0) {
    uVar7 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1f7f80(param_3);
    _objc_release(uVar7);
  }
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar3);
  uVar7 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar7);
  if (uVar7 != 0) {
    uVar7 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1f7f60(param_3);
    _objc_release(uVar7);
  }
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar3);
  uVar7 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar7);
  if (uVar7 != 0) {
    uVar7 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c207c40(param_3);
    _objc_release(uVar7);
  }
  uVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar7 != 0) {
    uVar7 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9040(param_3);
    _objc_release(uVar7);
  }
  uVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar7 != 0) {
    uVar7 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ee20(param_3);
    _objc_release(uVar7);
  }
  uVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar7 != 0) {
    uVar7 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8a40(param_3);
    _objc_release(uVar7);
  }
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar3);
  uVar7 = uVar8;
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar8);
  if ((uVar7 != 0) && (uVar9 = uVar8, func_0x00010c0b4ca0(), -1 < (long)uVar9)) {
    func_0x00010c0b4ca0(uVar8);
    func_0x00010c1f8700(param_3);
  }
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar8 != 0) {
    uVar8 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8100(param_3);
    _objc_release(uVar8);
  }
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar8 != 0) {
    uVar8 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8840(param_3);
    _objc_release(uVar8);
  }
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar8 != 0) {
    uVar8 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ab920(param_3);
    _objc_release(uVar8);
  }
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar8 != 0) {
    uVar8 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ab860(param_3);
    _objc_release(uVar8);
  }
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar8 != 0) {
    uVar8 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ab900(param_3);
    _objc_release(uVar8);
  }
  uVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar8 != 0) {
    uVar8 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ab9a0(param_3);
    _objc_release(uVar8);
  }
  uVar9 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar10 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar3);
  uVar8 = uVar9;
  if ((uVar10 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar9);
  if (uVar8 == 0) goto LAB_107bd6e54;
  func_0x00010c0b4fe0();
  func_0x00010c1ab8e0(param_3);
  uVar10 = param_4;
  if (uVar9 == 2) {
    uVar9 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar9 == 0) goto LAB_107bd6e54;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c1ab8c0(param_3);
  }
  else if (uVar9 == 1) {
    uVar9 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar9 == 0) goto LAB_107bd6e54;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4fe0();
    func_0x00010c1ab880(param_3);
  }
  else {
    if (uVar9 != 0) goto LAB_107bd6e54;
    uVar9 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar9 == 0) goto LAB_107bd6e54;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ab8a0(param_3);
  }
  _objc_release(uVar10);
LAB_107bd6e54:
  uVar10 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar11 = uVar10;
  _objc_opt_isKindOfClass(uVar10,puVar3);
  uVar9 = uVar10;
  if ((uVar11 & 1) == 0) {
    uVar9 = 0;
  }
  _objc_retain(uVar9);
  _objc_release(uVar10);
  if (uVar9 != 0) {
    func_0x00010c0b4fe0(uVar10);
    func_0x00010c1ab980(param_3);
  }
  uVar10 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d56e0(param_3);
  _objc_release(uVar10);
  uVar11 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar12 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar3);
  uVar10 = uVar11;
  if ((uVar12 & 1) == 0) {
    uVar10 = 0;
  }
  _objc_retain(uVar10);
  _objc_release(uVar11);
  uVar11 = uVar10;
  func_0x00010c08fa60();
  if (uVar11 != 0) {
    func_0x00010c1feca0(param_3);
  }
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd6fb0; end: 107bd702f; +[SCRankingBlizzardEventLogger logFeedItemCriticalActionWithData:blizzardLogger:] */

void FUN_107bd6fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ce758;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bea18e0(PTR_PTR_1126d6f70,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bd7030; end: 107bd7177; +[SCRankingBlizzardEventLogger logFeedItemViewSessionWithData:blizzardLogger:doubleLogToProdTableEnabled:enableInvalidViewTimeLoggingFix:grapheneLogger:] */

void FUN_107bd7030(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d70d8;
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010beaa180(PTR_PTR_1126d6f70);
  _objc_release(param_7);
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c08fa60();
  if (uVar3 != 0) {
    func_0x00010c1c4ee0(puVar2);
  }
  puVar4 = puVar2;
  func_0x00010bf0a640();
  _objc_retainAutoreleasedReturnValue();
  if ((param_5 == 0) || (puVar6 = puVar4, FUN_107bd1a2c(), ((ulong)puVar6 & 1) == 0)) {
    func_0x00010c0b2e60(param_4);
  }
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bd7178; end: 107bd724f; +[SCRankingBlizzardEventLogger logFeedItemViewSessionCriticalWithData:blizzardLogger:doubleLogToProdTableEnabled:enableInvalidViewTimeLoggingFix:grapheneLogger:] */

void FUN_107bd7178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d70e0;
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010beaa180(PTR_PTR_1126d6f70,param_2,puVar1,param_3,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf0a640();
  _objc_retainAutoreleasedReturnValue();
  if ((param_5 == 0) || (puVar3 = puVar2, FUN_107bd1a2c(), ((ulong)puVar3 & 1) == 0)) {
    func_0x00010c0b2e60(param_4,param_2,puVar1);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bd7250; end: 107bd90eb; +[SCRankingBlizzardEventLogger _setViewSessionDataForEvent:data:enableInvalidViewTimeLoggingFix:grapheneLogger:] */

void FUN_107bd7250(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5,int param_6,undefined8 param_7)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  double dVar16;
  undefined *apuStack_288 [16];
  long lStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  ppuVar14 = param_5;
  func_0x00010bea2340(PTR_PTR_1126d6f70);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e540(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a93a0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1ec6e0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c222be0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1b6340(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b63a0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7840(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6720(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184460(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1b6080(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1f9160(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1f95a0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar2);
  func_0x00010c1b61a0(param_4);
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1b61a0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c179bc0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c206c40(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c196820(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c196920(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1d5500(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1adfe0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20efc0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c20efe0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c204800(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c204840(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16af80(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1c3780(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c196820(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  if (param_6 == 0) {
    func_0x00010c222d40(param_4);
    _objc_release(ppuVar2);
  }
  else {
    _objc_release(ppuVar2);
    if (param_1 < 0.0) {
      FUN_107bf0634(param_7,NAN(param_1),1);
      param_1 = 0.0;
    }
    func_0x00010c222d40(param_4);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar15 = ppuVar2;
  _objc_opt_isKindOfClass(ppuVar2,puVar4);
  ppuVar3 = ppuVar2;
  if (((ulong)ppuVar15 & 1) == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  _objc_retain(ppuVar3);
  _objc_release(ppuVar2);
  if (ppuVar3 != (undefined **)0x0) {
    func_0x00010bf885a0(ppuVar2);
    if ((NAN(param_1)) || (dVar16 = param_1, func_0x00010bf885a0(ppuVar2), dVar16 < 0.0)) {
      _objc_release(ppuVar2);
      FUN_107bf0634(param_7,NAN(param_1),1);
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbae8;
    }
    func_0x00010bf885a0(ppuVar2);
    func_0x00010c184400(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c218ba0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222bc0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b82e0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1c5440(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cf4e0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cf6a0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c2185e0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c198340(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c198400(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1b39c0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1b0ca0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214840(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2204e0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar3 = ppuVar2;
  _objc_opt_isKindOfClass(ppuVar2,puVar4);
  ppuStack_158 = ppuVar2;
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuStack_158 = (undefined **)0x0;
  }
  _objc_retain(ppuStack_158);
  _objc_release(ppuVar2);
  if (ppuStack_158 != (undefined **)0x0) {
    func_0x00010c0b4ca0(ppuVar2);
    func_0x00010c20de40(param_4);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a440(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1b0280(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c21a480(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c21a460(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df6e0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1df5c0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb880(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c227180(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b4ca0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b26e0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar3 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar15 = ppuVar3;
  _objc_opt_isKindOfClass(ppuVar3,puVar4);
  ppuVar2 = ppuVar3;
  if (((ulong)ppuVar15 & 1) == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar3 != (undefined **)0x0) {
    func_0x00010c2177e0(param_4);
  }
  ppuVar3 = param_5;
  ppuStack_148 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c217a00(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d56e0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185c40(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b0c60(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c208b20(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c208ac0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b4d20(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c224a80(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f820(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1a5b00(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1afbe0(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1b3340(param_4);
  _objc_release(ppuVar2);
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1af920(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1afde0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183140(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a0c0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183100(param_4);
    _objc_release(ppuVar2);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar2 = param_5;
  func_0x000107cb6e48(param_5,&PTR____CFConstantStringClassReference_110f42298,puVar4);
  if ((int)ppuVar2 != 0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b07a0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce180(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1833c0(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c240(param_4);
    _objc_release(ppuVar2);
    ppuVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar2 = param_5;
      func_0x00010c0e00e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c1bc580(param_4);
      _objc_release(ppuVar2);
    }
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc920(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb540(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar3 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar15 = ppuVar3;
  _objc_opt_isKindOfClass(ppuVar3,puVar4);
  ppuVar2 = ppuVar3;
  if (((ulong)ppuVar15 & 1) == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar3 != (undefined **)0x0) {
    func_0x00010c1827a0(param_4);
  }
  ppuVar3 = param_5;
  ppuStack_160 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar15 = ppuVar3;
  _objc_opt_isKindOfClass(ppuVar3,puVar4);
  ppuVar2 = ppuVar3;
  if (((ulong)ppuVar15 & 1) == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar3 != (undefined **)0x0) {
    func_0x00010c182780(param_4);
  }
  ppuVar3 = param_5;
  ppuStack_168 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar15 = ppuVar3;
  _objc_opt_isKindOfClass(ppuVar3,puVar4);
  ppuVar2 = ppuVar3;
  if (((ulong)ppuVar15 & 1) == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar3 != (undefined **)0x0) {
    func_0x00010c1feca0(param_4);
  }
  ppuVar3 = param_5;
  ppuStack_170 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c226980(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1f9a80(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8a40(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar3 = ppuVar2;
  _objc_opt_isKindOfClass(ppuVar2,puVar4);
  ppuStack_178 = ppuVar2;
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuStack_178 = (undefined **)0x0;
  }
  _objc_retain(ppuStack_178);
  _objc_release(ppuVar2);
  if ((ppuStack_178 != (undefined **)0x0) &&
     (ppuVar3 = ppuVar2, func_0x00010c0b4ca0(), -1 < (long)ppuVar3)) {
    func_0x00010c0b4ca0(ppuVar2);
    func_0x00010c1f8700(param_4);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8100(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar2 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f8840(param_4);
    _objc_release(ppuVar2);
  }
  ppuVar3 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar15 = ppuVar3;
  _objc_opt_isKindOfClass(ppuVar3,puVar4);
  ppuVar2 = ppuVar3;
  if (((ulong)ppuVar15 & 1) == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar3 != (undefined **)0x0) {
    func_0x00010c20fae0(param_4);
  }
  ppuVar3 = param_5;
  ppuStack_180 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar15 = ppuVar3;
  _objc_opt_isKindOfClass(ppuVar3,puVar4);
  ppuVar2 = ppuVar3;
  if (((ulong)ppuVar15 & 1) == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar3 != (undefined **)0x0) {
    func_0x00010c1ab920(param_4);
  }
  ppuVar3 = param_5;
  ppuStack_188 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar15 = ppuVar3;
  _objc_opt_isKindOfClass(ppuVar3,puVar4);
  ppuVar2 = ppuVar3;
  if (((ulong)ppuVar15 & 1) == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar3);
  ppuVar15 = ppuStack_148;
  if ((ppuVar2 != (undefined **)0x0) &&
     (ppuVar5 = ppuVar3, func_0x00010c0b4ca0(), -1 < (long)ppuVar5)) {
    func_0x00010c0b4ca0(ppuVar3);
    func_0x00010c1ab960(param_4);
  }
  ppuVar5 = param_5;
  uStack_150 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  ppuVar6 = ppuVar5;
  _objc_opt_isKindOfClass(ppuVar5,puVar4);
  ppuVar3 = ppuVar5;
  if (((ulong)ppuVar6 & 1) == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  _objc_retain(ppuVar3);
  _objc_release(ppuVar5);
  if (ppuVar3 != (undefined **)0x0) {
    func_0x00010c1ab940(param_4);
  }
  ppuVar6 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar7 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar4);
  ppuVar5 = ppuVar6;
  if (((ulong)ppuVar7 & 1) == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  _objc_retain(ppuVar5);
  _objc_release(ppuVar6);
  ppuVar6 = ppuVar5;
  func_0x00010c08fa60();
  if (ppuVar6 != (undefined **)0x0) {
    func_0x00010c1ab900(param_4);
  }
  ppuVar6 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1c87a0(param_4);
  _objc_release(ppuVar6);
  ppuVar6 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca440(param_4);
  _objc_release(ppuVar6);
  ppuVar6 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2f20(param_4);
  _objc_release(ppuVar6);
  ppuVar6 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9ee0(param_4);
  _objc_release(ppuVar6);
  ppuVar6 = param_5;
  func_0x00010c0e00e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c1ca420(param_4);
  _objc_release(ppuVar6);
  ppuVar6 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar14 = ppuVar6;
    func_0x00010be76240(PTR_PTR_1126d6f70);
  }
  ppuVar9 = &PTR____CFConstantStringClassReference_110f438b8;
  ppuVar7 = param_5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x00010bf529e0();
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_1a8 = ppuVar6;
    ppuStack_1a0 = ppuVar5;
    ppuStack_198 = ppuVar3;
    ppuStack_190 = ppuVar2;
    _objc_opt_new();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(ppuVar7);
    ppuVar14 = apuStack_100;
    ppuVar2 = ppuVar7;
    func_0x00010bf52a60();
    if (ppuVar2 != (undefined **)0x0) {
      lVar12 = *plStack_130;
      do {
        ppuVar14 = (undefined **)0x0;
        do {
          if (*plStack_130 != lVar12) {
            _objc_enumerationMutation(ppuVar7);
          }
          uVar11 = *(undefined8 *)(lStack_138 + (long)ppuVar14 * 8);
          puVar4 = PTR_PTR_1126d70e8;
          _objc_opt_new(PTR_PTR_1126d70e8);
          func_0x00010c249ca0(uVar11);
          func_0x00010c207c40(puVar4);
          func_0x00010c29e540(uVar11);
          func_0x00010c222d40(puVar4);
          func_0x00010befa120(ppuVar15);
          _objc_release(puVar4);
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (ppuVar2 != ppuVar14);
        ppuVar14 = apuStack_100;
        ppuVar2 = ppuVar7;
        func_0x00010bf52a60();
      } while (ppuVar2 != (undefined **)0x0);
    }
    _objc_release(ppuVar7);
    ppuVar9 = ppuVar15;
    func_0x00010c1dd8a0(param_4);
    _objc_release(ppuVar15);
    ppuVar15 = ppuStack_148;
    ppuVar2 = ppuStack_190;
    ppuVar3 = ppuStack_198;
    ppuVar5 = ppuStack_1a0;
    ppuVar6 = ppuStack_1a8;
  }
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuStack_188);
  _objc_release(ppuStack_180);
  _objc_release(ppuStack_178);
  _objc_release(ppuStack_170);
  _objc_release(ppuStack_168);
  _objc_release(ppuStack_160);
  _objc_release(ppuVar15);
  _objc_release(ppuStack_158);
  _objc_release(uStack_150);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_107bd90ec;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = ppuVar9;
  ppuVar8 = ppuVar14;
  ppuStack_200 = ppuVar7;
  ppuStack_1f8 = ppuVar6;
  ppuStack_1f0 = ppuVar5;
  ppuStack_1e8 = ppuVar3;
  ppuStack_1e0 = ppuVar2;
  ppuStack_1d8 = ppuVar15;
  ppuStack_1d0 = param_5;
  uStack_1c8 = param_4;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  _objc_retain(ppuVar14);
  ppuVar2 = ppuVar14;
  func_0x00010bf529e0();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = (undefined **)PTR_PTR_1126c4730;
    _objc_opt_new();
    _objc_retain(ppuVar14);
    ppuVar8 = apuStack_288;
    ppuVar2 = ppuVar14;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (ppuVar2 != (undefined **)0x0) {
      ppuVar15 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(ppuVar14);
        }
        uVar13 = *(undefined8 *)((long)ppuVar15 * 8);
        uVar11 = uVar13;
        func_0x00010c247520();
        iVar1 = (int)uVar11;
        if (iVar1 == 3) {
          func_0x00010c224120(ppuVar3);
          func_0x00010c0cecc0(uVar13);
          func_0x00010c224160(ppuVar3);
        }
        else if (iVar1 == 2) {
          func_0x00010c1c9c60(ppuVar3);
          func_0x00010c0cecc0(uVar13);
          func_0x00010c1c9f60(ppuVar3);
        }
        else if (iVar1 == 1) {
          func_0x00010c0cecc0(uVar13);
          func_0x00010c16f3a0(ppuVar3);
        }
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while (ppuVar2 != ppuVar15);
      ppuVar8 = apuStack_288;
      ppuVar2 = ppuVar14;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar14);
    ppuVar10 = ppuVar3;
    func_0x00010c16bee0(ppuVar9);
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar14);
  _objc_release(ppuVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
    ___stack_chk_fail();
    _objc_retain(ppuVar10);
    _objc_retain(ppuVar8);
    puVar4 = PTR_PTR_1126d6f70;
    func_0x00010c232da0();
    if ((int)puVar4 != 0) {
      puVar4 = PTR_PTR_1126c45f8;
      _objc_alloc_init(PTR_PTR_1126c45f8);
      ppuVar14 = ppuVar10;
      func_0x00010c0e00e0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1dd720(puVar4);
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar10;
      func_0x00010c0e00e0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c2091c0(puVar4);
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar10;
      func_0x00010c0e00e0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c19d620(puVar4);
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar10;
      func_0x00010c0e00e0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c19d5e0(puVar4);
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar10;
      func_0x00010c0e00e0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c2189a0(puVar4);
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar10;
      func_0x00010c0e00e0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c198660(puVar4);
      _objc_release(ppuVar14);
      func_0x00010c226f60(puVar4);
      ppuVar14 = ppuVar10;
      func_0x00010c0e00e0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4fe0();
      func_0x00010c222c00(puVar4);
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar10;
      func_0x00010c0e00e0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1b6340(puVar4);
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar10;
      func_0x00010c0e00e0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c18cd80(puVar4);
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar10;
      func_0x00010c0e00e0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1ac900(puVar4);
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar10;
      func_0x00010c0e00e0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c5160(puVar4);
      _objc_release(ppuVar14);
      ppuVar14 = ppuVar10;
      func_0x00010c0e00e0(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cc120(puVar4);
      _objc_release(ppuVar14);
      func_0x00010c0b2e60(ppuVar8);
      _objc_release(puVar4);
    }
    _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar10);
    return;
  }
  return;
}



/* Entry: 107bd90ec; end: 107bd92a3; +[SCRankingBlizzardEventLogger _populateViewSessionEvent:withAudioMixingInfos:] */

void FUN_107bd90ec(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  puVar10 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_4;
  func_0x00010bf529e0();
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = PTR_PTR_1126c4730;
    _objc_opt_new();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(param_4);
    puVar10 = auStack_d8;
    puVar2 = param_4;
    func_0x00010bf52a60(param_4,param_2,&uStack_120,puVar10,0x10);
    if (puVar2 != (undefined1 *)0x0) {
      lVar9 = *plStack_110;
      do {
        puVar10 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar9) {
            _objc_enumerationMutation(param_4);
          }
          uVar8 = *(undefined8 *)(lStack_118 + (long)puVar10 * 8);
          uVar4 = uVar8;
          func_0x00010c247520();
          iVar1 = (int)uVar4;
          if (iVar1 == 3) {
            func_0x00010c224120(puVar3,param_2,1);
            func_0x00010c0cecc0(uVar8);
            func_0x00010c224160(puVar3);
          }
          else if (iVar1 == 2) {
            func_0x00010c1c9c60(puVar3,param_2,1);
            func_0x00010c0cecc0(uVar8);
            func_0x00010c1c9f60(puVar3);
          }
          else if (iVar1 == 1) {
            func_0x00010c0cecc0(uVar8);
            func_0x00010c16f3a0(puVar3);
          }
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar10 = auStack_d8;
        puVar2 = param_4;
        func_0x00010bf52a60(param_4,param_2,&uStack_120,puVar10,0x10);
      } while (puVar2 != (undefined1 *)0x0);
    }
    _objc_release(param_4);
    puVar7 = puVar3;
    func_0x00010c16bee0(param_3,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar10);
  puVar3 = PTR_PTR_1126d6f70;
  func_0x00010c232da0();
  if ((int)puVar3 != 0) {
    puVar3 = PTR_PTR_1126c45f8;
    _objc_alloc_init(PTR_PTR_1126c45f8);
    puVar5 = puVar7;
    func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110f42a98);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b4ca0();
    func_0x00010c1dd720(puVar3,param_2,puVar6);
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110f42ab8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b4ca0();
    func_0x00010c2091c0(puVar3,param_2,puVar6);
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110f42ad8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b4ca0();
    func_0x00010c19d620(puVar3,param_2,puVar6);
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110f42af8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b4ca0();
    func_0x00010c19d5e0(puVar3,param_2,puVar6);
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110f42b18);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b4ca0();
    func_0x00010c2189a0(puVar3,param_2,puVar6);
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110f42b38);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1f3c0();
    func_0x00010c198660(puVar3,param_2,puVar6);
    _objc_release(puVar5);
    func_0x00010c226f60(puVar3,param_2,1);
    puVar5 = puVar7;
    func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110eb5238);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b4fe0();
    func_0x00010c222c00(puVar3,param_2,puVar6);
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110ea1ad8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b4ca0();
    func_0x00010c1b6340(puVar3,param_2,puVar6);
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110f42b98);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b4ca0();
    func_0x00010c18cd80(puVar3,param_2,puVar6);
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110f42b58);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b4ca0();
    func_0x00010c1ac900(puVar3,param_2,puVar6);
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110f42b78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c5160(puVar3,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x00010c0e00e0(puVar7,param_2,&PTR____CFConstantStringClassReference_110f42cb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc120(puVar3,param_2,puVar5);
    _objc_release(puVar5);
    func_0x00010c0b2e60(puVar10,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 107bd92a4; end: 107bd956f; +[SCRankingBlizzardEventLogger logPlaybackStallCountWithData:blizzardLogger:] */

void FUN_107bd92a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d6f70;
  func_0x00010c232da0();
  if ((int)puVar1 != 0) {
    puVar1 = PTR_PTR_1126c45f8;
    _objc_alloc_init(PTR_PTR_1126c45f8);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42a98);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1dd720(puVar1,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42ab8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4ca0();
    func_0x00010c2091c0(puVar1,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42ad8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4ca0();
    func_0x00010c19d620(puVar1,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42af8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4ca0();
    func_0x00010c19d5e0(puVar1,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42b18);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4ca0();
    func_0x00010c2189a0(puVar1,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42b38);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    func_0x00010c198660(puVar1,param_2,uVar3);
    _objc_release(uVar2);
    func_0x00010c226f60(puVar1,param_2,1);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb5238);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4fe0();
    func_0x00010c222c00(puVar1,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110ea1ad8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1b6340(puVar1,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42b98);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4ca0();
    func_0x00010c18cd80(puVar1,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42b58);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1ac900(puVar1,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42b78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c5160(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f42cb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc120(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c0b2e60(param_4,param_2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd9570; end: 107bd972f; +[SCRankingBlizzardEventLogger logFeedRerankingWithData:blizzardLogger:] */

void FUN_107bd9570(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d70f0;
  _objc_opt_new(PTR_PTR_1126d70f0);
  func_0x00010bea2340(PTR_PTR_1126d6f70,param_2,puVar1,param_3);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e5f218);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e540(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41df8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a93a0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41878);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b4ca0();
  func_0x00010c1ec6e0(puVar1,param_2,lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f428b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cde0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f428d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d0a0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41c18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f41c18);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ca0();
    func_0x00010c1f9160(puVar1,param_2,lVar3);
    _objc_release(lVar2);
  }
  func_0x00010c0b2e60(param_4,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd9730; end: 107bd99b3; +[SCRankingBlizzardEventLogger _setBaseDataForEvent:data:] */

void FUN_107bd9730(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1d8800(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8820(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8620(param_3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9520(param_3);
  _objc_release(uVar1);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c1f9520(param_3);
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c1f9520(param_3);
  }
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar3);
  _objc_release(uVar1);
  if (((uVar2 & 1) != 0) && (uVar1 != 0)) {
    uVar1 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19b200(param_3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bd99b4; end: 107bd9a3b; +[SCOperaContextLongformViewLogger sharedInstance] */

void FUN_107bd99b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_107bd9a3c;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137277a8 != -1) {
    func_0x00010002a2fc(0x1137277a8,&puStack_48);
  }
  uVar1 = uRam00000001137277b0;
  _objc_retain(uRam00000001137277b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bd9a3c; end: 107bd9a63;  */

void FUN_107bd9a3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001137277b0;
  uRam00000001137277b0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bd9a64; end: 107bd9e57; -[SCOperaContextLongformViewLogger logRemoteWebpageViewWithPage:params:logger:] */

void FUN_107bd9a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

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
  undefined *puVar13;
  ulong uVar14;
  
  puVar1 = PTR_PTR_1126c9ab0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0f15a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067fc0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9ab0;
  func_0x00010c0f15c0(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c067fc0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9ab0;
  func_0x00010c0f1720(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9ab0;
  func_0x00010c0f1740(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9ab0;
  func_0x00010c0f2320(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9ab0;
  func_0x00010c293160(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c067fc0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9ab0;
  func_0x00010c293140(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c067fc0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9ab0;
  func_0x00010c2a4600(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9ab0;
  func_0x00010c2a4620(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9ab0;
  func_0x00010c2a4660(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9ab0;
  func_0x00010c2a4640(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf1f3c0();
  _objc_release(uVar11);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca1a8;
  func_0x00010c2767c0(PTR_PTR_1126ca1a8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126ca1a8;
  func_0x00010c089020(PTR_PTR_1126ca1a8);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0ae040(param_1,param_6,param_3,uVar3,uVar4,uVar5 & 0xffffffff,uVar6 & 0xffffffff,
                      uVar7,uVar8,uVar2,uVar9,uVar10,uVar11,uVar14,(char)uVar12);
  _objc_release(param_6);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar11);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107bd9e58; end: 107bda037; -[SCOperaContextLongformViewLogger logLongformCameraViewWithPage:params:logger:] */

void FUN_107bd9e58(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  puVar1 = PTR_PTR_1126ca120;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c094ba0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca120;
  func_0x00010c094bc0(PTR_PTR_1126ca120);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca120;
  func_0x00010c096b60(PTR_PTR_1126ca120);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c9ab0;
  func_0x00010c0f2320(PTR_PTR_1126c9ab0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar6 = param_1;
  _objc_release(uVar5);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010bf8b340(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010bf885a0(uVar5);
  _objc_release(uVar5);
  _objc_release(puVar1);
  func_0x00010c0a9da0(param_1,dVar6 / 1000.0,param_6,param_3,uVar2,uVar3,uVar4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107bda038; end: 107bda03f; -[SCOperaContextLongformViewLogger logProductViewWithLogger:] */

void FUN_107bda038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ace30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_logProductView_112608d98);
  return;
}



/* Entry: 107bda040; end: 107bda1ab; -[SCOperaContextLongformViewLogger logLongformVideoViewWithPage:params:startedWithCaptionOn:videoWithCaptionOnTimeViewedSeconds:videoInLandscapeModeTimeViewedSeconds:logger:videoRotationEnabled:videoRollMinDegree:videoRollMaxDegree:] */

void FUN_107bda040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  float fVar3;
  ulong uVar4;
  double dVar5;
  
  puVar1 = PTR_PTR_1126b2348;
  uVar2 = param_1;
  _objc_retain(param_10);
  fVar3 = (float)uVar2;
  _objc_retain(param_8);
  func_0x00010bf8b340(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_8;
  func_0x00010c0e00e0(param_8,param_6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  fVar3 = fVar3 / 1000.0;
  dVar5 = (double)fVar3;
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2348;
  func_0x00010c0c4a80(PTR_PTR_1126b2348);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_8;
  func_0x00010c0e00e0(param_8,param_6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  uVar4 = (ulong)(uint)(fVar3 / 1000.0);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010bf0ace0(PTR_PTR_1126b2340,param_6,param_8);
  _objc_release(param_8);
  func_0x00010c0a9e00(param_1,dVar5,(double)(fVar3 / 1000.0),uVar4,param_2,param_3,param_4,param_10,
                      param_6,param_9,param_11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_10);
  return;
}



/* Entry: 107bda1ac; end: 107bda1b3; -[SCOperaContextLongformViewLogger logStoreViewWithLogger:] */

void FUN_107bda1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_logStoreView_112609d08);
  return;
}



/* Entry: 107bda1b4; end: 107bda1bb; -[SCOperaContextLongformViewLogger logSubscriptionLongformWithLogger:] */

void FUN_107bda1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b1450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_logSubscriptionLongformView_112609f20);
  return;
}



/* Entry: 107bda1bc; end: 107bda253; -[SCDiscoverFeedPlaybackSpeedTracker init] */

undefined1 * FUN_107bda1bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa298;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b46f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107bda254; end: 107bda367; -[SCDiscoverFeedPlaybackSpeedTracker _addStatus:toDictionary:] */

void FUN_107bda254(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c249ca0(param_4);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010c1d0640(param_5,param_3,param_4,puVar1);
  }
  else {
    puVar3 = PTR_PTR_1126d70f8;
    _objc_alloc(PTR_PTR_1126d70f8);
    func_0x00010c249ca0(param_4);
    dVar4 = param_1;
    func_0x00010c29e540(lVar2);
    dVar5 = dVar4;
    func_0x00010c29e540(param_4);
    func_0x00010c04b1a0(param_1,dVar4 + dVar5,puVar3);
    func_0x00010c1d0640(param_5,param_3,puVar3,puVar1);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107bda368; end: 107bda3f7; -[SCDiscoverFeedPlaybackSpeedTracker _captureCurrentDuration] */

void FUN_107bda368(double param_1,long param_2)

{
  undefined *puVar1;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x00010c0f5b20(*(undefined8 *)(param_2 + 8));
    func_0x00010beed820(*(undefined8 *)(param_2 + 8));
    if (0.0 < param_1) {
      puVar1 = PTR_PTR_1126d70f8;
      _objc_alloc(PTR_PTR_1126d70f8);
      func_0x00010bf885a0(*(undefined8 *)(param_2 + 0x10));
      func_0x00010c04b1a0(puVar1);
      func_0x00010bdc8640(param_2);
      _objc_release(puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 8),PTR_s_reset_11262ba18);
    return;
  }
  return;
}



/* Entry: 107bda3f8; end: 107bda457; -[SCDiscoverFeedPlaybackSpeedTracker handlePlaybackRateDidChange:] */

void FUN_107bda3f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x10);
  if ((uVar2 != 0) && (func_0x00010c071f40(uVar2,param_2,puVar1), (uVar2 & 1) == 0)) {
    func_0x00010bddb580(param_1);
  }
  func_0x00010c24d960(*(undefined8 *)(param_1 + 8));
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107bda458; end: 107bda46b; -[SCDiscoverFeedPlaybackSpeedTracker handleIsPlayingDidChange:] */

void FUN_107bda458(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfd1f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,param_1,PTR_s_handlePlaybackRateDidChange__1125d2168)
  ;
  return;
}



/* Entry: 107bda46c; end: 107bda5bf; -[SCDiscoverFeedPlaybackSpeedTracker consumePlaybackSpeedStatuses] */

void FUN_107bda46c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
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
  func_0x00010bddb580();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar1 = 0;
    lVar2 = 0;
  }
  else {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar5 = *plStack_100;
      do {
        lVar6 = 0;
        do {
          if (*plStack_100 != lVar5) {
            _objc_enumerationMutation(lVar3);
          }
          func_0x00010bdc8640(param_1,param_2,*(undefined8 *)(lStack_108 + lVar6 * 8),
                              *(undefined8 *)(param_1 + 0x20));
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf51e00();
    _objc_release(uVar4);
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c12adc0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lVar3 = *(long *)(lVar2 + 0x20);
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      func_0x00010bf00d20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010bf51e00();
      _objc_release(uVar4);
      func_0x00010c12adc0(*(undefined8 *)(lVar2 + 0x20));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bda5c0; end: 107bda627; -[SCDiscoverFeedPlaybackSpeedTracker consumeAggregatedPlaybackSpeedStatuses] */

void FUN_107bda5c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf00d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf51e00();
    _objc_release(uVar2);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107bda628; end: 107bda663; -[SCDiscoverFeedPlaybackSpeedTracker reset] */

/* WARNING: Possible PIC construction at 0x000107bda650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107bda654) */

void FUN_107bda628(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 107bda664; end: 107bda6ab; -[SCDiscoverFeedPlaybackSpeedTracker .cxx_destruct] */

void FUN_107bda664(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bda6ac; end: 107bdaeeb; -[SCDiscoverFeedEventsController initWithDiscoverFeedDataFetcher:cheetahInteractionHistoryManager:snapTokenProvider:requestManager:promotedStoriesLogger:storiesBlizzardLogger:registrationInfoProvider:grapheneRegistry:spectrumLogger:adConfigProvider:blizzardLogger:circumstanceEngine:performer:friendsFeedViewLifecycleListener:storiesConfigProvider:notificationPool:lensPlayTimeProvider:] */

undefined8 *
FUN_107bda6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             long param_17,undefined8 param_18,undefined8 param_19)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
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
  _objc_retain();
  _objc_retain();
  puStack_70 = PTR_PTR_1126fa2a0;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar2 + 0x2e,param_3);
    _objc_storeWeak(puVar2 + 0x2f,param_4);
    _objc_storeWeak(puVar2 + 0x30,param_5);
    _objc_storeWeak(puVar2 + 0x31,param_6);
    _objc_retain(param_7);
    uVar3 = puVar2[2];
    puVar2[2] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar2[0x32];
    puVar2[0x32] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_19);
    uVar3 = puVar2[0x40];
    puVar2[0x40] = param_19;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = puVar2[0x2d];
    puVar2[0x2d] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d7100;
    _objc_opt_new();
    uVar3 = puVar2[0x2a];
    puVar2[0x2a] = puVar4;
    _objc_release(uVar3);
    func_0x00010c18b5e0(puVar2[0x2a]);
    puVar4 = PTR_PTR_1126d7108;
    _objc_opt_new();
    uVar3 = puVar2[0x1d];
    puVar2[0x1d] = puVar4;
    _objc_release(uVar3);
    func_0x00010c18b5e0(puVar2[0x1d]);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0xd];
    puVar2[0xd] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0xe];
    puVar2[0xe] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0xf];
    puVar2[0xf] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x10];
    puVar2[0x10] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d7110;
    _objc_opt_new();
    uVar3 = puVar2[0xc];
    puVar2[0xc] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x2c];
    puVar2[0x2c] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[0x2b];
    puVar2[0x2b] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = puVar2[7];
    puVar2[7] = puVar4;
    _objc_release(uVar3);
    puVar2[5] = 0xffffffffffffffff;
    _objc_retain(param_15);
    uVar3 = puVar2[1];
    puVar2[1] = param_15;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d6f58;
    _objc_alloc();
    puVar5 = puVar2 + 0x31;
    _objc_loadWeakRetained(puVar5);
    func_0x00010c035080();
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = puVar2[0x12];
    puVar2[0x12] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar4);
    func_0x00010bef9980(param_8);
    _objc_retain(param_14);
    uVar3 = puVar2[0x33];
    puVar2[0x33] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[0x35];
    puVar2[0x35] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar2[0x34];
    puVar2[0x34] = param_16;
    _objc_release(uVar3);
    if (puVar2[0x34] != 0) {
      lVar6 = param_17;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c258380();
      _objc_release(lVar6);
      if (lVar7 == 0) {
        func_0x00010bea9400(puVar2);
      }
    }
    uVar1 = (undefined1)puVar2[0x33];
    func_0x000108f4ae24();
    *(undefined1 *)(puVar2 + 0x36) = uVar1;
    uVar3 = param_14;
    func_0x00010bf1f440();
    *(char *)((long)puVar2 + 0x1b1) = (char)uVar3;
    uVar3 = param_14;
    func_0x00010bf1f440();
    *(char *)((long)puVar2 + 0x1b2) = (char)uVar3;
    lVar6 = param_17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf4cb80();
    *(char *)((long)puVar2 + 0x1b3) = (char)lVar7;
    _objc_release(lVar6);
    if (*(char *)((long)puVar2 + 0x1b3) == '\x01') {
      *(undefined1 *)((long)puVar2 + 0x1b4) = 1;
    }
    else {
      lVar6 = param_17;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c22f8;
      func_0x00010bf526c0(PTR_PTR_1126c22f8);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf1f320();
      *(char *)((long)puVar2 + 0x1b4) = (char)lVar7;
      _objc_release(puVar4);
      _objc_release(lVar6);
    }
    lVar6 = param_17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf4d960();
    *(char *)(puVar2 + 0x37) = (char)lVar7;
    _objc_release(lVar6);
    lVar6 = param_17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf4cb60();
    *(char *)((long)puVar2 + 0x1b5) = (char)lVar7;
    _objc_release(lVar6);
    if (*(char *)((long)puVar2 + 0x1b5) == '\x01') {
      *(undefined1 *)((long)puVar2 + 0x1b6) = 1;
    }
    else {
      lVar6 = param_17;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c22f8;
      func_0x00010bf526c0(PTR_PTR_1126c22f8);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf1f320();
      *(char *)((long)puVar2 + 0x1b6) = (char)lVar7;
      _objc_release(puVar4);
      _objc_release(lVar6);
    }
    lVar6 = param_17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c22f8;
    func_0x00010bf71420(PTR_PTR_1126c22f8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf1f320();
    if ((int)lVar7 == 0) {
      lVar7 = param_17;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126c22f8;
      func_0x00010bf526c0(PTR_PTR_1126c22f8);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      func_0x00010bf1f320();
      *(char *)((long)puVar2 + 0x1b7) = (char)lVar9;
      _objc_release(puVar8);
      _objc_release(lVar7);
    }
    else {
      *(undefined1 *)((long)puVar2 + 0x1b7) = 1;
    }
    _objc_release(puVar4);
    _objc_release(lVar6);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x3b];
    puVar2[0x3b] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d7118;
    _objc_opt_new();
    uVar3 = puVar2[0x3c];
    puVar2[0x3c] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126d7120;
    _objc_alloc_init();
    uVar3 = puVar2[0x3d];
    puVar2[0x3d] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = puVar2[0x38];
    puVar2[0x38] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar2[0x3e];
    puVar2[0x3e] = param_18;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x3f];
    puVar2[0x3f] = puVar4;
    _objc_release(uVar3);
  }
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
  return puVar2;
}



/* Entry: 107bdaeec; end: 107bdaf8f; -[SCDiscoverFeedEventsController startSession] */

void FUN_107bdaeec(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010be17260(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}


