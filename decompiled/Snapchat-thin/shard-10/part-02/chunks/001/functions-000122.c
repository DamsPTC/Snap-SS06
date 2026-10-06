/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c23b94; end: 107c2437b;  */

void FUN_107c23b94(undefined *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar8 = PTR_PTR_1126cc708;
  if (param_3 == 0) {
    if (param_2 == 0) {
LAB_107c24054:
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined *)0x0;
      bVar9 = true;
    }
    else {
      _objc_retain(param_2);
      _objc_opt_new(puVar8);
      lVar2 = param_2;
      func_0x00010bfb57e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b20(puVar8);
      _objc_release(lVar2);
      lVar2 = param_2;
      func_0x00010c11b080(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c140(puVar8);
      _objc_release(lVar2);
      lVar2 = param_2;
      func_0x00010bf68960(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18a720(puVar8);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = param_2;
      func_0x00010bfad760(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c0ae0(puVar8);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = param_2;
      func_0x00010bfe4220(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9180(puVar8);
      _objc_release(lVar3);
      _objc_release(lVar2);
      func_0x00010c116ce0(param_2);
      func_0x00010c1c0a80(puVar8);
      lVar2 = param_2;
      func_0x00010bfe0ee0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e780(puVar8);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = param_2;
      func_0x00010bfe0e80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c170bc0(puVar8);
      _objc_release(lVar2);
      lVar2 = param_2;
      func_0x00010c2a4700(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225220(puVar8);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar2 = param_2;
      func_0x00010c112dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfe1180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e29e0(puVar8);
      _objc_release(puVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar4 = PTR_PTR_1126b64a0;
      _objc_opt_new();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c11b1e0();
      func_0x00010c14de00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b60(puVar4);
      _objc_release(puVar7);
      lVar2 = param_2;
      func_0x00010c11b3a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5ba0(puVar4);
      _objc_release(lVar2);
      lVar2 = param_2;
      func_0x00010bf25140(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      func_0x00010c1745a0(puVar4);
      _objc_release(lVar2);
      func_0x00010c1b4ca0(puVar4);
      func_0x00010c1b4cc0(puVar4);
      func_0x00010c1c73c0(puVar4);
      _objc_release(puVar8);
      if (puVar4 == (undefined *)0x0) goto LAB_107c24054;
      bVar9 = false;
      puVar8 = puVar4;
    }
    puVar7 = param_1;
    if (param_1 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b460();
    _objc_release(puVar6);
    if (param_1 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    goto joined_r0x000107c240f4;
  }
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126b64b8;
  if (param_2 == 0) {
    _objc_release(param_3);
LAB_107c24258:
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)0x0;
    bVar9 = true;
  }
  else {
    _objc_retain(param_2);
    _objc_opt_new();
    lVar2 = param_3;
    func_0x00010c237cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201be0(puVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c238a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cafa0(puVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c236fc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c140(puVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c237b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e780(puVar4);
    _objc_release(lVar2);
    func_0x00010c23aa60();
    func_0x00010c2021e0(puVar4);
    lVar2 = param_2;
    func_0x00010bf25140(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174420(puVar4);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c116fc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d74a0(puVar4);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfe4220(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9180(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c116ce0(param_3);
    func_0x00010c1e4300(puVar4);
    func_0x00010c20f460(puVar4);
    func_0x00010c1d5c40(puVar4);
    lVar2 = param_2;
    func_0x00010bef3720(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef51a0();
    func_0x00010c195360(puVar4);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c2a4700(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar3 = lVar2;
    func_0x00010beec820(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225220(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_3);
    if (puVar4 == (undefined *)0x0) goto LAB_107c24258;
    bVar9 = false;
    puVar8 = puVar4;
  }
  puVar7 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(puVar6);
  if (param_1 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
joined_r0x000107c240f4:
  if (bVar9) {
    _objc_release(puVar4);
  }
  _objc_release(puVar8);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_retain();
    puVar1 = param_1;
    func_0x00010c23cf60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c08fa60();
    _objc_release(puVar1);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 == (undefined *)0x0) {
      puVar8 = param_1;
      func_0x00010bfe8f00(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_1;
      func_0x00010bfe8f00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    _objc_retain(param_1);
    puVar1 = param_1;
    func_0x00010bfe8f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c23cf60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar7 = puVar1;
    func_0x00010c08fa60();
    if ((puVar7 == (undefined *)0x0) &&
       (puVar7 = puVar4, func_0x00010c08fa60(), puVar7 == (undefined *)0x0)) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar4;
      func_0x00010c08fa60();
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = PTR_PTR_1126d7340;
        _objc_alloc(PTR_PTR_1126d7340);
        func_0x00010c003920();
      }
      puVar6 = PTR_PTR_1126d5170;
      _objc_alloc(PTR_PTR_1126d5170);
      func_0x00010c052020();
      _objc_release(puVar7);
    }
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(param_1);
    puVar4 = PTR_PTR_1126d5178;
    _objc_alloc(PTR_PTR_1126d5178);
    func_0x00010bffa8c0();
    puVar1 = PTR_PTR_1126b4860;
    func_0x00010c258dc0(PTR_PTR_1126b4860);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c2437c; end: 107c24703;  */

void FUN_107c2437c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c23cf60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar2 == (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010bfe8f00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_1;
    func_0x00010bfe8f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_retain(param_1);
  puVar2 = param_1;
  func_0x00010bfe8f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c23cf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = puVar2;
  func_0x00010c08fa60();
  if ((puVar4 == (undefined *)0x0) &&
     (puVar4 = puVar3, func_0x00010c08fa60(), puVar4 == (undefined *)0x0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar3;
    func_0x00010c08fa60();
    if (puVar4 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126d7340;
      _objc_alloc(PTR_PTR_1126d7340);
      func_0x00010c003920();
    }
    puVar4 = PTR_PTR_1126d5170;
    _objc_alloc(PTR_PTR_1126d5170);
    func_0x00010c052020();
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126d5178;
  _objc_alloc(PTR_PTR_1126d5178);
  func_0x00010bffa8c0();
  puVar3 = PTR_PTR_1126b4860;
  func_0x00010c258dc0(PTR_PTR_1126b4860,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107c24704; end: 107c25adf;  */

void FUN_107c24704(undefined8 param_1,undefined *param_2,long param_3,long param_4,
                  undefined *param_5,uint param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  ulong uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puStack_148;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = param_2;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010afef61c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c112dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puStack_110 = puVar2;
    func_0x00010bfde980();
    FUN_107c1a108();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = puVar2;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = puVar1;
    func_0x00010c112dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = puVar2;
  func_0x00010847bdd8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c26e920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf28ba0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = puVar2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar7;
    func_0x00010bf28ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    _objc_retain(puVar4);
    puStack_108 = puVar4;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c26e920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b45a0();
  puVar6 = puVar3;
  if (puVar5 == (undefined *)0x1) {
    puVar5 = puVar1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b4680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08fa60();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    if (puVar7 != (undefined *)0x0) {
      puVar4 = puVar1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c0b4680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      goto LAB_107c249a8;
    }
  }
  else {
LAB_107c249a8:
    _objc_release(puVar4);
    puVar3 = puVar6;
  }
  puVar4 = puVar3;
  if (param_4 != 0) {
    func_0x00010bdc10a0(param_4);
    FUN_107c25ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar3 = puVar4;
  func_0x00010c08fa60();
  puStack_118 = PTR_PTR_1126b4860;
  if (puVar3 == (undefined *)0x0) {
    puStack_120 = (undefined *)0x0;
    puStack_118 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fde60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puStack_120 = PTR_PTR_1126c21e0;
    func_0x00010c26e400();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(param_3);
  puVar3 = param_5;
  FUN_107c25bb0(param_5,param_7);
  if ((int)puVar3 == 0) {
LAB_107c24b4c:
    puVar3 = puVar1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf1c4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar5);
      _objc_release(puVar3);
LAB_107c24d3c:
      puVar3 = puVar1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c23cf60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c08fa60();
      if (puVar6 == (undefined *)0x0) {
        puVar6 = puVar1;
        func_0x00010c26e920();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bfe8f00();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = puVar7;
        func_0x00010c08fa60();
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar3);
        if (puVar25 == (undefined *)0x0) {
          puVar3 = puStack_108;
          func_0x00010bf28aa0(puStack_108);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          _objc_release(puVar3);
          puStack_100 = (undefined *)0x0;
          puStack_128 = (undefined *)0x0;
          goto LAB_107c24e38;
        }
      }
      else {
        _objc_release(puVar5);
        _objc_release(puVar3);
      }
      puVar3 = puVar1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puStack_128 = puVar3;
      FUN_107c2437c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar1;
      func_0x00010c26e920();
      _objc_retainAutoreleasedReturnValue();
      puStack_100 = puVar3;
      func_0x000107c24568();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar8 = param_3;
      func_0x00010c08fa60();
      _objc_release(puVar5);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b4858;
      if (lVar8 == 0) goto LAB_107c24d3c;
      puVar5 = PTR_PTR_1126b19f8;
      func_0x00010bf81400();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1bb00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      puStack_128 = PTR_PTR_1126b4860;
      puVar5 = puVar1;
      func_0x00010c26e920(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf1c4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1aee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      puStack_100 = PTR_PTR_1126c21e0;
      puVar5 = puVar1;
      func_0x00010c26e920(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf1c4e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b19f8;
      func_0x00010bf81400();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26d840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar25);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
  }
  else {
    puVar3 = puVar2;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfad760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08fa60();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    if (puVar7 == (undefined *)0x0) goto LAB_107c24b4c;
    puVar3 = puVar2;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfad760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puVar6;
    FUN_107c25c64();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puStack_128 = (undefined *)0x0;
  }
LAB_107c24e38:
  puVar3 = puVar1;
  func_0x00010c26e920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b45a0();
  _objc_release(puVar3);
  puVar3 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = param_5;
  if (param_5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  if (param_2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar5 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar7 = param_2;
  func_0x000107c25cd4(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar25 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar9 = param_5;
  if (param_5 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(puVar10);
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar9);
  }
  if (param_2 == (undefined *)0x0) {
    _objc_release(puVar25);
  }
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar25 = puVar2;
  func_0x00010bfd5fc0();
  if ((int)puVar25 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    puVar25 = PTR_PTR_1126d7348;
    func_0x00010c13b3c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar9 = param_5;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c067ec0();
  _objc_release(puVar9);
  if ((int)puVar10 == 2) {
    uVar11 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar11;
    func_0x00010bf432e0();
    _objc_release(uVar11);
  }
  else {
    uVar24 = 0;
  }
  puVar9 = puVar2;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  func_0x00010bfb57e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  if (uVar24 == 2) {
    puStack_148 = puVar12;
    if ((param_6 & 1) == 0) {
      FUN_107c79228();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_107c794c0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (uVar24 == 0) {
    puVar9 = puVar1;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x00010bfe0440();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar13;
    if ((param_6 & 1) == 0) {
      FUN_107c79228();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_107c794c0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar13);
    _objc_release(puVar9);
  }
  else {
    puStack_148 = (undefined *)0x0;
  }
  puVar9 = PTR_PTR_1126d5a78;
  _objc_alloc();
  puVar13 = puVar1;
  func_0x00010c24b260(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003d00();
  _objc_release(puVar13);
  uVar26 = 0x3f800000;
  if ((int)puVar10 == 2) {
    uVar24 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43300();
    _objc_release(uVar24);
    uVar26 = param_1;
  }
  puVar10 = PTR_PTR_1126ca450;
  _objc_alloc();
  func_0x00010c042c60(0x3fe8000000000000,0x3fe8000000000000,uVar26);
  puVar13 = param_2;
  FUN_107c23a34(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126d5a28;
  _objc_alloc(PTR_PTR_1126d5a28);
  puVar15 = puVar2;
  func_0x00010c245680(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010c26e920();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010c0b4620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027aa0(puVar14);
  func_0x00010c2b31e0(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  func_0x00010c2b6020(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b32e0(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7b80(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2abce0(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afa80(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb020(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2000(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1fe0(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5f60(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c25b720(param_2);
  func_0x00010c2ba700(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar14 = puVar2;
  func_0x00010c245680(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c23ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c2af4e0(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  puVar14 = param_2;
  func_0x00010c25a160(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba4e0(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar14);
  func_0x00010c2ba440(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (puStack_108 != (undefined *)0x0) {
    func_0x00010c2a9cc0(puVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar14 = param_5;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c071ae0();
  _objc_release(puVar14);
  if ((int)puVar15 != 0) {
    puVar14 = puVar2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    if (puStack_100 == (undefined *)0x0) {
      puVar14 = puVar15;
      func_0x00010bf1ef80();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar14;
      func_0x00010c08fa60();
      _objc_release(puVar14);
      puVar14 = PTR_PTR_1126c21e0;
      if (puVar16 != (undefined *)0x0) {
        puVar16 = puVar15;
        func_0x00010c241220(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar15;
        func_0x00010bf1ef80(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26d8a0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bb020(puVar13);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar17);
        _objc_release(puVar16);
      }
    }
    _objc_retain(puVar13);
    _objc_release(puVar15);
    goto LAB_107c25998;
  }
  puVar14 = param_5;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c071ae0();
  puVar16 = param_5;
  if (((ulong)puVar15 & 1) == 0) {
    func_0x00010bfa4340();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c071ae0();
    if (((ulong)puVar17 & 1) != 0) goto LAB_107c256c4;
    _objc_release(puVar16);
    _objc_release(puVar14);
LAB_107c25734:
    puVar14 = puVar1;
    func_0x00010c26e920(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_2;
    func_0x00010c259740(param_2);
    puVar16 = puVar2;
    func_0x00010c25b900(puVar2);
    puVar17 = puVar2;
    func_0x00010c2387e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf984c0();
    puVar19 = puVar2;
    func_0x00010bfed580(puVar2);
    puVar20 = puVar2;
    func_0x00010c11af80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar14;
    func_0x000107c211ac(puVar14,puVar15,puVar16,puVar18,puVar19,puVar21,param_5,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar17);
    _objc_release(puVar14);
    func_0x00010c2b6560(puVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar22);
  }
  else {
LAB_107c256c4:
    uVar24 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar24;
    func_0x00010c23a7a0();
    _objc_release(uVar24);
    if (((ulong)puVar15 & 1) == 0) {
      _objc_release(puVar16);
      _objc_release(puVar14);
      if ((uVar11 & 1) != 0) goto LAB_107c25734;
    }
    else {
      _objc_release(puVar14);
      if ((int)uVar11 != 0) goto LAB_107c25734;
    }
  }
  puVar14 = puVar2;
  func_0x00010c2387e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar15 = puVar2;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar14 == (undefined *)0x0) {
    puVar14 = puVar15;
    func_0x00010bfb57e0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_2;
    func_0x00010c080120(param_2);
    FUN_107c23594(puVar13,param_2,puVar14,puVar16,param_5,param_9);
  }
  else {
    puVar14 = puVar2;
    func_0x00010c2387e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_2;
    func_0x00010c080120(param_2);
    puVar17 = param_2;
    func_0x00010c0794a0(param_2);
    puVar18 = param_2;
    FUN_107c23b94(param_2,puVar15,puVar14,puVar16,puVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar15);
    puVar14 = puVar2;
    func_0x00010c11af80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar2;
    func_0x00010c11af80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1414c0();
    FUN_107c25d14(puVar13,param_2,puVar15,puVar18,param_5,param_9,param_7);
    _objc_release(puVar16);
    _objc_release(puVar15);
    puVar15 = puVar18;
  }
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_retain(puVar13);
LAB_107c25998:
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puStack_148);
  _objc_release(puVar12);
  _objc_release(puVar25);
  _objc_release(0);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_release(puStack_100);
  _objc_release(puStack_128);
  _objc_release(puVar4);
  _objc_release(puStack_120);
  _objc_release(puStack_118);
  _objc_release(puStack_108);
  _objc_release(puVar1);
  _objc_release(puStack_110);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar23) {
    ___stack_chk_fail();
    _objc_retain();
    func_0x00010bf4bb00();
    puVar1 = param_2;
    func_0x00010c25ce40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c25ce40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 107c25ae0; end: 107c25baf;  */

void FUN_107c25ae0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf4bb00(param_1,param_2,&PTR____CFConstantStringClassReference_110dbff78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110df6378;
  if ((int)uVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbff78;
  }
  uVar2 = param_1;
  func_0x00010c25ce40(param_1,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110eb4058);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c25ce40(uVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107c25bb0; end: 107c25c63;  */

uint FUN_107c25bb0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010bf71a80(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c067e20(param_2);
  _objc_release(puVar2);
  _objc_release(param_2);
  uVar4 = param_1;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar5 = uVar4;
  func_0x00010c067ec0();
  uVar1 = 0;
  if ((int)uVar5 == 2) {
    uVar1 = (uint)(uVar3 >> 1) & 1;
  }
  _objc_release(uVar4);
  return uVar1;
}



/* Entry: 107c25c64; end: 107c25d13;  */

void FUN_107c25c64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c21e0;
    func_0x00010c26e400(PTR_PTR_1126c21e0,param_2,param_1,param_1,0,0,7,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107c25d14; end: 107c261f3;  */

void FUN_107c25d14(undefined8 param_1,undefined *param_2,ulong param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulong uVar27;
  undefined8 *puVar28;
  uint uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined *puVar33;
  undefined *puVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  undefined *puStack_468;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  long lStack_1e8;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar27 = param_3;
  puVar7 = param_4;
  puVar28 = param_5;
  uVar6 = param_6;
  lVar30 = param_7;
  uVar31 = param_8;
  _objc_retain();
  uVar29 = (uint)uVar6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010afef61c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    uVar1 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010afefbe8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (uVar4 == 0) goto LAB_107c25f6c;
    uVar1 = uVar4;
    func_0x00010c2a2900();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar1;
    func_0x00010c0741a0();
    if ((int)uVar35 == 0) {
      uVar35 = param_3;
      func_0x00010c0741a0();
      _objc_release(uVar1);
      _objc_release(uVar4);
      if ((uVar35 & 1) == 0) goto LAB_107c25f6c;
    }
    else {
      _objc_release(uVar1);
      _objc_release(uVar4);
    }
LAB_107c25fc4:
    uVar1 = param_3;
    FUN_107c6e9a0(param_3,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_2;
    uVar27 = uVar1;
    puVar7 = param_4;
    FUN_107c23870();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x00010c2b8f80(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar6 = param_8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf432a0();
      puVar7 = param_4;
      _objc_retain();
      func_0x000107c273c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b7d20(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x000107c7acd8();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      FUN_107c79d70(0x4028000000000000,0x402e000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b7d40(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar5);
      puVar9 = param_4;
      FUN_107c79d70(0x4031000000000000,0x4036000000000000,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      func_0x00010c2b6e00(puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
      func_0x00010c2aab20(param_1,puVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      func_0x00010c2acbc0(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(uVar6);
      puVar7 = param_5;
      func_0x00010c2b7da0(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(uVar1);
  }
  else {
    param_1 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uVar1 = uVar2;
    func_0x00010c245680();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = &uStack_140;
    puVar28 = auStack_100;
    uVar6 = 0;
    uVar4 = uVar1;
    func_0x00010bf52a60();
    uVar29 = (uint)uVar6;
    if (uVar4 != 0) {
      lVar36 = *plStack_130;
      do {
        uVar35 = 0;
        do {
          if (*plStack_130 != lVar36) {
            _objc_enumerationMutation(uVar1);
          }
          lVar37 = *(long *)(lStack_138 + uVar35 * 8);
          lVar3 = lVar37;
          func_0x00010c26e920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          uVar29 = (uint)uVar6;
          if (lVar3 != 0) {
            func_0x00010c26e920();
            _objc_retainAutoreleasedReturnValue();
            lVar36 = lVar37;
            func_0x00010c239600();
            _objc_release(lVar37);
            _objc_release(uVar1);
            if (lVar36 != 100) goto LAB_107c25ed0;
            goto LAB_107c25fc4;
          }
          uVar35 = uVar35 + 1;
        } while (uVar4 != uVar35);
        puVar7 = &uStack_140;
        puVar28 = auStack_100;
        uVar6 = 0;
        uVar4 = uVar1;
        func_0x00010bf52a60();
        uVar29 = (uint)uVar6;
      } while (uVar4 != 0);
    }
    _objc_release(uVar1);
LAB_107c25ed0:
    uVar1 = param_3;
    func_0x00010c0741a0();
    if ((uVar1 & 1) != 0) goto LAB_107c25fc4;
LAB_107c25f6c:
    uVar1 = param_3;
    func_0x00010bf3cd00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c236ac0();
    if ((int)uVar4 != 0) {
      _objc_release(uVar1);
      goto LAB_107c25fc4;
    }
    uVar4 = param_3;
    func_0x00010bf3cd00();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar4;
    func_0x00010c2674a0();
    _objc_release(uVar4);
    _objc_release(uVar1);
    if ((int)uVar35 != 0) goto LAB_107c25fc4;
  }
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(uVar27);
  _objc_retain(puVar7);
  _objc_retain(puVar28);
  _objc_retain(lVar30);
  _objc_retain(uVar31);
  puVar5 = param_2;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010afefbe8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar8;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c08fa60();
  _objc_release(puVar5);
  if (puVar10 == (undefined *)0x0) {
    puStack_430 = (undefined *)0x0;
    puStack_428 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar8;
    func_0x00010bfe5b40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    if (puVar7 != (undefined8 *)0x0) {
      func_0x00010bdc10a0(puVar7);
      FUN_107c25ae0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    puStack_430 = PTR_PTR_1126b4860;
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fde60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puStack_428 = PTR_PTR_1126c21e0;
    func_0x00010c26e400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
  }
  puVar5 = puVar8;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x00010c112dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar5);
  if (puVar10 == (undefined *)0x0) {
    puStack_438 = puVar8;
    func_0x00010bfde980();
    FUN_107c1a108();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = puVar8;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    puStack_438 = puVar5;
    func_0x00010c112dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  puVar5 = puVar8;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c2a2900(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010847dea8(puVar5,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar5);
  puVar10 = puVar8;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar8;
  func_0x00010c2a2900();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar10);
  _objc_retain(puVar12);
  puStack_2e0 = &uStack_2e8;
  uStack_2e8 = 0;
  uStack_2d8 = 0x3032000000;
  pcStack_2d0 = FUN_107c274c4;
  uStack_2c8 = 0x107c274d4;
  uStack_2c0 = 0;
  uVar6 = 0;
  _objc_retain(puVar10);
  puVar5 = puVar10;
  func_0x00010bf52a60();
  lVar36 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar34 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar36) {
        _objc_enumerationMutation(puVar10);
      }
      uVar32 = *(undefined8 *)((long)puVar34 * 8);
      _objc_retain(puVar12);
      func_0x00010c0bebc0(uVar32);
      puVar33 = (undefined *)puStack_2e0[5];
      if (puVar33 != (undefined *)0x0) {
        _objc_retain(puVar33);
        _objc_release(puVar12);
        goto LAB_107c265fc;
      }
      _objc_release(puVar12);
      puVar34 = puVar34 + 1;
    } while (puVar5 != puVar34);
    puVar5 = puVar10;
    func_0x00010bf52a60();
  }
  puVar33 = (undefined *)0x0;
LAB_107c265fc:
  _objc_release(puVar10);
  __Block_object_dispose(&uStack_2e8,8);
  _objc_release(uStack_2c0);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar12);
  _objc_release(puVar10);
  puVar9 = puVar28;
  FUN_107c25bb0(puVar28,lVar30);
  if ((int)puVar9 == 0) {
LAB_107c26704:
    puVar5 = puVar11;
    func_0x00010bf1c4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010c08fa60();
    if (puVar10 == (undefined *)0x0) {
      _objc_release(puVar5);
LAB_107c268a4:
      if (puVar33 == (undefined *)0x0) {
        puVar5 = puVar11;
        func_0x00010bfe8f00();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar5;
        func_0x00010c08fa60();
        _objc_release(puVar5);
        if (puVar10 == (undefined *)0x0) {
          puStack_448 = (undefined *)0x0;
          goto LAB_107c266fc;
        }
        puStack_440 = puVar11;
        FUN_107c2437c();
        _objc_retainAutoreleasedReturnValue();
        puStack_448 = puVar11;
        func_0x000107c24568();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puStack_440 = puVar33;
        FUN_107c2437c();
        _objc_retainAutoreleasedReturnValue();
        puStack_448 = puVar33;
        func_0x000107c24568();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      uVar1 = uVar27;
      func_0x00010c08fa60();
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126b4858;
      if (uVar1 == 0) goto LAB_107c268a4;
      puVar10 = PTR_PTR_1126b19f8;
      func_0x00010bf81400();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_270 = puVar10;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1bb00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar10);
      puStack_440 = PTR_PTR_1126b4860;
      puVar10 = puVar11;
      func_0x00010bf1c4e0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1aee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puStack_448 = PTR_PTR_1126c21e0;
      puVar10 = puVar11;
      func_0x00010bf1c4e0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126b19f8;
      func_0x00010bf81400();
      _objc_retainAutoreleasedReturnValue();
      puVar34 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_278 = puVar12;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26d840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar34);
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar5);
    }
  }
  else {
    puVar5 = puVar8;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010bfad760();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar12;
    func_0x00010c08fa60();
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar5);
    if (puVar34 == (undefined *)0x0) goto LAB_107c26704;
    puVar5 = puVar8;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010bfad760();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puStack_448 = puVar12;
    FUN_107c25c64();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar5);
LAB_107c266fc:
    puStack_440 = (undefined *)0x0;
  }
  func_0x00010c0b45a0();
  ppuStack_298 = &PTR____CFConstantStringClassReference_110eb6238;
  puVar5 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_290 = &PTR____CFConstantStringClassReference_110eb62d8;
  puVar9 = puVar28;
  puStack_288 = puVar5;
  if (puVar28 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_280 = puVar9;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar28 == (undefined8 *)0x0) {
    _objc_release(puVar9);
  }
  if (param_2 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar12 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar34 = param_2;
  func_0x000107c25cd4(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2b8 = &PTR____CFConstantStringClassReference_110eb6238;
  puVar13 = param_2;
  if (param_2 == (undefined *)0x0) {
    puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_2b0 = &PTR____CFConstantStringClassReference_110eb62d8;
  puVar9 = puVar28;
  puStack_2a8 = puVar13;
  if (puVar28 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_2a0 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(puVar14);
  if (puVar28 == (undefined8 *)0x0) {
    _objc_release(puVar9);
  }
  if (param_2 == (undefined *)0x0) {
    _objc_release(puVar13);
  }
  _objc_release(puVar34);
  puVar34 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar13 = puVar8;
  func_0x00010bfe0440();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bfb57e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar14 = PTR_PTR_1126d5a78;
  _objc_alloc();
  puVar16 = puVar11;
  func_0x00010c23a520(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar8;
  func_0x00010c24b260(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003d00();
  _objc_release(puVar17);
  _objc_release(puVar16);
  puVar9 = puVar28;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar9;
  func_0x00010c067ec0();
  _objc_release(puVar9);
  if ((int)puVar18 == 2) {
    lVar36 = lVar30;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar36;
    func_0x00010bf432e0();
    _objc_release(lVar36);
    if (lVar3 == 2) {
      puStack_468 = puVar15;
      if ((uVar29 & 1) == 0) {
        FUN_107c79228();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        FUN_107c794c0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      if (lVar3 == 0) goto LAB_107c26c2c;
      puStack_468 = (undefined *)0x0;
    }
  }
  else {
LAB_107c26c2c:
    puStack_468 = puVar13;
    if ((uVar29 & 1) == 0) {
      FUN_107c79228();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_107c794c0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar32 = 0x3f800000;
    if ((int)puVar18 != 2) goto LAB_107c26cd0;
  }
  lVar36 = lVar30;
  func_0x00010c269d40(lVar30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43300();
  _objc_release(lVar36);
  uVar32 = uVar6;
LAB_107c26cd0:
  puVar16 = PTR_PTR_1126ca450;
  _objc_alloc();
  func_0x00010c042c60(0x3fe8000000000000,0x3fe8000000000000,uVar32);
  puVar17 = param_2;
  FUN_107c23a34();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126d5a28;
  _objc_alloc(PTR_PTR_1126d5a28);
  func_0x00010c027aa0();
  func_0x00010c2b31e0(puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar19);
  func_0x00010c2b6020(puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b32e0(puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7b80(puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afa80(puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb020(puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2abce0(puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2000(puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1fe0(puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5f60(puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c25b720(param_2);
  func_0x00010c2ba700(puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar19 = param_2;
  func_0x00010c25a160(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba4e0(puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar19);
  func_0x00010c2ba440(puVar17);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar19 = puVar8;
  func_0x00010c245680(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar19;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar17);
  _objc_retain(puVar17);
  func_0x00010c0bebc0(puVar20);
  _objc_release(puVar20);
  _objc_release(puVar19);
  puVar9 = puVar28;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar9;
  func_0x00010c071ae0();
  _objc_release(puVar9);
  if ((int)puVar18 == 0) {
    puVar19 = param_2;
    func_0x00010c259740(param_2);
    puVar20 = puVar8;
    func_0x00010c25b900(puVar8);
    puVar21 = puVar8;
    func_0x00010c2387e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar21;
    func_0x00010bf984c0();
    puVar23 = puVar8;
    func_0x00010bfed580(puVar8);
    puVar24 = puVar8;
    func_0x00010c11af80(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar24;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar11;
    func_0x000107c211ac(puVar11,puVar19,puVar20,puVar22,puVar23,puVar25,puVar28,lVar30,
                        puVar14 != (undefined *)0x0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6560(puVar17);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(puVar21);
    puVar19 = puVar8;
    func_0x00010c11af80(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar8;
    func_0x00010c2387e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_2;
    func_0x00010c080120(param_2);
    puVar22 = param_2;
    func_0x00010c0794a0(param_2);
    puVar23 = param_2;
    FUN_107c23b94(param_2,puVar19,puVar20,puVar21,puVar22);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
    _objc_release(puVar19);
    puVar19 = puVar8;
    func_0x00010c11af80(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar8;
    func_0x00010c11af80(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1414c0();
    FUN_107c25d14(puVar17,param_2,puVar20,puVar23,puVar28,param_9,lVar30);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_retain(puVar17);
    _objc_release(puVar23);
  }
  else {
    _objc_retain(puVar17);
  }
  _objc_release(puVar17);
  _objc_release(puVar17);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puStack_468);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(0);
  _objc_release(puVar34);
  _objc_release(puVar12);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puStack_448);
  _objc_release(puStack_440);
  _objc_release(puVar33);
  _objc_release(puVar11);
  _objc_release(puStack_438);
  _objc_release(puStack_428);
  _objc_release(puStack_430);
  _objc_release(puVar8);
  _objc_release(uVar31);
  _objc_release(lVar30);
  _objc_release(puVar28);
  _objc_release(puVar7);
  _objc_release(uVar27);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_2e8,8);
  __Unwind_Resume();
  func_0x00010c2af4e0(*(undefined8 *)(param_2 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107c261f4; end: 107c27283;  */

void FUN_107c261f4(undefined *param_1,long param_2,long param_3,undefined *param_4,uint param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puStack_308;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = param_1;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010afefbe8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puStack_2d0 = (undefined *)0x0;
    puStack_2c8 = (undefined *)0x0;
  }
  else {
    puVar1 = puVar2;
    func_0x00010bfe5b40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    if (param_3 != 0) {
      func_0x00010bdc10a0(param_3);
      FUN_107c25ae0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    puStack_2d0 = PTR_PTR_1126b4860;
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fde60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puStack_2c8 = PTR_PTR_1126c21e0;
    func_0x00010c26e400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar1 = puVar2;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c112dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puStack_2d8 = puVar2;
    func_0x00010bfde980();
    FUN_107c1a108();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = puVar2;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    puStack_2d8 = puVar1;
    func_0x00010c112dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = puVar2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2a2900(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010847dea8(puVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2a2900();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(puVar5);
  puStack_180 = &uStack_188;
  uStack_188 = 0;
  uStack_178 = 0x3032000000;
  pcStack_170 = FUN_107c274c4;
  uStack_168 = 0x107c274d4;
  uStack_160 = 0;
  uVar24 = 0;
  _objc_retain(puVar3);
  puVar1 = puVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar23 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar3);
      }
      uVar21 = *(undefined8 *)((long)puVar23 * 8);
      _objc_retain(puVar5);
      func_0x00010c0bebc0(uVar21);
      puVar22 = (undefined *)puStack_180[5];
      if (puVar22 != (undefined *)0x0) {
        _objc_retain(puVar22);
        _objc_release(puVar5);
        goto LAB_107c265fc;
      }
      _objc_release(puVar5);
      puVar23 = puVar23 + 1;
    } while (puVar1 != puVar23);
    puVar1 = puVar3;
    func_0x00010bf52a60();
  }
  puVar22 = (undefined *)0x0;
LAB_107c265fc:
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_188,8);
  _objc_release(uStack_160);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar1 = param_4;
  FUN_107c25bb0(param_4,param_6);
  if ((int)puVar1 == 0) {
LAB_107c26704:
    puVar1 = puVar4;
    func_0x00010bf1c4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c08fa60();
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar1);
LAB_107c268a4:
      if (puVar22 == (undefined *)0x0) {
        puVar1 = puVar4;
        func_0x00010bfe8f00();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010c08fa60();
        _objc_release(puVar1);
        if (puVar3 == (undefined *)0x0) {
          puStack_2e8 = (undefined *)0x0;
          goto LAB_107c266fc;
        }
        puStack_2e0 = puVar4;
        FUN_107c2437c();
        _objc_retainAutoreleasedReturnValue();
        puStack_2e8 = puVar4;
        func_0x000107c24568();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puStack_2e0 = puVar22;
        FUN_107c2437c();
        _objc_retainAutoreleasedReturnValue();
        puStack_2e8 = puVar22;
        func_0x000107c24568();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      lVar6 = param_2;
      func_0x00010c08fa60();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b4858;
      if (lVar6 == 0) goto LAB_107c268a4;
      puVar3 = PTR_PTR_1126b19f8;
      func_0x00010bf81400();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_110 = puVar3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1bb00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar3);
      puStack_2e0 = PTR_PTR_1126b4860;
      puVar3 = puVar4;
      func_0x00010bf1c4e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1aee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puStack_2e8 = PTR_PTR_1126c21e0;
      puVar3 = puVar4;
      func_0x00010bf1c4e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b19f8;
      func_0x00010bf81400();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_118 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26d840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
  }
  else {
    puVar1 = puVar2;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bfad760();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar5;
    func_0x00010c08fa60();
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if (puVar23 == (undefined *)0x0) goto LAB_107c26704;
    puVar1 = puVar2;
    func_0x00010c11af80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bfad760();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puStack_2e8 = puVar5;
    FUN_107c25c64();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
LAB_107c266fc:
    puStack_2e0 = (undefined *)0x0;
  }
  func_0x00010c0b45a0();
  ppuStack_138 = &PTR____CFConstantStringClassReference_110eb6238;
  puVar1 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_130 = &PTR____CFConstantStringClassReference_110eb62d8;
  puVar3 = param_4;
  puStack_128 = puVar1;
  if (param_4 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_120 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  if (param_1 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc();
  puVar23 = param_1;
  func_0x000107c25cd4(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_158 = &PTR____CFConstantStringClassReference_110eb6238;
  puVar7 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_150 = &PTR____CFConstantStringClassReference_110eb62d8;
  puVar8 = param_4;
  puStack_148 = puVar7;
  if (param_4 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_140 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(puVar9);
  if (param_4 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  if (param_1 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar23);
  puVar23 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar7 = puVar2;
  func_0x00010bfe0440();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfb57e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126d5a78;
  _objc_alloc();
  puVar10 = puVar4;
  func_0x00010c23a520(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010c24b260(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003d00();
  _objc_release(puVar11);
  _objc_release(puVar10);
  puVar10 = param_4;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c067ec0();
  _objc_release(puVar10);
  if ((int)puVar11 == 2) {
    lVar6 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar6;
    func_0x00010bf432e0();
    _objc_release(lVar6);
    if (lVar12 == 2) {
      puStack_308 = puVar9;
      if ((param_5 & 1) == 0) {
        FUN_107c79228();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        FUN_107c794c0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      if (lVar12 == 0) goto LAB_107c26c2c;
      puStack_308 = (undefined *)0x0;
    }
  }
  else {
LAB_107c26c2c:
    puStack_308 = puVar7;
    if ((param_5 & 1) == 0) {
      FUN_107c79228();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_107c794c0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar21 = 0x3f800000;
    if ((int)puVar11 != 2) goto LAB_107c26cd0;
  }
  lVar6 = param_6;
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43300();
  _objc_release(lVar6);
  uVar21 = uVar24;
LAB_107c26cd0:
  puVar10 = PTR_PTR_1126ca450;
  _objc_alloc();
  func_0x00010c042c60(0x3fe8000000000000,0x3fe8000000000000,uVar21);
  puVar11 = param_1;
  FUN_107c23a34();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126d5a28;
  _objc_alloc(PTR_PTR_1126d5a28);
  func_0x00010c027aa0();
  func_0x00010c2b31e0(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar13);
  func_0x00010c2b6020(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b32e0(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7b80(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2afa80(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb020(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2abce0(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2000(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1fe0(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5f60(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c25b720(param_1);
  func_0x00010c2ba700(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar13 = param_1;
  func_0x00010c25a160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba4e0(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar13);
  func_0x00010c2ba440(puVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010c245680(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar11);
  _objc_retain(puVar11);
  func_0x00010c0bebc0(puVar14);
  _objc_release(puVar14);
  _objc_release(puVar13);
  puVar13 = param_4;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c071ae0();
  _objc_release(puVar13);
  if ((int)puVar14 == 0) {
    puVar13 = param_1;
    func_0x00010c259740(param_1);
    puVar14 = puVar2;
    func_0x00010c25b900(puVar2);
    puVar15 = puVar2;
    func_0x00010c2387e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf984c0();
    puVar17 = puVar2;
    func_0x00010bfed580(puVar2);
    puVar18 = puVar2;
    func_0x00010c11af80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar4;
    func_0x000107c211ac(puVar4,puVar13,puVar14,puVar16,puVar17,puVar19,param_4,param_6,
                        puVar8 != (undefined *)0x0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6560(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar15);
    puVar13 = puVar2;
    func_0x00010c11af80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar2;
    func_0x00010c2387e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_1;
    func_0x00010c080120(param_1);
    puVar16 = param_1;
    func_0x00010c0794a0(param_1);
    puVar17 = param_1;
    FUN_107c23b94(param_1,puVar13,puVar14,puVar15,puVar16);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar13);
    puVar13 = puVar2;
    func_0x00010c11af80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010c11af80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1414c0();
    FUN_107c25d14(puVar11,param_1,puVar14,puVar17,param_4,param_8,param_6);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_retain(puVar11);
    _objc_release(puVar17);
  }
  else {
    _objc_retain(puVar11);
  }
  _objc_release(puVar11);
  _objc_release(puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puStack_308);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(0);
  _objc_release(puVar23);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puStack_2e8);
  _objc_release(puStack_2e0);
  _objc_release(puVar22);
  _objc_release(puVar4);
  _objc_release(puStack_2d8);
  _objc_release(puStack_2c8);
  _objc_release(puStack_2d0);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_188,8);
  __Unwind_Resume();
  func_0x00010c2af4e0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107c27284; end: 107c272a7;  */

void FUN_107c27284(long param_1,undefined8 param_2)

{
  func_0x00010c2af4e0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 107c272a8; end: 107c2734f;  */

void FUN_107c272a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c23ffa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c2af4e0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107c27350; end: 107c274c3;  */

uint FUN_107c27350(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010c27b7e0(), lVar1 != 3)) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c0741a0(param_2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 107c274c4; end: 107c274db;  */

void FUN_107c274c4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107c274dc; end: 107c27563;  */

void FUN_107c274dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000108473be4(param_4,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    lVar3 = param_4;
    func_0x00010c23cf60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar1 != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)(lVar3 + 0x28);
      *(long *)(lVar3 + 0x28) = param_4;
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107c27564; end: 107c27607;  */

void FUN_107c27564(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c26e920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c23cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010c26e920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar1;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107c27608; end: 107c276ab;  */

undefined8 FUN_107c27608(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb5758);
  func_0x00010b8169fc(0x3f95cfaac0000000);
  func_0x00010b816218();
  func_0x00010b8169fc(0x3f95cfaac0000000);
  func_0x00010b8169fc(0x3f95cfaac0000000);
  func_0x00010b816218();
  uVar1 = 0x4041800000000000;
  if ((int)param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 107c276ac; end: 107c276b3; -[SCDiscoverCardContainerContentViewControllerContext setTabBarItems:startingIndex:] */

void FUN_107c276ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c211330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTabBarItems__112661ef0);
  return;
}



/* Entry: 107c276b4; end: 107c27777; -[SCDiscoverCardContainerContentViewControllerContext setTabBarItems:] */

void FUN_107c276b4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    uVar3 = param_3;
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107c27764;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x10) = uVar3;
    _objc_release(uVar2);
    uVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(uVar3);
    func_0x00010bf31b80();
  }
  _objc_release(uVar3);
LAB_107c27764:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c27778; end: 107c277bf; -[SCDiscoverCardContainerContentViewControllerContext setLoadingContent:] */

void FUN_107c27778(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 8) == param_3) {
    return;
  }
  *(char *)(param_1 + 8) = (char)param_3;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf31b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c277c0; end: 107c277c7; -[SCDiscoverCardContainerContentViewControllerContext selectTabIndexIfPossible:] */

void FUN_107c277c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1590f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_selectTabIndexIfPossible_animate_112633e58,param_3,1);
  return;
}



/* Entry: 107c277c8; end: 107c27813; -[SCDiscoverCardContainerContentViewControllerContext selectTabIndexIfPossible:animated:] */

void FUN_107c277c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf31b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c27814; end: 107c2781b; -[SCDiscoverCardContainerContentViewControllerContext tabBarItems] */

undefined8 FUN_107c27814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c2781c; end: 107c27827; -[SCDiscoverCardContainerContentViewControllerContext layoutInsets] */

undefined8 FUN_107c2781c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c27828; end: 107c27833; -[SCDiscoverCardContainerContentViewControllerContext setLayoutInsets:] */

void FUN_107c27828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x28) = param_1;
  *(undefined8 *)(param_5 + 0x30) = param_2;
  *(undefined8 *)(param_5 + 0x38) = param_3;
  *(undefined8 *)(param_5 + 0x40) = param_4;
  return;
}



/* Entry: 107c27834; end: 107c2783b; -[SCDiscoverCardContainerContentViewControllerContext isLoadingContent] */

undefined1 FUN_107c27834(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107c2783c; end: 107c27843; -[SCDiscoverCardContainerContentViewControllerContext selectedTabIndex] */

undefined8 FUN_107c2783c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c27844; end: 107c2784b; -[SCDiscoverCardContainerContentViewControllerContext setSelectedTabIndex:] */

void FUN_107c27844(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 107c2784c; end: 107c27863; -[SCDiscoverCardContainerContentViewControllerContext delegate] */

void FUN_107c2784c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c27864; end: 107c2786f; -[SCDiscoverCardContainerContentViewControllerContext setDelegate:] */

void FUN_107c27864(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107c27870; end: 107c616d7; -[SCDiscoverCardContainerContentViewControllerContext .cxx_destruct] */

void FUN_107c27870(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107c616d8; end: 107c62043; -[SCDiscoverCardContainerView initWithFrame:containerViewConfiguration:customAppThemeProvider:appStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107c616d8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_f8 = PTR_PTR_1126fa3b0;
  puVar1 = &uStack_100;
  puVar3 = PTR_s_initWithFrame__1125e2948;
  uStack_100 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar20 = (long)_DAT_11276c194;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined8 *)((long)puVar1 + lVar20) = param_8;
    _objc_release(uVar2);
    lVar20 = (long)_DAT_11276c198;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined8 *)((long)puVar1 + lVar20) = param_9;
    _objc_release(uVar2);
    _objc_initWeak(auStack_108,puVar1);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c1a0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c1a0) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf13c20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf140c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed3b20(puVar1);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf13c20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0e0e80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = auStack_108;
    _objc_copyWeak(auStack_110);
    uVar9 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126c2c38;
    _objc_alloc();
    func_0x00010c014d40(param_1,param_2,param_3,param_4);
    lVar20 = (long)_DAT_11276c1a4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar6;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf31de0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar2);
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar20));
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar2;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar4;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    uStack_b0 = uVar5;
    func_0x00010bddbaa0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar5);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar4);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(puVar8);
    _objc_release(uVar7);
    lVar20 = param_7;
    func_0x00010bf20160();
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (lVar20 == 1) {
      dVar21 = param_1;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      puVar6 = PTR_PTR_1126b1198;
      _objc_alloc();
      func_0x00010c013de0(0,dVar21 + -76.0,param_1,0x4053000000000000);
      func_0x00010c16d4a0();
      puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(0x3ff0000000000000,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar15 = puVar14;
      func_0x00010bdc0fe0();
      puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
      puStack_d0 = puVar15;
      func_0x00010bf41680(0x3ff0000000000000,0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar15 = puVar16;
      func_0x00010bdc0fe0();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_c8 = puVar15;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar6;
      func_0x00010bfcd9c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17eb60();
      _objc_release(puVar15);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar14);
      puVar14 = puVar6;
      func_0x00010bfcd9c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209760(0x3fe0000000000000,0);
      _objc_release(puVar14);
      puVar14 = puVar6;
      func_0x00010bfcd9c0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c196020(0x3fe0000000000000,0x3ff0000000000000);
      _objc_release(puVar14);
      lVar20 = (long)_DAT_11276c1ac;
      _objc_retain(puVar6);
      uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
      *(undefined **)((long)puVar1 + lVar20) = puVar6;
      _objc_release(uVar2);
      func_0x00010befbb60(puVar1);
      _objc_release(puVar6);
    }
    else if (lVar20 == 2) {
      func_0x0001008522a8();
      func_0x00010bfe8220(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      puVar14 = puVar6;
      func_0x00010c25cbc0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      lVar20 = (long)_DAT_11276c1ac;
      _objc_retain();
      uVar2 = *(undefined8 *)((long)puVar1 + lVar20);
      *(undefined **)((long)puVar1 + lVar20) = puVar6;
      _objc_release(uVar2);
      func_0x00010befbb60(puVar1);
      _objc_release(puVar6);
      _objc_release(puVar14);
    }
    else {
      lVar20 = (long)_DAT_11276c1ac;
    }
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar20));
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar18 = *(long *)((long)puVar1 + lVar20);
    if (lVar18 != 0) {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_f0 = lVar19;
      uVar7 = *(undefined8 *)((long)puVar1 + lVar20);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar1;
      func_0x00010c2793a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_e8 = uVar2;
      uVar9 = *(undefined8 *)((long)puVar1 + lVar20);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar1;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_e0 = uVar4;
      uVar11 = *(undefined8 *)((long)puVar1 + lVar20);
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00(*(undefined8 *)((long)puVar1 + lVar20));
      _CGRectGetHeight();
      uVar5 = uVar11;
      func_0x00010bf49420();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_d8 = uVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar6);
      _objc_release(puVar14);
      _objc_release(uVar5);
      _objc_release(uVar11);
      _objc_release(uVar4);
      _objc_release(puVar12);
      _objc_release(uVar9);
      _objc_release(uVar2);
      _objc_release(puVar10);
      _objc_release(uVar7);
      _objc_release(lVar19);
      _objc_release(puVar8);
      _objc_release(lVar18);
    }
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume(param_7);
  _objc_retain(puVar3);
  puVar1 = (undefined8 *)(param_7 + 0x20);
  _objc_loadWeakRetained(puVar1);
  puVar6 = puVar3;
  func_0x00010bf140c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bed3b20(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar1);
  if (puVar3 != (undefined *)0x0) {
    puVar1 = (undefined8 *)(param_7 + 0x20);
    _objc_loadWeakRetained(puVar1);
    func_0x00010bede360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 107c62044; end: 107c620df;  */

void FUN_107c62044(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_2;
  func_0x00010bf140c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bed3b20(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bede360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107c620e0; end: 107c6215f; -[SCDiscoverCardContainerView _updateBackgroundImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c620e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c1a8);
  *(undefined8 *)(param_1 + _DAT_11276c1a8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c1a4);
  func_0x00010bf31de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c62160; end: 107c621df; -[SCDiscoverCardContainerView _cardBackgroundViewBottomConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c62160(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c1a4);
  func_0x00010bf1ff80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107c621e0; end: 107c62243; -[SCDiscoverCardContainerView _updatePullToRefreshView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c621e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = (long)_DAT_11276c1b0;
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c12c960();
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
    func_0x00010c294e60(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107c62244; end: 107c62507; -[SCDiscoverCardContainerView v11PullToRefreshView] */

/* WARNING: Possible PIC construction at 0x000107c624b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107c624b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c62244(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = (long)_DAT_11276c1b0;
  lVar13 = *(long *)(param_2 + lVar15);
  if (lVar13 == 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_11276c194);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfcd180();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126c2c08;
    _objc_alloc();
    func_0x00010c014580(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)(param_2 + lVar15);
    *(undefined **)(param_2 + lVar15) = puVar3;
    _objc_release(uVar4);
    _objc_retain(puVar3);
    func_0x00010c219b60(puVar3);
    func_0x00010befbb60(param_2);
    puVar5 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_2;
    func_0x00010c274200(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493c0(*(undefined8 *)(param_2 + _DAT_11276c1b4));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + _DAT_11276c1b8);
    *(undefined **)(param_2 + _DAT_11276c1b8) = puVar6;
    _objc_release(uVar4);
    _objc_release(lVar13);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_2;
    func_0x00010c08de00(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2793a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(param_2);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(lVar13);
    _objc_release(puVar6);
code_r0x00010c1cbe20:
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  lVar15 = lVar13;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = (long)_DAT_11276c1bc;
    lVar13 = *(long *)(lVar15 + lVar14);
    if (lVar13 == 0) {
      puVar3 = PTR_PTR_1126c2c18;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar4 = *(undefined8 *)(lVar15 + lVar14);
      *(undefined **)(lVar15 + lVar14) = puVar3;
      _objc_release(uVar4);
      _objc_retain(puVar3);
      func_0x00010c219b60(puVar3);
      func_0x00010befbb60(lVar15);
      puVar5 = puVar3;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar15;
      func_0x00010c274200(lVar15);
      _objc_retainAutoreleasedReturnValue();
      param_1 = *(undefined8 *)(lVar15 + _DAT_11276c1b4);
      puVar6 = puVar5;
      func_0x00010bf493c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar15 + _DAT_11276c1c0);
      *(undefined **)(lVar15 + _DAT_11276c1c0) = puVar6;
      _objc_release(uVar4);
      _objc_release(lVar13);
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar6 = puVar3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar15;
      func_0x00010c08de00(lVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar15;
      func_0x00010c2793a0(lVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(lVar11);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(lVar13);
      _objc_release(puVar6);
      lVar13 = *(long *)(lVar15 + lVar14);
    }
    lVar15 = lVar13;
    _objc_retain();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
      ___stack_chk_fail();
      *(undefined8 *)(lVar15 + _DAT_11276c18c) = param_1;
      goto code_r0x00010c1cbe20;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar13);
  return;
}



/* Entry: 107c62508; end: 107c6275b; -[SCDiscoverCardContainerView v11PullToRefreshActivityIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c62508(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_11276c1bc;
  lVar11 = *(long *)(param_2 + lVar12);
  if (lVar11 == 0) {
    puVar1 = PTR_PTR_1126c2c18;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_2 + lVar12);
    *(undefined **)(param_2 + lVar12) = puVar1;
    _objc_release(uVar2);
    _objc_retain(puVar1);
    func_0x00010c219b60(puVar1);
    func_0x00010befbb60(param_2);
    puVar3 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_2;
    func_0x00010c274200(param_2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(undefined8 *)(param_2 + _DAT_11276c1b4);
    puVar4 = puVar3;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + _DAT_11276c1c0);
    *(undefined **)(param_2 + _DAT_11276c1c0) = puVar4;
    _objc_release(uVar2);
    _objc_release(lVar11);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_2;
    func_0x00010c08de00(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    func_0x00010c2793a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar11);
    _objc_release(puVar4);
    lVar11 = *(long *)(param_2 + lVar12);
  }
  lVar12 = lVar11;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar12 + _DAT_11276c18c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107c6275c; end: 107c6276b; -[SCDiscoverCardContainerView setCardBackgroundTopInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6275c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276c18c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107c6276c; end: 107c629b7; -[SCDiscoverCardContainerView setContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6276c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar8 = (long)_DAT_11276c1c4;
  lVar2 = *(long *)(param_1 + lVar8);
  if (param_3 == lVar2) {
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == param_1) goto LAB_107c62974;
    lVar2 = *(long *)(param_1 + lVar8);
  }
  func_0x00010c12c960(lVar2);
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  *(long *)(param_1 + lVar8) = param_3;
  _objc_release(uVar3);
  if (*(long *)(param_1 + _DAT_11276c1ac) == 0) {
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar8));
  }
  else {
    func_0x00010c066fe0();
  }
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8),param_2,0);
  lVar2 = param_1;
  func_0x00010bde81e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11276c1c8;
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  *(long *)(param_1 + lVar9) = lVar2;
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar8);
  uStack_88 = uVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0(uVar5,param_2,lVar8);
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)(param_1 + lVar9);
  lVar9 = param_1;
  uStack_80 = uVar7;
  func_0x00010bde8160();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(lVar9);
  _objc_release(uVar7);
  _objc_release(lVar8);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar4);
  func_0x00010c1cbe20(param_1);
LAB_107c62974:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_3 + _DAT_11276c1c4);
  func_0x00010c274200(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149040(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107c629b8; end: 107c62a4f; -[SCDiscoverCardContainerView _contentViewTopConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c629b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c1c4);
  func_0x00010c274200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149040(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107c62a50; end: 107c62acf; -[SCDiscoverCardContainerView _contentViewBottomConstraint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c62a50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c1c4);
  func_0x00010bf1ff80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf493a0(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107c62ad0; end: 107c62b6f; -[SCDiscoverCardContainerView setLayoutInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c62ad0(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  ushort uVar2;
  
  pdVar1 = (double *)(param_5 + _DAT_11276c1b4);
  uVar2 = NEON_uminv(CONCAT26(-(ushort)(pdVar1[3] == param_4),
                              CONCAT24(-(ushort)(pdVar1[2] == param_3),
                                       CONCAT22(-(ushort)(pdVar1[1] == param_2),
                                                -(ushort)(*pdVar1 == param_1)))),2);
  if ((uVar2 & 1) == 0) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    pdVar1[2] = param_3;
    pdVar1[3] = param_4;
    func_0x00010c181140(*(undefined8 *)(param_5 + _DAT_11276c1b8));
    func_0x00010c181140(*pdVar1,*(undefined8 *)(param_5 + _DAT_11276c1c0));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 107c62b70; end: 107c62bb3; -[SCDiscoverCardContainerView setOverscrollPercentage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c62b70(double param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *(double *)(param_2 + _DAT_11276c190);
  dVar3 = ABS(dVar2 - param_1);
  dVar2 = ABS(param_1 + dVar2) * 2.220446049250313e-16;
  bVar1 = true;
  if ((2.2250738585072014e-308 <= dVar3) && (bVar1 = false, !NAN(dVar3) && !NAN(dVar2))) {
    bVar1 = dVar3 < dVar2;
  }
  if (bVar1) {
    return;
  }
  *(double *)(param_2 + _DAT_11276c190) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107c62bb4; end: 107c62c43; -[SCDiscoverCardContainerView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c62bb4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa3b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276c1a4);
  func_0x00010bf31a20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e600();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 107c62c44; end: 107c62c53; -[SCDiscoverCardContainerView cardBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c62c44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c1a4);
}



/* Entry: 107c62c54; end: 107c62c63; -[SCDiscoverCardContainerView contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c62c54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c1c4);
}



/* Entry: 107c62c64; end: 107c62c7b; -[SCDiscoverCardContainerView layoutInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c62c64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c1b4);
}



/* Entry: 107c62c7c; end: 107c62c8b; -[SCDiscoverCardContainerView cardBackgroundTopInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c62c7c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c18c);
}



/* Entry: 107c62c8c; end: 107c62c9b; -[SCDiscoverCardContainerView overscrollPercentage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c62c8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c190);
}



/* Entry: 107c62c9c; end: 107c62d8b; -[SCDiscoverCardContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c62c9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c1c4,0);
  _objc_storeStrong(param_1 + _DAT_11276c1a4,0);
  _objc_storeStrong(param_1 + _DAT_11276c198,0);
  _objc_storeStrong(param_1 + _DAT_11276c194,0);
  _objc_storeStrong(param_1 + _DAT_11276c1a0,0);
  _objc_storeStrong(param_1 + _DAT_11276c1a8,0);
  _objc_storeStrong(param_1 + _DAT_11276c1c8,0);
  _objc_storeStrong(param_1 + _DAT_11276c19c,0);
  _objc_storeStrong(param_1 + _DAT_11276c1ac,0);
  _objc_storeStrong(param_1 + _DAT_11276c1c0,0);
  _objc_storeStrong(param_1 + _DAT_11276c1b8,0);
  _objc_storeStrong(param_1 + _DAT_11276c1bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c1b0,0);
  return;
}



/* Entry: 107c62d8c; end: 107c62e87; -[SCDiscoverCardContainerViewController initWithContainerViewConfiguration:customAppThemeProvider:appStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107c62d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fa3b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276c1cc) = 0xf;
    lVar3 = (long)_DAT_11276c1d0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11276c1d4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11276c1d8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107c62e88; end: 107c62efb; -[SCDiscoverCardContainerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c62e88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d7368;
  _objc_alloc();
  func_0x00010c014180(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11276c1dc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107c62efc; end: 107c630ff; -[SCDiscoverCardContainerViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c62efc(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126fa3b8;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  dVar8 = param_1;
  dVar9 = param_2;
  dVar11 = param_3;
  dVar6 = param_4;
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c0f3ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  dVar10 = dVar9;
  dVar5 = dVar11;
  dVar7 = dVar6;
  _objc_release(lVar3);
  _objc_release(lVar2);
  dVar12 = param_2;
  if (param_2 <= dVar9) {
    dVar12 = dVar9;
  }
  dVar9 = param_3;
  if (param_3 <= dVar11) {
    dVar9 = dVar11;
  }
  dVar11 = param_4;
  if (param_4 <= dVar6) {
    dVar11 = dVar6;
  }
  func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
  if (dVar10 <= dVar12) {
    dVar10 = dVar12;
  }
  if (dVar5 <= dVar9) {
    dVar5 = dVar9;
  }
  if (dVar7 <= dVar11) {
    dVar7 = dVar11;
  }
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  _objc_release(lVar2);
  pdVar1 = (double *)(param_5 + _DAT_11276c1e0);
  if (dVar8 <= param_1) {
    dVar8 = param_1;
  }
  if (dVar10 <= param_2) {
    dVar10 = param_2;
  }
  if (dVar5 <= param_3) {
    dVar5 = param_3;
  }
  if (dVar7 <= param_4) {
    dVar7 = param_4;
  }
  *pdVar1 = dVar8;
  pdVar1[1] = dVar10;
  pdVar1[2] = dVar5;
  pdVar1[3] = dVar7;
  func_0x00010c1b9b60(*(undefined8 *)(param_5 + _DAT_11276c1dc));
  dVar8 = *pdVar1;
  dVar9 = pdVar1[1];
  dVar10 = pdVar1[2];
  dVar11 = pdVar1[3];
  lVar3 = param_5;
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010010fab4();
  lVar2 = lVar3;
  if ((int)lVar4 == 0) {
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010bf31ba0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c1b9b60(dVar8,dVar9,dVar10,dVar11,lVar3);
  _objc_release(lVar3);
  func_0x00010bed4e60(param_5);
  return;
}



/* Entry: 107c63100; end: 107c6327b; -[SCDiscoverCardContainerViewController setContentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c63100(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11276c1e4;
  lVar7 = *(long *)(param_1 + lVar9);
  if (param_3 == lVar7) {
    func_0x00010c0f3ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 == param_1) goto LAB_107c63264;
    lVar7 = *(long *)(param_1 + lVar9);
  }
  puVar2 = PTR_DAT_1126a59e8;
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010010fab4(lVar7,puVar2);
  lVar1 = lVar7;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar7);
  func_0x00010c179600(lVar1);
  _objc_release(lVar1);
  func_0x00010c12c8e0(*(undefined8 *)(param_1 + lVar9));
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  *(long *)(param_1 + lVar9) = param_3;
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126d7370;
  _objc_opt_new(PTR_PTR_1126d7370);
  func_0x00010c18b5e0();
  puVar2 = PTR_DAT_1126a59e8;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  _objc_retain(uVar8);
  uVar6 = uVar8;
  func_0x00010010fab4(uVar8,puVar2);
  uVar4 = uVar8;
  if ((int)uVar6 == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar8);
  func_0x00010c179600(uVar4);
  _objc_release(uVar4);
  func_0x00010bef7700(param_1);
  lVar7 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182b00(*(undefined8 *)(param_1 + _DAT_11276c1dc));
  _objc_release(lVar7);
  _objc_release(puVar5);
LAB_107c63264:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c6327c; end: 107c6328b; -[SCDiscoverCardContainerViewController sc_cardDimView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6327c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14c8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276c1e4),PTR_s_sc_cardDimView_112630c58);
  return;
}



/* Entry: 107c6328c; end: 107c6330b; -[SCDiscoverCardContainerViewController preferredStatusBarStyle] */

ulong FUN_107c6328c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    func_0x00010bf4dd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c106ec0();
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 107c6330c; end: 107c6338b; -[SCDiscoverCardContainerViewController prefersStatusBarHidden] */

ulong FUN_107c6330c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf4dd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c1070e0();
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 107c6338c; end: 107c6340b; -[SCDiscoverCardContainerViewController preferredScreenEdgesDeferringSystemGestures] */

ulong FUN_107c6338c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf4dd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c106e20();
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 107c6340c; end: 107c63477; -[SCDiscoverCardContainerViewController handleUserTriggeredNavigationAction:] */

void FUN_107c6340c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010010fab4();
  lVar1 = param_1;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(param_1);
  if (lVar1 != 0) {
    func_0x00010bfd30c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c63478; end: 107c6347b; -[SCDiscoverCardContainerViewController didTapNewTabToDismiss] */

void FUN_107c63478(void)

{
  return;
}



/* Entry: 107c6347c; end: 107c6355b; -[SCDiscoverCardContainerViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6347c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_5);
  func_0x00010bed4e60(param_3);
  lVar2 = (long)_DAT_11276c1dc;
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  func_0x00010c294e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0(param_5);
  func_0x00010bf4c7c0(param_5);
  dVar3 = -(param_2 + param_1);
  dVar5 = 0.0;
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  func_0x00010c1a7d00(uVar1);
  func_0x00010c14d680(PTR__OBJC_CLASS___UIScreen_1126aea10);
  dVar4 = dVar3;
  func_0x00010bf4cdc0(param_5);
  func_0x00010bf4c7c0(param_5);
  _objc_release(param_5);
  dVar3 = (dVar5 + dVar4) / dVar3;
  dVar5 = 1.0;
  if (dVar3 <= 1.0) {
    dVar5 = dVar3;
  }
  func_0x00010c1d7ac0(dVar5,*(undefined8 *)(param_3 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c6355c; end: 107c635a7; -[SCDiscoverCardContainerViewController scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6355c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c1dc);
  func_0x00010c294e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c291ce0();
  if ((int)uVar2 != 0) {
    func_0x00010c11baa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c635a8; end: 107c635af; -[SCDiscoverCardContainerViewController cardContainerView] */

undefined8 FUN_107c635a8(void)

{
  return 0;
}



/* Entry: 107c635b0; end: 107c635b3; -[SCDiscoverCardContainerViewController cardBackgroundViewDidUpdateTopLayoutInset] */

void FUN_107c635b0(void)

{
  return;
}



/* Entry: 107c635b4; end: 107c635b7; -[SCDiscoverCardContainerViewController cardContainerContentViewControllerContextDidUpdateTabBarItems:] */

void FUN_107c635b4(void)

{
  return;
}



/* Entry: 107c635b8; end: 107c63687; -[SCDiscoverCardContainerViewController cardContainerContentViewControllerContextDidUpdateLoadingContent:] */

void FUN_107c635b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107c63688;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107c63688; end: 107c636c7;  */

void FUN_107c63688(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c076c40(uVar2);
  func_0x00010be2b880(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c636c8; end: 107c636cb; -[SCDiscoverCardContainerViewController cardContainerContentViewControllerContext:wantsSelectTabIndexIfPossible:animated:] */

void FUN_107c636c8(void)

{
  return;
}



/* Entry: 107c636cc; end: 107c637ab; -[SCDiscoverCardContainerViewController pullToRefreshTriggered] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_107c636cc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11276c1dc;
  uVar2 = *(ulong *)(param_1 + lVar6);
  func_0x00010c294e40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06c0e0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c294e40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
    _objc_release(uVar4);
  }
  puVar1 = PTR_DAT_1126a59e8;
  uVar5 = *(ulong *)(param_1 + _DAT_11276c1e4);
  _objc_retain(uVar5);
  uVar2 = uVar5;
  func_0x00010010fab4(uVar5,puVar1);
  uVar3 = uVar5;
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  uVar2 = uVar3;
  _objc_opt_respondsToSelector(uVar3,PTR_s_refreshByPullToRefresh_112626e50);
  if ((uVar2 & 1) != 0) {
    func_0x00010c1250c0(uVar3);
  }
  _objc_release(uVar3);
  return (uint)uVar2 & 1;
}



/* Entry: 107c637ac; end: 107c637b3; -[SCDiscoverCardContainerViewController gestureRecognizerShouldBegin:] */

undefined8 FUN_107c637ac(void)

{
  return 1;
}



/* Entry: 107c637b4; end: 107c637bb; -[SCDiscoverCardContainerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_107c637b4(void)

{
  return 0;
}



/* Entry: 107c637bc; end: 107c6391b; -[SCDiscoverCardContainerViewController _updateCardBackgroundViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c637bc(undefined8 param_1,double param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  
  uVar1 = param_3;
  func_0x00010bf4dd20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010010fab4();
  uVar3 = uVar1;
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf4d4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar1 == 0) {
    uVar3 = param_3;
    func_0x00010bf4dd20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_class(PTR__OBJC_CLASS___UIScrollView_1126af098);
    uVar2 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar4);
    uVar3 = uVar1;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar1);
    if (uVar3 == 0) {
      param_2 = *(double *)(param_3 + (long)_DAT_11276c1e0);
      goto LAB_107c6389c;
    }
  }
  func_0x00010bf4cdc0(uVar1);
  param_2 = -param_2;
  _objc_release(uVar1);
LAB_107c6389c:
  param_2 = param_2 - *(double *)(param_3 + (long)_DAT_11276c1e8);
  dVar6 = param_2;
  if (param_2 <= -12.0) {
    dVar6 = -12.0;
  }
  lVar5 = (long)_DAT_11276c1dc;
  func_0x00010bf31a00(*(undefined8 *)(param_3 + lVar5));
  if (param_2 != dVar6) {
    func_0x00010c1795c0(dVar6,*(undefined8 *)(param_3 + lVar5));
    func_0x00010c1cbe20(*(undefined8 *)(param_3 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bf31a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_cardBackgroundViewDidUpdateTopLa_1125aa038)
    ;
    return;
  }
  return;
}



/* Entry: 107c6391c; end: 107c63963; -[SCDiscoverCardContainerViewController _handleLoadingContentUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c6391c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c1dc);
  func_0x00010c294e40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c63964; end: 107c63983; -[SCDiscoverCardContainerViewController parentController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c63964(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276c1ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c63984; end: 107c63997; -[SCDiscoverCardContainerViewController setParentController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c63984(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276c1ec,param_3);
  return;
}



/* Entry: 107c63998; end: 107c639a7; -[SCDiscoverCardContainerViewController contentViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c63998(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c1e4);
}



/* Entry: 107c639a8; end: 107c639b7; -[SCDiscoverCardContainerViewController panEnabledEdges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c639a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c1cc);
}



/* Entry: 107c639b8; end: 107c639c7; -[SCDiscoverCardContainerViewController setPanEnabledEdges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c639b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11276c1cc) = param_3;
  return;
}



/* Entry: 107c639c8; end: 107c639d7; -[SCDiscoverCardContainerViewController searchCardContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c639c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c1dc);
}



/* Entry: 107c639d8; end: 107c63a17; -[SCDiscoverCardContainerViewController setSearchCardContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c639d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c1dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c63a18; end: 107c63a2f; -[SCDiscoverCardContainerViewController layoutInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c63a18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c1e0);
}



/* Entry: 107c63a30; end: 107c63a3f; -[SCDiscoverCardContainerViewController contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c63a30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c1f0);
}



/* Entry: 107c63a40; end: 107c63a7f; -[SCDiscoverCardContainerViewController setContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c63a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276c1f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c63a80; end: 107c63a8f; -[SCDiscoverCardContainerViewController cardContentTopInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c63a80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276c1e8);
}



/* Entry: 107c63a90; end: 107c63a9f; -[SCDiscoverCardContainerViewController setCardContentTopInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c63a90(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276c1e8) = param_1;
  return;
}



/* Entry: 107c63aa0; end: 107c63b2b; -[SCDiscoverCardContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c63aa0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276c1f0,0);
  _objc_storeStrong(param_1 + _DAT_11276c1dc,0);
  _objc_storeStrong(param_1 + _DAT_11276c1e4,0);
  _objc_destroyWeak(param_1 + _DAT_11276c1ec);
  _objc_storeStrong(param_1 + _DAT_11276c1d8,0);
  _objc_storeStrong(param_1 + _DAT_11276c1d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276c1d0,0);
  return;
}



/* Entry: 107c63b2c; end: 107c63dff;  */

void FUN_107c63b2c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b56d8;
  _objc_opt_new(PTR_PTR_1126b56d8);
  func_0x00010c2bb3c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9bc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9b80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9b40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9ba0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a9b60(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b56e0;
  _objc_opt_new(PTR_PTR_1126b56e0);
  func_0x00010c2ab980(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab9a0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab900(0x4036000000000000,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab9c0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab880(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab8a0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b0c40;
  if (param_2 != 0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4024000000000000,0x4024000000000000,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2afa20(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar4);
    func_0x00010c2aba00(0x4024000000000000,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ab9e0(0x4024000000000000,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2abbe0(0x4000000000000000,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b40e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab940(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107c63e00; end: 107c6405b; -[SCDiscoverFeedSectionHeaderView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107c63e00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fa3c0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_68,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107c6405c;
    puStack_78 = &UNK_11084e7a0;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c1f4);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c1f4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_98,auStack_68);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c1f8);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c1f8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b56f8;
    _objc_opt_new();
    lVar4 = (long)_DAT_11276c1fc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c200);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c200) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b56f8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c204);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c204) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c208);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c208) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c20c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c20c) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return puVar1;
}



/* Entry: 107c6405c; end: 107c640ff;  */

void FUN_107c6405c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be62e80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107c64100; end: 107c641bf; -[SCDiscoverFeedSectionHeaderView setMyStoriesSectionInScreenPercentPublisher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c64100(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11276c210;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107c641a8;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    func_0x00010c1cbe20(param_1);
  }
LAB_107c641a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c641c0; end: 107c642a3; -[SCDiscoverFeedSectionHeaderView _resetMyStoriesSectionInScreenPercentObserving] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c641c0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11276c208));
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c210);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107c642a4; end: 107c64303;  */

void FUN_107c642a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf885a0(param_3);
  _objc_release(param_3);
  func_0x00010bee2340(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107c64304; end: 107c64547; -[SCDiscoverFeedSectionHeaderView _updateTitleByScrollPercent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c64304(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  
  dVar10 = param_1;
  func_0x00010bf20c00();
  puVar2 = PTR_PTR_1126d7378;
  uVar4 = *(ulong *)(param_5 + _DAT_11276c214);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_5 + _DAT_11276c204);
  uVar6 = *(undefined8 *)(param_5 + _DAT_11276c1fc);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  dVar8 = dVar10;
  _CGRectGetWidth(dVar10,param_2,param_3,param_4);
  dVar7 = dVar8;
  func_0x00010c08e880(uVar1);
  dVar8 = dVar8 - dVar7;
  uVar11 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(dVar8,0x7fefffffffffffff,uVar5);
  dVar12 = 0.013749999925494194;
  dVar7 = dVar12;
  func_0x00010b8169fc(0x3f8c28f5c0000000);
  dVar9 = dVar7;
  func_0x00010c08e880(uVar1);
  dVar9 = dVar9 + (1.0 - param_1) * -80.0;
  func_0x00010b8162e0(dVar9,dVar7,dVar8,uVar11);
  func_0x00010c1677c0(param_1,uVar5);
  func_0x00010b8166f8(dVar9,dVar7,dVar8,uVar11,param_5);
  func_0x00010c19f0e0(uVar5);
  _CGRectGetWidth(dVar10,param_2,param_3,param_4);
  dVar8 = dVar10;
  func_0x00010c08e880(uVar1);
  dVar10 = dVar10 - dVar8;
  uVar11 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(dVar10,0x7fefffffffffffff,uVar6);
  func_0x00010b8169fc(0x3f8c28f5c0000000);
  dVar8 = dVar12;
  func_0x00010c08e880(uVar1);
  dVar8 = dVar8 + param_1 * 120.0;
  func_0x00010b8162e0(dVar8,dVar12,dVar10,uVar11);
  func_0x00010c1677c0(1.0 - param_1,uVar6);
  func_0x00010b8166f8(dVar8,dVar12,dVar10,uVar11,param_5);
  func_0x00010c19f0e0(uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c64548; end: 107c64b4b; -[SCDiscoverFeedSectionHeaderView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c64548(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fa3c0;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  puVar2 = PTR_PTR_1126d7378;
  uVar6 = *(ulong *)(param_5 + _DAT_11276c214);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  uVar3 = uVar1;
  func_0x00010bf9ea00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c08fa60();
  _objc_release(uVar3);
  lVar9 = (long)_DAT_11276c204;
  uVar7 = *(undefined8 *)(param_5 + lVar9);
  if (uVar6 == 0) {
    func_0x00010c1a7f60(uVar7);
    lVar9 = (long)_DAT_11276c1fc;
  }
  else {
    dVar11 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar10 = dVar11;
    func_0x00010c08e880(uVar1);
    func_0x00010c23d5a0(dVar11 - dVar10,0x7fefffffffffffff,uVar7);
    func_0x00010b8169fc(0x3f8c28f5c0000000);
    func_0x00010c08e880(uVar1);
    func_0x00010b8162e0();
    func_0x00010b8166f8(param_5);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar9));
    func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar9));
    lVar9 = (long)_DAT_11276c1fc;
    func_0x00010c1677c0(0,*(undefined8 *)(param_5 + lVar9));
  }
  uVar7 = *(undefined8 *)(param_5 + lVar9);
  dVar11 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar10 = dVar11;
  func_0x00010c08e880(uVar1);
  dVar11 = dVar11 - dVar10;
  uVar14 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(uVar7);
  dVar12 = 0.013749999925494194;
  func_0x00010b8169fc();
  dVar10 = dVar12;
  func_0x00010c08e880(uVar1);
  func_0x00010b8162e0();
  dVar18 = dVar10;
  func_0x00010b8166f8(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar9));
  func_0x00010c08e880(uVar1);
  dVar17 = 0.0;
  uVar7 = 0xc034000000000000;
  func_0x00010c1a8c20(0,-dVar18,0,0xc034000000000000,*(undefined8 *)(param_5 + lVar9));
  lVar9 = (long)_DAT_11276c218;
  uVar3 = *(ulong *)(param_5 + lVar9);
  if ((uVar3 != 0) && (func_0x00010c074c20(), (uVar3 & 1) == 0)) {
    lVar4 = *(long *)(param_5 + _DAT_11276c20c);
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      dVar18 = dVar10;
      _CGRectGetMaxX(dVar10,dVar12,dVar11,uVar14);
      dVar15 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar17 = dVar15 - dVar18;
      func_0x00010c140cc0(uVar1);
      dVar17 = dVar17 - dVar15;
      dVar15 = param_1;
      _CGRectGetMidY(param_1,param_2,param_3,param_4);
      uVar7 = 0x403e000000000000;
      func_0x00010b8166f8(dVar18,dVar15 + -15.0 + -4.0,dVar17,0x403e000000000000,param_5);
      func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar9));
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
      func_0x00010c19f0e0(0,0,dVar17,*(undefined8 *)(param_5 + _DAT_11276c21c));
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
      func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276c220));
      uVar5 = *(undefined8 *)(param_5 + lVar9);
      func_0x00010c08c0e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(uVar5);
    }
  }
  lVar8 = (long)_DAT_11276c200;
  lVar4 = *(long *)(param_5 + lVar8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  if (lVar9 != 0) {
    uVar5 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _objc_release(uVar5);
    dVar18 = dVar10;
    _CGRectGetMinX(dVar10,dVar12,dVar11,uVar14);
    dVar15 = dVar10;
    _CGRectGetMaxY(dVar10,dVar12,dVar11,uVar14);
    dVar15 = dVar15 + 2.0;
    func_0x00010b8166f8(dVar18,dVar15,dVar17,uVar7,param_5);
    uVar5 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar18,dVar15,dVar17,uVar7);
    _objc_release(uVar5);
  }
  lVar9 = (long)_DAT_11276c1f8;
  uVar7 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  dVar18 = param_3;
  dVar16 = param_4;
  func_0x00010c23d5a0(param_3,param_4);
  _objc_release(uVar7);
  dVar18 = dVar18 + 2.0;
  dVar17 = dVar10;
  _CGRectGetMidY(dVar10,dVar12,dVar11,uVar14);
  dVar17 = dVar17 + dVar16 * -0.5;
  dVar15 = param_1;
  _CGRectGetMaxX(param_1,param_2,param_3,param_4);
  dVar13 = dVar15;
  func_0x00010c140cc0(uVar1);
  dVar15 = (dVar15 - dVar13) - dVar18;
  func_0x00010b8162e0(dVar15,dVar17,dVar18,dVar16);
  func_0x00010b8166f8(param_5);
  uVar7 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar15,dVar17,dVar18,dVar16);
  _objc_release(uVar7);
  _CGRectGetMaxX(dVar10,dVar12,dVar11,uVar14);
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  uVar7 = *(undefined8 *)(param_5 + _DAT_11276c1f4);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar10,param_1,0x4044000000000000,0x4044000000000000);
  _objc_release(uVar7);
  func_0x00010be934a0(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 107c64b4c; end: 107c64c13; -[SCDiscoverFeedSectionHeaderView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c64b4c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  puStack_38 = PTR_PTR_1126fa3c0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  puVar3 = (undefined1 *)plVar1;
  _objc_opt_isKindOfClass(plVar1,puVar2);
  puVar4 = (undefined1 *)plVar1;
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  _objc_retain(puVar4);
  if (puVar4 == (undefined1 *)0x0) {
    if (plVar1 == (long *)*(undefined1 **)(param_1 + _DAT_11276c218)) goto LAB_107c64bb8;
    puVar4 = (undefined1 *)plVar1;
    func_0x00010c070780();
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_107c64bcc;
    }
  }
  else {
LAB_107c64bb8:
    _objc_release(puVar4);
  }
  _objc_retain(plVar1);
  puVar4 = (undefined1 *)plVar1;
LAB_107c64bcc:
  _objc_release(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107c64c14; end: 107c650d3; -[SCDiscoverFeedSectionHeaderView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c64c14(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  lVar9 = (long)_DAT_11276c214;
  uVar7 = *(ulong *)(param_1 + lVar9);
  _objc_retain(param_3);
  _objc_retain(uVar7);
  uVar8 = param_3;
  if (param_3 == uVar7) {
    _objc_release(uVar7);
  }
  else {
    if (uVar7 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar7);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_107c650b4;
    }
    puVar2 = PTR_PTR_1126d7378;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar7 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(param_3);
    uVar7 = uVar8;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    *(ulong *)(param_1 + lVar9) = uVar7;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + _DAT_11276c1fc);
    uVar7 = uVar8;
    func_0x00010c113160(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar8;
    func_0x00010c112c60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c113180();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    if (uVar3 == 0) {
      func_0x000107c79218();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar9 = param_1;
    func_0x00010b8166c0(param_1);
    uVar5 = uVar7;
    FUN_107c63b2c(uVar7,uVar1,uVar4,lVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(uVar6);
    _objc_release(uVar5);
    if (uVar3 == 0) {
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar7);
    uVar7 = uVar8;
    func_0x00010bf9ea00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar7 != 0) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_11276c204);
      uVar7 = uVar8;
      func_0x00010bf9ea00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar8;
      func_0x00010c113180();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      if (uVar1 == 0) {
        func_0x000107c79218();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar9 = param_1;
      func_0x00010b8166c0(param_1);
      uVar4 = uVar7;
      FUN_107c63b2c(uVar7,0,uVar3,lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(uVar6);
      _objc_release(uVar4);
      if (uVar1 == 0) {
        _objc_release(uVar3);
      }
      _objc_release(uVar1);
      _objc_release(uVar7);
    }
    uVar7 = uVar8;
    func_0x00010bf13d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(uVar7);
    uVar7 = uVar8;
    func_0x00010c113060();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010c08fa60();
    _objc_release(uVar7);
    lVar10 = (long)_DAT_11276c200;
    lVar9 = *(long *)(param_1 + lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      func_0x00010c16b720();
      _objc_release(lVar9);
      uVar6 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    else {
      _objc_release();
      if (lVar9 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar10));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_1);
        _objc_release(uVar6);
      }
      uVar6 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar6);
      uVar7 = uVar8;
      func_0x00010c113060(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720();
      _objc_release(uVar6);
      _objc_release(uVar7);
      uVar6 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d620();
    }
    _objc_release(uVar6);
    lVar9 = (long)_DAT_11276c1f4;
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar6);
    uVar7 = uVar8;
    func_0x00010bf65fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar7 != 0) {
      lVar10 = *(long *)(param_1 + lVar9);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar10 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar9));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(param_1);
        _objc_release(uVar6);
      }
      uVar6 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar6);
    }
    func_0x00010bedf1c0(param_1);
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar8);
LAB_107c650b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c650d4; end: 107c6529f; +[SCDiscoverFeedSectionHeaderView sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107c650d4(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126d7378;
  _objc_opt_class(PTR_PTR_1126d7378);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  dVar8 = 0.013749999925494194;
  func_0x00010b8169fc(0x3f8c28f5c0000000);
  puVar2 = PTR_PTR_1126b56f8;
  uVar3 = uVar1;
  func_0x00010c113160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c112c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c113180();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  if (uVar5 == 0) {
    func_0x000107c79218();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar7 = uVar3;
  FUN_107c63b2c(uVar3,uVar4,uVar6,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d6e0(param_1,param_2,puVar2);
  _objc_release(uVar7);
  if (uVar5 == 0) {
    _objc_release(uVar6);
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c113060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08fa60();
  _objc_release(uVar3);
  dVar9 = 0.0;
  if (uVar4 != 0) {
    dVar9 = 12.0;
  }
  uVar3 = uVar1;
  func_0x00010c154e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    dVar9 = dVar9 + 4.0;
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar10._8_8_ = param_2 + dVar8 * 2.0 + dVar9;
  auVar10._0_8_ = param_1;
  return auVar10;
}



/* Entry: 107c652a0; end: 107c6578f; -[SCDiscoverFeedSectionHeaderView _updateSecondaryActionButtonWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c652a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_7);
  lVar7 = (long)_DAT_11276c1f8;
  uVar1 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar2 = param_7;
  func_0x00010c154e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_5 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_5 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_5,param_6,uVar1);
      _objc_release(uVar1);
    }
    uVar1 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_7;
    func_0x00010bf0df00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b780(uVar1,param_6,lVar2,0);
    _objc_release(lVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_7;
    func_0x00010c154e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010be92480(param_5,param_6,uVar1);
    }
    else {
      lVar2 = param_7;
      func_0x00010c154e60();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar2;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 == 0) {
        func_0x00010c1a9fc0(uVar1,param_6,0,0);
      }
      else {
        lVar7 = lVar2;
        func_0x00010bfe6ac0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9fc0(uVar1,param_6,lVar7,0);
        _objc_release(lVar7);
        uVar3 = uVar1;
        func_0x00010bfe90c0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c182220();
        _objc_release(uVar3);
        lVar7 = param_7;
        func_0x00010c113180();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 == 0) {
          lVar4 = lVar7;
          func_0x000107c79218();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c216160(uVar1,param_6,lVar4);
          _objc_release(lVar4);
        }
        else {
          func_0x00010c216160(uVar1,param_6,lVar7);
        }
        _objc_release(lVar7);
      }
      func_0x00010bf525a0(lVar2);
      uVar3 = uVar1;
      func_0x00010c08c0e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(param_1);
      _objc_release(uVar3);
      lVar7 = lVar2;
      func_0x00010bf13d40(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(uVar1,param_6,lVar7);
      _objc_release(lVar7);
      lVar7 = lVar2;
      func_0x00010c231dc0();
      uVar3 = uVar1;
      if ((int)lVar7 == 0) {
        func_0x00010c1fbe00(uVar1,param_6,0);
        func_0x00010bfe7600(lVar2);
        uVar6 = uVar1;
        func_0x00010b8166c0();
        uVar8 = param_2;
        if ((int)uVar6 == 0) {
          uVar8 = param_4;
          param_4 = param_2;
        }
        func_0x00010c1aa240(param_1,param_4,param_3,uVar8,uVar1);
        func_0x00010bf4c400(lVar2);
        uVar6 = uVar1;
        func_0x00010b8166c0();
        uVar9 = param_4;
        if ((int)uVar6 == 0) {
          uVar9 = uVar8;
          uVar8 = param_4;
        }
        func_0x00010c181e40(param_1,uVar8,param_3,uVar9,uVar1);
        func_0x00010bfe90c0(uVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar5 = param_5;
        func_0x00010b8166c0();
        uVar8 = 3;
        if ((int)uVar5 == 0) {
          uVar8 = 4;
        }
        func_0x00010c1fbe00(uVar1,param_6,uVar8);
        uVar5 = param_5;
        func_0x00010b8166c0();
        func_0x00010bfe7600(lVar2);
        uVar8 = param_4;
        if ((uVar5 & 1) == 0) {
          func_0x00010bfe7600(lVar2);
          func_0x00010bfe7600(lVar2);
          func_0x00010bfe7600(lVar2);
          uVar8 = param_2;
          param_2 = param_4;
        }
        func_0x00010c1aa240(param_1,param_2,param_3,uVar1);
        uVar5 = param_5;
        func_0x00010b8166c0();
        func_0x00010bf4c400(lVar2);
        if ((uVar5 & 1) == 0) {
          func_0x00010bf4c400(lVar2);
          func_0x00010bf4c400(lVar2);
          func_0x00010bf4c400(lVar2);
          param_2 = uVar8;
        }
        func_0x00010c181e40(param_1,param_2,param_3,uVar1);
        func_0x00010b8166c0();
        if ((int)param_5 == 0) {
          uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
          uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
          uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
          uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
          uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
          uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
        }
        else {
          _CGAffineTransformMakeScale(&uStack_90,0xbff0000000000000,0x3ff0000000000000);
        }
        func_0x00010bfe90c0(uVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c219960();
      _objc_release(uVar3);
      _objc_release(lVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 107c65790; end: 107c658cf; -[SCDiscoverFeedSectionHeaderView _resetButtonConfiguration:] */

void FUN_107c65790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010c1a9fc0(param_3,param_2,0,0);
  uVar2 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar3 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  func_0x00010c2163a0(uVar2,uVar3,uVar4,uVar5,param_3);
  func_0x00010c181e40(uVar2,uVar3,uVar4,uVar5,param_3);
  uVar1 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(uVar1);
  func_0x00010c16e440(param_3,param_2,0);
  func_0x00010c1fbe00(param_3,param_2,0);
  func_0x00010c2163a0(uVar2,uVar3,uVar4,uVar5,param_3);
  func_0x00010c181e40(uVar2,uVar3,uVar4,uVar5,param_3);
  uVar1 = param_3;
  func_0x00010bfe90c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(uVar1,param_2,&uStack_70);
  _objc_release(uVar1);
  return;
}



/* Entry: 107c658d0; end: 107c659af; -[SCDiscoverFeedSectionHeaderView _newDebugButton] */

undefined * FUN_107c658d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110eb40b8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(puVar1,param_2,puVar3,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c198080(puVar1,param_2,1);
  func_0x00010c1677c0(0x3fe0000000000000,puVar1);
  func_0x00010c1aa240(0x4014000000000000,0x4014000000000000,0x4014000000000000,0x4014000000000000,
                      puVar1);
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s__didTapDebugButton__112538ca8,0x40);
  return puVar1;
}



/* Entry: 107c659b0; end: 107c659ff; -[SCDiscoverFeedSectionHeaderView _newSecondaryActionButton] */

undefined * FUN_107c659b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0(PTR__OBJC_CLASS___UIButton_1126aec48,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbd60();
  return puVar1;
}


