/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ae6008; end: 106ae6027; -[KSCrashDoctorParam setType:] */

void FUN_106ae6008(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_106ae7c88();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae6028; end: 106ae6063; -[KSCrashDoctorParam .cxx_destruct] */

void FUN_106ae6028(long param_1)

{
  func_0x000106ae7d7c(param_1 + 0x30);
  func_0x000106ae7d7c(param_1 + 0x28);
  func_0x000106ae7d7c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ae6064; end: 106ae63df; -[KSCrashDoctorFunctionCall descriptionForObjCCall] */

/* WARNING: Removing unreachable block (ram,0x000106ae62d4) */
/* WARNING: Removing unreachable block (ram,0x000106ae6308) */
/* WARNING: Removing unreachable block (ram,0x000106ae6338) */

void FUN_106ae6064(long param_1,undefined8 param_2)

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
  func_0x00010c0d4f60();
  iVar2 = (int)lVar3;
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7d8c();
  func_0x000106ae7cb0();
  if (iVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c0f3900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106ae7cb0();
    func_0x00010c112680();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      func_0x00010bf39ce0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar3 = param_1;
    func_0x00010c0f3900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106ae7cb0();
    lVar4 = lVar3;
    func_0x00010c27dd80();
    iVar2 = (int)lVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x000106ae7d24();
    func_0x000106ae7cb0();
    if (iVar2 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106ae7cb0();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      puVar8 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      uVar1 = (int)lVar4 - 1;
      func_0x00010c0dfd20(lVar3,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(puVar8,param_2,&PTR____CFConstantStringClassReference_110e6f9b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x000106ae7d4c();
      for (uVar7 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar7; uVar7 = uVar7 + 1) {
        func_0x00010bf070e0(puVar8,param_2,&PTR____CFConstantStringClassReference_110db3eb8);
        if (uVar7 < 2) {
          lVar5 = param_1;
          func_0x00010c0f3900();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c0dfd20();
          _objc_retainAutoreleasedReturnValue();
          func_0x000106ae7cb0();
          func_0x00010c296d80(lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x000106ae7dc8();
          if (lVar5 == 0) {
            func_0x00010c112680();
            _objc_retainAutoreleasedReturnValue();
            func_0x000106ae7dc8();
            func_0x00010bf39ce0(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x000106ae7dc8();
            func_0x000106ae7dac();
          }
          else {
            lVar5 = lVar6;
            func_0x00010c27dd80();
            iVar2 = (int)lVar5;
            _objc_retainAutoreleasedReturnValue();
            func_0x000106ae7d24();
            func_0x000106ae7cb0();
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            if (iVar2 == 0) {
              func_0x00010bf070e0(puVar8,param_2,lVar6);
            }
            else {
              func_0x00010bf06ba0(puVar8,param_2,&PTR____CFConstantStringClassReference_110e2b998);
            }
            func_0x000106ae7cb0();
          }
          func_0x000106ae7d00();
        }
        else {
          func_0x000106ae7dac();
        }
        if ((long)uVar7 < (long)((int)lVar4 + -2)) {
          func_0x00010bf070e0(puVar8,param_2,&PTR____CFConstantStringClassReference_110db2d98);
        }
      }
      func_0x00010bf070e0(puVar8,param_2,&PTR____CFConstantStringClassReference_110dc4678);
      _objc_release(lVar3);
    }
    func_0x000106ae7cf8();
    func_0x000106ae7dc0();
    func_0x000106ae7ccc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106ae63e0; end: 106ae664f; -[KSCrashDoctorFunctionCall descriptionWithParamCount:] */

void FUN_106ae63e0(undefined *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  puVar3 = param_1;
  func_0x00010bf6e460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010c0f3900();
    iVar2 = (int)puVar3;
    _objc_retainAutoreleasedReturnValue();
    func_0x000106ae7d9c();
    func_0x000106ae7ccc();
    if (iVar2 < (int)param_3) {
      puVar3 = param_1;
      func_0x00010c0f3900();
      param_3 = (uint)puVar3;
      _objc_retainAutoreleasedReturnValue();
      func_0x000106ae7d9c();
      func_0x000106ae7ccc();
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ba0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6fa18);
    func_0x000106ae7d00();
    lVar1 = 0;
    for (uVar7 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar7 != 0;
        uVar7 = uVar7 - 1) {
      puVar4 = param_1;
      func_0x00010c0f3900();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106ae7cc4();
      func_0x000106ae7df8();
      func_0x00010bf06ba0();
      func_0x00010bf39ce0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000106ae7db8();
      if (puVar4 != (undefined *)0x0) {
        puVar4 = puVar5;
        func_0x00010bf39ce0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c075a80();
        func_0x00010bf06ba0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6fa58);
        func_0x000106ae7cc4();
      }
      func_0x00010c296d80(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000106ae7db8();
      puVar6 = (undefined *)0x0;
      if (puVar4 != (undefined *)0x0) {
        puVar6 = puVar5;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ba0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dcf4b8);
        func_0x000106ae7cc4();
      }
      func_0x00010c112680(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000106ae7db8();
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c112680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ba0(puVar3,param_2,&PTR____CFConstantStringClassReference_110e6fa78);
        func_0x000106ae7cc4();
      }
      if (lVar1 < (int)(param_3 - 1)) {
        func_0x00010bf070e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110db2db8);
      }
      func_0x000106ae7d44();
      lVar1 = lVar1 + 1;
    }
  }
  else {
    _objc_retain(puVar3);
  }
  func_0x000106ae7cc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ae6650; end: 106ae6657; -[KSCrashDoctorFunctionCall name] */

undefined8 FUN_106ae6650(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ae6658; end: 106ae6677; -[KSCrashDoctorFunctionCall setName:] */

void FUN_106ae6658(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_106ae7c88();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae6678; end: 106ae667f; -[KSCrashDoctorFunctionCall params] */

undefined8 FUN_106ae6678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ae6680; end: 106ae669f; -[KSCrashDoctorFunctionCall setParams:] */

void FUN_106ae6680(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_106ae7c88();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae66a0; end: 106ae66cb; -[KSCrashDoctorFunctionCall .cxx_destruct] */

void FUN_106ae66a0(long param_1)

{
  func_0x000106ae7d7c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ae66cc; end: 106ae66df; +[KSCrashDoctor doctor] */

void FUN_106ae66cc(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ae66e0; end: 106ae66ef; -[KSCrashDoctor recrashReport:] */

void FUN_106ae66e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_objectForKey__1126159e0,&PTR____CFConstantStringClassReference_110e6f8f8)
  ;
  return;
}



/* Entry: 106ae66f0; end: 106ae66ff; -[KSCrashDoctor systemReport:] */

void FUN_106ae66f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_objectForKey__1126159e0,&PTR____CFConstantStringClassReference_110dd3418)
  ;
  return;
}



/* Entry: 106ae6700; end: 106ae670f; -[KSCrashDoctor crashReport:] */

void FUN_106ae6700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_objectForKey__1126159e0,&PTR____CFConstantStringClassReference_110e6f8b8)
  ;
  return;
}



/* Entry: 106ae6710; end: 106ae671f; -[KSCrashDoctor infoReport:] */

void FUN_106ae6710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_objectForKey__1126159e0,&PTR____CFConstantStringClassReference_110db4078)
  ;
  return;
}



/* Entry: 106ae6720; end: 106ae675f; -[KSCrashDoctor errorReport:] */

void FUN_106ae6720(void)

{
  func_0x00010bf54080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7cb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ae6760; end: 106ae681b; -[KSCrashDoctor cpuFamily:] */

undefined4 FUN_106ae6760(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  func_0x00010c267200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c11f420();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    lVar1 = param_1;
    func_0x00010c11f420(param_1,param_2,&PTR____CFConstantStringClassReference_110e6fab8);
    if ((lVar1 == 0) &&
       (lVar1 = param_1,
       func_0x00010c11f420(param_1,param_2,&PTR____CFConstantStringClassReference_110e6fad8),
       lVar1 == 2)) {
      uVar2 = 2;
    }
    else {
      func_0x00010c11f440(param_1,param_2,&PTR____CFConstantStringClassReference_110dce578,1);
      uVar2 = 0;
      if (param_1 != 0x7fffffffffffffff) {
        uVar2 = 3;
      }
    }
  }
  func_0x000106ae7cb0();
  func_0x000106ae7cc4();
  return uVar2;
}



/* Entry: 106ae681c; end: 106ae687b; -[KSCrashDoctor registerNameForFamily:paramIndex:] */

undefined * FUN_106ae681c(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  undefined **ppuVar1;
  
  if (param_3 == 3) {
    if (3 < param_4) {
      return (undefined *)0x0;
    }
    ppuVar1 = &PTR_PTR_11095f398;
  }
  else if (param_3 == 2) {
    if (3 < param_4) {
      return (undefined *)0x0;
    }
    ppuVar1 = &PTR_PTR_11095f378;
  }
  else {
    if ((param_3 != 1) || (3 < param_4)) {
      return (undefined *)0x0;
    }
    ppuVar1 = &PTR_PTR_11095f358;
  }
  return ppuVar1[param_4];
}



/* Entry: 106ae687c; end: 106ae68bb; -[KSCrashDoctor mainExecutableNameForReport:] */

void FUN_106ae687c(void)

{
  func_0x00010bfede20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7cb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ae68bc; end: 106ae6a03; -[KSCrashDoctor crashedThreadReport:] */

void FUN_106ae68bc(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  
  func_0x000106ae7cd4();
  func_0x00010bf54080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e6fc98;
  uVar2 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e6fcb8;
    func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110e6fcb8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x000106ae7dd8();
    func_0x000106ae7cf0();
    lVar1 = lRam0000000000000000;
    if (uVar3 != 0) {
      do {
        uVar7 = 0;
        do {
          in_ZR = lRam0000000000000000 == lVar1;
          if (!(bool)in_ZR) {
            _objc_enumerationMutation(param_1);
          }
          uVar6 = *(ulong *)(uVar7 * 8);
          uVar4 = uVar6;
          ppuVar5 = &PTR____CFConstantStringClassReference_110e6fcd8;
          func_0x00010c0dff20(uVar6,param_2,&PTR____CFConstantStringClassReference_110e6fcd8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          func_0x000106ae7da4();
          if ((uVar4 & 1) != 0) {
            _objc_retain(uVar6);
            func_0x000106ae7ccc();
            goto LAB_106ae69e4;
          }
          uVar7 = uVar7 + 1;
          in_ZR = uVar7 == uVar3;
        } while (uVar7 < uVar3);
        func_0x000106ae7dd8();
        uVar3 = param_1;
        func_0x000106ae7cf0();
      } while (uVar3 != 0);
    }
    func_0x000106ae7ccc();
    uVar6 = 0;
  }
  else {
    func_0x000106ae7dd0();
    uVar6 = uVar2;
  }
LAB_106ae69e4:
  func_0x000106ae7cb0();
  func_0x000106ae7cc4();
  func_0x000106ae7c98();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010c0dff20(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110dedb98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106ae7cb8();
    uVar6 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 106ae6a04; end: 106ae6a4f; -[KSCrashDoctor backtraceFromThreadReport:] */

void FUN_106ae6a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110dedb98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7cb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ae6a50; end: 106ae6a9b; -[KSCrashDoctor basicRegistersFromThreadReport:] */

void FUN_106ae6a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e6fcf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7cb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ae6a9c; end: 106ae6bf3; -[KSCrashDoctor lastInAppStackEntry:] */

void FUN_106ae6a9c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x000106ae7cd4();
  func_0x000106ae7ce8();
  func_0x00010c0b6960(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf541c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14920(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x000106ae7dd8();
  uVar2 = param_1;
  func_0x000106ae7cf0();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar2 == 0) {
      uVar2 = 0;
      uVar4 = 0;
LAB_106ae6bc8:
      func_0x000106ae7cf8();
      func_0x000106ae7cf8();
      func_0x000106ae7ccc();
      func_0x000106ae7cb0();
      func_0x000106ae7cc4();
      func_0x000106ae7c98();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        uVar5 = uVar2;
        func_0x00010bf541c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf14920(uVar2,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010bf529e0();
        if (uVar5 == 0) {
          uVar4 = 0;
        }
        else {
          func_0x00010c0dfd20(uVar2,param_2,0);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
        }
        func_0x000106ae7cb0();
        func_0x000106ae7cc4();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
      return;
    }
    uVar5 = 0;
    do {
      in_ZR = lRam0000000000000000 == lVar1;
      if (!(bool)in_ZR) {
        _objc_enumerationMutation(param_1);
      }
      uVar4 = *(ulong *)(uVar5 * 8);
      uVar3 = uVar4;
      func_0x00010c0dff20(uVar4,param_2,&PTR____CFConstantStringClassReference_110dce218);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
        uVar2 = uVar4;
        _objc_retain();
        func_0x000106ae7d4c();
        goto LAB_106ae6bc8;
      }
      func_0x000106ae7d4c();
      uVar5 = uVar5 + 1;
      in_ZR = uVar5 == uVar2;
    } while (uVar5 < uVar2);
    func_0x000106ae7dd8();
    uVar2 = param_1;
    func_0x000106ae7cf0();
  } while( true );
}



/* Entry: 106ae6bf4; end: 106ae6c73; -[KSCrashDoctor lastStackEntry:] */

void FUN_106ae6bf4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf541c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14920(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c0dfd20(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000106ae7cb0();
  func_0x000106ae7cc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106ae6c74; end: 106ae6d3f; -[KSCrashDoctor isInvalidAddress:] */

long FUN_106ae6c74(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000106ae7ce8();
  lVar1 = param_3;
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e6ded8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e6df18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    func_0x000106ae7d00();
  }
  else {
    func_0x00010c0dff20(lVar1,param_2,&PTR____CFConstantStringClassReference_110e6fd38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    param_3 = lVar1;
  }
  func_0x000106ae7ccc();
  func_0x000106ae7cb0();
  func_0x000106ae7cc4();
  return param_3;
}



/* Entry: 106ae6d40; end: 106ae6e0b; -[KSCrashDoctor isMathError:] */

long FUN_106ae6d40(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000106ae7ce8();
  lVar1 = param_3;
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e6ded8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e6df18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    func_0x000106ae7d00();
  }
  else {
    func_0x00010c0dff20(lVar1,param_2,&PTR____CFConstantStringClassReference_110e6fd38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    param_3 = lVar1;
  }
  func_0x000106ae7ccc();
  func_0x000106ae7cb0();
  func_0x000106ae7cc4();
  return param_3;
}



/* Entry: 106ae6e0c; end: 106ae7127; -[KSCrashDoctor isMemoryCorruption:] */

undefined * FUN_106ae6e0c(undefined **param_1,undefined8 param_2)

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
  
  func_0x000106ae7cd4();
  ppuStack_208 = param_1;
  func_0x00010bf541c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1f8 = param_1;
  func_0x00010c0dff20();
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
  func_0x00010c0dfe00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = param_1;
  func_0x000106ae7cf0();
  if (ppuVar18 != (undefined **)0x0) {
    unaff_x24 = &PTR____CFConstantStringClassReference_110dad058;
    unaff_x25 = &PTR____CFConstantStringClassReference_110e26278;
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
        func_0x00010c0dff20(ppuVar15,param_2,&PTR____CFConstantStringClassReference_110dad058);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar2;
        func_0x00010c0720c0();
        if ((int)ppuVar3 != 0) {
          func_0x00010c0dff20(ppuVar15,param_2,&PTR____CFConstantStringClassReference_110ddd998);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar15;
          func_0x00010c11f420();
          if (ppuVar3 != (undefined **)0x7fffffffffffffff) {
            ppuVar3 = &PTR____CFConstantStringClassReference_110e6fe18;
            ppuVar4 = ppuVar15;
            func_0x00010c11f420();
            in_ZR = ppuVar4 == (undefined **)0x7fffffffffffffff;
            if (!(bool)in_ZR) goto LAB_106ae70d8;
          }
          ppuVar3 = &PTR____CFConstantStringClassReference_110e6fe38;
          func_0x00010c11f420();
          func_0x000106ae7cc4();
          in_ZR = ppuVar15 == (undefined **)0x7fffffffffffffff;
          unaff_x23 = ppuVar15;
          if (!(bool)in_ZR) goto LAB_106ae70dc;
        }
        func_0x000106ae7ccc();
        ppuVar18 = (undefined **)((long)ppuVar18 + 1);
        in_ZR = ppuVar18 == unaff_x27;
      } while (ppuVar18 < unaff_x27);
      unaff_x27 = param_1;
      func_0x000106ae7cf0(param_1,param_2,&uStack_1b0,auStack_f0);
    } while (unaff_x27 != (undefined **)0x0);
  }
  func_0x000106ae7cf8();
  ppuVar2 = ppuStack_208;
  func_0x00010bf14920(ppuStack_208,param_2,ppuStack_1f8);
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
  func_0x000106ae7cf0();
  param_1 = ppuVar2;
  if (ppuVar18 != (undefined **)0x0) {
    unaff_x23 = &PTR____CFConstantStringClassReference_110dce258;
    unaff_x28 = *plStack_1e0;
    unaff_x25 = &PTR____CFConstantStringClassReference_110e6fe58;
    unaff_x26 = &PTR____CFConstantStringClassReference_110e6fe78;
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
        func_0x00010c0dff20(uVar19,param_2,&PTR____CFConstantStringClassReference_110dce218);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dff20(uVar19,param_2,&PTR____CFConstantStringClassReference_110dce258);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar19;
        ppuVar3 = unaff_x25;
        func_0x00010c0720c0();
        if (((uVar6 & 1) != 0) ||
           (uVar6 = uVar19, ppuVar3 = unaff_x26, func_0x00010c0720c0(), (uVar6 & 1) != 0)) {
LAB_106ae70d0:
          func_0x000106ae7cb0();
LAB_106ae70d8:
          ppuVar15 = unaff_x23;
          func_0x000106ae7cc4();
LAB_106ae70dc:
          puVar16 = (undefined *)0x1;
          goto LAB_106ae70e0;
        }
        ppuVar3 = &PTR____CFConstantStringClassReference_110e6fe98;
        uVar6 = uVar19;
        func_0x00010c0720c0();
        if ((uVar6 & 1) != 0) goto LAB_106ae70d0;
        func_0x00010c0720c0(uVar19,param_2,&PTR____CFConstantStringClassReference_110e6feb8);
        if ((int)uVar19 != 0) {
          ppuVar3 = &PTR____CFConstantStringClassReference_110e6fed8;
          func_0x00010c0720c0();
          if ((uVar5 & 1) != 0) goto LAB_106ae70d0;
        }
        func_0x000106ae7cb0();
        func_0x000106ae7cc4();
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
        in_ZR = unaff_x27 == unaff_x24;
      } while (unaff_x27 < unaff_x24);
      ppuVar3 = &puStack_1f0;
      unaff_x24 = ppuVar2;
      func_0x000106ae7cf0();
    } while (unaff_x24 != (undefined **)0x0);
  }
  puVar16 = (undefined *)0x0;
  ppuVar15 = unaff_x23;
LAB_106ae70e0:
  ppuVar18 = ppuStack_200;
  func_0x000106ae7ccc();
  func_0x000106ae7cf8();
  func_0x000106ae7cb0();
  ppuVar4 = ppuStack_1f8;
  _objc_release();
  func_0x000106ae7c98();
  if ((bool)in_ZR) {
    return puVar16;
  }
  ___stack_chk_fail();
  ppuStack_230 = ppuVar18;
  pcStack_218 = FUN_106ae7128;
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
  func_0x000106ae7cd4();
  func_0x000106ae7ce8();
  puVar16 = PTR_PTR_1126d05f8;
  _objc_alloc_init();
  ppuVar18 = ppuVar4;
  func_0x00010c08a1e0(ppuVar4,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar18;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0(puVar16,param_2,ppuVar2);
  func_0x000106ae7cb0();
  ppuVar2 = ppuVar4;
  func_0x00010bf541c0(ppuVar4,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar4;
  func_0x00010bf53b00(ppuVar4,param_2,ppuVar3);
  func_0x00010bf165c0(ppuVar4,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7e04();
  func_0x00010c126ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7e04();
  func_0x00010c126ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7e04();
  func_0x00010c126ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7e04();
  func_0x00010c126ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7df8();
  func_0x00010bf0a120();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7cb8();
  func_0x000106ae7dc0();
  func_0x000106ae7d4c();
  func_0x000106ae7cf8();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  plStack_330 = (long *)0x0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  func_0x000106ae7dd0();
  ppuVar9 = ppuVar7;
  func_0x000106ae7cf0(ppuVar7,param_2,&uStack_340,auStack_300);
  if (ppuVar9 != (undefined **)0x0) {
    lVar20 = *plStack_330;
    do {
      ppuVar21 = (undefined **)0x0;
      do {
        if (*plStack_330 != lVar20) {
          _objc_enumerationMutation(ppuVar7);
        }
        uVar17 = *(undefined8 *)(lStack_338 + (long)ppuVar21 * 8);
        puVar10 = PTR_PTR_1126d0600;
        _objc_alloc_init();
        ppuVar11 = ppuVar4;
        func_0x00010c0dff20(ppuVar4,param_2,uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c282800();
        func_0x00010c165c20(puVar10,param_2,ppuVar11);
        func_0x000106ae7cb0();
        ppuVar11 = ppuVar15;
        func_0x00010c0dff20(ppuVar15,param_2,uVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (ppuVar11 == (undefined **)0x0) {
          func_0x00010befd580();
          func_0x00010c25d9e0(puVar14,param_2,&PTR____CFConstantStringClassReference_110de9e98);
          _objc_retainAutoreleasedReturnValue();
          func_0x000106ae7df8();
          func_0x00010c220160();
        }
        else {
          ppuVar12 = ppuVar11;
          func_0x00010c0dff20(ppuVar11,param_2,&PTR____CFConstantStringClassReference_110dad058);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21acc0(puVar10,param_2,ppuVar12);
          func_0x000106ae7cc4();
          ppuVar12 = ppuVar11;
          func_0x00010c0dff20(ppuVar11,param_2,&PTR____CFConstantStringClassReference_110e6f9f8);
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar11;
          func_0x00010c0dff20(ppuVar11,param_2,&PTR____CFConstantStringClassReference_110e6fef8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0dff20(ppuVar11,param_2,&PTR____CFConstantStringClassReference_110ddd998);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar10;
          func_0x00010c27dd80();
          iVar1 = (int)puVar14;
          _objc_retainAutoreleasedReturnValue();
          func_0x000106ae7d24();
          func_0x000106ae7da4();
          if (iVar1 == 0) {
            puVar14 = puVar10;
            func_0x00010c27dd80();
            iVar1 = (int)puVar14;
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0720c0();
            func_0x000106ae7d00();
            if (iVar1 == 0) {
              puVar14 = puVar10;
              func_0x00010c27dd80();
              iVar1 = (int)puVar14;
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0720c0();
              func_0x000106ae7d00();
              if (iVar1 == 0) goto LAB_106ae74d4;
              func_0x000106ae7df8();
              func_0x00010c17c6c0();
              uVar17 = 0;
            }
            else {
              func_0x00010c17c6c0(puVar10,param_2,ppuVar12);
              uVar17 = 1;
            }
            func_0x00010c1b1e40(puVar10,param_2,uVar17);
          }
          else {
            func_0x00010c220160(puVar10,param_2,ppuVar11);
          }
LAB_106ae74d4:
          func_0x00010c1e2540(puVar10,param_2,ppuVar13);
          func_0x000106ae7d44();
          func_0x000106ae7cc4();
        }
        func_0x000106ae7cf8();
        func_0x00010befa120(puVar8,param_2,puVar10);
        func_0x000106ae7cb0();
        func_0x000106ae7ccc();
        ppuVar21 = (undefined **)((long)ppuVar21 + 1);
        in_ZR = ppuVar21 == ppuVar9;
      } while (ppuVar21 < ppuVar9);
      ppuVar9 = ppuVar7;
      func_0x000106ae7cf0(ppuVar7,param_2,&uStack_340,auStack_300);
    } while (ppuVar9 != (undefined **)0x0);
  }
  func_0x000106ae7cb0();
  func_0x00010c1d8f80(puVar16);
  func_0x000106ae7ccc();
  func_0x000106ae7cb0();
  _objc_release(ppuVar4);
  _objc_release(ppuVar15);
  _objc_release(ppuVar2);
  _objc_release(ppuVar18);
  _objc_release(ppuVar3);
  func_0x000106ae7c98();
  if ((bool)in_ZR) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x000106ae7ce8();
  puVar16 = puVar8;
  func_0x00010c0d4f60();
  iVar1 = (int)puVar16;
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7d8c();
  if (iVar1 == 0) {
LAB_106ae764c:
    func_0x000106ae7cb0();
LAB_106ae7650:
    puVar16 = puVar8;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    if (((ulong)puVar16 & 1) == 0) {
LAB_106ae76fc:
      func_0x000106ae7cb0();
    }
    else {
      puVar16 = puVar8;
      func_0x00010c0f3900();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106ae7d9c();
      if (puVar16 == (undefined *)0x0) {
        func_0x000106ae7ccc();
        goto LAB_106ae76fc;
      }
      puVar16 = puVar8;
      func_0x00010c0f3900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c112680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x000106ae7d00();
      func_0x000106ae7cf8();
      func_0x000106ae7ccc();
      func_0x000106ae7cb0();
      if (puVar16 != (undefined *)0x0) {
        uVar17 = 1;
        goto LAB_106ae76e4;
      }
    }
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = puVar8;
    func_0x00010c0f3900();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106ae7d9c();
    if (puVar16 == (undefined *)0x0) {
      func_0x000106ae7ccc();
      goto LAB_106ae764c;
    }
    puVar16 = puVar8;
    func_0x00010c0f3900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c112680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x000106ae7d00();
    func_0x000106ae7cf8();
    func_0x000106ae7ccc();
    func_0x000106ae7cb0();
    if (puVar16 == (undefined *)0x0) goto LAB_106ae7650;
    uVar17 = 4;
LAB_106ae76e4:
    func_0x00010bf6e6c0(puVar8,param_2,uVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar8;
  }
  func_0x000106ae7cc4();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return puVar16;
}



/* Entry: 106ae7128; end: 106ae759f; -[KSCrashDoctor lastFunctionCall:] */

void FUN_106ae7128(ulong param_1,undefined8 param_2,undefined8 param_3)

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
  
  func_0x000106ae7cd4();
  func_0x000106ae7ce8();
  puVar14 = PTR_PTR_1126d05f8;
  _objc_alloc_init();
  uVar2 = param_1;
  func_0x00010c08a1e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0(puVar14,param_2,uVar3);
  func_0x000106ae7cb0();
  uVar3 = param_1;
  func_0x00010bf541c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf53b00(param_1,param_2,param_3);
  func_0x00010bf165c0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7e04();
  func_0x00010c126ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7e04();
  func_0x00010c126ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7e04();
  func_0x00010c126ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7e04();
  func_0x00010c126ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7df8();
  func_0x00010bf0a120();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7cb8();
  func_0x000106ae7dc0();
  func_0x000106ae7d4c();
  func_0x000106ae7cf8();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000106ae7dd0();
  uVar7 = uVar5;
  func_0x000106ae7cf0(uVar5,param_2,&uStack_130,auStack_f0);
  if (uVar7 != 0) {
    lVar15 = *plStack_120;
    do {
      uVar16 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(uVar5);
        }
        uVar13 = *(undefined8 *)(lStack_128 + uVar16 * 8);
        puVar8 = PTR_PTR_1126d0600;
        _objc_alloc_init();
        uVar9 = param_1;
        func_0x00010c0dff20(param_1,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c282800();
        func_0x00010c165c20(puVar8,param_2,uVar9);
        func_0x000106ae7cb0();
        uVar9 = uVar4;
        func_0x00010c0dff20(uVar4,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (uVar9 == 0) {
          func_0x00010befd580();
          func_0x00010c25d9e0(puVar12,param_2,&PTR____CFConstantStringClassReference_110de9e98);
          _objc_retainAutoreleasedReturnValue();
          func_0x000106ae7df8();
          func_0x00010c220160();
        }
        else {
          uVar10 = uVar9;
          func_0x00010c0dff20(uVar9,param_2,&PTR____CFConstantStringClassReference_110dad058);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21acc0(puVar8,param_2,uVar10);
          func_0x000106ae7cc4();
          uVar10 = uVar9;
          func_0x00010c0dff20(uVar9,param_2,&PTR____CFConstantStringClassReference_110e6f9f8);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar9;
          func_0x00010c0dff20(uVar9,param_2,&PTR____CFConstantStringClassReference_110e6fef8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0dff20(uVar9,param_2,&PTR____CFConstantStringClassReference_110ddd998);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar8;
          func_0x00010c27dd80();
          iVar1 = (int)puVar12;
          _objc_retainAutoreleasedReturnValue();
          func_0x000106ae7d24();
          func_0x000106ae7da4();
          if (iVar1 == 0) {
            puVar12 = puVar8;
            func_0x00010c27dd80();
            iVar1 = (int)puVar12;
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0720c0();
            func_0x000106ae7d00();
            if (iVar1 == 0) {
              puVar12 = puVar8;
              func_0x00010c27dd80();
              iVar1 = (int)puVar12;
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0720c0();
              func_0x000106ae7d00();
              if (iVar1 == 0) goto LAB_106ae74d4;
              func_0x000106ae7df8();
              func_0x00010c17c6c0();
              uVar13 = 0;
            }
            else {
              func_0x00010c17c6c0(puVar8,param_2,uVar10);
              uVar13 = 1;
            }
            func_0x00010c1b1e40(puVar8,param_2,uVar13);
          }
          else {
            func_0x00010c220160(puVar8,param_2,uVar9);
          }
LAB_106ae74d4:
          func_0x00010c1e2540(puVar8,param_2,uVar11);
          func_0x000106ae7d44();
          func_0x000106ae7cc4();
        }
        func_0x000106ae7cf8();
        func_0x00010befa120(puVar6,param_2,puVar8);
        func_0x000106ae7cb0();
        func_0x000106ae7ccc();
        uVar16 = uVar16 + 1;
        in_ZR = uVar16 == uVar7;
      } while (uVar16 < uVar7);
      uVar7 = uVar5;
      func_0x000106ae7cf0(uVar5,param_2,&uStack_130,auStack_f0);
    } while (uVar7 != 0);
  }
  func_0x000106ae7cb0();
  func_0x00010c1d8f80(puVar14);
  func_0x000106ae7ccc();
  func_0x000106ae7cb0();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  func_0x000106ae7c98();
  if ((bool)in_ZR) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x000106ae7ce8();
  puVar14 = puVar6;
  func_0x00010c0d4f60();
  iVar1 = (int)puVar14;
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7d8c();
  if (iVar1 == 0) {
LAB_106ae764c:
    func_0x000106ae7cb0();
LAB_106ae7650:
    puVar14 = puVar6;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    if (((ulong)puVar14 & 1) == 0) {
LAB_106ae76fc:
      func_0x000106ae7cb0();
    }
    else {
      puVar14 = puVar6;
      func_0x00010c0f3900();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106ae7d9c();
      if (puVar14 == (undefined *)0x0) {
        func_0x000106ae7ccc();
        goto LAB_106ae76fc;
      }
      puVar14 = puVar6;
      func_0x00010c0f3900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c112680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x000106ae7d00();
      func_0x000106ae7cf8();
      func_0x000106ae7ccc();
      func_0x000106ae7cb0();
      if (puVar14 != (undefined *)0x0) {
        uVar13 = 1;
        goto LAB_106ae76e4;
      }
    }
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = puVar6;
    func_0x00010c0f3900();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106ae7d9c();
    if (puVar14 == (undefined *)0x0) {
      func_0x000106ae7ccc();
      goto LAB_106ae764c;
    }
    puVar14 = puVar6;
    func_0x00010c0f3900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c112680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x000106ae7d00();
    func_0x000106ae7cf8();
    func_0x000106ae7ccc();
    func_0x000106ae7cb0();
    if (puVar14 == (undefined *)0x0) goto LAB_106ae7650;
    uVar13 = 4;
LAB_106ae76e4:
    func_0x00010bf6e6c0(puVar6,param_2,uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar6;
  }
  func_0x000106ae7cc4();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 106ae75a0; end: 106ae771f; -[KSCrashDoctor zombieCall:] */

void FUN_106ae75a0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x000106ae7ce8();
  uVar2 = param_3;
  func_0x00010c0d4f60();
  iVar1 = (int)uVar2;
  _objc_retainAutoreleasedReturnValue();
  func_0x000106ae7d8c();
  if (iVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c0f3900();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106ae7d9c();
    if (uVar2 == 0) {
      func_0x000106ae7ccc();
      goto LAB_106ae764c;
    }
    uVar2 = param_3;
    func_0x00010c0f3900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c112680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x000106ae7d00();
    func_0x000106ae7cf8();
    func_0x000106ae7ccc();
    func_0x000106ae7cb0();
    if (uVar2 == 0) goto LAB_106ae7650;
    uVar3 = 4;
LAB_106ae76e4:
    func_0x00010bf6e6c0(param_3,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106ae7704;
  }
LAB_106ae764c:
  func_0x000106ae7cb0();
LAB_106ae7650:
  uVar2 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
LAB_106ae76fc:
    func_0x000106ae7cb0();
  }
  else {
    uVar2 = param_3;
    func_0x00010c0f3900();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106ae7d9c();
    if (uVar2 == 0) {
      func_0x000106ae7ccc();
      goto LAB_106ae76fc;
    }
    uVar2 = param_3;
    func_0x00010c0f3900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c112680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x000106ae7d00();
    func_0x000106ae7cf8();
    func_0x000106ae7ccc();
    func_0x000106ae7cb0();
    if (uVar2 != 0) {
      uVar3 = 1;
      goto LAB_106ae76e4;
    }
  }
  param_3 = 0;
LAB_106ae7704:
  func_0x000106ae7cc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106ae7720; end: 106ae777f; -[KSCrashDoctor isStackOverflow:] */

undefined8 FUN_106ae7720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e6ed38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x000106ae7cb0();
  func_0x000106ae7cc4();
  return param_3;
}



/* Entry: 106ae7780; end: 106ae77df; -[KSCrashDoctor isDeadlock:] */

undefined ** FUN_106ae7780(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  func_0x00010bf98e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6ff98;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e6ff98,param_2,param_1);
  func_0x000106ae7cb0();
  func_0x000106ae7cc4();
  return ppuVar1;
}



/* Entry: 106ae77e0; end: 106ae786b; -[KSCrashDoctor appendOriginatingCall:callName:] */

void FUN_106ae77e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  func_0x000106ae7ce8();
  func_0x000106ae7dd0();
  if ((param_4 == 0) ||
     (func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110e6ffb8),
     (param_4 & 1) != 0)) {
    _objc_retain(param_3);
  }
  else {
    func_0x00010c25cde0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6ffd8);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000106ae7cb0();
  func_0x000106ae7cc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106ae786c; end: 106ae7c87; -[KSCrashDoctor diagnoseCrash:] */

void FUN_106ae786c(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar1 = param_1;
  func_0x000106ae7ce8();
  func_0x000106ae7d60();
  func_0x00010c088f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x000106ae7ccc();
  func_0x000106ae7d60();
  func_0x00010bf541c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000106ae7d60();
  func_0x00010bf98e40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x000106ae7d60();
  func_0x00010c070380();
  if ((int)ppuVar4 != 0) {
    func_0x000106ae7d54();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106ae7a58;
  }
  ppuVar4 = param_1;
  func_0x00010c07f6e0(param_1,param_2,ppuVar2);
  if ((int)ppuVar4 != 0) {
    func_0x000106ae7d54();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106ae7a58;
  }
  ppuVar2 = ppuVar3;
  func_0x00010c0dff20(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110dad058);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if ((int)ppuVar2 != 0) {
    ppuVar2 = ppuVar3;
    func_0x00010c0dff20(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110e6def8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010c0dff20(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110daf558);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
    }
    func_0x00010c0dff20(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110daf558);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106ae7d44();
    func_0x000106ae7d54();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ea0(param_1,param_2,ppuVar3,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106ae7d44();
    goto LAB_106ae7a30;
  }
  func_0x000106ae7d60();
  func_0x00010c077aa0();
  if (((ulong)ppuVar2 & 1) == 0) {
    ppuVar2 = param_1;
    func_0x00010c077780(param_1,param_2,ppuVar3);
    if ((int)ppuVar2 == 0) {
      func_0x000106ae7d60();
      func_0x00010c088d80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_1;
      func_0x00010c2bf080(param_1,param_2,ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar2 = param_1;
        func_0x00010c075c80(param_1,param_2,ppuVar3);
        if ((int)ppuVar2 == 0) {
          param_1 = (undefined **)0x0;
        }
        else {
          func_0x00010c0dff20(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110e700b8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c282800();
          ppuVar2 = ppuVar3;
          func_0x000106ae7d44();
          if (ppuVar3 != (undefined **)0x0) {
            func_0x000106ae7d54();
            func_0x00010c25d9e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x000106ae7de4();
            func_0x00010bf06ea0();
            _objc_retainAutoreleasedReturnValue();
            param_1 = ppuVar2;
            goto LAB_106ae7a30;
          }
          func_0x00010bf06ea0(param_1,param_2,&PTR____CFConstantStringClassReference_110e700d8,
                              ppuVar1);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x000106ae7d54();
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000106ae7de4();
        func_0x00010bf06ea0();
        _objc_retainAutoreleasedReturnValue();
        param_1 = ppuVar4;
LAB_106ae7a30:
        func_0x000106ae7dc0();
      }
      func_0x000106ae7d4c();
    }
    else {
      func_0x000106ae7d54();
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ea0(param_1,param_2,ppuVar2,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x000106ae7da4();
  }
  else {
    param_1 = &PTR____CFConstantStringClassReference_110e70058;
  }
  func_0x000106ae7d00();
  ppuVar4 = param_1;
LAB_106ae7a58:
  func_0x000106ae7cf8();
  func_0x000106ae7ccc();
  func_0x000106ae7cb0();
  func_0x000106ae7cc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106ae7c88; end: 106ae7e1b;  */

void FUN_106ae7c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 106ae7e1c; end: 106ae807f;  */

undefined1 * FUN_106ae7e1c(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  int iVar3;
  long lVar4;
  undefined *puVar5;
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
  
  func_0x000106ae9e74();
  lVar4 = 0x1136c4ff0;
  uStack_48 = extraout_x8;
  _strncpy();
  _strlen();
  *(undefined4 *)(lVar4 + 0x1136c4feb) = 0x646c6f2e;
  *(undefined1 *)(lVar4 + 0x1136c4fef) = 0;
  puVar5 = param_2;
  _rename(param_2,0x1136c4ff0);
  if ((int)puVar5 < 0) {
    ___error();
    func_0x000106ae9fbc();
    func_0x000106ae9f10();
    func_0x000106aee914(extraout_x8_00);
  }
  puVar6 = auStack_540;
  puVar7 = auStack_448;
  FUN_106aeca50(puVar6,param_2,puVar7,0x400);
  if ((int)puVar6 != 0) {
    func_0x000106ae5ea4();
    func_0x000106aea050();
    func_0x000106aea03c();
    func_0x000106aea028();
    func_0x000106aea014();
    func_0x000106aea000();
    func_0x000106ae9fec();
    func_0x000106ae9fd8();
    func_0x000106ae9fc4();
    ppcStack_548 = &pcStack_528;
    uStack_550 = 0x106ae97d4;
    pcStack_560 = extraout_x8_01;
    func_0x000106ae9f70();
    pcStack_528 = FUN_106ae8080;
    uStack_44c = 1;
    puStack_520 = auStack_540;
    func_0x0001001df65c(&pcStack_528,"report");
    iVar3 = 0x136c4ff0;
    FUN_106aed1ac(&pcStack_528,&DAT_10f3b1564,0x1136c4ff0,1);
    func_0x000106ae9f3c();
    _remove();
    if (iVar3 < 0) {
      ___error();
      func_0x000106ae9fbc();
      func_0x000106ae9f10();
      func_0x000106aee914(extraout_x8_02);
    }
    FUN_106ae80b0(auStack_5d0,&UNK_10f3b1d33,*unaff_x19,unaff_x19[0x34],param_3);
    func_0x000106ae9f3c();
    (*pcStack_560)(auStack_5d0,&DAT_10f3b1554);
    func_0x000106ae818c(auStack_5d0);
    func_0x000106ae9f3c();
    FUN_106aef248((undefined4 *)unaff_x19[3],*(undefined4 *)unaff_x19[3]);
    param_2 = &DAT_10f3b18fb;
    FUN_106ae857c(auStack_5d0,&DAT_10f3b18fb);
    func_0x000106ae9f3c();
    func_0x000106ae9fb0();
    func_0x000106ae9fb0();
    func_0x0001001e30d4(ppcStack_548);
    puVar6 = auStack_540;
    FUN_106aecacc(puVar6);
    do {
      iVar3 = iRam000000011381b400 + -1;
      in_ZR = iVar3 == 0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11381b400,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        iRam000000011381b400 = iVar3;
      }
    } while (cVar1 != '\0');
    puVar7 = unaff_x19;
    if (iVar3 < 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x11381b400,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          iRam000000011381b400 = iRam000000011381b400 + 1;
        }
      } while (cVar1 != '\0');
    }
  }
  func_0x000106ae9e2c(uStack_48);
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  FUN_106aecb4c(puVar7,puVar6,param_2);
  uVar8 = 0;
  if ((int)puVar7 == 0) {
    uVar8 = 3;
  }
  return (undefined1 *)(ulong)uVar8;
}



/* Entry: 106ae8080; end: 106ae80af;  */

undefined4 FUN_106ae8080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  FUN_106aecb4c(param_3,param_1,param_2);
  uVar1 = 0;
  if ((int)param_3 == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 106ae80b0; end: 106ae857b;  */

void FUN_106ae80b0(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  (**(code **)(param_1 + 0x70))(param_1,"report");
  func_0x000106ae9ed4(*(undefined8 *)(param_1 + 0x20));
  func_0x000106ae9f84(*(undefined8 *)(param_1 + 0x20));
  func_0x000106ae9ed4(*(undefined8 *)(param_1 + 0x20));
  func_0x000106ae9ec8(*(undefined8 *)(param_1 + 0x20));
  pcVar2 = *(code **)(param_1 + 0x10);
  uVar1 = 0;
  _time(0);
  (*pcVar2)(param_1,"timestamp",uVar1);
  func_0x000106ae9e58();
  func_0x000106ae9e68();
  func_0x000106ae9f90(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000106ae8188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x80))(param_1);
  return;
}



/* Entry: 106ae857c; end: 106ae91cb;  */

void FUN_106ae857c(undefined8 param_1,undefined8 param_2,long param_3,uint *****param_4,
                  undefined8 param_5,int param_6,uint ****param_7)

{
  uint ****ppppuVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint *****pppppuVar11;
  uint *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  char *pcVar15;
  uint *****pppppuVar16;
  undefined1 *puVar17;
  uint *puVar18;
  byte bVar19;
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
  uint uVar20;
  uint ****ppppuVar21;
  uint *puVar22;
  long lVar23;
  uint *****pppppuVar24;
  uint ****ppppuVar25;
  undefined8 *puVar26;
  undefined **ppuVar27;
  uint ****unaff_x25;
  long lVar28;
  long lVar29;
  char *pcVar30;
  uint ****unaff_x28;
  long alStack_1090 [2];
  undefined1 auStack_107c [100];
  undefined8 uStack_1018;
  uint ****ppppuStack_1010;
  undefined8 *puStack_1008;
  uint ****ppppuStack_1000;
  uint *puStack_ff8;
  uint ****ppppuStack_ff0;
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
  uint auStack_f38 [6];
  code *pcStack_f20;
  uint *puStack_f18;
  undefined1 uStack_e44;
  undefined1 auStack_e40 [1024];
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  long lStack_9f8;
  long lStack_9f0;
  undefined8 uStack_568;
  uint ***pppuStack_550;
  char *pcStack_548;
  uint ***pppuStack_540;
  uint ***pppuStack_538;
  undefined **ppuStack_530;
  undefined8 *puStack_528;
  uint ****ppppuStack_520;
  uint ***pppuStack_518;
  uint ****ppppuStack_510;
  undefined1 auStack_4d0 [44];
  byte bStack_4a4;
  code *pcStack_498;
  uint ****ppppuStack_168;
  uint ***apppuStack_160 [30];
  undefined8 uStack_70;
  
  lVar28 = param_3;
  pppppuVar16 = param_4;
  func_0x000106ae9e74();
  bVar2 = *(byte *)(pppppuVar16 + 0x33);
  pppppuVar24 = (uint *****)(ulong)bVar2;
  puVar26 = (undefined8 *)(ulong)*(uint *)pppppuVar16;
  uStack_70 = extraout_x8;
  if (*(uint *)pppppuVar16 == **(uint **)(lVar28 + 0x18)) {
    _memcpy(auStack_4d0,*(undefined8 *)(param_3 + 0x48),0x368);
  }
  else {
    func_0x000106af0a04(auStack_4d0,0x96,param_4);
  }
  (*(code *)unaff_x19[0xe])();
  func_0x000106ae9ef8(unaff_x19[0xe]);
  func_0x000106ae9ef8(unaff_x19[0xf]);
  pcVar30 = "instruction_addr";
  while( true ) {
    iVar7 = (int)auStack_4d0;
    (*pcStack_498)();
    if (iVar7 == 0) break;
    (*(code *)unaff_x19[0xe])();
    (*(code *)unaff_x19[3])();
    func_0x000106ae9e40();
  }
  func_0x000106ae9e40();
  (*(code *)unaff_x19[2])();
  func_0x000106ae9e40();
  if (*(char *)((long)param_4 + 0x199) == '\x01') {
    bVar19 = *(byte *)((long)param_4 + 0x19b);
  }
  else {
    bVar19 = 1;
  }
  ppuVar27 = &PTR_DAT_11095fab8;
  if (((int)param_7 != 0) && ((bVar19 & 1) != 0)) {
    func_0x000106ae9ef8(unaff_x19[0xe]);
    func_0x000106ae9ef8(unaff_x19[0xe]);
    for (lVar28 = 0; lVar28 != 0x23; lVar28 = lVar28 + 1) {
      pcVar30 = (&PTR_DAT_11095fab8)[lVar28];
      unaff_x28 = (uint ****)unaff_x19[3];
      FUN_106aebadc(param_4,lVar28);
      (*(code *)unaff_x28)();
    }
    func_0x000106ae9e40();
    param_7 = (uint ****)0x23;
    if (((*(char *)((long)param_4 + 0x199) != '\x01') ||
        (*(char *)((long)param_4 + 0x19b) == '\x01')) && (*(char *)(param_4 + 0x33) == '\x01')) {
      func_0x000106ae9ef8(unaff_x19[0xe]);
      pcVar30 = "r%d";
      for (param_7 = (uint ****)0x0; (int)param_7 != 3;
          param_7 = (uint ****)(ulong)((int)param_7 + 1)) {
        unaff_x28 = param_7;
        func_0x000106aebb6c();
        if (unaff_x28 == (uint ****)0x0) {
          unaff_x28 = apppuStack_160;
          _snprintf(apppuStack_160,0x1e,&UNK_10f3b2028);
        }
        unaff_x25 = (uint ****)unaff_x19[3];
        func_0x000106aebbcc(param_4,param_7);
        (*(code *)unaff_x25)();
      }
      func_0x000106ae9e40();
    }
    func_0x000106ae9e40();
  }
  func_0x000106ae9ed4(unaff_x19[2]);
  if ((*(int *)(param_3 + 0x30) == 0x20) && (*(char *)(param_3 + 0x16) == '\x01')) {
    FUN_106af1088(*(undefined8 *)(param_3 + 0x20),puVar26);
    func_0x000106ae9fa8(unaff_x19[1]);
    (*(code *)*unaff_x19)();
  }
  puVar10 = puVar26;
  func_0x000106ae5ed0();
  if (puVar10 != (undefined8 *)0x0) {
    func_0x000106ae9f50(unaff_x19[4]);
    func_0x000106ae9ed4();
  }
  puVar10 = puVar26;
  func_0x000106ae5f1c();
  if (puVar10 != (undefined8 *)0x0) {
    func_0x000106ae9ed4(unaff_x19[4]);
  }
  puVar10 = unaff_x19;
  (*(code *)*unaff_x19)();
  ppppuVar21 = (uint ****)*unaff_x19;
  func_0x0001001d32d8();
  uVar6 = puVar10 == puVar26;
  pppppuVar16 = (uint *****)(ulong)(byte)uVar6;
  pcVar15 = &UNK_10f3b2019;
  (*(code *)ppppuVar21)();
  if (bVar2 != 0) {
    ppppuVar25 = param_4[0x55];
    pppppuVar24 = (uint *****)0x0;
    if (ppppuVar25 != (uint ****)0x0) {
      puVar26 = (undefined8 *)(ulong)bStack_4a4;
      ppppuVar1 = ppppuVar25 + 0x14;
      unaff_x25 = ppppuVar25 + -10;
      uVar6 = unaff_x25 == ppppuVar1;
      ppppuVar21 = unaff_x25;
      if (ppppuVar1 > unaff_x25 || (bool)uVar6) {
        ppppuVar21 = ppppuVar1;
      }
      if (ppppuVar1 <= unaff_x25) {
        unaff_x25 = ppppuVar1;
      }
      func_0x000106ae9ef8(unaff_x19[0xe]);
      func_0x000106ae9ed4(unaff_x19[4]);
      (*(code *)unaff_x19[3])();
      func_0x000106ae9e68(unaff_x19[3]);
      func_0x000106ae9ec8(unaff_x19[3]);
      (*(code *)*unaff_x19)();
      pppppuVar24 = (uint *****)(ulong)(uint)((int)ppppuVar21 - (int)unaff_x25);
      ppppuVar25 = unaff_x25;
      FUN_106aef4bc(unaff_x25,apppuStack_160,pppppuVar24);
      if ((int)ppppuVar25 == 0) {
        pcVar15 = "error";
        pppppuVar16 = (uint *****)&UNK_10f3b205d;
        func_0x000106ae9ed4(unaff_x19[4]);
      }
      else {
        pcVar15 = "contents";
        pppppuVar16 = (uint *****)apppuStack_160;
        (*(code *)unaff_x19[8])();
      }
      func_0x000106ae9e40();
    }
    if (param_6 != 0) {
      pcVar15 = &DAT_10f3b1966;
      func_0x000106ae9ef8(unaff_x19[0xe]);
      for (lVar28 = 0; lVar28 != 0x23; lVar28 = lVar28 + 1) {
        pppppuVar24 = (uint *****)(&PTR_DAT_11095fab8)[lVar28];
        pppppuVar16 = param_4;
        FUN_106aebadc(param_4,lVar28);
        pcVar15 = (char *)pppppuVar24;
        FUN_106ae9da0();
      }
      ppppuVar25 = param_4[0x55];
      ppppuVar21 = (uint ****)0x23;
      uVar6 = true;
      if (ppppuVar25 != (uint ****)0x0) {
        pppppuVar11 = (uint *****)(ppppuVar25 + 0x14);
        pppppuVar24 = (uint *****)(ppppuVar25 + -10);
        param_4 = pppppuVar24;
        if (pppppuVar11 <= pppppuVar24) {
          param_4 = pppppuVar11;
        }
        if (pppppuVar24 <= pppppuVar11) {
          pppppuVar24 = pppppuVar11;
        }
        ppppuVar21 = (uint ****)&UNK_10f3b207b;
        for (; uVar6 = param_4 == pppppuVar24, param_4 < pppppuVar24; param_4 = param_4 + 1) {
          pcVar15 = (char *)&ppppuStack_168;
          pppppuVar16 = (uint *****)0x8;
          pppppuVar11 = param_4;
          FUN_106aef4bc();
          if ((int)pppppuVar11 != 0) {
            ___sprintf_chk(apppuStack_160,0,0x28,&UNK_10f3b207b);
            pcVar15 = (char *)apppuStack_160;
            pppppuVar16 = (uint *****)ppppuStack_168;
            FUN_106ae9da0();
          }
        }
      }
      func_0x000106ae9e40();
    }
  }
  func_0x000106ae9e40();
  func_0x000106ae9e2c(uStack_70);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    ppuStack_530 = &PTR_DAT_11095fab8;
    pppuStack_550 = (uint ***)unaff_x28;
    pcStack_548 = pcVar30;
    pppuStack_540 = (uint ***)param_7;
    pppuStack_538 = (uint ***)unaff_x25;
    puStack_528 = puVar26;
    ppppuStack_520 = (uint ****)pppppuVar24;
    pppuStack_518 = (uint ***)ppppuVar21;
    ppppuStack_510 = (uint ****)param_4;
    func_0x000106ae9e74();
    puVar22 = auStack_f38;
    puVar12 = auStack_f38;
    puVar17 = auStack_e40;
    puVar18 = (uint *)0x400;
    uStack_568 = extraout_x8_00;
    FUN_106aeca50();
    if ((int)puVar12 != 0) {
      func_0x000106ae5ea4();
      func_0x000106aea050();
      uStack_fc8 = extraout_x8_01;
      uStack_fc0 = extraout_x9;
      func_0x000106aea03c();
      uStack_fb8 = extraout_x8_02;
      pcStack_fb0 = extraout_x9_00;
      func_0x000106aea028();
      pcStack_fa8 = extraout_x8_03;
      func_0x000106aea014();
      func_0x000106aea000();
      func_0x000106ae9fec();
      func_0x000106ae9fd8();
      pcStack_f68 = extraout_x8_04;
      func_0x000106ae9fc4();
      ppcStack_f40 = &pcStack_f20;
      uStack_f48 = 0x106ae97d4;
      pcStack_f58 = extraout_x8_05;
      uStack_f50 = extraout_x9_01;
      func_0x000106ae9f70();
      pcStack_f20 = FUN_106ae8080;
      uStack_e44 = 1;
      puStack_f18 = puVar22;
      func_0x0001001df65c(&pcStack_f20,"report");
      puVar18 = (uint *)unaff_x19[0x34];
      puVar26 = &uStack_fc8;
      FUN_106ae80b0(puVar26,"standard",*unaff_x19,puVar18,pppppuVar16);
      uVar8 = (uint)puVar26;
      func_0x000106ae9f08();
      __dyld_image_count();
      func_0x000106ae9f00(uStack_f50);
      for (uVar20 = 0; (uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) != uVar20; uVar20 = uVar20 + 1)
      {
        lStack_9f0 = 0;
        uStack_a08 = 0;
        uStack_a10 = 0;
        lStack_9f8 = 0;
        uStack_a00 = 0;
        uStack_a28 = 0;
        uStack_a30 = 0;
        uStack_a18 = 0;
        uStack_a20 = 0;
        uStack_a38 = 0;
        uStack_a40 = 0;
        uVar9 = uVar20;
        FUN_106aec428(uVar20,&uStack_a40);
        if (uVar9 != 0) {
          (*pcStack_f58)(&uStack_fc8,0);
          (*pcStack_fb0)(&uStack_fc8,"image_addr",uStack_a40);
          (*pcStack_fb0)(&uStack_fc8,"image_size",uStack_a30);
          (*pcStack_fa8)(&uStack_fc8,&DAT_10f68f148,uStack_a28);
          (*pcStack_f68)(&uStack_fc8,"uuid",uStack_a20);
          (*pcStack_fb0)(&uStack_fc8,"major_version",uStack_a10);
          (*pcStack_fb0)(&uStack_fc8,"minor_version",uStack_a08);
          (*pcStack_fb0)(&uStack_fc8,"revision_version",uStack_a00);
          if (lStack_9f8 != 0) {
            (*pcStack_fa8)(&uStack_fc8,"crash_info_message");
          }
          if (lStack_9f0 != 0) {
            (*pcStack_fa8)(&uStack_fc8,"crash_info_message2");
          }
          func_0x000106ae9e4c();
        }
      }
      func_0x000106ae9e4c();
      func_0x000106ae9f08();
      func_0x000106ae9f00(pcStack_f58);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9f7c(uStack_fc8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(uStack_fb8);
      func_0x000106ae9ec0(uStack_fb8);
      func_0x000106ae9ec0(uStack_fb8);
      func_0x000106ae9ec0(uStack_fb8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(uStack_fb8);
      func_0x000106ae9ec0(uStack_fb8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9ec0(pcStack_fa8);
      func_0x000106ae9f00(pcStack_f58);
      func_0x000106ae9ec0(pcStack_fb0);
      func_0x000106ae9ec0(pcStack_fb0);
      func_0x000106ae9ec0(pcStack_fb0);
      func_0x000106ae9e4c();
      func_0x000106ae9f00(pcStack_f58);
      func_0x000106ae9f7c(uStack_fc8);
      func_0x000106ae9f7c(uStack_fc8);
      func_0x000106ae9ec0(uStack_fb8);
      func_0x000106ae9ec0(uStack_fb8);
      func_0x000106ae9f24(uStack_fc0,unaff_x19[0x18]);
      func_0x000106ae9f24(uStack_fc0,unaff_x19[0x19]);
      func_0x000106ae9ec0(uStack_fb8);
      func_0x000106ae9f24(uStack_fc0,unaff_x19[0x1b]);
      func_0x000106ae9f24(uStack_fc0,unaff_x19[0x1c]);
      func_0x000106ae9e4c();
      func_0x000106ae9e4c();
      func_0x000106ae9f08();
      func_0x000106ae9f00(pcStack_f58);
      func_0x000106ae818c(&uStack_fc8);
      func_0x000106ae9f08();
      puVar22 = (uint *)unaff_x19[3];
      uVar20 = *puVar22;
      puVar26 = (undefined8 *)(ulong)uVar20;
      uVar8 = puVar22[0x65];
      func_0x000106ae9f00(uStack_f50);
      ppuVar27 = (undefined **)(ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
      for (pppppuVar24 = (uint *****)0x0; (uint *****)ppuVar27 != pppppuVar24;
          pppppuVar24 = (uint *****)((long)pppppuVar24 + 1)) {
        puVar12 = puVar22;
        if (puVar22[(long)((long)pppppuVar24 + 1)] == uVar20) {
LAB_106ae90c4:
          FUN_106ae857c(&uStack_fc8,0);
          puVar18 = puVar12;
        }
        else if ((*(int *)(unaff_x19 + 6) != 0x20) || (*(char *)((long)unaff_x19 + 0x16) == '\x01'))
        {
          FUN_106aeeb9c(puVar22[(long)((long)pppppuVar24 + 1)],&uStack_a40,0);
          puVar12 = (uint *)&uStack_a40;
          goto LAB_106ae90c4;
        }
      }
      func_0x000106ae9e4c();
      func_0x000106ae9f08();
      func_0x000106ae9e4c();
      if (lRam000000011381b448 == 0) {
        func_0x000106ae9f00(pcStack_f58);
      }
      else {
        puVar18 = (uint *)0x0;
        FUN_106ae91cc(&uStack_fc8,"user");
        func_0x000106ae9f08();
      }
      pppppuVar16 = (uint *****)0x11381b000;
      if ((pcRam000000011381b450 != (code *)0x0) &&
         (func_0x000106ae9f08(), (*(byte *)(unaff_x19 + 2) & 1) == 0)) {
        (*pcRam000000011381b450)(&uStack_fc8);
      }
      func_0x000106ae9e4c();
      func_0x000106ae9f08();
      pcVar15 = "debug";
      func_0x000106ae9f00(pcStack_f58);
      puVar17 = (undefined1 *)unaff_x19[0x3c];
      if (puVar17 != (undefined1 *)0x0) {
        pcVar15 = &UNK_10f3b2284;
        FUN_106ae9500(&uStack_fc8);
      }
      func_0x000106ae9e4c();
      func_0x000106ae9e4c();
      func_0x0001001e30d4(ppcStack_f40);
      puVar12 = auStack_f38;
      FUN_106aecacc();
      do {
        iVar7 = iRam000000011381b400 + -1;
        uVar6 = iVar7 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(0x11381b400,0x10);
        if (bVar4) {
          cVar3 = ExclusiveMonitorsStatus();
          iRam000000011381b400 = iVar7;
        }
      } while (cVar3 != '\0');
      if (iVar7 < 0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(0x11381b400,0x10);
          if (bVar4) {
            cVar3 = ExclusiveMonitorsStatus();
            iRam000000011381b400 = iRam000000011381b400 + 1;
          }
        } while (cVar3 != '\0');
      }
    }
    func_0x000106ae9e2c(uStack_568);
    if (!(bool)uVar6) {
      ___stack_chk_fail();
      puVar13 = puVar17;
      ppppuStack_1010 = (uint ****)ppuVar27;
      puStack_1008 = puVar26;
      ppppuStack_1000 = (uint ****)pppppuVar24;
      puStack_ff8 = puVar22;
      ppppuStack_ff0 = (uint ****)pppppuVar16;
      func_0x000106ae9e74();
      lVar28 = *(long *)(puVar12 + 0x22);
      uStack_1018 = extraout_x8_06;
      _strlen(puVar13);
      pppppuVar24 = (uint *****)pcVar15;
      FUN_106aed560(lVar28,pcVar15,puVar17,puVar13,puVar18);
      if ((int)lVar28 != 0) {
        FUN_106aecfa4();
        alStack_1090[0] = lVar28;
        _snprintf(auStack_107c,100,&UNK_10f3b2264);
        func_0x0001001df65c(unaff_x19[0x11],pcVar15);
        func_0x000106ae9f68(unaff_x19[0x11],"error",auStack_107c);
        pppppuVar24 = (uint *****)&UNK_10f3b227a;
        func_0x000106ae9f68(unaff_x19[0x11],&UNK_10f3b227a,puVar17);
        lVar28 = unaff_x19[0x11];
        func_0x0001001e3108();
      }
      func_0x000106ae9e2c(uStack_1018);
      if ((bool)uVar6) {
        return;
      }
      ___stack_chk_fail();
      uVar20 = uRam000000011381b440;
      lVar5 = lRam000000011381b438;
      lVar23 = 0;
      uVar8 = 0;
      if ((lVar28 != 0) && (0 < (int)(uint)pppppuVar24)) {
        lVar23 = ((ulong)pppppuVar24 & 0xffffffff) << 3;
        _malloc();
        if (lVar23 == 0) {
          func_0x000106ae9edc();
          FUN_106aee980();
          FUN_106aee7e4(&UNK_10f3b3328);
          FUN_106aee81c(&UNK_10f3b1d8a,alStack_1090);
          func_0x000106aeeb40();
          return;
        }
        for (lVar29 = 0; uVar8 = (uint)pppppuVar24,
            ((ulong)pppppuVar24 & 0xffffffff) * 8 - lVar29 != 0; lVar29 = lVar29 + 8) {
          uVar14 = *(undefined8 *)(lVar28 + lVar29);
          _strdup();
          *(undefined8 *)(lVar23 + lVar29) = uVar14;
        }
      }
      uRam000000011381b440 = uVar8;
      lRam000000011381b438 = lVar23;
      if (lVar5 != 0) {
        for (lVar28 = 0; (ulong)(uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU)) << 3 != lVar28;
            lVar28 = lVar28 + 8) {
          _free(*(undefined8 *)(lVar5 + lVar28));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_11034c310)(lVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 106ae91cc; end: 106ae929f;  */

void FUN_106ae91cc(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined1 in_ZR;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  long unaff_x19;
  long lVar6;
  long lVar7;
  long lVar8;
  long alStack_c0 [2];
  undefined1 auStack_ac [100];
  undefined8 uStack_48;
  
  uVar4 = param_3;
  func_0x000106ae9e74();
  lVar7 = *(long *)(param_1 + 0x88);
  uStack_48 = extraout_x8;
  _strlen(uVar4);
  puVar5 = param_2;
  FUN_106aed560(lVar7,param_2,param_3,uVar4,param_4);
  if ((int)lVar7 != 0) {
    FUN_106aecfa4();
    alStack_c0[0] = lVar7;
    _snprintf(auStack_ac,100,&UNK_10f3b2264);
    func_0x0001001df65c(*(undefined8 *)(unaff_x19 + 0x88),param_2);
    func_0x000106ae9f68(*(undefined8 *)(unaff_x19 + 0x88),"error",auStack_ac);
    puVar5 = &UNK_10f3b227a;
    func_0x000106ae9f68(*(undefined8 *)(unaff_x19 + 0x88),&UNK_10f3b227a,param_3);
    lVar7 = *(long *)(unaff_x19 + 0x88);
    func_0x0001001e3108();
  }
  func_0x000106ae9e2c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = uRam000000011381b440;
  lVar1 = lRam000000011381b438;
  lVar6 = 0;
  iVar3 = 0;
  if ((lVar7 != 0) && (0 < (int)puVar5)) {
    lVar6 = ((ulong)puVar5 & 0xffffffff) << 3;
    _malloc();
    if (lVar6 == 0) {
      func_0x000106ae9edc();
      FUN_106aee980();
      FUN_106aee7e4(&UNK_10f3b3328);
      FUN_106aee81c(&UNK_10f3b1d8a,alStack_c0);
      func_0x000106aeeb40();
      return;
    }
    for (lVar8 = 0; iVar3 = (int)puVar5, ((ulong)puVar5 & 0xffffffff) * 8 - lVar8 != 0;
        lVar8 = lVar8 + 8) {
      uVar4 = *(undefined8 *)(lVar7 + lVar8);
      _strdup();
      *(undefined8 *)(lVar6 + lVar8) = uVar4;
    }
  }
  uRam000000011381b440 = iVar3;
  lRam000000011381b438 = lVar6;
  if (lVar1 == 0) {
    return;
  }
  for (lVar7 = 0; (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 3 != lVar7;
      lVar7 = lVar7 + 8) {
    _free(*(undefined8 *)(lVar1 + lVar7));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 106ae92a0; end: 106ae93af;  */

void FUN_106ae92a0(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = uRam000000011381b440;
  lVar1 = lRam000000011381b438;
  lVar5 = 0;
  uVar3 = 0;
  if ((param_1 != 0) && (0 < (int)param_2)) {
    lVar5 = (ulong)param_2 << 3;
    _malloc();
    if (lVar5 == 0) {
      func_0x000106ae9edc();
      FUN_106aee980();
      FUN_106aee7e4(&UNK_10f3b3328);
      FUN_106aee81c(&UNK_10f3b1d8a,&stack0x00000000);
      func_0x000106aeeb40();
      return;
    }
    for (lVar6 = 0; uVar3 = param_2, (ulong)param_2 * 8 - lVar6 != 0; lVar6 = lVar6 + 8) {
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      _strdup();
      *(undefined8 *)(lVar5 + lVar6) = uVar4;
    }
  }
  uRam000000011381b440 = uVar3;
  lRam000000011381b438 = lVar5;
  if (lVar1 == 0) {
    return;
  }
  for (lVar6 = 0; (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 3 != lVar6;
      lVar6 = lVar6 + 8) {
    _free(*(undefined8 *)(lVar1 + lVar6));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 106ae93b0; end: 106ae93db;  */

void FUN_106ae93b0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x88);
  puVar1 = puVar3;
  func_0x0001001df548();
  if ((int)puVar1 == 0) {
    if (param_3 == 0) {
      puVar2 = &UNK_10f3b3198;
      uVar4 = 5;
    }
    else {
      puVar2 = &UNK_10f3b3193;
      uVar4 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(puVar2,uVar4,puVar3[1]);
    return;
  }
  return;
}



/* Entry: 106ae93dc; end: 106ae94ff;  */

int * FUN_106ae93dc(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined1 in_ZR;
  int *piVar2;
  int *piVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 **ppuVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 extraout_x8;
  int *extraout_x8_00;
  undefined8 extraout_x8_01;
  int *unaff_x19;
  long lStack_1228;
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
  int aiStack_ab0 [6];
  undefined1 auStack_a98 [1024];
  undefined1 auStack_698 [1024];
  undefined8 uStack_298;
  undefined8 uStack_290;
  int *piStack_288;
  long lStack_280;
  int *piStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  int *piStack_260;
  int *piStack_258;
  undefined1 auStack_248 [512];
  undefined8 uStack_48;
  
  piVar2 = param_3;
  func_0x000106ae9e88();
  uVar6 = 0;
  uStack_48 = extraout_x8;
  _open();
  if ((int)piVar2 < 0) {
    ___error();
    func_0x000106ae9fbc();
    func_0x000106ae9f10();
    piVar7 = (int *)0x9a;
    piVar3 = extraout_x8_00;
    piStack_260 = param_3;
    piStack_258 = piVar2;
    func_0x000106aee914();
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    func_0x000106aed060(uVar6,param_2);
    if ((int)uVar6 == 0) {
      do {
        piVar7 = piVar2;
        _read(piVar2,auStack_248,0x200);
        in_ZR = (int)piVar7 == 1;
        if ((int)piVar7 < 1) goto LAB_106ae94c4;
        uVar6 = *(undefined8 *)(param_1 + 0x88);
        func_0x0001001e079c(uVar6,auStack_248);
      } while ((int)uVar6 == 0);
      func_0x000106ae9edc();
    }
    else {
      func_0x000106ae9edc();
    }
    func_0x000106aee914();
LAB_106ae94c4:
    piVar7 = (int *)(*(undefined8 **)(param_1 + 0x88))[1];
    uVar6 = 1;
    (*(code *)**(undefined8 **)(param_1 + 0x88))(&UNK_10f3b31b1,1,piVar7);
    piVar3 = piVar2;
    _close();
    unaff_x19 = piVar2;
  }
  func_0x000106ae9e2c(uStack_48);
  if ((bool)in_ZR) {
    return piVar3;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_106ae9500;
  uStack_298 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  piVar2 = aiStack_ab0;
  puVar9 = auStack_698;
  piVar11 = (int *)0x400;
  uStack_290 = param_2;
  piStack_288 = param_3;
  lStack_280 = param_1;
  piStack_278 = unaff_x19;
  puStack_270 = &stack0xfffffffffffffff0;
  FUN_106aecd98(piVar2,piVar7);
  if ((int)piVar2 != 0) {
    func_0x000106ae97cc(piVar3,uVar6);
    while( true ) {
      iStack_ab4 = 0x400;
      puVar9 = auStack_a98;
      piVar11 = &iStack_ab4;
      piVar7 = (int *)0xa;
      FUN_106aecca4(aiStack_ab0,10);
      in_ZR = iStack_ab4 - 1U == 0;
      if (iStack_ab4 < 1) break;
      auStack_a98[iStack_ab4 - 1U] = 0;
      func_0x000106ae9f68(*(undefined8 *)(piVar3 + 0x22),0,auStack_a98);
    }
    func_0x000106ae97d4(piVar3);
    piVar2 = aiStack_ab0;
    FUN_106aece2c();
  }
  func_0x000106ae9e2c(uStack_298);
  if ((bool)in_ZR) {
    return piVar2;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(piVar2 + 0x22);
  func_0x0001001e02c0();
  puVar10 = (undefined8 *)0x48;
  uStack_b28 = extraout_x8_01;
  _memcpy(auStack_11b8,&PTR_FUN_11095fbe8);
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
  puVar5 = puVar9;
  puStack_11f0 = auStack_d84;
  puStack_11e8 = &uStack_b90;
  puStack_11d8 = auStack_d84;
  puStack_11c8 = auStack_11b8;
  _open(puVar9,0);
  ppuStack_1220 = &puStack_11f8;
  uStack_1208 = SUB84(puVar5,0);
  uStack_1204 = 0;
  uStack_1203 = SUB81(piVar11,0);
  uStack_1202 = 0;
  pcStack_1200 = FUN_106aed48c;
  plStack_11c0 = &lStack_1228;
  iVar1 = *(int *)(lVar4 + 0x10);
  lStack_1228 = lVar4;
  puStack_1218 = auStack_116c;
  puStack_1210 = puVar9;
  puStack_11f8 = auStack_d84;
  FUN_106aed48c(&lStack_1228);
  ppuVar8 = &puStack_11f8;
  func_0x00010018a17c(piVar7,ppuVar8);
  _close(puVar5);
  if ((int)piVar11 != 0) {
    while( true ) {
      in_ZR = *(int *)(lVar4 + 0x10) == iVar1;
      if (*(int *)(lVar4 + 0x10) <= iVar1) break;
      func_0x0001001e30cc();
    }
  }
  func_0x0001001e0914(uStack_b28);
  if ((bool)in_ZR) {
    return piVar7;
  }
  ___stack_chk_fail();
  func_0x0001001e0a40(*puVar10,puVar5,ppuVar8);
  FUN_106aed6a4();
  return piVar11;
}



/* Entry: 106ae9500; end: 106ae95cb;  */

int * FUN_106ae9500(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined1 in_ZR;
  int *piVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 extraout_x8;
  long lStack_fc8;
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
  int aiStack_850 [6];
  undefined1 auStack_838 [1024];
  undefined1 auStack_438 [1024];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  piVar2 = aiStack_850;
  puVar6 = auStack_438;
  piVar8 = (int *)0x400;
  FUN_106aecd98(piVar2,param_3);
  if ((int)piVar2 != 0) {
    func_0x000106ae97cc(param_1,param_2);
    while( true ) {
      iStack_854 = 0x400;
      puVar6 = auStack_838;
      piVar8 = &iStack_854;
      param_3 = (int *)0xa;
      FUN_106aecca4(aiStack_850,10);
      in_ZR = iStack_854 - 1U == 0;
      if (iStack_854 < 1) break;
      auStack_838[iStack_854 - 1U] = 0;
      func_0x000106ae9f68(*(undefined8 *)(param_1 + 0x88),0,auStack_838);
    }
    func_0x000106ae97d4(param_1);
    piVar2 = aiStack_850;
    FUN_106aece2c();
  }
  func_0x000106ae9e2c(uStack_38);
  if ((bool)in_ZR) {
    return piVar2;
  }
  ___stack_chk_fail();
  lVar3 = *(long *)(piVar2 + 0x22);
  func_0x0001001e02c0();
  puVar7 = (undefined8 *)0x48;
  uStack_8c8 = extraout_x8;
  _memcpy(auStack_f58,&PTR_FUN_11095fbe8);
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
  uStack_fa3 = SUB81(piVar8,0);
  uStack_fa2 = 0;
  pcStack_fa0 = FUN_106aed48c;
  plStack_f60 = &lStack_fc8;
  iVar1 = *(int *)(lVar3 + 0x10);
  lStack_fc8 = lVar3;
  puStack_fb8 = auStack_f0c;
  puStack_fb0 = puVar6;
  puStack_f98 = auStack_b24;
  FUN_106aed48c(&lStack_fc8);
  ppuVar5 = &puStack_f98;
  func_0x00010018a17c(param_3,ppuVar5);
  _close(puVar4);
  if ((int)piVar8 != 0) {
    while( true ) {
      in_ZR = *(int *)(lVar3 + 0x10) == iVar1;
      if (*(int *)(lVar3 + 0x10) <= iVar1) break;
      func_0x0001001e30cc();
    }
  }
  func_0x0001001e0914(uStack_8c8);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x0001001e0a40(*puVar7,puVar4,ppuVar5);
  FUN_106aed6a4();
  return piVar8;
}



/* Entry: 106ae95cc; end: 106ae9603;  */

undefined8 FUN_106ae95cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  undefined8 *puVar5;
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
  func_0x0001001e02c0();
  puVar5 = (undefined8 *)0x48;
  uStack_68 = extraout_x8;
  _memcpy(auStack_6f8,&PTR_FUN_11095fbe8);
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
  pcStack_740 = FUN_106aed48c;
  plStack_700 = &lStack_768;
  iVar1 = *(int *)(lVar2 + 0x10);
  lStack_768 = lVar2;
  puStack_758 = auStack_6ac;
  uStack_750 = param_3;
  puStack_738 = auStack_2c4;
  FUN_106aed48c(&lStack_768);
  ppuVar4 = &puStack_738;
  func_0x00010018a17c(param_2,ppuVar4);
  _close(uVar3);
  if ((int)param_4 != 0) {
    while( true ) {
      in_ZR = *(int *)(lVar2 + 0x10) == iVar1;
      if (*(int *)(lVar2 + 0x10) <= iVar1) break;
      func_0x0001001e30cc();
    }
  }
  func_0x0001001e0914(uStack_68);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001001e0a40(*puVar5,uVar3,ppuVar4);
  FUN_106aed6a4();
  return param_4;
}



/* Entry: 106ae9604; end: 106ae97c3;  */

void FUN_106ae9604(long param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  undefined8 extraout_x8_00;
  int iVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  undefined1 auStack_3d [29];
  
  func_0x000106ae9e88();
  if (param_3 == (byte *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 0x88);
    func_0x000106ae9e2c(extraout_x8_00);
    if ((bool)in_ZR) {
      puVar5 = puVar4;
      func_0x0001001df548();
      if ((int)puVar5 != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = (code *)*puVar4;
      uVar7 = puVar4[1];
      puVar3 = &UNK_10f3b31ac;
      uVar6 = 4;
      goto LAB_1001df6c8;
    }
  }
  else {
    lVar10 = 0;
    puVar9 = auStack_3d;
    for (iVar8 = 0; iVar8 != 4; iVar8 = iVar8 + 1) {
      uVar2 = (&UNK_10dde435f)[(ulong)*param_3 & 0xf];
      *puVar9 = (&UNK_10dde435f)[*param_3 >> 4];
      puVar9[1] = uVar2;
      puVar9 = puVar9 + 2;
      lVar10 = lVar10 + 2;
      param_3 = param_3 + 1;
    }
    *puVar9 = 0x2d;
    for (lVar11 = 0; (int)lVar11 != 2; lVar11 = lVar11 + 1) {
      bVar1 = param_3[lVar11];
      auStack_3d[lVar10 + 1] = (&UNK_10dde435f)[bVar1 >> 4];
      auStack_3d[lVar10 + 2] = (&UNK_10dde435f)[(ulong)bVar1 & 0xf];
      lVar10 = lVar10 + 2;
    }
    auStack_3d[lVar10 + 1] = 0x2d;
    puVar9 = auStack_3d + lVar10 + 4;
    for (lVar10 = 0; (int)lVar10 != 2; lVar10 = lVar10 + 1) {
      bVar1 = param_3[lVar11 + lVar10];
      puVar9[-2] = (&UNK_10dde435f)[bVar1 >> 4];
      puVar9[-1] = (&UNK_10dde435f)[(ulong)bVar1 & 0xf];
      puVar9 = puVar9 + 2;
    }
    puVar9[-2] = 0x2d;
    pbVar12 = param_3 + lVar10 + lVar11;
    for (iVar8 = 0; iVar8 != -4; iVar8 = iVar8 + -2) {
      bVar1 = *pbVar12;
      puVar9[-1] = (&UNK_10dde435f)[bVar1 >> 4];
      *puVar9 = (&UNK_10dde435f)[(ulong)bVar1 & 0xf];
      puVar9 = puVar9 + 2;
      pbVar12 = pbVar12 + 1;
    }
    puVar9[-1] = 0x2d;
    for (lVar10 = 0; uVar2 = (int)lVar10 == 6, !(bool)uVar2; lVar10 = lVar10 + 1) {
      uVar2 = (&UNK_10dde435f)[(ulong)pbVar12[lVar10] & 0xf];
      *puVar9 = (&UNK_10dde435f)[pbVar12[lVar10] >> 4];
      puVar9[1] = uVar2;
      puVar9 = puVar9 + 2;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x88);
    func_0x0001001e3054();
    func_0x000106ae9e2c(extraout_x8_00);
    if ((bool)uVar2) {
      return;
    }
  }
  ___stack_chk_fail();
  puVar4 = (undefined8 *)puVar4[0x11];
  iVar8 = *(int *)(puVar4 + 2);
  if (-1 < iVar8) {
    puVar5 = puVar4;
    func_0x0001001df548();
    if ((int)puVar5 != 0) {
      return;
    }
    iVar8 = *(int *)(puVar4 + 2);
  }
  func_0x0001001df6b4(iVar8);
  *(undefined1 *)(extraout_x8 + 0x14) = 1;
  *(undefined1 *)((long)puVar4 + 0xdc) = 1;
  UNRECOVERED_JUMPTABLE = (code *)*puVar4;
  uVar7 = puVar4[1];
  puVar3 = &UNK_10f3b31b5;
  uVar6 = 1;
LAB_1001df6c8:
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar3,uVar6,uVar7);
  return;
}



/* Entry: 106ae97c4; end: 106ae97db;  */

void FUN_106ae97c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long extraout_x8;
  
  puVar2 = *(undefined8 **)(param_1 + 0x88);
  iVar3 = *(int *)(puVar2 + 2);
  if (-1 < iVar3) {
    puVar1 = puVar2;
    func_0x0001001df548();
    if ((int)puVar1 != 0) {
      return;
    }
    iVar3 = *(int *)(puVar2 + 2);
  }
  func_0x0001001df6b4(iVar3);
  *(undefined1 *)(extraout_x8 + 0x14) = 1;
  *(undefined1 *)((long)puVar2 + 0xdc) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(&UNK_10f3b31b5,1,puVar2[1]);
  return;
}



/* Entry: 106ae97dc; end: 106ae9a73;  */

void FUN_106ae97dc(long param_1,undefined8 param_2,ulong param_3,int *param_4)

{
  long unaff_x19;
  
  func_0x000106ae9e74();
  *param_4 = *param_4 + -1;
  (**(code **)(param_1 + 0x70))();
  func_0x000106ae9f90(*(undefined8 *)(unaff_x19 + 0x18));
  FUN_106aef830();
                    /* WARNING: Could not recover jumptable at 0x000106ae984c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dde4338)[param_3 & 0xffffffff] * 4 + 0x106ae9850))();
  return;
}



/* Entry: 106ae9a74; end: 106ae9adf;  */

void FUN_106ae9a74(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 in_ZR;
  uint uVar4;
  double *pdVar5;
  undefined *puVar6;
  int *piVar7;
  double *pdVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar9;
  undefined8 *unaff_x19;
  undefined8 unaff_x22;
  ulong uVar10;
  double dVar11;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  int *piStack_3e8;
  undefined8 *puStack_3e0;
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
  undefined auStack_368 [16];
  uint auStack_358 [56];
  undefined8 uStack_278;
  undefined8 auStack_21c [62];
  undefined8 uStack_28;
  
  func_0x000106ae9e88();
  uStack_28 = extraout_x8;
  if (param_1 != (undefined8 *)0x0) {
    in_ZR = param_1 == (undefined8 *)0xfffffffffffffe0b;
    if (param_1 < (undefined8 *)0xfffffffffffffe0c) {
      param_2 = auStack_21c;
      param_3 = (int *)0x1f4;
      FUN_106aef4bc();
      if ((int)param_1 != 0) {
        param_1 = auStack_21c;
        param_2 = (undefined8 *)0x4;
        param_3 = (int *)0x1f4;
        FUN_106af0bd8();
      }
    }
    else {
      param_1 = (undefined8 *)0x0;
    }
  }
  func_0x000106ae9e2c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  piVar7 = param_3;
  func_0x000106ae9e74();
  uStack_278 = extraout_x8_00;
  *piVar7 = *piVar7 + -1;
  (*(code *)param_1[0xe])();
  if ((long)param_2 < 0) {
    puVar6 = &UNK_10f3b1fd2;
    pdVar8 = (double *)((ulong)param_2 & 0xfffffffffffffff);
    func_0x000106ae9ed4(unaff_x19[2]);
  }
  else {
    param_1 = param_2;
    func_0x000106aef564();
    puVar6 = auStack_368;
    pdVar8 = (double *)0xa;
    FUN_106aef70c();
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
        puVar6 = (undefined *)(ulong)*puVar1;
        func_0x000106ae9ef0();
        func_0x000106ae9f44();
        pdVar8 = (double *)(long)cStack_369;
        break;
      case 1:
        pdVar8 = &dStack_3a8;
        func_0x000106ae9ef0();
        uVar9 = unaff_x19[1];
        puVar6 = *(undefined **)(puVar1 + -4);
        dVar11 = dStack_3a8;
        goto code_r0x000106ae9ca8;
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
        goto LAB_106ae9d4c;
      case 3:
        pdVar8 = (double *)&fStack_39c;
        func_0x000106ae9ef0();
        uVar9 = unaff_x19[1];
        puVar6 = *(undefined **)(puVar1 + -4);
        dVar11 = (double)fStack_39c;
code_r0x000106ae9ca8:
        func_0x000106ae9fa8(uVar9,dVar11);
        goto LAB_106ae9d4c;
      case 6:
        puVar6 = (undefined *)(ulong)*puVar1;
        func_0x000106ae9ef0();
        func_0x000106ae9f44();
        pdVar8 = (double *)(long)iStack_370;
        break;
      case 9:
        puVar6 = (undefined *)(ulong)*puVar1;
        func_0x000106ae9ef0();
        func_0x000106ae9f44();
        pdVar8 = (double *)(long)iStack_374;
        break;
      case 0xe:
        puVar6 = (undefined *)(ulong)*puVar1;
        func_0x000106ae9ef0();
        func_0x000106ae9f44();
        pdVar8 = pdStack_380;
        break;
      case 0x10:
        puVar6 = (undefined *)(ulong)*puVar1;
        func_0x000106ae9ef0();
        func_0x000106ae9f44();
        pdVar8 = (double *)(long)sStack_36c;
        break;
      default:
        iVar3 = bVar2 - 0x3a;
        in_ZR = iVar3 == 9;
        switch(iVar3) {
        case 0:
        case 6:
LAB_106ae9c0c:
          func_0x000106ae9ef0();
          puVar6 = *(undefined **)(puVar1 + -4);
          pdVar8 = pdStack_3b8;
          func_0x000106ae9f9c();
          break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
          break;
        case 8:
          func_0x000106ae9ef0();
          puVar6 = *(undefined **)(puVar1 + -4);
          pdVar8 = (double *)(ulong)bStack_3a9;
          param_1 = unaff_x19;
          (*(code *)*unaff_x19)();
          break;
        case 9:
          puVar6 = (undefined *)(ulong)*puVar1;
          func_0x000106ae9ef0();
          func_0x000106ae9f5c();
          pdVar8 = (double *)(ulong)bStack_381;
          goto LAB_106ae9d48;
        default:
          in_ZR = true;
          if ((bVar2 == 0x23) || (in_ZR = true, bVar2 == 0x2a)) goto LAB_106ae9c0c;
          in_ZR = bVar2 == 0x49;
          if ((bool)in_ZR) {
            puVar6 = (undefined *)(ulong)*puVar1;
            func_0x000106ae9ef0();
            func_0x000106ae9f5c();
            pdVar8 = (double *)(ulong)uStack_388;
          }
          else {
            in_ZR = bVar2 == 0x4c;
            if ((bool)in_ZR) {
              puVar6 = (undefined *)(ulong)*puVar1;
              func_0x000106ae9ef0();
              func_0x000106ae9f5c();
              pdVar8 = (double *)(ulong)uStack_38c;
            }
            else {
              in_ZR = bVar2 == 0x51;
              if ((bool)in_ZR) {
                puVar6 = (undefined *)(ulong)*puVar1;
                func_0x000106ae9ef0();
                func_0x000106ae9f5c();
                pdVar8 = pdStack_398;
              }
              else {
                in_ZR = bVar2 == 0x53;
                if (!(bool)in_ZR) break;
                puVar6 = (undefined *)(ulong)*puVar1;
                func_0x000106ae9ef0();
                func_0x000106ae9f5c();
                pdVar8 = (double *)(ulong)uStack_384;
              }
            }
          }
          goto LAB_106ae9d48;
        }
        goto LAB_106ae9d4c;
      }
LAB_106ae9d48:
      func_0x000106ae9ed4();
LAB_106ae9d4c:
      puVar1 = puVar1 + 6;
    }
  }
  func_0x000106ae9e40();
  func_0x000106ae9e2c(uStack_278);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (((pdVar8 != (double *)0x0) &&
      ((-1 < (long)pdVar8 || (*(int *)(((ulong)pdVar8 >> 0x3c & 7) * 0x30 + 0x113170298) != 0)))) &&
     ((pdVar5 = pdVar8, uStack_3f0 = unaff_x22, piStack_3e8 = param_3, puStack_3e0 = param_2,
      FUN_106aef830(), (int)pdVar5 != 0 || (pdVar5 = pdVar8, FUN_106ae9a74(), (int)pdVar5 != 0)))) {
    uStack_3f4 = 0xf;
    FUN_106ae97dc(param_1,puVar6,pdVar8,&uStack_3f4);
  }
  return;
}



/* Entry: 106ae9ae0; end: 106ae9d9f;  */

void FUN_106ae9ae0(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 in_ZR;
  uint uVar4;
  double *pdVar5;
  undefined *puVar6;
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
  undefined auStack_148 [16];
  uint auStack_138 [56];
  undefined8 uStack_58;
  
  piVar7 = param_3;
  func_0x000106ae9e74();
  *piVar7 = *piVar7 + -1;
  uStack_58 = extraout_x8;
  (*(code *)param_1[0xe])();
  if ((long)param_2 < 0) {
    puVar6 = &UNK_10f3b1fd2;
    pdVar8 = (double *)((ulong)param_2 & 0xfffffffffffffff);
    func_0x000106ae9ed4(unaff_x19[2]);
  }
  else {
    param_1 = param_2;
    func_0x000106aef564();
    puVar6 = auStack_148;
    pdVar8 = (double *)0xa;
    FUN_106aef70c();
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
        puVar6 = (undefined *)(ulong)*puVar1;
        func_0x000106ae9ef0();
        func_0x000106ae9f44();
        pdVar8 = (double *)(long)cStack_149;
        break;
      case 1:
        pdVar8 = &dStack_188;
        func_0x000106ae9ef0();
        uVar9 = unaff_x19[1];
        puVar6 = *(undefined **)(puVar1 + -4);
        dVar11 = dStack_188;
        goto code_r0x000106ae9ca8;
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
        goto LAB_106ae9d4c;
      case 3:
        pdVar8 = (double *)&fStack_17c;
        func_0x000106ae9ef0();
        uVar9 = unaff_x19[1];
        puVar6 = *(undefined **)(puVar1 + -4);
        dVar11 = (double)fStack_17c;
code_r0x000106ae9ca8:
        func_0x000106ae9fa8(uVar9,dVar11);
        goto LAB_106ae9d4c;
      case 6:
        puVar6 = (undefined *)(ulong)*puVar1;
        func_0x000106ae9ef0();
        func_0x000106ae9f44();
        pdVar8 = (double *)(long)iStack_150;
        break;
      case 9:
        puVar6 = (undefined *)(ulong)*puVar1;
        func_0x000106ae9ef0();
        func_0x000106ae9f44();
        pdVar8 = (double *)(long)iStack_154;
        break;
      case 0xe:
        puVar6 = (undefined *)(ulong)*puVar1;
        func_0x000106ae9ef0();
        func_0x000106ae9f44();
        pdVar8 = pdStack_160;
        break;
      case 0x10:
        puVar6 = (undefined *)(ulong)*puVar1;
        func_0x000106ae9ef0();
        func_0x000106ae9f44();
        pdVar8 = (double *)(long)sStack_14c;
        break;
      default:
        iVar3 = bVar2 - 0x3a;
        in_ZR = iVar3 == 9;
        switch(iVar3) {
        case 0:
        case 6:
LAB_106ae9c0c:
          func_0x000106ae9ef0();
          puVar6 = *(undefined **)(puVar1 + -4);
          pdVar8 = pdStack_198;
          func_0x000106ae9f9c();
          break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
          break;
        case 8:
          func_0x000106ae9ef0();
          puVar6 = *(undefined **)(puVar1 + -4);
          pdVar8 = (double *)(ulong)bStack_189;
          param_1 = unaff_x19;
          (*(code *)*unaff_x19)();
          break;
        case 9:
          puVar6 = (undefined *)(ulong)*puVar1;
          func_0x000106ae9ef0();
          func_0x000106ae9f5c();
          pdVar8 = (double *)(ulong)bStack_161;
          goto LAB_106ae9d48;
        default:
          in_ZR = true;
          if ((bVar2 == 0x23) || (in_ZR = true, bVar2 == 0x2a)) goto LAB_106ae9c0c;
          in_ZR = bVar2 == 0x49;
          if ((bool)in_ZR) {
            puVar6 = (undefined *)(ulong)*puVar1;
            func_0x000106ae9ef0();
            func_0x000106ae9f5c();
            pdVar8 = (double *)(ulong)uStack_168;
          }
          else {
            in_ZR = bVar2 == 0x4c;
            if ((bool)in_ZR) {
              puVar6 = (undefined *)(ulong)*puVar1;
              func_0x000106ae9ef0();
              func_0x000106ae9f5c();
              pdVar8 = (double *)(ulong)uStack_16c;
            }
            else {
              in_ZR = bVar2 == 0x51;
              if ((bool)in_ZR) {
                puVar6 = (undefined *)(ulong)*puVar1;
                func_0x000106ae9ef0();
                func_0x000106ae9f5c();
                pdVar8 = pdStack_178;
              }
              else {
                in_ZR = bVar2 == 0x53;
                if (!(bool)in_ZR) break;
                puVar6 = (undefined *)(ulong)*puVar1;
                func_0x000106ae9ef0();
                func_0x000106ae9f5c();
                pdVar8 = (double *)(ulong)uStack_164;
              }
            }
          }
          goto LAB_106ae9d48;
        }
        goto LAB_106ae9d4c;
      }
LAB_106ae9d48:
      func_0x000106ae9ed4();
LAB_106ae9d4c:
      puVar1 = puVar1 + 6;
    }
  }
  func_0x000106ae9e40();
  func_0x000106ae9e2c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (((pdVar8 != (double *)0x0) &&
      ((-1 < (long)pdVar8 || (*(int *)(((ulong)pdVar8 >> 0x3c & 7) * 0x30 + 0x113170298) != 0)))) &&
     ((pdVar5 = pdVar8, uStack_1d0 = unaff_x22, piStack_1c8 = param_3, puStack_1c0 = param_2,
      FUN_106aef830(), (int)pdVar5 != 0 || (pdVar5 = pdVar8, FUN_106ae9a74(), (int)pdVar5 != 0)))) {
    uStack_1d4 = 0xf;
    FUN_106ae97dc(param_1,puVar6,pdVar8,&uStack_1d4);
  }
  return;
}



/* Entry: 106ae9da0; end: 106ae9e2b;  */

void FUN_106ae9da0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uStack_34;
  
  if (((param_3 != 0) &&
      ((-1 < (long)param_3 || (*(int *)((param_3 >> 0x3c & 7) * 0x30 + 0x113170298) != 0)))) &&
     ((uVar1 = param_3, FUN_106aef830(), (int)uVar1 != 0 ||
      (uVar1 = param_3, FUN_106ae9a74(), (int)uVar1 != 0)))) {
    uStack_34 = 0xf;
    FUN_106ae97dc(param_1,param_2,param_3,&uStack_34);
  }
  return;
}



/* Entry: 106ae9e2c; end: 106aea063;  */

void FUN_106ae9e2c(void)

{
  return;
}



/* Entry: 106aea064; end: 106aea1f7;  */

undefined8 * FUN_106aea064(long param_1,int param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  code **ppcStack_28b0;
  undefined1 auStack_28a8 [10008];
  undefined8 *puStack_190;
  uint uStack_188;
  undefined1 auStack_180 [72];
  code *pcStack_138;
  undefined8 **ppuStack_130;
  undefined1 auStack_128 [204];
  undefined1 uStack_5c;
  undefined8 uStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)0x0;
  if (param_1 != 0) {
    _memcpy(auStack_180,&PTR_FUN_11095f3b8,0x48);
    puVar1 = (undefined8 *)0x2710;
    _malloc();
    lVar2 = param_1;
    _strlen();
    uVar6 = (uint)((double)(int)lVar2 * 1.5);
    puVar3 = (undefined8 *)(ulong)uVar6;
    _malloc();
    _bzero(auStack_28a8,0x2728);
    ppcStack_28b0 = &pcStack_138;
    puStack_190 = puVar3;
    uStack_188 = uVar6;
    _bzero(auStack_128,0xd0);
    pcStack_138 = FUN_106aea468;
    uStack_5c = 1;
    lVar2 = param_1;
    ppuStack_130 = &ppcStack_28b0;
    _strlen();
    param_2 = (int)lVar2;
    param_3 = puVar1;
    func_0x00010018a69c();
    *(undefined1 *)puStack_190 = 0;
    _free(puVar1);
    puVar5 = puVar3;
    if ((int)param_1 == 0) goto LAB_106aea1c4;
    FUN_106aecfa4();
    param_2 = 0xf3b2296;
    param_3 = (undefined8 *)0x10e;
    func_0x000106aee914(&UNK_10f3b2290,&UNK_10f3b2296,0x10e,&UNK_10f3b22d4,&UNK_10f3b22ff);
    _free(puVar3);
  }
  puVar5 = (undefined8 *)0x0;
  puVar1 = puVar3;
LAB_106aea1c4:
  FUN_106aea51c(uStack_58);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  param_3 = (undefined8 *)*param_3;
  puVar3 = param_3;
  func_0x0001001df548(param_3,puVar1);
  if ((int)puVar3 == 0) {
    if (param_2 == 0) {
      puVar3 = (undefined8 *)&UNK_10f3b3198;
      uVar4 = 5;
    }
    else {
      puVar3 = (undefined8 *)&UNK_10f3b3193;
      uVar4 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_3)(puVar3,uVar4,param_3[1]);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 106aea1f8; end: 106aea21b;  */

void FUN_106aea1f8(undefined8 param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  param_3 = (undefined8 *)*param_3;
  puVar1 = param_3;
  func_0x0001001df548(param_3,param_1);
  if ((int)puVar1 == 0) {
    if (param_2 == 0) {
      puVar2 = &UNK_10f3b3198;
      uVar3 = 5;
    }
    else {
      puVar2 = &UNK_10f3b3193;
      uVar3 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_3)(puVar2,uVar3,param_3[1]);
    return;
  }
  return;
}



/* Entry: 106aea21c; end: 106aea37b;  */

void FUN_106aea21c(char *param_1,char *param_2,undefined8 *param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 extraout_x8;
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined1 auStack_7d [21];
  undefined8 uStack_68;
  
  lVar12 = 0;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = "";
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  uVar2 = *(uint *)(param_3 + 0x4e3);
  ppuVar10 = &PTR_s__11095f400;
  pcVar9 = param_2;
  do {
    uVar3 = lVar12 == 2;
    if ((bool)uVar3) {
      uVar11 = *param_3;
      FUN_106aea51c(uStack_68);
      if ((bool)uVar3) {
        func_0x0001001e02c0();
        iVar4 = (int)uVar11;
        func_0x0001001df548();
        if (iVar4 == 0) {
          func_0x0001001e0a0c();
          func_0x0001001e0a1c();
          func_0x0001001e0a28();
        }
        func_0x0001001e0914(extraout_x8);
        if (!(bool)uVar3) {
          func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x0001001e0330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        return;
      }
LAB_106aea378:
      ___stack_chk_fail();
      puVar7 = *(undefined8 **)pcVar9;
      puVar8 = puVar7;
      func_0x0001001df548(puVar7,uVar11);
      if ((int)puVar8 != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar7)(&UNK_10f3b31ac,4,puVar7[1]);
      return;
    }
    uVar3 = 0;
    puVar8 = param_3 + 1;
    uVar13 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    ppuVar14 = ppuVar10;
    do {
      if (uVar13 == 0) {
        pcVar9 = (&PTR_s__11095f400)[lVar12 * 100 + (long)(int)uVar2];
        pcVar5 = pcVar1;
        _strncmp(pcVar1,pcVar9,100);
        if ((int)pcVar5 == 0) {
          func_0x0001001d5b6c(param_2,auStack_7d);
          uVar11 = *param_3;
          puVar6 = auStack_7d;
          _strlen(puVar6);
          func_0x0001001e3054(uVar11,param_1,auStack_7d,puVar6);
          FUN_106aea51c(uStack_68);
          pcVar9 = param_1;
          if ((bool)uVar3) {
            return;
          }
          goto LAB_106aea378;
        }
        break;
      }
      pcVar9 = *ppuVar14;
      puVar7 = puVar8;
      _strncmp(puVar8,pcVar9,100);
      puVar8 = (undefined8 *)((long)puVar8 + 100);
      uVar13 = uVar13 - 1;
      ppuVar14 = ppuVar14 + 1;
    } while ((int)puVar7 == 0);
    lVar12 = lVar12 + 1;
    ppuVar10 = ppuVar10 + 100;
  } while( true );
}



/* Entry: 106aea37c; end: 106aea38b;  */

void FUN_106aea37c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_2 = (undefined8 *)*param_2;
  puVar1 = param_2;
  func_0x0001001df548(param_2,param_1);
  if ((int)puVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_2)(&UNK_10f3b31ac,4,param_2[1]);
    return;
  }
  return;
}



/* Entry: 106aea38c; end: 106aea42f;  */

void FUN_106aea38c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  param_3 = (undefined8 *)*param_3;
  lVar2 = param_2;
  _strlen();
  if (param_2 != 0) {
    puVar3 = param_3;
    func_0x0001001df548(param_3,param_1);
    if ((int)puVar3 == 0) {
      if ((int)lVar2 == -1) {
        lVar2 = param_2;
        func_0x000107c613d0(param_2);
      }
      iVar1 = 0xf3b31b1;
      func_0x0001001e032c(*param_3,&UNK_10f3b31b1,param_2,param_3[1]);
      if (iVar1 == 0) {
        func_0x0001001e079c(param_3,param_2,lVar2);
        func_0x0001001e032c(*param_3,&UNK_10f3b31b1);
      }
    }
    return;
  }
  puVar3 = param_3;
  func_0x0001001df548(param_3,param_1);
  if ((int)puVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001df6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(&UNK_10f3b31ac,4,param_3[1]);
  return;
}



/* Entry: 106aea430; end: 106aea45f;  */

void FUN_106aea430(undefined8 *param_1)

{
  func_0x0001001e3108(*param_1);
  if (0 < *(int *)(param_1 + 0x4e3)) {
    *(int *)(param_1 + 0x4e3) = *(int *)(param_1 + 0x4e3) + -1;
  }
  return;
}



/* Entry: 106aea460; end: 106aea467;  */

void FUN_106aea460(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = lVar2;
  do {
    if (*(int *)(lVar2 + 0x10) < 1) {
      return;
    }
    func_0x0001001e30cc();
  } while ((int)lVar1 == 0);
  return;
}



/* Entry: 106aea468; end: 106aea51b;  */

undefined8 FUN_106aea468(undefined8 param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_3 + 0x2728) < param_2) {
    uVar1 = 2;
  }
  else {
    _memcpy(*(undefined8 *)(param_3 + 0x2720),param_1,(long)param_2);
    uVar1 = 0;
    *(long *)(param_3 + 0x2720) = *(long *)(param_3 + 0x2720) + (long)param_2;
    *(int *)(param_3 + 0x2728) = *(int *)(param_3 + 0x2728) - param_2;
  }
  return uVar1;
}



/* Entry: 106aea51c; end: 106aea567;  */

void FUN_106aea51c(void)

{
  return;
}



/* Entry: 106aea568; end: 106aea5a7;  */

long FUN_106aea568(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  uint *extraout_x9;
  
  func_0x000106aea7e4();
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
    func_0x000106aea7d0();
  }
  return extraout_x8 + (ulong)uVar1;
}



/* Entry: 106aea5a8; end: 106aea5bb;  */

void FUN_106aea5a8(undefined8 param_1,undefined8 param_2)

{
  _snprintf(param_2,500,&UNK_10f3b2330);
  return;
}



/* Entry: 106aea5bc; end: 106aea627;  */

void FUN_106aea5bc(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_47c [500];
  undefined8 uStack_288;
  undefined8 uStack_238;
  
  func_0x0001001c8ec4();
  _pthread_mutex_lock(0x113170128);
  func_0x000106aea7d0();
  func_0x000106aea7b8();
  _pthread_mutex_unlock(0x113170128);
  func_0x0001001c97d0(extraout_x8,uStack_238);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001001c8ec4();
  uStack_288 = extraout_x8_00;
  _pthread_mutex_lock(0x113170128);
  puVar1 = auStack_47c;
  FUN_106aea6b0(uStack_238,puVar1);
  func_0x000106aea7b8();
  _pthread_mutex_unlock(0x113170128);
  func_0x0001001c97d0(uStack_288);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  _snprintf(puVar1,500,&UNK_10f3b2330);
  return;
}



/* Entry: 106aea628; end: 106aea6af;  */

void FUN_106aea628(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_23c [500];
  undefined8 uStack_48;
  
  func_0x0001001c8ec4();
  uStack_48 = extraout_x8;
  _pthread_mutex_lock(0x113170128);
  puVar1 = auStack_23c;
  FUN_106aea6b0(param_1,puVar1);
  func_0x000106aea7b8();
  _pthread_mutex_unlock(0x113170128);
  func_0x0001001c97d0(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  _snprintf(puVar1,500,&UNK_10f3b2330);
  return;
}



/* Entry: 106aea6b0; end: 106aea6e3;  */

void FUN_106aea6b0(undefined8 param_1,undefined8 param_2)

{
  _snprintf(param_2,500,&UNK_10f3b2330);
  return;
}



/* Entry: 106aea6e4; end: 106aea70f;  */

void FUN_106aea6e4(void)

{
  func_0x0001001c7e08();
  FUN_106aec720(uRam000000011381b460);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)();
  return;
}



/* Entry: 106aea710; end: 106aea79f;  */

long * FUN_106aea710(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  uint uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long alStack_43c [62];
  undefined8 uStack_248;
  
  func_0x0001001c8ec4();
  FUN_106aea5a8();
  func_0x000106aea7d8();
  func_0x0001001c97d0(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001001c8ec4();
  plVar1 = alStack_43c;
  uStack_248 = extraout_x8_00;
  FUN_106aea6b0();
  func_0x000106aea7d8();
  func_0x0001001c97d0(uStack_248);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar2 = (uint)(*plVar1 < *param_1);
  if (*param_1 < *plVar1) {
    uVar2 = 0xffffffff;
  }
  return (long *)(ulong)uVar2;
}



/* Entry: 106aea7a0; end: 106aea7f7;  */

uint FUN_106aea7a0(long *param_1,long *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 < *param_1);
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 106aea7f8; end: 106aea867;  */

char FUN_106aea7f8(byte param_1)

{
  bRam000000011381b489 = bRam000000011381b489 | param_1;
  if (cRam000000011381b490 == '\x01') {
    cRam000000011381b491 = cRam000000011381b490;
  }
  else {
    cRam000000011381b490 = '\x01';
    if (cRam000000011381b491 != '\x01') {
      cRam000000011381b490 = 1;
      return '\0';
    }
  }
  func_0x0001001d2650(0);
  return cRam000000011381b491;
}



/* Entry: 106aea868; end: 106aea93f;  */

/* WARNING: Removing unreachable block (ram,0x0001001d2674) */
/* WARNING: Removing unreachable block (ram,0x0001001d2678) */
/* WARNING: Removing unreachable block (ram,0x0001001d2684) */
/* WARNING: Removing unreachable block (ram,0x0001001d268c) */

void FUN_106aea868(long param_1)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  *(undefined1 *)(param_1 + 0x11) = uRam000000011381b489;
  if (bRam000000011381b491 == 1) {
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  lVar6 = 0x113170170;
  lVar7 = 7;
  do {
    lVar2 = lVar6;
    func_0x0001001d3074();
    if (((((int)lVar2 != 0) && (*(code **)(lVar6 + 8) != (code *)0x0)) &&
        ((**(code **)(lVar6 + 8))(), lVar2 != 0)) && (*(code **)(lVar2 + 0x10) != (code *)0x0)) {
      (**(code **)(lVar2 + 0x10))(param_1);
    }
    lVar6 = lVar6 + 0x10;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  (*pcRam000000011381b478)(param_1);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    if ((cRam000000011381b490 == '\x01') && ((bRam000000011381b491 & 1) == 0)) {
      puVar3 = (uint *)0x0;
      func_0x0001001d2574();
      uVar5 = 0;
      lVar6 = 7;
      puVar4 = (uint *)0x113170170;
      do {
        if (((*(code **)(puVar4 + 2) != (code *)0x0) &&
            ((**(code **)(puVar4 + 2))(), puVar3 != (uint *)0x0)) &&
           (*(code **)puVar3 != (code *)0x0)) {
          (**(code **)puVar3)(0);
        }
        puVar3 = puVar4;
        func_0x0001001d3074();
        uVar1 = uVar5 & (*puVar4 ^ 0xffffffff);
        uVar5 = *puVar4 | uVar5;
        if ((int)puVar3 == 0) {
          uVar5 = uVar1;
        }
        lVar6 = lVar6 + -1;
        puVar4 = puVar4 + 4;
      } while (lVar6 != 0);
      uRam000000011381b48c = uVar5;
      return;
    }
  }
  else {
    cRam000000011381b490 = '\0';
  }
  return;
}



/* Entry: 106aea940; end: 106aea947;  */

undefined8 FUN_106aea940(void)

{
  return 0;
}



/* Entry: 106aea948; end: 106aea9e3;  */

undefined1  [16] FUN_106aea948(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iStack_11c;
  undefined *puStack_118;
  int *piStack_110;
  undefined1 auStack_108 [204];
  undefined1 uStack_3c;
  undefined8 uStack_38;
  
  uVar3 = uRam000000011381b4f0;
  uVar1 = cRam000000011381b4f8 == '\x01';
  uVar7 = param_2;
  if (!(bool)uVar1) {
LAB_106aea9c0:
    auVar11._8_8_ = param_3;
    auVar11._0_8_ = uVar7;
    return auVar11;
  }
  uRam000000011381b4d9 = (undefined1)param_2;
  func_0x000100c7a588();
  if ((int)param_2 != 0) {
    dRam000000011381b4c0 = dRam000000011381b4c0 + (param_1 - dRam000000011381b4d0);
    dRam000000011381b4a8 = (param_1 - dRam000000011381b4d0) + dRam000000011381b4a8;
    iRam000000011381b4b4 = iRam000000011381b4b4 + 1;
    iRam000000011381b4c8 = iRam000000011381b4c8 + 1;
    goto LAB_106aea9c0;
  }
  dRam000000011381b4d0 = param_1;
  func_0x00010017dcb0();
  iStack_11c = (int)uVar3;
  pcVar8 = (char *)0x602;
  uStack_38 = extraout_x8;
  func_0x000107c611c4();
  if (iStack_11c < 0) {
    func_0x000107c60e5c();
    func_0x000107c613cc();
    FUN_106aeab94();
    func_0x000106aee914(extraout_x8_01);
    uVar9 = 0;
    goto code_r0x0001001de2d4;
  }
  func_0x000107c60ee4(auStack_108,0xd0);
  piStack_110 = &iStack_11c;
  puStack_118 = &UNK_1001df74c;
  uStack_3c = 1;
  ppuVar4 = &puStack_118;
  pcVar8 = (char *)0x0;
  func_0x0001001df65c(ppuVar4,0);
  iVar2 = (int)ppuVar4;
  if (iVar2 == 0) {
    pcVar8 = "version";
    ppuVar4 = &puStack_118;
    func_0x0001001e02d0(ppuVar4,"version",1);
    iVar2 = (int)ppuVar4;
    if (iVar2 == 0) {
      pcVar8 = "crashedLastLaunch";
      ppuVar4 = &puStack_118;
      func_0x0001001e0a40(ppuVar4,&UNK_10f3b2433,uRam000000011381b4cd);
      iVar2 = (int)ppuVar4;
      if (iVar2 == 0) {
        pcVar8 = "activeDurationSinceLastCrash";
        ppuVar4 = &puStack_118;
        func_0x0001001e1004(uRam000000011381b4a0,ppuVar4,&UNK_10f3b2445);
        iVar2 = (int)ppuVar4;
        if (iVar2 == 0) {
          pcVar8 = "backgroundDurationSinceLastCrash";
          ppuVar4 = &puStack_118;
          func_0x0001001e1004(dRam000000011381b4a8,ppuVar4,&UNK_10f3b2462);
          iVar2 = (int)ppuVar4;
          if (iVar2 == 0) {
            pcVar8 = "launchesSinceLastCrash";
            ppuVar4 = &puStack_118;
            func_0x0001001e02d0(ppuVar4,&UNK_10f3b2483,(long)iRam000000011381b4b0);
            iVar2 = (int)ppuVar4;
            if (iVar2 == 0) {
              pcVar8 = "sessionsSinceLastCrash";
              ppuVar4 = &puStack_118;
              func_0x0001001e02d0(ppuVar4,&UNK_10f3b249a,(long)iRam000000011381b4b4);
              iVar2 = (int)ppuVar4;
              if (iVar2 == 0) {
                if (lRam000000011381b4e0 != 0) {
                  lVar5 = lRam000000011381b4e0;
                  func_0x000107c613d0();
                  iVar2 = (int)lVar5;
                  pcVar8 = "reportIDLastLaunch";
                  func_0x0001001e3048();
                  if (iVar2 != 0) goto code_r0x0001001de258;
                }
                if (PTR_DAT_113170118 != (undefined *)0x0) {
                  puVar6 = PTR_DAT_113170118;
                  func_0x000107c613d0();
                  iVar2 = (int)puVar6;
                  pcVar8 = "sessionIdLastLaunch";
                  func_0x0001001e3048();
                  if (iVar2 != 0) goto code_r0x0001001de258;
                }
                iVar2 = (int)&puStack_118;
                func_0x0001001e30d4();
              }
            }
          }
        }
      }
    }
  }
code_r0x0001001de258:
  func_0x000107c60f10(iStack_11c);
  uVar1 = iVar2 == 0;
  uVar9 = (ulong)(byte)uVar1;
  if (iVar2 != 0) {
    FUN_106aecfa4();
    FUN_106aeab94();
    func_0x000106aee914(extraout_x8_00);
  }
code_r0x0001001de2d4:
  func_0x00010018ac68(uStack_38);
  if ((bool)uVar1) {
    auVar10._8_8_ = pcVar8;
    auVar10._0_8_ = uVar9;
    return auVar10;
  }
  func_0x000107c60e78();
  return ZEXT816(0x110693948);
}



/* Entry: 106aea9e4; end: 106aeaa43;  */

undefined1  [16] FUN_106aea9e4(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iStack_11c;
  undefined *puStack_118;
  int *piStack_110;
  undefined1 auStack_108 [204];
  undefined1 uStack_3c;
  undefined8 uStack_38;
  
  uVar4 = uRam000000011381b4f0;
  dVar1 = dRam000000011381b4d0;
  uVar2 = cRam000000011381b4f8 == '\x01';
  if (!(bool)uVar2) {
    auVar11._8_8_ = param_3;
    auVar11._0_8_ = param_2;
    return auVar11;
  }
  func_0x000100c7a588();
  dRam000000011381b4a8 = dRam000000011381b4a8 + (param_1 - dVar1);
  func_0x00010017dcb0();
  iStack_11c = (int)uVar4;
  pcVar8 = (char *)0x602;
  uStack_38 = extraout_x8;
  func_0x000107c611c4();
  if (iStack_11c < 0) {
    func_0x000107c60e5c();
    func_0x000107c613cc();
    FUN_106aeab94();
    func_0x000106aee914(extraout_x8_01);
    uVar9 = 0;
    goto code_r0x0001001de2d4;
  }
  func_0x000107c60ee4(auStack_108,0xd0);
  piStack_110 = &iStack_11c;
  puStack_118 = &UNK_1001df74c;
  uStack_3c = 1;
  ppuVar5 = &puStack_118;
  pcVar8 = (char *)0x0;
  func_0x0001001df65c(ppuVar5,0);
  iVar3 = (int)ppuVar5;
  if (iVar3 == 0) {
    pcVar8 = "version";
    ppuVar5 = &puStack_118;
    func_0x0001001e02d0(ppuVar5,"version",1);
    iVar3 = (int)ppuVar5;
    if (iVar3 == 0) {
      pcVar8 = "crashedLastLaunch";
      ppuVar5 = &puStack_118;
      func_0x0001001e0a40(ppuVar5,&UNK_10f3b2433,uRam000000011381b4cd);
      iVar3 = (int)ppuVar5;
      if (iVar3 == 0) {
        pcVar8 = "activeDurationSinceLastCrash";
        ppuVar5 = &puStack_118;
        func_0x0001001e1004(uRam000000011381b4a0,ppuVar5,&UNK_10f3b2445);
        iVar3 = (int)ppuVar5;
        if (iVar3 == 0) {
          pcVar8 = "backgroundDurationSinceLastCrash";
          ppuVar5 = &puStack_118;
          func_0x0001001e1004(dRam000000011381b4a8,ppuVar5,&UNK_10f3b2462);
          iVar3 = (int)ppuVar5;
          if (iVar3 == 0) {
            pcVar8 = "launchesSinceLastCrash";
            ppuVar5 = &puStack_118;
            func_0x0001001e02d0(ppuVar5,&UNK_10f3b2483,(long)iRam000000011381b4b0);
            iVar3 = (int)ppuVar5;
            if (iVar3 == 0) {
              pcVar8 = "sessionsSinceLastCrash";
              ppuVar5 = &puStack_118;
              func_0x0001001e02d0(ppuVar5,&UNK_10f3b249a,(long)iRam000000011381b4b4);
              iVar3 = (int)ppuVar5;
              if (iVar3 == 0) {
                if (lRam000000011381b4e0 != 0) {
                  lVar6 = lRam000000011381b4e0;
                  func_0x000107c613d0();
                  iVar3 = (int)lVar6;
                  pcVar8 = "reportIDLastLaunch";
                  func_0x0001001e3048();
                  if (iVar3 != 0) goto code_r0x0001001de258;
                }
                if (PTR_DAT_113170118 != (undefined *)0x0) {
                  puVar7 = PTR_DAT_113170118;
                  func_0x000107c613d0();
                  iVar3 = (int)puVar7;
                  pcVar8 = "sessionIdLastLaunch";
                  func_0x0001001e3048();
                  if (iVar3 != 0) goto code_r0x0001001de258;
                }
                iVar3 = (int)&puStack_118;
                func_0x0001001e30d4();
              }
            }
          }
        }
      }
    }
  }
code_r0x0001001de258:
  func_0x000107c60f10(iStack_11c);
  uVar2 = iVar3 == 0;
  uVar9 = (ulong)(byte)uVar2;
  if (iVar3 != 0) {
    FUN_106aecfa4();
    FUN_106aeab94();
    func_0x000106aee914(extraout_x8_00);
  }
code_r0x0001001de2d4:
  func_0x00010018ac68(uStack_38);
  if ((bool)uVar2) {
    auVar10._8_8_ = pcVar8;
    auVar10._0_8_ = uVar9;
    return auVar10;
  }
  func_0x000107c60e78();
  return ZEXT816(0x110693948);
}



/* Entry: 106aeaa44; end: 106aeaaa3;  */

undefined1  [16] FUN_106aeaa44(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iStack_11c;
  undefined *puStack_118;
  int *piStack_110;
  undefined1 auStack_108 [204];
  undefined1 uStack_3c;
  undefined8 uStack_38;
  
  uVar3 = uRam000000011381b4f0;
  uVar1 = cRam000000011381b4f8 == '\x01';
  if (!(bool)uVar1) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = param_1;
    return auVar10;
  }
  FUN_106aeaaa4();
  uRam000000011381b4cd = 1;
  if (param_1 != 0) {
    _strdup();
    lRam000000011381b4e0 = param_1;
  }
  func_0x00010017dcb0();
  iStack_11c = (int)uVar3;
  pcVar7 = (char *)0x602;
  uStack_38 = extraout_x8;
  func_0x000107c611c4();
  if (iStack_11c < 0) {
    func_0x000107c60e5c();
    func_0x000107c613cc();
    FUN_106aeab94();
    func_0x000106aee914(extraout_x8_01);
    uVar8 = 0;
    goto code_r0x0001001de2d4;
  }
  func_0x000107c60ee4(auStack_108,0xd0);
  piStack_110 = &iStack_11c;
  puStack_118 = &UNK_1001df74c;
  uStack_3c = 1;
  ppuVar4 = &puStack_118;
  pcVar7 = (char *)0x0;
  func_0x0001001df65c(ppuVar4,0);
  iVar2 = (int)ppuVar4;
  if (iVar2 == 0) {
    pcVar7 = "version";
    ppuVar4 = &puStack_118;
    func_0x0001001e02d0(ppuVar4,"version",1);
    iVar2 = (int)ppuVar4;
    if (iVar2 == 0) {
      pcVar7 = "crashedLastLaunch";
      ppuVar4 = &puStack_118;
      func_0x0001001e0a40(ppuVar4,&UNK_10f3b2433,uRam000000011381b4cd);
      iVar2 = (int)ppuVar4;
      if (iVar2 == 0) {
        pcVar7 = "activeDurationSinceLastCrash";
        ppuVar4 = &puStack_118;
        func_0x0001001e1004(uRam000000011381b4a0,ppuVar4,&UNK_10f3b2445);
        iVar2 = (int)ppuVar4;
        if (iVar2 == 0) {
          pcVar7 = "backgroundDurationSinceLastCrash";
          ppuVar4 = &puStack_118;
          func_0x0001001e1004(uRam000000011381b4a8,ppuVar4,&UNK_10f3b2462);
          iVar2 = (int)ppuVar4;
          if (iVar2 == 0) {
            pcVar7 = "launchesSinceLastCrash";
            ppuVar4 = &puStack_118;
            func_0x0001001e02d0(ppuVar4,&UNK_10f3b2483,(long)iRam000000011381b4b0);
            iVar2 = (int)ppuVar4;
            if (iVar2 == 0) {
              pcVar7 = "sessionsSinceLastCrash";
              ppuVar4 = &puStack_118;
              func_0x0001001e02d0(ppuVar4,&UNK_10f3b249a,(long)iRam000000011381b4b4);
              iVar2 = (int)ppuVar4;
              if (iVar2 == 0) {
                if (lRam000000011381b4e0 != 0) {
                  lVar5 = lRam000000011381b4e0;
                  func_0x000107c613d0();
                  iVar2 = (int)lVar5;
                  pcVar7 = "reportIDLastLaunch";
                  func_0x0001001e3048();
                  if (iVar2 != 0) goto code_r0x0001001de258;
                }
                if (PTR_DAT_113170118 != (undefined *)0x0) {
                  puVar6 = PTR_DAT_113170118;
                  func_0x000107c613d0();
                  iVar2 = (int)puVar6;
                  pcVar7 = "sessionIdLastLaunch";
                  func_0x0001001e3048();
                  if (iVar2 != 0) goto code_r0x0001001de258;
                }
                iVar2 = (int)&puStack_118;
                func_0x0001001e30d4();
              }
            }
          }
        }
      }
    }
  }
code_r0x0001001de258:
  func_0x000107c60f10(iStack_11c);
  uVar1 = iVar2 == 0;
  uVar8 = (ulong)(byte)uVar1;
  if (iVar2 != 0) {
    FUN_106aecfa4();
    FUN_106aeab94();
    func_0x000106aee914(extraout_x8_00);
  }
code_r0x0001001de2d4:
  func_0x00010018ac68(uStack_38);
  if ((bool)uVar1) {
    auVar9._8_8_ = pcVar7;
    auVar9._0_8_ = uVar8;
    return auVar9;
  }
  func_0x000107c60e78();
  return ZEXT816(0x110693948);
}



/* Entry: 106aeaaa4; end: 106aeab23;  */

void FUN_106aeaaa4(double param_1)

{
  double *pdVar1;
  double dVar2;
  
  dVar2 = dRam000000011381b4d0;
  func_0x000100c7a588();
  dVar2 = param_1 - dVar2;
  func_0x000100c7a588();
  if (cRam000000011381b4d8 == '\x01') {
    pdVar1 = (double *)0x11381b4a0;
  }
  else {
    if ((bRam000000011381b4d9 & 1) != 0) {
      dRam000000011381b4d0 = param_1;
      return;
    }
    pdVar1 = (double *)0x11381b4a8;
  }
  dRam000000011381b4d0 = param_1;
  pdVar1[3] = dVar2 + pdVar1[3];
  *pdVar1 = dVar2 + *pdVar1;
  return;
}



/* Entry: 106aeab24; end: 106aeab93;  */

void FUN_106aeab24(long param_1)

{
  undefined8 uVar1;
  
  if (cRam000000011381b4f8 == '\x01') {
    FUN_106aeaaa4();
    *(undefined2 *)(param_1 + 0xf8) = uRam000000011381b4d8;
    *(undefined8 *)(param_1 + 0xf0) = uRam000000011381b4d0;
    uVar1 = uRam000000011381b4a0;
    *(undefined8 *)(param_1 + 200) = uRam000000011381b4a8;
    *(undefined8 *)(param_1 + 0xc0) = uVar1;
    uVar1 = uRam000000011381b4b8;
    *(undefined8 *)(param_1 + 0xe0) = uRam000000011381b4c0;
    *(undefined8 *)(param_1 + 0xd8) = uVar1;
    *(undefined2 *)(param_1 + 0xec) = uRam000000011381b4cc;
    *(undefined8 *)(param_1 + 0xd0) = uRam000000011381b4b0;
    *(undefined4 *)(param_1 + 0xe8) = uRam000000011381b4c8;
  }
  return;
}



/* Entry: 106aeab94; end: 106aeabbb;  */

void FUN_106aeab94(void)

{
  return;
}



/* Entry: 106aeabbc; end: 106aeac2f;  */

void FUN_106aeabbc(void)

{
  if ((bRam000000011381b4f9 & 1) == 0) {
    FUN_106aebc58(0x106aeabf4);
    bRam000000011381b4f9 = 1;
  }
  return;
}



/* Entry: 106aeac30; end: 106aeaf8b;  */

void FUN_106aeac30(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  double *pdVar6;
  double *pdVar7;
  long *plVar8;
  uint uVar9;
  double *pdVar10;
  double *pdVar11;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  uint *extraout_x8;
  int iVar16;
  double *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong uVar17;
  undefined8 unaff_x28;
  double dVar18;
  ulong auStack_4c0 [12];
  double adStack_460 [2];
  undefined1 auStack_450 [4];
  uint uStack_44c;
  double *pdStack_448;
  undefined1 auStack_440 [1000];
  long lStack_58;
  double **ppdVar12;
  
  puVar4 = auStack_450;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (pcRam000000011381b428 != (code *)0x0) {
    (*pcRam000000011381b428)();
  }
  ___cxa_current_exception_type();
  if (param_1 != 0) {
    uVar13 = *(ulong *)(param_1 + 8) & 0x7fffffffffffffff;
    if (uVar13 != 0) {
      uVar14 = uVar13;
      FUN_106aeced0(uVar13,&UNK_10f3b2543,0xb);
      FUN_106aeaf8c();
      if ((uVar14 & 1) != 0) {
        do {
          uVar14 = (ulong)uStack_44c;
          pdVar10 = pdStack_448;
          FUN_106aef138();
          (*pcRam00000001136c51f0)();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
            return;
          }
          ___stack_chk_fail();
          iVar16 = (int)uVar14;
          if (iVar16 == 0) {
            __Unwind_Resume();
            pdStack_448 = (double *)0x0;
            uStack_44c = 0;
            *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
            *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
            *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
            *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
            *(undefined1 **)(puVar4 + -0x40) = unaff_x24;
            *(undefined1 **)(puVar4 + -0x38) = unaff_x23;
            *(double **)(puVar4 + -0x30) = unaff_x22;
            *(ulong *)(puVar4 + -0x28) = uVar14;
            *(ulong *)(puVar4 + -0x20) = uVar13;
            *(undefined1 **)(puVar4 + -0x18) = auStack_450;
            *(undefined1 **)(puVar4 + -0x10) = &stack0xfffffffffffffff0;
            *(code **)(puVar4 + -8) = FUN_106aeaf8c;
            ppdVar12 = &pdStack_448;
            func_0x000106aef2f4();
            uVar9 = (uint)ppdVar12;
            uVar14 = (ulong)*extraout_x8;
            func_0x0001001d32d8();
            uVar13 = uVar14;
            _task_threads(uVar14,&pdStack_448,&uStack_44c);
            if ((int)uVar13 == 0) {
              func_0x000106aef2e0();
              for (uVar17 = 0; uVar17 < uStack_44c; uVar17 = uVar17 + 1) {
                uVar1 = *(uint *)((long)pdStack_448 + uVar17 * 4);
                if (((uVar1 != uVar9) && (func_0x000106aef2c8(), (uVar13 & 1) == 0)) &&
                   (uVar13 = (ulong)uVar1, _thread_suspend(), (int)uVar13 != 0)) {
                  _mach_error_string();
                  *(ulong *)(puVar4 + -0x70) = (ulong)uVar1;
                  *(ulong *)(puVar4 + -0x68) = uVar13;
                  uVar13 = uVar14;
                  func_0x000106aef294(uVar14,unaff_x23,0xbf);
                }
              }
            }
            else {
              _mach_error_string();
              func_0x000106aef2b4();
              func_0x000106aef2a0();
              func_0x000106aee914();
            }
            func_0x000106aef300();
            return;
          }
          if ((iVar16 == 0x11) || (iVar16 == 0x10)) {
            ___cxa_begin_catch();
            (**(code **)((long)*pdVar10 + 0x10))();
            unaff_x23 = auStack_440;
            pdVar11 = (double *)auStack_440;
            _strncpy(pdVar11,pdVar10,1000);
            pdVar10 = pdVar11;
          }
          else {
            if (iVar16 == 0xf) {
              ___cxa_begin_catch();
              uVar14 = (ulong)*(char *)pdVar10;
LAB_106aeada0:
              puVar3 = (ulong *)(puVar4 + -0x10);
              puVar4 = puVar4 + -0x10;
              *puVar3 = uVar14;
              pcVar15 = "%d";
            }
            else {
              if (iVar16 == 0xe) {
                ___cxa_begin_catch();
                uVar14 = (ulong)*(short *)pdVar10;
                goto LAB_106aeada0;
              }
              if (iVar16 == 0xd) {
                ___cxa_begin_catch();
                uVar14 = (ulong)(uint)*(float *)pdVar10;
                goto LAB_106aeada0;
              }
              if (iVar16 == 0xc) {
                ___cxa_begin_catch();
                func_0x000106aeafa0();
                pcVar15 = "%ld";
              }
              else if (iVar16 == 0xb) {
                ___cxa_begin_catch();
                func_0x000106aeafa0();
                pcVar15 = "%lld";
              }
              else {
                if (iVar16 == 10) {
                  ___cxa_begin_catch();
                  uVar14 = (ulong)*(byte *)pdVar10;
                }
                else if (iVar16 == 9) {
                  ___cxa_begin_catch();
                  uVar14 = (ulong)*(ushort *)pdVar10;
                }
                else {
                  if (iVar16 != 8) {
                    if (iVar16 == 7) {
                      ___cxa_begin_catch();
                      func_0x000106aeafa0();
                      pcVar15 = "%lu";
                    }
                    else if (iVar16 == 6) {
                      ___cxa_begin_catch();
                      func_0x000106aeafa0();
                      pcVar15 = "%llu";
                    }
                    else {
                      if (iVar16 == 5) {
                        ___cxa_begin_catch();
                        dVar18 = (double)*(float *)pdVar10;
                      }
                      else {
                        if (iVar16 != 4) {
                          if (iVar16 == 3) {
                            ___cxa_begin_catch();
                            pdVar7 = (double *)(puVar4 + -0x10);
                            puVar4 = puVar4 + -0x10;
                            *pdVar7 = *pdVar10;
                            pcVar15 = "%Lf";
                          }
                          else {
                            ___cxa_begin_catch();
                            if (iVar16 != 2) {
                              unaff_x23 = (undefined1 *)0x0;
                              goto LAB_106aeadc0;
                            }
                            plVar8 = (long *)(puVar4 + -0x10);
                            puVar4 = puVar4 + -0x10;
                            *plVar8 = (long)pdVar10;
                            pcVar15 = "%s";
                          }
                          goto LAB_106aeadac;
                        }
                        ___cxa_begin_catch();
                        dVar18 = *pdVar10;
                      }
                      pdVar6 = (double *)(puVar4 + -0x10);
                      puVar4 = puVar4 + -0x10;
                      *pdVar6 = dVar18;
                      pcVar15 = "%f";
                    }
                    goto LAB_106aeadac;
                  }
                  ___cxa_begin_catch();
                  uVar14 = (ulong)(uint)*(float *)pdVar10;
                }
                puVar5 = (ulong *)(puVar4 + -0x10);
                puVar4 = puVar4 + -0x10;
                *puVar5 = uVar14;
                pcVar15 = "%u";
              }
            }
LAB_106aeadac:
            unaff_x23 = auStack_440;
            pdVar10 = (double *)auStack_440;
            _snprintf(pdVar10,1000,pcVar15);
            puVar4 = puVar4 + 0x10;
          }
LAB_106aeadc0:
          ___cxa_end_catch();
          *(undefined1 *)unaff_x22 = *(undefined1 *)((long)unaff_x22 + 1);
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          func_0x0001001d32d8();
          FUN_106aeeb9c();
          func_0x0001001d33a0();
          if (((ulong)pdVar10[0x6d] & 1) == 0) {
            FUN_106af0b98(pdVar10,1);
          }
          uRam00000001136c5250 = 4;
          uRam00000001136c5220 = 0x1136c51f8;
          puRam00000001136c5228 = PTR_DAT_113170118;
          uRam00000001136c5234 = 0;
          puRam00000001136c5238 = puVar4 + -0x4d0;
          uRam00000001136c5258 = uVar13;
          puRam00000001136c5260 = unaff_x23;
          pdRam00000001136c5268 = pdVar10;
          uRam00000001136c52a0 = uVar13;
          FUN_106aea868(0x1136c5220);
          unaff_x22 = pdVar10;
          unaff_x24 = puVar4;
        } while( true );
      }
      goto LAB_106aeacf8;
    }
  }
  FUN_106aeaf8c();
LAB_106aeacf8:
  FUN_106aea7f8(0);
  _bzero(0x1136c5220,0x1e8);
  auStack_440[0] = 0;
  uRam00000001136c51e8 = 0;
  ___cxa_rethrow();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x106aead24);
  (*pcVar2)();
}



/* Entry: 106aeaf8c; end: 106aeaff3;  */

void FUN_106aeaf8c(void)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar5;
  uint *extraout_x8;
  long unaff_x19;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar4;
  
  *(undefined8 *)(unaff_x19 + 8) = 0;
  *(undefined4 *)(unaff_x19 + 4) = 0;
  plVar1 = (long *)(unaff_x19 + 8);
  plVar4 = plVar1;
  func_0x000106aef2f4();
  uVar3 = (uint)plVar4;
  uVar6 = (ulong)*extraout_x8;
  func_0x0001001d32d8();
  uVar5 = uVar6;
  _task_threads(uVar6,plVar1,(uint *)(unaff_x19 + 4));
  if ((int)uVar5 == 0) {
    func_0x000106aef2e0();
    for (uVar8 = 0; uVar8 < *(uint *)(unaff_x19 + 4); uVar8 = uVar8 + 1) {
      uVar2 = *(uint *)(*plVar1 + uVar8 * 4);
      uVar7 = (ulong)uVar2;
      if (((uVar2 != uVar3) && (func_0x000106aef2c8(), (uVar5 & 1) == 0)) &&
         (_thread_suspend(), uVar5 = uVar7, (int)uVar7 != 0)) {
        _mach_error_string();
        uVar5 = uVar6;
        func_0x000106aef294();
      }
    }
  }
  else {
    _mach_error_string();
    func_0x000106aef2b4();
    func_0x000106aef2a0();
    func_0x000106aee914();
  }
  func_0x000106aef300();
  return;
}



/* Entry: 106aeaff4; end: 106aeb0b3;  */

void FUN_106aeaff4(void)

{
  int iVar1;
  int iVar2;
  ulong extraout_x8;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  
  if (uRam00000001136c5554 != 0) {
    puVar5 = (undefined4 *)0x1136c54ac;
    iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
    func_0x0001001d3458();
    uVar3 = extraout_x8;
    for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
      iVar2 = iVar1;
      _task_set_exception_ports(iVar1,puVar5[-0xe],*puVar5,puVar5[0xe],puVar5[0x1c]);
      if (iVar2 != 0) {
        _mach_error_string();
        func_0x000106aeb19c();
      }
      uVar3 = (ulong)uRam00000001136c5554;
      puVar5 = puVar5 + 1;
    }
    uRam00000001136c5554 = 0;
  }
  return;
}



/* Entry: 106aeb0b4; end: 106aeb173;  */

void FUN_106aeb0b4(int param_1)

{
  FUN_106aeaff4();
  func_0x0001001d32d8();
  if ((lRam00000001136c5420 != 0) && (iRam00000001136c5414 != param_1)) {
    if (cRam00000001136c5409 == '\x01') {
      _thread_terminate(iRam00000001136c5414);
    }
    else {
      _pthread_cancel();
    }
    iRam00000001136c5414 = 0;
    lRam00000001136c5420 = 0;
  }
  if ((lRam00000001136c5418 != 0) && (iRam00000001136c5410 != param_1)) {
    if (cRam00000001136c5409 == '\x01') {
      _thread_terminate(iRam00000001136c5410);
    }
    else {
      _pthread_cancel();
    }
    iRam00000001136c5410 = 0;
    lRam00000001136c5418 = 0;
  }
  uRam00000001136c540c = 0;
  return;
}



/* Entry: 106aeb174; end: 106aeb1ab;  */

void FUN_106aeb174(void)

{
  return;
}



/* Entry: 106aeb1ac; end: 106aeb4ff;  */

void FUN_106aeb1ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *unaff_x25;
  undefined *puVar7;
  undefined1 auStack_900 [1216];
  long lStack_440;
  long lStack_428;
  long lStack_420;
  undefined1 auStack_418 [876];
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_95 [37];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if ((bRam00000001136c5aa8 & 1) != 0) {
    if (pcRam000000011381b428 != (code *)0x0) {
      (*pcRam000000011381b428)();
    }
    lVar1 = param_1;
    func_0x00010bf282a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    lVar3 = lVar2 << 3;
    _malloc();
    for (lVar6 = 0; lVar2 != lVar6; lVar6 = lVar6 + 1) {
      lVar4 = lVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282800();
      *(long *)(lVar3 + lVar6 * 8) = lVar4;
      FUN_106aeb500();
    }
    lVar6 = param_1;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    lStack_420 = lVar6;
    FUN_106aeb500();
    lVar6 = param_1;
    func_0x00010c121ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    lStack_428 = lVar6;
    FUN_106aeb500();
    lVar6 = param_1;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    if (lVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar4 = param_1;
      func_0x00010c292820(param_1);
      _objc_retainAutoreleasedReturnValue();
      lStack_a0 = 0;
      func_0x00010bf64b60();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lStack_a0;
      _objc_retain(lStack_a0);
      _objc_release(lVar4);
      if (lVar6 != 0) {
        lStack_440 = lVar6;
        FUN_106aeea5c("ERROR",&UNK_10f3b2702,0x5d,&UNK_10f3b2751,
                      &PTR____CFConstantStringClassReference_110e70158);
      }
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar5 == (undefined *)0x0) {
        lVar4 = param_1;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        lStack_440 = lVar4;
        func_0x00010c25d9e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
      }
      else {
        _objc_alloc();
        func_0x00010c008340();
      }
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      _objc_release(puVar5);
      _objc_release(lVar6);
      FUN_106aeb500();
    }
    uStack_a8 = 0;
    uStack_ac = 0;
    FUN_106aeeda8(&uStack_a8,&uStack_ac);
    FUN_106aea7f8(0);
    func_0x0001001d2990(auStack_95);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    unaff_x25 = auStack_900;
    func_0x0001001d32d8();
    FUN_106aeeb9c();
    FUN_106af095c(auStack_418,lVar3,(long)(int)lVar2,0);
    _bzero(0x1136c5ac8,0x1d8);
    uRam00000001136c5ae8 = 8;
    puRam00000001136c5ac0 = PTR_DAT_113170118;
    lRam00000001136c5b28 = lStack_420;
    lRam00000001136c5af0 = lStack_420;
    lRam00000001136c5af8 = lStack_428;
    puRam00000001136c5ab8 = auStack_95;
    puRam00000001136c5ad0 = unaff_x25;
    puRam00000001136c5b00 = auStack_418;
    puRam00000001136c5b30 = puVar7;
    FUN_106aea868();
    _free(lVar3);
    if (pcRam00000001136c5ab0 != (code *)0x0) {
      (*pcRam00000001136c5ab0)(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x25);
  return;
}



/* Entry: 106aeb500; end: 106aeb523;  */

void FUN_106aeb500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106aeb524; end: 106aeb677;  */

void FUN_106aeb524(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 auStack_540 [1244];
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136c5ca0 & 1) != 0) {
    if (pcRam000000011381b428 != (code *)0x0) {
      (*pcRam000000011381b428)();
    }
    uStack_60 = 0;
    uStack_64 = 0;
    FUN_106aeeda8(&uStack_60,&uStack_64);
    FUN_106aea7f8(0);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    FUN_106aeed58(param_3,auStack_540);
    func_0x000106af0a04(0x1136c5ed8,500,auStack_540);
    _bzero(0x1136c5d00,0x1d8);
    uRam00000001136c5d20 = 2;
    uRam00000001136c5cf0 = 0x1136c5cc8;
    puRam00000001136c5cf8 = PTR_DAT_113170118;
    uRam00000001136c5d04 = 1;
    uRam00000001136c5d18 = *(undefined8 *)(param_2 + 6);
    uRam00000001136c5d80 = *param_2;
    uRam00000001136c5d84 = param_2[2];
    uRam00000001136c5d88 = 0x11381b4fa;
    uRam00000001136c5d38 = 0x1136c5ed8;
    puRam00000001136c5d08 = auStack_540;
    uRam00000001136c5d78 = param_3;
    FUN_106aea868(0x1136c5cf0);
    FUN_106aef138(uStack_60,uStack_64);
  }
  _raise(param_1);
  func_0x0001001d3310(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106aeb678; end: 106aeb693;  */

void FUN_106aeb678(void)

{
  return;
}



/* Entry: 106aeb694; end: 106aeb77f;  */

void FUN_106aeb694(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lStack_68;
  uint uStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  
  uVar3 = uRam00000001136c6268;
  uVar2 = uRam00000001136c6260;
  uVar1 = uRam00000001136c6250;
  iVar4 = (int)param_1;
  if ((bRam00000001136c6240 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x108) = uRam00000001136c6258;
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    *(undefined8 *)(param_1 + 0x118) = uVar3;
    *(undefined8 *)(param_1 + 0x110) = uVar2;
    uVar1 = uRam00000001136c6270;
    *(undefined8 *)(param_1 + 0x128) = uRam00000001136c6278;
    *(undefined8 *)(param_1 + 0x120) = uVar1;
    *(undefined1 *)(param_1 + 0x130) = uRam00000001136c6280;
    uVar1 = uRam00000001136c6288;
    *(undefined8 *)(param_1 + 0x140) = uRam00000001136c6290;
    *(undefined8 *)(param_1 + 0x138) = uVar1;
    uVar1 = uRam00000001136c6298;
    *(undefined8 *)(param_1 + 0x150) = uRam00000001136c62a0;
    *(undefined8 *)(param_1 + 0x148) = uVar1;
    uVar1 = uRam00000001136c62a8;
    *(undefined8 *)(param_1 + 0x160) = uRam00000001136c62b0;
    *(undefined8 *)(param_1 + 0x158) = uVar1;
    uVar1 = uRam00000001136c62b8;
    *(undefined8 *)(param_1 + 0x170) = uRam00000001136c62c0;
    *(undefined8 *)(param_1 + 0x168) = uVar1;
    uVar1 = uRam00000001136c62c8;
    *(undefined8 *)(param_1 + 0x180) = uRam00000001136c62d0;
    *(undefined8 *)(param_1 + 0x178) = uVar1;
    uVar1 = uRam00000001136c62d8;
    *(undefined8 *)(param_1 + 400) = uRam00000001136c62e0;
    *(undefined8 *)(param_1 + 0x188) = uVar1;
    uVar1 = uRam00000001136c62e8;
    *(undefined8 *)(param_1 + 0x1a0) = uRam00000001136c62f0;
    *(undefined8 *)(param_1 + 0x198) = uVar1;
    *(undefined8 *)(param_1 + 0x1a8) = uRam00000001136c62f8;
    *(undefined8 *)(param_1 + 0x1b0) = uRam00000001136c6300;
    uVar1 = uRam00000001136c6308;
    *(undefined8 *)(param_1 + 0x1c0) = uRam00000001136c6310;
    *(undefined8 *)(param_1 + 0x1b8) = uVar1;
    *(undefined8 *)(param_1 + 0x1d8) = uRam00000001136c6318;
    func_0x000106aeb854();
    lVar5 = lStack_68 * (ulong)uStack_60;
    if (iVar4 == 0) {
      lVar5 = 0;
    }
    *(long *)(param_1 + 0x1c8) = lVar5;
    func_0x000106aeb854();
    lVar5 = 0;
    if (iVar4 != 0) {
      lVar5 = lStack_68 *
              (ulong)(uStack_60 + iStack_5c + (int)uStack_58 + (int)((ulong)uStack_58 >> 0x20));
    }
    *(long *)(param_1 + 0x1d0) = lVar5;
  }
  return;
}



/* Entry: 106aeb780; end: 106aeb837;  */

bool FUN_106aeb780(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 uStack_34;
  
  uVar2 = param_1;
  _mach_host_self();
  uVar3 = uVar2;
  _host_page_size();
  if ((int)uVar3 == 0) {
    uStack_34 = 0xf;
    _host_statistics(uVar2,2,param_1,&uStack_34);
    bVar1 = (int)uVar2 == 0;
    if ((int)uVar2 != 0) {
      _mach_error_string();
      FUN_106aeb838();
      FUN_106aeea5c(extraout_x8_00);
    }
  }
  else {
    _mach_error_string();
    FUN_106aeb838();
    FUN_106aeea5c(extraout_x8);
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106aeb838; end: 106aeb85f;  */

void FUN_106aeb838(void)

{
  return;
}



/* Entry: 106aeb860; end: 106aeb9fb;  */

void FUN_106aeb860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 auStack_f90 [1232];
  undefined1 auStack_ac0 [1216];
  undefined1 *puStack_600;
  undefined1 *puStack_5f8;
  undefined *puStack_5f0;
  undefined1 auStack_5e8 [4];
  undefined1 uStack_5e4;
  undefined1 uStack_5e2;
  undefined1 *puStack_5e0;
  undefined1 *puStack_5d8;
  undefined4 uStack_5c8;
  undefined8 uStack_5b8;
  undefined1 *puStack_5b0;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 auStack_410 [876];
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  undefined1 auStack_95 [37];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &puStack_600;
  if (cRam000000011381b8fa == '\x01') {
    puStack_a0 = (undefined8 *)0x0;
    uStack_a4 = 0;
    iVar3 = param_6;
    puStack_600 = (undefined1 *)&puStack_600;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    if (iVar3 != 0) {
      FUN_106aeeed4(&puStack_a0,&uStack_a4,auStack_ac0);
    }
    if (param_7 != 0) {
      FUN_106aea7f8(0);
    }
    func_0x0001001d2990(auStack_95);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    func_0x0001001d32d8();
    FUN_106aeeb9c();
    FUN_106af0b98(auStack_410,0);
    _bzero(auStack_5e8,0x1d8);
    uStack_5c8 = 0x20;
    puStack_5f8 = auStack_95;
    puStack_5f0 = PTR_DAT_113170118;
    if (param_6 != 0) {
      puStack_5d8 = auStack_ac0;
    }
    uStack_5e4 = 0;
    puStack_5b0 = auStack_410;
    uStack_5e2 = (undefined1)param_6;
    puStack_5e0 = auStack_f90;
    uStack_5b8 = param_2;
    uStack_558 = param_1;
    uStack_550 = param_3;
    uStack_548 = param_4;
    uStack_540 = param_5;
    (*pcRam000000011381b480)();
    if (param_6 != 0) {
      FUN_106aef138(puStack_a0,uStack_a4);
    }
    ppuVar1 = (undefined1 **)puStack_600;
    puVar2 = auStack_f90;
    if (param_7 != 0) goto LAB_106aeb9f8;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = (undefined1 *)ppuVar1;
LAB_106aeb9f8:
  _abort();
  *(undefined1 **)(puVar2 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar2 + -8) = FUN_106aeb9fc;
  _NXGetLocalArchInfo();
  return;
}



/* Entry: 106aeb9fc; end: 106aeba17;  */

void FUN_106aeb9fc(void)

{
  _NXGetLocalArchInfo();
  return;
}



/* Entry: 106aeba18; end: 106aebadb;  */

bool FUN_106aeba18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  _thread_get_state(param_1,param_3,param_2,&uStack_24);
  if ((int)param_1 != 0) {
    _mach_error_string();
    func_0x000106aee914(&UNK_10f3b2983,&UNK_10f3b2989,0x3a,&UNK_10f3b29c0,&UNK_10f3b2a39);
  }
  return (int)param_1 == 0;
}



/* Entry: 106aebadc; end: 106aebc27;  */

ulong FUN_106aebadc(long param_1,int param_2)

{
  if (0x1d < param_2) {
    switch(param_2) {
    case 0x1e:
      return *(ulong *)(param_1 + 0x298);
    case 0x1f:
      return *(ulong *)(param_1 + 0x2a0);
    case 0x20:
      return *(ulong *)(param_1 + 0x2a8);
    case 0x21:
      return *(ulong *)(param_1 + 0x2b0);
    case 0x22:
      return (ulong)*(uint *)(param_1 + 0x2b8);
    default:
      func_0x000106aebc30();
      func_0x000106aebc44();
      func_0x000106aee914();
      return 0;
    }
  }
  return *(ulong *)(param_1 + (long)param_2 * 8 + 0x1b0);
}



/* Entry: 106aebc28; end: 106aebc57;  */

void FUN_106aebc28(void)

{
  return;
}



/* Entry: 106aebc58; end: 106aebcfb;  */

undefined8 FUN_106aebc58(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  lVar2 = param_1;
  if (lRam000000011381b900 == 0) {
    uRam000000011381b908 = 0x19;
    lVar2 = 400;
    _malloc();
    lRam000000011381b900 = lVar2;
  }
  iVar1 = (int)lVar2;
  uRam000000011381b910 = 0;
  if (lRam000000011381b918 == 0) {
    lRam000000011381b918 = param_1;
    __dyld_register_func_for_add_image(FUN_106aebcfc);
  }
  else {
    lRam000000011381b918 = param_1;
    __dyld_image_count();
    uVar5 = 0;
    while (iVar4 = (int)uVar5, iVar1 != iVar4) {
      uVar3 = uVar5;
      __dyld_get_image_header(uVar5);
      __dyld_get_image_vmaddr_slide(uVar5);
      FUN_106aebcfc(uVar3,uVar5);
      uVar5 = (ulong)(iVar4 + 1);
    }
  }
  return 0;
}



/* Entry: 106aebcfc; end: 106aebe27;  */

void FUN_106aebcfc(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  lVar3 = param_1;
  _dladdr(param_1,auStack_60);
  if ((int)lVar3 != 0) {
    piVar4 = (int *)0x0;
    piVar5 = (int *)0x0;
    uStack_70 = 0;
    uStack_68 = 0;
    piVar1 = (int *)(param_1 + 0x20);
    for (iVar2 = *(int *)(param_1 + 0x10); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*piVar1 == 2) {
        puVar6 = &uStack_68;
        piVar4 = piVar1;
LAB_106aebd68:
        *puVar6 = piVar1;
      }
      else if (*piVar1 == 0xb) {
        puVar6 = &uStack_70;
        piVar5 = piVar1;
        goto LAB_106aebd68;
      }
      if (((piVar4 != (int *)0x0) && (piVar5 != (int *)0x0)) && (piVar5[0xf] != 0)) {
        func_0x000106aec1c0();
        func_0x000106aec1c0();
        if ((lVar3 != 0) && (func_0x000106aec1c8(), (int)lVar3 != 0)) {
          func_0x000106aec1a0(0);
          lVar3 = 0;
          func_0x000106aec1a0();
        }
        func_0x000106aec1c0();
        if (lVar3 == 0) {
          return;
        }
        func_0x000106aec1c8();
        if ((int)lVar3 == 0) {
          return;
        }
        func_0x000106aec1a0(0);
        func_0x000106aec1a0(0);
        return;
      }
      piVar1 = (int *)((long)piVar1 + (ulong)(uint)piVar1[1]);
    }
  }
  return;
}



/* Entry: 106aebe28; end: 106aebedb;  */

bool FUN_106aebe28(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar1 = param_1 + 8;
  _strcmp(lVar1,&UNK_10f3b2c13);
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + 8;
    _strcmp(lVar1,&UNK_10f3b2c1a);
    if ((int)lVar1 != 0) {
      return false;
    }
  }
  lVar3 = 0;
  lVar6 = 0;
  lVar1 = param_1 + 0x48;
  lVar5 = (ulong)*(uint *)(param_1 + 0x40) + 1;
  do {
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return false;
    }
    lVar2 = lVar6;
    lVar4 = lVar1;
    plVar7 = param_3;
    if ((*(char *)(lVar1 + 0x40) == '\x06') ||
       (lVar2 = lVar1, lVar4 = lVar3, plVar7 = param_2, *(char *)(lVar1 + 0x40) == '\a')) {
      *plVar7 = lVar1;
      lVar3 = lVar4;
      lVar6 = lVar2;
    }
    lVar1 = lVar1 + 0x50;
  } while ((lVar3 == 0) || (lVar6 == 0));
  return lVar5 != 0;
}



/* Entry: 106aebedc; end: 106aec0bf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_106aebedc(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint auStack_a0 [2];
  undefined8 uStack_98;
  undefined4 uStack_78;
  undefined1 auStack_74 [4];
  long alStack_70 [2];
  
  uVar12 = param_1 + 0x10;
  _strcmp(uVar12,&UNK_10f3b2c1a);
  uVar2 = *(uint *)(param_1 + 0x44);
  param_2 = *(long *)(param_1 + 0x20) + param_2;
  if ((int)uVar12 == 0) {
    iVar6 = *(int *)PTR__mach_task_self__11034c5c8;
    alStack_70[1] = 0;
    uStack_78 = 9;
    alStack_70[0] = param_2;
    _vm_region_64(iVar6,alStack_70,alStack_70 + 1,9,auStack_a0,&uStack_78,auStack_74);
    _mprotect(param_2,*(undefined8 *)(param_1 + 0x28),3);
    uVar9 = auStack_a0[0] & 7;
    if (iVar6 != 0) {
      uVar9 = 1;
    }
  }
  else {
    uVar9 = 1;
  }
  uVar10 = 0;
  while( true ) {
    if (*(ulong *)(param_1 + 0x28) >> 3 <= uVar10) break;
    uVar3 = *(uint *)(param_5 + (ulong)uVar2 * 4 + uVar10 * 4);
    if (((((uVar3 != 0x80000000 && uVar3 != 0xc0000000) && uVar3 != 0x40000000) &&
         (pcVar7 = (char *)(param_4 + (ulong)*(uint *)(param_3 + (ulong)uVar3 * 0x10)),
         *pcVar7 != '\0')) && (pcVar7 = pcVar7 + 1, *pcVar7 != '\0')) &&
       (_strcmp(pcVar7,&UNK_10f3b2c27), (int)pcVar7 == 0)) {
      lVar8 = param_1;
      _dladdr(param_1,auStack_a0);
      uVar5 = uStack_98;
      lVar4 = lRam000000011381b910;
      if ((int)lVar8 != 0) {
        uVar11 = *(undefined8 *)(param_2 + uVar10 * 8);
        if (lRam000000011381b910 == lRam000000011381b908) {
          lRam000000011381b908 = lRam000000011381b910 << 1;
          _realloc(lRam000000011381b900,lRam000000011381b910 << 5);
        }
        lRam000000011381b910 = lVar4 + 1;
        puVar1 = (undefined8 *)(lRam000000011381b900 + lVar4 * 0x10);
        *puVar1 = uVar5;
        puVar1[1] = uVar11;
        uVar12 = uVar12 & 0xffffffff;
      }
      *(code **)(param_2 + uVar10 * 8) = FUN_106aec0c0;
    }
    uVar10 = (ulong)((int)uVar10 + 1);
  }
  if ((int)uVar12 == 0) {
    _mprotect(param_2,*(ulong *)(param_1 + 0x28),uVar9);
  }
  return;
}



/* Entry: 106aec0c0; end: 106aec19f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_106aec0c0(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 *puVar13;
  uint auStack_110 [2];
  undefined8 uStack_108;
  undefined4 uStack_e8;
  undefined1 auStack_e4 [4];
  long alStack_e0 [2];
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_48 [8];
  undefined1 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (*pcRam000000011381b918)();
  puVar8 = auStack_48;
  _backtrace(puVar8,2);
  if ((1 < (int)puVar8) &&
     (_dladdr(puStack_40,auStack_68), puVar8 = puStack_40, (int)puStack_40 != 0)) {
    puVar1 = (undefined8 *)(lRam000000011381b900 + 8);
    for (lVar11 = lRam000000011381b910; lVar11 != 0; lVar11 = lVar11 + -1) {
      if (puVar1[-1] == lStack_60) {
        if ((code *)*puVar1 != (code *)0x0) {
          puVar8 = param_1;
          (*(code *)*puVar1)(param_1,param_2,param_3);
        }
        break;
      }
      puVar1 = puVar1 + 2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar13 = puVar8 + 0x10;
    _strcmp(puVar13,&UNK_10f3b2c1a);
    uVar2 = *(uint *)(puVar8 + 0x44);
    param_3 = *(long *)(puVar8 + 0x20) + param_3;
    if ((int)puVar13 == 0) {
      iVar5 = *(int *)PTR__mach_task_self__11034c5c8;
      alStack_e0[1] = 0;
      uStack_e8 = 9;
      alStack_e0[0] = param_3;
      _vm_region_64(iVar5,alStack_e0,alStack_e0 + 1,9,auStack_110,&uStack_e8,auStack_e4);
      _mprotect(param_3,*(undefined8 *)(puVar8 + 0x28),3);
      uVar9 = auStack_110[0] & 7;
      if (iVar5 != 0) {
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 1;
    }
    uVar10 = 0;
    while( true ) {
      if (*(ulong *)(puVar8 + 0x28) >> 3 <= uVar10) break;
      uVar3 = *(uint *)(param_1 + uVar10 * 4 + (ulong)uVar2 * 4 + unaff_x24);
      if (((((uVar3 != 0x80000000 && uVar3 != 0xc0000000) && uVar3 != 0x40000000) &&
           (param_1[(ulong)*(uint *)(param_1 + (ulong)uVar3 * 0x10 + unaff_x22) + unaff_x23] != '\0'
           )) && (pcVar6 = param_1 + (ulong)*(uint *)(param_1 + (ulong)uVar3 * 0x10 + unaff_x22) +
                                     unaff_x23 + 1, *pcVar6 != '\0')) &&
         (_strcmp(pcVar6,&UNK_10f3b2c27), (int)pcVar6 == 0)) {
        puVar7 = puVar8;
        _dladdr(puVar8,auStack_110);
        uVar4 = uStack_108;
        lVar11 = lRam000000011381b910;
        if ((int)puVar7 != 0) {
          uVar12 = *(undefined8 *)(param_3 + uVar10 * 8);
          if (lRam000000011381b910 == lRam000000011381b908) {
            lRam000000011381b908 = lRam000000011381b910 << 1;
            _realloc(lRam000000011381b900,lRam000000011381b910 << 5);
          }
          lRam000000011381b910 = lVar11 + 1;
          puVar1 = (undefined8 *)(lRam000000011381b900 + lVar11 * 0x10);
          *puVar1 = uVar4;
          puVar1[1] = uVar12;
          puVar13 = (undefined1 *)((ulong)puVar13 & 0xffffffff);
        }
        *(code **)(param_3 + uVar10 * 8) = FUN_106aec0c0;
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    }
    if ((int)puVar13 == 0) {
      _mprotect(param_3,*(ulong *)(puVar8 + 0x28),uVar9);
    }
    return;
  }
  return;
}



/* Entry: 106aec1a0; end: 106aec1d3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_106aec1a0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong uVar13;
  uint auStack_a0 [2];
  undefined8 uStack_98;
  undefined4 uStack_78;
  undefined1 auStack_74 [4];
  long alStack_70 [2];
  
  uVar13 = param_1 + 0x10;
  _strcmp(uVar13,&UNK_10f3b2c1a);
  uVar3 = *(uint *)(param_1 + 0x44);
  lVar1 = *(long *)(param_1 + 0x20) + unaff_x19;
  if ((int)uVar13 == 0) {
    iVar7 = *(int *)PTR__mach_task_self__11034c5c8;
    alStack_70[1] = 0;
    uStack_78 = 9;
    alStack_70[0] = lVar1;
    _vm_region_64(iVar7,alStack_70,alStack_70 + 1,9,auStack_a0,&uStack_78,auStack_74);
    _mprotect(lVar1,*(undefined8 *)(param_1 + 0x28),3);
    uVar10 = auStack_a0[0] & 7;
    if (iVar7 != 0) {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 1;
  }
  uVar11 = 0;
  while( true ) {
    if (*(ulong *)(param_1 + 0x28) >> 3 <= uVar11) break;
    uVar4 = *(uint *)(unaff_x21 + unaff_x24 + (ulong)uVar3 * 4 + uVar11 * 4);
    if (((((uVar4 != 0x80000000 && uVar4 != 0xc0000000) && uVar4 != 0x40000000) &&
         (pcVar8 = (char *)(unaff_x21 + unaff_x23 +
                           (ulong)*(uint *)(unaff_x21 + unaff_x22 + (ulong)uVar4 * 0x10)),
         *pcVar8 != '\0')) && (pcVar8 = pcVar8 + 1, *pcVar8 != '\0')) &&
       (_strcmp(pcVar8,&UNK_10f3b2c27), (int)pcVar8 == 0)) {
      lVar9 = param_1;
      _dladdr(param_1,auStack_a0);
      uVar6 = uStack_98;
      lVar5 = lRam000000011381b910;
      if ((int)lVar9 != 0) {
        uVar12 = *(undefined8 *)(lVar1 + uVar11 * 8);
        if (lRam000000011381b910 == lRam000000011381b908) {
          lRam000000011381b908 = lRam000000011381b910 << 1;
          _realloc(lRam000000011381b900,lRam000000011381b910 << 5);
        }
        lRam000000011381b910 = lVar5 + 1;
        puVar2 = (undefined8 *)(lRam000000011381b900 + lVar5 * 0x10);
        *puVar2 = uVar6;
        puVar2[1] = uVar12;
        uVar13 = uVar13 & 0xffffffff;
      }
      *(code **)(lVar1 + uVar11 * 8) = FUN_106aec0c0;
    }
    uVar11 = (ulong)((int)uVar11 + 1);
  }
  if ((int)uVar13 == 0) {
    _mprotect(lVar1,*(ulong *)(param_1 + 0x28),uVar10);
  }
  return;
}


