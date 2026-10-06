/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ebfd40; end: 108ec009b;  */

void FUN_108ebfd40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  _objc_retain();
  FUN_108ebec30();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf44640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bf64de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108ec009c; end: 108ec00e3;  */

undefined8 FUN_108ec009c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110efe9f8,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ec00e4; end: 108ec011b;  */

double FUN_108ec00e4(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  func_0x00010bfb2cc0(param_1,param_2,&PTR____CFConstantStringClassReference_110efea18,0);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return (double)fVar1;
}



/* Entry: 108ec011c; end: 108ec0143;  */

long FUN_108ec011c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110efea38,0,0);
  return (long)(int)param_1;
}



/* Entry: 108ec0144; end: 108ec019b;  */

void FUN_108ec0144(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110efea58,0,0);
  return;
}



/* Entry: 108ec019c; end: 108ec01e3;  */

float FUN_108ec019c(long param_1,undefined8 param_2)

{
  float fVar1;
  
  if (param_1 != 0) {
    fVar1 = 4.0;
    func_0x00010bfb2cc0(param_1,param_2,&PTR____CFConstantStringClassReference_110efeab8,0);
    if (fVar1 <= 1.0) {
      fVar1 = 4.0;
    }
    return fVar1;
  }
  return 4.0;
}



/* Entry: 108ec01e4; end: 108ec022f;  */

double FUN_108ec01e4(long param_1,undefined8 param_2)

{
  float fVar1;
  double dVar2;
  
  if (param_1 != 0) {
    fVar1 = 60.0;
    func_0x00010bfb2cc0(param_1,param_2,&PTR____CFConstantStringClassReference_110efead8,0);
    dVar2 = (double)fVar1;
    if (fVar1 <= 0.0) {
      dVar2 = 60.0;
    }
    return dVar2;
  }
  return 60.0;
}



/* Entry: 108ec0230; end: 108ec0423;  */

void FUN_108ec0230(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126dc600;
  _objc_opt_new();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110efeaf8;
  FUN_108ec0424(&PTR____CFConstantStringClassReference_110efeaf8,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110efeb18;
  FUN_108ec0424(&PTR____CFConstantStringClassReference_110efeb18,3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110efeb38;
  FUN_108ec0424(&PTR____CFConstantStringClassReference_110efeb38,4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110efeb58;
  FUN_108ec0424(&PTR____CFConstantStringClassReference_110efeb58,5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110efeb78;
  FUN_108ec0424(&PTR____CFConstantStringClassReference_110efeb78,6);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110efeb98;
  FUN_108ec0424(&PTR____CFConstantStringClassReference_110efeb98,4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110efebb8;
  FUN_108ec0424(&PTR____CFConstantStringClassReference_110efebb8,0xb);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc600(puVar1);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126dc608;
    _objc_retain();
    _objc_opt_new(puVar1);
    func_0x00010c1bbd60();
    _objc_release(ppuVar2);
    func_0x00010c1cfc80(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ec0424; end: 108ec0883;  */

void FUN_108ec0424(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc608;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c1bbd60();
  _objc_release(param_1);
  func_0x00010c1cfc80(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ec0884; end: 108ec08ab;  */

long FUN_108ec0884(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110efecf8,0,0);
  return (long)(int)param_1;
}



/* Entry: 108ec08ac; end: 108ec08d3;  */

undefined8 FUN_108ec08ac(void)

{
  return 0x7080;
}



/* Entry: 108ec08d4; end: 108ec08fb;  */

uint FUN_108ec08d4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110efed18,0,0);
  return (uint)param_1 & ((int)(uint)param_1 >> 0x1f ^ 0xffffffffU);
}



/* Entry: 108ec08fc; end: 108ec0917;  */

void FUN_108ec08fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110efed38,0,0);
  return;
}



/* Entry: 108ec0918; end: 108ec093f;  */

long FUN_108ec0918(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110efed58,10,0);
  return (long)(int)param_1;
}



/* Entry: 108ec0940; end: 108ec0987;  */

undefined8 FUN_108ec0940(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110efed78,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ec0988; end: 108ec09b3;  */

uint FUN_108ec0988(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110efed98,0,0);
  uVar1 = (uint)param_1;
  if (1 < uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 108ec09b4; end: 108ec0b17;  */

undefined * FUN_108ec09b4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110efedb8,
                      &PTR____CFConstantStringClassReference_110efeed8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae740;
  _objc_opt_new(PTR_PTR_1126ae740);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = param_1;
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar3);
        }
        uVar6 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        uVar5 = uVar6;
        func_0x00010c067ec0();
        if ((uint)uVar5 < 8) {
          func_0x00010c067ec0(uVar6);
          func_0x00010befc800(puVar2,param_2,uVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  _objc_release(param_1);
  iVar1 = (int)param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010c067f00();
  return (undefined *)(long)iVar1;
}



/* Entry: 108ec0b18; end: 108ec0b8f;  */

long FUN_108ec0b18(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110efedd8,0x7080,0);
  return (long)(int)param_1;
}



/* Entry: 108ec0b90; end: 108ec0cf3;  */

undefined * FUN_108ec0b90(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110efee38,
                      &PTR____CFConstantStringClassReference_110efeed8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae740;
  _objc_opt_new(PTR_PTR_1126ae740);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = param_1;
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar3);
        }
        uVar6 = *(undefined8 *)(lStack_118 + lVar8 * 8);
        uVar5 = uVar6;
        func_0x00010c067ec0();
        if ((uint)uVar5 < 8) {
          func_0x00010c067ec0(uVar6);
          func_0x00010befc800(puVar2,param_2,uVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  _objc_release(param_1);
  iVar1 = (int)param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010c067f00();
  return (undefined *)(long)iVar1;
}



/* Entry: 108ec0cf4; end: 108ec0d93;  */

long FUN_108ec0cf4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110efee58,0x7080,0);
  return (long)(int)param_1;
}



/* Entry: 108ec0d94; end: 108ec0e27;  */

void FUN_108ec0d94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110efeef8,1,0);
  return;
}



/* Entry: 108ec0e28; end: 108ec0e57;  */

long FUN_108ec0e28(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110efeff8,0,0);
  uVar2 = (int)param_1 - 1;
  lVar1 = 0;
  if (uVar2 < 8) {
    lVar1 = (ulong)uVar2 + 1;
  }
  return lVar1;
}



/* Entry: 108ec0e58; end: 108ec0e6b;  */

void FUN_108ec0e58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110efefd8,0,0);
  return;
}



/* Entry: 108ec0e6c; end: 108ec0e93;  */

double FUN_108ec0e6c(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  func_0x00010bfb2cc0(0,param_1,param_2,&PTR____CFConstantStringClassReference_110eff018,0);
  return (double)fVar1;
}



/* Entry: 108ec0e94; end: 108ec0f2b;  */

void FUN_108ec0e94(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110eff038,0,0);
    return;
  }
  return;
}



/* Entry: 108ec0f2c; end: 108ec1013;  */

double FUN_108ec0f2c(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  double dVar2;
  
  if (param_2 == 0) {
    dVar2 = 2.0;
  }
  else {
    func_0x00010c0b84a0(param_2,param_3,&PTR____CFConstantStringClassReference_110eff0f8,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar2 = (double)param_1;
    _objc_release(lVar1);
    _objc_release(param_2);
  }
  return dVar2;
}



/* Entry: 108ec1014; end: 108ec102f;  */

void FUN_108ec1014(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110eff138,0,0);
    return;
  }
  return;
}



/* Entry: 108ec1030; end: 108ec109b;  */

long FUN_108ec1030(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  if (param_1 != 0) {
    func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eff158,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return lVar2;
}



/* Entry: 108ec109c; end: 108ec10d3;  */

void FUN_108ec109c(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110eff178,0,0);
    return;
  }
  return;
}



/* Entry: 108ec10d4; end: 108ec1213;  */

void FUN_108ec10d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_38;
  
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eff1b8,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126dc610;
    _objc_alloc(PTR_PTR_1126dc610);
    lVar3 = param_1;
    func_0x00010c296d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    func_0x00010c008360(puVar2,param_2,lVar3,&lStack_38);
    lVar1 = lStack_38;
    _objc_release(lVar3);
    puVar4 = (undefined *)0x0;
    if (lVar1 == 0) {
      _objc_retain(puVar2);
      puVar4 = puVar2;
    }
    _objc_release(puVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108ec1214; end: 108ec124b;  */

void FUN_108ec1214(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110eff1f8,0,0);
    return;
  }
  return;
}



/* Entry: 108ec124c; end: 108ec1273;  */

long FUN_108ec124c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110eff238,0x7ffffffe,0)
  ;
  return (long)(int)param_1;
}



/* Entry: 108ec1274; end: 108ec1337;  */

void FUN_108ec1274(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_38;
  
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c1195e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eff258,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126dc618;
    _objc_alloc(PTR_PTR_1126dc618);
    lVar3 = param_1;
    func_0x00010c296d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = 0;
    func_0x00010c008360(puVar2,param_2,lVar3,&lStack_38);
    lVar1 = lStack_38;
    _objc_release(lVar3);
    puVar4 = (undefined *)0x0;
    if (lVar1 == 0) {
      _objc_retain(puVar2);
      puVar4 = puVar2;
    }
    _objc_release(puVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108ec1338; end: 108ec1353;  */

void FUN_108ec1338(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110eff278,0,0);
    return;
  }
  return;
}



/* Entry: 108ec1354; end: 108ec1473;  */

void FUN_108ec1354(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110eff298,
                        &PTR____CFConstantStringClassReference_110daafd8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c25d0a0(param_1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (lVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010bf44740(lVar1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf43280();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      if (lVar4 == 0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,lVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108ec1474; end: 108ec1517;  */

void FUN_108ec1474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c067fc0(param_2);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c071ae0();
  _objc_release(param_2);
  _objc_release(puVar3);
  if ((int)puVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ec1518; end: 108ec1587;  */

long FUN_108ec1518(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eff2d8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf1f3c0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 108ec1588; end: 108ec159b;  */

void FUN_108ec1588(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eff2f8,0,0);
  return;
}



/* Entry: 108ec159c; end: 108ec15f7;  */

long FUN_108ec159c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110eff318,1,0);
  return (long)(int)param_1;
}



/* Entry: 108ec15f8; end: 108ec1613;  */

void FUN_108ec15f8(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110eff358,0,0);
    return;
  }
  return;
}



/* Entry: 108ec1614; end: 108ec16a3;  */

void FUN_108ec1614(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x00010c067f00(param_2,param_3,&PTR____CFConstantStringClassReference_110eff378,0,0);
  puVar1 = PTR__kCMTimeRangeZero_110348668;
  if ((int)param_2 == 0) {
    uVar2 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
    uVar4 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
    uVar3 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
    param_1[1] = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    uVar2 = *(undefined8 *)(puVar1 + 0x20);
    param_1[5] = *(undefined8 *)(puVar1 + 0x28);
    param_1[4] = uVar2;
  }
  else {
    _CMTimeMakeWithSeconds(auStack_38,(double)(int)param_2,600);
    uStack_48 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_50 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_40 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    _CMTimeRangeMake(param_1,&uStack_50,auStack_38);
  }
  return;
}



/* Entry: 108ec16a4; end: 108ec172f;  */

void FUN_108ec16a4(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110eff398,0,0);
    return;
  }
  return;
}



/* Entry: 108ec1730; end: 108ec175b;  */

long FUN_108ec1730(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110eff458,0,0);
    lVar1 = (long)(int)param_1;
  }
  return lVar1;
}



/* Entry: 108ec175c; end: 108ec17a7;  */

void FUN_108ec175c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eff438,1,0);
  return;
}



/* Entry: 108ec17a8; end: 108ec182b;  */

bool FUN_108ec17a8(undefined8 param_1,ulong param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110eff4b8,0,0);
  return (param_2 & (long)(int)param_1) != 0;
}



/* Entry: 108ec182c; end: 108ec1897;  */

bool FUN_108ec182c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eff4f8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar2 == 0;
}



/* Entry: 108ec1898; end: 108ec18eb;  */

void FUN_108ec1898(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110eff518,
             &PTR____CFConstantStringClassReference_110dd5138,0);
  return;
}



/* Entry: 108ec18ec; end: 108ec1953;  */

undefined8 FUN_108ec18ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eff5d8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108ec1954; end: 108ec198f;  */

void FUN_108ec1954(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110eff5f8,0,0);
  return;
}



/* Entry: 108ec1990; end: 108ec19df;  */

long FUN_108ec1990(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110eff658,0x1e,0);
  return (long)(int)param_1;
}



/* Entry: 108ec19e0; end: 108ec1a0f;  */

void FUN_108ec19e0(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110eff6b8,0,0);
    return;
  }
  return;
}



/* Entry: 108ec1a10; end: 108ec1a6b;  */

long FUN_108ec1a10(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110eff6f8,10,0);
  return (long)(int)param_1;
}



/* Entry: 108ec1a6c; end: 108ec1aa3;  */

long FUN_108ec1a6c(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110eff738,1,0);
    return param_1;
  }
  return 1;
}



/* Entry: 108ec1aa4; end: 108ec1b0f;  */

undefined ** FUN_108ec1aa4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110eff7d8,
                      &PTR____CFConstantStringClassReference_110df4838,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0720c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110eff778;
  if ((int)uVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eff798;
  }
  _objc_release(param_1);
  return ppuVar1;
}



/* Entry: 108ec1b10; end: 108ec1b1b;  */

undefined ** FUN_108ec1b10(void)

{
  return &PTR____CFConstantStringClassReference_110eff7f8;
}



/* Entry: 108ec1b1c; end: 108ec1b73;  */

undefined8 FUN_108ec1b1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110eff7d8,
                      &PTR____CFConstantStringClassReference_110df4838,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ec1b74; end: 108ec1bdf;  */

void FUN_108ec1b74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110eff818,
             &PTR____CFConstantStringClassReference_110eff7b8,0);
  return;
}



/* Entry: 108ec1be0; end: 108ec1c5b;  */

long FUN_108ec1be0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0xe;
  }
  else {
    func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eff898,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (lVar1 == 0) {
      lVar2 = 0xe;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c067ec0(lVar1);
      lVar2 = (long)(int)lVar2;
    }
    _objc_release(lVar1);
  }
  return lVar2;
}



/* Entry: 108ec1c5c; end: 108ec1c77;  */

void FUN_108ec1c5c(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110eff8b8,0,0);
    return;
  }
  return;
}



/* Entry: 108ec1c78; end: 108ec1ce3;  */

long FUN_108ec1c78(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  if (param_1 != 0) {
    func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eff8f8,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf1f3c0();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  return lVar2;
}



/* Entry: 108ec1ce4; end: 108ec1d73;  */

undefined8 FUN_108ec1ce4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_2 == 0) {
    param_1 = 0x3ecccccd;
  }
  else {
    func_0x00010c0b84a0(param_2,param_3,&PTR____CFConstantStringClassReference_110eff8d8,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    if (lVar1 == 0) {
      param_1 = 0x3ecccccd;
    }
    else {
      func_0x00010bfb2c80(lVar1);
    }
    _objc_release(lVar1);
  }
  return param_1;
}



/* Entry: 108ec1d74; end: 108ec1db3;  */

void FUN_108ec1d74(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110eff938,
                        &PTR____CFConstantStringClassReference_110eff978,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ec1db4; end: 108ec1e3f;  */

void FUN_108ec1db4(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  if (param_1 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110eff978;
  }
  else {
    func_0x00010c0b84a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eff938,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110eff978;
    }
    else {
      ppuVar2 = ppuVar1;
      func_0x00010c25d700(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108ec1e40; end: 108ec1e5b;  */

void FUN_108ec1e40(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110eff958,0,0);
    return;
  }
  return;
}



/* Entry: 108ec1e5c; end: 108ec1f47;  */

double FUN_108ec1e5c(long param_1,undefined8 param_2)

{
  float fVar1;
  
  if (param_1 != 0) {
    fVar1 = 1.9025133e+09;
    func_0x00010bfb2cc0(0x4ee2cc19,param_1,param_2,&PTR____CFConstantStringClassReference_110eff998,
                        0);
    return (double)fVar1;
  }
  return 1902513289.0;
}



/* Entry: 108ec1f48; end: 108ec1faf; +[SCMemoriesCOFMemoriesAnimatedCollageLensPool descriptor] */

void FUN_108ec1f48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eb38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc8bc0,
                        &PTR____CFConstantStringClassReference_110effa18,&PTR_DAT_11329b450,
                        &PTR_DAT_11329b468,1,0x10,0x1c);
    puRam000000011372eb38 = puVar1;
  }
  return;
}



/* Entry: 108ec1fb0; end: 108ec2017; +[SCMemoriesCOFMemoriesAnimatedCollageLens descriptor] */

void FUN_108ec1fb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eb40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc8c10,
                        &PTR____CFConstantStringClassReference_110effa38,&PTR_DAT_11329b450,
                        &PTR_s_lensId_11329b488,3,0x18,0x1c);
    puRam000000011372eb40 = puVar1;
  }
  return;
}



/* Entry: 108ec2018; end: 108ec207f; +[MemoriesCameraRollCollageLensPool descriptor] */

void FUN_108ec2018(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eb48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc8cb0,
                        &PTR____CFConstantStringClassReference_110effa58,&PTR_DAT_11329b4e8,
                        &PTR_DAT_11329b500,1,0x10,0x1c);
    puRam000000011372eb48 = puVar1;
  }
  return;
}



/* Entry: 108ec2080; end: 108ec20e7; +[MemoriesCameraRollCollageLens descriptor] */

void FUN_108ec2080(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eb50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc8d00,
                        &PTR____CFConstantStringClassReference_110effa78,&PTR_DAT_11329b4e8,
                        &PTR_s_lensId_11329b520,2,0x18,0x1c);
    puRam000000011372eb50 = puVar1;
  }
  return;
}



/* Entry: 108ec20e8; end: 108ec214f; +[SCMemoriesCOFClientGenFeaturedStoryRetryCaps descriptor] */

void FUN_108ec20e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eb58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc8da0,
                        &PTR____CFConstantStringClassReference_110effa98,&PTR_DAT_11329b560,
                        &PTR_DAT_11329b578,1,0x10,0x1c);
    puRam000000011372eb58 = puVar1;
  }
  return;
}



/* Entry: 108ec2150; end: 108ec21b7; +[SCMemoriesCOFClientGenFeaturedStoryRetry descriptor] */

void FUN_108ec2150(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eb60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc8df0,
                        &PTR____CFConstantStringClassReference_110effab8,&PTR_DAT_11329b560,
                        &PTR_s_errorCode_11329b598,2,0x18,0x1c);
    puRam000000011372eb60 = puVar1;
  }
  return;
}



/* Entry: 108ec21b8; end: 108ec222b; -[SCMemoriesPHFetchResult initWithWithFetchResult:] */

undefined1 * FUN_108ec21b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff0b0;
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



/* Entry: 108ec222c; end: 108ec2267; -[SCMemoriesPHFetchResult count] */

undefined8 FUN_108ec222c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa9d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ec2268; end: 108ec22ab; -[SCMemoriesPHFetchResult firstObject] */

void FUN_108ec2268(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa9d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ec22ac; end: 108ec22ef; -[SCMemoriesPHFetchResult lastObject] */

void FUN_108ec22ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa9d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ec22f0; end: 108ec23d7; -[SCMemoriesPHFetchResult photoAssets] */

void FUN_108ec22f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010bfa9d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfa9d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108ec23d8;
  puStack_40 = &UNK_11085b3a0;
  puStack_38 = puVar3;
  _objc_retain(puVar3);
  func_0x00010bf97e80(param_1,param_2,&puStack_58);
  _objc_release(param_1);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puStack_38);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108ec23d8; end: 108ec23e3;  */

void FUN_108ec23d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 108ec23e4; end: 108ec246f; -[SCMemoriesPHFetchResult objectAtIndex:] */

void FUN_108ec23e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bfa9d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (param_3 < uVar1) {
    func_0x00010bfa9d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ec2470; end: 108ec24fb; -[SCMemoriesPHFetchResult objectAtIndexedSubscript:] */

void FUN_108ec2470(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bfa9d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (param_3 < uVar1) {
    func_0x00010bfa9d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108ec24fc; end: 108ec255f; -[SCMemoriesPHFetchResult containsObject:] */

undefined8 FUN_108ec24fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfa9d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ec2560; end: 108ec25c3; -[SCMemoriesPHFetchResult indexOfObject:] */

undefined8 FUN_108ec2560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfa9d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfecde0();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ec25c4; end: 108ec2607; -[SCMemoriesPHFetchResult countOfAssetsWithMediaType:] */

undefined8 FUN_108ec25c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa9d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf52ba0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ec2608; end: 108ec2663; -[SCMemoriesPHFetchResult countByEnumeratingWithState:objects:count:] */

undefined8 FUN_108ec2608(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa9d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf52a60();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ec2664; end: 108ec266f; -[SCMemoriesPHFetchResult fetchResult] */

void FUN_108ec2664(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 108ec2670; end: 108ec267b; -[SCMemoriesPHFetchResult .cxx_destruct] */

void FUN_108ec2670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ec267c; end: 108ec27ef; -[SCMemoriesPhotoLibraryFetchParams initWithReferenceDate:observesChange:fetchLimit:predicates:mediaType:assetCollection:creationDateEnd:] */

undefined1 *
FUN_108ec267c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ff0b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ec27f0; end: 108ec2813; -[SCMemoriesPhotoLibraryFetchParams copyWithZone:] */

undefined8 FUN_108ec27f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ec2814; end: 108ec281b; -[SCMemoriesPhotoLibraryFetchParams referenceDate] */

undefined8 FUN_108ec2814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ec281c; end: 108ec2823; -[SCMemoriesPhotoLibraryFetchParams observesChange] */

undefined1 FUN_108ec281c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108ec2824; end: 108ec282b; -[SCMemoriesPhotoLibraryFetchParams fetchLimit] */

undefined8 FUN_108ec2824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ec282c; end: 108ec2833; -[SCMemoriesPhotoLibraryFetchParams predicates] */

undefined8 FUN_108ec282c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ec2834; end: 108ec283b; -[SCMemoriesPhotoLibraryFetchParams mediaType] */

undefined8 FUN_108ec2834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ec283c; end: 108ec2843; -[SCMemoriesPhotoLibraryFetchParams assetCollection] */

undefined8 FUN_108ec283c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ec2844; end: 108ec284b; -[SCMemoriesPhotoLibraryFetchParams creationDateEnd] */

undefined8 FUN_108ec2844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108ec284c; end: 108ec28ab; -[SCMemoriesPhotoLibraryFetchParams .cxx_destruct] */

void FUN_108ec284c(long param_1)

{
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



/* Entry: 108ec28ac; end: 108ec28c7; +[SCMemoriesPhotoLibraryFetchParamsBuilder memoriesPhotoLibraryFetchParams] */

void FUN_108ec28ac(void)

{
  _objc_alloc_init(PTR_PTR_1126b2688);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ec28c8; end: 108ec2ad7; +[SCMemoriesPhotoLibraryFetchParamsBuilder memoriesPhotoLibraryFetchParamsFromExistingMemoriesPhotoLibraryFetchParams:] */

void FUN_108ec28c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  puVar1 = PTR_PTR_1126b2688;
  _objc_retain(param_3);
  func_0x00010c0c9180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c124e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b6b00(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e1400(param_3);
  puVar5 = puVar3;
  func_0x00010c2b4b40(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfa8040(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2add00(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c106400(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2b59c0(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c0c6c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c2b3b00(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010bf0b000(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2a87c0(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010bf5a720(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar14 = puVar12;
  func_0x00010c2ab380(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 108ec2ad8; end: 108ec2b23; -[SCMemoriesPhotoLibraryFetchParamsBuilder build] */

void FUN_108ec2ad8(void)

{
  _objc_alloc(PTR_PTR_1126dc620);
  func_0x00010c03d920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ec2b24; end: 108ec2b5b; -[SCMemoriesPhotoLibraryFetchParamsBuilder withReferenceDate:] */

long FUN_108ec2b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108ec2b5c; end: 108ec2b63; -[SCMemoriesPhotoLibraryFetchParamsBuilder withObservesChange:] */

void FUN_108ec2b5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}


