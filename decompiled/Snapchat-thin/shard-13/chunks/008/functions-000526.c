/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10acefc1c; end: 10acefc3b;  */

void FUN_10acefc1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6d410;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acefc3c; end: 10acefc87;  */

void FUN_10acefc3c(long param_1)

{
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10acefc88; end: 10acefc8b;  */

void FUN_10acefc88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acefc8c; end: 10acefd33;  */

undefined8 * FUN_10acefc8c(undefined8 *param_1)

{
  undefined8 uStack_38;
  
  param_1[7] = 0x32aaaba7;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  FUN_10acefd34();
  uStack_38 = 0;
  FUN_10a908c78(param_1 + 3,&uStack_38);
  return param_1;
}



/* Entry: 10acefd34; end: 10acefeaf;  */

void FUN_10acefd34(long *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  ulong *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong *puStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  
  lVar9 = *param_1;
  lVar19 = param_1[1];
  lVar21 = lVar19 - lVar9;
  lVar16 = lVar21 >> 3;
  bVar5 = (undefined8 *)(lVar16 * -0x3333333333333333) <= param_2;
  uVar10 = (long)param_2 + lVar16 * 0x3333333333333333;
  if (!bVar5 || uVar10 == 0) {
    if (bVar5) {
      return;
    }
    lVar9 = lVar9 + (long)param_2 * 0x28;
LAB_10acefe94:
    param_1[1] = lVar9;
    return;
  }
  if (uVar10 <= (ulong)((param_1[2] - lVar19 >> 3) * -0x3333333333333333)) {
    lVar9 = lVar19 + uVar10 * 0x28;
    lVar16 = (long)param_2 * 0x28 + lVar16 * -8;
    puVar14 = (undefined8 *)(lVar19 + 0x18);
    do {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[-3] = 0xffffffffffffffff;
      puVar14[-1] = 0x3f80000000000000;
      puVar14[-2] = 0;
      puVar14 = puVar14 + 5;
      lVar16 = lVar16 + -0x28;
    } while (lVar16 != 0);
    goto LAB_10acefe94;
  }
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar9 = param_1[2] - lVar9 >> 3;
    puVar14 = (undefined8 *)(lVar9 * -0x6666666666666666);
    if (puVar14 < param_2 || (long)puVar14 - (long)param_2 == 0) {
      puVar14 = param_2;
    }
    if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
      puVar14 = (undefined8 *)0x666666666666666;
    }
    puVar22 = param_2;
    FUN_10acefec4();
    lVar9 = (long)param_2 * 0x28 + lVar16 * -8;
    puVar8 = (undefined8 *)((long)puVar14 + lVar21 + 0x18);
    do {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[-3] = 0xffffffffffffffff;
      puVar8[-1] = 0x3f80000000000000;
      puVar8[-2] = 0;
      puVar8 = puVar8 + 5;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != 0);
    lVar19 = (long)puVar14 + (lVar21 - (param_1[1] - *param_1));
    _memcpy(lVar19);
    lVar9 = *param_1;
    *param_1 = lVar19;
    param_1[1] = (long)puVar14 + uVar10 * 0x28 + lVar21;
    param_1[2] = (long)(puVar14 + (long)puVar22 * 5);
    if (lVar9 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  FUN_10acefeb0();
  puVar6 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar6 < (ulong *)0x666666666666667) {
    __Znwm((long)puVar6 * 0x28);
    return;
  }
  func_0x000109ffded8();
  uVar10 = *puVar6;
  puVar14 = (undefined8 *)(uVar10 * 2);
  puVar8 = param_2;
  if (puVar14 != (undefined8 *)0x0) {
    if (puVar14 < (undefined8 *)0x666666666666667) {
      FUN_10acefec4();
      puVar22 = puVar14 + (long)puVar8 * 5;
      uVar10 = *puVar6;
      goto LAB_10aceff70;
    }
    FUN_10acefeb0();
LAB_10acf0310:
    FUN_10acefeb0();
LAB_10acf031c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10acf0320);
    (*pcVar4)();
  }
  puVar14 = (undefined8 *)0x0;
  puVar22 = (undefined8 *)0x0;
LAB_10aceff70:
  plVar13 = (long *)puVar6[1];
  uVar17 = puVar6[3];
  uVar11 = puVar6[4];
  uVar18 = (uVar11 + param_3) - uVar17;
  lVar9 = 0;
  if (uVar10 <= uVar18) {
    lVar9 = uVar18 - uVar10;
  }
  lVar19 = *plVar13;
  uVar18 = (plVar13[1] - lVar19 >> 3) * -0x3333333333333333;
  uVar10 = 0;
  if (uVar18 != 0) {
    uVar10 = uVar17 / uVar18;
  }
  uVar17 = uVar17 - uVar10 * uVar18;
  uVar10 = uVar17 + lVar9;
  uVar3 = 0;
  if (uVar18 != 0) {
    uVar3 = uVar11 / uVar18;
  }
  uVar11 = uVar11 - uVar3 * uVar18;
  uVar3 = uVar18;
  if (uVar17 <= uVar11) {
    uVar3 = 0;
  }
  uVar3 = uVar3 + uVar11;
  puVar23 = (undefined8 *)(uVar3 - uVar10);
  puVar12 = puVar14;
  puVar24 = puVar14;
  if (0 < (long)puVar23) {
    lVar9 = (long)puVar22 - (long)puVar14 >> 3;
    uVar17 = lVar9 * -0x3333333333333333;
    if ((long)uVar17 < (long)puVar23) {
      if ((undefined8 *)0x666666666666666 < puVar23) goto LAB_10acf0310;
      puVar12 = (undefined8 *)(lVar9 * -0x6666666666666666);
      if (puVar12 < puVar23 || (long)puVar12 - (long)puVar23 == 0) {
        puVar12 = puVar23;
      }
      if (0x333333333333332 < uVar17) {
        puVar12 = (undefined8 *)0x666666666666666;
      }
      FUN_10acefec4();
      puVar22 = puVar12 + (long)puVar8 * 5;
      puVar24 = puVar12 + (long)puVar23 * 5;
      puVar23 = puVar12;
      do {
        uVar17 = 0;
        if (uVar18 <= uVar10) {
          uVar17 = uVar18;
        }
        uVar17 = uVar10 - uVar17;
        if (uVar18 < uVar17 || uVar18 - uVar17 == 0) goto LAB_10acf031c;
        puVar15 = (undefined8 *)(lVar19 + uVar17 * 0x28);
        uVar26 = puVar15[1];
        uVar25 = *puVar15;
        uVar28 = puVar15[3];
        uVar27 = puVar15[2];
        puVar23[4] = puVar15[4];
        puVar23[1] = uVar26;
        *puVar23 = uVar25;
        puVar23[3] = uVar28;
        puVar23[2] = uVar27;
        puVar23 = puVar23 + 5;
        uVar10 = uVar10 + 1;
      } while (puVar23 != puVar24);
      if (puVar14 != (undefined8 *)0x0) {
        __ZdlPv(puVar14);
      }
    }
    else {
      for (; uVar3 != uVar10; uVar10 = uVar10 + 1) {
        uVar17 = 0;
        if (uVar18 <= uVar10) {
          uVar17 = uVar18;
        }
        uVar17 = uVar10 - uVar17;
        if (uVar18 < uVar17 || uVar18 - uVar17 == 0) goto LAB_10acf031c;
        puVar23 = (undefined8 *)(lVar19 + uVar17 * 0x28);
        uVar26 = puVar23[1];
        uVar25 = *puVar23;
        uVar28 = puVar23[3];
        uVar27 = puVar23[2];
        puVar14[4] = puVar23[4];
        puVar14[1] = uVar26;
        *puVar14 = uVar25;
        puVar14[3] = uVar28;
        puVar14[2] = uVar27;
        puVar14 = puVar14 + 5;
        puVar24 = puVar24 + 5;
      }
    }
  }
  puVar14 = puVar12;
  if (0 < param_3) {
    if (((long)puVar22 - (long)puVar24 >> 3) * -0x3333333333333333 < param_3) {
      lVar9 = (long)puVar24 - (long)puVar12;
      uVar10 = param_3 + (lVar9 >> 3) * -0x3333333333333333;
      if (0x666666666666666 < uVar10) {
        FUN_10acefeb0();
        goto LAB_10acf031c;
      }
      lVar19 = (long)puVar22 - (long)puVar12 >> 3;
      uVar17 = lVar19 * -0x6666666666666666;
      if (uVar17 < uVar10 || uVar17 - uVar10 == 0) {
        uVar17 = uVar10;
      }
      if (0x333333333333332 < (ulong)(lVar19 * -0x3333333333333333)) {
        uVar17 = 0x666666666666666;
      }
      if (uVar17 == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        FUN_10acefec4();
      }
      puVar14 = (undefined8 *)(uVar17 + lVar9);
      puVar24 = puVar14 + param_3 * 5;
      param_3 = param_3 * 0x28;
      puVar22 = puVar14;
      do {
        uVar26 = param_2[1];
        uVar25 = *param_2;
        uVar28 = param_2[3];
        uVar27 = param_2[2];
        puVar22[4] = param_2[4];
        puVar22[1] = uVar26;
        *puVar22 = uVar25;
        puVar22[3] = uVar28;
        puVar22[2] = uVar27;
        puVar22 = puVar22 + 5;
        param_2 = param_2 + 5;
        param_3 = param_3 + -0x28;
      } while (param_3 != 0);
      puVar22 = (undefined8 *)(uVar17 + (long)puVar8 * 0x28);
      puVar14 = (undefined8 *)((long)puVar14 - lVar9);
      _memcpy(puVar14,puVar12,lVar9);
      if (puVar12 != (undefined8 *)0x0) {
        __ZdlPv(puVar12);
      }
    }
    else {
      puVar8 = param_2 + param_3 * 5;
      do {
        uVar26 = param_2[1];
        uVar25 = *param_2;
        uVar28 = param_2[3];
        uVar27 = param_2[2];
        puVar24[4] = param_2[4];
        puVar24[1] = uVar26;
        *puVar24 = uVar25;
        puVar24[3] = uVar28;
        puVar24[2] = uVar27;
        param_2 = param_2 + 5;
        puVar24 = puVar24 + 5;
      } while (param_2 != puVar8);
    }
  }
  uVar10 = *puVar6;
  puStack_f8 = (ulong *)0x0;
  plStack_f0 = (long *)0x0;
  lStack_e0 = ((long)puVar24 - (long)puVar14 >> 3) * -0x3333333333333333;
  uStack_e8 = 0;
  plVar7 = (undefined8 *)0x90;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110c6d410;
  puVar20 = (ulong *)(plVar7 + 3);
  *puVar20 = (ulong)puVar14;
  plVar7[4] = (long)puVar24;
  plVar7[5] = (long)puVar22;
  plVar7[7] = 0;
  plVar7[6] = 0;
  plVar7[10] = 0x32aaaba7;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[0xc] = 0;
  plVar7[0xb] = 0;
  plVar7[0xe] = 0;
  plVar7[0xd] = 0;
  plVar7[0x10] = 0;
  plVar7[0xf] = 0;
  plVar7[0x11] = 0;
  uStack_d8 = 0;
  FUN_10a908c78(plVar7 + 6,&uStack_d8);
  plVar7[9] = (plVar7[4] - plVar7[3] >> 3) * -0x3333333333333333;
  FUN_10acefd34(puVar20,uVar10 << 1);
  plVar13 = plStack_f0;
  puStack_f8 = puVar20;
  if (plStack_f0 != (long *)0x0) {
    plVar1 = plStack_f0 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      lVar9 = *plStack_f0;
      plStack_f0 = plVar7;
      (**(code **)(lVar9 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      plVar7 = plStack_f0;
    }
  }
  plStack_f0 = plVar7;
  FUN_10a4f8a50(puVar6 + 1,&puStack_f8);
  FUN_10a4f8630(&puStack_f8);
  return;
}



/* Entry: 10acefeb0; end: 10acefec3;  */

void FUN_10acefeb0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong *puStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  
  puVar6 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar6 < (ulong *)0x666666666666667) {
    __Znwm((long)puVar6 * 0x28);
    return;
  }
  func_0x000109ffded8();
  uVar10 = *puVar6;
  puVar7 = (undefined8 *)(uVar10 * 2);
  puVar9 = param_2;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    puVar20 = (undefined8 *)0x0;
LAB_10aceff70:
    plVar13 = (long *)puVar6[1];
    uVar17 = puVar6[3];
    uVar11 = puVar6[4];
    uVar18 = (uVar11 + param_3) - uVar17;
    lVar15 = 0;
    if (uVar10 <= uVar18) {
      lVar15 = uVar18 - uVar10;
    }
    lVar14 = *plVar13;
    uVar18 = (plVar13[1] - lVar14 >> 3) * -0x3333333333333333;
    uVar10 = 0;
    if (uVar18 != 0) {
      uVar10 = uVar17 / uVar18;
    }
    uVar17 = uVar17 - uVar10 * uVar18;
    uVar10 = uVar17 + lVar15;
    uVar4 = 0;
    if (uVar18 != 0) {
      uVar4 = uVar11 / uVar18;
    }
    uVar11 = uVar11 - uVar4 * uVar18;
    uVar4 = uVar18;
    if (uVar17 <= uVar11) {
      uVar4 = 0;
    }
    uVar4 = uVar4 + uVar11;
    puVar21 = (undefined8 *)(uVar4 - uVar10);
    puVar12 = puVar7;
    puVar22 = puVar7;
    if (0 < (long)puVar21) {
      lVar15 = (long)puVar20 - (long)puVar7 >> 3;
      uVar17 = lVar15 * -0x3333333333333333;
      if ((long)uVar17 < (long)puVar21) {
        if ((undefined8 *)0x666666666666666 < puVar21) goto LAB_10acf0310;
        puVar12 = (undefined8 *)(lVar15 * -0x6666666666666666);
        if (puVar12 < puVar21 || (long)puVar12 - (long)puVar21 == 0) {
          puVar12 = puVar21;
        }
        if (0x333333333333332 < uVar17) {
          puVar12 = (undefined8 *)0x666666666666666;
        }
        FUN_10acefec4();
        puVar20 = puVar12 + (long)puVar9 * 5;
        puVar22 = puVar12 + (long)puVar21 * 5;
        puVar21 = puVar12;
        do {
          uVar17 = 0;
          if (uVar18 <= uVar10) {
            uVar17 = uVar18;
          }
          uVar17 = uVar10 - uVar17;
          if (uVar18 < uVar17 || uVar18 - uVar17 == 0) goto LAB_10acf031c;
          puVar16 = (undefined8 *)(lVar14 + uVar17 * 0x28);
          uVar24 = puVar16[1];
          uVar23 = *puVar16;
          uVar26 = puVar16[3];
          uVar25 = puVar16[2];
          puVar21[4] = puVar16[4];
          puVar21[1] = uVar24;
          *puVar21 = uVar23;
          puVar21[3] = uVar26;
          puVar21[2] = uVar25;
          puVar21 = puVar21 + 5;
          uVar10 = uVar10 + 1;
        } while (puVar21 != puVar22);
        if (puVar7 != (undefined8 *)0x0) {
          __ZdlPv(puVar7);
        }
      }
      else {
        for (; uVar4 != uVar10; uVar10 = uVar10 + 1) {
          uVar17 = 0;
          if (uVar18 <= uVar10) {
            uVar17 = uVar18;
          }
          uVar17 = uVar10 - uVar17;
          if (uVar18 < uVar17 || uVar18 - uVar17 == 0) goto LAB_10acf031c;
          puVar21 = (undefined8 *)(lVar14 + uVar17 * 0x28);
          uVar24 = puVar21[1];
          uVar23 = *puVar21;
          uVar26 = puVar21[3];
          uVar25 = puVar21[2];
          puVar7[4] = puVar21[4];
          puVar7[1] = uVar24;
          *puVar7 = uVar23;
          puVar7[3] = uVar26;
          puVar7[2] = uVar25;
          puVar7 = puVar7 + 5;
          puVar22 = puVar22 + 5;
        }
      }
    }
    puVar7 = puVar12;
    if (0 < param_3) {
      if (((long)puVar20 - (long)puVar22 >> 3) * -0x3333333333333333 < param_3) {
        lVar15 = (long)puVar22 - (long)puVar12;
        uVar10 = param_3 + (lVar15 >> 3) * -0x3333333333333333;
        if (0x666666666666666 < uVar10) {
          FUN_10acefeb0();
          goto LAB_10acf031c;
        }
        lVar14 = (long)puVar20 - (long)puVar12 >> 3;
        uVar17 = lVar14 * -0x6666666666666666;
        if (uVar17 < uVar10 || uVar17 - uVar10 == 0) {
          uVar17 = uVar10;
        }
        if (0x333333333333332 < (ulong)(lVar14 * -0x3333333333333333)) {
          uVar17 = 0x666666666666666;
        }
        if (uVar17 == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          FUN_10acefec4();
        }
        puVar7 = (undefined8 *)(uVar17 + lVar15);
        puVar22 = puVar7 + param_3 * 5;
        param_3 = param_3 * 0x28;
        puVar20 = puVar7;
        do {
          uVar24 = param_2[1];
          uVar23 = *param_2;
          uVar26 = param_2[3];
          uVar25 = param_2[2];
          puVar20[4] = param_2[4];
          puVar20[1] = uVar24;
          *puVar20 = uVar23;
          puVar20[3] = uVar26;
          puVar20[2] = uVar25;
          puVar20 = puVar20 + 5;
          param_2 = param_2 + 5;
          param_3 = param_3 + -0x28;
        } while (param_3 != 0);
        puVar20 = (undefined8 *)(uVar17 + (long)puVar9 * 0x28);
        puVar7 = (undefined8 *)((long)puVar7 - lVar15);
        _memcpy(puVar7,puVar12,lVar15);
        if (puVar12 != (undefined8 *)0x0) {
          __ZdlPv(puVar12);
        }
      }
      else {
        puVar9 = param_2 + param_3 * 5;
        do {
          uVar24 = param_2[1];
          uVar23 = *param_2;
          uVar26 = param_2[3];
          uVar25 = param_2[2];
          puVar22[4] = param_2[4];
          puVar22[1] = uVar24;
          *puVar22 = uVar23;
          puVar22[3] = uVar26;
          puVar22[2] = uVar25;
          param_2 = param_2 + 5;
          puVar22 = puVar22 + 5;
        } while (param_2 != puVar9);
      }
    }
    uVar10 = *puVar6;
    puStack_b8 = (ulong *)0x0;
    plStack_b0 = (long *)0x0;
    lStack_a0 = ((long)puVar22 - (long)puVar7 >> 3) * -0x3333333333333333;
    uStack_a8 = 0;
    plVar8 = (undefined8 *)0x90;
    __Znwm();
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_110c6d410;
    puVar19 = (ulong *)(plVar8 + 3);
    *puVar19 = (ulong)puVar7;
    plVar8[4] = (long)puVar22;
    plVar8[5] = (long)puVar20;
    plVar8[7] = 0;
    plVar8[6] = 0;
    plVar8[10] = 0x32aaaba7;
    plVar8[9] = 0;
    plVar8[8] = 0;
    plVar8[0xc] = 0;
    plVar8[0xb] = 0;
    plVar8[0xe] = 0;
    plVar8[0xd] = 0;
    plVar8[0x10] = 0;
    plVar8[0xf] = 0;
    plVar8[0x11] = 0;
    uStack_98 = 0;
    FUN_10a908c78(plVar8 + 6,&uStack_98);
    plVar8[9] = (plVar8[4] - plVar8[3] >> 3) * -0x3333333333333333;
    FUN_10acefd34(puVar19,uVar10 << 1);
    plVar13 = plStack_b0;
    puStack_b8 = puVar19;
    if (plStack_b0 != (long *)0x0) {
      plVar1 = plStack_b0 + 1;
      do {
        lVar15 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar15 == 0) {
        lVar15 = *plStack_b0;
        plStack_b0 = plVar8;
        (**(code **)(lVar15 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        plVar8 = plStack_b0;
      }
    }
    plStack_b0 = plVar8;
    FUN_10a4f8a50(puVar6 + 1,&puStack_b8);
    FUN_10a4f8630(&puStack_b8);
    return;
  }
  if (puVar7 < (undefined8 *)0x666666666666667) {
    FUN_10acefec4();
    puVar20 = puVar7 + (long)puVar9 * 5;
    uVar10 = *puVar6;
    goto LAB_10aceff70;
  }
  FUN_10acefeb0();
LAB_10acf0310:
  FUN_10acefeb0();
LAB_10acf031c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10acf0320);
  (*pcVar5)();
}



/* Entry: 10acefec4; end: 10aceff07;  */

void FUN_10acefec4(ulong *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong *puStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  
  if (param_1 < (ulong *)0x666666666666667) {
    __Znwm((long)param_1 * 0x28);
    return;
  }
  func_0x000109ffded8();
  uVar9 = *param_1;
  puVar6 = (undefined8 *)(uVar9 * 2);
  puVar8 = param_2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    puVar19 = (undefined8 *)0x0;
LAB_10aceff70:
    plVar12 = (long *)param_1[1];
    uVar16 = param_1[3];
    uVar10 = param_1[4];
    uVar17 = (uVar10 + param_3) - uVar16;
    lVar14 = 0;
    if (uVar9 <= uVar17) {
      lVar14 = uVar17 - uVar9;
    }
    lVar13 = *plVar12;
    uVar17 = (plVar12[1] - lVar13 >> 3) * -0x3333333333333333;
    uVar9 = 0;
    if (uVar17 != 0) {
      uVar9 = uVar16 / uVar17;
    }
    uVar16 = uVar16 - uVar9 * uVar17;
    uVar9 = uVar16 + lVar14;
    uVar4 = 0;
    if (uVar17 != 0) {
      uVar4 = uVar10 / uVar17;
    }
    uVar10 = uVar10 - uVar4 * uVar17;
    uVar4 = uVar17;
    if (uVar16 <= uVar10) {
      uVar4 = 0;
    }
    uVar4 = uVar4 + uVar10;
    puVar20 = (undefined8 *)(uVar4 - uVar9);
    puVar11 = puVar6;
    puVar21 = puVar6;
    if (0 < (long)puVar20) {
      lVar14 = (long)puVar19 - (long)puVar6 >> 3;
      uVar16 = lVar14 * -0x3333333333333333;
      if ((long)uVar16 < (long)puVar20) {
        if ((undefined8 *)0x666666666666666 < puVar20) goto LAB_10acf0310;
        puVar11 = (undefined8 *)(lVar14 * -0x6666666666666666);
        if (puVar11 < puVar20 || (long)puVar11 - (long)puVar20 == 0) {
          puVar11 = puVar20;
        }
        if (0x333333333333332 < uVar16) {
          puVar11 = (undefined8 *)0x666666666666666;
        }
        FUN_10acefec4();
        puVar19 = puVar11 + (long)puVar8 * 5;
        puVar21 = puVar11 + (long)puVar20 * 5;
        puVar20 = puVar11;
        do {
          uVar16 = 0;
          if (uVar17 <= uVar9) {
            uVar16 = uVar17;
          }
          uVar16 = uVar9 - uVar16;
          if (uVar17 < uVar16 || uVar17 - uVar16 == 0) goto LAB_10acf031c;
          puVar15 = (undefined8 *)(lVar13 + uVar16 * 0x28);
          uVar23 = puVar15[1];
          uVar22 = *puVar15;
          uVar25 = puVar15[3];
          uVar24 = puVar15[2];
          puVar20[4] = puVar15[4];
          puVar20[1] = uVar23;
          *puVar20 = uVar22;
          puVar20[3] = uVar25;
          puVar20[2] = uVar24;
          puVar20 = puVar20 + 5;
          uVar9 = uVar9 + 1;
        } while (puVar20 != puVar21);
        if (puVar6 != (undefined8 *)0x0) {
          __ZdlPv(puVar6);
        }
      }
      else {
        for (; uVar4 != uVar9; uVar9 = uVar9 + 1) {
          uVar16 = 0;
          if (uVar17 <= uVar9) {
            uVar16 = uVar17;
          }
          uVar16 = uVar9 - uVar16;
          if (uVar17 < uVar16 || uVar17 - uVar16 == 0) goto LAB_10acf031c;
          puVar20 = (undefined8 *)(lVar13 + uVar16 * 0x28);
          uVar23 = puVar20[1];
          uVar22 = *puVar20;
          uVar25 = puVar20[3];
          uVar24 = puVar20[2];
          puVar6[4] = puVar20[4];
          puVar6[1] = uVar23;
          *puVar6 = uVar22;
          puVar6[3] = uVar25;
          puVar6[2] = uVar24;
          puVar6 = puVar6 + 5;
          puVar21 = puVar21 + 5;
        }
      }
    }
    puVar6 = puVar11;
    if (0 < param_3) {
      if (((long)puVar19 - (long)puVar21 >> 3) * -0x3333333333333333 < param_3) {
        lVar14 = (long)puVar21 - (long)puVar11;
        uVar9 = param_3 + (lVar14 >> 3) * -0x3333333333333333;
        if (0x666666666666666 < uVar9) {
          FUN_10acefeb0();
          goto LAB_10acf031c;
        }
        lVar13 = (long)puVar19 - (long)puVar11 >> 3;
        uVar16 = lVar13 * -0x6666666666666666;
        if (uVar16 < uVar9 || uVar16 - uVar9 == 0) {
          uVar16 = uVar9;
        }
        if (0x333333333333332 < (ulong)(lVar13 * -0x3333333333333333)) {
          uVar16 = 0x666666666666666;
        }
        if (uVar16 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          FUN_10acefec4();
        }
        puVar6 = (undefined8 *)(uVar16 + lVar14);
        puVar21 = puVar6 + param_3 * 5;
        param_3 = param_3 * 0x28;
        puVar19 = puVar6;
        do {
          uVar23 = param_2[1];
          uVar22 = *param_2;
          uVar25 = param_2[3];
          uVar24 = param_2[2];
          puVar19[4] = param_2[4];
          puVar19[1] = uVar23;
          *puVar19 = uVar22;
          puVar19[3] = uVar25;
          puVar19[2] = uVar24;
          puVar19 = puVar19 + 5;
          param_2 = param_2 + 5;
          param_3 = param_3 + -0x28;
        } while (param_3 != 0);
        puVar19 = (undefined8 *)(uVar16 + (long)puVar8 * 0x28);
        puVar6 = (undefined8 *)((long)puVar6 - lVar14);
        _memcpy(puVar6,puVar11,lVar14);
        if (puVar11 != (undefined8 *)0x0) {
          __ZdlPv(puVar11);
        }
      }
      else {
        puVar8 = param_2 + param_3 * 5;
        do {
          uVar23 = param_2[1];
          uVar22 = *param_2;
          uVar25 = param_2[3];
          uVar24 = param_2[2];
          puVar21[4] = param_2[4];
          puVar21[1] = uVar23;
          *puVar21 = uVar22;
          puVar21[3] = uVar25;
          puVar21[2] = uVar24;
          param_2 = param_2 + 5;
          puVar21 = puVar21 + 5;
        } while (param_2 != puVar8);
      }
    }
    uVar9 = *param_1;
    puStack_a8 = (ulong *)0x0;
    plStack_a0 = (long *)0x0;
    lStack_90 = ((long)puVar21 - (long)puVar6 >> 3) * -0x3333333333333333;
    uStack_98 = 0;
    plVar7 = (undefined8 *)0x90;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110c6d410;
    puVar18 = (ulong *)(plVar7 + 3);
    *puVar18 = (ulong)puVar6;
    plVar7[4] = (long)puVar21;
    plVar7[5] = (long)puVar19;
    plVar7[7] = 0;
    plVar7[6] = 0;
    plVar7[10] = 0x32aaaba7;
    plVar7[9] = 0;
    plVar7[8] = 0;
    plVar7[0xc] = 0;
    plVar7[0xb] = 0;
    plVar7[0xe] = 0;
    plVar7[0xd] = 0;
    plVar7[0x10] = 0;
    plVar7[0xf] = 0;
    plVar7[0x11] = 0;
    uStack_88 = 0;
    FUN_10a908c78(plVar7 + 6,&uStack_88);
    plVar7[9] = (plVar7[4] - plVar7[3] >> 3) * -0x3333333333333333;
    FUN_10acefd34(puVar18,uVar9 << 1);
    plVar12 = plStack_a0;
    puStack_a8 = puVar18;
    if (plStack_a0 != (long *)0x0) {
      plVar1 = plStack_a0 + 1;
      do {
        lVar14 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        lVar14 = *plStack_a0;
        plStack_a0 = plVar7;
        (**(code **)(lVar14 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        plVar7 = plStack_a0;
      }
    }
    plStack_a0 = plVar7;
    FUN_10a4f8a50(param_1 + 1,&puStack_a8);
    FUN_10a4f8630(&puStack_a8);
    return;
  }
  if (puVar6 < (undefined8 *)0x666666666666667) {
    FUN_10acefec4();
    puVar19 = puVar6 + (long)puVar8 * 5;
    uVar9 = *param_1;
    goto LAB_10aceff70;
  }
  FUN_10acefeb0();
LAB_10acf0310:
  FUN_10acefeb0();
LAB_10acf031c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10acf0320);
  (*pcVar5)();
}



/* Entry: 10aceff08; end: 10acf039b;  */

void FUN_10aceff08(ulong *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong *puStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar9 = *param_1;
  puVar6 = (undefined8 *)(uVar9 * 2);
  puVar8 = param_2;
  if (puVar6 != (undefined8 *)0x0) {
    if (puVar6 < (undefined8 *)0x666666666666667) {
      FUN_10acefec4();
      puVar19 = puVar6 + (long)puVar8 * 5;
      uVar9 = *param_1;
      goto LAB_10aceff70;
    }
    FUN_10acefeb0();
LAB_10acf0310:
    FUN_10acefeb0();
LAB_10acf031c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10acf0320);
    (*pcVar5)();
  }
  puVar6 = (undefined8 *)0x0;
  puVar19 = (undefined8 *)0x0;
LAB_10aceff70:
  plVar12 = (long *)param_1[1];
  uVar16 = param_1[3];
  uVar10 = param_1[4];
  uVar17 = (uVar10 + param_3) - uVar16;
  lVar14 = 0;
  if (uVar9 <= uVar17) {
    lVar14 = uVar17 - uVar9;
  }
  lVar13 = *plVar12;
  uVar17 = (plVar12[1] - lVar13 >> 3) * -0x3333333333333333;
  uVar9 = 0;
  if (uVar17 != 0) {
    uVar9 = uVar16 / uVar17;
  }
  uVar16 = uVar16 - uVar9 * uVar17;
  uVar9 = uVar16 + lVar14;
  uVar4 = 0;
  if (uVar17 != 0) {
    uVar4 = uVar10 / uVar17;
  }
  uVar10 = uVar10 - uVar4 * uVar17;
  uVar4 = uVar17;
  if (uVar16 <= uVar10) {
    uVar4 = 0;
  }
  uVar4 = uVar4 + uVar10;
  puVar20 = (undefined8 *)(uVar4 - uVar9);
  puVar11 = puVar6;
  puVar21 = puVar6;
  if (0 < (long)puVar20) {
    lVar14 = (long)puVar19 - (long)puVar6 >> 3;
    uVar16 = lVar14 * -0x3333333333333333;
    if ((long)uVar16 < (long)puVar20) {
      if ((undefined8 *)0x666666666666666 < puVar20) goto LAB_10acf0310;
      puVar11 = (undefined8 *)(lVar14 * -0x6666666666666666);
      if (puVar11 < puVar20 || (long)puVar11 - (long)puVar20 == 0) {
        puVar11 = puVar20;
      }
      if (0x333333333333332 < uVar16) {
        puVar11 = (undefined8 *)0x666666666666666;
      }
      FUN_10acefec4();
      puVar19 = puVar11 + (long)puVar8 * 5;
      puVar21 = puVar11 + (long)puVar20 * 5;
      puVar20 = puVar11;
      do {
        uVar16 = 0;
        if (uVar17 <= uVar9) {
          uVar16 = uVar17;
        }
        uVar16 = uVar9 - uVar16;
        if (uVar17 < uVar16 || uVar17 - uVar16 == 0) goto LAB_10acf031c;
        puVar15 = (undefined8 *)(lVar13 + uVar16 * 0x28);
        uVar23 = puVar15[1];
        uVar22 = *puVar15;
        uVar25 = puVar15[3];
        uVar24 = puVar15[2];
        puVar20[4] = puVar15[4];
        puVar20[1] = uVar23;
        *puVar20 = uVar22;
        puVar20[3] = uVar25;
        puVar20[2] = uVar24;
        puVar20 = puVar20 + 5;
        uVar9 = uVar9 + 1;
      } while (puVar20 != puVar21);
      if (puVar6 != (undefined8 *)0x0) {
        __ZdlPv(puVar6);
      }
    }
    else {
      for (; uVar4 != uVar9; uVar9 = uVar9 + 1) {
        uVar16 = 0;
        if (uVar17 <= uVar9) {
          uVar16 = uVar17;
        }
        uVar16 = uVar9 - uVar16;
        if (uVar17 < uVar16 || uVar17 - uVar16 == 0) goto LAB_10acf031c;
        puVar20 = (undefined8 *)(lVar13 + uVar16 * 0x28);
        uVar23 = puVar20[1];
        uVar22 = *puVar20;
        uVar25 = puVar20[3];
        uVar24 = puVar20[2];
        puVar6[4] = puVar20[4];
        puVar6[1] = uVar23;
        *puVar6 = uVar22;
        puVar6[3] = uVar25;
        puVar6[2] = uVar24;
        puVar6 = puVar6 + 5;
        puVar21 = puVar21 + 5;
      }
    }
  }
  puVar6 = puVar11;
  if (0 < param_3) {
    if (((long)puVar19 - (long)puVar21 >> 3) * -0x3333333333333333 < param_3) {
      lVar14 = (long)puVar21 - (long)puVar11;
      uVar9 = param_3 + (lVar14 >> 3) * -0x3333333333333333;
      if (0x666666666666666 < uVar9) {
        FUN_10acefeb0();
        goto LAB_10acf031c;
      }
      lVar13 = (long)puVar19 - (long)puVar11 >> 3;
      uVar16 = lVar13 * -0x6666666666666666;
      if (uVar16 < uVar9 || uVar16 - uVar9 == 0) {
        uVar16 = uVar9;
      }
      if (0x333333333333332 < (ulong)(lVar13 * -0x3333333333333333)) {
        uVar16 = 0x666666666666666;
      }
      if (uVar16 == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        FUN_10acefec4();
      }
      puVar6 = (undefined8 *)(uVar16 + lVar14);
      puVar21 = puVar6 + param_3 * 5;
      param_3 = param_3 * 0x28;
      puVar19 = puVar6;
      do {
        uVar23 = param_2[1];
        uVar22 = *param_2;
        uVar25 = param_2[3];
        uVar24 = param_2[2];
        puVar19[4] = param_2[4];
        puVar19[1] = uVar23;
        *puVar19 = uVar22;
        puVar19[3] = uVar25;
        puVar19[2] = uVar24;
        puVar19 = puVar19 + 5;
        param_2 = param_2 + 5;
        param_3 = param_3 + -0x28;
      } while (param_3 != 0);
      puVar19 = (undefined8 *)(uVar16 + (long)puVar8 * 0x28);
      puVar6 = (undefined8 *)((long)puVar6 - lVar14);
      _memcpy(puVar6,puVar11,lVar14);
      if (puVar11 != (undefined8 *)0x0) {
        __ZdlPv(puVar11);
      }
    }
    else {
      puVar8 = param_2 + param_3 * 5;
      do {
        uVar23 = param_2[1];
        uVar22 = *param_2;
        uVar25 = param_2[3];
        uVar24 = param_2[2];
        puVar21[4] = param_2[4];
        puVar21[1] = uVar23;
        *puVar21 = uVar22;
        puVar21[3] = uVar25;
        puVar21[2] = uVar24;
        param_2 = param_2 + 5;
        puVar21 = puVar21 + 5;
      } while (param_2 != puVar8);
    }
  }
  uVar9 = *param_1;
  puStack_88 = (ulong *)0x0;
  plStack_80 = (long *)0x0;
  lStack_70 = ((long)puVar21 - (long)puVar6 >> 3) * -0x3333333333333333;
  uStack_78 = 0;
  plVar7 = (undefined8 *)0x90;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110c6d410;
  puVar18 = (ulong *)(plVar7 + 3);
  *puVar18 = (ulong)puVar6;
  plVar7[4] = (long)puVar21;
  plVar7[5] = (long)puVar19;
  plVar7[7] = 0;
  plVar7[6] = 0;
  plVar7[10] = 0x32aaaba7;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[0xc] = 0;
  plVar7[0xb] = 0;
  plVar7[0xe] = 0;
  plVar7[0xd] = 0;
  plVar7[0x10] = 0;
  plVar7[0xf] = 0;
  plVar7[0x11] = 0;
  uStack_68 = 0;
  FUN_10a908c78(plVar7 + 6,&uStack_68);
  plVar7[9] = (plVar7[4] - plVar7[3] >> 3) * -0x3333333333333333;
  FUN_10acefd34(puVar18,uVar9 << 1);
  plVar12 = plStack_80;
  puStack_88 = puVar18;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
    do {
      lVar14 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar14 == 0) {
      lVar14 = *plStack_80;
      plStack_80 = plVar7;
      (**(code **)(lVar14 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      plVar7 = plStack_80;
    }
  }
  plStack_80 = plVar7;
  FUN_10a4f8a50(param_1 + 1,&puStack_88);
  FUN_10a4f8630(&puStack_88);
  return;
}



/* Entry: 10acf039c; end: 10acf051f;  */

undefined8
FUN_10acf039c(long *param_1,ulong *param_2,ulong param_3,undefined8 *param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  code *pcVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  __ZNSt3__15mutex4lockEv(param_1 + 7);
  if (param_2[1] == param_1[6]) {
    uVar11 = *param_2;
    uVar1 = param_2[1] + param_5;
    lVar3 = 0;
    if (param_3 <= uVar1 - uVar11) {
      lVar3 = (uVar1 - uVar11) - param_3;
    }
    uVar2 = lVar3 + uVar11;
    puVar8 = (ulong *)param_1[3];
    puVar4 = (ulong *)param_1[4];
    puVar10 = puVar8;
    uVar9 = uVar2;
    if (puVar8 != puVar4) {
      do {
        puVar7 = puVar8;
        uVar12 = uVar2;
        puVar5 = puVar10;
        if (*puVar10 == uVar11) break;
        puVar10 = puVar10 + 1;
        puVar5 = puVar4;
      } while (puVar10 != puVar4);
      do {
        puVar8 = puVar5;
        uVar9 = uVar12;
        if ((puVar7 != puVar8) && (uVar9 = *puVar7, uVar12 <= *puVar7)) {
          uVar9 = uVar12;
        }
        puVar7 = puVar7 + 1;
        uVar12 = uVar9;
        puVar5 = puVar8;
      } while (puVar7 != puVar4);
    }
    if (uVar1 - uVar9 <= (ulong)((param_1[1] - *param_1 >> 3) * -0x3333333333333333)) {
      *puVar8 = uVar2;
      param_1[6] = uVar1;
      __ZNSt3__15mutex6unlockEv(param_1 + 7);
      if (param_5 != 0) {
        lVar3 = *param_1;
        uVar9 = (param_1[1] - lVar3 >> 3) * -0x3333333333333333;
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = param_2[1] / uVar9;
        }
        uVar11 = param_2[1] - uVar11 * uVar9;
        param_5 = param_5 * 0x28;
        do {
          uVar12 = 0;
          if (uVar9 <= uVar11) {
            uVar12 = uVar9;
          }
          uVar12 = uVar11 - uVar12;
          if (uVar9 < uVar12 || uVar9 - uVar12 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10acf0520);
            (*pcVar6)();
          }
          puVar13 = (undefined8 *)(lVar3 + uVar12 * 0x28);
          uVar15 = param_4[1];
          uVar14 = *param_4;
          uVar17 = param_4[3];
          uVar16 = param_4[2];
          *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(param_4 + 4);
          puVar13[1] = uVar15;
          *puVar13 = uVar14;
          puVar13[3] = uVar17;
          puVar13[2] = uVar16;
          param_4 = param_4 + 5;
          uVar11 = uVar11 + 1;
          param_5 = param_5 + -0x28;
        } while (param_5 != 0);
      }
      *param_2 = uVar2;
      param_2[1] = uVar1;
      return 1;
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 7);
  return 0;
}



/* Entry: 10acf0520; end: 10acf0577;  */

long FUN_10acf0520(long param_1)

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



/* Entry: 10acf0578; end: 10acf0587;  */

void FUN_10acf0578(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6d460;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10acf0588; end: 10acf05a7;  */

void FUN_10acf0588(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6d460;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acf05a8; end: 10acf05b3;  */

void FUN_10acf05a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10acf05b4; end: 10acf070f;  */

void FUN_10acf05b4(long *param_1,undefined8 param_2,code **param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code **ppcVar5;
  undefined8 *puVar6;
  long lVar7;
  code **ppcVar8;
  ulong uVar9;
  code **unaff_x24;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long *plStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = param_3[2];
  pcVar11 = param_3[3];
  ppcVar8 = param_3;
  __ZNSt3__115recursive_mutex4lockEv(pcVar11);
  puVar6 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar6 != puVar2) {
    unaff_x24 = &pcStack_98;
    do {
      if (((byte)param_3[3][0x40] & 1) == 0) {
        param_2 = *puVar6;
        uStack_80 = puVar6[1];
        uStack_88 = *puVar6;
        uStack_70 = puVar6[3];
        uStack_78 = puVar6[2];
        uStack_68 = *(undefined4 *)(puVar6 + 4);
        pcStack_98 = FUN_10acf0710;
        ppuStack_90 = &PTR_FUN_110c6d4a0;
        ppcVar8 = &pcStack_98;
        func_0x0001098b7eb4(&plStack_a0,pcVar10);
        (*(code *)*ppuStack_90)(&ppuStack_90);
        if (plStack_a0 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_a0 + 1);
          do {
            uVar9 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar9 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar9 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plStack_a0 + 8))();
            }
          }
        }
      }
      puVar6 = puVar6 + 5;
    } while (puVar6 != puVar2);
  }
  pcVar10 = pcVar11;
  __ZNSt3__115recursive_mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_90)(unaff_x24 + 1);
  __ZNSt3__115recursive_mutex6unlockEv(pcVar11);
  pcVar12 = pcVar10;
  __Unwind_Resume();
  ppcVar5 = &pcStack_d0;
  pcStack_a8 = FUN_10acf0710;
  pcStack_d0 = pcVar12;
  uStack_c8 = param_2;
  pcStack_c0 = pcVar10;
  pcStack_b8 = pcVar11;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_10aceead8(&pcStack_d0,0);
  puVar6 = (undefined8 *)0x28;
  __Znwm();
  pcVar10 = ppcVar8[2];
  pcVar12 = ppcVar8[5];
  pcVar11 = ppcVar8[4];
  puVar6[1] = ppcVar8[3];
  *puVar6 = pcVar10;
  puVar6[3] = pcVar12;
  puVar6[2] = pcVar11;
  puVar6[4] = ppcVar8[6];
  lVar7 = (long)*ppcVar5;
  *ppcVar5 = (code *)puVar6;
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10acf0710; end: 10acf077f;  */

void FUN_10acf0710(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar1 = &lStack_30;
  lStack_30 = param_1;
  uStack_28 = param_2;
  FUN_10aceead8(&lStack_30,0);
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar6 = *(undefined8 *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  puVar2[1] = *(undefined8 *)(param_3 + 0x18);
  *puVar2 = uVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  puVar2[4] = *(undefined8 *)(param_3 + 0x30);
  lVar3 = *plVar1;
  *plVar1 = (long)puVar2;
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10acf0780; end: 10acf080f;  */

void FUN_10acf0780(void)

{
  return;
}



/* Entry: 10acf0810; end: 10acf0ba7;  */

void FUN_10acf0810(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  int iVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  int iVar16;
  undefined1 *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  char cStack_49;
  long lStack_48;
  
  plVar15 = (long *)(param_1 + 0x70);
  lVar13 = param_1 + 0x10;
  lVar11 = *plVar15;
  if (((uint)*(undefined8 *)(*plVar15 + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(lVar11 + 0x90);
LAB_10acf0a80:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10acf0a84);
    (*pcVar6)();
  }
  if ((*(byte *)(lVar11 + 0xc0) & 1) == 0) goto LAB_10acf0a80;
  puVar14 = (undefined8 *)(param_1 + 0x48);
  FUN_10a4f0c8c(puVar14,lVar11 + 0x98);
  plVar7 = (long *)*plVar15;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar12 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar12 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar12 & 0x1fffffffc) == 4) {
      do {
        uVar12 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar12 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar12 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  lVar11 = *(long *)(param_1 + 0x80);
  ppuVar10 = &PTR_PTR_113306f10;
  FUN_10ae079a0(0,&PTR_PTR_113306f10);
  FUN_10ae07cd4(ppuVar10,&PTR_PTR_113306f10);
  plVar7 = *(long **)(lVar11 + 0x10);
  if (plVar7 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    *(long **)(param_1 + 0x78) = plVar7;
    if (plVar7 != (long *)0x0) {
      lVar11 = *(long *)(lVar11 + 8);
      *plVar15 = lVar11;
      iVar5 = 0;
      if (lVar11 != 0) {
        puVar8 = puVar14;
        FUN_10a4f0ad8();
        if (((ulong)puVar8 & 1) == 0) {
          func_0x0001092ba100(lVar13);
          iVar5 = 3;
        }
        else {
          if (*(char *)(param_1 + 0x5f) < '\0') {
            func_0x000107c3192c(&puStack_80,*(undefined8 *)(param_1 + 0x48),
                                *(undefined8 *)(param_1 + 0x50));
          }
          else {
            uStack_78 = *(ulong *)(param_1 + 0x50);
            puStack_80 = (undefined1 *)*puVar14;
            uStack_70 = *(ulong *)(param_1 + 0x58);
          }
          uVar12 = uStack_78;
          ppuVar4 = (undefined1 **)puStack_80;
          if (-1 < (long)uStack_70) {
            uVar12 = uStack_70 >> 0x38;
            ppuVar4 = &puStack_80;
          }
          pppuVar9 = &ppuStack_68;
          FUN_10a4f0e48(pppuVar9,ppuVar4,uVar12);
          func_0x00010ad031c0();
          func_0x00010941eff0(&lStack_48,&ppuStack_68,pppuVar9);
          FUN_10aceb468(lVar11 + 0x70,&lStack_48);
          lVar11 = lStack_48;
          lStack_48 = 0;
          if (lVar11 != 0) {
            FUN_109cda590();
            __ZdlPv();
          }
          ppuStack_68 = &PTR_DAT_110af47c8;
          if (cStack_49 < '\0') {
            __ZdlPv(uStack_60);
          }
          if ((long)uStack_70 < 0) {
            __ZdlPv(puStack_80);
          }
          iVar16 = 0;
          plVar7 = *(long **)(param_1 + 0x78);
          iVar5 = 0;
          if (plVar7 == (long *)0x0) goto LAB_10acf09fc;
        }
      }
      iVar16 = iVar5;
      plVar15 = plVar7 + 1;
      do {
        lVar11 = *plVar15;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *plVar15 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
      goto LAB_10acf09fc;
    }
  }
  iVar16 = 0;
LAB_10acf09fc:
  plVar15 = *(long **)(param_1 + 0x68);
  if (plVar15 != (long *)0x0) {
    plVar7 = plVar15 + 1;
    do {
      lVar11 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*puVar14);
  }
  if (iVar16 == 0) {
    func_0x0001092ba100(lVar13);
  }
  func_0x000109d1a1d0(lVar13);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10acf0ba8; end: 10acf0c17;  */

void FUN_10acf0ba8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10acf0c18; end: 10acf0ebf;  */

void FUN_10acf0c18(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    FUN_10aceafec(param_1 + 0x70,param_1 + 0x48);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x70);
    plVar5 = (long *)(*(long *)(param_1 + 0x70) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      lVar8 = *(long *)(param_1 + 0x60);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x60);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10acf0dfc);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x70);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  if (*(long *)(param_1 + 0x58) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10acf0ec0; end: 10acf0fd7;  */

void FUN_10acf0ec0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
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
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x70);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
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
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10acf0fd8; end: 10acf1263;  */

void FUN_10acf0fd8(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  
  lVar8 = *(long *)(param_1 + 0x70);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(lVar8 + 0x90);
LAB_10acf1198:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10acf119c);
    (*pcVar5)();
  }
  if ((*(byte *)(lVar8 + 0xc0) & 1) == 0) goto LAB_10acf1198;
  FUN_10a4f0c8c(param_1 + 0x48,lVar8 + 0x98);
  plVar6 = *(long **)(param_1 + 0x70);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar9 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar9 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  lVar8 = *(long *)(param_1 + 0x78);
  ppuVar7 = &PTR_PTR_113306f90;
  FUN_10ae079a0(0,&PTR_PTR_113306f90);
  FUN_10ae07cd4(ppuVar7,&PTR_PTR_113306f90);
  plVar6 = *(long **)(lVar8 + 0x10);
  if (plVar6 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar6 != (long *)0x0) {
      lVar8 = *(long *)(lVar8 + 8);
      iVar10 = 0;
      if (lVar8 != 0) {
        uVar9 = param_1 + 0x48;
        FUN_10a4f0ad8();
        if ((uVar9 & 1) == 0) {
          func_0x0001092ba100(param_1 + 0x10);
          iVar10 = 3;
        }
        else {
          FUN_10ace51d0(lVar8,*(long *)(param_1 + 0x78) + 0x20,*(long *)(param_1 + 0x78) + 0x90,
                        param_1 + 0x48);
          iVar10 = 0;
        }
      }
      plVar2 = plVar6 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
      goto LAB_10acf1118;
    }
  }
  iVar10 = 0;
LAB_10acf1118:
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  if (iVar10 == 0) {
    func_0x0001092ba100(param_1 + 0x10);
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10acf1264; end: 10acf12d3;  */

void FUN_10acf1264(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10acf12d4; end: 10acf1583;  */

void FUN_10acf12d4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
    FUN_10aced718(param_1 + 0x58,param_1 + 0x60);
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x58);
    plVar5 = (long *)(*(long *)(param_1 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x100) = 1;
      lVar8 = *(long *)(param_1 + 0x48);
      plVar5 = (long *)(lVar8 + 0x10);
      uStack_28 = *(undefined8 *)(param_1 + 0x18);
      do {
        lVar7 = *plVar5;
        if (lVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            uStack_38 = 0;
            lStack_30 = param_1;
            func_0x000109d1b588(lVar8 + 0x18,&uStack_38);
            *(undefined8 *)(lVar8 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar7 >> 1 & 1) == 0);
    }
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10acf14c0);
    (*pcVar4)();
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x0001092ba100(param_1 + 0x10);
  _free(*(undefined8 *)(param_1 + 0xd8));
  if (*(long *)(param_1 + 0x70) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10acf1584; end: 10acf16a3;  */

void FUN_10acf1584(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x100) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x48);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
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
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
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
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  _free(*(undefined8 *)(param_1 + 0xd8));
  if (*(long *)(param_1 + 0x70) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10acf16a4; end: 10acf186b;  */

void FUN_10acf16a4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  
  plVar5 = *(long **)(param_1 + 0x48);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) >> 5 & 1) == 0) {
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    FUN_10ace96a4(*(undefined8 *)(param_1 + 0x78));
    *(char *)(*(long *)(param_1 + 0x78) + 0x18) = (char)*(undefined8 *)(param_1 + 0x80);
    FUN_10ace9bb4();
    func_0x0001092ba100(param_1 + 0x10);
    func_0x000109d1a1d0(param_1 + 0x10);
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  func_0x0001092af97c(plVar5 + 0x12);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10acf17f8);
  (*pcVar4)();
}



/* Entry: 10acf186c; end: 10acf1987;  */

void FUN_10acf186c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x000109d1a1d0(param_1 + 0x10);
  plVar4 = *(long **)(param_1 + 0x68);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x60);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10acf1988; end: 10acf1bb3;  */

void FUN_10acf1988(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong in_stack_ffffffffffffff30;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar5 = 0;
  FUN_10a2421c8();
  FUN_10a048e7c(&plStack_60,*(undefined8 *)(lVar5 + 0x1e0),0,*(undefined4 *)(param_2 + 0xc),
                *(undefined4 *)(param_2 + 8),1,0x20,0x20,0,
                in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  plVar6 = *(long **)(lVar5 + 0x228);
  (**(code **)(*plVar6 + 0x50))();
  plVar7 = plVar6;
  func_0x00010a08f140();
  uVar1 = *(undefined8 *)(*plVar7 + 0x10);
  uVar2 = *(undefined8 *)(*plVar7 + 0x18);
  __ZNSt3__115recursive_mutex4lockEv(uVar2);
  FUN_10a4ca8f0(&lStack_68,param_2);
  plVar7 = plStack_60;
  (**(code **)(*plStack_60 + 0xb8))();
  uStack_78 = 0;
  uStack_70 = 0;
  plVar8 = plStack_60;
  (**(code **)(*plStack_60 + 0xb8))();
  (**(code **)(*plStack_60 + 0x28))();
  (**(code **)(*plStack_60 + 0x30))();
  func_0x000109295ec0(plVar6,uVar1,0,plVar7,&uStack_78,(long)plVar8 + 0x24,0);
  puVar9 = (undefined8 *)0x30;
  __Znwm();
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar10 = puVar9 + 3;
  *puVar9 = &PTR_DAT_110ba0c30;
  FUN_10a0983a4(puVar10,&plStack_60);
  *param_1 = puVar10;
  param_1[1] = puVar9;
  FUN_10a0986a0();
  if (lStack_68 != 0) {
    __ZdaPv(lStack_68);
  }
  __ZNSt3__115recursive_mutex6unlockEv(uVar2);
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58 + 1;
    do {
      lVar5 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  return;
}



/* Entry: 10acf1bb4; end: 10acf1c23;  */

undefined8 * FUN_10acf1bb4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_DAT_110c6d5a8;
  param_1[1] = 0;
  if (lVar1 != 0) {
    func_0x00010acfb33c();
  }
  return param_1;
}



/* Entry: 10acf1c24; end: 10acf1fe7;  */

long * FUN_10acf1c24(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
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
  undefined8 in_stack_ffffffffffffffa8;
  
  lVar17 = *(long *)(param_5 + 0x578);
  plVar16 = *(long **)(param_1 + 8);
  plVar7 = (long *)plVar16[1];
  if (plVar7 == (long *)0x0) {
    lVar18 = 0;
    plVar7 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 == (long *)0x0) {
      lVar18 = 0;
    }
    else {
      lVar18 = *plVar16;
    }
  }
  plVar16 = *(long **)(lVar17 + 0x18);
  if ((plVar16 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar16 == (long *)0x0)
     ) {
    bVar6 = lVar18 == 0;
  }
  else {
    bVar6 = lVar18 == *(long *)(lVar17 + 0x10);
    plVar1 = plVar16 + 1;
    do {
      lVar18 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar16 = plVar7 + 1;
    do {
      lVar18 = *plVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = *(long **)(param_1 + 8);
  if (!bVar6) {
    lVar20 = *(long *)(lVar17 + 0x18);
    lVar18 = *(long *)(lVar17 + 0x10);
    if (*(long *)(lVar17 + 0x18) != 0) {
      plVar16 = (long *)(*(long *)(lVar17 + 0x18) + 0x10);
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar17 = plVar7[1];
    plVar7[1] = lVar20;
    *plVar7 = lVar18;
    if (lVar17 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar16 = *(long **)(param_1 + 8);
    plVar7 = (long *)plVar16[1];
    if ((plVar7 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)
       ) {
      puVar8 = (undefined8 *)*plVar16;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(&stack0xffffffffffffffa8);
        lVar17 = *(long *)(param_1 + 8);
        plVar16 = *(long **)(lVar17 + 0x10);
        if (plVar16 != (long *)0x0) {
          puVar2 = (ulong *)(plVar16 + 1);
          do {
            uVar14 = *puVar2;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar6) {
              *puVar2 = uVar14 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar2;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = uVar14 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar16 + 8))();
            }
          }
        }
        *(undefined8 *)(lVar17 + 0x10) = in_stack_ffffffffffffffa8;
      }
      plVar16 = plVar7 + 1;
      do {
        lVar17 = *plVar16;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar7 = *(long **)(param_1 + 8);
  }
  plVar16 = (long *)plVar7[1];
  if ((plVar16 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar16 != (long *)0x0)
     ) {
    lVar17 = *plVar7;
    plVar7 = plVar16 + 1;
    do {
      lVar18 = *plVar7;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar6) {
        *plVar7 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
    if (lVar17 != 0) {
      lVar17 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      if ((lVar17 != 0) && (((uint)*(undefined8 *)(lVar17 + 0x10) >> 1 & 1) != 0)) {
        lVar17 = *(long *)(param_1 + 8);
        plVar16 = (long *)(lVar17 + 0x10);
        func_0x0001092af8bc(plVar16);
        lVar17 = *(long *)(lVar17 + 0x10);
        if ((*(byte *)(lVar17 + 0xf8) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10acf1fa8);
          (*pcVar5)();
        }
        if (*(char *)(lVar17 + 0xd0) == '\x01') {
          puVar8 = (undefined8 *)0x38;
          __Znwm();
          if (*(char *)(lVar17 + 0xaf) < '\0') {
            func_0x000107c3192c(puVar8,*(undefined8 *)(lVar17 + 0x98),*(undefined8 *)(lVar17 + 0xa0)
                               );
          }
          else {
            uVar21 = *(undefined8 *)(lVar17 + 0xa0);
            uVar13 = *(undefined8 *)(lVar17 + 0x98);
            puVar8[2] = *(undefined8 *)(lVar17 + 0xa8);
            puVar8[1] = uVar21;
            *puVar8 = uVar13;
          }
          uVar13 = *(undefined8 *)(lVar17 + 0xb0);
          plVar16 = puVar8 + 4;
          *plVar16 = 0;
          puVar8[3] = uVar13;
          puVar8[5] = 0;
          puVar8[6] = 0;
          FUN_10a503a10();
          lVar18 = *(long *)(param_4 + 0x150);
          *(undefined8 **)(param_4 + 0x150) = puVar8;
          if (lVar18 != 0) {
            plVar16 = (long *)(param_4 + 0x150);
            func_0x00010a502888(plVar16);
          }
        }
        if (*(char *)(lVar17 + 0xf0) == '\x01') {
          plVar7 = (long *)0x18;
          __Znwm();
          plVar16 = plVar7;
          if (*(char *)(lVar17 + 0xef) < '\0') {
            func_0x000107c3192c(plVar7,*(undefined8 *)(lVar17 + 0xd8),*(undefined8 *)(lVar17 + 0xe0)
                               );
          }
          else {
            lVar20 = *(long *)(lVar17 + 0xe0);
            lVar18 = *(long *)(lVar17 + 0xd8);
            plVar7[2] = *(long *)(lVar17 + 0xe8);
            plVar7[1] = lVar20;
            *plVar7 = lVar18;
          }
          lVar17 = *(long *)(param_4 + 0x158);
          *(long **)(param_4 + 0x158) = plVar7;
          if (lVar17 != 0) {
            plVar16 = (long *)(param_4 + 0x158);
            func_0x00010a50299c(plVar16);
          }
        }
      }
      return plVar16;
    }
  }
  ppuVar12 = &PTR_PTR_1133073c8;
  ppuVar11 = ppuVar12;
  FUN_10ae079a0(0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)0x0;
  if (ppuVar11 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar11[0x13],ppuVar11[0xf],
                  ppuVar11 + 0x14,0x400);
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
    puVar19 = ppuVar11[0x12];
    puVar15 = ppuVar11[0xb];
    uVar9 = 0;
    _clock_gettime_nsec_np();
    uVar14 = uVar9;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar11 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar11 + 0xe);
    uStack_8c0 = uVar14 & 0xffffffff;
    ppuStack_8b0 = ppuVar11 + 0x10;
    plVar7 = (long *)*ppuVar11;
    ppuVar12 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar15;
    puStack_8d8 = puVar19;
    uStack_8d0 = (ulong)(puVar19 != (undefined *)0x0);
    uStack_8c8 = uVar9;
    FUN_10ae0784c(plVar7,ppuVar12,&puStack_900,&puStack_918);
  }
  iVar10 = (int)ppuVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return plVar7;
  }
  ___stack_chk_fail();
  if (iVar10 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010ae087bc();
  FUN_10ae07e54(plVar7);
  return plVar7;
}



/* Entry: 10acf1fe8; end: 10acf222b;  */

long * FUN_10acf1fe8(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x200))(param_1,&PTR_DAT_110c6d610);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_1 + 0x210))(param_1,&PTR_DAT_110c6d610);
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x50))(param_1,&PTR_DAT_110c6d630);
    if ((int)plVar2 != 0) {
      func_0x00010acf20ac(param_1,&PTR_DAT_110c6d650,param_2 + 0x150,&PTR_DAT_110c6d670);
      func_0x00010acf2170(param_1,&PTR_DAT_110c6d690,param_2 + 0x158,&PTR_DAT_110c6d6b0);
    }
    (**(code **)(*param_1 + 0x220))(param_1);
  }
  return plVar1;
}



/* Entry: 10acf222c; end: 10acf25df;  */

void FUN_10acf222c(undefined8 *param_1,long *param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0xa0))(&uStack_38,param_2,&PTR_DAT_110c6d6d0);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  return;
}



/* Entry: 10acf25e0; end: 10acf2823;  */

void FUN_10acf25e0(ulong param_1)

{
  ulong uVar1;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "MappingThrottling";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Off";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acf2780(param_1,&pcStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Background";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acf2780();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Auto";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acf2780();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Foreground";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acf2780();
  FUN_10a003ff4();
  return;
}



/* Entry: 10acf2824; end: 10acf2a6f;  */

void FUN_10acf2824(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x200))(param_1,&PTR_DAT_110c6d7d0);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_1 + 0x1a8))(&uStack_60,param_1,&PTR_DAT_110c6d7d0);
    *(undefined8 *)(param_2 + 0x20) = uStack_58;
    *(undefined8 *)(param_2 + 0x18) = uStack_60;
    *(undefined8 *)(param_2 + 0x30) = uStack_48;
    *(undefined8 *)(param_2 + 0x28) = uStack_50;
    *(undefined8 *)(param_2 + 0x40) = uStack_38;
    *(undefined8 *)(param_2 + 0x38) = uStack_40;
    *(undefined8 *)(param_2 + 0x50) = uStack_28;
    *(undefined8 *)(param_2 + 0x48) = uStack_30;
    if ((*(byte *)(param_2 + 0x58) & 1) == 0) {
      *(undefined1 *)(param_2 + 0x58) = 1;
    }
  }
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x200))(param_1,&PTR_DAT_110c6da50);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_1 + 0xa0))(&uStack_60,param_1,&PTR_DAT_110c6da50);
    if (*(char *)(param_2 + 0x78) == '\x01') {
      if (*(char *)(param_2 + 0x77) < '\0') {
        __ZdlPv(*(undefined8 *)(param_2 + 0x60));
      }
      *(undefined8 *)(param_2 + 0x68) = uStack_58;
      *(undefined8 *)(param_2 + 0x60) = uStack_60;
      *(undefined8 *)(param_2 + 0x70) = uStack_50;
    }
    else {
      *(undefined8 *)(param_2 + 0x68) = uStack_58;
      *(undefined8 *)(param_2 + 0x60) = uStack_60;
      *(undefined8 *)(param_2 + 0x70) = uStack_50;
      *(undefined1 *)(param_2 + 0x78) = 1;
    }
  }
  return;
}



/* Entry: 10acf2a70; end: 10acf2b77;  */

void FUN_10acf2a70(byte *param_1,byte *param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *apuStack_68 [3];
  undefined1 auStack_49 [9];
  
  if (param_2[0x38] == 1) {
    func_0x00010a1cca60(param_1 + 0x20,param_2 + 0x20);
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  FUN_10acf2b78(&uStack_80,
                (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x6db6db6db6db6db7 +
                (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 3) * 0x6db6db6db6db6db7);
  FUN_10acf9174(apuStack_68,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&uStack_80,auStack_49);
  FUN_10a2319d4(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = uStack_78;
  *(undefined8 *)(param_1 + 8) = uStack_80;
  *(undefined8 *)(param_1 + 0x18) = uStack_70;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  *param_1 = *param_1 | *param_2;
  apuStack_68[0] = (undefined1 *)&uStack_80;
  FUN_10a2303d4(apuStack_68);
  return;
}



/* Entry: 10acf2b78; end: 10acf2c5b;  */

long **** FUN_10acf2b78(long ****param_1,long *param_2)

{
  long ****pppplVar1;
  char cVar2;
  bool bVar3;
  long ****pppplVar4;
  long ***ppplVar5;
  long ****extraout_x8;
  long lVar6;
  long ***ppplVar7;
  long ***ppplStack_c0;
  long **pplStack_b8;
  long **pplStack_b0;
  long lStack_a8;
  long ***ppplStack_a0;
  undefined8 uStack_98;
  long ***ppplStack_90;
  long lStack_88;
  long ***ppplStack_58;
  long **pplStack_50;
  long **pplStack_48;
  long ***ppplStack_40;
  long ***ppplStack_38;
  
  ppplVar5 = *param_1;
  if ((long *)(((long)param_1[2] - (long)ppplVar5 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    if ((long *)0x492492492492492 < param_2) {
      FUN_10a2301c4();
      func_0x00010acf9128(&ppplStack_58);
      __Unwind_Resume();
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar6 = *param_2;
      if (lVar6 == 0) {
        *extraout_x8 = (long ***)0x0;
        extraout_x8[1] = (long ***)0x0;
        extraout_x8[2] = (long ***)0x0;
      }
      else {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          func_0x000107c3192c(&ppplStack_c0,*param_1,param_1[1]);
          lVar6 = *param_2;
        }
        else {
          pplStack_b8 = (long **)param_1[1];
          ppplStack_c0 = *param_1;
          pplStack_b0 = (long **)param_1[2];
        }
        ppplStack_a0 = (long ***)param_2[1];
        if ((long ****)ppplStack_a0 != (long ****)0x0) {
          pppplVar4 = (long ****)(ppplStack_a0 + 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppplVar4,0x10);
            if (bVar3) {
              *pppplVar4 = (long ***)((long)*pppplVar4 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_98 = 0;
        ppplStack_90 = (long ***)0x0;
        extraout_x8[1] = (long ***)0x0;
        extraout_x8[2] = (long ***)0x0;
        *extraout_x8 = (long ***)0x0;
        param_1 = extraout_x8;
        lStack_a8 = lVar6;
        FUN_10acf9498(extraout_x8,&ppplStack_c0,&lStack_88,1);
        pppplVar4 = (long ****)ppplStack_90;
        if ((long ****)ppplStack_90 != (long ****)0x0) {
          pppplVar1 = (long ****)(ppplStack_90 + 1);
          do {
            ppplVar5 = *pppplVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
            if (bVar3) {
              *pppplVar1 = (long ***)((long)ppplVar5 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppplVar5 == (long ***)0x0) {
            (*(code *)(*ppplStack_90)[2])(ppplStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            param_1 = pppplVar4;
          }
        }
        pppplVar4 = (long ****)ppplStack_a0;
        if ((long ****)ppplStack_a0 != (long ****)0x0) {
          pppplVar1 = (long ****)(ppplStack_a0 + 1);
          do {
            ppplVar5 = *pppplVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
            if (bVar3) {
              *pppplVar1 = (long ***)((long)ppplVar5 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppplVar5 == (long ***)0x0) {
            (*(code *)(*ppplStack_a0)[2])(ppplStack_a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            param_1 = pppplVar4;
          }
        }
        if ((long)pplStack_b0 < 0) {
          param_1 = (long ****)ppplStack_c0;
          __ZdlPv();
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return param_1;
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      func_0x00010a23037c(param_1 + 5);
      FUN_10a22ffb4(param_1 + 3);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      return param_1;
    }
    ppplVar7 = param_1[1];
    pppplVar4 = param_1;
    ppplStack_38 = (long ***)param_1;
    FUN_10a2301d8();
    ppplVar5 = (long ***)((long)pppplVar4 + ((long)ppplVar7 - (long)ppplVar5));
    ppplVar7 = (long ***)((long)ppplVar5 + ((long)*param_1 - (long)param_1[1]));
    ppplStack_58 = (long ***)pppplVar4;
    pplStack_50 = (long **)ppplVar5;
    pplStack_48 = (long **)ppplVar5;
    ppplStack_40 = (long ***)(pppplVar4 + (long)param_2 * 7);
    func_0x00010acf90a8(param_1,*param_1,param_1[1],ppplVar7);
    ppplStack_58 = *param_1;
    *param_1 = ppplVar7;
    param_1[1] = ppplVar5;
    ppplStack_40 = param_1[2];
    param_1[2] = (long ***)(pppplVar4 + (long)param_2 * 7);
    param_1 = &ppplStack_58;
    pplStack_50 = (long **)ppplStack_58;
    pplStack_48 = (long **)ppplStack_58;
    func_0x00010acf9128(param_1);
  }
  return param_1;
}



/* Entry: 10acf2c5c; end: 10acf2dcf;  */

long * FUN_10acf2c5c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *param_3;
  if (lVar5 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&plStack_60,*param_2,param_2[1]);
      lVar5 = *param_3;
    }
    else {
      lStack_58 = param_2[1];
      plStack_60 = (long *)*param_2;
      lStack_50 = param_2[2];
    }
    plStack_40 = (long *)param_3[1];
    if (plStack_40 != (long *)0x0) {
      plVar4 = plStack_40 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = 0;
    plStack_30 = (long *)0x0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    lStack_48 = lVar5;
    FUN_10acf9498(param_1,&plStack_60,&lStack_28,1);
    plVar4 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plVar4;
      }
    }
    plVar4 = plStack_40;
    param_2 = param_1;
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = plVar4;
      }
    }
    if (lStack_50 < 0) {
      param_2 = plStack_60;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010a23037c(param_2 + 5);
  FUN_10a22ffb4(param_2 + 3);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __ZdlPv(*param_2);
  }
  return param_2;
}



/* Entry: 10acf2dd0; end: 10acf2f73;  */

undefined8 * FUN_10acf2dd0(undefined8 *param_1)

{
  func_0x00010a23037c(param_1 + 5);
  FUN_10a22ffb4(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10acf2f74; end: 10acf32ab;  */

void FUN_10acf2f74(ulong param_1)

{
  ulong uVar1;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "TrackedMeshFaceClassification";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "None";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acf3204(param_1,&pcStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Wall";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acf3204();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Floor";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acf3204();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Ceiling";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acf3204();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Table";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acf3204();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Seat";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acf3204();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Window";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acf3204();
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_98 = "Door";
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a2775;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010acf3204();
  FUN_10a003ff4();
  return;
}



/* Entry: 10acf32ac; end: 10acf32d7;  */

undefined8 FUN_10acf32ac(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_2 + 0x4d8) & 1) != 0) {
    uVar2 = 0x16800000003;
    if (*(char *)(param_2 + 0x4b8) == '\0') {
      uVar2 = 0x168ffffffff;
    }
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10acf32d8);
  (*pcVar1)();
}



/* Entry: 10acf32d8; end: 10acf33bb;  */

uint FUN_10acf32d8(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  
  if ((*(byte *)(param_2 + 0x4d8) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10acf33a8);
    (*pcVar3)();
  }
  if (*(char *)(param_2 + 0x4d5) == '\x01') {
    uVar7 = (uint)*(byte *)(param_2 + 0x4d4);
  }
  else if (*(int *)(param_1 + 0x1f0) == 1) {
    plVar4 = *(long **)(param_1 + 0x1e8);
    if (plVar4 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 != (long *)0x0) {
        plVar5 = *(long **)(param_1 + 0x1e0);
        if (plVar5 == (long *)0x0) {
          uVar7 = 1;
        }
        else {
          (**(code **)(*plVar5 + 0x68))();
          uVar7 = (uint)plVar5 ^ 1;
        }
        plVar5 = plVar4 + 1;
        do {
          lVar6 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
        goto LAB_10acf3390;
      }
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
LAB_10acf3390:
  return uVar7 & 1;
}



/* Entry: 10acf33bc; end: 10acf33df;  */

undefined8 FUN_10acf33bc(int param_1)

{
  undefined8 uVar1;
  
  FUN_10acf32d8();
  uVar1 = 0x308;
  if (param_1 == 0) {
    uVar1 = 0x300;
  }
  return uVar1;
}



/* Entry: 10acf33e0; end: 10acf350b;  */

void FUN_10acf33e0(undefined8 param_1,long param_2)

{
  code *pcVar1;
  byte bVar2;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  uStack_38 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  uStack_40 = uStack_40 & 0xffffffffffffff00;
  uStack_34 = 0x1000000;
  uStack_30 = 0;
  uStack_24 = 0;
  FUN_10a051998(param_2 + 0x138,&lStack_58);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  FUN_10acf32d8(param_1,param_2);
  if ((int)param_1 == 0) {
    if ((*(byte *)(param_2 + 0x4d8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acf34dc);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(param_2 + 0x4b9);
    if ((*(byte *)(param_2 + 0x4dd) & 1) == 0) {
      *(undefined1 *)(param_2 + 0x4dd) = 1;
    }
    else {
      bVar2 = *(byte *)(param_2 + 0x4dc) | bVar2;
    }
    *(byte *)(param_2 + 0x4dc) = bVar2;
  }
  else {
    if ((*(byte *)(param_2 + 0x4e1) & 1) == 0) {
      *(undefined2 *)(param_2 + 0x4df) = 0;
      *(undefined1 *)(param_2 + 0x4e1) = 1;
    }
    *(undefined1 *)(param_2 + 0x4de) = 1;
    lStack_58 = CONCAT26(lStack_58._6_2_,0x10200);
    uStack_48 = 0;
    uStack_40 = 0;
    lStack_50 = 0;
    FUN_10a113ca0(param_2 + 0x2d8,&lStack_58);
    if ((long)uStack_40 < 0) {
      __ZdlPv(lStack_50);
    }
  }
  return;
}



/* Entry: 10acf350c; end: 10acf3803;  */

void FUN_10acf350c(undefined **param_1,undefined *param_2,long *param_3,long param_4,
                  undefined **param_5,undefined **param_6)

{
  long *plVar1;
  ulong *puVar2;
  undefined2 uVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  undefined **ppuVar17;
  double *pdVar18;
  undefined8 *puVar19;
  undefined ***pppuVar20;
  long lVar21;
  undefined **ppuVar22;
  ulong uVar23;
  byte bVar24;
  long lVar25;
  undefined *puVar26;
  undefined *puVar27;
  int *piVar28;
  ulong uVar29;
  undefined **extraout_x10;
  undefined **ppuVar30;
  long *plVar31;
  undefined **ppuVar32;
  undefined8 *puVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  int iVar36;
  undefined **unaff_x28;
  undefined **ppuVar37;
  long *plVar38;
  float fVar39;
  double dVar40;
  undefined **ppuVar41;
  undefined8 uVar42;
  undefined **ppuVar43;
  undefined8 uVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined *puVar49;
  undefined8 uVar50;
  undefined *puVar51;
  undefined8 uVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined4 uVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  undefined4 uStack_df8;
  undefined4 uStack_df0;
  undefined **ppuStack_de0;
  undefined **ppuStack_da8;
  undefined **ppuStack_d98;
  long lStack_d90;
  undefined8 uStack_d88;
  undefined4 uStack_d80;
  undefined **ppuStack_d78;
  long lStack_d70;
  undefined8 uStack_d68;
  int iStack_d60;
  undefined **ppuStack_d58;
  long lStack_d50;
  undefined8 uStack_d48;
  int iStack_d40;
  undefined **ppuStack_d38;
  undefined **ppuStack_d30;
  undefined **ppuStack_d28;
  undefined **ppuStack_d20;
  undefined **ppuStack_d18;
  undefined **ppuStack_d10;
  long *plStack_d08;
  undefined **ppuStack_d00;
  undefined *puStack_cf8;
  undefined8 uStack_cf0;
  undefined *puStack_ce8;
  undefined *puStack_ce0;
  undefined8 uStack_cd8;
  undefined *puStack_cd0;
  undefined *puStack_cc8;
  undefined8 *puStack_cc0;
  undefined8 *puStack_cb8;
  undefined *puStack_cb0;
  undefined *puStack_ca0;
  undefined *puStack_c98;
  long *plStack_c90;
  undefined **ppuStack_c88;
  undefined *puStack_c80;
  undefined8 uStack_c78;
  undefined *puStack_c70;
  undefined *puStack_c68;
  undefined4 uStack_c60;
  undefined *puStack_c58;
  undefined *puStack_c50;
  undefined *puStack_c40;
  undefined *puStack_c38;
  undefined *puStack_c30;
  undefined8 uStack_c28;
  undefined *puStack_c20;
  undefined *puStack_c18;
  undefined *puStack_c10;
  undefined8 *puStack_c00;
  undefined8 *puStack_bf8;
  undefined *puStack_bf0;
  undefined *puStack_be8;
  undefined *puStack_be0;
  undefined *puStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb0;
  long *plStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined4 uStack_af0;
  undefined *puStack_ae8;
  undefined *puStack_ae0;
  undefined8 uStack_ad8;
  long lStack_ad0;
  long lStack_ac8;
  undefined8 uStack_ac0;
  long lStack_ab8;
  long lStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined1 uStack_a68;
  undefined1 uStack_a67;
  undefined6 uStack_a5e;
  undefined2 uStack_a58;
  ulong uStack_a50;
  long *plStack_a48;
  char cStack_a40;
  undefined8 uStack_a30;
  undefined **ppuStack_a28;
  undefined8 uStack_a20;
  undefined **ppuStack_a18;
  undefined *puStack_a10;
  double dStack_a08;
  undefined *puStack_a00;
  undefined *puStack_9f8;
  long *plStack_9f0;
  undefined **ppuStack_9e8;
  undefined *puStack_9e0;
  undefined8 uStack_9d8;
  undefined *puStack_9d0;
  undefined *puStack_9c8;
  undefined8 uStack_9c0;
  undefined *puStack_9b8;
  undefined *puStack_9b0;
  undefined *puStack_9a0;
  undefined *puStack_998;
  undefined *puStack_990;
  undefined8 uStack_988;
  undefined *puStack_980;
  undefined *puStack_978;
  undefined *puStack_970;
  undefined8 *puStack_960;
  undefined8 *puStack_958;
  undefined *puStack_950;
  undefined *puStack_948;
  undefined *puStack_940;
  undefined *puStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_910;
  long *plStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined4 uStack_850;
  undefined *puStack_848;
  undefined *puStack_840;
  undefined8 uStack_838;
  long lStack_830;
  long lStack_828;
  undefined8 uStack_820;
  long lStack_818;
  long lStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined2 uStack_7c8;
  undefined8 uStack_7be;
  ulong uStack_7b0;
  long *plStack_7a8;
  char cStack_7a0;
  undefined **ppuStack_790;
  long lStack_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  int iStack_778;
  undefined **ppuStack_770;
  undefined **ppuStack_768;
  undefined8 uStack_760;
  undefined4 uStack_758;
  char cStack_750;
  undefined **ppuStack_748;
  long lStack_740;
  undefined4 uStack_738;
  undefined4 uStack_734;
  int iStack_730;
  undefined **ppuStack_728;
  undefined **ppuStack_720;
  undefined **ppuStack_718;
  undefined **ppuStack_710;
  long lStack_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 *puStack_6e0;
  undefined *puStack_6d8;
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  long *plStack_6b0;
  undefined **ppuStack_6a8;
  undefined *puStack_6a0;
  undefined8 uStack_698;
  undefined *puStack_690;
  undefined *puStack_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined *puStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined *puStack_650;
  undefined8 uStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined *puStack_630;
  undefined2 uStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined *puStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d0;
  long *plStack_5c8;
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
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined4 uStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined2 uStack_488;
  undefined8 uStack_47e;
  ulong uStack_470;
  long *plStack_468;
  undefined1 uStack_460;
  undefined **ppuStack_450;
  long lStack_448;
  undefined **ppuStack_440;
  int iStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined1 uStack_410;
  undefined **ppuStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  int iStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined8 *puStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  double dStack_378;
  undefined *puStack_370;
  long *plStack_360;
  undefined **ppuStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  long lStack_308;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  double *pdStack_270;
  long *plStack_268;
  undefined1 auStack_260 [88];
  undefined8 uStack_208;
  long lStack_1e8;
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
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
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  char cStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_4 + 0x198);
  ppuVar17 = param_1;
  ppuVar30 = param_5;
  lVar21 = param_4;
  ppuVar22 = param_5;
  FUN_10acf32d8();
  if ((((int)ppuVar17 != 0) && (*(long *)(param_4 + 0x218) != 0)) &&
     (ppuVar17 = *(undefined ***)(param_4 + 0x70), ppuVar17 != (undefined **)0x0)) {
    uVar4 = *(uint *)(*(long *)(param_4 + 0x218) + 0xa0);
    ppuVar30 = (undefined **)(long)(int)uVar4;
    FUN_10ac27820();
    if ((int)ppuVar17 != 0) {
      if (1 < uVar4) goto LAB_10acf37cc;
      if ((*(long *)(param_4 + 0x70) != 0) &&
         (plVar31 = (long *)(*(long *)(param_4 + 0x70) + (long)(int)uVar4 * 0x298), plVar31[2] != 0)
         ) {
        uVar23 = (ulong)*(uint *)((long)plVar31 + 4);
        if ((int)*(uint *)((long)plVar31 + 4) < 3) {
          lVar25 = (long)*(int *)((long)plVar31 + 0xc) * (long)(int)plVar31[1];
        }
        else {
          lVar25 = 1;
          piVar28 = (int *)plVar31[8];
          do {
            lVar25 = lVar25 * *piVar28;
            uVar23 = uVar23 - 1;
            piVar28 = piVar28 + 1;
          } while (uVar23 != 0);
        }
        if (lVar25 != 0) {
          if (((ulong)param_5[0x9b] & 1) == 0) goto LAB_10acf37cc;
          FUN_10acf3804(param_1 + 4,plVar31,param_5 + 0x97);
          *(undefined *)(param_1 + 0x38) = *(undefined *)((long)param_5 + 1);
          puStack_178 = (undefined *)((ulong)puStack_178 & 0xffffffffffffff00);
          cStack_e8 = '\0';
          if (param_2 == (undefined *)0x0) {
            param_6 = (undefined **)0x0;
          }
          else {
            ppuVar17 = (undefined **)0x20;
            __Znwm();
            *ppuVar17 = (undefined *)&PTR_FUN_110c6dca8;
            ppuVar17[1] = (undefined *)0x0;
            ppuVar17[2] = (undefined *)0x0;
            ppuVar17[3] = param_2;
            uStack_98 = *(undefined8 *)(param_4 + 0x1e0);
            uStack_a0 = *(undefined8 *)(param_4 + 0x1d8);
            uStack_90 = *(undefined8 *)(param_4 + 0x1e8);
            uStack_88 = (undefined4)*(undefined8 *)(param_4 + 0x1f0);
            uStack_7c = *(undefined8 *)(param_4 + 0x1fc);
            uStack_84 = (undefined4)*(undefined8 *)(param_4 + 500);
            uStack_80 = (undefined4)((ulong)*(undefined8 *)(param_4 + 500) >> 0x20);
            uStack_d8 = *(undefined8 *)(param_4 + 0x1a0);
            puStack_e0 = *(undefined **)(param_4 + 0x198);
            uStack_c8 = *(undefined8 *)(param_4 + 0x1b0);
            uStack_d0 = *(undefined8 *)(param_4 + 0x1a8);
            uStack_b8 = *(undefined8 *)(param_4 + 0x1c0);
            uStack_c0 = *(undefined8 *)(param_4 + 0x1b8);
            uStack_a8 = *(undefined8 *)(param_4 + 0x1d0);
            uStack_b0 = *(undefined8 *)(param_4 + 0x1c8);
            uStack_f8 = *(undefined8 *)(param_4 + 0x208);
            ppuStack_f0 = *(undefined ***)(param_4 + 0x210);
            if (ppuStack_f0 != (undefined **)0x0) {
              ppuVar30 = ppuStack_f0 + 1;
              do {
                cVar5 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(ppuVar30,0x10);
                if (bVar13) {
                  *ppuVar30 = *ppuVar30 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            param_6 = &puStack_178;
            func_0x00010acee1f4(&puStack_178);
            uStack_120 = uStack_98;
            uStack_128 = uStack_a0;
            uStack_110 = uStack_88;
            uStack_118 = uStack_90;
            uStack_104 = uStack_7c;
            uStack_10c = uStack_84;
            uStack_108 = uStack_80;
            uStack_160 = uStack_d8;
            puStack_168 = puStack_e0;
            uStack_150 = uStack_c8;
            uStack_158 = uStack_d0;
            uStack_130 = uStack_a8;
            uStack_138 = uStack_b0;
            uStack_140 = uStack_b8;
            uStack_148 = uStack_c0;
            cStack_e8 = '\x01';
            *(undefined1 *)((long)param_1 + 0x1dc) =
                 *(undefined1 *)(*(long *)(param_4 + 0x218) + 0x14);
            puStack_178 = param_2;
            ppuStack_170 = ppuVar17;
          }
          lVar21 = *(long *)(param_4 + 0xd0);
          ppuVar22 = *(undefined ***)(param_4 + 0x140);
          FUN_10acf399c(param_1 + 4,param_4 + 0x10,plVar31,lVar21);
          ppuVar17 = &puStack_e0;
          FUN_10acf5d54(ppuVar17,param_1 + 4);
          ppuVar30 = *(undefined ***)(param_4 + 0x148);
          *(undefined **)(param_4 + 0x148) = puStack_e0;
          param_3 = plVar31;
          if (ppuVar30 != (undefined **)0x0) {
            ppuVar17 = (undefined **)(param_4 + 0x148);
            func_0x00010a502838();
            param_3 = plVar31;
          }
          ppuVar34 = ppuStack_f0;
          if (cStack_e8 == '\x01') {
            if (ppuStack_f0 != (undefined **)0x0) {
              ppuVar37 = ppuStack_f0 + 1;
              do {
                puVar26 = *ppuVar37;
                cVar5 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(ppuVar37,0x10);
                if (bVar13) {
                  *ppuVar37 = puVar26 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar26 == (undefined *)0x0) {
                (**(code **)(*ppuStack_f0 + 0x10))(ppuStack_f0);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                ppuVar17 = ppuVar34;
              }
            }
            ppuVar34 = ppuStack_170;
            if (ppuStack_170 != (undefined **)0x0) {
              ppuVar37 = ppuStack_170 + 1;
              do {
                puVar26 = *ppuVar37;
                cVar5 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(ppuVar37,0x10);
                if (bVar13) {
                  *ppuVar37 = puVar26 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar26 == (undefined *)0x0) {
                (**(code **)(*ppuStack_170 + 0x10))(ppuStack_170);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                ppuVar17 = ppuVar34;
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar30 != 0) {
    ___cxa_begin_catch(ppuVar17);
    ___cxa_rethrow();
LAB_10acf37cc:
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10acf37d0);
    (*pcVar12)();
  }
  __Unwind_Resume();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*ppuVar17 == (undefined *)0x0) ||
     (plVar31 = param_3, (*(byte *)((long)param_3 + 0x1e) & 1) != 0)) {
    FUN_10acf5e7c(ppuVar17);
    *(char *)(ppuVar17 + 0x31) = (char)*param_3;
    FUN_10acdd07c(auStack_260,ppuVar30 + 0x25);
    unaff_d10 = (ulong)*(uint *)((long)param_3 + 4);
    unaff_d11 = (ulong)*(uint *)(param_3 + 1);
    uVar61 = *(undefined4 *)((long)param_3 + 0xc);
    unaff_d8 = (ulong)*(uint *)(param_3 + 2);
    bVar24 = *(byte *)((long)param_3 + 0x14);
    unaff_d9 = (ulong)*(uint *)(param_3 + 3);
    plVar31 = (long *)0x30;
    __Znwm();
    plVar31[1] = 0;
    plVar31[2] = 0;
    pdVar18 = (double *)(plVar31 + 3);
    *plVar31 = (long)&PTR_FUN_110c6dd58;
    ppuVar22 = (undefined **)(ulong)(bVar24 & 1);
    param_3 = (long *)0x0;
    lVar21 = 3;
    func_0x00010943eb10(unaff_d10,unaff_d11,uVar61,unaff_d8,unaff_d9,pdVar18,auStack_260,0,3);
    pdStack_270 = pdVar18;
    plStack_268 = plVar31;
    _free(uStack_208);
    FUN_10acf6f80(ppuVar17,&pdStack_270);
    plVar38 = plStack_268;
    if (plStack_268 != (long *)0x0) {
      plVar1 = plStack_268 + 1;
      do {
        lVar25 = *plVar1;
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar25 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plStack_268 + 0x10))(plStack_268);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar38);
      }
    }
    ppuVar30 = &PTR_PTR_1133073f8;
    ppuVar17 = ppuVar30;
    FUN_10ae079a0(0);
    FUN_10ae07cd4();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(plVar31);
  __ZdlPv();
  _free(uStack_208);
  __Unwind_Resume();
  uStack_2f0 = unaff_d11;
  uStack_2e8 = unaff_d10;
  uStack_2e0 = unaff_d9;
  uStack_2d8 = unaff_d8;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar34 = ppuVar30;
  if (*(char *)(ppuVar17 + 0x34) == '\0') {
LAB_10acf3a24:
    if ((*(byte *)((long)param_3 + 0x281) & 1) == 0) {
      uStack_6e8 = (undefined **)param_3[1];
      uStack_6f0 = (undefined **)*param_3;
      puStack_6d8 = (undefined *)param_3[3];
      puStack_6e0 = (undefined8 *)param_3[2];
      puStack_6c8 = (undefined *)param_3[5];
      puStack_6d0 = (undefined *)param_3[4];
      plStack_6b0 = (long *)((ulong)&uStack_6f0 | 8);
      iVar36 = *(int *)((long)param_3 + 4);
      puStack_6b8 = (undefined *)param_3[7];
      puStack_6c0 = (undefined *)param_3[6];
      uStack_698 = 0;
      puStack_6a0 = (undefined *)0x0;
      if (param_3[7] != 0) {
        piVar28 = (int *)(param_3[7] + 0x14);
        do {
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar28,0x10);
          if (bVar13) {
            *piVar28 = *piVar28 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        iVar36 = *(int *)((long)param_3 + 4);
      }
      ppuStack_6a8 = &puStack_6a0;
      if (iVar36 < 3) {
        puStack_6a0 = *(undefined **)param_3[9];
        uStack_698 = ((undefined8 *)param_3[9])[1];
      }
      else {
        uStack_6f0 = (undefined **)((ulong)uStack_6f0 & 0xffffffff);
        func_0x000109a84868(&uStack_6f0,param_3);
      }
      puVar33 = puStack_6e0;
      lStack_d50 = 0;
      uStack_d48 = (undefined **)0x0;
      ppuStack_d58 = &PTR_DAT_110af4cf0;
      iStack_d40 = 0;
      puVar26 = *ppuStack_6a8;
      uStack_a30 = (undefined **)CONCAT44((int)uStack_6e8,uStack_6e8._4_4_);
      func_0x00010938db10(&ppuStack_d58,&uStack_a30);
      if (0 < uStack_d48._4_4_) {
        lVar25 = 0;
        do {
          _memcpy(lStack_d50 + lVar25 * iStack_d40 * 4,puVar33,(long)(int)uStack_d48 << 2);
          lVar25 = lVar25 + 1;
          puVar33 = (undefined8 *)((long)puVar33 + (((long)puVar26 << 0x20) >> 0x22) * 4);
        } while (lVar25 < uStack_d48._4_4_);
      }
      fVar39 = *(float *)(param_3 + 0x3f);
      if (fVar39 / 100.0 != 1.0) {
        func_0x00010936ff7c(&uStack_a30,uStack_d48._4_4_,(ulong)uStack_d48 & 0xffffffff,5,lStack_d50
                            ,(long)iStack_d40 << 2);
        puStack_cc0 = (undefined8 *)CONCAT44(puStack_cc0._4_4_,0xc2010000);
        puStack_cb0 = (undefined *)0x0;
        puStack_cb8 = &uStack_a30;
        func_0x000109a41858((double)(fVar39 / 100.0),0,&uStack_a30,&puStack_cc0,0xffffffff);
        if (puStack_9f8 != (undefined *)0x0) {
          piVar28 = (int *)(puStack_9f8 + 0x14);
          do {
            iVar36 = *piVar28;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar28,0x10);
            if (bVar13) {
              *piVar28 = iVar36 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar36 + -1 == 0) {
            func_0x000109a848d4(&uStack_a30);
          }
        }
        puStack_9f8 = (undefined *)0x0;
        ppuStack_a18 = (undefined **)0x0;
        uStack_a20 = (undefined8 *)0x0;
        dStack_a08 = 0.0;
        puStack_a10 = (undefined *)0x0;
        if (0 < uStack_a30._4_4_) {
          lVar25 = 0;
          do {
            *(int *)((long)plStack_9f0 + lVar25 * 4) = 0;
            lVar25 = lVar25 + 1;
          } while (lVar25 < uStack_a30._4_4_);
        }
        if (ppuStack_9e8 != &puStack_9e0 && ppuStack_9e8 != (undefined **)0x0) {
          _free(ppuStack_9e8[-1]);
        }
      }
      if (puStack_6b8 != (undefined *)0x0) {
        piVar28 = (int *)((long)puStack_6b8 + 0x14);
        do {
          iVar36 = *piVar28;
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar28,0x10);
          if (bVar13) {
            *piVar28 = iVar36 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar36 + -1 == 0) {
          func_0x000109a848d4(&uStack_6f0);
        }
      }
      puStack_6b8 = (undefined *)0x0;
      puStack_6d8 = (undefined *)0x0;
      puStack_6e0 = (undefined8 *)0x0;
      puStack_6c8 = (undefined *)0x0;
      puStack_6d0 = (undefined *)0x0;
      if (0 < (int)uStack_6f0._4_4_) {
        lVar25 = 0;
        do {
          *(int *)((long)plStack_6b0 + lVar25 * 4) = 0;
          lVar25 = lVar25 + 1;
        } while (lVar25 < (int)uStack_6f0._4_4_);
      }
      if (ppuStack_6a8 != &puStack_6a0 && ppuStack_6a8 != (undefined **)0x0) {
        _free(ppuStack_6a8[-1]);
      }
      ppuVar34 = ppuVar17;
      if ((ulong)uStack_d48 >> 0x20 == 0 || ((ulong)uStack_d48 & 0xffffffff) == 0) {
        ppuVar17 = &PTR_PTR_113307420;
        FUN_10ae079a0(0,&PTR_PTR_113307420);
        FUN_10ae07cd4(ppuVar17,&PTR_PTR_113307420);
      }
      else {
        FUN_10aaafcb8(ppuVar17 + 2,param_3,lVar21);
        puStack_cc0 = (undefined8 *)0x0;
        puStack_cb0 = (undefined *)0x0;
        puStack_c58 = (undefined *)0x0;
        puStack_c50 = (undefined *)0x0;
        puStack_c98 = (undefined *)0x0;
        puStack_ca0 = (undefined *)0x0;
        ppuStack_c88 = (undefined **)0x0;
        plStack_c90 = (long *)0x0;
        uStack_c78 = 0;
        puStack_c80 = (undefined *)0x0;
        puStack_c68 = (undefined *)0x0;
        puStack_c70 = (undefined *)0x0;
        uStack_c60 = 0;
        puStack_c40 = (undefined *)0x0;
        puStack_c38 = (undefined *)0x0;
        puStack_c30 = (undefined *)0x0;
        uStack_c28 = 0x3ff0000000000000;
        puStack_c20 = (undefined *)0x0;
        puStack_c18 = (undefined *)0x0;
        puStack_c10 = (undefined *)0x0;
        puStack_c00 = (undefined8 *)0x3ff0000000000000;
        puStack_bf0 = (undefined *)0x0;
        puStack_bf8 = (undefined8 *)0x0;
        puStack_be8 = (undefined *)0x0;
        puStack_be0 = (undefined *)0x3ff0000000000000;
        puStack_bd8 = (undefined *)0x0;
        uStack_bd0 = 0;
        uStack_bc8 = 0;
        uStack_bc0 = 0x3ff0000000000000;
        plStack_ba8 = (long *)0x0;
        uStack_bb0 = 0;
        uStack_b98 = 0;
        uStack_ba0 = 0;
        uStack_b90 = 0;
        uStack_b88 = 0x3ff0000000000000;
        uStack_b80 = 0;
        uStack_b78 = 0;
        uStack_b70 = 0;
        uStack_b68 = 0x3ff0000000000000;
        uStack_b60 = 0;
        uStack_b58 = 0;
        uStack_b50 = 0;
        uStack_b40 = 0x3ff0000000000000;
        uStack_b30 = 0;
        uStack_b38 = 0;
        uStack_b28 = 0;
        uStack_b20 = 0x3ff0000000000000;
        uStack_b18 = 0;
        uStack_b10 = 0;
        uStack_b08 = 0;
        uStack_b00 = 0x3ff0000000000000;
        uStack_af0 = 0;
        iVar36 = (int)&puStack_ae8;
        puStack_ae0 = (undefined *)0x0;
        puStack_ae8 = (undefined *)0x0;
        lStack_ad0 = 0;
        uStack_ad8 = 0;
        uStack_ac0 = 0;
        lStack_ac8 = 0;
        lStack_ab0 = 0;
        lStack_ab8 = 0;
        uStack_aa8 = 0;
        uStack_a78 = 0x403e000000000000;
        uStack_a70 = 0x403e000000000000;
        uStack_a68 = 0;
        uStack_a58 = 0;
        uStack_a50 = uStack_a50 & 0xffffffffffffff00;
        cStack_a40 = '\0';
        func_0x00010942bc68(&puStack_cc0,ppuVar17 + 2);
        puStack_cc0 = (undefined8 *)ppuVar30[2];
        uStack_6e8 = (undefined **)param_3[0xd];
        uStack_6f0 = (undefined **)param_3[0xc];
        puStack_6d8 = (undefined *)param_3[0xf];
        puStack_6e0 = (undefined8 *)param_3[0xe];
        puStack_6c8 = (undefined *)param_3[0x11];
        puStack_6d0 = (undefined *)param_3[0x10];
        plStack_6b0 = (long *)((ulong)&uStack_6f0 | 8);
        iVar16 = *(int *)((long)param_3 + 100);
        puStack_6b8 = (undefined *)param_3[0x13];
        puStack_6c0 = (undefined *)param_3[0x12];
        uStack_698 = 0;
        puStack_6a0 = (undefined *)0x0;
        if (param_3[0x13] != 0) {
          piVar28 = (int *)(param_3[0x13] + 0x14);
          do {
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar28,0x10);
            if (bVar13) {
              *piVar28 = *piVar28 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          iVar16 = *(int *)((long)param_3 + 100);
        }
        ppuStack_6a8 = &puStack_6a0;
        if (iVar16 < 3) {
          puStack_6a0 = *(undefined **)param_3[0x15];
          uStack_698 = ((undefined8 *)param_3[0x15])[1];
        }
        else {
          uStack_6f0 = (undefined **)((ulong)uStack_6f0 & 0xffffffff);
          func_0x000109a84868(&uStack_6f0);
        }
        puVar33 = puStack_6e0;
        if (puStack_6e0 == (undefined8 *)0x0) {
LAB_10acf3f70:
          bVar13 = false;
        }
        else {
          uVar23 = (ulong)uStack_6f0._4_4_;
          if ((int)uStack_6f0._4_4_ < 3) {
            lVar21 = (long)uStack_6e8._4_4_ * (long)(int)uStack_6e8;
          }
          else {
            lVar21 = 1;
            plVar31 = plStack_6b0;
            do {
              lVar21 = lVar21 * (int)*plVar31;
              uVar23 = uVar23 - 1;
              plVar31 = (long *)((long)plVar31 + 4);
            } while (uVar23 != 0);
          }
          if (lVar21 == 0) goto LAB_10acf3f70;
          uStack_a20 = (undefined8 *)0x0;
          uStack_a30 = &PTR_DAT_110af4cf0;
          ppuStack_a28 = (undefined **)0x0;
          ppuStack_a18 = (undefined **)((ulong)ppuStack_a18 & 0xffffffff00000000);
          puVar26 = *ppuStack_6a8;
          ppuStack_3a0 = (undefined **)CONCAT44((int)uStack_6e8,uStack_6e8._4_4_);
          func_0x00010938db10(&uStack_a30,&ppuStack_3a0);
          iVar36 = uStack_a20._4_4_;
          if (0 < uStack_a20._4_4_) {
            lVar21 = 0;
            do {
              _memcpy((undefined *)((long)ppuStack_a28 + lVar21 * (int)ppuStack_a18 * 4),puVar33,
                      (long)(int)uStack_a20 << 2);
              lVar21 = lVar21 + 1;
              puVar33 = (undefined8 *)((long)puVar33 + (((long)puVar26 << 0x20) >> 0x22) * 4);
              iVar36 = uStack_a20._4_4_;
            } while (lVar21 < uStack_a20._4_4_);
          }
          ppuStack_de0 = ppuStack_a28;
          bVar13 = true;
          uStack_df0 = SUB84(uStack_a20,0);
          uStack_df8 = SUB84(ppuStack_a18,0);
        }
        if (puStack_6b8 != (undefined *)0x0) {
          piVar28 = (int *)((long)puStack_6b8 + 0x14);
          do {
            iVar16 = *piVar28;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar28,0x10);
            if (bVar14) {
              *piVar28 = iVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 + -1 == 0) {
            func_0x000109a848d4(&uStack_6f0);
          }
        }
        puStack_6b8 = (undefined *)0x0;
        puStack_6d8 = (undefined *)0x0;
        puStack_6e0 = (undefined8 *)0x0;
        puStack_6c8 = (undefined *)0x0;
        puStack_6d0 = (undefined *)0x0;
        if (0 < (int)uStack_6f0._4_4_) {
          lVar21 = 0;
          do {
            *(int *)((long)plStack_6b0 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < (int)uStack_6f0._4_4_);
        }
        if (ppuStack_6a8 != &puStack_6a0 && ppuStack_6a8 != (undefined **)0x0) {
          _free(ppuStack_6a8[-1]);
        }
        FUN_10ace5b0c(&uStack_6f0,param_3 + 0x18,(char)param_3[0x24]);
        uStack_a30 = (undefined **)NEON_rev64(uStack_6e8,4);
        lStack_d70 = 0;
        uStack_d68 = 0;
        iStack_d60 = 0;
        ppuStack_d78 = &PTR_DAT_110af4c80;
        func_0x00010938e870(&ppuStack_d78,&uStack_a30);
        puVar33 = puStack_6e0;
        if (puStack_6e0 != (undefined8 *)0x0) {
          uVar23 = (ulong)uStack_6f0._4_4_;
          if ((int)uStack_6f0._4_4_ < 3) {
            lVar21 = (long)uStack_6e8._4_4_ * (long)(int)uStack_6e8;
          }
          else {
            lVar21 = 1;
            plVar31 = plStack_6b0;
            do {
              lVar21 = lVar21 * (int)*plVar31;
              uVar23 = uVar23 - 1;
              plVar31 = (long *)((long)plVar31 + 4);
            } while (uVar23 != 0);
          }
          if (lVar21 != 0) {
            puVar26 = *ppuStack_6a8;
            uStack_a30 = (undefined **)CONCAT44((int)uStack_6e8,uStack_6e8._4_4_);
            func_0x00010938e870(&ppuStack_d78,&uStack_a30);
            if (0 < uStack_d68._4_4_) {
              lVar21 = 0;
              do {
                _memcpy(lStack_d70 + lVar21 * iStack_d60,puVar33,(long)(int)uStack_d68);
                lVar21 = lVar21 + 1;
                puVar33 = (undefined8 *)((long)puVar33 + (long)(int)puVar26);
              } while (lVar21 < uStack_d68._4_4_);
            }
          }
        }
        if (puStack_6b8 != (undefined *)0x0) {
          piVar28 = (int *)((long)puStack_6b8 + 0x14);
          do {
            iVar16 = *piVar28;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar28,0x10);
            if (bVar14) {
              *piVar28 = iVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar16 + -1 == 0) {
            func_0x000109a848d4(&uStack_6f0);
          }
        }
        puStack_6b8 = (undefined *)0x0;
        puStack_6d8 = (undefined *)0x0;
        puStack_6e0 = (undefined8 *)0x0;
        puStack_6c8 = (undefined *)0x0;
        puStack_6d0 = (undefined *)0x0;
        if (0 < (int)uStack_6f0._4_4_) {
          lVar21 = 0;
          do {
            *(int *)((long)plStack_6b0 + lVar21 * 4) = 0;
            lVar21 = lVar21 + 1;
          } while (lVar21 < (int)uStack_6f0._4_4_);
        }
        if (ppuStack_6a8 != &puStack_6a0 && ppuStack_6a8 != (undefined **)0x0) {
          _free(ppuStack_6a8[-1]);
        }
        uStack_a30 = uStack_d48;
        if ((*(char *)(ppuVar17 + 0x31) == '\x01' && param_6 != (undefined **)0x0) &&
           (puVar26 = *param_6, puVar26 != (undefined *)0x0)) {
          if (*(int *)(ppuVar17 + 0x37) != *(int *)(puVar26 + 0x24)) {
            FUN_10a1b498c(&uStack_6f0,*(int *)(puVar26 + 0x24),3);
            func_0x00010a343394(ppuVar17 + 0x35,&uStack_6f0);
            ppuVar37 = uStack_6e8;
            if (uStack_6e8 != (undefined **)0x0) {
              ppuVar32 = uStack_6e8 + 1;
              do {
                puVar27 = *ppuVar32;
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(ppuVar32,0x10);
                if (bVar14) {
                  *ppuVar32 = puVar27 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar27 == (undefined *)0x0) {
                (**(code **)(*uStack_6e8 + 0x10))(uStack_6e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar37);
              }
            }
            *(undefined4 *)(ppuVar17 + 0x37) = *(undefined4 *)(puVar26 + 0x24);
          }
          puVar33 = (undefined8 *)ppuVar17[0x35];
          iVar16 = (int)param_6 + 0x10;
          FUN_10a0ec6f0();
          ppuStack_3a0 = (undefined **)CONCAT44(ppuStack_3a0._4_4_,iVar16);
          (**(code **)*puVar33)(&uStack_6f0,puVar33,puVar26,&ppuStack_3a0,&uStack_a30);
          FUN_10acdd1a0(&ppuStack_d98,uStack_6f0,*(undefined *)((long)ppuVar17 + 0x1bc));
          ppuVar37 = uStack_6e8;
          if (uStack_6e8 != (undefined **)0x0) {
            ppuVar32 = uStack_6e8 + 1;
            do {
              puVar26 = *ppuVar32;
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(ppuVar32,0x10);
              if (bVar14) {
                *ppuVar32 = puVar26 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (puVar26 == (undefined *)0x0) {
              (**(code **)(*uStack_6e8 + 0x10))(uStack_6e8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar37);
            }
          }
        }
        else {
          lStack_d90 = 0;
          uStack_d88 = 0;
          ppuStack_d98 = &PTR_DAT_110af4b00;
          uStack_d80 = 0;
        }
        FUN_10acf6fe4(ppuVar17);
        if (ppuVar17[0x2f] == (undefined *)0x0) {
          ppuStack_d20 = (undefined **)0x0;
          ppuStack_d18 = (undefined **)0x0;
          ppuStack_d10 = (undefined **)0x0;
          if (ppuVar22 == (undefined **)0x0) {
LAB_10acf48ec:
            ppuVar34 = (undefined **)0x0;
            unaff_x28 = (undefined **)0x0;
            ppuStack_da8 = (undefined **)0x0;
          }
          else {
            ppuStack_d38 = (undefined **)0x0;
            ppuStack_d30 = (undefined **)0x0;
            ppuStack_d28 = (undefined **)0x0;
            plVar31 = (long *)ppuVar22[1];
            plVar38 = (long *)ppuVar22[2];
            if (plVar31 == plVar38) goto LAB_10acf48ec;
            ppuStack_da8 = (undefined **)0x0;
            ppuVar34 = (undefined **)0x0;
            unaff_x28 = (undefined **)0x0;
            do {
              lVar21 = *plVar31;
              if (*(char *)(lVar21 + 0x68) == '\0') {
                dVar40 = (double)*(float *)(lVar21 + 0x20);
                dVar53 = (double)*(float *)(lVar21 + 0x24);
                dVar55 = (double)*(float *)(lVar21 + 0x28);
                uStack_988._0_2_ = (ushort)(byte)uStack_988;
                dVar56 = (double)(float)*(undefined8 *)(lVar21 + 0x10);
                dVar57 = (double)(float)((ulong)*(undefined8 *)(lVar21 + 0x10) >> 0x20);
                dVar62 = dVar57 + dVar57;
                dVar63 = (dVar56 + dVar56) * dVar56;
                dVar58 = (double)(float)*(undefined8 *)(lVar21 + 0x18);
                dVar59 = (double)(float)((ulong)*(undefined8 *)(lVar21 + 0x18) >> 0x20);
                dVar64 = dVar58 + dVar58;
                dVar60 = (dVar56 + dVar56) * dVar59;
                ppuStack_380 = (undefined **)
                               ((1.0 - (dVar62 * dVar57 + dVar64 * dVar58)) * dVar40 +
                                (dVar62 * dVar56 - dVar64 * dVar59) * dVar53 +
                                (dVar62 * dVar59 + dVar64 * dVar56) * dVar55 +
                               (double)(float)*(undefined8 *)(lVar21 + 4));
                dStack_378 = (dVar62 * dVar56 + dVar64 * dVar59) * dVar40 +
                             (1.0 - (dVar63 + dVar64 * dVar58)) * dVar53 +
                             (dVar64 * dVar57 - dVar60) * dVar55 +
                             (double)(float)((ulong)*(undefined8 *)(lVar21 + 4) >> 0x20);
                dVar54 = SQRT(dVar56 * dVar56 + dVar58 * dVar58 + dVar57 * dVar57 + dVar59 * dVar59)
                ;
                ppuStack_3a0 = (undefined **)(dVar56 / dVar54);
                ppuStack_398 = (undefined **)(dVar57 / dVar54);
                puStack_390 = (undefined8 *)(dVar58 / dVar54);
                ppuStack_388 = (undefined **)(dVar59 / dVar54);
                puStack_370 = (undefined *)
                              ((dVar64 * dVar56 - dVar62 * dVar59) * dVar40 +
                               (dVar60 + dVar64 * dVar57) * dVar53 +
                               (1.0 - (dVar63 + dVar62 * dVar57)) * dVar55 +
                              (double)*(float *)(lVar21 + 0xc));
                func_0x00010937fbc4(&plStack_d08,&ppuStack_3a0);
                puStack_338 = puStack_ce0;
                puStack_340 = puStack_ce8;
                puStack_328 = puStack_cd0;
                uStack_330 = uStack_cd8;
                puStack_320 = puStack_cc8;
                ppuStack_358 = ppuStack_d00;
                plStack_360 = plStack_d08;
                uStack_348 = uStack_cf0;
                puStack_350 = puStack_cf8;
                ppuStack_a28 = ppuStack_398;
                uStack_a30 = ppuStack_3a0;
                ppuStack_a18 = ppuStack_388;
                uStack_a20 = puStack_390;
                dStack_a08 = dStack_378;
                puStack_a10 = (undefined *)ppuStack_380;
                puStack_a00 = puStack_370;
                puStack_9c8 = puStack_ce0;
                puStack_9d0 = puStack_ce8;
                puStack_9b8 = puStack_cd0;
                uStack_9c0 = uStack_cd8;
                puStack_9b0 = puStack_cc8;
                ppuStack_9e8 = ppuStack_d00;
                plStack_9f0 = plStack_d08;
                uStack_9d8 = uStack_cf0;
                puStack_9e0 = puStack_cf8;
                puStack_990 = (undefined *)(double)*(float *)(lVar21 + 0x34);
                puStack_9a0 = (undefined *)(double)(float)*(undefined8 *)(lVar21 + 0x2c);
                puStack_998 = (undefined *)
                              (double)(float)((ulong)*(undefined8 *)(lVar21 + 0x2c) >> 0x20);
                bVar24 = *(byte *)(lVar21 + 0x68);
                if (1 < bVar24) {
                  bVar24 = 2;
                }
                cVar5 = *(byte *)(lVar21 + 0x69) - 2;
                if (6 < *(byte *)(lVar21 + 0x69) - 3) {
                  cVar5 = '\0';
                }
                uStack_988._0_2_ = CONCAT11(cVar5,bVar24);
                ppuStack_388 = (undefined **)0x0;
                puStack_390 = (undefined8 *)0x0;
                dStack_378 = 0.0;
                ppuStack_380 = (undefined **)0x0;
                ppuStack_398 = (undefined **)0x0;
                ppuStack_3a0 = (undefined **)0x0;
                FUN_10acf67fc(&ppuStack_3a0,
                              (*(long *)(lVar21 + 0x40) - *(long *)(lVar21 + 0x38) >> 2) *
                              -0x5555555555555555);
                _memcpy(ppuStack_3a0,*(long *)(lVar21 + 0x38),
                        *(long *)(lVar21 + 0x40) - *(long *)(lVar21 + 0x38));
                func_0x000108262984(&ppuStack_388,
                                    *(long *)(lVar21 + 0x58) - *(long *)(lVar21 + 0x50) >> 1);
                lVar25 = *(long *)(lVar21 + 0x58) - *(long *)(lVar21 + 0x50);
                if (lVar25 != 0) {
                  _memmove(ppuStack_388,*(long *)(lVar21 + 0x50),lVar25);
                }
                puVar33 = &uStack_a30;
                func_0x00010937ea24(&uStack_6f0,puVar33,&ppuStack_3a0);
                plStack_6b0 = (long *)((double)plStack_6b0 * 0.01);
                ppuStack_6a8 = (undefined **)((double)ppuStack_6a8 * 0.01);
                puStack_640 = (undefined *)((double)puStack_640 * 0.01);
                puStack_638 = (undefined *)((double)puStack_638 * 0.01);
                puStack_630 = (undefined *)((double)puStack_630 * 0.01);
                puStack_6a0 = (undefined *)((double)puStack_6a0 * 0.01);
                puStack_6d8 = (undefined *)((double)puStack_6d8 * 0.01);
                for (puVar19 = puStack_620; puVar19 != puStack_618;
                    puVar19 = (undefined8 *)((long)puVar19 + 0xc)) {
                  *puVar19 = CONCAT44((float)((ulong)*puVar19 >> 0x20) * 0.01,(float)*puVar19 * 0.01
                                     );
                  *(float *)(puVar19 + 1) = *(float *)(puVar19 + 1) * 0.01;
                }
                if (ppuStack_388 != (undefined **)0x0) {
                  ppuStack_380 = ppuStack_388;
                  __ZdlPv();
                }
                if (ppuStack_3a0 != (undefined **)0x0) {
                  ppuStack_398 = ppuStack_3a0;
                  __ZdlPv();
                }
                if (unaff_x28 < ppuVar34) {
                  unaff_x28[2] = (undefined *)puStack_6e0;
                  unaff_x28[1] = (undefined *)uStack_6e8;
                  *unaff_x28 = (undefined *)uStack_6f0;
                  unaff_x28[3] = puStack_6d8;
                  unaff_x28[5] = puStack_6c8;
                  unaff_x28[4] = puStack_6d0;
                  unaff_x28[7] = puStack_6b8;
                  unaff_x28[6] = puStack_6c0;
                  unaff_x28[10] = puStack_6a0;
                  unaff_x28[9] = (undefined *)ppuStack_6a8;
                  unaff_x28[8] = (undefined *)plStack_6b0;
                  unaff_x28[0xd] = puStack_688;
                  unaff_x28[0xc] = puStack_690;
                  unaff_x28[0x14] = puStack_650;
                  unaff_x28[0x11] = puStack_668;
                  unaff_x28[0x10] = puStack_670;
                  unaff_x28[0x13] = puStack_658;
                  unaff_x28[0x12] = puStack_660;
                  unaff_x28[0xf] = puStack_678;
                  unaff_x28[0xe] = (undefined *)CONCAT44(uStack_67c,uStack_680);
                  unaff_x28[0x18] = puStack_630;
                  unaff_x28[0x17] = puStack_638;
                  unaff_x28[0x16] = puStack_640;
                  *(undefined2 *)(unaff_x28 + 0x19) = uStack_628;
                  unaff_x28[0x1a] = (undefined *)0x0;
                  unaff_x28[0x1b] = (undefined *)0x0;
                  unaff_x28[0x1c] = (undefined *)0x0;
                  unaff_x28[0x1d] = (undefined *)0x0;
                  unaff_x28[0x1b] = (undefined *)puStack_618;
                  unaff_x28[0x1a] = (undefined *)puStack_620;
                  unaff_x28[0x1c] = puStack_610;
                  puStack_620 = (undefined8 *)0x0;
                  puStack_618 = (undefined8 *)0x0;
                  unaff_x28[0x1e] = (undefined *)0x0;
                  unaff_x28[0x1f] = (undefined *)0x0;
                  unaff_x28[0x1e] = puStack_600;
                  unaff_x28[0x1d] = puStack_608;
                  unaff_x28[0x1f] = puStack_5f8;
                  puStack_610 = (undefined *)0x0;
                  puStack_608 = (undefined *)0x0;
                  puStack_600 = (undefined *)0x0;
                  puStack_5f8 = (undefined *)0x0;
                  ppuVar37 = unaff_x28;
                }
                else {
                  lVar21 = (long)unaff_x28 - (long)ppuStack_da8 >> 8;
                  uVar23 = lVar21 + 1;
                  if (uVar23 >> 0x38 != 0) goto LAB_10acf5998;
                  uVar29 = (long)ppuVar34 - (long)ppuStack_da8 >> 7;
                  if (uVar29 <= uVar23) {
                    uVar29 = uVar23;
                  }
                  if (0x7ffffffffffffeff < (ulong)((long)ppuVar34 - (long)ppuStack_da8)) {
                    uVar29 = 0xffffffffffffff;
                  }
                  if (uVar29 == 0) {
                    uVar29 = 0;
                    puVar33 = (undefined8 *)0x0;
                  }
                  else {
                    FUN_10acfa038();
                  }
                  ppuVar37 = (undefined **)(uVar29 + ((long)unaff_x28 - (long)ppuStack_da8));
                  ppuVar37[2] = (undefined *)puStack_6e0;
                  ppuVar37[1] = (undefined *)uStack_6e8;
                  *ppuVar37 = (undefined *)uStack_6f0;
                  ppuVar37[3] = puStack_6d8;
                  ppuVar37[5] = puStack_6c8;
                  ppuVar37[4] = puStack_6d0;
                  ppuVar37[7] = puStack_6b8;
                  ppuVar37[6] = puStack_6c0;
                  ppuVar37[10] = puStack_6a0;
                  ppuVar37[9] = (undefined *)ppuStack_6a8;
                  ppuVar37[8] = (undefined *)plStack_6b0;
                  ppuVar37[0x14] = puStack_650;
                  ppuVar37[0x11] = puStack_668;
                  ppuVar37[0x10] = puStack_670;
                  ppuVar37[0x13] = puStack_658;
                  ppuVar37[0x12] = puStack_660;
                  ppuVar37[0xf] = puStack_678;
                  ppuVar37[0xe] = (undefined *)CONCAT44(uStack_67c,uStack_680);
                  ppuVar37[0xd] = puStack_688;
                  ppuVar37[0xc] = puStack_690;
                  ppuVar37[0x18] = puStack_630;
                  ppuVar37[0x17] = puStack_638;
                  ppuVar37[0x16] = puStack_640;
                  *(undefined2 *)(ppuVar37 + 0x19) = uStack_628;
                  ppuVar37[0x1b] = (undefined *)0x0;
                  ppuVar37[0x1c] = (undefined *)0x0;
                  ppuVar37[0x1a] = (undefined *)0x0;
                  ppuVar37[0x1b] = (undefined *)puStack_618;
                  ppuVar37[0x1a] = (undefined *)puStack_620;
                  ppuVar37[0x1c] = puStack_610;
                  puStack_620 = (undefined8 *)0x0;
                  puStack_618 = (undefined8 *)0x0;
                  puStack_610 = (undefined *)0x0;
                  ppuVar37[0x1d] = (undefined *)0x0;
                  ppuVar37[0x1e] = (undefined *)0x0;
                  ppuVar37[0x1f] = (undefined *)0x0;
                  ppuVar37[0x1e] = puStack_600;
                  ppuVar37[0x1d] = puStack_608;
                  ppuVar37[0x1f] = puStack_5f8;
                  puStack_608 = (undefined *)0x0;
                  puStack_600 = (undefined *)0x0;
                  puStack_5f8 = (undefined *)0x0;
                  ppuVar32 = ppuVar37 + lVar21 * -0x20;
                  ppuVar22 = ppuStack_da8;
                  ppuVar34 = ppuVar32;
                  if (ppuStack_da8 != unaff_x28) {
                    do {
                      puVar27 = ppuVar22[1];
                      puVar26 = *ppuVar22;
                      ppuVar34[2] = ppuVar22[2];
                      ppuVar34[1] = puVar27;
                      *ppuVar34 = puVar26;
                      ppuVar34[3] = ppuVar22[3];
                      puVar26 = ppuVar22[4];
                      puVar45 = ppuVar22[7];
                      puVar27 = ppuVar22[6];
                      ppuVar34[5] = ppuVar22[5];
                      ppuVar34[4] = puVar26;
                      ppuVar34[7] = puVar45;
                      ppuVar34[6] = puVar27;
                      puVar27 = ppuVar22[9];
                      puVar26 = ppuVar22[8];
                      ppuVar34[10] = ppuVar22[10];
                      ppuVar34[9] = puVar27;
                      ppuVar34[8] = puVar26;
                      puVar46 = ppuVar22[0x11];
                      puVar45 = ppuVar22[0x10];
                      puVar27 = ppuVar22[0x13];
                      puVar26 = ppuVar22[0x12];
                      puVar51 = ppuVar22[0xf];
                      puVar49 = ppuVar22[0xe];
                      ppuVar34[0x14] = ppuVar22[0x14];
                      ppuVar34[0x11] = puVar46;
                      ppuVar34[0x10] = puVar45;
                      ppuVar34[0x13] = puVar27;
                      ppuVar34[0x12] = puVar26;
                      ppuVar34[0xf] = puVar51;
                      ppuVar34[0xe] = puVar49;
                      puVar26 = ppuVar22[0xc];
                      ppuVar34[0xd] = ppuVar22[0xd];
                      ppuVar34[0xc] = puVar26;
                      puVar27 = ppuVar22[0x17];
                      puVar26 = ppuVar22[0x16];
                      ppuVar34[0x18] = ppuVar22[0x18];
                      ppuVar34[0x17] = puVar27;
                      ppuVar34[0x16] = puVar26;
                      *(undefined2 *)(ppuVar34 + 0x19) = *(undefined2 *)(ppuVar22 + 0x19);
                      ppuVar34[0x1b] = (undefined *)0x0;
                      ppuVar34[0x1c] = (undefined *)0x0;
                      ppuVar34[0x1a] = (undefined *)0x0;
                      puVar26 = ppuVar22[0x1a];
                      ppuVar34[0x1b] = ppuVar22[0x1b];
                      ppuVar34[0x1a] = puVar26;
                      ppuVar34[0x1c] = ppuVar22[0x1c];
                      ppuVar22[0x1a] = (undefined *)0x0;
                      ppuVar22[0x1b] = (undefined *)0x0;
                      ppuVar22[0x1c] = (undefined *)0x0;
                      ppuVar34[0x1d] = (undefined *)0x0;
                      ppuVar34[0x1e] = (undefined *)0x0;
                      ppuVar34[0x1f] = (undefined *)0x0;
                      puVar26 = ppuVar22[0x1d];
                      ppuVar34[0x1e] = ppuVar22[0x1e];
                      ppuVar34[0x1d] = puVar26;
                      ppuVar34[0x1f] = ppuVar22[0x1f];
                      ppuVar22[0x1d] = (undefined *)0x0;
                      ppuVar22[0x1e] = (undefined *)0x0;
                      ppuVar22[0x1f] = (undefined *)0x0;
                      ppuVar22 = ppuVar22 + 0x20;
                      ppuVar34 = ppuVar34 + 0x20;
                      ppuVar35 = ppuStack_da8;
                    } while (ppuVar22 != unaff_x28);
                    do {
                      FUN_10acf9f78(ppuVar35);
                      ppuVar35 = ppuVar35 + 0x20;
                    } while (ppuVar35 != unaff_x28);
                  }
                  if (ppuStack_da8 != (undefined **)0x0) {
                    __ZdlPv();
                  }
                  ppuVar34 = (undefined **)(uVar29 + (long)puVar33 * 0x100);
                  ppuStack_da8 = ppuVar32;
                  if (puStack_608 != (undefined *)0x0) {
                    puStack_600 = puStack_608;
                    __ZdlPv();
                  }
                }
                if (puStack_620 != (undefined8 *)0x0) {
                  puStack_618 = puStack_620;
                  __ZdlPv();
                }
                unaff_x28 = ppuVar37 + 0x20;
              }
              ppuVar22 = ppuStack_d20;
              plVar31 = plVar31 + 2;
            } while (plVar31 != plVar38);
            ppuStack_d28 = ppuVar34;
            ppuStack_d30 = unaff_x28;
            ppuVar37 = ppuStack_d18;
            if (ppuStack_d20 != (undefined **)0x0) {
              while (ppuStack_d38 = ppuStack_da8, ppuVar37 != ppuVar22) {
                FUN_10acf9f78(ppuVar37 + -0x20);
                ppuStack_da8 = ppuStack_d38;
                ppuVar37 = ppuVar37 + -0x20;
              }
              __ZdlPv(ppuStack_d20);
            }
          }
          ppuStack_d30 = (undefined **)0x0;
          ppuStack_d28 = (undefined **)0x0;
          ppuStack_d38 = (undefined **)0x0;
          ppuStack_d20 = ppuStack_da8;
          ppuStack_d18 = unaff_x28;
          ppuStack_d10 = ppuVar34;
          FUN_10acf9fbc(&ppuStack_d38);
          uVar52 = uStack_aa8;
          lVar11 = lStack_ab0;
          lVar10 = lStack_ab8;
          uVar50 = uStack_ac0;
          lVar9 = lStack_ac8;
          lVar8 = lStack_ad0;
          uVar48 = uStack_ad8;
          puVar46 = puStack_ae0;
          puVar45 = puStack_ae8;
          plVar31 = plStack_ba8;
          uVar47 = uStack_bb0;
          puVar27 = puStack_c50;
          puVar26 = puStack_c58;
          ppuVar35 = ppuStack_d10;
          ppuVar32 = ppuStack_d18;
          ppuVar37 = ppuStack_d20;
          iVar7 = iStack_d40;
          ppuVar22 = uStack_d48;
          lVar6 = lStack_d50;
          iVar16 = iStack_d60;
          uVar44 = uStack_d68;
          lVar25 = lStack_d70;
          uVar61 = uStack_d80;
          uVar42 = uStack_d88;
          lVar21 = lStack_d90;
          ppuVar43 = (undefined **)ppuVar17[1];
          ppuVar41 = (undefined **)*ppuVar17;
          if (ppuVar17[1] != (undefined *)0x0) {
            plVar38 = (long *)(ppuVar17[1] + 0x10);
            do {
              cVar5 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar38,0x10);
              if (bVar14) {
                *plVar38 = *plVar38 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uStack_a20 = puStack_cc0;
          puStack_a10 = puStack_cb0;
          puStack_9f8 = puStack_c98;
          puStack_a00 = puStack_ca0;
          ppuStack_9e8 = ppuStack_c88;
          plStack_9f0 = plStack_c90;
          uStack_9d8 = uStack_c78;
          puStack_9e0 = puStack_c80;
          puStack_9c8 = puStack_c68;
          puStack_9d0 = puStack_c70;
          uStack_9c0 = CONCAT44(uStack_9c0._4_4_,uStack_c60);
          puStack_9b8 = puStack_c58;
          puStack_9b0 = puStack_c50;
          puStack_c58 = (undefined *)0x0;
          puStack_c50 = (undefined *)0x0;
          puStack_998 = puStack_c38;
          puStack_9a0 = puStack_c40;
          uStack_988 = uStack_c28;
          puStack_990 = puStack_c30;
          puStack_978 = puStack_c18;
          puStack_980 = puStack_c20;
          puStack_938 = puStack_bd8;
          puStack_940 = puStack_be0;
          uStack_928 = uStack_bc8;
          uStack_930 = uStack_bd0;
          puStack_970 = puStack_c10;
          uStack_920 = uStack_bc0;
          puStack_958 = puStack_bf8;
          puStack_960 = puStack_c00;
          puStack_948 = puStack_be8;
          puStack_950 = puStack_bf0;
          uStack_910 = uStack_bb0;
          plStack_908 = plStack_ba8;
          uStack_bb0 = 0;
          plStack_ba8 = (long *)0x0;
          uStack_8f8 = uStack_b98;
          uStack_900 = uStack_ba0;
          uStack_8e8 = uStack_b88;
          uStack_8f0 = uStack_b90;
          uStack_8d8 = uStack_b78;
          uStack_8e0 = uStack_b80;
          uStack_8c8 = uStack_b68;
          uStack_8d0 = uStack_b70;
          uStack_8b8 = uStack_b58;
          uStack_8c0 = uStack_b60;
          uStack_898 = uStack_b38;
          uStack_8a0 = uStack_b40;
          uStack_8b0 = uStack_b50;
          uStack_860 = uStack_b00;
          uStack_868 = uStack_b08;
          uStack_870 = uStack_b10;
          uStack_878 = uStack_b18;
          uStack_880 = uStack_b20;
          uStack_888 = uStack_b28;
          uStack_890 = uStack_b30;
          uStack_850 = uStack_af0;
          puStack_848 = puStack_ae8;
          puStack_840 = puStack_ae0;
          puStack_ae8 = (undefined *)0x0;
          puStack_ae0 = (undefined *)0x0;
          uStack_ad8 = 0;
          uStack_838 = uVar48;
          lStack_830 = lStack_ad0;
          lStack_828 = lStack_ac8;
          uStack_820 = uStack_ac0;
          lStack_ad0 = 0;
          lStack_ac8 = 0;
          uStack_ac0 = 0;
          lStack_818 = lStack_ab8;
          lStack_810 = lStack_ab0;
          uStack_808 = uStack_aa8;
          lStack_ab8 = 0;
          lStack_ab0 = 0;
          uStack_aa8 = 0;
          uStack_800 = uStack_aa0;
          uStack_7be = CONCAT26(uStack_a58,uStack_a5e);
          uStack_7c8 = CONCAT11(uStack_a67,uStack_a68);
          uStack_7d0 = uStack_a70;
          uStack_7d8 = uStack_a78;
          uStack_7e0 = uStack_a80;
          uStack_7e8 = uStack_a88;
          uStack_7f0 = uStack_a90;
          uStack_7b0 = uStack_7b0 & 0xffffffffffffff00;
          cStack_7a0 = cStack_a40 == '\x01';
          if ((bool)cStack_7a0) {
            plStack_7a8 = plStack_a48;
            uStack_7b0 = uStack_a50;
            uStack_a50 = 0;
            plStack_a48 = (long *)0x0;
          }
          ppuStack_790 = &PTR_DAT_110af4cf0;
          lStack_788 = lStack_d50;
          uStack_780 = (int)uStack_d48;
          uStack_77c = uStack_d48._4_4_;
          iStack_778 = iStack_d40;
          iStack_d40 = 0;
          lStack_d50 = 0;
          uStack_d48 = (undefined **)0x0;
          if (!bVar13) {
            ppuStack_770 = (undefined **)((ulong)ppuStack_770 & 0xffffffffffffff00);
          }
          else {
            ppuStack_770 = &PTR_DAT_110af4cf0;
            ppuStack_768 = ppuStack_de0;
            uStack_760 = CONCAT44(iVar36,uStack_df0);
            uStack_758 = uStack_df8;
            ppuStack_de0 = (undefined **)0x0;
          }
          cStack_750 = bVar13;
          ppuStack_748 = &PTR_DAT_110af4c80;
          lStack_740 = lStack_d70;
          uStack_738 = (int)uStack_d68;
          uStack_734 = uStack_d68._4_4_;
          iStack_730 = iStack_d60;
          iStack_d60 = 0;
          lStack_d70 = 0;
          uStack_d68 = 0;
          ppuStack_728 = ppuStack_d20;
          ppuStack_720 = ppuStack_d18;
          ppuStack_718 = ppuStack_d10;
          ppuStack_d18 = (undefined **)0x0;
          ppuStack_d10 = (undefined **)0x0;
          ppuStack_d20 = (undefined **)0x0;
          ppuStack_710 = &PTR_DAT_110af4b00;
          lStack_708 = lStack_d90;
          uStack_700 = (undefined4)uStack_d88;
          uStack_6fc = uStack_d88._4_4_;
          uStack_6f8 = uStack_d80;
          lStack_d90 = 0;
          uStack_d88 = 0;
          uStack_d80 = 0;
          uStack_a30 = ppuVar41;
          ppuStack_a28 = ppuVar43;
          if (*(char *)(ppuVar17 + 0x34) == '\0') {
            if (ppuVar43 != (undefined **)0x0) {
              ppuVar30 = ppuVar43 + 2;
              do {
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(ppuVar30,0x10);
                if (bVar14) {
                  *ppuVar30 = *ppuVar30 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            puStack_6e0 = puStack_cc0;
            puStack_6d0 = puStack_cb0;
            puStack_6b8 = puStack_c98;
            puStack_6c0 = puStack_ca0;
            ppuStack_6a8 = ppuStack_c88;
            plStack_6b0 = plStack_c90;
            uStack_698 = uStack_c78;
            puStack_6a0 = puStack_c80;
            puStack_688 = puStack_c68;
            puStack_690 = puStack_c70;
            uStack_6f0 = ppuVar41;
            uStack_6e8 = ppuVar43;
            uStack_680 = uStack_c60;
            func_0x00010937da58(&puStack_678,&puStack_9b8);
            puStack_658 = puStack_998;
            puStack_660 = puStack_9a0;
            uStack_648 = uStack_988;
            puStack_650 = puStack_990;
            puStack_638 = puStack_978;
            puStack_640 = puStack_980;
            puStack_5f8 = puStack_938;
            puStack_600 = puStack_940;
            uStack_5e8 = uStack_928;
            uStack_5f0 = uStack_930;
            puStack_630 = puStack_970;
            uStack_5e0 = uStack_920;
            puStack_618 = puStack_958;
            puStack_620 = puStack_960;
            puStack_608 = puStack_948;
            puStack_610 = puStack_950;
            plStack_5c8 = plStack_908;
            uStack_5d0 = uStack_910;
            if (plStack_908 != (long *)0x0) {
              plVar31 = plStack_908 + 1;
              do {
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                if (bVar14) {
                  *plVar31 = *plVar31 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uStack_5b8 = uStack_8f8;
            uStack_5c0 = uStack_900;
            uStack_5a8 = uStack_8e8;
            uStack_5b0 = uStack_8f0;
            uStack_598 = uStack_8d8;
            uStack_5a0 = uStack_8e0;
            uStack_588 = uStack_8c8;
            uStack_590 = uStack_8d0;
            uStack_578 = uStack_8b8;
            uStack_580 = uStack_8c0;
            uStack_570 = uStack_8b0;
            uStack_520 = uStack_860;
            uStack_538 = uStack_878;
            uStack_540 = uStack_880;
            uStack_528 = uStack_868;
            uStack_530 = uStack_870;
            uStack_558 = uStack_898;
            uStack_560 = uStack_8a0;
            uStack_548 = uStack_888;
            uStack_550 = uStack_890;
            uStack_510 = uStack_850;
            puStack_500 = (undefined *)0x0;
            puStack_508 = (undefined *)0x0;
            uStack_4f8 = 0;
            FUN_10a4f0090(&puStack_508,puStack_848,puStack_840,
                          ((long)puStack_840 - (long)puStack_848 >> 3) * -0x5555555555555555);
            uStack_4e0 = 0;
            lStack_4e8 = 0;
            lStack_4f0 = 0;
            FUN_10a0e9a40(&lStack_4f0,lStack_830,lStack_828,lStack_828 - lStack_830 >> 2);
            lStack_4d0 = 0;
            lStack_4d8 = 0;
            uStack_4c8 = 0;
            FUN_10a0ca588();
            uStack_4c0 = uStack_800;
            uStack_47e = uStack_7be;
            uStack_4a8 = uStack_7e8;
            uStack_4b0 = uStack_7f0;
            uStack_498 = uStack_7d8;
            uStack_4a0 = uStack_7e0;
            uStack_488 = uStack_7c8;
            uStack_490 = uStack_7d0;
            uStack_470 = uStack_470 & 0xffffffffffffff00;
            uStack_460 = 0;
            if (cStack_7a0 == '\x01') {
              plStack_468 = plStack_7a8;
              uStack_470 = uStack_7b0;
              if (plStack_7a8 != (long *)0x0) {
                plVar31 = plStack_7a8 + 1;
                do {
                  cVar5 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                  if (bVar14) {
                    *plVar31 = *plVar31 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              uStack_460 = 1;
            }
            FUN_10aced1ac(&ppuStack_450,&ppuStack_790);
            ppuStack_430 = (undefined **)((ulong)ppuStack_430 & 0xffffffffffffff00);
            uStack_410 = 0;
            bVar14 = cStack_750 == '\x01';
            if (bVar14) {
              FUN_10aced1ac(&ppuStack_430,&ppuStack_770);
            }
            pppuVar20 = &ppuStack_748;
            uStack_410 = bVar14;
            func_0x00010939d4b8(&ppuStack_408);
            ppuVar34 = ppuStack_720;
            ppuVar30 = ppuStack_728;
            ppuStack_3e0 = (undefined **)0x0;
            ppuStack_3e8 = (undefined **)0x0;
            ppuStack_3d8 = (undefined **)0x0;
            if ((long)ppuStack_720 - (long)ppuStack_728 != 0) {
              ppuVar22 = (undefined **)((long)ppuStack_720 - (long)ppuStack_728 >> 8);
              if ((ulong)ppuVar22 >> 0x38 != 0) {
                FUN_10acfa024();
                goto LAB_10acf59b8;
              }
              FUN_10acfa038();
              lVar21 = 0;
              ppuStack_3d8 = ppuVar22 + (long)pppuVar20 * 0x20;
              ppuStack_3e8 = ppuVar22;
              ppuStack_3e0 = ppuVar22;
              do {
                puVar33 = (undefined8 *)((long)ppuVar30 + lVar21);
                puVar19 = (undefined8 *)((long)ppuVar22 + lVar21);
                uVar44 = puVar33[1];
                uVar42 = *puVar33;
                puVar19[2] = puVar33[2];
                puVar19[1] = uVar44;
                *puVar19 = uVar42;
                puVar19[3] = puVar33[3];
                uVar42 = puVar33[4];
                uVar47 = puVar33[7];
                uVar44 = puVar33[6];
                puVar19[5] = puVar33[5];
                puVar19[4] = uVar42;
                puVar19[7] = uVar47;
                puVar19[6] = uVar44;
                uVar44 = puVar33[9];
                uVar42 = puVar33[8];
                puVar19[10] = puVar33[10];
                puVar19[9] = uVar44;
                puVar19[8] = uVar42;
                uVar48 = puVar33[0x11];
                uVar47 = puVar33[0x10];
                uVar44 = puVar33[0x13];
                uVar42 = puVar33[0x12];
                uVar52 = puVar33[0xf];
                uVar50 = puVar33[0xe];
                puVar19[0x14] = puVar33[0x14];
                puVar19[0x11] = uVar48;
                puVar19[0x10] = uVar47;
                puVar19[0x13] = uVar44;
                puVar19[0x12] = uVar42;
                puVar19[0xf] = uVar52;
                puVar19[0xe] = uVar50;
                uVar42 = puVar33[0xc];
                puVar19[0xd] = puVar33[0xd];
                puVar19[0xc] = uVar42;
                uVar44 = puVar33[0x17];
                uVar42 = puVar33[0x16];
                puVar19[0x18] = puVar33[0x18];
                puVar19[0x17] = uVar44;
                puVar19[0x16] = uVar42;
                uVar3 = *(undefined2 *)(puVar33 + 0x19);
                puVar19[0x1a] = 0;
                *(undefined2 *)(puVar19 + 0x19) = uVar3;
                puVar19[0x1b] = 0;
                puVar19[0x1c] = 0;
                FUN_10aceb8ec();
                puVar19[0x1d] = 0;
                puVar19[0x1e] = 0;
                puVar19[0x1f] = 0;
                FUN_10acbf198(puVar19 + 0x1d,puVar33[0x1d],puVar33[0x1e],
                              (long)(puVar33[0x1e] - puVar33[0x1d]) >> 1);
                lVar21 = lVar21 + 0x100;
              } while ((undefined **)(puVar33 + 0x20) != ppuVar34);
              ppuStack_3e0 = (undefined **)((long)ppuVar22 + lVar21);
            }
            FUN_10aceb7a0(&ppuStack_3d0,&ppuStack_710);
            ppuVar30 = (undefined **)0xb8;
            __Znwm();
            ppuVar30[2] = (undefined *)0x0;
            ppuVar30[1] = (undefined *)0x200000006;
            *(undefined2 *)(ppuVar30 + 3) = 4;
            ppuVar30[5] = (undefined *)0x0;
            ppuVar30[4] = (undefined *)0x0;
            ppuVar30[7] = (undefined *)0x0;
            ppuVar30[6] = (undefined *)0x0;
            ppuVar30[9] = (undefined *)0x0;
            ppuVar30[8] = (undefined *)0x0;
            ppuVar30[0xb] = (undefined *)0x0;
            ppuVar30[10] = (undefined *)0x0;
            ppuVar30[0xd] = (undefined *)0x0;
            ppuVar30[0xc] = (undefined *)0x0;
            ppuVar30[0xf] = (undefined *)0x0;
            ppuVar30[0xe] = (undefined *)0x0;
            ppuVar30[0x10] = (undefined *)0x0;
            ppuVar30[0x11] = (undefined *)(ppuVar30 + 3);
            ppuVar30[0x12] = (undefined *)0x0;
            *ppuVar30 = (undefined *)&PTR_DAT_110c6db60;
            *(undefined1 *)(ppuVar30 + 0x13) = 0;
            *(undefined1 *)(ppuVar30 + 0x16) = 0;
            ppuStack_d00 = ppuVar30;
            FUN_10acfa7a4(&ppuStack_3a0,&uStack_6f0);
            func_0x00010acfa6f8(ppuVar30,&ppuStack_3a0);
            FUN_10acfa9d4(&ppuStack_3a0);
            plStack_d08 = (long *)0x0;
            func_0x0001092b4274(&ppuStack_d00,ppuVar30);
            if (plStack_d08 != (long *)0x0) {
              puVar2 = (ulong *)(plStack_d08 + 1);
              do {
                uVar23 = *puVar2;
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar14) {
                  *puVar2 = uVar23 - 4;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((uVar23 & 0x1fffffffc) == 4) {
                do {
                  uVar23 = *puVar2;
                  cVar5 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar14) {
                    *puVar2 = uVar23 - 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (uVar23 - 1 == 0) {
                  (**(code **)(*plStack_d08 + 8))();
                }
              }
            }
            plVar31 = (long *)ppuVar17[0x2f];
            if (plVar31 != (long *)0x0) {
              puVar2 = (ulong *)(plVar31 + 1);
              do {
                uVar23 = *puVar2;
                cVar5 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar14) {
                  *puVar2 = uVar23 - 4;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((uVar23 & 0x1fffffffc) == 4) {
                do {
                  uVar23 = *puVar2;
                  cVar5 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar14) {
                    *puVar2 = uVar23 - 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (uVar23 - 1 == 0) {
                  (**(code **)(*plVar31 + 8))();
                }
              }
            }
            ppuVar17[0x2f] = (undefined *)ppuVar30;
            FUN_10acf761c(&uStack_6f0);
          }
          else {
            dVar40 = (double)ppuVar30[2] - (double)ppuVar17[0x30];
            ppuVar34 = (undefined **)&UNK_10dd8b000;
            if ((0.1 < dVar40) || (dVar40 < 0.0)) {
              ppuVar34 = &puStack_848;
              ppuVar17[0x30] = ppuVar30[2];
              puVar33 = (undefined8 *)ppuVar17[0x32];
              plVar38 = (long *)puVar33[2];
              puStack_390 = (undefined8 *)0x0;
              ppuStack_398 = (undefined **)0x0;
              if (plVar38 == (long *)0x0) {
                uStack_a30 = (undefined **)0x0;
                ppuStack_a28 = (undefined **)0x0;
                puStack_6e0 = puStack_cc0;
                puStack_6d0 = puStack_cb0;
                puStack_6b8 = puStack_c98;
                puStack_6c0 = puStack_ca0;
                ppuStack_6a8 = ppuStack_c88;
                plStack_6b0 = plStack_c90;
                uStack_698 = uStack_c78;
                puStack_6a0 = puStack_c80;
                puStack_688 = puStack_c68;
                puStack_690 = puStack_c70;
                uStack_680 = uStack_c60;
                puStack_678 = puVar26;
                puStack_670 = puVar27;
                puStack_9b8 = (undefined *)0x0;
                puStack_9b0 = (undefined *)0x0;
                puStack_658 = puStack_c38;
                puStack_660 = puStack_c40;
                uStack_648 = uStack_c28;
                puStack_650 = puStack_c30;
                puStack_638 = puStack_c18;
                puStack_640 = puStack_c20;
                puStack_630 = puStack_c10;
                uStack_5e0 = uStack_bc0;
                puStack_5f8 = puStack_bd8;
                puStack_600 = puStack_be0;
                uStack_5e8 = uStack_bc8;
                uStack_5f0 = uStack_bd0;
                puStack_618 = puStack_bf8;
                puStack_620 = puStack_c00;
                puStack_608 = puStack_be8;
                puStack_610 = puStack_bf0;
                uStack_5d0 = uVar47;
                plStack_5c8 = plVar31;
                uStack_910 = 0;
                plStack_908 = (long *)0x0;
                uStack_5b8 = uStack_b98;
                uStack_5c0 = uStack_ba0;
                uStack_5a8 = uStack_b88;
                uStack_5b0 = uStack_b90;
                uStack_598 = uStack_b78;
                uStack_5a0 = uStack_b80;
                uStack_588 = uStack_b68;
                uStack_590 = uStack_b70;
                uStack_578 = uStack_b58;
                uStack_580 = uStack_b60;
                uStack_570 = uStack_b50;
                uStack_520 = uStack_b00;
                uStack_538 = uStack_b18;
                uStack_540 = uStack_b20;
                uStack_528 = uStack_b08;
                uStack_530 = uStack_b10;
                uStack_558 = uStack_b38;
                uStack_560 = uStack_b40;
                uStack_548 = uStack_b28;
                uStack_550 = uStack_b30;
                uStack_510 = uStack_af0;
                puStack_508 = puVar45;
                puStack_500 = puVar46;
                puStack_848 = (undefined *)0x0;
                puStack_840 = (undefined *)0x0;
                uStack_838 = 0;
                uStack_4f8 = uVar48;
                lStack_4f0 = lVar8;
                lStack_4e8 = lVar9;
                uStack_4e0 = uVar50;
                lStack_830 = 0;
                lStack_828 = 0;
                uStack_820 = 0;
                lStack_4d8 = lVar10;
                lStack_4d0 = lVar11;
                uStack_4c8 = uVar52;
                lStack_818 = 0;
                lStack_810 = 0;
                uStack_808 = 0;
                uStack_4c0 = uStack_aa0;
                uStack_498 = uStack_a78;
                uStack_4a0 = uStack_a80;
                uStack_490 = uStack_a70;
                uStack_4a8 = uStack_a88;
                uStack_4b0 = uStack_a90;
                uStack_470 = uStack_470 & 0xffffffffffffff00;
                uStack_460 = cStack_a40 != '\0';
                if ((bool)uStack_460) {
                  plStack_468 = plStack_7a8;
                  uStack_470 = uStack_7b0;
                  uStack_7b0 = 0;
                  plStack_7a8 = (long *)0x0;
                }
                ppuStack_450 = &PTR_DAT_110af4cf0;
                lStack_448 = lVar6;
                ppuStack_440 = ppuVar22;
                iStack_438 = iVar7;
                lStack_788 = 0;
                uStack_77c = 0;
                uStack_780 = 0;
                iStack_778 = 0;
                ppuStack_430 = (undefined **)((ulong)ppuStack_430 & 0xffffffffffffff00);
                if (bVar13) {
                  ppuStack_430 = &PTR_DAT_110af4cf0;
                  ppuStack_428 = ppuStack_768;
                  uStack_420 = uStack_760;
                  uStack_418 = uStack_758;
                  uStack_760 = 0;
                  ppuStack_768 = (undefined **)0x0;
                  uStack_758 = 0;
                }
                ppuStack_408 = &PTR_DAT_110af4c80;
                lStack_400 = lVar25;
                uStack_3f8 = uVar44;
                iStack_3f0 = iVar16;
                lStack_740 = 0;
                uStack_734 = 0;
                uStack_738 = 0;
                iStack_730 = 0;
                ppuStack_3e8 = ppuVar37;
                ppuStack_3e0 = ppuVar32;
                ppuStack_3d8 = ppuVar35;
                ppuStack_720 = (undefined **)0x0;
                ppuStack_718 = (undefined **)0x0;
                ppuStack_728 = (undefined **)0x0;
                ppuStack_3d0 = &PTR_DAT_110af4b00;
                lStack_3c8 = lVar21;
                uStack_3c0 = uVar42;
                uStack_3b8 = uVar61;
                lStack_708 = 0;
                uStack_6fc = 0;
                uStack_700 = 0;
                uStack_6f8 = 0;
                puVar19 = (undefined8 *)0x430;
                uStack_6f0 = ppuVar41;
                uStack_6e8 = ppuVar43;
                uStack_488 = uStack_7c8;
                uStack_47e = uStack_7be;
                uStack_410 = bVar13;
                __Znwm();
                puVar19[2] = 0;
                puVar19[1] = 0x200000006;
                *(undefined2 *)(puVar19 + 3) = 4;
                puVar19[5] = 0;
                puVar19[4] = 0;
                puVar19[7] = 0;
                puVar19[6] = 0;
                puVar19[9] = 0;
                puVar19[8] = 0;
                puVar19[0xb] = 0;
                puVar19[10] = 0;
                puVar19[0xd] = 0;
                puVar19[0xc] = 0;
                puVar19[0xf] = 0;
                puVar19[0xe] = 0;
                puVar19[0x10] = 0;
                puVar19[0x11] = puVar19 + 3;
                puVar19[0x12] = 0;
                *(undefined1 *)(puVar19 + 0x13) = 0;
                *(undefined1 *)(puVar19 + 0x16) = 0;
                ppuVar30 = (undefined **)(puVar19 + 0x18);
                *puVar19 = &PTR_DAT_110c6db80;
                FUN_10acfa06c(ppuVar30,&uStack_6f0);
                *(undefined1 *)(puVar19 + 0x82) = 1;
                puVar19[0x84] = 0;
                ppuStack_3a0 = ppuVar30;
                ppuStack_398 = (undefined **)puVar19;
                puStack_390 = puVar19;
                FUN_10acf761c(&uStack_6f0);
                ppuStack_388 = (undefined **)FUN_10acfa35c;
              }
              else {
                plStack_d08 = (long *)0x0;
                (**(code **)(*plVar38 + 0x28))(plVar38,0,&plStack_d08);
                uVar44 = uStack_838;
                plVar31 = plStack_908;
                uVar42 = uStack_910;
                if (plStack_d08 != (long *)0x0) {
                  func_0x0001092af97c(&plStack_d08);
                  goto LAB_10acf59b8;
                }
                uStack_6e8 = ppuStack_a28;
                uStack_6f0 = uStack_a30;
                uStack_a30 = (undefined **)0x0;
                ppuStack_a28 = (undefined **)0x0;
                puStack_6e0 = uStack_a20;
                puStack_6d0 = puStack_a10;
                puStack_6b8 = puStack_9f8;
                puStack_6c0 = puStack_a00;
                ppuStack_6a8 = ppuStack_9e8;
                plStack_6b0 = plStack_9f0;
                uStack_698 = uStack_9d8;
                puStack_6a0 = puStack_9e0;
                puStack_688 = puStack_9c8;
                puStack_690 = puStack_9d0;
                uStack_680 = (undefined4)uStack_9c0;
                puStack_678 = puStack_9b8;
                puStack_670 = puStack_9b0;
                puStack_9b8 = (undefined *)0x0;
                puStack_9b0 = (undefined *)0x0;
                puStack_658 = puStack_998;
                puStack_660 = puStack_9a0;
                uStack_648 = uStack_988;
                puStack_650 = puStack_990;
                puStack_638 = puStack_978;
                puStack_640 = puStack_980;
                puStack_630 = puStack_970;
                uStack_5e0 = uStack_920;
                puStack_5f8 = puStack_938;
                puStack_600 = puStack_940;
                uStack_5e8 = uStack_928;
                uStack_5f0 = uStack_930;
                puStack_618 = puStack_958;
                puStack_620 = puStack_960;
                puStack_608 = puStack_948;
                puStack_610 = puStack_950;
                uStack_910 = 0;
                plStack_908 = (long *)0x0;
                plStack_5c8 = plVar31;
                uStack_5d0 = uVar42;
                uStack_5b8 = uStack_8f8;
                uStack_5c0 = uStack_900;
                uStack_5a8 = uStack_8e8;
                uStack_5b0 = uStack_8f0;
                uStack_598 = uStack_8d8;
                uStack_5a0 = uStack_8e0;
                uStack_588 = uStack_8c8;
                uStack_590 = uStack_8d0;
                uStack_578 = uStack_8b8;
                uStack_580 = uStack_8c0;
                uStack_570 = uStack_8b0;
                uStack_520 = uStack_860;
                uStack_538 = uStack_878;
                uStack_540 = uStack_880;
                uStack_528 = uStack_868;
                uStack_530 = uStack_870;
                uStack_558 = uStack_898;
                uStack_560 = uStack_8a0;
                uStack_548 = uStack_888;
                uStack_550 = uStack_890;
                uStack_510 = uStack_850;
                puStack_500 = puStack_840;
                puStack_508 = puStack_848;
                puStack_848 = (undefined *)0x0;
                puStack_840 = (undefined *)0x0;
                uStack_838 = 0;
                lStack_4e8 = lStack_828;
                lStack_4f0 = lStack_830;
                uStack_4f8 = uVar44;
                uStack_4e0 = uStack_820;
                lStack_830 = 0;
                lStack_828 = 0;
                uStack_820 = 0;
                lStack_4d0 = lStack_810;
                lStack_4d8 = lStack_818;
                uStack_4c8 = uStack_808;
                lStack_818 = 0;
                lStack_810 = 0;
                uStack_808 = 0;
                uStack_4c0 = uStack_800;
                uStack_47e = uStack_7be;
                uStack_498 = uStack_7d8;
                uStack_4a0 = uStack_7e0;
                uStack_488 = uStack_7c8;
                uStack_490 = uStack_7d0;
                uStack_4a8 = uStack_7e8;
                uStack_4b0 = uStack_7f0;
                uStack_470 = uStack_470 & 0xffffffffffffff00;
                uStack_460 = cStack_7a0 == '\x01';
                if ((bool)uStack_460) {
                  plStack_468 = plStack_7a8;
                  uStack_470 = uStack_7b0;
                  uStack_7b0 = 0;
                  plStack_7a8 = (long *)0x0;
                }
                ppuStack_450 = &PTR_DAT_110af4cf0;
                lStack_448 = lStack_788;
                ppuStack_440 = (undefined **)CONCAT44(uStack_77c,uStack_780);
                iStack_438 = iStack_778;
                iStack_778 = 0;
                lStack_788 = 0;
                uStack_77c = 0;
                uStack_780 = 0;
                ppuStack_430 = (undefined **)((ulong)ppuStack_430 & 0xffffffffffffff00);
                uStack_410 = cStack_750 == '\x01';
                if ((bool)uStack_410) {
                  ppuStack_430 = &PTR_DAT_110af4cf0;
                  ppuStack_428 = ppuStack_768;
                  uStack_420 = uStack_760;
                  uStack_418 = uStack_758;
                  uStack_760 = 0;
                  ppuStack_768 = (undefined **)0x0;
                  uStack_758 = 0;
                }
                ppuStack_408 = &PTR_DAT_110af4c80;
                lStack_400 = lStack_740;
                uStack_3f8 = CONCAT44(uStack_734,uStack_738);
                iStack_3f0 = iStack_730;
                lStack_740 = 0;
                uStack_734 = 0;
                uStack_738 = 0;
                iStack_730 = 0;
                ppuStack_3e0 = ppuStack_720;
                ppuStack_3e8 = ppuStack_728;
                ppuStack_3d8 = ppuStack_718;
                ppuStack_720 = (undefined **)0x0;
                ppuStack_718 = (undefined **)0x0;
                ppuStack_728 = (undefined **)0x0;
                ppuStack_3d0 = &PTR_DAT_110af4b00;
                lStack_3c8 = lStack_708;
                uStack_3c0 = CONCAT44(uStack_6fc,uStack_700);
                uStack_3b8 = uStack_6f8;
                lStack_708 = 0;
                uStack_6fc = 0;
                uStack_700 = 0;
                uStack_6f8 = 0;
                puVar19 = (undefined8 *)0x430;
                __Znwm();
                puVar19[2] = 0;
                puVar19[1] = 0x200000006;
                *(undefined2 *)(puVar19 + 3) = 4;
                puVar19[5] = 0;
                puVar19[4] = 0;
                puVar19[7] = 0;
                puVar19[6] = 0;
                puVar19[9] = 0;
                puVar19[8] = 0;
                puVar19[0xb] = 0;
                puVar19[10] = 0;
                puVar19[0xd] = 0;
                puVar19[0xc] = 0;
                puVar19[0xf] = 0;
                puVar19[0xe] = 0;
                puVar19[0x10] = 0;
                puVar19[0x11] = puVar19 + 3;
                puVar19[0x12] = 0;
                *(undefined1 *)(puVar19 + 0x13) = 0;
                *(undefined1 *)(puVar19 + 0x16) = 0;
                *puVar19 = &PTR_FUN_110c6db10;
                FUN_10acfa06c(puVar19 + 0x18,&uStack_6f0);
                *(undefined1 *)(puVar19 + 0x82) = 1;
                puVar19[0x84] = 0;
                puVar19[0x85] = plVar38;
                if (ppuStack_398 != (undefined **)0x0) {
                  ppuVar30 = ppuStack_398 + 1;
                  do {
                    puVar26 = *ppuVar30;
                    cVar5 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(ppuVar30,0x10);
                    if (bVar14) {
                      *ppuVar30 = puVar26 + -4;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (((ulong)puVar26 & 0x1fffffffc) == 4) {
                    do {
                      puVar26 = *ppuVar30;
                      cVar5 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(ppuVar30,0x10);
                      if (bVar14) {
                        *ppuVar30 = puVar26 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (puVar26 + -1 == (undefined *)0x0) {
                      (**(code **)(*ppuStack_398 + 8))();
                    }
                  }
                }
                ppuStack_398 = (undefined **)puVar19;
                if (puStack_390 != (undefined8 *)0x0) {
                  func_0x0001092b4274(&puStack_390);
                }
                ppuStack_3a0 = (undefined **)(puVar19 + 0x18);
                puStack_390 = puVar19;
                FUN_10acf761c(&uStack_6f0);
                ppuStack_388 = (undefined **)FUN_10acfa32c;
                __ZNSt13exception_ptrD1Ev(&plStack_d08);
              }
              ppuVar30 = ppuStack_3a0;
              if (ppuStack_3a0[0x6c] != (undefined *)0x0) {
                func_0x0001092b4274(ppuStack_3a0 + 0x6c);
              }
              ppuVar30[0x6c] = (undefined *)puStack_390;
              puStack_390 = (undefined8 *)0x0;
              uStack_6f0 = ppuStack_388;
              uStack_6e8 = ppuStack_3a0;
              puStack_6e0 = puVar33;
              (**(code **)*puVar33)(puVar33,&uStack_6f0);
              ppuVar30 = ppuStack_398;
              ppuStack_398 = (undefined **)0x0;
              if ((puStack_390 != (undefined8 *)0x0) &&
                 (func_0x0001092b4274(&puStack_390), ppuStack_398 != (undefined **)0x0)) {
                ppuVar22 = ppuStack_398 + 1;
                do {
                  puVar26 = *ppuVar22;
                  cVar5 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
                  if (bVar14) {
                    *ppuVar22 = puVar26 + -4;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (((ulong)puVar26 & 0x1fffffffc) == 4) {
                  do {
                    puVar26 = *ppuVar22;
                    cVar5 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
                    if (bVar14) {
                      *ppuVar22 = puVar26 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (puVar26 + -1 == (undefined *)0x0) {
                    (**(code **)(*ppuStack_398 + 8))();
                  }
                }
              }
              plVar31 = (long *)ppuVar17[0x2f];
              if (plVar31 != (long *)0x0) {
                puVar2 = (ulong *)(plVar31 + 1);
                do {
                  uVar23 = *puVar2;
                  cVar5 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar14) {
                    *puVar2 = uVar23 - 4;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((uVar23 & 0x1fffffffc) == 4) {
                  do {
                    uVar23 = *puVar2;
                    cVar5 = '\x01';
                    bVar14 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar14) {
                      *puVar2 = uVar23 - 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (uVar23 - 1 == 0) {
                    (**(code **)(*plVar31 + 8))();
                  }
                }
              }
              ppuVar17[0x2f] = (undefined *)ppuVar30;
            }
          }
          FUN_10acf761c(&uStack_a30);
          FUN_10acf9fbc(&ppuStack_d20);
        }
        ppuStack_d98 = &PTR_DAT_110af4b00;
        if (lStack_d90 != 0) {
          __ZdaPv();
        }
        ppuStack_d78 = &PTR_DAT_110af4c80;
        if (lStack_d70 != 0) {
          __ZdaPv();
        }
        bVar14 = false;
        if (ppuStack_de0 != (undefined **)0x0) {
          bVar14 = bVar13;
        }
        if (bVar14) {
          __ZdaPv(ppuStack_de0);
        }
        plVar31 = plStack_a48;
        if ((cStack_a40 == '\x01') && (plStack_a48 != (long *)0x0)) {
          plVar38 = plStack_a48 + 1;
          do {
            lVar21 = *plVar38;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar38,0x10);
            if (bVar13) {
              *plVar38 = lVar21 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plStack_a48 + 0x10))(plStack_a48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
          }
        }
        if (lStack_ab8 != 0) {
          lStack_ab0 = lStack_ab8;
          __ZdlPv();
        }
        if (lStack_ad0 != 0) {
          lStack_ac8 = lStack_ad0;
          __ZdlPv();
        }
        if (puStack_ae8 != (undefined *)0x0) {
          puStack_ae0 = puStack_ae8;
          __ZdlPv();
        }
        plVar31 = plStack_ba8;
        if (plStack_ba8 != (long *)0x0) {
          plVar38 = plStack_ba8 + 1;
          do {
            lVar21 = *plVar38;
            cVar5 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar38,0x10);
            if (bVar13) {
              *plVar38 = lVar21 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plStack_ba8 + 0x10))(plStack_ba8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
          }
        }
        _free(puStack_c58);
      }
      unaff_x28 = &PTR_DAT_110af4cf0;
      ppuStack_d58 = &PTR_DAT_110af4cf0;
      if (lStack_d50 != 0) {
        __ZdaPv();
      }
    }
  }
  else if ((ppuVar17[0x2f] == (undefined *)0x0) ||
          (((uint)*(undefined8 *)(ppuVar17[0x2f] + 0x10) >> 1 & 1) != 0)) {
    dVar40 = (double)ppuVar30[2] - (double)ppuVar17[0x30];
    bVar13 = false;
    bVar14 = false;
    bVar15 = false;
    if (0.0 <= dVar40) {
      bVar13 = false;
      bVar14 = false;
      bVar15 = true;
      if (!NAN(dVar40)) {
        bVar13 = dVar40 < 0.1;
        bVar14 = dVar40 == 0.1;
        bVar15 = false;
      }
    }
    if (!bVar14 && bVar13 == bVar15) goto LAB_10acf3a24;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_da8 = extraout_x10;
LAB_10acf5998:
  ppuStack_d38 = ppuStack_da8;
  ppuStack_d30 = unaff_x28;
  ppuStack_d28 = ppuVar34;
  FUN_10acfa024();
LAB_10acf59b8:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10acf59bc);
  (*pcVar12)();
}



/* Entry: 10acf3804; end: 10acf399b;  */

void FUN_10acf3804(undefined **param_1,undefined **param_2,long *param_3,undefined8 param_4,
                  ulong param_5,long *param_6)

{
  long *plVar1;
  int *piVar2;
  ulong *puVar3;
  undefined2 uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  long *plVar18;
  double *pdVar19;
  undefined8 *puVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined ***pppuVar23;
  ulong uVar24;
  byte bVar25;
  long lVar26;
  ulong uVar27;
  undefined **extraout_x10;
  undefined **ppuVar28;
  undefined8 *puVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  int iVar32;
  undefined *puVar33;
  undefined **unaff_x28;
  long *plVar34;
  float fVar35;
  double dVar36;
  undefined **ppuVar37;
  undefined8 uVar38;
  undefined *puVar39;
  undefined **ppuVar40;
  undefined8 uVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined *puVar46;
  undefined8 uVar47;
  undefined *puVar48;
  undefined8 uVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined4 uVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined4 uStack_c78;
  undefined4 uStack_c70;
  undefined **ppuStack_c60;
  undefined **ppuStack_c28;
  undefined **ppuStack_c18;
  long lStack_c10;
  undefined8 uStack_c08;
  undefined4 uStack_c00;
  undefined **ppuStack_bf8;
  long lStack_bf0;
  undefined8 uStack_be8;
  int iStack_be0;
  undefined **ppuStack_bd8;
  long lStack_bd0;
  undefined8 uStack_bc8;
  int iStack_bc0;
  undefined **ppuStack_bb8;
  undefined **ppuStack_bb0;
  undefined **ppuStack_ba8;
  undefined **ppuStack_ba0;
  undefined **ppuStack_b98;
  undefined **ppuStack_b90;
  long *plStack_b88;
  undefined **ppuStack_b80;
  undefined *puStack_b78;
  undefined8 uStack_b70;
  undefined *puStack_b68;
  undefined *puStack_b60;
  undefined8 uStack_b58;
  undefined *puStack_b50;
  undefined *puStack_b48;
  undefined8 *puStack_b40;
  undefined8 *puStack_b38;
  undefined *puStack_b30;
  undefined *puStack_b20;
  undefined *puStack_b18;
  long *plStack_b10;
  undefined **ppuStack_b08;
  undefined *puStack_b00;
  undefined8 uStack_af8;
  undefined *puStack_af0;
  undefined *puStack_ae8;
  undefined4 uStack_ae0;
  undefined *puStack_ad8;
  undefined *puStack_ad0;
  undefined *puStack_ac0;
  undefined *puStack_ab8;
  undefined *puStack_ab0;
  undefined8 uStack_aa8;
  undefined *puStack_aa0;
  undefined *puStack_a98;
  undefined *puStack_a90;
  undefined8 *puStack_a80;
  undefined8 *puStack_a78;
  undefined *puStack_a70;
  undefined *puStack_a68;
  undefined *puStack_a60;
  undefined *puStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a30;
  long *plStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined4 uStack_970;
  undefined *puStack_968;
  undefined *puStack_960;
  undefined8 uStack_958;
  long lStack_950;
  long lStack_948;
  undefined8 uStack_940;
  long lStack_938;
  long lStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined1 uStack_8e8;
  undefined1 uStack_8e7;
  undefined6 uStack_8de;
  undefined2 uStack_8d8;
  ulong uStack_8d0;
  long *plStack_8c8;
  char cStack_8c0;
  undefined8 uStack_8b0;
  undefined **ppuStack_8a8;
  undefined8 uStack_8a0;
  undefined **ppuStack_898;
  undefined *puStack_890;
  double dStack_888;
  undefined *puStack_880;
  undefined *puStack_878;
  long *plStack_870;
  undefined **ppuStack_868;
  undefined *puStack_860;
  undefined8 uStack_858;
  undefined *puStack_850;
  undefined *puStack_848;
  undefined8 uStack_840;
  undefined *puStack_838;
  undefined *puStack_830;
  undefined *puStack_820;
  undefined *puStack_818;
  undefined *puStack_810;
  undefined8 uStack_808;
  undefined *puStack_800;
  undefined *puStack_7f8;
  undefined *puStack_7f0;
  undefined8 *puStack_7e0;
  undefined8 *puStack_7d8;
  undefined *puStack_7d0;
  undefined *puStack_7c8;
  undefined *puStack_7c0;
  undefined *puStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_790;
  long *plStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined4 uStack_6d0;
  undefined *puStack_6c8;
  undefined *puStack_6c0;
  undefined8 uStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  long lStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined2 uStack_648;
  undefined8 uStack_63e;
  ulong uStack_630;
  long *plStack_628;
  char cStack_620;
  undefined **ppuStack_610;
  long lStack_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  int iStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined8 uStack_5e0;
  undefined4 uStack_5d8;
  char cStack_5d0;
  undefined **ppuStack_5c8;
  long lStack_5c0;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  int iStack_5b0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  long lStack_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  long *plStack_530;
  undefined **ppuStack_528;
  undefined *puStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined8 uStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined2 uStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_450;
  long *plStack_448;
  undefined8 uStack_440;
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
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  long lStack_370;
  long lStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined2 uStack_308;
  undefined8 uStack_2fe;
  ulong uStack_2f0;
  long *plStack_2e8;
  undefined1 uStack_2e0;
  undefined **ppuStack_2d0;
  long lStack_2c8;
  undefined **ppuStack_2c0;
  int iStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined1 uStack_290;
  undefined **ppuStack_288;
  long lStack_280;
  undefined8 uStack_278;
  int iStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined8 *puStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  double dStack_1f8;
  undefined *puStack_1f0;
  long *plStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_188;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  double *pdStack_f0;
  long *plStack_e8;
  undefined1 auStack_e0 [88];
  undefined8 uStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_1 == (undefined *)0x0) ||
     (plVar18 = param_3, (*(byte *)((long)param_3 + 0x1e) & 1) != 0)) {
    FUN_10acf5e7c(param_1);
    *(char *)(param_1 + 0x31) = (char)*param_3;
    FUN_10acdd07c(auStack_e0,param_2 + 0x25);
    unaff_d10 = (ulong)*(uint *)((long)param_3 + 4);
    unaff_d11 = (ulong)*(uint *)(param_3 + 1);
    uVar58 = *(undefined4 *)((long)param_3 + 0xc);
    unaff_d8 = (ulong)*(uint *)(param_3 + 2);
    bVar25 = *(byte *)((long)param_3 + 0x14);
    unaff_d9 = (ulong)*(uint *)(param_3 + 3);
    plVar18 = (long *)0x30;
    __Znwm();
    plVar18[1] = 0;
    plVar18[2] = 0;
    pdVar19 = (double *)(plVar18 + 3);
    *plVar18 = (long)&PTR_FUN_110c6dd58;
    param_5 = (ulong)(bVar25 & 1);
    param_3 = (long *)0x0;
    param_4 = 3;
    func_0x00010943eb10(unaff_d10,unaff_d11,uVar58,unaff_d8,unaff_d9,pdVar19,auStack_e0,0,3);
    pdStack_f0 = pdVar19;
    plStack_e8 = plVar18;
    _free(uStack_88);
    FUN_10acf6f80(param_1,&pdStack_f0);
    plVar34 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar1 = plStack_e8 + 1;
      do {
        lVar26 = *plVar1;
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar26 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar34);
      }
    }
    param_2 = &PTR_PTR_1133073f8;
    param_1 = param_2;
    FUN_10ae079a0(0);
    FUN_10ae07cd4();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(plVar18);
  __ZdlPv();
  _free(uStack_88);
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar30 = param_2;
  uStack_170 = unaff_d11;
  uStack_168 = unaff_d10;
  uStack_160 = unaff_d9;
  uStack_158 = unaff_d8;
  if (*(char *)(param_1 + 0x34) == '\0') {
LAB_10acf3a24:
    if ((*(byte *)((long)param_3 + 0x281) & 1) == 0) {
      uStack_568 = (undefined **)param_3[1];
      uStack_570 = (undefined **)*param_3;
      puStack_558 = (undefined *)param_3[3];
      puStack_560 = (undefined8 *)param_3[2];
      puStack_548 = (undefined *)param_3[5];
      puStack_550 = (undefined *)param_3[4];
      plStack_530 = (long *)((ulong)&uStack_570 | 8);
      iVar32 = *(int *)((long)param_3 + 4);
      puStack_538 = (undefined *)param_3[7];
      puStack_540 = (undefined *)param_3[6];
      uStack_518 = 0;
      puStack_520 = (undefined *)0x0;
      if (param_3[7] != 0) {
        piVar2 = (int *)(param_3[7] + 0x14);
        do {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        iVar32 = *(int *)((long)param_3 + 4);
      }
      ppuStack_528 = &puStack_520;
      if (iVar32 < 3) {
        puStack_520 = *(undefined **)param_3[9];
        uStack_518 = ((undefined8 *)param_3[9])[1];
      }
      else {
        uStack_570 = (undefined **)((ulong)uStack_570 & 0xffffffff);
        func_0x000109a84868(&uStack_570,param_3);
      }
      puVar29 = puStack_560;
      lStack_bd0 = 0;
      uStack_bc8 = (undefined **)0x0;
      ppuStack_bd8 = &PTR_DAT_110af4cf0;
      iStack_bc0 = 0;
      puVar33 = *ppuStack_528;
      uStack_8b0 = (undefined **)CONCAT44((int)uStack_568,uStack_568._4_4_);
      func_0x00010938db10(&ppuStack_bd8,&uStack_8b0);
      if (0 < uStack_bc8._4_4_) {
        lVar26 = 0;
        do {
          _memcpy(lStack_bd0 + lVar26 * iStack_bc0 * 4,puVar29,(long)(int)uStack_bc8 << 2);
          lVar26 = lVar26 + 1;
          puVar29 = (undefined8 *)((long)puVar29 + (((long)puVar33 << 0x20) >> 0x22) * 4);
        } while (lVar26 < uStack_bc8._4_4_);
      }
      fVar35 = *(float *)(param_3 + 0x3f);
      if (fVar35 / 100.0 != 1.0) {
        func_0x00010936ff7c(&uStack_8b0,uStack_bc8._4_4_,(ulong)uStack_bc8 & 0xffffffff,5,lStack_bd0
                            ,(long)iStack_bc0 << 2);
        puStack_b40 = (undefined8 *)CONCAT44(puStack_b40._4_4_,0xc2010000);
        puStack_b30 = (undefined *)0x0;
        puStack_b38 = &uStack_8b0;
        func_0x000109a41858((double)(fVar35 / 100.0),0,&uStack_8b0,&puStack_b40,0xffffffff);
        if (puStack_878 != (undefined *)0x0) {
          piVar2 = (int *)(puStack_878 + 0x14);
          do {
            iVar32 = *piVar2;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = iVar32 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar32 + -1 == 0) {
            func_0x000109a848d4(&uStack_8b0);
          }
        }
        puStack_878 = (undefined *)0x0;
        ppuStack_898 = (undefined **)0x0;
        uStack_8a0 = (undefined8 *)0x0;
        dStack_888 = 0.0;
        puStack_890 = (undefined *)0x0;
        if (0 < uStack_8b0._4_4_) {
          lVar26 = 0;
          do {
            *(int *)((long)plStack_870 + lVar26 * 4) = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < uStack_8b0._4_4_);
        }
        if (ppuStack_868 != &puStack_860 && ppuStack_868 != (undefined **)0x0) {
          _free(ppuStack_868[-1]);
        }
      }
      if (puStack_538 != (undefined *)0x0) {
        piVar2 = (int *)((long)puStack_538 + 0x14);
        do {
          iVar32 = *piVar2;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar14) {
            *piVar2 = iVar32 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar32 + -1 == 0) {
          func_0x000109a848d4(&uStack_570);
        }
      }
      puStack_538 = (undefined *)0x0;
      puStack_558 = (undefined *)0x0;
      puStack_560 = (undefined8 *)0x0;
      puStack_548 = (undefined *)0x0;
      puStack_550 = (undefined *)0x0;
      if (0 < (int)uStack_570._4_4_) {
        lVar26 = 0;
        do {
          *(int *)((long)plStack_530 + lVar26 * 4) = 0;
          lVar26 = lVar26 + 1;
        } while (lVar26 < (int)uStack_570._4_4_);
      }
      if (ppuStack_528 != &puStack_520 && ppuStack_528 != (undefined **)0x0) {
        _free(ppuStack_528[-1]);
      }
      ppuVar30 = param_1;
      if ((ulong)uStack_bc8 >> 0x20 == 0 || ((ulong)uStack_bc8 & 0xffffffff) == 0) {
        ppuVar22 = &PTR_PTR_113307420;
        FUN_10ae079a0(0,&PTR_PTR_113307420);
        FUN_10ae07cd4(ppuVar22,&PTR_PTR_113307420);
      }
      else {
        FUN_10aaafcb8(param_1 + 2,param_3,param_4);
        puStack_b40 = (undefined8 *)0x0;
        puStack_b30 = (undefined *)0x0;
        puStack_ad8 = (undefined *)0x0;
        puStack_ad0 = (undefined *)0x0;
        puStack_b18 = (undefined *)0x0;
        puStack_b20 = (undefined *)0x0;
        ppuStack_b08 = (undefined **)0x0;
        plStack_b10 = (long *)0x0;
        uStack_af8 = 0;
        puStack_b00 = (undefined *)0x0;
        puStack_ae8 = (undefined *)0x0;
        puStack_af0 = (undefined *)0x0;
        uStack_ae0 = 0;
        puStack_ac0 = (undefined *)0x0;
        puStack_ab8 = (undefined *)0x0;
        puStack_ab0 = (undefined *)0x0;
        uStack_aa8 = 0x3ff0000000000000;
        puStack_aa0 = (undefined *)0x0;
        puStack_a98 = (undefined *)0x0;
        puStack_a90 = (undefined *)0x0;
        puStack_a80 = (undefined8 *)0x3ff0000000000000;
        puStack_a70 = (undefined *)0x0;
        puStack_a78 = (undefined8 *)0x0;
        puStack_a68 = (undefined *)0x0;
        puStack_a60 = (undefined *)0x3ff0000000000000;
        puStack_a58 = (undefined *)0x0;
        uStack_a50 = 0;
        uStack_a48 = 0;
        uStack_a40 = 0x3ff0000000000000;
        plStack_a28 = (long *)0x0;
        uStack_a30 = 0;
        uStack_a18 = 0;
        uStack_a20 = 0;
        uStack_a10 = 0;
        uStack_a08 = 0x3ff0000000000000;
        uStack_a00 = 0;
        uStack_9f8 = 0;
        uStack_9f0 = 0;
        uStack_9e8 = 0x3ff0000000000000;
        uStack_9e0 = 0;
        uStack_9d8 = 0;
        uStack_9d0 = 0;
        uStack_9c0 = 0x3ff0000000000000;
        uStack_9b0 = 0;
        uStack_9b8 = 0;
        uStack_9a8 = 0;
        uStack_9a0 = 0x3ff0000000000000;
        uStack_998 = 0;
        uStack_990 = 0;
        uStack_988 = 0;
        uStack_980 = 0x3ff0000000000000;
        uStack_970 = 0;
        iVar32 = (int)&puStack_968;
        puStack_960 = (undefined *)0x0;
        puStack_968 = (undefined *)0x0;
        lStack_950 = 0;
        uStack_958 = 0;
        uStack_940 = 0;
        lStack_948 = 0;
        lStack_930 = 0;
        lStack_938 = 0;
        uStack_928 = 0;
        uStack_8f8 = 0x403e000000000000;
        uStack_8f0 = 0x403e000000000000;
        uStack_8e8 = 0;
        uStack_8d8 = 0;
        uStack_8d0 = uStack_8d0 & 0xffffffffffffff00;
        cStack_8c0 = '\0';
        func_0x00010942bc68(&puStack_b40,param_1 + 2);
        puStack_b40 = (undefined8 *)param_2[2];
        uStack_568 = (undefined **)param_3[0xd];
        uStack_570 = (undefined **)param_3[0xc];
        puStack_558 = (undefined *)param_3[0xf];
        puStack_560 = (undefined8 *)param_3[0xe];
        puStack_548 = (undefined *)param_3[0x11];
        puStack_550 = (undefined *)param_3[0x10];
        plStack_530 = (long *)((ulong)&uStack_570 | 8);
        iVar17 = *(int *)((long)param_3 + 100);
        puStack_538 = (undefined *)param_3[0x13];
        puStack_540 = (undefined *)param_3[0x12];
        uStack_518 = 0;
        puStack_520 = (undefined *)0x0;
        if (param_3[0x13] != 0) {
          piVar2 = (int *)(param_3[0x13] + 0x14);
          do {
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar14) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          iVar17 = *(int *)((long)param_3 + 100);
        }
        ppuStack_528 = &puStack_520;
        if (iVar17 < 3) {
          puStack_520 = *(undefined **)param_3[0x15];
          uStack_518 = ((undefined8 *)param_3[0x15])[1];
        }
        else {
          uStack_570 = (undefined **)((ulong)uStack_570 & 0xffffffff);
          func_0x000109a84868(&uStack_570);
        }
        puVar29 = puStack_560;
        if (puStack_560 == (undefined8 *)0x0) {
LAB_10acf3f70:
          bVar14 = false;
        }
        else {
          uVar24 = (ulong)uStack_570._4_4_;
          if ((int)uStack_570._4_4_ < 3) {
            lVar26 = (long)uStack_568._4_4_ * (long)(int)uStack_568;
          }
          else {
            lVar26 = 1;
            plVar18 = plStack_530;
            do {
              lVar26 = lVar26 * (int)*plVar18;
              uVar24 = uVar24 - 1;
              plVar18 = (long *)((long)plVar18 + 4);
            } while (uVar24 != 0);
          }
          if (lVar26 == 0) goto LAB_10acf3f70;
          uStack_8a0 = (undefined8 *)0x0;
          uStack_8b0 = &PTR_DAT_110af4cf0;
          ppuStack_8a8 = (undefined **)0x0;
          ppuStack_898 = (undefined **)((ulong)ppuStack_898 & 0xffffffff00000000);
          puVar33 = *ppuStack_528;
          ppuStack_220 = (undefined **)CONCAT44((int)uStack_568,uStack_568._4_4_);
          func_0x00010938db10(&uStack_8b0,&ppuStack_220);
          iVar32 = uStack_8a0._4_4_;
          if (0 < uStack_8a0._4_4_) {
            lVar26 = 0;
            do {
              _memcpy((undefined *)((long)ppuStack_8a8 + lVar26 * (int)ppuStack_898 * 4),puVar29,
                      (long)(int)uStack_8a0 << 2);
              lVar26 = lVar26 + 1;
              puVar29 = (undefined8 *)((long)puVar29 + (((long)puVar33 << 0x20) >> 0x22) * 4);
              iVar32 = uStack_8a0._4_4_;
            } while (lVar26 < uStack_8a0._4_4_);
          }
          ppuStack_c60 = ppuStack_8a8;
          bVar14 = true;
          uStack_c70 = SUB84(uStack_8a0,0);
          uStack_c78 = SUB84(ppuStack_898,0);
        }
        if (puStack_538 != (undefined *)0x0) {
          piVar2 = (int *)((long)puStack_538 + 0x14);
          do {
            iVar17 = *piVar2;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar15) {
              *piVar2 = iVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar17 + -1 == 0) {
            func_0x000109a848d4(&uStack_570);
          }
        }
        puStack_538 = (undefined *)0x0;
        puStack_558 = (undefined *)0x0;
        puStack_560 = (undefined8 *)0x0;
        puStack_548 = (undefined *)0x0;
        puStack_550 = (undefined *)0x0;
        if (0 < (int)uStack_570._4_4_) {
          lVar26 = 0;
          do {
            *(int *)((long)plStack_530 + lVar26 * 4) = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < (int)uStack_570._4_4_);
        }
        if (ppuStack_528 != &puStack_520 && ppuStack_528 != (undefined **)0x0) {
          _free(ppuStack_528[-1]);
        }
        FUN_10ace5b0c(&uStack_570,param_3 + 0x18,(char)param_3[0x24]);
        uStack_8b0 = (undefined **)NEON_rev64(uStack_568,4);
        lStack_bf0 = 0;
        uStack_be8 = 0;
        iStack_be0 = 0;
        ppuStack_bf8 = &PTR_DAT_110af4c80;
        func_0x00010938e870(&ppuStack_bf8,&uStack_8b0);
        puVar29 = puStack_560;
        if (puStack_560 != (undefined8 *)0x0) {
          uVar24 = (ulong)uStack_570._4_4_;
          if ((int)uStack_570._4_4_ < 3) {
            lVar26 = (long)uStack_568._4_4_ * (long)(int)uStack_568;
          }
          else {
            lVar26 = 1;
            plVar18 = plStack_530;
            do {
              lVar26 = lVar26 * (int)*plVar18;
              uVar24 = uVar24 - 1;
              plVar18 = (long *)((long)plVar18 + 4);
            } while (uVar24 != 0);
          }
          if (lVar26 != 0) {
            puVar33 = *ppuStack_528;
            uStack_8b0 = (undefined **)CONCAT44((int)uStack_568,uStack_568._4_4_);
            func_0x00010938e870(&ppuStack_bf8,&uStack_8b0);
            if (0 < uStack_be8._4_4_) {
              lVar26 = 0;
              do {
                _memcpy(lStack_bf0 + lVar26 * iStack_be0,puVar29,(long)(int)uStack_be8);
                lVar26 = lVar26 + 1;
                puVar29 = (undefined8 *)((long)puVar29 + (long)(int)puVar33);
              } while (lVar26 < uStack_be8._4_4_);
            }
          }
        }
        if (puStack_538 != (undefined *)0x0) {
          piVar2 = (int *)((long)puStack_538 + 0x14);
          do {
            iVar17 = *piVar2;
            cVar5 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar15) {
              *piVar2 = iVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar17 + -1 == 0) {
            func_0x000109a848d4(&uStack_570);
          }
        }
        puStack_538 = (undefined *)0x0;
        puStack_558 = (undefined *)0x0;
        puStack_560 = (undefined8 *)0x0;
        puStack_548 = (undefined *)0x0;
        puStack_550 = (undefined *)0x0;
        if (0 < (int)uStack_570._4_4_) {
          lVar26 = 0;
          do {
            *(int *)((long)plStack_530 + lVar26 * 4) = 0;
            lVar26 = lVar26 + 1;
          } while (lVar26 < (int)uStack_570._4_4_);
        }
        if (ppuStack_528 != &puStack_520 && ppuStack_528 != (undefined **)0x0) {
          _free(ppuStack_528[-1]);
        }
        uStack_8b0 = uStack_bc8;
        if ((*(char *)(param_1 + 0x31) == '\x01' && param_6 != (long *)0x0) &&
           (lVar26 = *param_6, lVar26 != 0)) {
          if (*(int *)(param_1 + 0x37) != *(int *)(lVar26 + 0x24)) {
            FUN_10a1b498c(&uStack_570,*(int *)(lVar26 + 0x24),3);
            func_0x00010a343394(param_1 + 0x35,&uStack_570);
            ppuVar22 = uStack_568;
            if (uStack_568 != (undefined **)0x0) {
              ppuVar21 = uStack_568 + 1;
              do {
                puVar33 = *ppuVar21;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                if (bVar15) {
                  *ppuVar21 = puVar33 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar33 == (undefined *)0x0) {
                (**(code **)(*uStack_568 + 0x10))(uStack_568);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar22);
              }
            }
            *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(lVar26 + 0x24);
          }
          puVar29 = (undefined8 *)param_1[0x35];
          iVar17 = (int)param_6 + 0x10;
          FUN_10a0ec6f0();
          ppuStack_220 = (undefined **)CONCAT44(ppuStack_220._4_4_,iVar17);
          (**(code **)*puVar29)(&uStack_570,puVar29,lVar26,&ppuStack_220,&uStack_8b0);
          FUN_10acdd1a0(&ppuStack_c18,uStack_570,*(undefined *)((long)param_1 + 0x1bc));
          ppuVar22 = uStack_568;
          if (uStack_568 != (undefined **)0x0) {
            ppuVar21 = uStack_568 + 1;
            do {
              puVar33 = *ppuVar21;
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
              if (bVar15) {
                *ppuVar21 = puVar33 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (puVar33 == (undefined *)0x0) {
              (**(code **)(*uStack_568 + 0x10))(uStack_568);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar22);
            }
          }
        }
        else {
          lStack_c10 = 0;
          uStack_c08 = 0;
          ppuStack_c18 = &PTR_DAT_110af4b00;
          uStack_c00 = 0;
        }
        FUN_10acf6fe4(param_1);
        if (param_1[0x2f] == (undefined *)0x0) {
          ppuStack_ba0 = (undefined **)0x0;
          ppuStack_b98 = (undefined **)0x0;
          ppuStack_b90 = (undefined **)0x0;
          if (param_5 == 0) {
LAB_10acf48ec:
            ppuVar30 = (undefined **)0x0;
            unaff_x28 = (undefined **)0x0;
            ppuStack_c28 = (undefined **)0x0;
          }
          else {
            ppuStack_bb8 = (undefined **)0x0;
            ppuStack_bb0 = (undefined **)0x0;
            ppuStack_ba8 = (undefined **)0x0;
            plVar18 = *(long **)(param_5 + 8);
            plVar34 = *(long **)(param_5 + 0x10);
            if (plVar18 == plVar34) goto LAB_10acf48ec;
            ppuStack_c28 = (undefined **)0x0;
            ppuVar30 = (undefined **)0x0;
            unaff_x28 = (undefined **)0x0;
            do {
              lVar26 = *plVar18;
              if (*(char *)(lVar26 + 0x68) == '\0') {
                dVar36 = (double)*(float *)(lVar26 + 0x20);
                dVar50 = (double)*(float *)(lVar26 + 0x24);
                dVar52 = (double)*(float *)(lVar26 + 0x28);
                uStack_808._0_2_ = (ushort)(byte)uStack_808;
                dVar53 = (double)(float)*(undefined8 *)(lVar26 + 0x10);
                dVar54 = (double)(float)((ulong)*(undefined8 *)(lVar26 + 0x10) >> 0x20);
                dVar59 = dVar54 + dVar54;
                dVar60 = (dVar53 + dVar53) * dVar53;
                dVar55 = (double)(float)*(undefined8 *)(lVar26 + 0x18);
                dVar56 = (double)(float)((ulong)*(undefined8 *)(lVar26 + 0x18) >> 0x20);
                dVar61 = dVar55 + dVar55;
                dVar57 = (dVar53 + dVar53) * dVar56;
                ppuStack_200 = (undefined **)
                               ((1.0 - (dVar59 * dVar54 + dVar61 * dVar55)) * dVar36 +
                                (dVar59 * dVar53 - dVar61 * dVar56) * dVar50 +
                                (dVar59 * dVar56 + dVar61 * dVar53) * dVar52 +
                               (double)(float)*(undefined8 *)(lVar26 + 4));
                dStack_1f8 = (dVar59 * dVar53 + dVar61 * dVar56) * dVar36 +
                             (1.0 - (dVar60 + dVar61 * dVar55)) * dVar50 +
                             (dVar61 * dVar54 - dVar57) * dVar52 +
                             (double)(float)((ulong)*(undefined8 *)(lVar26 + 4) >> 0x20);
                dVar51 = SQRT(dVar53 * dVar53 + dVar55 * dVar55 + dVar54 * dVar54 + dVar56 * dVar56)
                ;
                ppuStack_220 = (undefined **)(dVar53 / dVar51);
                ppuStack_218 = (undefined **)(dVar54 / dVar51);
                puStack_210 = (undefined8 *)(dVar55 / dVar51);
                ppuStack_208 = (undefined **)(dVar56 / dVar51);
                puStack_1f0 = (undefined *)
                              ((dVar61 * dVar53 - dVar59 * dVar56) * dVar36 +
                               (dVar57 + dVar61 * dVar54) * dVar50 +
                               (1.0 - (dVar60 + dVar59 * dVar54)) * dVar52 +
                              (double)*(float *)(lVar26 + 0xc));
                func_0x00010937fbc4(&plStack_b88,&ppuStack_220);
                puStack_1b8 = puStack_b60;
                puStack_1c0 = puStack_b68;
                puStack_1a8 = puStack_b50;
                uStack_1b0 = uStack_b58;
                puStack_1a0 = puStack_b48;
                ppuStack_1d8 = ppuStack_b80;
                plStack_1e0 = plStack_b88;
                uStack_1c8 = uStack_b70;
                puStack_1d0 = puStack_b78;
                ppuStack_8a8 = ppuStack_218;
                uStack_8b0 = ppuStack_220;
                ppuStack_898 = ppuStack_208;
                uStack_8a0 = puStack_210;
                dStack_888 = dStack_1f8;
                puStack_890 = (undefined *)ppuStack_200;
                puStack_880 = puStack_1f0;
                puStack_848 = puStack_b60;
                puStack_850 = puStack_b68;
                puStack_838 = puStack_b50;
                uStack_840 = uStack_b58;
                puStack_830 = puStack_b48;
                ppuStack_868 = ppuStack_b80;
                plStack_870 = plStack_b88;
                uStack_858 = uStack_b70;
                puStack_860 = puStack_b78;
                puStack_810 = (undefined *)(double)*(float *)(lVar26 + 0x34);
                puStack_820 = (undefined *)(double)(float)*(undefined8 *)(lVar26 + 0x2c);
                puStack_818 = (undefined *)
                              (double)(float)((ulong)*(undefined8 *)(lVar26 + 0x2c) >> 0x20);
                bVar25 = *(byte *)(lVar26 + 0x68);
                if (1 < bVar25) {
                  bVar25 = 2;
                }
                cVar5 = *(byte *)(lVar26 + 0x69) - 2;
                if (6 < *(byte *)(lVar26 + 0x69) - 3) {
                  cVar5 = '\0';
                }
                uStack_808._0_2_ = CONCAT11(cVar5,bVar25);
                ppuStack_208 = (undefined **)0x0;
                puStack_210 = (undefined8 *)0x0;
                dStack_1f8 = 0.0;
                ppuStack_200 = (undefined **)0x0;
                ppuStack_218 = (undefined **)0x0;
                ppuStack_220 = (undefined **)0x0;
                FUN_10acf67fc(&ppuStack_220,
                              (*(long *)(lVar26 + 0x40) - *(long *)(lVar26 + 0x38) >> 2) *
                              -0x5555555555555555);
                _memcpy(ppuStack_220,*(long *)(lVar26 + 0x38),
                        *(long *)(lVar26 + 0x40) - *(long *)(lVar26 + 0x38));
                func_0x000108262984(&ppuStack_208,
                                    *(long *)(lVar26 + 0x58) - *(long *)(lVar26 + 0x50) >> 1);
                lVar6 = *(long *)(lVar26 + 0x58) - *(long *)(lVar26 + 0x50);
                if (lVar6 != 0) {
                  _memmove(ppuStack_208,*(long *)(lVar26 + 0x50),lVar6);
                }
                puVar29 = &uStack_8b0;
                func_0x00010937ea24(&uStack_570,puVar29,&ppuStack_220);
                plStack_530 = (long *)((double)plStack_530 * 0.01);
                ppuStack_528 = (undefined **)((double)ppuStack_528 * 0.01);
                puStack_4c0 = (undefined *)((double)puStack_4c0 * 0.01);
                puStack_4b8 = (undefined *)((double)puStack_4b8 * 0.01);
                puStack_4b0 = (undefined *)((double)puStack_4b0 * 0.01);
                puStack_520 = (undefined *)((double)puStack_520 * 0.01);
                puStack_558 = (undefined *)((double)puStack_558 * 0.01);
                for (puVar20 = puStack_4a0; puVar20 != puStack_498;
                    puVar20 = (undefined8 *)((long)puVar20 + 0xc)) {
                  *puVar20 = CONCAT44((float)((ulong)*puVar20 >> 0x20) * 0.01,(float)*puVar20 * 0.01
                                     );
                  *(float *)(puVar20 + 1) = *(float *)(puVar20 + 1) * 0.01;
                }
                if (ppuStack_208 != (undefined **)0x0) {
                  ppuStack_200 = ppuStack_208;
                  __ZdlPv();
                }
                if (ppuStack_220 != (undefined **)0x0) {
                  ppuStack_218 = ppuStack_220;
                  __ZdlPv();
                }
                if (unaff_x28 < ppuVar30) {
                  unaff_x28[2] = (undefined *)puStack_560;
                  unaff_x28[1] = (undefined *)uStack_568;
                  *unaff_x28 = (undefined *)uStack_570;
                  unaff_x28[3] = puStack_558;
                  unaff_x28[5] = puStack_548;
                  unaff_x28[4] = puStack_550;
                  unaff_x28[7] = puStack_538;
                  unaff_x28[6] = puStack_540;
                  unaff_x28[10] = puStack_520;
                  unaff_x28[9] = (undefined *)ppuStack_528;
                  unaff_x28[8] = (undefined *)plStack_530;
                  unaff_x28[0xd] = puStack_508;
                  unaff_x28[0xc] = puStack_510;
                  unaff_x28[0x14] = puStack_4d0;
                  unaff_x28[0x11] = puStack_4e8;
                  unaff_x28[0x10] = puStack_4f0;
                  unaff_x28[0x13] = puStack_4d8;
                  unaff_x28[0x12] = puStack_4e0;
                  unaff_x28[0xf] = puStack_4f8;
                  unaff_x28[0xe] = (undefined *)CONCAT44(uStack_4fc,uStack_500);
                  unaff_x28[0x18] = puStack_4b0;
                  unaff_x28[0x17] = puStack_4b8;
                  unaff_x28[0x16] = puStack_4c0;
                  *(undefined2 *)(unaff_x28 + 0x19) = uStack_4a8;
                  unaff_x28[0x1a] = (undefined *)0x0;
                  unaff_x28[0x1b] = (undefined *)0x0;
                  unaff_x28[0x1c] = (undefined *)0x0;
                  unaff_x28[0x1d] = (undefined *)0x0;
                  unaff_x28[0x1b] = (undefined *)puStack_498;
                  unaff_x28[0x1a] = (undefined *)puStack_4a0;
                  unaff_x28[0x1c] = puStack_490;
                  puStack_4a0 = (undefined8 *)0x0;
                  puStack_498 = (undefined8 *)0x0;
                  unaff_x28[0x1e] = (undefined *)0x0;
                  unaff_x28[0x1f] = (undefined *)0x0;
                  unaff_x28[0x1e] = puStack_480;
                  unaff_x28[0x1d] = puStack_488;
                  unaff_x28[0x1f] = puStack_478;
                  puStack_490 = (undefined *)0x0;
                  puStack_488 = (undefined *)0x0;
                  puStack_480 = (undefined *)0x0;
                  puStack_478 = (undefined *)0x0;
                  ppuVar22 = unaff_x28;
                }
                else {
                  lVar26 = (long)unaff_x28 - (long)ppuStack_c28 >> 8;
                  uVar24 = lVar26 + 1;
                  if (uVar24 >> 0x38 != 0) goto LAB_10acf5998;
                  uVar27 = (long)ppuVar30 - (long)ppuStack_c28 >> 7;
                  if (uVar27 <= uVar24) {
                    uVar27 = uVar24;
                  }
                  if (0x7ffffffffffffeff < (ulong)((long)ppuVar30 - (long)ppuStack_c28)) {
                    uVar27 = 0xffffffffffffff;
                  }
                  if (uVar27 == 0) {
                    uVar27 = 0;
                    puVar29 = (undefined8 *)0x0;
                  }
                  else {
                    FUN_10acfa038();
                  }
                  ppuVar22 = (undefined **)(uVar27 + ((long)unaff_x28 - (long)ppuStack_c28));
                  ppuVar22[2] = (undefined *)puStack_560;
                  ppuVar22[1] = (undefined *)uStack_568;
                  *ppuVar22 = (undefined *)uStack_570;
                  ppuVar22[3] = puStack_558;
                  ppuVar22[5] = puStack_548;
                  ppuVar22[4] = puStack_550;
                  ppuVar22[7] = puStack_538;
                  ppuVar22[6] = puStack_540;
                  ppuVar22[10] = puStack_520;
                  ppuVar22[9] = (undefined *)ppuStack_528;
                  ppuVar22[8] = (undefined *)plStack_530;
                  ppuVar22[0x14] = puStack_4d0;
                  ppuVar22[0x11] = puStack_4e8;
                  ppuVar22[0x10] = puStack_4f0;
                  ppuVar22[0x13] = puStack_4d8;
                  ppuVar22[0x12] = puStack_4e0;
                  ppuVar22[0xf] = puStack_4f8;
                  ppuVar22[0xe] = (undefined *)CONCAT44(uStack_4fc,uStack_500);
                  ppuVar22[0xd] = puStack_508;
                  ppuVar22[0xc] = puStack_510;
                  ppuVar22[0x18] = puStack_4b0;
                  ppuVar22[0x17] = puStack_4b8;
                  ppuVar22[0x16] = puStack_4c0;
                  *(undefined2 *)(ppuVar22 + 0x19) = uStack_4a8;
                  ppuVar22[0x1b] = (undefined *)0x0;
                  ppuVar22[0x1c] = (undefined *)0x0;
                  ppuVar22[0x1a] = (undefined *)0x0;
                  ppuVar22[0x1b] = (undefined *)puStack_498;
                  ppuVar22[0x1a] = (undefined *)puStack_4a0;
                  ppuVar22[0x1c] = puStack_490;
                  puStack_4a0 = (undefined8 *)0x0;
                  puStack_498 = (undefined8 *)0x0;
                  puStack_490 = (undefined *)0x0;
                  ppuVar22[0x1d] = (undefined *)0x0;
                  ppuVar22[0x1e] = (undefined *)0x0;
                  ppuVar22[0x1f] = (undefined *)0x0;
                  ppuVar22[0x1e] = puStack_480;
                  ppuVar22[0x1d] = puStack_488;
                  ppuVar22[0x1f] = puStack_478;
                  puStack_488 = (undefined *)0x0;
                  puStack_480 = (undefined *)0x0;
                  puStack_478 = (undefined *)0x0;
                  ppuVar28 = ppuVar22 + lVar26 * -0x20;
                  ppuVar30 = ppuStack_c28;
                  ppuVar21 = ppuVar28;
                  if (ppuStack_c28 != unaff_x28) {
                    do {
                      puVar39 = ppuVar30[1];
                      puVar33 = *ppuVar30;
                      ppuVar21[2] = ppuVar30[2];
                      ppuVar21[1] = puVar39;
                      *ppuVar21 = puVar33;
                      ppuVar21[3] = ppuVar30[3];
                      puVar33 = ppuVar30[4];
                      puVar42 = ppuVar30[7];
                      puVar39 = ppuVar30[6];
                      ppuVar21[5] = ppuVar30[5];
                      ppuVar21[4] = puVar33;
                      ppuVar21[7] = puVar42;
                      ppuVar21[6] = puVar39;
                      puVar39 = ppuVar30[9];
                      puVar33 = ppuVar30[8];
                      ppuVar21[10] = ppuVar30[10];
                      ppuVar21[9] = puVar39;
                      ppuVar21[8] = puVar33;
                      puVar43 = ppuVar30[0x11];
                      puVar42 = ppuVar30[0x10];
                      puVar39 = ppuVar30[0x13];
                      puVar33 = ppuVar30[0x12];
                      puVar48 = ppuVar30[0xf];
                      puVar46 = ppuVar30[0xe];
                      ppuVar21[0x14] = ppuVar30[0x14];
                      ppuVar21[0x11] = puVar43;
                      ppuVar21[0x10] = puVar42;
                      ppuVar21[0x13] = puVar39;
                      ppuVar21[0x12] = puVar33;
                      ppuVar21[0xf] = puVar48;
                      ppuVar21[0xe] = puVar46;
                      puVar33 = ppuVar30[0xc];
                      ppuVar21[0xd] = ppuVar30[0xd];
                      ppuVar21[0xc] = puVar33;
                      puVar39 = ppuVar30[0x17];
                      puVar33 = ppuVar30[0x16];
                      ppuVar21[0x18] = ppuVar30[0x18];
                      ppuVar21[0x17] = puVar39;
                      ppuVar21[0x16] = puVar33;
                      *(undefined2 *)(ppuVar21 + 0x19) = *(undefined2 *)(ppuVar30 + 0x19);
                      ppuVar21[0x1b] = (undefined *)0x0;
                      ppuVar21[0x1c] = (undefined *)0x0;
                      ppuVar21[0x1a] = (undefined *)0x0;
                      puVar33 = ppuVar30[0x1a];
                      ppuVar21[0x1b] = ppuVar30[0x1b];
                      ppuVar21[0x1a] = puVar33;
                      ppuVar21[0x1c] = ppuVar30[0x1c];
                      ppuVar30[0x1a] = (undefined *)0x0;
                      ppuVar30[0x1b] = (undefined *)0x0;
                      ppuVar30[0x1c] = (undefined *)0x0;
                      ppuVar21[0x1d] = (undefined *)0x0;
                      ppuVar21[0x1e] = (undefined *)0x0;
                      ppuVar21[0x1f] = (undefined *)0x0;
                      puVar33 = ppuVar30[0x1d];
                      ppuVar21[0x1e] = ppuVar30[0x1e];
                      ppuVar21[0x1d] = puVar33;
                      ppuVar21[0x1f] = ppuVar30[0x1f];
                      ppuVar30[0x1d] = (undefined *)0x0;
                      ppuVar30[0x1e] = (undefined *)0x0;
                      ppuVar30[0x1f] = (undefined *)0x0;
                      ppuVar30 = ppuVar30 + 0x20;
                      ppuVar21 = ppuVar21 + 0x20;
                      ppuVar31 = ppuStack_c28;
                    } while (ppuVar30 != unaff_x28);
                    do {
                      FUN_10acf9f78(ppuVar31);
                      ppuVar31 = ppuVar31 + 0x20;
                    } while (ppuVar31 != unaff_x28);
                  }
                  if (ppuStack_c28 != (undefined **)0x0) {
                    __ZdlPv();
                  }
                  ppuVar30 = (undefined **)(uVar27 + (long)puVar29 * 0x100);
                  ppuStack_c28 = ppuVar28;
                  if (puStack_488 != (undefined *)0x0) {
                    puStack_480 = puStack_488;
                    __ZdlPv();
                  }
                }
                if (puStack_4a0 != (undefined8 *)0x0) {
                  puStack_498 = puStack_4a0;
                  __ZdlPv();
                }
                unaff_x28 = ppuVar22 + 0x20;
              }
              ppuVar22 = ppuStack_ba0;
              plVar18 = plVar18 + 2;
            } while (plVar18 != plVar34);
            ppuStack_ba8 = ppuVar30;
            ppuStack_bb0 = unaff_x28;
            ppuVar21 = ppuStack_b98;
            if (ppuStack_ba0 != (undefined **)0x0) {
              while (ppuStack_bb8 = ppuStack_c28, ppuVar21 != ppuVar22) {
                FUN_10acf9f78(ppuVar21 + -0x20);
                ppuStack_c28 = ppuStack_bb8;
                ppuVar21 = ppuVar21 + -0x20;
              }
              __ZdlPv(ppuStack_ba0);
            }
          }
          ppuStack_bb0 = (undefined **)0x0;
          ppuStack_ba8 = (undefined **)0x0;
          ppuStack_bb8 = (undefined **)0x0;
          ppuStack_ba0 = ppuStack_c28;
          ppuStack_b98 = unaff_x28;
          ppuStack_b90 = ppuVar30;
          FUN_10acf9fbc(&ppuStack_bb8);
          uVar49 = uStack_928;
          lVar12 = lStack_930;
          lVar11 = lStack_938;
          uVar47 = uStack_940;
          lVar10 = lStack_948;
          lVar9 = lStack_950;
          uVar45 = uStack_958;
          puVar43 = puStack_960;
          puVar42 = puStack_968;
          plVar18 = plStack_a28;
          uVar44 = uStack_a30;
          puVar39 = puStack_ad0;
          puVar33 = puStack_ad8;
          ppuVar31 = ppuStack_b90;
          ppuVar28 = ppuStack_b98;
          ppuVar21 = ppuStack_ba0;
          iVar8 = iStack_bc0;
          ppuVar22 = uStack_bc8;
          lVar7 = lStack_bd0;
          iVar17 = iStack_be0;
          uVar41 = uStack_be8;
          lVar6 = lStack_bf0;
          uVar58 = uStack_c00;
          uVar38 = uStack_c08;
          lVar26 = lStack_c10;
          ppuVar40 = (undefined **)param_1[1];
          ppuVar37 = (undefined **)*param_1;
          if (param_1[1] != (undefined *)0x0) {
            plVar34 = (long *)(param_1[1] + 0x10);
            do {
              cVar5 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar34,0x10);
              if (bVar15) {
                *plVar34 = *plVar34 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          uStack_8a0 = puStack_b40;
          puStack_890 = puStack_b30;
          puStack_878 = puStack_b18;
          puStack_880 = puStack_b20;
          ppuStack_868 = ppuStack_b08;
          plStack_870 = plStack_b10;
          uStack_858 = uStack_af8;
          puStack_860 = puStack_b00;
          puStack_848 = puStack_ae8;
          puStack_850 = puStack_af0;
          uStack_840 = CONCAT44(uStack_840._4_4_,uStack_ae0);
          puStack_838 = puStack_ad8;
          puStack_830 = puStack_ad0;
          puStack_ad8 = (undefined *)0x0;
          puStack_ad0 = (undefined *)0x0;
          puStack_818 = puStack_ab8;
          puStack_820 = puStack_ac0;
          uStack_808 = uStack_aa8;
          puStack_810 = puStack_ab0;
          puStack_7f8 = puStack_a98;
          puStack_800 = puStack_aa0;
          puStack_7b8 = puStack_a58;
          puStack_7c0 = puStack_a60;
          uStack_7a8 = uStack_a48;
          uStack_7b0 = uStack_a50;
          puStack_7f0 = puStack_a90;
          uStack_7a0 = uStack_a40;
          puStack_7d8 = puStack_a78;
          puStack_7e0 = puStack_a80;
          puStack_7c8 = puStack_a68;
          puStack_7d0 = puStack_a70;
          uStack_790 = uStack_a30;
          plStack_788 = plStack_a28;
          uStack_a30 = 0;
          plStack_a28 = (long *)0x0;
          uStack_778 = uStack_a18;
          uStack_780 = uStack_a20;
          uStack_768 = uStack_a08;
          uStack_770 = uStack_a10;
          uStack_758 = uStack_9f8;
          uStack_760 = uStack_a00;
          uStack_748 = uStack_9e8;
          uStack_750 = uStack_9f0;
          uStack_738 = uStack_9d8;
          uStack_740 = uStack_9e0;
          uStack_718 = uStack_9b8;
          uStack_720 = uStack_9c0;
          uStack_730 = uStack_9d0;
          uStack_6e0 = uStack_980;
          uStack_6e8 = uStack_988;
          uStack_6f0 = uStack_990;
          uStack_6f8 = uStack_998;
          uStack_700 = uStack_9a0;
          uStack_708 = uStack_9a8;
          uStack_710 = uStack_9b0;
          uStack_6d0 = uStack_970;
          puStack_6c8 = puStack_968;
          puStack_6c0 = puStack_960;
          puStack_968 = (undefined *)0x0;
          puStack_960 = (undefined *)0x0;
          uStack_958 = 0;
          uStack_6b8 = uVar45;
          lStack_6b0 = lStack_950;
          lStack_6a8 = lStack_948;
          uStack_6a0 = uStack_940;
          lStack_950 = 0;
          lStack_948 = 0;
          uStack_940 = 0;
          lStack_698 = lStack_938;
          lStack_690 = lStack_930;
          uStack_688 = uStack_928;
          lStack_938 = 0;
          lStack_930 = 0;
          uStack_928 = 0;
          uStack_680 = uStack_920;
          uStack_63e = CONCAT26(uStack_8d8,uStack_8de);
          uStack_648 = CONCAT11(uStack_8e7,uStack_8e8);
          uStack_650 = uStack_8f0;
          uStack_658 = uStack_8f8;
          uStack_660 = uStack_900;
          uStack_668 = uStack_908;
          uStack_670 = uStack_910;
          uStack_630 = uStack_630 & 0xffffffffffffff00;
          cStack_620 = cStack_8c0 == '\x01';
          if ((bool)cStack_620) {
            plStack_628 = plStack_8c8;
            uStack_630 = uStack_8d0;
            uStack_8d0 = 0;
            plStack_8c8 = (long *)0x0;
          }
          ppuStack_610 = &PTR_DAT_110af4cf0;
          lStack_608 = lStack_bd0;
          uStack_600 = (int)uStack_bc8;
          uStack_5fc = uStack_bc8._4_4_;
          iStack_5f8 = iStack_bc0;
          iStack_bc0 = 0;
          lStack_bd0 = 0;
          uStack_bc8 = (undefined **)0x0;
          if (!bVar14) {
            ppuStack_5f0 = (undefined **)((ulong)ppuStack_5f0 & 0xffffffffffffff00);
          }
          else {
            ppuStack_5f0 = &PTR_DAT_110af4cf0;
            ppuStack_5e8 = ppuStack_c60;
            uStack_5e0 = CONCAT44(iVar32,uStack_c70);
            uStack_5d8 = uStack_c78;
            ppuStack_c60 = (undefined **)0x0;
          }
          cStack_5d0 = bVar14;
          ppuStack_5c8 = &PTR_DAT_110af4c80;
          lStack_5c0 = lStack_bf0;
          uStack_5b8 = (int)uStack_be8;
          uStack_5b4 = uStack_be8._4_4_;
          iStack_5b0 = iStack_be0;
          iStack_be0 = 0;
          lStack_bf0 = 0;
          uStack_be8 = 0;
          ppuStack_5a8 = ppuStack_ba0;
          ppuStack_5a0 = ppuStack_b98;
          ppuStack_598 = ppuStack_b90;
          ppuStack_b98 = (undefined **)0x0;
          ppuStack_b90 = (undefined **)0x0;
          ppuStack_ba0 = (undefined **)0x0;
          ppuStack_590 = &PTR_DAT_110af4b00;
          lStack_588 = lStack_c10;
          uStack_580 = (undefined4)uStack_c08;
          uStack_57c = uStack_c08._4_4_;
          uStack_578 = uStack_c00;
          lStack_c10 = 0;
          uStack_c08 = 0;
          uStack_c00 = 0;
          uStack_8b0 = ppuVar37;
          ppuStack_8a8 = ppuVar40;
          if (*(char *)(param_1 + 0x34) == '\0') {
            if (ppuVar40 != (undefined **)0x0) {
              ppuVar30 = ppuVar40 + 2;
              do {
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(ppuVar30,0x10);
                if (bVar15) {
                  *ppuVar30 = *ppuVar30 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            puStack_560 = puStack_b40;
            puStack_550 = puStack_b30;
            puStack_538 = puStack_b18;
            puStack_540 = puStack_b20;
            ppuStack_528 = ppuStack_b08;
            plStack_530 = plStack_b10;
            uStack_518 = uStack_af8;
            puStack_520 = puStack_b00;
            puStack_508 = puStack_ae8;
            puStack_510 = puStack_af0;
            uStack_570 = ppuVar37;
            uStack_568 = ppuVar40;
            uStack_500 = uStack_ae0;
            func_0x00010937da58(&puStack_4f8,&puStack_838);
            puStack_4d8 = puStack_818;
            puStack_4e0 = puStack_820;
            uStack_4c8 = uStack_808;
            puStack_4d0 = puStack_810;
            puStack_4b8 = puStack_7f8;
            puStack_4c0 = puStack_800;
            puStack_478 = puStack_7b8;
            puStack_480 = puStack_7c0;
            uStack_468 = uStack_7a8;
            uStack_470 = uStack_7b0;
            puStack_4b0 = puStack_7f0;
            uStack_460 = uStack_7a0;
            puStack_498 = puStack_7d8;
            puStack_4a0 = puStack_7e0;
            puStack_488 = puStack_7c8;
            puStack_490 = puStack_7d0;
            plStack_448 = plStack_788;
            uStack_450 = uStack_790;
            if (plStack_788 != (long *)0x0) {
              plVar18 = plStack_788 + 1;
              do {
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar15) {
                  *plVar18 = *plVar18 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uStack_438 = uStack_778;
            uStack_440 = uStack_780;
            uStack_428 = uStack_768;
            uStack_430 = uStack_770;
            uStack_418 = uStack_758;
            uStack_420 = uStack_760;
            uStack_408 = uStack_748;
            uStack_410 = uStack_750;
            uStack_3f8 = uStack_738;
            uStack_400 = uStack_740;
            uStack_3f0 = uStack_730;
            uStack_3a0 = uStack_6e0;
            uStack_3b8 = uStack_6f8;
            uStack_3c0 = uStack_700;
            uStack_3a8 = uStack_6e8;
            uStack_3b0 = uStack_6f0;
            uStack_3d8 = uStack_718;
            uStack_3e0 = uStack_720;
            uStack_3c8 = uStack_708;
            uStack_3d0 = uStack_710;
            uStack_390 = uStack_6d0;
            puStack_380 = (undefined *)0x0;
            puStack_388 = (undefined *)0x0;
            uStack_378 = 0;
            FUN_10a4f0090(&puStack_388,puStack_6c8,puStack_6c0,
                          ((long)puStack_6c0 - (long)puStack_6c8 >> 3) * -0x5555555555555555);
            uStack_360 = 0;
            lStack_368 = 0;
            lStack_370 = 0;
            FUN_10a0e9a40(&lStack_370,lStack_6b0,lStack_6a8,lStack_6a8 - lStack_6b0 >> 2);
            lStack_350 = 0;
            lStack_358 = 0;
            uStack_348 = 0;
            FUN_10a0ca588();
            uStack_340 = uStack_680;
            uStack_2fe = uStack_63e;
            uStack_328 = uStack_668;
            uStack_330 = uStack_670;
            uStack_318 = uStack_658;
            uStack_320 = uStack_660;
            uStack_308 = uStack_648;
            uStack_310 = uStack_650;
            uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
            uStack_2e0 = 0;
            if (cStack_620 == '\x01') {
              plStack_2e8 = plStack_628;
              uStack_2f0 = uStack_630;
              if (plStack_628 != (long *)0x0) {
                plVar18 = plStack_628 + 1;
                do {
                  cVar5 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar15) {
                    *plVar18 = *plVar18 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              uStack_2e0 = 1;
            }
            FUN_10aced1ac(&ppuStack_2d0,&ppuStack_610);
            ppuStack_2b0 = (undefined **)((ulong)ppuStack_2b0 & 0xffffffffffffff00);
            uStack_290 = 0;
            bVar15 = cStack_5d0 == '\x01';
            if (bVar15) {
              FUN_10aced1ac(&ppuStack_2b0,&ppuStack_5f0);
            }
            pppuVar23 = &ppuStack_5c8;
            uStack_290 = bVar15;
            func_0x00010939d4b8(&ppuStack_288);
            ppuVar30 = ppuStack_5a0;
            ppuVar22 = ppuStack_5a8;
            ppuStack_260 = (undefined **)0x0;
            ppuStack_268 = (undefined **)0x0;
            ppuStack_258 = (undefined **)0x0;
            if ((long)ppuStack_5a0 - (long)ppuStack_5a8 != 0) {
              ppuVar21 = (undefined **)((long)ppuStack_5a0 - (long)ppuStack_5a8 >> 8);
              if ((ulong)ppuVar21 >> 0x38 != 0) {
                FUN_10acfa024();
                goto LAB_10acf59b8;
              }
              FUN_10acfa038();
              lVar26 = 0;
              ppuStack_258 = ppuVar21 + (long)pppuVar23 * 0x20;
              ppuStack_268 = ppuVar21;
              ppuStack_260 = ppuVar21;
              do {
                puVar29 = (undefined8 *)((long)ppuVar22 + lVar26);
                puVar20 = (undefined8 *)((long)ppuVar21 + lVar26);
                uVar41 = puVar29[1];
                uVar38 = *puVar29;
                puVar20[2] = puVar29[2];
                puVar20[1] = uVar41;
                *puVar20 = uVar38;
                puVar20[3] = puVar29[3];
                uVar38 = puVar29[4];
                uVar44 = puVar29[7];
                uVar41 = puVar29[6];
                puVar20[5] = puVar29[5];
                puVar20[4] = uVar38;
                puVar20[7] = uVar44;
                puVar20[6] = uVar41;
                uVar41 = puVar29[9];
                uVar38 = puVar29[8];
                puVar20[10] = puVar29[10];
                puVar20[9] = uVar41;
                puVar20[8] = uVar38;
                uVar45 = puVar29[0x11];
                uVar44 = puVar29[0x10];
                uVar41 = puVar29[0x13];
                uVar38 = puVar29[0x12];
                uVar49 = puVar29[0xf];
                uVar47 = puVar29[0xe];
                puVar20[0x14] = puVar29[0x14];
                puVar20[0x11] = uVar45;
                puVar20[0x10] = uVar44;
                puVar20[0x13] = uVar41;
                puVar20[0x12] = uVar38;
                puVar20[0xf] = uVar49;
                puVar20[0xe] = uVar47;
                uVar38 = puVar29[0xc];
                puVar20[0xd] = puVar29[0xd];
                puVar20[0xc] = uVar38;
                uVar41 = puVar29[0x17];
                uVar38 = puVar29[0x16];
                puVar20[0x18] = puVar29[0x18];
                puVar20[0x17] = uVar41;
                puVar20[0x16] = uVar38;
                uVar4 = *(undefined2 *)(puVar29 + 0x19);
                puVar20[0x1a] = 0;
                *(undefined2 *)(puVar20 + 0x19) = uVar4;
                puVar20[0x1b] = 0;
                puVar20[0x1c] = 0;
                FUN_10aceb8ec();
                puVar20[0x1d] = 0;
                puVar20[0x1e] = 0;
                puVar20[0x1f] = 0;
                FUN_10acbf198(puVar20 + 0x1d,puVar29[0x1d],puVar29[0x1e],
                              (long)(puVar29[0x1e] - puVar29[0x1d]) >> 1);
                lVar26 = lVar26 + 0x100;
              } while ((undefined **)(puVar29 + 0x20) != ppuVar30);
              ppuStack_260 = (undefined **)((long)ppuVar21 + lVar26);
            }
            FUN_10aceb7a0(&ppuStack_250,&ppuStack_590);
            ppuVar22 = (undefined **)0xb8;
            __Znwm();
            ppuVar22[2] = (undefined *)0x0;
            ppuVar22[1] = (undefined *)0x200000006;
            *(undefined2 *)(ppuVar22 + 3) = 4;
            ppuVar22[5] = (undefined *)0x0;
            ppuVar22[4] = (undefined *)0x0;
            ppuVar22[7] = (undefined *)0x0;
            ppuVar22[6] = (undefined *)0x0;
            ppuVar22[9] = (undefined *)0x0;
            ppuVar22[8] = (undefined *)0x0;
            ppuVar22[0xb] = (undefined *)0x0;
            ppuVar22[10] = (undefined *)0x0;
            ppuVar22[0xd] = (undefined *)0x0;
            ppuVar22[0xc] = (undefined *)0x0;
            ppuVar22[0xf] = (undefined *)0x0;
            ppuVar22[0xe] = (undefined *)0x0;
            ppuVar22[0x10] = (undefined *)0x0;
            ppuVar22[0x11] = (undefined *)(ppuVar22 + 3);
            ppuVar22[0x12] = (undefined *)0x0;
            *ppuVar22 = (undefined *)&PTR_DAT_110c6db60;
            *(undefined1 *)(ppuVar22 + 0x13) = 0;
            *(undefined1 *)(ppuVar22 + 0x16) = 0;
            ppuStack_b80 = ppuVar22;
            FUN_10acfa7a4(&ppuStack_220,&uStack_570);
            func_0x00010acfa6f8(ppuVar22,&ppuStack_220);
            FUN_10acfa9d4(&ppuStack_220);
            plStack_b88 = (long *)0x0;
            func_0x0001092b4274(&ppuStack_b80,ppuVar22);
            if (plStack_b88 != (long *)0x0) {
              puVar3 = (ulong *)(plStack_b88 + 1);
              do {
                uVar24 = *puVar3;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar15) {
                  *puVar3 = uVar24 - 4;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((uVar24 & 0x1fffffffc) == 4) {
                do {
                  uVar24 = *puVar3;
                  cVar5 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar15) {
                    *puVar3 = uVar24 - 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (uVar24 - 1 == 0) {
                  (**(code **)(*plStack_b88 + 8))();
                }
              }
            }
            plVar18 = (long *)param_1[0x2f];
            if (plVar18 != (long *)0x0) {
              puVar3 = (ulong *)(plVar18 + 1);
              do {
                uVar24 = *puVar3;
                cVar5 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar15) {
                  *puVar3 = uVar24 - 4;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((uVar24 & 0x1fffffffc) == 4) {
                do {
                  uVar24 = *puVar3;
                  cVar5 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar15) {
                    *puVar3 = uVar24 - 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (uVar24 - 1 == 0) {
                  (**(code **)(*plVar18 + 8))();
                }
              }
            }
            param_1[0x2f] = (undefined *)ppuVar22;
            FUN_10acf761c(&uStack_570);
          }
          else {
            dVar36 = (double)param_2[2] - (double)param_1[0x30];
            ppuVar30 = (undefined **)&UNK_10dd8b000;
            if ((0.1 < dVar36) || (dVar36 < 0.0)) {
              ppuVar30 = &puStack_6c8;
              param_1[0x30] = param_2[2];
              puVar29 = (undefined8 *)param_1[0x32];
              plVar34 = (long *)puVar29[2];
              puStack_210 = (undefined8 *)0x0;
              ppuStack_218 = (undefined **)0x0;
              if (plVar34 == (long *)0x0) {
                uStack_8b0 = (undefined **)0x0;
                ppuStack_8a8 = (undefined **)0x0;
                puStack_560 = puStack_b40;
                puStack_550 = puStack_b30;
                puStack_538 = puStack_b18;
                puStack_540 = puStack_b20;
                ppuStack_528 = ppuStack_b08;
                plStack_530 = plStack_b10;
                uStack_518 = uStack_af8;
                puStack_520 = puStack_b00;
                puStack_508 = puStack_ae8;
                puStack_510 = puStack_af0;
                uStack_500 = uStack_ae0;
                puStack_4f8 = puVar33;
                puStack_4f0 = puVar39;
                puStack_838 = (undefined *)0x0;
                puStack_830 = (undefined *)0x0;
                puStack_4d8 = puStack_ab8;
                puStack_4e0 = puStack_ac0;
                uStack_4c8 = uStack_aa8;
                puStack_4d0 = puStack_ab0;
                puStack_4b8 = puStack_a98;
                puStack_4c0 = puStack_aa0;
                puStack_4b0 = puStack_a90;
                uStack_460 = uStack_a40;
                puStack_478 = puStack_a58;
                puStack_480 = puStack_a60;
                uStack_468 = uStack_a48;
                uStack_470 = uStack_a50;
                puStack_498 = puStack_a78;
                puStack_4a0 = puStack_a80;
                puStack_488 = puStack_a68;
                puStack_490 = puStack_a70;
                uStack_450 = uVar44;
                plStack_448 = plVar18;
                uStack_790 = 0;
                plStack_788 = (long *)0x0;
                uStack_438 = uStack_a18;
                uStack_440 = uStack_a20;
                uStack_428 = uStack_a08;
                uStack_430 = uStack_a10;
                uStack_418 = uStack_9f8;
                uStack_420 = uStack_a00;
                uStack_408 = uStack_9e8;
                uStack_410 = uStack_9f0;
                uStack_3f8 = uStack_9d8;
                uStack_400 = uStack_9e0;
                uStack_3f0 = uStack_9d0;
                uStack_3a0 = uStack_980;
                uStack_3b8 = uStack_998;
                uStack_3c0 = uStack_9a0;
                uStack_3a8 = uStack_988;
                uStack_3b0 = uStack_990;
                uStack_3d8 = uStack_9b8;
                uStack_3e0 = uStack_9c0;
                uStack_3c8 = uStack_9a8;
                uStack_3d0 = uStack_9b0;
                uStack_390 = uStack_970;
                puStack_388 = puVar42;
                puStack_380 = puVar43;
                puStack_6c8 = (undefined *)0x0;
                puStack_6c0 = (undefined *)0x0;
                uStack_6b8 = 0;
                uStack_378 = uVar45;
                lStack_370 = lVar9;
                lStack_368 = lVar10;
                uStack_360 = uVar47;
                lStack_6b0 = 0;
                lStack_6a8 = 0;
                uStack_6a0 = 0;
                lStack_358 = lVar11;
                lStack_350 = lVar12;
                uStack_348 = uVar49;
                lStack_698 = 0;
                lStack_690 = 0;
                uStack_688 = 0;
                uStack_340 = uStack_920;
                uStack_318 = uStack_8f8;
                uStack_320 = uStack_900;
                uStack_310 = uStack_8f0;
                uStack_328 = uStack_908;
                uStack_330 = uStack_910;
                uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
                uStack_2e0 = cStack_8c0 != '\0';
                if ((bool)uStack_2e0) {
                  plStack_2e8 = plStack_628;
                  uStack_2f0 = uStack_630;
                  uStack_630 = 0;
                  plStack_628 = (long *)0x0;
                }
                ppuStack_2d0 = &PTR_DAT_110af4cf0;
                lStack_2c8 = lVar7;
                ppuStack_2c0 = ppuVar22;
                iStack_2b8 = iVar8;
                lStack_608 = 0;
                uStack_5fc = 0;
                uStack_600 = 0;
                iStack_5f8 = 0;
                ppuStack_2b0 = (undefined **)((ulong)ppuStack_2b0 & 0xffffffffffffff00);
                if (bVar14) {
                  ppuStack_2b0 = &PTR_DAT_110af4cf0;
                  ppuStack_2a8 = ppuStack_5e8;
                  uStack_2a0 = uStack_5e0;
                  uStack_298 = uStack_5d8;
                  uStack_5e0 = 0;
                  ppuStack_5e8 = (undefined **)0x0;
                  uStack_5d8 = 0;
                }
                ppuStack_288 = &PTR_DAT_110af4c80;
                lStack_280 = lVar6;
                uStack_278 = uVar41;
                iStack_270 = iVar17;
                lStack_5c0 = 0;
                uStack_5b4 = 0;
                uStack_5b8 = 0;
                iStack_5b0 = 0;
                ppuStack_268 = ppuVar21;
                ppuStack_260 = ppuVar28;
                ppuStack_258 = ppuVar31;
                ppuStack_5a0 = (undefined **)0x0;
                ppuStack_598 = (undefined **)0x0;
                ppuStack_5a8 = (undefined **)0x0;
                ppuStack_250 = &PTR_DAT_110af4b00;
                lStack_248 = lVar26;
                uStack_240 = uVar38;
                uStack_238 = uVar58;
                lStack_588 = 0;
                uStack_57c = 0;
                uStack_580 = 0;
                uStack_578 = 0;
                puVar20 = (undefined8 *)0x430;
                uStack_570 = ppuVar37;
                uStack_568 = ppuVar40;
                uStack_308 = uStack_648;
                uStack_2fe = uStack_63e;
                uStack_290 = bVar14;
                __Znwm();
                puVar20[2] = 0;
                puVar20[1] = 0x200000006;
                *(undefined2 *)(puVar20 + 3) = 4;
                puVar20[5] = 0;
                puVar20[4] = 0;
                puVar20[7] = 0;
                puVar20[6] = 0;
                puVar20[9] = 0;
                puVar20[8] = 0;
                puVar20[0xb] = 0;
                puVar20[10] = 0;
                puVar20[0xd] = 0;
                puVar20[0xc] = 0;
                puVar20[0xf] = 0;
                puVar20[0xe] = 0;
                puVar20[0x10] = 0;
                puVar20[0x11] = puVar20 + 3;
                puVar20[0x12] = 0;
                *(undefined1 *)(puVar20 + 0x13) = 0;
                *(undefined1 *)(puVar20 + 0x16) = 0;
                ppuVar22 = (undefined **)(puVar20 + 0x18);
                *puVar20 = &PTR_DAT_110c6db80;
                FUN_10acfa06c(ppuVar22,&uStack_570);
                *(undefined1 *)(puVar20 + 0x82) = 1;
                puVar20[0x84] = 0;
                ppuStack_220 = ppuVar22;
                ppuStack_218 = (undefined **)puVar20;
                puStack_210 = puVar20;
                FUN_10acf761c(&uStack_570);
                ppuStack_208 = (undefined **)FUN_10acfa35c;
              }
              else {
                plStack_b88 = (long *)0x0;
                (**(code **)(*plVar34 + 0x28))(plVar34,0,&plStack_b88);
                uVar41 = uStack_6b8;
                plVar18 = plStack_788;
                uVar38 = uStack_790;
                if (plStack_b88 != (long *)0x0) {
                  func_0x0001092af97c(&plStack_b88);
                  goto LAB_10acf59b8;
                }
                uStack_568 = ppuStack_8a8;
                uStack_570 = uStack_8b0;
                uStack_8b0 = (undefined **)0x0;
                ppuStack_8a8 = (undefined **)0x0;
                puStack_560 = uStack_8a0;
                puStack_550 = puStack_890;
                puStack_538 = puStack_878;
                puStack_540 = puStack_880;
                ppuStack_528 = ppuStack_868;
                plStack_530 = plStack_870;
                uStack_518 = uStack_858;
                puStack_520 = puStack_860;
                puStack_508 = puStack_848;
                puStack_510 = puStack_850;
                uStack_500 = (undefined4)uStack_840;
                puStack_4f8 = puStack_838;
                puStack_4f0 = puStack_830;
                puStack_838 = (undefined *)0x0;
                puStack_830 = (undefined *)0x0;
                puStack_4d8 = puStack_818;
                puStack_4e0 = puStack_820;
                uStack_4c8 = uStack_808;
                puStack_4d0 = puStack_810;
                puStack_4b8 = puStack_7f8;
                puStack_4c0 = puStack_800;
                puStack_4b0 = puStack_7f0;
                uStack_460 = uStack_7a0;
                puStack_478 = puStack_7b8;
                puStack_480 = puStack_7c0;
                uStack_468 = uStack_7a8;
                uStack_470 = uStack_7b0;
                puStack_498 = puStack_7d8;
                puStack_4a0 = puStack_7e0;
                puStack_488 = puStack_7c8;
                puStack_490 = puStack_7d0;
                uStack_790 = 0;
                plStack_788 = (long *)0x0;
                plStack_448 = plVar18;
                uStack_450 = uVar38;
                uStack_438 = uStack_778;
                uStack_440 = uStack_780;
                uStack_428 = uStack_768;
                uStack_430 = uStack_770;
                uStack_418 = uStack_758;
                uStack_420 = uStack_760;
                uStack_408 = uStack_748;
                uStack_410 = uStack_750;
                uStack_3f8 = uStack_738;
                uStack_400 = uStack_740;
                uStack_3f0 = uStack_730;
                uStack_3a0 = uStack_6e0;
                uStack_3b8 = uStack_6f8;
                uStack_3c0 = uStack_700;
                uStack_3a8 = uStack_6e8;
                uStack_3b0 = uStack_6f0;
                uStack_3d8 = uStack_718;
                uStack_3e0 = uStack_720;
                uStack_3c8 = uStack_708;
                uStack_3d0 = uStack_710;
                uStack_390 = uStack_6d0;
                puStack_380 = puStack_6c0;
                puStack_388 = puStack_6c8;
                puStack_6c8 = (undefined *)0x0;
                puStack_6c0 = (undefined *)0x0;
                uStack_6b8 = 0;
                lStack_368 = lStack_6a8;
                lStack_370 = lStack_6b0;
                uStack_378 = uVar41;
                uStack_360 = uStack_6a0;
                lStack_6b0 = 0;
                lStack_6a8 = 0;
                uStack_6a0 = 0;
                lStack_350 = lStack_690;
                lStack_358 = lStack_698;
                uStack_348 = uStack_688;
                lStack_698 = 0;
                lStack_690 = 0;
                uStack_688 = 0;
                uStack_340 = uStack_680;
                uStack_2fe = uStack_63e;
                uStack_318 = uStack_658;
                uStack_320 = uStack_660;
                uStack_308 = uStack_648;
                uStack_310 = uStack_650;
                uStack_328 = uStack_668;
                uStack_330 = uStack_670;
                uStack_2f0 = uStack_2f0 & 0xffffffffffffff00;
                uStack_2e0 = cStack_620 == '\x01';
                if ((bool)uStack_2e0) {
                  plStack_2e8 = plStack_628;
                  uStack_2f0 = uStack_630;
                  uStack_630 = 0;
                  plStack_628 = (long *)0x0;
                }
                ppuStack_2d0 = &PTR_DAT_110af4cf0;
                lStack_2c8 = lStack_608;
                ppuStack_2c0 = (undefined **)CONCAT44(uStack_5fc,uStack_600);
                iStack_2b8 = iStack_5f8;
                iStack_5f8 = 0;
                lStack_608 = 0;
                uStack_5fc = 0;
                uStack_600 = 0;
                ppuStack_2b0 = (undefined **)((ulong)ppuStack_2b0 & 0xffffffffffffff00);
                uStack_290 = cStack_5d0 == '\x01';
                if ((bool)uStack_290) {
                  ppuStack_2b0 = &PTR_DAT_110af4cf0;
                  ppuStack_2a8 = ppuStack_5e8;
                  uStack_2a0 = uStack_5e0;
                  uStack_298 = uStack_5d8;
                  uStack_5e0 = 0;
                  ppuStack_5e8 = (undefined **)0x0;
                  uStack_5d8 = 0;
                }
                ppuStack_288 = &PTR_DAT_110af4c80;
                lStack_280 = lStack_5c0;
                uStack_278 = CONCAT44(uStack_5b4,uStack_5b8);
                iStack_270 = iStack_5b0;
                lStack_5c0 = 0;
                uStack_5b4 = 0;
                uStack_5b8 = 0;
                iStack_5b0 = 0;
                ppuStack_260 = ppuStack_5a0;
                ppuStack_268 = ppuStack_5a8;
                ppuStack_258 = ppuStack_598;
                ppuStack_5a0 = (undefined **)0x0;
                ppuStack_598 = (undefined **)0x0;
                ppuStack_5a8 = (undefined **)0x0;
                ppuStack_250 = &PTR_DAT_110af4b00;
                lStack_248 = lStack_588;
                uStack_240 = CONCAT44(uStack_57c,uStack_580);
                uStack_238 = uStack_578;
                lStack_588 = 0;
                uStack_57c = 0;
                uStack_580 = 0;
                uStack_578 = 0;
                puVar20 = (undefined8 *)0x430;
                __Znwm();
                puVar20[2] = 0;
                puVar20[1] = 0x200000006;
                *(undefined2 *)(puVar20 + 3) = 4;
                puVar20[5] = 0;
                puVar20[4] = 0;
                puVar20[7] = 0;
                puVar20[6] = 0;
                puVar20[9] = 0;
                puVar20[8] = 0;
                puVar20[0xb] = 0;
                puVar20[10] = 0;
                puVar20[0xd] = 0;
                puVar20[0xc] = 0;
                puVar20[0xf] = 0;
                puVar20[0xe] = 0;
                puVar20[0x10] = 0;
                puVar20[0x11] = puVar20 + 3;
                puVar20[0x12] = 0;
                *(undefined1 *)(puVar20 + 0x13) = 0;
                *(undefined1 *)(puVar20 + 0x16) = 0;
                *puVar20 = &PTR_FUN_110c6db10;
                FUN_10acfa06c(puVar20 + 0x18,&uStack_570);
                *(undefined1 *)(puVar20 + 0x82) = 1;
                puVar20[0x84] = 0;
                puVar20[0x85] = plVar34;
                if (ppuStack_218 != (undefined **)0x0) {
                  ppuVar22 = ppuStack_218 + 1;
                  do {
                    puVar33 = *ppuVar22;
                    cVar5 = '\x01';
                    bVar15 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
                    if (bVar15) {
                      *ppuVar22 = puVar33 + -4;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (((ulong)puVar33 & 0x1fffffffc) == 4) {
                    do {
                      puVar33 = *ppuVar22;
                      cVar5 = '\x01';
                      bVar15 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
                      if (bVar15) {
                        *ppuVar22 = puVar33 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (puVar33 + -1 == (undefined *)0x0) {
                      (**(code **)(*ppuStack_218 + 8))();
                    }
                  }
                }
                ppuStack_218 = (undefined **)puVar20;
                if (puStack_210 != (undefined8 *)0x0) {
                  func_0x0001092b4274(&puStack_210);
                }
                ppuStack_220 = (undefined **)(puVar20 + 0x18);
                puStack_210 = puVar20;
                FUN_10acf761c(&uStack_570);
                ppuStack_208 = (undefined **)FUN_10acfa32c;
                __ZNSt13exception_ptrD1Ev(&plStack_b88);
              }
              ppuVar22 = ppuStack_220;
              if (ppuStack_220[0x6c] != (undefined *)0x0) {
                func_0x0001092b4274(ppuStack_220 + 0x6c);
              }
              ppuVar22[0x6c] = (undefined *)puStack_210;
              puStack_210 = (undefined8 *)0x0;
              uStack_570 = ppuStack_208;
              uStack_568 = ppuStack_220;
              puStack_560 = puVar29;
              (**(code **)*puVar29)(puVar29,&uStack_570);
              ppuVar22 = ppuStack_218;
              ppuStack_218 = (undefined **)0x0;
              if ((puStack_210 != (undefined8 *)0x0) &&
                 (func_0x0001092b4274(&puStack_210), ppuStack_218 != (undefined **)0x0)) {
                ppuVar21 = ppuStack_218 + 1;
                do {
                  puVar33 = *ppuVar21;
                  cVar5 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                  if (bVar15) {
                    *ppuVar21 = puVar33 + -4;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (((ulong)puVar33 & 0x1fffffffc) == 4) {
                  do {
                    puVar33 = *ppuVar21;
                    cVar5 = '\x01';
                    bVar15 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
                    if (bVar15) {
                      *ppuVar21 = puVar33 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (puVar33 + -1 == (undefined *)0x0) {
                    (**(code **)(*ppuStack_218 + 8))();
                  }
                }
              }
              plVar18 = (long *)param_1[0x2f];
              if (plVar18 != (long *)0x0) {
                puVar3 = (ulong *)(plVar18 + 1);
                do {
                  uVar24 = *puVar3;
                  cVar5 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar15) {
                    *puVar3 = uVar24 - 4;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((uVar24 & 0x1fffffffc) == 4) {
                  do {
                    uVar24 = *puVar3;
                    cVar5 = '\x01';
                    bVar15 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                    if (bVar15) {
                      *puVar3 = uVar24 - 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (uVar24 - 1 == 0) {
                    (**(code **)(*plVar18 + 8))();
                  }
                }
              }
              param_1[0x2f] = (undefined *)ppuVar22;
            }
          }
          FUN_10acf761c(&uStack_8b0);
          FUN_10acf9fbc(&ppuStack_ba0);
        }
        ppuStack_c18 = &PTR_DAT_110af4b00;
        if (lStack_c10 != 0) {
          __ZdaPv();
        }
        ppuStack_bf8 = &PTR_DAT_110af4c80;
        if (lStack_bf0 != 0) {
          __ZdaPv();
        }
        bVar15 = false;
        if (ppuStack_c60 != (undefined **)0x0) {
          bVar15 = bVar14;
        }
        if (bVar15) {
          __ZdaPv(ppuStack_c60);
        }
        plVar18 = plStack_8c8;
        if ((cStack_8c0 == '\x01') && (plStack_8c8 != (long *)0x0)) {
          plVar34 = plStack_8c8 + 1;
          do {
            lVar26 = *plVar34;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar14) {
              *plVar34 = lVar26 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plStack_8c8 + 0x10))(plStack_8c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        if (lStack_938 != 0) {
          lStack_930 = lStack_938;
          __ZdlPv();
        }
        if (lStack_950 != 0) {
          lStack_948 = lStack_950;
          __ZdlPv();
        }
        if (puStack_968 != (undefined *)0x0) {
          puStack_960 = puStack_968;
          __ZdlPv();
        }
        plVar18 = plStack_a28;
        if (plStack_a28 != (long *)0x0) {
          plVar34 = plStack_a28 + 1;
          do {
            lVar26 = *plVar34;
            cVar5 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar14) {
              *plVar34 = lVar26 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plStack_a28 + 0x10))(plStack_a28);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        _free(puStack_ad8);
      }
      unaff_x28 = &PTR_DAT_110af4cf0;
      ppuStack_bd8 = &PTR_DAT_110af4cf0;
      if (lStack_bd0 != 0) {
        __ZdaPv();
      }
    }
  }
  else if ((param_1[0x2f] == (undefined *)0x0) ||
          (((uint)*(undefined8 *)(param_1[0x2f] + 0x10) >> 1 & 1) != 0)) {
    dVar36 = (double)param_2[2] - (double)param_1[0x30];
    bVar14 = false;
    bVar15 = false;
    bVar16 = false;
    if (0.0 <= dVar36) {
      bVar14 = false;
      bVar15 = false;
      bVar16 = true;
      if (!NAN(dVar36)) {
        bVar14 = dVar36 < 0.1;
        bVar15 = dVar36 == 0.1;
        bVar16 = false;
      }
    }
    if (!bVar15 && bVar14 == bVar16) goto LAB_10acf3a24;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_c28 = extraout_x10;
LAB_10acf5998:
  ppuStack_bb8 = ppuStack_c28;
  ppuStack_bb0 = unaff_x28;
  ppuStack_ba8 = ppuVar30;
  FUN_10acfa024();
LAB_10acf59b8:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10acf59bc);
  (*pcVar13)();
}



/* Entry: 10acf399c; end: 10acf5d53;  */

void FUN_10acf399c(undefined **param_1,undefined **param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5,long *param_6)

{
  int *piVar1;
  ulong *puVar2;
  undefined2 uVar3;
  char cVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  long *plVar21;
  undefined ***pppuVar22;
  ulong uVar23;
  byte bVar24;
  ulong uVar25;
  undefined **extraout_x10;
  undefined **ppuVar26;
  undefined8 *puVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  long lVar30;
  int iVar31;
  undefined *puVar32;
  undefined **unaff_x28;
  long *plVar33;
  float fVar34;
  double dVar35;
  undefined **ppuVar36;
  undefined8 uVar37;
  undefined *puVar38;
  undefined **ppuVar39;
  undefined8 uVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined *puVar45;
  undefined8 uVar46;
  undefined *puVar47;
  undefined8 uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  undefined4 uStack_b88;
  undefined4 uStack_b80;
  undefined **ppuStack_b70;
  undefined **ppuStack_b38;
  undefined **ppuStack_b28;
  long lStack_b20;
  undefined8 uStack_b18;
  undefined4 uStack_b10;
  undefined **ppuStack_b08;
  long lStack_b00;
  undefined8 uStack_af8;
  int iStack_af0;
  undefined **ppuStack_ae8;
  long lStack_ae0;
  undefined8 uStack_ad8;
  int iStack_ad0;
  undefined **ppuStack_ac8;
  undefined **ppuStack_ac0;
  undefined **ppuStack_ab8;
  undefined **ppuStack_ab0;
  undefined **ppuStack_aa8;
  undefined **ppuStack_aa0;
  long *plStack_a98;
  undefined **ppuStack_a90;
  undefined *puStack_a88;
  undefined8 uStack_a80;
  undefined *puStack_a78;
  undefined *puStack_a70;
  undefined8 uStack_a68;
  undefined *puStack_a60;
  undefined *puStack_a58;
  undefined8 *puStack_a50;
  undefined8 *puStack_a48;
  undefined *puStack_a40;
  undefined *puStack_a30;
  undefined *puStack_a28;
  long *plStack_a20;
  undefined **ppuStack_a18;
  undefined *puStack_a10;
  undefined8 uStack_a08;
  undefined *puStack_a00;
  undefined *puStack_9f8;
  undefined4 uStack_9f0;
  undefined *puStack_9e8;
  undefined *puStack_9e0;
  undefined *puStack_9d0;
  undefined *puStack_9c8;
  undefined *puStack_9c0;
  undefined8 uStack_9b8;
  undefined *puStack_9b0;
  undefined *puStack_9a8;
  undefined *puStack_9a0;
  undefined8 *puStack_990;
  undefined8 *puStack_988;
  undefined *puStack_980;
  undefined *puStack_978;
  undefined *puStack_970;
  undefined *puStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_940;
  long *plStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined4 uStack_880;
  undefined *puStack_878;
  undefined *puStack_870;
  undefined8 uStack_868;
  long lStack_860;
  long lStack_858;
  undefined8 uStack_850;
  long lStack_848;
  long lStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined1 uStack_7f8;
  undefined1 uStack_7f7;
  undefined6 uStack_7ee;
  undefined2 uStack_7e8;
  ulong uStack_7e0;
  long *plStack_7d8;
  char cStack_7d0;
  undefined8 uStack_7c0;
  undefined **ppuStack_7b8;
  undefined8 uStack_7b0;
  undefined **ppuStack_7a8;
  undefined *puStack_7a0;
  double dStack_798;
  undefined *puStack_790;
  undefined *puStack_788;
  long *plStack_780;
  undefined **ppuStack_778;
  undefined *puStack_770;
  undefined8 uStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined8 uStack_750;
  undefined *puStack_748;
  undefined *puStack_740;
  undefined *puStack_730;
  undefined *puStack_728;
  undefined *puStack_720;
  undefined8 uStack_718;
  undefined *puStack_710;
  undefined *puStack_708;
  undefined *puStack_700;
  undefined8 *puStack_6f0;
  undefined8 *puStack_6e8;
  undefined *puStack_6e0;
  undefined *puStack_6d8;
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a0;
  long *plStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined4 uStack_5e0;
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  undefined8 uStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined2 uStack_558;
  undefined8 uStack_54e;
  ulong uStack_540;
  long *plStack_538;
  char cStack_530;
  undefined **ppuStack_520;
  long lStack_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  int iStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  char cStack_4e0;
  undefined **ppuStack_4d8;
  long lStack_4d0;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  int iStack_4c0;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  long lStack_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 *puStack_470;
  undefined *puStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  long *plStack_440;
  undefined **ppuStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined2 uStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_360;
  long *plStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined2 uStack_218;
  undefined8 uStack_20e;
  ulong uStack_200;
  long *plStack_1f8;
  undefined1 uStack_1f0;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  undefined **ppuStack_1d0;
  int iStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined1 uStack_1a0;
  undefined **ppuStack_198;
  long lStack_190;
  undefined8 uStack_188;
  int iStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 *puStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  double dStack_108;
  undefined *puStack_100;
  long *plStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar28 = param_2;
  if (*(char *)(param_1 + 0x34) == '\0') {
LAB_10acf3a24:
    if ((*(byte *)((long)param_3 + 0x281) & 1) == 0) {
      uStack_478 = (undefined **)param_3[1];
      uStack_480 = (undefined **)*param_3;
      puStack_468 = (undefined *)param_3[3];
      puStack_470 = (undefined8 *)param_3[2];
      puStack_458 = (undefined *)param_3[5];
      puStack_460 = (undefined *)param_3[4];
      plStack_440 = (long *)((ulong)&uStack_480 | 8);
      iVar31 = *(int *)((long)param_3 + 4);
      puStack_448 = (undefined *)param_3[7];
      puStack_450 = (undefined *)param_3[6];
      uStack_428 = 0;
      puStack_430 = (undefined *)0x0;
      if (param_3[7] != 0) {
        piVar1 = (int *)(param_3[7] + 0x14);
        do {
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        iVar31 = *(int *)((long)param_3 + 4);
      }
      ppuStack_438 = &puStack_430;
      if (iVar31 < 3) {
        puStack_430 = *(undefined **)param_3[9];
        uStack_428 = ((undefined8 *)param_3[9])[1];
      }
      else {
        uStack_480 = (undefined **)((ulong)uStack_480 & 0xffffffff);
        func_0x000109a84868(&uStack_480,param_3);
      }
      puVar27 = puStack_470;
      lStack_ae0 = 0;
      uStack_ad8 = (undefined **)0x0;
      ppuStack_ae8 = &PTR_DAT_110af4cf0;
      iStack_ad0 = 0;
      puVar32 = *ppuStack_438;
      uStack_7c0 = (undefined **)CONCAT44((int)uStack_478,uStack_478._4_4_);
      func_0x00010938db10(&ppuStack_ae8,&uStack_7c0);
      if (0 < uStack_ad8._4_4_) {
        lVar30 = 0;
        do {
          _memcpy(lStack_ae0 + lVar30 * iStack_ad0 * 4,puVar27,(long)(int)uStack_ad8 << 2);
          lVar30 = lVar30 + 1;
          puVar27 = (undefined8 *)((long)puVar27 + (((long)puVar32 << 0x20) >> 0x22) * 4);
        } while (lVar30 < uStack_ad8._4_4_);
      }
      fVar34 = *(float *)(param_3 + 0x3f);
      if (fVar34 / 100.0 != 1.0) {
        func_0x00010936ff7c(&uStack_7c0,uStack_ad8._4_4_,(ulong)uStack_ad8 & 0xffffffff,5,lStack_ae0
                            ,(long)iStack_ad0 << 2);
        puStack_a50 = (undefined8 *)CONCAT44(puStack_a50._4_4_,0xc2010000);
        puStack_a40 = (undefined *)0x0;
        puStack_a48 = &uStack_7c0;
        func_0x000109a41858((double)(fVar34 / 100.0),0,&uStack_7c0,&puStack_a50,0xffffffff);
        if (puStack_788 != (undefined *)0x0) {
          piVar1 = (int *)(puStack_788 + 0x14);
          do {
            iVar31 = *piVar1;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar14) {
              *piVar1 = iVar31 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar31 + -1 == 0) {
            func_0x000109a848d4(&uStack_7c0);
          }
        }
        puStack_788 = (undefined *)0x0;
        ppuStack_7a8 = (undefined **)0x0;
        uStack_7b0 = (undefined8 *)0x0;
        dStack_798 = 0.0;
        puStack_7a0 = (undefined *)0x0;
        if (0 < uStack_7c0._4_4_) {
          lVar30 = 0;
          do {
            *(int *)((long)plStack_780 + lVar30 * 4) = 0;
            lVar30 = lVar30 + 1;
          } while (lVar30 < uStack_7c0._4_4_);
        }
        if (ppuStack_778 != &puStack_770 && ppuStack_778 != (undefined **)0x0) {
          _free(ppuStack_778[-1]);
        }
      }
      if (puStack_448 != (undefined *)0x0) {
        piVar1 = (int *)((long)puStack_448 + 0x14);
        do {
          iVar31 = *piVar1;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = iVar31 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar31 + -1 == 0) {
          func_0x000109a848d4(&uStack_480);
        }
      }
      puStack_448 = (undefined *)0x0;
      puStack_468 = (undefined *)0x0;
      puStack_470 = (undefined8 *)0x0;
      puStack_458 = (undefined *)0x0;
      puStack_460 = (undefined *)0x0;
      if (0 < (int)uStack_480._4_4_) {
        lVar30 = 0;
        do {
          *(int *)((long)plStack_440 + lVar30 * 4) = 0;
          lVar30 = lVar30 + 1;
        } while (lVar30 < (int)uStack_480._4_4_);
      }
      if (ppuStack_438 != &puStack_430 && ppuStack_438 != (undefined **)0x0) {
        _free(ppuStack_438[-1]);
      }
      ppuVar28 = param_1;
      if ((ulong)uStack_ad8 >> 0x20 == 0 || ((ulong)uStack_ad8 & 0xffffffff) == 0) {
        ppuVar20 = &PTR_PTR_113307420;
        FUN_10ae079a0(0,&PTR_PTR_113307420);
        FUN_10ae07cd4(ppuVar20,&PTR_PTR_113307420);
      }
      else {
        FUN_10aaafcb8(param_1 + 2,param_3,param_4);
        puStack_a50 = (undefined8 *)0x0;
        puStack_a40 = (undefined *)0x0;
        puStack_9e8 = (undefined *)0x0;
        puStack_9e0 = (undefined *)0x0;
        puStack_a28 = (undefined *)0x0;
        puStack_a30 = (undefined *)0x0;
        ppuStack_a18 = (undefined **)0x0;
        plStack_a20 = (long *)0x0;
        uStack_a08 = 0;
        puStack_a10 = (undefined *)0x0;
        puStack_9f8 = (undefined *)0x0;
        puStack_a00 = (undefined *)0x0;
        uStack_9f0 = 0;
        puStack_9d0 = (undefined *)0x0;
        puStack_9c8 = (undefined *)0x0;
        puStack_9c0 = (undefined *)0x0;
        uStack_9b8 = 0x3ff0000000000000;
        puStack_9b0 = (undefined *)0x0;
        puStack_9a8 = (undefined *)0x0;
        puStack_9a0 = (undefined *)0x0;
        puStack_990 = (undefined8 *)0x3ff0000000000000;
        puStack_980 = (undefined *)0x0;
        puStack_988 = (undefined8 *)0x0;
        puStack_978 = (undefined *)0x0;
        puStack_970 = (undefined *)0x3ff0000000000000;
        puStack_968 = (undefined *)0x0;
        uStack_960 = 0;
        uStack_958 = 0;
        uStack_950 = 0x3ff0000000000000;
        plStack_938 = (long *)0x0;
        uStack_940 = 0;
        uStack_928 = 0;
        uStack_930 = 0;
        uStack_920 = 0;
        uStack_918 = 0x3ff0000000000000;
        uStack_910 = 0;
        uStack_908 = 0;
        uStack_900 = 0;
        uStack_8f8 = 0x3ff0000000000000;
        uStack_8f0 = 0;
        uStack_8e8 = 0;
        uStack_8e0 = 0;
        uStack_8d0 = 0x3ff0000000000000;
        uStack_8c0 = 0;
        uStack_8c8 = 0;
        uStack_8b8 = 0;
        uStack_8b0 = 0x3ff0000000000000;
        uStack_8a8 = 0;
        uStack_8a0 = 0;
        uStack_898 = 0;
        uStack_890 = 0x3ff0000000000000;
        uStack_880 = 0;
        iVar31 = (int)&puStack_878;
        puStack_870 = (undefined *)0x0;
        puStack_878 = (undefined *)0x0;
        lStack_860 = 0;
        uStack_868 = 0;
        uStack_850 = 0;
        lStack_858 = 0;
        lStack_840 = 0;
        lStack_848 = 0;
        uStack_838 = 0;
        uStack_808 = 0x403e000000000000;
        uStack_800 = 0x403e000000000000;
        uStack_7f8 = 0;
        uStack_7e8 = 0;
        uStack_7e0 = uStack_7e0 & 0xffffffffffffff00;
        cStack_7d0 = '\0';
        func_0x00010942bc68(&puStack_a50,param_1 + 2);
        puStack_a50 = (undefined8 *)param_2[2];
        uStack_478 = (undefined **)param_3[0xd];
        uStack_480 = (undefined **)param_3[0xc];
        puStack_468 = (undefined *)param_3[0xf];
        puStack_470 = (undefined8 *)param_3[0xe];
        puStack_458 = (undefined *)param_3[0x11];
        puStack_460 = (undefined *)param_3[0x10];
        plStack_440 = (long *)((ulong)&uStack_480 | 8);
        iVar17 = *(int *)((long)param_3 + 100);
        puStack_448 = (undefined *)param_3[0x13];
        puStack_450 = (undefined *)param_3[0x12];
        uStack_428 = 0;
        puStack_430 = (undefined *)0x0;
        if (param_3[0x13] != 0) {
          piVar1 = (int *)(param_3[0x13] + 0x14);
          do {
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar14) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          iVar17 = *(int *)((long)param_3 + 100);
        }
        ppuStack_438 = &puStack_430;
        if (iVar17 < 3) {
          puStack_430 = *(undefined **)param_3[0x15];
          uStack_428 = ((undefined8 *)param_3[0x15])[1];
        }
        else {
          uStack_480 = (undefined **)((ulong)uStack_480 & 0xffffffff);
          func_0x000109a84868(&uStack_480);
        }
        puVar27 = puStack_470;
        if (puStack_470 == (undefined8 *)0x0) {
LAB_10acf3f70:
          bVar14 = false;
        }
        else {
          uVar23 = (ulong)uStack_480._4_4_;
          if ((int)uStack_480._4_4_ < 3) {
            lVar30 = (long)uStack_478._4_4_ * (long)(int)uStack_478;
          }
          else {
            lVar30 = 1;
            plVar21 = plStack_440;
            do {
              lVar30 = lVar30 * (int)*plVar21;
              uVar23 = uVar23 - 1;
              plVar21 = (long *)((long)plVar21 + 4);
            } while (uVar23 != 0);
          }
          if (lVar30 == 0) goto LAB_10acf3f70;
          uStack_7b0 = (undefined8 *)0x0;
          uStack_7c0 = &PTR_DAT_110af4cf0;
          ppuStack_7b8 = (undefined **)0x0;
          ppuStack_7a8 = (undefined **)((ulong)ppuStack_7a8 & 0xffffffff00000000);
          puVar32 = *ppuStack_438;
          ppuStack_130 = (undefined **)CONCAT44((int)uStack_478,uStack_478._4_4_);
          func_0x00010938db10(&uStack_7c0,&ppuStack_130);
          iVar31 = uStack_7b0._4_4_;
          if (0 < uStack_7b0._4_4_) {
            lVar30 = 0;
            do {
              _memcpy((long)ppuStack_7b8 + lVar30 * (int)ppuStack_7a8 * 4,puVar27,
                      (long)(int)uStack_7b0 << 2);
              lVar30 = lVar30 + 1;
              puVar27 = (undefined8 *)((long)puVar27 + (((long)puVar32 << 0x20) >> 0x22) * 4);
              iVar31 = uStack_7b0._4_4_;
            } while (lVar30 < uStack_7b0._4_4_);
          }
          ppuStack_b70 = ppuStack_7b8;
          bVar14 = true;
          uStack_b80 = SUB84(uStack_7b0,0);
          uStack_b88 = SUB84(ppuStack_7a8,0);
        }
        if (puStack_448 != (undefined *)0x0) {
          piVar1 = (int *)((long)puStack_448 + 0x14);
          do {
            iVar17 = *piVar1;
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar15) {
              *piVar1 = iVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar17 + -1 == 0) {
            func_0x000109a848d4(&uStack_480);
          }
        }
        puStack_448 = (undefined *)0x0;
        puStack_468 = (undefined *)0x0;
        puStack_470 = (undefined8 *)0x0;
        puStack_458 = (undefined *)0x0;
        puStack_460 = (undefined *)0x0;
        if (0 < (int)uStack_480._4_4_) {
          lVar30 = 0;
          do {
            *(int *)((long)plStack_440 + lVar30 * 4) = 0;
            lVar30 = lVar30 + 1;
          } while (lVar30 < (int)uStack_480._4_4_);
        }
        if (ppuStack_438 != &puStack_430 && ppuStack_438 != (undefined **)0x0) {
          _free(ppuStack_438[-1]);
        }
        FUN_10ace5b0c(&uStack_480,param_3 + 0x18,*(undefined1 *)(param_3 + 0x24));
        uStack_7c0 = (undefined **)NEON_rev64(uStack_478,4);
        lStack_b00 = 0;
        uStack_af8 = 0;
        iStack_af0 = 0;
        ppuStack_b08 = &PTR_DAT_110af4c80;
        func_0x00010938e870(&ppuStack_b08,&uStack_7c0);
        puVar27 = puStack_470;
        if (puStack_470 != (undefined8 *)0x0) {
          uVar23 = (ulong)uStack_480._4_4_;
          if ((int)uStack_480._4_4_ < 3) {
            lVar30 = (long)uStack_478._4_4_ * (long)(int)uStack_478;
          }
          else {
            lVar30 = 1;
            plVar21 = plStack_440;
            do {
              lVar30 = lVar30 * (int)*plVar21;
              uVar23 = uVar23 - 1;
              plVar21 = (long *)((long)plVar21 + 4);
            } while (uVar23 != 0);
          }
          if (lVar30 != 0) {
            puVar32 = *ppuStack_438;
            uStack_7c0 = (undefined **)CONCAT44((int)uStack_478,uStack_478._4_4_);
            func_0x00010938e870(&ppuStack_b08,&uStack_7c0);
            if (0 < uStack_af8._4_4_) {
              lVar30 = 0;
              do {
                _memcpy(lStack_b00 + lVar30 * iStack_af0,puVar27,(long)(int)uStack_af8);
                lVar30 = lVar30 + 1;
                puVar27 = (undefined8 *)((long)puVar27 + (long)(int)puVar32);
              } while (lVar30 < uStack_af8._4_4_);
            }
          }
        }
        if (puStack_448 != (undefined *)0x0) {
          piVar1 = (int *)((long)puStack_448 + 0x14);
          do {
            iVar17 = *piVar1;
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar15) {
              *piVar1 = iVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar17 + -1 == 0) {
            func_0x000109a848d4(&uStack_480);
          }
        }
        puStack_448 = (undefined *)0x0;
        puStack_468 = (undefined *)0x0;
        puStack_470 = (undefined8 *)0x0;
        puStack_458 = (undefined *)0x0;
        puStack_460 = (undefined *)0x0;
        if (0 < (int)uStack_480._4_4_) {
          lVar30 = 0;
          do {
            *(int *)((long)plStack_440 + lVar30 * 4) = 0;
            lVar30 = lVar30 + 1;
          } while (lVar30 < (int)uStack_480._4_4_);
        }
        if (ppuStack_438 != &puStack_430 && ppuStack_438 != (undefined **)0x0) {
          _free(ppuStack_438[-1]);
        }
        uStack_7c0 = uStack_ad8;
        if ((*(char *)(param_1 + 0x31) == '\x01' && param_6 != (long *)0x0) &&
           (lVar30 = *param_6, lVar30 != 0)) {
          if (*(int *)(param_1 + 0x37) != *(int *)(lVar30 + 0x24)) {
            FUN_10a1b498c(&uStack_480,*(int *)(lVar30 + 0x24),3);
            func_0x00010a343394(param_1 + 0x35,&uStack_480);
            ppuVar20 = uStack_478;
            if (uStack_478 != (undefined **)0x0) {
              ppuVar19 = uStack_478 + 1;
              do {
                puVar32 = *ppuVar19;
                cVar4 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
                if (bVar15) {
                  *ppuVar19 = puVar32 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (puVar32 == (undefined *)0x0) {
                (**(code **)(*uStack_478 + 0x10))(uStack_478);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
              }
            }
            *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(lVar30 + 0x24);
          }
          puVar27 = (undefined8 *)param_1[0x35];
          iVar17 = (int)param_6 + 0x10;
          FUN_10a0ec6f0();
          ppuStack_130 = (undefined **)CONCAT44(ppuStack_130._4_4_,iVar17);
          (**(code **)*puVar27)(&uStack_480,puVar27,lVar30,&ppuStack_130,&uStack_7c0);
          FUN_10acdd1a0(&ppuStack_b28,uStack_480,*(undefined *)((long)param_1 + 0x1bc));
          ppuVar20 = uStack_478;
          if (uStack_478 != (undefined **)0x0) {
            ppuVar19 = uStack_478 + 1;
            do {
              puVar32 = *ppuVar19;
              cVar4 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
              if (bVar15) {
                *ppuVar19 = puVar32 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (puVar32 == (undefined *)0x0) {
              (**(code **)(*uStack_478 + 0x10))(uStack_478);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar20);
            }
          }
        }
        else {
          lStack_b20 = 0;
          uStack_b18 = 0;
          ppuStack_b28 = &PTR_DAT_110af4b00;
          uStack_b10 = 0;
        }
        FUN_10acf6fe4(param_1);
        if (param_1[0x2f] == (undefined *)0x0) {
          ppuStack_ab0 = (undefined **)0x0;
          ppuStack_aa8 = (undefined **)0x0;
          ppuStack_aa0 = (undefined **)0x0;
          if (param_5 == 0) {
LAB_10acf48ec:
            ppuVar28 = (undefined **)0x0;
            unaff_x28 = (undefined **)0x0;
            ppuStack_b38 = (undefined **)0x0;
          }
          else {
            ppuStack_ac8 = (undefined **)0x0;
            ppuStack_ac0 = (undefined **)0x0;
            ppuStack_ab8 = (undefined **)0x0;
            plVar21 = *(long **)(param_5 + 8);
            plVar33 = *(long **)(param_5 + 0x10);
            if (plVar21 == plVar33) goto LAB_10acf48ec;
            ppuStack_b38 = (undefined **)0x0;
            ppuVar28 = (undefined **)0x0;
            unaff_x28 = (undefined **)0x0;
            do {
              lVar30 = *plVar21;
              if (*(char *)(lVar30 + 0x68) == '\0') {
                dVar35 = (double)*(float *)(lVar30 + 0x20);
                dVar49 = (double)*(float *)(lVar30 + 0x24);
                dVar51 = (double)*(float *)(lVar30 + 0x28);
                uStack_718._0_2_ = (ushort)(byte)uStack_718;
                dVar52 = (double)(float)*(undefined8 *)(lVar30 + 0x10);
                dVar53 = (double)(float)((ulong)*(undefined8 *)(lVar30 + 0x10) >> 0x20);
                dVar57 = dVar53 + dVar53;
                dVar58 = (dVar52 + dVar52) * dVar52;
                dVar54 = (double)(float)*(undefined8 *)(lVar30 + 0x18);
                dVar55 = (double)(float)((ulong)*(undefined8 *)(lVar30 + 0x18) >> 0x20);
                dVar59 = dVar54 + dVar54;
                dVar56 = (dVar52 + dVar52) * dVar55;
                ppuStack_110 = (undefined **)
                               ((1.0 - (dVar57 * dVar53 + dVar59 * dVar54)) * dVar35 +
                                (dVar57 * dVar52 - dVar59 * dVar55) * dVar49 +
                                (dVar57 * dVar55 + dVar59 * dVar52) * dVar51 +
                               (double)(float)*(undefined8 *)(lVar30 + 4));
                dStack_108 = (dVar57 * dVar52 + dVar59 * dVar55) * dVar35 +
                             (1.0 - (dVar58 + dVar59 * dVar54)) * dVar49 +
                             (dVar59 * dVar53 - dVar56) * dVar51 +
                             (double)(float)((ulong)*(undefined8 *)(lVar30 + 4) >> 0x20);
                dVar50 = SQRT(dVar52 * dVar52 + dVar54 * dVar54 + dVar53 * dVar53 + dVar55 * dVar55)
                ;
                ppuStack_130 = (undefined **)(dVar52 / dVar50);
                ppuStack_128 = (undefined **)(dVar53 / dVar50);
                puStack_120 = (undefined8 *)(dVar54 / dVar50);
                ppuStack_118 = (undefined **)(dVar55 / dVar50);
                puStack_100 = (undefined *)
                              ((dVar59 * dVar52 - dVar57 * dVar55) * dVar35 +
                               (dVar56 + dVar59 * dVar53) * dVar49 +
                               (1.0 - (dVar58 + dVar57 * dVar53)) * dVar51 +
                              (double)*(float *)(lVar30 + 0xc));
                func_0x00010937fbc4(&plStack_a98,&ppuStack_130);
                puStack_c8 = puStack_a70;
                puStack_d0 = puStack_a78;
                puStack_b8 = puStack_a60;
                uStack_c0 = uStack_a68;
                puStack_b0 = puStack_a58;
                ppuStack_e8 = ppuStack_a90;
                plStack_f0 = plStack_a98;
                uStack_d8 = uStack_a80;
                puStack_e0 = puStack_a88;
                ppuStack_7b8 = ppuStack_128;
                uStack_7c0 = ppuStack_130;
                ppuStack_7a8 = ppuStack_118;
                uStack_7b0 = puStack_120;
                dStack_798 = dStack_108;
                puStack_7a0 = (undefined *)ppuStack_110;
                puStack_790 = puStack_100;
                puStack_758 = puStack_a70;
                puStack_760 = puStack_a78;
                puStack_748 = puStack_a60;
                uStack_750 = uStack_a68;
                puStack_740 = puStack_a58;
                ppuStack_778 = ppuStack_a90;
                plStack_780 = plStack_a98;
                uStack_768 = uStack_a80;
                puStack_770 = puStack_a88;
                puStack_720 = (undefined *)(double)*(float *)(lVar30 + 0x34);
                puStack_730 = (undefined *)(double)(float)*(undefined8 *)(lVar30 + 0x2c);
                puStack_728 = (undefined *)
                              (double)(float)((ulong)*(undefined8 *)(lVar30 + 0x2c) >> 0x20);
                bVar24 = *(byte *)(lVar30 + 0x68);
                if (1 < bVar24) {
                  bVar24 = 2;
                }
                cVar4 = *(byte *)(lVar30 + 0x69) - 2;
                if (6 < *(byte *)(lVar30 + 0x69) - 3) {
                  cVar4 = '\0';
                }
                uStack_718._0_2_ = CONCAT11(cVar4,bVar24);
                ppuStack_118 = (undefined **)0x0;
                puStack_120 = (undefined8 *)0x0;
                dStack_108 = 0.0;
                ppuStack_110 = (undefined **)0x0;
                ppuStack_128 = (undefined **)0x0;
                ppuStack_130 = (undefined **)0x0;
                FUN_10acf67fc(&ppuStack_130,
                              (*(long *)(lVar30 + 0x40) - *(long *)(lVar30 + 0x38) >> 2) *
                              -0x5555555555555555);
                _memcpy(ppuStack_130,*(long *)(lVar30 + 0x38),
                        *(long *)(lVar30 + 0x40) - *(long *)(lVar30 + 0x38));
                func_0x000108262984(&ppuStack_118,
                                    *(long *)(lVar30 + 0x58) - *(long *)(lVar30 + 0x50) >> 1);
                lVar5 = *(long *)(lVar30 + 0x58) - *(long *)(lVar30 + 0x50);
                if (lVar5 != 0) {
                  _memmove(ppuStack_118,*(long *)(lVar30 + 0x50),lVar5);
                }
                puVar27 = &uStack_7c0;
                func_0x00010937ea24(&uStack_480,puVar27,&ppuStack_130);
                plStack_440 = (long *)((double)plStack_440 * 0.01);
                ppuStack_438 = (undefined **)((double)ppuStack_438 * 0.01);
                puStack_3d0 = (undefined *)((double)puStack_3d0 * 0.01);
                puStack_3c8 = (undefined *)((double)puStack_3c8 * 0.01);
                puStack_3c0 = (undefined *)((double)puStack_3c0 * 0.01);
                puStack_430 = (undefined *)((double)puStack_430 * 0.01);
                puStack_468 = (undefined *)((double)puStack_468 * 0.01);
                for (puVar18 = puStack_3b0; puVar18 != puStack_3a8;
                    puVar18 = (undefined8 *)((long)puVar18 + 0xc)) {
                  *puVar18 = CONCAT44((float)((ulong)*puVar18 >> 0x20) * 0.01,(float)*puVar18 * 0.01
                                     );
                  *(float *)(puVar18 + 1) = *(float *)(puVar18 + 1) * 0.01;
                }
                if (ppuStack_118 != (undefined **)0x0) {
                  ppuStack_110 = ppuStack_118;
                  __ZdlPv();
                }
                if (ppuStack_130 != (undefined **)0x0) {
                  ppuStack_128 = ppuStack_130;
                  __ZdlPv();
                }
                if (unaff_x28 < ppuVar28) {
                  unaff_x28[2] = (undefined *)puStack_470;
                  unaff_x28[1] = (undefined *)uStack_478;
                  *unaff_x28 = (undefined *)uStack_480;
                  unaff_x28[3] = puStack_468;
                  unaff_x28[5] = puStack_458;
                  unaff_x28[4] = puStack_460;
                  unaff_x28[7] = puStack_448;
                  unaff_x28[6] = puStack_450;
                  unaff_x28[10] = puStack_430;
                  unaff_x28[9] = (undefined *)ppuStack_438;
                  unaff_x28[8] = (undefined *)plStack_440;
                  unaff_x28[0xd] = puStack_418;
                  unaff_x28[0xc] = puStack_420;
                  unaff_x28[0x14] = puStack_3e0;
                  unaff_x28[0x11] = puStack_3f8;
                  unaff_x28[0x10] = puStack_400;
                  unaff_x28[0x13] = puStack_3e8;
                  unaff_x28[0x12] = puStack_3f0;
                  unaff_x28[0xf] = puStack_408;
                  unaff_x28[0xe] = (undefined *)CONCAT44(uStack_40c,uStack_410);
                  unaff_x28[0x18] = puStack_3c0;
                  unaff_x28[0x17] = puStack_3c8;
                  unaff_x28[0x16] = puStack_3d0;
                  *(undefined2 *)(unaff_x28 + 0x19) = uStack_3b8;
                  unaff_x28[0x1a] = (undefined *)0x0;
                  unaff_x28[0x1b] = (undefined *)0x0;
                  unaff_x28[0x1c] = (undefined *)0x0;
                  unaff_x28[0x1d] = (undefined *)0x0;
                  unaff_x28[0x1b] = (undefined *)puStack_3a8;
                  unaff_x28[0x1a] = (undefined *)puStack_3b0;
                  unaff_x28[0x1c] = puStack_3a0;
                  puStack_3b0 = (undefined8 *)0x0;
                  puStack_3a8 = (undefined8 *)0x0;
                  unaff_x28[0x1e] = (undefined *)0x0;
                  unaff_x28[0x1f] = (undefined *)0x0;
                  unaff_x28[0x1e] = puStack_390;
                  unaff_x28[0x1d] = puStack_398;
                  unaff_x28[0x1f] = puStack_388;
                  puStack_3a0 = (undefined *)0x0;
                  puStack_398 = (undefined *)0x0;
                  puStack_390 = (undefined *)0x0;
                  puStack_388 = (undefined *)0x0;
                  ppuVar20 = unaff_x28;
                }
                else {
                  lVar30 = (long)unaff_x28 - (long)ppuStack_b38 >> 8;
                  uVar23 = lVar30 + 1;
                  if (uVar23 >> 0x38 != 0) goto LAB_10acf5998;
                  uVar25 = (long)ppuVar28 - (long)ppuStack_b38 >> 7;
                  if (uVar25 <= uVar23) {
                    uVar25 = uVar23;
                  }
                  if (0x7ffffffffffffeff < (ulong)((long)ppuVar28 - (long)ppuStack_b38)) {
                    uVar25 = 0xffffffffffffff;
                  }
                  if (uVar25 == 0) {
                    uVar25 = 0;
                    puVar27 = (undefined8 *)0x0;
                  }
                  else {
                    FUN_10acfa038();
                  }
                  ppuVar20 = (undefined **)(uVar25 + ((long)unaff_x28 - (long)ppuStack_b38));
                  ppuVar20[2] = (undefined *)puStack_470;
                  ppuVar20[1] = (undefined *)uStack_478;
                  *ppuVar20 = (undefined *)uStack_480;
                  ppuVar20[3] = puStack_468;
                  ppuVar20[5] = puStack_458;
                  ppuVar20[4] = puStack_460;
                  ppuVar20[7] = puStack_448;
                  ppuVar20[6] = puStack_450;
                  ppuVar20[10] = puStack_430;
                  ppuVar20[9] = (undefined *)ppuStack_438;
                  ppuVar20[8] = (undefined *)plStack_440;
                  ppuVar20[0x14] = puStack_3e0;
                  ppuVar20[0x11] = puStack_3f8;
                  ppuVar20[0x10] = puStack_400;
                  ppuVar20[0x13] = puStack_3e8;
                  ppuVar20[0x12] = puStack_3f0;
                  ppuVar20[0xf] = puStack_408;
                  ppuVar20[0xe] = (undefined *)CONCAT44(uStack_40c,uStack_410);
                  ppuVar20[0xd] = puStack_418;
                  ppuVar20[0xc] = puStack_420;
                  ppuVar20[0x18] = puStack_3c0;
                  ppuVar20[0x17] = puStack_3c8;
                  ppuVar20[0x16] = puStack_3d0;
                  *(undefined2 *)(ppuVar20 + 0x19) = uStack_3b8;
                  ppuVar20[0x1b] = (undefined *)0x0;
                  ppuVar20[0x1c] = (undefined *)0x0;
                  ppuVar20[0x1a] = (undefined *)0x0;
                  ppuVar20[0x1b] = (undefined *)puStack_3a8;
                  ppuVar20[0x1a] = (undefined *)puStack_3b0;
                  ppuVar20[0x1c] = puStack_3a0;
                  puStack_3b0 = (undefined8 *)0x0;
                  puStack_3a8 = (undefined8 *)0x0;
                  puStack_3a0 = (undefined *)0x0;
                  ppuVar20[0x1d] = (undefined *)0x0;
                  ppuVar20[0x1e] = (undefined *)0x0;
                  ppuVar20[0x1f] = (undefined *)0x0;
                  ppuVar20[0x1e] = puStack_390;
                  ppuVar20[0x1d] = puStack_398;
                  ppuVar20[0x1f] = puStack_388;
                  puStack_398 = (undefined *)0x0;
                  puStack_390 = (undefined *)0x0;
                  puStack_388 = (undefined *)0x0;
                  ppuVar26 = ppuVar20 + lVar30 * -0x20;
                  ppuVar28 = ppuStack_b38;
                  ppuVar19 = ppuVar26;
                  if (ppuStack_b38 != unaff_x28) {
                    do {
                      puVar38 = ppuVar28[1];
                      puVar32 = *ppuVar28;
                      ppuVar19[2] = ppuVar28[2];
                      ppuVar19[1] = puVar38;
                      *ppuVar19 = puVar32;
                      ppuVar19[3] = ppuVar28[3];
                      puVar32 = ppuVar28[4];
                      puVar41 = ppuVar28[7];
                      puVar38 = ppuVar28[6];
                      ppuVar19[5] = ppuVar28[5];
                      ppuVar19[4] = puVar32;
                      ppuVar19[7] = puVar41;
                      ppuVar19[6] = puVar38;
                      puVar38 = ppuVar28[9];
                      puVar32 = ppuVar28[8];
                      ppuVar19[10] = ppuVar28[10];
                      ppuVar19[9] = puVar38;
                      ppuVar19[8] = puVar32;
                      puVar42 = ppuVar28[0x11];
                      puVar41 = ppuVar28[0x10];
                      puVar38 = ppuVar28[0x13];
                      puVar32 = ppuVar28[0x12];
                      puVar47 = ppuVar28[0xf];
                      puVar45 = ppuVar28[0xe];
                      ppuVar19[0x14] = ppuVar28[0x14];
                      ppuVar19[0x11] = puVar42;
                      ppuVar19[0x10] = puVar41;
                      ppuVar19[0x13] = puVar38;
                      ppuVar19[0x12] = puVar32;
                      ppuVar19[0xf] = puVar47;
                      ppuVar19[0xe] = puVar45;
                      puVar32 = ppuVar28[0xc];
                      ppuVar19[0xd] = ppuVar28[0xd];
                      ppuVar19[0xc] = puVar32;
                      puVar38 = ppuVar28[0x17];
                      puVar32 = ppuVar28[0x16];
                      ppuVar19[0x18] = ppuVar28[0x18];
                      ppuVar19[0x17] = puVar38;
                      ppuVar19[0x16] = puVar32;
                      *(undefined2 *)(ppuVar19 + 0x19) = *(undefined2 *)(ppuVar28 + 0x19);
                      ppuVar19[0x1b] = (undefined *)0x0;
                      ppuVar19[0x1c] = (undefined *)0x0;
                      ppuVar19[0x1a] = (undefined *)0x0;
                      puVar32 = ppuVar28[0x1a];
                      ppuVar19[0x1b] = ppuVar28[0x1b];
                      ppuVar19[0x1a] = puVar32;
                      ppuVar19[0x1c] = ppuVar28[0x1c];
                      ppuVar28[0x1a] = (undefined *)0x0;
                      ppuVar28[0x1b] = (undefined *)0x0;
                      ppuVar28[0x1c] = (undefined *)0x0;
                      ppuVar19[0x1d] = (undefined *)0x0;
                      ppuVar19[0x1e] = (undefined *)0x0;
                      ppuVar19[0x1f] = (undefined *)0x0;
                      puVar32 = ppuVar28[0x1d];
                      ppuVar19[0x1e] = ppuVar28[0x1e];
                      ppuVar19[0x1d] = puVar32;
                      ppuVar19[0x1f] = ppuVar28[0x1f];
                      ppuVar28[0x1d] = (undefined *)0x0;
                      ppuVar28[0x1e] = (undefined *)0x0;
                      ppuVar28[0x1f] = (undefined *)0x0;
                      ppuVar28 = ppuVar28 + 0x20;
                      ppuVar19 = ppuVar19 + 0x20;
                      ppuVar29 = ppuStack_b38;
                    } while (ppuVar28 != unaff_x28);
                    do {
                      FUN_10acf9f78(ppuVar29);
                      ppuVar29 = ppuVar29 + 0x20;
                    } while (ppuVar29 != unaff_x28);
                  }
                  if (ppuStack_b38 != (undefined **)0x0) {
                    __ZdlPv();
                  }
                  ppuVar28 = (undefined **)(uVar25 + (long)puVar27 * 0x100);
                  ppuStack_b38 = ppuVar26;
                  if (puStack_398 != (undefined *)0x0) {
                    puStack_390 = puStack_398;
                    __ZdlPv();
                  }
                }
                if (puStack_3b0 != (undefined8 *)0x0) {
                  puStack_3a8 = puStack_3b0;
                  __ZdlPv();
                }
                unaff_x28 = ppuVar20 + 0x20;
              }
              ppuVar20 = ppuStack_ab0;
              plVar21 = plVar21 + 2;
            } while (plVar21 != plVar33);
            ppuStack_ab8 = ppuVar28;
            ppuStack_ac0 = unaff_x28;
            ppuVar19 = ppuStack_aa8;
            if (ppuStack_ab0 != (undefined **)0x0) {
              while (ppuStack_ac8 = ppuStack_b38, ppuVar19 != ppuVar20) {
                FUN_10acf9f78(ppuVar19 + -0x20);
                ppuStack_b38 = ppuStack_ac8;
                ppuVar19 = ppuVar19 + -0x20;
              }
              __ZdlPv(ppuStack_ab0);
            }
          }
          ppuStack_ac0 = (undefined **)0x0;
          ppuStack_ab8 = (undefined **)0x0;
          ppuStack_ac8 = (undefined **)0x0;
          ppuStack_ab0 = ppuStack_b38;
          ppuStack_aa8 = unaff_x28;
          ppuStack_aa0 = ppuVar28;
          FUN_10acf9fbc(&ppuStack_ac8);
          uVar48 = uStack_838;
          lVar12 = lStack_840;
          lVar11 = lStack_848;
          uVar46 = uStack_850;
          lVar10 = lStack_858;
          lVar9 = lStack_860;
          uVar44 = uStack_868;
          puVar42 = puStack_870;
          puVar41 = puStack_878;
          plVar21 = plStack_938;
          uVar43 = uStack_940;
          puVar38 = puStack_9e0;
          puVar32 = puStack_9e8;
          ppuVar29 = ppuStack_aa0;
          ppuVar26 = ppuStack_aa8;
          ppuVar19 = ppuStack_ab0;
          iVar8 = iStack_ad0;
          ppuVar20 = uStack_ad8;
          lVar7 = lStack_ae0;
          iVar17 = iStack_af0;
          uVar40 = uStack_af8;
          lVar5 = lStack_b00;
          uVar6 = uStack_b10;
          uVar37 = uStack_b18;
          lVar30 = lStack_b20;
          ppuVar39 = (undefined **)param_1[1];
          ppuVar36 = (undefined **)*param_1;
          if (param_1[1] != (undefined *)0x0) {
            plVar33 = (long *)(param_1[1] + 0x10);
            do {
              cVar4 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar15) {
                *plVar33 = *plVar33 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_7b0 = puStack_a50;
          puStack_7a0 = puStack_a40;
          puStack_788 = puStack_a28;
          puStack_790 = puStack_a30;
          ppuStack_778 = ppuStack_a18;
          plStack_780 = plStack_a20;
          uStack_768 = uStack_a08;
          puStack_770 = puStack_a10;
          puStack_758 = puStack_9f8;
          puStack_760 = puStack_a00;
          uStack_750 = CONCAT44(uStack_750._4_4_,uStack_9f0);
          puStack_748 = puStack_9e8;
          puStack_740 = puStack_9e0;
          puStack_9e8 = (undefined *)0x0;
          puStack_9e0 = (undefined *)0x0;
          puStack_728 = puStack_9c8;
          puStack_730 = puStack_9d0;
          uStack_718 = uStack_9b8;
          puStack_720 = puStack_9c0;
          puStack_708 = puStack_9a8;
          puStack_710 = puStack_9b0;
          puStack_6c8 = puStack_968;
          puStack_6d0 = puStack_970;
          uStack_6b8 = uStack_958;
          uStack_6c0 = uStack_960;
          puStack_700 = puStack_9a0;
          uStack_6b0 = uStack_950;
          puStack_6e8 = puStack_988;
          puStack_6f0 = puStack_990;
          puStack_6d8 = puStack_978;
          puStack_6e0 = puStack_980;
          uStack_6a0 = uStack_940;
          plStack_698 = plStack_938;
          uStack_940 = 0;
          plStack_938 = (long *)0x0;
          uStack_688 = uStack_928;
          uStack_690 = uStack_930;
          uStack_678 = uStack_918;
          uStack_680 = uStack_920;
          uStack_668 = uStack_908;
          uStack_670 = uStack_910;
          uStack_658 = uStack_8f8;
          uStack_660 = uStack_900;
          uStack_648 = uStack_8e8;
          uStack_650 = uStack_8f0;
          uStack_628 = uStack_8c8;
          uStack_630 = uStack_8d0;
          uStack_640 = uStack_8e0;
          uStack_5f0 = uStack_890;
          uStack_5f8 = uStack_898;
          uStack_600 = uStack_8a0;
          uStack_608 = uStack_8a8;
          uStack_610 = uStack_8b0;
          uStack_618 = uStack_8b8;
          uStack_620 = uStack_8c0;
          uStack_5e0 = uStack_880;
          puStack_5d8 = puStack_878;
          puStack_5d0 = puStack_870;
          puStack_878 = (undefined *)0x0;
          puStack_870 = (undefined *)0x0;
          uStack_868 = 0;
          uStack_5c8 = uVar44;
          lStack_5c0 = lStack_860;
          lStack_5b8 = lStack_858;
          uStack_5b0 = uStack_850;
          lStack_860 = 0;
          lStack_858 = 0;
          uStack_850 = 0;
          lStack_5a8 = lStack_848;
          lStack_5a0 = lStack_840;
          uStack_598 = uStack_838;
          lStack_848 = 0;
          lStack_840 = 0;
          uStack_838 = 0;
          uStack_590 = uStack_830;
          uStack_54e = CONCAT26(uStack_7e8,uStack_7ee);
          uStack_558 = CONCAT11(uStack_7f7,uStack_7f8);
          uStack_560 = uStack_800;
          uStack_568 = uStack_808;
          uStack_570 = uStack_810;
          uStack_578 = uStack_818;
          uStack_580 = uStack_820;
          uStack_540 = uStack_540 & 0xffffffffffffff00;
          cStack_530 = cStack_7d0 == '\x01';
          if ((bool)cStack_530) {
            plStack_538 = plStack_7d8;
            uStack_540 = uStack_7e0;
            uStack_7e0 = 0;
            plStack_7d8 = (long *)0x0;
          }
          ppuStack_520 = &PTR_DAT_110af4cf0;
          lStack_518 = lStack_ae0;
          uStack_510 = (int)uStack_ad8;
          uStack_50c = uStack_ad8._4_4_;
          iStack_508 = iStack_ad0;
          iStack_ad0 = 0;
          lStack_ae0 = 0;
          uStack_ad8 = (undefined **)0x0;
          if (!bVar14) {
            ppuStack_500 = (undefined **)((ulong)ppuStack_500 & 0xffffffffffffff00);
          }
          else {
            ppuStack_500 = &PTR_DAT_110af4cf0;
            ppuStack_4f8 = ppuStack_b70;
            uStack_4f0 = CONCAT44(iVar31,uStack_b80);
            uStack_4e8 = uStack_b88;
            ppuStack_b70 = (undefined **)0x0;
          }
          cStack_4e0 = bVar14;
          ppuStack_4d8 = &PTR_DAT_110af4c80;
          lStack_4d0 = lStack_b00;
          uStack_4c8 = (int)uStack_af8;
          uStack_4c4 = uStack_af8._4_4_;
          iStack_4c0 = iStack_af0;
          iStack_af0 = 0;
          lStack_b00 = 0;
          uStack_af8 = 0;
          ppuStack_4b8 = ppuStack_ab0;
          ppuStack_4b0 = ppuStack_aa8;
          ppuStack_4a8 = ppuStack_aa0;
          ppuStack_aa8 = (undefined **)0x0;
          ppuStack_aa0 = (undefined **)0x0;
          ppuStack_ab0 = (undefined **)0x0;
          ppuStack_4a0 = &PTR_DAT_110af4b00;
          lStack_498 = lStack_b20;
          uStack_490 = (undefined4)uStack_b18;
          uStack_48c = uStack_b18._4_4_;
          uStack_488 = uStack_b10;
          lStack_b20 = 0;
          uStack_b18 = 0;
          uStack_b10 = 0;
          uStack_7c0 = ppuVar36;
          ppuStack_7b8 = ppuVar39;
          if (*(char *)(param_1 + 0x34) == '\0') {
            if (ppuVar39 != (undefined **)0x0) {
              ppuVar28 = ppuVar39 + 2;
              do {
                cVar4 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(ppuVar28,0x10);
                if (bVar15) {
                  *ppuVar28 = *ppuVar28 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            puStack_470 = puStack_a50;
            puStack_460 = puStack_a40;
            puStack_448 = puStack_a28;
            puStack_450 = puStack_a30;
            ppuStack_438 = ppuStack_a18;
            plStack_440 = plStack_a20;
            uStack_428 = uStack_a08;
            puStack_430 = puStack_a10;
            puStack_418 = puStack_9f8;
            puStack_420 = puStack_a00;
            uStack_480 = ppuVar36;
            uStack_478 = ppuVar39;
            uStack_410 = uStack_9f0;
            func_0x00010937da58(&puStack_408,&puStack_748);
            puStack_3e8 = puStack_728;
            puStack_3f0 = puStack_730;
            uStack_3d8 = uStack_718;
            puStack_3e0 = puStack_720;
            puStack_3c8 = puStack_708;
            puStack_3d0 = puStack_710;
            puStack_388 = puStack_6c8;
            puStack_390 = puStack_6d0;
            uStack_378 = uStack_6b8;
            uStack_380 = uStack_6c0;
            puStack_3c0 = puStack_700;
            uStack_370 = uStack_6b0;
            puStack_3a8 = puStack_6e8;
            puStack_3b0 = puStack_6f0;
            puStack_398 = puStack_6d8;
            puStack_3a0 = puStack_6e0;
            plStack_358 = plStack_698;
            uStack_360 = uStack_6a0;
            if (plStack_698 != (long *)0x0) {
              plVar21 = plStack_698 + 1;
              do {
                cVar4 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar15) {
                  *plVar21 = *plVar21 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            uStack_348 = uStack_688;
            uStack_350 = uStack_690;
            uStack_338 = uStack_678;
            uStack_340 = uStack_680;
            uStack_328 = uStack_668;
            uStack_330 = uStack_670;
            uStack_318 = uStack_658;
            uStack_320 = uStack_660;
            uStack_308 = uStack_648;
            uStack_310 = uStack_650;
            uStack_300 = uStack_640;
            uStack_2b0 = uStack_5f0;
            uStack_2c8 = uStack_608;
            uStack_2d0 = uStack_610;
            uStack_2b8 = uStack_5f8;
            uStack_2c0 = uStack_600;
            uStack_2e8 = uStack_628;
            uStack_2f0 = uStack_630;
            uStack_2d8 = uStack_618;
            uStack_2e0 = uStack_620;
            uStack_2a0 = uStack_5e0;
            puStack_290 = (undefined *)0x0;
            puStack_298 = (undefined *)0x0;
            uStack_288 = 0;
            FUN_10a4f0090(&puStack_298,puStack_5d8,puStack_5d0,
                          ((long)puStack_5d0 - (long)puStack_5d8 >> 3) * -0x5555555555555555);
            uStack_270 = 0;
            lStack_278 = 0;
            lStack_280 = 0;
            FUN_10a0e9a40(&lStack_280,lStack_5c0,lStack_5b8,lStack_5b8 - lStack_5c0 >> 2);
            lStack_260 = 0;
            lStack_268 = 0;
            uStack_258 = 0;
            FUN_10a0ca588();
            uStack_250 = uStack_590;
            uStack_20e = uStack_54e;
            uStack_238 = uStack_578;
            uStack_240 = uStack_580;
            uStack_228 = uStack_568;
            uStack_230 = uStack_570;
            uStack_218 = uStack_558;
            uStack_220 = uStack_560;
            uStack_200 = uStack_200 & 0xffffffffffffff00;
            uStack_1f0 = 0;
            if (cStack_530 == '\x01') {
              plStack_1f8 = plStack_538;
              uStack_200 = uStack_540;
              if (plStack_538 != (long *)0x0) {
                plVar21 = plStack_538 + 1;
                do {
                  cVar4 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar15) {
                    *plVar21 = *plVar21 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              uStack_1f0 = 1;
            }
            FUN_10aced1ac(&ppuStack_1e0,&ppuStack_520);
            ppuStack_1c0 = (undefined **)((ulong)ppuStack_1c0 & 0xffffffffffffff00);
            uStack_1a0 = 0;
            bVar15 = cStack_4e0 == '\x01';
            if (bVar15) {
              FUN_10aced1ac(&ppuStack_1c0,&ppuStack_500);
            }
            pppuVar22 = &ppuStack_4d8;
            uStack_1a0 = bVar15;
            func_0x00010939d4b8(&ppuStack_198);
            ppuVar28 = ppuStack_4b0;
            ppuVar20 = ppuStack_4b8;
            ppuStack_170 = (undefined **)0x0;
            ppuStack_178 = (undefined **)0x0;
            ppuStack_168 = (undefined **)0x0;
            if ((long)ppuStack_4b0 - (long)ppuStack_4b8 != 0) {
              ppuVar19 = (undefined **)((long)ppuStack_4b0 - (long)ppuStack_4b8 >> 8);
              if ((ulong)ppuVar19 >> 0x38 != 0) {
                FUN_10acfa024();
                goto LAB_10acf59b8;
              }
              FUN_10acfa038();
              lVar30 = 0;
              ppuStack_168 = ppuVar19 + (long)pppuVar22 * 0x20;
              ppuStack_178 = ppuVar19;
              ppuStack_170 = ppuVar19;
              do {
                puVar27 = (undefined8 *)((long)ppuVar20 + lVar30);
                puVar18 = (undefined8 *)((long)ppuVar19 + lVar30);
                uVar40 = puVar27[1];
                uVar37 = *puVar27;
                puVar18[2] = puVar27[2];
                puVar18[1] = uVar40;
                *puVar18 = uVar37;
                puVar18[3] = puVar27[3];
                uVar37 = puVar27[4];
                uVar43 = puVar27[7];
                uVar40 = puVar27[6];
                puVar18[5] = puVar27[5];
                puVar18[4] = uVar37;
                puVar18[7] = uVar43;
                puVar18[6] = uVar40;
                uVar40 = puVar27[9];
                uVar37 = puVar27[8];
                puVar18[10] = puVar27[10];
                puVar18[9] = uVar40;
                puVar18[8] = uVar37;
                uVar44 = puVar27[0x11];
                uVar43 = puVar27[0x10];
                uVar40 = puVar27[0x13];
                uVar37 = puVar27[0x12];
                uVar48 = puVar27[0xf];
                uVar46 = puVar27[0xe];
                puVar18[0x14] = puVar27[0x14];
                puVar18[0x11] = uVar44;
                puVar18[0x10] = uVar43;
                puVar18[0x13] = uVar40;
                puVar18[0x12] = uVar37;
                puVar18[0xf] = uVar48;
                puVar18[0xe] = uVar46;
                uVar37 = puVar27[0xc];
                puVar18[0xd] = puVar27[0xd];
                puVar18[0xc] = uVar37;
                uVar40 = puVar27[0x17];
                uVar37 = puVar27[0x16];
                puVar18[0x18] = puVar27[0x18];
                puVar18[0x17] = uVar40;
                puVar18[0x16] = uVar37;
                uVar3 = *(undefined2 *)(puVar27 + 0x19);
                puVar18[0x1a] = 0;
                *(undefined2 *)(puVar18 + 0x19) = uVar3;
                puVar18[0x1b] = 0;
                puVar18[0x1c] = 0;
                FUN_10aceb8ec();
                puVar18[0x1d] = 0;
                puVar18[0x1e] = 0;
                puVar18[0x1f] = 0;
                FUN_10acbf198(puVar18 + 0x1d,puVar27[0x1d],puVar27[0x1e],
                              (long)(puVar27[0x1e] - puVar27[0x1d]) >> 1);
                lVar30 = lVar30 + 0x100;
              } while ((undefined **)(puVar27 + 0x20) != ppuVar28);
              ppuStack_170 = (undefined **)((long)ppuVar19 + lVar30);
            }
            FUN_10aceb7a0(&ppuStack_160,&ppuStack_4a0);
            ppuVar20 = (undefined **)0xb8;
            __Znwm();
            ppuVar20[2] = (undefined *)0x0;
            ppuVar20[1] = (undefined *)0x200000006;
            *(undefined2 *)(ppuVar20 + 3) = 4;
            ppuVar20[5] = (undefined *)0x0;
            ppuVar20[4] = (undefined *)0x0;
            ppuVar20[7] = (undefined *)0x0;
            ppuVar20[6] = (undefined *)0x0;
            ppuVar20[9] = (undefined *)0x0;
            ppuVar20[8] = (undefined *)0x0;
            ppuVar20[0xb] = (undefined *)0x0;
            ppuVar20[10] = (undefined *)0x0;
            ppuVar20[0xd] = (undefined *)0x0;
            ppuVar20[0xc] = (undefined *)0x0;
            ppuVar20[0xf] = (undefined *)0x0;
            ppuVar20[0xe] = (undefined *)0x0;
            ppuVar20[0x10] = (undefined *)0x0;
            ppuVar20[0x11] = (undefined *)(ppuVar20 + 3);
            ppuVar20[0x12] = (undefined *)0x0;
            *ppuVar20 = (undefined *)&PTR_DAT_110c6db60;
            *(undefined1 *)(ppuVar20 + 0x13) = 0;
            *(undefined1 *)(ppuVar20 + 0x16) = 0;
            ppuStack_a90 = ppuVar20;
            FUN_10acfa7a4(&ppuStack_130,&uStack_480);
            func_0x00010acfa6f8(ppuVar20,&ppuStack_130);
            FUN_10acfa9d4(&ppuStack_130);
            plStack_a98 = (long *)0x0;
            func_0x0001092b4274(&ppuStack_a90,ppuVar20);
            if (plStack_a98 != (long *)0x0) {
              puVar2 = (ulong *)(plStack_a98 + 1);
              do {
                uVar23 = *puVar2;
                cVar4 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar15) {
                  *puVar2 = uVar23 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar23 & 0x1fffffffc) == 4) {
                do {
                  uVar23 = *puVar2;
                  cVar4 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar15) {
                    *puVar2 = uVar23 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar23 - 1 == 0) {
                  (**(code **)(*plStack_a98 + 8))();
                }
              }
            }
            plVar21 = (long *)param_1[0x2f];
            if (plVar21 != (long *)0x0) {
              puVar2 = (ulong *)(plVar21 + 1);
              do {
                uVar23 = *puVar2;
                cVar4 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar15) {
                  *puVar2 = uVar23 - 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if ((uVar23 & 0x1fffffffc) == 4) {
                do {
                  uVar23 = *puVar2;
                  cVar4 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar15) {
                    *puVar2 = uVar23 - 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (uVar23 - 1 == 0) {
                  (**(code **)(*plVar21 + 8))();
                }
              }
            }
            param_1[0x2f] = (undefined *)ppuVar20;
            FUN_10acf761c(&uStack_480);
          }
          else {
            dVar35 = (double)param_2[2] - (double)param_1[0x30];
            ppuVar28 = (undefined **)&UNK_10dd8b000;
            if ((0.1 < dVar35) || (dVar35 < 0.0)) {
              ppuVar28 = &puStack_5d8;
              param_1[0x30] = param_2[2];
              puVar27 = (undefined8 *)param_1[0x32];
              plVar33 = (long *)puVar27[2];
              puStack_120 = (undefined8 *)0x0;
              ppuStack_128 = (undefined **)0x0;
              if (plVar33 == (long *)0x0) {
                uStack_7c0 = (undefined **)0x0;
                ppuStack_7b8 = (undefined **)0x0;
                puStack_470 = puStack_a50;
                puStack_460 = puStack_a40;
                puStack_448 = puStack_a28;
                puStack_450 = puStack_a30;
                ppuStack_438 = ppuStack_a18;
                plStack_440 = plStack_a20;
                uStack_428 = uStack_a08;
                puStack_430 = puStack_a10;
                puStack_418 = puStack_9f8;
                puStack_420 = puStack_a00;
                uStack_410 = uStack_9f0;
                puStack_408 = puVar32;
                puStack_400 = puVar38;
                puStack_748 = (undefined *)0x0;
                puStack_740 = (undefined *)0x0;
                puStack_3e8 = puStack_9c8;
                puStack_3f0 = puStack_9d0;
                uStack_3d8 = uStack_9b8;
                puStack_3e0 = puStack_9c0;
                puStack_3c8 = puStack_9a8;
                puStack_3d0 = puStack_9b0;
                puStack_3c0 = puStack_9a0;
                uStack_370 = uStack_950;
                puStack_388 = puStack_968;
                puStack_390 = puStack_970;
                uStack_378 = uStack_958;
                uStack_380 = uStack_960;
                puStack_3a8 = puStack_988;
                puStack_3b0 = puStack_990;
                puStack_398 = puStack_978;
                puStack_3a0 = puStack_980;
                uStack_360 = uVar43;
                plStack_358 = plVar21;
                uStack_6a0 = 0;
                plStack_698 = (long *)0x0;
                uStack_348 = uStack_928;
                uStack_350 = uStack_930;
                uStack_338 = uStack_918;
                uStack_340 = uStack_920;
                uStack_328 = uStack_908;
                uStack_330 = uStack_910;
                uStack_318 = uStack_8f8;
                uStack_320 = uStack_900;
                uStack_308 = uStack_8e8;
                uStack_310 = uStack_8f0;
                uStack_300 = uStack_8e0;
                uStack_2b0 = uStack_890;
                uStack_2c8 = uStack_8a8;
                uStack_2d0 = uStack_8b0;
                uStack_2b8 = uStack_898;
                uStack_2c0 = uStack_8a0;
                uStack_2e8 = uStack_8c8;
                uStack_2f0 = uStack_8d0;
                uStack_2d8 = uStack_8b8;
                uStack_2e0 = uStack_8c0;
                uStack_2a0 = uStack_880;
                puStack_298 = puVar41;
                puStack_290 = puVar42;
                puStack_5d8 = (undefined *)0x0;
                puStack_5d0 = (undefined *)0x0;
                uStack_5c8 = 0;
                uStack_288 = uVar44;
                lStack_280 = lVar9;
                lStack_278 = lVar10;
                uStack_270 = uVar46;
                lStack_5c0 = 0;
                lStack_5b8 = 0;
                uStack_5b0 = 0;
                lStack_268 = lVar11;
                lStack_260 = lVar12;
                uStack_258 = uVar48;
                lStack_5a8 = 0;
                lStack_5a0 = 0;
                uStack_598 = 0;
                uStack_250 = uStack_830;
                uStack_228 = uStack_808;
                uStack_230 = uStack_810;
                uStack_220 = uStack_800;
                uStack_238 = uStack_818;
                uStack_240 = uStack_820;
                uStack_200 = uStack_200 & 0xffffffffffffff00;
                uStack_1f0 = cStack_7d0 != '\0';
                if ((bool)uStack_1f0) {
                  plStack_1f8 = plStack_538;
                  uStack_200 = uStack_540;
                  uStack_540 = 0;
                  plStack_538 = (long *)0x0;
                }
                ppuStack_1e0 = &PTR_DAT_110af4cf0;
                lStack_1d8 = lVar7;
                ppuStack_1d0 = ppuVar20;
                iStack_1c8 = iVar8;
                lStack_518 = 0;
                uStack_50c = 0;
                uStack_510 = 0;
                iStack_508 = 0;
                ppuStack_1c0 = (undefined **)((ulong)ppuStack_1c0 & 0xffffffffffffff00);
                if (bVar14) {
                  ppuStack_1c0 = &PTR_DAT_110af4cf0;
                  ppuStack_1b8 = ppuStack_4f8;
                  uStack_1b0 = uStack_4f0;
                  uStack_1a8 = uStack_4e8;
                  uStack_4f0 = 0;
                  ppuStack_4f8 = (undefined **)0x0;
                  uStack_4e8 = 0;
                }
                ppuStack_198 = &PTR_DAT_110af4c80;
                lStack_190 = lVar5;
                uStack_188 = uVar40;
                iStack_180 = iVar17;
                lStack_4d0 = 0;
                uStack_4c4 = 0;
                uStack_4c8 = 0;
                iStack_4c0 = 0;
                ppuStack_178 = ppuVar19;
                ppuStack_170 = ppuVar26;
                ppuStack_168 = ppuVar29;
                ppuStack_4b0 = (undefined **)0x0;
                ppuStack_4a8 = (undefined **)0x0;
                ppuStack_4b8 = (undefined **)0x0;
                ppuStack_160 = &PTR_DAT_110af4b00;
                lStack_158 = lVar30;
                uStack_150 = uVar37;
                uStack_148 = uVar6;
                lStack_498 = 0;
                uStack_48c = 0;
                uStack_490 = 0;
                uStack_488 = 0;
                puVar18 = (undefined8 *)0x430;
                uStack_480 = ppuVar36;
                uStack_478 = ppuVar39;
                uStack_218 = uStack_558;
                uStack_20e = uStack_54e;
                uStack_1a0 = bVar14;
                __Znwm();
                puVar18[2] = 0;
                puVar18[1] = 0x200000006;
                *(undefined2 *)(puVar18 + 3) = 4;
                puVar18[5] = 0;
                puVar18[4] = 0;
                puVar18[7] = 0;
                puVar18[6] = 0;
                puVar18[9] = 0;
                puVar18[8] = 0;
                puVar18[0xb] = 0;
                puVar18[10] = 0;
                puVar18[0xd] = 0;
                puVar18[0xc] = 0;
                puVar18[0xf] = 0;
                puVar18[0xe] = 0;
                puVar18[0x10] = 0;
                puVar18[0x11] = puVar18 + 3;
                puVar18[0x12] = 0;
                *(undefined1 *)(puVar18 + 0x13) = 0;
                *(undefined1 *)(puVar18 + 0x16) = 0;
                ppuVar20 = (undefined **)(puVar18 + 0x18);
                *puVar18 = &PTR_DAT_110c6db80;
                FUN_10acfa06c(ppuVar20,&uStack_480);
                *(undefined1 *)(puVar18 + 0x82) = 1;
                puVar18[0x84] = 0;
                ppuStack_130 = ppuVar20;
                ppuStack_128 = (undefined **)puVar18;
                puStack_120 = puVar18;
                FUN_10acf761c(&uStack_480);
                ppuStack_118 = (undefined **)FUN_10acfa35c;
              }
              else {
                plStack_a98 = (long *)0x0;
                (**(code **)(*plVar33 + 0x28))(plVar33,0,&plStack_a98);
                uVar40 = uStack_5c8;
                plVar21 = plStack_698;
                uVar37 = uStack_6a0;
                if (plStack_a98 != (long *)0x0) {
                  func_0x0001092af97c(&plStack_a98);
                  goto LAB_10acf59b8;
                }
                uStack_478 = ppuStack_7b8;
                uStack_480 = uStack_7c0;
                uStack_7c0 = (undefined **)0x0;
                ppuStack_7b8 = (undefined **)0x0;
                puStack_470 = uStack_7b0;
                puStack_460 = puStack_7a0;
                puStack_448 = puStack_788;
                puStack_450 = puStack_790;
                ppuStack_438 = ppuStack_778;
                plStack_440 = plStack_780;
                uStack_428 = uStack_768;
                puStack_430 = puStack_770;
                puStack_418 = puStack_758;
                puStack_420 = puStack_760;
                uStack_410 = (undefined4)uStack_750;
                puStack_408 = puStack_748;
                puStack_400 = puStack_740;
                puStack_748 = (undefined *)0x0;
                puStack_740 = (undefined *)0x0;
                puStack_3e8 = puStack_728;
                puStack_3f0 = puStack_730;
                uStack_3d8 = uStack_718;
                puStack_3e0 = puStack_720;
                puStack_3c8 = puStack_708;
                puStack_3d0 = puStack_710;
                puStack_3c0 = puStack_700;
                uStack_370 = uStack_6b0;
                puStack_388 = puStack_6c8;
                puStack_390 = puStack_6d0;
                uStack_378 = uStack_6b8;
                uStack_380 = uStack_6c0;
                puStack_3a8 = puStack_6e8;
                puStack_3b0 = puStack_6f0;
                puStack_398 = puStack_6d8;
                puStack_3a0 = puStack_6e0;
                uStack_6a0 = 0;
                plStack_698 = (long *)0x0;
                plStack_358 = plVar21;
                uStack_360 = uVar37;
                uStack_348 = uStack_688;
                uStack_350 = uStack_690;
                uStack_338 = uStack_678;
                uStack_340 = uStack_680;
                uStack_328 = uStack_668;
                uStack_330 = uStack_670;
                uStack_318 = uStack_658;
                uStack_320 = uStack_660;
                uStack_308 = uStack_648;
                uStack_310 = uStack_650;
                uStack_300 = uStack_640;
                uStack_2b0 = uStack_5f0;
                uStack_2c8 = uStack_608;
                uStack_2d0 = uStack_610;
                uStack_2b8 = uStack_5f8;
                uStack_2c0 = uStack_600;
                uStack_2e8 = uStack_628;
                uStack_2f0 = uStack_630;
                uStack_2d8 = uStack_618;
                uStack_2e0 = uStack_620;
                uStack_2a0 = uStack_5e0;
                puStack_290 = puStack_5d0;
                puStack_298 = puStack_5d8;
                puStack_5d8 = (undefined *)0x0;
                puStack_5d0 = (undefined *)0x0;
                uStack_5c8 = 0;
                lStack_278 = lStack_5b8;
                lStack_280 = lStack_5c0;
                uStack_288 = uVar40;
                uStack_270 = uStack_5b0;
                lStack_5c0 = 0;
                lStack_5b8 = 0;
                uStack_5b0 = 0;
                lStack_260 = lStack_5a0;
                lStack_268 = lStack_5a8;
                uStack_258 = uStack_598;
                lStack_5a8 = 0;
                lStack_5a0 = 0;
                uStack_598 = 0;
                uStack_250 = uStack_590;
                uStack_20e = uStack_54e;
                uStack_228 = uStack_568;
                uStack_230 = uStack_570;
                uStack_218 = uStack_558;
                uStack_220 = uStack_560;
                uStack_238 = uStack_578;
                uStack_240 = uStack_580;
                uStack_200 = uStack_200 & 0xffffffffffffff00;
                uStack_1f0 = cStack_530 == '\x01';
                if ((bool)uStack_1f0) {
                  plStack_1f8 = plStack_538;
                  uStack_200 = uStack_540;
                  uStack_540 = 0;
                  plStack_538 = (long *)0x0;
                }
                ppuStack_1e0 = &PTR_DAT_110af4cf0;
                lStack_1d8 = lStack_518;
                ppuStack_1d0 = (undefined **)CONCAT44(uStack_50c,uStack_510);
                iStack_1c8 = iStack_508;
                iStack_508 = 0;
                lStack_518 = 0;
                uStack_50c = 0;
                uStack_510 = 0;
                ppuStack_1c0 = (undefined **)((ulong)ppuStack_1c0 & 0xffffffffffffff00);
                uStack_1a0 = cStack_4e0 == '\x01';
                if ((bool)uStack_1a0) {
                  ppuStack_1c0 = &PTR_DAT_110af4cf0;
                  ppuStack_1b8 = ppuStack_4f8;
                  uStack_1b0 = uStack_4f0;
                  uStack_1a8 = uStack_4e8;
                  uStack_4f0 = 0;
                  ppuStack_4f8 = (undefined **)0x0;
                  uStack_4e8 = 0;
                }
                ppuStack_198 = &PTR_DAT_110af4c80;
                lStack_190 = lStack_4d0;
                uStack_188 = CONCAT44(uStack_4c4,uStack_4c8);
                iStack_180 = iStack_4c0;
                lStack_4d0 = 0;
                uStack_4c4 = 0;
                uStack_4c8 = 0;
                iStack_4c0 = 0;
                ppuStack_170 = ppuStack_4b0;
                ppuStack_178 = ppuStack_4b8;
                ppuStack_168 = ppuStack_4a8;
                ppuStack_4b0 = (undefined **)0x0;
                ppuStack_4a8 = (undefined **)0x0;
                ppuStack_4b8 = (undefined **)0x0;
                ppuStack_160 = &PTR_DAT_110af4b00;
                lStack_158 = lStack_498;
                uStack_150 = CONCAT44(uStack_48c,uStack_490);
                uStack_148 = uStack_488;
                lStack_498 = 0;
                uStack_48c = 0;
                uStack_490 = 0;
                uStack_488 = 0;
                puVar18 = (undefined8 *)0x430;
                __Znwm();
                puVar18[2] = 0;
                puVar18[1] = 0x200000006;
                *(undefined2 *)(puVar18 + 3) = 4;
                puVar18[5] = 0;
                puVar18[4] = 0;
                puVar18[7] = 0;
                puVar18[6] = 0;
                puVar18[9] = 0;
                puVar18[8] = 0;
                puVar18[0xb] = 0;
                puVar18[10] = 0;
                puVar18[0xd] = 0;
                puVar18[0xc] = 0;
                puVar18[0xf] = 0;
                puVar18[0xe] = 0;
                puVar18[0x10] = 0;
                puVar18[0x11] = puVar18 + 3;
                puVar18[0x12] = 0;
                *(undefined1 *)(puVar18 + 0x13) = 0;
                *(undefined1 *)(puVar18 + 0x16) = 0;
                *puVar18 = &PTR_FUN_110c6db10;
                FUN_10acfa06c(puVar18 + 0x18,&uStack_480);
                *(undefined1 *)(puVar18 + 0x82) = 1;
                puVar18[0x84] = 0;
                puVar18[0x85] = plVar33;
                if (ppuStack_128 != (undefined **)0x0) {
                  ppuVar20 = ppuStack_128 + 1;
                  do {
                    puVar32 = *ppuVar20;
                    cVar4 = '\x01';
                    bVar15 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                    if (bVar15) {
                      *ppuVar20 = puVar32 + -4;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (((ulong)puVar32 & 0x1fffffffc) == 4) {
                    do {
                      puVar32 = *ppuVar20;
                      cVar4 = '\x01';
                      bVar15 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
                      if (bVar15) {
                        *ppuVar20 = puVar32 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (puVar32 + -1 == (undefined *)0x0) {
                      (**(code **)(*ppuStack_128 + 8))();
                    }
                  }
                }
                ppuStack_128 = (undefined **)puVar18;
                if (puStack_120 != (undefined8 *)0x0) {
                  func_0x0001092b4274(&puStack_120);
                }
                ppuStack_130 = (undefined **)(puVar18 + 0x18);
                puStack_120 = puVar18;
                FUN_10acf761c(&uStack_480);
                ppuStack_118 = (undefined **)FUN_10acfa32c;
                __ZNSt13exception_ptrD1Ev(&plStack_a98);
              }
              ppuVar20 = ppuStack_130;
              if (ppuStack_130[0x6c] != (undefined *)0x0) {
                func_0x0001092b4274(ppuStack_130 + 0x6c);
              }
              ppuVar20[0x6c] = (undefined *)puStack_120;
              puStack_120 = (undefined8 *)0x0;
              uStack_480 = ppuStack_118;
              uStack_478 = ppuStack_130;
              puStack_470 = puVar27;
              (**(code **)*puVar27)(puVar27,&uStack_480);
              ppuVar20 = ppuStack_128;
              ppuStack_128 = (undefined **)0x0;
              if ((puStack_120 != (undefined8 *)0x0) &&
                 (func_0x0001092b4274(&puStack_120), ppuStack_128 != (undefined **)0x0)) {
                ppuVar19 = ppuStack_128 + 1;
                do {
                  puVar32 = *ppuVar19;
                  cVar4 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
                  if (bVar15) {
                    *ppuVar19 = puVar32 + -4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (((ulong)puVar32 & 0x1fffffffc) == 4) {
                  do {
                    puVar32 = *ppuVar19;
                    cVar4 = '\x01';
                    bVar15 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
                    if (bVar15) {
                      *ppuVar19 = puVar32 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (puVar32 + -1 == (undefined *)0x0) {
                    (**(code **)(*ppuStack_128 + 8))();
                  }
                }
              }
              plVar21 = (long *)param_1[0x2f];
              if (plVar21 != (long *)0x0) {
                puVar2 = (ulong *)(plVar21 + 1);
                do {
                  uVar23 = *puVar2;
                  cVar4 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar15) {
                    *puVar2 = uVar23 - 4;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((uVar23 & 0x1fffffffc) == 4) {
                  do {
                    uVar23 = *puVar2;
                    cVar4 = '\x01';
                    bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar15) {
                      *puVar2 = uVar23 - 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (uVar23 - 1 == 0) {
                    (**(code **)(*plVar21 + 8))();
                  }
                }
              }
              param_1[0x2f] = (undefined *)ppuVar20;
            }
          }
          FUN_10acf761c(&uStack_7c0);
          FUN_10acf9fbc(&ppuStack_ab0);
        }
        ppuStack_b28 = &PTR_DAT_110af4b00;
        if (lStack_b20 != 0) {
          __ZdaPv();
        }
        ppuStack_b08 = &PTR_DAT_110af4c80;
        if (lStack_b00 != 0) {
          __ZdaPv();
        }
        bVar15 = false;
        if (ppuStack_b70 != (undefined **)0x0) {
          bVar15 = bVar14;
        }
        if (bVar15) {
          __ZdaPv(ppuStack_b70);
        }
        plVar21 = plStack_7d8;
        if ((cStack_7d0 == '\x01') && (plStack_7d8 != (long *)0x0)) {
          plVar33 = plStack_7d8 + 1;
          do {
            lVar30 = *plVar33;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar14) {
              *plVar33 = lVar30 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar30 == 0) {
            (**(code **)(*plStack_7d8 + 0x10))(plStack_7d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
          }
        }
        if (lStack_848 != 0) {
          lStack_840 = lStack_848;
          __ZdlPv();
        }
        if (lStack_860 != 0) {
          lStack_858 = lStack_860;
          __ZdlPv();
        }
        if (puStack_878 != (undefined *)0x0) {
          puStack_870 = puStack_878;
          __ZdlPv();
        }
        plVar21 = plStack_938;
        if (plStack_938 != (long *)0x0) {
          plVar33 = plStack_938 + 1;
          do {
            lVar30 = *plVar33;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar14) {
              *plVar33 = lVar30 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar30 == 0) {
            (**(code **)(*plStack_938 + 0x10))(plStack_938);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
          }
        }
        _free(puStack_9e8);
      }
      unaff_x28 = &PTR_DAT_110af4cf0;
      ppuStack_ae8 = &PTR_DAT_110af4cf0;
      if (lStack_ae0 != 0) {
        __ZdaPv();
      }
    }
  }
  else if ((param_1[0x2f] == (undefined *)0x0) ||
          (((uint)*(undefined8 *)(param_1[0x2f] + 0x10) >> 1 & 1) != 0)) {
    dVar35 = (double)param_2[2] - (double)param_1[0x30];
    bVar14 = false;
    bVar15 = false;
    bVar16 = false;
    if (0.0 <= dVar35) {
      bVar14 = false;
      bVar15 = false;
      bVar16 = true;
      if (!NAN(dVar35)) {
        bVar14 = dVar35 < 0.1;
        bVar15 = dVar35 == 0.1;
        bVar16 = false;
      }
    }
    if (!bVar15 && bVar14 == bVar16) goto LAB_10acf3a24;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_b38 = extraout_x10;
LAB_10acf5998:
  ppuStack_ac8 = ppuStack_b38;
  ppuStack_ac0 = unaff_x28;
  ppuStack_ab8 = ppuVar28;
  FUN_10acfa024();
LAB_10acf59b8:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10acf59bc);
  (*pcVar13)();
}



/* Entry: 10acf5d54; end: 10acf5e67;  */

void FUN_10acf5d54(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  FUN_10acf6fe4(param_2);
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar4 = puVar1 + 4;
  puVar1[5] = 0;
  *puVar4 = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)puVar1 = *(undefined4 *)(param_2 + 0x120);
  uVar3 = *(undefined8 *)(param_2 + 0x140);
  puVar1[5] = 0;
  puVar1[6] = 0;
  FUN_10acf6a5c(puVar1 + 1,uVar3);
  FUN_10acf6a5c(puVar4,*(undefined8 *)(param_2 + 0x168));
  for (plVar5 = *(long **)(param_2 + 0x138); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    func_0x00010acf6af4(puVar1 + 1,plVar5 + 3);
  }
  for (plVar5 = *(long **)(param_2 + 0x160); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    uStack_44 = *(undefined4 *)(plVar5 + 2);
    lVar2 = param_2 + 0x128;
    FUN_10acfc1c0(lVar2,uStack_44,&uStack_44);
    func_0x00010acf6af4(puVar4,lVar2 + 0x18);
  }
  if (puVar1[1] == puVar1[2]) {
    uStack_50 = 0;
    func_0x00010a502838(&uStack_50,puVar1);
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 10acf5e68; end: 10acf5e7b;  */

void FUN_10acf5e68(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_30;
  long *plStack_28;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    return;
  }
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10acf6f80(param_1 + 0x20,&uStack_30);
  plVar5 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(long *)(param_1 + 0x160) != 0) {
    func_0x00010a50f6a4(param_1 + 0x148,*(undefined8 *)(param_1 + 0x158));
    *(undefined8 *)(param_1 + 0x158) = 0;
    lVar6 = *(long *)(param_1 + 0x150);
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x148) + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  func_0x0001074b2c74(param_1 + 0x170);
  plVar5 = *(long **)(param_1 + 0x198);
  if (plVar5 != (long *)0x0) {
    puVar2 = (ulong *)(plVar5 + 1);
    do {
      uVar8 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}



/* Entry: 10acf5e7c; end: 10acf5f77;  */

void FUN_10acf5e7c(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10acf6f80(param_1,&uStack_30);
  plVar5 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(long *)(param_1 + 0x140) != 0) {
    func_0x00010a50f6a4(param_1 + 0x128,*(undefined8 *)(param_1 + 0x138));
    *(undefined8 *)(param_1 + 0x138) = 0;
    lVar6 = *(long *)(param_1 + 0x130);
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x128) + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  func_0x0001074b2c74(param_1 + 0x150);
  plVar5 = *(long **)(param_1 + 0x178);
  if (plVar5 != (long *)0x0) {
    puVar2 = (ulong *)(plVar5 + 1);
    do {
      uVar8 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar8 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar8 & 0x1fffffffc) == 4) {
      do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar8 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  return;
}



/* Entry: 10acf5f78; end: 10acf604f;  */

void FUN_10acf5f78(undefined4 *param_1,long *param_2)

{
  long *plVar1;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110be82d0);
  *param_1 = (int)plVar1;
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c6d8b0);
  FUN_10acfbc9c(param_2,param_1 + 2);
  (**(code **)(*param_2 + 0x220))(param_2);
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  FUN_10a4ca870(param_2,&PTR_DAT_110c6d8d0,&lStack_48);
  FUN_10acf6050(param_1,&lStack_48);
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10acf6050; end: 10acf6173;  */

void FUN_10acf6050(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piStack_40;
  long *plStack_38;
  
  FUN_10acf62d4(param_1 + 0x20,param_2[1] - *param_2 >> 2);
  lVar7 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 != lVar7) {
    uVar9 = 0;
    do {
      if ((ulong)(param_2[1] - *param_2 >> 2) <= uVar9) {
LAB_10acf6170:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10acf6174);
        (*pcVar5)();
      }
      puVar8 = *(undefined8 **)(param_1 + 8);
      if (puVar8 != *(undefined8 **)(param_1 + 0x10)) {
        do {
          piStack_40 = (int *)*puVar8;
          if (*piStack_40 == *(int *)(*param_2 + uVar9 * 4)) {
            plStack_38 = (long *)puVar8[1];
            if (plStack_38 != (long *)0x0) {
              plVar1 = plStack_38 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = *plVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              lVar7 = *(long *)(param_1 + 0x20);
              lVar6 = *(long *)(param_1 + 0x28);
            }
            goto LAB_10acf60f8;
          }
          puVar8 = puVar8 + 2;
        } while (puVar8 != *(undefined8 **)(param_1 + 0x10));
      }
      piStack_40 = (int *)0x0;
      plStack_38 = (long *)0x0;
LAB_10acf60f8:
      if ((ulong)(lVar6 - lVar7 >> 4) <= uVar9) goto LAB_10acf6170;
      func_0x00010acf6340(lVar7 + uVar9 * 0x10,&piStack_40);
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)(param_1 + 0x20);
      lVar6 = *(long *)(param_1 + 0x28);
    } while (uVar9 < (ulong)(lVar6 - lVar7 >> 4));
  }
  return;
}



/* Entry: 10acf6174; end: 10acf6273;  */

void FUN_10acf6174(undefined4 *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puStack_38;
  undefined4 *puStack_30;
  
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110be82d0,*param_1);
  FUN_10acf6274(param_2,&PTR_DAT_110c6d8b0,param_1 + 2);
  FUN_109ffe100(&puStack_38,*(long *)(param_1 + 10) - *(long *)(param_1 + 8) >> 4);
  lVar4 = *(long *)(param_1 + 10) - (long)*(undefined8 **)(param_1 + 8);
  if (lVar4 == 0) {
    lVar2 = (long)puStack_30 - (long)puStack_38;
  }
  else {
    lVar4 = lVar4 >> 4;
    lVar2 = (long)puStack_30 - (long)puStack_38;
    lVar5 = lVar2 >> 2;
    puVar3 = *(undefined8 **)(param_1 + 8);
    puVar6 = puStack_38;
    do {
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10acf6258);
        (*pcVar1)();
      }
      *puVar6 = *(undefined4 *)*puVar3;
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 2;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
  }
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110c6d8d0,puStack_38,lVar2);
  if (puStack_38 != (undefined4 *)0x0) {
    puStack_30 = puStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10acf6274; end: 10acf62d3;  */

void FUN_10acf6274(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x18))();
  lVar1 = param_3[1];
  for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    FUN_10acfc088(param_1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010acf62d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



/* Entry: 10acf62d4; end: 10acf63a3;  */

long * FUN_10acf62d4(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar1 = (long *)param_1[1];
  uVar4 = (long)plVar1 - *param_1 >> 4;
  if (param_2 <= uVar4) {
    if (param_2 < uVar4) {
      plVar2 = (long *)(*param_1 + param_2 * 0x10);
      while (plVar1 != plVar2) {
        plVar1 = plVar1 + -2;
        func_0x00010a26e868();
      }
      param_1[1] = (long)plVar2;
    }
    return plVar1;
  }
  param_2 = param_2 - uVar4;
  plVar1 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar1 >> 4) < param_2) {
    lVar7 = (long)plVar1 - *param_1;
    uVar4 = param_2 + (lVar7 >> 4);
    if (uVar4 >> 0x3c != 0) {
      FUN_10a26e820();
      lVar7 = param_1[1];
      lVar6 = param_1[2];
      while (lVar6 != lVar7) {
        param_1[2] = lVar6 + -0x10;
        func_0x00010a26e868();
        lVar6 = param_1[2];
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    uVar3 = param_1[2] - *param_1;
    uVar5 = (long)uVar3 >> 3;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    if (0x7fffffffffffffef < uVar3) {
      uVar5 = 0xfffffffffffffff;
    }
    plStack_48 = param_1;
    if (uVar5 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a26e834();
    }
    lVar7 = (long)plVar1 + lVar7;
    _bzero(lVar7,param_2 * 0x10);
    lVar6 = lVar7 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lStack_68 = *param_1;
    *param_1 = lVar6;
    param_1[1] = lVar7 + param_2 * 0x10;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar1 + uVar5 * 2);
    plVar2 = &lStack_68;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    FUN_10acf96a4(plVar2);
  }
  else {
    plVar2 = param_1;
    if (param_2 != 0) {
      plVar2 = plVar1;
      _bzero(plVar1,param_2 * 0x10);
      plVar1 = plVar1 + param_2 * 2;
    }
    param_1[1] = (long)plVar1;
  }
  return plVar2;
}



/* Entry: 10acf63a4; end: 10acf6717;  */

void FUN_10acf63a4(long param_1,long param_2,uint *param_3,char *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar9;
  undefined8 *extraout_x8;
  undefined4 uStack_110;
  undefined2 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d0;
  undefined4 uStack_cc;
  undefined1 uStack_c8;
  undefined1 uStack_bc;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  long lStack_58;
  long *plVar8;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_b8 = param_2;
  if ((param_4[0x1d] != '\x01') || ((param_4[0x1c] & 1U) == 0)) {
    uStack_98 = (code *)CONCAT71(uStack_98._1_7_,param_4[1]);
    plVar5 = &lStack_b8;
    func_0x0001098ac018(plVar5,&UNK_10e4c90b0,0x29,&uStack_98,0,0);
    *param_3 = (uint)plVar5;
    if ((uint)plVar5 >> 0x1d != 2) goto LAB_10acf6668;
  }
  if ((**(int **)(param_1 + 0x1c8) == 1) ||
     ((param_4[0x1d] == '\x01' && ((param_4[0x1c] & 1U) != 0)))) {
    *(bool *)(param_1 + 0x1a0) = *(int *)(*(long *)(param_1 + 0x1c0) + 4) == 0;
    *(undefined1 *)(param_1 + 0x1bc) = **(undefined1 **)(param_1 + 0x1d0);
    uStack_d0 = 0;
    uStack_d8 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    lStack_f0 = 0;
    uStack_cc = 0x1000000;
    uStack_c8 = 0;
    uStack_bc = 0;
    plVar5 = &lStack_b8;
    func_0x0001098ac018(plVar5,&UNK_10e4c90da,0x22,&lStack_f0,0,1);
    if (lStack_f0 != 0) {
      lStack_e8 = lStack_f0;
      __ZdlPv();
    }
    uStack_110 = 0x10200;
    uStack_10c = 0;
    uStack_100 = 0;
    lStack_f8 = 0;
    uStack_108 = 0;
    plVar6 = &lStack_b8;
    func_0x0001098ac018(plVar6,&UNK_10e4c90fd,0x1d,&uStack_110,0,1);
    if (lStack_f8 < 0) {
      __ZdlPv(uStack_108);
    }
    uVar2 = (ulong)uStack_98 >> 0x10;
    uStack_98 = (code *)CONCAT62((uint6)uVar2 & 0xffffffffff00,1);
    plVar7 = &lStack_b8;
    func_0x0001098ac018(plVar7,&UNK_10e4c911b,0x23,&uStack_98,0,1);
    if (*param_4 == '\x01') {
      uStack_98 = (code *)0x37fffffff;
      ppuStack_90 = (undefined **)CONCAT44(ppuStack_90._4_4_,0x168);
      uStack_88 = CONCAT35(uStack_88._5_3_,1);
      uVar2 = (ulong)pcStack_80 >> 0x28;
      uVar4 = (uint)pcStack_80;
      pcStack_80._0_5_ = (uint5)(uVar4 & 0xffffff00);
      pcStack_80 = (char *)CONCAT35((int3)uVar2,(uint5)pcStack_80);
      plVar8 = &lStack_b8;
      func_0x0001098ac018(plVar8,&UNK_10e4a7ac1,0x23,&uStack_98,0,1);
      uVar3 = SUB84(plVar8,0);
    }
    else {
      uVar3 = 0x40000000;
    }
    plStack_b0 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    uStack_a0 = 0;
    uStack_98 = (code *)CONCAT44((int)plVar5,0x20000000);
    ppuStack_90 = (undefined **)CONCAT44((int)plVar7,(int)plVar6);
    uStack_88 = CONCAT44(uStack_88._4_4_,uVar3);
    FUN_10a26ebc0(&plStack_b0,0,&uStack_98,(long)&uStack_88 + 4,5);
    uStack_98 = FUN_10acf9748;
    ppuStack_90 = &PTR_FUN_110c6dae8;
    param_2 = param_2 + 0x18;
    uStack_88 = param_1;
    pcStack_80 = param_4;
    FUN_10a4fcca4(param_2,&uStack_98,&plStack_b0);
    uVar4 = (uint)param_2;
    pcVar9 = (code *)*ppuStack_90;
  }
  else {
    plStack_b0 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    uStack_a0 = 0;
    uStack_98 = FUN_10acf96f0;
    param_4 = (char *)&uStack_98;
    ppuStack_90 = &PTR_FUN_110c6dad0;
    param_2 = param_2 + 0x18;
    FUN_10a4fcca4(param_2,&uStack_98,&plStack_b0);
    uVar4 = (uint)param_2;
    pcVar9 = (code *)*ppuStack_90;
  }
  (*pcVar9)(&ppuStack_90);
  plVar5 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plStack_a8 = plStack_b0;
    __ZdlPv();
  }
  *param_3 = uVar4;
LAB_10acf6668:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_90)(param_4 + 8);
  if (plStack_b0 != (long *)0x0) {
    plStack_a8 = plStack_b0;
    __ZdlPv();
  }
  __Unwind_Resume();
  extraout_x8[0xe] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[10] = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0xc] = 0;
  extraout_x8[7] = 0;
  extraout_x8[6] = 0;
  extraout_x8[9] = 0;
  extraout_x8[8] = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  FUN_10acf67fc(extraout_x8,(plVar5[6] - plVar5[5] >> 2) * -0x5555555555555555);
  _memcpy(*extraout_x8,plVar5[5],plVar5[6] - plVar5[5]);
  FUN_10acf67fc(extraout_x8 + 6,(plVar5[0xc] - plVar5[0xb] >> 2) * -0x5555555555555555);
  _memcpy(extraout_x8[6],plVar5[0xb],plVar5[0xc] - plVar5[0xb]);
  func_0x0001074287b0(extraout_x8 + 3,plVar5[9] - plVar5[8] >> 2);
  lVar1 = plVar5[9] - plVar5[8];
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(extraout_x8[3],plVar5[8],lVar1);
    return;
  }
  return;
}



/* Entry: 10acf6718; end: 10acf67fb;  */

void FUN_10acf6718(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_10acf67fc(param_1,(*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28) >> 2) *
                        -0x5555555555555555);
  _memcpy(*param_1,*(long *)(param_2 + 0x28),*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28));
  FUN_10acf67fc(param_1 + 6,
                (*(long *)(param_2 + 0x60) - *(long *)(param_2 + 0x58) >> 2) * -0x5555555555555555);
  _memcpy(param_1[6],*(long *)(param_2 + 0x58),*(long *)(param_2 + 0x60) - *(long *)(param_2 + 0x58)
         );
  func_0x0001074287b0(param_1 + 3,*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 2);
  lVar1 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_1[3],*(long *)(param_2 + 0x40),lVar1);
    return;
  }
  return;
}



/* Entry: 10acf67fc; end: 10acf6837;  */

void FUN_10acf67fc(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  lVar4 = param_1[1] - *param_1 >> 2;
  bVar1 = param_2 < (ulong)(lVar4 * -0x5555555555555555);
  uVar3 = param_2 + lVar4 * 0x5555555555555555;
  if (bVar1 || uVar3 == 0) {
    if (bVar1) {
      param_1[1] = *param_1 + param_2 * 0xc;
    }
    return;
  }
  puVar7 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar7 >> 2) * -0x5555555555555555) < uVar3) {
    puVar2 = (undefined8 *)*param_1;
    lVar4 = (long)puVar7 - (long)puVar2;
    uVar8 = uVar3 + (lVar4 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar8) {
      FUN_10aceb9b0();
      uVar8 = uVar3;
      if (uVar3 != param_3) {
        do {
          FUN_10acf9ac4(param_4,uVar8);
          uVar8 = uVar8 + 0x78;
          param_4 = param_4 + 0x78;
        } while (uVar8 != param_3);
        do {
          FUN_10aceb5f8(uVar3);
          uVar3 = uVar3 + 0x78;
        } while (uVar3 != param_3);
      }
      return;
    }
    lVar5 = param_1[2] - (long)puVar2 >> 2;
    uVar10 = lVar5 * 0x5555555555555556;
    if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
      uVar10 = uVar8;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar10 = 0x1555555555555555;
    }
    if (uVar10 == 0) {
      plVar6 = (long *)0x0;
      lVar5 = lVar4;
    }
    else {
      plVar6 = param_1;
      FUN_10aceb9c4();
      puVar2 = (undefined8 *)*param_1;
      puVar7 = (undefined8 *)param_1[1];
      lVar5 = (long)puVar7 - (long)puVar2;
    }
    puVar9 = (undefined8 *)((long)plVar6 + (lVar4 - lVar5));
    puVar11 = puVar9;
    if (puVar2 != puVar7) {
      do {
        uVar12 = *puVar2;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar2 + 1);
        *puVar11 = uVar12;
        puVar2 = (undefined8 *)((long)puVar2 + 0xc);
        puVar11 = (undefined8 *)((long)puVar11 + 0xc);
      } while (puVar2 != puVar7);
      puVar2 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar9;
    param_1[1] = (long)plVar6 + ((uVar3 * 0xc) / 0xc) * 0xc + lVar4;
    param_1[2] = (long)plVar6 + uVar10 * 0xc;
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    param_1[1] = (long)puVar7 + ((uVar3 * 0xc) / 0xc) * 0xc;
  }
  return;
}



/* Entry: 10acf6838; end: 10acf693f;  */

void FUN_10acf6838(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    lVar2 = *(long *)(param_2 + 0x28);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (lVar1 != lVar2) {
      FUN_10acf6940(param_1,lVar2 - lVar1 >> 4);
      puVar3 = *(undefined8 **)(param_2 + 0x28);
      for (puVar4 = *(undefined8 **)(param_2 + 0x20); puVar4 != puVar3; puVar4 = puVar4 + 2) {
        FUN_10acf6718(&lStack_a8,*puVar4);
        FUN_10acf6a18(param_1,&lStack_a8);
        if (lStack_48 != 0) {
          lStack_40 = lStack_48;
          __ZdlPv();
        }
        if (lStack_60 != 0) {
          lStack_58 = lStack_60;
          __ZdlPv();
        }
        if (lStack_78 != 0) {
          lStack_70 = lStack_78;
          __ZdlPv();
        }
        if (lStack_90 != 0) {
          lStack_88 = lStack_90;
          __ZdlPv();
        }
        if (lStack_a8 != 0) {
          lStack_a0 = lStack_a8;
          __ZdlPv();
        }
      }
    }
  }
  return;
}



/* Entry: 10acf6940; end: 10acf6a17;  */

void FUN_10acf6940(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[2] - lVar3 >> 3) * -0x1111111111111111) < param_2) {
    if (0x222222222222222 < param_2) {
      FUN_10aceb894();
      FUN_10acf9b68(&plStack_58);
      __Unwind_Resume();
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        FUN_10acf9ac4(uVar1);
        plVar2 = (long *)(uVar1 + 0x78);
      }
      else {
        plVar2 = param_1;
        FUN_10acf9bb4();
      }
      param_1[1] = (long)plVar2;
      return;
    }
    lVar4 = param_1[1];
    plVar2 = param_1;
    plStack_38 = param_1;
    FUN_10aceb8a8();
    lVar3 = (long)plVar2 + (lVar4 - lVar3);
    lVar4 = lVar3 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_50 = (long *)lVar3;
    plStack_48 = (long *)lVar3;
    plStack_40 = plVar2 + param_2 * 0xf;
    func_0x00010acf9a5c(param_1,*param_1,param_1[1],lVar4);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar4;
    param_1[1] = lVar3;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + param_2 * 0xf);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    FUN_10acf9b68(&plStack_58);
  }
  return;
}



/* Entry: 10acf6a18; end: 10acf6a5b;  */

void FUN_10acf6a18(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10acf9ac4(uVar1);
    lVar2 = uVar1 + 0x78;
  }
  else {
    lVar2 = param_1;
    FUN_10acf9bb4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10acf6a5c; end: 10acf6c0b;  */

undefined *** FUN_10acf6a5c(undefined ***param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined **ppuStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined **ppuStack_398;
  undefined *puStack_390;
  undefined **ppuStack_388;
  undefined *puStack_350;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined **ppuStack_310;
  undefined *puStack_308;
  undefined **ppuStack_300;
  code *pcStack_2c8;
  undefined **appuStack_2c0 [7];
  undefined **ppuStack_288;
  undefined *puStack_280;
  undefined **ppuStack_278;
  long alStack_240 [19];
  undefined1 auStack_1a8 [8];
  undefined8 *apuStack_1a0 [7];
  undefined1 auStack_168 [72];
  long lStack_120;
  long lStack_118;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined ***pppuStack_98;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined ***pppuStack_38;
  
  ppuVar8 = *param_1;
  if ((undefined8 *)((long)param_1[2] - (long)ppuVar8 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10a26e820();
      ppuVar8 = param_1[1];
      if (ppuVar8 < param_1[2]) {
        lVar10 = param_2[1];
        puVar12 = (undefined *)*param_2;
        ppuVar8[1] = (undefined *)param_2[1];
        *ppuVar8 = puVar12;
        if (lVar10 != 0) {
          plVar7 = (long *)(lVar10 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        ppuVar8 = ppuVar8 + 2;
        pppuVar5 = param_1;
      }
      else {
        lVar10 = (long)ppuVar8 - (long)*param_1;
        uVar1 = (lVar10 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10a26e820();
          lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
          param_1[1] = (undefined **)0x0;
          *param_1 = (undefined **)0x0;
          param_1[3] = (undefined **)0x0;
          param_1[2] = (undefined **)0x0;
          param_1[4] = (undefined **)0x0;
          param_1[5] = (undefined **)0x3ff0000000000000;
          param_1[7] = (undefined **)0x0;
          param_1[8] = (undefined **)0x0;
          param_1[6] = (undefined **)0x0;
          param_1[10] = (undefined **)0x3ff0000000000000;
          param_1[0xb] = (undefined **)0x0;
          param_1[0xc] = (undefined **)0x0;
          param_1[0xd] = (undefined **)0x0;
          param_1[0xe] = (undefined **)0x3ff0000000000000;
          param_1[0xf] = (undefined **)0x0;
          param_1[0x10] = (undefined **)0x0;
          param_1[0x11] = (undefined **)0x0;
          param_1[0x12] = (undefined **)0x3ff0000000000000;
          *(undefined4 *)(param_1 + 0x14) = 0;
          param_1[0x1d] = (undefined **)0x0;
          param_1[0x1c] = (undefined **)0x0;
          param_1[0x1b] = (undefined **)0x0;
          param_1[0x1a] = (undefined **)0x0;
          param_1[0x19] = (undefined **)0x0;
          param_1[0x18] = (undefined **)0x0;
          param_1[0x17] = (undefined **)0x0;
          param_1[0x16] = (undefined **)0x0;
          param_1[0x15] = (undefined **)0x0;
          *(undefined1 *)(param_1 + 0x21) = 0;
          param_1[0x20] = &PTR_DAT_110ba5598;
          param_1[0x22] = (undefined **)0x0;
          *(undefined1 *)(param_1 + 0x23) = 0;
          *(undefined4 *)(param_1 + 0x24) = 0;
          param_1[0x26] = (undefined **)0x0;
          param_1[0x25] = (undefined **)0x0;
          param_1[0x28] = (undefined **)0x0;
          param_1[0x27] = (undefined **)0x0;
          *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
          param_1[0x2b] = (undefined **)0x0;
          param_1[0x2a] = (undefined **)0x0;
          param_1[0x2d] = (undefined **)0x0;
          param_1[0x2c] = (undefined **)0x0;
          *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
          param_1[0x2f] = (undefined **)0x0;
          param_1[0x30] = (undefined **)0x0;
          *(undefined1 *)(param_1 + 0x31) = 0;
          pppuVar5 = param_1;
          FUN_109d1a80c();
          ppuStack_310 = *pppuVar5;
          uStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          uStack_320 = 0;
          uStack_338 = 0;
          uStack_340 = 0;
          puStack_350 = &UNK_1053a6a3c;
          ppuStack_348 = &PTR_DAT_110ae9180;
          pcStack_2c8 = FUN_10a062c68;
          appuStack_2c0[0] = &PTR_DAT_110b9f9f8;
          puStack_280 = &UNK_1053a6a3c;
          ppuStack_278 = &PTR_DAT_110ae9180;
          puStack_308 = &UNK_1053a6a3c;
          ppuStack_300 = &PTR_DAT_110ae9180;
          ppuStack_288 = ppuStack_310;
          FUN_109d1a80c();
          ppuStack_398 = *pppuVar5;
          uStack_3a0 = 0;
          uStack_3a8 = 0;
          uStack_3b0 = 0;
          uStack_3b8 = 0;
          uStack_3c0 = 0;
          uStack_3c8 = 0;
          ppuStack_3d0 = &PTR_DAT_110ae9180;
          puStack_390 = &UNK_1053a6a3c;
          ppuStack_388 = &PTR_DAT_110ae9180;
          uVar6 = 0xb8;
          __Znwm(0xb8);
          FUN_109d228cc();
          FUN_10a061dc8(auStack_1a8,&pcStack_2c8);
          FUN_10a062bb4(alStack_240,uVar6,auStack_1a8);
          if (lStack_120 != 0) {
            func_0x0001092b4274(&lStack_120);
          }
          func_0x0001092ba41c(auStack_168);
          (*(code *)*apuStack_1a0[0])(apuStack_1a0);
          plVar7 = alStack_240;
          FUN_10a062f08(param_1 + 0x32);
          FUN_10a062c88(alStack_240);
          func_0x0001092ba41c(&ppuStack_398);
          (*(code *)*ppuStack_3d0)(&ppuStack_3d0);
          func_0x0001092ba41c(&ppuStack_288);
          (*(code *)*appuStack_2c0[0])(appuStack_2c0);
          func_0x0001092ba41c(&ppuStack_310);
          pppuVar5 = &ppuStack_348;
          (*(code *)*ppuStack_348)();
          *(undefined1 *)(param_1 + 0x34) = 1;
          param_1[0x35] = (undefined **)0x0;
          param_1[0x36] = (undefined **)0x0;
          *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
          *(undefined1 *)((long)param_1 + 0x1bc) = 0;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
            return param_1;
          }
          ___stack_chk_fail();
          FUN_10a062c88(alStack_240);
          func_0x0001092ba41c(&ppuStack_398);
          (*(code *)*ppuStack_3d0)(&ppuStack_3d0);
          func_0x0001092ba41c(&ppuStack_288);
          (*(code *)*appuStack_2c0[0])(appuStack_2c0);
          func_0x0001092ba41c(&ppuStack_310);
          (*(code *)*ppuStack_348)(&ppuStack_348);
          ppuVar8 = param_1[0x2f];
          if (ppuVar8 != (undefined **)0x0) {
            ppuVar9 = ppuVar8 + 1;
            do {
              puVar12 = *ppuVar9;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
              if (bVar4) {
                *ppuVar9 = puVar12 + -4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (((ulong)puVar12 & 0x1fffffffc) == 4) {
              do {
                puVar12 = *ppuVar9;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
                if (bVar4) {
                  *ppuVar9 = puVar12 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (puVar12 + -1 == (undefined *)0x0) {
                (**(code **)(*ppuVar8 + 8))();
              }
            }
          }
          func_0x00010726f2e4(param_1 + 0x2a);
          func_0x00010a50f66c(param_1 + 0x25);
          FUN_10a4cb620(param_1 + 2);
          func_0x00010a50f6e0(param_1);
          __Unwind_Resume();
          ppuVar14 = (undefined **)plVar7[1];
          ppuVar9 = (undefined **)*plVar7;
          *plVar7 = 0;
          plVar7[1] = 0;
          ppuVar8 = pppuVar5[1];
          pppuVar5[1] = ppuVar14;
          *pppuVar5 = ppuVar9;
          if (ppuVar8 != (undefined **)0x0) {
            ppuVar9 = ppuVar8 + 1;
            do {
              puVar12 = *ppuVar9;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
              if (bVar4) {
                *ppuVar9 = puVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (puVar12 == (undefined *)0x0) {
              (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
            }
          }
          return pppuVar5;
        }
        uVar11 = (long)param_1[2] - (long)*param_1;
        uVar13 = (long)uVar11 >> 3;
        if (uVar13 <= uVar1) {
          uVar13 = uVar1;
        }
        if (0x7fffffffffffffef < uVar11) {
          uVar13 = 0xfffffffffffffff;
        }
        pppuVar5 = param_1;
        pppuStack_98 = param_1;
        FUN_10a26e834();
        puVar2 = (undefined8 *)((long)pppuVar5 + lVar10);
        lVar10 = param_2[1];
        uVar6 = *param_2;
        puVar2[1] = param_2[1];
        *puVar2 = uVar6;
        if (lVar10 != 0) {
          plVar7 = (long *)(lVar10 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        ppuVar8 = (undefined **)(puVar2 + 2);
        ppuVar9 = (undefined **)((long)puVar2 - ((long)param_1[1] - (long)*param_1));
        _memcpy(ppuVar9);
        ppuStack_b8 = *param_1;
        *param_1 = ppuVar9;
        param_1[1] = ppuVar8;
        ppuStack_a0 = param_1[2];
        param_1[2] = (undefined **)(pppuVar5 + uVar13 * 2);
        pppuVar5 = &ppuStack_b8;
        ppuStack_b0 = ppuStack_b8;
        ppuStack_a8 = ppuStack_b8;
        FUN_10acf96a4(pppuVar5);
      }
      param_1[1] = ppuVar8;
      return pppuVar5;
    }
    ppuVar9 = param_1[1];
    pppuVar5 = param_1;
    pppuStack_38 = param_1;
    FUN_10a26e834();
    ppuVar8 = (undefined **)((long)pppuVar5 + ((long)ppuVar9 - (long)ppuVar8));
    ppuVar9 = (undefined **)((long)ppuVar8 - ((long)param_1[1] - (long)*param_1));
    _memcpy(ppuVar9);
    ppuStack_58 = *param_1;
    *param_1 = ppuVar9;
    param_1[1] = ppuVar8;
    ppuStack_40 = param_1[2];
    param_1[2] = (undefined **)(pppuVar5 + (long)param_2 * 2);
    param_1 = &ppuStack_58;
    ppuStack_50 = ppuStack_58;
    ppuStack_48 = ppuStack_58;
    FUN_10acf96a4(param_1);
  }
  return param_1;
}



/* Entry: 10acf6c0c; end: 10acf6f7f;  */

undefined *** FUN_10acf6c0c(undefined ***param_1)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined **ppuStack_2d8;
  undefined *puStack_2d0;
  undefined **ppuStack_2c8;
  undefined *puStack_290;
  undefined **ppuStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  code *pcStack_208;
  undefined **appuStack_200 [7];
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 auStack_180 [19];
  undefined1 auStack_e8 [8];
  undefined8 *apuStack_e0 [7];
  undefined1 auStack_a8 [72];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = (undefined **)0x0;
  *param_1 = (undefined **)0x0;
  param_1[3] = (undefined **)0x0;
  param_1[2] = (undefined **)0x0;
  param_1[4] = (undefined **)0x0;
  param_1[5] = (undefined **)0x3ff0000000000000;
  param_1[7] = (undefined **)0x0;
  param_1[8] = (undefined **)0x0;
  param_1[6] = (undefined **)0x0;
  param_1[10] = (undefined **)0x3ff0000000000000;
  param_1[0xb] = (undefined **)0x0;
  param_1[0xc] = (undefined **)0x0;
  param_1[0xd] = (undefined **)0x0;
  param_1[0xe] = (undefined **)0x3ff0000000000000;
  param_1[0xf] = (undefined **)0x0;
  param_1[0x10] = (undefined **)0x0;
  param_1[0x11] = (undefined **)0x0;
  param_1[0x12] = (undefined **)0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x1d] = (undefined **)0x0;
  param_1[0x1c] = (undefined **)0x0;
  param_1[0x1b] = (undefined **)0x0;
  param_1[0x1a] = (undefined **)0x0;
  param_1[0x19] = (undefined **)0x0;
  param_1[0x18] = (undefined **)0x0;
  param_1[0x17] = (undefined **)0x0;
  param_1[0x16] = (undefined **)0x0;
  param_1[0x15] = (undefined **)0x0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x20] = &PTR_DAT_110ba5598;
  param_1[0x22] = (undefined **)0x0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x26] = (undefined **)0x0;
  param_1[0x25] = (undefined **)0x0;
  param_1[0x28] = (undefined **)0x0;
  param_1[0x27] = (undefined **)0x0;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  param_1[0x2b] = (undefined **)0x0;
  param_1[0x2a] = (undefined **)0x0;
  param_1[0x2d] = (undefined **)0x0;
  param_1[0x2c] = (undefined **)0x0;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  param_1[0x2f] = (undefined **)0x0;
  param_1[0x30] = (undefined **)0x0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  pppuVar3 = param_1;
  FUN_109d1a80c();
  ppuStack_250 = *pppuVar3;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  puStack_290 = &UNK_1053a6a3c;
  ppuStack_288 = &PTR_DAT_110ae9180;
  pcStack_208 = FUN_10a062c68;
  appuStack_200[0] = &PTR_DAT_110b9f9f8;
  puStack_1c0 = &UNK_1053a6a3c;
  ppuStack_1b8 = &PTR_DAT_110ae9180;
  puStack_248 = &UNK_1053a6a3c;
  ppuStack_240 = &PTR_DAT_110ae9180;
  ppuStack_1c8 = ppuStack_250;
  FUN_109d1a80c();
  ppuStack_2d8 = *pppuVar3;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_308 = 0;
  ppuStack_310 = &PTR_DAT_110ae9180;
  puStack_2d0 = &UNK_1053a6a3c;
  ppuStack_2c8 = &PTR_DAT_110ae9180;
  uVar4 = 0xb8;
  __Znwm(0xb8);
  FUN_109d228cc();
  FUN_10a061dc8(auStack_e8,&pcStack_208);
  FUN_10a062bb4(auStack_180,uVar4,auStack_e8);
  if (lStack_60 != 0) {
    func_0x0001092b4274(&lStack_60);
  }
  func_0x0001092ba41c(auStack_a8);
  (*(code *)*apuStack_e0[0])(apuStack_e0);
  puVar6 = auStack_180;
  FUN_10a062f08(param_1 + 0x32);
  FUN_10a062c88(auStack_180);
  func_0x0001092ba41c(&ppuStack_2d8);
  (*(code *)*ppuStack_310)(&ppuStack_310);
  func_0x0001092ba41c(&ppuStack_1c8);
  (*(code *)*appuStack_200[0])(appuStack_200);
  func_0x0001092ba41c(&ppuStack_250);
  pppuVar3 = &ppuStack_288;
  (*(code *)*ppuStack_288)();
  *(undefined1 *)(param_1 + 0x34) = 1;
  param_1[0x35] = (undefined **)0x0;
  param_1[0x36] = (undefined **)0x0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1bc) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10a062c88(auStack_180);
  func_0x0001092ba41c(&ppuStack_2d8);
  (*(code *)*ppuStack_310)(&ppuStack_310);
  func_0x0001092ba41c(&ppuStack_1c8);
  (*(code *)*appuStack_200[0])(appuStack_200);
  func_0x0001092ba41c(&ppuStack_250);
  (*(code *)*ppuStack_288)(&ppuStack_288);
  ppuVar5 = param_1[0x2f];
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar8 = ppuVar5 + 1;
    do {
      puVar7 = *ppuVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar2) {
        *ppuVar8 = puVar7 + -4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (((ulong)puVar7 & 0x1fffffffc) == 4) {
      do {
        puVar7 = *ppuVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
        if (bVar2) {
          *ppuVar8 = puVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (puVar7 + -1 == (undefined *)0x0) {
        (**(code **)(*ppuVar5 + 8))();
      }
    }
  }
  func_0x00010726f2e4(param_1 + 0x2a);
  func_0x00010a50f66c(param_1 + 0x25);
  FUN_10a4cb620(param_1 + 2);
  func_0x00010a50f6e0(param_1);
  __Unwind_Resume();
  ppuVar9 = (undefined **)puVar6[1];
  ppuVar8 = (undefined **)*puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  ppuVar5 = pppuVar3[1];
  pppuVar3[1] = ppuVar9;
  *pppuVar3 = ppuVar8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar8 = ppuVar5 + 1;
    do {
      puVar7 = *ppuVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar2) {
        *ppuVar8 = puVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
    }
  }
  return pppuVar3;
}



/* Entry: 10acf6f80; end: 10acf6fe3;  */

undefined8 * FUN_10acf6f80(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10acf6fe4; end: 10acf761b;  */

void FUN_10acf6fe4(long param_1)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  code *pcVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  uint *puVar23;
  uint *puVar24;
  undefined8 uVar25;
  uint *puStack_a0;
  uint *puStack_98;
  undefined8 uStack_90;
  uint *puStack_88;
  long *plStack_80;
  long lStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((*(long *)(param_1 + 0x178) != 0) &&
     (((uint)*(undefined8 *)(*(long *)(param_1 + 0x178) + 0x10) >> 1 & 1) != 0)) {
    func_0x0001092af8bc(param_1 + 0x178);
    lVar12 = *(long *)(param_1 + 0x178);
    if ((*(byte *)(lVar12 + 0xb0) & 1) == 0) {
LAB_10acf75f4:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10acf75f8);
      (*pcVar10)();
    }
    puVar23 = *(uint **)(lVar12 + 0x98);
    uVar25 = *(undefined8 *)(lVar12 + 0xa8);
    puVar24 = *(uint **)(lVar12 + 0xa0);
    *(undefined8 *)(lVar12 + 0xa0) = 0;
    *(undefined8 *)(lVar12 + 0xa8) = 0;
    *(undefined8 *)(lVar12 + 0x98) = 0;
    plVar11 = *(long **)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (plVar11 != (long *)0x0) {
      puVar1 = (ulong *)(plVar11 + 1);
      do {
        uVar14 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar14 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar14 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar11 + 8))();
        }
      }
    }
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    lStack_78 = 0;
    puStack_a0 = puVar23;
    puStack_98 = puVar24;
    uStack_90 = uVar25;
    FUN_10acfa9d4(&lStack_78);
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
    func_0x0001074b2c74(param_1 + 0x150);
    if (puVar23 != puVar24) {
      do {
        uVar3 = *puVar23;
        uVar14 = (ulong)uVar3;
        uVar15 = *(ulong *)(param_1 + 0x130);
        uVar13 = (uint)uVar15;
        if (*(long *)(puVar23 + 2) == *(long *)(puVar23 + 4)) {
          if (uVar15 != 0) {
            uVar16 = uVar15 - 1;
            if ((uVar15 & uVar16) == 0) {
              uVar17 = (ulong)(uVar13 - 1 & uVar3);
            }
            else {
              uVar17 = uVar14;
              if (uVar15 <= uVar14) {
                uVar7 = 0;
                if (uVar13 != 0) {
                  uVar7 = uVar3 / uVar13;
                }
                uVar17 = (ulong)(uVar3 - uVar7 * uVar13);
              }
            }
            lVar12 = *(long *)(param_1 + 0x128);
            puVar20 = *(undefined8 **)(lVar12 + uVar17 * 8);
            if ((puVar20 != (undefined8 *)0x0) &&
               (plVar11 = (long *)*puVar20, plVar11 != (long *)0x0)) {
LAB_10acf71d4:
              uVar19 = plVar11[1];
              if (uVar19 == uVar14) {
                if (*(uint *)(plVar11 + 2) != uVar3) goto LAB_10acf7218;
                if ((uVar15 & uVar16) == 0) {
                  uVar14 = uVar16 & uVar14;
                }
                else if (uVar15 <= uVar14) {
                  uVar17 = 0;
                  if (uVar15 != 0) {
                    uVar17 = uVar14 / uVar15;
                  }
                  uVar14 = uVar14 - uVar17 * uVar15;
                }
                lVar21 = *plVar11;
                plVar9 = *(long **)(lVar12 + uVar14 * 8);
                do {
                  plVar22 = plVar9;
                  plVar9 = (long *)*plVar22;
                } while ((long *)*plVar22 != plVar11);
                if (plVar22 == (long *)(param_1 + 0x138)) {
LAB_10acf752c:
                  if (lVar21 == 0) {
LAB_10acf7560:
                    *(undefined8 *)(lVar12 + uVar14 * 8) = 0;
                    lVar21 = *plVar11;
                    goto LAB_10acf7568;
                  }
                  uVar17 = *(ulong *)(lVar21 + 8);
                  if ((uVar15 & uVar16) == 0) {
                    uVar19 = uVar17 & uVar16;
                  }
                  else {
                    uVar19 = uVar17;
                    if (uVar15 <= uVar17) {
                      uVar19 = 0;
                      if (uVar15 != 0) {
                        uVar19 = uVar17 / uVar15;
                      }
                      uVar19 = uVar17 - uVar19 * uVar15;
                    }
                  }
                  if (uVar19 != uVar14) goto LAB_10acf7560;
LAB_10acf7570:
                  if ((uVar15 & uVar16) == 0) {
                    uVar17 = uVar17 & uVar16;
                  }
                  else if (uVar15 <= uVar17) {
                    uVar16 = 0;
                    if (uVar15 != 0) {
                      uVar16 = uVar17 / uVar15;
                    }
                    uVar17 = uVar17 - uVar16 * uVar15;
                  }
                  if (uVar17 != uVar14) {
                    *(long **)(*(long *)(param_1 + 0x128) + uVar17 * 8) = plVar22;
                    lVar21 = *plVar11;
                  }
                }
                else {
                  uVar17 = plVar22[1];
                  if ((uVar15 & uVar16) == 0) {
                    uVar17 = uVar17 & uVar16;
                  }
                  else if (uVar15 <= uVar17) {
                    uVar19 = 0;
                    if (uVar15 != 0) {
                      uVar19 = uVar17 / uVar15;
                    }
                    uVar17 = uVar17 - uVar19 * uVar15;
                  }
                  if (uVar17 != uVar14) goto LAB_10acf752c;
LAB_10acf7568:
                  if (lVar21 != 0) {
                    uVar17 = *(ulong *)(lVar21 + 8);
                    goto LAB_10acf7570;
                  }
                }
                *plVar22 = lVar21;
                *plVar11 = 0;
                *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + -1;
                func_0x00010a26e868(plVar11 + 3);
                __ZdlPv(plVar11);
              }
              else {
                if ((uVar15 & uVar16) == 0) {
                  uVar19 = uVar19 & uVar16;
                }
                else if (uVar15 <= uVar19) {
                  uVar8 = 0;
                  if (uVar15 != 0) {
                    uVar8 = uVar19 / uVar15;
                  }
                  uVar19 = uVar19 - uVar8 * uVar15;
                }
                if (uVar19 == uVar17) goto LAB_10acf7218;
              }
            }
          }
        }
        else {
          if (uVar15 != 0) {
            uVar16 = uVar15 - 1;
            if ((uVar15 & uVar16) == 0) {
              uVar17 = (ulong)(uVar13 - 1 & uVar3);
            }
            else {
              uVar17 = uVar14;
              if (uVar15 <= uVar14) {
                uVar7 = 0;
                if (uVar13 != 0) {
                  uVar7 = uVar3 / uVar13;
                }
                uVar17 = (ulong)(uVar3 - uVar7 * uVar13);
              }
            }
            plVar11 = *(long **)(*(long *)(param_1 + 0x128) + uVar17 * 8);
            if (plVar11 != (long *)0x0) {
              do {
                while( true ) {
                  plVar11 = (long *)*plVar11;
                  if (plVar11 == (long *)0x0) goto LAB_10acf7234;
                  uVar19 = plVar11[1];
                  if (uVar19 != uVar14) break;
                  if (*(uint *)(plVar11 + 2) == uVar3) {
                    func_0x000107270fb0(param_1 + 0x150,puVar23,puVar23);
                    goto LAB_10acf7234;
                  }
                }
                if ((uVar15 & uVar16) == 0) {
                  uVar19 = uVar19 & uVar16;
                }
                else if (uVar15 <= uVar19) {
                  uVar8 = 0;
                  if (uVar15 != 0) {
                    uVar8 = uVar19 / uVar15;
                  }
                  uVar19 = uVar19 - uVar8 * uVar15;
                }
              } while (uVar19 == uVar17);
            }
          }
LAB_10acf7234:
          plVar11 = (long *)0xd0;
          __Znwm();
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = (long)&PTR_FUN_110c6dd08;
          plVar11[6] = 0;
          plVar11[5] = 0;
          plVar11[7] = 0;
          puStack_88 = (uint *)(plVar11 + 3);
          plVar11[4] = 0;
          puStack_88[0] = 0;
          puStack_88[1] = 0;
          *(undefined4 *)((long)plVar11 + 0x34) = 0x3f800000;
          plVar11[0xb] = 0;
          plVar11[10] = 0;
          plVar11[0xd] = 0;
          plVar11[0xc] = 0;
          plVar11[0xf] = 0;
          plVar11[0xe] = 0;
          plVar11[0x11] = 0;
          plVar11[0x10] = 0;
          plVar11[0x13] = 0;
          plVar11[0x12] = 0;
          plVar11[0x15] = 0;
          plVar11[0x14] = 0;
          plVar11[0x17] = 0;
          plVar11[0x16] = 0;
          plVar11[0x19] = 0;
          plVar11[0x18] = 0;
          plVar11[9] = 0;
          plVar11[8] = 0;
          *puStack_88 = *puVar23;
          plStack_80 = plVar11;
          func_0x0001096b5198(plVar11 + 8,
                              (*(long *)(puVar23 + 4) - *(long *)(puVar23 + 2) >> 2) *
                              -0x5555555555555555);
          if (plVar11[9] == plVar11[8]) goto LAB_10acf75f4;
          _memcpy(plVar11[8],*(long *)(puVar23 + 2),*(long *)(puVar23 + 4) - *(long *)(puVar23 + 2))
          ;
          func_0x0001096b5198(plVar11 + 0xe,
                              (*(long *)(puVar23 + 0x10) - *(long *)(puVar23 + 0xe) >> 2) *
                              -0x5555555555555555);
          if (plVar11[0xf] == plVar11[0xe]) goto LAB_10acf75f4;
          _memcpy(plVar11[0xe],*(long *)(puVar23 + 0xe),
                  *(long *)(puVar23 + 0x10) - *(long *)(puVar23 + 0xe));
          func_0x0001074287b0(plVar11 + 0xb,*(long *)(puVar23 + 10) - *(long *)(puVar23 + 8) >> 2);
          lVar12 = *(long *)(puVar23 + 10) - *(long *)(puVar23 + 8);
          if (lVar12 != 0) {
            _memmove(plVar11[0xb],*(long *)(puVar23 + 8),lVar12);
          }
          if (*(long *)(puVar23 + 0x1a) == *(long *)(puVar23 + 0x1c)) {
            FUN_10acf9cd0(plVar11 + 0x14,
                          (ulong)(*(long *)(puVar23 + 10) - *(long *)(puVar23 + 8) >> 2) / 3,0);
          }
          else {
            FUN_10acf9cd0(plVar11 + 0x14,*(long *)(puVar23 + 0x1c) - *(long *)(puVar23 + 0x1a),0);
            lVar12 = *(long *)(puVar23 + 0x1a);
            lVar21 = *(long *)(puVar23 + 0x1c);
            if (lVar21 != lVar12) {
              uVar14 = 0;
              lVar2 = plVar11[0x14];
              uVar15 = plVar11[0x15] - lVar2;
              do {
                bVar4 = *(byte *)(lVar12 + uVar14);
                if (bVar4 < 3) {
                  if (bVar4 == 1) {
                    if (uVar14 < uVar15) {
                      uVar18 = 3;
                      goto LAB_10acf73b8;
                    }
                    goto LAB_10acf75f4;
                  }
                  if (bVar4 == 2) {
                    if (uVar14 < uVar15) {
                      uVar18 = 1;
                      goto LAB_10acf73b8;
                    }
                    goto LAB_10acf75f4;
                  }
                }
                else {
                  if (bVar4 == 3) {
                    if (uVar15 <= uVar14) goto LAB_10acf75f4;
                    uVar18 = 2;
                  }
                  else if (bVar4 == 4) {
                    if (uVar15 <= uVar14) goto LAB_10acf75f4;
                    uVar18 = 5;
                  }
                  else {
                    if (bVar4 != 5) goto LAB_10acf73bc;
                    if (uVar15 <= uVar14) goto LAB_10acf75f4;
                    uVar18 = 4;
                  }
LAB_10acf73b8:
                  *(undefined1 *)(lVar2 + uVar14) = uVar18;
                }
LAB_10acf73bc:
                uVar14 = uVar14 + 1;
              } while (lVar21 - lVar12 != uVar14);
            }
          }
          if (*(long *)(puVar23 + 0x14) != *(long *)(puVar23 + 0x16)) {
            FUN_10acf9dcc(plVar11 + 0x11,
                          (*(long *)(puVar23 + 0x16) - *(long *)(puVar23 + 0x14)) *
                          -0x5555555555555555);
            _memcpy(plVar11[0x11],*(long *)(puVar23 + 0x14),
                    *(long *)(puVar23 + 0x16) - *(long *)(puVar23 + 0x14));
          }
          plVar11[4] = 0;
          *(undefined4 *)((long)plVar11 + 0x1c) = 0;
          *(undefined4 *)(plVar11 + 7) = 0x42c80000;
          func_0x00010a008f4c(&lStack_78,plVar11[8],
                              (plVar11[9] - plVar11[8] >> 2) * -0x5555555555555555);
          plVar11[0x17] = lStack_78;
          *(undefined4 *)(plVar11 + 0x18) = uStack_70;
          *(ulong *)((long)plVar11 + 0xc4) = CONCAT44(uStack_68,uStack_6c);
          *(undefined4 *)((long)plVar11 + 0xcc) = uStack_64;
          lVar12 = param_1 + 0x128;
          FUN_10acfc1c0(lVar12,*puVar23,puVar23);
          func_0x00010acf6340(lVar12 + 0x18,&puStack_88);
          plVar11 = plStack_80;
          if (plStack_80 != (long *)0x0) {
            plVar9 = plStack_80 + 1;
            do {
              lVar12 = *plVar9;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar6) {
                *plVar9 = lVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_80 + 0x10))(plStack_80);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
        }
LAB_10acf74b0:
        puVar23 = puVar23 + 0x20;
      } while (puVar23 != puVar24);
    }
    FUN_10acfa9d4(&puStack_a0);
  }
  return;
LAB_10acf7218:
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) goto LAB_10acf74b0;
  goto LAB_10acf71d4;
}



/* Entry: 10acf761c; end: 10acf773f;  */

long FUN_10acf761c(long param_1)

{
  *(undefined ***)(param_1 + 800) = &PTR_DAT_110af4b00;
  if (*(long *)(param_1 + 0x328) != 0) {
    __ZdaPv();
  }
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  FUN_10acf9fbc(param_1 + 0x308);
  *(undefined ***)(param_1 + 0x2e8) = &PTR_DAT_110af4c80;
  if (*(long *)(param_1 + 0x2f0) != 0) {
    __ZdaPv();
  }
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (*(char *)(param_1 + 0x2e0) == '\x01') {
    *(undefined ***)(param_1 + 0x2c0) = &PTR_DAT_110af4cf0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      __ZdaPv();
    }
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined4 *)(param_1 + 0x2d8) = 0;
  }
  *(undefined ***)(param_1 + 0x2a0) = &PTR_DAT_110af4cf0;
  if (*(long *)(param_1 + 0x2a8) != 0) {
    __ZdaPv();
  }
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if (*(char *)(param_1 + 0x290) == '\x01') {
    func_0x00010a5020c0(param_1 + 0x280);
  }
  if (*(long *)(param_1 + 0x218) != 0) {
    *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x218);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    *(long *)(param_1 + 0x208) = *(long *)(param_1 + 0x200);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x1e8) != 0) {
    *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1e8);
    __ZdlPv();
  }
  func_0x00010a502068(param_1 + 0x120);
  _free(*(undefined8 *)(param_1 + 0x78));
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10acf7740; end: 10acf785f;  */

void FUN_10acf7740(undefined4 *param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110be82b0,*param_1);
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110be8ef8,param_1 + 1);
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110be8f18,param_1 + 4);
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110c6dba8,param_1 + 8);
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110c6dbc8,param_1 + 0xb);
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110c6dc58,*(long *)(param_1 + 0xe),
             *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe));
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110c6dc78,*(long *)(param_1 + 0x14),
             *(long *)(param_1 + 0x16) - *(long *)(param_1 + 0x14));
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c6d8f0,*(undefined1 *)(param_1 + 0x1a));
                    /* WARNING: Could not recover jumptable at 0x00010acf785c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c6d910,*(undefined1 *)((long)param_1 + 0x69));
  return;
}



/* Entry: 10acf7860; end: 10acf7937;  */

void FUN_10acf7860(undefined4 *param_1,long *param_2)

{
  long *plVar1;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110be82d0);
  *param_1 = (int)plVar1;
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c6d930);
  FUN_10acfc5d4(param_2,param_1 + 2);
  (**(code **)(*param_2 + 0x220))(param_2);
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  FUN_10a4ca870(param_2,&PTR_DAT_110c6d950,&lStack_48);
  FUN_10acf7938(param_1,&lStack_48);
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10acf7938; end: 10acf7a5b;  */

void FUN_10acf7938(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piStack_40;
  long *plStack_38;
  
  FUN_10acf7bbc(param_1 + 0x20,param_2[1] - *param_2 >> 2);
  lVar7 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 != lVar7) {
    uVar9 = 0;
    do {
      if ((ulong)(param_2[1] - *param_2 >> 2) <= uVar9) {
LAB_10acf7a58:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10acf7a5c);
        (*pcVar5)();
      }
      puVar8 = *(undefined8 **)(param_1 + 8);
      if (puVar8 != *(undefined8 **)(param_1 + 0x10)) {
        do {
          piStack_40 = (int *)*puVar8;
          if (*piStack_40 == *(int *)(*param_2 + uVar9 * 4)) {
            plStack_38 = (long *)puVar8[1];
            if (plStack_38 != (long *)0x0) {
              plVar1 = plStack_38 + 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = *plVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              lVar7 = *(long *)(param_1 + 0x20);
              lVar6 = *(long *)(param_1 + 0x28);
            }
            goto LAB_10acf79e0;
          }
          puVar8 = puVar8 + 2;
        } while (puVar8 != *(undefined8 **)(param_1 + 0x10));
      }
      piStack_40 = (int *)0x0;
      plStack_38 = (long *)0x0;
LAB_10acf79e0:
      if ((ulong)(lVar6 - lVar7 >> 4) <= uVar9) goto LAB_10acf7a58;
      func_0x00010acf7c28(lVar7 + uVar9 * 0x10,&piStack_40);
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)(param_1 + 0x20);
      lVar6 = *(long *)(param_1 + 0x28);
    } while (uVar9 < (ulong)(lVar6 - lVar7 >> 4));
  }
  return;
}



/* Entry: 10acf7a5c; end: 10acf7b5b;  */

void FUN_10acf7a5c(undefined4 *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puStack_38;
  undefined4 *puStack_30;
  
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110be82d0,*param_1);
  FUN_10acf7b5c(param_2,&PTR_DAT_110c6d930,param_1 + 2);
  FUN_109ffe100(&puStack_38,*(long *)(param_1 + 10) - *(long *)(param_1 + 8) >> 4);
  lVar4 = *(long *)(param_1 + 10) - (long)*(undefined8 **)(param_1 + 8);
  if (lVar4 == 0) {
    lVar2 = (long)puStack_30 - (long)puStack_38;
  }
  else {
    lVar4 = lVar4 >> 4;
    lVar2 = (long)puStack_30 - (long)puStack_38;
    lVar5 = lVar2 >> 2;
    puVar3 = *(undefined8 **)(param_1 + 8);
    puVar6 = puStack_38;
    do {
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10acf7b40);
        (*pcVar1)();
      }
      *puVar6 = *(undefined4 *)*puVar3;
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 2;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
  }
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110c6d950,puStack_38,lVar2);
  if (puStack_38 != (undefined4 *)0x0) {
    puStack_30 = puStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10acf7b5c; end: 10acf7bbb;  */

void FUN_10acf7b5c(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x18))();
  lVar1 = param_3[1];
  for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    FUN_10acfc954(param_1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010acf7bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



/* Entry: 10acf7bbc; end: 10acf7ddf;  */

long * FUN_10acf7bbc(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar1 = (long *)param_1[1];
  uVar4 = (long)plVar1 - *param_1 >> 4;
  if (param_2 <= uVar4) {
    if (param_2 < uVar4) {
      plVar2 = (long *)(*param_1 + param_2 * 0x10);
      while (plVar1 != plVar2) {
        plVar1 = plVar1 + -2;
        func_0x00010a26e684();
      }
      param_1[1] = (long)plVar2;
    }
    return plVar1;
  }
  param_2 = param_2 - uVar4;
  plVar1 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar1 >> 4) < param_2) {
    lVar7 = (long)plVar1 - *param_1;
    uVar4 = param_2 + (lVar7 >> 4);
    if (uVar4 >> 0x3c != 0) {
      FUN_10a26e63c();
      lVar7 = param_1[1];
      lVar6 = param_1[2];
      while (lVar6 != lVar7) {
        param_1[2] = lVar6 + -0x10;
        func_0x00010a26e684();
        lVar6 = param_1[2];
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    uVar3 = param_1[2] - *param_1;
    uVar5 = (long)uVar3 >> 3;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    if (0x7fffffffffffffef < uVar3) {
      uVar5 = 0xfffffffffffffff;
    }
    plStack_48 = param_1;
    if (uVar5 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a26e650();
    }
    lVar7 = (long)plVar1 + lVar7;
    _bzero(lVar7,param_2 * 0x10);
    lVar6 = lVar7 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lStack_68 = *param_1;
    *param_1 = lVar6;
    param_1[1] = lVar7 + param_2 * 0x10;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar1 + uVar5 * 2);
    plVar2 = &lStack_68;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    FUN_10acfab40(plVar2);
  }
  else {
    plVar2 = param_1;
    if (param_2 != 0) {
      plVar2 = plVar1;
      _bzero(plVar1,param_2 * 0x10);
      plVar1 = plVar1 + param_2 * 2;
    }
    param_1[1] = (long)plVar1;
  }
  return plVar2;
}



/* Entry: 10acf7de0; end: 10acf7feb;  */

void FUN_10acf7de0(long *param_1,long *param_2,long param_3,long *****param_4)

{
  byte *pbVar1;
  ulong *puVar2;
  long ****pppplVar3;
  byte bVar4;
  long *****ppppplVar5;
  undefined4 *puVar6;
  long ****pppplVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  int iVar11;
  long *plVar12;
  long *****ppppplVar13;
  undefined8 uVar14;
  long *****ppppplVar15;
  long ***ppplVar16;
  long lVar17;
  long *plVar18;
  long ****pppplVar19;
  ulong uVar20;
  long ***ppplVar21;
  long *plVar22;
  long ****pppplVar23;
  long *****ppppplVar24;
  undefined4 *puVar25;
  long *****ppppplVar26;
  long *****ppppplVar27;
  long *****ppppplVar28;
  double *pdVar29;
  long lVar30;
  float fVar31;
  long ***ppplVar32;
  float fVar33;
  long ****pppplVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long ***appplStack_4cc [3];
  undefined4 uStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  undefined4 uStack_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  undefined4 uStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  undefined4 uStack_444;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  undefined4 uStack_434;
  long ****pppplStack_430;
  long *plStack_428;
  long ***ppplStack_420;
  long ***ppplStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long ****pppplStack_3f0;
  long ****pppplStack_3e8;
  long ****pppplStack_3e0;
  long ***ppplStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long ****pppplStack_3b0;
  long ***ppplStack_3a8;
  long ***ppplStack_3a0;
  long ***ppplStack_398;
  long lStack_390;
  long ***ppplStack_388;
  long lStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  long lStack_368;
  long lStack_360;
  undefined8 uStack_358;
  long *plStack_350;
  long lStack_348;
  undefined4 uStack_340;
  char cStack_338;
  long ***ppplStack_330;
  long ***ppplStack_328;
  long ***ppplStack_320;
  undefined4 uStack_318;
  undefined1 auStack_314 [16];
  undefined1 auStack_304 [16];
  undefined1 auStack_2f4 [112];
  undefined1 uStack_284;
  long alStack_280 [3];
  long *plStack_268;
  undefined8 uStack_260;
  long ****pppplStack_258;
  undefined8 uStack_250;
  long ***ppplStack_248;
  undefined8 uStack_240;
  long ***ppplStack_238;
  undefined8 uStack_230;
  float fStack_228;
  undefined4 uStack_224;
  ulong uStack_220;
  long lStack_218;
  long lStack_210;
  long *plStack_200;
  long lStack_1f8;
  undefined4 uStack_1f0;
  char cStack_1e8;
  long ***ppplStack_1e0;
  long ***ppplStack_1d8;
  long ***ppplStack_1d0;
  undefined4 uStack_1c8;
  undefined1 auStack_1c4 [144];
  undefined1 uStack_134;
  long alStack_130 [3];
  long *plStack_118;
  long lStack_108;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  ppppplVar24 = (long *****)(param_1 + 3);
  param_1[1] = *param_1;
  param_1[4] = (long)*ppppplVar24;
  ppppplVar15 = (long *****)(param_1 + 6);
  param_1[7] = (long)*ppppplVar15;
  if (param_2 != (long *)0x0) {
    ppppplVar26 = (long *****)0xaaaaaaaaaaaaaaab;
    FUN_10acf7fec(param_1,(param_2[1] - *param_2 >> 2) * -0x5555555555555555);
    func_0x000107c27e9c(ppppplVar24,param_2[4] - param_2[3] >> 2);
    ppplVar16 = (long ***)(param_2[7] - param_2[6] >> 2);
    ppppplVar13 = ppppplVar15;
    func_0x0001073b504c();
    ppppplVar27 = (long *****)*param_2;
    ppppplVar28 = (long *****)param_2[1];
    if (ppppplVar27 != ppppplVar28) {
      pdVar29 = (double *)param_1[1];
      do {
        if (pdVar29 < (double *)param_1[2]) {
          fVar31 = *(float *)(ppppplVar27 + 1);
          pppplVar34 = *ppppplVar27;
          pdVar29[1] = (double)(float)((ulong)pppplVar34 >> 0x20);
          *pdVar29 = (double)SUB84(pppplVar34,0);
          pdVar29[2] = (double)fVar31;
          pdVar29 = pdVar29 + 3;
        }
        else {
          lVar30 = (long)pdVar29 - *param_1;
          plVar18 = (long *)((lVar30 >> 3) * -0x5555555555555555 + 1);
          if ((long *)0xaaaaaaaaaaaaaaa < plVar18) {
            FUN_10a4eff04();
            pppplVar34 = *ppppplVar13;
            if ((long *)(((long)ppppplVar13[2] - (long)pppplVar34 >> 3) * -0x5555555555555555) <
                ppplVar16) {
              if ((long *)0xaaaaaaaaaaaaaaa < ppplVar16) {
                FUN_10a4eff04();
                lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
                if ((long ****)ppplVar16[0x27] != ppppplVar13[0x126]) {
                  ppppplVar26 = (long *****)&uStack_260;
                  ppppplVar27 = &pppplStack_3b0;
                  ppppplVar28 = (long *****)appplStack_4cc;
                  pbVar1 = (byte *)((long)ppppplVar13 + 0x964);
                  do {
                    bVar4 = *pbVar1;
                    cVar8 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
                    if (bVar9) {
                      *pbVar1 = 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  ppppplVar15 = ppppplVar13;
                  param_2 = (long *)ppplVar16;
                  ppppplVar24 = param_4;
                  if ((bVar4 & 1) == 0) {
                    ppppplVar13[0x126] = (long ****)ppplVar16[0x27];
                    fVar31 = *(float *)(param_3 + 0x88);
                    fVar33 = *(float *)(param_3 + 0x8c);
                    fVar35 = *(float *)(param_3 + 0x90);
                    fVar36 = *(float *)(param_3 + 0x98);
                    fVar37 = *(float *)(param_3 + 0x9c);
                    fVar38 = *(float *)(param_3 + 0xa0);
                    fVar39 = *(float *)(param_3 + 0xa8);
                    fVar40 = *(float *)(param_3 + 0xac);
                    fVar41 = *(float *)(param_3 + 0xb0);
                    fStack_470 = -(fVar40 * fVar38) + fVar41 * fVar37;
                    fVar42 = -(fVar40 * fVar35) + fVar41 * fVar33;
                    fStack_468 = -(fVar37 * fVar35) + fVar38 * fVar33;
                    fStack_448 = 1.0 / (-(fVar36 * fVar42) + fStack_470 * fVar31 +
                                       fStack_468 * fVar39);
                    fStack_470 = fStack_470 * fStack_448;
                    fStack_460 = -((-(fVar39 * fVar38) + fVar41 * fVar36) * fStack_448);
                    fStack_450 = (-(fVar39 * fVar37) + fVar40 * fVar36) * fStack_448;
                    fStack_46c = -(fVar42 * fStack_448);
                    fStack_45c = (-(fVar39 * fVar35) + fVar41 * fVar31) * fStack_448;
                    fStack_44c = -((-(fVar39 * fVar33) + fVar40 * fVar31) * fStack_448);
                    fStack_468 = fStack_468 * fStack_448;
                    fStack_458 = -((-(fVar36 * fVar35) + fVar38 * fVar31) * fStack_448);
                    fStack_448 = (-(fVar36 * fVar33) + fVar37 * fVar31) * fStack_448;
                    fVar31 = *(float *)(param_3 + 0xb8);
                    fVar33 = *(float *)(param_3 + 0xbc);
                    fVar35 = *(float *)(param_3 + 0xc0);
                    fStack_440 = (-(fStack_460 * fVar33) - fVar31 * fStack_470) -
                                 fVar35 * fStack_450;
                    fStack_43c = (-(fStack_45c * fVar33) - fVar31 * fStack_46c) -
                                 fVar35 * fStack_44c;
                    uStack_464 = 0;
                    uStack_454 = 0;
                    uStack_444 = 0;
                    fStack_438 = (-(fStack_458 * fVar33) - fVar31 * fStack_468) -
                                 fVar35 * fStack_448;
                    uStack_434 = 0x3f800000;
                    func_0x000109519fd0(&fStack_4b0,ppplVar16 + 0x1f,&fStack_470);
                    fVar37 = -(fStack_48c * fStack_498) + fStack_488 * fStack_49c;
                    fVar33 = -(fStack_48c * fStack_4a8) + fStack_488 * fStack_4ac;
                    fVar36 = -(fStack_49c * fStack_4a8) + fStack_498 * fStack_4ac;
                    fVar31 = 1.0 / (-(fStack_4a0 * fVar33) + fVar37 * fStack_4b0 +
                                   fVar36 * fStack_490);
                    fVar37 = fVar37 * fVar31;
                    fVar40 = -((-(fStack_490 * fStack_498) + fStack_488 * fStack_4a0) * fVar31);
                    fVar41 = (-(fStack_490 * fStack_49c) + fStack_48c * fStack_4a0) * fVar31;
                    fVar39 = -(fVar33 * fVar31);
                    fVar38 = (-(fStack_490 * fStack_4a8) + fStack_488 * fStack_4b0) * fVar31;
                    fVar35 = -((-(fStack_490 * fStack_4ac) + fStack_48c * fStack_4b0) * fVar31);
                    fVar36 = fVar36 * fVar31;
                    fVar33 = -((-(fStack_4a0 * fStack_4a8) + fStack_498 * fStack_4b0) * fVar31);
                    fVar31 = (-(fStack_4a0 * fStack_4ac) + fStack_49c * fStack_4b0) * fVar31;
                    uStack_260 = (long *****)CONCAT44(fVar39,fVar37);
                    fStack_228 = (-(fVar33 * fStack_47c) - fStack_480 * fVar36) -
                                 fStack_478 * fVar31;
                    pppplStack_258 = (long ****)(ulong)(uint)fVar36;
                    uStack_250 = (long *****)CONCAT44(fVar38,fVar40);
                    ppplStack_248 = (long ***)(ulong)(uint)fVar33;
                    uStack_240 = CONCAT44(fVar35,fVar41);
                    ppplStack_238 = (long ***)(ulong)(uint)fVar31;
                    uStack_230 = CONCAT44((-(fVar38 * fStack_47c) - fStack_480 * fVar39) -
                                          fStack_478 * fVar35,
                                          (-(fVar40 * fStack_47c) - fStack_480 * fVar37) -
                                          fStack_478 * fVar41);
                    uStack_224 = 0x3f800000;
                    ppplStack_3a8 = *(long ****)((long)ppplVar16 + 0xa4);
                    pppplStack_3b0 = *(long *****)((long)ppplVar16 + 0x9c);
                    ppplStack_398 = *(long ****)((long)ppplVar16 + 0xb4);
                    ppplStack_3a0 = *(long ****)((long)ppplVar16 + 0xac);
                    ppplStack_388 = *(long ****)((long)ppplVar16 + 0xc4);
                    lStack_390 = *(undefined8 *)((long)ppplVar16 + 0xbc);
                    uStack_378._0_4_ = (float)*(undefined8 *)((long)ppplVar16 + 0xd4);
                    lStack_380 = CONCAT44((float)((ulong)*(undefined8 *)((long)ppplVar16 + 0xcc) >>
                                                 0x20) * 0.01,
                                          (float)*(undefined8 *)((long)ppplVar16 + 0xcc) * 0.01);
                    uStack_378._4_4_ =
                         (undefined4)((ulong)*(undefined8 *)((long)ppplVar16 + 0xd4) >> 0x20);
                    uStack_378 = CONCAT44(uStack_378._4_4_,(float)uStack_378 * 0.01);
                    func_0x000109519fd0(&uStack_560,&uStack_260,&pppplStack_3b0);
                    if ((bRam00000001137ecc60 & 1) == 0) goto LAB_10acf8ce8;
                    goto LAB_10acf83a4;
                  }
                }
                param_4 = ppppplVar24;
                ppplVar16 = (long ***)param_2;
                ppppplVar13 = ppppplVar15;
                uVar14 = 0;
                do {
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
                    return;
                  }
                  ___stack_chk_fail(uVar14);
LAB_10acf8ce8:
                  iVar11 = 0x137ecc60;
                  ___cxa_guard_acquire();
                  if (iVar11 != 0) {
                    uRam00000001137eccb4 = 0x3f800000;
                    uRam00000001137eccb8 = 0;
                    uRam00000001137eccc0 = 0;
                    uRam00000001137eccd0 = 0;
                    uRam00000001137eccc8 = 0xb3bbbd2ebf800000;
                    uRam00000001137eccd8 = 0xbf80000033bbbd2e;
                    uRam00000001137ecce0 = 0;
                    uRam00000001137ecce8 = 0;
                    uRam00000001137eccf0 = 0x3f800000;
                    ___cxa_guard_release(0x1137ecc60);
                  }
LAB_10acf83a4:
                  if ((bRam00000001137ecc68 & 1) == 0) {
                    iVar11 = 0x137ecc68;
                    ___cxa_guard_acquire();
                    if (iVar11 != 0) {
                      uRam00000001137eccf4 = 0x3f800000;
                      uRam00000001137eccf8 = 0;
                      uRam00000001137ecd00 = 0;
                      uRam00000001137ecd10 = 0;
                      uRam00000001137ecd08 = 0x3f800000b33bbd2e;
                      uRam00000001137ecd18 = 0xb33bbd2ebf800000;
                      uRam00000001137ecd20 = 0;
                      uRam00000001137ecd28 = 0;
                      uRam00000001137ecd30 = 0x3f800000;
                      ___cxa_guard_release(0x1137ecc68);
                    }
                  }
                  func_0x000109519fd0(&pppplStack_430,0x1137eccf4,&uStack_560);
                  func_0x000109519fd0(&pppplStack_3f0,&pppplStack_430,0x1137eccb4);
                  plStack_428 = (long *)pppplStack_3e8;
                  pppplStack_430 = pppplStack_3f0;
                  ppplStack_418 = ppplStack_3d8;
                  ppplStack_420 = (long ***)pppplStack_3e0;
                  uStack_408 = uStack_3c8;
                  uStack_410 = uStack_3d0;
                  uStack_3f8 = uStack_3b8;
                  uStack_400 = uStack_3c0;
                  func_0x000109445390(appplStack_4cc,&pppplStack_430);
                  FUN_10acef8e4(&uStack_260);
                  pppplStack_3b0 = (long ****)NEON_scvtf(*(undefined8 *)((long)ppplVar16 + 0x7c),4);
                  pppplStack_3f0 = *(long *****)((long)ppplVar16 + 0x8c);
                  pppplStack_430 = *(long *****)((long)ppplVar16 + 0x94);
                  func_0x0001098e5f58(&uStack_260,&pppplStack_3b0,&pppplStack_3f0,&pppplStack_430);
                  uStack_558 = 0;
                  uStack_560 = 0;
                  uStack_548 = 0;
                  uStack_550 = 0;
                  uStack_540 = 0;
                  uStack_530 = 0;
                  uStack_538 = 0x3f800000;
                  uStack_520 = 0;
                  uStack_528 = 0x3f800000;
                  uStack_510 = 0;
                  uStack_518 = 0x3f8000003f800000;
                  uStack_500 = 0;
                  uStack_508 = 0x3f80000000000000;
                  uStack_4f8 = 0x3f80000000000000;
                  ppplStack_3a8 = ppplStack_248;
                  pppplStack_3b0 = (long ****)uStack_250;
                  ppplStack_3a0 = ppplStack_238;
                  func_0x000107c2b054(&ppplStack_398,"NONE");
                  lStack_380 = 0;
                  uStack_378 = 0;
                  uStack_370 = 0;
                  func_0x00010943f3a8(&pppplStack_3b0,&uStack_560);
                  if (lStack_380 != 0) {
                    uStack_378 = lStack_380;
                    __ZdlPv();
                  }
                  if ((long)ppplStack_388 < 0) {
                    __ZdlPv(ppplStack_398);
                  }
                  pppplVar34 = (long ****)uStack_260;
                  uStack_260 = (long *****)0x0;
                  if (pppplVar34 != (long ****)0x0) {
                    (*(code *)(*pppplVar34)[1])();
                  }
                  pppplVar34 = (long ****)*ppplVar16;
                  ppppplVar27[2] = (long ****)ppplVar16[1];
                  ppppplVar27[1] = pppplVar34;
                  pppplStack_3b0 = (long ****)ppppplVar13;
                  ppplStack_398 = (long ***)ppplVar16[2];
                  ppplStack_388 = (long ***)ppplVar16[4];
                  lStack_390 = (long)ppplVar16[3];
                  if (ppplVar16[4] != (long **)0x0) {
                    plVar18 = (long *)((long)ppplVar16[4] + 8);
                    do {
                      cVar8 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                      if (bVar9) {
                        *plVar18 = *plVar18 + 1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                  }
                  lStack_380 = (long)ppplVar16[5];
                  uStack_378 = CONCAT44(uStack_378._4_4_,(int)ppplVar16[6]);
                  uStack_370 = uStack_370 & 0xffffffffffffff00;
                  cStack_338 = '\0';
                  if ((char)ppplVar16[0xe] == '\x01') {
                    lStack_368 = (long)ppplVar16[8];
                    uStack_370 = (ulong)ppplVar16[7];
                    lStack_360 = (long)ppplVar16[9];
                    lVar30 = (long)ppplVar16[0xb];
                    pppplVar34 = (long ****)ppplVar16[10];
                    ppppplVar27[0xc] = (long ****)ppplVar16[0xb];
                    ppppplVar27[0xb] = pppplVar34;
                    if (lVar30 != 0) {
                      plVar18 = (long *)(lVar30 + 8);
                      do {
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                        if (bVar9) {
                          *plVar18 = *plVar18 + 1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                    }
                    lStack_348 = (long)ppplVar16[0xc];
                    uStack_340 = (int)ppplVar16[0xd];
                    cStack_338 = '\x01';
                  }
                  ppplStack_328 = (long ***)ppppplVar28[1];
                  ppplStack_330 = (long ***)*ppppplVar28;
                  ppplStack_320 = (long ***)ppppplVar28[2];
                  uStack_318 = uStack_4b4;
                  *(undefined8 *)((long)ppppplVar27 + 0xa4) = 0;
                  *(undefined8 *)((long)ppppplVar27 + 0x9c) = 0;
                  *(undefined8 *)((long)ppppplVar27 + 0xb4) = 0;
                  *(undefined8 *)((long)ppppplVar27 + 0xac) = 0;
                  *(undefined8 *)((long)ppppplVar27 + 0xc4) = 0;
                  *(undefined8 *)((long)ppppplVar27 + 0xbc) = 0;
                  *(undefined8 *)((long)ppppplVar27 + 0xd4) = 0;
                  *(undefined8 *)((long)ppppplVar27 + 0xcc) = 0;
                  *(undefined8 *)((long)ppppplVar27 + 0xe4) = 0;
                  *(undefined8 *)((long)ppppplVar27 + 0xdc) = 0;
                  *(undefined8 *)((long)ppppplVar27 + 0xf4) = 0;
                  *(undefined8 *)((long)ppppplVar27 + 0xec) = 0;
                  *(undefined8 *)((long)ppppplVar27 + 0x104) = 0;
                  *(undefined8 *)((long)ppppplVar27 + 0xfc) = 0;
                  func_0x000109444760(auStack_314,&uStack_560,&uStack_550,&uStack_540);
                  uStack_284 = SUB81(ppplVar16[0x28],0);
                  FUN_10a0a2364(alStack_280,param_4);
                  pppplVar34 = ppppplVar13[0x137];
                  pppplStack_3e8 = (long ****)0x0;
                  pppplStack_3e0 = (long ****)0x0;
                  if (pppplVar34 == (long ****)0x0) {
                    ppppplVar26[2] = (long ****)ppplStack_3a0;
                    ppppplVar26[1] = (long ****)ppplStack_3a8;
                    uStack_260 = (long *****)pppplStack_3b0;
                    ppplStack_248 = ppplStack_398;
                    ppplStack_238 = ppplStack_388;
                    uStack_240 = lStack_390;
                    lStack_390 = 0;
                    ppplStack_388 = (long ***)0x0;
                    uStack_230 = lStack_380;
                    fStack_228 = (float)uStack_378;
                    uStack_220 = uStack_220 & 0xffffffffffffff00;
                    cStack_1e8 = 0;
                    cStack_1e8 = cStack_338 == '\x01';
                    if ((bool)cStack_1e8) {
                      lStack_218 = lStack_368;
                      uStack_220 = uStack_370;
                      lStack_210 = lStack_360;
                      pppplVar34 = ppppplVar27[0xb];
                      ppppplVar26[0xc] = ppppplVar27[0xc];
                      ppppplVar26[0xb] = pppplVar34;
                      uStack_358 = 0;
                      plStack_350 = (long *)0x0;
                      lStack_1f8 = lStack_348;
                      uStack_1f0 = uStack_340;
                    }
                    ppplStack_1d8 = ppplStack_328;
                    ppplStack_1e0 = ppplStack_330;
                    ppplStack_1d0 = ppplStack_320;
                    uStack_1c8 = uStack_318;
                    *(undefined8 *)((long)ppppplVar26 + 0xa4) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0x9c) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xb4) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xac) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xc4) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xbc) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xd4) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xcc) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xe4) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xdc) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xf4) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xec) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0x104) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xfc) = 0;
                    func_0x000109444760(auStack_1c4,auStack_314,auStack_304,auStack_2f4);
                    uStack_134 = uStack_284;
                    FUN_10a0a2364(alStack_130,alStack_280);
                    ppppplVar15 = (long *****)0x208;
                    __Znwm();
                    *(undefined2 *)(ppppplVar15 + 3) = 4;
                    ppppplVar15[2] = (long ****)0x0;
                    ppppplVar15[1] = (long ****)0x200000006;
                    ppppplVar15[5] = (long ****)0x0;
                    ppppplVar15[4] = (long ****)0x0;
                    ppppplVar15[7] = (long ****)0x0;
                    ppppplVar15[6] = (long ****)0x0;
                    ppppplVar15[9] = (long ****)0x0;
                    ppppplVar15[8] = (long ****)0x0;
                    ppppplVar15[0xb] = (long ****)0x0;
                    ppppplVar15[10] = (long ****)0x0;
                    ppppplVar15[0xd] = (long ****)0x0;
                    ppppplVar15[0xc] = (long ****)0x0;
                    ppppplVar15[0xf] = (long ****)0x0;
                    ppppplVar15[0xe] = (long ****)0x0;
                    ppppplVar27 = ppppplVar15 + 0x12;
                    *ppppplVar27 = (long ****)0x0;
                    ppppplVar15[0x10] = (long ****)0x0;
                    ppppplVar15[0x11] = (long ****)(ppppplVar15 + 3);
                    *ppppplVar15 = (long ****)&PTR_FUN_110c6dc30;
                    ppppplVar26 = ppppplVar15 + 0x14;
                    *(undefined2 *)(ppppplVar15 + 0x13) = 0;
                    FUN_10acfb0b4(ppppplVar26,&uStack_260);
                    ppppplVar15[0x40] = (long ****)0x0;
                    if (pppplStack_3e8 != (long ****)0x0) {
                      puVar2 = (ulong *)(pppplStack_3e8 + 1);
                      do {
                        uVar20 = *puVar2;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                        if (bVar9) {
                          *puVar2 = uVar20 - 4;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if ((uVar20 & 0x1fffffffc) == 4) {
                        do {
                          uVar20 = *puVar2;
                          cVar8 = '\x01';
                          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                          if (bVar9) {
                            *puVar2 = uVar20 - 1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        if (uVar20 - 1 == 0) {
                          (**(code **)((long)*pppplStack_3e8 + 8))();
                        }
                      }
                    }
                    pppplStack_3e8 = (long ****)ppppplVar15;
                    if (pppplStack_3e0 != (long ****)0x0) {
                      func_0x0001092b4274(&pppplStack_3e0);
                    }
                    pppplStack_3f0 = (long ****)ppppplVar26;
                    pppplStack_3e0 = (long ****)ppppplVar15;
                    if (plStack_118 == alStack_130) {
                      lVar30 = 0x20;
LAB_10acf8a78:
                      (**(code **)(*plStack_118 + lVar30))();
                    }
                    else if (plStack_118 != (long *)0x0) {
                      lVar30 = 0x28;
                      goto LAB_10acf8a78;
                    }
                    plVar18 = plStack_200;
                    if ((cStack_1e8 == '\x01') && (plStack_200 != (long *)0x0)) {
                      plVar12 = plStack_200 + 1;
                      do {
                        lVar30 = *plVar12;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                        if (bVar9) {
                          *plVar12 = lVar30 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if (lVar30 == 0) {
                        (**(code **)(*plStack_200 + 0x10))(plStack_200);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                      }
                    }
                    ppplVar16 = ppplStack_238;
                    if ((long ****)ppplStack_238 != (long ****)0x0) {
                      pppplVar34 = (long ****)(ppplStack_238 + 1);
                      do {
                        ppplVar21 = *pppplVar34;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(pppplVar34,0x10);
                        if (bVar9) {
                          *pppplVar34 = (long ***)((long)ppplVar21 + -1);
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if (ppplVar21 == (long ***)0x0) {
                        (*(code *)(*ppplStack_238)[2])(ppplStack_238);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar16);
                      }
                    }
                    ppplStack_3d8 = (long ***)FUN_10acfabbc;
                  }
                  else {
                    pppplStack_430 = (long ****)0x0;
                    (*(code *)(*pppplVar34)[5])(pppplVar34,0,&pppplStack_430);
                    if (pppplStack_430 != (long ****)0x0) {
                      func_0x0001092af97c(&pppplStack_430);
                    /* WARNING: Does not return */
                      pcVar10 = (code *)SoftwareBreakpoint(1,0x10acf8d8c);
                      (*pcVar10)();
                    }
                    ppppplVar26[2] = (long ****)ppplStack_3a0;
                    ppppplVar26[1] = (long ****)ppplStack_3a8;
                    uStack_260 = (long *****)pppplStack_3b0;
                    ppplStack_248 = ppplStack_398;
                    ppppplVar28 = (long *****)&uStack_260;
                    ppplStack_238 = ppplStack_388;
                    uStack_240 = lStack_390;
                    lStack_390 = 0;
                    ppplStack_388 = (long ***)0x0;
                    uStack_230 = lStack_380;
                    fStack_228 = (float)uStack_378;
                    uStack_220 = uStack_220 & 0xffffffffffffff00;
                    cStack_1e8 = 0;
                    cStack_1e8 = cStack_338 == '\x01';
                    if ((bool)cStack_1e8) {
                      lStack_218 = lStack_368;
                      uStack_220 = uStack_370;
                      lStack_210 = lStack_360;
                      pppplVar19 = ppppplVar27[0xb];
                      ppppplVar26[0xc] = ppppplVar27[0xc];
                      ppppplVar26[0xb] = pppplVar19;
                      uStack_358 = 0;
                      plStack_350 = (long *)0x0;
                      lStack_1f8 = lStack_348;
                      uStack_1f0 = uStack_340;
                    }
                    ppplStack_1d8 = ppplStack_328;
                    ppplStack_1e0 = ppplStack_330;
                    ppplStack_1d0 = ppplStack_320;
                    uStack_1c8 = uStack_318;
                    *(undefined8 *)((long)ppppplVar26 + 0xa4) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0x9c) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xb4) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xac) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xc4) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xbc) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xd4) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xcc) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xe4) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xdc) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xf4) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xec) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0x104) = 0;
                    *(undefined8 *)((long)ppppplVar26 + 0xfc) = 0;
                    func_0x000109444760(auStack_1c4,auStack_314,auStack_304,auStack_2f4);
                    uStack_134 = uStack_284;
                    FUN_10a0a2364(alStack_130,alStack_280);
                    ppppplVar26 = (long *****)0x210;
                    __Znwm();
                    ppppplVar26[2] = (long ****)0x0;
                    ppppplVar26[1] = (long ****)0x200000006;
                    *(undefined2 *)(ppppplVar26 + 3) = 4;
                    ppppplVar26[5] = (long ****)0x0;
                    ppppplVar26[4] = (long ****)0x0;
                    ppppplVar26[7] = (long ****)0x0;
                    ppppplVar26[6] = (long ****)0x0;
                    ppppplVar26[9] = (long ****)0x0;
                    ppppplVar26[8] = (long ****)0x0;
                    ppppplVar26[0xb] = (long ****)0x0;
                    ppppplVar26[10] = (long ****)0x0;
                    ppppplVar26[0xd] = (long ****)0x0;
                    ppppplVar26[0xc] = (long ****)0x0;
                    ppppplVar26[0xf] = (long ****)0x0;
                    ppppplVar26[0xe] = (long ****)0x0;
                    ppppplVar26[0x10] = (long ****)0x0;
                    ppppplVar26[0x11] = (long ****)(ppppplVar26 + 3);
                    ppppplVar26[0x12] = (long ****)0x0;
                    *(undefined2 *)(ppppplVar26 + 0x13) = 0;
                    ppppplVar27 = ppppplVar26 + 0x14;
                    *ppppplVar26 = (long ****)&PTR_FUN_110c6dbf8;
                    FUN_10acfb0b4(ppppplVar27,&uStack_260);
                    ppppplVar26[0x40] = (long ****)0x0;
                    ppppplVar26[0x41] = pppplVar34;
                    if (pppplStack_3e8 != (long ****)0x0) {
                      puVar2 = (ulong *)(pppplStack_3e8 + 1);
                      do {
                        uVar20 = *puVar2;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                        if (bVar9) {
                          *puVar2 = uVar20 - 4;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if ((uVar20 & 0x1fffffffc) == 4) {
                        do {
                          uVar20 = *puVar2;
                          cVar8 = '\x01';
                          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                          if (bVar9) {
                            *puVar2 = uVar20 - 1;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar8 != '\0');
                        if (uVar20 - 1 == 0) {
                          (**(code **)((long)*pppplStack_3e8 + 8))();
                        }
                      }
                    }
                    pppplStack_3e8 = (long ****)ppppplVar26;
                    if (pppplStack_3e0 != (long ****)0x0) {
                      func_0x0001092b4274(&pppplStack_3e0);
                    }
                    pppplStack_3f0 = (long ****)ppppplVar27;
                    pppplStack_3e0 = (long ****)ppppplVar26;
                    if (plStack_118 == alStack_130) {
                      lVar30 = 0x20;
LAB_10acf89d4:
                      (**(code **)(*plStack_118 + lVar30))();
                    }
                    else if (plStack_118 != (long *)0x0) {
                      lVar30 = 0x28;
                      goto LAB_10acf89d4;
                    }
                    plVar18 = plStack_200;
                    if ((cStack_1e8 == '\x01') && (plStack_200 != (long *)0x0)) {
                      plVar12 = plStack_200 + 1;
                      do {
                        lVar30 = *plVar12;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                        if (bVar9) {
                          *plVar12 = lVar30 + -1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if (lVar30 == 0) {
                        (**(code **)(*plStack_200 + 0x10))(plStack_200);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                      }
                    }
                    ppplVar16 = ppplStack_238;
                    if ((long ****)ppplStack_238 != (long ****)0x0) {
                      pppplVar34 = (long ****)(ppplStack_238 + 1);
                      do {
                        ppplVar21 = *pppplVar34;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(pppplVar34,0x10);
                        if (bVar9) {
                          *pppplVar34 = (long ***)((long)ppplVar21 + -1);
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if (ppplVar21 == (long ***)0x0) {
                        (*(code *)(*ppplStack_238)[2])(ppplStack_238);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar16);
                      }
                    }
                    ppplStack_3d8 = (long ***)0x10acfab8c;
                    __ZNSt13exception_ptrD1Ev(&pppplStack_430);
                  }
                  param_4 = (long *****)pppplStack_3f0;
                  ppppplVar13 = ppppplVar13 + 0x135;
                  if ((long ****)pppplStack_3f0[0x2c] != (long ****)0x0) {
                    func_0x0001092b4274(pppplStack_3f0 + 0x2c);
                  }
                  param_4[0x2c] = pppplStack_3e0;
                  pppplStack_3e0 = (long ****)0x0;
                  uStack_260 = (long *****)ppplStack_3d8;
                  pppplStack_258 = pppplStack_3f0;
                  uStack_250 = ppppplVar13;
                  (*(code *)**ppppplVar13)(ppppplVar13,&uStack_260);
                  ppppplVar13 = (long *****)pppplStack_3e8;
                  pppplStack_3e8 = (long ****)0x0;
                  if ((pppplStack_3e0 != (long ****)0x0) &&
                     (func_0x0001092b4274(&pppplStack_3e0), pppplStack_3e8 != (long ****)0x0)) {
                    puVar2 = (ulong *)(pppplStack_3e8 + 1);
                    do {
                      uVar20 = *puVar2;
                      cVar8 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                      if (bVar9) {
                        *puVar2 = uVar20 - 4;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if ((uVar20 & 0x1fffffffc) == 4) {
                      do {
                        uVar20 = *puVar2;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                        if (bVar9) {
                          *puVar2 = uVar20 - 1;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if (uVar20 - 1 == 0) {
                        (**(code **)((long)*pppplStack_3e8 + 8))();
                      }
                    }
                  }
                  if (plStack_268 == alStack_280) {
                    lVar30 = 0x20;
LAB_10acf8bd4:
                    (**(code **)(*plStack_268 + lVar30))();
                  }
                  else if (plStack_268 != (long *)0x0) {
                    lVar30 = 0x28;
                    goto LAB_10acf8bd4;
                  }
                  plVar18 = plStack_350;
                  if ((cStack_338 == '\x01') && (plStack_350 != (long *)0x0)) {
                    plVar12 = plStack_350 + 1;
                    do {
                      lVar30 = *plVar12;
                      cVar8 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                      if (bVar9) {
                        *plVar12 = lVar30 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar30 == 0) {
                      (**(code **)(*plStack_350 + 0x10))(plStack_350);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                    }
                  }
                  ppplVar16 = ppplStack_388;
                  if (ppplStack_388 != (long ***)0x0) {
                    plVar18 = (long *)(ppplStack_388 + 1);
                    do {
                      lVar30 = *plVar18;
                      cVar8 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                      if (bVar9) {
                        *plVar18 = lVar30 + -1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (lVar30 == 0) {
                      (**(code **)((long)*ppplStack_388 + 0x10))(ppplStack_388);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar16);
                    }
                  }
                  if (ppppplVar13 != (long *****)0x0) {
                    ppppplVar15 = ppppplVar13 + 1;
                    do {
                      pppplVar34 = *ppppplVar15;
                      cVar8 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
                      if (bVar9) {
                        *ppppplVar15 = (long ****)((long)pppplVar34 + -4);
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (((ulong)pppplVar34 & 0x1fffffffc) == 4) {
                      do {
                        pppplVar34 = *ppppplVar15;
                        cVar8 = '\x01';
                        bVar9 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
                        if (bVar9) {
                          *ppppplVar15 = (long ****)((long)pppplVar34 + -1);
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar8 != '\0');
                      if ((long ****)((long)pppplVar34 + -1) == (long ****)0x0) {
                        (*(code *)(*ppppplVar13)[1])(ppppplVar13);
                      }
                    }
                  }
                  uVar14 = 1;
                } while( true );
              }
              pppplVar19 = ppppplVar13[1];
              ppppplVar15 = ppppplVar13;
              FUN_10a4eff18();
              pppplVar19 = (long ****)((long)ppppplVar15 + ((long)pppplVar19 - (long)pppplVar34));
              pppplVar34 = *ppppplVar13;
              pppplVar7 = ppppplVar13[1];
              lVar30 = (long)pppplVar34 - (long)pppplVar7;
              pppplVar3 = (long ****)((long)pppplVar19 + lVar30);
              pppplVar23 = pppplVar3;
              if (lVar30 != 0) {
                do {
                  ppplVar32 = pppplVar34[1];
                  ppplVar21 = *pppplVar34;
                  pppplVar23[2] = pppplVar34[2];
                  pppplVar23[1] = ppplVar32;
                  *pppplVar23 = ppplVar21;
                  pppplVar34 = pppplVar34 + 3;
                  pppplVar23 = pppplVar23 + 3;
                } while (pppplVar34 != pppplVar7);
                pppplVar34 = *ppppplVar13;
              }
              *ppppplVar13 = pppplVar3;
              ppppplVar13[1] = pppplVar19;
              ppppplVar13[2] = (long ****)(ppppplVar15 + (long)ppplVar16 * 3);
              if (pppplVar34 != (long ****)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR___ZdlPv_110352258)();
                return;
              }
            }
            return;
          }
          lVar17 = param_1[2] - *param_1 >> 3;
          ppplVar16 = (long ***)(lVar17 * 0x5555555555555556);
          if (ppplVar16 < plVar18 || (long)ppplVar16 - (long)plVar18 == 0) {
            ppplVar16 = (long ***)plVar18;
          }
          if (0x555555555555554 < (ulong)(lVar17 * -0x5555555555555555)) {
            ppplVar16 = (long ***)(long *)0xaaaaaaaaaaaaaaa;
          }
          plVar12 = param_1;
          FUN_10a4eff18();
          ppppplVar13 = (long *****)*param_1;
          ppppplVar5 = (long *****)param_1[1];
          pdVar29 = (double *)((long)plVar12 + lVar30);
          fVar31 = *(float *)(ppppplVar27 + 1);
          pppplVar34 = *ppppplVar27;
          pdVar29[1] = (double)(float)((ulong)pppplVar34 >> 0x20);
          *pdVar29 = (double)SUB84(pppplVar34,0);
          pdVar29[2] = (double)fVar31;
          lVar30 = (long)ppppplVar13 - (long)ppppplVar5;
          plVar18 = (long *)((long)pdVar29 + lVar30);
          plVar22 = plVar18;
          if (lVar30 != 0) {
            do {
              pppplVar19 = ppppplVar13[1];
              pppplVar34 = *ppppplVar13;
              plVar22[2] = (long)ppppplVar13[2];
              plVar22[1] = (long)pppplVar19;
              *plVar22 = (long)pppplVar34;
              ppppplVar13 = ppppplVar13 + 3;
              plVar22 = plVar22 + 3;
            } while (ppppplVar13 != ppppplVar5);
            ppppplVar13 = (long *****)*param_1;
          }
          pdVar29 = pdVar29 + 3;
          *param_1 = (long)plVar18;
          param_1[1] = (long)pdVar29;
          param_1[2] = (long)(plVar12 + (long)ppplVar16 * 3);
          if (ppppplVar13 != (long *****)0x0) {
            __ZdlPv();
          }
        }
        param_1[1] = (long)pdVar29;
        ppppplVar27 = (long *****)((long)ppppplVar27 + 0xc);
      } while (ppppplVar27 != ppppplVar28);
    }
    puVar6 = (undefined4 *)param_2[4];
    for (puVar25 = (undefined4 *)param_2[3]; puVar25 != puVar6; puVar25 = puVar25 + 1) {
      uStack_64 = *puVar25;
      FUN_109febd04(ppppplVar24,&uStack_64);
    }
    puVar6 = (undefined4 *)param_2[7];
    for (puVar25 = (undefined4 *)param_2[6]; puVar25 != puVar6; puVar25 = puVar25 + 1) {
      uStack_68 = *puVar25;
      FUN_10a0ca014(ppppplVar15,&uStack_68);
    }
  }
  return;
}



/* Entry: 10acf7fec; end: 10acf80a7;  */

void FUN_10acf7fec(long *****param_1,long ***param_2,long param_3,long *****param_4)

{
  byte *pbVar1;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  long ****pppplVar5;
  byte bVar6;
  long ****pppplVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  int iVar11;
  undefined8 uVar12;
  long *****ppppplVar13;
  long ****pppplVar14;
  long lVar15;
  long ****pppplVar16;
  ulong uVar17;
  long ***ppplVar18;
  long ****pppplVar19;
  long *****unaff_x19;
  long *unaff_x20;
  long *****unaff_x21;
  long *****unaff_x23;
  long *****unaff_x24;
  undefined8 *unaff_x25;
  float fVar20;
  long ***ppplVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  undefined8 uStack_488;
  undefined8 auStack_45c [3];
  undefined4 uStack_444;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  undefined4 uStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  undefined4 uStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  undefined4 uStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  undefined4 uStack_3c4;
  long ****pppplStack_3c0;
  long *plStack_3b8;
  long ***ppplStack_3b0;
  long ***ppplStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long ****pppplStack_380;
  long ****pppplStack_378;
  long ****pppplStack_370;
  long ***ppplStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long ****pppplStack_340;
  long ***ppplStack_338;
  long ***ppplStack_330;
  long ***ppplStack_328;
  long lStack_320;
  long ***ppplStack_318;
  long lStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  long lStack_2d8;
  undefined4 uStack_2d0;
  char cStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined1 auStack_2a4 [16];
  undefined1 auStack_294 [16];
  undefined1 auStack_284 [112];
  undefined1 uStack_214;
  long alStack_210 [3];
  long *plStack_1f8;
  undefined8 uStack_1f0;
  long ****pppplStack_1e8;
  undefined8 uStack_1e0;
  long ***ppplStack_1d8;
  undefined8 uStack_1d0;
  long ***ppplStack_1c8;
  undefined8 uStack_1c0;
  float fStack_1b8;
  undefined4 uStack_1b4;
  ulong uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long *plStack_190;
  long lStack_188;
  undefined4 uStack_180;
  char cStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined1 auStack_154 [144];
  undefined1 uStack_c4;
  long alStack_c0 [3];
  long *plStack_a8;
  long lStack_98;
  
  pppplVar14 = *param_1;
  if ((long *)(((long)param_1[2] - (long)pppplVar14 >> 3) * -0x5555555555555555) < param_2) {
    if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
      FUN_10a4eff04();
      lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
      if ((long ****)param_2[0x27] != param_1[0x126]) {
        unaff_x23 = (long *****)&uStack_1f0;
        unaff_x24 = &pppplStack_340;
        unaff_x25 = auStack_45c;
        pbVar1 = (byte *)((long)param_1 + 0x964);
        do {
          bVar6 = *pbVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar9) {
            *pbVar1 = 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        unaff_x19 = param_1;
        unaff_x20 = (long *)param_2;
        unaff_x21 = param_4;
        if ((bVar6 & 1) == 0) {
          param_1[0x126] = (long ****)param_2[0x27];
          fVar20 = *(float *)(param_3 + 0x88);
          fVar22 = *(float *)(param_3 + 0x8c);
          fVar23 = *(float *)(param_3 + 0x90);
          fVar24 = *(float *)(param_3 + 0x98);
          fVar25 = *(float *)(param_3 + 0x9c);
          fVar26 = *(float *)(param_3 + 0xa0);
          fVar27 = *(float *)(param_3 + 0xa8);
          fVar28 = *(float *)(param_3 + 0xac);
          fVar29 = *(float *)(param_3 + 0xb0);
          fStack_400 = -(fVar28 * fVar26) + fVar29 * fVar25;
          fVar30 = -(fVar28 * fVar23) + fVar29 * fVar22;
          fStack_3f8 = -(fVar25 * fVar23) + fVar26 * fVar22;
          fStack_3d8 = 1.0 / (-(fVar24 * fVar30) + fStack_400 * fVar20 + fStack_3f8 * fVar27);
          fStack_400 = fStack_400 * fStack_3d8;
          fStack_3f0 = -((-(fVar27 * fVar26) + fVar29 * fVar24) * fStack_3d8);
          fStack_3e0 = (-(fVar27 * fVar25) + fVar28 * fVar24) * fStack_3d8;
          fStack_3fc = -(fVar30 * fStack_3d8);
          fStack_3ec = (-(fVar27 * fVar23) + fVar29 * fVar20) * fStack_3d8;
          fStack_3dc = -((-(fVar27 * fVar22) + fVar28 * fVar20) * fStack_3d8);
          fStack_3f8 = fStack_3f8 * fStack_3d8;
          fStack_3e8 = -((-(fVar24 * fVar23) + fVar26 * fVar20) * fStack_3d8);
          fStack_3d8 = (-(fVar24 * fVar22) + fVar25 * fVar20) * fStack_3d8;
          fVar20 = *(float *)(param_3 + 0xb8);
          fVar22 = *(float *)(param_3 + 0xbc);
          fVar23 = *(float *)(param_3 + 0xc0);
          fStack_3d0 = (-(fStack_3f0 * fVar22) - fVar20 * fStack_400) - fVar23 * fStack_3e0;
          fStack_3cc = (-(fStack_3ec * fVar22) - fVar20 * fStack_3fc) - fVar23 * fStack_3dc;
          uStack_3f4 = 0;
          uStack_3e4 = 0;
          uStack_3d4 = 0;
          fStack_3c8 = (-(fStack_3e8 * fVar22) - fVar20 * fStack_3f8) - fVar23 * fStack_3d8;
          uStack_3c4 = 0x3f800000;
          func_0x000109519fd0(&fStack_440,param_2 + 0x1f,&fStack_400);
          fVar25 = -(fStack_41c * fStack_428) + fStack_418 * fStack_42c;
          fVar22 = -(fStack_41c * fStack_438) + fStack_418 * fStack_43c;
          fVar24 = -(fStack_42c * fStack_438) + fStack_428 * fStack_43c;
          fVar20 = 1.0 / (-(fStack_430 * fVar22) + fVar25 * fStack_440 + fVar24 * fStack_420);
          fVar25 = fVar25 * fVar20;
          fVar28 = -((-(fStack_420 * fStack_428) + fStack_418 * fStack_430) * fVar20);
          fVar29 = (-(fStack_420 * fStack_42c) + fStack_41c * fStack_430) * fVar20;
          fVar27 = -(fVar22 * fVar20);
          fVar26 = (-(fStack_420 * fStack_438) + fStack_418 * fStack_440) * fVar20;
          fVar23 = -((-(fStack_420 * fStack_43c) + fStack_41c * fStack_440) * fVar20);
          fVar24 = fVar24 * fVar20;
          fVar22 = -((-(fStack_430 * fStack_438) + fStack_428 * fStack_440) * fVar20);
          fVar20 = (-(fStack_430 * fStack_43c) + fStack_42c * fStack_440) * fVar20;
          uStack_1f0 = (long *****)CONCAT44(fVar27,fVar25);
          fStack_1b8 = (-(fVar22 * fStack_40c) - fStack_410 * fVar24) - fStack_408 * fVar20;
          pppplStack_1e8 = (long ****)(ulong)(uint)fVar24;
          uStack_1e0 = (long *****)CONCAT44(fVar26,fVar28);
          ppplStack_1d8 = (long ***)(ulong)(uint)fVar22;
          uStack_1d0 = CONCAT44(fVar23,fVar29);
          ppplStack_1c8 = (long ***)(ulong)(uint)fVar20;
          uStack_1c0 = CONCAT44((-(fVar26 * fStack_40c) - fStack_410 * fVar27) - fStack_408 * fVar23
                                ,(-(fVar28 * fStack_40c) - fStack_410 * fVar25) -
                                 fStack_408 * fVar29);
          uStack_1b4 = 0x3f800000;
          ppplStack_338 = *(long ****)((long)param_2 + 0xa4);
          pppplStack_340 = *(long *****)((long)param_2 + 0x9c);
          ppplStack_328 = *(long ****)((long)param_2 + 0xb4);
          ppplStack_330 = *(long ****)((long)param_2 + 0xac);
          ppplStack_318 = *(long ****)((long)param_2 + 0xc4);
          lStack_320 = *(undefined8 *)((long)param_2 + 0xbc);
          uStack_308._0_4_ = (float)*(undefined8 *)((long)param_2 + 0xd4);
          lStack_310 = CONCAT44((float)((ulong)*(undefined8 *)((long)param_2 + 0xcc) >> 0x20) * 0.01
                                ,(float)*(undefined8 *)((long)param_2 + 0xcc) * 0.01);
          uStack_308._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xd4) >> 0x20);
          uStack_308 = CONCAT44(uStack_308._4_4_,(float)uStack_308 * 0.01);
          func_0x000109519fd0(&uStack_4f0,&uStack_1f0,&pppplStack_340);
          if ((bRam00000001137ecc60 & 1) == 0) goto LAB_10acf8ce8;
          goto LAB_10acf83a4;
        }
      }
      param_4 = unaff_x21;
      param_2 = (long ***)unaff_x20;
      param_1 = unaff_x19;
      uVar12 = 0;
      do {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
          return;
        }
        ___stack_chk_fail(uVar12);
LAB_10acf8ce8:
        iVar11 = 0x137ecc60;
        ___cxa_guard_acquire();
        if (iVar11 != 0) {
          uRam00000001137eccb4 = 0x3f800000;
          uRam00000001137eccb8 = 0;
          uRam00000001137eccc0 = 0;
          uRam00000001137eccd0 = 0;
          uRam00000001137eccc8 = 0xb3bbbd2ebf800000;
          uRam00000001137eccd8 = 0xbf80000033bbbd2e;
          uRam00000001137ecce0 = 0;
          uRam00000001137ecce8 = 0;
          uRam00000001137eccf0 = 0x3f800000;
          ___cxa_guard_release(0x1137ecc60);
        }
LAB_10acf83a4:
        if ((bRam00000001137ecc68 & 1) == 0) {
          iVar11 = 0x137ecc68;
          ___cxa_guard_acquire();
          if (iVar11 != 0) {
            uRam00000001137eccf4 = 0x3f800000;
            uRam00000001137eccf8 = 0;
            uRam00000001137ecd00 = 0;
            uRam00000001137ecd10 = 0;
            uRam00000001137ecd08 = 0x3f800000b33bbd2e;
            uRam00000001137ecd18 = 0xb33bbd2ebf800000;
            uRam00000001137ecd20 = 0;
            uRam00000001137ecd28 = 0;
            uRam00000001137ecd30 = 0x3f800000;
            ___cxa_guard_release(0x1137ecc68);
          }
        }
        func_0x000109519fd0(&pppplStack_3c0,0x1137eccf4,&uStack_4f0);
        func_0x000109519fd0(&pppplStack_380,&pppplStack_3c0,0x1137eccb4);
        plStack_3b8 = (long *)pppplStack_378;
        pppplStack_3c0 = pppplStack_380;
        ppplStack_3a8 = ppplStack_368;
        ppplStack_3b0 = (long ***)pppplStack_370;
        uStack_398 = uStack_358;
        uStack_3a0 = uStack_360;
        uStack_388 = uStack_348;
        uStack_390 = uStack_350;
        func_0x000109445390(auStack_45c,&pppplStack_3c0);
        FUN_10acef8e4(&uStack_1f0);
        pppplStack_340 = (long ****)NEON_scvtf(*(undefined8 *)((long)param_2 + 0x7c),4);
        pppplStack_380 = *(long *****)((long)param_2 + 0x8c);
        pppplStack_3c0 = *(long *****)((long)param_2 + 0x94);
        func_0x0001098e5f58(&uStack_1f0,&pppplStack_340,&pppplStack_380,&pppplStack_3c0);
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        uStack_4d8 = 0;
        uStack_4e0 = 0;
        uStack_4d0 = 0;
        uStack_4c0 = 0;
        uStack_4c8 = 0x3f800000;
        uStack_4b0 = 0;
        uStack_4b8 = 0x3f800000;
        uStack_4a0 = 0;
        uStack_4a8 = 0x3f8000003f800000;
        uStack_490 = 0;
        uStack_498 = 0x3f80000000000000;
        uStack_488 = 0x3f80000000000000;
        ppplStack_338 = ppplStack_1d8;
        pppplStack_340 = (long ****)uStack_1e0;
        ppplStack_330 = ppplStack_1c8;
        func_0x000107c2b054(&ppplStack_328,"NONE");
        lStack_310 = 0;
        uStack_308 = 0;
        uStack_300 = 0;
        func_0x00010943f3a8(&pppplStack_340,&uStack_4f0);
        if (lStack_310 != 0) {
          uStack_308 = lStack_310;
          __ZdlPv();
        }
        if ((long)ppplStack_318 < 0) {
          __ZdlPv(ppplStack_328);
        }
        pppplVar14 = (long ****)uStack_1f0;
        uStack_1f0 = (long *****)0x0;
        if (pppplVar14 != (long ****)0x0) {
          (*(code *)(*pppplVar14)[1])();
        }
        pppplVar14 = (long ****)*param_2;
        unaff_x24[2] = (long ****)param_2[1];
        unaff_x24[1] = pppplVar14;
        pppplStack_340 = (long ****)param_1;
        ppplStack_328 = (long ***)param_2[2];
        ppplStack_318 = (long ***)param_2[4];
        lStack_320 = (long)param_2[3];
        if (param_2[4] != (long **)0x0) {
          plVar2 = (long *)((long)param_2[4] + 8);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *plVar2 = *plVar2 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        lStack_310 = (long)param_2[5];
        uStack_308 = CONCAT44(uStack_308._4_4_,(int)param_2[6]);
        uStack_300 = uStack_300 & 0xffffffffffffff00;
        cStack_2c8 = '\0';
        if ((char)param_2[0xe] == '\x01') {
          lStack_2f8 = (long)param_2[8];
          uStack_300 = (ulong)param_2[7];
          lStack_2f0 = (long)param_2[9];
          lVar15 = (long)param_2[0xb];
          pppplVar14 = (long ****)param_2[10];
          unaff_x24[0xc] = (long ****)param_2[0xb];
          unaff_x24[0xb] = pppplVar14;
          if (lVar15 != 0) {
            plVar2 = (long *)(lVar15 + 8);
            do {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *plVar2 = *plVar2 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          lStack_2d8 = (long)param_2[0xc];
          uStack_2d0 = (int)param_2[0xd];
          cStack_2c8 = '\x01';
        }
        uStack_2b8 = unaff_x25[1];
        uStack_2c0 = *unaff_x25;
        uStack_2b0 = unaff_x25[2];
        uStack_2a8 = uStack_444;
        *(undefined8 *)((long)unaff_x24 + 0xa4) = 0;
        *(undefined8 *)((long)unaff_x24 + 0x9c) = 0;
        *(undefined8 *)((long)unaff_x24 + 0xb4) = 0;
        *(undefined8 *)((long)unaff_x24 + 0xac) = 0;
        *(undefined8 *)((long)unaff_x24 + 0xc4) = 0;
        *(undefined8 *)((long)unaff_x24 + 0xbc) = 0;
        *(undefined8 *)((long)unaff_x24 + 0xd4) = 0;
        *(undefined8 *)((long)unaff_x24 + 0xcc) = 0;
        *(undefined8 *)((long)unaff_x24 + 0xe4) = 0;
        *(undefined8 *)((long)unaff_x24 + 0xdc) = 0;
        *(undefined8 *)((long)unaff_x24 + 0xf4) = 0;
        *(undefined8 *)((long)unaff_x24 + 0xec) = 0;
        *(undefined8 *)((long)unaff_x24 + 0x104) = 0;
        *(undefined8 *)((long)unaff_x24 + 0xfc) = 0;
        func_0x000109444760(auStack_2a4,&uStack_4f0,&uStack_4e0,&uStack_4d0);
        uStack_214 = SUB81(param_2[0x28],0);
        FUN_10a0a2364(alStack_210,param_4);
        pppplVar14 = param_1[0x137];
        pppplStack_378 = (long ****)0x0;
        pppplStack_370 = (long ****)0x0;
        if (pppplVar14 == (long ****)0x0) {
          unaff_x23[2] = (long ****)ppplStack_330;
          unaff_x23[1] = (long ****)ppplStack_338;
          uStack_1f0 = (long *****)pppplStack_340;
          ppplStack_1d8 = ppplStack_328;
          ppplStack_1c8 = ppplStack_318;
          uStack_1d0 = lStack_320;
          lStack_320 = 0;
          ppplStack_318 = (long ***)0x0;
          uStack_1c0 = lStack_310;
          fStack_1b8 = (float)uStack_308;
          uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
          cStack_178 = 0;
          cStack_178 = cStack_2c8 == '\x01';
          if ((bool)cStack_178) {
            lStack_1a8 = lStack_2f8;
            uStack_1b0 = uStack_300;
            lStack_1a0 = lStack_2f0;
            pppplVar14 = unaff_x24[0xb];
            unaff_x23[0xc] = unaff_x24[0xc];
            unaff_x23[0xb] = pppplVar14;
            uStack_2e8 = 0;
            plStack_2e0 = (long *)0x0;
            lStack_188 = lStack_2d8;
            uStack_180 = uStack_2d0;
          }
          uStack_168 = uStack_2b8;
          uStack_170 = uStack_2c0;
          uStack_160 = uStack_2b0;
          uStack_158 = uStack_2a8;
          *(undefined8 *)((long)unaff_x23 + 0xa4) = 0;
          *(undefined8 *)((long)unaff_x23 + 0x9c) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xb4) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xac) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xc4) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xbc) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xd4) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xcc) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xe4) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xdc) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xf4) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xec) = 0;
          *(undefined8 *)((long)unaff_x23 + 0x104) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xfc) = 0;
          func_0x000109444760(auStack_154,auStack_2a4,auStack_294,auStack_284);
          uStack_c4 = uStack_214;
          FUN_10a0a2364(alStack_c0,alStack_210);
          ppppplVar13 = (long *****)0x208;
          __Znwm();
          *(undefined2 *)(ppppplVar13 + 3) = 4;
          ppppplVar13[2] = (long ****)0x0;
          ppppplVar13[1] = (long ****)0x200000006;
          ppppplVar13[5] = (long ****)0x0;
          ppppplVar13[4] = (long ****)0x0;
          ppppplVar13[7] = (long ****)0x0;
          ppppplVar13[6] = (long ****)0x0;
          ppppplVar13[9] = (long ****)0x0;
          ppppplVar13[8] = (long ****)0x0;
          ppppplVar13[0xb] = (long ****)0x0;
          ppppplVar13[10] = (long ****)0x0;
          ppppplVar13[0xd] = (long ****)0x0;
          ppppplVar13[0xc] = (long ****)0x0;
          ppppplVar13[0xf] = (long ****)0x0;
          ppppplVar13[0xe] = (long ****)0x0;
          unaff_x24 = ppppplVar13 + 0x12;
          *unaff_x24 = (long ****)0x0;
          ppppplVar13[0x10] = (long ****)0x0;
          ppppplVar13[0x11] = (long ****)(ppppplVar13 + 3);
          *ppppplVar13 = (long ****)&PTR_FUN_110c6dc30;
          unaff_x23 = ppppplVar13 + 0x14;
          *(undefined2 *)(ppppplVar13 + 0x13) = 0;
          FUN_10acfb0b4(unaff_x23,&uStack_1f0);
          ppppplVar13[0x40] = (long ****)0x0;
          if (pppplStack_378 != (long ****)0x0) {
            puVar3 = (ulong *)(pppplStack_378 + 1);
            do {
              uVar17 = *puVar3;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar9) {
                *puVar3 = uVar17 - 4;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((uVar17 & 0x1fffffffc) == 4) {
              do {
                uVar17 = *puVar3;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar9) {
                  *puVar3 = uVar17 - 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (uVar17 - 1 == 0) {
                (**(code **)((long)*pppplStack_378 + 8))();
              }
            }
          }
          pppplStack_378 = (long ****)ppppplVar13;
          if (pppplStack_370 != (long ****)0x0) {
            func_0x0001092b4274(&pppplStack_370);
          }
          pppplStack_380 = (long ****)unaff_x23;
          pppplStack_370 = (long ****)ppppplVar13;
          if (plStack_a8 == alStack_c0) {
            lVar15 = 0x20;
LAB_10acf8a78:
            (**(code **)(*plStack_a8 + lVar15))();
          }
          else if (plStack_a8 != (long *)0x0) {
            lVar15 = 0x28;
            goto LAB_10acf8a78;
          }
          plVar2 = plStack_190;
          if ((cStack_178 == '\x01') && (plStack_190 != (long *)0x0)) {
            plVar4 = plStack_190 + 1;
            do {
              lVar15 = *plVar4;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar9) {
                *plVar4 = lVar15 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_190 + 0x10))(plStack_190);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
          ppplVar21 = ppplStack_1c8;
          if ((long ****)ppplStack_1c8 != (long ****)0x0) {
            pppplVar14 = (long ****)(ppplStack_1c8 + 1);
            do {
              ppplVar18 = *pppplVar14;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(pppplVar14,0x10);
              if (bVar9) {
                *pppplVar14 = (long ***)((long)ppplVar18 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (ppplVar18 == (long ***)0x0) {
              (*(code *)(*ppplStack_1c8)[2])(ppplStack_1c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar21);
            }
          }
          ppplStack_368 = (long ***)FUN_10acfabbc;
        }
        else {
          pppplStack_3c0 = (long ****)0x0;
          (*(code *)(*pppplVar14)[5])(pppplVar14,0,&pppplStack_3c0);
          if (pppplStack_3c0 != (long ****)0x0) {
            func_0x0001092af97c(&pppplStack_3c0);
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10acf8d8c);
            (*pcVar10)();
          }
          unaff_x23[2] = (long ****)ppplStack_330;
          unaff_x23[1] = (long ****)ppplStack_338;
          uStack_1f0 = (long *****)pppplStack_340;
          ppplStack_1d8 = ppplStack_328;
          unaff_x25 = &uStack_1f0;
          ppplStack_1c8 = ppplStack_318;
          uStack_1d0 = lStack_320;
          lStack_320 = 0;
          ppplStack_318 = (long ***)0x0;
          uStack_1c0 = lStack_310;
          fStack_1b8 = (float)uStack_308;
          uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
          cStack_178 = 0;
          cStack_178 = cStack_2c8 == '\x01';
          if ((bool)cStack_178) {
            lStack_1a8 = lStack_2f8;
            uStack_1b0 = uStack_300;
            lStack_1a0 = lStack_2f0;
            pppplVar16 = unaff_x24[0xb];
            unaff_x23[0xc] = unaff_x24[0xc];
            unaff_x23[0xb] = pppplVar16;
            uStack_2e8 = 0;
            plStack_2e0 = (long *)0x0;
            lStack_188 = lStack_2d8;
            uStack_180 = uStack_2d0;
          }
          uStack_168 = uStack_2b8;
          uStack_170 = uStack_2c0;
          uStack_160 = uStack_2b0;
          uStack_158 = uStack_2a8;
          *(undefined8 *)((long)unaff_x23 + 0xa4) = 0;
          *(undefined8 *)((long)unaff_x23 + 0x9c) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xb4) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xac) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xc4) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xbc) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xd4) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xcc) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xe4) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xdc) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xf4) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xec) = 0;
          *(undefined8 *)((long)unaff_x23 + 0x104) = 0;
          *(undefined8 *)((long)unaff_x23 + 0xfc) = 0;
          func_0x000109444760(auStack_154,auStack_2a4,auStack_294,auStack_284);
          uStack_c4 = uStack_214;
          FUN_10a0a2364(alStack_c0,alStack_210);
          unaff_x23 = (long *****)0x210;
          __Znwm();
          unaff_x23[2] = (long ****)0x0;
          unaff_x23[1] = (long ****)0x200000006;
          *(undefined2 *)(unaff_x23 + 3) = 4;
          unaff_x23[5] = (long ****)0x0;
          unaff_x23[4] = (long ****)0x0;
          unaff_x23[7] = (long ****)0x0;
          unaff_x23[6] = (long ****)0x0;
          unaff_x23[9] = (long ****)0x0;
          unaff_x23[8] = (long ****)0x0;
          unaff_x23[0xb] = (long ****)0x0;
          unaff_x23[10] = (long ****)0x0;
          unaff_x23[0xd] = (long ****)0x0;
          unaff_x23[0xc] = (long ****)0x0;
          unaff_x23[0xf] = (long ****)0x0;
          unaff_x23[0xe] = (long ****)0x0;
          unaff_x23[0x10] = (long ****)0x0;
          unaff_x23[0x11] = (long ****)(unaff_x23 + 3);
          unaff_x23[0x12] = (long ****)0x0;
          *(undefined2 *)(unaff_x23 + 0x13) = 0;
          unaff_x24 = unaff_x23 + 0x14;
          *unaff_x23 = (long ****)&PTR_FUN_110c6dbf8;
          FUN_10acfb0b4(unaff_x24,&uStack_1f0);
          unaff_x23[0x40] = (long ****)0x0;
          unaff_x23[0x41] = pppplVar14;
          if (pppplStack_378 != (long ****)0x0) {
            puVar3 = (ulong *)(pppplStack_378 + 1);
            do {
              uVar17 = *puVar3;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar9) {
                *puVar3 = uVar17 - 4;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((uVar17 & 0x1fffffffc) == 4) {
              do {
                uVar17 = *puVar3;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar9) {
                  *puVar3 = uVar17 - 1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (uVar17 - 1 == 0) {
                (**(code **)((long)*pppplStack_378 + 8))();
              }
            }
          }
          pppplStack_378 = (long ****)unaff_x23;
          if (pppplStack_370 != (long ****)0x0) {
            func_0x0001092b4274(&pppplStack_370);
          }
          pppplStack_380 = (long ****)unaff_x24;
          pppplStack_370 = (long ****)unaff_x23;
          if (plStack_a8 == alStack_c0) {
            lVar15 = 0x20;
LAB_10acf89d4:
            (**(code **)(*plStack_a8 + lVar15))();
          }
          else if (plStack_a8 != (long *)0x0) {
            lVar15 = 0x28;
            goto LAB_10acf89d4;
          }
          plVar2 = plStack_190;
          if ((cStack_178 == '\x01') && (plStack_190 != (long *)0x0)) {
            plVar4 = plStack_190 + 1;
            do {
              lVar15 = *plVar4;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar9) {
                *plVar4 = lVar15 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_190 + 0x10))(plStack_190);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
          ppplVar21 = ppplStack_1c8;
          if ((long ****)ppplStack_1c8 != (long ****)0x0) {
            pppplVar14 = (long ****)(ppplStack_1c8 + 1);
            do {
              ppplVar18 = *pppplVar14;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(pppplVar14,0x10);
              if (bVar9) {
                *pppplVar14 = (long ***)((long)ppplVar18 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (ppplVar18 == (long ***)0x0) {
              (*(code *)(*ppplStack_1c8)[2])(ppplStack_1c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar21);
            }
          }
          ppplStack_368 = (long ***)0x10acfab8c;
          __ZNSt13exception_ptrD1Ev(&pppplStack_3c0);
        }
        param_4 = (long *****)pppplStack_380;
        param_1 = param_1 + 0x135;
        if ((long ****)pppplStack_380[0x2c] != (long ****)0x0) {
          func_0x0001092b4274(pppplStack_380 + 0x2c);
        }
        param_4[0x2c] = pppplStack_370;
        pppplStack_370 = (long ****)0x0;
        uStack_1f0 = (long *****)ppplStack_368;
        pppplStack_1e8 = pppplStack_380;
        uStack_1e0 = param_1;
        (*(code *)**param_1)(param_1,&uStack_1f0);
        param_1 = (long *****)pppplStack_378;
        pppplStack_378 = (long ****)0x0;
        if ((pppplStack_370 != (long ****)0x0) &&
           (func_0x0001092b4274(&pppplStack_370), pppplStack_378 != (long ****)0x0)) {
          puVar3 = (ulong *)(pppplStack_378 + 1);
          do {
            uVar17 = *puVar3;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar9) {
              *puVar3 = uVar17 - 4;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if ((uVar17 & 0x1fffffffc) == 4) {
            do {
              uVar17 = *puVar3;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar9) {
                *puVar3 = uVar17 - 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (uVar17 - 1 == 0) {
              (**(code **)((long)*pppplStack_378 + 8))();
            }
          }
        }
        if (plStack_1f8 == alStack_210) {
          lVar15 = 0x20;
LAB_10acf8bd4:
          (**(code **)(*plStack_1f8 + lVar15))();
        }
        else if (plStack_1f8 != (long *)0x0) {
          lVar15 = 0x28;
          goto LAB_10acf8bd4;
        }
        plVar2 = plStack_2e0;
        if ((cStack_2c8 == '\x01') && (plStack_2e0 != (long *)0x0)) {
          plVar4 = plStack_2e0 + 1;
          do {
            lVar15 = *plVar4;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar9) {
              *plVar4 = lVar15 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        param_2 = ppplStack_318;
        if (ppplStack_318 != (long ***)0x0) {
          plVar2 = (long *)(ppplStack_318 + 1);
          do {
            lVar15 = *plVar2;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *plVar2 = lVar15 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar15 == 0) {
            (**(code **)((long)*ppplStack_318 + 0x10))(ppplStack_318);
            __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
          }
        }
        if (param_1 != (long *****)0x0) {
          ppppplVar13 = param_1 + 1;
          do {
            pppplVar14 = *ppppplVar13;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
            if (bVar9) {
              *ppppplVar13 = (long ****)((long)pppplVar14 + -4);
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (((ulong)pppplVar14 & 0x1fffffffc) == 4) {
            do {
              pppplVar14 = *ppppplVar13;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(ppppplVar13,0x10);
              if (bVar9) {
                *ppppplVar13 = (long ****)((long)pppplVar14 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((long ****)((long)pppplVar14 + -1) == (long ****)0x0) {
              (*(code *)(*param_1)[1])(param_1);
            }
          }
        }
        uVar12 = 1;
      } while( true );
    }
    pppplVar16 = param_1[1];
    ppppplVar13 = param_1;
    FUN_10a4eff18();
    pppplVar16 = (long ****)((long)ppppplVar13 + ((long)pppplVar16 - (long)pppplVar14));
    pppplVar14 = *param_1;
    pppplVar7 = param_1[1];
    lVar15 = (long)pppplVar14 - (long)pppplVar7;
    pppplVar5 = (long ****)((long)pppplVar16 + lVar15);
    pppplVar19 = pppplVar5;
    if (lVar15 != 0) {
      do {
        ppplVar18 = pppplVar14[1];
        ppplVar21 = *pppplVar14;
        pppplVar19[2] = pppplVar14[2];
        pppplVar19[1] = ppplVar18;
        *pppplVar19 = ppplVar21;
        pppplVar14 = pppplVar14 + 3;
        pppplVar19 = pppplVar19 + 3;
      } while (pppplVar14 != pppplVar7);
      pppplVar14 = *param_1;
    }
    *param_1 = pppplVar5;
    param_1[1] = pppplVar16;
    param_1[2] = (long ****)(ppppplVar13 + (long)param_2 * 3);
    if (pppplVar14 != (long ****)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10acf80a8; end: 10acf8ea7;  */

void FUN_10acf80a8(long *****param_1,long ***param_2,long param_3,long *****param_4)

{
  byte *pbVar1;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long ***ppplVar8;
  code *pcVar9;
  int iVar10;
  undefined8 uVar11;
  long *****ppppplVar12;
  long lVar13;
  ulong uVar14;
  long ***ppplVar15;
  long *****unaff_x19;
  long *unaff_x20;
  long *****unaff_x21;
  long ****pppplVar16;
  long *****unaff_x23;
  long *****unaff_x24;
  undefined8 *unaff_x25;
  float fVar17;
  long ****pppplVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 auStack_43c [3];
  undefined4 uStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  undefined4 uStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  undefined4 uStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  undefined4 uStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  undefined4 uStack_3a4;
  long ****pppplStack_3a0;
  long *plStack_398;
  long ***ppplStack_390;
  long ***ppplStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long ****pppplStack_360;
  long ****pppplStack_358;
  long ****pppplStack_350;
  long ***ppplStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long ****pppplStack_320;
  long ***ppplStack_318;
  long ***ppplStack_310;
  long ***ppplStack_308;
  long lStack_300;
  long ***ppplStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  long lStack_2b8;
  undefined4 uStack_2b0;
  char cStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined1 auStack_284 [16];
  undefined1 auStack_274 [16];
  undefined1 auStack_264 [112];
  undefined1 uStack_1f4;
  long alStack_1f0 [3];
  long *plStack_1d8;
  undefined8 uStack_1d0;
  long ****pppplStack_1c8;
  undefined8 uStack_1c0;
  long ***ppplStack_1b8;
  undefined8 uStack_1b0;
  long ***ppplStack_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  undefined4 uStack_194;
  ulong uStack_190;
  long lStack_188;
  long lStack_180;
  long *plStack_170;
  long lStack_168;
  undefined4 uStack_160;
  char cStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined1 auStack_134 [144];
  undefined1 uStack_a4;
  long alStack_a0 [3];
  long *plStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((long ****)param_2[0x27] != param_1[0x126]) {
    unaff_x23 = (long *****)&uStack_1d0;
    unaff_x24 = &pppplStack_320;
    unaff_x25 = auStack_43c;
    pbVar1 = (byte *)((long)param_1 + 0x964);
    do {
      bVar5 = *pbVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar7) {
        *pbVar1 = 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    unaff_x19 = param_1;
    unaff_x20 = (long *)param_2;
    unaff_x21 = param_4;
    if ((bVar5 & 1) == 0) {
      param_1[0x126] = (long ****)param_2[0x27];
      fVar17 = *(float *)(param_3 + 0x88);
      fVar19 = *(float *)(param_3 + 0x8c);
      fVar20 = *(float *)(param_3 + 0x90);
      fVar21 = *(float *)(param_3 + 0x98);
      fVar22 = *(float *)(param_3 + 0x9c);
      fVar23 = *(float *)(param_3 + 0xa0);
      fVar24 = *(float *)(param_3 + 0xa8);
      fVar25 = *(float *)(param_3 + 0xac);
      fVar26 = *(float *)(param_3 + 0xb0);
      fStack_3e0 = -(fVar25 * fVar23) + fVar26 * fVar22;
      fVar27 = -(fVar25 * fVar20) + fVar26 * fVar19;
      fStack_3d8 = -(fVar22 * fVar20) + fVar23 * fVar19;
      fStack_3b8 = 1.0 / (-(fVar21 * fVar27) + fStack_3e0 * fVar17 + fStack_3d8 * fVar24);
      fStack_3e0 = fStack_3e0 * fStack_3b8;
      fStack_3d0 = -((-(fVar24 * fVar23) + fVar26 * fVar21) * fStack_3b8);
      fStack_3c0 = (-(fVar24 * fVar22) + fVar25 * fVar21) * fStack_3b8;
      fStack_3dc = -(fVar27 * fStack_3b8);
      fStack_3cc = (-(fVar24 * fVar20) + fVar26 * fVar17) * fStack_3b8;
      fStack_3bc = -((-(fVar24 * fVar19) + fVar25 * fVar17) * fStack_3b8);
      fStack_3d8 = fStack_3d8 * fStack_3b8;
      fStack_3c8 = -((-(fVar21 * fVar20) + fVar23 * fVar17) * fStack_3b8);
      fStack_3b8 = (-(fVar21 * fVar19) + fVar22 * fVar17) * fStack_3b8;
      fVar17 = *(float *)(param_3 + 0xb8);
      fVar19 = *(float *)(param_3 + 0xbc);
      fVar20 = *(float *)(param_3 + 0xc0);
      fStack_3b0 = (-(fStack_3d0 * fVar19) - fVar17 * fStack_3e0) - fVar20 * fStack_3c0;
      fStack_3ac = (-(fStack_3cc * fVar19) - fVar17 * fStack_3dc) - fVar20 * fStack_3bc;
      uStack_3d4 = 0;
      uStack_3c4 = 0;
      uStack_3b4 = 0;
      fStack_3a8 = (-(fStack_3c8 * fVar19) - fVar17 * fStack_3d8) - fVar20 * fStack_3b8;
      uStack_3a4 = 0x3f800000;
      func_0x000109519fd0(&fStack_420,param_2 + 0x1f,&fStack_3e0);
      fVar22 = -(fStack_3fc * fStack_408) + fStack_3f8 * fStack_40c;
      fVar19 = -(fStack_3fc * fStack_418) + fStack_3f8 * fStack_41c;
      fVar21 = -(fStack_40c * fStack_418) + fStack_408 * fStack_41c;
      fVar17 = 1.0 / (-(fStack_410 * fVar19) + fVar22 * fStack_420 + fVar21 * fStack_400);
      fVar22 = fVar22 * fVar17;
      fVar25 = -((-(fStack_400 * fStack_408) + fStack_3f8 * fStack_410) * fVar17);
      fVar26 = (-(fStack_400 * fStack_40c) + fStack_3fc * fStack_410) * fVar17;
      fVar24 = -(fVar19 * fVar17);
      fVar23 = (-(fStack_400 * fStack_418) + fStack_3f8 * fStack_420) * fVar17;
      fVar20 = -((-(fStack_400 * fStack_41c) + fStack_3fc * fStack_420) * fVar17);
      fVar21 = fVar21 * fVar17;
      fVar19 = -((-(fStack_410 * fStack_418) + fStack_408 * fStack_420) * fVar17);
      fVar17 = (-(fStack_410 * fStack_41c) + fStack_40c * fStack_420) * fVar17;
      uStack_1d0 = (long *****)CONCAT44(fVar24,fVar22);
      fStack_198 = (-(fVar19 * fStack_3ec) - fStack_3f0 * fVar21) - fStack_3e8 * fVar17;
      pppplStack_1c8 = (long ****)(ulong)(uint)fVar21;
      uStack_1c0 = (long *****)CONCAT44(fVar23,fVar25);
      ppplStack_1b8 = (long ***)(ulong)(uint)fVar19;
      uStack_1b0 = CONCAT44(fVar20,fVar26);
      ppplStack_1a8 = (long ***)(ulong)(uint)fVar17;
      uStack_1a0 = CONCAT44((-(fVar23 * fStack_3ec) - fStack_3f0 * fVar24) - fStack_3e8 * fVar20,
                            (-(fVar25 * fStack_3ec) - fStack_3f0 * fVar22) - fStack_3e8 * fVar26);
      uStack_194 = 0x3f800000;
      ppplStack_318 = *(long ****)((long)param_2 + 0xa4);
      pppplStack_320 = *(long *****)((long)param_2 + 0x9c);
      ppplStack_308 = *(long ****)((long)param_2 + 0xb4);
      ppplStack_310 = *(long ****)((long)param_2 + 0xac);
      ppplStack_2f8 = *(long ****)((long)param_2 + 0xc4);
      lStack_300 = *(undefined8 *)((long)param_2 + 0xbc);
      uStack_2e8._0_4_ = (float)*(undefined8 *)((long)param_2 + 0xd4);
      lStack_2f0 = CONCAT44((float)((ulong)*(undefined8 *)((long)param_2 + 0xcc) >> 0x20) * 0.01,
                            (float)*(undefined8 *)((long)param_2 + 0xcc) * 0.01);
      uStack_2e8._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0xd4) >> 0x20);
      uStack_2e8 = CONCAT44(uStack_2e8._4_4_,(float)uStack_2e8 * 0.01);
      func_0x000109519fd0(&uStack_4d0,&uStack_1d0,&pppplStack_320);
      if ((bRam00000001137ecc60 & 1) == 0) goto LAB_10acf8ce8;
      goto LAB_10acf83a4;
    }
  }
  param_4 = unaff_x21;
  param_2 = (long ***)unaff_x20;
  param_1 = unaff_x19;
  uVar11 = 0;
  do {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail(uVar11);
LAB_10acf8ce8:
    iVar10 = 0x137ecc60;
    ___cxa_guard_acquire();
    if (iVar10 != 0) {
      uRam00000001137eccb4 = 0x3f800000;
      uRam00000001137eccb8 = 0;
      uRam00000001137eccc0 = 0;
      uRam00000001137eccd0 = 0;
      uRam00000001137eccc8 = 0xb3bbbd2ebf800000;
      uRam00000001137eccd8 = 0xbf80000033bbbd2e;
      uRam00000001137ecce0 = 0;
      uRam00000001137ecce8 = 0;
      uRam00000001137eccf0 = 0x3f800000;
      ___cxa_guard_release(0x1137ecc60);
    }
LAB_10acf83a4:
    if ((bRam00000001137ecc68 & 1) == 0) {
      iVar10 = 0x137ecc68;
      ___cxa_guard_acquire();
      if (iVar10 != 0) {
        uRam00000001137eccf4 = 0x3f800000;
        uRam00000001137eccf8 = 0;
        uRam00000001137ecd00 = 0;
        uRam00000001137ecd10 = 0;
        uRam00000001137ecd08 = 0x3f800000b33bbd2e;
        uRam00000001137ecd18 = 0xb33bbd2ebf800000;
        uRam00000001137ecd20 = 0;
        uRam00000001137ecd28 = 0;
        uRam00000001137ecd30 = 0x3f800000;
        ___cxa_guard_release(0x1137ecc68);
      }
    }
    func_0x000109519fd0(&pppplStack_3a0,0x1137eccf4,&uStack_4d0);
    func_0x000109519fd0(&pppplStack_360,&pppplStack_3a0,0x1137eccb4);
    plStack_398 = (long *)pppplStack_358;
    pppplStack_3a0 = pppplStack_360;
    ppplStack_388 = ppplStack_348;
    ppplStack_390 = (long ***)pppplStack_350;
    uStack_378 = uStack_338;
    uStack_380 = uStack_340;
    uStack_368 = uStack_328;
    uStack_370 = uStack_330;
    func_0x000109445390(auStack_43c,&pppplStack_3a0);
    FUN_10acef8e4(&uStack_1d0);
    pppplStack_320 = (long ****)NEON_scvtf(*(undefined8 *)((long)param_2 + 0x7c),4);
    pppplStack_360 = *(long *****)((long)param_2 + 0x8c);
    pppplStack_3a0 = *(long *****)((long)param_2 + 0x94);
    func_0x0001098e5f58(&uStack_1d0,&pppplStack_320,&pppplStack_360,&pppplStack_3a0);
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4b0 = 0;
    uStack_4a0 = 0;
    uStack_4a8 = 0x3f800000;
    uStack_490 = 0;
    uStack_498 = 0x3f800000;
    uStack_480 = 0;
    uStack_488 = 0x3f8000003f800000;
    uStack_470 = 0;
    uStack_478 = 0x3f80000000000000;
    uStack_468 = 0x3f80000000000000;
    ppplStack_318 = ppplStack_1b8;
    pppplStack_320 = (long ****)uStack_1c0;
    ppplStack_310 = ppplStack_1a8;
    func_0x000107c2b054(&ppplStack_308,"NONE");
    lStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    func_0x00010943f3a8(&pppplStack_320,&uStack_4d0);
    if (lStack_2f0 != 0) {
      uStack_2e8 = lStack_2f0;
      __ZdlPv();
    }
    if ((long)ppplStack_2f8 < 0) {
      __ZdlPv(ppplStack_308);
    }
    pppplVar16 = (long ****)uStack_1d0;
    uStack_1d0 = (long *****)0x0;
    if (pppplVar16 != (long ****)0x0) {
      (*(code *)(*pppplVar16)[1])();
    }
    pppplVar16 = (long ****)*param_2;
    unaff_x24[2] = (long ****)param_2[1];
    unaff_x24[1] = pppplVar16;
    pppplStack_320 = (long ****)param_1;
    ppplStack_308 = (long ***)param_2[2];
    ppplStack_2f8 = (long ***)param_2[4];
    lStack_300 = (long)param_2[3];
    if (param_2[4] != (long **)0x0) {
      plVar2 = (long *)((long)param_2[4] + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = *plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    lStack_2f0 = (long)param_2[5];
    uStack_2e8 = CONCAT44(uStack_2e8._4_4_,(int)param_2[6]);
    uStack_2e0 = uStack_2e0 & 0xffffffffffffff00;
    cStack_2a8 = '\0';
    if ((char)param_2[0xe] == '\x01') {
      lStack_2d8 = (long)param_2[8];
      uStack_2e0 = (ulong)param_2[7];
      lStack_2d0 = (long)param_2[9];
      lVar13 = (long)param_2[0xb];
      pppplVar16 = (long ****)param_2[10];
      unaff_x24[0xc] = (long ****)param_2[0xb];
      unaff_x24[0xb] = pppplVar16;
      if (lVar13 != 0) {
        plVar2 = (long *)(lVar13 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = *plVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lStack_2b8 = (long)param_2[0xc];
      uStack_2b0 = (int)param_2[0xd];
      cStack_2a8 = '\x01';
    }
    uStack_298 = unaff_x25[1];
    uStack_2a0 = *unaff_x25;
    uStack_290 = unaff_x25[2];
    uStack_288 = uStack_424;
    *(undefined8 *)((long)unaff_x24 + 0xa4) = 0;
    *(undefined8 *)((long)unaff_x24 + 0x9c) = 0;
    *(undefined8 *)((long)unaff_x24 + 0xb4) = 0;
    *(undefined8 *)((long)unaff_x24 + 0xac) = 0;
    *(undefined8 *)((long)unaff_x24 + 0xc4) = 0;
    *(undefined8 *)((long)unaff_x24 + 0xbc) = 0;
    *(undefined8 *)((long)unaff_x24 + 0xd4) = 0;
    *(undefined8 *)((long)unaff_x24 + 0xcc) = 0;
    *(undefined8 *)((long)unaff_x24 + 0xe4) = 0;
    *(undefined8 *)((long)unaff_x24 + 0xdc) = 0;
    *(undefined8 *)((long)unaff_x24 + 0xf4) = 0;
    *(undefined8 *)((long)unaff_x24 + 0xec) = 0;
    *(undefined8 *)((long)unaff_x24 + 0x104) = 0;
    *(undefined8 *)((long)unaff_x24 + 0xfc) = 0;
    func_0x000109444760(auStack_284,&uStack_4d0,&uStack_4c0,&uStack_4b0);
    uStack_1f4 = SUB81(param_2[0x28],0);
    FUN_10a0a2364(alStack_1f0,param_4);
    pppplVar16 = param_1[0x137];
    pppplStack_358 = (long ****)0x0;
    pppplStack_350 = (long ****)0x0;
    if (pppplVar16 == (long ****)0x0) {
      unaff_x23[2] = (long ****)ppplStack_310;
      unaff_x23[1] = (long ****)ppplStack_318;
      uStack_1d0 = (long *****)pppplStack_320;
      ppplStack_1b8 = ppplStack_308;
      ppplStack_1a8 = ppplStack_2f8;
      uStack_1b0 = lStack_300;
      lStack_300 = 0;
      ppplStack_2f8 = (long ***)0x0;
      uStack_1a0 = lStack_2f0;
      fStack_198 = (float)uStack_2e8;
      uStack_190 = uStack_190 & 0xffffffffffffff00;
      cStack_158 = 0;
      cStack_158 = cStack_2a8 == '\x01';
      if ((bool)cStack_158) {
        lStack_188 = lStack_2d8;
        uStack_190 = uStack_2e0;
        lStack_180 = lStack_2d0;
        pppplVar16 = unaff_x24[0xb];
        unaff_x23[0xc] = unaff_x24[0xc];
        unaff_x23[0xb] = pppplVar16;
        uStack_2c8 = 0;
        plStack_2c0 = (long *)0x0;
        lStack_168 = lStack_2b8;
        uStack_160 = uStack_2b0;
      }
      uStack_148 = uStack_298;
      uStack_150 = uStack_2a0;
      uStack_140 = uStack_290;
      uStack_138 = uStack_288;
      *(undefined8 *)((long)unaff_x23 + 0xa4) = 0;
      *(undefined8 *)((long)unaff_x23 + 0x9c) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xb4) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xac) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xc4) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xbc) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xd4) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xcc) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xe4) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xdc) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xf4) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xec) = 0;
      *(undefined8 *)((long)unaff_x23 + 0x104) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xfc) = 0;
      func_0x000109444760(auStack_134,auStack_284,auStack_274,auStack_264);
      uStack_a4 = uStack_1f4;
      FUN_10a0a2364(alStack_a0,alStack_1f0);
      ppppplVar12 = (long *****)0x208;
      __Znwm();
      *(undefined2 *)(ppppplVar12 + 3) = 4;
      ppppplVar12[2] = (long ****)0x0;
      ppppplVar12[1] = (long ****)0x200000006;
      ppppplVar12[5] = (long ****)0x0;
      ppppplVar12[4] = (long ****)0x0;
      ppppplVar12[7] = (long ****)0x0;
      ppppplVar12[6] = (long ****)0x0;
      ppppplVar12[9] = (long ****)0x0;
      ppppplVar12[8] = (long ****)0x0;
      ppppplVar12[0xb] = (long ****)0x0;
      ppppplVar12[10] = (long ****)0x0;
      ppppplVar12[0xd] = (long ****)0x0;
      ppppplVar12[0xc] = (long ****)0x0;
      ppppplVar12[0xf] = (long ****)0x0;
      ppppplVar12[0xe] = (long ****)0x0;
      unaff_x24 = ppppplVar12 + 0x12;
      *unaff_x24 = (long ****)0x0;
      ppppplVar12[0x10] = (long ****)0x0;
      ppppplVar12[0x11] = (long ****)(ppppplVar12 + 3);
      *ppppplVar12 = (long ****)&PTR_FUN_110c6dc30;
      unaff_x23 = ppppplVar12 + 0x14;
      *(undefined2 *)(ppppplVar12 + 0x13) = 0;
      FUN_10acfb0b4(unaff_x23,&uStack_1d0);
      ppppplVar12[0x40] = (long ****)0x0;
      if (pppplStack_358 != (long ****)0x0) {
        puVar3 = (ulong *)(pppplStack_358 + 1);
        do {
          uVar14 = *puVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar7) {
            *puVar3 = uVar14 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar7) {
              *puVar3 = uVar14 - 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)((long)*pppplStack_358 + 8))();
          }
        }
      }
      pppplStack_358 = (long ****)ppppplVar12;
      if (pppplStack_350 != (long ****)0x0) {
        func_0x0001092b4274(&pppplStack_350);
      }
      pppplStack_360 = (long ****)unaff_x23;
      pppplStack_350 = (long ****)ppppplVar12;
      if (plStack_88 == alStack_a0) {
        lVar13 = 0x20;
LAB_10acf8a78:
        (**(code **)(*plStack_88 + lVar13))();
      }
      else if (plStack_88 != (long *)0x0) {
        lVar13 = 0x28;
        goto LAB_10acf8a78;
      }
      plVar2 = plStack_170;
      if ((cStack_158 == '\x01') && (plStack_170 != (long *)0x0)) {
        plVar4 = plStack_170 + 1;
        do {
          lVar13 = *plVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_170 + 0x10))(plStack_170);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      ppplVar8 = ppplStack_1a8;
      if ((long ****)ppplStack_1a8 != (long ****)0x0) {
        pppplVar16 = (long ****)(ppplStack_1a8 + 1);
        do {
          ppplVar15 = *pppplVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppplVar16,0x10);
          if (bVar7) {
            *pppplVar16 = (long ***)((long)ppplVar15 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppplVar15 == (long ***)0x0) {
          (*(code *)(*ppplStack_1a8)[2])(ppplStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar8);
        }
      }
      ppplStack_348 = (long ***)FUN_10acfabbc;
    }
    else {
      pppplStack_3a0 = (long ****)0x0;
      (*(code *)(*pppplVar16)[5])(pppplVar16,0,&pppplStack_3a0);
      if (pppplStack_3a0 != (long ****)0x0) {
        func_0x0001092af97c(&pppplStack_3a0);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10acf8d8c);
        (*pcVar9)();
      }
      unaff_x23[2] = (long ****)ppplStack_310;
      unaff_x23[1] = (long ****)ppplStack_318;
      uStack_1d0 = (long *****)pppplStack_320;
      ppplStack_1b8 = ppplStack_308;
      unaff_x25 = &uStack_1d0;
      ppplStack_1a8 = ppplStack_2f8;
      uStack_1b0 = lStack_300;
      lStack_300 = 0;
      ppplStack_2f8 = (long ***)0x0;
      uStack_1a0 = lStack_2f0;
      fStack_198 = (float)uStack_2e8;
      uStack_190 = uStack_190 & 0xffffffffffffff00;
      cStack_158 = 0;
      cStack_158 = cStack_2a8 == '\x01';
      if ((bool)cStack_158) {
        lStack_188 = lStack_2d8;
        uStack_190 = uStack_2e0;
        lStack_180 = lStack_2d0;
        pppplVar18 = unaff_x24[0xb];
        unaff_x23[0xc] = unaff_x24[0xc];
        unaff_x23[0xb] = pppplVar18;
        uStack_2c8 = 0;
        plStack_2c0 = (long *)0x0;
        lStack_168 = lStack_2b8;
        uStack_160 = uStack_2b0;
      }
      uStack_148 = uStack_298;
      uStack_150 = uStack_2a0;
      uStack_140 = uStack_290;
      uStack_138 = uStack_288;
      *(undefined8 *)((long)unaff_x23 + 0xa4) = 0;
      *(undefined8 *)((long)unaff_x23 + 0x9c) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xb4) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xac) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xc4) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xbc) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xd4) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xcc) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xe4) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xdc) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xf4) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xec) = 0;
      *(undefined8 *)((long)unaff_x23 + 0x104) = 0;
      *(undefined8 *)((long)unaff_x23 + 0xfc) = 0;
      func_0x000109444760(auStack_134,auStack_284,auStack_274,auStack_264);
      uStack_a4 = uStack_1f4;
      FUN_10a0a2364(alStack_a0,alStack_1f0);
      unaff_x23 = (long *****)0x210;
      __Znwm();
      unaff_x23[2] = (long ****)0x0;
      unaff_x23[1] = (long ****)0x200000006;
      *(undefined2 *)(unaff_x23 + 3) = 4;
      unaff_x23[5] = (long ****)0x0;
      unaff_x23[4] = (long ****)0x0;
      unaff_x23[7] = (long ****)0x0;
      unaff_x23[6] = (long ****)0x0;
      unaff_x23[9] = (long ****)0x0;
      unaff_x23[8] = (long ****)0x0;
      unaff_x23[0xb] = (long ****)0x0;
      unaff_x23[10] = (long ****)0x0;
      unaff_x23[0xd] = (long ****)0x0;
      unaff_x23[0xc] = (long ****)0x0;
      unaff_x23[0xf] = (long ****)0x0;
      unaff_x23[0xe] = (long ****)0x0;
      unaff_x23[0x10] = (long ****)0x0;
      unaff_x23[0x11] = (long ****)(unaff_x23 + 3);
      unaff_x23[0x12] = (long ****)0x0;
      *(undefined2 *)(unaff_x23 + 0x13) = 0;
      unaff_x24 = unaff_x23 + 0x14;
      *unaff_x23 = (long ****)&PTR_FUN_110c6dbf8;
      FUN_10acfb0b4(unaff_x24,&uStack_1d0);
      unaff_x23[0x40] = (long ****)0x0;
      unaff_x23[0x41] = pppplVar16;
      if (pppplStack_358 != (long ****)0x0) {
        puVar3 = (ulong *)(pppplStack_358 + 1);
        do {
          uVar14 = *puVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar7) {
            *puVar3 = uVar14 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar7) {
              *puVar3 = uVar14 - 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)((long)*pppplStack_358 + 8))();
          }
        }
      }
      pppplStack_358 = (long ****)unaff_x23;
      if (pppplStack_350 != (long ****)0x0) {
        func_0x0001092b4274(&pppplStack_350);
      }
      pppplStack_360 = (long ****)unaff_x24;
      pppplStack_350 = (long ****)unaff_x23;
      if (plStack_88 == alStack_a0) {
        lVar13 = 0x20;
LAB_10acf89d4:
        (**(code **)(*plStack_88 + lVar13))();
      }
      else if (plStack_88 != (long *)0x0) {
        lVar13 = 0x28;
        goto LAB_10acf89d4;
      }
      plVar2 = plStack_170;
      if ((cStack_158 == '\x01') && (plStack_170 != (long *)0x0)) {
        plVar4 = plStack_170 + 1;
        do {
          lVar13 = *plVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *plVar4 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_170 + 0x10))(plStack_170);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
      ppplVar8 = ppplStack_1a8;
      if ((long ****)ppplStack_1a8 != (long ****)0x0) {
        pppplVar16 = (long ****)(ppplStack_1a8 + 1);
        do {
          ppplVar15 = *pppplVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppplVar16,0x10);
          if (bVar7) {
            *pppplVar16 = (long ***)((long)ppplVar15 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (ppplVar15 == (long ***)0x0) {
          (*(code *)(*ppplStack_1a8)[2])(ppplStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar8);
        }
      }
      ppplStack_348 = (long ***)0x10acfab8c;
      __ZNSt13exception_ptrD1Ev(&pppplStack_3a0);
    }
    param_4 = (long *****)pppplStack_360;
    param_1 = param_1 + 0x135;
    if ((long ****)pppplStack_360[0x2c] != (long ****)0x0) {
      func_0x0001092b4274(pppplStack_360 + 0x2c);
    }
    param_4[0x2c] = pppplStack_350;
    pppplStack_350 = (long ****)0x0;
    uStack_1d0 = (long *****)ppplStack_348;
    pppplStack_1c8 = pppplStack_360;
    uStack_1c0 = param_1;
    (*(code *)**param_1)(param_1,&uStack_1d0);
    param_1 = (long *****)pppplStack_358;
    pppplStack_358 = (long ****)0x0;
    if (pppplStack_350 != (long ****)0x0) {
      func_0x0001092b4274(&pppplStack_350);
      if (pppplStack_358 != (long ****)0x0) {
        puVar3 = (ulong *)(pppplStack_358 + 1);
        do {
          uVar14 = *puVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar7) {
            *puVar3 = uVar14 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar7) {
              *puVar3 = uVar14 - 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)((long)*pppplStack_358 + 8))();
          }
        }
      }
    }
    if (plStack_1d8 == alStack_1f0) {
      lVar13 = 0x20;
LAB_10acf8bd4:
      (**(code **)(*plStack_1d8 + lVar13))();
    }
    else if (plStack_1d8 != (long *)0x0) {
      lVar13 = 0x28;
      goto LAB_10acf8bd4;
    }
    plVar2 = plStack_2c0;
    if ((cStack_2a8 == '\x01') && (plStack_2c0 != (long *)0x0)) {
      plVar4 = plStack_2c0 + 1;
      do {
        lVar13 = *plVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar7) {
          *plVar4 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_2c0 + 0x10))(plStack_2c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    param_2 = ppplStack_2f8;
    if (ppplStack_2f8 != (long ***)0x0) {
      plVar2 = (long *)(ppplStack_2f8 + 1);
      do {
        lVar13 = *plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)((long)*ppplStack_2f8 + 0x10))(ppplStack_2f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
      }
    }
    if (param_1 != (long *****)0x0) {
      ppppplVar12 = param_1 + 1;
      do {
        pppplVar16 = *ppppplVar12;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppplVar12,0x10);
        if (bVar7) {
          *ppppplVar12 = (long ****)((long)pppplVar16 + -4);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (((ulong)pppplVar16 & 0x1fffffffc) == 4) {
        do {
          pppplVar16 = *ppppplVar12;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(ppppplVar12,0x10);
          if (bVar7) {
            *ppppplVar12 = (long ****)((long)pppplVar16 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((long ****)((long)pppplVar16 + -1) == (long ****)0x0) {
          (*(code *)(*param_1)[1])(param_1);
        }
      }
    }
    uVar11 = 1;
  } while( true );
}



/* Entry: 10acf8ea8; end: 10acf8f0f;  */

long FUN_10acf8ea8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x148);
  if (plVar1 == (long *)(param_1 + 0x130)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10acf8ee4;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10acf8ee4:
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x00010a502a18(param_1 + 0x58);
  }
  func_0x00010a502a18(param_1 + 0x20);
  return param_1;
}



/* Entry: 10acf8f10; end: 10acf8f6f;  */

void FUN_10acf8f10(long *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x18))();
  lVar1 = param_3[1];
  for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    FUN_10acfcd6c(param_1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010acf8f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



/* Entry: 10acf8f70; end: 10acf8fd7;  */

long * FUN_10acf8f70(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10acf8fd8; end: 10acf900f;  */

void FUN_10acf8fd8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x1e8) = uVar6;
  *(undefined8 *)(param_1 + 0x1e0) = uVar5;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(lVar4);
    return;
  }
  return;
}



/* Entry: 10acf9010; end: 10acf9173;  */

undefined8 * FUN_10acf9010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6de48;
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a50f5b4(param_1 + 4);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10acf9174; end: 10acf9273;  */

void FUN_10acf9174(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  
  while (param_2 != param_3) {
    if (param_4 == param_5) goto joined_r0x00010acf9238;
    lVar1 = param_4;
    FUN_10a003e3c(param_4,param_2);
    if (((uint)lVar1 >> 7 & 1) == 0) {
      lVar2 = param_2;
      FUN_10a003e3c(param_2,param_4);
      lVar1 = 0;
      if (-1 < (char)lVar2) {
        lVar1 = 0x38;
      }
      param_4 = param_4 + lVar1;
      FUN_10acf9274(param_6,param_2);
      param_2 = param_2 + 0x38;
    }
    else {
      FUN_10acf9274(param_6,param_4);
      param_4 = param_4 + 0x38;
    }
  }
  for (; param_5 != param_4; param_4 = param_4 + 0x38) {
    FUN_10acf9274(param_6,param_4);
  }
LAB_10acf9254:
  *param_1 = param_3;
  param_1[1] = param_5;
  param_1[2] = param_6;
  return;
joined_r0x00010acf9238:
  for (; param_3 != param_2; param_2 = param_2 + 0x38) {
    FUN_10acf9274(param_6,param_2);
  }
  goto LAB_10acf9254;
}



/* Entry: 10acf9274; end: 10acf92c3;  */

void FUN_10acf9274(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10acf9404(uVar1);
    lVar2 = uVar1 + 0x38;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10acf92c4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10acf92c4; end: 10acf9403;  */

long * FUN_10acf92c4(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (uVar5 < 0x492492492492493) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * -0x2492492492492492;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x249249249249248 < (ulong)(lVar4 * 0x6db6db6db6db6db7)) {
      uVar6 = 0x492492492492492;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a2301d8();
    }
    lVar7 = (long)plVar3 + lVar7;
    plStack_40 = plVar3 + uVar6 * 7;
    plStack_58 = plVar3;
    plStack_50 = (long *)lVar7;
    plStack_48 = (long *)lVar7;
    FUN_10acf9404(lVar7,param_2);
    plStack_48 = (long *)(lVar7 + 0x38);
    lVar7 = lVar7 + (*param_1 - param_1[1]);
    func_0x00010acf90a8(param_1,*param_1,param_1[1],lVar7);
    plVar3 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar7;
    lVar7 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar7;
    func_0x00010acf9128(&plStack_58);
    return plVar3;
  }
  FUN_10a2301c4();
  func_0x00010acf9128(&plStack_58);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar4 = param_2[1];
    lVar7 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar4;
    *param_1 = lVar7;
  }
  lVar7 = param_2[4];
  lVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = lVar4;
  if (lVar7 != 0) {
    plVar3 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar7 = param_2[6];
  lVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar4;
  if (lVar7 != 0) {
    plVar3 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return param_1;
}



/* Entry: 10acf9404; end: 10acf9497;  */

undefined8 * FUN_10acf9404(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar6 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
  }
  lVar4 = param_2[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
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
  lVar4 = param_2[6];
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
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
  return param_1;
}



/* Entry: 10acf9498; end: 10acf951b;  */

void FUN_10acf9498(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a230178(param_1,param_4);
    lVar1 = param_1;
    FUN_10acf951c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10acf951c; end: 10acf959f;  */

long FUN_10acf951c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_10acf9404(param_4,param_2);
    param_4 = param_4 + 0x38;
  }
  return param_4;
}



/* Entry: 10acf95a0; end: 10acf96a3;  */

long * FUN_10acf95a0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar3 >> 4) < param_2) {
    lVar7 = (long)plVar3 - *param_1;
    uVar1 = param_2 + (lVar7 >> 4);
    if (uVar1 >> 0x3c != 0) {
      FUN_10a26e820();
      lVar7 = param_1[1];
      lVar6 = param_1[2];
      while (lVar6 != lVar7) {
        param_1[2] = lVar6 + -0x10;
        func_0x00010a26e868();
        lVar6 = param_1[2];
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    plStack_48 = param_1;
    if (uVar5 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a26e834();
    }
    lVar7 = (long)plVar3 + lVar7;
    _bzero(lVar7,param_2 << 4);
    lVar6 = lVar7 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lStack_68 = *param_1;
    *param_1 = lVar6;
    param_1[1] = lVar7 + param_2 * 0x10;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar3 + uVar5 * 2);
    plVar2 = &lStack_68;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    FUN_10acf96a4(plVar2);
  }
  else {
    plVar2 = param_1;
    if (param_2 != 0) {
      plVar2 = plVar3;
      _bzero(plVar3,param_2 << 4);
      plVar3 = plVar3 + param_2 * 2;
    }
    param_1[1] = (long)plVar3;
  }
  return plVar2;
}



/* Entry: 10acf96a4; end: 10acf96ef;  */

long * FUN_10acf96a4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a26e868();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acf96f0; end: 10acf972b;  */

void FUN_10acf96f0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_20;
  undefined8 uStack_18;
  
  plVar1 = &lStack_20;
  lStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10a4fcdbc(&lStack_20,param_3);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    func_0x00010a502838();
  }
  return;
}



/* Entry: 10acf972c; end: 10acf9747;  */

void FUN_10acf972c(void)

{
  return;
}



/* Entry: 10acf9748; end: 10acf98f3;  */

void FUN_10acf9748(undefined **param_1,ulong param_2,undefined4 param_3,undefined4 *param_4,
                  ulong param_5,long param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuStack_a0;
  ulong uStack_98;
  undefined **ppuStack_90;
  ulong uStack_88;
  double dStack_80;
  undefined1 uStack_78;
  
  pppuVar8 = &ppuStack_a0;
  ppuStack_a0 = param_1;
  uStack_98 = param_2;
  if (param_5 != 0) {
    pppuVar3 = &ppuStack_90;
    ppuStack_90 = param_1;
    uStack_88 = param_2;
    func_0x0001098b9090(pppuVar3,*param_4);
    if (param_5 != 1) {
      pppuVar4 = &ppuStack_90;
      ppuStack_90 = param_1;
      uStack_88 = param_2;
      func_0x00010a4efc70(pppuVar4,param_4[1]);
      if (2 < param_5) {
        pppuVar5 = &ppuStack_90;
        ppuStack_90 = param_1;
        uStack_88 = param_2;
        FUN_10a4ff0c0(pppuVar5,param_4[2]);
        if (param_5 != 3) {
          pppuVar6 = &ppuStack_90;
          ppuStack_90 = param_1;
          uStack_88 = param_2;
          FUN_10a4fc000(pppuVar6,param_4[3]);
          if (4 < param_5) {
            pppuVar7 = &ppuStack_90;
            ppuStack_90 = param_1;
            uStack_88 = param_2;
            func_0x00010a289568(pppuVar7,param_4[4]);
            if (((*pppuVar3 != (undefined **)0x0) && (*pppuVar4 != (undefined **)0x0)) &&
               (*pppuVar5 != (undefined **)0x0)) {
              FUN_10a4fcdbc(&ppuStack_a0,param_3);
              ppuVar10 = *pppuVar4;
              ppuVar12 = *pppuVar5;
              ppuVar13 = *pppuVar6;
              ppuVar11 = *pppuVar7;
              uVar1 = *(undefined8 *)(param_6 + 0x10);
              puVar14 = **pppuVar3;
              FUN_10acf3804(uVar1,ppuVar12,*(undefined8 *)(param_6 + 0x18));
              dStack_80 = (double)(long)puVar14 / 1000000000.0;
              uStack_88 = uStack_88 & 0xffffffffffffff00;
              ppuStack_90 = &PTR_DAT_110ba5598;
              uStack_78 = 1;
              FUN_10acf399c(uVar1,&ppuStack_90,ppuVar12,ppuVar10,ppuVar13,ppuVar11);
              FUN_10acf5d54(&ppuStack_90,uVar1);
              lVar9 = (long)*pppuVar8;
              *pppuVar8 = ppuStack_90;
              if (lVar9 != 0) {
                func_0x00010a502838(pppuVar8);
              }
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10acf98f4);
  (*pcVar2)();
}



/* Entry: 10acf98f4; end: 10acf990f;  */

void FUN_10acf98f4(void)

{
  return;
}



/* Entry: 10acf9910; end: 10acf9ac3;  */

void FUN_10acf9910(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar4 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar4 >> 2) * -0x5555555555555555) < param_2) {
    puVar1 = (undefined8 *)*param_1;
    lVar10 = (long)puVar4 - (long)puVar1;
    uVar5 = param_2 + (lVar10 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar5) {
      FUN_10aceb9b0();
      uVar5 = param_2;
      if (param_2 != param_3) {
        do {
          FUN_10acf9ac4(param_4,uVar5);
          uVar5 = uVar5 + 0x78;
          param_4 = param_4 + 0x78;
        } while (uVar5 != param_3);
        do {
          FUN_10aceb5f8(param_2);
          param_2 = param_2 + 0x78;
        } while (param_2 != param_3);
      }
      return;
    }
    lVar2 = param_1[2] - (long)puVar1 >> 2;
    uVar7 = lVar2 * 0x5555555555555556;
    if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
      uVar7 = uVar5;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar7 = 0x1555555555555555;
    }
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
      lVar2 = lVar10;
    }
    else {
      plVar3 = param_1;
      FUN_10aceb9c4();
      puVar1 = (undefined8 *)*param_1;
      puVar4 = (undefined8 *)param_1[1];
      lVar2 = (long)puVar4 - (long)puVar1;
    }
    puVar6 = (undefined8 *)((long)plVar3 + (lVar10 - lVar2));
    puVar8 = puVar6;
    if (puVar1 != puVar4) {
      do {
        uVar9 = *puVar1;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar1 + 1);
        *puVar8 = uVar9;
        puVar1 = (undefined8 *)((long)puVar1 + 0xc);
        puVar8 = (undefined8 *)((long)puVar8 + 0xc);
      } while (puVar1 != puVar4);
      puVar1 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar6;
    param_1[1] = (long)plVar3 + ((param_2 * 0xc) / 0xc) * 0xc + lVar10;
    param_1[2] = (long)plVar3 + uVar7 * 0xc;
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    param_1[1] = (long)puVar4 + ((param_2 * 0xc) / 0xc) * 0xc;
  }
  return;
}



/* Entry: 10acf9ac4; end: 10acf9b67;  */

void FUN_10acf9ac4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_1[0xb] = param_2[0xb];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



/* Entry: 10acf9b68; end: 10acf9bb3;  */

long * FUN_10acf9b68(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x78;
    FUN_10aceb5f8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10acf9bb4; end: 10acf9ccf;  */

/* WARNING: Possible PIC construction at 0x00010acf9f48: Changing call to branch */

long * FUN_10acf9bb4(long *param_1,long *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 ****ppppuVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined1 ****ppppuVar15;
  undefined8 uVar16;
  undefined1 ***pppuStack_110;
  code *pcStack_108;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar13 = param_1[1] - *param_1;
  uVar10 = (lVar13 >> 3) * -0x1111111111111111 + 1;
  if (uVar10 < 0x222222222222223) {
    lVar9 = param_1[2] - *param_1 >> 3;
    uVar12 = lVar9 * -0x2222222222222222;
    if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
      uVar12 = uVar10;
    }
    if (0x111111111111110 < (ulong)(lVar9 * -0x1111111111111111)) {
      uVar12 = 0x222222222222222;
    }
    plStack_38 = param_1;
    if (uVar12 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_1;
      FUN_10aceb8a8();
    }
    lVar13 = (long)plVar5 + lVar13;
    plStack_58 = plVar5;
    plStack_50 = (long *)lVar13;
    plStack_40 = plVar5 + uVar12 * 0xf;
    FUN_10acf9ac4(lVar13,param_2);
    plVar7 = (long *)(lVar13 + 0x78);
    lVar13 = lVar13 + (*param_1 - param_1[1]);
    plStack_48 = plVar7;
    func_0x00010acf9a5c(param_1,*param_1,param_1[1],lVar13);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar13;
    param_1[1] = (long)plVar7;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar5 + uVar12 * 0xf);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    FUN_10acf9b68(&plStack_58);
    return plVar7;
  }
  FUN_10aceb894();
  FUN_10acf9b68(&plStack_58);
  __Unwind_Resume();
  pcStack_68 = FUN_10acf9cd0;
  uVar10 = param_1[2];
  plVar5 = (long *)*param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if (param_2 <= (long *)(uVar10 - (long)plVar5)) {
    plVar14 = (long *)param_1[1];
    plVar11 = (long *)((long)plVar14 - (long)plVar5);
    plVar7 = plVar11;
    if (param_2 <= plVar11) {
      plVar7 = param_2;
    }
    plVar6 = param_1;
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar5;
      _memset(plVar5,param_3);
    }
    lVar13 = (long)param_2 - (long)plVar11;
    if (param_2 < plVar11 || lVar13 == 0) {
      lVar13 = (long)plVar5 + (long)param_2;
    }
    else {
      plVar6 = plVar14;
      _memset(plVar14,param_3,lVar13);
      lVar13 = (long)plVar14 + lVar13;
    }
LAB_10acf9db0:
    param_1[1] = lVar13;
    return plVar6;
  }
  plVar7 = param_1;
  plVar14 = param_2;
  if (plVar5 != (long *)0x0) {
    param_1[1] = (long)plVar5;
    __ZdlPv();
    uVar10 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    plVar7 = plVar5;
  }
  if (-1 < (long)param_2) {
    plVar5 = (long *)(uVar10 * 2);
    if (plVar5 < param_2 || (long)plVar5 - (long)param_2 == 0) {
      plVar5 = param_2;
    }
    if (0x3ffffffffffffffe < uVar10) {
      plVar5 = (long *)0x7fffffffffffffff;
    }
    plVar7 = plVar5;
    __Znwm();
    *param_1 = (long)plVar7;
    param_1[2] = (long)plVar7 + (long)plVar5;
    plVar6 = plVar7;
    _memset();
    lVar13 = (long)plVar7 + (long)param_2;
    goto LAB_10acf9db0;
  }
  FUN_10acf9f50();
  ppppuVar3 = (undefined1 ****)&stack0xffffffffffffff00;
  pcStack_a8 = FUN_10acf9dcc;
  ppppuVar15 = (undefined1 ****)&ppuStack_b0;
  plVar5 = (long *)*plVar7;
  plVar11 = (long *)plVar7[1];
  lVar13 = (long)plVar11 - (long)plVar5;
  bVar4 = (long *)(lVar13 * -0x5555555555555555) <= plVar14;
  uVar10 = (long)plVar14 + lVar13 * 0x5555555555555555;
  if (!bVar4 || uVar10 == 0) {
    if (bVar4) {
      return plVar7;
    }
    lVar13 = (long)plVar5 + (long)plVar14 * 3;
    plVar5 = plVar7;
LAB_10acf9f28:
    plVar7[1] = lVar13;
    return plVar5;
  }
  ppuStack_b0 = &puStack_70;
  if (uVar10 <= (ulong)((plVar7[2] - (long)plVar11) * -0x5555555555555555)) {
    uVar10 = uVar10 * 3 - 3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    lVar13 = (SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar10 / 3 + 3;
    plVar5 = plVar11;
    _bzero(plVar11,lVar13);
    lVar13 = (long)plVar11 + lVar13;
    goto LAB_10acf9f28;
  }
  if (plVar14 < (long *)0x5555555555555556) {
    lVar9 = plVar7[2] - (long)plVar5;
    plVar11 = (long *)(lVar9 * 0x5555555555555556);
    if (plVar11 < plVar14 || (long)plVar11 - (long)plVar14 == 0) {
      plVar11 = plVar14;
    }
    if (0x2aaaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
      plVar11 = (long *)0x5555555555555555;
    }
    if (plVar11 < (long *)0x5555555555555556) {
      plVar14 = (long *)((long)plVar11 * 3);
      __Znwm();
      uVar10 = uVar10 * 3 - 3;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar10;
      lVar9 = (SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar10 / 3 + 3
      ;
      _bzero((long)plVar14 + lVar13,lVar9);
      plVar6 = plVar14;
      _memcpy(plVar14,plVar5,lVar13);
      *plVar7 = (long)plVar14;
      plVar7[1] = (long)plVar14 + lVar13 + lVar9;
      plVar7[2] = (long)plVar14 + (long)plVar11 * 3;
      if (plVar5 == (long *)0x0) {
        return plVar6;
      }
      goto code_r0x00010bdbd7ac;
    }
    func_0x000109ffded8();
    ppppuVar3 = &pppuStack_110;
    pcStack_108 = FUN_10acf9f50;
    uVar16 = 0x10acf9f64;
    pppuStack_110 = (undefined1 ***)ppppuVar15;
    FUN_109ffde64(&DAT_10f62a4d8);
    ppppuVar15 = &pppuStack_110;
  }
  else {
    uVar16 = 0x10acf9f4c;
  }
  *(undefined1 *****)((long)ppppuVar3 + -0x10) = ppppuVar15;
  *(undefined8 *)((long)ppppuVar3 + -8) = uVar16;
  puVar8 = &DAT_10f62a4d8;
  FUN_109ffde64();
  *(long **)((long)ppppuVar3 + -0x30) = plVar5;
  *(long **)((long)ppppuVar3 + -0x28) = plVar7;
  *(undefined1 **)((long)ppppuVar3 + -0x20) = (undefined1 *)((long)ppppuVar3 + -0x10);
  *(code **)((long)ppppuVar3 + -0x18) = FUN_10acf9f78;
  if (*(long *)(puVar8 + 0xe8) != 0) {
    *(long *)(puVar8 + 0xf0) = *(long *)(puVar8 + 0xe8);
    __ZdlPv();
  }
  plVar5 = *(long **)(puVar8 + 0xd0);
  if (plVar5 == (long *)0x0) {
    return (long *)0x0;
  }
  *(long **)(puVar8 + 0xd8) = plVar5;
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar5);
  return plVar5;
}



/* Entry: 10acf9cd0; end: 10acf9dcb;  */

/* WARNING: Possible PIC construction at 0x00010acf9f48: Changing call to branch */

void FUN_10acf9cd0(ulong *param_1,ulong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 ***pppuVar3;
  bool bVar4;
  ulong *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong *puVar13;
  undefined1 ***pppuVar14;
  undefined8 uVar15;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar8 = param_1[2];
  puVar13 = (ulong *)*param_1;
  if (param_2 <= uVar8 - (long)puVar13) {
    uVar8 = param_1[1];
    uVar7 = uVar8 - (long)puVar13;
    uVar10 = uVar7;
    if (param_2 <= uVar7) {
      uVar10 = param_2;
    }
    if (uVar10 != 0) {
      _memset(puVar13,param_3);
    }
    lVar12 = param_2 - uVar7;
    if (param_2 < uVar7 || lVar12 == 0) {
      uVar8 = (long)puVar13 + param_2;
    }
    else {
      _memset(uVar8,param_3,lVar12);
      uVar8 = uVar8 + lVar12;
    }
LAB_10acf9db0:
    param_1[1] = uVar8;
    return;
  }
  puVar5 = param_1;
  uVar10 = param_2;
  if (puVar13 != (ulong *)0x0) {
    param_1[1] = (ulong)puVar13;
    __ZdlPv();
    uVar8 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar5 = puVar13;
  }
  if (-1 < (long)param_2) {
    uVar10 = uVar8 * 2;
    if (uVar10 < param_2 || uVar10 - param_2 == 0) {
      uVar10 = param_2;
    }
    if (0x3ffffffffffffffe < uVar8) {
      uVar10 = 0x7fffffffffffffff;
    }
    uVar8 = uVar10;
    __Znwm();
    *param_1 = uVar8;
    param_1[2] = uVar8 + uVar10;
    _memset();
    uVar8 = uVar8 + param_2;
    goto LAB_10acf9db0;
  }
  FUN_10acf9f50();
  pppuVar3 = (undefined1 ***)&stack0xffffffffffffff60;
  pcStack_48 = FUN_10acf9dcc;
  pppuVar14 = (undefined1 ***)&puStack_50;
  uVar7 = *puVar5;
  uVar8 = puVar5[1];
  lVar12 = uVar8 - uVar7;
  bVar4 = (ulong)(lVar12 * -0x5555555555555555) <= uVar10;
  uVar9 = uVar10 + lVar12 * 0x5555555555555555;
  if (!bVar4 || uVar9 == 0) {
    if (bVar4) {
      return;
    }
    uVar8 = uVar7 + uVar10 * 3;
LAB_10acf9f28:
    puVar5[1] = uVar8;
    return;
  }
  puStack_50 = &stack0xfffffffffffffff0;
  if (uVar9 <= (puVar5[2] - uVar8) * -0x5555555555555555) {
    uVar10 = uVar9 * 3 - 3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    lVar12 = (SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar10 / 3 + 3;
    _bzero(uVar8,lVar12);
    uVar8 = uVar8 + lVar12;
    goto LAB_10acf9f28;
  }
  if (uVar10 < 0x5555555555555556) {
    lVar11 = puVar5[2] - uVar7;
    uVar8 = lVar11 * 0x5555555555555556;
    if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
      uVar8 = uVar10;
    }
    if (0x2aaaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar8 = 0x5555555555555555;
    }
    if (uVar8 < 0x5555555555555556) {
      uVar10 = uVar8 * 3;
      __Znwm();
      uVar9 = uVar9 * 3 - 3;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      lVar11 = (SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar9 / 3 + 3
      ;
      _bzero(uVar10 + lVar12,lVar11);
      _memcpy(uVar10,uVar7,lVar12);
      *puVar5 = uVar10;
      puVar5[1] = uVar10 + lVar12 + lVar11;
      puVar5[2] = uVar10 + uVar8 * 3;
      if (uVar7 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
    func_0x000109ffded8();
    pppuVar3 = &ppuStack_b0;
    pcStack_a8 = FUN_10acf9f50;
    uVar15 = 0x10acf9f64;
    ppuStack_b0 = (undefined1 **)pppuVar14;
    FUN_109ffde64(&DAT_10f62a4d8);
    pppuVar14 = &ppuStack_b0;
  }
  else {
    uVar15 = 0x10acf9f4c;
  }
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar14;
  *(undefined8 *)((long)pppuVar3 + -8) = uVar15;
  puVar6 = &DAT_10f62a4d8;
  FUN_109ffde64();
  *(ulong *)((long)pppuVar3 + -0x30) = uVar7;
  *(ulong **)((long)pppuVar3 + -0x28) = puVar5;
  *(undefined1 **)((long)pppuVar3 + -0x20) = (undefined1 *)((long)pppuVar3 + -0x10);
  *(code **)((long)pppuVar3 + -0x18) = FUN_10acf9f78;
  if (*(long *)(puVar6 + 0xe8) != 0) {
    *(long *)(puVar6 + 0xf0) = *(long *)(puVar6 + 0xe8);
    __ZdlPv();
  }
  uVar7 = *(ulong *)(puVar6 + 0xd0);
  if (uVar7 == 0) {
    return;
  }
  *(ulong *)(puVar6 + 0xd8) = uVar7;
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar7);
  return;
}



/* Entry: 10acf9dcc; end: 10acf9f4f;  */

/* WARNING: Possible PIC construction at 0x00010acf9f48: Changing call to branch */

void FUN_10acf9dcc(long *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 **ppuVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 **ppuVar12;
  undefined8 uVar13;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  ppuVar3 = (undefined1 **)&stack0xffffffffffffffa0;
  ppuVar12 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar7 = *param_1;
  lVar9 = param_1[1];
  lVar11 = lVar9 - lVar7;
  bVar4 = (ulong)(lVar11 * -0x5555555555555555) <= param_2;
  uVar8 = param_2 + lVar11 * 0x5555555555555555;
  if (!bVar4 || uVar8 == 0) {
    if (bVar4) {
      return;
    }
    lVar9 = lVar7 + param_2 * 3;
LAB_10acf9f28:
    param_1[1] = lVar9;
    return;
  }
  if (uVar8 <= (ulong)((param_1[2] - lVar9) * -0x5555555555555555)) {
    uVar8 = uVar8 * 3 - 3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8;
    lVar7 = (SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar8 / 3 + 3;
    _bzero(lVar9,lVar7);
    lVar9 = lVar9 + lVar7;
    goto LAB_10acf9f28;
  }
  if (param_2 < 0x5555555555555556) {
    lVar9 = param_1[2] - lVar7;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < param_2 || uVar10 - param_2 == 0) {
      uVar10 = param_2;
    }
    if (0x2aaaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = 0x5555555555555555;
    }
    if (uVar10 < 0x5555555555555556) {
      lVar5 = uVar10 * 3;
      __Znwm();
      uVar8 = uVar8 * 3 - 3;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar8;
      lVar9 = (SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + uVar8 / 3 + 3;
      _bzero(lVar5 + lVar11,lVar9);
      _memcpy(lVar5,lVar7,lVar11);
      *param_1 = lVar5;
      param_1[1] = lVar5 + lVar11 + lVar9;
      param_1[2] = lVar5 + uVar10 * 3;
      if (lVar7 == 0) {
        return;
      }
      goto code_r0x00010bdbd7ac;
    }
    func_0x000109ffded8();
    ppuVar3 = &puStack_70;
    uStack_68 = 0x10acf9f50;
    uVar13 = 0x10acf9f64;
    puStack_70 = (undefined1 *)ppuVar12;
    FUN_109ffde64(&DAT_10f62a4d8);
    ppuVar12 = &puStack_70;
  }
  else {
    uVar13 = 0x10acf9f4c;
  }
  *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar12;
  *(undefined8 *)((long)ppuVar3 + -8) = uVar13;
  puVar6 = &DAT_10f62a4d8;
  FUN_109ffde64();
  *(long *)((long)ppuVar3 + -0x30) = lVar7;
  *(long **)((long)ppuVar3 + -0x28) = param_1;
  *(undefined1 **)((long)ppuVar3 + -0x20) = (undefined1 *)((long)ppuVar3 + -0x10);
  *(code **)((long)ppuVar3 + -0x18) = FUN_10acf9f78;
  if (*(long *)(puVar6 + 0xe8) != 0) {
    *(long *)(puVar6 + 0xf0) = *(long *)(puVar6 + 0xe8);
    __ZdlPv();
  }
  lVar7 = *(long *)(puVar6 + 0xd0);
  if (lVar7 == 0) {
    return;
  }
  *(long *)(puVar6 + 0xd8) = lVar7;
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar7);
  return;
}



/* Entry: 10acf9f50; end: 10acf9f77;  */

void FUN_10acf9f50(void)

{
  undefined *puVar1;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (*(long *)(puVar1 + 0xe8) != 0) {
    *(long *)(puVar1 + 0xf0) = *(long *)(puVar1 + 0xe8);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0xd0) != 0) {
    *(long *)(puVar1 + 0xd8) = *(long *)(puVar1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10acf9f78; end: 10acf9fbb;  */

void FUN_10acf9f78(long param_1)

{
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10acf9fbc; end: 10acfa023;  */

void FUN_10acf9fbc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x100;
        FUN_10acf9f78(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10acfa024; end: 10acfa037;  */

void FUN_10acfa024(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x38 == 0) {
    __Znwm((long)puVar1 << 8);
    return;
  }
  func_0x000109ffded8();
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  param_2[1] = 0;
  *param_2 = 0;
  puVar1[2] = param_2[2];
  puVar1[4] = param_2[4];
  uVar2 = param_2[6];
  puVar1[7] = param_2[7];
  puVar1[6] = uVar2;
  uVar2 = param_2[8];
  puVar1[9] = param_2[9];
  puVar1[8] = uVar2;
  uVar2 = param_2[10];
  puVar1[0xb] = param_2[0xb];
  puVar1[10] = uVar2;
  uVar2 = param_2[0xc];
  puVar1[0xd] = param_2[0xd];
  puVar1[0xc] = uVar2;
  *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  uVar2 = param_2[0x10];
  puVar1[0xf] = param_2[0xf];
  puVar1[0x10] = uVar2;
  param_2[0x10] = 0;
  param_2[0xf] = 0;
  uVar2 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  puVar1[0x13] = param_2[0x13];
  puVar1[0x12] = uVar2;
  puVar1[0x15] = uVar4;
  puVar1[0x14] = uVar3;
  uVar3 = param_2[0x17];
  uVar2 = param_2[0x16];
  puVar1[0x18] = param_2[0x18];
  puVar1[0x17] = uVar3;
  puVar1[0x16] = uVar2;
  uVar5 = param_2[0x1f];
  uVar4 = param_2[0x1e];
  uVar3 = param_2[0x21];
  uVar2 = param_2[0x20];
  uVar7 = param_2[0x1d];
  uVar6 = param_2[0x1c];
  puVar1[0x22] = param_2[0x22];
  puVar1[0x1f] = uVar5;
  puVar1[0x1e] = uVar4;
  puVar1[0x21] = uVar3;
  puVar1[0x20] = uVar2;
  puVar1[0x1d] = uVar7;
  puVar1[0x1c] = uVar6;
  uVar2 = param_2[0x1a];
  puVar1[0x1b] = param_2[0x1b];
  puVar1[0x1a] = uVar2;
  uVar2 = param_2[0x24];
  puVar1[0x25] = param_2[0x25];
  puVar1[0x24] = uVar2;
  param_2[0x25] = 0;
  param_2[0x24] = 0;
  uVar2 = param_2[0x26];
  uVar4 = param_2[0x29];
  uVar3 = param_2[0x28];
  puVar1[0x27] = param_2[0x27];
  puVar1[0x26] = uVar2;
  puVar1[0x29] = uVar4;
  puVar1[0x28] = uVar3;
  uVar2 = param_2[0x2a];
  uVar4 = param_2[0x2d];
  uVar3 = param_2[0x2c];
  puVar1[0x2b] = param_2[0x2b];
  puVar1[0x2a] = uVar2;
  puVar1[0x2d] = uVar4;
  puVar1[0x2c] = uVar3;
  uVar3 = param_2[0x2f];
  uVar2 = param_2[0x2e];
  puVar1[0x30] = param_2[0x30];
  puVar1[0x2f] = uVar3;
  puVar1[0x2e] = uVar2;
  uVar5 = param_2[0x37];
  uVar4 = param_2[0x36];
  uVar3 = param_2[0x39];
  uVar2 = param_2[0x38];
  uVar7 = param_2[0x35];
  uVar6 = param_2[0x34];
  puVar1[0x3a] = param_2[0x3a];
  puVar1[0x37] = uVar5;
  puVar1[0x36] = uVar4;
  puVar1[0x39] = uVar3;
  puVar1[0x38] = uVar2;
  puVar1[0x35] = uVar7;
  puVar1[0x34] = uVar6;
  uVar2 = param_2[0x32];
  puVar1[0x33] = param_2[0x33];
  puVar1[0x32] = uVar2;
  *(undefined4 *)(puVar1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  puVar1[0x3d] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3d] = param_2[0x3d];
  uVar2 = param_2[0x3e];
  puVar1[0x3f] = param_2[0x3f];
  puVar1[0x3e] = uVar2;
  param_2[0x3f] = 0;
  param_2[0x3e] = 0;
  param_2[0x3d] = 0;
  puVar1[0x42] = 0;
  puVar1[0x41] = 0;
  puVar1[0x40] = 0;
  uVar2 = param_2[0x40];
  puVar1[0x41] = param_2[0x41];
  puVar1[0x40] = uVar2;
  puVar1[0x42] = param_2[0x42];
  param_2[0x42] = 0;
  param_2[0x41] = 0;
  param_2[0x40] = 0;
  puVar1[0x45] = 0;
  puVar1[0x44] = 0;
  puVar1[0x43] = 0;
  puVar1[0x43] = param_2[0x43];
  uVar2 = param_2[0x44];
  puVar1[0x45] = param_2[0x45];
  puVar1[0x44] = uVar2;
  param_2[0x45] = 0;
  param_2[0x44] = 0;
  param_2[0x43] = 0;
  puVar1[0x46] = param_2[0x46];
  uVar3 = param_2[0x49];
  uVar2 = param_2[0x48];
  uVar5 = param_2[0x4b];
  uVar4 = param_2[0x4a];
  uVar7 = param_2[0x4d];
  uVar6 = param_2[0x4c];
  uVar8 = *(undefined8 *)((long)param_2 + 0x26a);
  *(undefined8 *)((long)puVar1 + 0x272) = *(undefined8 *)((long)param_2 + 0x272);
  *(undefined8 *)((long)puVar1 + 0x26a) = uVar8;
  puVar1[0x4b] = uVar5;
  puVar1[0x4a] = uVar4;
  puVar1[0x4d] = uVar7;
  puVar1[0x4c] = uVar6;
  puVar1[0x49] = uVar3;
  puVar1[0x48] = uVar2;
  *(undefined1 *)(puVar1 + 0x50) = 0;
  *(undefined1 *)(puVar1 + 0x52) = 0;
  if (*(char *)(param_2 + 0x52) == '\x01') {
    uVar2 = param_2[0x50];
    puVar1[0x51] = param_2[0x51];
    puVar1[0x50] = uVar2;
    param_2[0x51] = 0;
    param_2[0x50] = 0;
    *(undefined1 *)(puVar1 + 0x52) = 1;
  }
  *(undefined4 *)(puVar1 + 0x57) = 0;
  puVar1[0x56] = 0;
  puVar1[0x55] = 0;
  puVar1[0x54] = &PTR_DAT_110af4cf0;
  puVar1[0x55] = param_2[0x55];
  puVar1[0x56] = param_2[0x56];
  *(undefined4 *)(puVar1 + 0x57) = *(undefined4 *)(param_2 + 0x57);
  *(undefined4 *)(param_2 + 0x57) = 0;
  param_2[0x56] = 0;
  param_2[0x55] = 0;
  *(undefined1 *)(puVar1 + 0x58) = 0;
  *(undefined1 *)(puVar1 + 0x5c) = 0;
  if (*(char *)(param_2 + 0x5c) == '\x01') {
    *(undefined4 *)(puVar1 + 0x5b) = 0;
    puVar1[0x5a] = 0;
    puVar1[0x59] = 0;
    puVar1[0x58] = &PTR_DAT_110af4cf0;
    puVar1[0x59] = param_2[0x59];
    puVar1[0x5a] = param_2[0x5a];
    *(undefined4 *)(puVar1 + 0x5b) = *(undefined4 *)(param_2 + 0x5b);
    *(undefined4 *)(param_2 + 0x5b) = 0;
    param_2[0x5a] = 0;
    param_2[0x59] = 0;
    *(undefined1 *)(puVar1 + 0x5c) = 1;
  }
  *(undefined4 *)(puVar1 + 0x60) = 0;
  puVar1[0x5f] = 0;
  puVar1[0x5e] = 0;
  puVar1[0x5d] = &PTR_DAT_110af4c80;
  puVar1[0x5e] = param_2[0x5e];
  puVar1[0x5f] = param_2[0x5f];
  *(undefined4 *)(puVar1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_2 + 0x60) = 0;
  param_2[0x5f] = 0;
  param_2[0x5e] = 0;
  puVar1[99] = 0;
  puVar1[0x62] = 0;
  puVar1[0x61] = 0;
  puVar1[0x61] = param_2[0x61];
  uVar2 = param_2[0x62];
  puVar1[99] = param_2[99];
  puVar1[0x62] = uVar2;
  param_2[99] = 0;
  param_2[0x62] = 0;
  param_2[0x61] = 0;
  *(undefined4 *)(puVar1 + 0x67) = 0;
  puVar1[0x66] = 0;
  puVar1[0x65] = 0;
  puVar1[100] = &PTR_DAT_110af4b00;
  puVar1[0x65] = param_2[0x65];
  puVar1[0x66] = param_2[0x66];
  *(undefined4 *)(puVar1 + 0x67) = *(undefined4 *)(param_2 + 0x67);
  *(undefined4 *)(param_2 + 0x67) = 0;
  param_2[0x66] = 0;
  param_2[0x65] = 0;
  return;
}


