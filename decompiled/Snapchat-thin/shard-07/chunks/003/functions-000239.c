/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10544e1d0; end: 10544e8f7; -[SCAdOperationMetricsManagerImpl serveResponseResolved:isPrimary:] */

void FUN_10544e1d0(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bef4240();
  puVar3 = PTR_PTR_1126b8cd8;
  func_0x00010c25d840(PTR_PTR_1126b8cd8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bef60a0();
  if (uVar4 == 7) {
    uVar4 = param_3;
    func_0x00010c26a3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf65fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c08fa60();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((param_4 != 0) && (uVar6 != 0)) {
      uVar4 = param_3;
      func_0x00010c26a3a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf65fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c08fa60();
      uVar7 = param_3;
      func_0x00010c26a3a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf65fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      if (0xf < uVar6) {
        uVar6 = uVar8;
        func_0x00010c260c20(uVar8,param_2,0xf);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar6;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar8);
      }
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      puVar12 = PTR_PTR_1126afca8;
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dde2b8);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c238720(puVar12,param_2,puVar10,puVar11);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(uVar9);
    }
  }
  puVar10 = PTR_PTR_1126b8c98;
  func_0x00010bf90d40();
  puVar12 = PTR_PTR_1126afca8;
  if ((int)puVar10 != 0) {
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dde2d8);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238720(puVar12,param_2,puVar10,puVar11);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  if (param_4 != 0) {
    puVar12 = PTR_PTR_1126b8d98;
    func_0x00010c13b920(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bef60a0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
    if (uVar4 != 7) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
    }
    puVar10 = puVar12;
    func_0x00010c2ac460(puVar12,param_2,&PTR____CFConstantStringClassReference_110f249b8,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = puVar10;
    func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    lVar13 = param_1;
    func_0x00010be245c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(lVar13);
    uVar4 = param_3;
    func_0x00010c257640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 != 0) {
      puVar10 = PTR_PTR_1126b8d98;
      func_0x00010c0f6d40(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_1;
      func_0x00010be245c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(lVar13);
      _objc_release(puVar10);
    }
    if (uVar2 != 4) {
      uVar14 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e2480();
      _objc_release(uVar14);
    }
    uVar4 = param_3;
    func_0x00010c15ed60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c107cc0();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      puVar11 = PTR_PTR_1126b8d98;
      func_0x00010c107220(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar4 = param_3;
      func_0x00010bef60a0(param_3);
      func_0x00010c0df760(puVar10,param_2,uVar4 == 7);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar10;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar11;
      func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110f249b8,puVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar15);
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar16;
      func_0x00010c2ac460(puVar16,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar11);
      _objc_release(puVar10);
      lVar13 = param_1;
      func_0x00010be245c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(lVar13);
      _objc_release(puVar15);
    }
    uVar4 = param_3;
    func_0x00010bef60a0();
    if ((uVar4 != 7) && ((uVar2 == 0xd || (uVar2 == 8)))) {
      puVar11 = PTR_PTR_1126b8d98;
      func_0x00010c23e5a0(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar2 = param_3;
      func_0x00010c26a3a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0821a0();
      func_0x00010c0df6e0(puVar10,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar10;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar11;
      func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110f24b98,puVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar15);
      _objc_release(puVar10);
      _objc_release(uVar2);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar2 = param_3;
      func_0x00010c26a3a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf2da00();
      func_0x00010c0df6e0(puVar10,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar16;
      func_0x00010c2ac460(puVar16,param_2,&PTR____CFConstantStringClassReference_110f24bb8,puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(uVar2);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar2 = param_3;
      func_0x00010bef52c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c082160();
      func_0x00010c0df6e0(puVar10,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010c2ac460(puVar15,param_2,&PTR____CFConstantStringClassReference_110f24bd8,puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(uVar4);
      _objc_release(uVar2);
      func_0x00010be245c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(param_1);
      _objc_release(puVar16);
    }
    _objc_release(puVar12);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10544e8f8; end: 10544ebcf; -[SCAdOperationMetricsManagerImpl serveRequestResolved:statusCode:requestLatencyInSec:isPrimary:] */

void FUN_10544e8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  if (param_6 != 0) {
    uVar1 = param_4;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c107cc0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      puVar3 = PTR_PTR_1126b8d98;
      func_0x00010c107200(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f24938,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar1 = param_4;
      func_0x00010c116320(param_4);
      func_0x00010c0df840(puVar3,param_3,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010c2ac460(puVar6,param_3,&PTR____CFConstantStringClassReference_110dfb298,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      uVar1 = param_2;
      func_0x00010be245c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar1);
      puVar4 = PTR_PTR_1126b8d98;
      func_0x00010c1071e0(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar6 = PTR_PTR_1126b9200;
      func_0x00010c261840(PTR_PTR_1126b9200);
      func_0x00010c0df760(puVar3,param_3,param_5 == puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110f24918,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar1 = param_4;
      func_0x00010c116320(param_4);
      func_0x00010c0df840(puVar3,param_3,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar7;
      func_0x00010c2ac460(puVar7,param_3,&PTR____CFConstantStringClassReference_110dfb298,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010be245c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc000(param_1);
      _objc_release(param_2);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10544ebd0; end: 10544ecab; -[SCAdOperationMetricsManagerImpl logReinitFromWrongRegion:] */

void FUN_10544ebd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c127f60(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f249d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10544ecac; end: 10544eee3; -[SCAdOperationMetricsManagerImpl logCOInfoEventWithCOResults:said:idfv:idfa:] */

void FUN_10544ecac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar12 = auStack_f0;
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar12,0x10);
  iVar11 = (int)puVar12;
  if (lVar2 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        lVar14 = *(long *)(lStack_128 + lVar13 * 8);
        if (lVar14 != 0) {
          puVar3 = PTR_PTR_1126b9208;
          _objc_opt_new();
          func_0x00010c1959a0();
          lVar4 = param_3;
          func_0x00010c0dff20(param_3,param_2,lVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar4;
          func_0x00010bf1f3c0();
          func_0x00010c17db20(puVar3,param_2,lVar14);
          _objc_release(lVar4);
          func_0x00010befa120(puVar1,param_2,puVar3);
          _objc_release(puVar3);
        }
        lVar13 = lVar13 + 1;
      } while (lVar2 != lVar13);
      puVar12 = auStack_f0;
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar12,0x10);
      iVar11 = (int)puVar12;
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b9210;
  _objc_opt_new();
  func_0x00010c17db40();
  func_0x00010c1f5260(puVar3,param_2,param_4);
  func_0x00010c1a9ba0(puVar3,param_2,param_5);
  func_0x00010c1a9b80(puVar3,param_2,param_6);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010c0b2b40();
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (iVar11 != 0) {
    _objc_retain(puVar10);
    puVar1 = puVar10;
    func_0x00010bef60a0(puVar10);
    puVar3 = puVar10;
    func_0x00010bef4240(puVar10);
    puVar6 = PTR_PTR_1126b8d98;
    func_0x00010bef5de0(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    FUN_105457590(puVar3);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dd2058,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar8);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010c2ac460(puVar9,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    lVar2 = param_3;
    func_0x00010be245c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(lVar2);
    puVar6 = puVar10;
    func_0x00010c15ed60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = puVar6;
    func_0x00010c107cc0();
    _objc_release(puVar6);
    if ((int)puVar10 != 0) {
      puVar10 = PTR_PTR_1126b8d98;
      func_0x00010c107280(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar6;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar10;
      func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar1);
      _objc_release(puVar6);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar7;
      func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(puVar1);
      func_0x00010be245c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(param_3);
      _objc_release(puVar10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar8);
    return;
  }
  return;
}



/* Entry: 10544eee4; end: 10544f197; -[SCAdOperationMetricsManagerImpl trackRequestSubmitted:isPrimary:] */

void FUN_10544eee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  if (param_4 != 0) {
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010bef60a0(param_3);
    uVar2 = param_3;
    func_0x00010bef4240(param_3);
    puVar3 = PTR_PTR_1126b8d98;
    func_0x00010bef5de0(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_105457590(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd2058,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
    uVar4 = param_1;
    func_0x00010be245c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010c15ed60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar8 = uVar4;
    func_0x00010c107cc0();
    _objc_release(uVar4);
    if ((int)uVar8 != 0) {
      puVar3 = PTR_PTR_1126b8d98;
      func_0x00010c107280(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar7);
      _objc_release(puVar5);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x00010c2ac460(puVar9,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar5);
      _objc_release(puVar3);
      func_0x00010be245c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(param_1);
      _objc_release(puVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 10544f198; end: 10544f327; -[SCAdOperationMetricsManagerImpl logRefinedTrackRequestSize:impressionDataSize:encryptedAdTrackDataSize:] */

void FUN_10544f198(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c278560(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c278560(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c278560(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10544f328; end: 10544f58b; -[SCAdOperationMetricsManagerImpl logLateTrackRequestSkipWithDelay:adProductType:isRetro:] */

void FUN_10544f328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c08ad20(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f249f8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = param_1;
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c08ad00(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110f249f8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10544f58c; end: 10544f71b; -[SCAdOperationMetricsManagerImpl logRequestFailedReason:adIdentifier:requestType:isPrimary:] */

void FUN_10544f58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  if (param_6 != 0) {
    puVar1 = PTR_PTR_1126b8d98;
    func_0x00010c135420(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bec5800(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f24af8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bec5820(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd5c38,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
    func_0x00010be245c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(param_1);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    if (param_4 != 0) {
      func_0x00010c1d0640(puVar3,param_2,param_4,&PTR____CFConstantStringClassReference_110dde138);
    }
    func_0x0001054575d0(param_5);
    _objc_retainAutoreleasedReturnValue();
    FUN_1054575f4(1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10544f71c; end: 10544f87b; -[SCAdOperationMetricsManagerImpl requestSubmittedAdIdentifier:requestType:requestURL:targetingParams:debugViewContext:isPrimary:] */

void FUN_10544f71c(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined *param_6,undefined *param_7,undefined *param_8,
                  long param_9)

{
  undefined **ppuVar1;
  char cVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  double dVar18;
  undefined *puStack_1c0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [128];
  long lStack_e0;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puVar11 = param_6;
  puVar12 = param_7;
  puVar13 = param_8;
  if (param_4 == 0) {
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_6);
    puVar10 = PTR____NSArray0__struct_11034ab48;
    func_0x00010be91980(param_2);
    puVar16 = param_6;
    param_6 = param_7;
  }
  else {
    uStack_60 = param_4;
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_6);
    func_0x00010bf0a140(puVar16,param_3,&uStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar16;
    func_0x00010be91980(param_2);
    _objc_release(param_8);
    param_8 = param_7;
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(puVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar10);
  _objc_retain(param_5);
  _objc_retain(puVar13);
  puVar16 = puVar11;
  FUN_10545765c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b9200;
  func_0x00010c261840();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if (puVar12 != puVar3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  _objc_retain(ppuVar1);
  puVar3 = puVar16;
  func_0x00010c2ac460(puVar16,param_3,&PTR____CFConstantStringClassReference_110f24918,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar16 = PTR_PTR_1126b8d98;
  func_0x00010c136680();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bec5820(param_4,param_3,puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar16;
  func_0x00010c2ac460(puVar16,param_3,&PTR____CFConstantStringClassReference_110dd5c38,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(uVar4);
  puVar16 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110f24918,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  FUN_105457590();
  puVar5 = puVar16;
  if (param_9 != 0) {
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar15;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar16,param_3,&PTR____CFConstantStringClassReference_110dd2058,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    _objc_release(puVar8);
    _objc_release(puVar15);
  }
  puVar16 = puVar13;
  func_0x00010c08fa60();
  if (puVar16 == (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_3,puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
  }
  puVar15 = puVar13;
  func_0x00010c08fa60();
  if (puVar15 == (undefined *)0x0) {
    puStack_1c0 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_3,puVar13);
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = puVar15;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
  }
  lVar17 = lStack_58;
  uVar4 = uStack_60;
  cVar2 = (char)uStack_60;
  uVar14 = uStack_60 & 0xff;
  if (puVar3 != (undefined *)0x0) {
    puVar15 = puVar3;
    func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110df2dd8,puVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar15;
    if ((uVar4 & 1) == 0) {
      func_0x00010c2ac460(puVar15,param_3,&PTR____CFConstantStringClassReference_110dbfab8,
                          puStack_1c0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
    }
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar15;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f249d8,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar15);
    uVar7 = param_4;
    func_0x00010be245c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    dVar18 = param_1;
    func_0x00010c155420(param_1,PTR_PTR_1126afec0);
    func_0x00010befbfe0(uVar7,param_3,puVar6,(long)dVar18);
    _objc_release(uVar7);
    _objc_release(puVar6);
  }
  if (lVar17 != 0) {
    uVar7 = param_4;
    func_0x00010be245c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar7);
  }
  puVar3 = puVar11;
  func_0x0001054576fc();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar15;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f24938,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar15);
  puVar3 = puVar6;
  if (param_9 != 0) {
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar15;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar6,param_3,&PTR____CFConstantStringClassReference_110dd2058,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar15);
  }
  if (puVar3 != (undefined *)0x0) {
    puVar15 = puVar3;
    func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110df2dd8,puVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar15;
    if ((uVar4 & 1) == 0) {
      func_0x00010c2ac460(puVar15,param_3,&PTR____CFConstantStringClassReference_110dbfab8,
                          puStack_1c0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
    }
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar15;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f249d8,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar15);
    uVar4 = param_4;
    func_0x00010be245c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar4);
    _objc_release(puVar6);
  }
  puVar3 = puVar10;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    func_0x00010be917a0(param_1,param_4,param_3,0,0,puVar11,puVar12,uVar14);
  }
  else {
    func_0x00010be917a0(param_1,param_4,param_3,puVar10,param_5,puVar11,puVar12,uVar14);
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    _objc_retain(puVar10);
    puVar3 = puVar10;
    func_0x00010bf52a60(puVar10,param_3,&uStack_1a0,auStack_160,0x10);
    if (puVar3 != (undefined *)0x0) {
      lVar17 = *plStack_190;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_190 != lVar17) {
            _objc_enumerationMutation(puVar10);
          }
          if (cVar2 != '\0') {
            if ((*(byte *)(param_4 + 0x40) & 1) == 0) {
              puVar8 = (undefined *)0x4;
              func_0x000106458ea4(4);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar8 = PTR_PTR_1126b91f8;
              func_0x00010bef4960(PTR_PTR_1126b91f8);
              _objc_retainAutoreleasedReturnValue();
            }
            puVar6 = puVar8;
            func_0x00010c2a7860();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            puVar8 = puVar6;
            func_0x00010c2b71e0(puVar6,param_3,puVar11);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            puVar6 = puVar8;
            func_0x00010c2b7160(puVar8,param_3,puVar12);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            puVar8 = puVar6;
            func_0x00010c2b7100(param_1,puVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            func_0x00010bf604e0(PTR_PTR_1126afec0);
            puVar6 = puVar8;
            func_0x00010c2b7140(puVar8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            uVar9 = *(undefined8 *)(param_4 + 8);
            func_0x00010c269d40(uVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e2380();
            _objc_release(uVar9);
            _objc_release(puVar6);
          }
          puVar15 = puVar15 + 1;
        } while (puVar3 != puVar15);
        puVar3 = puVar10;
        func_0x00010bf52a60(puVar10,param_3,&uStack_1a0,auStack_160,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar10);
  }
  _objc_release(puStack_1c0);
  _objc_release(puVar16);
  _objc_release(puVar5);
  _objc_release(ppuVar1);
  _objc_release(puVar13);
  _objc_release(param_5);
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1364a0();
  return;
}



/* Entry: 10544f87c; end: 1054500d3; -[SCAdOperationMetricsManagerImpl requestResolvedAdIdentifiers:adIds:requestType:statusCode:requestURL:requestLatencyInSec:adProductType:isPrimary:requestSize:responseSize:] */

void FUN_10544f87c(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined *param_7,long param_8,long param_9,byte param_10,
                  undefined4 param_11,long param_12)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  double dVar10;
  undefined *puStack_160;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  lVar2 = param_6;
  FUN_10545765c();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b9200;
  func_0x00010c261840();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if (param_7 != puVar8) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  _objc_retain(ppuVar1);
  lVar9 = lVar2;
  func_0x00010c2ac460(lVar2,param_3,&PTR____CFConstantStringClassReference_110f24918,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126b8d98;
  func_0x00010c136680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bec5820(param_2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010c2ac460(puVar8,param_3,&PTR____CFConstantStringClassReference_110dd5c38,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(lVar2);
  puVar8 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f24918,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  FUN_105457590();
  puVar3 = puVar8;
  if (param_9 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar8,param_3,&PTR____CFConstantStringClassReference_110dd2058,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  lVar2 = param_8;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_3,param_8);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  lVar2 = param_8;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puStack_160 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_3,param_8);
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar5;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  if (lVar9 != 0) {
    lVar2 = lVar9;
    func_0x00010c2ac460(lVar9,param_3,&PTR____CFConstantStringClassReference_110df2dd8,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    lVar9 = lVar2;
    if ((param_10 & 1) == 0) {
      func_0x00010c2ac460(lVar2,param_3,&PTR____CFConstantStringClassReference_110dbfab8,puStack_160
                         );
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar9;
    func_0x00010c2ac460(lVar9,param_3,&PTR____CFConstantStringClassReference_110f249d8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(puVar4);
    _objc_release(puVar5);
    lVar9 = param_2;
    func_0x00010be245c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    dVar10 = param_1;
    func_0x00010c155420(param_1,PTR_PTR_1126afec0);
    func_0x00010befbfe0(lVar9,param_3,lVar2,(long)dVar10);
    _objc_release(lVar9);
    _objc_release(lVar2);
  }
  if (param_12 != 0) {
    lVar2 = param_2;
    func_0x00010be245c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(lVar2);
  }
  lVar2 = param_6;
  func_0x0001054576fc();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c2ac460(lVar2,param_3,&PTR____CFConstantStringClassReference_110f24938,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(puVar5);
  lVar2 = lVar9;
  if (param_9 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(lVar9,param_3,&PTR____CFConstantStringClassReference_110dd2058,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  if (lVar2 != 0) {
    lVar9 = lVar2;
    func_0x00010c2ac460(lVar2,param_3,&PTR____CFConstantStringClassReference_110df2dd8,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar9;
    if ((param_10 & 1) == 0) {
      func_0x00010c2ac460(lVar9,param_3,&PTR____CFConstantStringClassReference_110dbfab8,puStack_160
                         );
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c2ac460(lVar2,param_3,&PTR____CFConstantStringClassReference_110f249d8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(puVar4);
    _objc_release(puVar5);
    lVar2 = param_2;
    func_0x00010be245c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(lVar2);
    _objc_release(lVar9);
  }
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010be917a0(param_1,param_2,param_3,0,0,param_6,param_7,param_10);
  }
  else {
    func_0x00010be917a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_10);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x00010bf52a60(param_4,param_3,&uStack_140,auStack_100,0x10);
    if (lVar2 != 0) {
      lVar9 = *plStack_130;
      do {
        lVar7 = 0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(param_4);
          }
          if (param_10 != 0) {
            if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
              puVar5 = (undefined *)0x4;
              func_0x000106458ea4(4);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puVar5 = PTR_PTR_1126b91f8;
              func_0x00010bef4960(PTR_PTR_1126b91f8);
              _objc_retainAutoreleasedReturnValue();
            }
            puVar4 = puVar5;
            func_0x00010c2a7860();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            puVar5 = puVar4;
            func_0x00010c2b71e0(puVar4,param_3,param_6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            puVar4 = puVar5;
            func_0x00010c2b7160(puVar5,param_3,param_7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            puVar5 = puVar4;
            func_0x00010c2b7100(param_1,puVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            func_0x00010bf604e0(PTR_PTR_1126afec0);
            puVar4 = puVar5;
            func_0x00010c2b7140(puVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            uVar6 = *(undefined8 *)(param_2 + 8);
            func_0x00010c269d40(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e2380();
            _objc_release(uVar6);
            _objc_release(puVar4);
          }
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = param_4;
        func_0x00010bf52a60(param_4,param_3,&uStack_140,auStack_100,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(param_4);
  }
  _objc_release(puStack_160);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c1364a0();
  return;
}



/* Entry: 1054500d4; end: 10545010f; -[SCAdOperationMetricsManagerImpl requestResolvedAdIdentifiers:requestType:statusCode:requestURL:requestLatencyInSec:adProductType:isPrimary:] */

void FUN_1054500d4(void)

{
  func_0x00010c1364a0();
  return;
}



/* Entry: 105450110; end: 105450287; -[SCAdOperationMetricsManagerImpl logAdvertiserIdStatus:requestType:isPrimary:] */

void FUN_105450110(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  if (param_5 != 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      uVar7 = 0;
    }
    else {
      lVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbe8f8);
      uVar7 = 1;
      if ((int)lVar1 == 0) {
        uVar7 = 2;
      }
    }
    puVar2 = PTR_PTR_1126b8d98;
    func_0x00010bfe62a0(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bec5820(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd5c38,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f24b78,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    func_0x00010be245c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(param_1);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105450288; end: 1054502d7; -[SCAdOperationMetricsManagerImpl adExpired:] */

void FUN_105450288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef2940();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054502d8; end: 10545032f; -[SCAdOperationMetricsManagerImpl logInvalidUserData] */

void FUN_1054502d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010be245c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bef4b80(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105450330; end: 105450387; -[SCAdOperationMetricsManagerImpl logInvalidAdData] */

void FUN_105450330(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010be245c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bef4b60(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105450388; end: 105450397; -[SCAdOperationMetricsManagerImpl _blizzardWebViewFeatureFromWebViewFeature:] */

long FUN_105450388(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (0xb < param_3 - 1U) {
    param_3 = 0;
  }
  return param_3;
}



/* Entry: 105450398; end: 1054505bf; -[SCAdOperationMetricsManagerImpl logWebViewUserInteractionInfo:withAdData:screenSize:] */

void FUN_105450398(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126b9218;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar3 = param_4;
  func_0x00010bef2c20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d040(puVar1);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c15ed20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1fd160(puVar1);
  _objc_release(uVar3);
  func_0x00010c1f75c0(puVar1);
  func_0x00010c1f7160(puVar1);
  uVar3 = param_3;
  func_0x00010bf4bd80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000100504554();
  func_0x00010c181ba0(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf4bd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000100504554();
  func_0x00010c181b80(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bfa24c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105450708;
  puStack_60 = &UNK_11088a380;
  uVar2 = uVar3;
  lStack_58 = param_1;
  func_0x000100504554(uVar3,&puStack_78);
  func_0x00010c19aa20(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054505c0; end: 105450707;  */

void FUN_1054505c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9220;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c270a80(param_4);
  func_0x00010c215e20(puVar1);
  func_0x00010c104260(param_4);
  func_0x00010c1def80(puVar1);
  func_0x00010c104260(param_4);
  _objc_release(param_4);
  func_0x00010c1defa0(param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105450708; end: 10545079b;  */

void FUN_105450708(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9230;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1820(param_2);
  func_0x00010bdd4da0(uVar2);
  func_0x00010c19a840(puVar1);
  func_0x00010c270a80(param_2);
  _objc_release(param_2);
  func_0x00010c215e20(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10545079c; end: 1054507c3; -[SCAdOperationMetricsManagerImpl _stringErrorFromEnum:] */

undefined ** FUN_10545079c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x33) {
    return (undefined **)(&PTR_PTR_11088a410)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dde2f8;
}



/* Entry: 1054507c4; end: 1054509c3; -[SCAdOperationMetricsManagerImpl logRenderDataInvalidWithError:isPrimaryAdResponse:metricsContext:] */

void FUN_1054507c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bec5500(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8d98;
  func_0x00010bf63c60(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110f249d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  lVar6 = param_1;
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126b9238;
  _objc_opt_new(PTR_PTR_1126b9238);
  uVar7 = param_5;
  func_0x00010bef4240(param_5);
  func_0x0001084b952c();
  func_0x00010c163f80(puVar2,param_2,uVar7);
  uVar7 = param_5;
  func_0x00010bef2c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar2,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010bef47c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c164260(puVar2,param_2,uVar7);
  _objc_release(uVar7);
  func_0x0001084b9574(param_3);
  func_0x00010c1ae740(puVar2,param_2,param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054509c4; end: 105450be3; -[SCAdOperationMetricsManagerImpl logRenderDataInvalidWithError:isPrimaryAdResponse:metricsContext:errorDetail:] */

void FUN_1054509c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bec5500(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8d98;
  func_0x00010bf63c60(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110f249d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  lVar6 = param_1;
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126b9238;
  _objc_opt_new(PTR_PTR_1126b9238);
  uVar7 = param_5;
  func_0x00010bef4240(param_5);
  func_0x0001084b952c();
  func_0x00010c163f80(puVar2,param_2,uVar7);
  uVar7 = param_5;
  func_0x00010bef2c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar2,param_2,uVar7);
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010bef47c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c164260(puVar2,param_2,uVar7);
  _objc_release(uVar7);
  func_0x0001084b9574(param_3);
  func_0x00010c1ae740(puVar2,param_2,param_3);
  func_0x00010c197040(puVar2,param_2,param_6);
  _objc_release(param_6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105450be4; end: 105450ca7; -[SCAdOperationMetricsManagerImpl logInvalidWebviewUrl:adIdentifier:serveItemId:] */

void FUN_105450be4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9240;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c163720();
  _objc_release(param_4);
  func_0x00010c1fd160(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1ad6c0(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105450ca8; end: 105450d97; -[SCAdOperationMetricsManagerImpl logCidMetadata:serveItemId:] */

void FUN_105450ca8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b9248;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1fd160();
  _objc_release(param_4);
  uVar3 = param_3;
  func_0x00010bf39720(param_3);
  func_0x00010c198980(puVar1,param_2,uVar3);
  uVar3 = param_3;
  func_0x00010bf9a8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1989a0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf9a920(param_3);
  _objc_release(param_3);
  lVar2 = param_1;
  func_0x00010be70120(param_1,param_2,uVar3);
  func_0x00010c197e80(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105450d98; end: 105450da7; -[SCAdOperationMetricsManagerImpl _parseExbMode:] */

long FUN_105450d98(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (2 < param_3 - 1U) {
    param_3 = 0;
  }
  return param_3;
}



/* Entry: 105450da8; end: 105450dab; -[SCAdOperationMetricsManagerImpl logInitResponse:isPrimary:] */

void FUN_105450da8(void)

{
  return;
}



/* Entry: 105450dac; end: 105451103; -[SCAdOperationMetricsManagerImpl initRequestResolved:statusCode:allUpdatesDeprecationEnabled:isPrimary:] */

void FUN_105450dac(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bfef340(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bec5820(param_2,param_3,4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dd5c38,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR_PTR_1126b9200;
  func_0x00010c261840(PTR_PTR_1126b9200);
  func_0x00010c0df760(puVar1,param_3,param_4 == puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f24918,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110f24b58,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  dVar7 = param_1;
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010befbfe0(uVar2,param_3,puVar4,(long)dVar7);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bfef380(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bec5820(param_2,param_3,4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dd5c38,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f24938,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c2ac460(puVar6,param_3,&PTR____CFConstantStringClassReference_110f24b58,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar2 = param_2;
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  func_0x00010be917a0(param_1,param_2,param_3,0,0,4,param_4,param_6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105451104; end: 105451213; -[SCAdOperationMetricsManagerImpl logSnapTokenFailedToGenerate:error:] */

void FUN_105451104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_4);
  func_0x00010c243860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f249d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = param_1;
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  func_0x00010be58c60(param_1,param_2,0,param_4,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105451214; end: 105451327; -[SCAdOperationMetricsManagerImpl logSnapTokenGenerationLatencyInSec:isPrimary:] */

void FUN_105451214(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c2438a0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110f249d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = param_2;
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155420(param_1,PTR_PTR_1126afec0);
  func_0x00010befbfe0(uVar5,param_3,puVar4,(long)param_1);
  _objc_release(uVar5);
  func_0x00010be58c60(param_2,param_3,1,0,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105451328; end: 105451477; -[SCAdOperationMetricsManagerImpl logInitRequestIssue:isPrimary:] */

void FUN_105451328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bfef320(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f249d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f24b18,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105451478; end: 10545152b; -[SCAdOperationMetricsManagerImpl logInitResponseIssue:] */

void FUN_105451478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bfef3c0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  FUN_105457630(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f24b38,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10545152c; end: 105451617; -[SCAdOperationMetricsManagerImpl logInitEndpointCOFFetchLatency:isPrimary:] */

void FUN_10545152c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bf3f260(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110f249d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105451618; end: 105451743; -[SCAdOperationMetricsManagerImpl logPixelTokenFetchLatency:statusCode:] */

void FUN_105451618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0fcde0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010c0fce00(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f24938,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_2);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105451744; end: 105451957; -[SCAdOperationMetricsManagerImpl logTrackResponseError:statusCode:adProductType:] */

void FUN_105451744(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c278680(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd2058,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f24938,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar5 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  puVar1 = puVar3;
  if (lVar6 != 0) {
    lVar5 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd6078,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105451958; end: 105451ad3; -[SCAdOperationMetricsManagerImpl _requestResolved:adIds:requestType:statusCode:requestLatencyInSec:isPrimary:] */

void FUN_105451958(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined *param_7,int param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_8 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    lVar2 = param_4;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010c1d0640(puVar1,param_3,param_4,&PTR____CFConstantStringClassReference_110dde138);
    }
    lVar2 = param_5;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      func_0x00010c1d0640(puVar1,param_3,param_5,&PTR____CFConstantStringClassReference_110dde158);
    }
    puVar3 = PTR_PTR_1126b9200;
    func_0x00010c261840();
    if (param_7 != puVar3) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1,param_3,puVar3,&PTR____CFConstantStringClassReference_110dde178);
      _objc_release(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,puVar3,&PTR____CFConstantStringClassReference_110dde198);
    _objc_release(puVar3);
    func_0x0001054575d0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_6);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105451ad4; end: 105451e7f; -[SCAdOperationMetricsManagerImpl _requestSubmittedAdIdentifiers:requestType:requestURL:targetingParams:debugViewContext:isPrimary:] */

void FUN_105451ad4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  long param_6,undefined8 param_7,long param_8,int param_9)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf906e0();
  _objc_release(uVar1);
  lVar2 = param_8;
  if ((int)uVar6 != 0) {
    FUN_10545779c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c1d0640(puVar3,param_3,lVar2,&PTR____CFConstantStringClassReference_110dde998);
  }
  lVar4 = param_6;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    func_0x00010c1d0640(puVar3,param_3,param_6,&PTR____CFConstantStringClassReference_110dde9b8);
  }
  lVar4 = param_4;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    func_0x00010c1d0640(puVar3,param_3,param_4,&PTR____CFConstantStringClassReference_110dde138);
  }
  if (param_9 != 0) {
    uVar5 = param_5;
    func_0x0001054575d0(param_5);
    _objc_retainAutoreleasedReturnValue();
    FUN_1054575f4(1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    if (param_5 < 5) {
      uVar1 = *(undefined8 *)(&UNK_10ddaf128 + param_5 * 8);
    }
    else {
      uVar1 = 0;
    }
    func_0x00010c0aae60(uVar6,param_3,lVar2,param_4,uVar1);
    _objc_release(uVar6);
    param_1 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_4);
    lVar4 = param_4;
    func_0x00010bf52a60(param_4,param_3,&uStack_130,auStack_f0,0x10);
    if (lVar4 != 0) {
      lVar10 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(param_4);
          }
          if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
            puVar7 = (undefined *)0x3;
            func_0x000106458ea4(3);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar7 = PTR_PTR_1126b91f8;
            func_0x00010bef49e0(PTR_PTR_1126b91f8);
            _objc_retainAutoreleasedReturnValue();
          }
          puVar8 = puVar7;
          func_0x00010c2a7860();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          puVar7 = puVar8;
          func_0x00010c2b7200(puVar8,param_3,param_6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          puVar8 = puVar7;
          func_0x00010c2b71e0(puVar7,param_3,param_5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          puVar7 = puVar8;
          func_0x00010c2b71a0(puVar8,param_3,param_7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          func_0x00010bf604e0(PTR_PTR_1126afec0);
          puVar8 = puVar7;
          func_0x00010c2b7180(puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          uVar6 = *(undefined8 *)(param_2 + 8);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e2380();
          _objc_release(uVar6);
          _objc_release(puVar8);
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        lVar4 = param_4;
        func_0x00010bf52a60(param_4,param_3,&uStack_130,auStack_f0,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(param_4);
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010bfc2ec0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be245c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105451e80; end: 105451eeb; -[SCAdOperationMetricsManagerImpl logGetBatteryDataLatencyInSec:] */

void FUN_105451e80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bfc2ec0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105451eec; end: 105451f57; -[SCAdOperationMetricsManagerImpl logGetDiskDataLatencyInSec:] */

void FUN_105451eec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bfc4ec0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105451f58; end: 105451fb3; -[SCAdOperationMetricsManagerImpl logCOFNotCreated] */

void FUN_105451f58(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bf3f500(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105451fb4; end: 10545209b; -[SCAdOperationMetricsManagerImpl logTrackingAuthorizationStatus] */

void FUN_105451fb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___ATTrackingManager_1126b8f80;
  func_0x00010c278ce0(PTR__OBJC_CLASS___ATTrackingManager_1126b8f80);
  puVar2 = PTR_PTR_1126b8d98;
  func_0x00010bf0c500(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110f24c98,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar3);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10545209c; end: 105452107; -[SCAdOperationMetricsManagerImpl logRankingSignalsPayloadSize:] */

void FUN_10545209c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c11fcc0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105452108; end: 1054522e7; -[SCAdOperationMetricsManagerImpl _logSnapTokenGeneration:error:isPrimary:] */

void FUN_105452108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_4);
  func_0x00010c243880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f249d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f24918,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_4;
  func_0x00010bf3ec40(param_4);
  _objc_release(param_4);
  func_0x00010c0df780(puVar1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf4d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1054522e8; end: 1054523ff; -[SCAdOperationMetricsManagerImpl logTargetingSettingsRequestStatus:requestType:] */

void FUN_1054522e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_4);
  func_0x00010c26a4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dde9d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dd5c38,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar4);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105452400; end: 10545245b; -[SCAdOperationMetricsManagerImpl logSLCFailedToGenerateSnapToken] */

void FUN_105452400(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c23e7c0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10545245c; end: 105452bb7; -[SCAdOperationMetricsManagerImpl logAdView:adProductType:adType:isFill:topSnapViewTime:viewSource:hasOrganicContext:topMediaType:bottomMedia:viewLocation:] */

void FUN_10545245c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5,undefined8 param_6,ulong param_7,undefined8 param_8,int param_9,
                  undefined8 param_10,undefined4 param_11,undefined4 param_12,undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  puVar1 = PTR_PTR_1126b7410;
  _objc_retain(param_8);
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf5e740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b8d98;
  if ((param_4 & 1) == 0) {
    func_0x00010c260b00(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfb0da0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110ddd2d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110f24a98,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110f24a58,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110ddfd98,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar1 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110eb5238,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(puVar5);
  uVar6 = param_2;
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  if (param_9 != 0) {
    puVar3 = PTR_PTR_1126b8d98;
    if ((param_4 & 1) == 0) {
      func_0x00010c0f6d60(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0f6d00();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110ddfd98,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010c2ac460(puVar7,param_3,&PTR____CFConstantStringClassReference_110ddd2d8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar6 = param_2;
    func_0x00010be245c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar6);
    _objc_release(puVar5);
  }
  puVar3 = PTR_PTR_1126b8d98;
  if (param_5 == 2) {
    func_0x00010bfbc2c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (1 < param_5 - 5U) goto LAB_1054529ac;
    func_0x00010bf395e0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_7 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f24a98,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b2930;
    func_0x00010bf5e640(PTR_PTR_1126b2930);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfd3880();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010c2ac460(puVar7,param_3,&PTR____CFConstantStringClassReference_110e68238,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110ddfd98,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar6 = param_2;
    func_0x00010be245c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar6);
    _objc_release(puVar7);
  }
LAB_1054529ac:
  if ((int)param_7 != 0) {
    puVar3 = PTR_PTR_1126b9250;
    func_0x00010c0da220(PTR_PTR_1126b9250,param_3,param_6,param_5,param_13);
    puVar4 = PTR_PTR_1126b8d98;
    func_0x00010bef6300(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110ddd2d8,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010c2ac460(puVar8,param_3,&PTR____CFConstantStringClassReference_110ddfd98,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (puVar3 + -1 < (undefined *)0x3) {
      ppuVar9 = (undefined **)(&PTR_PTR_11088a5a8)[(long)(puVar3 + -1)];
    }
    else {
      ppuVar9 = &PTR____CFConstantStringClassReference_110dabe78;
    }
    puVar3 = puVar7;
    func_0x00010c2ac460(puVar7,param_3,&PTR____CFConstantStringClassReference_110f24db8,ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f24dd8,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010be245c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc000(param_1);
    _objc_release(param_2);
    _objc_release(puVar7);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105452bb8; end: 105452d6f; -[SCAdOperationMetricsManagerImpl logAdServeToDisplayLatencyInSec:adResponse:] */

void FUN_105452bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010bef4240(param_4);
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010bef4de0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b8cd8;
  func_0x00010c25d840(PTR_PTR_1126b8cd8,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110dfb298,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  uVar2 = param_4;
  func_0x00010c15ed60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c107cc0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)uVar6 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110f24a18,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b8ca0;
  uVar2 = param_4;
  func_0x00010bef60a0(param_4);
  _objc_release(param_4);
  func_0x00010c25d240(puVar3,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110ddfd98,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105452d70; end: 105452dff; -[SCAdOperationMetricsManagerImpl logIntermediateAdTrack:adType:topMediaType:bottomMedia:viewLocation:] */

void FUN_105452d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c069160(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9250;
  func_0x00010c0da220(PTR_PTR_1126b9250,param_2,param_4,param_3,param_7);
  func_0x00010be4fee0(param_1,param_2,puVar1,param_3,param_4,puVar2,param_5,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105452e00; end: 105452f0f; -[SCAdOperationMetricsManagerImpl logAdViewFromAdTrack:adType:isFill:topMediaType:bottomMedia:viewLocation:] */

void FUN_105452e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bef6200(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f24a98,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126b9250;
  func_0x00010c0da220(PTR_PTR_1126b9250,param_2,param_4,param_3,param_8);
  func_0x00010be4fee0(param_1,param_2,puVar4,param_3,param_4,puVar1,param_6,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105452f10; end: 105453097; -[SCAdOperationMetricsManagerImpl logAdTrackedByDemandSource:adProductType:success:] */

void FUN_105452f10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x00010bef27a0(param_3);
  }
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bef5fc0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8e00;
  func_0x00010c25d7c0(PTR_PTR_1126b8e00,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f24ff8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126b8cd8;
  func_0x00010c25d840(PTR_PTR_1126b8cd8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105453098; end: 10545324b; -[SCAdOperationMetricsManagerImpl logAdSwipe:adType:topMediaType:bottomMedia:hasOrganicContext:viewLocation:] */

void FUN_105453098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bef57e0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9250;
  func_0x00010c0da220(PTR_PTR_1126b9250,param_2,param_4,param_3,param_8);
  func_0x00010be4fee0(param_1,param_2,puVar1,param_3,param_4,puVar2,param_5,0);
  if (param_7 != 0) {
    puVar2 = PTR_PTR_1126b8d98;
    func_0x00010c0f6d20(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010be245c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(param_1);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10545324c; end: 1054532e7; -[SCAdOperationMetricsManagerImpl logAdSwipeFromAdTrack:adType:topMediaType:bottomMedia:isTap:viewLocation:] */

void FUN_10545324c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bef5800(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9250;
  func_0x00010c0da220(PTR_PTR_1126b9250,param_2,param_4,param_3,param_8);
  func_0x00010be4fee0(param_1,param_2,puVar1,param_3,param_4,puVar2,param_5,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054532e8; end: 10545355f; -[SCAdOperationMetricsManagerImpl _logAdSwipeAdViewWithMetric:adProductType:adType:ctaType:topMediaType:isTap:] */

void FUN_1054532e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c0df840(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2ac460(uVar3,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (param_6 - 1U < 3) {
    ppuVar5 = (undefined **)(&PTR_PTR_11088a5a8)[param_6 - 1U];
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dabe78;
  }
  uVar3 = uVar4;
  func_0x00010c2ac460(uVar4,param_2,&PTR____CFConstantStringClassReference_110f24db8,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2ac460(uVar3,param_2,&PTR____CFConstantStringClassReference_110f24dd8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c2ac460(uVar4,param_2,&PTR____CFConstantStringClassReference_110f24df8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105453560; end: 1054536ef; -[SCAdOperationMetricsManagerImpl logLeaveAppInstallAttachmentWithSnapLoadedOnEntry:snapLoadedOnExit:mediaLoadWaitTimeInSec:] */

void FUN_105453560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bf055e0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dde218,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110dde238,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = param_2;
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bf05640(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1054536f0; end: 1054537cb; -[SCAdOperationMetricsManagerImpl logCommercialAdRequested:] */

void FUN_1054536f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0821c0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1054537cc; end: 1054538a7; -[SCAdOperationMetricsManagerImpl logCommercialAdReceived:] */

void FUN_1054537cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0821e0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1054538a8; end: 105453983; -[SCAdOperationMetricsManagerImpl logCommercialAdTracked:] */

void FUN_1054538a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c082200(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105453984; end: 105453b43; -[SCAdOperationMetricsManagerImpl logBrandSafetyAdsReceived:purgedAdResponses:receivedAdResponses:] */

void FUN_105453984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b9258;
  _objc_opt_new(PTR_PTR_1126b9258);
  func_0x0001084b952c(param_3);
  func_0x00010c163f80(puVar2);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105453b44;
  puStack_78 = &UNK_11088a3b0;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = param_4;
  func_0x000100504554(param_4,&puStack_90);
  func_0x00010c1e5de0(puVar2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x105453ba8;
  puStack_a0 = &UNK_11088a3b0;
  _objc_copyWeak(auStack_98,auStack_68);
  uVar4 = param_5;
  func_0x000100504554(param_5,&puStack_b8);
  func_0x00010c1e82c0(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105453b44; end: 105453c0b;  */

void FUN_105453b44(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd57c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105453c0c; end: 105453c63; -[SCAdOperationMetricsManagerImpl logPromotedStoryOverflowTileIndex] */

void FUN_105453c0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010be245c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c118360(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105453c64; end: 105453e7b; -[SCAdOperationMetricsManagerImpl logSpectrumAdTrack:adTrackTriggerType:isShadow:region:] */

void FUN_105453c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010c2499a0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ddea18;
  if (param_4 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ddea38;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dde9f8;
  if (param_4 != 0) {
    ppuVar2 = ppuVar1;
  }
  puVar3 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110de7778,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd5c38,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110df2dd8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105453e7c; end: 105453fef; -[SCAdOperationMetricsManagerImpl logFetchMediaPreconditionFailedWithReason:adProductType:adId:] */

void FUN_105453e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_5);
  func_0x00010c0c4e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be5e780(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f24978,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dfbb78,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar5);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105453ff0; end: 105454017; -[SCAdOperationMetricsManagerImpl _mediaFetchPreconditionErrorReasonFromReason:] */

undefined ** FUN_105453ff0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return (undefined **)(&PTR_PTR_11088a5c0)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 105454018; end: 1054541bb; -[SCAdOperationMetricsManagerImpl logMediaIdGenerationError:adType:isDpa:] */

void FUN_105454018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0c51a0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be5e7c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f24978,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110f24958,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1054541bc; end: 1054541e7; -[SCAdOperationMetricsManagerImpl _mediaIdErrorReasonFromError:] */

undefined ** FUN_1054541bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dde1d8;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dde1b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dde1f8;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 1054541e8; end: 1054543a3; -[SCAdOperationMetricsManagerImpl logImpressionCall:adNetwork:adProductType:success:error:source:] */

void FUN_1054541e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined **param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_7);
  if (param_3 != 2) {
    if ((param_6 & 1) == 0) {
      ppuVar1 = param_7;
      FUN_1054543a4(param_7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ddea58;
    }
    uVar2 = param_1;
    func_0x00010bdcca60(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b8cd8;
    func_0x00010c25d840(PTR_PTR_1126b8cd8,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c2ac460(uVar3,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2ac460(uVar2,param_2,&PTR____CFConstantStringClassReference_110f24cd8,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010be245c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1054543a4; end: 105454463;  */

void FUN_1054543a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    _objc_retain();
    lVar1 = param_1;
    func_0x00010bf3ec40(param_1);
    func_0x00010c0df780(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c14de00(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110dc0f98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105454464; end: 1054544fb; -[SCAdOperationMetricsManagerImpl _appImpressionCallStatusMetricForCallType:adNetwork:] */

void FUN_105454464(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_3 == 1) {
    if (param_4 == 1) {
      func_0x00010beec140(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 0) {
      func_0x00010c23daa0(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 0) {
    if (param_4 == 1) {
      func_0x00010beec160(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_4 == 0) {
      func_0x00010c23dac0(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054544fc; end: 1054549bb; -[SCAdOperationMetricsManagerImpl logSKAdNetworkImpression:viewLocation:adNetwork:adProductType:adId:adServeItemId:skAdNetworkClickThroughVersion:skAdNetworkViewThroughVersion:skAdCampaignId:skAdSourceId:viewTimeInSec:actualAdViewTimeInSec:error:] */

void FUN_1054544fc(double param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,long param_15)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  double dVar12;
  
  _objc_retain(param_15);
  puVar2 = PTR_PTR_1126b9260;
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_opt_new(puVar2);
  uVar4 = param_8;
  func_0x0001084b952c(param_8);
  func_0x00010c163f80(puVar2,param_4,uVar4);
  func_0x000108534aa8(param_6);
  func_0x00010c222c00(puVar2,param_4,param_6);
  func_0x00010c163720(puVar2,param_4,param_9);
  _objc_release(param_9);
  func_0x00010c164480(puVar2,param_4,param_10);
  _objc_release(param_10);
  lVar3 = param_3;
  func_0x00010bdc5600(param_3,param_4,param_7);
  func_0x00010c163c00(puVar2,param_4,lVar3);
  func_0x00010c202d80(puVar2,param_4,param_11);
  _objc_release(param_11);
  func_0x00010c202e00(puVar2,param_4,param_12);
  _objc_release(param_12);
  func_0x00010c222cc0(param_1,puVar2);
  func_0x00010c162e80(param_2,puVar2);
  uVar1 = param_5;
  if (param_5 != 2) {
    uVar1 = (ulong)(param_5 == 1);
  }
  func_0x00010c202d40(puVar2,param_4,uVar1);
  func_0x00010c202ec0(puVar2,param_4,param_14);
  func_0x00010c202ea0(puVar2,param_4,param_13);
  if (param_15 != 0) {
    lVar3 = param_15;
    func_0x00010bf87dc0(param_15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197080(puVar2,param_4,lVar3);
    _objc_release(lVar3);
    lVar3 = param_15;
    func_0x00010bf3ec40(param_15);
    func_0x00010c196fe0(puVar2,param_4,lVar3);
    lVar3 = param_15;
    func_0x00010c09e4e0(param_15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197020(puVar2,param_4,lVar3);
    _objc_release(lVar3);
  }
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  if (param_5 == 1) {
    puVar5 = PTR_PTR_1126b8cd8;
    func_0x00010c25d840(PTR_PTR_1126b8cd8,param_4,param_8);
    _objc_retainAutoreleasedReturnValue();
    dVar12 = param_1 * 1000.0;
    lVar11 = (long)dVar12;
    lVar3 = param_3;
    func_0x00010be245c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d980();
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126b8d98;
    func_0x00010c23dae0(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar7 = param_15;
    func_0x00010bf3ec40(param_15);
    func_0x00010c0df780(puVar8,param_4,lVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010c2ac460(puVar6,param_4,&PTR____CFConstantStringClassReference_110db0dd8,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,dVar12 <= param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar10;
    func_0x00010c2ac460(puVar10,param_4,&PTR____CFConstantStringClassReference_110dabf58,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar8);
    puVar8 = puVar6;
    func_0x00010c2ac460(puVar6,param_4,&PTR____CFConstantStringClassReference_110ddd2d8,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010bfec2a0(lVar3,param_4,puVar8);
    _objc_release(puVar8);
    _objc_release(lVar3);
    func_0x00010be245c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b8d98;
    func_0x00010c23dae0(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = param_15;
    func_0x00010bf3ec40(param_15);
    func_0x00010c0df780(puVar8,param_4,lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010c2ac460(puVar6,param_4,&PTR____CFConstantStringClassReference_110db0dd8,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = puVar10;
    func_0x00010c2ac460(puVar10,param_4,&PTR____CFConstantStringClassReference_110ddd2d8,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    func_0x00010befbfe0(param_3,param_4,puVar8,lVar11);
    _objc_release(puVar8);
    _objc_release(param_3);
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_15);
  return;
}



/* Entry: 1054549bc; end: 1054549cf; -[SCAdOperationMetricsManagerImpl _adNetworkTypeFromSCAdNetworkType:] */

undefined8 FUN_1054549bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (param_3 != 1) {
    uVar2 = 0xffffffffffffffff;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1054549d0; end: 105454b4b; -[SCAdOperationMetricsManagerImpl logSKAdNetworkImpressionStartedWithPendingImpression:incoming:] */

void FUN_1054549d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c23db00(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bef60a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef27c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110f24cd8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bef27c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f24cf8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  func_0x00010bfec2a0(param_1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105454b4c; end: 1054550a3; -[SCAdOperationMetricsManagerImpl logSKAdClickWithResult:error:source:latency:prefetched:] */

void FUN_105454b4c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  
  _objc_retain(param_5);
  lVar2 = param_7;
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)lVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
  lVar2 = param_5;
  FUN_1054543a4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010c23da80(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110daf4d8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c2ac460(puVar6,param_3,&PTR____CFConstantStringClassReference_110f24cd8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar7 = lVar2;
  func_0x00010c08fa60();
  puVar3 = puVar5;
  if (lVar7 != 0) {
    func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110f24978,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar4 = puVar3;
  if (param_7 != 0) {
    func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f24d18,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  lVar7 = param_2;
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(lVar7);
  if (param_5 != 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c23d780();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c09e220();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf4bb00(uVar9,param_3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    if ((int)uVar10 != 0) {
      lVar7 = param_2;
      func_0x00010be245c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b8d98;
      func_0x00010c23da40(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f24cd8,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar3 = puVar11;
      func_0x00010c2ac460(puVar11,param_3,&PTR____CFConstantStringClassReference_110f24978,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      lVar12 = param_5;
      func_0x00010c09e4e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110e0a338,lVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(lVar12);
      func_0x00010bfec2a0(lVar7,param_3,puVar5);
      _objc_release(puVar5);
      _objc_release(lVar7);
    }
  }
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010c23da60(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110daf4d8,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar11;
  func_0x00010c2ac460(puVar11,param_3,&PTR____CFConstantStringClassReference_110f24cd8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar5);
  _objc_release(puVar3);
  if (param_7 != 0) {
    puVar3 = puVar6;
    func_0x00010c2ac460(puVar6,param_3,&PTR____CFConstantStringClassReference_110f24d18,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar3;
  }
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(param_2);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1054550a4; end: 10545546f; -[SCAdOperationMetricsManagerImpl logSKOverlayEventWithType:adResponse:adSnap:latency:isBeingPreloaded:error:] */

void FUN_1054550a4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b9268;
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  uVar4 = param_5;
  func_0x00010bef4240(param_5);
  func_0x0001084b952c();
  func_0x00010c163f80(puVar1,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bef2c20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1,param_3,uVar4);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c15ed20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164480(puVar1,param_3,uVar4);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c23d7c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf3ca00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202d80(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c23d7c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c29e460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202e00(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  dVar8 = param_1;
  func_0x00010c1b9280(param_1,puVar1);
  uVar4 = param_4;
  FUN_1054578b0(param_4);
  func_0x00010c197d00(puVar1,param_3,uVar4);
  func_0x00010c1af820(puVar1,param_3,param_7);
  uVar4 = param_6;
  func_0x00010bf054e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar2 = uVar4;
  func_0x00010bf05300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168ae0(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126afec0;
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  func_0x00010c155420(puVar5);
  func_0x00010c197cc0(puVar1,param_3,(long)dVar8);
  if (param_8 != 0) {
    lVar3 = param_8;
    func_0x00010bf87dc0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197080(puVar1,param_3,lVar3);
    _objc_release(lVar3);
    lVar3 = param_8;
    func_0x00010bf3ec40(param_8);
    func_0x00010c196fe0(puVar1,param_3,lVar3);
    lVar3 = param_8;
    func_0x00010c09e4e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197020(puVar1,param_3,lVar3);
    _objc_release(lVar3);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  lVar3 = param_2;
  func_0x00010be24680(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b8cd8;
  if (((param_7 & 1) == 0) && (lVar3 != 0)) {
    uVar4 = param_5;
    func_0x00010bef4240(param_5);
    func_0x00010c25d840(puVar5,param_3,uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c2ac460(lVar3,param_3,&PTR____CFConstantStringClassReference_110ddd2d8,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(puVar5);
    lVar7 = param_8;
    FUN_1054543a4(param_8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c2ac460(lVar6,param_3,&PTR____CFConstantStringClassReference_110f24978,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar7);
    lVar6 = param_2;
    func_0x00010be245c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc000(param_1);
    _objc_release(lVar6);
    func_0x00010be245c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(param_2);
  }
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105455470; end: 105455527; -[SCAdOperationMetricsManagerImpl _grapheneMetricForOverlayEventType:] */

void FUN_105455470(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 6) {
    if (param_3 == 4) {
      func_0x00010c23dba0(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 5) {
      func_0x00010c23dd40(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 6) {
    func_0x00010c23dbc0(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 7) {
    func_0x00010c23dd20(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 8) {
    func_0x00010c23db80(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105455528; end: 1054556c3; -[SCAdOperationMetricsManagerImpl logStoreProductPageDismissed:loadedOnEntry:loadedOnExit:visibleLoadTime:] */

void FUN_105455528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c23dd60(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001054578d4(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110f24cd8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110f24ab8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f24ad8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  uVar4 = param_2;
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar4);
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054556c4; end: 10545570b; -[SCAdOperationMetricsManagerImpl _graphene] */

void FUN_1054556c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10545570c; end: 1054559b3; -[SCAdOperationMetricsManagerImpl logApplePromptViewWithOptInStatus:adPromptUXType:adProductType:timeViewedInSec:] */

void FUN_10545570c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar1 = param_4;
  if (3 < param_4) {
    uVar1 = 0xffffffffffffffff;
  }
  puVar2 = PTR_PTR_1126b8d98;
  func_0x00010bf074c0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110f24c98,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110f24d38,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar6 = param_2;
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(lVar6);
  if (2 < param_5) {
    param_5 = 0xffffffffffffffff;
  }
  puVar2 = PTR_PTR_1126b9270;
  _objc_opt_new(PTR_PTR_1126b9270);
  func_0x00010c1d5ca0();
  func_0x00010c1697c0(puVar2,param_3,param_5);
  func_0x0001084b952c(param_6);
  func_0x00010c163f80(puVar2,param_3,param_6);
  func_0x00010c215720(param_1,puVar2);
  if (param_4 == 1) {
    puVar3 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
    func_0x00010c22bc20(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010befe540();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1663a0(puVar2,param_3,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfe5f00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169d80(puVar2,param_3,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1054559b4; end: 105455a6f; -[SCAdOperationMetricsManagerImpl logAdInsertionRuleNull:] */

void FUN_1054559b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bef2fe0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8cd8;
  func_0x00010c25d840(PTR_PTR_1126b8cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd1fb8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105455a70; end: 105455f1b; -[SCAdOperationMetricsManagerImpl logAdInsertionEvaluation:adResponse:storiesViewed:storiesBeforeEnd:snapsViewed:snapsBeforeEnd:timeViewedSeconds:storiesViewedAcrossInventory:snapsViewedAcrossInventory:timeViewedAcrossInventorySeconds:crossInventoryRulesEvaluated:isFirstAd:shouldInsert:adIndexPos:] */

void FUN_105455a70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b9278;
  _objc_opt_new(PTR_PTR_1126b9278);
  func_0x0001084b952c(param_5);
  func_0x00010c163f80(puVar1,param_4,param_5);
  if (param_6 != 0) {
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cdba0();
    func_0x00010c1c7e40(puVar1,param_4,lVar3);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cdb00();
    func_0x00010c1c7da0(puVar1,param_4,lVar3);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdce0();
    func_0x00010c1c7f40(puVar1);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cdb40();
    func_0x00010c1c7e00(puVar1,param_4,lVar3);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cdaa0();
    func_0x00010c1c7d60(puVar1,param_4,lVar3);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdca0();
    func_0x00010c1c7f20(puVar1);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cdb20();
    func_0x00010c1c7de0(puVar1,param_4,lVar3);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cda60();
    func_0x00010c1c7d40(puVar1,param_4,lVar3);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdc40();
    func_0x00010c1c7ec0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cdb60();
    func_0x00010c1c7e20(puVar1,param_4,lVar3);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0cdac0();
    func_0x00010c1c7d80(puVar1,param_4,lVar3);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cdc80();
    func_0x00010c1c7ee0(puVar1);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf48240();
    func_0x00010c180c40(puVar1,param_4,lVar3);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf48200();
    func_0x00010c180c00(puVar1,param_4,lVar3);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf481e0();
    func_0x00010c180be0(puVar1,param_4,lVar3);
    _objc_release(lVar2);
    lVar2 = param_6;
    func_0x00010bef2f80(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf48220();
    func_0x00010c180c20(puVar1,param_4,lVar3);
    _objc_release(lVar2);
  }
  func_0x00010c20ca40(puVar1,param_4,param_7);
  func_0x00010c20c4e0(puVar1,param_4,param_8);
  func_0x00010c2063c0(puVar1,param_4,param_9);
  func_0x00010c206260(puVar1,param_4,param_10);
  func_0x00010c2157c0(param_1,puVar1);
  func_0x00010c20ca60(puVar1,param_4,param_11);
  func_0x00010c2063e0(puVar1,param_4,param_12);
  func_0x00010c2157e0(param_2,puVar1);
  func_0x00010c161600(puVar1,param_4,(undefined1)param_13);
  func_0x00010c1b0f60(puVar1,param_4,param_13._1_1_);
  func_0x00010c2008c0(puVar1,param_4,param_13._2_1_);
  func_0x00010c1af0e0(puVar1,param_4,param_6 != 0);
  lVar2 = param_6;
  func_0x00010bef60a0(param_6);
  func_0x0001084baa08();
  func_0x00010c164dc0(puVar1,param_4,lVar2);
  lVar2 = param_6;
  func_0x00010bef2c20(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1,param_4,lVar2);
  _objc_release(lVar2);
  lVar2 = param_6;
  func_0x00010c15ed20(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd160(puVar1,param_4,lVar2);
  _objc_release(lVar2);
  func_0x00010c163800(puVar1,param_4,param_15);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105455f1c; end: 1054563ff; -[SCAdOperationMetricsManagerImpl logAdBrandSafetyEvaluation:snapId:storyType:organicGarmSafety:legacyBrandFriendliness:brandSafetyEvaluationResult:isV2:isNext:] */

void FUN_105455f1c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,long param_8,
                  undefined4 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b9280;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  lVar2 = param_3;
  func_0x00010bef4240(param_3);
  func_0x0001084b952c();
  func_0x00010c163f80(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c099300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdc40(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c15ed20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd160(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164260(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf21060();
  if (2 < lVar2 - 1U) {
    lVar2 = 0;
  }
  func_0x00010c173b80(puVar1,param_2,lVar2);
  func_0x00010c204680(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c20ddc0(puVar1,param_2,param_5);
  uVar10 = param_6;
  if (3 < param_6 - 1) {
    uVar10 = 0;
  }
  func_0x00010c1d6380(puVar1,param_2,uVar10);
  uVar8 = 0;
  uVar10 = param_8 - 1;
  if (uVar10 < 4) {
    uVar8 = *(undefined8 *)(&UNK_10ddaf150 + uVar10 * 8);
  }
  func_0x00010c173b40(puVar1,param_2,uVar8);
  func_0x00010c173ae0(puVar1,param_2,param_7);
  func_0x00010c1b58e0(puVar1,param_2,(undefined1)param_9);
  func_0x00010c1b2dc0(puVar1,param_2,param_9._1_1_);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar8);
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010bf20fe0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b8cd8;
  lVar2 = param_3;
  func_0x00010bef4240(param_3);
  func_0x00010c25d840(puVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  lVar2 = param_3;
  func_0x00010bf21060();
  if (lVar2 - 1U < 3) {
    ppuVar9 = (undefined **)(&PTR_PTR_11088a5f8)[lVar2 - 1U];
  }
  else {
    ppuVar9 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110f24e98,ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (param_6 < 4) {
    ppuVar9 = (undefined **)(&PTR_PTR_11088a610)[param_6];
  }
  else {
    ppuVar9 = &PTR____CFConstantStringClassReference_110ddeaf8;
  }
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f24ed8,ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (uVar10 < 4) {
    ppuVar9 = (undefined **)(&PTR_PTR_11088a5d8)[uVar10];
  }
  else {
    ppuVar9 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110f24eb8,ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b8d98;
  func_0x00010bf21000(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b8cd8;
  lVar2 = param_3;
  func_0x00010bef4240(param_3);
  func_0x00010c25d840(puVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  if (param_6 < 4) {
    ppuVar9 = (undefined **)(&PTR_PTR_11088a610)[param_6];
  }
  else {
    ppuVar9 = &PTR____CFConstantStringClassReference_110ddeaf8;
  }
  puVar4 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110f24ed8,ppuVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110ea1fd8,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar3);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105456400; end: 1054567af; -[SCAdOperationMetricsManagerImpl logAdBrandSafetyInsertion:organicGarmBrandSafety:availableAdPods:insertedAdPod:] */

void FUN_105456400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bf21020(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8cd8;
  func_0x00010bef4240(param_3);
  func_0x00010c25d840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010bf21060();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar4 = param_1;
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(lVar4);
  if ((param_5 != 0) && (param_6 != 0)) {
    puVar2 = PTR_PTR_1126b9288;
    _objc_opt_new(PTR_PTR_1126b9288);
    func_0x00010bef4240(param_3);
    func_0x0001084b952c();
    func_0x00010c163f80(puVar2);
    func_0x00010c1d6360(puVar2);
    lVar4 = param_5;
    func_0x00010bf006e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(param_6);
    func_0x00010c1fae40(puVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_initWeak(auStack_68,param_1);
    lVar4 = param_5;
    func_0x00010bf006e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1054567b0;
    puStack_78 = &UNK_11088a3e0;
    _objc_copyWeak(auStack_70,auStack_68);
    lVar5 = lVar4;
    func_0x000100504554(lVar4,&puStack_90);
    _objc_release(lVar4);
    func_0x00010c16d5a0(puVar2);
    lVar4 = param_6;
    func_0x00010bef4c60(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bdd57c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar4);
    func_0x00010c1faf20(puVar2);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1054567b0; end: 10545684f;  */

void FUN_1054567b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bef4c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdd57c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105456850; end: 10545690b; -[SCAdOperationMetricsManagerImpl _brandSafetyLoggingInfoForAdResponse:] */

void FUN_105456850(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b91f0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_3;
  func_0x00010c15ed20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fd160(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf21060();
  _objc_release(param_3);
  if (2 < lVar2 - 1U) {
    lVar2 = 0;
  }
  func_0x00010c173b80(puVar1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10545690c; end: 105456b4f; -[SCAdOperationMetricsManagerImpl logAdBrandSafetySwitch:organicGarmBrandSafety:availableAdPods:selectedAdPod:] */

void FUN_10545690c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b9290;
  _objc_opt_new(PTR_PTR_1126b9290);
  func_0x0001084b952c(param_3);
  func_0x00010c163f80(puVar1);
  func_0x00010c1d6360(puVar1);
  lVar2 = param_5;
  func_0x00010bf006e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(param_6);
  func_0x00010c1fae40(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (param_5 != 0) {
    _objc_initWeak(auStack_58,param_1);
    lVar2 = param_5;
    func_0x00010bf006e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105456b50;
    puStack_68 = &UNK_11088a3e0;
    _objc_copyWeak(auStack_60,auStack_58);
    lVar3 = lVar2;
    func_0x000100504554(lVar2,&puStack_80);
    _objc_release(lVar2);
    func_0x00010c16d5a0(puVar1);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  if (param_6 != 0) {
    lVar2 = param_6;
    func_0x00010bef4c60(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bdd57c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c1faf20(puVar1);
    _objc_release(lVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105456b50; end: 105456bef;  */

void FUN_105456b50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bef4c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdd57c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105456bf0; end: 105456d23; -[SCAdOperationMetricsManagerImpl logAdInsertionConfigCacheRead:cacheHit:] */

void FUN_105456bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0666c0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8cd8;
  func_0x00010c25d840(PTR_PTR_1126b8cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd1fb8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110de3a38,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105456d24; end: 105456e2b; -[SCAdOperationMetricsManagerImpl logAdInsertionConfigCacheUpdate:status:] */

void FUN_105456d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_4);
  func_0x00010c0666e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8cd8;
  func_0x00010c25d840(PTR_PTR_1126b8cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd1fb8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf4d8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105456e2c; end: 105456f3f; -[SCAdOperationMetricsManagerImpl logAdInternalError:source:] */

void FUN_105456e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bef3140(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bec5760(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbf1b8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bec5780(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dae8d8,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105456f40; end: 1054570fb; -[SCAdOperationMetricsManagerImpl logMultiAdPodSize:adProductType:isFill:] */

void FUN_105456f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c0d1b20(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e62718,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110f24a98,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1054570fc; end: 1054571b7; -[SCAdOperationMetricsManagerImpl logPromotedStoryAnimationStarted:] */

void FUN_1054570fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c118300(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8ca0;
  func_0x00010c25d240(PTR_PTR_1126b8ca0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1054571b8; end: 1054572d3; -[SCAdOperationMetricsManagerImpl logPromotedStoryAnimationCompleted:result:] */

void FUN_1054571b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c118320(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8ca0;
  func_0x00010c25d240(PTR_PTR_1126b8ca0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dce878,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010be245c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054572d4; end: 10545741b; -[SCAdOperationMetricsManagerImpl logPromotedStoryTapped:tileState:timeViewed:] */

void FUN_1054572d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c118340(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8ca0;
  func_0x00010c25d240(PTR_PTR_1126b8ca0,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110ddfd98,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = puVar3;
  if (param_5 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc3a38;
  }
  else {
    if (param_5 != 1) goto LAB_1054573b4;
    ppuVar5 = &PTR____CFConstantStringClassReference_110ddea78;
  }
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110f27378,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
LAB_1054573b4:
  uVar4 = param_2;
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  func_0x00010be245c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10545741c; end: 105457473; -[SCAdOperationMetricsManagerImpl logPromotedStoryTileCtaHideCta] */

void FUN_10545741c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010be245c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c26eac0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105457474; end: 1054574cb; -[SCAdOperationMetricsManagerImpl logPromotedStoryTileCtaErrorFallbackShowCta] */

void FUN_105457474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010be245c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c26eaa0(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054574cc; end: 105457523; -[SCAdOperationMetricsManagerImpl logPromotedStoryTileCtaUseOverrideUrl] */

void FUN_1054574cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010be245c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c26eb40(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105457524; end: 10545758f; -[SCAdOperationMetricsManagerImpl .cxx_destruct] */

void FUN_105457524(long param_1)

{
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



/* Entry: 105457590; end: 1054575f3;  */

undefined8 FUN_105457590(long param_1)

{
  if (param_1 - 2U < 0x15) {
    return *(undefined8 *)(&UNK_10ddaf170 + (param_1 - 2U) * 8);
  }
  return 0;
}



/* Entry: 1054575f4; end: 10545762f;  */

void FUN_1054575f4(int param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ddecd8;
  if (param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ddecf8;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105457630; end: 10545765b;  */

undefined ** FUN_105457630(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dded38;
  if (param_1 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dded18;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dded58;
  if (param_1 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10545765c; end: 10545779b;  */

void FUN_10545765c(long param_1)

{
  if (param_1 < 3) {
    if (param_1 != 0) {
      if (param_1 == 1) {
        func_0x00010c278540(PTR_PTR_1126b8d98);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_1054576f4;
    }
  }
  else if (param_1 != 3) {
    if (param_1 == 5) {
      func_0x00010c0fcc00(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_1 == 4) {
      func_0x00010bfef2a0(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
    }
    goto LAB_1054576f4;
  }
  func_0x00010c15ed80(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
LAB_1054576f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10545779c; end: 1054578af;  */

void FUN_10545779c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  puVar6 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    func_0x00010c127e80(puVar1,param_2,&PTR____CFConstantStringClassReference_110dded78,1,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c08fa60(param_1);
    puVar3 = puVar1;
    func_0x00010c25cfa0(puVar1,param_2,param_1,0,0,lVar2,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar4 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8,param_2,
                        &PTR____CFConstantStringClassReference_110dded98,1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c08fa60(puVar3);
    puVar6 = puVar4;
    func_0x00010c25cfa0(puVar4,param_2,puVar3,0,0,puVar5,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}


