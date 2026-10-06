/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0049ed04; end: 0049ed0b; -[KSCrashDoctorParam setIsInstance:] */

void FUN_0049ed04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 0049ed0c; end: 0049ed13; -[KSCrashDoctorParam address] */

undefined8 FUN_0049ed0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0049ed14; end: 0049ed1b; -[KSCrashDoctorParam setAddress:] */

void FUN_0049ed14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 0049ed1c; end: 0049ed23; -[KSCrashDoctorParam value] */

undefined8 FUN_0049ed1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0049ed24; end: 0049ed43; -[KSCrashDoctorParam setValue:] */

void FUN_0049ed24(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004a09cc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049ed44; end: 0049ed4b; -[KSCrashDoctorParam type] */

undefined8 FUN_0049ed44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 0049ed4c; end: 0049ed6b; -[KSCrashDoctorParam setType:] */

void FUN_0049ed4c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004a09cc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049ed6c; end: 0049eda7; -[KSCrashDoctorParam .cxx_destruct] */

void FUN_0049ed6c(long param_1)

{
  func_0x004a0ac0(param_1 + 0x30);
  func_0x004a0ac0(param_1 + 0x28);
  func_0x004a0ac0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 0049eda8; end: 0049f123; -[KSCrashDoctorFunctionCall descriptionForObjCCall] */

/* WARNING: Removing unreachable block (ram,0x0049f018) */
/* WARNING: Removing unreachable block (ram,0x0049f04c) */
/* WARNING: Removing unreachable block (ram,0x0049f07c) */

void FUN_0049eda8(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  
  lVar3 = param_1;
  func_0x00789760();
  iVar2 = (int)lVar3;
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0ad0();
  func_0x004a09f4();
  if (iVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar3 = param_1;
    func_0x0078a2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x004a09f4();
    func_0x0078a9a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      func_0x00780260();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar3 = param_1;
    func_0x0078a2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x004a09f4();
    lVar4 = lVar3;
    func_0x00792f20();
    iVar2 = (int)lVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x004a0a68();
    func_0x004a09f4();
    if (iVar2 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      func_0x00793580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00780860();
      _objc_retainAutoreleasedReturnValue();
      func_0x004a09f4();
      lVar4 = lVar3;
      func_0x00780e80();
      puVar8 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
      uVar1 = (int)lVar4 - 1;
      func_0x00789e00(lVar3,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x007921a0(puVar8,param_2,&PTR____CFConstantStringClassReference_00a27220);
      _objc_retainAutoreleasedReturnValue();
      func_0x004a0a90();
      for (uVar7 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar7; uVar7 = uVar7 + 1) {
        func_0x0077ef80(puVar8,param_2,&PTR____CFConstantStringClassReference_00a27200);
        if (uVar7 < 2) {
          lVar5 = param_1;
          func_0x0078a2c0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00789e00();
          _objc_retainAutoreleasedReturnValue();
          func_0x004a09f4();
          func_0x00793580(lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x004a0b0c();
          if (lVar5 == 0) {
            func_0x0078a9a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x004a0b0c();
            func_0x00780260(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x004a0b0c();
            func_0x004a0af0();
          }
          else {
            lVar5 = lVar6;
            func_0x00792f20();
            iVar2 = (int)lVar5;
            _objc_retainAutoreleasedReturnValue();
            func_0x004a0a68();
            func_0x004a09f4();
            func_0x00793580();
            _objc_retainAutoreleasedReturnValue();
            if (iVar2 == 0) {
              func_0x0077ef80(puVar8,param_2,lVar6);
            }
            else {
              func_0x0077eec0(puVar8,param_2,&PTR____CFConstantStringClassReference_00a27240);
            }
            func_0x004a09f4();
          }
          func_0x004a0a44();
        }
        else {
          func_0x004a0af0();
        }
        if ((long)uVar7 < (long)((int)lVar4 + -2)) {
          func_0x0077ef80(puVar8,param_2,&PTR____CFConstantStringClassReference_00a27120);
        }
      }
      func_0x0077ef80(puVar8,param_2,&PTR____CFConstantStringClassReference_00a272c0);
      _objc_release(lVar3);
    }
    func_0x004a0a3c();
    func_0x004a0b04();
    func_0x004a0a10();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar8);
  return;
}



/* Entry: 0049f124; end: 0049f393; -[KSCrashDoctorFunctionCall descriptionWithParamCount:] */

void FUN_0049f124(undefined *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  puVar3 = param_1;
  func_0x00781e60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x0078a2c0();
    iVar2 = (int)puVar3;
    _objc_retainAutoreleasedReturnValue();
    func_0x004a0ae0();
    func_0x004a0a10();
    if (iVar2 < (int)param_3) {
      puVar3 = param_1;
      func_0x0078a2c0();
      param_3 = (uint)puVar3;
      _objc_retainAutoreleasedReturnValue();
      func_0x004a0ae0();
      func_0x004a0a10();
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
    func_0x00791e20(PTR__OBJC_CLASS___NSMutableString_00ac2cc0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789760();
    _objc_retainAutoreleasedReturnValue();
    func_0x0077eec0(puVar3,param_2,&PTR____CFConstantStringClassReference_00a272e0);
    func_0x004a0a44();
    lVar1 = 0;
    for (uVar7 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar7 != 0;
        uVar7 = uVar7 - 1) {
      puVar4 = param_1;
      func_0x0078a2c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00789e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x004a0a08();
      func_0x004a0b3c();
      func_0x0077eec0();
      func_0x00780260(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x004a0afc();
      if (puVar4 != (undefined *)0x0) {
        puVar4 = puVar5;
        func_0x00780260();
        _objc_retainAutoreleasedReturnValue();
        func_0x007879a0();
        func_0x0077eec0(puVar3,param_2,&PTR____CFConstantStringClassReference_00a27320);
        func_0x004a0a08();
      }
      func_0x00793580(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x004a0afc();
      puVar6 = (undefined *)0x0;
      if (puVar4 != (undefined *)0x0) {
        puVar6 = puVar5;
        func_0x00793580();
        _objc_retainAutoreleasedReturnValue();
        func_0x0077eec0(puVar3,param_2,&PTR____CFConstantStringClassReference_00a27340);
        func_0x004a0a08();
      }
      func_0x0078a9a0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x004a0afc();
      if (puVar6 != (undefined *)0x0) {
        func_0x0078a9a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x0077eec0(puVar3,param_2,&PTR____CFConstantStringClassReference_00a27360);
        func_0x004a0a08();
      }
      if (lVar1 < (int)(param_3 - 1)) {
        func_0x0077ef80(puVar3,param_2,&PTR____CFConstantStringClassReference_00a27380);
      }
      func_0x004a0a88();
      lVar1 = lVar1 + 1;
    }
  }
  else {
    _objc_retain(puVar3);
  }
  func_0x004a0a08();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0049f394; end: 0049f39b; -[KSCrashDoctorFunctionCall name] */

undefined8 FUN_0049f394(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0049f39c; end: 0049f3bb; -[KSCrashDoctorFunctionCall setName:] */

void FUN_0049f39c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004a09cc();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049f3bc; end: 0049f3c3; -[KSCrashDoctorFunctionCall params] */

undefined8 FUN_0049f3bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0049f3c4; end: 0049f3e3; -[KSCrashDoctorFunctionCall setParams:] */

void FUN_0049f3c4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004a09cc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0049f3e4; end: 0049f40f; -[KSCrashDoctorFunctionCall .cxx_destruct] */

void FUN_0049f3e4(long param_1)

{
  func_0x004a0ac0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0049f410; end: 0049f423; +[KSCrashDoctor doctor] */

void FUN_0049f410(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0049f424; end: 0049f433; -[KSCrashDoctor recrashReport:] */

void FUN_0049f424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_3,PTR_s_objectForKey__00abd4b8,&PTR____CFConstantStringClassReference_00a270a0);
  return;
}



/* Entry: 0049f434; end: 0049f443; -[KSCrashDoctor systemReport:] */

void FUN_0049f434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_3,PTR_s_objectForKey__00abd4b8,&PTR____CFConstantStringClassReference_00a273a0);
  return;
}



/* Entry: 0049f444; end: 0049f453; -[KSCrashDoctor crashReport:] */

void FUN_0049f444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_3,PTR_s_objectForKey__00abd4b8,&PTR____CFConstantStringClassReference_00a27060);
  return;
}



/* Entry: 0049f454; end: 0049f463; -[KSCrashDoctor infoReport:] */

void FUN_0049f454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_3,PTR_s_objectForKey__00abd4b8,&PTR____CFConstantStringClassReference_00a273c0);
  return;
}



/* Entry: 0049f464; end: 0049f4a3; -[KSCrashDoctor errorReport:] */

void FUN_0049f464(void)

{
  func_0x00781000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a09fc();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0049f4a4; end: 0049f55f; -[KSCrashDoctor cpuFamily:] */

undefined4 FUN_0049f4a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  func_0x007926c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x0078ae00();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    lVar1 = param_1;
    func_0x0078ae00(param_1,param_2,&PTR____CFConstantStringClassReference_00a27440);
    if ((lVar1 == 0) &&
       (lVar1 = param_1,
       func_0x0078ae00(param_1,param_2,&PTR____CFConstantStringClassReference_00a27460), lVar1 == 2)
       ) {
      uVar2 = 2;
    }
    else {
      func_0x0078ae20(param_1,param_2,&PTR____CFConstantStringClassReference_00a27480,1);
      uVar2 = 0;
      if (param_1 != 0x7fffffffffffffff) {
        uVar2 = 3;
      }
    }
  }
  func_0x004a09f4();
  func_0x004a0a08();
  return uVar2;
}



/* Entry: 0049f560; end: 0049f5bf; -[KSCrashDoctor registerNameForFamily:paramIndex:] */

undefined * FUN_0049f560(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  undefined **ppuVar1;
  
  if (param_3 == 3) {
    if (3 < param_4) {
      return (undefined *)0x0;
    }
    ppuVar1 = &PTR_PTR_009ebbf0;
  }
  else if (param_3 == 2) {
    if (3 < param_4) {
      return (undefined *)0x0;
    }
    ppuVar1 = &PTR_PTR_009ebbd0;
  }
  else {
    if ((param_3 != 1) || (3 < param_4)) {
      return (undefined *)0x0;
    }
    ppuVar1 = &PTR_PTR_009ebbb0;
  }
  return ppuVar1[param_4];
}



/* Entry: 0049f5c0; end: 0049f5ff; -[KSCrashDoctor mainExecutableNameForReport:] */

void FUN_0049f5c0(void)

{
  func_0x00784980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a09fc();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0049f600; end: 0049f747; -[KSCrashDoctor crashedThreadReport:] */

/* WARNING: Removing unreachable block (ram,0x0049f6b8) */

void FUN_0049f600(ulong param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  
  func_0x004a0a18();
  func_0x00781000();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_00a27640;
  uVar1 = param_1;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_00a27660;
    func_0x00789ea0(param_1,param_2,&PTR____CFConstantStringClassReference_00a27660);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x004a0b1c();
    func_0x004a0a34();
    if (uVar2 != 0) {
      do {
        uVar6 = 0;
        do {
          in_ZR = 1;
          uVar5 = *(ulong *)(uVar6 * 8);
          uVar3 = uVar5;
          ppuVar4 = &PTR____CFConstantStringClassReference_00a27680;
          func_0x00789ea0(uVar5,param_2,&PTR____CFConstantStringClassReference_00a27680);
          _objc_retainAutoreleasedReturnValue();
          func_0x0077fbc0();
          func_0x004a0ae8();
          if ((uVar3 & 1) != 0) {
            _objc_retain(uVar5);
            func_0x004a0a10();
            goto LAB_0049f728;
          }
          uVar6 = uVar6 + 1;
          in_ZR = uVar6 == uVar2;
        } while (uVar6 < uVar2);
        func_0x004a0b1c();
        uVar2 = param_1;
        func_0x004a0a34();
      } while (uVar2 != 0);
    }
    func_0x004a0a10();
    uVar5 = 0;
  }
  else {
    func_0x004a0b14();
    uVar5 = uVar1;
  }
LAB_0049f728:
  func_0x004a09f4();
  func_0x004a0a08();
  func_0x004a09dc();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00789ea0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_00a276a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004a09fc();
    uVar5 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar5);
  return;
}



/* Entry: 0049f748; end: 0049f793; -[KSCrashDoctor backtraceFromThreadReport:] */

void FUN_0049f748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a276a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a09fc();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0049f794; end: 0049f7df; -[KSCrashDoctor basicRegistersFromThreadReport:] */

void FUN_0049f794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a276e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a09fc();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0049f7e0; end: 0049f937; -[KSCrashDoctor lastInAppStackEntry:] */

/* WARNING: Removing unreachable block (ram,0x0049f8a0) */

void FUN_0049f7e0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x004a0a18();
  func_0x004a0a2c();
  func_0x00788c20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00781080(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f6e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x004a0b1c();
  uVar1 = param_1;
  func_0x004a0a34();
  do {
    if (uVar1 == 0) {
      uVar1 = 0;
      uVar3 = 0;
LAB_0049f90c:
      func_0x004a0a3c();
      func_0x004a0a3c();
      func_0x004a0a10();
      func_0x004a09f4();
      func_0x004a0a08();
      func_0x004a09dc();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        uVar4 = uVar1;
        func_0x00781080();
        _objc_retainAutoreleasedReturnValue();
        func_0x0077f6e0(uVar1,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00780e80();
        if (uVar4 == 0) {
          uVar3 = 0;
        }
        else {
          func_0x00789e00(uVar1,param_2,0);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
        }
        func_0x004a09f4();
        func_0x004a0a08();
      }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
      return;
    }
    uVar4 = 0;
    do {
      in_ZR = 1;
      uVar3 = *(ulong *)(uVar4 * 8);
      uVar2 = uVar3;
      func_0x00789ea0(uVar3,param_2,&PTR____CFConstantStringClassReference_00a27720);
      _objc_retainAutoreleasedReturnValue();
      func_0x007878e0();
      if ((uVar2 & 1) != 0) {
        uVar1 = uVar3;
        _objc_retain();
        func_0x004a0a90();
        goto LAB_0049f90c;
      }
      func_0x004a0a90();
      uVar4 = uVar4 + 1;
      in_ZR = uVar4 == uVar1;
    } while (uVar4 < uVar1);
    func_0x004a0b1c();
    uVar1 = param_1;
    func_0x004a0a34();
  } while( true );
}



/* Entry: 0049f938; end: 0049f9b7; -[KSCrashDoctor lastStackEntry:] */

void FUN_0049f938(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00781080();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f6e0(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00780e80();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00789e00(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x004a09f4();
  func_0x004a0a08();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0049f9b8; end: 0049fa83; -[KSCrashDoctor isInvalidAddress:] */

long FUN_0049f9b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x004a0a2c();
  lVar1 = param_3;
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a27740);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a277a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x007878e0();
    func_0x004a0a44();
  }
  else {
    func_0x00789ea0(lVar1,param_2,&PTR____CFConstantStringClassReference_00a27760);
    _objc_retainAutoreleasedReturnValue();
    func_0x007878e0();
    param_3 = lVar1;
  }
  func_0x004a0a10();
  func_0x004a09f4();
  func_0x004a0a08();
  return param_3;
}



/* Entry: 0049fa84; end: 0049fb4f; -[KSCrashDoctor isMathError:] */

long FUN_0049fa84(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x004a0a2c();
  lVar1 = param_3;
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a27740);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a277a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x007878e0();
    func_0x004a0a44();
  }
  else {
    func_0x00789ea0(lVar1,param_2,&PTR____CFConstantStringClassReference_00a27760);
    _objc_retainAutoreleasedReturnValue();
    func_0x007878e0();
    param_3 = lVar1;
  }
  func_0x004a0a10();
  func_0x004a09f4();
  func_0x004a0a08();
  return param_3;
}



/* Entry: 0049fb50; end: 0049fe6b; -[KSCrashDoctor isMemoryCorruption:] */

undefined * FUN_0049fb50(undefined **param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  ulong uVar19;
  undefined **unaff_x23;
  undefined **unaff_x24;
  long lVar20;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar21;
  undefined **unaff_x27;
  long unaff_x28;
  undefined8 uStack_340;
  long lStack_338;
  long *plStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [144];
  long lStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [144];
  
  func_0x004a0a18();
  ppuStack_208 = param_1;
  func_0x00781080();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1f8 = param_1;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  puStack_1a0 = (undefined8 *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  ppuStack_200 = param_1;
  func_0x00789e40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = param_1;
  func_0x004a0a34();
  if (ppuVar18 != (undefined **)0x0) {
    unaff_x24 = &PTR____CFConstantStringClassReference_00a214a0;
    unaff_x25 = &PTR____CFConstantStringClassReference_00a271e0;
    unaff_x26 = (undefined **)*puStack_1a0;
    unaff_x28 = 0x7fffffffffffffff;
    unaff_x27 = ppuVar18;
    do {
      ppuVar18 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1a0 != unaff_x26) {
          _objc_enumerationMutation(param_1);
        }
        ppuVar15 = *(undefined ***)(lStack_1a8 + (long)ppuVar18 * 8);
        ppuVar2 = ppuVar15;
        func_0x00789ea0(ppuVar15,param_2,&PTR____CFConstantStringClassReference_00a214a0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x007878e0();
        if ((int)ppuVar3 != 0) {
          func_0x00789ea0(ppuVar15,param_2,&PTR____CFConstantStringClassReference_00a27840);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar15;
          func_0x0078ae00();
          if (ppuVar3 != (undefined **)0x7fffffffffffffff) {
            ppuVar3 = &PTR____CFConstantStringClassReference_00a27880;
            ppuVar4 = ppuVar15;
            func_0x0078ae00();
            in_ZR = ppuVar4 == (undefined **)0x7fffffffffffffff;
            if (!(bool)in_ZR) goto LAB_0049fe1c;
          }
          ppuVar3 = &PTR____CFConstantStringClassReference_00a278a0;
          func_0x0078ae00();
          func_0x004a0a08();
          in_ZR = ppuVar15 == (undefined **)0x7fffffffffffffff;
          unaff_x23 = ppuVar15;
          if (!(bool)in_ZR) goto LAB_0049fe20;
        }
        func_0x004a0a10();
        ppuVar18 = (undefined **)((long)ppuVar18 + 1);
        in_ZR = ppuVar18 == unaff_x27;
      } while (ppuVar18 < unaff_x27);
      unaff_x27 = param_1;
      func_0x004a0a34(param_1,param_2,&uStack_1b0,auStack_f0);
    } while (unaff_x27 != (undefined **)0x0);
  }
  func_0x004a0a3c();
  ppuVar2 = ppuStack_208;
  func_0x0077f6e0(ppuStack_208,param_2,ppuStack_1f8);
  _objc_retainAutoreleasedReturnValue();
  lStack_1e8 = 0;
  puStack_1f0 = (undefined *)0x0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain();
  ppuVar3 = &puStack_1f0;
  ppuVar18 = ppuVar2;
  func_0x004a0a34();
  param_1 = ppuVar2;
  if (ppuVar18 != (undefined **)0x0) {
    unaff_x23 = &PTR____CFConstantStringClassReference_00a278c0;
    unaff_x28 = *plStack_1e0;
    unaff_x25 = &PTR____CFConstantStringClassReference_00a278e0;
    unaff_x26 = &PTR____CFConstantStringClassReference_00a27900;
    unaff_x24 = ppuVar18;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        in_ZR = *plStack_1e0 == unaff_x28;
        if (!(bool)in_ZR) {
          _objc_enumerationMutation(ppuVar2);
        }
        uVar19 = *(ulong *)(lStack_1e8 + (long)unaff_x27 * 8);
        uVar5 = uVar19;
        func_0x00789ea0(uVar19,param_2,&PTR____CFConstantStringClassReference_00a27720);
        _objc_retainAutoreleasedReturnValue();
        func_0x00789ea0(uVar19,param_2,&PTR____CFConstantStringClassReference_00a278c0);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar19;
        ppuVar3 = unaff_x25;
        func_0x007878e0();
        if (((uVar6 & 1) != 0) ||
           (uVar6 = uVar19, ppuVar3 = unaff_x26, func_0x007878e0(), (uVar6 & 1) != 0)) {
LAB_0049fe14:
          func_0x004a09f4();
LAB_0049fe1c:
          ppuVar15 = unaff_x23;
          func_0x004a0a08();
LAB_0049fe20:
          puVar16 = (undefined *)((long)&MACH_HEADER.magic + 1);
          goto LAB_0049fe24;
        }
        ppuVar3 = &PTR____CFConstantStringClassReference_00a27920;
        uVar6 = uVar19;
        func_0x007878e0();
        if ((uVar6 & 1) != 0) goto LAB_0049fe14;
        func_0x007878e0(uVar19,param_2,&PTR____CFConstantStringClassReference_00a27940);
        if ((int)uVar19 != 0) {
          ppuVar3 = &PTR____CFConstantStringClassReference_00a27960;
          func_0x007878e0();
          if ((uVar5 & 1) != 0) goto LAB_0049fe14;
        }
        func_0x004a09f4();
        func_0x004a0a08();
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
        in_ZR = unaff_x27 == unaff_x24;
      } while (unaff_x27 < unaff_x24);
      ppuVar3 = &puStack_1f0;
      unaff_x24 = ppuVar2;
      func_0x004a0a34();
    } while (unaff_x24 != (undefined **)0x0);
  }
  puVar16 = (undefined *)0x0;
  ppuVar15 = unaff_x23;
LAB_0049fe24:
  ppuVar18 = ppuStack_200;
  func_0x004a0a10();
  func_0x004a0a3c();
  func_0x004a09f4();
  ppuVar4 = ppuStack_1f8;
  _objc_release();
  func_0x004a09dc();
  if ((bool)in_ZR) {
    return puVar16;
  }
  ___stack_chk_fail();
  ppuStack_230 = ppuVar18;
  pcStack_218 = FUN_0049fe6c;
  lStack_270 = unaff_x28;
  ppuStack_268 = unaff_x27;
  ppuStack_260 = unaff_x26;
  ppuStack_258 = unaff_x25;
  ppuStack_250 = unaff_x24;
  ppuStack_248 = ppuVar15;
  ppuStack_240 = param_1;
  ppuStack_238 = ppuVar2;
  puStack_228 = puVar16;
  puStack_220 = &stack0xfffffffffffffff0;
  func_0x004a0a18();
  func_0x004a0a2c();
  puVar16 = PTR_PTR_00ac2f70;
  _objc_alloc_init();
  ppuVar18 = ppuVar4;
  func_0x00788260(ppuVar4,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar18;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f160(puVar16,param_2,ppuVar2);
  func_0x004a09f4();
  ppuVar2 = ppuVar4;
  func_0x00781080(ppuVar4,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar2;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar4;
  func_0x00780f80(ppuVar4,param_2,ppuVar3);
  func_0x0077f7c0(ppuVar4,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0b48();
  func_0x0078b160();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0b48();
  func_0x0078b160();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0b48();
  func_0x0078b160();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0b48();
  func_0x0078b160();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0b3c();
  func_0x0077f1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a09fc();
  func_0x004a0b04();
  func_0x004a0a90();
  func_0x004a0a3c();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f1a0(PTR__OBJC_CLASS___NSMutableArray_00ac29a0,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  func_0x004a0b14();
  ppuVar9 = ppuVar7;
  func_0x004a0a34(ppuVar7,param_2,&uStack_340,auStack_300);
  if (ppuVar9 != (undefined **)0x0) {
    lVar20 = *plStack_330;
    do {
      ppuVar21 = (undefined **)0x0;
      do {
        if (*plStack_330 != lVar20) {
          _objc_enumerationMutation(ppuVar7);
        }
        uVar17 = *(undefined8 *)(lStack_338 + (long)ppuVar21 * 8);
        puVar10 = PTR_PTR_00ac2f78;
        _objc_alloc_init();
        ppuVar11 = ppuVar4;
        func_0x00789ea0(ppuVar4,param_2,uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00793120();
        func_0x0078caa0(puVar10,param_2,ppuVar11);
        func_0x004a09f4();
        ppuVar11 = ppuVar15;
        func_0x00789ea0(ppuVar15,param_2,uVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSString_00ac2988;
        if (ppuVar11 == (undefined **)0x0) {
          func_0x0077ea60();
          func_0x007921a0(puVar14,param_2,&PTR____CFConstantStringClassReference_00a27980);
          _objc_retainAutoreleasedReturnValue();
          func_0x004a0b3c();
          func_0x00791140();
        }
        else {
          ppuVar12 = ppuVar11;
          func_0x00789ea0(ppuVar11,param_2,&PTR____CFConstantStringClassReference_00a214a0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00790d20(puVar10,param_2,ppuVar12);
          func_0x004a0a08();
          ppuVar12 = ppuVar11;
          func_0x00789ea0(ppuVar11,param_2,&PTR____CFConstantStringClassReference_00a27280);
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar11;
          func_0x00789ea0(ppuVar11,param_2,&PTR____CFConstantStringClassReference_00a279a0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00789ea0(ppuVar11,param_2,&PTR____CFConstantStringClassReference_00a27840);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar10;
          func_0x00792f20();
          iVar1 = (int)puVar14;
          _objc_retainAutoreleasedReturnValue();
          func_0x004a0a68();
          func_0x004a0ae8();
          if (iVar1 == 0) {
            puVar14 = puVar10;
            func_0x00792f20();
            iVar1 = (int)puVar14;
            _objc_retainAutoreleasedReturnValue();
            func_0x007878e0();
            func_0x004a0a44();
            if (iVar1 == 0) {
              puVar14 = puVar10;
              func_0x00792f20();
              iVar1 = (int)puVar14;
              _objc_retainAutoreleasedReturnValue();
              func_0x007878e0();
              func_0x004a0a44();
              if (iVar1 == 0) goto LAB_004a0218;
              func_0x004a0b3c();
              func_0x0078d400();
              uVar17 = 0;
            }
            else {
              func_0x0078d400(puVar10,param_2,ppuVar12);
              uVar17 = 1;
            }
            func_0x0078e820(puVar10,param_2,uVar17);
          }
          else {
            func_0x00791140(puVar10,param_2,ppuVar11);
          }
LAB_004a0218:
          func_0x0078f820(puVar10,param_2,ppuVar13);
          func_0x004a0a88();
          func_0x004a0a08();
        }
        func_0x004a0a3c();
        func_0x0077e720(puVar8,param_2,puVar10);
        func_0x004a09f4();
        func_0x004a0a10();
        ppuVar21 = (undefined **)((long)ppuVar21 + 1);
        in_ZR = ppuVar21 == ppuVar9;
      } while (ppuVar21 < ppuVar9);
      ppuVar9 = ppuVar7;
      func_0x004a0a34(ppuVar7,param_2,&uStack_340,auStack_300);
    } while (ppuVar9 != (undefined **)0x0);
  }
  func_0x004a09f4();
  func_0x0078f640(puVar16);
  func_0x004a0a10();
  func_0x004a09f4();
  _objc_release(ppuVar4);
  _objc_release(ppuVar15);
  _objc_release(ppuVar2);
  _objc_release(ppuVar18);
  _objc_release(ppuVar3);
  func_0x004a09dc();
  if ((bool)in_ZR) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x004a0a2c();
  puVar16 = puVar8;
  func_0x00789760();
  iVar1 = (int)puVar16;
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0ad0();
  if (iVar1 == 0) {
LAB_004a0390:
    func_0x004a09f4();
LAB_004a0394:
    puVar16 = puVar8;
    func_0x00789760();
    _objc_retainAutoreleasedReturnValue();
    func_0x007878e0();
    if (((ulong)puVar16 & 1) == 0) {
LAB_004a0440:
      func_0x004a09f4();
    }
    else {
      puVar16 = puVar8;
      func_0x0078a2c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x004a0ae0();
      if (puVar16 == (undefined *)0x0) {
        func_0x004a0a10();
        goto LAB_004a0440;
      }
      puVar16 = puVar8;
      func_0x0078a2c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00789e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x0078a9a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x004a0a44();
      func_0x004a0a3c();
      func_0x004a0a10();
      func_0x004a09f4();
      if (puVar16 != (undefined *)0x0) {
        uVar17 = 1;
        goto LAB_004a0428;
      }
    }
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = puVar8;
    func_0x0078a2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004a0ae0();
    if (puVar16 == (undefined *)0x0) {
      func_0x004a0a10();
      goto LAB_004a0390;
    }
    puVar16 = puVar8;
    func_0x0078a2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078a9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x004a0a44();
    func_0x004a0a3c();
    func_0x004a0a10();
    func_0x004a09f4();
    if (puVar16 == (undefined *)0x0) goto LAB_004a0394;
    uVar17 = 4;
LAB_004a0428:
    func_0x00781e80(puVar8,param_2,uVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar8;
  }
  func_0x004a0a08();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar16);
  return puVar16;
}



/* Entry: 0049fe6c; end: 004a02e3; -[KSCrashDoctor lastFunctionCall:] */

void FUN_0049fe6c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [144];
  
  func_0x004a0a18();
  func_0x004a0a2c();
  puVar14 = PTR_PTR_00ac2f70;
  _objc_alloc_init();
  uVar2 = param_1;
  func_0x00788260(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f160(puVar14,param_2,uVar3);
  func_0x004a09f4();
  uVar3 = param_1;
  func_0x00781080(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00780f80(param_1,param_2,param_3);
  func_0x0077f7c0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0b48();
  func_0x0078b160();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0b48();
  func_0x0078b160();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0b48();
  func_0x0078b160();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0b48();
  func_0x0078b160();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0b3c();
  func_0x0077f1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a09fc();
  func_0x004a0b04();
  func_0x004a0a90();
  func_0x004a0a3c();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f1a0(PTR__OBJC_CLASS___NSMutableArray_00ac29a0,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x004a0b14();
  uVar7 = uVar5;
  func_0x004a0a34(uVar5,param_2,&uStack_130,auStack_f0);
  if (uVar7 != 0) {
    lVar15 = *plStack_120;
    do {
      uVar16 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(uVar5);
        }
        uVar13 = *(undefined8 *)(lStack_128 + uVar16 * 8);
        puVar8 = PTR_PTR_00ac2f78;
        _objc_alloc_init();
        uVar9 = param_1;
        func_0x00789ea0(param_1,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00793120();
        func_0x0078caa0(puVar8,param_2,uVar9);
        func_0x004a09f4();
        uVar9 = uVar4;
        func_0x00789ea0(uVar4,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSString_00ac2988;
        if (uVar9 == 0) {
          func_0x0077ea60();
          func_0x007921a0(puVar12,param_2,&PTR____CFConstantStringClassReference_00a27980);
          _objc_retainAutoreleasedReturnValue();
          func_0x004a0b3c();
          func_0x00791140();
        }
        else {
          uVar10 = uVar9;
          func_0x00789ea0(uVar9,param_2,&PTR____CFConstantStringClassReference_00a214a0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00790d20(puVar8,param_2,uVar10);
          func_0x004a0a08();
          uVar10 = uVar9;
          func_0x00789ea0(uVar9,param_2,&PTR____CFConstantStringClassReference_00a27280);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar9;
          func_0x00789ea0(uVar9,param_2,&PTR____CFConstantStringClassReference_00a279a0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00789ea0(uVar9,param_2,&PTR____CFConstantStringClassReference_00a27840);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar8;
          func_0x00792f20();
          iVar1 = (int)puVar12;
          _objc_retainAutoreleasedReturnValue();
          func_0x004a0a68();
          func_0x004a0ae8();
          if (iVar1 == 0) {
            puVar12 = puVar8;
            func_0x00792f20();
            iVar1 = (int)puVar12;
            _objc_retainAutoreleasedReturnValue();
            func_0x007878e0();
            func_0x004a0a44();
            if (iVar1 == 0) {
              puVar12 = puVar8;
              func_0x00792f20();
              iVar1 = (int)puVar12;
              _objc_retainAutoreleasedReturnValue();
              func_0x007878e0();
              func_0x004a0a44();
              if (iVar1 == 0) goto LAB_004a0218;
              func_0x004a0b3c();
              func_0x0078d400();
              uVar13 = 0;
            }
            else {
              func_0x0078d400(puVar8,param_2,uVar10);
              uVar13 = 1;
            }
            func_0x0078e820(puVar8,param_2,uVar13);
          }
          else {
            func_0x00791140(puVar8,param_2,uVar9);
          }
LAB_004a0218:
          func_0x0078f820(puVar8,param_2,uVar11);
          func_0x004a0a88();
          func_0x004a0a08();
        }
        func_0x004a0a3c();
        func_0x0077e720(puVar6,param_2,puVar8);
        func_0x004a09f4();
        func_0x004a0a10();
        uVar16 = uVar16 + 1;
        in_ZR = uVar16 == uVar7;
      } while (uVar16 < uVar7);
      uVar7 = uVar5;
      func_0x004a0a34(uVar5,param_2,&uStack_130,auStack_f0);
    } while (uVar7 != 0);
  }
  func_0x004a09f4();
  func_0x0078f640(puVar14);
  func_0x004a0a10();
  func_0x004a09f4();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  func_0x004a09dc();
  if ((bool)in_ZR) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x004a0a2c();
  puVar14 = puVar6;
  func_0x00789760();
  iVar1 = (int)puVar14;
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0ad0();
  if (iVar1 == 0) {
LAB_004a0390:
    func_0x004a09f4();
LAB_004a0394:
    puVar14 = puVar6;
    func_0x00789760();
    _objc_retainAutoreleasedReturnValue();
    func_0x007878e0();
    if (((ulong)puVar14 & 1) == 0) {
LAB_004a0440:
      func_0x004a09f4();
    }
    else {
      puVar14 = puVar6;
      func_0x0078a2c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x004a0ae0();
      if (puVar14 == (undefined *)0x0) {
        func_0x004a0a10();
        goto LAB_004a0440;
      }
      puVar14 = puVar6;
      func_0x0078a2c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00789e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x0078a9a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x004a0a44();
      func_0x004a0a3c();
      func_0x004a0a10();
      func_0x004a09f4();
      if (puVar14 != (undefined *)0x0) {
        uVar13 = 1;
        goto LAB_004a0428;
      }
    }
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = puVar6;
    func_0x0078a2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004a0ae0();
    if (puVar14 == (undefined *)0x0) {
      func_0x004a0a10();
      goto LAB_004a0390;
    }
    puVar14 = puVar6;
    func_0x0078a2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078a9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x004a0a44();
    func_0x004a0a3c();
    func_0x004a0a10();
    func_0x004a09f4();
    if (puVar14 == (undefined *)0x0) goto LAB_004a0394;
    uVar13 = 4;
LAB_004a0428:
    func_0x00781e80(puVar6,param_2,uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar6;
  }
  func_0x004a0a08();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar14);
  return;
}



/* Entry: 004a02e4; end: 004a0463; -[KSCrashDoctor zombieCall:] */

void FUN_004a02e4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x004a0a2c();
  uVar2 = param_3;
  func_0x00789760();
  iVar1 = (int)uVar2;
  _objc_retainAutoreleasedReturnValue();
  func_0x004a0ad0();
  if (iVar1 != 0) {
    uVar2 = param_3;
    func_0x0078a2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004a0ae0();
    if (uVar2 == 0) {
      func_0x004a0a10();
      goto LAB_004a0390;
    }
    uVar2 = param_3;
    func_0x0078a2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078a9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x004a0a44();
    func_0x004a0a3c();
    func_0x004a0a10();
    func_0x004a09f4();
    if (uVar2 == 0) goto LAB_004a0394;
    uVar3 = 4;
LAB_004a0428:
    func_0x00781e80(param_3,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_004a0448;
  }
LAB_004a0390:
  func_0x004a09f4();
LAB_004a0394:
  uVar2 = param_3;
  func_0x00789760();
  _objc_retainAutoreleasedReturnValue();
  func_0x007878e0();
  if ((uVar2 & 1) == 0) {
LAB_004a0440:
    func_0x004a09f4();
  }
  else {
    uVar2 = param_3;
    func_0x0078a2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004a0ae0();
    if (uVar2 == 0) {
      func_0x004a0a10();
      goto LAB_004a0440;
    }
    uVar2 = param_3;
    func_0x0078a2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078a9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x004a0a44();
    func_0x004a0a3c();
    func_0x004a0a10();
    func_0x004a09f4();
    if (uVar2 != 0) {
      uVar3 = 1;
      goto LAB_004a0428;
    }
  }
  param_3 = 0;
LAB_004a0448:
  func_0x004a0a08();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 004a0464; end: 004a04c3; -[KSCrashDoctor isStackOverflow:] */

undefined8 FUN_004a0464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a27a20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077fbc0();
  func_0x004a09f4();
  func_0x004a0a08();
  return param_3;
}



/* Entry: 004a04c4; end: 004a0523; -[KSCrashDoctor isDeadlock:] */

undefined ** FUN_004a04c4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  func_0x00782de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a27a60;
  func_0x007878e0(&PTR____CFConstantStringClassReference_00a27a60,param_2,param_1);
  func_0x004a09f4();
  func_0x004a0a08();
  return ppuVar1;
}



/* Entry: 004a0524; end: 004a05af; -[KSCrashDoctor appendOriginatingCall:callName:] */

void FUN_004a0524(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  func_0x004a0a2c();
  func_0x004a0b14();
  if ((param_4 == 0) ||
     (func_0x007878e0(param_4,param_2,&PTR____CFConstantStringClassReference_00a27a80),
     (param_4 & 1) != 0)) {
    _objc_retain(param_3);
  }
  else {
    func_0x00791e60(param_3,param_2,&PTR____CFConstantStringClassReference_00a27aa0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x004a09f4();
  func_0x004a0a08();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 004a05b0; end: 004a09cb; -[KSCrashDoctor diagnoseCrash:] */

void FUN_004a05b0(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar1 = param_1;
  func_0x004a0a2c();
  func_0x004a0aa4();
  func_0x007881e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x004a0a10();
  func_0x004a0aa4();
  func_0x00781080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x004a0aa4();
  func_0x00782de0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x004a0aa4();
  func_0x00787700();
  if ((int)ppuVar4 != 0) {
    func_0x004a0a98();
    func_0x007921a0();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_004a079c;
  }
  ppuVar4 = param_1;
  func_0x00787e80(param_1,param_2,ppuVar2);
  if ((int)ppuVar4 != 0) {
    func_0x004a0a98();
    func_0x007921a0();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_004a079c;
  }
  ppuVar2 = ppuVar3;
  func_0x00789ea0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_00a214a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x007878e0();
  if ((int)ppuVar2 != 0) {
    ppuVar2 = ppuVar3;
    func_0x00789ea0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_00a27b00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00789ea0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_00a27b20);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
    }
    func_0x00789ea0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_00a27b20);
    _objc_retainAutoreleasedReturnValue();
    func_0x004a0a88();
    func_0x004a0a98();
    func_0x007921a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0077ef00(param_1,param_2,ppuVar3,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x004a0a88();
    goto LAB_004a0774;
  }
  func_0x004a0aa4();
  func_0x00787ae0();
  if (((ulong)ppuVar2 & 1) == 0) {
    ppuVar2 = param_1;
    func_0x00787aa0(param_1,param_2,ppuVar3);
    if ((int)ppuVar2 == 0) {
      func_0x004a0aa4();
      func_0x007881c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_1;
      func_0x00794580(param_1,param_2,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar2 = param_1;
        func_0x007879e0(param_1,param_2,ppuVar3);
        if ((int)ppuVar2 == 0) {
          param_1 = (undefined **)0x0;
        }
        else {
          func_0x00789ea0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_00a27bc0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00793120();
          ppuVar2 = ppuVar3;
          func_0x004a0a88();
          if (ppuVar3 != (undefined **)0x0) {
            func_0x004a0a98();
            func_0x007921a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x004a0b28();
            func_0x0077ef00();
            _objc_retainAutoreleasedReturnValue();
            param_1 = ppuVar2;
            goto LAB_004a0774;
          }
          func_0x0077ef00(param_1,param_2,&PTR____CFConstantStringClassReference_00a27be0,ppuVar1);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x004a0a98();
        func_0x007921a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x004a0b28();
        func_0x0077ef00();
        _objc_retainAutoreleasedReturnValue();
        param_1 = ppuVar4;
LAB_004a0774:
        func_0x004a0b04();
      }
      func_0x004a0a90();
    }
    else {
      func_0x004a0a98();
      func_0x007921a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0077ef00(param_1,param_2,ppuVar2,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x004a0ae8();
  }
  else {
    param_1 = &PTR____CFConstantStringClassReference_00a27b60;
  }
  func_0x004a0a44();
  ppuVar4 = param_1;
LAB_004a079c:
  func_0x004a0a3c();
  func_0x004a0a10();
  func_0x004a09f4();
  func_0x004a0a08();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar4);
  return;
}



/* Entry: 004a09cc; end: 004a0b53;  */

void FUN_004a09cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(param_3);
  return;
}



/* Entry: 004a0b54; end: 004a0db7;  */

undefined1 * FUN_004a0b54(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *unaff_x19;
  undefined1 auStack_5d0 [112];
  code *pcStack_560;
  undefined8 uStack_550;
  code **ppcStack_548;
  undefined1 auStack_540 [24];
  code *pcStack_528;
  undefined1 *puStack_520;
  undefined1 uStack_44c;
  undefined8 auStack_448 [128];
  undefined8 uStack_48;
  
  func_0x004a2bdc();
  lVar4 = 0xb60588;
  uStack_48 = extraout_x8;
  _strncpy();
  _strlen();
  *(undefined4 *)(lVar4 + 0xb60583) = 0x646c6f2e;
  *(undefined1 *)(lVar4 + 0xb60587) = 0;
  pcVar5 = param_2;
  _rename(param_2,0xb60588);
  if ((int)pcVar5 < 0) {
    ___error();
    func_0x004a2d24();
    func_0x004a2c78();
    func_0x004ab038(extraout_x8_00);
  }
  puVar6 = auStack_540;
  puVar7 = auStack_448;
  FUN_004a802c(puVar6,param_2,puVar7,0x400);
  if ((int)puVar6 != 0) {
    FUN_0049ebdc();
    func_0x004a2db8();
    func_0x004a2da4();
    func_0x004a2d90();
    func_0x004a2d7c();
    func_0x004a2d68();
    func_0x004a2d54();
    func_0x004a2d40();
    func_0x004a2d2c();
    ppcStack_548 = &pcStack_528;
    uStack_550 = 0x4a253c;
    pcStack_560 = extraout_x8_01;
    func_0x004a2cd8();
    pcStack_528 = FUN_004a0db8;
    uStack_44c = 1;
    puStack_520 = auStack_540;
    func_0x004a8cec(&pcStack_528,"report");
    iVar3 = 0xb60588;
    FUN_004a93e8(&pcStack_528,"recrash_report",0xb60588,1);
    func_0x004a2ca4();
    _remove();
    if (iVar3 < 0) {
      ___error();
      func_0x004a2d24();
      func_0x004a2c78();
      func_0x004ab038(extraout_x8_02);
    }
    FUN_004a0de8(auStack_5d0,"minimal",*unaff_x19,unaff_x19[0x34],param_3);
    func_0x004a2ca4();
    (*pcStack_560)(auStack_5d0,"crash");
    func_0x004a0ec4(auStack_5d0);
    func_0x004a2ca4();
    FUN_004ab9d4((undefined4 *)unaff_x19[3],*(undefined4 *)unaff_x19[3]);
    param_2 = "crashed_thread";
    FUN_004a12b4(auStack_5d0,"crashed_thread");
    func_0x004a2ca4();
    func_0x004a2d18();
    func_0x004a2d18();
    FUN_004a8e08(ppcStack_548);
    puVar6 = auStack_540;
    FUN_004a80a8(puVar6);
    do {
      iVar3 = iRam0000000000b66118 + -1;
      in_ZR = iVar3 == 0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb66118,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        iRam0000000000b66118 = iVar3;
      }
    } while (cVar1 != '\0');
    puVar7 = unaff_x19;
    if (iVar3 < 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0xb66118,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          iRam0000000000b66118 = iRam0000000000b66118 + 1;
        }
      } while (cVar1 != '\0');
    }
  }
  func_0x004a2b94(uStack_48);
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  FUN_004a8128(puVar7,puVar6,param_2);
  uVar8 = 0;
  if ((int)puVar7 == 0) {
    uVar8 = 3;
  }
  return (undefined1 *)(ulong)uVar8;
}



/* Entry: 004a0db8; end: 004a0de7;  */

undefined4 FUN_004a0db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  FUN_004a8128(param_3,param_1,param_2);
  uVar1 = 0;
  if ((int)param_3 == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 004a0de8; end: 004a12b3;  */

void FUN_004a0de8(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  (**(code **)(param_1 + 0x70))(param_1,"report");
  func_0x004a2c3c(*(undefined8 *)(param_1 + 0x20));
  func_0x004a2cec(*(undefined8 *)(param_1 + 0x20));
  func_0x004a2c3c(*(undefined8 *)(param_1 + 0x20));
  func_0x004a2c30(*(undefined8 *)(param_1 + 0x20));
  pcVar2 = *(code **)(param_1 + 0x10);
  uVar1 = 0;
  _time(0);
  (*pcVar2)(param_1,"timestamp",uVar1);
  func_0x004a2bc0();
  func_0x004a2bd0();
  func_0x004a2cf8(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x004a0ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x80))(param_1);
  return;
}



/* Entry: 004a12b4; end: 004a1f03;  */

void FUN_004a12b4(undefined8 param_1,undefined8 param_2,long param_3,dword *param_4,
                 undefined8 param_5,int param_6,code *param_7)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  qword qVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  dword *pdVar11;
  qword *pqVar12;
  undefined1 *puVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 *puVar16;
  qword *pqVar17;
  byte bVar18;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x9;
  code *extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 *unaff_x19;
  uint uVar19;
  char *pcVar20;
  qword *pqVar21;
  dword *pdVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  qword qVar25;
  undefined **ppuVar26;
  code *unaff_x25;
  long lVar27;
  char *pcVar28;
  code *unaff_x28;
  undefined1 auStack_107c [100];
  undefined8 uStack_1018;
  undefined **ppuStack_1010;
  undefined8 *puStack_1008;
  dword *pdStack_1000;
  qword *pqStack_ff8;
  dword *pdStack_ff0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  code *pcStack_fb0;
  code *pcStack_fa8;
  code *pcStack_f68;
  code *pcStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  code **ppcStack_f40;
  qword aqStack_f38 [3];
  code *pcStack_f20;
  qword *pqStack_f18;
  undefined1 uStack_e44;
  undefined1 auStack_e40 [1024];
  qword aqStack_a40 [155];
  undefined8 uStack_568;
  code *pcStack_550;
  char *pcStack_548;
  code *pcStack_540;
  code *pcStack_538;
  undefined **ppuStack_530;
  undefined8 *puStack_528;
  dword *pdStack_520;
  code *pcStack_518;
  dword *pdStack_510;
  undefined1 auStack_4d0 [44];
  byte bStack_4a4;
  code *pcStack_498;
  dword *pdStack_168;
  undefined1 auStack_160 [240];
  undefined8 uStack_70;
  
  lVar27 = param_3;
  pdVar11 = param_4;
  func_0x004a2bdc();
  bVar1 = *(byte *)(pdVar11 + 0x66);
  pdVar22 = (dword *)(ulong)bVar1;
  puVar24 = (undefined8 *)(ulong)*pdVar11;
  uStack_70 = extraout_x8;
  if (*pdVar11 == **(uint **)(lVar27 + 0x18)) {
    _memcpy(auStack_4d0,*(undefined8 *)(param_3 + 0x48),0x368);
  }
  else {
    func_0x004ad1a0(auStack_4d0,0x96,param_4);
  }
  (*(code *)unaff_x19[0xe])();
  func_0x004a2c60(unaff_x19[0xe]);
  func_0x004a2c60(unaff_x19[0xf]);
  pcVar28 = "instruction_addr";
  while( true ) {
    iVar6 = (int)auStack_4d0;
    (*pcStack_498)();
    if (iVar6 == 0) break;
    (*(code *)unaff_x19[0xe])();
    (*(code *)unaff_x19[3])();
    func_0x004a2ba8();
  }
  func_0x004a2ba8();
  (*(code *)unaff_x19[2])();
  func_0x004a2ba8();
  if (*(char *)((long)param_4 + 0x199) == '\x01') {
    bVar18 = *(byte *)((long)param_4 + 0x19b);
  }
  else {
    bVar18 = 1;
  }
  ppuVar26 = &PTR_s_x0_009ec310;
  if (((int)param_7 != 0) && ((bVar18 & 1) != 0)) {
    func_0x004a2c60(unaff_x19[0xe]);
    func_0x004a2c60(unaff_x19[0xe]);
    for (lVar27 = 0; lVar27 != 0x23; lVar27 = lVar27 + 1) {
      pcVar28 = (&PTR_s_x0_009ec310)[lVar27];
      unaff_x28 = (code *)unaff_x19[3];
      FUN_004a6aa0(param_4,lVar27);
      (*unaff_x28)();
    }
    func_0x004a2ba8();
    param_7 = (code *)((long)&segment_command_00000020.cmd + 3);
    if (((*(char *)((long)param_4 + 0x199) != '\x01') ||
        (*(char *)((long)param_4 + 0x19b) == '\x01')) && (*(char *)(param_4 + 0x66) == '\x01')) {
      func_0x004a2c60(unaff_x19[0xe]);
      pcVar28 = "r%d";
      for (param_7 = (code *)0x0; (int)param_7 != 3; param_7 = (code *)(ulong)((int)param_7 + 1)) {
        unaff_x28 = param_7;
        func_0x004a6b30();
        if (unaff_x28 == (code *)0x0) {
          unaff_x28 = (code *)auStack_160;
          _snprintf(auStack_160,0x1e,"r%d");
        }
        unaff_x25 = (code *)unaff_x19[3];
        func_0x004a6b90(param_4,param_7);
        (*unaff_x25)();
      }
      func_0x004a2ba8();
    }
    func_0x004a2ba8();
  }
  func_0x004a2c3c(unaff_x19[2]);
  if ((*(int *)(param_3 + 0x30) == 0x20) && (*(char *)(param_3 + 0x16) == '\x01')) {
    FUN_004ada3c(*(undefined8 *)(param_3 + 0x20),puVar24);
    func_0x004a2d10(unaff_x19[1]);
    (*(code *)*unaff_x19)();
  }
  puVar9 = puVar24;
  func_0x0049ec08();
  if (puVar9 != (undefined8 *)0x0) {
    func_0x004a2cb8(unaff_x19[4]);
    func_0x004a2c3c();
  }
  puVar9 = puVar24;
  func_0x0049ec54();
  if (puVar9 != (undefined8 *)0x0) {
    func_0x004a2c3c(unaff_x19[4]);
  }
  puVar9 = unaff_x19;
  (*(code *)*unaff_x19)();
  pcVar20 = (char *)*unaff_x19;
  FUN_004ad8d8();
  uVar5 = puVar9 == puVar24;
  pcVar15 = (char *)(ulong)(byte)uVar5;
  pcVar14 = "current_thread";
  (*(code *)pcVar20)();
  if (bVar1 != 0) {
    puVar23 = *(undefined **)(param_4 + 0xaa);
    pdVar22 = (dword *)0x0;
    if (puVar23 != (undefined *)0x0) {
      puVar24 = (undefined8 *)(ulong)bStack_4a4;
      pcVar10 = (code *)(puVar23 + 0xa0);
      unaff_x25 = (code *)(puVar23 + -0x50);
      uVar5 = unaff_x25 == pcVar10;
      pcVar20 = (char *)unaff_x25;
      if (pcVar10 > unaff_x25 || (bool)uVar5) {
        pcVar20 = (char *)pcVar10;
      }
      if (pcVar10 <= unaff_x25) {
        unaff_x25 = pcVar10;
      }
      func_0x004a2c60(unaff_x19[0xe]);
      func_0x004a2c3c(unaff_x19[4]);
      (*(code *)unaff_x19[3])();
      func_0x004a2bd0(unaff_x19[3]);
      func_0x004a2c30(unaff_x19[3]);
      (*(code *)*unaff_x19)();
      pdVar22 = (dword *)(ulong)(uint)((int)pcVar20 - (int)unaff_x25);
      pcVar10 = unaff_x25;
      FUN_004abc48(unaff_x25,auStack_160,pdVar22);
      if ((int)pcVar10 == 0) {
        pcVar14 = "error";
        pcVar15 = "Stack contents not accessible";
        func_0x004a2c3c(unaff_x19[4]);
      }
      else {
        pcVar14 = "contents";
        pcVar15 = auStack_160;
        (*(code *)unaff_x19[8])();
      }
      func_0x004a2ba8();
    }
    if (param_6 != 0) {
      pcVar14 = "notable_addresses";
      func_0x004a2c60(unaff_x19[0xe]);
      for (lVar27 = 0; lVar27 != 0x23; lVar27 = lVar27 + 1) {
        pdVar22 = (dword *)(&PTR_s_x0_009ec310)[lVar27];
        pcVar15 = (char *)param_4;
        FUN_004a6aa0(param_4,lVar27);
        pcVar14 = (char *)pdVar22;
        FUN_004a2b08();
      }
      puVar23 = *(undefined **)(param_4 + 0xaa);
      pcVar20 = (char *)((long)&segment_command_00000020.cmd + 3);
      uVar5 = true;
      if (puVar23 != (undefined *)0x0) {
        pdVar11 = (dword *)(puVar23 + 0xa0);
        pdVar22 = (dword *)(puVar23 + -0x50);
        param_4 = pdVar22;
        if (pdVar11 <= pdVar22) {
          param_4 = pdVar11;
        }
        if (pdVar22 <= pdVar11) {
          pdVar22 = pdVar11;
        }
        pcVar20 = "stack@%p";
        for (; uVar5 = param_4 == pdVar22, param_4 < pdVar22; param_4 = param_4 + 2) {
          pcVar14 = (char *)&pdStack_168;
          pcVar15 = (char *)&MACH_HEADER.cpusubtype;
          pdVar11 = param_4;
          FUN_004abc48();
          if ((int)pdVar11 != 0) {
            ___sprintf_chk(auStack_160,0,0x28,"stack@%p");
            pcVar14 = auStack_160;
            pcVar15 = (char *)pdStack_168;
            FUN_004a2b08();
          }
        }
      }
      func_0x004a2ba8();
    }
  }
  func_0x004a2ba8();
  func_0x004a2b94(uStack_70);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    ppuStack_530 = &PTR_s_x0_009ec310;
    pcStack_550 = unaff_x28;
    pcStack_548 = pcVar28;
    pcStack_540 = param_7;
    pcStack_538 = unaff_x25;
    puStack_528 = puVar24;
    pdStack_520 = pdVar22;
    pcStack_518 = (code *)pcVar20;
    pdStack_510 = param_4;
    func_0x004a2bdc();
    pqVar21 = aqStack_f38;
    pqVar12 = aqStack_f38;
    puVar16 = auStack_e40;
    pqVar17 = &section_000003d8.size;
    uStack_568 = extraout_x8_00;
    FUN_004a802c();
    if ((int)pqVar12 != 0) {
      func_0x0049ebdc();
      func_0x004a2db8();
      uStack_fc8 = extraout_x8_01;
      uStack_fc0 = extraout_x9;
      func_0x004a2da4();
      uStack_fb8 = extraout_x8_02;
      pcStack_fb0 = extraout_x9_00;
      func_0x004a2d90();
      pcStack_fa8 = extraout_x8_03;
      func_0x004a2d7c();
      func_0x004a2d68();
      func_0x004a2d54();
      func_0x004a2d40();
      pcStack_f68 = extraout_x8_04;
      func_0x004a2d2c();
      ppcStack_f40 = &pcStack_f20;
      uStack_f48 = 0x4a253c;
      pcStack_f58 = extraout_x8_05;
      uStack_f50 = extraout_x9_01;
      func_0x004a2cd8();
      pcStack_f20 = FUN_004a0db8;
      uStack_e44 = 1;
      pqStack_f18 = pqVar21;
      func_0x004a8cec(&pcStack_f20,"report");
      pqVar17 = (qword *)unaff_x19[0x34];
      puVar24 = &uStack_fc8;
      FUN_004a0de8(puVar24,"standard",*unaff_x19,pqVar17,pcVar15);
      uVar7 = (uint)puVar24;
      func_0x004a2c70();
      __dyld_image_count();
      func_0x004a2c68(uStack_f50);
      for (uVar19 = 0; (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) != uVar19; uVar19 = uVar19 + 1)
      {
        aqStack_a40[10] = 0;
        aqStack_a40[7] = 0;
        aqStack_a40[6] = 0;
        aqStack_a40[9] = 0;
        aqStack_a40[8] = 0;
        aqStack_a40[3] = 0;
        aqStack_a40[2] = 0;
        aqStack_a40[5] = 0;
        aqStack_a40[4] = 0;
        aqStack_a40[1] = 0;
        aqStack_a40[0] = 0;
        uVar8 = uVar19;
        FUN_004a767c(uVar19,aqStack_a40);
        if (uVar8 != 0) {
          (*pcStack_f58)(&uStack_fc8,0);
          (*pcStack_fb0)(&uStack_fc8,"image_addr",aqStack_a40[0]);
          (*pcStack_fb0)(&uStack_fc8,"image_size",aqStack_a40[2]);
          (*pcStack_fa8)(&uStack_fc8,"name",aqStack_a40[3]);
          (*pcStack_f68)(&uStack_fc8,"uuid",aqStack_a40[4]);
          (*pcStack_fb0)(&uStack_fc8,"major_version",aqStack_a40[6]);
          (*pcStack_fb0)(&uStack_fc8,"minor_version",aqStack_a40[7]);
          (*pcStack_fb0)(&uStack_fc8,"revision_version",aqStack_a40[8]);
          if (aqStack_a40[9] != 0) {
            (*pcStack_fa8)(&uStack_fc8,"crash_info_message");
          }
          if (aqStack_a40[10] != 0) {
            (*pcStack_fa8)(&uStack_fc8,"crash_info_message2");
          }
          func_0x004a2bb4();
        }
      }
      func_0x004a2bb4();
      func_0x004a2c70();
      func_0x004a2c68(pcStack_f58);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2ce4(uStack_fc8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(uStack_fb8);
      func_0x004a2c28(uStack_fb8);
      func_0x004a2c28(uStack_fb8);
      func_0x004a2c28(uStack_fb8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(uStack_fb8);
      func_0x004a2c28(uStack_fb8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c28(pcStack_fa8);
      func_0x004a2c68(pcStack_f58);
      func_0x004a2c28(pcStack_fb0);
      func_0x004a2c28(pcStack_fb0);
      func_0x004a2c28(pcStack_fb0);
      func_0x004a2bb4();
      func_0x004a2c68(pcStack_f58);
      func_0x004a2ce4(uStack_fc8);
      func_0x004a2ce4(uStack_fc8);
      func_0x004a2c28(uStack_fb8);
      func_0x004a2c28(uStack_fb8);
      func_0x004a2c8c(uStack_fc0,unaff_x19[0x18]);
      func_0x004a2c8c(uStack_fc0,unaff_x19[0x19]);
      func_0x004a2c28(uStack_fb8);
      func_0x004a2c8c(uStack_fc0,unaff_x19[0x1b]);
      func_0x004a2c8c(uStack_fc0,unaff_x19[0x1c]);
      func_0x004a2bb4();
      func_0x004a2bb4();
      func_0x004a2c70();
      func_0x004a2c68(pcStack_f58);
      func_0x004a0ec4(&uStack_fc8);
      func_0x004a2c70();
      pqVar21 = (qword *)unaff_x19[3];
      qVar25 = *pqVar21;
      puVar24 = (undefined8 *)(ulong)(uint)qVar25;
      uVar19 = *(uint *)((long)pqVar21 + 0x194);
      func_0x004a2c68(uStack_f50);
      ppuVar26 = (undefined **)(ulong)(uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU));
      for (pdVar22 = (dword *)0x0; ppuVar26 != (undefined **)pdVar22;
          pdVar22 = (dword *)((long)pdVar22 + 1)) {
        uVar19 = *(uint *)((long)pqVar21 + (long)((long)pdVar22 + 1) * 4);
        pqVar12 = pqVar21;
        if (uVar19 == (uint)qVar25) {
LAB_004a1dfc:
          FUN_004a12b4(&uStack_fc8,0);
          pqVar17 = pqVar12;
        }
        else if ((*(int *)(unaff_x19 + 6) != 0x20) || (*(char *)((long)unaff_x19 + 0x16) == '\x01'))
        {
          FUN_004ab2c0(uVar19,aqStack_a40,0);
          pqVar12 = aqStack_a40;
          goto LAB_004a1dfc;
        }
      }
      func_0x004a2bb4();
      func_0x004a2c70();
      func_0x004a2bb4();
      if (qRam0000000000b66158 == 0) {
        func_0x004a2c68(pcStack_f58);
      }
      else {
        pqVar17 = (qword *)0x0;
        FUN_004a1f04(&uStack_fc8,"user",qRam0000000000b66158,0);
        func_0x004a2c70();
      }
      pcVar15 = (char *)0xb66000;
      if ((pcRam0000000000b66160 != (code *)0x0) &&
         (func_0x004a2c70(), (*(byte *)(unaff_x19 + 2) & 1) == 0)) {
        (*pcRam0000000000b66160)(&uStack_fc8);
      }
      func_0x004a2bb4();
      func_0x004a2c70();
      pcVar14 = "debug";
      func_0x004a2c68(pcStack_f58);
      puVar16 = (undefined1 *)unaff_x19[0x3c];
      if (puVar16 != (undefined1 *)0x0) {
        pcVar14 = "console_log";
        FUN_004a2268(&uStack_fc8,"console_log");
      }
      func_0x004a2bb4();
      func_0x004a2bb4();
      FUN_004a8e08(ppcStack_f40);
      pqVar12 = aqStack_f38;
      FUN_004a80a8();
      do {
        iVar6 = iRam0000000000b66118 + -1;
        uVar5 = iVar6 == 0;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(0xb66118,0x10);
        if (bVar3) {
          cVar2 = ExclusiveMonitorsStatus();
          iRam0000000000b66118 = iVar6;
        }
      } while (cVar2 != '\0');
      if (iVar6 < 0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(0xb66118,0x10);
          if (bVar3) {
            cVar2 = ExclusiveMonitorsStatus();
            iRam0000000000b66118 = iRam0000000000b66118 + 1;
          }
        } while (cVar2 != '\0');
      }
    }
    func_0x004a2b94(uStack_568);
    if (!(bool)uVar5) {
      ___stack_chk_fail();
      puVar13 = puVar16;
      ppuStack_1010 = ppuVar26;
      puStack_1008 = puVar24;
      pdStack_1000 = pdVar22;
      pqStack_ff8 = pqVar21;
      pdStack_ff0 = (dword *)pcVar15;
      func_0x004a2bdc();
      qVar25 = pqVar12[0x11];
      uStack_1018 = extraout_x8_06;
      _strlen(puVar13);
      FUN_004a979c(qVar25,pcVar14,puVar16,puVar13,pqVar17);
      if ((int)qVar25 != 0) {
        FUN_004a8664();
        _snprintf(auStack_107c,100,"Invalid JSON data: %s");
        func_0x004a8cec(unaff_x19[0x11],pcVar14);
        func_0x004a2cd0(unaff_x19[0x11],"error",auStack_107c);
        func_0x004a2cd0(unaff_x19[0x11],"json_data",puVar16);
        qVar25 = unaff_x19[0x11];
        FUN_004a8d44();
      }
      func_0x004a2b94(uStack_1018);
      if (!(bool)uVar5) {
        ___stack_chk_fail();
        if (qVar25 != 0) {
          _strdup();
        }
        do {
          qVar4 = qRam0000000000b66158;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(0xb66158,0x10);
          if (bVar3) {
            cVar2 = ExclusiveMonitorsStatus();
            qRam0000000000b66158 = qVar25;
          }
        } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_0099a260)(qVar4);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 004a1f04; end: 004a1fd7;  */

void FUN_004a1f04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 in_ZR;
  undefined8 uVar4;
  undefined8 extraout_x8;
  long unaff_x19;
  long lVar5;
  undefined1 auStack_ac [100];
  undefined8 uStack_48;
  
  uVar4 = param_3;
  func_0x004a2bdc();
  lVar5 = *(long *)(param_1 + 0x88);
  uStack_48 = extraout_x8;
  _strlen(uVar4);
  FUN_004a979c(lVar5,param_2,param_3,uVar4,param_4);
  if ((int)lVar5 != 0) {
    FUN_004a8664();
    _snprintf(auStack_ac,100,"Invalid JSON data: %s");
    func_0x004a8cec(*(undefined8 *)(unaff_x19 + 0x88),param_2);
    func_0x004a2cd0(*(undefined8 *)(unaff_x19 + 0x88),"error",auStack_ac);
    func_0x004a2cd0(*(undefined8 *)(unaff_x19 + 0x88),"json_data",param_3);
    lVar5 = *(long *)(unaff_x19 + 0x88);
    FUN_004a8d44();
  }
  func_0x004a2b94(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (lVar5 != 0) {
      _strdup();
    }
    do {
      lVar3 = lRam0000000000b66158;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb66158,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000000b66158 = lVar5;
      }
    } while (cVar1 != '\0');
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(lVar3);
    return;
  }
  return;
}



/* Entry: 004a1fd8; end: 004a2007;  */

void FUN_004a1fd8(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (param_1 != 0) {
    _strdup();
  }
  do {
    lVar3 = lRam0000000000b66158;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb66158,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam0000000000b66158 = param_1;
    }
  } while (cVar1 != '\0');
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar3);
  return;
}



/* Entry: 004a2008; end: 004a2117;  */

void FUN_004a2008(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = uRam0000000000b66150;
  lVar1 = lRam0000000000b66148;
  lVar5 = 0;
  uVar3 = 0;
  if ((param_1 != 0) && (0 < (int)param_2)) {
    lVar5 = (ulong)param_2 << 3;
    _malloc();
    if (lVar5 == 0) {
      func_0x004a2c44();
      FUN_004ab0a4();
      FUN_004aaf08("%s: %s (%u): %s: ");
      FUN_004aaf40("Could not allocate memory",&stack0x00000000);
      func_0x004ab264();
      return;
    }
    for (lVar6 = 0; uVar3 = param_2, (ulong)param_2 * 8 - lVar6 != 0; lVar6 = lVar6 + 8) {
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      _strdup();
      *(undefined8 *)(lVar5 + lVar6) = uVar4;
    }
  }
  uRam0000000000b66150 = uVar3;
  lRam0000000000b66148 = lVar5;
  if (lVar1 == 0) {
    return;
  }
  for (lVar6 = 0; (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 3 != lVar6;
      lVar6 = lVar6 + 8) {
    _free(*(undefined8 *)(lVar1 + lVar6));
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(lVar1);
  return;
}



/* Entry: 004a2118; end: 004a2143;  */

void FUN_004a2118(long param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  puVar2 = puVar1;
  FUN_004a868c();
  if ((int)puVar2 == 0) {
    if (param_3 == 0) {
      pcVar3 = "false";
      uVar4 = 5;
    }
    else {
      pcVar3 = "true";
      uVar4 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(pcVar3,uVar4,puVar1[1]);
    return;
  }
  return;
}



/* Entry: 004a2144; end: 004a2267;  */

qword * FUN_004a2144(long param_1,undefined8 param_2,qword *param_3)

{
  int iVar1;
  undefined1 in_ZR;
  qword *pqVar2;
  qword *pqVar3;
  qword *pqVar4;
  qword qVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 **ppuVar8;
  undefined1 *puVar9;
  qword *pqVar10;
  undefined8 extraout_x8;
  qword *extraout_x8_00;
  undefined8 extraout_x8_01;
  qword *unaff_x19;
  qword qStack_1228;
  undefined1 **ppuStack_1220;
  undefined1 *puStack_1218;
  undefined1 *puStack_1210;
  undefined4 uStack_1208;
  undefined1 uStack_1204;
  undefined1 uStack_1203;
  undefined2 uStack_1202;
  code *pcStack_1200;
  undefined1 *puStack_11f8;
  undefined1 *puStack_11f0;
  undefined8 *puStack_11e8;
  undefined8 uStack_11e0;
  undefined1 *puStack_11d8;
  undefined8 uStack_11d0;
  undefined1 *puStack_11c8;
  long *plStack_11c0;
  undefined1 auStack_11b8 [76];
  undefined1 auStack_116c [1000];
  undefined1 auStack_d84 [500];
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined4 uStack_b30;
  undefined8 uStack_b28;
  int iStack_ab4;
  qword aqStack_ab0 [3];
  undefined1 auStack_a98 [1024];
  undefined1 auStack_698 [1024];
  undefined8 uStack_298;
  undefined8 uStack_290;
  qword *pqStack_288;
  long lStack_280;
  qword *pqStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  qword *pqStack_260;
  qword *pqStack_258;
  undefined1 auStack_248 [512];
  undefined8 uStack_48;
  
  pqVar2 = param_3;
  func_0x004a2bf0();
  uVar7 = 0;
  uStack_48 = extraout_x8;
  _open();
  if ((int)pqVar2 < 0) {
    ___error();
    func_0x004a2d24();
    func_0x004a2c78();
    pqVar3 = (qword *)((long)&section_00000068.offset + 2);
    pqVar4 = extraout_x8_00;
    pqStack_260 = param_3;
    pqStack_258 = pqVar2;
    func_0x004ab038();
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    FUN_004a8a28(uVar7,param_2);
    if ((int)uVar7 == 0) {
      do {
        pqVar3 = pqVar2;
        _read(pqVar2,auStack_248,0x200);
        in_ZR = (int)pqVar3 == 1;
        if ((int)pqVar3 < 1) goto LAB_004a222c;
        uVar7 = *(undefined8 *)(param_1 + 0x88);
        FUN_004a8a54(uVar7,auStack_248);
      } while ((int)uVar7 == 0);
      func_0x004a2c44();
    }
    else {
      func_0x004a2c44();
    }
    func_0x004ab038();
LAB_004a222c:
    pqVar3 = (qword *)(*(undefined8 **)(param_1 + 0x88))[1];
    uVar7 = 1;
    (*(code *)**(undefined8 **)(param_1 + 0x88))("\"",1,pqVar3);
    pqVar4 = pqVar2;
    _close();
    unaff_x19 = pqVar2;
  }
  func_0x004a2b94(uStack_48);
  if ((bool)in_ZR) {
    return pqVar4;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_004a2268;
  uStack_298 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pqVar2 = aqStack_ab0;
  puVar9 = auStack_698;
  pqVar10 = &section_000003d8.size;
  uStack_290 = param_2;
  pqStack_288 = param_3;
  lStack_280 = param_1;
  pqStack_278 = unaff_x19;
  puStack_270 = &stack0xfffffffffffffff0;
  FUN_004a8374(pqVar2,pqVar3);
  if ((int)pqVar2 != 0) {
    func_0x004a2534(pqVar4,uVar7);
    while( true ) {
      iStack_ab4 = 0x400;
      puVar9 = auStack_a98;
      pqVar10 = (qword *)&iStack_ab4;
      pqVar3 = (qword *)((long)&MACH_HEADER.cpusubtype + 2);
      FUN_004a8280(aqStack_ab0,10);
      in_ZR = iStack_ab4 - 1U == 0;
      if (iStack_ab4 < 1) break;
      auStack_a98[iStack_ab4 - 1U] = 0;
      func_0x004a2cd0(pqVar4[0x11],0,auStack_a98);
    }
    func_0x004a253c(pqVar4);
    pqVar2 = aqStack_ab0;
    FUN_004a8408();
  }
  func_0x004a2b94(uStack_298);
  if ((bool)in_ZR) {
    return pqVar2;
  }
  ___stack_chk_fail();
  qVar5 = pqVar2[0x11];
  func_0x004a9c44();
  pqVar2 = &segment_command_00000020.fileoff;
  uStack_b28 = extraout_x8_01;
  _memcpy(auStack_11b8,&PTR_FUN_009ec440);
  uStack_b30 = 0;
  uStack_b48 = 0;
  uStack_b50 = 0;
  uStack_b38 = 0;
  uStack_b40 = 0;
  uStack_b68 = 0;
  uStack_b70 = 0;
  uStack_b58 = 0;
  uStack_b60 = 0;
  uStack_b88 = 0;
  uStack_b90 = 0;
  uStack_b78 = 0;
  uStack_b80 = 0;
  _bzero(auStack_d84,500);
  _bzero(auStack_116c,1000);
  uStack_11e0 = 100;
  uStack_11d0 = 500;
  puVar6 = puVar9;
  puStack_11f0 = auStack_d84;
  puStack_11e8 = &uStack_b90;
  puStack_11d8 = auStack_d84;
  puStack_11c8 = auStack_11b8;
  _open(puVar9,0);
  ppuStack_1220 = &puStack_11f8;
  uStack_1208 = SUB84(puVar6,0);
  uStack_1204 = 0;
  uStack_1203 = SUB81(pqVar10,0);
  uStack_1202 = 0;
  pcStack_1200 = FUN_004a96c8;
  plStack_11c0 = (long *)&qStack_1228;
  iVar1 = *(int *)(qVar5 + 0x10);
  qStack_1228 = qVar5;
  puStack_1218 = auStack_116c;
  puStack_1210 = puVar9;
  puStack_11f8 = auStack_d84;
  FUN_004a96c8(&qStack_1228);
  ppuVar8 = &puStack_11f8;
  FUN_004a8ec8(pqVar3,ppuVar8);
  _close(puVar6);
  if ((int)pqVar10 != 0) {
    while( true ) {
      in_ZR = *(int *)(qVar5 + 0x10) == iVar1;
      if (*(int *)(qVar5 + 0x10) <= iVar1) break;
      func_0x004a9ce4();
    }
  }
  func_0x004a9c24(uStack_b28);
  if ((bool)in_ZR) {
    return pqVar3;
  }
  ___stack_chk_fail();
  FUN_004a8808(*pqVar2,puVar6,ppuVar8);
  func_0x004a9c14();
  return pqVar10;
}



/* Entry: 004a2268; end: 004a2333;  */

qword * FUN_004a2268(long param_1,undefined8 param_2,qword *param_3)

{
  int iVar1;
  undefined1 in_ZR;
  qword *pqVar2;
  qword qVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  qword *pqVar7;
  undefined8 extraout_x8;
  qword qStack_fc8;
  undefined1 **ppuStack_fc0;
  undefined1 *puStack_fb8;
  undefined1 *puStack_fb0;
  undefined4 uStack_fa8;
  undefined1 uStack_fa4;
  undefined1 uStack_fa3;
  undefined2 uStack_fa2;
  code *pcStack_fa0;
  undefined1 *puStack_f98;
  undefined1 *puStack_f90;
  undefined8 *puStack_f88;
  undefined8 uStack_f80;
  undefined1 *puStack_f78;
  undefined8 uStack_f70;
  undefined1 *puStack_f68;
  long *plStack_f60;
  undefined1 auStack_f58 [76];
  undefined1 auStack_f0c [1000];
  undefined1 auStack_b24 [500];
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined4 uStack_8d0;
  undefined8 uStack_8c8;
  int iStack_854;
  qword aqStack_850 [3];
  undefined1 auStack_838 [1024];
  undefined1 auStack_438 [1024];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pqVar2 = aqStack_850;
  puVar6 = auStack_438;
  pqVar7 = &section_000003d8.size;
  FUN_004a8374(pqVar2,param_3);
  if ((int)pqVar2 != 0) {
    func_0x004a2534(param_1,param_2);
    while( true ) {
      iStack_854 = 0x400;
      puVar6 = auStack_838;
      pqVar7 = (qword *)&iStack_854;
      param_3 = (qword *)((long)&MACH_HEADER.cpusubtype + 2);
      FUN_004a8280(aqStack_850,10);
      in_ZR = iStack_854 - 1U == 0;
      if (iStack_854 < 1) break;
      auStack_838[iStack_854 - 1U] = 0;
      func_0x004a2cd0(*(undefined8 *)(param_1 + 0x88),0,auStack_838);
    }
    func_0x004a253c(param_1);
    pqVar2 = aqStack_850;
    FUN_004a8408();
  }
  func_0x004a2b94(uStack_38);
  if ((bool)in_ZR) {
    return pqVar2;
  }
  ___stack_chk_fail();
  qVar3 = pqVar2[0x11];
  func_0x004a9c44();
  pqVar2 = &segment_command_00000020.fileoff;
  uStack_8c8 = extraout_x8;
  _memcpy(auStack_f58,&PTR_FUN_009ec440);
  uStack_8d0 = 0;
  uStack_8e8 = 0;
  uStack_8f0 = 0;
  uStack_8d8 = 0;
  uStack_8e0 = 0;
  uStack_908 = 0;
  uStack_910 = 0;
  uStack_8f8 = 0;
  uStack_900 = 0;
  uStack_928 = 0;
  uStack_930 = 0;
  uStack_918 = 0;
  uStack_920 = 0;
  _bzero(auStack_b24,500);
  _bzero(auStack_f0c,1000);
  uStack_f80 = 100;
  uStack_f70 = 500;
  puVar4 = puVar6;
  puStack_f90 = auStack_b24;
  puStack_f88 = &uStack_930;
  puStack_f78 = auStack_b24;
  puStack_f68 = auStack_f58;
  _open(puVar6,0);
  ppuStack_fc0 = &puStack_f98;
  uStack_fa8 = SUB84(puVar4,0);
  uStack_fa4 = 0;
  uStack_fa3 = SUB81(pqVar7,0);
  uStack_fa2 = 0;
  pcStack_fa0 = FUN_004a96c8;
  plStack_f60 = (long *)&qStack_fc8;
  iVar1 = *(int *)(qVar3 + 0x10);
  qStack_fc8 = qVar3;
  puStack_fb8 = auStack_f0c;
  puStack_fb0 = puVar6;
  puStack_f98 = auStack_b24;
  FUN_004a96c8(&qStack_fc8);
  ppuVar5 = &puStack_f98;
  FUN_004a8ec8(param_3,ppuVar5);
  _close(puVar4);
  if ((int)pqVar7 != 0) {
    while( true ) {
      in_ZR = *(int *)(qVar3 + 0x10) == iVar1;
      if (*(int *)(qVar3 + 0x10) <= iVar1) break;
      func_0x004a9ce4();
    }
  }
  func_0x004a9c24(uStack_8c8);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  FUN_004a8808(*pqVar2,puVar4,ppuVar5);
  func_0x004a9c14();
  return pqVar7;
}



/* Entry: 004a2334; end: 004a236b;  */

undefined8 FUN_004a2334(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  qword *pqVar5;
  undefined8 extraout_x8;
  long lStack_768;
  undefined1 **ppuStack_760;
  undefined1 *puStack_758;
  undefined8 uStack_750;
  undefined4 uStack_748;
  undefined1 uStack_744;
  undefined1 uStack_743;
  undefined2 uStack_742;
  code *pcStack_740;
  undefined1 *puStack_738;
  undefined1 *puStack_730;
  undefined8 *puStack_728;
  undefined8 uStack_720;
  undefined1 *puStack_718;
  undefined8 uStack_710;
  undefined1 *puStack_708;
  long *plStack_700;
  undefined1 auStack_6f8 [76];
  undefined1 auStack_6ac [1000];
  undefined1 auStack_2c4 [500];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(param_1 + 0x88);
  func_0x004a9c44();
  pqVar5 = &segment_command_00000020.fileoff;
  uStack_68 = extraout_x8;
  _memcpy(auStack_6f8,&PTR_FUN_009ec440);
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  _bzero(auStack_2c4,500);
  _bzero(auStack_6ac,1000);
  uStack_720 = 100;
  uStack_710 = 500;
  uVar3 = param_3;
  puStack_730 = auStack_2c4;
  puStack_728 = &uStack_d0;
  puStack_718 = auStack_2c4;
  puStack_708 = auStack_6f8;
  _open(param_3,0);
  ppuStack_760 = &puStack_738;
  uStack_748 = (undefined4)uVar3;
  uStack_744 = 0;
  uStack_743 = (undefined1)param_4;
  uStack_742 = 0;
  pcStack_740 = FUN_004a96c8;
  plStack_700 = &lStack_768;
  iVar1 = *(int *)(lVar2 + 0x10);
  lStack_768 = lVar2;
  puStack_758 = auStack_6ac;
  uStack_750 = param_3;
  puStack_738 = auStack_2c4;
  FUN_004a96c8(&lStack_768);
  ppuVar4 = &puStack_738;
  FUN_004a8ec8(param_2,ppuVar4);
  _close(uVar3);
  if ((int)param_4 != 0) {
    while( true ) {
      in_ZR = *(int *)(lVar2 + 0x10) == iVar1;
      if (*(int *)(lVar2 + 0x10) <= iVar1) break;
      func_0x004a9ce4();
    }
  }
  func_0x004a9c24(uStack_68);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  FUN_004a8808(*pqVar5,uVar3,ppuVar4);
  func_0x004a9c14();
  return param_4;
}



/* Entry: 004a236c; end: 004a252b;  */

void FUN_004a236c(long param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int iVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  undefined1 auStack_3d [29];
  
  func_0x004a2bf0();
  if (param_3 == (byte *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x88);
    func_0x004a2b94(extraout_x8);
    if ((bool)in_ZR) {
      puVar4 = puVar3;
      FUN_004a868c();
      if ((int)puVar4 != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = (code *)*puVar3;
      uVar7 = puVar3[1];
      pcVar5 = "null";
      uVar6 = 4;
      goto LAB_004a9cc4;
    }
  }
  else {
    lVar10 = 0;
    puVar9 = auStack_3d;
    for (iVar8 = 0; iVar8 != 4; iVar8 = iVar8 + 1) {
      uVar2 = (&UNK_00805ba0)[(ulong)*param_3 & 0xf];
      *puVar9 = (&UNK_00805ba0)[*param_3 >> 4];
      puVar9[1] = uVar2;
      puVar9 = puVar9 + 2;
      lVar10 = lVar10 + 2;
      param_3 = param_3 + 1;
    }
    *puVar9 = 0x2d;
    for (lVar11 = 0; (int)lVar11 != 2; lVar11 = lVar11 + 1) {
      bVar1 = param_3[lVar11];
      auStack_3d[lVar10 + 1] = (&UNK_00805ba0)[bVar1 >> 4];
      auStack_3d[lVar10 + 2] = (&UNK_00805ba0)[(ulong)bVar1 & 0xf];
      lVar10 = lVar10 + 2;
    }
    auStack_3d[lVar10 + 1] = 0x2d;
    puVar9 = auStack_3d + lVar10 + 4;
    for (lVar10 = 0; (int)lVar10 != 2; lVar10 = lVar10 + 1) {
      bVar1 = param_3[lVar11 + lVar10];
      puVar9[-2] = (&UNK_00805ba0)[bVar1 >> 4];
      puVar9[-1] = (&UNK_00805ba0)[(ulong)bVar1 & 0xf];
      puVar9 = puVar9 + 2;
    }
    puVar9[-2] = 0x2d;
    pbVar12 = param_3 + lVar10 + lVar11;
    for (iVar8 = 0; iVar8 != -4; iVar8 = iVar8 + -2) {
      bVar1 = *pbVar12;
      puVar9[-1] = (&UNK_00805ba0)[bVar1 >> 4];
      *puVar9 = (&UNK_00805ba0)[(ulong)bVar1 & 0xf];
      puVar9 = puVar9 + 2;
      pbVar12 = pbVar12 + 1;
    }
    puVar9[-1] = 0x2d;
    for (lVar10 = 0; uVar2 = (int)lVar10 == 6, !(bool)uVar2; lVar10 = lVar10 + 1) {
      uVar2 = (&UNK_00805ba0)[(ulong)pbVar12[lVar10] & 0xf];
      *puVar9 = (&UNK_00805ba0)[pbVar12[lVar10] >> 4];
      puVar9[1] = uVar2;
      puVar9 = puVar9 + 2;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x88);
    FUN_004a89b0();
    func_0x004a2b94(extraout_x8);
    if ((bool)uVar2) {
      return;
    }
  }
  ___stack_chk_fail();
  puVar3 = (undefined8 *)puVar3[0x11];
  iVar8 = *(int *)(puVar3 + 2);
  if (-1 < iVar8) {
    puVar4 = puVar3;
    FUN_004a868c();
    if ((int)puVar4 != 0) {
      return;
    }
    iVar8 = *(int *)(puVar3 + 2);
  }
  func_0x004a9d28(iVar8);
  *(undefined1 *)(extraout_x8_00 + 0x14) = 1;
  *(undefined1 *)((long)puVar3 + 0xdc) = 1;
  UNRECOVERED_JUMPTABLE = (code *)*puVar3;
  uVar7 = puVar3[1];
  pcVar5 = "{";
  uVar6 = 1;
LAB_004a9cc4:
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pcVar5,uVar6,uVar7);
  return;
}



/* Entry: 004a252c; end: 004a2543;  */

void FUN_004a252c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long extraout_x8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  iVar3 = *(int *)(puVar1 + 2);
  if (-1 < iVar3) {
    puVar2 = puVar1;
    FUN_004a868c();
    if ((int)puVar2 != 0) {
      return;
    }
    iVar3 = *(int *)(puVar1 + 2);
  }
  func_0x004a9d28(iVar3);
  *(undefined1 *)(extraout_x8 + 0x14) = 1;
  *(undefined1 *)((long)puVar1 + 0xdc) = 1;
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)("{",1,puVar1[1]);
  return;
}



/* Entry: 004a2544; end: 004a27db;  */

void FUN_004a2544(long param_1,undefined8 param_2,ulong param_3,int *param_4)

{
  long unaff_x19;
  
  func_0x004a2bdc();
  *param_4 = *param_4 + -1;
  (**(code **)(param_1 + 0x70))();
  func_0x004a2cf8(*(undefined8 *)(unaff_x19 + 0x18));
  FUN_004abfbc();
                    /* WARNING: Could not recover jumptable at 0x004a25b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_00805b79)[param_3 & 0xffffffff] * 4 + 0x4a25b8))();
  return;
}



/* Entry: 004a27dc; end: 004a2847;  */

void FUN_004a27dc(dword *param_1,dword *param_2,dword *param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 in_ZR;
  uint uVar4;
  double *pdVar5;
  char *pcVar6;
  dword *pdVar7;
  double *pdVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar9;
  dword *unaff_x19;
  undefined8 unaff_x22;
  ulong uVar10;
  double dVar11;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  dword *pdStack_3e8;
  dword *pdStack_3e0;
  double *pdStack_3b8;
  byte bStack_3a9;
  double dStack_3a8;
  float fStack_39c;
  double *pdStack_398;
  uint uStack_38c;
  uint uStack_388;
  ushort uStack_384;
  byte bStack_381;
  double *pdStack_380;
  int iStack_374;
  int iStack_370;
  short sStack_36c;
  char cStack_369;
  char acStack_368 [16];
  uint auStack_358 [56];
  undefined8 uStack_278;
  dword adStack_21c [125];
  undefined8 uStack_28;
  
  func_0x004a2bf0();
  uStack_28 = extraout_x8;
  if (param_1 != (dword *)0x0) {
    in_ZR = param_1 == (dword *)0xfffffffffffffe0b;
    if (param_1 < (dword *)0xfffffffffffffe0c) {
      param_2 = adStack_21c;
      param_3 = &section_000001a8.reserved3;
      FUN_004abc48();
      if ((int)param_1 != 0) {
        param_1 = adStack_21c;
        param_2 = &MACH_HEADER.cputype;
        param_3 = &section_000001a8.reserved3;
        FUN_004ad374();
      }
    }
    else {
      param_1 = (dword *)0x0;
    }
  }
  func_0x004a2b94(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pdVar7 = param_3;
  func_0x004a2bdc();
  uStack_278 = extraout_x8_00;
  *pdVar7 = *pdVar7 - 1;
  (**(code **)(param_1 + 0x1c))();
  if ((long)param_2 < 0) {
    pcVar6 = "tagged_payload";
    pdVar8 = (double *)((ulong)param_2 & 0xfffffffffffffff);
    func_0x004a2c3c(*(undefined8 *)(unaff_x19 + 4));
  }
  else {
    param_1 = param_2;
    func_0x004abcf0();
    pcVar6 = acStack_368;
    pdVar8 = (double *)((long)&MACH_HEADER.cpusubtype + 2);
    FUN_004abe98();
    uVar4 = (uint)param_1;
    *param_3 = *param_3 - uVar4;
    puVar1 = auStack_358;
    for (uVar10 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); unaff_x22 = 0, uVar10 != 0;
        uVar10 = uVar10 - 1) {
      bVar2 = **(byte **)(puVar1 + -2);
      iVar3 = bVar2 - 99;
      in_ZR = iVar3 == 0x10;
      switch(iVar3) {
      case 0:
        pcVar6 = (char *)(ulong)*puVar1;
        func_0x004a2c58();
        func_0x004a2cac();
        pdVar8 = (double *)(long)cStack_369;
        break;
      case 1:
        pdVar8 = &dStack_3a8;
        func_0x004a2c58();
        uVar9 = *(undefined8 *)(unaff_x19 + 2);
        pcVar6 = *(char **)(puVar1 + -4);
        dVar11 = dStack_3a8;
        goto code_r0x004a2a10;
      case 2:
      case 4:
      case 5:
      case 7:
      case 8:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xf:
        goto LAB_004a2ab4;
      case 3:
        pdVar8 = (double *)&fStack_39c;
        func_0x004a2c58();
        uVar9 = *(undefined8 *)(unaff_x19 + 2);
        pcVar6 = *(char **)(puVar1 + -4);
        dVar11 = (double)fStack_39c;
code_r0x004a2a10:
        func_0x004a2d10(uVar9,dVar11);
        goto LAB_004a2ab4;
      case 6:
        pcVar6 = (char *)(ulong)*puVar1;
        func_0x004a2c58();
        func_0x004a2cac();
        pdVar8 = (double *)(long)iStack_370;
        break;
      case 9:
        pcVar6 = (char *)(ulong)*puVar1;
        func_0x004a2c58();
        func_0x004a2cac();
        pdVar8 = (double *)(long)iStack_374;
        break;
      case 0xe:
        pcVar6 = (char *)(ulong)*puVar1;
        func_0x004a2c58();
        func_0x004a2cac();
        pdVar8 = pdStack_380;
        break;
      case 0x10:
        pcVar6 = (char *)(ulong)*puVar1;
        func_0x004a2c58();
        func_0x004a2cac();
        pdVar8 = (double *)(long)sStack_36c;
        break;
      default:
        iVar3 = bVar2 - 0x3a;
        in_ZR = iVar3 == 9;
        switch(iVar3) {
        case 0:
        case 6:
LAB_004a2974:
          func_0x004a2c58();
          pcVar6 = *(char **)(puVar1 + -4);
          pdVar8 = pdStack_3b8;
          func_0x004a2d04();
          break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
          break;
        case 8:
          func_0x004a2c58();
          pcVar6 = *(char **)(puVar1 + -4);
          pdVar8 = (double *)(ulong)bStack_3a9;
          param_1 = unaff_x19;
          (**(code **)unaff_x19)();
          break;
        case 9:
          pcVar6 = (char *)(ulong)*puVar1;
          func_0x004a2c58();
          func_0x004a2cc4();
          pdVar8 = (double *)(ulong)bStack_381;
          goto LAB_004a2ab0;
        default:
          in_ZR = true;
          if ((bVar2 == 0x23) || (in_ZR = true, bVar2 == 0x2a)) goto LAB_004a2974;
          in_ZR = bVar2 == 0x49;
          if ((bool)in_ZR) {
            pcVar6 = (char *)(ulong)*puVar1;
            func_0x004a2c58();
            func_0x004a2cc4();
            pdVar8 = (double *)(ulong)uStack_388;
          }
          else {
            in_ZR = bVar2 == 0x4c;
            if ((bool)in_ZR) {
              pcVar6 = (char *)(ulong)*puVar1;
              func_0x004a2c58();
              func_0x004a2cc4();
              pdVar8 = (double *)(ulong)uStack_38c;
            }
            else {
              in_ZR = bVar2 == 0x51;
              if ((bool)in_ZR) {
                pcVar6 = (char *)(ulong)*puVar1;
                func_0x004a2c58();
                func_0x004a2cc4();
                pdVar8 = pdStack_398;
              }
              else {
                in_ZR = bVar2 == 0x53;
                if (!(bool)in_ZR) break;
                pcVar6 = (char *)(ulong)*puVar1;
                func_0x004a2c58();
                func_0x004a2cc4();
                pdVar8 = (double *)(ulong)uStack_384;
              }
            }
          }
          goto LAB_004a2ab0;
        }
        goto LAB_004a2ab4;
      }
LAB_004a2ab0:
      func_0x004a2c3c();
LAB_004a2ab4:
      puVar1 = puVar1 + 6;
    }
  }
  func_0x004a2ba8();
  func_0x004a2b94(uStack_278);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (((pdVar8 != (double *)0x0) &&
      ((-1 < (long)pdVar8 || (*(int *)(((ulong)pdVar8 >> 0x3c & 7) * 0x30 + 0xb093c0) != 0)))) &&
     ((pdVar5 = pdVar8, uStack_3f0 = unaff_x22, pdStack_3e8 = param_3, pdStack_3e0 = param_2,
      FUN_004abfbc(), (int)pdVar5 != 0 || (pdVar5 = pdVar8, FUN_004a27dc(), (int)pdVar5 != 0)))) {
    uStack_3f4 = 0xf;
    FUN_004a2544(param_1,pcVar6,pdVar8,&uStack_3f4);
  }
  return;
}



/* Entry: 004a2848; end: 004a2b07;  */

void FUN_004a2848(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 in_ZR;
  uint uVar4;
  double *pdVar5;
  char *pcVar6;
  int *piVar7;
  double *pdVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  undefined8 *unaff_x19;
  undefined8 unaff_x22;
  ulong uVar10;
  double dVar11;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  int *piStack_1c8;
  undefined8 *puStack_1c0;
  double *pdStack_198;
  byte bStack_189;
  double dStack_188;
  float fStack_17c;
  double *pdStack_178;
  uint uStack_16c;
  uint uStack_168;
  ushort uStack_164;
  byte bStack_161;
  double *pdStack_160;
  int iStack_154;
  int iStack_150;
  short sStack_14c;
  char cStack_149;
  char acStack_148 [16];
  uint auStack_138 [56];
  undefined8 uStack_58;
  
  piVar7 = param_3;
  func_0x004a2bdc();
  *piVar7 = *piVar7 + -1;
  uStack_58 = extraout_x8;
  (*(code *)param_1[0xe])();
  if ((long)param_2 < 0) {
    pcVar6 = "tagged_payload";
    pdVar8 = (double *)((ulong)param_2 & 0xfffffffffffffff);
    func_0x004a2c3c(unaff_x19[2]);
  }
  else {
    param_1 = param_2;
    func_0x004abcf0();
    pcVar6 = acStack_148;
    pdVar8 = (double *)((long)&MACH_HEADER.cpusubtype + 2);
    FUN_004abe98();
    uVar4 = (uint)param_1;
    *param_3 = *param_3 - uVar4;
    puVar1 = auStack_138;
    for (uVar10 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); unaff_x22 = 0, uVar10 != 0;
        uVar10 = uVar10 - 1) {
      bVar2 = **(byte **)(puVar1 + -2);
      iVar3 = bVar2 - 99;
      in_ZR = iVar3 == 0x10;
      switch(iVar3) {
      case 0:
        pcVar6 = (char *)(ulong)*puVar1;
        func_0x004a2c58();
        func_0x004a2cac();
        pdVar8 = (double *)(long)cStack_149;
        break;
      case 1:
        pdVar8 = &dStack_188;
        func_0x004a2c58();
        uVar9 = unaff_x19[1];
        pcVar6 = *(char **)(puVar1 + -4);
        dVar11 = dStack_188;
        goto code_r0x004a2a10;
      case 2:
      case 4:
      case 5:
      case 7:
      case 8:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xf:
        goto LAB_004a2ab4;
      case 3:
        pdVar8 = (double *)&fStack_17c;
        func_0x004a2c58();
        uVar9 = unaff_x19[1];
        pcVar6 = *(char **)(puVar1 + -4);
        dVar11 = (double)fStack_17c;
code_r0x004a2a10:
        func_0x004a2d10(uVar9,dVar11);
        goto LAB_004a2ab4;
      case 6:
        pcVar6 = (char *)(ulong)*puVar1;
        func_0x004a2c58();
        func_0x004a2cac();
        pdVar8 = (double *)(long)iStack_150;
        break;
      case 9:
        pcVar6 = (char *)(ulong)*puVar1;
        func_0x004a2c58();
        func_0x004a2cac();
        pdVar8 = (double *)(long)iStack_154;
        break;
      case 0xe:
        pcVar6 = (char *)(ulong)*puVar1;
        func_0x004a2c58();
        func_0x004a2cac();
        pdVar8 = pdStack_160;
        break;
      case 0x10:
        pcVar6 = (char *)(ulong)*puVar1;
        func_0x004a2c58();
        func_0x004a2cac();
        pdVar8 = (double *)(long)sStack_14c;
        break;
      default:
        iVar3 = bVar2 - 0x3a;
        in_ZR = iVar3 == 9;
        switch(iVar3) {
        case 0:
        case 6:
LAB_004a2974:
          func_0x004a2c58();
          pcVar6 = *(char **)(puVar1 + -4);
          pdVar8 = pdStack_198;
          func_0x004a2d04();
          break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
          break;
        case 8:
          func_0x004a2c58();
          pcVar6 = *(char **)(puVar1 + -4);
          pdVar8 = (double *)(ulong)bStack_189;
          param_1 = unaff_x19;
          (*(code *)*unaff_x19)();
          break;
        case 9:
          pcVar6 = (char *)(ulong)*puVar1;
          func_0x004a2c58();
          func_0x004a2cc4();
          pdVar8 = (double *)(ulong)bStack_161;
          goto LAB_004a2ab0;
        default:
          in_ZR = true;
          if ((bVar2 == 0x23) || (in_ZR = true, bVar2 == 0x2a)) goto LAB_004a2974;
          in_ZR = bVar2 == 0x49;
          if ((bool)in_ZR) {
            pcVar6 = (char *)(ulong)*puVar1;
            func_0x004a2c58();
            func_0x004a2cc4();
            pdVar8 = (double *)(ulong)uStack_168;
          }
          else {
            in_ZR = bVar2 == 0x4c;
            if ((bool)in_ZR) {
              pcVar6 = (char *)(ulong)*puVar1;
              func_0x004a2c58();
              func_0x004a2cc4();
              pdVar8 = (double *)(ulong)uStack_16c;
            }
            else {
              in_ZR = bVar2 == 0x51;
              if ((bool)in_ZR) {
                pcVar6 = (char *)(ulong)*puVar1;
                func_0x004a2c58();
                func_0x004a2cc4();
                pdVar8 = pdStack_178;
              }
              else {
                in_ZR = bVar2 == 0x53;
                if (!(bool)in_ZR) break;
                pcVar6 = (char *)(ulong)*puVar1;
                func_0x004a2c58();
                func_0x004a2cc4();
                pdVar8 = (double *)(ulong)uStack_164;
              }
            }
          }
          goto LAB_004a2ab0;
        }
        goto LAB_004a2ab4;
      }
LAB_004a2ab0:
      func_0x004a2c3c();
LAB_004a2ab4:
      puVar1 = puVar1 + 6;
    }
  }
  func_0x004a2ba8();
  func_0x004a2b94(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (((pdVar8 != (double *)0x0) &&
      ((-1 < (long)pdVar8 || (*(int *)(((ulong)pdVar8 >> 0x3c & 7) * 0x30 + 0xb093c0) != 0)))) &&
     ((pdVar5 = pdVar8, uStack_1d0 = unaff_x22, piStack_1c8 = param_3, puStack_1c0 = param_2,
      FUN_004abfbc(), (int)pdVar5 != 0 || (pdVar5 = pdVar8, FUN_004a27dc(), (int)pdVar5 != 0)))) {
    uStack_1d4 = 0xf;
    FUN_004a2544(param_1,pcVar6,pdVar8,&uStack_1d4);
  }
  return;
}



/* Entry: 004a2b08; end: 004a2b93;  */

void FUN_004a2b08(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uStack_34;
  
  if (((param_3 != 0) &&
      ((-1 < (long)param_3 || (*(int *)((param_3 >> 0x3c & 7) * 0x30 + 0xb093c0) != 0)))) &&
     ((uVar1 = param_3, FUN_004abfbc(), (int)uVar1 != 0 ||
      (uVar1 = param_3, FUN_004a27dc(), (int)uVar1 != 0)))) {
    uStack_34 = 0xf;
    FUN_004a2544(param_1,param_2,param_3,&uStack_34);
  }
  return;
}



/* Entry: 004a2b94; end: 004a2dcb;  */

void FUN_004a2b94(void)

{
  return;
}



/* Entry: 004a2dcc; end: 004a2f5f;  */

char * FUN_004a2dcc(long param_1,int param_2,char *param_3)

{
  undefined1 in_ZR;
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint uVar6;
  code **ppcStack_28b0;
  undefined1 auStack_28a8 [10008];
  char *pcStack_190;
  uint uStack_188;
  undefined1 auStack_180 [72];
  code *pcStack_138;
  code ***pppcStack_130;
  undefined1 auStack_128 [204];
  undefined1 uStack_5c;
  undefined8 uStack_58;
  
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pcVar3 = (char *)0x0;
  if (param_1 != 0) {
    _memcpy(auStack_180,&PTR_FUN_009ebc10,0x48);
    pcVar1 = "";
    _malloc();
    lVar2 = param_1;
    _strlen();
    uVar6 = (uint)((double)(int)lVar2 * 1.5);
    pcVar3 = (char *)(ulong)uVar6;
    _malloc();
    _bzero(auStack_28a8,&UNK_00002728);
    ppcStack_28b0 = &pcStack_138;
    pcStack_190 = pcVar3;
    uStack_188 = uVar6;
    _bzero(auStack_128,0xd0);
    pcStack_138 = FUN_004a31d0;
    uStack_5c = 1;
    lVar2 = param_1;
    pppcStack_130 = &ppcStack_28b0;
    _strlen();
    param_2 = (int)lVar2;
    param_3 = pcVar1;
    FUN_004a8e3c();
    *pcStack_190 = '\0';
    _free(pcVar1);
    pcVar5 = pcVar3;
    if ((int)param_1 == 0) goto LAB_004a2f2c;
    FUN_004a8664();
    param_2 = 0x8ddeda;
    param_3 = section_00000108.sectname + 6;
    func_0x004ab038("ERROR","Vendors/KSCrash/implementation/Recording/KSCrashReportFixer.c",0x10e,
                    "char *kscrf_fixupCrashReport(const char *)","Could not decode report: %s");
    _free(pcVar3);
  }
  pcVar5 = (char *)0x0;
  pcVar1 = pcVar3;
LAB_004a2f2c:
  FUN_004a3284(uStack_58);
  if ((bool)in_ZR) {
    return pcVar5;
  }
  ___stack_chk_fail();
  param_3 = *(char **)param_3;
  pcVar3 = param_3;
  FUN_004a868c(param_3,pcVar1);
  if ((int)pcVar3 == 0) {
    if (param_2 == 0) {
      pcVar3 = "false";
      uVar4 = 5;
    }
    else {
      pcVar3 = "true";
      uVar4 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_3)(pcVar3,uVar4,*(undefined8 *)(param_3 + 8));
    return pcVar3;
  }
  return pcVar3;
}



/* Entry: 004a2f60; end: 004a2f83;  */

void FUN_004a2f60(undefined8 param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  param_3 = (undefined8 *)*param_3;
  puVar1 = param_3;
  FUN_004a868c(param_3,param_1);
  if ((int)puVar1 == 0) {
    if (param_2 == 0) {
      pcVar2 = "false";
      uVar3 = 5;
    }
    else {
      pcVar2 = "true";
      uVar3 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_3)(pcVar2,uVar3,param_3[1]);
    return;
  }
  return;
}



/* Entry: 004a2f84; end: 004a30e3;  */

void FUN_004a2f84(char *param_1,char *param_2,undefined8 *param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined1 auStack_7d [5];
  undefined8 uStack_78;
  char *pcStack_70;
  undefined8 *puStack_68;
  
  lVar11 = 0;
  puStack_68 = *(undefined8 **)PTR____stack_chk_guard_00999f88;
  pcVar1 = "";
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  uVar2 = *(uint *)(param_3 + 0x4e3);
  ppuVar9 = &PTR_s__009ebc58;
  pcVar8 = param_2;
  for (; uVar3 = lVar11 == 2, !(bool)uVar3; lVar11 = lVar11 + 1) {
    puVar6 = param_3 + 1;
    uVar12 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    ppuVar13 = ppuVar9;
    do {
      if (uVar12 == 0) {
        pcVar8 = (&PTR_s__009ebc58)[lVar11 * 100 + (long)(int)uVar2];
        pcVar4 = pcVar1;
        _strncmp(pcVar1,pcVar8,100);
        if ((int)pcVar4 == 0) {
          FUN_004a7198(param_2,auStack_7d);
          uVar10 = *param_3;
          puVar5 = auStack_7d;
          _strlen(puVar5);
          FUN_004a89b0(uVar10,param_1,auStack_7d,puVar5);
          FUN_004a3284(puStack_68);
          pcVar8 = param_1;
          if ((bool)uVar3) {
            return;
          }
          goto LAB_004a30e0;
        }
        break;
      }
      pcVar8 = *ppuVar13;
      puVar7 = puVar6;
      _strncmp(puVar6,pcVar8,100);
      puVar6 = (undefined8 *)((long)puVar6 + 100);
      uVar12 = uVar12 - 1;
      ppuVar13 = ppuVar13 + 1;
    } while ((int)puVar7 == 0);
    ppuVar9 = ppuVar9 + 100;
  }
  param_3 = (undefined8 *)*param_3;
  FUN_004a3284(puStack_68);
  if (!(bool)uVar3) {
LAB_004a30e0:
    ___stack_chk_fail();
    puVar6 = *(undefined8 **)pcVar8;
SUB_004a8978:
    puVar7 = puVar6;
    FUN_004a868c();
    if ((int)puVar7 != 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar6)("null",4,puVar6[1]);
    return;
  }
  puVar6 = param_3;
  func_0x004a9c44();
  FUN_004a868c();
  if ((int)puVar6 == 0) {
    func_0x004a9c6c();
    func_0x004a9ca0();
    func_0x004a9c5c();
  }
  func_0x004a9c24(extraout_x8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    pcStack_70 = param_2;
    puStack_68 = param_3;
    func_0x004a9c44();
    uStack_78 = extraout_x8_00;
    FUN_004a868c();
    if ((int)puVar6 == 0) {
      func_0x004a9c6c();
      func_0x004a9ca0();
      func_0x004a9c5c();
    }
    func_0x004a9c24(uStack_78);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      goto SUB_004a8978;
    }
  }
  return;
}



/* Entry: 004a30e4; end: 004a30f3;  */

void FUN_004a30e4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_2 = (undefined8 *)*param_2;
  puVar1 = param_2;
  FUN_004a868c(param_2,param_1);
  if ((int)puVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_2)("null",4,param_2[1]);
    return;
  }
  return;
}



/* Entry: 004a30f4; end: 004a3197;  */

void FUN_004a30f4(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  param_3 = (undefined8 *)*param_3;
  lVar2 = param_2;
  _strlen();
  if (param_2 != 0) {
    puVar3 = param_3;
    FUN_004a868c(param_3,param_1);
    if ((int)puVar3 == 0) {
      if ((int)lVar2 == -1) {
        lVar2 = param_2;
        _strlen(param_2);
      }
      iVar1 = 0x8dee65;
      func_0x004a9cbc(*param_3,"\"",param_2,param_3[1]);
      if (iVar1 == 0) {
        FUN_004a8a54(param_3,param_2,lVar2);
        func_0x004a9cbc(*param_3,"\"");
      }
    }
    return;
  }
  puVar3 = param_3;
  FUN_004a868c(param_3,param_1);
  if ((int)puVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)("null",4,param_3[1]);
  return;
}



/* Entry: 004a3198; end: 004a31c7;  */

void FUN_004a3198(undefined8 *param_1)

{
  FUN_004a8d44(*param_1);
  if (0 < *(int *)(param_1 + 0x4e3)) {
    *(int *)(param_1 + 0x4e3) = *(int *)(param_1 + 0x4e3) + -1;
  }
  return;
}



/* Entry: 004a31c8; end: 004a31cf;  */

void FUN_004a31c8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = lVar1;
  do {
    if (*(int *)(lVar1 + 0x10) < 1) {
      return;
    }
    func_0x004a9ce4();
  } while ((int)lVar2 == 0);
  return;
}



/* Entry: 004a31d0; end: 004a3283;  */

undefined8 FUN_004a31d0(undefined8 param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(&UNK_00002728 + param_3) < param_2) {
    uVar1 = 2;
  }
  else {
    _memcpy(*(undefined8 *)(&UNK_00002720 + param_3),param_1,(long)param_2);
    uVar1 = 0;
    *(long *)(&UNK_00002720 + param_3) = *(long *)(&UNK_00002720 + param_3) + (long)param_2;
    *(int *)(&UNK_00002728 + param_3) = *(int *)(&UNK_00002728 + param_3) - param_2;
  }
  return uVar1;
}



/* Entry: 004a3284; end: 004a32cf;  */

void FUN_004a3284(void)

{
  return;
}



/* Entry: 004a32d0; end: 004a339f;  */

void FUN_004a32d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_5c;
  int iStack_54;
  undefined1 auStack_38 [8];
  
  func_0x004a3964();
  _strdup();
  uVar1 = param_2;
  uRam0000000000b66168 = param_1;
  _strdup();
  uRam0000000000b66170 = uVar1;
  FUN_004a7bb8(param_2);
  FUN_004a37e4();
  _time(auStack_38);
  _gmtime_r(auStack_38,&iStack_70);
  uVar2 = ((long)iStack_70 + (long)iStack_6c * 0x3d + (long)iStack_68 * 0xe4c +
           (long)iStack_54 * 0x15720 + (long)iStack_5c * 0x1ea8fc0) * 0x800000;
  uRam0000000000b66178 = uVar2 & 0xffffffff00000000;
  uRam0000000000b66180 = (undefined4)uVar2;
  _pthread_mutex_unlock();
  return;
}



/* Entry: 004a33a0; end: 004a33df;  */

long FUN_004a33a0(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  uint *extraout_x9;
  
  func_0x004a39dc();
  do {
    uVar1 = *extraout_x9;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(extraout_x9,0x10);
    if (bVar3) {
      *extraout_x9 = uVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1 != 0) {
    func_0x004a39c8();
  }
  return extraout_x8 + (ulong)uVar1;
}



/* Entry: 004a33e0; end: 004a33f3;  */

void FUN_004a33e0(undefined8 param_1,undefined8 param_2)

{
  _snprintf(param_2,500,"%s/%s-report-%016llx.json");
  return;
}



/* Entry: 004a33f4; end: 004a3423;  */

undefined8 FUN_004a33f4(undefined8 param_1)

{
  func_0x004a3964();
  FUN_004a38a0();
  _pthread_mutex_unlock();
  return param_1;
}



/* Entry: 004a3424; end: 004a34f3;  */

undefined8 FUN_004a3424(undefined8 param_1,undefined8 param_2)

{
  func_0x004a3998();
  func_0x004a3458();
  func_0x004a39bc();
  return param_2;
}



/* Entry: 004a34f4; end: 004a3507;  */

long FUN_004a34f4(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = uRam0000000000b66168;
  lVar2 = lRam0000000000b66170;
  _opendir();
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    while ((lVar3 = lVar2, _readdir(), lVar3 != 0 && ((int)lVar4 < param_2))) {
      lVar3 = lVar3 + 0x15;
      FUN_004a38b4(lVar3,uVar1);
      if (-1 < lVar3) {
        *(long *)(param_1 + lVar4 * 8) = lVar3;
        lVar4 = lVar4 + 1;
      }
    }
    _qsort(param_1,param_2,8,FUN_004a3928);
    _closedir(lVar2);
  }
  return lVar4;
}



/* Entry: 004a3508; end: 004a35ff;  */

undefined8 FUN_004a3508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _pthread_mutex_lock(0xb09250);
  func_0x004a3568(param_1,param_2,param_3,param_4);
  _pthread_mutex_unlock(0xb09250);
  return param_1;
}



/* Entry: 004a3600; end: 004a366b;  */

void FUN_004a3600(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_47c [500];
  undefined8 uStack_288;
  undefined8 uStack_238;
  
  func_0x004a3954();
  _pthread_mutex_lock(0xb09250);
  func_0x004a39c8();
  func_0x004a3974();
  _pthread_mutex_unlock(0xb09250);
  func_0x004a3940(extraout_x8,uStack_238);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x004a3954();
  uStack_288 = extraout_x8_00;
  _pthread_mutex_lock(0xb09250);
  puVar1 = auStack_47c;
  FUN_004a36f4(uStack_238,puVar1);
  func_0x004a3974();
  _pthread_mutex_unlock(0xb09250);
  func_0x004a3940(uStack_288);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  _snprintf(puVar1,500,"%s/%s-report-%016llx.json");
  return;
}



/* Entry: 004a366c; end: 004a36f3;  */

void FUN_004a366c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_23c [500];
  undefined8 uStack_48;
  
  func_0x004a3954();
  uStack_48 = extraout_x8;
  _pthread_mutex_lock(0xb09250);
  puVar1 = auStack_23c;
  FUN_004a36f4(param_1,puVar1);
  func_0x004a3974();
  _pthread_mutex_unlock(0xb09250);
  func_0x004a3940(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  _snprintf(puVar1,500,"%s/%s-report-%016llx.json");
  return;
}



/* Entry: 004a36f4; end: 004a3727;  */

void FUN_004a36f4(undefined8 param_1,undefined8 param_2)

{
  _snprintf(param_2,500,"%s/%s-report-%016llx.json");
  return;
}



/* Entry: 004a3728; end: 004a3753;  */

void FUN_004a3728(void)

{
  func_0x004a3964();
  FUN_004a7cfc(uRam0000000000b66170);
                    /* WARNING: Could not recover jumptable at 0x0077ad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_0099a598)();
  return;
}



/* Entry: 004a3754; end: 004a37e3;  */

ulong FUN_004a3754(ulong param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  bool bVar2;
  int iVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong auStack_490 [2];
  
  func_0x004a3954();
  FUN_004a33e0();
  func_0x004a39d0();
  func_0x004a3940(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x004a3954();
  FUN_004a36f4();
  func_0x004a39d0();
  func_0x004a3940(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x004a3954();
    auStack_490[1] = extraout_x8_01;
    FUN_004a38a0();
    bVar2 = (int)param_1 == iRam0000000000b09290;
    if (iRam0000000000b09290 < (int)param_1) {
      (*(code *)PTR____chkstk_darwin_00999f48)((param_1 & 0xffffffff) * 8 + 0xf & 0xffffffff0);
      param_1 = (long)auStack_490 - extraout_x8_02;
      FUN_004a34f4();
      iVar3 = (int)param_1;
      for (lVar6 = 0; lVar4 = (long)iVar3 - (long)iRam0000000000b09290, bVar2 = lVar6 == lVar4,
          lVar6 < lVar4; lVar6 = lVar6 + 1) {
        param_1 = *(ulong *)(((long)auStack_490 - extraout_x8_02) + lVar6 * 8);
        FUN_004a3754(param_1);
      }
    }
    func_0x004a3940(auStack_490[1]);
    if (!bVar2) {
      ___stack_chk_fail();
      uVar1 = uRam0000000000b66168;
      lVar6 = lRam0000000000b66170;
      _opendir();
      if (lVar6 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        while (lVar4 = lVar6, _readdir(), lVar4 != 0) {
          lVar4 = lVar4 + 0x15;
          FUN_004a38b4(lVar4,uVar1);
          uVar5 = (ulong)((int)uVar5 + ((uint)((ulong)lVar4 >> 0x3f) ^ 1));
        }
        _closedir(lVar6);
      }
      return uVar5;
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 004a37e4; end: 004a389f;  */

ulong FUN_004a37e4(ulong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong auStack_50 [2];
  
  func_0x004a3954();
  auStack_50[1] = extraout_x8;
  FUN_004a38a0();
  bVar2 = (int)param_1 == iRam0000000000b09290;
  if (iRam0000000000b09290 < (int)param_1) {
    (*(code *)PTR____chkstk_darwin_00999f48)((param_1 & 0xffffffff) * 8 + 0xf & 0xffffffff0);
    param_1 = (long)auStack_50 - extraout_x8_00;
    FUN_004a34f4();
    iVar3 = (int)param_1;
    for (lVar6 = 0; lVar4 = (long)iVar3 - (long)iRam0000000000b09290, bVar2 = lVar6 == lVar4,
        lVar6 < lVar4; lVar6 = lVar6 + 1) {
      param_1 = *(ulong *)(((long)auStack_50 - extraout_x8_00) + lVar6 * 8);
      FUN_004a3754(param_1);
    }
  }
  func_0x004a3940(auStack_50[1]);
  if (!bVar2) {
    ___stack_chk_fail();
    uVar1 = uRam0000000000b66168;
    lVar6 = lRam0000000000b66170;
    _opendir();
    if (lVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      while (lVar4 = lVar6, _readdir(), lVar4 != 0) {
        lVar4 = lVar4 + 0x15;
        FUN_004a38b4(lVar4,uVar1);
        uVar5 = (ulong)((int)uVar5 + ((uint)((ulong)lVar4 >> 0x3f) ^ 1));
      }
      _closedir(lVar6);
    }
    return uVar5;
  }
  return param_1;
}



/* Entry: 004a38a0; end: 004a38b3;  */

int FUN_004a38a0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  uVar1 = uRam0000000000b66168;
  lVar2 = lRam0000000000b66170;
  _opendir();
  if (lVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    while (lVar3 = lVar2, _readdir(), lVar3 != 0) {
      lVar3 = lVar3 + 0x15;
      FUN_004a38b4(lVar3,uVar1);
      iVar4 = iVar4 + ((uint)((ulong)lVar3 >> 0x3f) ^ 1);
    }
    _closedir(lVar2);
  }
  return iVar4;
}



/* Entry: 004a38b4; end: 004a3927;  */

long * FUN_004a38b4(undefined8 param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  uint uVar2;
  undefined8 extraout_x8;
  long *plStack_98;
  long alStack_8c [12];
  undefined8 uStack_28;
  
  func_0x004a3954();
  uStack_28 = extraout_x8;
  ___sprintf_chk(alStack_8c,0,100,"%s-report-%%llx.json");
  plStack_98 = (long *)0xffffffffffffffff;
  plVar1 = alStack_8c;
  _sscanf(param_1);
  func_0x004a3940(uStack_28);
  if ((bool)in_ZR) {
    return plStack_98;
  }
  ___stack_chk_fail();
  uVar2 = (uint)(*plVar1 < *plStack_98);
  if (*plStack_98 < *plVar1) {
    uVar2 = 0xffffffff;
  }
  return (long *)(ulong)uVar2;
}



/* Entry: 004a3928; end: 004a39ef;  */

uint FUN_004a3928(long *param_1,long *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 < *param_1);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 004a39f0; end: 004a3acf;  */

void FUN_004a39f0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  
  puVar3 = param_1;
  FUN_004a7210();
  if ((((ulong)param_1 & 0xf) != 0) && ((int)puVar3 != 0)) {
    if ((bRam0000000000b66198 & 1) == 0) {
      bRam0000000000b66198 = 1;
    }
    param_1 = (uint *)(ulong)((uint)param_1 & 0xe0);
  }
  uVar5 = 0;
  uVar1 = (uint)param_1 & 3;
  if ((((ulong)param_1 & 0xec) != 0 & bRam0000000000b66199) == 0) {
    uVar1 = (uint)param_1;
  }
  lVar6 = 7;
  puVar4 = (uint *)0xb09298;
  do {
    if (*(code **)(puVar4 + 2) != (code *)0x0) {
      uVar2 = *puVar4;
      (**(code **)(puVar4 + 2))();
      if ((puVar3 != (uint *)0x0) && (*(code **)puVar3 != (code *)0x0)) {
        (**(code **)puVar3)((uVar2 & uVar1) != 0);
      }
    }
    puVar3 = puVar4;
    FUN_004a3ad0();
    uVar2 = uVar5 & (*puVar4 ^ 0xffffffff);
    uVar5 = *puVar4 | uVar5;
    if ((int)puVar3 == 0) {
      uVar5 = uVar2;
    }
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 4;
  } while (lVar6 != 0);
  uRam0000000000b6619c = uVar5;
  return;
}



/* Entry: 004a3ad0; end: 004a3b07;  */

code * FUN_004a3ad0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 != 0) && (*(code **)(param_1 + 8) != (code *)0x0)) &&
      ((**(code **)(param_1 + 8))(), param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004a3af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  return (code *)0x0;
}



/* Entry: 004a3b08; end: 004a3b77;  */

char FUN_004a3b08(byte param_1)

{
  bRam0000000000b66199 = bRam0000000000b66199 | param_1;
  if (cRam0000000000b661a0 == '\x01') {
    cRam0000000000b661a1 = cRam0000000000b661a0;
  }
  else {
    cRam0000000000b661a0 = '\x01';
    if (cRam0000000000b661a1 != '\x01') {
      cRam0000000000b661a0 = 1;
      return '\0';
    }
  }
  FUN_004a39f0(0);
  return cRam0000000000b661a1;
}



/* Entry: 004a3b78; end: 004a3c4f;  */

/* WARNING: Removing unreachable block (ram,0x004a3a14) */
/* WARNING: Removing unreachable block (ram,0x004a3a18) */
/* WARNING: Removing unreachable block (ram,0x004a3a24) */
/* WARNING: Removing unreachable block (ram,0x004a3a2c) */

void FUN_004a3b78(long param_1)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  *(undefined1 *)(param_1 + 0x11) = uRam0000000000b66199;
  if (bRam0000000000b661a1 == 1) {
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  lVar6 = 0xb09298;
  lVar7 = 7;
  do {
    lVar2 = lVar6;
    FUN_004a3ad0();
    if (((((int)lVar2 != 0) && (*(code **)(lVar6 + 8) != (code *)0x0)) &&
        ((**(code **)(lVar6 + 8))(), lVar2 != 0)) && (*(code **)(lVar2 + 0x10) != (code *)0x0)) {
      (**(code **)(lVar2 + 0x10))(param_1);
    }
    lVar6 = lVar6 + 0x10;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  (*pcRam0000000000b66188)(param_1);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    if ((cRam0000000000b661a0 == '\x01') && ((bRam0000000000b661a1 & 1) == 0)) {
      puVar3 = (uint *)0x0;
      FUN_004a7210();
      uVar5 = 0;
      lVar6 = 7;
      puVar4 = (uint *)0xb09298;
      do {
        if (((*(code **)(puVar4 + 2) != (code *)0x0) &&
            ((**(code **)(puVar4 + 2))(), puVar3 != (uint *)0x0)) &&
           (*(code **)puVar3 != (code *)0x0)) {
          (**(code **)puVar3)(0);
        }
        puVar3 = puVar4;
        FUN_004a3ad0();
        uVar1 = uVar5 & (*puVar4 ^ 0xffffffff);
        uVar5 = *puVar4 | uVar5;
        if ((int)puVar3 == 0) {
          uVar5 = uVar1;
        }
        lVar6 = lVar6 + -1;
        puVar4 = puVar4 + 4;
      } while (lVar6 != 0);
      uRam0000000000b6619c = uVar5;
      return;
    }
  }
  else {
    cRam0000000000b661a0 = '\0';
  }
  return;
}



/* Entry: 004a3c50; end: 004a3dbf;  */

bool FUN_004a3c50(int param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong unaff_x19;
  undefined4 uStack_48c;
  code *pcStack_488;
  code *pcStack_480;
  code *pcStack_478;
  code *pcStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  code *pcStack_458;
  code *pcStack_450;
  undefined8 uStack_448;
  undefined4 uStack_43c;
  undefined8 uStack_438;
  undefined1 auStack_430 [1000];
  undefined8 uStack_48;
  
  func_0x004a45e8();
  uStack_48 = extraout_x8;
  _open();
  if (-1 < param_1) {
    _close();
    FUN_004a7a00();
    if ((unaff_x19 & 1) != 0) {
      pcStack_458 = FUN_004a3dc0;
      pcStack_450 = FUN_004a3e00;
      uStack_448 = 0x4a3e04;
      pcStack_488 = FUN_004a3dc8;
      pcStack_480 = FUN_004a3e08;
      pcStack_478 = FUN_004a3e64;
      pcStack_470 = FUN_004a3f18;
      pcStack_468 = FUN_004a3f1c;
      uStack_460 = 0x4a3dc4;
      uStack_48c = 0;
      uVar2 = uStack_438;
      FUN_004a8e3c(uStack_438,uStack_43c,auStack_430,1000,&pcStack_488,0xb661b0,&uStack_48c);
      _free(uStack_438);
      bVar1 = (int)uVar2 == 0;
      in_ZR = bVar1;
      if ((int)uVar2 != 0) {
        FUN_004a8664();
        func_0x004a45a4();
        func_0x004ab038(extraout_x8_00);
      }
      goto LAB_004a3d94;
    }
    func_0x004a45d4();
    func_0x004ab038();
  }
  bVar1 = false;
LAB_004a3d94:
  func_0x004a45fc(uStack_48);
  if ((bool)in_ZR) {
    return bVar1;
  }
  ___stack_chk_fail();
  return false;
}



/* Entry: 004a3dc0; end: 004a3dc7;  */

undefined8 FUN_004a3dc0(void)

{
  return 0;
}



/* Entry: 004a3dc8; end: 004a3dff;  */

undefined8 FUN_004a3dc8(undefined8 param_1,undefined1 param_2,long param_3)

{
  _strcmp(param_1,"crashedLastLaunch");
  if ((int)param_1 == 0) {
    *(undefined1 *)(param_3 + 0x2c) = param_2;
  }
  return 0;
}



/* Entry: 004a3e00; end: 004a3e07;  */

undefined8 FUN_004a3e00(void)

{
  return 0;
}



/* Entry: 004a3e08; end: 004a3e63;  */

undefined8 FUN_004a3e08(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strcmp(param_2,"activeDurationSinceLastCrash");
  if ((int)uVar1 == 0) {
    *param_3 = param_1;
  }
  _strcmp(param_2,"backgroundDurationSinceLastCrash");
  if ((int)param_2 == 0) {
    param_3[1] = param_1;
  }
  return 0;
}



/* Entry: 004a3e64; end: 004a3f17;  */

undefined8 FUN_004a3e64(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  _strcmp(param_1,"version");
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
    if (param_2 != 1) {
      func_0x004a45d4();
      func_0x004ab038();
      return 5;
    }
  }
  else {
    func_0x004a45c0();
    if (iVar1 == 0) {
      *(int *)(param_3 + 0x10) = (int)param_2;
    }
    else {
      func_0x004a45c0();
      if (iVar1 == 0) {
        *(int *)(param_3 + 0x14) = (int)param_2;
      }
    }
  }
  FUN_004a3e08((double)param_2,param_1,param_3);
  return 0;
}



/* Entry: 004a3f18; end: 004a3f1b;  */

undefined8 FUN_004a3f18(void)

{
  return 0;
}



/* Entry: 004a3f1c; end: 004a4193;  */

undefined8 FUN_004a3f1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  _strcmp(param_1,"reportIDLastLaunch");
  if ((int)param_1 == 0) {
    param_1 = param_2;
    _strdup();
    *(undefined8 *)(param_3 + 0x40) = param_1;
  }
  iVar1 = (int)param_1;
  func_0x004a45c0();
  if (iVar1 == 0) {
    _strdup();
    *(undefined8 *)(param_3 + 0x48) = param_2;
  }
  return 0;
}



/* Entry: 004a4194; end: 004a41f7;  */

undefined4 FUN_004a4194(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_3;
  FUN_004a7908(iVar1,param_1,param_2);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  return uVar2;
}



/* Entry: 004a41f8; end: 004a426f;  */

void FUN_004a41f8(double param_1,int param_2)

{
  double dVar1;
  
  dVar1 = dRam0000000000b661e0;
  if (cRam0000000000b66208 == '\x01') {
    uRam0000000000b661e8 = (undefined1)param_2;
    if (param_2 == 0) {
      FUN_004a4554();
      dRam0000000000b661c8 = dRam0000000000b661c8 + (param_1 - dVar1);
      dRam0000000000b661b0 = (param_1 - dVar1) + dRam0000000000b661b0;
    }
    else {
      FUN_004a4554();
      dRam0000000000b661e0 = param_1;
    }
  }
  return;
}



/* Entry: 004a4270; end: 004a430b;  */

ulong FUN_004a4270(double param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  code **ppcVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  char *pcVar8;
  uint uVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar10;
  uint uStack_11c;
  code *pcStack_118;
  uint *puStack_110;
  undefined1 auStack_108 [204];
  undefined1 uStack_3c;
  undefined8 uStack_38;
  
  uVar3 = uRam0000000000b66200;
  uVar1 = cRam0000000000b66208 == '\x01';
  if (!(bool)uVar1) {
    return param_2;
  }
  uRam0000000000b661e9 = (undefined1)param_2;
  uVar5 = param_2;
  FUN_004a4554();
  if ((int)param_2 != 0) {
    dRam0000000000b661b8 = (param_1 - dRam0000000000b661e0) + dRam0000000000b661b8;
    iRam0000000000b661c4 = iRam0000000000b661c4 + 1;
    dRam0000000000b661d0 = dRam0000000000b661d0 + (param_1 - dRam0000000000b661e0);
    iRam0000000000b661d8 = iRam0000000000b661d8 + 1;
    return uVar5;
  }
  dRam0000000000b661e0 = param_1;
  func_0x004a45e8();
  uStack_11c = (uint)uVar3;
  pcVar8 = "";
  uStack_38 = extraout_x8;
  _open();
  if ((int)uStack_11c < 0) {
    ___error();
    _strerror();
    func_0x004a45a4();
    param_4 = section_00000108.sectname + 8;
    uVar5 = extraout_x8_01;
    func_0x004ab038(extraout_x8_01);
    uVar10 = 0;
    goto LAB_004a4110;
  }
  _bzero(auStack_108,0xd0);
  puStack_110 = &uStack_11c;
  pcStack_118 = FUN_004a4194;
  uStack_3c = 1;
  ppcVar4 = &pcStack_118;
  pcVar8 = (char *)0x0;
  func_0x004a8cec(ppcVar4,0);
  iVar2 = (int)ppcVar4;
  if (iVar2 == 0) {
    pcVar8 = "version";
    ppcVar4 = &pcStack_118;
    param_4 = (char *)((long)&MACH_HEADER.magic + 1);
    FUN_004a88c0(ppcVar4,"version");
    iVar2 = (int)ppcVar4;
    if (iVar2 == 0) {
      param_4 = (char *)(ulong)bRam0000000000b661dd;
      pcVar8 = "crashedLastLaunch";
      ppcVar4 = &pcStack_118;
      FUN_004a8808(ppcVar4,"crashedLastLaunch");
      iVar2 = (int)ppcVar4;
      if (iVar2 == 0) {
        pcVar8 = "activeDurationSinceLastCrash";
        ppcVar4 = &pcStack_118;
        FUN_004a8858(uRam0000000000b661b0,ppcVar4,"activeDurationSinceLastCrash");
        iVar2 = (int)ppcVar4;
        if (iVar2 == 0) {
          pcVar8 = "backgroundDurationSinceLastCrash";
          ppcVar4 = &pcStack_118;
          FUN_004a8858(dRam0000000000b661b8,ppcVar4,"backgroundDurationSinceLastCrash");
          iVar2 = (int)ppcVar4;
          if (iVar2 == 0) {
            param_4 = (char *)(long)iRam0000000000b661c0;
            pcVar8 = "launchesSinceLastCrash";
            ppcVar4 = &pcStack_118;
            FUN_004a88c0(ppcVar4,"launchesSinceLastCrash");
            iVar2 = (int)ppcVar4;
            if (iVar2 == 0) {
              param_4 = (char *)(long)iRam0000000000b661c4;
              pcVar8 = "sessionsSinceLastCrash";
              ppcVar4 = &pcStack_118;
              FUN_004a88c0(ppcVar4,"sessionsSinceLastCrash");
              iVar2 = (int)ppcVar4;
              if (iVar2 == 0) {
                if (lRam0000000000b661f0 != 0) {
                  lVar6 = lRam0000000000b661f0;
                  _strlen();
                  iVar2 = (int)lVar6;
                  pcVar8 = "reportIDLastLaunch";
                  func_0x004a45c8();
                  if (iVar2 != 0) goto LAB_004a4094;
                }
                if (PTR_s_unavailable_00b09240 != (undefined *)0x0) {
                  puVar7 = PTR_s_unavailable_00b09240;
                  _strlen();
                  iVar2 = (int)puVar7;
                  pcVar8 = "sessionIdLastLaunch";
                  func_0x004a45c8();
                  if (iVar2 != 0) goto LAB_004a4094;
                }
                iVar2 = (int)&pcStack_118;
                FUN_004a8e08();
              }
            }
          }
        }
      }
    }
  }
LAB_004a4094:
  uVar5 = (ulong)uStack_11c;
  _close(uVar5);
  uVar1 = iVar2 == 0;
  uVar10 = (ulong)(byte)uVar1;
  if (iVar2 != 0) {
    FUN_004a8664();
    func_0x004a45a4();
    param_4 = section_00000158.sectname + 4;
    uVar5 = extraout_x8_00;
    func_0x004ab038(extraout_x8_00);
  }
LAB_004a4110:
  func_0x004a45fc(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    iVar2 = *(int *)param_4;
    FUN_004a7908(iVar2,uVar5,pcVar8);
    uVar9 = 0;
    if (iVar2 == 0) {
      uVar9 = 3;
    }
    return (ulong)uVar9;
  }
  return uVar10;
}



/* Entry: 004a430c; end: 004a436b;  */

ulong FUN_004a430c(double param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  double dVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  code **ppcVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar11;
  uint uStack_11c;
  code *pcStack_118;
  uint *puStack_110;
  undefined1 auStack_108 [204];
  undefined1 uStack_3c;
  undefined8 uStack_38;
  
  uVar4 = uRam0000000000b66200;
  dVar1 = dRam0000000000b661e0;
  uVar2 = cRam0000000000b66208 == '\x01';
  if (!(bool)uVar2) {
    return param_2;
  }
  FUN_004a4554();
  dRam0000000000b661b8 = dRam0000000000b661b8 + (param_1 - dVar1);
  func_0x004a45e8();
  uStack_11c = (uint)uVar4;
  pcVar9 = "";
  uStack_38 = extraout_x8;
  _open();
  if ((int)uStack_11c < 0) {
    ___error();
    _strerror();
    func_0x004a45a4();
    param_4 = section_00000108.sectname + 8;
    uVar6 = extraout_x8_01;
    func_0x004ab038(extraout_x8_01);
    uVar11 = 0;
    goto LAB_004a4110;
  }
  _bzero(auStack_108,0xd0);
  puStack_110 = &uStack_11c;
  pcStack_118 = FUN_004a4194;
  uStack_3c = 1;
  ppcVar5 = &pcStack_118;
  pcVar9 = (char *)0x0;
  func_0x004a8cec(ppcVar5,0);
  iVar3 = (int)ppcVar5;
  if (iVar3 == 0) {
    pcVar9 = "version";
    ppcVar5 = &pcStack_118;
    param_4 = (char *)((long)&MACH_HEADER.magic + 1);
    FUN_004a88c0(ppcVar5,"version");
    iVar3 = (int)ppcVar5;
    if (iVar3 == 0) {
      param_4 = (char *)(ulong)bRam0000000000b661dd;
      pcVar9 = "crashedLastLaunch";
      ppcVar5 = &pcStack_118;
      FUN_004a8808(ppcVar5,"crashedLastLaunch");
      iVar3 = (int)ppcVar5;
      if (iVar3 == 0) {
        pcVar9 = "activeDurationSinceLastCrash";
        ppcVar5 = &pcStack_118;
        FUN_004a8858(uRam0000000000b661b0,ppcVar5,"activeDurationSinceLastCrash");
        iVar3 = (int)ppcVar5;
        if (iVar3 == 0) {
          pcVar9 = "backgroundDurationSinceLastCrash";
          ppcVar5 = &pcStack_118;
          FUN_004a8858(dRam0000000000b661b8,ppcVar5,"backgroundDurationSinceLastCrash");
          iVar3 = (int)ppcVar5;
          if (iVar3 == 0) {
            param_4 = (char *)(long)iRam0000000000b661c0;
            pcVar9 = "launchesSinceLastCrash";
            ppcVar5 = &pcStack_118;
            FUN_004a88c0(ppcVar5,"launchesSinceLastCrash");
            iVar3 = (int)ppcVar5;
            if (iVar3 == 0) {
              param_4 = (char *)(long)iRam0000000000b661c4;
              pcVar9 = "sessionsSinceLastCrash";
              ppcVar5 = &pcStack_118;
              FUN_004a88c0(ppcVar5,"sessionsSinceLastCrash");
              iVar3 = (int)ppcVar5;
              if (iVar3 == 0) {
                if (lRam0000000000b661f0 != 0) {
                  lVar7 = lRam0000000000b661f0;
                  _strlen();
                  iVar3 = (int)lVar7;
                  pcVar9 = "reportIDLastLaunch";
                  func_0x004a45c8();
                  if (iVar3 != 0) goto LAB_004a4094;
                }
                if (PTR_s_unavailable_00b09240 != (undefined *)0x0) {
                  puVar8 = PTR_s_unavailable_00b09240;
                  _strlen();
                  iVar3 = (int)puVar8;
                  pcVar9 = "sessionIdLastLaunch";
                  func_0x004a45c8();
                  if (iVar3 != 0) goto LAB_004a4094;
                }
                iVar3 = (int)&pcStack_118;
                FUN_004a8e08();
              }
            }
          }
        }
      }
    }
  }
LAB_004a4094:
  uVar6 = (ulong)uStack_11c;
  _close(uVar6);
  uVar2 = iVar3 == 0;
  uVar11 = (ulong)(byte)uVar2;
  if (iVar3 != 0) {
    FUN_004a8664();
    func_0x004a45a4();
    param_4 = section_00000158.sectname + 4;
    uVar6 = extraout_x8_00;
    func_0x004ab038(extraout_x8_00);
  }
LAB_004a4110:
  func_0x004a45fc(uStack_38);
  if ((bool)uVar2) {
    return uVar11;
  }
  ___stack_chk_fail();
  iVar3 = *(int *)param_4;
  FUN_004a7908(iVar3,uVar6,pcVar9);
  uVar10 = 0;
  if (iVar3 == 0) {
    uVar10 = 3;
  }
  return (ulong)uVar10;
}



/* Entry: 004a436c; end: 004a43cb;  */

ulong FUN_004a436c(ulong param_1,undefined8 param_2,char *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  code **ppcVar4;
  ulong uVar5;
  undefined *puVar6;
  char *pcVar7;
  uint uVar8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar9;
  uint uStack_11c;
  code *pcStack_118;
  uint *puStack_110;
  undefined1 auStack_108 [204];
  undefined1 uStack_3c;
  undefined8 uStack_38;
  
  uVar3 = uRam0000000000b66200;
  uVar1 = cRam0000000000b66208 == '\x01';
  if (!(bool)uVar1) {
    return param_1;
  }
  FUN_004a43cc();
  bRam0000000000b661dd = 1;
  if (param_1 != 0) {
    _strdup();
    uRam0000000000b661f0 = param_1;
  }
  func_0x004a45e8();
  uStack_11c = (uint)uVar3;
  pcVar7 = "";
  uStack_38 = extraout_x8;
  _open();
  if ((int)uStack_11c < 0) {
    ___error();
    _strerror();
    func_0x004a45a4();
    param_3 = section_00000108.sectname + 8;
    uVar5 = extraout_x8_01;
    func_0x004ab038(extraout_x8_01);
    uVar9 = 0;
    goto LAB_004a4110;
  }
  _bzero(auStack_108,0xd0);
  puStack_110 = &uStack_11c;
  pcStack_118 = FUN_004a4194;
  uStack_3c = 1;
  ppcVar4 = &pcStack_118;
  pcVar7 = (char *)0x0;
  func_0x004a8cec(ppcVar4,0);
  iVar2 = (int)ppcVar4;
  if (iVar2 == 0) {
    pcVar7 = "version";
    ppcVar4 = &pcStack_118;
    param_3 = (char *)((long)&MACH_HEADER.magic + 1);
    FUN_004a88c0(ppcVar4,"version");
    iVar2 = (int)ppcVar4;
    if (iVar2 == 0) {
      param_3 = (char *)(ulong)bRam0000000000b661dd;
      pcVar7 = "crashedLastLaunch";
      ppcVar4 = &pcStack_118;
      FUN_004a8808(ppcVar4,"crashedLastLaunch");
      iVar2 = (int)ppcVar4;
      if (iVar2 == 0) {
        pcVar7 = "activeDurationSinceLastCrash";
        ppcVar4 = &pcStack_118;
        FUN_004a8858(uRam0000000000b661b0,ppcVar4,"activeDurationSinceLastCrash");
        iVar2 = (int)ppcVar4;
        if (iVar2 == 0) {
          pcVar7 = "backgroundDurationSinceLastCrash";
          ppcVar4 = &pcStack_118;
          FUN_004a8858(uRam0000000000b661b8,ppcVar4,"backgroundDurationSinceLastCrash");
          iVar2 = (int)ppcVar4;
          if (iVar2 == 0) {
            param_3 = (char *)(long)iRam0000000000b661c0;
            pcVar7 = "launchesSinceLastCrash";
            ppcVar4 = &pcStack_118;
            FUN_004a88c0(ppcVar4,"launchesSinceLastCrash");
            iVar2 = (int)ppcVar4;
            if (iVar2 == 0) {
              param_3 = (char *)(long)iRam0000000000b661c4;
              pcVar7 = "sessionsSinceLastCrash";
              ppcVar4 = &pcStack_118;
              FUN_004a88c0(ppcVar4,"sessionsSinceLastCrash");
              iVar2 = (int)ppcVar4;
              if (iVar2 == 0) {
                if (uRam0000000000b661f0 != 0) {
                  uVar5 = uRam0000000000b661f0;
                  _strlen();
                  iVar2 = (int)uVar5;
                  pcVar7 = "reportIDLastLaunch";
                  func_0x004a45c8();
                  if (iVar2 != 0) goto LAB_004a4094;
                }
                if (PTR_s_unavailable_00b09240 != (undefined *)0x0) {
                  puVar6 = PTR_s_unavailable_00b09240;
                  _strlen();
                  iVar2 = (int)puVar6;
                  pcVar7 = "sessionIdLastLaunch";
                  func_0x004a45c8();
                  if (iVar2 != 0) goto LAB_004a4094;
                }
                iVar2 = (int)&pcStack_118;
                FUN_004a8e08();
              }
            }
          }
        }
      }
    }
  }
LAB_004a4094:
  uVar5 = (ulong)uStack_11c;
  _close(uVar5);
  uVar1 = iVar2 == 0;
  uVar9 = (ulong)(byte)uVar1;
  if (iVar2 != 0) {
    FUN_004a8664();
    func_0x004a45a4();
    param_3 = section_00000158.sectname + 4;
    uVar5 = extraout_x8_00;
    func_0x004ab038(extraout_x8_00);
  }
LAB_004a4110:
  func_0x004a45fc(uStack_38);
  if ((bool)uVar1) {
    return uVar9;
  }
  ___stack_chk_fail();
  iVar2 = *(int *)param_3;
  FUN_004a7908(iVar2,uVar5,pcVar7);
  uVar8 = 0;
  if (iVar2 == 0) {
    uVar8 = 3;
  }
  return (ulong)uVar8;
}



/* Entry: 004a43cc; end: 004a444b;  */

void FUN_004a43cc(double param_1)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = dRam0000000000b661e0;
  FUN_004a4554();
  dVar2 = param_1 - dVar2;
  FUN_004a4554();
  if (cRam0000000000b661e8 == '\x01') {
    pdVar1 = (double *)0xb661b0;
  }
  else {
    if ((bRam0000000000b661e9 & 1) != 0) {
      dRam0000000000b661e0 = param_1;
      return;
    }
    pdVar1 = (double *)0xb661b8;
  }
  dRam0000000000b661e0 = param_1;
  pdVar1[3] = dVar2 + pdVar1[3];
  *pdVar1 = dVar2 + *pdVar1;
  return;
}


