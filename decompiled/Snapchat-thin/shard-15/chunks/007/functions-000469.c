/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bbbffa4; end: 10bbbffa7; -[SCADummyNestedChildConcreteClass getFieldNumberToFieldDict] */

void FUN_10bbbffa4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbbffa8; end: 10bbbffb3; -[SCADummyNestedChildConcreteClass toProtoWithAllowedFields:] */

void FUN_10bbbffa8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bbbffb4; end: 10bbbffbb; -[SCADummyNestedChildConcreteClass getPayloadIdentifier] */

undefined8 FUN_10bbbffb4(void)

{
  return 0xe37;
}



/* Entry: 10bbbffbc; end: 10bbc00d3; -[SCADummyNestedChildConcreteClassInAList initWithDictionary:] */

undefined1 * FUN_10bbbffbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d2a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf51e00();
      func_0x00010c1926a0(puVar1);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
  }
  puVar5 = (undefined1 *)puVar1;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar3 = (undefined1 *)0x0;
  if (puVar6 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10bbc00d4; end: 10bbc00eb; -[SCADummyNestedChildConcreteClassInAList setDummyNestedChildInAListConcreteClassString:] */

void FUN_10bbc00d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101b9b8,2,param_3,0);
  return;
}



/* Entry: 10bbc00ec; end: 10bbc00ef; -[SCADummyNestedChildConcreteClassInAList getFieldNumberToFieldDict] */

void FUN_10bbc00ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbc00f0; end: 10bbc00fb; -[SCADummyNestedChildConcreteClassInAList toProtoWithAllowedFields:] */

void FUN_10bbc00f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bbc00fc; end: 10bbc0103; -[SCADummyNestedChildConcreteClassInAList getPayloadIdentifier] */

undefined8 FUN_10bbc00fc(void)

{
  return 0x1538;
}



/* Entry: 10bbc0104; end: 10bbc021b; -[SCADummyNestedParentConcreteClass initWithDictionary:] */

undefined1 * FUN_10bbc0104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d2b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf51e00();
      func_0x00010c192840(puVar1);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
  }
  puVar5 = (undefined1 *)puVar1;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar3 = (undefined1 *)0x0;
  if (puVar6 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10bbc021c; end: 10bbc0233; -[SCADummyNestedParentConcreteClass setDummyNestedParentConcreteClassString:] */

void FUN_10bbc021c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101b9d8,2,param_3,0);
  return;
}



/* Entry: 10bbc0234; end: 10bbc0237; -[SCADummyNestedParentConcreteClass getFieldNumberToFieldDict] */

void FUN_10bbc0234(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbc0238; end: 10bbc0243; -[SCADummyNestedParentConcreteClass toProtoWithAllowedFields:] */

void FUN_10bbc0238(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bbc0244; end: 10bbc024b; -[SCADummyNestedParentConcreteClass getPayloadIdentifier] */

undefined8 FUN_10bbc0244(void)

{
  return 0xe38;
}



/* Entry: 10bbc024c; end: 10bbc0363; -[SCADummyNestedParentConcreteClassInAList initWithDictionary:] */

undefined1 * FUN_10bbc024c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d2b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf51e00();
      func_0x00010c192960(puVar1);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
  }
  puVar5 = (undefined1 *)puVar1;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar3 = (undefined1 *)0x0;
  if (puVar6 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10bbc0364; end: 10bbc037b; -[SCADummyNestedParentConcreteClassInAList setDummyNestedParentInAListConcreteClassString:] */

void FUN_10bbc0364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101b9f8,2,param_3,0);
  return;
}



/* Entry: 10bbc037c; end: 10bbc037f; -[SCADummyNestedParentConcreteClassInAList getFieldNumberToFieldDict] */

void FUN_10bbc037c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbc0380; end: 10bbc038b; -[SCADummyNestedParentConcreteClassInAList toProtoWithAllowedFields:] */

void FUN_10bbc0380(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bbc038c; end: 10bbc0393; -[SCADummyNestedParentConcreteClassInAList getPayloadIdentifier] */

undefined8 FUN_10bbc038c(void)

{
  return 0x1539;
}



/* Entry: 10bbc0394; end: 10bbc04ab; -[SCADummyParentConcreteClass initWithDictionary:] */

undefined1 * FUN_10bbc0394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d2c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf51e00();
      func_0x00010c192b00(puVar1);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
  }
  puVar5 = (undefined1 *)puVar1;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  puVar3 = (undefined1 *)0x0;
  if (puVar6 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10bbc04ac; end: 10bbc04c3; -[SCADummyParentConcreteClass setDummyParentConcreteClassString:] */

void FUN_10bbc04ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101ba18,2,param_3,0);
  return;
}



/* Entry: 10bbc04c4; end: 10bbc04c7; -[SCADummyParentConcreteClass getFieldNumberToFieldDict] */

void FUN_10bbc04c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbc04c8; end: 10bbc04d3; -[SCADummyParentConcreteClass toProtoWithAllowedFields:] */

void FUN_10bbc04c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bbc04d4; end: 10bbc04db; -[SCADummyParentConcreteClass getPayloadIdentifier] */

undefined8 FUN_10bbc04d4(void)

{
  return 0xe39;
}



/* Entry: 10bbc04dc; end: 10bbc104b; -[SCADummyParentOfChildConcreteClass initWithDictionary:] */

undefined8 * FUN_10bbc04dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uStack_3f8;
  undefined *puStack_3f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_3f0 = PTR_PTR_11270d2c8;
  puVar1 = &uStack_3f8;
  uStack_3f8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c1927c0(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c1927e0(puVar1);
      _objc_release(puVar4);
    }
    puVar4 = PTR_PTR_1126e2c30;
    _objc_alloc(PTR_PTR_1126e2c30);
    func_0x00010c00c560();
    func_0x00010c192800(puVar1);
    _objc_release(puVar4);
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010bf655e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192860(puVar1);
      _objc_release(puVar4);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c192880(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c1928a0(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c1928c0(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_10bae99ec();
      func_0x00010c1928e0(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c192900(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c192a00(puVar1);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c192a20(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      lVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010bf51e00();
      func_0x00010c192a40(puVar1);
      _objc_release(lVar6);
      _objc_release(lVar2);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(puVar4);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c192a60(puVar1);
      _objc_release(puVar4);
    }
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010be45600();
    _objc_release(lVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          puVar3 = puVar1;
          func_0x00010be45600();
          if (((ulong)puVar3 & 1) == 0) {
            puVar7 = PTR_PTR_1126e2c28;
            _objc_alloc(PTR_PTR_1126e2c28);
            func_0x00010c00c560();
            func_0x00010befa120(puVar4);
            _objc_release(puVar7);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      func_0x00010c192820(puVar1);
      _objc_release(puVar4);
    }
  }
  puVar8 = puVar1;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf529e0();
  puVar3 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar8);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return puVar3;
}



/* Entry: 10bbc104c; end: 10bbc109f; -[SCADummyParentOfChildConcreteClass setDummyNestedParentBoolean:] */

void FUN_10bbc104c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b0b8,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc10a0; end: 10bbc10e7; -[SCADummyParentOfChildConcreteClass setDummyNestedParentBooleanList:] */

void FUN_10bbc10a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b0d8,3,param_3,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc10e8; end: 10bbc112f; -[SCADummyParentOfChildConcreteClass setDummyNestedParentConcreteClass:] */

void FUN_10bbc10e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b0f8,4,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc1130; end: 10bbc11b7; -[SCADummyParentOfChildConcreteClass setDummyNestedParentDate:] */

/* WARNING: Possible PIC construction at 0x00010bbc1180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bbc1184) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10bbc1130(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c26f320(param_3);
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101b118,6,puVar1,5);
  return;
}



/* Entry: 10bbc11b8; end: 10bbc11ff; -[SCADummyParentOfChildConcreteClass setDummyNestedParentDateList:] */

void FUN_10bbc11b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b138,7,param_3,9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc1200; end: 10bbc1253; -[SCADummyParentOfChildConcreteClass setDummyNestedParentDouble:] */

void FUN_10bbc1200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b158,8,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc1254; end: 10bbc129b; -[SCADummyParentOfChildConcreteClass setDummyNestedParentDoubleList:] */

void FUN_10bbc1254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b178,9,param_3,9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc129c; end: 10bbc131b; -[SCADummyParentOfChildConcreteClass setDummyNestedParentEnum:] */

void FUN_10bbc129c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae99cc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101b198,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc131c; end: 10bbc1403; -[SCADummyParentOfChildConcreteClass setDummyNestedParentEnumList:] */

void FUN_10bbc131c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10bbc1404;
  puStack_40 = &UNK_1108709c0;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_58);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101b1b8,0xb,puVar2,10
                      ,uVar1);
  _objc_release(uVar1);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10bbc1404; end: 10bbc1457;  */

void FUN_10bbc1404(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10bae99ec(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc1458; end: 10bbc14ab; -[SCADummyParentOfChildConcreteClass setDummyNestedParentLong:] */

void FUN_10bbc1458(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b1d8,0xc,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc14ac; end: 10bbc14f3; -[SCADummyParentOfChildConcreteClass setDummyNestedParentLongList:] */

void FUN_10bbc14ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b1f8,0xd,param_3,
                      0xb);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc14f4; end: 10bbc150b; -[SCADummyParentOfChildConcreteClass setDummyNestedParentString:] */

void FUN_10bbc14f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101b218,0xe,param_3,0);
  return;
}



/* Entry: 10bbc150c; end: 10bbc1553; -[SCADummyParentOfChildConcreteClass setDummyNestedParentStringList:] */

void FUN_10bbc150c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b238,0xf,param_3,7
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc1554; end: 10bbc159b; -[SCADummyParentOfChildConcreteClass setDummyNestedParentConcreteClassList:] */

void FUN_10bbc1554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b258,0x10,param_3,
                      0xd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc159c; end: 10bbc17a3; -[SCADummyParentOfChildConcreteClass prepareDictionary:] */

void FUN_10bbc159c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar5 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
          func_0x00010bf0a640(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar4);
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = lVar1;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar1);
    func_0x00010c1d0640(param_3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar3 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  puStack_138 = PTR_PTR_11270d2c8;
  uStack_140 = param_1;
  _objc_msgSendSuper2(&uStack_140,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bbc17a4; end: 10bbc17a7; -[SCADummyParentOfChildConcreteClass getFieldNumberToFieldDict] */

void FUN_10bbc17a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbc17a8; end: 10bbc17b3; -[SCADummyParentOfChildConcreteClass toProtoWithAllowedFields:] */

void FUN_10bbc17a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,0);
  return;
}



/* Entry: 10bbc17b4; end: 10bbc17bb; -[SCADummyParentOfChildConcreteClass getPayloadIdentifier] */

undefined8 FUN_10bbc17b4(void)

{
  return 0xe3a;
}



/* Entry: 10bbc17bc; end: 10bbc1aab; -[SCADummyParentOfChildConcreteClassInAList initWithDictionary:] */

undefined1 * FUN_10bbc17bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d2d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c192920(puVar1);
      _objc_release(uVar2);
    }
    puVar4 = PTR_PTR_1126e2c38;
    _objc_alloc(PTR_PTR_1126e2c38);
    func_0x00010c00c560();
    func_0x00010c192940(puVar1);
    _objc_release(puVar4);
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c192980(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_10bae99ec();
      func_0x00010c1929a0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1929c0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bf51e00();
      func_0x00010c1929e0(puVar1);
      _objc_release(uVar5);
      _objc_release(uVar2);
    }
  }
  puVar6 = (undefined1 *)puVar1;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf529e0();
  puVar3 = (undefined1 *)0x0;
  if (puVar7 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10bbc1aac; end: 10bbc1aff; -[SCADummyParentOfChildConcreteClassInAList setDummyNestedParentInAListBoolean:] */

void FUN_10bbc1aac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b338,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc1b00; end: 10bbc1b47; -[SCADummyParentOfChildConcreteClassInAList setDummyNestedParentInAListConcreteClass:] */

void FUN_10bbc1b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b358,3,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc1b48; end: 10bbc1b9b; -[SCADummyParentOfChildConcreteClassInAList setDummyNestedParentInAListDouble:] */

void FUN_10bbc1b48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b378,4,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc1b9c; end: 10bbc1c1b; -[SCADummyParentOfChildConcreteClassInAList setDummyNestedParentInAListEnum:] */

void FUN_10bbc1b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae99cc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101b398,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc1c1c; end: 10bbc1c6f; -[SCADummyParentOfChildConcreteClassInAList setDummyNestedParentInAListLong:] */

void FUN_10bbc1c1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101b3b8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc1c70; end: 10bbc1c87; -[SCADummyParentOfChildConcreteClassInAList setDummyNestedParentInAListString:] */

void FUN_10bbc1c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101b3d8,7,param_3,0);
  return;
}



/* Entry: 10bbc1c88; end: 10bbc1d47; -[SCADummyParentOfChildConcreteClassInAList prepareDictionary:] */

void FUN_10bbc1c88(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(param_3);
    lVar2 = lVar1;
    func_0x00010bf0a640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_11270d2d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10bbc1d48; end: 10bbc1d4b; -[SCADummyParentOfChildConcreteClassInAList getFieldNumberToFieldDict] */

void FUN_10bbc1d48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbc1d4c; end: 10bbc1d57; -[SCADummyParentOfChildConcreteClassInAList toProtoWithAllowedFields:] */

void FUN_10bbc1d4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bbc1d58; end: 10bbc1d5f; -[SCADummyParentOfChildConcreteClassInAList getPayloadIdentifier] */

undefined8 FUN_10bbc1d58(void)

{
  return 0x153a;
}



/* Entry: 10bbc1d60; end: 10bbc288f; -[SCADummyParentOfChildEventWithAllFieldCombinations fromDictionary:] */

void FUN_10bbc1d60(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uStack_3f8;
  undefined *puStack_3f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_3f0 = PTR_PTR_11270d2d8;
  uStack_3f8 = param_1;
  _objc_msgSendSuper2(&uStack_3f8,PTR_s_fromDictionary__1125cc478,param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c192a80(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = param_1;
        func_0x00010be45600();
        if ((uVar2 & 1) == 0) {
          func_0x00010befa120(puVar3);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c192aa0(param_1);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126e2c40;
  _objc_alloc(PTR_PTR_1126e2c40);
  func_0x00010c00c560();
  func_0x00010c192ac0(param_1);
  _objc_release(puVar3);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = param_1;
        func_0x00010be45600();
        if ((uVar2 & 1) == 0) {
          puVar5 = PTR_PTR_1126e2c10;
          _objc_alloc(PTR_PTR_1126e2c10);
          func_0x00010c00c560();
          func_0x00010befa120(puVar3);
          _objc_release(puVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c192ae0(param_1);
    _objc_release(puVar3);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010bf655e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192b20(param_1);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = param_1;
        func_0x00010be45600();
        if ((uVar2 & 1) == 0) {
          func_0x00010befa120(puVar3);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c192b40(param_1);
    _objc_release(puVar3);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c192b60(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = param_1;
        func_0x00010be45600();
        if ((uVar2 & 1) == 0) {
          func_0x00010befa120(puVar3);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c192b80(param_1);
    _objc_release(puVar3);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10bae99ec();
    func_0x00010c192ba0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = param_1;
        func_0x00010be45600();
        if ((uVar2 & 1) == 0) {
          func_0x00010befa120(puVar3);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c192bc0(param_1);
    _objc_release(puVar3);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c192be0(param_1);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = param_1;
        func_0x00010be45600();
        if ((uVar2 & 1) == 0) {
          func_0x00010befa120(puVar3);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c192c00(param_1);
    _objc_release(puVar3);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bf51e00();
    func_0x00010c192c20(param_1);
    _objc_release(lVar6);
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        uVar2 = param_1;
        func_0x00010be45600();
        if ((uVar2 & 1) == 0) {
          func_0x00010befa120(puVar3);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c192c40(param_1);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10bbc2890; end: 10bbc28df; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentBoolean:] */

void FUN_10bbc2890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_11101b7d8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc28e0; end: 10bbc2923; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentBooleanList:] */

void FUN_10bbc28e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_11101b7f8,param_3,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc2924; end: 10bbc2967; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentConcreteClass:] */

void FUN_10bbc2924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_11101b818,param_3,6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc2968; end: 10bbc29ab; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentConcreteClassList:] */

void FUN_10bbc2968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_11101b838,param_3,0xd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc29ac; end: 10bbc2a2b; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentDate:] */

/* WARNING: Possible PIC construction at 0x00010bbc29f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bbc29fc) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10bbc29ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c26f320(param_3);
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_11101b858,puVar1,5);
  return;
}



/* Entry: 10bbc2a2c; end: 10bbc2a6f; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentDateList:] */

void FUN_10bbc2a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_11101b878,param_3,9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc2a70; end: 10bbc2abf; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentDouble:] */

void FUN_10bbc2a70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_11101b898,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc2ac0; end: 10bbc2b03; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentDoubleList:] */

void FUN_10bbc2ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_11101b8b8,param_3,9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc2b04; end: 10bbc2b7f; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentEnum:] */

void FUN_10bbc2b04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae99cc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_11101b8d8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc2b80; end: 10bbc2c63; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentEnumList:] */

void FUN_10bbc2b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10bbc2c64;
  puStack_40 = &UNK_1108709c0;
  puStack_38 = puVar2;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_58);
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_11101b8f8,puVar2,10,
                      uVar1);
  _objc_release(uVar1);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10bbc2c64; end: 10bbc2cb7;  */

void FUN_10bbc2c64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10bae99ec(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc2cb8; end: 10bbc2d07; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentLong:] */

void FUN_10bbc2cb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_11101b918,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc2d08; end: 10bbc2d4b; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentLongList:] */

void FUN_10bbc2d08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_11101b938,param_3,0xb);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc2d4c; end: 10bbc2d5f; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentString:] */

void FUN_10bbc2d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_11101b958,param_3,0);
  return;
}



/* Entry: 10bbc2d60; end: 10bbc2da3; -[SCADummyParentOfChildEventWithAllFieldCombinations setDummyParentStringList:] */

void FUN_10bbc2d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_11101b978,param_3,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc2da4; end: 10bbc2fab; -[SCADummyParentOfChildEventWithAllFieldCombinations prepareDictionary:] */

void FUN_10bbc2da4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *unaff_x22;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(puVar1);
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar5 = *plStack_120;
      do {
        puVar6 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(puVar1);
          }
          uVar3 = *(undefined8 *)(lStack_128 + (long)puVar6 * 8);
          func_0x00010bf0a640(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(unaff_x22);
          _objc_release(uVar3);
          puVar6 = puVar6 + 1;
        } while (puVar2 != puVar6);
        puVar2 = puVar1;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    func_0x00010c1d0640(param_3);
    _objc_release(unaff_x22);
  }
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c12d3e0(param_3);
    unaff_x22 = puVar1;
    func_0x00010bf0a640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_3);
    _objc_release(unaff_x22);
  }
  _objc_release(puVar1);
  puStack_138 = PTR_PTR_11270d2d8;
  puVar6 = param_3;
  uStack_140 = param_1;
  _objc_msgSendSuper2(&uStack_140,PTR_s_prepareDictionary__11261fec0,param_3);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10bbc2fac;
  puStack_170 = unaff_x22;
  puStack_168 = puVar1;
  uStack_160 = param_1;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puStack_178 = PTR_PTR_11270d2e0;
  puStack_180 = puVar2;
  _objc_msgSendSuper2(&puStack_180,PTR_s_fromDictionary__1125cc478,puVar6);
  puVar1 = puVar6;
  func_0x00010c0e00e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010be45600();
  _objc_release(puVar1);
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = puVar6;
    func_0x00010c0e00e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1bdda0(puVar2);
    _objc_release(puVar1);
  }
  puVar1 = puVar6;
  func_0x00010c0e00e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010be45600();
  _objc_release(puVar1);
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = puVar6;
    func_0x00010c0e00e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf51e00();
    func_0x00010c1c8600(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  puVar1 = puVar6;
  func_0x00010c0e00e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010be45600();
  _objc_release(puVar1);
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = puVar6;
    func_0x00010c0e00e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf69e0();
    func_0x00010c1cd480(puVar2);
    _objc_release(puVar1);
  }
  puVar1 = puVar6;
  func_0x00010c0e00e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010be45600();
  _objc_release(puVar1);
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = puVar6;
    func_0x00010c0e00e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf6ad4();
    func_0x00010c206c40(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(puVar6);
  return;
}



/* Entry: 10bbc2fac; end: 10bbc31c7; -[SCADwebChatExplainerTrayOpen fromDictionary:] */

void FUN_10bbc2fac(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d2e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_fromDictionary__1125cc478,param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1bdda0(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf51e00();
    func_0x00010c1c8600(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf69e0();
    func_0x00010c1cd480(param_1);
    _objc_release(uVar1);
  }
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be45600();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10baf6ad4();
    func_0x00010c206c40(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10bbc31c8; end: 10bbc31d3; -[SCADwebChatExplainerTrayOpen getEventName] */

undefined ** FUN_10bbc31c8(void)

{
  return &PTR____CFConstantStringClassReference_110fc6618;
}



/* Entry: 10bbc31d4; end: 10bbc31db; -[SCADwebChatExplainerTrayOpen getEventQoS] */

undefined8 FUN_10bbc31d4(void)

{
  return 1;
}



/* Entry: 10bbc31dc; end: 10bbc322f; -[SCADwebChatExplainerTrayOpen setLinkCopied:] */

void FUN_10bbc31dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ba38,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc3230; end: 10bbc3247; -[SCADwebChatExplainerTrayOpen setMischiefId:] */

void FUN_10bbc3230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e1f9b8,3,param_3,0);
  return;
}



/* Entry: 10bbc3248; end: 10bbc32c7; -[SCADwebChatExplainerTrayOpen setNextPage:] */

void FUN_10bbc3248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf69c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e6ed18,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc32c8; end: 10bbc3347; -[SCADwebChatExplainerTrayOpen setSource:] */

void FUN_10bbc32c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf6ab4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc3348; end: 10bbc334b; -[SCADwebChatExplainerTrayOpen getFieldNumberToFieldDict] */

void FUN_10bbc3348(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbc334c; end: 10bbc3357; -[SCADwebChatExplainerTrayOpen toProtoWithAllowedFields:] */

void FUN_10bbc334c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bbc3358; end: 10bbc335f; -[SCADwebChatExplainerTrayOpen getPayloadIdentifier] */

undefined8 FUN_10bbc3358(void)

{
  return 0xf3f;
}



/* Entry: 10bbc3360; end: 10bbc3543; -[SCAEelMessageMetadata initWithDictionary:] */

undefined1 * FUN_10bbc3360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270d2e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c193cc0(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c19b720(puVar1);
      _objc_release(uVar2);
    }
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be45600();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c1a5cc0(puVar1);
      _objc_release(uVar2);
    }
  }
  puVar4 = (undefined1 *)puVar1;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  puVar3 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)puVar1;
  }
  _objc_retain(puVar3);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10bbc3544; end: 10bbc3597; -[SCAEelMessageMetadata setEelEncrypted:] */

void FUN_10bbc3544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ba58,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc3598; end: 10bbc35eb; -[SCAEelMessageMetadata setFideliusEncrypted:] */

void FUN_10bbc3598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ba78,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc35ec; end: 10bbc363f; -[SCAEelMessageMetadata setHasDecryptionFailure:] */

void FUN_10bbc35ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101ba98,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc3640; end: 10bbc3643; -[SCAEelMessageMetadata getFieldNumberToFieldDict] */

void FUN_10bbc3640(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbc3644; end: 10bbc364f; -[SCAEelMessageMetadata toProtoWithAllowedFields:] */

void FUN_10bbc3644(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bbc3650; end: 10bbc3657; -[SCAEelMessageMetadata getPayloadIdentifier] */

undefined8 FUN_10bbc3650(void)

{
  return 0x1319;
}



/* Entry: 10bbc3658; end: 10bbc36d7; -[SCAExitState setExitStateType:] */

void FUN_10bbc3658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf7a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101bab8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc36d8; end: 10bbc36ef; -[SCAExitState setExitStateUrl:] */

void FUN_10bbc36d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101bad8,7,param_3,0);
  return;
}



/* Entry: 10bbc36f0; end: 10bbc3737; -[SCAExitState setExitStateProductList:] */

void FUN_10bbc36f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101baf8,8,param_3,0xd
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bbc3738; end: 10bbc37b7; -[SCAExitState setExitStateCtaType:] */

void FUN_10bbc3738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf7a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_11101bb18,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc37b8; end: 10bbc395f; -[SCAExitState prepareDictionary:] */

void FUN_10bbc37b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(lVar1);
    lVar3 = lVar1;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar5 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          uVar4 = *(undefined8 *)(lStack_128 + lVar6 * 8);
          func_0x00010bf0a640(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(uVar4);
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar3 = lVar1;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar1);
    func_0x00010c1d0640(param_3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  puStack_138 = PTR_PTR_11270d2f0;
  uStack_140 = param_1;
  _objc_msgSendSuper2(&uStack_140,PTR_s_prepareDictionary__11261fec0,param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10bbc3960; end: 10bbc3963; -[SCAExitState getFieldNumberToFieldDict] */

void FUN_10bbc3960(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bbc3964; end: 10bbc396f; -[SCAExitState toProtoWithAllowedFields:] */

void FUN_10bbc3964(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bbc3970; end: 10bbc3977; -[SCAExitState getPayloadIdentifier] */

undefined8 FUN_10bbc3970(void)

{
  return 0xd1e;
}



/* Entry: 10bbc3978; end: 10bbc3983; -[SCAExitStatePostCaptureEvent getEventName] */

undefined ** FUN_10bbc3978(void)

{
  return &PTR____CFConstantStringClassReference_11101bb38;
}



/* Entry: 10bbc3984; end: 10bbc398b; -[SCAExitStatePostCaptureEvent getEventQoS] */

undefined8 FUN_10bbc3984(void)

{
  return 1;
}



/* Entry: 10bbc398c; end: 10bbc39df; -[SCAExitStatePostCaptureEvent setDirectSnapRecipientCount:] */

void FUN_10bbc398c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_11101bb58,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bbc39e0; end: 10bbc39f7; -[SCAExitStatePostCaptureEvent setExitState:] */

void FUN_10bbc39e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_11101bb78,3,param_3,0);
  return;
}


