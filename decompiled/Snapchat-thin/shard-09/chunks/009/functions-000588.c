/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072b08a0; end: 1072b08af;  */

void FUN_1072b08a0(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001072afb0c(param_1 + 0x138);
  if (extraout_x8 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  func_0x0001072af848();
  func_0x0001072ac994();
  return;
}



/* Entry: 1072b08b0; end: 1072b0927;  */

void FUN_1072b08b0(long param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  int extraout_w12;
  undefined1 auStack_20 [16];
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x0001072b11ac();
    } while (extraout_w12 != 0);
  }
  func_0x0001072b11dc();
  *(undefined8 *)(param_1 + 0x158) = extraout_x9;
  *(undefined8 *)(param_1 + 0x160) = extraout_x8;
  func_0x0001072adad8(auStack_20);
  return;
}



/* Entry: 1072b0928; end: 1072b0933;  */

void FUN_1072b0928(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001072afb0c(param_1 + 0x178);
  if (extraout_x8 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  func_0x0001072af848();
  func_0x0001072aca24();
  return;
}



/* Entry: 1072b0934; end: 1072b0947;  */

void FUN_1072b0934(void)

{
  FUN_1072b0948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072b0948; end: 1072b09fb;  */

undefined8 * FUN_1072b0948(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11099a298;
  func_0x0001072aca24(param_1 + 0x2f);
  FUN_1072ab65c(param_1 + 0x2d);
  func_0x0001072adad8(param_1 + 0x2b);
  FUN_1072a8dec(param_1 + 0x29);
  func_0x0001072ac994(param_1 + 0x27);
  func_0x0001072adb8c(param_1 + 0x25);
  func_0x00010726ee4c(param_1 + 0x23);
  func_0x0001072ac94c(param_1 + 0x21);
  func_0x00010726ee28(param_1 + 0x1f);
  FUN_1072aa7e4(param_1 + 0x1a);
  func_0x00010793c9d8(param_1 + 3);
  func_0x0001072b09d4(param_1 + 1);
  return param_1;
}



/* Entry: 1072b09fc; end: 1072b0a97;  */

void FUN_1072b09fc(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar5 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1072b0ab4(auStack_40,1);
  FUN_1072b0b0c(lStack_30);
  lVar6 = lStack_30;
  lStack_30 = 0;
  FUN_1072b0a98(param_1,lVar6 + 0x18);
  FUN_1072b0cf0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  FUN_1072b0cf0(auStack_40);
  __Unwind_Resume();
  *extraout_x8 = puVar5;
  extraout_x8[1] = lVar6;
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = (undefined8 *)(puVar5 + 8);
  }
  if ((puVar2 != (undefined8 *)0x0) && ((puVar2[1] == 0 || (*(long *)(puVar2[1] + 8) == -1)))) {
    pcStack_48 = FUN_1072b0a98;
    lStack_68 = extraout_x8[1];
    if (lStack_68 != 0) {
      plVar1 = (long *)(lStack_68 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = (long *)(lStack_68 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    *puVar2 = puVar5;
    puVar2[1] = lStack_68;
    puStack_70 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x0001072b09d4(&uStack_60);
    FUN_1072b0cc8(&puStack_70);
    return;
  }
  return;
}



/* Entry: 1072b0a98; end: 1072b0ab3;  */

void FUN_1072b0a98(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    plVar2 = (long *)(param_2 + 8);
  }
  if ((plVar2 != (long *)0x0) && ((plVar2[1] == 0 || (*(long *)(plVar2[1] + 8) == -1)))) {
    lStack_28 = param_1[1];
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = (long *)(lStack_28 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_18 = plVar2[1];
    lStack_20 = *plVar2;
    *plVar2 = param_2;
    plVar2[1] = lStack_28;
    lStack_30 = param_2;
    func_0x0001072b09d4(&lStack_20);
    FUN_1072b0cc8(&lStack_30);
    return;
  }
  return;
}



/* Entry: 1072b0ab4; end: 1072b0adb;  */

long FUN_1072b0ab4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1072b0adc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1072b0adc; end: 1072b0b0b;  */

undefined8 * FUN_1072b0adc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x9d89d89d89d89e) {
    puVar1 = (undefined8 *)(param_2 * 0x1a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11099a370;
  FUN_1072b0b78(param_1 + 3);
  return param_1;
}



/* Entry: 1072b0b0c; end: 1072b0b4f;  */

undefined8 * FUN_1072b0b0c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11099a370;
  FUN_1072b0b78(param_1 + 3);
  return param_1;
}



/* Entry: 1072b0b50; end: 1072b0b53;  */

void FUN_1072b0b50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099a370;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072b0b54; end: 1072b0b67;  */

void FUN_1072b0b54(void)

{
  func_0x0001072b0c34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072b0b68; end: 1072b0b77;  */

void FUN_1072b0b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072b0b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072b0b78; end: 1072b0b9f;  */

undefined8 * FUN_1072b0b78(undefined8 *param_1)

{
  _bzero(param_1,0x188);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11099a298;
  FUN_1072b0bec(param_1 + 3);
  return param_1;
}



/* Entry: 1072b0ba0; end: 1072b0beb;  */

undefined8 * FUN_1072b0ba0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11099a298;
  FUN_1072b0bec(param_1 + 3);
  return param_1;
}



/* Entry: 1072b0bec; end: 1072b0c2b;  */

long FUN_1072b0bec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1072b0c2c();
  *(undefined8 *)(lVar1 + 0xd0) = 0;
  *(undefined8 *)(lVar1 + 200) = 0;
  *(undefined8 *)(lVar1 + 0xc0) = 0;
  *(undefined8 *)(lVar1 + 0xb8) = 0;
  *(undefined4 *)(lVar1 + 0xd8) = 0x3f800000;
  _bzero(lVar1 + 0xe0,0x90);
  return param_1;
}



/* Entry: 1072b0c2c; end: 1072b0c43;  */

undefined8 * FUN_1072b0c2c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ede10;
  param_1[1] = 0;
  func_0x00010793c9a4();
  return param_1;
}



/* Entry: 1072b0c44; end: 1072b0cc7;  */

void FUN_1072b0c44(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = (long *)(lStack_28 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = lStack_28;
    uStack_30 = param_3;
    func_0x0001072b09d4(&uStack_20);
    FUN_1072b0cc8(&uStack_30);
    return;
  }
  return;
}



/* Entry: 1072b0cc8; end: 1072b0cef;  */

long FUN_1072b0cc8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072b0cf0; end: 1072b0cff;  */

void FUN_1072b0cf0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072b0d00; end: 1072b0d63;  */

long FUN_1072b0d00(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1072b0d64; end: 1072b1163;  */

void FUN_1072b0d64(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  byte bVar17;
  
  plVar11 = param_1 + 3;
  func_0x000100102e7c(plVar11,param_2 + 2);
  plVar12 = param_1 + 1;
  plVar13 = (long *)*plVar12;
  param_2[1] = (long)plVar11;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1072b0fb0;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar5 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar9 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar5 <= plVar9) {
    plVar5 = plVar9;
  }
  if ((long)plVar5 - 1U == 0) {
    plVar5 = (long *)0x2;
  }
  else if (((ulong)plVar5 & (long)plVar5 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar13 = (long *)*plVar12;
  }
  if (plVar13 < plVar5) {
LAB_1072b0e2c:
    plVar13 = plVar12;
    FUN_1072aac34(plVar12,plVar5);
    FUN_1072aac1c(param_1,plVar13);
    param_1[1] = (long)plVar5;
    lVar6 = *param_1;
    for (plVar13 = (long *)0x0; plVar5 != plVar13; plVar13 = (long *)((long)plVar13 + 1)) {
      *(undefined8 *)(lVar6 + (long)plVar13 * 8) = 0;
    }
    plVar13 = (long *)param_1[2];
    if (plVar13 != (long *)0x0) {
      plVar9 = (long *)plVar13[1];
      uVar14 = (long)plVar5 - 1;
      if (((ulong)plVar5 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar5 <= plVar9) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar5;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar5);
      }
      *(long **)(lVar6 + (long)plVar9 * 8) = param_1 + 2;
      while (plVar10 = plVar13, plVar13 = (long *)*plVar10, plVar13 != (long *)0x0) {
        plVar16 = (long *)plVar13[1];
        if (((ulong)plVar5 & uVar14) == 0) {
          plVar16 = (long *)((ulong)plVar16 & uVar14);
        }
        else if (plVar5 <= plVar16) {
          uVar1 = 0;
          if (plVar5 != (long *)0x0) {
            uVar1 = (ulong)plVar16 / (ulong)plVar5;
          }
          plVar16 = (long *)((long)plVar16 - uVar1 * (long)plVar5);
        }
        if (plVar16 != plVar9) {
          plVar8 = plVar13;
          if (*(long *)(lVar6 + (long)plVar16 * 8) == 0) {
            *(long **)(lVar6 + (long)plVar16 * 8) = plVar10;
            plVar9 = plVar16;
          }
          else {
            do {
              plVar7 = plVar8;
              plVar8 = (long *)0x0;
              if (*plVar7 == 0) break;
              plVar4 = plVar13 + 2;
              func_0x0001000e107c(plVar4,*plVar7 + 0x10);
              plVar8 = (long *)*plVar7;
            } while (((ulong)plVar4 & 1) != 0);
            *plVar10 = (long)plVar8;
            lVar6 = *param_1;
            *plVar7 = **(long **)(lVar6 + (long)plVar16 * 8);
            **(undefined8 **)(lVar6 + (long)plVar16 * 8) = plVar13;
            plVar13 = plVar10;
          }
        }
      }
    }
  }
  else if (plVar5 < plVar13) {
    plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar9) {
      plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 - 1) & 0x3fU));
    }
    if (plVar5 <= plVar9) {
      plVar5 = plVar9;
    }
    if (plVar5 < plVar13) {
      if (plVar5 != (long *)0x0) goto LAB_1072b0e2c;
      FUN_1072aac1c(param_1,0);
      param_1[1] = 0;
    }
  }
  plVar13 = (long *)*plVar12;
LAB_1072b0fb0:
  uVar14 = (long)plVar13 - 1;
  if (((ulong)plVar13 & uVar14) == 0) {
    plVar5 = (long *)(uVar14 & (ulong)plVar11);
  }
  else {
    plVar5 = plVar11;
    if (plVar13 <= plVar11) {
      uVar1 = 0;
      if (plVar13 != (long *)0x0) {
        uVar1 = (ulong)plVar11 / (ulong)plVar13;
      }
      plVar5 = (long *)((long)plVar11 - uVar1 * (long)plVar13);
    }
  }
  plVar9 = *(long **)(*param_1 + (long)plVar5 * 8);
  if (plVar9 != (long *)0x0) {
    uVar15 = 0;
    bVar17 = 0;
    for (; lVar6 = *plVar9, lVar6 != 0; plVar9 = (long *)*plVar9) {
      plVar10 = *(long **)(lVar6 + 8);
      if (((ulong)plVar13 & uVar14) == 0) {
        plVar16 = (long *)((ulong)plVar10 & uVar14);
      }
      else {
        plVar16 = plVar10;
        if (plVar13 <= plVar10) {
          uVar1 = 0;
          if (plVar13 != (long *)0x0) {
            uVar1 = (ulong)plVar10 / (ulong)plVar13;
          }
          plVar16 = (long *)((long)plVar10 - uVar1 * (long)plVar13);
        }
      }
      if (plVar16 != plVar5) break;
      if (plVar10 == plVar11) {
        lVar6 = lVar6 + 0x10;
        func_0x0001000e107c(lVar6,param_2 + 2);
        uVar3 = (uint)lVar6;
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar15;
      if ((bool)(bVar17 & bVar2)) break;
      uVar15 = uVar15 | bVar2;
      bVar17 = bVar17 | bVar2;
    }
    plVar13 = (long *)*plVar12;
  }
  bVar17 = POPCOUNT((char)plVar13) + POPCOUNT((char)((ulong)plVar13 >> 8)) +
           POPCOUNT((char)((ulong)plVar13 >> 0x10)) + POPCOUNT((char)((ulong)plVar13 >> 0x18)) +
           POPCOUNT((char)((ulong)plVar13 >> 0x20)) + POPCOUNT((char)((ulong)plVar13 >> 0x28)) +
           POPCOUNT((char)((ulong)plVar13 >> 0x30)) + POPCOUNT((char)((ulong)plVar13 >> 0x38));
  plVar11 = (long *)param_2[1];
  if (bVar17 < 2) {
    plVar11 = (long *)((long)plVar13 - 1U & (ulong)plVar11);
  }
  else if (plVar13 <= plVar11) {
    uVar14 = 0;
    if (plVar13 != (long *)0x0) {
      uVar14 = (ulong)plVar11 / (ulong)plVar13;
    }
    plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar13);
  }
  if (plVar9 == (long *)0x0) {
    plVar12 = param_1 + 2;
    *param_2 = *plVar12;
    *plVar12 = (long)param_2;
    lVar6 = *param_1;
    *(long **)(lVar6 + (long)plVar11 * 8) = plVar12;
    if (*param_2 != 0) {
      plVar11 = *(long **)(*param_2 + 8);
      if (bVar17 < 2) {
        plVar11 = (long *)((ulong)plVar11 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar11) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar11 / (ulong)plVar13;
        }
        plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar13);
      }
      *(long **)(lVar6 + (long)plVar11 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar9;
    *plVar9 = (long)param_2;
    if (*param_2 != 0) {
      plVar12 = *(long **)(*param_2 + 8);
      if (bVar17 < 2) {
        plVar12 = (long *)((ulong)plVar12 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar12) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar12 / (ulong)plVar13;
        }
        plVar12 = (long *)((long)plVar12 - uVar14 * (long)plVar13);
      }
      if (plVar12 != plVar11) {
        *(long **)(*param_1 + (long)plVar12 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1072b1164; end: 1072b11a3;  */

void FUN_1072b1164(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1072b11a4; end: 1072b11e7;  */

void FUN_1072b11a4(void)

{
  return;
}



/* Entry: 1072b11e8; end: 1072b2b4f;  */

undefined8 *
FUN_1072b11e8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined **ppuVar7;
  code *pcVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined8 ***pppuVar12;
  long lVar13;
  undefined8 ***pppuVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar17;
  undefined **extraout_x8_02;
  code *extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 extraout_x8_09;
  undefined8 extraout_x8_10;
  undefined8 extraout_x8_11;
  undefined8 extraout_x8_12;
  undefined8 extraout_x8_13;
  code *extraout_x8_14;
  long extraout_x9;
  undefined8 *puVar18;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  undefined8 extraout_x9_03;
  long extraout_x9_04;
  undefined8 extraout_x9_05;
  long extraout_x9_06;
  undefined8 extraout_x9_07;
  long extraout_x9_08;
  undefined8 extraout_x9_09;
  long extraout_x9_10;
  undefined8 extraout_x9_11;
  long extraout_x9_12;
  undefined8 extraout_x9_13;
  long extraout_x9_14;
  undefined8 extraout_x9_15;
  long extraout_x9_16;
  undefined8 extraout_x9_17;
  long extraout_x9_18;
  undefined8 extraout_x9_19;
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
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  int extraout_w10_29;
  int extraout_w10_30;
  int extraout_w10_31;
  int extraout_w10_32;
  int extraout_w10_33;
  int extraout_w10_34;
  int extraout_w10_35;
  int extraout_w10_36;
  int extraout_w10_37;
  int extraout_w10_38;
  int extraout_w10_39;
  int extraout_w10_40;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  int extraout_w11_09;
  int extraout_w11_10;
  int extraout_w11_11;
  ulong uVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 in_register_00005008;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined **ppuStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3d0;
  undefined8 *puStack_3c8;
  undefined1 auStack_3c0 [608];
  undefined **ppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  long lStack_128;
  int iStack_120;
  undefined **ppuStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  undefined8 *puStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  undefined ***pppuStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined ***pppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_20;
  undefined8 uStack_10;
  
  func_0x0001072cfcb0();
  puVar16 = param_2;
  func_0x0001072ce328();
  puVar16[1] = &PTR_DAT_11099a630;
  puVar16[2] = 0;
  puVar16[3] = 0;
  *puVar16 = &PTR_FUN_11099a3c0;
  puVar10 = puVar16;
  uStack_10 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_2[4] = puVar10;
  do {
    iVar6 = iRam00000001136ca1f8;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x1136ca1f8,0x10);
    if (bVar5) {
      cVar4 = ExclusiveMonitorsStatus();
      iRam00000001136ca1f8 = iRam00000001136ca1f8 + 1;
    }
  } while (cVar4 != '\0');
  *(int *)(param_2 + 5) = iVar6;
  func_0x0001072ced38();
  puVar10 = puRam00000001136ca200;
  if (puRam00000001136ca208 < puRam00000001136ca210) {
    func_0x0001072d030c();
    puVar22 = extraout_x8_00 + 0xe;
    extraout_x8_00[1] = in_register_00005008;
    *extraout_x8_00 = param_1;
LAB_1072b1358:
    lVar17 = (long)puVar22 - (long)puRam00000001136ca200;
    puRam00000001136ca208 = puVar22;
    func_0x0001072ce8a8();
    param_2[6] = lVar17 / 0x70 + -1;
    FUN_1072fa8c4(param_2 + 7);
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    __ZNSt3__115recursive_mutexC1Ev(param_2 + 0xd);
    uVar21 = 0;
    uVar24 = 0;
    puVar10 = param_2 + 0x15;
    param_2[0x16] = 0;
    *puVar10 = 0;
    param_2[0x19] = 0;
    param_2[0x18] = 0;
    param_2[0x17] = 0;
    uVar25 = param_3[0x1a];
    puVar22 = param_2 + 0x1a;
    param_2[0x1b] = param_3[0x1b];
    *puVar22 = uVar25;
    if (param_3[0x1b] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10 != 0);
    }
    param_2[0x1d] = uVar24;
    param_2[0x1c] = uVar21;
    param_2[0x1f] = uVar24;
    param_2[0x1e] = uVar21;
    param_2[0x21] = uVar24;
    param_2[0x20] = uVar21;
    param_2[0x23] = uVar24;
    param_2[0x22] = uVar21;
    param_2[0x25] = uVar24;
    param_2[0x24] = uVar21;
    param_2[0x27] = uVar24;
    param_2[0x26] = uVar21;
    param_2[0x29] = uVar24;
    param_2[0x28] = uVar21;
    param_2[0x2a] = 0;
    param_2[0x2b] = param_4;
    param_2[0x2c] = 0;
    param_2[0x2d] = 0;
    lVar17 = param_3[7];
    uVar21 = param_3[6];
    param_2[0x2f] = param_3[7];
    param_2[0x2e] = uVar21;
    if (lVar17 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_00 != 0);
    }
    _bzero(param_2 + 0x30,0xb0);
    lVar17 = param_3[0x13];
    uVar21 = param_3[0x12];
    param_2[0x47] = param_3[0x13];
    param_2[0x46] = uVar21;
    if (lVar17 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_01 != 0);
    }
    param_2[0x53] = 0;
    param_2[0x52] = 0;
    param_2[0x55] = 0;
    param_2[0x54] = 0;
    param_2[0x4f] = 0;
    param_2[0x4e] = 0;
    param_2[0x51] = 0;
    param_2[0x50] = 0;
    param_2[0x4b] = 0;
    param_2[0x4a] = 0;
    param_2[0x4d] = 0;
    param_2[0x4c] = 0;
    param_2[0x49] = 0;
    param_2[0x48] = 0;
    FUN_1072bc39c(param_2 + 0x56,param_2 + 0x56);
    *(undefined4 *)(param_2 + 0x5a) = 0;
    param_2[0x59] = 0;
    param_2[0x58] = 0;
    func_0x0001072d03c8();
    func_0x00010002b838(param_2 + 0x5b);
    *(undefined2 *)(param_2 + 0x5e) = 0x100;
    *(undefined1 *)((long)param_2 + 0x2f2) = 1;
    *(undefined1 *)(param_2 + 0x5f) = 0;
    *(undefined1 *)(param_2 + 0x60) = 0;
    *(undefined4 *)(param_2 + 0x61) = 0;
    *(undefined1 *)(param_2 + 0x62) = 0;
    *(undefined1 *)(param_2 + 99) = 0;
    *(undefined2 *)(param_2 + 100) = 0;
    *(undefined1 *)(param_2 + 0x69) = 0;
    *(undefined1 *)(param_2 + 0x6a) = 0;
    *(undefined1 *)((long)param_2 + 0x354) = 0;
    param_2[0x65] = 0;
    param_2[0x67] = 0;
    param_2[0x66] = 0;
    *(undefined1 *)(param_2 + 0x68) = 0;
    func_0x0001072cffd8(&ppuStack_60);
    puVar16[0x6c] = puStack_58;
    puVar16[0x6b] = ppuStack_60;
    ppuStack_60 = (undefined **)0x0;
    puStack_58 = (undefined8 *)0x0;
    pppuVar11 = &ppuStack_60;
    func_0x00010724b8b8();
    func_0x0001073af260();
    FUN_10725b034();
    param_2[0x6f] = param_2;
    puVar18 = (undefined8 *)param_2[0x6d];
    lVar17 = puVar18[1];
    uVar21 = *puVar18;
    param_2[0x71] = puVar18[1];
    param_2[0x70] = uVar21;
    if (lVar17 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_02 != 0);
    }
    param_2[0x72] = param_2 + 0x6d;
    param_2[0x73] = 0;
    FUN_10726ed14(param_2 + 0x74);
    param_2[0x76] = param_2;
    func_0x00010785f1f4();
    ppuStack_60 = (undefined **)((ulong)ppuStack_60 & 0xffffffffffffff00);
    pppuVar11 = pppuVar11 + 0x14a;
    FUN_10724e2c8(pppuVar11,&ppuStack_60);
    if ((int)pppuVar11 == 0) {
      ppuStack_78 = (undefined **)param_3[0x3e];
      lStack_d8 = param_3[0x3f];
      lStack_70 = lStack_d8;
      ppuStack_e0 = ppuStack_78;
      if (lStack_d8 != 0) {
        do {
          func_0x0001072ce620();
          ppuStack_78 = extraout_x8_02;
          lStack_70 = lStack_d8;
        } while (extraout_w11 != 0);
      }
      ppuStack_80 = &PTR_SUB_11099a820;
      lStack_d8 = 0;
      ppuStack_e0 = (undefined **)0x0;
      pppuStack_68 = &ppuStack_80;
      func_0x0001072cf5a4();
      (*extraout_x8_03)();
      func_0x0001006393ec(&ppuStack_80);
      pppuVar11 = &ppuStack_e0;
    }
    else {
      ppuStack_60 = (undefined **)param_3[0x3e];
      puStack_58 = (undefined8 *)param_3[0x3f];
      if (puStack_58 != (undefined8 *)0x0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10_03 != 0);
      }
      func_0x00010785dab4();
      pppuVar11 = &ppuStack_60;
    }
    func_0x0001072ac928(pppuVar11);
    func_0x0001072cf114(param_3[0x20]);
    if (extraout_x9_00 != 0) {
      do {
        func_0x0001072ce620();
      } while (extraout_w11_00 != 0);
    }
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)puVar16[0x26];
    ppuStack_60 = (undefined **)puVar16[0x25];
    param_2[0x25] = extraout_x8_04;
    param_2[0x26] = extraout_x9_01;
    func_0x0001072cf500();
    pppuVar12 = &ppuStack_130;
    FUN_10726ee04();
    func_0x0001072ceb0c();
    ppuStack_60 = &PTR_DAT_11099a8a0;
    puStack_58 = param_2;
    pppuStack_48 = &ppuStack_60;
    func_0x00010740deac();
    ppuStack_130 = pppuVar12;
    FUN_1072bcf1c(&ppuStack_60);
    ppuVar2 = ppuStack_130;
    ppuStack_130 = (undefined8 **)0x0;
    FUN_1072bc6c4(puVar10,ppuVar2);
    FUN_1072bc6a4(&ppuStack_130);
    func_0x0001072cf114(param_3[0x32]);
    if (extraout_x9_02 != 0) {
      do {
        func_0x0001072ce620();
      } while (extraout_w11_01 != 0);
    }
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)param_2[0x17];
    ppuStack_60 = (undefined **)param_2[0x16];
    param_2[0x16] = extraout_x8_05;
    param_2[0x17] = extraout_x9_03;
    func_0x0001072cf080();
    func_0x0001072cfefc();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    lVar17 = 0x1b8;
    __Znwm();
    ppuStack_60 = (undefined **)((ulong)ppuStack_60 & 0xffffffffffffff00);
    uStack_20 = 0;
    func_0x0001073b0c1c();
    FUN_1072bcf50(&ppuStack_60);
    lVar13 = param_2[0x18];
    param_2[0x18] = lVar17;
    if (lVar13 != 0) {
      func_0x0001072ce338();
    }
    puVar18 = (undefined8 *)0x58;
    __Znwm();
    *puVar18 = 0;
    puVar18[1] = 0;
    puVar18[2] = 0;
    puVar18[3] = 0x32aaaba7;
    puVar18[5] = 0;
    puVar18[4] = 0;
    puVar18[7] = 0;
    puVar18[6] = 0;
    puVar18[9] = 0;
    puVar18[8] = 0;
    puVar18[10] = 0;
    ppuStack_60 = (undefined **)0x0;
    func_0x0001072bc81c(param_2 + 0x23);
    func_0x0001072bc7fc(&ppuStack_60);
    func_0x0001072cf114(param_3[0x24]);
    if (extraout_x9_04 != 0) {
      do {
        func_0x0001072ce620();
      } while (extraout_w11_02 != 0);
    }
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)puVar16[0x28];
    ppuStack_60 = (undefined **)puVar16[0x27];
    param_2[0x27] = extraout_x8_06;
    param_2[0x28] = extraout_x9_05;
    func_0x0001072aa210(&ppuStack_60);
    func_0x0001072aa210(&ppuStack_130);
    lVar17 = param_2[0x15];
    lStack_3e8 = param_3[0x27];
    ppuStack_3f0 = (undefined **)param_3[0x26];
    if (param_3[0x27] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_04 != 0);
    }
    lStack_88 = param_3[0x33];
    ppuStack_90 = (undefined **)param_3[0x32];
    if (param_3[0x33] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_05 != 0);
    }
    lStack_98 = param_3[9];
    ppuStack_a0 = (undefined **)param_3[8];
    if (param_3[9] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_06 != 0);
    }
    puVar18 = (undefined8 *)0x498;
    __Znwm();
    puVar18[1] = 0;
    puVar18[2] = 0;
    puVar23 = puVar18 + 3;
    *puVar18 = &PTR_FUN_11099a930;
    FUN_10727a744(puVar23,lVar17,&ppuStack_3f0,&ppuStack_90,&ppuStack_a0);
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)puVar16[0x2a];
    ppuStack_60 = (undefined **)puVar16[0x29];
    param_2[0x29] = puVar23;
    param_2[0x2a] = puVar18;
    func_0x0001072bc968(&ppuStack_60);
    func_0x0001072bc968(&ppuStack_130);
    func_0x00010726eedc(&ppuStack_a0);
    func_0x00010725b6e0(&ppuStack_90);
    func_0x000107283b14(&ppuStack_3f0);
    func_0x0001072cf114(param_3[0x2a]);
    if (extraout_x9_06 != 0) {
      do {
        func_0x0001072ce620();
      } while (extraout_w11_03 != 0);
    }
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)param_2[0x51];
    ppuStack_60 = (undefined **)param_2[0x50];
    param_2[0x50] = extraout_x8_07;
    param_2[0x51] = extraout_x9_07;
    func_0x0001072aa1ec(&ppuStack_60);
    func_0x0001072aa1ec(&ppuStack_130);
    puStack_58 = (undefined8 *)param_3[1];
    ppuStack_60 = (undefined **)*param_3;
    if (param_3[1] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_07 != 0);
    }
    func_0x0001072a5d60(param_2 + 0x37,&ppuStack_60);
    func_0x0001072ac4dc(&ppuStack_60);
    func_0x0001072cf114(param_3[0x10]);
    if (extraout_x9_08 != 0) {
      do {
        func_0x0001072ce620();
      } while (extraout_w11_04 != 0);
    }
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)puVar16[0x3e];
    ppuStack_60 = (undefined **)puVar16[0x3d];
    param_2[0x3d] = extraout_x8_08;
    param_2[0x3e] = extraout_x9_09;
    func_0x0001072aa2e8(&ppuStack_60);
    func_0x0001072aa2e8(&ppuStack_130);
    puStack_58 = (undefined8 *)param_3[5];
    ppuStack_60 = (undefined **)param_3[4];
    if (param_3[5] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_08 != 0);
    }
    func_0x000107249e68(param_2 + 0x3f,&ppuStack_60);
    func_0x00010724bd74(&ppuStack_60);
    puStack_58 = (undefined8 *)param_3[0x37];
    ppuStack_60 = (undefined **)param_3[0x36];
    if (param_3[0x37] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_09 != 0);
    }
    FUN_1072a6024(param_2 + 0x41,&ppuStack_60);
    func_0x0001072aca00(&ppuStack_60);
    func_0x0001072cf114(param_3[0x38]);
    if (extraout_x9_10 != 0) {
      do {
        func_0x0001072ce620();
      } while (extraout_w11_05 != 0);
    }
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)puVar16[0x44];
    ppuStack_60 = (undefined **)puVar16[0x43];
    param_2[0x43] = extraout_x8_09;
    param_2[0x44] = extraout_x9_11;
    func_0x0001072aa138(&ppuStack_60);
    func_0x0001072aa138(&ppuStack_130);
    uVar21 = param_2[0x15];
    puVar18 = (undefined8 *)0x88;
    __Znwm();
    func_0x0001072d0354();
    puVar23 = puVar18 + 3;
    *puVar18 = &PTR_DAT_11099a980;
    func_0x0001072d21b4(puVar23,uVar21,puVar22);
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)param_2[0x1d];
    ppuStack_60 = (undefined **)param_2[0x1c];
    param_2[0x1c] = puVar23;
    param_2[0x1d] = lVar17;
    func_0x0001072bc748(&ppuStack_60);
    func_0x0001072bc748(&ppuStack_130);
    ppuVar15 = (undefined **)param_3[0x32];
    lStack_3e8 = param_3[0x33];
    ppuStack_3f0 = ppuVar15;
    if (lStack_3e8 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_10 != 0);
    }
    uVar21 = *puVar10;
    lStack_88 = param_3[9];
    ppuStack_90 = (undefined **)param_3[8];
    if (param_3[9] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_11 != 0);
    }
    puVar18 = (undefined8 *)0x148;
    __Znwm();
    func_0x0001072d0354();
    *puVar18 = &PTR_DAT_11099a9d0;
    puStack_58 = (undefined8 *)lStack_3e8;
    ppuStack_3f0 = (undefined **)0x0;
    lStack_3e8 = 0;
    ppuStack_60 = ppuVar15;
    FUN_107291dcc(puVar18 + 3,&ppuStack_60,uVar21,&ppuStack_90);
    func_0x0001072cf080();
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)param_2[0x1f];
    ppuStack_60 = (undefined **)param_2[0x1e];
    param_2[0x1e] = puVar18 + 3;
    param_2[0x1f] = lVar17;
    func_0x0001072bc76c();
    func_0x0001072bc76c(&ppuStack_130);
    pppuVar11 = &ppuStack_90;
    func_0x00010726eedc(pppuVar11);
    func_0x0001072cfeb4();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    ppuVar15 = (undefined **)param_3[0x32];
    lStack_3e8 = param_3[0x33];
    ppuStack_3f0 = ppuVar15;
    if (lStack_3e8 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_12 != 0);
    }
    uVar21 = *puVar10;
    puVar18 = (undefined8 *)0x98;
    __Znwm();
    func_0x0001072d0354();
    *puVar18 = &PTR_DAT_11099aa20;
    puStack_58 = (undefined8 *)lStack_3e8;
    ppuStack_3f0 = (undefined **)0x0;
    lStack_3e8 = 0;
    ppuStack_60 = ppuVar15;
    FUN_1072f2f48(puVar18 + 3,pppuVar11 + 1,&ppuStack_60,uVar21);
    func_0x0001072cf080();
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)param_2[0x21];
    ppuStack_60 = (undefined **)param_2[0x20];
    param_2[0x20] = puVar18 + 3;
    param_2[0x21] = lVar17;
    func_0x0001072bc790();
    func_0x0001072bc790(&ppuStack_130);
    func_0x0001072cfeb4();
    func_0x0001072cf114(param_3[0x16]);
    if (extraout_x9_12 != 0) {
      do {
        func_0x0001072ce620();
      } while (extraout_w11_06 != 0);
    }
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)puVar16[0x3a];
    ppuStack_60 = (undefined **)puVar16[0x39];
    param_2[0x39] = extraout_x8_10;
    param_2[0x3a] = extraout_x9_13;
    func_0x0001072aa27c(&ppuStack_60);
    func_0x0001072aa27c(&ppuStack_130);
    func_0x0001072cf114(param_3[0xe]);
    if (extraout_x9_14 != 0) {
      do {
        func_0x0001072ce620();
      } while (extraout_w11_07 != 0);
    }
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)puVar16[0x3c];
    ppuStack_60 = (undefined **)puVar16[0x3b];
    param_2[0x3b] = extraout_x8_11;
    param_2[0x3c] = extraout_x9_15;
    func_0x0001072aa30c(&ppuStack_60);
    func_0x0001072aa30c(&ppuStack_130);
    func_0x0001072cf114(param_3[8]);
    if (extraout_x9_16 != 0) {
      do {
        func_0x0001072ce620();
      } while (extraout_w11_08 != 0);
    }
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)puVar16[0x32];
    ppuStack_60 = (undefined **)puVar16[0x31];
    param_2[0x31] = extraout_x8_12;
    param_2[0x32] = extraout_x9_17;
    func_0x00010726eedc(&ppuStack_60);
    func_0x00010726eedc(&ppuStack_130);
    func_0x0001072cf114(param_3[0x3a]);
    if (extraout_x9_18 != 0) {
      do {
        func_0x0001072ce620();
      } while (extraout_w11_09 != 0);
    }
    func_0x0001072ceda4();
    puStack_58 = (undefined8 *)puVar16[0x34];
    ppuStack_60 = (undefined **)puVar16[0x33];
    param_2[0x33] = extraout_x8_13;
    param_2[0x34] = extraout_x9_19;
    func_0x0001072aa114(&ppuStack_60);
    pppuVar12 = &ppuStack_130;
    func_0x0001072aa114();
    puStack_f8 = (undefined8 *)param_3[0x2d];
    ppuStack_100 = (undefined **)param_3[0x2c];
    if (param_3[0x2d] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_13 != 0);
    }
    puStack_58 = (undefined8 *)param_3[0x41];
    ppuStack_60 = (undefined **)param_3[0x40];
    puStack_50 = (undefined8 *)param_3[0x42];
    uVar21 = *puVar10;
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    ppuVar15 = (undefined **)param_3[0x1e];
    lStack_108 = param_3[0x1f];
    pppuVar14 = pppuVar12;
    ppuStack_110 = ppuVar15;
    if (lStack_108 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_14 != 0);
    }
    func_0x0001072cf830();
    func_0x0001072d0354();
    *pppuVar14 = (undefined8 **)&PTR_DAT_11099aa70;
    lStack_128 = (long)puStack_f8;
    ppuStack_130 = (undefined8 **)ppuStack_100;
    ppuStack_100 = (undefined **)0x0;
    puStack_f8 = (undefined8 *)0x0;
    lStack_3e8 = puVar16[0x26];
    ppuStack_3f0 = (undefined **)puVar16[0x25];
    if (param_2[0x26] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_15 != 0);
    }
    lStack_88 = lStack_108;
    lStack_108 = 0;
    ppuStack_110 = (undefined **)0x0;
    lStack_98 = param_2[0x1b];
    ppuStack_a0 = (undefined **)param_2[0x1a];
    ppuStack_90 = ppuVar15;
    if (param_2[0x1b] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_16 != 0);
    }
    lStack_a8 = puVar16[0x32];
    ppuStack_b0 = (undefined **)puVar16[0x31];
    if (param_2[0x32] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_17 != 0);
    }
    lStack_b8 = param_2[0x17];
    uStack_c0 = (undefined **)param_2[0x16];
    if (param_2[0x17] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_18 != 0);
    }
    uStack_c8 = puVar16[0x2a];
    uStack_d0 = puVar16[0x29];
    if (param_2[0x2a] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_19 != 0);
    }
    func_0x00010739e894((undefined **)(lVar17 + 0x18),&ppuStack_130,&ppuStack_60,&ppuStack_3f0,
                        uVar21,pppuVar12 + 1,&ppuStack_90,&ppuStack_a0,&ppuStack_b0,&uStack_c0,
                        &uStack_d0);
    func_0x0001072bc968(&uStack_d0);
    func_0x0001072cf818();
    func_0x00010726eedc(&ppuStack_b0);
    func_0x00010726eeb8(&ppuStack_a0);
    func_0x0001072aa234(&ppuStack_90);
    FUN_10726ee04(&ppuStack_3f0);
    func_0x0001072aa1c8(&ppuStack_130);
    ppuStack_f0 = (undefined **)(lVar17 + 0x18);
    lStack_e8 = lVar17;
    func_0x0001072b2b70(param_2 + 0x52,&ppuStack_f0);
    FUN_1072bcc2c(&ppuStack_f0);
    func_0x0001072aa234(&ppuStack_110);
    func_0x0001072aa1c8(&ppuStack_100);
    uVar24 = param_6[1];
    uVar21 = *param_6;
    *param_6 = 0;
    param_6[1] = 0;
    puStack_58 = (undefined8 *)puVar16[0x36];
    ppuStack_60 = (undefined **)puVar16[0x35];
    puVar16[0x36] = uVar24;
    puVar16[0x35] = uVar21;
    pppuVar11 = &ppuStack_60;
    FUN_1072ac7b8(pppuVar11);
    func_0x0001072cf4c0();
    func_0x0001072cffd8(&ppuStack_130);
    puStack_58 = (undefined8 *)lStack_128;
    ppuStack_60 = (undefined **)ppuStack_130;
    func_0x0001072ceda4();
    FUN_107291b5c(pppuVar11,&ppuStack_60);
    func_0x00010724b8b8(&ppuStack_60);
    func_0x00010724b8b8(&ppuStack_130);
    ppuStack_3f0 = (undefined **)0x0;
    FUN_1072bc7d4(param_2 + 0x22,pppuVar11);
    func_0x0001072bc7b4(&ppuStack_3f0);
    puStack_58 = (undefined8 *)param_3[0x2f];
    ppuStack_60 = (undefined **)param_3[0x2e];
    if (param_3[0x2f] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_20 != 0);
    }
    func_0x0001072b2b94(param_2 + 0x58,&ppuStack_60);
    pppuVar11 = &ppuStack_60;
    func_0x0001072aa1a4(pppuVar11);
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    do {
      func_0x0001072cfb28();
    } while (extraout_w10_21 != 0);
    func_0x0001078bc030(pppuVar11 + 0x38);
    plVar20 = (long *)puVar16[0x31];
    func_0x00010002b838(&ppuStack_60,PTR_DAT_1131ad078);
    (**(code **)(*plVar20 + 0x28))(plVar20,&ppuStack_60);
    uRam0000000113822080 = (((uint)plVar20 ^ 0xffffffff) & 0x101) == 0;
    func_0x0001072cf8b4();
    func_0x00010785f1f4();
    ppuStack_60 = (undefined **)((ulong)ppuStack_60 & 0xffffffffffffff00);
    plVar20 = plVar20 + 0xca;
    FUN_10724e2c8(plVar20,&ppuStack_60);
    (**(code **)(*(long *)param_3[0x43] + 0x48))((long *)param_3[0x43],plVar20);
    func_0x000100060964(&ppuStack_60,&DAT_10f408cc1);
    func_0x0001072cecdc();
    FUN_1072bd0ac();
    lStack_e8 = lStack_128;
    ppuStack_f0 = (undefined **)ppuStack_130;
    if (lStack_128 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_22 != 0);
    }
    func_0x0001072cf2e0();
    func_0x0001072cf30c();
    puStack_f8 = (undefined8 *)param_3[0x21];
    ppuStack_100 = (undefined **)param_3[0x20];
    if (param_3[0x21] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_23 != 0);
    }
    lStack_108 = param_3[0xb];
    ppuStack_110 = (undefined **)param_3[10];
    if (param_3[0xb] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_24 != 0);
    }
    lStack_148 = param_3[0xd];
    uStack_150 = (undefined **)param_3[0xc];
    if (param_3[0xd] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_25 != 0);
    }
    lStack_158 = param_3[0x29];
    ppuStack_160 = (undefined **)param_3[0x28];
    if (param_3[0x29] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_26 != 0);
    }
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    uVar21 = 0x408;
    __Znwm(0x408);
    lStack_88 = lStack_158;
    ppuStack_90 = ppuStack_160;
    puStack_58 = puStack_f8;
    ppuStack_60 = ppuStack_100;
    puStack_f8 = (undefined8 *)0x0;
    ppuStack_100 = (undefined **)0x0;
    lStack_128 = lStack_108;
    ppuStack_130 = (undefined8 **)ppuStack_110;
    ppuStack_110 = (undefined **)0x0;
    lStack_108 = 0;
    lStack_3e8 = lStack_148;
    ppuStack_3f0 = uStack_150;
    uStack_150 = (undefined **)0x0;
    lStack_148 = 0;
    ppuStack_160 = (undefined **)0x0;
    lStack_158 = 0;
    lStack_98 = lStack_e8;
    ppuStack_a0 = ppuStack_f0;
    if (lStack_e8 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_27 != 0);
    }
    lStack_a8 = param_2[0x1b];
    ppuStack_b0 = (undefined **)param_2[0x1a];
    if (param_2[0x1b] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_28 != 0);
    }
    lStack_b8 = param_2[0x17];
    uStack_c0 = (undefined **)param_2[0x16];
    if (param_2[0x17] != 0) {
      do {
        func_0x0001072ce620();
      } while (extraout_w11_10 != 0);
    }
    uStack_c8 = puVar16[0x32];
    uStack_d0 = puVar16[0x31];
    if (param_2[0x32] != 0) {
      do {
        func_0x0001072ce620();
      } while (extraout_w11_11 != 0);
    }
    func_0x0001072cfaf8();
    FUN_10725d32c(uVar21);
    func_0x00010726eedc(&uStack_d0);
    func_0x0001072cf818();
    func_0x00010726eeb8(&ppuStack_b0);
    func_0x0001072cf858();
    func_0x00010726ee70(&ppuStack_90);
    func_0x00010726ee4c(&ppuStack_3f0);
    func_0x00010726ee28(&ppuStack_130);
    func_0x0001072cf500();
    uStack_138 = 0;
    FUN_1072bcb74(param_2 + 0x4d,uVar21);
    FUN_1072bcb54(&uStack_138);
    func_0x00010726ee70(&ppuStack_160);
    func_0x00010726ee4c(&uStack_150);
    func_0x00010726ee28(&ppuStack_110);
    FUN_10726ee04(&ppuStack_100);
    func_0x000100060964(&ppuStack_60,&DAT_10f34b957);
    func_0x0001072cecdc();
    uVar9 = iStack_120 == 1;
    if (!(bool)uVar9) {
      func_0x00010563ab98();
      goto LAB_1072b260c;
    }
    lStack_88 = lStack_128;
    ppuStack_90 = (undefined **)ppuStack_130;
    if (lStack_128 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_29 != 0);
    }
    func_0x0001072cf2e0();
    func_0x0001072cf30c();
    lStack_98 = param_3[0x21];
    ppuStack_a0 = (undefined **)param_3[0x20];
    if (param_3[0x21] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_30 != 0);
    }
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    uVar21 = 0xa0;
    __Znwm(0xa0);
    puStack_58 = (undefined8 *)lStack_98;
    ppuStack_60 = ppuStack_a0;
    ppuStack_a0 = (undefined **)0x0;
    lStack_98 = 0;
    lStack_128 = lStack_88;
    ppuStack_130 = (undefined8 **)ppuStack_90;
    if (lStack_88 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_31 != 0);
    }
    lStack_3e8 = puVar16[0x32];
    ppuStack_3f0 = (undefined **)puVar16[0x31];
    if (param_2[0x32] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_32 != 0);
    }
    func_0x0001072cfaf8();
    FUN_107291340(uVar21);
    func_0x00010726eedc(&ppuStack_3f0);
    FUN_1072915e0(&ppuStack_130);
    func_0x0001072cf500();
    ppuStack_b0 = (undefined **)0x0;
    FUN_1072bcbbc(param_2 + 0x4e,uVar21);
    FUN_1072bcb9c(&ppuStack_b0);
    FUN_10726ee04(&ppuStack_a0);
    ppuVar2 = (undefined8 **)param_3[0x3c];
    puStack_58 = (undefined8 *)param_3[0x3d];
    ppuStack_60 = (undefined **)ppuVar2;
    if (puStack_58 != (undefined8 *)0x0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_33 != 0);
    }
    pppuVar11 = &ppuStack_60;
    func_0x0001072ac994(pppuVar11);
    if (ppuVar2 != (undefined8 **)0x0) {
      func_0x000100060964();
      func_0x0001072cecdc();
      FUN_1072bd0ac(&ppuStack_130);
      lStack_98 = lStack_128;
      ppuStack_a0 = (undefined **)ppuStack_130;
      if (lStack_128 != 0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10_34 != 0);
      }
      func_0x0001072cf2e0();
      func_0x0001072cf30c();
      ppuVar2 = (undefined8 **)param_3[0x3c];
      lStack_a8 = param_3[0x3d];
      ppuStack_b0 = (undefined **)ppuVar2;
      if (lStack_a8 != 0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10_35 != 0);
      }
      ppuVar15 = (undefined **)param_3[0x3a];
      lStack_b8 = param_3[0x3b];
      uStack_c0 = ppuVar15;
      if (lStack_b8 != 0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10_36 != 0);
      }
      lVar17 = lStack_98;
      ppuVar7 = ppuStack_a0;
      uVar21 = 0x100;
      __Znwm(0x100);
      puStack_58 = (undefined8 *)lVar17;
      ppuStack_60 = ppuVar7;
      if (lVar17 != 0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10_37 != 0);
      }
      lStack_128 = lStack_a8;
      ppuStack_b0 = (undefined **)0x0;
      lStack_a8 = 0;
      lStack_3e8 = lStack_b8;
      lStack_b8 = 0;
      uStack_c0 = (undefined **)0x0;
      ppuStack_3f0 = ppuVar15;
      ppuStack_130 = ppuVar2;
      func_0x0001072cfaf8();
      FUN_1072fe024(uVar21);
      func_0x0001072aa114(&ppuStack_3f0);
      func_0x0001072ac994(&ppuStack_130);
      func_0x00010726ee94(&ppuStack_60);
      uStack_d0 = 0;
      FUN_1072bcc04(param_2 + 0x4f,uVar21);
      FUN_1072bcbe4(&uStack_d0);
      func_0x0001072aa114(&uStack_c0);
      pppuVar11 = &ppuStack_b0;
      func_0x0001072ac994(pppuVar11);
      func_0x0001072cf858();
    }
    uVar21 = *(undefined8 *)(*(long *)*puVar10 + 0x10f8);
    func_0x0001072cef44();
    lStack_128 = puVar16[0x32];
    ppuStack_130 = (undefined8 **)puVar16[0x31];
    if (param_2[0x32] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_38 != 0);
    }
    ppuStack_60 = &PTR_FUN_11099aac0;
    puStack_58 = (undefined8 *)0x0;
    pppuStack_48 = &ppuStack_60;
    puStack_50 = param_2;
    FUN_10729fcc4(pppuVar11,&ppuStack_130,&ppuStack_60,uVar21);
    func_0x0001072bc934(&ppuStack_60);
    func_0x00010726eedc(&ppuStack_130);
    ppuStack_3f0 = (undefined **)0x0;
    func_0x0001072bc8fc(param_2 + 0x24,pppuVar11);
    func_0x0001072bc8dc(&ppuStack_3f0);
    ppuVar2 = (undefined8 **)param_3[0x32];
    lStack_128 = param_3[0x33];
    ppuStack_130 = ppuVar2;
    if (lStack_128 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_39 != 0);
    }
    ppuVar15 = (undefined **)0x88;
    __Znwm();
    puStack_58 = (undefined8 *)lStack_128;
    ppuStack_60 = (undefined **)ppuVar2;
    func_0x0001072ceda4();
    func_0x00010731d3b0();
    ppuStack_3f0 = ppuVar15;
    func_0x0001072cf080();
    ppuVar15 = ppuStack_3f0;
    ppuStack_3f0 = (undefined **)0x0;
    FUN_1072bc9d0(param_2 + 0x30,ppuVar15);
    func_0x0001072bc9b0(&ppuStack_3f0);
    func_0x0001072cfefc();
    uStack_3d0 = param_2[0x15];
    uVar21 = param_2[0x16];
    puStack_3c8 = param_2;
    func_0x0001072b97e0(auStack_3c0,param_3);
    pppuStack_48 = (undefined ***)0x0;
    puVar16 = (undefined8 *)0x278;
    __Znwm();
    *puVar16 = &PTR_FUN_11099abe0;
    puVar16[2] = puStack_3c8;
    puVar16[1] = uStack_3d0;
    func_0x0001072b97e0(puVar16 + 3,auStack_3c0);
    pppuStack_48 = (undefined ***)puVar16;
    FUN_107292e94(uVar21,&ppuStack_60);
    func_0x000107283e00(&ppuStack_60);
    func_0x0001072a9fc0(auStack_3c0);
    ppuStack_60 = &PTR_FUN_11099ac60;
    puStack_58 = param_2;
    pppuStack_48 = &ppuStack_60;
    FUN_1072b2bd8(param_2[0x46],&ppuStack_60,1);
    func_0x0001006393ec(&ppuStack_60);
    func_0x0001072cf5a4(*puVar22);
    (*extraout_x8_14)();
    FUN_1072b2c60(&ppuStack_60);
    lVar17 = param_2[6];
    func_0x0001072ced38();
    puVar16 = puRam00000001136ca200 + lVar17 * 0xe;
    puVar16[1] = puStack_58;
    *puVar16 = ppuStack_60;
    puVar16[3] = pppuStack_48;
    puVar16[2] = puStack_50;
    puVar16[5] = uStack_38;
    puVar16[4] = uStack_40;
    puVar16[6] = uStack_30;
    FUN_1072b9cf8();
    func_0x0001072ce8a8();
    pppuVar11 = &ppuStack_a0;
    FUN_1072b2d9c();
    if ((undefined8 **)ppuStack_a0 != (undefined8 **)0x0) {
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      do {
        func_0x0001072cfb28();
      } while (extraout_w10_40 != 0);
      func_0x0001078bc120(pppuVar11 + 0x38,(ulong)puStack_58 & 0xffffffff,
                          (ulong)ppuStack_60 & 0xffffffff);
      func_0x00010002b838(&ppuStack_130,&UNK_10f408d0c);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&ppuStack_3f0,ppuStack_a0);
      func_0x0001078bc160(pppuVar11 + 0x38,&ppuStack_130,&ppuStack_3f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_3f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_130);
      func_0x0001078bc240(pppuVar11 + 0x38);
    }
    FUN_10724c894(&ppuStack_a0);
    FUN_1072915e0(&ppuStack_90);
    func_0x00010726ee94(&ppuStack_f0);
    func_0x0001072ce0cc(uStack_10);
    if ((bool)uVar9) {
      return param_2;
    }
    ___stack_chk_fail();
  }
  else {
    lVar17 = (long)puRam00000001136ca208 - (long)puRam00000001136ca200;
    uVar1 = lVar17 / 0x70 + 1;
    if (uVar1 < 0x24924924924924a) {
      uVar3 = ((long)puRam00000001136ca210 - (long)puRam00000001136ca200) / 0x70;
      uVar19 = uVar3 * 2;
      if (uVar19 < uVar1 || uVar19 - uVar1 == 0) {
        uVar19 = uVar1;
      }
      if (0x124924924924923 < uVar3) {
        uVar19 = 0x249249249249249;
      }
      if (0x249249249249249 < uVar19) {
        func_0x000104bd35f4();
        goto LAB_1072b260c;
      }
      lVar13 = uVar19 * 0x70;
      __Znwm();
      puVar18 = (undefined8 *)(lVar13 + uVar19 * 0x70);
      func_0x0001072d030c(lVar13 + lVar17);
      extraout_x8_01[1] = in_register_00005008;
      *extraout_x8_01 = param_1;
      puVar22 = extraout_x8_01 + 0xe;
      puVar23 = (undefined8 *)((long)extraout_x8_01 + (lVar17 / -0x70) * extraout_x9);
      _memcpy(puVar23,puVar10,lVar17);
      puRam00000001136ca200 = puVar23;
      puRam00000001136ca210 = puVar18;
      if (puVar10 != (undefined8 *)0x0) {
        puRam00000001136ca208 = puVar22;
        __ZdlPv(puVar10);
      }
      goto LAB_1072b1358;
    }
  }
  FUN_1072b9754();
LAB_1072b260c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1072b2610);
  (*pcVar8)();
}



/* Entry: 1072b2b50; end: 1072b2bd7;  */

void FUN_1072b2b50(void)

{
  func_0x0001072d0360();
  FUN_1072bc6c4();
  return;
}



/* Entry: 1072b2bd8; end: 1072b2c5f;  */

void FUN_1072b2bd8(int param_1,ulong *param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_350 [24];
  ulong uStack_338;
  undefined1 auStack_330 [12];
  ulong uStack_324;
  undefined1 auStack_308 [48];
  long lStack_2d8;
  long lStack_2a8;
  long lStack_290;
  ulong uStack_278;
  undefined4 uStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  long lStack_98;
  ulong auStack_60 [4];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  puVar5 = auStack_60;
  func_0x0001072ce1e4();
  uStack_38 = extraout_x8;
  FUN_1072bd97c();
  if ((param_1 == 0) || (puVar4 = param_2, func_0x000104c003e8(), param_3 != 0)) {
    FUN_10724cbe8(auStack_60,param_2);
    uStack_40 = (undefined1)param_3;
    FUN_1072bda98(unaff_x19 + 0x50,auStack_60);
    func_0x0001006393ec();
    puVar4 = puVar5;
  }
  func_0x0001072ce0cc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce928();
  func_0x0001006393ec();
  func_0x0001072ce900();
  puVar4[6] = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  lStack_98 = 0;
  puVar5 = puVar4;
  _mach_host_self();
  iVar3 = (int)puVar5;
  _host_page_size();
  uStack_194 = 0x3e;
  _mach_host_self();
  _host_statistics64();
  puVar2 = PTR__mach_task_self__11034c5c8;
  if (iVar3 == 0) {
    uVar1 = iStack_18c + iStack_184 + iStack_188;
    *puVar4 = lStack_98 * (ulong)(iStack_190 + uVar1) >> 0x14;
    puVar4[1] = lStack_98 * (ulong)uVar1 >> 0x14;
  }
  uStack_194 = 0x5d;
  iVar3 = *(int *)PTR__mach_task_self__11034c5c8;
  _task_info(iVar3,0x17,auStack_308,&uStack_194);
  if (iVar3 == 0) {
    puVar4[2] = uStack_278 >> 0x14;
    puVar4[3] = (ulong)((lStack_290 + lStack_2d8) - lStack_2a8) >> 0x14;
  }
  uStack_194 = 10;
  iVar3 = *(int *)puVar2;
  _task_info(iVar3,0x12,auStack_330,&uStack_194);
  if (iVar3 == 0) {
    puVar4[5] = uStack_324 >> 0x14;
  }
  uVar6 = 0;
  _malloc_zone_statistics(0,auStack_350);
  puVar4[4] = uStack_338 >> 0x14;
  _os_proc_available_memory();
  puVar4[6] = uVar6 >> 0x14;
  return;
}



/* Entry: 1072b2c60; end: 1072b2d9b;  */

void FUN_1072b2c60(ulong *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auStack_2f0 [24];
  ulong uStack_2d8;
  undefined1 auStack_2d0 [12];
  ulong uStack_2c4;
  undefined1 auStack_2a8 [48];
  long lStack_278;
  long lStack_248;
  long lStack_230;
  ulong uStack_218;
  undefined4 uStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  long lStack_38;
  
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lStack_38 = 0;
  puVar4 = param_1;
  _mach_host_self();
  iVar3 = (int)puVar4;
  _host_page_size();
  uStack_134 = 0x3e;
  _mach_host_self();
  _host_statistics64();
  if (iVar3 == 0) {
    uVar1 = iStack_12c + iStack_124 + iStack_128;
    *param_1 = lStack_38 * (ulong)(iStack_130 + uVar1) >> 0x14;
    param_1[1] = lStack_38 * (ulong)uVar1 >> 0x14;
  }
  puVar2 = PTR__mach_task_self__11034c5c8;
  uStack_134 = 0x5d;
  iVar3 = *(int *)PTR__mach_task_self__11034c5c8;
  _task_info(iVar3,0x17,auStack_2a8,&uStack_134);
  if (iVar3 == 0) {
    param_1[2] = uStack_218 >> 0x14;
    param_1[3] = (ulong)((lStack_230 + lStack_278) - lStack_248) >> 0x14;
  }
  uStack_134 = 10;
  iVar3 = *(int *)puVar2;
  _task_info(iVar3,0x12,auStack_2d0,&uStack_134);
  if (iVar3 == 0) {
    param_1[5] = uStack_2c4 >> 0x14;
  }
  uVar5 = 0;
  _malloc_zone_statistics(0,auStack_2f0);
  param_1[4] = uStack_2d8 >> 0x14;
  _os_proc_available_memory();
  param_1[6] = uVar5 >> 0x14;
  return;
}



/* Entry: 1072b2d9c; end: 1072b2de3;  */

void FUN_1072b2d9c(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  
  func_0x0001072ced38();
  lVar1 = lRam00000001136ca220;
  *param_1 = uRam00000001136ca218;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x1131ad1e0);
  return;
}



/* Entry: 1072b2de4; end: 1072b3117;  */

undefined8 * FUN_1072b2de4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  int extraout_w10;
  long lVar7;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_78 [2];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_11099a3c0;
  param_1[1] = &PTR_DAT_11099a630;
  FUN_1072b3118();
  FUN_1072b2c60(&uStack_68);
  lVar7 = param_1[6];
  func_0x0001072ced38();
  lVar7 = lRam00000001136ca200 + lVar7 * 0x70;
  *(ulong *)(lVar7 + 0x40) = CONCAT44(uStack_5c,uStack_60);
  *(ulong *)(lVar7 + 0x38) = CONCAT44(uStack_64,uStack_68);
  *(undefined8 *)(lVar7 + 0x50) = uStack_50;
  *(undefined8 *)(lVar7 + 0x48) = uStack_58;
  *(undefined8 *)(lVar7 + 0x60) = uStack_40;
  *(undefined8 *)(lVar7 + 0x58) = uStack_48;
  *(undefined8 *)(lVar7 + 0x68) = uStack_38;
  FUN_1072b9cf8();
  func_0x0001072ce8a8();
  plVar5 = alStack_78;
  FUN_1072b2d9c();
  if (alStack_78[0] != 0) {
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    do {
      func_0x0001072cfb28();
    } while (extraout_w10 != 0);
    func_0x0001078bc120(plVar5 + 0x38,uStack_60,uStack_68);
    func_0x0001072d00e4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_a8,alStack_78[0]);
    func_0x0001078bc160(plVar5 + 0x38,&uStack_90,auStack_a8);
    func_0x0001003ac718();
    func_0x0001072cf43c();
    func_0x0001078bc240(plVar5 + 0x38);
  }
  FUN_10724c894(alStack_78);
  uStack_88 = param_1[0x53];
  uStack_90 = param_1[0x52];
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  puVar6 = &uStack_90;
  FUN_1072bcc2c();
  if (*(char *)((long)param_1 + 0x354) == '\x01') {
    puVar6 = (undefined8 *)(param_1[0x41] + 0x108);
    func_0x00010734f9d4(puVar6,param_1 + 0x6a);
  }
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  piVar1 = (int *)(puVar6 + 0x39);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    func_0x0001078bc070(puVar6 + 0x38);
  }
  if (param_1[0x15] != 0) {
    FUN_1072b3158(param_1);
  }
  func_0x00010785aed0();
  func_0x0001072bccc4(param_1 + 0x74);
  FUN_10725b238(param_1 + 0x72);
  FUN_10724ae28(param_1 + 0x70);
  FUN_10724b54c(param_1 + 0x6d);
  func_0x00010724b8b8(param_1 + 0x6b);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x5b);
  func_0x0001072aa1a4(param_1 + 0x58);
  FUN_1072ba030(param_1 + 0x56);
  func_0x0001072bcc98(param_1 + 0x55);
  func_0x0001072bcc50(param_1 + 0x54);
  FUN_1072bcc2c(param_1 + 0x52);
  func_0x0001072aa1ec(param_1 + 0x50);
  FUN_1072bcbe4(param_1 + 0x4f);
  FUN_1072bcb9c(param_1 + 0x4e);
  FUN_1072bcb54(param_1 + 0x4d);
  FUN_1072bcb0c(param_1 + 0x4c);
  FUN_1072bcac4(param_1 + 0x4b);
  func_0x0001072bca7c(param_1 + 0x4a);
  func_0x0001072bca58(param_1 + 0x48);
  func_0x0001072aa2c4(param_1 + 0x46);
  func_0x0001072bca04(param_1 + 0x45);
  func_0x0001072aa138(param_1 + 0x43);
  func_0x0001072aca00(param_1 + 0x41);
  func_0x00010724bd74(param_1 + 0x3f);
  func_0x0001072aa2e8(param_1 + 0x3d);
  func_0x0001072aa30c(param_1 + 0x3b);
  func_0x0001072aa27c(param_1 + 0x39);
  func_0x0001072ac4dc(param_1 + 0x37);
  FUN_1072ac7b8(param_1 + 0x35);
  func_0x0001072aa114(param_1 + 0x33);
  func_0x00010726eedc(param_1 + 0x31);
  func_0x0001072bc9b0(param_1 + 0x30);
  func_0x00010724bd50(param_1 + 0x2e);
  func_0x0001072bc98c(param_1 + 0x2c);
  func_0x0001072bc968(param_1 + 0x29);
  func_0x0001072aa210(param_1 + 0x27);
  func_0x00010726ee04(param_1 + 0x25);
  func_0x0001072bc8dc(param_1 + 0x24);
  FUN_1072bc7fc(param_1 + 0x23);
  func_0x0001072bc7b4(param_1 + 0x22);
  func_0x0001072bc790(param_1 + 0x20);
  func_0x0001072bc76c(param_1 + 0x1e);
  func_0x0001072bc748(param_1 + 0x1c);
  func_0x00010726eeb8(param_1 + 0x1a);
  func_0x0001072bc720(param_1 + 0x19);
  func_0x0001072bc6f8(param_1 + 0x18);
  func_0x00010725b6e0(param_1 + 0x16);
  FUN_1072bc6a4(param_1 + 0x15);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0xd);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 7);
  func_0x0001072ac904(param_1 + 2);
  return param_1;
}



/* Entry: 1072b3118; end: 1072b3157;  */

void FUN_1072b3118(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001072cefbc();
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_1072b60fc(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0x68);
  return;
}



/* Entry: 1072b3158; end: 1072b321b;  */

void FUN_1072b3158(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001072cefbc();
  func_0x0001072b2b70(&uStack_50,param_1 + 0x290);
  *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0xf0) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x20) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0xe0) + 8) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x148) + 8) = 0;
  func_0x0001072b2bb8(&uStack_40,param_1 + 0x180);
  func_0x0001072b2b50(&uStack_38,param_1 + 0xa8);
  FUN_1072b52cc(&uStack_30,param_1 + 0x160);
  func_0x0001072cec24();
  FUN_1072bcc2c(&uStack_50);
  func_0x0001072bc9b0(&uStack_40);
  FUN_1072bc6a4(&uStack_38);
  func_0x0001072bc98c(&uStack_30);
  return;
}



/* Entry: 1072b321c; end: 1072b3227;  */

undefined8 * FUN_1072b321c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  int extraout_w10;
  long lVar7;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_78 [2];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_11099a3c0;
  param_1[1] = &PTR_DAT_11099a630;
  FUN_1072b3118();
  FUN_1072b2c60(&uStack_68);
  lVar7 = param_1[6];
  func_0x0001072ced38();
  lVar7 = lRam00000001136ca200 + lVar7 * 0x70;
  *(ulong *)(lVar7 + 0x40) = CONCAT44(uStack_5c,uStack_60);
  *(ulong *)(lVar7 + 0x38) = CONCAT44(uStack_64,uStack_68);
  *(undefined8 *)(lVar7 + 0x50) = uStack_50;
  *(undefined8 *)(lVar7 + 0x48) = uStack_58;
  *(undefined8 *)(lVar7 + 0x60) = uStack_40;
  *(undefined8 *)(lVar7 + 0x58) = uStack_48;
  *(undefined8 *)(lVar7 + 0x68) = uStack_38;
  FUN_1072b9cf8();
  func_0x0001072ce8a8();
  plVar5 = alStack_78;
  FUN_1072b2d9c();
  if (alStack_78[0] != 0) {
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    do {
      func_0x0001072cfb28();
    } while (extraout_w10 != 0);
    func_0x0001078bc120(plVar5 + 0x38,uStack_60,uStack_68);
    func_0x0001072d00e4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_a8,alStack_78[0]);
    func_0x0001078bc160(plVar5 + 0x38,&uStack_90,auStack_a8);
    func_0x0001003ac718();
    func_0x0001072cf43c();
    func_0x0001078bc240(plVar5 + 0x38);
  }
  FUN_10724c894(alStack_78);
  uStack_88 = param_1[0x53];
  uStack_90 = param_1[0x52];
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  puVar6 = &uStack_90;
  FUN_1072bcc2c();
  if (*(char *)((long)param_1 + 0x354) == '\x01') {
    puVar6 = (undefined8 *)(param_1[0x41] + 0x108);
    func_0x00010734f9d4(puVar6,param_1 + 0x6a);
  }
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  piVar1 = (int *)(puVar6 + 0x39);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    func_0x0001078bc070(puVar6 + 0x38);
  }
  if (param_1[0x15] != 0) {
    FUN_1072b3158(param_1);
  }
  func_0x00010785aed0();
  func_0x0001072bccc4(param_1 + 0x74);
  FUN_10725b238(param_1 + 0x72);
  FUN_10724ae28(param_1 + 0x70);
  FUN_10724b54c(param_1 + 0x6d);
  func_0x00010724b8b8(param_1 + 0x6b);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x5b);
  func_0x0001072aa1a4(param_1 + 0x58);
  FUN_1072ba030(param_1 + 0x56);
  func_0x0001072bcc98(param_1 + 0x55);
  func_0x0001072bcc50(param_1 + 0x54);
  FUN_1072bcc2c(param_1 + 0x52);
  func_0x0001072aa1ec(param_1 + 0x50);
  FUN_1072bcbe4(param_1 + 0x4f);
  FUN_1072bcb9c(param_1 + 0x4e);
  FUN_1072bcb54(param_1 + 0x4d);
  FUN_1072bcb0c(param_1 + 0x4c);
  FUN_1072bcac4(param_1 + 0x4b);
  func_0x0001072bca7c(param_1 + 0x4a);
  func_0x0001072bca58(param_1 + 0x48);
  func_0x0001072aa2c4(param_1 + 0x46);
  func_0x0001072bca04(param_1 + 0x45);
  func_0x0001072aa138(param_1 + 0x43);
  func_0x0001072aca00(param_1 + 0x41);
  func_0x00010724bd74(param_1 + 0x3f);
  func_0x0001072aa2e8(param_1 + 0x3d);
  func_0x0001072aa30c(param_1 + 0x3b);
  func_0x0001072aa27c(param_1 + 0x39);
  func_0x0001072ac4dc(param_1 + 0x37);
  FUN_1072ac7b8(param_1 + 0x35);
  func_0x0001072aa114(param_1 + 0x33);
  func_0x00010726eedc(param_1 + 0x31);
  func_0x0001072bc9b0(param_1 + 0x30);
  func_0x00010724bd50(param_1 + 0x2e);
  func_0x0001072bc98c(param_1 + 0x2c);
  func_0x0001072bc968(param_1 + 0x29);
  func_0x0001072aa210(param_1 + 0x27);
  func_0x00010726ee04(param_1 + 0x25);
  func_0x0001072bc8dc(param_1 + 0x24);
  FUN_1072bc7fc(param_1 + 0x23);
  func_0x0001072bc7b4(param_1 + 0x22);
  func_0x0001072bc790(param_1 + 0x20);
  func_0x0001072bc76c(param_1 + 0x1e);
  func_0x0001072bc748(param_1 + 0x1c);
  func_0x00010726eeb8(param_1 + 0x1a);
  func_0x0001072bc720(param_1 + 0x19);
  func_0x0001072bc6f8(param_1 + 0x18);
  func_0x00010725b6e0(param_1 + 0x16);
  FUN_1072bc6a4(param_1 + 0x15);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0xd);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 7);
  func_0x0001072ac904(param_1 + 2);
  return param_1;
}



/* Entry: 1072b3228; end: 1072b323b;  */

void FUN_1072b3228(void)

{
  FUN_1072b2de4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072b323c; end: 1072b3243;  */

void FUN_1072b323c(long param_1)

{
  FUN_1072b2de4(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072b3244; end: 1072b3283;  */

void FUN_1072b3244(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1072ca894(&uStack_30,param_2 + 0x10);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010725b704(&uStack_30);
  return;
}



/* Entry: 1072b3284; end: 1072b3287;  */

void FUN_1072b3284(void)

{
  return;
}



/* Entry: 1072b3288; end: 1072b32bf;  */

void FUN_1072b3288(void)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1072b32c0();
  func_0x0001072ca8d0(&uStack_30);
  return;
}



/* Entry: 1072b32c0; end: 1072b3cf3;  */

void FUN_1072b32c0(long param_1,undefined1 *param_2,undefined1 *param_3,undefined8 *param_4,
                  long *param_5,long *param_6)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar11;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar12;
  long extraout_x8_03;
  long lVar13;
  long lVar14;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  undefined1 *unaff_x19;
  undefined4 uVar15;
  long *plVar16;
  long *plVar17;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long in_register_00005008;
  
  while( true ) {
    func_0x0001072cfcb0();
    *(undefined1 **)((long)register0x00000008 + 0x50) = unaff_x29;
    *(code **)((long)register0x00000008 + 0x58) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + 0x50);
    plVar16 = param_6;
    func_0x0001072ce1e4();
    *(undefined8 *)((long)register0x00000008 + -0x10) = extraout_x8;
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    *(undefined4 *)((long)register0x00000008 + -0x2d0) = 0x106;
    *(undefined4 *)((long)register0x00000008 + -0x2b8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2a0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x298) = 0;
    *(undefined ***)((long)register0x00000008 + -0x2b0) = &PTR_FUN_110996720;
    *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x290) = 0x106;
    *(undefined4 *)((long)register0x00000008 + -0x288) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x284) = 1;
    *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
    func_0x00010743cc34((undefined1 *)((long)register0x00000008 + -0x260),
                        (undefined1 *)((long)register0x00000008 + -0x2d0),7);
    func_0x00010743d7bc((undefined1 *)((long)register0x00000008 + -0x150),
                        (undefined1 *)((long)register0x00000008 + -0x260));
    FUN_107288cd8((undefined1 *)((long)register0x00000008 + -0x260));
    FUN_107262330((undefined1 *)((long)register0x00000008 + -0x2d0));
    ppuVar1 = &PTR_PTR_113233dc8;
    if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_3 + 0x18);
    }
    *(undefined4 *)(unaff_x19 + 0x2d0) = *(undefined4 *)(ppuVar1 + 3);
    uVar4 = *(undefined ***)(param_3 + 0x18) == (undefined **)0x0;
    ppuVar1 = &PTR_PTR_113233dc8;
    if (!(bool)uVar4) {
      ppuVar1 = *(undefined ***)(param_3 + 0x18);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (unaff_x19 + 0x2d8,(ulong)ppuVar1[2] & 0xfffffffffffffffc);
    plVar17 = (long *)((long)register0x00000008 + -0x2d0);
    func_0x0001072b70d0(plVar17,*(undefined4 *)(unaff_x19 + 0x2d0));
    func_0x0001072cf8f0();
    puVar7 = (undefined8 *)(param_2 + 8);
    plVar5 = plVar17;
    func_0x0001072cfc74();
    *plVar5 = (long)puVar7;
    plVar5[2] = in_register_00005008;
    plVar5[1] = param_1;
    plVar5[3] = extraout_x8_00;
    *(undefined8 *)((long)register0x00000008 + -600) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
    *(undefined1 *)(plVar5 + 4) = 0;
    *(undefined1 *)(plVar5 + 5) = 0;
    *(undefined1 *)(plVar5 + 6) = 1;
    func_0x0001072cf334();
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    func_0x0001072bca24(unaff_x19 + 0x228,plVar17);
    func_0x0001072bca04((undefined1 *)((long)register0x00000008 + -0x48));
    func_0x0001072cf508();
    *(undefined4 *)((long)register0x00000008 + -0x260) = 0x105;
    *(undefined4 *)((long)register0x00000008 + -0x248) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
    *(undefined ***)((long)register0x00000008 + -0x240) = &PTR_FUN_110996720;
    *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x220) = 0x105;
    *(undefined4 *)((long)register0x00000008 + -0x218) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x214) = 1;
    *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
    func_0x0001072b70d0((undefined1 *)((long)register0x00000008 + -0x300),
                        *(undefined4 *)(unaff_x19 + 0x2d0));
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x260);
    FUN_10726e300(puVar10,&DAT_10f34bc88,(undefined1 *)((long)register0x00000008 + -0x300));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              ((undefined1 *)((long)register0x00000008 + -0x318),unaff_x19 + 0x2d8);
    FUN_10726e300(puVar10,&UNK_10f408d9c,(undefined1 *)((long)register0x00000008 + -0x318));
    *(undefined4 *)((long)register0x00000008 + -0x2d0) = 1;
    *(undefined4 *)((long)register0x00000008 + -0x2c8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = *puVar7;
    *(undefined4 *)((long)register0x00000008 + -0x40) = 3;
    func_0x0001072cf8ac(puVar7,puVar10,(undefined1 *)((long)register0x00000008 + -0x2d0),
                        (undefined1 *)((long)register0x00000008 + -0x48));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0x318));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0x300));
    FUN_107262330((undefined1 *)((long)register0x00000008 + -0x260));
    uVar2 = *(uint *)(param_3 + 0x10);
    lVar11 = *(long *)(param_3 + 0x18);
    *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2e0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
    if ((uVar2 & 1) != 0) {
      puVar10 = (undefined1 *)(*(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffc);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                ((undefined1 *)((long)register0x00000008 + -0x2e8));
    }
    uVar2 = *(uint *)(unaff_x19 + 0x28);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x2e8);
    func_0x0001005d466c();
    *(ulong *)((long)register0x00000008 + -0x260) = (ulong)uVar2;
    *(undefined8 *)((long)register0x00000008 + -600) = 0;
    *(undefined1 **)((long)register0x00000008 + -0x250) = puVar6;
    *(undefined1 **)((long)register0x00000008 + -0x248) = puVar10;
    func_0x0001003a91d4(&UNK_10f408dbe);
    func_0x0001003a9204((undefined1 *)((long)register0x00000008 + -0x2d0));
    func_0x000100066230(unaff_x19 + 0x50,(undefined1 *)((long)register0x00000008 + -0x2d0));
    func_0x0001072cf508();
    plVar17 = *(long **)(unaff_x19 + 0xb0);
    if ((plVar17 != (long *)0x0) && ((*(byte *)(plVar17 + 1) & 1) == 0)) {
      plVar5 = plVar17;
      (**(code **)(*plVar17 + 0x10))();
      if ((int)plVar5 == 0) {
        (**(code **)(*plVar17 + 0x20))((undefined1 *)((long)register0x00000008 + -0x48),plVar17);
        FUN_10724bb70((undefined1 *)((long)register0x00000008 + -0x340),
                      (undefined1 *)((long)register0x00000008 + -0x40));
        plVar17 = *(long **)((long)register0x00000008 + -0x340);
        if (plVar17 != (long *)0x0) {
          uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
          puVar7 = (undefined8 *)((long)register0x00000008 + -0x2d0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (puVar7,unaff_x19 + 0x50);
          func_0x0001072cf8f0();
          puVar8 = puVar7;
          func_0x0001072cfc74();
          *puVar8 = &PTR_FUN_11099b528;
          puVar8[1] = uVar9;
          puVar8[3] = 1;
          puVar8[2] = 0x10;
          puVar8[5] = in_register_00005008;
          puVar8[4] = param_1;
          puVar8[6] = extraout_x8_02;
          *(undefined8 *)((long)register0x00000008 + -600) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
          func_0x0001072cf334();
          *(undefined8 **)((long)register0x00000008 + -0x260) = puVar7;
          func_0x0001072cf508();
          func_0x0001073ae140(plVar17,(undefined1 *)((long)register0x00000008 + -0x260));
          lVar11 = *(long *)((long)register0x00000008 + -0x260);
          *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
          if (lVar11 != 0) {
            func_0x0001072ce338();
          }
        }
        func_0x0001072cf2e8();
        FUN_10724ae28((undefined1 *)((long)register0x00000008 + -0x40));
      }
      else {
        plVar5 = plVar17;
        (**(code **)(*plVar17 + 0x18))();
        if (plVar5 != (long *)0x0) {
          func_0x0001072cf5a4();
          (*extraout_x8_01)();
        }
      }
    }
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      func_0x00010740df68(*(long *)(unaff_x19 + 0xa8),unaff_x19 + 0x50);
      func_0x0001072cf144(*(undefined8 *)(unaff_x19 + 0xa8));
      func_0x0001077c3690();
    }
    if (*(long *)(unaff_x19 + 0x2a8) != 0) {
      func_0x0001072fdeb0(*(long *)(unaff_x19 + 0x2a8),unaff_x19 + 0x50);
    }
    if (*(long *)(unaff_x19 + 0xf0) != 0) {
      func_0x000107292150(*(long *)(unaff_x19 + 0xf0),unaff_x19 + 0x50);
    }
    lVar11 = *(long *)(unaff_x19 + 0x100);
    if (lVar11 != 0) {
      func_0x0001072f350c(lVar11,unaff_x19 + 0x50);
    }
    func_0x0001072cf4c0();
    func_0x0001072cfda8();
    *plVar17 = lVar11;
    *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
    FUN_1072bca9c(unaff_x19 + 0x250,plVar17);
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x260);
    func_0x0001072bca7c();
    func_0x0001072cf4c0();
    func_0x0001072cfda8();
    *plVar17 = (long)puVar10;
    *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
    FUN_1072bcae4(unaff_x19 + 600,plVar17);
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x260);
    FUN_1072bcac4();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    lVar11 = *(long *)(unaff_x19 + 0xb8);
    uVar9 = *(undefined8 *)(unaff_x19 + 0xb0);
    *(undefined8 *)((long)register0x00000008 + -0x368) = *(undefined8 *)(unaff_x19 + 0xb8);
    *(undefined8 *)((long)register0x00000008 + -0x370) = uVar9;
    puVar6 = puVar10;
    func_0x0001072cf4c0();
    in_register_00005008 = *(long *)((long)register0x00000008 + -0x368);
    param_1 = *(long *)((long)register0x00000008 + -0x370);
    *(long *)((long)register0x00000008 + -600) = in_register_00005008;
    *(long *)((long)register0x00000008 + -0x260) = param_1;
    if (lVar11 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10 != 0);
    }
    plVar17 = (long *)(puVar10 + 0x60);
    FUN_107291160(puVar6,unaff_x19 + 0x50,(undefined1 *)((long)register0x00000008 + -0x260),
                  unaff_x19 + 0x2c0);
    func_0x00010725b6e0((undefined1 *)((long)register0x00000008 + -0x260));
    *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0;
    FUN_1072bcb2c(unaff_x19 + 0x260,puVar6);
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x2d0);
    FUN_1072bcb0c(puVar10);
    lVar11 = *(long *)(unaff_x19 + 0x198);
    lVar12 = *(long *)(unaff_x19 + 0x1a0);
    func_0x0001072cf4c0();
    *(long *)((long)register0x00000008 + -0x260) = lVar11;
    *(long *)((long)register0x00000008 + -600) = lVar12;
    if (lVar12 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_00 != 0);
    }
    FUN_1072d8f8c(puVar10,unaff_x19 + 0x50,(undefined1 *)((long)register0x00000008 + -0x260));
    func_0x0001072aa114((undefined1 *)((long)register0x00000008 + -0x260));
    *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0;
    FUN_1072bcc70(unaff_x19 + 0x2a0,puVar10);
    func_0x0001072bcc50((undefined1 *)((long)register0x00000008 + -0x2d0));
    func_0x0001072cf304();
    lVar12 = *param_5;
    if (lVar12 != 0) {
      lVar13 = param_5[1];
      *(long *)((long)register0x00000008 + -0x328) = lVar12;
      *(long *)((long)register0x00000008 + -800) = lVar13;
      lVar14 = 0;
      if (lVar13 != 0) {
        do {
          func_0x0001072ce620();
        } while (extraout_w11 != 0);
        lVar14 = *(long *)((long)register0x00000008 + -800);
        lVar12 = extraout_x8_03;
      }
      *(undefined ***)((long)register0x00000008 + -0x260) = &PTR_FUN_11099b3a8;
      *(long *)((long)register0x00000008 + -600) = lVar12;
      *(long *)((long)register0x00000008 + -0x250) = lVar14;
      *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
      if (lVar14 != 0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10_01 != 0);
      }
      *(undefined1 **)((long)register0x00000008 + -0x248) =
           (undefined1 *)((long)register0x00000008 + -0x260);
      FUN_107292e94();
      func_0x000107283e00((undefined1 *)((long)register0x00000008 + -0x260));
      FUN_1072bb9d0((undefined1 *)((long)register0x00000008 + -0x328));
    }
    param_5 = plVar17;
    if ((param_3[0x10] & 1) != 0) {
      uVar9 = *(undefined8 *)(unaff_x19 + 0xb0);
      *(undefined ***)((long)register0x00000008 + -0x260) = &PTR_DAT_11099b428;
      *(undefined1 **)((long)register0x00000008 + -600) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x248) =
           (undefined1 *)((long)register0x00000008 + -0x260);
      FUN_107292e94(uVar9,(undefined1 *)((long)register0x00000008 + -0x260));
      func_0x000107283e00((undefined1 *)((long)register0x00000008 + -0x260));
      plVar17 = *(long **)(unaff_x19 + 0xd0);
      uVar4 = *(undefined ***)(param_3 + 0x18) == (undefined **)0x0;
      ppuVar1 = &PTR_PTR_113233dc8;
      if (!(bool)uVar4) {
        ppuVar1 = *(undefined ***)(param_3 + 0x18);
      }
      func_0x0001078696e8((undefined1 *)((long)register0x00000008 + -0x340));
      func_0x000100060964((undefined1 *)((long)register0x00000008 + -0x2d0),&UNK_10de2cfd7);
      func_0x0001072cf8f8(ppuVar1[2],(undefined1 *)((long)register0x00000008 + -0x48));
      func_0x0001072d0000();
      func_0x0001072cf89c();
      func_0x0001072cf88c();
      func_0x0001072cec14();
      func_0x0001072cf910();
      func_0x000100060964((undefined1 *)((long)register0x00000008 + -0x2d0),&UNK_10de2cfed);
      func_0x0001072b70d0((undefined1 *)((long)register0x00000008 + -0x2e8),
                          *(undefined4 *)(ppuVar1 + 3));
      FUN_1072625b4((undefined1 *)((long)register0x00000008 + -0x48),
                    (undefined1 *)((long)register0x00000008 + -0x2e8));
      func_0x0001072d0000();
      func_0x0001072cf89c();
      func_0x0001072cf4f8();
      func_0x0001072cec14();
      func_0x0001072cf304();
      func_0x0001072cf910();
      (**(code **)(*plVar17 + 0x28))(plVar17,(undefined1 *)((long)register0x00000008 + -0x340));
      FUN_10726b264((undefined1 *)((long)register0x00000008 + -0x340));
    }
    func_0x0001072d0274();
    FUN_1072b54d0();
    FUN_1072b3d14(unaff_x19 + 0x240,*param_4,param_4[1]);
    if (((byte)param_3[0x10] >> 2 & 1) != 0) {
      plVar17 = *(long **)(unaff_x19 + 0x290);
      func_0x0001072cfec8(*(undefined8 *)(*(long *)(param_3 + 0x28) + 0x10),
                          *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x18),
                          (undefined1 *)((long)register0x00000008 + -0x260));
      lVar12 = *plVar17;
      in_register_00005008 = *(long *)((long)register0x00000008 + -600);
      param_1 = *(long *)((long)register0x00000008 + -0x260);
      *(long *)(lVar12 + 0x18) = in_register_00005008;
      *(long *)(lVar12 + 0x10) = param_1;
      *(undefined1 *)(lVar12 + 0x20) = 1;
    }
    plVar17 = *(long **)(unaff_x19 + 0x188);
    func_0x0001072cfff8();
    (**(code **)(*plVar17 + 0x28))(plVar17,(undefined1 *)((long)register0x00000008 + -0x260));
    func_0x0001072cf334();
    if (((((uint)plVar17 ^ 0xffffffff) & 0x101) == 0) && ((param_3[0x30] & 1) != 0)) {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x290);
      *(undefined1 *)((long)register0x00000008 + -0x260) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x240) = 0;
      func_0x00010739ebd0(uVar9,(undefined1 *)((long)register0x00000008 + -0x260));
      FUN_1072bb9f4((undefined1 *)((long)register0x00000008 + -0x260));
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 0x230);
    *(undefined4 *)((long)register0x00000008 + -0x260) = 1;
    FUN_1072b6c24(uVar9,(undefined1 *)((long)register0x00000008 + -0x260));
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x260);
    func_0x000100060b18(puVar10,&PTR_DAT_11099a6e8);
    func_0x0001072cedc0();
    func_0x0001072ceb4c();
    func_0x0001072cf334();
    func_0x00010785f1f4();
    *(undefined1 *)((long)register0x00000008 + -0x260) = 0;
    puVar10 = puVar10 + 0x2b0;
    FUN_10724e2c8(puVar10,(undefined1 *)((long)register0x00000008 + -0x260));
    if ((int)puVar10 != 0) {
      func_0x0001072cfff8();
      param_5 = (long *)0x0;
      func_0x00010786df04(8,(undefined1 *)((long)register0x00000008 + -0x260),0);
      func_0x0001072cf334();
    }
    if (*param_6 != 0) {
      func_0x00010739ed84(*(undefined8 *)(unaff_x19 + 0x290),param_6);
    }
    param_6 = plVar16;
    if (((byte)param_3[0x10] >> 1 & 1) != 0) {
      func_0x00010793d530((undefined1 *)((long)register0x00000008 + -0x260),0,
                          *(undefined8 *)(param_3 + 0x20));
      uVar9 = *(undefined8 *)(unaff_x19 + 0xb0);
      *(undefined ***)((long)register0x00000008 + -0x2d0) = &PTR_FUN_11099bb28;
      in_register_00005008 = *(long *)((long)register0x00000008 + -0x248);
      param_1 = *(long *)((long)register0x00000008 + -0x250);
      *(long *)((long)register0x00000008 + -0x2c0) = in_register_00005008;
      *(long *)((long)register0x00000008 + -0x2c8) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x2b8) =
           (undefined1 *)((long)register0x00000008 + -0x2d0);
      FUN_107292e94(uVar9,(undefined1 *)((long)register0x00000008 + -0x2d0));
      func_0x000107283e00((undefined1 *)((long)register0x00000008 + -0x2d0));
      func_0x00010793d50c((undefined1 *)((long)register0x00000008 + -0x260));
    }
    plVar16 = *(long **)(unaff_x19 + 0xd0);
    func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x2d0),&UNK_10de2ce8c);
    uVar3 = param_3[0x32];
    *(undefined4 *)((long)register0x00000008 + -0x260) = 6;
    *(undefined1 *)((long)register0x00000008 + -600) = uVar3;
    param_4 = (undefined8 *)((long)register0x00000008 + -0x260);
    func_0x0001072cf670(*(undefined8 *)(*plVar16 + 0x30));
    func_0x000104c3323c((undefined1 *)((long)register0x00000008 + -0x260));
    func_0x0001072cf508();
    plVar16 = *(long **)(unaff_x19 + 0x188);
    func_0x0001072cfff8();
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x260);
    (**(code **)(*plVar16 + 0x28))();
    func_0x0001072cf334();
    if ((((uint)plVar16 ^ 0xffffffff) & 0x101) != 0) {
      uVar15 = (undefined4)*(undefined8 *)(unaff_x19 + 0x208);
      *(undefined1 *)((long)register0x00000008 + -0x2d0) = param_3[0x31];
      puVar7 = (undefined8 *)((long)register0x00000008 + -0x360);
      func_0x0001072cfea4();
      *(undefined1 **)((long)register0x00000008 + -0x348) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
      func_0x0001072cedd4();
      *puVar7 = &PTR_FUN_11099b4a8;
      in_register_00005008 = *(long *)((long)register0x00000008 + -0x358);
      param_1 = *(long *)((long)register0x00000008 + -0x360);
      puVar7[2] = in_register_00005008;
      puVar7[1] = param_1;
      *(undefined8 *)((long)register0x00000008 + -0x360) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x358) = 0;
      puVar7[3] = *(undefined8 *)((long)register0x00000008 + -0x350);
      puVar7[4] = unaff_x19;
      *(undefined8 **)((long)register0x00000008 + -0x248) = puVar7;
      puVar10 = (undefined1 *)((long)register0x00000008 + -0x2d0);
      param_4 = (undefined8 *)((long)register0x00000008 + -0x260);
      func_0x00010734c53c();
      func_0x0001072cc30c((undefined1 *)((long)register0x00000008 + -0x260));
      func_0x0001072d0020();
      *(undefined4 *)(unaff_x19 + 0x350) = uVar15;
      unaff_x19[0x354] = 1;
    }
    param_3 = puVar10;
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x150);
    func_0x00010743d7e4();
    func_0x0001072ce0cc(*(undefined8 *)((long)register0x00000008 + -0x10));
    if ((bool)uVar4) break;
    ___stack_chk_fail();
    lVar12 = *(long *)((long)register0x00000008 + -0x260);
    *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
    if (lVar12 != 0) {
      func_0x0001072ce338();
    }
    func_0x0001072cf2e8();
    FUN_10724ae28(lVar11 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0x2e8));
    param_2 = (undefined1 *)((long)register0x00000008 + -0x150);
    func_0x00010743d7e4();
    unaff_x30 = FUN_1072b3cf4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x370);
  }
  return;
}



/* Entry: 1072b3cf4; end: 1072b3d13;  */

void FUN_1072b3cf4(long param_1,undefined1 *param_2,undefined1 *param_3,undefined8 *param_4,
                  long *param_5,long *param_6)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar11;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar12;
  long extraout_x8_03;
  long lVar13;
  long lVar14;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  undefined1 *unaff_x19;
  undefined4 uVar15;
  long *plVar16;
  long *plVar17;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long in_register_00005008;
  
  while( true ) {
    func_0x0001072cfcb0();
    *(undefined1 **)((long)register0x00000008 + 0x50) = unaff_x29;
    *(code **)((long)register0x00000008 + 0x58) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + 0x50);
    plVar16 = param_6;
    func_0x0001072ce1e4();
    *(undefined8 *)((long)register0x00000008 + -0x10) = extraout_x8;
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    *(undefined4 *)((long)register0x00000008 + -0x2d0) = 0x106;
    *(undefined4 *)((long)register0x00000008 + -0x2b8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2a0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x298) = 0;
    *(undefined ***)((long)register0x00000008 + -0x2b0) = &PTR_FUN_110996720;
    *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x290) = 0x106;
    *(undefined4 *)((long)register0x00000008 + -0x288) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x284) = 1;
    *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
    func_0x00010743cc34((undefined1 *)((long)register0x00000008 + -0x260),
                        (undefined1 *)((long)register0x00000008 + -0x2d0),7);
    func_0x00010743d7bc((undefined1 *)((long)register0x00000008 + -0x150),
                        (undefined1 *)((long)register0x00000008 + -0x260));
    FUN_107288cd8((undefined1 *)((long)register0x00000008 + -0x260));
    FUN_107262330((undefined1 *)((long)register0x00000008 + -0x2d0));
    ppuVar1 = &PTR_PTR_113233dc8;
    if (*(undefined ***)(param_3 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_3 + 0x18);
    }
    *(undefined4 *)(unaff_x19 + 0x2d0) = *(undefined4 *)(ppuVar1 + 3);
    uVar4 = *(undefined ***)(param_3 + 0x18) == (undefined **)0x0;
    ppuVar1 = &PTR_PTR_113233dc8;
    if (!(bool)uVar4) {
      ppuVar1 = *(undefined ***)(param_3 + 0x18);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (unaff_x19 + 0x2d8,(ulong)ppuVar1[2] & 0xfffffffffffffffc);
    plVar17 = (long *)((long)register0x00000008 + -0x2d0);
    func_0x0001072b70d0(plVar17,*(undefined4 *)(unaff_x19 + 0x2d0));
    func_0x0001072cf8f0();
    puVar7 = (undefined8 *)(param_2 + 8);
    plVar5 = plVar17;
    func_0x0001072cfc74();
    *plVar5 = (long)puVar7;
    plVar5[2] = in_register_00005008;
    plVar5[1] = param_1;
    plVar5[3] = extraout_x8_00;
    *(undefined8 *)((long)register0x00000008 + -600) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
    *(undefined1 *)(plVar5 + 4) = 0;
    *(undefined1 *)(plVar5 + 5) = 0;
    *(undefined1 *)(plVar5 + 6) = 1;
    func_0x0001072cf334();
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    func_0x0001072bca24(unaff_x19 + 0x228,plVar17);
    func_0x0001072bca04((undefined1 *)((long)register0x00000008 + -0x48));
    func_0x0001072cf508();
    *(undefined4 *)((long)register0x00000008 + -0x260) = 0x105;
    *(undefined4 *)((long)register0x00000008 + -0x248) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
    *(undefined ***)((long)register0x00000008 + -0x240) = &PTR_FUN_110996720;
    *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x220) = 0x105;
    *(undefined4 *)((long)register0x00000008 + -0x218) = 0;
    *(undefined1 *)((long)register0x00000008 + -0x214) = 1;
    *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
    func_0x0001072b70d0((undefined1 *)((long)register0x00000008 + -0x300),
                        *(undefined4 *)(unaff_x19 + 0x2d0));
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x260);
    FUN_10726e300(puVar10,&DAT_10f34bc88,(undefined1 *)((long)register0x00000008 + -0x300));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              ((undefined1 *)((long)register0x00000008 + -0x318),unaff_x19 + 0x2d8);
    FUN_10726e300(puVar10,&UNK_10f408d9c,(undefined1 *)((long)register0x00000008 + -0x318));
    *(undefined4 *)((long)register0x00000008 + -0x2d0) = 1;
    *(undefined4 *)((long)register0x00000008 + -0x2c8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = *puVar7;
    *(undefined4 *)((long)register0x00000008 + -0x40) = 3;
    func_0x0001072cf8ac(puVar7,puVar10,(undefined1 *)((long)register0x00000008 + -0x2d0),
                        (undefined1 *)((long)register0x00000008 + -0x48));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0x318));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0x300));
    FUN_107262330((undefined1 *)((long)register0x00000008 + -0x260));
    uVar2 = *(uint *)(param_3 + 0x10);
    lVar11 = *(long *)(param_3 + 0x18);
    *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2e0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
    if ((uVar2 & 1) != 0) {
      puVar10 = (undefined1 *)(*(ulong *)(lVar11 + 0x10) & 0xfffffffffffffffc);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                ((undefined1 *)((long)register0x00000008 + -0x2e8));
    }
    uVar2 = *(uint *)(unaff_x19 + 0x28);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x2e8);
    func_0x0001005d466c();
    *(ulong *)((long)register0x00000008 + -0x260) = (ulong)uVar2;
    *(undefined8 *)((long)register0x00000008 + -600) = 0;
    *(undefined1 **)((long)register0x00000008 + -0x250) = puVar6;
    *(undefined1 **)((long)register0x00000008 + -0x248) = puVar10;
    func_0x0001003a91d4(&UNK_10f408dbe);
    func_0x0001003a9204((undefined1 *)((long)register0x00000008 + -0x2d0));
    func_0x000100066230(unaff_x19 + 0x50,(undefined1 *)((long)register0x00000008 + -0x2d0));
    func_0x0001072cf508();
    plVar17 = *(long **)(unaff_x19 + 0xb0);
    if ((plVar17 != (long *)0x0) && ((*(byte *)(plVar17 + 1) & 1) == 0)) {
      plVar5 = plVar17;
      (**(code **)(*plVar17 + 0x10))();
      if ((int)plVar5 == 0) {
        (**(code **)(*plVar17 + 0x20))((undefined1 *)((long)register0x00000008 + -0x48),plVar17);
        FUN_10724bb70((undefined1 *)((long)register0x00000008 + -0x340),
                      (undefined1 *)((long)register0x00000008 + -0x40));
        plVar17 = *(long **)((long)register0x00000008 + -0x340);
        if (plVar17 != (long *)0x0) {
          uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
          puVar7 = (undefined8 *)((long)register0x00000008 + -0x2d0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (puVar7,unaff_x19 + 0x50);
          func_0x0001072cf8f0();
          puVar8 = puVar7;
          func_0x0001072cfc74();
          *puVar8 = &PTR_FUN_11099b528;
          puVar8[1] = uVar9;
          puVar8[3] = 1;
          puVar8[2] = 0x10;
          puVar8[5] = in_register_00005008;
          puVar8[4] = param_1;
          puVar8[6] = extraout_x8_02;
          *(undefined8 *)((long)register0x00000008 + -600) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
          func_0x0001072cf334();
          *(undefined8 **)((long)register0x00000008 + -0x260) = puVar7;
          func_0x0001072cf508();
          func_0x0001073ae140(plVar17,(undefined1 *)((long)register0x00000008 + -0x260));
          lVar11 = *(long *)((long)register0x00000008 + -0x260);
          *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
          if (lVar11 != 0) {
            func_0x0001072ce338();
          }
        }
        func_0x0001072cf2e8();
        FUN_10724ae28((undefined1 *)((long)register0x00000008 + -0x40));
      }
      else {
        plVar5 = plVar17;
        (**(code **)(*plVar17 + 0x18))();
        if (plVar5 != (long *)0x0) {
          func_0x0001072cf5a4();
          (*extraout_x8_01)();
        }
      }
    }
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      func_0x00010740df68(*(long *)(unaff_x19 + 0xa8),unaff_x19 + 0x50);
      func_0x0001072cf144(*(undefined8 *)(unaff_x19 + 0xa8));
      func_0x0001077c3690();
    }
    if (*(long *)(unaff_x19 + 0x2a8) != 0) {
      func_0x0001072fdeb0(*(long *)(unaff_x19 + 0x2a8),unaff_x19 + 0x50);
    }
    if (*(long *)(unaff_x19 + 0xf0) != 0) {
      func_0x000107292150(*(long *)(unaff_x19 + 0xf0),unaff_x19 + 0x50);
    }
    lVar11 = *(long *)(unaff_x19 + 0x100);
    if (lVar11 != 0) {
      func_0x0001072f350c(lVar11,unaff_x19 + 0x50);
    }
    func_0x0001072cf4c0();
    func_0x0001072cfda8();
    *plVar17 = lVar11;
    *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
    FUN_1072bca9c(unaff_x19 + 0x250,plVar17);
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x260);
    func_0x0001072bca7c();
    func_0x0001072cf4c0();
    func_0x0001072cfda8();
    *plVar17 = (long)puVar10;
    *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
    FUN_1072bcae4(unaff_x19 + 600,plVar17);
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x260);
    FUN_1072bcac4();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    lVar11 = *(long *)(unaff_x19 + 0xb8);
    uVar9 = *(undefined8 *)(unaff_x19 + 0xb0);
    *(undefined8 *)((long)register0x00000008 + -0x368) = *(undefined8 *)(unaff_x19 + 0xb8);
    *(undefined8 *)((long)register0x00000008 + -0x370) = uVar9;
    puVar6 = puVar10;
    func_0x0001072cf4c0();
    in_register_00005008 = *(long *)((long)register0x00000008 + -0x368);
    param_1 = *(long *)((long)register0x00000008 + -0x370);
    *(long *)((long)register0x00000008 + -600) = in_register_00005008;
    *(long *)((long)register0x00000008 + -0x260) = param_1;
    if (lVar11 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10 != 0);
    }
    plVar17 = (long *)(puVar10 + 0x60);
    FUN_107291160(puVar6,unaff_x19 + 0x50,(undefined1 *)((long)register0x00000008 + -0x260),
                  unaff_x19 + 0x2c0);
    func_0x00010725b6e0((undefined1 *)((long)register0x00000008 + -0x260));
    *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0;
    FUN_1072bcb2c(unaff_x19 + 0x260,puVar6);
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x2d0);
    FUN_1072bcb0c(puVar10);
    lVar11 = *(long *)(unaff_x19 + 0x198);
    lVar12 = *(long *)(unaff_x19 + 0x1a0);
    func_0x0001072cf4c0();
    *(long *)((long)register0x00000008 + -0x260) = lVar11;
    *(long *)((long)register0x00000008 + -600) = lVar12;
    if (lVar12 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_00 != 0);
    }
    FUN_1072d8f8c(puVar10,unaff_x19 + 0x50,(undefined1 *)((long)register0x00000008 + -0x260));
    func_0x0001072aa114((undefined1 *)((long)register0x00000008 + -0x260));
    *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0;
    FUN_1072bcc70(unaff_x19 + 0x2a0,puVar10);
    func_0x0001072bcc50((undefined1 *)((long)register0x00000008 + -0x2d0));
    func_0x0001072cf304();
    lVar12 = *param_5;
    if (lVar12 != 0) {
      lVar13 = param_5[1];
      *(long *)((long)register0x00000008 + -0x328) = lVar12;
      *(long *)((long)register0x00000008 + -800) = lVar13;
      lVar14 = 0;
      if (lVar13 != 0) {
        do {
          func_0x0001072ce620();
        } while (extraout_w11 != 0);
        lVar14 = *(long *)((long)register0x00000008 + -800);
        lVar12 = extraout_x8_03;
      }
      *(undefined ***)((long)register0x00000008 + -0x260) = &PTR_FUN_11099b3a8;
      *(long *)((long)register0x00000008 + -600) = lVar12;
      *(long *)((long)register0x00000008 + -0x250) = lVar14;
      *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
      if (lVar14 != 0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10_01 != 0);
      }
      *(undefined1 **)((long)register0x00000008 + -0x248) =
           (undefined1 *)((long)register0x00000008 + -0x260);
      FUN_107292e94();
      func_0x000107283e00((undefined1 *)((long)register0x00000008 + -0x260));
      FUN_1072bb9d0((undefined1 *)((long)register0x00000008 + -0x328));
    }
    param_5 = plVar17;
    if ((param_3[0x10] & 1) != 0) {
      uVar9 = *(undefined8 *)(unaff_x19 + 0xb0);
      *(undefined ***)((long)register0x00000008 + -0x260) = &PTR_DAT_11099b428;
      *(undefined1 **)((long)register0x00000008 + -600) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x248) =
           (undefined1 *)((long)register0x00000008 + -0x260);
      FUN_107292e94(uVar9,(undefined1 *)((long)register0x00000008 + -0x260));
      func_0x000107283e00((undefined1 *)((long)register0x00000008 + -0x260));
      plVar17 = *(long **)(unaff_x19 + 0xd0);
      uVar4 = *(undefined ***)(param_3 + 0x18) == (undefined **)0x0;
      ppuVar1 = &PTR_PTR_113233dc8;
      if (!(bool)uVar4) {
        ppuVar1 = *(undefined ***)(param_3 + 0x18);
      }
      func_0x0001078696e8((undefined1 *)((long)register0x00000008 + -0x340));
      func_0x000100060964((undefined1 *)((long)register0x00000008 + -0x2d0),&UNK_10de2cfd7);
      func_0x0001072cf8f8(ppuVar1[2],(undefined1 *)((long)register0x00000008 + -0x48));
      func_0x0001072d0000();
      func_0x0001072cf89c();
      func_0x0001072cf88c();
      func_0x0001072cec14();
      func_0x0001072cf910();
      func_0x000100060964((undefined1 *)((long)register0x00000008 + -0x2d0),&UNK_10de2cfed);
      func_0x0001072b70d0((undefined1 *)((long)register0x00000008 + -0x2e8),
                          *(undefined4 *)(ppuVar1 + 3));
      FUN_1072625b4((undefined1 *)((long)register0x00000008 + -0x48),
                    (undefined1 *)((long)register0x00000008 + -0x2e8));
      func_0x0001072d0000();
      func_0x0001072cf89c();
      func_0x0001072cf4f8();
      func_0x0001072cec14();
      func_0x0001072cf304();
      func_0x0001072cf910();
      (**(code **)(*plVar17 + 0x28))(plVar17,(undefined1 *)((long)register0x00000008 + -0x340));
      FUN_10726b264((undefined1 *)((long)register0x00000008 + -0x340));
    }
    func_0x0001072d0274();
    FUN_1072b54d0();
    FUN_1072b3d14(unaff_x19 + 0x240,*param_4,param_4[1]);
    if (((byte)param_3[0x10] >> 2 & 1) != 0) {
      plVar17 = *(long **)(unaff_x19 + 0x290);
      func_0x0001072cfec8(*(undefined8 *)(*(long *)(param_3 + 0x28) + 0x10),
                          *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x18),
                          (undefined1 *)((long)register0x00000008 + -0x260));
      lVar12 = *plVar17;
      in_register_00005008 = *(long *)((long)register0x00000008 + -600);
      param_1 = *(long *)((long)register0x00000008 + -0x260);
      *(long *)(lVar12 + 0x18) = in_register_00005008;
      *(long *)(lVar12 + 0x10) = param_1;
      *(undefined1 *)(lVar12 + 0x20) = 1;
    }
    plVar17 = *(long **)(unaff_x19 + 0x188);
    func_0x0001072cfff8();
    (**(code **)(*plVar17 + 0x28))(plVar17,(undefined1 *)((long)register0x00000008 + -0x260));
    func_0x0001072cf334();
    if (((((uint)plVar17 ^ 0xffffffff) & 0x101) == 0) && ((param_3[0x30] & 1) != 0)) {
      uVar9 = *(undefined8 *)(unaff_x19 + 0x290);
      *(undefined1 *)((long)register0x00000008 + -0x260) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x240) = 0;
      func_0x00010739ebd0(uVar9,(undefined1 *)((long)register0x00000008 + -0x260));
      FUN_1072bb9f4((undefined1 *)((long)register0x00000008 + -0x260));
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 0x230);
    *(undefined4 *)((long)register0x00000008 + -0x260) = 1;
    FUN_1072b6c24(uVar9,(undefined1 *)((long)register0x00000008 + -0x260));
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x260);
    func_0x000100060b18(puVar10,&PTR_DAT_11099a6e8);
    func_0x0001072cedc0();
    func_0x0001072ceb4c();
    func_0x0001072cf334();
    func_0x00010785f1f4();
    *(undefined1 *)((long)register0x00000008 + -0x260) = 0;
    puVar10 = puVar10 + 0x2b0;
    FUN_10724e2c8(puVar10,(undefined1 *)((long)register0x00000008 + -0x260));
    if ((int)puVar10 != 0) {
      func_0x0001072cfff8();
      param_5 = (long *)0x0;
      func_0x00010786df04(8,(undefined1 *)((long)register0x00000008 + -0x260),0);
      func_0x0001072cf334();
    }
    if (*param_6 != 0) {
      func_0x00010739ed84(*(undefined8 *)(unaff_x19 + 0x290),param_6);
    }
    param_6 = plVar16;
    if (((byte)param_3[0x10] >> 1 & 1) != 0) {
      func_0x00010793d530((undefined1 *)((long)register0x00000008 + -0x260),0,
                          *(undefined8 *)(param_3 + 0x20));
      uVar9 = *(undefined8 *)(unaff_x19 + 0xb0);
      *(undefined ***)((long)register0x00000008 + -0x2d0) = &PTR_FUN_11099bb28;
      in_register_00005008 = *(long *)((long)register0x00000008 + -0x248);
      param_1 = *(long *)((long)register0x00000008 + -0x250);
      *(long *)((long)register0x00000008 + -0x2c0) = in_register_00005008;
      *(long *)((long)register0x00000008 + -0x2c8) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x2b8) =
           (undefined1 *)((long)register0x00000008 + -0x2d0);
      FUN_107292e94(uVar9,(undefined1 *)((long)register0x00000008 + -0x2d0));
      func_0x000107283e00((undefined1 *)((long)register0x00000008 + -0x2d0));
      func_0x00010793d50c((undefined1 *)((long)register0x00000008 + -0x260));
    }
    plVar16 = *(long **)(unaff_x19 + 0xd0);
    func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x2d0),&UNK_10de2ce8c);
    uVar3 = param_3[0x32];
    *(undefined4 *)((long)register0x00000008 + -0x260) = 6;
    *(undefined1 *)((long)register0x00000008 + -600) = uVar3;
    param_4 = (undefined8 *)((long)register0x00000008 + -0x260);
    func_0x0001072cf670(*(undefined8 *)(*plVar16 + 0x30));
    func_0x000104c3323c((undefined1 *)((long)register0x00000008 + -0x260));
    func_0x0001072cf508();
    plVar16 = *(long **)(unaff_x19 + 0x188);
    func_0x0001072cfff8();
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x260);
    (**(code **)(*plVar16 + 0x28))();
    func_0x0001072cf334();
    if ((((uint)plVar16 ^ 0xffffffff) & 0x101) != 0) {
      uVar15 = (undefined4)*(undefined8 *)(unaff_x19 + 0x208);
      *(undefined1 *)((long)register0x00000008 + -0x2d0) = param_3[0x31];
      puVar7 = (undefined8 *)((long)register0x00000008 + -0x360);
      func_0x0001072cfea4();
      *(undefined1 **)((long)register0x00000008 + -0x348) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
      func_0x0001072cedd4();
      *puVar7 = &PTR_FUN_11099b4a8;
      in_register_00005008 = *(long *)((long)register0x00000008 + -0x358);
      param_1 = *(long *)((long)register0x00000008 + -0x360);
      puVar7[2] = in_register_00005008;
      puVar7[1] = param_1;
      *(undefined8 *)((long)register0x00000008 + -0x360) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x358) = 0;
      puVar7[3] = *(undefined8 *)((long)register0x00000008 + -0x350);
      puVar7[4] = unaff_x19;
      *(undefined8 **)((long)register0x00000008 + -0x248) = puVar7;
      puVar10 = (undefined1 *)((long)register0x00000008 + -0x2d0);
      param_4 = (undefined8 *)((long)register0x00000008 + -0x260);
      func_0x00010734c53c();
      func_0x0001072cc30c((undefined1 *)((long)register0x00000008 + -0x260));
      func_0x0001072d0020();
      *(undefined4 *)(unaff_x19 + 0x350) = uVar15;
      unaff_x19[0x354] = 1;
    }
    param_3 = puVar10;
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x150);
    func_0x00010743d7e4();
    func_0x0001072ce0cc(*(undefined8 *)((long)register0x00000008 + -0x10));
    if ((bool)uVar4) break;
    ___stack_chk_fail();
    lVar12 = *(long *)((long)register0x00000008 + -0x260);
    *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
    if (lVar12 != 0) {
      func_0x0001072ce338();
    }
    func_0x0001072cf2e8();
    FUN_10724ae28(lVar11 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0x2e8));
    param_2 = (undefined1 *)((long)register0x00000008 + -0x150);
    func_0x00010743d7e4();
    unaff_x30 = FUN_1072b3cf4;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x370);
  }
  return;
}



/* Entry: 1072b3d14; end: 1072b3d57;  */

undefined8 * FUN_1072b3d14(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x0001072bca58(&uStack_30);
  return param_1;
}



/* Entry: 1072b3d58; end: 1072b3d8b;  */

void FUN_1072b3d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072b3d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x48))();
  return;
}



/* Entry: 1072b3d8c; end: 1072b3def;  */

void FUN_1072b3d8c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  
  func_0x0001072ce1d0();
  pppuStack_30 = appuStack_48;
  appuStack_48[0] = &PTR_FUN_11099af18;
  (**(code **)(**(long **)(param_1 + 0x1f8) + 0x60))(*(long **)(param_1 + 0x1f8),appuStack_48);
  pppuVar1 = appuStack_48;
  FUN_10724bfc0();
  func_0x0001072ce080();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001072ce934();
    FUN_10724bfc0();
    func_0x0001072ce900();
    if (pppuVar1[0x2c] != (undefined **)0x0) {
      func_0x0001072ce928();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
      uStack_98 = param_4[1];
      uStack_a0 = *param_4;
      uStack_a8 = param_3;
      if (param_4[1] != 0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10 != 0);
      }
      uStack_88 = param_5[1];
      uStack_90 = *param_5;
      if (param_5[1] != 0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10_00 != 0);
      }
      (**(code **)(**(long **)(unaff_x19 + 0x160) + 0x20))(*(long **)(unaff_x19 + 0x160),auStack_c0)
      ;
      func_0x0001072ba0f0(auStack_c0);
    }
    return;
  }
  return;
}



/* Entry: 1072b3df0; end: 1072b3e8b;  */

void FUN_1072b3df0(long param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x160) != 0) {
    func_0x0001072ce928();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_58 = param_3;
    if (param_4[1] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10 != 0);
    }
    uStack_38 = param_5[1];
    uStack_40 = *param_5;
    if (param_5[1] != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(**(long **)(unaff_x19 + 0x160) + 0x20))(*(long **)(unaff_x19 + 0x160),auStack_70);
    func_0x0001072ba0f0(auStack_70);
  }
  return;
}



/* Entry: 1072b3e8c; end: 1072b3ec7;  */

void FUN_1072b3e8c(long param_1)

{
  if (*(long **)(param_1 + 0x160) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001072b3e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x160) + 0x30))();
    return;
  }
  return;
}



/* Entry: 1072b3ec8; end: 1072b402f;  */

void FUN_1072b3ec8(long *param_1,long param_2,undefined1 param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lStack_78;
  long lStack_70;
  
  func_0x00010740dfec(&lStack_78,*(undefined8 *)(param_2 + 0xa8),param_3);
  puVar10 = (undefined8 *)0x0;
  func_0x0001072cf0fc();
  lVar12 = lStack_78;
  do {
    if (lVar12 == lStack_70) {
      FUN_1072ba1a8(&lStack_78);
      return;
    }
    uVar11 = *(undefined8 *)(lVar12 + 8);
    uVar2 = *(undefined1 *)(lVar12 + 4);
    if (puVar10 < (undefined8 *)param_1[2]) {
      *puVar10 = uVar11;
      *(undefined1 *)(puVar10 + 1) = uVar2;
    }
    else {
      lVar7 = *param_1;
      lVar8 = (long)puVar10 - lVar7;
      uVar1 = lVar8 / 0xc + 1;
      if (0x1555555555555555 < uVar1) {
        FUN_1072ba164();
LAB_1072b4014:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1072b4018);
        (*pcVar4)();
      }
      uVar3 = (param_1[2] - lVar7) / 0xc;
      uVar6 = uVar3 * 2;
      if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
        uVar6 = uVar1;
      }
      if (0xaaaaaaaaaaaaaa9 < uVar3) {
        uVar6 = 0x1555555555555555;
      }
      if (0x1555555555555555 < uVar6) {
        func_0x000104bd35f4();
        goto LAB_1072b4014;
      }
      lVar5 = uVar6 * 0xc;
      __Znwm();
      puVar10 = (undefined8 *)(lVar5 + lVar8);
      *puVar10 = uVar11;
      *(undefined1 *)(puVar10 + 1) = uVar2;
      lVar9 = (long)puVar10 + (lVar8 / -0xc) * 0xc;
      _memcpy(lVar9,lVar7,lVar8);
      *param_1 = lVar9;
      param_1[2] = lVar5 + uVar6 * 0xc;
      if (lVar7 != 0) {
        func_0x0001072cf078();
      }
    }
    puVar10 = (undefined8 *)((long)puVar10 + 0xc);
    param_1[1] = (long)puVar10;
    lVar12 = lVar12 + 0x10;
  } while( true );
}



/* Entry: 1072b4030; end: 1072b4037;  */

void FUN_1072b4030(long param_1)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 auStack_40 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  func_0x0001072af980();
  auStack_40[0] = uVar1;
  func_0x0001072b01dc();
  FUN_107279a5c();
  FUN_1072aa894(unaff_x21 + 0xa8);
  FUN_1072aa8b4();
  FUN_107279ee0(auStack_40);
  return;
}



/* Entry: 1072b4038; end: 1072b4253;  */

void FUN_1072b4038(long param_1)

{
  ulong uVar1;
  undefined ***pppuVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  long lStack_80;
  undefined1 uStack_78;
  undefined ***pppuStack_70;
  undefined ***pppuStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5f;
  undefined3 uStack_5b;
  undefined **appuStack_58 [3];
  undefined ***pppuStack_40;
  
  func_0x0001072ce248();
  lVar13 = *(long *)(param_1 + 0x1b8);
  pppuStack_40 = appuStack_58;
  appuStack_58[0] = &PTR_FUN_11099af98;
  uStack_78 = 1;
  lVar10 = lVar13;
  lStack_80 = lVar13;
  FUN_107279a5c();
  func_0x0001072cfe04();
  if (lVar10 == 0) {
LAB_1072b40e4:
    func_0x0001072d01c8();
  }
  else {
    if (pppuStack_40 == (undefined ***)0x0) goto LAB_1072b422c;
    pppuVar4 = pppuStack_40;
    (*(code *)(*pppuStack_40)[6])(pppuStack_40,lVar10 + 0x28);
    if ((int)pppuVar4 == 0) goto LAB_1072b40e4;
    uVar15 = *(undefined8 *)(lVar10 + 0x30);
    uVar14 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined8 *)(lVar10 + 0x28) = 0;
    *(undefined8 *)(lVar10 + 0x30) = 0;
    func_0x0001072cfe04();
    if (pppuVar4 != (undefined ***)0x0) {
      ppuVar7 = *(undefined ***)(lVar13 + 0xb0);
      ppuVar5 = *pppuVar4;
      ppuVar6 = pppuVar4[1];
      puVar9 = (undefined *)((long)ppuVar7 + -1);
      if (((ulong)ppuVar7 & (ulong)puVar9) == 0) {
        ppuVar6 = (undefined **)((ulong)puVar9 & (ulong)ppuVar6);
      }
      else if (ppuVar7 <= ppuVar6) {
        uVar1 = 0;
        if (ppuVar7 != (undefined **)0x0) {
          uVar1 = (ulong)ppuVar6 / (ulong)ppuVar7;
        }
        ppuVar6 = (undefined **)((long)ppuVar6 - uVar1 * (long)ppuVar7);
      }
      lVar10 = *(long *)(lVar13 + 0xa8);
      pppuVar2 = *(undefined ****)(lVar10 + (long)ppuVar6 * 8);
      do {
        pppuVar8 = pppuVar2;
        pppuVar2 = (undefined ***)*pppuVar8;
      } while ((undefined ***)*pppuVar8 != pppuVar4);
      pppuStack_68 = (undefined ***)(lVar13 + 0xb8);
      in_ZR = true;
      if (pppuVar8 == pppuStack_68) {
LAB_1072b4140:
        if (ppuVar5 == (undefined **)0x0) {
LAB_1072b4174:
          *(undefined8 *)(lVar10 + (long)ppuVar6 * 8) = 0;
          ppuVar5 = *pppuVar4;
          goto LAB_1072b417c;
        }
        ppuVar11 = (undefined **)ppuVar5[1];
        if (((ulong)ppuVar7 & (ulong)puVar9) == 0) {
          ppuVar12 = (undefined **)((ulong)ppuVar11 & (ulong)puVar9);
        }
        else {
          ppuVar12 = ppuVar11;
          if (ppuVar7 <= ppuVar11) {
            uVar1 = 0;
            if (ppuVar7 != (undefined **)0x0) {
              uVar1 = (ulong)ppuVar11 / (ulong)ppuVar7;
            }
            ppuVar12 = (undefined **)((long)ppuVar11 - uVar1 * (long)ppuVar7);
          }
        }
        in_ZR = ppuVar12 == ppuVar6;
        if (!(bool)in_ZR) goto LAB_1072b4174;
LAB_1072b4184:
        if (((ulong)ppuVar7 & (ulong)puVar9) == 0) {
          ppuVar11 = (undefined **)((ulong)ppuVar11 & (ulong)puVar9);
        }
        else if (ppuVar7 <= ppuVar11) {
          uVar1 = 0;
          if (ppuVar7 != (undefined **)0x0) {
            uVar1 = (ulong)ppuVar11 / (ulong)ppuVar7;
          }
          ppuVar11 = (undefined **)((long)ppuVar11 - uVar1 * (long)ppuVar7);
        }
        in_ZR = ppuVar11 == ppuVar6;
        if (!(bool)in_ZR) {
          *(undefined ****)(lVar10 + (long)ppuVar11 * 8) = pppuVar8;
          ppuVar5 = *pppuVar4;
        }
      }
      else {
        ppuVar11 = pppuVar8[1];
        if (((ulong)ppuVar7 & (ulong)puVar9) == 0) {
          ppuVar11 = (undefined **)((ulong)ppuVar11 & (ulong)puVar9);
        }
        else if (ppuVar7 <= ppuVar11) {
          uVar1 = 0;
          if (ppuVar7 != (undefined **)0x0) {
            uVar1 = (ulong)ppuVar11 / (ulong)ppuVar7;
          }
          ppuVar11 = (undefined **)((long)ppuVar11 - uVar1 * (long)ppuVar7);
        }
        in_ZR = ppuVar11 == ppuVar6;
        if (!(bool)in_ZR) goto LAB_1072b4140;
LAB_1072b417c:
        if (ppuVar5 != (undefined **)0x0) {
          ppuVar11 = (undefined **)ppuVar5[1];
          goto LAB_1072b4184;
        }
      }
      *pppuVar8 = ppuVar5;
      *pppuVar4 = (undefined **)0x0;
      *(long *)(lVar13 + 0xc0) = *(long *)(lVar13 + 0xc0) + -1;
      uStack_60 = 1;
      uStack_5f = 0;
      uStack_5b = 0;
      pppuStack_70 = pppuVar4;
      FUN_1072aac4c(&pppuStack_70);
    }
    pppuStack_70 = (undefined ***)0x0;
    pppuStack_68 = (undefined ***)0x0;
    uStack_90 = 1;
    uStack_a0 = uVar14;
    uStack_98 = uVar15;
    func_0x000104bff3c8(&pppuStack_70);
  }
  FUN_107279ee0(&lStack_80);
  FUN_1072ba1e0(&uStack_a0);
  FUN_1072caad4(appuStack_58);
  func_0x0001072ce098();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1072b422c:
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1072b4234);
  (*pcVar3)();
}



/* Entry: 1072b4254; end: 1072b42db;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1072b4254(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined1 *extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined **ppuVar18;
  undefined8 extraout_x8_02;
  ulong uVar19;
  ushort uVar20;
  int extraout_w10;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined ***pppuVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  long lVar27;
  undefined ***apppuStack_ab8 [3];
  long alStack_aa0 [2];
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined1 *puStack_a78;
  undefined8 *puStack_a70;
  undefined1 *puStack_a68;
  undefined1 uStack_a59;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined1 uStack_a41;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  undefined8 *puStack_a28;
  undefined1 uStack_a20;
  undefined1 uStack_a1f;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined **ppuStack_9a8;
  ushort uStack_9a0;
  undefined ***pppuStack_990;
  undefined8 uStack_988;
  long lStack_980;
  ulong *puStack_978;
  long *plStack_970;
  undefined ***pppuStack_968;
  undefined8 *******pppppppuStack_960;
  code *pcStack_958;
  undefined **appuStack_950 [8];
  long *plStack_910;
  undefined8 *puStack_908;
  undefined8 *******pppppppuStack_900;
  code *pcStack_8f8;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined1 auStack_8d0 [64];
  long lStack_890;
  long lStack_888;
  undefined1 *puStack_880;
  long *plStack_878;
  undefined1 *******pppppppuStack_870;
  code *pcStack_868;
  undefined1 auStack_858 [56];
  undefined1 auStack_820 [64];
  undefined1 *puStack_7e0;
  undefined1 ******ppppppuStack_7d0;
  code *pcStack_7c8;
  long lStack_7b8;
  long lStack_7b0;
  undefined1 auStack_7a0 [88];
  undefined1 auStack_748 [248];
  long lStack_650;
  undefined1 *puStack_648;
  long *plStack_640;
  undefined1 *puStack_638;
  undefined1 *****pppppuStack_630;
  code *pcStack_628;
  undefined1 auStack_618 [88];
  undefined1 auStack_5c0 [240];
  undefined1 auStack_4d0 [112];
  byte bStack_460;
  long lStack_450;
  long lStack_448;
  long *plStack_440;
  undefined1 *puStack_438;
  undefined1 ****ppppuStack_430;
  code *pcStack_428;
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [64];
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  long alStack_388 [7];
  undefined1 auStack_350 [64];
  long lStack_310;
  long *plStack_308;
  undefined1 **ppuStack_300;
  code *pcStack_2f8;
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [16];
  undefined1 auStack_2c0 [56];
  undefined1 auStack_288 [248];
  undefined1 *puStack_170;
  code *pcStack_168;
  long alStack_160 [30];
  undefined1 auStack_70 [64];
  
  plVar23 = alStack_160;
  plVar22 = alStack_160;
  func_0x0001072ce248();
  plVar21 = *(long **)(param_1 + 0x1c8);
  FUN_107262e9c(auStack_70);
  FUN_1072d6ffc(alStack_160,param_3);
  func_0x0001072cef78(*(undefined8 *)(*plVar21 + 0x10));
  func_0x000107269e60();
  func_0x0001072cedb0();
  func_0x0001072ce098();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce928();
  func_0x000107269e60();
  func_0x0001072cedb0();
  func_0x0001072ce900();
  pcStack_168 = FUN_1072b42dc;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x0001072ce248();
  plVar22 = *(long **)((long)plVar22 + 0x1c8);
  FUN_107262e9c(auStack_2c0);
  func_0x0001003ac70c();
  lVar2 = plVar23[1];
  for (lVar27 = *plVar23; uVar5 = lVar27 == lVar2, !(bool)uVar5; lVar27 = lVar27 + 0x58) {
    FUN_1072d6ffc(auStack_288,lVar27);
    FUN_10726d718(auStack_2e8,auStack_288);
    func_0x000107269e60(auStack_288);
  }
  func_0x0001072cab08(auStack_2d0,auStack_2e8);
  puVar10 = auStack_2d0;
  func_0x0001072cef78(*(undefined8 *)(*plVar22 + 0x18));
  FUN_10726dd08(auStack_2d0);
  func_0x0001072cf424();
  func_0x000104c2f714(auStack_2c0);
  func_0x0001072ce098();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072cf3d0();
  FUN_10726dd08();
  func_0x0001072cf424();
  puVar8 = auStack_2c0;
  func_0x000104c2f714();
  func_0x0001072ce900();
  pcStack_2f8 = FUN_1072b43c8;
  lStack_310 = lVar27;
  plStack_308 = plVar22;
  ppuStack_300 = &puStack_170;
  func_0x0001072ce1d0();
  plVar23 = *(long **)(puVar8 + 0x1c8);
  FUN_107262e9c(auStack_350);
  func_0x0001072cfe38(alStack_388);
  plVar22 = alStack_388;
  func_0x0001072cef78(*(undefined8 *)(*plVar23 + 0x28));
  func_0x0001072cf41c();
  func_0x0001072cf7b0();
  func_0x0001072ce080();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce934();
  func_0x000104c2f714();
  func_0x0001072cf7b0();
  func_0x0001072ce900();
  pcStack_398 = FUN_1072b4444;
  pppuStack_3a0 = &ppuStack_300;
  func_0x0001072ce940();
  func_0x0001072ce248();
  func_0x0001003ac70c();
  lVar2 = plVar22[1];
  for (lVar27 = *plVar22; uVar5 = lVar27 == lVar2, !(bool)uVar5; lVar27 = lVar27 + 0x18) {
    func_0x0001072cf660(auStack_400);
    FUN_1072999ec(auStack_418,auStack_400);
    func_0x0001072cf0a4();
  }
  plVar22 = *(long **)(puVar10 + 0x1c8);
  FUN_107262e9c(auStack_400,plVar23);
  puVar10 = auStack_418;
  func_0x0001072cf6bc(*(undefined8 *)(*plVar22 + 0x30));
  func_0x0001072cf0a4();
  puVar8 = auStack_418;
  FUN_10726e078();
  func_0x0001072ce098();
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0001072cf0a4();
    puVar9 = auStack_418;
    FUN_10726e078();
    func_0x0001072ce900();
    pcStack_428 = FUN_1072b44f8;
    lStack_450 = lVar2;
    lStack_448 = lVar27;
    plStack_440 = plVar22;
    puStack_438 = puVar8;
    ppppuStack_430 = &pppuStack_3a0;
    func_0x0001072ce248();
    plVar22 = *(long **)(puVar9 + 0x1c8);
    FUN_107262e9c(auStack_5c0);
    func_0x0001072cf660(auStack_618);
    puVar8 = auStack_618;
    (**(code **)(*plVar22 + 0x38))(auStack_4d0,plVar22,auStack_5c0);
    func_0x0001072cf41c();
    func_0x0001072cf218();
    if ((bStack_460 & 1) == 0) {
      *extraout_x8 = 0;
      extraout_x8[0x58] = 0;
    }
    else {
      FUN_1072692d4(auStack_5c0,auStack_4d0);
      FUN_1072d7368(auStack_618,auStack_5c0);
      func_0x0001072ce9c4();
      FUN_10729dca0();
      extraout_x8[0x58] = 1;
      func_0x000107932ce0(auStack_618);
      func_0x000107269e60(auStack_5c0);
    }
    puVar9 = auStack_4d0;
    func_0x0001072ba200();
    func_0x0001072ce098();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107269e60(auStack_5c0);
    func_0x0001072ba200();
    func_0x0001072ce900();
    pcStack_628 = FUN_1072b45fc;
    lStack_650 = lVar2;
    puStack_648 = puVar10;
    plStack_640 = plVar22;
    puStack_638 = puVar9;
    pppppuStack_630 = &ppppuStack_430;
    func_0x0001072ce248();
    func_0x0001072cf0fc();
    FUN_107262e9c(auStack_748);
    func_0x0001072cfdc0(&lStack_7b8);
    puVar10 = auStack_748;
    func_0x000104c2f714();
    for (; uVar5 = lStack_7b8 == lStack_7b0, !(bool)uVar5; lStack_7b8 = lStack_7b8 + 0x70) {
      FUN_1072692d4(auStack_748,lStack_7b8);
      FUN_1072d7368(auStack_7a0,auStack_748);
      func_0x000107269e60(auStack_748);
      FUN_1072ba220(extraout_x8_00,auStack_7a0);
      puVar10 = auStack_7a0;
      func_0x000107932ce0();
    }
    func_0x0001072cf424();
    func_0x0001072ce098();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x000104c2f714(auStack_748);
    lVar27 = extraout_x8_00;
    func_0x0001072ba554();
    func_0x0001072ce94c();
    pcStack_7c8 = FUN_1072b46fc;
    puStack_7e0 = puVar10;
    ppppppuStack_7d0 = &pppppuStack_630;
    func_0x0001072ce1d0();
    plVar22 = *(long **)(lVar27 + 0x1c8);
    FUN_107262e9c(auStack_820);
    func_0x0001072cfe38(auStack_858);
    puVar10 = auStack_820;
    func_0x0001072cef78(*(undefined8 *)(*plVar22 + 0x50));
    func_0x0001072cf41c();
    func_0x0001072cf7b0();
    func_0x0001072ce080();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce934();
    func_0x000104c2f714();
    func_0x0001072cf7b0();
    func_0x0001072ce900();
    lStack_888 = lStack_7b0;
    pcStack_868 = FUN_1072b4778;
    lStack_890 = lVar2;
    puStack_880 = puVar8;
    plStack_878 = plVar22;
    pppppppuStack_870 = &ppppppuStack_7d0;
    func_0x0001072ce940();
    func_0x0001072ce248();
    uStack_8e8 = 0;
    uStack_8e0 = 0;
    uVar19 = *(ulong *)(puVar10 + 0x10);
    uStack_8d8 = 0;
    uVar5 = (uVar19 & 1) == 0;
    puVar1 = (ulong *)(puVar10 + 0x10);
    if (!(bool)uVar5) {
      puVar1 = (ulong *)(uVar19 + 7);
    }
    for (lVar27 = (long)*(int *)(puVar10 + 0x18) << 3; lVar27 != 0; lVar27 = lVar27 + -8) {
      func_0x0001072cfec8(*(undefined8 *)(*puVar1 + 0x10),*(undefined8 *)(*puVar1 + 0x18),
                          auStack_8d0);
      FUN_10725ade4(&uStack_8e8,auStack_8d0);
      puVar1 = puVar1 + 1;
    }
    plVar23 = *(long **)(puVar8 + 0x1c8);
    func_0x0001072cf8f8(plVar22[5],auStack_8d0);
    func_0x0001072cf6bc(*(undefined8 *)(*plVar23 + 0x60));
    func_0x0001072cf0a4();
    puVar11 = &uStack_8e8;
    FUN_10725aef4();
    func_0x0001072ce098();
    if (!(bool)uVar5) {
      ___stack_chk_fail();
      func_0x0001072cf0a4();
      puVar12 = &uStack_8e8;
      FUN_10725aef4();
      func_0x0001072ce900();
      pppuVar13 = appuStack_950;
      iVar17 = (int)appuStack_950;
      pcStack_8f8 = FUN_1072b484c;
      plStack_910 = plVar23;
      puStack_908 = puVar11;
      pppppppuStack_900 = &pppppppuStack_870;
      func_0x0001072ce1d0();
      pppuVar24 = (undefined ***)puVar12[0x39];
      FUN_107262e9c();
      func_0x0001072ceb4c((*pppuVar24)[0xd]);
      func_0x0001072cf1cc();
      func_0x0001072ce080();
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001072ce928();
      func_0x000104c2f714();
      func_0x0001072ce900();
      pcStack_958 = FUN_1072b48a8;
      lStack_980 = lVar27;
      puStack_978 = puVar1;
      plStack_970 = plVar23;
      pppuStack_968 = pppuVar24;
      pppppppuStack_960 = &pppppppuStack_900;
      func_0x0001072ce328();
      iVar3 = *(int *)(pppuVar13 + 0x61);
      uStack_988 = extraout_x8_01;
      *(int *)(pppuVar13 + 0x61) = iVar17;
      bVar6 = iVar17 == 2;
      bVar7 = iVar3 == 2;
      uVar20 = 0;
      if (bVar7) {
        uVar20 = (ushort)!bVar6;
      }
      uVar5 = bVar6 == bVar7;
      pppuVar14 = pppuVar13;
      if (!(bool)uVar5) {
        if (uVar20 == 0) {
          if (!bVar7 && bVar6) {
            if (pppuVar13[0x45] != (undefined **)0x0) {
              *(undefined1 *)(pppuVar13[0x45] + 6) = 0;
            }
            ppuVar18 = pppuVar13[0x43];
            if ((*(char *)(ppuVar18 + 5) != '\0') && (*(char *)(ppuVar18 + 0x1c) == '\x01')) {
              *(undefined1 *)(ppuVar18 + 0x1c) = 0;
            }
            *(undefined1 *)(ppuVar18 + 5) = 0;
            FUN_1072b3118(pppuVar13);
          }
        }
        else {
          ppuVar18 = pppuVar13[0x45];
          if ((ppuVar18 != (undefined **)0x0) &&
             (*(undefined1 *)(ppuVar18 + 6) = 1, *(char *)(ppuVar18 + 5) == '\x01')) {
            *(undefined1 *)(ppuVar18 + 5) = 0;
          }
          ppuVar18 = pppuVar13[0x43];
          if ((((ulong)ppuVar18[5] & 1) == 0) && (*(char *)(ppuVar18 + 0x1c) == '\x01')) {
            *(undefined1 *)(ppuVar18 + 0x1c) = 0;
          }
          *(undefined1 *)(ppuVar18 + 5) = 1;
        }
        uVar5 = bVar7 || !bVar6;
        uStack_9a0 = 0x100;
        if ((bool)uVar5) {
          uStack_9a0 = 0;
        }
        uStack_9a0 = uStack_9a0 | uVar20;
        ppuStack_9a8 = &PTR_FUN_11099b028;
        pppuStack_990 = &ppuStack_9a8;
        FUN_107292e94(pppuVar13[0x16],&ppuStack_9a8);
        pppuVar14 = &ppuStack_9a8;
        func_0x000107283e00();
        pppuVar24 = pppuVar13;
      }
      func_0x0001072ce0cc(uStack_988);
      if (!(bool)uVar5) {
        ___stack_chk_fail();
        func_0x0001072ce934();
        func_0x000107283e00();
        func_0x0001072ce900();
        func_0x0001072ce1e4();
        uStack_a08 = extraout_x8_02;
        func_0x0001072cefbc();
        if (pppuVar24[0x15] != (undefined **)0x0) {
          FUN_1072d31fc(pppuVar24[0x23]);
          ppuVar18 = pppuVar24[0x30];
          func_0x00010731d558(ppuVar18);
          ppuVar25 = pppuVar24[0x18];
          __ZNSt3__16chrono12steady_clock3nowEv();
          (**(code **)(*ppuVar25 + 0x38))(ppuVar25,ppuVar18);
          func_0x00010739ed6c(pppuVar24[0x52]);
          (**(code **)(*pppuVar24[0x1a] + 0x58))();
          uStack_a41 = 0;
          uStack_a58 = 0;
          uStack_a50 = 0;
          uStack_a59 = 0;
          ppuVar18 = pppuVar24[0x16];
          puVar11 = &uStack_a90;
          func_0x0001072cfea4();
          puStack_a78 = &uStack_a41;
          puStack_a70 = &uStack_a58;
          puStack_a68 = &uStack_a59;
          puStack_a28 = (undefined8 *)0x0;
          func_0x0001072cf8f0();
          *puVar11 = &PTR_FUN_11099b0a8;
          puVar11[2] = uStack_a88;
          puVar11[1] = uStack_a90;
          uStack_a90 = 0;
          uStack_a88 = 0;
          puVar11[3] = uStack_a80;
          puVar10 = puStack_a78;
          puVar11[5] = puStack_a70;
          puVar11[4] = puVar10;
          puVar11[6] = puStack_a68;
          puStack_a28 = puVar11;
          FUN_107292e94(ppuVar18,&uStack_a40);
          func_0x000107283e00(&uStack_a40);
          func_0x00010725b1d4(&uStack_a90);
          ppuVar18 = pppuVar24[0x43];
          FUN_1072769d4(&uStack_a40,pppuVar24[0x33]);
          uStack_a20 = uStack_a59;
          uStack_a1f = uStack_a41;
          uStack_a10 = uStack_a50;
          uStack_a18 = uStack_a58;
          FUN_1072df4f4(ppuVar18,&uStack_a40);
          puVar15 = &uStack_a40;
          func_0x00010794120c();
          puVar26 = pppuVar24[0x43][0x1f];
          puVar4 = pppuVar24[0x43][0x20];
          func_0x0001077f3c4c();
          func_0x0001077f3790();
          do {
            func_0x0001072cfb28();
          } while (extraout_w10 != 0);
          __ZNSt3__16chrono12steady_clock3nowEv();
          func_0x0001072cf1f8();
          func_0x0001072ced60();
          func_0x0001072ceea4();
          func_0x0001072cf1f8();
          func_0x0001072ced60();
          func_0x0001072ceea4();
          if ((((ulong)puVar4 & 1) != 0) &&
             (func_0x0001078bc120(puVar15 + 0x70,puVar26,(ulong)puVar26 >> 0x20),
             *(char *)((long)pppuVar24 + 0x2f2) == '\x01')) {
            func_0x0001072cf1f8();
            func_0x0001072ced60();
            func_0x0001072ceea4();
          }
          func_0x0001072cf1f8();
          func_0x0001072ced60();
          func_0x0001072ceea4();
          FUN_1072b2d9c(alStack_aa0);
          if (alStack_aa0[0] != 0) {
            func_0x0001072cf1f8();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (apppuStack_ab8,alStack_aa0[0]);
            func_0x0001078bc160(puVar15 + 0x70,&uStack_a40,apppuStack_ab8);
            func_0x0001003ac718();
            func_0x0001072ceea4();
          }
          FUN_10724c894(alStack_aa0);
          func_0x0001078bc240(puVar15 + 0x70);
          ppuVar18 = pppuVar24[0x45];
          if (ppuVar18 != (undefined **)0x0) {
            func_0x00010740e088(&uStack_a40,pppuVar24[0x15]);
            FUN_1073117c4(CONCAT44(uStack_a3c,uStack_a40),ppuVar18);
          }
          pppuVar13 = pppuVar24 + 0x70;
          FUN_10724bb70(&uStack_a40);
          if (CONCAT44(uStack_a3c,uStack_a40) != 0) {
            ppuVar18 = pppuVar24[0x6f];
            func_0x0001072cedd4();
            *pppuVar13 = &PTR_FUN_11099b128;
            pppuVar13[1] = ppuVar18;
            pppuVar13[2] = (undefined **)FUN_1072b4ec4;
            pppuVar13[3] = (undefined **)0x0;
            apppuStack_ab8[0] = pppuVar13;
            func_0x0001072cfdc8();
            func_0x0001072cf558();
            if (pppuVar13 != (undefined ***)0x0) {
              func_0x0001072ce338();
            }
          }
          puVar15 = &uStack_a40;
          func_0x00010724bcd8();
          func_0x0001077f3c4c();
          func_0x0001077f3790();
          puVar16 = puVar15;
          __ZNSt3__16chrono12steady_clock3nowEv();
          pppuVar14 = (undefined ***)(puVar15 + 2);
          func_0x00010743f974(pppuVar14,puVar16);
        }
        if (((ulong)pppuVar24[0x5e] & 1) == 0) {
          func_0x00010785f1f4();
          uStack_a40 = 0;
          pppuVar13 = pppuVar14 + 0xd8;
          FUN_1072b86c8(pppuVar13,&uStack_a40);
          pppuVar14 = pppuVar13;
          __ZNSt3__16chrono12steady_clock3nowEv();
          if (((int)pppuVar13 != 0) &&
             ((long)((ulong)pppuVar13 & 0xffffffff) <
              ((long)pppuVar14 - (long)pppuVar24[4]) / 1000000)) {
            func_0x0001072cfa78();
            puStack_a28 = (undefined8 *)CONCAT44(puStack_a28._4_4_,1);
            pppuVar14 = pppuVar24;
            func_0x0001072cfd24();
            func_0x0001003ac718();
          }
        }
        uVar5 = 0;
        if ((*(char *)(pppuVar24 + 0x5e) == '\x01') &&
           (uVar5 = 0, *(char *)(pppuVar24[0x24] + 7) == '\x01')) {
          __ZNSt3__16chrono12steady_clock3nowEv();
          uVar5 = false;
          if ((*(char *)(pppuVar24 + 0x69) != '\x01') ||
             (uVar5 = (long)pppuVar14 - (long)pppuVar24[0x68] == 0x77359401,
             2000000000 < (long)pppuVar14 - (long)pppuVar24[0x68])) {
            pppuVar13 = pppuVar14;
            func_0x0001077f3c4c();
            func_0x0001077f3790();
            func_0x0001072cf1f8();
            func_0x0001077538cc(pppuVar13 + 0x1b,&uStack_a40);
            func_0x0001072ceea4();
            if (((ulong)pppuVar24[0x69] & 1) == 0) {
              *(undefined1 *)(pppuVar24 + 0x69) = 1;
            }
            pppuVar24[0x68] = (undefined **)pppuVar14;
          }
        }
        *(undefined1 *)((long)pppuVar24 + 0x2f2) = 0;
        func_0x0001072cec24();
        func_0x0001072ce0cc(uStack_a08);
        if (!(bool)uVar5) {
          ___stack_chk_fail();
          puVar15 = &uStack_a40;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          func_0x0001072cec24();
          func_0x0001072ce94c();
          func_0x00010785f1f4();
          plVar22 = (long *)(puVar15 + 0x16c);
          FUN_10724e330();
          if (((uint)plVar22 & 0x101) != 0x100) {
            func_0x0001077f3c4c();
            func_0x0001077f3790();
            puVar11 = (undefined8 *)*plVar22;
            if (puRam0000000113847068 != (undefined8 *)0x0) {
              puVar11 = puRam0000000113847068;
            }
            __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x0001072b4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)*puVar11 + 0x20))();
            return;
          }
          return;
        }
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 1072b42dc; end: 1072b43c7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1072b42dc(long param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined1 *extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined **ppuVar18;
  undefined8 extraout_x8_02;
  ulong uVar19;
  ushort uVar20;
  int extraout_w10;
  long *plVar21;
  long *plVar22;
  undefined ***pppuVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  long lVar26;
  undefined ***apppuStack_958 [3];
  long alStack_940 [2];
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined1 *puStack_918;
  undefined8 *puStack_910;
  undefined1 *puStack_908;
  undefined1 uStack_8f9;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined1 uStack_8e1;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  undefined8 *puStack_8c8;
  undefined1 uStack_8c0;
  undefined1 uStack_8bf;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined **ppuStack_848;
  ushort uStack_840;
  undefined ***pppuStack_830;
  undefined8 uStack_828;
  long lStack_820;
  ulong *puStack_818;
  long *plStack_810;
  undefined ***pppuStack_808;
  undefined8 *******pppppppuStack_800;
  code *pcStack_7f8;
  undefined **appuStack_7f0 [8];
  long *plStack_7b0;
  undefined8 *puStack_7a8;
  undefined1 *******pppppppuStack_7a0;
  code *pcStack_798;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined1 auStack_770 [64];
  long lStack_730;
  long lStack_728;
  undefined1 *puStack_720;
  long *plStack_718;
  undefined1 ******ppppppuStack_710;
  code *pcStack_708;
  undefined1 auStack_6f8 [56];
  undefined1 auStack_6c0 [64];
  undefined1 *puStack_680;
  undefined1 *****pppppuStack_670;
  code *pcStack_668;
  long lStack_658;
  long lStack_650;
  undefined1 auStack_640 [88];
  undefined1 auStack_5e8 [248];
  long lStack_4f0;
  undefined1 *puStack_4e8;
  long *plStack_4e0;
  undefined1 *puStack_4d8;
  undefined1 ****ppppuStack_4d0;
  code *pcStack_4c8;
  undefined1 auStack_4b8 [88];
  undefined1 auStack_460 [240];
  undefined1 auStack_370 [112];
  byte bStack_300;
  long lStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [64];
  undefined1 **ppuStack_240;
  code *pcStack_238;
  long alStack_228 [7];
  undefined1 auStack_1f0 [64];
  long lStack_1b0;
  long *plStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [56];
  undefined1 auStack_128 [248];
  
  func_0x0001072ce248();
  plVar21 = *(long **)(param_1 + 0x1c8);
  FUN_107262e9c(auStack_160);
  func_0x0001003ac70c();
  lVar2 = param_3[1];
  for (lVar26 = *param_3; uVar5 = lVar26 == lVar2, !(bool)uVar5; lVar26 = lVar26 + 0x58) {
    FUN_1072d6ffc(auStack_128,lVar26);
    FUN_10726d718(auStack_188,auStack_128);
    func_0x000107269e60(auStack_128);
  }
  func_0x0001072cab08(auStack_170,auStack_188);
  puVar10 = auStack_170;
  func_0x0001072cef78(*(undefined8 *)(*plVar21 + 0x18));
  FUN_10726dd08(auStack_170);
  func_0x0001072cf424();
  func_0x000104c2f714(auStack_160);
  func_0x0001072ce098();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072cf3d0();
  FUN_10726dd08();
  func_0x0001072cf424();
  puVar8 = auStack_160;
  func_0x000104c2f714();
  func_0x0001072ce900();
  pcStack_198 = FUN_1072b43c8;
  lStack_1b0 = lVar26;
  plStack_1a8 = plVar21;
  puStack_1a0 = &stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  plVar22 = *(long **)(puVar8 + 0x1c8);
  FUN_107262e9c(auStack_1f0);
  func_0x0001072cfe38(alStack_228);
  plVar21 = alStack_228;
  func_0x0001072cef78(*(undefined8 *)(*plVar22 + 0x28));
  func_0x0001072cf41c();
  func_0x0001072cf7b0();
  func_0x0001072ce080();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce934();
  func_0x000104c2f714();
  func_0x0001072cf7b0();
  func_0x0001072ce900();
  pcStack_238 = FUN_1072b4444;
  ppuStack_240 = &puStack_1a0;
  func_0x0001072ce940();
  func_0x0001072ce248();
  func_0x0001003ac70c();
  lVar2 = plVar21[1];
  for (lVar26 = *plVar21; uVar5 = lVar26 == lVar2, !(bool)uVar5; lVar26 = lVar26 + 0x18) {
    func_0x0001072cf660(auStack_2a0);
    FUN_1072999ec(auStack_2b8,auStack_2a0);
    func_0x0001072cf0a4();
  }
  plVar21 = *(long **)(puVar10 + 0x1c8);
  FUN_107262e9c(auStack_2a0,plVar22);
  puVar10 = auStack_2b8;
  func_0x0001072cf6bc(*(undefined8 *)(*plVar21 + 0x30));
  func_0x0001072cf0a4();
  puVar8 = auStack_2b8;
  FUN_10726e078();
  func_0x0001072ce098();
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0001072cf0a4();
    puVar9 = auStack_2b8;
    FUN_10726e078();
    func_0x0001072ce900();
    pcStack_2c8 = FUN_1072b44f8;
    lStack_2f0 = lVar2;
    lStack_2e8 = lVar26;
    plStack_2e0 = plVar21;
    puStack_2d8 = puVar8;
    pppuStack_2d0 = &ppuStack_240;
    func_0x0001072ce248();
    plVar21 = *(long **)(puVar9 + 0x1c8);
    FUN_107262e9c(auStack_460);
    func_0x0001072cf660(auStack_4b8);
    puVar8 = auStack_4b8;
    (**(code **)(*plVar21 + 0x38))(auStack_370,plVar21,auStack_460);
    func_0x0001072cf41c();
    func_0x0001072cf218();
    if ((bStack_300 & 1) == 0) {
      *extraout_x8 = 0;
      extraout_x8[0x58] = 0;
    }
    else {
      FUN_1072692d4(auStack_460,auStack_370);
      FUN_1072d7368(auStack_4b8,auStack_460);
      func_0x0001072ce9c4();
      FUN_10729dca0();
      extraout_x8[0x58] = 1;
      func_0x000107932ce0(auStack_4b8);
      func_0x000107269e60(auStack_460);
    }
    puVar9 = auStack_370;
    func_0x0001072ba200();
    func_0x0001072ce098();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107269e60(auStack_460);
    func_0x0001072ba200();
    func_0x0001072ce900();
    pcStack_4c8 = FUN_1072b45fc;
    lStack_4f0 = lVar2;
    puStack_4e8 = puVar10;
    plStack_4e0 = plVar21;
    puStack_4d8 = puVar9;
    ppppuStack_4d0 = &pppuStack_2d0;
    func_0x0001072ce248();
    func_0x0001072cf0fc();
    FUN_107262e9c(auStack_5e8);
    func_0x0001072cfdc0(&lStack_658);
    puVar10 = auStack_5e8;
    func_0x000104c2f714();
    for (; uVar5 = lStack_658 == lStack_650, !(bool)uVar5; lStack_658 = lStack_658 + 0x70) {
      FUN_1072692d4(auStack_5e8,lStack_658);
      FUN_1072d7368(auStack_640,auStack_5e8);
      func_0x000107269e60(auStack_5e8);
      FUN_1072ba220(extraout_x8_00,auStack_640);
      puVar10 = auStack_640;
      func_0x000107932ce0();
    }
    func_0x0001072cf424();
    func_0x0001072ce098();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x000104c2f714(auStack_5e8);
    lVar26 = extraout_x8_00;
    func_0x0001072ba554();
    func_0x0001072ce94c();
    pcStack_668 = FUN_1072b46fc;
    puStack_680 = puVar10;
    pppppuStack_670 = &ppppuStack_4d0;
    func_0x0001072ce1d0();
    plVar21 = *(long **)(lVar26 + 0x1c8);
    FUN_107262e9c(auStack_6c0);
    func_0x0001072cfe38(auStack_6f8);
    puVar10 = auStack_6c0;
    func_0x0001072cef78(*(undefined8 *)(*plVar21 + 0x50));
    func_0x0001072cf41c();
    func_0x0001072cf7b0();
    func_0x0001072ce080();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce934();
    func_0x000104c2f714();
    func_0x0001072cf7b0();
    func_0x0001072ce900();
    lStack_728 = lStack_650;
    pcStack_708 = FUN_1072b4778;
    lStack_730 = lVar2;
    puStack_720 = puVar8;
    plStack_718 = plVar21;
    ppppppuStack_710 = &pppppuStack_670;
    func_0x0001072ce940();
    func_0x0001072ce248();
    uStack_788 = 0;
    uStack_780 = 0;
    uVar19 = *(ulong *)(puVar10 + 0x10);
    uStack_778 = 0;
    uVar5 = (uVar19 & 1) == 0;
    puVar1 = (ulong *)(puVar10 + 0x10);
    if (!(bool)uVar5) {
      puVar1 = (ulong *)(uVar19 + 7);
    }
    for (lVar26 = (long)*(int *)(puVar10 + 0x18) << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
      func_0x0001072cfec8(*(undefined8 *)(*puVar1 + 0x10),*(undefined8 *)(*puVar1 + 0x18),
                          auStack_770);
      FUN_10725ade4(&uStack_788,auStack_770);
      puVar1 = puVar1 + 1;
    }
    plVar22 = *(long **)(puVar8 + 0x1c8);
    func_0x0001072cf8f8(plVar21[5],auStack_770);
    func_0x0001072cf6bc(*(undefined8 *)(*plVar22 + 0x60));
    func_0x0001072cf0a4();
    puVar11 = &uStack_788;
    FUN_10725aef4();
    func_0x0001072ce098();
    if (!(bool)uVar5) {
      ___stack_chk_fail();
      func_0x0001072cf0a4();
      puVar12 = &uStack_788;
      FUN_10725aef4();
      func_0x0001072ce900();
      pppuVar13 = appuStack_7f0;
      iVar17 = (int)appuStack_7f0;
      pcStack_798 = FUN_1072b484c;
      plStack_7b0 = plVar22;
      puStack_7a8 = puVar11;
      pppppppuStack_7a0 = &ppppppuStack_710;
      func_0x0001072ce1d0();
      pppuVar23 = (undefined ***)puVar12[0x39];
      FUN_107262e9c();
      func_0x0001072ceb4c((*pppuVar23)[0xd]);
      func_0x0001072cf1cc();
      func_0x0001072ce080();
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001072ce928();
      func_0x000104c2f714();
      func_0x0001072ce900();
      pcStack_7f8 = FUN_1072b48a8;
      lStack_820 = lVar26;
      puStack_818 = puVar1;
      plStack_810 = plVar22;
      pppuStack_808 = pppuVar23;
      pppppppuStack_800 = &pppppppuStack_7a0;
      func_0x0001072ce328();
      iVar3 = *(int *)(pppuVar13 + 0x61);
      uStack_828 = extraout_x8_01;
      *(int *)(pppuVar13 + 0x61) = iVar17;
      bVar6 = iVar17 == 2;
      bVar7 = iVar3 == 2;
      uVar20 = 0;
      if (bVar7) {
        uVar20 = (ushort)!bVar6;
      }
      uVar5 = bVar6 == bVar7;
      pppuVar14 = pppuVar13;
      if (!(bool)uVar5) {
        if (uVar20 == 0) {
          if (!bVar7 && bVar6) {
            if (pppuVar13[0x45] != (undefined **)0x0) {
              *(undefined1 *)(pppuVar13[0x45] + 6) = 0;
            }
            ppuVar18 = pppuVar13[0x43];
            if ((*(char *)(ppuVar18 + 5) != '\0') && (*(char *)(ppuVar18 + 0x1c) == '\x01')) {
              *(undefined1 *)(ppuVar18 + 0x1c) = 0;
            }
            *(undefined1 *)(ppuVar18 + 5) = 0;
            FUN_1072b3118(pppuVar13);
          }
        }
        else {
          ppuVar18 = pppuVar13[0x45];
          if ((ppuVar18 != (undefined **)0x0) &&
             (*(undefined1 *)(ppuVar18 + 6) = 1, *(char *)(ppuVar18 + 5) == '\x01')) {
            *(undefined1 *)(ppuVar18 + 5) = 0;
          }
          ppuVar18 = pppuVar13[0x43];
          if ((((ulong)ppuVar18[5] & 1) == 0) && (*(char *)(ppuVar18 + 0x1c) == '\x01')) {
            *(undefined1 *)(ppuVar18 + 0x1c) = 0;
          }
          *(undefined1 *)(ppuVar18 + 5) = 1;
        }
        uVar5 = bVar7 || !bVar6;
        uStack_840 = 0x100;
        if ((bool)uVar5) {
          uStack_840 = 0;
        }
        uStack_840 = uStack_840 | uVar20;
        ppuStack_848 = &PTR_FUN_11099b028;
        pppuStack_830 = &ppuStack_848;
        FUN_107292e94(pppuVar13[0x16],&ppuStack_848);
        pppuVar14 = &ppuStack_848;
        func_0x000107283e00();
        pppuVar23 = pppuVar13;
      }
      func_0x0001072ce0cc(uStack_828);
      if (!(bool)uVar5) {
        ___stack_chk_fail();
        func_0x0001072ce934();
        func_0x000107283e00();
        func_0x0001072ce900();
        func_0x0001072ce1e4();
        uStack_8a8 = extraout_x8_02;
        func_0x0001072cefbc();
        if (pppuVar23[0x15] != (undefined **)0x0) {
          FUN_1072d31fc(pppuVar23[0x23]);
          ppuVar18 = pppuVar23[0x30];
          func_0x00010731d558(ppuVar18);
          ppuVar24 = pppuVar23[0x18];
          __ZNSt3__16chrono12steady_clock3nowEv();
          (**(code **)(*ppuVar24 + 0x38))(ppuVar24,ppuVar18);
          func_0x00010739ed6c(pppuVar23[0x52]);
          (**(code **)(*pppuVar23[0x1a] + 0x58))();
          uStack_8e1 = 0;
          uStack_8f8 = 0;
          uStack_8f0 = 0;
          uStack_8f9 = 0;
          ppuVar18 = pppuVar23[0x16];
          puVar11 = &uStack_930;
          func_0x0001072cfea4();
          puStack_918 = &uStack_8e1;
          puStack_910 = &uStack_8f8;
          puStack_908 = &uStack_8f9;
          puStack_8c8 = (undefined8 *)0x0;
          func_0x0001072cf8f0();
          *puVar11 = &PTR_FUN_11099b0a8;
          puVar11[2] = uStack_928;
          puVar11[1] = uStack_930;
          uStack_930 = 0;
          uStack_928 = 0;
          puVar11[3] = uStack_920;
          puVar10 = puStack_918;
          puVar11[5] = puStack_910;
          puVar11[4] = puVar10;
          puVar11[6] = puStack_908;
          puStack_8c8 = puVar11;
          FUN_107292e94(ppuVar18,&uStack_8e0);
          func_0x000107283e00(&uStack_8e0);
          func_0x00010725b1d4(&uStack_930);
          ppuVar18 = pppuVar23[0x43];
          FUN_1072769d4(&uStack_8e0,pppuVar23[0x33]);
          uStack_8c0 = uStack_8f9;
          uStack_8bf = uStack_8e1;
          uStack_8b0 = uStack_8f0;
          uStack_8b8 = uStack_8f8;
          FUN_1072df4f4(ppuVar18,&uStack_8e0);
          puVar15 = &uStack_8e0;
          func_0x00010794120c();
          puVar25 = pppuVar23[0x43][0x1f];
          puVar4 = pppuVar23[0x43][0x20];
          func_0x0001077f3c4c();
          func_0x0001077f3790();
          do {
            func_0x0001072cfb28();
          } while (extraout_w10 != 0);
          __ZNSt3__16chrono12steady_clock3nowEv();
          func_0x0001072cf1f8();
          func_0x0001072ced60();
          func_0x0001072ceea4();
          func_0x0001072cf1f8();
          func_0x0001072ced60();
          func_0x0001072ceea4();
          if ((((ulong)puVar4 & 1) != 0) &&
             (func_0x0001078bc120(puVar15 + 0x70,puVar25,(ulong)puVar25 >> 0x20),
             *(char *)((long)pppuVar23 + 0x2f2) == '\x01')) {
            func_0x0001072cf1f8();
            func_0x0001072ced60();
            func_0x0001072ceea4();
          }
          func_0x0001072cf1f8();
          func_0x0001072ced60();
          func_0x0001072ceea4();
          FUN_1072b2d9c(alStack_940);
          if (alStack_940[0] != 0) {
            func_0x0001072cf1f8();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (apppuStack_958,alStack_940[0]);
            func_0x0001078bc160(puVar15 + 0x70,&uStack_8e0,apppuStack_958);
            func_0x0001003ac718();
            func_0x0001072ceea4();
          }
          FUN_10724c894(alStack_940);
          func_0x0001078bc240(puVar15 + 0x70);
          ppuVar18 = pppuVar23[0x45];
          if (ppuVar18 != (undefined **)0x0) {
            func_0x00010740e088(&uStack_8e0,pppuVar23[0x15]);
            FUN_1073117c4(CONCAT44(uStack_8dc,uStack_8e0),ppuVar18);
          }
          pppuVar13 = pppuVar23 + 0x70;
          FUN_10724bb70(&uStack_8e0);
          if (CONCAT44(uStack_8dc,uStack_8e0) != 0) {
            ppuVar18 = pppuVar23[0x6f];
            func_0x0001072cedd4();
            *pppuVar13 = &PTR_FUN_11099b128;
            pppuVar13[1] = ppuVar18;
            pppuVar13[2] = (undefined **)FUN_1072b4ec4;
            pppuVar13[3] = (undefined **)0x0;
            apppuStack_958[0] = pppuVar13;
            func_0x0001072cfdc8();
            func_0x0001072cf558();
            if (pppuVar13 != (undefined ***)0x0) {
              func_0x0001072ce338();
            }
          }
          puVar15 = &uStack_8e0;
          func_0x00010724bcd8();
          func_0x0001077f3c4c();
          func_0x0001077f3790();
          puVar16 = puVar15;
          __ZNSt3__16chrono12steady_clock3nowEv();
          pppuVar14 = (undefined ***)(puVar15 + 2);
          func_0x00010743f974(pppuVar14,puVar16);
        }
        if (((ulong)pppuVar23[0x5e] & 1) == 0) {
          func_0x00010785f1f4();
          uStack_8e0 = 0;
          pppuVar13 = pppuVar14 + 0xd8;
          FUN_1072b86c8(pppuVar13,&uStack_8e0);
          pppuVar14 = pppuVar13;
          __ZNSt3__16chrono12steady_clock3nowEv();
          if (((int)pppuVar13 != 0) &&
             ((long)((ulong)pppuVar13 & 0xffffffff) <
              ((long)pppuVar14 - (long)pppuVar23[4]) / 1000000)) {
            func_0x0001072cfa78();
            puStack_8c8 = (undefined8 *)CONCAT44(puStack_8c8._4_4_,1);
            pppuVar14 = pppuVar23;
            func_0x0001072cfd24();
            func_0x0001003ac718();
          }
        }
        uVar5 = 0;
        if ((*(char *)(pppuVar23 + 0x5e) == '\x01') &&
           (uVar5 = 0, *(char *)(pppuVar23[0x24] + 7) == '\x01')) {
          __ZNSt3__16chrono12steady_clock3nowEv();
          uVar5 = false;
          if ((*(char *)(pppuVar23 + 0x69) != '\x01') ||
             (uVar5 = (long)pppuVar14 - (long)pppuVar23[0x68] == 0x77359401,
             2000000000 < (long)pppuVar14 - (long)pppuVar23[0x68])) {
            pppuVar13 = pppuVar14;
            func_0x0001077f3c4c();
            func_0x0001077f3790();
            func_0x0001072cf1f8();
            func_0x0001077538cc(pppuVar13 + 0x1b,&uStack_8e0);
            func_0x0001072ceea4();
            if (((ulong)pppuVar23[0x69] & 1) == 0) {
              *(undefined1 *)(pppuVar23 + 0x69) = 1;
            }
            pppuVar23[0x68] = (undefined **)pppuVar14;
          }
        }
        *(undefined1 *)((long)pppuVar23 + 0x2f2) = 0;
        func_0x0001072cec24();
        func_0x0001072ce0cc(uStack_8a8);
        if (!(bool)uVar5) {
          ___stack_chk_fail();
          puVar15 = &uStack_8e0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          func_0x0001072cec24();
          func_0x0001072ce94c();
          func_0x00010785f1f4();
          plVar21 = (long *)(puVar15 + 0x16c);
          FUN_10724e330();
          if (((uint)plVar21 & 0x101) != 0x100) {
            func_0x0001077f3c4c();
            func_0x0001077f3790();
            puVar11 = (undefined8 *)*plVar21;
            if (puRam0000000113847068 != (undefined8 *)0x0) {
              puVar11 = puRam0000000113847068;
            }
            __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x0001072b4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)*puVar11 + 0x20))();
            return;
          }
          return;
        }
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 1072b43c8; end: 1072b4443;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1072b43c8(long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined1 *extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined **ppuVar18;
  undefined8 extraout_x8_02;
  ulong uVar19;
  ushort uVar20;
  int extraout_w10;
  long *plVar21;
  undefined ***pppuVar22;
  long *plVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  long lVar26;
  undefined ***apppuStack_7c8 [3];
  long alStack_7b0 [2];
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined1 *puStack_788;
  undefined8 *puStack_780;
  undefined1 *puStack_778;
  undefined1 uStack_769;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined1 uStack_751;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined8 *puStack_738;
  undefined1 uStack_730;
  undefined1 uStack_72f;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined **ppuStack_6b8;
  ushort uStack_6b0;
  undefined ***pppuStack_6a0;
  undefined8 uStack_698;
  long lStack_690;
  ulong *puStack_688;
  long *plStack_680;
  undefined ***pppuStack_678;
  undefined1 *******pppppppuStack_670;
  code *pcStack_668;
  undefined **appuStack_660 [8];
  long *plStack_620;
  undefined8 *puStack_618;
  undefined1 ******ppppppuStack_610;
  code *pcStack_608;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined1 auStack_5e0 [64];
  long lStack_5a0;
  long lStack_598;
  undefined1 *puStack_590;
  long *plStack_588;
  undefined1 *****pppppuStack_580;
  code *pcStack_578;
  undefined1 auStack_568 [56];
  undefined1 auStack_530 [64];
  undefined1 *puStack_4f0;
  undefined1 ****ppppuStack_4e0;
  code *pcStack_4d8;
  long lStack_4c8;
  long lStack_4c0;
  undefined1 auStack_4b0 [88];
  undefined1 auStack_458 [248];
  long lStack_360;
  undefined1 *puStack_358;
  long *plStack_350;
  undefined1 *puStack_348;
  undefined1 ***pppuStack_340;
  code *pcStack_338;
  undefined1 auStack_328 [88];
  undefined1 auStack_2d0 [240];
  undefined1 auStack_1e0 [112];
  byte bStack_170;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  undefined1 *puStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [64];
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long alStack_98 [7];
  undefined1 auStack_60 [64];
  
  func_0x0001072ce1d0();
  plVar21 = *(long **)(param_1 + 0x1c8);
  FUN_107262e9c(auStack_60);
  func_0x0001072cfe38(alStack_98);
  plVar23 = alStack_98;
  func_0x0001072cef78(*(undefined8 *)(*plVar21 + 0x28));
  func_0x0001072cf41c();
  func_0x0001072cf7b0();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce934();
  func_0x000104c2f714();
  func_0x0001072cf7b0();
  func_0x0001072ce900();
  pcStack_a8 = FUN_1072b4444;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x0001072ce940();
  func_0x0001072ce248();
  func_0x0001003ac70c();
  lVar2 = plVar23[1];
  for (lVar26 = *plVar23; uVar5 = lVar26 == lVar2, !(bool)uVar5; lVar26 = lVar26 + 0x18) {
    func_0x0001072cf660(auStack_110);
    FUN_1072999ec(auStack_128,auStack_110);
    func_0x0001072cf0a4();
  }
  plVar23 = *(long **)(param_3 + 0x1c8);
  FUN_107262e9c(auStack_110,plVar21);
  puVar10 = auStack_128;
  func_0x0001072cf6bc(*(undefined8 *)(*plVar23 + 0x30));
  func_0x0001072cf0a4();
  puVar8 = auStack_128;
  FUN_10726e078();
  func_0x0001072ce098();
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0001072cf0a4();
    puVar9 = auStack_128;
    FUN_10726e078();
    func_0x0001072ce900();
    pcStack_138 = FUN_1072b44f8;
    lStack_160 = lVar2;
    lStack_158 = lVar26;
    plStack_150 = plVar23;
    puStack_148 = puVar8;
    ppuStack_140 = &puStack_b0;
    func_0x0001072ce248();
    plVar23 = *(long **)(puVar9 + 0x1c8);
    FUN_107262e9c(auStack_2d0);
    func_0x0001072cf660(auStack_328);
    puVar8 = auStack_328;
    (**(code **)(*plVar23 + 0x38))(auStack_1e0,plVar23,auStack_2d0);
    func_0x0001072cf41c();
    func_0x0001072cf218();
    if ((bStack_170 & 1) == 0) {
      *extraout_x8 = 0;
      extraout_x8[0x58] = 0;
    }
    else {
      FUN_1072692d4(auStack_2d0,auStack_1e0);
      FUN_1072d7368(auStack_328,auStack_2d0);
      func_0x0001072ce9c4();
      FUN_10729dca0();
      extraout_x8[0x58] = 1;
      func_0x000107932ce0(auStack_328);
      func_0x000107269e60(auStack_2d0);
    }
    puVar9 = auStack_1e0;
    func_0x0001072ba200();
    func_0x0001072ce098();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107269e60(auStack_2d0);
    func_0x0001072ba200();
    func_0x0001072ce900();
    pcStack_338 = FUN_1072b45fc;
    lStack_360 = lVar2;
    puStack_358 = puVar10;
    plStack_350 = plVar23;
    puStack_348 = puVar9;
    pppuStack_340 = &ppuStack_140;
    func_0x0001072ce248();
    func_0x0001072cf0fc();
    FUN_107262e9c(auStack_458);
    func_0x0001072cfdc0(&lStack_4c8);
    puVar10 = auStack_458;
    func_0x000104c2f714();
    for (; uVar5 = lStack_4c8 == lStack_4c0, !(bool)uVar5; lStack_4c8 = lStack_4c8 + 0x70) {
      FUN_1072692d4(auStack_458,lStack_4c8);
      FUN_1072d7368(auStack_4b0,auStack_458);
      func_0x000107269e60(auStack_458);
      FUN_1072ba220(extraout_x8_00,auStack_4b0);
      puVar10 = auStack_4b0;
      func_0x000107932ce0();
    }
    func_0x0001072cf424();
    func_0x0001072ce098();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x000104c2f714(auStack_458);
    lVar26 = extraout_x8_00;
    func_0x0001072ba554();
    func_0x0001072ce94c();
    pcStack_4d8 = FUN_1072b46fc;
    puStack_4f0 = puVar10;
    ppppuStack_4e0 = &pppuStack_340;
    func_0x0001072ce1d0();
    plVar23 = *(long **)(lVar26 + 0x1c8);
    FUN_107262e9c(auStack_530);
    func_0x0001072cfe38(auStack_568);
    puVar10 = auStack_530;
    func_0x0001072cef78(*(undefined8 *)(*plVar23 + 0x50));
    func_0x0001072cf41c();
    func_0x0001072cf7b0();
    func_0x0001072ce080();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce934();
    func_0x000104c2f714();
    func_0x0001072cf7b0();
    func_0x0001072ce900();
    lStack_598 = lStack_4c0;
    pcStack_578 = FUN_1072b4778;
    lStack_5a0 = lVar2;
    puStack_590 = puVar8;
    plStack_588 = plVar23;
    pppppuStack_580 = &ppppuStack_4e0;
    func_0x0001072ce940();
    func_0x0001072ce248();
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uVar19 = *(ulong *)(puVar10 + 0x10);
    uStack_5e8 = 0;
    uVar5 = (uVar19 & 1) == 0;
    puVar1 = (ulong *)(puVar10 + 0x10);
    if (!(bool)uVar5) {
      puVar1 = (ulong *)(uVar19 + 7);
    }
    for (lVar26 = (long)*(int *)(puVar10 + 0x18) << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
      func_0x0001072cfec8(*(undefined8 *)(*puVar1 + 0x10),*(undefined8 *)(*puVar1 + 0x18),
                          auStack_5e0);
      FUN_10725ade4(&uStack_5f8,auStack_5e0);
      puVar1 = puVar1 + 1;
    }
    plVar21 = *(long **)(puVar8 + 0x1c8);
    func_0x0001072cf8f8(plVar23[5],auStack_5e0);
    func_0x0001072cf6bc(*(undefined8 *)(*plVar21 + 0x60));
    func_0x0001072cf0a4();
    puVar11 = &uStack_5f8;
    FUN_10725aef4();
    func_0x0001072ce098();
    if (!(bool)uVar5) {
      ___stack_chk_fail();
      func_0x0001072cf0a4();
      puVar12 = &uStack_5f8;
      FUN_10725aef4();
      func_0x0001072ce900();
      pppuVar13 = appuStack_660;
      iVar17 = (int)appuStack_660;
      pcStack_608 = FUN_1072b484c;
      plStack_620 = plVar21;
      puStack_618 = puVar11;
      ppppppuStack_610 = &pppppuStack_580;
      func_0x0001072ce1d0();
      pppuVar22 = (undefined ***)puVar12[0x39];
      FUN_107262e9c();
      func_0x0001072ceb4c((*pppuVar22)[0xd]);
      func_0x0001072cf1cc();
      func_0x0001072ce080();
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001072ce928();
      func_0x000104c2f714();
      func_0x0001072ce900();
      pcStack_668 = FUN_1072b48a8;
      lStack_690 = lVar26;
      puStack_688 = puVar1;
      plStack_680 = plVar21;
      pppuStack_678 = pppuVar22;
      pppppppuStack_670 = &ppppppuStack_610;
      func_0x0001072ce328();
      iVar3 = *(int *)(pppuVar13 + 0x61);
      uStack_698 = extraout_x8_01;
      *(int *)(pppuVar13 + 0x61) = iVar17;
      bVar6 = iVar17 == 2;
      bVar7 = iVar3 == 2;
      uVar20 = 0;
      if (bVar7) {
        uVar20 = (ushort)!bVar6;
      }
      uVar5 = bVar6 == bVar7;
      pppuVar14 = pppuVar13;
      if (!(bool)uVar5) {
        if (uVar20 == 0) {
          if (!bVar7 && bVar6) {
            if (pppuVar13[0x45] != (undefined **)0x0) {
              *(undefined1 *)(pppuVar13[0x45] + 6) = 0;
            }
            ppuVar18 = pppuVar13[0x43];
            if ((*(char *)(ppuVar18 + 5) != '\0') && (*(char *)(ppuVar18 + 0x1c) == '\x01')) {
              *(undefined1 *)(ppuVar18 + 0x1c) = 0;
            }
            *(undefined1 *)(ppuVar18 + 5) = 0;
            FUN_1072b3118(pppuVar13);
          }
        }
        else {
          ppuVar18 = pppuVar13[0x45];
          if ((ppuVar18 != (undefined **)0x0) &&
             (*(undefined1 *)(ppuVar18 + 6) = 1, *(char *)(ppuVar18 + 5) == '\x01')) {
            *(undefined1 *)(ppuVar18 + 5) = 0;
          }
          ppuVar18 = pppuVar13[0x43];
          if ((((ulong)ppuVar18[5] & 1) == 0) && (*(char *)(ppuVar18 + 0x1c) == '\x01')) {
            *(undefined1 *)(ppuVar18 + 0x1c) = 0;
          }
          *(undefined1 *)(ppuVar18 + 5) = 1;
        }
        uVar5 = bVar7 || !bVar6;
        uStack_6b0 = 0x100;
        if ((bool)uVar5) {
          uStack_6b0 = 0;
        }
        uStack_6b0 = uStack_6b0 | uVar20;
        ppuStack_6b8 = &PTR_FUN_11099b028;
        pppuStack_6a0 = &ppuStack_6b8;
        FUN_107292e94(pppuVar13[0x16],&ppuStack_6b8);
        pppuVar14 = &ppuStack_6b8;
        func_0x000107283e00();
        pppuVar22 = pppuVar13;
      }
      func_0x0001072ce0cc(uStack_698);
      if (!(bool)uVar5) {
        ___stack_chk_fail();
        func_0x0001072ce934();
        func_0x000107283e00();
        func_0x0001072ce900();
        func_0x0001072ce1e4();
        uStack_718 = extraout_x8_02;
        func_0x0001072cefbc();
        if (pppuVar22[0x15] != (undefined **)0x0) {
          FUN_1072d31fc(pppuVar22[0x23]);
          ppuVar18 = pppuVar22[0x30];
          func_0x00010731d558(ppuVar18);
          ppuVar24 = pppuVar22[0x18];
          __ZNSt3__16chrono12steady_clock3nowEv();
          (**(code **)(*ppuVar24 + 0x38))(ppuVar24,ppuVar18);
          func_0x00010739ed6c(pppuVar22[0x52]);
          (**(code **)(*pppuVar22[0x1a] + 0x58))();
          uStack_751 = 0;
          uStack_768 = 0;
          uStack_760 = 0;
          uStack_769 = 0;
          ppuVar18 = pppuVar22[0x16];
          puVar11 = &uStack_7a0;
          func_0x0001072cfea4();
          puStack_788 = &uStack_751;
          puStack_780 = &uStack_768;
          puStack_778 = &uStack_769;
          puStack_738 = (undefined8 *)0x0;
          func_0x0001072cf8f0();
          *puVar11 = &PTR_FUN_11099b0a8;
          puVar11[2] = uStack_798;
          puVar11[1] = uStack_7a0;
          uStack_7a0 = 0;
          uStack_798 = 0;
          puVar11[3] = uStack_790;
          puVar10 = puStack_788;
          puVar11[5] = puStack_780;
          puVar11[4] = puVar10;
          puVar11[6] = puStack_778;
          puStack_738 = puVar11;
          FUN_107292e94(ppuVar18,&uStack_750);
          func_0x000107283e00(&uStack_750);
          func_0x00010725b1d4(&uStack_7a0);
          ppuVar18 = pppuVar22[0x43];
          FUN_1072769d4(&uStack_750,pppuVar22[0x33]);
          uStack_730 = uStack_769;
          uStack_72f = uStack_751;
          uStack_720 = uStack_760;
          uStack_728 = uStack_768;
          FUN_1072df4f4(ppuVar18,&uStack_750);
          puVar15 = &uStack_750;
          func_0x00010794120c();
          puVar25 = pppuVar22[0x43][0x1f];
          puVar4 = pppuVar22[0x43][0x20];
          func_0x0001077f3c4c();
          func_0x0001077f3790();
          do {
            func_0x0001072cfb28();
          } while (extraout_w10 != 0);
          __ZNSt3__16chrono12steady_clock3nowEv();
          func_0x0001072cf1f8();
          func_0x0001072ced60();
          func_0x0001072ceea4();
          func_0x0001072cf1f8();
          func_0x0001072ced60();
          func_0x0001072ceea4();
          if ((((ulong)puVar4 & 1) != 0) &&
             (func_0x0001078bc120(puVar15 + 0x70,puVar25,(ulong)puVar25 >> 0x20),
             *(char *)((long)pppuVar22 + 0x2f2) == '\x01')) {
            func_0x0001072cf1f8();
            func_0x0001072ced60();
            func_0x0001072ceea4();
          }
          func_0x0001072cf1f8();
          func_0x0001072ced60();
          func_0x0001072ceea4();
          FUN_1072b2d9c(alStack_7b0);
          if (alStack_7b0[0] != 0) {
            func_0x0001072cf1f8();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (apppuStack_7c8,alStack_7b0[0]);
            func_0x0001078bc160(puVar15 + 0x70,&uStack_750,apppuStack_7c8);
            func_0x0001003ac718();
            func_0x0001072ceea4();
          }
          FUN_10724c894(alStack_7b0);
          func_0x0001078bc240(puVar15 + 0x70);
          ppuVar18 = pppuVar22[0x45];
          if (ppuVar18 != (undefined **)0x0) {
            func_0x00010740e088(&uStack_750,pppuVar22[0x15]);
            FUN_1073117c4(CONCAT44(uStack_74c,uStack_750),ppuVar18);
          }
          pppuVar13 = pppuVar22 + 0x70;
          FUN_10724bb70(&uStack_750);
          if (CONCAT44(uStack_74c,uStack_750) != 0) {
            ppuVar18 = pppuVar22[0x6f];
            func_0x0001072cedd4();
            *pppuVar13 = &PTR_FUN_11099b128;
            pppuVar13[1] = ppuVar18;
            pppuVar13[2] = (undefined **)FUN_1072b4ec4;
            pppuVar13[3] = (undefined **)0x0;
            apppuStack_7c8[0] = pppuVar13;
            func_0x0001072cfdc8();
            func_0x0001072cf558();
            if (pppuVar13 != (undefined ***)0x0) {
              func_0x0001072ce338();
            }
          }
          puVar15 = &uStack_750;
          func_0x00010724bcd8();
          func_0x0001077f3c4c();
          func_0x0001077f3790();
          puVar16 = puVar15;
          __ZNSt3__16chrono12steady_clock3nowEv();
          pppuVar14 = (undefined ***)(puVar15 + 2);
          func_0x00010743f974(pppuVar14,puVar16);
        }
        if (((ulong)pppuVar22[0x5e] & 1) == 0) {
          func_0x00010785f1f4();
          uStack_750 = 0;
          pppuVar13 = pppuVar14 + 0xd8;
          FUN_1072b86c8(pppuVar13,&uStack_750);
          pppuVar14 = pppuVar13;
          __ZNSt3__16chrono12steady_clock3nowEv();
          if (((int)pppuVar13 != 0) &&
             ((long)((ulong)pppuVar13 & 0xffffffff) <
              ((long)pppuVar14 - (long)pppuVar22[4]) / 1000000)) {
            func_0x0001072cfa78();
            puStack_738 = (undefined8 *)CONCAT44(puStack_738._4_4_,1);
            pppuVar14 = pppuVar22;
            func_0x0001072cfd24();
            func_0x0001003ac718();
          }
        }
        uVar5 = 0;
        if ((*(char *)(pppuVar22 + 0x5e) == '\x01') &&
           (uVar5 = 0, *(char *)(pppuVar22[0x24] + 7) == '\x01')) {
          __ZNSt3__16chrono12steady_clock3nowEv();
          uVar5 = false;
          if ((*(char *)(pppuVar22 + 0x69) != '\x01') ||
             (uVar5 = (long)pppuVar14 - (long)pppuVar22[0x68] == 0x77359401,
             2000000000 < (long)pppuVar14 - (long)pppuVar22[0x68])) {
            pppuVar13 = pppuVar14;
            func_0x0001077f3c4c();
            func_0x0001077f3790();
            func_0x0001072cf1f8();
            func_0x0001077538cc(pppuVar13 + 0x1b,&uStack_750);
            func_0x0001072ceea4();
            if (((ulong)pppuVar22[0x69] & 1) == 0) {
              *(undefined1 *)(pppuVar22 + 0x69) = 1;
            }
            pppuVar22[0x68] = (undefined **)pppuVar14;
          }
        }
        *(undefined1 *)((long)pppuVar22 + 0x2f2) = 0;
        func_0x0001072cec24();
        func_0x0001072ce0cc(uStack_718);
        if (!(bool)uVar5) {
          ___stack_chk_fail();
          puVar15 = &uStack_750;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          func_0x0001072cec24();
          func_0x0001072ce94c();
          func_0x00010785f1f4();
          plVar23 = (long *)(puVar15 + 0x16c);
          FUN_10724e330();
          if (((uint)plVar23 & 0x101) != 0x100) {
            func_0x0001077f3c4c();
            func_0x0001077f3790();
            puVar11 = (undefined8 *)*plVar23;
            if (puRam0000000113847068 != (undefined8 *)0x0) {
              puVar11 = puRam0000000113847068;
            }
            __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x0001072b4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)*puVar11 + 0x20))();
            return;
          }
          return;
        }
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 1072b4444; end: 1072b44f7;  */

void FUN_1072b4444(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined1 *extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined **ppuVar18;
  undefined8 extraout_x8_02;
  ulong uVar19;
  ushort uVar20;
  int extraout_w10;
  undefined ***pppuVar21;
  long unaff_x20;
  long *plVar22;
  long *plVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  long lVar26;
  undefined ***apppuStack_728 [3];
  long alStack_710 [2];
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 *puStack_6e8;
  undefined8 *puStack_6e0;
  undefined1 *puStack_6d8;
  undefined1 uStack_6c9;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined1 uStack_6b1;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined8 *puStack_698;
  undefined1 uStack_690;
  undefined1 uStack_68f;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined **ppuStack_618;
  ushort uStack_610;
  undefined ***pppuStack_600;
  undefined8 uStack_5f8;
  long lStack_5f0;
  ulong *puStack_5e8;
  long *plStack_5e0;
  undefined ***pppuStack_5d8;
  undefined8 ****ppppuStack_5d0;
  code *pcStack_5c8;
  undefined **appuStack_5c0 [8];
  long *plStack_580;
  undefined8 *puStack_578;
  undefined8 ****ppppuStack_570;
  code *pcStack_568;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 auStack_540 [64];
  long lStack_500;
  long lStack_4f8;
  undefined1 *puStack_4f0;
  long *plStack_4e8;
  undefined1 ****ppppuStack_4e0;
  code *pcStack_4d8;
  undefined1 auStack_4c8 [56];
  undefined1 auStack_490 [64];
  undefined1 *puStack_450;
  undefined1 ***pppuStack_440;
  code *pcStack_438;
  long lStack_428;
  long lStack_420;
  undefined1 auStack_410 [88];
  undefined1 auStack_3b8 [248];
  long lStack_2c0;
  undefined1 *puStack_2b8;
  long *plStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined1 auStack_288 [88];
  undefined1 auStack_230 [240];
  undefined1 auStack_140 [112];
  byte bStack_d0;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [64];
  
  func_0x0001072ce940();
  func_0x0001072ce248();
  func_0x0001003ac70c();
  lVar2 = param_3[1];
  for (lVar26 = *param_3; uVar5 = lVar26 == lVar2, !(bool)uVar5; lVar26 = lVar26 + 0x18) {
    func_0x0001072cf660(auStack_70);
    FUN_1072999ec(auStack_88,auStack_70);
    func_0x0001072cf0a4();
  }
  plVar22 = *(long **)(unaff_x20 + 0x1c8);
  FUN_107262e9c(auStack_70);
  puVar10 = auStack_88;
  func_0x0001072cf6bc(*(undefined8 *)(*plVar22 + 0x30));
  func_0x0001072cf0a4();
  puVar8 = auStack_88;
  FUN_10726e078();
  func_0x0001072ce098();
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0001072cf0a4();
    puVar9 = auStack_88;
    FUN_10726e078();
    func_0x0001072ce900();
    pcStack_98 = FUN_1072b44f8;
    lStack_c0 = lVar2;
    lStack_b8 = lVar26;
    plStack_b0 = plVar22;
    puStack_a8 = puVar8;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x0001072ce248();
    plVar22 = *(long **)(puVar9 + 0x1c8);
    FUN_107262e9c(auStack_230);
    func_0x0001072cf660(auStack_288);
    puVar8 = auStack_288;
    (**(code **)(*plVar22 + 0x38))(auStack_140,plVar22,auStack_230);
    func_0x0001072cf41c();
    func_0x0001072cf218();
    if ((bStack_d0 & 1) == 0) {
      *extraout_x8 = 0;
      extraout_x8[0x58] = 0;
    }
    else {
      FUN_1072692d4(auStack_230,auStack_140);
      FUN_1072d7368(auStack_288,auStack_230);
      func_0x0001072ce9c4();
      FUN_10729dca0();
      extraout_x8[0x58] = 1;
      func_0x000107932ce0(auStack_288);
      func_0x000107269e60(auStack_230);
    }
    puVar9 = auStack_140;
    func_0x0001072ba200();
    func_0x0001072ce098();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107269e60(auStack_230);
    func_0x0001072ba200();
    func_0x0001072ce900();
    pcStack_298 = FUN_1072b45fc;
    lStack_2c0 = lVar2;
    puStack_2b8 = puVar10;
    plStack_2b0 = plVar22;
    puStack_2a8 = puVar9;
    ppuStack_2a0 = &puStack_a0;
    func_0x0001072ce248();
    func_0x0001072cf0fc();
    FUN_107262e9c(auStack_3b8);
    func_0x0001072cfdc0(&lStack_428);
    puVar10 = auStack_3b8;
    func_0x000104c2f714();
    for (; uVar5 = lStack_428 == lStack_420, !(bool)uVar5; lStack_428 = lStack_428 + 0x70) {
      FUN_1072692d4(auStack_3b8,lStack_428);
      FUN_1072d7368(auStack_410,auStack_3b8);
      func_0x000107269e60(auStack_3b8);
      FUN_1072ba220(extraout_x8_00,auStack_410);
      puVar10 = auStack_410;
      func_0x000107932ce0();
    }
    func_0x0001072cf424();
    func_0x0001072ce098();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x000104c2f714(auStack_3b8);
    lVar26 = extraout_x8_00;
    func_0x0001072ba554();
    func_0x0001072ce94c();
    pcStack_438 = FUN_1072b46fc;
    puStack_450 = puVar10;
    pppuStack_440 = &ppuStack_2a0;
    func_0x0001072ce1d0();
    plVar22 = *(long **)(lVar26 + 0x1c8);
    FUN_107262e9c(auStack_490);
    func_0x0001072cfe38(auStack_4c8);
    puVar10 = auStack_490;
    func_0x0001072cef78(*(undefined8 *)(*plVar22 + 0x50));
    func_0x0001072cf41c();
    func_0x0001072cf7b0();
    func_0x0001072ce080();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072ce934();
    func_0x000104c2f714();
    func_0x0001072cf7b0();
    func_0x0001072ce900();
    lStack_4f8 = lStack_420;
    pcStack_4d8 = FUN_1072b4778;
    lStack_500 = lVar2;
    puStack_4f0 = puVar8;
    plStack_4e8 = plVar22;
    ppppuStack_4e0 = &pppuStack_440;
    func_0x0001072ce940();
    func_0x0001072ce248();
    uStack_558 = 0;
    uStack_550 = 0;
    uVar19 = *(ulong *)(puVar10 + 0x10);
    uStack_548 = 0;
    uVar5 = (uVar19 & 1) == 0;
    puVar1 = (ulong *)(puVar10 + 0x10);
    if (!(bool)uVar5) {
      puVar1 = (ulong *)(uVar19 + 7);
    }
    for (lVar26 = (long)*(int *)(puVar10 + 0x18) << 3; lVar26 != 0; lVar26 = lVar26 + -8) {
      func_0x0001072cfec8(*(undefined8 *)(*puVar1 + 0x10),*(undefined8 *)(*puVar1 + 0x18),
                          auStack_540);
      FUN_10725ade4(&uStack_558,auStack_540);
      puVar1 = puVar1 + 1;
    }
    plVar23 = *(long **)(puVar8 + 0x1c8);
    func_0x0001072cf8f8(plVar22[5],auStack_540);
    func_0x0001072cf6bc(*(undefined8 *)(*plVar23 + 0x60));
    func_0x0001072cf0a4();
    puVar11 = &uStack_558;
    FUN_10725aef4();
    func_0x0001072ce098();
    if (!(bool)uVar5) {
      ___stack_chk_fail();
      func_0x0001072cf0a4();
      puVar12 = &uStack_558;
      FUN_10725aef4();
      func_0x0001072ce900();
      pppuVar13 = appuStack_5c0;
      iVar17 = (int)appuStack_5c0;
      pcStack_568 = FUN_1072b484c;
      plStack_580 = plVar23;
      puStack_578 = puVar11;
      ppppuStack_570 = &ppppuStack_4e0;
      func_0x0001072ce1d0();
      pppuVar21 = (undefined ***)puVar12[0x39];
      FUN_107262e9c();
      func_0x0001072ceb4c((*pppuVar21)[0xd]);
      func_0x0001072cf1cc();
      func_0x0001072ce080();
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001072ce928();
      func_0x000104c2f714();
      func_0x0001072ce900();
      pcStack_5c8 = FUN_1072b48a8;
      lStack_5f0 = lVar26;
      puStack_5e8 = puVar1;
      plStack_5e0 = plVar23;
      pppuStack_5d8 = pppuVar21;
      ppppuStack_5d0 = &ppppuStack_570;
      func_0x0001072ce328();
      iVar3 = *(int *)(pppuVar13 + 0x61);
      uStack_5f8 = extraout_x8_01;
      *(int *)(pppuVar13 + 0x61) = iVar17;
      bVar6 = iVar17 == 2;
      bVar7 = iVar3 == 2;
      uVar20 = 0;
      if (bVar7) {
        uVar20 = (ushort)!bVar6;
      }
      uVar5 = bVar6 == bVar7;
      pppuVar14 = pppuVar13;
      if (!(bool)uVar5) {
        if (uVar20 == 0) {
          if (!bVar7 && bVar6) {
            if (pppuVar13[0x45] != (undefined **)0x0) {
              *(undefined1 *)(pppuVar13[0x45] + 6) = 0;
            }
            ppuVar18 = pppuVar13[0x43];
            if ((*(char *)(ppuVar18 + 5) != '\0') && (*(char *)(ppuVar18 + 0x1c) == '\x01')) {
              *(undefined1 *)(ppuVar18 + 0x1c) = 0;
            }
            *(undefined1 *)(ppuVar18 + 5) = 0;
            FUN_1072b3118(pppuVar13);
          }
        }
        else {
          ppuVar18 = pppuVar13[0x45];
          if ((ppuVar18 != (undefined **)0x0) &&
             (*(undefined1 *)(ppuVar18 + 6) = 1, *(char *)(ppuVar18 + 5) == '\x01')) {
            *(undefined1 *)(ppuVar18 + 5) = 0;
          }
          ppuVar18 = pppuVar13[0x43];
          if ((((ulong)ppuVar18[5] & 1) == 0) && (*(char *)(ppuVar18 + 0x1c) == '\x01')) {
            *(undefined1 *)(ppuVar18 + 0x1c) = 0;
          }
          *(undefined1 *)(ppuVar18 + 5) = 1;
        }
        uVar5 = bVar7 || !bVar6;
        uStack_610 = 0x100;
        if ((bool)uVar5) {
          uStack_610 = 0;
        }
        uStack_610 = uStack_610 | uVar20;
        ppuStack_618 = &PTR_FUN_11099b028;
        pppuStack_600 = &ppuStack_618;
        FUN_107292e94(pppuVar13[0x16],&ppuStack_618);
        pppuVar14 = &ppuStack_618;
        func_0x000107283e00();
        pppuVar21 = pppuVar13;
      }
      func_0x0001072ce0cc(uStack_5f8);
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001072ce934();
      func_0x000107283e00();
      func_0x0001072ce900();
      func_0x0001072ce1e4();
      uStack_678 = extraout_x8_02;
      func_0x0001072cefbc();
      if (pppuVar21[0x15] != (undefined **)0x0) {
        FUN_1072d31fc(pppuVar21[0x23]);
        ppuVar18 = pppuVar21[0x30];
        func_0x00010731d558(ppuVar18);
        ppuVar24 = pppuVar21[0x18];
        __ZNSt3__16chrono12steady_clock3nowEv();
        (**(code **)(*ppuVar24 + 0x38))(ppuVar24,ppuVar18);
        func_0x00010739ed6c(pppuVar21[0x52]);
        (**(code **)(*pppuVar21[0x1a] + 0x58))();
        uStack_6b1 = 0;
        uStack_6c8 = 0;
        uStack_6c0 = 0;
        uStack_6c9 = 0;
        ppuVar18 = pppuVar21[0x16];
        puVar11 = &uStack_700;
        func_0x0001072cfea4();
        puStack_6e8 = &uStack_6b1;
        puStack_6e0 = &uStack_6c8;
        puStack_6d8 = &uStack_6c9;
        puStack_698 = (undefined8 *)0x0;
        func_0x0001072cf8f0();
        *puVar11 = &PTR_FUN_11099b0a8;
        puVar11[2] = uStack_6f8;
        puVar11[1] = uStack_700;
        uStack_700 = 0;
        uStack_6f8 = 0;
        puVar11[3] = uStack_6f0;
        puVar10 = puStack_6e8;
        puVar11[5] = puStack_6e0;
        puVar11[4] = puVar10;
        puVar11[6] = puStack_6d8;
        puStack_698 = puVar11;
        FUN_107292e94(ppuVar18,&uStack_6b0);
        func_0x000107283e00(&uStack_6b0);
        func_0x00010725b1d4(&uStack_700);
        ppuVar18 = pppuVar21[0x43];
        FUN_1072769d4(&uStack_6b0,pppuVar21[0x33]);
        uStack_690 = uStack_6c9;
        uStack_68f = uStack_6b1;
        uStack_680 = uStack_6c0;
        uStack_688 = uStack_6c8;
        FUN_1072df4f4(ppuVar18,&uStack_6b0);
        puVar15 = &uStack_6b0;
        func_0x00010794120c();
        puVar25 = pppuVar21[0x43][0x1f];
        puVar4 = pppuVar21[0x43][0x20];
        func_0x0001077f3c4c();
        func_0x0001077f3790();
        do {
          func_0x0001072cfb28();
        } while (extraout_w10 != 0);
        __ZNSt3__16chrono12steady_clock3nowEv();
        func_0x0001072cf1f8();
        func_0x0001072ced60();
        func_0x0001072ceea4();
        func_0x0001072cf1f8();
        func_0x0001072ced60();
        func_0x0001072ceea4();
        if ((((ulong)puVar4 & 1) != 0) &&
           (func_0x0001078bc120(puVar15 + 0x70,puVar25,(ulong)puVar25 >> 0x20),
           *(char *)((long)pppuVar21 + 0x2f2) == '\x01')) {
          func_0x0001072cf1f8();
          func_0x0001072ced60();
          func_0x0001072ceea4();
        }
        func_0x0001072cf1f8();
        func_0x0001072ced60();
        func_0x0001072ceea4();
        FUN_1072b2d9c(alStack_710);
        if (alStack_710[0] != 0) {
          func_0x0001072cf1f8();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (apppuStack_728,alStack_710[0]);
          func_0x0001078bc160(puVar15 + 0x70,&uStack_6b0,apppuStack_728);
          func_0x0001003ac718();
          func_0x0001072ceea4();
        }
        FUN_10724c894(alStack_710);
        func_0x0001078bc240(puVar15 + 0x70);
        ppuVar18 = pppuVar21[0x45];
        if (ppuVar18 != (undefined **)0x0) {
          func_0x00010740e088(&uStack_6b0,pppuVar21[0x15]);
          FUN_1073117c4(CONCAT44(uStack_6ac,uStack_6b0),ppuVar18);
        }
        pppuVar13 = pppuVar21 + 0x70;
        FUN_10724bb70(&uStack_6b0);
        if (CONCAT44(uStack_6ac,uStack_6b0) != 0) {
          ppuVar18 = pppuVar21[0x6f];
          func_0x0001072cedd4();
          *pppuVar13 = &PTR_FUN_11099b128;
          pppuVar13[1] = ppuVar18;
          pppuVar13[2] = (undefined **)FUN_1072b4ec4;
          pppuVar13[3] = (undefined **)0x0;
          apppuStack_728[0] = pppuVar13;
          func_0x0001072cfdc8();
          func_0x0001072cf558();
          if (pppuVar13 != (undefined ***)0x0) {
            func_0x0001072ce338();
          }
        }
        puVar15 = &uStack_6b0;
        func_0x00010724bcd8();
        func_0x0001077f3c4c();
        func_0x0001077f3790();
        puVar16 = puVar15;
        __ZNSt3__16chrono12steady_clock3nowEv();
        pppuVar14 = (undefined ***)(puVar15 + 2);
        func_0x00010743f974(pppuVar14,puVar16);
      }
      if (((ulong)pppuVar21[0x5e] & 1) == 0) {
        func_0x00010785f1f4();
        uStack_6b0 = 0;
        pppuVar13 = pppuVar14 + 0xd8;
        FUN_1072b86c8(pppuVar13,&uStack_6b0);
        pppuVar14 = pppuVar13;
        __ZNSt3__16chrono12steady_clock3nowEv();
        if (((int)pppuVar13 != 0) &&
           ((long)((ulong)pppuVar13 & 0xffffffff) < ((long)pppuVar14 - (long)pppuVar21[4]) / 1000000
           )) {
          func_0x0001072cfa78();
          puStack_698 = (undefined8 *)CONCAT44(puStack_698._4_4_,1);
          pppuVar14 = pppuVar21;
          func_0x0001072cfd24();
          func_0x0001003ac718();
        }
      }
      uVar5 = 0;
      if ((*(char *)(pppuVar21 + 0x5e) == '\x01') &&
         (uVar5 = 0, *(char *)(pppuVar21[0x24] + 7) == '\x01')) {
        __ZNSt3__16chrono12steady_clock3nowEv();
        uVar5 = false;
        if ((*(char *)(pppuVar21 + 0x69) != '\x01') ||
           (uVar5 = (long)pppuVar14 - (long)pppuVar21[0x68] == 0x77359401,
           2000000000 < (long)pppuVar14 - (long)pppuVar21[0x68])) {
          pppuVar13 = pppuVar14;
          func_0x0001077f3c4c();
          func_0x0001077f3790();
          func_0x0001072cf1f8();
          func_0x0001077538cc(pppuVar13 + 0x1b,&uStack_6b0);
          func_0x0001072ceea4();
          if (((ulong)pppuVar21[0x69] & 1) == 0) {
            *(undefined1 *)(pppuVar21 + 0x69) = 1;
          }
          pppuVar21[0x68] = (undefined **)pppuVar14;
        }
      }
      *(undefined1 *)((long)pppuVar21 + 0x2f2) = 0;
      func_0x0001072cec24();
      func_0x0001072ce0cc(uStack_678);
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      puVar15 = &uStack_6b0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0001072cec24();
      func_0x0001072ce94c();
      func_0x00010785f1f4();
      plVar22 = (long *)(puVar15 + 0x16c);
      FUN_10724e330();
      if (((uint)plVar22 & 0x101) == 0x100) {
        return;
      }
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      puVar11 = (undefined8 *)*plVar22;
      if (puRam0000000113847068 != (undefined8 *)0x0) {
        puVar11 = puRam0000000113847068;
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x0001072b4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*puVar11 + 0x20))();
      return;
    }
  }
  return;
}



/* Entry: 1072b44f8; end: 1072b45fb;  */

void FUN_1072b44f8(undefined1 *param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined1 *puVar15;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined **ppuVar16;
  undefined8 extraout_x8_01;
  ulong uVar17;
  ushort uVar18;
  int extraout_w10;
  undefined ***pppuVar19;
  long *plVar20;
  long *plVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  long lVar24;
  undefined ***apppuStack_698 [3];
  long alStack_680 [2];
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined1 *puStack_658;
  undefined8 *puStack_650;
  undefined1 *puStack_648;
  undefined1 uStack_639;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 uStack_621;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined8 *puStack_608;
  undefined1 uStack_600;
  undefined1 uStack_5ff;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined **ppuStack_588;
  ushort uStack_580;
  undefined ***pppuStack_570;
  undefined8 uStack_568;
  long lStack_560;
  ulong *puStack_558;
  long *plStack_550;
  undefined ***pppuStack_548;
  undefined8 ****ppppuStack_540;
  code *pcStack_538;
  undefined **appuStack_530 [8];
  long *plStack_4f0;
  undefined8 *puStack_4e8;
  undefined1 ****ppppuStack_4e0;
  code *pcStack_4d8;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4b0 [64];
  undefined1 ***pppuStack_450;
  code *pcStack_448;
  undefined1 auStack_438 [56];
  undefined1 auStack_400 [64];
  undefined1 *puStack_3c0;
  undefined1 **ppuStack_3b0;
  code *pcStack_3a8;
  long lStack_398;
  long lStack_390;
  undefined1 auStack_380 [88];
  undefined1 auStack_328 [248];
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined1 auStack_1f8 [88];
  undefined1 auStack_1a0 [240];
  undefined1 auStack_b0 [112];
  byte bStack_40;
  
  func_0x0001072ce248();
  plVar20 = *(long **)(param_2 + 0x1c8);
  FUN_107262e9c(auStack_1a0);
  func_0x0001072cf660(auStack_1f8);
  puVar15 = auStack_1f8;
  (**(code **)(*plVar20 + 0x38))(auStack_b0,plVar20,auStack_1a0);
  func_0x0001072cf41c();
  func_0x0001072cf218();
  if ((bStack_40 & 1) == 0) {
    *param_1 = 0;
    param_1[0x58] = 0;
  }
  else {
    FUN_1072692d4(auStack_1a0,auStack_b0);
    FUN_1072d7368(auStack_1f8,auStack_1a0);
    func_0x0001072ce9c4();
    FUN_10729dca0();
    param_1[0x58] = 1;
    func_0x000107932ce0(auStack_1f8);
    func_0x000107269e60(auStack_1a0);
  }
  func_0x0001072ba200();
  func_0x0001072ce098();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107269e60(auStack_1a0);
  func_0x0001072ba200();
  func_0x0001072ce900();
  pcStack_208 = FUN_1072b45fc;
  puStack_210 = &stack0xfffffffffffffff0;
  func_0x0001072ce248();
  func_0x0001072cf0fc();
  FUN_107262e9c(auStack_328);
  func_0x0001072cfdc0(&lStack_398);
  puVar7 = auStack_328;
  func_0x000104c2f714();
  for (; uVar4 = lStack_398 == lStack_390, !(bool)uVar4; lStack_398 = lStack_398 + 0x70) {
    FUN_1072692d4(auStack_328,lStack_398);
    FUN_1072d7368(auStack_380,auStack_328);
    func_0x000107269e60(auStack_328);
    FUN_1072ba220(extraout_x8,auStack_380);
    puVar7 = auStack_380;
    func_0x000107932ce0();
  }
  func_0x0001072cf424();
  func_0x0001072ce098();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_328);
  lVar24 = extraout_x8;
  func_0x0001072ba554();
  func_0x0001072ce94c();
  pcStack_3a8 = FUN_1072b46fc;
  puStack_3c0 = puVar7;
  ppuStack_3b0 = &puStack_210;
  func_0x0001072ce1d0();
  plVar20 = *(long **)(lVar24 + 0x1c8);
  FUN_107262e9c(auStack_400);
  func_0x0001072cfe38(auStack_438);
  puVar7 = auStack_400;
  func_0x0001072cef78(*(undefined8 *)(*plVar20 + 0x50));
  func_0x0001072cf41c();
  func_0x0001072cf7b0();
  func_0x0001072ce080();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce934();
  func_0x000104c2f714();
  func_0x0001072cf7b0();
  func_0x0001072ce900();
  pcStack_448 = FUN_1072b4778;
  pppuStack_450 = &ppuStack_3b0;
  func_0x0001072ce940();
  func_0x0001072ce248();
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uVar17 = *(ulong *)(puVar7 + 0x10);
  uStack_4b8 = 0;
  uVar4 = (uVar17 & 1) == 0;
  puVar1 = (ulong *)(puVar7 + 0x10);
  if (!(bool)uVar4) {
    puVar1 = (ulong *)(uVar17 + 7);
  }
  for (lVar24 = (long)*(int *)(puVar7 + 0x18) << 3; lVar24 != 0; lVar24 = lVar24 + -8) {
    func_0x0001072cfec8(*(undefined8 *)(*puVar1 + 0x10),*(undefined8 *)(*puVar1 + 0x18),auStack_4b0)
    ;
    FUN_10725ade4(&uStack_4c8,auStack_4b0);
    puVar1 = puVar1 + 1;
  }
  plVar21 = *(long **)(puVar15 + 0x1c8);
  func_0x0001072cf8f8(plVar20[5],auStack_4b0);
  func_0x0001072cf6bc(*(undefined8 *)(*plVar21 + 0x60));
  func_0x0001072cf0a4();
  puVar8 = &uStack_4c8;
  FUN_10725aef4();
  func_0x0001072ce098();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072cf0a4();
  puVar9 = &uStack_4c8;
  FUN_10725aef4();
  func_0x0001072ce900();
  pppuVar10 = appuStack_530;
  iVar14 = (int)appuStack_530;
  pcStack_4d8 = FUN_1072b484c;
  plStack_4f0 = plVar21;
  puStack_4e8 = puVar8;
  ppppuStack_4e0 = &pppuStack_450;
  func_0x0001072ce1d0();
  pppuVar19 = (undefined ***)puVar9[0x39];
  FUN_107262e9c();
  func_0x0001072ceb4c((*pppuVar19)[0xd]);
  func_0x0001072cf1cc();
  func_0x0001072ce080();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce928();
  func_0x000104c2f714();
  func_0x0001072ce900();
  pcStack_538 = FUN_1072b48a8;
  lStack_560 = lVar24;
  puStack_558 = puVar1;
  plStack_550 = plVar21;
  pppuStack_548 = pppuVar19;
  ppppuStack_540 = &ppppuStack_4e0;
  func_0x0001072ce328();
  iVar2 = *(int *)(pppuVar10 + 0x61);
  uStack_568 = extraout_x8_00;
  *(int *)(pppuVar10 + 0x61) = iVar14;
  bVar5 = iVar14 == 2;
  bVar6 = iVar2 == 2;
  uVar18 = 0;
  if (bVar6) {
    uVar18 = (ushort)!bVar5;
  }
  uVar4 = bVar5 == bVar6;
  pppuVar11 = pppuVar10;
  if (!(bool)uVar4) {
    if (uVar18 == 0) {
      if (!bVar6 && bVar5) {
        if (pppuVar10[0x45] != (undefined **)0x0) {
          *(undefined1 *)(pppuVar10[0x45] + 6) = 0;
        }
        ppuVar16 = pppuVar10[0x43];
        if ((*(char *)(ppuVar16 + 5) != '\0') && (*(char *)(ppuVar16 + 0x1c) == '\x01')) {
          *(undefined1 *)(ppuVar16 + 0x1c) = 0;
        }
        *(undefined1 *)(ppuVar16 + 5) = 0;
        FUN_1072b3118(pppuVar10);
      }
    }
    else {
      ppuVar16 = pppuVar10[0x45];
      if ((ppuVar16 != (undefined **)0x0) &&
         (*(undefined1 *)(ppuVar16 + 6) = 1, *(char *)(ppuVar16 + 5) == '\x01')) {
        *(undefined1 *)(ppuVar16 + 5) = 0;
      }
      ppuVar16 = pppuVar10[0x43];
      if ((((ulong)ppuVar16[5] & 1) == 0) && (*(char *)(ppuVar16 + 0x1c) == '\x01')) {
        *(undefined1 *)(ppuVar16 + 0x1c) = 0;
      }
      *(undefined1 *)(ppuVar16 + 5) = 1;
    }
    uVar4 = bVar6 || !bVar5;
    uStack_580 = 0x100;
    if ((bool)uVar4) {
      uStack_580 = 0;
    }
    uStack_580 = uStack_580 | uVar18;
    ppuStack_588 = &PTR_FUN_11099b028;
    pppuStack_570 = &ppuStack_588;
    FUN_107292e94(pppuVar10[0x16],&ppuStack_588);
    pppuVar11 = &ppuStack_588;
    func_0x000107283e00();
    pppuVar19 = pppuVar10;
  }
  func_0x0001072ce0cc(uStack_568);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce934();
  func_0x000107283e00();
  func_0x0001072ce900();
  func_0x0001072ce1e4();
  uStack_5e8 = extraout_x8_01;
  func_0x0001072cefbc();
  if (pppuVar19[0x15] != (undefined **)0x0) {
    FUN_1072d31fc(pppuVar19[0x23]);
    ppuVar16 = pppuVar19[0x30];
    func_0x00010731d558(ppuVar16);
    ppuVar22 = pppuVar19[0x18];
    __ZNSt3__16chrono12steady_clock3nowEv();
    (**(code **)(*ppuVar22 + 0x38))(ppuVar22,ppuVar16);
    func_0x00010739ed6c(pppuVar19[0x52]);
    (**(code **)(*pppuVar19[0x1a] + 0x58))();
    uStack_621 = 0;
    uStack_638 = 0;
    uStack_630 = 0;
    uStack_639 = 0;
    ppuVar16 = pppuVar19[0x16];
    puVar8 = &uStack_670;
    func_0x0001072cfea4();
    puStack_658 = &uStack_621;
    puStack_650 = &uStack_638;
    puStack_648 = &uStack_639;
    puStack_608 = (undefined8 *)0x0;
    func_0x0001072cf8f0();
    *puVar8 = &PTR_FUN_11099b0a8;
    puVar8[2] = uStack_668;
    puVar8[1] = uStack_670;
    uStack_670 = 0;
    uStack_668 = 0;
    puVar8[3] = uStack_660;
    puVar15 = puStack_658;
    puVar8[5] = puStack_650;
    puVar8[4] = puVar15;
    puVar8[6] = puStack_648;
    puStack_608 = puVar8;
    FUN_107292e94(ppuVar16,&uStack_620);
    func_0x000107283e00(&uStack_620);
    func_0x00010725b1d4(&uStack_670);
    ppuVar16 = pppuVar19[0x43];
    FUN_1072769d4(&uStack_620,pppuVar19[0x33]);
    uStack_600 = uStack_639;
    uStack_5ff = uStack_621;
    uStack_5f0 = uStack_630;
    uStack_5f8 = uStack_638;
    FUN_1072df4f4(ppuVar16,&uStack_620);
    puVar12 = &uStack_620;
    func_0x00010794120c();
    puVar23 = pppuVar19[0x43][0x1f];
    puVar3 = pppuVar19[0x43][0x20];
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    do {
      func_0x0001072cfb28();
    } while (extraout_w10 != 0);
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    if ((((ulong)puVar3 & 1) != 0) &&
       (func_0x0001078bc120(puVar12 + 0x70,puVar23,(ulong)puVar23 >> 0x20),
       *(char *)((long)pppuVar19 + 0x2f2) == '\x01')) {
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
    }
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    FUN_1072b2d9c(alStack_680);
    if (alStack_680[0] != 0) {
      func_0x0001072cf1f8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (apppuStack_698,alStack_680[0]);
      func_0x0001078bc160(puVar12 + 0x70,&uStack_620,apppuStack_698);
      func_0x0001003ac718();
      func_0x0001072ceea4();
    }
    FUN_10724c894(alStack_680);
    func_0x0001078bc240(puVar12 + 0x70);
    ppuVar16 = pppuVar19[0x45];
    if (ppuVar16 != (undefined **)0x0) {
      func_0x00010740e088(&uStack_620,pppuVar19[0x15]);
      FUN_1073117c4(CONCAT44(uStack_61c,uStack_620),ppuVar16);
    }
    pppuVar10 = pppuVar19 + 0x70;
    FUN_10724bb70(&uStack_620);
    if (CONCAT44(uStack_61c,uStack_620) != 0) {
      ppuVar16 = pppuVar19[0x6f];
      func_0x0001072cedd4();
      *pppuVar10 = &PTR_FUN_11099b128;
      pppuVar10[1] = ppuVar16;
      pppuVar10[2] = (undefined **)FUN_1072b4ec4;
      pppuVar10[3] = (undefined **)0x0;
      apppuStack_698[0] = pppuVar10;
      func_0x0001072cfdc8();
      func_0x0001072cf558();
      if (pppuVar10 != (undefined ***)0x0) {
        func_0x0001072ce338();
      }
    }
    puVar12 = &uStack_620;
    func_0x00010724bcd8();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    puVar13 = puVar12;
    __ZNSt3__16chrono12steady_clock3nowEv();
    pppuVar11 = (undefined ***)(puVar12 + 2);
    func_0x00010743f974(pppuVar11,puVar13);
  }
  if (((ulong)pppuVar19[0x5e] & 1) == 0) {
    func_0x00010785f1f4();
    uStack_620 = 0;
    pppuVar10 = pppuVar11 + 0xd8;
    FUN_1072b86c8(pppuVar10,&uStack_620);
    pppuVar11 = pppuVar10;
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (((int)pppuVar10 != 0) &&
       ((long)((ulong)pppuVar10 & 0xffffffff) < ((long)pppuVar11 - (long)pppuVar19[4]) / 1000000)) {
      func_0x0001072cfa78();
      puStack_608 = (undefined8 *)CONCAT44(puStack_608._4_4_,1);
      pppuVar11 = pppuVar19;
      func_0x0001072cfd24();
      func_0x0001003ac718();
    }
  }
  uVar4 = 0;
  if ((*(char *)(pppuVar19 + 0x5e) == '\x01') &&
     (uVar4 = 0, *(char *)(pppuVar19[0x24] + 7) == '\x01')) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar4 = false;
    if ((*(char *)(pppuVar19 + 0x69) != '\x01') ||
       (uVar4 = (long)pppuVar11 - (long)pppuVar19[0x68] == 0x77359401,
       2000000000 < (long)pppuVar11 - (long)pppuVar19[0x68])) {
      pppuVar10 = pppuVar11;
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      func_0x0001072cf1f8();
      func_0x0001077538cc(pppuVar10 + 0x1b,&uStack_620);
      func_0x0001072ceea4();
      if (((ulong)pppuVar19[0x69] & 1) == 0) {
        *(undefined1 *)(pppuVar19 + 0x69) = 1;
      }
      pppuVar19[0x68] = (undefined **)pppuVar11;
    }
  }
  *(undefined1 *)((long)pppuVar19 + 0x2f2) = 0;
  func_0x0001072cec24();
  func_0x0001072ce0cc(uStack_5e8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_620;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001072cec24();
  func_0x0001072ce94c();
  func_0x00010785f1f4();
  plVar20 = (long *)(puVar12 + 0x16c);
  FUN_10724e330();
  if (((uint)plVar20 & 0x101) == 0x100) {
    return;
  }
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  puVar8 = (undefined8 *)*plVar20;
  if (puRam0000000113847068 != (undefined8 *)0x0) {
    puVar8 = puRam0000000113847068;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x0001072b4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar8 + 0x20))();
  return;
}



/* Entry: 1072b45fc; end: 1072b46fb;  */

void FUN_1072b45fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 extraout_x8;
  undefined **ppuVar15;
  undefined8 extraout_x8_00;
  ulong uVar16;
  ushort uVar17;
  int extraout_w10;
  long *plVar18;
  undefined ***pppuVar19;
  long *plVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  long lVar23;
  undefined ***apppuStack_498 [3];
  long alStack_480 [2];
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 *puStack_458;
  undefined8 *puStack_450;
  undefined1 *puStack_448;
  undefined1 uStack_439;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 uStack_421;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 *puStack_408;
  undefined1 uStack_400;
  undefined1 uStack_3ff;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined **ppuStack_388;
  ushort uStack_380;
  undefined ***pppuStack_370;
  undefined8 uStack_368;
  long lStack_360;
  ulong *puStack_358;
  long *plStack_350;
  undefined ***pppuStack_348;
  undefined1 ****ppppuStack_340;
  code *pcStack_338;
  undefined **appuStack_330 [8];
  long *plStack_2f0;
  undefined8 *puStack_2e8;
  undefined1 ***pppuStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [64];
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined1 auStack_238 [56];
  undefined1 auStack_200 [64];
  undefined1 *puStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  long lStack_198;
  long lStack_190;
  undefined1 auStack_180 [88];
  undefined1 auStack_128 [248];
  
  func_0x0001072ce248();
  func_0x0001072cf0fc();
  FUN_107262e9c(auStack_128);
  func_0x0001072cfdc0(&lStack_198);
  puVar7 = auStack_128;
  func_0x000104c2f714();
  for (; uVar4 = lStack_198 == lStack_190, !(bool)uVar4; lStack_198 = lStack_198 + 0x70) {
    FUN_1072692d4(auStack_128,lStack_198);
    FUN_1072d7368(auStack_180,auStack_128);
    func_0x000107269e60(auStack_128);
    FUN_1072ba220(param_1,auStack_180);
    puVar7 = auStack_180;
    func_0x000107932ce0();
  }
  func_0x0001072cf424();
  func_0x0001072ce098();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_128);
  lVar23 = param_1;
  func_0x0001072ba554();
  func_0x0001072ce94c();
  pcStack_1a8 = FUN_1072b46fc;
  puStack_1c0 = puVar7;
  lStack_1b8 = param_1;
  puStack_1b0 = &stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  plVar18 = *(long **)(lVar23 + 0x1c8);
  FUN_107262e9c(auStack_200);
  func_0x0001072cfe38(auStack_238);
  puVar7 = auStack_200;
  func_0x0001072cef78(*(undefined8 *)(*plVar18 + 0x50));
  func_0x0001072cf41c();
  func_0x0001072cf7b0();
  func_0x0001072ce080();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce934();
  func_0x000104c2f714();
  func_0x0001072cf7b0();
  func_0x0001072ce900();
  pcStack_248 = FUN_1072b4778;
  ppuStack_250 = &puStack_1b0;
  func_0x0001072ce940();
  func_0x0001072ce248();
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uVar16 = *(ulong *)(puVar7 + 0x10);
  uStack_2b8 = 0;
  uVar4 = (uVar16 & 1) == 0;
  puVar1 = (ulong *)(puVar7 + 0x10);
  if (!(bool)uVar4) {
    puVar1 = (ulong *)(uVar16 + 7);
  }
  for (lVar23 = (long)*(int *)(puVar7 + 0x18) << 3; lVar23 != 0; lVar23 = lVar23 + -8) {
    func_0x0001072cfec8(*(undefined8 *)(*puVar1 + 0x10),*(undefined8 *)(*puVar1 + 0x18),auStack_2b0)
    ;
    FUN_10725ade4(&uStack_2c8,auStack_2b0);
    puVar1 = puVar1 + 1;
  }
  plVar20 = *(long **)(param_4 + 0x1c8);
  func_0x0001072cf8f8(plVar18[5],auStack_2b0);
  func_0x0001072cf6bc(*(undefined8 *)(*plVar20 + 0x60));
  func_0x0001072cf0a4();
  puVar8 = &uStack_2c8;
  FUN_10725aef4();
  func_0x0001072ce098();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072cf0a4();
  puVar9 = &uStack_2c8;
  FUN_10725aef4();
  func_0x0001072ce900();
  pppuVar10 = appuStack_330;
  iVar14 = (int)appuStack_330;
  pcStack_2d8 = FUN_1072b484c;
  plStack_2f0 = plVar20;
  puStack_2e8 = puVar8;
  pppuStack_2e0 = &ppuStack_250;
  func_0x0001072ce1d0();
  pppuVar19 = (undefined ***)puVar9[0x39];
  FUN_107262e9c();
  func_0x0001072ceb4c((*pppuVar19)[0xd]);
  func_0x0001072cf1cc();
  func_0x0001072ce080();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce928();
  func_0x000104c2f714();
  func_0x0001072ce900();
  pcStack_338 = FUN_1072b48a8;
  lStack_360 = lVar23;
  puStack_358 = puVar1;
  plStack_350 = plVar20;
  pppuStack_348 = pppuVar19;
  ppppuStack_340 = &pppuStack_2e0;
  func_0x0001072ce328();
  iVar2 = *(int *)(pppuVar10 + 0x61);
  uStack_368 = extraout_x8;
  *(int *)(pppuVar10 + 0x61) = iVar14;
  bVar5 = iVar14 == 2;
  bVar6 = iVar2 == 2;
  uVar17 = 0;
  if (bVar6) {
    uVar17 = (ushort)!bVar5;
  }
  uVar4 = bVar5 == bVar6;
  pppuVar11 = pppuVar10;
  if (!(bool)uVar4) {
    if (uVar17 == 0) {
      if (!bVar6 && bVar5) {
        if (pppuVar10[0x45] != (undefined **)0x0) {
          *(undefined1 *)(pppuVar10[0x45] + 6) = 0;
        }
        ppuVar15 = pppuVar10[0x43];
        if ((*(char *)(ppuVar15 + 5) != '\0') && (*(char *)(ppuVar15 + 0x1c) == '\x01')) {
          *(undefined1 *)(ppuVar15 + 0x1c) = 0;
        }
        *(undefined1 *)(ppuVar15 + 5) = 0;
        FUN_1072b3118(pppuVar10);
      }
    }
    else {
      ppuVar15 = pppuVar10[0x45];
      if ((ppuVar15 != (undefined **)0x0) &&
         (*(undefined1 *)(ppuVar15 + 6) = 1, *(char *)(ppuVar15 + 5) == '\x01')) {
        *(undefined1 *)(ppuVar15 + 5) = 0;
      }
      ppuVar15 = pppuVar10[0x43];
      if ((((ulong)ppuVar15[5] & 1) == 0) && (*(char *)(ppuVar15 + 0x1c) == '\x01')) {
        *(undefined1 *)(ppuVar15 + 0x1c) = 0;
      }
      *(undefined1 *)(ppuVar15 + 5) = 1;
    }
    uVar4 = bVar6 || !bVar5;
    uStack_380 = 0x100;
    if ((bool)uVar4) {
      uStack_380 = 0;
    }
    uStack_380 = uStack_380 | uVar17;
    ppuStack_388 = &PTR_FUN_11099b028;
    pppuStack_370 = &ppuStack_388;
    FUN_107292e94(pppuVar10[0x16],&ppuStack_388);
    pppuVar11 = &ppuStack_388;
    func_0x000107283e00();
    pppuVar19 = pppuVar10;
  }
  func_0x0001072ce0cc(uStack_368);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce934();
  func_0x000107283e00();
  func_0x0001072ce900();
  func_0x0001072ce1e4();
  uStack_3e8 = extraout_x8_00;
  func_0x0001072cefbc();
  if (pppuVar19[0x15] != (undefined **)0x0) {
    FUN_1072d31fc(pppuVar19[0x23]);
    ppuVar15 = pppuVar19[0x30];
    func_0x00010731d558(ppuVar15);
    ppuVar21 = pppuVar19[0x18];
    __ZNSt3__16chrono12steady_clock3nowEv();
    (**(code **)(*ppuVar21 + 0x38))(ppuVar21,ppuVar15);
    func_0x00010739ed6c(pppuVar19[0x52]);
    (**(code **)(*pppuVar19[0x1a] + 0x58))();
    uStack_421 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_439 = 0;
    ppuVar15 = pppuVar19[0x16];
    puVar8 = &uStack_470;
    func_0x0001072cfea4();
    puStack_458 = &uStack_421;
    puStack_450 = &uStack_438;
    puStack_448 = &uStack_439;
    puStack_408 = (undefined8 *)0x0;
    func_0x0001072cf8f0();
    *puVar8 = &PTR_FUN_11099b0a8;
    puVar8[2] = uStack_468;
    puVar8[1] = uStack_470;
    uStack_470 = 0;
    uStack_468 = 0;
    puVar8[3] = uStack_460;
    puVar7 = puStack_458;
    puVar8[5] = puStack_450;
    puVar8[4] = puVar7;
    puVar8[6] = puStack_448;
    puStack_408 = puVar8;
    FUN_107292e94(ppuVar15,&uStack_420);
    func_0x000107283e00(&uStack_420);
    func_0x00010725b1d4(&uStack_470);
    ppuVar15 = pppuVar19[0x43];
    FUN_1072769d4(&uStack_420,pppuVar19[0x33]);
    uStack_400 = uStack_439;
    uStack_3ff = uStack_421;
    uStack_3f0 = uStack_430;
    uStack_3f8 = uStack_438;
    FUN_1072df4f4(ppuVar15,&uStack_420);
    puVar12 = &uStack_420;
    func_0x00010794120c();
    puVar22 = pppuVar19[0x43][0x1f];
    puVar3 = pppuVar19[0x43][0x20];
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    do {
      func_0x0001072cfb28();
    } while (extraout_w10 != 0);
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    if ((((ulong)puVar3 & 1) != 0) &&
       (func_0x0001078bc120(puVar12 + 0x70,puVar22,(ulong)puVar22 >> 0x20),
       *(char *)((long)pppuVar19 + 0x2f2) == '\x01')) {
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
    }
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    FUN_1072b2d9c(alStack_480);
    if (alStack_480[0] != 0) {
      func_0x0001072cf1f8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (apppuStack_498,alStack_480[0]);
      func_0x0001078bc160(puVar12 + 0x70,&uStack_420,apppuStack_498);
      func_0x0001003ac718();
      func_0x0001072ceea4();
    }
    FUN_10724c894(alStack_480);
    func_0x0001078bc240(puVar12 + 0x70);
    ppuVar15 = pppuVar19[0x45];
    if (ppuVar15 != (undefined **)0x0) {
      func_0x00010740e088(&uStack_420,pppuVar19[0x15]);
      FUN_1073117c4(CONCAT44(uStack_41c,uStack_420),ppuVar15);
    }
    pppuVar10 = pppuVar19 + 0x70;
    FUN_10724bb70(&uStack_420);
    if (CONCAT44(uStack_41c,uStack_420) != 0) {
      ppuVar15 = pppuVar19[0x6f];
      func_0x0001072cedd4();
      *pppuVar10 = &PTR_FUN_11099b128;
      pppuVar10[1] = ppuVar15;
      pppuVar10[2] = (undefined **)FUN_1072b4ec4;
      pppuVar10[3] = (undefined **)0x0;
      apppuStack_498[0] = pppuVar10;
      func_0x0001072cfdc8();
      func_0x0001072cf558();
      if (pppuVar10 != (undefined ***)0x0) {
        func_0x0001072ce338();
      }
    }
    puVar12 = &uStack_420;
    func_0x00010724bcd8();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    puVar13 = puVar12;
    __ZNSt3__16chrono12steady_clock3nowEv();
    pppuVar11 = (undefined ***)(puVar12 + 2);
    func_0x00010743f974(pppuVar11,puVar13);
  }
  if (((ulong)pppuVar19[0x5e] & 1) == 0) {
    func_0x00010785f1f4();
    uStack_420 = 0;
    pppuVar10 = pppuVar11 + 0xd8;
    FUN_1072b86c8(pppuVar10,&uStack_420);
    pppuVar11 = pppuVar10;
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (((int)pppuVar10 != 0) &&
       ((long)((ulong)pppuVar10 & 0xffffffff) < ((long)pppuVar11 - (long)pppuVar19[4]) / 1000000)) {
      func_0x0001072cfa78();
      puStack_408 = (undefined8 *)CONCAT44(puStack_408._4_4_,1);
      pppuVar11 = pppuVar19;
      func_0x0001072cfd24();
      func_0x0001003ac718();
    }
  }
  uVar4 = 0;
  if ((*(char *)(pppuVar19 + 0x5e) == '\x01') &&
     (uVar4 = 0, *(char *)(pppuVar19[0x24] + 7) == '\x01')) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar4 = false;
    if ((*(char *)(pppuVar19 + 0x69) != '\x01') ||
       (uVar4 = (long)pppuVar11 - (long)pppuVar19[0x68] == 0x77359401,
       2000000000 < (long)pppuVar11 - (long)pppuVar19[0x68])) {
      pppuVar10 = pppuVar11;
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      func_0x0001072cf1f8();
      func_0x0001077538cc(pppuVar10 + 0x1b,&uStack_420);
      func_0x0001072ceea4();
      if (((ulong)pppuVar19[0x69] & 1) == 0) {
        *(undefined1 *)(pppuVar19 + 0x69) = 1;
      }
      pppuVar19[0x68] = (undefined **)pppuVar11;
    }
  }
  *(undefined1 *)((long)pppuVar19 + 0x2f2) = 0;
  func_0x0001072cec24();
  func_0x0001072ce0cc(uStack_3e8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_420;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001072cec24();
  func_0x0001072ce94c();
  func_0x00010785f1f4();
  plVar18 = (long *)(puVar12 + 0x16c);
  FUN_10724e330();
  if (((uint)plVar18 & 0x101) == 0x100) {
    return;
  }
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  puVar8 = (undefined8 *)*plVar18;
  if (puRam0000000113847068 != (undefined8 *)0x0) {
    puVar8 = puRam0000000113847068;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x0001072b4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar8 + 0x20))();
  return;
}



/* Entry: 1072b46fc; end: 1072b4777;  */

void FUN_1072b46fc(long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined8 extraout_x8;
  undefined **ppuVar15;
  undefined8 extraout_x8_00;
  ulong uVar16;
  ushort uVar17;
  int extraout_w10;
  long *plVar18;
  undefined ***pppuVar19;
  long *plVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  long lVar23;
  undefined ***apppuStack_2f8 [3];
  long alStack_2e0 [2];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 uStack_299;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_281;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 *puStack_268;
  undefined1 uStack_260;
  undefined1 uStack_25f;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined **ppuStack_1e8;
  ushort uStack_1e0;
  undefined ***pppuStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  ulong *puStack_1b8;
  long *plStack_1b0;
  undefined ***pppuStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  undefined **appuStack_190 [8];
  long *plStack_150;
  undefined8 *puStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [64];
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [56];
  undefined1 auStack_60 [64];
  
  func_0x0001072ce1d0();
  plVar18 = *(long **)(param_1 + 0x1c8);
  FUN_107262e9c(auStack_60);
  func_0x0001072cfe38(auStack_98);
  puVar14 = auStack_60;
  func_0x0001072cef78(*(undefined8 *)(*plVar18 + 0x50));
  func_0x0001072cf41c();
  func_0x0001072cf7b0();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce934();
  func_0x000104c2f714();
  func_0x0001072cf7b0();
  func_0x0001072ce900();
  pcStack_a8 = FUN_1072b4778;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x0001072ce940();
  func_0x0001072ce248();
  uStack_128 = 0;
  uStack_120 = 0;
  uVar16 = *(ulong *)(puVar14 + 0x10);
  uStack_118 = 0;
  uVar4 = (uVar16 & 1) == 0;
  puVar1 = (ulong *)(puVar14 + 0x10);
  if (!(bool)uVar4) {
    puVar1 = (ulong *)(uVar16 + 7);
  }
  for (lVar23 = (long)*(int *)(puVar14 + 0x18) << 3; lVar23 != 0; lVar23 = lVar23 + -8) {
    func_0x0001072cfec8(*(undefined8 *)(*puVar1 + 0x10),*(undefined8 *)(*puVar1 + 0x18),auStack_110)
    ;
    FUN_10725ade4(&uStack_128,auStack_110);
    puVar1 = puVar1 + 1;
  }
  plVar20 = *(long **)(param_3 + 0x1c8);
  func_0x0001072cf8f8(plVar18[5],auStack_110);
  func_0x0001072cf6bc(*(undefined8 *)(*plVar20 + 0x60));
  func_0x0001072cf0a4();
  puVar7 = &uStack_128;
  FUN_10725aef4();
  func_0x0001072ce098();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072cf0a4();
  puVar8 = &uStack_128;
  FUN_10725aef4();
  func_0x0001072ce900();
  pppuVar9 = appuStack_190;
  iVar13 = (int)appuStack_190;
  pcStack_138 = FUN_1072b484c;
  plStack_150 = plVar20;
  puStack_148 = puVar7;
  ppuStack_140 = &puStack_b0;
  func_0x0001072ce1d0();
  pppuVar19 = (undefined ***)puVar8[0x39];
  FUN_107262e9c();
  func_0x0001072ceb4c((*pppuVar19)[0xd]);
  func_0x0001072cf1cc();
  func_0x0001072ce080();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce928();
  func_0x000104c2f714();
  func_0x0001072ce900();
  pcStack_198 = FUN_1072b48a8;
  lStack_1c0 = lVar23;
  puStack_1b8 = puVar1;
  plStack_1b0 = plVar20;
  pppuStack_1a8 = pppuVar19;
  pppuStack_1a0 = &ppuStack_140;
  func_0x0001072ce328();
  iVar2 = *(int *)(pppuVar9 + 0x61);
  uStack_1c8 = extraout_x8;
  *(int *)(pppuVar9 + 0x61) = iVar13;
  bVar5 = iVar13 == 2;
  bVar6 = iVar2 == 2;
  uVar17 = 0;
  if (bVar6) {
    uVar17 = (ushort)!bVar5;
  }
  uVar4 = bVar5 == bVar6;
  pppuVar10 = pppuVar9;
  if (!(bool)uVar4) {
    if (uVar17 == 0) {
      if (!bVar6 && bVar5) {
        if (pppuVar9[0x45] != (undefined **)0x0) {
          *(undefined1 *)(pppuVar9[0x45] + 6) = 0;
        }
        ppuVar15 = pppuVar9[0x43];
        if ((*(char *)(ppuVar15 + 5) != '\0') && (*(char *)(ppuVar15 + 0x1c) == '\x01')) {
          *(undefined1 *)(ppuVar15 + 0x1c) = 0;
        }
        *(undefined1 *)(ppuVar15 + 5) = 0;
        FUN_1072b3118(pppuVar9);
      }
    }
    else {
      ppuVar15 = pppuVar9[0x45];
      if ((ppuVar15 != (undefined **)0x0) &&
         (*(undefined1 *)(ppuVar15 + 6) = 1, *(char *)(ppuVar15 + 5) == '\x01')) {
        *(undefined1 *)(ppuVar15 + 5) = 0;
      }
      ppuVar15 = pppuVar9[0x43];
      if ((((ulong)ppuVar15[5] & 1) == 0) && (*(char *)(ppuVar15 + 0x1c) == '\x01')) {
        *(undefined1 *)(ppuVar15 + 0x1c) = 0;
      }
      *(undefined1 *)(ppuVar15 + 5) = 1;
    }
    uVar4 = bVar6 || !bVar5;
    uStack_1e0 = 0x100;
    if ((bool)uVar4) {
      uStack_1e0 = 0;
    }
    uStack_1e0 = uStack_1e0 | uVar17;
    ppuStack_1e8 = &PTR_FUN_11099b028;
    pppuStack_1d0 = &ppuStack_1e8;
    FUN_107292e94(pppuVar9[0x16],&ppuStack_1e8);
    pppuVar10 = &ppuStack_1e8;
    func_0x000107283e00();
    pppuVar19 = pppuVar9;
  }
  func_0x0001072ce0cc(uStack_1c8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce934();
  func_0x000107283e00();
  func_0x0001072ce900();
  func_0x0001072ce1e4();
  uStack_248 = extraout_x8_00;
  func_0x0001072cefbc();
  if (pppuVar19[0x15] != (undefined **)0x0) {
    FUN_1072d31fc(pppuVar19[0x23]);
    ppuVar15 = pppuVar19[0x30];
    func_0x00010731d558(ppuVar15);
    ppuVar21 = pppuVar19[0x18];
    __ZNSt3__16chrono12steady_clock3nowEv();
    (**(code **)(*ppuVar21 + 0x38))(ppuVar21,ppuVar15);
    func_0x00010739ed6c(pppuVar19[0x52]);
    (**(code **)(*pppuVar19[0x1a] + 0x58))();
    uStack_281 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_299 = 0;
    ppuVar15 = pppuVar19[0x16];
    puVar7 = &uStack_2d0;
    func_0x0001072cfea4();
    puStack_2b8 = &uStack_281;
    puStack_2b0 = &uStack_298;
    puStack_2a8 = &uStack_299;
    puStack_268 = (undefined8 *)0x0;
    func_0x0001072cf8f0();
    *puVar7 = &PTR_FUN_11099b0a8;
    puVar7[2] = uStack_2c8;
    puVar7[1] = uStack_2d0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    puVar7[3] = uStack_2c0;
    puVar14 = puStack_2b8;
    puVar7[5] = puStack_2b0;
    puVar7[4] = puVar14;
    puVar7[6] = puStack_2a8;
    puStack_268 = puVar7;
    FUN_107292e94(ppuVar15,&uStack_280);
    func_0x000107283e00(&uStack_280);
    func_0x00010725b1d4(&uStack_2d0);
    ppuVar15 = pppuVar19[0x43];
    FUN_1072769d4(&uStack_280,pppuVar19[0x33]);
    uStack_260 = uStack_299;
    uStack_25f = uStack_281;
    uStack_250 = uStack_290;
    uStack_258 = uStack_298;
    FUN_1072df4f4(ppuVar15,&uStack_280);
    puVar11 = &uStack_280;
    func_0x00010794120c();
    puVar22 = pppuVar19[0x43][0x1f];
    puVar3 = pppuVar19[0x43][0x20];
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    do {
      func_0x0001072cfb28();
    } while (extraout_w10 != 0);
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    if ((((ulong)puVar3 & 1) != 0) &&
       (func_0x0001078bc120(puVar11 + 0x70,puVar22,(ulong)puVar22 >> 0x20),
       *(char *)((long)pppuVar19 + 0x2f2) == '\x01')) {
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
    }
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    FUN_1072b2d9c(alStack_2e0);
    if (alStack_2e0[0] != 0) {
      func_0x0001072cf1f8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (apppuStack_2f8,alStack_2e0[0]);
      func_0x0001078bc160(puVar11 + 0x70,&uStack_280,apppuStack_2f8);
      func_0x0001003ac718();
      func_0x0001072ceea4();
    }
    FUN_10724c894(alStack_2e0);
    func_0x0001078bc240(puVar11 + 0x70);
    ppuVar15 = pppuVar19[0x45];
    if (ppuVar15 != (undefined **)0x0) {
      func_0x00010740e088(&uStack_280,pppuVar19[0x15]);
      FUN_1073117c4(CONCAT44(uStack_27c,uStack_280),ppuVar15);
    }
    pppuVar9 = pppuVar19 + 0x70;
    FUN_10724bb70(&uStack_280);
    if (CONCAT44(uStack_27c,uStack_280) != 0) {
      ppuVar15 = pppuVar19[0x6f];
      func_0x0001072cedd4();
      *pppuVar9 = &PTR_FUN_11099b128;
      pppuVar9[1] = ppuVar15;
      pppuVar9[2] = (undefined **)FUN_1072b4ec4;
      pppuVar9[3] = (undefined **)0x0;
      apppuStack_2f8[0] = pppuVar9;
      func_0x0001072cfdc8();
      func_0x0001072cf558();
      if (pppuVar9 != (undefined ***)0x0) {
        func_0x0001072ce338();
      }
    }
    puVar11 = &uStack_280;
    func_0x00010724bcd8();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    puVar12 = puVar11;
    __ZNSt3__16chrono12steady_clock3nowEv();
    pppuVar10 = (undefined ***)(puVar11 + 2);
    func_0x00010743f974(pppuVar10,puVar12);
  }
  if (((ulong)pppuVar19[0x5e] & 1) == 0) {
    func_0x00010785f1f4();
    uStack_280 = 0;
    pppuVar9 = pppuVar10 + 0xd8;
    FUN_1072b86c8(pppuVar9,&uStack_280);
    pppuVar10 = pppuVar9;
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (((int)pppuVar9 != 0) &&
       ((long)((ulong)pppuVar9 & 0xffffffff) < ((long)pppuVar10 - (long)pppuVar19[4]) / 1000000)) {
      func_0x0001072cfa78();
      puStack_268 = (undefined8 *)CONCAT44(puStack_268._4_4_,1);
      pppuVar10 = pppuVar19;
      func_0x0001072cfd24();
      func_0x0001003ac718();
    }
  }
  uVar4 = 0;
  if ((*(char *)(pppuVar19 + 0x5e) == '\x01') &&
     (uVar4 = 0, *(char *)(pppuVar19[0x24] + 7) == '\x01')) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar4 = false;
    if ((*(char *)(pppuVar19 + 0x69) != '\x01') ||
       (uVar4 = (long)pppuVar10 - (long)pppuVar19[0x68] == 0x77359401,
       2000000000 < (long)pppuVar10 - (long)pppuVar19[0x68])) {
      pppuVar9 = pppuVar10;
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      func_0x0001072cf1f8();
      func_0x0001077538cc(pppuVar9 + 0x1b,&uStack_280);
      func_0x0001072ceea4();
      if (((ulong)pppuVar19[0x69] & 1) == 0) {
        *(undefined1 *)(pppuVar19 + 0x69) = 1;
      }
      pppuVar19[0x68] = (undefined **)pppuVar10;
    }
  }
  *(undefined1 *)((long)pppuVar19 + 0x2f2) = 0;
  func_0x0001072cec24();
  func_0x0001072ce0cc(uStack_248);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_280;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001072cec24();
  func_0x0001072ce94c();
  func_0x00010785f1f4();
  plVar18 = (long *)(puVar11 + 0x16c);
  FUN_10724e330();
  if (((uint)plVar18 & 0x101) == 0x100) {
    return;
  }
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  puVar7 = (undefined8 *)*plVar18;
  if (puRam0000000113847068 != (undefined8 *)0x0) {
    puVar7 = puRam0000000113847068;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x0001072b4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar7 + 0x20))();
  return;
}



/* Entry: 1072b4778; end: 1072b484b;  */

void FUN_1072b4778(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 extraout_x8;
  undefined **ppuVar15;
  undefined8 extraout_x8_00;
  ulong uVar16;
  ushort uVar17;
  int extraout_w10;
  long unaff_x19;
  undefined ***pppuVar18;
  long unaff_x20;
  long *plVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  long lVar22;
  undefined ***apppuStack_258 [3];
  long alStack_240 [2];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 *puStack_218;
  undefined8 *puStack_210;
  undefined1 *puStack_208;
  undefined1 uStack_1f9;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e1;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 *puStack_1c8;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_148;
  ushort uStack_140;
  undefined ***pppuStack_130;
  undefined8 uStack_128;
  long lStack_120;
  ulong *puStack_118;
  long *plStack_110;
  undefined ***pppuStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined **appuStack_f0 [8];
  long *plStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [64];
  
  func_0x0001072ce940();
  func_0x0001072ce248();
  uStack_88 = 0;
  uStack_80 = 0;
  uVar16 = *(ulong *)(param_2 + 0x10);
  uStack_78 = 0;
  uVar5 = (uVar16 & 1) == 0;
  puVar1 = (ulong *)(param_2 + 0x10);
  if (!(bool)uVar5) {
    puVar1 = (ulong *)(uVar16 + 7);
  }
  for (lVar22 = (long)*(int *)(param_2 + 0x18) << 3; lVar22 != 0; lVar22 = lVar22 + -8) {
    func_0x0001072cfec8(*(undefined8 *)(*puVar1 + 0x10),*(undefined8 *)(*puVar1 + 0x18),auStack_70);
    FUN_10725ade4(&uStack_88,auStack_70);
    puVar1 = puVar1 + 1;
  }
  plVar19 = *(long **)(unaff_x20 + 0x1c8);
  func_0x0001072cf8f8(*(undefined8 *)(unaff_x19 + 0x28),auStack_70);
  func_0x0001072cf6bc(*(undefined8 *)(*plVar19 + 0x60));
  func_0x0001072cf0a4();
  puVar8 = &uStack_88;
  FUN_10725aef4();
  func_0x0001072ce098();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072cf0a4();
  puVar9 = &uStack_88;
  FUN_10725aef4();
  func_0x0001072ce900();
  pppuVar10 = appuStack_f0;
  iVar14 = (int)appuStack_f0;
  pcStack_98 = FUN_1072b484c;
  plStack_b0 = plVar19;
  puStack_a8 = puVar8;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  pppuVar18 = (undefined ***)puVar9[0x39];
  FUN_107262e9c();
  func_0x0001072ceb4c((*pppuVar18)[0xd]);
  func_0x0001072cf1cc();
  func_0x0001072ce080();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce928();
  func_0x000104c2f714();
  func_0x0001072ce900();
  pcStack_f8 = FUN_1072b48a8;
  lStack_120 = lVar22;
  puStack_118 = puVar1;
  plStack_110 = plVar19;
  pppuStack_108 = pppuVar18;
  ppuStack_100 = &puStack_a0;
  func_0x0001072ce328();
  iVar2 = *(int *)(pppuVar10 + 0x61);
  uStack_128 = extraout_x8;
  *(int *)(pppuVar10 + 0x61) = iVar14;
  bVar6 = iVar14 == 2;
  bVar7 = iVar2 == 2;
  uVar17 = 0;
  if (bVar7) {
    uVar17 = (ushort)!bVar6;
  }
  uVar5 = bVar6 == bVar7;
  pppuVar11 = pppuVar10;
  if (!(bool)uVar5) {
    if (uVar17 == 0) {
      if (!bVar7 && bVar6) {
        if (pppuVar10[0x45] != (undefined **)0x0) {
          *(undefined1 *)(pppuVar10[0x45] + 6) = 0;
        }
        ppuVar15 = pppuVar10[0x43];
        if ((*(char *)(ppuVar15 + 5) != '\0') && (*(char *)(ppuVar15 + 0x1c) == '\x01')) {
          *(undefined1 *)(ppuVar15 + 0x1c) = 0;
        }
        *(undefined1 *)(ppuVar15 + 5) = 0;
        FUN_1072b3118(pppuVar10);
      }
    }
    else {
      ppuVar15 = pppuVar10[0x45];
      if ((ppuVar15 != (undefined **)0x0) &&
         (*(undefined1 *)(ppuVar15 + 6) = 1, *(char *)(ppuVar15 + 5) == '\x01')) {
        *(undefined1 *)(ppuVar15 + 5) = 0;
      }
      ppuVar15 = pppuVar10[0x43];
      if ((((ulong)ppuVar15[5] & 1) == 0) && (*(char *)(ppuVar15 + 0x1c) == '\x01')) {
        *(undefined1 *)(ppuVar15 + 0x1c) = 0;
      }
      *(undefined1 *)(ppuVar15 + 5) = 1;
    }
    uVar5 = bVar7 || !bVar6;
    uStack_140 = 0x100;
    if ((bool)uVar5) {
      uStack_140 = 0;
    }
    uStack_140 = uStack_140 | uVar17;
    ppuStack_148 = &PTR_FUN_11099b028;
    pppuStack_130 = &ppuStack_148;
    FUN_107292e94(pppuVar10[0x16],&ppuStack_148);
    pppuVar11 = &ppuStack_148;
    func_0x000107283e00();
    pppuVar18 = pppuVar10;
  }
  func_0x0001072ce0cc(uStack_128);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce934();
  func_0x000107283e00();
  func_0x0001072ce900();
  func_0x0001072ce1e4();
  uStack_1a8 = extraout_x8_00;
  func_0x0001072cefbc();
  if (pppuVar18[0x15] != (undefined **)0x0) {
    FUN_1072d31fc(pppuVar18[0x23]);
    ppuVar15 = pppuVar18[0x30];
    func_0x00010731d558(ppuVar15);
    ppuVar20 = pppuVar18[0x18];
    __ZNSt3__16chrono12steady_clock3nowEv();
    (**(code **)(*ppuVar20 + 0x38))(ppuVar20,ppuVar15);
    func_0x00010739ed6c(pppuVar18[0x52]);
    (**(code **)(*pppuVar18[0x1a] + 0x58))();
    uStack_1e1 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1f9 = 0;
    ppuVar15 = pppuVar18[0x16];
    puVar8 = &uStack_230;
    func_0x0001072cfea4();
    puStack_218 = &uStack_1e1;
    puStack_210 = &uStack_1f8;
    puStack_208 = &uStack_1f9;
    puStack_1c8 = (undefined8 *)0x0;
    func_0x0001072cf8f0();
    *puVar8 = &PTR_FUN_11099b0a8;
    puVar8[2] = uStack_228;
    puVar8[1] = uStack_230;
    uStack_230 = 0;
    uStack_228 = 0;
    puVar8[3] = uStack_220;
    puVar4 = puStack_218;
    puVar8[5] = puStack_210;
    puVar8[4] = puVar4;
    puVar8[6] = puStack_208;
    puStack_1c8 = puVar8;
    FUN_107292e94(ppuVar15,&uStack_1e0);
    func_0x000107283e00(&uStack_1e0);
    func_0x00010725b1d4(&uStack_230);
    ppuVar15 = pppuVar18[0x43];
    FUN_1072769d4(&uStack_1e0,pppuVar18[0x33]);
    uStack_1c0 = uStack_1f9;
    uStack_1bf = uStack_1e1;
    uStack_1b0 = uStack_1f0;
    uStack_1b8 = uStack_1f8;
    FUN_1072df4f4(ppuVar15,&uStack_1e0);
    puVar12 = &uStack_1e0;
    func_0x00010794120c();
    puVar21 = pppuVar18[0x43][0x1f];
    puVar3 = pppuVar18[0x43][0x20];
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    do {
      func_0x0001072cfb28();
    } while (extraout_w10 != 0);
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    if ((((ulong)puVar3 & 1) != 0) &&
       (func_0x0001078bc120(puVar12 + 0x70,puVar21,(ulong)puVar21 >> 0x20),
       *(char *)((long)pppuVar18 + 0x2f2) == '\x01')) {
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
    }
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    FUN_1072b2d9c(alStack_240);
    if (alStack_240[0] != 0) {
      func_0x0001072cf1f8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (apppuStack_258,alStack_240[0]);
      func_0x0001078bc160(puVar12 + 0x70,&uStack_1e0,apppuStack_258);
      func_0x0001003ac718();
      func_0x0001072ceea4();
    }
    FUN_10724c894(alStack_240);
    func_0x0001078bc240(puVar12 + 0x70);
    ppuVar15 = pppuVar18[0x45];
    if (ppuVar15 != (undefined **)0x0) {
      func_0x00010740e088(&uStack_1e0,pppuVar18[0x15]);
      FUN_1073117c4(CONCAT44(uStack_1dc,uStack_1e0),ppuVar15);
    }
    pppuVar10 = pppuVar18 + 0x70;
    FUN_10724bb70(&uStack_1e0);
    if (CONCAT44(uStack_1dc,uStack_1e0) != 0) {
      ppuVar15 = pppuVar18[0x6f];
      func_0x0001072cedd4();
      *pppuVar10 = &PTR_FUN_11099b128;
      pppuVar10[1] = ppuVar15;
      pppuVar10[2] = (undefined **)FUN_1072b4ec4;
      pppuVar10[3] = (undefined **)0x0;
      apppuStack_258[0] = pppuVar10;
      func_0x0001072cfdc8();
      func_0x0001072cf558();
      if (pppuVar10 != (undefined ***)0x0) {
        func_0x0001072ce338();
      }
    }
    puVar12 = &uStack_1e0;
    func_0x00010724bcd8();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    puVar13 = puVar12;
    __ZNSt3__16chrono12steady_clock3nowEv();
    pppuVar11 = (undefined ***)(puVar12 + 2);
    func_0x00010743f974(pppuVar11,puVar13);
  }
  if (((ulong)pppuVar18[0x5e] & 1) == 0) {
    func_0x00010785f1f4();
    uStack_1e0 = 0;
    pppuVar10 = pppuVar11 + 0xd8;
    FUN_1072b86c8(pppuVar10,&uStack_1e0);
    pppuVar11 = pppuVar10;
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (((int)pppuVar10 != 0) &&
       ((long)((ulong)pppuVar10 & 0xffffffff) < ((long)pppuVar11 - (long)pppuVar18[4]) / 1000000)) {
      func_0x0001072cfa78();
      puStack_1c8 = (undefined8 *)CONCAT44(puStack_1c8._4_4_,1);
      pppuVar11 = pppuVar18;
      func_0x0001072cfd24();
      func_0x0001003ac718();
    }
  }
  uVar5 = 0;
  if ((*(char *)(pppuVar18 + 0x5e) == '\x01') &&
     (uVar5 = 0, *(char *)(pppuVar18[0x24] + 7) == '\x01')) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar5 = false;
    if ((*(char *)(pppuVar18 + 0x69) != '\x01') ||
       (uVar5 = (long)pppuVar11 - (long)pppuVar18[0x68] == 0x77359401,
       2000000000 < (long)pppuVar11 - (long)pppuVar18[0x68])) {
      pppuVar10 = pppuVar11;
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      func_0x0001072cf1f8();
      func_0x0001077538cc(pppuVar10 + 0x1b,&uStack_1e0);
      func_0x0001072ceea4();
      if (((ulong)pppuVar18[0x69] & 1) == 0) {
        *(undefined1 *)(pppuVar18 + 0x69) = 1;
      }
      pppuVar18[0x68] = (undefined **)pppuVar11;
    }
  }
  *(undefined1 *)((long)pppuVar18 + 0x2f2) = 0;
  func_0x0001072cec24();
  func_0x0001072ce0cc(uStack_1a8);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar12 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001072cec24();
  func_0x0001072ce94c();
  func_0x00010785f1f4();
  plVar19 = (long *)(puVar12 + 0x16c);
  FUN_10724e330();
  if (((uint)plVar19 & 0x101) == 0x100) {
    return;
  }
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  puVar8 = (undefined8 *)*plVar19;
  if (puRam0000000113847068 != (undefined8 *)0x0) {
    puVar8 = puRam0000000113847068;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x0001072b4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar8 + 0x20))();
  return;
}



/* Entry: 1072b484c; end: 1072b48a7;  */

void FUN_1072b484c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long *plVar12;
  int iVar13;
  undefined8 extraout_x8;
  undefined **ppuVar14;
  undefined8 extraout_x8_00;
  ushort uVar15;
  int extraout_w10;
  undefined ***pppuVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined ***apppuStack_1c8 [3];
  long alStack_1b0 [2];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 *puStack_180;
  undefined1 *puStack_178;
  undefined1 uStack_169;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_151;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 *puStack_138;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_b8;
  ushort uStack_b0;
  undefined ***pppuStack_a0;
  undefined8 uStack_98;
  undefined **appuStack_60 [8];
  
  pppuVar7 = appuStack_60;
  iVar13 = (int)appuStack_60;
  func_0x0001072ce1d0();
  pppuVar16 = *(undefined ****)(param_1 + 0x1c8);
  FUN_107262e9c();
  func_0x0001072ceb4c((*pppuVar16)[0xd]);
  func_0x0001072cf1cc();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce928();
  func_0x000104c2f714();
  func_0x0001072ce900();
  func_0x0001072ce328();
  iVar1 = *(int *)(pppuVar7 + 0x61);
  uStack_98 = extraout_x8;
  *(int *)(pppuVar7 + 0x61) = iVar13;
  bVar4 = iVar13 == 2;
  bVar5 = iVar1 == 2;
  uVar15 = 0;
  if (bVar5) {
    uVar15 = (ushort)!bVar4;
  }
  uVar6 = bVar4 == bVar5;
  pppuVar8 = pppuVar7;
  if (!(bool)uVar6) {
    if (uVar15 == 0) {
      if (!bVar5 && bVar4) {
        if (pppuVar7[0x45] != (undefined **)0x0) {
          *(undefined1 *)(pppuVar7[0x45] + 6) = 0;
        }
        ppuVar14 = pppuVar7[0x43];
        if ((*(char *)(ppuVar14 + 5) != '\0') && (*(char *)(ppuVar14 + 0x1c) == '\x01')) {
          *(undefined1 *)(ppuVar14 + 0x1c) = 0;
        }
        *(undefined1 *)(ppuVar14 + 5) = 0;
        FUN_1072b3118(pppuVar7);
      }
    }
    else {
      ppuVar14 = pppuVar7[0x45];
      if ((ppuVar14 != (undefined **)0x0) &&
         (*(undefined1 *)(ppuVar14 + 6) = 1, *(char *)(ppuVar14 + 5) == '\x01')) {
        *(undefined1 *)(ppuVar14 + 5) = 0;
      }
      ppuVar14 = pppuVar7[0x43];
      if ((((ulong)ppuVar14[5] & 1) == 0) && (*(char *)(ppuVar14 + 0x1c) == '\x01')) {
        *(undefined1 *)(ppuVar14 + 0x1c) = 0;
      }
      *(undefined1 *)(ppuVar14 + 5) = 1;
    }
    uVar6 = bVar5 || !bVar4;
    uStack_b0 = 0x100;
    if ((bool)uVar6) {
      uStack_b0 = 0;
    }
    uStack_b0 = uStack_b0 | uVar15;
    ppuStack_b8 = &PTR_FUN_11099b028;
    pppuStack_a0 = &ppuStack_b8;
    FUN_107292e94(pppuVar7[0x16],&ppuStack_b8);
    pppuVar8 = &ppuStack_b8;
    func_0x000107283e00();
    pppuVar16 = pppuVar7;
  }
  func_0x0001072ce0cc(uStack_98);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x0001072ce934();
    func_0x000107283e00();
    func_0x0001072ce900();
    func_0x0001072ce1e4();
    uStack_118 = extraout_x8_00;
    func_0x0001072cefbc();
    if (pppuVar16[0x15] != (undefined **)0x0) {
      FUN_1072d31fc(pppuVar16[0x23]);
      ppuVar14 = pppuVar16[0x30];
      func_0x00010731d558(ppuVar14);
      ppuVar17 = pppuVar16[0x18];
      __ZNSt3__16chrono12steady_clock3nowEv();
      (**(code **)(*ppuVar17 + 0x38))(ppuVar17,ppuVar14);
      func_0x00010739ed6c(pppuVar16[0x52]);
      (**(code **)(*pppuVar16[0x1a] + 0x58))();
      uStack_151 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_169 = 0;
      ppuVar14 = pppuVar16[0x16];
      puVar9 = &uStack_1a0;
      func_0x0001072cfea4();
      puStack_188 = &uStack_151;
      puStack_180 = &uStack_168;
      puStack_178 = &uStack_169;
      puStack_138 = (undefined8 *)0x0;
      func_0x0001072cf8f0();
      *puVar9 = &PTR_FUN_11099b0a8;
      puVar9[2] = uStack_198;
      puVar9[1] = uStack_1a0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      puVar9[3] = uStack_190;
      puVar3 = puStack_188;
      puVar9[5] = puStack_180;
      puVar9[4] = puVar3;
      puVar9[6] = puStack_178;
      puStack_138 = puVar9;
      FUN_107292e94(ppuVar14,&uStack_150);
      func_0x000107283e00(&uStack_150);
      func_0x00010725b1d4(&uStack_1a0);
      ppuVar14 = pppuVar16[0x43];
      FUN_1072769d4(&uStack_150,pppuVar16[0x33]);
      uStack_130 = uStack_169;
      uStack_12f = uStack_151;
      uStack_120 = uStack_160;
      uStack_128 = uStack_168;
      FUN_1072df4f4(ppuVar14,&uStack_150);
      puVar10 = &uStack_150;
      func_0x00010794120c();
      puVar18 = pppuVar16[0x43][0x1f];
      puVar2 = pppuVar16[0x43][0x20];
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      do {
        func_0x0001072cfb28();
      } while (extraout_w10 != 0);
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
      if ((((ulong)puVar2 & 1) != 0) &&
         (func_0x0001078bc120(puVar10 + 0x70,puVar18,(ulong)puVar18 >> 0x20),
         *(char *)((long)pppuVar16 + 0x2f2) == '\x01')) {
        func_0x0001072cf1f8();
        func_0x0001072ced60();
        func_0x0001072ceea4();
      }
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
      FUN_1072b2d9c(alStack_1b0);
      if (alStack_1b0[0] != 0) {
        func_0x0001072cf1f8();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (apppuStack_1c8,alStack_1b0[0]);
        func_0x0001078bc160(puVar10 + 0x70,&uStack_150,apppuStack_1c8);
        func_0x0001003ac718();
        func_0x0001072ceea4();
      }
      FUN_10724c894(alStack_1b0);
      func_0x0001078bc240(puVar10 + 0x70);
      ppuVar14 = pppuVar16[0x45];
      if (ppuVar14 != (undefined **)0x0) {
        func_0x00010740e088(&uStack_150,pppuVar16[0x15]);
        FUN_1073117c4(CONCAT44(uStack_14c,uStack_150),ppuVar14);
      }
      pppuVar7 = pppuVar16 + 0x70;
      FUN_10724bb70(&uStack_150);
      if (CONCAT44(uStack_14c,uStack_150) != 0) {
        ppuVar14 = pppuVar16[0x6f];
        func_0x0001072cedd4();
        *pppuVar7 = &PTR_FUN_11099b128;
        pppuVar7[1] = ppuVar14;
        pppuVar7[2] = (undefined **)FUN_1072b4ec4;
        pppuVar7[3] = (undefined **)0x0;
        apppuStack_1c8[0] = pppuVar7;
        func_0x0001072cfdc8();
        func_0x0001072cf558();
        if (pppuVar7 != (undefined ***)0x0) {
          func_0x0001072ce338();
        }
      }
      puVar10 = &uStack_150;
      func_0x00010724bcd8();
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      puVar11 = puVar10;
      __ZNSt3__16chrono12steady_clock3nowEv();
      pppuVar8 = (undefined ***)(puVar10 + 2);
      func_0x00010743f974(pppuVar8,puVar11);
    }
    if (((ulong)pppuVar16[0x5e] & 1) == 0) {
      func_0x00010785f1f4();
      uStack_150 = 0;
      pppuVar7 = pppuVar8 + 0xd8;
      FUN_1072b86c8(pppuVar7,&uStack_150);
      pppuVar8 = pppuVar7;
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (((int)pppuVar7 != 0) &&
         ((long)((ulong)pppuVar7 & 0xffffffff) < ((long)pppuVar8 - (long)pppuVar16[4]) / 1000000)) {
        func_0x0001072cfa78();
        puStack_138 = (undefined8 *)CONCAT44(puStack_138._4_4_,1);
        pppuVar8 = pppuVar16;
        func_0x0001072cfd24();
        func_0x0001003ac718();
      }
    }
    uVar6 = 0;
    if ((*(char *)(pppuVar16 + 0x5e) == '\x01') &&
       (uVar6 = 0, *(char *)(pppuVar16[0x24] + 7) == '\x01')) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar6 = false;
      if ((*(char *)(pppuVar16 + 0x69) != '\x01') ||
         (uVar6 = (long)pppuVar8 - (long)pppuVar16[0x68] == 0x77359401,
         2000000000 < (long)pppuVar8 - (long)pppuVar16[0x68])) {
        pppuVar7 = pppuVar8;
        func_0x0001077f3c4c();
        func_0x0001077f3790();
        func_0x0001072cf1f8();
        func_0x0001077538cc(pppuVar7 + 0x1b,&uStack_150);
        func_0x0001072ceea4();
        if (((ulong)pppuVar16[0x69] & 1) == 0) {
          *(undefined1 *)(pppuVar16 + 0x69) = 1;
        }
        pppuVar16[0x68] = (undefined **)pppuVar8;
      }
    }
    *(undefined1 *)((long)pppuVar16 + 0x2f2) = 0;
    func_0x0001072cec24();
    func_0x0001072ce0cc(uStack_118);
    if (!(bool)uVar6) {
      ___stack_chk_fail();
      puVar10 = &uStack_150;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0001072cec24();
      func_0x0001072ce94c();
      func_0x00010785f1f4();
      plVar12 = (long *)(puVar10 + 0x16c);
      FUN_10724e330();
      if (((uint)plVar12 & 0x101) != 0x100) {
        func_0x0001077f3c4c();
        func_0x0001077f3790();
        puVar9 = (undefined8 *)*plVar12;
        if (puRam0000000113847068 != (undefined8 *)0x0) {
          puVar9 = puRam0000000113847068;
        }
        __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x0001072b4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)*puVar9 + 0x20))();
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1072b48a8; end: 1072b49d7;  */

void FUN_1072b48a8(undefined ***param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined ***pppuVar11;
  long *plVar12;
  undefined8 extraout_x8;
  undefined **ppuVar13;
  undefined8 extraout_x8_00;
  ushort uVar14;
  int extraout_w10;
  undefined ***unaff_x19;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined ***apppuStack_168 [3];
  long alStack_150 [2];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 *puStack_120;
  undefined1 *puStack_118;
  undefined1 uStack_109;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f1;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *puStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_58;
  ushort uStack_50;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  func_0x0001072ce328();
  iVar1 = *(int *)(param_1 + 0x61);
  *(int *)(param_1 + 0x61) = param_2;
  bVar4 = param_2 == 2;
  bVar5 = iVar1 == 2;
  uVar14 = 0;
  if (bVar5) {
    uVar14 = (ushort)!bVar4;
  }
  uVar6 = bVar4 == bVar5;
  pppuVar7 = param_1;
  uStack_38 = extraout_x8;
  if (!(bool)uVar6) {
    if (uVar14 == 0) {
      if (!bVar5 && bVar4) {
        if (param_1[0x45] != (undefined **)0x0) {
          *(undefined1 *)(param_1[0x45] + 6) = 0;
        }
        ppuVar13 = param_1[0x43];
        if ((*(char *)(ppuVar13 + 5) != '\0') && (*(char *)(ppuVar13 + 0x1c) == '\x01')) {
          *(undefined1 *)(ppuVar13 + 0x1c) = 0;
        }
        *(undefined1 *)(ppuVar13 + 5) = 0;
        FUN_1072b3118(param_1);
      }
    }
    else {
      ppuVar13 = param_1[0x45];
      if ((ppuVar13 != (undefined **)0x0) &&
         (*(undefined1 *)(ppuVar13 + 6) = 1, *(char *)(ppuVar13 + 5) == '\x01')) {
        *(undefined1 *)(ppuVar13 + 5) = 0;
      }
      ppuVar13 = param_1[0x43];
      if ((((ulong)ppuVar13[5] & 1) == 0) && (*(char *)(ppuVar13 + 0x1c) == '\x01')) {
        *(undefined1 *)(ppuVar13 + 0x1c) = 0;
      }
      *(undefined1 *)(ppuVar13 + 5) = 1;
    }
    uVar6 = bVar5 || !bVar4;
    uStack_50 = 0x100;
    if ((bool)uVar6) {
      uStack_50 = 0;
    }
    uStack_50 = uStack_50 | uVar14;
    ppuStack_58 = &PTR_FUN_11099b028;
    pppuStack_40 = &ppuStack_58;
    FUN_107292e94(param_1[0x16],&ppuStack_58);
    pppuVar7 = &ppuStack_58;
    func_0x000107283e00();
    unaff_x19 = param_1;
  }
  func_0x0001072ce0cc(uStack_38);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x0001072ce934();
    func_0x000107283e00();
    func_0x0001072ce900();
    func_0x0001072ce1e4();
    uStack_b8 = extraout_x8_00;
    func_0x0001072cefbc();
    if (unaff_x19[0x15] != (undefined **)0x0) {
      FUN_1072d31fc(unaff_x19[0x23]);
      ppuVar13 = unaff_x19[0x30];
      func_0x00010731d558(ppuVar13);
      ppuVar15 = unaff_x19[0x18];
      __ZNSt3__16chrono12steady_clock3nowEv();
      (**(code **)(*ppuVar15 + 0x38))(ppuVar15,ppuVar13);
      func_0x00010739ed6c(unaff_x19[0x52]);
      (**(code **)(*unaff_x19[0x1a] + 0x58))();
      uStack_f1 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_109 = 0;
      ppuVar13 = unaff_x19[0x16];
      puVar8 = &uStack_140;
      func_0x0001072cfea4();
      puStack_128 = &uStack_f1;
      puStack_120 = &uStack_108;
      puStack_118 = &uStack_109;
      puStack_d8 = (undefined8 *)0x0;
      func_0x0001072cf8f0();
      *puVar8 = &PTR_FUN_11099b0a8;
      puVar8[2] = uStack_138;
      puVar8[1] = uStack_140;
      uStack_140 = 0;
      uStack_138 = 0;
      puVar8[3] = uStack_130;
      puVar3 = puStack_128;
      puVar8[5] = puStack_120;
      puVar8[4] = puVar3;
      puVar8[6] = puStack_118;
      puStack_d8 = puVar8;
      FUN_107292e94(ppuVar13,&uStack_f0);
      func_0x000107283e00(&uStack_f0);
      func_0x00010725b1d4(&uStack_140);
      ppuVar13 = unaff_x19[0x43];
      FUN_1072769d4(&uStack_f0,unaff_x19[0x33]);
      uStack_d0 = uStack_109;
      uStack_cf = uStack_f1;
      uStack_c0 = uStack_100;
      uStack_c8 = uStack_108;
      FUN_1072df4f4(ppuVar13,&uStack_f0);
      puVar9 = &uStack_f0;
      func_0x00010794120c();
      puVar16 = unaff_x19[0x43][0x1f];
      puVar2 = unaff_x19[0x43][0x20];
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      do {
        func_0x0001072cfb28();
      } while (extraout_w10 != 0);
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
      if ((((ulong)puVar2 & 1) != 0) &&
         (func_0x0001078bc120(puVar9 + 0x70,puVar16,(ulong)puVar16 >> 0x20),
         *(char *)((long)unaff_x19 + 0x2f2) == '\x01')) {
        func_0x0001072cf1f8();
        func_0x0001072ced60();
        func_0x0001072ceea4();
      }
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
      FUN_1072b2d9c(alStack_150);
      if (alStack_150[0] != 0) {
        func_0x0001072cf1f8();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (apppuStack_168,alStack_150[0]);
        func_0x0001078bc160(puVar9 + 0x70,&uStack_f0,apppuStack_168);
        func_0x0001003ac718();
        func_0x0001072ceea4();
      }
      FUN_10724c894(alStack_150);
      func_0x0001078bc240(puVar9 + 0x70);
      ppuVar13 = unaff_x19[0x45];
      if (ppuVar13 != (undefined **)0x0) {
        func_0x00010740e088(&uStack_f0,unaff_x19[0x15]);
        FUN_1073117c4(CONCAT44(uStack_ec,uStack_f0),ppuVar13);
      }
      pppuVar7 = unaff_x19 + 0x70;
      FUN_10724bb70(&uStack_f0);
      if (CONCAT44(uStack_ec,uStack_f0) != 0) {
        ppuVar13 = unaff_x19[0x6f];
        func_0x0001072cedd4();
        *pppuVar7 = &PTR_FUN_11099b128;
        pppuVar7[1] = ppuVar13;
        pppuVar7[2] = (undefined **)FUN_1072b4ec4;
        pppuVar7[3] = (undefined **)0x0;
        apppuStack_168[0] = pppuVar7;
        func_0x0001072cfdc8();
        func_0x0001072cf558();
        if (pppuVar7 != (undefined ***)0x0) {
          func_0x0001072ce338();
        }
      }
      puVar9 = &uStack_f0;
      func_0x00010724bcd8();
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      puVar10 = puVar9;
      __ZNSt3__16chrono12steady_clock3nowEv();
      pppuVar7 = (undefined ***)(puVar9 + 2);
      func_0x00010743f974(pppuVar7,puVar10);
    }
    if (((ulong)unaff_x19[0x5e] & 1) == 0) {
      func_0x00010785f1f4();
      uStack_f0 = 0;
      pppuVar11 = pppuVar7 + 0xd8;
      FUN_1072b86c8(pppuVar11,&uStack_f0);
      pppuVar7 = pppuVar11;
      __ZNSt3__16chrono12steady_clock3nowEv();
      if (((int)pppuVar11 != 0) &&
         ((long)((ulong)pppuVar11 & 0xffffffff) < ((long)pppuVar7 - (long)unaff_x19[4]) / 1000000))
      {
        func_0x0001072cfa78();
        puStack_d8 = (undefined8 *)CONCAT44(puStack_d8._4_4_,1);
        pppuVar7 = unaff_x19;
        func_0x0001072cfd24();
        func_0x0001003ac718();
      }
    }
    uVar6 = 0;
    if ((*(char *)(unaff_x19 + 0x5e) == '\x01') &&
       (uVar6 = 0, *(char *)(unaff_x19[0x24] + 7) == '\x01')) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar6 = false;
      if ((*(char *)(unaff_x19 + 0x69) != '\x01') ||
         (uVar6 = (long)pppuVar7 - (long)unaff_x19[0x68] == 0x77359401,
         2000000000 < (long)pppuVar7 - (long)unaff_x19[0x68])) {
        pppuVar11 = pppuVar7;
        func_0x0001077f3c4c();
        func_0x0001077f3790();
        func_0x0001072cf1f8();
        func_0x0001077538cc(pppuVar11 + 0x1b,&uStack_f0);
        func_0x0001072ceea4();
        if (((ulong)unaff_x19[0x69] & 1) == 0) {
          *(undefined1 *)(unaff_x19 + 0x69) = 1;
        }
        unaff_x19[0x68] = (undefined **)pppuVar7;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x2f2) = 0;
    func_0x0001072cec24();
    func_0x0001072ce0cc(uStack_b8);
    if (!(bool)uVar6) {
      ___stack_chk_fail();
      puVar9 = &uStack_f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0001072cec24();
      func_0x0001072ce94c();
      func_0x00010785f1f4();
      plVar12 = (long *)(puVar9 + 0x16c);
      FUN_10724e330();
      if (((uint)plVar12 & 0x101) != 0x100) {
        func_0x0001077f3c4c();
        func_0x0001077f3790();
        puVar8 = (undefined8 *)*plVar12;
        if (puRam0000000113847068 != (undefined8 *)0x0) {
          puVar8 = puRam0000000113847068;
        }
        __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x0001072b4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)*puVar8 + 0x20))();
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 1072b49d8; end: 1072b4ec3;  */

void FUN_1072b49d8(undefined4 *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined4 *unaff_x19;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *apuStack_108 [3];
  long alStack_f0 [2];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 uStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_91;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *puStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001072ce1e4();
  uStack_58 = extraout_x8;
  func_0x0001072cefbc();
  if (*(long *)(unaff_x19 + 0x2a) != 0) {
    FUN_1072d31fc(*(undefined8 *)(unaff_x19 + 0x46));
    uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
    func_0x00010731d558(uVar4);
    plVar7 = *(long **)(unaff_x19 + 0x30);
    __ZNSt3__16chrono12steady_clock3nowEv();
    (**(code **)(*plVar7 + 0x38))(plVar7,uVar4);
    func_0x00010739ed6c(*(undefined8 *)(unaff_x19 + 0xa4));
    (**(code **)(**(long **)(unaff_x19 + 0x34) + 0x58))();
    uStack_91 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_a9 = 0;
    uVar4 = *(undefined8 *)(unaff_x19 + 0x2c);
    puVar5 = &uStack_e0;
    func_0x0001072cfea4();
    puStack_c8 = &uStack_91;
    puStack_c0 = &uStack_a8;
    puStack_b8 = &uStack_a9;
    puStack_78 = (undefined8 *)0x0;
    func_0x0001072cf8f0();
    *puVar5 = &PTR_FUN_11099b0a8;
    puVar5[2] = uStack_d8;
    puVar5[1] = uStack_e0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    puVar5[3] = uStack_d0;
    puVar2 = puStack_c8;
    puVar5[5] = puStack_c0;
    puVar5[4] = puVar2;
    puVar5[6] = puStack_b8;
    puStack_78 = puVar5;
    FUN_107292e94(uVar4,&uStack_90);
    func_0x000107283e00(&uStack_90);
    func_0x00010725b1d4(&uStack_e0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x86);
    FUN_1072769d4(&uStack_90,*(undefined8 *)(unaff_x19 + 0x66));
    uStack_70 = uStack_a9;
    uStack_6f = uStack_91;
    uStack_60 = uStack_a0;
    uStack_68 = uStack_a8;
    FUN_1072df4f4(uVar4,&uStack_90);
    puVar6 = &uStack_90;
    func_0x00010794120c();
    uVar9 = *(ulong *)(*(long *)(unaff_x19 + 0x86) + 0xf8);
    uVar1 = *(uint *)(*(long *)(unaff_x19 + 0x86) + 0x100);
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    do {
      func_0x0001072cfb28();
    } while (extraout_w10 != 0);
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    if (((uVar1 & 1) != 0) &&
       (func_0x0001078bc120(puVar6 + 0x70,uVar9,uVar9 >> 0x20),
       *(char *)((long)unaff_x19 + 0x2f2) == '\x01')) {
      func_0x0001072cf1f8();
      func_0x0001072ced60();
      func_0x0001072ceea4();
    }
    func_0x0001072cf1f8();
    func_0x0001072ced60();
    func_0x0001072ceea4();
    FUN_1072b2d9c(alStack_f0);
    if (alStack_f0[0] != 0) {
      func_0x0001072cf1f8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (apuStack_108,alStack_f0[0]);
      func_0x0001078bc160(puVar6 + 0x70,&uStack_90,apuStack_108);
      func_0x0001003ac718();
      func_0x0001072ceea4();
    }
    FUN_10724c894(alStack_f0);
    func_0x0001078bc240(puVar6 + 0x70);
    lVar8 = *(long *)(unaff_x19 + 0x8a);
    if (lVar8 != 0) {
      func_0x00010740e088(&uStack_90,*(undefined8 *)(unaff_x19 + 0x2a));
      FUN_1073117c4(CONCAT44(uStack_8c,uStack_90),lVar8);
    }
    puVar5 = (undefined8 *)(unaff_x19 + 0xe0);
    FUN_10724bb70(&uStack_90);
    if (CONCAT44(uStack_8c,uStack_90) != 0) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0xde);
      func_0x0001072cedd4();
      *puVar5 = &PTR_FUN_11099b128;
      puVar5[1] = uVar4;
      puVar5[2] = FUN_1072b4ec4;
      puVar5[3] = 0;
      apuStack_108[0] = puVar5;
      func_0x0001072cfdc8();
      func_0x0001072cf558();
      if (puVar5 != (undefined8 *)0x0) {
        func_0x0001072ce338();
      }
    }
    param_1 = &uStack_90;
    func_0x00010724bcd8();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    puVar6 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    param_1 = param_1 + 2;
    func_0x00010743f974(param_1,puVar6);
  }
  if ((*(byte *)(unaff_x19 + 0xbc) & 1) == 0) {
    func_0x00010785f1f4();
    uStack_90 = 0;
    puVar6 = param_1 + 0x1b0;
    FUN_1072b86c8(puVar6,&uStack_90);
    param_1 = puVar6;
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (((int)puVar6 != 0) &&
       ((long)((ulong)puVar6 & 0xffffffff) < ((long)param_1 - *(long *)(unaff_x19 + 8)) / 1000000))
    {
      func_0x0001072cfa78();
      puStack_78 = (undefined8 *)CONCAT44(puStack_78._4_4_,1);
      param_1 = unaff_x19;
      func_0x0001072cfd24();
      func_0x0001003ac718();
    }
  }
  uVar3 = 0;
  if ((*(char *)(unaff_x19 + 0xbc) == '\x01') &&
     (uVar3 = 0, *(char *)(*(long *)(unaff_x19 + 0x48) + 0x38) == '\x01')) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar3 = false;
    if ((*(char *)(unaff_x19 + 0xd2) != '\x01') ||
       (uVar3 = (long)param_1 - *(long *)(unaff_x19 + 0xd0) == 0x77359401,
       2000000000 < (long)param_1 - *(long *)(unaff_x19 + 0xd0))) {
      puVar6 = param_1;
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      func_0x0001072cf1f8();
      func_0x0001077538cc(puVar6 + 0x36,&uStack_90);
      func_0x0001072ceea4();
      if ((*(byte *)(unaff_x19 + 0xd2) & 1) == 0) {
        *(undefined1 *)(unaff_x19 + 0xd2) = 1;
      }
      *(undefined4 **)(unaff_x19 + 0xd0) = param_1;
    }
  }
  *(undefined1 *)((long)unaff_x19 + 0x2f2) = 0;
  func_0x0001072cec24();
  func_0x0001072ce0cc(uStack_58);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    puVar6 = &uStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001072cec24();
    func_0x0001072ce94c();
    func_0x00010785f1f4();
    plVar7 = (long *)(puVar6 + 0x16c);
    FUN_10724e330();
    if (((uint)plVar7 & 0x101) != 0x100) {
      func_0x0001077f3c4c();
      func_0x0001077f3790();
      puVar5 = (undefined8 *)*plVar7;
      if (puRam0000000113847068 != (undefined8 *)0x0) {
        puVar5 = puRam0000000113847068;
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x0001072b4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*puVar5 + 0x20))();
      return;
    }
    return;
  }
  return;
}



/* Entry: 1072b4ec4; end: 1072b4f2b;  */

void FUN_1072b4ec4(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  func_0x00010785f1f4();
  plVar2 = (long *)(param_1 + 0x5b0);
  FUN_10724e330();
  if (((uint)plVar2 & 0x101) == 0x100) {
    return;
  }
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  puVar1 = (undefined8 *)*plVar2;
  if (puRam0000000113847068 != (undefined8 *)0x0) {
    puVar1 = puRam0000000113847068;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
                    /* WARNING: Could not recover jumptable at 0x0001072b4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x20))();
  return;
}



/* Entry: 1072b4f2c; end: 1072b52cb;  */

undefined *** FUN_1072b4f2c(long param_1,uint param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  undefined ***pppuVar5;
  uint uVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 auStack_1a0 [2];
  undefined4 uStack_198;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined **ppuStack_178;
  ushort uStack_170;
  undefined ***pppuStack_160;
  undefined1 uStack_12c;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_58;
  
  lVar4 = param_1;
  uVar6 = param_2;
  func_0x0001072ce328();
  uStack_58 = extraout_x8;
  if ((uVar6 != 0) && ((*(byte *)(param_1 + 0x2f0) & 1) == 0)) {
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    func_0x0001072cf610();
    lVar4 = lVar4 + 0xd8;
    func_0x0001077538cc(lVar4,&ppuStack_178);
    func_0x0001072cf608();
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    puVar1 = (undefined8 *)(lVar4 + 8);
    if (*(int *)(param_4 + 0x18) == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0xa8);
      func_0x0001072cf610();
      FUN_1072b6de4(puVar1,uVar8,&ppuStack_178);
      func_0x0001072cf608();
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x0001072ce954(0xd);
      func_0x0001072d029c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1a0,param_3);
      FUN_10726e300(&ppuStack_178,&DAT_10f3ae843,auStack_1a0);
      FUN_1072cd35c();
      FUN_1072bbe40();
      func_0x0001072d0128();
      func_0x00010743f9dc(puVar1);
      func_0x0001072cf43c();
      func_0x0001072cf600();
      if (*(char *)(param_4 + 0x10) == '\x01') {
        func_0x0001072ce954(0x29);
        func_0x0001072d029c();
        uStack_188 = *(undefined8 *)(param_4 + 8);
        uStack_180 = 5;
        uStack_1b0 = *puVar1;
        uStack_1a8 = 3;
        func_0x00010743fa44(puVar1,&ppuStack_178,&uStack_188,&uStack_1b0,7);
        func_0x0001072cf600();
      }
    }
    else {
      func_0x0001072ce954(0xe);
      uStack_12c = 1;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_128 = 0;
      FUN_1072cd35c(&ppuStack_178);
      auStack_1a0[0] = 1;
      uStack_198 = 0;
      func_0x0001072d0128();
      func_0x0001072cf8ac(puVar1,&ppuStack_178,auStack_1a0,&uStack_188);
      func_0x0001072cf600();
      plVar7 = *(long **)(param_1 + 0xd0);
      func_0x0001072d00e4();
      ppuStack_178 = (undefined **)CONCAT44(ppuStack_178._4_4_,6);
      uStack_170 = CONCAT11(uStack_170._1_1_,1);
      (**(code **)(*plVar7 + 0x30))(plVar7,auStack_1a0,&ppuStack_178);
      func_0x000104c3323c(&ppuStack_178);
      func_0x0001072cf43c();
    }
    func_0x0001072d0374();
    (**(code **)(extraout_x8_00 + 0x20))(&ppuStack_178);
    FUN_1072b86f4(puVar1,&UNK_10de2cea4,uStack_128 & 0xffff,uStack_110);
    FUN_1072bbee8(&ppuStack_178);
  }
  bVar2 = *(byte *)(param_1 + 0x2f0);
  *(char *)(param_1 + 0x2f0) = (char)param_2;
  plVar7 = *(long **)(param_1 + 0xd0);
  func_0x0001072d00e4();
  ppuStack_178 = (undefined **)CONCAT44(ppuStack_178._4_4_,6);
  uStack_170 = CONCAT11(uStack_170._1_1_,(char)param_2);
  func_0x0001072cf670(*(undefined8 *)(*plVar7 + 0x30));
  func_0x000104c3323c(&ppuStack_178);
  func_0x0001072cf43c();
  uStack_170 = 0;
  if (bVar2 != param_2) {
    uStack_170 = 0x100;
  }
  ppuStack_178 = &PTR_FUN_11099b958;
  uStack_170 = uStack_170 | (ushort)param_2;
  pppuStack_160 = &ppuStack_178;
  FUN_107292e94(*(undefined8 *)(param_1 + 0xb0),&ppuStack_178);
  pppuVar5 = &ppuStack_178;
  func_0x000107283e00();
  uVar3 = bVar2 == param_2;
  if (!(bool)uVar3) {
    if (param_2 != 0) {
      pppuStack_160 = &ppuStack_178;
      ppuStack_178 = &PTR_DAT_11099b9e8;
      (**(code **)(**(long **)(param_1 + 0x1c8) + 0x80))(*(long **)(param_1 + 0x1c8),&ppuStack_178);
      pppuVar5 = &ppuStack_178;
      FUN_1072caf58();
    }
    func_0x0001072d0374();
    (**(code **)(extraout_x8_01 + 0x58))();
  }
  func_0x0001072ce0cc(uStack_58);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001072cf600();
    func_0x0001072ce900();
    func_0x0001072ce444();
    func_0x0001072bc98c();
    return pppuVar5;
  }
  return pppuVar5;
}



/* Entry: 1072b52cc; end: 1072b52ef;  */

void FUN_1072b52cc(void)

{
  func_0x0001072ce444();
  func_0x0001072bc98c();
  return;
}



/* Entry: 1072b52f0; end: 1072b52ff;  */

void FUN_1072b52f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072cff14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x158) + 0x10))();
  return;
}



/* Entry: 1072b5300; end: 1072b543f;  */

void FUN_1072b5300(void)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x19;
  long *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 uStack_b8;
  undefined4 auStack_b0 [2];
  undefined1 uStack_a8;
  undefined8 uStack_58;
  char cStack_50;
  
  func_0x0001003ac1fc();
  func_0x0001072ce1d0();
  func_0x0001072cefbc();
  if (*(long *)(unaff_x19 + 0xa8) != 0) {
    auStack_d8[0] = 0;
    uStack_b8 = 0;
    func_0x00010740e07c(auStack_b0,*(long *)(unaff_x19 + 0xa8),auStack_d8);
    FUN_1072b5440();
    if (*(long *)(unaff_x19 + 0x290) != 0) {
      func_0x00010740e0f0(auStack_d8,*(undefined8 *)(unaff_x19 + 0xa8),auStack_b0);
      in_ZR = cStack_50 == '\0';
      if ((bool)in_ZR) {
        uStack_58 = 0;
      }
      func_0x00010739ed74(uStack_58,*(undefined8 *)(unaff_x19 + 0x290),auStack_d8);
    }
  }
  func_0x0001072cf9a8();
  (**(code **)(extraout_x8 + 0x18))();
  plVar5 = *(long **)(unaff_x19 + 0xd0);
  func_0x0001072cfa78();
  auStack_b0[0] = 6;
  uStack_a8 = 1;
  uVar3 = SUB81(auStack_b0,0);
  func_0x0001072cf6bc(*(undefined8 *)(*plVar5 + 0x30));
  puVar1 = auStack_b0;
  func_0x000104c3323c();
  func_0x0001003ac718();
  if (*(long *)(unaff_x19 + 0xa8) != 0) {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x2f8);
    FUN_1072b54d0(*(undefined8 *)(unaff_x19 + 0xd0),*(long *)(unaff_x19 + 0xa8),uVar4,
                  *(undefined8 *)(unaff_x19 + 0x300));
    uVar3 = (undefined1)uVar4;
    puVar1 = *(undefined4 **)(unaff_x19 + 0xa8);
    func_0x0001072d0034();
  }
  func_0x0001072cec24();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x0001072cec24();
  func_0x0001072ce94c();
  func_0x0001003ac1fc();
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_1072b60fc();
  if ((*(byte *)(unaff_x19 + 0x318) & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x318) = 1;
  }
  *(undefined4 **)(unaff_x19 + 0x310) = puVar2;
  *(undefined1 *)(unaff_x19 + 800) = uVar3;
  *(undefined1 *)(unaff_x19 + 0x321) = 0;
  uVar4 = *(undefined8 *)(puVar1 + 0x16);
  if (*(char *)(puVar1 + 0x18) == '\0') {
    uVar4 = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x328) = uVar4;
  uVar4 = *(undefined8 *)(puVar1 + 0x1e);
  if (*(char *)(puVar1 + 0x20) == '\0') {
    uVar4 = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x330) = uVar4;
  uVar4 = *(undefined8 *)(puVar1 + 0x1a);
  if (*(char *)(puVar1 + 0x1c) == '\0') {
    uVar4 = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x338) = uVar4;
  return;
}



/* Entry: 1072b5440; end: 1072b54cf;  */

void FUN_1072b5440(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001003ac1fc();
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_1072b60fc();
  if ((*(byte *)(unaff_x19 + 0x318) & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x318) = 1;
  }
  *(undefined8 *)(unaff_x19 + 0x310) = param_1;
  *(undefined1 *)(unaff_x19 + 800) = param_3;
  *(undefined1 *)(unaff_x19 + 0x321) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  if (*(char *)(unaff_x20 + 0x60) == '\0') {
    uVar1 = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x328) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  if (*(char *)(unaff_x20 + 0x80) == '\0') {
    uVar1 = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x330) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  if (*(char *)(unaff_x20 + 0x70) == '\0') {
    uVar1 = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x338) = uVar1;
  return;
}



/* Entry: 1072b54d0; end: 1072b5e13;  */

void FUN_1072b54d0(undefined8 param_1,long *param_2,double param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  uint uVar6;
  double dVar8;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_248;
  double dStack_240;
  char cStack_238;
  double dStack_1f0;
  byte bStack_1e8;
  double dStack_1e0;
  byte bStack_1d8;
  double dStack_1d0;
  byte bStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [24];
  double dStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined4 uStack_c8;
  long lStack_10;
  undefined8 uStack_8;
  double dVar7;
  
  func_0x0001072cfcc8();
  func_0x0001072ce1e4();
  dStack_190 = param_3;
  uStack_188 = param_4;
  uStack_8 = extraout_x8;
  func_0x0001078696e8(auStack_1a8);
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_130 = (undefined **)((ulong)uStack_130 & 0xffffffffffffff00);
  uStack_110 = 0;
  plVar5 = param_2;
  func_0x00010740e07c(&dStack_248,param_2,&uStack_130);
  if (bStack_1e8 == 1) {
    func_0x00010785f1f4();
    uStack_130 = (undefined **)((ulong)uStack_130 & 0xffffffffffffff00);
    plVar5 = plVar5 + 0x13a;
    FUN_10724e2c8(plVar5,&uStack_130);
    dVar7 = dStack_1f0;
    if ((bStack_1e8 & 1) != 0) {
      func_0x0001072ceb98();
      if ((bStack_1e8 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1072b5cd4;
      }
      func_0x0001072ce5b4((double)(long)(dStack_1f0 * 100.0) / 100.0);
      func_0x0001072ce238();
      func_0x0001072d000c();
      func_0x0001072cea50();
      func_0x0001072ceb98();
      uVar6 = (uint)dVar7;
      dVar7 = (double)(ulong)uVar6;
      func_0x0001072ce5b4((double)(long)dVar7);
      func_0x0001072ce238();
      FUN_10726af18(&puStack_128);
      func_0x0001072cea50();
      if (((int)plVar5 == 0) || ((char)uStack_188 == '\x01' && dStack_190 == dVar7))
      goto LAB_1072b5910;
      dStack_268 = 0.0;
      puStack_128 = &uStack_110;
      uStack_118 = 0x100;
      lStack_120 = 0;
      uStack_130 = &PTR_FUN_1109965d0;
      lStack_10 = 0;
      dStack_270 = dVar7;
      func_0x0001072d02b0();
      func_0x0001072ced80();
      uVar1 = lStack_120 + lStack_10;
      if (uVar1 < 0x26) {
        uStack_130 = (undefined **)
                     (CONCAT62((int6)((ulong)uStack_130 >> 0x10),(short)uVar1) & 0xffffffffff00ffff)
        ;
        *(undefined1 *)((long)&uStack_130 + 2 + uVar1) = 0;
        FUN_1072ba6e4(&UNK_10f408e9c,0x10,dVar7,(long)&uStack_130 + 2,0x26);
        puStack_168 = puStack_128;
        ppuStack_170 = uStack_130;
        uStack_158 = uStack_118;
        lStack_160 = lStack_120;
        uStack_150 = CONCAT71(uStack_10f,uStack_110);
        func_0x0001072cf31c(1);
      }
      else if (uVar1 < 0x52) {
        func_0x0001072cea30(&uStack_130);
        *(short *)uStack_130 = (short)uVar1;
        *(undefined1 *)((long)uStack_130 + uVar1 + 2) = 0;
        FUN_1072ba6e4(&UNK_10f408e9c,0x10,dVar7,(undefined2 *)((long)uStack_130 + 2),0x52);
        puStack_168 = puStack_128;
        ppuStack_170 = uStack_130;
        if (puStack_128 != (undefined1 *)0x0) {
          do {
            func_0x0001072ced88();
          } while (extraout_w10 != 0);
        }
        func_0x0001072cf31c(2);
        func_0x0001072cffe4();
      }
      else {
        dStack_268 = 0.0;
        dStack_270 = dVar7;
        func_0x0001072cfc5c();
        func_0x0001003a9204();
        func_0x0001072cffec();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
      }
      puStack_128 = (undefined1 *)CONCAT71(puStack_128._1_7_,1);
      uStack_c8 = 1;
      func_0x0001072ce238();
      func_0x0001072cf4f8();
      func_0x0001072cea50();
      if ((char)uStack_188 == '\x01') {
        puStack_180 = &UNK_10f408e9c;
        uStack_178 = 0x10;
        dStack_270 = dStack_190;
        dStack_268 = 0.0;
        puStack_128 = &uStack_110;
        uStack_118 = 0x100;
        lStack_120 = 0;
        uStack_130 = &PTR_FUN_1109965d0;
        lStack_10 = 0;
        func_0x0001072d02b0();
        func_0x0001072ced20();
        uVar1 = lStack_120 + lStack_10;
        if (uVar1 < 0x26) {
          uStack_130 = (undefined **)
                       (CONCAT62((int6)((ulong)uStack_130 >> 0x10),(short)uVar1) &
                       0xffffffffff00ffff);
          *(undefined1 *)((long)&uStack_130 + 2 + uVar1) = 0;
          func_0x0001072ba72c(&puStack_180,&dStack_190,(long)&uStack_130 + 2,0x26);
          puStack_168 = puStack_128;
          ppuStack_170 = uStack_130;
          uStack_158 = uStack_118;
          lStack_160 = lStack_120;
          uStack_150 = CONCAT71(uStack_10f,uStack_110);
          func_0x0001072cf31c(1);
        }
        else if (uVar1 < 0x52) {
          func_0x0001072cea30(&uStack_130);
          *(short *)uStack_130 = (short)uVar1;
          *(undefined1 *)((long)uStack_130 + uVar1 + 2) = 0;
          func_0x0001072ba72c(&puStack_180,&dStack_190,(undefined2 *)((long)uStack_130 + 2),0x52);
          puStack_168 = puStack_128;
          ppuStack_170 = uStack_130;
          if (puStack_128 != (undefined1 *)0x0) {
            do {
              func_0x0001072ced88();
            } while (extraout_w10_00 != 0);
          }
          func_0x0001072cf31c(2);
          func_0x0001072cffe4();
        }
        else {
          dStack_270 = dStack_190;
          dStack_268 = 0.0;
          func_0x0001072cfc5c();
          func_0x0001003a9204();
          func_0x0001072cffec();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
        }
        FUN_1072999ec(&uStack_1c0,&ppuStack_170);
        func_0x0001072cea50();
        if ((char)uStack_188 != '\x01') goto LAB_1072b5860;
        uVar2 = uVar6;
        if (dStack_190._0_4_ <= uVar6) {
          uVar2 = dStack_190._0_4_;
        }
        dStack_270 = (double)(ulong)uVar2;
        if (uVar6 <= dStack_190._0_4_) {
          uVar6 = dStack_190._0_4_;
        }
      }
      else {
LAB_1072b5860:
        dVar8 = *(double *)(*param_2 + 0x88);
        _log2();
        dStack_270 = 0.0;
        uVar6 = (int)dVar8;
      }
      for (; (ulong)dStack_270 <= (ulong)uVar6; dStack_270 = (double)((long)dStack_270 + 1)) {
        FUN_1072ba628(&ppuStack_170,&UNK_10f408ead,0x14,&dStack_270);
        uStack_c8 = 1;
        puStack_128._0_1_ = (ulong)dStack_270 <= (ulong)dVar7;
        func_0x0001072ce238();
        func_0x0001072cf4f8();
        func_0x0001072cea50();
        FUN_1072ba628(&ppuStack_170,&UNK_10f408ec2,0x14,&dStack_270);
        puStack_128 = (undefined1 *)CONCAT71(puStack_128._1_7_,(ulong)dVar7 <= (ulong)dStack_270);
        uStack_c8 = 1;
        func_0x0001072ce238();
        func_0x0001072cf4f8();
        func_0x0001072cea50();
      }
      goto LAB_1072b5910;
    }
  }
  else {
LAB_1072b5910:
    if (bStack_1c8 == 1) {
      func_0x0001072ceb98();
      if ((bStack_1c8 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1072b5cd4;
      }
      func_0x0001072ce5b4((double)((int)(dStack_1d0 / 5.0) * 5));
      func_0x0001072ce238();
      func_0x0001072d000c();
      func_0x0001072cea50();
    }
    if (bStack_1d8 == 1) {
      func_0x0001072ceb98();
      if ((bStack_1d8 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1072b5cd4;
      }
      func_0x0001072ce5b4((double)((int)(dStack_1e0 / 5.0) * 5));
      func_0x0001072ce238();
      func_0x0001072d000c();
      func_0x0001072cea50();
    }
    if (cStack_238 == '\x01') {
      func_0x0001072ceb98();
      func_0x0001072ce5b4((double)(long)(dStack_248 * 100000.0) / 100000.0);
      func_0x0001072ce238();
      func_0x0001072ceeac();
      func_0x0001072cea50();
      func_0x0001072ceb98();
      func_0x0001072ce5b4((double)(long)(dStack_240 * 100000.0) / 100000.0);
      func_0x0001072ce238();
      func_0x0001072ceeac();
      func_0x0001072cea50();
      if (bStack_1e8 == 1) {
        func_0x0001072ceb98();
        if ((bStack_1e8 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1072b5cd4;
        }
        FUN_1072ba678(dStack_248,(int)dStack_1f0);
        func_0x0001072ce5b4();
        func_0x0001072ce238();
        func_0x0001072ceeac();
        func_0x0001072cea50();
        func_0x0001072ceb98();
        if ((bStack_1e8 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1072b5cd4;
        }
        FUN_1072ba678(dStack_240,(int)dStack_1f0);
        func_0x0001072ce5b4();
        func_0x0001072ce238();
        func_0x0001072ceeac();
        func_0x0001072cea50();
      }
    }
    ppuStack_170 = (undefined **)((ulong)ppuStack_170 & 0xffffffffffffff00);
    uStack_150 = uStack_150 & 0xffffffffffffff00;
    func_0x00010740e07c(&uStack_130,param_2,&ppuStack_170);
    func_0x00010740e0f0(&dStack_270,param_2,&uStack_130);
    func_0x0001072ceb98();
    func_0x0001072ce564((double)(long)(dStack_268 * 100000.0) / 100000.0);
    func_0x0001072ce238();
    func_0x0001072ceb60();
    func_0x0001072cea50();
    func_0x0001072ceb98();
    func_0x0001072ce564((double)(long)(dStack_258 * 100000.0) / 100000.0);
    func_0x0001072ce238();
    func_0x0001072ceb60();
    func_0x0001072cea50();
    func_0x0001072ceb98();
    func_0x0001072ce564((double)(long)(dStack_260 * 100000.0) / 100000.0);
    func_0x0001072ce238();
    func_0x0001072ceb60();
    func_0x0001072cea50();
    func_0x0001072ceb98();
    func_0x0001072ce564((double)(long)(dStack_270 * 100000.0) / 100000.0);
    func_0x0001072ce238();
    func_0x0001072ceb60();
    func_0x0001072cea50();
    uVar4 = bStack_1e8 == 1;
    if ((bool)uVar4) {
      func_0x0001072ceb98();
      if ((bStack_1e8 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1072b5cd4;
      }
      func_0x0001072ced14(dStack_268);
      func_0x0001072ce564();
      func_0x0001072ce238();
      func_0x0001072ceb60();
      func_0x0001072cea50();
      func_0x0001072ceb98();
      if ((bStack_1e8 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1072b5cd4;
      }
      func_0x0001072ced14(dStack_258);
      func_0x0001072ce564();
      func_0x0001072ce238();
      func_0x0001072ceb60();
      func_0x0001072cea50();
      func_0x0001072ceb98();
      if ((bStack_1e8 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1072b5cd4;
      }
      func_0x0001072ced14(dStack_260);
      func_0x0001072ce564();
      func_0x0001072ce238();
      func_0x0001072ceb60();
      func_0x0001072cea50();
      func_0x0001072ceb98();
      if ((bStack_1e8 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1072b5cd4;
      }
      func_0x0001072ced14(dStack_270);
      func_0x0001072ce564();
      func_0x0001072ce238();
      func_0x0001072ceb60();
      func_0x0001072cea50();
    }
    func_0x0001072cef78(*(undefined8 *)(*unaff_x19 + 0x40));
    FUN_10726e078(&uStack_1c0);
    FUN_10726b264(auStack_1a8);
    func_0x0001072ce0cc(uStack_8);
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000104bdc2c8();
LAB_1072b5cd4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1072b5cd8);
  (*pcVar3)();
}



/* Entry: 1072b5e14; end: 1072b5ee7;  */

void FUN_1072b5e14(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  double dVar3;
  undefined1 auStack_e0 [32];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [88];
  double dStack_60;
  char cStack_58;
  
  puVar1 = auStack_e0;
  auStack_e0[0] = 0;
  uStack_c0 = 0;
  func_0x00010740e07c(auStack_b8,param_1,auStack_e0);
  uVar2 = (ulong)dStack_60;
  if (cStack_58 == '\0') {
    uVar2 = 0;
  }
  if ((char)param_2[1] == '\x01') {
    if (uVar2 == *param_2) {
      return;
    }
    dVar3 = (double)*param_2;
  }
  else {
    dVar3 = 0.0;
  }
  func_0x000107746c30(auStack_e0,(double)uVar2,dVar3);
  func_0x0001072cfedc();
  FUN_1072ba99c(auStack_e0);
  FUN_1072b823c(param_3,auStack_b8,puVar1);
  func_0x0001072cecfc();
  *param_2 = uVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  func_0x0001072cec0c();
  return;
}



/* Entry: 1072b5ee8; end: 1072b5eef;  */

void FUN_1072b5ee8(long param_1)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x19;
  long *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 uStack_b8;
  undefined4 auStack_b0 [2];
  undefined1 uStack_a8;
  undefined8 uStack_58;
  char cStack_50;
  
  func_0x0001003ac1fc(param_1 + -8);
  func_0x0001072ce1d0();
  func_0x0001072cefbc();
  if (*(long *)(unaff_x19 + 0xa8) != 0) {
    auStack_d8[0] = 0;
    uStack_b8 = 0;
    func_0x00010740e07c(auStack_b0,*(long *)(unaff_x19 + 0xa8),auStack_d8);
    FUN_1072b5440();
    if (*(long *)(unaff_x19 + 0x290) != 0) {
      func_0x00010740e0f0(auStack_d8,*(undefined8 *)(unaff_x19 + 0xa8),auStack_b0);
      in_ZR = cStack_50 == '\0';
      if ((bool)in_ZR) {
        uStack_58 = 0;
      }
      func_0x00010739ed74(uStack_58,*(undefined8 *)(unaff_x19 + 0x290),auStack_d8);
    }
  }
  func_0x0001072cf9a8();
  (**(code **)(extraout_x8 + 0x18))();
  plVar5 = *(long **)(unaff_x19 + 0xd0);
  func_0x0001072cfa78();
  auStack_b0[0] = 6;
  uStack_a8 = 1;
  uVar3 = SUB81(auStack_b0,0);
  func_0x0001072cf6bc(*(undefined8 *)(*plVar5 + 0x30));
  puVar1 = auStack_b0;
  func_0x000104c3323c();
  func_0x0001003ac718();
  if (*(long *)(unaff_x19 + 0xa8) != 0) {
    uVar4 = *(undefined8 *)(unaff_x19 + 0x2f8);
    FUN_1072b54d0(*(undefined8 *)(unaff_x19 + 0xd0),*(long *)(unaff_x19 + 0xa8),uVar4,
                  *(undefined8 *)(unaff_x19 + 0x300));
    uVar3 = (undefined1)uVar4;
    puVar1 = *(undefined4 **)(unaff_x19 + 0xa8);
    func_0x0001072d0034();
  }
  func_0x0001072cec24();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x0001072cec24();
  func_0x0001072ce94c();
  func_0x0001003ac1fc();
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_1072b60fc();
  if ((*(byte *)(unaff_x19 + 0x318) & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x318) = 1;
  }
  *(undefined4 **)(unaff_x19 + 0x310) = puVar2;
  *(undefined1 *)(unaff_x19 + 800) = uVar3;
  *(undefined1 *)(unaff_x19 + 0x321) = 0;
  uVar4 = *(undefined8 *)(puVar1 + 0x16);
  if (*(char *)(puVar1 + 0x18) == '\0') {
    uVar4 = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x328) = uVar4;
  uVar4 = *(undefined8 *)(puVar1 + 0x1e);
  if (*(char *)(puVar1 + 0x20) == '\0') {
    uVar4 = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x330) = uVar4;
  uVar4 = *(undefined8 *)(puVar1 + 0x1a);
  if (*(char *)(puVar1 + 0x1c) == '\0') {
    uVar4 = 0;
  }
  *(undefined8 *)(unaff_x19 + 0x338) = uVar4;
  return;
}



/* Entry: 1072b5ef0; end: 1072b60f3;  */

void FUN_1072b5ef0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar4;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    uVar3 = param_4;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1e4(param_3);
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    func_0x0001072cefbc();
    unaff_x22 = *(long **)(unaff_x19 + 0xd0);
    func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x110),&UNK_10de2ce61);
    *(undefined4 *)((long)register0x00000008 + -0xe0) = 6;
    *(undefined1 *)((long)register0x00000008 + -0xd8) = 0;
    (**(code **)(*unaff_x22 + 0x30))
              (unaff_x22,(undefined1 *)((long)register0x00000008 + -0x110),
               (undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x000104c3323c((undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x0001072cfdf0();
    lVar1 = *(long *)(unaff_x19 + 0xa8);
    unaff_x20 = (long *)0x0;
    if (lVar1 != 0) {
      *(undefined1 *)((long)register0x00000008 + -0x110) = 0;
      *(undefined1 *)((long)register0x00000008 + -0xf0) = 0;
      func_0x00010740e07c((undefined1 *)((long)register0x00000008 + -0xe0),lVar1,
                          (undefined1 *)((long)register0x00000008 + -0x110));
      FUN_1072b5440();
      func_0x00010740e0f0((undefined1 *)((long)register0x00000008 + -0x138),
                          *(undefined8 *)(unaff_x19 + 0xa8),
                          (undefined1 *)((long)register0x00000008 + -0xe0));
      if (*(long *)(unaff_x19 + 0x290) != 0) {
        uVar4 = *(undefined8 *)((long)register0x00000008 + -0x88);
        in_ZR = *(char *)((long)register0x00000008 + -0x80) == '\0';
        param_2 = 0;
        if ((bool)in_ZR) {
          uVar4 = 0;
        }
        func_0x00010739ed74(uVar4,*(long *)(unaff_x19 + 0x290),
                            (undefined1 *)((long)register0x00000008 + -0x138));
      }
      func_0x0001072d0274();
      FUN_1072b54d0();
      unaff_x20 = *(long **)(unaff_x19 + 0xa8);
      func_0x0001072d0034();
      if ((*(byte *)((long)register0x00000008 + -0x80) & 1) != 0) {
        uVar4 = *(undefined8 *)((long)register0x00000008 + -0x88);
        plVar2 = *(long **)(unaff_x19 + 0x1c8);
        *(undefined ***)((long)register0x00000008 + -0x110) = &PTR_DAT_11099b168;
        *(undefined8 *)((long)register0x00000008 + -0x108) = uVar4;
        *(undefined1 **)((long)register0x00000008 + -0xf8) =
             (undefined1 *)((long)register0x00000008 + -0x110);
        (**(code **)(*plVar2 + 0x80))(plVar2,(undefined1 *)((long)register0x00000008 + -0x110));
        unaff_x20 = (long *)((long)register0x00000008 + -0x110);
        FUN_1072caf58();
        if (*(long *)(unaff_x19 + 0x278) != 0) {
          func_0x00010740e088((undefined1 *)((long)register0x00000008 + -0x110),
                              *(undefined8 *)(unaff_x19 + 0xa8));
          unaff_x22 = *(long **)(unaff_x19 + 0x278);
          unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x110);
          func_0x0001072cf860(param_5 + 8);
          *(undefined8 *)((long)register0x00000008 + -0x148) = uVar4;
          *(undefined8 *)((long)register0x00000008 + -0x140) = param_2;
          unaff_x20 = unaff_x22;
          FUN_1072fe260(unaff_d8,unaff_x22,(undefined1 *)((long)register0x00000008 + -0x108),
                        (undefined1 *)((long)register0x00000008 + -0x148));
        }
      }
    }
    func_0x0001072cf9a8();
    param_4 = uVar3;
    (**(code **)(extraout_x8_00 + 0x20))();
    func_0x0001072cec24();
    func_0x0001072ce0cc(*(undefined8 *)((long)register0x00000008 + -0x58));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_3 = unaff_x20;
    func_0x0001072cec24();
    unaff_x30 = FUN_1072b60f4;
    func_0x0001072ce94c();
    param_3 = param_3 + -1;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
    unaff_x21 = uVar3;
  }
  return;
}



/* Entry: 1072b60f4; end: 1072b60fb;  */

void FUN_1072b60f4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar4;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    uVar3 = param_4;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1e4(param_3 + -1);
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    func_0x0001072cefbc();
    unaff_x22 = *(long **)(unaff_x19 + 0xd0);
    func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x110),&UNK_10de2ce61);
    *(undefined4 *)((long)register0x00000008 + -0xe0) = 6;
    *(undefined1 *)((long)register0x00000008 + -0xd8) = 0;
    (**(code **)(*unaff_x22 + 0x30))
              (unaff_x22,(undefined1 *)((long)register0x00000008 + -0x110),
               (undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x000104c3323c((undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x0001072cfdf0();
    lVar1 = *(long *)(unaff_x19 + 0xa8);
    unaff_x20 = (long *)0x0;
    if (lVar1 != 0) {
      *(undefined1 *)((long)register0x00000008 + -0x110) = 0;
      *(undefined1 *)((long)register0x00000008 + -0xf0) = 0;
      func_0x00010740e07c((undefined1 *)((long)register0x00000008 + -0xe0),lVar1,
                          (undefined1 *)((long)register0x00000008 + -0x110));
      FUN_1072b5440();
      func_0x00010740e0f0((undefined1 *)((long)register0x00000008 + -0x138),
                          *(undefined8 *)(unaff_x19 + 0xa8),
                          (undefined1 *)((long)register0x00000008 + -0xe0));
      if (*(long *)(unaff_x19 + 0x290) != 0) {
        uVar4 = *(undefined8 *)((long)register0x00000008 + -0x88);
        in_ZR = *(char *)((long)register0x00000008 + -0x80) == '\0';
        param_2 = 0;
        if ((bool)in_ZR) {
          uVar4 = 0;
        }
        func_0x00010739ed74(uVar4,*(long *)(unaff_x19 + 0x290),
                            (undefined1 *)((long)register0x00000008 + -0x138));
      }
      func_0x0001072d0274();
      FUN_1072b54d0();
      unaff_x20 = *(long **)(unaff_x19 + 0xa8);
      func_0x0001072d0034();
      if ((*(byte *)((long)register0x00000008 + -0x80) & 1) != 0) {
        uVar4 = *(undefined8 *)((long)register0x00000008 + -0x88);
        plVar2 = *(long **)(unaff_x19 + 0x1c8);
        *(undefined ***)((long)register0x00000008 + -0x110) = &PTR_DAT_11099b168;
        *(undefined8 *)((long)register0x00000008 + -0x108) = uVar4;
        *(undefined1 **)((long)register0x00000008 + -0xf8) =
             (undefined1 *)((long)register0x00000008 + -0x110);
        (**(code **)(*plVar2 + 0x80))(plVar2,(undefined1 *)((long)register0x00000008 + -0x110));
        unaff_x20 = (long *)((long)register0x00000008 + -0x110);
        FUN_1072caf58();
        if (*(long *)(unaff_x19 + 0x278) != 0) {
          func_0x00010740e088((undefined1 *)((long)register0x00000008 + -0x110),
                              *(undefined8 *)(unaff_x19 + 0xa8));
          unaff_x22 = *(long **)(unaff_x19 + 0x278);
          unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x110);
          func_0x0001072cf860(param_5 + 8);
          *(undefined8 *)((long)register0x00000008 + -0x148) = uVar4;
          *(undefined8 *)((long)register0x00000008 + -0x140) = param_2;
          unaff_x20 = unaff_x22;
          FUN_1072fe260(unaff_d8,unaff_x22,(undefined1 *)((long)register0x00000008 + -0x108),
                        (undefined1 *)((long)register0x00000008 + -0x148));
        }
      }
    }
    func_0x0001072cf9a8();
    param_4 = uVar3;
    (**(code **)(extraout_x8_00 + 0x20))();
    func_0x0001072cec24();
    func_0x0001072ce0cc(*(undefined8 *)((long)register0x00000008 + -0x58));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_3 = unaff_x20;
    func_0x0001072cec24();
    unaff_x30 = FUN_1072b60f4;
    func_0x0001072ce94c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
    unaff_x21 = uVar3;
  }
  return;
}



/* Entry: 1072b60fc; end: 1072b6263;  */

void FUN_1072b60fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((((*(char *)(param_1 + 0x318) == '\x01') && (*(char *)(param_1 + 800) == '\x01')) &&
      ((*(byte *)(param_1 + 0x321) & 1) == 0)) && (499999999 < param_2 - *(long *)(param_1 + 0x310))
     ) {
    lVar1 = param_1;
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    lVar2 = lVar1;
    func_0x0001072cfad8(0x18b);
    func_0x0001072cfc08();
    func_0x0001072cf27c(lVar2 + 8);
    func_0x0001072cf950();
    func_0x0001072cfad8(0x18c);
    func_0x0001072cfc08();
    func_0x0001072cf27c(lVar1 + 8);
    func_0x0001072cf950();
    func_0x0001072cfad8(0x18d);
    func_0x0001072cf27c(lVar1 + 8);
    func_0x0001072cf950();
    *(undefined1 *)(param_1 + 0x321) = 1;
  }
  return;
}



/* Entry: 1072b6264; end: 1072b6333;  */

void FUN_1072b6264(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1e4();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    (**(code **)(**(long **)(param_1 + 0x138) + 0x20))();
    func_0x0001072cf1bc();
    *(undefined ***)((long)register0x00000008 + -0x58) = &PTR_FUN_11099b1e8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x58);
    func_0x0001072cf648();
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x58);
    FUN_1072cb4dc((undefined1 *)((long)register0x00000008 + -0x58));
    func_0x0001072cec80();
    unaff_x20 = *(undefined8 *)(unaff_x19 + 0x138);
    func_0x0001072cf1bc();
    *(undefined ***)((long)register0x00000008 + -0x58) = &PTR_FUN_11099b268;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x21;
    func_0x0001072cf648();
    param_1 = (undefined1 *)((long)register0x00000008 + -0x58);
    FUN_1072cb4dc();
    func_0x0001072cec80();
    func_0x0001072cf9a8();
    (**(code **)(extraout_x8_00 + 0x28))();
    func_0x0001072ce098();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x0001072cf3ec();
    FUN_1072cb4dc();
    func_0x0001072cec80();
    unaff_x30 = FUN_1072b6334;
    func_0x0001072ce900();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 1072b6334; end: 1072b636b;  */

void FUN_1072b6334(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    param_1 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1e4();
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    (**(code **)(**(long **)(param_1 + 0x138) + 0x20))();
    func_0x0001072cf1bc();
    *(undefined ***)((long)register0x00000008 + -0x58) = &PTR_FUN_11099b1e8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x58);
    func_0x0001072cf648();
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x58);
    FUN_1072cb4dc((undefined1 *)((long)register0x00000008 + -0x58));
    func_0x0001072cec80();
    unaff_x20 = *(undefined8 *)(unaff_x19 + 0x138);
    func_0x0001072cf1bc();
    *(undefined ***)((long)register0x00000008 + -0x58) = &PTR_FUN_11099b268;
    *(long *)((long)register0x00000008 + -0x50) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x21;
    func_0x0001072cf648();
    param_1 = (undefined1 *)((long)register0x00000008 + -0x58);
    FUN_1072cb4dc();
    func_0x0001072cec80();
    func_0x0001072cf9a8();
    (**(code **)(extraout_x8_00 + 0x28))();
    func_0x0001072ce098();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x0001072cf3ec();
    FUN_1072cb4dc();
    func_0x0001072cec80();
    unaff_x30 = FUN_1072b6334;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 1072b636c; end: 1072b6737;  */

void FUN_1072b636c(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar8;
  int extraout_w10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar9;
  long lVar10;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1e4(param_3);
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    func_0x0001072cefbc();
    FUN_10729fd0c(*(undefined8 *)(unaff_x19 + 0x120),param_4 + 0x10);
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      func_0x00010740e088((undefined1 *)((long)register0x00000008 + -0x70));
      _memcpy((undefined1 *)((long)register0x00000008 + -0xec0),**(long **)(unaff_x19 + 0xa8) + 0x58
              ,0xe50);
      func_0x0001072cf860((undefined1 *)((long)register0x00000008 + -0xec0));
      *(long *)((long)register0x00000008 + -0xee0) = param_1;
      *(undefined8 *)((long)register0x00000008 + -0xed8) = param_2;
      FUN_107259180((undefined1 *)((long)register0x00000008 + -0xee0));
      *(long *)((long)register0x00000008 + -0xf10) = param_1;
      *(undefined8 *)((long)register0x00000008 + -0xf08) = param_2;
      unaff_x21 = (long *)((long)register0x00000008 + -0x70);
      (**(code **)(**(long **)(unaff_x19 + 0x128) + 0x50))
                (*(long **)(unaff_x19 + 0x128),(undefined1 *)((long)register0x00000008 + -0x68),
                 (undefined1 *)((long)register0x00000008 + -0xf10));
      param_1 = *(long *)((long)register0x00000008 + -0x70);
      FUN_10725d9f4(*(undefined8 *)(unaff_x19 + 0x268),
                    (undefined1 *)((long)register0x00000008 + -0x68),param_4 + 0x28);
    }
    FUN_10727b280(*(undefined8 *)(unaff_x19 + 0x148),param_4);
    func_0x0001072cf9a8();
    puVar7 = param_4;
    (**(code **)(extraout_x8_00 + 0x48))();
    unaff_x20 = *(long **)(unaff_x19 + 0x138);
    (**(code **)(*unaff_x20 + 0x18))();
    if ((int)unaff_x20 != 0) {
      unaff_x21 = *(long **)(unaff_x19 + 0x138);
      *(undefined **)((long)register0x00000008 + -0xee0) = &UNK_10e52b660;
      *(undefined8 *)((long)register0x00000008 + -0xed8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xed0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xec8) = 0;
      (**(code **)(**(long **)(unaff_x19 + 0x128) + 0x28))
                ((undefined1 *)((long)register0x00000008 + -0xf10));
      *(undefined1 *)((long)register0x00000008 + -0xf11) =
           *(undefined1 *)((long)register0x00000008 + -0xee8);
      uVar6 = 0;
      if (*(long *)((long)register0x00000008 + -0xef8) == 0) {
        uVar6 = *(undefined1 *)((long)register0x00000008 + -0xee8);
      }
      *(undefined1 *)((long)register0x00000008 + -0xf12) = uVar6;
      func_0x0001072cf234();
      FUN_10726d480((undefined1 *)((long)register0x00000008 + -0xec0),
                    (undefined1 *)((long)register0x00000008 + -0x70),
                    (undefined1 *)((long)register0x00000008 + -0xf12));
      func_0x0001072ce73c();
      func_0x0001072cf264();
      func_0x0001072cedb0();
      func_0x0001072cf234();
      FUN_10726d480((undefined1 *)((long)register0x00000008 + -0xec0),
                    (undefined1 *)((long)register0x00000008 + -0x70),
                    (undefined1 *)((long)register0x00000008 + -0xf11));
      func_0x0001072ce73c();
      func_0x0001072cf264();
      func_0x0001072cedb0();
      if (*(char *)((long)register0x00000008 + -0xee8) == '\x01') {
        func_0x0001072cf234();
        uVar9 = NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xef8));
        *(undefined8 *)((long)register0x00000008 + -0xf38) = uVar9;
        func_0x0001072cecec();
        func_0x0001072ce73c();
        func_0x0001072cf264();
        func_0x0001072cedb0();
      }
      func_0x0001072cf234();
      uVar9 = NEON_ucvtf((ulong)*(uint *)(param_4 + 8));
      *(undefined8 *)((long)register0x00000008 + -0xf38) = uVar9;
      func_0x0001072cecec();
      func_0x0001072ce73c();
      func_0x0001072cf264();
      func_0x0001072cedb0();
      func_0x0001072cf234();
      param_1 = NEON_ucvtf((ulong)*(uint *)(param_4 + 0xc));
      *(long *)((long)register0x00000008 + -0xf38) = param_1;
      func_0x0001072cecec();
      func_0x0001072ce73c();
      func_0x0001072cf264();
      func_0x0001072cedb0();
      func_0x0001072d03c8();
      func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0xec0));
      FUN_1072ba9bc((undefined1 *)((long)register0x00000008 + -0xee0),
                    **(undefined8 **)(param_4 + 0x28),(*(undefined8 **)(param_4 + 0x28))[1],
                    (undefined1 *)((long)register0x00000008 + -0xec0));
      func_0x0001072cfe54();
      func_0x000100060b18((undefined1 *)((long)register0x00000008 + -0x70),&PTR_DAT_11099a770);
      FUN_1072ba9bc((undefined1 *)((long)register0x00000008 + -0xee0),
                    **(undefined8 **)(unaff_x19 + 0x2b0),(*(undefined8 **)(unaff_x19 + 0x2b0))[1],
                    (undefined1 *)((long)register0x00000008 + -0x70));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined1 *)((long)register0x00000008 + -0x70));
      FUN_107278fec((undefined1 *)((long)register0x00000008 + -0xf48),
                    (undefined1 *)((long)register0x00000008 + -0xee0));
      FUN_1072bb81c((undefined1 *)((long)register0x00000008 + -0xf10));
      FUN_10726ae88((undefined1 *)((long)register0x00000008 + -0xee0));
      puVar7 = (undefined1 *)((long)register0x00000008 + -0xf48);
      func_0x0001072cf670(*(undefined8 *)(*unaff_x21 + 0x28));
      unaff_x20 = (long *)((long)register0x00000008 + -0xf48);
      FUN_10726b264();
    }
    plVar1 = (long *)(unaff_x19 + 0x2b0);
    uVar6 = plVar1 == (long *)(param_4 + 0x28);
    if (!(bool)uVar6) {
      lVar10 = *(long *)(param_4 + 0x30);
      param_1 = *(long *)(param_4 + 0x28);
      *(long *)((long)register0x00000008 + -0x68) = lVar10;
      *(long *)((long)register0x00000008 + -0x70) = param_1;
      if (lVar10 != 0) {
        plVar2 = (long *)(lVar10 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*plVar1 == 0) {
        lVar8 = 0;
      }
      else {
        piVar3 = (int *)(*plVar1 + 0x18);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = *piVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = *(long *)((long)register0x00000008 + -0x68);
        param_1 = *(long *)((long)register0x00000008 + -0x70);
        lVar8 = *plVar1;
      }
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x2b8);
      *(long *)((long)register0x00000008 + -0xec0) = lVar8;
      *(undefined8 *)((long)register0x00000008 + -0xeb8) = uVar9;
      *(long *)(unaff_x19 + 0x2b8) = lVar10;
      *(long *)(unaff_x19 + 0x2b0) = param_1;
      FUN_1072ba0cc((undefined1 *)((long)register0x00000008 + -0xec0));
      unaff_x20 = (long *)((long)register0x00000008 + -0x70);
      FUN_1072ba0cc();
      if (*(long *)(unaff_x19 + 0x2b0) != 0) {
        do {
          func_0x0001072cfb28();
        } while (extraout_w10 != 0);
      }
    }
    param_4 = puVar7;
    func_0x0001072cec24();
    func_0x0001072ce098();
    if ((bool)uVar6) break;
    ___stack_chk_fail();
    func_0x0001072cf264();
    func_0x0001072cedb0();
    FUN_1072bb81c((undefined1 *)((long)register0x00000008 + -0xf10));
    param_3 = (undefined1 *)((long)register0x00000008 + -0xee0);
    FUN_10726ae88();
    func_0x0001072cec24();
    unaff_x30 = FUN_1072b6738;
    func_0x0001072ce94c();
    param_3 = param_3 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf50);
  }
  return;
}



/* Entry: 1072b6738; end: 1072b675f;  */

void FUN_1072b6738(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar8;
  int extraout_w10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar9;
  long lVar10;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1e4(param_3 + -8);
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    func_0x0001072cefbc();
    FUN_10729fd0c(*(undefined8 *)(unaff_x19 + 0x120),param_4 + 0x10);
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      func_0x00010740e088((undefined1 *)((long)register0x00000008 + -0x70));
      _memcpy((undefined1 *)((long)register0x00000008 + -0xec0),**(long **)(unaff_x19 + 0xa8) + 0x58
              ,0xe50);
      func_0x0001072cf860((undefined1 *)((long)register0x00000008 + -0xec0));
      *(long *)((long)register0x00000008 + -0xee0) = param_1;
      *(undefined8 *)((long)register0x00000008 + -0xed8) = param_2;
      FUN_107259180((undefined1 *)((long)register0x00000008 + -0xee0));
      *(long *)((long)register0x00000008 + -0xf10) = param_1;
      *(undefined8 *)((long)register0x00000008 + -0xf08) = param_2;
      unaff_x21 = (long *)((long)register0x00000008 + -0x70);
      (**(code **)(**(long **)(unaff_x19 + 0x128) + 0x50))
                (*(long **)(unaff_x19 + 0x128),(undefined1 *)((long)register0x00000008 + -0x68),
                 (undefined1 *)((long)register0x00000008 + -0xf10));
      param_1 = *(long *)((long)register0x00000008 + -0x70);
      FUN_10725d9f4(*(undefined8 *)(unaff_x19 + 0x268),
                    (undefined1 *)((long)register0x00000008 + -0x68),param_4 + 0x28);
    }
    FUN_10727b280(*(undefined8 *)(unaff_x19 + 0x148),param_4);
    func_0x0001072cf9a8();
    puVar7 = param_4;
    (**(code **)(extraout_x8_00 + 0x48))();
    unaff_x20 = *(long **)(unaff_x19 + 0x138);
    (**(code **)(*unaff_x20 + 0x18))();
    if ((int)unaff_x20 != 0) {
      unaff_x21 = *(long **)(unaff_x19 + 0x138);
      *(undefined **)((long)register0x00000008 + -0xee0) = &UNK_10e52b660;
      *(undefined8 *)((long)register0x00000008 + -0xed8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xed0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xec8) = 0;
      (**(code **)(**(long **)(unaff_x19 + 0x128) + 0x28))
                ((undefined1 *)((long)register0x00000008 + -0xf10));
      *(undefined1 *)((long)register0x00000008 + -0xf11) =
           *(undefined1 *)((long)register0x00000008 + -0xee8);
      uVar6 = 0;
      if (*(long *)((long)register0x00000008 + -0xef8) == 0) {
        uVar6 = *(undefined1 *)((long)register0x00000008 + -0xee8);
      }
      *(undefined1 *)((long)register0x00000008 + -0xf12) = uVar6;
      func_0x0001072cf234();
      FUN_10726d480((undefined1 *)((long)register0x00000008 + -0xec0),
                    (undefined1 *)((long)register0x00000008 + -0x70),
                    (undefined1 *)((long)register0x00000008 + -0xf12));
      func_0x0001072ce73c();
      func_0x0001072cf264();
      func_0x0001072cedb0();
      func_0x0001072cf234();
      FUN_10726d480((undefined1 *)((long)register0x00000008 + -0xec0),
                    (undefined1 *)((long)register0x00000008 + -0x70),
                    (undefined1 *)((long)register0x00000008 + -0xf11));
      func_0x0001072ce73c();
      func_0x0001072cf264();
      func_0x0001072cedb0();
      if (*(char *)((long)register0x00000008 + -0xee8) == '\x01') {
        func_0x0001072cf234();
        uVar9 = NEON_ucvtf(*(undefined8 *)((long)register0x00000008 + -0xef8));
        *(undefined8 *)((long)register0x00000008 + -0xf38) = uVar9;
        func_0x0001072cecec();
        func_0x0001072ce73c();
        func_0x0001072cf264();
        func_0x0001072cedb0();
      }
      func_0x0001072cf234();
      uVar9 = NEON_ucvtf((ulong)*(uint *)(param_4 + 8));
      *(undefined8 *)((long)register0x00000008 + -0xf38) = uVar9;
      func_0x0001072cecec();
      func_0x0001072ce73c();
      func_0x0001072cf264();
      func_0x0001072cedb0();
      func_0x0001072cf234();
      param_1 = NEON_ucvtf((ulong)*(uint *)(param_4 + 0xc));
      *(long *)((long)register0x00000008 + -0xf38) = param_1;
      func_0x0001072cecec();
      func_0x0001072ce73c();
      func_0x0001072cf264();
      func_0x0001072cedb0();
      func_0x0001072d03c8();
      func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0xec0));
      FUN_1072ba9bc((undefined1 *)((long)register0x00000008 + -0xee0),
                    **(undefined8 **)(param_4 + 0x28),(*(undefined8 **)(param_4 + 0x28))[1],
                    (undefined1 *)((long)register0x00000008 + -0xec0));
      func_0x0001072cfe54();
      func_0x000100060b18((undefined1 *)((long)register0x00000008 + -0x70),&PTR_DAT_11099a770);
      FUN_1072ba9bc((undefined1 *)((long)register0x00000008 + -0xee0),
                    **(undefined8 **)(unaff_x19 + 0x2b0),(*(undefined8 **)(unaff_x19 + 0x2b0))[1],
                    (undefined1 *)((long)register0x00000008 + -0x70));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined1 *)((long)register0x00000008 + -0x70));
      FUN_107278fec((undefined1 *)((long)register0x00000008 + -0xf48),
                    (undefined1 *)((long)register0x00000008 + -0xee0));
      FUN_1072bb81c((undefined1 *)((long)register0x00000008 + -0xf10));
      FUN_10726ae88((undefined1 *)((long)register0x00000008 + -0xee0));
      puVar7 = (undefined1 *)((long)register0x00000008 + -0xf48);
      func_0x0001072cf670(*(undefined8 *)(*unaff_x21 + 0x28));
      unaff_x20 = (long *)((long)register0x00000008 + -0xf48);
      FUN_10726b264();
    }
    plVar1 = (long *)(unaff_x19 + 0x2b0);
    uVar6 = plVar1 == (long *)(param_4 + 0x28);
    if (!(bool)uVar6) {
      lVar10 = *(long *)(param_4 + 0x30);
      param_1 = *(long *)(param_4 + 0x28);
      *(long *)((long)register0x00000008 + -0x68) = lVar10;
      *(long *)((long)register0x00000008 + -0x70) = param_1;
      if (lVar10 != 0) {
        plVar2 = (long *)(lVar10 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*plVar1 == 0) {
        lVar8 = 0;
      }
      else {
        piVar3 = (int *)(*plVar1 + 0x18);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = *piVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar10 = *(long *)((long)register0x00000008 + -0x68);
        param_1 = *(long *)((long)register0x00000008 + -0x70);
        lVar8 = *plVar1;
      }
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x2b8);
      *(long *)((long)register0x00000008 + -0xec0) = lVar8;
      *(undefined8 *)((long)register0x00000008 + -0xeb8) = uVar9;
      *(long *)(unaff_x19 + 0x2b8) = lVar10;
      *(long *)(unaff_x19 + 0x2b0) = param_1;
      FUN_1072ba0cc((undefined1 *)((long)register0x00000008 + -0xec0));
      unaff_x20 = (long *)((long)register0x00000008 + -0x70);
      FUN_1072ba0cc();
      if (*(long *)(unaff_x19 + 0x2b0) != 0) {
        do {
          func_0x0001072cfb28();
        } while (extraout_w10 != 0);
      }
    }
    param_4 = puVar7;
    func_0x0001072cec24();
    func_0x0001072ce098();
    if ((bool)uVar6) break;
    ___stack_chk_fail();
    func_0x0001072cf264();
    func_0x0001072cedb0();
    FUN_1072bb81c((undefined1 *)((long)register0x00000008 + -0xf10));
    param_3 = (undefined1 *)((long)register0x00000008 + -0xee0);
    FUN_10726ae88();
    func_0x0001072cec24();
    unaff_x30 = FUN_1072b6738;
    func_0x0001072ce94c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf50);
  }
  return;
}



/* Entry: 1072b6760; end: 1072b67db;  */

void FUN_1072b6760(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar1 = param_1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar2 = lVar1;
    func_0x0001072ce1d0();
    unaff_x20 = *(long **)(lVar2 + 0xd0);
    func_0x0001072cf1bc();
    func_0x0001072d0114();
    func_0x0001072cf6bc(*(undefined8 *)(*unaff_x20 + 0x30));
    func_0x0001072cefb4();
    func_0x0001072cec80();
    func_0x0001072cf9a8();
    (**(code **)(extraout_x8 + 0x68))();
    func_0x0001072ce080();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x0001072ced4c();
    func_0x0001072cec80();
    unaff_x30 = FUN_1072b67dc;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_1 = lVar2 + -8;
    unaff_x19 = lVar1;
  }
  return;
}



/* Entry: 1072b67dc; end: 1072b67e3;  */

void FUN_1072b67dc(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar1 = param_1 + -8;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_1 = lVar1;
    func_0x0001072ce1d0();
    unaff_x20 = *(long **)(param_1 + 0xd0);
    func_0x0001072cf1bc();
    func_0x0001072d0114();
    func_0x0001072cf6bc(*(undefined8 *)(*unaff_x20 + 0x30));
    func_0x0001072cefb4();
    func_0x0001072cec80();
    func_0x0001072cf9a8();
    (**(code **)(extraout_x8 + 0x68))();
    func_0x0001072ce080();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x0001072ced4c();
    func_0x0001072cec80();
    unaff_x30 = FUN_1072b67dc;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x19 = lVar1;
  }
  return;
}



/* Entry: 1072b67e4; end: 1072b6c23;  */

void FUN_1072b67e4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined8 ******ppppppuVar9;
  long lVar10;
  long extraout_x8;
  undefined **ppuVar11;
  long *unaff_x19;
  undefined8 ******ppppppuVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 *****pppppuStack_2d8;
  undefined8 *****pppppuStack_2d0;
  undefined8 *****pppppuStack_2c8;
  undefined8 *****pppppuStack_2c0;
  undefined1 uStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined8 *****pppppuStack_2a8;
  undefined8 *****pppppuStack_2a0;
  undefined1 uStack_298;
  undefined8 *****pppppuStack_290;
  undefined8 *****pppppuStack_288;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  char cStack_208;
  undefined1 auStack_200 [24];
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 auStack_1d8 [2];
  undefined4 uStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined4 auStack_168 [6];
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined **ppuStack_b0;
  undefined1 auStack_78 [24];
  char cStack_60;
  
  func_0x0001072ce1e4();
  func_0x0001072cefbc();
  if (unaff_x19[0x15] != 0) {
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    ppuStack_b0._0_4_ = 0;
    FUN_1072b6c24(unaff_x19[0x46],&ppuStack_b0);
    func_0x00010002b838(&ppuStack_b0,&UNK_10f408d80);
    func_0x0001072cea6c();
    FUN_1072b6de4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_b0);
    FUN_10725d900(unaff_x19[0x4d]);
    plVar13 = (long *)unaff_x19[0x1a];
    func_0x00010002b838(auStack_168,&UNK_10f408d8b);
    ppuStack_b0 = (undefined **)CONCAT44(ppuStack_b0._4_4_,6);
    func_0x0001072cf670(*(undefined8 *)(*plVar13 + 0x30));
    func_0x000104c3323c(&ppuStack_b0);
    puVar5 = auStack_168;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001072cf9a8();
    (**(code **)(extraout_x8 + 0x60))();
    func_0x00010785f1f4();
    ppuStack_b0 = (undefined **)((ulong)ppuStack_b0 & 0xffffffffffffff00);
    puVar5 = puVar5 + 0x204;
    FUN_10724e2c8(puVar5,&ppuStack_b0);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x0001073af260();
      ppuStack_b0 = &PTR_FUN_11099b2e8;
      FUN_1072d31bc(unaff_x19[0x23],&ppuStack_b0);
      func_0x0001006393ec(&ppuStack_b0);
    }
    func_0x0001072cf144(unaff_x19[0x15]);
    func_0x0001077c3744(auStack_200);
    (**(code **)(*unaff_x19 + 0x1b0))(&ppuStack_b0);
    func_0x0001072cf144(unaff_x19[0x15]);
    func_0x0001077c3764(auStack_238);
    if (cStack_60 == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_168,auStack_78);
    }
    else {
      func_0x00010002b838(auStack_168,&DAT_10de2cfcf);
    }
    func_0x0001000e1048(auStack_c8,auStack_168,0,7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
    if (cStack_208 == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_e0,auStack_238);
    }
    else {
      func_0x0001072d03c8();
      func_0x00010002b838(auStack_e0);
    }
    in_ZR = cStack_208 == '\x01';
    if ((bool)in_ZR) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_f8,auStack_220);
    }
    else {
      func_0x0001072d03c8();
      func_0x00010002b838(auStack_f8);
    }
    auStack_168[0] = 6;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x0001072cfaa8();
    uStack_140 = 0;
    uStack_120 = 0;
    uStack_11c = 1;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_118 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_180,auStack_200);
    FUN_10726e300(auStack_168,"style",auStack_180);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_198,auStack_c8)
    ;
    func_0x0001072cfd84();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1b0,auStack_e0)
    ;
    func_0x0001072cfd84();
    puVar6 = auStack_1c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar6,auStack_f8);
    func_0x0001072cfd84();
    auStack_1d8[0] = 1;
    uStack_1d0 = 0;
    uStack_1e8 = *(undefined8 *)(param_1 + 8);
    uStack_1e0 = 3;
    func_0x0001072cf8ac((undefined8 *)(param_1 + 8),puVar6,auStack_1d8,&uStack_1e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
    func_0x0001072cfe54();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
    FUN_107262330(auStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    FUN_1072bb8ec(auStack_238);
    func_0x0001072bb92c();
    func_0x0001072cfdf0();
  }
  func_0x0001072cec24();
  func_0x0001072ce098();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar7 = &ppuStack_b0;
  func_0x0001006393ec();
  func_0x0001072cec24();
  func_0x0001072ce94c();
  FUN_1072cb638(pppuVar7 + 5);
  pppuVar8 = pppuVar7;
  FUN_1072bd97c();
  if ((int)pppuVar8 == 0) {
    return;
  }
  ppuVar14 = pppuVar7[10];
  ppuVar2 = pppuVar7[0xb];
  pppppuStack_2d8 = (undefined8 ******)0x0;
  pppppuStack_2d0 = (undefined8 ******)0x0;
  pppppuStack_2c0 = &pppppuStack_2d8;
  pppppuStack_2c8 = (undefined8 ******)0x0;
  uStack_2b8 = 0;
  bVar4 = ppuVar14 <= ppuVar2;
  if ((long)ppuVar2 - (long)ppuVar14 != 0) {
    lVar10 = ((long)ppuVar2 - (long)ppuVar14) / 0x28;
    func_0x0001072d03d4();
    if (bVar4) {
      FUN_1072bdbf4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1072b6db4);
      (*pcVar3)();
    }
    ppppppuVar9 = &pppppuStack_2c8;
    func_0x0001072bdc34();
    pppppuStack_2c8 = ppppppuVar9 + lVar10 * 5;
    pppppuStack_2a8 = &pppppuStack_290;
    pppppuStack_2a0 = &pppppuStack_288;
    uStack_298 = 0;
    pppppuStack_2d8 = ppppppuVar9;
    pppppuStack_2d0 = ppppppuVar9;
    pppppuStack_2b0 = &pppppuStack_2c8;
    pppppuStack_290 = ppppppuVar9;
    for (; pppppuStack_288 = ppppppuVar9, ppuVar14 != ppuVar2; ppuVar14 = ppuVar14 + 5) {
      FUN_10724cbe8(ppppppuVar9,ppuVar14);
      *(undefined1 *)(ppppppuVar9 + 4) = *(undefined1 *)(ppuVar14 + 4);
      ppppppuVar9 = (undefined8 ******)(pppppuStack_288 + 5);
    }
    uStack_298 = 1;
    FUN_1072bdd08(&pppppuStack_2b0);
    pppppuStack_2d0 = ppppppuVar9;
  }
  uStack_2b8 = 1;
  FUN_1072cba30(&pppppuStack_2c0);
  ppuVar2 = pppuVar7[0xb];
  for (ppuVar14 = pppuVar7[10]; ppppppuVar12 = (undefined8 ******)pppppuStack_2d8,
      ppppppuVar9 = (undefined8 ******)pppppuStack_2d0, ppuVar14 != ppuVar2; ppuVar14 = ppuVar14 + 5
      ) {
    ppuVar15 = ppuVar14;
    if (((ulong)ppuVar14[4] & 1) == 0) goto LAB_1072b6d3c;
  }
LAB_1072b6d84:
  for (; ppppppuVar12 != ppppppuVar9; ppppppuVar12 = ppppppuVar12 + 5) {
    func_0x000104c003e8(ppppppuVar12);
  }
  func_0x0001072cbae4(&pppppuStack_2d8);
  return;
LAB_1072b6d3c:
  while (ppuVar11 = ppuVar14 + 5, ppuVar11 != ppuVar2) {
    ppuVar1 = ppuVar14 + 9;
    ppuVar14 = ppuVar11;
    if (*(char *)ppuVar1 == '\x01') {
      func_0x0001072cbabc(ppuVar15,ppuVar11);
      ppuVar15 = ppuVar15 + 5;
    }
  }
  ppppppuVar12 = (undefined8 ******)pppppuStack_2d8;
  ppppppuVar9 = (undefined8 ******)pppppuStack_2d0;
  if (ppuVar15 != pppuVar7[0xb]) {
    func_0x0001072cea6c();
    func_0x0001072cba8c();
    ppppppuVar12 = (undefined8 ******)pppppuStack_2d8;
    ppppppuVar9 = (undefined8 ******)pppppuStack_2d0;
  }
  goto LAB_1072b6d84;
}



/* Entry: 1072b6c24; end: 1072b6de3;  */

void FUN_1072b6c24(long param_1)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 ******ppppppuVar7;
  long lVar8;
  undefined8 ******ppppppuVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *****pppppuStack_98;
  undefined8 *****pppppuStack_90;
  undefined8 *****pppppuStack_88;
  undefined8 *****pppppuStack_80;
  undefined1 uStack_78;
  undefined8 *****pppppuStack_70;
  undefined8 *****pppppuStack_68;
  undefined8 *****pppppuStack_60;
  undefined1 uStack_58;
  undefined8 *****pppppuStack_50;
  undefined8 *****pppppuStack_48;
  
  FUN_1072cb638(param_1 + 0x28);
  lVar6 = param_1;
  FUN_1072bd97c();
  if ((int)lVar6 == 0) {
    return;
  }
  uVar10 = *(ulong *)(param_1 + 0x50);
  uVar2 = *(ulong *)(param_1 + 0x58);
  pppppuStack_98 = (undefined8 ******)0x0;
  pppppuStack_90 = (undefined8 ******)0x0;
  pppppuStack_80 = &pppppuStack_98;
  pppppuStack_88 = (undefined8 ******)0x0;
  uStack_78 = 0;
  bVar5 = uVar10 <= uVar2;
  if (uVar2 - uVar10 != 0) {
    lVar6 = (long)(uVar2 - uVar10) / 0x28;
    func_0x0001072d03d4();
    if (bVar5) {
      FUN_1072bdbf4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1072b6db4);
      (*pcVar4)();
    }
    ppppppuVar7 = &pppppuStack_88;
    func_0x0001072bdc34();
    pppppuStack_88 = ppppppuVar7 + lVar6 * 5;
    pppppuStack_68 = &pppppuStack_50;
    pppppuStack_60 = &pppppuStack_48;
    uStack_58 = 0;
    pppppuStack_98 = ppppppuVar7;
    pppppuStack_90 = ppppppuVar7;
    pppppuStack_70 = &pppppuStack_88;
    pppppuStack_50 = ppppppuVar7;
    for (; pppppuStack_48 = ppppppuVar7, uVar10 != uVar2; uVar10 = uVar10 + 0x28) {
      FUN_10724cbe8(ppppppuVar7,uVar10);
      *(undefined1 *)(ppppppuVar7 + 4) = *(undefined1 *)(uVar10 + 0x20);
      ppppppuVar7 = (undefined8 ******)(pppppuStack_48 + 5);
    }
    uStack_58 = 1;
    FUN_1072bdd08(&pppppuStack_70);
    pppppuStack_90 = ppppppuVar7;
  }
  uStack_78 = 1;
  FUN_1072cba30(&pppppuStack_80);
  lVar3 = *(long *)(param_1 + 0x58);
  for (lVar6 = *(long *)(param_1 + 0x50); ppppppuVar9 = (undefined8 ******)pppppuStack_98,
      ppppppuVar7 = (undefined8 ******)pppppuStack_90, lVar6 != lVar3; lVar6 = lVar6 + 0x28) {
    lVar11 = lVar6;
    if ((*(byte *)(lVar6 + 0x20) & 1) == 0) goto LAB_1072b6d3c;
  }
LAB_1072b6d84:
  for (; ppppppuVar9 != ppppppuVar7; ppppppuVar9 = ppppppuVar9 + 5) {
    func_0x000104c003e8(ppppppuVar9);
  }
  func_0x0001072cbae4(&pppppuStack_98);
  return;
LAB_1072b6d3c:
  while (lVar8 = lVar6 + 0x28, lVar8 != lVar3) {
    pcVar1 = (char *)(lVar6 + 0x48);
    lVar6 = lVar8;
    if (*pcVar1 == '\x01') {
      func_0x0001072cbabc(lVar11,lVar8);
      lVar11 = lVar11 + 0x28;
    }
  }
  ppppppuVar9 = (undefined8 ******)pppppuStack_98;
  ppppppuVar7 = (undefined8 ******)pppppuStack_90;
  if (lVar11 != *(long *)(param_1 + 0x58)) {
    func_0x0001072cea6c();
    func_0x0001072cba8c();
    ppppppuVar9 = (undefined8 ******)pppppuStack_98;
    ppppppuVar7 = (undefined8 ******)pppppuStack_90;
  }
  goto LAB_1072b6d84;
}



/* Entry: 1072b6de4; end: 1072b6edb;  */

void FUN_1072b6de4(undefined8 param_1,long param_2,undefined8 param_3)

{
  double adStack_f8 [6];
  long lStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined4 auStack_a0 [6];
  undefined4 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (param_2 != 0) {
    func_0x0001003ac1fc();
    auStack_a0[0] = 0x11b;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x0001072cfaa8();
    uStack_78 = 0;
    uStack_58 = 0;
    uStack_54 = 1;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b8,param_3);
    FUN_10726e300(auStack_a0,"step",auStack_b8);
    func_0x00010740e088(adStack_f8);
    lStack_c8 = (long)adStack_f8[0];
    uStack_c0 = 3;
    func_0x0001072cf0f0();
    func_0x00010743fa44();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    FUN_107262330(auStack_a0);
  }
  return;
}



/* Entry: 1072b6edc; end: 1072b6f33;  */

void FUN_1072b6edc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined8 ******ppppppuVar9;
  long lVar10;
  long extraout_x8;
  undefined **ppuVar11;
  undefined8 ******ppppppuVar12;
  long *unaff_x19;
  long *plVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 *****pppppuStack_2d8;
  undefined8 *****pppppuStack_2d0;
  undefined8 *****pppppuStack_2c8;
  undefined8 *****pppppuStack_2c0;
  undefined1 uStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined8 *****pppppuStack_2a8;
  undefined8 *****pppppuStack_2a0;
  undefined1 uStack_298;
  undefined8 *****pppppuStack_290;
  undefined8 *****pppppuStack_288;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  char cStack_208;
  undefined1 auStack_200 [24];
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 auStack_1d8 [2];
  undefined4 uStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined4 auStack_168 [6];
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined **ppuStack_b0;
  undefined1 auStack_78 [24];
  char cStack_60;
  
  param_1 = param_1 + -8;
  func_0x0001072ce1e4();
  func_0x0001072cefbc();
  if (unaff_x19[0x15] != 0) {
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    ppuStack_b0._0_4_ = 0;
    FUN_1072b6c24(unaff_x19[0x46],&ppuStack_b0);
    func_0x00010002b838(&ppuStack_b0,&UNK_10f408d80);
    func_0x0001072cea6c();
    FUN_1072b6de4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_b0);
    FUN_10725d900(unaff_x19[0x4d]);
    plVar13 = (long *)unaff_x19[0x1a];
    func_0x00010002b838(auStack_168,&UNK_10f408d8b);
    ppuStack_b0 = (undefined **)CONCAT44(ppuStack_b0._4_4_,6);
    func_0x0001072cf670(*(undefined8 *)(*plVar13 + 0x30));
    func_0x000104c3323c(&ppuStack_b0);
    puVar5 = auStack_168;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001072cf9a8();
    (**(code **)(extraout_x8 + 0x60))();
    func_0x00010785f1f4();
    ppuStack_b0 = (undefined **)((ulong)ppuStack_b0 & 0xffffffffffffff00);
    puVar5 = puVar5 + 0x204;
    FUN_10724e2c8(puVar5,&ppuStack_b0);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x0001073af260();
      ppuStack_b0 = &PTR_FUN_11099b2e8;
      FUN_1072d31bc(unaff_x19[0x23],&ppuStack_b0);
      func_0x0001006393ec(&ppuStack_b0);
    }
    func_0x0001072cf144(unaff_x19[0x15]);
    func_0x0001077c3744(auStack_200);
    (**(code **)(*unaff_x19 + 0x1b0))(&ppuStack_b0);
    func_0x0001072cf144(unaff_x19[0x15]);
    func_0x0001077c3764(auStack_238);
    if (cStack_60 == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_168,auStack_78);
    }
    else {
      func_0x00010002b838(auStack_168,&DAT_10de2cfcf);
    }
    func_0x0001000e1048(auStack_c8,auStack_168,0,7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
    if (cStack_208 == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_e0,auStack_238);
    }
    else {
      func_0x0001072d03c8();
      func_0x00010002b838(auStack_e0);
    }
    in_ZR = cStack_208 == '\x01';
    if ((bool)in_ZR) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_f8,auStack_220);
    }
    else {
      func_0x0001072d03c8();
      func_0x00010002b838(auStack_f8);
    }
    auStack_168[0] = 6;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x0001072cfaa8();
    uStack_140 = 0;
    uStack_120 = 0;
    uStack_11c = 1;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_118 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_180,auStack_200);
    FUN_10726e300(auStack_168,"style",auStack_180);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_198,auStack_c8)
    ;
    func_0x0001072cfd84();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1b0,auStack_e0)
    ;
    func_0x0001072cfd84();
    puVar6 = auStack_1c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar6,auStack_f8);
    func_0x0001072cfd84();
    auStack_1d8[0] = 1;
    uStack_1d0 = 0;
    uStack_1e8 = *(undefined8 *)(param_1 + 8);
    uStack_1e0 = 3;
    func_0x0001072cf8ac((undefined8 *)(param_1 + 8),puVar6,auStack_1d8,&uStack_1e8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
    func_0x0001072cfe54();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
    FUN_107262330(auStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    FUN_1072bb8ec(auStack_238);
    func_0x0001072bb92c();
    func_0x0001072cfdf0();
  }
  func_0x0001072cec24();
  func_0x0001072ce098();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar7 = &ppuStack_b0;
  func_0x0001006393ec();
  func_0x0001072cec24();
  func_0x0001072ce94c();
  FUN_1072cb638(pppuVar7 + 5);
  pppuVar8 = pppuVar7;
  FUN_1072bd97c();
  if ((int)pppuVar8 == 0) {
    return;
  }
  ppuVar14 = pppuVar7[10];
  ppuVar2 = pppuVar7[0xb];
  pppppuStack_2d8 = (undefined8 ******)0x0;
  pppppuStack_2d0 = (undefined8 ******)0x0;
  pppppuStack_2c0 = &pppppuStack_2d8;
  pppppuStack_2c8 = (undefined8 ******)0x0;
  uStack_2b8 = 0;
  bVar4 = ppuVar14 <= ppuVar2;
  if ((long)ppuVar2 - (long)ppuVar14 != 0) {
    lVar10 = ((long)ppuVar2 - (long)ppuVar14) / 0x28;
    func_0x0001072d03d4();
    if (bVar4) {
      FUN_1072bdbf4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1072b6db4);
      (*pcVar3)();
    }
    ppppppuVar9 = &pppppuStack_2c8;
    func_0x0001072bdc34();
    pppppuStack_2c8 = ppppppuVar9 + lVar10 * 5;
    pppppuStack_2a8 = &pppppuStack_290;
    pppppuStack_2a0 = &pppppuStack_288;
    uStack_298 = 0;
    pppppuStack_2d8 = ppppppuVar9;
    pppppuStack_2d0 = ppppppuVar9;
    pppppuStack_2b0 = &pppppuStack_2c8;
    pppppuStack_290 = ppppppuVar9;
    for (; pppppuStack_288 = ppppppuVar9, ppuVar14 != ppuVar2; ppuVar14 = ppuVar14 + 5) {
      FUN_10724cbe8(ppppppuVar9,ppuVar14);
      *(undefined1 *)(ppppppuVar9 + 4) = *(undefined1 *)(ppuVar14 + 4);
      ppppppuVar9 = (undefined8 ******)(pppppuStack_288 + 5);
    }
    uStack_298 = 1;
    FUN_1072bdd08(&pppppuStack_2b0);
    pppppuStack_2d0 = ppppppuVar9;
  }
  uStack_2b8 = 1;
  FUN_1072cba30(&pppppuStack_2c0);
  ppuVar2 = pppuVar7[0xb];
  for (ppuVar14 = pppuVar7[10]; ppppppuVar12 = (undefined8 ******)pppppuStack_2d8,
      ppppppuVar9 = (undefined8 ******)pppppuStack_2d0, ppuVar14 != ppuVar2; ppuVar14 = ppuVar14 + 5
      ) {
    ppuVar15 = ppuVar14;
    if (((ulong)ppuVar14[4] & 1) == 0) goto LAB_1072b6d3c;
  }
LAB_1072b6d84:
  for (; ppppppuVar12 != ppppppuVar9; ppppppuVar12 = ppppppuVar12 + 5) {
    func_0x000104c003e8(ppppppuVar12);
  }
  func_0x0001072cbae4(&pppppuStack_2d8);
  return;
LAB_1072b6d3c:
  while (ppuVar11 = ppuVar14 + 5, ppuVar11 != ppuVar2) {
    ppuVar1 = ppuVar14 + 9;
    ppuVar14 = ppuVar11;
    if (*(char *)ppuVar1 == '\x01') {
      func_0x0001072cbabc(ppuVar15,ppuVar11);
      ppuVar15 = ppuVar15 + 5;
    }
  }
  ppppppuVar12 = (undefined8 ******)pppppuStack_2d8;
  ppppppuVar9 = (undefined8 ******)pppppuStack_2d0;
  if (ppuVar15 != pppuVar7[0xb]) {
    func_0x0001072cea6c();
    func_0x0001072cba8c();
    ppppppuVar12 = (undefined8 ******)pppppuStack_2d8;
    ppppppuVar9 = (undefined8 ******)pppppuStack_2d0;
  }
  goto LAB_1072b6d84;
}



/* Entry: 1072b6f34; end: 1072b6f83;  */

void FUN_1072b6f34(long param_1)

{
  code *extraout_x8;
  long *plVar1;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [72];
  
  plVar1 = *(long **)(param_1 + 0x158);
  func_0x0001072bb94c(auStack_78);
  func_0x0001072ce9c4(*(undefined8 *)(*plVar1 + 0xa0));
  (*extraout_x8)();
  func_0x00010725b590(auStack_68);
  return;
}



/* Entry: 1072b6f84; end: 1072b7003;  */

void FUN_1072b6f84(long param_1)

{
  code *extraout_x8;
  long *plVar1;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [72];
  
  plVar1 = *(long **)(param_1 + 0x150);
  func_0x0001072bb94c(auStack_78);
  func_0x0001072ce9c4(*(undefined8 *)(*plVar1 + 0xa0));
  (*extraout_x8)();
  func_0x00010725b590(auStack_68);
  return;
}



/* Entry: 1072b7004; end: 1072b705b;  */

void FUN_1072b7004(long param_1)

{
  code *extraout_x8;
  undefined1 auStack_38 [24];
  
  if (*(char *)(param_1 + 0x2f1) == '\x01') {
    *(undefined1 *)(param_1 + 0x2f1) = 0;
    func_0x000100060b18(auStack_38,&PTR_DAT_11099a6d8);
    func_0x0001072cedc0();
    func_0x0001072ce9c4();
    (*extraout_x8)();
    func_0x0001003ac718();
  }
  return;
}



/* Entry: 1072b705c; end: 1072b70f7;  */

void FUN_1072b705c(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  
  lVar1 = *(long *)(param_2 + 0x130);
  *param_1 = *(undefined8 *)(param_2 + 0x128);
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001072ced88(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072b70f8; end: 1072b711b;  */

long FUN_1072b70f8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001072cef30();
  func_0x0001072cc6dc();
  lVar1 = unaff_x19;
  func_0x0001072cea78();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1072b711c; end: 1072b730b;  */

undefined8 * FUN_1072b711c(uint param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  int extraout_w10;
  long unaff_x19;
  long *plVar3;
  uint unaff_s8;
  undefined8 auStack_128 [2];
  byte bStack_118;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [7];
  undefined8 uStack_80;
  long lStack_78;
  
  func_0x0001072ce1e4();
  func_0x0001072cefbc();
  puVar1 = param_2;
  if ((*(long *)(unaff_x19 + 0xa8) != 0) &&
     (plVar3 = *(long **)(unaff_x19 + 0x160), plVar3 != (long *)0x0)) {
    func_0x0001072cf6ac();
    func_0x0001072cfd98();
    puVar1 = param_2;
    func_0x0001072cf218();
    if (param_2 == (undefined8 *)0x0) {
      (**(code **)(*plVar3 + 0x38))(&uStack_80,plVar3);
      lStack_c8 = lStack_78;
      uStack_d0 = uStack_80;
      if (lStack_78 != 0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10 != 0);
      }
      param_1 = (uint)uStack_80;
      FUN_10728fdb0(&uStack_c0,&uStack_d0);
      FUN_1072902b4(&uStack_d0);
      puStack_e0 = &uStack_80;
      func_0x0001072bc34c();
      func_0x0001072cf6ac();
      func_0x0001072cef44();
      auStack_b8[0] = uStack_c0;
      uStack_c0 = 0;
      puVar1 = puStack_e0;
      func_0x000107786a64();
      func_0x0001072cf45c();
      if (puVar1 != (undefined8 *)0x0) {
        func_0x0001072ce338();
      }
      func_0x0001072cf218();
      uStack_d8 = 0;
      func_0x000104c302a4(auStack_b8,&UNK_10f40913d,0x1a);
      FUN_1072627ac(&uStack_80,auStack_b8);
      func_0x0001072cfdd0();
      func_0x00010724b3d8(&uStack_80);
      func_0x000104c2f714(auStack_b8);
      if (puStack_e0 != (undefined8 *)0x0) {
        func_0x0001072ce338();
      }
      puVar1 = &uStack_d8;
      func_0x0001072bc370();
      func_0x0001072cf678();
      if (puVar1 != (undefined8 *)0x0) {
        func_0x0001072ce338();
      }
    }
  }
  func_0x0001072cec24();
  func_0x0001072ce098();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(&uStack_80);
  func_0x000104c2f714(auStack_b8);
  if (puStack_e0 != (undefined8 *)0x0) {
    func_0x0001072cf848();
  }
  puVar1 = &uStack_d8;
  func_0x0001072bc370();
  func_0x0001072cf678();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001072ce338();
  }
  func_0x0001072cec24();
  func_0x0001072ce94c();
  if (puVar1[0x15] != 0) {
    func_0x0001072cf144();
    func_0x0001077c3774(auStack_128);
    if (bStack_118 == 1) {
      unaff_s8 = param_1;
      func_0x000107781994(auStack_128[0]);
    }
    FUN_10725af38(auStack_128);
    if ((bStack_118 & 1) != 0) {
      uVar2 = 0x100000000;
      goto LAB_1072b7370;
    }
  }
  uVar2 = 0;
  unaff_s8 = unaff_s8 & 0xffffff00;
LAB_1072b7370:
  return (undefined8 *)(uVar2 | unaff_s8);
}



/* Entry: 1072b730c; end: 1072b7397;  */

ulong FUN_1072b730c(uint param_1,long param_2)

{
  ulong uVar1;
  uint unaff_s8;
  undefined8 auStack_48 [2];
  byte bStack_38;
  
  if (*(long *)(param_2 + 0xa8) != 0) {
    func_0x0001072cf144();
    func_0x0001077c3774(auStack_48);
    if (bStack_38 == 1) {
      unaff_s8 = param_1;
      func_0x000107781994(auStack_48[0]);
    }
    FUN_10725af38(auStack_48);
    if ((bStack_38 & 1) != 0) {
      uVar1 = 0x100000000;
      goto LAB_1072b7370;
    }
  }
  uVar1 = 0;
  unaff_s8 = unaff_s8 & 0xffffff00;
LAB_1072b7370:
  return uVar1 | unaff_s8;
}



/* Entry: 1072b7398; end: 1072b74eb;  */

undefined8 * FUN_1072b7398(void)

{
  undefined1 in_ZR;
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 *puStack_a0;
  undefined1 uStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  undefined8 auStack_60 [6];
  
  func_0x0001072ceb38();
  func_0x0001072ce248();
  FUN_1072b74ec(auStack_60);
  func_0x0001072cf014();
  uStack_98 = 0;
  lVar3 = 1;
  pppuVar1 = &ppuStack_c0;
  puStack_a0 = (undefined1 *)&ppuStack_d0;
  FUN_1072bba54();
  ppuStack_c0 = pppuVar1 + lVar3 * 5;
  ppuStack_88 = &ppuStack_70;
  ppuStack_80 = &ppuStack_68;
  uStack_78 = 0;
  ppuStack_d0 = pppuVar1;
  ppuStack_c8 = pppuVar1;
  ppuStack_90 = &ppuStack_c0;
  ppuStack_70 = pppuVar1;
  ppuStack_68 = pppuVar1;
  FUN_1072b74ec();
  pppuVar1 = (undefined8 ***)(ppuStack_68 + 5);
  uStack_78 = 1;
  ppuStack_68 = pppuVar1;
  FUN_1072bba98(&ppuStack_90);
  uStack_98 = 1;
  ppuStack_c8 = pppuVar1;
  func_0x0001072bbb00(&puStack_a0);
  func_0x0001072cfdc0(auStack_b8);
  func_0x0001079311f0();
  func_0x0001072bbb8c(auStack_b8);
  func_0x0001072bbc14(&ppuStack_d0);
  puVar2 = auStack_60;
  func_0x000107931394(puVar2);
  func_0x0001072ce098();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001072cf3ec();
  func_0x0001072bbb8c();
  func_0x0001072bbc14(&ppuStack_d0);
  puVar2 = auStack_60;
  func_0x000107931394();
  func_0x0001072ce900();
  *puVar2 = &PTR_DAT_1109ecf60;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  func_0x000107931364();
  return puVar2;
}



/* Entry: 1072b74ec; end: 1072b74f7;  */

undefined8 * FUN_1072b74ec(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_1109ecf60;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x000107931364(param_1,param_2);
  return param_1;
}



/* Entry: 1072b74f8; end: 1072b781f;  */

void FUN_1072b74f8(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined ***pppuVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  ulong uVar15;
  undefined8 extraout_x8_01;
  long lVar16;
  ulong uVar17;
  int extraout_w10;
  long *unaff_x19;
  undefined ***pppuVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined ***unaff_x22;
  long lVar21;
  undefined ***unaff_x23;
  undefined ***unaff_x24;
  undefined **ppuVar22;
  undefined **ppuVar23;
  double dVar24;
  undefined8 in_stack_00000050;
  long alStack_1fe0 [2];
  undefined1 auStack_1fd0 [8];
  undefined1 auStack_1fc8 [24];
  undefined8 uStack_1fb0;
  undefined8 uStack_1fa8;
  undefined8 uStack_1fa0;
  undefined8 uStack_1f98;
  undefined ***pppuStack_1f90;
  undefined **ppuStack_1f88;
  undefined8 *puStack_1f80;
  undefined8 *puStack_1f78;
  undefined8 ****ppppuStack_1f70;
  code *pcStack_1f68;
  undefined1 auStack_1f58 [8];
  undefined *apuStack_1f50 [8];
  undefined ***pppuStack_1f10;
  undefined **ppuStack_1f08;
  undefined8 *puStack_1f00;
  undefined8 *puStack_1ef8;
  undefined8 ***pppuStack_1ef0;
  code *pcStack_1ee8;
  undefined **ppuStack_1ed8;
  undefined **ppuStack_1ed0;
  undefined *puStack_1ec8;
  undefined ***apppuStack_1ec0 [7];
  undefined *apuStack_1e88 [7];
  undefined1 uStack_1e50;
  undefined8 uStack_1e48;
  undefined ***pppuStack_1e40;
  undefined ***pppuStack_1e38;
  undefined ***pppuStack_1e30;
  undefined8 *puStack_1e28;
  undefined8 *puStack_1e20;
  undefined8 *puStack_1e18;
  undefined8 **ppuStack_1e10;
  code *pcStack_1e08;
  undefined8 uStack_1e00;
  undefined8 uStack_1df8;
  undefined8 uStack_1df0;
  undefined8 auStack_1de0 [3];
  undefined1 uStack_1dc8;
  undefined1 uStack_1db0;
  undefined1 uStack_1da8;
  undefined1 uStack_1d98;
  undefined1 uStack_1d90;
  undefined1 uStack_1d78;
  undefined1 uStack_1d70;
  undefined1 uStack_1d58;
  undefined1 auStack_1d50 [40];
  undefined1 auStack_1d28 [24];
  undefined8 *puStack_1d10;
  undefined ***pppuStack_1d00;
  undefined **ppuStack_1cf8;
  undefined ***pppuStack_1cf0;
  undefined8 *puStack_1ce0;
  code *pcStack_1cd8;
  undefined **ppuStack_1cc8;
  undefined **ppuStack_1cc0;
  double dStack_1cb8;
  undefined **appuStack_1cb0 [112];
  undefined1 auStack_1930 [96];
  undefined1 auStack_18d0 [192];
  undefined1 auStack_1810 [192];
  undefined1 auStack_1750 [192];
  undefined1 auStack_1690 [480];
  undefined **appuStack_14b0 [198];
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined **ppuStack_e60;
  undefined ***pppuStack_e58;
  float fStack_e50;
  float fStack_e4c;
  undefined ***pppuStack_e48;
  undefined1 auStack_a80 [2672];
  undefined8 uStack_10;
  
  func_0x0001072cfcb0();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001072ce294();
  uVar13 = 0;
  uStack_10 = extraout_x8;
  func_0x000107415a58(appuStack_1cb0,1,0);
  iVar6 = (int)*(undefined8 *)(param_1 + 0xb0);
  func_0x0001072cf5a4();
  (*extraout_x8_00)();
  if (iVar6 == 0) {
    lVar16 = **(long **)(param_1 + 0xa8);
    unaff_x22 = &ppuStack_e60;
    _memcpy(&ppuStack_e60,lVar16 + 0x58,0xe50);
    unaff_x23 = appuStack_1cb0;
    _memmove(appuStack_1cb0,lVar16 + 0x58,0x380);
    _memmove(auStack_1930,lVar16 + 0x3d8,0x60);
    _memmove(auStack_1810,lVar16 + 0x4f8,0xc0);
    _memmove(auStack_1750,lVar16 + 0x5b8,0xc0);
    func_0x0001072cf640(auStack_18d0,auStack_a80);
    _memmove(auStack_1690,lVar16 + 0x678,0x1e0);
    pppuVar7 = appuStack_14b0;
    uVar13 = 0x630;
    _memmove(pppuVar7,lVar16 + 0x858,0x630);
    uStack_e78 = *(undefined8 *)(lVar16 + 0xe90);
    uStack_e80 = *(undefined8 *)(lVar16 + 0xe88);
    uStack_e68 = *(undefined8 *)(lVar16 + 0xea0);
    uStack_e70 = *(undefined8 *)(lVar16 + 0xe98);
  }
  else {
    pppuStack_e58 = appuStack_1cb0;
    ppuStack_e60 = &PTR_FUN_11099b7d8;
    pppuStack_e48 = &ppuStack_e60;
    FUN_107292e94(*(undefined8 *)(param_1 + 0xb0),&ppuStack_e60);
    pppuVar7 = &ppuStack_e60;
    func_0x000107283e00();
  }
  pppuVar18 = (undefined ***)0x0;
  func_0x0001072cf0fc();
  lVar16 = *param_2;
  lVar3 = param_2[1];
  ppuVar23 = &PTR_DAT_1109ec560;
  ppuStack_1cc8 = &PTR_DAT_1109ec560;
  do {
    uVar5 = lVar16 == lVar3;
    if ((bool)uVar5) {
      func_0x0001072ce0cc(uStack_10);
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x000107283e00(&ppuStack_e60);
      func_0x0001072ce94c();
      puVar9 = &uStack_1e00;
      pcStack_1cd8 = FUN_1072b7820;
      pppuStack_1d00 = unaff_x22;
      ppuStack_1cf8 = ppuVar23;
      pppuStack_1cf0 = pppuVar7;
      puStack_1ce0 = &stack0x00000050;
      func_0x0001072ce1e4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1de0);
      uStack_1dc8 = 0;
      uStack_1db0 = 0;
      uStack_1da8 = 0;
      uStack_1d98 = 0;
      uStack_1d90 = 0;
      uStack_1d78 = 0;
      uStack_1d70 = 0;
      uStack_1d58 = 0;
      func_0x00010028b0c8(auStack_1d50,uVar13);
      puVar19 = (undefined8 *)unaff_x19[0x41];
      func_0x0001072cfea4();
      puStack_1d10 = (undefined8 *)0x0;
      func_0x0001072cedd4();
      *puVar9 = &PTR_SUB_11099b858;
      puVar9[2] = uStack_1df8;
      puVar9[1] = uStack_1e00;
      uStack_1e00 = 0;
      uStack_1df8 = 0;
      puVar9[3] = uStack_1df0;
      puVar9[4] = unaff_x19;
      puVar11 = auStack_1de0;
      puVar14 = auStack_1d28;
      puStack_1d10 = puVar9;
      func_0x00010734cfc0(puVar19,puVar11,puVar14);
      func_0x0001072cc30c(auStack_1d28);
      func_0x0001072cfd64();
      puVar9 = auStack_1de0;
      FUN_1072bbcb0();
      func_0x0001072ce098();
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001072cc30c(auStack_1d28);
      func_0x0001072cfd64();
      puVar10 = auStack_1de0;
      FUN_1072bbcb0();
      func_0x0001072ce900();
      pcStack_1e08 = FUN_1072b7948;
      pppuStack_1e40 = unaff_x24;
      pppuStack_1e38 = unaff_x23;
      pppuStack_1e30 = unaff_x22;
      puStack_1e28 = auStack_1de0;
      puStack_1e20 = puVar19;
      puStack_1e18 = puVar9;
      ppuStack_1e10 = &puStack_1ce0;
      func_0x0001072ce328();
      uStack_1e48 = extraout_x8_01;
      if ((long *)puVar10[0x15] != (long *)0x0) {
        unaff_x22 = *(undefined ****)(*(long *)puVar10[0x15] + 0x10f8);
        FUN_107262e9c(apuStack_1e88,puVar14);
        func_0x0001077c38ac(unaff_x22,apuStack_1e88);
        pppuVar7 = unaff_x22;
        func_0x0001072cf314();
        puVar9 = param_4;
        puVar19 = puVar10;
        if (unaff_x22 == (undefined ***)0x0) {
          func_0x0001072ced58();
          *pppuVar7 = &PTR_DAT_1109980f8;
          lVar16 = puVar11[1];
          ppuVar23 = (undefined **)*puVar11;
          pppuVar7[2] = (undefined **)puVar11[1];
          pppuVar7[1] = ppuVar23;
          if (lVar16 != 0) {
            do {
              func_0x0001072ced88();
            } while (extraout_w10 != 0);
          }
          ppuVar23 = apuStack_1e88;
          func_0x0001072cf660();
          func_0x0001072cef44();
          ppuVar22 = ppuVar23;
          apppuStack_1ec0[0] = pppuVar7;
          func_0x000107786a64();
          func_0x0001072cf678();
          if (ppuVar22 != (undefined **)0x0) {
            func_0x0001072ce338();
          }
          func_0x0001072cf314();
          puVar19 = *(undefined8 **)(*(long *)puVar10[0x15] + 0x10f8);
          puStack_1ec8 = (undefined *)0x0;
          uVar5 = *(char *)(param_4 + 3) == '\x01';
          if ((bool)uVar5) {
            ppuStack_1ed0 = ppuVar23;
            func_0x00010549026c(param_4);
            FUN_107262e9c(apppuStack_1ec0,param_4);
            FUN_1072627ac(apuStack_1e88,apppuStack_1ec0);
            func_0x0001072cfdd0();
            func_0x00010724b3d8(apuStack_1e88);
            func_0x0001072cf0a4();
            ppuVar23 = ppuStack_1ed0;
          }
          else {
            apuStack_1e88[0]._0_1_ = 0;
            uStack_1e50 = 0;
            ppuStack_1ed8 = ppuVar23;
            func_0x0001072cfdd0();
            func_0x00010724b3d8(apuStack_1e88);
            ppuVar23 = ppuStack_1ed8;
          }
          if (ppuVar23 != (undefined **)0x0) {
            func_0x0001072ce338();
          }
          func_0x0001072bc370(&puStack_1ec8);
          unaff_x22 = pppuVar7;
        }
      }
      func_0x0001072ce0cc(uStack_1e48);
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001072cf474();
      func_0x00010724b3d8();
      func_0x0001072cf0a4();
      ppuVar23 = ppuStack_1ed0;
      if (ppuStack_1ed0 != (undefined **)0x0) {
        func_0x0001072cf848();
      }
      ppuVar22 = &puStack_1ec8;
      func_0x0001072bc370();
      func_0x0001072ce900();
      ppuStack_1f08 = ppuVar23;
      pcStack_1ee8 = FUN_1072b7b60;
      pppuStack_1f10 = unaff_x22;
      puStack_1f00 = puVar19;
      puStack_1ef8 = puVar9;
      pppuStack_1ef0 = &ppuStack_1e10;
      func_0x0001072ce248();
      if (ppuVar22[0x15] != (undefined *)0x0) {
        func_0x0001072ce940();
        ppuVar23 = apuStack_1f50;
        FUN_107262e9c();
        func_0x0001072cfd98();
        ppuVar22 = apuStack_1f50;
        func_0x000104c2f714();
        if (ppuVar23 != (undefined **)0x0) {
          ppuVar22 = (undefined **)ppuVar23[1];
          (**(code **)(*ppuVar22 + 0x30))();
          uVar5 = ppuVar22 == &PTR_DAT_1109d73c0;
          if ((bool)uVar5) {
            puVar19 = *(undefined8 **)(*(long *)puVar19[0x15] + 0x10f8);
            FUN_107262e9c(apuStack_1f50,puVar9);
            puVar11 = puVar19;
            func_0x0001077c3904(auStack_1f58,puVar19,apuStack_1f50);
            func_0x0001072cf558();
            if (puVar11 != (undefined8 *)0x0) {
              func_0x0001072ce338();
            }
            ppuVar22 = apuStack_1f50;
            func_0x000104c2f714();
          }
        }
      }
      func_0x0001072ce098();
      if ((bool)uVar5) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001072cf12c();
      func_0x000104c2f714();
      func_0x0001072ce900();
      pcStack_1f68 = FUN_1072b7c3c;
      plVar20 = (long *)ppuVar22[0x16];
      pppuStack_1f90 = unaff_x22;
      ppuStack_1f88 = ppuVar23;
      puStack_1f80 = puVar19;
      puStack_1f78 = puVar9;
      ppppuStack_1f70 = &pppuStack_1ef0;
      func_0x0001072cf668();
      if ((*(byte *)(plVar20 + 1) & 1) == 0) {
        plVar12 = plVar20;
        (**(code **)(*plVar20 + 0x10))();
        if ((int)plVar12 == 0) {
          func_0x0001072cf9fc();
          func_0x0001072cff04(alStack_1fe0);
          if (alStack_1fe0[0] != 0) {
            uStack_1f98 = 1;
            uStack_1fa0 = 0x110;
            func_0x0001072cfcf0();
            uStack_1fa8 = 0;
            uStack_1fb0 = 0;
            func_0x0001072cfd18(auStack_1fd0);
            func_0x0001072cf69c();
            func_0x0001072cfdc8();
            func_0x0001072cf45c();
            if (plVar12 != (long *)0x0) {
              func_0x0001072ce338();
            }
          }
          func_0x0001072cf2e8();
          func_0x0001072cefac();
        }
        else {
          (**(code **)(*plVar20 + 0x18))();
          if (plVar20 != (long *)0x0) {
            func_0x0001072d0288();
            func_0x0001072cf630();
            FUN_107279298(auStack_1fc8);
          }
        }
      }
      func_0x0001072cec0c();
      return;
    }
    ppuVar22 = *(undefined ***)(lVar16 + 0x10);
    dVar24 = *(double *)(lVar16 + 0x18);
    func_0x0001072cfec8(&ppuStack_e60);
    FUN_107259180(&ppuStack_e60);
    ppuStack_1cc0 = ppuVar22;
    dStack_1cb8 = dVar24;
    func_0x0001072cf860(appuStack_1cb0);
    ppuStack_e60 = ppuVar22;
    pppuStack_e58 = (undefined ***)dVar24;
    FUN_107259504(&ppuStack_1cc0,&ppuStack_e60);
    func_0x000107417dc0(appuStack_1cb0,&ppuStack_1cc0);
    pppuStack_e58 = (undefined ***)0x0;
    pppuStack_e48 = (undefined ***)((ulong)pppuStack_e48 & 0xffffffff00000000);
    fStack_e50 = (float)(double)ppuVar22;
    fStack_e4c = (float)dVar24;
    ppuStack_e60 = ppuVar23;
    if (pppuVar18 < (undefined ***)unaff_x19[2]) {
      FUN_1072bbc38(pppuVar18,&ppuStack_e60);
    }
    else {
      lVar21 = (long)pppuVar18 - *unaff_x19;
      uVar1 = (lVar21 >> 5) + 1;
      if (uVar1 >> 0x3b != 0) {
        FUN_1072bbca4();
LAB_1072b77d4:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1072b77d8);
        (*pcVar4)();
      }
      uVar15 = unaff_x19[2] - *unaff_x19;
      uVar17 = (long)uVar15 >> 4;
      if (uVar17 <= uVar1) {
        uVar17 = uVar1;
      }
      if (0x7fffffffffffffdf < uVar15) {
        uVar17 = 0x7ffffffffffffff;
      }
      if (uVar17 == 0) {
        lVar8 = 0;
      }
      else {
        if (uVar17 >> 0x3b != 0) {
          func_0x000104bd35f4();
          goto LAB_1072b77d4;
        }
        lVar8 = uVar17 << 5;
        __Znwm();
      }
      unaff_x22 = (undefined ***)(lVar8 + lVar21);
      FUN_1072bbc38(unaff_x22,&ppuStack_e60);
      unaff_x23 = (undefined ***)*unaff_x19;
      lVar2 = (long)unaff_x22 + ((long)unaff_x23 - (long)pppuVar18);
      lVar21 = lVar2;
      for (unaff_x24 = unaff_x23; unaff_x24 != pppuVar18; unaff_x24 = unaff_x24 + 4) {
        FUN_1072bbc38(lVar21,unaff_x24);
        lVar21 = lVar21 + 0x20;
      }
      for (; unaff_x23 != pppuVar18; unaff_x23 = unaff_x23 + 4) {
        func_0x0001079311cc(unaff_x23);
      }
      lVar21 = *unaff_x19;
      *unaff_x19 = lVar2;
      unaff_x19[2] = lVar8 + uVar17 * 0x20;
      ppuVar23 = ppuStack_1cc8;
      pppuVar18 = unaff_x22;
      if (lVar21 != 0) {
        __ZdlPv();
        ppuVar23 = ppuStack_1cc8;
      }
    }
    pppuVar18 = pppuVar18 + 4;
    unaff_x19[1] = (long)pppuVar18;
    pppuVar7 = &ppuStack_e60;
    func_0x0001079311cc();
    lVar16 = lVar16 + 0x28;
  } while( true );
}



/* Entry: 1072b7820; end: 1072b7947;  */

void FUN_1072b7820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 extraout_x8;
  long lVar9;
  int extraout_w10;
  long unaff_x19;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *unaff_x22;
  undefined8 uVar12;
  long alStack_310 [2];
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [24];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 ***pppuStack_2a0;
  code *pcStack_298;
  undefined1 auStack_288 [8];
  undefined *apuStack_280 [8];
  undefined8 *puStack_240;
  undefined **ppuStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined *puStack_1f8;
  undefined8 *apuStack_1f0 [7];
  undefined *apuStack_1b8 [7];
  undefined1 uStack_180;
  undefined8 uStack_178;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 auStack_110 [3];
  undefined1 uStack_f8;
  undefined1 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_88;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  
  puVar1 = &uStack_130;
  func_0x0001072ce1e4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_110);
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  func_0x00010028b0c8(auStack_80,param_3);
  puVar10 = *(undefined8 **)(unaff_x19 + 0x208);
  func_0x0001072cfea4();
  puStack_40 = (undefined8 *)0x0;
  func_0x0001072cedd4();
  *puVar1 = &PTR_SUB_11099b858;
  puVar1[2] = uStack_128;
  puVar1[1] = uStack_130;
  uStack_130 = 0;
  uStack_128 = 0;
  puVar1[3] = uStack_120;
  puVar1[4] = unaff_x19;
  puVar6 = auStack_110;
  puVar8 = auStack_58;
  puStack_40 = puVar1;
  func_0x00010734cfc0(puVar10,puVar6,puVar8);
  func_0x0001072cc30c(auStack_58);
  func_0x0001072cfd64();
  puVar1 = auStack_110;
  FUN_1072bbcb0();
  func_0x0001072ce098();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072cc30c(auStack_58);
  func_0x0001072cfd64();
  puVar2 = auStack_110;
  FUN_1072bbcb0();
  func_0x0001072ce900();
  pcStack_138 = FUN_1072b7948;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x0001072ce328();
  uStack_178 = extraout_x8;
  if ((long *)puVar2[0x15] != (long *)0x0) {
    unaff_x22 = *(undefined8 **)(*(long *)puVar2[0x15] + 0x10f8);
    FUN_107262e9c(apuStack_1b8,puVar8);
    func_0x0001077c38ac(unaff_x22,apuStack_1b8);
    puVar3 = unaff_x22;
    func_0x0001072cf314();
    puVar1 = param_4;
    puVar10 = puVar2;
    if (unaff_x22 == (undefined8 *)0x0) {
      func_0x0001072ced58();
      *puVar3 = &PTR_DAT_1109980f8;
      lVar9 = puVar6[1];
      uVar12 = *puVar6;
      puVar3[2] = puVar6[1];
      puVar3[1] = uVar12;
      if (lVar9 != 0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10 != 0);
      }
      ppuVar4 = apuStack_1b8;
      func_0x0001072cf660();
      func_0x0001072cef44();
      ppuVar5 = ppuVar4;
      apuStack_1f0[0] = puVar3;
      func_0x000107786a64();
      func_0x0001072cf678();
      if (ppuVar5 != (undefined **)0x0) {
        func_0x0001072ce338();
      }
      func_0x0001072cf314();
      puVar10 = *(undefined8 **)(*(long *)puVar2[0x15] + 0x10f8);
      puStack_1f8 = (undefined *)0x0;
      in_ZR = *(char *)(param_4 + 3) == '\x01';
      if ((bool)in_ZR) {
        ppuStack_200 = ppuVar4;
        func_0x00010549026c(param_4);
        FUN_107262e9c(apuStack_1f0,param_4);
        FUN_1072627ac(apuStack_1b8,apuStack_1f0);
        func_0x0001072cfdd0();
        func_0x00010724b3d8(apuStack_1b8);
        func_0x0001072cf0a4();
        ppuVar4 = ppuStack_200;
      }
      else {
        apuStack_1b8[0]._0_1_ = 0;
        uStack_180 = 0;
        ppuStack_208 = ppuVar4;
        func_0x0001072cfdd0();
        func_0x00010724b3d8(apuStack_1b8);
        ppuVar4 = ppuStack_208;
      }
      if (ppuVar4 != (undefined **)0x0) {
        func_0x0001072ce338();
      }
      func_0x0001072bc370(&puStack_1f8);
      unaff_x22 = puVar3;
    }
  }
  func_0x0001072ce0cc(uStack_178);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001072cf474();
    func_0x00010724b3d8();
    func_0x0001072cf0a4();
    ppuVar4 = ppuStack_200;
    if (ppuStack_200 != (undefined **)0x0) {
      func_0x0001072cf848();
    }
    ppuVar5 = &puStack_1f8;
    func_0x0001072bc370();
    func_0x0001072ce900();
    ppuStack_238 = ppuVar4;
    pcStack_218 = FUN_1072b7b60;
    puStack_240 = unaff_x22;
    puStack_230 = puVar10;
    puStack_228 = puVar1;
    ppuStack_220 = &puStack_140;
    func_0x0001072ce248();
    if (ppuVar5[0x15] != (undefined *)0x0) {
      func_0x0001072ce940();
      ppuVar4 = apuStack_280;
      FUN_107262e9c();
      func_0x0001072cfd98();
      ppuVar5 = apuStack_280;
      func_0x000104c2f714();
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar5 = (undefined **)ppuVar4[1];
        (**(code **)(*ppuVar5 + 0x30))();
        in_ZR = ppuVar5 == &PTR_DAT_1109d73c0;
        if ((bool)in_ZR) {
          puVar10 = *(undefined8 **)(*(long *)puVar10[0x15] + 0x10f8);
          FUN_107262e9c(apuStack_280,puVar1);
          puVar6 = puVar10;
          func_0x0001077c3904(auStack_288,puVar10,apuStack_280);
          func_0x0001072cf558();
          if (puVar6 != (undefined8 *)0x0) {
            func_0x0001072ce338();
          }
          ppuVar5 = apuStack_280;
          func_0x000104c2f714();
        }
      }
    }
    func_0x0001072ce098();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072cf12c();
    func_0x000104c2f714();
    func_0x0001072ce900();
    pcStack_298 = FUN_1072b7c3c;
    plVar11 = (long *)ppuVar5[0x16];
    puStack_2c0 = unaff_x22;
    ppuStack_2b8 = ppuVar4;
    puStack_2b0 = puVar10;
    puStack_2a8 = puVar1;
    pppuStack_2a0 = &ppuStack_220;
    func_0x0001072cf668();
    if ((*(byte *)(plVar11 + 1) & 1) == 0) {
      plVar7 = plVar11;
      (**(code **)(*plVar11 + 0x10))();
      if ((int)plVar7 == 0) {
        func_0x0001072cf9fc();
        func_0x0001072cff04(alStack_310);
        if (alStack_310[0] != 0) {
          uStack_2c8 = 1;
          uStack_2d0 = 0x110;
          func_0x0001072cfcf0();
          uStack_2d8 = 0;
          uStack_2e0 = 0;
          func_0x0001072cfd18(auStack_300);
          func_0x0001072cf69c();
          func_0x0001072cfdc8();
          func_0x0001072cf45c();
          if (plVar7 != (long *)0x0) {
            func_0x0001072ce338();
          }
        }
        func_0x0001072cf2e8();
        func_0x0001072cefac();
      }
      else {
        (**(code **)(*plVar11 + 0x18))();
        if (plVar11 != (long *)0x0) {
          func_0x0001072d0288();
          func_0x0001072cf630();
          FUN_107279298(auStack_2f8);
        }
      }
    }
    func_0x0001072cec0c();
    return;
  }
  return;
}



/* Entry: 1072b7948; end: 1072b7b5f;  */

void FUN_1072b7948(long param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 *unaff_x22;
  undefined8 uVar7;
  long alStack_1e0 [2];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [24];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined1 auStack_158 [8];
  undefined *apuStack_150 [8];
  undefined8 *puStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 *apuStack_c0 [7];
  undefined *apuStack_88 [7];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001072ce328();
  uStack_48 = extraout_x8;
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    unaff_x22 = *(undefined8 **)(**(long **)(param_1 + 0xa8) + 0x10f8);
    FUN_107262e9c(apuStack_88,param_3);
    func_0x0001077c38ac(unaff_x22,apuStack_88);
    puVar1 = unaff_x22;
    func_0x0001072cf314();
    unaff_x19 = param_4;
    unaff_x20 = param_1;
    if (unaff_x22 == (undefined8 *)0x0) {
      func_0x0001072ced58();
      *puVar1 = &PTR_DAT_1109980f8;
      lVar5 = param_2[1];
      uVar7 = *param_2;
      puVar1[2] = param_2[1];
      puVar1[1] = uVar7;
      if (lVar5 != 0) {
        do {
          func_0x0001072ced88();
        } while (extraout_w10 != 0);
      }
      ppuVar2 = apuStack_88;
      func_0x0001072cf660();
      func_0x0001072cef44();
      ppuVar3 = ppuVar2;
      apuStack_c0[0] = puVar1;
      func_0x000107786a64();
      func_0x0001072cf678();
      if (ppuVar3 != (undefined **)0x0) {
        func_0x0001072ce338();
      }
      func_0x0001072cf314();
      unaff_x20 = *(long *)(**(long **)(param_1 + 0xa8) + 0x10f8);
      puStack_c8 = (undefined *)0x0;
      in_ZR = *(char *)(param_4 + 0x18) == '\x01';
      if ((bool)in_ZR) {
        ppuStack_d0 = ppuVar2;
        func_0x00010549026c(param_4);
        FUN_107262e9c(apuStack_c0,param_4);
        FUN_1072627ac(apuStack_88,apuStack_c0);
        func_0x0001072cfdd0();
        func_0x00010724b3d8(apuStack_88);
        func_0x0001072cf0a4();
        ppuVar2 = ppuStack_d0;
      }
      else {
        apuStack_88[0]._0_1_ = 0;
        uStack_50 = 0;
        ppuStack_d8 = ppuVar2;
        func_0x0001072cfdd0();
        func_0x00010724b3d8(apuStack_88);
        ppuVar2 = ppuStack_d8;
      }
      if (ppuVar2 != (undefined **)0x0) {
        func_0x0001072ce338();
      }
      func_0x0001072bc370(&puStack_c8);
      unaff_x22 = puVar1;
    }
  }
  func_0x0001072ce0cc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001072cf474();
    func_0x00010724b3d8();
    func_0x0001072cf0a4();
    ppuVar2 = ppuStack_d0;
    if (ppuStack_d0 != (undefined **)0x0) {
      func_0x0001072cf848();
    }
    ppuVar3 = &puStack_c8;
    func_0x0001072bc370();
    func_0x0001072ce900();
    ppuStack_108 = ppuVar2;
    pcStack_e8 = FUN_1072b7b60;
    puStack_110 = unaff_x22;
    lStack_100 = unaff_x20;
    lStack_f8 = unaff_x19;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x0001072ce248();
    if (ppuVar3[0x15] != (undefined *)0x0) {
      func_0x0001072ce940();
      ppuVar2 = apuStack_150;
      FUN_107262e9c();
      func_0x0001072cfd98();
      ppuVar3 = apuStack_150;
      func_0x000104c2f714();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar3 = (undefined **)ppuVar2[1];
        (**(code **)(*ppuVar3 + 0x30))();
        in_ZR = ppuVar3 == &PTR_DAT_1109d73c0;
        if ((bool)in_ZR) {
          unaff_x20 = *(long *)(**(long **)(unaff_x20 + 0xa8) + 0x10f8);
          FUN_107262e9c(apuStack_150,unaff_x19);
          lVar5 = unaff_x20;
          func_0x0001077c3904(auStack_158,unaff_x20,apuStack_150);
          func_0x0001072cf558();
          if (lVar5 != 0) {
            func_0x0001072ce338();
          }
          ppuVar3 = apuStack_150;
          func_0x000104c2f714();
        }
      }
    }
    func_0x0001072ce098();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001072cf12c();
    func_0x000104c2f714();
    func_0x0001072ce900();
    pcStack_168 = FUN_1072b7c3c;
    plVar6 = (long *)ppuVar3[0x16];
    puStack_190 = unaff_x22;
    ppuStack_188 = ppuVar2;
    lStack_180 = unaff_x20;
    lStack_178 = unaff_x19;
    ppuStack_170 = &puStack_f0;
    func_0x0001072cf668();
    if ((*(byte *)(plVar6 + 1) & 1) == 0) {
      plVar4 = plVar6;
      (**(code **)(*plVar6 + 0x10))();
      if ((int)plVar4 == 0) {
        func_0x0001072cf9fc();
        func_0x0001072cff04(alStack_1e0);
        if (alStack_1e0[0] != 0) {
          uStack_198 = 1;
          uStack_1a0 = 0x110;
          func_0x0001072cfcf0();
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          func_0x0001072cfd18(auStack_1d0);
          func_0x0001072cf69c();
          func_0x0001072cfdc8();
          func_0x0001072cf45c();
          if (plVar4 != (long *)0x0) {
            func_0x0001072ce338();
          }
        }
        func_0x0001072cf2e8();
        func_0x0001072cefac();
      }
      else {
        (**(code **)(*plVar6 + 0x18))();
        if (plVar6 != (long *)0x0) {
          func_0x0001072d0288();
          func_0x0001072cf630();
          FUN_107279298(auStack_1c8);
        }
      }
    }
    func_0x0001072cec0c();
    return;
  }
  return;
}



/* Entry: 1072b7b60; end: 1072b7c3b;  */

void FUN_1072b7b60(undefined **param_1)

{
  undefined1 in_ZR;
  undefined **ppuVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long *plVar4;
  long alStack_100 [2];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_78 [8];
  undefined *apuStack_70 [8];
  
  func_0x0001072ce248();
  if (param_1[0x15] != (undefined *)0x0) {
    func_0x0001072ce940();
    ppuVar1 = apuStack_70;
    FUN_107262e9c();
    func_0x0001072cfd98();
    param_1 = apuStack_70;
    func_0x000104c2f714();
    if (ppuVar1 != (undefined **)0x0) {
      param_1 = (undefined **)ppuVar1[1];
      (**(code **)(*param_1 + 0x30))();
      in_ZR = param_1 == &PTR_DAT_1109d73c0;
      if ((bool)in_ZR) {
        lVar3 = *(long *)(**(long **)(unaff_x20 + 0xa8) + 0x10f8);
        FUN_107262e9c(apuStack_70);
        func_0x0001077c3904(auStack_78,lVar3,apuStack_70);
        func_0x0001072cf558();
        if (lVar3 != 0) {
          func_0x0001072ce338();
        }
        param_1 = apuStack_70;
        func_0x000104c2f714();
      }
    }
  }
  func_0x0001072ce098();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072cf12c();
  func_0x000104c2f714();
  func_0x0001072ce900();
  plVar4 = (long *)param_1[0x16];
  func_0x0001072cf668();
  if ((*(byte *)(plVar4 + 1) & 1) == 0) {
    plVar2 = plVar4;
    (**(code **)(*plVar4 + 0x10))();
    if ((int)plVar2 == 0) {
      func_0x0001072cf9fc();
      func_0x0001072cff04(alStack_100);
      if (alStack_100[0] != 0) {
        uStack_b8 = 1;
        uStack_c0 = 0x110;
        func_0x0001072cfcf0();
        uStack_c8 = 0;
        uStack_d0 = 0;
        func_0x0001072cfd18(auStack_f0);
        func_0x0001072cf69c();
        func_0x0001072cfdc8();
        func_0x0001072cf45c();
        if (plVar2 != (long *)0x0) {
          func_0x0001072ce338();
        }
      }
      func_0x0001072cf2e8();
      func_0x0001072cefac();
    }
    else {
      (**(code **)(*plVar4 + 0x18))();
      if (plVar4 != (long *)0x0) {
        func_0x0001072d0288();
        func_0x0001072cf630();
        FUN_107279298(auStack_e8);
      }
    }
  }
  func_0x0001072cec0c();
  return;
}



/* Entry: 1072b7c3c; end: 1072b7d5f;  */

void FUN_1072b7c3c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long alStack_80 [2];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar2 = *(long **)(param_1 + 0xb0);
  func_0x0001072cf668();
  if ((*(byte *)(plVar2 + 1) & 1) == 0) {
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x10))();
    if ((int)plVar1 == 0) {
      func_0x0001072cf9fc();
      func_0x0001072cff04(alStack_80);
      if (alStack_80[0] != 0) {
        uStack_38 = 1;
        uStack_40 = 0x110;
        func_0x0001072cfcf0();
        uStack_48 = 0;
        uStack_50 = 0;
        func_0x0001072cfd18(auStack_70);
        func_0x0001072cf69c();
        func_0x0001072cfdc8();
        func_0x0001072cf45c();
        if (plVar1 != (long *)0x0) {
          func_0x0001072ce338();
        }
      }
      func_0x0001072cf2e8();
      func_0x0001072cefac();
    }
    else {
      (**(code **)(*plVar2 + 0x18))();
      if (plVar2 != (long *)0x0) {
        func_0x0001072d0288();
        func_0x0001072cf630();
        FUN_107279298(auStack_68);
      }
    }
  }
  func_0x0001072cec0c();
  return;
}



/* Entry: 1072b7d60; end: 1072b823b;  */

void FUN_1072b7d60(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined8 extraout_x8;
  undefined **ppuVar10;
  code *extraout_x8_00;
  undefined *puVar11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 in_stack_00000050;
  undefined1 auStack_370 [48];
  long alStack_340 [2];
  undefined1 auStack_330 [8];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [16];
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  long *plStack_2d0;
  undefined **ppuStack_2c8;
  undefined8 *puStack_2c0;
  code *pcStack_2b8;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  int iStack_2a0;
  char cStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *apuStack_258 [14];
  undefined1 auStack_1e8 [64];
  byte bStack_1a8;
  undefined *apuStack_1a0 [7];
  undefined1 auStack_168 [56];
  undefined1 auStack_130 [56];
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [24];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined1 auStack_78 [56];
  undefined1 auStack_40 [56];
  undefined8 uStack_8;
  
  func_0x0001072cfcb0();
  ppuVar9 = param_3;
  func_0x0001072ce940();
  func_0x0001072ce328();
  puStack_290 = &UNK_10e52b660;
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_278 = 0;
  puVar11 = ppuVar9[2];
  uVar5 = ((ulong)puVar11 & 1) == 0;
  ppuVar1 = ppuVar9 + 2;
  if (!(bool)uVar5) {
    ppuVar1 = (undefined **)(puVar11 + 7);
  }
  ppuVar13 = apuStack_258;
  uStack_8 = extraout_x8;
  for (lVar14 = (long)*(int *)(ppuVar9 + 3) << 3; lVar14 != 0; lVar14 = lVar14 + -8) {
    puVar11 = *ppuVar1;
    ppuVar10 = *(undefined ***)(puVar11 + 0x20);
    ppuVar6 = &PTR_PTR_113234288;
    if (ppuVar10 != (undefined **)0x0) {
      ppuVar6 = ppuVar10;
    }
    FUN_1072f2bb4(auStack_1e8,ppuVar6);
    uVar5 = bStack_1a8 == 1;
    if ((bool)uVar5) {
      func_0x0001072cf8f8(*(undefined8 *)(puVar11 + 0x18),auStack_40);
      if ((bStack_1a8 & 1) == 0) {
        func_0x000104bdc2c8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1072b810c);
        (*pcVar4)();
      }
      func_0x0001077765a4(apuStack_258,auStack_1e8,auStack_98);
      ppuVar9 = apuStack_258;
      FUN_107277ec4(apuStack_1a0,auStack_40,ppuVar9);
      FUN_107278574(auStack_78,&puStack_290,apuStack_1a0);
      func_0x00010726aef4(apuStack_1a0);
      func_0x0001072ceeac();
      func_0x0001072d0040();
    }
    FUN_107267ed0(auStack_1e8);
    ppuVar1 = ppuVar1 + 1;
  }
  cVar3 = *(char *)(((ulong)param_3[5] & 0xfffffffffffffffc) + 0x17);
  if (cVar3 < '\0') {
    if (*(long *)(((ulong)param_3[5] & 0xfffffffffffffffc) + 8) != 0) goto LAB_1072b7e68;
LAB_1072b7f24:
    uStack_2b0 = 0;
    cStack_298 = '\0';
  }
  else {
    if (cVar3 == '\0') goto LAB_1072b7f24;
LAB_1072b7e68:
    ppuVar13 = (undefined **)unaff_x20[0x39];
    FUN_107262e9c(apuStack_1a0);
    (**(code **)(*ppuVar13 + 0x78))(&uStack_2b0,ppuVar13,apuStack_1a0);
    func_0x0001072cea50();
    uVar5 = cStack_298 == '\x01';
    if ((bool)uVar5) {
      FUN_107278fec(auStack_1e8,&puStack_290);
      if (iStack_2a0 == 0) {
        unaff_x20 = (long *)CONCAT71(uStack_2af,uStack_2b0);
        bVar2 = *(byte *)(unaff_x19 + 0x17);
        uVar5 = bVar2 == 0;
        ppuVar13 = *(undefined ***)(unaff_x19 + 8);
        if (-1 < (char)bVar2) {
          ppuVar13 = (undefined **)(ulong)bVar2;
        }
        func_0x0001072cf8f8(param_3[6],apuStack_1a0);
        FUN_107284aa4(apuStack_258,apuStack_1a0,1);
        func_0x0001072cee80(*(undefined8 *)(*unaff_x20 + 0xb0));
        ppuVar9 = ppuVar13;
        (*extraout_x8_00)();
        FUN_10726e078(apuStack_258);
        func_0x0001072cea50();
      }
      FUN_10726b264(auStack_1e8);
      goto LAB_1072b80dc;
    }
  }
  cVar3 = *(char *)(((ulong)param_3[7] & 0xfffffffffffffffc) + 0x17);
  if (cVar3 < '\0') {
    if (*(long *)(((ulong)param_3[7] & 0xfffffffffffffffc) + 8) != 0) goto LAB_1072b7f4c;
  }
  else if (cVar3 != '\0') {
LAB_1072b7f4c:
    param_3 = (undefined **)((ulong)param_3[6] & 0xfffffffffffffffc);
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      if (param_3[1] != (undefined *)0x0) goto LAB_1072b7f60;
    }
    else if (*(char *)((long)param_3 + 0x17) != '\0') {
LAB_1072b7f60:
      if (unaff_x20[0x15] != 0) {
        FUN_107262e9c(apuStack_258);
        func_0x0001072cf660(auStack_1e8);
        ppuVar6 = apuStack_1a0;
        func_0x000104c2fe00(ppuVar6,apuStack_258);
        func_0x0001072cfd98();
        ppuVar13 = apuStack_1a0;
        func_0x0001072cea50();
        param_3 = (undefined **)0x0;
        if (ppuVar6 != (undefined **)0x0) {
          func_0x000107781c6c(auStack_40,ppuVar6);
          func_0x000107781c78(auStack_78,ppuVar6);
          FUN_107278fec(&puStack_270,&puStack_290);
          unaff_x20 = (long *)unaff_x20[0x16];
          func_0x000104c2fe00(apuStack_1a0,auStack_40);
          func_0x000104c2fe00(auStack_168,auStack_78);
          func_0x000104c2fe00(auStack_130,apuStack_258);
          func_0x000104c2fe00(auStack_f8,auStack_1e8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c0);
          puStack_a0 = puStack_268;
          puStack_a8 = puStack_270;
          puStack_270 = (undefined *)0x0;
          puStack_268 = (undefined *)0x0;
          ppuStack_80 = (undefined **)0x0;
          param_3 = (undefined **)0x110;
          __Znwm();
          *param_3 = (undefined *)&PTR_SUB_11099b8d8;
          func_0x000104c2fe00(param_3 + 1,apuStack_1a0);
          func_0x000104c2fe00(param_3 + 8,auStack_168);
          func_0x000104c318bc(param_3 + 0xf,auStack_130);
          func_0x000104c318bc(param_3 + 0x16,auStack_f8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (param_3 + 0x1d,auStack_c0);
          param_3[0x21] = puStack_a0;
          param_3[0x20] = puStack_a8;
          puStack_a8 = (undefined *)0x0;
          puStack_a0 = (undefined *)0x0;
          ppuStack_80 = param_3;
          FUN_107292e94(unaff_x20,auStack_98);
          func_0x000107283e00(auStack_98);
          FUN_1072b8388(apuStack_1a0);
          FUN_10726b264(&puStack_270);
          func_0x000104c2f714(auStack_78);
          func_0x0001072d0040();
        }
        func_0x000104c2f714(auStack_1e8);
        func_0x0001072cf314();
      }
      goto LAB_1072b80dc;
    }
  }
  ppuVar9 = &puStack_290;
  func_0x0001072cee80();
  FUN_1072b823c();
LAB_1072b80dc:
  FUN_1072b9760(&uStack_2b0);
  ppuVar6 = &puStack_290;
  FUN_10726ae88();
  func_0x0001072ce0cc(uStack_8);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x000107283e00(auStack_98);
    FUN_1072b8388(apuStack_1a0);
    FUN_10726b264(&puStack_270);
    func_0x000104c2f714(auStack_78);
    func_0x000104c2f714(auStack_40);
    func_0x000104c2f714(auStack_1e8);
    func_0x0001072cf314();
    FUN_1072b9760(&uStack_2b0);
    FUN_10726ae88(&puStack_290);
    func_0x0001072ce900();
    pcStack_2b8 = FUN_1072b823c;
    ppuStack_2f0 = ppuVar1;
    ppuStack_2e8 = apuStack_1a0;
    ppuStack_2e0 = ppuVar13;
    ppuStack_2d8 = param_3;
    plStack_2d0 = unaff_x20;
    ppuStack_2c8 = ppuVar6;
    puStack_2c0 = &stack0x00000050;
    func_0x0001072ce940();
    FUN_107278fec(auStack_370,ppuVar9);
    plVar12 = (long *)unaff_x20[0x16];
    if ((*(byte *)(plVar12 + 1) & 1) == 0) {
      plVar7 = plVar12;
      (**(code **)(*plVar12 + 0x10))();
      if ((int)plVar7 == 0) {
        func_0x0001072cf9fc();
        func_0x0001072cff04(alStack_340);
        if (alStack_340[0] != 0) {
          uStack_2f8 = 1;
          uStack_300 = 0x110;
          func_0x0001072cfcf0();
          puVar8 = auStack_310;
          func_0x000107277f30(puVar8,auStack_370);
          func_0x0001072cfd18(auStack_330);
          func_0x0001072cf69c();
          func_0x0001072cfdc8();
          func_0x0001072cf45c();
          if (puVar8 != (undefined1 *)0x0) {
            func_0x0001072ce338();
          }
        }
        func_0x0001072cf2e8();
        func_0x0001072cefac();
      }
      else {
        (**(code **)(*plVar12 + 0x18))();
        if (plVar12 != (long *)0x0) {
          func_0x0001072d0288();
          func_0x0001072cf630();
          FUN_107279298(auStack_328);
        }
      }
    }
    func_0x0001072cec0c();
    return;
  }
  return;
}



/* Entry: 1072b823c; end: 1072b8387;  */

void FUN_1072b823c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  long unaff_x20;
  long *plVar3;
  undefined1 auStack_c0 [48];
  long alStack_90 [2];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001072ce940();
  FUN_107278fec(auStack_c0,param_3);
  plVar3 = *(long **)(unaff_x20 + 0xb0);
  if ((*(byte *)(plVar3 + 1) & 1) == 0) {
    plVar1 = plVar3;
    (**(code **)(*plVar3 + 0x10))();
    if ((int)plVar1 == 0) {
      func_0x0001072cf9fc();
      func_0x0001072cff04(alStack_90);
      if (alStack_90[0] != 0) {
        uStack_48 = 1;
        uStack_50 = 0x110;
        func_0x0001072cfcf0();
        puVar2 = auStack_60;
        func_0x000107277f30(puVar2,auStack_c0);
        func_0x0001072cfd18(auStack_80);
        func_0x0001072cf69c();
        func_0x0001072cfdc8();
        func_0x0001072cf45c();
        if (puVar2 != (undefined1 *)0x0) {
          func_0x0001072ce338();
        }
      }
      func_0x0001072cf2e8();
      func_0x0001072cefac();
    }
    else {
      (**(code **)(*plVar3 + 0x18))();
      if (plVar3 != (long *)0x0) {
        func_0x0001072d0288();
        func_0x0001072cf630();
        FUN_107279298(auStack_78);
      }
    }
  }
  func_0x0001072cec0c();
  return;
}



/* Entry: 1072b8388; end: 1072b8433;  */

long FUN_1072b8388(long param_1)

{
  FUN_10726b264(param_1 + 0xf8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe0);
  func_0x000104c2f714(param_1 + 0xa8);
  func_0x000104c2f714(param_1 + 0x70);
  func_0x000104c2f714(param_1 + 0x38);
  func_0x0001072ced78();
  return param_1;
}



/* Entry: 1072b8434; end: 1072b84db;  */

void FUN_1072b8434(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined1 auStack_a0 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_38;
  undefined1 uStack_30;
  
  func_0x0001072ce1d0();
  uVar1 = *(undefined8 *)(param_1 + 0x290);
  uStack_40 = param_2[1];
  uStack_48 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  ppuStack_50 = &PTR_SUB_11099a790;
  uStack_60 = 0;
  pppuStack_38 = &ppuStack_50;
  FUN_1072bbe1c(&uStack_60);
  uStack_30 = 1;
  func_0x00010739ebd0(uVar1,&ppuStack_50);
  FUN_1072bb9f4(&ppuStack_50);
  FUN_1072bbe1c(&uStack_70);
  func_0x0001072ce080();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001072cf3d0();
    FUN_1072bb9f4();
    FUN_1072bbe1c(&uStack_70);
    func_0x0001072ce900();
    func_0x0001072cf8bc();
    if (extraout_x8 != 0) {
      do {
        func_0x0001072ced88();
      } while (extraout_w10_00 != 0);
    }
    FUN_1072f5308();
    FUN_1072cd28c(auStack_a0);
    return;
  }
  return;
}



/* Entry: 1072b84dc; end: 1072b8527;  */

void FUN_1072b84dc(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x0001072cf8bc();
  if (extraout_x8 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  FUN_1072f5308();
  FUN_1072cd28c(auStack_30);
  return;
}


