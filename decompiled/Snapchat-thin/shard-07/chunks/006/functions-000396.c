/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057323c8; end: 105732457;  */

void FUN_1057323c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010c0ecd40(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105732458; end: 105732463;  */

void FUN_105732458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105732460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105732464; end: 105732543;  */

void FUN_105732464(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105732544; end: 10573254b;  */

void FUN_105732544(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 10573254c; end: 10573263f;  */

void FUN_10573254c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar5 = uVar4;
  func_0x000108ffe710(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  FUN_105732020(uVar1,uVar3,uVar5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105732640; end: 105732647;  */

void FUN_105732640(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105732648; end: 105732707;  */

void FUN_105732648(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf40c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar1;
  FUN_105732020(uVar1,uVar2,uVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105732708; end: 1057327ab; -[SCMinervaAIFontsGrpcServiceImpl initWithMinervaService:minervaProtoModelsConverter:] */

undefined1 *
FUN_105732708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9ff8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057327ac; end: 1057328df; -[SCMinervaAIFontsGrpcServiceImpl getSuggestedFontsWithCompletion:] */

void FUN_1057327ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c119240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfcaec0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1057328e0; end: 105732a6b;  */

void FUN_1057328e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bdf8560();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = *(code **)(lVar2 + 0x10);
  }
  else {
    if ((param_2 == 0) && (param_3 != 0)) {
      lVar6 = *(long *)(param_1 + 0x20);
      lVar7 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bdc99e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))(lVar6,0,lVar2);
      _objc_release(lVar2);
      goto LAB_1057329e8;
    }
    lVar2 = param_2;
    func_0x00010c252d60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar7 == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf3d500();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar4,0);
      _objc_release(uVar4);
      lVar7 = 0;
      goto LAB_1057329e8;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    pcVar5 = *(code **)(lVar2 + 0x10);
  }
  (*pcVar5)(lVar2,0,lVar7);
LAB_1057329e8:
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105732a6c; end: 105732c33; -[SCMinervaAIFontsGrpcServiceImpl generateFontForPrompt:dreamPackId:dreamId:completion:] */

void FUN_105732a6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c119220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  func_0x00010bfbee20(uVar3);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105732c34; end: 105732e3b;  */

void FUN_105732c34(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bdf8560();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = *(code **)(lVar2 + 0x10);
  }
  else {
    if ((param_2 == 0) && (param_3 != 0)) {
      lVar5 = *(long *)(param_1 + 0x20);
      lVar6 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bdc99e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,0,lVar2);
      _objc_release(lVar2);
      goto LAB_105732d40;
    }
    lVar2 = param_2;
    func_0x00010c252d60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar6 == 0) {
      lVar6 = param_2;
      func_0x00010bfd8fe0();
      if ((int)lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = param_2;
        func_0x00010c0c5340(param_2);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar5 = *(long *)(lVar1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010bf3ca60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) {
        lVar3 = lVar1;
        func_0x00010bdc99e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar5 + 0x10))(lVar5,0,lVar3);
        _objc_release(lVar3);
      }
      else {
        (**(code **)(lVar5 + 0x10))(lVar5,lVar2,0);
      }
      _objc_release(lVar2);
      _objc_release(lVar6);
      lVar6 = 0;
      goto LAB_105732d40;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    pcVar4 = *(code **)(lVar2 + 0x10);
  }
  (*pcVar4)(lVar2,0,lVar6);
LAB_105732d40:
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105732e3c; end: 105732f23; -[SCMinervaAIFontsGrpcServiceImpl _deallocatedError] */

void FUN_105732e3c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126bd8f8;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dfa058;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar4 = puVar5;
  func_0x00010c252d60();
  iVar1 = (int)puVar4;
  if (iVar1 == -0x4524111) {
    func_0x00010bdc99e0(puVar2,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
  }
  else if (iVar1 == 1) {
LAB_105732f74:
    puVar4 = puVar5;
    func_0x00010bf987e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc99c0(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar2;
  }
  else {
    puVar4 = puVar3;
    if (iVar1 == 0) {
      puVar4 = puVar5;
      func_0x00010bfd6c40();
      if ((int)puVar4 != 0) goto LAB_105732f74;
      puVar4 = (undefined *)0x0;
    }
  }
  _objc_release(puVar5);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105732f24; end: 105732feb; -[SCMinervaAIFontsGrpcServiceImpl _getErrorFromStatusResponse:] */

void FUN_105732f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 unaff_x21;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c252d60();
  iVar1 = (int)uVar2;
  if (iVar1 == -0x4524111) {
    func_0x00010bdc99e0(param_1,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
    goto LAB_105732fd0;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) goto LAB_105732fd0;
    uVar2 = param_3;
    func_0x00010bfd6c40();
    if ((int)uVar2 == 0) {
      unaff_x21 = 0;
      goto LAB_105732fd0;
    }
  }
  uVar2 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc99c0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  unaff_x21 = param_1;
LAB_105732fd0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 105732fec; end: 10573307b; -[SCMinervaAIFontsGrpcServiceImpl _aiFontsServiceErrorFromCameosError:] */

void FUN_105732fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c252d60();
  uVar1 = 2;
  if ((int)uVar2 != 0x19a) {
    uVar1 = 0;
  }
  if ((int)uVar2 == 0x1ad) {
    uVar1 = 1;
  }
  uVar2 = param_3;
  func_0x00010c0cb140(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdc99e0(param_1,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10573307c; end: 105733193; -[SCMinervaAIFontsGrpcServiceImpl _aiFontsServiceErrorWithCode:message:] */

void FUN_10573307c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long in_x3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x3);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar1 = in_x3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(in_x3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(in_x3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(in_x3 + 8,0);
  return;
}



/* Entry: 105733194; end: 1057331c3; -[SCMinervaAIFontsGrpcServiceImpl .cxx_destruct] */

void FUN_105733194(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057331c4; end: 1057332bf; -[SCMinervaAISnapGrpcServiceImpl initWithUNISCPbMinervaMinervaService:minervaProtoModelsConverter:grpcCallOptionsBuilder:endpoint:] */

undefined1 *
FUN_1057331c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea000;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057332c0; end: 1057333d3; -[SCMinervaAISnapGrpcServiceImpl generateImagesForPrompt:parameters:] */

void FUN_1057332c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057333d4; end: 105733437;  */

void FUN_1057333d4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1b300();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 105733438; end: 1057335b3; -[SCMinervaAISnapGrpcServiceImpl _generateImagesForPrompt:params:observer:] */

void FUN_105733438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c118f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  func_0x00010bfbee40(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057335b4; end: 10573385f;  */

void FUN_1057335b4(undefined *param_1,undefined *param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_2);
  puVar8 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar8 != (undefined *)0x0) {
    if ((param_2 == (undefined *)0x0) && (param_3 != (undefined *)0x0)) {
      puVar2 = puVar8;
      _objc_opt_class(puVar8);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
LAB_105733690:
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010c0d9840(uVar9);
    }
    else {
      puVar2 = param_2;
      func_0x00010c252d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar8;
      func_0x00010be1ed60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (puVar3 != (undefined *)0x0) goto LAB_105733690;
      puVar2 = param_2;
      func_0x00010c0c4060();
      puVar6 = PTR_PTR_1126af5d0;
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar2 == (undefined *)0x0) {
        puVar2 = puVar8;
        _objc_opt_class(puVar8);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar2);
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        puVar6 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar6;
        func_0x00010c0d9840(uVar9);
        _objc_release(puVar6);
      }
      else {
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        puVar4 = *(undefined **)(puVar8 + 0x10);
        func_0x00010c269d40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf3ca80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2619e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar6;
        func_0x00010c0d9840(uVar9);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010c252d60();
  puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
  iVar1 = (int)puVar3;
  if (iVar1 == -0x4524111) {
    _objc_opt_class(param_2);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 != 1) {
      puVar8 = param_1;
      if (iVar1 != 0) goto LAB_105733990;
      puVar8 = puVar2;
      func_0x00010bfd6c40();
      if ((int)puVar8 == 0) {
        puVar8 = (undefined *)0x0;
        goto LAB_105733990;
      }
    }
    param_2 = *(undefined **)(param_2 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf987e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_2;
    func_0x00010bf3cda0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(param_2);
LAB_105733990:
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + 8,0);
  return;
}



/* Entry: 105733860; end: 1057339d3; -[SCMinervaAISnapGrpcServiceImpl _getErrorFromServiceStatusResponse:] */

void FUN_105733860(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *unaff_x20;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c252d60();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  iVar1 = (int)puVar2;
  if (iVar1 == -0x4524111) {
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 != 1) {
      puVar4 = unaff_x20;
      if (iVar1 != 0) goto LAB_105733990;
      puVar4 = param_3;
      func_0x00010bfd6c40();
      if ((int)puVar4 == 0) {
        puVar4 = (undefined *)0x0;
        goto LAB_105733990;
      }
    }
    param_1 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf3cda0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(param_1);
LAB_105733990:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1057339d4; end: 105733a1b; -[SCMinervaAISnapGrpcServiceImpl .cxx_destruct] */

void FUN_1057339d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105733a1c; end: 105733be3; -[SCMinervaAISongGrpcServiceImpl generateSongForPrompt:genre:completion:] */

void FUN_105733a1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c118f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  _objc_retain(puVar2);
  func_0x00010bfbee60(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105733be4; end: 105733e6b;  */

void FUN_105733be4(long param_1,undefined *param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined *)0x0) {
    lVar8 = *(long *)(param_1 + 0x28);
    puVar3 = PTR_PTR_1126bd900;
    _objc_opt_class(PTR_PTR_1126bd900);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    (**(code **)(lVar8 + 0x10))(lVar8,0);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  else {
    if ((param_2 == (undefined *)0x0) && (param_3 != (undefined *)0x0)) {
      lVar8 = *(long *)(param_1 + 0x28);
      puVar3 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bebdf40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      (**(code **)(lVar8 + 0x10))(lVar8,0);
    }
    else {
      puVar4 = param_2;
      func_0x00010c252d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010be1ed80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = puVar3;
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
        goto LAB_105733e18;
      }
      puVar4 = param_2;
      func_0x00010c135700();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      if (puVar5 == (undefined *)0x0) {
        func_0x00010c1ebd20(param_2);
      }
      puVar5 = *(undefined **)(puVar2 + 0x10);
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bf3caa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar6 = (undefined *)0x0;
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar4);
    }
    _objc_release(puVar4);
  }
LAB_105733e18:
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar4 = puVar6;
  func_0x00010c252d60();
  iVar1 = (int)puVar4;
  if (iVar1 == -0x4524111) {
    func_0x00010bebdf40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    goto LAB_105733f18;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) goto LAB_105733f18;
    puVar2 = puVar6;
    func_0x00010bfd6c40();
    if ((int)puVar2 == 0) {
      puVar2 = (undefined *)0x0;
      goto LAB_105733f18;
    }
  }
  puVar2 = puVar6;
  func_0x00010bf987e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebdf20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_2;
LAB_105733f18:
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105733e6c; end: 105733f33; -[SCMinervaAISongGrpcServiceImpl _getErrorFromStatusResponse:] */

void FUN_105733e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 unaff_x21;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c252d60();
  iVar1 = (int)uVar2;
  if (iVar1 == -0x4524111) {
    func_0x00010bebdf40(param_1,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
    goto LAB_105733f18;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) goto LAB_105733f18;
    uVar2 = param_3;
    func_0x00010bfd6c40();
    if ((int)uVar2 == 0) {
      unaff_x21 = 0;
      goto LAB_105733f18;
    }
  }
  uVar2 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebdf20(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  unaff_x21 = param_1;
LAB_105733f18:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 105733f34; end: 105733fc3; -[SCMinervaAISongGrpcServiceImpl _songServiceErrorFromCameosError:] */

void FUN_105733f34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c252d60();
  uVar1 = 2;
  if ((int)uVar2 != 0x19a) {
    uVar1 = 0;
  }
  if ((int)uVar2 == 0x1ad) {
    uVar1 = 1;
  }
  uVar2 = param_3;
  func_0x00010c0cb140(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bebdf40(param_1,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105733fc4; end: 1057340db; -[SCMinervaAISongGrpcServiceImpl _songServiceErrorWithCode:message:] */

void FUN_105733fc4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long in_x3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x3);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar1 = in_x3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(in_x3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(in_x3 + 0x18,0);
  _objc_storeStrong(in_x3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(in_x3 + 8,0);
  return;
}



/* Entry: 1057340dc; end: 105734117; -[SCMinervaAISongGrpcServiceImpl .cxx_destruct] */

void FUN_1057340dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105734118; end: 1057341e3; -[SCMinervaMagicCaptionGrpcServiceImpl initWithUNISCPbMinervaMinervaService:minervaProtoModelsConverter:grpcCallOptionsBuilder:] */

undefined1 *
FUN_105734118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea010;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057341e4; end: 1057342f7; -[SCMinervaMagicCaptionGrpcServiceImpl generateCaptionForImages:parameters:] */

void FUN_1057341e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057342f8; end: 10573435b;  */

void FUN_1057342f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1ac60();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 10573435c; end: 10573446f; -[SCMinervaMagicCaptionGrpcServiceImpl generateAIStoryReplyForSnapId:parameters:] */

void FUN_10573435c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105734470; end: 1057344d3;  */

void FUN_105734470(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1a740();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 1057344d4; end: 105734837; -[SCMinervaMagicCaptionGrpcServiceImpl _generateCaptionForImages:parameters:observer:] */

void FUN_1057344d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bd908;
  _objc_opt_new(PTR_PTR_1126bd908);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105734838;
  puStack_80 = &UNK_1108ae610;
  uVar5 = param_3;
  lStack_78 = param_1;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0d3c80();
  _objc_release(uVar5);
  puVar3 = puVar1;
  func_0x00010c1c4960(puVar1);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a2880(puVar1);
  _objc_release(puVar3);
  if (param_4 != 0) {
    puVar3 = PTR_PTR_1126bd910;
    _objc_alloc_init(PTR_PTR_1126bd910);
    lVar4 = param_4;
    func_0x00010c294cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_4;
      func_0x00010c294cc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c21fbc0(puVar3);
      _objc_release(lVar4);
    }
    lVar4 = param_4;
    func_0x00010bf31400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_4;
      func_0x00010bf31400(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c179380(puVar3);
      _objc_release(lVar4);
    }
    lVar4 = param_4;
    func_0x00010bf17220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_4;
      func_0x00010bf17220(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c16f8c0(puVar1);
      _objc_release(lVar4);
    }
    lVar4 = param_4;
    func_0x00010bf36660();
    if (((int)lVar4 != -0x4524111) && (lVar4 = param_4, func_0x00010bf36660(), (int)lVar4 != 0)) {
      func_0x00010bf36660(param_4);
      func_0x00010c17b500(puVar1);
    }
    lVar4 = param_4;
    func_0x00010c079720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      lVar4 = param_4;
      func_0x00010c079720(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c1b31a0(puVar3);
      _objc_release(lVar4);
    }
    func_0x00010c1c4bc0(puVar1);
    _objc_release(puVar3);
  }
  _objc_initWeak(auStack_a0,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_a0);
  _objc_retain(param_5);
  func_0x00010bfbf1e0(uVar5);
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105734838; end: 1057348a7;  */

void FUN_105734838(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c1193a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057348a8; end: 105734a7f;  */

void FUN_1057348a8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    if (param_3 == 0) {
      uVar8 = param_2;
      func_0x00010c252d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010be1ed60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      puVar7 = PTR_PTR_1126af5d0;
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = *(undefined **)(puVar1 + 0x10);
        func_0x00010c269d40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_2;
        func_0x00010bf308e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_2;
        func_0x00010bfc09e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf3d160(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2619e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      else {
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar8);
      }
      _objc_release(puVar3);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar8);
    }
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105734a80; end: 105734deb; -[SCMinervaMagicCaptionGrpcServiceImpl _generateAIStoryReplyForSnapId:parameters:observer:] */

void FUN_105734a80(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bd908;
  _objc_opt_new(PTR_PTR_1126bd908);
  if (param_4 != 0) {
    lVar2 = param_4;
    func_0x00010bfc09e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100576d08();
    if ((int)lVar3 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126afad0;
      _objc_alloc_init(PTR_PTR_1126afad0);
      func_0x00010c1a85a0();
      func_0x00010c1c0fe0(puVar5);
    }
    func_0x00010c1ebd20(puVar1);
    _objc_release(puVar5);
    _objc_release(lVar2);
    func_0x00010c1ec220(puVar1);
    func_0x00010c204680(puVar1);
    puVar5 = PTR_PTR_1126bd918;
    _objc_opt_new(PTR_PTR_1126bd918);
    lVar2 = param_4;
    func_0x00010c063e40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100576d08();
    if ((int)lVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR_PTR_1126afad0;
      _objc_alloc_init(PTR_PTR_1126afad0);
      func_0x00010c1a85a0();
      func_0x00010c1c0fe0(puVar6);
    }
    func_0x00010c1acc80(puVar5);
    _objc_release(puVar6);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c0f5620(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d3c80();
    func_0x00010c1d9780(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c1ebb40(puVar1);
    puVar6 = PTR_PTR_1126bd920;
    _objc_opt_new(PTR_PTR_1126bd920);
    lVar2 = param_4;
    func_0x00010bf36660();
    if (((int)lVar2 != -0x4524111) && (lVar2 = param_4, func_0x00010bf36660(), (int)lVar2 != 0)) {
      func_0x00010bf36660(param_4);
      func_0x00010c17b500(puVar6);
    }
    lVar2 = param_4;
    func_0x00010bf17220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_4;
      func_0x00010bf17220(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c16f8c0(puVar6);
      _objc_release(lVar2);
    }
    lVar2 = param_4;
    func_0x00010bfcfc00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4d80(puVar1);
    _objc_release(lVar2);
    func_0x00010c1ebf20(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  func_0x00010bfbf1e0(uVar4);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105734dec; end: 105734fc3;  */

void FUN_105734dec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    if (param_3 == 0) {
      uVar8 = param_2;
      func_0x00010c252d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010be1ed60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      puVar7 = PTR_PTR_1126af5d0;
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = *(undefined **)(puVar1 + 0x10);
        func_0x00010c269d40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_2;
        func_0x00010bf308e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_2;
        func_0x00010bfc09e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf3d160(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2619e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
      }
      else {
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar8);
      }
      _objc_release(puVar3);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar8);
    }
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105734fc4; end: 10573518f; -[SCMinervaMagicCaptionGrpcServiceImpl _getErrorFromServiceStatusResponse:] */

void FUN_105734fc4(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_3 == 0) {
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
LAB_105735104:
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    lVar1 = param_3;
    func_0x00010c252d60();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((int)lVar1 == -0x4524111) {
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105735104;
    }
    if ((int)lVar1 != 1) {
      puVar4 = (undefined *)0x0;
      goto LAB_105735150;
    }
    param_1 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf3cda0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
LAB_105735150:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 105735190; end: 1057351cb; -[SCMinervaMagicCaptionGrpcServiceImpl .cxx_destruct] */

void FUN_105735190(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057351cc; end: 105735297; -[SCMinervaGrpcServiceImpl initWithUNISCPbMinervaMinervaService:minervaProtoModelsConverter:grpcCallOptionsBuilder:] */

undefined1 *
FUN_1057351cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea018;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105735298; end: 1057353ab; -[SCMinervaGrpcServiceImpl processImage:parameters:] */

void FUN_105735298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057353ac; end: 10573540f;  */

void FUN_1057353ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81460();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 105735410; end: 1057356d3; -[SCMinervaGrpcServiceImpl _processImage:parameters:observer:] */

void FUN_105735410(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bd928;
  _objc_opt_new(PTR_PTR_1126bd928);
  puVar2 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c1193a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4940(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar3);
  lVar4 = param_4;
  func_0x00010bfe8760();
  if (lVar4 == 2) {
    lVar5 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8a00(param_4);
    lVar4 = lVar5;
    func_0x00010c119460(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa900(puVar1);
  }
  else if (lVar4 == 1) {
    lVar5 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe76a0(param_4);
    lVar4 = lVar5;
    func_0x00010c119120(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa260(puVar1);
  }
  else {
    if (lVar4 != 0) goto LAB_1057355d4;
    lVar5 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010bfe76e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c119160(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa280(puVar1);
    _objc_release(lVar6);
  }
  _objc_release(lVar4);
  _objc_release(lVar5);
LAB_1057355d4:
  _objc_initWeak(auStack_58,param_1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  func_0x00010c114f20(uVar7);
  _objc_release(uVar7);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057356d4; end: 10573599b;  */

void FUN_1057356d4(long param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar8 != (undefined *)0x0) {
    if (param_3 == (undefined *)0x0) {
      puVar1 = param_2;
      func_0x00010c252d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar8;
      func_0x00010be1ed60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      if (puVar2 == (undefined *)0x0) {
        puVar1 = param_2;
        func_0x00010bfd8fe0();
        puVar6 = PTR_PTR_1126af5d0;
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (((ulong)puVar1 & 1) == 0) {
          puVar1 = puVar8;
          _objc_opt_class(puVar8);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar1);
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          puVar6 = PTR_PTR_1126af5d0;
          func_0x00010bfa01c0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar6;
          func_0x00010c0d9840(uVar9);
          _objc_release(puVar6);
        }
        else {
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          puVar3 = *(undefined **)(puVar8 + 0x10);
          func_0x00010c269d40(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = param_2;
          func_0x00010c0c5340(param_2);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010bfe7680(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2619e0();
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar6;
          func_0x00010c0d9840(uVar9);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
      }
      else {
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar3;
        func_0x00010c0d9840(uVar9);
      }
      _objc_release(puVar3);
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010c0d9840(uVar9);
    }
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar8);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  puVar2 = puVar1;
  func_0x00010c252d60();
  puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)puVar2 == -0x4524111) {
    _objc_opt_class(param_2);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    if ((int)puVar2 != 1) {
      puVar8 = (undefined *)0x0;
      goto LAB_105735ad8;
    }
    param_2 = *(undefined **)(param_2 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf987e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_2;
    func_0x00010bf3cda0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_2);
LAB_105735ad8:
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 10573599c; end: 105735b17; -[SCMinervaGrpcServiceImpl _getErrorFromServiceStatusResponse:] */

void FUN_10573599c(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252d60();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)lVar1 == -0x4524111) {
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    if ((int)lVar1 != 1) {
      puVar4 = (undefined *)0x0;
      goto LAB_105735ad8;
    }
    param_1 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf3cda0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
LAB_105735ad8:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 105735b18; end: 105735b53; -[SCMinervaGrpcServiceImpl .cxx_destruct] */

void FUN_105735b18(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105735b54; end: 105736123; -[SCMinervaGrpcServiceProvider provide] */

void FUN_105735b54(long param_1)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105736124;
  puStack_90 = &UNK_1108ae6a0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c0db900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010c0db900();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_e0 = puVar11;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10573618c;
  puStack_c8 = &UNK_1108ae710;
  _objc_copyWeak(auStack_b0,auStack_80);
  puStack_c0 = puVar1;
  puStack_b8 = puVar2;
  func_0x00010c0db900(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  puStack_108 = puVar11;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x1057361d4;
  puStack_f0 = &UNK_1108ae6a0;
  _objc_copyWeak(auStack_e8,auStack_80);
  func_0x00010c0db900();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  puStack_140 = puVar11;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x105736224;
  puStack_128 = &UNK_1108ae740;
  _objc_copyWeak(auStack_110,auStack_80);
  puStack_120 = puVar4;
  puStack_118 = puVar2;
  func_0x00010c0db900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60620();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    func_0x00010c136b40(param_1);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR_PTR_1126ae720;
  puStack_170 = puVar11;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x10573626c;
  puStack_158 = &UNK_1108ae770;
  _objc_copyWeak(auStack_148,auStack_80);
  puStack_150 = puVar13;
  func_0x00010c0db900();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae720;
  puStack_1b0 = puVar11;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_1057362b8;
  puStack_198 = &UNK_1108ae7a0;
  _objc_copyWeak(auStack_178,auStack_80);
  puStack_190 = puVar6;
  puStack_188 = puVar2;
  lStack_180 = param_1;
  func_0x00010c0db900(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126ae720;
  puStack_1d8 = puVar11;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_105736334;
  puStack_1c0 = &UNK_1108ae6a0;
  _objc_copyWeak(auStack_1b8,auStack_80);
  func_0x00010c0db900();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ae720;
  puStack_210 = puVar11;
  uStack_208 = 0xc2000000;
  uStack_200 = 0x10573637c;
  puStack_1f8 = &UNK_1108ae7d0;
  _objc_copyWeak(auStack_1e0,auStack_80);
  puStack_1f0 = puVar8;
  puStack_1e8 = puVar2;
  func_0x00010c0db900(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ae720;
  puStack_238 = puVar11;
  uStack_230 = 0xc2000000;
  uStack_228 = 0x1057363c4;
  puStack_220 = &UNK_1108ae800;
  _objc_copyWeak(auStack_218,auStack_80);
  func_0x00010c0db900();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_240,auStack_80);
  func_0x00010c0db900(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126bd938;
  _objc_alloc(PTR_PTR_1126bd938);
  func_0x00010c02c160();
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_240);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_218);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_1e0);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_1b8);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_148);
  _objc_release(puVar13);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_110);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105736124; end: 10573616f;  */

void FUN_105736124(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bed1140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105736170; end: 10573618b;  */

void FUN_105736170(void)

{
  _objc_alloc_init(PTR_PTR_1126bd930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10573618c; end: 1057362b7;  */

void FUN_10573618c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be60680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057362b8; end: 105736333;  */

void FUN_1057362b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf95da0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010be60640(lVar3,param_2,uVar1,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105736334; end: 105736453;  */

void FUN_105736334(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bed1140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105736454; end: 105736567; -[SCMinervaGrpcServiceProvider _uniPbMinervaProcessMediaServiceWithConfigKey:requestTimeout:] */

void FUN_105736454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bd940;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  FUN_105736568(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010573658c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058cc0(puVar1,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bf59be0(puVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105736568; end: 1057365af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105736568(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112728a50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057365b0; end: 10573670b; -[SCMinervaGrpcServiceProvider _minervaGrpcService:protoModelsConverter:] */

void FUN_1057365b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_3;
  _objc_retain();
  func_0x000108c2cad0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126ae748;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_58 = &PTR____CFConstantStringClassReference_110dadcb8;
    puVar3 = puVar10;
    func_0x000108c2cad0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar10,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126bd948;
  _objc_alloc();
  lVar1 = param_3;
  uVar9 = param_4;
  func_0x00010c0577a0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_retain(uVar9);
    _objc_retain(lVar1);
    _objc_opt_new(puVar10);
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c106d20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110de3318;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar8 = ppuVar7;
    }
    func_0x00010c1d0640(puVar10,param_2,ppuVar8,&PTR____CFConstantStringClassReference_110db8558);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release();
    func_0x000108c2cadc();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar5;
    func_0x00010c08fa60();
    _objc_release(ppuVar5);
    if (ppuVar8 != (undefined **)0x0) {
      func_0x000108c2cadc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar10,param_2,ppuVar5,&PTR____CFConstantStringClassReference_110dadcb8);
      _objc_release(ppuVar5);
    }
    puVar3 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bef9140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bd950;
    _objc_alloc(PTR_PTR_1126bd950);
    func_0x00010c0577a0();
    _objc_release(uVar9);
    _objc_release(lVar1);
    _objc_release(puVar4);
    _objc_release(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10573670c; end: 105736897; -[SCMinervaGrpcServiceProvider _minervaMagicCaptionsGrpcService:protoModelsConverter:] */

void FUN_10573670c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110de3318;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar5 = ppuVar4;
  }
  func_0x00010c1d0640(puVar1,param_2,ppuVar5,&PTR____CFConstantStringClassReference_110db8558);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release();
  func_0x000108c2cadc();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar2;
  func_0x00010c08fa60();
  _objc_release(ppuVar2);
  if (ppuVar5 != (undefined **)0x0) {
    func_0x000108c2cadc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,ppuVar2,&PTR____CFConstantStringClassReference_110dadcb8);
    _objc_release(ppuVar2);
  }
  puVar6 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bef9140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126bd950;
  _objc_alloc(PTR_PTR_1126bd950);
  func_0x00010c0577a0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105736898; end: 105736a0b; -[SCMinervaGrpcServiceProvider _minervaAISnapGrpcService:protoModelsConverter:endpoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105736898(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  param_1 = param_1 + _DAT_112728a48;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110de81d8);
  _objc_release(lVar2);
  _objc_release();
  func_0x000108c2cae8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  if (lVar2 != 0) {
    func_0x000108c2cae8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110dadcb8);
    _objc_release(param_1);
  }
  puVar3 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bd958;
  _objc_alloc(PTR_PTR_1126bd958);
  func_0x00010c0577c0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105736a0c; end: 105736b67; -[SCMinervaGrpcServiceProvider _minervaAISongGrpcService:protoModelsConverter:] */

void FUN_105736a0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_3;
  _objc_retain();
  func_0x000100abf254();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126ae748;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_58 = &PTR____CFConstantStringClassReference_110dadcb8;
    puVar3 = puVar8;
    func_0x000100abf254();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar8,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126bd900;
  _objc_alloc();
  lVar1 = param_3;
  uVar7 = param_4;
  func_0x00010c02c180();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126bd940;
    _objc_retain(uVar7);
    _objc_retain(lVar1);
    _objc_alloc(puVar4);
    puVar3 = puVar8;
    FUN_105736568(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfcfa00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010573658c(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar8;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058cc0(puVar4,param_2,puVar5,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010bf59c20(puVar4,param_2,lVar1,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(lVar1);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105736b68; end: 105736c7b; -[SCMinervaGrpcServiceProvider _uniPbSuggestedPromptsServiceWithConfigKey:requestTimeout:] */

void FUN_105736b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bd940;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  FUN_105736568(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010573658c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058cc0(puVar1,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bf59c20(puVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105736c7c; end: 105736dd7; -[SCMinervaGrpcServiceProvider _minervaSuggestedPromptsGrpcService:protoModelsConverter:] */

void FUN_105736c7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_3;
  _objc_retain();
  func_0x000108c2caf4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126ae748;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_58 = &PTR____CFConstantStringClassReference_110dadcb8;
    puVar3 = puVar6;
    func_0x000108c2caf4();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9140(puVar6,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126bd960;
  _objc_alloc();
  func_0x00010c057780();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x00010573658c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar4;
    func_0x00010c1195e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110dfa138,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bd968;
    _objc_alloc(PTR_PTR_1126bd968);
    puVar5 = puVar6;
    func_0x00010c296d80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar3,param_2,puVar5,0);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105736dd8; end: 105736e97; -[SCMinervaGrpcServiceProvider _minervaAISnapGrpcConfig] */

void FUN_105736dd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010573658c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c1195e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dfa138,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bd968;
  _objc_alloc(PTR_PTR_1126bd968);
  uVar4 = uVar2;
  func_0x00010c296d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008360(puVar3,param_2,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105736e98; end: 105736ee7; -[SCMinervaGrpcServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105736e98(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112728a54);
  _objc_destroyWeak(param_1 + _DAT_112728a50);
  _objc_destroyWeak(param_1 + _DAT_112728a48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112728a4c);
  return;
}



/* Entry: 105736ee8; end: 10573700b; -[SCMinervaProtoModelsConverter protoMediaInfoFromImageEncryptedData:] */

void FUN_105736ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bd970;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  uVar2 = param_3;
  func_0x00010bf92c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf649c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9140(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  uVar2 = param_3;
  func_0x00010bf92c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf649c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1acf20(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c182a60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c195880(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10573700c; end: 105737103; -[SCMinervaProtoModelsConverter imageEncryptedDataFromProtoMediaInfo:] */

void FUN_10573700c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b97d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c1554c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf15d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c064640(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf15d80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf4db80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c00fb00(puVar1,param_2,uVar3,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105737104; end: 1057371f7; -[SCMinervaProtoModelsConverter protoExtendParametersFromImageExtendParams:] */

void FUN_105737104(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bd978;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  uVar2 = param_5;
  func_0x00010c08e900(param_5);
  func_0x00010c1ba2a0(puVar1,param_4,uVar2);
  uVar2 = param_5;
  func_0x00010c140d20(param_5);
  func_0x00010c1ee1c0(puVar1,param_4,uVar2);
  uVar2 = param_5;
  func_0x00010c274900(param_5);
  func_0x00010c217600(puVar1,param_4,uVar2);
  uVar2 = param_5;
  func_0x00010bf204e0(param_5);
  func_0x00010c173740(puVar1,param_4,uVar2);
  puVar3 = PTR_PTR_1126bd980;
  _objc_opt_new(PTR_PTR_1126bd980);
  func_0x00010c0ed580(param_5);
  func_0x00010c2256c0(puVar3,param_4,(int)param_1);
  func_0x00010c0ed580(param_5);
  _objc_release(param_5);
  func_0x00010c1a7d00(puVar3,param_4,(int)param_2);
  func_0x00010c1d6620(puVar1,param_4,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057371f8; end: 10573722f; -[SCMinervaProtoModelsConverter protoEnhanceParametersFromUpscalingRate:] */

void FUN_1057371f8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd988;
  _objc_opt_new(PTR_PTR_1126bd988);
  func_0x00010c21d1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105737230; end: 105737267; -[SCMinervaProtoModelsConverter protoRetouchParametersFromUpscalingRate:] */

void FUN_105737230(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd990;
  _objc_opt_new(PTR_PTR_1126bd990);
  func_0x00010c21d1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105737268; end: 105737393; -[SCMinervaProtoModelsConverter clientErrorFromProtoCameosError:] */

void FUN_105737268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b97c8;
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x000108e9a708();
  lVar8 = (long)(int)uVar3;
  uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  uVar3 = param_3;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = uVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  puVar6 = puVar2;
  lVar7 = lVar8;
  func_0x00010bf99240(puVar1,param_2,puVar2,lVar8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puStack_80 = puVar1;
    pcStack_68 = FUN_105737394;
    lStack_90 = lVar8;
    puStack_88 = puVar2;
    puStack_78 = puVar5;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain(lVar7);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x105737450;
    puStack_a0 = &UNK_1108ae860;
    lStack_98 = lVar7;
    _objc_retain(lVar7);
    func_0x00010c0b8600(puVar6,param_2,&puStack_b8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bd9a0;
    _objc_alloc(PTR_PTR_1126bd9a0);
    func_0x00010bffc720();
    _objc_release(puVar6);
    _objc_release(lStack_98);
    _objc_release(lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105737394; end: 1057374ab; -[SCMinervaProtoModelsConverter clientMagicCaptionGenerationResultFromProtoCaptionsArray:generationRequestId:] */

void FUN_105737394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105737450;
  puStack_40 = &UNK_1108ae860;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0b8600(param_3,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bd9a0;
  _objc_alloc(PTR_PTR_1126bd9a0);
  func_0x00010bffc720();
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057374ac; end: 105737523; -[SCMinervaProtoModelsConverter clientSuggestedPromptsResultFromProtoResponse:] */

void FUN_1057374ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bd9a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c262720(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04f600(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105737524; end: 105737587; -[SCMinervaProtoModelsConverter protoSuggestedPromptsRequestFromClientParams:] */

void FUN_105737524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bd9b0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010bfc09c0(param_3);
  _objc_release(param_3);
  func_0x00010c1d64a0(puVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105737588; end: 10573768b; -[SCMinervaProtoModelsConverter protoAISnapRequestFromClientParams:prompt:] */

void FUN_105737588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bd9b8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010befef40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfba440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0d3c80();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c19fd80(puVar1,param_2,uVar5);
  uVar2 = param_3;
  func_0x00010c0ed1a0(param_3);
  _objc_release(param_3);
  func_0x00010c1d64a0(puVar1,param_2,uVar2);
  func_0x00010c1e4c60(puVar1,param_2,param_4);
  _objc_release(param_4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10573768c; end: 1057376e3;  */

void FUN_10573768c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000100576d08(param_2,auStack_28,auStack_30);
  puVar1 = PTR_PTR_1126afad0;
  _objc_opt_new(PTR_PTR_1126afad0);
  func_0x00010c1a85a0();
  func_0x00010c1c0fe0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057376e4; end: 105737863; -[SCMinervaProtoModelsConverter clientAISnapResultFromProtoResponse:] */

void FUN_1057376e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0b5940();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_3;
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bfe2ee0();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar2 == 0) {
      lVar3 = 0;
      goto LAB_1057377c4;
    }
    lVar1 = param_3;
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe2ee0();
    lVar3 = lVar1;
    func_0x00010c0b5940(lVar1);
    func_0x000100c4a928(lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_1057377c4:
  lVar1 = param_3;
  func_0x00010c0c4040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar3);
  lVar2 = lVar1;
  func_0x00010c0b8600(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105737864; end: 105737877;  */

void FUN_105737864(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee6370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__urlFromSnapDoc_mlModelDesignati_112597280,
             param_2,0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105737878; end: 10573790b; -[SCMinervaProtoModelsConverter protoAISongRequestFromPrompt:genre:requestId:] */

void FUN_105737878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd9c0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c21f000();
  _objc_release(param_3);
  func_0x00010c1a2b00(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1ebd20(puVar1,param_2,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10573790c; end: 105737a73; -[SCMinervaProtoModelsConverter clientAISongResultFromProtoResponse:] */

void FUN_10573790c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf88fe0();
  if ((int)lVar6 == 8) {
    lVar6 = lVar1;
    func_0x00010c120080(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((int)lVar6 == 2) {
      lVar5 = lVar1;
      func_0x00010bf4db80(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = 0;
      goto LAB_105737994;
    }
    lVar6 = 0;
  }
  lVar5 = 0;
LAB_105737994:
  lVar2 = lVar1;
  func_0x00010c1554c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar1;
    func_0x00010c1554c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf937c0(lVar1);
  puVar3 = PTR_PTR_1126bd9c8;
  _objc_alloc(PTR_PTR_1126bd9c8);
  lVar4 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c003ec0(puVar3,param_2,lVar5,lVar6,lVar7,(int)lVar2 == 2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105737a74; end: 105737a8f; -[SCMinervaProtoModelsConverter protoGetSuggestedAIFontsRequest] */

void FUN_105737a74(void)

{
  _objc_opt_new(PTR_PTR_1126bd9d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105737a90; end: 105737b4b; -[SCMinervaProtoModelsConverter protoGenerateAIFontRequestFromPrompt:dreamPackId:dreamId:requestId:] */

void FUN_105737a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd9d8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c21f000();
  _objc_release(param_3);
  func_0x00010c191ba0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c191b80(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1ebd20(puVar1,param_2,param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105737b4c; end: 105737d47; -[SCMinervaProtoModelsConverter clientSuggestedAIFontsFromProtoResponse:] */

void FUN_105737b4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010c261e60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &uStack_130;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        uVar16 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        uVar14 = uVar16;
        func_0x00010bfdd3c0();
        if ((int)uVar14 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = uVar16;
          func_0x00010c26b060();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar3 = param_1;
        func_0x00010bf3ca60(param_1,param_2,uVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126bd9e0;
        _objc_alloc(PTR_PTR_1126bd9e0);
        uVar5 = uVar16;
        func_0x00010bf8a420(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8a400(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00e620(puVar4,param_2,uVar5,uVar16,uVar3);
        func_0x00010befa120(puVar15,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar16);
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar14);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      puVar7 = &uStack_130;
      lVar2 = lVar1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar7);
  if (puVar7 == (undefined8 *)0x0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar10 = puVar7;
    func_0x00010bf88fe0();
    if ((int)puVar10 == 8) {
      puVar10 = puVar7;
      func_0x00010c120080(puVar7);
      _objc_retainAutoreleasedReturnValue();
LAB_105737dc4:
      puVar9 = (undefined8 *)0x0;
    }
    else {
      if ((int)puVar10 != 2) {
        puVar10 = (undefined8 *)0x0;
        goto LAB_105737dc4;
      }
      puVar9 = puVar7;
      func_0x00010bf4db80(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = (undefined8 *)0x0;
    }
    puVar6 = puVar7;
    func_0x00010c1554c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar6;
    func_0x00010c08fa60();
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = puVar7;
      func_0x00010c1554c0(puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x00010c064640();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar6;
    func_0x00010c08fa60();
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      puVar13 = puVar7;
      func_0x00010c064640(puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar6);
    func_0x00010bf937c0(puVar7);
    puVar15 = PTR_PTR_1126bd9e8;
    _objc_alloc(PTR_PTR_1126bd9e8);
    func_0x00010c003ea0();
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  _objc_release(puVar7);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 105737d48; end: 105737ebf; -[SCMinervaProtoModelsConverter clientAIFontMediaFromProtoMediaInfo:] */

void FUN_105737d48(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar6 = (undefined *)0x0;
    goto LAB_105737ea0;
  }
  lVar3 = param_3;
  func_0x00010bf88fe0();
  if ((int)lVar3 == 8) {
    lVar3 = param_3;
    func_0x00010c120080(param_3);
    _objc_retainAutoreleasedReturnValue();
LAB_105737dc4:
    lVar2 = 0;
  }
  else {
    if ((int)lVar3 != 2) {
      lVar3 = 0;
      goto LAB_105737dc4;
    }
    lVar2 = param_3;
    func_0x00010bf4db80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = 0;
  }
  lVar1 = param_3;
  func_0x00010c1554c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_3;
    func_0x00010c1554c0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c064640();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x00010c064640(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  func_0x00010bf937c0(param_3);
  puVar6 = PTR_PTR_1126bd9e8;
  _objc_alloc(PTR_PTR_1126bd9e8);
  func_0x00010c003ea0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_105737ea0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105737ec0; end: 10573816b; -[SCMinervaProtoModelsConverter _urlFromSnapDoc:mlModelDesignationLabel:requestId:] */

undefined1 *
FUN_105737ec0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = &uStack_130;
  puVar5 = auStack_f0;
  uVar11 = 0x10;
  lVar1 = lVar2;
  func_0x00010bf52a60();
  puVar6 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar14 = *plStack_120;
    uStack_138 = param_4;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(lVar2);
        }
        puVar13 = *(undefined8 **)(lStack_128 + lVar12 * 8);
        puVar3 = puVar13;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf0b760();
        if ((int)puVar4 == 5) {
          puVar4 = puVar13;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bfd8fc0();
          _objc_release(puVar4);
          _objc_release(puVar3);
          if ((int)puVar5 != 0) {
            puVar4 = puVar13;
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar5;
            func_0x000108f56bcc();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            _objc_release(puVar4);
            puVar4 = puVar3;
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar4 == (undefined8 *)0x0) goto LAB_10573804c;
            puVar6 = PTR_PTR_1126bd9f0;
            _objc_alloc(PTR_PTR_1126bd9f0);
            puVar7 = puVar3;
            func_0x00010bdc2b80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar13;
            func_0x00010bf93e60();
            _objc_retainAutoreleasedReturnValue();
            param_4 = uStack_138;
            puVar4 = puVar7;
            puVar5 = puVar8;
            uVar11 = uStack_138;
            func_0x00010c017660(puVar6);
            _objc_release(puVar8);
            _objc_release(puVar13);
            _objc_release(puVar7);
            _objc_release(puVar3);
            goto LAB_10573810c;
          }
        }
        else {
LAB_10573804c:
          _objc_release(puVar3);
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      puVar4 = &uStack_130;
      puVar5 = auStack_f0;
      uVar11 = 0x10;
      lVar1 = lVar2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar6 = (undefined *)0x0;
    param_4 = uStack_138;
  }
LAB_10573810c:
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  plVar9 = &lStack_180;
  pcStack_148 = FUN_10573816c;
  lStack_170 = lVar2;
  uStack_168 = param_5;
  uStack_160 = param_4;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  _objc_retain(uVar11);
  puStack_178 = PTR_PTR_1126ea020;
  lStack_180 = lVar1;
  _objc_msgSendSuper2(&lStack_180,PTR_s_init_1125d9248);
  if (plVar9 != (long *)0x0) {
    _objc_retain(puVar4);
    uVar10 = *(undefined8 *)((long)plVar9 + 8);
    *(undefined8 **)((long)plVar9 + 8) = puVar4;
    _objc_release(uVar10);
    _objc_retain(puVar5);
    uVar10 = *(undefined8 *)((long)plVar9 + 0x10);
    *(undefined8 **)((long)plVar9 + 0x10) = puVar5;
    _objc_release(uVar10);
    _objc_retain(uVar11);
    uVar10 = *(undefined8 *)((long)plVar9 + 0x18);
    *(undefined8 *)((long)plVar9 + 0x18) = uVar11;
    _objc_release(uVar10);
  }
  _objc_release(uVar11);
  _objc_release(puVar5);
  _objc_release(puVar4);
  return (undefined1 *)plVar9;
}



/* Entry: 10573816c; end: 105738237; -[SCMinervaSuggestedPromptsServiceImpl initWithUNISCPbGenerativeBackgroundsService:minervaProtoModelsConverter:grpcCallOptionsBuilder:] */

undefined1 *
FUN_10573816c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea020;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105738238; end: 105738323; -[SCMinervaSuggestedPromptsServiceImpl getSuggestedPromptsWithParams:] */

void FUN_105738238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105738324; end: 105738387;  */

void FUN_105738324(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be233c0();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 105738388; end: 1057384df; -[SCMinervaSuggestedPromptsServiceImpl _getSuggestedPromptsWithParams:observer:] */

void FUN_105738388(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c119520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bfcaf00(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057384e0; end: 10573870f;  */

void FUN_1057384e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) && (param_3 != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar7);
    }
    else {
      lVar2 = param_2;
      func_0x00010c262740();
      puVar5 = PTR_PTR_1126af5d0;
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (lVar2 == 0) {
        lVar2 = lVar1;
        _objc_opt_class(lVar1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(lVar2);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        puVar5 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar7);
        _objc_release(puVar5);
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        puVar3 = *(undefined **)(lVar1 + 0x10);
        func_0x00010c269d40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf3d520();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2619e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar7);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
    }
    _objc_release(puVar3);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_2 + 0x18,0);
  _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 105738710; end: 10573874b; -[SCMinervaSuggestedPromptsServiceImpl .cxx_destruct] */

void FUN_105738710(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10573874c; end: 1057388cf; -[UNISCMinervaMinervaServiceFactory createUNISCMinervaServiceWithClientSBConfigKey:requestTimeoutInSeconds:] */

void FUN_10573874c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_4 == 0) {
    lVar2 = param_1;
    func_0x00010be606a0(param_1);
  }
  else {
    lVar2 = param_4;
    func_0x00010c067ec0(param_4);
    lVar2 = (long)(int)lVar2;
  }
  func_0x00010c1eeba0(puVar1,param_2,(long)((double)lVar2 * 1000.0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c1fd6e0(puVar1,param_2,param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126bd9f8;
  _objc_alloc(PTR_PTR_1126bd9f8);
  func_0x00010c058f80();
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1057388d0; end: 105738a53; -[UNISCMinervaMinervaServiceFactory createUNISCSuggestedPromptsServiceWithClientSBConfigKey:requestTimeoutInSeconds:] */

void FUN_1057388d0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_4 == 0) {
    lVar2 = param_1;
    func_0x00010be60700(param_1);
  }
  else {
    lVar2 = param_4;
    func_0x00010c067ec0(param_4);
    lVar2 = (long)(int)lVar2;
  }
  func_0x00010c1eeba0(puVar1,param_2,(long)((double)lVar2 * 1000.0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c1fd6e0(puVar1,param_2,param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126bda00;
  _objc_alloc(PTR_PTR_1126bda00);
  func_0x00010c058f80();
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105738a54; end: 105738b3b; -[UNISCMinervaMinervaServiceFactory _minervaGrpcTimeoutSeconds] */

long FUN_105738a54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1195e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dfa1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bda08;
  _objc_alloc();
  uVar3 = uVar1;
  func_0x00010c296d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008360(puVar2,param_2,uVar3,0);
  _objc_release(uVar3);
  puVar4 = puVar2;
  func_0x00010c136d80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x0) {
    lVar6 = 10;
  }
  else {
    puVar4 = puVar5;
    func_0x00010c136b40(puVar5);
    lVar6 = (long)(int)puVar4;
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return lVar6;
}



/* Entry: 105738b3c; end: 105738bdf; -[UNISCMinervaMinervaServiceFactory _minervaSuggestedPromptsGrpcTimeoutSeconds] */

long FUN_105738b3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1195e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dfa1d8,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bda10;
  _objc_alloc(PTR_PTR_1126bda10);
  uVar3 = uVar1;
  func_0x00010c296d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008360(puVar2,param_2,uVar3,0);
  _objc_release(uVar3);
  puVar4 = puVar2;
  func_0x00010c136b40(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return (long)(int)puVar4;
}



/* Entry: 105738be0; end: 105738c0f; -[UNISCMinervaMinervaServiceFactory .cxx_destruct] */

void FUN_105738be0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105738c10; end: 105738c83; -[UNISCGenerativeBackgroundsGenerativeBackgroundsService initWithUnifiedGrpcService:] */

undefined1 * FUN_105738c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea030;
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



/* Entry: 105738c84; end: 105738d67; -[UNISCGenerativeBackgroundsGenerativeBackgroundsService getSuggestedPromptsWithRequest:callOptionsBuilder:handler:] */

void FUN_105738c84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bda18;
  _objc_opt_class(PTR_PTR_1126bda18);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dfa1f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105738d68; end: 105738d73; -[UNISCGenerativeBackgroundsGenerativeBackgroundsService .cxx_destruct] */

void FUN_105738d68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105738d74; end: 105738de7; -[UNISCMinervaMinervaService initWithUnifiedGrpcService:] */

undefined1 * FUN_105738d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea038;
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


