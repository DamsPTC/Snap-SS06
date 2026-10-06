/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a38390; end: 104a3846f; -[OIDEndSessionRequest endSessionRequestURL] */

void FUN_104a38390(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae320;
  _objc_alloc_init(PTR_PTR_1126ae320);
  func_0x00010befa5e0();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da8a18);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da89f8,lVar2);
    _objc_release(lVar2);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db9618);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf95420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bdc2d20(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a38470; end: 104a38477; -[OIDEndSessionRequest configuration] */

undefined8 FUN_104a38470(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a38478; end: 104a3847f; -[OIDEndSessionRequest postLogoutRedirectURL] */

undefined8 FUN_104a38478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a38480; end: 104a38487; -[OIDEndSessionRequest idTokenHint] */

undefined8 FUN_104a38480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a38488; end: 104a3848f; -[OIDEndSessionRequest state] */

undefined8 FUN_104a38488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a38490; end: 104a38497; -[OIDEndSessionRequest additionalParameters] */

undefined8 FUN_104a38490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a38498; end: 104a384eb; -[OIDEndSessionRequest .cxx_destruct] */

void FUN_104a38498(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a384ec; end: 104a38563; -[OIDAuthorizationSession initWithRequest:] */

undefined1 * FUN_104a384ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3568;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a38564; end: 104a38623; -[OIDAuthorizationSession presentAuthorizationWithExternalUserAgent:callback:] */

void FUN_104a38564(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_storeStrong(param_1 + 0x10,param_3);
  _objc_retain();
  uVar2 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _objc_release(uVar3);
  uVar4 = *(ulong *)(param_1 + 0x10);
  func_0x00010c10c060();
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR_PTR_1126ae328;
    func_0x00010bf991e0(PTR_PTR_1126ae328);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf77020(param_1);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a38624; end: 104a3862b; -[OIDAuthorizationSession cancel] */

void FUN_104a38624(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2f4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancelWithCompletion__1125a96d8,0);
  return;
}



/* Entry: 104a3862c; end: 104a3871b; -[OIDAuthorizationSession cancelWithCompletion:] */

void FUN_104a3862c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104a386b4;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain();
  func_0x00010bf838c0(uVar1,param_2,1,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104a3871c; end: 104a38b57; +[OIDAuthorizationSession URL:matchesRedirectionURL:] */

long FUN_104a3871c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
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
  long lVar16;
  long unaff_x26;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_78;
  
  _objc_retain();
  func_0x00010c24d900();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c24d900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c1504a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar2;
  func_0x00010bf32ee0();
  if (lVar16 != 0) {
    lVar16 = 0;
    goto LAB_104a38b14;
  }
  lVar4 = param_3;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == lVar5) {
LAB_104a38838:
    lVar6 = param_3;
    func_0x00010c0f5180();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c0f5180();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == lVar7) {
LAB_104a388b0:
      lVar8 = param_3;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      if (lVar8 == lVar9) {
LAB_104a3892c:
        lVar10 = param_3;
        func_0x00010c104060();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar1;
        func_0x00010c104060();
        _objc_retainAutoreleasedReturnValue();
        if (lVar10 == lVar11) {
LAB_104a389a4:
          lVar12 = param_3;
          func_0x00010c0f5800();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar1;
          func_0x00010c0f5800();
          _objc_retainAutoreleasedReturnValue();
          if (lVar12 == lVar13) {
            _objc_release(lVar13);
            _objc_release(lVar12);
            lVar16 = 1;
          }
          else {
            lVar14 = param_3;
            func_0x00010c0f5800(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar15 = lVar1;
            func_0x00010c0f5800(lVar1);
            _objc_retainAutoreleasedReturnValue();
            lVar16 = lVar14;
            func_0x00010c071ae0(lVar14);
            _objc_release(lVar15);
            _objc_release(lVar14);
            _objc_release(lVar13);
            _objc_release(lVar12);
          }
          if (lVar10 != lVar11) goto LAB_104a38a70;
        }
        else {
          uStack_d8 = param_3;
          func_0x00010c104060();
          _objc_retainAutoreleasedReturnValue();
          uStack_e0 = lVar1;
          func_0x00010c104060();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = uStack_d8;
          func_0x00010c071ae0();
          if ((int)lVar16 != 0) goto LAB_104a389a4;
          lVar16 = 0;
LAB_104a38a70:
          _objc_release(uStack_e0);
          _objc_release(uStack_d8);
        }
        _objc_release(lVar11);
        _objc_release(lVar10);
        if (lVar8 != lVar9) goto LAB_104a38a9c;
      }
      else {
        uStack_c0 = param_3;
        func_0x00010bfe4420();
        _objc_retainAutoreleasedReturnValue();
        uStack_c8 = lVar1;
        func_0x00010bfe4420();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = uStack_c0;
        func_0x00010c071ae0(uStack_c0,uStack_c8,uStack_c8);
        if ((int)lVar16 != 0) goto LAB_104a3892c;
        lVar16 = 0;
LAB_104a38a9c:
        _objc_release(uStack_c8);
        _objc_release(uStack_c0);
      }
      _objc_release(lVar9);
      _objc_release(lVar8);
      if (lVar6 != lVar7) goto LAB_104a38ac8;
    }
    else {
      uStack_90 = param_3;
      func_0x00010c0f5180();
      _objc_retainAutoreleasedReturnValue();
      uStack_98 = lVar1;
      func_0x00010c0f5180();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = uStack_90;
      func_0x00010c071ae0();
      if ((int)lVar16 != 0) goto LAB_104a388b0;
      lVar16 = 0;
LAB_104a38ac8:
      _objc_release(uStack_98);
      _objc_release(uStack_90);
    }
    _objc_release(lVar7);
    _objc_release(lVar6);
    if (lVar4 != lVar5) goto LAB_104a38af4;
  }
  else {
    uStack_78 = param_3;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = lVar1;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = uStack_78;
    func_0x00010c071ae0();
    if ((int)lVar16 != 0) goto LAB_104a38838;
    lVar16 = 0;
LAB_104a38af4:
    _objc_release(unaff_x26);
    _objc_release(uStack_78);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
LAB_104a38b14:
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar16;
}



/* Entry: 104a38b58; end: 104a38bcf; -[OIDAuthorizationSession shouldHandleURL:] */

long FUN_104a38b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c124b40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2bc0(lVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  return lVar1;
}



/* Entry: 104a38bd0; end: 104a38f73; -[OIDAuthorizationSession resumeExternalUserAgentFlowWithURL:] */

long FUN_104a38bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c230ae0(param_1,param_2,param_3);
  if ((int)lVar1 == 0) goto LAB_104a38f48;
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_110da8e58,
                        &PTR____CFConstantStringClassReference_110dc4658);
  }
  puVar2 = PTR_PTR_1126ae320;
  _objc_alloc();
  func_0x00010c057840();
  puVar9 = puVar2;
  func_0x00010bf71fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126ae328;
  if (puVar7 == (undefined *)0x0) {
LAB_104a38cf0:
    puVar7 = PTR_PTR_1126ae390;
    _objc_alloc();
    uVar8 = *(undefined8 *)(param_1 + 8);
    puVar9 = puVar2;
    func_0x00010bf71fa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ec80(puVar7,param_2,uVar8,puVar9);
    _objc_release(puVar9);
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == puVar9) {
      _objc_release(puVar9);
      puVar9 = (undefined *)0x0;
    }
    else {
      uVar4 = *(ulong *)(param_1 + 8);
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010c252440(puVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c071ae0(uVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(puVar9);
      _objc_release(puVar3);
      if ((uVar6 & 1) != 0) {
        puVar9 = (undefined *)0x0;
        goto LAB_104a38ec0;
      }
      puVar9 = puVar2;
      func_0x00010bf71fa0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar9;
      func_0x00010c0d3c80();
      _objc_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar8 = *(undefined8 *)(param_1 + 8);
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar9,param_2,&PTR____CFConstantStringClassReference_110da8a98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar9,
                          *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
      _objc_release(puVar9);
      _objc_release(puVar5);
      _objc_release(uVar8);
      _objc_release(puVar7);
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110da8dd8,0xffffffffffff1001,puVar3
                         );
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)0x0;
    }
    _objc_release(puVar3);
  }
  else {
    puVar7 = puVar2;
    func_0x00010bf71fa0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1d60(puVar9,param_2,&PTR____CFConstantStringClassReference_110da8dd8,puVar7,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar9 == (undefined *)0x0) goto LAB_104a38cf0;
    puVar7 = (undefined *)0x0;
  }
LAB_104a38ec0:
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104a38f74;
  puStack_80 = &UNK_110848ba8;
  lStack_78 = param_1;
  puStack_70 = puVar7;
  puStack_68 = puVar9;
  _objc_retain(puVar9);
  _objc_retain(puVar7);
  func_0x00010bf838c0(uVar8,param_2,1,&puStack_98);
  _objc_release(puStack_68);
  _objc_release(puStack_70);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar2);
LAB_104a38f48:
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 104a38f74; end: 104a38f83;  */

void FUN_104a38f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf77030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didFinishWithResponse_error__1125bb5b0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104a38f84; end: 104a38f8f; -[OIDAuthorizationSession failExternalUserAgentFlowWithError:] */

void FUN_104a38f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf77030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_didFinishWithResponse_error__1125bb5b0,0,param_3);
  return;
}



/* Entry: 104a38f90; end: 104a3901f; -[OIDAuthorizationSession didFinishWithResponse:error:] */

void FUN_104a38f90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a39020; end: 104a3905b; -[OIDAuthorizationSession .cxx_destruct] */

void FUN_104a39020(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a3905c; end: 104a390d3; -[OIDEndSessionImplementation initWithRequest:] */

undefined1 * FUN_104a3905c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3570;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a390d4; end: 104a39193; -[OIDEndSessionImplementation presentAuthorizationWithExternalUserAgent:callback:] */

void FUN_104a390d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_storeStrong(param_1 + 0x10,param_3);
  _objc_retain();
  uVar2 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _objc_release(uVar3);
  uVar4 = *(ulong *)(param_1 + 0x10);
  func_0x00010c10c060();
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR_PTR_1126ae328;
    func_0x00010bf991e0(PTR_PTR_1126ae328);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf77020(param_1);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a39194; end: 104a3919b; -[OIDEndSessionImplementation cancel] */

void FUN_104a39194(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2f4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cancelWithCompletion__1125a96d8,0);
  return;
}



/* Entry: 104a3919c; end: 104a39287; -[OIDEndSessionImplementation cancelWithCompletion:] */

void FUN_104a3919c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x104a39224;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain();
  func_0x00010bf838c0(uVar1,param_2,1,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104a39288; end: 104a39307; -[OIDEndSessionImplementation shouldHandleURL:] */

undefined * FUN_104a39288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae3a8;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1048e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2bc0(puVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  return puVar1;
}



/* Entry: 104a39308; end: 104a39613; -[OIDEndSessionImplementation resumeExternalUserAgentFlowWithURL:] */

long FUN_104a39308(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c230ae0(param_1,param_2,param_3);
  if ((int)lVar1 == 0) goto LAB_104a395e8;
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_110da8e58,
                        &PTR____CFConstantStringClassReference_110dc4658);
  }
  puVar2 = PTR_PTR_1126ae320;
  _objc_alloc(PTR_PTR_1126ae320);
  func_0x00010c057840();
  puVar7 = PTR_PTR_1126ae3b0;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_1 + 8);
  puVar9 = puVar2;
  func_0x00010bf71fa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ec80(puVar7,param_2,uVar8,puVar9);
  _objc_release(puVar9);
  puVar3 = *(undefined **)(param_1 + 8);
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == puVar9) {
    _objc_release(puVar9);
    puVar9 = (undefined *)0x0;
LAB_104a39558:
    _objc_release(puVar3);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar7;
    func_0x00010c252440(puVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c071ae0(uVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar9);
    _objc_release(puVar3);
    if ((uVar6 & 1) == 0) {
      puVar9 = puVar2;
      func_0x00010bf71fa0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar9;
      func_0x00010c0d3c80();
      _objc_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar8 = *(undefined8 *)(param_1 + 8);
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar9,param_2,&PTR____CFConstantStringClassReference_110da8a98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3,param_2,puVar9,
                          *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568);
      _objc_release(puVar9);
      _objc_release(puVar5);
      _objc_release(uVar8);
      _objc_release(puVar7);
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110da8dd8,0xffffffffffff1001,puVar3
                         );
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined *)0x0;
      goto LAB_104a39558;
    }
    puVar9 = (undefined *)0x0;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104a39614;
  puStack_80 = &UNK_110848ba8;
  lStack_78 = param_1;
  puStack_70 = puVar7;
  puStack_68 = puVar9;
  _objc_retain(puVar9);
  _objc_retain(puVar7);
  func_0x00010bf838c0(uVar8,param_2,1,&puStack_98);
  _objc_release(puStack_68);
  _objc_release(puStack_70);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar2);
LAB_104a395e8:
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 104a39614; end: 104a39623;  */

void FUN_104a39614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf77030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didFinishWithResponse_error__1125bb5b0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104a39624; end: 104a3962f; -[OIDEndSessionImplementation failExternalUserAgentFlowWithError:] */

void FUN_104a39624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf77030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_didFinishWithResponse_error__1125bb5b0,0,param_3);
  return;
}



/* Entry: 104a39630; end: 104a396bf; -[OIDEndSessionImplementation didFinishWithResponse:error:] */

void FUN_104a39630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x18);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar2);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a396c0; end: 104a396fb; -[OIDEndSessionImplementation .cxx_destruct] */

void FUN_104a396c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a396fc; end: 104a3976b; +[OIDAuthorizationService discoverServiceConfigurationForIssuer:completion:] */

void FUN_104a396fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bdc2c60(param_3,param_2,&PTR____CFConstantStringClassReference_110da8a58);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf828c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a3976c; end: 104a3985f; +[OIDAuthorizationService discoverServiceConfigurationForDiscoveryURL:completion:] */

void FUN_104a3976c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain();
  puVar1 = PTR_PTR_1126ae3b8;
  func_0x00010c15fac0(PTR_PTR_1126ae3b8);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104a39860;
  puStack_48 = &UNK_11090e648;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar2 = puVar1;
  func_0x00010bf64820(puVar1,param_2,param_3,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(puVar2);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 104a39860; end: 104a39c2b;  */

void FUN_104a39860(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((param_2 == 0) || (param_4 != 0)) {
    lVar2 = param_4;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar6 = PTR_PTR_1126ae328;
    func_0x00010bf991e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104a39c2c;
    puStack_78 = &UNK_11084aaa8;
    puVar4 = *(undefined **)(param_1 + 0x28);
    _objc_retain();
    puStack_68 = puVar4;
    _objc_retain();
    puStack_70 = puVar6;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_90);
    _objc_release(puStack_70);
    puVar4 = puStack_68;
  }
  else {
    lVar2 = param_3;
    func_0x00010c252ee0();
    if (lVar2 == 200) {
      puVar3 = PTR_PTR_1126ae378;
      _objc_alloc();
      lStack_c8 = 0;
      func_0x00010c0206c0();
      lVar2 = lStack_c8;
      _objc_retain();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((lVar2 == 0) && (puVar3 != (undefined *)0x0)) {
        puVar4 = PTR_PTR_1126ae348;
        _objc_alloc();
        func_0x00010c00d0e0();
        puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_120 = 0xc2000000;
        uStack_118 = 0x104a39c68;
        puStack_110 = &UNK_11084aaa8;
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain();
        puStack_108 = puVar4;
        uStack_100 = uVar1;
        _objc_retain(puVar4);
        puVar6 = (undefined *)0x0;
        ppuVar7 = &puStack_128;
      }
      else {
        lVar5 = lVar2;
        func_0x00010c09e4e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        puVar6 = PTR_PTR_1126ae328;
        func_0x00010bf991e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f0 = 0xc2000000;
        uStack_e8 = 0x104a39c54;
        puStack_e0 = &UNK_11084aaa8;
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain();
        uStack_d0 = uVar1;
        _objc_retain();
        ppuVar7 = &puStack_f8;
        puStack_d8 = puVar6;
      }
    }
    else {
      puVar3 = PTR_PTR_1126ae328;
      func_0x00010bdc16a0(PTR_PTR_1126ae328);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c252ee0();
      func_0x00010c25d9e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126ae328;
      func_0x00010bf991e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x104a39c40;
      puStack_a8 = &UNK_11084aaa8;
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain();
      uStack_98 = uVar1;
      _objc_retain();
      ppuVar7 = &puStack_c0;
      puStack_a0 = puVar6;
    }
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,ppuVar7);
    _objc_release(ppuVar7[4]);
    _objc_release(ppuVar7[5]);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104a39c2c; end: 104a39c7b;  */

void FUN_104a39c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a39c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a39c7c; end: 104a39d0f; +[OIDAuthorizationService presentAuthorizationRequest:externalUserAgent:callback:] */

void FUN_104a39c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae3a8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03eae0();
  _objc_release(param_3);
  func_0x00010c10b380(puVar1,param_2,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a39d10; end: 104a39da3; +[OIDAuthorizationService presentEndSessionRequest:externalUserAgent:callback:] */

void FUN_104a39d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae3c0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03eae0();
  _objc_release(param_3);
  func_0x00010c10b380(puVar1,param_2,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a39da4; end: 104a39e07; +[OIDAuthorizationService performTokenRequest:callback:] */

void FUN_104a39da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010c0f90e0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a39e08; end: 104a39f63; +[OIDAuthorizationService performTokenRequest:originalAuthorizationResponse:callback:] */

void FUN_104a39e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar1 = param_3;
  func_0x00010bdc3120();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae3b8;
  func_0x00010c15fac0(PTR_PTR_1126ae3b8);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104a39f64;
  puStack_68 = &UNK_1107bf448;
  uStack_60 = uVar1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(uVar1);
  puVar3 = puVar2;
  func_0x00010bf647e0(puVar2,param_2,uVar1,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(puVar3);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 104a39f64; end: 104a3ab73;  */

void FUN_104a39f64(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  double dVar13;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126ae328;
    func_0x00010bf991e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104a3ab74;
    puStack_90 = &UNK_11084aaa8;
    puVar2 = *(undefined **)(param_2 + 0x38);
    _objc_retain();
    puStack_88 = puVar5;
    puStack_80 = puVar2;
    _objc_retain(puVar5);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_a8);
    _objc_release(puStack_88);
    puVar2 = puStack_80;
    goto LAB_104a3a620;
  }
  lVar3 = param_4;
  func_0x00010c252ee0();
  if (lVar3 == 200) {
    puStack_118 = (undefined *)0x0;
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puStack_118;
    _objc_retain();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126ae398;
      _objc_alloc();
      func_0x00010c03ec80();
      if (puVar2 != (undefined *)0x0) {
        puVar12 = puVar2;
        func_0x00010bfe5e00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar12 == (undefined *)0x0) {
LAB_104a3aa80:
          puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_2c0 = 0xc2000000;
          uStack_2b8 = 0x104a3ac50;
          puStack_2b0 = &UNK_11084aaa8;
          puVar12 = *(undefined **)(param_2 + 0x38);
          _objc_retain();
          puStack_2a0 = puVar12;
          _objc_retain();
          puStack_2a8 = puVar2;
          func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_2c8);
          _objc_release(puStack_2a8);
          puVar12 = puStack_2a0;
        }
        else {
          puVar12 = PTR_PTR_1126ae3c8;
          _objc_alloc();
          puVar6 = puVar2;
          func_0x00010bfe5e00(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01ae00();
          _objc_release(puVar6);
          if (puVar12 == (undefined *)0x0) {
            puVar12 = PTR_PTR_1126ae328;
            func_0x00010bf991e0();
            _objc_retainAutoreleasedReturnValue();
            puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1a0 = 0xc2000000;
            uStack_198 = 0x104a3abd8;
            puStack_190 = &UNK_11084aaa8;
            uVar1 = *(undefined8 *)(param_2 + 0x38);
            _objc_retain();
            puStack_188 = puVar12;
            uStack_180 = uVar1;
            _objc_retain(puVar12);
            func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_1a8);
            _objc_release(puStack_188);
            uVar1 = uStack_180;
            goto LAB_104a3a614;
          }
          puVar6 = puVar2;
          func_0x00010c134680();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c083fe0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar6);
          if (puVar8 == (undefined *)0x0) {
LAB_104a3a3c8:
            puVar7 = puVar2;
            func_0x00010c134680();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar7;
            func_0x00010bf3cf20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            puVar7 = puVar12;
            func_0x00010bf0eca0();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar7;
            func_0x00010bf4b900();
            if ((int)puVar11 == 0) {
              puVar11 = puVar12;
              func_0x00010bf39ba0();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar11;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar9;
              func_0x00010c0720c0();
              _objc_release(puVar9);
              _objc_release(puVar11);
              _objc_release(puVar7);
              if (((ulong)puVar10 & 1) != 0) goto LAB_104a3a6cc;
              puVar7 = PTR_PTR_1126ae328;
              func_0x00010bf991e0();
              _objc_retainAutoreleasedReturnValue();
              puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_200 = 0xc2000000;
              uStack_1f8 = 0x104a3ac00;
              puStack_1f0 = &UNK_11084aaa8;
              puVar11 = *(undefined **)(param_2 + 0x38);
              _objc_retain();
              puStack_1e8 = puVar7;
              puStack_1e0 = puVar11;
              _objc_retain(puVar7);
              func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_208);
              _objc_release(puStack_1e8);
              puVar11 = puStack_1e0;
            }
            else {
              _objc_release(puVar7);
LAB_104a3a6cc:
              puVar7 = puVar12;
              func_0x00010bf9cb20(puVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f3a0();
              dVar13 = param_1;
              _objc_release(puVar7);
              if (0.0 <= param_1) {
                puVar7 = puVar12;
                func_0x00010c083fa0(puVar12);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f3a0();
                _objc_release(puVar7);
                if (ABS(dVar13) <= 600.0) {
                  puVar7 = puVar2;
                  func_0x00010c134680();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar7;
                  func_0x00010bfcdb40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puVar11;
                  func_0x00010c071ae0();
                  _objc_release(puVar11);
                  _objc_release(puVar7);
                  if ((int)puVar9 != 0) {
                    puVar11 = *(undefined **)(param_2 + 0x30);
                    func_0x00010c134680();
                    _objc_retainAutoreleasedReturnValue();
                    puVar7 = puVar11;
                    func_0x00010c0db0e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar11);
                    if (puVar7 != (undefined *)0x0) {
                      puVar11 = puVar12;
                      func_0x00010c0db0e0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar9 = puVar11;
                      func_0x00010c071ae0();
                      _objc_release(puVar11);
                      if (((ulong)puVar9 & 1) == 0) {
                        puVar11 = PTR_PTR_1126ae328;
                        func_0x00010bf991e0();
                        _objc_retainAutoreleasedReturnValue();
                        puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
                        uStack_290 = 0xc2000000;
                        uStack_288 = 0x104a3ac3c;
                        puStack_280 = &UNK_11084aaa8;
                        uVar1 = *(undefined8 *)(param_2 + 0x38);
                        _objc_retain();
                        puStack_278 = puVar11;
                        uStack_270 = uVar1;
                        _objc_retain(puVar11);
                        func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_298);
                        _objc_release(puStack_278);
                        uVar1 = uStack_270;
                        goto LAB_104a3a900;
                      }
                    }
                    _objc_release(puVar7);
                  }
                  _objc_release(puVar6);
                  _objc_release(puVar8);
                  _objc_release(puVar12);
                  goto LAB_104a3aa80;
                }
                puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
                _objc_retainAutoreleasedReturnValue();
                puVar11 = PTR_PTR_1126ae328;
                func_0x00010bf991e0();
                _objc_retainAutoreleasedReturnValue();
                puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_260 = 0xc2000000;
                uStack_258 = 0x104a3ac28;
                puStack_250 = &UNK_11084aaa8;
                uVar1 = *(undefined8 *)(param_2 + 0x38);
                _objc_retain();
                puStack_248 = puVar11;
                uStack_240 = uVar1;
                _objc_retain(puVar11);
                func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_268);
                _objc_release(puStack_248);
                uVar1 = uStack_240;
LAB_104a3a900:
                _objc_release(uVar1);
              }
              else {
                puVar7 = PTR_PTR_1126ae328;
                func_0x00010bf991e0();
                _objc_retainAutoreleasedReturnValue();
                puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_230 = 0xc2000000;
                uStack_228 = 0x104a3ac14;
                puStack_220 = &UNK_11084aaa8;
                puVar11 = *(undefined **)(param_2 + 0x38);
                _objc_retain();
                puStack_218 = puVar7;
                puStack_210 = puVar11;
                _objc_retain(puVar7);
                func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_238);
                _objc_release(puStack_218);
                puVar11 = puStack_210;
              }
            }
            _objc_release(puVar11);
            _objc_release(puVar7);
          }
          else {
            puVar6 = puVar12;
            func_0x00010c083fe0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c071ae0();
            _objc_release(puVar6);
            if (((ulong)puVar7 & 1) != 0) goto LAB_104a3a3c8;
            puVar6 = PTR_PTR_1126ae328;
            func_0x00010bf991e0();
            _objc_retainAutoreleasedReturnValue();
            puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1d0 = 0xc2000000;
            uStack_1c8 = 0x104a3abec;
            puStack_1c0 = &UNK_11084aaa8;
            uVar1 = *(undefined8 *)(param_2 + 0x38);
            _objc_retain();
            puStack_1b8 = puVar6;
            uStack_1b0 = uVar1;
            _objc_retain(puVar6);
            func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_1d8);
            _objc_release(puStack_1b8);
            _objc_release(uStack_1b0);
          }
          _objc_release(puVar6);
          _objc_release(puVar8);
        }
        goto LAB_104a3a61c;
      }
      puVar12 = PTR_PTR_1126ae328;
      func_0x00010bf991e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      uStack_168 = 0x104a3abc4;
      puStack_160 = &UNK_11084aaa8;
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      _objc_retain();
      puStack_158 = puVar12;
      uStack_150 = uVar1;
      _objc_retain(puVar12);
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_178);
      _objc_release(puStack_158);
      uVar1 = uStack_150;
    }
    else {
      puVar12 = puVar4;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = PTR_PTR_1126ae328;
      func_0x00010bf991e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_140 = 0xc2000000;
      uStack_138 = 0x104a3abb0;
      puStack_130 = &UNK_11084aaa8;
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      _objc_retain();
      puStack_128 = puVar12;
      uStack_120 = uVar1;
      _objc_retain(puVar12);
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_148);
      _objc_release(puStack_128);
      uVar1 = uStack_120;
    }
LAB_104a3a614:
    _objc_release(uVar1);
  }
  else {
    puVar4 = PTR_PTR_1126ae328;
    func_0x00010bdc16a0(PTR_PTR_1126ae328);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 - 400U < 100) {
      puStack_b0 = (undefined *)0x0;
      puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puStack_b0;
      _objc_retain(puStack_b0);
      puVar12 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar12 != (undefined *)0x0) {
        puVar12 = PTR_PTR_1126ae328;
        func_0x00010bdc1d60();
        _objc_retainAutoreleasedReturnValue();
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0xc2000000;
        uStack_d0 = 0x104a3ab88;
        puStack_c8 = &UNK_11084aaa8;
        uVar1 = *(undefined8 *)(param_2 + 0x38);
        _objc_retain();
        puStack_c0 = puVar12;
        uStack_b8 = uVar1;
        _objc_retain(puVar12);
        func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_e0);
        _objc_release(puStack_c0);
        uVar1 = uStack_b8;
        goto LAB_104a3a614;
      }
      _objc_release(puVar2);
      _objc_release(puVar5);
    }
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae328;
    func_0x00010bf991e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x104a3ab9c;
    puStack_f8 = &UNK_11084aaa8;
    puVar12 = *(undefined **)(param_2 + 0x38);
    _objc_retain();
    puStack_f0 = puVar2;
    puStack_e8 = puVar12;
    _objc_retain(puVar2);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_110);
    _objc_release(puStack_f0);
    puVar12 = puStack_e8;
  }
LAB_104a3a61c:
  _objc_release(puVar12);
LAB_104a3a620:
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a3ab74; end: 104a3ac63;  */

void FUN_104a3ab74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a3ab84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a3ac64; end: 104a3ae33; +[OIDAuthorizationService performRegistrationRequest:completion:] */

void FUN_104a3ac64(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain();
  _objc_retain();
  puVar1 = param_3;
  func_0x00010bdc3120();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126ae328;
    func_0x00010bf991e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104a3ae34;
    puStack_68 = &UNK_11084aaa8;
    ppuVar5 = &puStack_58;
    ppuVar6 = &puStack_60;
    puStack_60 = puVar4;
    puStack_58 = param_4;
    _objc_retain(param_4);
    _objc_retain(puVar4);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_80);
  }
  else {
    puVar4 = PTR_PTR_1126ae3b8;
    func_0x00010c15fac0(PTR_PTR_1126ae3b8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined **)&lStack_98;
    puVar2 = puVar1;
    _objc_retain();
    ppuVar6 = &puStack_88;
    puVar3 = param_3;
    lStack_98 = (long)puVar2;
    puStack_88 = param_4;
    _objc_retain();
    lStack_90 = (long)puVar3;
    _objc_retain(param_4);
    puVar2 = puVar4;
    func_0x00010bf647e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13d1c0();
    _objc_release(puVar2);
    _objc_release(lStack_90);
  }
  _objc_release(*ppuVar6);
  _objc_release(*ppuVar5);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104a3ae34; end: 104a3ae47;  */

void FUN_104a3ae34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a3ae44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a3ae48; end: 104a3b41f;  */

void FUN_104a3ae48(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_2);
  _objc_retain();
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126ae328;
    func_0x00010bf991e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_104a3b420;
    puStack_80 = &UNK_11084aaa8;
    puVar3 = *(undefined **)(param_1 + 0x30);
    _objc_retain();
    puStack_78 = puVar5;
    puStack_70 = puVar3;
    _objc_retain(puVar5);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_98);
    _objc_release(puStack_78);
    puVar7 = puStack_70;
    goto LAB_104a3b3d0;
  }
  puVar4 = param_3;
  _objc_retain();
  puVar5 = puVar4;
  func_0x00010c252ee0();
  if ((puVar5 == (undefined *)0xc9) ||
     (puVar5 = puVar4, func_0x00010c252ee0(), puVar5 == (undefined *)0xc8)) {
    puStack_108 = (undefined *)0x0;
    puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puStack_108;
    _objc_retain();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar5 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126ae3d0;
      _objc_alloc();
      func_0x00010c03ec80();
      if (puVar3 != (undefined *)0x0) {
        puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_190 = 0xc2000000;
        uStack_188 = 0x104a3b484;
        puStack_180 = &UNK_11084aaa8;
        puVar6 = *(undefined **)(param_1 + 0x30);
        _objc_retain();
        puStack_170 = puVar6;
        _objc_retain();
        puStack_178 = puVar3;
        func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_198);
        _objc_release(puStack_178);
        puVar6 = puStack_170;
        goto LAB_104a3b3c0;
      }
      puVar6 = PTR_PTR_1126ae328;
      func_0x00010bf991e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      uStack_158 = 0x104a3b470;
      puStack_150 = &UNK_11084aaa8;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain();
      puStack_148 = puVar6;
      uStack_140 = uVar1;
      _objc_retain(puVar6);
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_168);
      _objc_release(puStack_148);
      uVar1 = uStack_140;
    }
    else {
      puVar6 = puVar5;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126ae328;
      func_0x00010bf991e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      uStack_128 = 0x104a3b45c;
      puStack_120 = &UNK_11084aaa8;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain();
      puStack_118 = puVar6;
      uStack_110 = uVar1;
      _objc_retain(puVar6);
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_138);
      _objc_release(puStack_118);
      uVar1 = uStack_110;
    }
LAB_104a3b0ac:
    _objc_release(uVar1);
  }
  else {
    puVar5 = PTR_PTR_1126ae328;
    func_0x00010bdc16a0(PTR_PTR_1126ae328);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c252ee0();
    if (puVar3 == (undefined *)0x190) {
      puStack_a0 = (undefined *)0x0;
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puStack_a0;
      _objc_retain(puStack_a0);
      puVar6 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar6 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126ae328;
        func_0x00010bdc1d60();
        _objc_retainAutoreleasedReturnValue();
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0xc2000000;
        uStack_c0 = 0x104a3b434;
        puStack_b8 = &UNK_11084aaa8;
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain();
        puStack_b0 = puVar6;
        uStack_a8 = uVar1;
        _objc_retain(puVar6);
        func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_d0);
        _objc_release(puStack_b0);
        uVar1 = uStack_a8;
        goto LAB_104a3b0ac;
      }
      _objc_release(puVar3);
      _objc_release(puVar7);
    }
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c252ee0();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126ae328;
    func_0x00010bf991e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x104a3b448;
    puStack_e8 = &UNK_11084aaa8;
    puVar6 = *(undefined **)(param_1 + 0x30);
    _objc_retain();
    puStack_e0 = puVar3;
    puStack_d8 = puVar6;
    _objc_retain(puVar3);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_100);
    _objc_release(puStack_e0);
    puVar6 = puStack_d8;
  }
LAB_104a3b3c0:
  _objc_release(puVar6);
  _objc_release(puVar3);
LAB_104a3b3d0:
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104a3b420; end: 104a3b497;  */

void FUN_104a3b420(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a3b430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a3b498; end: 104a3b49f; -[OIDAuthorizationService configuration] */

undefined8 FUN_104a3b498(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a3b4a0; end: 104a3b4ab; -[OIDAuthorizationService .cxx_destruct] */

void FUN_104a3b4a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a3b4ac; end: 104a3b517; -[OIDURLQueryComponent init] */

undefined1 * FUN_104a3b4ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3578;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104a3b518; end: 104a3b8cb; -[OIDURLQueryComponent initWithURL:] */

long FUN_104a3b518(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bfee200();
  if (param_1 != 0) {
    if ((bRam0000000113815b90 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
      func_0x00010bf44780();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0f7d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25cfc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1da640(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar5 = puVar3;
      func_0x00010c11d4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bf52a60();
      lVar7 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(puVar5);
          }
          uVar10 = *(undefined8 *)((long)puVar9 * 8);
          uVar6 = uVar10;
          func_0x00010c0d4f60(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296d80(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa5c0(param_1);
          _objc_release(uVar10);
          _objc_release(uVar6);
          puVar9 = puVar9 + 1;
        } while (puVar4 != puVar9);
        puVar4 = puVar5;
        func_0x00010bf52a60();
      }
    }
    else {
      puVar4 = param_3;
      func_0x00010c11d080();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c25cfc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar5 = puVar3;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bf52a60();
      lVar7 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar7) {
            _objc_enumerationMutation(puVar5);
          }
          lVar11 = *(long *)((long)puVar9 * 8);
          lVar1 = lVar11;
          func_0x00010c11f420();
          if (lVar1 != 0x7fffffffffffffff) {
            lVar1 = lVar11;
            func_0x00010c260c20(lVar11);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lVar1;
            func_0x00010c25cf40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar1);
            func_0x00010c260c00(lVar11);
            _objc_retainAutoreleasedReturnValue();
            lVar1 = lVar11;
            func_0x00010c25cf40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar11);
            func_0x00010befa5c0(param_1);
            _objc_release(lVar1);
            _objc_release(lVar2);
          }
          puVar9 = puVar9 + 1;
        } while (puVar4 != puVar9);
        puVar4 = puVar5;
        func_0x00010bf52a60();
      }
    }
    _objc_retain(param_1);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  lVar7 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)(lVar7 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bf002f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar8,PTR_s_allKeys_11259da60);
  return lVar8;
}



/* Entry: 104a3b8cc; end: 104a3b8d3; -[OIDURLQueryComponent parameters] */

void FUN_104a3b8cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf002f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_allKeys_11259da60);
  return;
}



/* Entry: 104a3b8d4; end: 104a3ba7b; -[OIDURLQueryComponent dictionaryValue] */

/* WARNING: Possible PIC construction at 0x000104a3b98c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a3b990) */
/* WARNING: Removing unreachable block (ram,0x000104a3b9e0) */
/* WARNING: Removing unreachable block (ram,0x000104a3b9a8) */
/* WARNING: Removing unreachable block (ram,0x000104a3b9fc) */
/* WARNING: Removing unreachable block (ram,0x000104a3ba18) */
/* WARNING: Removing unreachable block (ram,0x000104a3b974) */

void FUN_104a3b8d4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
      return;
    }
    ___stack_chk_fail();
    uVar4 = *(undefined8 *)(lVar2 + 8);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 104a3ba7c; end: 104a3ba83; -[OIDURLQueryComponent valuesForParameter:] */

void FUN_104a3ba7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 104a3ba84; end: 104a3bb27; -[OIDURLQueryComponent addParameter:value:] */

void FUN_104a3ba84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  }
  func_0x00010befa120(puVar1,param_2,param_4);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a3bb28; end: 104a3bc6b; -[OIDURLQueryComponent addParameters:] */

void FUN_104a3bb28(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [128];
  undefined1 auStack_220 [128];
  long lStack_1a0;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        lVar2 = param_3;
        func_0x00010c0e00e0(param_3,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa5c0(param_1,param_2,uVar8,lVar2);
        _objc_release(lVar2);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    plStack_2d0 = (long *)0x0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    lVar4 = *(long *)(param_3 + 8);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar9 = *plStack_2d0;
      do {
        lVar10 = 0;
        do {
          if (*plStack_2d0 != lVar9) {
            _objc_enumerationMutation(lVar4);
          }
          uVar8 = *(undefined8 *)(lStack_2d8 + lVar10 * 8);
          lVar5 = *(long *)(param_3 + 8);
          func_0x00010c0e00e0(lVar5,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          lStack_318 = 0;
          uStack_320 = 0;
          uStack_308 = 0;
          plStack_310 = (long *)0x0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          uStack_2e8 = 0;
          uStack_2f0 = 0;
          lVar2 = lVar5;
          func_0x00010bf52a60();
          if (lVar2 != 0) {
            lVar7 = *plStack_310;
            do {
              lVar11 = 0;
              do {
                if (*plStack_310 != lVar7) {
                  _objc_enumerationMutation(lVar5);
                }
                puVar6 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
                func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,uVar8,
                                    *(undefined8 *)(lStack_318 + lVar11 * 8));
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar3,param_2,puVar6);
                _objc_release(puVar6);
                lVar11 = lVar11 + 1;
              } while (lVar2 != lVar11);
              lVar2 = lVar5;
              func_0x00010bf52a60(lVar5,param_2,&uStack_320,auStack_2a0,0x10);
            } while (lVar2 != 0);
          }
          _objc_release(lVar5);
          lVar10 = lVar10 + 1;
        } while (lVar10 != lVar1);
        lVar1 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_2e0,auStack_220,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(lVar4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a0) {
      ___stack_chk_fail();
      puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar6;
      func_0x00010c0d3c80();
      _objc_release(puVar6);
      func_0x00010c12b740(puVar3,param_2,&PTR____CFConstantStringClassReference_110da8d18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  return;
}



/* Entry: 104a3bc6c; end: 104a3be63; -[OIDURLQueryComponent queryItems] */

void FUN_104a3bc6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_1a0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1a0 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        uVar10 = *(undefined8 *)(lStack_1a8 + lVar9 * 8);
        lVar4 = *(long *)(param_1 + 8);
        func_0x00010c0e00e0(lVar4,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar5 = lVar4;
        func_0x00010bf52a60();
        if (lVar5 != 0) {
          lVar8 = *plStack_1e0;
          do {
            lVar11 = 0;
            do {
              if (*plStack_1e0 != lVar8) {
                _objc_enumerationMutation(lVar4);
              }
              puVar6 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
              func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0,param_2,uVar10,
                                  *(undefined8 *)(lStack_1e8 + lVar11 * 8));
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1,param_2,puVar6);
              _objc_release(puVar6);
              lVar11 = lVar11 + 1;
            } while (lVar5 != lVar11);
            lVar5 = lVar4;
            func_0x00010bf52a60(lVar4,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar5 != 0);
        }
        _objc_release(lVar4);
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar3);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010c0d3c80();
    _objc_release(puVar6);
    func_0x00010c12b740(puVar1,param_2,&PTR____CFConstantStringClassReference_110da8d18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a3be64; end: 104a3beb7; +[OIDURLQueryComponent URLParamValueAllowedCharacters] */

void FUN_104a3be64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  func_0x00010c12b740(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8d18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3beb8; end: 104a3c143; -[OIDURLQueryComponent percentEncodedQueryString] */

void FUN_104a3beb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lStack_200;
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
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  _objc_opt_class();
  func_0x00010bdc2fc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_200 = lVar3;
  func_0x00010bf52a60();
  if (lStack_200 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(lVar3);
        }
        uVar13 = *(undefined8 *)(lStack_1a8 + lVar10 * 8);
        uVar4 = uVar13;
        func_0x00010c25cda0(uVar13,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(param_1 + 8);
        func_0x00010c0e00e0(lVar5,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar6 = lVar5;
        func_0x00010bf52a60();
        if (lVar6 != 0) {
          lVar12 = *plStack_1e0;
          do {
            lVar11 = 0;
            do {
              if (*plStack_1e0 != lVar12) {
                _objc_enumerationMutation(lVar5);
              }
              uVar13 = *(undefined8 *)(lStack_1e8 + lVar11 * 8);
              func_0x00010c25cda0(uVar13,param_2,lVar2);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  &PTR____CFConstantStringClassReference_110e02538);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1,param_2,puVar7);
              _objc_release(puVar7);
              _objc_release(uVar13);
              lVar11 = lVar11 + 1;
            } while (lVar6 != lVar11);
            lVar6 = lVar5;
            func_0x00010bf52a60(lVar5,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar6 != 0);
        }
        _objc_release(lVar5);
        _objc_release(uVar4);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lStack_200);
      lStack_200 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lStack_200 != 0);
  }
  _objc_release(lVar3);
  puVar7 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110df6378);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if ((bRam0000000113815b90 & 1) == 0) {
      puVar8 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
      _objc_alloc_init(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
      func_0x00010c11d4e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e6460(puVar8,param_2,puVar1);
      _objc_release(puVar1);
      puVar1 = puVar8;
      func_0x00010c0f7d40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010c25cfc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar8);
    }
    else {
      func_0x00010c0f7d60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104a3c144; end: 104a3c20b; -[OIDURLQueryComponent URLEncodedParameters] */

void FUN_104a3c144(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((bRam0000000113815b90 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
    func_0x00010c11d4e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6460(puVar1,param_2,param_1);
    _objc_release(param_1);
    puVar2 = puVar1;
    func_0x00010c0f7d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c0f7d60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104a3c20c; end: 104a3c293; -[OIDURLQueryComponent URLByReplacingQueryInURL:] */

void FUN_104a3c20c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da640(puVar1,param_2,param_1);
  puVar2 = puVar1;
  func_0x00010bdc2b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3c294; end: 104a3c30f; -[OIDURLQueryComponent description] */

void FUN_104a3c294(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da8d78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a3c310; end: 104a3c31b; -[OIDURLQueryComponent .cxx_destruct] */

void FUN_104a3c310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a3c31c; end: 104a3c3bf; -[OIDFieldMapping init] */

void FUN_104a3c31c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_initWithName_type_conversion__1125e90e8;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
                    /* WARNING: Could not recover jumptable at 0x00010c02dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 104a3c3c0; end: 104a3c3c7; -[OIDFieldMapping initWithName:type:] */

void FUN_104a3c3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithName_type_conversion__1125e90e8,param_3,param_4,0);
  return;
}



/* Entry: 104a3c3c8; end: 104a3c487; -[OIDFieldMapping initWithName:type:conversion:] */

undefined1 *
FUN_104a3c3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain();
  _objc_retain();
  puStack_38 = PTR_PTR_1126e3580;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_storeStrong((undefined1 *)((long)puVar1 + 0x10),param_4);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a3c488; end: 104a3c6e7; +[OIDFieldMapping remainingParametersWithMap:parameters:instance:] */

undefined **
FUN_104a3c488(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long lVar14;
  undefined1 *puVar15;
  ulong unaff_x28;
  undefined1 *puVar16;
  undefined *puStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  ulong uStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar1 = param_4;
  _objc_retain();
  uVar2 = param_5;
  _objc_retain();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  uStack_140 = uVar2;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuStack_138 = ppuVar3;
  _objc_retain();
  ppuVar3 = &puStack_130;
  puVar6 = auStack_f0;
  uVar11 = 0x10;
  uVar2 = uVar1;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    param_4 = *puStack_120;
    do {
      param_5 = 0;
      do {
        if (*puStack_120 != param_4) {
          _objc_enumerationMutation(uVar1);
        }
        unaff_x26 = *(ulong *)(lStack_128 + param_5 * 8);
        uVar4 = uVar1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf51e00();
        _objc_release(uVar4);
        unaff_x25 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = uVar5;
        if (unaff_x25 == 0) {
LAB_104a3c640:
          func_0x00010c1d0640(ppuStack_138);
        }
        else {
          uVar4 = unaff_x25;
          func_0x00010bf50be0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          unaff_x27 = 0;
          if (uVar4 != 0) {
            unaff_x27 = unaff_x25;
            func_0x00010bf50be0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = unaff_x27;
            (**(code **)(unaff_x27 + 0x10))();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar5);
            _objc_release(unaff_x27);
            unaff_x28 = unaff_x24;
          }
          uVar4 = unaff_x25;
          func_0x00010bf9c3e0(unaff_x25);
          uVar5 = unaff_x24;
          _objc_opt_isKindOfClass(unaff_x24,uVar4);
          if ((uVar5 & 1) == 0) goto LAB_104a3c640;
          unaff_x26 = unaff_x25;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220220(uStack_140);
          _objc_release(unaff_x26);
        }
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        param_5 = param_5 + 1;
      } while (uVar2 != param_5);
      ppuVar3 = &puStack_130;
      puVar6 = auStack_f0;
      uVar11 = 0x10;
      uVar2 = uVar1;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (uVar2 != 0);
  }
  _objc_release(uVar1);
  _objc_release(uStack_140);
  _objc_release(uVar1);
  _objc_release(param_3);
  ppuVar9 = ppuStack_138;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar9 = &puStack_270;
    pcStack_148 = FUN_104a3c6e8;
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_1a0 = unaff_x28;
    uStack_198 = unaff_x27;
    uStack_190 = unaff_x26;
    uStack_188 = unaff_x25;
    uStack_180 = unaff_x24;
    uStack_178 = unaff_x23;
    uStack_170 = uVar1;
    uStack_168 = param_4;
    uStack_160 = param_5;
    uStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain();
    _objc_retain();
    uStack_268 = 0;
    puStack_270 = (undefined *)0x0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    puVar16 = auStack_230;
    uVar12 = 0x10;
    puVar15 = puVar6;
    func_0x00010bf52a60();
    if (puVar15 != (undefined1 *)0x0) {
      lVar14 = *plStack_260;
      do {
        puVar16 = (undefined1 *)0x0;
        do {
          if (*plStack_260 != lVar14) {
            _objc_enumerationMutation(puVar6);
          }
          puVar7 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010c296f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar7);
          func_0x00010bf93020(ppuVar3);
          _objc_release(uVar12);
          puVar16 = puVar16 + 1;
        } while (puVar15 != puVar16);
        puVar16 = auStack_230;
        uVar12 = 0x10;
        puVar15 = puVar6;
        ppuVar9 = &puStack_270;
        func_0x00010bf52a60();
      } while (puVar15 != (undefined1 *)0x0);
    }
    _objc_release(uVar11);
    _objc_release(puVar6);
    _objc_release(ppuVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
      return ppuVar3;
    }
    ___stack_chk_fail();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain();
    _objc_retain(uVar12);
    puVar6 = puVar16;
    func_0x00010bf52a60();
    lVar14 = lRam0000000000000000;
    while (puVar6 != (undefined1 *)0x0) {
      puVar15 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(puVar16);
        }
        puVar7 = puVar16;
        func_0x00010c0e00e0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9c3e0();
        ppuVar3 = ppuVar9;
        func_0x00010bf67020(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c0d4f60(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(uVar12);
        _objc_release(puVar8);
        _objc_release(ppuVar3);
        _objc_release(puVar7);
        puVar15 = puVar15 + 1;
      } while (puVar6 != puVar15);
      puVar6 = puVar16;
      func_0x00010bf52a60();
    }
    _objc_release(uVar12);
    _objc_release(puVar16);
    _objc_release(ppuVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return ppuVar9;
    }
    ___stack_chk_fail();
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSSet_1126ae870;
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_opt_class();
    _objc_opt_class();
    _objc_opt_class();
    _objc_opt_class();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
      ___stack_chk_fail();
      return &PTR___NSConcreteGlobalBlock_1107bf4a8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
  return ppuVar9;
}



/* Entry: 104a3c6e8; end: 104a3c87b; +[OIDFieldMapping encodeWithCoder:map:instance:] */

undefined **
FUN_104a3c6e8(undefined8 param_1,undefined8 param_2,undefined **param_3,long param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar10;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  long lVar11;
  long unaff_x27;
  undefined1 *puVar12;
  long unaff_x28;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined1 *puStack_280;
  undefined **ppuStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  ppuVar2 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar3 = auStack_f0;
  uVar9 = 0x10;
  lVar11 = param_4;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(param_4);
        }
        unaff_x23 = *(undefined8 *)(lStack_128 + unaff_x28 * 8);
        unaff_x24 = param_4;
        func_0x00010c0e00e0(param_4,param_2,unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = param_5;
        func_0x00010c296f60(param_5,param_2,unaff_x25);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        func_0x00010bf93020(param_3,param_2,unaff_x26,unaff_x23);
        _objc_release(unaff_x26);
        unaff_x28 = unaff_x28 + 1;
      } while (lVar11 != unaff_x28);
      puVar3 = auStack_f0;
      uVar9 = 0x10;
      lVar11 = param_4;
      ppuVar2 = &puStack_130;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar11 != 0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  ppuVar1 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_104a3c87c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  uStack_158 = param_5;
  lStack_150 = param_4;
  ppuStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain();
  _objc_retain(uVar9);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar4 = puVar3;
  func_0x00010bf52a60(puVar3,param_2,&uStack_260,auStack_218,0x10);
  if (puVar4 != (undefined1 *)0x0) {
    lVar11 = *plStack_250;
    do {
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_250 != lVar11) {
          _objc_enumerationMutation(puVar3);
        }
        uVar10 = *(undefined8 *)(lStack_258 + (long)puVar12 * 8);
        puVar5 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf9c3e0();
        ppuVar1 = ppuVar2;
        func_0x00010bf67020(ppuVar2,param_2,puVar6,uVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0d4f60(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(uVar9,param_2,ppuVar1,puVar6);
        _objc_release(puVar6);
        _objc_release(ppuVar1);
        _objc_release(puVar5);
        puVar12 = puVar12 + 1;
      } while (puVar4 != puVar12);
      puVar4 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_260,auStack_218,0x10);
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release(uVar9);
  _objc_release(puVar3);
  ppuVar1 = ppuVar2;
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSSet_1126ae870;
  pcStack_268 = FUN_104a3ca1c;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_280 = puVar3;
  ppuStack_278 = ppuVar2;
  ppuStack_270 = &puStack_140;
  _objc_opt_class();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_2a8 = puVar7;
  _objc_opt_class();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_2a0 = puVar8;
  _objc_opt_class();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_298 = puVar7;
  _objc_opt_class();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_290 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_2a8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(ppuVar1,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR___NSConcreteGlobalBlock_1107bf4a8;
}



/* Entry: 104a3c87c; end: 104a3ca1b; +[OIDFieldMapping decodeWithCoder:map:instance:] */

undefined **
FUN_104a3c87c(undefined8 param_1,undefined8 param_2,undefined **param_3,long param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined **ppuStack_148;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain();
  _objc_retain(param_5);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_4);
        }
        uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        lVar2 = param_4;
        func_0x00010c0e00e0(param_4,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf9c3e0();
        ppuVar4 = param_3;
        func_0x00010bf67020(param_3,param_2,lVar3,uVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0d4f60(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(param_5,param_2,ppuVar4,lVar3);
        _objc_release(lVar3);
        _objc_release(ppuVar4);
        _objc_release(lVar2);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  ppuVar4 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSSet_1126ae870;
  pcStack_138 = FUN_104a3ca1c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_150 = param_4;
  ppuStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_opt_class();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_178 = puVar5;
  _objc_opt_class();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_170 = puVar6;
  _objc_opt_class();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_168 = puVar5;
  _objc_opt_class();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_160 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_178,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(ppuVar4,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
    return ppuVar4;
  }
  ___stack_chk_fail();
  return &PTR___NSConcreteGlobalBlock_1107bf4a8;
}



/* Entry: 104a3ca1c; end: 104a3caef; +[OIDFieldMapping JSONTypes] */

undefined ** FUN_104a3ca1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSSet_1126ae870;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_48 = puVar1;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_40 = puVar2;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_38 = puVar1;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(ppuVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
    return ppuVar3;
  }
  ___stack_chk_fail();
  return &PTR___NSConcreteGlobalBlock_1107bf4a8;
}



/* Entry: 104a3caf0; end: 104a3cafb; +[OIDFieldMapping URLConversion] */

undefined ** FUN_104a3caf0(void)

{
  return &PTR___NSConcreteGlobalBlock_1107bf4a8;
}



/* Entry: 104a3cafc; end: 104a3cb6f;  */

void FUN_104a3cafc(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = param_2;
    _objc_retain(param_2);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a3cb70; end: 104a3cb7b; +[OIDFieldMapping dateSinceNowConversion] */

undefined ** FUN_104a3cb70(void)

{
  return &PTR___NSConcreteGlobalBlock_1107bf4c8;
}



/* Entry: 104a3cb7c; end: 104a3cbfb;  */

void FUN_104a3cb7c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = param_2;
    _objc_retain(param_2);
  }
  else {
    puVar2 = param_2;
    func_0x00010c0b4ca0(param_2);
    func_0x00010bf65600((double)(long)puVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a3cbfc; end: 104a3cc07; +[OIDFieldMapping dateEpochConversion] */

undefined ** FUN_104a3cbfc(void)

{
  return &PTR___NSConcreteGlobalBlock_1107bf4e8;
}



/* Entry: 104a3cc08; end: 104a3cc87;  */

void FUN_104a3cc08(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = param_2;
    _objc_retain(param_2);
  }
  else {
    puVar2 = param_2;
    func_0x00010c0b4ca0(param_2);
    func_0x00010bf655e0((double)(long)puVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a3cc88; end: 104a3cc8f; -[OIDFieldMapping name] */

undefined8 FUN_104a3cc88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a3cc90; end: 104a3cc97; -[OIDFieldMapping expectedType] */

undefined8 FUN_104a3cc90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a3cc98; end: 104a3cc9f; -[OIDFieldMapping conversion] */

undefined8 FUN_104a3cc98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a3cca0; end: 104a3ccdb; -[OIDFieldMapping .cxx_destruct] */

void FUN_104a3cca0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a3ccdc; end: 104a3cd27; +[OIDURLSessionProvider session] */

void FUN_104a3ccdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (puRam00000001136a1610 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
    func_0x00010c22bfa0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puRam00000001136a1610;
    puRam00000001136a1610 = puVar2;
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(puRam00000001136a1610);
  return;
}



/* Entry: 104a3cd28; end: 104a3cd37; +[OIDURLSessionProvider setSession:] */

void FUN_104a3cd28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x1136a1610,param_3);
  return;
}



/* Entry: 104a3cd38; end: 104a3cddb; -[OIDAuthorizationRequest init] */

undefined8 *** FUN_104a3cd38(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  undefined8 **in_x5;
  undefined8 **in_x6;
  undefined8 **in_x7;
  long lVar13;
  undefined8 **ppuVar14;
  undefined **ppuVar15;
  undefined8 ***pppuVar16;
  undefined8 **ppuStack_150;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 *puStack_c0;
  undefined8 ***pppuVar10;
  
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_initWithConfiguration_clientId_s_1125ddf90;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110da8438;
  ppuVar12 = (undefined8 **)0x0;
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar15 = &PTR____CFConstantStringClassReference_110db9558;
  ppuVar4 = (undefined8 **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar4;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  ppuVar11 = (undefined8 **)0x2;
  ppuVar4 = (undefined8 **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  pppuVar16 = (undefined8 ***)ppuVar3;
  func_0x00010c0720c0();
  if ((((ulong)pppuVar16 & 1) == 0) &&
     (pppuVar16 = (undefined8 ***)ppuVar3, ppuVar15 = (undefined **)ppuVar14, func_0x00010c0720c0(),
     ((ulong)pppuVar16 & 1) == 0)) {
    pppuVar16 = (undefined8 ***)ppuVar3;
    ppuVar15 = (undefined **)ppuVar5;
    func_0x00010c0720c0();
  }
  else {
    pppuVar16 = (undefined8 ***)0x1;
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return pppuVar16;
  }
  ___stack_chk_fail();
  ppuVar8 = &PTR____CFConstantStringClassReference_110db9558;
  ppuVar9 = &PTR____CFConstantStringClassReference_110da24f8;
  ppuVar6 = &PTR____CFConstantStringClassReference_110da24f8;
  ppuVar7 = &PTR____CFConstantStringClassReference_110db9558;
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
  _objc_retain(lVar13);
  puStack_128 = PTR_PTR_1126e3588;
  pppuVar16 = &ppuStack_130;
  ppuStack_130 = (undefined8 **)ppuVar3;
  _objc_msgSendSuper2(pppuVar16,PTR_s_init_1125d9248);
  if (pppuVar16 != (undefined8 ***)0x0) {
    ppuVar4 = (undefined8 **)ppuVar15;
    func_0x00010bf51e00();
    ppuVar14 = pppuVar16[1];
    pppuVar16[1] = ppuVar4;
    _objc_release(ppuVar14);
    ppuVar4 = ppuVar11;
    func_0x00010bf51e00();
    ppuVar14 = pppuVar16[3];
    pppuVar16[3] = ppuVar4;
    _objc_release(ppuVar14);
    ppuVar4 = ppuVar12;
    func_0x00010bf51e00();
    ppuVar14 = pppuVar16[4];
    pppuVar16[4] = ppuVar4;
    _objc_release(ppuVar14);
    ppuVar4 = in_x5;
    func_0x00010bf51e00();
    ppuVar14 = pppuVar16[5];
    pppuVar16[5] = ppuVar4;
    _objc_release(ppuVar14);
    ppuVar4 = in_x6;
    func_0x00010bf51e00();
    ppuVar14 = pppuVar16[6];
    pppuVar16[6] = ppuVar4;
    _objc_release(ppuVar14);
    ppuVar4 = in_x7;
    func_0x00010bf51e00();
    ppuVar14 = pppuVar16[2];
    pppuVar16[2] = ppuVar4;
    _objc_release(ppuVar14);
    pppuVar10 = pppuVar16;
    _objc_opt_class();
    iVar1 = (int)pppuVar10;
    func_0x00010c0804e0();
    if (iVar1 == 0) {
      ppuStack_150 = (undefined8 ***)0x0;
      goto LAB_104a3d198;
    }
    ppuVar4 = (undefined8 **)puStack_c0;
    func_0x00010bf51e00();
    ppuVar14 = pppuVar16[7];
    pppuVar16[7] = ppuVar4;
    _objc_release(ppuVar14);
    ppuVar4 = (undefined8 **)ppuVar6;
    func_0x00010bf51e00();
    ppuVar14 = pppuVar16[8];
    pppuVar16[8] = ppuVar4;
    _objc_release(ppuVar14);
    ppuVar4 = (undefined8 **)ppuVar7;
    func_0x00010bf51e00();
    ppuVar14 = pppuVar16[9];
    pppuVar16[9] = ppuVar4;
    _objc_release(ppuVar14);
    ppuVar4 = (undefined8 **)ppuVar8;
    func_0x00010bf51e00();
    ppuVar14 = pppuVar16[10];
    pppuVar16[10] = ppuVar4;
    _objc_release(ppuVar14);
    ppuVar4 = (undefined8 **)ppuVar9;
    func_0x00010bf51e00();
    ppuVar14 = pppuVar16[0xb];
    pppuVar16[0xb] = ppuVar4;
    _objc_release(ppuVar14);
    ppuVar4 = (undefined8 **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc();
    func_0x00010c00c580();
    ppuVar14 = pppuVar16[0xc];
    pppuVar16[0xc] = ppuVar4;
    _objc_release(ppuVar14);
  }
  ppuStack_150 = pppuVar16;
  _objc_retain();
LAB_104a3d198:
  _objc_release(lVar13);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(puStack_c0);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar15);
  _objc_release(pppuVar16);
  return (undefined8 ***)ppuStack_150;
}



/* Entry: 104a3cddc; end: 104a3cf3b; +[OIDAuthorizationRequest isSupportedResponseType:] */

undefined8 ***
FUN_104a3cddc(undefined8 param_1,undefined8 param_2,undefined8 ***param_3,undefined8 param_4,
             undefined8 **param_5,undefined8 **param_6,undefined8 **param_7,undefined8 **param_8)

{
  int iVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 **ppuVar9;
  long lVar10;
  undefined8 **ppuVar11;
  undefined **ppuVar12;
  undefined8 ***pppuVar13;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_80;
  undefined8 ***pppuVar8;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar12 = &PTR____CFConstantStringClassReference_110db9558;
  ppuVar2 = (undefined8 **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar2;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar9 = (undefined8 **)0x2;
  ppuVar2 = (undefined8 **)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  pppuVar13 = param_3;
  func_0x00010c0720c0();
  if ((((ulong)pppuVar13 & 1) == 0) &&
     (pppuVar13 = param_3, ppuVar12 = (undefined **)ppuVar11, func_0x00010c0720c0(),
     ((ulong)pppuVar13 & 1) == 0)) {
    pppuVar13 = param_3;
    ppuVar12 = (undefined **)ppuVar3;
    func_0x00010c0720c0();
  }
  else {
    pppuVar13 = (undefined8 ***)0x1;
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return pppuVar13;
  }
  ___stack_chk_fail();
  ppuVar6 = &PTR____CFConstantStringClassReference_110db9558;
  ppuVar7 = &PTR____CFConstantStringClassReference_110da24f8;
  ppuVar4 = &PTR____CFConstantStringClassReference_110da24f8;
  ppuVar5 = &PTR____CFConstantStringClassReference_110db9558;
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
  _objc_retain(lVar10);
  puStack_e8 = PTR_PTR_1126e3588;
  pppuVar13 = &ppuStack_f0;
  ppuStack_f0 = param_3;
  _objc_msgSendSuper2(pppuVar13,PTR_s_init_1125d9248);
  if (pppuVar13 != (undefined8 ***)0x0) {
    ppuVar2 = (undefined8 **)ppuVar12;
    func_0x00010bf51e00();
    ppuVar11 = pppuVar13[1];
    pppuVar13[1] = ppuVar2;
    _objc_release(ppuVar11);
    ppuVar2 = ppuVar9;
    func_0x00010bf51e00();
    ppuVar11 = pppuVar13[3];
    pppuVar13[3] = ppuVar2;
    _objc_release(ppuVar11);
    ppuVar2 = param_5;
    func_0x00010bf51e00();
    ppuVar11 = pppuVar13[4];
    pppuVar13[4] = ppuVar2;
    _objc_release(ppuVar11);
    ppuVar2 = param_6;
    func_0x00010bf51e00();
    ppuVar11 = pppuVar13[5];
    pppuVar13[5] = ppuVar2;
    _objc_release(ppuVar11);
    ppuVar2 = param_7;
    func_0x00010bf51e00();
    ppuVar11 = pppuVar13[6];
    pppuVar13[6] = ppuVar2;
    _objc_release(ppuVar11);
    ppuVar2 = param_8;
    func_0x00010bf51e00();
    ppuVar11 = pppuVar13[2];
    pppuVar13[2] = ppuVar2;
    _objc_release(ppuVar11);
    pppuVar8 = pppuVar13;
    _objc_opt_class();
    iVar1 = (int)pppuVar8;
    func_0x00010c0804e0();
    if (iVar1 == 0) {
      ppuStack_110 = (undefined8 ***)0x0;
      goto LAB_104a3d198;
    }
    ppuVar2 = (undefined8 **)puStack_80;
    func_0x00010bf51e00();
    ppuVar11 = pppuVar13[7];
    pppuVar13[7] = ppuVar2;
    _objc_release(ppuVar11);
    ppuVar2 = (undefined8 **)ppuVar4;
    func_0x00010bf51e00();
    ppuVar11 = pppuVar13[8];
    pppuVar13[8] = ppuVar2;
    _objc_release(ppuVar11);
    ppuVar2 = (undefined8 **)ppuVar5;
    func_0x00010bf51e00();
    ppuVar11 = pppuVar13[9];
    pppuVar13[9] = ppuVar2;
    _objc_release(ppuVar11);
    ppuVar2 = (undefined8 **)ppuVar6;
    func_0x00010bf51e00();
    ppuVar11 = pppuVar13[10];
    pppuVar13[10] = ppuVar2;
    _objc_release(ppuVar11);
    ppuVar2 = (undefined8 **)ppuVar7;
    func_0x00010bf51e00();
    ppuVar11 = pppuVar13[0xb];
    pppuVar13[0xb] = ppuVar2;
    _objc_release(ppuVar11);
    ppuVar2 = (undefined8 **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc();
    func_0x00010c00c580();
    ppuVar11 = pppuVar13[0xc];
    pppuVar13[0xc] = ppuVar2;
    _objc_release(ppuVar11);
  }
  ppuStack_110 = pppuVar13;
  _objc_retain();
LAB_104a3d198:
  _objc_release(lVar10);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(puStack_80);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar9);
  _objc_release(ppuVar12);
  _objc_release(pppuVar13);
  return (undefined8 ***)ppuStack_110;
}



/* Entry: 104a3cf3c; end: 104a3d223; -[OIDAuthorizationRequest initWithConfiguration:clientId:clientSecret:scope:redirectURL:responseType:state:nonce:codeVerifier:codeChallenge:codeChallengeMethod:additionalParameters:] */

undefined8 *
FUN_104a3cf3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puStack_90;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 *puVar3;
  
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
  puStack_68 = PTR_PTR_1126e3588;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar6 = param_3;
    func_0x00010bf51e00();
    uVar5 = puVar2[1];
    puVar2[1] = uVar6;
    _objc_release(uVar5);
    uVar6 = param_4;
    func_0x00010bf51e00();
    uVar5 = puVar2[3];
    puVar2[3] = uVar6;
    _objc_release(uVar5);
    uVar6 = param_5;
    func_0x00010bf51e00();
    uVar5 = puVar2[4];
    puVar2[4] = uVar6;
    _objc_release(uVar5);
    uVar6 = param_6;
    func_0x00010bf51e00();
    uVar5 = puVar2[5];
    puVar2[5] = uVar6;
    _objc_release(uVar5);
    uVar6 = param_7;
    func_0x00010bf51e00();
    uVar5 = puVar2[6];
    puVar2[6] = uVar6;
    _objc_release(uVar5);
    uVar6 = param_8;
    func_0x00010bf51e00();
    uVar5 = puVar2[2];
    puVar2[2] = uVar6;
    _objc_release(uVar5);
    puVar3 = puVar2;
    _objc_opt_class();
    iVar1 = (int)puVar3;
    func_0x00010c0804e0();
    if (iVar1 == 0) {
      puStack_90 = (undefined8 *)0x0;
      goto LAB_104a3d198;
    }
    uVar6 = param_9;
    func_0x00010bf51e00();
    uVar5 = puVar2[7];
    puVar2[7] = uVar6;
    _objc_release(uVar5);
    uVar6 = param_10;
    func_0x00010bf51e00();
    uVar5 = puVar2[8];
    puVar2[8] = uVar6;
    _objc_release(uVar5);
    uVar6 = param_11;
    func_0x00010bf51e00();
    uVar5 = puVar2[9];
    puVar2[9] = uVar6;
    _objc_release(uVar5);
    uVar6 = param_12;
    func_0x00010bf51e00();
    uVar5 = puVar2[10];
    puVar2[10] = uVar6;
    _objc_release(uVar5);
    uVar6 = param_13;
    func_0x00010bf51e00();
    uVar5 = puVar2[0xb];
    puVar2[0xb] = uVar6;
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_alloc();
    func_0x00010c00c580();
    uVar6 = puVar2[0xc];
    puVar2[0xc] = puVar4;
    _objc_release(uVar6);
  }
  puStack_90 = puVar2;
  _objc_retain();
LAB_104a3d198:
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
  _objc_release(puVar2);
  return puStack_90;
}



/* Entry: 104a3d224; end: 104a3d403; -[OIDAuthorizationRequest initWithConfiguration:clientId:clientSecret:scopes:redirectURL:responseType:additionalParameters:] */

undefined8
FUN_104a3d224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bfbf2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  _objc_opt_class();
  func_0x00010bf3eca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae350;
  func_0x00010c150be0(PTR_PTR_1126ae350,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar4 = param_1;
  _objc_opt_class();
  func_0x00010bfc0300();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  _objc_opt_class();
  func_0x00010bfc0300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0016e0(param_1,param_2,param_3,param_4,param_5,puVar3,param_7,param_8,uVar4,uVar5,
                      uVar1,uVar2,&PTR____CFConstantStringClassReference_110dc9298,param_9);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104a3d404; end: 104a3d437; -[OIDAuthorizationRequest initWithConfiguration:clientId:scopes:redirectURL:responseType:additionalParameters:] */

void FUN_104a3d404(void)

{
  func_0x00010c001700();
  return;
}



/* Entry: 104a3d438; end: 104a3d5ff; -[OIDAuthorizationRequest initWithConfiguration:clientId:scopes:redirectURL:responseType:nonce:additionalParameters:] */

undefined8
FUN_104a3d438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bfbf2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  _objc_opt_class();
  func_0x00010bf3eca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae350;
  func_0x00010c150be0(PTR_PTR_1126ae350,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar4 = param_1;
  _objc_opt_class();
  func_0x00010bfc0300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0016e0(param_1,param_2,param_3,param_4,0,puVar3,param_6,param_7,uVar4,param_8,uVar1,
                      uVar2,&PTR____CFConstantStringClassReference_110dc9298,param_9);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104a3d600; end: 104a3d603; -[OIDAuthorizationRequest copyWithZone:] */

void FUN_104a3d600(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104a3d604; end: 104a3d60b; +[OIDAuthorizationRequest supportsSecureCoding] */

undefined8 FUN_104a3d604(void)

{
  return 1;
}



/* Entry: 104a3d60c; end: 104a3d983; -[OIDAuthorizationRequest initWithCoder:] */

long FUN_104a3d60c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
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
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126ae348;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(puVar1);
  lVar2 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110df9f78);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar3 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110db95f8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar4 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110db9578);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar5 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da85d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar6 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110db95d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
  lVar7 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110db9598);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar8 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110db9618);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar9 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e3ec38);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar10 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e18e98);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar11 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e18e18);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar12 = param_3;
  func_0x00010bf67020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e18df8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class();
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_78 = puVar13;
  _objc_opt_class();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar1,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  lVar15 = param_3;
  func_0x00010bf67040(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110da83f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar16 = lVar2;
  func_0x00010c0016e0(param_1,param_2,lVar2,lVar4,lVar5,lVar6,lVar7,lVar3,lVar8,lVar9,lVar10,lVar11,
                      lVar12,lVar15);
  _objc_release(lVar15);
  _objc_release(puVar1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(lVar16);
  func_0x00010bf93020();
  func_0x00010bf93020(lVar16,param_2,*(undefined8 *)(lVar2 + 0x10),
                      &PTR____CFConstantStringClassReference_110db95f8);
  func_0x00010bf93020(lVar16,param_2,*(undefined8 *)(lVar2 + 0x18),
                      &PTR____CFConstantStringClassReference_110db9578);
  func_0x00010bf93020(lVar16,param_2,*(undefined8 *)(lVar2 + 0x20),
                      &PTR____CFConstantStringClassReference_110da85d8);
  func_0x00010bf93020(lVar16,param_2,*(undefined8 *)(lVar2 + 0x28),
                      &PTR____CFConstantStringClassReference_110db95d8);
  func_0x00010bf93020(lVar16,param_2,*(undefined8 *)(lVar2 + 0x30),
                      &PTR____CFConstantStringClassReference_110db9598);
  func_0x00010bf93020(lVar16,param_2,*(undefined8 *)(lVar2 + 0x38),
                      &PTR____CFConstantStringClassReference_110db9618);
  func_0x00010bf93020(lVar16,param_2,*(undefined8 *)(lVar2 + 0x40),
                      &PTR____CFConstantStringClassReference_110e3ec38);
  func_0x00010bf93020(lVar16,param_2,*(undefined8 *)(lVar2 + 0x48),
                      &PTR____CFConstantStringClassReference_110e18e98);
  func_0x00010bf93020(lVar16,param_2,*(undefined8 *)(lVar2 + 0x50),
                      &PTR____CFConstantStringClassReference_110e18e18);
  func_0x00010bf93020(lVar16,param_2,*(undefined8 *)(lVar2 + 0x58),
                      &PTR____CFConstantStringClassReference_110e18df8);
  func_0x00010bf93020(lVar16,param_2,*(undefined8 *)(lVar2 + 0x60),
                      &PTR____CFConstantStringClassReference_110da83f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar16);
  return lVar16;
}



/* Entry: 104a3d984; end: 104a3daa7; -[OIDAuthorizationRequest encodeWithCoder:] */

void FUN_104a3d984(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf93020();
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110db95f8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110db9578);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110da85d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110db95d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110db9598);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110db9618);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110e3ec38);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110e18e98);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110e18e18);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110e18df8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110da83f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104a3daa8; end: 104a3db3b; -[OIDAuthorizationRequest description] */

void FUN_104a3daa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf10f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110da8a38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3db3c; end: 104a3db4b; +[OIDAuthorizationRequest generateCodeVerifier] */

void FUN_104a3db3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae358,PTR_s_randomURLSafeStringWithSize__1126256a8,0x20);
  return;
}



/* Entry: 104a3db4c; end: 104a3db5b; +[OIDAuthorizationRequest generateState] */

void FUN_104a3db4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae358,PTR_s_randomURLSafeStringWithSize__1126256a8,0x20);
  return;
}



/* Entry: 104a3db5c; end: 104a3dbbb; +[OIDAuthorizationRequest codeChallengeS256ForVerifier:] */

void FUN_104a3db5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae358;
    func_0x00010c229e80(PTR_PTR_1126ae358);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae358;
    func_0x00010bf92d60(PTR_PTR_1126ae358,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a3dbbc; end: 104a3dd0b; -[OIDAuthorizationRequest authorizationRequestURL] */

void FUN_104a3dbbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae320;
  _objc_alloc_init(PTR_PTR_1126ae320);
  func_0x00010befa5c0();
  func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db9578,
                      *(undefined8 *)(param_1 + 0x18));
  func_0x00010befa5e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db9598,lVar2);
    _objc_release(lVar2);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db95d8);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db9618);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3ec38);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e18e18);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010befa5c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e18df8);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf10ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bdc2d20(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104a3dd0c; end: 104a3dd0f; -[OIDAuthorizationRequest externalUserAgentRequestURL] */

void FUN_104a3dd0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf10f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_authorizationRequestURL_1125a1d88);
  return;
}



/* Entry: 104a3dd10; end: 104a3dd53; -[OIDAuthorizationRequest redirectScheme] */

void FUN_104a3dd10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c124b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104a3dd54; end: 104a3dd5b; -[OIDAuthorizationRequest configuration] */

undefined8 FUN_104a3dd54(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104a3dd5c; end: 104a3dd63; -[OIDAuthorizationRequest responseType] */

undefined8 FUN_104a3dd5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a3dd64; end: 104a3dd6b; -[OIDAuthorizationRequest clientID] */

undefined8 FUN_104a3dd64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a3dd6c; end: 104a3dd73; -[OIDAuthorizationRequest clientSecret] */

undefined8 FUN_104a3dd6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104a3dd74; end: 104a3dd7b; -[OIDAuthorizationRequest scope] */

undefined8 FUN_104a3dd74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104a3dd7c; end: 104a3dd83; -[OIDAuthorizationRequest redirectURL] */

undefined8 FUN_104a3dd7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


