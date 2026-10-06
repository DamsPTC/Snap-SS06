/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107cb55f8; end: 107cb57e7;  */

void FUN_107cb55f8(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  undefined **ppuStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar9 = param_2;
  FUN_107cb5478(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c0d3c80();
  _objc_release(param_1);
  puVar3 = param_2;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c084c40();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = (undefined *)0x0;
  if (puVar4 != (undefined *)0x0) {
    ppuStack_78 = &PTR____CFConstantStringClassReference_110ea1ad8;
    puVar4 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084c40();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110ea1af8;
    puVar5 = param_2;
    puStack_68 = puVar3;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c084ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar7;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar2);
    _objc_release(puVar8);
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar5 = puVar3;
  }
  puVar3 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_88 = FUN_107cb57e8;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = puVar5;
  puStack_a8 = puVar3;
  puStack_a0 = puVar2;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_107cb5478();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110ed79b8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c0 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_d8 = FUN_107cb58e8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110daf5b8;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_f0 = puVar4;
  puStack_e8 = puVar3;
  ppuStack_e0 = &puStack_90;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_100 = puVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_118 = FUN_107cb5994;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar9;
  puStack_140 = puVar5;
  puStack_138 = puVar2;
  puStack_130 = puVar6;
  puStack_128 = puVar3;
  pppuStack_120 = &ppuStack_e0;
  _objc_retain();
  lVar1 = 0x618;
  if ((int)puVar9 == 0) {
    lVar1 = 0x610;
  }
  uStack_168 = *(undefined8 *)((long)&PTR_PTR_110ca8110 + lVar1);
  puVar2 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_160 = &PTR____CFConstantStringClassReference_110f41858;
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_158 = puVar2;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = &puStack_158;
  puVar11 = &uStack_168;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_150 = puVar9;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(puVar7);
  _objc_retain(ppuVar10);
  _objc_retain(puVar11);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (puVar4 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
    if (puVar7 != (undefined *)0x0) goto LAB_107cb5b2c;
LAB_107cb5b88:
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
    if (ppuVar10 != (undefined **)0x0) goto LAB_107cb5b40;
LAB_107cb5bbc:
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar2);
    if (puVar7 == (undefined *)0x0) goto LAB_107cb5b88;
LAB_107cb5b2c:
    func_0x00010c1d0640(puVar2);
    if (ppuVar10 == (undefined **)0x0) goto LAB_107cb5bbc;
LAB_107cb5b40:
    func_0x00010c1d0640(puVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar11 != (undefined8 *)0x0) {
    func_0x00010c0c3e60(puVar11);
    func_0x00010c0df740(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25af40(puVar11);
    func_0x00010c0df740(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  if (param_7 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar2);
  }
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(puVar11);
  _objc_release(ppuVar10);
  _objc_release(puVar7);
  _objc_release(puVar4);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107cb57e8; end: 107cb58e7;  */

void FUN_107cb57e8(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long in_x6;
  long lVar8;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_107cb5478();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c0d3c80();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain();
  lVar8 = 0x618;
  if ((int)param_2 == 0) {
    lVar8 = 0x610;
  }
  uStack_e8 = *(undefined8 *)((long)&PTR_PTR_110ca8110 + lVar8);
  puVar3 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f41858;
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_d8 = puVar3;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_d8;
  puVar7 = &uStack_e8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_d0 = puVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(lVar5);
  _objc_retain(ppuVar6);
  _objc_retain(puVar7);
  _objc_retain(in_x6);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    if (lVar5 != 0) goto LAB_107cb5b2c;
LAB_107cb5b88:
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    if (ppuVar6 != (undefined **)0x0) goto LAB_107cb5b40;
LAB_107cb5bbc:
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar3);
    if (lVar5 == 0) goto LAB_107cb5b88;
LAB_107cb5b2c:
    func_0x00010c1d0640(puVar3);
    if (ppuVar6 == (undefined **)0x0) goto LAB_107cb5bbc;
LAB_107cb5b40:
    func_0x00010c1d0640(puVar3);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar7 != (undefined8 *)0x0) {
    func_0x00010c0c3e60(puVar7);
    func_0x00010c0df740(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25af40(puVar7);
    func_0x00010c0df740(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar2);
  if (in_x6 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar3);
  }
  puVar2 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(in_x6);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(lVar5);
  _objc_release(puVar1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cb58e8; end: 107cb5993;  */

void FUN_107cb58e8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long in_x6;
  long lVar8;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain();
  lVar8 = 0x618;
  if ((int)param_2 == 0) {
    lVar8 = 0x610;
  }
  uStack_98 = *(undefined8 *)((long)&PTR_PTR_110ca8110 + lVar8);
  puVar3 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f41858;
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_88 = puVar3;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_88;
  puVar7 = &uStack_98;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(lVar5);
  _objc_retain(ppuVar6);
  _objc_retain(puVar7);
  _objc_retain(in_x6);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    if (lVar5 != 0) goto LAB_107cb5b2c;
LAB_107cb5b88:
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    if (ppuVar6 != (undefined **)0x0) goto LAB_107cb5b40;
LAB_107cb5bbc:
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar3);
    if (lVar5 == 0) goto LAB_107cb5b88;
LAB_107cb5b2c:
    func_0x00010c1d0640(puVar3);
    if (ppuVar6 == (undefined **)0x0) goto LAB_107cb5bbc;
LAB_107cb5b40:
    func_0x00010c1d0640(puVar3);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar7 != (undefined8 *)0x0) {
    func_0x00010c0c3e60(puVar7);
    func_0x00010c0df740(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25af40(puVar7);
    func_0x00010c0df740(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar2);
  if (in_x6 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar3);
  }
  puVar2 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(in_x6);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(lVar5);
  _objc_release(puVar1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cb5994; end: 107cb5a9b;  */

void FUN_107cb5994(undefined *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long in_x6;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain();
  lVar1 = 0x618;
  if ((int)param_2 == 0) {
    lVar1 = 0x610;
  }
  uStack_58 = *(undefined8 *)((long)&PTR_PTR_110ca8110 + lVar1);
  puVar2 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f41858;
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_48 = puVar2;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_48;
  puVar7 = &uStack_58;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (param_1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(lVar5);
  _objc_retain(ppuVar6);
  _objc_retain(puVar7);
  _objc_retain(in_x6);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (param_1 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
    if (lVar5 != 0) goto LAB_107cb5b2c;
LAB_107cb5b88:
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
    if (ppuVar6 != (undefined **)0x0) goto LAB_107cb5b40;
LAB_107cb5bbc:
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar2);
    if (lVar5 == 0) goto LAB_107cb5b88;
LAB_107cb5b2c:
    func_0x00010c1d0640(puVar2);
    if (ppuVar6 == (undefined **)0x0) goto LAB_107cb5bbc;
LAB_107cb5b40:
    func_0x00010c1d0640(puVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar7 != (undefined8 *)0x0) {
    func_0x00010c0c3e60(puVar7);
    func_0x00010c0df740(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25af40(puVar7);
    func_0x00010c0df740(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  if (in_x6 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar2);
  }
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(in_x6);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(lVar5);
  _objc_release(param_1);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107cb5a9c; end: 107cb5d6b;  */

void FUN_107cb5a9c(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (param_1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  }
  else {
    func_0x00010c1d0640(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  }
  PTR__OBJC_CLASS___NSNull_1126aef28 = puVar2;
  if (param_2 == 0) {
    func_0x00010c0ddbe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  }
  else {
    func_0x00010c1d0640(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  }
  PTR__OBJC_CLASS___NSNull_1126aef28 = puVar2;
  if (param_3 == 0) {
    func_0x00010c0ddbe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 != 0) {
    func_0x00010c0c3e60(param_4);
    func_0x00010c0df740(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c25af40(param_4);
    func_0x00010c0df740(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  if (param_7 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cb5d6c; end: 107cb5f2b;  */

void FUN_107cb5d6c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined8 ****ppppuStack_230;
  code *pcStack_228;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  long lStack_1e8;
  undefined1 ****ppppuStack_1b0;
  code *pcStack_1a8;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined1 ***pppuStack_160;
  code *pcStack_158;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f42418;
  puVar13 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar13 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar13;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar13);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  uStack_58 = 0x107cb5e38;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f42998;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f42978;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f41858;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_98 = puVar13;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_90 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  pcStack_c8 = FUN_107cb5f2c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_128 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110f42998;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110f42978;
  ppuStack_d0 = &puStack_60;
  _objc_retain(param_4);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_138 = &PTR____CFConstantStringClassReference_110f41858;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_120 = puVar13;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_130 = &PTR____CFConstantStringClassReference_110f429d8;
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_118 = puVar1;
  uStack_110 = param_4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_158 = FUN_107cb6048;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110f42c18;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110f41858;
  puStack_188 = PTR____kCFBooleanTrue_11034ab68;
  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uStack_170 = param_4;
  ppuStack_168 = ppuVar15;
  pppuStack_160 = &ppuStack_d0;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_188;
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_180 = puVar13;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_1a8 = FUN_107cb6100;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_1b0 = &pppuStack_160;
  _objc_retain();
  _objc_retain(ppuVar11);
  ppuStack_218 = &PTR____CFConstantStringClassReference_110f42898;
  puVar1 = puVar13;
  if (puVar13 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_210 = &PTR____CFConstantStringClassReference_110f42978;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_200 = puVar1;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_208 = &PTR____CFConstantStringClassReference_110f41cb8;
  ppuVar3 = ppuVar11;
  puStack_1f8 = puVar2;
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_1f0 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar11 == (undefined **)0x0) {
    _objc_release(ppuVar3);
  }
  _objc_release(puVar2);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(ppuVar11);
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_228 = FUN_107cb6254;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_268 = &PTR____CFConstantStringClassReference_110f42c78;
  ppuStack_260 = &PTR____CFConstantStringClassReference_110f41858;
  puStack_258 = PTR____kCFBooleanTrue_11034ab68;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  ppuStack_240 = ppuVar11;
  puStack_238 = puVar13;
  ppppuStack_230 = &ppppuStack_1b0;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_258;
  pppuVar12 = &ppuStack_268;
  puVar13 = (undefined *)0x2;
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_250 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar11);
  _objc_retain(pppuVar12);
  _objc_retain(puVar13);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar11;
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  pppuVar6 = pppuVar12;
  if (pppuVar12 == (undefined ***)0x0) {
    pppuVar6 = (undefined ***)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = puVar13;
  if (puVar13 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  if (pppuVar12 == (undefined ***)0x0) {
    _objc_release(pppuVar6);
  }
  if (ppuVar11 == (undefined **)0x0) {
    _objc_release(ppuVar3);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(pppuVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  if (ppuVar11 == (undefined **)0x0) {
LAB_107cb6634:
    ppuVar15 = (undefined **)0x0;
  }
  else {
    ppuVar15 = ppuVar11;
    func_0x00010c275280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar15;
    func_0x00010c08fa60();
    if ((ppuVar3 == (undefined **)0x0) ||
       (ppuVar3 = ppuVar11, func_0x00010c27b920(), ppuVar3 != (undefined **)0x0)) {
      _objc_release(ppuVar15);
      goto LAB_107cb6634;
    }
    ppuVar3 = ppuVar11;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar15);
    if (ppuVar3 != (undefined **)0x0) goto LAB_107cb6634;
    ppuVar15 = ppuVar11;
    func_0x00010c275280(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar11);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
  return;
}



/* Entry: 107cb5f2c; end: 107cb6047;  */

void FUN_107cb5f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined1 ***pppuStack_170;
  code *pcStack_168;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  long lStack_128;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_68 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f42998;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f42978;
  _objc_retain(param_4);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f41858;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_60 = puVar13;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f429d8;
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_58 = puVar1;
  uStack_50 = param_4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_98 = FUN_107cb6048;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f42c18;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f41858;
  puStack_c8 = PTR____kCFBooleanTrue_11034ab68;
  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uStack_b0 = param_4;
  ppuStack_a8 = ppuVar15;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_c8;
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c0 = puVar13;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_e8 = FUN_107cb6100;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f0 = &puStack_a0;
  _objc_retain();
  _objc_retain(ppuVar11);
  ppuStack_158 = &PTR____CFConstantStringClassReference_110f42898;
  puVar1 = puVar13;
  if (puVar13 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_150 = &PTR____CFConstantStringClassReference_110f42978;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_140 = puVar1;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_148 = &PTR____CFConstantStringClassReference_110f41cb8;
  ppuVar3 = ppuVar11;
  puStack_138 = puVar2;
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_130 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar11 == (undefined **)0x0) {
    _objc_release(ppuVar3);
  }
  _objc_release(puVar2);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(ppuVar11);
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_168 = FUN_107cb6254;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110f42c78;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110f41858;
  puStack_198 = PTR____kCFBooleanTrue_11034ab68;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  ppuStack_180 = ppuVar11;
  puStack_178 = puVar13;
  pppuStack_170 = &ppuStack_f0;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_198;
  pppuVar12 = &ppuStack_1a8;
  puVar13 = (undefined *)0x2;
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_190 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar11);
  _objc_retain(pppuVar12);
  _objc_retain(puVar13);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar11;
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  pppuVar6 = pppuVar12;
  if (pppuVar12 == (undefined ***)0x0) {
    pppuVar6 = (undefined ***)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = puVar13;
  if (puVar13 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  if (pppuVar12 == (undefined ***)0x0) {
    _objc_release(pppuVar6);
  }
  if (ppuVar11 == (undefined **)0x0) {
    _objc_release(ppuVar3);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(pppuVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  if (ppuVar11 == (undefined **)0x0) {
LAB_107cb6634:
    ppuVar15 = (undefined **)0x0;
  }
  else {
    ppuVar15 = ppuVar11;
    func_0x00010c275280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar15;
    func_0x00010c08fa60();
    if ((ppuVar3 == (undefined **)0x0) ||
       (ppuVar3 = ppuVar11, func_0x00010c27b920(), ppuVar3 != (undefined **)0x0)) {
      _objc_release(ppuVar15);
      goto LAB_107cb6634;
    }
    ppuVar3 = ppuVar11;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar15);
    if (ppuVar3 != (undefined **)0x0) goto LAB_107cb6634;
    ppuVar15 = ppuVar11;
    func_0x00010c275280(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar11);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
  return;
}



/* Entry: 107cb6048; end: 107cb60ff;  */

void FUN_107cb6048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f42c18;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f41858;
  puStack_38 = PTR____kCFBooleanTrue_11034ab68;
  puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_38;
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar13;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_58 = FUN_107cb6100;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppuVar11);
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f42898;
  puVar1 = puVar13;
  if (puVar13 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f42978;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar1;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f41cb8;
  ppuVar3 = ppuVar11;
  puStack_a8 = puVar2;
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_a0 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar11 == (undefined **)0x0) {
    _objc_release(ppuVar3);
  }
  _objc_release(puVar2);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(ppuVar11);
  _objc_release(puVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_d8 = FUN_107cb6254;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f42c78;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f41858;
  puStack_108 = PTR____kCFBooleanTrue_11034ab68;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  ppuStack_f0 = ppuVar11;
  puStack_e8 = puVar13;
  ppuStack_e0 = &puStack_60;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_108;
  pppuVar12 = &ppuStack_118;
  puVar13 = (undefined *)0x2;
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_100 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar11);
  _objc_retain(pppuVar12);
  _objc_retain(puVar13);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar11;
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  pppuVar6 = pppuVar12;
  if (pppuVar12 == (undefined ***)0x0) {
    pppuVar6 = (undefined ***)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = puVar13;
  if (puVar13 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  if (pppuVar12 == (undefined ***)0x0) {
    _objc_release(pppuVar6);
  }
  if (ppuVar11 == (undefined **)0x0) {
    _objc_release(ppuVar3);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(pppuVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  if (ppuVar11 == (undefined **)0x0) {
LAB_107cb6634:
    ppuVar15 = (undefined **)0x0;
  }
  else {
    ppuVar15 = ppuVar11;
    func_0x00010c275280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar15;
    func_0x00010c08fa60();
    if ((ppuVar3 == (undefined **)0x0) ||
       (ppuVar3 = ppuVar11, func_0x00010c27b920(), ppuVar3 != (undefined **)0x0)) {
      _objc_release(ppuVar15);
      goto LAB_107cb6634;
    }
    ppuVar3 = ppuVar11;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar15);
    if (ppuVar3 != (undefined **)0x0) goto LAB_107cb6634;
    ppuVar15 = ppuVar11;
    func_0x00010c275280(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar11);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
  return;
}



/* Entry: 107cb6100; end: 107cb6253;  */

void FUN_107cb6100(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_5);
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f42898;
  puVar1 = param_3;
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f42978;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_60 = puVar1;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f41cb8;
  puVar2 = param_5;
  puStack_58 = puVar13;
  if (param_5 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar13);
  if (param_3 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_88 = FUN_107cb6254;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f42c78;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f41858;
  puStack_b8 = PTR____kCFBooleanTrue_11034ab68;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puStack_a0 = param_5;
  puStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_b8;
  pppuVar12 = &ppuStack_c8;
  puVar13 = (undefined *)0x2;
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_b0 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar11);
  _objc_retain(pppuVar12);
  _objc_retain(puVar13);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar11;
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  pppuVar6 = pppuVar12;
  if (pppuVar12 == (undefined ***)0x0) {
    pppuVar6 = (undefined ***)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = puVar13;
  if (puVar13 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  if (pppuVar12 == (undefined ***)0x0) {
    _objc_release(pppuVar6);
  }
  if (ppuVar11 == (undefined **)0x0) {
    _objc_release(ppuVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(pppuVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  if (ppuVar11 == (undefined **)0x0) {
LAB_107cb6634:
    ppuVar15 = (undefined **)0x0;
  }
  else {
    ppuVar15 = ppuVar11;
    func_0x00010c275280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar15;
    func_0x00010c08fa60();
    if ((ppuVar5 == (undefined **)0x0) ||
       (ppuVar5 = ppuVar11, func_0x00010c27b920(), ppuVar5 != (undefined **)0x0)) {
      _objc_release(ppuVar15);
      goto LAB_107cb6634;
    }
    ppuVar5 = ppuVar11;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar15);
    if (ppuVar5 != (undefined **)0x0) goto LAB_107cb6634;
    ppuVar15 = ppuVar11;
    func_0x00010c275280(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar11);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
  return;
}



/* Entry: 107cb6254; end: 107cb630b;  */

void FUN_107cb6254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f42c78;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f41858;
  puStack_38 = PTR____kCFBooleanTrue_11034ab68;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &puStack_38;
  pppuVar12 = &ppuStack_48;
  puVar13 = (undefined *)0x2;
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar11);
  _objc_retain(pppuVar12);
  _objc_retain(puVar13);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar11;
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  pppuVar6 = pppuVar12;
  if (pppuVar12 == (undefined ***)0x0) {
    pppuVar6 = (undefined ***)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = puVar13;
  if (puVar13 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar13 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  if (pppuVar12 == (undefined ***)0x0) {
    _objc_release(pppuVar6);
  }
  if (ppuVar11 == (undefined **)0x0) {
    _objc_release(ppuVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(pppuVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  if (ppuVar11 == (undefined **)0x0) {
LAB_107cb6634:
    ppuVar15 = (undefined **)0x0;
  }
  else {
    ppuVar15 = ppuVar11;
    func_0x00010c275280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar15;
    func_0x00010c08fa60();
    if ((ppuVar5 == (undefined **)0x0) ||
       (ppuVar5 = ppuVar11, func_0x00010c27b920(), ppuVar5 != (undefined **)0x0)) {
      _objc_release(ppuVar15);
      goto LAB_107cb6634;
    }
    ppuVar5 = ppuVar11;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar15);
    if (ppuVar5 != (undefined **)0x0) goto LAB_107cb6634;
    ppuVar15 = ppuVar11;
    func_0x00010c275280(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar11);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
  return;
}



/* Entry: 107cb630c; end: 107cb65e7;  */

void FUN_107cb630c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_5;
  if (param_5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = param_6;
  if (param_6 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = param_7;
  if (param_7 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (param_7 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  if (param_6 == (undefined *)0x0) {
    _objc_release(puVar6);
  }
  if (param_5 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  if (param_5 == (undefined *)0x0) {
LAB_107cb6634:
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar1 = param_5;
    func_0x00010c275280();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    if ((puVar2 == (undefined *)0x0) ||
       (puVar2 = param_5, func_0x00010c27b920(), puVar2 != (undefined *)0x0)) {
      _objc_release(puVar1);
      goto LAB_107cb6634;
    }
    puVar2 = param_5;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) goto LAB_107cb6634;
    puVar12 = param_5;
    func_0x00010c275280(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 107cb65e8; end: 107cb668f;  */

void FUN_107cb65e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c275280();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    if ((lVar1 == 0) || (lVar1 = param_1, func_0x00010c27b920(), lVar1 != 0)) {
      _objc_release(lVar2);
    }
    else {
      lVar1 = param_1;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (lVar1 == 0) {
        lVar2 = param_1;
        func_0x00010c275280(param_1);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107cb6638;
      }
    }
  }
  lVar2 = 0;
LAB_107cb6638:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107cb6690; end: 107cb6857;  */

undefined * FUN_107cb6690(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010c27dd80(), lVar1 == 0)) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d7558;
    _objc_alloc_init();
    func_0x00010c27dd80();
    func_0x00010c21acc0(puVar2);
    lVar1 = param_1;
    func_0x00010bfb9180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      lVar3 = param_2;
      func_0x00010c08fa60();
      if ((lVar3 != 0) &&
         ((lVar3 = param_1, func_0x00010c27dd80(), lVar3 == 6 ||
          (lVar3 = param_1, func_0x00010c27dd80(), lVar3 == 1)))) {
        func_0x00010c21e6e0(puVar2);
      }
    }
    else {
      func_0x00010bf529e0();
      lVar3 = lVar1;
      func_0x00010c25e980(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e6e0(puVar2);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar5 = param_1;
  func_0x00010c27dd80();
  if (lVar5 == 1) {
    puVar6 = (undefined *)0x1;
  }
  else {
    lVar5 = param_1;
    func_0x00010c27dd80(param_1);
    puVar6 = (undefined *)(ulong)(lVar5 == 6);
  }
  _objc_release(param_1);
  return puVar6;
}



/* Entry: 107cb6858; end: 107cb68ab;  */

bool FUN_107cb6858(long param_1)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c27dd80();
  if (lVar2 == 1) {
    bVar1 = true;
  }
  else {
    lVar2 = param_1;
    func_0x00010c27dd80(param_1);
    bVar1 = lVar2 == 6;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107cb68ac; end: 107cb692f;  */

void FUN_107cb68ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c27dd80();
  if (lVar2 == 4) {
    lVar1 = param_1;
    func_0x00010bfb9180(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    lVar2 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107cb6930; end: 107cb6a83;  */

void FUN_107cb6930(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107cb6a84;
  uStack_40 = 0x107cb6a94;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010c259560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf680();
  _objc_release(uVar1);
  uVar3 = puStack_58[5];
  uVar1 = param_1;
  func_0x00010c25a160(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  FUN_107cb6690(uVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107cb6a84; end: 107cb6a9b;  */

void FUN_107cb6a84(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cb6a9c; end: 107cb6b2b;  */

void FUN_107cb6a9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24c480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf28980();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cb6b2c; end: 107cb6c5f;  */

void FUN_107cb6b2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107cb6a84;
  uStack_40 = 0x107cb6a94;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010c259560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf680();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cb6c60; end: 107cb6d4f;  */

void FUN_107cb6c60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c24b260();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cb6d50; end: 107cb707f;  */

ulong FUN_107cb6d50(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb5df8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb5e98);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cb7080; end: 107cb70e3;  */

void FUN_107cb7080(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cc070);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113727990;
  puRam0000000113727990 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cb70e4; end: 107cb7167;  */

undefined8 FUN_107cb70e4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (lRam00000001137279a8 != -1) {
    func_0x00010002a2fc(0x1137279a8,&PTR___NSConcreteGlobalBlock_110a06698);
  }
  uVar2 = uRam00000001137279a0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 107cb7168; end: 107cb71b7;  */

void FUN_107cb7168(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cc088);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137279a0;
  puRam00000001137279a0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cb71b8; end: 107cb7273;  */

void FUN_107cb71b8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar2 = param_1;
  func_0x000107cb6e48(param_1,&PTR____CFConstantStringClassReference_110f41858,puVar1);
  if ((int)puVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar1);
    puVar1 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107cb7274; end: 107cb72f7;  */

undefined8 FUN_107cb7274(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (lRam00000001137279b8 != -1) {
    func_0x00010002a2fc(0x1137279b8,&PTR___NSConcreteGlobalBlock_110a066b8);
  }
  uVar2 = uRam00000001137279b0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 107cb72f8; end: 107cb736f;  */

void FUN_107cb72f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cc0d0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137279b0;
  puRam00000001137279b0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cb7370; end: 107cb73e3;  */

undefined8 FUN_107cb7370(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (lRam00000001137279c8 != -1) {
      func_0x00010002a2fc(0x1137279c8,&PTR___NSConcreteGlobalBlock_110a066d8);
    }
    uVar1 = uRam00000001137279c0;
    func_0x00010bf4b900(uRam00000001137279c0);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cb73e4; end: 107cb745b;  */

void FUN_107cb73e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110eb8ad8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137279c0;
  puRam00000001137279c0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cb745c; end: 107cb7583;  */

ulong FUN_107cb745c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar5 = 0xffffffffffffffff;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar5 = param_2;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    if (uVar1 != 0) {
      uVar5 = 0;
      do {
        uVar1 = param_2;
        func_0x00010c241660(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((int)lVar4 != 0) goto LAB_107cb7558;
        uVar5 = uVar5 + 1;
        uVar1 = param_2;
        func_0x00010c241660();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf529e0();
        _objc_release(uVar1);
      } while (uVar5 < uVar2);
    }
    uVar5 = 0xffffffffffffffff;
  }
LAB_107cb7558:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 107cb7584; end: 107cb75ff;  */

long FUN_107cb7584(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = -1;
  }
  else {
    lVar1 = param_1;
    func_0x00010c241660(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 107cb7600; end: 107cb7683;  */

undefined8 FUN_107cb7600(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (lRam00000001137279d8 != -1) {
    func_0x00010002a2fc(0x1137279d8,&PTR___NSConcreteGlobalBlock_110a066f8);
  }
  uVar2 = uRam00000001137279d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 107cb7684; end: 107cb76d3;  */

void FUN_107cb7684(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cc070);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137279d0;
  puRam00000001137279d0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cb76d4; end: 107cb77bb;  */

void FUN_107cb76d4(undefined *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  lVar1 = param_2;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26ebe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_1);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(param_1);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cb77bc; end: 107cb783f;  */

undefined8 FUN_107cb77bc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (lRam00000001137279e8 != -1) {
    func_0x00010002a2fc(0x1137279e8,&PTR___NSConcreteGlobalBlock_110a06718);
  }
  uVar2 = uRam00000001137279e0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 107cb7840; end: 107cb7bdb;  */

void FUN_107cb7840(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cc130);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137279e0;
  puRam00000001137279e0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cb7bdc; end: 107cb7c43;  */

undefined8 FUN_107cb7bdc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = lRam00000001137279f8;
  _objc_retain();
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1137279f8,&PTR___NSConcreteGlobalBlock_110a06738);
  }
  uVar2 = uRam00000001137279f0;
  func_0x00010bf4b900(uRam00000001137279f0);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107cb7c44; end: 107cb7c8f;  */

void FUN_107cb7c44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110eb6858);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137279f0;
  puRam00000001137279f0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cb7c90; end: 107cb7d33;  */

void FUN_107cb7c90(double param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  if (NAN(param_1)) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110eb51f8;
  }
  else if (ABS(param_1) == INFINITY) {
    if (0.0 <= param_1) {
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186480;
    }
    else {
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186470;
    }
    func_0x00010c25d700(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107cb7d34; end: 107cb7dff;  */

void FUN_107cb7d34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uStack_38 = 0;
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,0,&uStack_38
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_38;
    _objc_retain(uStack_38);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107cb7e00; end: 107cb7eaf;  */

void FUN_107cb7e00(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08fa60();
  uVar3 = param_1;
  if (uVar1 != 0) {
    uVar1 = 0;
    do {
      uVar4 = uVar1;
      uVar1 = param_1;
      func_0x00010c08fa60();
      if (uVar1 <= uVar4) break;
      uVar2 = param_1;
      func_0x00010bf35920(param_1,param_2,uVar4);
      uVar1 = uVar4 + 1;
    } while (((int)uVar2 == 0x23) || ((int)uVar2 - 0x30U < 10));
    if ((uVar4 != 0) && (uVar1 = param_1, func_0x00010c08fa60(), uVar4 < uVar1)) {
      func_0x00010c260c00(param_1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107cb7e98;
    }
  }
  _objc_retain(param_1);
LAB_107cb7e98:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107cb7eb0; end: 107cb7fc3;  */

void FUN_107cb7eb0(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      uVar3 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar5 & 1) == 0) goto LAB_107cb7f9c;
    }
    if (param_1 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar4);
    }
    else {
      func_0x00010c1d0640(param_3);
    }
  }
LAB_107cb7f9c:
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cb7fc4; end: 107cb8017;  */

void FUN_107cb7fc4(long param_1,long param_2)

{
  if (((param_1 != 0) && (param_2 != 0)) && (func_0x00010bfecde0(), param_2 != 0x7fffffffffffffff))
  {
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107cb8018; end: 107cb8137;  */

ulong FUN_107cb8018(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
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
  dVar5 = 0.0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    lVar3 = *plStack_110;
    do {
      uVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(undefined8 *)(lStack_118 + uVar4 * 8);
        func_0x00010c0c4c20(uVar2);
        if (0.0 < dVar5) {
          func_0x00010c0c4c20(uVar2);
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
      uVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (uVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110db8b78);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f4b1d8);
    uVar1 = (ulong)((uint)uVar1 ^ 1);
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107cb8138; end: 107cb8193;  */

uint FUN_107cb8138(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110db8b78);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f4b1d8);
    uVar2 = (uint)uVar1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107cb8194; end: 107cbae0f;  */

ulong FUN_107cb8194(ulong param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
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
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong unaff_x23;
  ulong uVar18;
  ulong uVar19;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar18 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar18;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
LAB_107cb8278:
    _objc_release(uVar18);
  }
  else {
    uVar3 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar3);
      goto LAB_107cb8278;
    }
    unaff_x23 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = unaff_x23;
    func_0x00010c0720c0();
    _objc_release(unaff_x23);
    _objc_release(uVar3);
    _objc_release(uVar18);
    if ((uVar4 & 1) != 0) {
      uVar18 = 0;
      goto LAB_107cb8924;
    }
  }
  uVar18 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar18;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
LAB_107cb8344:
    _objc_release(uVar18);
  }
  else {
    uVar3 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
LAB_107cb833c:
      _objc_release(uVar3);
      goto LAB_107cb8344;
    }
    unaff_x23 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = unaff_x23;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      _objc_release(unaff_x23);
      goto LAB_107cb833c;
    }
    uVar4 = param_2;
    func_0x000108f547b0();
    _objc_release(unaff_x23);
    _objc_release(uVar3);
    _objc_release(uVar18);
    if ((uVar4 & 1) != 0) {
      uVar18 = 1;
      goto LAB_107cb8924;
    }
  }
  uVar3 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar3;
  func_0x00010c0720c0();
  if ((uVar18 & 1) == 0) {
    uVar4 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    if ((int)uVar5 == 0) {
LAB_107cb83e8:
      uVar6 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar6;
      func_0x00010c0720c0();
      if ((int)uVar19 == 0) {
LAB_107cb8450:
        uVar7 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0720c0();
        if ((int)uVar8 != 0) {
          unaff_x23 = param_1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = unaff_x23;
          func_0x00010c0720c0();
          if ((uVar18 & 1) == 0) goto LAB_107cb84d8;
LAB_107cb84ac:
          _objc_release(unaff_x23);
LAB_107cb84b4:
          _objc_release(uVar7);
          if ((uVar19 & 1) != 0) goto LAB_107cb84c4;
          goto LAB_107cb84c8;
        }
LAB_107cb84d8:
        uVar9 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0720c0();
        if ((int)uVar10 != 0) {
          uStack_a8 = param_1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uStack_a8;
          func_0x00010c0720c0();
          if ((uVar18 & 1) == 0) goto LAB_107cb8544;
          uVar18 = 1;
LAB_107cb88c8:
          _objc_release(uStack_a8);
LAB_107cb88d0:
          _objc_release(uVar9);
          if ((uVar8 & 1) != 0) {
            _objc_release(unaff_x23);
          }
          _objc_release(uVar7);
          if ((uVar19 & 1) != 0) {
            _objc_release(uStack_b0);
          }
          _objc_release(uVar6);
          goto LAB_107cb8904;
        }
LAB_107cb8544:
        uVar11 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c0720c0();
        if ((int)uVar12 == 0) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          uStack_b8 = param_1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uStack_b8;
          func_0x00010c0720c0();
          if ((int)uVar18 == 0) {
            bVar2 = false;
            bVar1 = false;
          }
          else {
            uStack_c8 = param_1;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uStack_c8;
            func_0x00010c0720c0();
            if ((int)uVar18 != 0) {
              uStack_d0 = param_1;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              uVar18 = uStack_d0;
              func_0x00010c0720c0();
              if ((uVar18 & 1) == 0) {
                uStack_d8 = param_1;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                uVar18 = uStack_d8;
                func_0x00010c0720c0();
                if ((int)uVar18 == 0) {
                  bVar2 = true;
                  bVar1 = true;
                  goto LAB_107cb8690;
                }
                _objc_release(uStack_d8);
              }
              _objc_release(uStack_d0);
              _objc_release(uStack_c8);
              _objc_release(uStack_b8);
              _objc_release(uVar11);
              if ((uVar10 & 1) != 0) {
                _objc_release(uStack_a8);
              }
              _objc_release(uVar9);
              if ((uVar8 & 1) != 0) goto LAB_107cb84ac;
              goto LAB_107cb84b4;
            }
            bVar1 = false;
            bVar2 = true;
          }
        }
LAB_107cb8690:
        uVar13 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar13;
        func_0x00010c0720c0();
        if ((int)uVar18 == 0) {
          _objc_release(uVar13);
joined_r0x000107cb8764:
          uVar18 = 0;
          if (bVar1) goto LAB_107cb8768;
LAB_107cb88a0:
          if (bVar2) goto LAB_107cb88a8;
LAB_107cb8780:
          if ((int)uVar12 == 0) goto LAB_107cb88b8;
        }
        else {
          uVar14 = param_1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar14;
          func_0x00010c0720c0();
          if ((int)uVar18 == 0) {
            _objc_release(uVar14);
            _objc_release(uVar13);
            uVar18 = 0;
          }
          else {
            uVar15 = param_1;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar15;
            func_0x00010c0720c0();
            if ((int)uVar18 == 0) {
              _objc_release(uVar15);
              _objc_release(uVar14);
              _objc_release(uVar13);
              uVar19 = uVar19 & 0xffffffff;
              goto joined_r0x000107cb8764;
            }
            uVar16 = param_1;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar18 = uVar16;
            func_0x00010c0720c0();
            if ((uVar18 & 1) == 0) {
              uVar17 = param_1;
              func_0x00010c0e00e0(param_1);
              _objc_retainAutoreleasedReturnValue();
              uVar18 = uVar17;
              func_0x00010c0720c0();
              _objc_release(uVar17);
            }
            else {
              uVar18 = 1;
            }
            uVar19 = uVar19 & 0xffffffff;
            _objc_release(uVar16);
            _objc_release(uVar15);
            _objc_release(uVar14);
            _objc_release(uVar13);
          }
          if (!bVar1) goto LAB_107cb88a0;
LAB_107cb8768:
          _objc_release(uStack_d8);
          _objc_release(uStack_d0);
          if (!bVar2) goto LAB_107cb8780;
LAB_107cb88a8:
          _objc_release(uStack_c8);
          if ((uVar12 & 1) == 0) {
LAB_107cb88b8:
            _objc_release(uVar11);
            if ((uVar10 & 1) != 0) goto LAB_107cb88c8;
            goto LAB_107cb88d0;
          }
        }
        _objc_release(uStack_b8);
        _objc_release(uVar11);
        if ((uVar10 & 1) != 0) {
          _objc_release(uStack_a8);
        }
        _objc_release(uVar9);
        if ((uVar8 & 1) != 0) {
          _objc_release(unaff_x23);
        }
        _objc_release(uVar7);
        if ((uVar19 & 1) != 0) {
          _objc_release(uStack_b0);
        }
        _objc_release(uVar6);
        if ((int)uVar5 != 0) goto LAB_107cb890c;
      }
      else {
        uStack_b0 = param_1;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uStack_b0;
        func_0x00010bfda7c0();
        unaff_x23 = uStack_b0;
        if ((int)uVar18 == 0) goto LAB_107cb8450;
LAB_107cb84c4:
        _objc_release(uStack_b0);
LAB_107cb84c8:
        _objc_release(uVar6);
        uVar18 = 1;
LAB_107cb8904:
        if ((uVar5 & 1) != 0) goto LAB_107cb890c;
      }
    }
    else {
      uStack_68 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uStack_68;
      func_0x00010c0720c0();
      if ((uVar18 & 1) == 0) goto LAB_107cb83e8;
      uVar18 = 1;
LAB_107cb890c:
      _objc_release(uStack_68);
    }
    _objc_release(uVar4);
  }
  else {
    uVar18 = 1;
  }
  _objc_release(uVar3);
LAB_107cb8924:
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar18;
}



/* Entry: 107cbae10; end: 107cbb39f;  */

void FUN_107cbae10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x000108f54788();
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126d7560;
    _objc_opt_new(PTR_PTR_1126d7560);
    uVar1 = param_1;
    func_0x00010bf0a640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107cb9ea0(puVar2,uVar1,param_2,param_3,param_4);
    _objc_release(uVar1);
    func_0x00010c0b2e60(param_5);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cbb3a0; end: 107cbb44f; -[SCDiscoverFeedStory xLogObjectInfo] */

undefined1 * FUN_107cbb3a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110eb3f98;
  func_0x00010c259740();
  func_0x00010c0df880();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_30;
  pppuVar7 = &ppuStack_38;
  uVar8 = 1;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_80;
  _objc_retain(ppuVar6);
  _objc_retain(pppuVar7);
  _objc_retain(uVar8);
  puStack_78 = PTR_PTR_1126fa648;
  puStack_80 = puVar1;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar4 = ppuVar6;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)ppuVar3 + 8);
    *(undefined ***)((long)ppuVar3 + 8) = ppuVar4;
    _objc_release(uVar9);
    pppuVar5 = pppuVar7;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined ****)((long)ppuVar3 + 0x10) = pppuVar5;
    _objc_release(uVar9);
    uVar9 = uVar8;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined8 *)((long)ppuVar3 + 0x18) = uVar9;
    _objc_release(uVar10);
  }
  _objc_release(uVar8);
  _objc_release(pppuVar7);
  _objc_release(ppuVar6);
  return (undefined1 *)ppuVar3;
}



/* Entry: 107cbb450; end: 107cbb527; -[SCDiscoverFeedPresentCustomStoryMiniProfileActionDataModel initWithPublicationId:groupId:loggingInfo:] */

undefined1 *
FUN_107cbb450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa648;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cbb528; end: 107cbb54b; -[SCDiscoverFeedPresentCustomStoryMiniProfileActionDataModel copyWithZone:] */

undefined8 FUN_107cbb528(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107cbb54c; end: 107cbb5cb; -[SCDiscoverFeedPresentCustomStoryMiniProfileActionDataModel hash] */

undefined8 * FUN_107cbb54c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107cbb664:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107cbb670;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_107cbb670;
          }
          goto LAB_107cbb664;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107cbb670:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107cbb5cc; end: 107cbb68b; -[SCDiscoverFeedPresentCustomStoryMiniProfileActionDataModel isEqual:] */

long FUN_107cbb5cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107cbb664:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107cbb670;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_107cbb670;
          }
          goto LAB_107cbb664;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107cbb670:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107cbb68c; end: 107cbb693; -[SCDiscoverFeedPresentCustomStoryMiniProfileActionDataModel publicationId] */

undefined8 FUN_107cbb68c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107cbb694; end: 107cbb69b; -[SCDiscoverFeedPresentCustomStoryMiniProfileActionDataModel groupId] */

undefined8 FUN_107cbb694(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cbb69c; end: 107cbb6a3; -[SCDiscoverFeedPresentCustomStoryMiniProfileActionDataModel loggingInfo] */

undefined8 FUN_107cbb69c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cbb6a4; end: 107cbb6df; -[SCDiscoverFeedPresentCustomStoryMiniProfileActionDataModel .cxx_destruct] */

void FUN_107cbb6a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cbb6e0; end: 107cbb767; -[SCDiscoverFeedSectionHeaderSecondayButtonActionDataModel initWithFeedType:sectionIdentifier:] */

undefined1 *
FUN_107cbb6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa650;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107cbb768; end: 107cbb78b; -[SCDiscoverFeedSectionHeaderSecondayButtonActionDataModel copyWithZone:] */

undefined8 FUN_107cbb768(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107cbb78c; end: 107cbb7eb; -[SCDiscoverFeedSectionHeaderSecondayButtonActionDataModel hash] */

undefined8 * FUN_107cbb78c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107cbb870;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_107cbb870;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_107cbb870;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_107cbb870:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 107cbb7ec; end: 107cbb88b; -[SCDiscoverFeedSectionHeaderSecondayButtonActionDataModel isEqual:] */

long FUN_107cbb7ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107cbb870;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_107cbb870;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_107cbb870;
    }
  }
  lVar3 = 1;
LAB_107cbb870:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107cbb88c; end: 107cbb893; -[SCDiscoverFeedSectionHeaderSecondayButtonActionDataModel feedType] */

undefined8 FUN_107cbb88c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107cbb894; end: 107cbb89b; -[SCDiscoverFeedSectionHeaderSecondayButtonActionDataModel sectionIdentifier] */

undefined8 FUN_107cbb894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cbb89c; end: 107cbb8a7; -[SCDiscoverFeedSectionHeaderSecondayButtonActionDataModel .cxx_destruct] */

void FUN_107cbb89c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107cbb8a8; end: 107cbb95b; -[SCDiscoverFeedSetSubscribeStateForStoryActionDataModel initWithStory:subscribeState:sectionKey:] */

undefined1 *
FUN_107cbb8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa658;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cbb95c; end: 107cbb97f; -[SCDiscoverFeedSetSubscribeStateForStoryActionDataModel copyWithZone:] */

undefined8 FUN_107cbb95c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107cbb980; end: 107cbb9f7; -[SCDiscoverFeedSetSubscribeStateForStoryActionDataModel hash] */

undefined8 * FUN_107cbb980(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107cbba88:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107cbba94;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107cbba94;
        }
        goto LAB_107cbba88;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107cbba94:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107cbb9f8; end: 107cbbaaf; -[SCDiscoverFeedSetSubscribeStateForStoryActionDataModel isEqual:] */

long FUN_107cbb9f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107cbba88:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107cbba94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_107cbba94;
        }
        goto LAB_107cbba88;
      }
    }
    lVar3 = 0;
  }
LAB_107cbba94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107cbbab0; end: 107cbbab7; -[SCDiscoverFeedSetSubscribeStateForStoryActionDataModel story] */

undefined8 FUN_107cbbab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cbbab8; end: 107cbbabf; -[SCDiscoverFeedSetSubscribeStateForStoryActionDataModel subscribeState] */

undefined1 FUN_107cbbab8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107cbbac0; end: 107cbbac7; -[SCDiscoverFeedSetSubscribeStateForStoryActionDataModel sectionKey] */

undefined8 FUN_107cbbac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cbbac8; end: 107cbbaf7; -[SCDiscoverFeedSetSubscribeStateForStoryActionDataModel .cxx_destruct] */

void FUN_107cbbac8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107cbbaf8; end: 107cbbbe7; -[SCDiscoverFeedPresentFriendMiniProfileActionDataModel initWithUserId:loggingInfo:showHideStorySuggestions:isSuggested:sectionKey:] */

undefined1 *
FUN_107cbbaf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fa660;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cbbbe8; end: 107cbbc0b; -[SCDiscoverFeedPresentFriendMiniProfileActionDataModel copyWithZone:] */

undefined8 FUN_107cbbbe8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107cbbc0c; end: 107cbbc97; -[SCDiscoverFeedPresentFriendMiniProfileActionDataModel hash] */

undefined8 * FUN_107cbbc0c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107cbbd50:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107cbbd5c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_107cbbd5c;
          }
          goto LAB_107cbbd50;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107cbbd5c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107cbbc98; end: 107cbbd77; -[SCDiscoverFeedPresentFriendMiniProfileActionDataModel isEqual:] */

long FUN_107cbbc98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107cbbd50:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107cbbd5c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_107cbbd5c;
          }
          goto LAB_107cbbd50;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107cbbd5c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107cbbd78; end: 107cbbd7f; -[SCDiscoverFeedPresentFriendMiniProfileActionDataModel userId] */

undefined8 FUN_107cbbd78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cbbd80; end: 107cbbd87; -[SCDiscoverFeedPresentFriendMiniProfileActionDataModel loggingInfo] */

undefined8 FUN_107cbbd80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cbbd88; end: 107cbbd8f; -[SCDiscoverFeedPresentFriendMiniProfileActionDataModel showHideStorySuggestions] */

undefined1 FUN_107cbbd88(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107cbbd90; end: 107cbbd97; -[SCDiscoverFeedPresentFriendMiniProfileActionDataModel isSuggested] */

undefined1 FUN_107cbbd90(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107cbbd98; end: 107cbbd9f; -[SCDiscoverFeedPresentFriendMiniProfileActionDataModel sectionKey] */

undefined8 FUN_107cbbd98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107cbbda0; end: 107cbbddb; -[SCDiscoverFeedPresentFriendMiniProfileActionDataModel .cxx_destruct] */

void FUN_107cbbda0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107cbbddc; end: 107cbbf8b; -[SCDiscoverFeedPerformPostStoryActionDataModel initWithActionId:userId:currentFriendStory:rankedFriendStories:allFriendStories:loggingInfo:itemSource:exitOperaOffsetArray:isExpandedViewController:] */

undefined1 *
FUN_107cbbddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fa668;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_11;
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cbbf8c; end: 107cbbfaf; -[SCDiscoverFeedPerformPostStoryActionDataModel copyWithZone:] */

undefined8 FUN_107cbbf8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107cbbfb0; end: 107cbc06f; -[SCDiscoverFeedPerformPostStoryActionDataModel hash] */

undefined8 * FUN_107cbbfb0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x40);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107cbc188:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107cbc194;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x40) == *(long *)(param_3 + 0x40) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_107cbc194;
                  }
                  goto LAB_107cbc188;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107cbc194:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107cbc070; end: 107cbc1af; -[SCDiscoverFeedPerformPostStoryActionDataModel isEqual:] */

long FUN_107cbc070(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107cbc188:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107cbc194;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if (lVar3 != *(long *)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_107cbc194;
                  }
                  goto LAB_107cbc188;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107cbc194:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107cbc1b0; end: 107cbc1b7; -[SCDiscoverFeedPerformPostStoryActionDataModel actionId] */

undefined8 FUN_107cbc1b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cbc1b8; end: 107cbc1bf; -[SCDiscoverFeedPerformPostStoryActionDataModel userId] */

undefined8 FUN_107cbc1b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cbc1c0; end: 107cbc1c7; -[SCDiscoverFeedPerformPostStoryActionDataModel currentFriendStory] */

undefined8 FUN_107cbc1c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107cbc1c8; end: 107cbc1cf; -[SCDiscoverFeedPerformPostStoryActionDataModel rankedFriendStories] */

undefined8 FUN_107cbc1c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107cbc1d0; end: 107cbc1d7; -[SCDiscoverFeedPerformPostStoryActionDataModel allFriendStories] */

undefined8 FUN_107cbc1d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107cbc1d8; end: 107cbc1df; -[SCDiscoverFeedPerformPostStoryActionDataModel loggingInfo] */

undefined8 FUN_107cbc1d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107cbc1e0; end: 107cbc1e7; -[SCDiscoverFeedPerformPostStoryActionDataModel itemSource] */

undefined8 FUN_107cbc1e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107cbc1e8; end: 107cbc1ef; -[SCDiscoverFeedPerformPostStoryActionDataModel exitOperaOffsetArray] */

undefined8 FUN_107cbc1e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107cbc1f0; end: 107cbc1f7; -[SCDiscoverFeedPerformPostStoryActionDataModel isExpandedViewController] */

undefined1 FUN_107cbc1f0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107cbc1f8; end: 107cbc263; -[SCDiscoverFeedPerformPostStoryActionDataModel .cxx_destruct] */

void FUN_107cbc1f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107cbc264; end: 107cbc39b; -[SCStoriesEverywherePostStoryActionDataModel initWithActionId:userId:initialStory:allMixedStories:loggingInfo:] */

undefined1 *
FUN_107cbc264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fa670;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cbc39c; end: 107cbc3bf; -[SCStoriesEverywherePostStoryActionDataModel copyWithZone:] */

undefined8 FUN_107cbc39c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107cbc3c0; end: 107cbc457; -[SCStoriesEverywherePostStoryActionDataModel hash] */

undefined8 * FUN_107cbc3c0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107cbc520:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107cbc52c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_107cbc52c;
              }
              goto LAB_107cbc520;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107cbc52c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107cbc458; end: 107cbc547; -[SCStoriesEverywherePostStoryActionDataModel isEqual:] */

long FUN_107cbc458(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107cbc520:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107cbc52c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_107cbc52c;
              }
              goto LAB_107cbc520;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107cbc52c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107cbc548; end: 107cbc54f; -[SCStoriesEverywherePostStoryActionDataModel actionId] */

undefined8 FUN_107cbc548(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


