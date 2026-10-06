/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10596f930; end: 10596faff;  */

undefined1 *
FUN_10596f930(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 auStack_190 [216];
  undefined8 uStack_b8;
  undefined8 *apuStack_b0 [5];
  undefined8 uStack_88;
  undefined8 *apuStack_80 [5];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_105970bc0(auStack_190,param_2,param_3);
  puVar3 = (undefined8 *)0xb0;
  __Znwm();
  plVar7 = puVar3 + 1;
  *plVar7 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_1108c37f0;
  uStack_88 = *param_4;
  (**(code **)(param_4[1] + 0x10))(apuStack_80,param_4 + 1);
  uStack_b8 = *param_5;
  (**(code **)(param_5[1] + 0x10))(apuStack_b0,param_5 + 1);
  puVar6 = puVar3 + 3;
  *puVar6 = &PTR_FUN_1108c3840;
  puVar3[4] = uStack_88;
  (*(code *)apuStack_80[0][2])(puVar3 + 5,apuStack_80);
  puVar3[10] = uStack_b8;
  (*(code *)apuStack_b0[0][2])(puVar3 + 0xb,apuStack_b0);
  *(undefined4 *)(puVar3 + 0x10) = 0;
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  puVar3[0x14] = 0;
  puVar3[0x13] = 0;
  *(undefined4 *)(puVar3 + 0x15) = 0x3f800000;
  (*(code *)*apuStack_b0[0])(apuStack_b0);
  (*(code *)*apuStack_80[0])(apuStack_80);
  uVar4 = *(undefined8 *)(param_1 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_1b0 = puVar6;
  puStack_1a8 = puVar3;
  puStack_1a0 = puVar6;
  puStack_198 = puVar3;
  FUN_105989a24(uVar4,auStack_190,param_1 + 0x18,&puStack_1b0);
  FUN_1059701b8(&puStack_1b0);
  FUN_10596fb00(&puStack_1a0);
  puVar5 = auStack_190;
  FUN_105990c14();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar5;
  }
  ___stack_chk_fail();
  FUN_1059701b8(&puStack_1b0);
  FUN_10596fb00(&puStack_1a0);
  puVar5 = auStack_190;
  FUN_105990c14();
  FUN_1059701e0();
  if (*(long *)(puVar5 + 8) != 0) {
    func_0x0001000df548();
  }
  return puVar5;
}



/* Entry: 10596fb00; end: 10596fb27;  */

long FUN_10596fb00(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10596fb28; end: 10596fb2b;  */

undefined8 * FUN_10596fb28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c37a0;
  func_0x000100609698(param_1 + 3);
  func_0x00010596fb7c(param_1 + 1);
  return param_1;
}



/* Entry: 10596fb2c; end: 10596fb3f;  */

void FUN_10596fb2c(void)

{
  FUN_10596fb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596fb40; end: 10596fba3;  */

undefined8 * FUN_10596fb40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c37a0;
  func_0x000100609698(param_1 + 3);
  func_0x00010596fb7c(param_1 + 1);
  return param_1;
}



/* Entry: 10596fba4; end: 10596fbb3;  */

void FUN_10596fba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c37f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596fbb4; end: 10596fbc7;  */

void FUN_10596fbb4(void)

{
  FUN_10596fba4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596fbc8; end: 10596fbd7;  */

void FUN_10596fbc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010596fbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596fbd8; end: 10596fc23;  */

undefined8 * FUN_10596fbd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3840;
  func_0x0001005d0538(param_1 + 0xe);
  (**(code **)param_1[8])();
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10596fc24; end: 10596fc37;  */

void FUN_10596fc24(void)

{
  FUN_10596fbd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596fc38; end: 10596fc5f;  */

void FUN_10596fc38(long param_1)

{
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 8) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010596fc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))();
  return;
}



/* Entry: 10596fc60; end: 10596fd33;  */

void FUN_10596fc60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x000100835528(&ppuStack_48);
  pcStack_58 = "x-envoy-overloaded";
  uStack_50 = 0x12;
  lVar1 = param_3;
  func_0x0001008354c0(param_3,&pcStack_58);
  if (param_3 + 8 == lVar1) {
    if (-1 < (char)bStack_31) {
      uStack_40 = (ulong)bStack_31;
    }
    if (uStack_40 == 0) goto LAB_10596fcc0;
    ppuStack_68 = ppuStack_48;
    if (-1 < (char)bStack_31) {
      ppuStack_68 = &ppuStack_48;
    }
    uStack_60 = uStack_40;
    func_0x0001008354c0(param_3,&ppuStack_68);
    if (lVar1 == param_3) goto LAB_10596fcc0;
  }
  func_0x0001004c3c6c(param_1 + 0x70,param_2);
LAB_10596fcc0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_48);
  return;
}



/* Entry: 10596fd34; end: 10596fe17;  */

void FUN_10596fd34(long param_1,long param_2,int *param_3,undefined1 param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 auStack_88 [56];
  undefined1 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  
  if ((*(byte *)(*(long *)(param_1 + 0x40) + 8) & 1) == 0) {
    uVar1 = *(ulong *)(param_2 + 8);
    if (-1 < (char)*(byte *)(param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x17);
    }
    if (uVar1 == 0 && *param_3 == 0xd) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_88,param_3 + 2);
      puVar2 = auStack_88;
      func_0x000100152bb8(puVar2,"Failed to serialize message");
      uVar3 = SUB81(puVar2,0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    }
    else {
      uVar3 = 0;
    }
    func_0x000100601a6c(auStack_88,param_3);
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = param_4;
    FUN_10596ff44(param_1,param_2);
    uStack_47 = (undefined1)param_1;
    uStack_45 = 0;
    uStack_46 = uVar3;
    func_0x0001059701fc();
    func_0x0001059701f4();
  }
  return;
}



/* Entry: 10596fe18; end: 10596fe87;  */

void FUN_10596fe18(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x40) + 8) & 1) == 0) {
    FUN_10596ff44();
    func_0x0001059701fc();
    func_0x0001059701f4();
  }
  return;
}



/* Entry: 10596fe88; end: 10596fecb;  */

void FUN_10596fe88(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10596fecc; end: 10596ff43;  */

void FUN_10596fecc(undefined8 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar1 = (code *)*param_1;
  auStack_68[0] = *param_2;
  uStack_58 = *(undefined8 *)(param_2 + 4);
  uStack_60 = *(undefined8 *)(param_2 + 2);
  uStack_50 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  uStack_40 = *(undefined8 *)(param_2 + 10);
  uStack_48 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  uStack_38 = *(undefined8 *)(param_2 + 0xc);
  uStack_30 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  uStack_28 = param_2[0x10];
  (*pcVar1)(auStack_68,param_1);
  func_0x0001059701f4();
  return;
}



/* Entry: 10596ff44; end: 10596ff63;  */

bool FUN_10596ff44(long param_1)

{
  param_1 = param_1 + 0x70;
  FUN_10596ff64(param_1);
  return param_1 != 0;
}



/* Entry: 10596ff64; end: 10596ff93;  */

void FUN_10596ff64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10596ff94();
  if (lVar1 != 0) {
    FUN_105970068(param_1,lVar1);
  }
  return;
}



/* Entry: 10596ff94; end: 105970067;  */

long FUN_10596ff94(long *param_1,undefined8 param_2)

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
    func_0x000100102e7c();
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
        func_0x0001000e107c(lVar3,param_2);
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



/* Entry: 105970068; end: 10597009b;  */

undefined8 FUN_105970068(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10597009c(auStack_38);
  func_0x000100133ae4();
  return uVar1;
}



/* Entry: 10597009c; end: 1059701b7;  */

void FUN_10597009c(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_105970150;
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
    if (uVar8 == uVar3) goto LAB_105970150;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_105970150:
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



/* Entry: 1059701b8; end: 1059701df;  */

long FUN_1059701b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1059701e0; end: 10597020f;  */

void FUN_1059701e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 105970210; end: 1059703cf;  */

undefined8 * FUN_105970210(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined4 uStack_88;
  undefined4 uStack_84;
  code *pcStack_80;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  undefined1 *puStack_50;
  long lStack_48;
  
  puVar8 = &uStack_b0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  uStack_a8 = *(undefined8 *)(param_1 + 0x10);
  uStack_b0 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar7 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5 = auStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uStack_88 = param_3;
  uStack_84 = param_4;
  func_0x00010028c49c();
  lVar9 = puVar2[2];
  __ZNSt3__15mutex4lockEv(lVar9 + 8);
  lVar10 = *(long *)(lVar9 + 0x70);
  pcStack_80 = FUN_105970450;
  ppuStack_78 = &PTR_FUN_1108c38f0;
  puVar6 = (undefined8 *)0x30;
  __Znwm();
  puVar6[1] = uStack_a8;
  *puVar6 = uStack_b0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar6 + 2,auStack_a0);
  puVar6[5] = CONCAT44(uStack_84,uStack_88);
  puStack_70 = puVar6;
  puStack_50 = puVar5;
  func_0x0001005760fc(lVar9 + 0x48,&pcStack_80);
  func_0x0001059704a4();
  __ZNSt3__15mutex6unlockEv(lVar9 + 8);
  if (lVar10 == 0) {
    plVar7 = (long *)*puVar2;
    ppuStack_78 = (undefined **)puVar2[3];
    pcStack_80 = (code *)puVar2[2];
    if (puVar2[3] != 0) {
      plVar1 = (long *)(puVar2[3] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    (**(code **)(*plVar7 + 0x10))(plVar7,&pcStack_80);
    func_0x000100576684(&pcStack_80);
  }
  FUN_1059703d0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  func_0x000100576684(&pcStack_80);
  FUN_1059703d0(&uStack_b0);
  __Unwind_Resume();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
            ((undefined1 *)((long)puVar8 + 0x10));
  if (*(long *)((long)puVar8 + 8) != 0) {
    func_0x0001000df548();
  }
  return (undefined8 *)(undefined1 *)puVar8;
}



/* Entry: 1059703d0; end: 1059703f7;  */

long FUN_1059703d0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1059703f8; end: 1059703fb;  */

undefined8 * FUN_1059703f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c38c0;
  func_0x000100558bb4(param_1 + 3);
  func_0x000100903fbc(param_1 + 1);
  return param_1;
}



/* Entry: 1059703fc; end: 10597040f;  */

void FUN_1059703fc(void)

{
  FUN_105970410();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105970410; end: 10597044f;  */

undefined8 * FUN_105970410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c38c0;
  func_0x000100558bb4(param_1 + 3);
  func_0x000100903fbc(param_1 + 1);
  return param_1;
}



/* Entry: 105970450; end: 10597046b;  */

void FUN_105970450(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000105970468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x10))
            ((long *)*puVar1,puVar1 + 2,*(undefined4 *)(puVar1 + 5),
             *(undefined4 *)((long)puVar1 + 0x2c));
  return;
}



/* Entry: 10597046c; end: 10597048b;  */

void FUN_10597046c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1059703d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10597048c; end: 1059704b3;  */

void FUN_10597048c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1059704b4; end: 10597062f;  */

undefined8 * FUN_1059704b4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar3 = &uStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  uStack_98 = *(undefined8 *)(param_1 + 0x10);
  uStack_a0 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x000105970710();
    } while (extraout_w10 != 0);
  }
  lStack_88 = param_2[1];
  uStack_90 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000105970710();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010028c49c();
  lVar5 = puVar1[2];
  __ZNSt3__15mutex4lockEv(lVar5 + 8);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  lVar6 = *(long *)(lVar5 + 0x70);
  uStack_80 = 0x1059706b0;
  ppuStack_78 = &PTR_DAT_1108c3948;
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_58 = lStack_88;
  uStack_60 = uStack_90;
  if (lStack_88 != 0) {
    do {
      func_0x000105970710();
    } while (extraout_w10_01 != 0);
  }
  lStack_50 = param_1;
  func_0x0001005760fc(lVar5 + 0x48,&uStack_80);
  func_0x000105970720();
  __ZNSt3__15mutex6unlockEv(lVar5 + 8);
  if (lVar6 == 0) {
    plVar2 = (long *)*puVar1;
    ppuStack_78 = (undefined **)puVar1[3];
    uStack_80 = puVar1[2];
    if (puVar1[3] != 0) {
      do {
        func_0x000105970710();
      } while (extraout_w10_02 != 0);
    }
    (**(code **)(*plVar2 + 0x10))();
    func_0x000100576684(&uStack_80);
  }
  FUN_105970630();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x000100576684(&uStack_80);
    FUN_105970630(&uStack_a0);
    puVar4 = (undefined1 *)puVar3;
    __Unwind_Resume();
    FUN_10595e484(puVar4 + 0x10);
    func_0x00010048d444();
    if (puVar4 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return (undefined8 *)(undefined1 *)puVar3;
  }
  return puVar3;
}



/* Entry: 105970630; end: 105970657;  */

undefined8 FUN_105970630(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10595e484(param_1 + 0x10);
  func_0x00010048d444();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 105970658; end: 10597065b;  */

undefined8 * FUN_105970658(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3918;
  func_0x000100558bb4(param_1 + 3);
  func_0x0001009048c0(param_1 + 1);
  return param_1;
}



/* Entry: 10597065c; end: 10597066f;  */

void FUN_10597065c(void)

{
  FUN_105970670();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105970670; end: 1059706af;  */

undefined8 * FUN_105970670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3918;
  func_0x000100558bb4(param_1 + 3);
  func_0x0001009048c0(param_1 + 1);
  return param_1;
}



/* Entry: 1059706b0; end: 10597072f;  */

void FUN_1059706b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059706c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),param_1 + 0x20);
  return;
}



/* Entry: 105970730; end: 105970847;  */

void FUN_105970730(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  byte bStack_59;
  char cStack_58;
  undefined1 auStack_50 [24];
  byte bStack_38;
  
  func_0x000100902d70(auStack_50,param_2,0x12);
  puVar2 = &UNK_10f315d43;
  if ((bStack_38 & 1) != 0) {
    puVar1 = auStack_50;
    FUN_105970848(puVar1,&PTR_DAT_1108c3980);
    if ((int)puVar1 != 0) {
      func_0x000100902d70(auStack_70,param_2,0x13);
      if (cStack_58 == '\x01') {
        if (-1 < (char)bStack_59) {
          uStack_68 = (ulong)bStack_59;
        }
        if (uStack_68 == 0) goto LAB_1059707f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,auStack_70)
        ;
      }
      else {
LAB_1059707f0:
        func_0x00010002b838(param_1,&UNK_10f315d43);
      }
      func_0x0001001148fc(auStack_70);
      goto LAB_105970808;
    }
    puVar1 = auStack_50;
    FUN_105970848(puVar1,&PTR_DAT_1108c3970);
    puVar2 = &UNK_10f315d5c;
    if ((int)puVar1 == 0) {
      puVar2 = &UNK_10f315d43;
    }
  }
  func_0x00010002b838(param_1,puVar2);
LAB_105970808:
  func_0x0001001148fc(auStack_50);
  return;
}



/* Entry: 105970848; end: 10597087f;  */

bool FUN_105970848(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 uStack_20;
  ulong uStack_18;
  
  if (*(char *)(param_1 + 3) != '\x01') {
    return false;
  }
  uStack_20 = *param_2;
  uStack_18 = param_2[1];
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  iVar3 = (int)&uStack_20;
  if (uStack_18 == uVar1) {
    func_0x000100067218(&uStack_20,puVar2,uVar1);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



/* Entry: 105970880; end: 1059709cb;  */

void FUN_105970880(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_78 [24];
  char cStack_60;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  func_0x0001004695d8(&lStack_40);
  func_0x0001002a8234(lStack_40 + 8,param_2);
  FUN_105970730(auStack_58,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_40 + 0x98,auStack_58);
  uVar2 = 0;
  uVar1 = param_3;
  func_0x000100902dc4();
  if ((uVar2 & 1) == 0) {
    uVar1 = 10000;
  }
  *(undefined8 *)(lStack_40 + 0x68) = uVar1;
  *(undefined1 *)(lStack_40 + 0x70) = 1;
  uVar2 = 0x17;
  uVar1 = param_3;
  func_0x000100902dc4();
  if ((uVar2 & 1) == 0) {
    uVar1 = 4000;
  }
  *(undefined8 *)(lStack_40 + 0x90) = uVar1;
  func_0x000100902d70(auStack_78,param_3,0x15);
  if (cStack_60 == '\x01') {
    func_0x0001002a8234(lStack_40 + 0x48,auStack_78);
  }
  param_1[1] = lStack_38;
  *param_1 = lStack_40;
  *(undefined1 *)(lStack_40 + 0xb0) = param_4;
  lStack_40 = 0;
  lStack_38 = 0;
  func_0x0001001148fc(auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x00010046e248(&lStack_40);
  return;
}



/* Entry: 1059709cc; end: 105970b97;  */

undefined1 * FUN_1059709cc(undefined8 param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 auStack_1c0 [24];
  undefined1 uStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 uStack_188;
  undefined1 auStack_180 [24];
  undefined1 uStack_168;
  undefined1 auStack_160 [48];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 auStack_108 [8];
  ulong uStack_100;
  byte bStack_f1;
  char cStack_f0;
  undefined1 auStack_e8 [176];
  undefined8 uStack_38;
  
  func_0x0001059717b8();
  uStack_38 = extraout_x8;
  func_0x000100902d70(auStack_108);
  uVar1 = cStack_f0 == '\x01';
  if ((bool)uVar1) {
    uVar1 = bStack_f1 == 0;
    if (-1 < (char)bStack_f1) {
      uStack_100 = (ulong)bStack_f1;
    }
    if ((param_2 != 0) && (uStack_100 == 0)) {
LAB_105970a68:
      *unaff_x19 = 0;
      unaff_x19[0xb0] = 0;
      goto LAB_105970b14;
    }
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = 0x3f800000;
    if (uStack_100 != 0) {
      FUN_1059710c8(auStack_e8,&PTR_DAT_1108c3990,auStack_108);
      FUN_105970b98(&uStack_130,auStack_e8,1);
      func_0x0001002aa0bc(auStack_e8);
    }
  }
  else {
    if ((param_2 & 1) != 0) goto LAB_105970a68;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_110 = 0x3f800000;
  }
  func_0x000100626ea4(auStack_160,&uStack_130);
  auStack_180[0] = 0;
  uStack_168 = 0;
  auStack_1a0[0] = 0;
  uStack_188 = 0;
  auStack_1c0[0] = 0;
  uStack_1a8 = 0;
  func_0x000100626ef0(auStack_e8,0,0,auStack_160,param_2 | 0x100,auStack_180,auStack_1a0,0,
                      auStack_1c0);
  func_0x0001006271e0();
  func_0x000100627b64(auStack_e8);
  func_0x0001001148fc(auStack_1c0);
  func_0x0001001148fc(auStack_1a0);
  func_0x0001001148fc(auStack_180);
  func_0x00010062706c(auStack_160);
  func_0x00010028ad98(&uStack_130);
LAB_105970b14:
  puVar2 = auStack_108;
  func_0x0001001148fc();
  func_0x0001059717cc(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001002aa0bc(auStack_e8);
  func_0x00010028ad98(&uStack_130);
  puVar2 = auStack_108;
  func_0x0001001148fc(puVar2);
  func_0x00010597179c();
  FUN_105971158();
  return puVar2;
}



/* Entry: 105970b98; end: 105970bbf;  */

undefined8 FUN_105970b98(undefined8 param_1,long param_2,long param_3)

{
  FUN_105971158(param_1,param_2,param_2 + param_3 * 0x30);
  return param_1;
}



/* Entry: 105970bc0; end: 105970eb7;  */

void FUN_105970bc0(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_105970eb8(param_1);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001059717a4();
  }
  func_0x0001001a53d4(param_1 + 0x18,param_2);
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x28);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001059717a4();
  }
  func_0x0001001a53d4(param_1 + 0x28,param_2 + 0x30);
  if (param_3 != 2) {
    param_3 = (uint)(param_3 == 1);
  }
  *(uint *)(param_1 + 0xb0) = param_3;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001059717e8();
    }
    FUN_10597110c();
    *(ulong *)(param_1 + 0x68) = uVar1;
  }
  func_0x000105971818(*(undefined1 *)(param_2 + 0x48));
  *(uint *)(param_1 + 0x10) = extraout_w8 | 2;
  if (*(long *)(param_1 + 0x70) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001059717e8();
    }
    FUN_10597110c();
    *(ulong *)(param_1 + 0x70) = uVar1;
  }
  func_0x000105971818(*(undefined1 *)(param_2 + 0x49));
  *(uint *)(param_1 + 0x10) = extraout_w8_00 | 4;
  if (*(long *)(param_1 + 0x78) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001059717e8();
    }
    FUN_10597110c();
    *(ulong *)(param_1 + 0x78) = uVar1;
  }
  func_0x000105971818(*(undefined1 *)(param_2 + 0x4a));
  *(uint *)(param_1 + 0x10) = extraout_w8_01 | 0x20;
  if (*(long *)(param_1 + 0x90) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001059717e8();
    }
    FUN_10597110c();
    *(ulong *)(param_1 + 0x90) = uVar1;
  }
  func_0x000105971818(*(undefined1 *)(param_2 + 0xb0));
  *(uint *)(param_1 + 0x10) = extraout_w8_02 | 8;
  uVar1 = *(ulong *)(param_1 + 0x80);
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001059717e8();
    }
    FUN_10597110c();
    *(ulong *)(param_1 + 0x80) = uVar1;
  }
  *(undefined1 *)(uVar1 + 0x10) = *(undefined1 *)(param_2 + 0x170);
  if (*(char *)(param_2 + 0x80) == '\x01') {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001059717a4();
    }
    func_0x0001001a53d4(param_1 + 0x20,param_2 + 0x68);
  }
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001059717a4();
    }
    func_0x0001001a53d4(param_1 + 0x30,param_2 + 0x88);
  }
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001059717a4();
    }
    func_0x0001001a53d4(param_1 + 0x60,param_2 + 0xd8);
  }
  uVar3 = *(int *)(param_2 + 0x4c) - 1;
  if (uVar3 < 5) {
    uVar2 = *(undefined4 *)(&UNK_10ddc4fd4 + (ulong)uVar3 * 4);
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  uVar3 = *(uint *)(param_2 + 0x50);
  if (uVar3 != 2) {
    uVar3 = (uint)(uVar3 == 1);
  }
  *(uint *)(param_1 + 0xc0) = uVar3;
  if (*(char *)(param_2 + 0x60) == '\x01') {
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0x58);
  }
  *(long *)(param_1 + 200) = (long)*(short *)(param_2 + 0xb2);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xb8);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001059717a4();
  }
  func_0x0001001a53d4(param_1 + 0x40,param_2 + 0xc0);
  if (*(char *)(param_2 + 0x128) == '\x01') {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001059717a4();
    }
    func_0x0001001a53d4(param_1 + 0x48,param_2 + 0x110);
  }
  if (*(char *)(param_2 + 0x148) == '\x01') {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001059717a4();
    }
    func_0x0001001a53d4(param_1 + 0x50,param_2 + 0x130);
  }
  if (*(char *)(param_2 + 0x168) == '\x01') {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001059717a4();
    }
    func_0x0001001a53d4(param_1 + 0x58,param_2 + 0x150);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001059717a4();
  }
  func_0x0001001a53d4(param_1 + 0x38,param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xc4) = 2;
  return;
}



/* Entry: 105970eb8; end: 105970f2f;  */

undefined8 * FUN_105970eb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c6c80;
  param_1[1] = 0;
  FUN_105990bd0();
  return param_1;
}



/* Entry: 105970f30; end: 105971067;  */

void FUN_105970f30(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_13d;
  undefined4 uStack_13c;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [169];
  undefined1 auStack_7f [23];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x00010061a77c(auStack_50);
  func_0x0001004896c8(auStack_60,param_4);
  func_0x00010055c758(&uStack_68);
  func_0x00010046a2d4(uStack_68,param_2);
  (**(code **)(*(long *)*param_2 + 0x10))(auStack_128);
  uStack_13c = 0xf;
  uStack_13d = 0;
  FUN_105971068(auStack_138,param_3,auStack_60,auStack_50,&uStack_68,&uStack_13c,auStack_7f,
                &uStack_13d);
  func_0x0001059710a4(param_1,auStack_138);
  func_0x000100561f40(auStack_138);
  func_0x000100469c34(auStack_128);
  func_0x00010055f5a0(&uStack_68);
  func_0x00010048b4e8(auStack_60);
  func_0x000100561d44(auStack_50);
  return;
}



/* Entry: 105971068; end: 1059710c7;  */

void FUN_105971068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uStack_11;
  
  FUN_1059714a8(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1059710c8; end: 10597110b;  */

long FUN_1059710c8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b838(param_1,*param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 10597110c; end: 105971157;  */

void FUN_10597110c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_DAT_110d9b690;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 105971158; end: 10597121b;  */

void FUN_105971158(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)param_1;
    FUN_10597121c();
    for (; (plVar1 != (long *)0x0 && (param_2 != param_3)); param_2 = param_2 + 0x30) {
      FUN_10597124c(param_1,plVar1 + 2,param_2);
      lVar2 = *plVar1;
      func_0x000105971280(param_1,plVar1);
      plVar1 = (long *)lVar2;
    }
    func_0x0001059717f4();
  }
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    func_0x0001002aa318(param_1,param_2);
  }
  return;
}



/* Entry: 10597121c; end: 10597124b;  */

long FUN_10597121c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return lVar1;
}



/* Entry: 10597124c; end: 1059712e3;  */

void FUN_10597124c(undefined8 param_1,long param_2,long param_3)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            (param_2 + 0x18,param_3 + 0x18);
  return;
}



/* Entry: 1059712e4; end: 10597140b;  */

long FUN_1059712e4(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = uVar4 - 1;
    if ((uVar4 & uVar5) == 0) {
      uVar6 = uVar5 & param_2;
    }
    else {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = param_2 / uVar4;
      }
      uVar6 = param_2;
      if (uVar4 <= param_2) {
        uVar6 = param_2 - uVar2 * uVar4;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar3 != (long *)0x0) {
      do {
        while( true ) {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_105971390;
          uVar2 = plVar3[1];
          if (uVar2 != param_2) break;
          uVar2 = (ulong)(plVar3 + 2);
          func_0x0001000e107c(uVar2,param_3);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        if ((uVar4 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (uVar4 <= uVar2) {
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar2 / uVar4;
          }
          uVar2 = uVar2 - uVar1 * uVar4;
        }
      } while (uVar2 == uVar6);
    }
  }
LAB_105971390:
  if ((uVar4 == 0) || (*(float *)(param_1 + 4) * (float)uVar4 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar4) {
      uVar5 = (ulong)((uVar4 & uVar4 - 1) != 0);
    }
    uVar5 = uVar5 | uVar4 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    func_0x00010028b120(param_1,uVar5);
  }
  return 0;
}



/* Entry: 10597140c; end: 1059714a7;  */

void FUN_10597140c(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar2 = param_1[1];
  uVar5 = param_2[1];
  uVar3 = uVar2 - 1;
  if ((uVar2 & uVar3) == 0) {
    uVar5 = uVar3 & uVar5;
  }
  else if (uVar2 <= uVar5) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar5 / uVar2;
    }
    uVar5 = uVar5 - uVar1 * uVar2;
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + uVar5 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    *(long **)(lVar4 + uVar5 * 8) = plVar6;
    if (*param_2 != 0) {
      uVar5 = *(ulong *)(*param_2 + 8);
      if ((uVar2 & uVar3) == 0) {
        uVar5 = uVar5 & uVar3;
      }
      else if (uVar2 <= uVar5) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        uVar5 = uVar5 - uVar3 * uVar2;
      }
      *(long **)(lVar4 + uVar5 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1059714a8; end: 105971577;  */

undefined8 *
FUN_1059714a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 auStack_70 [2];
  long lStack_60;
  undefined8 uStack_58;
  
  puVar2 = auStack_70;
  puVar3 = auStack_70;
  func_0x0001059717b8();
  uStack_58 = extraout_x8;
  func_0x00010055d588(auStack_70,1);
  FUN_105971578(lStack_60,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar1 = lStack_60;
  lStack_60 = 0;
  func_0x000100561d68(lVar1 + 0x18);
  func_0x000100561e6c();
  func_0x0001059717cc(uStack_58);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000100561e6c();
  func_0x00010597179c();
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_1107e9bc8;
  puVar3[1] = 0;
  FUN_1059715b4(puVar3 + 3);
  return puVar3;
}



/* Entry: 105971578; end: 1059715b3;  */

undefined8 * FUN_105971578(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107e9bc8;
  param_1[1] = 0;
  FUN_1059715b4(param_1 + 3);
  return param_1;
}



/* Entry: 1059715b4; end: 10597160b;  */

undefined8 FUN_1059715b4(undefined8 param_1)

{
  undefined8 *in_x4;
  undefined8 uStack_28;
  
  uStack_28 = *in_x4;
  *in_x4 = 0;
  func_0x00010055d67c();
  func_0x00010055f5a0(&uStack_28);
  return param_1;
}



/* Entry: 10597160c; end: 10597168f;  */

undefined1 * FUN_10597160c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x0001059717b8();
  uStack_28 = extraout_x8;
  FUN_105971690(auStack_40,1);
  FUN_1059716e4(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *unaff_x19 = lVar1 + 0x18;
  unaff_x19[1] = lVar1;
  func_0x00010597178c();
  func_0x0001059717cc(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010597178c();
  func_0x00010597179c();
  *(undefined8 *)(puVar3 + 8) = param_2;
  puVar2 = puVar3;
  FUN_1059716b8();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 105971690; end: 1059716b7;  */

long FUN_105971690(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1059716b8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1059716b8; end: 1059716e3;  */

undefined8 * FUN_1059716b8(undefined8 *param_1,ulong param_2)

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
  *param_1 = &PTR_FUN_1108c39a8;
  FUN_105971740(param_1 + 3);
  return param_1;
}



/* Entry: 1059716e4; end: 10597171b;  */

undefined8 * FUN_1059716e4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c39a8;
  FUN_105971740(param_1 + 3);
  return param_1;
}



/* Entry: 10597171c; end: 10597171f;  */

void FUN_10597171c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c39a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105971720; end: 105971733;  */

void FUN_105971720(void)

{
  FUN_10597177c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105971734; end: 10597173f;  */

void FUN_105971734(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000100561f34();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105971740; end: 10597177b;  */

undefined8 FUN_105971740(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1059899f0(param_1,&uStack_30);
  func_0x000100561f40(&uStack_30);
  return param_1;
}



/* Entry: 10597177c; end: 105971823;  */

void FUN_10597177c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c39a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105971824; end: 10597189b;  */

undefined8 *
FUN_105971824(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c39f8;
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_1 + 7) = param_4;
  param_1[8] = *param_5;
  (**(code **)(param_5[1] + 0x10))(param_1 + 9,param_5 + 1);
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  return param_1;
}



/* Entry: 10597189c; end: 105971f5f;  */

void FUN_10597189c(long param_1,undefined8 param_2,undefined4 param_3,long *param_4,long *param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int extraout_w10;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  long *plStack_320;
  long *plStack_318;
  undefined8 uStack_310;
  code *pcStack_300;
  undefined **ppuStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  code *pcStack_2d0;
  undefined **ppuStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  undefined4 uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined4 uStack_288;
  undefined4 uStack_128;
  long lStack_120;
  long alStack_118 [5];
  long lStack_f0;
  long alStack_e8 [5];
  uint uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  char cStack_78;
  undefined8 uStack_70;
  
  lVar17 = param_1;
  func_0x000105972f98();
  plVar15 = *(long **)(lVar17 + 0x70);
  *(long *)(lVar17 + 0x70) = (long)plVar15 + 1;
  uStack_70 = extraout_x8;
  FUN_105972350(&plStack_2a0);
  lStack_120 = *param_4;
  param_4 = param_4 + 1;
  uStack_128 = param_3;
  (**(code **)(*param_4 + 0x10))(alStack_118,param_4);
  lStack_f0 = *param_5;
  (**(code **)(param_5[1] + 0x10))(alStack_e8,param_5 + 1);
  uStack_c0 = uStack_c0 & 0xffffff00;
  cStack_78 = '\0';
  plVar16 = *(long **)(param_1 + 0x80);
  if (plVar16 != (long *)0x0) {
    uVar5 = (long)plVar16 - 1;
    if (((ulong)plVar16 & uVar5) == 0) {
      param_4 = (long *)(uVar5 & (ulong)plVar15);
    }
    else {
      param_4 = plVar15;
      if (plVar16 <= plVar15) {
        uVar9 = 0;
        if (plVar16 != (long *)0x0) {
          uVar9 = (ulong)plVar15 / (ulong)plVar16;
        }
        param_4 = (long *)((long)plVar15 - uVar9 * (long)plVar16);
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x78) + (long)param_4 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1059719bc;
          plVar10 = (long *)plVar8[1];
          if (plVar10 != plVar15) break;
          if ((long *)plVar8[2] == plVar15) goto LAB_105971d24;
        }
        if (((ulong)plVar16 & uVar5) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar5);
        }
        else if (plVar16 <= plVar10) {
          uVar9 = 0;
          if (plVar16 != (long *)0x0) {
            uVar9 = (ulong)plVar10 / (ulong)plVar16;
          }
          plVar10 = (long *)((long)plVar10 - uVar9 * (long)plVar16);
        }
      } while (plVar10 == param_4);
    }
  }
LAB_1059719bc:
  plVar10 = (long *)0x248;
  __Znwm();
  plVar8 = (long *)(param_1 + 0x88);
  uStack_310 = 1;
  *plVar10 = 0;
  plVar10[1] = (long)plVar15;
  plVar10[2] = (long)plVar15;
  plStack_320 = plVar10;
  plStack_318 = plVar8;
  FUN_10597266c(plVar10 + 3,&plStack_2a0);
  *(undefined4 *)(plVar10 + 0x32) = uStack_128;
  plVar10[0x33] = lStack_120;
  (**(code **)(alStack_118[0] + 0x10))(plVar10 + 0x34,alStack_118);
  plVar10[0x39] = lStack_f0;
  (**(code **)(alStack_e8[0] + 0x10))(plVar10 + 0x3a,alStack_e8);
  *(undefined1 *)(plVar10 + 0x3f) = 0;
  *(undefined1 *)(plVar10 + 0x48) = 0;
  if (cStack_78 == '\x01') {
    *(uint *)(plVar10 + 0x3f) = uStack_c0;
    plVar10[0x42] = lStack_a8;
    plVar10[0x41] = lStack_b0;
    plVar10[0x40] = lStack_b8;
    lStack_b0 = 0;
    lStack_b8 = 0;
    plVar10[0x45] = lStack_90;
    plVar10[0x44] = lStack_98;
    plVar10[0x43] = lStack_a0;
    lStack_98 = 0;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_90 = 0;
    *(undefined4 *)(plVar10 + 0x47) = uStack_80;
    plVar10[0x46] = lStack_88;
    *(undefined1 *)(plVar10 + 0x48) = 1;
  }
  fVar18 = (float)(*(long *)(param_1 + 0x90) + 1);
  if ((plVar16 == (long *)0x0) || (*(float *)(param_1 + 0x98) * (float)plVar16 < fVar18)) {
    uVar5 = 1;
    if ((long *)0x2 < plVar16) {
      uVar5 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
    }
    plVar6 = (long *)(uVar5 | (long)plVar16 << 1);
    plVar16 = (long *)(long)(fVar18 / *(float *)(param_1 + 0x98));
    if (plVar6 <= plVar16) {
      plVar6 = plVar16;
    }
    if ((long)plVar6 - 1U == 0) {
      plVar6 = (long *)0x2;
    }
    else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar16 = *(long **)(param_1 + 0x80);
    if (plVar16 < plVar6) {
LAB_105971b24:
      if ((ulong)plVar6 >> 0x3d != 0) goto LAB_105971f04;
      lVar17 = (long)plVar6 << 3;
      __Znwm(lVar17);
      func_0x00010597284c(param_1 + 0x78,lVar17);
      *(long **)(param_1 + 0x80) = plVar6;
      lVar17 = *(long *)(param_1 + 0x78);
      for (plVar16 = (long *)0x0; plVar6 != plVar16; plVar16 = (long *)((long)plVar16 + 1)) {
        *(undefined8 *)(lVar17 + (long)plVar16 * 8) = 0;
      }
      plVar11 = (long *)*plVar8;
      plVar16 = plVar6;
      if (plVar11 != (long *)0x0) {
        plVar12 = (long *)plVar11[1];
        uVar9 = (long)plVar6 - 1;
        uVar5 = 0;
        if (plVar6 != (long *)0x0) {
          uVar5 = (ulong)plVar12 / (ulong)plVar6;
        }
        plVar13 = plVar12;
        if (plVar6 <= plVar12) {
          plVar13 = (long *)((long)plVar12 - uVar5 * (long)plVar6);
        }
        if (((ulong)plVar6 & uVar9) == 0) {
          plVar13 = (long *)((ulong)plVar12 & uVar9);
        }
        *(long **)(lVar17 + (long)plVar13 * 8) = plVar8;
        while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
          plVar14 = (long *)plVar11[1];
          if (((ulong)plVar6 & uVar9) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar9);
          }
          else if (plVar6 <= plVar14) {
            uVar5 = 0;
            if (plVar6 != (long *)0x0) {
              uVar5 = (ulong)plVar14 / (ulong)plVar6;
            }
            plVar14 = (long *)((long)plVar14 - uVar5 * (long)plVar6);
          }
          if (plVar14 != plVar13) {
            if (*(long *)(lVar17 + (long)plVar14 * 8) == 0) {
              *(long **)(lVar17 + (long)plVar14 * 8) = plVar12;
              plVar13 = plVar14;
            }
            else {
              *plVar12 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar17 + (long)plVar14 * 8);
              **(long **)(lVar17 + (long)plVar14 * 8) = (long)plVar11;
              plVar11 = plVar12;
            }
          }
        }
      }
    }
    else if (plVar6 < plVar16) {
      plVar11 = (long *)(long)((float)*(ulong *)(param_1 + 0x90) / *(float *)(param_1 + 0x98));
      if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar11) {
        plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 - 1) & 0x3fU));
      }
      if (plVar6 <= plVar11) {
        plVar6 = plVar11;
      }
      if (plVar6 < plVar16) {
        if (plVar6 != (long *)0x0) goto LAB_105971b24;
        func_0x00010597284c(param_1 + 0x78,0);
        *(undefined8 *)(param_1 + 0x80) = 0;
        plVar16 = (long *)0x0;
      }
      else {
        plVar16 = *(long **)(param_1 + 0x80);
      }
    }
    if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
      param_4 = (long *)((long)plVar16 - 1U & (ulong)plVar15);
    }
    else {
      param_4 = plVar15;
      if (plVar16 <= plVar15) {
        uVar5 = 0;
        if (plVar16 != (long *)0x0) {
          uVar5 = (ulong)plVar15 / (ulong)plVar16;
        }
        param_4 = (long *)((long)plVar15 - uVar5 * (long)plVar16);
      }
    }
  }
  lVar17 = *(long *)(param_1 + 0x78);
  plVar6 = *(long **)(lVar17 + (long)param_4 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar10 = *plVar8;
    *plVar8 = (long)plVar10;
    *(long **)(lVar17 + (long)param_4 * 8) = plVar8;
    if (*plVar10 != 0) {
      plVar8 = *(long **)(*plVar10 + 8);
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar16 - 1U);
      }
      else if (plVar16 <= plVar8) {
        uVar5 = 0;
        if (plVar16 != (long *)0x0) {
          uVar5 = (ulong)plVar8 / (ulong)plVar16;
        }
        plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar16);
      }
      *(long **)(lVar17 + (long)plVar8 * 8) = plVar10;
    }
  }
  else {
    *plVar10 = *plVar6;
    *plVar6 = (long)plVar10;
  }
  plStack_320 = (long *)0x0;
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  func_0x000105972fc4();
LAB_105971d24:
  FUN_1059724ac(&plStack_2a0);
  plVar16 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar16 + 0x10))();
  func_0x0001059728a8(&plStack_2a0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  plStack_318 = plStack_298;
  plStack_320 = plStack_2a0;
  if (plStack_298 != (long *)0x0) {
    do {
      func_0x000105972fa8();
    } while (extraout_w10 != 0);
  }
  func_0x0001059728e4(&plStack_2a0);
  lVar17 = 1;
  while( true ) {
    plVar8 = *(long **)(param_1 + 0x28);
    uVar4 = lVar17 == 4;
    plStack_290 = plVar15;
    if ((bool)uVar4) break;
    lVar7 = *(long *)(&UNK_10ddc4fe8 + lVar17 * 8);
    plStack_2a0 = plStack_320;
    plStack_298 = plStack_318;
    uStack_2a8 = (undefined4)lVar17;
    if (plStack_318 == (long *)0x0) {
      plStack_2b8 = (long *)0x0;
    }
    else {
      plVar10 = plStack_318 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = *plVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_2b8 = plStack_318;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = *plVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plStack_2c0 = plStack_320;
    pcStack_2d0 = FUN_105972908;
    ppuStack_2c8 = &PTR_FUN_1108c3a58;
    plStack_2b0 = plVar15;
    uStack_288 = uStack_2a8;
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar16 + lVar7 * 0x1e848,&pcStack_2d0);
    func_0x000105972ed8(ppuStack_2c8);
    func_0x000105972fe0();
    lVar17 = lVar17 + 1;
  }
  plStack_2a0 = plStack_320;
  plStack_298 = plStack_318;
  if (plStack_318 != (long *)0x0) {
    plVar10 = plStack_318 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_300 = FUN_1059729cc;
  ppuStack_2f8 = &PTR_FUN_1108c3a70;
  plStack_2f0 = plStack_320;
  plStack_2e8 = plStack_318;
  if (plStack_318 != (long *)0x0) {
    plVar10 = plStack_318 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_2e0 = plVar15;
  (**(code **)(*plVar8 + 0x18))(plVar8,plVar16 + 1250000000,&pcStack_300);
  func_0x000105972ed8(ppuStack_2f8);
  func_0x000105972fe0();
  FUN_105971f60(param_1,plVar15,0);
  func_0x000105972648(&plStack_320);
  func_0x000105972f34(uStack_70);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_105971f04:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x105971f0c);
  (*pcVar3)();
}



/* Entry: 105971f60; end: 10597212f;  */

long * FUN_105971f60(long param_1,code **param_2,code **param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  code **ppcVar7;
  code **ppcVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar9;
  ulong uVar10;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  code **ppcVar18;
  long lStack_178;
  long alStack_170 [5];
  undefined8 uStack_148;
  long lStack_140;
  code **ppcStack_138;
  code **ppcStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_108;
  long lStack_100;
  code **ppcStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  long lStack_e0;
  code **ppcStack_d8;
  undefined4 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  long lStack_a0;
  code **ppcStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  code **ppcStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  lVar9 = param_1;
  ppcVar7 = param_2;
  ppcVar8 = param_3;
  func_0x000105972f98();
  lVar9 = lVar9 + 0x78;
  uStack_58 = extraout_x8;
  func_0x000105972b6c();
  plVar4 = (long *)0x0;
  ppcVar18 = param_2;
  if (lVar9 != 0) {
    func_0x0001059728a8(&lStack_e8,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    lStack_c8 = lStack_e8;
    lStack_c0 = lStack_e0;
    if (lStack_e0 != 0) {
      do {
        func_0x000105972fa8();
      } while (extraout_w10 != 0);
    }
    func_0x0001059728e4(&lStack_e8);
    plVar4 = *(long **)(param_1 + 0x18);
    ppcVar8 = (code **)(ulong)*(uint *)(lVar9 + 400);
    if (lStack_e0 != 0) {
      do {
        func_0x000105972fa8();
      } while (extraout_w10_00 != 0);
    }
    uVar17 = SUB84(param_3,0);
    pcStack_88 = FUN_105972c04;
    ppuStack_80 = &PTR_FUN_1108c3a88;
    lStack_78 = lStack_e8;
    lStack_70 = lStack_e0;
    ppcStack_d8 = param_2;
    uStack_d0 = uVar17;
    ppcStack_68 = param_2;
    uStack_60 = uVar17;
    if (lStack_e0 != 0) {
      do {
        func_0x000105972fa8();
      } while (extraout_w10_01 != 0);
      ppcStack_68 = ppcStack_d8;
      uStack_60 = uStack_d0;
      do {
        func_0x000105972fa8();
      } while (extraout_w10_02 != 0);
    }
    lStack_108 = lStack_e8;
    lStack_100 = lStack_e0;
    uStack_f0 = *(undefined4 *)(lVar9 + 400);
    pcStack_b8 = FUN_105972cac;
    ppuStack_b0 = &PTR_FUN_1108c3aa0;
    lStack_a8 = lStack_e8;
    lStack_a0 = lStack_e0;
    if (lStack_e0 != 0) {
      plVar5 = (long *)(lStack_e0 + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    param_3 = &pcStack_88;
    ppcVar18 = &pcStack_b8;
    uStack_90 = CONCAT44(uVar17,uStack_f0);
    ppcVar7 = (code **)(lVar9 + 0x18);
    ppcStack_f8 = param_2;
    uStack_ec = uVar17;
    ppcStack_98 = param_2;
    (**(code **)(*plVar4 + 0x10))();
    func_0x000105972f88();
    func_0x000105972648(&lStack_108);
    func_0x000105972f78();
    func_0x000105972648(&lStack_e8);
    plVar4 = &lStack_c8;
    func_0x000105972648();
  }
  func_0x000105972f34(uStack_58);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x000105972f88();
  func_0x000105972648(&lStack_108);
  func_0x000105972f78();
  func_0x000105972648(&lStack_e8);
  plVar5 = &lStack_c8;
  func_0x000105972648();
  func_0x000105972f2c();
  pcStack_118 = FUN_105972130;
  plVar6 = plVar5;
  lStack_140 = param_1;
  ppcStack_138 = ppcVar18;
  ppcStack_130 = param_3;
  plStack_128 = plVar4;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x000105972f98();
  plVar6 = plVar6 + 0xf;
  uStack_148 = extraout_x8_00;
  func_0x000105972b6c();
  plVar4 = (long *)0x0;
  if (plVar6 == (long *)0x0) goto LAB_1059722bc;
  lStack_178 = plVar6[0x39];
  plVar4 = alStack_170;
  ppcVar7 = (code **)(plVar6 + 0x3a);
  (**(code **)(plVar6[0x3a] + 0x10))();
  uVar11 = plVar5[0x10];
  lVar9 = *plVar6;
  uVar10 = plVar6[1];
  uVar13 = uVar11 - 1;
  if ((uVar11 & uVar13) == 0) {
    uVar10 = uVar13 & uVar10;
  }
  else if (uVar11 <= uVar10) {
    uVar15 = 0;
    if (uVar11 != 0) {
      uVar15 = uVar10 / uVar11;
    }
    uVar10 = uVar10 - uVar15 * uVar11;
  }
  lVar14 = plVar5[0xf];
  plVar3 = *(long **)(lVar14 + uVar10 * 8);
  do {
    plVar12 = plVar3;
    plVar3 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar6);
  in_ZR = true;
  if (plVar12 == plVar5 + 0x11) {
LAB_1059721fc:
    if (lVar9 == 0) {
LAB_105972230:
      *(undefined8 *)(lVar14 + uVar10 * 8) = 0;
      lVar9 = *plVar6;
      goto LAB_105972238;
    }
    uVar15 = *(ulong *)(lVar9 + 8);
    if ((uVar11 & uVar13) == 0) {
      uVar16 = uVar15 & uVar13;
    }
    else {
      uVar16 = uVar15;
      if (uVar11 <= uVar15) {
        uVar16 = 0;
        if (uVar11 != 0) {
          uVar16 = uVar15 / uVar11;
        }
        uVar16 = uVar15 - uVar16 * uVar11;
      }
    }
    in_ZR = uVar16 == uVar10;
    if (!(bool)in_ZR) goto LAB_105972230;
LAB_105972240:
    if ((uVar11 & uVar13) == 0) {
      uVar15 = uVar15 & uVar13;
    }
    else if (uVar11 <= uVar15) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar15 / uVar11;
      }
      uVar15 = uVar15 - uVar13 * uVar11;
    }
    in_ZR = uVar15 == uVar10;
    if (!(bool)in_ZR) {
      *(long **)(lVar14 + uVar15 * 8) = plVar12;
      lVar9 = *plVar6;
    }
  }
  else {
    uVar15 = plVar12[1];
    if ((uVar11 & uVar13) == 0) {
      uVar15 = uVar15 & uVar13;
    }
    else if (uVar11 <= uVar15) {
      uVar16 = 0;
      if (uVar11 != 0) {
        uVar16 = uVar15 / uVar11;
      }
      uVar15 = uVar15 - uVar16 * uVar11;
    }
    in_ZR = uVar15 == uVar10;
    if (!(bool)in_ZR) goto LAB_1059721fc;
LAB_105972238:
    if (lVar9 != 0) {
      uVar15 = *(ulong *)(lVar9 + 8);
      goto LAB_105972240;
    }
  }
  *plVar12 = lVar9;
  *plVar6 = 0;
  plVar5[0x12] = plVar5[0x12] + -1;
  func_0x000105972fc4();
  if ((*(byte *)(alStack_170[0] + 8) & 1) == 0) {
    plVar4 = &lStack_178;
    FUN_10596fecc();
    ppcVar7 = ppcVar8;
  }
  func_0x000105972ed8(alStack_170[0]);
LAB_1059722bc:
  func_0x000105972f34(uStack_148);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105972ed8(alStack_170[0]);
    func_0x000105972f2c();
    *(undefined4 *)plVar4 = *(undefined4 *)ppcVar7;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar4 + 1,ppcVar7 + 1)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar4 + 4,ppcVar7 + 4)
    ;
    uVar17 = *(undefined4 *)(ppcVar7 + 8);
    plVar4[7] = (long)ppcVar7[7];
    *(undefined4 *)(plVar4 + 8) = uVar17;
    return plVar4;
  }
  return plVar4;
}



/* Entry: 105972130; end: 1059722ef;  */

long * FUN_105972130(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lStack_68;
  long alStack_60 [5];
  undefined8 uStack_38;
  
  lVar4 = param_1;
  func_0x000105972f98();
  plVar2 = (long *)(lVar4 + 0x78);
  uStack_38 = extraout_x8;
  func_0x000105972b6c();
  plVar3 = (long *)0x0;
  if (plVar2 == (long *)0x0) goto LAB_1059722bc;
  lStack_68 = plVar2[0x39];
  plVar3 = alStack_60;
  param_2 = plVar2 + 0x3a;
  (**(code **)(plVar2[0x3a] + 0x10))();
  uVar6 = *(ulong *)(param_1 + 0x80);
  lVar4 = *plVar2;
  uVar5 = plVar2[1];
  uVar8 = uVar6 - 1;
  if ((uVar6 & uVar8) == 0) {
    uVar5 = uVar8 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar10 * uVar6;
  }
  lVar9 = *(long *)(param_1 + 0x78);
  plVar1 = *(long **)(lVar9 + uVar5 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  in_ZR = true;
  if (plVar7 == (long *)(param_1 + 0x88)) {
LAB_1059721fc:
    if (lVar4 == 0) {
LAB_105972230:
      *(undefined8 *)(lVar9 + uVar5 * 8) = 0;
      lVar4 = *plVar2;
      goto LAB_105972238;
    }
    uVar10 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar8) == 0) {
      uVar11 = uVar10 & uVar8;
    }
    else {
      uVar11 = uVar10;
      if (uVar6 <= uVar10) {
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar10 / uVar6;
        }
        uVar11 = uVar10 - uVar11 * uVar6;
      }
    }
    in_ZR = uVar11 == uVar5;
    if (!(bool)in_ZR) goto LAB_105972230;
LAB_105972240:
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar8 * uVar6;
    }
    in_ZR = uVar10 == uVar5;
    if (!(bool)in_ZR) {
      *(long **)(lVar9 + uVar10 * 8) = plVar7;
      lVar4 = *plVar2;
    }
  }
  else {
    uVar10 = plVar7[1];
    if ((uVar6 & uVar8) == 0) {
      uVar10 = uVar10 & uVar8;
    }
    else if (uVar6 <= uVar10) {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar11 * uVar6;
    }
    in_ZR = uVar10 == uVar5;
    if (!(bool)in_ZR) goto LAB_1059721fc;
LAB_105972238:
    if (lVar4 != 0) {
      uVar10 = *(ulong *)(lVar4 + 8);
      goto LAB_105972240;
    }
  }
  *plVar7 = lVar4;
  *plVar2 = 0;
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + -1;
  func_0x000105972fc4();
  if ((*(byte *)(alStack_60[0] + 8) & 1) == 0) {
    plVar3 = &lStack_68;
    FUN_10596fecc();
    param_2 = param_3;
  }
  func_0x000105972ed8(alStack_60[0]);
LAB_1059722bc:
  func_0x000105972f34(uStack_38);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x000105972ed8(alStack_60[0]);
  func_0x000105972f2c();
  *(int *)plVar3 = (int)*param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar3 + 1,param_2 + 1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar3 + 4,param_2 + 4);
  lVar4 = param_2[8];
  plVar3[7] = param_2[7];
  *(int *)(plVar3 + 8) = (int)lVar4;
  return plVar3;
}



/* Entry: 1059722f0; end: 105972337;  */

undefined4 * FUN_1059722f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 2,param_2 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 8,param_2 + 8);
  uVar1 = param_2[0x10];
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  param_1[0x10] = uVar1;
  return param_1;
}



/* Entry: 105972338; end: 10597233b;  */

long FUN_105972338(long param_1)

{
  func_0x000105972560(param_1 + 0x78);
  (*(code *)**(undefined8 **)(param_1 + 0x48))();
  FUN_105972600(param_1 + 0x28);
  func_0x000105972624(param_1 + 0x18);
  func_0x000105972648(param_1 + 8);
  return param_1;
}



/* Entry: 10597233c; end: 10597234f;  */

void FUN_10597233c(void)

{
  FUN_105972514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105972350; end: 1059724ab;  */

long FUN_105972350(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x30,param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x51);
  *(undefined8 *)(param_1 + 0x59) = *(undefined8 *)(param_2 + 0x59);
  *(undefined8 *)(param_1 + 0x51) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  func_0x00010028af84(param_1 + 0x68,param_2 + 0x68);
  func_0x00010028af84(param_1 + 0x88,param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0xb0);
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0xc0,param_2 + 0xc0);
  func_0x00010028af84(param_1 + 0xd8,param_2 + 0xd8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0xf8,param_2 + 0xf8);
  func_0x00010028af84(param_1 + 0x110,param_2 + 0x110);
  func_0x00010028af84(param_1 + 0x130,param_2 + 0x130);
  func_0x00010028af84(param_1 + 0x150,param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  return param_1;
}



/* Entry: 1059724ac; end: 1059724f3;  */

void FUN_1059724ac(long param_1)

{
  FUN_1059724f4(param_1 + 0x1e0);
  (*(code *)**(undefined8 **)(param_1 + 0x1b8))(param_1 + 0x1b8);
  (*(code *)**(undefined8 **)(param_1 + 0x188))(param_1 + 0x188);
  func_0x0001001148fc(param_1 + 0x150);
  func_0x0001001148fc(param_1 + 0x130);
  func_0x0001001148fc(param_1 + 0x110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf8);
  func_0x0001001148fc(param_1 + 0xd8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xc0);
  func_0x0001001148fc(param_1 + 0x88);
  func_0x0001001148fc(param_1 + 0x68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1059724f4; end: 105972513;  */

void FUN_1059724f4(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x000100601c8c();
  }
  return;
}



/* Entry: 105972514; end: 1059725e7;  */

long FUN_105972514(long param_1)

{
  func_0x000105972560(param_1 + 0x78);
  (*(code *)**(undefined8 **)(param_1 + 0x48))();
  FUN_105972600(param_1 + 0x28);
  func_0x000105972624(param_1 + 0x18);
  func_0x000105972648(param_1 + 8);
  return param_1;
}



/* Entry: 1059725e8; end: 1059725ff;  */

void FUN_1059725e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105972600; end: 10597266b;  */

void FUN_105972600(long param_1)

{
  func_0x000105972fe8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10597266c; end: 105972863;  */

void FUN_10597266c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  uVar2 = param_2[10];
  uVar1 = param_2[9];
  uVar4 = *(undefined8 *)((long)param_2 + 0x59);
  uVar3 = *(undefined8 *)((long)param_2 + 0x51);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((long)param_1 + 0x59) = uVar4;
  *(undefined8 *)((long)param_1 + 0x51) = uVar3;
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    uVar2 = param_2[0xe];
    uVar1 = param_2[0xd];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0xd] = uVar1;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xd] = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_2 + 0x14) == '\x01') {
    uVar2 = param_2[0x12];
    uVar1 = param_2[0x11];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    param_1[0x11] = uVar1;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x11] = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  uVar2 = param_2[0x16];
  uVar1 = param_2[0x15];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar2;
  param_1[0x15] = uVar1;
  uVar2 = param_2[0x19];
  uVar1 = param_2[0x18];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar2;
  param_1[0x18] = uVar1;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x18] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  if (*(char *)(param_2 + 0x1e) == '\x01') {
    uVar2 = param_2[0x1c];
    uVar1 = param_2[0x1b];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar2;
    param_1[0x1b] = uVar1;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x1b] = 0;
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  uVar2 = param_2[0x20];
  uVar1 = param_2[0x1f];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar2;
  param_1[0x1f] = uVar1;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  if (*(char *)(param_2 + 0x25) == '\x01') {
    uVar2 = param_2[0x23];
    uVar1 = param_2[0x22];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = uVar2;
    param_1[0x22] = uVar1;
    param_2[0x23] = 0;
    param_2[0x24] = 0;
    param_2[0x22] = 0;
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(char *)(param_2 + 0x29) == '\x01') {
    uVar2 = param_2[0x27];
    uVar1 = param_2[0x26];
    param_1[0x28] = param_2[0x28];
    param_1[0x27] = uVar2;
    param_1[0x26] = uVar1;
    param_2[0x27] = 0;
    param_2[0x28] = 0;
    param_2[0x26] = 0;
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    uVar2 = param_2[0x2b];
    uVar1 = param_2[0x2a];
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2b] = uVar2;
    param_1[0x2a] = uVar1;
    param_2[0x2b] = 0;
    param_2[0x2c] = 0;
    param_2[0x2a] = 0;
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  return;
}



/* Entry: 105972864; end: 105972907;  */

long * FUN_105972864(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1059724ac(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 105972908; end: 105972953;  */

void FUN_105972908(long param_1)

{
  long alStack_30 [2];
  
  FUN_105972954(alStack_30,param_1 + 0x10);
  if (alStack_30[0] != 0) {
    FUN_105971f60(alStack_30[0],*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  }
  func_0x000105972f70();
  return;
}



/* Entry: 105972954; end: 105972993;  */

void FUN_105972954(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 105972994; end: 1059729cb;  */

void FUN_105972994(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000105972fe8();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1059729cc; end: 105972b2b;  */

void FUN_1059729cc(long param_1)

{
  long *plVar1;
  long alStack_d8 [2];
  undefined4 auStack_c8 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [24];
  undefined4 auStack_68 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  plVar1 = alStack_d8;
  FUN_105972954(plVar1,param_1 + 0x10);
  if ((alStack_d8[0] != 0) && (func_0x000105972fd4(), plVar1 != (long *)0x0)) {
    auStack_68[0] = 0;
    uStack_2c = uStack_2c & 0xffffff00;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffff00;
    uStack_28 = 0;
    if ((char)plVar1[0x48] == '\x01') {
      FUN_1059722f0(auStack_68,plVar1 + 0x3f);
    }
    else {
      func_0x00010002b838(auStack_80,&UNK_10f315db3);
      func_0x000105394120(auStack_c8,4,auStack_80);
      func_0x00010083339c(auStack_68,auStack_c8);
      func_0x000105972fcc();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    }
    uStack_98 = uStack_38;
    uStack_28 = CONCAT13(1,(undefined3)uStack_28);
    auStack_c8[0] = auStack_68[0];
    uStack_b8 = uStack_58;
    uStack_c0 = uStack_60;
    uStack_b0 = uStack_50;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_a0 = uStack_40;
    uStack_a8 = uStack_48;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_88 = uStack_28;
    uStack_90 = CONCAT44(uStack_2c,uStack_30);
    uStack_38 = 0;
    func_0x000105972f48();
    func_0x000105972fcc();
    func_0x000100601c8c(auStack_68);
  }
  func_0x0001059728e4(alStack_d8);
  return;
}



/* Entry: 105972b2c; end: 105972c03;  */

void FUN_105972b2c(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000105972fe8();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 105972c04; end: 105972c73;  */

void FUN_105972c04(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long alStack_30 [2];
  
  FUN_105972954(alStack_30,param_2 + 0x10);
  if (alStack_30[0] != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    lVar2 = alStack_30[0] + 0x78;
    func_0x000105972b6c(lVar2,*(undefined8 *)(param_2 + 0x20));
    if ((lVar2 != 0) && ((*(byte *)(*(long *)(lVar2 + 0x1a0) + 8) & 1) == 0)) {
      (**(code **)(lVar2 + 0x198))(uVar1,lVar2 + 0x198);
    }
  }
  func_0x000105972f70();
  return;
}



/* Entry: 105972c74; end: 105972cab;  */

void FUN_105972c74(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000105972fe8();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 105972cac; end: 105972e97;  */

void FUN_105972cac(int *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int aiStack_138 [2];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  int aiStack_f0 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  long alStack_a8 [2];
  undefined1 auStack_98 [72];
  
  uStack_128 = *(undefined8 *)(param_1 + 4);
  uStack_130 = *(undefined8 *)(param_1 + 2);
  uStack_120 = *(undefined8 *)(param_1 + 6);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_110 = *(undefined8 *)(param_1 + 10);
  uStack_118 = *(undefined8 *)(param_1 + 8);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iStack_f8 = param_1[0x10];
  uStack_108 = *(undefined8 *)(param_1 + 0xc);
  uStack_100 = *(undefined8 *)(param_1 + 0xe);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  iVar8 = *param_1;
  aiStack_138[0] = iVar8;
  FUN_105972954(alStack_a8,param_2 + 0x10);
  uVar4 = uStack_108;
  uVar3 = uStack_110;
  uVar2 = uStack_118;
  if (alStack_a8[0] == 0) goto LAB_105972e38;
  piVar6 = (int *)(ulong)*(uint *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uStack_e0 = uStack_128;
  uStack_e8 = uStack_130;
  uStack_d8 = uStack_120;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  iStack_b0 = iStack_f8;
  uStack_c8 = uVar3;
  uStack_d0 = uVar2;
  uStack_c0 = uVar4;
  uStack_b8 = uStack_100;
  piVar5 = aiStack_f0;
  aiStack_f0[0] = iVar8;
  func_0x00010596f440();
  piVar7 = piVar5;
  if ((*(byte *)(*(long *)(alStack_a8[0] + 0x48) + 8) & 1) == 0) {
    (**(code **)(alStack_a8[0] + 0x40))(piVar6,uVar1,aiStack_f0,piVar5);
    piVar7 = piVar6;
  }
  func_0x000105972fd4();
  if (piVar7 != (int *)0x0) {
    if ((char)piVar7[0x90] == '\x01') {
      FUN_1059722f0(piVar7 + 0x7e,aiStack_f0);
    }
    else {
      func_0x000100601a6c(piVar7 + 0x7e,aiStack_f0);
      *(undefined8 *)(piVar7 + 0x8c) = uStack_b8;
      piVar7[0x8e] = iStack_b0;
      *(undefined1 *)(piVar7 + 0x90) = 1;
    }
    iVar8 = (int)piVar5;
    if ((iVar8 == 0) || (aiStack_f0[0] == 1)) {
      func_0x000105972eec(auStack_98);
      func_0x000105972f48();
    }
    else {
      if ((*(int *)(alStack_a8[0] + 0x38) != 0) || (iVar8 != 4 && iVar8 != 1)) goto LAB_105972e30;
      func_0x000105972eec(auStack_98);
      func_0x000105972f48();
    }
    func_0x000100601c8c(piVar5);
  }
LAB_105972e30:
  func_0x000100601c8c(aiStack_f0);
LAB_105972e38:
  func_0x0001059728e4(alStack_a8);
  func_0x000100601c8c(aiStack_138);
  return;
}



/* Entry: 105972e98; end: 105972ff3;  */

void FUN_105972e98(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000105972fe8();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 105972ff4; end: 1059730ef;  */

void FUN_105972ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined1 auStack_200 [128];
  undefined1 auStack_180 [48];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 auStack_128 [216];
  
  func_0x0001059737cc();
  FUN_10595dd78(auStack_200);
  func_0x000100900140(auStack_180,param_3);
  uStack_148 = param_4[1];
  uStack_150 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  uStack_138 = param_5[1];
  uStack_140 = *param_5;
  *param_5 = 0;
  param_5[1] = 0;
  *(undefined1 *)(unaff_x19 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x18) = 0;
  uStack_130 = param_6;
  uStack_12f = param_7;
  FUN_10597336c(auStack_128,auStack_200);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  puVar1 = (undefined8 *)0xe0;
  __Znwm();
  *puVar1 = &PTR_SUB_1108c3b08;
  FUN_10597336c(puVar1 + 1,auStack_128);
  *(undefined8 **)(unaff_x19 + 0x38) = puVar1;
  FUN_1059730f0(auStack_128);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  FUN_1059730f0(auStack_200);
  return;
}



/* Entry: 1059730f0; end: 105973127;  */

void FUN_1059730f0(long param_1)

{
  func_0x00010048b850(param_1 + 0xc0);
  func_0x000100450be4(param_1 + 0xb0);
  func_0x0001009001f4(param_1 + 0x80);
  func_0x0001001148fc(param_1 + 0x58);
  func_0x0001001148fc(param_1 + 0x38);
  func_0x0001001148fc(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 105973128; end: 10597326f;  */

long * FUN_105973128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                    undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int extraout_w10;
  long lStack_c0;
  undefined8 **ppuStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [40];
  undefined8 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c0 = param_1 + 8;
  if (*(long *)(param_1 + 0x40) != -1) {
    plStack_b0 = &lStack_c0;
    ppuStack_b8 = &plStack_b0;
    __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(param_1 + 0x40),&ppuStack_b8,FUN_105973288);
  }
  plVar1 = *(long **)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x0001059737ac();
    } while (extraout_w10 != 0);
  }
  uStack_78 = *param_4;
  (**(code **)(param_4[1] + 0x10))(auStack_70,param_4 + 1);
  uStack_a8 = *param_5;
  (**(code **)(param_5[1] + 0x10))(auStack_a0,param_5 + 1);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3,&uStack_78,&uStack_a8);
  func_0x000105973794();
  func_0x000105973784();
  func_0x0001059737bc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar1;
  }
  ___stack_chk_fail();
  plVar2 = plVar1;
  func_0x0001059737c4();
  func_0x0001059737cc();
  plVar3 = (long *)plVar2[7];
  if (plVar3 == plVar2 + 4) {
    lVar4 = 0x20;
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_105973338;
    lVar4 = 0x28;
  }
  (**(code **)(*plVar3 + lVar4))();
LAB_105973338:
  FUN_10597334c(plVar1 + 1);
  return plVar1;
}



/* Entry: 105973270; end: 105973273;  */

void FUN_105973270(long param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  
  func_0x0001059737cc();
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 == (long *)(param_1 + 0x20)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_105973338;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_105973338:
  FUN_10597334c(unaff_x19 + 8);
  return;
}



/* Entry: 105973274; end: 105973287;  */

void FUN_105973274(void)

{
  func_0x0001059732fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105973288; end: 10597334b;  */

long * FUN_105973288(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lStack_30;
  long lStack_28;
  
  plVar4 = (long *)**(undefined8 **)*param_1;
  plVar1 = (long *)plVar4[6];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(&lStack_30);
    if ((char)plVar4[2] == '\x01') {
      plVar1 = plVar4;
      func_0x000105972624(plVar4);
    }
    plVar4[1] = lStack_28;
    *plVar4 = lStack_30;
    lStack_30 = 0;
    lStack_28 = 0;
    *(undefined1 *)(plVar4 + 2) = 1;
    func_0x0001059737bc();
    return plVar1;
  }
  func_0x000104bfeb48();
  func_0x0001059737cc();
  plVar2 = (long *)plVar1[7];
  if (plVar2 == plVar1 + 4) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_105973338;
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_105973338:
  FUN_10597334c(plVar4 + 1);
  return plVar4;
}



/* Entry: 10597334c; end: 10597336b;  */

void FUN_10597334c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000105972624();
  }
  return;
}



/* Entry: 10597336c; end: 1059733e7;  */

long FUN_10597336c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  FUN_10595dd78();
  func_0x000100900140(lVar1 + 0x80,param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(param_2 + 0xd0);
  return param_1;
}



/* Entry: 1059733e8; end: 1059733fb;  */

void FUN_1059733e8(void)

{
  func_0x0001059733bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059733fc; end: 10597343b;  */

undefined8 FUN_1059733fc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xe0;
  __Znwm(0xe0);
  FUN_1059735bc();
  return uVar1;
}



/* Entry: 10597343c; end: 105973467;  */

undefined8 * FUN_10597343c(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_1108c3b08;
  FUN_10597365c(param_2 + 1);
  FUN_1059736dc(param_2 + 0x11,param_1 + 0x88);
  lVar1 = *(long *)(param_1 + 0xc0);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  param_2[0x18] = *(undefined8 *)(param_1 + 0xc0);
  param_2[0x17] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001059737ac();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(param_1 + 0xd0);
  uVar2 = *(undefined8 *)(param_1 + 200);
  param_2[0x1a] = *(undefined8 *)(param_1 + 0xd0);
  param_2[0x19] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001059737ac();
    } while (extraout_w10_00 != 0);
  }
  *(undefined2 *)(param_2 + 0x1b) = *(undefined2 *)(param_1 + 0xd8);
  return param_2;
}


