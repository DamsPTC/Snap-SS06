/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c4d92c; end: 108c4d963;  */

void FUN_108c4d92c(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_108c4d964(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_108c4e314(&uStack_30);
  return;
}



/* Entry: 108c4d964; end: 108c4d987;  */

void FUN_108c4d964(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_108c4e12c(&uStack_11,param_1);
  return;
}



/* Entry: 108c4d988; end: 108c4df97;  */

undefined8 * FUN_108c4d988(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_e8 [24];
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  param_1[1] = 0x32aaaba7;
  *param_1 = &PTR_FUN_110aba4e8;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  *(undefined8 *)((long)param_1 + 0x39) = 0;
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110aba5a0;
  puVar6 = puVar5;
  func_0x000107c301a4();
  puVar5[3] = puVar6;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[10] = puVar5 + 3;
  param_1[0xb] = puVar5;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  if (*param_2 == 0) {
    uVar7 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x00010527a174();
  }
  else {
    uVar1 = param_2[3];
    if (-1 < (char)*(byte *)((long)param_2 + 0x27)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x27);
    }
    if (uVar1 != 0) {
      if (*param_3 == 0) {
        puVar6 = (undefined8 *)0x20;
        __Znwm();
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = &PTR_FUN_110abbac8;
        *puVar6 = &PTR_DAT_110aba5f0;
        lStack_78 = param_3[1];
        uStack_80 = 0;
        *param_3 = (long)(puVar6 + 3);
        param_3[1] = (long)puVar6;
        FUN_108c4e2d4(&uStack_80);
      }
      puVar6 = (undefined8 *)0x38;
      __Znwm();
      puVar6[2] = 0;
      *puVar6 = &PTR_DAT_110aba640;
      puVar6[1] = 0;
      puVar6[3] = &PTR_FUN_110abbc88;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[4] = 0;
      lStack_78 = param_1[0xd];
      uStack_80 = param_1[0xc];
      param_1[0xc] = puVar6 + 3;
      param_1[0xd] = puVar6;
      func_0x000108c4e4f8();
      puVar6 = (undefined8 *)0x78;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_DAT_110aba690;
      puVar6[3] = &PTR_FUN_110abbc00;
      puVar6[5] = 0;
      puVar6[4] = puVar6 + 5;
      puVar6[6] = 0;
      puVar6[7] = 0x32aaaba7;
      puVar6[9] = 0;
      puVar6[8] = 0;
      puVar6[0xb] = 0;
      puVar6[10] = 0;
      puVar6[0xd] = 0;
      puVar6[0xc] = 0;
      puVar6[0xe] = 0;
      lStack_78 = param_1[0xf];
      uStack_80 = param_1[0xe];
      param_1[0xe] = puVar6 + 3;
      param_1[0xf] = puVar6;
      func_0x000108c4b564(&uStack_80);
      param_3 = (long *)*param_3;
      lStack_c8 = param_2[1];
      lStack_d0 = *param_2;
      if (param_2[1] != 0) {
        do {
          func_0x000108c4e4c0();
        } while (extraout_w10 != 0);
      }
      (**(code **)(*param_3 + 0x10))(&puStack_90);
      puVar5 = puStack_88;
      puVar6 = puStack_90;
      puStack_90 = (undefined8 *)0x0;
      puStack_88 = (undefined8 *)0x0;
      lStack_78 = param_1[0x11];
      uStack_80 = param_1[0x10];
      param_1[0x11] = puVar5;
      param_1[0x10] = puVar6;
      func_0x000108c4caf4(&uStack_80);
      func_0x000108c4caf4(&puStack_90);
      func_0x000107c278a4(&lStack_d0);
      puVar5 = (undefined8 *)0xc8;
      __Znwm();
      plVar8 = puVar5 + 1;
      *plVar8 = 0;
      puVar5[2] = 0;
      puVar6 = puVar5 + 3;
      *puVar5 = &PTR_DAT_110aba6e0;
      FUN_108c675ac();
      lStack_78 = puVar5[7];
      if ((lStack_78 == 0) || (*(long *)(lStack_78 + 8) == -1)) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar8 = puVar5 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uStack_80 = puVar5[6];
        puVar5[6] = puVar6;
        puVar5[7] = puVar5;
        puStack_a0 = puVar6;
        puStack_98 = puVar5;
        puStack_90 = puVar6;
        puStack_88 = puVar5;
        FUN_108c4e414(&uStack_80);
        func_0x000108c4e438(&puStack_90);
        puVar6 = puStack_a0;
        puVar5 = puStack_98;
      }
      puStack_a0 = (undefined8 *)0x0;
      puStack_98 = (undefined8 *)0x0;
      lStack_78 = param_1[0x13];
      uStack_80 = param_1[0x12];
      param_1[0x12] = puVar6;
      param_1[0x13] = puVar5;
      func_0x000108c4caac(&uStack_80);
      func_0x000108c4e438(&puStack_a0);
      lVar9 = param_1[0xd];
      uVar10 = param_1[0xd];
      uVar7 = param_1[0xc];
      puVar6 = (undefined8 *)0xc0;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_FUN_110aba730;
      uStack_80 = uVar7;
      lStack_78 = uVar10;
      if (lVar9 != 0) {
        do {
          func_0x000108c4e4c0();
        } while (extraout_w10_00 != 0);
      }
      puStack_88 = (undefined8 *)param_1[0xf];
      puStack_90 = (undefined8 *)param_1[0xe];
      if (param_1[0xf] != 0) {
        do {
          func_0x000108c4e4c0();
        } while (extraout_w10_01 != 0);
      }
      puStack_98 = (undefined8 *)param_1[0x11];
      puStack_a0 = (undefined8 *)param_1[0x10];
      if (param_1[0x11] != 0) {
        do {
          func_0x000108c4e4c0();
        } while (extraout_w10_02 != 0);
      }
      uStack_a8 = param_1[0xb];
      uStack_b0 = param_1[10];
      if (param_1[0xb] != 0) {
        do {
          func_0x000108c4e4c0();
        } while (extraout_w10_03 != 0);
      }
      uStack_b8 = param_1[0x13];
      uStack_c0 = param_1[0x12];
      if (param_1[0x13] != 0) {
        do {
          func_0x000108c4e4c0();
        } while (extraout_w10_04 != 0);
      }
      func_0x000108c4c354(puVar6 + 3,&uStack_80,&puStack_90,&puStack_a0,&uStack_b0,&uStack_c0);
      func_0x000108c4caac(&uStack_c0);
      func_0x000108c4cad0(&uStack_b0);
      func_0x000108c4caf4(&puStack_a0);
      func_0x000108c4b564(&puStack_90);
      func_0x000108c4e4f8();
      lStack_78 = param_1[0x15];
      uStack_80 = param_1[0x14];
      param_1[0x14] = puVar6 + 3;
      param_1[0x15] = puVar6;
      FUN_108c3e3c4();
      lVar9 = param_1[0xd];
      uVar10 = param_1[0xd];
      uVar7 = param_1[0xc];
      puVar6 = (undefined8 *)0x40;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_DAT_110aba780;
      uStack_80 = uVar7;
      lStack_78 = uVar10;
      if (lVar9 != 0) {
        do {
          func_0x000108c4e4c0();
        } while (extraout_w10_05 != 0);
      }
      puStack_88 = (undefined8 *)param_1[0xf];
      puStack_90 = (undefined8 *)param_1[0xe];
      if (param_1[0xf] != 0) {
        do {
          func_0x000108c4e4c0();
        } while (extraout_w10_06 != 0);
      }
      FUN_108c4aee8(puVar6 + 3,&uStack_80,&puStack_90);
      func_0x000108c4b564(&puStack_90);
      func_0x000108c4e4f8();
      lStack_78 = param_1[0x17];
      uStack_80 = param_1[0x16];
      param_1[0x16] = puVar6 + 3;
      param_1[0x17] = puVar6;
      FUN_108c3d99c();
      func_0x000107c278b8(auStack_e8,"success");
      func_0x000108c4e510();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
      return param_1;
    }
    uVar7 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x00010527a174();
  }
  ___cxa_throw(uVar7,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108c4df34);
  (*pcVar4)();
}



/* Entry: 108c4df98; end: 108c4e007;  */

undefined8 * FUN_108c4df98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba4e8;
  FUN_108c4e008();
  FUN_108c3d99c(param_1 + 0x16);
  FUN_108c3e3c4(param_1 + 0x14);
  func_0x000108c4caac(param_1 + 0x12);
  func_0x000108c4caf4(param_1 + 0x10);
  func_0x000108c4b564(param_1 + 0xe);
  func_0x000108c4b58c(param_1 + 0xc);
  func_0x000108c4cad0(param_1 + 10);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 108c4e008; end: 108c4e06f;  */

void FUN_108c4e008(void)

{
  long *plVar1;
  long unaff_x19;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108c4e4ec();
  if ((*(byte *)(unaff_x19 + 0x48) & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x48) = 1;
    plVar1 = *(long **)(unaff_x19 + 0x90);
    if (plVar1 != (long *)0x0) {
      uStack_30 = 0;
      uStack_28 = 0;
      (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_30);
      func_0x000107c28254(&uStack_30);
    }
  }
  func_0x000108c4e508();
  return;
}



/* Entry: 108c4e070; end: 108c4e073;  */

undefined8 * FUN_108c4e070(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba4e8;
  FUN_108c4e008();
  FUN_108c3d99c(param_1 + 0x16);
  FUN_108c3e3c4(param_1 + 0x14);
  func_0x000108c4caac(param_1 + 0x12);
  func_0x000108c4caf4(param_1 + 0x10);
  func_0x000108c4b564(param_1 + 0xe);
  func_0x000108c4b58c(param_1 + 0xc);
  func_0x000108c4cad0(param_1 + 10);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 108c4e074; end: 108c4e087;  */

void FUN_108c4e074(void)

{
  FUN_108c4df98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4e088; end: 108c4e0db;  */

void FUN_108c4e088(void)

{
  long *plVar1;
  long unaff_x19;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000108c4e4ec();
  if ((*(byte *)(unaff_x19 + 0x48) & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x48) = 1;
    plVar1 = *(long **)(unaff_x19 + 0x90);
    if (plVar1 != (long *)0x0) {
      uStack_30 = 0;
      uStack_28 = 0;
      (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_30);
      func_0x000107c28254(&uStack_30);
    }
  }
  func_0x000108c4e508();
  return;
}



/* Entry: 108c4e0dc; end: 108c4e12b;  */

void FUN_108c4e0dc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x000108c4e4ec();
  if (((*(byte *)(unaff_x19 + 0x48) & 1) == 0) &&
     (plVar1 = *(long **)(unaff_x19 + 0x90), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 8);
  return;
}



/* Entry: 108c4e12c; end: 108c4e1cb;  */

undefined1 * FUN_108c4e12c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_108c4e1cc(auStack_40,1);
  FUN_108c4e224(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000108c4e304();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000108c4e304(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_108c4e1f4();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 108c4e1cc; end: 108c4e1f3;  */

long FUN_108c4e1cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_108c4e1f4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 108c4e1f4; end: 108c4e223;  */

undefined8 * FUN_108c4e1f4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x12f684bda12f685) {
    puVar1 = (undefined8 *)(param_2 * 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aba550;
  FUN_108c4e284(param_1 + 3);
  return param_1;
}



/* Entry: 108c4e224; end: 108c4e263;  */

undefined8 * FUN_108c4e224(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110aba550;
  FUN_108c4e284(param_1 + 3);
  return param_1;
}



/* Entry: 108c4e264; end: 108c4e267;  */

void FUN_108c4e264(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba550;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c4e268; end: 108c4e27b;  */

void FUN_108c4e268(void)

{
  FUN_108c4e2f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4e27c; end: 108c4e283;  */

void FUN_108c4e27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c4e4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c4e284; end: 108c4e2d3;  */

undefined8 FUN_108c4e284(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_108c4d988(param_1,param_2,&uStack_30);
  FUN_108c4e2d4(&uStack_30);
  return param_1;
}



/* Entry: 108c4e2d4; end: 108c4e2f7;  */

void FUN_108c4e2d4(long param_1)

{
  func_0x000108c4e51c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108c4e2f8; end: 108c4e313;  */

void FUN_108c4e2f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba550;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c4e314; end: 108c4e337;  */

void FUN_108c4e314(long param_1)

{
  func_0x000108c4e51c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108c4e338; end: 108c4e33b;  */

void FUN_108c4e338(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba5a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c4e33c; end: 108c4e34f;  */

void FUN_108c4e33c(void)

{
  func_0x000108c4e358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4e350; end: 108c4e367;  */

void FUN_108c4e350(void)

{
  return;
}



/* Entry: 108c4e368; end: 108c4e37b;  */

void FUN_108c4e368(void)

{
  func_0x000108c4e384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4e37c; end: 108c4e393;  */

void FUN_108c4e37c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c4e4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c4e394; end: 108c4e3a7;  */

void FUN_108c4e394(void)

{
  func_0x000108c4e3b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4e3a8; end: 108c4e3bf;  */

void FUN_108c4e3a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c4e4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c4e3c0; end: 108c4e3d3;  */

void FUN_108c4e3c0(void)

{
  func_0x000108c4e3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4e3d4; end: 108c4e3eb;  */

void FUN_108c4e3d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c4e4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c4e3ec; end: 108c4e3ff;  */

void FUN_108c4e3ec(void)

{
  func_0x000108c4e408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4e400; end: 108c4e413;  */

void FUN_108c4e400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c4e4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c4e414; end: 108c4e45b;  */

void FUN_108c4e414(long param_1)

{
  func_0x000108c4e51c();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 108c4e45c; end: 108c4e45f;  */

void FUN_108c4e45c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba730;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c4e460; end: 108c4e473;  */

void FUN_108c4e460(void)

{
  func_0x000108c4e47c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4e474; end: 108c4e48b;  */

void FUN_108c4e474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c4e4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c4e48c; end: 108c4e49f;  */

void FUN_108c4e48c(void)

{
  func_0x000108c4e4a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4e4a0; end: 108c4e56b;  */

void FUN_108c4e4a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c4e4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c4e56c; end: 108c4e973;  */

void FUN_108c4e56c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 auStack_320 [4];
  undefined8 uStack_300;
  long lStack_2f8;
  undefined1 auStack_2f0 [32];
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined1 auStack_2c0 [32];
  undefined8 uStack_2a0;
  long lStack_298;
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_238;
  undefined1 auStack_230 [24];
  undefined8 *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined1 auStack_200 [24];
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1d8 [24];
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined8 uStack_198;
  long lStack_190;
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [32];
  undefined8 *puStack_148;
  long alStack_138 [26];
  undefined8 uStack_68;
  
  func_0x000108c58da8();
  uStack_248 = *(undefined8 *)(param_2 + 0x10);
  uStack_250 = *(undefined8 *)(param_2 + 8);
  uStack_68 = extraout_x8;
  if (*(long *)(param_2 + 0x10) != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
  }
  lVar4 = *(long *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uStack_260 = uVar3;
  lStack_258 = lVar4;
  if (*(long *)(param_2 + 0x40) != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c278b8(auStack_278,&UNK_10f50e159);
  func_0x000108c59d74();
  uStack_2a0 = uVar3;
  lStack_298 = lVar4;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10_01 != 0);
  }
  func_0x000108c592ec(auStack_290);
  func_0x000108c59d74();
  uStack_2d0 = uVar3;
  lStack_2c8 = lVar4;
  if (extraout_x8_01 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10_02 != 0);
  }
  func_0x000108c592ec(auStack_2c0);
  func_0x000108c59d74();
  uStack_300 = uVar3;
  lStack_2f8 = lVar4;
  if (extraout_x8_02 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10_03 != 0);
  }
  func_0x000108c592ec(auStack_2f0);
  func_0x000108c59d74();
  uStack_330 = uVar3;
  lStack_328 = lVar4;
  if (extraout_x8_03 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10_04 != 0);
  }
  puVar1 = auStack_320;
  func_0x000108c592ec();
  puStack_218 = (undefined8 *)0x0;
  func_0x000108c59734();
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_SUB_110aba9a8;
  puVar1[2] = lStack_328;
  puVar1[1] = uStack_330;
  uStack_330 = 0;
  lStack_328 = 0;
  func_0x000108c59400();
  puStack_218 = puVar1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar1 = puVar2;
  func_0x000107c3a5c0();
  lStack_208 = lStack_258;
  uStack_210 = uStack_260;
  if (lStack_258 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10_05 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_200,auStack_278);
  lStack_1e0 = lStack_298;
  uStack_1e8 = uStack_2a0;
  if (lStack_298 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10_06 != 0);
  }
  func_0x000108c596e8(auStack_1d8);
  lStack_1b8 = lStack_2c8;
  uStack_1c0 = uStack_2d0;
  if (lStack_2c8 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10_07 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1b0,auStack_2c0);
  lStack_190 = lStack_2f8;
  uStack_198 = uStack_300;
  if (lStack_2f8 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10_08 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_188,auStack_2f0);
  func_0x00010724cbe8(auStack_168,auStack_230);
  puStack_148 = puVar2;
  FUN_108c50a04(alStack_138,&uStack_210);
  FUN_108c5097c(&lStack_238,alStack_138,puVar1);
  FUN_108c5093c(alStack_138);
  FUN_108c5093c(&uStack_210);
  alStack_138[0] = lStack_238;
  if (lStack_238 != 0) {
    do {
      func_0x000108c58a0c();
    } while (extraout_w10_09 != 0);
  }
  FUN_108c4f0a0(param_1,alStack_138);
  func_0x000107c27f9c(alStack_138);
  func_0x000107c27f9c(&lStack_238);
  func_0x000107c27938(auStack_230);
  FUN_108c4e974(&uStack_330);
  func_0x000108c4e990(&uStack_300);
  func_0x000108c4e9ac(&uStack_2d0);
  func_0x000108c4e9c8(&uStack_2a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_278);
  func_0x000108c4cad0(&uStack_260);
  FUN_108c4d75c(&uStack_250);
  func_0x000108c58c00(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27f9c(alStack_138);
    func_0x000107c27f9c(&lStack_238);
    do {
      func_0x000107c27938(auStack_230);
      FUN_108c4e974(&uStack_330);
      func_0x000108c4e990(&uStack_300);
      func_0x000108c4e9ac(&uStack_2d0);
      func_0x000108c4e9c8(&uStack_2a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_278);
      func_0x000108c4cad0(&uStack_260);
      FUN_108c4d75c(&uStack_250);
      func_0x000108c58ce4();
    } while( true );
  }
  return;
}



/* Entry: 108c4e974; end: 108c4ea13;  */

long FUN_108c4e974(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000108c58d40();
  lVar1 = unaff_x19;
  func_0x000108c4d884();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 108c4ea14; end: 108c4ea23;  */

undefined8 FUN_108c4ea14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uStack_38;
  
  uVar1 = *param_1;
  func_0x000108c58f54(uVar1,param_1,param_2);
  do {
    func_0x000108c58914();
    if ((int)uVar1 != 0) {
      func_0x000108c59860();
      FUN_108c5200c();
      func_0x000108c5892c();
      return uVar1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return uVar1;
}



/* Entry: 108c4ea24; end: 108c4eadb;  */

void FUN_108c4ea24(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_c0 [8];
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [48];
  
  func_0x000108c58f28();
  FUN_108c41270(auStack_88);
  func_0x000108c59d10();
  FUN_108c411f8();
  func_0x000107c3a5c0();
  func_0x000108c592f4();
  if (extraout_x8 != 0) {
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
  }
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_b8 = &PTR_FUN_110ab9460;
  func_0x000108c529e4(auStack_60,auStack_c0);
  FUN_108c52058(auStack_90);
  FUN_108c52a30(auStack_60);
  FUN_108c52a30(auStack_c0);
  func_0x000108c59698();
  FUN_108c414b0(auStack_88);
  return;
}



/* Entry: 108c4eadc; end: 108c4eb13;  */

long FUN_108c4eadc(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000108c59bd8();
  lVar1 = unaff_x19;
  func_0x000108c4d884();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 108c4eb14; end: 108c4ed5f;  */

void FUN_108c4eb14(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  undefined1 auStack_c8 [16];
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long alStack_68 [6];
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined8 uStack_28;
  
  lVar3 = param_2;
  func_0x000108c58da8(param_2,param_2,param_3);
  uStack_28 = extraout_x8;
  if (*(long *)(param_2 + 0x18) == 0) {
    uStack_98 = *(undefined8 *)(lVar3 + 0x40);
    uStack_a0 = *(undefined8 *)(lVar3 + 0x38);
    if (*(long *)(lVar3 + 0x40) != 0) {
      do {
        func_0x000108c589fc();
      } while (extraout_w10 != 0);
    }
    func_0x000108c59a84();
    FUN_108c4ed60(param_1,&uStack_a0,&puStack_b8);
    func_0x000108c58fb4();
    func_0x000108c4cad0(&uStack_a0);
  }
  else {
    FUN_108c4e56c(auStack_c8);
    puStack_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    alStack_68[1] = 0;
    alStack_68[2] = 0;
    func_0x000108c595d4();
    FUN_108c40af4(&puStack_b8,alStack_68 + 3);
    func_0x000108c595b4();
    func_0x000108c59628();
    FUN_108c40008(alStack_68);
    FUN_108c40034(alStack_68 + 3,alStack_68[0]);
    unaff_x20 = alStack_68[0];
    alStack_68[0] = 0;
    lStack_30 = unaff_x20;
    puStack_78 = (undefined8 *)0x0;
    lStack_70 = 0;
    puStack_88 = puStack_b8 + 10;
    lStack_80 = CONCAT71(lStack_80._1_7_,1);
    __ZNSt3__15mutex4lockEv();
    puVar1 = puStack_b8;
    FUN_108c42ea8();
    if ((int)puVar1 == 0) {
      func_0x000108c59a7c();
      *puVar1 = &PTR_FUN_110aba868;
      lStack_30 = 0;
      puVar1[2] = unaff_x20;
      lVar3 = puStack_b8[0x13];
      puStack_b8[0x13] = puVar1;
      if (lVar3 != 0) {
        func_0x000108c58a50();
      }
      unaff_x20 = 0;
    }
    else {
      FUN_108c40af4(&puStack_78,&puStack_b8);
    }
    func_0x000107c2798c(&puStack_88);
    if (puStack_78 != (undefined8 *)0x0) {
      puStack_88 = puStack_78;
      lStack_80 = lStack_70;
      if (lStack_70 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_00 != 0);
      }
      FUN_108c4fe10(auStack_38);
      func_0x000108c3ff9c(&puStack_88);
    }
    param_1[1] = alStack_68[4];
    *param_1 = alStack_68[3];
    alStack_68[3] = 0;
    alStack_68[4] = 0;
    func_0x000108c3ff9c(&puStack_78);
    if (unaff_x20 != 0) {
      func_0x000108c58aac();
    }
    plVar2 = alStack_68 + 3;
    func_0x000108c3ff78();
    func_0x000108c59d04();
    if (plVar2 != (long *)0x0) {
      func_0x000108c58be0();
    }
    func_0x000108c595cc();
    func_0x000108c592a0();
  }
  func_0x000108c58c00(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c2798c(&puStack_88);
    func_0x000108c3ff9c(&puStack_78);
    lStack_30 = 0;
    if (unaff_x20 != 0) {
      func_0x000108c58aac();
    }
    plVar2 = alStack_68 + 3;
    func_0x000108c3ff78();
    func_0x000108c59d04();
    if (plVar2 != (long *)0x0) {
      func_0x000108c58be0();
    }
    func_0x000108c595cc();
    func_0x000108c592a0();
    do {
      func_0x000108c58ce4();
    } while( true );
  }
  return;
}



/* Entry: 108c4ed60; end: 108c4edbf;  */

void FUN_108c4ed60(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38);
  func_0x000108c590c8();
  func_0x000108c59854();
  func_0x000108c58d08();
  func_0x000108c58f34();
  func_0x000108c58fb4();
  FUN_108c54594(param_1);
  return;
}



/* Entry: 108c4edc0; end: 108c4f05f;  */

void FUN_108c4edc0(long *param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 extraout_x8;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 **ppuVar5;
  undefined1 auStack_120 [16];
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 auStack_e8 [16];
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [48];
  undefined8 *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined8 **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  long alStack_48 [2];
  undefined1 auStack_38 [8];
  undefined8 **ppuStack_30;
  undefined8 uStack_28;
  
  func_0x000108c58da8(param_2,param_2,param_3);
  uStack_28 = extraout_x8;
  if (*(long *)(param_2 + 0x18) == 0) {
    func_0x000108c5957c();
    func_0x000107c278b8(auStack_b8,&UNK_10f50e1bf);
    func_0x000108c58d08();
    func_0x000108c590a0();
    func_0x000108c58f44();
    ppuVar5 = &puStack_50;
    FUN_108c4f060(&puStack_50);
    puStack_d0 = (undefined8 *)0x0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    FUN_108c4f090(alStack_48,&puStack_d0);
    func_0x000108c59a34();
    puStack_d8 = puStack_50;
    if (puStack_50 != (undefined8 *)0x0) {
      do {
        func_0x000108c58a0c();
      } while (extraout_w10 != 0);
    }
    FUN_108c4f0a0(param_1,&puStack_d8);
    func_0x000107c27f9c(&puStack_d8);
    ppuVar2 = &puStack_50;
    FUN_108c4ff78();
  }
  else {
    FUN_108c4e56c(auStack_e8);
    puStack_d0 = (undefined8 *)0x0;
    uStack_c8 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x000108c595d4();
    FUN_108c40af4(&puStack_d0,&puStack_50);
    func_0x000108c595b4();
    func_0x000108c59628();
    FUN_108c406b8(&ppuStack_68);
    FUN_108c406e4(&puStack_50,ppuStack_68);
    ppuVar5 = ppuStack_68;
    lStack_70 = 0;
    ppuStack_68 = (undefined8 **)0x0;
    ppuStack_30 = ppuVar5;
    puStack_78 = (undefined8 *)0x0;
    puStack_88 = puStack_d0 + 10;
    lStack_80 = CONCAT71(lStack_80._1_7_,1);
    __ZNSt3__15mutex4lockEv();
    puVar1 = puStack_d0;
    FUN_108c42ea8();
    if ((int)puVar1 == 0) {
      func_0x000108c59a7c();
      *puVar1 = &PTR_FUN_110aba8a8;
      ppuStack_30 = (undefined8 **)0x0;
      puVar1[2] = ppuVar5;
      lVar4 = puStack_d0[0x13];
      puStack_d0[0x13] = puVar1;
      if (lVar4 != 0) {
        func_0x000108c58a50();
      }
      ppuVar5 = (undefined8 **)0x0;
    }
    else {
      FUN_108c40af4(&puStack_78,&puStack_d0);
    }
    func_0x000107c2798c(&puStack_88);
    if (puStack_78 != (undefined8 *)0x0) {
      puStack_88 = puStack_78;
      lStack_80 = lStack_70;
      if (lStack_70 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_00 != 0);
      }
      FUN_108c4ff94(auStack_38);
      func_0x000108c3ff9c(&puStack_88);
    }
    param_1[1] = alStack_48[0];
    *param_1 = (long)puStack_50;
    puStack_50 = (undefined8 *)0x0;
    alStack_48[0] = 0;
    ppuVar2 = &puStack_78;
    func_0x000108c3ff9c();
    if (ppuVar5 != (undefined8 **)0x0) {
      func_0x000108c58aac();
    }
    func_0x000108c595b4();
    func_0x000108c59d04();
    if (ppuVar2 != (undefined8 **)0x0) {
      func_0x000108c58be0();
    }
    func_0x000108c59248();
    func_0x000108c592a0();
  }
  func_0x000108c58c00(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c2798c(&puStack_88);
    ppuVar3 = &puStack_78;
    func_0x000108c3ff9c();
    ppuStack_30 = (undefined8 **)0x0;
    if (ppuVar5 != (undefined8 **)0x0) {
      func_0x000108c58aac();
    }
    func_0x000108c595b4();
    func_0x000108c59d04();
    if (ppuVar3 != (undefined8 **)0x0) {
      func_0x000108c58be0();
    }
    func_0x000108c59248();
    func_0x000108c592a0();
    func_0x000108c58ce4();
    pcStack_f8 = FUN_108c4f060;
    ppuStack_110 = ppuVar5;
    ppuStack_108 = ppuVar2;
    puStack_100 = &stack0xfffffffffffffff0;
    FUN_108c511b0(auStack_120);
    func_0x000108c58c2c();
    func_0x000108c58e60();
    func_0x000108c59acc();
    return;
  }
  return;
}



/* Entry: 108c4f060; end: 108c4f08f;  */

void FUN_108c4f060(void)

{
  undefined1 auStack_30 [16];
  
  FUN_108c511b0(auStack_30);
  func_0x000108c58c2c();
  func_0x000108c58e60();
  func_0x000108c59acc();
  return;
}



/* Entry: 108c4f090; end: 108c4f09f;  */

undefined8 FUN_108c4f090(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uStack_38;
  
  uVar1 = *param_1;
  func_0x000108c58f54(uVar1,param_1,param_2);
  do {
    func_0x000108c58914();
    if ((int)uVar1 != 0) {
      func_0x000108c59860();
      FUN_108c5129c();
      func_0x000108c5892c();
      return uVar1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return uVar1;
}



/* Entry: 108c4f0a0; end: 108c4f127;  */

void FUN_108c4f0a0(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [40];
  
  func_0x000108c59800();
  FUN_108c4075c();
  func_0x000108c59d10();
  FUN_108c406e4();
  func_0x000107c3a5c0();
  func_0x000108c592f4();
  if (extraout_x8 != 0) {
    do {
      func_0x000108c58a0c();
    } while (extraout_w10 != 0);
  }
  func_0x000108c597a0();
  FUN_108c54ff0();
  func_0x000108c59444(auStack_60);
  func_0x000108c54ca4();
  FUN_108c55020(auStack_90);
  func_0x000108c59698();
  FUN_108c40998(auStack_58);
  return;
}



/* Entry: 108c4f128; end: 108c4f837;  */

undefined8 *****
FUN_108c4f128(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined8 *****pppppuVar8;
  undefined8 *puVar9;
  undefined8 ***pppuVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined8 extraout_x8;
  undefined8 ***pppuVar15;
  undefined8 extraout_x8_00;
  ulong uVar16;
  undefined8 *****extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 *****extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 ****ppppuVar17;
  code *extraout_x8_07;
  undefined8 *****pppppuVar18;
  undefined8 *****extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  undefined8 *****extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *plVar19;
  long *extraout_x10_02;
  undefined8 *****extraout_x11;
  undefined8 *****extraout_x11_00;
  undefined8 *****extraout_x11_01;
  undefined8 *****extraout_x11_02;
  long extraout_x12;
  long extraout_x12_00;
  long *plVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****pppppuVar22;
  long *unaff_x21;
  undefined8 *****pppppuVar23;
  undefined8 *****pppppuVar24;
  undefined8 *****pppppuVar25;
  undefined8 *****pppppuVar26;
  undefined8 ****ppppuVar27;
  undefined1 auStack_3f8 [24];
  undefined8 ***pppuStack_3e0;
  undefined8 ***pppuStack_3d8;
  undefined8 ****ppppuStack_3d0;
  undefined8 auStack_3c8 [3];
  long lStack_3b0;
  long lStack_3a8;
  undefined8 ***pppuStack_3a0;
  undefined8 ****ppppuStack_398;
  undefined8 uStack_390;
  undefined8 *puStack_388;
  undefined4 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_310 [16];
  undefined8 ***pppuStack_300;
  undefined8 *puStack_2f8;
  undefined8 ***pppuStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 auStack_2a0 [4];
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined1 auStack_250 [24];
  undefined8 ***pppuStack_238;
  long lStack_230;
  undefined8 ***pppuStack_220;
  long lStack_218;
  undefined8 ***pppuStack_210;
  undefined8 *puStack_208;
  undefined8 ***pppuStack_1f8;
  undefined8 ***pppuStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1d8;
  undefined8 ***pppuStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  long lStack_188;
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 auStack_140 [32];
  long *plStack_120;
  undefined8 ***pppuStack_110;
  undefined8 *puStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_58;
  
  func_0x000108c58da8();
  uStack_58 = extraout_x8;
  if (*(long *)(param_2 + 0x18) == 0) {
    func_0x000108c59c78();
    func_0x000107c278b8(auStack_2c8);
    func_0x000107c278b8(auStack_2e0,&UNK_10f50e1bf);
    puVar14 = auStack_2e0;
    func_0x000108c58d08();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2e0);
    func_0x000108c593cc();
    func_0x000108c591c4();
    puStack_108 = (undefined8 **)0x0;
    pppuStack_110 = (undefined8 ****)0x0;
    uStack_f8 = 0;
    pppuStack_100 = (undefined8 ****)0x0;
    uStack_f0 = 0x3f800000;
    FUN_108c59218();
    iVar12 = (int)puVar14;
    pppuStack_2e8 = pppuStack_1d0;
    if ((undefined8 ****)pppuStack_1d0 != (undefined8 ****)0x0) {
      do {
        func_0x000108c58a0c();
        iVar12 = (int)puVar14;
      } while (extraout_w10_01 != 0);
    }
    FUN_108c4ea24(param_1,&pppuStack_2e8);
    pppppuVar8 = (undefined8 *****)&pppuStack_2e8;
    func_0x000107c27f9c();
    func_0x000108c594b8();
  }
  else {
    puStack_2f8 = *(undefined8 **)(param_2 + 0x10);
    pppuStack_300 = *(undefined8 ****)(param_2 + 8);
    if (*(long *)(param_2 + 0x10) != 0) {
      do {
        func_0x000108c589fc();
      } while (extraout_w10 != 0);
    }
    in_ZR = *param_3 == param_3[1];
    if ((bool)in_ZR) {
      func_0x000108c591c4();
      puStack_108 = (undefined8 *)0x0;
      pppuStack_110 = (undefined8 ***)0x0;
      uStack_f8 = 0;
      pppuStack_100 = (undefined8 ***)0x0;
      uStack_f0 = 0x3f800000;
      FUN_108c59218();
      pppuStack_110 = pppuStack_1d0;
      if ((undefined8 ****)pppuStack_1d0 != (undefined8 ****)0x0) {
        do {
          func_0x000108c58a0c();
        } while (extraout_w10_02 != 0);
      }
      func_0x000108c592b0();
LAB_108c4f288:
      func_0x000108c594e0();
      func_0x000108c594b8();
    }
    else {
      uVar16 = (param_3[1] - *param_3) / 0x18;
      in_ZR = uVar16 == 0x1f;
      if (0x1e < uVar16) {
        func_0x000108c591c4();
        puStack_108 = (undefined8 *)0x0;
        pppuStack_110 = (undefined8 ***)0x0;
        uStack_f8 = 0;
        pppuStack_100 = (undefined8 ***)0x0;
        uStack_f0 = 0x3f800000;
        FUN_108c59218();
        pppuStack_110 = pppuStack_1d0;
        if ((undefined8 ****)pppuStack_1d0 != (undefined8 ****)0x0) {
          do {
            func_0x000108c58a0c();
          } while (extraout_w10_00 != 0);
        }
        func_0x000108c592b0();
        goto LAB_108c4f288;
      }
      puStack_208 = *(undefined8 **)(param_2 + 0x10);
      pppuStack_210 = *(undefined8 ****)(param_2 + 8);
      if (*(long *)(param_2 + 0x10) != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_03 != 0);
      }
      lStack_218 = *(long *)(param_2 + 0x40);
      pppuStack_220 = *(undefined8 ****)(param_2 + 0x38);
      if (*(long *)(param_2 + 0x40) != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_04 != 0);
      }
      func_0x000108c59c78();
      func_0x000107c278b8(&pppuStack_238);
      lStack_258 = (long)puStack_208;
      uStack_260 = pppuStack_210;
      if (puStack_208 != (undefined8 *)0x0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_05 != 0);
      }
      func_0x000108c59bac(auStack_250);
      uStack_270 = pppuStack_210;
      lStack_268 = (long)puStack_208;
      if (puStack_208 == (undefined8 *)0x0) {
        lStack_278 = 0;
      }
      else {
        plVar20 = (long *)((long)puStack_208 + 0x10);
        do {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar7) {
            *plVar20 = *plVar20 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lStack_278 = (long)puStack_208;
        do {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar7) {
            *plVar20 = *plVar20 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar7) {
            *plVar20 = *plVar20 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_2b0 = pppuStack_210;
      puVar9 = auStack_2a0;
      lStack_2a8 = lStack_278;
      uStack_280 = uStack_2b0;
      func_0x000108c59bac();
      puStack_1d8 = (undefined8 *)0x0;
      func_0x000108c59734();
      *puVar9 = &PTR_SUB_110abaae8;
      puVar9[1] = uStack_2b0;
      puVar9[2] = lStack_2a8;
      uStack_2b0 = 0;
      lStack_2a8 = 0;
      plVar20 = puVar9 + 3;
      func_0x000107c2795c(plVar20,auStack_2a0);
      puStack_1d8 = puVar9;
      __ZNSt3__16chrono12steady_clock3nowEv();
      unaff_x21 = plVar20;
      func_0x000107c3a5c0();
      lStack_1c8 = lStack_218;
      pppuStack_1d0 = pppuStack_220;
      if (lStack_218 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_06 != 0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_1c0,&pppuStack_238);
      func_0x000108c59bac(auStack_1a8);
      lStack_188 = lStack_258;
      uStack_190 = uStack_260;
      if (lStack_258 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_07 != 0);
      }
      func_0x000107c2795c(auStack_180,auStack_250);
      lStack_160 = lStack_268;
      uStack_168 = uStack_270;
      if (lStack_268 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_08 != 0);
      }
      uStack_158 = uStack_280;
      lStack_150 = lStack_278;
      if (lStack_278 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_09 != 0);
      }
      func_0x00010724cbe8(auStack_140,&pppuStack_1f0);
      plStack_120 = plVar20;
      FUN_108c52d10(&pppuStack_110,&pppuStack_1d0);
      FUN_108c52c8c(&pppuStack_1f8);
      FUN_108c52c44(&pppuStack_110);
      FUN_108c52c44(&pppuStack_1d0);
      pppuStack_110 = pppuStack_1f8;
      if ((undefined8 ****)pppuStack_1f8 != (undefined8 ****)0x0) {
        do {
          func_0x000108c58a0c();
        } while (extraout_w10_10 != 0);
      }
      func_0x000108c592b0();
      func_0x000108c594e0();
      func_0x000107c27f9c(&pppuStack_1f8);
      func_0x000107c27938(&pppuStack_1f0);
      FUN_108c4eadc(&uStack_2b0);
      func_0x000108c59b10();
      FUN_108c4d75c(&uStack_270);
      func_0x000108c4eaf8(&uStack_260);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_238);
      func_0x000108c59be4();
      func_0x000108c596b8();
    }
    iVar12 = (int)param_4;
    puStack_208 = puStack_2f8;
    pppuStack_210 = pppuStack_300;
    if ((undefined8 **)puStack_2f8 != (undefined8 **)0x0) {
      do {
        func_0x000108c589fc();
        iVar12 = (int)param_4;
      } while (extraout_w10_11 != 0);
    }
    pppuStack_1d0 = (undefined8 ****)0x0;
    lStack_1c8 = 0;
    uStack_260 = 0;
    lStack_258 = 0;
    FUN_108c415e8(&pppuStack_110,auStack_310,&uStack_260);
    FUN_108c41610(&pppuStack_1d0,&pppuStack_110);
    func_0x000108c3ffc0(&pppuStack_110);
    func_0x000108c3ffc0(&uStack_260);
    FUN_108c411cc(&pppuStack_220);
    FUN_108c411f8(&uStack_2b0,pppuStack_220);
    pppuStack_100 = pppuStack_220;
    puStack_108 = puStack_208;
    pppuStack_110 = pppuStack_210;
    pppuStack_210 = (undefined8 ***)0x0;
    puStack_208 = (undefined8 *)0x0;
    pppuStack_220 = (undefined8 ***)0x0;
    pppuStack_1f0 = (undefined8 ****)0x0;
    lStack_1e8 = 0;
    pppuStack_238 = pppuStack_1d0 + 0xc;
    lStack_230 = CONCAT71(lStack_230._1_7_,1);
    __ZNSt3__15mutex4lockEv();
    ppppuVar27 = (undefined8 ****)pppuStack_1d0;
    func_0x000108c43390();
    if ((int)ppppuVar27 == 0) {
      pppuVar10 = (undefined8 ***)0x20;
      __Znwm();
      pppuVar15 = pppuStack_100;
      *pppuVar10 = (undefined8 **)&PTR_SUB_110aba8e8;
      pppuVar10[2] = (undefined8 **)puStack_108;
      pppuVar10[1] = pppuStack_110;
      pppuStack_110 = (undefined8 ****)0x0;
      puStack_108 = (undefined8 **)0x0;
      pppuStack_100 = (undefined8 ****)0x0;
      pppuVar10[3] = pppuVar15;
      pppuVar15 = (undefined8 ***)pppuStack_1d0[0x15];
      pppuStack_1d0[0x15] = pppuVar10;
      if (pppuVar15 != (undefined8 ***)0x0) {
        func_0x000108c58a50();
      }
    }
    else {
      FUN_108c41610(&pppuStack_1f0,&pppuStack_1d0);
    }
    func_0x000107c2798c(&pppuStack_238);
    if ((undefined8 ****)pppuStack_1f0 != (undefined8 ****)0x0) {
      pppuStack_238 = pppuStack_1f0;
      lStack_230 = lStack_1e8;
      lVar11 = lStack_1e8;
      if (lStack_1e8 != 0) {
        do {
          func_0x000108c589fc();
        } while (extraout_w10_12 != 0);
      }
      iVar12 = (int)lVar11;
      FUN_108c500f8(&pppuStack_110);
      func_0x000108c3ffc0(&pppuStack_238);
    }
    param_1[1] = lStack_2a8;
    *param_1 = uStack_2b0;
    uStack_2b0 = 0;
    lStack_2a8 = 0;
    func_0x000108c3ffc0(&pppuStack_1f0);
    FUN_108c502bc(&pppuStack_110);
    func_0x000108c3ffc0(&uStack_2b0);
    pppuVar15 = pppuStack_220;
    pppuStack_220 = (undefined8 ****)0x0;
    if (pppuVar15 != (undefined8 ***)0x0) {
      func_0x000108c58be0();
    }
    func_0x000108c3ffc0(&pppuStack_1d0);
    func_0x000108c596b8();
    func_0x000108c596a8();
    pppppuVar8 = (undefined8 *****)&pppuStack_300;
    FUN_108c4d75c();
  }
  func_0x000108c58c00(uStack_58);
  if ((bool)in_ZR) {
    return pppppuVar8;
  }
  ___stack_chk_fail();
  func_0x000108c594e0();
  func_0x000107c27f9c(&pppuStack_1f8);
  func_0x000107c27938(&pppuStack_1f0);
  FUN_108c4eadc(&uStack_2b0);
  func_0x000108c59b10();
  FUN_108c4d75c(&uStack_270);
  func_0x000108c4eaf8(&uStack_260);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_238);
  func_0x000108c59be4();
  func_0x000108c596b8();
  ppppuVar27 = &pppuStack_300;
  FUN_108c4d75c();
  func_0x000108c58ce4();
  pppuVar15 = ppppuVar27[9];
  if (pppuVar15 == (undefined8 ***)0x0) {
    pppuVar15 = ppppuVar27[7];
    func_0x000108c59a84();
    func_0x000108c590c8();
    func_0x000108c59854();
    func_0x000108c58e20(pppuVar15);
    func_0x000108c58f34();
    func_0x000108c58fb4();
    return (undefined8 *****)0xffffffffffffffff;
  }
  func_0x000108c673cc(pppuVar15);
  uStack_378 = extraout_x8_00;
  if (*param_5 == 0) {
LAB_108c635bc:
    pppppuVar23 = (undefined8 *****)0xffffffffffffffff;
LAB_108c63d38:
    func_0x000108c67248(uStack_378);
    if ((bool)in_ZR) {
      return pppppuVar23;
    }
    ___stack_chk_fail();
  }
  else {
    iVar13 = iVar12;
    func_0x000108c67544();
    pppuStack_3a0 = (undefined8 ***)CONCAT44(pppuStack_3a0._4_4_,iVar13);
    __ZNSt3__15mutex4lockEv(pppuVar15 + 0x30);
    pppppuVar23 = pppppuVar8 + 0x38;
    FUN_108c64c74(pppppuVar23,&pppuStack_3a0);
    func_0x000108c67370();
    if (pppppuVar23 != (undefined8 *****)0x0) goto LAB_108c635bc;
    __ZNSt3__15mutex4lockEv(pppppuVar8 + 7);
    lVar1 = unaff_x21[1];
    for (lVar11 = *unaff_x21; uVar6 = lVar11 - lVar1 < 0, lVar11 != lVar1; lVar11 = lVar11 + 0x18) {
      pppppuVar23 = pppppuVar8 + 0xf;
      FUN_108c6461c(pppppuVar23,lVar11);
      if (pppppuVar23 == (undefined8 *****)0x0) {
        ppppuStack_398 = pppppuVar8[6];
        pppuStack_3a0 = (undefined8 ***)((ulong)pppuStack_3a0 & 0xffffffff00000000);
        FUN_108c63e28(pppppuVar8 + 0xf,lVar11,&pppuStack_3a0);
      }
    }
    func_0x000108c6732c();
    pppppuVar24 = &ppppuStack_3d0;
    puVar9 = auStack_3c8;
    ppppuStack_3d0 = pppppuVar8;
    func_0x000107c2795c(puVar9,unaff_x21);
    lStack_3a8 = param_5[1];
    lStack_3b0 = *param_5;
    if (param_5[1] != 0) {
      do {
        func_0x000108c670d0();
      } while (extraout_w10_13 != 0);
    }
    puStack_388 = (undefined8 *)0x0;
    func_0x000108c67300();
    *puVar9 = &PTR_FUN_110abb140;
    puVar9[1] = ppppuStack_3d0;
    func_0x000107c2795c(puVar9 + 2,auStack_3c8);
    puVar9[6] = lStack_3a8;
    puVar9[5] = lStack_3b0;
    if (lStack_3a8 != 0) {
      do {
        func_0x000108c670d0();
      } while (extraout_w10_14 != 0);
    }
    pppppuVar23 = pppppuVar8 + 0x14;
    puStack_388 = puVar9;
    FUN_108c4cc88(pppppuVar23,&pppuStack_3a0);
    func_0x000108c4cdb8(&pppuStack_3a0);
    FUN_108c63e40(&ppppuStack_3d0);
    __ZNSt3__15mutex4lockEv(pppppuVar8 + 0x30);
    pppppuVar25 = (undefined8 *****)(long)iVar12;
    pppppuVar26 = (undefined8 *****)pppppuVar8[0x39];
    if (pppppuVar26 != (undefined8 *****)0x0) {
      uVar16 = (long)pppppuVar26 - 1;
      if (((ulong)pppppuVar26 & uVar16) == 0) {
        pppppuVar24 = (undefined8 *****)(uVar16 & (ulong)pppppuVar25);
        uVar6 = false;
      }
      else {
        uVar6 = (long)pppppuVar26 - (long)pppppuVar25 < 0;
        pppppuVar24 = pppppuVar25;
        if (pppppuVar26 <= pppppuVar25) {
          uVar3 = 0;
          if (pppppuVar26 != (undefined8 *****)0x0) {
            uVar3 = (ulong)pppppuVar25 / (ulong)pppppuVar26;
          }
          pppppuVar24 = (undefined8 *****)((long)pppppuVar25 - uVar3 * (long)pppppuVar26);
        }
      }
      ppppuVar27 = (undefined8 ****)pppppuVar8[0x38][(long)pppppuVar24];
      if (ppppuVar27 != (undefined8 ****)0x0) {
        do {
          while( true ) {
            ppppuVar27 = (undefined8 ****)*ppppuVar27;
            if (ppppuVar27 == (undefined8 ****)0x0) goto LAB_108c63740;
            pppppuVar18 = (undefined8 *****)ppppuVar27[1];
            if (pppppuVar18 != pppppuVar25) break;
            uVar6 = *(int *)(ppppuVar27 + 2) - iVar12 < 0;
            if (*(int *)(ppppuVar27 + 2) == iVar12) goto LAB_108c639a4;
          }
          if (((ulong)pppppuVar26 & uVar16) == 0) {
            pppppuVar18 = (undefined8 *****)((ulong)pppppuVar18 & uVar16);
          }
          else if (pppppuVar26 <= pppppuVar18) {
            uVar3 = 0;
            if (pppppuVar26 != (undefined8 *****)0x0) {
              uVar3 = (ulong)pppppuVar18 / (ulong)pppppuVar26;
            }
            pppppuVar18 = (undefined8 *****)((long)pppppuVar18 - uVar3 * (long)pppppuVar26);
          }
          uVar6 = (long)pppppuVar18 - (long)pppppuVar24 < 0;
        } while (pppppuVar18 == pppppuVar24);
      }
    }
LAB_108c63740:
    ppppuVar27 = (undefined8 ****)0x20;
    __Znwm();
    pppppuVar18 = pppppuVar8 + 0x3a;
    uStack_390 = 1;
    *ppppuVar27 = (undefined8 ***)0x0;
    ppppuVar27[1] = pppppuVar25;
    *(int *)(ppppuVar27 + 2) = iVar12;
    ppppuVar27[3] = (undefined8 ***)0x0;
    pppuStack_3a0 = ppppuVar27;
    ppppuStack_398 = pppppuVar18;
    if ((pppppuVar26 != (undefined8 *****)0x0) &&
       (func_0x000108c673a0((float)((long)pppppuVar8[0x3b] + 1),*(undefined4 *)(pppppuVar8 + 0x3c),
                            (float)pppppuVar26), !(bool)uVar6)) {
LAB_108c63928:
      ppppuVar27 = (undefined8 ****)pppuStack_3a0;
      ppppuVar17 = pppppuVar8[0x38];
      pppuVar15 = ppppuVar17[(long)pppppuVar24];
      if (pppuVar15 == (undefined8 ***)0x0) {
        *pppuStack_3a0 = *pppppuVar18;
        *pppppuVar18 = (undefined8 ****)pppuStack_3a0;
        ppppuVar17[(long)pppppuVar24] = pppppuVar18;
        if ((undefined8 ***)*pppuStack_3a0 != (undefined8 ***)0x0) {
          pppppuVar25 = (undefined8 *****)(*pppuStack_3a0)[1];
          if (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) == 0) {
            pppppuVar25 = (undefined8 *****)((ulong)pppppuVar25 & (long)pppppuVar26 - 1U);
            uVar6 = false;
          }
          else {
            uVar6 = (long)pppppuVar25 - (long)pppppuVar26 < 0;
            if (pppppuVar26 <= pppppuVar25) {
              uVar16 = 0;
              if (pppppuVar26 != (undefined8 *****)0x0) {
                uVar16 = (ulong)pppppuVar25 / (ulong)pppppuVar26;
              }
              pppppuVar25 = (undefined8 *****)((long)pppppuVar25 - uVar16 * (long)pppppuVar26);
            }
          }
          ppppuVar17[(long)pppppuVar25] = pppuStack_3a0;
        }
      }
      else {
        *pppuStack_3a0 = *pppuVar15;
        *pppuVar15 = pppuStack_3a0;
      }
      pppuStack_3a0 = (undefined8 ****)0x0;
      pppppuVar8[0x3b] = (undefined8 ****)((long)pppppuVar8[0x3b] + 1);
      FUN_108c64e34(&pppuStack_3a0);
LAB_108c639a4:
      ppppuVar27[3] = pppppuVar23;
      pppppuVar26 = (undefined8 *****)pppppuVar8[0x3e];
      if (pppppuVar26 != (undefined8 *****)0x0) {
        uVar16 = (long)pppppuVar26 - 1;
        if (((ulong)pppppuVar26 & uVar16) == 0) {
          pppppuVar24 = (undefined8 *****)(uVar16 & (ulong)pppppuVar23);
          uVar6 = false;
        }
        else {
          uVar6 = (long)pppppuVar23 - (long)pppppuVar26 < 0;
          pppppuVar24 = pppppuVar23;
          if (pppppuVar26 <= pppppuVar23) {
            uVar3 = 0;
            if (pppppuVar26 != (undefined8 *****)0x0) {
              uVar3 = (ulong)pppppuVar23 / (ulong)pppppuVar26;
            }
            pppppuVar24 = (undefined8 *****)((long)pppppuVar23 - uVar3 * (long)pppppuVar26);
          }
        }
        ppppuVar27 = (undefined8 ****)pppppuVar8[0x3d][(long)pppppuVar24];
        if (ppppuVar27 != (undefined8 ****)0x0) {
          do {
            while( true ) {
              ppppuVar27 = (undefined8 ****)*ppppuVar27;
              if (ppppuVar27 == (undefined8 ****)0x0) goto LAB_108c63a34;
              pppppuVar25 = (undefined8 *****)ppppuVar27[1];
              if (pppppuVar25 != pppppuVar23) break;
              uVar6 = (long)ppppuVar27[2] - (long)pppppuVar23 < 0;
              if ((undefined8 *****)ppppuVar27[2] == pppppuVar23) goto LAB_108c63c98;
            }
            if (((ulong)pppppuVar26 & uVar16) == 0) {
              pppppuVar25 = (undefined8 *****)((ulong)pppppuVar25 & uVar16);
            }
            else if (pppppuVar26 <= pppppuVar25) {
              uVar3 = 0;
              if (pppppuVar26 != (undefined8 *****)0x0) {
                uVar3 = (ulong)pppppuVar25 / (ulong)pppppuVar26;
              }
              pppppuVar25 = (undefined8 *****)((long)pppppuVar25 - uVar3 * (long)pppppuVar26);
            }
            uVar6 = (long)pppppuVar25 - (long)pppppuVar24 < 0;
          } while (pppppuVar25 == pppppuVar24);
        }
      }
LAB_108c63a34:
      ppppuVar27 = (undefined8 ****)0x20;
      __Znwm();
      pppppuVar25 = pppppuVar8 + 0x3f;
      uStack_390 = 1;
      *ppppuVar27 = (undefined8 ***)0x0;
      ppppuVar27[1] = pppppuVar23;
      ppppuVar27[2] = pppppuVar23;
      *(undefined4 *)(ppppuVar27 + 3) = 0;
      pppuStack_3a0 = ppppuVar27;
      ppppuStack_398 = pppppuVar25;
      if ((pppppuVar26 == (undefined8 *****)0x0) ||
         (func_0x000108c673a0((float)((long)pppppuVar8[0x40] + 1),*(undefined4 *)(pppppuVar8 + 0x41)
                              ,(float)pppppuVar26), (bool)uVar6)) {
        bVar5 = (undefined8 *****)0x2 < pppppuVar26;
        bVar7 = pppppuVar26 == (undefined8 *****)0x3;
        func_0x000108c670e0((long)pppppuVar26 << 1);
        pppppuVar24 = extraout_x8_04;
        if (!bVar5 || bVar7) {
          pppppuVar24 = extraout_x9_02;
        }
        if ((long)pppppuVar24 - 1U == 0) {
          pppppuVar24 = (undefined8 *****)0x2;
        }
        else if (((ulong)pppppuVar24 & (long)pppppuVar24 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          pppppuVar26 = (undefined8 *****)pppppuVar8[0x3e];
        }
        if (pppppuVar26 < pppppuVar24) {
LAB_108c63acc:
          if ((ulong)pppppuVar24 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_108c63d78;
          }
          lVar11 = (long)pppppuVar24 << 3;
          __Znwm(lVar11);
          func_0x000108c66494(pppppuVar8 + 0x3d,lVar11);
          pppppuVar8[0x3e] = pppppuVar24;
          ppppuVar27 = pppppuVar8[0x3d];
          for (pppppuVar26 = (undefined8 *****)0x0; bVar7 = pppppuVar26 <= pppppuVar24,
              pppppuVar24 != pppppuVar26; pppppuVar26 = (undefined8 *****)((long)pppppuVar26 + 1)) {
            ppppuVar27[(long)pppppuVar26] = (undefined8 ***)0x0;
          }
          pppppuVar26 = pppppuVar24;
          if (*pppppuVar25 != (undefined8 ****)0x0) {
            func_0x000108c67530();
            pppppuVar18 = extraout_x11_01;
            if (bVar7) {
              pppppuVar18 = (undefined8 *****)
                            ((long)extraout_x11_01 - extraout_x12_00 * (long)pppppuVar24);
            }
            if (((ulong)pppppuVar24 & extraout_x9_03) == 0) {
              pppppuVar18 = (undefined8 *****)((ulong)extraout_x11_01 & extraout_x9_03);
            }
            *(undefined8 ******)(extraout_x8_05 + (long)pppppuVar18 * 8) = pppppuVar25;
            lVar11 = extraout_x8_05;
            uVar16 = extraout_x9_03;
            plVar20 = extraout_x10_01;
            while (plVar19 = plVar20, plVar20 = (long *)*plVar19, plVar20 != (long *)0x0) {
              pppppuVar22 = (undefined8 *****)plVar20[1];
              if (((ulong)pppppuVar24 & uVar16) == 0) {
                pppppuVar22 = (undefined8 *****)((ulong)pppppuVar22 & uVar16);
              }
              else if (pppppuVar24 <= pppppuVar22) {
                uVar3 = 0;
                if (pppppuVar24 != (undefined8 *****)0x0) {
                  uVar3 = (ulong)pppppuVar22 / (ulong)pppppuVar24;
                }
                pppppuVar22 = (undefined8 *****)((long)pppppuVar22 - uVar3 * (long)pppppuVar24);
              }
              if (pppppuVar22 != pppppuVar18) {
                if (*(long *)(lVar11 + (long)pppppuVar22 * 8) == 0) {
                  *(long **)(lVar11 + (long)pppppuVar22 * 8) = plVar19;
                  pppppuVar18 = pppppuVar22;
                }
                else {
                  func_0x000108c67344();
                  lVar11 = extraout_x8_06;
                  uVar16 = extraout_x9_04;
                  plVar20 = extraout_x10_02;
                  pppppuVar18 = extraout_x11_02;
                }
              }
            }
          }
        }
        else if (pppppuVar24 < pppppuVar26) {
          pppppuVar18 = (undefined8 *****)
                        (long)((float)pppppuVar8[0x40] / *(float *)(pppppuVar8 + 0x41));
          if ((pppppuVar26 < (undefined8 *****)0x3) ||
             (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x000108c6713c();
          }
          if (pppppuVar24 <= pppppuVar18) {
            pppppuVar24 = pppppuVar18;
          }
          if (pppppuVar24 < pppppuVar26) {
            if (pppppuVar24 != (undefined8 *****)0x0) goto LAB_108c63acc;
            func_0x000108c66494(pppppuVar8 + 0x3d,0);
            pppppuVar8[0x3e] = (undefined8 ****)0x0;
            pppppuVar26 = (undefined8 *****)0x0;
          }
          else {
            pppppuVar26 = (undefined8 *****)pppppuVar8[0x3e];
          }
        }
        if (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) == 0) {
          pppppuVar24 = (undefined8 *****)((long)pppppuVar26 - 1U & (ulong)pppppuVar23);
        }
        else {
          pppppuVar24 = pppppuVar23;
          if (pppppuVar26 <= pppppuVar23) {
            uVar16 = 0;
            if (pppppuVar26 != (undefined8 *****)0x0) {
              uVar16 = (ulong)pppppuVar23 / (ulong)pppppuVar26;
            }
            pppppuVar24 = (undefined8 *****)((long)pppppuVar23 - uVar16 * (long)pppppuVar26);
          }
        }
      }
      ppppuVar27 = (undefined8 ****)pppuStack_3a0;
      ppppuVar17 = pppppuVar8[0x3d];
      pppuVar15 = ppppuVar17[(long)pppppuVar24];
      if (pppuVar15 == (undefined8 ***)0x0) {
        *pppuStack_3a0 = *pppppuVar25;
        *pppppuVar25 = (undefined8 ****)pppuStack_3a0;
        ppppuVar17[(long)pppppuVar24] = pppppuVar25;
        if ((undefined8 ***)*pppuStack_3a0 != (undefined8 ***)0x0) {
          pppppuVar24 = (undefined8 *****)(*pppuStack_3a0)[1];
          if (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) == 0) {
            pppppuVar24 = (undefined8 *****)((ulong)pppppuVar24 & (long)pppppuVar26 - 1U);
          }
          else if (pppppuVar26 <= pppppuVar24) {
            uVar16 = 0;
            if (pppppuVar26 != (undefined8 *****)0x0) {
              uVar16 = (ulong)pppppuVar24 / (ulong)pppppuVar26;
            }
            pppppuVar24 = (undefined8 *****)((long)pppppuVar24 - uVar16 * (long)pppppuVar26);
          }
          ppppuVar17[(long)pppppuVar24] = pppuStack_3a0;
        }
      }
      else {
        *pppuStack_3a0 = *pppuVar15;
        *pppuVar15 = pppuStack_3a0;
      }
      pppuStack_3a0 = (undefined8 ****)0x0;
      pppppuVar8[0x40] = (undefined8 ****)((long)pppppuVar8[0x40] + 1);
      FUN_108c64f94(&pppuStack_3a0);
LAB_108c63c98:
      *(int *)(ppppuVar27 + 3) = iVar12;
      func_0x000108c67370();
      ppppuStack_398 = (undefined8 *****)0x0;
      pppuStack_3a0 = (undefined8 ****)0x0;
      puStack_388 = (undefined8 *)0x0;
      uStack_390 = 0;
      uStack_380 = 0x3f800000;
      __ZNSt3__15mutex4lockEv(pppppuVar8 + 7);
      bVar7 = false;
      lVar1 = unaff_x21[1];
      for (lVar11 = *unaff_x21; in_ZR = lVar11 == lVar1, !(bool)in_ZR; lVar11 = lVar11 + 0x18) {
        pppppuVar24 = pppppuVar8 + 0xf;
        FUN_108c6461c(pppppuVar24,lVar11);
        if (pppppuVar24 != (undefined8 *****)0x0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_3f8,lVar11);
          pppuStack_3d8 = pppppuVar24[6];
          pppuStack_3e0 = pppppuVar24[5];
          func_0x000108c67440(&pppuStack_3a0);
          func_0x000108c671e8();
          bVar7 = (bool)(*(int *)(pppppuVar24 + 5) != 0 | bVar7);
        }
      }
      func_0x000108c6732c();
      if (bVar7) {
        func_0x000108c67518(*param_5);
        (*extraout_x8_07)();
      }
      func_0x000108c3f498(&pppuStack_3a0);
      goto LAB_108c63d38;
    }
    bVar5 = (undefined8 *****)0x2 < pppppuVar26;
    bVar7 = pppppuVar26 == (undefined8 *****)0x3;
    func_0x000108c670e0((long)pppppuVar26 << 1);
    pppppuVar24 = extraout_x8_01;
    if (!bVar5 || bVar7) {
      pppppuVar24 = extraout_x9;
    }
    if ((long)pppppuVar24 - 1U == 0) {
      pppppuVar24 = (undefined8 *****)0x2;
    }
    else if (((ulong)pppppuVar24 & (long)pppppuVar24 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      pppppuVar26 = (undefined8 *****)pppppuVar8[0x39];
    }
    if (pppppuVar24 <= pppppuVar26) {
      if (pppppuVar24 < pppppuVar26) {
        pppppuVar22 = (undefined8 *****)
                      (long)((float)pppppuVar8[0x3b] / *(float *)(pppppuVar8 + 0x3c));
        if ((pppppuVar26 < (undefined8 *****)0x3) ||
           (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x000108c6713c();
        }
        if (pppppuVar24 <= pppppuVar22) {
          pppppuVar24 = pppppuVar22;
        }
        if (pppppuVar24 < pppppuVar26) {
          if (pppppuVar24 != (undefined8 *****)0x0) goto LAB_108c637d8;
          func_0x000108c6647c(pppppuVar8 + 0x38,0);
          pppppuVar8[0x39] = (undefined8 ****)0x0;
          pppppuVar26 = (undefined8 *****)0x0;
        }
        else {
          pppppuVar26 = (undefined8 *****)pppppuVar8[0x39];
        }
      }
LAB_108c638fc:
      if (((ulong)pppppuVar26 & (long)pppppuVar26 - 1U) == 0) {
        uVar6 = 0;
        pppppuVar24 = (undefined8 *****)((long)pppppuVar26 - 1U & (ulong)pppppuVar25);
      }
      else {
        uVar6 = (long)pppppuVar26 - (long)pppppuVar25 < 0;
        pppppuVar24 = pppppuVar25;
        if (pppppuVar26 <= pppppuVar25) {
          uVar16 = 0;
          if (pppppuVar26 != (undefined8 *****)0x0) {
            uVar16 = (ulong)pppppuVar25 / (ulong)pppppuVar26;
          }
          pppppuVar24 = (undefined8 *****)((long)pppppuVar25 - uVar16 * (long)pppppuVar26);
        }
      }
      goto LAB_108c63928;
    }
LAB_108c637d8:
    if ((ulong)pppppuVar24 >> 0x3d == 0) {
      lVar11 = (long)pppppuVar24 << 3;
      __Znwm(lVar11);
      func_0x000108c6647c(pppppuVar8 + 0x38,lVar11);
      pppppuVar8[0x39] = pppppuVar24;
      ppppuVar27 = pppppuVar8[0x38];
      for (pppppuVar26 = (undefined8 *****)0x0; bVar7 = pppppuVar26 <= pppppuVar24,
          pppppuVar24 != pppppuVar26; pppppuVar26 = (undefined8 *****)((long)pppppuVar26 + 1)) {
        ppppuVar27[(long)pppppuVar26] = (undefined8 ***)0x0;
      }
      pppppuVar26 = pppppuVar24;
      if (*pppppuVar18 != (undefined8 ****)0x0) {
        func_0x000108c67530();
        pppppuVar22 = extraout_x11;
        if (bVar7) {
          pppppuVar22 = (undefined8 *****)((long)extraout_x11 - extraout_x12 * (long)pppppuVar24);
        }
        if (((ulong)pppppuVar24 & extraout_x9_00) == 0) {
          pppppuVar22 = (undefined8 *****)((ulong)extraout_x11 & extraout_x9_00);
        }
        *(undefined8 ******)(extraout_x8_02 + (long)pppppuVar22 * 8) = pppppuVar18;
        lVar11 = extraout_x8_02;
        uVar16 = extraout_x9_00;
        plVar20 = extraout_x10;
        while (plVar19 = plVar20, plVar20 = (long *)*plVar19, plVar20 != (long *)0x0) {
          pppppuVar21 = (undefined8 *****)plVar20[1];
          if (((ulong)pppppuVar24 & uVar16) == 0) {
            pppppuVar21 = (undefined8 *****)((ulong)pppppuVar21 & uVar16);
          }
          else if (pppppuVar24 <= pppppuVar21) {
            uVar3 = 0;
            if (pppppuVar24 != (undefined8 *****)0x0) {
              uVar3 = (ulong)pppppuVar21 / (ulong)pppppuVar24;
            }
            pppppuVar21 = (undefined8 *****)((long)pppppuVar21 - uVar3 * (long)pppppuVar24);
          }
          if (pppppuVar21 != pppppuVar22) {
            if (*(long *)(lVar11 + (long)pppppuVar21 * 8) == 0) {
              *(long **)(lVar11 + (long)pppppuVar21 * 8) = plVar19;
              pppppuVar22 = pppppuVar21;
            }
            else {
              func_0x000108c67344();
              lVar11 = extraout_x8_03;
              uVar16 = extraout_x9_01;
              plVar20 = extraout_x10_00;
              pppppuVar22 = extraout_x11_00;
            }
          }
        }
      }
      goto LAB_108c638fc;
    }
  }
  func_0x000104bd35f4();
LAB_108c63d78:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x108c63d7c);
  (*pcVar4)();
}



/* Entry: 108c4f838; end: 108c4f8bb;  */

long * FUN_108c4f838(long param_1,undefined8 param_2,int param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  long *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long *plVar12;
  long *extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long *extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x11_02;
  long extraout_x12;
  long *plVar13;
  long extraout_x12_00;
  long *plVar14;
  long *plVar15;
  long unaff_x19;
  undefined8 uVar16;
  long *unaff_x21;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 auStack_b8 [3];
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  lVar10 = *(long *)(param_1 + 0x48);
  if (lVar10 == 0) {
    uVar16 = *(undefined8 *)(param_1 + 0x38);
    func_0x000108c59a84(param_1,&UNK_10f50e1cf);
    func_0x000108c590c8();
    func_0x000108c59854();
    func_0x000108c58e20(uVar16);
    func_0x000108c58f34();
    func_0x000108c58fb4();
    return (long *)0xffffffffffffffff;
  }
  func_0x000108c673cc(lVar10);
  uStack_68 = extraout_x8;
  if (*param_4 == 0) {
LAB_108c635bc:
    plVar17 = (long *)0xffffffffffffffff;
LAB_108c63d38:
    func_0x000108c67248(uStack_68);
    if ((bool)in_ZR) {
      return plVar17;
    }
    ___stack_chk_fail();
  }
  else {
    iVar9 = param_3;
    func_0x000108c67544();
    plStack_90 = (long *)CONCAT44(plStack_90._4_4_,iVar9);
    __ZNSt3__15mutex4lockEv(lVar10 + 0x180);
    lVar10 = unaff_x19 + 0x1c0;
    FUN_108c64c74(lVar10,&plStack_90);
    func_0x000108c67370();
    if (lVar10 != 0) goto LAB_108c635bc;
    __ZNSt3__15mutex4lockEv(unaff_x19 + 0x38);
    lVar1 = unaff_x21[1];
    for (lVar10 = *unaff_x21; uVar5 = lVar10 - lVar1 < 0, lVar10 != lVar1; lVar10 = lVar10 + 0x18) {
      lVar8 = unaff_x19 + 0x78;
      FUN_108c6461c(lVar8,lVar10);
      if (lVar8 == 0) {
        plStack_88 = *(long **)(unaff_x19 + 0x30);
        plStack_90 = (long *)((ulong)plStack_90 & 0xffffffff00000000);
        FUN_108c63e28(unaff_x19 + 0x78,lVar10,&plStack_90);
      }
    }
    func_0x000108c6732c();
    plVar18 = &lStack_c0;
    puVar7 = auStack_b8;
    lStack_c0 = unaff_x19;
    func_0x000107c2795c();
    lStack_98 = param_4[1];
    lStack_a0 = *param_4;
    if (param_4[1] != 0) {
      do {
        func_0x000108c670d0();
      } while (extraout_w10 != 0);
    }
    puStack_78 = (undefined8 *)0x0;
    func_0x000108c67300();
    *puVar7 = &PTR_FUN_110abb140;
    puVar7[1] = lStack_c0;
    func_0x000107c2795c(puVar7 + 2,auStack_b8);
    puVar7[6] = lStack_98;
    puVar7[5] = lStack_a0;
    if (lStack_98 != 0) {
      do {
        func_0x000108c670d0();
      } while (extraout_w10_00 != 0);
    }
    plVar17 = (long *)(unaff_x19 + 0xa0);
    puStack_78 = puVar7;
    FUN_108c4cc88(plVar17,&plStack_90);
    func_0x000108c4cdb8(&plStack_90);
    FUN_108c63e40(&lStack_c0);
    __ZNSt3__15mutex4lockEv(unaff_x19 + 0x180);
    plVar19 = (long *)(long)param_3;
    plVar20 = *(long **)(unaff_x19 + 0x1c8);
    if (plVar20 != (long *)0x0) {
      uVar11 = (long)plVar20 - 1;
      if (((ulong)plVar20 & uVar11) == 0) {
        plVar18 = (long *)(uVar11 & (ulong)plVar19);
        uVar5 = false;
      }
      else {
        uVar5 = (long)plVar20 - (long)plVar19 < 0;
        plVar18 = plVar19;
        if (plVar20 <= plVar19) {
          uVar2 = 0;
          if (plVar20 != (long *)0x0) {
            uVar2 = (ulong)plVar19 / (ulong)plVar20;
          }
          plVar18 = (long *)((long)plVar19 - uVar2 * (long)plVar20);
        }
      }
      plVar21 = *(long **)(*(long *)(unaff_x19 + 0x1c0) + (long)plVar18 * 8);
      if (plVar21 != (long *)0x0) {
        do {
          while( true ) {
            plVar21 = (long *)*plVar21;
            if (plVar21 == (long *)0x0) goto LAB_108c63740;
            plVar12 = (long *)plVar21[1];
            if (plVar12 != plVar19) break;
            uVar5 = (int)plVar21[2] - param_3 < 0;
            if ((int)plVar21[2] == param_3) goto LAB_108c639a4;
          }
          if (((ulong)plVar20 & uVar11) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar11);
          }
          else if (plVar20 <= plVar12) {
            uVar2 = 0;
            if (plVar20 != (long *)0x0) {
              uVar2 = (ulong)plVar12 / (ulong)plVar20;
            }
            plVar12 = (long *)((long)plVar12 - uVar2 * (long)plVar20);
          }
          uVar5 = (long)plVar12 - (long)plVar18 < 0;
        } while (plVar12 == plVar18);
      }
    }
LAB_108c63740:
    plVar21 = (long *)0x20;
    __Znwm();
    plVar12 = (long *)(unaff_x19 + 0x1d0);
    uStack_80 = 1;
    *plVar21 = 0;
    plVar21[1] = (long)plVar19;
    *(int *)(plVar21 + 2) = param_3;
    plVar21[3] = 0;
    plStack_90 = plVar21;
    plStack_88 = plVar12;
    if ((plVar20 != (long *)0x0) &&
       (func_0x000108c673a0((float)(*(long *)(unaff_x19 + 0x1d8) + 1),
                            *(undefined4 *)(unaff_x19 + 0x1e0),(float)plVar20), !(bool)uVar5)) {
LAB_108c63928:
      plVar21 = plStack_90;
      lVar10 = *(long *)(unaff_x19 + 0x1c0);
      plVar19 = *(long **)(lVar10 + (long)plVar18 * 8);
      if (plVar19 == (long *)0x0) {
        *plStack_90 = *plVar12;
        *plVar12 = (long)plStack_90;
        *(long **)(lVar10 + (long)plVar18 * 8) = plVar12;
        if (*plStack_90 != 0) {
          plVar19 = *(long **)(*plStack_90 + 8);
          if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
            plVar19 = (long *)((ulong)plVar19 & (long)plVar20 - 1U);
            uVar5 = false;
          }
          else {
            uVar5 = (long)plVar19 - (long)plVar20 < 0;
            if (plVar20 <= plVar19) {
              uVar11 = 0;
              if (plVar20 != (long *)0x0) {
                uVar11 = (ulong)plVar19 / (ulong)plVar20;
              }
              plVar19 = (long *)((long)plVar19 - uVar11 * (long)plVar20);
            }
          }
          *(long **)(lVar10 + (long)plVar19 * 8) = plStack_90;
        }
      }
      else {
        *plStack_90 = *plVar19;
        *plVar19 = (long)plStack_90;
      }
      plStack_90 = (long *)0x0;
      *(long *)(unaff_x19 + 0x1d8) = *(long *)(unaff_x19 + 0x1d8) + 1;
      FUN_108c64e34(&plStack_90);
LAB_108c639a4:
      plVar21[3] = (long)plVar17;
      plVar20 = *(long **)(unaff_x19 + 0x1f0);
      if (plVar20 != (long *)0x0) {
        uVar11 = (long)plVar20 - 1;
        if (((ulong)plVar20 & uVar11) == 0) {
          plVar18 = (long *)(uVar11 & (ulong)plVar17);
          uVar5 = false;
        }
        else {
          uVar5 = (long)plVar17 - (long)plVar20 < 0;
          plVar18 = plVar17;
          if (plVar20 <= plVar17) {
            uVar2 = 0;
            if (plVar20 != (long *)0x0) {
              uVar2 = (ulong)plVar17 / (ulong)plVar20;
            }
            plVar18 = (long *)((long)plVar17 - uVar2 * (long)plVar20);
          }
        }
        plVar19 = *(long **)(*(long *)(unaff_x19 + 0x1e8) + (long)plVar18 * 8);
        if (plVar19 != (long *)0x0) {
          do {
            while( true ) {
              plVar19 = (long *)*plVar19;
              if (plVar19 == (long *)0x0) goto LAB_108c63a34;
              plVar21 = (long *)plVar19[1];
              if (plVar21 != plVar17) break;
              uVar5 = plVar19[2] - (long)plVar17 < 0;
              if ((long *)plVar19[2] == plVar17) goto LAB_108c63c98;
            }
            if (((ulong)plVar20 & uVar11) == 0) {
              plVar21 = (long *)((ulong)plVar21 & uVar11);
            }
            else if (plVar20 <= plVar21) {
              uVar2 = 0;
              if (plVar20 != (long *)0x0) {
                uVar2 = (ulong)plVar21 / (ulong)plVar20;
              }
              plVar21 = (long *)((long)plVar21 - uVar2 * (long)plVar20);
            }
            uVar5 = (long)plVar21 - (long)plVar18 < 0;
          } while (plVar21 == plVar18);
        }
      }
LAB_108c63a34:
      plVar19 = (long *)0x20;
      __Znwm();
      plVar21 = (long *)(unaff_x19 + 0x1f8);
      uStack_80 = 1;
      *plVar19 = 0;
      plVar19[1] = (long)plVar17;
      plVar19[2] = (long)plVar17;
      *(undefined4 *)(plVar19 + 3) = 0;
      plStack_90 = plVar19;
      plStack_88 = plVar21;
      if ((plVar20 == (long *)0x0) ||
         (func_0x000108c673a0((float)(*(long *)(unaff_x19 + 0x200) + 1),
                              *(undefined4 *)(unaff_x19 + 0x208),(float)plVar20), (bool)uVar5)) {
        bVar4 = (long *)0x2 < plVar20;
        bVar6 = plVar20 == (long *)0x3;
        func_0x000108c670e0((long)plVar20 << 1);
        plVar18 = extraout_x8_03;
        if (!bVar4 || bVar6) {
          plVar18 = extraout_x9_02;
        }
        if ((long)plVar18 - 1U == 0) {
          plVar18 = (long *)0x2;
        }
        else if (((ulong)plVar18 & (long)plVar18 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar20 = *(long **)(unaff_x19 + 0x1f0);
        }
        if (plVar20 < plVar18) {
LAB_108c63acc:
          if ((ulong)plVar18 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_108c63d78;
          }
          lVar10 = (long)plVar18 << 3;
          __Znwm(lVar10);
          func_0x000108c66494(unaff_x19 + 0x1e8,lVar10);
          *(long **)(unaff_x19 + 0x1f0) = plVar18;
          lVar10 = *(long *)(unaff_x19 + 0x1e8);
          for (plVar20 = (long *)0x0; bVar6 = plVar20 <= plVar18, plVar18 != plVar20;
              plVar20 = (long *)((long)plVar20 + 1)) {
            *(undefined8 *)(lVar10 + (long)plVar20 * 8) = 0;
          }
          plVar20 = plVar18;
          if (*plVar21 != 0) {
            func_0x000108c67530();
            plVar19 = extraout_x11_01;
            if (bVar6) {
              plVar19 = (long *)((long)extraout_x11_01 - extraout_x12_00 * (long)plVar18);
            }
            if (((ulong)plVar18 & extraout_x9_03) == 0) {
              plVar19 = (long *)((ulong)extraout_x11_01 & extraout_x9_03);
            }
            *(long **)(extraout_x8_04 + (long)plVar19 * 8) = plVar21;
            lVar10 = extraout_x8_04;
            uVar11 = extraout_x9_03;
            plVar12 = extraout_x10_01;
            while (plVar13 = plVar12, plVar12 = (long *)*plVar13, plVar12 != (long *)0x0) {
              plVar15 = (long *)plVar12[1];
              if (((ulong)plVar18 & uVar11) == 0) {
                plVar15 = (long *)((ulong)plVar15 & uVar11);
              }
              else if (plVar18 <= plVar15) {
                uVar2 = 0;
                if (plVar18 != (long *)0x0) {
                  uVar2 = (ulong)plVar15 / (ulong)plVar18;
                }
                plVar15 = (long *)((long)plVar15 - uVar2 * (long)plVar18);
              }
              if (plVar15 != plVar19) {
                if (*(long *)(lVar10 + (long)plVar15 * 8) == 0) {
                  *(long **)(lVar10 + (long)plVar15 * 8) = plVar13;
                  plVar19 = plVar15;
                }
                else {
                  func_0x000108c67344();
                  lVar10 = extraout_x8_05;
                  uVar11 = extraout_x9_04;
                  plVar12 = extraout_x10_02;
                  plVar19 = extraout_x11_02;
                }
              }
            }
          }
        }
        else if (plVar18 < plVar20) {
          plVar19 = (long *)(long)((float)*(ulong *)(unaff_x19 + 0x200) /
                                  *(float *)(unaff_x19 + 0x208));
          if ((plVar20 < (long *)0x3) || (((ulong)plVar20 & (long)plVar20 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else {
            func_0x000108c6713c();
          }
          if (plVar18 <= plVar19) {
            plVar18 = plVar19;
          }
          if (plVar18 < plVar20) {
            if (plVar18 != (long *)0x0) goto LAB_108c63acc;
            func_0x000108c66494(unaff_x19 + 0x1e8,0);
            *(undefined8 *)(unaff_x19 + 0x1f0) = 0;
            plVar20 = (long *)0x0;
          }
          else {
            plVar20 = *(long **)(unaff_x19 + 0x1f0);
          }
        }
        if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
          plVar18 = (long *)((long)plVar20 - 1U & (ulong)plVar17);
        }
        else {
          plVar18 = plVar17;
          if (plVar20 <= plVar17) {
            uVar11 = 0;
            if (plVar20 != (long *)0x0) {
              uVar11 = (ulong)plVar17 / (ulong)plVar20;
            }
            plVar18 = (long *)((long)plVar17 - uVar11 * (long)plVar20);
          }
        }
      }
      plVar19 = plStack_90;
      lVar10 = *(long *)(unaff_x19 + 0x1e8);
      plVar12 = *(long **)(lVar10 + (long)plVar18 * 8);
      if (plVar12 == (long *)0x0) {
        *plStack_90 = *plVar21;
        *plVar21 = (long)plStack_90;
        *(long **)(lVar10 + (long)plVar18 * 8) = plVar21;
        if (*plStack_90 != 0) {
          plVar18 = *(long **)(*plStack_90 + 8);
          if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
            plVar18 = (long *)((ulong)plVar18 & (long)plVar20 - 1U);
          }
          else if (plVar20 <= plVar18) {
            uVar11 = 0;
            if (plVar20 != (long *)0x0) {
              uVar11 = (ulong)plVar18 / (ulong)plVar20;
            }
            plVar18 = (long *)((long)plVar18 - uVar11 * (long)plVar20);
          }
          *(long **)(lVar10 + (long)plVar18 * 8) = plStack_90;
        }
      }
      else {
        *plStack_90 = *plVar12;
        *plVar12 = (long)plStack_90;
      }
      plStack_90 = (long *)0x0;
      *(long *)(unaff_x19 + 0x200) = *(long *)(unaff_x19 + 0x200) + 1;
      FUN_108c64f94(&plStack_90);
LAB_108c63c98:
      *(int *)(plVar19 + 3) = param_3;
      func_0x000108c67370();
      plStack_88 = (long *)0x0;
      plStack_90 = (long *)0x0;
      puStack_78 = (undefined8 *)0x0;
      uStack_80 = 0;
      uStack_70 = 0x3f800000;
      __ZNSt3__15mutex4lockEv(unaff_x19 + 0x38);
      bVar6 = false;
      lVar1 = unaff_x21[1];
      for (lVar10 = *unaff_x21; in_ZR = lVar10 == lVar1, !(bool)in_ZR; lVar10 = lVar10 + 0x18) {
        lVar8 = unaff_x19 + 0x78;
        FUN_108c6461c(lVar8,lVar10);
        if (lVar8 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_e8,lVar10);
          uStack_c8 = *(undefined8 *)(lVar8 + 0x30);
          uStack_d0 = *(undefined8 *)(lVar8 + 0x28);
          func_0x000108c67440(&plStack_90);
          func_0x000108c671e8();
          bVar6 = (bool)(*(int *)(lVar8 + 0x28) != 0 | bVar6);
        }
      }
      func_0x000108c6732c();
      if (bVar6) {
        func_0x000108c67518(*param_4);
        (*extraout_x8_06)();
      }
      func_0x000108c3f498(&plStack_90);
      goto LAB_108c63d38;
    }
    bVar4 = (long *)0x2 < plVar20;
    bVar6 = plVar20 == (long *)0x3;
    func_0x000108c670e0((long)plVar20 << 1);
    plVar18 = extraout_x8_00;
    if (!bVar4 || bVar6) {
      plVar18 = extraout_x9;
    }
    if ((long)plVar18 - 1U == 0) {
      plVar18 = (long *)0x2;
    }
    else if (((ulong)plVar18 & (long)plVar18 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar20 = *(long **)(unaff_x19 + 0x1c8);
    }
    if (plVar18 <= plVar20) {
      if (plVar18 < plVar20) {
        plVar21 = (long *)(long)((float)*(ulong *)(unaff_x19 + 0x1d8) /
                                *(float *)(unaff_x19 + 0x1e0));
        if ((plVar20 < (long *)0x3) || (((ulong)plVar20 & (long)plVar20 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x000108c6713c();
        }
        if (plVar18 <= plVar21) {
          plVar18 = plVar21;
        }
        if (plVar18 < plVar20) {
          if (plVar18 != (long *)0x0) goto LAB_108c637d8;
          func_0x000108c6647c(unaff_x19 + 0x1c0,0);
          *(undefined8 *)(unaff_x19 + 0x1c8) = 0;
          plVar20 = (long *)0x0;
        }
        else {
          plVar20 = *(long **)(unaff_x19 + 0x1c8);
        }
      }
LAB_108c638fc:
      if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
        uVar5 = 0;
        plVar18 = (long *)((long)plVar20 - 1U & (ulong)plVar19);
      }
      else {
        uVar5 = (long)plVar20 - (long)plVar19 < 0;
        plVar18 = plVar19;
        if (plVar20 <= plVar19) {
          uVar11 = 0;
          if (plVar20 != (long *)0x0) {
            uVar11 = (ulong)plVar19 / (ulong)plVar20;
          }
          plVar18 = (long *)((long)plVar19 - uVar11 * (long)plVar20);
        }
      }
      goto LAB_108c63928;
    }
LAB_108c637d8:
    if ((ulong)plVar18 >> 0x3d == 0) {
      lVar10 = (long)plVar18 << 3;
      __Znwm(lVar10);
      func_0x000108c6647c(unaff_x19 + 0x1c0,lVar10);
      *(long **)(unaff_x19 + 0x1c8) = plVar18;
      lVar10 = *(long *)(unaff_x19 + 0x1c0);
      for (plVar20 = (long *)0x0; bVar6 = plVar20 <= plVar18, plVar18 != plVar20;
          plVar20 = (long *)((long)plVar20 + 1)) {
        *(undefined8 *)(lVar10 + (long)plVar20 * 8) = 0;
      }
      plVar20 = plVar18;
      if (*plVar12 != 0) {
        func_0x000108c67530();
        plVar21 = extraout_x11;
        if (bVar6) {
          plVar21 = (long *)((long)extraout_x11 - extraout_x12 * (long)plVar18);
        }
        if (((ulong)plVar18 & extraout_x9_00) == 0) {
          plVar21 = (long *)((ulong)extraout_x11 & extraout_x9_00);
        }
        *(long **)(extraout_x8_01 + (long)plVar21 * 8) = plVar12;
        lVar10 = extraout_x8_01;
        uVar11 = extraout_x9_00;
        plVar13 = extraout_x10;
        while (plVar15 = plVar13, plVar13 = (long *)*plVar15, plVar13 != (long *)0x0) {
          plVar14 = (long *)plVar13[1];
          if (((ulong)plVar18 & uVar11) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar11);
          }
          else if (plVar18 <= plVar14) {
            uVar2 = 0;
            if (plVar18 != (long *)0x0) {
              uVar2 = (ulong)plVar14 / (ulong)plVar18;
            }
            plVar14 = (long *)((long)plVar14 - uVar2 * (long)plVar18);
          }
          if (plVar14 != plVar21) {
            if (*(long *)(lVar10 + (long)plVar14 * 8) == 0) {
              *(long **)(lVar10 + (long)plVar14 * 8) = plVar15;
              plVar21 = plVar14;
            }
            else {
              func_0x000108c67344();
              lVar10 = extraout_x8_02;
              uVar11 = extraout_x9_01;
              plVar13 = extraout_x10_00;
              plVar21 = extraout_x11_00;
            }
          }
        }
      }
      goto LAB_108c638fc;
    }
  }
  func_0x000104bd35f4();
LAB_108c63d78:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x108c63d7c);
  (*pcVar3)();
}



/* Entry: 108c4f8bc; end: 108c4f933;  */

void FUN_108c4f8bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    uStack_28 = param_2;
    FUN_108c4cd00(lVar2 + 0xa0);
    __ZNSt3__15mutex4lockEv(lVar2 + 0x180);
    lVar1 = lVar2 + 0x1e8;
    FUN_108c64ba8(lVar1,&uStack_28);
    if (lVar1 != 0) {
      FUN_108c64c44(lVar2 + 0x1c0,lVar1 + 0x18);
      FUN_108c64e70(lVar2 + 0x1e8,lVar1);
    }
    func_0x000108c67370();
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x000108c59a84(param_1,&UNK_10f50e208);
  func_0x000108c590c8();
  func_0x000108c59854();
  func_0x000108c58e20(uVar3);
  func_0x000108c58f34();
  func_0x000108c58fb4();
  return;
}



/* Entry: 108c4f934; end: 108c4fdbb;  */

undefined8 * FUN_108c4f934(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x21;
  undefined1 auStack_280 [8];
  ulong uStack_278;
  byte bStack_269;
  char cStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  long lStack_218;
  undefined1 auStack_208 [16];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e0;
  long lStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined1 auStack_1b8 [32];
  undefined1 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 auStack_180 [32];
  undefined8 uStack_160;
  long lStack_158;
  undefined1 auStack_150 [32];
  undefined1 uStack_130;
  undefined1 uStack_110;
  undefined1 *puStack_108;
  undefined1 auStack_100 [8];
  long lStack_f8;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_58;
  
  puVar6 = auStack_280;
  func_0x000108c58d68();
  func_0x000108c58da8();
  lStack_218 = *(long *)(param_1 + 0x40);
  uStack_220 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = extraout_x8_00;
  if (*(long *)(param_1 + 0x40) != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
  }
  func_0x000107c278b8(auStack_238,&UNK_10f50e22d);
  lStack_258 = *(long *)(unaff_x21 + 0x30);
  uStack_260 = *(undefined8 *)(unaff_x21 + 0x28);
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10_00 != 0);
  }
  func_0x000108c592ec(auStack_250);
  func_0x000107c27f70();
  auStack_1b8[0] = 0;
  uStack_198 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar2 = uStack_220;
  uVar4 = 0;
  if (cStack_268 == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_1f8,auStack_238);
    if (-1 < (char)bStack_269) {
      uStack_278 = (ulong)bStack_269;
    }
    uVar4 = uStack_278 == 0;
    puVar1 = &UNK_10f50e2ad;
    if (!(bool)uVar4) {
      puVar1 = &UNK_10f50e2b8;
    }
    func_0x000107c278b8(auStack_100,puVar1);
    FUN_108c6c848(uVar2,&uStack_1f8,auStack_100,1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1f8);
  }
  func_0x000107c3a5c0();
  lStack_188 = lStack_218;
  uStack_190 = uStack_220;
  if (lStack_218 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10_01 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_180,auStack_238);
  lStack_158 = lStack_258;
  uStack_160 = uStack_260;
  if (lStack_258 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10_02 != 0);
  }
  func_0x000108c596e8(auStack_150);
  uStack_130 = 0;
  uStack_110 = 0;
  puStack_108 = puVar6;
  FUN_108c55178(&puStack_e8,&uStack_190);
  FUN_108c550f8(&puStack_1d0);
  func_0x000108c55040(&puStack_e8);
  func_0x000108c55040(&uStack_190);
  puStack_e8 = puStack_1d0;
  if (puStack_1d0 != (undefined8 *)0x0) {
    do {
      func_0x000108c58a0c();
    } while (extraout_w10_03 != 0);
  }
  FUN_108c55070(auStack_208,&puStack_e8);
  func_0x000107c27f9c(&puStack_e8);
  func_0x000107c27f9c(&puStack_1d0);
  puStack_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  func_0x0001052b21e8(&uStack_190,auStack_208,&uStack_1f8);
  func_0x0001052b223c(&puStack_e8,&uStack_190);
  func_0x0001052b22bc(&uStack_190);
  func_0x0001052b22bc(&uStack_1f8);
  FUN_108c42180(&lStack_1c0);
  FUN_108c421ac(&uStack_190,lStack_1c0);
  lVar8 = lStack_1c0;
  lStack_1c8 = 0;
  lStack_1c0 = 0;
  lStack_f8 = lVar8;
  puStack_1d0 = (undefined8 *)0x0;
  puStack_1e0 = puStack_e8 + 0xb;
  lStack_1d8 = CONCAT71(lStack_1d8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  puVar7 = puStack_e8;
  func_0x0001052b2274();
  if ((int)puVar7 == 0) {
    func_0x000108c59a7c();
    *puVar7 = &PTR_FUN_110aba928;
    lStack_f8 = 0;
    puVar7[2] = lVar8;
    lVar8 = puStack_e8[0x14];
    puStack_e8[0x14] = puVar7;
    if (lVar8 != 0) {
      func_0x000108c58a50();
    }
    lVar8 = 0;
  }
  else {
    func_0x0001052b223c(&puStack_1d0,&puStack_e8);
  }
  func_0x000107c2798c(&puStack_1e0);
  if (puStack_1d0 != (undefined8 *)0x0) {
    puStack_1e0 = puStack_1d0;
    lStack_1d8 = lStack_1c8;
    if (lStack_1c8 != 0) {
      do {
        func_0x000108c589fc();
      } while (extraout_w10_04 != 0);
    }
    FUN_108c503a4(auStack_100);
    func_0x0001052b22bc(&puStack_1e0);
  }
  extraout_x8[1] = lStack_188;
  *extraout_x8 = uStack_190;
  uStack_190 = 0;
  lStack_188 = 0;
  func_0x0001052b22bc(&puStack_1d0);
  if (lVar8 != 0) {
    func_0x000108c58aac();
  }
  func_0x000108c3ffe4(&uStack_190);
  lVar3 = lStack_1c0;
  lStack_1c0 = 0;
  if (lVar3 != 0) {
    func_0x000108c58be0();
  }
  func_0x0001052b22bc(&puStack_e8);
  func_0x0001052b22bc(auStack_208);
  FUN_108c50638(auStack_1b8);
  func_0x000107c279a4(auStack_280);
  FUN_108c4fdbc(&uStack_260);
  func_0x000108c593cc();
  puVar7 = &uStack_220;
  func_0x000108c4cad0();
  func_0x000108c58c00(uStack_58);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x000107c2798c(&puStack_1e0);
    func_0x0001052b22bc(&puStack_1d0);
    lStack_f8 = 0;
    if (lVar8 != 0) {
      func_0x000108c58aac();
    }
    func_0x000108c3ffe4(&uStack_190);
    lVar8 = lStack_1c0;
    lStack_1c0 = 0;
    if (lVar8 != 0) {
      func_0x000108c58be0();
    }
    func_0x0001052b22bc(&puStack_e8);
    func_0x0001052b22bc(auStack_208);
    FUN_108c50638(auStack_1b8);
    func_0x000107c279a4(auStack_280);
    FUN_108c4fdbc(&uStack_260);
    func_0x000108c593cc();
    func_0x000108c4cad0(&uStack_220);
    func_0x000108c58ce4();
    func_0x000108c58d40();
    puVar5 = puVar7;
    func_0x000108c4d884();
    if (puVar5 != (undefined8 *)0x0) {
      func_0x000107c278a0();
    }
    return puVar7;
  }
  return puVar7;
}



/* Entry: 108c4fdbc; end: 108c4fddb;  */

long FUN_108c4fdbc(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000108c58d40();
  lVar1 = unaff_x19;
  func_0x000108c4d884();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 108c4fddc; end: 108c4fddf;  */

undefined8 * FUN_108c4fddc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba7d0;
  func_0x000108c4cb18(param_1 + 9);
  func_0x000108c4cad0(param_1 + 7);
  func_0x000108c4caf4(param_1 + 5);
  func_0x000108c4b564(param_1 + 3);
  FUN_108c4d75c(param_1 + 1);
  return param_1;
}



/* Entry: 108c4fde0; end: 108c4fdf3;  */

void FUN_108c4fde0(void)

{
  func_0x000108c50688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4fdf4; end: 108c4fe0f;  */

void FUN_108c4fdf4(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000108c59314();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 108c4fe10; end: 108c4fef3;  */

void FUN_108c4fe10(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [80];
  undefined1 auStack_48 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (param_3 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
    do {
      func_0x000108c589fc();
    } while (extraout_w10_00 != 0);
  }
  uStack_a8 = param_2;
  lStack_a0 = param_3;
  FUN_108c43230(auStack_48,&uStack_a8);
  FUN_108c6b1bc(auStack_98,auStack_48);
  func_0x000108c59ae4();
  func_0x000108c4006c(uVar1,auStack_98);
  FUN_108c40698(auStack_98);
  func_0x000108c595cc();
  func_0x000108c592a0();
  return;
}



/* Entry: 108c4fef4; end: 108c4ff1f;  */

undefined8 * FUN_108c4fef4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba868;
  FUN_108c40088(param_1 + 2);
  return param_1;
}



/* Entry: 108c4ff20; end: 108c4ff33;  */

void FUN_108c4ff20(void)

{
  FUN_108c4fef4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4ff34; end: 108c4ff77;  */

void FUN_108c4ff34(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x000108c58de4();
  if (param_3 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
  }
  FUN_108c4fe10(param_1 + 8);
  func_0x000108c592a8();
  return;
}



/* Entry: 108c4ff78; end: 108c4ff93;  */

void FUN_108c4ff78(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *plVar5;
  
  func_0x000108c59314();
  plVar5 = (long *)*unaff_x19;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



/* Entry: 108c4ff94; end: 108c50073;  */

void FUN_108c4ff94(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (param_3 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
    do {
      func_0x000108c589fc();
    } while (extraout_w10_00 != 0);
  }
  uStack_70 = param_2;
  lStack_68 = param_3;
  FUN_108c43230(auStack_48,&uStack_70);
  FUN_108c6b230(auStack_60,auStack_48);
  func_0x000108c59ae4();
  func_0x000108c4071c(uVar1,auStack_60);
  FUN_108c41168(auStack_60);
  func_0x000108c59248();
  func_0x000108c59adc();
  return;
}



/* Entry: 108c50074; end: 108c5009f;  */

undefined8 * FUN_108c50074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba8a8;
  FUN_108c40738(param_1 + 2);
  return param_1;
}



/* Entry: 108c500a0; end: 108c500b3;  */

void FUN_108c500a0(void)

{
  FUN_108c50074();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c500b4; end: 108c500f7;  */

void FUN_108c500b4(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x000108c58de4();
  if (param_3 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
  }
  FUN_108c4ff94(param_1 + 8);
  func_0x000108c592a8();
  return;
}



/* Entry: 108c500f8; end: 108c502bb;  */

void FUN_108c500f8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long alStack_78 [2];
  undefined1 auStack_68 [40];
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  if (param_3 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
    do {
      func_0x000108c589fc();
    } while (extraout_w10_00 != 0);
  }
  puVar1 = &uStack_f8;
  uStack_f8 = param_2;
  lStack_f0 = param_3;
  FUN_108c436b8(auStack_68,puVar1);
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar2 = auStack_68;
  FUN_108c6b2a8(auStack_e8,puVar2);
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_108c50364(alStack_78,param_1);
  if (alStack_78[0] != 0) {
    uVar4 = *(undefined8 *)(alStack_78[0] + 0x38);
    func_0x000108c59c78();
    func_0x000107c278b8(auStack_90);
    func_0x000107c278b8(auStack_a8,&UNK_10f50e23f);
    func_0x000108c5957c();
    FUN_108c6c3d4(uVar4,auStack_90,auStack_a8,auStack_c0,(long)puVar2 - (long)puVar1);
    func_0x000108c58f44();
    func_0x000108c59a24();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  }
  func_0x000108c4d780(alStack_78);
  func_0x000108c42160(auStack_68);
  func_0x000108c41230(uVar3,auStack_e8);
  func_0x000108c42160(auStack_e8);
  func_0x000108c3ffc0(&uStack_f8);
  func_0x000108c59680();
  return;
}



/* Entry: 108c502bc; end: 108c5030b;  */

undefined8 FUN_108c502bc(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_108c4124c(param_1 + 0x10);
  func_0x000108c4d884();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 108c5030c; end: 108c5031f;  */

void FUN_108c5030c(void)

{
  func_0x000108c502e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c50320; end: 108c50363;  */

void FUN_108c50320(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x000108c58de4();
  if (param_3 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
  }
  FUN_108c500f8(param_1 + 8);
  func_0x000108c596a8();
  return;
}



/* Entry: 108c50364; end: 108c503a3;  */

void FUN_108c50364(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 108c503a4; end: 108c504b3;  */

void FUN_108c503a4(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte bStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  if (param_3 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
    do {
      func_0x000108c589fc();
    } while (extraout_w10_00 != 0);
  }
  uStack_80 = param_2;
  lStack_78 = param_3;
  func_0x0001052b22e4(&uStack_50,&uStack_80);
  if ((bStack_38 & 1) == 0) {
    FUN_108c5053c();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108c5044c);
    (*pcVar1)();
  }
  uStack_68 = uStack_48;
  uStack_70 = uStack_50;
  uStack_60 = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  func_0x000107c279c4(&uStack_50);
  func_0x000108c421e4(uVar2,&uStack_70);
  func_0x000107c27914(&uStack_70);
  func_0x000108c59594();
  func_0x000108c59ad4();
  return;
}



/* Entry: 108c504b4; end: 108c504df;  */

undefined8 * FUN_108c504b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba928;
  FUN_108c42200(param_1 + 2);
  return param_1;
}



/* Entry: 108c504e0; end: 108c504f3;  */

void FUN_108c504e0(void)

{
  FUN_108c504b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c504f4; end: 108c5053b;  */

void FUN_108c504f4(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x000108c58de4();
  if (param_3 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
  }
  FUN_108c503a4(param_1 + 8);
  func_0x0001052b22bc(auStack_30);
  return;
}



/* Entry: 108c5053c; end: 108c505c7;  */

void FUN_108c5053c(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [24];
  
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x000108c59298();
  FUN_108c505c8(puVar2,auStack_48);
  *puVar2 = &PTR_DAT_1108a6410;
  ___cxa_throw(puVar2,&PTR_DAT_1108a63e8,&DAT_105687f54);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108c505a8);
  (*pcVar1)();
}



/* Entry: 108c505c8; end: 108c5061f;  */

undefined8 * FUN_108c505c8(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x00010bcd2bec(auStack_38,param_2);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,auStack_38);
  func_0x000108c58d60();
  *param_1 = &PTR_FUN_110aba980;
  return param_1;
}



/* Entry: 108c50620; end: 108c50623;  */

void FUN_108c50620(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 108c50624; end: 108c50637;  */

void FUN_108c50624(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c50638; end: 108c50707;  */

long * FUN_108c50638(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((char)param_1[4] == '\x01') {
    plVar1 = (long *)param_1[3];
    if (plVar1 == param_1) {
      lVar2 = 0x20;
    }
    else {
      if (plVar1 == (long *)0x0) {
        return param_1;
      }
      lVar2 = 0x28;
    }
    (**(code **)(*plVar1 + lVar2))();
  }
  return param_1;
}



/* Entry: 108c50708; end: 108c5071b;  */

void FUN_108c50708(void)

{
  func_0x000108c506dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c5071c; end: 108c50753;  */

undefined8 FUN_108c5071c(undefined8 param_1)

{
  func_0x000108c59734();
  FUN_108c508ec();
  return param_1;
}



/* Entry: 108c50754; end: 108c50777;  */

long FUN_108c50754(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  param_1 = param_1 + 8;
  func_0x000108c598c0(&PTR_SUB_110aba9a8,param_2,param_1);
  if (extraout_x8 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_2 + 0x18,param_1 + 0x10);
  return param_2;
}



/* Entry: 108c50778; end: 108c508a7;  */

long * FUN_108c50778(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  long alStack_50 [2];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar4 = auStack_90;
  puVar1 = auStack_90;
  func_0x000108c58da8();
  puVar3 = (undefined1 *)(param_1 + 8);
  uStack_28 = extraout_x8;
  FUN_108c50364(alStack_50);
  if (alStack_50[0] != 0) {
    if (*(long *)(alStack_50[0] + 0x48) == 0) {
      uVar5 = *(undefined8 *)(alStack_50[0] + 0x38);
      func_0x000108c590c8();
      func_0x000108c59724();
      func_0x000108c58e20(uVar5,auStack_90,auStack_68);
      func_0x000108c594c0();
      puVar3 = puVar4;
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_40,param_1 + 0x18);
      func_0x000107c27980(auStack_68,auStack_40,1);
      puVar3 = auStack_68;
      func_0x000108c59afc(auStack_90);
      func_0x000108c59444();
      FUN_108c643fc();
      func_0x000108c3f498(auStack_90);
      func_0x000107c278a8(auStack_68);
      puVar1 = auStack_40;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1);
  }
  plVar2 = alStack_50;
  func_0x000108c4d780();
  func_0x000108c58c00(uStack_28);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x000108c594c0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  plVar2 = alStack_50;
  func_0x000108c4d780(plVar2);
  func_0x000108c58ce4();
  func_0x000107c27934(puVar3,&PTR_DAT_110abaa08);
  plVar2 = plVar2 + 1;
  if ((int)puVar3 == 0) {
    plVar2 = (long *)0x0;
  }
  return plVar2;
}



/* Entry: 108c508a8; end: 108c508df;  */

long FUN_108c508a8(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110abaa08);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108c508e0; end: 108c508eb;  */

undefined ** FUN_108c508e0(void)

{
  return &PTR_DAT_110abaa08;
}



/* Entry: 108c508ec; end: 108c5093b;  */

long FUN_108c508ec(long param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000108c598c0(&PTR_SUB_110aba9a8);
  if (extraout_x8 != 0) {
    do {
      func_0x000108c589fc();
    } while (extraout_w10 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,param_2 + 0x10);
  return param_1;
}



/* Entry: 108c5093c; end: 108c5097b;  */

undefined8 FUN_108c5093c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27938(param_1 + 0xa8);
  func_0x000108c4e990(param_1 + 0x78);
  func_0x000108c4e9ac(param_1 + 0x50);
  func_0x000108c4e9c8(param_1 + 0x28);
  func_0x000108c599c8();
  func_0x000108c4d884();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 108c5097c; end: 108c50a03;  */

void FUN_108c5097c(void)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  
  func_0x000108c58ca8();
  puVar1 = (undefined8 *)0x108;
  __Znwm();
  *puVar1 = FUN_108c58588;
  puVar1[1] = FUN_108c58698;
  FUN_108c50a04(puVar1 + 4);
  FUN_108c51188(puVar1 + 2);
  func_0x000108c58ffc();
  FUN_108c50af0();
  puVar1[0x1e] = unaff_x20;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  func_0x000108c58cb8();
  func_0x000108c58c20();
  return;
}



/* Entry: 108c50a04; end: 108c50aef;  */

void FUN_108c50a04(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000108c59890();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x38,param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar1;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x60,param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar1;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x88,param_2 + 0x88);
  func_0x000105302f48(unaff_x19 + 0xa8,param_2 + 0xa8);
  *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)(param_2 + 200);
  return;
}



/* Entry: 108c50af0; end: 108c50b33;  */

void FUN_108c50af0(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  func_0x000108c58e60();
  return;
}



/* Entry: 108c50b34; end: 108c50b53;  */

void FUN_108c50b34(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  func_0x000108c58df8();
  FUN_108c51250();
  func_0x000108c59130();
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5,1,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  *param_1 = param_2;
  return;
}



/* Entry: 108c50b54; end: 108c5114f;  */

void FUN_108c50b54(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  uint extraout_w8;
  int extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *plVar8;
  long *extraout_x8_08;
  long *extraout_x8_09;
  long extraout_x8_10;
  int extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  uint extraout_w10_09;
  uint extraout_w10_10;
  long extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar9;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  undefined8 *unaff_x20;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  func_0x000108c59c34();
  func_0x000108c59054();
  puVar6 = (undefined8 *)0x130;
  __Znwm();
  *puVar6 = FUN_108c5800c;
  puVar6[1] = FUN_108c5852c;
  puVar6[0x24] = unaff_x20;
  FUN_108c51188(puVar6 + 2);
  func_0x000108c58ffc();
  FUN_108c50af0();
  plVar11 = unaff_x20 + 5;
  FUN_108c512e8(puVar6 + 0x22);
  puVar6[4] = puVar6[0x22];
  do {
    func_0x000108c58a0c();
  } while (extraout_w10 != 0);
  func_0x000108c58d54(puVar6[4]);
  func_0x000108c59c4c();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x25) = 0;
    lVar10 = puVar6[4];
    func_0x000108c58b08();
    lVar13 = *plVar11;
    if (lVar13 == 0) {
      func_0x000107c3a5c0();
      lVar13 = *plVar11;
    }
    func_0x000108c58fa0();
    plVar11 = extraout_x8;
    do {
      if (*plVar11 == 0) {
        func_0x000108c58a1c();
        plVar11 = extraout_x8_01;
        uVar4 = extraout_w10_01;
        uVar9 = extraout_x11_00;
      }
      else {
        func_0x000108c58d84();
        plVar11 = extraout_x8_00;
        uVar4 = extraout_w10_00;
        uVar9 = extraout_x11;
      }
      if ((uVar9 & 1) != 0) {
        func_0x000108c58a3c();
        if ((bool)in_ZR) {
          func_0x000108c58a2c();
          iVar1 = extraout_w8_00;
          if ((bool)in_CY) {
            iVar1 = extraout_w9;
          }
          puVar7 = (undefined1 *)(ulong)(iVar1 * 0x18 + 0x10);
          _malloc();
          *puVar7 = (char)iVar1;
          func_0x000108c589e8(0);
          *(undefined1 **)(lVar10 + 0x90) = puVar7;
        }
        func_0x000108c58b2c();
        *(long *)(extraout_x8_02 + 0x20) = lVar13;
        goto LAB_108c50f5c;
      }
    } while ((uVar4 >> 1 & 1) == 0);
  }
  puVar12 = puVar6 + 4;
  FUN_108c51150(puVar12);
  FUN_108c41f1c(puVar6 + 8,puVar12);
  func_0x000108c58d90();
  func_0x000108c58e80();
  func_0x000108c58e78(puVar6 + 0xb);
  func_0x000108c59d98();
  func_0x000108c59bec();
  plVar11 = puVar6 + 0xb;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000108c59d8c();
  if (!(bool)in_ZR) {
    __ZNSt3__16chrono12system_clock3nowEv();
    func_0x000108c59468();
    if ((bool)in_NG) {
      func_0x000108c58e78(puVar6 + 0x11);
      func_0x000108c59778();
      plVar11 = puVar6 + 0x11;
    }
    else {
      func_0x000108c58e78(puVar6 + 0xe);
      func_0x000108c59768();
      plVar11 = puVar6 + 0xe;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x000108c59d8c();
    if (!(bool)in_ZR) {
      plVar11 = puVar6 + 8;
      FUN_108c6b380();
      if ((((ulong)plVar11 & 1) == 0) && (puVar6[8] != puVar6[9])) {
        func_0x000108c59bb4();
        lVar10 = unaff_x20[1];
        uVar14 = *unaff_x20;
        puVar6[0x1b] = unaff_x20[1];
        puVar6[0x1a] = uVar14;
        if (lVar10 != 0) {
          do {
            func_0x000108c589fc();
          } while (extraout_w10_02 != 0);
        }
        func_0x000108c59b98();
        func_0x000108c4cad0(puVar6 + 0x1a);
        func_0x000108c599d0();
        goto LAB_108c50f2c;
      }
    }
  }
  func_0x000108c59d4c();
  lVar10 = extraout_x9;
  if (extraout_x10 != 0) {
    plVar8 = (long *)(extraout_x10 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar10 = puVar6[9];
  }
  uVar5 = extraout_x8_03 == lVar10;
  func_0x000108c59b54();
  func_0x000108c59c1c();
  func_0x000108c59b40();
  func_0x000108c592cc();
  do {
    func_0x000108c58a0c();
  } while (extraout_w10_03 != 0);
  func_0x000108c58d54(puVar6[0x22]);
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x25) = 1;
    lVar10 = puVar6[0x22];
    func_0x000108c58b08();
    if (*plVar11 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000108c58fa0();
    plVar8 = extraout_x8_04;
    do {
      if (*plVar8 == 0) {
        func_0x000108c58a1c();
        plVar8 = extraout_x8_06;
        uVar4 = extraout_w10_05;
        uVar9 = extraout_x11_02;
      }
      else {
        func_0x000108c58d84();
        plVar8 = extraout_x8_05;
        uVar4 = extraout_w10_04;
        uVar9 = extraout_x11_01;
      }
      if ((uVar9 & 1) != 0) {
        func_0x000108c58a3c();
        if ((bool)uVar5) {
          func_0x000108c58a2c();
          func_0x000108c58960();
          func_0x000108c58944();
          *(long **)(lVar10 + 0x90) = plVar11;
        }
        func_0x000108c58a6c();
        goto LAB_108c50f5c;
      }
    } while ((uVar4 >> 1 & 1) == 0);
  }
  puVar12 = puVar6 + 0x22;
  FUN_108c51850(puVar12);
  FUN_108c51e68(puVar6 + 4,puVar12);
  func_0x000108c58e80();
  func_0x000108c58f64();
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x000108c59d40();
  if ((bool)uVar5) {
    func_0x000108c59d60();
    if (extraout_x9_00 != 0) {
      do {
        func_0x000108c589fc();
      } while (extraout_w10_06 != 0);
    }
    plVar11 = puVar6 + 0x1e;
    func_0x000108c596e0();
    func_0x000108c596f0();
  }
  else {
    func_0x000108c59638(*(undefined4 *)(puVar6 + 7));
    plVar11 = *(long **)puVar6[0x24];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (puVar6 + 0x14,(long *)puVar6[0x24] + 2);
    func_0x000108c59630(puVar6 + 0x17);
    func_0x000108c58e20(plVar11,puVar6 + 0x14,puVar6 + 0x17);
    puVar12 = (undefined8 *)puVar6[0x24];
    func_0x000108c596c8();
    func_0x000108c596d0();
    lVar10 = puVar12[1];
    uVar14 = *puVar12;
    puVar6[0x21] = puVar12[1];
    puVar6[0x20] = uVar14;
    if (lVar10 != 0) {
      do {
        func_0x000108c589fc();
      } while (extraout_w10_07 != 0);
    }
    func_0x000108c59b20(puVar6[0x24]);
    func_0x000108c596c0();
    func_0x000108c58d60();
  }
  func_0x000108c59d40();
  if (((bool)uVar5) && (uVar5 = puVar6[4] == puVar6[5], !(bool)uVar5)) {
    func_0x000108c59c10();
    func_0x000108c59700();
    func_0x000108c592cc();
    do {
      func_0x000108c58a0c();
    } while (extraout_w10_08 != 0);
    func_0x000108c58d54(puVar6[0x22]);
    if ((extraout_w8_02 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x25) = 2;
      lVar13 = puVar6[0x22];
      func_0x000108c58b08();
      lVar10 = *plVar11;
      if (lVar10 == 0) {
        func_0x000107c3a5c0();
        lVar10 = *plVar11;
      }
      func_0x000108c58fa0();
      plVar8 = extraout_x8_07;
      do {
        if (*plVar8 == 0) {
          func_0x000108c58a1c();
          plVar8 = extraout_x8_09;
          uVar4 = extraout_w10_10;
          uVar9 = extraout_x11_04;
        }
        else {
          func_0x000108c58d84();
          plVar8 = extraout_x8_08;
          uVar4 = extraout_w10_09;
          uVar9 = extraout_x11_03;
        }
        if ((uVar9 & 1) != 0) {
          func_0x000108c58a80();
          if ((bool)uVar5) {
            func_0x000108c58a2c();
            func_0x000108c58960();
            func_0x000108c588f8();
            *(long **)(lVar13 + 0x90) = plVar11;
          }
          func_0x000108c58a90();
          *(long *)(extraout_x8_10 + 0x20) = lVar10;
LAB_108c50f5c:
          func_0x000108c58998();
          return;
        }
      } while ((uVar4 >> 1 & 1) == 0);
    }
    func_0x000107c28834(puVar6 + 0x22);
    lVar10 = puVar6[0x24];
    func_0x000108c58e80();
    func_0x000108c58f64();
    if (*(long *)(lVar10 + 0xc0) != 0) {
      func_0x000104c003e8(puVar6[0x24] + 0xa8);
    }
  }
  func_0x000108c59a0c();
  func_0x000108c59398();
LAB_108c50f2c:
  func_0x000108c59410();
  func_0x000108c58ca0();
  func_0x000108c58cf4();
  return;
}



/* Entry: 108c51150; end: 108c51187;  */

long FUN_108c51150(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  
  func_0x000108c58bec();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x000108c58c7c();
  func_0x000108c59290();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108c51180);
  (*pcVar1)();
}



/* Entry: 108c51188; end: 108c511af;  */

void FUN_108c51188(void)

{
  func_0x000108c59d80();
  FUN_108c511b0();
  func_0x000108c58bc0();
  return;
}



/* Entry: 108c511b0; end: 108c511e7;  */

void FUN_108c511b0(void)

{
  __Znwm(0xb8);
  func_0x000108c59450();
  FUN_108c511e8();
  func_0x000108c58bb0();
  func_0x000108c58e60();
  return;
}



/* Entry: 108c511e8; end: 108c5120b;  */

void FUN_108c511e8(long param_1)

{
  func_0x000107c31510();
  func_0x000108c58f6c(&UNK_110abaa18);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}



/* Entry: 108c5120c; end: 108c5120f;  */

undefined8 * FUN_108c5120c(undefined8 *param_1)

{
  func_0x000108c59884(&UNK_110abaa18);
  FUN_108c40968();
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c51210; end: 108c51223;  */

void FUN_108c51210(void)

{
  FUN_108c51224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c51224; end: 108c5124f;  */

undefined8 * FUN_108c51224(undefined8 *param_1)

{
  func_0x000108c59884(&UNK_110abaa18);
  FUN_108c40968();
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c51250; end: 108c5129b;  */

undefined8 FUN_108c51250(undefined8 param_1)

{
  uint uStack_38;
  
  func_0x000108c58f54();
  do {
    func_0x000108c58914();
    if ((int)param_1 != 0) {
      func_0x000108c59860();
      FUN_108c5129c();
      func_0x000108c5892c();
      return param_1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return param_1;
}


