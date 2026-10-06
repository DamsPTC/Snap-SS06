/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b718114; end: 10b718123; -[AFMultipartBodyStream delay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b718114(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127923e8);
}



/* Entry: 10b718124; end: 10b718133; -[AFMultipartBodyStream setDelay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b718124(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127923e8) = param_1;
  return;
}



/* Entry: 10b718134; end: 10b7181a3; -[AFMultipartBodyStream .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b718134(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112792420,0);
  _objc_storeStrong(param_1 + _DAT_11279241c,0);
  _objc_storeStrong(param_1 + _DAT_112792418,0);
  _objc_storeStrong(param_1 + _DAT_112792414,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112792410,0);
  return;
}



/* Entry: 10b7181a4; end: 10b718203; -[AFHTTPBodyPart init] */

undefined1 * FUN_10b7181a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a1b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c27ab80(puVar1);
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar1;
}



/* Entry: 10b718204; end: 10b71825b; -[AFHTTPBodyPart dealloc] */

void FUN_10b718204(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bf3d9e0();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
  puStack_28 = PTR_PTR_11270a1b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b71825c; end: 10b7183e3; -[AFHTTPBodyPart inputStream] */

void FUN_10b71825c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) goto LAB_10b71836c;
  uVar5 = param_1;
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar2 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar1);
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSInputStream_1126bc580;
  uVar5 = param_1;
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSInputStream_1126bc580;
    if ((uVar3 & 1) != 0) {
      func_0x00010bf1e9c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c065fa0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b718354;
    }
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSInputStream_1126bc580;
    _objc_opt_class(PTR__OBJC_CLASS___NSInputStream_1126bc580);
    uVar2 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar1);
    _objc_release(uVar5);
    if ((uVar2 & 1) == 0) goto LAB_10b71836c;
    uVar2 = param_1;
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(ulong *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = uVar2;
  }
  else {
    func_0x00010bf1e9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c065f80();
    _objc_retainAutoreleasedReturnValue();
LAB_10b718354:
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar4);
  }
  _objc_release(uVar5);
LAB_10b71836c:
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b7183e4; end: 10b7185db; -[AFHTTPBodyPart stringForHeaders] */

undefined * FUN_10b7183e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long lVar13;
  long lVar14;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar13 = param_1;
  func_0x00010bfe02c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar13;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar13 != 0) {
    lVar14 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar2);
        }
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        lVar3 = param_1;
        func_0x00010bfe02c0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c296f60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110f76858);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(puVar1,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar12 = lVar12 + 1;
      } while (lVar13 != lVar12);
      lVar13 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar13 != 0);
  }
  _objc_release(lVar2);
  func_0x00010bf070e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f767b8);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da60(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = puVar1;
  func_0x00010bfd7f40();
  if ((int)puVar5 == 0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110f768d8;
  }
  else {
    ppuVar11 = &PTR____CFConstantStringClassReference_110f768b8;
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c25d1c0(puVar1);
  puVar7 = puVar5;
  func_0x00010bf64920(puVar5,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar7;
  func_0x00010c08fa60(puVar7);
  puVar6 = puVar1;
  func_0x00010c25d2e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010c25d1c0(puVar1);
  puVar9 = puVar6;
  func_0x00010bf64920(puVar6,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar9;
  func_0x00010c08fa60(puVar9);
  lVar13 = *(long *)(puVar1 + 0x40);
  puVar8 = puVar1;
  func_0x00010bfd71e0();
  if (((ulong)puVar8 & 1) == 0) {
    puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f768f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d1c0(puVar1);
    puVar8 = puVar10;
    func_0x00010bf64920(puVar10,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
  }
  puVar1 = puVar8;
  func_0x00010c08fa60(puVar8);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  return puVar6 + (long)puVar5 + (long)(puVar1 + lVar13);
}



/* Entry: 10b7185dc; end: 10b718793; -[AFHTTPBodyPart contentLength] */

undefined * FUN_10b7185dc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  
  uVar1 = param_1;
  func_0x00010bfd7f40();
  if ((int)uVar1 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110f768d8;
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110f768b8;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25d1c0(param_1);
  puVar3 = puVar2;
  func_0x00010bf64920(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c08fa60(puVar3);
  uVar1 = param_1;
  func_0x00010c25d2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c25d1c0(param_1);
  uVar5 = uVar1;
  func_0x00010bf64920(uVar1,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar5;
  func_0x00010c08fa60(uVar5);
  lVar9 = *(long *)(param_1 + 0x40);
  uVar4 = param_1;
  func_0x00010bfd71e0();
  if ((uVar4 & 1) == 0) {
    puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f768f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d1c0(param_1);
    puVar7 = puVar6;
    func_0x00010bf64920(puVar6,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  puVar6 = puVar7;
  func_0x00010c08fa60(puVar7);
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar3);
  return puVar2 + uVar1 + (long)(puVar6 + lVar9);
}



/* Entry: 10b718794; end: 10b7187e7; -[AFHTTPBodyPart hasBytesAvailable] */

bool FUN_10b718794(ulong param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 8) == 4) {
    return true;
  }
  func_0x00010c065f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25c680();
  _objc_release(param_1);
  return uVar1 < 5;
}



/* Entry: 10b7187e8; end: 10b718a97; -[AFHTTPBodyPart read:maxLength:] */

ulong FUN_10b7187e8(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  int iVar7;
  ulong uVar8;
  
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 1) {
    uVar8 = param_1;
    func_0x00010bfd7f40();
    if ((int)uVar8 == 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110f768d8;
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110f768b8;
    }
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c25d1c0(param_1);
    puVar2 = puVar1;
    func_0x00010bf64920(puVar1,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar8 = param_1;
    func_0x00010c1212c0(param_1,param_2,puVar2,param_3,param_4);
    _objc_release(puVar2);
    iVar7 = *(int *)(param_1 + 8);
  }
  else {
    uVar8 = 0;
  }
  if (iVar7 == 2) {
    uVar3 = param_1;
    func_0x00010c25d2e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c25d1c0(param_1);
    uVar5 = uVar3;
    func_0x00010bf64920(uVar3,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010c1212c0(param_1,param_2,uVar5,param_3 + uVar8,param_4 - uVar8);
    uVar8 = uVar3 + uVar8;
    _objc_release(uVar5);
    iVar7 = *(int *)(param_1 + 8);
  }
  if (iVar7 == 3) {
    uVar3 = param_1;
    func_0x00010c065f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd4e40();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      uVar3 = param_1;
      func_0x00010c065f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c121160();
      uVar8 = uVar4 + uVar8;
      _objc_release(uVar3);
    }
    uVar3 = param_1;
    func_0x00010c065f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd4e40();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      func_0x00010c27ab80(param_1);
    }
    iVar7 = *(int *)(param_1 + 8);
  }
  if (iVar7 == 4) {
    uVar3 = param_1;
    func_0x00010bfd71e0();
    if ((uVar3 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110f768f8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c25d1c0(param_1);
      puVar1 = puVar2;
      func_0x00010bf64920(puVar2,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    func_0x00010c1212c0(param_1,param_2,puVar1,param_3 + uVar8,param_4 - uVar8);
    uVar8 = param_1 + uVar8;
    _objc_release(puVar1);
  }
  return uVar8;
}



/* Entry: 10b718a98; end: 10b718b3b; -[AFHTTPBodyPart readData:intoBuffer:maxLength:] */

ulong FUN_10b718a98(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c08fa60();
  uVar3 = uVar3 - *(long *)(param_1 + 0x18);
  if (param_5 <= uVar3) {
    uVar3 = param_5;
  }
  func_0x00010bfc3360(param_3,param_2,param_4,uVar4,uVar3);
  uVar1 = *(long *)(param_1 + 0x18) + uVar3;
  *(ulong *)(param_1 + 0x18) = uVar1;
  uVar2 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  if (uVar2 <= uVar1) {
    func_0x00010c27ab80(param_1);
  }
  return uVar3;
}



/* Entry: 10b718b3c; end: 10b718c7f; -[AFHTTPBodyPart transitionToNextPhase] */

undefined8 FUN_10b718b3c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c077480();
  _objc_release(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010c0f8fa0(param_1,param_2,PTR_s_transitionToNextPhase_11267c508,0,1);
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 1) {
      uVar5 = 2;
    }
    else if (iVar1 == 3) {
      lVar4 = param_1;
      func_0x00010c065f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf3d9e0();
      _objc_release(lVar4);
      uVar5 = 4;
    }
    else if (iVar1 == 2) {
      lVar4 = param_1;
      func_0x00010c065f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14fde0(lVar4,param_2,puVar2,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
      _objc_release(puVar2);
      _objc_release(lVar4);
      lVar4 = param_1;
      func_0x00010c065f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e8e20();
      _objc_release(lVar4);
      uVar5 = 3;
    }
    else {
      uVar5 = 1;
    }
    *(undefined4 *)(param_1 + 8) = uVar5;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return 1;
}



/* Entry: 10b718c80; end: 10b718d37; -[AFHTTPBodyPart copyWithZone:] */

undefined8 FUN_10b718c80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf00e40();
  func_0x00010bfee200();
  uVar2 = param_1;
  func_0x00010c25d1c0(param_1);
  func_0x00010c20e820(uVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010bfe02c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7b40(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf1ea60(param_1);
  func_0x00010c172ce0(uVar1,param_2,uVar2);
  func_0x00010bf1e9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172cc0(uVar1,param_2,param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b718d38; end: 10b718d3f; -[AFHTTPBodyPart stringEncoding] */

undefined8 FUN_10b718d38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b718d40; end: 10b718d47; -[AFHTTPBodyPart setStringEncoding:] */

void FUN_10b718d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b718d48; end: 10b718d4f; -[AFHTTPBodyPart headers] */

undefined8 FUN_10b718d48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b718d50; end: 10b718d7f; -[AFHTTPBodyPart setHeaders:] */

void FUN_10b718d50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b718d80; end: 10b718d87; -[AFHTTPBodyPart body] */

undefined8 FUN_10b718d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b718d88; end: 10b718db7; -[AFHTTPBodyPart setBody:] */

void FUN_10b718d88(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b718db8; end: 10b718dbf; -[AFHTTPBodyPart bodyContentLength] */

undefined8 FUN_10b718db8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b718dc0; end: 10b718dc7; -[AFHTTPBodyPart setBodyContentLength:] */

void FUN_10b718dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b718dc8; end: 10b718df7; -[AFHTTPBodyPart setInputStream:] */

void FUN_10b718dc8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b718df8; end: 10b718dff; -[AFHTTPBodyPart hasInitialBoundary] */

undefined1 FUN_10b718df8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10b718e00; end: 10b718e07; -[AFHTTPBodyPart setHasInitialBoundary:] */

void FUN_10b718e00(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b718e08; end: 10b718e0f; -[AFHTTPBodyPart hasFinalBoundary] */

undefined1 FUN_10b718e08(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 10b718e10; end: 10b718e17; -[AFHTTPBodyPart setHasFinalBoundary:] */

void FUN_10b718e10(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 10b718e18; end: 10b718e53; -[AFHTTPBodyPart .cxx_destruct] */

void FUN_10b718e18(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b718e54; end: 10b718ecb; -[AFNetworkActivityIndicatorManager dealloc] */

void FUN_10b718e54(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_11270a1c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b718ecc; end: 10b718ecf; -[AFNetworkActivityIndicatorManager setNetworkingActivityActionWithBlock:] */

void FUN_10b718ecc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cc030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNetworkActivityActionBlock__112650a30);
  return;
}



/* Entry: 10b718ed0; end: 10b718f2f; -[AFNetworkActivityIndicatorManager isNetworkActivityOccurring] */

bool FUN_10b718ed0(long param_1)

{
  long lVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = param_1;
  func_0x00010bef14e0(param_1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return 0 < lVar1;
}



/* Entry: 10b718f30; end: 10b71900b; -[AFNetworkActivityIndicatorManager setNetworkActivityIndicatorVisible:] */

void FUN_10b718f30(undefined *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  if ((byte)param_1[9] == param_3) {
    return;
  }
  func_0x00010c2a5c20(param_1,param_2,&PTR____CFConstantStringClassReference_110f76978);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  param_1[9] = (char)param_3;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010bf73800(param_1);
  puVar1 = param_1;
  func_0x00010c0d7720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    param_1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc0a0();
  }
  else {
    func_0x00010c0d7720();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b71900c; end: 10b719093; -[AFNetworkActivityIndicatorManager setActivityCount:] */

void FUN_10b71900c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b719094;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_48);
  return;
}



/* Entry: 10b719094; end: 10b71909b;  */

void FUN_10b719094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c284c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateCurrentStateForNetworkActi_11267ed48);
  return;
}



/* Entry: 10b71909c; end: 10b719147; -[AFNetworkActivityIndicatorManager incrementActivityCount] */

void FUN_10b71909c(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c2a5c20(param_1,param_2,&PTR____CFConstantStringClassReference_110f76998);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010bf73800(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b719148;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_48);
  return;
}



/* Entry: 10b719148; end: 10b71914f;  */

void FUN_10b719148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c284c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateCurrentStateForNetworkActi_11267ed48);
  return;
}



/* Entry: 10b719150; end: 10b719203; -[AFNetworkActivityIndicatorManager decrementActivityCount] */

void FUN_10b719150(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c2a5c20(param_1,param_2,&PTR____CFConstantStringClassReference_110f76998);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 < 2) {
    lVar1 = 1;
  }
  *(long *)(param_1 + 0x20) = lVar1 + -1;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010bf73800(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b719204;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_48);
  return;
}



/* Entry: 10b719204; end: 10b71920b;  */

void FUN_10b719204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c284c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateCurrentStateForNetworkActi_11267ed48);
  return;
}



/* Entry: 10b71920c; end: 10b71930f; -[AFNetworkActivityIndicatorManager networkRequestDidStart:] */

void FUN_10b71920c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010b719278();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfec350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_incrementActivityCount_1125d8a98);
    return;
  }
  return;
}



/* Entry: 10b719310; end: 10b71937b; -[AFNetworkActivityIndicatorManager networkRequestDidFinish:] */

void FUN_10b719310(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010b719278();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf67770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_decrementActivityCount_1125b7780);
    return;
  }
  return;
}



/* Entry: 10b71937c; end: 10b719403; -[AFNetworkActivityIndicatorManager updateCurrentStateForNetworkActivityChange] */

void FUN_10b71937c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c071800();
  if ((int)uVar1 == 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00010bf60240();
  if (uVar1 == 3) {
    uVar1 = param_1;
    func_0x00010c0788a0();
    if ((int)uVar1 == 0) {
      return;
    }
    uVar2 = 2;
  }
  else if (uVar1 == 2) {
    uVar1 = param_1;
    func_0x00010c0788a0();
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar2 = 3;
  }
  else {
    if (uVar1 != 0) {
      return;
    }
    uVar1 = param_1;
    func_0x00010c0788a0();
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c187b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCurrentState__11263f8f0,uVar2);
  return;
}



/* Entry: 10b719404; end: 10b7194b7; -[AFNetworkActivityIndicatorManager startActivationDelayTimer] */

void FUN_10b719404(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010bef0280();
  func_0x00010c270940(puVar1,param_2,param_1,PTR_s_activationDelayTimerFired_1125441a0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1623a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef02a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020(puVar1,param_2,param_1,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7194b8; end: 10b7194e7; -[AFNetworkActivityIndicatorManager activationDelayTimerFired] */

void FUN_10b7194b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c0788a0();
  uVar1 = 2;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c187b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCurrentState__11263f8f0,uVar1);
  return;
}



/* Entry: 10b7194e8; end: 10b7195bb; -[AFNetworkActivityIndicatorManager startCompletionDelayTimer] */

void FUN_10b7194e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x00010bf440a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010bf44080(param_1);
  func_0x00010c270940(puVar2,param_2,param_1,PTR_s_completionDelayTimerFired_1125441a8,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17fbc0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf440a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020(puVar2,param_2,param_1,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b7195bc; end: 10b7195c3; -[AFNetworkActivityIndicatorManager completionDelayTimerFired] */

void FUN_10b7195bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c187b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCurrentState__11263f8f0,0);
  return;
}



/* Entry: 10b7195c4; end: 10b7195f3; -[AFNetworkActivityIndicatorManager cancelActivationDelayTimer] */

void FUN_10b7195c4(undefined8 param_1)

{
  func_0x00010bef02a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b7195f4; end: 10b719623; -[AFNetworkActivityIndicatorManager cancelCompletionDelayTimer] */

void FUN_10b7195f4(undefined8 param_1)

{
  func_0x00010bf440a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b719624; end: 10b71962b; -[AFNetworkActivityIndicatorManager isEnabled] */

undefined1 FUN_10b719624(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b71962c; end: 10b719633; -[AFNetworkActivityIndicatorManager isNetworkActivityIndicatorVisible] */

undefined1 FUN_10b71962c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b719634; end: 10b71963b; -[AFNetworkActivityIndicatorManager activationDelay] */

undefined8 FUN_10b719634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b71963c; end: 10b719643; -[AFNetworkActivityIndicatorManager completionDelay] */

undefined8 FUN_10b71963c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b719644; end: 10b71964b; -[AFNetworkActivityIndicatorManager activityCount] */

undefined8 FUN_10b719644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b71964c; end: 10b719653; -[AFNetworkActivityIndicatorManager activationDelayTimer] */

undefined8 FUN_10b71964c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b719654; end: 10b719683; -[AFNetworkActivityIndicatorManager setActivationDelayTimer:] */

void FUN_10b719654(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b719684; end: 10b71968b; -[AFNetworkActivityIndicatorManager completionDelayTimer] */

undefined8 FUN_10b719684(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b71968c; end: 10b7196bb; -[AFNetworkActivityIndicatorManager setCompletionDelayTimer:] */

void FUN_10b71968c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7196bc; end: 10b7196c3; -[AFNetworkActivityIndicatorManager networkActivityActionBlock] */

undefined8 FUN_10b7196bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b7196c4; end: 10b7196cb; -[AFNetworkActivityIndicatorManager setNetworkActivityActionBlock:] */

void FUN_10b7196c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b7196cc; end: 10b7196d3; -[AFNetworkActivityIndicatorManager currentState] */

undefined8 FUN_10b7196cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b7196d4; end: 10b71970f; -[AFNetworkActivityIndicatorManager .cxx_destruct] */

void FUN_10b7196d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10b719710; end: 10b7197c7; +[ZZArchiveEntry archiveEntryWithFileName:compress:dataBlock:] */

void FUN_10b719710(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09640(param_1,param_2,param_3,0x81a4,puVar1,-(param_4 & 1),param_5,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7197c8; end: 10b71987f; +[ZZArchiveEntry archiveEntryWithFileName:compress:streamBlock:] */

void FUN_10b7197c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09640(param_1,param_2,param_3,0x81a4,puVar1,-(param_4 & 1),0,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b719880; end: 10b719937; +[ZZArchiveEntry archiveEntryWithFileName:compress:dataConsumerBlock:] */

void FUN_10b719880(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09640(param_1,param_2,param_3,0x81a4,puVar1,-(param_4 & 1),0,0,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b719938; end: 10b7199cf; +[ZZArchiveEntry archiveEntryWithDirectoryName:] */

void FUN_10b719938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_3);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09640(param_1,param_2,param_3,0x41ed,puVar1,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7199d0; end: 10b719aab; +[ZZArchiveEntry archiveEntryWithFileName:fileMode:lastModified:compressionLevel:dataBlock:streamBlock:dataConsumerBlock:] */

void FUN_10b7199d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0638;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c012d00();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b719aac; end: 10b719ab3; -[ZZArchiveEntry compressed] */

undefined8 FUN_10b719aac(void)

{
  return 0;
}



/* Entry: 10b719ab4; end: 10b719abb; -[ZZArchiveEntry lastModified] */

undefined8 FUN_10b719ab4(void)

{
  return 0;
}



/* Entry: 10b719abc; end: 10b719ac3; -[ZZArchiveEntry crc32] */

undefined8 FUN_10b719abc(void)

{
  return 0;
}



/* Entry: 10b719ac4; end: 10b719acb; -[ZZArchiveEntry compressedSize] */

undefined8 FUN_10b719ac4(void)

{
  return 0;
}



/* Entry: 10b719acc; end: 10b719ad3; -[ZZArchiveEntry uncompressedSize] */

undefined8 FUN_10b719acc(void)

{
  return 0;
}



/* Entry: 10b719ad4; end: 10b719adb; -[ZZArchiveEntry fileMode] */

undefined8 FUN_10b719ad4(void)

{
  return 0;
}



/* Entry: 10b719adc; end: 10b719b03; -[ZZArchiveEntry fileName] */

void FUN_10b719adc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf93780();
                    /* WARNING: Could not recover jumptable at 0x00010bfacef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fileNameWithEncoding__1125c8d60,uVar1);
  return;
}



/* Entry: 10b719b04; end: 10b719b0b; -[ZZArchiveEntry rawFileName] */

undefined8 FUN_10b719b04(void)

{
  return 0;
}



/* Entry: 10b719b0c; end: 10b719b13; -[ZZArchiveEntry encoding] */

undefined8 FUN_10b719b0c(void)

{
  return 0;
}



/* Entry: 10b719b14; end: 10b719b1b; -[ZZArchiveEntry newStreamWithError:] */

undefined8 FUN_10b719b14(void)

{
  return 0;
}



/* Entry: 10b719b1c; end: 10b719b23; -[ZZArchiveEntry check:] */

undefined8 FUN_10b719b1c(void)

{
  return 1;
}



/* Entry: 10b719b24; end: 10b719b2b; -[ZZArchiveEntry fileNameWithEncoding:] */

undefined8 FUN_10b719b24(void)

{
  return 0;
}



/* Entry: 10b719b2c; end: 10b719b33; -[ZZArchiveEntry newDataWithError:] */

undefined8 FUN_10b719b2c(void)

{
  return 0;
}



/* Entry: 10b719b34; end: 10b719b3b; -[ZZArchiveEntry newDataProviderWithError:] */

undefined8 FUN_10b719b34(void)

{
  return 0;
}



/* Entry: 10b719b3c; end: 10b719b43; -[ZZArchiveEntry newWriterCanSkipLocalFile:] */

undefined8 FUN_10b719b3c(void)

{
  return 0;
}



/* Entry: 10b719b44; end: 10b719bb7; -[ZZDataChannel initWithData:] */

undefined1 * FUN_10b719b44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a1c8;
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



/* Entry: 10b719bb8; end: 10b719bbf; -[ZZDataChannel URL] */

undefined8 FUN_10b719bb8(void)

{
  return 0;
}



/* Entry: 10b719bc0; end: 10b719c1b; -[ZZDataChannel temporaryChannel:] */

void FUN_10b719bc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e0640;
  _objc_alloc(PTR_PTR_1126e0640);
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf63640(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008240(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b719c1c; end: 10b719c3b; -[ZZDataChannel replaceWithChannel:error:] */

undefined8 FUN_10b719c1c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c189480(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_3 + 8));
  return 1;
}



/* Entry: 10b719c3c; end: 10b719c4b; -[ZZDataChannel removeAsTemporary] */

void FUN_10b719c3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b719c4c; end: 10b719ccf; -[ZZDataChannel newInput:] */

undefined8 FUN_10b719c4c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_3 == (undefined8 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          *(undefined8 *)PTR__NSCocoaErrorDomain_1103453f8,0x104,
                          PTR____NSDictionary0__struct_11034ab58);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      uVar3 = 0;
      *param_3 = puVar2;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar3);
  }
  return uVar3;
}



/* Entry: 10b719cd0; end: 10b719cfb; -[ZZDataChannel newOutput:] */

void FUN_10b719cd0(void)

{
  _objc_alloc(PTR_PTR_1126e0648);
                    /* WARNING: Could not recover jumptable at 0x00010c008250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b719cfc; end: 10b719d07; -[ZZDataChannel .cxx_destruct] */

void FUN_10b719cfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b719d08; end: 10b719d7f; -[ZZDataChannelOutput initWithData:] */

undefined1 * FUN_10b719d08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270a1d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b719d80; end: 10b719d87; -[ZZDataChannelOutput offset] */

undefined4 FUN_10b719d80(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b719d88; end: 10b719d93; -[ZZDataChannelOutput seekToOffset:error:] */

undefined8 FUN_10b719d88(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return 1;
}



/* Entry: 10b719d94; end: 10b719e53; -[ZZDataChannelOutput writeData:error:] */

undefined8 FUN_10b719d94(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010c08fa60();
  uVar4 = param_3;
  func_0x00010c08fa60();
  uVar1 = *(uint *)(param_1 + 0x10) + (int)uVar4;
  if (uVar3 == *(uint *)(param_1 + 0x10)) {
    func_0x00010bf06ae0(*(undefined8 *)(param_1 + 8));
  }
  else {
    if (uVar3 < uVar1) {
      func_0x00010c1ba840(*(undefined8 *)(param_1 + 8));
    }
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010c0d3c60(lVar5);
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar6 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bf25f00();
    _memcpy(lVar5 + (ulong)uVar2,uVar6,uVar4);
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  _objc_release(param_3);
  return 1;
}



/* Entry: 10b719e54; end: 10b719e73; -[ZZDataChannelOutput truncateAtOffset:error:] */

undefined8 FUN_10b719e54(long param_1,undefined8 param_2,undefined4 param_3)

{
  func_0x00010c1ba840(*(undefined8 *)(param_1 + 8),param_2,param_3);
  return 1;
}



/* Entry: 10b719e74; end: 10b719e77; -[ZZDataChannelOutput close] */

void FUN_10b719e74(void)

{
  return;
}



/* Entry: 10b719e78; end: 10b719e83; -[ZZDataChannelOutput .cxx_destruct] */

void FUN_10b719e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b719e84; end: 10b719f57; -[ZZDeflateOutputStream initWithChannelOutput:compressionLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b719e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_11270a1d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112792454;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_3;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112792458) = param_4;
    *(undefined8 *)((long)puVar2 + (long)_DAT_11279245c) = 0;
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_112792460);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112792460) = 0;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar2 + (long)_DAT_112792464) = 0;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112792468);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[8] = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10b719f58; end: 10b719f6b; -[ZZDeflateOutputStream compressedSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b719f58(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112792468 + 0x28);
}



/* Entry: 10b719f6c; end: 10b719f7f; -[ZZDeflateOutputStream uncompressedSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b719f6c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112792468 + 0x10);
}



/* Entry: 10b719f80; end: 10b719f8f; -[ZZDeflateOutputStream streamStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b719f80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279245c);
}



/* Entry: 10b719f90; end: 10b719fbf; -[ZZDeflateOutputStream streamError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b719f90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112792460);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b719fc0; end: 10b71a01f; -[ZZDeflateOutputStream open] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b719fc0(long param_1)

{
  _deflateInit2_(param_1 + _DAT_112792468,*(undefined4 *)(param_1 + _DAT_112792458),8,0xfffffff1,8,0
                 ,&UNK_10f45dced,0x70);
  *(undefined8 *)(param_1 + _DAT_11279245c) = 2;
  return;
}


