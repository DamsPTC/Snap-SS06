/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107377f30; end: 107377f3b;  */

undefined ** FUN_107377f30(void)

{
  return &PTR_DAT_1109a7050;
}



/* Entry: 107377f3c; end: 10737804f;  */

undefined8 * FUN_107377f3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long *plVar3;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  plVar2 = alStack_40;
  func_0x000107378e90();
  uVar1 = param_2 == param_1;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    func_0x000107379004();
    param_1 = (undefined8 *)param_1[3];
    plVar3 = (long *)param_2[3];
    if (param_1 == unaff_x20) {
      uVar1 = plVar3 == unaff_x19;
      if ((bool)uVar1) {
        func_0x000107379120();
        (*extraout_x8_00)();
        func_0x000107379028(unaff_x20[3]);
        unaff_x20[3] = 0;
        func_0x000107379120(unaff_x19[3]);
        param_2 = unaff_x20;
        (*extraout_x8_01)();
        func_0x000107379028(unaff_x19[3]);
        unaff_x19[3] = 0;
        unaff_x20[3] = unaff_x20;
        func_0x00010737907c(*(undefined8 *)(alStack_40[0] + 0x18));
        func_0x00010737985c(*(undefined8 *)(alStack_40[0] + 0x20));
      }
      else {
        func_0x000107379120();
        func_0x00010737907c();
        plVar2 = (long *)unaff_x20[3];
        func_0x000107379028();
        unaff_x20[3] = unaff_x19[3];
      }
      unaff_x19[3] = (long)unaff_x19;
      param_1 = plVar2;
    }
    else {
      uVar1 = plVar3 == unaff_x19;
      if ((bool)uVar1) {
        param_2 = unaff_x20;
        (**(code **)(*plVar3 + 0x18))(plVar3);
        param_1 = (undefined8 *)unaff_x19[3];
        func_0x000107379028();
        unaff_x19[3] = unaff_x20[3];
        unaff_x20[3] = unaff_x20;
      }
      else {
        unaff_x20[3] = plVar3;
        unaff_x19[3] = (long)param_1;
      }
    }
  }
  func_0x000107378dfc(uStack_28);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000104c2fe00(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 107378050; end: 1073780a7;  */

undefined8 * FUN_107378050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000104c2fe00(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1073780a8; end: 1073780bb;  */

void FUN_1073780a8(void)

{
  func_0x00010737807c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073780bc; end: 1073780df;  */

long FUN_1073780bc(long param_1)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  
  lVar1 = param_1;
  func_0x0001073797fc();
  param_1 = param_1 + 8;
  func_0x0001073799c8(&PTR_SUB_1109a7070);
  if (extraout_x8 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2fe00(lVar1 + 0x18,param_1 + 0x10);
  return lVar1;
}



/* Entry: 1073780e0; end: 107378103;  */

long FUN_1073780e0(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  param_1 = param_1 + 8;
  func_0x0001073799c8(&PTR_SUB_1109a7070,param_2,param_1);
  if (extraout_x8 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2fe00(param_2 + 0x18,param_1 + 0x10);
  return param_2;
}



/* Entry: 107378104; end: 10737838b;  */

void FUN_107378104(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x24;
  long unaff_x25;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined1 auStack_1c0 [56];
  undefined1 auStack_188 [24];
  undefined8 *puStack_170;
  undefined1 auStack_128 [72];
  undefined1 auStack_e0 [104];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_1f0 = *(long *)(param_1 + 8);
  lStack_1e8 = *(long *)(param_1 + 0x10);
  if (lStack_1e8 == 0) {
    lStack_1d8 = 0;
    lVar6 = lStack_1f0;
  }
  else {
    plVar1 = (long *)(lStack_1e8 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = *(long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      lStack_1d8 = lStack_1e8;
    } while (cVar2 != '\0');
  }
  uStack_1d0 = *param_2;
  uStack_1c8 = *(undefined4 *)(param_2 + 1);
  lStack_1e0 = lStack_1f0;
  func_0x000104c2fe00(auStack_1c0,param_1 + 0x18);
  puVar5 = (undefined8 *)0x60;
  __Znwm();
  lVar4 = lStack_1d8;
  *puVar5 = &PTR_SUB_1109a70e0;
  puVar5[1] = lStack_1e0;
  lStack_1e0 = 0;
  lStack_1d8 = 0;
  puVar5[2] = lVar4;
  puVar5[3] = uStack_1d0;
  *(undefined4 *)(puVar5 + 4) = uStack_1c8;
  func_0x000104c2fe00(puVar5 + 5,auStack_1c0);
  puStack_170 = puVar5;
  if (*(int *)(*(long *)(lVar6 + 0x18) + 0x130) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x0001073792f8();
    func_0x00010737972c();
    func_0x000107379494();
    FUN_10736f83c(unaff_x25 + 0x18,auStack_128);
    uStack_60 = 0;
    func_0x00010737945c();
    func_0x0001073799dc();
    func_0x000107379138(&PTR_FUN_1109a6390);
    func_0x000107379720();
    func_0x000107379484();
    func_0x0001073798d8();
    func_0x00010737935c();
    func_0x00010737950c();
    func_0x00010732cbc0(auStack_78);
    func_0x000107374d04(auStack_e0);
  }
  else {
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x0001073792f8();
    func_0x00010737972c();
    func_0x000107379494();
    func_0x000107374d54(unaff_x25 + 0x18,auStack_128);
    uStack_60 = 0;
    func_0x00010737945c();
    func_0x0001073799dc();
    func_0x000107379138(&PTR_FUN_1109a65a0);
    func_0x000107379720();
    func_0x000107379484();
    func_0x0001073798d8();
    func_0x00010737935c();
    func_0x00010737950c();
    func_0x000107328efc(auStack_78);
    FUN_107375204(auStack_e0);
  }
  func_0x000107374d20(unaff_x24 + 0x28);
  func_0x000107374d20(auStack_188);
  func_0x000107378404(&lStack_1e0);
  func_0x000107375418(&lStack_1f0);
  func_0x000107378dfc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010737950c();
    func_0x00010732cbc0(auStack_78);
    func_0x000107374d04(auStack_e0);
    func_0x000107374d20(unaff_x24 + 0x28);
    func_0x000107374d20(auStack_188);
    do {
      func_0x000107378404(&lStack_1e0);
      func_0x000107375418(&lStack_1f0);
      func_0x000107378f88();
    } while( true );
  }
  return;
}



/* Entry: 10737838c; end: 1073783b3;  */

void FUN_10737838c(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a7170);
  func_0x000107378e80();
  return;
}



/* Entry: 1073783b4; end: 1073783bf;  */

undefined ** FUN_1073783b4(void)

{
  return &PTR_DAT_1109a7170;
}



/* Entry: 1073783c0; end: 107378457;  */

long FUN_1073783c0(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001073799c8(&PTR_SUB_1109a7070);
  if (extraout_x8 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2fe00(param_1 + 0x18,param_2 + 0x10);
  return param_1;
}



/* Entry: 107378458; end: 10737846b;  */

void FUN_107378458(void)

{
  func_0x00010737842c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10737846c; end: 107378493;  */

long FUN_10737846c(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  int extraout_w10;
  
  lVar1 = 0x60;
  __Znwm();
  param_1 = param_1 + 8;
  func_0x0001073799c8(&PTR_SUB_1109a70e0);
  if (extraout_x8 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  func_0x000104c2fe00(lVar1 + 0x28,param_1 + 0x20);
  return lVar1;
}



/* Entry: 107378494; end: 1073784b7;  */

long FUN_107378494(long param_1,long param_2)

{
  long extraout_x8;
  undefined8 uVar1;
  int extraout_w10;
  
  param_1 = param_1 + 8;
  func_0x0001073799c8(&PTR_SUB_1109a70e0);
  if (extraout_x8 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  func_0x000104c2fe00(param_2 + 0x28,param_1 + 0x20);
  return param_2;
}



/* Entry: 1073784b8; end: 10737868f;  */

void FUN_1073784b8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar7;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [8];
  ulong *apuStack_b8 [3];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  long alStack_80 [2];
  undefined8 *apuStack_70 [3];
  undefined1 uStack_58;
  uint uStack_50;
  undefined8 uStack_48;
  
  func_0x0001073793c4();
  func_0x000107378e90();
  apuStack_70[0] = (undefined8 *)((ulong)apuStack_70[0] & 0xffffffffffffff00);
  uStack_50 = 0xffffffff;
  uStack_48 = extraout_x8;
  func_0x0001073797f4();
  uVar1 = *(uint *)(unaff_x21 + 0x20);
  uVar4 = uVar1 == 0xffffffff;
  if (!(bool)uVar4) {
    apuStack_b8[0] = (ulong *)apuStack_70;
    (*(code *)(&PTR_FUN_1109a7150)[uVar1])(apuStack_b8);
    param_2 = unaff_x21;
    uStack_50 = uVar1;
  }
  uVar7 = *param_3;
  FUN_10736f688(alStack_80,unaff_x19 + 8);
  if (alStack_80[0] != 0) {
    func_0x000107378718(auStack_90);
    lVar5 = alStack_80[0];
    func_0x000107378778();
    puVar3 = apuStack_70[0];
    if (lVar5 != 0) {
      if (uStack_50 == 0) {
        apuStack_70[0] = (ulong *)0x0;
        apuStack_b8[0] = puVar3;
        param_2 = unaff_x19 + 0x18;
        func_0x0001077b60c4(lVar5,param_2,apuStack_b8,uVar7);
        puVar2 = apuStack_b8[0];
        apuStack_b8[0] = (ulong *)0x0;
        if (puVar2 != (ulong *)0x0) {
          func_0x000107378f10();
        }
      }
      else {
        func_0x0001073070f0(apuStack_b8,uStack_58);
        __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                  (auStack_d0,apuStack_70);
        func_0x0001052b2bd0(auStack_c0,auStack_d0);
        FUN_1073787c0(auStack_a0,auStack_c0);
        __ZNSt13exception_ptrD1Ev(auStack_c0);
        __ZNSt13runtime_errorD1Ev(auStack_d0);
        param_2 = unaff_x19 + 0x18;
        func_0x0001077b6248(lVar5,param_2,apuStack_b8);
        FUN_1073787dc(apuStack_b8);
      }
    }
    func_0x000107270b00(auStack_90);
  }
  FUN_107377e10(alStack_80);
  func_0x0001073797f4();
  func_0x000107378dfc(uStack_48);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = apuStack_b8[0];
  apuStack_b8[0] = (ulong *)0x0;
  if ((undefined8 **)puVar2 != (undefined8 **)0x0) {
    func_0x000107378f10();
  }
  func_0x000107270b00(auStack_90);
  plVar6 = alStack_80;
  FUN_107377e10();
  func_0x0001073797f4();
  do {
    func_0x000107378f88();
  } while ((int)param_2 == 0);
  func_0x000104bd46a0(plVar6);
  func_0x000107378ff0();
  func_0x000107378fe0();
  func_0x000107378e80();
  return;
}



/* Entry: 107378690; end: 1073786b7;  */

void FUN_107378690(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a7160);
  func_0x000107378e80();
  return;
}



/* Entry: 1073786b8; end: 1073786c3;  */

undefined ** FUN_1073786b8(void)

{
  return &PTR_DAT_1109a7160;
}



/* Entry: 1073786c4; end: 1073787bf;  */

long FUN_1073786c4(long param_1,long param_2)

{
  long extraout_x8;
  undefined8 uVar1;
  int extraout_w10;
  
  func_0x0001073799c8(&PTR_SUB_1109a70e0);
  if (extraout_x8 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x000104c2fe00(param_1 + 0x28,param_2 + 0x20);
  return param_1;
}



/* Entry: 1073787c0; end: 1073787db;  */

void FUN_1073787c0(long param_1)

{
  __ZNSt13exception_ptrC1ERKS_();
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1073787dc; end: 1073787ff;  */

void FUN_1073787dc(void)

{
  func_0x000107379574();
  FUN_107378800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 107378800; end: 10737881f;  */

void FUN_107378800(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt13exception_ptrD1Ev();
  }
  return;
}



/* Entry: 107378820; end: 10737885b;  */

void FUN_107378820(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  return;
}



/* Entry: 10737885c; end: 1073788af;  */

void FUN_10737885c(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107379990();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x0001077b5e94();
    __ZdlPv();
  }
  return;
}



/* Entry: 1073788b0; end: 1073788c3;  */

void FUN_1073788b0(void)

{
  func_0x000107378888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073788c4; end: 1073788e7;  */

undefined8 * FUN_1073788c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000107379250();
  *puVar1 = &PTR_SUB_1109a7190;
  FUN_10737530c(puVar1 + 1,param_1 + 1);
  return puVar1;
}



/* Entry: 1073788e8; end: 107378907;  */

undefined8 * FUN_1073788e8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_SUB_1109a7190;
  FUN_10737530c(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 107378908; end: 10737896b;  */

void FUN_107378908(long param_1)

{
  int iVar1;
  
  func_0x0001073796f4();
  iVar1 = (int)param_1 + 8;
  FUN_1073789cc();
  if (iVar1 != 0) {
    param_1 = param_1 + 8;
    func_0x000107378778();
    if (param_1 != 0) {
      func_0x0001077b6378();
    }
  }
  func_0x000107378fe8();
  return;
}



/* Entry: 10737896c; end: 107378993;  */

void FUN_10737896c(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a71f0);
  func_0x000107378e80();
  return;
}



/* Entry: 107378994; end: 10737899f;  */

undefined ** FUN_107378994(void)

{
  return &PTR_DAT_1109a71f0;
}



/* Entry: 1073789a0; end: 1073789cb;  */

undefined8 * FUN_1073789a0(undefined8 *param_1)

{
  *param_1 = &PTR_SUB_1109a7190;
  FUN_10737530c(param_1 + 1);
  return param_1;
}



/* Entry: 1073789cc; end: 1073789e3;  */

uint FUN_1073789cc(uint param_1)

{
  FUN_1073789e4();
  return param_1 ^ 1;
}



/* Entry: 1073789e4; end: 107378a4b;  */

bool FUN_1073789e4(void)

{
  bool bVar1;
  undefined8 uStack_30;
  
  func_0x000107379700();
  if (uStack_30 == (long *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = *uStack_30 == -1;
  }
  func_0x000107379864();
  return bVar1;
}



/* Entry: 107378a4c; end: 107378a5f;  */

void FUN_107378a4c(void)

{
  func_0x000107378a24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107378a60; end: 107378a83;  */

undefined8 * FUN_107378a60(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000107379250();
  *puVar1 = &PTR_SUB_1109a7210;
  FUN_10737530c(puVar1 + 1,param_1 + 1);
  return puVar1;
}



/* Entry: 107378a84; end: 107378aa3;  */

undefined8 * FUN_107378a84(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_SUB_1109a7210;
  FUN_10737530c(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 107378aa4; end: 107378af7;  */

void FUN_107378aa4(long param_1)

{
  int iVar1;
  
  func_0x0001073796f4();
  iVar1 = (int)param_1 + 8;
  FUN_1073789cc();
  if (iVar1 != 0) {
    param_1 = param_1 + 8;
    func_0x000107378778();
    if (param_1 != 0) {
      func_0x0001077b64cc();
    }
  }
  func_0x000107378fe8();
  return;
}



/* Entry: 107378af8; end: 107378b1f;  */

void FUN_107378af8(undefined8 param_1)

{
  func_0x000107378ff0();
  func_0x000107378fe0(param_1,&PTR_DAT_1109a7270);
  func_0x000107378e80();
  return;
}



/* Entry: 107378b20; end: 107378b2b;  */

undefined ** FUN_107378b20(void)

{
  return &PTR_DAT_1109a7270;
}



/* Entry: 107378b2c; end: 107378b57;  */

undefined8 * FUN_107378b2c(undefined8 *param_1)

{
  *param_1 = &PTR_SUB_1109a7210;
  FUN_10737530c(param_1 + 1);
  return param_1;
}



/* Entry: 107378b58; end: 107378b6f;  */

void FUN_107378b58(long *param_1,long param_2)

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



/* Entry: 107378b70; end: 107378b8f;  */

void FUN_107378b70(void)

{
  func_0x000107379580();
  FUN_107378b90();
  return;
}



/* Entry: 107378b90; end: 107378ba7;  */

void FUN_107378b90(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001073753f4(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107378ba8; end: 107378be7;  */

void FUN_107378ba8(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001073753f4(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 107378be8; end: 107378caf;  */

long FUN_107378be8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 107378cb0; end: 107378cdf;  */

undefined8 FUN_107378cb0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_107378ce0(auStack_38);
  FUN_107378b70(auStack_38);
  return uVar1;
}



/* Entry: 107378ce0; end: 10737940f;  */

void FUN_107378ce0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107378d94;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_107378d94;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_107378d94:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 107379410; end: 10737942f;  */

void FUN_107379410(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  *param_2 = param_1;
  FUN_10736fcec(param_2 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 107379430; end: 107379a07;  */

void FUN_107379430(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x98);
  return;
}



/* Entry: 107379a08; end: 107379d4f;  */

undefined ***
FUN_107379a08(undefined ***param_1,undefined ***param_2,undefined ***param_3,int *param_4,
             undefined8 param_5,undefined ***param_6,int param_7)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 extraout_x8;
  undefined **ppuVar7;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w11;
  uint extraout_w11_00;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  undefined ***pppuStack_138;
  undefined **ppuStack_130;
  undefined ***pppuStack_128;
  undefined ***pppuStack_118;
  undefined **ppuStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_f8;
  undefined **ppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_d8;
  undefined **ppuStack_d0;
  undefined ***pppuStack_c8;
  undefined ***pppuStack_b8;
  undefined **appuStack_b0 [8];
  undefined8 uStack_70;
  
  pppuVar5 = &ppuStack_150;
  pppuVar3 = param_1;
  pppuVar4 = param_2;
  pppuVar6 = param_3;
  func_0x00010737f018();
  uStack_70 = extraout_x8;
  func_0x00010737f0c8();
  *pppuVar3 = &PTR_FUN_1109a73a0;
  pppuVar8 = pppuVar3 + 6;
  *(undefined1 *)pppuVar8 = 0;
  *(undefined4 *)(pppuVar3 + 9) = 4;
  *(undefined1 *)(pppuVar3 + 8) = 0;
  ppuVar7 = pppuVar4[1];
  ppuVar10 = *pppuVar4;
  pppuVar3[0x12] = pppuVar4[1];
  pppuVar3[0x11] = ppuVar10;
  pppuVar4 = pppuVar3;
  if (ppuVar7 != (undefined **)0x0) {
    do {
      func_0x00010737f044();
    } while (extraout_w10 != 0);
  }
  pppuVar9 = param_1 + 0x13;
  *pppuVar9 = (undefined **)0x0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x14] = (undefined **)0x0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  if ((param_7 != 0) && (*param_3 != (undefined **)0x0)) {
    pppuVar4 = pppuVar9;
    FUN_1073743ac(pppuVar9,param_3);
  }
  iVar2 = *param_4;
  if (iVar2 == 0) {
    func_0x00010737f38c();
    if ((bool)in_ZR) {
      (*extraout_x8_02)();
      ppuStack_d0 = &PTR_FUN_1109a75e8;
      pppuStack_b8 = &ppuStack_d0;
      ppuStack_f0 = &PTR_DAT_1109a7668;
      pppuStack_d8 = &ppuStack_f0;
      pppuVar6 = &ppuStack_d0;
      pppuStack_e8 = param_1;
      pppuStack_c8 = param_2;
      func_0x00010786e144(appuStack_b0);
    }
    else {
      (*extraout_x8_02)();
      param_6 = appuStack_b0;
      func_0x000107269bac();
    }
    func_0x00010737f444();
    func_0x00010737f2ac();
    if ((int)param_3 != 0) {
      FUN_107324894(&ppuStack_f0);
      param_6 = &ppuStack_d0;
      func_0x0001073248c8();
    }
    func_0x00010737f148();
    if ((extraout_w11_00 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x17) = 1;
    }
  }
  else {
    pppuVar1 = param_2;
    if (iVar2 != 1) {
      pppuVar1 = param_3;
    }
    func_0x00010737f348(pppuVar1);
    (*extraout_x8_00)();
    func_0x000107268400();
    pppuVar1 = param_3;
    if (iVar2 != 1) {
      pppuVar1 = param_2;
    }
    func_0x00010737f348(pppuVar1);
    (*extraout_x8_01)();
    func_0x000104c2db28();
    puStack_140 = (undefined1 *)pppuVar5;
    ppuVar7 = ppuStack_150;
    while (pppuVar5 = pppuVar4, ppuStack_150 = ppuVar7, pppuStack_138 = pppuVar5,
          puStack_140 != (undefined1 *)0x0) {
      FUN_107372ba0(ppuVar7,pppuVar5);
      if (((ulong)ppuVar7 & 1) == 0) {
        pppuVar6 = pppuVar5 + 7;
        FUN_1073654b8(appuStack_b0,&ppuStack_150,pppuVar5);
      }
      func_0x000104c2de10(&puStack_140);
      pppuVar4 = pppuStack_138;
      param_3 = pppuVar5;
      ppuVar7 = ppuStack_150;
    }
    in_ZR = *(char *)(param_1 + 8) == '\x01';
    if ((bool)in_ZR) {
      pppuVar4 = pppuVar8;
      func_0x0001072f99e4(pppuVar8,&ppuStack_150);
    }
    else {
      param_1[7] = ppuStack_148;
      param_1[6] = ppuVar7;
      ppuStack_150 = (undefined **)0x0;
      ppuStack_148 = (undefined **)0x0;
      *(undefined1 *)(param_1 + 8) = 1;
      pppuVar4 = (undefined ***)0x0;
    }
    func_0x00010737f38c();
    if ((bool)in_ZR) {
      (*extraout_x8_03)();
      ppuStack_110 = &PTR_DAT_1109a76e8;
      pppuStack_f8 = &ppuStack_110;
      ppuStack_130 = &PTR_DAT_1109a7768;
      pppuStack_118 = &ppuStack_130;
      pppuVar6 = &ppuStack_110;
      pppuStack_128 = param_1;
      pppuStack_108 = param_1;
      func_0x00010786e144(appuStack_b0);
    }
    else {
      (*extraout_x8_03)();
      param_6 = appuStack_b0;
      func_0x000107269bac();
    }
    func_0x00010737f444();
    func_0x00010737f2ac();
    if ((int)param_3 != 0) {
      FUN_107324894(&ppuStack_130);
      param_6 = &ppuStack_110;
      func_0x0001073248c8();
    }
    func_0x00010737f148();
    if ((extraout_w11 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x17) = 1;
    }
    func_0x00010737f250();
  }
  func_0x00010737eff0(uStack_70);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_107330fdc(pppuVar9);
  FUN_107330fdc(pppuVar3 + 0x11);
  func_0x000104c319e0(pppuVar3 + 9);
  FUN_10733921c(pppuVar8);
  func_0x00010737f404();
  __Unwind_Resume();
  func_0x00010737f260();
  func_0x00010737f0c8();
  *param_6 = &PTR_FUN_1109a73a0;
  ppuVar7 = *pppuVar6;
  param_6[7] = pppuVar6[1];
  param_6[6] = ppuVar7;
  *pppuVar6 = (undefined **)0x0;
  pppuVar6[1] = (undefined **)0x0;
  *(undefined1 *)(param_6 + 8) = 1;
  ppuVar7 = *pppuVar4;
  (**(code **)(*ppuVar7 + 0x30))();
  func_0x000107269bac(param_1 + 9,ppuVar7);
  ppuVar7 = pppuVar3[7];
  ppuVar10 = *pppuVar8;
  param_1[0x12] = pppuVar3[7];
  param_1[0x11] = ppuVar10;
  if (ppuVar7 != (undefined **)0x0) {
    do {
      func_0x00010737f044();
    } while (extraout_w10_00 != 0);
  }
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x13] = (undefined **)0x0;
  param_1[0x14] = (undefined **)0x0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}



/* Entry: 107379d50; end: 107379def;  */

void FUN_107379d50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  func_0x00010737f260();
  func_0x00010737f0c8();
  *param_1 = &PTR_FUN_1109a73a0;
  uVar3 = *param_3;
  param_1[7] = param_3[1];
  param_1[6] = uVar3;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x30))();
  func_0x000107269bac(unaff_x19 + 0x48,plVar1);
  lVar2 = unaff_x20[1];
  uVar3 = *unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x90) = unaff_x20[1];
  *(undefined8 *)(unaff_x19 + 0x88) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010737f044();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined1 *)(unaff_x19 + 0xa8) = 0;
  return;
}



/* Entry: 107379df0; end: 107379e13;  */

void FUN_107379df0(long param_1)

{
  long lVar1;
  
  lVar1 = 0x88;
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar1 = 0x98;
  }
                    /* WARNING: Could not recover jumptable at 0x000107379e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + lVar1) + 0x10))();
  return;
}



/* Entry: 107379e14; end: 107379e7b;  */

void FUN_107379e14(undefined1 *param_1,long param_2,long param_3)

{
  if (*(char *)(param_2 + 0x40) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000107379e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x88) + 0x18))(param_1);
    return;
  }
  param_2 = param_2 + 0x30;
  func_0x000107297a3c();
  if (param_2 != 0) {
    func_0x000107268350(param_1,param_3 + 0x38);
    param_1[0x40] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x40] = 0;
  return;
}



/* Entry: 107379e7c; end: 107379ec7;  */

long * FUN_107379e7c(long param_1)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return (long *)(param_1 + 0x30);
  }
  plVar1 = *(long **)(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x000107379e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))();
  return plVar1;
}



/* Entry: 107379ec8; end: 107379f1f;  */

void FUN_107379ec8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0xa8);
    func_0x000107296e30();
    uVar2 = *puVar1;
    param_1[1] = puVar1[1];
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107379f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x88) + 0x40))(param_1);
  return;
}



/* Entry: 107379f20; end: 107379f2f;  */

long FUN_107379f20(long param_1)

{
  return *(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x110) >> 4;
}



/* Entry: 107379f30; end: 10737a057;  */

undefined8 * FUN_107379f30(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010737f004();
  uVar1 = (long)(param_1[0x23] - param_1[0x22]) >> 4;
  uVar2 = param_2 == uVar1;
  if (param_2 < uVar1) {
    puVar3 = (undefined8 *)(param_1[0x22] + param_2 * 0x10);
    uStack_68 = puVar3[1];
    uStack_70 = *puVar3;
    uStack_38 = extraout_x8;
    if (puVar3[1] != 0) {
      do {
        func_0x00010737f044();
      } while (extraout_w10 != 0);
    }
    uStack_84 = 0;
    func_0x000107375b64(auStack_50,1);
    puStack_40[1] = 0;
    puStack_40[2] = 0;
    *puStack_40 = &PTR_FUN_1109a7290;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_107379a08(puStack_40 + 3,&uStack_70,&uStack_60,&uStack_84,param_1 + 8,param_1 + 0x26,0);
    FUN_107330fdc(&uStack_60);
    unaff_x20 = puStack_40;
    puStack_40 = (undefined8 *)0x0;
    unaff_x21 = unaff_x20 + 3;
    func_0x000107375be8(auStack_50);
    *unaff_x19 = (long)unaff_x21;
    unaff_x19[1] = (long)unaff_x20;
    uStack_80 = 0;
    uStack_78 = 0;
    FUN_107375bf8(&uStack_80);
    param_1 = &uStack_70;
    FUN_107330fdc();
    func_0x00010737eff0(uStack_38);
    if ((bool)uVar2) {
      return param_1;
    }
  }
  else {
    func_0x00010737dc24();
  }
  ___stack_chk_fail();
  FUN_107330fdc(&uStack_60);
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x21);
  func_0x000107375be8(auStack_50);
  puVar3 = &uStack_70;
  FUN_107330fdc(puVar3);
  func_0x00010737f080();
  func_0x0001000d03a8(extraout_x8_00,puVar3 + 1);
  func_0x000104c2feb0();
  param_1[6] = 0xffffffffffffffff;
  func_0x000104c2fe38();
  param_1[6] = unaff_x20;
  return param_1;
}



/* Entry: 10737a058; end: 10737a063;  */

void FUN_10737a058(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,param_2 + 8);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 10737a064; end: 10737a16b;  */

void FUN_10737a064(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  func_0x00010737f1f0();
  func_0x00010737f498();
  uVar2 = *param_2;
  *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
  if ((bRam0000000113822170 & 1) == 0) {
    iVar1 = 0x13822170;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam00000001138220e8 = &PTR_FUN_1109a74e8;
      uRam0000000113822100 = 0x1138220e8;
      uRam0000000113822108 = 0;
      ppuRam0000000113822110 = &PTR_DAT_1109a7568;
      uRam0000000113822128 = 0x113822110;
      uRam0000000113822148 = 0;
      uRam0000000113822168 = 0;
      ___cxa_guard_release(0x113822170);
    }
  }
  FUN_107375e20(unaff_x19 + 0x28,0x1138220e8);
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  FUN_10737dd48(unaff_x19 + 200,param_3);
  FUN_1073724e4(unaff_x19 + 0xd8);
  return;
}



/* Entry: 10737a16c; end: 10737a18b;  */

void FUN_10737a16c(void)

{
  undefined1 uStack_11;
  
  FUN_10737e388(&uStack_11);
  return;
}



/* Entry: 10737a18c; end: 10737a2ab;  */

void FUN_10737a18c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lStack_58;
  
  func_0x00010737f1f0();
  func_0x00010737f498();
  uVar3 = *param_3;
  *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  FUN_107375e20(unaff_x19 + 0x28,param_4);
  FUN_107332298(unaff_x19 + 0xb0,param_5);
  FUN_10737dd48(unaff_x19 + 200,param_6);
  FUN_10737ddb0(unaff_x19 + 0xd8,param_7);
  (**(code **)(*param_2 + 0x10))(&lStack_58,param_2);
  lVar1 = lStack_58;
  lStack_58 = 0;
  lVar2 = *(long *)(*(long *)(unaff_x19 + 8) + 0xb8);
  *(long *)(*(long *)(unaff_x19 + 8) + 0xb8) = lVar1;
  if (lVar2 != 0) {
    func_0x00010737f1c0();
    lVar1 = lStack_58;
    lStack_58 = 0;
    if (lVar1 != 0) {
      func_0x00010737f1c0();
    }
  }
  return;
}



/* Entry: 10737a2ac; end: 10737a37f;  */

void FUN_10737a2ac(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0xe8;
  __Znwm();
  func_0x00010737f1f0();
  *puVar1 = extraout_x8;
  uVar2 = *(undefined8 *)(param_2 + 8);
  puVar1[2] = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = uVar2;
  if (*(long *)(param_2 + 0x10) != 0) {
    do {
      func_0x00010737f044();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_107375e20(unaff_x19 + 0x28,param_2 + 0x28);
  FUN_107332298(unaff_x19 + 0xb0,param_2 + 0xb0);
  FUN_10737dd48(unaff_x19 + 200,param_2 + 200);
  FUN_10737ddb0(unaff_x19 + 0xd8,param_2 + 0xd8);
  *param_1 = unaff_x19;
  return;
}



/* Entry: 10737a380; end: 10737ba37;  */

void FUN_10737a380(ulong *param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 in_ZR;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong *puVar13;
  ulong **ppuVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  undefined8 extraout_x8;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *extraout_x8_00;
  long extraout_x8_01;
  ulong *puVar22;
  undefined8 extraout_x8_02;
  ulong *extraout_x9;
  ulong uVar23;
  ulong extraout_x9_00;
  ulong *puVar24;
  code *extraout_x9_01;
  undefined8 extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  ulong *puVar25;
  ulong *extraout_x10;
  ulong *extraout_x11;
  ulong *puVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puVar30;
  long *plVar31;
  long lVar32;
  ulong *puVar33;
  ulong *puVar34;
  ulong *puVar35;
  undefined8 *puVar36;
  uint6 uVar37;
  byte bVar38;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  undefined8 uVar39;
  byte bVar45;
  ulong uStack_320;
  ulong uStack_318;
  undefined1 uStack_310;
  ulong *puStack_300;
  ulong *puStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  ulong uStack_2c0;
  undefined1 uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined1 uStack_2a0;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  undefined *puStack_278;
  long lStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  ulong *puStack_240;
  undefined8 *puStack_238;
  ulong *puStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  long lStack_218;
  ulong *puStack_210;
  ulong *puStack_208;
  long lStack_1f8;
  ulong *puStack_1f0;
  ulong *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  ulong uStack_1b8;
  float fStack_1b0;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  undefined8 uStack_198;
  byte bStack_190;
  ulong *puStack_180;
  ulong *puStack_178;
  undefined8 *puStack_170;
  undefined1 uStack_160;
  ulong *puStack_148;
  ulong *puStack_140;
  undefined4 uStack_118;
  ulong *puStack_110;
  ulong **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  char cStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  char cStack_98;
  char cStack_90;
  undefined8 uStack_88;
  
  puVar9 = param_2;
  func_0x00010737f018();
  puVar9 = (ulong *)puVar9[1];
  puStack_178 = (ulong *)CONCAT71(puStack_178._1_7_,1);
  puStack_180 = puVar9;
  uStack_88 = extraout_x8;
  func_0x00010724e404();
  func_0x00010737f3f0(param_2[1]);
  if (puVar9 != (ulong *)0x0) {
    uVar17 = puVar9[10];
    uVar23 = puVar9[9];
    param_1[1] = puVar9[10];
    *param_1 = uVar23;
    if (uVar17 != 0) {
      do {
        func_0x00010737f044();
      } while (extraout_w10 != 0);
    }
    func_0x00010724e49c(&puStack_180);
    goto LAB_10737b6a8;
  }
  func_0x00010724e49c(&puStack_180);
  uVar17 = param_2[1];
  uStack_2b8 = 1;
  uStack_2c0 = uVar17;
  func_0x000107279a5c();
  func_0x00010737f3f0(param_2[1]);
  if (uVar17 == 0) {
    plVar31 = (long *)param_2[0x19];
    uVar17 = plVar31[1];
    if ((uVar17 != 0) && (plVar31[3] != 0)) {
      uVar23 = param_3;
      func_0x000104c2fe38();
      uVar28 = uVar17 - 1;
      if ((uVar17 & uVar28) == 0) {
        uVar29 = uVar23 & uVar28;
      }
      else {
        uVar29 = uVar23;
        if (uVar17 <= uVar23) {
          uVar29 = 0;
          if (uVar17 != 0) {
            uVar29 = uVar23 / uVar17;
          }
          uVar29 = uVar23 - uVar29 * uVar17;
        }
      }
      plVar31 = *(long **)(*plVar31 + uVar29 * 8);
      uVar10 = uVar23;
      if (plVar31 != (long *)0x0) {
        do {
          while( true ) {
            plVar31 = (long *)*plVar31;
            if (plVar31 == (long *)0x0) goto LAB_10737a4ec;
            uVar19 = plVar31[1];
            if (uVar19 != uVar23) break;
            func_0x00010737f3cc();
            if ((uVar10 & 1) != 0) {
              puStack_2c8 = (undefined8 *)plVar31[10];
              puStack_2d0 = (undefined8 *)plVar31[9];
              if (plVar31[10] != 0) {
                do {
                  func_0x00010737f044();
                } while (extraout_w10_07 != 0);
              }
              goto LAB_10737a530;
            }
          }
          if ((uVar17 & uVar28) == 0) {
            uVar19 = uVar19 & uVar28;
          }
          else if (uVar17 <= uVar19) {
            uVar2 = 0;
            if (uVar17 != 0) {
              uVar2 = uVar19 / uVar17;
            }
            uVar19 = uVar19 - uVar2 * uVar17;
          }
        } while (uVar19 == uVar29);
      }
    }
LAB_10737a4ec:
    FUN_1073310f0(&puStack_180,1);
    puStack_170[2] = 0;
    *puStack_170 = &PTR_FUN_1109a39c0;
    puStack_170[1] = 0;
    func_0x0001072c8f9c(puStack_170 + 3);
    puStack_2c8 = puStack_170;
    puStack_170 = (undefined8 *)0x0;
    puStack_2d0 = puStack_2c8 + 3;
    func_0x000107331164(&puStack_180);
LAB_10737a530:
    plVar31 = (long *)param_2[0x1b];
    uVar17 = plVar31[1];
    if ((uVar17 != 0) && (plVar31[3] != 0)) {
      uVar23 = param_3;
      func_0x000104c2fe38();
      uVar28 = uVar17 - 1;
      if ((uVar17 & uVar28) == 0) {
        uVar29 = uVar23 & uVar28;
      }
      else {
        uVar29 = uVar23;
        if (uVar17 <= uVar23) {
          uVar29 = 0;
          if (uVar17 != 0) {
            uVar29 = uVar23 / uVar17;
          }
          uVar29 = uVar23 - uVar29 * uVar17;
        }
      }
      plVar31 = *(long **)(*plVar31 + uVar29 * 8);
      uVar10 = uVar23;
      if (plVar31 != (long *)0x0) {
        do {
          while( true ) {
            plVar31 = (long *)*plVar31;
            if (plVar31 == (long *)0x0) goto LAB_10737a5cc;
            uVar19 = plVar31[1];
            if (uVar19 != uVar23) break;
            func_0x00010737f3cc();
            if ((uVar10 & 1) != 0) {
              FUN_1073733a8(&uStack_2e0,plVar31 + 9);
              goto LAB_10737a5d8;
            }
          }
          if ((uVar17 & uVar28) == 0) {
            uVar19 = uVar19 & uVar28;
          }
          else if (uVar17 <= uVar19) {
            uVar2 = 0;
            if (uVar17 != 0) {
              uVar2 = uVar19 / uVar17;
            }
            uVar19 = uVar19 - uVar2 * uVar17;
          }
        } while (uVar19 == uVar29);
      }
    }
LAB_10737a5cc:
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    func_0x000107372be8(&uStack_2e0);
LAB_10737a5d8:
    if (*(long *)(param_2[1] + 0xb8) == 0) {
      uStack_2f0 = 0;
      uStack_2e8 = 0;
LAB_10737a610:
      bVar7 = false;
      uStack_320 = uStack_320 & 0xffffffffffffff00;
    }
    else {
      func_0x00010737f2d4();
      func_0x00010737f294(&uStack_2f0);
      if (uStack_2f0 == 0) goto LAB_10737a610;
      uStack_320 = uStack_2f0;
      uStack_318 = uStack_2e8;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      bVar7 = true;
    }
    puVar9 = (ulong *)0x170;
    uStack_310 = bVar7;
    __Znwm();
    uVar23 = uStack_318;
    puVar30 = puVar9 + 1;
    *puVar30 = 0;
    puVar9[2] = 0;
    *puVar9 = (ulong)&PTR_FUN_1109a7888;
    uStack_2b0 = uStack_2b0 & 0xffffffffffffff00;
    if (bVar7) {
      uStack_2a8 = uStack_318;
      uStack_2b0 = uStack_320;
      uStack_320 = 0;
      uStack_318 = 0;
      uVar17 = uVar23;
    }
    puVar9[3] = (ulong)&PTR_FUN_1109a7400;
    uStack_2a0 = bVar7;
    func_0x000104c2fe00(puVar9 + 4,param_3);
    puVar9[0xb] = param_2[3];
    *(int *)(puVar9 + 0xc) = (int)param_2[4];
    puVar33 = puVar9 + 0xd;
    *(undefined1 *)puVar33 = 0;
    *(undefined1 *)(puVar9 + 0xf) = 0;
    if (bVar7) {
      puVar9[0xd] = uStack_2b0;
      puVar9[0xe] = uVar17;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      *(undefined1 *)(puVar9 + 0xf) = 1;
    }
    FUN_107375e20(puVar9 + 0x10,param_2 + 5);
    puVar34 = puVar9 + 0x21;
    puVar9[0x22] = (ulong)puStack_2c8;
    *puVar34 = (ulong)puStack_2d0;
    if (puStack_2c8 != (undefined8 *)0x0) {
      do {
        func_0x00010737f044();
      } while (extraout_w10_01 != 0);
    }
    FUN_1073733a8(puVar9 + 0x23,&uStack_2e0);
    puVar20 = puVar9 + 0x25;
    *puVar20 = 0;
    *(undefined1 *)(puVar9 + 0x29) = 0;
    *(undefined1 *)(puVar9 + 0x2d) = 0;
    puVar9[0x26] = 0;
    puVar9[0x27] = 0;
    *(undefined1 *)(puVar9 + 0x28) = 0;
    puStack_258 = (undefined8 *)0x0;
    puStack_250 = (undefined8 *)0x0;
    uStack_248 = 0;
    puVar35 = param_2;
    if ((char)puVar9[0xf] == '\x01') {
      plVar31 = (long *)0x0;
      puVar35 = (ulong *)0x8;
      while( true ) {
        plVar11 = (long *)*puVar33;
        (**(code **)(*plVar11 + 0x10))();
        if (plVar11 <= plVar31) break;
        func_0x00010737f2d4(*puVar33);
        func_0x00010737f294(&puStack_210);
        puStack_178 = puStack_208;
        puStack_180 = puStack_210;
        if (puStack_208 != (ulong *)0x0) {
          do {
            func_0x00010737f044();
          } while (extraout_w10_02 != 0);
        }
        FUN_10737d484(&puStack_d0,puVar9[0x13],&puStack_180);
        func_0x000107267e44(&puStack_180);
        if (cStack_98 == '\x01') {
          uVar17 = puVar9[0x23];
          FUN_10737be38(uVar17,&puStack_d0);
          if (uVar17 == 0) {
            func_0x00010737f468();
          }
          else {
            *(undefined1 *)(puVar9 + 0x28) = 1;
            puStack_1f0 = (ulong *)0x0;
            puStack_1e8 = (ulong *)0x0;
            uStack_1e0 = 0;
            plVar11 = (long *)(*(long *)(uVar17 + 0x48) + 0x10);
            while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
              func_0x0001072ddd58(&puStack_180,plVar11 + 2);
              func_0x000107277668(&puStack_1f0,&puStack_180);
              func_0x00010737f2b4();
            }
            puStack_110 = (ulong *)&UNK_10e52b660;
            uStack_100 = 0;
            uStack_f8 = 0;
            ppuStack_108 = (ulong **)0x0;
            func_0x000107277aa4(&puStack_230,&puStack_1f0);
            puStack_170 = puStack_228;
            puStack_178 = puStack_230;
            puStack_230 = (ulong *)0x0;
            puStack_228 = (undefined8 *)0x0;
            uStack_118 = 8;
            func_0x000100060964(&lStack_1d0,&UNK_10f40a8a9);
            ppuVar14 = &puStack_110;
            func_0x000107295190(ppuVar14,&lStack_1d0);
            func_0x00010726cda0(ppuVar14 + 1,&puStack_178);
            func_0x000104c2f714(&lStack_1d0);
            func_0x00010737f2b4();
            func_0x00010726b188(&puStack_230);
            func_0x000107278fec(&lStack_1d0,&puStack_110);
            plVar11 = (long *)puVar9[0x18];
            if (plVar11 == (long *)0x0) goto LAB_10737b70c;
            (**(code **)(*plVar11 + 0x30))(&puStack_180,plVar11,&puStack_210,&lStack_1d0);
            func_0x00010726b264(&lStack_1d0);
            if ((char)puStack_170 == '\x01') {
              FUN_10737d340(&puStack_258,&puStack_180);
            }
            func_0x00010737d4ac(&puStack_180);
            func_0x00010726ae88(&puStack_110);
            func_0x000107277d70(&puStack_1f0);
          }
        }
        else {
          func_0x00010737f468();
        }
        func_0x00010737f2c4();
        FUN_107330fdc(&puStack_210);
        plVar31 = (long *)((long)plVar31 + 1);
      }
    }
    lVar18 = 0;
    puVar33 = puVar9 + 3;
    puStack_1c8 = (ulong *)0x0;
    lStack_1d0 = 0;
    uStack_1b8 = 0;
    puStack_1c0 = (ulong *)0x0;
    fStack_1b0 = 1.0;
    puStack_1a0 = (ulong *)0x0;
    uStack_198 = 0;
    puStack_1a8 = (ulong *)0x0;
    bStack_190 = 0;
    lVar1 = (*(long **)*puVar34)[1];
    for (lVar32 = **(long **)*puVar34; puVar4 = puStack_250, lVar32 != lVar1; lVar32 = lVar32 + 0x70
        ) {
      FUN_10737bef8(&puStack_d0,1);
      puVar24 = puStack_c0;
      uVar17 = puVar9[0x22];
      ppuStack_108 = (ulong **)puVar9[0x22];
      puStack_110 = (ulong *)*puVar34;
      puStack_c0[1] = 0;
      puStack_c0[2] = 0;
      *puStack_c0 = (ulong)&PTR_FUN_1109a7900;
      if (uVar17 != 0) {
        do {
          func_0x00010737f044();
        } while (extraout_w10_03 != 0);
      }
      puStack_180 = (ulong *)((ulong)puStack_180 & 0xffffffffffffff00);
      uStack_160 = 0;
      FUN_10737bf70(puVar24 + 3,&puStack_110,lVar18,&puStack_180);
      FUN_10737dbe4(&puStack_180);
      func_0x000107331610(&puStack_110);
      puStack_1e8 = puStack_c0;
      puStack_c0 = (ulong *)0x0;
      puStack_1f0 = puStack_1e8 + 3;
      func_0x00010737d2a8(&puStack_d0);
      (**(code **)(*puStack_1f0 + 0x30))();
      func_0x00010726236c(&puStack_d0);
      if (cStack_98 == '\x01') {
        uVar17 = puVar9[0x23];
        FUN_10737be38(uVar17,&puStack_d0);
        if (uVar17 == 0) {
          func_0x000104c2fe00(&puStack_180,&puStack_d0);
          puStack_140 = puStack_1e8;
          puStack_148 = puStack_1f0;
          puStack_1f0 = (ulong *)0x0;
          puStack_1e8 = (ulong *)0x0;
          puVar24 = &uStack_1b8;
          func_0x00010726364c(puVar24,&puStack_180);
          puVar13 = puStack_1c8;
          puVar22 = puVar24;
          if (puStack_1c8 != (ulong *)0x0) {
            uVar17 = (long)puStack_1c8 - 1;
            if (((ulong)puStack_1c8 & uVar17) == 0) {
              puVar35 = (ulong *)(uVar17 & (ulong)puVar24);
            }
            else {
              puVar35 = puVar24;
              if (puStack_1c8 <= puVar24) {
                uVar23 = 0;
                if (puStack_1c8 != (ulong *)0x0) {
                  uVar23 = (ulong)puVar24 / (ulong)puStack_1c8;
                }
                puVar35 = (ulong *)((long)puVar24 - uVar23 * (long)puStack_1c8);
              }
            }
            plVar31 = *(long **)(lStack_1d0 + (long)puVar35 * 8);
            if (plVar31 != (long *)0x0) {
              do {
                while( true ) {
                  plVar31 = (long *)*plVar31;
                  if (plVar31 == (long *)0x0) goto LAB_10737aadc;
                  puVar21 = (ulong *)plVar31[1];
                  if (puVar21 != puVar24) break;
                  puVar22 = (ulong *)(plVar31 + 2);
                  func_0x000104c32db4(puVar22,&puStack_180);
                  if (((ulong)puVar22 & 1) != 0) goto LAB_10737ad70;
                }
                if (((ulong)puVar13 & uVar17) == 0) {
                  puVar21 = (ulong *)((ulong)puVar21 & uVar17);
                }
                else if (puVar13 <= puVar21) {
                  uVar23 = 0;
                  if (puVar13 != (ulong *)0x0) {
                    uVar23 = (ulong)puVar21 / (ulong)puVar13;
                  }
                  puVar21 = (ulong *)((long)puVar21 - uVar23 * (long)puVar13);
                }
              } while (puVar21 == puVar35);
            }
          }
LAB_10737aadc:
          func_0x00010737f3c4();
          uStack_100 = 1;
          puStack_110 = puVar22;
          ppuStack_108 = &puStack_1c0;
          *puVar22 = 0;
          puVar22[1] = (ulong)puVar24;
          func_0x000104c2fe00(puVar22 + 2,&puStack_180);
          puVar22[10] = (ulong)puStack_140;
          puVar22[9] = (ulong)puStack_148;
          puStack_148 = (ulong *)0x0;
          puStack_140 = (ulong *)0x0;
          if ((puVar13 == (ulong *)0x0) || (fStack_1b0 * (float)puVar13 < (float)(uStack_1b8 + 1)))
          {
            bVar6 = (ulong *)0x2 < puVar13;
            bVar7 = puVar13 == (ulong *)0x3;
            func_0x00010737f200((long)puVar13 << 1);
            puVar35 = extraout_x8_00;
            if (!bVar6 || bVar7) {
              puVar35 = extraout_x9;
            }
            if ((long)puVar35 - 1U == 0) {
              puVar35 = (ulong *)0x2;
            }
            else if (((ulong)puVar35 & (long)puVar35 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            puVar21 = puStack_1c8;
            puVar13 = puVar35;
            if (puStack_1c8 < puVar35) {
LAB_10737ab8c:
              if ((ulong)puVar13 >> 0x3d != 0) {
                func_0x000104bd35f4();
                goto LAB_10737b718;
              }
              lVar12 = (long)puVar13 << 3;
              __Znwm(lVar12);
              func_0x00010737d2b8(&lStack_1d0,lVar12);
              for (puVar35 = (ulong *)0x0; puVar13 != puVar35;
                  puVar35 = (ulong *)((long)puVar35 + 1)) {
                *(undefined8 *)(lStack_1d0 + (long)puVar35 * 8) = 0;
              }
              puStack_1c8 = puVar13;
              if (puStack_1c0 != (ulong *)0x0) {
                puVar35 = (ulong *)puStack_1c0[1];
                uVar23 = (long)puVar13 - 1;
                uVar17 = 0;
                if (puVar13 != (ulong *)0x0) {
                  uVar17 = (ulong)puVar35 / (ulong)puVar13;
                }
                puVar21 = puVar35;
                if (puVar13 <= puVar35) {
                  puVar21 = (ulong *)((long)puVar35 - uVar17 * (long)puVar13);
                }
                if (((ulong)puVar13 & uVar23) == 0) {
                  puVar21 = (ulong *)((ulong)puVar35 & uVar23);
                }
                *(ulong ***)(lStack_1d0 + (long)puVar21 * 8) = &puStack_1c0;
                lVar12 = lStack_1d0;
                puVar35 = puStack_1c0;
                while (puVar25 = puVar35, puVar35 = (ulong *)*puVar25, puVar35 != (ulong *)0x0) {
                  puVar26 = (ulong *)puVar35[1];
                  if (((ulong)puVar13 & uVar23) == 0) {
                    puVar26 = (ulong *)((ulong)puVar26 & uVar23);
                  }
                  else if (puVar13 <= puVar26) {
                    uVar17 = 0;
                    if (puVar13 != (ulong *)0x0) {
                      uVar17 = (ulong)puVar26 / (ulong)puVar13;
                    }
                    puVar26 = (ulong *)((long)puVar26 - uVar17 * (long)puVar13);
                  }
                  if (puVar26 != puVar21) {
                    if (*(long *)(lVar12 + (long)puVar26 * 8) == 0) {
                      *(ulong **)(lVar12 + (long)puVar26 * 8) = puVar25;
                      puVar21 = puVar26;
                    }
                    else {
                      *puVar25 = *puVar35;
                      func_0x00010737f3a4();
                      lVar12 = extraout_x8_01;
                      uVar23 = extraout_x9_00;
                      puVar35 = extraout_x10;
                      puVar21 = extraout_x11;
                    }
                  }
                }
              }
            }
            else {
              puVar13 = puStack_1c8;
              if (puVar35 < puStack_1c8) {
                puVar13 = (ulong *)(long)((float)uStack_1b8 / fStack_1b0);
                if ((puStack_1c8 < (ulong *)0x3) ||
                   (((ulong)puStack_1c8 & (long)puStack_1c8 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else {
                  func_0x00010737f26c();
                }
                if (puVar35 <= puVar13) {
                  puVar35 = puVar13;
                }
                puVar13 = puStack_1c8;
                if (puVar35 < puVar21) {
                  puVar13 = puVar35;
                  if (puVar35 != (ulong *)0x0) goto LAB_10737ab8c;
                  func_0x00010737d2b8(&lStack_1d0,0);
                  puStack_1c8 = (ulong *)0x0;
                  puVar13 = (ulong *)0x0;
                }
              }
            }
            if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
              puVar35 = (ulong *)((long)puVar13 - 1U & (ulong)puVar24);
            }
            else {
              puVar35 = puVar24;
              if (puVar13 <= puVar24) {
                uVar17 = 0;
                if (puVar13 != (ulong *)0x0) {
                  uVar17 = (ulong)puVar24 / (ulong)puVar13;
                }
                puVar35 = (ulong *)((long)puVar24 - uVar17 * (long)puVar13);
              }
            }
          }
          puVar24 = *(ulong **)(lStack_1d0 + (long)puVar35 * 8);
          if (puVar24 == (ulong *)0x0) {
            *puVar22 = (ulong)puStack_1c0;
            *(ulong ***)(lStack_1d0 + (long)puVar35 * 8) = &puStack_1c0;
            puStack_1c0 = puVar22;
            if (*puVar22 != 0) {
              puVar24 = *(ulong **)(*puVar22 + 8);
              if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
                puVar24 = (ulong *)((ulong)puVar24 & (long)puVar13 - 1U);
              }
              else if (puVar13 <= puVar24) {
                uVar17 = 0;
                if (puVar13 != (ulong *)0x0) {
                  uVar17 = (ulong)puVar24 / (ulong)puVar13;
                }
                puVar24 = (ulong *)((long)puVar24 - uVar17 * (long)puVar13);
              }
              *(ulong **)(lStack_1d0 + (long)puVar24 * 8) = puVar22;
            }
          }
          else {
            *puVar22 = *puVar24;
            *puVar24 = (ulong)puVar22;
          }
          puStack_110 = (ulong *)0x0;
          uStack_1b8 = uStack_1b8 + 1;
          func_0x00010737d2d0(&puStack_110);
LAB_10737ad70:
          func_0x00010737d314(&puStack_180);
        }
        else {
          bStack_190 = 1;
        }
      }
      else {
        puStack_178 = puStack_1e8;
        puStack_180 = puStack_1f0;
        puStack_1f0 = (ulong *)0x0;
        puStack_1e8 = (ulong *)0x0;
        FUN_10737d340(&puStack_1a8,&puStack_180);
        FUN_107330fdc(&puStack_180);
      }
      lVar18 = lVar18 + 1;
      func_0x00010737f2c4();
      FUN_10737d404(&puStack_1f0);
    }
    *(byte *)(puVar9 + 0x28) = (byte)puVar9[0x28] | bStack_190;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_290 = 0;
    puStack_278 = &UNK_10e52b660;
    lStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    for (puVar36 = puStack_258; puVar35 = puStack_1c0, puVar34 = puStack_1a8, puVar24 = puStack_1a0,
        puVar36 != puVar4; puVar36 = puVar36 + 2) {
      puStack_178 = (ulong *)puVar36[1];
      puStack_180 = (ulong *)*puVar36;
      if (puVar36[1] != 0) {
        do {
          func_0x00010737f044();
        } while (extraout_w10_04 != 0);
      }
      FUN_10737d484(&puStack_110,puVar9[0x13],&puStack_180);
      func_0x000107267e44(&puStack_180);
      puVar34 = puStack_1c8;
      if (((cStack_d8 == '\x01') && (puStack_1c8 != (ulong *)0x0)) && (uStack_1b8 != 0)) {
        puVar35 = &uStack_1b8;
        func_0x00010726364c(puVar35,&puStack_110);
        uVar17 = (long)puVar34 - 1;
        if (((ulong)puVar34 & uVar17) == 0) {
          puVar24 = (ulong *)((ulong)puVar35 & uVar17);
        }
        else {
          puVar24 = puVar35;
          if (puVar34 <= puVar35) {
            uVar23 = 0;
            if (puVar34 != (ulong *)0x0) {
              uVar23 = (ulong)puVar35 / (ulong)puVar34;
            }
            puVar24 = (ulong *)((long)puVar35 - uVar23 * (long)puVar34);
          }
        }
        plVar31 = *(long **)(lStack_1d0 + (long)puVar24 * 8);
        if (plVar31 != (long *)0x0) {
LAB_10737ae74:
          while (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0) {
            puVar22 = (ulong *)plVar31[1];
            if (puVar22 != puVar35) goto LAB_10737ae9c;
            uVar23 = (ulong)(plVar31 + 2);
            func_0x000104c32db4(uVar23,&puStack_110);
            if ((uVar23 & 1) != 0) {
              puVar34 = (ulong *)(plVar31 + 9);
              (**(code **)(*(long *)*puVar34 + 0x28))(&puStack_1f0);
              (**(code **)(*(long *)*puVar36 + 0x28))(&puStack_210);
              if (lStack_1d8 != lStack_1f8) goto LAB_10737b050;
              puStack_230 = (ulong *)&UNK_10e52b660;
              uStack_220 = 0;
              lStack_218 = 0;
              puStack_228 = (undefined8 *)0x0;
              puVar35 = puStack_1f0;
              puVar24 = puStack_1e8;
              func_0x00010737d4cc();
              puStack_d0 = puVar35;
              puStack_c8 = puVar24;
              puVar35 = puStack_210;
              puVar24 = puStack_208;
              while (puStack_210 = puVar35, puStack_208 = puVar24, puStack_d0 != (ulong *)0x0) {
                ppuVar14 = &puStack_210;
                FUN_10737d528(ppuVar14,puStack_c8);
                if ((int)ppuVar14 != 0) {
                  func_0x00010737f29c();
                }
                FUN_10737d4f4(&puStack_d0);
                puVar35 = puStack_210;
                puVar24 = puStack_208;
              }
              func_0x00010737d4cc();
              puStack_d0 = puVar35;
              puStack_c8 = puVar24;
              puVar35 = puStack_230;
              puVar16 = puStack_228;
              while (puStack_230 = puVar35, puStack_228 = puVar16, puStack_d0 != (ulong *)0x0) {
                ppuVar14 = &puStack_1f0;
                FUN_10737d528(ppuVar14,puStack_c8);
                if ((int)ppuVar14 != 0) {
                  func_0x00010737f29c();
                }
                FUN_10737d4f4(&puStack_d0);
                puVar35 = puStack_230;
                puVar16 = puStack_228;
              }
              if (lStack_218 == lStack_1d8 && lStack_218 == lStack_1f8) {
                func_0x00010737d4cc();
                puStack_240 = puVar35;
                puStack_238 = puVar16;
                while (puStack_240 != (ulong *)0x0) {
                  func_0x00010737f2d4(*puVar34);
                  func_0x00010737f294(&puStack_180);
                  func_0x00010737f2d4(*puVar36);
                  func_0x00010737f294(&puStack_d0);
                  uVar27 = (uint)((char)puStack_140 != cStack_90);
                  if ((char)puStack_140 == cStack_90 && (char)puStack_140 != '\0') {
                    ppuVar14 = &puStack_180;
                    FUN_10737d648(ppuVar14,&puStack_d0);
                    uVar27 = (uint)ppuVar14 ^ 1;
                  }
                  func_0x000107267ed0(&puStack_d0);
                  func_0x00010737f28c();
                  if ((uVar27 & 1) != 0) goto LAB_10737b04c;
                  FUN_10737d4f4(&puStack_240);
                }
                func_0x00010737f460();
                func_0x00010737f40c();
                func_0x00010737f474();
                func_0x00010737f42c();
              }
              else {
LAB_10737b04c:
                func_0x00010737f460();
LAB_10737b050:
                func_0x00010737f40c();
                func_0x00010737f474();
                if (puVar9[0x20] == 0) {
                  puVar35 = (ulong *)0x0;
                }
                else {
                  if ((bRam00000001136ca298 & 1) == 0) {
                    iVar8 = 0x136ca298;
                    ___cxa_guard_acquire();
                    if (iVar8 != 0) {
                      func_0x000100060964(0x1136ca2a0,&UNK_10f40acdb);
                      ___cxa_guard_release(0x1136ca298);
                    }
                  }
                  func_0x00010737f2d4(*puVar34);
                  (*extraout_x9_01)(&puStack_180);
                  if ((char)puStack_140 == '\x01' && (int)puStack_180 == 2) {
                    puVar35 = puVar9 + 0x1d;
                    FUN_10737d9a4(puVar35,&puStack_178);
                  }
                  else {
                    puVar35 = (ulong *)0x0;
                  }
                  func_0x00010737f28c();
                }
                if (((int)puVar9[0x14] == 0) && (((ulong)puVar35 & 1) == 0)) {
                  puStack_1e8 = (ulong *)plVar31[10];
                  puStack_1f0 = (ulong *)plVar31[9];
                  if (plVar31[10] != 0) {
                    do {
                      func_0x00010737f044();
                    } while (extraout_w10_05 != 0);
                  }
                }
                else {
                  func_0x000107375b64(&puStack_d0,1);
                  puStack_c0[1] = 0;
                  puStack_c0[2] = 0;
                  *puStack_c0 = (ulong)&PTR_FUN_1109a7290;
                  puStack_180 = (ulong *)((ulong)puStack_180 & 0xffffffffffffff00);
                  uStack_160 = 0;
                  FUN_107379a08(puStack_c0 + 3,puVar34,puVar36,puVar9 + 0x14,puVar9 + 0xb,
                                &puStack_180,puVar35);
                  FUN_10737dbe4(&puStack_180);
                  puStack_178 = puStack_c0;
                  puStack_c0 = (ulong *)0x0;
                  puStack_180 = puStack_178 + 3;
                  func_0x000107375be8(&puStack_d0);
                  puStack_1e8 = puStack_178;
                  puStack_1f0 = puStack_180;
                  puStack_180 = (ulong *)0x0;
                  puStack_178 = (ulong *)0x0;
                  FUN_107375bf8(&puStack_180);
                }
                FUN_10737d340(&uStack_290,&puStack_1f0);
                FUN_107330fdc(&puStack_1f0);
                *(undefined1 *)(puVar9 + 0x28) = 1;
              }
              uVar28 = *puVar34;
              Hint_Prefetch(puStack_278,0,2,0);
              uVar23 = uVar28;
              FUN_10737dab0(puStack_278);
              lVar18 = 0;
              uVar17 = (ulong)puStack_278 >> 0xc ^ uVar23 >> 7;
              bVar3 = (byte)uVar23;
              uVar37 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,
                                                  bVar3))))) & 0x7f7f7f7f7f7f;
              while( true ) {
                uVar17 = uVar17 & uStack_268;
                uVar39 = *(undefined8 *)(puStack_278 + uVar17);
                cVar40 = (char)((ulong)uVar39 >> 8);
                cVar41 = (char)((ulong)uVar39 >> 0x10);
                cVar42 = (char)((ulong)uVar39 >> 0x18);
                cVar43 = (char)((ulong)uVar39 >> 0x20);
                cVar44 = (char)((ulong)uVar39 >> 0x28);
                bVar38 = (byte)((ulong)uVar39 >> 0x30);
                bVar45 = (byte)((ulong)uVar39 >> 0x38);
                for (uVar23 = CONCAT17(-(bVar45 == (bVar3 & 0x7f)),
                                       CONCAT16(-(bVar38 == (bVar3 & 0x7f)),
                                                CONCAT15(-(cVar44 == (char)(uVar37 >> 0x28)),
                                                         CONCAT14(-(cVar43 == (char)(uVar37 >> 0x20)
                                                                   ),CONCAT13(-(cVar42 ==
                                                                               (char)(uVar37 >> 0x18
                                                                                     )),
                                                                              CONCAT12(-(cVar41 ==
                                                                                        (char)(
                                                  uVar37 >> 0x10)),
                                                  CONCAT11(-(cVar40 == (char)(uVar37 >> 8)),
                                                           -((char)uVar39 == (char)uVar37)))))))) &
                              0x8080808080808080; uVar23 != 0; uVar23 = uVar23 - 1 & uVar23) {
                  uVar29 = (uVar23 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar23 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10
                  ;
                  if (*(ulong *)(lStack_270 +
                                (uVar17 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3) &
                                uStack_268) * 8) == uVar28) goto LAB_10737aec8;
                }
                bVar38 = NEON_umaxv(CONCAT17(-(bVar45 == 0x80),
                                             CONCAT16(-(bVar38 == 0x80),
                                                      CONCAT15(-(cVar44 == -0x80),
                                                               CONCAT14(-(cVar43 == -0x80),
                                                                        CONCAT13(-(cVar42 == -0x80),
                                                                                 CONCAT12(-(cVar41 
                                                  == -0x80),
                                                  CONCAT11(-(cVar40 == -0x80),
                                                           -((char)uVar39 == -0x80)))))))),1);
                if ((bVar38 & 1) != 0) break;
                lVar18 = lVar18 + 8;
                uVar17 = lVar18 + uVar17;
              }
              ppuVar15 = &puStack_278;
              FUN_10737d9c4();
              *(ulong *)(lStack_270 + (long)ppuVar15 * 8) = uVar28;
              goto LAB_10737aec8;
            }
          }
        }
      }
LAB_10737aec4:
      func_0x00010737f42c();
LAB_10737aec8:
      func_0x00010724b3d8(&puStack_110);
    }
    for (; puStack_1a8 = puVar34, puStack_1a0 = puVar24, puVar35 != (ulong *)0x0;
        puVar35 = (ulong *)*puVar35) {
      uVar28 = puVar35[9];
      Hint_Prefetch(puStack_278,0,2,0);
      uVar23 = uVar28;
      FUN_10737dab0(puStack_278);
      lVar18 = 0;
      uVar17 = (ulong)puStack_278 >> 0xc ^ uVar23 >> 7;
      bVar3 = (byte)uVar23;
      uVar37 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar17 = uVar17 & uStack_268;
        uVar39 = *(undefined8 *)(puStack_278 + uVar17);
        cVar40 = (char)((ulong)uVar39 >> 8);
        cVar41 = (char)((ulong)uVar39 >> 0x10);
        cVar42 = (char)((ulong)uVar39 >> 0x18);
        cVar43 = (char)((ulong)uVar39 >> 0x20);
        cVar44 = (char)((ulong)uVar39 >> 0x28);
        bVar38 = (byte)((ulong)uVar39 >> 0x30);
        bVar45 = (byte)((ulong)uVar39 >> 0x38);
        for (uVar23 = CONCAT17(-(bVar45 == (bVar3 & 0x7f)),
                               CONCAT16(-(bVar38 == (bVar3 & 0x7f)),
                                        CONCAT15(-(cVar44 == (char)(uVar37 >> 0x28)),
                                                 CONCAT14(-(cVar43 == (char)(uVar37 >> 0x20)),
                                                          CONCAT13(-(cVar42 ==
                                                                    (char)(uVar37 >> 0x18)),
                                                                   CONCAT12(-(cVar41 ==
                                                                             (char)(uVar37 >> 0x10))
                                                                            ,CONCAT11(-(cVar40 ==
                                                                                       (char)(uVar37
                                                                                             >> 8)),
                                                                                      -((char)uVar39
                                                                                       == (char)
                                                  uVar37)))))))) & 0x8080808080808080; uVar23 != 0;
            uVar23 = uVar23 - 1 & uVar23) {
          uVar29 = (uVar23 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar23 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          if (*(ulong *)(lStack_270 +
                        (uVar17 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3) &
                        uStack_268) * 8) == uVar28) {
            if (puStack_278 != (undefined *)0x0) goto LAB_10737b310;
            goto LAB_10737b308;
          }
        }
        bVar38 = NEON_umaxv(CONCAT17(-(bVar45 == 0x80),
                                     CONCAT16(-(bVar38 == 0x80),
                                              CONCAT15(-(cVar44 == -0x80),
                                                       CONCAT14(-(cVar43 == -0x80),
                                                                CONCAT13(-(cVar42 == -0x80),
                                                                         CONCAT12(-(cVar41 == -0x80)
                                                                                  ,CONCAT11(-(cVar40
                                                                                             == 
                                                  -0x80),-((char)uVar39 == -0x80)))))))),1);
        if ((bVar38 & 1) != 0) break;
        lVar18 = lVar18 + 8;
        uVar17 = lVar18 + uVar17;
      }
LAB_10737b308:
      func_0x00010737f420();
      *(undefined1 *)(puVar9 + 0x28) = 1;
LAB_10737b310:
      puVar34 = puStack_1a8;
      puVar24 = puStack_1a0;
    }
    for (; puVar34 != puVar24; puVar34 = puVar34 + 2) {
      func_0x00010737f420();
      *(undefined1 *)(puVar9 + 0x28) = 1;
    }
    FUN_10737dbb4(&puStack_278);
    FUN_10737d428(&lStack_1d0);
    FUN_107374434(&puStack_258);
    FUN_1073742ec(puVar20);
    puVar9[0x26] = uStack_288;
    *puVar20 = uStack_290;
    puVar9[0x27] = uStack_280;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_290 = 0;
    FUN_107374434(&uStack_290);
    func_0x00010737dc04(&uStack_2b0);
    puStack_300 = puVar33;
    puStack_2f8 = puVar9;
    func_0x00010737dc04(&uStack_320);
    puVar35 = param_2 + 0x16;
    uVar17 = param_3;
    func_0x00010786e214(puVar35);
    if ((uVar17 & 1) != 0) {
      FUN_10737de18(puVar9 + 0x29,puVar35);
    }
    uVar17 = param_2[1];
    func_0x000104c2fe00(&puStack_180,param_3);
    do {
      cVar40 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar30,0x10);
      if (bVar7) {
        *puVar30 = *puVar30 + 1;
        cVar40 = ExclusiveMonitorsStatus();
      }
    } while (cVar40 != '\0');
    lVar18 = uVar17 + 0xa8;
    puStack_148 = puVar33;
    puStack_140 = puVar9;
    FUN_10737e858();
    in_ZR = lVar18 == 2;
    if (1 < lVar18) {
      lVar18 = *(long *)(uVar17 + 0xa8);
      FUN_10737e690(&lStack_1d0,1);
      puVar35 = puStack_1c0;
      puStack_1c0[1] = 0;
      puStack_1c0[2] = 0;
      *puStack_1c0 = (ulong)&PTR_FUN_1109a7838;
      puVar20 = puStack_1c0 + 3;
      puStack_1c0[4] = 0;
      *puVar20 = 0;
      puStack_1c0[6] = 0;
      puStack_1c0[5] = 0;
      *(undefined4 *)(puStack_1c0 + 7) = *(undefined4 *)(lVar18 + 0x20);
      FUN_10737ea58(puVar20,*(undefined8 *)(lVar18 + 8));
      plVar31 = (long *)(lVar18 + 0x10);
      puVar30 = puVar35 + 5;
LAB_10737b450:
      puVar24 = puStack_1c0;
      plVar31 = (long *)*plVar31;
      if (plVar31 != (long *)0x0) {
        puVar24 = (ulong *)(plVar31 + 2);
        func_0x000104c2fe38();
        puVar13 = (ulong *)puVar35[4];
        puVar22 = puVar24;
        if (puVar13 != (ulong *)0x0) {
          uVar23 = (long)puVar13 - 1;
          if (((ulong)puVar13 & uVar23) == 0) {
            puVar34 = (ulong *)(uVar23 & (ulong)puVar24);
          }
          else {
            puVar34 = puVar24;
            if (puVar13 <= puVar24) {
              uVar28 = 0;
              if (puVar13 != (ulong *)0x0) {
                uVar28 = (ulong)puVar24 / (ulong)puVar13;
              }
              puVar34 = (ulong *)((long)puVar24 - uVar28 * (long)puVar13);
            }
          }
          plVar11 = *(long **)(*puVar20 + (long)puVar34 * 8);
          if (plVar11 != (long *)0x0) {
            do {
              while( true ) {
                plVar11 = (long *)*plVar11;
                if (plVar11 == (long *)0x0) goto LAB_10737b4f4;
                puVar21 = (ulong *)plVar11[1];
                in_ZR = puVar21 == puVar24;
                if (!(bool)in_ZR) break;
                puVar22 = (ulong *)(plVar11 + 2);
                func_0x000104c32db4(puVar22,plVar31 + 2);
                if (((ulong)puVar22 & 1) != 0) goto LAB_10737b450;
              }
              if (((ulong)puVar13 & uVar23) == 0) {
                puVar21 = (ulong *)((ulong)puVar21 & uVar23);
              }
              else if (puVar13 <= puVar21) {
                uVar28 = 0;
                if (puVar13 != (ulong *)0x0) {
                  uVar28 = (ulong)puVar21 / (ulong)puVar13;
                }
                puVar21 = (ulong *)((long)puVar21 - uVar28 * (long)puVar13);
              }
            } while (puVar21 == puVar34);
          }
        }
LAB_10737b4f4:
        func_0x00010737f3c4();
        puStack_c0 = (ulong *)0x1;
        *puVar22 = 0;
        puVar22[1] = (ulong)puVar24;
        puStack_d0 = puVar22;
        puStack_c8 = puVar30;
        func_0x000104c2fe00(puVar22 + 2,plVar31 + 2);
        lVar18 = plVar31[10];
        uVar23 = plVar31[9];
        puVar22[10] = plVar31[10];
        puVar22[9] = uVar23;
        if (lVar18 != 0) {
          do {
            func_0x00010737f044();
          } while (extraout_w10_06 != 0);
        }
        if ((puVar13 == (ulong *)0x0) ||
           (in_ZR = *(float *)(puVar35 + 7) * (float)puVar13 == (float)(puVar35[6] + 1),
           *(float *)(puVar35 + 7) * (float)puVar13 < (float)(puVar35[6] + 1))) {
          bVar6 = (ulong *)0x2 < puVar13;
          bVar7 = puVar13 == (ulong *)0x3;
          func_0x00010737f200((long)puVar13 << 1);
          uVar39 = extraout_x8_02;
          if (!bVar6 || bVar7) {
            uVar39 = extraout_x9_02;
          }
          FUN_10737ea58(puVar20,uVar39);
          puVar13 = (ulong *)puVar35[4];
          if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
            in_ZR = true;
            puVar34 = (ulong *)((long)puVar13 - 1U & (ulong)puVar24);
          }
          else {
            in_ZR = puVar24 == puVar13;
            puVar34 = puVar24;
            if (puVar13 <= puVar24) {
              uVar23 = 0;
              if (puVar13 != (ulong *)0x0) {
                uVar23 = (ulong)puVar24 / (ulong)puVar13;
              }
              puVar34 = (ulong *)((long)puVar24 - uVar23 * (long)puVar13);
            }
          }
        }
        uVar23 = *puVar20;
        puVar24 = *(ulong **)(uVar23 + (long)puVar34 * 8);
        if (puVar24 == (ulong *)0x0) {
          *puStack_d0 = *puVar30;
          *puVar30 = (ulong)puStack_d0;
          *(ulong **)(uVar23 + (long)puVar34 * 8) = puVar30;
          if (*puStack_d0 != 0) {
            puVar24 = *(ulong **)(*puStack_d0 + 8);
            if (((ulong)puVar13 & (long)puVar13 - 1U) == 0) {
              puVar24 = (ulong *)((ulong)puVar24 & (long)puVar13 - 1U);
              in_ZR = true;
            }
            else {
              in_ZR = puVar24 == puVar13;
              if (puVar13 <= puVar24) {
                uVar28 = 0;
                if (puVar13 != (ulong *)0x0) {
                  uVar28 = (ulong)puVar24 / (ulong)puVar13;
                }
                puVar24 = (ulong *)((long)puVar24 - uVar28 * (long)puVar13);
              }
            }
            *(ulong **)(uVar23 + (long)puVar24 * 8) = puStack_d0;
          }
        }
        else {
          *puStack_d0 = *puVar24;
          *puVar24 = (ulong)puStack_d0;
        }
        puStack_d0 = (ulong *)0x0;
        puVar35[6] = puVar35[6] + 1;
        FUN_10737ec24(&puStack_d0);
        goto LAB_10737b450;
      }
      *(undefined4 *)(puVar35 + 8) = 0;
      puStack_1c0 = (ulong *)0x0;
      puStack_d0 = puVar24 + 3;
      puStack_c8 = puVar24;
      FUN_10737e7dc(&lStack_1d0);
      FUN_10737ea1c(uVar17 + 0xa8,&puStack_d0);
      FUN_10737e7b8(&puStack_d0);
    }
    FUN_10737ea04(*(undefined8 *)(uVar17 + 0xa8),&puStack_180);
    FUN_10737dff0(&puStack_180);
    *param_1 = (ulong)puVar33;
    param_1[1] = (ulong)puVar9;
    puStack_300 = (ulong *)0x0;
    puStack_2f8 = (ulong *)0x0;
    FUN_10737e9e0(&puStack_300);
    func_0x000107331000(&uStack_2f0);
    FUN_10737344c(&uStack_2e0);
    func_0x000107331610(&puStack_2d0);
  }
  else {
    lVar18 = *(long *)(uVar17 + 0x50);
    uVar23 = *(ulong *)(uVar17 + 0x48);
    param_1[1] = *(ulong *)(uVar17 + 0x50);
    *param_1 = uVar23;
    if (lVar18 != 0) {
      do {
        func_0x00010737f044();
      } while (extraout_w10_00 != 0);
    }
  }
  func_0x000107279ee0(&uStack_2c0);
LAB_10737b6a8:
  func_0x00010737eff0(uStack_88);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10737b70c:
  func_0x000104bfeb48();
LAB_10737b718:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10737b71c);
  (*pcVar5)();
LAB_10737ae9c:
  if (((ulong)puVar34 & uVar17) == 0) {
    puVar22 = (ulong *)((ulong)puVar22 & uVar17);
  }
  else if (puVar34 <= puVar22) {
    uVar23 = 0;
    if (puVar34 != (ulong *)0x0) {
      uVar23 = (ulong)puVar22 / (ulong)puVar34;
    }
    puVar22 = (ulong *)((long)puVar22 - uVar23 * (long)puVar34);
  }
  if (puVar22 != puVar24) goto LAB_10737aec4;
  goto LAB_10737ae74;
}



/* Entry: 10737ba38; end: 10737ba3f;  */

long FUN_10737ba38(ulong *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar2 = (long *)*param_1;
  plVar6 = (long *)plVar2[1];
  if ((plVar6 != (long *)0x0) && (plVar2[3] != 0)) {
    plVar3 = plVar2;
    func_0x00010737f2e8();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar3 & uVar7);
    }
    else {
      plVar8 = plVar3;
      if (plVar6 <= plVar3) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar3 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*plVar2 + (long)plVar8 * 8);
    plVar2 = plVar3;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar3) break;
        func_0x00010737f438();
        if ((int)plVar2 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10737ba40; end: 10737ba8b;  */

void FUN_10737ba40(void)

{
  code *extraout_x9;
  long *aplStack_30 [2];
  
  func_0x00010737f2d4();
  (*extraout_x9)(aplStack_30);
  (**(code **)(*aplStack_30[0] + 0x10))();
  func_0x00010737f174();
  func_0x000107331000();
  return;
}



/* Entry: 10737ba8c; end: 10737bca7;  */

long * FUN_10737ba8c(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_x8;
  long lVar5;
  long *plVar6;
  undefined8 unaff_x21;
  long *plVar7;
  undefined1 *unaff_x22;
  undefined8 *puVar8;
  long lStack_100;
  undefined1 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long alStack_90 [2];
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  puVar8 = &uStack_c0;
  lVar5 = param_1;
  func_0x00010737f004();
  plVar2 = *(long **)(lVar5 + 8);
  uStack_38 = extraout_x8;
  func_0x00010737f338();
  func_0x00010724e404();
  uVar1 = *(char *)(*(long *)(param_1 + 8) + 0xd0) == '\x01';
  if ((bool)uVar1) {
    func_0x00010737f3e4();
    func_0x00010737f258();
    puVar8 = (undefined8 *)unaff_x22;
  }
  else {
    func_0x00010737f258();
    func_0x0001073730ac(alStack_90);
    func_0x00010737f338(*(undefined8 *)(param_1 + 8));
    func_0x00010724e404();
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0xb8);
    if (plVar2 == (long *)0x0) {
      func_0x0001073730ac(&uStack_c0);
    }
    else {
      (**(code **)(*plVar2 + 0x20))(&uStack_c0);
    }
    FUN_10737ef78(alStack_90,&uStack_c0);
    func_0x000107283194(&uStack_c0);
    func_0x00010737f258();
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_a0 = 0x3f800000;
    FUN_10737efb4(&uStack_c0,
                  *(long *)(alStack_90[0] + 0x18) + *(long *)(*(long *)(param_1 + 200) + 0x18));
    uStack_78 = uStack_b0;
    puStack_80 = (undefined1 *)&uStack_c0;
    for (plVar2 = *(long **)(*(long *)(param_1 + 200) + 0x10); plVar2 != (long *)0x0;
        plVar2 = (long *)*plVar2) {
      func_0x000104c2fe00(auStack_70,plVar2 + 2);
      func_0x0001072f7ab8(&puStack_80,auStack_70);
      func_0x000104c2f714(auStack_70);
    }
    func_0x0001072989d0(&uStack_c0,*(undefined8 *)(alStack_90[0] + 0x10),0);
    func_0x00010737f338(*(undefined8 *)(param_1 + 8));
    func_0x000107279a5c();
    FUN_10737efc8(&puStack_80,&uStack_c0);
    lVar5 = *(long *)(param_1 + 8);
    uVar1 = *(char *)(lVar5 + 0xd0) == '\x01';
    if ((bool)uVar1) {
      FUN_10737ef78(lVar5 + 0xc0,&puStack_80);
    }
    else {
      *(undefined8 *)(lVar5 + 200) = uStack_78;
      *(undefined1 **)(lVar5 + 0xc0) = puStack_80;
      puStack_80 = (undefined1 *)0x0;
      uStack_78 = 0;
      *(undefined1 *)(lVar5 + 0xd0) = 1;
    }
    func_0x000107283194(&puStack_80);
    func_0x00010737f3e4(*(undefined8 *)(param_1 + 8));
    func_0x000107279ee0(auStack_70);
    func_0x0001072981bc(&uStack_c0);
    plVar2 = alStack_90;
    func_0x000107283194();
    unaff_x21 = 0;
  }
  func_0x00010737eff0(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107279ee0(auStack_70);
    func_0x0001072981bc(&uStack_c0);
    plVar3 = alStack_90;
    func_0x000107283194();
    func_0x00010737f080();
    pcStack_c8 = FUN_10737bca8;
    plVar6 = (long *)0x0;
    plVar7 = (long *)(plVar3[0x19] + 0x10);
    puStack_f0 = (undefined1 *)puVar8;
    uStack_e8 = unaff_x21;
    lStack_e0 = param_1;
    plStack_d8 = plVar2;
    puStack_d0 = &stack0xfffffffffffffff0;
    while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
      lVar5 = (long)(plVar7 + 2);
      func_0x000104c2d634(lVar5);
      lVar4 = plVar7[9];
      func_0x00010782acdc(lVar4);
      plVar6 = (long *)((long)plVar6 + lVar4 + lVar5);
    }
    lStack_100 = plVar3[1];
    uStack_f8 = 1;
    func_0x00010724e404();
    plVar2 = *(long **)(plVar3[1] + 0xb8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x30))();
      plVar6 = (long *)((long)plVar2 + (long)plVar6);
    }
    func_0x00010724e49c(&lStack_100);
    return plVar6;
  }
  return plVar2;
}



/* Entry: 10737bca8; end: 10737bd4b;  */

long FUN_10737bca8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar3 = 0;
  plVar4 = (long *)(*(long *)(param_1 + 200) + 0x10);
  while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
    lVar1 = (long)(plVar4 + 2);
    func_0x000104c2d634(lVar1);
    lVar2 = plVar4[9];
    func_0x00010782acdc(lVar2);
    lVar3 = lVar1 + lVar3 + lVar2;
  }
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uStack_38 = 1;
  func_0x00010724e404();
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0xb8);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))();
    lVar3 = (long)plVar4 + lVar3;
  }
  func_0x00010724e49c(&uStack_40);
  return lVar3;
}



/* Entry: 10737bd4c; end: 10737bdef;  */

bool FUN_10737bd4c(long *param_1)

{
  long *plVar1;
  long alStack_40 [2];
  long alStack_30 [2];
  
  (**(code **)(*param_1 + 0x20))(alStack_30);
  plVar1 = (long *)(alStack_30[0] + 0x10);
  do {
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)0x0) {
LAB_10737bdbc:
      func_0x000107283194(alStack_30);
      return plVar1 != (long *)0x0;
    }
    (**(code **)(*param_1 + 0x18))(alStack_40,param_1,plVar1 + 2);
    if ((alStack_40[0] != 0) && ((*(byte *)(alStack_40[0] + 0x128) & 1) != 0)) {
      func_0x000107331000(alStack_40);
      goto LAB_10737bdbc;
    }
    func_0x000107331000(alStack_40);
  } while( true );
}



/* Entry: 10737bdf0; end: 10737bdf3;  */

undefined8 * FUN_10737bdf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a73a0;
  FUN_107330fdc(param_1 + 0x13);
  FUN_107330fdc(param_1 + 0x11);
  func_0x000104c319e0(param_1 + 9);
  FUN_10733921c(param_1 + 6);
  *param_1 = &PTR_DAT_110998b48;
  func_0x0001072978d8(param_1 + 1);
  return param_1;
}



/* Entry: 10737bdf4; end: 10737be07;  */

void FUN_10737bdf4(void)

{
  func_0x00010737e01c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10737be08; end: 10737be0b;  */

undefined8 * FUN_10737be08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7400;
  FUN_10737dbe4(param_1 + 0x26);
  FUN_107374434(param_1 + 0x22);
  FUN_10737344c(param_1 + 0x20);
  func_0x000107331610(param_1 + 0x1e);
  func_0x0001072c940c(param_1 + 0xd);
  func_0x00010737dc04(param_1 + 10);
  func_0x000104c2f714(param_1 + 1);
  return param_1;
}



/* Entry: 10737be0c; end: 10737be1f;  */

void FUN_10737be0c(void)

{
  func_0x00010737e06c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10737be20; end: 10737be23;  */

void FUN_10737be20(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x00010737f1f0();
  *param_1 = extraout_x8;
  FUN_107373b70(param_1 + 0x1b);
  func_0x00010737f450();
  func_0x00010737f458();
  func_0x00010737f2cc();
  FUN_10737e8a4(param_1 + 1);
  return;
}



/* Entry: 10737be24; end: 10737be37;  */

void FUN_10737be24(void)

{
  func_0x00010737e0d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10737be38; end: 10737bef7;  */

long FUN_10737be38(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (param_1[3] != 0)) {
    plVar2 = param_1;
    func_0x00010737f2e8();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    plVar3 = plVar2;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        func_0x00010737f438();
        if ((int)plVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10737bef8; end: 10737bf1f;  */

long FUN_10737bef8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10737bf20();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10737bf20; end: 10737bf4f;  */

void FUN_10737bf20(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0xb21642c8590b22) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x170);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109a7900;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10737bf50; end: 10737bf53;  */

void FUN_10737bf50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7900;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10737bf54; end: 10737bf67;  */

void FUN_10737bf54(void)

{
  FUN_10737d298();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10737bf68; end: 10737bf6f;  */

void FUN_10737bf68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010737f494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10737bf70; end: 10737c0eb;  */

undefined *** FUN_10737bf70(undefined ***param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  undefined ***pppuVar2;
  undefined8 extraout_x8;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined **ppuStack_c8;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b0;
  undefined **ppuStack_a8;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_90;
  undefined1 auStack_88 [64];
  undefined8 uStack_48;
  
  pppuVar2 = param_1;
  func_0x00010737f018();
  uStack_48 = extraout_x8;
  func_0x00010737f0c8();
  *pppuVar2 = &PTR_FUN_1109a7950;
  ppuVar5 = (undefined **)*param_2;
  pppuVar3 = pppuVar2 + 6;
  pppuVar2[7] = (undefined **)param_2[1];
  *pppuVar3 = ppuVar5;
  *param_2 = 0;
  param_2[1] = 0;
  pppuVar2[8] = (undefined **)(*(long *)**pppuVar3 + param_3 * 0x70);
  pppuVar2 = pppuVar2 + 9;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  pppuVar4 = param_1 + 0x22;
  *(undefined1 *)pppuVar4 = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  uVar1 = *(char *)(param_4 + 0x20) == '\x01';
  if ((bool)uVar1) {
    ppuStack_a8 = &PTR_FUN_1109a79c8;
    pppuStack_90 = &ppuStack_a8;
    ppuStack_c8 = &PTR_DAT_1109a7a58;
    pppuStack_b0 = &ppuStack_c8;
    pppuStack_c0 = param_1;
    pppuStack_a0 = param_1;
    func_0x00010786e144(auStack_88,param_4,param_1[8] + 6,&ppuStack_a8,&ppuStack_c8);
    FUN_10737c0ec(pppuVar4,auStack_88);
    func_0x000104c319e0(auStack_88);
    FUN_107324894(&ppuStack_c8);
    pppuVar2 = &ppuStack_a8;
    func_0x0001073248c8();
  }
  func_0x00010737eff0(uStack_48);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000104c319e0(auStack_88);
  FUN_107324894(&ppuStack_c8);
  func_0x0001073248c8(&ppuStack_a8);
  func_0x00010737c444(pppuVar4);
  func_0x00010737c464(param_1 + 0x1e);
  func_0x000107276ba4(param_1 + 9);
  func_0x000107331610(pppuVar3);
  func_0x00010737f404();
  __Unwind_Resume();
  if (*(char *)(pppuVar2 + 8) == '\x01') {
    func_0x0001072c0368();
  }
  else {
    func_0x00010737c428();
  }
  return pppuVar2;
}



/* Entry: 10737c0ec; end: 10737c11f;  */

long FUN_10737c0ec(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x0001072c0368();
  }
  else {
    FUN_10737c428();
  }
  return param_1;
}



/* Entry: 10737c120; end: 10737c123;  */

undefined8 * FUN_10737c120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7950;
  func_0x00010737c444(param_1 + 0x22);
  func_0x00010737c464(param_1 + 0x1e);
  func_0x000107276ba4(param_1 + 9);
  func_0x000107331610(param_1 + 6);
  *param_1 = &PTR_DAT_110998b48;
  func_0x0001072978d8(param_1 + 1);
  return param_1;
}



/* Entry: 10737c124; end: 10737c157;  */

void FUN_10737c124(void)

{
  FUN_10737c484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10737c158; end: 10737c19b;  */

void FUN_10737c158(undefined1 *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x40) + 0x20;
  func_0x000107297a3c();
  if (lVar1 != 0) {
    func_0x000107268350(param_1,param_3 + 0x38);
    param_1[0x40] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x40] = 0;
  return;
}



/* Entry: 10737c19c; end: 10737c1c7;  */

long FUN_10737c19c(long param_1)

{
  return *(long *)(param_1 + 0x40) + 0x20;
}



/* Entry: 10737c1c8; end: 10737c2db;  */

void FUN_10737c1c8(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 uStack_69;
  long *plStack_68;
  undefined1 uStack_60;
  long *plStack_50;
  undefined1 uStack_48;
  
  plVar1 = param_2 + 9;
  uStack_60 = 1;
  plStack_68 = plVar1;
  func_0x00010724e404(plVar1);
  plVar2 = param_2 + 0x1e;
  if ((char)param_2[0x21] == '\x01') {
    *param_1 = (long)plVar2;
    *(undefined4 *)(param_1 + 1) = 1;
    func_0x00010724e49c(&plStack_68);
  }
  else {
    func_0x00010724e49c(&plStack_68);
    uStack_48 = 1;
    plStack_50 = plVar1;
    func_0x000107279a5c(plVar1);
    if ((*(byte *)(param_2 + 0x21) & 1) == 0) {
      FUN_10737c598(&plStack_68,param_2[8],&uStack_69);
      func_0x00010737f414();
      func_0x00010737f484();
      (**(code **)(*param_2 + 0x10))();
      if ((int)param_2 == 3) {
        func_0x000107833560(&plStack_68,plVar2);
        func_0x00010737f414();
        func_0x00010737f484();
      }
    }
    *param_1 = (long)plVar2;
    *(undefined4 *)(param_1 + 1) = 1;
    func_0x000107279ee0(&plStack_50);
  }
  return;
}



/* Entry: 10737c2dc; end: 10737c2e3;  */

void FUN_10737c2dc(void)

{
  return;
}



/* Entry: 10737c2e4; end: 10737c30b;  */

void FUN_10737c2e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010737f054();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109a79c8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10737c30c; end: 10737c333;  */

void FUN_10737c30c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a79c8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10737c334; end: 10737c35b;  */

void FUN_10737c334(undefined8 param_1)

{
  func_0x00010737f238();
  func_0x00010737f108(param_1,&PTR_DAT_1109a7a38);
  func_0x00010737f034();
  return;
}



/* Entry: 10737c35c; end: 10737c367;  */

undefined ** FUN_10737c35c(void)

{
  return &PTR_DAT_1109a7a38;
}



/* Entry: 10737c368; end: 10737c38b;  */

undefined1 * FUN_10737c368(void)

{
  undefined1 auStack_20 [16];
  
  FUN_10737c38c(auStack_20);
  func_0x00010737f250();
  return auStack_20;
}



/* Entry: 10737c38c; end: 10737c3a7;  */

void FUN_10737c38c(undefined8 param_1,long *param_2)

{
  func_0x0001072752cc(param_1,*(long *)(*param_2 + 0x40) + 0x20);
  func_0x000107268420();
  return;
}



/* Entry: 10737c3a8; end: 10737c3cf;  */

void FUN_10737c3a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010737f054();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109a7a58;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10737c3d0; end: 10737c3f3;  */

void FUN_10737c3d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109a7a58;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10737c3f4; end: 10737c41b;  */

void FUN_10737c3f4(undefined8 param_1)

{
  func_0x00010737f238();
  func_0x00010737f108(param_1,&PTR_DAT_1109a7ac8);
  func_0x00010737f034();
  return;
}



/* Entry: 10737c41c; end: 10737c427;  */

undefined ** FUN_10737c41c(void)

{
  return &PTR_DAT_1109a7ac8;
}



/* Entry: 10737c428; end: 10737c483;  */

void FUN_10737c428(long param_1)

{
  func_0x0001072692b0();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 10737c484; end: 10737c4d7;  */

undefined8 * FUN_10737c484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7950;
  func_0x00010737c444(param_1 + 0x22);
  func_0x00010737c464(param_1 + 0x1e);
  func_0x000107276ba4(param_1 + 9);
  func_0x000107331610(param_1 + 6);
  *param_1 = &PTR_DAT_110998b48;
  func_0x0001072978d8(param_1 + 1);
  return param_1;
}



/* Entry: 10737c4d8; end: 10737c54b;  */

uint FUN_10737c4d8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*param_1 == 7) {
    return 0;
  }
  if (*param_1 == 6) {
    return 1;
  }
  if (*param_1 == 5) {
    return 2;
  }
  uVar3 = *param_1;
  uVar1 = 3;
  if (uVar3 != 1) {
    uVar1 = 0;
  }
  uVar2 = uVar3;
  if (uVar3 != 2) {
    uVar2 = uVar1;
  }
  if (uVar3 == 3) {
    uVar2 = 1;
  }
  uVar1 = 3;
  if (uVar3 != 4) {
    uVar1 = uVar2;
  }
  return uVar1 & 0xff;
}



/* Entry: 10737c54c; end: 10737c563;  */

long FUN_10737c54c(long param_1)

{
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10737cf48();
  }
  else {
    FUN_10737cf1c();
  }
  return param_1;
}


