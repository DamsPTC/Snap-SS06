/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a0cfd08; end: 10a0cfd7f;  */

void FUN_10a0cfd08(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x108;
  __Znwm();
  FUN_10a0cfd80();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a0cfd80; end: 10a0cfdcf;  */

undefined8 *
FUN_10a0cfd80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba2088;
  FUN_10a347c5c(param_1 + 3,0,param_4);
  return param_1;
}



/* Entry: 10a0cfdd0; end: 10a0cfddf;  */

void FUN_10a0cfdd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba2088;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0cfde0; end: 10a0cfdff;  */

void FUN_10a0cfde0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba2088;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0cfe00; end: 10a0cfe27;  */

undefined8 * FUN_10a0cfe00(long param_1)

{
  func_0x00010a0cfa6c(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110c3ec18;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110c3ecb8;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  if (*(long *)(param_1 + 0x90) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x30);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a0cfe28; end: 10a0cfe2b;  */

void FUN_10a0cfe28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0cfe2c; end: 10a0cfe83;  */

long FUN_10a0cfe2c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0cfe84; end: 10a0cfe97;  */

undefined1  [16] FUN_10a0cfe84(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f63805b;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10a0e3194();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a0cfe98; end: 10a0cff17;  */

undefined1  [16] FUN_10a0cfe98(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10a0e3194();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a0cff18; end: 10a0cffb3;  */

void FUN_10a0cff18(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a0cffb4(param_1,param_4);
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
  }
  return;
}



/* Entry: 10a0cffb4; end: 10a0cffeb;  */

void FUN_10a0cffb4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 >> 0x3c == 0) {
    plVar3 = param_1;
    FUN_10a0cfe98();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + param_2 * 2);
    return;
  }
  FUN_10a0cfe84();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a0e3194();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a0cffec; end: 10a0d005b;  */

void FUN_10a0cffec(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a0e3194();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a0d005c; end: 10a0d006f;  */

long * FUN_10a0d005c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_38;
  
  plVar2 = (long *)&UNK_10f63805b;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    lStack_38 = lVar3 + -0x18;
    plVar2[2] = lStack_38;
    FUN_10a0cffec(&lStack_38);
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a0d0070; end: 10a0d00cb;  */

long * FUN_10a0d0070(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    lStack_28 = lVar2 + -0x18;
    param_1[2] = lStack_28;
    FUN_10a0cffec(&lStack_28);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a0d00cc; end: 10a0d0193;  */

void FUN_10a0d00cc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x18;
        lStack_38 = lVar3;
        FUN_10a0cffec(&lStack_38);
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a0d0194; end: 10a0d01db;  */

void FUN_10a0d0194(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x1c8;
  __Znwm();
  FUN_10a0d01dc();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a0d01dc; end: 10a0d0223;  */

undefined8 * FUN_10a0d01dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba2038;
  FUN_10ab46d7c(param_1 + 3);
  return param_1;
}



/* Entry: 10a0d0224; end: 10a0d0233;  */

void FUN_10a0d0224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba2038;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0d0234; end: 10a0d0253;  */

void FUN_10a0d0234(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba2038;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d0254; end: 10a0d0263;  */

void FUN_10a0d0254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a0d025c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a0d0264; end: 10a0d05a7;  */

void FUN_10a0d0264(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  undefined1 auStack_d8 [24];
  long alStack_c0 [3];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  int iStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  FUN_10a0d05a8(&lStack_a8,param_2 + 0x18,*(undefined8 *)*param_1,param_1[1] + 0x30);
  lVar5 = lStack_a8;
  if (lStack_a8 == lStack_a0) {
LAB_10a0d0450:
    if (lVar5 != 0) {
      lStack_a0 = lVar5;
      __ZdlPv(lVar5);
    }
    return;
  }
  if ((iStack_90 != 0) && (iStack_90 != (int)param_3 || lStack_88 != param_4)) {
    FUN_10a0d0678(&lStack_80,&lStack_a8,iStack_90,lStack_88,param_3,param_4,param_5);
    if (lStack_a8 != 0) {
      __ZdlPv(lStack_a8);
    }
    lStack_a8 = lStack_80;
    lStack_98 = lStack_70;
    lStack_a0 = lStack_78;
  }
  lVar5 = lStack_a8;
  uVar3 = *(long *)(&UNK_10e495aa0 + (ulong)((int)param_3 - 1) * 8) * param_4;
  if (uVar3 != 0) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = (ulong)(lStack_a0 - lStack_a8) / uVar3;
    }
    if (*(ulong *)(*param_1 + 8) <= uVar4) {
      plVar7 = (long *)param_1[2];
      uVar3 = plVar7[1];
      if (uVar3 < (ulong)plVar7[2]) {
        FUN_10a0d08a0(uVar3,&lStack_a8,param_2,param_3,param_4,param_5);
        lVar2 = uVar3 + 0x58;
        plVar7[1] = lVar2;
      }
      else {
        lVar2 = ((long)(uVar3 - *plVar7) >> 3) * 0x2e8ba2e8ba2e8ba3;
        uVar3 = lVar2 + 1;
        if (0x2e8ba2e8ba2e8ba < uVar3) {
          FUN_10a0d0bd4();
          goto LAB_10a0d0500;
        }
        lVar6 = plVar7[2] - *plVar7 >> 3;
        uVar4 = lVar6 * 0x5d1745d1745d1746;
        if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
          uVar4 = uVar3;
        }
        if (0x1745d1745d1745c < (ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3)) {
          uVar4 = 0x2e8ba2e8ba2e8ba;
        }
        FUN_10a0d0a0c(&lStack_80,uVar4,lVar2,plVar7);
        FUN_10a0d08a0(lStack_70,&lStack_a8,param_2,param_3,param_4,param_5);
        lStack_70 = lStack_70 + 0x58;
        FUN_10a0d0a88(plVar7,&lStack_80);
        lVar2 = plVar7[1];
        FUN_10a0d0b88(&lStack_80);
      }
      plVar7[1] = lVar2;
      lVar2 = ((long *)param_1[2])[1];
      if (*(long *)param_1[2] != lVar2) {
        lVar6 = param_1[3];
        FUN_10ab6f958(lVar6 + 8,lVar2 + -0x38);
        FUN_10ab6f86c(lVar6);
        goto LAB_10a0d0450;
      }
      goto LAB_10a0d0500;
    }
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_d8,&UNK_10f638cb0,param_2 + 0x18);
  FUN_10a012db0(alStack_c0,auStack_d8,&UNK_10f638cc1);
  __ZNSt3__19to_stringEm(&puStack_f0,*(undefined8 *)(*param_1 + 8));
  if (-1 < (char)bStack_d9) {
    uStack_e8 = (ulong)bStack_d9;
    puStack_f0 = (undefined1 *)&puStack_f0;
  }
  plVar7 = alStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar7,puStack_f0,uStack_e8);
  lStack_78 = plVar7[1];
  lStack_80 = *plVar7;
  lStack_70 = plVar7[2];
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = 0;
  FUN_10a0edf4c(&lStack_80);
LAB_10a0d0500:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a0d0504);
  (*pcVar1)();
}



/* Entry: 10a0d05a8; end: 10a0d0677;  */

void FUN_10a0d05a8(undefined8 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar5 = param_3;
  FUN_10a0e3118();
  if (param_3 + 8 != lVar5) {
    uVar1 = *(uint *)(lVar5 + 0x38);
    if (-1 < (int)uVar1) {
      uVar4 = (param_4[1] - *param_4 >> 4) * -0x30c30c30c30c30c3;
      if ((int)uVar1 < (int)uVar4) {
        if (uVar1 <= uVar4 && uVar4 - uVar1 != 0) {
          lVar5 = *param_4 + (ulong)uVar1 * 0x150;
          uVar4 = (ulong)*(uint *)(lVar5 + 0x2c);
          uVar3 = (ulong)*(uint *)(lVar5 + 0x38);
          FUN_10a0d0840();
          param_1[3] = uVar4;
          param_1[4] = uVar3;
          FUN_10a0c7dfc(&uStack_50,param_4,lVar5);
          param_1[1] = uStack_48;
          *param_1 = uStack_50;
          param_1[2] = uStack_40;
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0d0678);
        (*pcVar2)();
      }
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10a0d0678; end: 10a0d083f;  */

long * FUN_10a0d0678(long *param_1,long *param_2,int param_3,ulong param_4,int param_5,ulong param_6
                    ,int param_7)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  
  if ((6 < param_3 - 1U) || (uVar1 = param_5 - 1, 6 < uVar1)) {
    iVar11 = 0xf694076;
    FUN_10a00946c();
    if (iVar11 - 0x1400U < 7) {
      plVar5 = *(long **)(&UNK_10e495b18 + (ulong)(iVar11 - 0x1400U) * 8);
    }
    else {
      plVar5 = (long *)0x0;
    }
    return plVar5;
  }
  uVar13 = *(long *)(&UNK_10e495ae0 + (ulong)(param_3 - 1U) * 8) * param_4;
  lVar6 = *(long *)(&UNK_10e495ae0 + (ulong)uVar1 * 8);
  uVar12 = param_2[1] - *param_2;
  uVar2 = 0;
  if (uVar13 != 0) {
    uVar2 = uVar12 / uVar13;
  }
  FUN_10a0dc020(param_1,uVar2 * lVar6 * param_6);
  uVar14 = 0;
  uVar16 = 0;
  uVar18 = 0x3f80;
  if (param_7 != 0) {
    uVar14 = 0;
    uVar16 = 0;
    uVar18 = 0;
    if (uVar1 < 5) {
      uVar3 = *(undefined4 *)(&UNK_10e495ac8 + (ulong)uVar1 * 4);
      uVar14 = (undefined1)uVar3;
      uVar16 = (undefined1)((uint)uVar3 >> 8);
      uVar18 = (undefined2)((uint)uVar3 >> 0x10);
    }
  }
  if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
    uVar7 = 0;
    lVar8 = *param_2;
    lVar9 = *param_1;
    uVar12 = param_6;
    if (param_4 <= param_6) {
      uVar12 = param_4;
    }
    do {
      if (uVar12 != 0) {
        uVar10 = 0;
        do {
          uVar15 = 0;
          uVar17 = 0;
          uVar19 = 0;
          if (param_3 < 3) {
            if (param_3 == 1) {
              iVar11 = (int)*(char *)(lVar8 + uVar10);
              goto LAB_10a0d07a0;
            }
            if (param_3 == 2) {
              uVar15 = *(undefined1 *)(lVar8 + uVar10);
              uVar17 = 0;
              goto LAB_10a0d0794;
            }
          }
          else if (param_3 == 3) {
            iVar11 = (int)*(short *)(lVar8 + uVar10 * 2);
LAB_10a0d07a0:
            fVar4 = (float)iVar11;
            uVar15 = SUB41(fVar4,0);
            uVar17 = (undefined1)((uint)fVar4 >> 8);
            uVar19 = (undefined2)((uint)fVar4 >> 0x10);
          }
          else if (param_3 == 4) {
            uVar19 = *(undefined2 *)(lVar8 + uVar10 * 2);
            uVar15 = (undefined1)uVar19;
            uVar17 = (undefined1)((ushort)uVar19 >> 8);
LAB_10a0d0794:
            uVar3 = NEON_ucvtf((uint)CONCAT11(uVar17,uVar15));
            uVar15 = (undefined1)uVar3;
            uVar17 = (undefined1)((uint)uVar3 >> 8);
            uVar19 = (undefined2)((uint)uVar3 >> 0x10);
          }
          else if (param_3 == 5) {
            uVar3 = *(undefined4 *)(lVar8 + uVar10 * 4);
            uVar15 = (undefined1)uVar3;
            uVar17 = (undefined1)((uint)uVar3 >> 8);
            uVar19 = (undefined2)((uint)uVar3 >> 0x10);
          }
          if (param_5 < 3) {
            if ((param_5 == 1) || (param_5 == 2)) {
              *(char *)(lVar9 + uVar10) = (char)(int)(float)CONCAT22(uVar19,CONCAT11(uVar17,uVar15))
              ;
            }
          }
          else if ((param_5 == 3) || (param_5 == 4)) {
            *(short *)(lVar9 + uVar10 * 2) =
                 (short)(int)(float)CONCAT22(uVar19,CONCAT11(uVar17,uVar15));
          }
          else if (param_5 == 5) {
            *(float *)(lVar9 + uVar10 * 4) =
                 (1.0 / (float)CONCAT22(uVar18,CONCAT11(uVar16,uVar14))) *
                 (float)CONCAT22(uVar19,CONCAT11(uVar17,uVar15));
          }
          uVar10 = uVar10 + 1;
        } while ((uVar10 & 0xffffffff) < uVar12);
      }
      lVar8 = lVar8 + uVar13;
      lVar9 = lVar9 + lVar6 * param_6;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < uVar2);
  }
  return param_1;
}



/* Entry: 10a0d0840; end: 10a0d089f;  */

undefined1  [16] FUN_10a0d0840(int param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (param_1 - 0x1400U < 7) {
    uVar4 = *(undefined8 *)(&UNK_10e495b18 + (ulong)(param_1 - 0x1400U) * 8);
  }
  else {
    uVar4 = 0;
  }
  uVar3 = 4;
  if (param_2 != 4) {
    uVar3 = (ulong)(param_2 == 0x41);
  }
  uVar1 = 3;
  if (param_2 != 3) {
    uVar1 = 0;
  }
  uVar2 = 2;
  if (param_2 != 2) {
    uVar2 = uVar1;
  }
  if (param_2 < 4) {
    uVar3 = uVar2;
  }
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 10a0d08a0; end: 10a0d09b3;  */

undefined8 *
FUN_10a0d08a0(undefined8 *param_1,long *param_2,undefined8 param_3,int param_4,int param_5,
             undefined1 param_6)

{
  bool bVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined7 uStack_50;
  char cStack_49;
  undefined8 uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a05151c(param_1,*param_2,param_2[1],param_2[1] - *param_2);
  param_1[3] = (ulong)(uint)(*(int *)(&UNK_10e495b50 + (ulong)(param_4 - 1) * 4) * param_5);
  FUN_10a0d09b4(&uStack_60,param_3);
  if (cStack_49 < '\0') {
    func_0x000107c3192c(param_1 + 4,uStack_60,uStack_58);
    bVar1 = cStack_49 < '\0';
  }
  else {
    bVar1 = false;
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
    param_1[6] = CONCAT17(cStack_49,uStack_50);
  }
  param_1[7] = uStack_48;
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)((long)param_1 + 0x44) = param_4;
  *(int *)(param_1 + 9) = param_5;
  *(undefined1 *)((long)param_1 + 0x4c) = param_6;
  *(undefined4 *)(param_1 + 10) = 0;
  if (bVar1) {
    __ZdlPv(uStack_60);
  }
  return param_1;
}



/* Entry: 10a0d09b4; end: 10a0d0a0b;  */

undefined8 * FUN_10a0d09b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = 0;
  func_0x000107c2b080(param_1);
  return param_1;
}



/* Entry: 10a0d0a0c; end: 10a0d0a87;  */

long * FUN_10a0d0a0c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (undefined8 *)0x0) {
    lVar3 = 0;
  }
  else {
    if ((undefined8 *)0x2e8ba2e8ba2e8ba < param_2) {
      func_0x000109ffded8();
      plVar8 = (long *)*param_1;
      plVar2 = (long *)param_1[1];
      plVar1 = (long *)((long)plVar8 + (param_2[1] - (long)plVar2));
      plVar4 = param_1;
      plVar5 = plVar8;
      plVar7 = plVar1;
      if (plVar2 != plVar8) {
        do {
          *plVar7 = 0;
          plVar7[1] = 0;
          plVar7[2] = 0;
          lVar3 = *plVar5;
          plVar7[1] = plVar5[1];
          *plVar7 = lVar3;
          lVar3 = plVar5[3];
          plVar7[2] = plVar5[2];
          *plVar5 = 0;
          plVar5[1] = 0;
          plVar5[2] = 0;
          plVar7[3] = lVar3;
          lVar6 = plVar5[5];
          lVar3 = plVar5[4];
          plVar7[6] = plVar5[6];
          plVar7[5] = lVar6;
          plVar7[4] = lVar3;
          plVar5[5] = 0;
          plVar5[6] = 0;
          plVar5[4] = 0;
          plVar7[7] = plVar5[7];
          lVar6 = plVar5[9];
          lVar3 = plVar5[8];
          *(int *)(plVar7 + 10) = (int)plVar5[10];
          plVar7[9] = lVar6;
          plVar7[8] = lVar3;
          plVar5 = plVar5 + 0xb;
          plVar7 = plVar7 + 0xb;
        } while (plVar5 != plVar2);
        do {
          plVar4 = plVar8;
          FUN_10a0d0be8(plVar8);
          plVar8 = plVar8 + 0xb;
        } while (plVar8 != plVar2);
        plVar8 = (long *)*param_1;
      }
      param_2[1] = plVar1;
      *param_1 = (long)plVar1;
      param_1[1] = (long)plVar8;
      param_2[1] = plVar8;
      lVar3 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar3;
      lVar3 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar3;
      *param_2 = param_2[1];
      return plVar4;
    }
    lVar3 = (long)param_2 * 0x58;
    __Znwm();
  }
  lVar6 = lVar3 + param_3 * 0x58;
  *param_1 = lVar3;
  param_1[1] = lVar6;
  param_1[2] = lVar6;
  param_1[3] = lVar3 + (long)param_2 * 0x58;
  return param_1;
}



/* Entry: 10a0d0a88; end: 10a0d0b87;  */

void FUN_10a0d0a88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar6 + (param_2[1] - (long)puVar2));
  puVar3 = puVar6;
  puVar5 = puVar1;
  if (puVar2 != puVar6) {
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      uVar4 = *puVar3;
      puVar5[1] = puVar3[1];
      *puVar5 = uVar4;
      uVar4 = puVar3[3];
      puVar5[2] = puVar3[2];
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar5[3] = uVar4;
      uVar7 = puVar3[5];
      uVar4 = puVar3[4];
      puVar5[6] = puVar3[6];
      puVar5[5] = uVar7;
      puVar5[4] = uVar4;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[4] = 0;
      puVar5[7] = puVar3[7];
      uVar7 = puVar3[9];
      uVar4 = puVar3[8];
      *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(puVar3 + 10);
      puVar5[9] = uVar7;
      puVar5[8] = uVar4;
      puVar3 = puVar3 + 0xb;
      puVar5 = puVar5 + 0xb;
    } while (puVar3 != puVar2);
    do {
      FUN_10a0d0be8(puVar6);
      puVar6 = puVar6 + 0xb;
    } while (puVar6 != puVar2);
    puVar6 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = puVar1;
  param_1[1] = puVar6;
  param_2[1] = puVar6;
  uVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar4;
  uVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10a0d0b88; end: 10a0d0bd3;  */

long * FUN_10a0d0b88(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x58;
    FUN_10a0d0be8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a0d0bd4; end: 10a0d0be7;  */

void FUN_10a0d0bd4(void)

{
  long *plVar1;
  
  plVar1 = (long *)&UNK_10f63805b;
  FUN_109ffde64();
  if (*(char *)((long)plVar1 + 0x37) < '\0') {
    __ZdlPv(plVar1[4]);
  }
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0d0be8; end: 10a0d0c2b;  */

void FUN_10a0d0be8(long *param_1)

{
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0d0c2c; end: 10a0d0c67;  */

undefined8 **** FUN_10a0d0c2c(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  code *pcVar2;
  char *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  short *psVar10;
  ushort *puVar11;
  undefined4 *puVar12;
  float *pfVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 ****ppppuVar18;
  long lVar19;
  undefined8 ****ppppuVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined4 uVar24;
  undefined1 *puStack_100;
  ulong uStack_f8;
  byte bStack_e9;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 auStack_b8 [3];
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_18 [8];
  
  puVar8 = auStack_18;
  func_0x00010954a9d0(param_1,puVar8);
  if (*param_1 != 0) {
    return (undefined8 ****)(*param_1 + 0x38);
  }
  pcVar3 = "map::at:  key not found";
  FUN_109ffdddc();
  iVar1 = *(int *)(param_2 + 0x2c);
  if (iVar1 < 0x1403) {
    if (iVar1 == 0x1400) {
      lVar19 = *(long *)(param_2 + 0x30);
      lVar23 = lRam00000001137e9560;
      func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_2 + 0x38));
      if (lVar23 != 0) {
        uVar21 = *(ulong *)(lVar23 + 0x18);
        lVar23 = lRam00000001137e9568;
        func_0x000107c2b0ac(lRam00000001137e9568,0x1400);
        if (lVar23 != 0) {
          uVar22 = param_4 * 4;
          if (uVar21 <= param_4 && *(long *)(lVar23 + 0x18) * uVar21 <= uVar22) {
            FUN_10a0dc020(pcVar3,lVar19 * uVar22);
            lVar23 = *(long *)pcVar3;
            ppppuVar4 = &pppuStack_a0;
            FUN_10a0c7dfc(ppppuVar4,puVar8,param_2);
            ppppuVar5 = (undefined8 ****)pppuStack_a0;
            if (lVar19 != 0) {
              lVar17 = 0;
              do {
                if (uVar21 != 0) {
                  ppppuVar20 = (undefined8 ****)((long)pppuStack_a0 + lVar17 * uVar21);
                  pfVar13 = (float *)(lVar23 + lVar17 * param_4 * 4);
                  uVar16 = uVar21;
                  do {
                    *pfVar13 = (float)(int)*(char *)ppppuVar20;
                    uVar16 = uVar16 - 1;
                    ppppuVar20 = (undefined8 ****)((long)ppppuVar20 + 1);
                    pfVar13 = pfVar13 + 1;
                  } while (uVar16 != 0);
                }
                if ((long)uVar21 < (long)param_4) {
                  ppppuVar4 = (undefined8 ****)(lVar23 + uVar21 * 4 + lVar17 * uVar22);
                  _bzero(ppppuVar4,uVar22 + uVar21 * -4);
                }
                lVar17 = lVar17 + 1;
              } while (lVar17 != lVar19);
            }
            goto LAB_10a0d128c;
          }
          uVar6 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt3__19to_stringEi(auStack_e8,*(undefined4 *)(param_2 + 0x38));
          FUN_109feb280(auStack_d0,&UNK_10f638d39,auStack_e8);
          FUN_10a012db0(auStack_b8,auStack_d0,&UNK_10f638d5f);
          __ZNSt3__19to_stringEi(&puStack_100,*(undefined4 *)(param_2 + 0x2c));
          if (-1 < (char)bStack_e9) {
            uStack_f8 = (ulong)bStack_e9;
            puStack_100 = (undefined1 *)&puStack_100;
          }
          puVar7 = auStack_b8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar7,puStack_100,uStack_f8);
          uStack_98 = puVar7[1];
          pppuStack_a0 = (undefined8 ***)*puVar7;
          uStack_90 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (uVar6,&pppuStack_a0);
          ___cxa_throw(uVar6,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_10a0d1828;
        }
      }
    }
    else if (iVar1 == 0x1401) {
      lVar19 = *(long *)(param_2 + 0x30);
      lVar23 = lRam00000001137e9560;
      func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_2 + 0x38));
      if (lVar23 != 0) {
        uVar21 = *(ulong *)(lVar23 + 0x18);
        lVar23 = lRam00000001137e9568;
        func_0x000107c2b0ac(lRam00000001137e9568,0x1401);
        if (lVar23 != 0) {
          uVar22 = param_4 * 4;
          if (uVar21 <= param_4 && *(long *)(lVar23 + 0x18) * uVar21 <= uVar22) {
            FUN_10a0dc020(pcVar3,lVar19 * uVar22);
            lVar23 = *(long *)pcVar3;
            ppppuVar4 = &pppuStack_a0;
            FUN_10a0c7dfc(ppppuVar4,puVar8,param_2);
            ppppuVar5 = (undefined8 ****)pppuStack_a0;
            if (lVar19 != 0) {
              lVar17 = 0;
              do {
                if (uVar21 != 0) {
                  ppppuVar20 = (undefined8 ****)((long)pppuStack_a0 + lVar17 * uVar21);
                  pfVar13 = (float *)(lVar23 + lVar17 * param_4 * 4);
                  uVar16 = uVar21;
                  do {
                    *pfVar13 = (float)*(byte *)ppppuVar20;
                    uVar16 = uVar16 - 1;
                    ppppuVar20 = (undefined8 ****)((long)ppppuVar20 + 1);
                    pfVar13 = pfVar13 + 1;
                  } while (uVar16 != 0);
                }
                if ((long)uVar21 < (long)param_4) {
                  ppppuVar4 = (undefined8 ****)(lVar23 + uVar21 * 4 + lVar17 * uVar22);
                  _bzero(ppppuVar4,uVar22 + uVar21 * -4);
                }
                lVar17 = lVar17 + 1;
              } while (lVar17 != lVar19);
            }
            goto LAB_10a0d128c;
          }
          uVar6 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt3__19to_stringEi(auStack_e8,*(undefined4 *)(param_2 + 0x38));
          FUN_109feb280(auStack_d0,&UNK_10f638d39,auStack_e8);
          FUN_10a012db0(auStack_b8,auStack_d0,&UNK_10f638d5f);
          __ZNSt3__19to_stringEi(&puStack_100,*(undefined4 *)(param_2 + 0x2c));
          if (-1 < (char)bStack_e9) {
            uStack_f8 = (ulong)bStack_e9;
            puStack_100 = (undefined1 *)&puStack_100;
          }
          puVar7 = auStack_b8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar7,puStack_100,uStack_f8);
          uStack_98 = puVar7[1];
          pppuStack_a0 = (undefined8 ***)*puVar7;
          uStack_90 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (uVar6,&pppuStack_a0);
          ___cxa_throw(uVar6,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_10a0d1828;
        }
      }
    }
    else {
      if (iVar1 != 0x1402) goto LAB_10a0d17d0;
      lVar19 = *(long *)(param_2 + 0x30);
      lVar23 = lRam00000001137e9560;
      func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_2 + 0x38));
      if (lVar23 != 0) {
        uVar21 = *(ulong *)(lVar23 + 0x18);
        lVar23 = lRam00000001137e9568;
        func_0x000107c2b0ac(lRam00000001137e9568,0x1402);
        if (lVar23 != 0) {
          uVar22 = param_4 * 4;
          if (uVar21 <= param_4 && *(long *)(lVar23 + 0x18) * uVar21 <= uVar22) {
            FUN_10a0dc020(pcVar3,lVar19 * uVar22);
            lVar23 = *(long *)pcVar3;
            ppppuVar4 = &pppuStack_a0;
            FUN_10a0c7dfc(ppppuVar4,puVar8,param_2);
            ppppuVar5 = (undefined8 ****)pppuStack_a0;
            if (lVar19 != 0) {
              lVar17 = 0;
              do {
                if (uVar21 != 0) {
                  psVar10 = (short *)((long)pppuStack_a0 + lVar17 * uVar21 * 2);
                  pfVar13 = (float *)(lVar23 + lVar17 * param_4 * 4);
                  lVar15 = uVar21 << 1;
                  do {
                    *pfVar13 = (float)(int)*psVar10;
                    lVar15 = lVar15 + -2;
                    psVar10 = psVar10 + 1;
                    pfVar13 = pfVar13 + 1;
                  } while (lVar15 != 0);
                }
                if ((long)uVar21 < (long)param_4) {
                  ppppuVar4 = (undefined8 ****)(lVar23 + uVar21 * 4 + lVar17 * uVar22);
                  _bzero(ppppuVar4,uVar22 + uVar21 * -4);
                }
                lVar17 = lVar17 + 1;
              } while (lVar17 != lVar19);
            }
            goto LAB_10a0d128c;
          }
          uVar6 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt3__19to_stringEi(auStack_e8,*(undefined4 *)(param_2 + 0x38));
          FUN_109feb280(auStack_d0,&UNK_10f638d39,auStack_e8);
          FUN_10a012db0(auStack_b8,auStack_d0,&UNK_10f638d5f);
          __ZNSt3__19to_stringEi(&puStack_100,*(undefined4 *)(param_2 + 0x2c));
          if (-1 < (char)bStack_e9) {
            uStack_f8 = (ulong)bStack_e9;
            puStack_100 = (undefined1 *)&puStack_100;
          }
          puVar7 = auStack_b8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar7,puStack_100,uStack_f8);
          uStack_98 = puVar7[1];
          pppuStack_a0 = (undefined8 ***)*puVar7;
          uStack_90 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (uVar6,&pppuStack_a0);
          ___cxa_throw(uVar6,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_10a0d1828;
        }
      }
    }
LAB_10a0d12bc:
    FUN_109ffdddc(&UNK_10f639994);
  }
  else {
    if (0x1404 < iVar1) {
      if (iVar1 == 0x1405) {
        lVar19 = *(long *)(param_2 + 0x30);
        lVar23 = lRam00000001137e9560;
        func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_2 + 0x38));
        if (lVar23 != 0) {
          uVar21 = *(ulong *)(lVar23 + 0x18);
          lVar23 = lRam00000001137e9568;
          func_0x000107c2b0ac(lRam00000001137e9568,0x1405);
          if (lVar23 != 0) {
            uVar22 = param_4 * 4;
            if (uVar21 <= param_4 && *(long *)(lVar23 + 0x18) * uVar21 <= uVar22) {
              FUN_10a0dc020(pcVar3,lVar19 * uVar22);
              lVar23 = *(long *)pcVar3;
              ppppuVar4 = &pppuStack_a0;
              FUN_10a0c7dfc(ppppuVar4,puVar8,param_2);
              ppppuVar5 = (undefined8 ****)pppuStack_a0;
              if (lVar19 != 0) {
                lVar17 = 0;
                do {
                  if (uVar21 != 0) {
                    puVar12 = (undefined4 *)((long)pppuStack_a0 + lVar17 * uVar21 * 4);
                    puVar14 = (undefined4 *)(lVar23 + lVar17 * param_4 * 4);
                    lVar15 = uVar21 << 2;
                    do {
                      uVar24 = NEON_ucvtf(*puVar12);
                      *puVar14 = uVar24;
                      lVar15 = lVar15 + -4;
                      puVar12 = puVar12 + 1;
                      puVar14 = puVar14 + 1;
                    } while (lVar15 != 0);
                  }
                  if ((long)uVar21 < (long)param_4) {
                    ppppuVar4 = (undefined8 ****)(lVar23 + uVar21 * 4 + lVar17 * uVar22);
                    _bzero(ppppuVar4,uVar22 + uVar21 * -4);
                  }
                  lVar17 = lVar17 + 1;
                } while (lVar17 != lVar19);
              }
              goto LAB_10a0d128c;
            }
            uVar6 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt3__19to_stringEi(auStack_e8,*(undefined4 *)(param_2 + 0x38));
            FUN_109feb280(auStack_d0,&UNK_10f638d39,auStack_e8);
            FUN_10a012db0(auStack_b8,auStack_d0,&UNK_10f638d5f);
            __ZNSt3__19to_stringEi(&puStack_100,*(undefined4 *)(param_2 + 0x2c));
            if (-1 < (char)bStack_e9) {
              uStack_f8 = (ulong)bStack_e9;
              puStack_100 = (undefined1 *)&puStack_100;
            }
            puVar7 = auStack_b8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar7,puStack_100,uStack_f8);
            uStack_98 = puVar7[1];
            pppuStack_a0 = (undefined8 ***)*puVar7;
            uStack_90 = puVar7[2];
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
            __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      (uVar6,&pppuStack_a0);
            ___cxa_throw(uVar6,PTR___ZTISt13runtime_error_110346a40,
                         PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            goto LAB_10a0d1828;
          }
        }
      }
      else {
        if (iVar1 != 0x1406) goto LAB_10a0d17d0;
        lVar23 = *(long *)(param_2 + 0x30);
        lVar19 = lRam00000001137e9560;
        func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_2 + 0x38));
        if (lVar19 != 0) {
          uVar21 = *(ulong *)(lVar19 + 0x18);
          lVar19 = lRam00000001137e9568;
          func_0x000107c2b0ac(lRam00000001137e9568,0x1406);
          if (lVar19 != 0) {
            uVar22 = param_4 * 4;
            if (uVar21 <= param_4 && *(long *)(lVar19 + 0x18) * uVar21 <= uVar22) {
              FUN_10a0dc020(pcVar3,lVar23 * uVar22);
              ppppuVar20 = *(undefined8 *****)pcVar3;
              ppppuVar4 = &pppuStack_a0;
              FUN_10a0c7dfc(ppppuVar4,puVar8,param_2);
              ppppuVar5 = (undefined8 ****)pppuStack_a0;
              if (lVar23 != 0) {
                lVar19 = uVar21 * 4;
                ppppuVar18 = (undefined8 ****)pppuStack_a0;
                do {
                  if (uVar21 != 0) {
                    ppppuVar4 = ppppuVar20;
                    _memmove(ppppuVar20,ppppuVar18,lVar19);
                  }
                  if ((long)uVar21 < (long)param_4) {
                    ppppuVar4 = (undefined8 ****)((long)ppppuVar20 + lVar19);
                    _bzero(ppppuVar4,uVar22 + uVar21 * -4);
                  }
                  ppppuVar18 = (undefined8 ****)((long)ppppuVar18 + lVar19);
                  ppppuVar20 = (undefined8 ****)((long)ppppuVar20 + uVar22);
                  lVar23 = lVar23 + -1;
                } while (lVar23 != 0);
              }
              goto LAB_10a0d128c;
            }
            uVar6 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt3__19to_stringEi(auStack_e8,*(undefined4 *)(param_2 + 0x38));
            FUN_109feb280(auStack_d0,&UNK_10f638d39,auStack_e8);
            FUN_10a012db0(auStack_b8,auStack_d0,&UNK_10f638d5f);
            __ZNSt3__19to_stringEi(&puStack_100,*(undefined4 *)(param_2 + 0x2c));
            if (-1 < (char)bStack_e9) {
              uStack_f8 = (ulong)bStack_e9;
              puStack_100 = (undefined1 *)&puStack_100;
            }
            puVar7 = auStack_b8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar7,puStack_100,uStack_f8);
            uStack_98 = puVar7[1];
            pppuStack_a0 = (undefined8 ***)*puVar7;
            uStack_90 = puVar7[2];
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
            __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      (uVar6,&pppuStack_a0);
            ___cxa_throw(uVar6,PTR___ZTISt13runtime_error_110346a40,
                         PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            goto LAB_10a0d1828;
          }
        }
      }
      goto LAB_10a0d12bc;
    }
    if (iVar1 == 0x1403) {
      lVar19 = *(long *)(param_2 + 0x30);
      lVar23 = lRam00000001137e9560;
      func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_2 + 0x38));
      if (lVar23 != 0) {
        uVar21 = *(ulong *)(lVar23 + 0x18);
        lVar23 = lRam00000001137e9568;
        func_0x000107c2b0ac(lRam00000001137e9568,0x1403);
        if (lVar23 != 0) {
          uVar22 = param_4 * 4;
          if (param_4 < uVar21 || uVar22 < *(long *)(lVar23 + 0x18) * uVar21) {
            uVar6 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt3__19to_stringEi(auStack_e8,*(undefined4 *)(param_2 + 0x38));
            FUN_109feb280(auStack_d0,&UNK_10f638d39,auStack_e8);
            FUN_10a012db0(auStack_b8,auStack_d0,&UNK_10f638d5f);
            __ZNSt3__19to_stringEi(&puStack_100,*(undefined4 *)(param_2 + 0x2c));
            if (-1 < (char)bStack_e9) {
              uStack_f8 = (ulong)bStack_e9;
              puStack_100 = (undefined1 *)&puStack_100;
            }
            puVar7 = auStack_b8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar7,puStack_100,uStack_f8);
            uStack_98 = puVar7[1];
            pppuStack_a0 = (undefined8 ***)*puVar7;
            uStack_90 = puVar7[2];
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
            __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      (uVar6,&pppuStack_a0);
            ___cxa_throw(uVar6,PTR___ZTISt13runtime_error_110346a40,
                         PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            goto LAB_10a0d1828;
          }
          FUN_10a0dc020(pcVar3,lVar19 * uVar22);
          lVar23 = *(long *)pcVar3;
          ppppuVar4 = &pppuStack_a0;
          FUN_10a0c7dfc(ppppuVar4,puVar8,param_2);
          ppppuVar5 = (undefined8 ****)pppuStack_a0;
          if (lVar19 != 0) {
            lVar17 = 0;
            do {
              if (uVar21 != 0) {
                puVar11 = (ushort *)((long)pppuStack_a0 + lVar17 * uVar21 * 2);
                pfVar13 = (float *)(lVar23 + lVar17 * param_4 * 4);
                lVar15 = uVar21 << 1;
                do {
                  *pfVar13 = (float)*puVar11;
                  lVar15 = lVar15 + -2;
                  puVar11 = puVar11 + 1;
                  pfVar13 = pfVar13 + 1;
                } while (lVar15 != 0);
              }
              if ((long)uVar21 < (long)param_4) {
                ppppuVar4 = (undefined8 ****)(lVar23 + uVar21 * 4 + lVar17 * uVar22);
                _bzero(ppppuVar4,uVar22 + uVar21 * -4);
              }
              lVar17 = lVar17 + 1;
            } while (lVar17 != lVar19);
          }
LAB_10a0d128c:
          if (ppppuVar5 != (undefined8 ****)0x0) {
            __ZdlPv(ppppuVar5);
            ppppuVar4 = ppppuVar5;
          }
          return ppppuVar4;
        }
      }
      goto LAB_10a0d12bc;
    }
    if (iVar1 != 0x1404) {
LAB_10a0d17d0:
      uVar6 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt3__19to_stringEi(auStack_b8,*(undefined4 *)(param_2 + 0x2c));
      FUN_109feb280(&pppuStack_a0,&UNK_10f638c92,auStack_b8);
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (uVar6,&pppuStack_a0);
      ___cxa_throw(uVar6,PTR___ZTISt13runtime_error_110346a40,
                   PTR___ZNSt13runtime_errorD1Ev_1103461d8);
      goto LAB_10a0d1828;
    }
    lVar19 = *(long *)(param_2 + 0x30);
    lVar23 = lRam00000001137e9560;
    func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_2 + 0x38));
    if (lVar23 == 0) goto LAB_10a0d12bc;
    uVar21 = *(ulong *)(lVar23 + 0x18);
    lVar23 = lRam00000001137e9568;
    func_0x000107c2b0ac(lRam00000001137e9568,0x1404);
    if (lVar23 == 0) goto LAB_10a0d12bc;
    uVar22 = param_4 * 4;
    if (uVar21 <= param_4 && *(long *)(lVar23 + 0x18) * uVar21 <= uVar22) {
      FUN_10a0dc020(pcVar3,lVar19 * uVar22);
      lVar23 = *(long *)pcVar3;
      ppppuVar4 = &pppuStack_a0;
      FUN_10a0c7dfc(ppppuVar4,puVar8,param_2);
      ppppuVar5 = (undefined8 ****)pppuStack_a0;
      if (lVar19 != 0) {
        lVar17 = 0;
        do {
          if (uVar21 != 0) {
            piVar9 = (int *)((long)pppuStack_a0 + lVar17 * uVar21 * 4);
            pfVar13 = (float *)(lVar23 + lVar17 * param_4 * 4);
            lVar15 = uVar21 << 2;
            do {
              *pfVar13 = (float)*piVar9;
              lVar15 = lVar15 + -4;
              piVar9 = piVar9 + 1;
              pfVar13 = pfVar13 + 1;
            } while (lVar15 != 0);
          }
          if ((long)uVar21 < (long)param_4) {
            ppppuVar4 = (undefined8 ****)(lVar23 + uVar21 * 4 + lVar17 * uVar22);
            _bzero(ppppuVar4,uVar22 + uVar21 * -4);
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 != lVar19);
      }
      goto LAB_10a0d128c;
    }
  }
  uVar6 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt3__19to_stringEi(auStack_e8,*(undefined4 *)(param_2 + 0x38));
  FUN_109feb280(auStack_d0,&UNK_10f638d39,auStack_e8);
  FUN_10a012db0(auStack_b8,auStack_d0,&UNK_10f638d5f);
  __ZNSt3__19to_stringEi(&puStack_100,*(undefined4 *)(param_2 + 0x2c));
  if (-1 < (char)bStack_e9) {
    uStack_f8 = (ulong)bStack_e9;
    puStack_100 = (undefined1 *)&puStack_100;
  }
  puVar7 = auStack_b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,puStack_100,uStack_f8);
  uStack_98 = puVar7[1];
  pppuStack_a0 = (undefined8 ***)*puVar7;
  uStack_90 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (uVar6,&pppuStack_a0);
  ___cxa_throw(uVar6,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
LAB_10a0d1828:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0d182c);
  (*pcVar2)();
}



/* Entry: 10a0d0c68; end: 10a0d19d3;  */

void FUN_10a0d0c68(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  short *psVar6;
  byte *pbVar7;
  char *pcVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined4 uVar20;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  long alStack_98 [3];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  iVar1 = *(int *)(param_3 + 0x2c);
  if (iVar1 < 0x1403) {
    if (iVar1 == 0x1400) {
      lVar16 = *(long *)(param_3 + 0x30);
      lVar19 = lRam00000001137e9560;
      func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_3 + 0x38));
      if (lVar19 != 0) {
        uVar17 = *(ulong *)(lVar19 + 0x18);
        lVar19 = lRam00000001137e9568;
        func_0x000107c2b0ac(lRam00000001137e9568,0x1400);
        if (lVar19 != 0) {
          uVar18 = param_4 * 4;
          if (uVar17 <= param_4 && *(long *)(lVar19 + 0x18) * uVar17 <= uVar18) {
            FUN_10a0dc020(param_1,lVar16 * uVar18);
            lVar19 = *param_1;
            FUN_10a0c7dfc(&lStack_80,param_2,param_3);
            if (lVar16 != 0) {
              lVar15 = 0;
              do {
                if (uVar17 != 0) {
                  pcVar8 = (char *)(lStack_80 + lVar15 * uVar17);
                  pfVar11 = (float *)(lVar19 + lVar15 * param_4 * 4);
                  uVar13 = uVar17;
                  do {
                    *pfVar11 = (float)(int)*pcVar8;
                    uVar13 = uVar13 - 1;
                    pcVar8 = pcVar8 + 1;
                    pfVar11 = pfVar11 + 1;
                  } while (uVar13 != 0);
                }
                if ((long)uVar17 < (long)param_4) {
                  _bzero(lVar19 + uVar17 * 4 + lVar15 * uVar18,uVar18 + uVar17 * -4);
                }
                lVar15 = lVar15 + 1;
              } while (lVar15 != lVar16);
            }
            goto LAB_10a0d128c;
          }
          uVar3 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt3__19to_stringEi(auStack_c8,*(undefined4 *)(param_3 + 0x38));
          FUN_109feb280(auStack_b0,&UNK_10f638d39,auStack_c8);
          FUN_10a012db0(alStack_98,auStack_b0,&UNK_10f638d5f);
          __ZNSt3__19to_stringEi(&puStack_e0,*(undefined4 *)(param_3 + 0x2c));
          if (-1 < (char)bStack_c9) {
            uStack_d8 = (ulong)bStack_c9;
            puStack_e0 = (undefined1 *)&puStack_e0;
          }
          plVar4 = alStack_98;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar4,puStack_e0,uStack_d8);
          lStack_78 = plVar4[1];
          lStack_80 = *plVar4;
          lStack_70 = plVar4[2];
          plVar4[1] = 0;
          plVar4[2] = 0;
          *plVar4 = 0;
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (uVar3,&lStack_80);
          ___cxa_throw(uVar3,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_10a0d1828;
        }
      }
    }
    else if (iVar1 == 0x1401) {
      lVar16 = *(long *)(param_3 + 0x30);
      lVar19 = lRam00000001137e9560;
      func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_3 + 0x38));
      if (lVar19 != 0) {
        uVar17 = *(ulong *)(lVar19 + 0x18);
        lVar19 = lRam00000001137e9568;
        func_0x000107c2b0ac(lRam00000001137e9568,0x1401);
        if (lVar19 != 0) {
          uVar18 = param_4 * 4;
          if (uVar17 <= param_4 && *(long *)(lVar19 + 0x18) * uVar17 <= uVar18) {
            FUN_10a0dc020(param_1,lVar16 * uVar18);
            lVar19 = *param_1;
            FUN_10a0c7dfc(&lStack_80,param_2,param_3);
            if (lVar16 != 0) {
              lVar15 = 0;
              do {
                if (uVar17 != 0) {
                  pbVar7 = (byte *)(lStack_80 + lVar15 * uVar17);
                  pfVar11 = (float *)(lVar19 + lVar15 * param_4 * 4);
                  uVar13 = uVar17;
                  do {
                    *pfVar11 = (float)*pbVar7;
                    uVar13 = uVar13 - 1;
                    pbVar7 = pbVar7 + 1;
                    pfVar11 = pfVar11 + 1;
                  } while (uVar13 != 0);
                }
                if ((long)uVar17 < (long)param_4) {
                  _bzero(lVar19 + uVar17 * 4 + lVar15 * uVar18,uVar18 + uVar17 * -4);
                }
                lVar15 = lVar15 + 1;
              } while (lVar15 != lVar16);
            }
            goto LAB_10a0d128c;
          }
          uVar3 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt3__19to_stringEi(auStack_c8,*(undefined4 *)(param_3 + 0x38));
          FUN_109feb280(auStack_b0,&UNK_10f638d39,auStack_c8);
          FUN_10a012db0(alStack_98,auStack_b0,&UNK_10f638d5f);
          __ZNSt3__19to_stringEi(&puStack_e0,*(undefined4 *)(param_3 + 0x2c));
          if (-1 < (char)bStack_c9) {
            uStack_d8 = (ulong)bStack_c9;
            puStack_e0 = (undefined1 *)&puStack_e0;
          }
          plVar4 = alStack_98;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar4,puStack_e0,uStack_d8);
          lStack_78 = plVar4[1];
          lStack_80 = *plVar4;
          lStack_70 = plVar4[2];
          plVar4[1] = 0;
          plVar4[2] = 0;
          *plVar4 = 0;
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (uVar3,&lStack_80);
          ___cxa_throw(uVar3,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_10a0d1828;
        }
      }
    }
    else {
      if (iVar1 != 0x1402) goto LAB_10a0d17d0;
      lVar16 = *(long *)(param_3 + 0x30);
      lVar19 = lRam00000001137e9560;
      func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_3 + 0x38));
      if (lVar19 != 0) {
        uVar17 = *(ulong *)(lVar19 + 0x18);
        lVar19 = lRam00000001137e9568;
        func_0x000107c2b0ac(lRam00000001137e9568,0x1402);
        if (lVar19 != 0) {
          uVar18 = param_4 * 4;
          if (uVar17 <= param_4 && *(long *)(lVar19 + 0x18) * uVar17 <= uVar18) {
            FUN_10a0dc020(param_1,lVar16 * uVar18);
            lVar19 = *param_1;
            FUN_10a0c7dfc(&lStack_80,param_2,param_3);
            if (lVar16 != 0) {
              lVar15 = 0;
              do {
                if (uVar17 != 0) {
                  psVar6 = (short *)(lStack_80 + lVar15 * uVar17 * 2);
                  pfVar11 = (float *)(lVar19 + lVar15 * param_4 * 4);
                  lVar14 = uVar17 << 1;
                  do {
                    *pfVar11 = (float)(int)*psVar6;
                    lVar14 = lVar14 + -2;
                    psVar6 = psVar6 + 1;
                    pfVar11 = pfVar11 + 1;
                  } while (lVar14 != 0);
                }
                if ((long)uVar17 < (long)param_4) {
                  _bzero(lVar19 + uVar17 * 4 + lVar15 * uVar18,uVar18 + uVar17 * -4);
                }
                lVar15 = lVar15 + 1;
              } while (lVar15 != lVar16);
            }
            goto LAB_10a0d128c;
          }
          uVar3 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt3__19to_stringEi(auStack_c8,*(undefined4 *)(param_3 + 0x38));
          FUN_109feb280(auStack_b0,&UNK_10f638d39,auStack_c8);
          FUN_10a012db0(alStack_98,auStack_b0,&UNK_10f638d5f);
          __ZNSt3__19to_stringEi(&puStack_e0,*(undefined4 *)(param_3 + 0x2c));
          if (-1 < (char)bStack_c9) {
            uStack_d8 = (ulong)bStack_c9;
            puStack_e0 = (undefined1 *)&puStack_e0;
          }
          plVar4 = alStack_98;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar4,puStack_e0,uStack_d8);
          lStack_78 = plVar4[1];
          lStack_80 = *plVar4;
          lStack_70 = plVar4[2];
          plVar4[1] = 0;
          plVar4[2] = 0;
          *plVar4 = 0;
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (uVar3,&lStack_80);
          ___cxa_throw(uVar3,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_10a0d1828;
        }
      }
    }
LAB_10a0d12bc:
    FUN_109ffdddc(&UNK_10f639994);
  }
  else {
    if (0x1404 < iVar1) {
      if (iVar1 == 0x1405) {
        lVar16 = *(long *)(param_3 + 0x30);
        lVar19 = lRam00000001137e9560;
        func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_3 + 0x38));
        if (lVar19 != 0) {
          uVar17 = *(ulong *)(lVar19 + 0x18);
          lVar19 = lRam00000001137e9568;
          func_0x000107c2b0ac(lRam00000001137e9568,0x1405);
          if (lVar19 != 0) {
            uVar18 = param_4 * 4;
            if (uVar17 <= param_4 && *(long *)(lVar19 + 0x18) * uVar17 <= uVar18) {
              FUN_10a0dc020(param_1,lVar16 * uVar18);
              lVar19 = *param_1;
              FUN_10a0c7dfc(&lStack_80,param_2,param_3);
              if (lVar16 != 0) {
                lVar15 = 0;
                do {
                  if (uVar17 != 0) {
                    puVar10 = (undefined4 *)(lStack_80 + lVar15 * uVar17 * 4);
                    puVar12 = (undefined4 *)(lVar19 + lVar15 * param_4 * 4);
                    lVar14 = uVar17 << 2;
                    do {
                      uVar20 = NEON_ucvtf(*puVar10);
                      *puVar12 = uVar20;
                      lVar14 = lVar14 + -4;
                      puVar10 = puVar10 + 1;
                      puVar12 = puVar12 + 1;
                    } while (lVar14 != 0);
                  }
                  if ((long)uVar17 < (long)param_4) {
                    _bzero(lVar19 + uVar17 * 4 + lVar15 * uVar18,uVar18 + uVar17 * -4);
                  }
                  lVar15 = lVar15 + 1;
                } while (lVar15 != lVar16);
              }
              goto LAB_10a0d128c;
            }
            uVar3 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt3__19to_stringEi(auStack_c8,*(undefined4 *)(param_3 + 0x38));
            FUN_109feb280(auStack_b0,&UNK_10f638d39,auStack_c8);
            FUN_10a012db0(alStack_98,auStack_b0,&UNK_10f638d5f);
            __ZNSt3__19to_stringEi(&puStack_e0,*(undefined4 *)(param_3 + 0x2c));
            if (-1 < (char)bStack_c9) {
              uStack_d8 = (ulong)bStack_c9;
              puStack_e0 = (undefined1 *)&puStack_e0;
            }
            plVar4 = alStack_98;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (plVar4,puStack_e0,uStack_d8);
            lStack_78 = plVar4[1];
            lStack_80 = *plVar4;
            lStack_70 = plVar4[2];
            plVar4[1] = 0;
            plVar4[2] = 0;
            *plVar4 = 0;
            __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      (uVar3,&lStack_80);
            ___cxa_throw(uVar3,PTR___ZTISt13runtime_error_110346a40,
                         PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            goto LAB_10a0d1828;
          }
        }
      }
      else {
        if (iVar1 != 0x1406) goto LAB_10a0d17d0;
        lVar19 = *(long *)(param_3 + 0x30);
        lVar16 = lRam00000001137e9560;
        func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_3 + 0x38));
        if (lVar16 != 0) {
          uVar17 = *(ulong *)(lVar16 + 0x18);
          lVar16 = lRam00000001137e9568;
          func_0x000107c2b0ac(lRam00000001137e9568,0x1406);
          if (lVar16 != 0) {
            uVar18 = param_4 * 4;
            if (uVar17 <= param_4 && *(long *)(lVar16 + 0x18) * uVar17 <= uVar18) {
              FUN_10a0dc020(param_1,lVar19 * uVar18);
              lVar16 = *param_1;
              FUN_10a0c7dfc(&lStack_80,param_2,param_3);
              if (lVar19 != 0) {
                lVar14 = uVar17 * 4;
                lVar15 = lStack_80;
                do {
                  if (uVar17 != 0) {
                    _memmove(lVar16,lVar15,lVar14);
                  }
                  if ((long)uVar17 < (long)param_4) {
                    _bzero(lVar16 + lVar14,uVar18 + uVar17 * -4);
                  }
                  lVar15 = lVar15 + lVar14;
                  lVar16 = lVar16 + uVar18;
                  lVar19 = lVar19 + -1;
                } while (lVar19 != 0);
              }
              goto LAB_10a0d128c;
            }
            uVar3 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt3__19to_stringEi(auStack_c8,*(undefined4 *)(param_3 + 0x38));
            FUN_109feb280(auStack_b0,&UNK_10f638d39,auStack_c8);
            FUN_10a012db0(alStack_98,auStack_b0,&UNK_10f638d5f);
            __ZNSt3__19to_stringEi(&puStack_e0,*(undefined4 *)(param_3 + 0x2c));
            if (-1 < (char)bStack_c9) {
              uStack_d8 = (ulong)bStack_c9;
              puStack_e0 = (undefined1 *)&puStack_e0;
            }
            plVar4 = alStack_98;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (plVar4,puStack_e0,uStack_d8);
            lStack_78 = plVar4[1];
            lStack_80 = *plVar4;
            lStack_70 = plVar4[2];
            plVar4[1] = 0;
            plVar4[2] = 0;
            *plVar4 = 0;
            __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      (uVar3,&lStack_80);
            ___cxa_throw(uVar3,PTR___ZTISt13runtime_error_110346a40,
                         PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            goto LAB_10a0d1828;
          }
        }
      }
      goto LAB_10a0d12bc;
    }
    if (iVar1 == 0x1403) {
      lVar16 = *(long *)(param_3 + 0x30);
      lVar19 = lRam00000001137e9560;
      func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_3 + 0x38));
      if (lVar19 != 0) {
        uVar17 = *(ulong *)(lVar19 + 0x18);
        lVar19 = lRam00000001137e9568;
        func_0x000107c2b0ac(lRam00000001137e9568,0x1403);
        if (lVar19 != 0) {
          uVar18 = param_4 * 4;
          if (param_4 < uVar17 || uVar18 < *(long *)(lVar19 + 0x18) * uVar17) {
            uVar3 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt3__19to_stringEi(auStack_c8,*(undefined4 *)(param_3 + 0x38));
            FUN_109feb280(auStack_b0,&UNK_10f638d39,auStack_c8);
            FUN_10a012db0(alStack_98,auStack_b0,&UNK_10f638d5f);
            __ZNSt3__19to_stringEi(&puStack_e0,*(undefined4 *)(param_3 + 0x2c));
            if (-1 < (char)bStack_c9) {
              uStack_d8 = (ulong)bStack_c9;
              puStack_e0 = (undefined1 *)&puStack_e0;
            }
            plVar4 = alStack_98;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (plVar4,puStack_e0,uStack_d8);
            lStack_78 = plVar4[1];
            lStack_80 = *plVar4;
            lStack_70 = plVar4[2];
            plVar4[1] = 0;
            plVar4[2] = 0;
            *plVar4 = 0;
            __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                      (uVar3,&lStack_80);
            ___cxa_throw(uVar3,PTR___ZTISt13runtime_error_110346a40,
                         PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            goto LAB_10a0d1828;
          }
          FUN_10a0dc020(param_1,lVar16 * uVar18);
          lVar19 = *param_1;
          FUN_10a0c7dfc(&lStack_80,param_2,param_3);
          if (lVar16 != 0) {
            lVar15 = 0;
            do {
              if (uVar17 != 0) {
                puVar9 = (ushort *)(lStack_80 + lVar15 * uVar17 * 2);
                pfVar11 = (float *)(lVar19 + lVar15 * param_4 * 4);
                lVar14 = uVar17 << 1;
                do {
                  *pfVar11 = (float)*puVar9;
                  lVar14 = lVar14 + -2;
                  puVar9 = puVar9 + 1;
                  pfVar11 = pfVar11 + 1;
                } while (lVar14 != 0);
              }
              if ((long)uVar17 < (long)param_4) {
                _bzero(lVar19 + uVar17 * 4 + lVar15 * uVar18,uVar18 + uVar17 * -4);
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 != lVar16);
          }
LAB_10a0d128c:
          if (lStack_80 != 0) {
            __ZdlPv(lStack_80);
          }
          return;
        }
      }
      goto LAB_10a0d12bc;
    }
    if (iVar1 != 0x1404) {
LAB_10a0d17d0:
      uVar3 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt3__19to_stringEi(alStack_98,*(undefined4 *)(param_3 + 0x2c));
      FUN_109feb280(&lStack_80,&UNK_10f638c92,alStack_98);
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (uVar3,&lStack_80);
      ___cxa_throw(uVar3,PTR___ZTISt13runtime_error_110346a40,
                   PTR___ZNSt13runtime_errorD1Ev_1103461d8);
      goto LAB_10a0d1828;
    }
    lVar16 = *(long *)(param_3 + 0x30);
    lVar19 = lRam00000001137e9560;
    func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(param_3 + 0x38));
    if (lVar19 == 0) goto LAB_10a0d12bc;
    uVar17 = *(ulong *)(lVar19 + 0x18);
    lVar19 = lRam00000001137e9568;
    func_0x000107c2b0ac(lRam00000001137e9568,0x1404);
    if (lVar19 == 0) goto LAB_10a0d12bc;
    uVar18 = param_4 * 4;
    if (uVar17 <= param_4 && *(long *)(lVar19 + 0x18) * uVar17 <= uVar18) {
      FUN_10a0dc020(param_1,lVar16 * uVar18);
      lVar19 = *param_1;
      FUN_10a0c7dfc(&lStack_80,param_2,param_3);
      if (lVar16 != 0) {
        lVar15 = 0;
        do {
          if (uVar17 != 0) {
            piVar5 = (int *)(lStack_80 + lVar15 * uVar17 * 4);
            pfVar11 = (float *)(lVar19 + lVar15 * param_4 * 4);
            lVar14 = uVar17 << 2;
            do {
              *pfVar11 = (float)*piVar5;
              lVar14 = lVar14 + -4;
              piVar5 = piVar5 + 1;
              pfVar11 = pfVar11 + 1;
            } while (lVar14 != 0);
          }
          if ((long)uVar17 < (long)param_4) {
            _bzero(lVar19 + uVar17 * 4 + lVar15 * uVar18,uVar18 + uVar17 * -4);
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 != lVar16);
      }
      goto LAB_10a0d128c;
    }
  }
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt3__19to_stringEi(auStack_c8,*(undefined4 *)(param_3 + 0x38));
  FUN_109feb280(auStack_b0,&UNK_10f638d39,auStack_c8);
  FUN_10a012db0(alStack_98,auStack_b0,&UNK_10f638d5f);
  __ZNSt3__19to_stringEi(&puStack_e0,*(undefined4 *)(param_3 + 0x2c));
  if (-1 < (char)bStack_c9) {
    uStack_d8 = (ulong)bStack_c9;
    puStack_e0 = (undefined1 *)&puStack_e0;
  }
  plVar4 = alStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar4,puStack_e0,uStack_d8);
  lStack_78 = plVar4[1];
  lStack_80 = *plVar4;
  lStack_70 = plVar4[2];
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (uVar3,&lStack_80);
  ___cxa_throw(uVar3,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
LAB_10a0d1828:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0d182c);
  (*pcVar2)();
}



/* Entry: 10a0d19d4; end: 10a0d1a3f;  */

undefined8 * FUN_10a0d19d4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[1];
    plVar1 = plVar3;
    if (plVar2 != plVar3) {
      do {
        plVar1 = plVar2 + -3;
        if (*plVar1 != 0) {
          plVar2[-2] = *plVar1;
          __ZdlPv();
        }
        plVar2 = plVar1;
      } while (plVar1 != plVar3);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar3;
    __ZdlPv(plVar1);
  }
  return param_1;
}



/* Entry: 10a0d1a40; end: 10a0d1a67;  */

void FUN_10a0d1a40(undefined8 param_1,undefined1 (*param_2) [16],long param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  
  FUN_109ffde64(&UNK_10f63805b);
  pauVar6 = (undefined1 (*) [16])&UNK_10f63805b;
  FUN_109ffde64();
LAB_10a0d1a94:
  do {
    pauVar25 = pauVar6;
    uVar10 = (long)param_2 - (long)pauVar25 >> 3;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        if (*(float *)(param_2[-1] + 0xc) <= *(float *)(*pauVar25 + 4)) {
          return;
        }
        uVar12 = *(undefined8 *)*pauVar25;
LAB_10a0d20c4:
        *(undefined8 *)*pauVar25 = *(undefined8 *)(param_2[-1] + 8);
LAB_10a0d20cc:
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        fVar27 = *(float *)(*pauVar25 + 0xc);
        if (fVar27 <= *(float *)(*pauVar25 + 4)) {
          if (*(float *)(param_2[-1] + 0xc) <= fVar27) {
            return;
          }
          uVar12 = *(undefined8 *)(*pauVar25 + 8);
          *(undefined8 *)(*pauVar25 + 8) = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar12;
          if (*(float *)(*pauVar25 + 0xc) <= *(float *)(*pauVar25 + 4)) {
            return;
          }
          auVar28 = NEON_ext(*pauVar25,*pauVar25,8,1);
          *(long *)(*pauVar25 + 8) = auVar28._8_8_;
          *(long *)*pauVar25 = auVar28._0_8_;
          return;
        }
        uVar12 = *(undefined8 *)*pauVar25;
        if (*(float *)(param_2[-1] + 0xc) <= fVar27) {
          *(undefined8 *)*pauVar25 = *(undefined8 *)(*pauVar25 + 8);
          *(undefined8 *)(*pauVar25 + 8) = uVar12;
          if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar12 >> 0x20)) {
            return;
          }
          *(undefined8 *)(*pauVar25 + 8) = *(undefined8 *)(param_2[-1] + 8);
          goto LAB_10a0d20cc;
        }
        goto LAB_10a0d20c4;
      }
      if (uVar10 == 4) {
        fVar30 = *(float *)(*pauVar25 + 0xc);
        fVar29 = *(float *)(*pauVar25 + 4);
        fVar27 = *(float *)(pauVar25[1] + 4);
        if (fVar30 <= fVar29) {
          if (fVar30 < fVar27) {
            uVar12 = *(undefined8 *)(*pauVar25 + 8);
            uVar11 = *(undefined8 *)pauVar25[1];
            *(undefined8 *)(*pauVar25 + 8) = uVar11;
            *(undefined8 *)pauVar25[1] = uVar12;
            fVar27 = (float)((ulong)uVar12 >> 0x20);
            if (fVar29 < (float)((ulong)uVar11 >> 0x20)) {
              uVar12 = *(undefined8 *)*pauVar25;
              *(undefined8 *)*pauVar25 = uVar11;
              *(undefined8 *)(*pauVar25 + 8) = uVar12;
            }
          }
        }
        else {
          uVar12 = *(undefined8 *)*pauVar25;
          fVar29 = (float)((ulong)uVar12 >> 0x20);
          if (fVar27 <= fVar30) {
            *(undefined8 *)*pauVar25 = *(undefined8 *)(*pauVar25 + 8);
            *(undefined8 *)(*pauVar25 + 8) = uVar12;
            if (fVar27 <= fVar29) goto LAB_10a0d2470;
            *(undefined8 *)(*pauVar25 + 8) = *(undefined8 *)pauVar25[1];
          }
          else {
            *(undefined8 *)*pauVar25 = *(undefined8 *)pauVar25[1];
          }
          *(undefined8 *)pauVar25[1] = uVar12;
          fVar27 = fVar29;
        }
LAB_10a0d2470:
        if (*(float *)(param_2[-1] + 0xc) <= fVar27) {
          return;
        }
        uVar12 = *(undefined8 *)pauVar25[1];
        *(undefined8 *)pauVar25[1] = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
        if (*(float *)(pauVar25[1] + 4) <= *(float *)(*pauVar25 + 0xc)) {
          return;
        }
        uVar12 = *(undefined8 *)(*pauVar25 + 8);
        uVar11 = *(undefined8 *)pauVar25[1];
        *(undefined8 *)(*pauVar25 + 8) = uVar11;
        *(undefined8 *)pauVar25[1] = uVar12;
        if ((float)((ulong)uVar11 >> 0x20) <= *(float *)(*pauVar25 + 4)) {
          return;
        }
        uVar12 = *(undefined8 *)*pauVar25;
        *(undefined8 *)*pauVar25 = uVar11;
        *(undefined8 *)(*pauVar25 + 8) = uVar12;
        return;
      }
      if (uVar10 == 5) {
        puVar22 = (undefined8 *)(*pauVar25 + 8);
        pauVar6 = pauVar25 + 1;
        puVar23 = (undefined8 *)(pauVar25[1] + 8);
        fVar29 = *(float *)(*pauVar25 + 0xc);
        fVar27 = *(float *)(pauVar25[1] + 4);
        if (fVar29 <= *(float *)(*pauVar25 + 4)) {
          if (fVar29 < fVar27) {
            uVar9 = *(undefined4 *)puVar22;
            fVar27 = *(float *)(*pauVar25 + 0xc);
            *puVar22 = *(undefined8 *)*pauVar6;
            *(undefined4 *)*pauVar6 = uVar9;
            *(float *)(pauVar25[1] + 4) = fVar27;
            if (*(float *)(*pauVar25 + 4) < *(float *)(*pauVar25 + 0xc)) {
              uVar12 = *(undefined8 *)*pauVar25;
              *(undefined8 *)*pauVar25 = *puVar22;
              *puVar22 = uVar12;
              fVar27 = *(float *)(pauVar25[1] + 4);
            }
          }
        }
        else {
          uVar9 = *(undefined4 *)*pauVar25;
          fVar30 = *(float *)(*pauVar25 + 4);
          if (fVar27 <= fVar29) {
            *(undefined8 *)*pauVar25 = *puVar22;
            *(undefined4 *)puVar22 = uVar9;
            *(float *)(*pauVar25 + 0xc) = fVar30;
            fVar27 = *(float *)(pauVar25[1] + 4);
            if (fVar30 < *(float *)(pauVar25[1] + 4)) {
              *puVar22 = *(undefined8 *)*pauVar6;
              *(undefined4 *)*pauVar6 = uVar9;
              *(float *)(pauVar25[1] + 4) = fVar30;
              fVar27 = fVar30;
            }
          }
          else {
            *(undefined8 *)*pauVar25 = *(undefined8 *)*pauVar6;
            *(undefined4 *)*pauVar6 = uVar9;
            *(float *)(pauVar25[1] + 4) = fVar30;
            fVar27 = fVar30;
          }
        }
        if (fVar27 < *(float *)(pauVar25[1] + 0xc)) {
          uVar12 = *(undefined8 *)*pauVar6;
          *(undefined8 *)*pauVar6 = *puVar23;
          *puVar23 = uVar12;
          if (*(float *)(*pauVar25 + 0xc) < *(float *)(pauVar25[1] + 4)) {
            uVar12 = *puVar22;
            *puVar22 = *(undefined8 *)*pauVar6;
            *(undefined8 *)*pauVar6 = uVar12;
            if (*(float *)(*pauVar25 + 4) < *(float *)(*pauVar25 + 0xc)) {
              uVar12 = *(undefined8 *)*pauVar25;
              *(undefined8 *)*pauVar25 = *puVar22;
              *puVar22 = uVar12;
            }
          }
        }
        if (*(float *)(pauVar25[1] + 0xc) < *(float *)(param_2[-1] + 0xc)) {
          uVar12 = *puVar23;
          *puVar23 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar12;
          if (*(float *)(pauVar25[1] + 4) < *(float *)(pauVar25[1] + 0xc)) {
            uVar12 = *(undefined8 *)*pauVar6;
            *(undefined8 *)*pauVar6 = *puVar23;
            *puVar23 = uVar12;
            if (*(float *)(*pauVar25 + 0xc) < *(float *)(pauVar25[1] + 4)) {
              uVar12 = *puVar22;
              *puVar22 = *(undefined8 *)*pauVar6;
              *(undefined8 *)*pauVar6 = uVar12;
              if (*(float *)(*pauVar25 + 4) < *(float *)(*pauVar25 + 0xc)) {
                uVar12 = *(undefined8 *)*pauVar25;
                *(undefined8 *)*pauVar25 = *puVar22;
                *puVar22 = uVar12;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar10 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (pauVar25 == param_2) {
          return;
        }
        pauVar6 = (undefined1 (*) [16])(*pauVar25 + 8);
        if (pauVar6 == param_2) {
          return;
        }
        lVar14 = -8;
        lVar15 = 0;
        lVar20 = 8;
        do {
          fVar27 = *(float *)(*pauVar25 + lVar15 + 0xc);
          if (*(float *)(*pauVar25 + lVar15 + 4) < fVar27) {
            uVar9 = *(undefined4 *)*pauVar6;
            pauVar7 = pauVar6;
            lVar15 = lVar14;
            do {
              pauVar8 = pauVar7;
              *(undefined8 *)*pauVar8 = *(undefined8 *)(pauVar8[-1] + 8);
              if (lVar15 == 0) goto LAB_10a0d244c;
              lVar15 = lVar15 + 8;
              pauVar7 = (undefined1 (*) [16])(pauVar8[-1] + 8);
            } while (*(float *)(pauVar8[-1] + 4) < fVar27);
            *(undefined4 *)*(undefined1 (*) [16])(pauVar8[-1] + 8) = uVar9;
            *(float *)(pauVar8[-1] + 0xc) = fVar27;
          }
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + 8);
          lVar14 = lVar14 + -8;
          lVar15 = lVar20;
          lVar20 = lVar20 + 8;
          if (pauVar6 == param_2) {
            return;
          }
        } while( true );
      }
      if (pauVar25 == param_2) {
        return;
      }
      if ((undefined1 (*) [16])(*pauVar25 + 8) == param_2) {
        return;
      }
      lVar15 = 0;
      pauVar6 = pauVar25;
      pauVar7 = (undefined1 (*) [16])(*pauVar25 + 8);
      do {
        fVar27 = *(float *)(*pauVar6 + 0xc);
        if (*(float *)(*pauVar6 + 4) < fVar27) {
          uVar9 = *(undefined4 *)*pauVar7;
          lVar20 = lVar15;
          do {
            lVar14 = lVar20;
            puVar22 = (undefined8 *)(*pauVar25 + lVar14);
            puVar22[1] = *puVar22;
            pauVar6 = pauVar25;
            if (lVar14 == 0) goto LAB_10a0d2174;
            lVar20 = lVar14 + -8;
          } while (*(float *)((long)puVar22 + -4) < fVar27);
          pauVar6 = (undefined1 (*) [16])(*pauVar25 + lVar14);
LAB_10a0d2174:
          *(undefined4 *)*pauVar6 = uVar9;
          *(float *)(*pauVar6 + 4) = fVar27;
        }
        puVar3 = *pauVar7;
        lVar15 = lVar15 + 8;
        pauVar6 = pauVar7;
        pauVar7 = (undefined1 (*) [16])(puVar3 + 8);
        if ((undefined1 (*) [16])(puVar3 + 8) == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pauVar25 == param_2) {
        return;
      }
      uVar13 = uVar10 - 2 >> 1;
      uVar17 = uVar13;
      do {
        if ((long)uVar17 <= (long)uVar13) {
          uVar19 = uVar17 << 1 | 1;
          puVar22 = (undefined8 *)(*pauVar25 + uVar19 * 8);
          uVar24 = uVar17 * 2 + 2;
          if (((long)uVar24 < (long)uVar10) &&
             (*(float *)((long)puVar22 + 0xc) < *(float *)((long)puVar22 + 4))) {
            puVar22 = puVar22 + 1;
            uVar19 = uVar24;
          }
          puVar23 = (undefined8 *)(*pauVar25 + uVar17 * 8);
          fVar27 = *(float *)((long)puVar23 + 4);
          if (*(float *)((long)puVar22 + 4) <= fVar27) {
            uVar9 = *(undefined4 *)puVar23;
            do {
              puVar21 = puVar22;
              *puVar23 = *puVar21;
              if ((long)uVar13 < (long)uVar19) break;
              uVar1 = uVar19 << 1 | 1;
              puVar22 = (undefined8 *)(*pauVar25 + uVar1 * 8);
              uVar24 = uVar19 * 2 + 2;
              uVar19 = uVar1;
              if (((long)uVar24 < (long)uVar10) &&
                 (*(float *)((long)puVar22 + 0xc) < *(float *)((long)puVar22 + 4))) {
                puVar22 = puVar22 + 1;
                uVar19 = uVar24;
              }
              puVar23 = puVar21;
            } while (*(float *)((long)puVar22 + 4) <= fVar27);
            *(undefined4 *)puVar21 = uVar9;
            *(float *)((long)puVar21 + 4) = fVar27;
          }
        }
        bVar2 = uVar17 != 0;
        uVar17 = uVar17 - 1;
      } while (bVar2);
      do {
        uVar12 = *(undefined8 *)*pauVar25;
        pauVar6 = pauVar25;
        uVar17 = 0;
        do {
          uVar24 = uVar17 << 1 | 1;
          uVar13 = uVar17 * 2 + 2;
          pauVar7 = (undefined1 (*) [16])(*pauVar6 + uVar17 * 8 + 8);
          if (((long)uVar13 < (long)uVar10) &&
             (*(float *)(pauVar6[1] + uVar17 * 8 + 4) < *(float *)(*pauVar6 + uVar17 * 8 + 0xc))) {
            pauVar7 = (undefined1 (*) [16])(pauVar6[1] + uVar17 * 8);
            uVar24 = uVar13;
          }
          *(undefined8 *)*pauVar6 = *(undefined8 *)*pauVar7;
          pauVar6 = pauVar7;
          uVar17 = uVar24;
        } while ((long)uVar24 <= (long)(uVar10 - 2 >> 1));
        param_2 = (undefined1 (*) [16])(param_2[-1] + 8);
        if (pauVar7 == param_2) {
          *(undefined8 *)*pauVar7 = uVar12;
        }
        else {
          *(undefined8 *)*pauVar7 = *(undefined8 *)*param_2;
          *(undefined8 *)*param_2 = uVar12;
          lVar15 = (long)((long)pauVar7 + (8 - (long)pauVar25)) >> 3;
          if (1 < lVar15) {
            uVar17 = lVar15 - 2U >> 1;
            fVar27 = *(float *)(*pauVar7 + 4);
            if (fVar27 < *(float *)(*(undefined1 (*) [16])(*pauVar25 + uVar17 * 8) + 4)) {
              uVar9 = *(undefined4 *)*pauVar7;
              pauVar6 = (undefined1 (*) [16])(*pauVar25 + uVar17 * 8);
              do {
                pauVar8 = pauVar6;
                *(undefined8 *)*pauVar7 = *(undefined8 *)*pauVar8;
                if (uVar17 == 0) break;
                uVar17 = uVar17 - 1 >> 1;
                pauVar7 = pauVar8;
                pauVar6 = (undefined1 (*) [16])(*pauVar25 + uVar17 * 8);
              } while (fVar27 < *(float *)(*(undefined1 (*) [16])(*pauVar25 + uVar17 * 8) + 4));
              *(undefined4 *)*pauVar8 = uVar9;
              *(float *)(*pauVar8 + 4) = fVar27;
            }
          }
        }
        bVar2 = (long)uVar10 < 3;
        uVar10 = uVar10 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    puVar22 = (undefined8 *)(*pauVar25 + (uVar10 >> 1) * 8);
    fVar27 = *(float *)(param_2[-1] + 0xc);
    if (uVar10 < 0x81) {
      fVar29 = *(float *)(*pauVar25 + 4);
      if (fVar29 <= *(float *)((long)puVar22 + 4)) {
        if (fVar29 < fVar27) {
          uVar12 = *(undefined8 *)*pauVar25;
          *(undefined8 *)*pauVar25 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar12;
          if (*(float *)((long)puVar22 + 4) < *(float *)(*pauVar25 + 4)) {
            uVar12 = *puVar22;
            *puVar22 = *(undefined8 *)*pauVar25;
            *(undefined8 *)*pauVar25 = uVar12;
          }
        }
      }
      else {
        uVar12 = *puVar22;
        if (fVar27 <= fVar29) {
          *puVar22 = *(undefined8 *)*pauVar25;
          *(undefined8 *)*pauVar25 = uVar12;
          if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar12 >> 0x20)) goto LAB_10a0d1dd0;
          *(undefined8 *)*pauVar25 = *(undefined8 *)(param_2[-1] + 8);
        }
        else {
          *puVar22 = *(undefined8 *)(param_2[-1] + 8);
        }
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
      }
    }
    else {
      fVar29 = *(float *)((long)puVar22 + 4);
      if (fVar29 <= *(float *)(*pauVar25 + 4)) {
        if (fVar29 < fVar27) {
          uVar12 = *puVar22;
          *puVar22 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar12;
          if (*(float *)(*pauVar25 + 4) < *(float *)((long)puVar22 + 4)) {
            uVar12 = *(undefined8 *)*pauVar25;
            *(undefined8 *)*pauVar25 = *puVar22;
            *puVar22 = uVar12;
          }
        }
      }
      else {
        uVar12 = *(undefined8 *)*pauVar25;
        if (fVar27 <= fVar29) {
          *(undefined8 *)*pauVar25 = *puVar22;
          *puVar22 = uVar12;
          if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar12 >> 0x20)) goto LAB_10a0d1be4;
          *puVar22 = *(undefined8 *)(param_2[-1] + 8);
        }
        else {
          *(undefined8 *)*pauVar25 = *(undefined8 *)(param_2[-1] + 8);
        }
        *(undefined8 *)(param_2[-1] + 8) = uVar12;
      }
LAB_10a0d1be4:
      fVar27 = *(float *)((long)puVar22 + -4);
      if (fVar27 <= *(float *)(*pauVar25 + 0xc)) {
        if (fVar27 < *(float *)(param_2[-1] + 4)) {
          uVar12 = puVar22[-1];
          puVar22[-1] = *(undefined8 *)param_2[-1];
          *(undefined8 *)param_2[-1] = uVar12;
          if (*(float *)(*pauVar25 + 0xc) < *(float *)((long)puVar22 + -4)) {
            uVar12 = *(undefined8 *)(*pauVar25 + 8);
            *(undefined8 *)(*pauVar25 + 8) = puVar22[-1];
            puVar22[-1] = uVar12;
          }
        }
      }
      else {
        uVar12 = *(undefined8 *)(*pauVar25 + 8);
        if (*(float *)(param_2[-1] + 4) <= fVar27) {
          *(undefined8 *)(*pauVar25 + 8) = puVar22[-1];
          puVar22[-1] = uVar12;
          if (*(float *)(param_2[-1] + 4) <= (float)((ulong)uVar12 >> 0x20)) goto LAB_10a0d1ca8;
          puVar22[-1] = *(undefined8 *)param_2[-1];
        }
        else {
          *(undefined8 *)(*pauVar25 + 8) = *(undefined8 *)param_2[-1];
        }
        *(undefined8 *)param_2[-1] = uVar12;
      }
LAB_10a0d1ca8:
      fVar27 = *(float *)((long)puVar22 + 0xc);
      if (fVar27 <= *(float *)(pauVar25[1] + 4)) {
        if (fVar27 < *(float *)(param_2[-2] + 0xc)) {
          uVar12 = puVar22[1];
          puVar22[1] = *(undefined8 *)(param_2[-2] + 8);
          *(undefined8 *)(param_2[-2] + 8) = uVar12;
          if (*(float *)(pauVar25[1] + 4) < *(float *)((long)puVar22 + 0xc)) {
            uVar12 = *(undefined8 *)pauVar25[1];
            *(undefined8 *)pauVar25[1] = puVar22[1];
            puVar22[1] = uVar12;
          }
        }
      }
      else {
        uVar12 = *(undefined8 *)pauVar25[1];
        if (*(float *)(param_2[-2] + 0xc) <= fVar27) {
          *(undefined8 *)pauVar25[1] = puVar22[1];
          puVar22[1] = uVar12;
          if (*(float *)(param_2[-2] + 0xc) <= (float)((ulong)uVar12 >> 0x20)) goto LAB_10a0d1d3c;
          puVar22[1] = *(undefined8 *)(param_2[-2] + 8);
        }
        else {
          *(undefined8 *)pauVar25[1] = *(undefined8 *)(param_2[-2] + 8);
        }
        *(undefined8 *)(param_2[-2] + 8) = uVar12;
      }
LAB_10a0d1d3c:
      fVar29 = *(float *)((long)puVar22 + 4);
      fVar27 = *(float *)((long)puVar22 + 0xc);
      if (fVar29 <= *(float *)((long)puVar22 + -4)) {
        uVar11 = *puVar22;
        uVar12 = uVar11;
        if (fVar29 < fVar27) {
          uVar12 = puVar22[1];
          *puVar22 = uVar12;
          puVar22[1] = uVar11;
          if (*(float *)((long)puVar22 + -4) < (float)((ulong)uVar12 >> 0x20)) {
            uVar11 = puVar22[-1];
            puVar22[-1] = uVar12;
            *puVar22 = uVar11;
            uVar12 = uVar11;
          }
        }
      }
      else {
        uVar11 = puVar22[-1];
        if (fVar27 <= fVar29) {
          puVar22[-1] = *puVar22;
          *puVar22 = uVar11;
          uVar12 = uVar11;
          if ((float)((ulong)uVar11 >> 0x20) < fVar27) {
            uVar12 = puVar22[1];
            *puVar22 = uVar12;
            puVar22[1] = uVar11;
          }
        }
        else {
          puVar22[-1] = puVar22[1];
          puVar22[1] = uVar11;
          uVar12 = *puVar22;
        }
      }
      uVar11 = *(undefined8 *)*pauVar25;
      *(undefined8 *)*pauVar25 = uVar12;
      *puVar22 = uVar11;
    }
LAB_10a0d1dd0:
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      fVar27 = *(float *)(*pauVar25 + 4);
      uVar9 = *(undefined4 *)*pauVar25;
      if (*(float *)(pauVar25[-1] + 0xc) <= fVar27) {
        pauVar7 = (undefined1 (*) [16])(*pauVar25 + 8);
        if (fVar27 <= *(float *)(param_2[-1] + 0xc)) {
          do {
            pauVar6 = pauVar7;
            if (param_2 <= pauVar6) break;
            pauVar7 = (undefined1 (*) [16])(*pauVar6 + 8);
          } while (fVar27 <= *(float *)(*pauVar6 + 4));
        }
        else {
          do {
            pauVar6 = pauVar7;
            if (pauVar6 == param_2) goto LAB_10a0d244c;
            pauVar7 = (undefined1 (*) [16])(*pauVar6 + 8);
          } while (fVar27 <= *(float *)(*pauVar6 + 4));
        }
        pauVar7 = param_2;
        pauVar8 = param_2;
        if (pauVar6 < param_2) {
          do {
            if (pauVar8 == pauVar25) goto LAB_10a0d244c;
            pauVar7 = (undefined1 (*) [16])(pauVar8[-1] + 8);
            pauVar16 = pauVar8 + -1;
            pauVar8 = pauVar7;
          } while (*(float *)(*pauVar16 + 0xc) < fVar27);
        }
        while (pauVar6 < pauVar7) {
          uVar12 = *(undefined8 *)*pauVar6;
          *(undefined8 *)*pauVar6 = *(undefined8 *)*pauVar7;
          *(undefined8 *)*pauVar7 = uVar12;
          pauVar8 = pauVar6;
          do {
            pauVar6 = (undefined1 (*) [16])(*pauVar8 + 8);
            if (pauVar6 == param_2) goto LAB_10a0d244c;
            puVar3 = *pauVar8;
            pauVar16 = pauVar7;
            pauVar8 = pauVar6;
          } while (fVar27 <= *(float *)(puVar3 + 0xc));
          do {
            if (pauVar16 == pauVar25) goto LAB_10a0d244c;
            pauVar7 = (undefined1 (*) [16])(pauVar16[-1] + 8);
            pauVar8 = pauVar16 + -1;
            pauVar16 = pauVar7;
          } while (*(float *)(*pauVar8 + 0xc) < fVar27);
        }
        if ((undefined1 (*) [16])(pauVar6[-1] + 8) != pauVar25) {
          *(undefined8 *)*pauVar25 = *(undefined8 *)*(undefined1 (*) [16])(pauVar6[-1] + 8);
        }
        param_4 = 0;
        *(undefined4 *)(pauVar6[-1] + 8) = uVar9;
        *(float *)(pauVar6[-1] + 0xc) = fVar27;
        goto LAB_10a0d1a94;
      }
    }
    else {
      uVar9 = *(undefined4 *)*pauVar25;
      fVar27 = *(float *)(*pauVar25 + 4);
    }
    lVar15 = 0;
    do {
      if ((undefined1 (*) [16])(*pauVar25 + lVar15 + 8) == param_2) goto LAB_10a0d244c;
      lVar20 = lVar15 + 0xc;
      lVar15 = lVar15 + 8;
    } while (fVar27 < *(float *)(*pauVar25 + lVar20));
    pauVar7 = (undefined1 (*) [16])(*pauVar25 + lVar15);
    pauVar6 = param_2;
    if (lVar15 == 8) {
      do {
        pauVar8 = pauVar6;
        if (pauVar6 <= pauVar7) break;
        pauVar8 = (undefined1 (*) [16])(pauVar6[-1] + 8);
        pauVar16 = pauVar6 + -1;
        pauVar6 = pauVar8;
      } while (*(float *)(*pauVar16 + 0xc) <= fVar27);
    }
    else {
      do {
        if (pauVar6 == pauVar25) {
LAB_10a0d244c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a0d2450);
          (*pcVar5)();
        }
        pauVar8 = (undefined1 (*) [16])(pauVar6[-1] + 8);
        pauVar16 = pauVar6 + -1;
        pauVar6 = pauVar8;
      } while (*(float *)(*pauVar16 + 0xc) <= fVar27);
    }
    pauVar16 = pauVar8;
    pauVar6 = pauVar7;
    pauVar26 = pauVar7;
    if (pauVar7 < pauVar8) {
      do {
        uVar12 = *(undefined8 *)*pauVar26;
        *(undefined8 *)*pauVar26 = *(undefined8 *)*pauVar16;
        *(undefined8 *)*pauVar16 = uVar12;
        do {
          pauVar6 = (undefined1 (*) [16])(*pauVar26 + 8);
          if (pauVar6 == param_2) goto LAB_10a0d244c;
          puVar3 = *pauVar26;
          pauVar26 = pauVar6;
        } while (fVar27 < *(float *)(puVar3 + 0xc));
        do {
          if (pauVar16 == pauVar25) goto LAB_10a0d244c;
          pauVar18 = (undefined1 (*) [16])(pauVar16[-1] + 8);
          pauVar4 = pauVar16 + -1;
          pauVar16 = pauVar18;
        } while (*(float *)(*pauVar4 + 0xc) <= fVar27);
      } while (pauVar6 < pauVar18);
    }
    pauVar16 = (undefined1 (*) [16])(pauVar6[-1] + 8);
    if (pauVar16 != pauVar25) {
      *(undefined8 *)*pauVar25 = *(undefined8 *)*pauVar16;
    }
    *(undefined4 *)(pauVar6[-1] + 8) = uVar9;
    *(float *)(pauVar6[-1] + 0xc) = fVar27;
    if (pauVar7 < pauVar8) {
LAB_10a0d1f20:
      FUN_10a0d1a68(pauVar25,pauVar16,param_3,(uint)param_4 & 1);
      param_4 = 0;
    }
    else {
      pauVar7 = pauVar25;
      FUN_10a0d2664(pauVar25,pauVar16);
      pauVar8 = pauVar6;
      FUN_10a0d2664(pauVar6,param_2);
      if ((int)pauVar8 == 0) {
        if (((ulong)pauVar7 & 1) == 0) goto LAB_10a0d1f20;
      }
      else {
        pauVar6 = pauVar25;
        param_2 = pauVar16;
        if (((ulong)pauVar7 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a0d1a68; end: 10a0d24d7;  */

void FUN_10a0d1a68(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  
LAB_10a0d1a94:
  do {
    pauVar24 = param_1;
    uVar9 = (long)param_2 - (long)pauVar24 >> 3;
    if (uVar9 - 2 == 0 || (long)uVar9 < 2) {
      if (uVar9 < 2) {
        return;
      }
      if (uVar9 == 2) {
        if (*(float *)(param_2[-1] + 0xc) <= *(float *)(*pauVar24 + 4)) {
          return;
        }
        uVar11 = *(undefined8 *)*pauVar24;
LAB_10a0d20c4:
        *(undefined8 *)*pauVar24 = *(undefined8 *)(param_2[-1] + 8);
LAB_10a0d20cc:
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
        return;
      }
    }
    else {
      if (uVar9 == 3) {
        fVar26 = *(float *)(*pauVar24 + 0xc);
        if (fVar26 <= *(float *)(*pauVar24 + 4)) {
          if (*(float *)(param_2[-1] + 0xc) <= fVar26) {
            return;
          }
          uVar11 = *(undefined8 *)(*pauVar24 + 8);
          *(undefined8 *)(*pauVar24 + 8) = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar11;
          if (*(float *)(*pauVar24 + 0xc) <= *(float *)(*pauVar24 + 4)) {
            return;
          }
          auVar27 = NEON_ext(*pauVar24,*pauVar24,8,1);
          *(long *)(*pauVar24 + 8) = auVar27._8_8_;
          *(long *)*pauVar24 = auVar27._0_8_;
          return;
        }
        uVar11 = *(undefined8 *)*pauVar24;
        if (*(float *)(param_2[-1] + 0xc) <= fVar26) {
          *(undefined8 *)*pauVar24 = *(undefined8 *)(*pauVar24 + 8);
          *(undefined8 *)(*pauVar24 + 8) = uVar11;
          if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar11 >> 0x20)) {
            return;
          }
          *(undefined8 *)(*pauVar24 + 8) = *(undefined8 *)(param_2[-1] + 8);
          goto LAB_10a0d20cc;
        }
        goto LAB_10a0d20c4;
      }
      if (uVar9 == 4) {
        fVar29 = *(float *)(*pauVar24 + 0xc);
        fVar28 = *(float *)(*pauVar24 + 4);
        fVar26 = *(float *)(pauVar24[1] + 4);
        if (fVar29 <= fVar28) {
          if (fVar29 < fVar26) {
            uVar11 = *(undefined8 *)(*pauVar24 + 8);
            uVar10 = *(undefined8 *)pauVar24[1];
            *(undefined8 *)(*pauVar24 + 8) = uVar10;
            *(undefined8 *)pauVar24[1] = uVar11;
            fVar26 = (float)((ulong)uVar11 >> 0x20);
            if (fVar28 < (float)((ulong)uVar10 >> 0x20)) {
              uVar11 = *(undefined8 *)*pauVar24;
              *(undefined8 *)*pauVar24 = uVar10;
              *(undefined8 *)(*pauVar24 + 8) = uVar11;
            }
          }
        }
        else {
          uVar11 = *(undefined8 *)*pauVar24;
          fVar28 = (float)((ulong)uVar11 >> 0x20);
          if (fVar26 <= fVar29) {
            *(undefined8 *)*pauVar24 = *(undefined8 *)(*pauVar24 + 8);
            *(undefined8 *)(*pauVar24 + 8) = uVar11;
            if (fVar26 <= fVar28) goto LAB_10a0d2470;
            *(undefined8 *)(*pauVar24 + 8) = *(undefined8 *)pauVar24[1];
          }
          else {
            *(undefined8 *)*pauVar24 = *(undefined8 *)pauVar24[1];
          }
          *(undefined8 *)pauVar24[1] = uVar11;
          fVar26 = fVar28;
        }
LAB_10a0d2470:
        if (*(float *)(param_2[-1] + 0xc) <= fVar26) {
          return;
        }
        uVar11 = *(undefined8 *)pauVar24[1];
        *(undefined8 *)pauVar24[1] = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
        if (*(float *)(pauVar24[1] + 4) <= *(float *)(*pauVar24 + 0xc)) {
          return;
        }
        uVar11 = *(undefined8 *)(*pauVar24 + 8);
        uVar10 = *(undefined8 *)pauVar24[1];
        *(undefined8 *)(*pauVar24 + 8) = uVar10;
        *(undefined8 *)pauVar24[1] = uVar11;
        if ((float)((ulong)uVar10 >> 0x20) <= *(float *)(*pauVar24 + 4)) {
          return;
        }
        uVar11 = *(undefined8 *)*pauVar24;
        *(undefined8 *)*pauVar24 = uVar10;
        *(undefined8 *)(*pauVar24 + 8) = uVar11;
        return;
      }
      if (uVar9 == 5) {
        puVar21 = (undefined8 *)(*pauVar24 + 8);
        pauVar6 = pauVar24 + 1;
        puVar22 = (undefined8 *)(pauVar24[1] + 8);
        fVar28 = *(float *)(*pauVar24 + 0xc);
        fVar26 = *(float *)(pauVar24[1] + 4);
        if (fVar28 <= *(float *)(*pauVar24 + 4)) {
          if (fVar28 < fVar26) {
            uVar8 = *(undefined4 *)puVar21;
            fVar26 = *(float *)(*pauVar24 + 0xc);
            *puVar21 = *(undefined8 *)*pauVar6;
            *(undefined4 *)*pauVar6 = uVar8;
            *(float *)(pauVar24[1] + 4) = fVar26;
            if (*(float *)(*pauVar24 + 4) < *(float *)(*pauVar24 + 0xc)) {
              uVar11 = *(undefined8 *)*pauVar24;
              *(undefined8 *)*pauVar24 = *puVar21;
              *puVar21 = uVar11;
              fVar26 = *(float *)(pauVar24[1] + 4);
            }
          }
        }
        else {
          uVar8 = *(undefined4 *)*pauVar24;
          fVar29 = *(float *)(*pauVar24 + 4);
          if (fVar26 <= fVar28) {
            *(undefined8 *)*pauVar24 = *puVar21;
            *(undefined4 *)puVar21 = uVar8;
            *(float *)(*pauVar24 + 0xc) = fVar29;
            fVar26 = *(float *)(pauVar24[1] + 4);
            if (fVar29 < *(float *)(pauVar24[1] + 4)) {
              *puVar21 = *(undefined8 *)*pauVar6;
              *(undefined4 *)*pauVar6 = uVar8;
              *(float *)(pauVar24[1] + 4) = fVar29;
              fVar26 = fVar29;
            }
          }
          else {
            *(undefined8 *)*pauVar24 = *(undefined8 *)*pauVar6;
            *(undefined4 *)*pauVar6 = uVar8;
            *(float *)(pauVar24[1] + 4) = fVar29;
            fVar26 = fVar29;
          }
        }
        if (fVar26 < *(float *)(pauVar24[1] + 0xc)) {
          uVar11 = *(undefined8 *)*pauVar6;
          *(undefined8 *)*pauVar6 = *puVar22;
          *puVar22 = uVar11;
          if (*(float *)(*pauVar24 + 0xc) < *(float *)(pauVar24[1] + 4)) {
            uVar11 = *puVar21;
            *puVar21 = *(undefined8 *)*pauVar6;
            *(undefined8 *)*pauVar6 = uVar11;
            if (*(float *)(*pauVar24 + 4) < *(float *)(*pauVar24 + 0xc)) {
              uVar11 = *(undefined8 *)*pauVar24;
              *(undefined8 *)*pauVar24 = *puVar21;
              *puVar21 = uVar11;
            }
          }
        }
        if (*(float *)(pauVar24[1] + 0xc) < *(float *)(param_2[-1] + 0xc)) {
          uVar11 = *puVar22;
          *puVar22 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar11;
          if (*(float *)(pauVar24[1] + 4) < *(float *)(pauVar24[1] + 0xc)) {
            uVar11 = *(undefined8 *)*pauVar6;
            *(undefined8 *)*pauVar6 = *puVar22;
            *puVar22 = uVar11;
            if (*(float *)(*pauVar24 + 0xc) < *(float *)(pauVar24[1] + 4)) {
              uVar11 = *puVar21;
              *puVar21 = *(undefined8 *)*pauVar6;
              *(undefined8 *)*pauVar6 = uVar11;
              if (*(float *)(*pauVar24 + 4) < *(float *)(*pauVar24 + 0xc)) {
                uVar11 = *(undefined8 *)*pauVar24;
                *(undefined8 *)*pauVar24 = *puVar21;
                *puVar21 = uVar11;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar9 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (pauVar24 == param_2) {
          return;
        }
        pauVar6 = (undefined1 (*) [16])(*pauVar24 + 8);
        if (pauVar6 == param_2) {
          return;
        }
        lVar14 = -8;
        lVar15 = 0;
        lVar19 = 8;
        do {
          fVar26 = *(float *)(*pauVar24 + lVar15 + 0xc);
          if (*(float *)(*pauVar24 + lVar15 + 4) < fVar26) {
            uVar8 = *(undefined4 *)*pauVar6;
            pauVar13 = pauVar6;
            lVar15 = lVar14;
            do {
              pauVar7 = pauVar13;
              *(undefined8 *)*pauVar7 = *(undefined8 *)(pauVar7[-1] + 8);
              if (lVar15 == 0) goto LAB_10a0d244c;
              lVar15 = lVar15 + 8;
              pauVar13 = (undefined1 (*) [16])(pauVar7[-1] + 8);
            } while (*(float *)(pauVar7[-1] + 4) < fVar26);
            *(undefined4 *)*(undefined1 (*) [16])(pauVar7[-1] + 8) = uVar8;
            *(float *)(pauVar7[-1] + 0xc) = fVar26;
          }
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + 8);
          lVar14 = lVar14 + -8;
          lVar15 = lVar19;
          lVar19 = lVar19 + 8;
          if (pauVar6 == param_2) {
            return;
          }
        } while( true );
      }
      if (pauVar24 == param_2) {
        return;
      }
      if ((undefined1 (*) [16])(*pauVar24 + 8) == param_2) {
        return;
      }
      lVar15 = 0;
      pauVar6 = pauVar24;
      pauVar13 = (undefined1 (*) [16])(*pauVar24 + 8);
      do {
        fVar26 = *(float *)(*pauVar6 + 0xc);
        if (*(float *)(*pauVar6 + 4) < fVar26) {
          uVar8 = *(undefined4 *)*pauVar13;
          lVar19 = lVar15;
          do {
            lVar14 = lVar19;
            puVar21 = (undefined8 *)(*pauVar24 + lVar14);
            puVar21[1] = *puVar21;
            pauVar6 = pauVar24;
            if (lVar14 == 0) goto LAB_10a0d2174;
            lVar19 = lVar14 + -8;
          } while (*(float *)((long)puVar21 + -4) < fVar26);
          pauVar6 = (undefined1 (*) [16])(*pauVar24 + lVar14);
LAB_10a0d2174:
          *(undefined4 *)*pauVar6 = uVar8;
          *(float *)(*pauVar6 + 4) = fVar26;
        }
        puVar3 = *pauVar13;
        lVar15 = lVar15 + 8;
        pauVar6 = pauVar13;
        pauVar13 = (undefined1 (*) [16])(puVar3 + 8);
        if ((undefined1 (*) [16])(puVar3 + 8) == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (pauVar24 == param_2) {
        return;
      }
      uVar12 = uVar9 - 2 >> 1;
      uVar16 = uVar12;
      do {
        if ((long)uVar16 <= (long)uVar12) {
          uVar18 = uVar16 << 1 | 1;
          puVar21 = (undefined8 *)(*pauVar24 + uVar18 * 8);
          uVar23 = uVar16 * 2 + 2;
          if (((long)uVar23 < (long)uVar9) &&
             (*(float *)((long)puVar21 + 0xc) < *(float *)((long)puVar21 + 4))) {
            puVar21 = puVar21 + 1;
            uVar18 = uVar23;
          }
          puVar22 = (undefined8 *)(*pauVar24 + uVar16 * 8);
          fVar26 = *(float *)((long)puVar22 + 4);
          if (*(float *)((long)puVar21 + 4) <= fVar26) {
            uVar8 = *(undefined4 *)puVar22;
            do {
              puVar20 = puVar21;
              *puVar22 = *puVar20;
              if ((long)uVar12 < (long)uVar18) break;
              uVar1 = uVar18 << 1 | 1;
              puVar21 = (undefined8 *)(*pauVar24 + uVar1 * 8);
              uVar23 = uVar18 * 2 + 2;
              uVar18 = uVar1;
              if (((long)uVar23 < (long)uVar9) &&
                 (*(float *)((long)puVar21 + 0xc) < *(float *)((long)puVar21 + 4))) {
                puVar21 = puVar21 + 1;
                uVar18 = uVar23;
              }
              puVar22 = puVar20;
            } while (*(float *)((long)puVar21 + 4) <= fVar26);
            *(undefined4 *)puVar20 = uVar8;
            *(float *)((long)puVar20 + 4) = fVar26;
          }
        }
        bVar2 = uVar16 != 0;
        uVar16 = uVar16 - 1;
      } while (bVar2);
      do {
        uVar11 = *(undefined8 *)*pauVar24;
        pauVar6 = pauVar24;
        uVar16 = 0;
        do {
          uVar23 = uVar16 << 1 | 1;
          uVar12 = uVar16 * 2 + 2;
          pauVar13 = (undefined1 (*) [16])(*pauVar6 + uVar16 * 8 + 8);
          if (((long)uVar12 < (long)uVar9) &&
             (*(float *)(pauVar6[1] + uVar16 * 8 + 4) < *(float *)(*pauVar6 + uVar16 * 8 + 0xc))) {
            pauVar13 = (undefined1 (*) [16])(pauVar6[1] + uVar16 * 8);
            uVar23 = uVar12;
          }
          *(undefined8 *)*pauVar6 = *(undefined8 *)*pauVar13;
          pauVar6 = pauVar13;
          uVar16 = uVar23;
        } while ((long)uVar23 <= (long)(uVar9 - 2 >> 1));
        param_2 = (undefined1 (*) [16])(param_2[-1] + 8);
        if (pauVar13 == param_2) {
          *(undefined8 *)*pauVar13 = uVar11;
        }
        else {
          *(undefined8 *)*pauVar13 = *(undefined8 *)*param_2;
          *(undefined8 *)*param_2 = uVar11;
          lVar15 = (long)((long)pauVar13 + (8 - (long)pauVar24)) >> 3;
          if (1 < lVar15) {
            uVar16 = lVar15 - 2U >> 1;
            fVar26 = *(float *)(*pauVar13 + 4);
            if (fVar26 < *(float *)(*(undefined1 (*) [16])(*pauVar24 + uVar16 * 8) + 4)) {
              uVar8 = *(undefined4 *)*pauVar13;
              pauVar6 = (undefined1 (*) [16])(*pauVar24 + uVar16 * 8);
              do {
                pauVar7 = pauVar6;
                *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar7;
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1 >> 1;
                pauVar13 = pauVar7;
                pauVar6 = (undefined1 (*) [16])(*pauVar24 + uVar16 * 8);
              } while (fVar26 < *(float *)(*(undefined1 (*) [16])(*pauVar24 + uVar16 * 8) + 4));
              *(undefined4 *)*pauVar7 = uVar8;
              *(float *)(*pauVar7 + 4) = fVar26;
            }
          }
        }
        bVar2 = (long)uVar9 < 3;
        uVar9 = uVar9 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    puVar21 = (undefined8 *)(*pauVar24 + (uVar9 >> 1) * 8);
    fVar26 = *(float *)(param_2[-1] + 0xc);
    if (uVar9 < 0x81) {
      fVar28 = *(float *)(*pauVar24 + 4);
      if (fVar28 <= *(float *)((long)puVar21 + 4)) {
        if (fVar28 < fVar26) {
          uVar11 = *(undefined8 *)*pauVar24;
          *(undefined8 *)*pauVar24 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar11;
          if (*(float *)((long)puVar21 + 4) < *(float *)(*pauVar24 + 4)) {
            uVar11 = *puVar21;
            *puVar21 = *(undefined8 *)*pauVar24;
            *(undefined8 *)*pauVar24 = uVar11;
          }
        }
      }
      else {
        uVar11 = *puVar21;
        if (fVar26 <= fVar28) {
          *puVar21 = *(undefined8 *)*pauVar24;
          *(undefined8 *)*pauVar24 = uVar11;
          if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar11 >> 0x20)) goto LAB_10a0d1dd0;
          *(undefined8 *)*pauVar24 = *(undefined8 *)(param_2[-1] + 8);
        }
        else {
          *puVar21 = *(undefined8 *)(param_2[-1] + 8);
        }
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
      }
    }
    else {
      fVar28 = *(float *)((long)puVar21 + 4);
      if (fVar28 <= *(float *)(*pauVar24 + 4)) {
        if (fVar28 < fVar26) {
          uVar11 = *puVar21;
          *puVar21 = *(undefined8 *)(param_2[-1] + 8);
          *(undefined8 *)(param_2[-1] + 8) = uVar11;
          if (*(float *)(*pauVar24 + 4) < *(float *)((long)puVar21 + 4)) {
            uVar11 = *(undefined8 *)*pauVar24;
            *(undefined8 *)*pauVar24 = *puVar21;
            *puVar21 = uVar11;
          }
        }
      }
      else {
        uVar11 = *(undefined8 *)*pauVar24;
        if (fVar26 <= fVar28) {
          *(undefined8 *)*pauVar24 = *puVar21;
          *puVar21 = uVar11;
          if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar11 >> 0x20)) goto LAB_10a0d1be4;
          *puVar21 = *(undefined8 *)(param_2[-1] + 8);
        }
        else {
          *(undefined8 *)*pauVar24 = *(undefined8 *)(param_2[-1] + 8);
        }
        *(undefined8 *)(param_2[-1] + 8) = uVar11;
      }
LAB_10a0d1be4:
      fVar26 = *(float *)((long)puVar21 + -4);
      if (fVar26 <= *(float *)(*pauVar24 + 0xc)) {
        if (fVar26 < *(float *)(param_2[-1] + 4)) {
          uVar11 = puVar21[-1];
          puVar21[-1] = *(undefined8 *)param_2[-1];
          *(undefined8 *)param_2[-1] = uVar11;
          if (*(float *)(*pauVar24 + 0xc) < *(float *)((long)puVar21 + -4)) {
            uVar11 = *(undefined8 *)(*pauVar24 + 8);
            *(undefined8 *)(*pauVar24 + 8) = puVar21[-1];
            puVar21[-1] = uVar11;
          }
        }
      }
      else {
        uVar11 = *(undefined8 *)(*pauVar24 + 8);
        if (*(float *)(param_2[-1] + 4) <= fVar26) {
          *(undefined8 *)(*pauVar24 + 8) = puVar21[-1];
          puVar21[-1] = uVar11;
          if (*(float *)(param_2[-1] + 4) <= (float)((ulong)uVar11 >> 0x20)) goto LAB_10a0d1ca8;
          puVar21[-1] = *(undefined8 *)param_2[-1];
        }
        else {
          *(undefined8 *)(*pauVar24 + 8) = *(undefined8 *)param_2[-1];
        }
        *(undefined8 *)param_2[-1] = uVar11;
      }
LAB_10a0d1ca8:
      fVar26 = *(float *)((long)puVar21 + 0xc);
      if (fVar26 <= *(float *)(pauVar24[1] + 4)) {
        if (fVar26 < *(float *)(param_2[-2] + 0xc)) {
          uVar11 = puVar21[1];
          puVar21[1] = *(undefined8 *)(param_2[-2] + 8);
          *(undefined8 *)(param_2[-2] + 8) = uVar11;
          if (*(float *)(pauVar24[1] + 4) < *(float *)((long)puVar21 + 0xc)) {
            uVar11 = *(undefined8 *)pauVar24[1];
            *(undefined8 *)pauVar24[1] = puVar21[1];
            puVar21[1] = uVar11;
          }
        }
      }
      else {
        uVar11 = *(undefined8 *)pauVar24[1];
        if (*(float *)(param_2[-2] + 0xc) <= fVar26) {
          *(undefined8 *)pauVar24[1] = puVar21[1];
          puVar21[1] = uVar11;
          if (*(float *)(param_2[-2] + 0xc) <= (float)((ulong)uVar11 >> 0x20)) goto LAB_10a0d1d3c;
          puVar21[1] = *(undefined8 *)(param_2[-2] + 8);
        }
        else {
          *(undefined8 *)pauVar24[1] = *(undefined8 *)(param_2[-2] + 8);
        }
        *(undefined8 *)(param_2[-2] + 8) = uVar11;
      }
LAB_10a0d1d3c:
      fVar28 = *(float *)((long)puVar21 + 4);
      fVar26 = *(float *)((long)puVar21 + 0xc);
      if (fVar28 <= *(float *)((long)puVar21 + -4)) {
        uVar10 = *puVar21;
        uVar11 = uVar10;
        if (fVar28 < fVar26) {
          uVar11 = puVar21[1];
          *puVar21 = uVar11;
          puVar21[1] = uVar10;
          if (*(float *)((long)puVar21 + -4) < (float)((ulong)uVar11 >> 0x20)) {
            uVar10 = puVar21[-1];
            puVar21[-1] = uVar11;
            *puVar21 = uVar10;
            uVar11 = uVar10;
          }
        }
      }
      else {
        uVar10 = puVar21[-1];
        if (fVar26 <= fVar28) {
          puVar21[-1] = *puVar21;
          *puVar21 = uVar10;
          uVar11 = uVar10;
          if ((float)((ulong)uVar10 >> 0x20) < fVar26) {
            uVar11 = puVar21[1];
            *puVar21 = uVar11;
            puVar21[1] = uVar10;
          }
        }
        else {
          puVar21[-1] = puVar21[1];
          puVar21[1] = uVar10;
          uVar11 = *puVar21;
        }
      }
      uVar10 = *(undefined8 *)*pauVar24;
      *(undefined8 *)*pauVar24 = uVar11;
      *puVar21 = uVar10;
    }
LAB_10a0d1dd0:
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      fVar26 = *(float *)(*pauVar24 + 4);
      uVar8 = *(undefined4 *)*pauVar24;
      if (*(float *)(pauVar24[-1] + 0xc) <= fVar26) {
        pauVar6 = (undefined1 (*) [16])(*pauVar24 + 8);
        if (fVar26 <= *(float *)(param_2[-1] + 0xc)) {
          do {
            param_1 = pauVar6;
            if (param_2 <= param_1) break;
            pauVar6 = (undefined1 (*) [16])(*param_1 + 8);
          } while (fVar26 <= *(float *)(*param_1 + 4));
        }
        else {
          do {
            param_1 = pauVar6;
            if (param_1 == param_2) goto LAB_10a0d244c;
            pauVar6 = (undefined1 (*) [16])(*param_1 + 8);
          } while (fVar26 <= *(float *)(*param_1 + 4));
        }
        pauVar6 = param_2;
        pauVar13 = param_2;
        if (param_1 < param_2) {
          do {
            if (pauVar13 == pauVar24) goto LAB_10a0d244c;
            pauVar6 = (undefined1 (*) [16])(pauVar13[-1] + 8);
            pauVar7 = pauVar13 + -1;
            pauVar13 = pauVar6;
          } while (*(float *)(*pauVar7 + 0xc) < fVar26);
        }
        while (param_1 < pauVar6) {
          uVar11 = *(undefined8 *)*param_1;
          *(undefined8 *)*param_1 = *(undefined8 *)*pauVar6;
          *(undefined8 *)*pauVar6 = uVar11;
          pauVar13 = param_1;
          do {
            param_1 = (undefined1 (*) [16])(*pauVar13 + 8);
            if (param_1 == param_2) goto LAB_10a0d244c;
            puVar3 = *pauVar13;
            pauVar7 = pauVar6;
            pauVar13 = param_1;
          } while (fVar26 <= *(float *)(puVar3 + 0xc));
          do {
            if (pauVar7 == pauVar24) goto LAB_10a0d244c;
            pauVar6 = (undefined1 (*) [16])(pauVar7[-1] + 8);
            pauVar13 = pauVar7 + -1;
            pauVar7 = pauVar6;
          } while (*(float *)(*pauVar13 + 0xc) < fVar26);
        }
        if ((undefined1 (*) [16])(param_1[-1] + 8) != pauVar24) {
          *(undefined8 *)*pauVar24 = *(undefined8 *)*(undefined1 (*) [16])(param_1[-1] + 8);
        }
        param_4 = 0;
        *(undefined4 *)(param_1[-1] + 8) = uVar8;
        *(float *)(param_1[-1] + 0xc) = fVar26;
        goto LAB_10a0d1a94;
      }
    }
    else {
      uVar8 = *(undefined4 *)*pauVar24;
      fVar26 = *(float *)(*pauVar24 + 4);
    }
    lVar15 = 0;
    do {
      if ((undefined1 (*) [16])(*pauVar24 + lVar15 + 8) == param_2) goto LAB_10a0d244c;
      lVar19 = lVar15 + 0xc;
      lVar15 = lVar15 + 8;
    } while (fVar26 < *(float *)(*pauVar24 + lVar19));
    pauVar6 = (undefined1 (*) [16])(*pauVar24 + lVar15);
    pauVar13 = param_2;
    if (lVar15 == 8) {
      do {
        pauVar7 = pauVar13;
        if (pauVar13 <= pauVar6) break;
        pauVar7 = (undefined1 (*) [16])(pauVar13[-1] + 8);
        pauVar25 = pauVar13 + -1;
        pauVar13 = pauVar7;
      } while (*(float *)(*pauVar25 + 0xc) <= fVar26);
    }
    else {
      do {
        if (pauVar13 == pauVar24) {
LAB_10a0d244c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a0d2450);
          (*pcVar5)();
        }
        pauVar7 = (undefined1 (*) [16])(pauVar13[-1] + 8);
        pauVar25 = pauVar13 + -1;
        pauVar13 = pauVar7;
      } while (*(float *)(*pauVar25 + 0xc) <= fVar26);
    }
    pauVar13 = pauVar7;
    param_1 = pauVar6;
    pauVar25 = pauVar6;
    if (pauVar6 < pauVar7) {
      do {
        uVar11 = *(undefined8 *)*pauVar25;
        *(undefined8 *)*pauVar25 = *(undefined8 *)*pauVar13;
        *(undefined8 *)*pauVar13 = uVar11;
        do {
          param_1 = (undefined1 (*) [16])(*pauVar25 + 8);
          if (param_1 == param_2) goto LAB_10a0d244c;
          puVar3 = *pauVar25;
          pauVar25 = param_1;
        } while (fVar26 < *(float *)(puVar3 + 0xc));
        do {
          if (pauVar13 == pauVar24) goto LAB_10a0d244c;
          pauVar17 = (undefined1 (*) [16])(pauVar13[-1] + 8);
          pauVar4 = pauVar13 + -1;
          pauVar13 = pauVar17;
        } while (*(float *)(*pauVar4 + 0xc) <= fVar26);
      } while (param_1 < pauVar17);
    }
    pauVar13 = (undefined1 (*) [16])(param_1[-1] + 8);
    if (pauVar13 != pauVar24) {
      *(undefined8 *)*pauVar24 = *(undefined8 *)*pauVar13;
    }
    *(undefined4 *)(param_1[-1] + 8) = uVar8;
    *(float *)(param_1[-1] + 0xc) = fVar26;
    if (pauVar6 < pauVar7) {
LAB_10a0d1f20:
      FUN_10a0d1a68(pauVar24,pauVar13,param_3,param_4 & 1);
      param_4 = 0;
    }
    else {
      pauVar6 = pauVar24;
      FUN_10a0d2664(pauVar24,pauVar13);
      pauVar7 = param_1;
      FUN_10a0d2664(param_1,param_2);
      if ((int)pauVar7 == 0) {
        if (((ulong)pauVar6 & 1) == 0) goto LAB_10a0d1f20;
      }
      else {
        param_1 = pauVar24;
        param_2 = pauVar13;
        if (((ulong)pauVar6 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10a0d24d8; end: 10a0d2663;  */

void FUN_10a0d24d8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)((long)param_2 + 4);
  fVar2 = *(float *)((long)param_3 + 4);
  if (fVar3 <= *(float *)((long)param_1 + 4)) {
    if (fVar2 <= fVar3) goto LAB_10a0d2584;
    uVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar1;
    if (*(float *)((long)param_1 + 4) < *(float *)((long)param_2 + 4)) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar1;
      fVar2 = *(float *)((long)param_3 + 4);
      goto LAB_10a0d2584;
    }
  }
  else {
    uVar1 = *param_1;
    if (fVar2 <= fVar3) {
      *param_1 = *param_2;
      *param_2 = uVar1;
      fVar3 = (float)((ulong)uVar1 >> 0x20);
      fVar2 = *(float *)((long)param_3 + 4);
      if (fVar3 < *(float *)((long)param_3 + 4)) {
        *param_2 = *param_3;
        *param_3 = uVar1;
        fVar2 = fVar3;
      }
      goto LAB_10a0d2584;
    }
    *param_1 = *param_3;
    *param_3 = uVar1;
  }
  fVar2 = (float)((ulong)uVar1 >> 0x20);
LAB_10a0d2584:
  if (fVar2 < *(float *)((long)param_4 + 4)) {
    uVar1 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar1;
    if (*(float *)((long)param_2 + 4) < *(float *)((long)param_3 + 4)) {
      uVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar1;
      if (*(float *)((long)param_1 + 4) < *(float *)((long)param_2 + 4)) {
        uVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  if (*(float *)((long)param_4 + 4) < *(float *)((long)param_5 + 4)) {
    uVar1 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar1;
    if (*(float *)((long)param_3 + 4) < *(float *)((long)param_4 + 4)) {
      uVar1 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar1;
      if (*(float *)((long)param_2 + 4) < *(float *)((long)param_3 + 4)) {
        uVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar1;
        if (*(float *)((long)param_1 + 4) < *(float *)((long)param_2 + 4)) {
          uVar1 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 10a0d2664; end: 10a0d295f;  */

bool FUN_10a0d2664(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined1 (*pauVar11) [16];
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  
  uVar4 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 == 2) {
      if (*(float *)(param_2[-1] + 0xc) <= *(float *)(*param_1 + 4)) {
        return true;
      }
      uVar5 = *(undefined8 *)*param_1;
LAB_10a0d26f0:
      *(undefined8 *)*param_1 = *(undefined8 *)(param_2[-1] + 8);
LAB_10a0d26f8:
      *(undefined8 *)(param_2[-1] + 8) = uVar5;
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      fVar12 = *(float *)(*param_1 + 0xc);
      if (fVar12 <= *(float *)(*param_1 + 4)) {
        if (*(float *)(param_2[-1] + 0xc) <= fVar12) {
          return true;
        }
        uVar5 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
        *(undefined8 *)(param_2[-1] + 8) = uVar5;
        if (*(float *)(*param_1 + 0xc) <= *(float *)(*param_1 + 4)) {
          return true;
        }
        auVar13 = NEON_ext(*param_1,*param_1,8,1);
        *(long *)(*param_1 + 8) = auVar13._8_8_;
        *(long *)*param_1 = auVar13._0_8_;
        return true;
      }
      uVar5 = *(undefined8 *)*param_1;
      if (*(float *)(param_2[-1] + 0xc) <= fVar12) {
        *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
        *(undefined8 *)(*param_1 + 8) = uVar5;
        if (*(float *)(param_2[-1] + 0xc) <= (float)((ulong)uVar5 >> 0x20)) {
          return true;
        }
        *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_2[-1] + 8);
        goto LAB_10a0d26f8;
      }
      goto LAB_10a0d26f0;
    }
    if (uVar4 == 4) {
      fVar15 = *(float *)(*param_1 + 0xc);
      fVar14 = *(float *)(*param_1 + 4);
      fVar12 = *(float *)(param_1[1] + 4);
      if (fVar15 <= fVar14) {
        if (fVar15 < fVar12) {
          uVar5 = *(undefined8 *)(*param_1 + 8);
          uVar1 = *(undefined8 *)param_1[1];
          *(undefined8 *)(*param_1 + 8) = uVar1;
          *(undefined8 *)param_1[1] = uVar5;
          fVar12 = (float)((ulong)uVar5 >> 0x20);
          if (fVar14 < (float)((ulong)uVar1 >> 0x20)) {
            uVar5 = *(undefined8 *)*param_1;
            *(undefined8 *)*param_1 = uVar1;
            *(undefined8 *)(*param_1 + 8) = uVar5;
          }
        }
      }
      else {
        uVar5 = *(undefined8 *)*param_1;
        fVar14 = (float)((ulong)uVar5 >> 0x20);
        if (fVar12 <= fVar15) {
          *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
          *(undefined8 *)(*param_1 + 8) = uVar5;
          if (fVar12 <= fVar14) goto LAB_10a0d28f4;
          *(undefined8 *)(*param_1 + 8) = *(undefined8 *)param_1[1];
        }
        else {
          *(undefined8 *)*param_1 = *(undefined8 *)param_1[1];
        }
        *(undefined8 *)param_1[1] = uVar5;
        fVar12 = fVar14;
      }
LAB_10a0d28f4:
      if (*(float *)(param_2[-1] + 0xc) <= fVar12) {
        return true;
      }
      uVar5 = *(undefined8 *)param_1[1];
      *(undefined8 *)param_1[1] = *(undefined8 *)(param_2[-1] + 8);
      *(undefined8 *)(param_2[-1] + 8) = uVar5;
      if (*(float *)(param_1[1] + 4) <= *(float *)(*param_1 + 0xc)) {
        return true;
      }
      uVar5 = *(undefined8 *)(*param_1 + 8);
      uVar1 = *(undefined8 *)param_1[1];
      *(undefined8 *)(*param_1 + 8) = uVar1;
      *(undefined8 *)param_1[1] = uVar5;
      if ((float)((ulong)uVar1 >> 0x20) <= *(float *)(*param_1 + 4)) {
        return true;
      }
      uVar5 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = uVar1;
      *(undefined8 *)(*param_1 + 8) = uVar5;
      return true;
    }
    if (uVar4 == 5) {
      FUN_10a0d24d8(param_1,*param_1 + 8,param_1 + 1,param_1[1] + 8,param_2[-1] + 8);
      return true;
    }
  }
  fVar15 = *(float *)(*param_1 + 0xc);
  fVar14 = *(float *)(*param_1 + 4);
  fVar12 = *(float *)(param_1[1] + 4);
  if (fVar15 <= fVar14) {
    if (fVar15 < fVar12) {
      uVar5 = *(undefined8 *)(*param_1 + 8);
      uVar1 = *(undefined8 *)param_1[1];
      *(undefined8 *)(*param_1 + 8) = uVar1;
      *(undefined8 *)param_1[1] = uVar5;
      if (fVar14 < (float)((ulong)uVar1 >> 0x20)) {
        uVar5 = *(undefined8 *)*param_1;
        *(undefined8 *)*param_1 = uVar1;
        *(undefined8 *)(*param_1 + 8) = uVar5;
      }
    }
  }
  else {
    uVar5 = *(undefined8 *)*param_1;
    if (fVar12 <= fVar15) {
      *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = uVar5;
      if (fVar12 <= (float)((ulong)uVar5 >> 0x20)) goto LAB_10a0d2844;
      *(undefined8 *)(*param_1 + 8) = *(undefined8 *)param_1[1];
    }
    else {
      *(undefined8 *)*param_1 = *(undefined8 *)param_1[1];
    }
    *(undefined8 *)param_1[1] = uVar5;
  }
LAB_10a0d2844:
  if ((undefined1 (*) [16])(param_1[1] + 8) != param_2) {
    lVar7 = 0;
    iVar8 = 0;
    pauVar11 = (undefined1 (*) [16])(param_1[1] + 8);
    pauVar9 = param_1 + 1;
    do {
      pauVar6 = pauVar11;
      fVar12 = *(float *)(*pauVar6 + 4);
      if (*(float *)(*pauVar9 + 4) < fVar12) {
        uVar2 = *(undefined4 *)*pauVar6;
        lVar3 = lVar7;
        do {
          lVar10 = lVar3;
          *(undefined8 *)(param_1[1] + lVar10 + 8) = *(undefined8 *)(param_1[1] + lVar10);
          pauVar11 = param_1;
          if (lVar10 == -0x10) goto LAB_10a0d28a8;
          lVar3 = lVar10 + -8;
        } while (*(float *)(*param_1 + lVar10 + 0xc) < fVar12);
        pauVar11 = (undefined1 (*) [16])(param_1[1] + lVar10);
LAB_10a0d28a8:
        *(undefined4 *)*pauVar11 = uVar2;
        *(float *)(*pauVar11 + 4) = fVar12;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return (undefined1 (*) [16])(*pauVar6 + 8) == param_2;
        }
      }
      lVar7 = lVar7 + 8;
      pauVar11 = (undefined1 (*) [16])(*pauVar6 + 8);
      pauVar9 = pauVar6;
    } while ((undefined1 (*) [16])(*pauVar6 + 8) != param_2);
  }
  return true;
}



/* Entry: 10a0d2960; end: 10a0d29eb;  */

long **** FUN_10a0d2960(long ****param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long ***ppplVar9;
  ulong uVar10;
  long ****pppplVar11;
  long ***ppplVar12;
  long ***ppplStack_58;
  long **pplStack_50;
  long **pplStack_48;
  long ***ppplStack_40;
  long ***ppplStack_38;
  
  pppplVar5 = (long ****)param_1[1];
  lVar6 = (long)pppplVar5 - (long)*param_1 >> 3;
  bVar3 = param_2 < (ulong)(lVar6 * -0x71c71c71c71c71c7);
  uVar2 = param_2 + lVar6 * 0x71c71c71c71c71c7;
  if (bVar3 || uVar2 == 0) {
    pppplVar4 = param_1;
    if (bVar3) {
      pppplVar11 = (long ****)(*param_1 + param_2 * 9);
      while (pppplVar5 != pppplVar11) {
        pppplVar5 = pppplVar5 + -9;
        pppplVar4 = pppplVar5;
        func_0x00010a0d3694(pppplVar5);
      }
      param_1[1] = (long ***)pppplVar11;
    }
    return pppplVar4;
  }
  pppplVar5 = (long ****)param_1[1];
  if ((ulong)(((long)param_1[2] - (long)pppplVar5 >> 3) * -0x71c71c71c71c71c7) < uVar2) {
    lVar6 = (long)pppplVar5 - (long)*param_1;
    uVar10 = uVar2 + (lVar6 >> 3) * -0x71c71c71c71c71c7;
    if (0x38e38e38e38e38e < uVar10) {
      FUN_10a0d35b4();
      func_0x00010a0d36d0(&ppplStack_58);
      __Unwind_Resume();
      param_1[8] = (long ***)0x0;
      param_1[5] = (long ***)0x0;
      param_1[4] = (long ***)0x0;
      param_1[7] = (long ***)0x0;
      param_1[6] = (long ***)0x0;
      param_1[1] = (long ***)0x0;
      *param_1 = (long ***)0x0;
      param_1[3] = (long ***)0x0;
      param_1[2] = (long ***)0x0;
      pppplVar5 = param_1;
      FUN_10a0d3454();
      ppplVar9 = pppplVar5[1];
      ppplVar12 = *pppplVar5;
      param_1[8] = pppplVar5[1];
      param_1[7] = ppplVar12;
      if (ppplVar9 != (long ***)0x0) {
        ppplVar9 = ppplVar9 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppplVar9,0x10);
          if (bVar3) {
            *ppplVar9 = (long **)((long)*ppplVar9 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      return param_1;
    }
    lVar7 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar8 = lVar7 * 0x1c71c71c71c71c72;
    if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
      uVar8 = uVar10;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar7 * -0x71c71c71c71c71c7)) {
      uVar8 = 0x38e38e38e38e38e;
    }
    ppplStack_38 = (long ***)param_1;
    if (uVar8 == 0) {
      pppplVar5 = (long ****)0x0;
    }
    else {
      pppplVar5 = param_1;
      FUN_10a0d35c8();
    }
    lVar6 = (long)pppplVar5 + lVar6;
    ppplStack_40 = (long ***)(pppplVar5 + uVar8 * 9);
    ppplVar9 = (long ***)(lVar6 + uVar2 * 0x48);
    lVar7 = uVar2 * 0x48;
    ppplStack_58 = (long ***)pppplVar5;
    pplStack_50 = (long **)lVar6;
    pplStack_48 = (long **)lVar6;
    do {
      FUN_10a0d33e0(lVar6);
      lVar6 = lVar6 + 0x48;
      lVar7 = lVar7 + -0x48;
    } while (lVar7 != 0);
    ppplVar12 = (long ***)((long)*param_1 + ((long)pplStack_50 - (long)param_1[1]));
    pplStack_48 = (long **)ppplVar9;
    func_0x00010a0d3610(param_1,*param_1,param_1[1],ppplVar12);
    ppplStack_58 = *param_1;
    *param_1 = ppplVar12;
    ppplVar9 = param_1[2];
    param_1[2] = ppplStack_40;
    param_1[1] = (long ***)pplStack_48;
    pppplVar4 = &ppplStack_58;
    pplStack_50 = (long **)ppplStack_58;
    pplStack_48 = (long **)ppplStack_58;
    ppplStack_40 = ppplVar9;
    func_0x00010a0d36d0(pppplVar4);
  }
  else {
    pppplVar4 = param_1;
    pppplVar11 = pppplVar5;
    if (uVar2 != 0) {
      pppplVar11 = pppplVar5 + uVar2 * 9;
      lVar6 = uVar2 * 0x48;
      do {
        pppplVar4 = pppplVar5;
        FUN_10a0d33e0(pppplVar5);
        pppplVar5 = pppplVar5 + 9;
        lVar6 = lVar6 + -0x48;
      } while (lVar6 != 0);
    }
    param_1[1] = (long ***)pppplVar11;
  }
  return pppplVar4;
}



/* Entry: 10a0d29ec; end: 10a0d3193;  */

/* WARNING: Removing unreachable block (ram,0x00010a0d3080) */

void FUN_10a0d29ec(ulong *param_1,long *param_2,undefined8 param_3,uint *param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong *puVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long *plStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  undefined8 ******ppppppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined8 auStack_b0 [2];
  char cStack_99;
  ulong auStack_98 [2];
  char cStack_81;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  puVar12 = param_4;
  FUN_10a0e3118(param_4,param_3);
  if (param_4 + 2 == puVar12) goto LAB_10a0d2d98;
  FUN_10a0d0c2c(param_4,param_3);
  uVar18 = *param_4;
  if ((int)uVar18 < 0) goto LAB_10a0d2d98;
  lVar23 = *(long *)(*param_2 + 0x30);
  uVar20 = (*(long *)(*param_2 + 0x38) - lVar23 >> 4) * -0x30c30c30c30c30c3;
  if ((int)uVar20 <= (int)uVar18) goto LAB_10a0d2d98;
  if (uVar20 < uVar18 || uVar20 - uVar18 == 0) goto LAB_10a0d2fb4;
  lVar23 = lVar23 + (ulong)uVar18 * 0x150;
  lVar13 = param_2[1];
  if (*(char *)(lVar13 + 0x17) < '\0') {
    if (*(long *)(lVar13 + 8) == 0) goto LAB_10a0d2aa4;
  }
  else if (*(char *)(lVar13 + 0x17) == '\0') {
LAB_10a0d2aa4:
    lVar14 = (long)*(char *)(lVar23 + 0x1f);
    if (lVar14 < 0) {
      lVar14 = *(long *)(lVar23 + 0x10);
    }
    if (lVar14 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar13,lVar23 + 8);
    }
  }
  uVar20 = (ulong)*(uint *)(lVar23 + 0x2c);
  uVar17 = (ulong)*(uint *)(lVar23 + 0x38);
  FUN_10a0d0840();
  if (*(char *)(lVar23 + 0x134) != '\x01') {
    if (*(long *)(lVar23 + 0x30) == *(long *)(param_2[2] + 8)) {
      FUN_10a0c7dfc(param_1,*param_2 + 0x30,lVar23);
      if ((int)uVar20 == 0) {
        return;
      }
      if ((int)uVar20 == 5 && uVar17 == param_5) {
        return;
      }
      FUN_10a0d0678(&uStack_80,param_1,uVar20,uVar17,5,param_5,0);
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        __ZdlPv();
      }
      param_1[1] = uStack_78;
      *param_1 = uStack_80;
      param_1[2] = uStack_70;
      return;
    }
    __ZNSt3__19to_stringEm(auStack_c8);
    FUN_109feb280(auStack_b0,&UNK_10f63905c,auStack_c8);
    FUN_10a012db0(auStack_98,auStack_b0,&UNK_10f638d16);
    __ZNSt3__19to_stringEm(&ppppppuStack_e0,*(undefined8 *)(param_2[2] + 8));
    if (-1 < (char)bStack_c9) {
      uStack_d8 = (ulong)bStack_c9;
      ppppppuStack_e0 = &ppppppuStack_e0;
    }
    puVar16 = auStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,ppppppuStack_e0,uStack_d8);
    uStack_78 = puVar16[1];
    uStack_80 = *puVar16;
    uStack_70 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    FUN_10a0edf4c(&uStack_80);
    goto LAB_10a0d2fb4;
  }
  lVar14 = *(long *)param_2[2];
  FUN_10a0e3118(lVar14,param_3);
  lVar13 = lRam00000001137e9568;
  if (*(long *)param_2[2] + 8 == lVar14) {
LAB_10a0d2d98:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  uVar18 = *(uint *)(lVar14 + 0x38);
  if ((int)uVar18 < 0) goto LAB_10a0d2d98;
  lVar14 = *param_2;
  uVar20 = (*(long *)(lVar14 + 0x38) - *(long *)(lVar14 + 0x30) >> 4) * -0x30c30c30c30c30c3;
  if ((int)uVar20 <= (int)uVar18) goto LAB_10a0d2d98;
  if (uVar20 < uVar18 || uVar20 - uVar18 == 0) goto LAB_10a0d2fb4;
  if (*(long *)(lVar23 + 0x30) != 0) {
    puStack_e8 = (ulong *)(*(long *)(lVar14 + 0x30) + (ulong)uVar18 * 0x150 + 0x30);
    uVar20 = *puStack_e8;
    if (uVar20 != 0) {
      uVar18 = *(uint *)(lVar23 + 0x130);
      uVar17 = CONCAT44(0,uVar18);
      if ((((int)uVar18 < 0) || (uVar1 = *(uint *)(lVar23 + 0x138), (int)uVar1 < 0)) ||
         (uVar2 = *(uint *)(lVar23 + 0x148), (int)uVar2 < 0)) {
        lVar23 = 0x10;
        ___cxa_allocate_exception();
        __ZNSt13runtime_errorC1EPKc();
LAB_10a0d305c:
        lVar13 = lVar23;
        plVar26 = (long *)PTR___ZTISt13runtime_error_110346a40;
        ___cxa_throw(lVar23,PTR___ZTISt13runtime_error_110346a40,
                     PTR___ZNSt13runtime_errorD1Ev_1103461d8);
        if ((char)bStack_c9 < '\0') {
          __ZdlPv(ppppppuStack_e0);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(auStack_98[0]);
        }
        if (cStack_99 < '\0') {
          __ZdlPv(auStack_b0[0]);
        }
        if (cStack_b1 < '\0') {
          __ZdlPv(auStack_c8[0]);
        }
        lVar14 = lVar13;
        __Unwind_Resume(lVar13);
        pcStack_118 = FUN_10a0d3194;
        plVar28 = (long *)0x30;
        lStack_130 = lVar13;
        lStack_128 = lVar23;
        puStack_120 = &stack0xfffffffffffffff0;
        __Znwm();
        plVar28[2] = 0;
        *plVar28 = (long)&PTR_DAT_110ba1e98;
        plVar28[1] = 0;
        lVar13 = plVar26[1];
        lVar23 = *plVar26;
        plVar28[5] = plVar26[2];
        plStack_140 = plVar28 + 3;
        plVar28[4] = lVar13;
        *plStack_140 = lVar23;
        *plVar26 = 0;
        plVar26[1] = 0;
        plVar26[2] = 0;
        plStack_138 = plVar28;
        FUN_10a0d3730(lVar14 + 0x38,&plStack_140);
        plVar26 = plStack_138;
        if (plStack_138 != (long *)0x0) {
          plVar28 = plStack_138 + 1;
          do {
            lVar23 = *plVar28;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar6) {
              *plVar28 = lVar23 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar23 == 0) {
            (**(code **)(*plStack_138 + 0x10))(plStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
          }
        }
        return;
      }
      iVar3 = *(int *)(lVar23 + 0x13c);
      lVar25 = *(long *)(lVar14 + 0x78);
      uVar21 = (*(long *)(lVar14 + 0x80) - lVar25 >> 3) * 0xf83e0f83e0f83e1;
      if (uVar21 < (ulong)(long)iVar3 || uVar21 - (long)iVar3 == 0) goto LAB_10a0d2fb4;
      lVar29 = lVar25 + (long)iVar3 * 0x108;
      iVar3 = *(int *)(lVar29 + 0x18);
      lVar27 = *(long *)(lVar14 + 0x60);
      uVar19 = (*(long *)(lVar14 + 0x68) - lVar27 >> 3) * 0xf83e0f83e0f83e1;
      if ((uVar19 < (ulong)(long)iVar3 || uVar19 - (long)iVar3 == 0) ||
         (iVar4 = *(int *)(lVar23 + 0x144), uVar21 < (ulong)(long)iVar4 || uVar21 - (long)iVar4 == 0
         )) goto LAB_10a0d2fb4;
      lVar25 = lVar25 + (long)iVar4 * 0x108;
      iVar4 = *(int *)(lVar25 + 0x18);
      uStack_f8 = (ulong)uVar2;
      uStack_f0 = (ulong)uVar1;
      if (uVar19 < (ulong)(long)iVar4 || uVar19 - (long)iVar4 == 0) goto LAB_10a0d2fb4;
      lVar14 = lRam00000001137e9568;
      func_0x000107c2b0ac(lRam00000001137e9568,*(undefined4 *)(lVar23 + 0x2c));
      if (lVar14 != 0) {
        lStack_100 = *(long *)(lVar14 + 0x18);
        uStack_108 = uVar20;
        func_0x000107c2b0ac(lVar13,*(undefined4 *)(lVar23 + 0x140));
        if (lVar13 != 0) {
          uVar20 = *(ulong *)(lVar13 + 0x18);
          lVar13 = lRam00000001137e9560;
          func_0x000107c2b0ac(lRam00000001137e9560,*(undefined4 *)(lVar23 + 0x38));
          if (lVar13 != 0) {
            uVar21 = *(ulong *)(lVar29 + 0x20);
            lVar14 = lVar27 + (long)iVar3 * 0x108;
            plVar26 = (long *)(lVar14 + 0x18);
            uVar19 = *(long *)(lVar14 + 0x20) - *plVar26;
            if (uVar19 < uVar21 || uVar19 - uVar21 < uStack_f0) {
              lVar23 = 0x10;
              ___cxa_allocate_exception();
              __ZNSt13runtime_errorC1EPKc();
            }
            else if ((uVar20 == 0) ||
                    (auVar7._8_8_ = 0, auVar7._0_8_ = uVar20, auVar9._8_8_ = 0,
                    auVar9._0_8_ = uVar17, SUB168(auVar7 * auVar9,8) == 0)) {
              lVar14 = uVar21 + uStack_f0;
              if (uVar20 * uVar17 < uVar19 - lVar14 || uVar20 * uVar17 - (uVar19 - lVar14) == 0) {
                uVar21 = *(ulong *)(lVar25 + 0x20);
                lVar27 = lVar27 + (long)iVar4 * 0x108;
                plVar28 = (long *)(lVar27 + 0x18);
                uVar19 = *(long *)(lVar27 + 0x20) - *plVar28;
                if ((uVar19 < uVar21) || (uVar19 - uVar21 < uStack_f8)) {
                  lVar23 = 0x10;
                  ___cxa_allocate_exception();
                  __ZNSt13runtime_errorC1EPKc();
                }
                else {
                  uVar24 = *(long *)(lVar13 + 0x18) * lStack_100;
                  if ((uVar24 == 0) ||
                     (auVar8._8_8_ = 0, auVar8._0_8_ = uVar24, auVar10._8_8_ = 0,
                     auVar10._0_8_ = uVar17, SUB168(auVar8 * auVar10,8) == 0)) {
                    lVar13 = uVar21 + uStack_f8;
                    if (uVar24 * uVar17 < uVar19 - lVar13 ||
                        uVar24 * uVar17 - (uVar19 - lVar13) == 0) {
                      *param_1 = 0;
                      param_1[1] = 0;
                      param_1[2] = 0;
                      uStack_80 = uStack_80 & 0xffffffffffffff00;
                      if ((uVar24 * uStack_108 == 0) ||
                         (func_0x000105343774(param_1,uVar24 * uStack_108,&uStack_80),
                         *param_1 == param_1[1])) {
                        uVar15 = 0x10;
                        ___cxa_allocate_exception(0x10);
                        __ZNSt13runtime_errorC1EPKc();
                        ___cxa_throw(uVar15,PTR___ZTISt13runtime_error_110346a40,
                                     PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                      }
                      else {
                        if (uVar18 == 0) {
                          return;
                        }
                        while (uVar18 = *(int *)(lVar23 + 0x140) - 0x1400, 5 < uVar18) {
                          uVar18 = 0;
LAB_10a0d2d44:
                          if (*puStack_e8 <= (ulong)(long)(int)uVar18) goto LAB_10a0d2e44;
                          uVar19 = uVar24 * (long)(int)uVar18;
                          uVar22 = param_1[1] - *param_1;
                          uVar21 = uVar22 - uVar19;
                          if (uVar22 < uVar19 || uVar21 <= uVar24 && uVar24 - uVar21 != 0)
                          goto LAB_10a0d2e44;
                          _memcpy(*param_1 + uVar19,*plVar28 + lVar13,uVar24);
                          lVar13 = lVar13 + uVar24;
                          lVar14 = lVar14 + uVar20;
                          uVar17 = uVar17 - 1;
                          if (uVar17 == 0) {
                            return;
                          }
                        }
                        uVar18 = 1 << (ulong)(uVar18 & 0x1f);
                        if ((uVar18 & 3) != 0) {
                          uVar18 = (uint)*(byte *)(*plVar26 + lVar14);
                          goto LAB_10a0d2d44;
                        }
                        if ((uVar18 & 0xc) != 0) {
                          uVar18 = (uint)*(ushort *)(*plVar26 + lVar14);
                          goto LAB_10a0d2d44;
                        }
                        uVar18 = *(uint *)(*plVar26 + lVar14);
                        if (-1 < (int)uVar18) goto LAB_10a0d2d44;
LAB_10a0d2e44:
                        uVar15 = 0x10;
                        ___cxa_allocate_exception(0x10);
                        __ZNSt13runtime_errorC1EPKc();
                        ___cxa_throw(uVar15,PTR___ZTISt13runtime_error_110346a40,
                                     PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                      }
                      goto LAB_10a0d2fb4;
                    }
                    lVar23 = 0x10;
                    ___cxa_allocate_exception();
                    __ZNSt13runtime_errorC1EPKc();
                  }
                  else {
                    lVar23 = 0x10;
                    ___cxa_allocate_exception();
                    __ZNSt13runtime_errorC1EPKc();
                  }
                }
              }
              else {
                lVar23 = 0x10;
                ___cxa_allocate_exception();
                __ZNSt13runtime_errorC1EPKc();
              }
            }
            else {
              lVar23 = 0x10;
              ___cxa_allocate_exception();
              __ZNSt13runtime_errorC1EPKc();
            }
            goto LAB_10a0d305c;
          }
        }
      }
      FUN_109ffdddc(&UNK_10f639994);
    }
  }
  uVar15 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt3__19to_stringEm(auStack_98,*(undefined8 *)(lVar23 + 0x30));
  FUN_109feb280(&uStack_80,&UNK_10f637b8a,auStack_98);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (uVar15,&uStack_80);
  ___cxa_throw(uVar15,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
LAB_10a0d2fb4:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10a0d2fb8);
  (*pcVar11)();
}



/* Entry: 10a0d3194; end: 10a0d323b;  */

void FUN_10a0d3194(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plStack_30;
  long *plStack_28;
  
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_DAT_110ba1e98;
  plVar4[1] = 0;
  lVar6 = param_2[1];
  lVar5 = *param_2;
  plVar4[5] = param_2[2];
  plStack_30 = plVar4 + 3;
  plVar4[4] = lVar6;
  *plStack_30 = lVar5;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plStack_28 = plVar4;
  FUN_10a0d3730(param_1 + 0x38,&plStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a0d323c; end: 10a0d33df;  */

long **** FUN_10a0d323c(long ****param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long lVar5;
  ulong uVar6;
  long ***ppplVar7;
  ulong uVar8;
  long lVar9;
  long ****pppplVar10;
  long ***ppplVar11;
  long ***ppplStack_58;
  long **pplStack_50;
  long **pplStack_48;
  long ***ppplStack_40;
  long ***ppplStack_38;
  
  pppplVar4 = (long ****)param_1[1];
  if ((ulong)(((long)param_1[2] - (long)pppplVar4 >> 3) * -0x71c71c71c71c71c7) < param_2) {
    lVar9 = (long)pppplVar4 - (long)*param_1;
    uVar8 = param_2 + (lVar9 >> 3) * -0x71c71c71c71c71c7;
    if (0x38e38e38e38e38e < uVar8) {
      FUN_10a0d35b4();
      func_0x00010a0d36d0(&ppplStack_58);
      __Unwind_Resume();
      param_1[8] = (long ***)0x0;
      param_1[5] = (long ***)0x0;
      param_1[4] = (long ***)0x0;
      param_1[7] = (long ***)0x0;
      param_1[6] = (long ***)0x0;
      param_1[1] = (long ***)0x0;
      *param_1 = (long ***)0x0;
      param_1[3] = (long ***)0x0;
      param_1[2] = (long ***)0x0;
      pppplVar4 = param_1;
      FUN_10a0d3454();
      ppplVar7 = pppplVar4[1];
      ppplVar11 = *pppplVar4;
      param_1[8] = pppplVar4[1];
      param_1[7] = ppplVar11;
      if (ppplVar7 != (long ***)0x0) {
        ppplVar7 = ppplVar7 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppplVar7,0x10);
          if (bVar2) {
            *ppplVar7 = (long **)((long)*ppplVar7 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      return param_1;
    }
    lVar5 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar6 = lVar5 * 0x1c71c71c71c71c72;
    if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
      uVar6 = uVar8;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar5 * -0x71c71c71c71c71c7)) {
      uVar6 = 0x38e38e38e38e38e;
    }
    ppplStack_38 = (long ***)param_1;
    if (uVar6 == 0) {
      pppplVar4 = (long ****)0x0;
    }
    else {
      pppplVar4 = param_1;
      FUN_10a0d35c8();
    }
    lVar9 = (long)pppplVar4 + lVar9;
    ppplStack_40 = (long ***)(pppplVar4 + uVar6 * 9);
    ppplVar7 = (long ***)(lVar9 + param_2 * 0x48);
    lVar5 = param_2 * 0x48;
    ppplStack_58 = (long ***)pppplVar4;
    pplStack_50 = (long **)lVar9;
    pplStack_48 = (long **)lVar9;
    do {
      FUN_10a0d33e0(lVar9);
      lVar9 = lVar9 + 0x48;
      lVar5 = lVar5 + -0x48;
    } while (lVar5 != 0);
    ppplVar11 = (long ***)((long)*param_1 + ((long)pplStack_50 - (long)param_1[1]));
    pplStack_48 = (long **)ppplVar7;
    func_0x00010a0d3610(param_1,*param_1,param_1[1],ppplVar11);
    ppplStack_58 = *param_1;
    *param_1 = ppplVar11;
    ppplVar7 = param_1[2];
    param_1[2] = ppplStack_40;
    param_1[1] = (long ***)pplStack_48;
    pppplVar3 = &ppplStack_58;
    pplStack_50 = (long **)ppplStack_58;
    pplStack_48 = (long **)ppplStack_58;
    ppplStack_40 = ppplVar7;
    func_0x00010a0d36d0(pppplVar3);
  }
  else {
    pppplVar3 = param_1;
    pppplVar10 = pppplVar4;
    if (param_2 != 0) {
      pppplVar10 = pppplVar4 + param_2 * 9;
      lVar9 = param_2 * 0x48;
      do {
        pppplVar3 = pppplVar4;
        FUN_10a0d33e0(pppplVar4);
        pppplVar4 = pppplVar4 + 9;
        lVar9 = lVar9 + -0x48;
      } while (lVar9 != 0);
    }
    param_1[1] = (long ***)pppplVar10;
  }
  return pppplVar3;
}



/* Entry: 10a0d33e0; end: 10a0d3453;  */

undefined8 * FUN_10a0d33e0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar4 = param_1;
  FUN_10a0d3454();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[8] = puVar4[1];
  param_1[7] = uVar6;
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
  return param_1;
}



/* Entry: 10a0d3454; end: 10a0d3503;  */

undefined8 FUN_10a0d3454(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam00000001132ffd68 & 1) == 0) {
    iVar1 = 0x132ffd68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x30;
      __Znwm();
      puVar2[2] = 0;
      *puVar2 = &PTR_DAT_110ba1e98;
      puVar2[1] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puRam00000001132ffd58 = puVar2 + 3;
      *puRam00000001132ffd58 = 0;
      puRam00000001132ffd60 = puVar2;
      ___cxa_atexit(FUN_10a0d3504,0x1132ffd58,0x100000000);
      ___cxa_guard_release(0x1132ffd68);
    }
  }
  return 0x1132ffd58;
}



/* Entry: 10a0d3504; end: 10a0d351b;  */

long FUN_10a0d3504(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0d351c; end: 10a0d353f;  */

void FUN_10a0d351c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba1e98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d3540; end: 10a0d355b;  */

void FUN_10a0d3540(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0d355c; end: 10a0d35b3;  */

long FUN_10a0d355c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0d35b4; end: 10a0d35c7;  */

void FUN_10a0d35b4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_109ffde64(&UNK_10f63805b);
  if ((undefined8 *)0x38e38e38e38e38e < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar3 = puVar1[4];
        uVar2 = puVar1[3];
        uVar4 = *(undefined8 *)((long)puVar1 + 0x24);
        *(undefined8 *)((long)param_4 + 0x2c) = *(undefined8 *)((long)puVar1 + 0x2c);
        *(undefined8 *)((long)param_4 + 0x24) = uVar4;
        param_4[4] = uVar3;
        param_4[3] = uVar2;
        uVar2 = puVar1[7];
        param_4[8] = puVar1[8];
        param_4[7] = uVar2;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1 = puVar1 + 9;
        param_4 = param_4 + 9;
      } while (puVar1 != param_3);
      do {
        func_0x00010a0d3694(param_2);
        param_2 = param_2 + 9;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x48);
  return;
}



/* Entry: 10a0d35c8; end: 10a0d371b;  */

void FUN_10a0d35c8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((undefined8 *)0x38e38e38e38e38e < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        uVar3 = puVar1[1];
        uVar2 = *puVar1;
        param_4[2] = puVar1[2];
        param_4[1] = uVar3;
        *param_4 = uVar2;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        uVar3 = puVar1[4];
        uVar2 = puVar1[3];
        uVar4 = *(undefined8 *)((long)puVar1 + 0x24);
        *(undefined8 *)((long)param_4 + 0x2c) = *(undefined8 *)((long)puVar1 + 0x2c);
        *(undefined8 *)((long)param_4 + 0x24) = uVar4;
        param_4[4] = uVar3;
        param_4[3] = uVar2;
        uVar2 = puVar1[7];
        param_4[8] = puVar1[8];
        param_4[7] = uVar2;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1 = puVar1 + 9;
        param_4 = param_4 + 9;
      } while (puVar1 != param_3);
      do {
        func_0x00010a0d3694(param_2);
        param_2 = param_2 + 9;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x48);
  return;
}



/* Entry: 10a0d371c; end: 10a0d372f;  */

undefined8 * FUN_10a0d371c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffdddc();
  uVar8 = param_2[1];
  uVar7 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar6 = (long *)puVar4[1];
  puVar4[1] = uVar8;
  *puVar4 = uVar7;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10a0d3730; end: 10a0d3793;  */

undefined8 * FUN_10a0d3730(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0d3794; end: 10a0d38ab;  */

/* WARNING: Possible PIC construction at 0x00010a0d3858: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a0d385c) */

void FUN_10a0d3794(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 **ppuVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  undefined8 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  ppuVar1 = (undefined8 **)auStack_60;
  ppuVar7 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar4 = ((long)puVar6 >> 4) * -0x5555555555555555 + 1;
  if (uVar4 < 0x555555555555556) {
    lVar3 = param_1[2] - *param_1 >> 4;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0x555555555555555;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a0d38c0();
    }
    puStack_50 = (undefined8 *)((long)plVar2 + (long)puVar6);
    plStack_40 = plVar2 + uVar5 * 6;
    puStack_50[1] = 0;
    *puStack_50 = 0;
    puStack_50[3] = 0;
    puStack_50[2] = 0;
    puStack_50[5] = 0;
    puStack_50[4] = 0;
    puVar6 = puStack_50 + 6;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)puStack_50 + ((long)param_2 - (long)param_3));
    uVar8 = 0x10a0d385c;
    plStack_58 = plVar2;
    puStack_48 = puVar6;
  }
  else {
    FUN_10a0d38ac();
    func_0x00010a0d39d8(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_10a0d38ac;
    ppuStack_70 = ppuVar7;
    FUN_109ffde64(&UNK_10f63805b);
    ppuVar1 = &puStack_90;
    pcStack_78 = FUN_10a0d38c0;
    ppuVar7 = &puStack_80;
    puStack_90 = puVar6;
    plStack_88 = param_1;
    if (param_2 < (undefined8 *)0x555555555555556) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)param_2 * 0x30);
      return;
    }
    uVar8 = 0x10a0d3904;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000109ffded8();
  }
  if (param_2 != param_3) {
    *(undefined8 **)((long)ppuVar1 + -0x20) = puVar6;
    *(long **)((long)ppuVar1 + -0x18) = param_1;
    *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar7;
    *(undefined8 *)((long)ppuVar1 + -8) = uVar8;
    puVar6 = param_2;
    do {
      *param_4 = 0;
      param_4[1] = 0;
      param_4[2] = 0;
      uVar8 = *puVar6;
      param_4[1] = puVar6[1];
      *param_4 = uVar8;
      param_4[2] = puVar6[2];
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      uVar8 = puVar6[3];
      param_4[4] = puVar6[4];
      param_4[3] = uVar8;
      param_4[5] = puVar6[5];
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6 = puVar6 + 6;
      param_4 = param_4 + 6;
    } while (puVar6 != param_3);
    do {
      func_0x00010a0d3994(param_2);
      param_2 = param_2 + 6;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a0d38ac; end: 10a0d38bf;  */

void FUN_10a0d38ac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_109ffde64(&UNK_10f63805b);
  if ((undefined8 *)0x555555555555555 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        uVar2 = *puVar1;
        param_4[1] = puVar1[1];
        *param_4 = uVar2;
        param_4[2] = puVar1[2];
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        param_4[3] = 0;
        param_4[4] = 0;
        param_4[5] = 0;
        uVar2 = puVar1[3];
        param_4[4] = puVar1[4];
        param_4[3] = uVar2;
        param_4[5] = puVar1[5];
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1 = puVar1 + 6;
        param_4 = param_4 + 6;
      } while (puVar1 != param_3);
      do {
        func_0x00010a0d3994(param_2);
        param_2 = param_2 + 6;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x30);
  return;
}



/* Entry: 10a0d38c0; end: 10a0d3a23;  */

void FUN_10a0d38c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((undefined8 *)0x555555555555555 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        uVar2 = *puVar1;
        param_4[1] = puVar1[1];
        *param_4 = uVar2;
        param_4[2] = puVar1[2];
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        param_4[3] = 0;
        param_4[4] = 0;
        param_4[5] = 0;
        uVar2 = puVar1[3];
        param_4[4] = puVar1[4];
        param_4[3] = uVar2;
        param_4[5] = puVar1[5];
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1 = puVar1 + 6;
        param_4 = param_4 + 6;
      } while (puVar1 != param_3);
      do {
        func_0x00010a0d3994(param_2);
        param_2 = param_2 + 6;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x30);
  return;
}



/* Entry: 10a0d3a24; end: 10a0d3b9b;  */

undefined1  [16]
FUN_10a0d3a24(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  lVar3 = param_1[2];
  puVar8 = (undefined8 *)*param_1;
  puVar2 = param_1;
  if ((undefined8 *)((lVar3 - (long)puVar8 >> 2) * -0x5555555555555555) < param_4) {
    puVar7 = param_1;
    puVar5 = param_2;
    if (puVar8 != (undefined8 *)0x0) {
      param_1[1] = puVar8;
      __ZdlPv();
      lVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar7 = puVar8;
    }
    if ((undefined8 *)0x1555555555555555 < param_4) {
      FUN_10a0d3be4();
      if (puVar5 < (undefined8 *)0x1555555555555556) {
        puVar2 = puVar7;
        FUN_10a0d3bf8();
        *puVar7 = puVar2;
        puVar7[1] = puVar2;
        puVar7[2] = (long)puVar2 + (long)puVar5 * 0xc;
        auVar10._8_8_ = puVar5;
        auVar10._0_8_ = puVar2;
        return auVar10;
      }
      FUN_10a0d3be4();
      puVar2 = (undefined8 *)&UNK_10f63805b;
      FUN_109ffde64();
      if ((undefined8 *)0x1555555555555555 < puVar5) {
        func_0x000109ffded8();
        if (*(char *)((long)puVar2 + 0xef) < '\0') {
          __ZdlPv(puVar2[0x1b]);
        }
        if (*(char *)((long)puVar2 + 0xd7) < '\0') {
          __ZdlPv(puVar2[0x18]);
        }
        func_0x00010a0c9b7c(puVar2 + 9);
        func_0x00010a0c9b2c(puVar2[7]);
        if (puVar2[3] != 0) {
          puVar2[4] = puVar2[3];
          __ZdlPv();
        }
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          __ZdlPv(*puVar2);
        }
        auVar12._8_8_ = puVar5;
        auVar12._0_8_ = puVar2;
        return auVar12;
      }
      lVar3 = (long)puVar5 * 0xc;
      __Znwm(lVar3);
      auVar11._8_8_ = puVar5;
      auVar11._0_8_ = lVar3;
      return auVar11;
    }
    puVar7 = (undefined8 *)((lVar3 >> 2) * 0x5555555555555556);
    if (puVar7 < param_4 || (long)puVar7 - (long)param_4 == 0) {
      puVar7 = param_4;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar3 >> 2) * -0x5555555555555555)) {
      puVar7 = (undefined8 *)0x1555555555555555;
    }
    FUN_10a0d3b9c(param_1,puVar7);
    puVar4 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      uVar6 = *param_2;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar4 = uVar6;
      puVar4 = (undefined8 *)((long)puVar4 + 0xc);
    }
  }
  else {
    puVar5 = (undefined8 *)param_1[1];
    puVar7 = param_2;
    if ((undefined8 *)(((long)puVar5 - (long)puVar8 >> 2) * -0x5555555555555555) < param_4) {
      puVar1 = (undefined8 *)((long)param_2 + ((long)puVar5 - (long)puVar8));
      puVar4 = puVar5;
      if (puVar5 != puVar8) {
        _memmove(puVar8,param_2);
        puVar5 = (undefined8 *)param_1[1];
        puVar4 = puVar5;
        puVar7 = param_2;
        puVar2 = puVar8;
      }
      for (; puVar1 != param_3; puVar1 = (undefined8 *)((long)puVar1 + 0xc)) {
        uVar6 = *puVar1;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar1 + 1);
        *puVar5 = uVar6;
        puVar5 = (undefined8 *)((long)puVar5 + 0xc);
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
      }
    }
    else {
      lVar3 = (long)param_3 - (long)param_2;
      if (lVar3 != 0) {
        puVar2 = puVar8;
        _memmove(puVar8,param_2,lVar3);
        puVar7 = param_2;
      }
      puVar4 = (undefined8 *)((long)puVar8 + lVar3);
    }
  }
  param_1[1] = puVar4;
  auVar9._8_8_ = puVar7;
  auVar9._0_8_ = puVar2;
  return auVar9;
}



/* Entry: 10a0d3b9c; end: 10a0d3be3;  */

undefined1  [16] FUN_10a0d3b9c(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x1555555555555556) {
    plVar1 = param_1;
    FUN_10a0d3bf8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 0xc;
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a0d3be4();
  puVar2 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  if (param_2 < 0x1555555555555556) {
    lVar3 = param_2 * 0xc;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000109ffded8();
  if (*(char *)((long)puVar2 + 0xef) < '\0') {
    __ZdlPv(puVar2[0x1b]);
  }
  if (*(char *)((long)puVar2 + 0xd7) < '\0') {
    __ZdlPv(puVar2[0x18]);
  }
  func_0x00010a0c9b7c(puVar2 + 9);
  func_0x00010a0c9b2c(puVar2[7]);
  if (puVar2[3] != 0) {
    puVar2[4] = puVar2[3];
    __ZdlPv();
  }
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    __ZdlPv(*puVar2);
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 10a0d3be4; end: 10a0d3bf7;  */

undefined1  [16] FUN_10a0d3be4(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)&UNK_10f63805b;
  FUN_109ffde64();
  if (param_2 < 0x1555555555555556) {
    lVar2 = param_2 * 0xc;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  if (*(char *)((long)puVar1 + 0xef) < '\0') {
    __ZdlPv(puVar1[0x1b]);
  }
  if (*(char *)((long)puVar1 + 0xd7) < '\0') {
    __ZdlPv(puVar1[0x18]);
  }
  func_0x00010a0c9b7c(puVar1 + 9);
  func_0x00010a0c9b2c(puVar1[7]);
  if (puVar1[3] != 0) {
    puVar1[4] = puVar1[3];
    __ZdlPv();
  }
  if (*(char *)((long)puVar1 + 0x17) < '\0') {
    __ZdlPv(*puVar1);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10a0d3bf8; end: 10a0d419b;  */

undefined1  [16] FUN_10a0d3bf8(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0x1555555555555556) {
    lVar1 = param_2 * 0xc;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    __ZdlPv(param_1[0x1b]);
  }
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    __ZdlPv(param_1[0x18]);
  }
  func_0x00010a0c9b7c(param_1 + 9);
  func_0x00010a0c9b2c(param_1[7]);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a0d419c; end: 10a0d41a3;  */

undefined8 FUN_10a0d419c(void)

{
  return 1;
}



/* Entry: 10a0d41a4; end: 10a0d459b;  */

long * FUN_10a0d41a4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plStack_28;
  
  if (*(char *)((long)param_1 + 0x367) < '\0') {
    __ZdlPv(param_1[0x6a]);
  }
  if (*(char *)((long)param_1 + 0x34f) < '\0') {
    __ZdlPv(param_1[0x67]);
  }
  func_0x00010a0c9b2c(param_1[0x65]);
  func_0x00010a0c9b7c(param_1 + 0x55);
  if (*(char *)((long)param_1 + 0x2a7) < '\0') {
    __ZdlPv(param_1[0x52]);
  }
  if (*(char *)((long)param_1 + 0x28f) < '\0') {
    __ZdlPv(param_1[0x4f]);
  }
  func_0x00010a0c9b7c(param_1 + 0x40);
  func_0x00010a0c9b2c(param_1[0x3e]);
  if (*(char *)((long)param_1 + 0x1e7) < '\0') {
    __ZdlPv(param_1[0x3a]);
  }
  if (*(char *)((long)param_1 + 0x1cf) < '\0') {
    __ZdlPv(param_1[0x37]);
  }
  if (*(char *)((long)param_1 + 0x1b7) < '\0') {
    __ZdlPv(param_1[0x34]);
  }
  if (*(char *)((long)param_1 + 0x19f) < '\0') {
    __ZdlPv(param_1[0x31]);
  }
  plStack_28 = param_1 + 0x2e;
  FUN_10a0426d8(&plStack_28);
  plStack_28 = param_1 + 0x2b;
  FUN_10a0426d8(&plStack_28);
  lVar3 = param_1[0x27];
  if (lVar3 != 0) {
    lVar1 = param_1[0x28];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x1e8;
        FUN_10a0cef14();
      } while (lVar1 != lVar3);
      lVar2 = param_1[0x27];
    }
    param_1[0x28] = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = param_1[0x24];
  if (lVar3 != 0) {
    lVar1 = param_1[0x25];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0xf0;
        func_0x00010a0d3c3c();
      } while (lVar1 != lVar3);
      lVar2 = param_1[0x24];
    }
    param_1[0x25] = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = param_1[0x21];
  if (lVar3 != 0) {
    lVar1 = param_1[0x22];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x2b0;
        FUN_10a0cd968();
      } while (lVar1 != lVar3);
      lVar2 = param_1[0x21];
    }
    param_1[0x22] = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = param_1[0x1e];
  if (lVar3 != 0) {
    lVar1 = param_1[0x1f];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0xf0;
        func_0x00010a0d3cac();
      } while (lVar1 != lVar3);
      lVar2 = param_1[0x1e];
    }
    param_1[0x1f] = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = param_1[0x1b];
  if (lVar3 != 0) {
    lVar1 = param_1[0x1c];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0xf8;
        func_0x00010a0d3d0c();
      } while (lVar1 != lVar3);
      lVar2 = param_1[0x1b];
    }
    param_1[0x1c] = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = param_1[0x18];
  if (lVar3 != 0) {
    lVar1 = param_1[0x19];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x148;
        func_0x00010a0d3d7c();
      } while (lVar1 != lVar3);
      lVar2 = param_1[0x18];
    }
    param_1[0x19] = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = param_1[0x15];
  if (lVar3 != 0) {
    lVar1 = param_1[0x16];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0xe0;
        func_0x00010a0d3e0c();
      } while (lVar1 != lVar3);
      lVar2 = param_1[0x15];
    }
    param_1[0x16] = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = param_1[0x12];
  if (lVar3 != 0) {
    lVar1 = param_1[0x13];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x178;
        func_0x00010a0cda38();
      } while (lVar1 != lVar3);
      lVar2 = param_1[0x12];
    }
    param_1[0x13] = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = param_1[0xf];
  if (lVar3 != 0) {
    lVar1 = param_1[0x10];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x108;
        func_0x00010a0cd81c();
      } while (lVar1 != lVar3);
      lVar2 = param_1[0xf];
    }
    param_1[0x10] = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = param_1[0xc];
  if (lVar3 != 0) {
    lVar1 = param_1[0xd];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x628;
        func_0x00010a0d3e6c();
      } while (lVar1 != lVar3);
      lVar2 = param_1[0xc];
    }
    param_1[0xd] = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = param_1[9];
  if (lVar3 != 0) {
    lVar1 = param_1[10];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x108;
        func_0x00010a0cd73c();
      } while (lVar1 != lVar3);
      lVar2 = param_1[9];
    }
    param_1[10] = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = param_1[6];
  if (lVar3 != 0) {
    lVar1 = param_1[7];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x108;
        func_0x00010a0cd6bc();
      } while (lVar1 != lVar3);
      lVar2 = param_1[6];
    }
    param_1[7] = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    lVar1 = param_1[4];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x108;
        func_0x00010a0d40a0();
      } while (lVar1 != lVar3);
      lVar2 = param_1[3];
    }
    param_1[4] = lVar3;
    __ZdlPv(lVar2);
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x150;
        func_0x00010a0cd79c();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
  }
  return param_1;
}



/* Entry: 10a0d459c; end: 10a0d45cf;  */

void FUN_10a0d459c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined2 uStack_100;
  undefined1 uStack_fe;
  code *pcStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  code **ppcStack_b8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  plVar5 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar5 = (long)(PTR___ZTVSt18bad_variant_access_110346b70 + 0x10);
  ___cxa_throw();
  puVar11 = (undefined8 *)*plVar5;
  puVar8 = (undefined8 *)*puVar11;
  if (*(int *)(puVar8 + 3) == 0) {
    if (*(char *)((long)puVar8 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_50,*puVar8,puVar8[1]);
    }
    else {
      uStack_48 = puVar8[1];
      uStack_50 = *puVar8;
      uStack_40 = puVar8[2];
    }
    uVar1 = uStack_48;
    if (-1 < (long)uStack_40) {
      uVar1 = uStack_40 >> 0x38;
    }
    if (uVar1 == 0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f637370,&UNK_10f6390a8,0x225,&UNK_10f6391f9);
      }
      *(undefined1 *)puVar11[1] = 0;
    }
    else {
      lVar6 = puVar11[2] + 0x30;
      FUN_10a0b8958(lVar6,puVar11[3],&uStack_50,puVar11[4],puVar11[5]);
      *(char *)puVar11[1] = (char)lVar6;
      if ((int)lVar6 != 0) {
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          func_0x00010ae06f08(1,4,&UNK_10f637370,&UNK_10f6390a8,0x22d,&UNK_10f63921b);
        }
        FUN_10ad00f3c(&uStack_68,&uStack_50);
        puVar8 = (undefined8 *)puVar11[6];
        if (*(char *)((long)puVar8 + 0x17) < '\0') {
          __ZdlPv(*puVar8);
        }
        puVar8[1] = uStack_60;
        *puVar8 = uStack_68;
        puVar8[2] = uStack_58;
      }
    }
    if ((long)uStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
    return;
  }
  FUN_10a0d459c();
  if ((long)uStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  __Unwind_Resume();
  puVar8 = (undefined8 *)*plVar5;
  plVar9 = (long *)*puVar8;
  if ((int)plVar9[3] == 1) {
    lStack_140 = 0;
    lStack_138 = 0;
    uStack_130 = 0;
    FUN_10a05151c(&lStack_140,*plVar9,plVar9[1],plVar9[1] - *plVar9);
    lVar4 = lStack_138;
    lVar6 = lStack_140;
    lVar12 = puVar8[2];
    uVar2 = puVar8[4];
    uVar3 = puVar8[5];
    ppcStack_b8 = &pcStack_f8;
    uStack_100 = 0;
    pcStack_f8 = FUN_10a0a5140;
    pcStack_f0 = FUN_10a0a518c;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_101 = 0;
    pcStack_e8 = FUN_10a0a51b4;
    pcStack_e0 = FUN_10a0a55a8;
    uStack_c0 = 0;
    uStack_d8 = 0;
    pcStack_d0 = FUN_10a0c57e8;
    uStack_fe = 1;
    lStack_c8 = lVar12;
    func_0x000107c2b054(auStack_128,"");
    puVar11 = &uStack_110;
    FUN_10a0b4c14(puVar11,lVar12 + 0x30,uVar2,uVar3,lVar6,(int)lVar4 - (int)lVar6,auStack_128);
    if (cStack_111 < '\0') {
      __ZdlPv(auStack_128[0]);
    }
    *(char *)puVar8[1] = (char)puVar11;
    if (((int)puVar11 != 0) && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
      func_0x00010ae06f08(1,4,&UNK_10f637370,&UNK_10f639232,0x237,&UNK_10f639392);
    }
    if (lStack_140 != 0) {
      lStack_138 = lStack_140;
      __ZdlPv();
    }
    return;
  }
  FUN_10a0d459c();
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  if (lStack_140 != 0) {
    lStack_138 = lStack_140;
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar9 = (long *)*plVar5;
  if (plVar9 != (long *)0x0) {
    plVar10 = (long *)plVar5[1];
    plVar7 = plVar9;
    if (plVar10 != plVar9) {
      do {
        plVar7 = plVar10 + -4;
        if (*plVar7 != 0) {
          plVar10[-3] = *plVar7;
          __ZdlPv();
        }
        plVar10 = plVar7;
      } while (plVar7 != plVar9);
      plVar7 = (long *)*plVar5;
    }
    plVar5[1] = (long)plVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar7);
    return;
  }
  return;
}



/* Entry: 10a0d45d0; end: 10a0d474f;  */

void FUN_10a0d45d0(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined2 uStack_f0;
  undefined1 uStack_ee;
  code *pcStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  code **ppcStack_a8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  
  puVar10 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)*puVar10;
  if (*(int *)(puVar7 + 3) == 0) {
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_40,*puVar7,puVar7[1]);
    }
    else {
      uStack_38 = puVar7[1];
      uStack_40 = *puVar7;
      uStack_30 = puVar7[2];
    }
    uVar1 = uStack_38;
    if (-1 < (long)uStack_30) {
      uVar1 = uStack_30 >> 0x38;
    }
    if (uVar1 == 0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f637370,&UNK_10f6390a8,0x225,&UNK_10f6391f9);
      }
      *(undefined1 *)puVar10[1] = 0;
    }
    else {
      lVar5 = puVar10[2] + 0x30;
      FUN_10a0b8958(lVar5,puVar10[3],&uStack_40,puVar10[4],puVar10[5]);
      *(char *)puVar10[1] = (char)lVar5;
      if ((int)lVar5 != 0) {
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          func_0x00010ae06f08(1,4,&UNK_10f637370,&UNK_10f6390a8,0x22d,&UNK_10f63921b);
        }
        FUN_10ad00f3c(&uStack_58,&uStack_40);
        puVar7 = (undefined8 *)puVar10[6];
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          __ZdlPv(*puVar7);
        }
        puVar7[1] = uStack_50;
        *puVar7 = uStack_58;
        puVar7[2] = uStack_48;
      }
    }
    if ((long)uStack_30 < 0) {
      __ZdlPv(uStack_40);
    }
    return;
  }
  FUN_10a0d459c();
  if ((long)uStack_30 < 0) {
    __ZdlPv(uStack_40);
  }
  __Unwind_Resume();
  puVar7 = (undefined8 *)*param_1;
  plVar8 = (long *)*puVar7;
  if ((int)plVar8[3] == 1) {
    lStack_130 = 0;
    lStack_128 = 0;
    uStack_120 = 0;
    FUN_10a05151c(&lStack_130,*plVar8,plVar8[1],plVar8[1] - *plVar8);
    lVar4 = lStack_128;
    lVar5 = lStack_130;
    lVar11 = puVar7[2];
    uVar2 = puVar7[4];
    uVar3 = puVar7[5];
    ppcStack_a8 = &pcStack_e8;
    uStack_f0 = 0;
    pcStack_e8 = FUN_10a0a5140;
    pcStack_e0 = FUN_10a0a518c;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f1 = 0;
    pcStack_d8 = FUN_10a0a51b4;
    pcStack_d0 = FUN_10a0a55a8;
    uStack_b0 = 0;
    uStack_c8 = 0;
    pcStack_c0 = FUN_10a0c57e8;
    uStack_ee = 1;
    lStack_b8 = lVar11;
    func_0x000107c2b054(auStack_118,"");
    puVar10 = &uStack_100;
    FUN_10a0b4c14(puVar10,lVar11 + 0x30,uVar2,uVar3,lVar5,(int)lVar4 - (int)lVar5,auStack_118);
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    *(char *)puVar7[1] = (char)puVar10;
    if (((int)puVar10 != 0) && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
      func_0x00010ae06f08(1,4,&UNK_10f637370,&UNK_10f639232,0x237,&UNK_10f639392);
    }
    if (lStack_130 != 0) {
      lStack_128 = lStack_130;
      __ZdlPv();
    }
    return;
  }
  FUN_10a0d459c();
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar8 = (long *)*param_1;
  if (plVar8 != (long *)0x0) {
    plVar9 = (long *)param_1[1];
    plVar6 = plVar8;
    if (plVar9 != plVar8) {
      do {
        plVar6 = plVar9 + -4;
        if (*plVar6 != 0) {
          plVar9[-3] = *plVar6;
          __ZdlPv();
        }
        plVar9 = plVar6;
      } while (plVar6 != plVar8);
      plVar6 = (long *)*param_1;
    }
    param_1[1] = plVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar6);
    return;
  }
  return;
}



/* Entry: 10a0d4750; end: 10a0d48d7;  */

void FUN_10a0d4750(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  long lStack_58;
  undefined8 uStack_50;
  code **ppcStack_48;
  
  puVar9 = (undefined8 *)*param_1;
  plVar7 = (long *)*puVar9;
  if ((int)plVar7[3] == 1) {
    lStack_d0 = 0;
    lStack_c8 = 0;
    uStack_c0 = 0;
    FUN_10a05151c(&lStack_d0,*plVar7,plVar7[1],plVar7[1] - *plVar7);
    lVar4 = lStack_c8;
    lVar3 = lStack_d0;
    lVar10 = puVar9[2];
    uVar1 = puVar9[4];
    uVar2 = puVar9[5];
    ppcStack_48 = &pcStack_88;
    uStack_90 = 0;
    pcStack_88 = FUN_10a0a5140;
    pcStack_80 = FUN_10a0a518c;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_91 = 0;
    pcStack_78 = FUN_10a0a51b4;
    pcStack_70 = FUN_10a0a55a8;
    uStack_50 = 0;
    uStack_68 = 0;
    pcStack_60 = FUN_10a0c57e8;
    uStack_8e = 1;
    lStack_58 = lVar10;
    func_0x000107c2b054(auStack_b8,"");
    puVar5 = &uStack_a0;
    FUN_10a0b4c14(puVar5,lVar10 + 0x30,uVar1,uVar2,lVar3,(int)lVar4 - (int)lVar3,auStack_b8);
    if (cStack_a1 < '\0') {
      __ZdlPv(auStack_b8[0]);
    }
    *(char *)puVar9[1] = (char)puVar5;
    if (((int)puVar5 != 0) && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
      func_0x00010ae06f08(1,4,&UNK_10f637370,&UNK_10f639232,0x237,&UNK_10f639392);
    }
    if (lStack_d0 != 0) {
      lStack_c8 = lStack_d0;
      __ZdlPv();
    }
    return;
  }
  FUN_10a0d459c();
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar7 = (long *)*param_1;
  if (plVar7 == (long *)0x0) {
    return;
  }
  plVar8 = (long *)param_1[1];
  plVar6 = plVar7;
  if (plVar8 != plVar7) {
    do {
      plVar6 = plVar8 + -4;
      if (*plVar6 != 0) {
        plVar8[-3] = *plVar6;
        __ZdlPv();
      }
      plVar8 = plVar6;
    } while (plVar6 != plVar7);
    plVar6 = (long *)*param_1;
  }
  param_1[1] = plVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 10a0d48d8; end: 10a0d49bb;  */

void FUN_10a0d48d8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  plVar1 = plVar3;
  if (plVar2 != plVar3) {
    do {
      plVar1 = plVar2 + -4;
      if (*plVar1 != 0) {
        plVar2[-3] = *plVar1;
        __ZdlPv();
      }
      plVar2 = plVar1;
    } while (plVar1 != plVar3);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10a0d49bc; end: 10a0d4a17;  */

void FUN_10a0d49bc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a0617bc();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a0d4a18; end: 10a0d4a87;  */

void FUN_10a0d4a18(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a0617bc();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a0d4a88; end: 10a0d4b13;  */

void FUN_10a0d4a88(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10a426824(param_1,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a0d4b14; end: 10a0d4baf;  */

void FUN_10a0d4b14(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = *param_2;
  plStack_28 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  if (lStack_30 != 0) {
    FUN_10a423b70(param_1 + 0x54,&lStack_30);
    (**(code **)(*param_1 + 0x208))(param_1);
  }
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a0d4bb0; end: 10a0d4c3b;  */

void FUN_10a0d4bb0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  *(undefined1 *)(param_1 + 800) = *(undefined1 *)(param_2 + 8);
  if (param_1 + 0x318 == param_2) {
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    *(undefined1 *)(param_1 + 0x358) = *(undefined1 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x350) = uVar4;
    return;
  }
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_2 + 0x30);
  FUN_10a0d51f8(param_1 + 0x328,*(undefined8 *)(param_2 + 0x20),0);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x358) = *(undefined1 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x350) = uVar4;
  *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(param_2 + 0x68);
  plVar3 = *(long **)(param_2 + 0x58);
  plVar1 = (long *)(param_1 + 0x360);
  lVar5 = *(long *)(param_1 + 0x368);
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      *(undefined8 *)(*plVar1 + lVar6 * 8) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
    plVar7 = *(long **)(param_1 + 0x370);
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    plVar8 = plVar7;
    if (plVar7 != (long *)0x0 && plVar3 != (long *)0x0) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar8 + 2,plVar3 + 2);
        lVar5 = plVar3[5];
        plVar8[5] = lVar5;
        *(int *)(plVar8 + 6) = (int)plVar3[6];
        plVar7 = (long *)*plVar8;
        plVar8[1] = lVar5;
        plVar2 = plVar1;
        FUN_10a0d5b44(plVar1,lVar5,plVar8 + 2);
        FUN_10a0d5c8c(plVar1,plVar8,plVar2);
        plVar3 = (long *)*plVar3;
        if (plVar7 == (long *)0x0) break;
        plVar8 = plVar7;
      } while (plVar3 != (long *)0x0);
    }
    FUN_10a0d5b00(plVar1,plVar7);
  }
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    FUN_10a0d5f78(plVar1,plVar3 + 2);
  }
  return;
}



/* Entry: 10a0d4c3c; end: 10a0d4c4f;  */

undefined8 * FUN_10a0d4c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  
  puVar2 = &UNK_10f63805b;
  FUN_109ffdddc();
  FUN_10a3dd220();
  FUN_10a0d4ca4(puVar2,param_2,param_3);
  *extraout_x8 = puVar2;
  puVar3 = (undefined8 *)0x28;
  __Znwm();
  *puVar3 = &PTR_FUN_110ba1858;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = puVar2;
  puVar3[4] = FUN_10a3df8cc;
  extraout_x8[1] = puVar3;
  puVar1 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2 + 0x28;
  }
  FUN_10a0d4df4(extraout_x8,puVar1,puVar2);
  return extraout_x8;
}



/* Entry: 10a0d4c50; end: 10a0d4ca3;  */

long * FUN_10a0d4c50(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_10a3dd220();
  FUN_10a0d4ca4(param_2,param_3,param_4);
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba1858;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = FUN_10a3df8cc;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d4df4(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d4ca4; end: 10a0d4d5f;  */

undefined8 * FUN_10a0d4ca4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x510;
  __Znwm();
  puVar1[0x9e] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0xa1) = 0x100;
  puVar1[0xa0] = 0;
  puVar1[0x9f] = 0;
  FUN_10a4213cc();
  *puVar1 = &PTR_DAT_110bc8a40;
  puVar1[2] = &PTR_DAT_110bc8c70;
  puVar1[7] = &PTR_FUN_110bc8cc8;
  puVar1[0xd] = &PTR_FUN_110bc8ce8;
  puVar1[0x9e] = &PTR_FUN_110bc8de8;
  puVar1[0x16] = &PTR_FUN_110bc8d58;
  puVar1[0x17] = &PTR_DAT_110bc8d88;
  return puVar1;
}



/* Entry: 10a0d4d60; end: 10a0d4df3;  */

long * FUN_10a0d4d60(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba1858;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d4df4(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d4df4; end: 10a0d4ea3;  */

void FUN_10a0d4df4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a0d4ea4; end: 10a0d4ea7;  */

void FUN_10a0d4ea4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0d4ea8; end: 10a0d4ebb;  */

void FUN_10a0d4ea8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d4ebc; end: 10a0d4ed7;  */

void FUN_10a0d4ebc(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a0d4ed8; end: 10a0d4f13;  */

long FUN_10a0d4ed8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0d4f14; end: 10a0d4f17;  */

void FUN_10a0d4f14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d4f18; end: 10a0d4f27;  */

long FUN_10a0d4f18(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x000105277f8c();
  plVar5 = *(long **)(param_2 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_2;
}



/* Entry: 10a0d4f28; end: 10a0d4f7f;  */

long FUN_10a0d4f28(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a0d4f80; end: 10a0d4f93;  */

undefined8 * FUN_10a0d4f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  
  puVar2 = &UNK_10f63805b;
  FUN_109ffdddc();
  FUN_10a3dd220();
  FUN_10a0d4fe8(puVar2,param_2,param_3);
  *extraout_x8 = puVar2;
  puVar3 = (undefined8 *)0x28;
  __Znwm();
  *puVar3 = &PTR_FUN_110ba19e8;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = puVar2;
  puVar3[4] = FUN_10a3df8cc;
  extraout_x8[1] = puVar3;
  puVar1 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2 + 0x28;
  }
  FUN_10a0d50d4(extraout_x8,puVar1,puVar2);
  return extraout_x8;
}



/* Entry: 10a0d4f94; end: 10a0d4fe7;  */

long * FUN_10a0d4f94(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_10a3dd220();
  FUN_10a0d4fe8(param_2,param_3,param_4);
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba19e8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = FUN_10a3df8cc;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d50d4(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d4fe8; end: 10a0d503f;  */

undefined8 FUN_10a0d4fe8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x280;
  __Znwm(0x280);
  FUN_10a428134();
  return uVar1;
}



/* Entry: 10a0d5040; end: 10a0d50d3;  */

long * FUN_10a0d5040(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  *puVar2 = &PTR_FUN_110ba19e8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x28;
  }
  FUN_10a0d50d4(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a0d50d4; end: 10a0d5183;  */

void FUN_10a0d50d4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a0d5184; end: 10a0d5187;  */

void FUN_10a0d5184(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0d5188; end: 10a0d519b;  */

void FUN_10a0d5188(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d519c; end: 10a0d51b7;  */

void FUN_10a0d519c(long param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a0d51b8; end: 10a0d51f3;  */

long FUN_10a0d51b8(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba2110);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0d51f4; end: 10a0d51f7;  */

void FUN_10a0d51f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0d51f8; end: 10a0d532b;  */

void FUN_10a0d51f8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    plVar4 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    plVar5 = plVar4;
    if (plVar4 != (long *)0x0 && param_2 != param_3) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar5 + 2,param_2 + 2);
        plVar5[5] = param_2[5];
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar5 + 6,param_2 + 6);
        *(int *)(plVar5 + 9) = (int)param_2[9];
        plVar5[10] = param_2[10];
        plVar4 = (long *)*plVar5;
        plVar5[1] = plVar5[5];
        plVar1 = param_1;
        FUN_10a0d5368(param_1,plVar5[5],plVar5 + 2);
        FUN_10a0d54b0(param_1,plVar5,plVar1);
        param_2 = (long *)*param_2;
        if (plVar4 == (long *)0x0) break;
        plVar5 = plVar4;
      } while (param_2 != param_3);
    }
    FUN_10a0d532c(param_1,plVar4);
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_10a0d57e0(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10a0d532c; end: 10a0d5367;  */

void FUN_10a0d532c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    func_0x00010a0d579c(param_2 + 2);
    __ZdlPv(param_2);
    param_2 = (long *)lVar1;
  }
  return;
}



/* Entry: 10a0d5368; end: 10a0d54af;  */

long * FUN_10a0d5368(long *param_1,ulong param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar5) {
      uVar6 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar6 = uVar6 | uVar5 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    FUN_10a0d5580(param_1,uVar6);
    uVar5 = param_1[1];
  }
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar7 = uVar6 & param_2;
  }
  else {
    uVar7 = param_2;
    if (uVar5 <= param_2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = param_2 / uVar5;
      }
      uVar7 = param_2 - uVar7 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    bVar9 = false;
    bVar1 = 0;
    do {
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar10 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar11 = uVar10 & uVar6;
      }
      else {
        uVar11 = uVar10;
        if (uVar5 <= uVar10) {
          uVar11 = 0;
          if (uVar5 != 0) {
            uVar11 = uVar10 / uVar5;
          }
          uVar11 = uVar10 - uVar11 * uVar5;
        }
      }
      if (uVar11 != uVar7) {
        return plVar4;
      }
      if (uVar10 == param_2) {
        bVar2 = plVar8[5] == *(long *)(param_3 + 0x18);
      }
      else {
        bVar2 = false;
      }
      bVar3 = bVar2 != bVar9;
      bVar2 = (bool)(bVar1 & bVar3);
      bVar9 = (bool)(bVar9 | bVar3);
      bVar1 = bVar1 | bVar3;
    } while (!bVar2);
  }
  return plVar4;
}



/* Entry: 10a0d54b0; end: 10a0d557f;  */

void FUN_10a0d54b0(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
    if (param_3 != (long *)0x0) goto LAB_10a0d54d8;
LAB_10a0d5514:
    plVar5 = param_1 + 2;
    *param_2 = *plVar5;
    *plVar5 = (long)param_2;
    *(long **)(*param_1 + uVar2 * 8) = plVar5;
    if (*param_2 == 0) goto LAB_10a0d5570;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar2 * uVar1;
    }
  }
  else {
    if (uVar1 <= uVar2) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      uVar2 = uVar2 - uVar4 * uVar1;
    }
    if (param_3 == (long *)0x0) goto LAB_10a0d5514;
LAB_10a0d54d8:
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 == 0) goto LAB_10a0d5570;
    uVar4 = *(ulong *)(*param_2 + 8);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & uVar3;
    }
    else if (uVar1 <= uVar4) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar4 / uVar1;
      }
      uVar4 = uVar4 - uVar3 * uVar1;
    }
    if (uVar4 == uVar2) goto LAB_10a0d5570;
  }
  *(long **)(*param_1 + uVar4 * 8) = param_2;
LAB_10a0d5570:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10a0d5580; end: 10a0d564f;  */

void FUN_10a0d5580(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (param_2 <= uVar10) {
    if (param_2 < uVar10) {
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar6) {
        uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
      }
      if (param_2 <= uVar6) {
        param_2 = uVar6;
      }
      if (param_2 < uVar10) goto LAB_10a0d55c8;
    }
    return;
  }
LAB_10a0d55c8:
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        __ZdlPv(param_1[4]);
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(*param_1);
        return;
      }
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar10 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
      uVar10 = uVar10 + 1;
    } while (param_2 != uVar10);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      uVar10 = plVar4[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar10 = uVar10 & uVar6;
      }
      else if (param_2 <= uVar10) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = uVar10 / param_2;
        }
        uVar10 = uVar10 - uVar7 * param_2;
      }
      *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
      while (plVar5 = plVar4, plVar4 = (long *)*plVar5, plVar4 != (long *)0x0) {
        uVar7 = plVar4[1];
        if ((param_2 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar10) {
          lVar2 = *param_1;
          plVar9 = plVar4;
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar5;
            uVar10 = uVar7;
          }
          else {
            do {
              plVar8 = plVar9;
              plVar9 = (long *)*plVar8;
              if (plVar9 == (long *)0x0) break;
            } while (plVar4[5] == plVar9[5]);
            *plVar5 = (long)plVar9;
            *plVar8 = **(long **)(lVar2 + uVar7 * 8);
            **(long **)(lVar2 + uVar7 * 8) = (long)plVar4;
            plVar4 = plVar5;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a0d5650; end: 10a0d57df;  */

void FUN_10a0d5650(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      if (*(char *)((long)param_1 + 0x37) < '\0') {
        __ZdlPv(param_1[4]);
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(*param_1);
        return;
      }
      return;
    }
    lVar2 = param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar4 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar7 = param_2 - 1;
      if ((param_2 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      while (plVar6 = plVar5, plVar5 = (long *)*plVar6, plVar5 != (long *)0x0) {
        uVar8 = plVar5[1];
        if ((param_2 & uVar7) == 0) {
          uVar8 = uVar8 & uVar7;
        }
        else if (param_2 <= uVar8) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar8 / param_2;
          }
          uVar8 = uVar8 - uVar1 * param_2;
        }
        if (uVar8 != uVar4) {
          lVar2 = *param_1;
          plVar10 = plVar5;
          if (*(long *)(lVar2 + uVar8 * 8) == 0) {
            *(long **)(lVar2 + uVar8 * 8) = plVar6;
            uVar4 = uVar8;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (plVar5[5] == plVar10[5]);
            *plVar6 = (long)plVar10;
            *plVar9 = **(long **)(lVar2 + uVar8 * 8);
            **(long **)(lVar2 + uVar8 * 8) = (long)plVar5;
            plVar5 = plVar6;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10a0d57e0; end: 10a0d584f;  */

long FUN_10a0d57e0(undefined8 param_1)

{
  undefined8 uVar1;
  long alStack_38 [3];
  
  FUN_10a0d5850(alStack_38);
  *(undefined8 *)(alStack_38[0] + 8) = *(undefined8 *)(alStack_38[0] + 0x28);
  uVar1 = param_1;
  FUN_10a0d5368(param_1,*(undefined8 *)(alStack_38[0] + 0x28),alStack_38[0] + 0x10);
  FUN_10a0d54b0(param_1,alStack_38[0],uVar1);
  return alStack_38[0];
}



/* Entry: 10a0d5850; end: 10a0d58c3;  */

void FUN_10a0d5850(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10a0d58c4(puVar1 + 2,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  puVar1[1] = puVar1[5];
  return;
}


