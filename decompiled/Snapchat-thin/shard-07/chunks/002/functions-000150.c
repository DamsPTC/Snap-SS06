/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052c4d74; end: 1052c4e23;  */

void FUN_1052c4d74(void)

{
  func_0x0001052c50e4();
  return;
}



/* Entry: 1052c4e24; end: 1052c4e43;  */

long FUN_1052c4e24(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 1052c4e44; end: 1052c4e57;  */

void FUN_1052c4e44(void)

{
  FUN_1052c4f30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052c4e58; end: 1052c4e6b;  */

void FUN_1052c4e58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001052c4e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1052c4e6c; end: 1052c4e7f;  */

void FUN_1052c4e6c(void)

{
  FUN_1052c4e90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052c4e80; end: 1052c4e8f;  */

undefined1  [16] FUN_1052c4e80(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = "Djinni C++ Proxy";
  return auVar1;
}



/* Entry: 1052c4e90; end: 1052c4f2f;  */

void FUN_1052c4e90(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  
  *param_1 = &PTR_DAT_110875b60;
  __ZNSt3__15mutex4lockEv(0x11328ada8);
  puVar3 = param_1 + 5;
  uStack_28 = *puVar3;
  lVar2 = 0x11328ad40;
  func_0x000104bdbfcc(0x11328ad40,&uStack_28);
  iVar1 = *(int *)(lVar2 + 0x28) + -1;
  *(int *)(lVar2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    uStack_28 = *puVar3;
    func_0x000104bdc09c(0x11328ad40,&uStack_28);
  }
  __ZNSt3__15mutex6unlockEv(0x11328ada8);
  func_0x0001006856e8(puVar3);
  func_0x00010b9ace94(param_1);
  return;
}



/* Entry: 1052c4f30; end: 1052c4f3f;  */

void FUN_1052c4f30(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110875b10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052c4f40; end: 1052c4f6b;  */

long * FUN_1052c4f40(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001003a916c();
  }
  return param_1;
}



/* Entry: 1052c4f6c; end: 1052c510f;  */

void FUN_1052c4f6c(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  
  *param_2 = param_1;
  uVar1 = *(undefined8 *)(param_3 + 8);
  param_2[2] = *(undefined8 *)(param_3 + 0x10);
  param_2[1] = uVar1;
  param_2[3] = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  return;
}



/* Entry: 1052c5110; end: 1052c521b;  */

undefined1 * FUN_1052c5110(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052c521c();
  func_0x0001003b2110(auStack_78,0x1138195c8);
  FUN_1052808e4(auStack_68,param_2);
  uStack_58 = *(undefined8 *)(param_2 + 0x18);
  uStack_50 = 5;
  func_0x000105280820(auStack_48,param_2 + 0x20);
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar7 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar3 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_70;
  func_0x000104bdbf78();
  FUN_1052c537c(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_88 = FUN_1052c521c;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar7;
  puStack_98 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam00000001138195d0 & 1) == 0) {
    puVar3 = (undefined1 *)0x1138195d0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_Error");
      pcVar4 = "errorDomain";
      func_0x0001003a83dc(auStack_100,"errorDomain");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar4);
      pcVar4 = "errorCode";
      func_0x0001003a83dc(auStack_108,"errorCode");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar4);
      pcVar4 = "errorDescription";
      func_0x0001003a83dc(auStack_110,"errorDescription");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x1138195c0,auStack_f8,0,auStack_f0,3);
      lVar7 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      puVar3 = (undefined1 *)0x1138195d0;
      ___cxa_guard_release(0x1138195d0);
    }
  }
  FUN_1052c537c(uStack_a8);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138195c0;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 1052c521c; end: 1052c537b;  */

undefined8 FUN_1052c521c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138195d0 & 1) == 0) {
    param_1 = 0x1138195d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_Error");
      pcVar1 = "errorDomain";
      func_0x0001003a83dc(auStack_80,"errorDomain");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar1);
      pcVar1 = "errorCode";
      func_0x0001003a83dc(auStack_88,"errorCode");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar1);
      pcVar1 = "errorDescription";
      func_0x0001003a83dc(auStack_90,"errorDescription");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138195c0,auStack_78,0,auStack_70,3);
      lVar3 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      param_1 = 0x1138195d0;
      ___cxa_guard_release(0x1138195d0);
    }
  }
  FUN_1052c537c(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138195c0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052c537c; end: 1052c538f;  */

void FUN_1052c537c(void)

{
  return;
}



/* Entry: 1052c5390; end: 1052c53f3;  */

void FUN_1052c5390(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  func_0x000108b8099c(&uStack_40,lStack_28 + 0x18);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 1052c53f4; end: 1052c54b7;  */

undefined1 * FUN_1052c53f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052c54b8();
  func_0x0001003b2110(auStack_48,0x1138195e0);
  func_0x000108b80a1c(auStack_38,param_2);
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar3 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar1 = auStack_40;
  func_0x000104bdbf78(puVar1);
  FUN_1052c559c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_1052c54b8;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam00000001138195e8 & 1) == 0) {
    puVar1 = (undefined1 *)0x1138195e8;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_UUID");
      pcVar2 = "id";
      func_0x0001003a83dc(auStack_90,"id");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x1138195d8,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar1 = (undefined1 *)0x1138195e8;
      ___cxa_guard_release(0x1138195e8);
    }
  }
  FUN_1052c559c(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x1138195d8;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar1;
}



/* Entry: 1052c54b8; end: 1052c559b;  */

undefined8 FUN_1052c54b8(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138195e8 & 1) == 0) {
    param_1 = 0x1138195e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_UUID");
      pcVar1 = "id";
      func_0x0001003a83dc(auStack_40,"id");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x1138195d8,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x1138195e8;
      ___cxa_guard_release(0x1138195e8);
    }
  }
  FUN_1052c559c(uStack_18);
  if ((bool)in_ZR) {
    return 0x1138195d8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052c559c; end: 1052c55af;  */

void FUN_1052c559c(void)

{
  return;
}



/* Entry: 1052c55b0; end: 1052c562b;  */

void FUN_1052c55b0(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_1052c562c();
  func_0x0001003b2110(auStack_30,0x1138195f8);
  func_0x000104bdb9bc(auStack_28,auStack_30,0,0);
  func_0x0001003b1f60(auStack_30);
  func_0x00010b9a8f60(param_1,auStack_28);
  func_0x000104bdbf78(auStack_28);
  return;
}



/* Entry: 1052c562c; end: 1052c56b3;  */

undefined8 FUN_1052c562c(void)

{
  int iVar1;
  undefined1 auStack_18 [8];
  
  if ((bRam0000000113819600 & 1) == 0) {
    iVar1 = 0x13819600;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_18,"_djinni_record_Void");
      func_0x000104bdbd44(0x1138195f0,auStack_18,0,0,0);
      func_0x0001003a8c94(auStack_18);
      ___cxa_guard_release(0x113819600);
    }
  }
  return 0x1138195f0;
}



/* Entry: 1052c56b4; end: 1052c5743;  */

void FUN_1052c56b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x0001000f6108(param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1052c5744; end: 1052c574f; -[SCComposerStringsModule getModulePath] */

undefined ** FUN_1052c5744(void)

{
  return &PTR____CFConstantStringClassReference_110dcedd8;
}



/* Entry: 1052c5750; end: 1052c57fb; -[SCComposerStringsModule loadModule] */

undefined * FUN_1052c5750(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6d48;
  func_0x00010bfbc0a0(PTR_PTR_1126b6d48,param_2,&PTR___NSConcreteGlobalBlock_110875bb0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  uVar3 = param_2;
  func_0x00010b97fc3c(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010b97fc3c(param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  FUN_1052c56b4(uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b97f778(param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return (undefined *)0x1;
}



/* Entry: 1052c57fc; end: 1052c588f;  */

undefined8 FUN_1052c57fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  func_0x00010b97fc3c(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010b97fc3c(param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_1052c56b4(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b97f778(param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 1052c5890; end: 1052c59cf; -[SCComposerUICoverage initWithUiEventObservable:] */

undefined8 * FUN_1052c5890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e74a8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b6db8;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1052c59d0; end: 1052c5a1f;  */

void FUN_1052c59d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0e3f60(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052c5a20; end: 1052c5c23; -[SCComposerUICoverage onEvent:] */

void FUN_1052c5a20(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf00c80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c0fa9c0();
  if (uVar2 == 0) {
    uVar2 = uVar3;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      func_0x00010c09ef00(uVar3);
      uVar4 = uVar2;
      func_0x00010bfe3a40();
      _objc_retainAutoreleasedReturnValue();
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x00010c2954e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        ppuVar8 = &PTR____CFConstantStringClassReference_110dcee38;
        if (uVar5 == 0) {
          uVar5 = uVar4;
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf4bb00();
          _objc_release(uVar5);
          if ((int)uVar6 == 0) {
            ppuVar8 = &PTR____CFConstantStringClassReference_110dcee58;
          }
        }
        _objc_retain(ppuVar8);
        _objc_retain(uVar4);
        _objc_retain(uVar4);
        puVar1 = PTR_s_pageViewName_11261a2a0;
        ppuVar7 = &PTR____CFConstantStringClassReference_110dcee98;
        uVar5 = uVar4;
        do {
          uVar6 = uVar5;
          _objc_opt_respondsToSelector(uVar5,puVar1);
          if (((uVar6 & 1) != 0) && (uVar6 = uVar5, func_0x00010c0f8ec0(), uVar6 != 0)) {
            ppuVar7 = (undefined **)PTR_PTR_1126afdd8;
            func_0x00010bfc8740(PTR_PTR_1126afdd8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar5);
            break;
          }
          uVar6 = uVar5;
          func_0x00010c0d9e20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          uVar5 = uVar6;
        } while (uVar6 != 0);
        _objc_release(uVar4);
        FUN_1052c5cc8(*(undefined8 *)(param_1 + 8),ppuVar7,ppuVar8,1);
        _objc_release(ppuVar7);
        _objc_release(ppuVar8);
      }
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052c5c24; end: 1052c5c53; -[SCComposerUICoverage .cxx_destruct] */

void FUN_1052c5c24(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052c5c54; end: 1052c5cc7; -[SCGrapheneComposerUicoverageMetric2 init] */

undefined1 * FUN_1052c5c54(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e74b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1052c5cc8; end: 1052c5ef7;  */

void FUN_1052c5cc8(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110875c00,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar2 = 0;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
  pcVar1 = pcVar1 + 0x20;
  _objc_loadWeakRetained(pcVar1);
  func_0x00010be07b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 1052c5ef8; end: 1052c5f23;  */

void FUN_1052c5ef8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be07b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052c5f24; end: 1052c5f33; -[SCUpdatesFrequencyImpl _emitEventIfNeeded] */

void FUN_1052c5f24(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be07b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__emitEvent_11255f878);
  return;
}



/* Entry: 1052c5f34; end: 1052c5f6f; -[SCUpdatesFrequencyImpl .cxx_destruct] */

void FUN_1052c5f34(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052c5f70; end: 1052c6087; -[SCMainCameraLensExplorerDeepLinkHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052c5f70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b6dc0;
  _objc_alloc(PTR_PTR_1126b6dc0);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112720c2c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010c092d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_112720c30;
    _objc_loadWeakRetained(lVar5);
  }
  lVar3 = lVar5;
  func_0x00010bf68700(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023d80(puVar1,param_2,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  param_1 = param_1 + _DAT_112720c28;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052c6088; end: 1052c60cb; -[SCMainCameraLensExplorerDeepLinkHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052c6088(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112720c30);
  _objc_destroyWeak(param_1 + _DAT_112720c2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112720c28);
  return;
}



/* Entry: 1052c60cc; end: 1052c60df; -[SCLensExplorerDeepLinkTransformerPlugin identifier] */

void FUN_1052c60cc(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1052c60e0; end: 1052c60e7; -[SCLensExplorerDeepLinkTransformerPlugin priority] */

undefined8 FUN_1052c60e0(void)

{
  return 1000;
}



/* Entry: 1052c60e8; end: 1052c62af; -[SCLensExplorerDeepLinkTransformerPlugin canTransformURL:] */

uint FUN_1052c60e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dc8d78;
  uVar1 = param_3;
  func_0x00010c1504a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc8d78,param_2,uVar1);
  _objc_release(uVar1);
  ppuVar7 = &PTR____CFConstantStringClassReference_110dc8d58;
  uVar1 = param_3;
  func_0x00010c1504a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc8d58,param_2,uVar1);
  _objc_release(uVar1);
  if (ppuVar6 == (undefined **)0x0 || ppuVar7 == (undefined **)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dcefd8;
    uVar1 = param_3;
    func_0x00010bfe4420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dcefd8,param_2,uVar1);
    if (ppuVar6 == (undefined **)0x0) {
      _objc_release(uVar1);
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dceff8;
      uVar2 = param_3;
      func_0x00010bfe4420(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dceff8,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (ppuVar6 != (undefined **)0x0) goto LAB_1052c61ec;
    }
    uVar1 = param_3;
    func_0x00010c0f5860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    if (uVar2 < 2) {
      uVar5 = 1;
    }
    else {
      func_0x00010bec8fa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar4 = param_1;
      func_0x00010bf4b900(param_1,param_2,uVar3);
      uVar5 = (uint)uVar4 ^ 1;
      _objc_release(uVar3);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  else {
LAB_1052c61ec:
    uVar5 = 0;
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1052c62b0; end: 1052c635f; -[SCLensExplorerDeepLinkTransformerPlugin transformedURLForDeepLinkURL:] */

void FUN_1052c62b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf2da80(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    param_1 = param_3;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0f5860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (uVar2 < 2) {
      func_0x00010beceea0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010beceee0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1052c6360; end: 1052c6377; -[SCLensExplorerDeepLinkTransformerPlugin _transformedLensExplorerUrl] */

void FUN_1052c6360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithString__11254e6b8,
             &PTR____CFConstantStringClassReference_110dcf038);
  return;
}



/* Entry: 1052c6378; end: 1052c66a7; -[SCLensExplorerDeepLinkTransformerPlugin _transformedUnlockUrlFromUrl:] */

void FUN_1052c6378(undefined8 param_1,undefined8 param_2,undefined *param_3)

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
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf51e00();
  puVar2 = param_3;
  func_0x00010c0f5860();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = param_3;
  func_0x00010c11db20(param_3,param_2,&PTR____CFConstantStringClassReference_110dcef18);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010c11db20(param_3,param_2,&PTR____CFConstantStringClassReference_110dc3418);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010c11db20(param_3,param_2,&PTR____CFConstantStringClassReference_110f83ad8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010c11db20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_alloc();
  func_0x00010c04e820();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
  func_0x00010c02dc20();
  func_0x00010befa120(puVar8,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
  func_0x00010c02dc20();
  func_0x00010befa120(puVar8,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
  func_0x00010c02dc20();
  func_0x00010befa120(puVar8,param_2,puVar9);
  _objc_release(puVar9);
  if (puVar2 != (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
    func_0x00010c02dc20();
    func_0x00010befa120(puVar8,param_2,puVar9);
    _objc_release(puVar9);
  }
  if (puVar4 != (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
    func_0x00010c02dc20();
    func_0x00010befa120(puVar8,param_2,puVar9);
    _objc_release(puVar9);
  }
  if (puVar5 != (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
    func_0x00010c02dc20();
    func_0x00010befa120(puVar8,param_2,puVar9);
    _objc_release(puVar9);
  }
  if (puVar6 != (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
    func_0x00010c02dc20();
    func_0x00010befa120(puVar8,param_2,puVar9);
    _objc_release(puVar9);
  }
  func_0x00010c1e6460(puVar7,param_2,puVar8);
  puVar10 = puVar7;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  if (puVar10 != (undefined *)0x0) {
    puVar9 = puVar10;
  }
  _objc_retain(puVar9);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1052c66a8; end: 1052c6723; -[SCLensExplorerDeepLinkTransformerPlugin _supportedFeatureKeys] */

undefined1 * FUN_1052c66a8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f83a78;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f2edf8;
  pppuVar4 = &ppuStack_28;
  uVar5 = 2;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_70;
  _objc_retain(pppuVar4);
  _objc_retain(uVar5);
  puStack_68 = PTR_PTR_1126e74c0;
  puStack_70 = puVar1;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    _objc_retain(pppuVar4);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 8);
    *(undefined ****)((long)ppuVar2 + 8) = pppuVar4;
    _objc_release(uVar3);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x10);
    *(undefined8 *)((long)ppuVar2 + 0x10) = uVar5;
    _objc_release(uVar3);
  }
  _objc_release(uVar5);
  _objc_release(pppuVar4);
  return (undefined1 *)ppuVar2;
}



/* Entry: 1052c6724; end: 1052c67c7; -[SCMainCameraLensExplorerDeepLinkHandlerPlugin initWithLensExplorerNavigation:deeplinkPresentationHandler:] */

undefined1 *
FUN_1052c6724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e74c0;
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



/* Entry: 1052c67c8; end: 1052c684b; -[SCMainCameraLensExplorerDeepLinkHandlerPlugin canHandleDeepLink:] */

undefined8 FUN_1052c67c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf8d040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010bf2cba0(uVar3,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 1052c684c; end: 1052c6a33; -[SCMainCameraLensExplorerDeepLinkHandlerPlugin handleDeepLink:additionalInfo:uiContainer:sourceViewController:] */

void FUN_1052c684c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf9b3e0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar9 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f83d78);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010bf1f3c0();
    _objc_release(uVar9);
    uVar9 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110dcb898);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar9;
    func_0x00010bf1f3c0();
    _objc_release(uVar9);
    uVar9 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110dcefb8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010bf1f3c0();
    _objc_release(uVar9);
    uVar1 = (uint)uVar4 | (uint)uVar5 | (uint)uVar6;
    func_0x00010be4ac20(param_1,param_2,uVar1 & 1);
    func_0x00010be4ab20(param_1,param_2,uVar1 & 1);
    lVar7 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c10f7e0(lVar7,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(lVar7);
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      func_0x00010c10cb40();
    }
    else {
      func_0x00010c10cb20();
    }
    _objc_release(uVar9);
    _objc_release(lVar8);
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052c6a34; end: 1052c6a43; -[SCMainCameraLensExplorerDeepLinkHandlerPlugin _lensExplorerSourceTypeFromExternalSource:] */

undefined8 FUN_1052c6a34(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 8;
  if (param_3 == 0) {
    uVar1 = 9;
  }
  return uVar1;
}



/* Entry: 1052c6a44; end: 1052c6a4b; -[SCMainCameraLensExplorerDeepLinkHandlerPlugin _lensExplorerCameraSourceTypeFromExternalSource:] */

undefined4 FUN_1052c6a44(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  return param_3;
}



/* Entry: 1052c6a4c; end: 1052c6a7b; -[SCMainCameraLensExplorerDeepLinkHandlerPlugin .cxx_destruct] */

void FUN_1052c6a4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052c6a7c; end: 1052c6adf; -[SCAudioRouteImpl initWithRouteType:portDescription:] */

long FUN_1052c6a7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return param_1;
}



/* Entry: 1052c6ae0; end: 1052c6b2f; -[SCAudioRouteImpl initAsSpeakerRoute] */

long FUN_1052c6ae0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x30) = 2;
  return param_1;
}



/* Entry: 1052c6b30; end: 1052c6bb7; -[SCAudioRouteImpl displayName] */

void FUN_1052c6b30(undefined *param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x30) == 1) {
    puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar1;
    func_0x00010c09e620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else if (*(long *)(param_1 + 0x30) == 2) {
    FUN_1052d0280();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = *(undefined **)(param_1 + 0x28);
    func_0x00010c1040e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1052c6bb8; end: 1052c6be3; -[SCAudioRouteImpl metricDimensionValue] */

undefined ** FUN_1052c6bb8(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x30) - 1;
  if (uVar1 < 3) {
    return (undefined **)(&PTR_PTR_110875cd8)[uVar1];
  }
  return &PTR____CFConstantStringClassReference_110dcf058;
}



/* Entry: 1052c6be4; end: 1052c6c47; -[SCAudioRouteImpl loggingName] */

void FUN_1052c6be4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c1040e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c0ccae0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1052c6c48; end: 1052c6cbf; -[SCAudioRouteImpl isEqual:] */

ulong FUN_1052c6c48(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126b6dc8;
    _objc_opt_class(PTR_PTR_1126b6dc8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c072020(param_1);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1052c6cc0; end: 1052c6dbb; -[SCAudioRouteImpl isEqualToSCAudioRoute:] */

long FUN_1052c6cc0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x30);
  lVar4 = param_3;
  func_0x00010c27dd80();
  if (lVar3 == lVar4) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010bdc2a80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c065dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bdc2a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    _objc_retain(lVar2);
    if (lVar1 == lVar2) {
      lVar4 = 1;
    }
    else if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar1;
      func_0x00010c071ae0(lVar1,param_2,lVar2);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  else {
    lVar4 = 0;
  }
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1052c6dbc; end: 1052c6e0f; -[SCAudioRouteImpl hash] */

long FUN_1052c6dbc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bdc2a80(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfde980();
  _objc_release(lVar1);
  return *(long *)(param_1 + 0x30) + lVar2 * 0x1f;
}



/* Entry: 1052c6e10; end: 1052c6e17; -[SCAudioRouteImpl availableTime] */

undefined8 FUN_1052c6e10(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052c6e18; end: 1052c6e1f; -[SCAudioRouteImpl inputPortDescription] */

undefined8 FUN_1052c6e18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1052c6e20; end: 1052c6e27; -[SCAudioRouteImpl type] */

undefined8 FUN_1052c6e20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1052c6e28; end: 1052c6e7b; -[SCAudioRouteImpl .cxx_destruct] */

void FUN_1052c6e28(long param_1)

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



/* Entry: 1052c6e7c; end: 1052c6f4b; -[SCAudioSessionConfigurationFactoryImpl createConfigurationFor:] */

void FUN_1052c6e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 0:
    func_0x00010bde4860();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 1:
    func_0x00010bde4900();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    func_0x00010bde47e0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 3:
    uVar1 = 1;
    goto code_r0x0001052c6ef0;
  case 4:
    func_0x00010bde4820();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 5:
    func_0x00010bde48c0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    func_0x00010bde48e0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 7:
    uVar1 = 0;
code_r0x0001052c6ef0:
    func_0x00010bde4800(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 8:
    func_0x00010bde4840();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 9:
    func_0x00010bde4920();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052c6f4c; end: 1052c6fcb; -[SCAudioSessionConfigurationFactoryImpl _templateBuilder] */

void FUN_1052c6f4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6dd0;
  _objc_alloc(PTR_PTR_1126b6dd0);
  func_0x00010bffcf80();
  puVar2 = PTR_PTR_1126b6dd8;
  func_0x00010bf0ef20(PTR_PTR_1126b6dd8,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052c6fcc; end: 1052c70a7; -[SCAudioSessionConfigurationFactoryImpl _configurationForCameraRecording] */

void FUN_1052c6fcc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010becb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa3c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8a00(lVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1fc0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dcf0d8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6de0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf92420(puVar3,param_2,uVar2);
  _objc_release(uVar2);
  if ((int)puVar3 != 0) {
    func_0x00010c2b8d80(lVar1,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar4 = lVar1;
  func_0x00010bf21f60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1052c70a8; end: 1052c7117; -[SCAudioSessionConfigurationFactoryImpl _configurationForShazam] */

void FUN_1052c70a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010becb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa3c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dcf0f8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf21f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7118; end: 1052c7187; -[SCAudioSessionConfigurationFactoryImpl _configurationForAudioAnalysis] */

void FUN_1052c7118(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010becb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa3c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dcf118);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf21f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7188; end: 1052c721f; -[SCAudioSessionConfigurationFactoryImpl _configurationForAudioNoteRecorder] */

void FUN_1052c7188(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010becb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa3c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b87a0(param_1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8a00(param_1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dcf138);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf21f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7220; end: 1052c72cf; -[SCAudioSessionConfigurationFactoryImpl _configurationForAudioNotePlayerWithProximityEnabled:] */

void FUN_1052c7220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010becb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa3c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b87a0(param_1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b88e0(param_1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8860(param_1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dcf158);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf21f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c72d0; end: 1052c7353; -[SCAudioSessionConfigurationFactoryImpl _configurationForPreview] */

void FUN_1052c72d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010becb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa3c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b87a0(param_1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dae358);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf21f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7354; end: 1052c73eb; -[SCAudioSessionConfigurationFactoryImpl _configurationForPreviewVoiceoverTool] */

void FUN_1052c7354(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010becb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa3c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b87a0(param_1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8a00(param_1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dcf178);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf21f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c73ec; end: 1052c746f; -[SCAudioSessionConfigurationFactoryImpl _configurationForCameraMusicPlayback] */

void FUN_1052c73ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010becb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa3c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b87a0(param_1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dcf198);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf21f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7470; end: 1052c74f3; -[SCAudioSessionConfigurationFactoryImpl _configurationForSingleSnapPlayerVideoPlayback] */

void FUN_1052c7470(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010becb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa3c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8a60(param_1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dcf1b8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf21f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c74f4; end: 1052c74ff; -[SCAudioSessionConfigurationFactoryImpl .cxx_destruct] */

void FUN_1052c74f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052c7500; end: 1052c7567;  */

void FUN_1052c7500(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      *(undefined8 *)PTR__AVAudioSessionPortBluetoothLE_11034cec0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136ba2a8;
  puRam00000001136ba2a8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052c7568; end: 1052c75ab; -[SCAudioSessionCore dealloc] */

void FUN_1052c7568(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bddef40();
  puStack_28 = PTR_PTR_1126e74d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1052c75ac; end: 1052c75ef; -[SCAudioSessionCore category] */

void FUN_1052c75ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf33240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c75f0; end: 1052c762b; -[SCAudioSessionCore categoryOptions] */

undefined8 FUN_1052c75f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf33580();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c762c; end: 1052c766f; -[SCAudioSessionCore mode] */

void FUN_1052c762c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7670; end: 1052c76c3; -[SCAudioSessionCore setActive:] */

undefined8 FUN_1052c7670(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1624c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c76c4; end: 1052c7773; -[SCAudioSessionCore setActive:completion:] */

void FUN_1052c76c4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1052c7774;
  puStack_50 = &UNK_1108523f8;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 1052c7774; end: 1052c77b7;  */

void FUN_1052c7774(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c162480(uVar1,param_2,*(undefined1 *)(param_1 + 0x30));
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001052c77a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    return;
  }
  return;
}



/* Entry: 1052c77b8; end: 1052c7877; -[SCAudioSessionCore setActive:notifyOthers:completion:] */

void FUN_1052c77b8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1052c7878;
  puStack_60 = &UNK_110875d10;
  uStack_58 = param_1;
  uStack_50 = param_5;
  uStack_48 = param_3;
  uStack_47 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_78);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(param_5);
  return;
}



/* Entry: 1052c7878; end: 1052c7947;  */

void FUN_1052c7878(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar4 = &uStack_40;
  if ((*(char *)(param_1 + 0x31) == '\x01') && (*(char *)(param_1 + 0x30) != '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15fac0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uStack_38 = 0;
    puVar4 = &uStack_38;
    uVar2 = uVar1;
    func_0x00010c162500();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15fac0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uStack_40 = 0;
    uVar2 = uVar1;
    func_0x00010c1624c0();
  }
  uVar5 = *puVar4;
  _objc_retain(uVar5);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
  }
  _objc_release(uVar5);
  return;
}



/* Entry: 1052c7948; end: 1052c7a23; -[SCAudioSessionCore setCategory:withOptions:completion:] */

void FUN_1052c7948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1052c7a24;
  puStack_68 = &UNK_110845188;
  uStack_60 = param_3;
  uStack_58 = param_1;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f88c0(uVar1,param_2,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1052c7a24; end: 1052c7aab;  */

void FUN_1052c7a24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15fac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c17a0e0();
  _objc_retain(0);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
  }
  _objc_release(0);
  return;
}



/* Entry: 1052c7aac; end: 1052c7ab3; -[SCAudioSessionCore secondaryAudioShouldBeSilencedHint] */

undefined1 FUN_1052c7aac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 1052c7ab4; end: 1052c7af7; -[SCAudioSessionCore availableInputs] */

void FUN_1052c7ab4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf12720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7af8; end: 1052c7b3f; -[SCAudioSessionCore currentRoute] */

void FUN_1052c7af8(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7b40; end: 1052c7bab; -[SCAudioSessionCore setCurrentRoute:] */

void FUN_1052c7b40(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (param_3 != *(long *)(param_1 + 8)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052c7bac; end: 1052c7bf3; -[SCAudioSessionCore previousRoute] */

void FUN_1052c7bac(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7bf4; end: 1052c7c5f; -[SCAudioSessionCore setPreviousRoute:] */

void FUN_1052c7bf4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (param_3 != *(long *)(param_1 + 0x10)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052c7c60; end: 1052c7c9b; -[SCAudioSessionCore maximumInputNumberOfChannels] */

undefined8 FUN_1052c7c60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c34e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c7c9c; end: 1052c7cd7; -[SCAudioSessionCore maximumOutputNumberOfChannels] */

undefined8 FUN_1052c7c9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c35a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c7cd8; end: 1052c7d1b; -[SCAudioSessionCore inputGain] */

undefined8 FUN_1052c7cd8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c065a80();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1052c7d1c; end: 1052c7d57; -[SCAudioSessionCore inputGainSettable] */

undefined8 FUN_1052c7d1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c075980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c7d58; end: 1052c7d93; -[SCAudioSessionCore inputAvailable] */

undefined8 FUN_1052c7d58(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c075960();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1052c7d94; end: 1052c7dd7; -[SCAudioSessionCore inputDataSources] */

void FUN_1052c7d94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c065900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7dd8; end: 1052c7e1b; -[SCAudioSessionCore inputDataSource] */

void FUN_1052c7dd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0658e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7e1c; end: 1052c7e5f; -[SCAudioSessionCore outputDataSources] */

void FUN_1052c7e1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0eec60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7e60; end: 1052c7ea3; -[SCAudioSessionCore outputDataSource] */

void FUN_1052c7e60(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0eec40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7ea4; end: 1052c7ee7; -[SCAudioSessionCore preferredInput] */

void FUN_1052c7ea4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c106c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052c7ee8; end: 1052c7f2b; -[SCAudioSessionCore sampleRate] */

undefined8 FUN_1052c7ee8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149840();
  _objc_release(param_2);
  return param_1;
}


