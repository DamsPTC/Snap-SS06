/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4a1950; end: 10b4a196f;  */

void FUN_10b4a1950(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10b4a1ea8(&uStack_11,param_1);
  return;
}



/* Entry: 10b4a1970; end: 10b4a19cf;  */

void FUN_10b4a1970(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_10b4a4c1c(auStack_38,*(undefined8 *)(param_2 + 0xa0),param_4,param_3);
  lVar1 = param_1;
  FUN_10b2d8a20(param_1,auStack_38);
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_1 + 0x18) = lVar1;
  func_0x000107c2be38(auStack_38);
  return;
}



/* Entry: 10b4a19d0; end: 10b4a19d3;  */

undefined8 * FUN_10b4a19d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110ced890;
  param_1[1] = &PTR_FUN_110ced940;
  puVar1 = param_1;
  func_0x000107c39648();
  func_0x000107c2bf10(puVar1 + 0x17);
  func_0x000107c30058(param_1 + 0x14);
  func_0x000107c3005c(param_1 + 0x13);
  FUN_10b4a1a28(param_1 + 0xb);
  func_0x000107c30060(param_1 + 5);
  return param_1;
}



/* Entry: 10b4a19d4; end: 10b4a19e7;  */

void FUN_10b4a19d4(void)

{
  FUN_10b4a1a84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a19e8; end: 10b4a1a27;  */

undefined8 * FUN_10b4a19e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + -1;
  *puVar1 = &PTR_FUN_110ced890;
  *param_1 = &PTR_FUN_110ced940;
  puVar2 = puVar1;
  func_0x000107c39648();
  func_0x000107c2bf10(puVar2 + 0x17);
  func_0x000107c30058(param_1 + 0x13);
  func_0x000107c3005c(param_1 + 0x12);
  FUN_10b4a1a28(param_1 + 10);
  func_0x000107c30060(param_1 + 4);
  return puVar1;
}



/* Entry: 10b4a1a28; end: 10b4a1a6f;  */

long * FUN_10b4a1a28(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x000107c2c6e4();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10b4a1a70; end: 10b4a1a83;  */

undefined8 * FUN_10b4a1a70(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_FUN_110ced890;
  puVar1[1] = &PTR_FUN_110ced940;
  puVar2 = puVar1;
  func_0x000107c39648();
  func_0x000107c2bf10(puVar2 + 0x17);
  func_0x000107c30058(puVar1 + 0x14);
  func_0x000107c3005c(puVar1 + 0x13);
  FUN_10b4a1a28(puVar1 + 0xb);
  func_0x000107c30060(puVar1 + 5);
  return puVar1;
}



/* Entry: 10b4a1a84; end: 10b4a1adb;  */

undefined8 * FUN_10b4a1a84(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110ced890;
  param_1[1] = &PTR_FUN_110ced940;
  puVar1 = param_1;
  func_0x000107c39648();
  func_0x000107c2bf10(puVar1 + 0x17);
  func_0x000107c30058(param_1 + 0x14);
  func_0x000107c3005c(param_1 + 0x13);
  FUN_10b4a1a28(param_1 + 0xb);
  func_0x000107c30060(param_1 + 5);
  return param_1;
}



/* Entry: 10b4a1adc; end: 10b4a1adf;  */

void FUN_10b4a1adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cedab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4a1ae0; end: 10b4a1af3;  */

void FUN_10b4a1ae0(void)

{
  FUN_10b4a1b24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a1af4; end: 10b4a1b23;  */

long FUN_10b4a1af4(long param_1)

{
  func_0x000107377770(param_1 + 0x118);
  __ZNSt3__15mutexD1Ev(param_1 + 0xc0);
  func_0x000107c60ca0(param_1 + 0xa0);
  func_0x0001006700e8(param_1 + 0x70);
  func_0x0001001ba7c0(param_1 + 0x48);
  func_0x00010060f240(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 10b4a1b24; end: 10b4a1b37;  */

void FUN_10b4a1b24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a1b38; end: 10b4a1b4b;  */

void FUN_10b4a1b38(void)

{
  func_0x00010b4a1b54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a1b4c; end: 10b4a1b5f;  */

void FUN_10b4a1b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b4a20a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b4a1b60; end: 10b4a1b9b;  */

undefined8 * FUN_10b4a1b60(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  func_0x00010527822c();
  func_0x000107c39624();
  FUN_10b4a1c08(auStack_70,1);
  FUN_10b4a1c60(puStack_60,param_2,param_3);
  func_0x00010b4a20c0();
  func_0x00010b4a1e74();
  func_0x000107c39628();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b4a20a4();
    func_0x00010b4a1e74();
    puVar2 = puStack_60;
    func_0x00010b4a2078();
    puVar2[1] = param_2;
    puVar3 = puVar2;
    FUN_10b4a1c30();
    puVar2[2] = puVar3;
    return puVar2;
  }
  return puStack_60;
}



/* Entry: 10b4a1b9c; end: 10b4a1c07;  */

long FUN_10b4a1b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  func_0x000107c39624();
  FUN_10b4a1c08(auStack_50,1);
  FUN_10b4a1c60(lStack_40,param_2,param_3);
  func_0x00010b4a20c0();
  func_0x00010b4a1e74();
  func_0x000107c39628();
  if ((bool)in_ZR) {
    return lStack_40;
  }
  ___stack_chk_fail();
  func_0x00010b4a20a4();
  func_0x00010b4a1e74();
  lVar1 = lStack_40;
  func_0x00010b4a2078();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_10b4a1c30();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 10b4a1c08; end: 10b4a1c2f;  */

long FUN_10b4a1c08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b4a1c30();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b4a1c30; end: 10b4a1c5f;  */

undefined8 * FUN_10b4a1c30(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x492492492492493) {
    puVar1 = (undefined8 *)(param_2 * 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cedb50;
  FUN_10b4a1cb8(param_1 + 3);
  return param_1;
}



/* Entry: 10b4a1c60; end: 10b4a1c97;  */

undefined8 * FUN_10b4a1c60(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cedb50;
  FUN_10b4a1cb8(param_1 + 3);
  return param_1;
}



/* Entry: 10b4a1c98; end: 10b4a1c9b;  */

void FUN_10b4a1c98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cedb50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4a1c9c; end: 10b4a1caf;  */

void FUN_10b4a1c9c(void)

{
  FUN_10b4a1e68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a1cb0; end: 10b4a1cb7;  */

void FUN_10b4a1cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b4a20a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b4a1cb8; end: 10b4a1cf7;  */

void FUN_10b4a1cb8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 in_register_00005008;
  
  func_0x000107c39644();
  uVar1 = *param_4;
  *param_2 = &PTR_FUN_110cedba0;
  param_2[2] = in_register_00005008;
  param_2[1] = param_1;
  *(undefined4 *)(param_2 + 3) = uVar1;
  func_0x000107c3962c();
  return;
}



/* Entry: 10b4a1cf8; end: 10b4a1cfb;  */

undefined8 * FUN_10b4a1cf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cedba0;
  func_0x000107c27f58(param_1 + 1);
  return param_1;
}



/* Entry: 10b4a1cfc; end: 10b4a1d0f;  */

void FUN_10b4a1cfc(void)

{
  FUN_10b4a1e3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a1d10; end: 10b4a1e3b;  */

long * FUN_10b4a1d10(long param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  int extraout_w10;
  long *unaff_x20;
  long *plStack_30;
  long lStack_28;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 2) {
    unaff_x20 = *(long **)(*(long *)(param_1 + 8) + 0xa0);
    lStack_28 = *(long *)(*(long *)(param_1 + 8) + 0xa8);
    plStack_30 = unaff_x20;
    if (lStack_28 != 0) {
      do {
        func_0x000107c39614();
      } while (extraout_w10 != 0);
    }
    FUN_10b4a3dfc();
    if ((bRam00000001137f64f0 & 1) == 0) {
      iVar2 = 0x137f64f0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        bVar1 = 0xe0;
        func_0x000107c2be10();
        bRam00000001137f64e8 = bVar1;
        ___cxa_guard_release(0x1137f64f0);
      }
    }
    if (((long)unaff_x20 < 1) && ((bRam00000001137f64e8 & 1) != 0)) {
      unaff_x20 = *(long **)(param_1 + 8);
      (**(code **)(*unaff_x20 + 0x10))();
    }
    func_0x000107c30058(&plStack_30);
  }
  else if (iVar2 == 1) {
    plVar3 = *(long **)(param_1 + 8);
    unaff_x20 = (long *)plVar3[0x16];
    if ((long)unaff_x20 < 1) goto LAB_10b4a1d54;
  }
  else if (iVar2 == 0) {
    plVar3 = *(long **)(param_1 + 8);
LAB_10b4a1d54:
                    /* WARNING: Could not recover jumptable at 0x00010b4a1d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return plVar3;
  }
  return unaff_x20;
}



/* Entry: 10b4a1e3c; end: 10b4a1e67;  */

undefined8 * FUN_10b4a1e3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cedba0;
  func_0x000107c27f58(param_1 + 1);
  return param_1;
}



/* Entry: 10b4a1e68; end: 10b4a1e83;  */

void FUN_10b4a1e68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cedb50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4a1e84; end: 10b4a1ea7;  */

void FUN_10b4a1e84(long param_1)

{
  func_0x000107c3965c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b4a1ea8; end: 10b4a1f07;  */

long FUN_10b4a1ea8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x000107c39624();
  FUN_10b4a1f08(auStack_40,1);
  FUN_10b4a1f5c();
  func_0x00010b4a20c0();
  func_0x00010b4a2044();
  func_0x000107c39628();
  if ((bool)in_ZR) {
    return lStack_30;
  }
  ___stack_chk_fail();
  func_0x00010b4a20a4();
  func_0x00010b4a2044();
  lVar1 = lStack_30;
  func_0x00010b4a2078();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_10b4a1f30();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 10b4a1f08; end: 10b4a1f2f;  */

long FUN_10b4a1f08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b4a1f30();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b4a1f30; end: 10b4a1f5b;  */

undefined8 * FUN_10b4a1f30(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cedc08;
  FUN_10b4a1fb4(param_1 + 3);
  return param_1;
}



/* Entry: 10b4a1f5c; end: 10b4a1f93;  */

undefined8 * FUN_10b4a1f5c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cedc08;
  FUN_10b4a1fb4(param_1 + 3);
  return param_1;
}



/* Entry: 10b4a1f94; end: 10b4a1f97;  */

void FUN_10b4a1f94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cedc08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4a1f98; end: 10b4a1fab;  */

void FUN_10b4a1f98(void)

{
  FUN_10b4a2038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a1fac; end: 10b4a1fb3;  */

void FUN_10b4a1fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b4a20a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b4a1fb4; end: 10b4a1feb;  */

void FUN_10b4a1fb4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 in_register_00005008;
  
  func_0x000107c39644();
  *param_2 = &PTR_FUN_110cedc58;
  param_2[2] = in_register_00005008;
  param_2[1] = param_1;
  func_0x000107c3962c();
  return;
}



/* Entry: 10b4a1fec; end: 10b4a1fef;  */

undefined8 * FUN_10b4a1fec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cedc58;
  func_0x000107c27f58(param_1 + 1);
  return param_1;
}



/* Entry: 10b4a1ff0; end: 10b4a2003;  */

void FUN_10b4a1ff0(void)

{
  FUN_10b4a200c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a2004; end: 10b4a200b;  */

void FUN_10b4a2004(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_10b4a4c1c(auStack_38,*(undefined8 *)(*(long *)(param_2 + 8) + 0xa0),param_4,param_3);
  lVar1 = param_1;
  FUN_10b2d8a20(param_1,auStack_38);
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_1 + 0x18) = lVar1;
  func_0x000107c2be38(auStack_38);
  return;
}



/* Entry: 10b4a200c; end: 10b4a2037;  */

undefined8 * FUN_10b4a200c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cedc58;
  func_0x000107c27f58(param_1 + 1);
  return param_1;
}



/* Entry: 10b4a2038; end: 10b4a2053;  */

void FUN_10b4a2038(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cedc08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4a2054; end: 10b4a2077;  */

void FUN_10b4a2054(long param_1)

{
  func_0x000107c3965c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b4a2078; end: 10b4a210b;  */

void FUN_10b4a2078(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b4a210c; end: 10b4a252b;  */

void FUN_10b4a210c(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  long ***ppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  ulong extraout_x8;
  ulong uVar14;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar15;
  long **extraout_x9;
  long *plVar16;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  long **extraout_x9_02;
  int extraout_w10;
  long **extraout_x10;
  long **pplVar17;
  long ***ppplVar18;
  long **extraout_x10_00;
  long unaff_x19;
  undefined8 *unaff_x20;
  long ***ppplVar19;
  long **pplVar20;
  long ***ppplVar21;
  long ***unaff_x25;
  long **pplVar22;
  long ***ppplStack_90;
  long **pplStack_88;
  long ***ppplStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  func_0x000107c396b4();
  __ZNSt3__15mutex4lockEv(param_2 + 0x50);
  uVar9 = (int)(param_4 - 4) < 0;
  uVar10 = param_4 == 4;
  if ((bool)uVar10) {
    uVar3 = *(undefined4 *)(unaff_x19 + 0x250);
    bVar4 = *(byte *)(unaff_x19 + 0xac);
    pplVar22 = (long **)(ulong)bVar4;
    ppplVar11 = (long ***)0x150;
    __Znwm();
    ppplVar19 = ppplVar11 + 1;
    *ppplVar19 = (long **)0x0;
    ppplVar11[2] = (long **)0x0;
    *ppplVar11 = (long **)&PTR_FUN_110cee138;
    pppplVar13 = (long ****)(ppplVar11 + 3);
    pppplVar12 = pppplVar13;
    FUN_10b49f5a4(pppplVar13,param_3,uVar3,bVar4 & 1);
    pplVar20 = *(long ***)(unaff_x19 + 0x108);
    ppplStack_90 = (long ***)pppplVar13;
    pplStack_88 = (long **)ppplVar11;
    if (pplVar20 != (long **)0x0) {
      func_0x00010b4a6890();
      pplVar22 = extraout_x9;
      if ((bool)uVar10) {
        pplVar22 = extraout_x10;
      }
      plVar16 = *(long **)(*(long *)(unaff_x19 + 0x100) + (long)pplVar22 * 8);
      if (plVar16 != (long *)0x0) {
        do {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_10b4a233c;
            pplVar17 = (long **)plVar16[1];
            if (pplVar17 != (long **)0x4) break;
            uVar9 = *(int *)(plVar16 + 2) + -4 < 0;
            if (*(int *)(plVar16 + 2) == 4) goto LAB_10b4a24a4;
          }
          if (((ulong)pplVar20 & extraout_x8) == 0) {
            pplVar17 = (long **)((ulong)pplVar17 & extraout_x8);
          }
          else if (pplVar20 <= pplVar17) {
            uVar14 = 0;
            if (pplVar20 != (long **)0x0) {
              uVar14 = (ulong)pplVar17 / (ulong)pplVar20;
            }
            pplVar17 = (long **)((long)pplVar17 - uVar14 * (long)pplVar20);
          }
          uVar9 = (long)pplVar17 - (long)pplVar22 < 0;
        } while (pplVar17 == pplVar22);
      }
    }
LAB_10b4a233c:
    func_0x000107c396e0();
    puVar1 = (undefined8 *)(unaff_x19 + 0x110);
    uStack_68 = 1;
    *pppplVar12 = (long ***)0x0;
    pppplVar12[1] = (long ***)0x4;
    *(undefined4 *)(pppplVar12 + 2) = 4;
    pppplVar12[3] = (long ***)pppplVar13;
    pppplVar12[4] = ppplVar11;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppplVar19,0x10);
      if (bVar8) {
        *ppplVar19 = (long **)((long)*ppplVar19 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    ppplStack_78 = (long ***)pppplVar12;
    puStack_70 = puVar1;
    func_0x000107c396a8(*(undefined8 *)(unaff_x19 + 0x118));
    if ((pplVar20 == (long **)0x0) || (func_0x000107c396a4(), (bool)uVar9)) {
      func_0x000107c39704();
      bVar8 = (long **)0x2 < pplVar20;
      uVar9 = pplVar20 == (long **)0x3;
      func_0x000107c39664();
      uVar2 = extraout_x8_01;
      if (!bVar8 || (bool)uVar9) {
        uVar2 = extraout_x9_01;
      }
      func_0x000107c300f0(unaff_x19 + 0x100,uVar2);
      pplVar20 = *(long ***)(unaff_x19 + 0x108);
      func_0x00010b4a6890();
      pplVar22 = extraout_x9_02;
      if ((bool)uVar9) {
        pplVar22 = extraout_x10_00;
      }
    }
    lVar15 = *(long *)(unaff_x19 + 0x100);
    if (*(long *)(lVar15 + (long)pplVar22 * 8) == 0) {
      *pppplVar12 = (long ***)*puVar1;
      *puVar1 = pppplVar12;
      *(undefined8 **)(lVar15 + (long)pplVar22 * 8) = puVar1;
      if (*pppplVar12 != (long ***)0x0) {
        pplVar22 = (*pppplVar12)[1];
        if (((ulong)pplVar20 & (long)pplVar20 - 1U) == 0) {
          pplVar22 = (long **)((ulong)pplVar22 & (long)pplVar20 - 1U);
        }
        else if (pplVar20 <= pplVar22) {
          uVar14 = 0;
          if (pplVar20 != (long **)0x0) {
            uVar14 = (ulong)pplVar22 / (ulong)pplVar20;
          }
          pplVar22 = (long **)((long)pplVar22 - uVar14 * (long)pplVar20);
        }
        *(long *****)(lVar15 + (long)pplVar22 * 8) = pppplVar12;
      }
    }
    else {
      func_0x00010b4a67a4();
    }
    func_0x00010b4a67c4();
LAB_10b4a24a4:
    *unaff_x20 = pppplVar13;
    unaff_x20[1] = ppplVar11;
    ppplStack_90 = (long ***)0x0;
    pplStack_88 = (long **)0x0;
    FUN_10b4a66ac(&ppplStack_90);
    goto LAB_10b4a24b4;
  }
  pppplVar13 = &ppplStack_90;
  func_0x000107c30064(pppplVar13,param_3,*(undefined4 *)(unaff_x19 + 0x250));
  pplVar22 = pplStack_88;
  ppplVar11 = ppplStack_90;
  ppplVar21 = (long ***)(ulong)param_4;
  ppplVar19 = *(long ****)(unaff_x19 + 0x108);
  if (ppplVar19 == (long ***)0x0) {
LAB_10b4a2298:
    func_0x000107c396e0();
    puVar1 = (undefined8 *)(unaff_x19 + 0x110);
    uStack_68 = 1;
    ppplStack_78 = (long ***)pppplVar13;
    puStack_70 = puVar1;
    *pppplVar13 = (long ***)0x0;
    pppplVar13[1] = ppplVar21;
    *(uint *)(pppplVar13 + 2) = param_4;
    pppplVar13[4] = (long ***)pplVar22;
    pppplVar13[3] = ppplVar11;
    if ((long ***)pplVar22 != (long ***)0x0) {
      do {
        func_0x000107c3967c();
      } while (extraout_w10 != 0);
    }
    func_0x000107c396a8(*(undefined8 *)(unaff_x19 + 0x118));
    if ((ppplVar19 == (long ***)0x0) || (func_0x000107c396a4(), (bool)uVar9)) {
      bVar7 = (long ***)0x2 < ppplVar19;
      bVar8 = ppplVar19 == (long ***)0x3;
      func_0x000107c39664((long)ppplVar19 << 1);
      uVar2 = extraout_x8_00;
      if (!bVar7 || bVar8) {
        uVar2 = extraout_x9_00;
      }
      func_0x000107c300f0(unaff_x19 + 0x100,uVar2);
      ppplVar19 = *(long ****)(unaff_x19 + 0x108);
      if (((ulong)ppplVar19 & (long)ppplVar19 - 1U) == 0) {
        unaff_x25 = (long ***)(ulong)((int)ppplVar19 + 7U & param_4);
      }
      else {
        unaff_x25 = ppplVar21;
        if (ppplVar19 <= ppplVar21) {
          uVar14 = 0;
          if (ppplVar19 != (long ***)0x0) {
            uVar14 = (ulong)ppplVar21 / (ulong)ppplVar19;
          }
          unaff_x25 = (long ***)((long)ppplVar21 - uVar14 * (long)ppplVar19);
        }
      }
    }
    lVar15 = *(long *)(unaff_x19 + 0x100);
    if (*(long *)(lVar15 + (long)unaff_x25 * 8) == 0) {
      *pppplVar13 = (long ***)*puVar1;
      *puVar1 = pppplVar13;
      *(undefined8 **)(lVar15 + (long)unaff_x25 * 8) = puVar1;
      if (*pppplVar13 != (long ***)0x0) {
        ppplVar11 = (long ***)(*pppplVar13)[1];
        if (((ulong)ppplVar19 & (long)ppplVar19 - 1U) == 0) {
          ppplVar11 = (long ***)((ulong)ppplVar11 & (long)ppplVar19 - 1U);
        }
        else if (ppplVar19 <= ppplVar11) {
          uVar14 = 0;
          if (ppplVar19 != (long ***)0x0) {
            uVar14 = (ulong)ppplVar11 / (ulong)ppplVar19;
          }
          ppplVar11 = (long ***)((long)ppplVar11 - uVar14 * (long)ppplVar19);
        }
        *(long *****)(lVar15 + (long)ppplVar11 * 8) = pppplVar13;
      }
    }
    else {
      func_0x00010b4a6910();
    }
    func_0x00010b4a67c4();
  }
  else {
    uVar14 = (long)ppplVar19 - 1;
    ppplVar18 = ppplVar21;
    if (ppplVar19 <= ppplVar21) {
      ppplVar18 = (long ***)0x0;
    }
    uVar9 = (long)((ulong)ppplVar19 & uVar14) < 0;
    unaff_x25 = (long ***)(ulong)((int)ppplVar19 + 7U & param_4);
    if (((ulong)ppplVar19 & uVar14) != 0) {
      unaff_x25 = ppplVar18;
    }
    plVar16 = *(long **)(*(long *)(unaff_x19 + 0x100) + (long)unaff_x25 * 8);
    if (plVar16 == (long *)0x0) goto LAB_10b4a2298;
    do {
      while( true ) {
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_10b4a2298;
        ppplVar18 = (long ***)plVar16[1];
        if (ppplVar18 == ppplVar21) break;
        if (((ulong)ppplVar19 & uVar14) == 0) {
          ppplVar18 = (long ***)((ulong)ppplVar18 & uVar14);
        }
        else if (ppplVar19 <= ppplVar18) {
          uVar6 = 0;
          if (ppplVar19 != (long ***)0x0) {
            uVar6 = (ulong)ppplVar18 / (ulong)ppplVar19;
          }
          ppplVar18 = (long ***)((long)ppplVar18 - uVar6 * (long)ppplVar19);
        }
        uVar9 = (long)ppplVar18 - (long)unaff_x25 < 0;
        if (ppplVar18 != unaff_x25) goto LAB_10b4a2298;
      }
      uVar9 = (int)(*(uint *)(plVar16 + 2) - param_4) < 0;
    } while (*(uint *)(plVar16 + 2) != param_4);
  }
  unaff_x20[1] = pplStack_88;
  *unaff_x20 = ppplStack_90;
  ppplStack_90 = (long ***)0x0;
  pplStack_88 = (long **)0x0;
  func_0x000107c300ec(&ppplStack_90);
LAB_10b4a24b4:
  func_0x000107c39680();
  return;
}



/* Entry: 10b4a252c; end: 10b4a25e3;  */

undefined8 * FUN_10b4a252c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cedca8;
  if (param_1[0x55] != 0) {
    func_0x00010bcceaec();
  }
  func_0x000107c2bf10(param_1 + 0x57);
  func_0x000107c27c20(param_1 + 0x55);
  func_0x000107c278a8(param_1 + 0x52);
  FUN_10b51af3c(param_1 + 0x4c);
  func_0x000107c300a8(param_1 + 0x47);
  FUN_10b4a5da0(param_1 + 0x3a);
  FUN_10b4a5d1c(param_1 + 0x35);
  func_0x00010b4a5ce0(param_1 + 0x34);
  func_0x00010b4a5c5c(param_1 + 0x2f);
  FUN_10b4a4f7c(param_1 + 0x2c);
  func_0x00010b4a4fb0(param_1 + 0x29);
  func_0x00010b49bec8(param_1 + 0x27);
  FUN_10b4a5c10(param_1 + 0x20);
  FUN_10b4a4fdc(param_1 + 0x16);
  __ZNSt3__15mutexD1Ev(param_1 + 10);
  FUN_10b4a05ec(param_1 + 1);
  return param_1;
}



/* Entry: 10b4a25e4; end: 10b4a25e7;  */

undefined8 * FUN_10b4a25e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cedca8;
  if (param_1[0x55] != 0) {
    func_0x00010bcceaec();
  }
  func_0x000107c2bf10(param_1 + 0x57);
  func_0x000107c27c20(param_1 + 0x55);
  func_0x000107c278a8(param_1 + 0x52);
  FUN_10b51af3c(param_1 + 0x4c);
  func_0x000107c300a8(param_1 + 0x47);
  FUN_10b4a5da0(param_1 + 0x3a);
  FUN_10b4a5d1c(param_1 + 0x35);
  func_0x00010b4a5ce0(param_1 + 0x34);
  func_0x00010b4a5c5c(param_1 + 0x2f);
  FUN_10b4a4f7c(param_1 + 0x2c);
  func_0x00010b4a4fb0(param_1 + 0x29);
  func_0x00010b49bec8(param_1 + 0x27);
  FUN_10b4a5c10(param_1 + 0x20);
  FUN_10b4a4fdc(param_1 + 0x16);
  __ZNSt3__15mutexD1Ev(param_1 + 10);
  FUN_10b4a05ec(param_1 + 1);
  return param_1;
}



/* Entry: 10b4a25e8; end: 10b4a25fb;  */

void FUN_10b4a25e8(void)

{
  FUN_10b4a252c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a25fc; end: 10b4a3a43;  */

void FUN_10b4a25fc(ulong *****param_1,long param_2,ulong *****param_3,long param_4,int param_5,
                  undefined8 *param_6,ulong ****param_7)

{
  ulong ***pppuVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  long lVar8;
  ulong *****pppppuVar9;
  ulong ****ppppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong *****extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong *****pppppuVar13;
  ulong *****extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong *****extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  ulong extraout_x8_13;
  ulong *****extraout_x8_14;
  ulong ****extraout_x8_15;
  ulong ****extraout_x8_16;
  ulong ****extraout_x8_17;
  ulong extraout_x8_18;
  ulong *****extraout_x9;
  ulong *****extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong *****extraout_x9_04;
  ulong *****extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  ulong extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  ulong *****extraout_x9_11;
  ulong *****extraout_x9_12;
  ulong extraout_x9_13;
  ulong extraout_x9_14;
  ulong extraout_x9_15;
  ulong *****extraout_x9_16;
  ulong *****extraout_x9_17;
  ulong uVar14;
  ulong extraout_x9_18;
  ulong extraout_x9_19;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *extraout_x10_04;
  ulong ****extraout_x10_05;
  ulong *****extraout_x11;
  ulong *****extraout_x11_00;
  ulong *****extraout_x11_01;
  ulong *****extraout_x11_02;
  ulong *****extraout_x11_03;
  ulong *****extraout_x11_04;
  ulong *****extraout_x11_05;
  ulong *****extraout_x11_06;
  ulong *****extraout_x11_07;
  ulong *****pppppuVar15;
  ulong *****extraout_x11_08;
  ulong *****extraout_x11_09;
  long *extraout_x12;
  long *extraout_x12_00;
  long *plVar16;
  long *extraout_x12_01;
  ulong ****extraout_x12_02;
  int iVar17;
  undefined8 *puVar18;
  ulong *****pppppuVar19;
  ulong uVar20;
  long lVar21;
  ulong *****pppppuVar22;
  ulong ****ppppuVar23;
  ulong *****pppppuVar24;
  ulong *****pppppuVar25;
  ulong *****pppppuVar26;
  ulong ****ppppuVar27;
  double dVar28;
  long lStack_100;
  ulong ****ppppuStack_f0;
  ulong ****ppppuStack_e8;
  ulong ****ppppuStack_e0;
  ulong ***pppuStack_d8;
  ulong ***pppuStack_d0;
  ulong ****ppppuStack_c0;
  ulong ****ppppuStack_b8;
  undefined8 uStack_b0;
  
  pppppuVar19 = param_1;
  if (param_5 == 3) {
LAB_10b4a2648:
    lStack_100 = 0;
    bVar7 = true;
  }
  else {
    pppppuVar19 = (ulong *****)*param_6;
    ppppuStack_e8 = (ulong ****)param_6[1];
    ppppuStack_f0 = (ulong ****)pppppuVar19;
    func_0x000107c2832c(pppppuVar19,ppppuStack_e8,&DAT_10f300a96,0,3);
    if (pppppuVar19 != (ulong *****)0xffffffffffffffff) {
      pppppuVar24 = &ppppuStack_f0;
      func_0x0001057fa6dc(pppppuVar24,0x2f,(long)pppppuVar19 + 3);
      pppppuVar19 = pppppuVar24;
      if (pppppuVar24 != (ulong *****)0xffffffffffffffff) {
        pppppuVar19 = &ppppuStack_f0;
        func_0x0001057fa6dc(pppppuVar19,0x3f,pppppuVar24);
        lVar21 = (long)pppppuVar19 - (long)pppppuVar24;
        if (pppppuVar19 == (ulong *****)0xffffffffffffffff) {
          lVar21 = -1;
        }
        pppppuVar19 = &ppppuStack_f0;
        func_0x000107c2810c(pppppuVar19,pppppuVar24,lVar21);
        ppppuStack_c0 = (ulong ****)pppppuVar19;
        ppppuStack_b8 = (ulong ****)pppppuVar24;
        if (pppppuVar24 != (ulong *****)0x0) {
          ppppuVar23 = param_1[0x52];
          ppppuVar10 = param_1[0x53];
          do {
            if (ppppuVar23 == ppppuVar10) goto LAB_10b4a2708;
            pppuVar1 = ppppuVar23[1];
            ppppuVar27 = (ulong ****)*ppppuVar23;
            if (-1 < (char)*(byte *)((long)ppppuVar23 + 0x17)) {
              pppuVar1 = (ulong ***)(ulong)*(byte *)((long)ppppuVar23 + 0x17);
              ppppuVar27 = ppppuVar23;
            }
            pppppuVar19 = &ppppuStack_c0;
            func_0x000105394f0c(pppppuVar19,ppppuVar27,pppuVar1);
            ppppuVar23 = ppppuVar23 + 3;
          } while ((int)pppppuVar19 == 0);
          goto LAB_10b4a2648;
        }
      }
    }
LAB_10b4a2708:
    ppppuVar23 = (ulong ****)&PTR_PTR_1133851b8;
    if (param_1[0x50] != (ulong ****)0x0) {
      ppppuVar23 = param_1[0x50];
    }
    if ((*(char *)(ppppuVar23 + 5) == '\x01') && (param_6[3] != 0)) {
      pppppuVar25 = (ulong *****)param_6[2];
      pppppuVar24 = pppppuVar25 + 3;
      lVar8 = param_6[3] * 0x30;
      for (lVar21 = lVar8; lVar21 != 0; lVar21 = lVar21 + -0x30) {
        pppppuVar19 = pppppuVar24 + -3;
        FUN_10b4a5048(pppppuVar19,&UNK_10f7708e7,7);
        if (((ulong)pppppuVar19 & 1) != 0) {
          ppppuStack_e8 = (ulong ****)(long)*(char *)((long)pppppuVar24 + 0x17);
          ppppuStack_f0 = (ulong ****)pppppuVar24;
          if ((long)ppppuStack_e8 < 0) {
            ppppuStack_f0 = *pppppuVar24;
            ppppuStack_e8 = pppppuVar24[1];
          }
          puVar18 = (undefined8 *)&UNK_110cedd88;
          lVar21 = 0x70;
          lStack_100 = 0x68;
          goto LAB_10b4a29d0;
        }
        pppppuVar24 = pppppuVar24 + 6;
      }
      do {
        if (lVar8 == 0) break;
        pppppuVar19 = pppppuVar25;
        FUN_10b4a5048(pppppuVar25,&DAT_10f2fc63f,3);
        pppppuVar25 = pppppuVar25 + 6;
        lVar8 = lVar8 + -0x30;
      } while ((int)pppppuVar19 == 0);
      bVar7 = false;
      lStack_100 = 0;
    }
    else {
      bVar7 = false;
      lStack_100 = 0;
    }
  }
  goto LAB_10b4a27b4;
  while( true ) {
    pppppuVar19 = &ppppuStack_f0;
    func_0x000105394f0c(pppppuVar19,puVar18[-1],*puVar18);
    puVar18 = puVar18 + 2;
    lVar21 = lVar21 + -0x10;
    if ((int)pppppuVar19 != 0) break;
LAB_10b4a29d0:
    if (lVar21 == 0) goto LAB_10b4a29f0;
  }
  lStack_100 = 0;
LAB_10b4a29f0:
  bVar7 = false;
LAB_10b4a27b4:
  FUN_10b4a3a44();
  pppppuVar24 = pppppuVar19;
  FUN_10b4a3ab4();
  if ((bRam00000001137f6570 & 1) == 0) {
    iVar17 = 0x137f6570;
    ___cxa_guard_acquire();
    if (iVar17 != 0) {
      ppuVar11 = &PTR_DAT_110cede20;
      func_0x000107c2be18();
      ppuRam00000001137f6568 = ppuVar11;
      func_0x000107c39694(0x1137f6570);
    }
  }
  ppuVar11 = ppuRam00000001137f6568;
  __ZNSt3__15mutex4lockEv(param_1 + 10);
  if (param_7 == param_1[0x44]) {
    pppppuVar25 = param_1 + 0x16;
    func_0x000107c3971c();
    if ((pppppuVar25 != (ulong *****)0x0) && (!bVar7)) {
      iVar17 = (int)pppppuVar19;
      ppppuVar23 = pppppuVar25[5];
      func_0x00010b4a6940();
      pppppuVar25 = (ulong *****)0x0;
      if (pppppuVar19 != (ulong *****)0x0) {
        pppppuVar25 = (ulong *****)((param_2 - (long)ppppuVar23) / (long)pppppuVar19);
      }
      ppppuVar27 = (ulong ****)((long)pppppuVar25 * (long)pppppuVar19);
      ppppuVar10 = param_1[0x2a];
      if (ppppuVar10 < param_1[0x2b]) {
        *ppppuVar10 = (ulong ***)ppppuVar23;
        ppppuVar10[1] = (ulong ***)ppppuVar27;
        pppppuVar22 = (ulong *****)(ppppuVar10 + 2);
      }
      else {
        param_3 = (ulong *****)param_1[0x29];
        lVar21 = (long)ppppuVar10 - (long)param_3;
        pppppuVar19 = (ulong *****)(lVar21 >> 4);
        uVar20 = (long)pppppuVar19 + 1;
        if (uVar20 >> 0x3c != 0) {
          func_0x00010b4a50ec();
          goto LAB_10b4a3980;
        }
        uVar12 = (long)param_1[0x2b] - (long)param_3;
        uVar14 = (long)uVar12 >> 3;
        if (uVar14 <= uVar20) {
          uVar14 = uVar20;
        }
        if (0x7fffffffffffffef < uVar12) {
          uVar14 = 0xfffffffffffffff;
        }
        if (uVar14 >> 0x3c != 0) {
          func_0x000104bd35f4();
          goto LAB_10b4a3980;
        }
        lVar8 = uVar14 << 4;
        __Znwm();
        puVar18 = (undefined8 *)(lVar8 + lVar21);
        *puVar18 = ppppuVar23;
        puVar18[1] = ppppuVar27;
        pppppuVar22 = (ulong *****)(puVar18 + 2);
        _memcpy(puVar18 + (long)pppppuVar19 * -2,param_3,lVar21);
        param_1[0x29] = (ulong ****)(puVar18 + (long)pppppuVar19 * -2);
        param_1[0x2a] = (ulong ****)pppppuVar22;
        param_1[0x2b] = (ulong ****)(lVar8 + uVar14 * 0x10);
        if (param_3 != (ulong *****)0x0) {
          __ZdlPv(param_3);
        }
        func_0x00010b4a6940();
      }
      param_1[0x2a] = (ulong ****)pppppuVar22;
      param_1[7] = (ulong ****)((long)param_1[7] + 1);
      if (iVar17 != 0) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&ppppuStack_f0,param_4);
        pppppuVar22 = (ulong *****)param_1[0x2d];
        pppuStack_d8 = (ulong ***)ppppuVar23;
        pppuStack_d0 = (ulong ***)ppppuVar27;
        if (pppppuVar22 < param_1[0x2e]) {
          pppppuVar22[2] = ppppuStack_e0;
          pppppuVar22[1] = ppppuStack_e8;
          *pppppuVar22 = ppppuStack_f0;
          ppppuStack_e8 = (ulong ****)0x0;
          ppppuStack_e0 = (ulong ****)0x0;
          ppppuStack_f0 = (ulong ****)0x0;
          pppppuVar22[4] = ppppuVar27;
          pppppuVar22[3] = ppppuVar23;
          pppppuVar22 = pppppuVar22 + 5;
        }
        else {
          param_3 = (ulong *****)param_1[0x2c];
          lVar21 = (long)pppppuVar22 - (long)param_3;
          uVar20 = lVar21 / 0x28 + 1;
          if (0x666666666666666 < uVar20) {
            func_0x00010b4a50f8();
            goto LAB_10b4a3980;
          }
          uVar12 = ((long)param_1[0x2e] - (long)param_3) / 0x28;
          uVar14 = uVar12 * 2;
          if (uVar14 < uVar20 || uVar14 - uVar20 == 0) {
            uVar14 = uVar20;
          }
          if (0x333333333333332 < uVar12) {
            uVar14 = 0x666666666666666;
          }
          if (0x666666666666666 < uVar14) {
            func_0x000104bd35f4();
            goto LAB_10b4a3980;
          }
          lVar8 = uVar14 * 0x28;
          __Znwm();
          puVar18 = (undefined8 *)(lVar8 + lVar21);
          puVar18[1] = ppppuStack_e8;
          *puVar18 = ppppuStack_f0;
          puVar18[2] = ppppuStack_e0;
          ppppuStack_e8 = (ulong ****)0x0;
          ppppuStack_e0 = (ulong ****)0x0;
          ppppuStack_f0 = (ulong ****)0x0;
          puVar18[4] = pppuStack_d0;
          puVar18[3] = pppuStack_d8;
          pppppuVar19 = (ulong *****)(puVar18 + (lVar21 / -0x28) * 5);
          pppppuVar9 = pppppuVar19;
          for (pppppuVar26 = param_3; pppppuVar26 != pppppuVar22; pppppuVar26 = pppppuVar26 + 5) {
            ppppuVar10 = pppppuVar26[1];
            ppppuVar23 = *pppppuVar26;
            pppppuVar9[2] = pppppuVar26[2];
            pppppuVar9[1] = ppppuVar10;
            *pppppuVar9 = ppppuVar23;
            pppppuVar26[1] = (ulong ****)0x0;
            pppppuVar26[2] = (ulong ****)0x0;
            *pppppuVar26 = (ulong ****)0x0;
            ppppuVar23 = pppppuVar26[3];
            pppppuVar9[4] = pppppuVar26[4];
            pppppuVar9[3] = ppppuVar23;
            pppppuVar9 = pppppuVar9 + 5;
          }
          for (; param_3 != pppppuVar22; param_3 = param_3 + 5) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_3);
          }
          pppppuVar22 = (ulong *****)(puVar18 + 5);
          ppppuVar23 = param_1[0x2c];
          param_1[0x2c] = (ulong ****)pppppuVar19;
          param_1[0x2d] = (ulong ****)pppppuVar22;
          param_1[0x2e] = (ulong ****)(lVar8 + uVar14 * 0x28);
          if (ppppuVar23 != (ulong ****)0x0) {
            __ZdlPv();
          }
          func_0x00010b4a6940();
        }
        param_1[0x2d] = (ulong ****)pppppuVar22;
        func_0x00010b4a68ec();
        if ((int)pppppuVar24 != 0) {
          FUN_10b49fe74((double)(long)pppppuVar25,param_1 + 1,param_4);
        }
      }
      if (param_1[0x34] != (ulong ****)0x0) {
        dVar28 = (double)(long)pppppuVar25;
        FUN_10b4a0f74(dVar28);
        uVar20 = *(ulong *)(param_4 + 8);
        if (-1 < (char)*(byte *)(param_4 + 0x17)) {
          uVar20 = (ulong)*(byte *)(param_4 + 0x17);
        }
        if (uVar20 != 0) {
          ppppuVar23 = (ulong ****)&PTR_PTR_1133851b8;
          if (param_1[0x50] != (ulong ****)0x0) {
            ppppuVar23 = param_1[0x50];
          }
          uVar5 = (int)(*(byte *)(ppppuVar23 + 5) - 1) < 0;
          if (*(byte *)(ppppuVar23 + 5) == 1) {
            param_3 = param_1 + 0x3a;
            FUN_10b4a6398(param_3,param_4);
            if (param_3 == (ulong *****)0x0) {
              FUN_10b4a4cb4();
              func_0x00010b4a6868();
              pppppuVar9 = (ulong *****)0xd0;
              __Znwm();
              pppppuVar19 = pppppuVar9;
              func_0x00010b4a672c();
              func_0x00010b4a672c(pppppuVar19 + 0xd);
              pppppuVar25 = param_1 + 0x3d;
              ppppuStack_c0 = (ulong ****)pppppuVar9;
              func_0x000107c278c4(pppppuVar25,param_4);
              pppppuVar26 = (ulong *****)param_1[0x3b];
              pppppuVar24 = pppppuVar25;
              if (pppppuVar26 != (ulong *****)0x0) {
                pppppuVar19 = (ulong *****)((long)pppppuVar26 + -1);
                if (((ulong)pppppuVar26 & (ulong)pppppuVar19) == 0) {
                  pppppuVar22 = (ulong *****)((ulong)pppppuVar19 & (ulong)pppppuVar25);
                  uVar5 = false;
                }
                else {
                  uVar5 = (long)pppppuVar25 - (long)pppppuVar26 < 0;
                  pppppuVar22 = pppppuVar25;
                  if (pppppuVar26 <= pppppuVar25) {
                    uVar20 = 0;
                    if (pppppuVar26 != (ulong *****)0x0) {
                      uVar20 = (ulong)pppppuVar25 / (ulong)pppppuVar26;
                    }
                    pppppuVar22 = (ulong *****)((long)pppppuVar25 - uVar20 * (long)pppppuVar26);
                  }
                }
                param_3 = (ulong *****)param_1[0x3a][(long)pppppuVar22];
                if (param_3 != (ulong *****)0x0) {
                  do {
                    while( true ) {
                      param_3 = (ulong *****)*param_3;
                      if (param_3 == (ulong *****)0x0) goto LAB_10b4a2e50;
                      pppppuVar13 = (ulong *****)param_3[1];
                      uVar5 = (long)pppppuVar13 - (long)pppppuVar25 < 0;
                      if (pppppuVar13 != pppppuVar25) break;
                      func_0x00010b4a69f4();
                      if (((ulong)pppppuVar24 & 1) != 0) goto LAB_10b4a317c;
                    }
                    if (((ulong)pppppuVar26 & (ulong)pppppuVar19) == 0) {
                      pppppuVar13 = (ulong *****)((ulong)pppppuVar13 & (ulong)pppppuVar19);
                    }
                    else if (pppppuVar26 <= pppppuVar13) {
                      uVar20 = 0;
                      if (pppppuVar26 != (ulong *****)0x0) {
                        uVar20 = (ulong)pppppuVar13 / (ulong)pppppuVar26;
                      }
                      pppppuVar13 = (ulong *****)((long)pppppuVar13 - uVar20 * (long)pppppuVar26);
                    }
                    uVar5 = (long)pppppuVar13 - (long)pppppuVar22 < 0;
                  } while (pppppuVar13 == pppppuVar22);
                }
              }
LAB_10b4a2e50:
              func_0x000107c396e4();
              pppppuVar19 = param_1 + 0x3c;
              ppppuStack_e0 = (ulong ****)0x0;
              pppppuVar13 = pppppuVar24 + 2;
              *pppppuVar24 = (ulong ****)0x0;
              pppppuVar24[1] = (ulong ****)pppppuVar25;
              ppppuStack_f0 = (ulong ****)pppppuVar24;
              ppppuStack_e8 = (ulong ****)pppppuVar19;
              func_0x00010b4a687c();
              ppppuStack_c0 = (ulong ****)0x0;
              pppppuVar24[5] = (ulong ****)pppppuVar9;
              ppppuStack_e0 = (ulong ****)CONCAT71(ppppuStack_e0._1_7_,1);
              func_0x000107c396a8(param_1[0x3d]);
              if ((pppppuVar26 == (ulong *****)0x0) || (func_0x000107c396a4(), (bool)uVar5)) {
                func_0x000107c3970c();
                bVar4 = (ulong *****)0x2 < pppppuVar26;
                bVar7 = pppppuVar26 == (ulong *****)0x3;
                func_0x000107c39664();
                pppppuVar22 = extraout_x8_03;
                if (!bVar4 || bVar7) {
                  pppppuVar22 = extraout_x9_04;
                }
                if ((long)pppppuVar22 - 1U == 0) {
                  pppppuVar22 = (ulong *****)0x2;
                }
                else if (((ulong)pppppuVar22 & (long)pppppuVar22 - 1U) != 0) {
                  func_0x00010b4a6a00();
                  pppppuVar22 = pppppuVar13;
                }
                pppppuVar26 = (ulong *****)param_1[0x3b];
                if (pppppuVar26 < pppppuVar22) {
LAB_10b4a2ed8:
                  if ((ulong)pppppuVar22 >> 0x3d != 0) {
                    func_0x000104bd35f4();
                    goto LAB_10b4a3980;
                  }
                  lVar21 = (long)pppppuVar22 << 3;
                  __Znwm(lVar21);
                  FUN_10b4a65a8(param_1 + 0x3a,lVar21);
                  pppppuVar26 = (ulong *****)0x0;
                  param_1[0x3b] = (ulong ****)pppppuVar22;
                  while (pppppuVar22 != pppppuVar26) {
                    func_0x000107c396c8();
                    pppppuVar26 = extraout_x9_05;
                  }
                  pppppuVar26 = pppppuVar22;
                  if (*pppppuVar19 != (ulong ****)0x0) {
                    func_0x00010b4a67f0();
                    func_0x00010b4a6920();
                    *(ulong ******)(extraout_x8_04 + (long)extraout_x11_02 * 8) = pppppuVar19;
                    lVar21 = extraout_x8_04;
                    uVar20 = extraout_x9_06;
                    plVar16 = extraout_x10_01;
                    pppppuVar9 = extraout_x11_02;
                    while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
                      pppppuVar13 = (ulong *****)plVar16[1];
                      if (((ulong)pppppuVar22 & uVar20) == 0) {
                        pppppuVar13 = (ulong *****)((ulong)pppppuVar13 & uVar20);
                      }
                      else if (pppppuVar22 <= pppppuVar13) {
                        uVar14 = 0;
                        if (pppppuVar22 != (ulong *****)0x0) {
                          uVar14 = (ulong)pppppuVar13 / (ulong)pppppuVar22;
                        }
                        pppppuVar13 = (ulong *****)((long)pppppuVar13 - uVar14 * (long)pppppuVar22);
                      }
                      if (pppppuVar13 != pppppuVar9) {
                        if (*(long *)(lVar21 + (long)pppppuVar13 * 8) == 0) {
                          func_0x00010b4a6884();
                          lVar21 = extraout_x8_06;
                          uVar20 = extraout_x9_08;
                          plVar16 = extraout_x12_00;
                          pppppuVar9 = extraout_x11_04;
                        }
                        else {
                          func_0x00010b4a66d4();
                          lVar21 = extraout_x8_05;
                          uVar20 = extraout_x9_07;
                          plVar16 = extraout_x10_02;
                          pppppuVar9 = extraout_x11_03;
                        }
                      }
                    }
                  }
                }
                else if (pppppuVar22 < pppppuVar26) {
                  func_0x00010b4a685c((float)param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
                  if ((pppppuVar26 < (ulong *****)0x3) ||
                     (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) != 0)) {
                    __ZNSt3__112__next_primeEm();
                  }
                  else {
                    func_0x00010b4a670c();
                  }
                  if (pppppuVar22 <= pppppuVar13) {
                    pppppuVar22 = pppppuVar13;
                  }
                  if (pppppuVar22 < pppppuVar26) {
                    if (pppppuVar22 != (ulong *****)0x0) goto LAB_10b4a2ed8;
                    FUN_10b4a65a8(param_1 + 0x3a,0);
                    param_1[0x3b] = (ulong ****)0x0;
                    pppppuVar26 = (ulong *****)0x0;
                  }
                  else {
                    pppppuVar26 = (ulong *****)param_1[0x3b];
                  }
                }
                if (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) == 0) {
                  pppppuVar22 = (ulong *****)((long)pppppuVar26 - 1U & (ulong)pppppuVar25);
                }
                else {
                  pppppuVar22 = pppppuVar25;
                  if (pppppuVar26 <= pppppuVar25) {
                    uVar20 = 0;
                    if (pppppuVar26 != (ulong *****)0x0) {
                      uVar20 = (ulong)pppppuVar25 / (ulong)pppppuVar26;
                    }
                    pppppuVar22 = (ulong *****)((long)pppppuVar25 - uVar20 * (long)pppppuVar26);
                  }
                }
              }
              if (param_1[0x3a][(long)pppppuVar22] == (ulong ***)0x0) {
                func_0x00010b4a694c();
                if (extraout_x9_10 != 0) {
                  pppppuVar22 = *(ulong ******)(extraout_x9_10 + 8);
                  if (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) == 0) {
                    pppppuVar22 = (ulong *****)((ulong)pppppuVar22 & (long)pppppuVar26 - 1U);
                  }
                  else if (pppppuVar26 <= pppppuVar22) {
                    uVar20 = 0;
                    if (pppppuVar26 != (ulong *****)0x0) {
                      uVar20 = (ulong)pppppuVar22 / (ulong)pppppuVar26;
                    }
                    pppppuVar22 = (ulong *****)((long)pppppuVar22 - uVar20 * (long)pppppuVar26);
                  }
                  *(ulong ******)(extraout_x8_08 + (long)pppppuVar22 * 8) = pppppuVar24;
                }
              }
              else {
                func_0x00010b4a67a4();
              }
              ppppuStack_f0 = (ulong ****)0x0;
              param_1[0x3d] = (ulong ****)((long)param_1[0x3d] + 1);
              FUN_10b4a65c0(&ppppuStack_f0);
              param_3 = pppppuVar24;
LAB_10b4a317c:
              func_0x00010b4a657c(&ppppuStack_c0);
              func_0x00010b4a6940();
            }
            ppppuVar23 = (ulong ****)((long)param_3[5] + lStack_100);
          }
          else {
            pppppuVar25 = param_1 + 0x38;
            func_0x000107c278c4(pppppuVar25,param_4);
            pppppuVar26 = (ulong *****)param_1[0x36];
            pppppuVar24 = pppppuVar25;
            if (pppppuVar26 != (ulong *****)0x0) {
              pppppuVar19 = (ulong *****)((long)pppppuVar26 + -1);
              if (((ulong)pppppuVar26 & (ulong)pppppuVar19) == 0) {
                pppppuVar22 = (ulong *****)((ulong)pppppuVar19 & (ulong)pppppuVar25);
                uVar5 = false;
              }
              else {
                uVar5 = (long)pppppuVar25 - (long)pppppuVar26 < 0;
                pppppuVar22 = pppppuVar25;
                if (pppppuVar26 <= pppppuVar25) {
                  uVar20 = 0;
                  if (pppppuVar26 != (ulong *****)0x0) {
                    uVar20 = (ulong)pppppuVar25 / (ulong)pppppuVar26;
                  }
                  pppppuVar22 = (ulong *****)((long)pppppuVar25 - uVar20 * (long)pppppuVar26);
                }
              }
              param_3 = (ulong *****)param_1[0x35][(long)pppppuVar22];
              pppppuVar9 = pppppuVar25;
              if (param_3 != (ulong *****)0x0) {
                do {
                  while( true ) {
                    param_3 = (ulong *****)*param_3;
                    pppppuVar24 = pppppuVar9;
                    if (param_3 == (ulong *****)0x0) goto LAB_10b4a2c94;
                    pppppuVar13 = (ulong *****)param_3[1];
                    uVar5 = (long)pppppuVar13 - (long)pppppuVar25 < 0;
                    if (pppppuVar13 != pppppuVar25) break;
                    func_0x00010b4a69f4();
                    if (((ulong)pppppuVar9 & 1) != 0) goto LAB_10b4a3074;
                  }
                  if (((ulong)pppppuVar26 & (ulong)pppppuVar19) == 0) {
                    pppppuVar13 = (ulong *****)((ulong)pppppuVar13 & (ulong)pppppuVar19);
                  }
                  else if (pppppuVar26 <= pppppuVar13) {
                    uVar20 = 0;
                    if (pppppuVar26 != (ulong *****)0x0) {
                      uVar20 = (ulong)pppppuVar13 / (ulong)pppppuVar26;
                    }
                    pppppuVar13 = (ulong *****)((long)pppppuVar13 - uVar20 * (long)pppppuVar26);
                  }
                  uVar5 = (long)pppppuVar13 - (long)pppppuVar22 < 0;
                } while (pppppuVar13 == pppppuVar22);
              }
            }
LAB_10b4a2c94:
            func_0x000107c396e4();
            pppppuVar19 = param_1 + 0x37;
            ppppuStack_e0 = (ulong ****)0x0;
            pppppuVar9 = pppppuVar24 + 2;
            *pppppuVar24 = (ulong ****)0x0;
            pppppuVar24[1] = (ulong ****)pppppuVar25;
            ppppuStack_f0 = (ulong ****)pppppuVar24;
            ppppuStack_e8 = (ulong ****)pppppuVar19;
            func_0x00010b4a687c();
            pppppuVar24[5] = (ulong ****)0x0;
            ppppuStack_e0 = (ulong ****)CONCAT71(ppppuStack_e0._1_7_,1);
            func_0x000107c396a8(param_1[0x38]);
            if ((pppppuVar26 == (ulong *****)0x0) || (func_0x000107c396a4(), (bool)uVar5)) {
              func_0x00010b4a69a0();
              bVar4 = (ulong *****)0x2 < pppppuVar26;
              bVar7 = pppppuVar26 == (ulong *****)0x3;
              func_0x000107c39664();
              pppppuVar22 = extraout_x8;
              if (!bVar4 || bVar7) {
                pppppuVar22 = extraout_x9;
              }
              if ((long)pppppuVar22 - 1U == 0) {
                pppppuVar22 = (ulong *****)0x2;
              }
              else if (((ulong)pppppuVar22 & (long)pppppuVar22 - 1U) != 0) {
                func_0x00010b4a6a00();
                pppppuVar22 = pppppuVar9;
              }
              pppppuVar26 = (ulong *****)param_1[0x36];
              if (pppppuVar26 < pppppuVar22) {
LAB_10b4a2d18:
                if ((ulong)pppppuVar22 >> 0x3d != 0) {
                  func_0x000104bd35f4();
LAB_10b4a3980:
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10b4a3984);
                  (*pcVar3)();
                }
                lVar21 = (long)pppppuVar22 << 3;
                __Znwm(lVar21);
                FUN_10b4a6530(param_1 + 0x35,lVar21);
                pppppuVar26 = (ulong *****)0x0;
                param_1[0x36] = (ulong ****)pppppuVar22;
                while (pppppuVar22 != pppppuVar26) {
                  func_0x000107c396c8();
                  pppppuVar26 = extraout_x9_00;
                }
                pppppuVar26 = pppppuVar22;
                if (*pppppuVar19 != (ulong ****)0x0) {
                  func_0x00010b4a67f0();
                  func_0x00010b4a6920();
                  *(ulong ******)(extraout_x8_00 + (long)extraout_x11 * 8) = pppppuVar19;
                  lVar21 = extraout_x8_00;
                  uVar20 = extraout_x9_01;
                  plVar16 = extraout_x10;
                  pppppuVar9 = extraout_x11;
                  while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
                    pppppuVar13 = (ulong *****)plVar16[1];
                    if (((ulong)pppppuVar22 & uVar20) == 0) {
                      pppppuVar13 = (ulong *****)((ulong)pppppuVar13 & uVar20);
                    }
                    else if (pppppuVar22 <= pppppuVar13) {
                      uVar14 = 0;
                      if (pppppuVar22 != (ulong *****)0x0) {
                        uVar14 = (ulong)pppppuVar13 / (ulong)pppppuVar22;
                      }
                      pppppuVar13 = (ulong *****)((long)pppppuVar13 - uVar14 * (long)pppppuVar22);
                    }
                    if (pppppuVar13 != pppppuVar9) {
                      if (*(long *)(lVar21 + (long)pppppuVar13 * 8) == 0) {
                        func_0x00010b4a6884();
                        lVar21 = extraout_x8_02;
                        uVar20 = extraout_x9_03;
                        plVar16 = extraout_x12;
                        pppppuVar9 = extraout_x11_01;
                      }
                      else {
                        func_0x00010b4a66d4();
                        lVar21 = extraout_x8_01;
                        uVar20 = extraout_x9_02;
                        plVar16 = extraout_x10_00;
                        pppppuVar9 = extraout_x11_00;
                      }
                    }
                  }
                }
              }
              else if (pppppuVar22 < pppppuVar26) {
                func_0x00010b4a685c((float)param_1[0x38],*(undefined4 *)(param_1 + 0x39));
                if ((pppppuVar26 < (ulong *****)0x3) ||
                   (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else {
                  func_0x00010b4a670c();
                }
                if (pppppuVar22 <= pppppuVar9) {
                  pppppuVar22 = pppppuVar9;
                }
                if (pppppuVar22 < pppppuVar26) {
                  if (pppppuVar22 != (ulong *****)0x0) goto LAB_10b4a2d18;
                  FUN_10b4a6530(param_1 + 0x35,0);
                  param_1[0x36] = (ulong ****)0x0;
                  pppppuVar26 = (ulong *****)0x0;
                }
                else {
                  pppppuVar26 = (ulong *****)param_1[0x36];
                }
              }
              if (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) == 0) {
                pppppuVar22 = (ulong *****)((long)pppppuVar26 - 1U & (ulong)pppppuVar25);
              }
              else {
                pppppuVar22 = pppppuVar25;
                if (pppppuVar26 <= pppppuVar25) {
                  uVar20 = 0;
                  if (pppppuVar26 != (ulong *****)0x0) {
                    uVar20 = (ulong)pppppuVar25 / (ulong)pppppuVar26;
                  }
                  pppppuVar22 = (ulong *****)((long)pppppuVar25 - uVar20 * (long)pppppuVar26);
                }
              }
            }
            if (param_1[0x35][(long)pppppuVar22] == (ulong ***)0x0) {
              func_0x00010b4a694c();
              if (extraout_x9_09 != 0) {
                pppppuVar22 = *(ulong ******)(extraout_x9_09 + 8);
                if (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) == 0) {
                  pppppuVar22 = (ulong *****)((ulong)pppppuVar22 & (long)pppppuVar26 - 1U);
                }
                else if (pppppuVar26 <= pppppuVar22) {
                  uVar20 = 0;
                  if (pppppuVar26 != (ulong *****)0x0) {
                    uVar20 = (ulong)pppppuVar22 / (ulong)pppppuVar26;
                  }
                  pppppuVar22 = (ulong *****)((long)pppppuVar22 - uVar20 * (long)pppppuVar26);
                }
                *(ulong ******)(extraout_x8_07 + (long)pppppuVar22 * 8) = pppppuVar24;
              }
            }
            else {
              func_0x00010b4a67a4();
            }
            ppppuStack_f0 = (ulong ****)0x0;
            param_1[0x38] = (ulong ****)((long)param_1[0x38] + 1);
            pppppuVar9 = &ppppuStack_f0;
            func_0x00010b4a6548(pppppuVar9);
            param_3 = pppppuVar24;
LAB_10b4a3074:
            param_3 = param_3 + 5;
            ppppuVar23 = *param_3;
            func_0x00010b4a6940();
            if (ppppuVar23 == (ulong ****)0x0) {
              FUN_10b4a4cb4();
              func_0x00010b4a6868();
              func_0x00010b4a69b8();
              func_0x00010b4a672c();
              ppppuStack_f0 = (ulong ****)0x0;
              FUN_10b4a5d04(param_3,pppppuVar9);
              func_0x00010b4a5ce0(&ppppuStack_f0);
              ppppuVar23 = *param_3;
            }
          }
          FUN_10b4a1090(ppppuVar23);
          FUN_10b4a0f74(dVar28,ppppuVar23);
        }
      }
      if (0 < (long)ppuVar11) {
        lVar21 = 0;
        if (pppppuVar19 != (ulong *****)0x0) {
          lVar21 = (param_2 - (long)param_1[0x28]) / (long)pppppuVar19;
        }
        if ((long)ppuVar11 < lVar21) {
          ppppuVar23 = param_1[0x29];
          lVar21 = (long)param_1[0x2a] - (long)ppppuVar23;
          if (lVar21 != 0) {
            dVar28 = 0.0;
            for (; ppppuVar23 != param_1[0x2a]; ppppuVar23 = ppppuVar23 + 2) {
              lVar8 = 0;
              if (pppppuVar19 != (ulong *****)0x0) {
                lVar8 = (long)ppppuVar23[1] / (long)pppppuVar19;
              }
              dVar28 = dVar28 + (double)lVar8;
            }
            if (0.0 < dVar28 / (double)(ulong)(lVar21 >> 4)) {
              FUN_10b4b3310(param_1[0x27]);
            }
          }
          if (iVar17 != 0) {
            ppppuStack_e8 = (ulong ****)0x0;
            ppppuStack_f0 = (ulong ****)0x0;
            pppuStack_d8 = (ulong ***)0x0;
            ppppuStack_e0 = (ulong ****)0x0;
            pppuStack_d0 = (ulong ***)CONCAT44(pppuStack_d0._4_4_,0x3f800000);
            ppppuVar10 = param_1[0x2d];
            for (ppppuVar23 = param_1[0x2c]; uVar5 = (long)ppppuVar23 - (long)ppppuVar10 < 0,
                ppppuVar23 != ppppuVar10; ppppuVar23 = ppppuVar23 + 5) {
              param_3 = (ulong *****)&pppuStack_d8;
              func_0x000107c278c4(param_3,ppppuVar23);
              pppppuVar19 = (ulong *****)ppppuStack_e8;
              if ((ulong *****)ppppuStack_e8 != (ulong *****)0x0) {
                uVar20 = (long)ppppuStack_e8 - 1;
                if (((ulong)ppppuStack_e8 & uVar20) == 0) {
                  pppppuVar25 = (ulong *****)(uVar20 & (ulong)param_3);
                  uVar5 = false;
                }
                else {
                  uVar5 = (long)param_3 - (long)ppppuStack_e8 < 0;
                  pppppuVar25 = param_3;
                  if (ppppuStack_e8 <= param_3) {
                    uVar14 = 0;
                    if ((ulong *****)ppppuStack_e8 != (ulong *****)0x0) {
                      uVar14 = (ulong)param_3 / (ulong)ppppuStack_e8;
                    }
                    pppppuVar25 = (ulong *****)((long)param_3 - uVar14 * (long)ppppuStack_e8);
                  }
                }
                pppppuVar24 = (ulong *****)ppppuStack_f0[(long)pppppuVar25];
                if (pppppuVar24 != (ulong *****)0x0) {
                  do {
                    while( true ) {
                      pppppuVar24 = (ulong *****)*pppppuVar24;
                      if (pppppuVar24 == (ulong *****)0x0) goto LAB_10b4a32fc;
                      pppppuVar22 = (ulong *****)pppppuVar24[1];
                      uVar5 = (long)pppppuVar22 - (long)param_3 < 0;
                      if (pppppuVar22 != param_3) break;
                      pppppuVar22 = pppppuVar24 + 2;
                      func_0x000107c278d0(pppppuVar22,ppppuVar23);
                      if (((ulong)pppppuVar22 & 1) != 0) goto LAB_10b4a3544;
                    }
                    if (((ulong)pppppuVar19 & uVar20) == 0) {
                      pppppuVar22 = (ulong *****)((ulong)pppppuVar22 & uVar20);
                    }
                    else if (pppppuVar19 <= pppppuVar22) {
                      uVar14 = 0;
                      if (pppppuVar19 != (ulong *****)0x0) {
                        uVar14 = (ulong)pppppuVar22 / (ulong)pppppuVar19;
                      }
                      pppppuVar22 = (ulong *****)((long)pppppuVar22 - uVar14 * (long)pppppuVar19);
                    }
                    uVar5 = (long)pppppuVar22 - (long)pppppuVar25 < 0;
                  } while (pppppuVar22 == pppppuVar25);
                }
              }
LAB_10b4a32fc:
              pppppuVar24 = (ulong *****)0x38;
              __Znwm();
              uStack_b0 = 0;
              pppppuVar22 = pppppuVar24 + 2;
              *pppppuVar24 = (ulong ****)0x0;
              pppppuVar24[1] = (ulong ****)param_3;
              ppppuStack_c0 = (ulong ****)pppppuVar24;
              ppppuStack_b8 = (ulong ****)&ppppuStack_e0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (pppppuVar22,ppppuVar23);
              pppppuVar24[5] = (ulong ****)0x0;
              *(undefined4 *)(pppppuVar24 + 6) = 0;
              uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
              func_0x000107c396a8(pppuStack_d8);
              if ((pppppuVar19 == (ulong *****)0x0) || (func_0x000107c396a4(), (bool)uVar5)) {
                func_0x00010b4a6ac4();
                bVar4 = (ulong *****)0x2 < pppppuVar19;
                bVar7 = pppppuVar19 == (ulong *****)0x3;
                func_0x000107c39664();
                pppppuVar25 = extraout_x8_09;
                if (!bVar4 || bVar7) {
                  pppppuVar25 = extraout_x9_11;
                }
                if ((long)pppppuVar25 - 1U == 0) {
                  pppppuVar25 = (ulong *****)0x2;
                }
                else if (((ulong)pppppuVar25 & (long)pppppuVar25 - 1U) != 0) {
                  __ZNSt3__112__next_primeEm();
                  pppppuVar22 = pppppuVar25;
                }
                ppppuVar27 = ppppuStack_e8;
                if (ppppuStack_e8 < pppppuVar25) {
LAB_10b4a3388:
                  if ((ulong)pppppuVar25 >> 0x3d != 0) {
                    func_0x000104bd35f4();
                    goto LAB_10b4a3980;
                  }
                  lVar21 = (long)pppppuVar25 << 3;
                  __Znwm(lVar21);
                  FUN_10b4a6638(&ppppuStack_f0,lVar21);
                  pppppuVar19 = (ulong *****)0x0;
                  ppppuStack_e8 = (ulong ****)pppppuVar25;
                  while (pppppuVar25 != pppppuVar19) {
                    func_0x000107c396c8();
                    pppppuVar19 = extraout_x9_12;
                  }
                  pppppuVar19 = pppppuVar25;
                  if ((ulong *****)ppppuStack_e0 != (ulong *****)0x0) {
                    func_0x00010b4a6a68();
                    func_0x00010b4a6a54();
                    lVar21 = extraout_x8_10;
                    uVar20 = extraout_x9_13;
                    plVar16 = extraout_x10_03;
                    pppppuVar22 = extraout_x11_05;
                    while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
                      pppppuVar26 = (ulong *****)plVar16[1];
                      if (((ulong)pppppuVar25 & uVar20) == 0) {
                        pppppuVar26 = (ulong *****)((ulong)pppppuVar26 & uVar20);
                      }
                      else if (pppppuVar25 <= pppppuVar26) {
                        uVar14 = 0;
                        if (pppppuVar25 != (ulong *****)0x0) {
                          uVar14 = (ulong)pppppuVar26 / (ulong)pppppuVar25;
                        }
                        pppppuVar26 = (ulong *****)((long)pppppuVar26 - uVar14 * (long)pppppuVar25);
                      }
                      if (pppppuVar26 != pppppuVar22) {
                        if (*(long *)(lVar21 + (long)pppppuVar26 * 8) == 0) {
                          func_0x00010b4a6884();
                          lVar21 = extraout_x8_12;
                          uVar20 = extraout_x9_15;
                          plVar16 = extraout_x12_01;
                          pppppuVar22 = extraout_x11_07;
                        }
                        else {
                          func_0x00010b4a66d4();
                          lVar21 = extraout_x8_11;
                          uVar20 = extraout_x9_14;
                          plVar16 = extraout_x10_04;
                          pppppuVar22 = extraout_x11_06;
                        }
                      }
                    }
                  }
                }
                else {
                  pppppuVar19 = (ulong *****)ppppuStack_e8;
                  if (pppppuVar25 < ppppuStack_e8) {
                    func_0x00010b4a685c((float)pppuStack_d8,(ulong)pppuStack_d0 & 0xffffffff);
                    if ((ppppuVar27 < (ulong *****)0x3) ||
                       (((ulong)ppppuVar27 & (long)ppppuVar27 - 1U) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else {
                      func_0x00010b4a675c();
                      if ((ulong *****)0x1 < pppppuVar22) {
                        pppppuVar22 = (ulong *****)(1L << (extraout_x8_13 & 0x3f));
                      }
                    }
                    if (pppppuVar25 <= pppppuVar22) {
                      pppppuVar25 = pppppuVar22;
                    }
                    pppppuVar19 = (ulong *****)ppppuStack_e8;
                    if (pppppuVar25 < ppppuVar27) {
                      if (pppppuVar25 != (ulong *****)0x0) goto LAB_10b4a3388;
                      FUN_10b4a6638(&ppppuStack_f0,0);
                      ppppuStack_e8 = (ulong ****)0x0;
                      pppppuVar19 = (ulong *****)0x0;
                    }
                  }
                }
                if (((ulong)pppppuVar19 & (long)pppppuVar19 - 1U) == 0) {
                  pppppuVar25 = (ulong *****)((long)pppppuVar19 - 1U & (ulong)param_3);
                }
                else {
                  pppppuVar25 = param_3;
                  if (pppppuVar19 <= param_3) {
                    uVar20 = 0;
                    if (pppppuVar19 != (ulong *****)0x0) {
                      uVar20 = (ulong)param_3 / (ulong)pppppuVar19;
                    }
                    pppppuVar25 = (ulong *****)((long)param_3 - uVar20 * (long)pppppuVar19);
                  }
                }
              }
              ppppuVar27 = (ulong ****)ppppuStack_f0[(long)pppppuVar25];
              if (ppppuVar27 == (ulong ****)0x0) {
                *pppppuVar24 = ppppuStack_e0;
                ppppuStack_f0[(long)pppppuVar25] = (ulong ***)&ppppuStack_e0;
                ppppuStack_e0 = (ulong ****)pppppuVar24;
                if (*pppppuVar24 != (ulong ****)0x0) {
                  pppppuVar22 = (ulong *****)(*pppppuVar24)[1];
                  if (((ulong)pppppuVar19 & (long)pppppuVar19 - 1U) == 0) {
                    pppppuVar22 = (ulong *****)((ulong)pppppuVar22 & (long)pppppuVar19 - 1U);
                  }
                  else if (pppppuVar19 <= pppppuVar22) {
                    uVar20 = 0;
                    if (pppppuVar19 != (ulong *****)0x0) {
                      uVar20 = (ulong)pppppuVar22 / (ulong)pppppuVar19;
                    }
                    pppppuVar22 = (ulong *****)((long)pppppuVar22 - uVar20 * (long)pppppuVar19);
                  }
                  ppppuStack_f0[(long)pppppuVar22] = (ulong ***)pppppuVar24;
                }
              }
              else {
                *pppppuVar24 = (ulong ****)*ppppuVar27;
                *ppppuVar27 = (ulong ***)pppppuVar24;
              }
              ppppuStack_c0 = (ulong ****)0x0;
              pppuStack_d8 = (ulong ***)((long)pppuStack_d8 + 1);
              FUN_10b4a6650(&ppppuStack_c0);
LAB_10b4a3544:
              pppppuVar24[5] =
                   (ulong ****)((double)pppppuVar24[5] + (double)((long)ppppuVar23[4] / 1000000));
              *(int *)(pppppuVar24 + 6) = *(int *)(pppppuVar24 + 6) + 1;
            }
            pppppuVar19 = param_1 + 0x31;
            for (pppppuVar24 = (ulong *****)ppppuStack_e0; pppppuVar24 != (ulong *****)0x0;
                pppppuVar24 = (ulong *****)*pppppuVar24) {
              ppppuVar23 = pppppuVar24[5];
              uVar2 = *(uint *)(pppppuVar24 + 6);
              pppppuVar25 = param_1 + 0x32;
              func_0x000107c278c4(pppppuVar25,pppppuVar24 + 2);
              pppppuVar26 = (ulong *****)param_1[0x30];
              pppppuVar22 = pppppuVar25;
              if (pppppuVar26 != (ulong *****)0x0) {
                uVar20 = (long)pppppuVar26 - 1;
                if (((ulong)pppppuVar26 & uVar20) == 0) {
                  param_3 = (ulong *****)(uVar20 & (ulong)pppppuVar25);
                  uVar5 = false;
                }
                else {
                  uVar5 = (long)pppppuVar25 - (long)pppppuVar26 < 0;
                  param_3 = pppppuVar25;
                  if (pppppuVar26 <= pppppuVar25) {
                    uVar14 = 0;
                    if (pppppuVar26 != (ulong *****)0x0) {
                      uVar14 = (ulong)pppppuVar25 / (ulong)pppppuVar26;
                    }
                    param_3 = (ulong *****)((long)pppppuVar25 - uVar14 * (long)pppppuVar26);
                  }
                }
                pppppuVar9 = (ulong *****)param_1[0x2f][(long)param_3];
                if (pppppuVar9 != (ulong *****)0x0) {
                  do {
                    while( true ) {
                      pppppuVar9 = (ulong *****)*pppppuVar9;
                      if (pppppuVar9 == (ulong *****)0x0) goto LAB_10b4a362c;
                      pppppuVar13 = (ulong *****)pppppuVar9[1];
                      uVar5 = (long)pppppuVar13 - (long)pppppuVar25 < 0;
                      if (pppppuVar13 != pppppuVar25) break;
                      pppppuVar22 = pppppuVar9 + 2;
                      func_0x000107c278d0(pppppuVar22,pppppuVar24 + 2);
                      if (((ulong)pppppuVar22 & 1) != 0) goto LAB_10b4a387c;
                    }
                    if (((ulong)pppppuVar26 & uVar20) == 0) {
                      pppppuVar13 = (ulong *****)((ulong)pppppuVar13 & uVar20);
                    }
                    else if (pppppuVar26 <= pppppuVar13) {
                      uVar14 = 0;
                      if (pppppuVar26 != (ulong *****)0x0) {
                        uVar14 = (ulong)pppppuVar13 / (ulong)pppppuVar26;
                      }
                      pppppuVar13 = (ulong *****)((long)pppppuVar13 - uVar14 * (long)pppppuVar26);
                    }
                    uVar5 = (long)pppppuVar13 - (long)param_3 < 0;
                  } while (pppppuVar13 == param_3);
                }
              }
LAB_10b4a362c:
              func_0x000107c396e4();
              uStack_b0 = 0;
              pppppuVar9 = pppppuVar22 + 2;
              *pppppuVar22 = (ulong ****)0x0;
              pppppuVar22[1] = (ulong ****)pppppuVar25;
              ppppuStack_c0 = (ulong ****)pppppuVar22;
              ppppuStack_b8 = (ulong ****)pppppuVar19;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (pppppuVar9,pppppuVar24 + 2);
              pppppuVar22[5] = (ulong ****)0x0;
              uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
              func_0x000107c396a8(param_1[0x32]);
              if (pppppuVar26 == (ulong *****)0x0) {
LAB_10b4a366c:
                func_0x00010b4a6ab0();
                bVar4 = (ulong *****)0x2 < pppppuVar26;
                bVar7 = pppppuVar26 == (ulong *****)0x3;
                func_0x000107c39664();
                pppppuVar13 = extraout_x8_14;
                if (!bVar4 || bVar7) {
                  pppppuVar13 = extraout_x9_16;
                }
                if ((long)pppppuVar13 - 1U == 0) {
                  pppppuVar13 = (ulong *****)0x2;
                }
                else if (((ulong)pppppuVar13 & (long)pppppuVar13 - 1U) != 0) {
                  __ZNSt3__112__next_primeEm();
                  pppppuVar9 = pppppuVar13;
                }
                pppppuVar26 = (ulong *****)param_1[0x30];
                if (pppppuVar26 < pppppuVar13) {
LAB_10b4a36b0:
                  if ((ulong)pppppuVar13 >> 0x3d != 0) {
                    func_0x000104bd35f4();
                    goto LAB_10b4a3980;
                  }
                  lVar21 = (long)pppppuVar13 << 3;
                  __Znwm(lVar21);
                  func_0x00010b4a64e4(param_1 + 0x2f,lVar21);
                  pppppuVar26 = (ulong *****)0x0;
                  param_1[0x30] = (ulong ****)pppppuVar13;
                  ppppuVar10 = param_1[0x2f];
                  while (pppppuVar13 != pppppuVar26) {
                    func_0x000107c396c8();
                    ppppuVar10 = extraout_x8_15;
                    pppppuVar26 = extraout_x9_17;
                  }
                  ppppuVar27 = *pppppuVar19;
                  pppppuVar26 = pppppuVar13;
                  if (ppppuVar27 != (ulong ****)0x0) {
                    pppppuVar9 = (ulong *****)ppppuVar27[1];
                    uVar14 = (long)pppppuVar13 - 1;
                    uVar20 = 0;
                    if (pppppuVar13 != (ulong *****)0x0) {
                      uVar20 = (ulong)pppppuVar9 / (ulong)pppppuVar13;
                    }
                    pppppuVar15 = pppppuVar9;
                    if (pppppuVar13 <= pppppuVar9) {
                      pppppuVar15 = (ulong *****)((long)pppppuVar9 - uVar20 * (long)pppppuVar13);
                    }
                    if (((ulong)pppppuVar13 & uVar14) == 0) {
                      pppppuVar15 = (ulong *****)((ulong)pppppuVar9 & uVar14);
                    }
                    ppppuVar10[(long)pppppuVar15] = (ulong ***)pppppuVar19;
                    while (ppppuVar27 = (ulong ****)*ppppuVar27, ppppuVar27 != (ulong ****)0x0) {
                      pppppuVar9 = (ulong *****)ppppuVar27[1];
                      if (((ulong)pppppuVar13 & uVar14) == 0) {
                        pppppuVar9 = (ulong *****)((ulong)pppppuVar9 & uVar14);
                      }
                      else if (pppppuVar13 <= pppppuVar9) {
                        uVar20 = 0;
                        if (pppppuVar13 != (ulong *****)0x0) {
                          uVar20 = (ulong)pppppuVar9 / (ulong)pppppuVar13;
                        }
                        pppppuVar9 = (ulong *****)((long)pppppuVar9 - uVar20 * (long)pppppuVar13);
                      }
                      if (pppppuVar9 != pppppuVar15) {
                        if (ppppuVar10[(long)pppppuVar9] == (ulong ***)0x0) {
                          func_0x00010b4a6884();
                          ppppuVar10 = extraout_x8_17;
                          uVar14 = extraout_x9_19;
                          ppppuVar27 = extraout_x12_02;
                          pppppuVar15 = extraout_x11_09;
                        }
                        else {
                          func_0x00010b4a66d4();
                          ppppuVar10 = extraout_x8_16;
                          uVar14 = extraout_x9_18;
                          ppppuVar27 = extraout_x10_05;
                          pppppuVar15 = extraout_x11_08;
                        }
                      }
                    }
                  }
                }
                else if (pppppuVar13 < pppppuVar26) {
                  func_0x00010b4a685c((float)param_1[0x32],*(undefined4 *)(param_1 + 0x33));
                  if ((pppppuVar26 < (ulong *****)0x3) ||
                     (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) != 0)) {
                    __ZNSt3__112__next_primeEm();
                  }
                  else {
                    func_0x00010b4a675c();
                    if ((ulong *****)0x1 < pppppuVar9) {
                      pppppuVar9 = (ulong *****)(1L << (extraout_x8_18 & 0x3f));
                    }
                  }
                  if (pppppuVar13 <= pppppuVar9) {
                    pppppuVar13 = pppppuVar9;
                  }
                  if (pppppuVar13 < pppppuVar26) {
                    if (pppppuVar13 != (ulong *****)0x0) goto LAB_10b4a36b0;
                    func_0x00010b4a64e4(param_1 + 0x2f,0);
                    param_1[0x30] = (ulong ****)0x0;
                    pppppuVar26 = (ulong *****)0x0;
                  }
                  else {
                    pppppuVar26 = (ulong *****)param_1[0x30];
                  }
                }
                if (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) == 0) {
                  uVar6 = false;
                  param_3 = (ulong *****)((long)pppppuVar26 - 1U & (ulong)pppppuVar25);
                }
                else {
                  uVar6 = (long)pppppuVar25 - (long)pppppuVar26 < 0;
                  param_3 = pppppuVar25;
                  if (pppppuVar26 <= pppppuVar25) {
                    uVar20 = 0;
                    if (pppppuVar26 != (ulong *****)0x0) {
                      uVar20 = (ulong)pppppuVar25 / (ulong)pppppuVar26;
                    }
                    param_3 = (ulong *****)((long)pppppuVar25 - uVar20 * (long)pppppuVar26);
                  }
                }
              }
              else {
                func_0x000107c396a4();
                uVar6 = false;
                if ((bool)uVar5) goto LAB_10b4a366c;
              }
              ppppuVar10 = param_1[0x2f];
              if (ppppuVar10[(long)param_3] == (ulong ***)0x0) {
                *pppppuVar22 = *pppppuVar19;
                *pppppuVar19 = (ulong ****)pppppuVar22;
                ppppuVar10[(long)param_3] = (ulong ***)pppppuVar19;
                uVar5 = uVar6;
                if (*pppppuVar22 != (ulong ****)0x0) {
                  pppppuVar25 = (ulong *****)(*pppppuVar22)[1];
                  if (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) == 0) {
                    pppppuVar25 = (ulong *****)((ulong)pppppuVar25 & (long)pppppuVar26 - 1U);
                    uVar5 = false;
                  }
                  else {
                    uVar5 = (long)pppppuVar25 - (long)pppppuVar26 < 0;
                    if (pppppuVar26 <= pppppuVar25) {
                      uVar20 = 0;
                      if (pppppuVar26 != (ulong *****)0x0) {
                        uVar20 = (ulong)pppppuVar25 / (ulong)pppppuVar26;
                      }
                      pppppuVar25 = (ulong *****)((long)pppppuVar25 - uVar20 * (long)pppppuVar26);
                    }
                  }
                  ppppuVar10[(long)pppppuVar25] = (ulong ***)pppppuVar22;
                }
              }
              else {
                func_0x00010b4a6910();
                uVar5 = uVar6;
              }
              ppppuStack_c0 = (ulong ****)0x0;
              param_1[0x32] = (ulong ****)((long)param_1[0x32] + 1);
              FUN_10b4a64fc(&ppppuStack_c0);
              pppppuVar9 = pppppuVar22;
LAB_10b4a387c:
              ppppuVar10 = pppppuVar9[5];
              if (ppppuVar10 == (ulong ****)0x0) {
                func_0x000107c2ffe0(&ppppuStack_c0,param_1 + 0x15);
                ppppuVar10 = ppppuStack_c0;
                ppppuStack_c0 = (ulong ****)0x0;
                ppppuVar27 = pppppuVar9[5];
                pppppuVar9[5] = ppppuVar10;
                if (ppppuVar27 != (ulong ****)0x0) {
                  func_0x00010b4a6804();
                  ppppuVar10 = ppppuStack_c0;
                  ppppuStack_c0 = (ulong ****)0x0;
                  if ((ulong *****)ppppuVar10 != (ulong *****)0x0) {
                    func_0x00010b4a6804();
                  }
                }
                ppppuVar10 = pppppuVar9[5];
              }
              FUN_10b4b3310((double)ppppuVar23 / (double)uVar2,ppppuVar10);
            }
            func_0x000107c300a0(param_1 + 0x2c);
            FUN_10b4a65f4(&ppppuStack_f0);
          }
          func_0x000107c3006c(param_1);
          ppppuVar23 = param_1[0x46];
          if (ppppuVar23 == (ulong ****)0x0) {
            bVar7 = false;
            lVar21 = 0;
          }
          else {
            bVar7 = false;
            lVar21 = (long)(double)param_1[0x27][1];
          }
          goto LAB_10b4a2810;
        }
      }
      bVar7 = false;
      lVar21 = 0;
      ppppuVar23 = (ulong ****)0x0;
      goto LAB_10b4a2810;
    }
  }
  lVar21 = 0;
  ppppuVar23 = (ulong ****)0x0;
  bVar7 = true;
LAB_10b4a2810:
  func_0x000107c39680();
  if ((!bVar7) && (ppppuVar23 != (ulong ****)0x0)) {
    ppppuStack_f0 = (ulong ****)((ulong)ppppuStack_f0 & 0xffffffffffffff00);
    pppuStack_d8 = (ulong ***)((ulong)pppuStack_d8 & 0xffffffffffffff00);
    (*(code *)(*ppppuVar23)[2])(ppppuVar23,&ppppuStack_f0,lVar21,param_2,0,1);
    func_0x00010b4a68e4();
  }
  return;
}



/* Entry: 10b4a3a44; end: 10b4a3ab3;  */

undefined1 FUN_10b4a3a44(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam00000001137f6558 & 1) == 0) {
    iVar2 = 0x137f6558;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uVar1 = 0xf0;
      func_0x000107c2be10();
      uRam00000001137f64fb = uVar1;
      func_0x000107c39694(0x1137f6558);
    }
  }
  return uRam00000001137f64fb;
}



/* Entry: 10b4a3ab4; end: 10b4a3b23;  */

undefined1 FUN_10b4a3ab4(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam00000001137f6560 & 1) == 0) {
    iVar2 = 0x137f6560;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uVar1 = 8;
      func_0x000107c2be10();
      uRam00000001137f64fc = uVar1;
      func_0x000107c39694(0x1137f6560);
    }
  }
  return uRam00000001137f64fc;
}



/* Entry: 10b4a3b24; end: 10b4a3c83;  */

long FUN_10b4a3b24(long param_1)

{
  func_0x000107c27f3c(param_1 + 0x60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b4a3c84; end: 10b4a3d6b;  */

void FUN_10b4a3c84(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (*param_2 != 0) {
    func_0x000107c3966c();
    plVar3 = *(long **)(unaff_x19 + 0x240);
    if (plVar3 < *(long **)(unaff_x19 + 0x248)) {
      lVar2 = *param_2;
      plVar5 = plVar3 + 2;
      plVar3[1] = param_2[1];
      *plVar3 = lVar2;
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      plVar1 = (long *)(unaff_x19 + 0x238);
      lVar2 = ((long)plVar3 - *plVar1 >> 4) + 1;
      FUN_10b4a5180();
      lVar4 = *(long *)(unaff_x19 + 0x240);
      lVar6 = *(long *)(unaff_x19 + 0x238);
      if (plVar1 == (long *)0x0) {
        lVar2 = 0;
      }
      else {
        FUN_10b4a5200();
      }
      plVar3 = (long *)((long)plVar1 + (lVar4 - lVar6));
      lVar4 = *param_2;
      plVar5 = plVar3 + 2;
      plVar3[1] = param_2[1];
      *plVar3 = lVar4;
      *param_2 = 0;
      param_2[1] = 0;
      lVar6 = (long)plVar3 - (*(long *)(unaff_x19 + 0x240) - *(long *)(unaff_x19 + 0x238));
      _memcpy(lVar6);
      lVar4 = *(long *)(unaff_x19 + 0x238);
      *(long *)(unaff_x19 + 0x238) = lVar6;
      *(long **)(unaff_x19 + 0x240) = plVar5;
      *(long **)(unaff_x19 + 0x248) = plVar1 + lVar2 * 2;
      if (lVar4 != 0) {
        __ZdlPv();
      }
    }
    *(long **)(unaff_x19 + 0x240) = plVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x50);
    return;
  }
  return;
}



/* Entry: 10b4a3d6c; end: 10b4a3d8f;  */

void FUN_10b4a3d6c(void)

{
  long unaff_x19;
  
  func_0x000107c3966c();
  FUN_10b4a3d90(unaff_x19 + 0x238);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x50);
  return;
}



/* Entry: 10b4a3d90; end: 10b4a3d97;  */

void FUN_10b4a3d90(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c396b4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b2d717c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b4a3d98; end: 10b4a3dfb;  */

void FUN_10b4a3d98(void)

{
  long unaff_x19;
  
  func_0x000107c3966c();
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x50);
  return;
}



/* Entry: 10b4a3dfc; end: 10b4a3e83;  */

undefined8 FUN_10b4a3dfc(undefined8 param_1,undefined8 param_2)

{
  code *extraout_x8;
  undefined8 unaff_x19;
  undefined8 auStack_30 [2];
  
  func_0x000107c3966c();
  if ((int)param_2 == 0) {
    func_0x00010b4a3bb8(auStack_30);
    func_0x00010b4a6964(auStack_30[0]);
    (*extraout_x8)();
    func_0x00010b4a6a34();
  }
  else {
    FUN_10b4a3e84();
    FUN_10b4a3e90();
    param_2 = unaff_x19;
  }
  func_0x000107c39680();
  return param_2;
}



/* Entry: 10b4a3e84; end: 10b4a3e8f;  */

undefined1 FUN_10b4a3e84(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam0000000113374c58 & 1) == 0) {
    iVar2 = 0x13374c58;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uVar1 = 0x68;
      func_0x000107c2be10();
      uRam0000000113374c50 = uVar1;
      ___cxa_guard_release(0x113374c58);
    }
  }
  return uRam0000000113374c50;
}



/* Entry: 10b4a3e90; end: 10b4a3f4f;  */

undefined1  [16] FUN_10b4a3e90(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  code *extraout_x8;
  int extraout_w10;
  int *piVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  int iStack_24;
  
  lVar2 = param_1 + 0x100;
  piVar4 = &iStack_24;
  iStack_24 = param_2;
  FUN_10b4a6448(lVar2,piVar4);
  if (lVar2 == 0) {
    piVar4 = (int *)0x0;
    plVar5 = (long *)0xffffffffffffffff;
  }
  else {
    plVar3 = *(long **)(lVar2 + 0x18);
    plVar5 = plVar3;
    if (*(long *)(lVar2 + 0x20) != 0) {
      do {
        func_0x000107c3967c();
      } while (extraout_w10 != 0);
    }
    if (param_3 != 0) {
      (**(code **)(*plVar5 + 0x20))();
      iVar1 = iStack_24;
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar2 = 0x130;
      if (iVar1 != 4) {
        lVar2 = 0x128;
      }
      *(long **)(param_1 + lVar2) = plVar5;
      plVar5 = plVar3;
    }
    func_0x00010b4a6964();
    (*extraout_x8)();
    func_0x00010b4a68bc();
  }
  auVar6._8_8_ = piVar4;
  auVar6._0_8_ = plVar5;
  return auVar6;
}



/* Entry: 10b4a3f50; end: 10b4a3fc3;  */

undefined4 FUN_10b4a3f50(undefined4 param_1)

{
  int iVar1;
  
  if ((bRam00000001137f6590 & 1) == 0) {
    iVar1 = 0x137f6590;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2be40(&PTR_DAT_110cede80);
      uRam00000001137f6508 = param_1;
      ___cxa_guard_release(0x1137f6590);
    }
  }
  return uRam00000001137f6508;
}



/* Entry: 10b4a3fc4; end: 10b4a4037;  */

undefined4 FUN_10b4a3fc4(undefined4 param_1)

{
  int iVar1;
  
  if ((bRam00000001137f6598 & 1) == 0) {
    iVar1 = 0x137f6598;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2be40(&PTR_DAT_110cede98);
      uRam00000001137f650c = param_1;
      ___cxa_guard_release(0x1137f6598);
    }
  }
  return uRam00000001137f650c;
}



/* Entry: 10b4a4038; end: 10b4a40df;  */

double FUN_10b4a4038(double param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  uVar2 = *(uint *)(param_2 + 0x98);
  if (uVar1 == 0 && uVar2 == 0) {
    dVar4 = 0.0;
  }
  else {
    dVar3 = (double)uVar1;
    dVar5 = dVar3 + (double)uVar2 + 9.0 + 1.0;
    dVar6 = dVar3 + 9.0;
    dVar4 = param_1;
    if (uVar1 != 0) {
      func_0x00010b4a10fc(param_2);
      dVar4 = dVar3;
    }
    if (uVar2 != 0) {
      func_0x00010b4a10fc(param_2 + 0x68);
      param_1 = dVar3;
    }
    dVar4 = (((double)uVar2 + 1.0) / dVar5) * param_1 + dVar4 * (dVar6 / dVar5);
  }
  return dVar4;
}



/* Entry: 10b4a40e0; end: 10b4a4113;  */

long FUN_10b4a40e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c27940(param_1 + 8);
  func_0x000107c27940(param_1 + 8,param_3);
  return param_1;
}



/* Entry: 10b4a4114; end: 10b4a4117;  */

undefined8 * FUN_10b4a4114(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cedf28;
  func_0x000107c278a8(param_1 + 1);
  return param_1;
}



/* Entry: 10b4a4118; end: 10b4a4c1b;  */

void FUN_10b4a4118(long *param_1,undefined **param_2,undefined **param_3,undefined ***param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined ***pppuVar7;
  uint uVar8;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long lVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined **extraout_x8_04;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined ***pppuVar18;
  undefined **ppuVar19;
  ulong uVar20;
  long *plVar21;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  double dVar26;
  float unaff_s10;
  undefined *apuStack_1e0 [3];
  uint auStack_1c8 [2];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined **ppuStack_e8;
  undefined **appuStack_e0 [2];
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  long *plVar22;
  
  lVar13 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  auStack_1c8[0] = 0x15;
  auStack_1c8[1] = 0x14;
  ppuVar25 = param_3;
  pppuVar7 = param_4;
  do {
    if (lVar13 == 0xc) {
      return;
    }
    uVar3 = *(uint *)(&UNK_10e5b3a1c + lVar13);
    for (lVar16 = 0; lVar16 != 8; lVar16 = lVar16 + 4) {
      uVar4 = *(uint *)(auStack_1c0 + lVar16 + -8);
      bVar5 = *(byte *)((long)param_3 + 0xac);
      func_0x000107c30078();
      if ((int)ppuVar25 == 0) goto LAB_10b4a481c;
      uVar12 = 0;
      switch(uVar3) {
      case 2:
        if ((bRam00000001137f65a0 & 1) == 0) {
          ppuVar25 = (undefined **)0x1137f65a0;
          ___cxa_guard_acquire();
          if ((int)ppuVar25 != 0) {
            ppuVar25 = &PTR_DAT_110cedf50;
            func_0x000107c2be10();
            bRam00000001137f64fe = (byte)ppuVar25;
            func_0x000107c39694(0x1137f65a0);
          }
        }
        uVar12 = (uint)bRam00000001137f64fe;
        break;
      case 3:
code_r0x00010b4a4224:
        FUN_10b4a3a44();
        goto code_r0x00010b4a424c;
      case 5:
        FUN_10b4a3ab4();
        if ((int)ppuVar25 != 0) goto code_r0x00010b4a4224;
        uVar12 = 0;
        break;
      case 6:
        if ((bRam00000001137f65a8 & 1) == 0) {
          ppuVar25 = (undefined **)0x1137f65a8;
          ___cxa_guard_acquire();
          if ((int)ppuVar25 != 0) {
            ppuVar25 = &PTR_DAT_110cedf68;
            func_0x000107c2be10();
            bRam00000001137f64ff = (byte)ppuVar25;
            func_0x000107c39694(0x1137f65a8);
          }
        }
        uVar12 = (uint)bRam00000001137f64ff;
        break;
      case 7:
        func_0x000107c30070();
code_r0x00010b4a424c:
        uVar12 = (uint)ppuVar25;
      }
      if (uVar4 == 0x14) {
        uVar8 = 1;
LAB_10b4a4270:
        if ((uVar12 & uVar8 & 1) != 0) {
          ppuVar25 = param_3 + 10;
          __ZNSt3__15mutex4lockEv();
          if (uVar3 == 6) {
LAB_10b4a43dc:
            puVar23 = param_3[0x27];
LAB_10b4a43e0:
            ppuVar25 = *(undefined ***)(puVar23 + 8);
LAB_10b4a43e4:
            uVar20 = (ulong)(double)ppuVar25;
          }
          else {
            ppuVar19 = param_4[1];
            if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
              ppuVar19 = (undefined **)(ulong)*(byte *)((long)param_4 + 0x17);
            }
            if (ppuVar19 == (undefined **)0x0) goto LAB_10b4a43dc;
            uVar8 = *(uint *)((long)param_3 + 0x9c);
            uVar12 = uVar8;
            if (2 < uVar8) {
              uVar12 = 3;
            }
            if (uVar8 == 0) {
              uVar12 = 1;
            }
            if (uVar3 != 7) {
              if (uVar3 != 5) {
                if (uVar3 == 2) goto LAB_10b4a43dc;
LAB_10b4a42f4:
                ppuVar19 = (undefined **)param_3[0x30];
                if ((ppuVar19 == (undefined **)0x0) || (param_3[0x32] == (undefined *)0x0)) {
                  plVar21 = (long *)0x0;
                }
                else {
                  ppuVar24 = param_3 + 0x32;
                  pppuVar7 = param_4;
                  func_0x000107c278c4();
                  puVar23 = (undefined *)((long)ppuVar19 + -1);
                  if (((ulong)ppuVar19 & (ulong)puVar23) == 0) {
                    ppuVar17 = (undefined **)((ulong)ppuVar24 & (ulong)puVar23);
                  }
                  else {
                    ppuVar17 = ppuVar24;
                    if (ppuVar19 <= ppuVar24) {
                      uVar20 = 0;
                      if (ppuVar19 != (undefined **)0x0) {
                        uVar20 = (ulong)ppuVar24 / (ulong)ppuVar19;
                      }
                      ppuVar17 = (undefined **)((long)ppuVar24 - uVar20 * (long)ppuVar19);
                    }
                  }
                  plVar21 = (long *)0x0;
                  ppuVar25 = ppuVar24;
                  plVar22 = *(long **)(param_3[0x2f] + (long)ppuVar17 * 8);
                  if (*(long **)(param_3[0x2f] + (long)ppuVar17 * 8) != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar21 = (long *)*plVar22;
                        if (plVar21 == (long *)0x0) goto LAB_10b4a48a8;
                        ppuVar11 = (undefined **)plVar21[1];
                        plVar22 = plVar21;
                        if (ppuVar11 != ppuVar24) break;
                        ppuVar25 = (undefined **)(plVar21 + 2);
                        pppuVar7 = param_4;
                        func_0x000107c278d0();
                        if ((int)ppuVar25 != 0) goto LAB_10b4a48a8;
                      }
                      if (((ulong)ppuVar19 & (ulong)puVar23) == 0) {
                        ppuVar11 = (undefined **)((ulong)ppuVar11 & (ulong)puVar23);
                      }
                      else if (ppuVar19 <= ppuVar11) {
                        uVar20 = 0;
                        if (ppuVar19 != (undefined **)0x0) {
                          uVar20 = (ulong)ppuVar11 / (ulong)ppuVar19;
                        }
                        ppuVar11 = (undefined **)((long)ppuVar11 - uVar20 * (long)ppuVar19);
                      }
                    } while (ppuVar11 == ppuVar17);
                    plVar21 = (long *)0x0;
                  }
                }
LAB_10b4a48a8:
                ppuVar19 = *(undefined ***)(param_3[0x27] + 8);
                if (plVar21 == (long *)0x0) {
                  func_0x00010b4a681c();
LAB_10b4a48e0:
                  ppuVar24 = ppuVar25;
                  if (((ulong)pppuVar7 & 1) == 0) {
                    ppuVar24 = ppuVar19;
                  }
                  uVar20 = (ulong)(double)ppuVar24;
                  goto LAB_10b4a43e8;
                }
                if ((uVar3 != 3) ||
                   (puVar23 = *(undefined **)((long)plVar21 + 0x28),
                   *(uint *)(puVar23 + 0x10) < uVar12)) {
                  func_0x00010b4a681c();
                  goto LAB_10b4a48e0;
                }
                goto LAB_10b4a43e0;
              }
              func_0x00010b4a681c();
              if (((ulong)pppuVar7 & 1) == 0) goto LAB_10b4a42f4;
              goto LAB_10b4a43e4;
            }
            if ((param_3[0x34] == (undefined *)0x0) || (*(int *)(param_3[0x34] + 0x30) == 0))
            goto LAB_10b4a43dc;
            ppuVar25 = &PTR_PTR_1133851b8;
            if ((undefined **)param_3[0x50] != (undefined **)0x0) {
              ppuVar25 = (undefined **)param_3[0x50];
            }
            if (*(char *)(ppuVar25 + 5) == '\x01') {
              ppuVar25 = param_3 + 0x3a;
              pppuVar7 = param_4;
              FUN_10b4a6398();
              if (((ppuVar25 != (undefined **)0x0) &&
                  (puVar23 = ppuVar25[5], puVar23 != (undefined *)0x0)) &&
                 ((*(int *)(puVar23 + 0x30) != 0 || (*(int *)(puVar23 + 0x98) != 0)))) {
                dVar26 = *(double *)(param_3[0x34] + 0x20);
                FUN_10b4a3f50();
                func_0x00010b4a69d0();
                ppuVar19 = param_2;
                FUN_10b4a3fc4();
                ppuVar24 = ppuVar19;
                func_0x00010b4a69e8();
                ppuVar25 = ppuVar24;
                if ((double)param_2 < (double)unaff_s10) {
                  func_0x00010b4a69e8();
                  ppuVar25 = (undefined **)(dVar26 * (double)SUB84(ppuVar19,0));
                  if ((double)ppuVar24 <= (double)ppuVar25) {
                    ppuVar25 = ppuVar24;
                  }
                }
                goto LAB_10b4a43e4;
              }
            }
            else {
              ppuVar25 = (undefined **)param_3[0x36];
              if ((ppuVar25 != (undefined **)0x0) && (param_3[0x38] != (undefined *)0x0)) {
                ppuVar19 = param_3 + 0x38;
                pppuVar7 = param_4;
                func_0x000107c278c4();
                puVar23 = (undefined *)((long)ppuVar25 + -1);
                if (((ulong)ppuVar25 & (ulong)puVar23) == 0) {
                  ppuVar24 = (undefined **)((ulong)ppuVar19 & (ulong)puVar23);
                }
                else {
                  ppuVar24 = ppuVar19;
                  if (ppuVar25 <= ppuVar19) {
                    uVar20 = 0;
                    if (ppuVar25 != (undefined **)0x0) {
                      uVar20 = (ulong)ppuVar19 / (ulong)ppuVar25;
                    }
                    ppuVar24 = (undefined **)((long)ppuVar19 - uVar20 * (long)ppuVar25);
                  }
                }
                plVar21 = *(long **)(param_3[0x35] + (long)ppuVar24 * 8);
                if (plVar21 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar21 = (long *)*plVar21;
                      if (plVar21 == (long *)0x0) goto LAB_10b4a49ec;
                      ppuVar17 = (undefined **)plVar21[1];
                      if (ppuVar17 != ppuVar19) break;
                      iVar6 = (int)plVar21 + 0x10;
                      pppuVar7 = param_4;
                      func_0x000107c278d0();
                      if (iVar6 != 0) {
                        lVar9 = plVar21[5];
                        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x30) != 0)) {
                          ppuVar19 = *(undefined ***)(param_3[0x34] + 0x20);
                          func_0x00010b4a10fc(lVar9);
                          ppuVar25 = param_2;
                          FUN_10b4a3f50();
                          func_0x00010b4a69d0();
                          if ((double)ppuVar25 < (double)unaff_s10) {
                            func_0x00010b4a116c(lVar9);
                            ppuVar25 = ppuVar19;
                            param_2 = ppuVar19;
                          }
                          uVar20 = (ulong)(double)param_2;
                          goto LAB_10b4a43e8;
                        }
                        goto LAB_10b4a49ec;
                      }
                    }
                    if (((ulong)ppuVar25 & (ulong)puVar23) == 0) {
                      ppuVar17 = (undefined **)((ulong)ppuVar17 & (ulong)puVar23);
                    }
                    else if (ppuVar25 <= ppuVar17) {
                      func_0x00010b4a6aa4();
                      ppuVar17 = extraout_x8_04;
                    }
                  } while (ppuVar17 == ppuVar24);
                }
              }
            }
LAB_10b4a49ec:
            ppuVar25 = *(undefined ***)(param_3[0x34] + 0x20);
            uVar20 = (ulong)(double)ppuVar25;
          }
LAB_10b4a43e8:
          func_0x00010b4a69c0();
          ppuVar19 = param_3 + 10;
          __ZNSt3__15mutex4lockEv(ppuVar19);
          if (uVar4 == 0x15) {
            FUN_10b4a3e84();
            pppuVar18 = (undefined ***)0x4;
            ppuVar24 = param_3;
            FUN_10b4a3e90(param_3,4,ppuVar19);
            ppuVar19 = ppuVar24;
            func_0x000107c300d0();
            if ((int)ppuVar19 != 0) {
              __ZNSt3__16chrono12steady_clock3nowEv();
              ppuVar17 = param_3;
              FUN_10b4a4ef8(param_3,ppuVar19);
              ppuVar19 = &PTR_PTR_113385200;
              if ((undefined **)param_3[0x51] != (undefined **)0x0) {
                ppuVar19 = (undefined **)param_3[0x51];
              }
              puVar23 = (undefined *)0x40000;
              if (ppuVar19[8] != (undefined *)0x0) {
                puVar23 = ppuVar19[8];
              }
              if (*(int *)(param_3 + 0x4a) == 0) {
                ppuVar11 = (undefined **)ppuVar19[4];
                ppuVar25 = (undefined **)0x40a4e60000000000;
              }
              else {
                ppuVar11 = (undefined **)ppuVar19[5];
                ppuVar25 = (undefined **)0x409c740000000000;
              }
              if (0.0 < (double)ppuVar11) {
                ppuVar25 = ppuVar11;
              }
              if (0 < (long)ppuVar24) {
                uVar14 = 0;
                if (puVar23 != (undefined *)0x0) {
                  uVar14 = (ulong)ppuVar17 / (ulong)puVar23;
                }
                if ((int)uVar14 != 0) {
                  puVar23 = ppuVar19[6];
                  if ((double)puVar23 <= 0.0) {
                    puVar23 = (undefined *)0x4010000000000000;
                  }
                  dVar26 = (double)puVar23 + (double)(uVar14 & 0xffffffff);
                  ppuVar25 = (undefined **)
                             ((double)ppuVar25 * ((double)puVar23 / dVar26) +
                             (double)ppuVar24 * ((double)(uVar14 & 0xffffffff) / dVar26));
                }
              }
              ppuVar24 = (undefined **)(long)(double)ppuVar25;
            }
          }
          else if (uVar4 == 0x14) {
            func_0x00010b4a3bb8(&ppuStack_d0,param_3);
            ppuVar24 = ppuStack_d0;
            func_0x00010b4a6964();
            (*extraout_x8)();
            func_0x000107c300ec(&ppuStack_d0);
            pppuVar18 = pppuVar7;
          }
          else {
            pppuVar18 = (undefined ***)0x0;
            ppuVar24 = (undefined **)0xffffffffffffffff;
          }
          func_0x00010b4a69c0();
          uVar14 = 0;
          if (ppuVar24 != (undefined **)0x0) {
            uVar14 = (param_5 << 3) / (ulong)ppuVar24;
          }
          uVar1 = 0;
          if (0 < (long)ppuVar24) {
            uVar1 = uVar14;
          }
          uStack_c8 = 0;
          uStack_b8 = 0;
          ppuStack_d0 = (undefined **)(ulong)uVar3;
          puStack_c0 = (ulong *)(ulong)uVar4;
          func_0x000107c2793c(&UNK_10f77084d);
          func_0x000107c3173c(apuStack_1e0);
          uVar1 = uVar1 + (uVar20 & ((long)uVar20 >> 0x3f ^ 0xffffffffffffffffU));
          param_2 = ppuVar25;
          if (param_3[0x4b] != (undefined *)0x0) {
            func_0x00010b4a66f4();
            uStack_b0 = 0;
            func_0x00010b4a6750(&ppuStack_e8);
            func_0x00010b4a67bc(auStack_100);
            FUN_10b4a40e0(&ppuStack_d0,&ppuStack_e8,auStack_100);
            func_0x00010b4a6930();
            func_0x00010b4a6840();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_e8);
            func_0x00010b4a67e8();
            if ((long)uVar20 < 1) {
              func_0x00010b4a66f4();
              uStack_b0 = 4;
              func_0x00010b4a6750(auStack_118);
              func_0x00010b4a67bc(auStack_130);
              func_0x00010b4a68d4();
              func_0x00010b4a6930();
              func_0x00010b4a6840();
              param_2 = ppuVar25;
            }
            else {
              func_0x00010b4a66f4();
              uStack_b0 = 1;
              func_0x00010b4a6750(auStack_118);
              func_0x00010b4a67bc(auStack_130);
              func_0x00010b4a68d4();
              func_0x00010b4a684c();
              (*extraout_x8_00)();
              param_2 = ppuVar25;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
            func_0x00010b4a67e8();
            if ((long)ppuVar24 < 1) {
              func_0x00010b4a66f4();
              uStack_b0 = 5;
              func_0x00010b4a6750(auStack_148);
              func_0x00010b4a67bc(auStack_160);
              func_0x00010b4a68c4();
              func_0x00010b4a6930();
              func_0x00010b4a6840();
            }
            else {
              func_0x00010b4a66f4();
              uStack_b0 = 2;
              func_0x00010b4a6750(auStack_148);
              func_0x00010b4a67bc(auStack_160);
              func_0x00010b4a68c4();
              func_0x00010b4a684c();
              (*extraout_x8_01)();
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
            func_0x00010b4a67e8();
            func_0x00010b4a66f4();
            uStack_b0 = 3;
            func_0x00010b4a6750(auStack_178);
            func_0x00010b4a67bc(auStack_190);
            FUN_10b4a40e0(&ppuStack_d0,auStack_178,auStack_190);
            func_0x00010b4a684c();
            (*extraout_x8_02)();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_190);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
            func_0x00010b4a67e8();
            func_0x00010b4a66f4();
            uStack_b0 = 6;
            func_0x00010b4a6750(auStack_1a8);
            func_0x00010b4a67bc(auStack_1c0);
            FUN_10b4a40e0(&ppuStack_d0,auStack_1a8,auStack_1c0);
            func_0x00010b4a684c();
            (*extraout_x8_03)();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
            func_0x00010b4a67e8();
          }
          ppuStack_e8 = (undefined **)CONCAT44(uVar4,uVar3);
          pppuVar7 = appuStack_e0;
          FUN_10b4a537c(&ppuStack_e8,pppuVar7,2,1);
          uVar14 = 0;
          ppuStack_d0 = ppuStack_e8;
          for (lVar9 = 0; lVar9 != 8; lVar9 = lVar9 + 4) {
            if (0x3f < (int)*(uint *)((long)&ppuStack_d0 + lVar9)) {
              uVar14 = 0xffffffffffffffff;
              break;
            }
            uVar14 = 1L << ((ulong)*(uint *)((long)&ppuStack_d0 + lVar9) & 0x3f) | uVar14;
          }
          uVar10 = (long)ppuVar24 * 1000;
          if ((undefined **)0x7fffffffffffffff < ppuVar24) {
            uVar10 = 0xffffffffffffffff;
          }
          puVar2 = (ulong *)param_1[1];
          if (puVar2 < (ulong *)param_1[2]) {
            *puVar2 = uVar14;
            puVar2[1] = uVar1;
            puVar2[2] = uVar20;
            puVar2[3] = uVar10;
            puVar15 = puVar2 + 6;
            puVar2[4] = (ulong)pppuVar18;
            puVar2[5] = param_5;
          }
          else {
            plVar21 = param_1;
            FUN_10b4969f0(param_1,((long)puVar2 - *param_1) / 0x30 + 1);
            FUN_10b49694c(&ppuStack_d0,plVar21,(param_1[1] - *param_1) / 0x30,param_1 + 2);
            *puStack_c0 = uVar14;
            puStack_c0[1] = uVar1;
            puStack_c0[2] = uVar20;
            puStack_c0[3] = uVar10;
            puStack_c0[4] = (ulong)pppuVar18;
            puStack_c0[5] = param_5;
            puStack_c0 = puStack_c0 + 6;
            pppuVar7 = &ppuStack_d0;
            FUN_10b4968c0(param_1);
            puVar15 = (ulong *)param_1[1];
            func_0x00010b49699c(&ppuStack_d0);
          }
          param_1[1] = (long)puVar15;
          ppuVar25 = apuStack_1e0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        }
      }
      else if (uVar4 == 0x15) {
        func_0x000107c30098();
        uVar8 = (uint)ppuVar25 | (uint)bVar5;
        goto LAB_10b4a4270;
      }
LAB_10b4a481c:
    }
    lVar13 = lVar13 + 4;
  } while( true );
}



/* Entry: 10b4a4c1c; end: 10b4a4cb3;  */

void FUN_10b4a4c1c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long extraout_x8;
  undefined1 auStack_48 [24];
  
  func_0x000107c39740(*(undefined8 *)(param_2 + 0x278));
  if ((*(byte *)(extraout_x8 + 0x10) & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    func_0x000107c278b8(auStack_48,&UNK_10f77084c);
    FUN_10b4a4118(param_1,param_2,param_3,param_4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  }
  return;
}



/* Entry: 10b4a4cb4; end: 10b4a4df7;  */

double FUN_10b4a4cb4(float param_1)

{
  float fVar1;
  int iVar2;
  
  if ((bRam00000001137f65b8 & 1) == 0) {
    iVar2 = 0x137f65b8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      fVar1 = param_1;
      func_0x000107c2be40(&PTR_DAT_110cedf98);
      fRam00000001137f6510 = fVar1;
      param_1 = fRam00000001137f6510;
      ___cxa_guard_release(0x1137f65b8);
    }
  }
  fVar1 = fRam00000001137f6510;
  if ((bRam00000001137f65c0 & 1) == 0) {
    iVar2 = 0x137f65c0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c2be40(&PTR_DAT_110cedfb0);
      fRam00000001137f6514 = param_1;
      ___cxa_guard_release(0x1137f65c0);
    }
  }
  if ((bRam00000001137f65c8 & 1) == 0) {
    iVar2 = 0x137f65c8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c2be40(&PTR_DAT_110cedfc8);
      fRam00000001137f6518 = param_1;
      ___cxa_guard_release(0x1137f65c8);
    }
  }
  FUN_10b4a3fc4();
  return (double)fVar1;
}



/* Entry: 10b4a4df8; end: 10b4a4ef7;  */

undefined1  [16] FUN_10b4a4df8(float param_1)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  if ((bRam00000001137f65d0 & 1) == 0) {
    iVar2 = 0x137f65d0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      fVar1 = param_1;
      func_0x000107c2be40(&PTR_DAT_110cedfe0);
      fRam00000001137f651c = fVar1;
      param_1 = fRam00000001137f651c;
      ___cxa_guard_release(0x1137f65d0);
    }
  }
  fVar1 = fRam00000001137f651c;
  if ((bRam00000001137f65d8 & 1) == 0) {
    iVar2 = 0x137f65d8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c2be40(&PTR_DAT_110cedff8);
      fRam00000001137f6520 = param_1;
      ___cxa_guard_release(0x1137f65d8);
    }
  }
  dVar3 = INFINITY;
  if (1.0 <= fVar1) {
    dVar3 = (double)fVar1;
  }
  dVar5 = 1.0;
  if ((double)fRam00000001137f6520 <= 1.0) {
    dVar5 = (double)fRam00000001137f6520;
  }
  dVar4 = 0.0;
  if (0.0 <= fRam00000001137f6520) {
    dVar4 = dVar5;
  }
  auVar6._8_8_ = dVar4;
  auVar6._0_8_ = dVar3;
  return auVar6;
}



/* Entry: 10b4a4ef8; end: 10b4a4f53;  */

long FUN_10b4a4ef8(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  double dVar3;
  
  if (*(long *)(param_1 + 0x1f8) != 0) {
    ppuVar1 = &PTR_PTR_113385200;
    if (*(undefined ***)(param_1 + 0x288) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0x288);
    }
    dVar3 = (double)ppuVar1[7] * 1000000000.0;
    if ((double)ppuVar1[7] <= 0.0) {
      dVar3 = 30000000000.0;
    }
    lVar2 = 0;
    if (param_2 - *(long *)(param_1 + 0x200) <= (long)dVar3) {
      lVar2 = *(long *)(param_1 + 0x1f8);
    }
    return lVar2;
  }
  return 0;
}



/* Entry: 10b4a4f54; end: 10b4a4f7b;  */

long * FUN_10b4a4f54(long param_1)

{
  long *plVar1;
  
  FUN_10b4a6448();
  if (param_1 != 0) {
    return (long *)(param_1 + 0x18);
  }
  plVar1 = (long *)&UNK_10f770b0b;
  func_0x000104c03f28();
  if (*plVar1 != 0) {
    func_0x000107c300a0(plVar1);
    __ZdlPv(*plVar1);
  }
  return plVar1;
}



/* Entry: 10b4a4f7c; end: 10b4a4fdb;  */

long * FUN_10b4a4f7c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c300a0(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10b4a4fdc; end: 10b4a5047;  */

long FUN_10b4a4fdc(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  
  lVar2 = *(long *)(param_1 + 0x38);
  while (lVar2 != 0) {
    func_0x00010b4a6828();
    func_0x000107c39684();
    lVar2 = unaff_x21;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != 0) {
    func_0x00010b4a6828();
    func_0x000107c39684();
    lVar1 = unaff_x21;
  }
  func_0x00010b4a68b0();
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b4a5048; end: 10b4a50eb;  */

undefined1 FUN_10b4a5048(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar6 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (uVar6 == param_3) {
    func_0x000107c396b4();
    uVar6 = 0;
    do {
      bVar3 = *(byte *)((long)unaff_x20 + 0x17);
      uVar1 = unaff_x20[1];
      if (-1 < (char)bVar3) {
        uVar1 = (ulong)bVar3;
      }
      if (uVar1 <= uVar6) {
        return 1;
      }
      plVar2 = (long *)*unaff_x20;
      if (-1 < (char)bVar3) {
        plVar2 = unaff_x20;
      }
      uVar4 = (uint)*(byte *)((long)plVar2 + uVar6);
      ___tolower();
      uVar5 = (uint)*(byte *)(unaff_x19 + uVar6);
      ___tolower();
      uVar6 = uVar6 + 1;
    } while (uVar4 == uVar5);
  }
  return 0;
}



/* Entry: 10b4a50ec; end: 10b4a5103;  */

void FUN_10b4a50ec(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4a6810();
  func_0x00010b4a6810();
  func_0x000107c396b4();
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 10b4a5104; end: 10b4a513b;  */

void FUN_10b4a5104(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c396b4();
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 10b4a513c; end: 10b4a517f;  */

void FUN_10b4a513c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar5 = param_2[1];
    uVar6 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar6;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar4 = puVar4 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar4;
  return;
}



/* Entry: 10b4a5180; end: 10b4a51bf;  */

ulong FUN_10b4a5180(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong unaff_x19;
  long unaff_x20;
  
  if (param_2 >> 0x3c == 0) {
    uVar1 = param_1[2] - *param_1 >> 3;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0xfffffffffffffff;
    }
    return uVar1;
  }
  FUN_10b4a51f4();
  func_0x000107c396b4();
  uVar1 = param_1[1];
  while (uVar1 != unaff_x19) {
    uVar1 = uVar1 - 0x10;
    func_0x00010b2d717c();
  }
  *(ulong *)(unaff_x20 + 8) = unaff_x19;
  return uVar1;
}



/* Entry: 10b4a51c0; end: 10b4a51f3;  */

void FUN_10b4a51c0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c396b4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010b2d717c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b4a51f4; end: 10b4a51ff;  */

undefined1  [16] FUN_10b4a51f4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x00010b4a6810();
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104bd35f4();
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(char *)(param_2 + 8) == '\x01') {
    param_2 = param_2 + 2;
    func_0x00010b2d8dcc(param_1 + 2,param_2);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b4a5200; end: 10b4a5233;  */

undefined1  [16] FUN_10b4a5200(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104bd35f4();
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(char *)(param_2 + 8) == '\x01') {
    param_2 = param_2 + 2;
    func_0x00010b2d8dcc(param_1 + 2,param_2);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b4a5234; end: 10b4a529b;  */

undefined8 * FUN_10b4a5234(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(char *)(param_2 + 8) == '\x01') {
    func_0x00010b2d8dcc(param_1 + 2,param_2 + 2);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return param_1;
}



/* Entry: 10b4a529c; end: 10b4a5323;  */

undefined1 FUN_10b4a529c(undefined1 param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam0000000113374c58 & 1) == 0) {
    iVar2 = 0x13374c58;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uVar1 = param_1;
      func_0x000107c2be10();
      uRam0000000113374c50 = uVar1;
      ___cxa_guard_release(0x113374c58);
    }
  }
  return uRam0000000113374c50;
}



/* Entry: 10b4a5324; end: 10b4a5337;  */

void FUN_10b4a5324(void)

{
  FUN_10b4a5350();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a5338; end: 10b4a534f;  */

undefined4 FUN_10b4a5338(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10b4a5350; end: 10b4a537b;  */

undefined8 * FUN_10b4a5350(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cedf28;
  func_0x000107c278a8(param_1 + 1);
  return param_1;
}



/* Entry: 10b4a537c; end: 10b4a5893;  */

void FUN_10b4a537c(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w9;
  int extraout_w9_00;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  int *unaff_x19;
  int *piVar17;
  int *unaff_x20;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  
  func_0x000107c396b4();
  piVar17 = unaff_x19;
  piVar18 = unaff_x20;
  do {
    piVar13 = piVar17 + -1;
    piVar14 = piVar18;
LAB_10b4a53b4:
    piVar18 = piVar14;
    uVar20 = (long)piVar17 - (long)piVar18 >> 2;
    switch(uVar20) {
    case 0:
    case 1:
      goto code_r0x00010060ef40;
    case 2:
      iVar12 = *piVar18;
      if (iVar12 <= piVar17[-1]) {
        return;
      }
      *piVar18 = piVar17[-1];
      piVar17[-1] = iVar12;
      return;
    case 3:
      piVar17 = piVar18 + 1;
      iVar12 = *piVar17;
      iVar11 = *piVar18;
      iVar3 = *piVar13;
      if (iVar12 < iVar11) {
        if (iVar3 < iVar12) {
          *piVar18 = iVar3;
        }
        else {
          *piVar18 = iVar12;
          *piVar17 = iVar11;
          if (iVar11 <= *piVar13) {
            return;
          }
          *piVar17 = *piVar13;
        }
        *piVar13 = iVar11;
      }
      else if (iVar3 < iVar12) {
        *piVar17 = iVar3;
        *piVar13 = iVar12;
        iVar12 = *piVar18;
        if (*piVar17 < iVar12) {
          *piVar18 = *piVar17;
          *piVar17 = iVar12;
          return;
        }
      }
      return;
    case 4:
      func_0x000107c396b4(piVar18,piVar18 + 1);
      FUN_10b4a5894();
      iVar12 = *piVar13;
      iVar11 = piVar18[2];
      cVar6 = SBORROW4(iVar12,iVar11);
      cVar7 = iVar12 - iVar11 < 0;
      if (((iVar12 < iVar11) && (func_0x00010b4a6988(), cVar7 != cVar6)) &&
         (func_0x00010b4a6970(), cVar7 != cVar6)) {
        *unaff_x20 = extraout_w8;
        *unaff_x19 = extraout_w9;
      }
      return;
    case 5:
      piVar17 = piVar18 + 3;
      func_0x000107c396b4(piVar18,piVar18 + 1);
      FUN_10b4a5904();
      iVar12 = *piVar17;
      if (*piVar13 < iVar12) {
        *piVar17 = *piVar13;
        *piVar13 = iVar12;
        iVar12 = *piVar17;
        iVar11 = piVar18[2];
        cVar6 = SBORROW4(iVar12,iVar11);
        cVar7 = iVar12 - iVar11 < 0;
        if (((iVar12 < iVar11) && (func_0x00010b4a6988(), cVar7 != cVar6)) &&
           (func_0x00010b4a6970(), cVar7 != cVar6)) {
          *unaff_x20 = extraout_w8_00;
          *unaff_x19 = extraout_w9_00;
        }
      }
      return;
    }
    if ((long)uVar20 < 0x18) {
      if ((param_4 & 1) == 0) {
        piVar14 = piVar18;
        if (piVar18 == piVar17) {
          return;
        }
        while( true ) {
          piVar18 = piVar18 + 1;
          piVar13 = piVar14 + 1;
          if (piVar13 == piVar17) break;
          iVar12 = *piVar14;
          iVar11 = piVar14[1];
          piVar8 = piVar18;
          piVar14 = piVar13;
          if (iVar11 < iVar12) {
            do {
              *piVar8 = iVar12;
              iVar12 = piVar8[-2];
              piVar8 = piVar8 + -1;
            } while (iVar11 < iVar12);
            *piVar8 = iVar11;
          }
        }
        return;
      }
      if (piVar18 == piVar17) {
        return;
      }
      lVar15 = 0;
      piVar14 = piVar18;
      break;
    }
    if (param_3 == 0) {
      if (piVar18 == piVar17) {
        return;
      }
      uVar19 = uVar20 - 2 >> 1;
      piVar14 = piVar18 + uVar19;
      do {
        FUN_10b4a5b20(piVar18,uVar20,piVar14);
        uVar19 = uVar19 - 1;
        piVar14 = piVar14 + -1;
      } while (-1 < (long)uVar19);
      do {
        if ((long)uVar20 < 2) {
          return;
        }
        uVar19 = 0;
        iVar12 = *piVar18;
        piVar14 = piVar18;
        do {
          piVar13 = piVar14 + uVar19 + 1;
          uVar2 = uVar19 << 1 | 1;
          uVar1 = uVar19 * 2 + 2;
          if ((long)uVar1 < (long)uVar20) {
            iVar4 = piVar14[uVar19 + 2];
            iVar3 = piVar14[uVar19 + 1];
            iVar11 = iVar3;
            if (iVar3 <= iVar4) {
              iVar11 = iVar4;
            }
            piVar8 = piVar14 + uVar19 + 2;
            uVar19 = uVar1;
            if (iVar4 <= iVar3) {
              piVar8 = piVar13;
              uVar19 = uVar2;
            }
          }
          else {
            iVar11 = *piVar13;
            piVar8 = piVar13;
            uVar19 = uVar2;
          }
          *piVar14 = iVar11;
          piVar14 = piVar8;
        } while ((long)uVar19 <= (long)(uVar20 - 2 >> 1));
        piVar17 = piVar17 + -1;
        if (piVar8 == piVar17) {
          *piVar8 = iVar12;
        }
        else {
          *piVar8 = *piVar17;
          *piVar17 = iVar12;
          lVar15 = (long)piVar8 + (4 - (long)piVar18) >> 2;
          if (1 < lVar15) {
            uVar19 = lVar15 - 2U >> 1;
            iVar12 = piVar18[uVar19];
            iVar11 = *piVar8;
            piVar14 = piVar18 + uVar19;
            if (iVar12 < iVar11) {
              do {
                piVar13 = piVar14;
                *piVar8 = iVar12;
                if (uVar19 == 0) break;
                uVar19 = uVar19 - 1 >> 1;
                iVar12 = piVar18[uVar19];
                piVar8 = piVar13;
                piVar14 = piVar18 + uVar19;
              } while (iVar12 < iVar11);
              *piVar13 = iVar11;
            }
          }
        }
        uVar20 = uVar20 - 1;
      } while( true );
    }
    piVar14 = piVar18 + (uVar20 >> 1);
    if (uVar20 < 0x81) {
      func_0x00010b4a69c8(piVar14,piVar18);
    }
    else {
      func_0x00010b4a69c8(piVar18,piVar14);
      FUN_10b4a5894(piVar18 + 1,piVar14 + -1,piVar17 + -2);
      FUN_10b4a5894(piVar18 + 2,piVar14 + 1,piVar17 + -3);
      FUN_10b4a5894(piVar14 + -1,piVar14,piVar14 + 1);
      iVar12 = *piVar18;
      *piVar18 = *piVar14;
      *piVar14 = iVar12;
    }
    param_3 = param_3 + -1;
    iVar12 = *piVar18;
    if (((param_4 & 1) == 0) && (iVar12 <= piVar18[-1])) {
      piVar14 = piVar18;
      if (iVar12 < *piVar13) {
        do {
          piVar14 = piVar14 + 1;
        } while (*piVar14 <= iVar12);
      }
      else {
        do {
          piVar14 = piVar14 + 1;
          if (piVar17 <= piVar14) break;
        } while (*piVar14 <= iVar12);
      }
      piVar8 = piVar17;
      if (piVar14 < piVar17) {
        do {
          piVar8 = piVar8 + -1;
        } while (iVar12 < *piVar8);
      }
      while (piVar14 < piVar8) {
        iVar11 = *piVar14;
        *piVar14 = *piVar8;
        *piVar8 = iVar11;
        do {
          piVar14 = piVar14 + 1;
        } while (*piVar14 <= iVar12);
        do {
          piVar8 = piVar8 + -1;
        } while (iVar12 < *piVar8);
      }
      piVar8 = piVar14 + -1;
      if (piVar18 != piVar8) {
        *piVar18 = *piVar8;
      }
      param_4 = 0;
      *piVar8 = iVar12;
      goto LAB_10b4a53b4;
    }
    lVar15 = 0;
    do {
      iVar11 = *(int *)((long)piVar18 + lVar15 + 4);
      lVar15 = lVar15 + 4;
    } while (iVar11 < iVar12);
    piVar8 = (int *)((long)piVar18 + lVar15);
    piVar10 = piVar17;
    piVar14 = piVar8;
    if (lVar15 == 4) {
      do {
        piVar9 = piVar10;
        if (piVar10 <= piVar8) break;
        piVar10 = piVar10 + -1;
        piVar9 = piVar10;
      } while (iVar12 <= *piVar10);
    }
    else {
      do {
        piVar10 = piVar10 + -1;
        piVar9 = piVar10;
      } while (iVar12 <= *piVar10);
    }
    while (piVar14 < piVar10) {
      *piVar14 = *piVar10;
      *piVar10 = iVar11;
      do {
        piVar14 = piVar14 + 1;
        iVar11 = *piVar14;
      } while (iVar11 < iVar12);
      do {
        piVar10 = piVar10 + -1;
      } while (iVar12 <= *piVar10);
    }
    piVar10 = piVar14 + -1;
    if (piVar18 != piVar10) {
      *piVar18 = *piVar10;
    }
    *piVar10 = iVar12;
    if (piVar8 < piVar9) goto LAB_10b4a5528;
    piVar8 = piVar18;
    FUN_10b4a59d0(piVar18,piVar10);
    piVar9 = piVar14;
    FUN_10b4a59d0(piVar14,piVar17);
    if ((int)piVar9 == 0) goto code_r0x00010b4a5524;
    piVar17 = piVar10;
    if (((ulong)piVar8 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10b4a56cc:
  if (piVar14 + 1 == piVar17) {
code_r0x00010060ef40:
    return;
  }
  iVar12 = *piVar14;
  iVar11 = piVar14[1];
  lVar5 = lVar15;
  if (iVar11 < iVar12) {
    do {
      lVar16 = lVar5;
      *(int *)((long)piVar18 + lVar16 + 4) = iVar12;
      piVar13 = piVar18;
      if (lVar16 == 0) goto LAB_10b4a5714;
      iVar12 = *(int *)((long)piVar18 + lVar16 + -4);
      lVar5 = lVar16 + -4;
    } while (iVar11 < iVar12);
    piVar13 = (int *)((long)piVar18 + lVar16);
LAB_10b4a5714:
    *piVar13 = iVar11;
  }
  lVar15 = lVar15 + 4;
  piVar14 = piVar14 + 1;
  goto LAB_10b4a56cc;
code_r0x00010b4a5524:
  if (((ulong)piVar8 & 1) == 0) {
LAB_10b4a5528:
    FUN_10b4a537c(piVar18,piVar10,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10b4a53b4;
}



/* Entry: 10b4a5894; end: 10b4a5903;  */

void FUN_10b4a5894(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  iVar3 = *param_3;
  if (iVar1 < iVar2) {
    if (iVar3 < iVar1) {
      *param_1 = iVar3;
    }
    else {
      *param_1 = iVar1;
      *param_2 = iVar2;
      if (iVar2 <= *param_3) {
        return;
      }
      *param_2 = *param_3;
    }
    *param_3 = iVar2;
  }
  else if (iVar3 < iVar1) {
    *param_2 = iVar3;
    *param_3 = iVar1;
    iVar1 = *param_1;
    if (*param_2 < iVar1) {
      *param_1 = *param_2;
      *param_2 = iVar1;
      return;
    }
  }
  return;
}



/* Entry: 10b4a5904; end: 10b4a5953;  */

void FUN_10b4a5904(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined4 extraout_w8;
  undefined4 extraout_w9;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x000107c396b4();
  FUN_10b4a5894();
  iVar1 = *param_4;
  iVar2 = *param_3;
  cVar3 = SBORROW4(iVar1,iVar2);
  cVar4 = iVar1 - iVar2 < 0;
  if (((iVar1 < iVar2) && (func_0x00010b4a6988(), cVar4 != cVar3)) &&
     (func_0x00010b4a6970(), cVar4 != cVar3)) {
    *unaff_x20 = extraout_w8;
    *unaff_x19 = extraout_w9;
  }
  return;
}



/* Entry: 10b4a5954; end: 10b4a59cf;  */

void FUN_10b4a5954(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined4 extraout_w8;
  undefined4 extraout_w9;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x000107c396b4();
  FUN_10b4a5904();
  iVar1 = *param_4;
  if (*param_5 < iVar1) {
    *param_4 = *param_5;
    *param_5 = iVar1;
    iVar1 = *param_4;
    iVar2 = *param_3;
    cVar3 = SBORROW4(iVar1,iVar2);
    cVar4 = iVar1 - iVar2 < 0;
    if (((iVar1 < iVar2) && (func_0x00010b4a6988(), cVar4 != cVar3)) &&
       (func_0x00010b4a6970(), cVar4 != cVar3)) {
      *unaff_x20 = extraout_w8;
      *unaff_x19 = extraout_w9;
    }
  }
  return;
}



/* Entry: 10b4a59d0; end: 10b4a5b1f;  */

bool FUN_10b4a59d0(int *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  
  switch((long)param_2 - (long)param_1 >> 2) {
  case 0:
  case 1:
    break;
  case 2:
    iVar3 = *param_1;
    if (param_2[-1] < iVar3) {
      *param_1 = param_2[-1];
      param_2[-1] = iVar3;
      return true;
    }
    return true;
  case 3:
    FUN_10b4a5894(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_10b4a5904(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_10b4a5954(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    func_0x00010b4a69c8(param_1,param_1 + 1);
    iVar3 = 0;
    lVar4 = 0xc;
    piVar7 = param_1 + 3;
    piVar9 = param_1 + 2;
    while (piVar5 = piVar7, piVar5 != param_2) {
      iVar1 = *piVar5;
      iVar6 = *piVar9;
      lVar8 = lVar4;
      if (iVar1 < iVar6) {
        do {
          *(int *)((long)param_1 + lVar8) = iVar6;
          lVar2 = lVar8 + -4;
          piVar7 = param_1;
          if (lVar2 == 0) goto LAB_10b4a5ac8;
          iVar6 = *(int *)((long)param_1 + lVar8 + -8);
          lVar8 = lVar2;
        } while (iVar1 < iVar6);
        piVar7 = (int *)((long)param_1 + lVar2);
LAB_10b4a5ac8:
        *piVar7 = iVar1;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return piVar5 + 1 == param_2;
        }
      }
      lVar4 = lVar4 + 4;
      piVar9 = piVar5;
      piVar7 = piVar5 + 1;
    }
  }
  return true;
}



/* Entry: 10b4a5b20; end: 10b4a5be7;  */

void FUN_10b4a5b20(long param_1,long param_2,int *param_3)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  
  if (1 < param_2) {
    uVar6 = param_2 - 2U >> 1;
    if ((long)param_3 - param_1 >> 2 <= (long)uVar6) {
      lVar10 = (long)param_3 - param_1 >> 1;
      uVar1 = lVar10 + 1;
      piVar7 = (int *)(param_1 + uVar1 * 4);
      uVar9 = lVar10 + 2;
      if ((long)uVar9 < param_2) {
        iVar3 = *piVar7;
        iVar4 = piVar7[1];
        iVar11 = iVar3;
        if (iVar3 <= iVar4) {
          iVar11 = iVar4;
        }
        piVar8 = piVar7 + 1;
        if (iVar4 <= iVar3) {
          piVar8 = piVar7;
          uVar9 = uVar1;
        }
      }
      else {
        iVar11 = *piVar7;
        piVar8 = piVar7;
        uVar9 = uVar1;
      }
      iVar3 = *param_3;
      if (iVar3 <= iVar11) {
        do {
          piVar7 = piVar8;
          *param_3 = iVar11;
          if ((long)uVar6 < (long)uVar9) break;
          uVar1 = uVar9 << 1 | 1;
          piVar2 = (int *)(param_1 + uVar1 * 4);
          uVar9 = uVar9 * 2 + 2;
          if ((long)uVar9 < param_2) {
            iVar4 = *piVar2;
            iVar5 = piVar2[1];
            iVar11 = iVar4;
            if (iVar4 <= iVar5) {
              iVar11 = iVar5;
            }
            piVar8 = piVar2 + 1;
            if (iVar5 <= iVar4) {
              piVar8 = piVar2;
              uVar9 = uVar1;
            }
          }
          else {
            iVar11 = *piVar2;
            piVar8 = piVar2;
            uVar9 = uVar1;
          }
          param_3 = piVar7;
        } while (iVar3 <= iVar11);
        *piVar7 = iVar3;
      }
    }
  }
  return;
}



/* Entry: 10b4a5be8; end: 10b4a5bfb;  */

void FUN_10b4a5be8(void)

{
  func_0x00010b4a5c04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a5bfc; end: 10b4a5c0f;  */

void FUN_10b4a5bfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b4a67e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b4a5c10; end: 10b4a5c5b;  */

long FUN_10b4a5c10(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = param_1;
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x000107c300ec();
    func_0x000107c39684();
  }
  func_0x00010b4a68b0();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b4a5c5c; end: 10b4a5d03;  */

void FUN_10b4a5c5c(long param_1)

{
  func_0x00010b4a6a28();
  func_0x00010b4a68b0();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b4a5d04; end: 10b4a5d1b;  */

void FUN_10b4a5d04(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b4a5d1c; end: 10b4a5d9f;  */

void FUN_10b4a5d1c(long param_1)

{
  func_0x00010b4a6a1c();
  func_0x00010b4a68b0();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b4a5da0; end: 10b4a5deb;  */

long FUN_10b4a5da0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = param_1;
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_10b4a5dec();
    func_0x000107c39684();
  }
  func_0x00010b4a68b0();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b4a5dec; end: 10b4a5e0f;  */

void FUN_10b4a5dec(long param_1)

{
  func_0x00010b4a657c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b4a5e10; end: 10b4a5e13;  */

void FUN_10b4a5e10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cee0a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


