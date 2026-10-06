/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00595980; end: 0059598b; -[SCAFilterResult ruleResults] */

void FUN_00595980(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 0059598c; end: 00595993; -[SCAFilterResult setRuleResults:] */

void FUN_0059598c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 00595994; end: 005959c3; -[SCAFilterResult .cxx_destruct] */

void FUN_00595994(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 005959c4; end: 00595a5b; -[SCAInvariantCheckResult init:] */

undefined1 * FUN_005959c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3f70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0078dd80(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    func_0x00790120(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00595a5c; end: 00595b5b; -[SCAInvariantCheckResult getFailureCount] */

long FUN_00595a5c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x0078bda0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00780ea0();
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = 0;
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        lVar2 = *(long *)(lStack_108 + lVar5 * 8);
        func_0x00783f00(lVar2);
        lVar3 = lVar2 + (int)lVar3;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_1;
      func_0x00780ea0(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
    lVar3 = (long)(int)lVar3;
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return lVar3;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)();
  return param_1;
}



/* Entry: 00595b5c; end: 00595b67; -[SCAInvariantCheckResult eventName] */

void FUN_00595b5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,8,1);
  return;
}



/* Entry: 00595b68; end: 00595b6f; -[SCAInvariantCheckResult setEventName:] */

void FUN_00595b68(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 00595b70; end: 00595b7b; -[SCAInvariantCheckResult ruleGroupResults] */

void FUN_00595b70(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 00595b7c; end: 00595b83; -[SCAInvariantCheckResult setRuleGroupResults:] */

void FUN_00595b7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 00595b84; end: 00595bb3; -[SCAInvariantCheckResult .cxx_destruct] */

void FUN_00595b84(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00595bb4; end: 00595bbb; -[SCAMapSerializable init] */

void FUN_00595bb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00785430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithDrainNestedObjects__00abc210,0);
  return;
}



/* Entry: 00595bbc; end: 00595c8f; -[SCAMapSerializable initWithDrainNestedObjects:] */

undefined1 * FUN_00595bbc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac3f78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    func_0x0078f4e0(*(undefined8 *)((long)puVar1 + 0x28));
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00595c90; end: 00595da3; -[SCAMapSerializable copyWithZone:] */

undefined8 FUN_00595c90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  _objc_opt_class();
  _objc_opt_new();
  uVar2 = param_1;
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00789700();
  func_0x0078fac0(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x0078ab60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00789700();
  func_0x0078f940(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x007832a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00789700();
  func_0x0078e060(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x0078ab80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00789700();
  func_0x0078f960(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00595da4; end: 00595ed7; -[SCAMapSerializable deepCopy] */

void FUN_00595da4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  _objc_opt_class();
  _objc_alloc_init();
  uVar2 = param_1;
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x0077c660(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078fac0(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x0078ab60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x0077c660(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f940(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x007832a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00789700();
  func_0x0078e060(uVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x0078ab80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00789700();
  func_0x0078f960(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00595ed8; end: 00596007; -[SCAMapSerializable _deepCopyDictionary:] */

void FUN_00595ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00780e80(param_3);
  func_0x00782000(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x595f9c;
  puStack_48 = &UNK_00a030e8;
  _objc_retain();
  puStack_40 = puVar2;
  uStack_38 = param_1;
  func_0x00782b60(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  _objc_retain(puVar2);
  _objc_release(puStack_40);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00596008; end: 00596227; -[SCAMapSerializable _deepCopyValue:] */

/* WARNING: Removing unreachable block (ram,0x00596178) */

void FUN_00596008(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_00ac2988);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR_PTR_00ac3130;
    _objc_opt_class(PTR_PTR_00ac3130);
    puVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSArray_00ac2c28;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_00ac2c28);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
      if (((ulong)puVar2 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
        puVar2 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar1);
        if (((ulong)puVar2 & 1) == 0) {
          param_1 = param_3;
          func_0x00780e20();
        }
        else {
          func_0x0077c660();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x00780e80(param_3);
        func_0x0077f1a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        puVar2 = param_3;
        func_0x00780ea0();
        while (puVar2 != (undefined *)0x0) {
          puVar5 = (undefined *)0x0;
          do {
            puVar3 = param_1;
            func_0x0077c680(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x0077e720(puVar1);
            _objc_release(puVar3);
            puVar5 = puVar5 + 1;
          } while (puVar2 != puVar5);
          puVar2 = param_3;
          func_0x00780ea0();
        }
        _objc_release(param_3);
        param_1 = puVar1;
      }
    }
    else {
      param_1 = param_3;
      func_0x00781bc0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    param_1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x00792200();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar4) {
    ___stack_chk_fail();
    puVar1 = param_3;
    func_0x0078ae80();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar1;
    func_0x00789700();
    _objc_release(puVar1);
    func_0x0078a8a0(param_3);
    func_0x00783e80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0(param_1);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00596228; end: 005962ab; -[SCAMapSerializable asDictionary] */

void FUN_00596228(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x0078ae80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00789700();
  _objc_release(uVar1);
  func_0x0078a8a0(param_1,param_2,uVar2);
  func_0x00783e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(uVar2,param_2,param_1,&PTR____CFConstantStringClassReference_00a2dc60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 005962ac; end: 005962af; -[SCAMapSerializable prepareDictionary:] */

void FUN_005962ac(void)

{
  return;
}



/* Entry: 005962b0; end: 005962b7; -[SCAMapSerializable getEventName] */

undefined8 FUN_005962b0(void)

{
  return 0;
}



/* Entry: 005962b8; end: 00596417; -[SCAMapSerializable constructFieldNumberToFieldDict] */

undefined * FUN_005962b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1;
  func_0x0078ab80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00780ea0();
  if (lVar3 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        lVar4 = param_1;
        func_0x0078ab80(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00789f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        func_0x0078f4e0(puVar1,param_2,uVar6,lVar5);
        _objc_release(lVar5);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00780ea0(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 00596418; end: 0059641f; -[SCAMapSerializable getFieldNumberToFieldDict] */

undefined8 FUN_00596418(void)

{
  return 0;
}



/* Entry: 00596420; end: 00596423; -[SCAMapSerializable addToProtoDictionary] */

void FUN_00596420(void)

{
  return;
}



/* Entry: 00596424; end: 0059677f; -[SCAMapSerializable toProtoWithBitmapLength:allowedFields:] */

void FUN_00596424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  uVar1 = 1;
  _calloc(1,param_3);
  puVar2 = PTR__OBJC_CLASS___NSOutputStream_00ac3138;
  func_0x0078a220(PTR__OBJC_CLASS___NSOutputStream_00ac3138);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a160();
  puVar3 = PTR_PTR_00ac3140;
  func_0x00791e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ab60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(param_4);
  func_0x00782b60(param_1);
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSData_00ac2b10;
  func_0x00781620(PTR__OBJC_CLASS___NSData_00ac2b10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00793cc0(puVar3);
  _objc_release(puVar4);
  func_0x00783860(puVar3);
  puVar4 = puVar2;
  func_0x0078aae0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00780360(puVar2);
  _free(uVar1);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 00596780; end: 00596e03; -[SCAMapSerializable writeToStream:type:protoFieldNumber:value:fieldSetBitmap:] */

void FUN_00596780(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined **param_5,undefined **param_6,undefined **param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puStack_5b0;
  undefined8 uStack_5a8;
  long *plStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined *puStack_570;
  undefined8 uStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined *puStack_530;
  undefined8 uStack_528;
  long *plStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined *puStack_470;
  undefined8 uStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 auStack_3e8 [128];
  undefined1 auStack_368 [128];
  undefined1 auStack_2e8 [128];
  undefined1 auStack_268 [128];
  undefined1 auStack_1e8 [128];
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  ppuVar8 = &puStack_5b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar5 = param_4;
  _objc_retain(param_3);
  iVar4 = (int)uVar5;
  _objc_retain(param_6);
  uVar6 = param_1;
  ppuVar2 = param_6;
  func_0x0077d0c0();
  if ((uVar6 & 1) != 0) goto LAB_00596d88;
  uVar6 = param_1;
  ppuVar2 = param_6;
  uVar5 = param_4;
  func_0x0077d0a0();
  iVar4 = (int)uVar5;
  if ((uVar6 & 1) != 0) goto LAB_00596d88;
  uVar6 = param_1;
  ppuVar2 = param_5;
  func_0x0078a740(param_1);
  iVar4 = (int)ppuVar2;
  ppuVar2 = param_7;
  ppuVar3 = param_6;
  switch(param_4) {
  case 0:
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_00ac2988);
    ppuVar8 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar1);
    ppuVar2 = param_7;
    if (((ulong)ppuVar8 & 1) != 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_00a212a0;
      if (param_6 != (undefined **)0x0) {
        ppuVar8 = param_6;
      }
      iVar4 = (int)ppuVar8;
      func_0x00794320(param_3);
      ppuVar2 = param_5;
    }
    goto LAB_00596d88;
  case 1:
    ppuVar8 = param_6;
    func_0x0077fbc0();
    iVar4 = (int)ppuVar8;
    func_0x00793c60(param_3);
    ppuVar2 = param_5;
    goto LAB_00596d88;
  case 2:
  case 5:
    func_0x00782440(param_6);
    func_0x00793d60(param_3);
    ppuVar2 = param_5;
    goto LAB_00596d88;
  case 3:
    ppuVar8 = param_6;
    func_0x007871a0();
    iVar4 = (int)ppuVar8;
    func_0x00793dc0(param_3);
    ppuVar2 = param_5;
    goto LAB_00596d88;
  case 4:
    ppuVar8 = param_6;
    func_0x00788b40();
    iVar4 = (int)ppuVar8;
    func_0x00794040(param_3);
    ppuVar2 = param_5;
    goto LAB_00596d88;
  case 6:
    if (*(char *)(param_1 + 8) == '\x01') {
      _objc_autoreleasePoolPush();
      ppuVar8 = param_6;
      func_0x00792aa0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar8;
      func_0x00793cc0(param_3);
      iVar4 = (int)ppuVar2;
      _objc_release(ppuVar8);
      _objc_autoreleasePoolPop(uVar6);
      ppuVar2 = param_5;
      goto LAB_00596d88;
    }
    func_0x00792aa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar3;
    func_0x00793cc0(param_3);
    iVar4 = (int)ppuVar8;
    ppuVar8 = param_5;
    break;
  case 7:
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_428 = 0;
    puStack_430 = (undefined *)0x0;
    uStack_418 = 0;
    plStack_420 = (long *)0x0;
    _objc_retain(param_6);
    ppuVar8 = &puStack_430;
    iVar4 = (int)auStack_e8;
    ppuVar2 = param_6;
    func_0x00780ea0();
    if (ppuVar2 != (undefined **)0x0) {
      lVar7 = *plStack_420;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_420 != lVar7) {
            _objc_enumerationMutation(param_6);
          }
          func_0x00794400(param_1);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar2 != ppuVar8);
        ppuVar8 = &puStack_430;
        iVar4 = (int)auStack_e8;
        ppuVar2 = param_6;
        func_0x00780ea0();
      } while (ppuVar2 != (undefined **)0x0);
    }
    break;
  case 8:
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_468 = 0;
    puStack_470 = (undefined *)0x0;
    uStack_458 = 0;
    plStack_460 = (long *)0x0;
    _objc_retain(param_6);
    ppuVar8 = &puStack_470;
    iVar4 = (int)auStack_168;
    ppuVar2 = param_6;
    func_0x00780ea0();
    if (ppuVar2 != (undefined **)0x0) {
      lVar7 = *plStack_460;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_460 != lVar7) {
            _objc_enumerationMutation(param_6);
          }
          func_0x00794400(param_1);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar2 != ppuVar8);
        ppuVar8 = &puStack_470;
        iVar4 = (int)auStack_168;
        ppuVar2 = param_6;
        func_0x00780ea0();
      } while (ppuVar2 != (undefined **)0x0);
    }
    break;
  case 9:
    uStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    uStack_4a8 = 0;
    puStack_4b0 = (undefined *)0x0;
    uStack_498 = 0;
    plStack_4a0 = (long *)0x0;
    _objc_retain(param_6);
    ppuVar8 = &puStack_4b0;
    iVar4 = (int)auStack_1e8;
    ppuVar2 = param_6;
    func_0x00780ea0();
    if (ppuVar2 != (undefined **)0x0) {
      lVar7 = *plStack_4a0;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_4a0 != lVar7) {
            _objc_enumerationMutation(param_6);
          }
          func_0x00794400(param_1);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar2 != ppuVar8);
        ppuVar8 = &puStack_4b0;
        iVar4 = (int)auStack_1e8;
        ppuVar2 = param_6;
        func_0x00780ea0();
      } while (ppuVar2 != (undefined **)0x0);
    }
    break;
  case 10:
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4e8 = 0;
    puStack_4f0 = (undefined *)0x0;
    uStack_4d8 = 0;
    plStack_4e0 = (long *)0x0;
    _objc_retain(param_6);
    ppuVar8 = &puStack_4f0;
    iVar4 = (int)auStack_268;
    ppuVar2 = param_6;
    func_0x00780ea0();
    if (ppuVar2 != (undefined **)0x0) {
      lVar7 = *plStack_4e0;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_4e0 != lVar7) {
            _objc_enumerationMutation(param_6);
          }
          func_0x00794400(param_1);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar2 != ppuVar8);
        ppuVar8 = &puStack_4f0;
        iVar4 = (int)auStack_268;
        ppuVar2 = param_6;
        func_0x00780ea0();
      } while (ppuVar2 != (undefined **)0x0);
    }
    break;
  case 0xb:
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_528 = 0;
    puStack_530 = (undefined *)0x0;
    uStack_518 = 0;
    plStack_520 = (long *)0x0;
    _objc_retain(param_6);
    ppuVar8 = &puStack_530;
    iVar4 = (int)auStack_2e8;
    ppuVar2 = param_6;
    func_0x00780ea0();
    if (ppuVar2 != (undefined **)0x0) {
      lVar7 = *plStack_520;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_520 != lVar7) {
            _objc_enumerationMutation(param_6);
          }
          func_0x00794400(param_1);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar2 != ppuVar8);
        ppuVar8 = &puStack_530;
        iVar4 = (int)auStack_2e8;
        ppuVar2 = param_6;
        func_0x00780ea0();
      } while (ppuVar2 != (undefined **)0x0);
    }
    break;
  case 0xc:
    uStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_568 = 0;
    puStack_570 = (undefined *)0x0;
    uStack_558 = 0;
    plStack_560 = (long *)0x0;
    _objc_retain(param_6);
    ppuVar8 = &puStack_570;
    iVar4 = (int)auStack_368;
    ppuVar2 = param_6;
    func_0x00780ea0();
    if (ppuVar2 != (undefined **)0x0) {
      lVar7 = *plStack_560;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_560 != lVar7) {
            _objc_enumerationMutation(param_6);
          }
          func_0x00794400(param_1);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar2 != ppuVar8);
        ppuVar8 = &puStack_570;
        iVar4 = (int)auStack_368;
        ppuVar2 = param_6;
        func_0x00780ea0();
      } while (ppuVar2 != (undefined **)0x0);
    }
    break;
  case 0xd:
    uStack_588 = 0;
    uStack_590 = 0;
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_5a8 = 0;
    puStack_5b0 = (undefined *)0x0;
    uStack_598 = 0;
    plStack_5a0 = (long *)0x0;
    _objc_retain(param_6);
    iVar4 = (int)auStack_3e8;
    ppuVar2 = param_6;
    func_0x00780ea0();
    if (ppuVar2 != (undefined **)0x0) {
      lVar7 = *plStack_5a0;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_5a0 != lVar7) {
            _objc_enumerationMutation(param_6);
          }
          func_0x00794400(param_1);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar2 != ppuVar8);
        iVar4 = (int)auStack_3e8;
        ppuVar2 = param_6;
        ppuVar8 = &puStack_5b0;
        func_0x00780ea0();
      } while (ppuVar2 != (undefined **)0x0);
    }
    break;
  default:
    goto LAB_00596d88;
  }
  _objc_release(ppuVar3);
  ppuVar2 = ppuVar8;
LAB_00596d88:
  _objc_release(param_6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    uVar6 = (ulong)(long)(int)(iVar4 - 2U) >> 3;
    *(byte *)((long)ppuVar2 + uVar6) =
         *(byte *)((long)ppuVar2 + uVar6) | (byte)(1 << (ulong)((iVar4 - 2U ^ 0xffffffff) & 7));
    return;
  }
  return;
}



/* Entry: 00596e04; end: 00596e2f; -[SCAMapSerializable populateBitmap:fieldNumber:] */

void FUN_00596e04(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  ulong uVar1;
  
  uVar1 = (ulong)(long)(int)(param_4 - 2U) >> 3;
  *(byte *)(param_3 + uVar1) =
       *(byte *)(param_3 + uVar1) | (byte)(1 << (ulong)((param_4 - 2U ^ 0xffffffff) & 7));
  return;
}



/* Entry: 00596e30; end: 00596f47; -[SCAMapSerializable setField:value:type:] */

void FUN_00596e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00780e20(param_4);
  uVar2 = param_1;
  func_0x0078ab60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00780e20(param_4);
  _objc_release(param_4);
  uVar2 = param_1;
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x007832a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar3);
  return;
}



/* Entry: 00596f48; end: 00597003; -[SCAMapSerializable setField:fieldNumber:value:type:] */

void FUN_00596f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00789c80(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0078ab80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  func_0x0078e020(param_1,param_2,param_3,param_5,param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00597004; end: 0059714b; -[SCAMapSerializable setField:protoValue:type:jsonValue:] */

void FUN_00597004(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x0077d0a0(param_1,param_2,param_4,param_5);
  if ((uVar1 & 1) == 0) {
    uVar2 = param_4;
    func_0x00780e20(param_4);
    uVar1 = param_1;
    func_0x0078ab60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0();
    _objc_release(uVar1);
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00780e20(param_6);
    uVar1 = param_1;
    func_0x0078ae80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0();
    _objc_release(uVar1);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x007832a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0();
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0059714c; end: 00597237; -[SCAMapSerializable setField:fieldNumber:protoValue:type:jsonValue:] */

void FUN_0059714c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x0077d0a0(param_1,param_2,param_5,param_6);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x0078ab80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0();
    _objc_release(uVar1);
    _objc_release(puVar2);
    func_0x0078e000(param_1,param_2,param_3,param_5,param_6,param_7);
  }
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00597238; end: 005972a7; -[SCAMapSerializable _isValueNull:] */

bool FUN_00597238(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNull_00ac2f90;
  if (param_3 == (undefined *)0x0) {
    bVar1 = true;
  }
  else {
    _objc_retain(param_3);
    func_0x00789b20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_3 == puVar2;
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  return bVar1;
}



/* Entry: 005972a8; end: 005972d3; -[SCAMapSerializable _isValueEnumNull:type:] */

ulong FUN_005972a8(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  if (param_4 == 3) {
    func_0x007871a0(param_3);
    return param_3 >> 0x1f & 1;
  }
  return 0;
}



/* Entry: 005972d4; end: 005972db; -[SCAMapSerializable toProtoWithAllowedFields:] */

undefined8 FUN_005972d4(void)

{
  return 0;
}



/* Entry: 005972dc; end: 005973db; -[SCAMapSerializable compareHelper:target:comparator:] */

uint FUN_005972dc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_5);
  func_0x007806a0(param_3,param_2,param_4);
  uVar2 = param_5;
  func_0x007878e0(param_5,param_2,&PTR____CFConstantStringClassReference_00a2dc80);
  if ((int)uVar2 == 0) {
    uVar2 = param_5;
    func_0x007878e0(param_5,param_2,&PTR____CFConstantStringClassReference_00a2dca0);
    if ((int)uVar2 != 0) {
LAB_00597348:
      uVar3 = (uint)(param_3 < 2);
      goto LAB_0059734c;
    }
    uVar2 = param_5;
    func_0x007878e0(param_5,param_2,&PTR____CFConstantStringClassReference_00a2dcc0);
    if ((int)uVar2 == 0) {
      uVar2 = param_5;
      func_0x007878e0(param_5,param_2,&PTR____CFConstantStringClassReference_00a2dce0);
      if ((int)uVar2 != 0) {
        param_3 = param_3 + 1;
        goto LAB_00597348;
      }
      uVar2 = param_5;
      func_0x007878e0(param_5,param_2,&PTR____CFConstantStringClassReference_00a2dd00);
      if ((int)uVar2 == 0) {
        uVar2 = param_5;
        func_0x007878e0(param_5,param_2,&PTR____CFConstantStringClassReference_00a2dd20);
        uVar3 = 0;
        if (param_3 != 0) {
          uVar3 = (uint)uVar2;
        }
        goto LAB_0059734c;
      }
      bVar1 = param_3 == 0;
    }
    else {
      bVar1 = param_3 == 0xffffffffffffffff;
    }
  }
  else {
    bVar1 = param_3 == 1;
  }
  uVar3 = (uint)bVar1;
LAB_0059734c:
  _objc_release(param_5);
  return uVar3;
}



/* Entry: 005973dc; end: 005973e7; -[SCAMapSerializable protoDictionary] */

void FUN_005973dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 005973e8; end: 005973ef; -[SCAMapSerializable setProtoDictionary:] */

void FUN_005973e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 005973f0; end: 005973fb; -[SCAMapSerializable rawDictionary] */

void FUN_005973f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 005973fc; end: 00597403; -[SCAMapSerializable setRawDictionary:] */

void FUN_005973fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 00597404; end: 0059740f; -[SCAMapSerializable fieldTypeDict] */

void FUN_00597404(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 00597410; end: 00597417; -[SCAMapSerializable setFieldTypeDict:] */

void FUN_00597410(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 00597418; end: 00597423; -[SCAMapSerializable protoFieldNumberDict] */

void FUN_00597418(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 00597424; end: 0059742b; -[SCAMapSerializable setProtoFieldNumberDict:] */

void FUN_00597424(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 0059742c; end: 00597433; -[SCAMapSerializable drainNestedObjects] */

undefined1 FUN_0059742c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 00597434; end: 0059743b; -[SCAMapSerializable setDrainNestedObjects:] */

void FUN_00597434(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 0059743c; end: 00597483; -[SCAMapSerializable .cxx_destruct] */

void FUN_0059743c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00597484; end: 00597563; -[SCARuleGroupResult init:jiraProject:] */

undefined1 *
FUN_00597484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_00ac3f80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00790100(puVar1);
    func_0x0078e9a0(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    func_0x00790160(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    func_0x0078e0e0(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00597564; end: 005975b3; -[SCARuleGroupResult addRuleResult:] */

void FUN_00597564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x0078bdc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e720();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 005975b4; end: 005976d3; -[SCARuleGroupResult getFailureCount] */

long FUN_005975b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar1 = param_1;
  func_0x0078bdc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00780e80();
  _objc_release(lVar1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  func_0x007835c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00780ea0();
  if (lVar1 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(param_1);
        }
        lVar3 = *(long *)(lStack_108 + lVar5 * 8);
        func_0x00783f00(lVar3);
        lVar2 = lVar3 + lVar2;
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_1;
      func_0x00780ea0(param_1,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return lVar2;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)();
  return param_1;
}



/* Entry: 005976d4; end: 005976df; -[SCARuleGroupResult ruleGroupId] */

void FUN_005976d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,8,1);
  return;
}



/* Entry: 005976e0; end: 005976e7; -[SCARuleGroupResult setRuleGroupId:] */

void FUN_005976e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 005976e8; end: 005976f3; -[SCARuleGroupResult jiraProject] */

void FUN_005976e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 005976f4; end: 005976fb; -[SCARuleGroupResult setJiraProject:] */

void FUN_005976f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 005976fc; end: 00597707; -[SCARuleGroupResult filterResults] */

void FUN_005976fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 00597708; end: 0059770f; -[SCARuleGroupResult setFilterResults:] */

void FUN_00597708(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 00597710; end: 0059771b; -[SCARuleGroupResult ruleResults] */

void FUN_00597710(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 0059771c; end: 00597723; -[SCARuleGroupResult setRuleResults:] */

void FUN_0059771c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 00597724; end: 0059776b; -[SCARuleGroupResult .cxx_destruct] */

void FUN_00597724(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0059776c; end: 00597837; -[SCARuleResult init:failCondition:ruleTier:enableCrash:] */

undefined1 *
FUN_0059776c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac3f88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00790140(puVar1);
    func_0x0078dec0(puVar1);
    func_0x00790180(puVar1);
    func_0x0078dc00(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00597838; end: 005978f7; -[SCARuleResult init:failCondition:ruleTier:] */

undefined1 *
FUN_00597838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_00ac3f88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00790140(puVar1);
    func_0x0078dec0(puVar1);
    func_0x00790180(puVar1);
    func_0x0078dc00(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 005978f8; end: 005979af; -[SCARuleResult init:failCondition:enableCrash:] */

undefined1 *
FUN_005978f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3f88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00790140(puVar1);
    func_0x0078dec0(puVar1);
    func_0x00790180(puVar1);
    func_0x007825a0(puVar1);
    func_0x0078dc00(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 005979b0; end: 00597a5f; -[SCARuleResult init:failCondition:] */

undefined1 *
FUN_005979b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3f88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00790140(puVar1);
    func_0x0078dec0(puVar1);
    func_0x00790180(puVar1);
    func_0x0078dc00(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00597a60; end: 00597a6b; -[SCARuleResult ruleName] */

void FUN_00597a60(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 00597a6c; end: 00597a73; -[SCARuleResult setRuleName:] */

void FUN_00597a6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 00597a74; end: 00597a7f; -[SCARuleResult failCondition] */

void FUN_00597a74(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 00597a80; end: 00597a87; -[SCARuleResult setFailCondition:] */

void FUN_00597a80(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 00597a88; end: 00597a93; -[SCARuleResult ruleTier] */

void FUN_00597a88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_0099ad38)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 00597a94; end: 00597a9b; -[SCARuleResult setRuleTier:] */

void FUN_00597a94(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_0099add8)();
  return;
}



/* Entry: 00597a9c; end: 00597aa7; -[SCARuleResult enableCrash] */

byte FUN_00597a9c(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 00597aa8; end: 00597aaf; -[SCARuleResult setEnableCrash:] */

void FUN_00597aa8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 00597ab0; end: 00597aeb; -[SCARuleResult .cxx_destruct] */

void FUN_00597ab0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00597aec; end: 00597b1f; -[SCAUserNotTrackedEvent fromDictionary:] */

void FUN_00597aec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac3f90;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__00ab7610);
  return;
}



/* Entry: 00597b20; end: 00597b9f; -[SCAUserRegistrationData initWithDictionary:] */

undefined1 * FUN_00597b20(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_00ac3f98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  puVar3 = (undefined1 *)puVar2;
  func_0x0078ab60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00780e80();
  puVar1 = (undefined1 *)0x0;
  if (puVar4 != (undefined1 *)0x0) {
    puVar1 = (undefined1 *)puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 00597ba0; end: 00597c03; -[SCAUserRegistrationData setIsRegFirst14Days:] */

void FUN_00597ba0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00597c04; end: 00597c67; -[SCAUserRegistrationData setIsRegFirst24Hours:] */

void FUN_00597c04(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00597c68; end: 00597ccb; -[SCAUserRegistrationData setIsRegFirst30Days:] */

void FUN_00597c68(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00597ccc; end: 00597d2f; -[SCAUserRegistrationData setIsRegFirst7Days:] */

void FUN_00597ccc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00597d30; end: 00597d63; -[SCAUserTrackedEvent fromDictionary:] */

void FUN_00597d30(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac3fa0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_fromDictionary__00ab7610);
  return;
}



/* Entry: 00597d64; end: 00597dc7; -[SCAUserTrackedEvent setLoggedWithoutUserInfo:] */

void FUN_00597d64(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00597dc8; end: 00597e1f; -[SCAUserTrackedEvent setSaturnUserId:] */

void FUN_00597dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00597e20; end: 00597e77; -[SCAUserTrackedEvent setUserGuid:] */

void FUN_00597e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00597e78; end: 00597ecf; -[SCAUserTrackedEvent setUserId:] */

void FUN_00597e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00597ed0; end: 00597f33; -[SCAUserTrackedEvent setUserNotTracked:] */

void FUN_00597ed0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ae80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00597f34; end: 00597f53;  */

undefined * FUN_00597f34(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_00a03148)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 00597f54; end: 0059800b;  */

undefined8 FUN_00597f54(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2dd60;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2dd60,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2dd80;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2dd80,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a2dda0;
      func_0x00780080(&PTR____CFConstantStringClassReference_00a2dda0,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a2ddc0;
        func_0x00780080(&PTR____CFConstantStringClassReference_00a2ddc0,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_00a2dde0;
          func_0x00780080(&PTR____CFConstantStringClassReference_00a2dde0,param_2,param_1);
          uVar2 = 4;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 0059800c; end: 0059802b;  */

undefined * FUN_0059800c(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_00a03170)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 0059802c; end: 005980c7;  */

undefined8 FUN_0059802c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2de00;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2de00,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2de20;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2de20,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a2de40;
      func_0x00780080(&PTR____CFConstantStringClassReference_00a2de40,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a2de60;
        func_0x00780080(&PTR____CFConstantStringClassReference_00a2de60,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 005980c8; end: 005980eb;  */

undefined ** FUN_005980c8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2dea0;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_00a2de80;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 005980ec; end: 0059814f;  */

undefined8 FUN_005980ec(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2de80;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2de80,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2dea0;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2dea0,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00598150; end: 0059816f;  */

undefined * FUN_00598150(ulong param_1)

{
  if (param_1 < 7) {
    return (&PTR_PTR_00a03190)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 00598170; end: 0059825f;  */

undefined8 FUN_00598170(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2dec0;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2dec0,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2dee0;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2dee0,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a2df00;
      func_0x00780080(&PTR____CFConstantStringClassReference_00a2df00,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a2df20;
        func_0x00780080(&PTR____CFConstantStringClassReference_00a2df20,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_00a2df40;
          func_0x00780080(&PTR____CFConstantStringClassReference_00a2df40,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_00a2df60;
            func_0x00780080(&PTR____CFConstantStringClassReference_00a2df60,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_00a2df80;
              func_0x00780080(&PTR____CFConstantStringClassReference_00a2df80,param_2,param_1);
              uVar2 = 6;
              if (ppuVar1 != (undefined **)0x0) {
                uVar2 = 0xffffffffffffffff;
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00598260; end: 0059827f;  */

undefined * FUN_00598260(ulong param_1)

{
  if (param_1 < 6) {
    return (&PTR_PTR_00a031c8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 00598280; end: 00598337;  */

undefined8 FUN_00598280(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2a340;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2a340,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2dfa0;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2dfa0,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 4;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a2dfc0;
      func_0x00780080(&PTR____CFConstantStringClassReference_00a2dfc0,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_00a2dfe0;
        func_0x00780080(&PTR____CFConstantStringClassReference_00a2dfe0,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_00a2e000;
          func_0x00780080(&PTR____CFConstantStringClassReference_00a2e000,param_2,param_1);
          uVar2 = 5;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00598338; end: 0059835b;  */

undefined ** FUN_00598338(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2e040;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_00a2e020;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 0059835c; end: 005983bf;  */

undefined8 FUN_0059835c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2e020;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2e020,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2e040;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2e040,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 005983c0; end: 005983e3;  */

undefined ** FUN_005983c0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2e080;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_00a2e060;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 005983e4; end: 00598447;  */

undefined8 FUN_005983e4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2e060;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2e060,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2e080;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2e080,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00598448; end: 00598467;  */

undefined * FUN_00598448(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_00a031f8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 00598468; end: 005984e7;  */

undefined8 FUN_00598468(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2e0a0;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2e0a0,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2e0c0;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2e0c0,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a2e0e0;
      func_0x00780080(&PTR____CFConstantStringClassReference_00a2e0e0,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 005984e8; end: 0059850b;  */

undefined ** FUN_005984e8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2e120;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_00a2e100;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 0059850c; end: 0059856f;  */

undefined8 FUN_0059850c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a2e100;
  func_0x00780080(&PTR____CFConstantStringClassReference_00a2e100,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a2e120;
    func_0x00780080(&PTR____CFConstantStringClassReference_00a2e120,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00598570; end: 0059858f;  */

undefined * FUN_00598570(ulong param_1)

{
  if (param_1 < 9) {
    return (&PTR_PTR_00a03210)[param_1];
  }
  return (undefined *)0x0;
}


