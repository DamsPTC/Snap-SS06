/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a4367dc; end: 10a43684b;  */

void FUN_10a4367dc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x30;
        func_0x00010a436760(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a43684c; end: 10a43685f;  */

void FUN_10a43684c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3b != 0) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar3 = *puVar2;
        param_3[1] = puVar2[1];
        *param_3 = uVar3;
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar3 = puVar2[2];
        *(undefined1 *)(param_3 + 3) = *(undefined1 *)(puVar2 + 3);
        param_3[2] = uVar3;
        puVar2 = puVar2 + 4;
        param_3 = param_3 + 4;
      } while (puVar2 != param_2);
      do {
        FUN_10a0e3264();
        puVar1 = puVar1 + 4;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 << 5);
  return;
}



/* Entry: 10a436860; end: 10a436943;  */

void FUN_10a436860(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((ulong)param_1 >> 0x3b != 0) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar2 = *puVar1;
        param_3[1] = puVar1[1];
        *param_3 = uVar2;
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar2 = puVar1[2];
        *(undefined1 *)(param_3 + 3) = *(undefined1 *)(puVar1 + 3);
        param_3[2] = uVar2;
        puVar1 = puVar1 + 4;
        param_3 = param_3 + 4;
      } while (puVar1 != param_2);
      do {
        FUN_10a0e3264();
        param_1 = param_1 + 4;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 << 5);
  return;
}



/* Entry: 10a436944; end: 10a436957;  */

undefined * FUN_10a436944(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  plVar6 = *(long **)(puVar4 + 8);
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



/* Entry: 10a436958; end: 10a436abf;  */

long FUN_10a436958(long param_1)

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



/* Entry: 10a436ac0; end: 10a436b2f;  */

void FUN_10a436ac0(long *param_1)

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
        func_0x00010a042cd8();
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



/* Entry: 10a436b30; end: 10a436b87;  */

long FUN_10a436b30(long param_1)

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



/* Entry: 10a436b88; end: 10a436eef;  */

/* WARNING: Possible PIC construction at 0x00010a436c64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a436c68) */
/* WARNING: Removing unreachable block (ram,0x00010a436c6c) */
/* WARNING: Removing unreachable block (ram,0x00010a436ce8) */
/* WARNING: Removing unreachable block (ram,0x00010a436c74) */
/* WARNING: Removing unreachable block (ram,0x00010a436c84) */
/* WARNING: Removing unreachable block (ram,0x00010a436c88) */
/* WARNING: Removing unreachable block (ram,0x00010a436c90) */
/* WARNING: Removing unreachable block (ram,0x00010a436c98) */

ulong * FUN_10a436b88(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  
  puVar6 = (ulong *)*param_1;
  if ((ulong *)((long)(param_1[2] - (long)puVar6) >> 4) < param_4) {
    puVar4 = param_1;
    puVar8 = param_2;
    func_0x00010a04ab14();
    if ((ulong)param_4 >> 0x3c == 0) {
      puVar8 = (ulong *)((long)(param_1[2] - *param_1) >> 3);
      if (puVar8 <= param_4) {
        puVar8 = param_4;
      }
      if (0x7fffffffffffffef < param_1[2] - *param_1) {
        puVar8 = (ulong *)0xfffffffffffffff;
      }
      if ((ulong)puVar8 >> 0x3c == 0) {
        puVar6 = param_1;
        FUN_10a06aa48();
        *param_1 = (ulong)puVar6;
        param_1[1] = (ulong)puVar6;
        param_1[2] = (ulong)(puVar6 + (long)puVar8 * 2);
        for (; param_2 != param_3; param_2 = param_2 + 2) {
          uVar7 = param_2[1];
          uVar9 = *param_2;
          puVar6[1] = param_2[1];
          *puVar6 = uVar9;
          if (uVar7 != 0) {
            plVar1 = (long *)(uVar7 + 0x10);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          puVar6 = puVar6 + 2;
        }
        param_1[1] = (ulong)puVar6;
        return puVar6;
      }
    }
    FUN_10a06aa34();
    param_2 = puVar4;
  }
  else {
    if (param_4 <= (ulong *)((long)(param_1[1] - (long)puVar6) >> 4)) {
      func_0x00010a436d00(param_2,param_3);
      puVar8 = param_2;
      for (puVar6 = (ulong *)param_1[1]; puVar6 != param_2; puVar6 = puVar6 + -2) {
        puVar8 = (ulong *)puVar6[-1];
        if (puVar8 != (ulong *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      param_1[1] = (ulong)param_2;
      return puVar8;
    }
    puVar8 = (ulong *)((long)param_2 + (param_1[1] - (long)puVar6));
  }
  for (; param_2 != puVar8; param_2 = param_2 + 2) {
    uVar9 = param_2[1];
    uVar7 = *param_2;
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
    uVar5 = puVar6[1];
    puVar6[1] = uVar9;
    *puVar6 = uVar7;
    if (uVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    puVar6 = puVar6 + 2;
  }
  return puVar6;
}



/* Entry: 10a436ef0; end: 10a436f8b;  */

void FUN_10a436ef0(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a2e247c(param_1,param_4);
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



/* Entry: 10a436f8c; end: 10a437227;  */

undefined8 * FUN_10a436f8c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a437228; end: 10a437293;  */

void FUN_10a437228(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a437294; end: 10a4373e3;  */

undefined8 * FUN_10a437294(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  cVar2 = *(char *)(param_1 + 4);
  if (cVar2 == *(char *)(param_2 + 4)) {
    if (cVar2 != '\0') {
      func_0x00010a43731c(param_1,param_2);
      uVar8 = param_2[3];
      uVar7 = param_2[2];
      param_2[2] = 0;
      param_2[3] = 0;
      plVar6 = (long *)param_1[3];
      param_1[3] = uVar8;
      param_1[2] = uVar7;
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
      return param_1 + 2;
    }
  }
  else {
    if (cVar2 != '\0') {
      puVar4 = param_1;
      if (*(char *)(param_1 + 4) == '\x01') {
        FUN_10a436958(param_1 + 2);
        func_0x00010a4369b0(param_1);
        *(undefined1 *)(param_1 + 4) = 0;
      }
      return puVar4;
    }
    uVar7 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar7;
    *param_2 = 0;
    param_2[1] = 0;
    uVar7 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar7;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}



/* Entry: 10a4373e4; end: 10a4384c3;  */

void FUN_10a4373e4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *unaff_x27;
  undefined8 *puVar28;
  undefined8 *unaff_x28;
  undefined8 *puVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined1 auStack_110 [96];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  puVar25 = param_2;
  puVar26 = param_3;
  puVar27 = param_4;
  do {
    puVar10 = puVar25 + -3;
    puVar29 = puVar25 + -6;
    puVar28 = puVar25 + -9;
    puVar17 = puVar8;
LAB_10a437440:
    puVar8 = puVar17;
    uVar12 = (long)puVar25 - (long)puVar8;
    uVar11 = ((long)uVar12 >> 3) * -0x5555555555555555;
    if (uVar11 - 2 != 0 && 1 < (long)uVar11) {
      if (uVar11 == 3) {
        fVar30 = *(float *)((long)puVar8 + 0x2c);
        if (fVar30 < *(float *)((long)puVar8 + 0x14)) {
          if (fVar30 <= *(float *)((long)puVar25 - 4)) {
            uStack_88 = puVar8[1];
            uStack_90 = *puVar8;
            uStack_80 = puVar8[2];
            puVar8[1] = puVar8[4];
            *puVar8 = puVar8[3];
            puVar8[2] = puVar8[5];
            puVar8[4] = uStack_88;
            puVar8[3] = uStack_90;
            puVar8[5] = uStack_80;
            if (*(float *)((long)puVar8 + 0x2c) <= *(float *)((long)puVar25 - 4)) break;
            uStack_88 = puVar8[4];
            uStack_90 = puVar8[3];
            uStack_80 = puVar8[5];
            uVar16 = puVar25[-1];
            uVar21 = *puVar10;
            puVar8[4] = puVar25[-2];
            puVar8[3] = uVar21;
            puVar8[5] = uVar16;
          }
          else {
            uStack_88 = puVar8[1];
            uStack_90 = *puVar8;
            uStack_80 = puVar8[2];
            uVar21 = puVar25[-2];
            uVar16 = *puVar10;
            puVar8[2] = puVar25[-1];
            puVar8[1] = uVar21;
            *puVar8 = uVar16;
          }
          puVar25[-1] = uStack_80;
          puVar25[-2] = uStack_88;
          *puVar10 = uStack_90;
          break;
        }
        if (fVar30 <= *(float *)((long)puVar25 - 4)) break;
        uStack_88 = puVar8[4];
        uStack_90 = puVar8[3];
        uStack_80 = puVar8[5];
        uVar16 = puVar25[-1];
        uVar21 = *puVar10;
        puVar8[4] = puVar25[-2];
        puVar8[3] = uVar21;
        puVar8[5] = uVar16;
        puVar25[-1] = uStack_80;
        puVar25[-2] = uStack_88;
        *puVar10 = uStack_90;
      }
      else {
        if (uVar11 != 4) {
          if (uVar11 != 5) goto LAB_10a437480;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) goto LAB_10a4384c0;
          param_2 = puVar8 + 3;
          param_3 = puVar8 + 6;
          param_4 = puVar8 + 9;
          goto FUN_10a4384c4;
        }
        fVar34 = *(float *)((long)puVar8 + 0x2c);
        fVar30 = *(float *)((long)puVar8 + 0x44);
        if (*(float *)((long)puVar8 + 0x14) <= fVar34) {
          if (fVar30 < fVar34) {
            uVar16 = puVar8[5];
            uVar31 = puVar8[4];
            uVar21 = puVar8[3];
            puVar8[4] = puVar8[7];
            puVar8[3] = puVar8[6];
            puVar8[5] = puVar8[8];
            puVar8[7] = uVar31;
            puVar8[6] = uVar21;
            puVar8[8] = uVar16;
            if (*(float *)((long)puVar8 + 0x2c) < *(float *)((long)puVar8 + 0x14)) {
              uStack_88 = puVar8[1];
              uStack_90 = *puVar8;
              uStack_80 = puVar8[2];
              puVar8[1] = puVar8[4];
              *puVar8 = puVar8[3];
              puVar8[2] = puVar8[5];
              puVar8[4] = uStack_88;
              puVar8[3] = uStack_90;
              puVar8[5] = uStack_80;
            }
          }
        }
        else {
          if (fVar34 <= fVar30) {
            uStack_88 = puVar8[1];
            uStack_90 = *puVar8;
            uStack_80 = puVar8[2];
            puVar8[1] = puVar8[4];
            *puVar8 = puVar8[3];
            puVar8[2] = puVar8[5];
            puVar8[4] = uStack_88;
            puVar8[3] = uStack_90;
            puVar8[5] = uStack_80;
            if (*(float *)((long)puVar8 + 0x2c) <= fVar30) goto LAB_10a4383e0;
            uVar16 = puVar8[5];
            uVar31 = puVar8[4];
            uVar21 = puVar8[3];
            puVar8[4] = puVar8[7];
            puVar8[3] = puVar8[6];
            puVar8[5] = puVar8[8];
            puVar8[7] = uVar31;
            puVar8[6] = uVar21;
          }
          else {
            uStack_88 = puVar8[1];
            uStack_90 = *puVar8;
            uVar16 = puVar8[2];
            puVar8[1] = puVar8[7];
            *puVar8 = puVar8[6];
            puVar8[2] = puVar8[8];
            puVar8[7] = uStack_88;
            puVar8[6] = uStack_90;
            uStack_80 = uVar16;
          }
          puVar8[8] = uVar16;
        }
LAB_10a4383e0:
        if (*(float *)((long)puVar8 + 0x44) <= *(float *)((long)puVar25 - 4)) break;
        uStack_88 = puVar8[7];
        uStack_90 = puVar8[6];
        uStack_80 = puVar8[8];
        uVar16 = puVar25[-1];
        uVar21 = *puVar10;
        puVar8[7] = puVar25[-2];
        puVar8[6] = uVar21;
        puVar8[8] = uVar16;
        puVar25[-1] = uStack_80;
        puVar25[-2] = uStack_88;
        *puVar10 = uStack_90;
        if (*(float *)((long)puVar8 + 0x2c) <= *(float *)((long)puVar8 + 0x44)) break;
        uVar16 = puVar8[5];
        uVar31 = puVar8[4];
        uVar21 = puVar8[3];
        puVar8[4] = puVar8[7];
        puVar8[3] = puVar8[6];
        puVar8[5] = puVar8[8];
        puVar8[7] = uVar31;
        puVar8[6] = uVar21;
        puVar8[8] = uVar16;
      }
      if (*(float *)((long)puVar8 + 0x2c) < *(float *)((long)puVar8 + 0x14)) {
        uStack_88 = puVar8[1];
        uStack_90 = *puVar8;
        uStack_80 = puVar8[2];
        puVar8[1] = puVar8[4];
        *puVar8 = puVar8[3];
        puVar8[2] = puVar8[5];
        puVar8[4] = uStack_88;
        puVar8[3] = uStack_90;
        puVar8[5] = uStack_80;
      }
      break;
    }
    if (uVar11 < 2) break;
    if (uVar11 == 2) {
      if (*(float *)((long)puVar25 - 4) < *(float *)((long)puVar8 + 0x14)) {
        uStack_88 = puVar8[1];
        uStack_90 = *puVar8;
        uStack_80 = puVar8[2];
        uVar21 = puVar25[-2];
        uVar16 = puVar25[-3];
        puVar8[2] = puVar25[-1];
        puVar8[1] = uVar21;
        *puVar8 = uVar16;
        puVar25[-1] = uStack_80;
        puVar25[-2] = uStack_88;
        puVar25[-3] = uStack_90;
      }
      break;
    }
LAB_10a437480:
    if ((long)uVar12 < 0x240) {
      if (((ulong)puVar27 & 1) == 0) {
        if ((puVar8 != puVar25) && (puVar26 = puVar8 + 3, puVar26 != puVar25)) {
          lVar15 = -0x18;
          lVar13 = 0;
          lVar22 = 0x18;
          do {
            fVar30 = *(float *)((long)puVar8 + lVar13 + 0x2c);
            if (fVar30 < *(float *)((long)puVar8 + lVar13 + 0x14)) {
              uStack_88 = puVar26[1];
              uStack_90 = *puVar26;
              uVar5 = *(undefined4 *)(puVar26 + 2);
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
              puVar27 = puVar26;
              lVar13 = lVar15;
              do {
                puVar17 = puVar27;
                puVar17[1] = puVar17[-2];
                *puVar17 = puVar17[-3];
                puVar17[2] = puVar17[-1];
                if (lVar13 == 0) {
LAB_10a438314:
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a438318);
                  (*pcVar6)();
                }
                lVar13 = lVar13 + 0x18;
                puVar27 = puVar17 + -3;
              } while (fVar30 < *(float *)((long)puVar17 - 0x1c));
              *(undefined4 *)(puVar17 + -1) = uVar5;
              puVar17[-2] = uStack_88;
              puVar17[-3] = uStack_90;
              *(float *)((long)puVar17 - 4) = fVar30;
            }
            puVar26 = puVar26 + 3;
            lVar15 = lVar15 + -0x18;
            lVar13 = lVar22;
            lVar22 = lVar22 + 0x18;
          } while (puVar26 != puVar25);
        }
        break;
      }
      if ((puVar8 == puVar25) || (puVar8 + 3 == puVar25)) break;
      lVar13 = 0;
      puVar26 = puVar8;
      puVar27 = puVar8 + 3;
      goto LAB_10a437ee8;
    }
    if (puVar26 == (undefined8 *)0x0) {
      if (puVar8 == puVar25) break;
      uVar20 = uVar11 - 2 >> 1;
      uVar23 = uVar20;
      goto LAB_10a437f84;
    }
    puVar17 = puVar8 + (uVar11 >> 1) * 3;
    fVar30 = *(float *)((long)puVar25 - 4);
    if (uVar12 < 0xc01) {
      fVar34 = *(float *)((long)puVar8 + 0x14);
      if (*(float *)((long)puVar17 + 0x14) <= fVar34) {
        if (fVar30 < fVar34) {
          uStack_88 = puVar8[1];
          uStack_90 = *puVar8;
          uStack_80 = puVar8[2];
          uVar21 = puVar25[-2];
          uVar16 = *puVar10;
          puVar8[2] = puVar25[-1];
          puVar8[1] = uVar21;
          *puVar8 = uVar16;
          puVar25[-1] = uStack_80;
          puVar25[-2] = uStack_88;
          *puVar10 = uStack_90;
          if (*(float *)((long)puVar8 + 0x14) < *(float *)((long)puVar17 + 0x14)) {
            uStack_88 = puVar17[1];
            uStack_90 = *puVar17;
            uStack_80 = puVar17[2];
            uVar21 = puVar8[1];
            uVar16 = *puVar8;
            puVar17[2] = puVar8[2];
            puVar17[1] = uVar21;
            *puVar17 = uVar16;
            puVar8[2] = uStack_80;
            puVar8[1] = uStack_88;
            *puVar8 = uStack_90;
          }
        }
      }
      else {
        if (fVar34 <= fVar30) {
          uStack_88 = puVar17[1];
          uStack_90 = *puVar17;
          uStack_80 = puVar17[2];
          uVar21 = puVar8[1];
          uVar16 = *puVar8;
          puVar17[2] = puVar8[2];
          puVar17[1] = uVar21;
          *puVar17 = uVar16;
          puVar8[2] = uStack_80;
          puVar8[1] = uStack_88;
          *puVar8 = uStack_90;
          if (*(float *)((long)puVar8 + 0x14) <= *(float *)((long)puVar25 - 4)) goto LAB_10a437a8c;
          uStack_88 = puVar8[1];
          uStack_90 = *puVar8;
          uStack_80 = puVar8[2];
          uVar21 = puVar25[-2];
          uVar16 = *puVar10;
          puVar8[2] = puVar25[-1];
          puVar8[1] = uVar21;
          *puVar8 = uVar16;
        }
        else {
          uStack_88 = puVar17[1];
          uStack_90 = *puVar17;
          uStack_80 = puVar17[2];
          uVar21 = puVar25[-2];
          uVar16 = *puVar10;
          puVar17[2] = puVar25[-1];
          puVar17[1] = uVar21;
          *puVar17 = uVar16;
        }
        puVar25[-1] = uStack_80;
        puVar25[-2] = uStack_88;
        *puVar10 = uStack_90;
      }
    }
    else {
      fVar34 = *(float *)((long)puVar17 + 0x14);
      if (*(float *)((long)puVar8 + 0x14) <= fVar34) {
        if (fVar30 < fVar34) {
          uVar32 = puVar17[1];
          uVar21 = *puVar17;
          uVar16 = puVar17[2];
          uVar33 = puVar25[-2];
          uVar31 = *puVar10;
          puVar17[2] = puVar25[-1];
          puVar17[1] = uVar33;
          *puVar17 = uVar31;
          puVar25[-1] = uVar16;
          puVar25[-2] = uVar32;
          *puVar10 = uVar21;
          if (*(float *)((long)puVar17 + 0x14) < *(float *)((long)puVar8 + 0x14)) {
            uVar32 = puVar8[1];
            uVar21 = *puVar8;
            uVar16 = puVar8[2];
            uVar33 = puVar17[1];
            uVar31 = *puVar17;
            puVar8[2] = puVar17[2];
            puVar8[1] = uVar33;
            *puVar8 = uVar31;
            puVar17[2] = uVar16;
            puVar17[1] = uVar32;
            *puVar17 = uVar21;
          }
        }
      }
      else {
        if (fVar34 <= fVar30) {
          uVar32 = puVar8[1];
          uVar21 = *puVar8;
          uVar16 = puVar8[2];
          uVar33 = puVar17[1];
          uVar31 = *puVar17;
          puVar8[2] = puVar17[2];
          puVar8[1] = uVar33;
          *puVar8 = uVar31;
          puVar17[2] = uVar16;
          puVar17[1] = uVar32;
          *puVar17 = uVar21;
          if (*(float *)((long)puVar17 + 0x14) <= *(float *)((long)puVar25 - 4)) goto LAB_10a437680;
          uStack_88 = puVar17[1];
          uStack_90 = *puVar17;
          uStack_80 = puVar17[2];
          uVar21 = puVar25[-2];
          uVar16 = *puVar10;
          puVar17[2] = puVar25[-1];
          puVar17[1] = uVar21;
          *puVar17 = uVar16;
        }
        else {
          uStack_88 = puVar8[1];
          uStack_90 = *puVar8;
          uStack_80 = puVar8[2];
          uVar21 = puVar25[-2];
          uVar16 = *puVar10;
          puVar8[2] = puVar25[-1];
          puVar8[1] = uVar21;
          *puVar8 = uVar16;
        }
        puVar25[-1] = uStack_80;
        puVar25[-2] = uStack_88;
        *puVar10 = uStack_90;
      }
LAB_10a437680:
      puVar7 = puVar17 + -3;
      fVar30 = *(float *)((long)puVar17 + -4);
      if (*(float *)((long)puVar8 + 0x2c) <= fVar30) {
        if (*(float *)((long)puVar25 - 0x1c) < fVar30) {
          uVar32 = puVar17[-2];
          uVar21 = *puVar7;
          uVar16 = puVar17[-1];
          uVar33 = puVar25[-5];
          uVar31 = *puVar29;
          puVar17[-1] = puVar25[-4];
          puVar17[-2] = uVar33;
          *puVar7 = uVar31;
          puVar25[-4] = uVar16;
          puVar25[-5] = uVar32;
          *puVar29 = uVar21;
          if (*(float *)((long)puVar17 + -4) < *(float *)((long)puVar8 + 0x2c)) {
            uVar32 = puVar8[4];
            uVar31 = puVar8[3];
            uVar16 = puVar8[5];
            uVar21 = puVar17[-1];
            uVar33 = *puVar7;
            puVar8[4] = puVar17[-2];
            puVar8[3] = uVar33;
            puVar8[5] = uVar21;
            puVar17[-1] = uVar16;
            puVar17[-2] = uVar32;
            *puVar7 = uVar31;
          }
        }
      }
      else {
        if (fVar30 <= *(float *)((long)puVar25 - 0x1c)) {
          uVar32 = puVar8[4];
          uVar31 = puVar8[3];
          uVar16 = puVar8[5];
          uVar21 = puVar17[-1];
          uVar33 = *puVar7;
          puVar8[4] = puVar17[-2];
          puVar8[3] = uVar33;
          puVar8[5] = uVar21;
          puVar17[-1] = uVar16;
          puVar17[-2] = uVar32;
          *puVar7 = uVar31;
          if (*(float *)((long)puVar17 + -4) <= *(float *)((long)puVar25 - 0x1c))
          goto LAB_10a437814;
          uVar33 = puVar17[-2];
          uVar31 = *puVar7;
          uVar16 = puVar17[-1];
          uVar32 = puVar25[-5];
          uVar21 = *puVar29;
          puVar17[-1] = puVar25[-4];
          puVar17[-2] = uVar32;
          *puVar7 = uVar21;
        }
        else {
          uVar33 = puVar8[4];
          uVar31 = puVar8[3];
          uVar16 = puVar8[5];
          uVar21 = puVar25[-4];
          uVar32 = *puVar29;
          puVar8[4] = puVar25[-5];
          puVar8[3] = uVar32;
          puVar8[5] = uVar21;
        }
        puVar25[-4] = uVar16;
        puVar25[-5] = uVar33;
        *puVar29 = uVar31;
      }
LAB_10a437814:
      fVar30 = *(float *)((long)puVar17 + 0x2c);
      if (*(float *)((long)puVar8 + 0x44) <= fVar30) {
        if (*(float *)((long)puVar25 - 0x34) < fVar30) {
          uVar32 = puVar17[4];
          uVar21 = puVar17[3];
          uVar16 = puVar17[5];
          uVar33 = puVar25[-8];
          uVar31 = *puVar28;
          puVar17[5] = puVar25[-7];
          puVar17[4] = uVar33;
          puVar17[3] = uVar31;
          puVar25[-7] = uVar16;
          puVar25[-8] = uVar32;
          *puVar28 = uVar21;
          if (*(float *)((long)puVar17 + 0x2c) < *(float *)((long)puVar8 + 0x44)) {
            uVar32 = puVar8[7];
            uVar31 = puVar8[6];
            uVar16 = puVar8[8];
            uVar21 = puVar17[5];
            uVar33 = puVar17[3];
            puVar8[7] = puVar17[4];
            puVar8[6] = uVar33;
            puVar8[8] = uVar21;
            puVar17[5] = uVar16;
            puVar17[4] = uVar32;
            puVar17[3] = uVar31;
          }
        }
      }
      else {
        if (fVar30 <= *(float *)((long)puVar25 - 0x34)) {
          uVar32 = puVar8[7];
          uVar31 = puVar8[6];
          uVar16 = puVar8[8];
          uVar21 = puVar17[5];
          uVar33 = puVar17[3];
          puVar8[7] = puVar17[4];
          puVar8[6] = uVar33;
          puVar8[8] = uVar21;
          puVar17[5] = uVar16;
          puVar17[4] = uVar32;
          puVar17[3] = uVar31;
          if (*(float *)((long)puVar17 + 0x2c) <= *(float *)((long)puVar25 - 0x34))
          goto LAB_10a437930;
          uVar33 = puVar17[4];
          uVar31 = puVar17[3];
          uVar16 = puVar17[5];
          uVar32 = puVar25[-8];
          uVar21 = *puVar28;
          puVar17[5] = puVar25[-7];
          puVar17[4] = uVar32;
          puVar17[3] = uVar21;
        }
        else {
          uVar33 = puVar8[7];
          uVar31 = puVar8[6];
          uVar16 = puVar8[8];
          uVar21 = puVar25[-7];
          uVar32 = *puVar28;
          puVar8[7] = puVar25[-8];
          puVar8[6] = uVar32;
          puVar8[8] = uVar21;
        }
        puVar25[-7] = uVar16;
        puVar25[-8] = uVar33;
        *puVar28 = uVar31;
      }
LAB_10a437930:
      fVar30 = *(float *)((long)puVar17 + 0x14);
      if (*(float *)((long)puVar17 + -4) <= fVar30) {
        if (*(float *)((long)puVar17 + 0x2c) < fVar30) {
          uVar31 = puVar17[1];
          uVar21 = *puVar17;
          uVar16 = puVar17[2];
          puVar17[1] = puVar17[4];
          *puVar17 = puVar17[3];
          puVar17[2] = puVar17[5];
          puVar17[5] = uVar16;
          puVar17[4] = uVar31;
          puVar17[3] = uVar21;
          if (*(float *)((long)puVar17 + 0x14) < *(float *)((long)puVar17 + -4)) {
            uVar31 = puVar17[-2];
            uVar21 = *puVar7;
            uVar16 = puVar17[-1];
            puVar17[-2] = puVar17[1];
            *puVar7 = *puVar17;
            puVar17[-1] = puVar17[2];
            puVar17[2] = uVar16;
            puVar17[1] = uVar31;
            *puVar17 = uVar21;
          }
        }
      }
      else {
        if (fVar30 <= *(float *)((long)puVar17 + 0x2c)) {
          uVar31 = puVar17[-2];
          uVar21 = *puVar7;
          uVar16 = puVar17[-1];
          puVar17[-2] = puVar17[1];
          *puVar7 = *puVar17;
          puVar17[-1] = puVar17[2];
          puVar17[2] = uVar16;
          puVar17[1] = uVar31;
          *puVar17 = uVar21;
          if (*(float *)((long)puVar17 + 0x14) <= *(float *)((long)puVar17 + 0x2c))
          goto LAB_10a437a5c;
          uStack_88 = puVar17[1];
          uStack_90 = *puVar17;
          uStack_80 = puVar17[2];
          puVar17[1] = puVar17[4];
          *puVar17 = puVar17[3];
          puVar17[2] = puVar17[5];
        }
        else {
          uStack_88 = puVar17[-2];
          uStack_90 = *puVar7;
          uStack_80 = puVar17[-1];
          puVar17[-2] = puVar17[4];
          *puVar7 = puVar17[3];
          puVar17[-1] = puVar17[5];
        }
        puVar17[5] = uStack_80;
        puVar17[4] = uStack_88;
        puVar17[3] = uStack_90;
      }
LAB_10a437a5c:
      uStack_88 = puVar8[1];
      uStack_90 = *puVar8;
      uStack_80 = puVar8[2];
      uVar21 = puVar17[1];
      uVar16 = *puVar17;
      puVar8[2] = puVar17[2];
      puVar8[1] = uVar21;
      *puVar8 = uVar16;
      puVar17[2] = uStack_80;
      puVar17[1] = uStack_88;
      *puVar17 = uStack_90;
    }
LAB_10a437a8c:
    puVar26 = (undefined8 *)((long)puVar26 + -1);
    if (((ulong)puVar27 & 1) == 0) {
      fVar30 = *(float *)((long)puVar8 + 0x14);
      if (fVar30 <= *(float *)((long)puVar8 - 4)) {
        uStack_a8 = puVar8[1];
        uStack_b0 = *puVar8;
        uStack_a0 = *(undefined4 *)(puVar8 + 2);
        puVar27 = puVar8 + 3;
        if (*(float *)((long)puVar25 - 4) <= fVar30) {
          do {
            puVar17 = puVar27;
            if (puVar25 <= puVar17) break;
            puVar27 = puVar17 + 3;
          } while (*(float *)((long)puVar17 + 0x14) <= fVar30);
        }
        else {
          do {
            puVar17 = puVar27;
            if (puVar17 == puVar25) goto LAB_10a438314;
            puVar27 = puVar17 + 3;
          } while (*(float *)((long)puVar17 + 0x14) <= fVar30);
        }
        puVar27 = puVar25;
        puVar7 = puVar25;
        if (puVar17 < puVar25) {
          do {
            if (puVar7 == puVar8) goto LAB_10a438314;
            puVar27 = puVar7 + -3;
            pfVar1 = (float *)((long)puVar7 - 4);
            puVar7 = puVar27;
          } while (fVar30 < *pfVar1);
        }
        while (puVar17 < puVar27) {
          uStack_88 = puVar17[1];
          uStack_90 = *puVar17;
          uStack_80 = puVar17[2];
          uVar21 = puVar27[1];
          uVar16 = *puVar27;
          puVar17[2] = puVar27[2];
          puVar17[1] = uVar21;
          *puVar17 = uVar16;
          puVar27[2] = uStack_80;
          puVar27[1] = uStack_88;
          *puVar27 = uStack_90;
          puVar7 = puVar17;
          do {
            puVar17 = puVar7 + 3;
            if (puVar17 == puVar25) goto LAB_10a438314;
            pfVar1 = (float *)((long)puVar7 + 0x2c);
            puVar14 = puVar27;
            puVar7 = puVar17;
          } while (*pfVar1 <= fVar30);
          do {
            if (puVar14 == puVar8) goto LAB_10a438314;
            puVar27 = puVar14 + -3;
            pfVar1 = (float *)((long)puVar14 - 4);
            puVar14 = puVar27;
          } while (fVar30 < *pfVar1);
        }
        puVar7 = puVar17 + -3;
        if (puVar7 != puVar8) {
          uVar21 = puVar17[-2];
          uVar16 = *puVar7;
          puVar8[2] = puVar17[-1];
          puVar8[1] = uVar21;
          *puVar8 = uVar16;
        }
        puVar27 = (undefined8 *)0x0;
        *(undefined4 *)(puVar17 + -1) = uStack_a0;
        puVar17[-2] = uStack_a8;
        *puVar7 = uStack_b0;
        *(float *)((long)puVar17 - 4) = fVar30;
        goto LAB_10a437440;
      }
    }
    else {
      fVar30 = *(float *)((long)puVar8 + 0x14);
    }
    lVar13 = 0;
    uStack_a8 = puVar8[1];
    uStack_b0 = *puVar8;
    uStack_a0 = *(undefined4 *)(puVar8 + 2);
    do {
      if ((undefined8 *)((long)puVar8 + lVar13 + 0x18) == puVar25) goto LAB_10a438314;
      lVar22 = lVar13 + 0x2c;
      lVar13 = lVar13 + 0x18;
    } while (*(float *)((long)puVar8 + lVar22) < fVar30);
    puVar7 = (undefined8 *)((long)puVar8 + lVar13);
    puVar17 = puVar25;
    if (lVar13 == 0x18) {
      do {
        puVar14 = puVar17;
        if (puVar17 <= puVar7) break;
        puVar14 = puVar17 + -3;
        pfVar1 = (float *)((long)puVar17 - 4);
        puVar17 = puVar14;
      } while (fVar30 <= *pfVar1);
    }
    else {
      do {
        if (puVar17 == puVar8) goto LAB_10a438314;
        puVar14 = puVar17 + -3;
        pfVar1 = (float *)((long)puVar17 - 4);
        puVar17 = puVar14;
      } while (fVar30 <= *pfVar1);
    }
    puVar18 = puVar14;
    puVar17 = puVar7;
    puVar9 = puVar7;
    if (puVar7 < puVar14) {
      do {
        uStack_88 = puVar9[1];
        uStack_90 = *puVar9;
        uStack_80 = puVar9[2];
        uVar21 = puVar18[1];
        uVar16 = *puVar18;
        puVar9[2] = puVar18[2];
        puVar9[1] = uVar21;
        *puVar9 = uVar16;
        puVar18[2] = uStack_80;
        puVar18[1] = uStack_88;
        *puVar18 = uStack_90;
        do {
          puVar17 = puVar9 + 3;
          if (puVar17 == puVar25) goto LAB_10a438314;
          pfVar1 = (float *)((long)puVar9 + 0x2c);
          puVar9 = puVar17;
        } while (*pfVar1 < fVar30);
        do {
          if (puVar18 == puVar8) goto LAB_10a438314;
          puVar19 = puVar18 + -3;
          pfVar1 = (float *)((long)puVar18 - 4);
          puVar18 = puVar19;
        } while (fVar30 <= *pfVar1);
      } while (puVar17 < puVar19);
    }
    puVar9 = puVar17 + -3;
    if (puVar9 != puVar8) {
      uVar21 = puVar17[-2];
      uVar16 = *puVar9;
      puVar8[2] = puVar17[-1];
      puVar8[1] = uVar21;
      *puVar8 = uVar16;
    }
    *(undefined4 *)(puVar17 + -1) = uStack_a0;
    puVar17[-2] = uStack_a8;
    *puVar9 = uStack_b0;
    *(float *)((long)puVar17 - 4) = fVar30;
    if (puVar7 < puVar14) goto LAB_10a437c28;
    puVar7 = puVar8;
    FUN_10a43870c(puVar8,puVar9);
    param_1 = puVar17;
    param_2 = puVar25;
    FUN_10a43870c();
    if ((int)param_1 == 0) goto code_r0x00010a437c18;
    puVar25 = puVar9;
  } while (((ulong)puVar7 & 1) == 0);
  goto LAB_10a438488;
LAB_10a437ee8:
  do {
    fVar30 = *(float *)((long)puVar26 + 0x2c);
    if (fVar30 < *(float *)((long)puVar26 + 0x14)) {
      uStack_88 = puVar27[1];
      uStack_90 = *puVar27;
      uVar5 = *(undefined4 *)(puVar27 + 2);
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
      lVar22 = lVar13;
      do {
        lVar15 = lVar22;
        puVar26 = (undefined8 *)((long)puVar8 + lVar15);
        puVar26[4] = puVar26[1];
        puVar26[3] = *puVar26;
        puVar26[5] = puVar26[2];
        puVar17 = puVar8;
        if (lVar15 == 0) goto LAB_10a437f48;
        lVar22 = lVar15 + -0x18;
      } while (fVar30 < *(float *)((long)puVar26 + -4));
      puVar17 = (undefined8 *)((long)puVar8 + lVar15);
LAB_10a437f48:
      *(undefined4 *)(puVar17 + 2) = uVar5;
      puVar17[1] = uStack_88;
      *puVar17 = uStack_90;
      *(float *)((long)puVar17 + 0x14) = fVar30;
    }
    puVar17 = puVar27 + 3;
    lVar13 = lVar13 + 0x18;
    puVar26 = puVar27;
    puVar27 = puVar17;
  } while (puVar17 != puVar25);
  goto LAB_10a438488;
code_r0x00010a437c18:
  if (((ulong)puVar7 & 1) == 0) {
LAB_10a437c28:
    param_4 = (undefined8 *)(ulong)((uint)puVar27 & 1);
    param_3 = puVar26;
    FUN_10a4373e4();
    puVar27 = (undefined8 *)0x0;
    param_1 = puVar8;
    param_2 = puVar9;
  }
  goto LAB_10a437440;
LAB_10a437f84:
  do {
    if ((long)uVar23 <= (long)uVar20) {
      uVar24 = uVar23 << 1 | 1;
      puVar26 = puVar8 + uVar24 * 3;
      uVar2 = uVar23 * 2 + 2;
      if (((long)uVar2 < (long)uVar11) &&
         (*(float *)((long)puVar26 + 0x14) < *(float *)((long)puVar26 + 0x2c))) {
        puVar26 = puVar26 + 3;
        uVar24 = uVar2;
      }
      puVar27 = puVar8 + uVar23 * 3;
      fVar30 = *(float *)((long)puVar27 + 0x14);
      if (fVar30 <= *(float *)((long)puVar26 + 0x14)) {
        uVar21 = puVar27[1];
        uVar16 = *puVar27;
        uVar5 = *(undefined4 *)(puVar27 + 2);
        do {
          puVar17 = puVar26;
          uVar32 = puVar17[1];
          uVar31 = *puVar17;
          puVar27[2] = puVar17[2];
          puVar27[1] = uVar32;
          *puVar27 = uVar31;
          if ((long)uVar20 < (long)uVar24) break;
          uVar3 = uVar24 << 1 | 1;
          puVar26 = puVar8 + uVar3 * 3;
          uVar2 = uVar24 * 2 + 2;
          uVar24 = uVar3;
          if (((long)uVar2 < (long)uVar11) &&
             (*(float *)((long)puVar26 + 0x14) < *(float *)((long)puVar26 + 0x2c))) {
            puVar26 = puVar26 + 3;
            uVar24 = uVar2;
          }
          puVar27 = puVar17;
        } while (fVar30 <= *(float *)((long)puVar26 + 0x14));
        *(undefined4 *)(puVar17 + 2) = uVar5;
        puVar17[1] = uVar21;
        *puVar17 = uVar16;
        *(float *)((long)puVar17 + 0x14) = fVar30;
      }
    }
    bVar4 = uVar23 != 0;
    uVar23 = uVar23 - 1;
  } while (bVar4);
  lVar13 = (uVar12 >> 3) * -0x5555555555555555;
  do {
    uStack_88 = puVar8[1];
    uStack_90 = *puVar8;
    uStack_80 = puVar8[2];
    puVar26 = puVar8;
    uVar11 = 0;
    do {
      param_1 = (undefined8 *)(uVar11 * 2);
      uVar12 = uVar11 << 1 | 1;
      puVar27 = puVar26 + uVar11 * 3 + 3;
      if (((long)((long)param_1 + 2U) < lVar13) &&
         (*(float *)((long)puVar26 + uVar11 * 0x18 + 0x2c) <
          *(float *)((long)puVar26 + uVar11 * 0x18 + 0x44))) {
        puVar27 = puVar26 + uVar11 * 3 + 6;
        uVar12 = (long)param_1 + 2U;
      }
      uVar21 = puVar27[1];
      uVar16 = *puVar27;
      puVar26[2] = puVar27[2];
      puVar26[1] = uVar21;
      *puVar26 = uVar16;
      puVar26 = puVar27;
      uVar11 = uVar12;
    } while ((long)uVar12 <= (long)(lVar13 - 2U >> 1));
    puVar26 = puVar25 + -3;
    if (puVar27 == puVar26) {
      puVar27[2] = uStack_80;
      puVar27[1] = uStack_88;
      *puVar27 = uStack_90;
    }
    else {
      uVar21 = puVar25[-2];
      uVar16 = *puVar26;
      puVar27[2] = puVar25[-1];
      puVar27[1] = uVar21;
      *puVar27 = uVar16;
      puVar25[-1] = uStack_80;
      puVar25[-2] = uStack_88;
      *puVar26 = uStack_90;
      uVar11 = (long)puVar27 + (0x18 - (long)puVar8);
      if (0x18 < (long)uVar11) {
        uVar11 = (uVar11 >> 3) * -0x5555555555555555 - 2 >> 1;
        fVar30 = *(float *)((long)puVar27 + 0x14);
        if (*(float *)((long)(puVar8 + uVar11 * 3) + 0x14) < fVar30) {
          uStack_a8 = puVar27[1];
          uStack_b0 = *puVar27;
          uStack_a0 = *(undefined4 *)(puVar27 + 2);
          puVar25 = puVar8 + uVar11 * 3;
          do {
            puVar17 = puVar25;
            uVar21 = puVar17[1];
            uVar16 = *puVar17;
            puVar27[2] = puVar17[2];
            puVar27[1] = uVar21;
            *puVar27 = uVar16;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1 >> 1;
            puVar27 = puVar17;
            puVar25 = puVar8 + uVar11 * 3;
          } while (*(float *)((long)(puVar8 + uVar11 * 3) + 0x14) < fVar30);
          *(undefined4 *)(puVar17 + 2) = uStack_a0;
          puVar17[1] = uStack_a8;
          *puVar17 = uStack_b0;
          *(float *)((long)puVar17 + 0x14) = fVar30;
        }
      }
    }
    bVar4 = 2 < lVar13;
    lVar13 = lVar13 + -1;
    puVar25 = puVar26;
  } while (bVar4);
LAB_10a438488:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
LAB_10a4384c0:
  puVar10 = param_5;
  puVar8 = param_1;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)auStack_110;
  unaff_x27 = puVar28;
  unaff_x28 = puVar29;
FUN_10a4384c4:
  *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x28;
  *(undefined8 **)((long)register0x00000008 + -8) = unaff_x27;
  fVar30 = *(float *)((long)param_2 + 0x14);
  if (*(float *)((long)puVar8 + 0x14) <= fVar30) {
    if (*(float *)((long)param_3 + 0x14) < fVar30) {
      uVar16 = param_2[2];
      uVar32 = param_2[1];
      uVar31 = *param_2;
      uVar21 = param_3[2];
      uVar33 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar33;
      param_2[2] = uVar21;
      param_3[1] = uVar32;
      *param_3 = uVar31;
      param_3[2] = uVar16;
      if (*(float *)((long)param_2 + 0x14) < *(float *)((long)puVar8 + 0x14)) {
        uVar16 = puVar8[2];
        uVar32 = puVar8[1];
        uVar31 = *puVar8;
        uVar21 = param_2[2];
        uVar33 = *param_2;
        puVar8[1] = param_2[1];
        *puVar8 = uVar33;
        puVar8[2] = uVar21;
        param_2[1] = uVar32;
        *param_2 = uVar31;
        param_2[2] = uVar16;
      }
    }
  }
  else {
    if (fVar30 <= *(float *)((long)param_3 + 0x14)) {
      uVar16 = puVar8[2];
      uVar32 = puVar8[1];
      uVar31 = *puVar8;
      uVar21 = param_2[2];
      uVar33 = *param_2;
      puVar8[1] = param_2[1];
      *puVar8 = uVar33;
      puVar8[2] = uVar21;
      param_2[1] = uVar32;
      *param_2 = uVar31;
      param_2[2] = uVar16;
      if (*(float *)((long)param_2 + 0x14) <= *(float *)((long)param_3 + 0x14)) goto LAB_10a4385b0;
      uVar16 = param_2[2];
      uVar32 = param_2[1];
      uVar31 = *param_2;
      uVar21 = param_3[2];
      uVar33 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar33;
      param_2[2] = uVar21;
    }
    else {
      uVar16 = puVar8[2];
      uVar32 = puVar8[1];
      uVar31 = *puVar8;
      uVar21 = param_3[2];
      uVar33 = *param_3;
      puVar8[1] = param_3[1];
      *puVar8 = uVar33;
      puVar8[2] = uVar21;
    }
    param_3[1] = uVar32;
    *param_3 = uVar31;
    param_3[2] = uVar16;
  }
LAB_10a4385b0:
  if (*(float *)((long)param_4 + 0x14) < *(float *)((long)param_3 + 0x14)) {
    uVar16 = param_3[2];
    uVar32 = param_3[1];
    uVar31 = *param_3;
    uVar21 = param_4[2];
    uVar33 = *param_4;
    param_3[1] = param_4[1];
    *param_3 = uVar33;
    param_3[2] = uVar21;
    param_4[1] = uVar32;
    *param_4 = uVar31;
    param_4[2] = uVar16;
    if (*(float *)((long)param_3 + 0x14) < *(float *)((long)param_2 + 0x14)) {
      uVar16 = param_2[2];
      uVar32 = param_2[1];
      uVar31 = *param_2;
      uVar21 = param_3[2];
      uVar33 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar33;
      param_2[2] = uVar21;
      param_3[1] = uVar32;
      *param_3 = uVar31;
      param_3[2] = uVar16;
      if (*(float *)((long)param_2 + 0x14) < *(float *)((long)puVar8 + 0x14)) {
        uVar16 = puVar8[2];
        uVar32 = puVar8[1];
        uVar31 = *puVar8;
        uVar21 = param_2[2];
        uVar33 = *param_2;
        puVar8[1] = param_2[1];
        *puVar8 = uVar33;
        puVar8[2] = uVar21;
        param_2[1] = uVar32;
        *param_2 = uVar31;
        param_2[2] = uVar16;
      }
    }
  }
  if (*(float *)((long)puVar10 + 0x14) < *(float *)((long)param_4 + 0x14)) {
    uVar16 = param_4[2];
    uVar32 = param_4[1];
    uVar31 = *param_4;
    uVar21 = puVar10[2];
    uVar33 = *puVar10;
    param_4[1] = puVar10[1];
    *param_4 = uVar33;
    param_4[2] = uVar21;
    puVar10[1] = uVar32;
    *puVar10 = uVar31;
    puVar10[2] = uVar16;
    if (*(float *)((long)param_4 + 0x14) < *(float *)((long)param_3 + 0x14)) {
      uVar16 = param_3[2];
      uVar32 = param_3[1];
      uVar31 = *param_3;
      uVar21 = param_4[2];
      uVar33 = *param_4;
      param_3[1] = param_4[1];
      *param_3 = uVar33;
      param_3[2] = uVar21;
      param_4[1] = uVar32;
      *param_4 = uVar31;
      param_4[2] = uVar16;
      if (*(float *)((long)param_3 + 0x14) < *(float *)((long)param_2 + 0x14)) {
        uVar16 = param_2[2];
        uVar32 = param_2[1];
        uVar31 = *param_2;
        uVar21 = param_3[2];
        uVar33 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar33;
        param_2[2] = uVar21;
        param_3[1] = uVar32;
        *param_3 = uVar31;
        param_3[2] = uVar16;
        if (*(float *)((long)param_2 + 0x14) < *(float *)((long)puVar8 + 0x14)) {
          uVar16 = puVar8[2];
          uVar32 = puVar8[1];
          uVar31 = *puVar8;
          uVar21 = param_2[2];
          uVar33 = *param_2;
          puVar8[1] = param_2[1];
          *puVar8 = uVar33;
          puVar8[2] = uVar21;
          param_2[1] = uVar32;
          *param_2 = uVar31;
          param_2[2] = uVar16;
        }
      }
    }
  }
  return;
}



/* Entry: 10a4384c4; end: 10a43870b;  */

void FUN_10a4384c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  fVar3 = *(float *)((long)param_2 + 0x14);
  if (*(float *)((long)param_1 + 0x14) <= fVar3) {
    if (*(float *)((long)param_3 + 0x14) < fVar3) {
      uVar1 = param_2[2];
      uVar5 = param_2[1];
      uVar4 = *param_2;
      uVar2 = param_3[2];
      uVar6 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar6;
      param_2[2] = uVar2;
      param_3[1] = uVar5;
      *param_3 = uVar4;
      param_3[2] = uVar1;
      if (*(float *)((long)param_2 + 0x14) < *(float *)((long)param_1 + 0x14)) {
        uVar1 = param_1[2];
        uVar5 = param_1[1];
        uVar4 = *param_1;
        uVar2 = param_2[2];
        uVar6 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar6;
        param_1[2] = uVar2;
        param_2[1] = uVar5;
        *param_2 = uVar4;
        param_2[2] = uVar1;
      }
    }
  }
  else {
    if (fVar3 <= *(float *)((long)param_3 + 0x14)) {
      uVar1 = param_1[2];
      uVar5 = param_1[1];
      uVar4 = *param_1;
      uVar2 = param_2[2];
      uVar6 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      param_1[2] = uVar2;
      param_2[1] = uVar5;
      *param_2 = uVar4;
      param_2[2] = uVar1;
      if (*(float *)((long)param_2 + 0x14) <= *(float *)((long)param_3 + 0x14)) goto LAB_10a4385b0;
      uVar1 = param_2[2];
      uVar5 = param_2[1];
      uVar4 = *param_2;
      uVar2 = param_3[2];
      uVar6 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar6;
      param_2[2] = uVar2;
    }
    else {
      uVar1 = param_1[2];
      uVar5 = param_1[1];
      uVar4 = *param_1;
      uVar2 = param_3[2];
      uVar6 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar6;
      param_1[2] = uVar2;
    }
    param_3[1] = uVar5;
    *param_3 = uVar4;
    param_3[2] = uVar1;
  }
LAB_10a4385b0:
  if (*(float *)((long)param_4 + 0x14) < *(float *)((long)param_3 + 0x14)) {
    uVar1 = param_3[2];
    uVar5 = param_3[1];
    uVar4 = *param_3;
    uVar2 = param_4[2];
    uVar6 = *param_4;
    param_3[1] = param_4[1];
    *param_3 = uVar6;
    param_3[2] = uVar2;
    param_4[1] = uVar5;
    *param_4 = uVar4;
    param_4[2] = uVar1;
    if (*(float *)((long)param_3 + 0x14) < *(float *)((long)param_2 + 0x14)) {
      uVar1 = param_2[2];
      uVar5 = param_2[1];
      uVar4 = *param_2;
      uVar2 = param_3[2];
      uVar6 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar6;
      param_2[2] = uVar2;
      param_3[1] = uVar5;
      *param_3 = uVar4;
      param_3[2] = uVar1;
      if (*(float *)((long)param_2 + 0x14) < *(float *)((long)param_1 + 0x14)) {
        uVar1 = param_1[2];
        uVar5 = param_1[1];
        uVar4 = *param_1;
        uVar2 = param_2[2];
        uVar6 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar6;
        param_1[2] = uVar2;
        param_2[1] = uVar5;
        *param_2 = uVar4;
        param_2[2] = uVar1;
      }
    }
  }
  if (*(float *)((long)param_5 + 0x14) < *(float *)((long)param_4 + 0x14)) {
    uVar1 = param_4[2];
    uVar5 = param_4[1];
    uVar4 = *param_4;
    uVar2 = param_5[2];
    uVar6 = *param_5;
    param_4[1] = param_5[1];
    *param_4 = uVar6;
    param_4[2] = uVar2;
    param_5[1] = uVar5;
    *param_5 = uVar4;
    param_5[2] = uVar1;
    if (*(float *)((long)param_4 + 0x14) < *(float *)((long)param_3 + 0x14)) {
      uVar1 = param_3[2];
      uVar5 = param_3[1];
      uVar4 = *param_3;
      uVar2 = param_4[2];
      uVar6 = *param_4;
      param_3[1] = param_4[1];
      *param_3 = uVar6;
      param_3[2] = uVar2;
      param_4[1] = uVar5;
      *param_4 = uVar4;
      param_4[2] = uVar1;
      if (*(float *)((long)param_3 + 0x14) < *(float *)((long)param_2 + 0x14)) {
        uVar1 = param_2[2];
        uVar5 = param_2[1];
        uVar4 = *param_2;
        uVar2 = param_3[2];
        uVar6 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar6;
        param_2[2] = uVar2;
        param_3[1] = uVar5;
        *param_3 = uVar4;
        param_3[2] = uVar1;
        if (*(float *)((long)param_2 + 0x14) < *(float *)((long)param_1 + 0x14)) {
          uVar1 = param_1[2];
          uVar5 = param_1[1];
          uVar4 = *param_1;
          uVar2 = param_2[2];
          uVar6 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar6;
          param_1[2] = uVar2;
          param_2[1] = uVar5;
          *param_2 = uVar4;
          param_2[2] = uVar1;
        }
      }
    }
  }
  return;
}



/* Entry: 10a43870c; end: 10a438baf;  */

undefined1  [16] FUN_10a43870c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  if (2 < (long)uVar6) {
    if (uVar6 == 3) {
      puVar9 = param_2 + -3;
      fVar14 = *(float *)((long)param_1 + 0x2c);
      if (fVar14 < *(float *)((long)param_1 + 0x14)) {
        if (fVar14 <= *(float *)((long)param_2 - 4)) {
          uVar7 = param_1[2];
          uVar15 = param_1[1];
          uVar11 = *param_1;
          param_1[1] = param_1[4];
          *param_1 = param_1[3];
          param_1[2] = param_1[5];
          param_1[4] = uVar15;
          param_1[3] = uVar11;
          param_1[5] = uVar7;
          if (*(float *)((long)param_1 + 0x2c) <= *(float *)((long)param_2 - 4)) goto LAB_10a438b70;
          uVar7 = param_1[5];
          uVar16 = param_1[4];
          uVar15 = param_1[3];
          uVar11 = param_2[-1];
          uVar17 = *puVar9;
          param_1[4] = param_2[-2];
          param_1[3] = uVar17;
          param_1[5] = uVar11;
        }
        else {
          uVar7 = param_1[2];
          uVar16 = param_1[1];
          uVar15 = *param_1;
          uVar11 = param_2[-1];
          uVar17 = *puVar9;
          param_1[1] = param_2[-2];
          *param_1 = uVar17;
          param_1[2] = uVar11;
        }
        param_2[-2] = uVar16;
        *puVar9 = uVar15;
        param_2[-1] = uVar7;
        goto LAB_10a438b70;
      }
      if (fVar14 <= *(float *)((long)param_2 - 4)) goto LAB_10a438b70;
      uVar7 = param_1[5];
      uVar16 = param_1[4];
      uVar15 = param_1[3];
      uVar11 = param_2[-1];
      uVar17 = *puVar9;
      param_1[4] = param_2[-2];
      param_1[3] = uVar17;
      param_1[5] = uVar11;
      param_2[-2] = uVar16;
      *puVar9 = uVar15;
      param_2[-1] = uVar7;
    }
    else {
      if (uVar6 != 4) {
        if (uVar6 == 5) {
          puVar9 = param_2 + -3;
          param_2 = param_1 + 3;
          FUN_10a4384c4(param_1,param_2,param_1 + 6,param_1 + 9,puVar9);
          goto LAB_10a438b70;
        }
        goto LAB_10a4387f4;
      }
      fVar18 = *(float *)((long)param_1 + 0x2c);
      fVar14 = *(float *)((long)param_1 + 0x44);
      if (*(float *)((long)param_1 + 0x14) <= fVar18) {
        if (fVar14 < fVar18) {
          uVar7 = param_1[5];
          uVar15 = param_1[4];
          uVar11 = param_1[3];
          param_1[4] = param_1[7];
          param_1[3] = param_1[6];
          param_1[5] = param_1[8];
          param_1[7] = uVar15;
          param_1[6] = uVar11;
          param_1[8] = uVar7;
          if (*(float *)((long)param_1 + 0x2c) < *(float *)((long)param_1 + 0x14)) {
            uVar7 = param_1[2];
            uVar15 = param_1[1];
            uVar11 = *param_1;
            param_1[1] = param_1[4];
            *param_1 = param_1[3];
            param_1[2] = param_1[5];
            param_1[4] = uVar15;
            param_1[3] = uVar11;
            param_1[5] = uVar7;
          }
        }
      }
      else {
        if (fVar18 <= fVar14) {
          uVar7 = param_1[2];
          uVar15 = param_1[1];
          uVar11 = *param_1;
          param_1[1] = param_1[4];
          *param_1 = param_1[3];
          param_1[2] = param_1[5];
          param_1[4] = uVar15;
          param_1[3] = uVar11;
          param_1[5] = uVar7;
          if (*(float *)((long)param_1 + 0x2c) <= fVar14) goto LAB_10a438adc;
          uVar7 = param_1[5];
          uVar15 = param_1[4];
          uVar11 = param_1[3];
          param_1[4] = param_1[7];
          param_1[3] = param_1[6];
          param_1[5] = param_1[8];
        }
        else {
          uVar7 = param_1[2];
          uVar15 = param_1[1];
          uVar11 = *param_1;
          param_1[1] = param_1[7];
          *param_1 = param_1[6];
          param_1[2] = param_1[8];
        }
        param_1[7] = uVar15;
        param_1[6] = uVar11;
        param_1[8] = uVar7;
      }
LAB_10a438adc:
      if (*(float *)((long)param_1 + 0x44) <= *(float *)((long)param_2 - 4)) goto LAB_10a438b70;
      uVar7 = param_1[8];
      uVar16 = param_1[7];
      uVar15 = param_1[6];
      uVar11 = param_2[-1];
      uVar17 = param_2[-3];
      param_1[7] = param_2[-2];
      param_1[6] = uVar17;
      param_1[8] = uVar11;
      param_2[-2] = uVar16;
      param_2[-3] = uVar15;
      param_2[-1] = uVar7;
      if (*(float *)((long)param_1 + 0x2c) <= *(float *)((long)param_1 + 0x44)) goto LAB_10a438b70;
      uVar7 = param_1[5];
      uVar15 = param_1[4];
      uVar11 = param_1[3];
      param_1[4] = param_1[7];
      param_1[3] = param_1[6];
      param_1[5] = param_1[8];
      param_1[7] = uVar15;
      param_1[6] = uVar11;
      param_1[8] = uVar7;
    }
    if (*(float *)((long)param_1 + 0x2c) < *(float *)((long)param_1 + 0x14)) {
      uVar7 = param_1[2];
      uVar15 = param_1[1];
      uVar11 = *param_1;
      param_1[1] = param_1[4];
      *param_1 = param_1[3];
      param_1[2] = param_1[5];
      param_1[4] = uVar15;
      param_1[3] = uVar11;
      param_1[5] = uVar7;
    }
    goto LAB_10a438b70;
  }
  if (uVar6 < 2) goto LAB_10a438b70;
  if (uVar6 == 2) {
    if (*(float *)((long)param_2 - 4) < *(float *)((long)param_1 + 0x14)) {
      uVar7 = param_1[2];
      uVar16 = param_1[1];
      uVar15 = *param_1;
      uVar11 = param_2[-1];
      uVar17 = param_2[-3];
      param_1[1] = param_2[-2];
      *param_1 = uVar17;
      param_1[2] = uVar11;
      param_2[-2] = uVar16;
      param_2[-3] = uVar15;
      param_2[-1] = uVar7;
    }
    goto LAB_10a438b70;
  }
LAB_10a4387f4:
  puVar9 = param_1 + 6;
  fVar18 = *(float *)((long)param_1 + 0x2c);
  fVar14 = *(float *)((long)param_1 + 0x44);
  if (*(float *)((long)param_1 + 0x14) <= fVar18) {
    if (fVar14 < fVar18) {
      uVar7 = param_1[5];
      uVar15 = param_1[4];
      uVar11 = param_1[3];
      param_1[4] = param_1[7];
      param_1[3] = *puVar9;
      param_1[5] = param_1[8];
      param_1[7] = uVar15;
      *puVar9 = uVar11;
      param_1[8] = uVar7;
      if (*(float *)((long)param_1 + 0x2c) < *(float *)((long)param_1 + 0x14)) {
        uVar7 = param_1[2];
        uVar15 = param_1[1];
        uVar11 = *param_1;
        param_1[1] = param_1[4];
        *param_1 = param_1[3];
        param_1[2] = param_1[5];
        param_1[4] = uVar15;
        param_1[3] = uVar11;
        param_1[5] = uVar7;
      }
    }
  }
  else {
    if (fVar18 <= fVar14) {
      uVar7 = param_1[2];
      uVar15 = param_1[1];
      uVar11 = *param_1;
      param_1[1] = param_1[4];
      *param_1 = param_1[3];
      param_1[2] = param_1[5];
      param_1[4] = uVar15;
      param_1[3] = uVar11;
      param_1[5] = uVar7;
      if (*(float *)((long)param_1 + 0x2c) <= fVar14) goto LAB_10a4389e4;
      uVar7 = param_1[5];
      uVar15 = param_1[4];
      uVar11 = param_1[3];
      param_1[4] = param_1[7];
      param_1[3] = *puVar9;
      param_1[5] = param_1[8];
    }
    else {
      uVar7 = param_1[2];
      uVar15 = param_1[1];
      uVar11 = *param_1;
      param_1[1] = param_1[7];
      *param_1 = *puVar9;
      param_1[2] = param_1[8];
    }
    param_1[7] = uVar15;
    *puVar9 = uVar11;
    param_1[8] = uVar7;
  }
LAB_10a4389e4:
  if (param_1 + 9 != param_2) {
    lVar10 = 0;
    iVar13 = 0;
    puVar12 = param_1 + 9;
    do {
      fVar14 = *(float *)((long)puVar12 + 0x14);
      if (fVar14 < *(float *)((long)puVar9 + 0x14)) {
        uVar11 = puVar12[1];
        uVar7 = *puVar12;
        uVar2 = *(undefined4 *)(puVar12 + 2);
        lVar3 = lVar10;
        do {
          lVar8 = lVar3;
          *(undefined8 *)((long)param_1 + lVar8 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x38);
          *(undefined8 *)((long)param_1 + lVar8 + 0x48) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x30);
          *(undefined8 *)((long)param_1 + lVar8 + 0x58) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x40);
          puVar9 = param_1;
          if (lVar8 == -0x30) goto LAB_10a438a58;
          lVar3 = lVar8 + -0x18;
        } while (fVar14 < *(float *)((long)param_1 + lVar8 + 0x2c));
        puVar9 = (undefined8 *)((long)param_1 + lVar8 + 0x30);
LAB_10a438a58:
        puVar9[1] = uVar11;
        *puVar9 = uVar7;
        *(undefined4 *)(puVar9 + 2) = uVar2;
        *(float *)((long)puVar9 + 0x14) = fVar14;
        iVar13 = iVar13 + 1;
        if (iVar13 == 8) {
          uVar6 = (ulong)(puVar12 + 3 == param_2);
          goto LAB_10a438b74;
        }
      }
      puVar1 = puVar12 + 3;
      lVar10 = lVar10 + 0x18;
      puVar9 = puVar12;
      puVar12 = puVar1;
    } while (puVar1 != param_2);
  }
LAB_10a438b70:
  uVar6 = 1;
LAB_10a438b74:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = uVar6;
    return auVar19;
  }
  ___stack_chk_fail(uVar6);
  plVar4 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar5 = (long)param_2 << 4;
    __Znwm(lVar5);
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = lVar5;
    return auVar20;
  }
  func_0x000109ffded8();
  lVar5 = plVar4[1];
  lVar10 = plVar4[2];
  while (lVar10 != lVar5) {
    plVar4[2] = lVar10 + -0x10;
    FUN_10a3f90e8();
    lVar10 = plVar4[2];
  }
  if (*plVar4 != 0) {
    __ZdlPv();
  }
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = plVar4;
  return auVar21;
}



/* Entry: 10a438bb0; end: 10a438bc3;  */

undefined1  [16] FUN_10a438bb0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
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
    FUN_10a3f90e8();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a438bc4; end: 10a438c43;  */

undefined1  [16] FUN_10a438bc4(long *param_1,ulong param_2)

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
    FUN_10a3f90e8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a438c44; end: 10a438d9f;  */

ulong * FUN_10a438c44(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar4 = (undefined8 *)param_1[1];
  if ((ulong *)(((long)(param_1[2] - (long)puVar4) >> 4) * -0x3333333333333333) < param_2) {
    lVar9 = (long)puVar4 - *param_1;
    uVar3 = (long)param_2 + (lVar9 >> 4) * -0x3333333333333333;
    if (0x333333333333333 < uVar3) {
      FUN_10a1915d0();
      puVar2 = param_1 + 1;
      uVar7 = *param_1;
      puVar1 = param_2 + 1;
      uVar8 = *param_2;
      uVar3 = uVar7;
      if (uVar8 <= uVar7) {
        uVar3 = uVar8;
      }
      lVar9 = 0;
      if (uVar7 <= uVar8) {
        lVar9 = uVar8 - uVar7;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        uVar10 = *puVar1;
        uVar12 = puVar1[3];
        uVar11 = puVar1[2];
        puVar2[1] = puVar1[1];
        *puVar2 = uVar10;
        puVar2[3] = uVar12;
        puVar2[2] = uVar11;
        uVar11 = puVar1[5];
        uVar10 = puVar1[4];
        uVar13 = puVar1[7];
        uVar12 = puVar1[6];
        uVar14 = puVar1[8];
        uVar16 = puVar1[0xb];
        uVar15 = puVar1[10];
        puVar2[9] = puVar1[9];
        puVar2[8] = uVar14;
        puVar2[0xb] = uVar16;
        puVar2[10] = uVar15;
        puVar2[5] = uVar11;
        puVar2[4] = uVar10;
        puVar2[7] = uVar13;
        puVar2[6] = uVar12;
        puVar2 = puVar2 + 0xc;
        puVar1 = puVar1 + 0xc;
      }
      if (uVar7 < uVar8) {
        do {
          uVar3 = *puVar1;
          uVar8 = puVar1[3];
          uVar7 = puVar1[2];
          puVar2[1] = puVar1[1];
          *puVar2 = uVar3;
          puVar2[3] = uVar8;
          puVar2[2] = uVar7;
          uVar7 = puVar1[5];
          uVar3 = puVar1[4];
          uVar10 = puVar1[7];
          uVar8 = puVar1[6];
          uVar11 = puVar1[8];
          uVar13 = puVar1[0xb];
          uVar12 = puVar1[10];
          puVar2[9] = puVar1[9];
          puVar2[8] = uVar11;
          puVar2[0xb] = uVar13;
          puVar2[10] = uVar12;
          puVar2[5] = uVar7;
          puVar2[4] = uVar3;
          puVar2[7] = uVar10;
          puVar2[6] = uVar8;
          puVar1 = puVar1 + 0xc;
          puVar2 = puVar2 + 0xc;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (*param_1 < *param_2) {
        *param_1 = *param_2;
      }
      else {
        FUN_10a005d64(param_1);
      }
      return param_1;
    }
    lVar6 = (long)(param_1[2] - *param_1) >> 4;
    uVar7 = lVar6 * -0x6666666666666666;
    if (uVar7 < uVar3 || uVar7 - uVar3 == 0) {
      uVar7 = uVar3;
    }
    if (0x199999999999998 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar7 = 0x333333333333333;
    }
    if (uVar7 == 0) {
      puVar1 = (ulong *)0x0;
    }
    else {
      puVar1 = param_1;
      FUN_10a1915e4();
    }
    puVar5 = (undefined8 *)((long)puVar1 + lVar9);
    puVar4 = puVar5;
    do {
      puVar4[1] = 0;
      *puVar4 = 0x3f800000;
      puVar4[3] = 0;
      puVar4[2] = 0x3f80000000000000;
      puVar4[5] = 0x3f800000;
      puVar4[4] = 0;
      puVar4[7] = 0x3f80000000000000;
      puVar4[6] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4 = puVar4 + 10;
    } while (puVar4 != puVar5 + (long)param_2 * 10);
    uVar3 = (long)puVar5 - (param_1[1] - *param_1);
    _memcpy(uVar3);
    puVar2 = (ulong *)*param_1;
    *param_1 = uVar3;
    param_1[1] = (ulong)(puVar5 + (long)param_2 * 10);
    param_1[2] = (ulong)(puVar1 + uVar7 * 10);
    param_1 = (ulong *)0x0;
    if (puVar2 != (ulong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return puVar2;
    }
  }
  else {
    puVar5 = puVar4;
    if (param_2 != (ulong *)0x0) {
      puVar5 = puVar4 + (long)param_2 * 10;
      do {
        puVar4[1] = 0;
        *puVar4 = 0x3f800000;
        puVar4[3] = 0;
        puVar4[2] = 0x3f80000000000000;
        puVar4[5] = 0x3f800000;
        puVar4[4] = 0;
        puVar4[7] = 0x3f80000000000000;
        puVar4[6] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4 = puVar4 + 10;
      } while (puVar4 != puVar5);
    }
    param_1[1] = (ulong)puVar5;
  }
  return param_1;
}



/* Entry: 10a438da0; end: 10a438e73;  */

ulong * FUN_10a438da0(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar3 = param_1 + 1;
  uVar4 = *param_1;
  puVar2 = param_2 + 1;
  uVar5 = *param_2;
  uVar7 = uVar4;
  if (uVar5 <= uVar4) {
    uVar7 = uVar5;
  }
  lVar1 = 0;
  if (uVar4 <= uVar5) {
    lVar1 = uVar5 - uVar4;
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar6 = *puVar2;
    uVar9 = puVar2[3];
    uVar8 = puVar2[2];
    puVar3[1] = puVar2[1];
    *puVar3 = uVar6;
    puVar3[3] = uVar9;
    puVar3[2] = uVar8;
    uVar8 = puVar2[5];
    uVar6 = puVar2[4];
    uVar10 = puVar2[7];
    uVar9 = puVar2[6];
    uVar11 = puVar2[8];
    uVar13 = puVar2[0xb];
    uVar12 = puVar2[10];
    puVar3[9] = puVar2[9];
    puVar3[8] = uVar11;
    puVar3[0xb] = uVar13;
    puVar3[10] = uVar12;
    puVar3[5] = uVar8;
    puVar3[4] = uVar6;
    puVar3[7] = uVar10;
    puVar3[6] = uVar9;
    puVar3 = puVar3 + 0xc;
    puVar2 = puVar2 + 0xc;
  }
  if (uVar4 < uVar5) {
    do {
      uVar7 = *puVar2;
      uVar5 = puVar2[3];
      uVar4 = puVar2[2];
      puVar3[1] = puVar2[1];
      *puVar3 = uVar7;
      puVar3[3] = uVar5;
      puVar3[2] = uVar4;
      uVar4 = puVar2[5];
      uVar7 = puVar2[4];
      uVar6 = puVar2[7];
      uVar5 = puVar2[6];
      uVar8 = puVar2[8];
      uVar10 = puVar2[0xb];
      uVar9 = puVar2[10];
      puVar3[9] = puVar2[9];
      puVar3[8] = uVar8;
      puVar3[0xb] = uVar10;
      puVar3[10] = uVar9;
      puVar3[5] = uVar4;
      puVar3[4] = uVar7;
      puVar3[7] = uVar6;
      puVar3[6] = uVar5;
      puVar2 = puVar2 + 0xc;
      puVar3 = puVar3 + 0xc;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (*param_1 < *param_2) {
    *param_1 = *param_2;
  }
  else {
    FUN_10a005d64(param_1);
  }
  return param_1;
}



/* Entry: 10a438e74; end: 10a438ecf;  */

void FUN_10a438e74(long *param_1)

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
        FUN_10a3f90e8();
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



/* Entry: 10a438ed0; end: 10a438f67;  */

undefined8 FUN_10a438ed0(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  
  if (param_1 != param_2) {
    pfVar4 = param_1 + 7;
    do {
      if (-param_3[3] <=
          param_1[3] + param_3[1] * param_1[1] + *param_3 * *param_1 + param_3[2] * param_1[2]) {
        uVar5 = 0xffffffffffffffff;
        pfVar6 = pfVar4;
        do {
          if (uVar5 == 4) {
            return 1;
          }
          pfVar1 = pfVar6 + -3;
          pfVar3 = pfVar6 + -2;
          pfVar2 = pfVar6 + -1;
          fVar7 = *pfVar6;
          uVar5 = uVar5 + 1;
          pfVar6 = pfVar6 + 4;
        } while (-param_3[3] <=
                 fVar7 + param_3[1] * *pfVar3 + *param_3 * *pfVar1 + param_3[2] * *pfVar2);
        if (4 < uVar5) {
          return 1;
        }
      }
      param_1 = param_1 + 0x18;
      pfVar4 = pfVar4 + 0x18;
    } while (param_1 != param_2);
  }
  return 0;
}



/* Entry: 10a438f68; end: 10a439043;  */

void FUN_10a438f68(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[2] == puVar6) {
    if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
      param_1[1] = puVar6;
      __ZdlPv(puVar6);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    FUN_10a439044(param_1,1);
    puVar6 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar6 = *param_2;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    puVar5 = (undefined8 *)param_1[1];
    puVar2 = puVar6;
    puVar3 = puVar5;
    puVar4 = puVar5;
    if (puVar5 == puVar6) {
      for (; param_2 != param_3; param_2 = param_2 + 1) {
        *puVar3 = *param_2;
        puVar2 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar6 = (undefined8 *)((long)puVar5 + ((long)puVar2 - (long)puVar6));
    }
    else {
      lVar1 = (long)param_3 - (long)param_2;
      if (lVar1 != 0) {
        _memmove(puVar6,param_2,lVar1);
      }
      puVar6 = (undefined8 *)((long)puVar6 + lVar1);
    }
  }
  param_1[1] = puVar6;
  return;
}



/* Entry: 10a439044; end: 10a4390f7;  */

/* WARNING: Possible PIC construction at 0x00010a439094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a439098) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */

void FUN_10a439044(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long *plVar4;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 auStack_40 [4];
  undefined1 *puVar3;
  
  if (param_2 >> 0x3d == 0) {
    plVar4 = param_1;
    FUN_10a3ae828();
    *param_1 = (long)plVar4;
    param_1[1] = (long)plVar4;
    param_1[2] = (long)(plVar4 + param_2);
    return;
  }
  uVar5 = 0x10a43907c;
  FUN_10a3ae814();
  puVar1 = &stack0xffffffffffffffe0;
  puVar2 = (undefined1 *)register0x00000008;
  while (plVar4 = param_1, puVar3 = puVar1, plVar4 != (long *)0x0) {
    *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
    *(undefined8 *)(puVar3 + -8) = uVar5;
    uVar5 = 0x10a439098;
    puVar1 = puVar3 + -0x20;
    unaff_x19 = plVar4;
    puVar2 = puVar3;
    param_1 = (long *)*plVar4;
  }
  return;
}



/* Entry: 10a4390f8; end: 10a43926b;  */

void FUN_10a4390f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  (**(code **)param_1[0x6a])(param_1 + 0x6a);
  (**(code **)param_1[0x62])(param_1 + 0x62);
  (**(code **)param_1[0x5a])(param_1 + 0x5a);
  if (param_1[0x56] != 0) {
    param_1[0x57] = param_1[0x56];
    __ZdlPv();
  }
  if (param_1[0x52] != 0) {
    FUN_10a435388(param_1 + 0x52);
    __ZdlPv(param_1[0x52]);
  }
  lVar4 = param_1[0x4f];
  if (lVar4 != 0) {
    lVar1 = param_1[0x50];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a43beb0();
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x4f];
    }
    param_1[0x50] = lVar4;
    __ZdlPv(lVar2);
  }
  if (param_1[0x4c] != 0) {
    func_0x00010a40f544(param_1 + 0x4c);
    __ZdlPv(param_1[0x4c]);
  }
  lVar4 = param_1[0x49];
  if (lVar4 != 0) {
    lVar1 = param_1[0x4a];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010a435068(lVar1);
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x49];
    }
    param_1[0x4a] = lVar4;
    __ZdlPv(lVar2);
  }
  lVar4 = param_1[0x46];
  if (lVar4 != 0) {
    lVar1 = param_1[0x47];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010a435028(lVar1);
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x46];
    }
    param_1[0x47] = lVar4;
    __ZdlPv(lVar2);
  }
  if (param_1[0x43] != 0) {
    func_0x00010a40f4fc(param_1 + 0x43);
    __ZdlPv(param_1[0x43]);
  }
  FUN_10a43926c(param_1[0x41]);
  *param_1 = &PTR_FUN_110bd73a8;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x71] = &PTR_DAT_110bd74d8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar4 = param_1[0x14];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[0x15];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar4 = param_1[0x12];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[0x13];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar4 = param_1[0x10];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[0x11];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar4 = param_1[0xe];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[0xf];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a43926c; end: 10a4392e7;  */

void FUN_10a43926c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a43926c(*param_1);
    FUN_10a43926c(param_1[1]);
    func_0x00010a4392ac(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a4392e8; end: 10a43945f;  */

/* WARNING: Removing unreachable block (ram,0x00010a4393d8) */

void FUN_10a4392e8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  (**(code **)param_1[0x93])(param_1 + 0x93);
  (**(code **)param_1[0x8b])(param_1 + 0x8b);
  (**(code **)param_1[0x83])(param_1 + 0x83);
  (**(code **)param_1[0x7b])(param_1 + 0x7b);
  (**(code **)param_1[0x73])(param_1 + 0x73);
  (**(code **)param_1[0x6b])(param_1 + 0x6b);
  if (param_1[0x67] != 0) {
    param_1[0x68] = param_1[0x67];
    __ZdlPv();
  }
  FUN_10a439460(param_1 + 0x62);
  FUN_10a439460(param_1 + 0x5d);
  func_0x00010a1f9d6c(param_1 + 0x58);
  if (param_1[0x55] != 0) {
    param_1[0x56] = param_1[0x55];
    __ZdlPv();
  }
  func_0x00010a4394a8(param_1 + 0x52);
  if (param_1[0x4f] != 0) {
    param_1[0x50] = param_1[0x4f];
    __ZdlPv();
  }
  func_0x00010a4394a8(param_1 + 0x4c);
  lVar3 = param_1[0x49];
  if (lVar3 != 0) {
    lVar4 = param_1[0x4a];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != lVar3);
      lVar1 = param_1[0x49];
    }
    param_1[0x4a] = lVar3;
    __ZdlPv(lVar1);
  }
  lVar3 = param_1[0x46];
  if (lVar3 != 0) {
    lVar4 = param_1[0x47];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x50;
        func_0x00010a43548c(lVar4);
      } while (lVar4 != lVar3);
      lVar1 = param_1[0x46];
    }
    param_1[0x47] = lVar3;
    __ZdlPv(lVar1);
  }
  func_0x00010a004e5c(param_1 + 0x44);
  FUN_10a43fab8(param_1 + 0x42);
  func_0x00010a435430(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110bd7540;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x9b] = &PTR_DAT_110bd7670;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar3 = param_1[0x14];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar3 = param_1[0x12];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar3 = param_1[0x10];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar3 = param_1[0xe];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a439460; end: 10a439503;  */

long * FUN_10a439460(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a439504; end: 10a4396a3;  */

void FUN_10a439504(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffb0;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a4396a4(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa0,param_2,param_4);
  FUN_10a40e0a4(&lStack_70,plVar7,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a052f68(param_1,param_2,&stack0xffffffffffffffa0);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a4396a4; end: 10a43970b;  */

void FUN_10a4396a4(undefined **param_1,undefined **param_2,undefined **param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined **ppuVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 *extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 auStack_b8 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar7 = param_1;
  func_0x000109898688();
  if (ppuVar7 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar7);
    param_2 = ppuVar7;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110bd7378;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar8 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar9 = plVar8;
  (**(code **)(*plVar8 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  plVar10 = plVar8;
  FUN_10a4396a4(plVar8,param_2);
  FUN_10a439900(param_4);
  uStack_a0 = (undefined *)((ulong)uStack_a0._4_4_ << 0x20);
  ppuVar7 = (undefined **)&uStack_a0;
  if (param_4 != 0) {
    ppuVar7 = param_3;
  }
  func_0x000109898570(auStack_b8,plVar8,ppuVar7);
  ppuVar7 = (undefined **)&uStack_a0;
  if (1 < param_4) {
    ppuVar7 = param_3 + 2;
  }
  if ((1 < *(uint *)ppuVar7) && (FUN_10a439928(), plVar8 != (long *)0x0)) {
    FUN_10a40e13c(&lStack_90);
    plVar10 = plVar10 + 0x3e;
    FUN_10a439a9c(plVar10,auStack_b8,&UNK_10dd5b8f9,&stack0xffffffffffffff88,
                  &stack0xffffffffffffff87);
    func_0x00010a40e1d0(plVar10 + 7,&lStack_90);
    plVar8 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar10 = plStack_88 + 1;
      do {
        lVar13 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if (uStack_a8._7_1_ < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  if ((3 < (int)uStack_a0) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  *extraout_x8 = 0;
  plVar8 = plVar9 + 0x4b;
  lVar13 = plVar9[0x59];
  uVar11 = lVar13 - 1;
  plVar9[0x59] = uVar11;
  if (uVar11 < 8) {
    uVar11 = plVar8[lVar13 + 2];
    if (plVar9[0x5a] == uVar11) {
      return;
    }
  }
  else {
    uVar11 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar11) {
      return;
    }
  }
  puVar2 = (undefined *)*plVar8;
  puVar15 = (undefined *)plVar9[0x4c];
  lVar13 = (long)puVar15 - (long)puVar2;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar11) {
    uVar18 = uVar11 - uVar17;
    lVar16 = plVar9[0x4d];
    if ((ulong)(lVar16 - (long)puVar15 >> 4) < uVar18) {
      if (uVar11 >> 0x3c == 0) {
        uVar12 = lVar16 - (long)puVar2 >> 3;
        if (uVar12 <= uVar11) {
          uVar12 = uVar11;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - (long)puVar2)) {
          uVar12 = 0xfffffffffffffff;
        }
        plStack_88 = plVar8;
        if (uVar12 >> 0x3c == 0) {
          lVar6 = uVar12 << 4;
          __Znwm();
          lVar1 = lVar6 + lVar13;
          _bzero(lVar1,uVar18 * 0x10);
          lVar14 = lVar1 + uVar17 * -0x10;
          _memcpy(lVar14,puVar2,lVar13);
          *plVar8 = lVar14;
          plVar9[0x4c] = lVar1 + uVar18 * 0x10;
          plVar9[0x4d] = lVar6 + uVar12 * 0x10;
          uStack_a8 = puVar2;
          uStack_a0 = puVar2;
          puStack_98 = (undefined8 *)puVar2;
          lStack_90 = lVar16;
          func_0x00010988c1b8(&uStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(puVar15,uVar18 * 0x10);
    plVar9[0x4c] = (long)(puVar15 + uVar18 * 0x10);
  }
  else if (uVar11 < uVar17) {
    while (puVar15 != puVar2 + uVar11 * 0x10) {
      puVar15 = puVar15 + -0x10;
      func_0x00010988c204(puVar15);
    }
    plVar9[0x4c] = (long)(puVar2 + uVar11 * 0x10);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar11;
  return;
}



/* Entry: 10a43970c; end: 10a4398ff;  */

void FUN_10a43970c(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,ulong param_5)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 auStack_98 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10a4396a4(param_2,param_3);
  FUN_10a439900(param_5);
  uStack_80 = (ulong)uStack_80._4_4_ << 0x20;
  puVar2 = (uint *)&uStack_80;
  if (param_5 != 0) {
    puVar2 = param_4;
  }
  func_0x000109898570(auStack_98,param_2,puVar2);
  puVar2 = (uint *)&uStack_80;
  if (1 < param_5) {
    puVar2 = param_4 + 4;
  }
  if ((1 < *puVar2) && (FUN_10a439928(), param_2 != (long *)0x0)) {
    FUN_10a40e13c(&lStack_70);
    plVar8 = plVar8 + 0x3e;
    FUN_10a439a9c(plVar8,auStack_98,&UNK_10dd5b8f9,&stack0xffffffffffffffa8,&stack0xffffffffffffffa7
                 );
    func_0x00010a40e1d0(plVar8 + 7,&lStack_70);
    plVar8 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if (uStack_88._7_1_ < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  if ((3 < (int)(uint)uStack_80) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  *param_1 = 0;
  plVar8 = plVar7 + 0x4b;
  lVar11 = plVar7[0x59];
  uVar9 = lVar11 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar8[lVar11 + 2];
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar7[0x57] + -8);
    plVar7[0x57] = plVar7[0x57] + -8;
    if (plVar7[0x5a] == uVar9) {
      return;
    }
  }
  lVar11 = *plVar8;
  lVar14 = plVar7[0x4c];
  lVar12 = lVar14 - lVar11;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar9) {
    uVar17 = uVar9 - uVar16;
    lVar15 = plVar7[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar15 - lVar11 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_68 = plVar8;
        if (uVar10 >> 0x3c == 0) {
          lVar6 = uVar10 << 4;
          __Znwm();
          lVar14 = lVar6 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar11,lVar12);
          *plVar8 = lVar13;
          plVar7[0x4c] = lVar14 + uVar17 * 0x10;
          plVar7[0x4d] = lVar6 + uVar10 * 0x10;
          uStack_88 = lVar11;
          uStack_80 = lVar11;
          puStack_78 = (undefined8 *)lVar11;
          lStack_70 = lVar15;
          func_0x00010988c1b8(&uStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar7[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar9 < uVar16) {
    lVar11 = lVar11 + uVar9 * 0x10;
    while (lVar14 != lVar11) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar7[0x4c] = lVar11;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a439900; end: 10a439927;  */

void FUN_10a439900(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined **ppuVar18;
  long lVar19;
  ulong uVar20;
  undefined4 *extraout_x8;
  ulong uVar21;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar22;
  undefined8 unaff_x22;
  long lVar23;
  long lVar24;
  undefined8 unaff_x23;
  long lVar25;
  undefined8 unaff_x24;
  ulong uVar26;
  undefined8 unaff_x25;
  ulong uVar27;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar28;
  undefined8 ***pppuStack_20;
  code *pcStack_18;
  
  if ((int)param_1 - 1U < 2) {
    return;
  }
  ppuVar12 = (undefined **)0x2;
  ppuVar18 = (undefined **)0x1;
  FUN_10a052ee0(2,1,param_1);
  puVar10 = &stack0xffffffffffffffd0;
  pcStack_18 = FUN_10a439928;
  ppppuVar28 = &pppuStack_20;
  ppuVar13 = ppuVar12;
  pppuStack_20 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x000109898688();
  if (ppuVar13 == (undefined **)0x0) {
    ppuVar14 = (undefined **)&UNK_10f68f52e;
    pcVar9 = FUN_10a439960;
    func_0x00010988bd28();
  }
  else {
    puVar10 = &stack0xfffffffffffffff0;
    ppuVar14 = ppuVar12;
    ppuVar18 = ppuVar13;
    ppuVar12 = unaff_x19;
    ppppuVar28 = (undefined8 ****)pppuStack_20;
    pcVar9 = pcStack_18;
  }
  *(undefined8 *****)(puVar10 + -0x10) = ppppuVar28;
  *(code **)(puVar10 + -8) = pcVar9;
  FUN_10a053854();
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar18 = &PTR_DAT_110b178e0;
    param_1 = &PTR_DAT_110c41a78;
    param_4 = 0x10;
    ___dynamic_cast();
    if (ppuVar14 != (undefined **)0x0) {
      return;
    }
  }
  plVar15 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)(puVar10 + -0x50) = unaff_x24;
  *(undefined8 *)(puVar10 + -0x48) = unaff_x23;
  *(undefined8 *)(puVar10 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar10 + -0x38) = unaff_x21;
  *(undefined8 *)(puVar10 + -0x30) = unaff_x20;
  *(undefined ***)(puVar10 + -0x28) = ppuVar12;
  *(undefined1 **)(puVar10 + -0x20) = puVar10 + -0x10;
  *(code **)(puVar10 + -0x18) = FUN_10a4399a0;
  plVar16 = plVar15;
  (**(code **)(*plVar15 + 0x58))();
  if ((ulong)plVar16[0x59] < 8) {
    plVar16[plVar16[0x59] + 0x4e] = plVar16[0x5a];
    plVar16[0x59] = plVar16[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar16 + 0x4b);
  }
  plVar17 = plVar15;
  FUN_10a4396a4(plVar15,ppuVar18);
  FUN_10a0584c8(param_4);
  func_0x000109898570(puVar10 + -0x68,plVar15,param_1);
  FUN_10a40e878(plVar17,puVar10 + -0x68);
  if ((char)puVar10[-0x51] < '\0') {
    __ZdlPv(*(undefined8 *)(puVar10 + -0x68));
  }
  *extraout_x8 = 0;
  plVar15 = plVar16 + 0x4b;
  uVar1 = *(undefined8 *)(puVar10 + -0x20);
  uVar5 = *(undefined8 *)(puVar10 + -0x18);
  uVar2 = *(undefined8 *)(puVar10 + -0x30);
  uVar6 = *(undefined8 *)(puVar10 + -0x28);
  uVar3 = *(undefined8 *)(puVar10 + -0x40);
  uVar7 = *(undefined8 *)(puVar10 + -0x38);
  uVar4 = *(undefined8 *)(puVar10 + -0x50);
  uVar8 = *(undefined8 *)(puVar10 + -0x48);
  lVar19 = plVar16[0x59];
  uVar20 = lVar19 - 1;
  plVar16[0x59] = uVar20;
  if (uVar20 < 8) {
    uVar20 = plVar15[lVar19 + 2];
    if (plVar16[0x5a] == uVar20) {
      return;
    }
  }
  else {
    uVar20 = *(ulong *)(plVar16[0x57] + -8);
    plVar16[0x57] = plVar16[0x57] + -8;
    if (plVar16[0x5a] == uVar20) {
      return;
    }
  }
  *(undefined8 *)(puVar10 + -0x70) = unaff_x28;
  *(undefined8 *)(puVar10 + -0x68) = unaff_x27;
  *(undefined8 *)(puVar10 + -0x60) = unaff_x26;
  *(undefined8 *)(puVar10 + -0x58) = unaff_x25;
  *(undefined8 *)(puVar10 + -0x50) = uVar4;
  *(undefined8 *)(puVar10 + -0x48) = uVar8;
  *(undefined8 *)(puVar10 + -0x40) = uVar3;
  *(undefined8 *)(puVar10 + -0x38) = uVar7;
  *(undefined8 *)(puVar10 + -0x30) = uVar2;
  *(undefined8 *)(puVar10 + -0x28) = uVar6;
  *(undefined8 *)(puVar10 + -0x20) = uVar1;
  *(undefined8 *)(puVar10 + -0x18) = uVar5;
  lVar19 = *plVar15;
  lVar24 = plVar16[0x4c];
  lVar22 = lVar24 - lVar19;
  uVar26 = lVar22 >> 4;
  if (uVar26 < uVar20) {
    uVar27 = uVar20 - uVar26;
    lVar25 = plVar16[0x4d];
    if ((ulong)(lVar25 - lVar24 >> 4) < uVar27) {
      if (uVar20 >> 0x3c == 0) {
        uVar21 = lVar25 - lVar19 >> 3;
        if (uVar21 <= uVar20) {
          uVar21 = uVar20;
        }
        if (0x7fffffffffffffef < (ulong)(lVar25 - lVar19)) {
          uVar21 = 0xfffffffffffffff;
        }
        *(long **)(puVar10 + -0x78) = plVar15;
        if (uVar21 >> 0x3c == 0) {
          lVar11 = uVar21 << 4;
          __Znwm();
          lVar24 = lVar11 + lVar22;
          _bzero(lVar24,uVar27 * 0x10);
          lVar23 = lVar24 + uVar26 * -0x10;
          _memcpy(lVar23,lVar19,lVar22);
          *plVar15 = lVar23;
          plVar16[0x4c] = lVar24 + uVar27 * 0x10;
          plVar16[0x4d] = lVar11 + uVar21 * 0x10;
          *(long *)(puVar10 + -0x88) = lVar19;
          *(long *)(puVar10 + -0x80) = lVar25;
          *(long *)(puVar10 + -0x98) = lVar19;
          *(long *)(puVar10 + -0x90) = lVar19;
          func_0x00010988c1b8(puVar10 + -0x98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar9)();
    }
    _bzero(lVar24,uVar27 * 0x10);
    plVar16[0x4c] = lVar24 + uVar27 * 0x10;
  }
  else if (uVar20 < uVar26) {
    lVar19 = lVar19 + uVar20 * 0x10;
    while (lVar24 != lVar19) {
      lVar24 = lVar24 + -0x10;
      func_0x00010988c204(lVar24);
    }
    plVar16[0x4c] = lVar19;
  }
code_r0x00010988c138:
  plVar16[0x5a] = uVar20;
  return;
}



/* Entry: 10a439928; end: 10a43995f;  */

void FUN_10a439928(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  undefined4 *extraout_x8;
  ulong uVar19;
  undefined **unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar20;
  undefined8 unaff_x22;
  long lVar21;
  long lVar22;
  undefined8 unaff_x23;
  long lVar23;
  undefined8 unaff_x24;
  ulong uVar24;
  undefined8 unaff_x25;
  ulong uVar25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  char acStack_71 [81];
  
  puVar1 = &stack0xfffffffffffffff0;
  ppuVar12 = param_1;
  func_0x000109898688();
  ppuVar13 = param_1;
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar13 = (undefined **)&UNK_10f68f52e;
    unaff_x30 = FUN_10a439960;
    func_0x00010988bd28();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    ppuVar12 = param_2;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_10a053854();
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar12 = &PTR_DAT_110b178e0;
    param_3 = &PTR_DAT_110c41a78;
    param_4 = 0x10;
    ___dynamic_cast();
    if (ppuVar13 != (undefined **)0x0) {
      return;
    }
  }
  plVar14 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
  *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x18) = FUN_10a4399a0;
  plVar15 = plVar14;
  (**(code **)(*plVar14 + 0x58))();
  if ((ulong)plVar15[0x59] < 8) {
    plVar15[plVar15[0x59] + 0x4e] = plVar15[0x5a];
    plVar15[0x59] = plVar15[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar15 + 0x4b);
  }
  plVar16 = plVar14;
  FUN_10a4396a4(plVar14,ppuVar12);
  FUN_10a0584c8(param_4);
  func_0x000109898570((undefined1 *)((long)register0x00000008 + -0x68),plVar14,param_3);
  FUN_10a40e878(plVar16,(undefined1 *)((long)register0x00000008 + -0x68));
  if (*(char *)((long)register0x00000008 + -0x51) < '\0') {
    __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x68));
  }
  *extraout_x8 = 0;
  plVar14 = plVar15 + 0x4b;
  uVar2 = *(undefined8 *)((long)register0x00000008 + -0x20);
  uVar6 = *(undefined8 *)((long)register0x00000008 + -0x18);
  uVar3 = *(undefined8 *)((long)register0x00000008 + -0x30);
  uVar7 = *(undefined8 *)((long)register0x00000008 + -0x28);
  uVar4 = *(undefined8 *)((long)register0x00000008 + -0x40);
  uVar8 = *(undefined8 *)((long)register0x00000008 + -0x38);
  uVar5 = *(undefined8 *)((long)register0x00000008 + -0x50);
  uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
  lVar17 = plVar15[0x59];
  uVar18 = lVar17 - 1;
  plVar15[0x59] = uVar18;
  if (uVar18 < 8) {
    uVar18 = plVar14[lVar17 + 2];
    if (plVar15[0x5a] == uVar18) {
      return;
    }
  }
  else {
    uVar18 = *(ulong *)(plVar15[0x57] + -8);
    plVar15[0x57] = plVar15[0x57] + -8;
    if (plVar15[0x5a] == uVar18) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar5;
  *(undefined8 *)((long)register0x00000008 + -0x48) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar3;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar2;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar6;
  lVar17 = *plVar14;
  lVar22 = plVar15[0x4c];
  lVar20 = lVar22 - lVar17;
  uVar24 = lVar20 >> 4;
  if (uVar24 < uVar18) {
    uVar25 = uVar18 - uVar24;
    lVar23 = plVar15[0x4d];
    if ((ulong)(lVar23 - lVar22 >> 4) < uVar25) {
      if (uVar18 >> 0x3c == 0) {
        uVar19 = lVar23 - lVar17 >> 3;
        if (uVar19 <= uVar18) {
          uVar19 = uVar18;
        }
        if (0x7fffffffffffffef < (ulong)(lVar23 - lVar17)) {
          uVar19 = 0xfffffffffffffff;
        }
        *(long **)((long)register0x00000008 + -0x78) = plVar14;
        if (uVar19 >> 0x3c == 0) {
          lVar11 = uVar19 << 4;
          __Znwm();
          lVar22 = lVar11 + lVar20;
          _bzero(lVar22,uVar25 * 0x10);
          lVar21 = lVar22 + uVar24 * -0x10;
          _memcpy(lVar21,lVar17,lVar20);
          *plVar14 = lVar21;
          plVar15[0x4c] = lVar22 + uVar25 * 0x10;
          plVar15[0x4d] = lVar11 + uVar19 * 0x10;
          *(long *)((long)register0x00000008 + -0x88) = lVar17;
          *(long *)((long)register0x00000008 + -0x80) = lVar23;
          *(long *)((long)register0x00000008 + -0x98) = lVar17;
          *(long *)((long)register0x00000008 + -0x90) = lVar17;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x98));
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar10)();
    }
    _bzero(lVar22,uVar25 * 0x10);
    plVar15[0x4c] = lVar22 + uVar25 * 0x10;
  }
  else if (uVar18 < uVar24) {
    lVar17 = lVar17 + uVar18 * 0x10;
    while (lVar22 != lVar17) {
      lVar22 = lVar22 + -0x10;
      func_0x00010988c204(lVar22);
    }
    plVar15[0x4c] = lVar17;
  }
code_r0x00010988c138:
  plVar15[0x5a] = uVar18;
  return;
}



/* Entry: 10a439960; end: 10a43999f;  */

void FUN_10a439960(long param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 in_stack_ffffffffffffff98;
  long in_stack_ffffffffffffffa8;
  
  FUN_10a053854();
  if (param_1 != 0) {
    param_2 = &PTR_DAT_110b178e0;
    param_3 = &PTR_DAT_110c41a78;
    param_4 = 0x10;
    ___dynamic_cast();
    if (param_1 != 0) {
      return;
    }
  }
  plVar3 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a4396a4(plVar3,param_2);
  FUN_10a0584c8(param_4);
  func_0x000109898570(&stack0xffffffffffffff98,plVar3,param_3);
  FUN_10a40e878(plVar5,&stack0xffffffffffffff98);
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(in_stack_ffffffffffffff98);
  }
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar3[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar3;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar3 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_98 = lVar6;
          lStack_90 = lVar6;
          lStack_88 = lVar6;
          lStack_80 = lVar12;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a4399a0; end: 10a439a9b;  */

void FUN_10a4399a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a4396a4(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a40e878(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a439a9c; end: 10a439b2f;  */

undefined1  [16]
FUN_10a439a9c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10a439b30(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_10a439bb4(alStack_60,param_1,param_3,param_4,param_5);
    FUN_10a439c44(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10a439b30; end: 10a439bb3;  */

long * FUN_10a439b30(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10a439b9c;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10a439b9c:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a439bb4; end: 10a439c43;  */

void FUN_10a439bb4(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x48;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_4 = (undefined8 *)*param_4;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(lVar1 + 0x20,*param_4,param_4[1]);
  }
  else {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(lVar1 + 0x30) = param_4[2];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
  }
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a439c44; end: 10a439cdf;  */

void FUN_10a439c44(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a439ce0; end: 10a439eb7;  */

/* WARNING: Removing unreachable block (ram,0x00010a439e10) */
/* WARNING: Removing unreachable block (ram,0x00010a439e14) */
/* WARNING: Removing unreachable block (ram,0x00010a439e1c) */
/* WARNING: Removing unreachable block (ram,0x00010a439e24) */
/* WARNING: Removing unreachable block (ram,0x00010a439e28) */

void FUN_10a439ce0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lStack_40;
  long *plStack_38;
  
  puVar8 = *(undefined8 **)(param_2 + 0x10);
  lVar7 = *param_1;
  plVar9 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar10 = (long)*(char *)((long)puVar8 + 0x57);
  if (lVar10 < 0) {
    puVar4 = (undefined8 *)puVar8[8];
    lVar10 = puVar8[9];
  }
  else {
    puVar4 = puVar8 + 8;
  }
  if (lVar7 == 0) {
    plStack_38 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar7,&PTR_DAT_110bf32c0,&PTR_DAT_110c41a78,0);
    if (lVar7 == 0) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        puVar3 = (undefined8 *)&UNK_10f656650;
        if (lVar10 != 0) {
          puVar3 = puVar4;
        }
        func_0x00010ae06f08(1,2,&UNK_10f634897,&UNK_10f65893f,0x34,&UNK_10f63498b,in_x6,in_x7,lVar10
                            ,puVar3);
      }
      lVar7 = 0;
      plStack_38 = (long *)0x0;
    }
    else {
      plStack_38 = plVar9;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
  }
  lStack_40 = lVar7;
  (*(code *)*puVar8)(&lStack_40,puVar8);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar10 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 10a439eb8; end: 10a439f07;  */

void FUN_10a439eb8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a439f08; end: 10a439f1f;  */

void FUN_10a439f08(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a439f20; end: 10a439fc7;  */

void FUN_10a439f20(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined1 uStack_29;
  long lStack_28;
  
  plStack_38 = (long *)param_1[1];
  uStack_40 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lStack_28 = param_2 + 0x18;
  lVar5 = *(long *)(param_2 + 0x10) + 0x1f0;
  FUN_10a439a9c(lVar5,lStack_28,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
  FUN_10a40e028(lVar5 + 0x38,&uStack_40);
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a439fc8; end: 10a43a007;  */

void FUN_10a439fc8(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x27)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10a43a008; end: 10a43a083;  */

long * FUN_10a43a008(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a43a084; end: 10a43a147;  */

void FUN_10a43a084(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_1;
  if ((lVar5 == 0) || (___dynamic_cast(lVar5,&PTR_DAT_110bf32c0,&PTR_DAT_110c41a78,0), lVar5 == 0))
  {
    lStack_30 = 0;
    plStack_28 = (long *)0x0;
  }
  else {
    plStack_28 = (long *)param_1[1];
    lStack_30 = lVar5;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  func_0x00010a40e1d0(*(undefined8 *)(param_2 + 0x10),&lStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar1);
      return;
    }
  }
  return;
}



/* Entry: 10a43a148; end: 10a43a17b;  */

void FUN_10a43a148(void)

{
  return;
}



/* Entry: 10a43a17c; end: 10a43a1ef;  */

long * FUN_10a43a17c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 8);
  plVar3 = plVar4;
  plVar1 = (long *)*plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    do {
      while (plVar4 = plVar1, uVar2 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
            ((uint)uVar2 >> 7 & 1) != 0) {
        plVar3 = plVar4;
        plVar1 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_10a43a1dc;
      }
      plVar1 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar3 = plVar4 + 1;
  }
LAB_10a43a1dc:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10a43a1f0; end: 10a43a243;  */

void FUN_10a43a1f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      *plVar1 = 0;
      while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 10a43a244; end: 10a43a28f;  */

long FUN_10a43a244(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010a43907c(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      *(long *)(param_1 + 8) = lVar2;
    }
    func_0x00010a43907c();
  }
  return param_1;
}



/* Entry: 10a43a290; end: 10a43a51f;  */

void FUN_10a43a290(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  undefined8 *****pppppuVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *****pppppuVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  double dVar20;
  undefined8 ****ppppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar15 = param_2;
  FUN_10a43a520(param_2,param_3);
  FUN_10a43a588(param_5);
  func_0x000109898570(&ppppuStack_a8,param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 3) {
    dVar20 = *(double *)(param_4 + 0x18);
    func_0x000109898518(param_2,param_4 + 0x20);
    fVar19 = (float)dVar20;
    if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
      fVar19 = 0.0;
    }
    FUN_10a40f184(plVar15);
    if (fVar19 < 0.0) {
      puVar9 = &UNK_10f656769;
    }
    else {
      if (-2 < (int)param_2) {
        FUN_10a410ed0(plVar15,&ppppuStack_a8);
        plVar16 = (long *)plVar15[0x4f];
        plVar15 = (long *)plVar15[0x50];
        if (plVar16 != plVar15) {
          do {
            uVar12 = (ulong)bStack_91;
            uVar11 = uStack_a0;
            if (-1 < (char)bStack_91) {
              uVar11 = uVar12;
            }
            lVar7 = *plVar16;
            if (uVar11 == 0) {
LAB_10a43a460:
              FUN_10aa7a250(fVar19,lVar7,param_2);
            }
            else {
              if (*(char *)(lVar7 + 0x67) < '\0') {
                func_0x000107c3192c(&ppppuStack_90,*(undefined8 *)(lVar7 + 0x50),
                                    *(undefined8 *)(lVar7 + 0x58));
                uVar12 = (ulong)bStack_91;
              }
              else {
                uStack_88 = *(ulong *)(lVar7 + 0x58);
                ppppuStack_90 = *(undefined8 *****)(lVar7 + 0x50);
                uStack_80 = *(ulong *)(lVar7 + 0x60);
              }
              uVar17 = uStack_80;
              uVar11 = uStack_88;
              if (-1 < (long)uStack_80) {
                uVar11 = uStack_80 >> 0x38;
              }
              uVar18 = uStack_a0;
              if (-1 < (char)bStack_91) {
                uVar18 = uVar12;
              }
              if (uVar11 == uVar18) {
                pppppuVar8 = (undefined8 *****)ppppuStack_90;
                if (-1 < (long)uStack_80) {
                  pppppuVar8 = &ppppuStack_90;
                }
                pppppuVar2 = (undefined8 *****)ppppuStack_a8;
                if (-1 < (char)bStack_91) {
                  pppppuVar2 = &ppppuStack_a8;
                }
                _memcmp(pppppuVar8,pppppuVar2);
                bVar4 = (int)pppppuVar8 == 0;
                if ((long)uVar17 < 0) goto LAB_10a43a450;
LAB_10a43a448:
                if (bVar4) goto LAB_10a43a45c;
              }
              else {
                bVar4 = false;
                if (-1 < (long)uStack_80) goto LAB_10a43a448;
LAB_10a43a450:
                __ZdlPv(ppppuStack_90);
                if (bVar4) {
LAB_10a43a45c:
                  lVar7 = *plVar16;
                  goto LAB_10a43a460;
                }
              }
            }
            plVar16 = plVar16 + 2;
          } while (plVar16 != plVar15);
        }
        if ((char)bStack_91 < '\0') {
          __ZdlPv(ppppuStack_a8);
        }
        *param_1 = 0;
        puVar1 = (ulong *)(plVar6 + 0x4b);
        lVar7 = plVar6[0x59];
        uVar11 = lVar7 - 1;
        plVar6[0x59] = uVar11;
        if (uVar11 < 8) {
          uVar11 = puVar1[lVar7 + 2];
          if (plVar6[0x5a] == uVar11) {
            return;
          }
        }
        else {
          uVar11 = *(ulong *)(plVar6[0x57] + -8);
          plVar6[0x57] = plVar6[0x57] + -8;
          if (plVar6[0x5a] == uVar11) {
            return;
          }
        }
        uVar12 = *puVar1;
        lVar7 = plVar6[0x4c];
        lVar14 = lVar7 - uVar12;
        uVar17 = lVar14 >> 4;
        if (uVar17 < uVar11) {
          uVar18 = uVar11 - uVar17;
          if ((ulong)(plVar6[0x4d] - lVar7 >> 4) < uVar18) {
            if (uVar11 >> 0x3c == 0) {
              uVar10 = plVar6[0x4d] - uVar12;
              uVar13 = (long)uVar10 >> 3;
              if (uVar13 <= uVar11) {
                uVar13 = uVar11;
              }
              if (0x7fffffffffffffef < uVar10) {
                uVar13 = 0xfffffffffffffff;
              }
              if (uVar13 >> 0x3c == 0) {
                lVar5 = uVar13 << 4;
                __Znwm();
                lVar7 = lVar5 + lVar14;
                _bzero(lVar7,uVar18 * 0x10);
                uVar17 = lVar7 + uVar17 * -0x10;
                _memcpy(uVar17,uVar12,lVar14);
                *puVar1 = uVar17;
                plVar6[0x4c] = lVar7 + uVar18 * 0x10;
                plVar6[0x4d] = lVar5 + uVar13 * 0x10;
                uStack_88 = uVar12;
                uStack_80 = uVar12;
                uStack_78 = uVar12;
                func_0x00010988c1b8(&uStack_88);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar3)();
          }
          _bzero(lVar7,uVar18 * 0x10);
          plVar6[0x4c] = lVar7 + uVar18 * 0x10;
        }
        else if (uVar11 < uVar17) {
          lVar14 = uVar12 + uVar11 * 0x10;
          while (lVar7 != lVar14) {
            lVar7 = lVar7 + -0x10;
            func_0x00010988c204(lVar7);
          }
          plVar6[0x4c] = lVar14;
        }
code_r0x00010988c138:
        plVar6[0x5a] = uVar11;
        return;
      }
      puVar9 = &UNK_10f65678f;
    }
    FUN_10a00946c(puVar9);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a43a4ec);
  (*pcVar3)();
}



/* Entry: 10a43a520; end: 10a43a587;  */

void FUN_10a43a520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 *****pppppuVar4;
  char cVar5;
  float fVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 *****pppppuVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 *extraout_x8;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 ****ppppuStack_f8;
  ulong uStack_f0;
  byte bStack_e1;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 ****ppppuStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  
  lVar14 = param_1;
  func_0x000109898688();
  if (lVar14 != 0) {
    FUN_10a053854(param_1,lVar14);
    if (param_1 != 0) {
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar10 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar10 == 3) {
    return;
  }
  plVar11 = (long *)0x3;
  uVar16 = 0;
  FUN_10a052ee0(3,0);
  plVar12 = plVar11;
  (**(code **)(*plVar11 + 0x58))();
  if ((ulong)plVar12[0x59] < 8) {
    plVar12[plVar12[0x59] + 0x4e] = plVar12[0x5a];
    plVar12[0x59] = plVar12[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar12 + 0x4b);
  }
  plVar24 = plVar11;
  FUN_10a43a520(plVar11,uVar16);
  FUN_10a43a954(param_4);
  func_0x000109898570(&ppppuStack_f8,plVar11,puVar10);
  if (*(int *)(puVar10 + 0x10) == 3) {
    fVar6 = (float)*(double *)(puVar10 + 0x18);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(puVar10 + 0x18))) {
      fVar6 = 0.0;
    }
    plVar13 = plVar11;
    func_0x000109898518(plVar11,puVar10 + 0x20);
    FUN_10a43a978(&uStack_110,plVar11,puVar10 + 0x30);
    plVar11 = plStack_108;
    plStack_d8 = plStack_108;
    uStack_e0 = uStack_110;
    uStack_110 = 0;
    plStack_108 = (long *)0x0;
    FUN_10a40f184(plVar24);
    if (fVar6 < 0.0) {
      puVar10 = &UNK_10f6567c2;
    }
    else {
      if (-2 < (int)plVar13) {
        FUN_10a410ed0(plVar24,&ppppuStack_f8);
        plVar22 = (long *)plVar24[0x4f];
        plVar24 = (long *)plVar24[0x50];
        if (plVar22 != plVar24) {
          do {
            uVar19 = (ulong)bStack_e1;
            uVar18 = uStack_f0;
            if (-1 < (char)bStack_e1) {
              uVar18 = uVar19;
            }
            lVar14 = *plVar22;
            if (uVar18 == 0) {
LAB_10a43a79c:
              plStack_c8 = plStack_d8;
              uStack_d0 = uStack_e0;
              if (plStack_d8 != (long *)0x0) {
                plVar1 = plStack_d8 + 1;
                do {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar8) {
                    *plVar1 = *plVar1 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              func_0x00010aa7a3a8(fVar6,lVar14,plVar13,&uStack_d0);
              plVar1 = plStack_c8;
              if (plStack_c8 != (long *)0x0) {
                plVar2 = plStack_c8 + 1;
                do {
                  lVar14 = *plVar2;
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar8) {
                    *plVar2 = lVar14 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar14 == 0) {
                  (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
                }
              }
            }
            else {
              if (*(char *)(lVar14 + 0x67) < '\0') {
                func_0x000107c3192c(&ppppuStack_c0,*(undefined8 *)(lVar14 + 0x50),
                                    *(undefined8 *)(lVar14 + 0x58));
                uVar19 = (ulong)bStack_e1;
              }
              else {
                uStack_b8 = *(ulong *)(lVar14 + 0x58);
                ppppuStack_c0 = *(undefined8 *****)(lVar14 + 0x50);
                uStack_b0 = *(ulong *)(lVar14 + 0x60);
              }
              uVar23 = uStack_b0;
              uVar18 = uStack_b8;
              if (-1 < (long)uStack_b0) {
                uVar18 = uStack_b0 >> 0x38;
              }
              uVar25 = uStack_f0;
              if (-1 < (char)bStack_e1) {
                uVar25 = uVar19;
              }
              if (uVar18 == uVar25) {
                pppppuVar15 = (undefined8 *****)ppppuStack_c0;
                if (-1 < (long)uStack_b0) {
                  pppppuVar15 = &ppppuStack_c0;
                }
                pppppuVar4 = (undefined8 *****)ppppuStack_f8;
                if (-1 < (char)bStack_e1) {
                  pppppuVar4 = &ppppuStack_f8;
                }
                _memcmp(pppppuVar15,pppppuVar4);
                bVar8 = (int)pppppuVar15 == 0;
                if ((long)uVar23 < 0) goto LAB_10a43a78c;
LAB_10a43a784:
                if (bVar8) goto LAB_10a43a798;
              }
              else {
                bVar8 = false;
                if (-1 < (long)uStack_b0) goto LAB_10a43a784;
LAB_10a43a78c:
                __ZdlPv(ppppuStack_c0);
                if (bVar8) {
LAB_10a43a798:
                  lVar14 = *plVar22;
                  goto LAB_10a43a79c;
                }
              }
            }
            plVar22 = plVar22 + 2;
          } while (plVar22 != plVar24);
        }
        if (plVar11 != (long *)0x0) {
          plVar24 = plVar11 + 1;
          do {
            lVar14 = *plVar24;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar8) {
              *plVar24 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        plVar11 = plStack_108;
        if (plStack_108 != (long *)0x0) {
          plVar24 = plStack_108 + 1;
          do {
            lVar14 = *plVar24;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar8) {
              *plVar24 = lVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_108 + 0x10))(plStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        if ((char)bStack_e1 < '\0') {
          __ZdlPv(ppppuStack_f8);
        }
        *extraout_x8 = 0;
        puVar3 = (ulong *)(plVar12 + 0x4b);
        lVar14 = plVar12[0x59];
        uVar18 = lVar14 - 1;
        plVar12[0x59] = uVar18;
        if (uVar18 < 8) {
          uVar18 = puVar3[lVar14 + 2];
          if (plVar12[0x5a] == uVar18) {
            return;
          }
        }
        else {
          uVar18 = *(ulong *)(plVar12[0x57] + -8);
          plVar12[0x57] = plVar12[0x57] + -8;
          if (plVar12[0x5a] == uVar18) {
            return;
          }
        }
        uVar19 = *puVar3;
        lVar14 = plVar12[0x4c];
        lVar21 = lVar14 - uVar19;
        uVar23 = lVar21 >> 4;
        if (uVar23 < uVar18) {
          uVar25 = uVar18 - uVar23;
          if ((ulong)(plVar12[0x4d] - lVar14 >> 4) < uVar25) {
            if (uVar18 >> 0x3c == 0) {
              uVar17 = plVar12[0x4d] - uVar19;
              uVar20 = (long)uVar17 >> 3;
              if (uVar20 <= uVar18) {
                uVar20 = uVar18;
              }
              if (0x7fffffffffffffef < uVar17) {
                uVar20 = 0xfffffffffffffff;
              }
              if (uVar20 >> 0x3c == 0) {
                lVar9 = uVar20 << 4;
                __Znwm();
                lVar14 = lVar9 + lVar21;
                _bzero(lVar14,uVar25 * 0x10);
                uVar23 = lVar14 + uVar23 * -0x10;
                _memcpy(uVar23,uVar19,lVar21);
                *puVar3 = uVar23;
                plVar12[0x4c] = lVar14 + uVar25 * 0x10;
                plVar12[0x4d] = lVar9 + uVar20 * 0x10;
                uStack_b8 = uVar19;
                uStack_b0 = uVar19;
                uStack_a8 = uVar19;
                func_0x00010988c1b8(&uStack_b8);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar7)();
          }
          _bzero(lVar14,uVar25 * 0x10);
          plVar12[0x4c] = lVar14 + uVar25 * 0x10;
        }
        else if (uVar18 < uVar23) {
          lVar21 = uVar19 + uVar18 * 0x10;
          while (lVar14 != lVar21) {
            lVar14 = lVar14 + -0x10;
            func_0x00010988c204(lVar14);
          }
          plVar12[0x4c] = lVar21;
        }
code_r0x00010988c138:
        plVar12[0x5a] = uVar18;
        return;
      }
      puVar10 = &UNK_10f65678f;
    }
    FUN_10a00946c(puVar10);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a43a8f4);
  (*pcVar7)();
}



/* Entry: 10a43a588; end: 10a43a5ab;  */

void FUN_10a43a588(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 *****pppppuVar4;
  char cVar5;
  float fVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *****pppppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 *extraout_x8;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 ****ppppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 ****ppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar10 = (long *)0x3;
  uVar16 = 0;
  FUN_10a052ee0(3,0);
  plVar11 = plVar10;
  (**(code **)(*plVar10 + 0x58))();
  if ((ulong)plVar11[0x59] < 8) {
    plVar11[plVar11[0x59] + 0x4e] = plVar11[0x5a];
    plVar11[0x59] = plVar11[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar11 + 0x4b);
  }
  plVar24 = plVar10;
  FUN_10a43a520(plVar10,uVar16);
  FUN_10a43a954(param_4);
  func_0x000109898570(&ppppuStack_d8,plVar10,param_1);
  if (*(int *)(param_1 + 0x10) == 3) {
    fVar6 = (float)*(double *)(param_1 + 0x18);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_1 + 0x18))) {
      fVar6 = 0.0;
    }
    plVar12 = plVar10;
    func_0x000109898518(plVar10,param_1 + 0x20);
    FUN_10a43a978(&uStack_f0,plVar10,param_1 + 0x30);
    plVar10 = plStack_e8;
    plStack_b8 = plStack_e8;
    uStack_c0 = uStack_f0;
    uStack_f0 = 0;
    plStack_e8 = (long *)0x0;
    FUN_10a40f184(plVar24);
    if (fVar6 < 0.0) {
      puVar15 = &UNK_10f6567c2;
    }
    else {
      if (-2 < (int)plVar12) {
        FUN_10a410ed0(plVar24,&ppppuStack_d8);
        plVar22 = (long *)plVar24[0x4f];
        plVar24 = (long *)plVar24[0x50];
        if (plVar22 != plVar24) {
          do {
            uVar19 = (ulong)bStack_c1;
            uVar18 = uStack_d0;
            if (-1 < (char)bStack_c1) {
              uVar18 = uVar19;
            }
            lVar13 = *plVar22;
            if (uVar18 == 0) {
LAB_10a43a79c:
              plStack_a8 = plStack_b8;
              uStack_b0 = uStack_c0;
              if (plStack_b8 != (long *)0x0) {
                plVar1 = plStack_b8 + 1;
                do {
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar8) {
                    *plVar1 = *plVar1 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              func_0x00010aa7a3a8(fVar6,lVar13,plVar12,&uStack_b0);
              plVar1 = plStack_a8;
              if (plStack_a8 != (long *)0x0) {
                plVar2 = plStack_a8 + 1;
                do {
                  lVar13 = *plVar2;
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar8) {
                    *plVar2 = lVar13 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
                }
              }
            }
            else {
              if (*(char *)(lVar13 + 0x67) < '\0') {
                func_0x000107c3192c(&ppppuStack_a0,*(undefined8 *)(lVar13 + 0x50),
                                    *(undefined8 *)(lVar13 + 0x58));
                uVar19 = (ulong)bStack_c1;
              }
              else {
                uStack_98 = *(ulong *)(lVar13 + 0x58);
                ppppuStack_a0 = *(undefined8 *****)(lVar13 + 0x50);
                uStack_90 = *(ulong *)(lVar13 + 0x60);
              }
              uVar23 = uStack_90;
              uVar18 = uStack_98;
              if (-1 < (long)uStack_90) {
                uVar18 = uStack_90 >> 0x38;
              }
              uVar25 = uStack_d0;
              if (-1 < (char)bStack_c1) {
                uVar25 = uVar19;
              }
              if (uVar18 == uVar25) {
                pppppuVar14 = (undefined8 *****)ppppuStack_a0;
                if (-1 < (long)uStack_90) {
                  pppppuVar14 = &ppppuStack_a0;
                }
                pppppuVar4 = (undefined8 *****)ppppuStack_d8;
                if (-1 < (char)bStack_c1) {
                  pppppuVar4 = &ppppuStack_d8;
                }
                _memcmp(pppppuVar14,pppppuVar4);
                bVar8 = (int)pppppuVar14 == 0;
                if ((long)uVar23 < 0) goto LAB_10a43a78c;
LAB_10a43a784:
                if (bVar8) goto LAB_10a43a798;
              }
              else {
                bVar8 = false;
                if (-1 < (long)uStack_90) goto LAB_10a43a784;
LAB_10a43a78c:
                __ZdlPv(ppppuStack_a0);
                if (bVar8) {
LAB_10a43a798:
                  lVar13 = *plVar22;
                  goto LAB_10a43a79c;
                }
              }
            }
            plVar22 = plVar22 + 2;
          } while (plVar22 != plVar24);
        }
        if (plVar10 != (long *)0x0) {
          plVar24 = plVar10 + 1;
          do {
            lVar13 = *plVar24;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar8) {
              *plVar24 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        plVar10 = plStack_e8;
        if (plStack_e8 != (long *)0x0) {
          plVar24 = plStack_e8 + 1;
          do {
            lVar13 = *plVar24;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar8) {
              *plVar24 = lVar13 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        if ((char)bStack_c1 < '\0') {
          __ZdlPv(ppppuStack_d8);
        }
        *extraout_x8 = 0;
        puVar3 = (ulong *)(plVar11 + 0x4b);
        lVar13 = plVar11[0x59];
        uVar18 = lVar13 - 1;
        plVar11[0x59] = uVar18;
        if (uVar18 < 8) {
          uVar18 = puVar3[lVar13 + 2];
          if (plVar11[0x5a] == uVar18) {
            return;
          }
        }
        else {
          uVar18 = *(ulong *)(plVar11[0x57] + -8);
          plVar11[0x57] = plVar11[0x57] + -8;
          if (plVar11[0x5a] == uVar18) {
            return;
          }
        }
        uVar19 = *puVar3;
        lVar13 = plVar11[0x4c];
        lVar21 = lVar13 - uVar19;
        uVar23 = lVar21 >> 4;
        if (uVar23 < uVar18) {
          uVar25 = uVar18 - uVar23;
          if ((ulong)(plVar11[0x4d] - lVar13 >> 4) < uVar25) {
            if (uVar18 >> 0x3c == 0) {
              uVar17 = plVar11[0x4d] - uVar19;
              uVar20 = (long)uVar17 >> 3;
              if (uVar20 <= uVar18) {
                uVar20 = uVar18;
              }
              if (0x7fffffffffffffef < uVar17) {
                uVar20 = 0xfffffffffffffff;
              }
              if (uVar20 >> 0x3c == 0) {
                lVar9 = uVar20 << 4;
                __Znwm();
                lVar13 = lVar9 + lVar21;
                _bzero(lVar13,uVar25 * 0x10);
                uVar23 = lVar13 + uVar23 * -0x10;
                _memcpy(uVar23,uVar19,lVar21);
                *puVar3 = uVar23;
                plVar11[0x4c] = lVar13 + uVar25 * 0x10;
                plVar11[0x4d] = lVar9 + uVar20 * 0x10;
                uStack_98 = uVar19;
                uStack_90 = uVar19;
                uStack_88 = uVar19;
                func_0x00010988c1b8(&uStack_98);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar7)();
          }
          _bzero(lVar13,uVar25 * 0x10);
          plVar11[0x4c] = lVar13 + uVar25 * 0x10;
        }
        else if (uVar18 < uVar23) {
          lVar21 = uVar19 + uVar18 * 0x10;
          while (lVar13 != lVar21) {
            lVar13 = lVar13 + -0x10;
            func_0x00010988c204(lVar13);
          }
          plVar11[0x4c] = lVar21;
        }
code_r0x00010988c138:
        plVar11[0x5a] = uVar18;
        return;
      }
      puVar15 = &UNK_10f65678f;
    }
    FUN_10a00946c(puVar15);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a43a8f4);
  (*pcVar7)();
}



/* Entry: 10a43a5ac; end: 10a43a953;  */

void FUN_10a43a5ac(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 *****pppppuVar5;
  char cVar6;
  float fVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 *****pppppuVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 ****ppppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  plVar11 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar11[0x59] < 8) {
    plVar11[plVar11[0x59] + 0x4e] = plVar11[0x5a];
    plVar11[0x59] = plVar11[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar11 + 0x4b);
  }
  plVar23 = param_2;
  FUN_10a43a520(param_2,param_3);
  FUN_10a43a954(param_5);
  func_0x000109898570(&ppppuStack_c8,param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 3) {
    fVar7 = (float)*(double *)(param_4 + 0x18);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x18))) {
      fVar7 = 0.0;
    }
    plVar12 = param_2;
    func_0x000109898518(param_2,param_4 + 0x20);
    FUN_10a43a978(&uStack_e0,param_2,param_4 + 0x30);
    plVar3 = plStack_d8;
    plStack_a8 = plStack_d8;
    uStack_b0 = uStack_e0;
    uStack_e0 = 0;
    plStack_d8 = (long *)0x0;
    FUN_10a40f184(plVar23);
    if (fVar7 < 0.0) {
      puVar15 = &UNK_10f6567c2;
    }
    else {
      if (-2 < (int)plVar12) {
        FUN_10a410ed0(plVar23,&ppppuStack_c8);
        plVar21 = (long *)plVar23[0x4f];
        plVar23 = (long *)plVar23[0x50];
        if (plVar21 != plVar23) {
          do {
            uVar18 = (ulong)bStack_b1;
            uVar17 = uStack_c0;
            if (-1 < (char)bStack_b1) {
              uVar17 = uVar18;
            }
            lVar13 = *plVar21;
            if (uVar17 == 0) {
LAB_10a43a79c:
              plStack_98 = plStack_a8;
              uStack_a0 = uStack_b0;
              if (plStack_a8 != (long *)0x0) {
                plVar1 = plStack_a8 + 1;
                do {
                  cVar6 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar9) {
                    *plVar1 = *plVar1 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              func_0x00010aa7a3a8(fVar7,lVar13,plVar12,&uStack_a0);
              plVar1 = plStack_98;
              if (plStack_98 != (long *)0x0) {
                plVar2 = plStack_98 + 1;
                do {
                  lVar13 = *plVar2;
                  cVar6 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar9) {
                    *plVar2 = lVar13 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*plStack_98 + 0x10))(plStack_98);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
                }
              }
            }
            else {
              if (*(char *)(lVar13 + 0x67) < '\0') {
                func_0x000107c3192c(&ppppuStack_90,*(undefined8 *)(lVar13 + 0x50),
                                    *(undefined8 *)(lVar13 + 0x58));
                uVar18 = (ulong)bStack_b1;
              }
              else {
                uStack_88 = *(ulong *)(lVar13 + 0x58);
                ppppuStack_90 = *(undefined8 *****)(lVar13 + 0x50);
                uStack_80 = *(ulong *)(lVar13 + 0x60);
              }
              uVar22 = uStack_80;
              uVar17 = uStack_88;
              if (-1 < (long)uStack_80) {
                uVar17 = uStack_80 >> 0x38;
              }
              uVar24 = uStack_c0;
              if (-1 < (char)bStack_b1) {
                uVar24 = uVar18;
              }
              if (uVar17 == uVar24) {
                pppppuVar14 = (undefined8 *****)ppppuStack_90;
                if (-1 < (long)uStack_80) {
                  pppppuVar14 = &ppppuStack_90;
                }
                pppppuVar5 = (undefined8 *****)ppppuStack_c8;
                if (-1 < (char)bStack_b1) {
                  pppppuVar5 = &ppppuStack_c8;
                }
                _memcmp(pppppuVar14,pppppuVar5);
                bVar9 = (int)pppppuVar14 == 0;
                if ((long)uVar22 < 0) goto LAB_10a43a78c;
LAB_10a43a784:
                if (bVar9) goto LAB_10a43a798;
              }
              else {
                bVar9 = false;
                if (-1 < (long)uStack_80) goto LAB_10a43a784;
LAB_10a43a78c:
                __ZdlPv(ppppuStack_90);
                if (bVar9) {
LAB_10a43a798:
                  lVar13 = *plVar21;
                  goto LAB_10a43a79c;
                }
              }
            }
            plVar21 = plVar21 + 2;
          } while (plVar21 != plVar23);
        }
        if (plVar3 != (long *)0x0) {
          plVar23 = plVar3 + 1;
          do {
            lVar13 = *plVar23;
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar9) {
              *plVar23 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
          }
        }
        plVar23 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar3 = plStack_d8 + 1;
          do {
            lVar13 = *plVar3;
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar9) {
              *plVar3 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
          }
        }
        if ((char)bStack_b1 < '\0') {
          __ZdlPv(ppppuStack_c8);
        }
        *param_1 = 0;
        puVar4 = (ulong *)(plVar11 + 0x4b);
        lVar13 = plVar11[0x59];
        uVar17 = lVar13 - 1;
        plVar11[0x59] = uVar17;
        if (uVar17 < 8) {
          uVar17 = puVar4[lVar13 + 2];
          if (plVar11[0x5a] == uVar17) {
            return;
          }
        }
        else {
          uVar17 = *(ulong *)(plVar11[0x57] + -8);
          plVar11[0x57] = plVar11[0x57] + -8;
          if (plVar11[0x5a] == uVar17) {
            return;
          }
        }
        uVar18 = *puVar4;
        lVar13 = plVar11[0x4c];
        lVar20 = lVar13 - uVar18;
        uVar22 = lVar20 >> 4;
        if (uVar22 < uVar17) {
          uVar24 = uVar17 - uVar22;
          if ((ulong)(plVar11[0x4d] - lVar13 >> 4) < uVar24) {
            if (uVar17 >> 0x3c == 0) {
              uVar16 = plVar11[0x4d] - uVar18;
              uVar19 = (long)uVar16 >> 3;
              if (uVar19 <= uVar17) {
                uVar19 = uVar17;
              }
              if (0x7fffffffffffffef < uVar16) {
                uVar19 = 0xfffffffffffffff;
              }
              if (uVar19 >> 0x3c == 0) {
                lVar10 = uVar19 << 4;
                __Znwm();
                lVar13 = lVar10 + lVar20;
                _bzero(lVar13,uVar24 * 0x10);
                uVar22 = lVar13 + uVar22 * -0x10;
                _memcpy(uVar22,uVar18,lVar20);
                *puVar4 = uVar22;
                plVar11[0x4c] = lVar13 + uVar24 * 0x10;
                plVar11[0x4d] = lVar10 + uVar19 * 0x10;
                uStack_88 = uVar18;
                uStack_80 = uVar18;
                uStack_78 = uVar18;
                func_0x00010988c1b8(&uStack_88);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar8)();
          }
          _bzero(lVar13,uVar24 * 0x10);
          plVar11[0x4c] = lVar13 + uVar24 * 0x10;
        }
        else if (uVar17 < uVar22) {
          lVar20 = uVar18 + uVar17 * 0x10;
          while (lVar13 != lVar20) {
            lVar13 = lVar13 + -0x10;
            func_0x00010988c204(lVar13);
          }
          plVar11[0x4c] = lVar20;
        }
code_r0x00010988c138:
        plVar11[0x5a] = uVar17;
        return;
      }
      puVar15 = &UNK_10f65678f;
    }
    FUN_10a00946c(puVar15);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a43a8f4);
  (*pcVar8)();
}



/* Entry: 10a43a954; end: 10a43a977;  */

void FUN_10a43a954(undefined8 param_1)

{
  undefined8 extraout_x8;
  undefined1 auStack_58 [39];
  undefined1 uStack_31;
  
  if ((int)param_1 == 4) {
    return;
  }
  FUN_10a052ee0(4,0,param_1);
  FUN_10a43a9d0(auStack_58);
  FUN_10a43ab08(extraout_x8,&uStack_31,auStack_58);
  FUN_10a688c1c(auStack_58);
  return;
}



/* Entry: 10a43a978; end: 10a43a9cf;  */

void FUN_10a43a978(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  
  FUN_10a43a9d0(auStack_48);
  FUN_10a43ab08(param_1,&uStack_21,auStack_48);
  FUN_10a688c1c(auStack_48);
  return;
}



/* Entry: 10a43a9d0; end: 10a43ab07;  */

void FUN_10a43a9d0(undefined8 param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plStack_50;
  int iStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_3 == 7) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_3 + 2));
    plVar3 = param_2;
    plStack_38 = plVar2;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_38);
    if ((int)plVar3 != 0) {
      plVar2 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar4 = plVar2[0x48];
      if ((lVar4 == 0) ||
         (___dynamic_cast(lVar4,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), lVar4 == 0))
      goto LAB_10a43aad8;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x0;
      iStack_48 = 7;
      plStack_50 = param_2;
      FUN_10a688ac0(param_1,&plStack_50,*(undefined8 *)(lVar4 + 8));
      if ((3 < iStack_48) && (plStack_40 != (long *)0x0)) {
        (**(code **)*plStack_40)();
      }
    }
    if (plStack_38 != (long *)0x0) {
      (**(code **)*plStack_38)();
    }
    if (((ulong)plVar3 & 1) != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a43aad8:
  func_0x00010988bd28(&UNK_10f685540);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a43aae8);
  (*pcVar1)();
}



/* Entry: 10a43ab08; end: 10a43ab5f;  */

void FUN_10a43ab08(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  FUN_10a43ab60();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a43ab60; end: 10a43abdb;  */

void FUN_10a43ab60(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110bd9e78;
  *(undefined1 *)(param_1 + 0xb) = 3;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[4] = param_2[1];
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
  lVar4 = param_2[3];
  uVar5 = param_2[2];
  param_1[6] = param_2[3];
  param_1[5] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 0xb) = 2;
  return;
}



/* Entry: 10a43abdc; end: 10a43abfb;  */

void FUN_10a43abdc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd9e78;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a43abfc; end: 10a43ac23;  */

undefined1  [16] FUN_10a43abfc(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  if (3 < (ulong)bVar2) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10a43ac20);
    (*UNRECOVERED_JUMPTABLE)();
  }
  auVar10._8_8_ = (code **)(&PTR_FUN_110b9a040)[bVar2];
  puVar5 = (undefined8 *)(param_1 + 0x18);
  switch(bVar2) {
  case 0:
    auVar10._0_8_ = puVar5;
    return auVar10;
  case 1:
    puVar5 = (undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)*puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010a00496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar11._8_8_ = UNRECOVERED_JUMPTABLE;
    auVar11._0_8_ = puVar5;
    return auVar11;
  case 3:
    auVar12._8_8_ = auVar10._8_8_;
    auVar12._0_8_ = puVar5;
    return auVar12;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  if (((*ppuVar6 == (undefined *)0x0) &&
      (plVar7 = *(long **)(param_1 + 0x30), plVar7 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x870);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_68 = *puVar5;
      *puVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcStack_78 = FUN_10a69fabc;
      ppuStack_70 = &PTR_DAT_110c0ce80;
      auVar10._8_8_ = &pcStack_78;
      FUN_10a4634ec(uVar8);
      (*(code *)*ppuStack_70)(&ppuStack_70);
    }
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a004dac(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar13._8_8_ = auVar10._8_8_;
    auVar13._0_8_ = puVar5;
    return auVar13;
  }
  ___stack_chk_fail();
  if ((int)auVar10._8_8_ == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  auVar14._8_8_ = 0x18;
  auVar14._0_8_ = &UNK_10f66c09c;
  return auVar14;
}



/* Entry: 10a43ac24; end: 10a43acdb;  */

void FUN_10a43ac24(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43acdc(param_1,param_2,FUN_10a410ed0,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43acdc; end: 10a43ad9b;  */

void FUN_10a43acdc(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar2 = param_2;
  FUN_10a43a520(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a43ad9c; end: 10a43ae53;  */

void FUN_10a43ad9c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43acdc(param_1,param_2,FUN_10a4110bc,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43ae54; end: 10a43af0b;  */

void FUN_10a43ae54(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43acdc(param_1,param_2,0x10a4111dc,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43af0c; end: 10a43b043;  */

void FUN_10a43af0c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  float fVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a43a520(param_2,param_3);
  FUN_10a3aaeb0(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  if (*(int *)(param_4 + 0x10) != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a43b018);
    (*pcVar2)();
  }
  fVar1 = (float)*(double *)(param_4 + 0x18);
  if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x18))) {
    fVar1 = 0.0;
  }
  FUN_10a411000(fVar1,plVar5,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 0;
  plVar5 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar5[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar5;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar5;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar5 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a43b044; end: 10a43b1c3;  */

void FUN_10a43b044(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a43a520(param_2,param_3);
  FUN_10a43b1c4(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x000109898570(&lStack_70,param_2,param_4 + 0x10);
  FUN_10a413b90(&lStack_80,plVar6,&stack0xffffffffffffffa8,&lStack_70);
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  FUN_10a43b1e8(param_1,param_2,&lStack_80);
  if (plStack_78 != (long *)0x0) {
    plVar6 = plStack_78 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          plStack_78 = (long *)lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a43b1c4; end: 10a43b1e7;  */

void FUN_10a43b1c4(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((int)param_1 == 2) {
    return;
  }
  puVar5 = (undefined8 *)0x0;
  FUN_10a052ee0(2,0,param_1);
  plVar2 = (long *)puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  func_0x000109899de4();
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10a43b1e8; end: 10a43b277;  */

void FUN_10a43b1e8(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar5 = *param_2;
  plStack_28 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  lStack_30 = 0;
  if (lVar5 != 0) {
    lStack_30 = lVar5 + 0x18;
  }
  ppuStack_38 = &PTR_DAT_110c41a90;
  func_0x000109899de4(param_1,&lStack_30,&ppuStack_38,0,0);
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



/* Entry: 10a43b278; end: 10a43b32f;  */

void FUN_10a43b278(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43b330(param_1,param_2,FUN_10a413cd8,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43b330; end: 10a43b437;  */

void FUN_10a43b330(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar4 = param_2;
  FUN_10a43a520(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(auStack_78,plVar1,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  FUN_10a43b1e8(param_1,param_2,auStack_78);
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
    }
  }
  return;
}



/* Entry: 10a43b438; end: 10a43b4ef;  */

void FUN_10a43b438(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43b330(param_1,param_2,FUN_10a410e94,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43b4f0; end: 10a43b70f;  */

void FUN_10a43b4f0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  long in_stack_ffffffffffffffa0;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  plVar8 = param_2;
  FUN_10a43a520(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a40f184(plVar8);
  lVar16 = plVar8[0x4f];
  lVar14 = plVar8[0x50];
  lVar13 = lVar14 - lVar16 >> 4;
  (**(code **)(*param_2 + 600))(&stack0xffffffffffffffa0,param_2,lVar13);
  lStack_70 = in_stack_ffffffffffffffa0;
  if (lVar14 != lVar16) {
    lVar14 = 0;
    do {
      plVar8 = *(long **)(lVar16 + lVar14 * 0x10 + 8);
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppuStack_68 = &PTR_DAT_110c41a90;
      func_0x000109899de4(&puStack_80,param_2,&stack0xffffffffffffffa0,&ppuStack_68,0,0);
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      (**(code **)(*param_2 + 0x290))(param_2,&lStack_70,lVar14,&puStack_80);
      if ((3 < (int)puStack_80) && (puStack_78 != (undefined8 *)0x0)) {
        (**(code **)*puStack_78)();
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar13);
  }
  *param_1 = 7;
  *(long *)(param_1 + 2) = lStack_70;
  ppuVar2 = (undefined **)(plVar7 + 0x4b);
  lVar13 = plVar7[0x59];
  uVar10 = lVar13 - 1;
  plVar7[0x59] = uVar10;
  if (uVar10 < 8) {
    puVar9 = ppuVar2[lVar13 + 2];
    if ((undefined *)plVar7[0x5a] == puVar9) {
      return;
    }
  }
  else {
    puVar9 = *(undefined **)(plVar7[0x57] + -8);
    plVar7[0x57] = (long)(plVar7[0x57] + -8);
    if ((undefined *)plVar7[0x5a] == puVar9) {
      return;
    }
  }
  puVar3 = *ppuVar2;
  puVar11 = (undefined *)plVar7[0x4c];
  lVar13 = (long)puVar11 - (long)puVar3;
  puVar15 = (undefined *)(lVar13 >> 4);
  if (puVar15 < puVar9) {
    uVar10 = (long)puVar9 - (long)puVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - (long)puVar11 >> 4) < uVar10) {
      if ((ulong)puVar9 >> 0x3c == 0) {
        puVar11 = (undefined *)(lVar14 - (long)puVar3 >> 3);
        if (puVar11 <= puVar9) {
          puVar11 = puVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - (long)puVar3)) {
          puVar11 = (undefined *)0xfffffffffffffff;
        }
        ppuStack_68 = ppuVar2;
        if ((ulong)puVar11 >> 0x3c == 0) {
          lVar12 = (long)puVar11 << 4;
          __Znwm();
          lVar16 = lVar12 + lVar13;
          _bzero(lVar16,uVar10 * 0x10);
          puVar15 = (undefined *)(lVar16 + (long)puVar15 * -0x10);
          _memcpy(puVar15,puVar3,lVar13);
          *ppuVar2 = puVar15;
          plVar7[0x4c] = lVar16 + uVar10 * 0x10;
          plVar7[0x4d] = lVar12 + (long)puVar11 * 0x10;
          puStack_88 = puVar3;
          puStack_80 = puVar3;
          puStack_78 = (undefined8 *)puVar3;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&puStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar6)();
    }
    _bzero(puVar11,uVar10 * 0x10);
    plVar7[0x4c] = (long)(puVar11 + uVar10 * 0x10);
  }
  else if (puVar9 < puVar15) {
    while (puVar11 != puVar3 + (long)puVar9 * 0x10) {
      puVar11 = puVar11 + -0x10;
      func_0x00010988c204(puVar11);
    }
    plVar7[0x4c] = (long)(puVar3 + (long)puVar9 * 0x10);
  }
code_r0x00010988c138:
  plVar7[0x5a] = (long)puVar9;
  return;
}



/* Entry: 10a43b710; end: 10a43b7c7;  */

void FUN_10a43b710(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43a520(param_2,param_3);
  FUN_10a052e3c(param_5);
  *(undefined1 *)(param_2 + 0x55) = 0;
  FUN_10a40f184(param_2);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43b7c8; end: 10a43b8db;  */

void FUN_10a43b7c8(undefined4 *param_1,float param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  
  plVar3 = param_3;
  (**(code **)(*param_3 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_3;
  FUN_10a43a520(param_3,param_4);
  FUN_10a0584c8(param_6);
  func_0x000109898570(&plStack_68,param_3,param_5);
  FUN_10a41307c(plVar4,&plStack_68);
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(plStack_68);
  }
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)param_2;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a43b8dc; end: 10a43b9e3;  */

void FUN_10a43b8dc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long in_stack_ffffffffffffffa8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a43a520(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a410c48(&stack0xffffffffffffffa0,plVar4);
  func_0x00010989a420(param_1,param_2,in_stack_ffffffffffffffa0,
                      (in_stack_ffffffffffffffa8 - in_stack_ffffffffffffffa0 >> 3) *
                      -0x5555555555555555);
  FUN_10a0426d8(&stack0xffffffffffffffb8);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a43b9e4; end: 10a43ba97;  */

void FUN_10a43b9e4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43a520(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a4112fc(param_2);
  *param_1 = 0;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43ba98; end: 10a43bb4f;  */

void FUN_10a43ba98(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43bc10(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x3e];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43bb50; end: 10a43bc0f;  */

void FUN_10a43bb50(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a43a520(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 0x3e) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a43bc10; end: 10a43bc77;  */

void FUN_10a43bc10(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a43bc10(plVar4,param_2);
  FUN_10a052e3c(param_4);
  fVar15 = *(float *)(plVar4 + 0x3f);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)fVar15;
  plVar4 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar6;
          lStack_a0 = lVar6;
          lStack_98 = lVar6;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a43bc78; end: 10a43bd33;  */

void FUN_10a43bc78(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43bc10(param_2,param_3);
  FUN_10a052e3c(param_5);
  fVar14 = *(float *)(param_2 + 0x3f);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a43bd34; end: 10a43beaf;  */

void FUN_10a43bd34(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a43a520(param_2,param_3);
  FUN_10a05ed04(param_5);
  if (*param_4 == 3) {
    fVar16 = (float)*(double *)(param_4 + 2);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 2))) {
      fVar16 = 0.0;
    }
    func_0x000107c2b054(&plStack_68,&UNK_10f6567f4);
    bVar2 = false;
    if ((0.0 <= fVar16) && (bVar2 = false, !NAN(fVar16))) {
      bVar2 = fVar16 < 1000.0;
    }
    if (bVar2) {
      if (in_stack_ffffffffffffffa8 < 0) {
        __ZdlPv(plStack_68);
      }
      *(float *)(param_2 + 0x3f) = fVar16;
      plVar8 = (long *)param_2[0x50];
      for (plVar10 = (long *)param_2[0x4f]; plVar10 != plVar8; plVar10 = plVar10 + 2) {
        FUN_10aa79d14(*(undefined4 *)(*plVar10 + 0x84));
      }
      *param_1 = 0;
      plVar8 = plVar4 + 0x4b;
      lVar5 = plVar4[0x59];
      uVar6 = lVar5 - 1;
      plVar4[0x59] = uVar6;
      if (uVar6 < 8) {
        uVar6 = plVar8[lVar5 + 2];
        if (plVar4[0x5a] == uVar6) {
          return;
        }
      }
      else {
        uVar6 = *(ulong *)(plVar4[0x57] + -8);
        plVar4[0x57] = plVar4[0x57] + -8;
        if (plVar4[0x5a] == uVar6) {
          return;
        }
      }
      lVar5 = *plVar8;
      lVar12 = plVar4[0x4c];
      lVar9 = lVar12 - lVar5;
      uVar14 = lVar9 >> 4;
      if (uVar14 < uVar6) {
        uVar15 = uVar6 - uVar14;
        lVar13 = plVar4[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar6 >> 0x3c == 0) {
            uVar7 = lVar13 - lVar5 >> 3;
            if (uVar7 <= uVar6) {
              uVar7 = uVar6;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar5)) {
              uVar7 = 0xfffffffffffffff;
            }
            plStack_68 = plVar8;
            if (uVar7 >> 0x3c == 0) {
              lVar3 = uVar7 << 4;
              __Znwm();
              lVar12 = lVar3 + lVar9;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar5,lVar9);
              *plVar8 = lVar11;
              plVar4[0x4c] = lVar12 + uVar15 * 0x10;
              plVar4[0x4d] = lVar3 + uVar7 * 0x10;
              lStack_88 = lVar5;
              lStack_80 = lVar5;
              lStack_78 = lVar5;
              lStack_70 = lVar13;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar4[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar6 < uVar14) {
        lVar5 = lVar5 + uVar6 * 0x10;
        while (lVar12 != lVar5) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar4[0x4c] = lVar5;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar6;
      return;
    }
    FUN_10a109200(&plStack_68);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a43be80);
  (*pcVar1)();
}



/* Entry: 10a43beb0; end: 10a43bf5f;  */

long FUN_10a43beb0(long param_1)

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



/* Entry: 10a43bf60; end: 10a43bfb7;  */

void FUN_10a43bf60(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xf0;
  __Znwm();
  FUN_10a43bfb8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a43bfb8; end: 10a43bfff;  */

undefined8 * FUN_10a43bfb8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bd94d0;
  FUN_10a43c040(param_1 + 3);
  return param_1;
}



/* Entry: 10a43c000; end: 10a43c00f;  */

void FUN_10a43c000(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd94d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a43c010; end: 10a43c02f;  */

void FUN_10a43c010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd94d0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a43c030; end: 10a43c03f;  */

void FUN_10a43c030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a43c038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a43c040; end: 10a43c0bb;  */

undefined8 FUN_10a43c040(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar4 = param_2[1];
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10aa79900(param_1,&uStack_30);
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar4);
  }
  return param_1;
}



/* Entry: 10a43c0bc; end: 10a43c0cf;  */

void FUN_10a43c0bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar1 = &PTR_FUN_110bd9520;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a43c0d0; end: 10a43c0df;  */

void FUN_10a43c0d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd9520;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a43c0e0; end: 10a43c0ff;  */

void FUN_10a43c0e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd9520;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a43c100; end: 10a43c137;  */

/* WARNING: Possible PIC construction at 0x00010a43c244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a43c248) */
/* WARNING: Removing unreachable block (ram,0x00010a43c258) */
/* WARNING: Removing unreachable block (ram,0x00010a43c25c) */
/* WARNING: Removing unreachable block (ram,0x00010a43c264) */
/* WARNING: Removing unreachable block (ram,0x00010a43c268) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7ac) */

void FUN_10a43c100(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  FUN_10a43c13c(*(undefined8 *)(param_1 + 0x68));
  func_0x00010a43c18c(*(undefined8 *)(param_1 + 0x50));
  func_0x00010a43c1dc(*(undefined8 *)(param_1 + 0x38));
  puVar2 = (undefined1 *)register0x00000008;
  plVar1 = (long *)*(long *)(param_1 + 0x20);
  while (plVar3 = plVar1, plVar3 != (long *)0x0) {
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    unaff_x30 = 0x10a43c248;
    puVar2 = puVar2 + -0x20;
    unaff_x19 = plVar3;
    plVar1 = (long *)*plVar3;
  }
  return;
}



/* Entry: 10a43c138; end: 10a43c13b;  */

void FUN_10a43c138(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a43c13c; end: 10a43c31b;  */

void FUN_10a43c13c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10a43c13c(*param_1);
    FUN_10a43c13c(param_1[1]);
    if (param_1[7] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (param_1[5] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a43c31c; end: 10a43c32b;  */

void FUN_10a43c31c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd9570;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a43c32c; end: 10a43c34b;  */

void FUN_10a43c32c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd9570;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a43c34c; end: 10a43c35b;  */

void FUN_10a43c34c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a43c354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a43c35c; end: 10a43c3b3;  */

long FUN_10a43c35c(long param_1)

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



/* Entry: 10a43c3b4; end: 10a43c483;  */

void FUN_10a43c3b4(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar10 = param_1[1];
  if (uVar10 < param_2) {
LAB_10a43c3fc:
    if (param_2 == 0) {
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        if ((char)param_1[1] == '\x01') {
          if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a43c62c);
            (*pcVar2)();
          }
          (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
          FUN_10a004978(param_2 + 0x10);
        }
        else if (param_2 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_2);
        return;
      }
      lVar3 = param_2 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar10 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar10 * 8) = 0;
        uVar10 = uVar10 + 1;
      } while (param_2 != uVar10);
      plVar6 = (long *)param_1[2];
      if (plVar6 != (long *)0x0) {
        uVar10 = plVar6[1];
        uVar5 = param_2 - 1;
        if ((param_2 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (param_2 <= uVar10) {
          uVar9 = 0;
          if (param_2 != 0) {
            uVar9 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar9 * param_2;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar7 = (long *)*plVar6;
        while (plVar7 != (long *)0x0) {
          uVar9 = plVar7[1];
          if ((param_2 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (param_2 <= uVar9) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar9 / param_2;
            }
            uVar9 = uVar9 - uVar1 * param_2;
          }
          plVar8 = plVar7;
          if (uVar9 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar9 * 8) == 0) {
              *(long **)(lVar3 + uVar9 * 8) = plVar6;
              uVar10 = uVar9;
            }
            else {
              *plVar6 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar3 + uVar9 * 8);
              **(long **)(lVar3 + uVar9 * 8) = (long)plVar7;
              plVar8 = plVar6;
            }
          }
          plVar6 = plVar8;
          plVar7 = (long *)*plVar8;
        }
      }
    }
    return;
  }
  if (param_2 < uVar10) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar10 < 3) || ((uVar10 & uVar10 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (param_2 <= uVar5) {
      param_2 = uVar5;
    }
    if (param_2 < uVar10) goto LAB_10a43c3fc;
  }
  return;
}



/* Entry: 10a43c484; end: 10a43c663;  */

void FUN_10a43c484(long *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      if ((char)param_1[1] == '\x01') {
        if (3 < (ulong)*(byte *)(param_2 + 0x60)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a43c62c);
          (*pcVar2)();
        }
        (*(code *)(&PTR_FUN_110b9a040)[*(byte *)(param_2 + 0x60)])(param_2 + 0x20);
        FUN_10a004978(param_2 + 0x10);
      }
      else if (param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(param_2);
      return;
    }
    lVar3 = param_2 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        plVar9 = plVar8;
        if (uVar10 != uVar5) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + uVar10 * 8) == 0) {
            *(long **)(lVar3 + uVar10 * 8) = plVar7;
            uVar5 = uVar10;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar3 + uVar10 * 8);
            **(long **)(lVar3 + uVar10 * 8) = (long)plVar8;
            plVar9 = plVar7;
          }
        }
        plVar7 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
  }
  return;
}


