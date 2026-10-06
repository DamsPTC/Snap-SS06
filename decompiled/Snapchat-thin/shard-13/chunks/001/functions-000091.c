/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a09fff0; end: 10a0a00f7;  */

void FUN_10a09fff0(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a0a00f8; end: 10a0a0107;  */

void FUN_10a0a00f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba0958;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0a0108; end: 10a0a0127;  */

void FUN_10a0a0108(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba0958;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0a0128; end: 10a0a016b;  */

void FUN_10a0a0128(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  FUN_10a0a16d0(param_1 + 0x30);
  FUN_10a0a1618(param_1 + 0x28,0);
  FUN_10a0a1618(param_1 + 0x20,0);
  lVar3 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = 0;
  if (lVar3 != 0) {
    lVar1 = *(long *)(lVar3 + 0x368);
    *(undefined8 *)(lVar3 + 0x368) = 0;
    if (lVar1 != 0) {
      (**(code **)(lVar3 + 0x370))();
    }
    FUN_10a09abb8(lVar3 + 0x100);
    func_0x00010a0a049c(lVar3 + 0xf0);
    if (*(char *)(lVar3 + 0xef) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar3 + 0xd8));
    }
    if (*(char *)(lVar3 + 0xd7) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar3 + 0xc0));
    }
    FUN_10a09ac6c(lVar3 + 0xa8);
    func_0x00010a09ae98(lVar3 + 0x80);
    __ZNSt3__15mutexD1Ev(lVar3 + 0x38);
    plVar2 = *(long **)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    FUN_10a09a130(lVar3 + 0x18);
    func_0x00010a09dbbc(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0a016c; end: 10a0a016f;  */

void FUN_10a0a016c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0a0170; end: 10a0a01c7;  */

long FUN_10a0a0170(long param_1)

{
  FUN_10a0a01c8(param_1 + 0xc0,0);
  FUN_10a0906e4(param_1 + 0x18);
  func_0x00010a0a01f0(param_1 + 0x10,0);
  func_0x00010a0a01f0(param_1 + 8,0);
  func_0x00010a0a01f0(param_1,0);
  return param_1;
}



/* Entry: 10a0a01c8; end: 10a0a0217;  */

void FUN_10a0a01c8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a3ca728();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0a0218; end: 10a0a0227;  */

void FUN_10a0a0218(void)

{
  return;
}



/* Entry: 10a0a0228; end: 10a0a025f;  */

void FUN_10a0a0228(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 *extraout_x8;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)(param_1);
  if (*ppuVar1 != (undefined *)*extraout_x8) {
    *ppuVar1 = (undefined *)*extraout_x8;
  }
  return;
}



/* Entry: 10a0a0260; end: 10a0a02b3;  */

undefined4 FUN_10a0a0260(undefined4 *param_1)

{
  return *param_1;
}



/* Entry: 10a0a02b4; end: 10a0a02db;  */

void FUN_10a0a02b4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a303634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0a02dc; end: 10a0a0433;  */

long FUN_10a0a02dc(long param_1)

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



/* Entry: 10a0a0434; end: 10a0a0443;  */

void FUN_10a0a0434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba09f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0a0444; end: 10a0a0463;  */

void FUN_10a0a0444(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba09f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0a0464; end: 10a0a046f;  */

long FUN_10a0a0464(long param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_10a3020b0(param_1 + 0x18);
    _glDeleteFramebuffers(1,(int *)(param_1 + 0x20));
  }
  return param_1 + 0x18;
}



/* Entry: 10a0a0470; end: 10a0a04f3;  */

void FUN_10a0a0470(long param_1)

{
  if (param_1 != 0) {
    FUN_109d1f2b4(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 10a0a04f4; end: 10a0a04fb;  */

void FUN_10a0a04f4(void)

{
  return;
}



/* Entry: 10a0a04fc; end: 10a0a052f;  */

void FUN_10a0a04fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110ba0a40;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a0a0530; end: 10a0a054b;  */

void FUN_10a0a0530(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110ba0a40;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a0a054c; end: 10a0a0c93;  */

/* WARNING: Removing unreachable block (ram,0x00010a0a0b14) */

void FUN_10a0a054c(ulong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int *piVar3;
  uint *puVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  lVar19 = *(long *)(param_1 + 8);
  _pthread_self();
  uVar12 = (param_1 ^ param_1 >> 0x21) * -0xae502812aa7333;
  uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
  uVar12 = uVar12 ^ uVar12 >> 0x21;
  puVar23 = *(ulong **)(lVar19 + 0x130);
  for (puVar13 = puVar23; puVar13 != (ulong *)0x0; puVar13 = (ulong *)puVar13[2]) {
    uVar17 = uVar12;
    do {
      uVar17 = uVar17 & *puVar13 - 1;
      uVar18 = *(ulong *)(puVar13[1] + uVar17 * 0x10);
      if (uVar18 == param_1) {
        puVar21 = *(undefined8 **)(puVar13[1] + uVar17 * 0x10 + 8);
        if (puVar13 == puVar23) goto LAB_10a0a0770;
        goto LAB_10a0a0724;
      }
      uVar17 = uVar17 + 1;
    } while (uVar18 != uRam00000001137e9400);
  }
  plVar11 = (long *)(lVar19 + 0x100);
  puVar13 = (ulong *)(lVar19 + 0x138);
  do {
    uVar17 = *puVar13 + 1;
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar13,0x10);
    if (bVar8) {
      *puVar13 = uVar17;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  pbVar1 = (byte *)(lVar19 + 0x358);
  while( true ) {
    if (*puVar23 >> 1 <= uVar17) {
      do {
        bVar5 = *pbVar1;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar8) {
          *pbVar1 = 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((bVar5 & 1) == 0) {
        puVar25 = *(ulong **)(lVar19 + 0x130);
        puVar23 = puVar25;
        uVar18 = *puVar25;
        if (*puVar25 >> 1 <= uVar17) {
          do {
            uVar24 = uVar18;
            uVar18 = uVar24 << 1;
          } while ((uVar24 & 0x7fffffffffffffff) <= uVar17);
          puVar23 = (ulong *)(uVar24 << 5 | 0x1f);
          _malloc();
          if (puVar23 == (ulong *)0x0) {
            do {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar13,0x10);
              if (bVar8) {
                *puVar13 = *puVar13 - 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            *pbVar1 = 0;
            return;
          }
          *puVar23 = uVar18;
          puVar23[1] = (long)(puVar23 + 3) + ((ulong)(uint)-(int)(puVar23 + 3) & 7);
          uVar24 = uRam00000001137e9400;
          if (uVar18 != 0) {
            lVar14 = 0;
            do {
              uVar16 = puVar23[1];
              *(undefined8 *)(uVar16 + lVar14) = 0;
              ((undefined8 *)(uVar16 + lVar14))[1] = 0;
              *(ulong *)(puVar23[1] + lVar14) = uVar24;
              lVar14 = lVar14 + 0x10;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          puVar23[2] = (ulong)puVar25;
          *(ulong **)(lVar19 + 0x130) = puVar23;
        }
        *pbVar1 = 0;
      }
    }
    if (uVar17 < (*puVar23 >> 1) + (*puVar23 >> 2)) break;
    puVar23 = *(ulong **)(lVar19 + 0x130);
  }
  puVar21 = (undefined8 *)*plVar11;
  puVar10 = puVar21;
  while (puVar10 != (undefined8 *)0x0) {
    if (((*(byte *)(puVar21 + 2) & 1) != 0) && ((*(byte *)(puVar21 + 9) & 1) == 0)) {
      pcVar2 = (char *)(puVar21 + 2);
      while (*pcVar2 == '\x01') {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
        if (bVar8) {
          *pcVar2 = '\0';
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB_10a0a08c4;
      }
      ClearExclusiveLocal();
    }
    puVar10 = (undefined8 *)puVar21[1];
    puVar21 = puVar10 + -1;
  }
  puVar21 = (undefined8 *)0x68;
  _malloc();
  if (puVar21 == (undefined8 *)0x0) {
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar13,0x10);
      if (bVar8) {
        *puVar13 = *puVar13 - 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    return;
  }
  *(undefined1 *)(puVar21 + 2) = 0;
  puVar21[4] = 0;
  puVar21[3] = 0;
  puVar21[6] = 0;
  puVar21[5] = 0;
  puVar21[8] = 0;
  puVar21[7] = 0;
  *(undefined1 *)(puVar21 + 9) = 0;
  *puVar21 = &PTR_FUN_110ba0ae8;
  puVar21[1] = 0;
  puVar21[10] = plVar11;
  puVar21[0xb] = 0x20;
  puVar21[0xc] = 0;
  FUN_10a0a0d74();
  piVar3 = (int *)(lVar19 + 0x108);
  do {
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar8) {
      *piVar3 = *piVar3 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar15 = *plVar11;
  lVar14 = 0;
  if (lVar15 != 0) {
    lVar14 = lVar15 + 8;
  }
  puVar21[1] = lVar14;
  lVar14 = *plVar11;
  if (lVar14 == lVar15) {
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = (long)puVar21;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_10a0a0888;
  }
  else {
    ClearExclusiveLocal();
LAB_10a0a0888:
    do {
      lVar15 = 0;
      if (lVar14 != 0) {
        lVar15 = lVar14 + 8;
      }
      puVar21[1] = lVar15;
      lVar15 = *plVar11;
      if (lVar15 == lVar14) {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar8) {
          *plVar11 = (long)puVar21;
          cVar6 = ExclusiveMonitorsStatus();
        }
        bVar8 = cVar6 == '\0';
      }
      else {
        bVar8 = false;
        ClearExclusiveLocal();
      }
      lVar14 = lVar15;
    } while (!bVar8);
  }
LAB_10a0a08c4:
  do {
    uVar17 = uRam00000001137e9400;
    uVar18 = *puVar23 - 1 & uVar12;
    puVar13 = (ulong *)(puVar23[1] + uVar18 * 0x10);
    do {
      if (*puVar13 != uVar17) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_10a0a08fc;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar13,0x10);
      if (bVar8) {
        *puVar13 = param_1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
LAB_10a0a08fc:
    uVar12 = uVar18 + 1;
  } while (!bVar8);
  *(undefined8 **)(puVar23[1] + uVar18 * 0x10 + 8) = puVar21;
LAB_10a0a0910:
  uVar12 = puVar21[4];
  if ((uVar12 & 0x1f) != 0) {
    puVar10 = (undefined8 *)(puVar21[8] + (uVar12 & 0x1f) * 0x18);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(puVar10,*param_2,param_2[1]);
    }
    else {
      uVar27 = param_2[1];
      uVar26 = *param_2;
      puVar10[2] = param_2[2];
      puVar10[1] = uVar27;
      *puVar10 = uVar26;
    }
    goto FUN_109d1f3d4;
  }
  if (0x7ffffffffffffffe < (puVar21[5] - uVar12) + 0x7fffffffffffffdf) {
    return;
  }
  plVar11 = (long *)puVar21[0xc];
  if (plVar11 == (long *)0x0) {
    return;
  }
  uVar17 = *plVar11 - 1U & plVar11[1] + 1U;
  puVar13 = *(ulong **)(plVar11[3] + uVar17 * 8);
  if ((*puVar13 == 1) || (puVar13[1] == 0)) {
    *puVar13 = uVar12;
    plVar11[1] = uVar17;
  }
  else {
    puVar10 = puVar21;
    FUN_10a0a0d74();
    if ((int)puVar10 == 0) {
      return;
    }
    plVar11 = (long *)puVar21[0xc];
    uVar17 = *plVar11 - 1U & plVar11[1] + 1U;
    puVar13 = *(ulong **)(plVar11[3] + uVar17 * 8);
    *puVar13 = uVar12;
    plVar11[1] = uVar17;
  }
  lVar14 = puVar21[10];
  if (*(ulong *)(lVar14 + 0x10) < *(ulong *)(lVar14 + 0x20)) {
    puVar23 = (ulong *)(lVar14 + 0x10);
    do {
      uVar17 = *puVar23;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar23,0x10);
      if (bVar8) {
        *puVar23 = uVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((*(ulong *)(lVar14 + 0x20) <= uVar17) || (*(long *)(lVar14 + 0x18) == 0))
    goto LAB_10a0a0a44;
    puVar22 = (undefined8 *)(*(long *)(lVar14 + 0x18) + uVar17 * 0x348);
  }
  else {
LAB_10a0a0a44:
    puVar23 = (ulong *)(lVar14 + 0x28);
    puVar10 = (undefined8 *)*puVar23;
joined_r0x00010a0a0a4c:
    puVar22 = puVar10;
    if (puVar22 != (undefined8 *)0x0) {
      uVar7 = *(uint *)(puVar22 + 0x66);
      if ((uVar7 & 0x7fffffff) == 0) {
LAB_10a0a0ab0:
        puVar10 = (undefined8 *)*puVar23;
      }
      else {
        puVar4 = (uint *)(puVar22 + 0x66);
        do {
          if (*puVar4 != uVar7) {
            ClearExclusiveLocal();
            goto LAB_10a0a0ab0;
          }
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar8) {
            *puVar4 = uVar7 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        uVar17 = puVar22[0x67];
        do {
          puVar10 = (undefined8 *)*puVar23;
          if (puVar10 != puVar22) {
            bVar8 = false;
            ClearExclusiveLocal();
            goto LAB_10a0a0acc;
          }
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar23,0x10);
          if (bVar8) {
            *puVar23 = uVar17;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar8 = true;
LAB_10a0a0acc:
        if (bVar8) goto LAB_10a0a0b44;
        do {
          uVar7 = *puVar4;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar8) {
            *puVar4 = uVar7 - 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (uVar7 == 0x80000001) {
          uVar17 = *puVar23;
          do {
            puVar22[0x67] = uVar17;
            *(undefined4 *)(puVar22 + 0x66) = 1;
            while (uVar18 = *puVar23, uVar18 == uVar17) {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar23,0x10);
              if (bVar8) {
                *puVar23 = (ulong)puVar22;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto joined_r0x00010a0a0a4c;
            }
            ClearExclusiveLocal();
            do {
              uVar7 = *puVar4;
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar8) {
                *puVar4 = uVar7 + 0x7fffffff;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            uVar17 = uVar18;
          } while (uVar7 == 1);
        }
      }
      goto joined_r0x00010a0a0a4c;
    }
    puVar22 = (undefined8 *)0x348;
    _malloc();
    if (puVar22 == (undefined8 *)0x0) {
      plVar11 = (long *)puVar21[0xc];
      plVar11[1] = *plVar11 - 1U & plVar11[1] - 1U;
      puVar13[1] = 0;
      return;
    }
    puVar22[0x67] = 0;
    puVar22[0x61] = 0;
    puVar22[0x60] = 0;
    puVar22[99] = 0;
    puVar22[0x62] = 0;
    puVar22[0x65] = 0;
    puVar22[100] = 0;
    *(undefined4 *)(puVar22 + 0x66) = 0;
    *(undefined1 *)(puVar22 + 0x68) = 1;
  }
LAB_10a0a0b94:
  puVar22[0x61] = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar22,*param_2,param_2[1]);
  }
  else {
    uVar27 = param_2[1];
    uVar26 = *param_2;
    puVar22[2] = param_2[2];
    puVar22[1] = uVar27;
    *puVar22 = uVar26;
  }
  puVar13[1] = (ulong)puVar22;
  puVar21[8] = puVar22;
FUN_109d1f3d4:
  puVar21[4] = uVar12 + 1;
  plVar11 = *(long **)(lVar19 + 0x368);
  do {
    lVar19 = *plVar11;
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar8) {
      *plVar11 = lVar19 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  uVar12 = 1;
  if (-1 < lVar19) {
    uVar12 = -lVar19;
  }
  bVar8 = true;
  bVar9 = false;
  if (0 < (long)uVar12) {
    bVar9 = SBORROW4((int)uVar12,1);
    bVar8 = (int)uVar12 + -1 < 0;
  }
  if (bVar8 == bVar9) {
    do {
      do {
        iVar20 = (int)plVar11[1];
        _semaphore_signal();
      } while (iVar20 != 0);
      iVar20 = (int)uVar12;
      uVar7 = iVar20 - 1;
      uVar12 = (ulong)uVar7;
    } while (uVar7 != 0 && 0 < iVar20);
  }
  return;
LAB_10a0a0724:
  do {
    uVar17 = uRam00000001137e9400;
    uVar18 = *puVar23 - 1 & uVar12;
    puVar13 = (ulong *)(puVar23[1] + uVar18 * 0x10);
    do {
      if (*puVar13 != uVar17) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_10a0a075c;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar13,0x10);
      if (bVar8) {
        *puVar13 = param_1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
LAB_10a0a075c:
    uVar12 = uVar18 + 1;
  } while (!bVar8);
  *(undefined8 **)(puVar23[1] + uVar18 * 0x10 + 8) = puVar21;
LAB_10a0a0770:
  if (puVar21 == (undefined8 *)0x0) {
    return;
  }
  goto LAB_10a0a0910;
LAB_10a0a0b44:
  do {
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar8) {
      *puVar4 = *puVar4 - 2;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  goto LAB_10a0a0b94;
}



/* Entry: 10a0a0c94; end: 10a0a0ccf;  */

long FUN_10a0a0c94(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba0b10);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0a0cd0; end: 10a0a0d73;  */

undefined ** FUN_10a0a0cd0(void)

{
  return &PTR_DAT_110ba0b10;
}



/* Entry: 10a0a0d74; end: 10a0a0e8b;  */

bool FUN_10a0a0d74(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  plVar11 = *(long **)(param_1 + 0x60);
  if (plVar11 == (long *)0x0) {
    lVar12 = 0;
    lVar10 = *(long *)(param_1 + 0x58);
    lVar13 = lVar10;
  }
  else {
    lVar12 = *plVar11;
    lVar10 = *(long *)(param_1 + 0x58);
    lVar13 = lVar12;
  }
  plVar3 = (long *)(lVar10 * 8 + lVar13 * 0x10 + 0x36);
  _malloc();
  if (plVar3 != (long *)0x0) {
    plVar3[1] = 0;
    puVar1 = (undefined8 *)((long)(plVar3 + 5) + ((ulong)(uint)-(int)(plVar3 + 5) & 7));
    puVar4 = puVar1 + lVar13 * 2;
    lVar2 = (long)puVar4 + ((ulong)(uint)-(int)puVar4 & 7);
    if (plVar11 != (long *)0x0) {
      uVar6 = plVar11[1];
      lVar7 = *plVar11;
      lVar8 = plVar11[3];
      uVar9 = uVar6;
      do {
        uVar9 = uVar9 + 1 & lVar7 - 1U;
        *puVar4 = *(undefined8 *)(lVar8 + uVar9 * 8);
        puVar4 = puVar4 + 1;
      } while (uVar9 != uVar6);
    }
    if (lVar13 != 0) {
      puVar5 = (undefined8 *)(lVar2 + lVar12 * 8);
      puVar4 = puVar1;
      do {
        puVar4[1] = 0;
        *puVar4 = 1;
        *puVar5 = puVar4;
        puVar4 = puVar4 + 2;
        lVar13 = lVar13 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar13 != 0);
    }
    plVar3[3] = lVar2;
    plVar3[4] = (long)plVar11;
    plVar3[2] = (long)puVar1;
    *plVar3 = lVar10;
    plVar3[1] = lVar10 - 1U & lVar12 - 1U;
    *(long **)(param_1 + 0x60) = plVar3;
    *(long *)(param_1 + 0x58) = lVar10 << 1;
  }
  return plVar3 != (long *)0x0;
}



/* Entry: 10a0a0e8c; end: 10a0a0e8f;  */

/* WARNING: Removing unreachable block (ram,0x00010a0a0f70) */

undefined8 * FUN_10a0a0e8c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  *param_1 = &PTR_FUN_110ba0ae8;
  uVar10 = param_1[4];
  uVar11 = param_1[5];
  if (uVar11 != uVar10) {
    lVar9 = 0;
    uVar12 = uVar11;
    do {
      if ((lVar9 == 0) || ((uVar12 & 0x1f) == 0)) {
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x340) == '\x01') {
            _free(lVar9);
          }
          else {
            plVar6 = (long *)(param_1[10] + 0x28);
            piVar1 = (int *)(lVar9 + 0x330);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar2 + -0x80000000;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 == 0) {
              lVar4 = *plVar6;
              do {
                *(long *)(lVar9 + 0x338) = lVar4;
                *(undefined4 *)(lVar9 + 0x330) = 1;
                while (lVar8 = *plVar6, lVar8 == lVar4) {
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar7) {
                    *plVar6 = lVar9;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_10a0a0f9c;
                }
                ClearExclusiveLocal();
                do {
                  iVar2 = *piVar1;
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar2 + 0x7fffffff;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                lVar4 = lVar8;
              } while (iVar2 == 1);
            }
          }
        }
LAB_10a0a0f9c:
        plVar6 = (long *)param_1[0xc];
        lVar4 = (uVar12 & 0xffffffffffffffe0) - **(long **)(plVar6[3] + plVar6[1] * 8);
        lVar9 = lVar4 + 0x1f;
        if (-1 < lVar4) {
          lVar9 = lVar4;
        }
        lVar9 = *(long *)(*(long *)(plVar6[3] + (plVar6[1] + (lVar9 >> 5) & *plVar6 - 1U) * 8) + 8);
      }
      puVar5 = (undefined8 *)(lVar9 + (uVar12 & 0x1f) * 0x18);
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        __ZdlPv(*puVar5);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar10);
  }
  lVar9 = param_1[8];
  if ((lVar9 != 0) && (uVar11 != uVar10 || (uVar10 & 0x1f) != 0)) {
    if (*(char *)(lVar9 + 0x340) == '\x01') {
      _free();
    }
    else {
      plVar6 = (long *)(param_1[10] + 0x28);
      piVar1 = (int *)(lVar9 + 0x330);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -0x80000000;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 0) {
        lVar4 = *plVar6;
        do {
          *(long *)(lVar9 + 0x338) = lVar4;
          *(undefined4 *)(lVar9 + 0x330) = 1;
          do {
            lVar8 = *plVar6;
            if (lVar8 != lVar4) {
              bVar7 = false;
              ClearExclusiveLocal();
              goto LAB_10a0a1090;
            }
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar7) {
              *plVar6 = lVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar7 = true;
LAB_10a0a1090:
          if (bVar7) break;
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar2 + 0x7fffffff;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar4 = lVar8;
        } while (iVar2 == 1);
      }
    }
  }
  lVar9 = param_1[0xc];
  while (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x20);
    _free();
  }
  return param_1;
}



/* Entry: 10a0a0e90; end: 10a0a0ea3;  */

void FUN_10a0a0e90(void)

{
  FUN_10a0a0ea4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0a0ea4; end: 10a0a10e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a0a0f70) */

undefined8 * FUN_10a0a0ea4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  *param_1 = &PTR_FUN_110ba0ae8;
  uVar10 = param_1[4];
  uVar11 = param_1[5];
  if (uVar11 != uVar10) {
    lVar9 = 0;
    uVar12 = uVar11;
    do {
      if ((lVar9 == 0) || ((uVar12 & 0x1f) == 0)) {
        if (lVar9 != 0) {
          if (*(char *)(lVar9 + 0x340) == '\x01') {
            _free(lVar9);
          }
          else {
            plVar6 = (long *)(param_1[10] + 0x28);
            piVar1 = (int *)(lVar9 + 0x330);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar2 + -0x80000000;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 == 0) {
              lVar4 = *plVar6;
              do {
                *(long *)(lVar9 + 0x338) = lVar4;
                *(undefined4 *)(lVar9 + 0x330) = 1;
                while (lVar8 = *plVar6, lVar8 == lVar4) {
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar7) {
                    *plVar6 = lVar9;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_10a0a0f9c;
                }
                ClearExclusiveLocal();
                do {
                  iVar2 = *piVar1;
                  cVar3 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar7) {
                    *piVar1 = iVar2 + 0x7fffffff;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                lVar4 = lVar8;
              } while (iVar2 == 1);
            }
          }
        }
LAB_10a0a0f9c:
        plVar6 = (long *)param_1[0xc];
        lVar4 = (uVar12 & 0xffffffffffffffe0) - **(long **)(plVar6[3] + plVar6[1] * 8);
        lVar9 = lVar4 + 0x1f;
        if (-1 < lVar4) {
          lVar9 = lVar4;
        }
        lVar9 = *(long *)(*(long *)(plVar6[3] + (plVar6[1] + (lVar9 >> 5) & *plVar6 - 1U) * 8) + 8);
      }
      puVar5 = (undefined8 *)(lVar9 + (uVar12 & 0x1f) * 0x18);
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        __ZdlPv(*puVar5);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar10);
  }
  lVar9 = param_1[8];
  if ((lVar9 != 0) && (uVar11 != uVar10 || (uVar10 & 0x1f) != 0)) {
    if (*(char *)(lVar9 + 0x340) == '\x01') {
      _free();
    }
    else {
      plVar6 = (long *)(param_1[10] + 0x28);
      piVar1 = (int *)(lVar9 + 0x330);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -0x80000000;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 == 0) {
        lVar4 = *plVar6;
        do {
          *(long *)(lVar9 + 0x338) = lVar4;
          *(undefined4 *)(lVar9 + 0x330) = 1;
          do {
            lVar8 = *plVar6;
            if (lVar8 != lVar4) {
              bVar7 = false;
              ClearExclusiveLocal();
              goto LAB_10a0a1090;
            }
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar7) {
              *plVar6 = lVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar7 = true;
LAB_10a0a1090:
          if (bVar7) break;
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar2 + 0x7fffffff;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar4 = lVar8;
        } while (iVar2 == 1);
      }
    }
  }
  lVar9 = param_1[0xc];
  while (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x20);
    _free();
  }
  return param_1;
}



/* Entry: 10a0a10e8; end: 10a0a116b;  */

long FUN_10a0a10e8(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar4 = 0;
    do {
      lVar2 = lVar3;
      if (*(char *)(lVar3 + 0x48) == '\x01') {
        FUN_10a0a116c();
      }
      else {
        func_0x00010a0a1378(lVar3,param_2,param_3 - lVar4);
      }
      lVar4 = lVar2 + lVar4;
      lVar2 = param_3;
    } while ((lVar4 != param_3) &&
            (plVar1 = (long *)(lVar3 + 8), lVar3 = *plVar1 + -8, lVar2 = lVar4, *plVar1 != 0));
  }
  return lVar2;
}



/* Entry: 10a0a116c; end: 10a0a1617;  */

ulong FUN_10a0a116c(long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar3 = (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30)) + *(long *)(param_1 + 0x20);
  if ((long)uVar3 < 1) {
    return 0;
  }
  plVar9 = (long *)(param_1 + 0x38);
  plVar1 = (long *)(param_1 + 0x30);
  if (param_3 <= uVar3) {
    uVar3 = param_3;
  }
  DataMemoryBarrier(2,1);
  do {
    lVar10 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar10 + uVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar12 = (*(long *)(param_1 + 0x38) - lVar10) + *(long *)(param_1 + 0x20);
  if ((long)uVar12 < 1) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + uVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar6 = 0;
  }
  else {
    uVar6 = uVar3;
    if (uVar12 <= uVar3) {
      uVar6 = uVar12;
    }
    if (uVar12 < uVar3) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = *plVar9 + (uVar3 - uVar6);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar2 = (ulong *)(param_1 + 0x28);
    do {
      uVar12 = *puVar2;
      uVar3 = uVar12 + uVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = uVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar9 = *(long **)(param_1 + 0x58);
    lVar8 = (uVar12 & 0xffffffffffffffe0) - *(long *)(plVar9[2] + plVar9[1] * 0x10);
    lVar10 = lVar8 + 0x1f;
    if (-1 < lVar8) {
      lVar10 = lVar8;
    }
    lVar8 = *plVar9;
    uVar11 = plVar9[1] + (lVar10 >> 5) & lVar8 - 1U;
    do {
      uVar14 = (uVar12 & 0xffffffffffffffe0) + 0x20;
      uVar13 = uVar3;
      if (uVar3 - uVar14 < 0x8000000000000001) {
        uVar13 = uVar14;
      }
      lVar10 = uVar12 - uVar13;
      if (lVar10 == 0) {
        DataMemoryBarrier(2,3);
        uVar13 = uVar12;
      }
      else {
        lVar8 = *(long *)(plVar9[2] + uVar11 * 0x10 + 8);
        uVar14 = uVar12;
        do {
          puVar15 = (undefined8 *)*param_2;
          *param_2 = (long)(puVar15 + 3);
          if (*(char *)((long)puVar15 + 0x17) < '\0') {
            __ZdlPv(*puVar15);
          }
          puVar7 = (undefined8 *)(lVar8 + (uVar14 & 0x1f) * 0x18);
          uVar17 = puVar7[1];
          uVar16 = *puVar7;
          puVar15[2] = puVar7[2];
          puVar15[1] = uVar17;
          *puVar15 = uVar16;
          *(undefined1 *)((long)puVar7 + 0x17) = 0;
          *(undefined1 *)puVar7 = 0;
          uVar14 = uVar14 + 1;
        } while (uVar13 != uVar14);
        DataMemoryBarrier(2,3);
        do {
          *(undefined1 *)((lVar8 - (uVar12 & 0x1f)) + 0x330 + lVar10) = 1;
          bVar5 = lVar10 != -1;
          lVar10 = lVar10 + 1;
        } while (bVar5);
        lVar8 = *plVar9;
      }
      uVar11 = lVar8 - 1U & uVar11 + 1;
      uVar12 = uVar13;
    } while (uVar13 != uVar3);
  }
  return uVar6;
}



/* Entry: 10a0a1618; end: 10a0a16cf;  */

void FUN_10a0a1618(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_1 = param_2;
  if (lVar3 != 0) {
    lVar1 = *(long *)(lVar3 + 0x368);
    *(undefined8 *)(lVar3 + 0x368) = 0;
    if (lVar1 != 0) {
      (**(code **)(lVar3 + 0x370))();
    }
    FUN_10a09abb8(lVar3 + 0x100);
    func_0x00010a0a049c(lVar3 + 0xf0);
    if (*(char *)(lVar3 + 0xef) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar3 + 0xd8));
    }
    if (*(char *)(lVar3 + 0xd7) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar3 + 0xc0));
    }
    FUN_10a09ac6c(lVar3 + 0xa8);
    func_0x00010a09ae98(lVar3 + 0x80);
    __ZNSt3__15mutexD1Ev(lVar3 + 0x38);
    plVar2 = *(long **)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    FUN_10a09a130(lVar3 + 0x18);
    func_0x00010a09dbbc(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a0a16d0; end: 10a0a1727;  */

long FUN_10a0a16d0(long param_1)

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



/* Entry: 10a0a1728; end: 10a0a17d3;  */

void FUN_10a0a1728(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = **(long **)*param_1;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar5 = puVar4 + 3;
  *puVar4 = &PTR_FUN_110ba0b30;
  FUN_10a30bcc0();
  plVar6 = *(long **)(lVar7 + 0x20);
  *(undefined8 **)(lVar7 + 0x18) = puVar5;
  *(undefined8 **)(lVar7 + 0x20) = puVar4;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10a0a17d4; end: 10a0a17e3;  */

void FUN_10a0a17d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba0b30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0a17e4; end: 10a0a1803;  */

void FUN_10a0a17e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba0b30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0a1804; end: 10a0a181b;  */

long FUN_10a0a1804(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plStack_28;
  
  FUN_10a30c104(&plStack_28);
  FUN_109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  func_0x00010a225c4c(param_1 + 0x28);
  func_0x00010a061620(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = 0;
  if (lVar4 != 0) {
    FUN_10a31ed38();
  }
  return param_1 + 0x18;
}



/* Entry: 10a0a181c; end: 10a0a1843;  */

void FUN_10a0a181c(void)

{
  undefined *puVar1;
  long *plVar2;
  
  func_0x000105688514(&UNK_10f636cfa);
  puVar1 = &UNK_10f636d17;
  func_0x000105688514();
  plVar2 = *(long **)(puVar1 + 0x88);
  FUN_10a0a1874();
                    /* WARNING: Could not recover jumptable at 0x00010a0a1870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0);
  return;
}



/* Entry: 10a0a1844; end: 10a0a1873;  */

void FUN_10a0a1844(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x88);
  FUN_10a0a1874();
                    /* WARNING: Could not recover jumptable at 0x00010a0a1870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a0a1874; end: 10a0a1a8f;  */

void FUN_10a0a1874(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 **ppuVar4;
  long *plStack_a8;
  undefined8 **ppuStack_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0xd0) == 1) {
    *(int *)(lVar3 + 0xd0) = 2;
    func_0x000109375044(*(undefined8 *)(lVar3 + 0xe0));
  }
  (**(code **)(**(long **)(lVar3 + 8) + 0x28))(&puStack_58,*(long **)(lVar3 + 8),param_1[1]);
  ppuVar4 = (undefined8 **)(param_1 + 2);
  puStack_60 = *ppuVar4;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar2 = 0;
  (**(code **)(**(long **)(puStack_60[5] + 0x28) + 0x30))
            (*(long **)(puStack_60[5] + 0x28),0,0,0,0,&puStack_60,1);
  func_0x00010a0a1b68(ppuVar4);
  FUN_10a08e3e0(param_1 + 4);
  if (puStack_58 != (undefined8 *)0x0) {
    ppuVar4 = &puStack_58;
    (*(code *)puStack_58[2])(auStack_50);
    if (puStack_58 != (undefined8 *)0x0) {
      (*(code *)*puStack_58)(auStack_50);
    }
  }
  while( true ) {
    plVar1 = param_1;
    (*(code *)param_1[0x10])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if ((int)uVar2 == 0) break;
    if (puStack_58 != (undefined8 *)0x0) {
      ppuVar4 = &puStack_58;
      (*(code *)puStack_58[2])(auStack_50);
      if (puStack_58 != (undefined8 *)0x0) {
        (*(code *)*puStack_58)(auStack_50);
      }
    }
    ___cxa_begin_catch(plVar1);
    ___cxa_end_catch();
  }
  __Unwind_Resume(plVar1);
  func_0x000104bd46a0();
  if (plVar1 != (long *)0x0) {
    uStack_88 = 0x10a0a1a90;
    ppuStack_a0 = ppuVar4;
    plStack_98 = param_1;
    puStack_90 = &stack0xfffffffffffffff0;
    if (plVar1[0xd] != 0) {
      __ZdlPv(plVar1[0xb] + -8);
    }
    plStack_a8 = plVar1 + 8;
    FUN_10a09cf7c(&plStack_a8);
    plStack_a8 = plVar1 + 4;
    func_0x00010a09d0e8(&plStack_a8);
    func_0x00010a054cfc(plVar1 + 2);
    __ZdlPv(plVar1);
  }
  return;
}



/* Entry: 10a0a1a90; end: 10a0a1c27;  */

void FUN_10a0a1a90(long param_1)

{
  long lStack_28;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x68) != 0) {
      __ZdlPv(*(long *)(param_1 + 0x58) + -8);
    }
    lStack_28 = param_1 + 0x40;
    FUN_10a09cf7c(&lStack_28);
    lStack_28 = param_1 + 0x20;
    func_0x00010a09d0e8(&lStack_28);
    func_0x00010a054cfc(param_1 + 0x10);
    __ZdlPv(param_1);
  }
  return;
}



/* Entry: 10a0a1c28; end: 10a0a1c37;  */

void FUN_10a0a1c28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba0f28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0a1c38; end: 10a0a1c57;  */

void FUN_10a0a1c38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba0f28;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0a1c58; end: 10a0a1c67;  */

void FUN_10a0a1c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a0a1c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a0a1c68; end: 10a0a1cbf;  */

void FUN_10a0a1c68(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x78;
  __Znwm();
  FUN_10a0a1cc0();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a0a1cc0; end: 10a0a1d0b;  */

undefined8 * FUN_10a0a1cc0(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba0f28;
  FUN_10a316140(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10a0a1d0c; end: 10a0a1dfb;  */

undefined8 * FUN_10a0a1d0c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plStack_38;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  plVar2 = (long *)0x1008;
  __Znwm();
  *plVar2 = 0;
  plStack_38 = plVar2;
  FUN_10a0a1dfc(param_1 + 1,&plStack_38);
  plVar2 = plStack_38;
  plStack_38 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    if (*plVar2 != 0) {
      lVar5 = *plVar2 << 5;
      plVar1 = plVar2;
      do {
        plVar3 = (long *)plVar1[4];
        if (plVar1 + 1 == plVar3) {
          lVar4 = 0x20;
LAB_10a0a1d88:
          (**(code **)(*plVar3 + lVar4))();
        }
        else if (plVar3 != (long *)0x0) {
          lVar4 = 0x28;
          goto LAB_10a0a1d88;
        }
        lVar5 = lVar5 + -0x20;
        plVar1 = plVar1 + 4;
      } while (lVar5 != 0);
    }
    __ZdlPv(plVar2);
  }
  return param_1;
}



/* Entry: 10a0a1dfc; end: 10a0a1edf;  */

void FUN_10a0a1dfc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar8 = *param_2;
    *param_2 = 0;
    puVar20 = puVar2 + 1;
    *puVar2 = uVar8;
LAB_10a0a1ebc:
    param_1[1] = (long)puVar20;
    return;
  }
  lVar18 = *param_1;
  lVar19 = (long)puVar2 - lVar18;
  uVar1 = (lVar19 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar9 = param_1[2] - lVar18;
    uVar12 = (long)uVar9 >> 2;
    if (uVar12 <= uVar1) {
      uVar12 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 >> 0x3d == 0) {
      lVar6 = uVar12 << 3;
      __Znwm();
      puVar2 = (undefined8 *)(lVar6 + lVar19);
      uVar8 = *param_2;
      *param_2 = 0;
      puVar20 = puVar2 + 1;
      *puVar2 = uVar8;
      _memcpy(puVar2 + -(lVar19 >> 3),lVar18,lVar19);
      *param_1 = (long)(puVar2 + -(lVar19 >> 3));
      param_1[1] = (long)puVar20;
      param_1[2] = lVar6 + uVar12 * 8;
      if (lVar18 != 0) {
        __ZdlPv(lVar18);
      }
      goto LAB_10a0a1ebc;
    }
  }
  else {
    FUN_10a0a1ee0();
  }
  func_0x000109ffded8();
  puVar7 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
  uVar1 = *puVar7;
  uVar12 = puVar7[1];
  uVar9 = puVar7[2];
  puVar7[2] = (ulong)param_2;
  func_0x000107c28444();
  if (uVar9 != 0) {
    uVar10 = 0;
    uVar11 = puVar7[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar10)) {
        lVar18 = *(long *)(uVar12 + uVar10 * 8);
        uVar13 = (long)&PTR_LOOP_110c8acd8 + lVar18;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar13;
        uVar13 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar13 * -0x622015f714c7d297) +
                 lVar18;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar13;
        uVar15 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar13 * -0x622015f714c7d297;
        uVar13 = *puVar7;
        uVar14 = puVar7[2];
        uVar16 = (uVar15 >> 7 ^ uVar13 >> 0xc) & uVar14;
        uVar8 = *(undefined8 *)(uVar13 + uVar16);
        uVar17 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar8 >> 0x10
                                                                               ) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
        if (uVar17 == 0) {
          lVar18 = 8;
          do {
            uVar16 = uVar16 + lVar18 & uVar14;
            uVar8 = *(undefined8 *)(uVar13 + uVar16);
            uVar17 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar8 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar8 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar8 >> 8) < -1),
                                                           -((char)uVar8 < -1))))))));
            lVar18 = lVar18 + 8;
          } while (uVar17 == 0);
        }
        uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
        uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
        uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
        uVar16 = uVar16 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) & uVar14;
        bVar3 = (byte)uVar15 & 0x7f;
        *(byte *)(uVar13 + uVar16) = bVar3;
        *(byte *)(uVar13 + (uVar16 - 7 & uVar14) + (uVar14 & 7)) = bVar3;
        *(undefined8 *)(uVar11 + uVar16 * 8) = *(undefined8 *)(uVar12 + uVar10 * 8);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10a0a1ee0; end: 10a0a1ef3;  */

void FUN_10a0a1ee0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  puVar6 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  uVar15 = puVar6[2];
  puVar6[2] = param_2;
  func_0x000107c28444();
  if (uVar15 != 0) {
    uVar7 = 0;
    uVar8 = puVar6[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar7)) {
        lVar9 = *(long *)(uVar2 + uVar7 * 8);
        uVar10 = (long)&PTR_LOOP_110c8acd8 + lVar9;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar10;
        uVar10 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar10 * -0x622015f714c7d297) +
                 lVar9;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar10;
        uVar12 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar10 * -0x622015f714c7d297;
        uVar10 = *puVar6;
        uVar11 = puVar6[2];
        uVar13 = (uVar12 >> 7 ^ uVar10 >> 0xc) & uVar11;
        uVar16 = *(undefined8 *)(uVar10 + uVar13);
        uVar14 = CONCAT17(-((char)((ulong)uVar16 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar16 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar16 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar16 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar16 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar16 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar16 >> 8) < -1),-((char)uVar16 < -1))))))));
        if (uVar14 == 0) {
          lVar9 = 8;
          do {
            uVar13 = uVar13 + lVar9 & uVar11;
            uVar16 = *(undefined8 *)(uVar10 + uVar13);
            uVar14 = CONCAT17(-((char)((ulong)uVar16 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar16 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar16 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar16 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar16 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar16 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar16 >> 8) < -1),
                                                           -((char)uVar16 < -1))))))));
            lVar9 = lVar9 + 8;
          } while (uVar14 == 0);
        }
        uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) & uVar11;
        bVar3 = (byte)uVar12 & 0x7f;
        *(byte *)(uVar10 + uVar13) = bVar3;
        *(byte *)(uVar10 + (uVar13 - 7 & uVar11) + (uVar11 & 7)) = bVar3;
        *(undefined8 *)(uVar8 + uVar13 * 8) = *(undefined8 *)(uVar2 + uVar7 * 8);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10a0a1ef4; end: 10a0a2013;  */

void FUN_10a0a1ef4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar14 = param_1[2];
  param_1[2] = param_2;
  func_0x000107c28444();
  if (uVar14 != 0) {
    uVar6 = 0;
    uVar7 = param_1[1];
    do {
      if (-1 < *(char *)(uVar1 + uVar6)) {
        lVar8 = *(long *)(uVar2 + uVar6 * 8);
        uVar9 = (long)&PTR_LOOP_110c8acd8 + lVar8;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar9;
        uVar9 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297) +
                lVar8;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar9;
        uVar11 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar9 * -0x622015f714c7d297;
        uVar9 = *param_1;
        uVar10 = param_1[2];
        uVar12 = (uVar11 >> 7 ^ uVar9 >> 0xc) & uVar10;
        uVar15 = *(undefined8 *)(uVar9 + uVar12);
        uVar13 = CONCAT17(-((char)((ulong)uVar15 >> 0x38) < -1),
                          CONCAT16(-((char)((ulong)uVar15 >> 0x30) < -1),
                                   CONCAT15(-((char)((ulong)uVar15 >> 0x28) < -1),
                                            CONCAT14(-((char)((ulong)uVar15 >> 0x20) < -1),
                                                     CONCAT13(-((char)((ulong)uVar15 >> 0x18) < -1),
                                                              CONCAT12(-((char)((ulong)uVar15 >>
                                                                               0x10) < -1),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar15 >> 8) < -1),-((char)uVar15 < -1))))))));
        if (uVar13 == 0) {
          lVar8 = 8;
          do {
            uVar12 = uVar12 + lVar8 & uVar10;
            uVar15 = *(undefined8 *)(uVar9 + uVar12);
            uVar13 = CONCAT17(-((char)((ulong)uVar15 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar15 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar15 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar15 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar15 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar15 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar15 >> 8) < -1),
                                                           -((char)uVar15 < -1))))))));
            lVar8 = lVar8 + 8;
          } while (uVar13 == 0);
        }
        uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar10;
        bVar3 = (byte)uVar11 & 0x7f;
        *(byte *)(uVar9 + uVar12) = bVar3;
        *(byte *)(uVar9 + (uVar12 - 7 & uVar10) + (uVar10 & 7)) = bVar3;
        *(undefined8 *)(uVar7 + uVar12 * 8) = *(undefined8 *)(uVar2 + uVar6 * 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(uVar1 - 8);
    return;
  }
  return;
}



/* Entry: 10a0a2014; end: 10a0a20a3;  */

undefined1  [16] FUN_10a0a2014(ulong *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar8;
  byte bVar15;
  undefined1 auVar16 [16];
  
  lVar3 = 0;
  uVar4 = *param_1;
  uVar6 = uVar4 >> 0xc ^ param_3 >> 7;
  bVar5 = (byte)param_3 & 0x7f;
  while( true ) {
    uVar6 = uVar6 & param_1[2];
    uVar8 = *(undefined8 *)(uVar4 + uVar6);
    bVar9 = (byte)((ulong)uVar8 >> 8);
    bVar10 = (byte)((ulong)uVar8 >> 0x10);
    bVar11 = (byte)((ulong)uVar8 >> 0x18);
    bVar12 = (byte)((ulong)uVar8 >> 0x20);
    bVar13 = (byte)((ulong)uVar8 >> 0x28);
    bVar14 = (byte)((ulong)uVar8 >> 0x30);
    bVar15 = (byte)((ulong)uVar8 >> 0x38);
    for (uVar1 = CONCAT17(-(bVar15 == bVar5),
                          CONCAT16(-(bVar14 == bVar5),
                                   CONCAT15(-(bVar13 == bVar5),
                                            CONCAT14(-(bVar12 == bVar5),
                                                     CONCAT13(-(bVar11 == bVar5),
                                                              CONCAT12(-(bVar10 == bVar5),
                                                                       CONCAT11(-(bVar9 == bVar5),
                                                                                -((byte)uVar8 ==
                                                                                 bVar5)))))))) &
                 0x8080808080808080; uVar1 != 0; uVar1 = uVar1 - 1 & uVar1) {
      uVar7 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & param_1[2];
      if (*(long *)(param_1[1] + uVar7 * 8) == *param_2) {
        auVar16._8_8_ = param_1[1] + uVar7 * 8;
        auVar16._0_8_ = uVar4 + uVar7;
        return auVar16;
      }
    }
    if (CONCAT17(-(bVar15 == 0x80),
                 CONCAT16(-(bVar14 == 0x80),
                          CONCAT15(-(bVar13 == 0x80),
                                   CONCAT14(-(bVar12 == 0x80),
                                            CONCAT13(-(bVar11 == 0x80),
                                                     CONCAT12(-(bVar10 == 0x80),
                                                              CONCAT11(-(bVar9 == 0x80),
                                                                       -((byte)uVar8 == 0x80))))))))
        != 0) break;
    lVar3 = lVar3 + 8;
    uVar6 = lVar3 + uVar6;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 10a0a20a4; end: 10a0a2187;  */

undefined1  [16] FUN_10a0a20a4(ulong *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  byte bVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined8 uVar11;
  byte bVar18;
  undefined1 auVar19 [16];
  
  lVar7 = 0;
  uVar8 = *param_1;
  Hint_Prefetch(uVar8,0,2,0);
  lVar9 = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + lVar9;
  uVar4 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + lVar9) * -0x622015f714c7d297) + lVar9;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar4;
  uVar4 = SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar4 * -0x622015f714c7d297;
  bVar5 = (byte)uVar4 & 0x7f;
  uVar4 = uVar4 >> 7 ^ uVar8 >> 0xc;
  while( true ) {
    uVar4 = uVar4 & param_1[2];
    uVar11 = *(undefined8 *)(uVar8 + uVar4);
    bVar12 = (byte)((ulong)uVar11 >> 8);
    bVar13 = (byte)((ulong)uVar11 >> 0x10);
    bVar14 = (byte)((ulong)uVar11 >> 0x18);
    bVar15 = (byte)((ulong)uVar11 >> 0x20);
    bVar16 = (byte)((ulong)uVar11 >> 0x28);
    bVar17 = (byte)((ulong)uVar11 >> 0x30);
    bVar18 = (byte)((ulong)uVar11 >> 0x38);
    uVar10 = CONCAT17(-(bVar18 == bVar5),
                      CONCAT16(-(bVar17 == bVar5),
                               CONCAT15(-(bVar16 == bVar5),
                                        CONCAT14(-(bVar15 == bVar5),
                                                 CONCAT13(-(bVar14 == bVar5),
                                                          CONCAT12(-(bVar13 == bVar5),
                                                                   CONCAT11(-(bVar12 == bVar5),
                                                                            -((byte)uVar11 == bVar5)
                                                                           ))))))) &
             0x8080808080808080;
    if (uVar10 != 0) {
      do {
        uVar1 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        puVar6 = (ulong *)(uVar4 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]
                          );
        if (*(long *)(param_1[1] + (long)puVar6 * 8) == lVar9) {
          uVar11 = 0;
          goto LAB_10a0a217c;
        }
        uVar10 = uVar10 - 1 & uVar10;
      } while (uVar10 != 0);
    }
    if (CONCAT17(-(bVar18 == 0x80),
                 CONCAT16(-(bVar17 == 0x80),
                          CONCAT15(-(bVar16 == 0x80),
                                   CONCAT14(-(bVar15 == 0x80),
                                            CONCAT13(-(bVar14 == 0x80),
                                                     CONCAT12(-(bVar13 == 0x80),
                                                              CONCAT11(-(bVar12 == 0x80),
                                                                       -((byte)uVar11 == 0x80)))))))
                ) != 0) break;
    lVar7 = lVar7 + 8;
    uVar4 = lVar7 + uVar4;
  }
  FUN_10a0a2188();
  uVar11 = 1;
  puVar6 = param_1;
LAB_10a0a217c:
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = puVar6;
  return auVar19;
}



/* Entry: 10a0a2188; end: 10a0a2277;  */

void FUN_10a0a2188(ulong *param_1,ulong param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = (uVar3 >> 0xc ^ param_2 >> 7) & uVar4;
  uVar8 = *(undefined8 *)(uVar3 + uVar5);
  uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                   CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                            CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                     CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                              CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                       CONCAT12(-((char)((ulong)uVar8 >> 0x10) < -1)
                                                                ,CONCAT11(-((char)((ulong)uVar8 >> 8
                                                                                  ) < -1),
                                                                          -((char)uVar8 < -1))))))))
  ;
  if (uVar7 == 0) {
    lVar6 = 8;
    do {
      uVar5 = uVar5 + lVar6 & uVar4;
      uVar8 = *(undefined8 *)(uVar3 + uVar5);
      uVar7 = CONCAT17(-((char)((ulong)uVar8 >> 0x38) < -1),
                       CONCAT16(-((char)((ulong)uVar8 >> 0x30) < -1),
                                CONCAT15(-((char)((ulong)uVar8 >> 0x28) < -1),
                                         CONCAT14(-((char)((ulong)uVar8 >> 0x20) < -1),
                                                  CONCAT13(-((char)((ulong)uVar8 >> 0x18) < -1),
                                                           CONCAT12(-((char)((ulong)uVar8 >> 0x10) <
                                                                     -1),CONCAT11(-((char)((ulong)
                                                  uVar8 >> 8) < -1),-((char)uVar8 < -1))))))));
      lVar6 = lVar6 + 8;
    } while (uVar7 == 0);
  }
  uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
  uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
  uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
  puVar2 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar4);
  if ((*(long *)(uVar3 - 8) == 0) && (*(char *)(uVar3 + (long)puVar2) != -2)) {
    FUN_10a0a2278(param_1);
    puVar2 = param_1;
    func_0x000107c2b954(param_1,param_2);
    uVar3 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(uVar3 - 8) = *(long *)(uVar3 - 8) - (ulong)(*(char *)(uVar3 + (long)puVar2) == -0x80);
  bVar1 = (byte)param_2 & 0x7f;
  uVar4 = param_1[2];
  *(byte *)(uVar3 + (long)puVar2) = bVar1;
  *(byte *)(uVar3 + (uVar4 & (long)puVar2 - 7U) + (uVar4 & 7)) = bVar1;
  return;
}



/* Entry: 10a0a2278; end: 10a0a2317;  */

ulong * FUN_10a0a2278(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_1[2];
  if ((uVar10 < 9) || (uVar10 * 0x19 < param_1[3] << 5)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar17 = param_1[2];
      param_1[2] = uVar10 << 1 | 1;
      puVar8 = param_1;
      func_0x000107c28444();
      if (uVar17 != 0) {
        uVar10 = 0;
        uVar11 = param_1[1];
        do {
          if (-1 < *(char *)(uVar1 + uVar10)) {
            lVar9 = *(long *)(uVar2 + uVar10 * 8);
            uVar12 = (long)&PTR_LOOP_110c8acd8 + lVar9;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar12;
            uVar12 = (SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297)
                     + lVar9;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar12;
            uVar14 = SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297;
            uVar12 = *param_1;
            uVar13 = param_1[2];
            uVar15 = (uVar14 >> 7 ^ uVar12 >> 0xc) & uVar13;
            uVar18 = *(undefined8 *)(uVar12 + uVar15);
            uVar16 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) < -1),
                              CONCAT16(-((char)((ulong)uVar18 >> 0x30) < -1),
                                       CONCAT15(-((char)((ulong)uVar18 >> 0x28) < -1),
                                                CONCAT14(-((char)((ulong)uVar18 >> 0x20) < -1),
                                                         CONCAT13(-((char)((ulong)uVar18 >> 0x18) <
                                                                   -1),CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) < -1),
                                                           -((char)uVar18 < -1))))))));
            if (uVar16 == 0) {
              lVar9 = 8;
              do {
                uVar15 = uVar15 + lVar9 & uVar13;
                uVar18 = *(undefined8 *)(uVar12 + uVar15);
                uVar16 = CONCAT17(-((char)((ulong)uVar18 >> 0x38) < -1),
                                  CONCAT16(-((char)((ulong)uVar18 >> 0x30) < -1),
                                           CONCAT15(-((char)((ulong)uVar18 >> 0x28) < -1),
                                                    CONCAT14(-((char)((ulong)uVar18 >> 0x20) < -1),
                                                             CONCAT13(-((char)((ulong)uVar18 >> 0x18
                                                                              ) < -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar18 >> 0x10) < -1),
                                                  CONCAT11(-((char)((ulong)uVar18 >> 8) < -1),
                                                           -((char)uVar18 < -1))))))));
                lVar9 = lVar9 + 8;
              } while (uVar16 == 0);
            }
            uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar15 = uVar15 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar13;
            bVar3 = (byte)uVar14 & 0x7f;
            *(byte *)(uVar12 + uVar15) = bVar3;
            *(byte *)(uVar12 + (uVar15 - 7 & uVar13) + (uVar13 & 7)) = bVar3;
            *(undefined8 *)(uVar11 + uVar15 * 8) = *(undefined8 *)(uVar2 + uVar10 * 8);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar17);
        puVar8 = (ulong *)(uVar1 - 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(puVar8);
        return puVar8;
      }
      return puVar8;
    }
  }
  else {
    param_2 = (long *)&UNK_110ba0bb8;
    FUN_10ae6c914(param_1,&UNK_110ba0bb8,&stack0xffffffffffffffe0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  uVar10 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar10;
  uVar10 = (SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar10 * -0x622015f714c7d297) +
           *param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar10;
  return (ulong *)(SUB168(auVar7 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar10 * -0x622015f714c7d297);
}



/* Entry: 10a0a2318; end: 10a0a2357;  */

ulong FUN_10a0a2318(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (long)&PTR_LOOP_110c8acd8 + *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  uVar1 = (SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297) + *param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  return SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar1 * -0x622015f714c7d297;
}



/* Entry: 10a0a2358; end: 10a0a2363;  */

long FUN_10a0a2358(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  _abort();
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 10a0a2364; end: 10a0a23c7;  */

long FUN_10a0a2364(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 10a0a23c8; end: 10a0a23db;  */

void FUN_10a0a23c8(void)

{
  pcRam00000001132ff578 = FUN_10a0a23dc;
  return;
}



/* Entry: 10a0a23dc; end: 10a0a2443;  */

undefined8 *** FUN_10a0a23dc(undefined8 ***param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  int iVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined8 ***pppuStack_8e8;
  undefined8 **ppuStack_8e0;
  undefined8 **ppuStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined8 ***pppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  if ((param_2 == 0) || (uVar1 = (int)param_1 - 2, 2 < uVar1)) {
    return param_1;
  }
  ppppuVar7 = (undefined8 ****)(&PTR_PTR_110ba12e0)[uVar1];
  FUN_10ae030a0(0);
  ppppuVar6 = ppppuVar7;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = (undefined8 ***)0x0;
  if (ppppuVar6 != (undefined8 ****)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppppuVar6[0x13],ppppuVar6[0xf],
                  ppppuVar6 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    pppuVar9 = ppppuVar6[0x12];
    pppuVar8 = ppppuVar6[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    pppuStack_8e8 = ppppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(ppppuVar6 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    pppuStack_8b0 = ppppuVar6 + 0x10;
    pppuVar4 = *ppppuVar6;
    ppppuVar7 = &pppuStack_8e8;
    uStack_8f0 = uStack_898;
    ppuStack_8e0 = pppuVar8;
    ppuStack_8d8 = pppuVar9;
    uStack_8d0 = (ulong)(pppuVar9 != (undefined8 ***)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(pppuVar4,ppppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(pppuVar4);
    return pppuVar4;
  }
  return pppuVar4;
}



/* Entry: 10a0a2444; end: 10a0a2447;  */

undefined8 * FUN_10a0a2444(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba0be8;
  func_0x00010a09db0c(param_1 + 5);
  func_0x00010a09db0c(param_1 + 3);
  func_0x00010a0523dc(param_1 + 1);
  return param_1;
}



/* Entry: 10a0a2448; end: 10a0a245b;  */

void FUN_10a0a2448(void)

{
  FUN_10a0a245c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0a245c; end: 10a0a24a3;  */

undefined8 * FUN_10a0a245c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba0be8;
  func_0x00010a09db0c(param_1 + 5);
  func_0x00010a09db0c(param_1 + 3);
  func_0x00010a0523dc(param_1 + 1);
  return param_1;
}



/* Entry: 10a0a24a4; end: 10a0a255b;  */

void FUN_10a0a24a4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110ba0be8;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar5;
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
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[7] = 0x3f800000;
  param_1[10] = 0;
  param_1[9] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  return;
}



/* Entry: 10a0a255c; end: 10a0a257b;  */

void FUN_10a0a255c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba0c30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0a257c; end: 10a0a258b;  */

void FUN_10a0a257c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a0a2584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a0a258c; end: 10a0a25e3;  */

long FUN_10a0a258c(long param_1)

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



/* Entry: 10a0a25e4; end: 10a0a2647;  */

undefined8 * FUN_10a0a25e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110ba0f78;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a0a2648; end: 10a0a264b;  */

void FUN_10a0a2648(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a0a264c; end: 10a0a265f;  */

void FUN_10a0a264c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0a2660; end: 10a0a2677;  */

void FUN_10a0a2660(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a0a2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a0a2678; end: 10a0a26af;  */

undefined8 FUN_10a0a2678(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110ba0fc8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a0a26b0; end: 10a0a26b3;  */

void FUN_10a0a26b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a0a26b4; end: 10a0a270b;  */

void FUN_10a0a26b4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x78;
  __Znwm();
  FUN_10a0a270c();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a0a270c; end: 10a0a275f;  */

undefined8 * FUN_10a0a270c(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ba0f28;
  FUN_10a316538(param_1 + 3,param_2,1,1,0);
  return param_1;
}



/* Entry: 10a0a2760; end: 10a0a27cf;  */

void FUN_10a0a2760(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  __Znwm();
  FUN_10a0a27d0();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a0a27d0; end: 10a0a2827;  */

undefined8 *
FUN_10a0a27d0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ba0c30;
  FUN_10a097ea0(param_1 + 3,*param_2,*param_3,*param_4,0);
  return param_1;
}



/* Entry: 10a0a2828; end: 10a0a2897;  */

void FUN_10a0a2828(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  __Znwm();
  FUN_10a0a2898();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a0a2898; end: 10a0a28ef;  */

undefined8 *
FUN_10a0a2898(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ba0c30;
  FUN_10a097ea0(param_1 + 3,*param_2,*param_3,*param_4,0);
  return param_1;
}



/* Entry: 10a0a28f0; end: 10a0a294b;  */

undefined8 * FUN_10a0a28f0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110ba0790;
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10a0a294c; end: 10a0a2a8f;  */

void FUN_10a0a294c(ulong *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_a0;
  ulong uStack_98;
  long *plStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  uVar9 = param_1[1];
  if (uVar9 < param_1[2]) {
    FUN_10a0c93fc(uVar9,param_2);
    uVar9 = uVar9 + 0x110;
    param_1[1] = uVar9;
  }
  else {
    lVar10 = uVar9 - *param_1;
    uVar9 = (lVar10 >> 4) * -0xf0f0f0f0f0f0f0f + 1;
    if (0xf0f0f0f0f0f0f0 < uVar9) {
      puVar5 = param_1;
      FUN_10a0c9bdc();
      func_0x00010a0c9ebc(&uStack_58);
      puVar6 = puVar5;
      __Unwind_Resume();
      pcStack_68 = FUN_10a0a2a90;
      puStack_88 = puVar6;
      puStack_80 = puVar5;
      puStack_78 = param_1;
      puStack_70 = &stack0xfffffffffffffff0;
      if (puVar6 == (ulong *)0x0) {
        uStack_a0 = 0;
        FUN_10a0dc808(&uStack_a0);
      }
      else {
        uStack_98 = puVar6[0x10b];
        plStack_90 = (long *)puVar6[0x10c];
        if (plStack_90 != (long *)0x0) {
          plVar1 = plStack_90 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a0dc624(&uStack_98,&puStack_88);
        plVar1 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          plVar2 = plStack_90 + 1;
          do {
            lVar10 = *plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
      }
      return;
    }
    lVar7 = (long)(param_1[2] - *param_1) >> 4;
    uVar8 = lVar7 * -0x1e1e1e1e1e1e1e1e;
    if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
      uVar8 = uVar9;
    }
    if (0x78787878787877 < (ulong)(lVar7 * -0xf0f0f0f0f0f0f0f)) {
      uVar8 = 0xf0f0f0f0f0f0f0;
    }
    puStack_38 = param_1;
    if (uVar8 == 0) {
      uVar8 = 0;
      lVar7 = 0;
    }
    else {
      lVar7 = param_2;
      FUN_10a0c9bf0();
    }
    lVar10 = uVar8 + lVar10;
    uVar11 = uVar8 + lVar7 * 0x110;
    uStack_58 = uVar8;
    uStack_50 = lVar10;
    uStack_48 = lVar10;
    uStack_40 = uVar11;
    FUN_10a0c93fc(lVar10,param_2);
    uVar9 = lVar10 + 0x110;
    uVar8 = lVar10 + (*param_1 - param_1[1]);
    FUN_10a0c9c30(*param_1,param_1[1],uVar8);
    uStack_58 = *param_1;
    *param_1 = uVar8;
    param_1[1] = uVar9;
    uStack_40 = param_1[2];
    param_1[2] = uVar11;
    uStack_50 = uStack_58;
    uStack_48 = uStack_58;
    func_0x00010a0c9ebc(&uStack_58);
  }
  param_1[1] = uVar9;
  return;
}



/* Entry: 10a0a2a90; end: 10a0a2b43;  */

void FUN_10a0a2a90(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10a0dc808(&uStack_40);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a0dc624(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a0a2b44; end: 10a0a4beb;  */

/* WARNING: Removing unreachable block (ram,0x00010a0a36c0) */

void FUN_10a0a2b44(double param_1,float ******param_2,long param_3,float ******param_4,
                  float ******param_5)

{
  long *plVar1;
  float ******ppppppfVar2;
  float *****pppppfVar3;
  float *****pppppfVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  float ****ppppfVar13;
  float *****pppppfVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  float *****pppppfVar22;
  ulong uVar23;
  float *****pppppfVar24;
  ulong uVar25;
  float ******ppppppfVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  ulong uVar31;
  float *****pppppfVar32;
  ulong uVar33;
  float ******unaff_x22;
  float ******ppppppfVar34;
  float ******ppppppfVar35;
  long lVar36;
  float ******ppppppfVar37;
  float *****pppppfVar38;
  long lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  ulong uStack_218;
  float ****ppppfStack_210;
  float ****ppppfStack_208;
  float ****ppppfStack_200;
  float ****ppppfStack_1f8;
  float *****pppppfStack_1f0;
  float *****pppppfStack_1e8;
  float *****pppppfStack_1e0;
  float *****pppppfStack_1d8;
  float *****pppppfStack_1d0;
  undefined8 *****pppppuStack_1c0;
  ulong uStack_1b8;
  byte bStack_1a9;
  undefined8 *****pppppuStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  undefined1 auStack_190 [24];
  undefined8 auStack_178 [3];
  float *****pppppfStack_160;
  float *****pppppfStack_158;
  float *****pppppfStack_150;
  float ****ppppfStack_140;
  float ****ppppfStack_138;
  float *****pppppfStack_130;
  float *****pppppfStack_128;
  float *****pppppfStack_120;
  float *****pppppfStack_118;
  float *****pppppfStack_110;
  float *****pppppfStack_108;
  float ***pppfStack_100;
  float ***pppfStack_f8;
  float ***pppfStack_f0;
  float ***pppfStack_e8;
  float *****pppppfStack_e0;
  float *****pppppfStack_d8;
  float *****pppppfStack_d0;
  float *****pppppfStack_c8;
  float *****pppppfStack_c0;
  
  iVar9 = *(int *)param_4;
  ppppppfVar35 = (float ******)(param_3 + 0x30);
  pppppfVar32 = *ppppppfVar35;
  uVar27 = (*(long *)(param_3 + 0x38) - (long)pppppfVar32 >> 4) * -0x30c30c30c30c30c3;
  if ((uVar27 < (ulong)(long)iVar9 || uVar27 - (long)iVar9 == 0) ||
     (iVar29 = *(int *)((long)param_4 + 4),
     uVar27 < (ulong)(long)iVar29 || uVar27 - (long)iVar29 == 0)) goto LAB_10a0a48a4;
  pppppfVar14 = pppppfVar32 + (long)iVar9 * 0x2a;
  if ((*(int *)((long)pppppfVar14 + 0x2c) != 0x1406) || (*(int *)(pppppfVar14 + 7) != 0x41)) {
    uVar15 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
    ___cxa_throw(uVar15,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8
                );
    goto LAB_10a0a4678;
  }
  pppppfVar32 = pppppfVar32 + (long)iVar29 * 0x2a;
  pppppfVar38 = (float *****)pppppfVar14[6];
  ppppppfVar26 = ppppppfVar35;
  FUN_10a0c7dfc(&pppppfStack_1d8,ppppppfVar35,pppppfVar14);
  ppppppfVar2 = (float ******)pppppfStack_1d8;
  iVar9 = *(int *)(pppppfVar32 + 7);
  if (iVar9 == 0x41) {
    puVar17 = (ulong *)0x1137e9598;
LAB_10a0a2c44:
    uVar27 = *puVar17;
    pppppfStack_130 = (float *****)0x0;
    pppppfStack_128 = (float *****)0x0;
    pppppfStack_120 = (float *****)0x0;
    func_0x0001095201f0(&pppppfStack_130,pppppfVar32[6]);
    FUN_10a0c7dfc(&pppppfStack_e0,ppppppfVar35,pppppfVar32);
    pppppfVar24 = pppppfStack_e0;
    if ((pppppfStack_e0 == pppppfStack_d8) && (pppppfVar32[6] != (float ****)0x0)) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        ppppppfVar35 = (float ******)0x2;
        func_0x00010ae06f08(1,2,&UNK_10f636e46,&UNK_10f63811f,0x67,&UNK_10f6381d1);
      }
LAB_10a0a2cbc:
      ppppppfVar37 = &pppppfStack_1f0;
    }
    else {
      iVar9 = *(int *)((long)pppppfVar32 + 0x2c);
      ppppppfVar26 = (float ******)pppppfStack_128;
      ppppppfVar34 = (float ******)pppppfStack_130;
      if (iVar9 < 0x1402) {
        if (iVar9 == 0x1400) {
          if (pppppfStack_128 != pppppfStack_130) {
            uVar23 = 0;
            uVar18 = uVar27;
            if (uVar27 < 2) {
              uVar18 = 1;
            }
            do {
              if (uVar27 != 0) {
                ppppppfVar37 = (float ******)((long)pppppfVar24 + uVar27 * uVar23);
                uVar33 = uVar18;
                do {
                  pppppfVar22 = pppppfStack_130;
                  uVar19 = ((long)pppppfStack_128 - (long)pppppfStack_130 >> 3) *
                           -0x5555555555555555;
                  if (uVar19 < uVar23 || uVar19 - uVar23 == 0) goto LAB_10a0a48a4;
                  iVar9 = *(int *)((long)pppppfVar32 + 0x2c);
                  cVar5 = *(char *)ppppppfVar37;
                  if (iVar9 < 0x1402) {
                    if (iVar9 == 0x1400) {
                      fVar40 = (float)(int)cVar5 / 127.0;
                      goto LAB_10a0a34ac;
                    }
                    if (iVar9 == 0x1401) {
                      fVar45 = (float)(int)cVar5 / 255.0;
                    }
                    else {
LAB_10a0a34d4:
                      fVar45 = 0.0;
                      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                        func_0x00010ae06f08(1,2,&UNK_10f636e46,&UNK_10f6381ff,0x52,&UNK_10f6382f2);
                        fVar45 = 0.0;
                      }
                    }
                  }
                  else if (iVar9 == 0x1402) {
                    fVar40 = (float)(int)cVar5 / 32767.0;
LAB_10a0a34ac:
                    fVar45 = -1.0;
                    if (-1.0 <= fVar40) {
                      fVar45 = fVar40;
                    }
                  }
                  else if (iVar9 == 0x1403) {
                    fVar45 = (float)(int)cVar5 / 65535.0;
                  }
                  else {
                    if (iVar9 != 0x1406) goto LAB_10a0a34d4;
                    fVar45 = (float)(int)cVar5;
                  }
                  ppppfStack_210 = (float ****)CONCAT44(ppppfStack_210._4_4_,fVar45);
                  ppppppfVar35 = (float ******)&ppppfStack_210;
                  FUN_10a001c34(pppppfVar22 + uVar23 * 3);
                  ppppppfVar37 = (float ******)((long)ppppppfVar37 + 1);
                  uVar33 = uVar33 - 1;
                  ppppppfVar26 = (float ******)pppppfStack_128;
                  ppppppfVar34 = (float ******)pppppfStack_130;
                } while (uVar33 != 0);
              }
              uVar23 = uVar23 + 1;
            } while (uVar23 < (ulong)(((long)ppppppfVar26 - (long)ppppppfVar34 >> 3) *
                                     -0x5555555555555555));
          }
        }
        else {
          if (iVar9 != 0x1401) {
LAB_10a0a3884:
            if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
              ppppppfVar35 = (float ******)0x2;
              func_0x00010ae06f08(1,2,&UNK_10f636e46,&UNK_10f63811f,0x82,&UNK_10f6381af);
            }
            goto LAB_10a0a2cbc;
          }
          if (pppppfStack_128 != pppppfStack_130) {
            uVar23 = 0;
            uVar18 = uVar27;
            if (uVar27 < 2) {
              uVar18 = 1;
            }
            do {
              if (uVar27 != 0) {
                ppppppfVar37 = (float ******)((long)pppppfVar24 + uVar27 * uVar23);
                uVar33 = uVar18;
                do {
                  pppppfVar22 = pppppfStack_130;
                  uVar19 = ((long)pppppfStack_128 - (long)pppppfStack_130 >> 3) *
                           -0x5555555555555555;
                  if (uVar19 < uVar23 || uVar19 - uVar23 == 0) goto LAB_10a0a48a4;
                  iVar9 = *(int *)((long)pppppfVar32 + 0x2c);
                  bVar6 = *(byte *)ppppppfVar37;
                  if (iVar9 < 0x1402) {
                    if (iVar9 == 0x1400) {
                      fVar40 = 127.0;
                    }
                    else {
                      if (iVar9 != 0x1401) {
LAB_10a0a2ff4:
                        fVar40 = 0.0;
                        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                          func_0x00010ae06f08(1,2,&UNK_10f636e46,&UNK_10f63831e,0x52,&UNK_10f6382f2)
                          ;
                          fVar40 = 0.0;
                        }
                        goto LAB_10a0a2fd4;
                      }
                      fVar40 = 255.0;
                    }
                    fVar40 = (float)bVar6 / fVar40;
                  }
                  else if (iVar9 == 0x1402) {
                    fVar40 = (float)bVar6 / 32767.0;
                  }
                  else if (iVar9 == 0x1403) {
                    fVar40 = (float)bVar6 / 65535.0;
                  }
                  else {
                    if (iVar9 != 0x1406) goto LAB_10a0a2ff4;
                    fVar40 = (float)bVar6;
                  }
LAB_10a0a2fd4:
                  ppppfStack_210 = (float ****)CONCAT44(ppppfStack_210._4_4_,fVar40);
                  ppppppfVar35 = (float ******)&ppppfStack_210;
                  FUN_10a001c34(pppppfVar22 + uVar23 * 3);
                  ppppppfVar37 = (float ******)((long)ppppppfVar37 + 1);
                  uVar33 = uVar33 - 1;
                  ppppppfVar26 = (float ******)pppppfStack_128;
                  ppppppfVar34 = (float ******)pppppfStack_130;
                } while (uVar33 != 0);
              }
              uVar23 = uVar23 + 1;
            } while (uVar23 < (ulong)(((long)ppppppfVar26 - (long)ppppppfVar34 >> 3) *
                                     -0x5555555555555555));
          }
        }
      }
      else if (iVar9 == 0x1402) {
        if (pppppfStack_128 != pppppfStack_130) {
          lVar20 = 0;
          uVar23 = 0;
          uVar18 = uVar27;
          if (uVar27 < 2) {
            uVar18 = 1;
          }
          do {
            if (uVar27 != 0) {
              ppppppfVar37 = (float ******)((long)pppppfVar24 + uVar27 * lVar20);
              uVar33 = uVar18;
              do {
                pppppfVar22 = pppppfStack_130;
                uVar19 = ((long)pppppfStack_128 - (long)pppppfStack_130 >> 3) * -0x5555555555555555;
                if (uVar19 < uVar23 || uVar19 - uVar23 == 0) goto LAB_10a0a48a4;
                iVar9 = *(int *)((long)pppppfVar32 + 0x2c);
                sVar7 = *(short *)ppppppfVar37;
                if (iVar9 < 0x1402) {
                  if (iVar9 == 0x1400) {
                    fVar40 = (float)(int)sVar7 / 127.0;
                    goto LAB_10a0a3178;
                  }
                  if (iVar9 == 0x1401) {
                    fVar45 = (float)(int)sVar7 / 255.0;
                  }
                  else {
LAB_10a0a31a0:
                    fVar45 = 0.0;
                    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                      func_0x00010ae06f08(1,2,&UNK_10f636e46,&UNK_10f638413,0x52,&UNK_10f6382f2);
                      fVar45 = 0.0;
                    }
                  }
                }
                else if (iVar9 == 0x1402) {
                  fVar40 = (float)(int)sVar7 / 32767.0;
LAB_10a0a3178:
                  fVar45 = -1.0;
                  if (-1.0 <= fVar40) {
                    fVar45 = fVar40;
                  }
                }
                else if (iVar9 == 0x1403) {
                  fVar45 = (float)(int)sVar7 / 65535.0;
                }
                else {
                  if (iVar9 != 0x1406) goto LAB_10a0a31a0;
                  fVar45 = (float)(int)sVar7;
                }
                ppppfStack_210 = (float ****)CONCAT44(ppppfStack_210._4_4_,fVar45);
                ppppppfVar35 = (float ******)&ppppfStack_210;
                FUN_10a001c34(pppppfVar22 + uVar23 * 3);
                ppppppfVar37 = (float ******)((long)ppppppfVar37 + 2);
                uVar33 = uVar33 - 1;
                ppppppfVar26 = (float ******)pppppfStack_128;
                ppppppfVar34 = (float ******)pppppfStack_130;
              } while (uVar33 != 0);
            }
            uVar23 = uVar23 + 1;
            lVar20 = lVar20 + 2;
          } while (uVar23 < (ulong)(((long)ppppppfVar26 - (long)ppppppfVar34 >> 3) *
                                   -0x5555555555555555));
        }
      }
      else if (iVar9 == 0x1403) {
        if (pppppfStack_128 != pppppfStack_130) {
          lVar20 = 0;
          uVar23 = 0;
          uVar18 = uVar27;
          if (uVar27 < 2) {
            uVar18 = 1;
          }
          do {
            if (uVar27 != 0) {
              ppppppfVar37 = (float ******)((long)pppppfVar24 + uVar27 * lVar20);
              uVar33 = uVar18;
              do {
                pppppfVar22 = pppppfStack_130;
                uVar19 = ((long)pppppfStack_128 - (long)pppppfStack_130 >> 3) * -0x5555555555555555;
                if (uVar19 < uVar23 || uVar19 - uVar23 == 0) goto LAB_10a0a48a4;
                iVar9 = *(int *)((long)pppppfVar32 + 0x2c);
                uVar8 = *(ushort *)ppppppfVar37;
                if (iVar9 < 0x1402) {
                  if (iVar9 == 0x1400) {
                    fVar40 = 127.0;
                  }
                  else {
                    if (iVar9 != 0x1401) {
LAB_10a0a3328:
                      fVar40 = 0.0;
                      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                        func_0x00010ae06f08(1,2,&UNK_10f636e46,&UNK_10f638500,0x52,&UNK_10f6382f2);
                        fVar40 = 0.0;
                      }
                      goto LAB_10a0a3308;
                    }
                    fVar40 = 255.0;
                  }
                  fVar40 = (float)uVar8 / fVar40;
                }
                else if (iVar9 == 0x1402) {
                  fVar40 = (float)uVar8 / 32767.0;
                }
                else if (iVar9 == 0x1403) {
                  fVar40 = (float)uVar8 / 65535.0;
                }
                else {
                  if (iVar9 != 0x1406) goto LAB_10a0a3328;
                  fVar40 = (float)uVar8;
                }
LAB_10a0a3308:
                ppppfStack_210 = (float ****)CONCAT44(ppppfStack_210._4_4_,fVar40);
                ppppppfVar35 = (float ******)&ppppfStack_210;
                FUN_10a001c34(pppppfVar22 + uVar23 * 3);
                ppppppfVar37 = (float ******)((long)ppppppfVar37 + 2);
                uVar33 = uVar33 - 1;
                ppppppfVar26 = (float ******)pppppfStack_128;
                ppppppfVar34 = (float ******)pppppfStack_130;
              } while (uVar33 != 0);
            }
            uVar23 = uVar23 + 1;
            lVar20 = lVar20 + 2;
          } while (uVar23 < (ulong)(((long)ppppppfVar26 - (long)ppppppfVar34 >> 3) *
                                   -0x5555555555555555));
        }
      }
      else {
        if (iVar9 != 0x1406) goto LAB_10a0a3884;
        if (pppppfStack_128 != pppppfStack_130) {
          lVar20 = 0;
          uVar23 = 0;
          uVar18 = uVar27;
          if (uVar27 < 2) {
            uVar18 = 1;
          }
          do {
            if (uVar27 != 0) {
              ppppppfVar37 = (float ******)((long)pppppfVar24 + uVar27 * lVar20);
              uVar33 = uVar18;
              do {
                pppppfVar22 = pppppfStack_130;
                uVar19 = ((long)pppppfStack_128 - (long)pppppfStack_130 >> 3) * -0x5555555555555555;
                if (uVar19 < uVar23 || uVar19 - uVar23 == 0) goto LAB_10a0a48a4;
                iVar9 = *(int *)((long)pppppfVar32 + 0x2c);
                fVar40 = *(float *)ppppppfVar37;
                if (iVar9 < 0x1402) {
                  if (iVar9 == 0x1400) {
                    fVar45 = fVar40 / 127.0;
                    goto LAB_10a0a2df0;
                  }
                  if (iVar9 == 0x1401) {
                    fVar40 = fVar40 / 255.0;
                  }
                  else {
LAB_10a0a2e18:
                    fVar40 = 0.0;
                    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                      func_0x00010ae06f08(1,2,&UNK_10f636e46,&UNK_10f6385f6,0x52,&UNK_10f6382f2);
                      fVar40 = 0.0;
                    }
                  }
                }
                else if (iVar9 == 0x1402) {
                  fVar45 = fVar40 / 32767.0;
LAB_10a0a2df0:
                  fVar40 = -1.0;
                  if (-1.0 <= fVar45) {
                    fVar40 = fVar45;
                  }
                }
                else if (iVar9 == 0x1403) {
                  fVar40 = fVar40 / 65535.0;
                }
                else if (iVar9 != 0x1406) goto LAB_10a0a2e18;
                ppppfStack_210 = (float ****)CONCAT44(ppppfStack_210._4_4_,fVar40);
                ppppppfVar35 = (float ******)&ppppfStack_210;
                FUN_10a001c34(pppppfVar22 + uVar23 * 3);
                ppppppfVar37 = (float ******)((long)ppppppfVar37 + 4);
                uVar33 = uVar33 - 1;
                ppppppfVar26 = (float ******)pppppfStack_128;
                ppppppfVar34 = (float ******)pppppfStack_130;
              } while (uVar33 != 0);
            }
            uVar23 = uVar23 + 1;
            lVar20 = lVar20 + 4;
          } while (uVar23 < (ulong)(((long)ppppppfVar26 - (long)ppppppfVar34 >> 3) *
                                   -0x5555555555555555));
        }
      }
      pppppfStack_1e0 = pppppfStack_120;
      ppppppfVar37 = &pppppfStack_130;
      pppppfStack_1f0 = (float *****)ppppppfVar34;
      pppppfStack_1e8 = (float *****)ppppppfVar26;
    }
    *ppppppfVar37 = (float *****)0x0;
    ppppppfVar37[1] = (float *****)0x0;
    ppppppfVar37[2] = (float *****)0x0;
    ppppppfVar26 = ppppppfVar35;
    if ((float ******)pppppfStack_e0 != (float ******)0x0) {
      pppppfStack_d8 = pppppfStack_e0;
      __ZdlPv();
      ppppppfVar26 = ppppppfVar35;
    }
    pppppfStack_e0 = (float *****)&pppppfStack_130;
    FUN_10a0ca968(&pppppfStack_e0);
  }
  else {
    if (iVar9 == 4) {
      puVar17 = (ulong *)0x1137e95b0;
      goto LAB_10a0a2c44;
    }
    if (iVar9 == 3) {
      puVar17 = (ulong *)0x1137e95a8;
      goto LAB_10a0a2c44;
    }
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      ppppppfVar26 = (float ******)0x2;
      func_0x00010ae06f08(1,2,&UNK_10f636e46,&UNK_10f63811f,0x3f,&UNK_10f6381af);
    }
    pppppfStack_1f0 = (float *****)0x0;
    pppppfStack_1e8 = (float *****)0x0;
    pppppfStack_1e0 = (float *****)0x0;
  }
  if ((pppppfStack_1d8 == pppppfStack_1d0) || (pppppfStack_1f0 == pppppfStack_1e8)) {
    *param_2 = (float *****)0x0;
    param_2[1] = (float *****)0x0;
    param_2[2] = (float *****)0x0;
    goto LAB_10a0a45f0;
  }
  pppppfVar24 = (float *****)pppppfVar32[6];
  if (pppppfVar24 < pppppfVar14[6]) {
    uVar15 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
  }
  else {
    iVar9 = *(int *)(pppppfVar32 + 7);
    ppppfStack_140 = (float ****)pppppfVar24;
    ppppfStack_138 = (float ****)pppppfVar38;
    if (pppppfVar38 != (float *****)0x0) {
      bVar6 = *(byte *)((long)param_5 + 0x17);
      pppppfVar32 = param_5[1];
      if (-1 < (char)bVar6) {
        pppppfVar32 = (float *****)(ulong)bVar6;
      }
      iVar29 = 0x41;
      bVar12 = false;
      if ((long)pppppfVar32 < 8) {
        if (pppppfVar32 != (float *****)0x5) {
          bVar11 = false;
          if (pppppfVar32 == (float *****)0x7) {
            ppppppfVar35 = (float ******)*param_5;
            if (-1 < (char)bVar6) {
              ppppppfVar35 = param_5;
            }
            bVar11 = *(int *)ppppppfVar35 == 0x67696577 &&
                     *(int *)((long)ppppppfVar35 + 3) == 0x73746867;
            bVar12 = bVar11;
          }
          goto LAB_10a0a370c;
        }
        bVar11 = false;
        ppppppfVar35 = (float ******)*param_5;
        if (-1 < (char)bVar6) {
          ppppppfVar35 = param_5;
        }
        bVar12 = bVar11;
        if (*(int *)ppppppfVar35 != 0x6c616373 || *(char *)((long)ppppppfVar35 + 4) != 'e')
        goto LAB_10a0a370c;
LAB_10a0a36b4:
        bVar12 = false;
        iVar29 = 3;
LAB_10a0a3714:
        if (iVar29 != iVar9) {
          uVar15 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (auStack_190,&UNK_10f63870f,param_5);
          FUN_10a012db0(auStack_178,auStack_190,&UNK_10f638748);
          __ZNSt3__19to_stringEi(&pppppuStack_1a8,iVar29);
          if (-1 < (char)bStack_191) {
            uStack_1a0 = (ulong)bStack_191;
            pppppuStack_1a8 = &pppppuStack_1a8;
          }
          puVar16 = auStack_178;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar16,pppppuStack_1a8,uStack_1a0);
          pppppfStack_158 = (float *****)puVar16[1];
          pppppfStack_160 = (float *****)*puVar16;
          pppppfStack_150 = (float *****)puVar16[2];
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
          FUN_10a012db0(&ppppfStack_210,&pppppfStack_160,&UNK_10f638754);
          __ZNSt3__19to_stringEi(&pppppuStack_1c0,iVar9);
          if (-1 < (char)bStack_1a9) {
            uStack_1b8 = (ulong)bStack_1a9;
            pppppuStack_1c0 = &pppppuStack_1c0;
          }
          pppppfVar32 = &ppppfStack_210;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppfVar32,pppppuStack_1c0,uStack_1b8);
          pppppfStack_d8 = (float *****)pppppfVar32[1];
          pppppfStack_e0 = (float *****)*pppppfVar32;
          pppppfStack_d0 = (float *****)pppppfVar32[2];
          pppppfVar32[1] = (float ****)0x0;
          pppppfVar32[2] = (float ****)0x0;
          *pppppfVar32 = (float ****)0x0;
          FUN_10a012db0(&pppppfStack_130,&pppppfStack_e0,&DAT_10f62a9de);
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (uVar15,&pppppfStack_130);
          ___cxa_throw(uVar15,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_10a0a48a4;
        }
      }
      else {
        if (pppppfVar32 == (float *****)0x8) {
          ppppppfVar35 = (float ******)*param_5;
          if (-1 < (char)bVar6) {
            ppppppfVar35 = param_5;
          }
          uVar27 = ((ulong)*ppppppfVar35 & 0xff00ff00ff00ff00) >> 8 |
                   ((ulong)*ppppppfVar35 & 0xff00ff00ff00ff) << 8;
          uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
          uVar27 = uVar27 >> 0x20 | uVar27 << 0x20;
          uVar28 = (uint)(uVar27 < 0x726f746174696f6e);
          if (0x726f746174696f6e < uVar27) {
            uVar28 = 0xffffffff;
          }
          bVar11 = uVar28 == 0;
          iVar29 = 4;
          bVar12 = false;
          if (!bVar11) {
            iVar29 = 0x41;
          }
        }
        else {
          bVar11 = false;
          if (pppppfVar32 == (float *****)0xb) {
            bVar11 = false;
            ppppppfVar35 = (float ******)*param_5;
            if (-1 < (char)bVar6) {
              ppppppfVar35 = param_5;
            }
            bVar12 = bVar11;
            if (*ppppppfVar35 == (float *****)0x74616c736e617274 &&
                *(long *)((long)ppppppfVar35 + 3) == 0x6e6f6974616c736e) goto LAB_10a0a36b4;
          }
        }
LAB_10a0a370c:
        if (bVar11) goto LAB_10a0a3714;
      }
      pppppfStack_120 = &ppppfStack_138;
      pppppfStack_118 = &ppppfStack_140;
      unaff_x22 = param_4 + 1;
      bVar6 = *(byte *)((long)param_4 + 0x1f);
      pppppfVar32 = param_4[2];
      if (-1 < (char)bVar6) {
        pppppfVar32 = (float *****)(ulong)bVar6;
      }
      pppppfStack_130 = (float *****)param_4;
      pppppfStack_128 = (float *****)param_5;
      if (pppppfVar32 != (float *****)0x4) {
        if (pppppfVar32 == (float *****)0xb) {
          ppppppfVar35 = (float ******)*unaff_x22;
          if (-1 < (char)bVar6) {
            ppppppfVar35 = unaff_x22;
          }
          if (*ppppppfVar35 == (float *****)0x4c50534349425543 &&
              *(long *)((long)ppppppfVar35 + 3) == 0x454e494c50534349) {
            if ((float *****)0x5555555555555555 < pppppfVar38) {
              uVar15 = 0x10;
              ___cxa_allocate_exception(0x10);
              __ZNSt13runtime_errorC1EPKc();
              goto LAB_10a0a46fc;
            }
            pppppfVar14 = (float *****)((long)pppppfVar38 * 3);
            if (bVar12) {
              uVar27 = 0;
              if (pppppfVar14 != (float *****)0x0) {
                uVar27 = (ulong)pppppfVar24 / (ulong)pppppfVar14;
              }
              if (pppppfVar24 != (float *****)(uVar27 * (long)pppppfVar14)) {
                func_0x000107c2b054(&pppppfStack_e0,&UNK_10f638783);
                FUN_10a0ca1e8(&pppppfStack_130,&pppppfStack_e0);
                goto LAB_10a0a48a4;
              }
            }
            else if (pppppfVar14 != pppppfVar24) {
              func_0x000107c2b054(&pppppfStack_e0,&UNK_10f6387a1);
              FUN_10a0ca1e8(&pppppfStack_130,&pppppfStack_e0);
              goto LAB_10a0a48a4;
            }
          }
          goto LAB_10a0a3a8c;
        }
        if (pppppfVar32 != (float *****)0x6) goto LAB_10a0a38c4;
        ppppppfVar35 = (float ******)*unaff_x22;
        if (-1 < (char)bVar6) {
          ppppppfVar35 = unaff_x22;
        }
        if (*(int *)ppppppfVar35 == 0x454e494c && *(short *)((long)ppppppfVar35 + 4) == 0x5241)
        goto LAB_10a0a3854;
        uStack_218 = 0;
        if (pppppfVar38 != (float *****)0x0) {
          uStack_218 = (ulong)(((long)pppppfStack_1e8 - (long)pppppfStack_1f0 >> 3) *
                              -0x5555555555555555) / (ulong)pppppfVar38;
        }
LAB_10a0a38fc:
        pppppfStack_150 = (float *****)0x0;
        pppppfStack_158 = (float *****)0x0;
        pppppfStack_160 = (float *****)0x0;
        if (*(int *)ppppppfVar35 != 0x454e494c || *(short *)((long)ppppppfVar35 + 4) != 0x5241)
        goto LAB_10a0a4678;
        pppppfVar32 = (float *****)0x0;
        do {
          uVar44 = *(undefined4 *)((long)ppppppfVar2 + (long)pppppfVar32 * 4);
          FUN_10a0c9f08(&pppppfStack_130,&pppppfStack_1f0,uStack_218,pppppfVar32);
          pppppfStack_e0 = (float *****)CONCAT44(pppppfStack_e0._4_4_,uVar44);
          pppppfStack_d0 = (float *****)0x0;
          pppppfStack_c8 = (float *****)0x0;
          pppppfStack_d8 = (float *****)0x0;
          ppppppfVar35 = (float ******)pppppfStack_130;
          FUN_10a0ca588(&pppppfStack_d8,pppppfStack_130,pppppfStack_128,
                        (long)pppppfStack_128 - (long)pppppfStack_130 >> 2);
          if ((float ******)pppppfStack_130 != (float ******)0x0) {
            pppppfStack_128 = pppppfStack_130;
            __ZdlPv();
          }
          pppppfVar14 = pppppfStack_158;
          if (pppppfStack_158 < pppppfStack_150) {
            *(undefined4 *)pppppfStack_158 = pppppfStack_e0._0_4_;
            pppppfStack_158[2] = (float ****)0x0;
            pppppfStack_158[3] = (float ****)0x0;
            pppppfStack_158[1] = (float ****)0x0;
            ppppppfVar26 = (float ******)pppppfStack_d8;
            FUN_10a0ca588();
            ppppppfVar34 = (float ******)(pppppfVar14 + 4);
          }
          else {
            lVar20 = (long)pppppfStack_158 - (long)pppppfStack_160;
            pppppfVar14 = (float *****)((lVar20 >> 5) + 1);
            if ((ulong)pppppfVar14 >> 0x3b != 0) {
              FUN_10a0ca638();
              goto LAB_10a0a48a4;
            }
            pppppfVar24 = (float *****)((long)pppppfStack_150 - (long)pppppfStack_160 >> 4);
            if (pppppfVar24 <= pppppfVar14) {
              pppppfVar24 = pppppfVar14;
            }
            if (0x7fffffffffffffdf < (ulong)((long)pppppfStack_150 - (long)pppppfStack_160)) {
              pppppfVar24 = (float *****)0x7ffffffffffffff;
            }
            pppppfStack_110 = (float *****)&pppppfStack_160;
            if (pppppfVar24 == (float *****)0x0) {
              ppppppfVar35 = (float ******)0x0;
            }
            else {
              FUN_10a0ca64c();
            }
            pppppfVar14 = (float *****)((long)pppppfVar24 + lVar20);
            *(undefined4 *)pppppfVar14 = pppppfStack_e0._0_4_;
            pppppfVar14[2] = (float ****)0x0;
            pppppfVar14[3] = (float ****)0x0;
            pppppfVar14[1] = (float ****)0x0;
            pppppfStack_130 = pppppfVar24;
            pppppfStack_128 = pppppfVar14;
            pppppfStack_120 = pppppfVar14;
            pppppfStack_118 = pppppfVar24 + (long)ppppppfVar35 * 4;
            FUN_10a0ca588();
            ppppppfVar34 = (float ******)(pppppfVar14 + 4);
            ppppppfVar26 = (float ******)
                           ((long)pppppfVar14 + ((long)pppppfStack_160 - (long)pppppfStack_158));
            func_0x00010a0ca680(pppppfStack_160,pppppfStack_158,ppppppfVar26);
            pppppfStack_120 = pppppfStack_160;
            pppppfStack_118 = pppppfStack_150;
            pppppfStack_130 = pppppfStack_160;
            pppppfStack_128 = pppppfStack_160;
            pppppfStack_160 = (float *****)ppppppfVar26;
            ppppppfVar26 = (float ******)pppppfStack_158;
            pppppfStack_158 = (float *****)ppppppfVar34;
            pppppfStack_150 = pppppfVar24 + (long)ppppppfVar35 * 4;
            func_0x00010a0ca700(&pppppfStack_130);
            ppppppfVar26 = (float ******)pppppfStack_158;
          }
          pppppfStack_158 = (float *****)ppppppfVar34;
          if ((float ******)pppppfStack_d8 != (float ******)0x0) {
            pppppfStack_d0 = pppppfStack_d8;
            __ZdlPv();
          }
          pppppfVar32 = (float *****)((long)pppppfVar32 + 1);
        } while (pppppfVar38 != pppppfVar32);
LAB_10a0a3fbc:
        pppppfVar32 = pppppfStack_158;
        if (pppppfStack_160 != pppppfStack_158) {
          if ((long)pppppfStack_158 - (long)pppppfStack_160 == 0x20) {
            fVar40 = *(float *)pppppfStack_160;
            if (pppppfStack_158 < pppppfStack_150) {
              *(float *)pppppfStack_158 = fVar40 + 1.0;
              pppppfStack_158[2] = (float ****)0x0;
              pppppfStack_158[3] = (float ****)0x0;
              pppppfStack_158[1] = (float ****)0x0;
              FUN_10a0ca588();
              pppppfStack_158 = pppppfVar32 + 4;
            }
            else {
              pppppfVar32 = (float *****)((long)pppppfStack_150 - (long)pppppfStack_160 >> 4);
              if (pppppfVar32 < (float *****)0x3) {
                pppppfVar32 = (float *****)0x2;
              }
              if (0x7fffffffffffffdf < (ulong)((long)pppppfStack_150 - (long)pppppfStack_160)) {
                pppppfVar32 = (float *****)0x7ffffffffffffff;
              }
              pppppfStack_110 = (float *****)&pppppfStack_160;
              FUN_10a0ca64c();
              pppppfVar14 = pppppfVar32 + 4;
              *(float *)pppppfVar14 = fVar40 + 1.0;
              pppppfVar32[6] = (float ****)0x0;
              pppppfVar32[7] = (float ****)0x0;
              pppppfVar32[5] = (float ****)0x0;
              pppppfStack_130 = pppppfVar32;
              pppppfStack_128 = pppppfVar14;
              pppppfStack_120 = pppppfVar14;
              pppppfStack_118 = pppppfVar32 + (long)ppppppfVar26 * 4;
              FUN_10a0ca588();
              ppppppfVar35 = (float ******)
                             ((long)pppppfVar14 + ((long)pppppfStack_160 - (long)pppppfStack_158));
              func_0x00010a0ca680(pppppfStack_160,pppppfStack_158,ppppppfVar35);
              pppppfStack_120 = pppppfStack_160;
              pppppfStack_118 = pppppfStack_150;
              pppppfStack_130 = pppppfStack_160;
              pppppfStack_128 = pppppfStack_160;
              pppppfStack_160 = (float *****)ppppppfVar35;
              pppppfStack_158 = pppppfVar32 + 8;
              pppppfStack_150 = pppppfVar32 + (long)ppppppfVar26 * 4;
              func_0x00010a0ca700(&pppppfStack_130);
              pppppfStack_158 = pppppfVar32 + 8;
            }
          }
          pppppfVar32 = pppppfStack_160;
          if (pppppfStack_158 == pppppfStack_160) goto LAB_10a0a48a4;
          if (0.0 < *(float *)pppppfStack_160) {
            ppppfStack_210 = (float ****)((ulong)ppppfStack_210 & 0xffffffff00000000);
            ppppfStack_200 = (float ****)0x0;
            ppppfStack_1f8 = (float ****)0x0;
            ppppfStack_208 = (float ****)0x0;
            pppppfVar14 = (float *****)pppppfStack_160[1];
            FUN_10a0ca588(&ppppfStack_208,pppppfVar14,pppppfStack_160[2],
                          (long)pppppfStack_160[2] - (long)pppppfVar14 >> 2);
            pppppfVar24 = pppppfStack_158;
            pppppfVar38 = pppppfStack_160;
            if (pppppfStack_158 < pppppfStack_150) {
              lVar20 = (long)pppppfVar32 - (long)pppppfStack_158;
              if (lVar20 == 0) {
                *(undefined4 *)pppppfStack_158 = ppppfStack_210._0_4_;
                pppppfStack_158[2] = (float ****)0x0;
                pppppfStack_158[3] = (float ****)0x0;
                pppppfStack_158[1] = (float ****)0x0;
                pppppfStack_158[2] = ppppfStack_200;
                pppppfStack_158[1] = ppppfStack_208;
                pppppfStack_158[3] = ppppfStack_1f8;
                pppppfStack_158 = pppppfStack_158 + 4;
              }
              else {
                ppppppfVar35 = (float ******)pppppfStack_158;
                if (pppppfStack_158 + -4 < pppppfStack_158) {
                  ppppppfVar35 = (float ******)(pppppfStack_158 + 4);
                  *(undefined4 *)pppppfStack_158 = *(undefined4 *)(pppppfStack_158 + -4);
                  pppppfStack_158[2] = (float ****)0x0;
                  pppppfStack_158[3] = (float ****)0x0;
                  pppppfStack_158[1] = (float ****)0x0;
                  pppppfStack_158[2] = pppppfStack_158[-2];
                  pppppfStack_158[1] = pppppfStack_158[-3];
                  pppppfStack_158[3] = pppppfStack_158[-1];
                  pppppfStack_158[-3] = (float ****)0x0;
                  pppppfStack_158[-2] = (float ****)0x0;
                  pppppfStack_158[-1] = (float ****)0x0;
                }
                bVar12 = pppppfStack_158 != pppppfVar32 + 4;
                pppppfStack_158 = (float *****)ppppppfVar35;
                if (bVar12) {
                  lVar30 = 0;
                  do {
                    *(undefined4 *)((long)pppppfVar24 + lVar30 + -0x20) =
                         *(undefined4 *)((long)pppppfVar24 + lVar30 + -0x40);
                    func_0x0001074714f0((long)pppppfVar24 + lVar30 + -0x18,
                                        (long)pppppfVar24 + lVar30 + -0x38);
                    lVar30 = lVar30 + -0x20;
                  } while (lVar20 + 0x20 != lVar30);
                }
                *(undefined4 *)pppppfVar32 = ppppfStack_210._0_4_;
                pppppfVar14 = (float *****)pppppfVar32[1];
                if (pppppfVar14 != (float *****)0x0) {
                  pppppfVar32[2] = (float ****)pppppfVar14;
                  __ZdlPv();
                  pppppfVar32[1] = (float ****)0x0;
                  pppppfVar32[2] = (float ****)0x0;
                  pppppfVar32[3] = (float ****)0x0;
                }
                pppppfVar32[2] = ppppfStack_200;
                pppppfVar32[1] = ppppfStack_208;
                pppppfVar32[3] = ppppfStack_1f8;
              }
            }
            else {
              ppppppfVar35 = (float ******)
                             (((long)pppppfStack_158 - (long)pppppfStack_160 >> 5) + 1);
              if ((ulong)ppppppfVar35 >> 0x3b != 0) {
                FUN_10a0ca638();
                goto LAB_10a0a48a4;
              }
              ppppppfVar26 = (float ******)((long)pppppfStack_150 - (long)pppppfStack_160 >> 4);
              if (ppppppfVar26 <= ppppppfVar35) {
                ppppppfVar26 = ppppppfVar35;
              }
              if (0x7fffffffffffffdf < (ulong)((long)pppppfStack_150 - (long)pppppfStack_160)) {
                ppppppfVar26 = (float ******)0x7ffffffffffffff;
              }
              pppppfStack_c0 = (float *****)&pppppfStack_160;
              if (ppppppfVar26 == (float ******)0x0) {
                ppppppfVar26 = (float ******)0x0;
                uVar27 = 0;
              }
              else {
                FUN_10a0ca64c();
                uVar27 = (long)pppppfVar14 << 5;
              }
              uVar23 = (long)pppppfVar32 - (long)pppppfVar38;
              ppppppfVar35 = (float ******)((long)ppppppfVar26 + uVar23);
              ppppppfVar2 = (float ******)((long)ppppppfVar26 + uVar27);
              ppppppfVar34 = ppppppfVar35;
              pppppfStack_e0 = (float *****)ppppppfVar26;
              pppppfStack_d8 = (float *****)ppppppfVar35;
              pppppfStack_d0 = (float *****)ppppppfVar35;
              pppppfStack_c8 = (float *****)ppppppfVar2;
              if (uVar23 == uVar27) {
                if ((long)uVar23 < 1) {
                  ppppppfVar34 = (float ******)((long)uVar23 >> 4);
                  if (pppppfVar32 == pppppfVar38) {
                    ppppppfVar34 = (float ******)0x1;
                  }
                  pppppfStack_110 = (float *****)&pppppfStack_160;
                  ppppppfVar37 = ppppppfVar34;
                  FUN_10a0ca64c();
                  ppppppfVar34 = ppppppfVar37 + ((ulong)ppppppfVar34 & 0xfffffffffffffffc);
                  pppppfStack_c8 = (float *****)(ppppppfVar37 + (long)pppppfVar14 * 4);
                  pppppfStack_130 = (float *****)ppppppfVar26;
                  pppppfStack_128 = (float *****)ppppppfVar35;
                  pppppfStack_120 = (float *****)ppppppfVar35;
                  pppppfStack_118 = (float *****)ppppppfVar2;
                  pppppfStack_e0 = (float *****)ppppppfVar37;
                  pppppfStack_d0 = (float *****)ppppppfVar34;
                  func_0x00010a0ca700(&pppppfStack_130);
                }
                else {
                  ppppppfVar34 = (float ******)
                                 ((long)ppppppfVar35 - ((uVar23 >> 1) + 0x10 & 0xffffffffffffffe0));
                  pppppfStack_d0 = (float *****)ppppppfVar34;
                }
              }
              *(undefined4 *)ppppppfVar34 = ppppfStack_210._0_4_;
              ppppppfVar34[2] = (float *****)0x0;
              ppppppfVar34[3] = (float *****)0x0;
              ppppppfVar34[1] = (float *****)0x0;
              ppppppfVar34[2] = (float *****)ppppfStack_200;
              ppppppfVar34[1] = (float *****)ppppfStack_208;
              ppppppfVar34[3] = (float *****)ppppfStack_1f8;
              ppppfStack_208 = (float ****)0x0;
              ppppfStack_200 = (float ****)0x0;
              ppppfStack_1f8 = (float ****)0x0;
              ppppppfVar35 = (float ******)(pppppfStack_d0 + 4);
              func_0x00010a0ca680(pppppfVar32,pppppfStack_158,ppppppfVar35);
              lVar20 = (long)pppppfStack_158 - (long)pppppfVar32;
              pppppfStack_158 = pppppfVar32;
              ppppppfVar34 = (float ******)
                             ((long)ppppppfVar34 + ((long)pppppfStack_160 - (long)pppppfVar32));
              func_0x00010a0ca680(pppppfStack_160,pppppfVar32,ppppppfVar34);
              pppppfVar32 = pppppfStack_150;
              pppppfStack_150 = pppppfStack_c8;
              pppppfStack_d0 = pppppfStack_160;
              pppppfStack_c8 = pppppfVar32;
              pppppfStack_e0 = pppppfStack_160;
              pppppfStack_d8 = pppppfStack_160;
              pppppfStack_160 = (float *****)ppppppfVar34;
              pppppfStack_158 = (float *****)((long)ppppppfVar35 + lVar20);
              func_0x00010a0ca700(&pppppfStack_e0);
              if ((float *****)ppppfStack_208 != (float *****)0x0) {
                ppppfStack_200 = ppppfStack_208;
                __ZdlPv();
              }
            }
          }
          *param_2 = pppppfStack_160;
          param_2[1] = pppppfStack_158;
          param_2[2] = pppppfStack_150;
          param_2 = &pppppfStack_160;
        }
        *param_2 = (float *****)0x0;
        param_2[1] = (float *****)0x0;
        param_2[2] = (float *****)0x0;
        FUN_10a0cc734(&pppppfStack_160);
LAB_10a0a45f0:
        pppppfStack_130 = (float *****)&pppppfStack_1f0;
        FUN_10a0ca968(&pppppfStack_130);
        if ((float ******)pppppfStack_1d8 != (float ******)0x0) {
          pppppfStack_1d0 = pppppfStack_1d8;
          __ZdlPv();
        }
        return;
      }
      ppppppfVar35 = (float ******)*unaff_x22;
      if (-1 < (char)bVar6) {
        ppppppfVar35 = unaff_x22;
      }
      if (*(int *)ppppppfVar35 == 0x50455453) {
LAB_10a0a3854:
        if (bVar12) {
          uVar27 = 0;
          if (pppppfVar38 != (float *****)0x0) {
            uVar27 = (ulong)pppppfVar24 / (ulong)pppppfVar38;
          }
          if (pppppfVar24 != (float *****)(uVar27 * (long)pppppfVar38)) {
            func_0x000107c2b054(&pppppfStack_e0,&UNK_10f63875d);
            FUN_10a0ca1e8(&pppppfStack_130,&pppppfStack_e0);
            goto LAB_10a0a48a4;
          }
        }
        else if (pppppfVar24 != pppppfVar38) {
          func_0x000107c2b054(&pppppfStack_e0,&UNK_10f638777);
          FUN_10a0ca1e8(&pppppfStack_130,&pppppfStack_e0);
          goto LAB_10a0a48a4;
        }
LAB_10a0a38c4:
        uStack_218 = 0;
        if (pppppfVar38 != (float *****)0x0) {
          uStack_218 = (ulong)(((long)pppppfStack_1e8 - (long)pppppfStack_1f0 >> 3) *
                              -0x5555555555555555) / (ulong)pppppfVar38;
        }
        if (pppppfVar32 == (float *****)0x6) {
          ppppppfVar35 = (float ******)*unaff_x22;
          if (-1 < (char)bVar6) {
            ppppppfVar35 = unaff_x22;
          }
          goto LAB_10a0a38fc;
        }
      }
      else {
LAB_10a0a3a8c:
        uStack_218 = 0;
        if (pppppfVar38 != (float *****)0x0) {
          uStack_218 = (ulong)(((long)pppppfStack_1e8 - (long)pppppfStack_1f0 >> 3) *
                              -0x5555555555555555) / (ulong)pppppfVar38;
        }
      }
      pppppfStack_150 = (float *****)0x0;
      pppppfStack_158 = (float *****)0x0;
      pppppfStack_160 = (float *****)0x0;
      if (pppppfVar32 == (float *****)0xb) {
        ppppppfVar35 = (float ******)*unaff_x22;
        if (-1 < (char)bVar6) {
          ppppppfVar35 = unaff_x22;
        }
        if (*ppppppfVar35 == (float *****)0x4c50534349425543 &&
            *(long *)((long)ppppppfVar35 + 3) == 0x454e494c50534349) {
          ppppfStack_210 = (float ****)0x0;
          ppppfStack_208 = (float ****)0x0;
          ppppfStack_200 = (float ****)0x0;
          if ((float *****)0x333333333333333 < pppppfVar38) {
            FUN_10a0ca8c4();
            goto LAB_10a0a48a4;
          }
          pppppfVar14 = (float *****)((long)pppppfVar38 * 0x50);
          __Znwm();
          uVar33 = uStack_218 / 3;
          ppppfStack_200 = (float ****)(pppppfVar14 + (long)pppppfVar38 * 10);
          pppppfVar24 = (float *****)((long)pppppfVar38 * 0x50) + -10;
          lVar20 = ((ulong)pppppfVar24 / 0x50) * 4 + (ulong)pppppfVar24 / 0x50;
          ppppfStack_210 = (float ****)pppppfVar14;
          _bzero();
          uVar27 = 0;
          pppppfVar32 = pppppfVar14 + lVar20 * 2 + 10;
          lVar39 = uVar33 * (long)pppppfVar38;
          uVar18 = (lVar20 * 0x10 + 0x50 >> 4) * -0x3333333333333333;
          lVar30 = 8;
          uVar23 = 0;
          ppppfStack_208 = (float ****)pppppfVar32;
          do {
            pppppfVar22 = pppppfStack_1f0;
            if (uStack_218 < 6) {
              uVar19 = ((long)pppppfStack_1e8 - (long)pppppfStack_1f0 >> 3) * -0x5555555555555555;
              if (((uVar19 < uVar27 || uVar19 - uVar27 == 0) ||
                  (uVar31 = uVar27 + (long)pppppfVar38, uVar19 < uVar31 || uVar19 - uVar31 == 0)) ||
                 (uVar21 = uVar27 + (long)pppppfVar38 * 2, uVar19 < uVar21 || uVar19 - uVar21 == 0))
              goto LAB_10a0a48a4;
              pppppfStack_130 =
                   (float *****)
                   CONCAT44(pppppfStack_130._4_4_,*(undefined4 *)((long)ppppppfVar2 + uVar27 * 4));
              pppppfStack_120 = (float *****)0x0;
              pppppfStack_118 = (float *****)0x0;
              pppppfStack_128 = (float *****)0x0;
              pppppfVar3 = (float *****)pppppfStack_1f0[uVar27 * 3];
              pppppfVar4 = (float *****)(pppppfStack_1f0 + uVar27 * 3)[1];
              FUN_10a0ca588(&pppppfStack_128,pppppfVar3,pppppfVar4,
                            (long)pppppfVar4 - (long)pppppfVar3 >> 2);
              ppppppfVar35 = (float ******)(pppppfVar22 + uVar31 * 3);
              pppppfStack_110 = (float *****)0x0;
              pppppfStack_108 = (float *****)0x0;
              pppfStack_100 = (float ***)0x0;
              pppppfVar3 = *ppppppfVar35;
              pppppfVar4 = ppppppfVar35[1];
              FUN_10a0ca588(&pppppfStack_110,pppppfVar3,pppppfVar4,
                            (long)pppppfVar4 - (long)pppppfVar3 >> 2);
              ppppppfVar35 = (float ******)(pppppfVar22 + uVar21 * 3);
              pppfStack_f8 = (float ***)0x0;
              pppfStack_f0 = (float ***)0x0;
              pppfStack_e8 = (float ***)0x0;
              ppppppfVar26 = (float ******)*ppppppfVar35;
              pppppfVar22 = ppppppfVar35[1];
              FUN_10a0ca588(&pppfStack_f8,ppppppfVar26,pppppfVar22,
                            (long)pppppfVar22 - (long)ppppppfVar26 >> 2);
            }
            else {
              pppfStack_e8 = (float ***)0x0;
              pppfStack_f0 = (float ***)0x0;
              pppfStack_f8 = (float ***)0x0;
              pppfStack_100 = (float ***)0x0;
              pppppfStack_108 = (float *****)0x0;
              pppppfStack_110 = (float *****)0x0;
              pppppfStack_118 = (float *****)0x0;
              pppppfStack_120 = (float *****)0x0;
              pppppfStack_128 = (float *****)0x0;
              pppppfStack_130 =
                   (float *****)
                   CONCAT44(pppppfStack_130._4_4_,*(undefined4 *)((long)ppppppfVar2 + uVar27 * 4));
              uVar19 = uVar23;
              uVar31 = uVar33;
              lVar36 = lVar30;
              do {
                uVar21 = ((long)pppppfStack_1e8 - (long)pppppfStack_1f0 >> 3) * -0x5555555555555555;
                if ((((uVar21 < uVar19 || uVar21 - uVar19 == 0) ||
                     (*(long *)((long)pppppfStack_1f0 + lVar36) ==
                      ((long *)((long)pppppfStack_1f0 + lVar36))[-1])) ||
                    ((FUN_10a0ca014(&pppppfStack_128),
                     uVar21 = ((long)pppppfStack_1e8 - (long)pppppfStack_1f0 >> 3) *
                              -0x5555555555555555,
                     uVar21 < lVar39 + uVar19 || uVar21 - (lVar39 + uVar19) == 0 ||
                     ((plVar1 = (long *)((long)pppppfStack_1f0 + lVar36 + lVar39 * 0x18),
                      *plVar1 == plVar1[-1] ||
                      (FUN_10a0ca014(&pppppfStack_110), uVar21 = lVar39 * 2 + uVar19,
                      uVar25 = ((long)pppppfStack_1e8 - (long)pppppfStack_1f0 >> 3) *
                               -0x5555555555555555, uVar25 < uVar21 || uVar25 - uVar21 == 0)))))) ||
                   (puVar16 = (undefined8 *)((long)pppppfStack_1f0 + lVar36 + lVar39 * 0x30),
                   ppppppfVar26 = (float ******)puVar16[-1], (float ******)*puVar16 == ppppppfVar26)
                   ) goto LAB_10a0a48a4;
                FUN_10a0ca014(&pppfStack_f8);
                uVar19 = uVar19 + 1;
                lVar36 = lVar36 + 0x18;
                uVar31 = uVar31 - 1;
              } while (uVar31 != 0);
            }
            if (uVar27 == uVar18) goto LAB_10a0a48a4;
            pppppfVar22 = pppppfVar14 + uVar27 * 10;
            *(undefined4 *)pppppfVar22 = pppppfStack_130._0_4_;
            ppppfVar13 = pppppfVar22[1];
            if (ppppfVar13 != (float ****)0x0) {
              pppppfVar22[2] = ppppfVar13;
              __ZdlPv();
              pppppfVar22[1] = (float ****)0x0;
              pppppfVar22[2] = (float ****)0x0;
              pppppfVar22[3] = (float ****)0x0;
            }
            ppppfVar13 = pppppfVar22[4];
            pppppfVar22[2] = (float ****)pppppfStack_120;
            pppppfVar22[1] = (float ****)pppppfStack_128;
            pppppfVar22[3] = (float ****)pppppfStack_118;
            pppppfStack_120 = (float *****)0x0;
            pppppfStack_118 = (float *****)0x0;
            pppppfStack_128 = (float *****)0x0;
            if (ppppfVar13 != (float ****)0x0) {
              pppppfVar22[5] = ppppfVar13;
              __ZdlPv();
              pppppfVar22[4] = (float ****)0x0;
              pppppfVar22[5] = (float ****)0x0;
              pppppfVar22[6] = (float ****)0x0;
            }
            ppppfVar13 = pppppfVar22[7];
            pppppfVar22[5] = (float ****)pppppfStack_108;
            pppppfVar22[4] = (float ****)pppppfStack_110;
            pppppfVar22[6] = (float ****)pppfStack_100;
            pppppfStack_108 = (float *****)0x0;
            pppfStack_100 = (float ***)0x0;
            pppppfStack_110 = (float *****)0x0;
            if (ppppfVar13 != (float ****)0x0) {
              pppppfVar22[8] = ppppfVar13;
              __ZdlPv();
              pppppfVar22[7] = (float ****)0x0;
              pppppfVar22[8] = (float ****)0x0;
              pppppfVar22[9] = (float ****)0x0;
            }
            pppppfVar22[8] = (float ****)pppfStack_f0;
            pppppfVar22[7] = (float ****)pppfStack_f8;
            pppppfVar22[9] = (float ****)pppfStack_e8;
            pppfStack_f0 = (float ***)0x0;
            pppfStack_e8 = (float ***)0x0;
            pppfStack_f8 = (float ***)0x0;
            if ((float ******)pppppfStack_110 != (float ******)0x0) {
              pppppfStack_108 = pppppfStack_110;
              __ZdlPv();
            }
            if ((float ******)pppppfStack_128 != (float ******)0x0) {
              pppppfStack_120 = pppppfStack_128;
              __ZdlPv();
            }
            uVar27 = uVar27 + 1;
            uVar23 = uVar23 + uVar33;
            lVar30 = lVar30 + uVar33 * 0x18;
          } while (uVar27 != uVar18);
          if (pppppfVar24 != pppppfVar24 + lVar20 * -2) {
            uVar27 = 0;
            do {
              if ((uVar18 <= uVar27) || (uVar23 = uVar27 + 1, uVar18 <= uVar23)) goto LAB_10a0a48a4;
              pppppfVar38 = pppppfVar14 + uVar27 * 10;
              pppppfVar24 = pppppfVar14 + uVar23 * 10;
              fVar45 = *(float *)pppppfVar38;
              fVar40 = *(float *)pppppfVar24 - fVar45;
              if ((long)((double)fVar40 / param_1) != 0) {
                lVar20 = 0;
                do {
                  pppppfStack_d8 = (float *****)0x0;
                  pppppfStack_d0 = (float *****)0x0;
                  pppppfStack_c8 = (float *****)0x0;
                  pppppfStack_e0 = (float *****)CONCAT44(pppppfStack_e0._4_4_,fVar45);
                  ppppfVar13 = pppppfVar38[4];
                  if (pppppfVar38[5] != ppppfVar13) {
                    uVar27 = 0;
                    do {
                      if ((((ulong)((long)pppppfVar38[8] - (long)pppppfVar38[7] >> 2) <= uVar27) ||
                          ((ulong)((long)pppppfVar24[5] - (long)pppppfVar24[4] >> 2) <= uVar27)) ||
                         ((ulong)((long)pppppfVar24[2] - (long)pppppfVar24[1] >> 2) <= uVar27))
                      goto LAB_10a0a48a4;
                      fVar41 = (fVar45 - *(float *)pppppfVar38) / fVar40;
                      fVar42 = fVar41 * fVar41;
                      fVar43 = fVar41 * fVar42;
                      pppppfStack_130 =
                           (float *****)
                           CONCAT44(pppppfStack_130._4_4_,
                                    fVar40 * *(float *)((long)pppppfVar38[7] + uVar27 * 4) *
                                    (fVar41 + fVar43 + fVar42 * -2.0) +
                                    ((fVar43 * 2.0 - fVar42 * 3.0) + 1.0) *
                                    *(float *)((long)ppppfVar13 + uVar27 * 4) +
                                    *(float *)((long)pppppfVar24[4] + uVar27 * 4) *
                                    (fVar42 * 3.0 + fVar43 * -2.0) +
                                    fVar40 * *(float *)((long)pppppfVar24[1] + uVar27 * 4) *
                                    (fVar43 - fVar42));
                      ppppppfVar26 = &pppppfStack_130;
                      FUN_10a0ca014(&pppppfStack_d8);
                      uVar27 = uVar27 + 1;
                      ppppfVar13 = pppppfVar38[4];
                    } while (uVar27 < (ulong)((long)pppppfVar38[5] - (long)ppppfVar13 >> 2));
                  }
                  pppppfVar14 = pppppfStack_158;
                  if (pppppfStack_158 < pppppfStack_150) {
                    *(undefined4 *)pppppfStack_158 = pppppfStack_e0._0_4_;
                    pppppfStack_158[2] = (float ****)0x0;
                    pppppfStack_158[3] = (float ****)0x0;
                    pppppfStack_158[1] = (float ****)0x0;
                    ppppppfVar26 = (float ******)pppppfStack_d8;
                    FUN_10a0ca588();
                    ppppppfVar35 = (float ******)(pppppfVar14 + 4);
                  }
                  else {
                    lVar30 = (long)pppppfStack_158 - (long)pppppfStack_160;
                    pppppfVar14 = (float *****)((lVar30 >> 5) + 1);
                    if ((ulong)pppppfVar14 >> 0x3b != 0) {
                      FUN_10a0ca638();
                      goto LAB_10a0a48a4;
                    }
                    pppppfVar22 = (float *****)((long)pppppfStack_150 - (long)pppppfStack_160 >> 4);
                    if (pppppfVar22 <= pppppfVar14) {
                      pppppfVar22 = pppppfVar14;
                    }
                    if (0x7fffffffffffffdf < (ulong)((long)pppppfStack_150 - (long)pppppfStack_160))
                    {
                      pppppfVar22 = (float *****)0x7ffffffffffffff;
                    }
                    pppppfStack_110 = (float *****)&pppppfStack_160;
                    if (pppppfVar22 == (float *****)0x0) {
                      ppppppfVar26 = (float ******)0x0;
                    }
                    else {
                      FUN_10a0ca64c();
                    }
                    pppppfVar14 = (float *****)((long)pppppfVar22 + lVar30);
                    *(undefined4 *)pppppfVar14 = pppppfStack_e0._0_4_;
                    pppppfVar14[2] = (float ****)0x0;
                    pppppfVar14[3] = (float ****)0x0;
                    pppppfVar14[1] = (float ****)0x0;
                    pppppfStack_130 = pppppfVar22;
                    pppppfStack_128 = pppppfVar14;
                    pppppfStack_120 = pppppfVar14;
                    pppppfStack_118 = pppppfVar22 + (long)ppppppfVar26 * 4;
                    FUN_10a0ca588();
                    ppppppfVar35 = (float ******)(pppppfVar14 + 4);
                    ppppppfVar2 = (float ******)
                                  ((long)pppppfVar14 +
                                  ((long)pppppfStack_160 - (long)pppppfStack_158));
                    func_0x00010a0ca680(pppppfStack_160,pppppfStack_158,ppppppfVar2);
                    pppppfStack_120 = pppppfStack_160;
                    pppppfStack_118 = pppppfStack_150;
                    pppppfStack_130 = pppppfStack_160;
                    pppppfStack_128 = pppppfStack_160;
                    pppppfStack_160 = (float *****)ppppppfVar2;
                    ppppppfVar2 = (float ******)pppppfStack_158;
                    pppppfStack_158 = (float *****)ppppppfVar35;
                    pppppfStack_150 = pppppfVar22 + (long)ppppppfVar26 * 4;
                    func_0x00010a0ca700(&pppppfStack_130);
                    ppppppfVar26 = (float ******)pppppfStack_158;
                  }
                  pppppfStack_158 = (float *****)ppppppfVar35;
                  if ((float ******)pppppfStack_d8 != (float ******)0x0) {
                    pppppfStack_d0 = pppppfStack_d8;
                    __ZdlPv();
                  }
                  fVar45 = (float)(param_1 + (double)fVar45);
                  lVar20 = lVar20 + 1;
                  pppppfVar14 = (float *****)ppppfStack_210;
                } while (lVar20 != (long)((double)fVar40 / param_1));
              }
              uVar18 = ((long)pppppfVar32 - (long)pppppfVar14 >> 4) * -0x3333333333333333;
              uVar27 = uVar23;
            } while (uVar23 < uVar18 - 1);
          }
          FUN_10a0ca8d8(&ppppfStack_210);
          goto LAB_10a0a3fbc;
        }
      }
      else if (pppppfVar32 == (float *****)0x4) {
        ppppppfVar35 = (float ******)*unaff_x22;
        if (-1 < (char)bVar6) {
          ppppppfVar35 = unaff_x22;
        }
        if (*(int *)ppppppfVar35 == 0x50455453) {
          if (pppppfVar38 != (float *****)0x1) {
            lVar20 = 0;
            do {
              ppppppfVar35 = (float ******)((long)ppppppfVar2 + 4);
              FUN_10a0c9f08(&pppppfStack_130,&pppppfStack_1f0,uStack_218,lVar20);
              pppppfVar32 = pppppfStack_158;
              if (pppppfStack_158 < pppppfStack_150) {
                *(undefined4 *)pppppfStack_158 = *(undefined4 *)ppppppfVar2;
                pppppfStack_158[2] = (float ****)0x0;
                pppppfStack_158[3] = (float ****)0x0;
                pppppfStack_158[1] = (float ****)0x0;
                FUN_10a0ca588();
                ppppppfVar34 = (float ******)(pppppfVar32 + 4);
              }
              else {
                ppppppfVar34 = &pppppfStack_160;
                FUN_10a0ca760(ppppppfVar34,ppppppfVar2,&pppppfStack_130);
              }
              pppppfStack_158 = (float *****)ppppppfVar34;
              if (ppppppfVar34 < pppppfStack_150) {
                *(undefined4 *)ppppppfVar34 = *(undefined4 *)ppppppfVar35;
                ppppppfVar34[2] = (float *****)0x0;
                ppppppfVar34[3] = (float *****)0x0;
                ppppppfVar34[1] = (float *****)0x0;
                ppppppfVar26 = (float ******)pppppfStack_130;
                FUN_10a0ca588();
                ppppppfVar34 = ppppppfVar34 + 4;
              }
              else {
                ppppppfVar34 = &pppppfStack_160;
                ppppppfVar26 = ppppppfVar35;
                FUN_10a0ca760(ppppppfVar34,ppppppfVar35,&pppppfStack_130);
              }
              pppppfStack_158 = (float *****)ppppppfVar34;
              if ((float ******)pppppfStack_130 != (float ******)0x0) {
                pppppfStack_128 = pppppfStack_130;
                __ZdlPv();
              }
              lVar20 = lVar20 + 1;
              ppppppfVar2 = ppppppfVar35;
            } while ((long)pppppfVar38 + -1 != lVar20);
          }
          goto LAB_10a0a3fbc;
        }
      }
LAB_10a0a4678:
      uVar15 = 0x10;
      ___cxa_allocate_exception(0x10);
      FUN_10a0ca0d8(&pppppfStack_130,unaff_x22,&UNK_10f6380b8);
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (uVar15,&pppppfStack_130);
      ___cxa_throw(uVar15,PTR___ZTISt13runtime_error_110346a40,
                   PTR___ZNSt13runtime_errorD1Ev_1103461d8);
      goto LAB_10a0a48a4;
    }
    uVar15 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
  }
LAB_10a0a46fc:
  ___cxa_throw(uVar15,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
LAB_10a0a48a4:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a0a48a8);
  (*pcVar10)();
}



/* Entry: 10a0a4bec; end: 10a0a4d13;  */

/* WARNING: Possible PIC construction at 0x00010a050fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a050fac) */

void FUN_10a0a4bec(char *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 **ppuVar11;
  undefined8 uVar12;
  undefined1 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_1 == '\0') {
    *param_1 = '\x02';
    plVar5 = (long *)0x18;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = 0;
    *(long **)(param_1 + 8) = plVar5;
  }
  else {
    if (*param_1 != '\x02') {
      uVar12 = 0x20;
      ___cxa_allocate_exception(0x20);
      func_0x00010937bcec(param_1);
      func_0x000107c2b054(auStack_60,param_1);
      FUN_109feb280(&puStack_48,&UNK_10f5755d0,auStack_60);
      func_0x00010937bbbc(uVar12,0x134,&puStack_48);
      ___cxa_throw(uVar12,&PTR_DAT_110af4510,&DAT_10937bd14);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0a4cbc);
      (*pcVar2)();
    }
    plVar5 = *(long **)(param_1 + 8);
  }
  ppuVar3 = (undefined1 **)auStack_60;
  ppuVar11 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar6 = (undefined1 *)plVar5[1];
  if ((undefined1 *)plVar5[2] <= puVar6) {
    lVar10 = (long)puVar6 - *plVar5;
    uVar1 = (lVar10 >> 4) + 1;
    if (uVar1 >> 0x3c == 0) {
      uVar7 = plVar5[2] - *plVar5;
      uVar8 = (long)uVar7 >> 3;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7fffffffffffffef < uVar7) {
        uVar8 = 0xfffffffffffffff;
      }
      plStack_38 = plVar5;
      if (uVar8 == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = plVar5;
        FUN_10a051010();
      }
      puStack_50 = (undefined1 *)((long)plVar4 + lVar10);
      plStack_40 = plVar4 + uVar8 * 2;
      *puStack_50 = *param_2;
      *(undefined8 *)(puStack_50 + 8) = *(undefined8 *)(param_2 + 8);
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      puStack_48 = puStack_50 + 0x10;
      puVar6 = (undefined1 *)*plVar5;
      param_3 = (undefined1 *)plVar5[1];
      param_4 = puStack_50 + ((long)puVar6 - (long)param_3);
      uVar12 = 0x10a050fac;
      param_2 = param_4;
      plStack_58 = plVar4;
    }
    else {
      puVar6 = param_2;
      FUN_10a050ffc();
      func_0x000109381644(&plStack_58);
      __Unwind_Resume(plVar5);
      pcStack_68 = FUN_10a050ffc;
      ppuStack_70 = ppuVar11;
      FUN_109ffde64(&UNK_10f6334ac);
      ppuVar3 = &puStack_90;
      pcStack_78 = FUN_10a051010;
      ppuVar11 = &puStack_80;
      puStack_90 = param_2;
      plStack_88 = plVar5;
      if ((ulong)puVar6 >> 0x3c == 0) {
        puStack_80 = (undefined1 *)&ppuStack_70;
        __Znwm((long)puVar6 << 4);
        return;
      }
      uVar12 = 0x10a051044;
      puStack_80 = (undefined1 *)&ppuStack_70;
      func_0x000109ffded8();
    }
    if (puVar6 != param_3) {
      *(undefined1 **)((long)ppuVar3 + -0x20) = param_2;
      *(long **)((long)ppuVar3 + -0x18) = plVar5;
      *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar11;
      *(undefined8 *)((long)ppuVar3 + -8) = uVar12;
      puVar9 = puVar6;
      do {
        *param_4 = *puVar9;
        *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar9 + 8);
        *puVar9 = 0;
        *(undefined8 *)(puVar9 + 8) = 0;
        puVar9 = puVar9 + 0x10;
        param_4 = param_4 + 0x10;
      } while (puVar9 != param_3);
      do {
        puVar9 = puVar6 + 0x10;
        func_0x000109380ffc(puVar6 + 8,*puVar6);
        puVar6 = puVar9;
      } while (puVar9 != param_3);
    }
    return;
  }
  *puVar6 = *param_2;
  *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(param_2 + 8);
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  plVar5[1] = (long)(puVar6 + 0x10);
  return;
}



/* Entry: 10a0a4d14; end: 10a0a4dc7;  */

void FUN_10a0a4d14(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10a0dd22c(&uStack_40);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a0dd048(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a0a4dc8; end: 10a0a4e33;  */

bool FUN_10a0a4dc8(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar6 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    _memcmp(plVar6,plVar3);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 10a0a4e34; end: 10a0a513f;  */

void FUN_10a0a4e34(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined1 **ppuVar2;
  undefined *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte bVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 *puStack_80;
  ulong uStack_78;
  byte bStack_69;
  byte abStack_67 [7];
  
  bVar7 = *(byte *)((long)param_2 + 0x17);
  lVar11 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c2b054(&puStack_80,&UNK_10f636fe2);
  puVar3 = PTR___DefaultRuneLocale_11034bcf8;
  uVar12 = (uint)lVar11;
  if (-1 < (char)bVar7) {
    uVar12 = (uint)bVar7;
  }
  if (uVar12 != 0) {
    uVar13 = 0;
    iVar10 = 0;
    do {
      bVar7 = *(byte *)((long)param_2 + 0x17);
      uVar8 = param_2[1];
      if (-1 < (char)bVar7) {
        uVar8 = (ulong)bVar7;
      }
      if (uVar8 < uVar13) {
LAB_10a0a5100:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0a5104);
        (*pcVar4)();
      }
      plVar1 = (long *)*param_2;
      if (-1 < (char)bVar7) {
        plVar1 = param_2;
      }
      bVar7 = *(byte *)((long)plVar1 + uVar13);
      uVar8 = (ulong)bVar7;
      if (bVar7 == 0x3d) break;
      if ((char)bVar7 < '\0') {
        ___maskrune(uVar8,0x500);
        uVar5 = (uint)uVar8;
      }
      else {
        uVar5 = *(uint *)(puVar3 + uVar8 * 4 + 0x3c) & 0x500;
      }
      if ((bVar7 & 0xfb) != 0x2b && uVar5 == 0) break;
      bVar7 = *(byte *)((long)param_2 + 0x17);
      uVar8 = param_2[1];
      if (-1 < (char)bVar7) {
        uVar8 = (ulong)bVar7;
      }
      if (uVar8 < uVar13) goto LAB_10a0a5100;
      plVar1 = (long *)*param_2;
      if (-1 < (char)bVar7) {
        plVar1 = param_2;
      }
      abStack_67[(long)iVar10 + 3] = *(byte *)((long)plVar1 + uVar13);
      iVar10 = iVar10 + 1;
      if (iVar10 == 4) {
        lVar11 = 0;
        uVar8 = uStack_78;
        ppuVar2 = (undefined1 **)puStack_80;
        if (-1 < (char)bStack_69) {
          uVar8 = (ulong)bStack_69;
          ppuVar2 = &puStack_80;
        }
        do {
          if (uVar8 == 0) {
            bVar7 = 0xff;
          }
          else {
            puVar6 = (undefined1 *)ppuVar2;
            _memchr(ppuVar2,(long)(char)abStack_67[lVar11 + 3],uVar8);
            bVar7 = (char)puVar6 - (char)ppuVar2;
            if (puVar6 == (undefined1 *)0x0) {
              bVar7 = 0xff;
            }
          }
          abStack_67[lVar11 + 3] = bVar7;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 4);
        lVar11 = 0;
        abStack_67[0] = abStack_67[3] << 2 | abStack_67[4] >> 4 & 3;
        abStack_67[1] = abStack_67[4] << 4 | abStack_67[5] >> 2 & 0xf;
        abStack_67[2] = abStack_67[6] + abStack_67[5] * '@';
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_1,(long)(char)abStack_67[lVar11]);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 3);
        iVar10 = 0;
      }
      uVar13 = uVar13 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (iVar10 != 0) {
      if (iVar10 < 4) {
        _bzero(abStack_67 + (long)iVar10 + 3,(ulong)(3 - iVar10) + 1);
      }
      lVar11 = 0;
      uVar13 = uStack_78;
      ppuVar2 = (undefined1 **)puStack_80;
      if (-1 < (char)bStack_69) {
        uVar13 = (ulong)bStack_69;
        ppuVar2 = &puStack_80;
      }
      do {
        if (uVar13 == 0) {
          bVar7 = 0xff;
        }
        else {
          puVar6 = (undefined1 *)ppuVar2;
          _memchr(ppuVar2,(long)(char)abStack_67[lVar11 + 3],uVar13);
          bVar7 = (char)puVar6 - (char)ppuVar2;
          if (puVar6 == (undefined1 *)0x0) {
            bVar7 = 0xff;
          }
        }
        abStack_67[lVar11 + 3] = bVar7;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 4);
      abStack_67[0] = abStack_67[3] << 2 | abStack_67[4] >> 4 & 3;
      abStack_67[1] = abStack_67[4] << 4 | abStack_67[5] >> 2 & 0xf;
      abStack_67[2] = abStack_67[6] + abStack_67[5] * '@';
      if (1 < iVar10) {
        uVar13 = (ulong)(iVar10 - 1);
        pbVar9 = abStack_67;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_1,(long)(char)*pbVar9);
          uVar13 = uVar13 - 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar13 != 0);
      }
    }
  }
  if ((char)bStack_69 < '\0') {
    __ZdlPv(puStack_80);
  }
  return;
}



/* Entry: 10a0a5140; end: 10a0a518b;  */

bool FUN_10a0a5140(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  _fopen(plVar1,&UNK_10f432965);
  if (plVar1 != (long *)0x0) {
    _fclose(plVar1);
  }
  return plVar1 != (long *)0x0;
}



/* Entry: 10a0a518c; end: 10a0a51b3;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a0a518c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    lVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar2;
    param_1[2] = param_2[2];
    return;
  }
  lVar2 = *param_2;
  uVar1 = param_2[1];
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10a0a51b4; end: 10a0a55a7;  */

long FUN_10a0a51b4(long *param_1,long param_2,long *param_3)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long alStack_338 [2];
  char cStack_321;
  undefined8 ***pppuStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [16];
  uint auStack_278 [98];
  undefined **appuStack_f0 [6];
  undefined8 uStack_c0;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar4 = param_3;
  }
  uStack_c0 = 0;
  appuStack_f0[0] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_11087cfe0;
  ppuStack_298 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_11087cfb8;
  uStack_290 = 0;
  __ZNSt3__18ios_base4initEPv(appuStack_f0,auStack_288);
  uStack_68 = 0;
  uStack_60 = 0xffffffff;
  ppuStack_298 = &PTR_DAT_11087cf48;
  appuStack_f0[0] = &PTR_DAT_11087cf70;
  func_0x000107c28024(auStack_288);
  puVar3 = auStack_288;
  func_0x000107c28028(puVar3,plVar4,0xc);
  if (puVar3 == (undefined1 *)0x0) {
    __ZNSt3__18ios_base5clearEj
              ((undefined *)((long)&ppuStack_298 + (long)ppuStack_298[-3]),
               *(uint *)((long)auStack_278 + (long)ppuStack_298[-3]) | 4);
  }
  if ((*(byte *)((long)auStack_278 + (long)ppuStack_298[-3]) & 5) == 0) {
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE(&ppuStack_298,0,2)
    ;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5tellgEv(&pppuStack_320,&ppuStack_298);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE(&ppuStack_298,0,0)
    ;
    if ((long)uStack_2a0 < 0) {
      if (param_2 != 0) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (alStack_338,&UNK_10f63703b,param_3);
        plVar4 = alStack_338;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar4,&UNK_10f637050,0x26);
        uStack_318 = plVar4[1];
        pppuStack_320 = (undefined8 ***)*plVar4;
        uStack_310 = plVar4[2];
        plVar4[1] = 0;
        plVar4[2] = 0;
        *plVar4 = 0;
        uVar6 = uStack_318;
        ppppuVar1 = (undefined8 ****)pppuStack_320;
        if (-1 < (long)uStack_310) {
          uVar6 = uStack_310 >> 0x38;
          ppppuVar1 = &pppuStack_320;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppuVar1,uVar6);
        goto LAB_10a0a530c;
      }
    }
    else if (uStack_2a0 == 0) {
      if (param_2 != 0) {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (alStack_338,&UNK_10f637077,param_3);
        plVar4 = alStack_338;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar4,&DAT_10f68f57e,1);
        uStack_318 = plVar4[1];
        pppuStack_320 = (undefined8 ***)*plVar4;
        uStack_310 = plVar4[2];
        plVar4[1] = 0;
        plVar4[2] = 0;
        *plVar4 = 0;
        uVar6 = uStack_318;
        ppppuVar1 = (undefined8 ****)pppuStack_320;
        if (-1 < (long)uStack_310) {
          uVar6 = uStack_310 >> 0x38;
          ppppuVar1 = &pppuStack_320;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppuVar1,uVar6);
        goto LAB_10a0a530c;
      }
    }
    else {
      lVar5 = *param_1;
      lVar7 = param_1[1];
      uVar6 = lVar7 - lVar5;
      if (uStack_2a0 < uVar6 || uStack_2a0 - uVar6 == 0) {
        if (uStack_2a0 < uVar6) {
          lVar7 = lVar5 + uStack_2a0;
          param_1[1] = lVar7;
        }
      }
      else {
        func_0x000107c27d58(param_1,uStack_2a0 - uVar6);
        lVar5 = *param_1;
        lVar7 = param_1[1];
      }
      if (lVar7 == lVar5) goto LAB_10a0a54fc;
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(&ppuStack_298,lVar5,uStack_2a0);
      param_2 = 1;
    }
  }
  else if (param_2 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (alStack_338,&UNK_10f637026,param_3);
    plVar4 = alStack_338;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar4,&DAT_10f68f57e,1);
    uStack_318 = plVar4[1];
    pppuStack_320 = (undefined8 ***)*plVar4;
    uStack_310 = plVar4[2];
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    uVar6 = uStack_318;
    ppppuVar1 = (undefined8 ****)pppuStack_320;
    if (-1 < (long)uStack_310) {
      uVar6 = uStack_310 >> 0x38;
      ppppuVar1 = &pppuStack_320;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppuVar1,uVar6);
LAB_10a0a530c:
    if ((long)uStack_310 < 0) {
      __ZdlPv(pppuStack_320);
    }
    if (cStack_321 < '\0') {
      __ZdlPv(alStack_338[0]);
    }
    param_2 = 0;
  }
  ppuStack_298 = &PTR_DAT_11087cf48;
  appuStack_f0[0] = &PTR_DAT_11087cf70;
  func_0x000107c28018(auStack_288);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_298,&PTR_PTR_11087cf88);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_2;
  }
  ___stack_chk_fail();
LAB_10a0a54fc:
  FUN_10a0cd3e4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a0a5504);
  (*pcVar2)();
}



/* Entry: 10a0a55a8; end: 10a0a58d3;  */

long FUN_10a0a55a8(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long *plVar6;
  long alStack_2c8 [2];
  char cStack_2b1;
  undefined8 ***pppuStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  undefined **ppuStack_290;
  undefined1 auStack_288 [24];
  uint auStack_270 [96];
  undefined **appuStack_f0 [6];
  undefined8 uStack_c0;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar6 = param_2;
  }
  uStack_c0 = 0;
  ppuStack_290 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11087cbb0;
  appuStack_f0[0] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11087cbd8;
  __ZNSt3__18ios_base4initEPv(appuStack_f0,auStack_288);
  uStack_68 = 0;
  uStack_60 = 0xffffffff;
  ppuStack_290 = &PTR_DAT_11087cb40;
  appuStack_f0[0] = &PTR_DAT_11087cb68;
  func_0x000107c28024(auStack_288);
  puVar5 = auStack_288;
  func_0x000107c28028(puVar5,plVar6,0x14);
  if (puVar5 == (undefined1 *)0x0) {
    __ZNSt3__18ios_base5clearEj
              (auStack_288 + (long)(ppuStack_290[-3] + -8),
               *(uint *)((long)auStack_270 + (long)ppuStack_290[-3]) | 4);
  }
  if ((*(byte *)((long)auStack_270 + (long)ppuStack_290[-3]) & 5) == 0) {
    lVar2 = param_3[1] - *param_3;
    if (lVar2 == 0) goto LAB_10a0a583c;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_290,*param_3,lVar2);
    if ((*(byte *)((long)auStack_270 + (long)ppuStack_290[-3]) & 5) == 0) {
      param_1 = 1;
    }
    else if (param_1 != 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (alStack_2c8,&UNK_10f6370a7,param_2);
      plVar6 = alStack_2c8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar6,&DAT_10f68f57e,1);
      uStack_2a8 = plVar6[1];
      pppuStack_2b0 = (undefined8 ***)*plVar6;
      uStack_2a0 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar1 = uStack_2a8;
      ppppuVar3 = (undefined8 ****)pppuStack_2b0;
      if (-1 < (long)uStack_2a0) {
        uVar1 = uStack_2a0 >> 0x38;
        ppppuVar3 = &pppuStack_2b0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,ppppuVar3,uVar1);
      goto LAB_10a0a57a0;
    }
  }
  else if (param_1 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (alStack_2c8,&UNK_10f637088,param_2);
    plVar6 = alStack_2c8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar6,&DAT_10f68f57e,1);
    uStack_2a8 = plVar6[1];
    pppuStack_2b0 = (undefined8 ***)*plVar6;
    uStack_2a0 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar1 = uStack_2a8;
    ppppuVar3 = (undefined8 ****)pppuStack_2b0;
    if (-1 < (long)uStack_2a0) {
      uVar1 = uStack_2a0 >> 0x38;
      ppppuVar3 = &pppuStack_2b0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,ppppuVar3,uVar1);
LAB_10a0a57a0:
    if ((long)uStack_2a0 < 0) {
      __ZdlPv(pppuStack_2b0);
    }
    if (cStack_2b1 < '\0') {
      __ZdlPv(alStack_2c8[0]);
    }
    param_1 = 0;
  }
  ppuStack_290 = &PTR_DAT_11087cb40;
  appuStack_f0[0] = &PTR_DAT_11087cb68;
  func_0x000107c28018(auStack_288);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_290,&PTR_PTR_11087cb80);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_f0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10a0a583c:
  FUN_10a0cd3e4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0a5844);
  (*pcVar4)();
}



/* Entry: 10a0a58d4; end: 10a0a5e97;  */

bool FUN_10a0a58d4(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  char ****ppppcVar9;
  char ****ppppcVar10;
  undefined8 *puVar11;
  byte bVar12;
  char ***pppcStack_78;
  ulong uStack_70;
  byte bStack_61;
  
  func_0x000107c2b054(&pppcStack_78,&UNK_10f6370ba);
  bVar12 = bStack_61;
  ppppcVar10 = (char ****)pppcStack_78;
  uVar8 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar8 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar3 = param_1;
  }
  uVar1 = uStack_70;
  ppppcVar9 = (char ****)pppcStack_78;
  if (-1 < (char)bStack_61) {
    uVar1 = (ulong)bStack_61;
    ppppcVar9 = &pppcStack_78;
  }
  if (uVar1 != 0) {
    if ((long)uVar1 <= (long)uVar8) {
      puVar11 = (undefined8 *)((long)puVar3 + uVar8);
      cVar2 = *(char *)ppppcVar9;
      puVar5 = puVar3;
      do {
        if ((0xfffffffffffffffe < uVar8 - uVar1) ||
           (_memchr(puVar5,(long)cVar2,(uVar8 - uVar1) + 1), puVar5 == (undefined8 *)0x0)) break;
        puVar6 = puVar5;
        _memcmp();
        if ((int)puVar6 == 0) {
          if ((puVar5 != puVar11) && (puVar5 == puVar3)) goto LAB_10a0a5e48;
          break;
        }
        puVar5 = (undefined8 *)((long)puVar5 + 1);
        uVar8 = (long)puVar11 - (long)puVar5;
      } while ((long)uVar1 <= (long)uVar8);
    }
    func_0x000107c2c4d8(&pppcStack_78,"data:image/jpeg;base64,",0x17);
    bVar12 = bStack_61;
    ppppcVar10 = (char ****)pppcStack_78;
    uVar8 = param_1[1];
    puVar3 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar8 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar3 = param_1;
    }
    uVar1 = uStack_70;
    ppppcVar9 = (char ****)pppcStack_78;
    if (-1 < (char)bStack_61) {
      uVar1 = (ulong)bStack_61;
      ppppcVar9 = &pppcStack_78;
    }
    if (uVar1 != 0) {
      if ((long)uVar1 <= (long)uVar8) {
        puVar11 = (undefined8 *)((long)puVar3 + uVar8);
        cVar2 = *(char *)ppppcVar9;
        puVar5 = puVar3;
        do {
          if ((0xfffffffffffffffe < uVar8 - uVar1) ||
             (_memchr(puVar5,(long)cVar2,(uVar8 - uVar1) + 1), puVar5 == (undefined8 *)0x0)) break;
          puVar6 = puVar5;
          _memcmp();
          if ((int)puVar6 == 0) {
            if ((puVar5 != puVar11) && (puVar5 == puVar3)) goto LAB_10a0a5e48;
            break;
          }
          puVar5 = (undefined8 *)((long)puVar5 + 1);
          uVar8 = (long)puVar11 - (long)puVar5;
        } while ((long)uVar1 <= (long)uVar8);
      }
      if ((char)bVar12 < '\0') {
        uStack_70 = 0x16;
        ppppcVar9 = ppppcVar10;
      }
      else {
        bStack_61 = 0x16;
        ppppcVar9 = &pppcStack_78;
      }
      builtin_strncpy((char *)((long)ppppcVar9 + 0xe),";base64,",8);
      ppppcVar9[1] = (char ***)0x623b676e702f6567;
      *ppppcVar9 = (char ***)0x616d693a61746164;
      ppppcVar10 = (char ****)pppcStack_78;
      *(char *)((long)ppppcVar9 + 0x16) = '\0';
      bVar12 = bStack_61;
      uVar8 = param_1[1];
      puVar3 = (undefined8 *)*param_1;
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar8 = (ulong)*(byte *)((long)param_1 + 0x17);
        puVar3 = param_1;
      }
      uVar1 = uStack_70;
      ppppcVar9 = (char ****)pppcStack_78;
      if (-1 < (char)bStack_61) {
        uVar1 = (ulong)bStack_61;
        ppppcVar9 = &pppcStack_78;
      }
      if (uVar1 != 0) {
        if ((long)uVar1 <= (long)uVar8) {
          puVar11 = (undefined8 *)((long)puVar3 + uVar8);
          cVar2 = *(char *)ppppcVar9;
          puVar5 = puVar3;
          do {
            if ((0xfffffffffffffffe < uVar8 - uVar1) ||
               (_memchr(puVar5,(long)cVar2,(uVar8 - uVar1) + 1), puVar5 == (undefined8 *)0x0))
            break;
            puVar6 = puVar5;
            _memcmp();
            if ((int)puVar6 == 0) {
              if ((puVar5 != puVar11) && (puVar5 == puVar3)) goto LAB_10a0a5e48;
              break;
            }
            puVar5 = (undefined8 *)((long)puVar5 + 1);
            uVar8 = (long)puVar11 - (long)puVar5;
          } while ((long)uVar1 <= (long)uVar8);
        }
        if ((char)bVar12 < '\0') {
          uStack_70 = 0x16;
          ppppcVar9 = ppppcVar10;
        }
        else {
          bStack_61 = 0x16;
          ppppcVar9 = &pppcStack_78;
        }
        builtin_strncpy((char *)((long)ppppcVar9 + 0xe),";base64,",8);
        ppppcVar9[1] = (char ***)0x623b706d622f6567;
        *ppppcVar9 = (char ***)0x616d693a61746164;
        ppppcVar10 = (char ****)pppcStack_78;
        *(char *)((long)ppppcVar9 + 0x16) = '\0';
        bVar12 = bStack_61;
        uVar8 = param_1[1];
        puVar3 = (undefined8 *)*param_1;
        if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
          uVar8 = (ulong)*(byte *)((long)param_1 + 0x17);
          puVar3 = param_1;
        }
        uVar1 = uStack_70;
        ppppcVar9 = (char ****)pppcStack_78;
        if (-1 < (char)bStack_61) {
          uVar1 = (ulong)bStack_61;
          ppppcVar9 = &pppcStack_78;
        }
        if (uVar1 != 0) {
          if ((long)uVar1 <= (long)uVar8) {
            puVar11 = (undefined8 *)((long)puVar3 + uVar8);
            cVar2 = *(char *)ppppcVar9;
            puVar5 = puVar3;
            do {
              if ((0xfffffffffffffffe < uVar8 - uVar1) ||
                 (_memchr(puVar5,(long)cVar2,(uVar8 - uVar1) + 1), puVar5 == (undefined8 *)0x0))
              break;
              puVar6 = puVar5;
              _memcmp();
              if ((int)puVar6 == 0) {
                if ((puVar5 != puVar11) && (puVar5 == puVar3)) goto LAB_10a0a5e48;
                break;
              }
              puVar5 = (undefined8 *)((long)puVar5 + 1);
              uVar8 = (long)puVar11 - (long)puVar5;
            } while ((long)uVar1 <= (long)uVar8);
          }
          if ((char)bVar12 < '\0') {
            uStack_70 = 0x16;
            ppppcVar9 = ppppcVar10;
          }
          else {
            bStack_61 = 0x16;
            ppppcVar9 = &pppcStack_78;
          }
          builtin_strncpy((char *)((long)ppppcVar9 + 0xe),";base64,",8);
          ppppcVar9[1] = (char ***)0x623b6669672f6567;
          *ppppcVar9 = (char ***)0x616d693a61746164;
          ppppcVar10 = (char ****)pppcStack_78;
          *(char *)((long)ppppcVar9 + 0x16) = '\0';
          bVar12 = bStack_61;
          uVar8 = param_1[1];
          puVar3 = (undefined8 *)*param_1;
          if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
            uVar8 = (ulong)*(byte *)((long)param_1 + 0x17);
            puVar3 = param_1;
          }
          uVar1 = uStack_70;
          ppppcVar9 = (char ****)pppcStack_78;
          if (-1 < (char)bStack_61) {
            uVar1 = (ulong)bStack_61;
            ppppcVar9 = &pppcStack_78;
          }
          if (uVar1 != 0) {
            if ((long)uVar1 <= (long)uVar8) {
              puVar11 = (undefined8 *)((long)puVar3 + uVar8);
              cVar2 = *(char *)ppppcVar9;
              puVar5 = puVar3;
              do {
                if ((0xfffffffffffffffe < uVar8 - uVar1) ||
                   (_memchr(puVar5,(long)cVar2,(uVar8 - uVar1) + 1), puVar5 == (undefined8 *)0x0))
                break;
                puVar6 = puVar5;
                _memcmp();
                if ((int)puVar6 == 0) {
                  if ((puVar5 != puVar11) && (puVar5 == puVar3)) goto LAB_10a0a5e48;
                  break;
                }
                puVar5 = (undefined8 *)((long)puVar5 + 1);
                uVar8 = (long)puVar11 - (long)puVar5;
              } while ((long)uVar1 <= (long)uVar8);
            }
            func_0x000107c2c4d8(&pppcStack_78,&UNK_10f637125,0x17);
            bVar12 = bStack_61;
            ppppcVar10 = (char ****)pppcStack_78;
            uVar8 = param_1[1];
            puVar3 = (undefined8 *)*param_1;
            if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
              uVar8 = (ulong)*(byte *)((long)param_1 + 0x17);
              puVar3 = param_1;
            }
            uVar1 = uStack_70;
            ppppcVar9 = (char ****)pppcStack_78;
            if (-1 < (char)bStack_61) {
              uVar1 = (ulong)bStack_61;
              ppppcVar9 = &pppcStack_78;
            }
            if (uVar1 != 0) {
              if ((long)uVar1 <= (long)uVar8) {
                puVar11 = (undefined8 *)((long)puVar3 + uVar8);
                cVar2 = *(char *)ppppcVar9;
                puVar5 = puVar3;
                do {
                  if ((0xfffffffffffffffe < uVar8 - uVar1) ||
                     (_memchr(puVar5,(long)cVar2,(uVar8 - uVar1) + 1), puVar5 == (undefined8 *)0x0))
                  break;
                  puVar6 = puVar5;
                  _memcmp();
                  if ((int)puVar6 == 0) {
                    if ((puVar5 != puVar11) && (puVar5 == puVar3)) goto LAB_10a0a5e48;
                    break;
                  }
                  puVar5 = (undefined8 *)((long)puVar5 + 1);
                  uVar8 = (long)puVar11 - (long)puVar5;
                } while ((long)uVar1 <= (long)uVar8);
              }
              func_0x000107c2c4d8(&pppcStack_78,&UNK_10f63713d,0x24);
              bVar12 = bStack_61;
              uVar8 = param_1[1];
              puVar3 = (undefined8 *)*param_1;
              if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
                uVar8 = (ulong)*(byte *)((long)param_1 + 0x17);
                puVar3 = param_1;
              }
              uVar1 = uStack_70;
              ppppcVar9 = (char ****)pppcStack_78;
              if (-1 < (char)bStack_61) {
                uVar1 = (ulong)bStack_61;
                ppppcVar9 = &pppcStack_78;
              }
              ppppcVar10 = (char ****)pppcStack_78;
              if (uVar1 != 0) {
                puVar5 = (undefined8 *)((long)puVar3 + uVar8);
                puVar11 = puVar5;
                if ((long)uVar1 <= (long)uVar8) {
                  cVar2 = *(char *)ppppcVar9;
                  puVar6 = puVar3;
                  do {
                    puVar11 = puVar5;
                    if (((0xfffffffffffffffe < uVar8 - uVar1) ||
                        (_memchr(puVar6,(long)cVar2,(uVar8 - uVar1) + 1),
                        puVar6 == (undefined8 *)0x0)) ||
                       (puVar7 = puVar6, _memcmp(), puVar11 = puVar6, (int)puVar7 == 0)) break;
                    puVar6 = (undefined8 *)((long)puVar6 + 1);
                    uVar8 = (long)puVar5 - (long)puVar6;
                    puVar11 = puVar5;
                  } while ((long)uVar1 <= (long)uVar8);
                }
                bVar4 = puVar11 != puVar5 && puVar11 == puVar3;
                goto LAB_10a0a5e4c;
              }
            }
          }
        }
      }
    }
  }
LAB_10a0a5e48:
  bVar4 = true;
LAB_10a0a5e4c:
  if ((char)bVar12 < '\0') {
    __ZdlPv(ppppcVar10);
  }
  return bVar4;
}



/* Entry: 10a0a5e98; end: 10a0a6aa7;  */

undefined8 FUN_10a0a5e98(long *param_1,char *param_2,undefined8 *param_3,ulong param_4,int param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  char *****pppppcVar12;
  char *pcVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  ulong uStack_b0;
  undefined7 uStack_a8;
  byte bStack_a1;
  undefined8 ****ppppuStack_a0;
  ulong uStack_98;
  undefined7 uStack_90;
  byte bStack_89;
  char ****ppppcStack_80;
  ulong uStack_78;
  byte bStack_69;
  undefined1 uStack_61;
  
  func_0x000107c2b054(&ppppcStack_80,&UNK_10f6370ba);
  ppppuStack_a0 = (undefined8 *****)0x0;
  uStack_98 = 0;
  uStack_90 = 0;
  bStack_89 = 0;
  uVar10 = param_3[1];
  puVar5 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar10 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar5 = param_3;
  }
  uVar11 = uStack_78;
  pppppcVar12 = (char *****)ppppcStack_80;
  if (-1 < (char)bStack_69) {
    uVar11 = (ulong)bStack_69;
    pppppcVar12 = &ppppcStack_80;
  }
  if (uVar11 == 0) {
LAB_10a0a5fa8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (auStack_d0,param_3,uVar11,0xffffffffffffffff,&uStack_61);
    FUN_10a0a4e34(&uStack_b8,auStack_d0);
    ppppuStack_a0 = (undefined8 ****)CONCAT71(uStack_b7,uStack_b8);
    uStack_98 = uStack_b0;
    uStack_90 = uStack_a8;
    bStack_89 = bStack_a1;
    bStack_a1 = 0;
    uStack_b8 = 0;
    if (cStack_b9 < '\0') {
      __ZdlPv(auStack_d0[0]);
    }
    uVar16 = (ulong)bStack_89;
    uVar10 = uStack_98;
  }
  else if ((long)uVar10 < (long)uVar11) {
    uVar16 = 0;
    uVar10 = 0;
  }
  else {
    puVar1 = (undefined8 *)((long)puVar5 + uVar10);
    cVar4 = *(char *)pppppcVar12;
    puVar6 = puVar5;
    do {
      if ((0xfffffffffffffffe < uVar10 - uVar11) ||
         (_memchr(puVar6,(long)cVar4,(uVar10 - uVar11) + 1), puVar6 == (undefined8 *)0x0)) break;
      puVar7 = puVar6;
      _memcmp();
      if ((int)puVar7 == 0) {
        uVar16 = 0;
        uVar10 = 0;
        if ((puVar6 == puVar1) || (puVar6 != puVar5)) goto LAB_10a0a5ffc;
        goto LAB_10a0a5fa8;
      }
      puVar6 = (undefined8 *)((long)puVar6 + 1);
      uVar10 = (long)puVar1 - (long)puVar6;
    } while ((long)uVar11 <= (long)uVar10);
    uVar16 = 0;
    uVar10 = 0;
  }
LAB_10a0a5ffc:
  uVar11 = uVar10;
  if (-1 < (char)uVar16) {
    uVar11 = uVar16;
  }
  if (uVar11 == 0) {
    func_0x000107c2c4d8(&ppppcStack_80,"data:image/jpeg;base64,",0x17);
    uVar11 = param_3[1];
    puVar5 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar11 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar5 = param_3;
    }
    uVar2 = uStack_78;
    pppppcVar12 = (char *****)ppppcStack_80;
    if (-1 < (char)bStack_69) {
      uVar2 = (ulong)bStack_69;
      pppppcVar12 = &ppppcStack_80;
    }
    if (uVar2 == 0) {
LAB_10a0a6750:
      if (param_2[0x17] < '\0') {
        param_2[8] = '\n';
        param_2[9] = '\0';
        param_2[10] = '\0';
        param_2[0xb] = '\0';
        param_2[0xc] = '\0';
        param_2[0xd] = '\0';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        pcVar13 = *(char **)param_2;
      }
      else {
        param_2[0x17] = '\n';
        pcVar13 = param_2;
      }
      builtin_strncpy(pcVar13,"image/jpeg",0xb);
      uVar10 = uStack_78;
      if (-1 < (char)bStack_69) {
        uVar10 = (ulong)bStack_69;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (auStack_d0,param_3,uVar10,0xffffffffffffffff,&uStack_61);
      FUN_10a0a4e34(&uStack_b8,auStack_d0);
      if ((uint)uVar16 >> 7 != 0) {
        __ZdlPv(ppppuStack_a0);
      }
      ppppuStack_a0 = (undefined8 ****)CONCAT71(uStack_b7,uStack_b8);
      uStack_98 = uStack_b0;
      uStack_90 = uStack_a8;
      bStack_89 = bStack_a1;
      bStack_a1 = 0;
      uStack_b8 = 0;
      if (cStack_b9 < '\0') {
        __ZdlPv(auStack_d0[0]);
      }
      uVar16 = (ulong)bStack_89;
      uVar10 = uStack_98;
    }
    else if ((long)uVar2 <= (long)uVar11) {
      puVar1 = (undefined8 *)((long)puVar5 + uVar11);
      cVar4 = *(char *)pppppcVar12;
      puVar6 = puVar5;
      do {
        if ((0xfffffffffffffffe < uVar11 - uVar2) ||
           (_memchr(puVar6,(long)cVar4,(uVar11 - uVar2) + 1), puVar6 == (undefined8 *)0x0)) break;
        puVar7 = puVar6;
        _memcmp();
        if ((int)puVar7 == 0) {
          if ((puVar6 != puVar1) && (puVar6 == puVar5)) goto LAB_10a0a6750;
          break;
        }
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        uVar11 = (long)puVar1 - (long)puVar6;
      } while ((long)uVar2 <= (long)uVar11);
    }
  }
  uVar11 = uVar10;
  if (-1 < (char)uVar16) {
    uVar11 = uVar16;
  }
  if (uVar11 == 0) {
    if ((char)bStack_69 < '\0') {
      uStack_78 = 0x16;
      pppppcVar12 = (char *****)ppppcStack_80;
    }
    else {
      bStack_69 = 0x16;
      pppppcVar12 = &ppppcStack_80;
    }
    builtin_strncpy((char *)((long)pppppcVar12 + 0xe),";base64,",8);
    pppppcVar12[1] = (char ****)0x623b676e702f6567;
    *pppppcVar12 = (char ****)0x616d693a61746164;
    *(char *)((long)pppppcVar12 + 0x16) = '\0';
    uVar11 = param_3[1];
    puVar5 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar11 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar5 = param_3;
    }
    uVar2 = uStack_78;
    pppppcVar12 = (char *****)ppppcStack_80;
    if (-1 < (char)bStack_69) {
      uVar2 = (ulong)bStack_69;
      pppppcVar12 = &ppppcStack_80;
    }
    if (uVar2 == 0) {
LAB_10a0a65b0:
      if (param_2[0x17] < '\0') {
        param_2[8] = '\t';
        param_2[9] = '\0';
        param_2[10] = '\0';
        param_2[0xb] = '\0';
        param_2[0xc] = '\0';
        param_2[0xd] = '\0';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        pcVar13 = *(char **)param_2;
      }
      else {
        param_2[0x17] = '\t';
        pcVar13 = param_2;
      }
      builtin_strncpy(pcVar13,"image/png",10);
      uVar10 = uStack_78;
      if (-1 < (char)bStack_69) {
        uVar10 = (ulong)bStack_69;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (auStack_d0,param_3,uVar10,0xffffffffffffffff,&uStack_61);
      FUN_10a0a4e34(&uStack_b8,auStack_d0);
      if ((uint)uVar16 >> 7 != 0) {
        __ZdlPv(ppppuStack_a0);
      }
      ppppuStack_a0 = (undefined8 ****)CONCAT71(uStack_b7,uStack_b8);
      uStack_98 = uStack_b0;
      uStack_90 = uStack_a8;
      bStack_89 = bStack_a1;
      bStack_a1 = 0;
      uStack_b8 = 0;
      if (cStack_b9 < '\0') {
        __ZdlPv(auStack_d0[0]);
      }
      uVar16 = (ulong)bStack_89;
      uVar10 = uStack_98;
    }
    else if ((long)uVar2 <= (long)uVar11) {
      puVar1 = (undefined8 *)((long)puVar5 + uVar11);
      cVar4 = *(char *)pppppcVar12;
      puVar6 = puVar5;
      do {
        if ((0xfffffffffffffffe < uVar11 - uVar2) ||
           (_memchr(puVar6,(long)cVar4,(uVar11 - uVar2) + 1), puVar6 == (undefined8 *)0x0)) break;
        puVar7 = puVar6;
        _memcmp();
        if ((int)puVar7 == 0) {
          if ((puVar6 != puVar1) && (puVar6 == puVar5)) goto LAB_10a0a65b0;
          break;
        }
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        uVar11 = (long)puVar1 - (long)puVar6;
      } while ((long)uVar2 <= (long)uVar11);
    }
  }
  uVar11 = uVar10;
  if (-1 < (char)uVar16) {
    uVar11 = uVar16;
  }
  if (uVar11 == 0) {
    if ((char)bStack_69 < '\0') {
      uStack_78 = 0x16;
      pppppcVar12 = (char *****)ppppcStack_80;
    }
    else {
      bStack_69 = 0x16;
      pppppcVar12 = &ppppcStack_80;
    }
    builtin_strncpy((char *)((long)pppppcVar12 + 0xe),";base64,",8);
    pppppcVar12[1] = (char ****)0x623b706d622f6567;
    *pppppcVar12 = (char ****)0x616d693a61746164;
    *(char *)((long)pppppcVar12 + 0x16) = '\0';
    uVar11 = param_3[1];
    puVar5 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar11 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar5 = param_3;
    }
    uVar2 = uStack_78;
    pppppcVar12 = (char *****)ppppcStack_80;
    if (-1 < (char)bStack_69) {
      uVar2 = (ulong)bStack_69;
      pppppcVar12 = &ppppcStack_80;
    }
    if (uVar2 == 0) {
LAB_10a0a6680:
      if (param_2[0x17] < '\0') {
        param_2[8] = '\t';
        param_2[9] = '\0';
        param_2[10] = '\0';
        param_2[0xb] = '\0';
        param_2[0xc] = '\0';
        param_2[0xd] = '\0';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        pcVar13 = *(char **)param_2;
      }
      else {
        param_2[0x17] = '\t';
        pcVar13 = param_2;
      }
      builtin_strncpy(pcVar13,"image/bmp",10);
      uVar10 = uStack_78;
      if (-1 < (char)bStack_69) {
        uVar10 = (ulong)bStack_69;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (auStack_d0,param_3,uVar10,0xffffffffffffffff,&uStack_61);
      FUN_10a0a4e34(&uStack_b8,auStack_d0);
      if ((uint)uVar16 >> 7 != 0) {
        __ZdlPv(ppppuStack_a0);
      }
      ppppuStack_a0 = (undefined8 ****)CONCAT71(uStack_b7,uStack_b8);
      uStack_98 = uStack_b0;
      uStack_90 = uStack_a8;
      bStack_89 = bStack_a1;
      bStack_a1 = 0;
      uStack_b8 = 0;
      if (cStack_b9 < '\0') {
        __ZdlPv(auStack_d0[0]);
      }
      uVar16 = (ulong)bStack_89;
      uVar10 = uStack_98;
    }
    else if ((long)uVar2 <= (long)uVar11) {
      puVar1 = (undefined8 *)((long)puVar5 + uVar11);
      cVar4 = *(char *)pppppcVar12;
      puVar6 = puVar5;
      do {
        if ((0xfffffffffffffffe < uVar11 - uVar2) ||
           (_memchr(puVar6,(long)cVar4,(uVar11 - uVar2) + 1), puVar6 == (undefined8 *)0x0)) break;
        puVar7 = puVar6;
        _memcmp();
        if ((int)puVar7 == 0) {
          if ((puVar6 != puVar1) && (puVar6 == puVar5)) goto LAB_10a0a6680;
          break;
        }
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        uVar11 = (long)puVar1 - (long)puVar6;
      } while ((long)uVar2 <= (long)uVar11);
    }
  }
  uVar11 = uVar10;
  if (-1 < (char)uVar16) {
    uVar11 = uVar16;
  }
  if (uVar11 == 0) {
    if ((char)bStack_69 < '\0') {
      uStack_78 = 0x16;
      pppppcVar12 = (char *****)ppppcStack_80;
    }
    else {
      bStack_69 = 0x16;
      pppppcVar12 = &ppppcStack_80;
    }
    builtin_strncpy((char *)((long)pppppcVar12 + 0xe),";base64,",8);
    pppppcVar12[1] = (char ****)0x623b6669672f6567;
    *pppppcVar12 = (char ****)0x616d693a61746164;
    *(char *)((long)pppppcVar12 + 0x16) = '\0';
    uVar11 = param_3[1];
    puVar5 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar11 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar5 = param_3;
    }
    uVar2 = uStack_78;
    pppppcVar12 = (char *****)ppppcStack_80;
    if (-1 < (char)bStack_69) {
      uVar2 = (ulong)bStack_69;
      pppppcVar12 = &ppppcStack_80;
    }
    if (uVar2 == 0) {
LAB_10a0a6824:
      if (param_2[0x17] < '\0') {
        param_2[8] = '\t';
        param_2[9] = '\0';
        param_2[10] = '\0';
        param_2[0xb] = '\0';
        param_2[0xc] = '\0';
        param_2[0xd] = '\0';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        pcVar13 = *(char **)param_2;
      }
      else {
        param_2[0x17] = '\t';
        pcVar13 = param_2;
      }
      builtin_strncpy(pcVar13,"image/gif",10);
      uVar10 = uStack_78;
      if (-1 < (char)bStack_69) {
        uVar10 = (ulong)bStack_69;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (auStack_d0,param_3,uVar10,0xffffffffffffffff,&uStack_61);
      FUN_10a0a4e34(&uStack_b8,auStack_d0);
      if ((uint)uVar16 >> 7 != 0) {
        __ZdlPv(ppppuStack_a0);
      }
      ppppuStack_a0 = (undefined8 ****)CONCAT71(uStack_b7,uStack_b8);
      uStack_98 = uStack_b0;
      uStack_90 = uStack_a8;
      bStack_89 = bStack_a1;
      bStack_a1 = 0;
      uStack_b8 = 0;
      if (cStack_b9 < '\0') {
        __ZdlPv(auStack_d0[0]);
      }
      uVar16 = (ulong)bStack_89;
      uVar10 = uStack_98;
    }
    else if ((long)uVar2 <= (long)uVar11) {
      puVar1 = (undefined8 *)((long)puVar5 + uVar11);
      cVar4 = *(char *)pppppcVar12;
      puVar6 = puVar5;
      do {
        if ((0xfffffffffffffffe < uVar11 - uVar2) ||
           (_memchr(puVar6,(long)cVar4,(uVar11 - uVar2) + 1), puVar6 == (undefined8 *)0x0)) break;
        puVar7 = puVar6;
        _memcmp();
        if ((int)puVar7 == 0) {
          if ((puVar6 != puVar1) && (puVar6 == puVar5)) goto LAB_10a0a6824;
          break;
        }
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        uVar11 = (long)puVar1 - (long)puVar6;
      } while ((long)uVar2 <= (long)uVar11);
    }
  }
  uVar11 = uVar10;
  if (-1 < (char)uVar16) {
    uVar11 = uVar16;
  }
  if (uVar11 == 0) {
    func_0x000107c2c4d8(&ppppcStack_80,&UNK_10f637125,0x17);
    uVar11 = param_3[1];
    puVar5 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar11 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar5 = param_3;
    }
    uVar2 = uStack_78;
    pppppcVar12 = (char *****)ppppcStack_80;
    if (-1 < (char)bStack_69) {
      uVar2 = (ulong)bStack_69;
      pppppcVar12 = &ppppcStack_80;
    }
    if (uVar2 == 0) {
LAB_10a0a68f4:
      if (param_2[0x17] < '\0') {
        param_2[8] = '\n';
        param_2[9] = '\0';
        param_2[10] = '\0';
        param_2[0xb] = '\0';
        param_2[0xc] = '\0';
        param_2[0xd] = '\0';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        param_2 = *(char **)param_2;
      }
      else {
        param_2[0x17] = '\n';
      }
      builtin_strncpy(param_2,"text/plain",0xb);
      uVar10 = uStack_78;
      if (-1 < (char)bStack_69) {
        uVar10 = (ulong)bStack_69;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (auStack_d0,param_3,uVar10,0xffffffffffffffff,&uStack_61);
      FUN_10a0a4e34(&uStack_b8,auStack_d0);
      if ((uint)uVar16 >> 7 != 0) {
        __ZdlPv(ppppuStack_a0);
      }
      ppppuStack_a0 = (undefined8 ****)CONCAT71(uStack_b7,uStack_b8);
      uStack_98 = uStack_b0;
      uStack_90 = uStack_a8;
      bStack_89 = bStack_a1;
      bStack_a1 = 0;
      uStack_b8 = 0;
      if (cStack_b9 < '\0') {
        __ZdlPv(auStack_d0[0]);
      }
      uVar16 = (ulong)bStack_89;
      uVar10 = uStack_98;
    }
    else if ((long)uVar2 <= (long)uVar11) {
      puVar1 = (undefined8 *)((long)puVar5 + uVar11);
      cVar4 = *(char *)pppppcVar12;
      puVar6 = puVar5;
      do {
        if ((0xfffffffffffffffe < uVar11 - uVar2) ||
           (_memchr(puVar6,(long)cVar4,(uVar11 - uVar2) + 1), puVar6 == (undefined8 *)0x0)) break;
        puVar7 = puVar6;
        _memcmp();
        if ((int)puVar7 == 0) {
          if ((puVar6 != puVar1) && (puVar6 == puVar5)) goto LAB_10a0a68f4;
          break;
        }
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        uVar11 = (long)puVar1 - (long)puVar6;
      } while ((long)uVar2 <= (long)uVar11);
    }
  }
  uVar15 = (uint)uVar16;
  uVar11 = uVar10;
  if (-1 < (char)uVar16) {
    uVar11 = uVar16;
  }
  if (uVar11 == 0) {
    func_0x000107c2c4d8(&ppppcStack_80,&UNK_10f63713d,0x24);
    uVar11 = param_3[1];
    puVar5 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar11 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar5 = param_3;
    }
    uVar2 = uStack_78;
    pppppcVar12 = (char *****)ppppcStack_80;
    if (-1 < (char)bStack_69) {
      uVar2 = (ulong)bStack_69;
      pppppcVar12 = &ppppcStack_80;
    }
    if (uVar2 == 0) {
LAB_10a0a69b8:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (auStack_d0,param_3,uVar2,0xffffffffffffffff,&uStack_61);
      FUN_10a0a4e34(&uStack_b8,auStack_d0);
      if (uVar15 >> 7 != 0) {
        __ZdlPv(ppppuStack_a0);
      }
      ppppuStack_a0 = (undefined8 ****)CONCAT71(uStack_b7,uStack_b8);
      uStack_98 = uStack_b0;
      uStack_90 = uStack_a8;
      bStack_89 = bStack_a1;
      bStack_a1 = 0;
      uStack_b8 = 0;
      if (cStack_b9 < '\0') {
        __ZdlPv(auStack_d0[0]);
      }
      uVar16 = (ulong)bStack_89;
      uVar15 = (uint)bStack_89;
      uVar10 = uStack_98;
    }
    else if ((long)uVar2 <= (long)uVar11) {
      puVar1 = (undefined8 *)((long)puVar5 + uVar11);
      cVar4 = *(char *)pppppcVar12;
      puVar6 = puVar5;
      do {
        if ((0xfffffffffffffffe < uVar11 - uVar2) ||
           (_memchr(puVar6,(long)cVar4,(uVar11 - uVar2) + 1), puVar6 == (undefined8 *)0x0)) break;
        puVar7 = puVar6;
        _memcmp();
        if ((int)puVar7 == 0) {
          if ((puVar6 != puVar1) && (puVar6 == puVar5)) goto LAB_10a0a69b8;
          break;
        }
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        uVar11 = (long)puVar1 - (long)puVar6;
      } while ((long)uVar2 <= (long)uVar11);
    }
  }
  if (-1 < (char)uVar15) {
    uVar10 = uVar16;
  }
  if (uVar10 == 0) {
LAB_10a0a60a4:
    uVar14 = 0;
  }
  else {
    if (param_5 == 0) {
      lVar8 = *param_1;
      uVar11 = param_1[1] - lVar8;
      lVar9 = uVar10 - uVar11;
      if (uVar10 < uVar11 || lVar9 == 0) {
        if (uVar10 < uVar11) {
          lVar9 = lVar8 + uVar10;
LAB_10a0a6348:
          param_1[1] = lVar9;
        }
      }
      else {
LAB_10a0a632c:
        func_0x000107c27d58(param_1,lVar9);
        lVar8 = *param_1;
      }
    }
    else {
      if (uVar10 != param_4) goto LAB_10a0a60a4;
      lVar8 = *param_1;
      uVar11 = param_1[1] - lVar8;
      lVar9 = param_4 - uVar11;
      if (uVar11 <= param_4 && lVar9 != 0) goto LAB_10a0a632c;
      if (uVar11 > param_4) {
        lVar9 = lVar8 + param_4;
        goto LAB_10a0a6348;
      }
    }
    pppppuVar3 = (undefined8 *****)ppppuStack_a0;
    if (-1 < (char)uVar15) {
      pppppuVar3 = &ppppuStack_a0;
    }
    _memmove(lVar8,pppppuVar3,uVar10);
    uVar14 = 1;
  }
  if (uVar15 >> 7 != 0) {
    __ZdlPv(ppppuStack_a0);
  }
  if ((char)bStack_69 < '\0') {
    __ZdlPv(ppppcStack_80);
  }
  return uVar14;
}



/* Entry: 10a0a6aa8; end: 10a0a87b7;  */

/* WARNING: Type propagation algorithm not settling */

undefined ********
FUN_10a0a6aa8(undefined ********param_1,undefined *******param_2,undefined *******param_3,
             undefined *******param_4,long param_5,uint param_6,undefined ********param_7)

{
  undefined8 *puVar1;
  char ******ppppppcVar2;
  undefined *******pppppppuVar3;
  undefined *****pppppuVar4;
  undefined *****pppppuVar5;
  undefined ****ppppuVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  undefined ********ppppppppuVar10;
  undefined ****ppppuVar11;
  undefined *****pppppuVar12;
  code *pcVar13;
  bool bVar14;
  int iVar15;
  char *pcVar16;
  undefined ********ppppppppuVar17;
  undefined *******pppppppuVar18;
  char *******pppppppcVar19;
  undefined *******pppppppuVar20;
  char *******pppppppcVar21;
  long *plVar22;
  undefined ******ppppppuVar23;
  undefined ****ppppuVar24;
  undefined ****ppppuVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined *******pppppppuVar29;
  ulong uVar30;
  undefined *****pppppuVar31;
  undefined *****pppppuVar32;
  undefined ******ppppppuVar33;
  undefined ****ppppuVar34;
  char *******pppppppcStack_460;
  char ******ppppppcStack_458;
  char *****pppppcStack_450;
  undefined8 uStack_448;
  char acStack_438 [8];
  undefined ******ppppppuStack_430;
  undefined *******pppppppuStack_428;
  undefined *******pppppppuStack_420;
  undefined *******pppppppuStack_418;
  char *******pppppppcStack_410;
  char ******ppppppcStack_408;
  char *****pppppcStack_400;
  undefined8 uStack_3f8;
  char *******pppppppcStack_3f0;
  char *****pppppcStack_3e8;
  char *****pppppcStack_3e0;
  undefined8 uStack_3d8;
  undefined *******pppppppuStack_3d0;
  undefined ******ppppppuStack_3c8;
  undefined *****pppppuStack_3c0;
  undefined8 uStack_3b8;
  undefined *******pppppppuStack_3b0;
  undefined ******ppppppuStack_3a8;
  undefined ******ppppppuStack_3a0;
  long lStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined1 *puStack_380;
  ulong uStack_378;
  ulong uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  char *******pppppppcStack_2d8;
  char ******ppppppcStack_2d0;
  char *****pppppcStack_2c8;
  char *******pppppppcStack_2c0;
  char ******ppppppcStack_2b8;
  char *****pppppcStack_2b0;
  long alStack_2a0 [2];
  char cStack_289;
  undefined *******pppppppuStack_288;
  undefined *****pppppuStack_280;
  undefined *****pppppuStack_278;
  undefined8 uStack_270;
  undefined *******pppppppuStack_268;
  undefined ********ppppppppuStack_260;
  undefined ********ppppppppuStack_258;
  undefined ********ppppppppuStack_250;
  undefined ********ppppppppuStack_248;
  undefined ********ppppppppuStack_240;
  undefined *******pppppppuStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuStack_428 = param_4;
  pppppppuStack_420 = param_3;
  pppppppuStack_418 = param_2;
  if (param_6 < 4) {
    func_0x000107c2c4d8(param_3,&UNK_10f63718e,0x17);
    param_1 = (undefined ********)0x0;
    goto LAB_10a0a6e9c;
  }
  acStack_438[0] = '\0';
  ppppppuStack_430 = (undefined ******)0x0;
  ppppppppuStack_248 = (undefined ********)0x0;
  FUN_10a0cd3f8(&pppppppuStack_3b0,param_5,param_5 + (ulong)param_6,&ppppppppuStack_260,1,0);
  ppppppuVar23 = ppppppuStack_430;
  cVar9 = acStack_438[0];
  acStack_438[0] = (char)pppppppuStack_3b0;
  pppppppuStack_3b0 = (undefined *******)CONCAT71(pppppppuStack_3b0._1_7_,cVar9);
  ppppppuStack_430 = ppppppuStack_3a8;
  ppppppuStack_3a8 = ppppppuVar23;
  func_0x000109380ffc(&ppppppuStack_3a8);
  if ((undefined *********)ppppppppuStack_248 == &ppppppppuStack_260) {
    lVar26 = 0x20;
LAB_10a0a6b84:
    (**(code **)((long)*ppppppppuStack_248 + lVar26))();
  }
  else if (ppppppppuStack_248 != (undefined ********)0x0) {
    lVar26 = 0x28;
    goto LAB_10a0a6b84;
  }
  if (acStack_438[0] != '\x01') {
    if (pppppppuStack_420 != (undefined *******)0x0) {
      func_0x000107c2c4d8(pppppppuStack_420,&UNK_10f6371a6,0x22);
    }
    goto LAB_10a0a6e8c;
  }
  ppppppppuStack_258 = (undefined ********)0x0;
  ppppppppuStack_260 = (undefined ********)0x0;
  ppppppppuStack_250 = (undefined ********)0x0;
  ppppppppuStack_248 = (undefined ********)0x8000000000000000;
  pcVar16 = acStack_438;
  FUN_10a0a87b8(pcVar16,&DAT_10f305a7e,&ppppppppuStack_260);
  if ((int)pcVar16 != 0) {
    ppppppppuVar17 = (undefined ********)&ppppppppuStack_260;
    func_0x00010937c560();
    if (*(char *)ppppppppuVar17 == '\x01') {
      iVar15 = (int)&ppppppppuStack_260;
      func_0x00010937c560();
      pppppppuStack_3b0 = (undefined *******)0x0;
      ppppppuStack_3a8 = (undefined ******)0x0;
      ppppppuStack_3a0 = (undefined ******)0x0;
      lStack_398 = -0x8000000000000000;
      pppppuStack_280 = (undefined *****)0x0;
      pppppppuStack_288 = (undefined *******)0x0;
      pppppuStack_278 = (undefined *****)0x0;
      FUN_10a0a87b8();
      if (iVar15 != 0) {
        uVar27 = 0;
        func_0x00010937c560();
        func_0x00010a0a8894();
        if ((long)pppppuStack_278 < 0) {
          __ZdlPv(pppppppuStack_288);
        }
        pppppppuVar18 = pppppppuStack_418;
        if ((uVar27 & 1) != 0) {
          ppppppuVar23 = pppppppuStack_418[6];
          ppppppuVar33 = pppppppuStack_418[7];
          pppppppuVar20 = pppppppuStack_418;
          while (ppppppuVar33 != ppppppuVar23) {
            ppppppuVar33 = ppppppuVar33 + -0x21;
            pppppppuStack_418 = pppppppuVar20;
            func_0x00010a0cd6bc();
            pppppppuVar20 = pppppppuStack_418;
          }
          pppppppuVar18[7] = ppppppuVar23;
          ppppppuVar23 = pppppppuVar20[9];
          ppppppuVar33 = pppppppuVar20[10];
          pppppppuVar18 = pppppppuVar20;
          while (ppppppuVar33 != ppppppuVar23) {
            ppppppuVar33 = ppppppuVar33 + -0x21;
            pppppppuStack_418 = pppppppuVar18;
            func_0x00010a0cd73c();
            pppppppuVar18 = pppppppuStack_418;
          }
          pppppppuVar20[10] = ppppppuVar23;
          ppppppuVar23 = *pppppppuVar18;
          ppppppuVar33 = pppppppuVar18[1];
          pppppppuVar20 = pppppppuVar18;
          while (ppppppuVar33 != ppppppuVar23) {
            ppppppuVar33 = ppppppuVar33 + -0x2a;
            pppppppuStack_418 = pppppppuVar20;
            func_0x00010a0cd79c();
            pppppppuVar20 = pppppppuStack_418;
          }
          pppppppuVar18[1] = ppppppuVar23;
          ppppppuVar23 = pppppppuVar20[0xf];
          ppppppuVar33 = pppppppuVar20[0x10];
          pppppppuVar18 = pppppppuVar20;
          while (ppppppuVar33 != ppppppuVar23) {
            ppppppuVar33 = ppppppuVar33 + -0x21;
            pppppppuStack_418 = pppppppuVar18;
            func_0x00010a0cd81c();
            pppppppuVar18 = pppppppuStack_418;
          }
          pppppppuVar20[0x10] = ppppppuVar23;
          ppppppuVar23 = pppppppuVar18[0x21];
          ppppppuVar33 = pppppppuVar18[0x22];
          pppppppuVar20 = pppppppuVar18;
          while (pppppppuStack_418 = pppppppuVar20, ppppppuVar33 != ppppppuVar23) {
            ppppppuVar33 = ppppppuVar33 + -0x56;
            FUN_10a0cd968();
            pppppppuVar20 = pppppppuStack_418;
          }
          pppppppuVar18[0x22] = ppppppuVar23;
          ppppppuVar23 = pppppppuVar20[0x12];
          ppppppuVar33 = pppppppuVar20[0x13];
          while (ppppppuVar33 != ppppppuVar23) {
            ppppppuVar33 = ppppppuVar33 + -0x2f;
            func_0x00010a0cda38();
          }
          pppppppuVar20[0x13] = ppppppuVar23;
          FUN_10a042718(pppppppuStack_418 + 0x2b);
          FUN_10a042718(pppppppuStack_418 + 0x2e);
          pppppppuVar20 = pppppppuStack_418;
          pppppppuVar18 = pppppppuStack_418 + 0x65;
          func_0x00010a0c9b2c(pppppppuStack_418[0x65]);
          pppppppuVar20[100] = (undefined ******)pppppppuVar18;
          pppppppuVar20[0x66] = (undefined ******)0x0;
          *pppppppuVar18 = (undefined ******)0x0;
          *(undefined4 *)(pppppppuStack_418 + 0x2a) = 0xffffffff;
          ppppppppuStack_258 = (undefined ********)0x0;
          ppppppppuStack_260 = (undefined ********)0x0;
          ppppppppuStack_250 = (undefined ********)0x0;
          ppppppppuStack_248 = (undefined ********)0x8000000000000000;
          pcVar16 = acStack_438;
          FUN_10a0a87b8(pcVar16,&DAT_10f305a7e,&ppppppppuStack_260);
          if ((int)pcVar16 != 0) {
            ppppppppuVar17 = (undefined ********)&ppppppppuStack_260;
            func_0x00010937c560();
            if (*(char *)ppppppppuVar17 == '\x01') {
              ppppppppuVar17 = (undefined ********)&ppppppppuStack_260;
              func_0x00010937c560(ppppppppuVar17);
              FUN_10a0a88f4(pppppppuStack_418 + 0x31,pppppppuStack_420,ppppppppuVar17,
                            *(undefined1 *)((long)param_1 + 0x12));
            }
          }
          pppppppuStack_3b0 = (undefined *******)0x0;
          ppppppuStack_3a8 = (undefined ******)0x0;
          ppppppuStack_3a0 = (undefined ******)0x0;
          lStack_398 = -0x8000000000000000;
          pcVar16 = acStack_438;
          FUN_10a0a87b8(pcVar16,&UNK_10f414ffe,&pppppppuStack_3b0);
          if ((int)pcVar16 != 0) {
            pppppppuVar18 = (undefined *******)&pppppppuStack_3b0;
            func_0x00010937c560();
            if (*(char *)pppppppuVar18 == '\x02') {
              pppppppuVar18 = (undefined *******)&pppppppuStack_3b0;
              func_0x00010937c560();
              pppppuStack_280 = (undefined *****)0x0;
              pppppuStack_278 = (undefined *****)0x0;
              uStack_270 = 0x8000000000000000;
              cVar9 = *(char *)pppppppuVar18;
              if (cVar9 == '\0') {
                uStack_270 = 1;
LAB_10a0a6f10:
                ppppppuStack_3c8 = (undefined ******)0x0;
                pppppuStack_3c0 = (undefined *****)0x0;
                uStack_3b8 = 1;
              }
              else if (cVar9 == '\x02') {
                pppppuStack_278 = *pppppppuVar18[1];
                ppppppuStack_3c8 = (undefined ******)0x0;
                uStack_3b8 = 0x8000000000000000;
                pppppuStack_3c0 = pppppppuVar18[1][1];
              }
              else {
                if (cVar9 != '\x01') {
                  uStack_270 = 0;
                  goto LAB_10a0a6f10;
                }
                pppppuStack_280 = *pppppppuVar18[1];
                uStack_3b8 = 0x8000000000000000;
                pppppuStack_3c0 = (undefined *****)0x0;
                ppppppuStack_3c8 = pppppppuVar18[1] + 1;
              }
              pppppppuStack_3d0 = pppppppuVar18;
              pppppppuStack_288 = pppppppuVar18;
              while( true ) {
                pppppppuVar18 = (undefined *******)&pppppppuStack_288;
                func_0x00010937c708(pppppppuVar18,&pppppppuStack_3d0);
                if (((ulong)pppppppuVar18 & 1) != 0) break;
                func_0x00010937c560(&pppppppuStack_288);
                pppppppcStack_3f0 = (char *******)0x0;
                pppppcStack_3e8 = (char *****)0x0;
                pppppcStack_3e0 = (char *****)0x0;
                func_0x00010a0a8894();
                pppppppuVar18 = pppppppuStack_418;
                ppppppuVar23 = pppppppuStack_418[0x2c];
                if (ppppppuVar23 < pppppppuStack_418[0x2d]) {
                  ppppppuVar23[1] = pppppcStack_3e8;
                  *ppppppuVar23 = (undefined *****)pppppppcStack_3f0;
                  ppppppuVar23[2] = pppppcStack_3e0;
                  ppppppuVar23 = ppppppuVar23 + 3;
                }
                else {
                  ppppppppuVar17 = (undefined ********)(pppppppuStack_418 + 0x2b);
                  lVar26 = (long)ppppppuVar23 - (long)*ppppppppuVar17;
                  uVar27 = (lVar26 >> 3) * -0x5555555555555555 + 1;
                  if (0xaaaaaaaaaaaaaaa < uVar27) {
                    FUN_10a05a0c0();
                    goto LAB_10a0a84f0;
                  }
                  lVar28 = (long)pppppppuStack_418[0x2d] - (long)*ppppppppuVar17 >> 3;
                  uVar30 = lVar28 * 0x5555555555555556;
                  if (uVar30 < uVar27 || uVar30 - uVar27 == 0) {
                    uVar30 = uVar27;
                  }
                  if (0x555555555555554 < (ulong)(lVar28 * -0x5555555555555555)) {
                    uVar30 = 0xaaaaaaaaaaaaaaa;
                  }
                  ppppppppuStack_240 = ppppppppuVar17;
                  FUN_10a05a0d4();
                  puVar1 = (undefined8 *)((long)ppppppppuVar17 + lVar26);
                  puVar1[1] = pppppcStack_3e8;
                  *puVar1 = pppppppcStack_3f0;
                  puVar1[2] = pppppcStack_3e0;
                  ppppppuVar23 = (undefined ******)(puVar1 + 3);
                  ppppppuVar33 = (undefined ******)
                                 ((long)puVar1 -
                                 ((long)pppppppuVar18[0x2c] - (long)pppppppuVar18[0x2b]));
                  _memcpy(ppppppuVar33);
                  ppppppppuStack_260 = (undefined ********)pppppppuVar18[0x2b];
                  pppppppuVar18[0x2b] = ppppppuVar33;
                  pppppppuVar18[0x2c] = ppppppuVar23;
                  ppppppppuStack_248 = (undefined ********)pppppppuVar18[0x2d];
                  pppppppuVar18[0x2d] = (undefined ******)(ppppppppuVar17 + uVar30 * 3);
                  ppppppppuStack_258 = ppppppppuStack_260;
                  ppppppppuStack_250 = ppppppppuStack_260;
                  func_0x000107c31938(&ppppppppuStack_260);
                }
                pppppppuVar18[0x2c] = ppppppuVar23;
                func_0x00010937c698(&pppppppuStack_288);
              }
            }
          }
          pppppppuStack_3b0 = (undefined *******)0x0;
          ppppppuStack_3a8 = (undefined ******)0x0;
          ppppppuStack_3a0 = (undefined ******)0x0;
          lStack_398 = -0x8000000000000000;
          pcVar16 = acStack_438;
          FUN_10a0a87b8(pcVar16,&UNK_10f637212,&pppppppuStack_3b0);
          if ((int)pcVar16 != 0) {
            pppppppuVar18 = (undefined *******)&pppppppuStack_3b0;
            func_0x00010937c560();
            if (*(char *)pppppppuVar18 == '\x02') {
              pppppppuVar18 = (undefined *******)&pppppppuStack_3b0;
              func_0x00010937c560();
              pppppuStack_280 = (undefined *****)0x0;
              pppppuStack_278 = (undefined *****)0x0;
              uStack_270 = 0x8000000000000000;
              cVar9 = *(char *)pppppppuVar18;
              if (cVar9 == '\0') {
                uStack_270 = 1;
LAB_10a0a7108:
                ppppppuStack_3c8 = (undefined ******)0x0;
                pppppuStack_3c0 = (undefined *****)0x0;
                uStack_3b8 = 1;
              }
              else if (cVar9 == '\x02') {
                pppppuStack_278 = *pppppppuVar18[1];
                ppppppuStack_3c8 = (undefined ******)0x0;
                uStack_3b8 = 0x8000000000000000;
                pppppuStack_3c0 = pppppppuVar18[1][1];
              }
              else {
                if (cVar9 != '\x01') {
                  uStack_270 = 0;
                  goto LAB_10a0a7108;
                }
                pppppuStack_280 = *pppppppuVar18[1];
                uStack_3b8 = 0x8000000000000000;
                pppppuStack_3c0 = (undefined *****)0x0;
                ppppppuStack_3c8 = pppppppuVar18[1] + 1;
              }
              pppppppuStack_3d0 = pppppppuVar18;
              pppppppuStack_288 = pppppppuVar18;
              while( true ) {
                pppppppuVar18 = (undefined *******)&pppppppuStack_288;
                func_0x00010937c708(pppppppuVar18,&pppppppuStack_3d0);
                if (((ulong)pppppppuVar18 & 1) != 0) break;
                func_0x00010937c560(&pppppppuStack_288);
                pppppppcStack_3f0 = (char *******)0x0;
                pppppcStack_3e8 = (char *****)0x0;
                pppppcStack_3e0 = (char *****)0x0;
                func_0x00010a0a8894();
                pppppppuVar18 = pppppppuStack_418;
                ppppppuVar23 = pppppppuStack_418[0x2f];
                if (ppppppuVar23 < pppppppuStack_418[0x30]) {
                  ppppppuVar23[1] = pppppcStack_3e8;
                  *ppppppuVar23 = (undefined *****)pppppppcStack_3f0;
                  ppppppuVar23[2] = pppppcStack_3e0;
                  ppppppuVar23 = ppppppuVar23 + 3;
                }
                else {
                  ppppppppuVar17 = (undefined ********)(pppppppuStack_418 + 0x2e);
                  lVar26 = (long)ppppppuVar23 - (long)*ppppppppuVar17;
                  uVar27 = (lVar26 >> 3) * -0x5555555555555555 + 1;
                  if (0xaaaaaaaaaaaaaaa < uVar27) {
                    FUN_10a05a0c0();
                    goto LAB_10a0a84f0;
                  }
                  lVar28 = (long)pppppppuStack_418[0x30] - (long)*ppppppppuVar17 >> 3;
                  uVar30 = lVar28 * 0x5555555555555556;
                  if (uVar30 < uVar27 || uVar30 - uVar27 == 0) {
                    uVar30 = uVar27;
                  }
                  if (0x555555555555554 < (ulong)(lVar28 * -0x5555555555555555)) {
                    uVar30 = 0xaaaaaaaaaaaaaaa;
                  }
                  ppppppppuStack_240 = ppppppppuVar17;
                  FUN_10a05a0d4();
                  puVar1 = (undefined8 *)((long)ppppppppuVar17 + lVar26);
                  puVar1[1] = pppppcStack_3e8;
                  *puVar1 = pppppppcStack_3f0;
                  puVar1[2] = pppppcStack_3e0;
                  ppppppuVar23 = (undefined ******)(puVar1 + 3);
                  ppppppuVar33 = (undefined ******)
                                 ((long)puVar1 -
                                 ((long)pppppppuVar18[0x2f] - (long)pppppppuVar18[0x2e]));
                  _memcpy(ppppppuVar33);
                  ppppppppuStack_260 = (undefined ********)pppppppuVar18[0x2e];
                  pppppppuVar18[0x2e] = ppppppuVar33;
                  pppppppuVar18[0x2f] = ppppppuVar23;
                  ppppppppuStack_248 = (undefined ********)pppppppuVar18[0x30];
                  pppppppuVar18[0x30] = (undefined ******)(ppppppppuVar17 + uVar30 * 3);
                  ppppppppuStack_258 = ppppppppuStack_260;
                  ppppppppuStack_250 = ppppppppuStack_260;
                  func_0x000107c31938(&ppppppppuStack_260);
                }
                pppppppuVar18[0x2f] = ppppppuVar23;
                func_0x00010937c698(&pppppppuStack_288);
              }
            }
          }
          pppppppuStack_3d0 = (undefined *******)0x0;
          ppppppuStack_3c8 = (undefined ******)0x0;
          pppppuStack_3c0 = (undefined *****)0x0;
          uStack_3b8 = 0x8000000000000000;
          pcVar16 = acStack_438;
          FUN_10a0a87b8(pcVar16,&UNK_10f414f91,&pppppppuStack_3d0);
          if ((int)pcVar16 != 0) {
            pppppppuVar18 = (undefined *******)&pppppppuStack_3d0;
            func_0x00010937c560();
            if (*(char *)pppppppuVar18 == '\x02') {
              pppppppcVar19 = (char *******)&pppppppuStack_3d0;
              func_0x00010937c560();
              pppppcStack_3e8 = (char *****)0x0;
              pppppcStack_3e0 = (char *****)0x0;
              uStack_3d8 = 0x8000000000000000;
              cVar9 = *(char *)pppppppcVar19;
              if (cVar9 == '\0') {
                uStack_3d8 = 1;
LAB_10a0a72f8:
                ppppppcStack_408 = (char ******)0x0;
                pppppcStack_400 = (char *****)0x0;
                uStack_3f8 = 1;
              }
              else if (cVar9 == '\x02') {
                pppppcStack_3e0 = *pppppppcVar19[1];
                ppppppcStack_408 = (char ******)0x0;
                uStack_3f8 = 0x8000000000000000;
                pppppcStack_400 = pppppppcVar19[1][1];
              }
              else {
                if (cVar9 != '\x01') {
                  uStack_3d8 = 0;
                  goto LAB_10a0a72f8;
                }
                pppppcStack_3e8 = *pppppppcVar19[1];
                pppppcStack_400 = (char *****)0x0;
                uStack_3f8 = 0x8000000000000000;
                ppppppcStack_408 = pppppppcVar19[1] + 1;
              }
              pppppppcStack_410 = pppppppcVar19;
              pppppppcStack_3f0 = pppppppcVar19;
              while( true ) {
                pppppppcVar19 = (char *******)&pppppppcStack_3f0;
                func_0x00010937c708(pppppppcVar19,&pppppppcStack_410);
                if (((ulong)pppppppcVar19 & 1) != 0) break;
                pppppppcVar19 = (char *******)&pppppppcStack_3f0;
                func_0x00010937c560();
                pppppppuVar18 = pppppppuStack_420;
                if (*(char *)pppppppcVar19 != '\x01') {
                  if (pppppppuStack_420 != (undefined *******)0x0) {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (pppppppuStack_420,&UNK_10f639db4,0x2a);
                  }
                  goto LAB_10a0a6e8c;
                }
                uStack_308 = 0;
                uStack_300 = 0;
                ppppppuStack_3a8 = (undefined ******)0x0;
                pppppppuStack_3b0 = (undefined *******)0x0;
                lStack_398 = 0;
                ppppppuStack_3a0 = (undefined ******)0x0;
                uStack_388 = 0;
                lStack_390 = 0;
                uStack_378 = 0;
                puStack_380 = (undefined1 *)0x0;
                uStack_368 = 0;
                uStack_370 = 0;
                uStack_358 = 0;
                uStack_360 = 0;
                uStack_348 = 0;
                uStack_350 = 0;
                uStack_338 = 0;
                uStack_340 = 0;
                uStack_328 = 0;
                uStack_330 = 0;
                uStack_318 = 0;
                uStack_320 = 0;
                uStack_2f8 = 0;
                uStack_2e8 = 0;
                uStack_2e0 = 0;
                ppppppcStack_2d0 = (char ******)0x0;
                pppppppcStack_2d8 = (char *******)0x0;
                pppppppcStack_2c0 = (char *******)0x0;
                pppppcStack_2c8 = (char *****)0x0;
                pppppcStack_2b0 = (char *****)0x0;
                ppppppcStack_2b8 = (char ******)0x0;
                cVar9 = *(char *)((long)param_1 + 0x12);
                bVar8 = *(byte *)(param_1 + 2);
                pppppppuVar3 = *param_1;
                pppppppuVar29 = param_1[1];
                puStack_310 = &uStack_308;
                puStack_2f0 = &uStack_2e8;
                func_0x000107c2b054(&ppppppppuStack_260,&UNK_10f637e9e);
                func_0x000107c2b054(&pppppppuStack_288,&UNK_10f639ddf);
                pppppppuVar20 = (undefined *******)&pppppppuStack_268;
                FUN_10a0ddbf8(pppppppuVar20,pppppppuVar18,pppppppcVar19,&ppppppppuStack_260,1,
                              &pppppppuStack_288);
                if ((long)pppppuStack_278 < 0) {
                  __ZdlPv(pppppppuStack_288);
                }
                if ((long)ppppppppuStack_250 < 0) {
                  __ZdlPv(ppppppppuStack_260);
                }
                if (((ulong)pppppppuVar20 & 1) == 0) {
LAB_10a0a8060:
                  func_0x00010a0cd6bc(&pppppppuStack_3b0);
                  goto LAB_10a0a6e8c;
                }
                if ((long)uStack_370 < 0) {
                  *puStack_380 = 0;
                  uStack_378 = 0;
                }
                else {
                  puStack_380 = (undefined1 *)((ulong)puStack_380 & 0xffffffffffffff00);
                  uStack_370 = uStack_370 & 0xffffffffffffff;
                }
                func_0x000107c2b054(&ppppppppuStack_260,"uri");
                func_0x000107c2b054(&pppppppuStack_288,&UNK_10f639ddf);
                FUN_10a0cdaf8(&puStack_380,pppppppuVar18,pppppppcVar19,&ppppppppuStack_260,0,
                              &pppppppuStack_288);
                if ((long)pppppuStack_278 < 0) {
                  __ZdlPv(pppppppuStack_288);
                }
                if ((long)ppppppppuStack_250 < 0) {
                  __ZdlPv(ppppppppuStack_260);
                }
                if ((bVar8 & 1) == 0) {
                  uVar27 = uStack_378;
                  if (-1 < (long)uStack_370) {
                    uVar27 = uStack_370 >> 0x38;
                  }
                  if ((pppppppuVar18 != (undefined *******)0x0) && (uVar27 == 0)) {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (pppppppuVar18,&UNK_10f639de6,0x33);
                  }
                }
                pppppuStack_280 = (undefined *****)0x0;
                pppppppuStack_288 = (undefined *******)0x0;
                pppppuStack_278 = (undefined *****)0x0;
                uStack_270 = 0x8000000000000000;
                pppppppcVar21 = pppppppcVar19;
                FUN_10a0a87b8(pppppppcVar19,&DAT_10f6389e8,&pppppppuStack_288);
                if ((int)pppppppcVar21 != 0) {
                  ppppppppuStack_258 = (undefined ********)0x0;
                  ppppppppuStack_260 = (undefined ********)0x0;
                  ppppppppuStack_250 = (undefined ********)0x0;
                  iVar15 = (int)&pppppppuStack_288;
                  func_0x00010937c560();
                  func_0x00010a0a8894();
                  if (iVar15 != 0) {
                    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                              (&ppppppppuStack_260,&DAT_10f639e1a);
                  }
                  if ((long)ppppppppuStack_250 < 0) {
                    __ZdlPv(ppppppppuStack_260);
                  }
                }
                pppppppuVar20 = pppppppuStack_268;
                if (bVar8 != 0) {
                  uVar27 = uStack_378;
                  if (-1 < (long)uStack_370) {
                    uVar27 = uStack_370 >> 0x38;
                  }
                  if (uVar27 != 0) {
                    iVar15 = (int)&puStack_380;
                    FUN_10a0a58d4();
                    if (iVar15 != 0) {
                      ppppppppuStack_258 = (undefined ********)0x0;
                      ppppppppuStack_260 = (undefined ********)0x0;
                      ppppppppuStack_250 = (undefined ********)0x0;
                      plVar22 = &lStack_398;
                      FUN_10a0a5e98(plVar22,&ppppppppuStack_260,&puStack_380,pppppppuStack_268,1);
                      if (((ulong)plVar22 & 1) == 0) {
                        if (pppppppuVar18 != (undefined *******)0x0) {
                          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                    (alStack_2a0,&UNK_10f639e26,&puStack_380);
                          plVar22 = alStack_2a0;
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                    (plVar22,&UNK_10f639e40,0xb);
                          ppppppcStack_458 = (char ******)plVar22[1];
                          pppppppcStack_460 = (char *******)*plVar22;
                          pppppcStack_450 = (char *****)plVar22[2];
                          plVar22[1] = 0;
                          plVar22[2] = 0;
                          *plVar22 = 0;
                          ppppppcVar2 = ppppppcStack_458;
                          pppppppcVar19 = pppppppcStack_460;
                          if (-1 < (long)pppppcStack_450) {
                            ppppppcVar2 = (char ******)((ulong)pppppcStack_450 >> 0x38);
                            pppppppcVar19 = (char *******)&pppppppcStack_460;
                          }
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                    (pppppppuVar18,pppppppcVar19,ppppppcVar2);
                          goto LAB_10a0a8030;
                        }
                        goto LAB_10a0a8050;
                      }
                      goto LAB_10a0a7598;
                    }
                    FUN_10a0dde84(&ppppppppuStack_260,&puStack_380);
                    plVar22 = &lStack_398;
                    FUN_10a0de00c(plVar22,pppppppuVar18,0,&ppppppppuStack_260,param_7,1,
                                  pppppppuStack_268,1,param_1 + 3);
                    goto LAB_10a0a7654;
                  }
                  if ((pppppppuVar3 == (undefined *******)0x0) ||
                     (pppppppuVar29 == (undefined *******)0x0)) {
                    if (pppppppuVar18 != (undefined *******)0x0) {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (pppppppuVar18,&UNK_10f639e4c,0x21);
                    }
                  }
                  else {
                    if (pppppppuStack_268 <= pppppppuVar29) {
                      pppppppuVar29 = (undefined *******)(lStack_390 - lStack_398);
                      if (pppppppuStack_268 < pppppppuVar29 ||
                          (long)pppppppuStack_268 - (long)pppppppuVar29 == 0) {
                        if (pppppppuStack_268 < pppppppuVar29) {
                          lStack_390 = lStack_398 + (long)pppppppuStack_268;
                        }
                      }
                      else {
                        func_0x000107c27d58(&lStack_398,
                                            (long)pppppppuStack_268 - (long)pppppppuVar29);
                      }
                      if (lStack_390 == lStack_398) {
                        FUN_10a0cd3e4();
LAB_10a0a84f0:
                    /* WARNING: Does not return */
                        pcVar13 = (code *)SoftwareBreakpoint(1,0x10a0a84f4);
                        (*pcVar13)();
                      }
                      _memcpy(lStack_398,pppppppuVar3,pppppppuVar20);
                      goto LAB_10a0a7690;
                    }
                    if (pppppppuVar18 != (undefined *******)0x0) {
                      FUN_109febc44(&ppppppppuStack_260);
                      ppppppppuVar17 = (undefined ********)&ppppppppuStack_250;
                      FUN_10a002568(ppppppppuVar17,&UNK_10f639e6e,0x4d);
                      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
                      FUN_10a002568();
                      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
                      __ZNKSt3__18ios_base6getlocEv
                                (&pppppppcStack_460,
                                 (long)ppppppppuVar17 + (long)(*ppppppppuVar17)[-3]);
                      pppppppcVar19 = (char *******)&pppppppcStack_460;
                      __ZNKSt3__16locale9use_facetERNS0_2idE
                                (pppppppcVar19,PTR___ZNSt3__15ctypeIcE2idE_110346770);
                      (*(code *)(*pppppppcVar19)[7])();
                      __ZNSt3__16localeD1Ev(&pppppppcStack_460);
                      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
                                (ppppppppuVar17,pppppppcVar19);
                      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(ppppppppuVar17);
                      func_0x00010a002480(&pppppppcStack_460,&ppppppppuStack_248,alStack_2a0);
                      ppppppcVar2 = ppppppcStack_458;
                      pppppppcVar19 = pppppppcStack_460;
                      if (-1 < (long)pppppcStack_450) {
                        ppppppcVar2 = (char ******)((ulong)pppppcStack_450 >> 0x38);
                        pppppppcVar19 = (char *******)&pppppppcStack_460;
                      }
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (pppppppuVar18,pppppppcVar19,ppppppcVar2);
                      if ((long)pppppcStack_450 < 0) {
                        __ZdlPv(pppppppcStack_460);
                      }
                      ppppppppuStack_260 = (undefined ********)&PTR_SUB_1108a5a38;
                      ppppppppuStack_250 = (undefined ********)&PTR_DAT_1108a5a60;
                      ppuStack_1e0 = &PTR_DAT_1108a5a88;
                      ppppppppuStack_248 = (undefined ********)&PTR_DAT_11088d7b0;
                      if ((long)puStack_1f8 < 0) {
                        __ZdlPv(uStack_208);
                      }
                      ppppppppuStack_248 =
                           (undefined ********)
                           (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 +
                           0x10);
                      __ZNSt3__16localeD1Ev(&ppppppppuStack_240);
                      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev
                                (&ppppppppuStack_260,&PTR_PTR_1108a5aa0);
                      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(&ppuStack_1e0);
                    }
                  }
                  goto LAB_10a0a8060;
                }
                iVar15 = (int)&puStack_380;
                FUN_10a0a58d4();
                if (iVar15 == 0) {
                  FUN_10a0dde84(&ppppppppuStack_260,&puStack_380);
                  plVar22 = &lStack_398;
                  FUN_10a0de00c(plVar22,pppppppuVar18,0,&ppppppppuStack_260,param_7,1,
                                pppppppuStack_268,1,param_1 + 3);
LAB_10a0a7654:
                  if ((long)ppppppppuStack_250 < 0) {
                    __ZdlPv(ppppppppuStack_260);
                  }
                  if (((ulong)plVar22 & 1) == 0) goto LAB_10a0a8060;
                }
                else {
                  ppppppppuStack_258 = (undefined ********)0x0;
                  ppppppppuStack_260 = (undefined ********)0x0;
                  ppppppppuStack_250 = (undefined ********)0x0;
                  plVar22 = &lStack_398;
                  FUN_10a0a5e98(plVar22,&ppppppppuStack_260,&puStack_380,pppppppuStack_268,1);
                  if (((ulong)plVar22 & 1) == 0) {
                    if (pppppppuVar18 != (undefined *******)0x0) {
                      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                (alStack_2a0,&UNK_10f639e26,&puStack_380);
                      plVar22 = alStack_2a0;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (plVar22,&UNK_10f639e40,0xb);
                      ppppppcStack_458 = (char ******)plVar22[1];
                      pppppppcStack_460 = (char *******)*plVar22;
                      pppppcStack_450 = (char *****)plVar22[2];
                      plVar22[1] = 0;
                      plVar22[2] = 0;
                      *plVar22 = 0;
                      ppppppcVar2 = ppppppcStack_458;
                      pppppppcVar19 = pppppppcStack_460;
                      if (-1 < (long)pppppcStack_450) {
                        ppppppcVar2 = (char ******)((ulong)pppppcStack_450 >> 0x38);
                        pppppppcVar19 = (char *******)&pppppppcStack_460;
                      }
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (pppppppuVar18,pppppppcVar19,ppppppcVar2);
LAB_10a0a8030:
                      if ((long)pppppcStack_450 < 0) {
                        __ZdlPv(pppppppcStack_460);
                      }
                      if (cStack_289 < '\0') {
                        __ZdlPv(alStack_2a0[0]);
                      }
                    }
LAB_10a0a8050:
                    if ((long)ppppppppuStack_250 < 0) {
                      __ZdlPv(ppppppppuStack_260);
                    }
                    goto LAB_10a0a8060;
                  }
LAB_10a0a7598:
                  if ((long)ppppppppuStack_250 < 0) {
                    __ZdlPv(ppppppppuStack_260);
                  }
                }
LAB_10a0a7690:
                func_0x000107c2b054(&ppppppppuStack_260,&DAT_10f68f148);
                pppppppcStack_460 = (char *******)0x0;
                ppppppcStack_458 = (char ******)0x0;
                pppppcStack_450 = (char *****)0x0;
                FUN_10a0cdaf8(&pppppppuStack_3b0,pppppppuVar18,pppppppcVar19,&ppppppppuStack_260,0,
                              &pppppppcStack_460);
                if ((long)pppppcStack_450 < 0) {
                  __ZdlPv(pppppppcStack_460);
                }
                if ((long)ppppppppuStack_250 < 0) {
                  __ZdlPv(ppppppppuStack_260);
                }
                FUN_10a0b3de4(&puStack_2f0,pppppppcVar19);
                FUN_10a0b4a84(&uStack_368,pppppppcVar19);
                if (cVar9 != '\0') {
                  ppppppppuStack_258 = (undefined ********)0x0;
                  ppppppppuStack_260 = (undefined ********)0x0;
                  ppppppppuStack_250 = (undefined ********)0x0;
                  ppppppppuStack_248 = (undefined ********)0x8000000000000000;
                  pppppppcVar21 = pppppppcVar19;
                  FUN_10a0a87b8(pppppppcVar19,&DAT_10f6372be,&ppppppppuStack_260);
                  if ((int)pppppppcVar21 != 0) {
                    func_0x00010937c560(&ppppppppuStack_260);
                    FUN_10a0c32e4(&pppppppcStack_460);
                    if ((long)pppppcStack_2b0 < 0) {
                      __ZdlPv(pppppppcStack_2c0);
                    }
                    ppppppcStack_2b8 = ppppppcStack_458;
                    pppppppcStack_2c0 = pppppppcStack_460;
                    pppppcStack_2b0 = pppppcStack_450;
                  }
                  ppppppppuStack_258 = (undefined ********)0x0;
                  ppppppppuStack_260 = (undefined ********)0x0;
                  ppppppppuStack_250 = (undefined ********)0x0;
                  ppppppppuStack_248 = (undefined ********)0x8000000000000000;
                  FUN_10a0a87b8(pppppppcVar19,&DAT_10f6372cc,&ppppppppuStack_260);
                  if ((int)pppppppcVar19 != 0) {
                    func_0x00010937c560(&ppppppppuStack_260);
                    FUN_10a0c32e4(&pppppppcStack_460);
                    if ((long)pppppcStack_2c8 < 0) {
                      __ZdlPv(pppppppcStack_2d8);
                    }
                    ppppppcStack_2d0 = ppppppcStack_458;
                    pppppppcStack_2d8 = pppppppcStack_460;
                    pppppcStack_2c8 = pppppcStack_450;
                  }
                }
                pppppppuVar18 = pppppppuStack_418;
                ppppppuVar23 = pppppppuStack_418[7];
                if (ppppppuVar23 < pppppppuStack_418[8]) {
                  FUN_10a0de958(ppppppuVar23,&pppppppuStack_3b0);
                  pppppppuVar20 = (undefined *******)(ppppppuVar23 + 0x21);
                }
                else {
                  pppppppuVar20 = pppppppuStack_418 + 6;
                  FUN_10a0de7f0(pppppppuVar20,&pppppppuStack_3b0);
                }
                pppppppuVar18[7] = (undefined ******)pppppppuVar20;
                func_0x00010a0cd6bc(&pppppppuStack_3b0);
                func_0x00010937c698(&pppppppcStack_3f0);
              }
            }
          }
          ppppppppuStack_260 = &pppppppuStack_420;
          ppppppppuStack_250 = &pppppppuStack_418;
          pcVar16 = acStack_438;
          ppppppppuStack_258 = param_1;
          FUN_10a0a8bcc(pcVar16,&ppppppppuStack_260);
          if (((ulong)pcVar16 & 1) != 0) {
            ppppppppuStack_260 = &pppppppuStack_420;
            ppppppppuStack_250 = &pppppppuStack_418;
            pcVar16 = acStack_438;
            ppppppppuStack_258 = param_1;
            FUN_10a0a9364(pcVar16,&ppppppppuStack_260);
            if (((ulong)pcVar16 & 1) != 0) {
              ppppppppuStack_260 = &pppppppuStack_420;
              ppppppppuStack_258 = &pppppppuStack_418;
              pcVar16 = acStack_438;
              ppppppppuStack_250 = param_1;
              FUN_10a0aa2b0(pcVar16,&ppppppppuStack_260);
              if (((ulong)pcVar16 & 1) != 0) {
                ppppppuVar33 = pppppppuStack_418[0x10];
                for (ppppppuVar23 = pppppppuStack_418[0xf]; ppppppuVar23 != ppppppuVar33;
                    ppppppuVar23 = ppppppuVar23 + 0x21) {
                  pppppuVar5 = ppppppuVar23[4];
                  for (pppppuVar4 = ppppppuVar23[3]; pppppuVar4 != pppppuVar5;
                      pppppuVar4 = pppppuVar4 + 0x20) {
                    uVar7 = *(uint *)((long)pppppuVar4 + 0x1c);
                    if (-1 < (int)uVar7) {
                      uVar27 = ((long)pppppppuStack_418[1] - (long)*pppppppuStack_418 >> 4) *
                               -0x30c30c30c30c30c3;
                      if (uVar27 < uVar7 || uVar27 - uVar7 == 0) {
                        if (pppppppuStack_420 == (undefined *******)0x0) goto LAB_10a0a8150;
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                  (pppppppuStack_420,&UNK_10f63722c,0x28);
                        goto LAB_10a0a8150;
                      }
                      uVar7 = *(uint *)(*pppppppuStack_418 + (ulong)uVar7 * 0x2a);
                      if (((int)uVar7 < 0) ||
                         (uVar27 = ((long)pppppppuStack_418[10] - (long)pppppppuStack_418[9] >> 3) *
                                   0xf83e0f83e0f83e1, uVar27 < uVar7 || uVar27 - uVar7 == 0)) {
                        if (pppppppuStack_420 == (undefined *******)0x0) goto LAB_10a0a8150;
                        __ZNSt3__19to_stringEi(&pppppppuStack_288);
                        pppppppuVar18 = (undefined *******)&pppppppuStack_288;
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                  (pppppppuVar18,0,&UNK_10f637255,9);
                        ppppppuStack_3a8 = pppppppuVar18[1];
                        pppppppuStack_3b0 = (undefined *******)*pppppppuVar18;
                        ppppppuStack_3a0 = pppppppuVar18[2];
                        pppppppuVar18[1] = (undefined ******)0x0;
                        pppppppuVar18[2] = (undefined ******)0x0;
                        *pppppppuVar18 = (undefined ******)0x0;
                        pppppppuVar18 = (undefined *******)&pppppppuStack_3b0;
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                  (pppppppuVar18,&UNK_10f63725f,0x14);
                        ppppppppuStack_258 = (undefined ********)pppppppuVar18[1];
                        ppppppppuStack_260 = (undefined ********)*pppppppuVar18;
                        ppppppppuStack_250 = (undefined ********)pppppppuVar18[2];
                        pppppppuVar18[1] = (undefined ******)0x0;
                        pppppppuVar18[2] = (undefined ******)0x0;
                        *pppppppuVar18 = (undefined ******)0x0;
                        ppppppppuVar17 = ppppppppuStack_258;
                        ppppppppuVar10 = ppppppppuStack_260;
                        if (-1 < (long)ppppppppuStack_250) {
                          ppppppppuVar17 = (undefined ********)((ulong)ppppppppuStack_250 >> 0x38);
                          ppppppppuVar10 = (undefined ********)&ppppppppuStack_260;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                  (pppppppuStack_420,ppppppppuVar10,ppppppppuVar17);
                        if ((long)ppppppppuStack_250 < 0) {
                          __ZdlPv(ppppppppuStack_260);
                        }
                        if ((long)ppppppuStack_3a0 < 0) {
                          __ZdlPv(pppppppuStack_3b0);
                        }
                        if (-1 < (long)pppppuStack_278) goto LAB_10a0a8150;
                        __ZdlPv(pppppppuStack_288);
                        goto LAB_10a0a8150;
                      }
                      *(undefined4 *)(pppppppuStack_418[9] + (ulong)uVar7 * 0x21 + 7) = 0x8893;
                    }
                    pppppuVar31 = (undefined *****)*pppppuVar4;
                    while (pppppuVar31 != pppppuVar4 + 1) {
                      uVar7 = *(uint *)(pppppuVar31 + 7);
                      if (((int)uVar7 < 0) ||
                         (uVar27 = ((long)pppppppuStack_418[1] - (long)*pppppppuStack_418 >> 4) *
                                   -0x30c30c30c30c30c3, uVar27 < uVar7 || uVar27 - uVar7 == 0)) {
                        if (pppppppuStack_420 == (undefined *******)0x0) goto LAB_10a0a8150;
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                  (pppppppuStack_420,&UNK_10f637274,0x2a);
                        goto LAB_10a0a6e8c;
                      }
                      uVar7 = *(uint *)(*pppppppuStack_418 + (ulong)uVar7 * 0x2a);
                      if (-1 < (int)uVar7) {
                        uVar27 = ((long)pppppppuStack_418[10] - (long)pppppppuStack_418[9] >> 3) *
                                 0xf83e0f83e0f83e1;
                        if (uVar27 < uVar7 || uVar27 - uVar7 == 0) {
                          if (pppppppuStack_420 == (undefined *******)0x0) goto LAB_10a0a8150;
                          __ZNSt3__19to_stringEi(&pppppppuStack_288);
                          FUN_109feb280(&pppppppuStack_3b0,&UNK_10f637255,&pppppppuStack_288);
                          FUN_10a012db0(&ppppppppuStack_260,&pppppppuStack_3b0,&UNK_10f63725f);
                          ppppppppuVar17 = ppppppppuStack_258;
                          ppppppppuVar10 = ppppppppuStack_260;
                          if (-1 < (long)ppppppppuStack_250) {
                            ppppppppuVar17 = (undefined ********)((ulong)ppppppppuStack_250 >> 0x38)
                            ;
                            ppppppppuVar10 = (undefined ********)&ppppppppuStack_260;
                          }
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                    (pppppppuStack_420,ppppppppuVar10,ppppppppuVar17);
                          if ((long)ppppppppuStack_250 < 0) {
                            __ZdlPv(ppppppppuStack_260);
                          }
                          if ((long)ppppppuStack_3a0 < 0) {
                            __ZdlPv(pppppppuStack_3b0);
                          }
                          if ((long)pppppuStack_278 < 0) {
                            __ZdlPv(pppppppuStack_288);
                          }
                          goto LAB_10a0a6e8c;
                        }
                        *(undefined4 *)(pppppppuStack_418[9] + (ulong)uVar7 * 0x21 + 7) = 0x8892;
                      }
                      pppppuVar32 = pppppuVar31;
                      pppppuVar12 = (undefined *****)pppppuVar31[1];
                      if ((undefined *****)pppppuVar31[1] == (undefined *****)0x0) {
                        do {
                          pppppuVar31 = (undefined *****)pppppuVar32[2];
                          bVar14 = (undefined *****)*pppppuVar31 != pppppuVar32;
                          pppppuVar32 = pppppuVar31;
                        } while (bVar14);
                      }
                      else {
                        do {
                          pppppuVar31 = pppppuVar12;
                          pppppuVar12 = (undefined *****)*pppppuVar31;
                        } while ((undefined *****)*pppppuVar31 != (undefined *****)0x0);
                      }
                    }
                    ppppuVar6 = pppppuVar4[6];
                    for (ppppuVar34 = pppppuVar4[5]; ppppuVar34 != ppppuVar6;
                        ppppuVar34 = ppppuVar34 + 3) {
                      ppppuVar24 = (undefined ****)*ppppuVar34;
                      while (ppppuVar24 != ppppuVar34 + 1) {
                        uVar7 = *(uint *)(ppppuVar24 + 7);
                        if (((int)uVar7 < 0) ||
                           (uVar27 = ((long)pppppppuStack_418[1] - (long)*pppppppuStack_418 >> 4) *
                                     -0x30c30c30c30c30c3, uVar27 < uVar7 || uVar27 - uVar7 == 0)) {
LAB_10a0a7a68:
                          ppppuVar24 = ppppuVar34;
                          FUN_10a0e1844();
                        }
                        else {
                          uVar7 = *(uint *)(*pppppppuStack_418 + (ulong)uVar7 * 0x2a);
                          if (-1 < (int)uVar7) {
                            uVar27 = ((long)pppppppuStack_418[10] - (long)pppppppuStack_418[9] >> 3)
                                     * 0xf83e0f83e0f83e1;
                            if (uVar27 < uVar7 || uVar27 - uVar7 == 0) goto LAB_10a0a7a68;
                            *(undefined4 *)(pppppppuStack_418[9] + (ulong)uVar7 * 0x21 + 7) = 0x8892
                            ;
                          }
                          ppppuVar25 = ppppuVar24;
                          ppppuVar11 = (undefined ****)ppppuVar24[1];
                          if ((undefined ****)ppppuVar24[1] == (undefined ****)0x0) {
                            do {
                              ppppuVar24 = (undefined ****)ppppuVar25[2];
                              bVar14 = (undefined ****)*ppppuVar24 != ppppuVar25;
                              ppppuVar25 = ppppuVar24;
                            } while (bVar14);
                          }
                          else {
                            do {
                              ppppuVar24 = ppppuVar11;
                              ppppuVar11 = (undefined ****)*ppppuVar24;
                            } while ((undefined ****)*ppppuVar24 != (undefined ****)0x0);
                          }
                        }
                      }
                    }
                  }
                }
                ppppppppuStack_260 = &pppppppuStack_420;
                ppppppppuStack_250 = &pppppppuStack_418;
                pcVar16 = acStack_438;
                ppppppppuStack_258 = param_1;
                FUN_10a0ac974(pcVar16,&ppppppppuStack_260);
                if (((ulong)pcVar16 & 1) != 0) {
                  ppppppppuStack_260 = &pppppppuStack_420;
                  ppppppppuStack_250 = &pppppppuStack_418;
                  pcVar16 = acStack_438;
                  ppppppppuStack_258 = param_1;
                  FUN_10a0ad1c4(pcVar16,&ppppppppuStack_260);
                  if (((ulong)pcVar16 & 1) != 0) {
                    ppppppppuStack_258 = (undefined ********)0x0;
                    ppppppppuStack_260 = (undefined ********)0x0;
                    ppppppppuStack_250 = (undefined ********)0x0;
                    ppppppppuStack_248 = (undefined ********)0x8000000000000000;
                    pcVar16 = acStack_438;
                    FUN_10a0a87b8(pcVar16,&DAT_10f2c3a26,&ppppppppuStack_260);
                    if ((int)pcVar16 != 0) {
                      ppppppppuVar17 = (undefined ********)&ppppppppuStack_260;
                      func_0x00010937c560();
                      if (*(byte *)ppppppppuVar17 - 5 < 2) {
                        func_0x00010950694c();
                        *(int *)(pppppppuStack_418 + 0x2a) = (int)pppppppuStack_3b0;
                      }
                    }
                    ppppppppuStack_260 = &pppppppuStack_420;
                    ppppppppuStack_250 = &pppppppuStack_418;
                    pcVar16 = acStack_438;
                    ppppppppuStack_258 = param_1;
                    FUN_10a0ad748(pcVar16,&ppppppppuStack_260);
                    if (((ulong)pcVar16 & 1) != 0) {
                      pppppppuStack_3b0 =
                           (undefined *******)((ulong)pppppppuStack_3b0 & 0xffffffff00000000);
                      ppppppppuStack_260 = &pppppppuStack_420;
                      ppppppppuStack_258 = &pppppppuStack_3b0;
                      ppppppppuStack_250 = &pppppppuStack_428;
                      pppppppuStack_238 = (undefined *******)&pppppppuStack_418;
                      pcVar16 = acStack_438;
                      ppppppppuStack_248 = param_1;
                      ppppppppuStack_240 = param_7;
                      FUN_10a0af0e0(pcVar16,&ppppppppuStack_260);
                      if (((ulong)pcVar16 & 1) == 0) goto LAB_10a0a8150;
                      ppppppppuStack_260 = &pppppppuStack_420;
                      ppppppppuStack_248 = &pppppppuStack_418;
                      pcVar16 = acStack_438;
                      ppppppppuStack_258 = param_1;
                      ppppppppuStack_250 = param_7;
                      FUN_10a0b0920(pcVar16,&ppppppppuStack_260);
                      if (((ulong)pcVar16 & 1) == 0) goto LAB_10a0a8150;
                      ppppppppuStack_260 = &pppppppuStack_420;
                      ppppppppuStack_250 = &pppppppuStack_418;
                      pcVar16 = acStack_438;
                      ppppppppuStack_258 = param_1;
                      FUN_10a0b0eb4(pcVar16,&ppppppppuStack_260);
                      if (((ulong)pcVar16 & 1) == 0) goto LAB_10a0a8150;
                      ppppppppuStack_260 = &pppppppuStack_420;
                      ppppppppuStack_250 = &pppppppuStack_418;
                      pcVar16 = acStack_438;
                      ppppppppuStack_258 = param_1;
                      FUN_10a0b1f58(pcVar16,&ppppppppuStack_260);
                      if (((ulong)pcVar16 & 1) == 0) goto LAB_10a0a8150;
                      ppppppppuStack_260 = &pppppppuStack_420;
                      ppppppppuStack_250 = &pppppppuStack_418;
                      pcVar16 = acStack_438;
                      ppppppppuStack_258 = param_1;
                      FUN_10a0b2600(pcVar16,&ppppppppuStack_260);
                      if (((ulong)pcVar16 & 1) == 0) goto LAB_10a0a8150;
                      ppppppppuStack_260 = &pppppppuStack_420;
                      ppppppppuStack_250 = &pppppppuStack_418;
                      pcVar16 = acStack_438;
                      ppppppppuStack_258 = param_1;
                      FUN_10a0b2ccc(pcVar16,&ppppppppuStack_260);
                      if (((ulong)pcVar16 & 1) == 0) goto LAB_10a0a8150;
                      FUN_10a0b3de4(pppppppuStack_418 + 100,acStack_438);
                      pppppppuStack_3b0 = (undefined *******)0x0;
                      ppppppuStack_3a8 = (undefined ******)0x0;
                      ppppppuStack_3a0 = (undefined ******)0x0;
                      lStack_398 = -0x8000000000000000;
                      pcVar16 = acStack_438;
                      FUN_10a0a87b8(pcVar16,&DAT_10f6372be,&pppppppuStack_3b0);
                      if ((int)pcVar16 == 0) goto LAB_10a0a8418;
                      pppppppuVar18 = (undefined *******)&pppppppuStack_3b0;
                      func_0x00010937c560();
                      if (*(char *)pppppppuVar18 != '\x01') goto LAB_10a0a8418;
                      param_3 = (undefined *******)&pppppppuStack_3b0;
                      func_0x00010937c560();
                      pppppuStack_280 = (undefined *****)0x0;
                      pppppuStack_278 = (undefined *****)0x0;
                      uStack_270 = 0x8000000000000000;
                      cVar9 = *(char *)param_3;
                      pppppppuStack_288 = param_3;
                      if (cVar9 == '\0') goto LAB_10a0a8160;
                      pppppppuStack_3d0 = param_3;
                      if (cVar9 == '\x02') {
                        pppppuStack_278 = *param_3[1];
                        ppppppuStack_3c8 = (undefined ******)0x0;
                        uStack_3b8 = 0x8000000000000000;
                        pppppuStack_3c0 = param_3[1][1];
                        goto LAB_10a0a81a4;
                      }
                      if (cVar9 != '\x01') {
                        uStack_270 = 0;
                        goto LAB_10a0a8198;
                      }
                      pppppuStack_280 = *param_3[1];
                      pppppuStack_3c0 = (undefined *****)0x0;
                      uStack_3b8 = 0x8000000000000000;
                      ppppppuStack_3c8 = param_3[1] + 1;
                      goto LAB_10a0a81a4;
                    }
                  }
                }
              }
            }
          }
          goto LAB_10a0a6e8c;
        }
      }
    }
  }
  if (pppppppuStack_420 != (undefined *******)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuStack_420,&UNK_10f6371cf,0x38);
  }
LAB_10a0a6e8c:
  param_1 = (undefined ********)0x0;
LAB_10a0a6e90:
  do {
    param_3 = &ppppppuStack_430;
    func_0x000109380ffc(param_3,acStack_438[0]);
LAB_10a0a6e9c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return param_1;
    }
    ___stack_chk_fail();
LAB_10a0a8160:
    uStack_270 = 1;
LAB_10a0a8198:
    ppppppuStack_3c8 = (undefined ******)0x0;
    pppppuStack_3c0 = (undefined *****)0x0;
    uStack_3b8 = 1;
    pppppppuStack_3d0 = param_3;
LAB_10a0a81a4:
    while( true ) {
      pppppppuVar18 = (undefined *******)&pppppppuStack_288;
      func_0x00010937c708(pppppppuVar18,&pppppppuStack_3d0);
      if ((int)pppppppuVar18 != 0) break;
      FUN_10a0b40a0(alStack_2a0,&pppppppuStack_288);
      plVar22 = alStack_2a0;
      FUN_10a0b40d8(plVar22,&UNK_10f414fca);
      if ((int)plVar22 == 0) {
LAB_10a0a83dc:
        iVar15 = 0;
      }
      else {
        pppppppuVar18 = (undefined *******)&pppppppuStack_288;
        func_0x00010937c560();
        if (*(char *)pppppppuVar18 != '\x01') goto LAB_10a0a83dc;
        iVar15 = (int)&pppppppuStack_288;
        func_0x00010937c560();
        pppppppcStack_3f0 = (char *******)0x0;
        pppppcStack_3e8 = (char *****)0x0;
        pppppcStack_3e0 = (char *****)0x0;
        uStack_3d8 = 0x8000000000000000;
        FUN_10a0a87b8();
        if (iVar15 == 0) goto LAB_10a0a83dc;
        pppppppcVar19 = (char *******)&pppppppcStack_3f0;
        func_0x00010937c560();
        if (*(char *)pppppppcVar19 == '\x02') {
          ppppppcStack_408 = (char ******)0x0;
          pppppcStack_400 = (char *****)0x0;
          uStack_3f8 = 0x8000000000000000;
          cVar9 = *(char *)pppppppcVar19;
          if (cVar9 == '\0') {
            uStack_3f8 = 1;
          }
          else if (cVar9 == '\x02') {
            pppppcStack_400 = *pppppppcVar19[1];
          }
          else if (cVar9 == '\x01') {
            ppppppcStack_408 = (char ******)*pppppppcVar19[1];
          }
          else {
            uStack_3f8 = 0;
          }
          ppppppcStack_458 = (char ******)0x0;
          pppppcStack_450 = (char *****)0x0;
          uStack_448 = 0x8000000000000000;
          pppppppcStack_460 = pppppppcVar19;
          pppppppcStack_410 = pppppppcVar19;
          if (*(char *)pppppppcVar19 == '\x02') {
            pppppcStack_450 = pppppppcVar19[1][1];
          }
          else if (*(char *)pppppppcVar19 == '\x01') {
            ppppppcStack_458 = pppppppcVar19[1] + 1;
          }
          else {
            uStack_448 = 1;
          }
          while( true ) {
            pppppppcVar19 = (char *******)&pppppppcStack_410;
            func_0x00010937c708(pppppppcVar19,&pppppppcStack_460);
            pppppppuVar18 = pppppppuStack_420;
            if (((ulong)pppppppcVar19 & 1) != 0) break;
            ppppppppuStack_248 = (undefined ********)0x0;
            ppppppppuStack_250 = (undefined ********)0x0;
            pppppppuStack_238 = (undefined *******)0x0;
            ppppppppuStack_240 = (undefined ********)0x0;
            ppppppppuStack_258 = (undefined ********)0x0;
            ppppppppuStack_260 = (undefined ********)0x0;
            uStack_220 = 0;
            uStack_228 = 0;
            uStack_210 = 0;
            uStack_218 = 0;
            uStack_208 = 0;
            uStack_230 = 0x3ff0000000000000;
            uStack_200 = 0x3fe921fb544486e0;
            uStack_1f0 = 0;
            uStack_1e8 = 0;
            uStack_180 = 0;
            uStack_178 = 0;
            uStack_1d8 = 0;
            ppuStack_1e0 = (undefined **)0x0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            uStack_190 = 0;
            uStack_170 = 0;
            uStack_160 = 0;
            uStack_168 = 0;
            uStack_150 = 0;
            uStack_158 = 0;
            uStack_140 = 0;
            uStack_148 = 0;
            uStack_130 = 0;
            uStack_128 = 0;
            uStack_c0 = 0;
            uStack_b8 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_d0 = 0;
            uStack_b0 = 0;
            uStack_90 = 0;
            uStack_98 = 0;
            uStack_80 = 0;
            uStack_88 = 0;
            uStack_a0 = 0;
            uStack_a8 = 0;
            pppppppcVar19 = (char *******)&pppppppcStack_410;
            puStack_1f8 = &uStack_1f0;
            puStack_188 = &uStack_180;
            puStack_138 = &uStack_130;
            puStack_c8 = &uStack_c0;
            func_0x00010937c560(pppppppcVar19);
            ppppppppuVar17 = (undefined ********)&ppppppppuStack_260;
            FUN_10a0b4158(ppppppppuVar17,pppppppuVar18,pppppppcVar19,
                          *(undefined1 *)((long)param_1 + 0x12));
            if (((ulong)ppppppppuVar17 & 1) == 0) {
              FUN_10a0cef14(&ppppppppuStack_260);
              iVar15 = 1;
              goto LAB_10a0a83e0;
            }
            FUN_10a0b4914(pppppppuStack_418 + 0x27,&ppppppppuStack_260);
            FUN_10a0cef14(&ppppppppuStack_260);
            func_0x00010937c698(&pppppppcStack_410);
          }
          goto LAB_10a0a83dc;
        }
        iVar15 = 0xe;
      }
LAB_10a0a83e0:
      if (cStack_289 < '\0') {
        __ZdlPv(alStack_2a0[0]);
      }
      if ((iVar15 != 0xe) && (iVar15 != 0)) goto LAB_10a0a8150;
      func_0x00010937c698(&pppppppuStack_288);
    }
LAB_10a0a8418:
    FUN_10a0b4a84(pppppppuStack_418 + 0x55,acStack_438);
    if (*(char *)((long)param_1 + 0x12) == '\x01') {
      func_0x00010945a80c(acStack_438,&DAT_10f6372cc);
      FUN_10a0c32e4(&ppppppppuStack_260);
      pppppppuVar20 = pppppppuStack_418;
      pppppppuVar18 = pppppppuStack_418 + 0x67;
      if (*(char *)((long)pppppppuStack_418 + 0x34f) < '\0') {
        __ZdlPv(*pppppppuVar18);
      }
      pppppppuVar20[0x68] = (undefined ******)ppppppppuStack_258;
      *pppppppuVar18 = (undefined ******)ppppppppuStack_260;
      pppppppuVar20[0x69] = (undefined ******)ppppppppuStack_250;
      func_0x00010945a80c(acStack_438,&DAT_10f6372be);
      FUN_10a0c32e4(&ppppppppuStack_260);
      pppppppuVar20 = pppppppuStack_418;
      pppppppuVar18 = pppppppuStack_418 + 0x6a;
      if (*(char *)((long)pppppppuStack_418 + 0x367) < '\0') {
        __ZdlPv(*pppppppuVar18);
      }
      pppppppuVar20[0x6b] = (undefined ******)ppppppppuStack_258;
      *pppppppuVar18 = (undefined ******)ppppppppuStack_260;
      pppppppuVar20[0x6c] = (undefined ******)ppppppppuStack_250;
    }
    param_1 = (undefined ********)0x1;
  } while( true );
LAB_10a0a8150:
  param_1 = (undefined ********)0x0;
  goto LAB_10a0a6e90;
}



/* Entry: 10a0a87b8; end: 10a0a88f3;  */

uint FUN_10a0a87b8(char *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  cVar1 = *param_1;
  uStack_28 = param_2;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010938ce90(uVar2,&uStack_28);
    cVar1 = *param_1;
    uVar3 = 0x8000000000000000;
LAB_10a0a8828:
    *param_3 = param_1;
    param_3[1] = uVar2;
    param_3[2] = 0;
    param_3[3] = uVar3;
    lStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0x8000000000000000;
    if (cVar1 != '\x02') {
      if (cVar1 == '\x01') {
        lStack_40 = *(long *)(param_1 + 8) + 8;
      }
      else {
        uStack_30 = 1;
      }
      goto LAB_10a0a8874;
    }
  }
  else {
    if (cVar1 != '\x02') {
      uVar2 = 0;
      uVar3 = 1;
      goto LAB_10a0a8828;
    }
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
    *param_3 = param_1;
    param_3[1] = 0;
    param_3[2] = uVar2;
    param_3[3] = 0x8000000000000000;
  }
  uStack_30 = 0x8000000000000000;
  lStack_40 = 0;
  uStack_38 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
LAB_10a0a8874:
  pcStack_48 = param_1;
  func_0x00010937c708(param_3,&pcStack_48);
  return (uint)param_3 ^ 1;
}



/* Entry: 10a0a88f4; end: 10a0a8bcb;  */

void FUN_10a0a88f4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  char cStack_31;
  
  func_0x000107c2b054(&uStack_68,"version");
  func_0x000107c2b054(&uStack_48,&DAT_10f638986);
  FUN_10a0cdaf8(param_1,param_2,param_3,&uStack_68,1,&uStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  if (uStack_58 < 0) {
    __ZdlPv(uStack_68);
  }
  func_0x000107c2b054(&uStack_68,&UNK_10f63898c);
  func_0x000107c2b054(&uStack_48,&DAT_10f638986);
  FUN_10a0cdaf8(param_1 + 0x18,param_2,param_3,&uStack_68,0,&uStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  if (uStack_58 < 0) {
    __ZdlPv(uStack_68);
  }
  func_0x000107c2b054(&uStack_68,&UNK_10f638996);
  func_0x000107c2b054(&uStack_48,&DAT_10f638986);
  FUN_10a0cdaf8(param_1 + 0x30,param_2,param_3,&uStack_68,0,&uStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  if (uStack_58 < 0) {
    __ZdlPv(uStack_68);
  }
  func_0x000107c2b054(&uStack_68,&DAT_10f34671a);
  func_0x000107c2b054(&uStack_48,&DAT_10f638986);
  FUN_10a0cdaf8(param_1 + 0x48,param_2,param_3,&uStack_68,0,&uStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  if (uStack_58._7_1_ < '\0') {
    __ZdlPv(uStack_68);
  }
  FUN_10a0b3de4(param_1 + 0x60,param_3);
  FUN_10a0b4a84(param_1 + 0x78,param_3);
  if (param_4 != 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0x8000000000000000;
    uVar1 = param_3;
    FUN_10a0a87b8(param_3,&DAT_10f6372be,&uStack_68);
    if ((int)uVar1 != 0) {
      func_0x00010937c560(&uStack_68);
      FUN_10a0c32e4(&uStack_48);
      if (*(char *)(param_1 + 0x11f) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0x108));
      }
      *(undefined8 *)(param_1 + 0x110) = uStack_40;
      *(undefined8 *)(param_1 + 0x108) = uStack_48;
      *(ulong *)(param_1 + 0x118) = CONCAT17(cStack_31,uStack_38);
    }
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0x8000000000000000;
    FUN_10a0a87b8(param_3,&DAT_10f6372cc,&uStack_68);
    if ((int)param_3 != 0) {
      func_0x00010937c560(&uStack_68);
      FUN_10a0c32e4(&uStack_48);
      if (*(char *)(param_1 + 0x107) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1 + 0xf0));
      }
      *(undefined8 *)(param_1 + 0xf8) = uStack_40;
      *(undefined8 *)(param_1 + 0xf0) = uStack_48;
      *(ulong *)(param_1 + 0x100) = CONCAT17(cStack_31,uStack_38);
    }
  }
  return;
}



/* Entry: 10a0a8bcc; end: 10a0a9363;  */

/* WARNING: Removing unreachable block (ram,0x00010a0a8e8c) */
/* WARNING: Removing unreachable block (ram,0x00010a0a8ef0) */
/* WARNING: Removing unreachable block (ram,0x00010a0a8dc8) */
/* WARNING: Removing unreachable block (ram,0x00010a0a8e28) */
/* WARNING: Removing unreachable block (ram,0x00010a0a8f74) */
/* WARNING: Removing unreachable block (ram,0x00010a0a922c) */
/* WARNING: Removing unreachable block (ram,0x00010a0a8fe0) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10a0a8bcc(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  char **ppcVar8;
  ulong uVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined8 *******pppppppuVar12;
  long lVar13;
  char *pcStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  char *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  uint uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 *******pppppppuStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined1 uStack_1c8;
  uint uStack_1bc;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined1 auStack_198 [56];
  undefined8 uStack_160;
  char cStack_149;
  undefined **appuStack_138 [19];
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined4 auStack_6c [3];
  
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_2d0 = 0x8000000000000000;
  FUN_10a0a87b8(param_1,&UNK_10f414f85,&uStack_2e8);
  if ((int)param_1 == 0) {
    return 1;
  }
  pcVar3 = (char *)&uStack_2e8;
  func_0x00010937c560();
  if (*pcVar3 != '\x02') {
    return 1;
  }
  pcVar3 = (char *)&uStack_2e8;
  func_0x00010937c560();
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_2f0 = 0x8000000000000000;
  cVar2 = *pcVar3;
  if (cVar2 == '\0') {
    uStack_2f0 = 1;
  }
  else {
    if (cVar2 == '\x02') {
      uStack_2f8 = **(undefined8 **)(pcVar3 + 8);
      lStack_320 = 0;
      uStack_310 = 0x8000000000000000;
      uStack_318 = *(undefined8 *)(*(long *)(pcVar3 + 8) + 8);
      goto LAB_10a0a8cbc;
    }
    if (cVar2 == '\x01') {
      uStack_300 = **(undefined8 **)(pcVar3 + 8);
      uStack_318 = 0;
      uStack_310 = 0x8000000000000000;
      lStack_320 = *(long *)(pcVar3 + 8) + 8;
      goto LAB_10a0a8cbc;
    }
    uStack_2f0 = 0;
  }
  lStack_320 = 0;
  uStack_318 = 0;
  uStack_310 = 1;
LAB_10a0a8cbc:
  ppcVar4 = &pcStack_308;
  pcStack_328 = pcVar3;
  pcStack_308 = pcVar3;
  func_0x00010937c708(ppcVar4,&pcStack_328);
  if (((ulong)ppcVar4 & 1) == 0) {
    do {
      ppcVar4 = &pcStack_308;
      func_0x00010937c560();
      if (*(char *)ppcVar4 != '\x01') {
        if (*(long *)*param_2 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (*(long *)*param_2,&UNK_10f639f60,0x2e);
          return 0;
        }
        return 0;
      }
      uStack_2c8 = 0;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      uStack_2b0 = 0xffffffff;
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_280 = 0;
      uStack_288 = 0;
      uStack_270 = 0;
      uStack_278 = 0;
      uStack_260 = 0;
      uStack_268 = 0;
      uStack_250 = 0;
      uStack_258 = 0;
      uStack_240 = 0;
      uStack_248 = 0;
      uStack_238 = 0;
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_2a8 = 0;
      uStack_290 = 0;
      uStack_218 = 0;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f0 = 0;
      pppppppuStack_1f8 = (undefined8 *******)0x0;
      pppppppuStack_1e0 = (undefined8 *******)0x0;
      uStack_1e8 = 0;
      uStack_1d0 = 0;
      uStack_1d8 = 0;
      uStack_1c8 = 0;
      lVar13 = *(long *)*param_2;
      cVar2 = *(char *)(param_2[1] + 0x12);
      auStack_6c[0] = 0xffffffff;
      puStack_230 = &uStack_228;
      puStack_210 = &uStack_208;
      func_0x000107c2b054(&ppuStack_1b8,&DAT_10f637e74);
      func_0x000107c2b054(&pppppppuStack_88,&UNK_10f639f8f);
      puVar5 = auStack_6c;
      FUN_10a0deaa0(puVar5,lVar13,ppcVar4,&ppuStack_1b8,1,&pppppppuStack_88);
      if ((long)ppuStack_1a8 < 0) {
        __ZdlPv(ppuStack_1b8);
      }
      if (((ulong)puVar5 & 1) == 0) {
LAB_10a0a92ac:
        func_0x00010a0cd73c(&uStack_2c8);
        return 0;
      }
      uStack_90 = 0;
      func_0x000107c2b054(&ppuStack_1b8,&DAT_10f415065);
      func_0x000107c2b054(&pppppppuStack_88,"");
      FUN_10a0ddbf8(&uStack_90,lVar13,ppcVar4,&ppuStack_1b8,0,&pppppppuStack_88);
      if ((long)ppuStack_1a8 < 0) {
        __ZdlPv(ppuStack_1b8);
      }
      uStack_98 = 1;
      func_0x000107c2b054(&ppuStack_1b8,&UNK_10f637e9e);
      func_0x000107c2b054(&pppppppuStack_88,&UNK_10f639f8f);
      puVar6 = &uStack_98;
      FUN_10a0ddbf8(puVar6,lVar13,ppcVar4,&ppuStack_1b8,1,&pppppppuStack_88);
      if ((long)ppuStack_1a8 < 0) {
        __ZdlPv(ppuStack_1b8);
      }
      if (((ulong)puVar6 & 1) == 0) goto LAB_10a0a92ac;
      uStack_a0 = 0;
      func_0x000107c2b054(&ppuStack_1b8,&UNK_10f415091);
      func_0x000107c2b054(&pppppppuStack_88,"");
      puVar7 = &uStack_a0;
      FUN_10a0ddbf8(puVar7,lVar13,ppcVar4,&ppuStack_1b8,0,&pppppppuStack_88);
      if ((long)ppuStack_1a8 < 0) {
        __ZdlPv(ppuStack_1b8);
      }
      if ((int)puVar7 == 0) {
        uStack_a0 = 0;
      }
      uVar1 = uStack_a0;
      if ((0xfc < uStack_a0) || ((uStack_a0 & 3) != 0)) {
        if (lVar13 != 0) {
          FUN_109febc44(&ppuStack_1b8);
          pppuVar11 = &ppuStack_1a8;
          FUN_10a002568(pppuVar11,&UNK_10f639f9a,0x45);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
          __ZNKSt3__18ios_base6getlocEv
                    (&pppppppuStack_88,(undefined *)((long)pppuVar11 + (long)(*pppuVar11)[-3]));
          pppppppuVar12 = &pppppppuStack_88;
          __ZNKSt3__16locale9use_facetERNS0_2idE
                    (pppppppuVar12,PTR___ZNSt3__15ctypeIcE2idE_110346770);
          (*(code *)(*pppppppuVar12)[7])();
          __ZNSt3__16localeD1Ev(&pppppppuStack_88);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(pppuVar11,pppppppuVar12);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(pppuVar11);
          func_0x00010a002480(&pppppppuStack_88,&ppuStack_1a0,&uStack_1bc);
          uVar1 = uStack_80;
          pppppppuVar12 = pppppppuStack_88;
          if (-1 < (long)uStack_78) {
            uVar1 = uStack_78 >> 0x38;
            pppppppuVar12 = &pppppppuStack_88;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (lVar13,pppppppuVar12,uVar1);
          ppuStack_1b8 = &PTR_SUB_1108a5a38;
          ppuStack_1a8 = &PTR_DAT_1108a5a60;
          appuStack_138[0] = &PTR_DAT_1108a5a88;
          ppuStack_1a0 = &PTR_DAT_11088d7b0;
          if (cStack_149 < '\0') {
            __ZdlPv(uStack_160);
          }
          ppuStack_1a0 = (undefined **)
                         (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10
                         );
          __ZNSt3__16localeD1Ev(auStack_198);
          __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1b8,&PTR_PTR_1108a5aa0);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_138);
        }
        goto LAB_10a0a92ac;
      }
      uStack_1bc = 0;
      func_0x000107c2b054(&ppuStack_1b8,&DAT_10f638ab2);
      func_0x000107c2b054(&pppppppuStack_88,"");
      FUN_10a0deaa0(&uStack_1bc,lVar13,ppcVar4,&ppuStack_1b8,0,&pppppppuStack_88);
      if ((long)ppuStack_1a8 < 0) {
        __ZdlPv(ppuStack_1b8);
      }
      if (uStack_1bc >> 1 != 0x4449) {
        uStack_1bc = 0;
      }
      uStack_290 = uStack_1bc;
      func_0x000107c2b054(&ppuStack_1b8,&DAT_10f68f148);
      pppppppuStack_88 = (undefined8 *******)0x0;
      uStack_80 = 0;
      uStack_78 = 0;
      FUN_10a0cdaf8(&uStack_2c8,lVar13,ppcVar4,&ppuStack_1b8,0,&pppppppuStack_88);
      if ((long)ppuStack_1a8 < 0) {
        __ZdlPv(ppuStack_1b8);
      }
      FUN_10a0b3de4(&puStack_210,ppcVar4);
      FUN_10a0b4a84(&uStack_288,ppcVar4);
      if (cVar2 != '\0') {
        ppuStack_1b8 = (undefined **)0x0;
        uStack_1b0 = 0;
        ppuStack_1a8 = (undefined **)0x0;
        ppuStack_1a0 = (undefined **)0x8000000000000000;
        ppcVar8 = ppcVar4;
        FUN_10a0a87b8(ppcVar4,&DAT_10f6372be,&ppuStack_1b8);
        if ((int)ppcVar8 != 0) {
          func_0x00010937c560(&ppuStack_1b8);
          FUN_10a0c32e4(&pppppppuStack_88);
          if ((long)uStack_1d0 < 0) {
            __ZdlPv(pppppppuStack_1e0);
          }
          uStack_1d8 = uStack_80;
          pppppppuStack_1e0 = pppppppuStack_88;
          uStack_1d0 = uStack_78;
        }
        ppuStack_1b8 = (undefined **)0x0;
        uStack_1b0 = 0;
        ppuStack_1a8 = (undefined **)0x0;
        ppuStack_1a0 = (undefined **)0x8000000000000000;
        FUN_10a0a87b8(ppcVar4,&DAT_10f6372cc,&ppuStack_1b8);
        if ((int)ppcVar4 != 0) {
          func_0x00010937c560(&ppuStack_1b8);
          FUN_10a0c32e4(&pppppppuStack_88);
          if ((long)uStack_1e8 < 0) {
            __ZdlPv(pppppppuStack_1f8);
          }
          uStack_1f0 = uStack_80;
          pppppppuStack_1f8 = pppppppuStack_88;
          uStack_1e8 = uStack_78;
        }
      }
      uStack_2b0 = auStack_6c[0];
      uStack_2a8 = uStack_90;
      uStack_2a0 = uStack_98;
      lVar13 = *(long *)param_2[2];
      uVar9 = *(ulong *)(lVar13 + 0x50);
      uStack_298 = uVar1;
      if (uVar9 < *(ulong *)(lVar13 + 0x58)) {
        FUN_10a0dee98(uVar9,&uStack_2c8);
        lVar10 = uVar9 + 0x108;
      }
      else {
        lVar10 = lVar13 + 0x48;
        FUN_10a0ded30(lVar10,&uStack_2c8);
      }
      *(long *)(lVar13 + 0x50) = lVar10;
      func_0x00010a0cd73c(&uStack_2c8);
      func_0x00010937c698(&pcStack_308);
      ppcVar4 = &pcStack_308;
      func_0x00010937c708(ppcVar4,&pcStack_328);
    } while ((int)ppcVar4 == 0);
  }
  return 1;
}



/* Entry: 10a0a9364; end: 10a0aa2af;  */

/* WARNING: Removing unreachable block (ram,0x00010a0a9c88) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9bc4) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9d50) */
/* WARNING: Removing unreachable block (ram,0x00010a0a95b8) */
/* WARNING: Removing unreachable block (ram,0x00010a0a96d8) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9558) */
/* WARNING: Removing unreachable block (ram,0x00010a0a960c) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9890) */
/* WARNING: Removing unreachable block (ram,0x00010a0a995c) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9748) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9670) */
/* WARNING: Removing unreachable block (ram,0x00010a0a99bc) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9a0c) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9ec0) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9c98) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9ce4) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9cf4) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9d40) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9da0) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9db0) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9dfc) */
/* WARNING: Removing unreachable block (ram,0x00010a0a9e0c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10a0a9364(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined *puVar4;
  code *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  undefined8 *puVar8;
  char **ppcVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined8 *******pppppppuVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  char *pcStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  char *pcStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  char acStack_3c0 [32];
  undefined4 auStack_3a0 [2];
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 uStack_378;
  undefined4 uStack_374;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *******pppppppuStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 *******pppppppuStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined1 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined1 auStack_210 [56];
  undefined8 uStack_1d8;
  char cStack_1c1;
  undefined **appuStack_1b0 [19];
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 uStack_e9;
  undefined8 uStack_e8;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [28];
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 *******pppppppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined4 auStack_6c [3];
  
  acStack_3c0[0] = '\0';
  acStack_3c0[1] = '\0';
  acStack_3c0[2] = '\0';
  acStack_3c0[3] = '\0';
  acStack_3c0[4] = '\0';
  acStack_3c0[5] = '\0';
  acStack_3c0[6] = '\0';
  acStack_3c0[7] = '\0';
  acStack_3c0[8] = '\0';
  acStack_3c0[9] = '\0';
  acStack_3c0[10] = '\0';
  acStack_3c0[0xb] = '\0';
  acStack_3c0[0xc] = '\0';
  acStack_3c0[0xd] = '\0';
  acStack_3c0[0xe] = '\0';
  acStack_3c0[0xf] = '\0';
  acStack_3c0[0x10] = '\0';
  acStack_3c0[0x11] = '\0';
  acStack_3c0[0x12] = '\0';
  acStack_3c0[0x13] = '\0';
  acStack_3c0[0x14] = '\0';
  acStack_3c0[0x15] = '\0';
  acStack_3c0[0x16] = '\0';
  acStack_3c0[0x17] = '\0';
  acStack_3c0[0x18] = '\0';
  acStack_3c0[0x19] = '\0';
  acStack_3c0[0x1a] = '\0';
  acStack_3c0[0x1b] = '\0';
  acStack_3c0[0x1c] = '\0';
  acStack_3c0[0x1d] = '\0';
  acStack_3c0[0x1e] = '\0';
  acStack_3c0[0x1f] = -0x80;
  FUN_10a0a87b8(param_1,&UNK_10f414f7b,acStack_3c0);
  if ((int)param_1 == 0) {
    return 1;
  }
  pcVar6 = acStack_3c0;
  func_0x00010937c560();
  if (*pcVar6 != '\x02') {
    return 1;
  }
  pcVar6 = acStack_3c0;
  func_0x00010937c560();
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0x8000000000000000;
  cVar3 = *pcVar6;
  if (cVar3 == '\0') {
    uStack_3c8 = 1;
  }
  else {
    if (cVar3 == '\x02') {
      uStack_3d0 = **(undefined8 **)(pcVar6 + 8);
      lStack_3f8 = 0;
      uStack_3e8 = 0x8000000000000000;
      uStack_3f0 = *(undefined8 *)(*(long *)(pcVar6 + 8) + 8);
      goto LAB_10a0a9454;
    }
    if (cVar3 == '\x01') {
      uStack_3d8 = **(undefined8 **)(pcVar6 + 8);
      uStack_3f0 = 0;
      uStack_3e8 = 0x8000000000000000;
      lStack_3f8 = *(long *)(pcVar6 + 8) + 8;
      goto LAB_10a0a9454;
    }
    uStack_3c8 = 0;
  }
  lStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 1;
LAB_10a0a9454:
  ppcVar7 = &pcStack_3e0;
  pcStack_400 = pcVar6;
  pcStack_3e0 = pcVar6;
  func_0x00010937c708(ppcVar7,&pcStack_400);
  puVar4 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20;
  if (((ulong)ppcVar7 & 1) != 0) {
    return 1;
  }
  do {
    ppcVar7 = &pcStack_3e0;
    func_0x00010937c560();
    if (*(char *)ppcVar7 != '\x01') {
      if (*(long *)*param_2 == 0) {
        return 0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (*(long *)*param_2,&UNK_10f63a004,0x2c);
      return 0;
    }
    uStack_390 = 0;
    uStack_398 = 0;
    uStack_380 = 0;
    uStack_388 = 0;
    uStack_378 = 0;
    auStack_3a0[0] = 0xffffffff;
    uStack_374 = 0xffffffff;
    uStack_370 = 0;
    uStack_368 = 0xffffffff;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_310 = 0;
    uStack_2f0 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_26c = 0;
    uStack_2c8 = 0;
    pppppppuStack_2d0 = (undefined8 *******)0x0;
    pppppppuStack_2b8 = (undefined8 *******)0x0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    lVar22 = *(long *)*param_2;
    cVar3 = *(char *)(param_2[1] + 0x12);
    uStack_dc = 0xffffffff;
    puStack_308 = &uStack_300;
    puStack_2e8 = &uStack_2e0;
    func_0x000107c2b054(&ppuStack_230,&UNK_10f638a6e);
    func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a031);
    FUN_10a0deaa0(&uStack_dc,lVar22,ppcVar7,&ppuStack_230,0,&pppppppuStack_90);
    if ((long)ppuStack_220 < 0) {
      __ZdlPv(ppuStack_230);
    }
    uStack_e8 = 0;
    func_0x000107c2b054(&ppuStack_230,&DAT_10f415065);
    func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a031);
    FUN_10a0ddbf8(&uStack_e8,lVar22,ppcVar7,&ppuStack_230,0,&pppppppuStack_90);
    if ((long)ppuStack_220 < 0) {
      __ZdlPv(ppuStack_230);
    }
    uStack_e9 = 0;
    func_0x000107c2b054(&ppuStack_230,&UNK_10f415070);
    func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a031);
    func_0x00010a0defc8(&uStack_e9,ppcVar7,&ppuStack_230);
    if ((long)ppuStack_220 < 0) {
      __ZdlPv(ppuStack_230);
    }
    lStack_f8 = 0;
    func_0x000107c2b054(&ppuStack_230,"componentType");
    func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a031);
    plVar20 = &lStack_f8;
    FUN_10a0ddbf8(plVar20,lVar22,ppcVar7,&ppuStack_230,1,&pppppppuStack_90);
    if ((long)ppuStack_220 < 0) {
      __ZdlPv(ppuStack_230);
    }
    if (((ulong)plVar20 & 1) == 0) goto LAB_10a0aa0f8;
    uStack_100 = 0;
    func_0x000107c2b054(&ppuStack_230,&DAT_10f637eac);
    func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a031);
    puVar8 = &uStack_100;
    FUN_10a0ddbf8(puVar8,lVar22,ppcVar7,&ppuStack_230,1,&pppppppuStack_90);
    if ((long)ppuStack_220 < 0) {
      __ZdlPv(ppuStack_230);
    }
    if (((ulong)puVar8 & 1) == 0) goto LAB_10a0aa0f8;
    uStack_110 = 0;
    uStack_118 = 0;
    lStack_108 = 0;
    func_0x000107c2b054(&ppuStack_230,&DAT_10f6389e8);
    func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a031);
    puVar8 = &uStack_118;
    FUN_10a0cdaf8(puVar8,lVar22,ppcVar7,&ppuStack_230,1,&pppppppuStack_90);
    if ((long)ppuStack_220 < 0) {
      __ZdlPv(ppuStack_230);
      if (((ulong)puVar8 & 1) != 0) goto LAB_10a0a976c;
LAB_10a0a9f60:
      bVar19 = false;
    }
    else {
      if (((ulong)puVar8 & 1) == 0) goto LAB_10a0a9f60;
LAB_10a0a976c:
      puVar8 = &uStack_118;
      __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                (puVar8,&UNK_10f638a7a);
      if ((int)puVar8 != 0) {
        puVar8 = &uStack_118;
        __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                  (puVar8,&UNK_10f41507b);
        if ((int)puVar8 == 0) {
          uStack_368 = 2;
          goto LAB_10a0a991c;
        }
        puVar8 = &uStack_118;
        __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                  (puVar8,&UNK_10f638a86);
        if ((int)puVar8 == 0) {
          uStack_368 = 3;
          goto LAB_10a0a991c;
        }
        puVar8 = &uStack_118;
        __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                  (puVar8,&UNK_10f415080);
        if ((int)puVar8 == 0) {
          uStack_368 = 4;
          goto LAB_10a0a991c;
        }
        puVar8 = &uStack_118;
        __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                  (puVar8,&UNK_10f638a90);
        if ((int)puVar8 == 0) {
          uStack_368 = 0x22;
          goto LAB_10a0a991c;
        }
        puVar8 = &uStack_118;
        __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                  (puVar8,&UNK_10f415085);
        if ((int)puVar8 == 0) {
          uStack_368 = 0x23;
          goto LAB_10a0a991c;
        }
        puVar8 = &uStack_118;
        __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc
                  (puVar8,&UNK_10f638a9a);
        if ((int)puVar8 == 0) {
          uStack_368 = 0x24;
          goto LAB_10a0a991c;
        }
        FUN_109febc44(&ppuStack_230);
        FUN_10a002568(&ppuStack_220,&UNK_10f63a03a,0x2d);
        FUN_10a002568();
        FUN_10a002568();
        if (lVar22 != 0) {
          func_0x00010a002480(&pppppppuStack_90,&ppuStack_218,&uStack_250);
          uVar17 = uStack_88;
          pppppppuVar12 = pppppppuStack_90;
          if (-1 < (long)uStack_80) {
            uVar17 = uStack_80 >> 0x38;
            pppppppuVar12 = &pppppppuStack_90;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (lVar22,pppppppuVar12,uVar17);
        }
        ppuStack_230 = &PTR_SUB_1108a5a38;
        ppuStack_220 = &PTR_DAT_1108a5a60;
        appuStack_1b0[0] = &PTR_DAT_1108a5a88;
        ppuStack_218 = &PTR_DAT_11088d7b0;
        puVar14 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20;
        if (cStack_1c1 < '\0') {
          __ZdlPv(uStack_1d8);
          puVar14 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20;
        }
LAB_10a0a9f04:
        ppuStack_218 = (undefined **)(puVar14 + 0x10);
        __ZNSt3__16localeD1Ev(auStack_210);
        __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_230,&PTR_PTR_1108a5aa0);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_1b0);
        goto LAB_10a0a9f60;
      }
      uStack_368 = 0x41;
LAB_10a0a991c:
      func_0x000107c2b054(&ppuStack_230,&DAT_10f68f148);
      pppppppuStack_90 = (undefined8 *******)0x0;
      uStack_88 = 0;
      uStack_80 = 0;
      FUN_10a0cdaf8(&uStack_398,lVar22,ppcVar7,&ppuStack_230,0,&pppppppuStack_90);
      if ((long)ppuStack_220 < 0) {
        __ZdlPv(ppuStack_230);
      }
      uStack_298 = uStack_2a0;
      uStack_280 = uStack_288;
      func_0x000107c2b054(&ppuStack_230,&DAT_10f3dd8ed);
      func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a031);
      FUN_10a0ce878(&uStack_2a0,ppcVar7,&ppuStack_230);
      if ((long)ppuStack_220 < 0) {
        __ZdlPv(ppuStack_230);
      }
      func_0x000107c2b054(&ppuStack_230,&DAT_10f3dd8f1);
      func_0x000107c2b054(&pppppppuStack_90,&UNK_10f63a031);
      FUN_10a0ce878(&uStack_288,ppcVar7,&ppuStack_230);
      if ((long)ppuStack_220 < 0) {
        __ZdlPv(ppuStack_230);
      }
      uStack_370 = uStack_100;
      auStack_3a0[0] = uStack_dc;
      uStack_380 = uStack_e8;
      uStack_378 = uStack_e9;
      if (10 < lStack_f8 - 0x1400U) {
        FUN_109febc44(&ppuStack_230);
        FUN_10a002568(&ppuStack_220,&UNK_10f63a06b,0x29);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
        FUN_10a002568();
        if (lVar22 != 0) {
          func_0x00010a002480(&pppppppuStack_90,&ppuStack_218,&uStack_250);
          uVar17 = uStack_88;
          pppppppuVar12 = pppppppuStack_90;
          if (-1 < (long)uStack_80) {
            uVar17 = uStack_80 >> 0x38;
            pppppppuVar12 = &pppppppuStack_90;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (lVar22,pppppppuVar12,uVar17);
        }
        ppuStack_230 = &PTR_SUB_1108a5a38;
        ppuStack_220 = &PTR_DAT_1108a5a60;
        appuStack_1b0[0] = &PTR_DAT_1108a5a88;
        ppuStack_218 = &PTR_DAT_11088d7b0;
        puVar14 = puVar4;
        if (cStack_1c1 < '\0') {
          __ZdlPv(uStack_1d8);
        }
        goto LAB_10a0a9f04;
      }
      uStack_374 = (undefined4)lStack_f8;
      FUN_10a0b3de4(&puStack_2e8,ppcVar7);
      FUN_10a0b4a84(&uStack_360,ppcVar7);
      if (cVar3 != '\0') {
        ppuStack_230 = (undefined **)0x0;
        uStack_228 = 0;
        ppuStack_220 = (undefined **)0x0;
        ppuStack_218 = (undefined **)0x8000000000000000;
        ppcVar9 = ppcVar7;
        FUN_10a0a87b8(ppcVar7,&DAT_10f6372be,&ppuStack_230);
        if ((int)ppcVar9 != 0) {
          func_0x00010937c560(&ppuStack_230);
          FUN_10a0c32e4(&pppppppuStack_90);
          if ((long)uStack_2a8 < 0) {
            __ZdlPv(pppppppuStack_2b8);
          }
          uStack_2b0 = uStack_88;
          pppppppuStack_2b8 = pppppppuStack_90;
          uStack_2a8 = uStack_80;
        }
        ppuStack_230 = (undefined **)0x0;
        uStack_228 = 0;
        ppuStack_220 = (undefined **)0x0;
        ppuStack_218 = (undefined **)0x8000000000000000;
        ppcVar9 = ppcVar7;
        FUN_10a0a87b8(ppcVar7,&DAT_10f6372cc,&ppuStack_230);
        if ((int)ppcVar9 != 0) {
          func_0x00010937c560(&ppuStack_230);
          FUN_10a0c32e4(&pppppppuStack_90);
          if ((long)uStack_2c0 < 0) {
            __ZdlPv(pppppppuStack_2d0);
          }
          uStack_2c8 = uStack_88;
          pppppppuStack_2d0 = pppppppuStack_90;
          uStack_2c0 = uStack_80;
        }
      }
      uStack_250 = 0;
      uStack_248 = 0;
      uStack_240 = 0;
      uStack_238 = 0x8000000000000000;
      FUN_10a0a87b8(ppcVar7,&UNK_10f41508a,&uStack_250);
      if ((int)ppcVar7 != 0) {
        puVar8 = &uStack_250;
        func_0x00010937c560();
        uStack_26c = 1;
        auStack_6c[0] = 0;
        func_0x000107c2b054(&ppuStack_230,&DAT_10f637eac);
        func_0x000107c2b054(&pppppppuStack_90,"");
        FUN_10a0deaa0(auStack_6c,lVar22,puVar8,&ppuStack_230,1,&pppppppuStack_90);
        if ((long)ppuStack_220 < 0) {
          __ZdlPv(ppuStack_230);
        }
        ppuStack_230 = (undefined **)0x0;
        uStack_228 = 0;
        ppuStack_220 = (undefined **)0x0;
        ppuStack_218 = (undefined **)0x8000000000000000;
        pppppppuStack_90 = (undefined8 *******)0x0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0x8000000000000000;
        puVar10 = puVar8;
        FUN_10a0a87b8(puVar8,&DAT_10f638b7c,&ppuStack_230);
        if (((ulong)puVar10 & 1) == 0) {
          puVar14 = &UNK_10f63a09c;
          uVar15 = 0x37;
        }
        else {
          FUN_10a0a87b8(puVar8,"values",&pppppppuStack_90);
          if (((ulong)puVar8 & 1) != 0) {
            pppuVar11 = &ppuStack_230;
            func_0x00010937c560(pppuVar11);
            pppppppuVar12 = &pppppppuStack_90;
            func_0x00010937c560(pppppppuVar12);
            uStack_98 = 0;
            uStack_9c = 0;
            func_0x000107c2b054(auStack_b8,&UNK_10f638a6e);
            func_0x000107c2b054(auStack_d0,"");
            FUN_10a0deaa0((long)&uStack_98 + 4,lVar22,pppuVar11,auStack_b8,1,auStack_d0);
            func_0x000107c2b054(auStack_b8,&DAT_10f415065);
            func_0x000107c2b054(auStack_d0,"");
            FUN_10a0deaa0(&uStack_98,lVar22,pppuVar11,auStack_b8,1,auStack_d0);
            func_0x000107c2b054(auStack_b8,"componentType");
            func_0x000107c2b054(auStack_d0,"");
            FUN_10a0deaa0(&uStack_9c,lVar22,pppuVar11,auStack_b8,1,auStack_d0);
            uStack_d8 = 0;
            func_0x000107c2b054(auStack_b8,&UNK_10f638a6e);
            func_0x000107c2b054(auStack_d0,"");
            FUN_10a0deaa0((long)&uStack_d8 + 4,lVar22,pppppppuVar12,auStack_b8,1,auStack_d0);
            func_0x000107c2b054(auStack_b8,&DAT_10f415065);
            func_0x000107c2b054(auStack_d0,"");
            FUN_10a0deaa0(&uStack_d8,lVar22,pppppppuVar12,auStack_b8,1,auStack_d0);
            uStack_270 = auStack_6c[0];
            uStack_264 = uStack_98._4_4_;
            uStack_268 = (undefined4)uStack_98;
            uStack_260 = uStack_9c;
            uStack_25c = uStack_d8._4_4_;
            bVar19 = true;
            uStack_258 = (undefined4)uStack_d8;
            goto LAB_10a0a9f64;
          }
          puVar14 = &UNK_10f63a0db;
          uVar15 = 0x35;
        }
        func_0x000107c2c4d8(lVar22,puVar14,uVar15);
        goto LAB_10a0a9f60;
      }
      bVar19 = true;
    }
LAB_10a0a9f64:
    if (lStack_108 < 0) {
      __ZdlPv(uStack_118);
    }
    if (!bVar19) {
LAB_10a0aa0f8:
      func_0x00010a0cd79c(auStack_3a0);
      return 0;
    }
    plVar20 = *(long **)param_2[2];
    uVar17 = plVar20[1];
    if (uVar17 < (ulong)plVar20[2]) {
      func_0x00010a0df04c(uVar17,auStack_3a0);
      lVar22 = uVar17 + 0x150;
    }
    else {
      lVar22 = uVar17 - *plVar20;
      uVar17 = (lVar22 >> 4) * -0x30c30c30c30c30c3 + 1;
      if (0xc30c30c30c30c3 < uVar17) {
        FUN_10a0df16c();
LAB_10a0aa134:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a0aa138);
        (*pcVar5)();
      }
      lVar16 = plVar20[2] - *plVar20 >> 4;
      uVar18 = lVar16 * -0x6186186186186186;
      if (uVar18 < uVar17 || uVar18 - uVar17 == 0) {
        uVar18 = uVar17;
      }
      if (0x61861861861860 < (ulong)(lVar16 * -0x30c30c30c30c30c3)) {
        uVar18 = 0xc30c30c30c30c3;
      }
      if (uVar18 == 0) {
        lVar16 = 0;
      }
      else {
        if (0xc30c30c30c30c3 < uVar18) {
          func_0x000109ffded8();
          goto LAB_10a0aa134;
        }
        lVar16 = uVar18 * 0x150;
        __Znwm();
      }
      lVar22 = lVar16 + lVar22;
      func_0x00010a0df04c(lVar22,auStack_3a0);
      lVar21 = *plVar20;
      lVar2 = plVar20[1];
      lVar1 = lVar22 + (lVar21 - lVar2);
      lVar13 = lVar1;
      lVar23 = lVar21;
      if (lVar2 != lVar21) {
        do {
          func_0x00010a0df04c(lVar13,lVar23);
          lVar23 = lVar23 + 0x150;
          lVar13 = lVar13 + 0x150;
        } while (lVar23 != lVar2);
        do {
          func_0x00010a0cd79c(lVar21);
          lVar21 = lVar21 + 0x150;
        } while (lVar21 != lVar2);
        lVar21 = *plVar20;
      }
      lVar22 = lVar22 + 0x150;
      *plVar20 = lVar1;
      plVar20[1] = lVar22;
      plVar20[2] = lVar16 + uVar18 * 0x150;
      if (lVar21 != 0) {
        __ZdlPv(lVar21);
      }
    }
    plVar20[1] = lVar22;
    func_0x00010a0cd79c(auStack_3a0);
    func_0x00010937c698(&pcStack_3e0);
    ppcVar7 = &pcStack_3e0;
    func_0x00010937c708(ppcVar7,&pcStack_400);
    if ((int)ppcVar7 != 0) {
      return 1;
    }
  } while( true );
}



/* Entry: 10a0aa2b0; end: 10a0ac973;  */

undefined8 FUN_10a0aa2b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  short *psVar4;
  ushort *puVar5;
  uint *puVar6;
  float *pfVar7;
  long lVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  ulong uVar15;
  undefined4 uVar16;
  code *pcVar17;
  bool bVar18;
  char *pcVar19;
  char **ppcVar20;
  ulong uVar21;
  char **ppcVar22;
  char *pcVar23;
  char **ppcVar24;
  char ******ppppppcVar25;
  long *plVar26;
  char *****pppppcVar27;
  byte *pbVar28;
  undefined8 ******ppppppuVar29;
  undefined8 ******ppppppuVar30;
  long *plVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  int iVar36;
  char ****ppppcVar37;
  long lVar38;
  int *piVar39;
  ulong uVar40;
  undefined8 *puVar41;
  long lVar42;
  ulong uVar43;
  int *piVar44;
  short *psVar45;
  ushort *puVar46;
  undefined8 *puVar47;
  uint *puVar48;
  long *plVar49;
  byte *pbVar50;
  float *pfVar51;
  long *plVar52;
  undefined8 *puVar53;
  double *pdVar54;
  long lVar55;
  long lVar56;
  long *plVar57;
  undefined8 uVar58;
  long lVar59;
  long *plVar60;
  double dVar61;
  double dVar62;
  char *pcStack_760;
  long lStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  char *pcStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 *puStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined1 uStack_630;
  char *****pppppcStack_628;
  char ***pppcStack_620;
  char ***pppcStack_618;
  char *****pppppcStack_610;
  char ***pppcStack_608;
  char ***pppcStack_600;
  undefined8 *****pppppuStack_5f0;
  undefined8 ****ppppuStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined4 uStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  long *plStack_5b8;
  undefined8 *****pppppuStack_5b0;
  undefined8 ****ppppuStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 uStack_528;
  char *****pppppcStack_520;
  char ***pppcStack_518;
  char ***pppcStack_510;
  char *****pppppcStack_508;
  char ***pppcStack_500;
  char ***pppcStack_4f8;
  char *pcStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  char *pcStack_4d0;
  long lStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  char ****ppppcStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  char ****ppppcStack_460;
  char ***pppcStack_458;
  char **ppcStack_450;
  long lStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 *****pppppuStack_358;
  ulong uStack_350;
  byte bStack_341;
  char cStack_339;
  long *plStack_338;
  undefined8 *****pppppuStack_330;
  undefined8 ****ppppuStack_328;
  char cStack_319;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  char *****pppppcStack_300;
  char ****ppppcStack_2f8;
  char ****ppppcStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 uStack_2d0;
  undefined2 uStack_2ce;
  undefined8 *puStack_2c8;
  undefined8 auStack_2c0 [2];
  char *****pppppcStack_2b0;
  char ****ppppcStack_2a8;
  char ****ppppcStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_258 [40];
  undefined8 uStack_230;
  char ****ppppcStack_228;
  char ****ppppcStack_220;
  undefined8 uStack_218;
  undefined8 uStack_1b0;
  char ***pppcStack_1a8;
  char ***pppcStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  ulong uStack_188;
  long lStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_720 = 0;
  uStack_718 = 0;
  uStack_710 = 0;
  uStack_708 = 0x8000000000000000;
  FUN_10a0a87b8(param_1,&UNK_10f414f74,&uStack_720);
  if ((int)param_1 != 0) {
    pcVar19 = (char *)&uStack_720;
    func_0x00010937c560();
    if (*pcVar19 == '\x02') {
      pcVar19 = (char *)&uStack_720;
      func_0x00010937c560();
      uStack_738 = 0;
      uStack_730 = 0;
      uStack_728 = 0x8000000000000000;
      cVar9 = *pcVar19;
      if (cVar9 == '\0') {
        uStack_728 = 1;
LAB_10a0aa3b0:
        lStack_758 = 0;
        uStack_750 = 0;
        uStack_748 = 1;
      }
      else if (cVar9 == '\x02') {
        uStack_730 = **(undefined8 **)(pcVar19 + 8);
        lStack_758 = 0;
        uStack_748 = 0x8000000000000000;
        uStack_750 = *(undefined8 *)(*(long *)(pcVar19 + 8) + 8);
      }
      else {
        if (cVar9 != '\x01') {
          uStack_728 = 0;
          goto LAB_10a0aa3b0;
        }
        uStack_738 = **(undefined8 **)(pcVar19 + 8);
        uStack_750 = 0;
        uStack_748 = 0x8000000000000000;
        lStack_758 = *(long *)(pcVar19 + 8) + 8;
      }
      ppcVar20 = &pcStack_740;
      pcStack_760 = pcVar19;
      pcStack_740 = pcVar19;
      func_0x00010937c708(ppcVar20,&pcStack_760);
      uVar58 = 1;
      if (((ulong)ppcVar20 & 1) != 0) goto LAB_10a0ac63c;
      do {
        ppcVar20 = &pcStack_740;
        func_0x00010937c560();
        if (*(char *)ppcVar20 != '\x01') {
          if (*(long *)*param_2 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (*(long *)*param_2,&UNK_10f63a111,0x29);
          }
          uVar58 = 0;
          goto LAB_10a0ac63c;
        }
        uStack_6b0 = 0;
        uStack_6a8 = 0;
        uStack_6f8 = 0;
        uStack_700 = 0;
        uStack_6e8 = 0;
        uStack_6f0 = 0;
        uStack_6d8 = 0;
        uStack_6e0 = 0;
        uStack_6c8 = 0;
        uStack_6d0 = 0;
        uStack_6c0 = 0;
        uStack_640 = 0;
        uStack_638 = 0;
        uStack_698 = 0;
        uStack_6a0 = 0;
        uStack_688 = 0;
        uStack_690 = 0;
        uStack_678 = 0;
        uStack_680 = 0;
        uStack_668 = 0;
        uStack_670 = 0;
        uStack_658 = 0;
        uStack_660 = 0;
        uStack_650 = 0;
        uStack_630 = 0;
        pppcStack_600 = (char ***)0x0;
        pppcStack_608 = (char ***)0x0;
        pppppcStack_610 = (char *****)0x0;
        pppcStack_618 = (char ***)0x0;
        pppcStack_620 = (char ***)0x0;
        pppppcStack_628 = (char *****)0x0;
        plVar57 = *(long **)param_2[1];
        lVar42 = *(long *)*param_2;
        cVar9 = *(char *)(param_2[2] + 0x12);
        puStack_6b8 = &uStack_6b0;
        puStack_648 = &uStack_640;
        func_0x000107c2b054(&ppppcStack_460,&DAT_10f68f148);
        pppcStack_1a8 = (char ***)0x0;
        uStack_1b0 = (char ******)0x0;
        pppcStack_1a0 = (char ***)0x0;
        FUN_10a0cdaf8(&uStack_700,lVar42,ppcVar20,&ppppcStack_460,0,&uStack_1b0);
        if ((long)pppcStack_1a0 < 0) {
          __ZdlPv(uStack_1b0);
        }
        uVar21 = uStack_6e0;
        uVar43 = uStack_6e8;
        if ((long)ppcStack_450 < 0) {
          __ZdlPv(ppppcStack_460);
          uVar21 = uStack_6e0;
          uVar43 = uStack_6e8;
        }
        while (uVar21 != uVar43) {
          uVar21 = uVar21 - 0x100;
          FUN_10a0cd8c4();
        }
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        uStack_4a0 = 0;
        uStack_498 = 0x8000000000000000;
        ppcVar22 = ppcVar20;
        uStack_6e0 = uVar43;
        FUN_10a0a87b8(ppcVar20,&UNK_10f41500d,&uStack_4b0);
        if ((int)ppcVar22 != 0) {
          pcVar19 = (char *)&uStack_4b0;
          func_0x00010937c560();
          if (*pcVar19 == '\x02') {
            pcVar19 = (char *)&uStack_4b0;
            func_0x00010937c560();
            lStack_4c8 = 0;
            uStack_4c0 = 0;
            uStack_4b8 = 0x8000000000000000;
            if (*pcVar19 == '\x02') {
              uStack_4c0 = *(undefined8 *)(*(long *)(pcVar19 + 8) + 8);
            }
            else if (*pcVar19 == '\x01') {
              lStack_4c8 = *(long *)(pcVar19 + 8) + 8;
            }
            else {
              uStack_4b8 = 1;
            }
            pcVar23 = (char *)&uStack_4b0;
            pcStack_4d0 = pcVar19;
            func_0x00010937c560();
            uStack_4e8 = 0;
            uStack_4e0 = 0;
            uStack_4d8 = 0x8000000000000000;
            cVar10 = *pcVar23;
            pcStack_4f0 = pcVar23;
            if (cVar10 == '\0') {
              uStack_4d8 = 1;
            }
            else if (cVar10 == '\x02') {
              uStack_4e0 = **(undefined8 **)(pcVar23 + 8);
            }
            else if (cVar10 == '\x01') {
              uStack_4e8 = **(undefined8 **)(pcVar23 + 8);
            }
            else {
              uStack_4d8 = 0;
            }
            while( true ) {
              ppcVar22 = &pcStack_4f0;
              func_0x00010937c708(ppcVar22,&pcStack_4d0);
              if ((int)ppcVar22 != 0) break;
              ppppuStack_5e8 = (undefined8 *****)0x0;
              uStack_5e0 = 0;
              plStack_5c0 = (long *)0x0;
              plStack_5b8 = (long *)0x0;
              plStack_5c8 = (long *)0x0;
              ppppuStack_5a8 = (undefined8 *****)0x0;
              uStack_5a0 = 0;
              uStack_538 = 0;
              uStack_530 = 0;
              uStack_590 = 0;
              uStack_598 = 0;
              uStack_580 = 0;
              uStack_588 = 0;
              uStack_570 = 0;
              uStack_578 = 0;
              uStack_560 = 0;
              uStack_568 = 0;
              uStack_550 = 0;
              uStack_558 = 0;
              uStack_548 = 0;
              uStack_528 = 0;
              pppppcStack_508 = (char *****)0x0;
              pppcStack_510 = (char ***)0x0;
              pppcStack_4f8 = (char ***)0x0;
              pppcStack_500 = (char ***)0x0;
              pppcStack_518 = (char ***)0x0;
              pppppcStack_520 = (char *****)0x0;
              uStack_5d8 = 0xffffffffffffffff;
              uStack_5d0 = 0xffffffff;
              ppcVar22 = &pcStack_4f0;
              pppppuStack_5f0 = &ppppuStack_5e8;
              pppppuStack_5b0 = &ppppuStack_5a8;
              puStack_540 = &uStack_538;
              func_0x00010937c560();
              uStack_464 = 0xffffffff;
              func_0x000107c2b054(&ppppcStack_460,&DAT_10f638b84);
              func_0x000107c2b054(&uStack_1b0,"");
              FUN_10a0deaa0(&uStack_464,lVar42,ppcVar22,&ppppcStack_460,0,&uStack_1b0);
              if ((long)pppcStack_1a0 < 0) {
                __ZdlPv(uStack_1b0);
              }
              if ((long)ppcStack_450 < 0) {
                __ZdlPv(ppppcStack_460);
              }
              uStack_5d8 = CONCAT44(uStack_5d8._4_4_,uStack_464);
              uStack_468 = 4;
              func_0x000107c2b054(&ppppcStack_460,"mode");
              func_0x000107c2b054(&uStack_1b0,"");
              FUN_10a0deaa0(&uStack_468,lVar42,ppcVar22,&ppppcStack_460,0,&uStack_1b0);
              if ((long)pppcStack_1a0 < 0) {
                __ZdlPv(uStack_1b0);
              }
              if ((long)ppcStack_450 < 0) {
                __ZdlPv(ppppcStack_460);
              }
              uStack_5d0 = uStack_468;
              uStack_46c = 0xffffffff;
              func_0x000107c2b054(&ppppcStack_460,&DAT_10f638b7c);
              func_0x000107c2b054(&uStack_1b0,"");
              FUN_10a0deaa0(&uStack_46c,lVar42,ppcVar22,&ppppcStack_460,0,&uStack_1b0);
              if ((long)pppcStack_1a0 < 0) {
                __ZdlPv(uStack_1b0);
              }
              if ((long)ppcStack_450 < 0) {
                __ZdlPv(ppppcStack_460);
              }
              uStack_5d8 = CONCAT44(uStack_46c,(undefined4)uStack_5d8);
              func_0x000107c2b054(&pppppuStack_330,"attributes");
              func_0x000107c2b054(&pppppuStack_358,&UNK_10f63a13b);
              pppcStack_458 = (char ***)0x0;
              ppppcStack_460 = (char ****)0x0;
              ppcStack_450 = (char **)0x0;
              lStack_448 = -0x8000000000000000;
              ppppppuVar29 = (undefined8 ******)pppppuStack_330;
              if (-1 < cStack_319) {
                ppppppuVar29 = &pppppuStack_330;
              }
              ppcVar24 = ppcVar22;
              FUN_10a0a87b8(ppcVar22,ppppppuVar29,&ppppcStack_460);
              if (((ulong)ppcVar24 & 1) == 0) {
                if (lVar42 != 0) {
                  uVar43 = uStack_350;
                  if (-1 < (char)bStack_341) {
                    uVar43 = (ulong)bStack_341;
                  }
                  if (uVar43 == 0) {
                    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                              (&uStack_230,&DAT_10f638984,&pppppuStack_330);
                    plVar26 = &uStack_230;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (plVar26,&UNK_10f63a162,0x17);
                    pppcStack_1a8 = (char ***)plVar26[1];
                    uStack_1b0 = (char ******)*plVar26;
                    pppcStack_1a0 = (char ***)plVar26[2];
                    plVar26[1] = 0;
                    plVar26[2] = 0;
                    *plVar26 = 0;
                    ppppcVar37 = (char ****)pppcStack_1a8;
                    ppppppcVar25 = uStack_1b0;
                    if (-1 < (long)pppcStack_1a0) {
                      ppppcVar37 = (char ****)((ulong)pppcStack_1a0 >> 0x38);
                      ppppppcVar25 = (char ******)&uStack_1b0;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (lVar42,ppppppcVar25,ppppcVar37);
                    goto LAB_10a0aab20;
                  }
                  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                            (&pppppcStack_300,&DAT_10f638984,&pppppuStack_330);
                  ppppppcVar25 = &pppppcStack_300;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppppppcVar25,&UNK_10f63a148,0x19);
                  ppppcStack_2a8 = (char ****)ppppppcVar25[1];
                  pppppcStack_2b0 = *ppppppcVar25;
                  ppppcStack_2a0 = (char ****)ppppppcVar25[2];
                  ppppppcVar25[1] = (char *****)0x0;
                  ppppppcVar25[2] = (char *****)0x0;
                  *ppppppcVar25 = (char *****)0x0;
                  uVar43 = uStack_350;
                  ppppppuVar29 = (undefined8 ******)pppppuStack_358;
                  if (-1 < (char)bStack_341) {
                    uVar43 = (ulong)bStack_341;
                    ppppppuVar29 = &pppppuStack_358;
                  }
                  ppppppcVar25 = &pppppcStack_2b0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppppppcVar25,ppppppuVar29,uVar43);
                  ppppcStack_228 = (char ****)ppppppcVar25[1];
                  uStack_230 = (char ******)*ppppppcVar25;
                  ppppcStack_220 = (char ****)ppppppcVar25[2];
                  ppppppcVar25[1] = (char *****)0x0;
                  ppppppcVar25[2] = (char *****)0x0;
                  *ppppppcVar25 = (char *****)0x0;
                  plVar26 = &uStack_230;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (plVar26,&UNK_10f58b966,2);
                  pppcStack_1a8 = (char ***)plVar26[1];
                  uStack_1b0 = (char ******)*plVar26;
                  pppcStack_1a0 = (char ***)plVar26[2];
                  plVar26[1] = 0;
                  plVar26[2] = 0;
                  *plVar26 = 0;
                  ppppcVar37 = (char ****)pppcStack_1a8;
                  ppppppcVar25 = uStack_1b0;
                  if (-1 < (long)pppcStack_1a0) {
                    ppppcVar37 = (char ****)((ulong)pppcStack_1a0 >> 0x38);
                    ppppppcVar25 = (char ******)&uStack_1b0;
                  }
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (lVar42,ppppppcVar25,ppppcVar37);
                  if ((long)pppcStack_1a0 < 0) {
                    __ZdlPv(uStack_1b0);
                  }
                  if ((long)ppppcStack_220 < 0) {
                    __ZdlPv(uStack_230);
                  }
                  ppppppcVar25 = (char ******)pppppcStack_300;
                  pppppcVar27 = (char *****)ppppcStack_2f0;
                  if ((long)ppppcStack_2a0 < 0) {
                    __ZdlPv(pppppcStack_2b0);
                    ppppppcVar25 = (char ******)pppppcStack_300;
                    pppppcVar27 = (char *****)ppppcStack_2f0;
                  }
joined_r0x00010a0aaa38:
                  if ((long)pppppcVar27 < 0) {
                    __ZdlPv(ppppppcVar25);
                  }
                }
LAB_10a0aab40:
                puVar41 = (undefined8 *)0x0;
              }
              else {
                ppppppcVar25 = (char ******)&ppppcStack_460;
                func_0x00010937c560();
                if (*(char *)ppppppcVar25 != '\x01') {
                  if (lVar42 != 0) {
                    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                              (&uStack_230,&DAT_10f638984,&pppppuStack_330);
                    plVar26 = &uStack_230;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (plVar26,&UNK_10f63a17a,0x1d);
                    pppcStack_1a8 = (char ***)plVar26[1];
                    uStack_1b0 = (char ******)*plVar26;
                    pppcStack_1a0 = (char ***)plVar26[2];
                    plVar26[1] = 0;
                    plVar26[2] = 0;
                    *plVar26 = 0;
                    ppppcVar37 = (char ****)pppcStack_1a8;
                    ppppppcVar25 = uStack_1b0;
                    if (-1 < (long)pppcStack_1a0) {
                      ppppcVar37 = (char ****)((ulong)pppcStack_1a0 >> 0x38);
                      ppppppcVar25 = (char ******)&uStack_1b0;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (lVar42,ppppppcVar25,ppppcVar37);
LAB_10a0aab20:
                    ppppppcVar25 = uStack_230;
                    pppppcVar27 = (char *****)ppppcStack_220;
                    if ((long)pppcStack_1a0 < 0) {
                      __ZdlPv(uStack_1b0);
                      ppppppcVar25 = uStack_230;
                      pppppcVar27 = (char *****)ppppcStack_220;
                    }
                    goto joined_r0x00010a0aaa38;
                  }
                  goto LAB_10a0aab40;
                }
                func_0x00010951ec08(&pppppuStack_5f0,ppppuStack_5e8);
                uStack_5e0 = 0;
                ppppuStack_5e8 = (undefined8 *****)0x0;
                pppcStack_1a8 = (char ***)0x0;
                pppcStack_1a0 = (char ***)0x0;
                uStack_198 = 0x8000000000000000;
                cVar10 = *(char *)ppppppcVar25;
                uStack_230 = ppppppcVar25;
                uStack_1b0 = ppppppcVar25;
                if (cVar10 == '\0') {
                  uStack_198 = 1;
LAB_10a0aac1c:
                  ppppcStack_228 = (char ****)0x0;
                  ppppcStack_220 = (char ****)0x0;
                  uStack_218 = 1;
                  pppppuStack_5f0 = &ppppuStack_5e8;
                }
                else if (cVar10 == '\x02') {
                  pppcStack_1a0 = (char ***)*ppppppcVar25[1];
                  ppppcStack_228 = (char ****)0x0;
                  uStack_218 = 0x8000000000000000;
                  ppppcStack_220 = ppppppcVar25[1][1];
                  pppppuStack_5f0 = &ppppuStack_5e8;
                }
                else {
                  if (cVar10 != '\x01') {
                    uStack_198 = 0;
                    goto LAB_10a0aac1c;
                  }
                  pppcStack_1a8 = (char ***)*ppppppcVar25[1];
                  uStack_218 = 0x8000000000000000;
                  ppppcStack_220 = (char ****)0x0;
                  ppppcStack_228 = (char ****)(ppppppcVar25[1] + 1);
                  pppppuStack_5f0 = &ppppuStack_5e8;
                }
                while( true ) {
                  puVar41 = &uStack_1b0;
                  func_0x00010937c708(puVar41,&uStack_230);
                  if (((ulong)puVar41 & 1) != 0) break;
                  pbVar28 = (byte *)&uStack_1b0;
                  func_0x00010937c560();
                  if (1 < *pbVar28 - 5) {
                    if (lVar42 != 0) {
                      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                                (&pppppcStack_300,&DAT_10f638984,&pppppuStack_330);
                      ppppppcVar25 = &pppppcStack_300;
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (ppppppcVar25,&UNK_10f63a198,0x20);
                      ppppcStack_2a8 = (char ****)ppppppcVar25[1];
                      pppppcStack_2b0 = *ppppppcVar25;
                      ppppcStack_2a0 = (char ****)ppppppcVar25[2];
                      ppppppcVar25[1] = (char *****)0x0;
                      ppppppcVar25[2] = (char *****)0x0;
                      *ppppppcVar25 = (char *****)0x0;
                      pppppcVar27 = (char *****)ppppcStack_2a8;
                      ppppppcVar25 = (char ******)pppppcStack_2b0;
                      if (-1 < (long)ppppcStack_2a0) {
                        pppppcVar27 = (char *****)((ulong)ppppcStack_2a0 >> 0x38);
                        ppppppcVar25 = &pppppcStack_2b0;
                      }
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (lVar42,ppppppcVar25,pppppcVar27);
                      if ((long)ppppcStack_2a0 < 0) {
                        __ZdlPv(pppppcStack_2b0);
                      }
                      if ((long)ppppcStack_2f0 < 0) {
                        __ZdlPv(pppppcStack_300);
                      }
                    }
                    break;
                  }
                  func_0x00010950694c();
                  pppppcVar27 = pppppcStack_2b0;
                  puVar41 = &uStack_1b0;
                  func_0x0001095a27d4();
                  puVar1 = (undefined8 *)*puVar41;
                  if (-1 < *(char *)((long)puVar41 + 0x17)) {
                    puVar1 = puVar41;
                  }
                  func_0x000107c2b054(&pppppcStack_2b0,puVar1);
                  ppppppuVar29 = &pppppuStack_5f0;
                  pppppcStack_300 = (char *****)&pppppcStack_2b0;
                  func_0x00010954a938(ppppppuVar29,&pppppcStack_2b0,&UNK_10dd5b8f9,&pppppcStack_300,
                                      &ppppcStack_490);
                  *(int *)(ppppppuVar29 + 7) = (int)pppppcVar27;
                  if ((long)ppppcStack_2a0 < 0) {
                    __ZdlPv(pppppcStack_2b0);
                  }
                  func_0x00010937c698(&uStack_1b0);
                }
              }
              if ((char)bStack_341 < '\0') {
                __ZdlPv(pppppuStack_358);
              }
              if (cStack_319 < '\0') {
                __ZdlPv(pppppuStack_330);
              }
              uVar43 = uStack_6e8;
              if (((ulong)puVar41 & 1) != 0) {
                uStack_488 = 0;
                ppppcStack_490 = (char ****)0x0;
                uStack_480 = 0;
                uStack_478 = 0x8000000000000000;
                ppcVar24 = ppcVar22;
                FUN_10a0a87b8(ppcVar22,"targets",&ppppcStack_490);
                if ((int)ppcVar24 != 0) {
                  pppppcVar27 = &ppppcStack_490;
                  func_0x00010937c560();
                  if (*(char *)pppppcVar27 == '\x02') {
                    pppppcVar27 = &ppppcStack_490;
                    func_0x00010937c560();
                    pppcStack_458 = (char ***)0x0;
                    ppcStack_450 = (char **)0x0;
                    lStack_448 = -0x8000000000000000;
                    if (*(char *)pppppcVar27 == '\x02') {
                      ppcStack_450 = (char **)pppppcVar27[1][1];
                    }
                    else if (*(char *)pppppcVar27 == '\x01') {
                      pppcStack_458 = (char ***)(pppppcVar27[1] + 1);
                    }
                    else {
                      lStack_448 = 1;
                    }
                    ppppppcVar25 = (char ******)&ppppcStack_490;
                    ppppcStack_460 = (char ****)pppppcVar27;
                    func_0x00010937c560();
                    pppcStack_1a8 = (char ***)0x0;
                    pppcStack_1a0 = (char ***)0x0;
                    uStack_198 = 0x8000000000000000;
                    cVar10 = *(char *)ppppppcVar25;
                    uStack_1b0 = ppppppcVar25;
                    if (cVar10 == '\0') {
                      uStack_198 = 1;
                    }
                    else if (cVar10 == '\x02') {
                      pppcStack_1a0 = (char ***)*ppppppcVar25[1];
                    }
                    else if (cVar10 == '\x01') {
                      pppcStack_1a8 = (char ***)*ppppppcVar25[1];
                    }
                    else {
                      uStack_198 = 0;
                    }
                    while( true ) {
                      puVar41 = &uStack_1b0;
                      func_0x00010937c708(puVar41,&ppppcStack_460);
                      if ((int)puVar41 != 0) break;
                      ppppcStack_2f8 = (char ****)0x0;
                      ppppcStack_2f0 = (char ****)0x0;
                      ppppppcVar25 = (char ******)&uStack_1b0;
                      pppppcStack_300 = &ppppcStack_2f8;
                      func_0x00010937c560();
                      if (*(char *)ppppppcVar25 == '\x01') {
                        ppppcStack_228 = (char ****)0x0;
                        ppppcStack_220 = (char ****)0x0;
                        uStack_218 = 0x8000000000000000;
                        cVar10 = *(char *)ppppppcVar25;
                        if (cVar10 == '\0') {
                          uStack_218 = 1;
                        }
                        else if (cVar10 == '\x02') {
                          ppppcStack_220 = *ppppppcVar25[1];
                        }
                        else if (cVar10 == '\x01') {
                          ppppcStack_228 = *ppppppcVar25[1];
                        }
                        else {
                          uStack_218 = 0;
                        }
                        ppppcStack_2a8 = (char ****)0x0;
                        ppppcStack_2a0 = (char ****)0x0;
                        uStack_298 = 0x8000000000000000;
                        pppppcStack_2b0 = (char *****)ppppppcVar25;
                        uStack_230 = ppppppcVar25;
                        if (*(char *)ppppppcVar25 == '\x02') {
                          ppppcStack_2a0 = ppppppcVar25[1][1];
                        }
                        else if (*(char *)ppppppcVar25 == '\x01') {
                          ppppcStack_2a8 = (char ****)(ppppppcVar25[1] + 1);
                        }
                        else {
                          uStack_298 = 1;
                        }
                        while( true ) {
                          puVar41 = &uStack_230;
                          func_0x00010937c708(puVar41,&pppppcStack_2b0);
                          plVar31 = plStack_5c0;
                          plVar26 = plStack_5c8;
                          if (((ulong)puVar41 & 1) != 0) break;
                          pbVar28 = (byte *)&uStack_230;
                          func_0x00010937c560();
                          if (*pbVar28 - 5 < 2) {
                            func_0x00010950694c();
                            uVar16 = pppppuStack_330._0_4_;
                            puVar41 = &uStack_230;
                            func_0x0001095a27d4();
                            puVar1 = (undefined8 *)*puVar41;
                            if (-1 < *(char *)((long)puVar41 + 0x17)) {
                              puVar1 = puVar41;
                            }
                            func_0x000107c2b054(&pppppuStack_330,puVar1);
                            ppppppcVar25 = &pppppcStack_300;
                            pppppuStack_358 = &pppppuStack_330;
                            func_0x00010954a938(ppppppcVar25,&pppppuStack_330,&UNK_10dd5b8f9,
                                                &pppppuStack_358,&puStack_2c8);
                            *(undefined4 *)(ppppppcVar25 + 7) = uVar16;
                            if (cStack_319 < '\0') {
                              __ZdlPv(pppppuStack_330);
                            }
                          }
                          func_0x00010937c698(&uStack_230);
                        }
                        if (plStack_5c0 < plStack_5b8) {
                          *plStack_5c0 = (long)pppppcStack_300;
                          ppppcVar37 = (char ****)(plStack_5c0 + 1);
                          *ppppcVar37 = (char ***)ppppcStack_2f8;
                          plStack_5c0[2] = (long)ppppcStack_2f0;
                          if ((char *****)ppppcStack_2f0 == (char *****)0x0) {
                            *plStack_5c0 = (long)ppppcVar37;
                          }
                          else {
                            ppppcStack_2f8[2] = (char ***)ppppcVar37;
                            ppppcStack_2f8 = (char ****)0x0;
                            ppppcStack_2f0 = (char ****)0x0;
                            pppppcStack_300 = &ppppcStack_2f8;
                          }
                          plStack_5c0 = plStack_5c0 + 3;
                        }
                        else {
                          lVar59 = (long)plStack_5c0 - (long)plStack_5c8;
                          uVar43 = (lVar59 >> 3) * -0x5555555555555555 + 1;
                          if (0xaaaaaaaaaaaaaaa < uVar43) {
                            func_0x00010a0df180();
                            goto LAB_10a0ac6d8;
                          }
                          lVar38 = (long)plStack_5b8 - (long)plStack_5c8 >> 3;
                          uVar21 = lVar38 * 0x5555555555555556;
                          if (uVar21 < uVar43 || uVar21 - uVar43 == 0) {
                            uVar21 = uVar43;
                          }
                          if (0x555555555555554 < (ulong)(lVar38 * -0x5555555555555555)) {
                            uVar21 = 0xaaaaaaaaaaaaaaa;
                          }
                          if (0xaaaaaaaaaaaaaaa < uVar21) {
                            func_0x000109ffded8();
                            goto LAB_10a0ac6d8;
                          }
                          lVar38 = uVar21 * 0x18;
                          __Znwm();
                          plVar32 = (long *)(lVar38 + lVar59);
                          *plVar32 = (long)pppppcStack_300;
                          ppppcVar37 = (char ****)(plVar32 + 1);
                          *ppppcVar37 = (char ***)ppppcStack_2f8;
                          plVar32[2] = (long)ppppcStack_2f0;
                          if ((char *****)ppppcStack_2f0 == (char *****)0x0) {
                            *plVar32 = (long)ppppcVar37;
                          }
                          else {
                            ppppcStack_2f8[2] = (char ***)ppppcVar37;
                            ppppcStack_2f8 = (char ****)0x0;
                            ppppcStack_2f0 = (char ****)0x0;
                            pppppcStack_300 = &ppppcStack_2f8;
                          }
                          plVar60 = (long *)((long)plVar32 - lVar59);
                          plVar49 = plVar26;
                          if (plVar26 != plVar31) {
                            lVar59 = 0;
                            do {
                              puVar41 = (undefined8 *)((long)plVar60 + lVar59);
                              puVar1 = (undefined8 *)((long)plVar26 + lVar59);
                              *puVar41 = *puVar1;
                              plVar49 = puVar1 + 1;
                              lVar55 = *plVar49;
                              plVar52 = puVar41 + 1;
                              *plVar52 = lVar55;
                              lVar56 = puVar1[2];
                              puVar41[2] = lVar56;
                              if (lVar56 == 0) {
                                *puVar41 = plVar52;
                              }
                              else {
                                *(long **)(lVar55 + 0x10) = plVar52;
                                *(long **)((long)plVar26 + lVar59) = plVar49;
                                *plVar49 = 0;
                                puVar1[2] = 0;
                              }
                              lVar59 = lVar59 + 0x18;
                            } while ((long *)((long)plVar26 + lVar59) != plVar31);
                            do {
                              func_0x00010951ec08(plVar26,plVar26[1]);
                              plVar26 = plVar26 + 3;
                              plVar49 = plStack_5c8;
                            } while (plVar26 != plVar31);
                          }
                          plStack_5b8 = (long *)(lVar38 + uVar21 * 0x18);
                          plVar32 = plVar32 + 3;
                          plStack_5c8 = plVar60;
                          plStack_5c0 = plVar32;
                          if (plVar49 != (long *)0x0) {
                            __ZdlPv(plVar49);
                            plStack_5c0 = plVar32;
                          }
                        }
                      }
                      func_0x00010951ec08(&pppppcStack_300,ppppcStack_2f8);
                      func_0x00010937c698(&uStack_1b0);
                    }
                  }
                }
                FUN_10a0b4a84(&uStack_598,ppcVar22);
                FUN_10a0b3de4(&pppppuStack_5b0,ppcVar22);
                if (cVar9 != '\0') {
                  pppcStack_458 = (char ***)0x0;
                  ppppcStack_460 = (char ****)0x0;
                  ppcStack_450 = (char **)0x0;
                  lStack_448 = -0x8000000000000000;
                  ppcVar24 = ppcVar22;
                  FUN_10a0a87b8(ppcVar22,&DAT_10f6372be,&ppppcStack_460);
                  if ((int)ppcVar24 != 0) {
                    func_0x00010937c560(&ppppcStack_460);
                    FUN_10a0c32e4(&uStack_1b0);
                    if ((long)pppcStack_4f8 < 0) {
                      __ZdlPv(pppppcStack_508);
                    }
                    pppcStack_500 = pppcStack_1a8;
                    pppppcStack_508 = (char *****)uStack_1b0;
                    pppcStack_4f8 = pppcStack_1a0;
                  }
                  pppcStack_458 = (char ***)0x0;
                  ppppcStack_460 = (char ****)0x0;
                  ppcStack_450 = (char **)0x0;
                  lStack_448 = -0x8000000000000000;
                  FUN_10a0a87b8(ppcVar22,&DAT_10f6372cc,&ppppcStack_460);
                  if ((int)ppcVar22 != 0) {
                    func_0x00010937c560(&ppppcStack_460);
                    FUN_10a0c32e4(&uStack_1b0);
                    if ((long)pppcStack_510 < 0) {
                      __ZdlPv(pppppcStack_520);
                    }
                    pppcStack_518 = pppcStack_1a8;
                    pppppcStack_520 = (char *****)uStack_1b0;
                    pppcStack_510 = pppcStack_1a0;
                  }
                }
                func_0x000107c2b054(&ppppcStack_460,&UNK_10f415020);
                ppppppuVar29 = &pppppuStack_5b0;
                FUN_10a0cd368(ppppppuVar29,&ppppcStack_460);
                if ((long)ppcStack_450 < 0) {
                  __ZdlPv(ppppcStack_460);
                }
                if ((undefined8 ******)&ppppuStack_5a8 != ppppppuVar29) {
                  func_0x000107c2b054(&ppppcStack_460,&UNK_10f638a6e);
                  ppppppuVar30 = ppppppuVar29 + 7;
                  func_0x00010a0b4efc(ppppppuVar30,&ppppcStack_460);
                  FUN_10a0c9578(&uStack_230,ppppppuVar30);
                  if ((long)ppcStack_450 < 0) {
                    __ZdlPv(ppppcStack_460);
                  }
                  if ((int)uStack_230 == 2) {
                    func_0x000107c2b054(&ppppcStack_460,"attributes");
                    ppppppuVar29 = ppppppuVar29 + 7;
                    func_0x00010a0b4efc(ppppppuVar29,&ppppcStack_460);
                    FUN_10a0c9578(&pppppcStack_2b0,ppppppuVar29);
                    if ((long)ppcStack_450 < 0) {
                      __ZdlPv(ppppcStack_460);
                    }
                    if ((int)pppppcStack_2b0 == 7) {
                      FUN_10a0c9838(&puStack_2c8,auStack_258);
                      uVar43 = (plVar57[10] - plVar57[9] >> 3) * 0xf83e0f83e0f83e1;
                      if (uVar43 < (ulong)(long)uStack_230._4_4_ ||
                          uVar43 - (long)uStack_230._4_4_ == 0) goto LAB_10a0ac6d8;
                      lVar38 = plVar57[9] + (long)uStack_230._4_4_ * 0x108;
                      iVar12 = *(int *)(lVar38 + 0x18);
                      lVar59 = plVar57[6];
                      uVar43 = (plVar57[7] - lVar59 >> 3) * 0xf83e0f83e0f83e1;
                      if (uVar43 < (ulong)(long)iVar12 || uVar43 - (long)iVar12 == 0)
                      goto LAB_10a0ac6d8;
                      if ((*(byte *)(lVar38 + 0x100) & 1) == 0) {
                        *(undefined1 *)(lVar38 + 0x100) = 1;
                        ppppcStack_2f8 = *(char *****)(lVar38 + 0x28);
                        uStack_2ce = 0;
                        uStack_2e0 = 0;
                        uStack_2d8 = 0;
                        uStack_2e8 = 0;
                        uStack_2d0 = 0;
                        pppppcStack_300 =
                             (char *****)
                             (*(long *)(lVar59 + (long)iVar12 * 0x108 + 0x18) +
                             *(long *)(lVar38 + 0x20));
                        ppppcStack_2f0 = (char ****)0x0;
                        ppppuStack_328 = (undefined8 *****)0x0;
                        cStack_319 = '\0';
                        uStack_310 = 0;
                        uStack_308 = 0;
                        pppppuStack_330 = &ppppuStack_328;
                        puStack_318 = &uStack_310;
                        func_0x00010985e644(&pppppuStack_358,&pppppuStack_330,&pppppcStack_300);
                        if ((int)pppppuStack_358 == 0) {
                          puVar41 = puStack_2c8;
                          if (uStack_5d8 < 0) goto joined_r0x00010a0ab724;
                          uVar43 = (plVar57[1] - *plVar57 >> 4) * -0x30c30c30c30c30c3;
                          if (uStack_5d8._4_4_ <= uVar43 && uVar43 - uStack_5d8._4_4_ != 0) {
                            iVar12 = *(int *)(*plVar57 + (ulong)uStack_5d8._4_4_ * 0x150 + 0x2c);
                            if (iVar12 < 0x1404) {
                              if (iVar12 - 0x1400U < 2) {
                                bVar18 = false;
                                bVar14 = false;
                                uVar43 = 1;
                              }
                              else if (iVar12 - 0x1402U < 2) {
                                bVar18 = false;
                                uVar43 = 2;
                                bVar14 = true;
                              }
                              else {
LAB_10a0ab428:
                                bVar18 = false;
                                bVar14 = false;
                                uVar43 = 0xffffffff;
                              }
                            }
                            else if (iVar12 - 0x1404U < 3) {
                              bVar14 = false;
                              uVar43 = 4;
                              bVar18 = true;
                            }
                            else {
                              if (iVar12 != 0x140a) goto LAB_10a0ab428;
                              bVar18 = false;
                              bVar14 = false;
                              uVar43 = 8;
                            }
                            uStack_3b8 = 0;
                            uStack_3b0 = 0;
                            pppcStack_458 = (char ***)0x0;
                            ppppcStack_460 = (char ****)0x0;
                            lStack_448 = 0;
                            ppcStack_450 = (char **)0x0;
                            uStack_438 = 0;
                            lStack_440 = 0;
                            uStack_428 = 0;
                            uStack_430 = 0;
                            uStack_418 = 0;
                            uStack_420 = 0;
                            uStack_408 = 0;
                            uStack_410 = 0;
                            uStack_3f8 = 0;
                            uStack_400 = 0;
                            uStack_3e8 = 0;
                            uStack_3f0 = 0;
                            uStack_3d8 = 0;
                            uStack_3e0 = 0;
                            uStack_3c8 = 0;
                            uStack_3d0 = 0;
                            uStack_3a8 = 0;
                            uStack_398 = 0;
                            uStack_390 = 0;
                            uStack_380 = 0;
                            uStack_388 = 0;
                            uStack_370 = 0;
                            uStack_378 = 0;
                            uStack_360 = 0;
                            uStack_368 = 0;
                            iVar12 = (int)uVar43 * 3;
                            puStack_3c0 = &uStack_3b8;
                            puStack_3a0 = &uStack_398;
                            if ((int)((ulong)(plStack_338[0x19] - plStack_338[0x18]) >> 2) * iVar12
                                * -0x55555555 != 0) {
                              func_0x000107c27d58(&lStack_448);
                            }
                            plVar26 = plStack_338;
                            if (bVar18) {
                              if (plStack_338[0x19] == plStack_338[0x18]) goto LAB_10a0ac6d8;
                              _memcpy(lStack_448,plStack_338[0x18],lStack_440 - lStack_448);
                            }
                            else {
                              lVar59 = plStack_338[0x18];
                              uVar21 = (plStack_338[0x19] - lVar59 >> 2) * -0x5555555555555555;
                              if ((int)uVar21 != 0) {
                                lVar56 = 0;
                                lVar55 = 0;
                                uVar35 = 0;
                                lVar38 = (-(uVar43 >> 0x1f) & 0xfffffffe00000000 | uVar43 << 1) +
                                         (long)(int)uVar43;
                                do {
                                  ppppppcVar25 = uStack_1b0;
                                  if (uVar21 <= uVar35) goto LAB_10a0ac6d8;
                                  puVar2 = (undefined4 *)(lVar59 + lVar55);
                                  if (bVar14) {
                                    uStack_1b0._6_2_ = SUB82(ppppppcVar25,6);
                                    uStack_1b0._0_6_ =
                                         CONCAT24((short)puVar2[2],
                                                  CONCAT22((short)puVar2[1],(short)*puVar2));
                                  }
                                  else {
                                    uStack_1b0._3_5_ = SUB85(ppppppcVar25,3);
                                    uStack_1b0._0_3_ =
                                         CONCAT12((char)puVar2[2],
                                                  CONCAT11((char)puVar2[1],(char)*puVar2));
                                  }
                                  _memcpy(lStack_448 + lVar56,&uStack_1b0,lVar38);
                                  uVar35 = uVar35 + 1;
                                  lVar59 = plVar26[0x18];
                                  uVar21 = (plVar26[0x19] - lVar59 >> 2) * -0x5555555555555555;
                                  lVar55 = lVar55 + 0xc;
                                  lVar56 = lVar56 + lVar38;
                                } while (uVar35 < (uVar21 & 0xffffffff));
                              }
                            }
                            uVar43 = plVar57[7];
                            if (uVar43 < (ulong)plVar57[8]) {
                              FUN_10a0de958(uVar43,&ppppcStack_460);
                              plVar26 = (long *)(uVar43 + 0x108);
                            }
                            else {
                              plVar26 = plVar57 + 6;
                              FUN_10a0de7f0(plVar26,&ppppcStack_460);
                            }
                            plVar57[7] = (long)plVar26;
                            pppcStack_1a8 = (char ***)0x0;
                            uStack_1b0 = (char ******)0x0;
                            pppcStack_1a0 = (char ***)0x0;
                            uStack_110 = 0;
                            uStack_108 = 0;
                            uStack_120 = 0;
                            uStack_138 = 0;
                            uStack_140 = 0;
                            uStack_128 = 0;
                            uStack_130 = 0;
                            uStack_158 = 0;
                            uStack_160 = 0;
                            uStack_148 = 0;
                            uStack_150 = 0;
                            uStack_168 = 0;
                            uStack_170 = 0;
                            uStack_100 = 0;
                            uStack_f0 = 0;
                            uStack_e8 = 0;
                            uStack_d8 = 0;
                            uStack_e0 = 0;
                            uStack_c8 = 0;
                            uStack_d0 = 0;
                            uStack_b8 = 0;
                            uStack_c0 = 0;
                            uStack_b0 = 0;
                            uStack_198 = CONCAT44(uStack_198._4_4_,
                                                  (int)((ulong)((long)plVar26 - plVar57[6]) >> 3) *
                                                  0x3e0f83e1 + -1);
                            uStack_188 = (ulong)((int)((ulong)(plStack_338[0x19] - plStack_338[0x18]
                                                              ) >> 2) * iVar12 * -0x55555555);
                            lStack_190 = 0;
                            lStack_180 = 0;
                            uStack_178 = 0x8892;
                            uVar43 = plVar57[10];
                            if (uVar43 < (ulong)plVar57[0xb]) {
                              puStack_118 = &uStack_110;
                              puStack_f8 = &uStack_f0;
                              FUN_10a0dee98(uVar43,&uStack_1b0);
                              plVar26 = (long *)(uVar43 + 0x108);
                            }
                            else {
                              plVar26 = plVar57 + 9;
                              puStack_118 = &uStack_110;
                              puStack_f8 = &uStack_f0;
                              FUN_10a0ded30(plVar26,&uStack_1b0);
                            }
                            plVar57[10] = (long)plVar26;
                            uVar43 = (plVar57[1] - *plVar57 >> 4) * -0x30c30c30c30c30c3;
                            if ((ulong)(long)(int)uStack_5d8._4_4_ <= uVar43 &&
                                uVar43 - (long)(int)uStack_5d8._4_4_ != 0) {
                              piVar39 = (int *)(*plVar57 + (long)(int)uStack_5d8._4_4_ * 0x150);
                              *piVar39 = (int)((ulong)((long)plVar26 - plVar57[9]) >> 3) *
                                         0x3e0f83e1 + -1;
                              *(long *)(piVar39 + 0xc) =
                                   (plStack_338[0x19] - plStack_338[0x18]) * 0x40000000 >> 0x20;
                              func_0x00010a0cd73c(&uStack_1b0);
                              func_0x00010a0cd6bc(&ppppcStack_460);
                              puVar41 = puStack_2c8;
joined_r0x00010a0ab724:
                              do {
                                if ((puVar41 == auStack_2c0) || (*(int *)(puVar41 + 7) != 2))
                                goto LAB_10a0ac214;
                                ppppppuVar29 = &pppppuStack_5f0;
                                FUN_10a0df194(ppppppuVar29,puVar41 + 4);
                                plVar26 = plStack_338;
                                if ((undefined8 ******)&ppppuStack_5e8 == ppppppuVar29)
                                goto LAB_10a0ac214;
                                plVar31 = plStack_338;
                                func_0x000109877f44(plStack_338,
                                                    *(undefined4 *)((long)puVar41 + 0x3c));
                                iVar12 = *(int *)(ppppppuVar29 + 7);
                                uVar43 = (plVar57[1] - *plVar57 >> 4) * -0x30c30c30c30c30c3;
                                if (uVar43 < (ulong)(long)iVar12 || uVar43 - (long)iVar12 == 0)
                                break;
                                iVar12 = *(int *)(*plVar57 + (long)iVar12 * 0x150 + 0x2c);
                                uStack_3b8 = 0;
                                uStack_3b0 = 0;
                                pppcStack_458 = (char ***)0x0;
                                ppppcStack_460 = (char ****)0x0;
                                lStack_448 = 0;
                                ppcStack_450 = (char **)0x0;
                                uStack_438 = 0;
                                lStack_440 = 0;
                                uStack_428 = 0;
                                uStack_430 = 0;
                                uStack_418 = 0;
                                uStack_420 = 0;
                                uStack_408 = 0;
                                uStack_410 = 0;
                                uStack_3f8 = 0;
                                uStack_400 = 0;
                                uStack_3e8 = 0;
                                uStack_3f0 = 0;
                                uStack_3d8 = 0;
                                uStack_3e0 = 0;
                                uStack_3c8 = 0;
                                uStack_3d0 = 0;
                                uStack_3a8 = 0;
                                uStack_398 = 0;
                                uStack_390 = 0;
                                uStack_380 = 0;
                                uStack_388 = 0;
                                uStack_370 = 0;
                                uStack_378 = 0;
                                uStack_360 = 0;
                                uStack_368 = 0;
                                if (iVar12 - 0x1400U < 0xb) {
                                  iVar36 = *(int *)(&UNK_10e495918 + (ulong)(iVar12 - 0x1400U) * 4);
                                }
                                else {
                                  iVar36 = -1;
                                }
                                uVar13 = (int)plVar26[0x14] * (uint)*(byte *)(plVar31 + 3) * iVar36;
                                uVar43 = (ulong)uVar13;
                                puStack_3c0 = &uStack_3b8;
                                puStack_3a0 = &uStack_398;
                                if (uVar13 != 0) {
                                  func_0x000107c27d58(&lStack_448,uVar43);
                                  plVar26 = plStack_338;
                                }
                                if (iVar12 < 0x1404) {
                                  if (iVar12 < 0x1402) {
                                    if (iVar12 == 0x1400) {
                                      uStack_1b0 = (char ******)((ulong)uStack_1b0._4_4_ << 0x20);
                                      if ((int)plVar26[0x14] != 0) {
                                        uVar21 = 0;
                                        lVar59 = 0;
                                        do {
                                          if (*(char *)((long)plVar31 + 100) == '\x01') {
                                            uVar35 = uVar21 & 0xffffffff;
                                          }
                                          else {
                                            if ((ulong)(plVar31[10] - plVar31[9] >> 2) <= uVar21)
                                            goto LAB_10a0ac6d8;
                                            uVar35 = (ulong)*(uint *)(plVar31[9] + uVar21 * 4);
                                          }
                                          plVar32 = plVar31;
                                          func_0x00010a0dfafc(plVar31,uVar35,(long)(char)plVar31[3],
                                                              &uStack_1b0);
                                          if ((int)plVar32 == 0) goto LAB_10a0ac20c;
                                          _memcpy(lStack_448 + lVar59,&uStack_1b0,(char)plVar31[3]);
                                          lVar59 = lVar59 + (ulong)*(byte *)(plVar31 + 3);
                                          uVar21 = uVar21 + 1;
                                        } while (uVar21 < *(uint *)(plVar26 + 0x14));
                                      }
                                    }
                                    else {
                                      if (iVar12 != 0x1401) {
LAB_10a0ac20c:
                                        func_0x00010a0cd6bc(&ppppcStack_460);
                                        goto LAB_10a0ac214;
                                      }
                                      uStack_1b0 = (char ******)((ulong)uStack_1b0._4_4_ << 0x20);
                                      if ((int)plVar26[0x14] != 0) {
                                        uVar21 = 0;
                                        lVar59 = 0;
                                        do {
                                          if (*(char *)((long)plVar31 + 100) == '\x01') {
                                            uVar35 = uVar21 & 0xffffffff;
                                          }
                                          else {
                                            if ((ulong)(plVar31[10] - plVar31[9] >> 2) <= uVar21)
                                            goto LAB_10a0ac6d8;
                                            uVar35 = (ulong)*(uint *)(plVar31[9] + uVar21 * 4);
                                          }
                                          plVar32 = plVar31;
                                          FUN_10a0df210(plVar31,uVar35,(long)(char)plVar31[3],
                                                        &uStack_1b0);
                                          if ((int)plVar32 == 0) goto LAB_10a0ac20c;
                                          _memcpy(lStack_448 + lVar59,&uStack_1b0,(char)plVar31[3]);
                                          lVar59 = lVar59 + (ulong)*(byte *)(plVar31 + 3);
                                          uVar21 = uVar21 + 1;
                                        } while (uVar21 < *(uint *)(plVar26 + 0x14));
                                      }
                                    }
                                  }
                                  else if (iVar12 == 0x1402) {
                                    uStack_1b0 = (char ******)0x0;
                                    if ((int)plVar26[0x14] != 0) {
                                      uVar21 = 0;
                                      lVar59 = 0;
                                      do {
                                        if (*(char *)((long)plVar31 + 100) == '\x01') {
                                          uVar35 = uVar21 & 0xffffffff;
                                        }
                                        else {
                                          if ((ulong)(plVar31[10] - plVar31[9] >> 2) <= uVar21)
                                          goto LAB_10a0ac6d8;
                                          uVar35 = (ulong)*(uint *)(plVar31[9] + uVar21 * 4);
                                        }
                                        plVar32 = plVar31;
                                        func_0x00010a0e0d08(plVar31,uVar35,(long)(char)plVar31[3],
                                                            &uStack_1b0);
                                        if ((int)plVar32 == 0) goto LAB_10a0ac20c;
                                        _memcpy(lStack_448 + lVar59,&uStack_1b0,
                                                (ulong)*(byte *)(plVar31 + 3) << 1);
                                        lVar59 = lVar59 + (ulong)*(byte *)(plVar31 + 3) * 2;
                                        uVar21 = uVar21 + 1;
                                      } while (uVar21 < *(uint *)(plVar26 + 0x14));
                                    }
                                  }
                                  else {
                                    if (iVar12 != 0x1403) goto LAB_10a0ac20c;
                                    uStack_1b0 = (char ******)0x0;
                                    if ((int)plVar26[0x14] != 0) {
                                      uVar21 = 0;
                                      lVar59 = 0;
                                      do {
                                        if (*(char *)((long)plVar31 + 100) == '\x01') {
                                          uVar35 = uVar21 & 0xffffffff;
                                        }
                                        else {
                                          if ((ulong)(plVar31[10] - plVar31[9] >> 2) <= uVar21)
                                          goto LAB_10a0ac6d8;
                                          uVar35 = (ulong)*(uint *)(plVar31[9] + uVar21 * 4);
                                        }
                                        plVar32 = plVar31;
                                        func_0x00010a0e0430(plVar31,uVar35,(long)(char)plVar31[3],
                                                            &uStack_1b0);
                                        if ((int)plVar32 == 0) goto LAB_10a0ac20c;
                                        _memcpy(lStack_448 + lVar59,&uStack_1b0,
                                                (ulong)*(byte *)(plVar31 + 3) << 1);
                                        lVar59 = lVar59 + (ulong)*(byte *)(plVar31 + 3) * 2;
                                        uVar21 = uVar21 + 1;
                                      } while (uVar21 < *(uint *)(plVar26 + 0x14));
                                    }
                                  }
                                }
                                else if (iVar12 < 0x1406) {
                                  if (iVar12 == 0x1404) {
                                    pppcStack_1a8 = (char ***)0x0;
                                    uStack_1b0 = (char ******)0x0;
                                    if ((int)plVar26[0x14] != 0) {
                                      uVar21 = 0;
                                      lVar59 = 0;
                                      do {
                                        if (*(char *)((long)plVar31 + 100) == '\x01') {
                                          uVar35 = uVar21 & 0xffffffff;
                                        }
                                        else {
                                          if ((ulong)(plVar31[10] - plVar31[9] >> 2) <= uVar21)
                                          goto LAB_10a0ac6d8;
                                          uVar35 = (ulong)*(uint *)(plVar31[9] + uVar21 * 4);
                                        }
                                        plVar32 = plVar31;
                                        func_0x000109850a38(plVar31,uVar35,(long)(char)plVar31[3],
                                                            &uStack_1b0);
                                        if ((int)plVar32 == 0) goto LAB_10a0ac20c;
                                        _memcpy(lStack_448 + lVar59,&uStack_1b0,
                                                (ulong)*(byte *)(plVar31 + 3) << 2);
                                        lVar59 = lVar59 + (ulong)*(byte *)(plVar31 + 3) * 4;
                                        uVar21 = uVar21 + 1;
                                      } while (uVar21 < *(uint *)(plVar26 + 0x14));
                                    }
                                  }
                                  else {
                                    if (iVar12 != 0x1405) goto LAB_10a0ac20c;
                                    pppcStack_1a8 = (char ***)0x0;
                                    uStack_1b0 = (char ******)0x0;
                                    if ((int)plVar26[0x14] != 0) {
                                      uVar21 = 0;
                                      lVar59 = 0;
                                      do {
                                        if (*(char *)((long)plVar31 + 100) == '\x01') {
                                          uVar35 = uVar21 & 0xffffffff;
                                        }
                                        else {
                                          if ((ulong)(plVar31[10] - plVar31[9] >> 2) <= uVar21)
                                          goto LAB_10a0ac6d8;
                                          uVar35 = (ulong)*(uint *)(plVar31[9] + uVar21 * 4);
                                        }
                                        plVar32 = plVar31;
                                        func_0x000109851280(plVar31,uVar35,(long)(char)plVar31[3],
                                                            &uStack_1b0);
                                        if ((int)plVar32 == 0) goto LAB_10a0ac20c;
                                        _memcpy(lStack_448 + lVar59,&uStack_1b0,
                                                (ulong)*(byte *)(plVar31 + 3) << 2);
                                        lVar59 = lVar59 + (ulong)*(byte *)(plVar31 + 3) * 4;
                                        uVar21 = uVar21 + 1;
                                      } while (uVar21 < *(uint *)(plVar26 + 0x14));
                                    }
                                  }
                                }
                                else if (iVar12 == 0x1406) {
                                  pppcStack_1a8 = (char ***)0x0;
                                  uStack_1b0 = (char ******)0x0;
                                  if ((int)plVar26[0x14] != 0) {
                                    uVar21 = 0;
                                    lVar59 = 0;
                                    do {
                                      if (*(char *)((long)plVar31 + 100) == '\x01') {
                                        uVar35 = uVar21 & 0xffffffff;
                                      }
                                      else {
                                        if ((ulong)(plVar31[10] - plVar31[9] >> 2) <= uVar21)
                                        goto LAB_10a0ac6d8;
                                        uVar35 = (ulong)*(uint *)(plVar31[9] + uVar21 * 4);
                                      }
                                      plVar32 = plVar31;
                                      func_0x000109855698(plVar31,uVar35,(long)(char)plVar31[3],
                                                          &uStack_1b0);
                                      if ((int)plVar32 == 0) goto LAB_10a0ac20c;
                                      _memcpy(lStack_448 + lVar59,&uStack_1b0,
                                              (ulong)*(byte *)(plVar31 + 3) << 2);
                                      lVar59 = lVar59 + (ulong)*(byte *)(plVar31 + 3) * 4;
                                      uVar21 = uVar21 + 1;
                                    } while (uVar21 < *(uint *)(plVar26 + 0x14));
                                  }
                                }
                                else {
                                  if (iVar12 != 0x140a) goto LAB_10a0ac20c;
                                  uStack_198 = 0;
                                  pppcStack_1a0 = (char ***)0x0;
                                  pppcStack_1a8 = (char ***)0x0;
                                  uStack_1b0 = (char ******)0x0;
                                  if ((int)plVar26[0x14] != 0) {
                                    uVar21 = 0;
                                    lVar59 = 0;
                                    do {
                                      uVar35 = uVar21;
                                      if ((*(byte *)((long)plVar31 + 100) & 1) == 0) {
                                        if ((ulong)(plVar31[10] - plVar31[9] >> 2) <= uVar21)
                                        goto LAB_10a0ac6d8;
                                        uVar35 = (ulong)*(uint *)(plVar31[9] + uVar21 * 4);
                                      }
                                      if (10 < *(int *)((long)plVar31 + 0x1c) - 1U)
                                      goto LAB_10a0ac20c;
                                      bVar11 = *(byte *)(plVar31 + 3);
                                      uVar40 = (ulong)bVar11;
                                      switch(*(int *)((long)plVar31 + 0x1c)) {
                                      case 1:
                                        if (bVar11 != 0) {
                                          pcVar19 = (char *)((long *)*plVar31)[1];
                                          pcVar23 = (char *)(*(long *)*plVar31 + plVar31[5] * uVar35
                                                            + plVar31[6]);
                                          pdVar54 = (double *)&uStack_1b0;
                                          uVar35 = uVar40;
                                          do {
                                            if (pcVar19 <= pcVar23) goto LAB_10a0ac20c;
                                            dVar62 = (double)(int)*pcVar23 / 127.0;
                                            if ((char)plVar31[4] == '\0') {
                                              dVar62 = (double)(int)*pcVar23;
                                            }
                                            *pdVar54 = dVar62;
                                            uVar35 = uVar35 - 1;
                                            pcVar23 = pcVar23 + 1;
                                            pdVar54 = pdVar54 + 1;
                                          } while (uVar35 != 0);
                                        }
                                        break;
                                      case 2:
                                        if (bVar11 != 0) {
                                          pbVar28 = (byte *)((long *)*plVar31)[1];
                                          pbVar50 = (byte *)(*(long *)*plVar31 + plVar31[5] * uVar35
                                                            + plVar31[6]);
                                          pdVar54 = (double *)&uStack_1b0;
                                          uVar35 = uVar40;
                                          do {
                                            if (pbVar28 <= pbVar50) goto LAB_10a0ac20c;
                                            dVar62 = (double)*pbVar50 / 255.0;
                                            if ((char)plVar31[4] == '\0') {
                                              dVar62 = (double)*pbVar50;
                                            }
                                            *pdVar54 = dVar62;
                                            uVar35 = uVar35 - 1;
                                            pbVar50 = pbVar50 + 1;
                                            pdVar54 = pdVar54 + 1;
                                          } while (uVar35 != 0);
                                        }
                                        break;
                                      case 3:
                                        if (bVar11 != 0) {
                                          psVar4 = (short *)((long *)*plVar31)[1];
                                          psVar45 = (short *)(*(long *)*plVar31 +
                                                              plVar31[5] * uVar35 + plVar31[6]);
                                          pdVar54 = (double *)&uStack_1b0;
                                          uVar35 = uVar40;
                                          do {
                                            if (psVar4 <= psVar45) goto LAB_10a0ac20c;
                                            dVar62 = (double)(int)*psVar45 / 32767.0;
                                            if ((char)plVar31[4] == '\0') {
                                              dVar62 = (double)(int)*psVar45;
                                            }
                                            *pdVar54 = dVar62;
                                            uVar35 = uVar35 - 1;
                                            psVar45 = psVar45 + 1;
                                            pdVar54 = pdVar54 + 1;
                                          } while (uVar35 != 0);
                                        }
                                        break;
                                      case 4:
                                        if (bVar11 != 0) {
                                          puVar5 = (ushort *)((long *)*plVar31)[1];
                                          puVar46 = (ushort *)
                                                    (*(long *)*plVar31 + plVar31[5] * uVar35 +
                                                    plVar31[6]);
                                          pdVar54 = (double *)&uStack_1b0;
                                          uVar35 = uVar40;
                                          do {
                                            if (puVar5 <= puVar46) goto LAB_10a0ac20c;
                                            dVar62 = (double)*puVar46 / 65535.0;
                                            if ((char)plVar31[4] == '\0') {
                                              dVar62 = (double)*puVar46;
                                            }
                                            *pdVar54 = dVar62;
                                            uVar35 = uVar35 - 1;
                                            puVar46 = puVar46 + 1;
                                            pdVar54 = pdVar54 + 1;
                                          } while (uVar35 != 0);
                                        }
                                        break;
                                      case 5:
                                        if (bVar11 != 0) {
                                          piVar39 = (int *)((long *)*plVar31)[1];
                                          piVar44 = (int *)(*(long *)*plVar31 + plVar31[5] * uVar35
                                                           + plVar31[6]);
                                          pdVar54 = (double *)&uStack_1b0;
                                          uVar35 = uVar40;
                                          do {
                                            if (piVar39 <= piVar44) goto LAB_10a0ac20c;
                                            dVar62 = (double)*piVar44 / 2147483647.0;
                                            if ((char)plVar31[4] == '\0') {
                                              dVar62 = (double)*piVar44;
                                            }
                                            *pdVar54 = dVar62;
                                            uVar35 = uVar35 - 1;
                                            piVar44 = piVar44 + 1;
                                            pdVar54 = pdVar54 + 1;
                                          } while (uVar35 != 0);
                                        }
                                        break;
                                      case 6:
                                        if (bVar11 != 0) {
                                          puVar6 = (uint *)((long *)*plVar31)[1];
                                          puVar48 = (uint *)(*(long *)*plVar31 + plVar31[5] * uVar35
                                                            + plVar31[6]);
                                          pdVar54 = (double *)&uStack_1b0;
                                          uVar35 = uVar40;
                                          do {
                                            if (puVar6 <= puVar48) goto LAB_10a0ac20c;
                                            dVar62 = (double)*puVar48 / 4294967295.0;
                                            if ((char)plVar31[4] == '\0') {
                                              dVar62 = (double)*puVar48;
                                            }
                                            *pdVar54 = dVar62;
                                            uVar35 = uVar35 - 1;
                                            puVar48 = puVar48 + 1;
                                            pdVar54 = pdVar54 + 1;
                                          } while (uVar35 != 0);
                                        }
                                        break;
                                      case 7:
                                        if (bVar11 != 0) {
                                          plVar32 = (long *)((long *)*plVar31)[1];
                                          plVar49 = (long *)(*(long *)*plVar31 + plVar31[5] * uVar35
                                                            + plVar31[6]);
                                          pdVar54 = (double *)&uStack_1b0;
                                          uVar35 = uVar40;
                                          do {
                                            if (plVar32 <= plVar49) goto LAB_10a0ac20c;
                                            dVar62 = (double)*plVar49 * 1.0842021724855044e-19;
                                            if ((char)plVar31[4] == '\0') {
                                              dVar62 = (double)*plVar49;
                                            }
                                            *pdVar54 = dVar62;
                                            uVar35 = uVar35 - 1;
                                            plVar49 = plVar49 + 1;
                                            pdVar54 = pdVar54 + 1;
                                          } while (uVar35 != 0);
                                        }
                                        break;
                                      case 8:
                                        if (bVar11 != 0) {
                                          puVar1 = (undefined8 *)((long *)*plVar31)[1];
                                          puVar47 = (undefined8 *)
                                                    (*(long *)*plVar31 + plVar31[5] * uVar35 +
                                                    plVar31[6]);
                                          pdVar54 = (double *)&uStack_1b0;
                                          uVar35 = uVar40;
                                          do {
                                            if (puVar1 <= puVar47) goto LAB_10a0ac20c;
                                            dVar61 = (double)NEON_ucvtf(*puVar47);
                                            dVar62 = dVar61 * 5.421010862427522e-20;
                                            if ((char)plVar31[4] == '\0') {
                                              dVar62 = dVar61;
                                            }
                                            *pdVar54 = dVar62;
                                            uVar35 = uVar35 - 1;
                                            puVar47 = puVar47 + 1;
                                            pdVar54 = pdVar54 + 1;
                                          } while (uVar35 != 0);
                                        }
                                        break;
                                      case 9:
                                        if (bVar11 != 0) {
                                          pfVar7 = (float *)((long *)*plVar31)[1];
                                          pfVar51 = (float *)(*(long *)*plVar31 +
                                                              plVar31[5] * uVar35 + plVar31[6]);
                                          pdVar54 = (double *)&uStack_1b0;
                                          uVar35 = uVar40;
                                          do {
                                            if (pfVar7 <= pfVar51) goto LAB_10a0ac20c;
                                            *pdVar54 = (double)*pfVar51;
                                            uVar35 = uVar35 - 1;
                                            pfVar51 = pfVar51 + 1;
                                            pdVar54 = pdVar54 + 1;
                                          } while (uVar35 != 0);
                                        }
                                        break;
                                      case 10:
                                        if (bVar11 != 0) {
                                          puVar1 = (undefined8 *)((long *)*plVar31)[1];
                                          puVar47 = (undefined8 *)
                                                    (*(long *)*plVar31 + plVar31[5] * uVar35 +
                                                    plVar31[6]);
                                          puVar53 = &uStack_1b0;
                                          uVar35 = uVar40;
                                          do {
                                            if (puVar1 <= puVar47) goto LAB_10a0ac20c;
                                            *puVar53 = *puVar47;
                                            uVar35 = uVar35 - 1;
                                            puVar47 = puVar47 + 1;
                                            puVar53 = puVar53 + 1;
                                          } while (uVar35 != 0);
                                        }
                                        break;
                                      case 0xb:
                                        if (bVar11 != 0) {
                                          pbVar28 = (byte *)((long *)*plVar31)[1];
                                          pbVar50 = (byte *)(*(long *)*plVar31 + plVar31[5] * uVar35
                                                            + plVar31[6]);
                                          pdVar54 = (double *)&uStack_1b0;
                                          uVar35 = uVar40;
                                          do {
                                            if (pbVar28 <= pbVar50) goto LAB_10a0ac20c;
                                            *pdVar54 = (double)*pbVar50;
                                            uVar35 = uVar35 - 1;
                                            pbVar50 = pbVar50 + 1;
                                            pdVar54 = pdVar54 + 1;
                                          } while (uVar35 != 0);
                                        }
                                      }
                                      _memcpy(lStack_448 + lVar59,&uStack_1b0,uVar40 << 3);
                                      lVar59 = lVar59 + (ulong)*(byte *)(plVar31 + 3) * 8;
                                      uVar21 = uVar21 + 1;
                                    } while (uVar21 < *(uint *)(plVar26 + 0x14));
                                  }
                                }
                                uVar21 = plVar57[7];
                                if (uVar21 < (ulong)plVar57[8]) {
                                  FUN_10a0de958(uVar21,&ppppcStack_460);
                                  plVar26 = (long *)(uVar21 + 0x108);
                                }
                                else {
                                  plVar26 = plVar57 + 6;
                                  FUN_10a0de7f0(plVar26,&ppppcStack_460);
                                }
                                plVar57[7] = (long)plVar26;
                                pppcStack_1a8 = (char ***)0x0;
                                uStack_1b0 = (char ******)0x0;
                                pppcStack_1a0 = (char ***)0x0;
                                uStack_110 = 0;
                                uStack_108 = 0;
                                uStack_168 = 0;
                                uStack_170 = 0;
                                uStack_158 = 0;
                                uStack_160 = 0;
                                uStack_148 = 0;
                                uStack_150 = 0;
                                uStack_138 = 0;
                                uStack_140 = 0;
                                uStack_128 = 0;
                                uStack_130 = 0;
                                uStack_120 = 0;
                                uStack_100 = 0;
                                uStack_f0 = 0;
                                uStack_e8 = 0;
                                uStack_d8 = 0;
                                uStack_e0 = 0;
                                uStack_c8 = 0;
                                uStack_d0 = 0;
                                uStack_b8 = 0;
                                uStack_c0 = 0;
                                uStack_b0 = 0;
                                uStack_198 = CONCAT44(uStack_198._4_4_,
                                                      (int)((ulong)((long)plVar26 - plVar57[6]) >> 3
                                                           ) * 0x3e0f83e1 + -1);
                                lStack_180 = plVar31[5];
                                lStack_190 = plVar31[6];
                                uStack_178 = 0x8892;
                                if (-1 < uStack_5d8) {
                                  uStack_178 = 0x8893;
                                }
                                uVar21 = plVar57[10];
                                uStack_188 = uVar43;
                                if (uVar21 < (ulong)plVar57[0xb]) {
                                  puStack_118 = &uStack_110;
                                  puStack_f8 = &uStack_f0;
                                  FUN_10a0dee98(uVar21,&uStack_1b0);
                                  plVar26 = (long *)(uVar21 + 0x108);
                                }
                                else {
                                  plVar26 = plVar57 + 9;
                                  puStack_118 = &uStack_110;
                                  puStack_f8 = &uStack_f0;
                                  FUN_10a0ded30(plVar26,&uStack_1b0);
                                }
                                plVar57[10] = (long)plVar26;
                                iVar12 = *(int *)(ppppppuVar29 + 7);
                                uVar43 = (plVar57[1] - *plVar57 >> 4) * -0x30c30c30c30c30c3;
                                if (uVar43 < (ulong)(long)iVar12 || uVar43 - (long)iVar12 == 0)
                                break;
                                piVar39 = (int *)(*plVar57 + (long)iVar12 * 0x150);
                                *piVar39 = (int)((ulong)((long)plVar26 - plVar57[9]) >> 3) *
                                           0x3e0f83e1 + -1;
                                *(long *)(piVar39 + 0xc) = (long)(int)plStack_338[0x14];
                                func_0x00010a0cd73c(&uStack_1b0);
                                func_0x00010a0cd6bc(&ppppcStack_460);
                                puVar1 = (undefined8 *)puVar41[1];
                                puVar47 = puVar41;
                                if ((undefined8 *)puVar41[1] == (undefined8 *)0x0) {
                                  do {
                                    puVar41 = (undefined8 *)puVar47[2];
                                    bVar18 = (undefined8 *)*puVar41 != puVar47;
                                    puVar47 = puVar41;
                                  } while (bVar18);
                                }
                                else {
                                  do {
                                    puVar41 = puVar1;
                                    puVar1 = (undefined8 *)*puVar41;
                                  } while ((undefined8 *)*puVar41 != (undefined8 *)0x0);
                                }
                              } while( true );
                            }
                          }
                          goto LAB_10a0ac6d8;
                        }
LAB_10a0ac214:
                        plVar26 = plStack_338;
                        plStack_338 = (long *)0x0;
                        if (plVar26 != (long *)0x0) {
                          (**(code **)(*plVar26 + 8))();
                        }
                        if (cStack_339 < '\0') {
                          __ZdlPv(uStack_350);
                        }
                        func_0x00010945fda0(&puStack_318,uStack_310);
                        func_0x000107c34ee4(&pppppuStack_330,ppppuStack_328);
                      }
                      func_0x00010a0c9b2c(auStack_2c0[0]);
                    }
                    func_0x00010a0c9b7c(&pppppcStack_2b0);
                  }
                  func_0x00010a0c9b7c(&uStack_230);
                }
                if (uStack_6e0 < uStack_6d8) {
                  FUN_10a0e162c(uStack_6e0,&pppppuStack_5f0);
                  uVar43 = uStack_6e8;
                  uStack_6e0 = uStack_6e0 + 0x100;
                }
                else {
                  lVar59 = uStack_6e0 - uStack_6e8;
                  uVar43 = (lVar59 >> 8) + 1;
                  if (uVar43 >> 0x38 != 0) {
                    FUN_10a0e172c();
                    goto LAB_10a0ac6d8;
                  }
                  uVar21 = (long)(uStack_6d8 - uStack_6e8) >> 7;
                  if (uVar21 <= uVar43) {
                    uVar21 = uVar43;
                  }
                  if (0x7ffffffffffffeff < uStack_6d8 - uStack_6e8) {
                    uVar21 = 0xffffffffffffff;
                  }
                  if (uVar21 == 0) {
                    lVar38 = 0;
                  }
                  else {
                    if (uVar21 >> 0x38 != 0) {
                      func_0x000109ffded8();
                      goto LAB_10a0ac6d8;
                    }
                    lVar38 = uVar21 << 8;
                    __Znwm();
                  }
                  lVar59 = lVar38 + lVar59;
                  FUN_10a0e162c(lVar59,&pppppuStack_5f0);
                  uVar15 = uStack_6e0;
                  uVar40 = uStack_6e8;
                  uVar43 = lVar59 + (uStack_6e8 - uStack_6e0);
                  uVar33 = uVar43;
                  uVar35 = uStack_6e8;
                  if (uStack_6e0 != uStack_6e8) {
                    do {
                      FUN_10a0e162c(uVar33,uVar35);
                      uVar35 = uVar35 + 0x100;
                      uVar33 = uVar33 + 0x100;
                    } while (uVar35 != uVar15);
                    do {
                      FUN_10a0cd8c4(uVar40);
                      uVar40 = uVar40 + 0x100;
                    } while (uVar40 != uVar15);
                  }
                  uVar35 = lVar59 + 0x100;
                  uStack_6d8 = lVar38 + uVar21 * 0x100;
                  uStack_6e0 = uVar35;
                  if (uStack_6e8 != 0) {
                    uVar21 = uStack_6e8;
                    uStack_6e8 = uVar43;
                    __ZdlPv(uVar21);
                    uVar43 = uStack_6e8;
                    uStack_6e0 = uVar35;
                  }
                }
              }
              uStack_6e8 = uVar43;
              FUN_10a0cd8c4(&pppppuStack_5f0);
              func_0x00010937c698(&pcStack_4f0);
            }
          }
        }
        func_0x000107c2b054(&ppppcStack_460,&DAT_10f415018);
        func_0x000107c2b054(&uStack_1b0,"");
        FUN_10a0ce878(&uStack_6d0,ppcVar20,&ppppcStack_460);
        if ((long)pppcStack_1a0 < 0) {
          __ZdlPv(uStack_1b0);
        }
        if ((long)ppcStack_450 < 0) {
          __ZdlPv(ppppcStack_460);
        }
        FUN_10a0b3de4(&puStack_6b8,ppcVar20);
        FUN_10a0b4a84(&uStack_6a0,ppcVar20);
        if (cVar9 != '\0') {
          pppcStack_458 = (char ***)0x0;
          ppppcStack_460 = (char ****)0x0;
          ppcStack_450 = (char **)0x0;
          lStack_448 = -0x8000000000000000;
          ppcVar22 = ppcVar20;
          FUN_10a0a87b8(ppcVar20,&DAT_10f6372be,&ppppcStack_460);
          if ((int)ppcVar22 != 0) {
            func_0x00010937c560(&ppppcStack_460);
            FUN_10a0c32e4(&uStack_1b0);
            if ((long)pppcStack_600 < 0) {
              __ZdlPv(pppppcStack_610);
            }
            pppcStack_608 = pppcStack_1a8;
            pppppcStack_610 = (char *****)uStack_1b0;
            pppcStack_600 = pppcStack_1a0;
          }
          pppcStack_458 = (char ***)0x0;
          ppppcStack_460 = (char ****)0x0;
          ppcStack_450 = (char **)0x0;
          lStack_448 = -0x8000000000000000;
          FUN_10a0a87b8(ppcVar20,&DAT_10f6372cc,&ppppcStack_460);
          if ((int)ppcVar20 != 0) {
            func_0x00010937c560(&ppppcStack_460);
            FUN_10a0c32e4(&uStack_1b0);
            if ((long)pppcStack_618 < 0) {
              __ZdlPv(pppppcStack_628);
            }
            pppcStack_620 = pppcStack_1a8;
            pppppcStack_628 = (char *****)uStack_1b0;
            pppcStack_618 = pppcStack_1a0;
          }
        }
        lVar42 = *(long *)param_2[1];
        uVar43 = *(ulong *)(lVar42 + 0x80);
        if (uVar43 < *(ulong *)(lVar42 + 0x88)) {
          FUN_10a0e1740(uVar43,&uStack_700);
          lVar59 = uVar43 + 0x108;
        }
        else {
          lVar59 = uVar43 - *(long *)(lVar42 + 0x78);
          uVar43 = (lVar59 >> 3) * 0xf83e0f83e0f83e1 + 1;
          if (0xf83e0f83e0f83e < uVar43) goto LAB_10a0ac6cc;
          lVar38 = (long)(*(ulong *)(lVar42 + 0x88) - *(long *)(lVar42 + 0x78)) >> 3;
          uVar21 = lVar38 * 0x1f07c1f07c1f07c2;
          if (uVar21 < uVar43 || uVar21 - uVar43 == 0) {
            uVar21 = uVar43;
          }
          if (0x7c1f07c1f07c1e < (ulong)(lVar38 * 0xf83e0f83e0f83e1)) {
            uVar21 = 0xf83e0f83e0f83e;
          }
          if (uVar21 == 0) {
            lVar38 = 0;
          }
          else {
            if (0xf83e0f83e0f83e < uVar21) {
              func_0x000109ffded8();
              goto LAB_10a0ac6d8;
            }
            lVar38 = uVar21 * 0x108;
            __Znwm();
          }
          lVar59 = lVar38 + lVar59;
          FUN_10a0e1740(lVar59,&uStack_700);
          lVar56 = *(long *)(lVar42 + 0x78);
          lVar8 = *(long *)(lVar42 + 0x80);
          lVar3 = lVar59 + (lVar56 - lVar8);
          lVar34 = lVar3;
          lVar55 = lVar56;
          if (lVar8 != lVar56) {
            do {
              FUN_10a0e1740(lVar34,lVar55);
              lVar55 = lVar55 + 0x108;
              lVar34 = lVar34 + 0x108;
            } while (lVar55 != lVar8);
            do {
              func_0x00010a0cd81c(lVar56);
              lVar56 = lVar56 + 0x108;
            } while (lVar56 != lVar8);
            lVar56 = *(long *)(lVar42 + 0x78);
          }
          lVar59 = lVar59 + 0x108;
          *(long *)(lVar42 + 0x78) = lVar3;
          *(long *)(lVar42 + 0x80) = lVar59;
          *(ulong *)(lVar42 + 0x88) = lVar38 + uVar21 * 0x108;
          if (lVar56 != 0) {
            __ZdlPv(lVar56);
          }
        }
        *(long *)(lVar42 + 0x80) = lVar59;
        func_0x00010a0cd81c(&uStack_700);
        func_0x00010937c698(&pcStack_740);
        ppcVar20 = &pcStack_740;
        func_0x00010937c708(ppcVar20,&pcStack_760);
      } while ((int)ppcVar20 == 0);
    }
  }
  uVar58 = 1;
LAB_10a0ac63c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return uVar58;
  }
  ___stack_chk_fail();
LAB_10a0ac6cc:
  FUN_10a0e1830();
LAB_10a0ac6d8:
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x10a0ac6dc);
  (*pcVar17)();
}



/* Entry: 10a0ac974; end: 10a0ad1c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a0ace7c) */
/* WARNING: Removing unreachable block (ram,0x00010a0acd0c) */
/* WARNING: Removing unreachable block (ram,0x00010a0acbd4) */
/* WARNING: Removing unreachable block (ram,0x00010a0acb64) */
/* WARNING: Removing unreachable block (ram,0x00010a0acc74) */
/* WARNING: Removing unreachable block (ram,0x00010a0acdd4) */
/* WARNING: Removing unreachable block (ram,0x00010a0acb74) */
/* WARNING: Removing unreachable block (ram,0x00010a0ace40) */
/* WARNING: Removing unreachable block (ram,0x00010a0acc84) */
/* WARNING: Removing unreachable block (ram,0x00010a0acbc4) */
/* WARNING: Removing unreachable block (ram,0x00010a0acd6c) */
/* WARNING: Removing unreachable block (ram,0x00010a0acc1c) */
/* WARNING: Removing unreachable block (ram,0x00010a0ace30) */
/* WARNING: Removing unreachable block (ram,0x00010a0acc34) */
/* WARNING: Removing unreachable block (ram,0x00010a0accc0) */
/* WARNING: Removing unreachable block (ram,0x00010a0acde4) */
/* WARNING: Removing unreachable block (ram,0x00010a0accd0) */
/* WARNING: Removing unreachable block (ram,0x00010a0acd1c) */
/* WARNING: Removing unreachable block (ram,0x00010a0acd7c) */
/* WARNING: Removing unreachable block (ram,0x00010a0ace8c) */

undefined8 FUN_10a0ac974(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 *puVar7;
  char **ppcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  char *pcStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  char *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  char acStack_248 [32];
  undefined4 auStack_228 [2];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char cStack_c9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  acStack_248[0] = '\0';
  acStack_248[1] = '\0';
  acStack_248[2] = '\0';
  acStack_248[3] = '\0';
  acStack_248[4] = '\0';
  acStack_248[5] = '\0';
  acStack_248[6] = '\0';
  acStack_248[7] = '\0';
  acStack_248[8] = '\0';
  acStack_248[9] = '\0';
  acStack_248[10] = '\0';
  acStack_248[0xb] = '\0';
  acStack_248[0xc] = '\0';
  acStack_248[0xd] = '\0';
  acStack_248[0xe] = '\0';
  acStack_248[0xf] = '\0';
  acStack_248[0x10] = '\0';
  acStack_248[0x11] = '\0';
  acStack_248[0x12] = '\0';
  acStack_248[0x13] = '\0';
  acStack_248[0x14] = '\0';
  acStack_248[0x15] = '\0';
  acStack_248[0x16] = '\0';
  acStack_248[0x17] = '\0';
  acStack_248[0x18] = '\0';
  acStack_248[0x19] = '\0';
  acStack_248[0x1a] = '\0';
  acStack_248[0x1b] = '\0';
  acStack_248[0x1c] = '\0';
  acStack_248[0x1d] = '\0';
  acStack_248[0x1e] = '\0';
  acStack_248[0x1f] = -0x80;
  FUN_10a0a87b8(param_1,&UNK_10f414fb9,acStack_248);
  if ((int)param_1 == 0) {
    return 1;
  }
  pcVar5 = acStack_248;
  func_0x00010937c560();
  if (*pcVar5 != '\x02') {
    return 1;
  }
  pcVar5 = acStack_248;
  func_0x00010937c560();
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_250 = 0x8000000000000000;
  cVar3 = *pcVar5;
  if (cVar3 == '\0') {
    uStack_250 = 1;
  }
  else {
    if (cVar3 == '\x02') {
      uStack_258 = **(undefined8 **)(pcVar5 + 8);
      lStack_280 = 0;
      uStack_270 = 0x8000000000000000;
      uStack_278 = *(undefined8 *)(*(long *)(pcVar5 + 8) + 8);
      goto LAB_10a0aca64;
    }
    if (cVar3 == '\x01') {
      uStack_260 = **(undefined8 **)(pcVar5 + 8);
      uStack_278 = 0;
      uStack_270 = 0x8000000000000000;
      lStack_280 = *(long *)(pcVar5 + 8) + 8;
      goto LAB_10a0aca64;
    }
    uStack_250 = 0;
  }
  lStack_280 = 0;
  uStack_278 = 0;
  uStack_270 = 1;
LAB_10a0aca64:
  ppcVar6 = &pcStack_268;
  pcStack_288 = pcVar5;
  pcStack_268 = pcVar5;
  func_0x00010937c708(ppcVar6,&pcStack_288);
  if (((ulong)ppcVar6 & 1) == 0) {
    do {
      ppcVar6 = &pcStack_268;
      func_0x00010937c560();
      if (*(char *)ppcVar6 != '\x01') {
        if (*(long *)*param_2 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (*(long *)*param_2,&UNK_10f63a1b9,0x28);
          return 0;
        }
        return 0;
      }
      auStack_228[0] = 0xffffffff;
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_220 = 0;
      uStack_208 = 0xffffffffffffffff;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_e8 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      cStack_c9 = '\0';
      lStack_b8 = 0;
      uStack_c0 = 0;
      uVar14 = *(undefined8 *)*param_2;
      cVar3 = *(char *)(param_2[1] + 0x12);
      puStack_170 = &uStack_168;
      puStack_100 = &uStack_f8;
      func_0x000107c2b054(&uStack_b0,&DAT_10f68f148);
      uStack_80 = 0;
      uStack_78 = 0;
      lStack_70 = 0;
      FUN_10a0cdaf8(&uStack_220,uVar14,ppcVar6,&uStack_b0,0,&uStack_80);
      uStack_84 = 0xffffffff;
      func_0x000107c2b054(&uStack_b0,&DAT_10f638b9c);
      func_0x000107c2b054(&uStack_80,"");
      FUN_10a0deaa0(&uStack_84,uVar14,ppcVar6,&uStack_b0,0,&uStack_80);
      uStack_208 = CONCAT44(uStack_208._4_4_,uStack_84);
      func_0x000107c2b054(&uStack_b0,&DAT_10f638b90);
      func_0x000107c2b054(&uStack_80,"");
      puVar7 = &uStack_1a0;
      FUN_10a0ce878(puVar7,ppcVar6,&uStack_b0);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000107c2b054(&uStack_b0,&DAT_10f2c46ae);
        func_0x000107c2b054(&uStack_80,"");
        FUN_10a0ce878(&uStack_1e8,ppcVar6,&uStack_b0);
        func_0x000107c2b054(&uStack_b0,"scale");
        func_0x000107c2b054(&uStack_80,"");
        FUN_10a0ce878(&uStack_1d0,ppcVar6,&uStack_b0);
        func_0x000107c2b054(&uStack_b0,&DAT_10f368f21);
        func_0x000107c2b054(&uStack_80,"");
        FUN_10a0ce878(&uStack_1b8,ppcVar6,&uStack_b0);
      }
      uStack_88 = 0xffffffff;
      func_0x000107c2b054(&uStack_b0,"camera");
      func_0x000107c2b054(&uStack_80,"");
      FUN_10a0deaa0(&uStack_88,uVar14,ppcVar6,&uStack_b0,0,&uStack_80);
      auStack_228[0] = uStack_88;
      uStack_8c = 0xffffffff;
      func_0x000107c2b054(&uStack_b0,&DAT_10f410265);
      func_0x000107c2b054(&uStack_80,"");
      FUN_10a0deaa0(&uStack_8c,uVar14,ppcVar6,&uStack_b0,0,&uStack_80);
      uStack_208 = CONCAT44(uStack_8c,(undefined4)uStack_208);
      uStack_1f8 = uStack_200;
      func_0x000107c2b054(&uStack_b0,&DAT_10f638ba8);
      func_0x000107c2b054(&uStack_80,"");
      func_0x00010a0e18d4(&uStack_200,ppcVar6,&uStack_b0);
      func_0x000107c2b054(&uStack_b0,&DAT_10f415018);
      func_0x000107c2b054(&uStack_80,"");
      FUN_10a0ce878(&uStack_188,ppcVar6,&uStack_b0);
      FUN_10a0b3de4(&puStack_170,ppcVar6);
      FUN_10a0b4a84(&uStack_158,ppcVar6);
      if (cVar3 != '\0') {
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0x8000000000000000;
        ppcVar8 = ppcVar6;
        FUN_10a0a87b8(ppcVar6,&DAT_10f6372be,&uStack_b0);
        if ((int)ppcVar8 != 0) {
          func_0x00010937c560(&uStack_b0);
          FUN_10a0c32e4(&uStack_80);
          if (lStack_b8 < 0) {
            __ZdlPv(uStack_c8);
          }
          uStack_c0 = uStack_78;
          uStack_c8 = uStack_80;
          lStack_b8 = lStack_70;
        }
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0x8000000000000000;
        FUN_10a0a87b8(ppcVar6,&DAT_10f6372cc,&uStack_b0);
        if ((int)ppcVar6 != 0) {
          func_0x00010937c560(&uStack_b0);
          FUN_10a0c32e4(&uStack_80);
          if (cStack_c9 < '\0') {
            __ZdlPv(uStack_e0);
          }
          uStack_d8 = uStack_78;
        }
      }
      lVar17 = *(long *)param_2[2];
      uVar11 = *(ulong *)(lVar17 + 0x98);
      if (uVar11 < *(ulong *)(lVar17 + 0xa0)) {
        func_0x00010a0e1a4c(uVar11,auStack_228);
        lVar13 = uVar11 + 0x178;
      }
      else {
        lVar13 = uVar11 - *(long *)(lVar17 + 0x90);
        uVar11 = (lVar13 >> 3) * 0x51b3bea3677d46cf + 1;
        if (0xae4c415c9882b9 < uVar11) {
          FUN_10a0e1bd0();
LAB_10a0ad134:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0ad138);
          (*pcVar4)();
        }
        lVar10 = (long)(*(ulong *)(lVar17 + 0xa0) - *(long *)(lVar17 + 0x90)) >> 3;
        uVar12 = lVar10 * -0x5c9882b931057262;
        if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
          uVar12 = uVar11;
        }
        if (0x572620ae4c415b < (ulong)(lVar10 * 0x51b3bea3677d46cf)) {
          uVar12 = 0xae4c415c9882b9;
        }
        if (uVar12 == 0) {
          lVar10 = 0;
        }
        else {
          if (0xae4c415c9882b9 < uVar12) {
            func_0x000109ffded8();
            goto LAB_10a0ad134;
          }
          lVar10 = uVar12 * 0x178;
          __Znwm();
        }
        lVar13 = lVar10 + lVar13;
        func_0x00010a0e1a4c(lVar13,auStack_228);
        lVar16 = *(long *)(lVar17 + 0x90);
        lVar2 = *(long *)(lVar17 + 0x98);
        lVar1 = lVar13 + (lVar16 - lVar2);
        lVar9 = lVar1;
        lVar15 = lVar16;
        if (lVar2 != lVar16) {
          do {
            func_0x00010a0e1a4c(lVar9,lVar15);
            lVar15 = lVar15 + 0x178;
            lVar9 = lVar9 + 0x178;
          } while (lVar15 != lVar2);
          do {
            func_0x00010a0cda38(lVar16);
            lVar16 = lVar16 + 0x178;
          } while (lVar16 != lVar2);
          lVar16 = *(long *)(lVar17 + 0x90);
        }
        lVar13 = lVar13 + 0x178;
        *(long *)(lVar17 + 0x90) = lVar1;
        *(long *)(lVar17 + 0x98) = lVar13;
        *(ulong *)(lVar17 + 0xa0) = lVar10 + uVar12 * 0x178;
        if (lVar16 != 0) {
          __ZdlPv(lVar16);
        }
      }
      *(long *)(lVar17 + 0x98) = lVar13;
      func_0x00010a0cda38(auStack_228);
      func_0x00010937c698(&pcStack_268);
      ppcVar6 = &pcStack_268;
      func_0x00010937c708(ppcVar6,&pcStack_288);
    } while ((int)ppcVar6 == 0);
  }
  return 1;
}



/* Entry: 10a0ad1c4; end: 10a0ad747;  */

undefined8 FUN_10a0ad1c4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char **ppcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  char *pcStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  char *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  char acStack_1d8 [32];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  acStack_1d8[0] = '\0';
  acStack_1d8[1] = '\0';
  acStack_1d8[2] = '\0';
  acStack_1d8[3] = '\0';
  acStack_1d8[4] = '\0';
  acStack_1d8[5] = '\0';
  acStack_1d8[6] = '\0';
  acStack_1d8[7] = '\0';
  acStack_1d8[8] = '\0';
  acStack_1d8[9] = '\0';
  acStack_1d8[10] = '\0';
  acStack_1d8[0xb] = '\0';
  acStack_1d8[0xc] = '\0';
  acStack_1d8[0xd] = '\0';
  acStack_1d8[0xe] = '\0';
  acStack_1d8[0xf] = '\0';
  acStack_1d8[0x10] = '\0';
  acStack_1d8[0x11] = '\0';
  acStack_1d8[0x12] = '\0';
  acStack_1d8[0x13] = '\0';
  acStack_1d8[0x14] = '\0';
  acStack_1d8[0x15] = '\0';
  acStack_1d8[0x16] = '\0';
  acStack_1d8[0x17] = '\0';
  acStack_1d8[0x18] = '\0';
  acStack_1d8[0x19] = '\0';
  acStack_1d8[0x1a] = '\0';
  acStack_1d8[0x1b] = '\0';
  acStack_1d8[0x1c] = '\0';
  acStack_1d8[0x1d] = '\0';
  acStack_1d8[0x1e] = '\0';
  acStack_1d8[0x1f] = -0x80;
  FUN_10a0a87b8(param_1,&UNK_10f637208,acStack_1d8);
  if ((int)param_1 == 0) {
    return 1;
  }
  pcVar5 = acStack_1d8;
  func_0x00010937c560();
  if (*pcVar5 != '\x02') {
    return 1;
  }
  pcVar5 = acStack_1d8;
  func_0x00010937c560();
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0x8000000000000000;
  cVar3 = *pcVar5;
  if (cVar3 == '\0') {
    uStack_1e0 = 1;
  }
  else {
    if (cVar3 == '\x02') {
      uStack_1e8 = **(undefined8 **)(pcVar5 + 8);
      lStack_210 = 0;
      uStack_200 = 0x8000000000000000;
      uStack_208 = *(undefined8 *)(*(long *)(pcVar5 + 8) + 8);
      goto LAB_10a0ad2b4;
    }
    if (cVar3 == '\x01') {
      uStack_1f0 = **(undefined8 **)(pcVar5 + 8);
      uStack_200 = 0x8000000000000000;
      uStack_208 = 0;
      lStack_210 = *(long *)(pcVar5 + 8) + 8;
      goto LAB_10a0ad2b4;
    }
    uStack_1e0 = 0;
  }
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 1;
LAB_10a0ad2b4:
  ppcVar6 = &pcStack_1f8;
  pcStack_218 = pcVar5;
  pcStack_1f8 = pcVar5;
  func_0x00010937c708(ppcVar6,&pcStack_218);
  if (((ulong)ppcVar6 & 1) == 0) {
    do {
      ppcVar6 = &pcStack_1f8;
      func_0x00010937c560();
      if (*(char *)ppcVar6 != '\x01') {
        if (*(long *)*param_2 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (*(long *)*param_2,&UNK_10f63a1e2,0x29);
          return 0;
        }
        return 0;
      }
      lVar14 = param_2[1];
      lStack_90 = 0;
      lStack_88 = 0;
      uStack_80 = 0;
      func_0x000107c2b054(&uStack_180,&UNK_10f414fb9);
      func_0x000107c2b054(&uStack_1b8,"");
      func_0x00010a0e18d4(&lStack_90,ppcVar6,&uStack_180);
      if (lStack_1a8 < 0) {
        __ZdlPv(uStack_1b8);
      }
      if (lStack_170 < 0) {
        __ZdlPv(uStack_180);
      }
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_e8 = 0;
      uStack_c8 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_160 = lStack_88;
      lStack_168 = lStack_90;
      lStack_170 = 0;
      uStack_158 = uStack_80;
      lStack_88 = 0;
      uStack_80 = 0;
      lStack_90 = 0;
      uVar13 = *(undefined8 *)*param_2;
      puStack_150 = &uStack_148;
      puStack_e0 = &uStack_d8;
      func_0x000107c2b054(&uStack_1b8,&DAT_10f68f148);
      uStack_198 = 0;
      uStack_190 = 0;
      lStack_188 = 0;
      FUN_10a0cdaf8(&uStack_180,uVar13,ppcVar6,&uStack_1b8,0,&uStack_198);
      if (lStack_188 < 0) {
        __ZdlPv(uStack_198);
      }
      if (lStack_1a8 < 0) {
        __ZdlPv(uStack_1b8);
      }
      FUN_10a0b3de4(&puStack_150,ppcVar6);
      FUN_10a0b4a84(&uStack_138,ppcVar6);
      if (*(char *)(lVar14 + 0x12) == '\x01') {
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        lStack_1a8 = 0;
        uStack_1a0 = 0x8000000000000000;
        ppcVar7 = ppcVar6;
        FUN_10a0a87b8(ppcVar6,&DAT_10f6372be,&uStack_1b8);
        if ((int)ppcVar7 != 0) {
          func_0x00010937c560(&uStack_1b8);
          FUN_10a0c32e4(&uStack_198);
          lVar14 = *(long *)param_2[2];
          if (*(char *)(lVar14 + 0x367) < '\0') {
            __ZdlPv(*(undefined8 *)(lVar14 + 0x350));
          }
          *(undefined8 *)(lVar14 + 0x358) = uStack_190;
          *(undefined8 *)(lVar14 + 0x350) = uStack_198;
          *(long *)(lVar14 + 0x360) = lStack_188;
        }
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        lStack_1a8 = 0;
        uStack_1a0 = 0x8000000000000000;
        FUN_10a0a87b8(ppcVar6,&DAT_10f6372cc,&uStack_1b8);
        if ((int)ppcVar6 != 0) {
          func_0x00010937c560(&uStack_1b8);
          FUN_10a0c32e4(&uStack_198);
          lVar14 = *(long *)param_2[2];
          if (*(char *)(lVar14 + 0x34f) < '\0') {
            __ZdlPv(*(undefined8 *)(lVar14 + 0x338));
          }
          *(undefined8 *)(lVar14 + 0x340) = uStack_190;
          *(undefined8 *)(lVar14 + 0x338) = uStack_198;
          *(long *)(lVar14 + 0x348) = lStack_188;
        }
      }
      lVar14 = *(long *)param_2[2];
      uVar10 = *(ulong *)(lVar14 + 0x128);
      if (uVar10 < *(ulong *)(lVar14 + 0x130)) {
        FUN_10a0e1be4(uVar10,&uStack_180);
        lVar12 = uVar10 + 0xf0;
      }
      else {
        lVar12 = uVar10 - *(long *)(lVar14 + 0x120);
        uVar10 = (lVar12 >> 4) * -0x1111111111111111 + 1;
        if (0x111111111111111 < uVar10) {
          FUN_10a0e1cb4();
LAB_10a0ad6a8:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0ad6ac);
          (*pcVar4)();
        }
        lVar9 = (long)(*(ulong *)(lVar14 + 0x130) - *(long *)(lVar14 + 0x120)) >> 4;
        uVar11 = lVar9 * -0x2222222222222222;
        if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
          uVar11 = uVar10;
        }
        if (0x88888888888887 < (ulong)(lVar9 * -0x1111111111111111)) {
          uVar11 = 0x111111111111111;
        }
        if (uVar11 == 0) {
          lVar9 = 0;
        }
        else {
          if (0x111111111111111 < uVar11) {
            func_0x000109ffded8();
            goto LAB_10a0ad6a8;
          }
          lVar9 = uVar11 * 0xf0;
          __Znwm();
        }
        lVar12 = lVar9 + lVar12;
        FUN_10a0e1be4(lVar12,&uStack_180);
        lVar15 = *(long *)(lVar14 + 0x120);
        lVar2 = *(long *)(lVar14 + 0x128);
        lVar1 = lVar12 + (lVar15 - lVar2);
        lVar8 = lVar1;
        lVar16 = lVar15;
        if (lVar2 != lVar15) {
          do {
            FUN_10a0e1be4(lVar8,lVar16);
            lVar16 = lVar16 + 0xf0;
            lVar8 = lVar8 + 0xf0;
          } while (lVar16 != lVar2);
          do {
            func_0x00010a0d3c3c(lVar15);
            lVar15 = lVar15 + 0xf0;
          } while (lVar15 != lVar2);
          lVar15 = *(long *)(lVar14 + 0x120);
        }
        lVar12 = lVar12 + 0xf0;
        *(long *)(lVar14 + 0x120) = lVar1;
        *(long *)(lVar14 + 0x128) = lVar12;
        *(ulong *)(lVar14 + 0x130) = lVar9 + uVar11 * 0xf0;
        if (lVar15 != 0) {
          __ZdlPv(lVar15);
        }
      }
      *(long *)(lVar14 + 0x128) = lVar12;
      func_0x00010a0d3c3c(&uStack_180);
      if (lStack_90 != 0) {
        lStack_88 = lStack_90;
        __ZdlPv();
      }
      func_0x00010937c698(&pcStack_1f8);
      ppcVar6 = &pcStack_1f8;
      func_0x00010937c708(ppcVar6,&pcStack_218);
    } while ((int)ppcVar6 == 0);
  }
  return 1;
}



/* Entry: 10a0ad748; end: 10a0af0df;  */

/* WARNING: Removing unreachable block (ram,0x00010a0aee48) */
/* WARNING: Removing unreachable block (ram,0x00010a0adbf0) */
/* WARNING: Removing unreachable block (ram,0x00010a0ae160) */
/* WARNING: Removing unreachable block (ram,0x00010a0add8c) */
/* WARNING: Removing unreachable block (ram,0x00010a0adc50) */
/* WARNING: Removing unreachable block (ram,0x00010a0adbe0) */
/* WARNING: Removing unreachable block (ram,0x00010a0add20) */
/* WARNING: Removing unreachable block (ram,0x00010a0adf74) */
/* WARNING: Removing unreachable block (ram,0x00010a0ae468) */
/* WARNING: Removing unreachable block (ram,0x00010a0ae228) */
/* WARNING: Removing unreachable block (ram,0x00010a0aee58) */
/* WARNING: Removing unreachable block (ram,0x00010a0ae288) */
/* WARNING: Removing unreachable block (ram,0x00010a0ae4c8) */
/* WARNING: Removing unreachable block (ram,0x00010a0add30) */
/* WARNING: Removing unreachable block (ram,0x00010a0adc40) */
/* WARNING: Removing unreachable block (ram,0x00010a0adfd0) */
/* WARNING: Removing unreachable block (ram,0x00010a0adc94) */
/* WARNING: Removing unreachable block (ram,0x00010a0adcbc) */
/* WARNING: Removing unreachable block (ram,0x00010a0ae2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a0add7c) */
/* WARNING: Removing unreachable block (ram,0x00010a0addcc) */
/* WARNING: Removing unreachable block (ram,0x00010a0ae524) */
/* WARNING: Removing unreachable block (ram,0x00010a0adddc) */
/* WARNING: Removing unreachable block (ram,0x00010a0ade74) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a0ad748(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  char ****ppppcVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  code *pcVar7;
  bool bVar8;
  char *pcVar9;
  char **ppcVar10;
  long *plVar11;
  char **ppcVar12;
  char ***pppcVar13;
  char ***pppcVar14;
  undefined8 *******pppppppuVar15;
  char ****ppppcVar16;
  undefined8 *puVar17;
  long lVar18;
  long *******ppppppplVar19;
  long lVar20;
  short sVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined1 auVar29 [16];
  char *pcStack_820;
  long lStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  char *pcStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  long lStack_7a8;
  long lStack_7a0;
  undefined8 uStack_798;
  undefined1 auStack_790 [24];
  undefined8 uStack_778;
  undefined1 auStack_770 [8];
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined4 uStack_750;
  undefined8 uStack_74c;
  undefined8 uStack_744;
  undefined8 uStack_73c;
  undefined8 uStack_734;
  undefined8 uStack_72c;
  undefined8 uStack_724;
  undefined8 uStack_71c;
  undefined8 uStack_714;
  undefined8 uStack_70c;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined8 uStack_6f8;
  undefined8 *puStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined1 uStack_6d8;
  undefined8 *puStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined4 uStack_678;
  undefined8 uStack_674;
  undefined8 uStack_66c;
  undefined8 uStack_664;
  undefined8 uStack_65c;
  undefined8 uStack_654;
  undefined8 uStack_64c;
  undefined8 uStack_644;
  undefined8 uStack_63c;
  undefined8 uStack_634;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined8 uStack_620;
  undefined8 *puStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined1 uStack_600;
  undefined8 *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined1 uStack_540;
  undefined8 *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  char ***pppcStack_518;
  char cStack_509;
  undefined8 uStack_508;
  char ***pppcStack_500;
  char cStack_4f1;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined1 uStack_470;
  undefined8 *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  char **ppcStack_448;
  char cStack_439;
  undefined8 uStack_438;
  char **ppcStack_430;
  char cStack_421;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  char **ppcStack_378;
  char cStack_369;
  undefined8 uStack_368;
  char **ppcStack_360;
  char cStack_351;
  undefined4 uStack_350;
  undefined8 uStack_34c;
  undefined8 uStack_344;
  undefined8 uStack_33c;
  undefined8 uStack_334;
  undefined8 uStack_32c;
  undefined8 uStack_324;
  undefined8 uStack_31c;
  undefined8 uStack_314;
  undefined8 uStack_30c;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined8 uStack_1c8;
  char ***pppcStack_1c0;
  char cStack_1b1;
  undefined8 uStack_1b0;
  char ***pppcStack_1a8;
  char cStack_199;
  undefined8 auStack_198 [2];
  char cStack_181;
  char ***pppcStack_180;
  char **ppcStack_178;
  char *pcStack_170;
  undefined8 uStack_168;
  char ***pppcStack_160;
  char ***pppcStack_158;
  char ***pppcStack_150;
  undefined8 uStack_148;
  long *******ppppppplStack_138;
  short sStack_130;
  undefined6 uStack_12e;
  int iStack_128;
  char cStack_121;
  char **ppcStack_120;
  char **ppcStack_118;
  long lStack_110;
  undefined8 uStack_108;
  char **ppcStack_100;
  char **ppcStack_f8;
  char **ppcStack_f0;
  undefined8 uStack_e8;
  undefined8 *******pppppppuStack_e0;
  char ***pppcStack_d8;
  char ***pppcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_7e0 = 0;
  uStack_7d8 = 0;
  uStack_7d0 = 0;
  uStack_7c8 = 0x8000000000000000;
  FUN_10a0a87b8(param_1,&DAT_10f414f99,&uStack_7e0);
  if ((int)param_1 == 0) goto LAB_10a0aed50;
  pcVar9 = (char *)&uStack_7e0;
  func_0x00010937c560();
  if (*pcVar9 != '\x02') goto LAB_10a0aed50;
  pcVar9 = (char *)&uStack_7e0;
  func_0x00010937c560();
  uStack_7f8 = 0;
  uStack_7f0 = 0;
  uStack_7e8 = 0x8000000000000000;
  cVar4 = *pcVar9;
  if (cVar4 == '\0') {
    uStack_7e8 = 1;
LAB_10a0ad840:
    lStack_818 = 0;
    uStack_810 = 0;
    uStack_808 = 1;
  }
  else if (cVar4 == '\x02') {
    uStack_7f0 = **(undefined8 **)(pcVar9 + 8);
    lStack_818 = 0;
    uStack_808 = 0x8000000000000000;
    uStack_810 = *(undefined8 *)(*(long *)(pcVar9 + 8) + 8);
  }
  else {
    if (cVar4 != '\x01') {
      uStack_7e8 = 0;
      goto LAB_10a0ad840;
    }
    uStack_7f8 = **(undefined8 **)(pcVar9 + 8);
    uStack_810 = 0;
    uStack_808 = 0x8000000000000000;
    lStack_818 = *(long *)(pcVar9 + 8) + 8;
  }
  ppcVar10 = &pcStack_800;
  pcStack_820 = pcVar9;
  pcStack_800 = pcVar9;
  func_0x00010937c708(ppcVar10,&pcStack_820);
  if (((ulong)ppcVar10 & 1) == 0) {
    auVar29 = NEON_fmov(0x3ff0000000000000,8);
    do {
      ppcVar10 = &pcStack_800;
      func_0x00010937c560();
      if (*(char *)ppcVar10 != '\x01') {
        uVar24 = 0;
        if (*(long *)*param_2 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (*(long *)*param_2,&UNK_10f63a20c,0x2c);
LAB_10a0aee78:
          uVar24 = 0;
        }
        goto LAB_10a0aed54;
      }
      lVar27 = param_2[1];
      lStack_7a8 = 0;
      uStack_7b0 = 0;
      uStack_798 = 0;
      lStack_7a0 = 0;
      uStack_7b8 = 0;
      uStack_7c0 = 0;
      func_0x000107c2b054(auStack_790,&UNK_10f636fa8);
      uStack_778 = 0x3fe0000000000000;
      auStack_770[0] = 0;
      pppcStack_d8 = (char ***)0x3ff0000000000000;
      pppppppuStack_e0 = (undefined8 *******)0x3ff0000000000000;
      uStack_c8 = 0x3ff0000000000000;
      pppcStack_d0 = (char ***)0x3ff0000000000000;
      uStack_760 = 0;
      uStack_758 = 0;
      uStack_768 = 0;
      FUN_10a0cf024(&uStack_768,&pppppppuStack_e0,&uStack_c0,4);
      uStack_750 = 0xffffffff;
      uStack_6e8 = 0;
      uStack_6e0 = 0;
      uStack_744 = 0;
      uStack_74c = 0;
      uStack_734 = 0;
      uStack_73c = 0;
      uStack_724 = 0;
      uStack_72c = 0;
      uStack_714 = 0;
      uStack_71c = 0;
      uStack_704 = 0;
      uStack_70c = 0;
      uStack_6f8 = 0;
      uStack_700 = 0;
      uStack_6fc = 0;
      uStack_6d8 = 0;
      uStack_6c8 = 0;
      uStack_6c0 = 0;
      uStack_6b0 = 0;
      uStack_6b8 = 0;
      uStack_6a0 = 0;
      uStack_6a8 = 0;
      uStack_690 = 0;
      uStack_698 = 0;
      uStack_678 = 0xffffffff;
      uStack_610 = 0;
      uStack_608 = 0;
      uStack_66c = 0;
      uStack_674 = 0;
      uStack_65c = 0;
      uStack_664 = 0;
      uStack_64c = 0;
      uStack_654 = 0;
      uStack_63c = 0;
      uStack_644 = 0;
      uStack_62c = 0;
      uStack_634 = 0;
      uStack_620 = 0;
      uStack_628 = 0;
      uStack_624 = 0;
      uStack_600 = 0;
      uStack_5f0 = 0;
      uStack_5e8 = 0;
      uStack_550 = 0;
      uStack_548 = 0;
      uStack_560 = 0;
      uStack_578 = 0;
      uStack_580 = 0;
      uStack_568 = 0;
      uStack_570 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      uStack_588 = 0;
      uStack_590 = 0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      uStack_5a8 = 0;
      uStack_5b0 = 0;
      uStack_5d8 = 0;
      uStack_5e0 = 0;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_540 = 0;
      uStack_530 = 0;
      uStack_528 = 0;
      uStack_508 = 0;
      cStack_509 = '\0';
      cStack_4f1 = '\0';
      pppcStack_500 = (char ***)0x0;
      pppcStack_518 = (char ***)0x0;
      uStack_520 = 0;
      uStack_4f0 = 0xffffffff;
      uStack_4e8 = 0x3ff0000000000000;
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4a8 = 0;
      uStack_4b0 = 0;
      uStack_498 = 0;
      uStack_4a0 = 0;
      uStack_490 = 0;
      uStack_470 = 0;
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_438 = 0;
      cStack_439 = '\0';
      cStack_421 = '\0';
      ppcStack_430 = (char **)0x0;
      ppcStack_448 = (char **)0x0;
      uStack_450 = 0;
      uStack_420 = 0xffffffff;
      uStack_418 = 0x3ff0000000000000;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      uStack_3c0 = 0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3a0 = 0;
      uStack_390 = 0;
      uStack_388 = 0;
      uStack_368 = 0;
      cStack_369 = '\0';
      cStack_351 = '\0';
      ppcStack_360 = (char **)0x0;
      ppcStack_378 = (char **)0x0;
      uStack_380 = 0;
      uStack_350 = 0xffffffff;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      uStack_2f8 = 0;
      uStack_2fc = 0;
      uStack_314 = 0;
      uStack_31c = 0;
      uStack_304 = 0;
      uStack_300 = 0;
      uStack_30c = 0;
      uStack_334 = 0;
      uStack_33c = 0;
      uStack_324 = 0;
      uStack_32c = 0;
      uStack_344 = 0;
      uStack_34c = 0;
      uStack_2d8 = 0;
      uStack_2c8 = 0;
      uStack_2c0 = 0;
      uStack_2a0 = 0;
      uStack_2a8 = 0;
      uStack_290 = 0;
      uStack_298 = 0;
      uStack_2b0 = 0;
      uStack_2b8 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_250 = 0;
      uStack_248 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1f0 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_1d0 = 0;
      uStack_1b0 = 0;
      cStack_1b1 = '\0';
      cStack_199 = '\0';
      pppcStack_1a8 = (char ***)0x0;
      pppcStack_1c0 = (char ***)0x0;
      uStack_1c8 = 0;
      uVar24 = *(undefined8 *)*param_2;
      puStack_6f0 = &uStack_6e8;
      puStack_6d0 = &uStack_6c8;
      puStack_618 = &uStack_610;
      puStack_5f8 = &uStack_5f0;
      puStack_558 = &uStack_550;
      puStack_538 = &uStack_530;
      puStack_488 = &uStack_480;
      puStack_468 = &uStack_460;
      puStack_3b8 = &uStack_3b0;
      puStack_398 = &uStack_390;
      puStack_2f0 = &uStack_2e8;
      puStack_2d0 = &uStack_2c8;
      puStack_288 = &uStack_280;
      puStack_270 = &uStack_268;
      puStack_258 = &uStack_250;
      puStack_1e8 = &uStack_1e0;
      uStack_688 = auVar29._0_8_;
      uStack_680 = auVar29._8_8_;
      func_0x000107c2b054(&pppppppuStack_e0,&DAT_10f68f148);
      ppcStack_100 = (char **)0x0;
      ppcStack_f8 = (char **)0x0;
      ppcStack_f0 = (char **)0x0;
      FUN_10a0cdaf8(&uStack_7c0,uVar24,ppcVar10,&pppppppuStack_e0,0,&ppcStack_100);
      lVar26 = *(long *)*param_2;
      cVar4 = *(char *)(lVar27 + 0x12);
      func_0x000107c2b054(&pppppppuStack_e0,&DAT_10f68f148);
      ppcStack_100 = (char **)0x0;
      ppcStack_f8 = (char **)0x0;
      ppcStack_f0 = (char **)0x0;
      FUN_10a0cdaf8(&uStack_7c0,lVar26,ppcVar10,&pppppppuStack_e0,0,&ppcStack_100);
      func_0x000107c2b054(&pppppppuStack_e0,&UNK_10f4150c5);
      func_0x000107c2b054(&ppcStack_100,"");
      plVar11 = &lStack_7a8;
      FUN_10a0ce878(plVar11,ppcVar10,&pppppppuStack_e0);
      if ((int)plVar11 == 0) {
        pppppppuStack_e0 = (undefined8 *******)0x0;
        pppcStack_d8 = (char ***)0x0;
        pppcStack_d0 = (char ***)0x0;
        func_0x00010a0e2230(&lStack_7a8,&pppppppuStack_e0,&uStack_c8,3);
      }
      else if (lStack_7a0 - lStack_7a8 != 0x18) {
        if (lVar26 != 0) {
          __ZNSt3__19to_stringEm(&ppcStack_120,lStack_7a0 - lStack_7a8 >> 3);
          pppcVar14 = &ppcStack_120;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppcVar14,0,&UNK_10f63a239,0x4a);
          ppcStack_100 = *pppcVar14;
          ppcStack_f8 = pppcVar14[1];
          ppcStack_f0 = pppcVar14[2];
          pppcVar14[1] = (char **)0x0;
          pppcVar14[2] = (char **)0x0;
          *pppcVar14 = (char **)0x0;
          pppcVar14 = &ppcStack_100;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppcVar14,&DAT_10f68f57e,1);
          pppppppuStack_e0 = (undefined8 *******)*pppcVar14;
          pppcStack_d8 = (char ***)pppcVar14[1];
          pppcStack_d0 = (char ***)pppcVar14[2];
          pppcVar14[1] = (char **)0x0;
          pppcVar14[2] = (char **)0x0;
          *pppcVar14 = (char **)0x0;
          pppcVar14 = pppcStack_d8;
          pppppppuVar15 = pppppppuStack_e0;
          if (-1 < (long)pppcStack_d0) {
            pppcVar14 = (char ***)((ulong)pppcStack_d0 >> 0x38);
            pppppppuVar15 = &pppppppuStack_e0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (lVar26,pppppppuVar15,pppcVar14);
          if (lStack_110 < 0) {
            __ZdlPv(ppcStack_120);
          }
        }
        func_0x00010a0d3e6c(&uStack_7c0);
        goto LAB_10a0aee78;
      }
      func_0x000107c2b054(&pppppppuStack_e0,&UNK_10f638ad8);
      ppcStack_100 = (char **)0x0;
      ppcStack_f8 = (char **)0x0;
      ppcStack_f0 = (char **)0x0;
      FUN_10a0cdaf8(auStack_790,lVar26,ppcVar10,&pppppppuStack_e0,0,&ppcStack_100);
      func_0x000107c2b054(&pppppppuStack_e0,&DAT_10f638acc);
      func_0x000107c2b054(&ppcStack_100,"");
      FUN_10a0ce9f0(&uStack_778,lVar26,ppcVar10,&pppppppuStack_e0,0,&ppcStack_100);
      func_0x000107c2b054(&pppppppuStack_e0,&UNK_10f638ae2);
      func_0x000107c2b054(&ppcStack_100,"");
      func_0x00010a0defc8(auStack_770,ppcVar10,&pppppppuStack_e0);
      ppcStack_100 = (char **)0x0;
      ppcStack_f8 = (char **)0x0;
      ppcStack_f0 = (char **)0x0;
      uStack_e8 = 0x8000000000000000;
      ppcVar12 = ppcVar10;
      FUN_10a0a87b8(ppcVar10,&UNK_10f638b14,&ppcStack_100);
      if ((int)ppcVar12 != 0) {
        pppcVar13 = &ppcStack_100;
        func_0x00010937c560();
        ppcStack_118 = (char **)0x0;
        ppcStack_120 = (char **)0x0;
        lStack_110 = 0;
        func_0x000107c2b054(&pppppppuStack_e0,&UNK_10f638b40);
        func_0x000107c2b054(&pppcStack_160,"");
        pppcVar14 = &ppcStack_120;
        FUN_10a0ce878(pppcVar14,pppcVar13,&pppppppuStack_e0);
        if ((long)pppcStack_150 < 0) {
          __ZdlPv(pppcStack_160);
        }
        if ((int)pppcVar14 == 0) {
LAB_10a0adea0:
          pppppppuStack_e0 = (undefined8 *******)0x0;
          pppcStack_d8 = (char ***)0x0;
          pppcStack_d0 = (char ***)0x0;
          uStack_c8 = 0x8000000000000000;
          pppcVar14 = pppcVar13;
          FUN_10a0a87b8(pppcVar13,&DAT_10f4151f9,&pppppppuStack_e0);
          if ((int)pppcVar14 != 0) {
            pppppppuVar15 = &pppppppuStack_e0;
            func_0x00010937c560(pppppppuVar15);
            FUN_10a0e1cc8(&uStack_750,lVar26,pppppppuVar15,cVar4);
          }
          pppppppuStack_e0 = (undefined8 *******)0x0;
          pppcStack_d8 = (char ***)0x0;
          pppcStack_d0 = (char ***)0x0;
          uStack_c8 = 0x8000000000000000;
          pppcVar14 = pppcVar13;
          FUN_10a0a87b8(pppcVar13,&DAT_10f638b60,&pppppppuStack_e0);
          if ((int)pppcVar14 != 0) {
            pppppppuVar15 = &pppppppuStack_e0;
            func_0x00010937c560(pppppppuVar15);
            FUN_10a0e1cc8(&uStack_678,lVar26,pppppppuVar15,cVar4);
          }
          func_0x000107c2b054(&pppppppuStack_e0,&UNK_10f638b50);
          func_0x000107c2b054(&pppcStack_160,"");
          FUN_10a0ce9f0(&uStack_688,lVar26,pppcVar13,&pppppppuStack_e0,0,&pppcStack_160);
          if ((long)pppcStack_150 < 0) {
            __ZdlPv(pppcStack_160);
          }
          func_0x000107c2b054(&pppppppuStack_e0,&UNK_10f4151e9);
          func_0x000107c2b054(&pppcStack_160,"");
          FUN_10a0ce9f0(&uStack_680,lVar26,pppcVar13,&pppppppuStack_e0,0,&pppcStack_160);
          if ((long)pppcStack_150 < 0) {
            __ZdlPv(pppcStack_160);
          }
          FUN_10a0b3de4(&puStack_538,pppcVar13);
          FUN_10a0b4a84(&uStack_5b0,pppcVar13);
          if (cVar4 != '\0') {
            pppppppuStack_e0 = (undefined8 *******)0x0;
            pppcStack_d8 = (char ***)0x0;
            pppcStack_d0 = (char ***)0x0;
            uStack_c8 = 0x8000000000000000;
            pppcVar14 = pppcVar13;
            FUN_10a0a87b8(pppcVar13,&DAT_10f6372be,&pppppppuStack_e0);
            if ((int)pppcVar14 != 0) {
              func_0x00010937c560(&pppppppuStack_e0);
              FUN_10a0c32e4(&pppcStack_160);
              if (cStack_4f1 < '\0') {
                __ZdlPv(uStack_508);
              }
              pppcStack_500 = pppcStack_158;
            }
            pppppppuStack_e0 = (undefined8 *******)0x0;
            pppcStack_d8 = (char ***)0x0;
            pppcStack_d0 = (char ***)0x0;
            uStack_c8 = 0x8000000000000000;
            FUN_10a0a87b8(pppcVar13,&DAT_10f6372cc,&pppppppuStack_e0);
            if ((int)pppcVar13 != 0) {
              func_0x00010937c560(&pppppppuStack_e0);
              FUN_10a0c32e4(&pppcStack_160);
              if (cStack_509 < '\0') {
                __ZdlPv(uStack_520);
              }
              pppcStack_518 = pppcStack_158;
            }
          }
        }
        else {
          if ((long)ppcStack_118 - (long)ppcStack_120 == 0x20) {
            func_0x00010a0e2360(&uStack_768);
            goto LAB_10a0adea0;
          }
          if (lVar26 != 0) {
            __ZNSt3__19to_stringEm(&pppcStack_180,(long)ppcStack_118 - (long)ppcStack_120 >> 3);
            ppppcVar16 = &pppcStack_180;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (ppppcVar16,0,&UNK_10f63a284,0x57);
            pppcStack_160 = *ppppcVar16;
            pppcStack_158 = ppppcVar16[1];
            pppcStack_150 = ppppcVar16[2];
            ppppcVar16[1] = (char ***)0x0;
            ppppcVar16[2] = (char ***)0x0;
            *ppppcVar16 = (char ***)0x0;
            ppppcVar16 = &pppcStack_160;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppppcVar16,&DAT_10f68f57e,1);
            pppppppuStack_e0 = (undefined8 *******)*ppppcVar16;
            pppcStack_d8 = ppppcVar16[1];
            pppcStack_d0 = ppppcVar16[2];
            ppppcVar16[1] = (char ***)0x0;
            ppppcVar16[2] = (char ***)0x0;
            *ppppcVar16 = (char ***)0x0;
            pppcVar14 = pppcStack_d8;
            pppppppuVar15 = pppppppuStack_e0;
            if (-1 < (long)pppcStack_d0) {
              pppcVar14 = (char ***)((ulong)pppcStack_d0 >> 0x38);
              pppppppuVar15 = &pppppppuStack_e0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (lVar26,pppppppuVar15,pppcVar14);
            if ((long)pppcStack_150 < 0) {
              __ZdlPv(pppcStack_160);
            }
            if ((long)pcStack_170 < 0) {
              __ZdlPv(pppcStack_180);
            }
          }
        }
        if (ppcStack_120 != (char **)0x0) {
          ppcStack_118 = ppcStack_120;
          __ZdlPv();
        }
      }
      ppcStack_100 = (char **)0x0;
      ppcStack_f8 = (char **)0x0;
      ppcStack_f0 = (char **)0x0;
      uStack_e8 = 0x8000000000000000;
      ppcVar12 = ppcVar10;
      FUN_10a0a87b8(ppcVar10,&DAT_10f638aee,&ppcStack_100);
      if ((int)ppcVar12 != 0) {
        pppcVar14 = &ppcStack_100;
        func_0x00010937c560();
        func_0x000107c2b054(&pppppppuStack_e0,&DAT_10f2c4679);
        func_0x000107c2b054(&ppcStack_120,&UNK_10f63a2dc);
        puVar17 = &uStack_4f0;
        FUN_10a0deaa0(puVar17,lVar26,pppcVar14,&pppppppuStack_e0,1,&ppcStack_120);
        if (lStack_110 < 0) {
          __ZdlPv(ppcStack_120);
        }
        if (((ulong)puVar17 & 1) != 0) {
          func_0x000107c2b054(&pppppppuStack_e0,&UNK_10f41520a);
          func_0x000107c2b054(&ppcStack_120,"");
          FUN_10a0deaa0((long)&uStack_4f0 + 4,lVar26,pppcVar14,&pppppppuStack_e0,0,&ppcStack_120);
          if (lStack_110 < 0) {
            __ZdlPv(ppcStack_120);
          }
          func_0x000107c2b054(&pppppppuStack_e0,"scale");
          func_0x000107c2b054(&ppcStack_120,"");
          FUN_10a0ce9f0(&uStack_4e8,lVar26,pppcVar14,&pppppppuStack_e0,0,&ppcStack_120);
          if (lStack_110 < 0) {
            __ZdlPv(ppcStack_120);
          }
          FUN_10a0b3de4(&puStack_468,pppcVar14);
          FUN_10a0b4a84(&uStack_4e0,pppcVar14);
          if (cVar4 != '\0') {
            pppppppuStack_e0 = (undefined8 *******)0x0;
            pppcStack_d8 = (char ***)0x0;
            pppcStack_d0 = (char ***)0x0;
            uStack_c8 = 0x8000000000000000;
            pppcVar13 = pppcVar14;
            FUN_10a0a87b8(pppcVar14,&DAT_10f6372be,&pppppppuStack_e0);
            if ((int)pppcVar13 != 0) {
              func_0x00010937c560(&pppppppuStack_e0);
              FUN_10a0c32e4(&ppcStack_120);
              if (cStack_421 < '\0') {
                __ZdlPv(uStack_438);
              }
              ppcStack_430 = ppcStack_118;
            }
            pppppppuStack_e0 = (undefined8 *******)0x0;
            pppcStack_d8 = (char ***)0x0;
            pppcStack_d0 = (char ***)0x0;
            uStack_c8 = 0x8000000000000000;
            FUN_10a0a87b8(pppcVar14,&DAT_10f6372cc,&pppppppuStack_e0);
            if ((int)pppcVar14 != 0) {
              func_0x00010937c560(&pppppppuStack_e0);
              FUN_10a0c32e4(&ppcStack_120);
              if (cStack_439 < '\0') {
                __ZdlPv(uStack_450);
              }
              ppcStack_448 = ppcStack_118;
            }
          }
        }
      }
      ppcStack_100 = (char **)0x0;
      ppcStack_f8 = (char **)0x0;
      ppcStack_f0 = (char **)0x0;
      uStack_e8 = 0x8000000000000000;
      ppcVar12 = ppcVar10;
      FUN_10a0a87b8(ppcVar10,&DAT_10f638afc,&ppcStack_100);
      if ((int)ppcVar12 != 0) {
        pppcVar14 = &ppcStack_100;
        func_0x00010937c560();
        func_0x000107c2b054(&pppppppuStack_e0,&DAT_10f2c4679);
        func_0x000107c2b054(&ppcStack_120,&UNK_10f63a2dc);
        puVar17 = &uStack_420;
        FUN_10a0deaa0(puVar17,lVar26,pppcVar14,&pppppppuStack_e0,1,&ppcStack_120);
        if (lStack_110 < 0) {
          __ZdlPv(ppcStack_120);
        }
        if (((ulong)puVar17 & 1) != 0) {
          func_0x000107c2b054(&pppppppuStack_e0,&UNK_10f41520a);
          func_0x000107c2b054(&ppcStack_120,"");
          FUN_10a0deaa0((long)&uStack_420 + 4,lVar26,pppcVar14,&pppppppuStack_e0,0,&ppcStack_120);
          if (lStack_110 < 0) {
            __ZdlPv(ppcStack_120);
          }
          func_0x000107c2b054(&pppppppuStack_e0,&UNK_10f638b30);
          func_0x000107c2b054(&ppcStack_120,"");
          FUN_10a0ce9f0(&uStack_418,lVar26,pppcVar14,&pppppppuStack_e0,0,&ppcStack_120);
          if (lStack_110 < 0) {
            __ZdlPv(ppcStack_120);
          }
          FUN_10a0b3de4(&puStack_398,pppcVar14);
          FUN_10a0b4a84(&uStack_410,pppcVar14);
          if (cVar4 != '\0') {
            pppppppuStack_e0 = (undefined8 *******)0x0;
            pppcStack_d8 = (char ***)0x0;
            pppcStack_d0 = (char ***)0x0;
            uStack_c8 = 0x8000000000000000;
            pppcVar13 = pppcVar14;
            FUN_10a0a87b8(pppcVar14,&DAT_10f6372be,&pppppppuStack_e0);
            if ((int)pppcVar13 != 0) {
              func_0x00010937c560(&pppppppuStack_e0);
              FUN_10a0c32e4(&ppcStack_120);
              if (cStack_351 < '\0') {
                __ZdlPv(uStack_368);
              }
              ppcStack_360 = ppcStack_118;
            }
            pppppppuStack_e0 = (undefined8 *******)0x0;
            pppcStack_d8 = (char ***)0x0;
            pppcStack_d0 = (char ***)0x0;
            uStack_c8 = 0x8000000000000000;
            FUN_10a0a87b8(pppcVar14,&DAT_10f6372cc,&pppppppuStack_e0);
            if ((int)pppcVar14 != 0) {
              func_0x00010937c560(&pppppppuStack_e0);
              FUN_10a0c32e4(&ppcStack_120);
              if (cStack_369 < '\0') {
                __ZdlPv(uStack_380);
              }
              ppcStack_378 = ppcStack_118;
            }
          }
        }
      }
      pppppppuStack_e0 = (undefined8 *******)0x0;
      pppcStack_d8 = (char ***)0x0;
      pppcStack_d0 = (char ***)0x0;
      uStack_c8 = 0x8000000000000000;
      ppcVar12 = ppcVar10;
      FUN_10a0a87b8(ppcVar10,&DAT_10f4150d4,&pppppppuStack_e0);
      if ((int)ppcVar12 != 0) {
        pppppppuVar15 = &pppppppuStack_e0;
        func_0x00010937c560(pppppppuVar15);
        FUN_10a0e1cc8(&uStack_350,lVar26,pppppppuVar15,cVar4);
      }
      func_0x00010a0d3fb4(uStack_280);
      uStack_278 = 0;
      uStack_280 = 0;
      puStack_288 = &uStack_280;
      func_0x00010a0d3fb4(uStack_268);
      uStack_260 = 0;
      uStack_268 = 0;
      ppcStack_f8 = (char **)0x0;
      ppcStack_f0 = (char **)0x0;
      uStack_e8 = 0x8000000000000000;
      cVar5 = *(char *)ppcVar10;
      ppcStack_120 = ppcVar10;
      ppcStack_100 = ppcVar10;
      if (cVar5 == '\0') {
        uStack_e8 = 1;
LAB_10a0ae714:
        ppcStack_118 = (char **)0x0;
        lStack_110 = 0;
        uStack_108 = 1;
        puStack_270 = &uStack_268;
      }
      else if (cVar5 == '\x02') {
        ppcStack_f0 = *(char ***)ppcVar10[1];
        ppcStack_118 = (char **)0x0;
        uStack_108 = 0x8000000000000000;
        lStack_110 = *(long *)(ppcVar10[1] + 8);
        puStack_270 = &uStack_268;
      }
      else {
        if (cVar5 != '\x01') {
          uStack_e8 = 0;
          goto LAB_10a0ae714;
        }
        ppcStack_118 = (char **)(ppcVar10[1] + 8);
        ppcStack_f8 = *(char ***)ppcVar10[1];
        uStack_108 = 0x8000000000000000;
        lStack_110 = 0;
        puStack_270 = &uStack_268;
      }
      while( true ) {
        pppcVar14 = &ppcStack_100;
        func_0x00010937c708(pppcVar14,&ppcStack_120);
        if (((ulong)pppcVar14 & 1) != 0) break;
        pppcVar13 = &ppcStack_100;
        func_0x0001095a27d4();
        pppcVar14 = (char ***)*pppcVar13;
        if (-1 < *(char *)((long)pppcVar13 + 0x17)) {
          pppcVar14 = pppcVar13;
        }
        func_0x000107c2b054(&ppppppplStack_138,pppcVar14);
        if (cStack_121 < '\0') {
          lVar27 = CONCAT62(uStack_12e,sStack_130);
          ppppppplVar19 = ppppppplStack_138;
          if (lVar27 == 6) goto LAB_10a0ae8fc;
          if (lVar27 == 10) {
            sVar6 = *(short *)(ppppppplStack_138 + 1);
            bVar8 = *ppppppplStack_138 == (long ******)0x6f69736e65747865;
            sVar21 = 0x736e;
            goto LAB_10a0ae914;
          }
          if ((lVar27 != 0x14) ||
             ((*ppppppplStack_138 != (long ******)0x6c6174654d726270 ||
              ppppppplStack_138[1] != (long ******)0x6867756f5263696c) ||
              *(int *)(ppppppplStack_138 + 2) != 0x7373656e)) goto LAB_10a0ae91c;
LAB_10a0ae820:
          pppcVar14 = &ppcStack_100;
          func_0x00010937c560();
          if (*(char *)pppcVar14 == '\x01') {
            pppcVar14 = &ppcStack_100;
            func_0x00010937c560();
            pppcStack_158 = (char ***)0x0;
            pppcStack_150 = (char ***)0x0;
            uStack_148 = 0x8000000000000000;
            cVar5 = *(char *)pppcVar14;
            pppcStack_180 = pppcVar14;
            pppcStack_160 = pppcVar14;
            if (cVar5 == '\0') {
              uStack_148 = 1;
LAB_10a0aea04:
              ppcStack_178 = (char **)0x0;
              pcStack_170 = (char *)0x0;
              uStack_168 = 1;
            }
            else if (cVar5 == '\x02') {
              pppcStack_150 = (char ***)*pppcVar14[1];
              ppcStack_178 = (char **)0x0;
              uStack_168 = 0x8000000000000000;
              pcStack_170 = pppcVar14[1][1];
            }
            else {
              if (cVar5 != '\x01') {
                uStack_148 = 0;
                goto LAB_10a0aea04;
              }
              pppcStack_158 = (char ***)*pppcVar14[1];
              pcStack_170 = (char *)0x0;
              uStack_168 = 0x8000000000000000;
              ppcStack_178 = pppcVar14[1] + 1;
            }
            while( true ) {
              ppppcVar16 = &pppcStack_160;
              func_0x00010937c708(ppppcVar16,&pppcStack_180);
              if (((ulong)ppppcVar16 & 1) != 0) break;
              pppppppuStack_e0 = (undefined8 *******)((ulong)pppppppuStack_e0 & 0xffffffffffff0000);
              uStack_a0 = 0;
              uStack_98 = 0;
              pppcStack_d0 = (char ***)0x0;
              pppcStack_d8 = (char ***)0x0;
              uStack_c0 = 0;
              uStack_c8 = 0;
              uStack_b0 = 0;
              uStack_b8 = 0;
              uStack_90 = 0;
              ppppcVar16 = &pppcStack_160;
              puStack_a8 = &uStack_a0;
              func_0x0001095a27d4();
              ppppcVar2 = (char ****)*ppppcVar16;
              if (-1 < *(char *)((long)ppppcVar16 + 0x17)) {
                ppppcVar2 = ppppcVar16;
              }
              func_0x000107c2b054(auStack_198,ppppcVar2);
              pppppppuVar15 = &pppppppuStack_e0;
              FUN_10a0e1eec(pppppppuVar15,lVar26,pppcVar14,auStack_198);
              if (cStack_181 < '\0') {
                __ZdlPv(auStack_198[0]);
              }
              if ((int)pppppppuVar15 != 0) {
                ppppcVar16 = &pppcStack_160;
                func_0x0001095a27d4();
                ppppcVar2 = (char ****)*ppppcVar16;
                if (-1 < *(char *)((long)ppppcVar16 + 0x17)) {
                  ppppcVar2 = ppppcVar16;
                }
                func_0x000107c2b054(auStack_198,ppppcVar2);
                FUN_10a0e2488(&puStack_288,auStack_198,auStack_198,&pppppppuStack_e0);
                if (cStack_181 < '\0') {
                  __ZdlPv(auStack_198[0]);
                }
              }
              func_0x00010a0d4004(&pppppppuStack_e0);
              func_0x00010937c698(&pppcStack_160);
            }
          }
        }
        else {
          if (cStack_121 == '\x06') {
            ppppppplVar19 = (long *******)&ppppppplStack_138;
LAB_10a0ae8fc:
            sVar6 = *(short *)((long)ppppppplVar19 + 4);
            bVar8 = *(int *)ppppppplVar19 == 0x72747865;
            sVar21 = 0x7361;
LAB_10a0ae914:
            if (bVar8 && sVar6 == sVar21) goto LAB_10a0ae9ac;
          }
          else if (cStack_121 == '\n') {
            if (ppppppplStack_138 == (long *******)0x6f69736e65747865 && sStack_130 == 0x736e)
            goto LAB_10a0ae9ac;
          }
          else if ((cStack_121 == '\x14') &&
                  ((ppppppplStack_138 == (long *******)0x6c6174654d726270 &&
                   CONCAT62(uStack_12e,sStack_130) == 0x6867756f5263696c) &&
                   iStack_128 == 0x7373656e)) goto LAB_10a0ae820;
LAB_10a0ae91c:
          pppppppuStack_e0 = (undefined8 *******)((ulong)pppppppuStack_e0 & 0xffffffffffff0000);
          uStack_a0 = 0;
          uStack_98 = 0;
          pppcStack_d0 = (char ***)0x0;
          pppcStack_d8 = (char ***)0x0;
          uStack_c0 = 0;
          uStack_c8 = 0;
          uStack_b0 = 0;
          uStack_b8 = 0;
          uStack_90 = 0;
          pppppppuVar15 = &pppppppuStack_e0;
          puStack_a8 = &uStack_a0;
          FUN_10a0e1eec(pppppppuVar15,lVar26,ppcVar10,&ppppppplStack_138);
          if ((int)pppppppuVar15 != 0) {
            if (cStack_121 < '\0') {
              ppppppplVar19 = ppppppplStack_138;
              if (CONCAT62(uStack_12e,sStack_130) == 4) goto LAB_10a0ae97c;
            }
            else if (cStack_121 == '\x04') {
              ppppppplVar19 = (long *******)&ppppppplStack_138;
LAB_10a0ae97c:
              if (*(int *)ppppppplVar19 == 0x656d616e) goto LAB_10a0ae9a4;
            }
            FUN_10a0e2488(&puStack_270,&ppppppplStack_138,&ppppppplStack_138,&pppppppuStack_e0);
          }
LAB_10a0ae9a4:
          func_0x00010a0d4004(&pppppppuStack_e0);
        }
LAB_10a0ae9ac:
        if (cStack_121 < '\0') {
          __ZdlPv(ppppppplStack_138);
        }
        func_0x00010937c698(&ppcStack_100);
      }
      func_0x00010a0c9b2c(uStack_250);
      uStack_248 = 0;
      uStack_250 = 0;
      puStack_258 = &uStack_250;
      FUN_10a0b3de4(&puStack_258,ppcVar10);
      FUN_10a0b4a84(&uStack_240,ppcVar10);
      if (cVar4 != '\0') {
        pppppppuStack_e0 = (undefined8 *******)0x0;
        pppcStack_d8 = (char ***)0x0;
        pppcStack_d0 = (char ***)0x0;
        uStack_c8 = 0x8000000000000000;
        ppcVar12 = ppcVar10;
        FUN_10a0a87b8(ppcVar10,&DAT_10f6372be,&pppppppuStack_e0);
        if ((int)ppcVar12 != 0) {
          func_0x00010937c560(&pppppppuStack_e0);
          FUN_10a0c32e4(&pppcStack_160);
          if (cStack_199 < '\0') {
            __ZdlPv(uStack_1b0);
          }
          pppcStack_1a8 = pppcStack_158;
        }
        pppppppuStack_e0 = (undefined8 *******)0x0;
        pppcStack_d8 = (char ***)0x0;
        pppcStack_d0 = (char ***)0x0;
        uStack_c8 = 0x8000000000000000;
        FUN_10a0a87b8(ppcVar10,&DAT_10f6372cc,&pppppppuStack_e0);
        if ((int)ppcVar10 != 0) {
          func_0x00010937c560(&pppppppuStack_e0);
          FUN_10a0c32e4(&pppcStack_160);
          if (cStack_1b1 < '\0') {
            __ZdlPv(uStack_1c8);
          }
          pppcStack_1c0 = pppcStack_158;
        }
      }
      lVar26 = *(long *)param_2[2];
      uVar22 = *(ulong *)(lVar26 + 0x68);
      if (uVar22 < *(ulong *)(lVar26 + 0x70)) {
        FUN_10a0e259c(uVar22,&uStack_7c0);
        lVar27 = uVar22 + 0x628;
      }
      else {
        lVar27 = uVar22 - *(long *)(lVar26 + 0x60);
        uVar22 = (lVar27 >> 3) * -0x36942462c2ec81f3 + 1;
        if (0x2995710e4b5edc < uVar22) goto LAB_10a0aee84;
        lVar20 = (long)(*(ulong *)(lVar26 + 0x70) - *(long *)(lVar26 + 0x60)) >> 3;
        uVar23 = lVar20 * -0x6d2848c585d903e6;
        if (uVar23 < uVar22 || uVar23 - uVar22 == 0) {
          uVar23 = uVar22;
        }
        if (0x14cab88725af6d < (ulong)(lVar20 * -0x36942462c2ec81f3)) {
          uVar23 = 0x2995710e4b5edc;
        }
        if (uVar23 == 0) {
          lVar20 = 0;
        }
        else {
          if (0x2995710e4b5edc < uVar23) {
            func_0x000109ffded8();
            goto LAB_10a0aee90;
          }
          lVar20 = uVar23 * 0x628;
          __Znwm();
        }
        lVar27 = lVar20 + lVar27;
        FUN_10a0e259c(lVar27,&uStack_7c0);
        lVar28 = *(long *)(lVar26 + 0x60);
        lVar3 = *(long *)(lVar26 + 0x68);
        lVar1 = lVar27 + (lVar28 - lVar3);
        lVar18 = lVar1;
        lVar25 = lVar28;
        if (lVar3 != lVar28) {
          do {
            FUN_10a0e259c(lVar18,lVar25);
            lVar25 = lVar25 + 0x628;
            lVar18 = lVar18 + 0x628;
          } while (lVar25 != lVar3);
          do {
            func_0x00010a0d3e6c(lVar28);
            lVar28 = lVar28 + 0x628;
          } while (lVar28 != lVar3);
          lVar28 = *(long *)(lVar26 + 0x60);
        }
        lVar27 = lVar27 + 0x628;
        *(long *)(lVar26 + 0x60) = lVar1;
        *(long *)(lVar26 + 0x68) = lVar27;
        *(ulong *)(lVar26 + 0x70) = lVar20 + uVar23 * 0x628;
        if (lVar28 != 0) {
          __ZdlPv(lVar28);
        }
      }
      *(long *)(lVar26 + 0x68) = lVar27;
      func_0x00010a0d3e6c(&uStack_7c0);
      func_0x00010937c698(&pcStack_800);
      ppcVar10 = &pcStack_800;
      func_0x00010937c708(ppcVar10,&pcStack_820);
    } while ((int)ppcVar10 == 0);
  }
LAB_10a0aed50:
  uVar24 = 1;
LAB_10a0aed54:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail(uVar24);
LAB_10a0aee84:
  FUN_10a0e299c();
LAB_10a0aee90:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a0aee94);
  (*pcVar7)();
}



/* Entry: 10a0af0e0; end: 10a0b091f;  */

/* WARNING: Removing unreachable block (ram,0x00010a0af5fc) */
/* WARNING: Removing unreachable block (ram,0x00010a0afc84) */
/* WARNING: Removing unreachable block (ram,0x00010a0af4a8) */
/* WARNING: Removing unreachable block (ram,0x00010a0af8fc) */
/* WARNING: Removing unreachable block (ram,0x00010a0af7a8) */
/* WARNING: Removing unreachable block (ram,0x00010a0afc74) */
/* WARNING: Removing unreachable block (ram,0x00010a0af340) */
/* WARNING: Removing unreachable block (ram,0x00010a0afbf0) */
/* WARNING: Removing unreachable block (ram,0x00010a0af658) */
/* WARNING: Removing unreachable block (ram,0x00010a0af330) */
/* WARNING: Removing unreachable block (ram,0x00010a0af7e4) */
/* WARNING: Removing unreachable block (ram,0x00010a0af798) */
/* WARNING: Removing unreachable block (ram,0x00010a0afa94) */
/* WARNING: Removing unreachable block (ram,0x00010a0afb98) */
/* WARNING: Removing unreachable block (ram,0x00010a0af8ec) */
/* WARNING: Removing unreachable block (ram,0x00010a0af498) */
/* WARNING: Removing unreachable block (ram,0x00010a0af90c) */
/* WARNING: Removing unreachable block (ram,0x00010a0af5c8) */
/* WARNING: Removing unreachable block (ram,0x00010a0aff78) */
/* WARNING: Removing unreachable block (ram,0x00010a0b0544) */
/* WARNING: Removing unreachable block (ram,0x00010a0b0524) */
/* WARNING: Removing unreachable block (ram,0x00010a0af4f8) */
/* WARNING: Removing unreachable block (ram,0x00010a0b0514) */
/* WARNING: Removing unreachable block (ram,0x00010a0b0534) */
/* WARNING: Removing unreachable block (ram,0x00010a0b0554) */
/* WARNING: Removing unreachable block (ram,0x00010a0af508) */
/* WARNING: Removing unreachable block (ram,0x00010a0af558) */
/* WARNING: Removing unreachable block (ram,0x00010a0af568) */
/* WARNING: Removing unreachable block (ram,0x00010a0af5b8) */
/* WARNING: Removing unreachable block (ram,0x00010a0b0370) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10a0af0e0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *****pppppuVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  code *pcVar6;
  int iVar7;
  char *pcVar8;
  char **ppcVar9;
  char **ppcVar10;
  char **ppcVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  undefined8 *******pppppppuVar22;
  bool bVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  char *pcStack_440;
  long lStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  char *pcStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  char acStack_400 [32];
  undefined8 ******ppppppuStack_3e0;
  undefined8 ******ppppppuStack_3d8;
  undefined8 ******ppppppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined1 auStack_3c0 [56];
  undefined8 uStack_388;
  char cStack_371;
  undefined **appuStack_360 [20];
  undefined8 *******pppppppuStack_2c0;
  undefined8 *****pppppuStack_2b8;
  undefined8 *****pppppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  int iStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  undefined8 ******ppppppuStack_1a8;
  undefined8 ******ppppppuStack_1a0;
  undefined8 ******ppppppuStack_198;
  undefined8 ******ppppppuStack_190;
  undefined8 ******ppppppuStack_188;
  undefined1 uStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 *******pppppppuStack_100;
  undefined8 *****pppppuStack_f8;
  undefined8 *****pppppuStack_f0;
  undefined8 uStack_e8;
  undefined8 *******pppppppuStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 *******pppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 *******pppppppuStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 ******ppppppuStack_80;
  undefined8 ******ppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  
  acStack_400[0] = '\0';
  acStack_400[1] = '\0';
  acStack_400[2] = '\0';
  acStack_400[3] = '\0';
  acStack_400[4] = '\0';
  acStack_400[5] = '\0';
  acStack_400[6] = '\0';
  acStack_400[7] = '\0';
  acStack_400[8] = '\0';
  acStack_400[9] = '\0';
  acStack_400[10] = '\0';
  acStack_400[0xb] = '\0';
  acStack_400[0xc] = '\0';
  acStack_400[0xd] = '\0';
  acStack_400[0xe] = '\0';
  acStack_400[0xf] = '\0';
  acStack_400[0x10] = '\0';
  acStack_400[0x11] = '\0';
  acStack_400[0x12] = '\0';
  acStack_400[0x13] = '\0';
  acStack_400[0x14] = '\0';
  acStack_400[0x15] = '\0';
  acStack_400[0x16] = '\0';
  acStack_400[0x17] = '\0';
  acStack_400[0x18] = '\0';
  acStack_400[0x19] = '\0';
  acStack_400[0x1a] = '\0';
  acStack_400[0x1b] = '\0';
  acStack_400[0x1c] = '\0';
  acStack_400[0x1d] = '\0';
  acStack_400[0x1e] = '\0';
  acStack_400[0x1f] = -0x80;
  FUN_10a0a87b8(param_1,&DAT_10f414fa3,acStack_400);
  if ((int)param_1 == 0) {
    return 1;
  }
  pcVar8 = acStack_400;
  func_0x00010937c560();
  if (*pcVar8 != '\x02') {
    return 1;
  }
  pcVar8 = acStack_400;
  func_0x00010937c560();
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 0x8000000000000000;
  cVar5 = *pcVar8;
  if (cVar5 == '\0') {
    uStack_408 = 1;
  }
  else {
    if (cVar5 == '\x02') {
      uStack_410 = **(undefined8 **)(pcVar8 + 8);
      lStack_438 = 0;
      uStack_428 = 0x8000000000000000;
      uStack_430 = *(undefined8 *)(*(long *)(pcVar8 + 8) + 8);
      goto LAB_10a0af1d0;
    }
    if (cVar5 == '\x01') {
      uStack_418 = **(undefined8 **)(pcVar8 + 8);
      uStack_430 = 0;
      uStack_428 = 0x8000000000000000;
      lStack_438 = *(long *)(pcVar8 + 8) + 8;
      goto LAB_10a0af1d0;
    }
    uStack_408 = 0;
  }
  lStack_438 = 0;
  uStack_430 = 0;
  uStack_428 = 1;
LAB_10a0af1d0:
  ppcVar9 = &pcStack_420;
  pcStack_440 = pcVar8;
  pcStack_420 = pcVar8;
  func_0x00010937c708(ppcVar9,&pcStack_440);
  if (((ulong)ppcVar9 & 1) == 0) {
    do {
      ppcVar9 = &pcStack_420;
      func_0x00010937c560();
      if (*(char *)ppcVar9 != '\x01') {
        if (*(long *)*param_2 == 0) {
          return 0;
        }
        __ZNSt3__19to_stringEi(&pppppppuStack_100,*(undefined4 *)param_2[1]);
        pppppppuVar22 = &pppppppuStack_100;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (pppppppuVar22,0,&UNK_10f63a2fa,6);
        ppppppuStack_3d8 = pppppppuVar22[1];
        ppppppuStack_3e0 = *pppppppuVar22;
        ppppppuStack_3d0 = pppppppuVar22[2];
        pppppppuVar22[1] = (undefined8 ******)0x0;
        pppppppuVar22[2] = (undefined8 ******)0x0;
        *pppppppuVar22 = (undefined8 ******)0x0;
        ppppppuVar14 = &ppppppuStack_3e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppppuVar14,&UNK_10f63a301,0x17);
        pppppuStack_2b8 = ppppppuVar14[1];
        pppppppuStack_2c0 = (undefined8 *******)*ppppppuVar14;
        pppppuStack_2b0 = ppppppuVar14[2];
        ppppppuVar14[1] = (undefined8 *****)0x0;
        ppppppuVar14[2] = (undefined8 *****)0x0;
        *ppppppuVar14 = (undefined8 *****)0x0;
        pppppuVar2 = pppppuStack_2b8;
        pppppppuVar22 = pppppppuStack_2c0;
        if (-1 < (long)pppppuStack_2b0) {
          pppppuVar2 = (undefined8 *****)((ulong)pppppuStack_2b0 >> 0x38);
          pppppppuVar22 = &pppppppuStack_2c0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (*(undefined8 *)*param_2,pppppppuVar22,pppppuVar2);
        if ((long)pppppuStack_2b0 < 0) {
          __ZdlPv(pppppppuStack_2c0);
        }
        if (-1 < (long)ppppppuStack_3d0) {
          return 0;
        }
        __ZdlPv(ppppppuStack_3e0);
        return 0;
      }
      pppppppuStack_2c0 = (undefined8 *******)0x0;
      pppppuStack_2b8 = (undefined8 *****)0x0;
      pppppuStack_2b0 = (undefined8 *****)0x0;
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_290 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1f0 = 0;
      uStack_1d0 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_180 = 0;
      ppppppuStack_198 = (undefined8 ******)0x0;
      ppppppuStack_1a0 = (undefined8 ******)0x0;
      ppppppuStack_188 = (undefined8 ******)0x0;
      ppppppuStack_190 = (undefined8 ******)0x0;
      ppppppuStack_1a8 = (undefined8 ******)0x0;
      ppppppuStack_1b0 = (undefined8 ******)0x0;
      iStack_278 = -1;
      uStack_2a8 = 0xffffffffffffffff;
      uStack_2a0 = 0xffffffffffffffff;
      uStack_298 = 0xffffffff;
      uVar4 = *(undefined4 *)param_2[1];
      lVar26 = *(long *)*param_2;
      lVar20 = param_2[3];
      lVar27 = *(long *)param_2[2];
      cVar5 = *(char *)(lVar20 + 0x12);
      uVar24 = param_2[4];
      uVar16 = *(undefined8 *)(lVar20 + 0x48);
      ppppppuStack_3e0 = (undefined8 ******)0x0;
      ppppppuStack_3d8 = (undefined8 ******)0x0;
      ppppppuStack_3d0 = (undefined8 ******)0x0;
      ppuStack_3c8 = (undefined **)0x8000000000000000;
      ppcVar10 = ppcVar9;
      puStack_1e8 = &uStack_1e0;
      puStack_1c8 = &uStack_1c0;
      FUN_10a0a87b8();
      ppcVar11 = ppcVar9;
      FUN_10a0a87b8(ppcVar9,"uri",&ppppppuStack_3e0);
      func_0x000107c2b054(&pppppppuStack_100,&DAT_10f68f148);
      ppppppuStack_80 = (undefined8 ******)0x0;
      ppppppuStack_78 = (undefined8 ******)0x0;
      ppppppuStack_70 = (undefined8 ******)0x0;
      FUN_10a0cdaf8(&pppppppuStack_2c0,lVar26,ppcVar9,&pppppppuStack_100,0,&ppppppuStack_80);
      uVar21 = (uint)ppcVar10;
      if ((uVar21 & (uint)ppcVar11) == 1) {
        if (lVar26 != 0) {
          __ZNSt3__19to_stringEi(&pppppppuStack_e0,uVar4);
          pppppppuVar22 = &pppppppuStack_e0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppppppuVar22,0,&UNK_10f63a373,0x54);
          ppppppuStack_b8 = pppppppuVar22[1];
          pppppppuStack_c0 = (undefined8 *******)*pppppppuVar22;
          ppppppuStack_b0 = pppppppuVar22[2];
          pppppppuVar22[1] = (undefined8 ******)0x0;
          pppppppuVar22[2] = (undefined8 ******)0x0;
          *pppppppuVar22 = (undefined8 ******)0x0;
          pppppppuVar22 = &pppppppuStack_c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar22,&UNK_10f63777f,10);
          pppppppuStack_98 = (undefined8 *******)pppppppuVar22[1];
          pppppppuStack_a0 = (undefined8 *******)*pppppppuVar22;
          ppppppuStack_90 = pppppppuVar22[2];
          pppppppuVar22[1] = (undefined8 ******)0x0;
          pppppppuVar22[2] = (undefined8 ******)0x0;
          *pppppppuVar22 = (undefined8 ******)0x0;
          pppppuVar2 = pppppuStack_2b8;
          pppppppuVar22 = pppppppuStack_2c0;
          if (-1 < (long)pppppuStack_2b0) {
            pppppuVar2 = (undefined8 *****)((ulong)pppppuStack_2b0 >> 0x38);
            pppppppuVar22 = &pppppppuStack_2c0;
          }
          pppppppuVar15 = &pppppppuStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar15,pppppppuVar22,pppppuVar2);
          ppppppuStack_78 = pppppppuVar15[1];
          ppppppuStack_80 = *pppppppuVar15;
          ppppppuStack_70 = pppppppuVar15[2];
          pppppppuVar15[1] = (undefined8 ******)0x0;
          pppppppuVar15[2] = (undefined8 ******)0x0;
          *pppppppuVar15 = (undefined8 ******)0x0;
          ppppppuVar14 = &ppppppuStack_80;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppuVar14,&UNK_10f63a068,2);
          pppppuStack_f8 = ppppppuVar14[1];
          pppppppuStack_100 = (undefined8 *******)*ppppppuVar14;
          pppppuStack_f0 = ppppppuVar14[2];
          ppppppuVar14[1] = (undefined8 *****)0x0;
          ppppppuVar14[2] = (undefined8 *****)0x0;
          *ppppppuVar14 = (undefined8 *****)0x0;
          pppppuVar2 = pppppuStack_f8;
          pppppppuVar22 = pppppppuStack_100;
          if (-1 < (long)pppppuStack_f0) {
            pppppuVar2 = (undefined8 *****)((ulong)pppppuStack_f0 >> 0x38);
            pppppppuVar22 = &pppppppuStack_100;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (lVar26,pppppppuVar22,pppppuVar2);
        }
        goto LAB_10a0b055c;
      }
      if (((uVar21 | (uint)ppcVar11) & 1) == 0) {
        if (lVar26 != 0) {
          __ZNSt3__19to_stringEi(&pppppppuStack_e0,uVar4);
          pppppppuVar22 = &pppppppuStack_e0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (pppppppuVar22,0,&UNK_10f63a3c8,0x3a);
          ppppppuStack_b8 = pppppppuVar22[1];
          pppppppuStack_c0 = (undefined8 *******)*pppppppuVar22;
          ppppppuStack_b0 = pppppppuVar22[2];
          pppppppuVar22[1] = (undefined8 ******)0x0;
          pppppppuVar22[2] = (undefined8 ******)0x0;
          *pppppppuVar22 = (undefined8 ******)0x0;
          pppppppuVar22 = &pppppppuStack_c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar22,&UNK_10f63777f,10);
          pppppppuStack_98 = (undefined8 *******)pppppppuVar22[1];
          pppppppuStack_a0 = (undefined8 *******)*pppppppuVar22;
          ppppppuStack_90 = pppppppuVar22[2];
          pppppppuVar22[1] = (undefined8 ******)0x0;
          pppppppuVar22[2] = (undefined8 ******)0x0;
          *pppppppuVar22 = (undefined8 ******)0x0;
          pppppuVar2 = pppppuStack_2b8;
          pppppppuVar22 = pppppppuStack_2c0;
          if (-1 < (long)pppppuStack_2b0) {
            pppppuVar2 = (undefined8 *****)((ulong)pppppuStack_2b0 >> 0x38);
            pppppppuVar22 = &pppppppuStack_2c0;
          }
          pppppppuVar15 = &pppppppuStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar15,pppppppuVar22,pppppuVar2);
          ppppppuStack_78 = pppppppuVar15[1];
          ppppppuStack_80 = *pppppppuVar15;
          ppppppuStack_70 = pppppppuVar15[2];
          pppppppuVar15[1] = (undefined8 ******)0x0;
          pppppppuVar15[2] = (undefined8 ******)0x0;
          *pppppppuVar15 = (undefined8 ******)0x0;
          ppppppuVar14 = &ppppppuStack_80;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppuVar14,&UNK_10f63a068,2);
          pppppuStack_f8 = ppppppuVar14[1];
          pppppppuStack_100 = (undefined8 *******)*ppppppuVar14;
          pppppuStack_f0 = ppppppuVar14[2];
          ppppppuVar14[1] = (undefined8 *****)0x0;
          ppppppuVar14[2] = (undefined8 *****)0x0;
          *ppppppuVar14 = (undefined8 *****)0x0;
          pppppuVar2 = pppppuStack_f8;
          pppppppuVar22 = pppppppuStack_100;
          if (-1 < (long)pppppuStack_f0) {
            pppppuVar2 = (undefined8 *****)((ulong)pppppuStack_f0 >> 0x38);
            pppppppuVar22 = &pppppppuStack_100;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (lVar26,pppppppuVar22,pppppuVar2);
        }
        goto LAB_10a0b055c;
      }
      FUN_10a0b3de4(&puStack_1c8,ppcVar9);
      FUN_10a0b4a84(&uStack_240,ppcVar9);
      if (cVar5 != '\0') {
        pppppppuStack_100 = (undefined8 *******)0x0;
        pppppuStack_f8 = (undefined8 *****)0x0;
        pppppuStack_f0 = (undefined8 *****)0x0;
        uStack_e8 = 0x8000000000000000;
        ppcVar10 = ppcVar9;
        FUN_10a0a87b8(ppcVar9,&DAT_10f6372be,&pppppppuStack_100);
        if ((int)ppcVar10 != 0) {
          func_0x00010937c560(&pppppppuStack_100);
          FUN_10a0c32e4(&ppppppuStack_80);
          if ((long)ppppppuStack_188 < 0) {
            __ZdlPv(ppppppuStack_198);
          }
          ppppppuStack_190 = ppppppuStack_78;
          ppppppuStack_198 = ppppppuStack_80;
          ppppppuStack_188 = ppppppuStack_70;
        }
        pppppppuStack_100 = (undefined8 *******)0x0;
        pppppuStack_f8 = (undefined8 *****)0x0;
        pppppuStack_f0 = (undefined8 *****)0x0;
        uStack_e8 = 0x8000000000000000;
        ppcVar10 = ppcVar9;
        FUN_10a0a87b8(ppcVar9,&DAT_10f6372cc,&pppppppuStack_100);
        if ((int)ppcVar10 != 0) {
          func_0x00010937c560(&pppppppuStack_100);
          FUN_10a0c32e4(&ppppppuStack_80);
          if ((long)ppppppuStack_1a0 < 0) {
            __ZdlPv(ppppppuStack_1b0);
          }
          ppppppuStack_1a8 = ppppppuStack_78;
          ppppppuStack_1b0 = ppppppuStack_80;
          ppppppuStack_1a0 = ppppppuStack_70;
        }
      }
      if (uVar21 == 0) {
        pppppppuStack_100 = (undefined8 *******)0x0;
        pppppuStack_f8 = (undefined8 *****)0x0;
        pppppuStack_f0 = (undefined8 *****)0x0;
        ppppppuStack_80 = (undefined8 ******)0x0;
        ppppppuStack_78 = (undefined8 ******)0x0;
        ppppppuStack_70 = (undefined8 ******)0x0;
        func_0x000107c2b054(&pppppppuStack_a0,"uri");
        pppppppuStack_c0 = (undefined8 *******)0x0;
        ppppppuStack_b8 = (undefined8 ******)0x0;
        ppppppuStack_b0 = (undefined8 ******)0x0;
        pppppppuVar22 = &pppppppuStack_100;
        FUN_10a0cdaf8(pppppppuVar22,&ppppppuStack_80,ppcVar9,&pppppppuStack_a0,1,&pppppppuStack_c0);
        if (((ulong)pppppppuVar22 & 1) == 0) {
          if (lVar26 != 0) {
            __ZNSt3__19to_stringEi(&uStack_140,uVar4);
            puVar12 = &uStack_140;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (puVar12,0,&UNK_10f63a430,0x20);
            uStack_118 = puVar12[1];
            uStack_120 = *puVar12;
            lStack_110 = puVar12[2];
            puVar12[1] = 0;
            puVar12[2] = 0;
            *puVar12 = 0;
            puVar12 = &uStack_120;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (puVar12,&UNK_10f63777f,10);
            uStack_d8 = puVar12[1];
            pppppppuStack_e0 = (undefined8 *******)*puVar12;
            uStack_d0 = puVar12[2];
            puVar12[1] = 0;
            puVar12[2] = 0;
            *puVar12 = 0;
            pppppuVar2 = pppppuStack_2b8;
            pppppppuVar22 = pppppppuStack_2c0;
            if (-1 < (long)pppppuStack_2b0) {
              pppppuVar2 = (undefined8 *****)((ulong)pppppuStack_2b0 >> 0x38);
              pppppppuVar22 = &pppppppuStack_2c0;
            }
            pppppppuVar15 = &pppppppuStack_e0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppppuVar15,pppppppuVar22,pppppuVar2);
            ppppppuStack_b8 = pppppppuVar15[1];
            pppppppuStack_c0 = (undefined8 *******)*pppppppuVar15;
            ppppppuStack_b0 = pppppppuVar15[2];
            pppppppuVar15[1] = (undefined8 ******)0x0;
            pppppppuVar15[2] = (undefined8 ******)0x0;
            *pppppppuVar15 = (undefined8 ******)0x0;
            pppppppuVar22 = &pppppppuStack_c0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppppuVar22,&UNK_10f63a451,3);
            pppppppuStack_98 = (undefined8 *******)pppppppuVar22[1];
            pppppppuStack_a0 = (undefined8 *******)*pppppppuVar22;
            ppppppuStack_90 = pppppppuVar22[2];
            pppppppuVar22[1] = (undefined8 ******)0x0;
            pppppppuVar22[2] = (undefined8 ******)0x0;
            *pppppppuVar22 = (undefined8 ******)0x0;
            pppppppuVar22 = pppppppuStack_98;
            pppppppuVar15 = pppppppuStack_a0;
            if (-1 < (long)ppppppuStack_90) {
              pppppppuVar22 = (undefined8 *******)((ulong)ppppppuStack_90 >> 0x38);
              pppppppuVar15 = &pppppppuStack_a0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (lVar26,pppppppuVar15,pppppppuVar22);
            if (lStack_110 < 0) {
              __ZdlPv(uStack_120);
            }
            if (lStack_130 < 0) {
              __ZdlPv(uStack_140);
            }
          }
          pppppppuVar22 = (undefined8 *******)0x0;
        }
        else {
          pppppppuStack_a0 = (undefined8 *******)0x0;
          pppppppuStack_98 = (undefined8 *******)0x0;
          ppppppuStack_90 = (undefined8 ******)0x0;
          iVar7 = (int)&pppppppuStack_100;
          FUN_10a0a58d4();
          if (iVar7 == 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_258,&pppppppuStack_100);
            FUN_10a0dde84(&pppppppuStack_c0,&pppppppuStack_100);
            pppppppuVar15 = &pppppppuStack_a0;
            FUN_10a0de00c(pppppppuVar15,lVar26,lVar27,&pppppppuStack_c0,uVar24,0,0,0,lVar20 + 0x18);
            if (((ulong)pppppppuVar15 & 1) == 0) {
              if (lVar27 != 0) {
                __ZNSt3__19to_stringEi(auStack_178,uVar4);
                puVar12 = auStack_178;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                          (puVar12,0,&UNK_10f63a485,0x28);
                uStack_158 = puVar12[1];
                uStack_160 = *puVar12;
                lStack_150 = puVar12[2];
                puVar12[1] = 0;
                puVar12[2] = 0;
                *puVar12 = 0;
                puVar12 = &uStack_160;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (puVar12,&UNK_10f63a477,10);
                uStack_138 = puVar12[1];
                uStack_140 = *puVar12;
                lStack_130 = puVar12[2];
                puVar12[1] = 0;
                puVar12[2] = 0;
                *puVar12 = 0;
                pppppuVar2 = pppppuStack_2b8;
                pppppppuVar22 = pppppppuStack_2c0;
                if (-1 < (long)pppppuStack_2b0) {
                  pppppuVar2 = (undefined8 *****)((ulong)pppppuStack_2b0 >> 0x38);
                  pppppppuVar22 = &pppppppuStack_2c0;
                }
                puVar12 = &uStack_140;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (puVar12,pppppppuVar22,pppppuVar2);
                uStack_118 = puVar12[1];
                uStack_120 = *puVar12;
                lStack_110 = puVar12[2];
                puVar12[1] = 0;
                puVar12[2] = 0;
                *puVar12 = 0;
                puVar12 = &uStack_120;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (puVar12,&UNK_10f63a482,2);
                uStack_d8 = puVar12[1];
                pppppppuStack_e0 = (undefined8 *******)*puVar12;
                uStack_d0 = puVar12[2];
                puVar12[1] = 0;
                puVar12[2] = 0;
                *puVar12 = 0;
                uVar19 = uStack_d8;
                pppppppuVar22 = pppppppuStack_e0;
                if (-1 < (long)uStack_d0) {
                  uVar19 = uStack_d0 >> 0x38;
                  pppppppuVar22 = &pppppppuStack_e0;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (lVar27,pppppppuVar22,uVar19);
                if (lStack_110 < 0) {
                  __ZdlPv(uStack_120);
                }
                if (lStack_130 < 0) {
                  __ZdlPv(uStack_140);
                }
                if (lStack_150 < 0) {
                  __ZdlPv(uStack_160);
                }
                if (cStack_161 < '\0') {
                  __ZdlPv(auStack_178[0]);
                }
              }
              bVar23 = false;
              pppppppuVar22 = (undefined8 *******)0x1;
            }
            else if (pppppppuStack_a0 == pppppppuStack_98) {
              if (lVar27 != 0) {
                __ZNSt3__19to_stringEi(auStack_178,uVar4);
                FUN_109feb280(&uStack_160,&UNK_10f63a4ae,auStack_178);
                FUN_10a012db0(&uStack_140,&uStack_160,&UNK_10f63a477);
                pppppuVar2 = pppppuStack_2b8;
                pppppppuVar22 = pppppppuStack_2c0;
                if (-1 < (long)pppppuStack_2b0) {
                  pppppuVar2 = (undefined8 *****)((ulong)pppppuStack_2b0 >> 0x38);
                  pppppppuVar22 = &pppppppuStack_2c0;
                }
                puVar12 = &uStack_140;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (puVar12,pppppppuVar22,pppppuVar2);
                uStack_118 = puVar12[1];
                uStack_120 = *puVar12;
                lStack_110 = puVar12[2];
                puVar12[1] = 0;
                puVar12[2] = 0;
                *puVar12 = 0;
                FUN_10a012db0(&pppppppuStack_e0,&uStack_120,&UNK_10f63a4cd);
                uVar19 = uStack_d8;
                pppppppuVar22 = pppppppuStack_e0;
                if (-1 < (long)uStack_d0) {
                  uVar19 = uStack_d0 >> 0x38;
                  pppppppuVar22 = &pppppppuStack_e0;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (lVar27,pppppppuVar22,uVar19);
                if (lStack_110 < 0) {
                  __ZdlPv(uStack_120);
                }
                if (lStack_130 < 0) {
                  __ZdlPv(uStack_140);
                }
                if (lStack_150 < 0) {
                  __ZdlPv(uStack_160);
                }
                if (cStack_161 < '\0') {
                  __ZdlPv(auStack_178[0]);
                }
              }
              pppppppuVar22 = (undefined8 *******)0x0;
              bVar23 = false;
            }
            else {
              bVar23 = true;
            }
            if (bVar23) goto LAB_10a0afbfc;
          }
          else {
            pppppppuVar22 = &pppppppuStack_a0;
            FUN_10a0a5e98(pppppppuVar22,&uStack_270,&pppppppuStack_100,0,0);
            if (((ulong)pppppppuVar22 & 1) == 0) {
              if (lVar26 != 0) {
                __ZNSt3__19to_stringEi(&uStack_160,uVar4);
                puVar12 = &uStack_160;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                          (puVar12,0,&UNK_10f63a455,0x21);
                uStack_138 = puVar12[1];
                uStack_140 = *puVar12;
                lStack_130 = puVar12[2];
                puVar12[1] = 0;
                puVar12[2] = 0;
                *puVar12 = 0;
                puVar12 = &uStack_140;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (puVar12,&UNK_10f63a477,10);
                uStack_118 = puVar12[1];
                uStack_120 = *puVar12;
                lStack_110 = puVar12[2];
                puVar12[1] = 0;
                puVar12[2] = 0;
                *puVar12 = 0;
                pppppuVar2 = pppppuStack_2b8;
                pppppppuVar22 = pppppppuStack_2c0;
                if (-1 < (long)pppppuStack_2b0) {
                  pppppuVar2 = (undefined8 *****)((ulong)pppppuStack_2b0 >> 0x38);
                  pppppppuVar22 = &pppppppuStack_2c0;
                }
                puVar12 = &uStack_120;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (puVar12,pppppppuVar22,pppppuVar2);
                uStack_d8 = puVar12[1];
                pppppppuStack_e0 = (undefined8 *******)*puVar12;
                uStack_d0 = puVar12[2];
                puVar12[1] = 0;
                puVar12[2] = 0;
                *puVar12 = 0;
                pppppppuVar22 = &pppppppuStack_e0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppuVar22,&UNK_10f63a482,2);
                ppppppuStack_b8 = pppppppuVar22[1];
                pppppppuStack_c0 = (undefined8 *******)*pppppppuVar22;
                ppppppuStack_b0 = pppppppuVar22[2];
                pppppppuVar22[1] = (undefined8 ******)0x0;
                pppppppuVar22[2] = (undefined8 ******)0x0;
                *pppppppuVar22 = (undefined8 ******)0x0;
                ppppppuVar14 = ppppppuStack_b8;
                pppppppuVar22 = pppppppuStack_c0;
                if (-1 < (long)ppppppuStack_b0) {
                  ppppppuVar14 = (undefined8 ******)((ulong)ppppppuStack_b0 >> 0x38);
                  pppppppuVar22 = &pppppppuStack_c0;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (lVar26,pppppppuVar22,ppppppuVar14);
                if (lStack_110 < 0) {
                  __ZdlPv(uStack_120);
                }
                if (lStack_130 < 0) {
                  __ZdlPv(uStack_140);
                }
                if (lStack_150 < 0) {
                  __ZdlPv(uStack_160);
                }
              }
            }
            else {
LAB_10a0afbfc:
              if (*(code **)(lVar20 + 0x40) != (code *)0x0) {
                if (pppppppuStack_98 == pppppppuStack_a0) {
                  FUN_10a0cd3e4();
                  goto LAB_10a0b0580;
                }
                pppppppuVar22 = &pppppppuStack_2c0;
                (**(code **)(lVar20 + 0x40))
                          (pppppppuVar22,uVar4,lVar26,lVar27,0,0,pppppppuStack_a0,
                           (int)pppppppuStack_98 - (int)pppppppuStack_a0,uVar16);
                goto LAB_10a0afc5c;
              }
              if (lVar26 != 0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (lVar26,&UNK_10f63a34d,0x25);
              }
            }
            pppppppuVar22 = (undefined8 *******)0x0;
          }
LAB_10a0afc5c:
          if (pppppppuStack_a0 != (undefined8 *******)0x0) {
            pppppppuStack_98 = pppppppuStack_a0;
            __ZdlPv();
          }
        }
        if (((ulong)pppppppuVar22 & 1) == 0) goto LAB_10a0b055c;
      }
      else {
        uStack_120 = CONCAT44(uStack_120._4_4_,0xffffffff);
        func_0x000107c2b054(&pppppppuStack_100,&UNK_10f638a6e);
        func_0x000107c2b054(&ppppppuStack_80,"");
        puVar12 = &uStack_120;
        FUN_10a0deaa0(puVar12,lVar26,ppcVar9,&pppppppuStack_100,1,&ppppppuStack_80);
        if (((ulong)puVar12 & 1) == 0) {
          if (lVar26 != 0) {
            __ZNSt3__19to_stringEi(&pppppppuStack_e0,uVar4);
            pppppppuVar22 = &pppppppuStack_e0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                      (pppppppuVar22,0,&UNK_10f63a403,0x27);
            ppppppuStack_b8 = pppppppuVar22[1];
            pppppppuStack_c0 = (undefined8 *******)*pppppppuVar22;
            ppppppuStack_b0 = pppppppuVar22[2];
            pppppppuVar22[1] = (undefined8 ******)0x0;
            pppppppuVar22[2] = (undefined8 ******)0x0;
            *pppppppuVar22 = (undefined8 ******)0x0;
            pppppppuVar22 = &pppppppuStack_c0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppppuVar22,&UNK_10f63777f,10);
            pppppppuStack_98 = (undefined8 *******)pppppppuVar22[1];
            pppppppuStack_a0 = (undefined8 *******)*pppppppuVar22;
            ppppppuStack_90 = pppppppuVar22[2];
            pppppppuVar22[1] = (undefined8 ******)0x0;
            pppppppuVar22[2] = (undefined8 ******)0x0;
            *pppppppuVar22 = (undefined8 ******)0x0;
            pppppuVar2 = pppppuStack_2b8;
            pppppppuVar22 = pppppppuStack_2c0;
            if (-1 < (long)pppppuStack_2b0) {
              pppppuVar2 = (undefined8 *****)((ulong)pppppuStack_2b0 >> 0x38);
              pppppppuVar22 = &pppppppuStack_2c0;
            }
            pppppppuVar15 = &pppppppuStack_a0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppppuVar15,pppppppuVar22,pppppuVar2);
            ppppppuStack_78 = pppppppuVar15[1];
            ppppppuStack_80 = *pppppppuVar15;
            ppppppuStack_70 = pppppppuVar15[2];
            pppppppuVar15[1] = (undefined8 ******)0x0;
            pppppppuVar15[2] = (undefined8 ******)0x0;
            *pppppppuVar15 = (undefined8 ******)0x0;
            ppppppuVar14 = &ppppppuStack_80;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppppppuVar14,&UNK_10f63a068,2);
            pppppuStack_f8 = ppppppuVar14[1];
            pppppppuStack_100 = (undefined8 *******)*ppppppuVar14;
            pppppuStack_f0 = ppppppuVar14[2];
            ppppppuVar14[1] = (undefined8 *****)0x0;
            ppppppuVar14[2] = (undefined8 *****)0x0;
            *ppppppuVar14 = (undefined8 *****)0x0;
            pppppuVar2 = pppppuStack_f8;
            pppppppuVar22 = pppppppuStack_100;
            if (-1 < (long)pppppuStack_f0) {
              pppppuVar2 = (undefined8 *****)((ulong)pppppuStack_f0 >> 0x38);
              pppppppuVar22 = &pppppppuStack_100;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (lVar26,pppppppuVar22,pppppuVar2);
          }
          goto LAB_10a0b055c;
        }
        pppppppuStack_100 = (undefined8 *******)0x0;
        pppppuStack_f8 = (undefined8 *****)0x0;
        pppppuStack_f0 = (undefined8 *****)0x0;
        func_0x000107c2b054(&ppppppuStack_80,&DAT_10f637b7c);
        pppppppuStack_a0 = (undefined8 *******)0x0;
        pppppppuStack_98 = (undefined8 *******)0x0;
        ppppppuStack_90 = (undefined8 ******)0x0;
        FUN_10a0cdaf8(&pppppppuStack_100,lVar26,ppcVar9,&ppppppuStack_80,0,&pppppppuStack_a0);
        pppppppuStack_c0 = (undefined8 *******)((ulong)pppppppuStack_c0 & 0xffffffff00000000);
        func_0x000107c2b054(&ppppppuStack_80,"width");
        func_0x000107c2b054(&pppppppuStack_a0,"");
        FUN_10a0deaa0(&pppppppuStack_c0,lVar26,ppcVar9,&ppppppuStack_80,0,&pppppppuStack_a0);
        pppppppuStack_e0 = (undefined8 *******)((ulong)pppppppuStack_e0 & 0xffffffff00000000);
        func_0x000107c2b054(&ppppppuStack_80,"height");
        func_0x000107c2b054(&pppppppuStack_a0,"");
        FUN_10a0deaa0(&pppppppuStack_e0,lVar26,ppcVar9,&ppppppuStack_80,0,&pppppppuStack_a0);
        iStack_278 = (int)uStack_120;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_270,&pppppppuStack_100);
        uStack_2a8 = CONCAT44(pppppppuStack_e0._0_4_,(int)pppppppuStack_c0);
      }
      if (iStack_278 != -1) {
        lVar26 = *(long *)param_2[5];
        uVar19 = (*(long *)(lVar26 + 0x50) - *(long *)(lVar26 + 0x48) >> 3) * 0xf83e0f83e0f83e1;
        if (uVar19 < (ulong)(long)iStack_278 || uVar19 - (long)iStack_278 == 0) {
          if (*(long *)*param_2 == 0) goto LAB_10a0b055c;
          FUN_109febc44(&ppppppuStack_3e0);
          ppppppuVar14 = &ppppppuStack_3d0;
          FUN_10a002568(ppppppuVar14,&UNK_10f63a2fa,6);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
          FUN_10a002568();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
          FUN_10a002568();
          __ZNKSt3__18ios_base6getlocEv
                    (&pppppppuStack_100,(long)ppppppuVar14 + (long)(*ppppppuVar14)[-3]);
          pppppppuVar22 = &pppppppuStack_100;
          __ZNKSt3__16locale9use_facetERNS0_2idE
                    (pppppppuVar22,PTR___ZNSt3__15ctypeIcE2idE_110346770);
          (*(code *)(*pppppppuVar22)[7])();
          __ZNSt3__16localeD1Ev(&pppppppuStack_100);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(ppppppuVar14,pppppppuVar22);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(ppppppuVar14);
          func_0x00010a002480(&pppppppuStack_100,&ppuStack_3c8,&ppppppuStack_80);
          pppppuVar2 = pppppuStack_f8;
          pppppppuVar22 = pppppppuStack_100;
          if (-1 < (long)pppppuStack_f0) {
            pppppuVar2 = (undefined8 *****)((ulong)pppppuStack_f0 >> 0x38);
            pppppppuVar22 = &pppppppuStack_100;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (*(undefined8 *)*param_2,pppppppuVar22,pppppuVar2);
        }
        else {
          lVar27 = *(long *)(lVar26 + 0x48) + (long)iStack_278 * 0x108;
          iVar7 = *(int *)(lVar27 + 0x18);
          uVar19 = (*(long *)(lVar26 + 0x38) - *(long *)(lVar26 + 0x30) >> 3) * 0xf83e0f83e0f83e1;
          if ((ulong)(long)iVar7 <= uVar19 && uVar19 - (long)iVar7 != 0) {
            if (*(code **)(lVar20 + 0x40) == (code *)0x0) {
              if (*(long *)*param_2 != 0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (*(long *)*param_2,&UNK_10f63a34d,0x25);
              }
              goto LAB_10a0b055c;
            }
            lVar17 = *(long *)(lVar26 + 0x30) + (long)iVar7 * 0x108;
            lVar26 = *(long *)(lVar17 + 0x18);
            if ((ulong)(*(long *)(lVar17 + 0x20) - lVar26) <= *(ulong *)(lVar27 + 0x20))
            goto LAB_10a0b0580;
            pppppppuVar22 = &pppppppuStack_2c0;
            (**(code **)(lVar20 + 0x40))
                      (pppppppuVar22,*(undefined4 *)param_2[1],*(undefined8 *)*param_2,
                       *(undefined8 *)param_2[2],uStack_2a8 & 0xffffffff,uStack_2a8._4_4_,
                       lVar26 + *(ulong *)(lVar27 + 0x20),*(undefined4 *)(lVar27 + 0x28),
                       *(undefined8 *)(lVar20 + 0x48));
            if ((int)pppppppuVar22 == 0) goto LAB_10a0b055c;
            goto LAB_10a0afd48;
          }
          if (*(long *)*param_2 == 0) goto LAB_10a0b055c;
          FUN_109febc44(&ppppppuStack_3e0);
          ppppppuVar14 = &ppppppuStack_3d0;
          FUN_10a002568(ppppppuVar14,&UNK_10f63a2fa,6);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
          FUN_10a002568();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
          FUN_10a002568();
          __ZNKSt3__18ios_base6getlocEv
                    (&pppppppuStack_100,(long)ppppppuVar14 + (long)(*ppppppuVar14)[-3]);
          pppppppuVar22 = &pppppppuStack_100;
          __ZNKSt3__16locale9use_facetERNS0_2idE
                    (pppppppuVar22,PTR___ZNSt3__15ctypeIcE2idE_110346770);
          (*(code *)(*pppppppuVar22)[7])();
          __ZNSt3__16localeD1Ev(&pppppppuStack_100);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(ppppppuVar14,pppppppuVar22);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(ppppppuVar14);
          func_0x00010a002480(&pppppppuStack_100,&ppuStack_3c8,&ppppppuStack_80);
          pppppuVar2 = pppppuStack_f8;
          pppppppuVar22 = pppppppuStack_100;
          if (-1 < (long)pppppuStack_f0) {
            pppppuVar2 = (undefined8 *****)((ulong)pppppuStack_f0 >> 0x38);
            pppppppuVar22 = &pppppppuStack_100;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (*(undefined8 *)*param_2,pppppppuVar22,pppppuVar2);
        }
        ppppppuStack_3e0 = (undefined8 ******)&PTR_SUB_1108a5a38;
        ppppppuStack_3d0 = (undefined8 ******)&PTR_DAT_1108a5a60;
        appuStack_360[0] = &PTR_DAT_1108a5a88;
        ppuStack_3c8 = &PTR_DAT_11088d7b0;
        if (cStack_371 < '\0') {
          __ZdlPv(uStack_388);
        }
        ppuStack_3c8 = (undefined **)
                       (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
        __ZNSt3__16localeD1Ev(auStack_3c0);
        __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&ppppppuStack_3e0,&PTR_PTR_1108a5aa0);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_360);
LAB_10a0b055c:
        func_0x00010a0d3d7c(&pppppppuStack_2c0);
        return 0;
      }
LAB_10a0afd48:
      lVar20 = *(long *)param_2[5];
      uVar19 = *(ulong *)(lVar20 + 200);
      if (uVar19 < *(ulong *)(lVar20 + 0xd0)) {
        FUN_10a0e29b0(uVar19,&pppppppuStack_2c0);
        lVar26 = uVar19 + 0x148;
      }
      else {
        lVar26 = uVar19 - *(long *)(lVar20 + 0xc0);
        uVar19 = (lVar26 >> 3) * -0x7063e7063e7063e7 + 1;
        if (0xc7ce0c7ce0c7ce < uVar19) {
          FUN_10a0e2ad0();
LAB_10a0b0580:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a0b0584);
          (*pcVar6)();
        }
        lVar27 = (long)(*(ulong *)(lVar20 + 0xd0) - *(long *)(lVar20 + 0xc0)) >> 3;
        uVar18 = lVar27 * 0x1f3831f3831f3832;
        if (uVar18 < uVar19 || uVar18 - uVar19 == 0) {
          uVar18 = uVar19;
        }
        if (0x63e7063e7063e6 < (ulong)(lVar27 * -0x7063e7063e7063e7)) {
          uVar18 = 0xc7ce0c7ce0c7ce;
        }
        if (uVar18 == 0) {
          lVar27 = 0;
        }
        else {
          if (0xc7ce0c7ce0c7ce < uVar18) {
            func_0x000109ffded8();
            goto LAB_10a0b0580;
          }
          lVar27 = uVar18 * 0x148;
          __Znwm();
        }
        lVar26 = lVar27 + lVar26;
        FUN_10a0e29b0(lVar26,&pppppppuStack_2c0);
        lVar25 = *(long *)(lVar20 + 0xc0);
        lVar3 = *(long *)(lVar20 + 200);
        lVar1 = lVar26 + (lVar25 - lVar3);
        lVar13 = lVar1;
        lVar17 = lVar25;
        if (lVar3 != lVar25) {
          do {
            FUN_10a0e29b0(lVar13,lVar17);
            lVar17 = lVar17 + 0x148;
            lVar13 = lVar13 + 0x148;
          } while (lVar17 != lVar3);
          do {
            func_0x00010a0d3d7c(lVar25);
            lVar25 = lVar25 + 0x148;
          } while (lVar25 != lVar3);
          lVar25 = *(long *)(lVar20 + 0xc0);
        }
        lVar26 = lVar26 + 0x148;
        *(long *)(lVar20 + 0xc0) = lVar1;
        *(long *)(lVar20 + 200) = lVar26;
        *(ulong *)(lVar20 + 0xd0) = lVar27 + uVar18 * 0x148;
        if (lVar25 != 0) {
          __ZdlPv(lVar25);
        }
      }
      *(long *)(lVar20 + 200) = lVar26;
      *(int *)param_2[1] = *(int *)param_2[1] + 1;
      func_0x00010a0d3d7c(&pppppppuStack_2c0);
      func_0x00010937c698(&pcStack_420);
      ppcVar9 = &pcStack_420;
      func_0x00010937c708(ppcVar9,&pcStack_440);
    } while ((int)ppcVar9 == 0);
  }
  return 1;
}



/* Entry: 10a0b0920; end: 10a0b0eb3;  */

/* WARNING: Removing unreachable block (ram,0x00010a0b0c88) */
/* WARNING: Removing unreachable block (ram,0x00010a0b0af0) */
/* WARNING: Removing unreachable block (ram,0x00010a0b0b58) */
/* WARNING: Removing unreachable block (ram,0x00010a0b0b00) */
/* WARNING: Removing unreachable block (ram,0x00010a0b0b48) */
/* WARNING: Removing unreachable block (ram,0x00010a0b0c98) */

undefined8 FUN_10a0b0920(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char **ppcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  char *pcStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  char *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  char acStack_1a8 [32];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 uStack_70;
  undefined4 auStack_6c [3];
  
  acStack_1a8[0] = '\0';
  acStack_1a8[1] = '\0';
  acStack_1a8[2] = '\0';
  acStack_1a8[3] = '\0';
  acStack_1a8[4] = '\0';
  acStack_1a8[5] = '\0';
  acStack_1a8[6] = '\0';
  acStack_1a8[7] = '\0';
  acStack_1a8[8] = '\0';
  acStack_1a8[9] = '\0';
  acStack_1a8[10] = '\0';
  acStack_1a8[0xb] = '\0';
  acStack_1a8[0xc] = '\0';
  acStack_1a8[0xd] = '\0';
  acStack_1a8[0xe] = '\0';
  acStack_1a8[0xf] = '\0';
  acStack_1a8[0x10] = '\0';
  acStack_1a8[0x11] = '\0';
  acStack_1a8[0x12] = '\0';
  acStack_1a8[0x13] = '\0';
  acStack_1a8[0x14] = '\0';
  acStack_1a8[0x15] = '\0';
  acStack_1a8[0x16] = '\0';
  acStack_1a8[0x17] = '\0';
  acStack_1a8[0x18] = '\0';
  acStack_1a8[0x19] = '\0';
  acStack_1a8[0x1a] = '\0';
  acStack_1a8[0x1b] = '\0';
  acStack_1a8[0x1c] = '\0';
  acStack_1a8[0x1d] = '\0';
  acStack_1a8[0x1e] = '\0';
  acStack_1a8[0x1f] = -0x80;
  FUN_10a0a87b8(param_1,&UNK_10f6372a6,acStack_1a8);
  if ((int)param_1 == 0) {
    return 1;
  }
  pcVar5 = acStack_1a8;
  func_0x00010937c560();
  if (*pcVar5 != '\x02') {
    return 1;
  }
  pcVar5 = acStack_1a8;
  func_0x00010937c560();
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0x8000000000000000;
  cVar3 = *pcVar5;
  if (cVar3 == '\0') {
    uStack_1b0 = 1;
  }
  else {
    if (cVar3 == '\x02') {
      uStack_1b8 = **(undefined8 **)(pcVar5 + 8);
      lStack_1e0 = 0;
      uStack_1d0 = 0x8000000000000000;
      uStack_1d8 = *(undefined8 *)(*(long *)(pcVar5 + 8) + 8);
      goto LAB_10a0b0a10;
    }
    if (cVar3 == '\x01') {
      uStack_1c0 = **(undefined8 **)(pcVar5 + 8);
      uStack_1d0 = 0x8000000000000000;
      uStack_1d8 = 0;
      lStack_1e0 = *(long *)(pcVar5 + 8) + 8;
      goto LAB_10a0b0a10;
    }
    uStack_1b0 = 0;
  }
  lStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 1;
LAB_10a0b0a10:
  ppcVar6 = &pcStack_1c8;
  pcStack_1e8 = pcVar5;
  pcStack_1c8 = pcVar5;
  func_0x00010937c708(ppcVar6,&pcStack_1e8);
  if (((ulong)ppcVar6 & 1) == 0) {
    do {
      ppcVar6 = &pcStack_1c8;
      func_0x00010937c560();
      if (*(char *)ppcVar6 != '\x01') {
        if (*(long *)*param_2 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (*(long *)*param_2,&UNK_10f63a4d1,0x2b);
          return 0;
        }
        return 0;
      }
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_170 = 0xffffffffffffffff;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      uStack_118 = 0;
      uStack_f8 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_c0 = 0;
      lStack_c8 = 0;
      lStack_b0 = 0;
      uStack_b8 = 0;
      uStack_d0 = 0;
      uStack_d8 = 0;
      uVar15 = *(undefined8 *)*param_2;
      cVar3 = *(char *)(param_2[1] + 0x12);
      uStack_70 = 0xffffffff;
      auStack_6c[0] = 0xffffffff;
      puStack_110 = &uStack_108;
      puStack_f0 = &uStack_e8;
      func_0x000107c2b054(&uStack_a8,&DAT_10f638aa0);
      func_0x000107c2b054(&uStack_88,"");
      FUN_10a0deaa0(auStack_6c,uVar15,ppcVar6,&uStack_a8,0,&uStack_88);
      func_0x000107c2b054(&uStack_a8,"source");
      func_0x000107c2b054(&uStack_88,"");
      FUN_10a0deaa0(&uStack_70,uVar15,ppcVar6,&uStack_a8,0,&uStack_88);
      uStack_170 = CONCAT44(uStack_70,auStack_6c[0]);
      FUN_10a0b3de4(&puStack_f0,ppcVar6);
      FUN_10a0b4a84(&uStack_168,ppcVar6);
      if (cVar3 != '\0') {
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0x8000000000000000;
        ppcVar7 = ppcVar6;
        FUN_10a0a87b8(ppcVar6,&DAT_10f6372be,&uStack_a8);
        if ((int)ppcVar7 != 0) {
          func_0x00010937c560(&uStack_a8);
          FUN_10a0c32e4(&uStack_88);
          if (lStack_b0 < 0) {
            __ZdlPv(uStack_c0);
          }
          uStack_b8 = uStack_80;
          uStack_c0 = uStack_88;
          lStack_b0 = lStack_78;
        }
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0x8000000000000000;
        ppcVar7 = ppcVar6;
        FUN_10a0a87b8(ppcVar6,&DAT_10f6372cc,&uStack_a8);
        if ((int)ppcVar7 != 0) {
          func_0x00010937c560(&uStack_a8);
          FUN_10a0c32e4(&uStack_88);
          if (lStack_c8 < 0) {
            __ZdlPv(uStack_d8);
          }
          uStack_d0 = uStack_80;
          uStack_d8 = uStack_88;
          lStack_c8 = lStack_78;
        }
      }
      func_0x000107c2b054(&uStack_a8,&DAT_10f68f148);
      uStack_88 = 0;
      uStack_80 = 0;
      lStack_78 = 0;
      FUN_10a0cdaf8(&uStack_188,uVar15,ppcVar6,&uStack_a8,0,&uStack_88);
      lVar14 = *(long *)param_2[3];
      uVar10 = *(ulong *)(lVar14 + 0xb0);
      if (uVar10 < *(ulong *)(lVar14 + 0xb8)) {
        FUN_10a0e2ae4(uVar10,&uStack_188);
        lVar12 = uVar10 + 0xe0;
      }
      else {
        lVar12 = uVar10 - *(long *)(lVar14 + 0xa8);
        uVar10 = (lVar12 >> 5) * 0x6db6db6db6db6db7 + 1;
        if (0x124924924924924 < uVar10) {
          FUN_10a0e2b9c();
LAB_10a0b0e5c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a0b0e60);
          (*pcVar4)();
        }
        lVar9 = (long)(*(ulong *)(lVar14 + 0xb8) - *(long *)(lVar14 + 0xa8)) >> 5;
        uVar11 = lVar9 * -0x2492492492492492;
        if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
          uVar11 = uVar10;
        }
        if (0x92492492492491 < (ulong)(lVar9 * 0x6db6db6db6db6db7)) {
          uVar11 = 0x124924924924924;
        }
        if (uVar11 == 0) {
          lVar9 = 0;
        }
        else {
          if (0x124924924924924 < uVar11) {
            func_0x000109ffded8();
            goto LAB_10a0b0e5c;
          }
          lVar9 = uVar11 * 0xe0;
          __Znwm();
        }
        lVar12 = lVar9 + lVar12;
        FUN_10a0e2ae4(lVar12,&uStack_188);
        lVar13 = *(long *)(lVar14 + 0xa8);
        lVar2 = *(long *)(lVar14 + 0xb0);
        lVar1 = lVar12 + (lVar13 - lVar2);
        lVar8 = lVar1;
        lVar16 = lVar13;
        if (lVar2 != lVar13) {
          do {
            FUN_10a0e2ae4(lVar8,lVar16);
            lVar16 = lVar16 + 0xe0;
            lVar8 = lVar8 + 0xe0;
          } while (lVar16 != lVar2);
          do {
            func_0x00010a0d3e0c(lVar13);
            lVar13 = lVar13 + 0xe0;
          } while (lVar13 != lVar2);
          lVar13 = *(long *)(lVar14 + 0xa8);
        }
        lVar12 = lVar12 + 0xe0;
        *(long *)(lVar14 + 0xa8) = lVar1;
        *(long *)(lVar14 + 0xb0) = lVar12;
        *(ulong *)(lVar14 + 0xb8) = lVar9 + uVar11 * 0xe0;
        if (lVar13 != 0) {
          __ZdlPv(lVar13);
        }
      }
      *(long *)(lVar14 + 0xb0) = lVar12;
      func_0x00010a0d3e0c(&uStack_188);
      func_0x00010937c698(&pcStack_1c8);
      ppcVar6 = &pcStack_1c8;
      func_0x00010937c708(ppcVar6,&pcStack_1e8);
    } while ((int)ppcVar6 == 0);
  }
  return 1;
}


