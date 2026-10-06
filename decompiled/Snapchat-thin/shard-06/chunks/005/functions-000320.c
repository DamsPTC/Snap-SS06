/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10493feb8; end: 10493ff03; +[FBSDKAccessToken setGraphRequestConnectionFactory:] */

void FUN_10493feb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  _objc_retain();
  if (lRam000000011369ce80 != lVar1) {
    _objc_storeStrong(0x11369ce80,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10493ff04; end: 10493ff0f; +[FBSDKAccessToken graphRequestPiggybackManager] */

void FUN_10493ff04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369ce88);
  return;
}



/* Entry: 10493ff10; end: 10493ff1f; +[FBSDKAccessToken setGraphRequestPiggybackManager:] */

void FUN_10493ff10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369ce88,param_3);
  return;
}



/* Entry: 10493ff20; end: 10493ff2b; +[FBSDKAccessToken errorFactory] */

void FUN_10493ff20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369ce90);
  return;
}



/* Entry: 10493ff2c; end: 10493ff3b; +[FBSDKAccessToken setErrorFactory:] */

void FUN_10493ff2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369ce90,param_3);
  return;
}



/* Entry: 10493ff3c; end: 10493ffdb; +[FBSDKAccessToken configureWithTokenCache:graphRequestConnectionFactory:graphRequestPiggybackManager:errorFactory:] */

void FUN_10493ff3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c216ba0(param_1,param_2,param_3);
  func_0x00010c1a42c0(param_1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1a4300(param_1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1970c0(param_1,param_2,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10493ffdc; end: 10494019f; -[FBSDKAccessToken hash] */

undefined * FUN_10493ffdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar10 = &uStack_b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  uVar3 = param_1;
  uStack_b0 = uVar2;
  func_0x00010c0f9dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfde980();
  uVar4 = param_1;
  uStack_a8 = uVar2;
  func_0x00010bf66bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfde980();
  uVar5 = param_1;
  uStack_a0 = uVar2;
  func_0x00010bf9ca00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bfde980();
  uVar6 = param_1;
  uStack_98 = uVar2;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bfde980();
  uVar7 = param_1;
  uStack_90 = uVar2;
  func_0x00010c292360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bfde980();
  uVar8 = param_1;
  uStack_88 = uVar2;
  func_0x00010c125240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bfde980();
  uVar9 = param_1;
  uStack_80 = uVar2;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010bfde980();
  uStack_78 = uVar2;
  func_0x00010bf63660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfde980();
  uStack_70 = uVar2;
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar13 = PTR_PTR_1126addb0;
  func_0x00010bfdeb20();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_retain();
  if ((undefined8 *)puVar13 == puVar10) {
    puVar13 = (undefined *)0x1;
  }
  else {
    puVar11 = PTR_PTR_1126add30;
    func_0x00010bf39c40(PTR_PTR_1126add30);
    puVar12 = (undefined *)puVar10;
    func_0x00010c075f00(puVar10,param_2,puVar11);
    if ((int)puVar12 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      func_0x00010c071b20(puVar13,param_2,puVar10);
    }
  }
  _objc_release(puVar10);
  return puVar13;
}



/* Entry: 1049401a0; end: 104940217; -[FBSDKAccessToken isEqual:] */

long FUN_1049401a0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain();
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126add30;
    func_0x00010bf39c40(PTR_PTR_1126add30);
    lVar2 = param_3;
    func_0x00010c075f00(param_3,param_2,puVar1);
    if ((int)lVar2 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c071b20(param_1,param_2,param_3);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104940218; end: 1049406bb; -[FBSDKAccessToken isEqualToAccessToken:] */

undefined * FUN_104940218(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  undefined *puVar27;
  
  _objc_retain();
  if (param_3 == 0) {
    puVar27 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126add20;
    func_0x00010c22c4c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c273280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c273280(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar1;
    func_0x00010c0dfca0();
    if ((int)puVar27 == 0) {
      puVar27 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126add20;
      func_0x00010c22c4c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c0f9dc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c0f9dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar4;
      func_0x00010c0dfca0();
      if ((int)puVar27 == 0) {
        puVar27 = (undefined *)0x0;
      }
      else {
        puVar7 = PTR_PTR_1126add20;
        func_0x00010c22c4c0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_1;
        func_0x00010bf66bc0();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = param_3;
        func_0x00010bf66bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar27 = puVar7;
        func_0x00010c0dfca0();
        if ((int)puVar27 == 0) {
          puVar27 = (undefined *)0x0;
        }
        else {
          puVar10 = PTR_PTR_1126add20;
          func_0x00010c22c4c0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = param_1;
          func_0x00010bf9ca00();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = param_3;
          func_0x00010bf9ca00();
          _objc_retainAutoreleasedReturnValue();
          puVar27 = puVar10;
          func_0x00010c0dfca0(puVar10,lVar12,uVar11,lVar12);
          if ((int)puVar27 == 0) {
            puVar27 = (undefined *)0x0;
          }
          else {
            puVar13 = PTR_PTR_1126add20;
            func_0x00010c22c4c0();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = param_1;
            func_0x00010bf05260();
            _objc_retainAutoreleasedReturnValue();
            lVar15 = param_3;
            func_0x00010bf05260();
            _objc_retainAutoreleasedReturnValue();
            puVar27 = puVar13;
            func_0x00010c0dfca0(puVar13,lVar15,uVar14,lVar15);
            if ((int)puVar27 == 0) {
              puVar27 = (undefined *)0x0;
            }
            else {
              puVar16 = PTR_PTR_1126add20;
              func_0x00010c22c4c0();
              _objc_retainAutoreleasedReturnValue();
              uVar17 = param_1;
              func_0x00010c292360();
              _objc_retainAutoreleasedReturnValue();
              lVar18 = param_3;
              func_0x00010c292360();
              _objc_retainAutoreleasedReturnValue();
              puVar27 = puVar16;
              func_0x00010c0dfca0(puVar16,lVar18,uVar17,lVar18);
              if ((int)puVar27 == 0) {
                puVar27 = (undefined *)0x0;
              }
              else {
                puVar19 = PTR_PTR_1126add20;
                func_0x00010c22c4c0();
                _objc_retainAutoreleasedReturnValue();
                uVar20 = param_1;
                func_0x00010c125240();
                _objc_retainAutoreleasedReturnValue();
                lVar21 = param_3;
                func_0x00010c125240();
                _objc_retainAutoreleasedReturnValue();
                puVar27 = puVar19;
                func_0x00010c0dfca0(puVar19,lVar21,uVar20,lVar21);
                if ((int)puVar27 == 0) {
                  puVar27 = (undefined *)0x0;
                }
                else {
                  puVar22 = PTR_PTR_1126add20;
                  func_0x00010c22c4c0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar23 = param_1;
                  func_0x00010bf9c720();
                  _objc_retainAutoreleasedReturnValue();
                  lVar24 = param_3;
                  func_0x00010bf9c720(param_3);
                  _objc_retainAutoreleasedReturnValue();
                  puVar27 = puVar22;
                  func_0x00010c0dfca0(puVar22,lVar24,uVar23,lVar24);
                  if ((int)puVar27 == 0) {
                    puVar27 = (undefined *)0x0;
                  }
                  else {
                    puVar25 = PTR_PTR_1126add20;
                    func_0x00010c22c4c0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bf63660(param_1);
                    _objc_retainAutoreleasedReturnValue();
                    lVar26 = param_3;
                    func_0x00010bf63660(param_3);
                    _objc_retainAutoreleasedReturnValue();
                    puVar27 = puVar25;
                    func_0x00010c0dfca0(puVar25);
                    _objc_release(lVar26);
                    _objc_release(param_1);
                    _objc_release(puVar25);
                  }
                  _objc_release(lVar24);
                  _objc_release(uVar23);
                  _objc_release(puVar22);
                }
                _objc_release(lVar21);
                _objc_release(uVar20);
                _objc_release(puVar19);
              }
              _objc_release(lVar18);
              _objc_release(uVar17);
              _objc_release(puVar16);
            }
            _objc_release(lVar15);
            _objc_release(uVar14);
            _objc_release(puVar13);
          }
          _objc_release(lVar12);
          _objc_release(uVar11);
          _objc_release(puVar10);
        }
        _objc_release(lVar9);
        _objc_release(uVar8);
        _objc_release(puVar7);
      }
      _objc_release(lVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return puVar27;
}



/* Entry: 1049406bc; end: 1049406bf; -[FBSDKAccessToken copyWithZone:] */

void FUN_1049406bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1049406c0; end: 1049406c7; +[FBSDKAccessToken supportsSecureCoding] */

undefined8 FUN_1049406c0(void)

{
  return 1;
}



/* Entry: 1049406c8; end: 1049409ef; -[FBSDKAccessToken initWithCoder:] */

undefined8 FUN_1049406c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf39c40(puVar1);
  uVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e6f678);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010bf39c40();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_78 = puVar3;
  func_0x00010bf39c40();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar5 = param_3;
  func_0x00010bf67040(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da0b38);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf67040(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da0b58);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf67040(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110dad498);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar8 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar3,&PTR____CFConstantStringClassReference_110da0b78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar9 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar3,&PTR____CFConstantStringClassReference_110da0b98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar10 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar3,&PTR____CFConstantStringClassReference_110da0bb8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar11 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar3,&PTR____CFConstantStringClassReference_110f83098);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar12 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar3,&PTR____CFConstantStringClassReference_110da0bd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar13 = uVar7;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  func_0x00010bf00560(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar6;
  func_0x00010bf00560(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar8;
  func_0x00010c054000(param_1,param_2,uVar8,uVar13,uVar14,uVar15,uVar2,uVar9,uVar11,uVar10,uVar12);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(uVar16);
  uVar5 = uVar2;
  func_0x00010bf05260(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(uVar16,param_2,uVar5,&PTR____CFConstantStringClassReference_110e6f678);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010bf66bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(uVar16,param_2,uVar5,&PTR____CFConstantStringClassReference_110da0b38);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010bf9ca00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(uVar16,param_2,uVar5,&PTR____CFConstantStringClassReference_110da0b58);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c0f9dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(uVar16,param_2,uVar5,&PTR____CFConstantStringClassReference_110dad498);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c273280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(uVar16,param_2,uVar5,&PTR____CFConstantStringClassReference_110da0b78);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c292360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(uVar16,param_2,uVar5,&PTR____CFConstantStringClassReference_110da0b98);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010bf9c720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(uVar16,param_2,uVar5,&PTR____CFConstantStringClassReference_110f83098);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c125240(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(uVar16,param_2,uVar5,&PTR____CFConstantStringClassReference_110da0bb8);
  _objc_release(uVar5);
  func_0x00010bf63660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(uVar16,param_2,uVar2,&PTR____CFConstantStringClassReference_110da0bd8);
  _objc_release(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return uVar2;
}



/* Entry: 1049409f0; end: 104940bd3; -[FBSDKAccessToken encodeWithCoder:] */

void FUN_1049409f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf05260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e6f678);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf66bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110da0b38);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf9ca00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110da0b58);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0f9dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dad498);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c273280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110da0b78);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c292360(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110da0b98);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf9c720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f83098);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c125240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110da0bb8);
  _objc_release(uVar1);
  func_0x00010bf63660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110da0bd8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104940bd4; end: 104940bdb; -[FBSDKAccessToken appID] */

undefined8 FUN_104940bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104940bdc; end: 104940be3; -[FBSDKAccessToken dataAccessExpirationDate] */

undefined8 FUN_104940bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104940be4; end: 104940beb; -[FBSDKAccessToken declinedPermissions] */

undefined8 FUN_104940be4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104940bec; end: 104940bf3; -[FBSDKAccessToken expiredPermissions] */

undefined8 FUN_104940bec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104940bf4; end: 104940bfb; -[FBSDKAccessToken expirationDate] */

undefined8 FUN_104940bf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104940bfc; end: 104940c03; -[FBSDKAccessToken permissions] */

undefined8 FUN_104940bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104940c04; end: 104940c0b; -[FBSDKAccessToken refreshDate] */

undefined8 FUN_104940c04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104940c0c; end: 104940c13; -[FBSDKAccessToken tokenString] */

undefined8 FUN_104940c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104940c14; end: 104940c1b; -[FBSDKAccessToken userID] */

undefined8 FUN_104940c14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104940c1c; end: 104940c9f; -[FBSDKAccessToken .cxx_destruct] */

void FUN_104940c1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104940ca0; end: 104940d5b; +[FBSDKAppEvents initialize] */

void FUN_104940ca0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126add60;
  func_0x00010bf39c40();
  if (puVar1 != param_1) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dfec0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf51e00();
  uVar4 = puRam000000011369cea0;
  puRam000000011369cea0 = puVar3;
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = 0xffffffffffff8000;
  _dispatch_get_global_queue(0xffffffffffff8000,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104940d5c; end: 104940d7f;  */

void FUN_104940d5c(void)

{
  func_0x00010bf047e0(PTR_PTR_1126add58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104940d80; end: 104940d8b; -[FBSDKAppEvents init] */

void FUN_104940d80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0139d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFlushBehavior_flushPerio_1125e2840,0,0xf);
  return;
}



/* Entry: 104940d8c; end: 104940eaf; -[FBSDKAppEvents initWithFlushBehavior:flushPeriodInSeconds:] */

undefined8 * FUN_104940d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e32c8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = param_3;
    _objc_initWeak(auStack_58,puVar1);
    puVar2 = PTR_PTR_1126add08;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c24ed60((double)param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19dfe0(puVar1);
    _objc_release(puVar2);
    func_0x00010c169980(puVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return puVar1;
}



/* Entry: 104940eb0; end: 104940edf;  */

void FUN_104940eb0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb32e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104940ee0; end: 104940fb7; -[FBSDKAppEvents startObservingApplicationLifecycleNotifications] */

void FUN_104940ee0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104940fb8; end: 10494102b; -[FBSDKAppEvents dealloc] */

void FUN_104940fb8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126add08;
  uVar2 = param_1;
  func_0x00010bfb32c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256040(puVar1);
  _objc_release(uVar2);
  puStack_38 = PTR_PTR_1126e32c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10494102c; end: 10494103b; -[FBSDKAppEvents logEvent:] */

void FUN_10494102c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logEvent_parameters__1126070a8,param_3,
             *(undefined8 *)PTR____NSDictionary0___11034ab50);
  return;
}



/* Entry: 10494103c; end: 10494104b; -[FBSDKAppEvents logEvent:valueToSum:] */

void FUN_10494103c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logEvent_valueToSum_parameters__1126070c0,param_3,
             *(undefined8 *)PTR____NSDictionary0___11034ab50);
  return;
}



/* Entry: 10494104c; end: 10494105b; -[FBSDKAppEvents logEvent:parameters:] */

void FUN_10494104c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logEvent_valueToSum_parameters_a_1126070c8,param_3,0,param_4,0);
  return;
}



/* Entry: 10494105c; end: 1049410f3; -[FBSDKAppEvents logEvent:valueToSum:parameters:] */

void FUN_10494105c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0df720(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5ae0(param_2,param_3,param_4,puVar1,param_5,0);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1049410f4; end: 1049411c3; -[FBSDKAppEvents logEvent:valueToSum:parameters:accessToken:] */

void FUN_1049410f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110da1178);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  func_0x00010c0a5b00(param_1,param_2,param_3,param_4,param_5,uVar2,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1049411c4; end: 1049411d3; -[FBSDKAppEvents logPurchase:currency:] */

void FUN_1049411c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ad3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logPurchase_currency_parameters__112608ef8,param_3,
             *(undefined8 *)PTR____NSDictionary0___11034ab50);
  return;
}



/* Entry: 1049411d4; end: 1049411db; -[FBSDKAppEvents logPurchase:currency:parameters:] */

void FUN_1049411d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ad3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logPurchase_currency_parameters__112608f00,param_3,param_4,0);
  return;
}



/* Entry: 1049411dc; end: 104941373; -[FBSDKAppEvents logPurchase:currency:parameters:accessToken:] */

void FUN_1049411dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain();
  func_0x00010c296860(param_2);
  if (param_5 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220220();
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0a5ae0(param_2);
  _objc_release(param_6);
  _objc_release(puVar2);
  lVar3 = param_2;
  func_0x00010bfb2fe0();
  if (lVar3 != 1) {
    func_0x00010bfb3020(param_2);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0ad470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104941374; end: 10494137f; -[FBSDKAppEvents logPushNotificationOpen:] */

void FUN_104941374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ad470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logPushNotificationOpen_action__112608f28,param_3,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 104941380; end: 10494151f; -[FBSDKAppEvents logPushNotificationOpen:action:] */

void FUN_104941380(undefined8 param_1,undefined8 param_2,long param_3,undefined **param_4,
                  undefined **param_5,long param_6,long param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x23;
  long unaff_x24;
  long lStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_4;
  _objc_retain();
  _objc_retain();
  func_0x00010c296860(param_1);
  ppuVar8 = &PTR____CFConstantStringClassReference_110da1618;
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e999f8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      func_0x00010c0b3760(param_1);
      ppuVar8 = &PTR____CFConstantStringClassReference_110da4eb8;
      ppuVar9 = &PTR____CFConstantStringClassReference_110da1638;
      func_0x00010c23cd40();
    }
    else {
      ppuStack_58 = &PTR____CFConstantStringClassReference_110da11b8;
      param_5 = (undefined **)0x1;
      ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_50 = lVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_50,&ppuStack_58);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar8;
      func_0x00010c0d3c80();
      _objc_release(ppuVar8);
      if ((param_4 != (undefined **)0x0) &&
         (ppuVar8 = param_4, func_0x00010c08fa60(), ppuVar8 != (undefined **)0x0)) {
        param_5 = &PTR____CFConstantStringClassReference_110da11d8;
        func_0x00010bf71e80(PTR_PTR_1126add78,param_2,ppuVar5,param_4);
      }
      ppuVar8 = &PTR____CFConstantStringClassReference_110da1018;
      ppuVar9 = ppuVar5;
      func_0x00010c0a5a60(param_1);
      _objc_release(ppuVar5);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lVar3 = lStack_48;
    lVar2 = lStack_50;
    ppuVar5 = ppuStack_58;
    _objc_retain();
    _objc_retain();
    _objc_retain();
    _objc_retain();
    _objc_retain();
    _objc_retain();
    _objc_retain();
    _objc_retain();
    _objc_retain();
    _objc_retain();
    func_0x00010c296860(param_4);
    if (ppuVar8 == (undefined **)0x0) {
      func_0x00010c0b3760(param_4);
      func_0x00010c23cd40();
    }
    else if (param_6 == 0) {
      func_0x00010c0b3760(param_4);
      func_0x00010c23cd40();
    }
    else if (param_7 == 0) {
      func_0x00010c0b3760(param_4);
      func_0x00010c23cd40();
    }
    else if (param_8 == 0) {
      func_0x00010c0b3760(param_4);
      func_0x00010c23cd40();
    }
    else if (lStack_60 == 0) {
      func_0x00010c0b3760(param_4);
      func_0x00010c23cd40();
    }
    else if (ppuVar5 == (undefined **)0x0) {
      func_0x00010c0b3760(param_4);
      func_0x00010c23cd40();
    }
    else if (((lVar2 == 0) && (lVar3 == 0)) && (unaff_x24 == 0)) {
      func_0x00010c0b3760(param_4);
      func_0x00010c23cd40();
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x23 != 0) {
        func_0x00010c2203a0(puVar6,param_2,unaff_x23);
      }
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,ppuVar8,
                          &PTR____CFConstantStringClassReference_110da1398);
      if (ppuVar9 < (undefined **)0x5) {
        func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,(&PTR_PTR_1107b9488)[(long)ppuVar9],
                            &PTR____CFConstantStringClassReference_110da13b8);
      }
      if (param_5 < (undefined **)0x3) {
        func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,(&PTR_PTR_1107b94b0)[(long)param_5],
                            &PTR____CFConstantStringClassReference_110da13d8);
      }
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,param_6,
                          &PTR____CFConstantStringClassReference_110da13f8);
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,param_7,
                          &PTR____CFConstantStringClassReference_110da1418);
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,param_8,
                          &PTR____CFConstantStringClassReference_110da1438);
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,lStack_60,
                          &PTR____CFConstantStringClassReference_110da1458);
      puVar1 = PTR_PTR_1126add78;
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110da1818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar1,param_2,puVar6,puVar7,
                          &PTR____CFConstantStringClassReference_110da14d8);
      _objc_release(puVar7);
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,ppuVar5,
                          &PTR____CFConstantStringClassReference_110da14f8);
      if (lVar2 != 0) {
        func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,lVar2,
                            &PTR____CFConstantStringClassReference_110da1478);
      }
      if (lVar3 != 0) {
        func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,lVar3,
                            &PTR____CFConstantStringClassReference_110da1498);
      }
      if (unaff_x24 != 0) {
        func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar6,unaff_x24,
                            &PTR____CFConstantStringClassReference_110da14b8);
      }
      func_0x00010c0a5a60(param_4,param_2,&PTR____CFConstantStringClassReference_110da0ed8,puVar6);
      _objc_release(puVar6);
    }
    _objc_release(unaff_x23);
    _objc_release(unaff_x24);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(ppuVar5);
    _objc_release(lStack_60);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
    return;
  }
  return;
}



/* Entry: 104941520; end: 104941a0b; -[FBSDKAppEvents logProductItem:availability:condition:description:imageLink:link:title:priceAmount:currency:gtin:mpn:brand:parameters:] */

void FUN_104941520(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x00010c296860(param_1);
  if (param_3 == 0) {
    func_0x00010c0b3760(param_1);
    func_0x00010c23cd40();
  }
  else if (param_6 == 0) {
    func_0x00010c0b3760(param_1);
    func_0x00010c23cd40();
  }
  else if (param_7 == 0) {
    func_0x00010c0b3760(param_1);
    func_0x00010c23cd40();
  }
  else if (param_8 == 0) {
    func_0x00010c0b3760(param_1);
    func_0x00010c23cd40();
  }
  else if (param_9 == 0) {
    func_0x00010c0b3760(param_1);
    func_0x00010c23cd40();
  }
  else if (param_10 == 0) {
    func_0x00010c0b3760(param_1);
    func_0x00010c23cd40();
  }
  else if (((param_11 == 0) && (param_12 == 0)) && (param_13 == 0)) {
    func_0x00010c0b3760(param_1);
    func_0x00010c23cd40();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    if (param_14 != 0) {
      func_0x00010c2203a0(puVar2,param_2,param_14);
    }
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar2,param_3,
                        &PTR____CFConstantStringClassReference_110da1398);
    if (param_4 < 5) {
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar2,(&PTR_PTR_1107b9488)[param_4],
                          &PTR____CFConstantStringClassReference_110da13b8);
    }
    if (param_5 < 3) {
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar2,(&PTR_PTR_1107b94b0)[param_5],
                          &PTR____CFConstantStringClassReference_110da13d8);
    }
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar2,param_6,
                        &PTR____CFConstantStringClassReference_110da13f8);
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar2,param_7,
                        &PTR____CFConstantStringClassReference_110da1418);
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar2,param_8,
                        &PTR____CFConstantStringClassReference_110da1438);
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar2,param_9,
                        &PTR____CFConstantStringClassReference_110da1458);
    puVar1 = PTR_PTR_1126add78;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da1818);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1,param_2,puVar2,puVar3,
                        &PTR____CFConstantStringClassReference_110da14d8);
    _objc_release(puVar3);
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar2,param_10,
                        &PTR____CFConstantStringClassReference_110da14f8);
    if (param_11 != 0) {
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar2,param_11,
                          &PTR____CFConstantStringClassReference_110da1478);
    }
    if (param_12 != 0) {
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar2,param_12,
                          &PTR____CFConstantStringClassReference_110da1498);
    }
    if (param_13 != 0) {
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar2,param_13,
                          &PTR____CFConstantStringClassReference_110da14b8);
    }
    func_0x00010c0a5a60(param_1,param_2,&PTR____CFConstantStringClassReference_110da0ed8,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104941a0c; end: 104941ad3; -[FBSDKAppEvents activateApp] */

void FUN_104941a0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c296860();
  uVar1 = param_1;
  func_0x00010bf051c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf39c40(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96840(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  func_0x00010c11ada0(param_1);
  func_0x00010bfaa160(param_1);
  func_0x00010c26f8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104941ad4; end: 104941b57; -[FBSDKAppEvents setPushNotificationsDeviceToken:] */

void FUN_104941ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c296860(param_1);
  lVar1 = param_1;
  func_0x00010c069660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe11c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c1e5fa0(param_1,param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104941b58; end: 104941c3f; -[FBSDKAppEvents setPushNotificationsDeviceTokenString:] */

void FUN_104941b58(undefined **param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = param_3;
  _objc_retain();
  func_0x00010c296860(param_1);
  if (uVar1 == 0) {
    puVar5 = param_1[5];
    param_1[5] = (undefined *)0x0;
    _objc_release(puVar5);
  }
  else {
    ppuVar2 = param_1;
    func_0x00010c11c240();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
    }
    _objc_retain(ppuVar3);
    _objc_release(ppuVar2);
    uVar4 = uVar1;
    func_0x00010c0720c0();
    _objc_release(ppuVar3);
    if ((uVar4 & 1) == 0) {
      _objc_storeStrong(param_1 + 5,param_3);
      func_0x00010c0a59e0(param_1);
      ppuVar3 = param_1;
      func_0x00010bfb2fe0();
      if (ppuVar3 != (undefined **)0x1) {
        func_0x00010bfb3020(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104941c40; end: 104941c4b; -[FBSDKAppEvents loggingOverrideAppID] */

void FUN_104941c40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cea0);
  return;
}



/* Entry: 104941c4c; end: 104941cdf; -[FBSDKAppEvents setLoggingOverrideAppID:] */

void FUN_104941c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010c296860(param_1);
  uVar2 = uRam000000011369cea0;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    if (cRam000000011369cea8 == '\x01') {
      func_0x00010c0b3760(param_1);
      func_0x00010c23cd40();
    }
    _objc_storeStrong(0x11369cea0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104941ce0; end: 104941d07; -[FBSDKAppEvents flush] */

void FUN_104941ce0(undefined8 param_1)

{
  func_0x00010c296860();
                    /* WARNING: Could not recover jumptable at 0x00010bfb3030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_flushForReason__1125ca5b0,0);
  return;
}



/* Entry: 104941d08; end: 104941d2f; -[FBSDKAppEvents userID] */

void FUN_104941d08(long param_1)

{
  func_0x00010c296860();
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104941d30; end: 104941da7; -[FBSDKAppEvents setUserID:] */

void FUN_104941d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  func_0x00010c296860(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  func_0x00010c112de0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1780();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104941da8; end: 104941f27; -[FBSDKAppEvents setUserEmail:firstName:lastName:phone:dateOfBirth:gender:city:state:zip:country:] */

void FUN_104941da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2919c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e3c0();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104941f28; end: 104941f6b; -[FBSDKAppEvents getUserData] */

void FUN_104941f28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c2919c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfcbd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104941f6c; end: 104941f9b; -[FBSDKAppEvents clearUserData] */

void FUN_104941f6c(undefined8 param_1)

{
  func_0x00010c2919c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104941f9c; end: 10494200f; -[FBSDKAppEvents setUserData:forType:] */

void FUN_104941f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2919c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e1a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104942010; end: 10494205f; -[FBSDKAppEvents clearUserDataForType:] */

void FUN_104942010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c2919c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3c4e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104942060; end: 10494206b; -[FBSDKAppEvents anonymousID] */

void FUN_104942060(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf047f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126add58,PTR_s_anonymousID_11259eba0);
  return;
}



/* Entry: 10494206c; end: 10494225f; -[FBSDKAppEvents augmentHybridWebView:] */

void FUN_10494206c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  func_0x00010c296860(param_1);
  puVar1 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
  func_0x00010bf39c40(PTR__OBJC_CLASS___WKWebView_1126b4f60);
  uVar2 = param_3;
  func_0x00010c075f00(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    func_0x00010bf051c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0ea0();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
    func_0x00010bf39c40();
    if (puVar1 == (undefined *)0x0) goto LAB_104942240;
    uVar2 = param_3;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c291760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126addb8;
    _objc_alloc(PTR_PTR_1126addb8);
    uVar2 = param_1;
    func_0x00010bf051c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010bc0(puVar4,param_2,param_1,uVar2);
    _objc_release(uVar2);
    func_0x00010befb220(uVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110da22f8);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da1878);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar5 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
    func_0x00010bf39c40(PTR__OBJC_CLASS___WKUserScript_1126d6bd0);
    _objc_alloc();
    func_0x00010c04a760();
    func_0x00010befc7c0(uVar3,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar4);
    param_1 = uVar3;
  }
  _objc_release(param_1);
LAB_104942240:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104942260; end: 104942263; -[FBSDKAppEvents setIsUnityInitialized:] */

void FUN_104942260(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c227d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_set_isUnityInitialized__112667980);
  return;
}



/* Entry: 104942264; end: 1049423f3; -[FBSDKAppEvents sendEventBindingsToUnity] */

void FUN_104942264(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  
  func_0x00010c296860();
  ppuVar1 = param_1;
  func_0x00010be44f20();
  if ((int)ppuVar1 != 0) {
    ppuVar1 = param_1;
    func_0x00010c15f060();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar2 = param_1;
      func_0x00010c15f060(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x00010bf99be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c082de0(puVar4,param_2,ppuVar3);
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
      _objc_release(ppuVar1);
      puVar5 = PTR_PTR_1126add78;
      if ((int)puVar4 != 0) {
        func_0x00010c15f060();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = param_1;
        func_0x00010bf99be0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar2 != (undefined **)0x0) {
          ppuVar1 = ppuVar2;
        }
        func_0x00010bf64b60(puVar5,param_2,ppuVar1,0,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        _objc_release(param_1);
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x00010c008340();
        pcVar6 = "FBUnityUtility";
        _objc_lookUpClass();
        ppuVar1 = &PTR____CFConstantStringClassReference_110da18b8;
        _NSSelectorFromString(&PTR____CFConstantStringClassReference_110da18b8);
        pcVar7 = pcVar6;
        func_0x00010c13b700(pcVar6,param_2,ppuVar1);
        if ((int)pcVar7 != 0) {
          func_0x00010c0f8f20(pcVar6,param_2,ppuVar1,puVar4);
        }
        _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 1049423f4; end: 10494285b; -[FBSDKAppEvents configureWithGateKeeperManager:appEventsConfigurationProvider:serverConfigurationProvider:graphRequestFactory:featureChecker:primaryDataStore:logger:settings:paymentObserver:timeSpentRecorder:appEventsStateStore:eventDeactivationParameterProcessor:restrictiveDataFilterParameterProcessor:atePublisherFactory:appEventsStateProvider:advertiserIDProvider:userDataStore:appEventsUtility:internalUtility:capiReporter:protectedModeManager:macaRuleMatchingManager:blocklistEventsManager:redactedEventsManager:sensitiveParamsManager:] */

void FUN_1049423f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c1a22a0(param_1,param_2,param_3);
  func_0x00010c168960(param_1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1fd2a0(param_1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1a42e0(param_1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c19a920(param_1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c1e2a60(param_1,param_2,param_8);
  func_0x00010c1c0520(param_1,param_2,param_9);
  func_0x00010c1fe440(param_1,param_2,param_10);
  _objc_release(param_10);
  func_0x00010c1d9d40(param_1,param_2,param_11);
  _objc_release(param_11);
  func_0x00010c215180(param_1,param_2,param_12);
  _objc_release(param_12);
  func_0x00010c1689e0(param_1,param_2,param_13);
  _objc_release(param_13);
  func_0x00010c197780(param_1,param_2,param_14);
  _objc_release(param_14);
  func_0x00010c1ed320(param_1,param_2,param_15);
  _objc_release(param_15);
  func_0x00010c16adc0(param_1,param_2,param_16);
  func_0x00010c1689c0(param_1,param_2,param_17);
  _objc_release(param_17);
  func_0x00010c166340(param_1,param_2,param_18);
  _objc_release(param_18);
  func_0x00010c21e1e0(param_1,param_2,param_19);
  _objc_release(param_19);
  func_0x00010c168a00(param_1,param_2,param_20);
  _objc_release(param_20);
  func_0x00010c1ae600(param_1,param_2,param_21);
  _objc_release(param_21);
  func_0x00010c178440(param_1,param_2,param_22);
  _objc_release(param_22);
  func_0x00010c1e5140(param_1,param_2,param_23);
  _objc_release(param_23);
  func_0x00010c1c1580(param_1,param_2,param_24);
  _objc_release(param_24);
  func_0x00010c171e00(param_1,param_2,param_25);
  _objc_release(param_25);
  func_0x00010c1e9220(param_1,param_2,param_26);
  _objc_release(param_26);
  func_0x00010c1fcc60(param_1,param_2,param_27);
  _objc_release(param_27);
  lVar1 = param_1;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = param_16;
    func_0x00010bf581c0(param_16,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16ada0(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  func_0x00010c1b01e0(param_1,param_2,1);
  uVar2 = param_8;
  func_0x00010bfa17c0(param_8,param_2,&PTR____CFConstantStringClassReference_110da1858);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e580(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 10494285c; end: 104942933; -[FBSDKAppEvents configureNonTVComponentsWithOnDeviceMLModelManager:metadataIndexer:skAdNetworkReporter:skAdNetworkReporterV2:codelessIndexer:swizzler:aemReporter:] */

void FUN_10494285c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c1d1f40(param_1);
  func_0x00010c1c74e0(param_1);
  _objc_release(param_4);
  func_0x00010c202da0(param_1);
  _objc_release(param_5);
  func_0x00010c202dc0(param_1);
  _objc_release(param_6);
  func_0x00010c17de20(param_1);
  func_0x00010c210b00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1663d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAemReporter__112637310,param_9);
  return;
}



/* Entry: 104942934; end: 104942947; -[FBSDKAppEvents logInternalEvent:isImplicitlyLogged:] */

void FUN_104942934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a8d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logInternalEvent_parameters_isIm_112607d68,param_3,
             *(undefined8 *)PTR____NSDictionary0___11034ab50,param_4);
  return;
}



/* Entry: 104942948; end: 10494295b; -[FBSDKAppEvents logInternalEvent:valueToSum:isImplicitlyLogged:] */

void FUN_104942948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a8db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logInternalEvent_valueToSum_para_112607d78,param_3,
             *(undefined8 *)PTR____NSDictionary0___11034ab50,param_4);
  return;
}



/* Entry: 10494295c; end: 10494296f; -[FBSDKAppEvents logInternalEvent:parameters:isImplicitlyLogged:] */

void FUN_10494295c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a8dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logInternalEvent_valueToSum_para_112607d80,param_3,0,param_4,param_5,0);
  return;
}



/* Entry: 104942970; end: 104942983; -[FBSDKAppEvents logInternalEvent:parameters:isImplicitlyLogged:accessToken:] */

void FUN_104942970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a8dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logInternalEvent_valueToSum_para_112607d80,param_3,0,param_4,param_5,
             param_6);
  return;
}



/* Entry: 104942984; end: 104942a2b; -[FBSDKAppEvents logInternalEvent:valueToSum:parameters:isImplicitlyLogged:] */

void FUN_104942984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0df720(param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8dc0(param_2,param_3,param_4,puVar1,param_5,param_6,0);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104942a2c; end: 104942aff; -[FBSDKAppEvents logInternalEvent:valueToSum:parameters:isImplicitlyLogged:accessToken:] */

void FUN_104942a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06cc80();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c0a5b00(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104942b00; end: 104942b0b; -[FBSDKAppEvents logImplicitEvent:valueToSum:parameters:accessToken:] */

void FUN_104942b00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logEvent_valueToSum_parameters_i_1126070d0);
  return;
}



/* Entry: 104942b0c; end: 104942ba7; +[FBSDKAppEvents shared] */

void FUN_104942b0c(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x104942b80;
  puStack_20 = &UNK_110848088;
  uStack_18 = param_1;
  if (lRam000000011369ceb0 != -1) {
    func_0x00010002a2fc(0x11369ceb0,&puStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369ce98);
  return;
}



/* Entry: 104942ba8; end: 104942d4f; -[FBSDKAppEvents flushForReason:] */

void FUN_104942ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_sync_enter();
  lVar1 = param_1;
  func_0x00010bf05160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf05160();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf05180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c273280(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf05260(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf59180(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1689a0(param_1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104942d50;
    puStack_70 = &UNK_110844b80;
    lStack_68 = param_1;
    lStack_60 = lVar2;
    uStack_58 = param_3;
    _objc_retain(lVar2);
    ppuVar6 = &puStack_88;
    _objc_retainBlock(ppuVar6);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,ppuVar6);
    _objc_release(ppuVar6);
    _objc_release(lStack_60);
    _objc_release(lVar2);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 104942d50; end: 104942d5f;  */

void FUN_104942d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb30d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_flushOnMainQueue_forReason__1125ca5d8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104942d60; end: 104942dd3; -[FBSDKAppEvents setSourceApplication:openURL:] */

void FUN_104942d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c26f8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206d40();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104942dd4; end: 104942e33; -[FBSDKAppEvents setSourceApplication:isFromAppLink:] */

void FUN_104942dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c26f8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206d20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104942e34; end: 104942e63; -[FBSDKAppEvents registerAutoResetSourceApplication] */

void FUN_104942e34(undefined8 param_1)

{
  func_0x00010c26f8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104942e64; end: 104942ee3; -[FBSDKAppEvents appID] */

void FUN_104942e64(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c0b3c00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c227f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar2 = lVar1;
    _objc_retain(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104942ee4; end: 10494306f; -[FBSDKAppEvents publishInstall] */

void FUN_104942ee4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010c0b3760(param_1);
    func_0x00010c23cd40();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da18f8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c112de0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfa16e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar4 == 0) {
      lVar2 = param_1;
      func_0x00010c112de0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa1780(lVar2,param_2,puVar5,puVar3);
      _objc_release(puVar5);
      _objc_release(lVar2);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_104943070;
      puStack_60 = &UNK_110848ba8;
      lVar2 = lVar1;
      lStack_58 = param_1;
      _objc_retain();
      puVar5 = puVar3;
      lStack_50 = lVar2;
      _objc_retain();
      puStack_48 = puVar5;
      func_0x00010bfaa160(param_1,param_2,&puStack_78);
      _objc_release(puStack_48);
      _objc_release(lStack_50);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104943070; end: 104943337;  */

void FUN_104943070(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf051c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22ff20();
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfbe560();
  func_0x00010bf1f340();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf051c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15f060(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06bb40();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c292360(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfcbd80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bef1900(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010bf06c60(*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf2fa40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c123620();
    _objc_release(uVar3);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfcde20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf56580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_104943338;
    uStack_50 = 0x104943348;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c112de0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = uVar4;
    _objc_retain();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain();
    func_0x00010c251a80(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar5);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_release(uVar7);
  }
  return;
}



/* Entry: 104943338; end: 10494334f;  */

void FUN_104943338(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104943350; end: 1049433ef;  */

void FUN_104943350(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da1958);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),param_2,
                        param_3,puVar1);
    _objc_release(puVar1);
  }
  else {
    func_0x00010bfa1720(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),param_2,
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049433f0; end: 104943557; -[FBSDKAppEvents publishATE] */

void FUN_1049433f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010bf05260();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf0c340();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_1;
      func_0x00010bf0c360(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf05260(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf581c0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16ada0(param_1);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    else {
      func_0x00010c16ada0(param_1);
    }
    _objc_release(lVar1);
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104943558;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x000104938910(&puStack_70);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 104943558; end: 10494359b;  */

void FUN_104943558(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf0c340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11ac80();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10494359c; end: 1049436c3; -[FBSDKAppEvents appendInstallTimestamp:] */

void FUN_10494359c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  iVar2 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (iVar2 != 0) {
    uVar3 = param_1;
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06b3c0();
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010c227f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    if ((int)uVar4 == 0) {
      func_0x00010c067a40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010befe500();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar3);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar1 = PTR_PTR_1126add78;
    func_0x00010bf051c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51640();
    func_0x00010c0df720(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar1);
    _objc_release(puVar6);
    _objc_release(param_1);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049436c4; end: 104943887; -[FBSDKAppEvents enableCodelessEvents] */

void FUN_1049436c4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c265a00();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c15f060();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c06eb20();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x00010bf3f080(param_1);
      func_0x00010bf8ef20();
      lVar1 = param_1;
      func_0x00010bf99bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        puVar3 = PTR_PTR_1126addc0;
        _objc_alloc(PTR_PTR_1126addc0);
        func_0x00010c265a00(param_1);
        func_0x00010c04fcc0(puVar3);
        func_0x00010c1976a0(param_1);
        _objc_release(puVar3);
      }
      lVar1 = param_1;
      func_0x00010c069660();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c081fc0();
      _objc_release(lVar1);
      if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c15bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sendEventBindingsToUnity_112634930);
        return;
      }
      puVar3 = PTR_PTR_1126addc0;
      _objc_alloc(PTR_PTR_1126addc0);
      func_0x00010c265a00(param_1);
      func_0x00010c04fcc0(puVar3);
      lVar1 = param_1;
      func_0x00010bf99bc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15f060(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bf99be0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0f3e80(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c283ca0(lVar1);
      _objc_release(puVar4);
      _objc_release(lVar2);
      _objc_release(param_1);
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 104943888; end: 104943933; -[FBSDKAppEvents fetchServerConfiguration:] */

void FUN_104943888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf050c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104943934;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c09ada0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104943934; end: 1049439c3;  */

void FUN_104943934(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15f080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1049439c4;
  puStack_38 = &UNK_1107b93f8;
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  uStack_28 = uVar2;
  func_0x00010c09c180(uVar1,param_2,&puStack_50);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  return;
}



/* Entry: 1049439c4; end: 104943f73;  */

void FUN_1049439c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c1fd240(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c06cc80();
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar3);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15f060();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0751c0();
    _objc_release(uVar5);
    _objc_release(uVar3);
    if ((int)uVar6 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0f6980(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24fae0();
      goto LAB_104943a9c;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f6980(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c256520();
LAB_104943a9c:
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104943f74;
  puStack_80 = &UNK_110841f20;
  uStack_78 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf37e60();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x104943fb0;
  puStack_a8 = &UNK_110841f20;
  uStack_a0 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf37e60();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x104943fec;
  puStack_d0 = &UNK_110841f20;
  uStack_c8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf37e60();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x104944028;
  puStack_f8 = &UNK_110841f20;
  uStack_f0 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf37e60();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = puVar1;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x104944064;
  puStack_120 = &UNK_110841f20;
  uStack_118 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf37e60();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = puVar1;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x1049440a0;
  puStack_148 = &UNK_110841f20;
  uStack_140 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf37e60();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_188 = puVar1;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x1049440dc;
  puStack_170 = &UNK_110841f20;
  uStack_168 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf37e60();
  _objc_release(uVar6);
  iVar2 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (iVar2 != 0) {
    _objc_initWeak(auStack_190,*(undefined8 *)(param_1 + 0x20));
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa1d00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_198,auStack_190);
    func_0x00010bf37e60(uVar6);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_198);
    _objc_destroyWeak(auStack_190);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf37e60();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf37e60();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf37e60();
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1d00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf37e60();
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c07cdc0();
  _objc_release(uVar5);
  if ((int)uVar6 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa1d00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf37e60();
    _objc_release(uVar6);
  }
  iVar2 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (iVar2 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa1d00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf37e60();
    _objc_release(uVar6);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104943f74; end: 104944187;  */

void FUN_104943f74(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13c9c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8ef20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104944188; end: 104944197;  */

void FUN_104944188(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf8fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_enableCodelessEvents_1125c1830);
    return;
  }
  return;
}



/* Entry: 104944198; end: 10494420f;  */

void FUN_104944198(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0cc4e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8ef20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104944210; end: 1049444af;  */

void FUN_104944210(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c112de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1560();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      iVar1 = 2;
      func_0x000100029b9c(2,0xf,4,0);
      if (iVar1 == 0) {
        func_0x00010c125c80(PTR__OBJC_CLASS___SKAdNetwork_1126b8e20);
      }
      else {
        func_0x00010c288aa0();
      }
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c112de0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa1760();
      _objc_release(uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa1d00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf37e60();
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 1049444b0; end: 10494510b; -[FBSDKAppEvents logEvent:valueToSum:parameters:isImplicitlyLogged:accessToken:] */

void FUN_1049444b0(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5,uint param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x00010c296860(param_1);
  puVar2 = param_1;
  func_0x00010bfbe560();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c0b3760(param_1);
    func_0x00010c23cd40();
    goto LAB_104945028;
  }
  puVar2 = param_1;
  func_0x00010bfbe560();
  iVar1 = (int)puVar2;
  func_0x00010bf1f340();
  if (iVar1 == 0) {
    puVar2 = param_1;
    func_0x00010bfa1d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10494510c;
    puStack_a0 = &UNK_11089eec8;
    puVar3 = param_3;
    puStack_98 = param_1;
    _objc_retain();
    puStack_90 = puVar3;
    _objc_retain();
    uVar4 = param_4;
    puStack_88 = param_5;
    _objc_retain();
    uStack_80 = uVar4;
    func_0x00010bf37e60(puVar2);
    _objc_release(puVar2);
    puVar3 = param_1;
    func_0x00010befe580(param_1);
    puVar2 = PTR_PTR_1126add78;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bf71e60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1234a0(puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bf051c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c22ff20();
    _objc_release(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      if (param_6 != 0) {
        puVar2 = param_1;
        func_0x00010c15f060();
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 != (undefined *)0x0) {
          puVar3 = param_1;
          func_0x00010c15f060();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c0751a0();
          _objc_release(puVar3);
          _objc_release(puVar2);
          if ((int)puVar5 == 0) goto LAB_104945010;
        }
      }
      puVar2 = param_1;
      func_0x00010c0b6080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar2 != (undefined *)0x0) {
        puVar2 = param_1;
        func_0x00010c0b6080(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c115040();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_5);
        _objc_release(puVar2);
        param_5 = puVar3;
      }
      if (((param_6 & 1) == 0) && ((bRam000000011369cea8 & 1) == 0)) {
        bRam000000011369cea8 = 1;
      }
      puStack_d0 = &uStack_d8;
      uStack_d8 = 0;
      uStack_c8 = 0x2020000000;
      puVar2 = param_1;
      func_0x00010bf051c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c296920();
      _objc_release(puVar2);
      bStack_c0 = (byte)puVar3 ^ 1;
      func_0x00010bf71e40(PTR_PTR_1126add78);
      if ((*(byte *)(puStack_d0 + 3) & 1) == 0) {
        puVar2 = param_1;
        func_0x00010bf99ce0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar3 = param_5;
        if (puVar2 != (undefined *)0x0) {
          puVar2 = param_1;
          func_0x00010bf99ce0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c115060();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_5);
          _objc_release(puVar2);
        }
        puVar2 = param_1;
        func_0x00010c0e3740();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010c068080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar2);
        puVar2 = puVar3;
        if (puVar5 != (undefined *)0x0) {
          puVar5 = param_1;
          func_0x00010c0e3740(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c068080();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar6;
          func_0x00010c115060();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        puVar3 = param_1;
        func_0x00010c13c9c0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c115060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar3);
        puVar2 = param_1;
        func_0x00010c118ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar3 = puVar5;
        if (puVar2 != (undefined *)0x0) {
          puVar2 = param_1;
          func_0x00010c118ea0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c115060();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          _objc_release(puVar2);
        }
        puVar2 = param_1;
        func_0x00010c118ea0();
        _objc_retainAutoreleasedReturnValue();
        param_5 = puVar3;
        if (puVar2 == (undefined *)0x0) {
LAB_104944a00:
          puVar2 = param_1;
          func_0x00010c15e140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar2 != (undefined *)0x0) {
            puVar2 = param_1;
            func_0x00010c15e140();
            _objc_retainAutoreleasedReturnValue();
            param_5 = puVar2;
            func_0x00010c115060();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
            _objc_release(puVar2);
          }
        }
        else {
          puVar5 = PTR_PTR_1126addc8;
          func_0x00010c07b620();
          _objc_release(puVar2);
          if (((ulong)puVar5 & 1) == 0) goto LAB_104944a00;
        }
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf72020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(PTR_PTR_1126add78);
        puVar6 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar2 = PTR_PTR_1126add78;
        if (puVar6 == (undefined *)0x0) {
          puVar6 = param_1;
          func_0x00010bf051c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c280880();
          func_0x00010c0df720(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf71e80(puVar2);
          _objc_release(puVar3);
          _objc_release(puVar6);
        }
        func_0x00010bf71e80(PTR_PTR_1126add78);
        if (param_6 != 0) {
          func_0x00010bf71e80(PTR_PTR_1126add78);
        }
        puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
        func_0x00010c077480();
        if ((int)puVar2 == 0) {
          puVar2 = param_1;
          func_0x00010bf07b60();
          ppuVar7 = &PTR____CFConstantStringClassReference_110da1a58;
        }
        else {
          ppuVar7 = (undefined **)PTR__OBJC_CLASS___UIApplication_1126ae590;
          func_0x00010c22b720();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar7;
          func_0x00010c086b80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar8;
          func_0x00010c1417c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar8);
          _objc_release(ppuVar7);
          ppuVar7 = ppuVar9;
          func_0x00010c10f940();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar9;
          if (ppuVar7 != (undefined **)0x0) {
            ppuVar8 = ppuVar7;
          }
          _objc_retain();
          _objc_release(ppuVar9);
          _objc_release(ppuVar7);
          if (ppuVar8 == (undefined **)0x0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110da1a38;
          }
          else {
            ppuVar7 = ppuVar8;
            func_0x00010bf39c40();
            func_0x00010bf6e340();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
          func_0x00010c22b720();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar3;
          func_0x00010bf07b60();
          _objc_release(puVar3);
          _objc_release(ppuVar8);
        }
        func_0x00010bf71e80(PTR_PTR_1126add78);
        if (puVar2 == (undefined *)0x2) {
          func_0x00010bf71e80(PTR_PTR_1126add78);
        }
        puVar2 = param_1;
        func_0x00010bf051c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_1;
        func_0x00010c0b3c00(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010c2732a0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar2 = param_1;
        func_0x00010bf05260(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_sync_enter();
        puVar3 = param_1;
        func_0x00010bf05160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar11 = param_1;
        if (puVar3 == (undefined *)0x0) {
          func_0x00010bf05180(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar11;
          func_0x00010bf59180();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1689a0(param_1);
LAB_104944e64:
          _objc_release(puVar3);
          _objc_release(puVar11);
        }
        else {
          puVar3 = param_1;
          func_0x00010bf05160();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar3;
          func_0x00010c06ed80();
          _objc_release(puVar3);
          if (((ulong)puVar10 & 1) == 0) {
            puVar3 = param_1;
            func_0x00010bfb2fe0();
            if (puVar3 == (undefined *)0x1) {
              puVar3 = param_1;
              func_0x00010bf051a0(param_1);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = param_1;
              func_0x00010bf05160(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0f9f80(puVar3);
              _objc_release(puVar10);
              _objc_release(puVar3);
            }
            else {
              func_0x00010bfb3020(param_1);
            }
            func_0x00010bf05180(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar11;
            func_0x00010bf59180();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1689a0(param_1);
            goto LAB_104944e64;
          }
        }
        puVar3 = param_1;
        func_0x00010bf05160(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef8040();
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((param_6 & 1) == 0) {
          puVar11 = param_1;
          func_0x00010bf051c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c280880();
          func_0x00010c25d9e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          func_0x00010c0b3760(param_1);
          func_0x00010c23cd40();
          _objc_release(puVar3);
        }
        func_0x00010bf38360(param_1);
        puVar3 = param_1;
        func_0x00010bf051c0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar3;
        func_0x00010bfc3620();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar3);
        if (puVar11 == (undefined *)0x0) {
          puVar3 = param_1;
          func_0x00010bf05160();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar3;
          func_0x00010bf9a520();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar11;
          func_0x00010bf529e0();
          if (puVar10 < (undefined *)0x65) {
            _objc_release(puVar11);
            _objc_release(puVar3);
          }
          else {
            puVar10 = param_1;
            func_0x00010bfb2fe0();
            _objc_release(puVar11);
            _objc_release(puVar3);
            if (puVar10 != (undefined *)0x1) goto LAB_104944f58;
          }
        }
        else {
LAB_104944f58:
          func_0x00010bfb3020(param_1);
        }
        _objc_sync_exit(param_1);
        _objc_release(param_1);
        _objc_release(puVar2);
        _objc_release(puVar6);
        _objc_release(ppuVar7);
        _objc_release(puVar5);
      }
      __Block_object_dispose(&uStack_d8,8);
    }
LAB_104945010:
    _objc_release(uStack_80);
    _objc_release(puStack_88);
    puVar2 = puStack_90;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3760(param_1);
    func_0x00010c23cd40();
  }
  _objc_release(puVar2);
LAB_104945028:
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10494510c; end: 10494536b;  */

void FUN_10494510c(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 0) {
    func_0x00010c23d8a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23d8c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126add78;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010bf71e60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1234a0(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10494536c; end: 1049456e7; -[FBSDKAppEvents checkPersistedEvents] */

void FUN_10494536c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010bf051a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c13ed60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    _objc_retain();
    _objc_sync_enter();
    lVar4 = param_1;
    func_0x00010bf05160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar2 = 0;
    if (lVar4 != 0) {
      lVar4 = param_1;
      func_0x00010bf05180();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf05160(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar5;
      func_0x00010c273280();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bf05160(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar8;
      func_0x00010bf05260();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010bf59180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar8);
      _objc_release(lVar10);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar4 = lVar3;
    _objc_retain();
    lVar5 = lVar4;
    func_0x00010bf52a60();
    puVar1 = PTR___dispatch_main_q_11034be20;
    if (lVar5 != 0) {
      lVar10 = *plStack_130;
      do {
        lVar8 = 0;
        do {
          if (*plStack_130 != lVar10) {
            _objc_enumerationMutation(lVar4);
          }
          uVar9 = *(undefined8 *)(lStack_138 + lVar8 * 8);
          uVar7 = uVar9;
          func_0x00010c06ed00();
          if ((int)uVar7 == 0) {
            lVar6 = param_1;
            func_0x00010bfb2fe0();
            if (lVar6 == 1) {
              lVar6 = param_1;
              func_0x00010bf051a0(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0f9f80();
              _objc_release(lVar6);
            }
            else {
              puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_168 = 0xc2000000;
              pcStack_160 = FUN_1049456e8;
              puStack_158 = &UNK_110841f80;
              lStack_150 = param_1;
              uStack_148 = uVar9;
              func_0x00010007380c(puVar1,&puStack_170);
            }
          }
          else {
            func_0x00010bef80e0(lVar2);
          }
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
        lVar5 = lVar4;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      _objc_retain();
      _objc_sync_enter();
      lVar4 = param_1;
      func_0x00010bf05160();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c06ed00();
      _objc_release(lVar4);
      if ((int)lVar5 != 0) {
        lVar4 = param_1;
        func_0x00010bf05160(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef80e0();
        _objc_release(lVar4);
      }
      _objc_sync_exit(param_1);
      _objc_release(param_1);
    }
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bfb30d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar3 + 0x20),PTR_s_flushOnMainQueue_forReason__1125ca5d8,
             *(undefined8 *)(lVar3 + 0x28),3);
  return;
}



/* Entry: 1049456e8; end: 1049456f7;  */

void FUN_1049456e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb30d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_flushOnMainQueue_forReason__1125ca5d8,
             *(undefined8 *)(param_1 + 0x28),3);
  return;
}



/* Entry: 1049456f8; end: 10494586f; -[FBSDKAppEvents flushOnMainQueue:forReason:] */

void FUN_1049456f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      func_0x00010c0b3760(param_1);
      func_0x00010c23cd40();
    }
    else {
      uVar3 = param_1;
      func_0x00010bf051c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _NSStringFromSelector(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010bf39c40(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96840(uVar3);
      _objc_release(uVar4);
      _objc_release(param_2);
      _objc_release(uVar3);
      lVar1 = param_3;
      _objc_retain();
      func_0x00010bfaa160(param_1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104945870; end: 104945e57;  */

void FUN_104945870(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf051c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22ff20();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bf9eec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15f060();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010c0751a0();
  if ((int)uVar12 == 0) {
    uVar12 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c227f80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010c06cc80();
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  lVar6 = *(long *)(param_1 + 0x28);
  func_0x00010bdc19a0(lVar6,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar7 = *(long *)(param_1 + 0x28);
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar7;
    func_0x00010bf529e0();
    _objc_release(lVar7);
    if (lVar11 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf051c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c15f060(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar8;
      func_0x00010c06bb40();
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c292360(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfcbd80(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bef1900(uVar5,param_2,&PTR____CFConstantStringClassReference_110da1af8,uVar12,
                          uVar9,uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar5);
      lVar11 = lVar3;
      func_0x00010c08fa60();
      if (0 < lVar11) {
        func_0x00010bf71e80(PTR_PTR_1126add78,param_2,uVar4,lVar3,
                            &PTR____CFConstantStringClassReference_110da1b18);
      }
      func_0x00010bf71e80(PTR_PTR_1126add78,param_2,uVar4,lVar6,
                          &PTR____CFConstantStringClassReference_110da1b38);
      lVar11 = *(long *)(param_1 + 0x28);
      func_0x00010c0de620();
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar13 = PTR_PTR_1126add78;
      if (lVar11 != 0) {
        func_0x00010c0de620();
        func_0x00010c25d9e0(puVar15,param_2,&PTR____CFConstantStringClassReference_110daea58);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(puVar13,param_2,uVar4,puVar15,
                            &PTR____CFConstantStringClassReference_110da1b58);
        _objc_release(puVar15);
      }
      lVar11 = *(long *)(param_1 + 0x20);
      func_0x00010c11c240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar13 = PTR_PTR_1126add78;
      if (lVar11 != 0) {
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c11c240(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf71e80(puVar13,param_2,uVar4,uVar12,
                            &PTR____CFConstantStringClassReference_110ead678);
        _objc_release(uVar12);
      }
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c227f80();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar8;
      func_0x00010c0b3980();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar12;
      func_0x00010bf4b900();
      _objc_release(uVar12);
      _objc_release(uVar8);
      puVar13 = PTR_PTR_1126add78;
      if ((int)uVar5 == 0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        uVar12 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf9a520(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf64b60(puVar13,param_2,uVar12,1,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        func_0x00010c008340();
        uVar12 = uVar4;
        func_0x00010c0d3c80();
        func_0x00010c12d3e0();
        puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf051c0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c280880();
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010bf9a520();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf051c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar10;
        func_0x00010bfb3200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0(puVar15,param_2,&PTR____CFConstantStringClassReference_110da1b98);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar12);
        _objc_release(puVar14);
        _objc_release(puVar13);
      }
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf2fa40(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c123620();
      _objc_release(uVar12);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfcde20(uVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar1 = *(ulong *)(param_1 + 0x28);
      func_0x00010bf05260();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c25d9e0(puVar13,param_2,&PTR____CFConstantStringClassReference_110da1938);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c273280(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar12;
      func_0x00010bf56580(uVar12,param_2,puVar13,uVar4,uVar8,
                          &PTR____CFConstantStringClassReference_110dada18,0xc,1,
                          uVar2 & 0xffffffffffffff00);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(puVar13);
      _objc_release(uVar1);
      _objc_release(uVar12);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_104945e58;
      puStack_90 = &UNK_1107b9458;
      uStack_88 = *(undefined8 *)(param_1 + 0x20);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      puStack_80 = puVar15;
      _objc_retain();
      uStack_78 = uVar12;
      _objc_retain(puVar15);
      func_0x00010c251a80(uVar5,param_2,&puStack_a8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uStack_78);
      _objc_release(puStack_80);
      _objc_release(puVar15);
      _objc_release(uVar5);
      _objc_release(uVar4);
      goto LAB_104945e24;
    }
  }
  func_0x00010c0b3760(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c23cd40();
LAB_104945e24:
  _objc_release(lVar6);
  _objc_release(lVar3);
  return;
}



/* Entry: 104945e58; end: 104945e6b;  */

void FUN_104945e58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleActivitiesPostCompletion_l_1125d1a20,
             param_4,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104945e6c; end: 10494619b; -[FBSDKAppEvents handleActivitiesPostCompletion:loggingEntry:appEventsState:] */

void FUN_104945e6c(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf051c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf39c40(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96840(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  if (param_3 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd8998;
  }
  else {
    uVar1 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 0xfffffffffffffffb) == 400) {
      uVar1 = param_3;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2827c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar3 == 0) {
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010bf051c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf09880(param_5);
        func_0x00010c0a0ec0(uVar1);
        _objc_release(uVar1);
        _objc_release(puVar4);
      }
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar1 = param_3;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar1 = param_1;
      _objc_retain(param_1);
      _objc_sync_enter();
      uVar2 = uVar1;
      func_0x00010bf05160(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_5;
      func_0x00010c06ed00();
      _objc_release(uVar2);
      uVar2 = uVar1;
      if ((int)uVar6 == 0) {
        func_0x00010bf051a0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f9f80();
      }
      else {
        func_0x00010bf05160(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef80e0();
      }
      _objc_release(uVar2);
      _objc_sync_exit(uVar1);
      ppuVar5 = &PTR____CFConstantStringClassReference_110da1bd8;
    }
    _objc_release(uVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b3760(param_1);
  func_0x00010c23cd40();
  _objc_release(puVar4);
  _objc_release(ppuVar5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10494619c; end: 10494624f; -[FBSDKAppEvents flushTimerFired:] */

void FUN_10494619c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf051c0();
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf39c40(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96840(lVar1);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfb2fe0();
  if (lVar1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfb3030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_flushForReason__1125ca5b0,1);
  return;
}



/* Entry: 104946250; end: 10494630f; -[FBSDKAppEvents applicationDidBecomeActive] */

void FUN_104946250(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf051c0();
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf39c40(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96840(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  func_0x00010bfaa160(param_1);
  func_0x00010bf38360(param_1);
  func_0x00010c26f8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13c160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104946310; end: 1049463db; -[FBSDKAppEvents applicationMovingFromActiveState] */

void FUN_104946310(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter();
  lVar1 = param_1;
  func_0x00010bf05160();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  func_0x00010c1689a0(param_1,param_2,0);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf051a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9f80();
    _objc_release(lVar1);
  }
  func_0x00010c26f8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264060();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}


