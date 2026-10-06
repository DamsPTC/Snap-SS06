/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a99a584; end: 10a99a5e7;  */

undefined8 * FUN_10a99a584(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a99a5e8; end: 10a99a5f7;  */

void FUN_10a99a5e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34570;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a99a5f8; end: 10a99a617;  */

void FUN_10a99a5f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34570;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a99a618; end: 10a99a627;  */

void FUN_10a99a618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a99a620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a99a628; end: 10a99b64b;  */

void FUN_10a99a628(long *param_1,long *param_2,long *param_3,long param_4,uint param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
LAB_10a99a65c:
  plVar11 = param_2 + -2;
  plVar8 = param_1;
LAB_10a99a670:
  do {
    param_1 = plVar8;
    uVar20 = (long)param_2 - (long)param_1 >> 4;
    if (uVar20 - 2 == 0 || (long)uVar20 < 2) {
      if (uVar20 < 2) {
        return;
      }
      if (uVar20 == 2) {
        lVar13 = param_2[-2];
        lVar9 = *param_1;
        uVar23 = *(undefined8 *)*param_3;
        fVar25 = (float)uVar23;
        fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
        fVar27 = (float)((ulong)uVar23 >> 0x20);
        fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
        fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
        fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
        fVar29 = *(float *)((undefined8 *)*param_3 + 1);
        fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
        fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
        if (fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29 <=
            fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28) {
          return;
        }
        *param_1 = lVar13;
        param_2[-2] = lVar9;
        lVar13 = param_1[1];
        param_1[1] = param_2[-1];
        param_2[-1] = lVar13;
        return;
      }
    }
    else {
      if (uVar20 == 3) {
        plVar8 = param_1 + 2;
        lVar13 = *plVar8;
        fVar29 = *(float *)((undefined8 *)*param_3 + 1);
        lVar9 = *param_1;
        fVar24 = *(float *)(lVar9 + 0x20) - fVar29;
        lVar10 = *plVar11;
        uVar23 = *(undefined8 *)*param_3;
        fVar25 = (float)uVar23;
        fVar28 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
        fVar27 = (float)((ulong)uVar23 >> 0x20);
        fVar30 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
        fVar31 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
        fVar32 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
        fVar25 = (float)*(undefined8 *)(lVar10 + 0x18) - fVar25;
        fVar27 = (float)((ulong)*(undefined8 *)(lVar10 + 0x18) >> 0x20) - fVar27;
        fVar22 = *(float *)(lVar10 + 0x20) - fVar29;
        fVar29 = *(float *)(lVar13 + 0x20) - fVar29;
        fVar22 = fVar25 * fVar25 + fVar27 * fVar27 + fVar22 * fVar22;
        fVar29 = fVar28 * fVar28 + fVar30 * fVar30 + fVar29 * fVar29;
        if (fVar31 * fVar31 + fVar32 * fVar32 + fVar24 * fVar24 <= fVar29) {
          if (fVar29 <= fVar22) {
            return;
          }
          *plVar8 = lVar10;
          *plVar11 = lVar13;
          plVar11 = param_1 + 3;
          lVar13 = *plVar11;
          *plVar11 = param_2[-1];
          param_2[-1] = lVar13;
          lVar13 = *plVar8;
          lVar9 = *param_1;
          uVar23 = *(undefined8 *)*param_3;
          fVar25 = (float)uVar23;
          fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
          fVar27 = (float)((ulong)uVar23 >> 0x20);
          fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
          fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
          fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
          fVar29 = *(float *)((undefined8 *)*param_3 + 1);
          fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
          fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
          if (fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29 <=
              fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28) {
            return;
          }
          plVar6 = param_1 + 1;
          *param_1 = lVar13;
          *plVar8 = lVar9;
        }
        else {
          if (fVar29 <= fVar22) {
            *param_1 = lVar13;
            *plVar8 = lVar9;
            plVar6 = param_1 + 3;
            lVar13 = param_1[1];
            param_1[1] = *plVar6;
            *plVar6 = lVar13;
            lVar13 = *plVar11;
            lVar9 = *plVar8;
            uVar23 = *(undefined8 *)*param_3;
            fVar25 = (float)uVar23;
            fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
            fVar27 = (float)((ulong)uVar23 >> 0x20);
            fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
            fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
            fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
            fVar29 = *(float *)((undefined8 *)*param_3 + 1);
            fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
            fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
            if (fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29 <=
                fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28) {
              return;
            }
            *plVar8 = lVar13;
            *plVar11 = lVar9;
          }
          else {
            plVar6 = param_1 + 1;
            *param_1 = lVar10;
            *plVar11 = lVar9;
          }
          plVar11 = param_2 + -1;
        }
        lVar13 = *plVar6;
        *plVar6 = *plVar11;
        *plVar11 = lVar13;
        return;
      }
      if (uVar20 == 4) {
        plVar8 = param_1 + 2;
        plVar6 = param_1 + 4;
        FUN_10a99b64c();
        lVar13 = *plVar11;
        lVar9 = *plVar6;
        uVar23 = *(undefined8 *)*param_3;
        fVar25 = (float)uVar23;
        fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
        fVar27 = (float)((ulong)uVar23 >> 0x20);
        fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
        fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
        fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
        fVar29 = *(float *)((undefined8 *)*param_3 + 1);
        fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
        fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
        if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
            fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
          *plVar6 = lVar13;
          *plVar11 = lVar9;
          lVar13 = param_1[5];
          param_1[5] = param_2[-1];
          param_2[-1] = lVar13;
          lVar13 = *plVar6;
          lVar9 = *plVar8;
          uVar23 = *(undefined8 *)*param_3;
          fVar25 = (float)uVar23;
          fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
          fVar27 = (float)((ulong)uVar23 >> 0x20);
          fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
          fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
          fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
          fVar29 = *(float *)((undefined8 *)*param_3 + 1);
          fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
          fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
          if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
              fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
            *plVar8 = lVar13;
            *plVar6 = lVar9;
            lVar13 = param_1[3];
            param_1[3] = param_1[5];
            param_1[5] = lVar13;
            lVar13 = *plVar8;
            lVar9 = *param_1;
            uVar23 = *(undefined8 *)*param_3;
            fVar25 = (float)uVar23;
            fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
            fVar27 = (float)((ulong)uVar23 >> 0x20);
            fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
            fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
            fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
            fVar29 = *(float *)((undefined8 *)*param_3 + 1);
            fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
            fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
            if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
                fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
              *param_1 = lVar13;
              *plVar8 = lVar9;
              lVar13 = param_1[1];
              param_1[1] = param_1[3];
              param_1[3] = lVar13;
            }
          }
        }
        return;
      }
      if (uVar20 == 5) {
        plVar8 = param_1 + 2;
        plVar6 = param_1 + 4;
        plVar7 = param_1 + 6;
        FUN_10a99b81c();
        lVar13 = *plVar11;
        lVar9 = *plVar7;
        uVar23 = *(undefined8 *)*param_3;
        fVar25 = (float)uVar23;
        fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
        fVar27 = (float)((ulong)uVar23 >> 0x20);
        fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
        fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
        fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
        fVar29 = *(float *)((undefined8 *)*param_3 + 1);
        fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
        fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
        if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
            fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
          *plVar7 = lVar13;
          *plVar11 = lVar9;
          lVar13 = param_1[7];
          param_1[7] = param_2[-1];
          param_2[-1] = lVar13;
          lVar13 = *plVar7;
          lVar9 = *plVar6;
          uVar23 = *(undefined8 *)*param_3;
          fVar25 = (float)uVar23;
          fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
          fVar27 = (float)((ulong)uVar23 >> 0x20);
          fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
          fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
          fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
          fVar29 = *(float *)((undefined8 *)*param_3 + 1);
          fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
          fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
          if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
              fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
            *plVar6 = lVar13;
            *plVar7 = lVar9;
            lVar13 = param_1[5];
            param_1[5] = param_1[7];
            param_1[7] = lVar13;
            lVar13 = *plVar6;
            lVar9 = *plVar8;
            uVar23 = *(undefined8 *)*param_3;
            fVar25 = (float)uVar23;
            fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
            fVar27 = (float)((ulong)uVar23 >> 0x20);
            fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
            fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
            fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
            fVar29 = *(float *)((undefined8 *)*param_3 + 1);
            fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
            fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
            if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
                fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
              *plVar8 = lVar13;
              *plVar6 = lVar9;
              lVar13 = param_1[3];
              param_1[3] = param_1[5];
              param_1[5] = lVar13;
              lVar13 = *plVar8;
              lVar9 = *param_1;
              uVar23 = *(undefined8 *)*param_3;
              fVar25 = (float)uVar23;
              fVar22 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar25;
              fVar27 = (float)((ulong)uVar23 >> 0x20);
              fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar27;
              fVar25 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
              fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
              fVar29 = *(float *)((undefined8 *)*param_3 + 1);
              fVar28 = *(float *)(lVar13 + 0x20) - fVar29;
              fVar29 = *(float *)(lVar9 + 0x20) - fVar29;
              if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
                  fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
                *param_1 = lVar13;
                *plVar8 = lVar9;
                lVar13 = param_1[1];
                param_1[1] = param_1[3];
                param_1[3] = lVar13;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar20 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        plVar8 = param_1 + 2;
        if (plVar8 == param_2) {
          return;
        }
        lVar13 = 0x10;
        plVar11 = param_1;
        do {
          lVar9 = *plVar8;
          uVar23 = *(undefined8 *)*param_3;
          fVar25 = (float)uVar23;
          fVar22 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
          fVar27 = (float)((ulong)uVar23 >> 0x20);
          fVar24 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
          uVar23 = *(undefined8 *)(*plVar11 + 0x18);
          fVar25 = (float)uVar23 - fVar25;
          fVar27 = (float)((ulong)uVar23 >> 0x20) - fVar27;
          fVar29 = *(float *)((undefined8 *)*param_3 + 1);
          fVar28 = *(float *)(lVar9 + 0x20) - fVar29;
          fVar29 = *(float *)(*plVar11 + 0x20) - fVar29;
          if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
              fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
            plStack_68 = (long *)plVar11[3];
            *plVar8 = 0;
            plVar8[1] = 0;
            lVar10 = 0;
            lStack_70 = lVar9;
            do {
              lVar21 = lVar10;
              lVar10 = (long)plVar11 + lVar21;
              FUN_10a99bf08(lVar10 + 0x10,lVar10);
              if (lVar13 + lVar21 == 0) {
LAB_10a99b648:
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10a99b64c);
                (*pcVar5)();
              }
              lVar10 = *(long *)(lVar10 + -0x10);
              pfVar14 = (float *)*param_3;
              fVar24 = (float)*(undefined8 *)(lVar9 + 0x1c) - (float)*(undefined8 *)(pfVar14 + 1);
              fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
              fVar25 = (float)((ulong)*(undefined8 *)(lVar9 + 0x1c) >> 0x20) - fVar22;
              fVar29 = *(float *)(lVar10 + 0x18) - *pfVar14;
              fVar22 = *(float *)(lVar10 + 0x20) - fVar22;
              fVar27 = *(float *)(lVar9 + 0x18) - (float)*(undefined8 *)pfVar14;
              fVar28 = *(float *)(lVar10 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
              lVar10 = lVar21 + -0x10;
            } while (fVar25 * fVar25 + fVar24 * fVar24 + fVar27 * fVar27 <
                     fVar22 * fVar22 + fVar29 * fVar29 + fVar28 * fVar28);
            FUN_10a99bf08((long)plVar11 + lVar21,&lStack_70);
            plVar8 = plStack_68;
            if (plStack_68 != (long *)0x0) {
              plVar6 = plStack_68 + 1;
              do {
                lVar9 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plStack_68 + 0x10))(plStack_68);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
          }
          plVar11 = plVar11 + 2;
          lVar13 = lVar13 + 0x10;
          plVar8 = (long *)((long)param_1 + lVar13);
          if (plVar8 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 2 == param_2) {
        return;
      }
      lVar13 = 0;
      plVar8 = param_1;
      plVar11 = param_1 + 2;
      break;
    }
    if (param_4 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar18 = uVar20 - 2 >> 1;
      uVar17 = uVar18;
      goto LAB_10a99af98;
    }
    plVar8 = param_1 + (uVar20 & 0xfffffffffffffffe);
    if (uVar20 < 0x81) {
      FUN_10a99b64c(plVar8,param_1,plVar11,param_3);
    }
    else {
      FUN_10a99b64c(param_1,plVar8,plVar11,param_3);
      FUN_10a99b64c(param_1 + 2,plVar8 + -2,param_2 + -4,param_3);
      FUN_10a99b64c(param_1 + 4,plVar8 + 2,param_2 + -6,param_3);
      FUN_10a99b64c(plVar8 + -2,plVar8,plVar8 + 2,param_3);
      lVar9 = param_1[1];
      lVar13 = *param_1;
      lVar10 = *plVar8;
      param_1[1] = plVar8[1];
      *param_1 = lVar10;
      plVar8[1] = lVar9;
      *plVar8 = lVar13;
    }
    param_4 = param_4 + -1;
    lStack_70 = *param_1;
    if (((param_5 & 1) != 0) ||
       (uVar23 = *(undefined8 *)(param_1[-2] + 0x18), uVar26 = *(undefined8 *)*param_3,
       fVar25 = (float)uVar26, fVar22 = (float)uVar23 - fVar25,
       fVar27 = (float)((ulong)uVar26 >> 0x20), fVar24 = (float)((ulong)uVar23 >> 0x20) - fVar27,
       fVar25 = (float)*(undefined8 *)(lStack_70 + 0x18) - fVar25,
       fVar27 = (float)((ulong)*(undefined8 *)(lStack_70 + 0x18) >> 0x20) - fVar27,
       fVar29 = *(float *)((undefined8 *)*param_3 + 1),
       fVar28 = *(float *)(param_1[-2] + 0x20) - fVar29,
       fVar29 = *(float *)(lStack_70 + 0x20) - fVar29,
       fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
       fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29)) {
      lVar13 = 0;
      plStack_68 = (long *)param_1[1];
      *param_1 = 0;
      param_1[1] = 0;
      pfVar14 = (float *)*param_3;
      do {
        plVar8 = (long *)((long)param_1 + lVar13 + 0x10);
        if (plVar8 == param_2) goto LAB_10a99b648;
        lVar9 = *plVar8;
        fVar24 = *pfVar14;
        fVar29 = (float)*(undefined8 *)(pfVar14 + 1);
        fVar25 = (float)*(undefined8 *)(lVar9 + 0x1c) - fVar29;
        fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
        fVar27 = (float)((ulong)*(undefined8 *)(lVar9 + 0x1c) >> 0x20) - fVar22;
        fVar28 = *(float *)(lStack_70 + 0x18) - fVar24;
        fVar30 = *(float *)(lStack_70 + 0x20) - fVar22;
        fVar31 = *(float *)(lVar9 + 0x18) - (float)*(undefined8 *)pfVar14;
        fVar32 = *(float *)(lStack_70 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
        fVar28 = fVar30 * fVar30 + fVar28 * fVar28 + fVar32 * fVar32;
        lVar13 = lVar13 + 0x10;
      } while (fVar27 * fVar27 + fVar25 * fVar25 + fVar31 * fVar31 < fVar28);
      plVar6 = (long *)((long)param_1 + lVar13);
      plVar7 = param_2;
      if (lVar13 == 0x10) {
        do {
          if (plVar7 <= plVar6) break;
          plVar7 = plVar7 + -2;
          fVar25 = *(float *)(*plVar7 + 0x18) - fVar24;
          uVar23 = *(undefined8 *)(*plVar7 + 0x1c);
          fVar27 = (float)uVar23 - fVar29;
          fVar30 = (float)((ulong)uVar23 >> 0x20) - fVar22;
        } while (fVar28 <= fVar30 * fVar30 + fVar27 * fVar27 + fVar25 * fVar25);
      }
      else {
        do {
          if (plVar7 == param_1) goto LAB_10a99b648;
          plVar7 = plVar7 + -2;
          fVar25 = *(float *)(*plVar7 + 0x18) - fVar24;
          uVar23 = *(undefined8 *)(*plVar7 + 0x1c);
          fVar27 = (float)uVar23 - fVar29;
          fVar30 = (float)((ulong)uVar23 >> 0x20) - fVar22;
        } while (fVar28 <= fVar30 * fVar30 + fVar27 * fVar27 + fVar25 * fVar25);
      }
      plVar8 = plVar6;
      if (plVar6 < plVar7) {
        lVar13 = *plVar7;
        plVar12 = plVar7;
        do {
          *plVar8 = lVar13;
          *plVar12 = lVar9;
          lVar13 = plVar8[1];
          plVar8[1] = plVar12[1];
          plVar12[1] = lVar13;
          pfVar14 = (float *)*param_3;
          do {
            plVar8 = plVar8 + 2;
            if (plVar8 == param_2) goto LAB_10a99b648;
            lVar9 = *plVar8;
            fVar29 = (float)*(undefined8 *)(pfVar14 + 1);
            fVar24 = (float)*(undefined8 *)(lVar9 + 0x1c) - fVar29;
            fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
            fVar25 = (float)((ulong)*(undefined8 *)(lVar9 + 0x1c) >> 0x20) - fVar22;
            fVar27 = *(float *)(lStack_70 + 0x18) - *pfVar14;
            fVar28 = *(float *)(lStack_70 + 0x20) - fVar22;
            fVar30 = *(float *)(lVar9 + 0x18) - (float)*(undefined8 *)pfVar14;
            fVar31 = *(float *)(lStack_70 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
            fVar27 = fVar28 * fVar28 + fVar27 * fVar27 + fVar31 * fVar31;
          } while (fVar25 * fVar25 + fVar24 * fVar24 + fVar30 * fVar30 < fVar27);
          do {
            if (plVar12 == param_1) goto LAB_10a99b648;
            plVar12 = plVar12 + -2;
            lVar13 = *plVar12;
            fVar24 = *(float *)(lVar13 + 0x18) - *pfVar14;
            fVar25 = (float)*(undefined8 *)(lVar13 + 0x1c) - fVar29;
            fVar28 = (float)((ulong)*(undefined8 *)(lVar13 + 0x1c) >> 0x20) - fVar22;
          } while (fVar27 <= fVar28 * fVar28 + fVar25 * fVar25 + fVar24 * fVar24);
        } while (plVar8 < plVar12);
      }
      plVar12 = plVar8 + -2;
      if (plVar12 != param_1) {
        FUN_10a99bf08(param_1,plVar12);
      }
      FUN_10a99bf08(plVar12,&lStack_70);
      plVar4 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          lVar13 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      if (plVar7 <= plVar6) {
        plVar6 = param_1;
        FUN_10a99bc0c(param_1,plVar12,param_3);
        plVar7 = plVar8;
        FUN_10a99bc0c(plVar8,param_2,param_3);
        if ((int)plVar7 != 0) goto LAB_10a99ace0;
        if (((ulong)plVar6 & 1) != 0) goto LAB_10a99a670;
      }
      FUN_10a99a628(param_1,plVar12,param_3,param_4,param_5 & 1);
      param_5 = 0;
      goto LAB_10a99a670;
    }
    plStack_68 = (long *)param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    fVar29 = *(float *)((undefined8 *)*param_3 + 1);
    uVar23 = *(undefined8 *)*param_3;
    fVar22 = (float)uVar23;
    fVar25 = (float)*(undefined8 *)(lStack_70 + 0x18) - fVar22;
    fVar24 = (float)((ulong)uVar23 >> 0x20);
    fVar27 = (float)((ulong)*(undefined8 *)(lStack_70 + 0x18) >> 0x20) - fVar24;
    fVar25 = fVar25 * fVar25;
    uVar23 = *(undefined8 *)(*plVar11 + 0x18);
    fVar28 = (float)uVar23 - fVar22;
    fVar30 = (float)((ulong)uVar23 >> 0x20) - fVar24;
    fVar30 = fVar30 * fVar30;
    fVar31 = *(float *)(lStack_70 + 0x20) - fVar29;
    fVar32 = *(float *)(*plVar11 + 0x20) - fVar29;
    uVar23 = NEON_ext(CONCAT44(fVar27 * fVar27,fVar25),CONCAT44(fVar30,fVar28 * fVar28),4,1);
    fVar25 = fVar31 * fVar31 + (float)uVar23 + fVar25;
    plVar8 = param_1;
    if (fVar32 * fVar32 + (float)((ulong)uVar23 >> 0x20) + fVar30 <= fVar25) {
      do {
        plVar8 = plVar8 + 2;
        if (param_2 <= plVar8) break;
        fVar27 = *(float *)(*plVar8 + 0x20) - fVar29;
        uVar23 = *(undefined8 *)(*plVar8 + 0x18);
        fVar28 = (float)uVar23 - fVar22;
        fVar30 = (float)((ulong)uVar23 >> 0x20) - fVar24;
      } while (fVar28 * fVar28 + fVar30 * fVar30 + fVar27 * fVar27 <= fVar25);
    }
    else {
      do {
        plVar8 = plVar8 + 2;
        if (plVar8 == param_2) goto LAB_10a99b648;
        fVar27 = *(float *)(*plVar8 + 0x20) - fVar29;
        uVar23 = *(undefined8 *)(*plVar8 + 0x18);
        fVar28 = (float)uVar23 - fVar22;
        fVar30 = (float)((ulong)uVar23 >> 0x20) - fVar24;
      } while (fVar28 * fVar28 + fVar30 * fVar30 + fVar27 * fVar27 <= fVar25);
    }
    plVar6 = param_2;
    if (plVar8 < param_2) {
      do {
        if (plVar6 == param_1) goto LAB_10a99b648;
        plVar6 = plVar6 + -2;
        fVar27 = *(float *)(*plVar6 + 0x20) - fVar29;
        uVar23 = *(undefined8 *)(*plVar6 + 0x18);
        fVar28 = (float)uVar23 - fVar22;
        fVar30 = (float)((ulong)uVar23 >> 0x20) - fVar24;
      } while (fVar25 < fVar28 * fVar28 + fVar30 * fVar30 + fVar27 * fVar27);
    }
    if (plVar8 < plVar6) {
      lVar13 = *plVar8;
      lVar9 = *plVar6;
      do {
        *plVar8 = lVar9;
        *plVar6 = lVar13;
        lVar13 = plVar8[1];
        plVar8[1] = plVar6[1];
        plVar6[1] = lVar13;
        do {
          plVar8 = plVar8 + 2;
          if (plVar8 == param_2) goto LAB_10a99b648;
          lVar13 = *plVar8;
          fVar29 = *(float *)((undefined8 *)*param_3 + 1);
          uVar23 = *(undefined8 *)*param_3;
          fVar22 = (float)uVar23;
          fVar25 = (float)*(undefined8 *)(lStack_70 + 0x18) - fVar22;
          fVar24 = (float)((ulong)uVar23 >> 0x20);
          fVar27 = (float)((ulong)*(undefined8 *)(lStack_70 + 0x18) >> 0x20) - fVar24;
          fVar25 = fVar25 * fVar25;
          fVar28 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar22;
          fVar30 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar24;
          fVar30 = fVar30 * fVar30;
          fVar31 = *(float *)(lStack_70 + 0x20) - fVar29;
          fVar32 = *(float *)(lVar13 + 0x20) - fVar29;
          uVar23 = NEON_ext(CONCAT44(fVar27 * fVar27,fVar25),CONCAT44(fVar30,fVar28 * fVar28),4,1);
          fVar25 = fVar31 * fVar31 + (float)uVar23 + fVar25;
        } while (fVar32 * fVar32 + (float)((ulong)uVar23 >> 0x20) + fVar30 <= fVar25);
        do {
          if (plVar6 == param_1) goto LAB_10a99b648;
          plVar6 = plVar6 + -2;
          lVar9 = *plVar6;
          fVar27 = *(float *)(lVar9 + 0x20) - fVar29;
          fVar28 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar22;
          fVar30 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar24;
        } while (fVar25 < fVar28 * fVar28 + fVar30 * fVar30 + fVar27 * fVar27);
      } while (plVar8 < plVar6);
    }
    plVar6 = plVar8 + -2;
    if (plVar6 != param_1) {
      FUN_10a99bf08(param_1,plVar6);
    }
    FUN_10a99bf08(plVar6,&lStack_70);
    plVar6 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar7 = plStack_68 + 1;
      do {
        lVar13 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    param_5 = 0;
  } while( true );
LAB_10a99ae28:
  lVar9 = plVar8[2];
  uVar23 = *(undefined8 *)*param_3;
  fVar25 = (float)uVar23;
  fVar22 = (float)*(undefined8 *)(lVar9 + 0x18) - fVar25;
  fVar27 = (float)((ulong)uVar23 >> 0x20);
  fVar24 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar27;
  uVar23 = *(undefined8 *)(*plVar8 + 0x18);
  fVar25 = (float)uVar23 - fVar25;
  fVar27 = (float)((ulong)uVar23 >> 0x20) - fVar27;
  fVar29 = *(float *)((undefined8 *)*param_3 + 1);
  fVar28 = *(float *)(lVar9 + 0x20) - fVar29;
  fVar29 = *(float *)(*plVar8 + 0x20) - fVar29;
  if (fVar22 * fVar22 + fVar24 * fVar24 + fVar28 * fVar28 <
      fVar25 * fVar25 + fVar27 * fVar27 + fVar29 * fVar29) {
    plStack_68 = (long *)plVar8[3];
    *plVar11 = 0;
    plVar11[1] = 0;
    lVar10 = lVar13;
    lStack_70 = lVar9;
    do {
      lVar21 = lVar10;
      lVar10 = (long)param_1 + lVar21;
      FUN_10a99bf08(lVar10 + 0x10,lVar10);
      plVar8 = param_1;
      if (lVar21 == 0) goto LAB_10a99af30;
      lVar10 = *(long *)(lVar10 + -0x10);
      pfVar14 = (float *)*param_3;
      fVar24 = (float)*(undefined8 *)(lVar9 + 0x1c) - (float)*(undefined8 *)(pfVar14 + 1);
      fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
      fVar25 = (float)((ulong)*(undefined8 *)(lVar9 + 0x1c) >> 0x20) - fVar22;
      fVar29 = *(float *)(lVar10 + 0x18) - *pfVar14;
      fVar22 = *(float *)(lVar10 + 0x20) - fVar22;
      fVar27 = *(float *)(lVar9 + 0x18) - (float)*(undefined8 *)pfVar14;
      fVar28 = *(float *)(lVar10 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
      lVar10 = lVar21 + -0x10;
    } while (fVar25 * fVar25 + fVar24 * fVar24 + fVar27 * fVar27 <
             fVar22 * fVar22 + fVar29 * fVar29 + fVar28 * fVar28);
    plVar8 = (long *)((long)param_1 + lVar21);
LAB_10a99af30:
    FUN_10a99bf08(plVar8,&lStack_70);
    plVar8 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar6 = plStack_68 + 1;
      do {
        lVar9 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  plVar6 = plVar11 + 2;
  lVar13 = lVar13 + 0x10;
  plVar8 = plVar11;
  plVar11 = plVar6;
  if (plVar6 == param_2) {
    return;
  }
  goto LAB_10a99ae28;
LAB_10a99af98:
  do {
    if ((long)uVar17 <= (long)uVar18) {
      uVar19 = uVar17 << 1 | 1;
      plVar8 = param_1 + uVar19 * 2;
      uVar16 = uVar17 * 2 + 2;
      pfVar14 = (float *)*param_3;
      fVar29 = *pfVar14;
      if ((long)uVar16 < (long)uVar20) {
        fVar24 = pfVar14[1];
        fVar22 = pfVar14[2];
        lVar13 = plVar8[2];
        uVar23 = *(undefined8 *)(*plVar8 + 0x18);
        uVar26 = *(undefined8 *)(lVar13 + 0x18);
        fVar31 = (float)uVar23 - fVar29;
        fVar32 = (float)uVar26 - fVar29;
        fVar25 = (float)((ulong)uVar23 >> 0x20) - fVar24;
        fVar27 = (float)((ulong)uVar26 >> 0x20) - fVar24;
        fVar28 = *(float *)(*plVar8 + 0x20) - fVar22;
        fVar30 = *(float *)(lVar13 + 0x20) - fVar22;
        plVar11 = plVar8 + 2;
        if (fVar32 * fVar32 + fVar27 * fVar27 + fVar30 * fVar30 <=
            fVar31 * fVar31 + fVar25 * fVar25 + fVar28 * fVar28) {
          plVar11 = plVar8;
          uVar16 = uVar19;
        }
      }
      else {
        fVar24 = pfVar14[1];
        fVar22 = pfVar14[2];
        plVar11 = plVar8;
        uVar16 = uVar19;
      }
      plVar8 = param_1 + uVar17 * 2;
      lVar13 = *plVar8;
      uVar23 = *(undefined8 *)(*plVar11 + 0x18);
      fVar27 = (float)uVar23 - fVar29;
      fVar29 = (float)*(undefined8 *)(lVar13 + 0x18) - fVar29;
      fVar28 = (float)((ulong)uVar23 >> 0x20) - fVar24;
      fVar24 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar24;
      fVar25 = *(float *)(*plVar11 + 0x20) - fVar22;
      fVar22 = *(float *)(lVar13 + 0x20) - fVar22;
      if (fVar29 * fVar29 + fVar24 * fVar24 + fVar22 * fVar22 <=
          fVar27 * fVar27 + fVar28 * fVar28 + fVar25 * fVar25) {
        plStack_68 = (long *)plVar8[1];
        *plVar8 = 0;
        plVar8[1] = 0;
        lStack_70 = lVar13;
        do {
          plVar6 = plVar11;
          FUN_10a99bf08(plVar8,plVar6);
          if ((long)uVar18 < (long)uVar16) break;
          uVar19 = uVar16 << 1 | 1;
          plVar8 = param_1 + uVar19 * 2;
          uVar16 = uVar16 * 2 + 2;
          puVar15 = (undefined8 *)*param_3;
          if ((long)uVar16 < (long)uVar20) {
            lVar9 = plVar8[2];
            fVar29 = *(float *)(puVar15 + 1);
            uVar23 = *puVar15;
            uVar26 = *(undefined8 *)(*plVar8 + 0x18);
            fVar24 = (float)uVar26 - (float)uVar23;
            fVar22 = (float)((ulong)uVar23 >> 0x20);
            fVar25 = (float)((ulong)uVar26 >> 0x20) - fVar22;
            fVar24 = fVar24 * fVar24;
            uVar26 = *(undefined8 *)(lVar9 + 0x18);
            fVar27 = (float)uVar26 - (float)uVar23;
            fVar22 = (float)((ulong)uVar26 >> 0x20) - fVar22;
            fVar22 = fVar22 * fVar22;
            fVar28 = *(float *)(*plVar8 + 0x20) - fVar29;
            fVar30 = *(float *)(lVar9 + 0x20) - fVar29;
            uVar26 = NEON_ext(CONCAT44(fVar25 * fVar25,fVar24),CONCAT44(fVar22,fVar27 * fVar27),4,1)
            ;
            plVar11 = plVar8 + 2;
            if (fVar30 * fVar30 + (float)((ulong)uVar26 >> 0x20) + fVar22 <=
                fVar28 * fVar28 + (float)uVar26 + fVar24) {
              plVar11 = plVar8;
              uVar16 = uVar19;
            }
          }
          else {
            fVar29 = *(float *)(puVar15 + 1);
            uVar23 = *puVar15;
            plVar11 = plVar8;
            uVar16 = uVar19;
          }
          uVar26 = *(undefined8 *)(*plVar11 + 0x18);
          fVar27 = (float)*(undefined8 *)(lVar13 + 0x18) - (float)uVar23;
          fVar25 = (float)((ulong)uVar23 >> 0x20);
          fVar28 = (float)((ulong)uVar26 >> 0x20) - fVar25;
          fVar24 = (float)uVar26 - (float)uVar23;
          fVar25 = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20) - fVar25;
          fVar22 = *(float *)(lVar13 + 0x20) - fVar29;
          fVar29 = *(float *)(*plVar11 + 0x20) - fVar29;
          uVar23 = NEON_rev64(CONCAT44(fVar25 * fVar25,fVar24 * fVar24),4);
          plVar8 = plVar6;
        } while (fVar22 * fVar22 + fVar27 * fVar27 + (float)uVar23 <=
                 fVar29 * fVar29 + fVar28 * fVar28 + (float)((ulong)uVar23 >> 0x20));
        FUN_10a99bf08(plVar6,&lStack_70);
        plVar8 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar11 = plStack_68 + 1;
          do {
            lVar13 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
    }
    bVar3 = uVar17 != 0;
    uVar17 = uVar17 - 1;
  } while (bVar3);
  do {
    plStack_78 = (long *)param_1[1];
    lStack_80 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    plVar8 = param_1;
    uVar17 = 0;
    do {
      uVar16 = uVar17 << 1 | 1;
      uVar18 = uVar17 * 2 + 2;
      plVar11 = plVar8 + uVar17 * 2 + 2;
      uVar19 = uVar16;
      if ((long)uVar18 < (long)uVar20) {
        lVar13 = plVar8[uVar17 * 2 + 4];
        pfVar14 = (float *)*param_3;
        uVar23 = *(undefined8 *)(plVar8[uVar17 * 2 + 2] + 0x1c);
        fVar24 = (float)uVar23 - (float)*(undefined8 *)(pfVar14 + 1);
        fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
        fVar25 = (float)((ulong)uVar23 >> 0x20) - fVar22;
        fVar29 = *(float *)(lVar13 + 0x18) - *pfVar14;
        fVar22 = *(float *)(lVar13 + 0x20) - fVar22;
        fVar27 = *(float *)(plVar8[uVar17 * 2 + 2] + 0x18) - (float)*(undefined8 *)pfVar14;
        fVar28 = *(float *)(lVar13 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
        plVar11 = plVar8 + uVar17 * 2 + 4;
        uVar19 = uVar18;
        if (fVar22 * fVar22 + fVar29 * fVar29 + fVar28 * fVar28 <=
            fVar25 * fVar25 + fVar24 * fVar24 + fVar27 * fVar27) {
          plVar11 = plVar8 + uVar17 * 2 + 2;
          uVar19 = uVar16;
        }
      }
      FUN_10a99bf08(plVar8,plVar11);
      plVar8 = plVar11;
      uVar17 = uVar19;
    } while ((long)uVar19 <= (long)(uVar20 - 2 >> 1));
    param_2 = param_2 + -2;
    if (plVar11 == param_2) {
      FUN_10a99bf08(plVar11,&lStack_80);
    }
    else {
      FUN_10a99bf08(plVar11,param_2);
      FUN_10a99bf08(param_2,&lStack_80);
      lVar13 = (long)plVar11 + (0x10 - (long)param_1) >> 4;
      if (1 < lVar13) {
        uVar17 = lVar13 - 2U >> 1;
        lVar9 = *plVar11;
        pfVar14 = (float *)*param_3;
        lVar13 = param_1[uVar17 * 2];
        uVar23 = *(undefined8 *)(lVar13 + 0x1c);
        fVar24 = (float)uVar23 - (float)*(undefined8 *)(pfVar14 + 1);
        fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
        fVar25 = (float)((ulong)uVar23 >> 0x20) - fVar22;
        fVar29 = *(float *)(lVar9 + 0x18) - *pfVar14;
        fVar22 = *(float *)(lVar9 + 0x20) - fVar22;
        fVar27 = *(float *)(lVar13 + 0x18) - (float)*(undefined8 *)pfVar14;
        fVar28 = *(float *)(lVar9 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
        if (fVar25 * fVar25 + fVar24 * fVar24 + fVar27 * fVar27 <
            fVar22 * fVar22 + fVar29 * fVar29 + fVar28 * fVar28) {
          plStack_68 = (long *)plVar11[1];
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar8 = param_1 + uVar17 * 2;
          lStack_70 = lVar9;
          do {
            plVar6 = plVar8;
            FUN_10a99bf08(plVar11,plVar6);
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1 >> 1;
            pfVar14 = (float *)*param_3;
            lVar13 = param_1[uVar17 * 2];
            uVar23 = *(undefined8 *)(lVar13 + 0x1c);
            fVar24 = (float)uVar23 - (float)*(undefined8 *)(pfVar14 + 1);
            fVar22 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20);
            fVar25 = (float)((ulong)uVar23 >> 0x20) - fVar22;
            fVar29 = *(float *)(lVar9 + 0x18) - *pfVar14;
            fVar22 = *(float *)(lVar9 + 0x20) - fVar22;
            fVar27 = *(float *)(lVar13 + 0x18) - (float)*(undefined8 *)pfVar14;
            fVar28 = *(float *)(lVar9 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
            plVar8 = param_1 + uVar17 * 2;
            plVar11 = plVar6;
          } while (fVar25 * fVar25 + fVar24 * fVar24 + fVar27 * fVar27 <
                   fVar22 * fVar22 + fVar29 * fVar29 + fVar28 * fVar28);
          FUN_10a99bf08(plVar6,&lStack_70);
          plVar8 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar11 = plStack_68 + 1;
            do {
              lVar13 = *plVar11;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar3) {
                *plVar11 = lVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
        }
      }
    }
    plVar8 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar11 = plStack_78 + 1;
      do {
        lVar13 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    bVar3 = (long)uVar20 < 3;
    uVar20 = uVar20 - 1;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_10a99ace0:
  param_2 = plVar12;
  if (((ulong)plVar6 & 1) != 0) {
    return;
  }
  goto LAB_10a99a65c;
}



/* Entry: 10a99b64c; end: 10a99b81b;  */

void FUN_10a99b64c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar2 = *param_2;
  fVar6 = *(float *)((undefined8 *)*param_4 + 1);
  lVar4 = *param_1;
  fVar8 = *(float *)(lVar4 + 0x20) - fVar6;
  lVar5 = *param_3;
  uVar11 = *(undefined8 *)*param_4;
  fVar9 = (float)uVar11;
  fVar12 = (float)*(undefined8 *)(lVar2 + 0x18) - fVar9;
  fVar10 = (float)((ulong)uVar11 >> 0x20);
  fVar13 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) - fVar10;
  fVar14 = (float)*(undefined8 *)(lVar4 + 0x18) - fVar9;
  fVar15 = (float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20) - fVar10;
  fVar9 = (float)*(undefined8 *)(lVar5 + 0x18) - fVar9;
  fVar10 = (float)((ulong)*(undefined8 *)(lVar5 + 0x18) >> 0x20) - fVar10;
  fVar7 = *(float *)(lVar5 + 0x20) - fVar6;
  fVar6 = *(float *)(lVar2 + 0x20) - fVar6;
  fVar7 = fVar9 * fVar9 + fVar10 * fVar10 + fVar7 * fVar7;
  fVar6 = fVar12 * fVar12 + fVar13 * fVar13 + fVar6 * fVar6;
  if (fVar14 * fVar14 + fVar15 * fVar15 + fVar8 * fVar8 <= fVar6) {
    if (fVar6 <= fVar7) {
      return;
    }
    *param_2 = lVar5;
    *param_3 = lVar2;
    plVar3 = param_2 + 1;
    lVar2 = *plVar3;
    *plVar3 = param_3[1];
    param_3[1] = lVar2;
    lVar2 = *param_2;
    lVar4 = *param_1;
    uVar11 = *(undefined8 *)*param_4;
    fVar9 = (float)uVar11;
    fVar7 = (float)*(undefined8 *)(lVar2 + 0x18) - fVar9;
    fVar10 = (float)((ulong)uVar11 >> 0x20);
    fVar8 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) - fVar10;
    fVar9 = (float)*(undefined8 *)(lVar4 + 0x18) - fVar9;
    fVar10 = (float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20) - fVar10;
    fVar6 = *(float *)((undefined8 *)*param_4 + 1);
    fVar12 = *(float *)(lVar2 + 0x20) - fVar6;
    fVar6 = *(float *)(lVar4 + 0x20) - fVar6;
    if (fVar9 * fVar9 + fVar10 * fVar10 + fVar6 * fVar6 <=
        fVar7 * fVar7 + fVar8 * fVar8 + fVar12 * fVar12) {
      return;
    }
    plVar1 = param_1 + 1;
    *param_1 = lVar2;
    *param_2 = lVar4;
  }
  else {
    if (fVar6 <= fVar7) {
      *param_1 = lVar2;
      *param_2 = lVar4;
      plVar1 = param_2 + 1;
      lVar2 = param_1[1];
      param_1[1] = *plVar1;
      *plVar1 = lVar2;
      lVar2 = *param_3;
      lVar4 = *param_2;
      uVar11 = *(undefined8 *)*param_4;
      fVar9 = (float)uVar11;
      fVar7 = (float)*(undefined8 *)(lVar2 + 0x18) - fVar9;
      fVar10 = (float)((ulong)uVar11 >> 0x20);
      fVar8 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) - fVar10;
      fVar9 = (float)*(undefined8 *)(lVar4 + 0x18) - fVar9;
      fVar10 = (float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20) - fVar10;
      fVar6 = *(float *)((undefined8 *)*param_4 + 1);
      fVar12 = *(float *)(lVar2 + 0x20) - fVar6;
      fVar6 = *(float *)(lVar4 + 0x20) - fVar6;
      if (fVar9 * fVar9 + fVar10 * fVar10 + fVar6 * fVar6 <=
          fVar7 * fVar7 + fVar8 * fVar8 + fVar12 * fVar12) {
        return;
      }
      *param_2 = lVar2;
      *param_3 = lVar4;
    }
    else {
      plVar1 = param_1 + 1;
      *param_1 = lVar5;
      *param_3 = lVar4;
    }
    plVar3 = param_3 + 1;
  }
  lVar2 = *plVar1;
  *plVar1 = *plVar3;
  *plVar3 = lVar2;
  return;
}



/* Entry: 10a99b81c; end: 10a99bc0b;  */

void FUN_10a99b81c(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  FUN_10a99b64c();
  lVar1 = *param_4;
  lVar2 = *param_3;
  uVar6 = *(undefined8 *)*param_5;
  fVar5 = (float)uVar6;
  fVar3 = (float)*(undefined8 *)(lVar1 + 0x18) - fVar5;
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20) - fVar7;
  fVar5 = (float)*(undefined8 *)(lVar2 + 0x18) - fVar5;
  fVar7 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) - fVar7;
  fVar9 = *(float *)((undefined8 *)*param_5 + 1);
  fVar8 = *(float *)(lVar1 + 0x20) - fVar9;
  fVar9 = *(float *)(lVar2 + 0x20) - fVar9;
  if (fVar3 * fVar3 + fVar4 * fVar4 + fVar8 * fVar8 < fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9)
  {
    *param_3 = lVar1;
    *param_4 = lVar2;
    lVar1 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = lVar1;
    lVar1 = *param_3;
    lVar2 = *param_2;
    uVar6 = *(undefined8 *)*param_5;
    fVar5 = (float)uVar6;
    fVar3 = (float)*(undefined8 *)(lVar1 + 0x18) - fVar5;
    fVar7 = (float)((ulong)uVar6 >> 0x20);
    fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20) - fVar7;
    fVar5 = (float)*(undefined8 *)(lVar2 + 0x18) - fVar5;
    fVar7 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) - fVar7;
    fVar9 = *(float *)((undefined8 *)*param_5 + 1);
    fVar8 = *(float *)(lVar1 + 0x20) - fVar9;
    fVar9 = *(float *)(lVar2 + 0x20) - fVar9;
    if (fVar3 * fVar3 + fVar4 * fVar4 + fVar8 * fVar8 <
        fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9) {
      *param_2 = lVar1;
      *param_3 = lVar2;
      lVar1 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = lVar1;
      lVar1 = *param_2;
      lVar2 = *param_1;
      uVar6 = *(undefined8 *)*param_5;
      fVar5 = (float)uVar6;
      fVar3 = (float)*(undefined8 *)(lVar1 + 0x18) - fVar5;
      fVar7 = (float)((ulong)uVar6 >> 0x20);
      fVar4 = (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20) - fVar7;
      fVar5 = (float)*(undefined8 *)(lVar2 + 0x18) - fVar5;
      fVar7 = (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) - fVar7;
      fVar9 = *(float *)((undefined8 *)*param_5 + 1);
      fVar8 = *(float *)(lVar1 + 0x20) - fVar9;
      fVar9 = *(float *)(lVar2 + 0x20) - fVar9;
      if (fVar3 * fVar3 + fVar4 * fVar4 + fVar8 * fVar8 <
          fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9) {
        *param_1 = lVar1;
        *param_2 = lVar2;
        lVar1 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = lVar1;
      }
    }
  }
  return;
}



/* Entry: 10a99bc0c; end: 10a99bf07;  */

bool FUN_10a99bc0c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long lStack_70;
  long *plStack_68;
  
  uVar5 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      lVar6 = param_2[-2];
      lVar8 = *param_1;
      uVar16 = *(undefined8 *)*param_3;
      fVar15 = (float)uVar16;
      fVar13 = (float)*(undefined8 *)(lVar6 + 0x18) - fVar15;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar14 = (float)((ulong)*(undefined8 *)(lVar6 + 0x18) >> 0x20) - fVar17;
      fVar15 = (float)*(undefined8 *)(lVar8 + 0x18) - fVar15;
      fVar17 = (float)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20) - fVar17;
      fVar19 = *(float *)((undefined8 *)*param_3 + 1);
      fVar18 = *(float *)(lVar6 + 0x20) - fVar19;
      fVar19 = *(float *)(lVar8 + 0x20) - fVar19;
      if (fVar15 * fVar15 + fVar17 * fVar17 + fVar19 * fVar19 <=
          fVar13 * fVar13 + fVar14 * fVar14 + fVar18 * fVar18) {
        return true;
      }
      *param_1 = lVar6;
      param_2[-2] = lVar8;
      lVar6 = param_1[1];
      param_1[1] = param_2[-1];
      param_2[-1] = lVar6;
      return true;
    }
  }
  else {
    if (uVar5 == 3) {
      FUN_10a99b64c(param_1,param_1 + 2,param_2 + -2,param_3);
      return true;
    }
    if (uVar5 == 4) {
      func_0x00010a99b81c(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
      return true;
    }
    if (uVar5 == 5) {
      func_0x00010a99b9d4(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2,param_3);
      return true;
    }
  }
  FUN_10a99b64c(param_1,param_1 + 2,param_1 + 4,param_3);
  if (param_1 + 6 != param_2) {
    lVar6 = 0;
    iVar12 = 0;
    plVar4 = param_1 + 4;
    plVar11 = param_1 + 6;
    do {
      lVar8 = *plVar11;
      uVar16 = *(undefined8 *)*param_3;
      fVar15 = (float)uVar16;
      fVar13 = (float)*(undefined8 *)(lVar8 + 0x18) - fVar15;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar14 = (float)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20) - fVar17;
      uVar16 = *(undefined8 *)(*plVar4 + 0x18);
      fVar15 = (float)uVar16 - fVar15;
      fVar17 = (float)((ulong)uVar16 >> 0x20) - fVar17;
      fVar19 = *(float *)((undefined8 *)*param_3 + 1);
      fVar18 = *(float *)(lVar8 + 0x20) - fVar19;
      fVar19 = *(float *)(*plVar4 + 0x20) - fVar19;
      if (fVar13 * fVar13 + fVar14 * fVar14 + fVar18 * fVar18 <
          fVar15 * fVar15 + fVar17 * fVar17 + fVar19 * fVar19) {
        plStack_68 = (long *)plVar11[1];
        *plVar11 = 0;
        plVar11[1] = 0;
        lVar7 = lVar6;
        lStack_70 = lVar8;
        do {
          lVar10 = lVar7;
          FUN_10a99bf08((long)param_1 + lVar10 + 0x30,(long)param_1 + lVar10 + 0x20);
          plVar4 = param_1;
          if (lVar10 == -0x20) goto LAB_10a99be58;
          lVar7 = *(long *)((long)param_1 + lVar10 + 0x10);
          pfVar9 = (float *)*param_3;
          fVar14 = (float)*(undefined8 *)(lVar8 + 0x1c) - (float)*(undefined8 *)(pfVar9 + 1);
          fVar13 = (float)((ulong)*(undefined8 *)(pfVar9 + 1) >> 0x20);
          fVar15 = (float)((ulong)*(undefined8 *)(lVar8 + 0x1c) >> 0x20) - fVar13;
          fVar19 = *(float *)(lVar7 + 0x18) - *pfVar9;
          fVar13 = *(float *)(lVar7 + 0x20) - fVar13;
          fVar17 = *(float *)(lVar8 + 0x18) - (float)*(undefined8 *)pfVar9;
          fVar18 = *(float *)(lVar7 + 0x1c) - (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
          lVar7 = lVar10 + -0x10;
        } while (fVar15 * fVar15 + fVar14 * fVar14 + fVar17 * fVar17 <
                 fVar13 * fVar13 + fVar19 * fVar19 + fVar18 * fVar18);
        plVar4 = (long *)((long)param_1 + lVar10 + 0x20);
LAB_10a99be58:
        FUN_10a99bf08(plVar4,&lStack_70);
        plVar4 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar1 = plStack_68 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        iVar12 = iVar12 + 1;
        if (iVar12 == 8) {
          return plVar11 + 2 == param_2;
        }
      }
      plVar1 = plVar11 + 2;
      lVar6 = lVar6 + 0x10;
      plVar4 = plVar11;
      plVar11 = plVar1;
    } while (plVar1 != param_2);
  }
  return true;
}



/* Entry: 10a99bf08; end: 10a99bf6b;  */

undefined8 * FUN_10a99bf08(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a99bf6c; end: 10a99c023;  */

void FUN_10a99bf6c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a99c104(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
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



/* Entry: 10a99c024; end: 10a99c103;  */

void FUN_10a99c024(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a99c16c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  if (((int)param_2 != 0) && ((char)plVar4[4] == '\x01')) {
    FUN_10a00946c(&UNK_10f685b37);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a99c0f0);
    (*pcVar1)();
  }
  *(char *)(plVar4 + 3) = (char)param_2;
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



/* Entry: 10a99c104; end: 10a99c1d3;  */

void FUN_10a99c104(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar4 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar5 = ppuVar4;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a053854(ppuVar4,ppuVar5);
    param_2 = ppuVar5;
    if (ppuVar4 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (ppuVar4 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar6 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  FUN_10a99c104(plVar6,param_2);
  FUN_10a052e3c(param_4);
  iVar1 = *(int *)((long)plVar6 + 0x1c);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)iVar1;
  plVar6 = plVar7 + 0x4b;
  lVar8 = plVar7[0x59];
  uVar9 = lVar8 - 1;
  plVar7[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar6[lVar8 + 2];
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
  lVar8 = *plVar6;
  lVar13 = plVar7[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar7[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_a8 = plVar6;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar6 = lVar12;
          plVar7[0x4c] = lVar13 + uVar16 * 0x10;
          plVar7[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_c8 = lVar8;
          lStack_c0 = lVar8;
          lStack_b8 = lVar8;
          lStack_b0 = lVar14;
          func_0x00010988c1b8(&lStack_c8);
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar7[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar7[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar7[0x5a] = uVar9;
  return;
}



/* Entry: 10a99c1d4; end: 10a99c28f;  */

void FUN_10a99c1d4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
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
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a99c104(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x1c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
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



/* Entry: 10a99c290; end: 10a99c34f;  */

void FUN_10a99c290(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a99c16c(param_2,param_3);
  FUN_10a99c350(param_5);
  func_0x000109898518(param_2,param_4);
  *(int *)((long)plVar4 + 0x1c) = (int)param_2;
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



/* Entry: 10a99c350; end: 10a99c373;  */

void FUN_10a99c350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
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
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a99c104(plVar3,uVar5);
  FUN_10a052e3c(param_4);
  *extraout_x8 = 3;
  uVar5 = NEON_ucvtf((ulong)*(byte *)(plVar3 + 4));
  *(undefined8 *)(extraout_x8 + 2) = uVar5;
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



/* Entry: 10a99c374; end: 10a99c42f;  */

void FUN_10a99c374(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar14;
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
  FUN_10a99c104(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(param_2 + 4));
  *(undefined8 *)(param_1 + 2) = uVar14;
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



/* Entry: 10a99c430; end: 10a99c4ef;  */

void FUN_10a99c430(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00010a99c16c(param_2,param_3);
  FUN_10a99c4f0(param_5);
  func_0x00010a068bd8(param_2,param_4);
  *(char *)(plVar4 + 4) = (char)param_2;
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



/* Entry: 10a99c4f0; end: 10a99c513;  */

void FUN_10a99c4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined **ppuStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_4);
  plVar5 = (long *)0x40;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bc8098;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plStack_50 = plVar5 + 3;
  *plStack_50 = (long)&PTR_FUN_110c35180;
  *(undefined4 *)((long)plVar5 + 0x34) = 4;
  *(undefined1 *)(plVar5 + 7) = 1;
  ppuStack_58 = &PTR_DAT_110c35158;
  plStack_48 = plVar5;
  func_0x000109899de4(extraout_x8,plVar3,&plStack_50,&ppuStack_58,0,0);
  plVar3 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a99c514; end: 10a99c64f;  */

void FUN_10a99c514(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x40;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bc8098;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110c35180;
  *(undefined4 *)((long)plVar5 + 0x34) = 4;
  *(undefined1 *)(plVar5 + 7) = 1;
  ppuStack_48 = &PTR_DAT_110c35158;
  plStack_38 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_40,&ppuStack_48,0,0);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10a99c650; end: 10a99c763;  */

void FUN_10a99c650(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
  long *in_stack_ffffffffffffffb8;
  
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
  FUN_10a99c764(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a96d774(&stack0xffffffffffffffb8,plVar7 + 3);
  FUN_10a13a520(param_1,param_2,&stack0xffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffffb8 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a99c764; end: 10a99c7cb;  */

void FUN_10a99c764(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *in_stack_ffffffffffffff98;
  
  ppuVar6 = param_1;
  func_0x000109898688();
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar6);
    param_2 = ppuVar6;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar7 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = plVar7;
  FUN_10a99c764(plVar7,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a96d8f0(&stack0xffffffffffffff98,plVar9);
  FUN_10a913ce8(extraout_x8,plVar7,&stack0xffffffffffffff98);
  if (in_stack_ffffffffffffff98 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffff98 + 1);
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
        (**(code **)(*in_stack_ffffffffffffff98 + 8))();
      }
    }
  }
  plVar7 = plVar8 + 0x4b;
  lVar10 = plVar8[0x59];
  uVar12 = lVar10 - 1;
  plVar8[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar7[lVar10 + 2];
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar15 = plVar8[0x4c];
  lVar13 = lVar15 - lVar10;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar12) {
    uVar18 = uVar12 - uVar17;
    lVar16 = plVar8[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar12 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar10 >> 3;
        if (uVar11 <= uVar12) {
          uVar11 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar10)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_88 = plVar7;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar10,lVar13);
          *plVar7 = lVar14;
          plVar8[0x4c] = lVar15 + uVar18 * 0x10;
          plVar8[0x4d] = lVar5 + uVar11 * 0x10;
          lStack_a8 = lVar10;
          lStack_a0 = lVar10;
          lStack_98 = lVar10;
          lStack_90 = lVar16;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar15,uVar18 * 0x10);
    plVar8[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar12 < uVar17) {
    lVar10 = lVar10 + uVar12 * 0x10;
    while (lVar15 != lVar10) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar8[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar12;
  return;
}



/* Entry: 10a99c7cc; end: 10a99c8df;  */

void FUN_10a99c7cc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
  long *in_stack_ffffffffffffffb8;
  
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
  FUN_10a99c764(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a96d8f0(&stack0xffffffffffffffb8,plVar7);
  FUN_10a913ce8(param_1,param_2,&stack0xffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffffb8 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a99c8e0; end: 10a99d327;  */

void FUN_10a99c8e0(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,ulong param_5)

{
  long *plVar1;
  undefined8 **ppuVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long **pplVar9;
  undefined **ppuVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *unaff_x28;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  char cStack_118;
  uint auStack_108 [2];
  undefined8 *puStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long **pplStack_c0;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  byte bStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar7[0x59] < 8) {
    plVar7[plVar7[0x59] + 0x4e] = plVar7[0x5a];
    plVar7[0x59] = plVar7[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar7 + 0x4b);
  }
  if ((*(byte *)(plVar7 + 0x3c) & 1) == 0) goto LAB_10a99d214;
  auStack_108[0] = 0;
  puVar3 = auStack_108;
  if (param_5 != 0) {
    puVar3 = param_4;
  }
  ppuVar2 = &puStack_100;
  if (param_5 != 0) {
    ppuVar2 = (undefined8 **)(param_4 + 2);
  }
  if (*puVar3 < 2) {
    bVar5 = false;
    plStack_130 = (long *)((ulong)plStack_130 & 0xffffffffffffff00);
LAB_10a99ccf4:
    puVar3 = auStack_108;
    if (1 < param_5) {
      puVar3 = param_4 + 4;
    }
    cStack_118 = bVar5;
    FUN_10a058028(&plStack_e0,param_2,puVar3);
    puVar8 = (undefined8 *)0x58;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = &PTR_FUN_110c31c58;
    puVar8[4] = 0;
    *puVar8 = &PTR_FUN_110c345c0;
    puVar8[5] = 0;
    puVar17 = puVar8 + 6;
    puVar8[7] = 0;
    *puVar17 = 0;
    puVar19 = puVar8 + 8;
    puVar8[9] = 0;
    *puVar19 = 0;
    puVar8[10] = 0;
    if ((char)plStack_c8 == '\x01') {
      pplVar9 = &plStack_e0;
      FUN_10a96d6a8(pplVar9,&UNK_10f6858de);
      if ((int)pplVar9 != 0) {
        if (((ulong)plStack_c8 & 1) == 0) goto LAB_10a99d214;
        FUN_10a54bf88(&plStack_b0,&plStack_e0,&UNK_10f6858de);
        FUN_10a54c108(&plStack_90,&plStack_b0);
        if (*(char *)((long)puVar8 + 0x57) < '\0') {
          __ZdlPv(*puVar19);
        }
        puVar8[9] = plStack_88;
        *puVar19 = plStack_90;
        puVar8[10] = plStack_80;
        plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff);
        plStack_90 = (long *)((ulong)plStack_90 & 0xffffffffffffff00);
        if ((3 < (int)plStack_a8) && (plStack_a0 != (long *)0x0)) {
          (**(code **)*plStack_a0)();
        }
      }
    }
    plVar16 = plStack_130;
    if ((bVar5) && (plStack_130 != unaff_x28)) {
      lVar12 = 0;
      plVar18 = plStack_130;
      do {
        cVar4 = (char)plVar18[3];
        if (cVar4 == '\x02') {
          uVar13 = (long)*(int *)(*(long *)(*plVar18 + 0x18) + 8);
        }
        else if (cVar4 == '\x01') {
          uVar13 = *(ulong *)(*plVar18 + 8);
        }
        else {
          if (cVar4 != '\0') {
            FUN_10a05bab8(&UNK_10f68728d,lVar12);
            goto LAB_10a99d214;
          }
          uVar13 = plVar18[1];
          if (-1 < (char)*(byte *)((long)plVar18 + 0x17)) {
            uVar13 = (ulong)*(byte *)((long)plVar18 + 0x17);
          }
        }
        lVar12 = uVar13 + lVar12;
        plVar18 = plVar18 + 4;
      } while (plVar18 != unaff_x28);
      plStack_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      plStack_80 = (long *)0x0;
      func_0x000107c31950(&plStack_90);
      do {
        cVar4 = (char)plVar16[3];
        if (cVar4 == '\0') {
          lVar12 = (long)*(char *)((long)plVar16 + 0x17);
          plVar18 = plVar16;
          if (lVar12 < 0) {
            lVar12 = plVar16[1];
            plVar18 = (long *)*plVar16;
          }
        }
        else {
          if (cVar4 == '\x02') {
            plVar18 = (long *)(*plVar16 + 0x18);
          }
          else {
            plVar18 = plVar16;
            if (cVar4 != '\x01') {
              FUN_10a05bab8(&UNK_10f68728d);
              goto LAB_10a99d214;
            }
          }
          lVar12 = ((undefined8 *)*plVar18)[1];
          plVar18 = *(long **)*plVar18;
        }
        FUN_10a107700(&plStack_90,plStack_88,plVar18,(long)plVar18 + lVar12);
        plVar16 = plVar16 + 4;
      } while (plVar16 != unaff_x28);
      ppuVar10 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      FUN_10a12c178(&plStack_b0,*(undefined8 *)(*ppuVar10 + 0x870),&plStack_90);
      func_0x00010a74eb24(puVar17,&plStack_b0);
      plVar16 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar18 = plStack_a8 + 1;
        do {
          lVar12 = *plVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      if (plStack_90 != (long *)0x0) {
        plStack_88 = plStack_90;
        __ZdlPv();
      }
    }
    else {
      ppuVar10 = &PTR___tlv_bootstrap_11340df48;
      (*(code *)PTR___tlv_bootstrap_11340df48)();
      FUN_10a1c3d88(&plStack_90,*(undefined8 *)(*ppuVar10 + 0x870),0);
      func_0x00010a74eb24(puVar17,&plStack_90);
      plVar16 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar18 = plStack_88 + 1;
        do {
          lVar12 = *plVar18;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *plVar18 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
    }
    plVar16 = (long *)plVar7[4];
    if (plVar16 == (long *)0x0) {
      func_0x000109899fd8(plVar7);
      plVar16 = (long *)plVar7[4];
    }
    plVar7[4] = *plVar16;
    *plVar16 = (long)&PTR_DAT_110b17478;
    plVar16[1] = (long)(puVar8 + 3);
    plVar16[2] = (long)puVar8;
    if ((((char)plStack_c8 == '\x01') && (3 < (int)plStack_d8)) && (plStack_d0 != (long *)0x0)) {
      (**(code **)*plStack_d0)();
    }
    if (cStack_118 == '\x01') {
      FUN_10a99d740(&plStack_130);
    }
    if ((3 < (int)auStack_108[0]) && (puStack_100 != (undefined8 *)0x0)) {
      (**(code **)*puStack_100)();
    }
    plVar18 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2);
    (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar16,plVar18,&UNK_10989ba24,param_3);
    *param_1 = 7;
    func_0x00010988c170(plVar7 + 0x4b);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
LAB_10a99d128:
    if (plStack_e0 != (long *)0x0) {
      (**(code **)*plStack_e0)();
    }
  }
  else if (*puVar3 == 7) {
    plVar16 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*ppuVar2);
    plVar18 = param_2;
    plStack_e0 = plVar16;
    (**(code **)(*param_2 + 0x208))(param_2,&plStack_e0);
    if (((ulong)plVar18 & 1) != 0) {
      plStack_e8 = plStack_e0;
      pplVar9 = &plStack_e8;
      plVar16 = param_2;
      (**(code **)(*param_2 + 0x268))();
      plStack_b0 = (long *)0x0;
      plStack_a8 = (long *)0x0;
      plStack_a0 = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        if ((ulong)plVar16 >> 0x3b != 0) {
          FUN_10a99d368();
          goto LAB_10a99d214;
        }
        pplStack_c0 = &plStack_b0;
        plVar11 = plVar16;
        FUN_10a99d37c();
        plVar18 = (long *)((long)plVar11 + ((long)plStack_b0 - (long)plStack_a8));
        plStack_e0 = plVar11;
        plStack_d8 = plVar11;
        plStack_d0 = plVar11;
        plStack_c8 = plVar11 + (long)pplVar9 * 4;
        FUN_10a99d3b0(plStack_b0,plStack_a8,plVar18);
        plStack_d0 = plStack_b0;
        plStack_c8 = plStack_a0;
        plStack_e0 = plStack_b0;
        plStack_d8 = plStack_b0;
        plStack_b0 = plVar18;
        plStack_a8 = plVar11;
        plStack_a0 = plVar11 + (long)pplVar9 * 4;
        func_0x00010a99d474(&plStack_e0);
        plVar18 = (long *)0x0;
        do {
          (**(code **)(*param_2 + 0x288))(&lStack_f8,param_2,&plStack_e8,plVar18);
          if ((int)lStack_f8 == 6) {
            plVar11 = &lStack_f8;
            func_0x000109898570(&plStack_e0,param_2);
            plStack_88 = plStack_d8;
            plStack_90 = plStack_e0;
            plStack_80 = plStack_d0;
            bStack_78 = 0;
          }
          else {
            plVar11 = param_2;
            FUN_10a99d4e8(param_2,(int)lStack_f8,puStack_f0);
            if ((int)plVar11 == 0) {
              plVar11 = param_2;
              FUN_10a99d580(param_2,&lStack_f8);
              if (((ulong)plVar11 & 1) == 0) {
                func_0x00010988bd28(&UNK_10f634795);
                goto LAB_10a99d214;
              }
              plVar11 = param_2;
              FUN_10a99d600(&plStack_e0,param_2,&lStack_f8);
              bStack_78 = 2;
              plStack_90 = plStack_e0;
              plStack_88 = plStack_d8;
            }
            else {
              plVar11 = &lStack_f8;
              FUN_10a13a07c(&plStack_e0,param_2);
              bStack_78 = 1;
              plStack_90 = plStack_e0;
              plStack_88 = plStack_d8;
            }
          }
          plStack_d8 = plStack_88;
          plStack_e0 = plStack_90;
          if (plStack_a8 < plStack_a0) {
            *(undefined1 *)(plStack_a8 + 3) = 3;
            if (bStack_78 == 0) {
              plStack_a8[2] = (long)plStack_80;
              plStack_a8[1] = (long)plStack_88;
              *plStack_a8 = (long)plStack_90;
              plStack_88 = (long *)0x0;
              plStack_80 = (long *)0x0;
              plStack_90 = (long *)0x0;
            }
            else if (bStack_78 < 3) {
              *plStack_a8 = (long)plStack_90;
              plStack_a8[1] = (long)plStack_88;
              plStack_90 = (long *)0x0;
              plStack_88 = (long *)0x0;
            }
            *(byte *)(plStack_a8 + 3) = bStack_78;
            plVar15 = plStack_a8 + 4;
          }
          else {
            lVar12 = (long)plStack_a8 - (long)plStack_b0;
            plVar15 = (long *)((lVar12 >> 5) + 1);
            if ((ulong)plVar15 >> 0x3b != 0) {
              FUN_10a99d368();
              goto LAB_10a99d214;
            }
            plVar14 = (long *)((long)plStack_a0 - (long)plStack_b0 >> 4);
            if (plVar14 <= plVar15) {
              plVar14 = plVar15;
            }
            if (0x7fffffffffffffdf < (ulong)((long)plStack_a0 - (long)plStack_b0)) {
              plVar14 = (long *)0x7ffffffffffffff;
            }
            pplStack_c0 = &plStack_b0;
            if (plVar14 == (long *)0x0) {
              plVar11 = (long *)0x0;
            }
            else {
              FUN_10a99d37c();
            }
            plStack_d8 = (long *)((long)plVar14 + lVar12);
            *(undefined1 *)(plStack_d8 + 3) = 3;
            if (bStack_78 == 0) {
              plStack_d8[2] = (long)plStack_80;
              plStack_d8[1] = (long)plStack_88;
              *plStack_d8 = (long)plStack_90;
              plStack_88 = (long *)0x0;
              plStack_80 = (long *)0x0;
              plStack_90 = (long *)0x0;
            }
            else if (bStack_78 < 3) {
              *plStack_d8 = (long)plStack_90;
              plStack_d8[1] = (long)plStack_88;
              plStack_90 = (long *)0x0;
              plStack_88 = (long *)0x0;
            }
            *(byte *)(plStack_d8 + 3) = bStack_78;
            plVar15 = plStack_d8 + 4;
            plVar1 = (long *)((long)plStack_d8 + ((long)plStack_b0 - (long)plStack_a8));
            plStack_e0 = plVar14;
            plStack_d0 = plVar15;
            plStack_c8 = plVar14 + (long)plVar11 * 4;
            FUN_10a99d3b0(plStack_b0,plStack_a8,plVar1);
            plStack_d0 = plStack_b0;
            plStack_c8 = plStack_a0;
            plStack_e0 = plStack_b0;
            plStack_d8 = plStack_b0;
            plStack_b0 = plVar1;
            plStack_a8 = plVar15;
            plStack_a0 = plVar14 + (long)plVar11 * 4;
            func_0x00010a99d474(&plStack_e0);
          }
          plStack_a8 = plVar15;
          if (3 < (ulong)bStack_78) goto LAB_10a99d214;
          (*(code *)(&PTR_FUN_110c34600)[bStack_78])(&plStack_90);
          if ((3 < (int)lStack_f8) && (puStack_f0 != (undefined8 *)0x0)) {
            (**(code **)*puStack_f0)();
          }
          plVar18 = (long *)((long)plVar18 + 1);
        } while (plVar16 != plVar18);
      }
      if (plStack_e8 != (long *)0x0) {
        (**(code **)*plStack_e8)();
      }
      unaff_x28 = plStack_a8;
      plStack_128 = plStack_a8;
      plStack_130 = plStack_b0;
      plStack_120 = plStack_a0;
      plStack_b0 = (long *)0x0;
      plStack_a8 = (long *)0x0;
      plStack_a0 = (long *)0x0;
      FUN_10a99d740(&plStack_b0);
      bVar5 = true;
      goto LAB_10a99ccf4;
    }
    goto LAB_10a99d128;
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10a99d214:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a99d218);
  (*pcVar6)();
}



/* Entry: 10a99d328; end: 10a99d337;  */

void FUN_10a99d328(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c345c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a99d338; end: 10a99d357;  */

void FUN_10a99d338(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c345c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a99d358; end: 10a99d367;  */

void FUN_10a99d358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a99d360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a99d368; end: 10a99d37b;  */

void FUN_10a99d368(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)&UNK_10f687210;
  FUN_109ffde64();
  if ((ulong)puVar2 >> 0x3b == 0) {
    __Znwm((long)puVar2 << 5);
    return;
  }
  func_0x000109ffded8();
  puVar3 = puVar2;
  if (puVar2 != param_2) {
    do {
      *(undefined1 *)(param_3 + 3) = 3;
      bVar4 = *(byte *)(puVar3 + 3);
      if (bVar4 == 0) {
        uVar6 = puVar3[1];
        uVar5 = *puVar3;
        param_3[2] = puVar3[2];
        param_3[1] = uVar6;
        *param_3 = uVar5;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        bVar4 = *(byte *)(puVar3 + 3);
      }
      else if (bVar4 < 3) {
        *param_3 = *puVar3;
        param_3[1] = puVar3[1];
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      *(byte *)(param_3 + 3) = bVar4;
      puVar3 = puVar3 + 4;
      param_3 = param_3 + 4;
    } while (puVar3 != param_2);
    do {
      if (3 < (ulong)*(byte *)(puVar2 + 3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a99d474);
        (*pcVar1)();
      }
      (*(code *)(&PTR_FUN_110c34600)[*(byte *)(puVar2 + 3)])(puVar2);
      puVar2 = puVar2 + 4;
    } while (puVar2 != param_2);
  }
  return;
}



/* Entry: 10a99d37c; end: 10a99d3af;  */

void FUN_10a99d37c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((ulong)param_1 >> 0x3b == 0) {
    __Znwm((long)param_1 << 5);
    return;
  }
  func_0x000109ffded8();
  puVar2 = param_1;
  if (param_1 != param_2) {
    do {
      *(undefined1 *)(param_3 + 3) = 3;
      bVar3 = *(byte *)(puVar2 + 3);
      if (bVar3 == 0) {
        uVar5 = puVar2[1];
        uVar4 = *puVar2;
        param_3[2] = puVar2[2];
        param_3[1] = uVar5;
        *param_3 = uVar4;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        bVar3 = *(byte *)(puVar2 + 3);
      }
      else if (bVar3 < 3) {
        *param_3 = *puVar2;
        param_3[1] = puVar2[1];
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      *(byte *)(param_3 + 3) = bVar3;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + 4;
    } while (puVar2 != param_2);
    do {
      if (3 < (ulong)*(byte *)(param_1 + 3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a99d474);
        (*pcVar1)();
      }
      (*(code *)(&PTR_FUN_110c34600)[*(byte *)(param_1 + 3)])(param_1);
      param_1 = param_1 + 4;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10a99d3b0; end: 10a99d4e7;  */

void FUN_10a99d3b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    do {
      *(undefined1 *)(param_3 + 3) = 3;
      bVar3 = *(byte *)(puVar2 + 3);
      if (bVar3 == 0) {
        uVar5 = puVar2[1];
        uVar4 = *puVar2;
        param_3[2] = puVar2[2];
        param_3[1] = uVar5;
        *param_3 = uVar4;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        bVar3 = *(byte *)(puVar2 + 3);
      }
      else if (bVar3 < 3) {
        *param_3 = *puVar2;
        param_3[1] = puVar2[1];
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      *(byte *)(param_3 + 3) = bVar3;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + 4;
    } while (puVar2 != param_2);
    do {
      if (3 < (ulong)*(byte *)(param_1 + 3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a99d474);
        (*pcVar1)();
      }
      (*(code *)(&PTR_FUN_110c34600)[*(byte *)(param_1 + 3)])(param_1);
      param_1 = param_1 + 4;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10a99d4e8; end: 10a99d57f;  */

long * FUN_10a99d4e8(long *param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plStack_28;
  
  if (param_2 == 7) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x98))(param_1,param_3);
    plVar2 = param_1;
    plStack_28 = plVar1;
    (**(code **)(*param_1 + 0x58))(param_1);
    func_0x000109899ccc();
    (**(code **)(*param_1 + 0x2e8))(param_1,&plStack_28,plVar2);
    if (plStack_28 != (long *)0x0) {
      (**(code **)*plStack_28)();
    }
  }
  else {
    param_1 = (long *)0x0;
  }
  return param_1;
}



/* Entry: 10a99d580; end: 10a99d5ff;  */

bool FUN_10a99d580(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  func_0x000109898688();
  if (param_1 == 0) {
    bVar4 = false;
  }
  else {
    FUN_10a99d684(&lStack_30,param_1);
    bVar4 = lStack_30 != 0;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return bVar4;
}



/* Entry: 10a99d600; end: 10a99d683;  */

void FUN_10a99d600(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688(param_2,param_3);
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10a99d684(param_1,param_2);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a99d670);
  (*pcVar1)();
}



/* Entry: 10a99d684; end: 10a99d71f;  */

void FUN_10a99d684(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30,param_2);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c35350,0), lStack_30 != 0)) {
    *param_1 = lStack_30;
    param_1[1] = (long)plStack_28;
    param_1 = &lStack_30;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a99d720; end: 10a99d73f;  */

void FUN_10a99d720(undefined8 *param_1)

{
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a99d740; end: 10a99d7c3;  */

void FUN_10a99d740(long *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar4 = param_1[1];
  lVar3 = lVar5;
  if (lVar4 != lVar5) {
    do {
      pbVar1 = (byte *)(lVar4 + -8);
      if (3 < (ulong)*pbVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a99d7c4);
        (*pcVar2)();
      }
      lVar4 = lVar4 + -0x20;
      (*(code *)(&PTR_FUN_110c34600)[*pbVar1])(lVar4);
    } while (lVar4 != lVar5);
    lVar3 = *param_1;
  }
  param_1[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar3);
  return;
}



/* Entry: 10a99d7c4; end: 10a99d883;  */

void FUN_10a99d7c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
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
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a99c764(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)(param_2[3] + 8);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
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
  lVar6 = *plVar1;
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
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
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



/* Entry: 10a99d884; end: 10a99d9c3;  */

void FUN_10a99d884(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
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
  FUN_10a99c764(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)((long)plVar5 + 0x3f) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffffa0,plVar5[5],plVar5[6]);
  }
  else {
    in_stack_ffffffffffffffa8 = plVar5[6];
    in_stack_ffffffffffffffa0 = (undefined1 *)plVar5[5];
    in_stack_ffffffffffffffb0 = plVar5[7];
  }
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
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



/* Entry: 10a99d9c4; end: 10a99d9c7;  */

void FUN_10a99d9c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a99d9c8; end: 10a99d9db;  */

void FUN_10a99d9c8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a99d9dc; end: 10a99d9f3;  */

void FUN_10a99d9dc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a99d9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a99d9f4; end: 10a99da2b;  */

undefined8 FUN_10a99d9f4(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c34680);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a99da2c; end: 10a99da2f;  */

void FUN_10a99da2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a99da30; end: 10a99da87;  */

long FUN_10a99da30(long param_1)

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



/* Entry: 10a99da88; end: 10a99dad7;  */

void FUN_10a99da88(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_10a99dad8();
  plVar2 = plVar1;
  ___cxa_throw(plVar1,PTR___ZTISt11range_error_110352228,PTR___ZNSt11range_errorD1Ev_110346158);
  ___cxa_free_exception(plVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2EPKc();
  *plVar2 = (long)(PTR___ZTVSt11range_error_110346b48 + 0x10);
  return;
}



/* Entry: 10a99dad8; end: 10a99dafb;  */

void FUN_10a99dad8(long *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt11range_error_110346b48 + 0x10);
  return;
}



/* Entry: 10a99dafc; end: 10a99dc47;  */

void FUN_10a99dafc(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
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
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a99dc34);
    (*pcVar1)();
  }
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c34730;
  puVar4[3] = &PTR_FUN_110c332e8;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[6] = puVar4 + 7;
  plVar13 = (long *)plVar3[4];
  if (plVar13 == (long *)0x0) {
    func_0x000109899fd8(plVar3);
    plVar13 = (long *)plVar3[4];
  }
  plVar3[4] = *plVar13;
  *plVar13 = (long)&PTR_DAT_110b17478;
  plVar13[1] = (long)(puVar4 + 3);
  plVar13[2] = (long)puVar4;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar13,plVar5,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar13 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar13[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar13;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar13;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar15 * 0x10);
          lVar10 = lVar11 + uVar14 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar13 = lVar10;
          plVar3[0x4c] = lVar11 + uVar15 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar15 * 0x10);
    plVar3[0x4c] = lVar11 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a99dc48; end: 10a99dcff;  */

void FUN_10a99dc48(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a99dd00(param_1,param_2,FUN_10a96e0e4,0,param_3,param_4,param_5);
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



/* Entry: 10a99dd00; end: 10a99ddfb;  */

void FUN_10a99dd00(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar2 = param_2;
  FUN_10a99ddfc(param_2,param_5);
  FUN_10a43b1c4(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  func_0x000109898570(auStack_80,param_2,param_6 + 0x10);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_68,auStack_80);
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a99ddfc; end: 10a99de63;  */

void FUN_10a99ddfc(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c33330;
      param_4 = 0;
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
  FUN_10a99dd00(extraout_x8,plVar4,FUN_10a96e298,0,param_2,param_3,param_4);
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



/* Entry: 10a99de64; end: 10a99df1b;  */

void FUN_10a99de64(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a99dd00(param_1,param_2,FUN_10a96e298,0,param_3,param_4,param_5);
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



/* Entry: 10a99df1c; end: 10a99e017;  */

void FUN_10a99df1c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a99ddfc(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a96e3e4(plVar4,&stack0xffffffffffffffa8);
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



/* Entry: 10a99e018; end: 10a99e0c7;  */

void FUN_10a99e018(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a99e0c8(param_1,param_2,FUN_10a96e7fc,0,param_3,param_5);
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



/* Entry: 10a99e0c8; end: 10a99e187;  */

void FUN_10a99e0c8(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_48;
  
  lVar1 = param_2;
  FUN_10a99e188(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar1 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(&lStack_60);
  func_0x00010989a420(param_1,param_2,lStack_60,(lStack_58 - lStack_60 >> 3) * -0x5555555555555555);
  puStack_48 = (undefined1 *)&lStack_60;
  FUN_10a0426d8(&puStack_48);
  return;
}



/* Entry: 10a99e188; end: 10a99e1ef;  */

void FUN_10a99e188(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
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
      param_4 = 0;
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
  FUN_10a99e0c8(extraout_x8,plVar4,FUN_10a96e8b0,0,param_2,param_4);
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



/* Entry: 10a99e1f0; end: 10a99e29f;  */

void FUN_10a99e1f0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a99e0c8(param_1,param_2,FUN_10a96e8b0,0,param_3,param_5);
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



/* Entry: 10a99e2a0; end: 10a99e497;  */

void FUN_10a99e2a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 *in_stack_ffffffffffffffa0;
  
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
  FUN_10a99e188(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a96e964(&lStack_88,plVar4);
  lVar8 = (lStack_80 - lStack_88 >> 3) * -0x5555555555555555;
  (**(code **)(*param_2 + 600))(&plStack_68,param_2,lVar8);
  plVar4 = plStack_68;
  if (lStack_80 != lStack_88) {
    lVar10 = 0;
    plVar12 = (long *)(lStack_88 + 8);
    do {
      func_0x00010989a420(&plStack_68,param_2,plVar12[-1],
                          (*plVar12 - plVar12[-1] >> 3) * -0x5555555555555555);
      (**(code **)(*param_2 + 0x290))(param_2,&stack0xffffffffffffffa8,lVar10,&plStack_68);
      if ((3 < (int)plStack_68) && (in_stack_ffffffffffffffa0 != (undefined8 *)0x0)) {
        (**(code **)*in_stack_ffffffffffffffa0)();
      }
      plVar12 = plVar12 + 3;
      lVar10 = lVar10 + 1;
    } while (lVar8 - lVar10 != 0);
  }
  *param_1 = 7;
  *(long **)(param_1 + 2) = plVar4;
  plStack_68 = &lStack_88;
  func_0x00010a0d494c(&plStack_68);
  plVar4 = plVar3 + 0x4b;
  lVar8 = plVar3[0x59];
  uVar5 = lVar8 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar4[lVar8 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar7 = lVar10 - lVar8;
  uVar13 = lVar7 >> 4;
  if (uVar13 < uVar5) {
    uVar14 = uVar5 - uVar13;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar14) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar11 - lVar8 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar8)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar6 >> 0x3c == 0) {
          lVar2 = uVar6 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar7;
          _bzero(lVar10,uVar14 * 0x10);
          lVar9 = lVar10 + uVar13 * -0x10;
          _memcpy(lVar9,lVar8,lVar7);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar6 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
    _bzero(lVar10,uVar14 * 0x10);
    plVar3[0x4c] = lVar10 + uVar14 * 0x10;
  }
  else if (uVar5 < uVar13) {
    lVar8 = lVar8 + uVar5 * 0x10;
    while (lVar10 != lVar8) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a99e498; end: 10a99e5f7;  */

void FUN_10a99e498(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 **ppuVar1;
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
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  long *plStack_68;
  ulong in_stack_ffffffffffffffa0;
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
  FUN_10a99e188(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a96e56c(&puStack_70,plVar5,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  plVar5 = plStack_68;
  ppuVar1 = (undefined1 **)puStack_70;
  if (-1 < (long)in_stack_ffffffffffffffa0) {
    plVar5 = (long *)(in_stack_ffffffffffffffa0 >> 0x38);
    ppuVar1 = &puStack_70;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffa8,param_2,ppuVar1,plVar5);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffa8;
  if ((long)in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(puStack_70);
  }
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
    puVar12 = (undefined1 *)plVar4[0x4d];
    if ((ulong)((long)puVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = (long)puVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar12 - lVar6)) {
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
          puStack_70 = puVar12;
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



/* Entry: 10a99e5f8; end: 10a99e6ff;  */

void FUN_10a99e5f8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a99e188(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a96e6d8(plVar4,&stack0xffffffffffffffa8);
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar4;
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



/* Entry: 10a99e700; end: 10a99e77b;  */

long * FUN_10a99e700(long param_1,undefined8 param_2)

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



/* Entry: 10a99e77c; end: 10a99e7d3;  */

long FUN_10a99e77c(long param_1)

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



/* Entry: 10a99e7d4; end: 10a99eaf7;  */

void FUN_10a99e7d4(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,ulong param_5)

{
  int *piVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uStack_b8;
  int iStack_b0;
  undefined8 *puStack_a8;
  char cStack_a0;
  undefined8 auStack_98 [2];
  char cStack_81;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  ulong uStack_70;
  int iStack_68;
  undefined8 *puStack_60;
  char cStack_58;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  if ((*(byte *)(plVar3 + 0x3c) & 1) != 0) {
    aiStack_80[0] = 0;
    piVar1 = aiStack_80;
    if (param_5 != 0) {
      piVar1 = param_4;
    }
    func_0x000109898570(auStack_98,param_2,piVar1);
    piVar1 = aiStack_80;
    if (1 < param_5) {
      piVar1 = param_4 + 4;
    }
    FUN_10a058028(&uStack_b8,param_2,piVar1);
    puVar4 = (undefined8 *)0xb0;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_110b9f1b0;
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    cStack_58 = '\0';
    if (cStack_a0 == '\x01') {
      uStack_70 = uStack_b8;
      iStack_68 = iStack_b0;
      if (iStack_b0 == 3) {
        puStack_60 = puStack_a8;
      }
      else if (iStack_b0 == 2) {
        puStack_60 = (undefined8 *)CONCAT71(puStack_60._1_7_,puStack_a8._0_1_);
      }
      else if (3 < iStack_b0) {
        puStack_60 = puStack_a8;
        puStack_a8 = (undefined8 *)0x0;
      }
      iStack_b0 = 0;
      cStack_58 = '\x01';
    }
    FUN_10a96f370(puVar4 + 3,auStack_98,&uStack_70);
    if (((cStack_58 == '\x01') && (3 < iStack_68)) && (puStack_60 != (undefined8 *)0x0)) {
      (**(code **)*puStack_60)();
    }
    plVar6 = (long *)plVar3[4];
    if (plVar6 == (long *)0x0) {
      func_0x000109899fd8(plVar3);
      plVar6 = (long *)plVar3[4];
    }
    plVar3[4] = *plVar6;
    *plVar6 = (long)&PTR_DAT_110b17478;
    plVar6[1] = (long)(puVar4 + 0xc);
    plVar6[2] = (long)puVar4;
    if (((cStack_a0 == '\x01') && (3 < iStack_b0)) && (puStack_a8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_a8)();
    }
    if (cStack_81 < '\0') {
      __ZdlPv(auStack_98[0]);
    }
    if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
      (**(code **)*puStack_78)();
    }
    plVar5 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2);
    (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar6,plVar5,&UNK_10989ba24,param_3);
    *param_1 = 7;
    func_0x00010988c170(plVar3 + 0x4b);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a99ea38);
  (*pcVar2)();
}



/* Entry: 10a99eaf8; end: 10a99ec0b;  */

void FUN_10a99eaf8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
  long *in_stack_ffffffffffffffb8;
  
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
  FUN_10a99ec0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a96fcb4(&stack0xffffffffffffffb8,plVar7);
  FUN_10a913ce8(param_1,param_2,&stack0xffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffffb8 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a99ec0c; end: 10a99ec73;  */

void FUN_10a99ec0c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *in_stack_ffffffffffffff98;
  
  ppuVar6 = param_1;
  func_0x000109898688();
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar6);
    param_2 = ppuVar6;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x48;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar7 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = plVar7;
  FUN_10a99ec0c(plVar7,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a96fd8c(&stack0xffffffffffffff98,plVar9);
  FUN_10a13a520(extraout_x8,plVar7,&stack0xffffffffffffff98);
  if (in_stack_ffffffffffffff98 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffff98 + 1);
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
        (**(code **)(*in_stack_ffffffffffffff98 + 8))();
      }
    }
  }
  plVar7 = plVar8 + 0x4b;
  lVar10 = plVar8[0x59];
  uVar12 = lVar10 - 1;
  plVar8[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar7[lVar10 + 2];
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar15 = plVar8[0x4c];
  lVar13 = lVar15 - lVar10;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar12) {
    uVar18 = uVar12 - uVar17;
    lVar16 = plVar8[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar12 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar10 >> 3;
        if (uVar11 <= uVar12) {
          uVar11 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar10)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_88 = plVar7;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar10,lVar13);
          *plVar7 = lVar14;
          plVar8[0x4c] = lVar15 + uVar18 * 0x10;
          plVar8[0x4d] = lVar5 + uVar11 * 0x10;
          lStack_a8 = lVar10;
          lStack_a0 = lVar10;
          lStack_98 = lVar10;
          lStack_90 = lVar16;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar15,uVar18 * 0x10);
    plVar8[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar12 < uVar17) {
    lVar10 = lVar10 + uVar12 * 0x10;
    while (lVar15 != lVar10) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar8[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar12;
  return;
}



/* Entry: 10a99ec74; end: 10a99ed87;  */

void FUN_10a99ec74(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
  long *in_stack_ffffffffffffffb8;
  
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
  FUN_10a99ec0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a96fd8c(&stack0xffffffffffffffb8,plVar7);
  FUN_10a13a520(param_1,param_2,&stack0xffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffffb8 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a99ed88; end: 10a99ee9b;  */

void FUN_10a99ed88(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
  long *in_stack_ffffffffffffffb8;
  
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
  FUN_10a99ec0c(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a96ff3c(&stack0xffffffffffffffb8,plVar7);
  FUN_10a99ee9c(param_1,param_2,&stack0xffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffffb8 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a99ee9c; end: 10a99ef77;  */

void FUN_10a99ee9c(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  puStack_40 = param_3;
  plStack_38 = param_2;
  FUN_10a99ef78(&puStack_28,param_2,&puStack_40);
  aiStack_30[0] = 7;
  (**(code **)(*param_2 + 0x30))(&puStack_48,param_2);
  func_0x0001098843c0(&puStack_40,&puStack_48,param_2,&UNK_10f634758);
  (**(code **)(*param_2 + 0x2b0))(param_1,param_2,&puStack_40,aiStack_30,1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_48 != (undefined8 *)0x0) {
    (**(code **)*puStack_48)();
  }
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a99ef78; end: 10a99f08b;  */

void FUN_10a99ef78(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined4 *extraout_x8;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *unaff_x26;
  int aiStack_168 [2];
  undefined8 *puStack_160;
  undefined8 uStack_158;
  int iStack_150;
  undefined8 *puStack_148;
  int aiStack_140 [2];
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int iStack_108;
  undefined4 uStack_104;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  int iStack_f0;
  undefined8 *puStack_e8;
  long lStack_d8;
  undefined8 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  iVar10 = (int)&puStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0xb0))(&puStack_80,param_2,0,0);
  pcStack_78 = FUN_10a99f08c;
  ppuStack_70 = &PTR_FUN_110c34708;
  uStack_60 = param_3[1];
  uStack_68 = *param_3;
  lVar11 = 2;
  (**(code **)(*param_2 + 0x2a0))(param_1,param_2,&puStack_80,2,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  puVar7 = puStack_80;
  if (puStack_80 != (undefined8 *)0x0) {
    (**(code **)*puStack_80)();
    puVar7 = puStack_80;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar10 == 0) {
    __Unwind_Resume(puVar7);
  }
  else {
    (*(code *)*ppuStack_70)(&ppuStack_70);
  }
  func_0x000104bd46a0(puVar7);
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = *(long **)(param_5 + 0x10);
  plVar14 = *(long **)(param_5 + 0x18);
  (**(code **)(*plVar14 + 0x58))();
  lVar16 = plVar14[0x47];
  uVar13 = *(undefined8 *)(param_5 + 0x18);
  func_0x0001098849a4(aiStack_140,uVar13,lVar11);
  puVar7 = puStack_138;
  iVar10 = aiStack_140[0];
  if (aiStack_140[0] == 3) {
    puStack_130 = puStack_138;
    unaff_x26 = puVar7;
  }
  else if (aiStack_140[0] == 2) {
    puStack_130 = (undefined8 *)CONCAT71(puStack_130._1_7_,puStack_138._0_1_);
    unaff_x26 = (undefined8 *)((ulong)puStack_138 & 0xff);
  }
  else if (3 < aiStack_140[0]) {
    puStack_138 = (undefined8 *)0x0;
    puStack_130 = puVar7;
    unaff_x26 = puVar7;
  }
  aiStack_140[0] = 0;
  uVar15 = *(undefined8 *)(param_5 + 0x18);
  func_0x0001098849a4(aiStack_168,uVar15,lVar11 + 0x10);
  iVar5 = aiStack_168[0];
  iStack_150 = aiStack_168[0];
  if (aiStack_168[0] == 3) {
    puStack_148 = puStack_160;
  }
  else if (aiStack_168[0] == 2) {
    puStack_148 = (undefined8 *)CONCAT71(puStack_148._1_7_,puStack_160._0_1_);
  }
  else if (3 < aiStack_168[0]) {
    puStack_148 = puStack_160;
    puStack_160 = (undefined8 *)0x0;
  }
  aiStack_168[0] = 0;
  uStack_158 = uVar15;
  if (*plVar9 == 0) {
    FUN_10a99fb50(&uStack_110,uVar15,&UNK_10f634760,0x34);
    FUN_10a05589c(&uStack_158,&uStack_110);
    if ((3 < (int)uStack_110) &&
       ((undefined8 *)CONCAT44(uStack_104,iStack_108) != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)CONCAT44(uStack_104,iStack_108))();
    }
    plVar14 = (long *)(ulong)(3 < iVar10);
LAB_10a99f794:
    if ((3 < iStack_150) && (puStack_148 != (undefined8 *)0x0)) {
      (**(code **)*puStack_148)();
    }
    if ((3 < aiStack_168[0]) && (puStack_160 != (undefined8 *)0x0)) {
      (**(code **)*puStack_160)();
    }
    if (((int)plVar14 != 0) && (puStack_130 != (undefined8 *)0x0)) {
      (**(code **)*puStack_130)();
    }
    if ((3 < aiStack_140[0]) && (puStack_138 != (undefined8 *)0x0)) {
      (**(code **)*puStack_138)();
    }
    *extraout_x8 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    iStack_108 = iVar10;
    if (iVar10 == 3) {
      puStack_100 = puStack_130;
    }
    else if (iVar10 == 2) {
      puStack_100 = (undefined8 *)CONCAT71(puStack_100._1_7_,(char)unaff_x26);
    }
    else if (3 < iVar10) {
      puStack_100 = puStack_130;
      puStack_130 = (undefined8 *)0x0;
    }
    iStack_f0 = iVar5;
    if (iVar5 == 3) {
      puStack_e8 = puStack_148;
    }
    else if (iVar5 == 2) {
      puStack_e8 = (undefined8 *)CONCAT71(puStack_e8._1_7_,puStack_148._0_1_);
    }
    else if (3 < iVar5) {
      puStack_e8 = puStack_148;
      puStack_148 = (undefined8 *)0x0;
    }
    iStack_150 = 0;
    uStack_110 = uVar13;
    uStack_f8 = uVar15;
    if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) == 0) {
      puVar7 = (undefined8 *)0xe8;
      __Znwm();
      *puVar7 = FUN_10a9bc1f8;
      puVar7[1] = FUN_10a9bc658;
      func_0x0001092ba17c(puVar7 + 2);
      plVar14 = (long *)puVar7[7];
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar7[9] = *plVar9;
      *plVar9 = 0;
      puVar7[10] = uStack_110;
      *(int *)(puVar7 + 0xb) = iStack_108;
      if (iStack_108 == 3) {
        puVar7[0xc] = puStack_100;
      }
      else if (iStack_108 == 2) {
        *(undefined1 *)(puVar7 + 0xc) = puStack_100._0_1_;
      }
      else if (3 < iStack_108) {
        puVar7[0xc] = puStack_100;
        puStack_100 = (undefined8 *)0x0;
      }
      iStack_108 = 0;
      puVar7[0xd] = uStack_f8;
      *(int *)(puVar7 + 0xe) = iStack_f0;
      if (iStack_f0 == 3) {
        puVar7[0xf] = puStack_e8;
      }
      else if (iStack_f0 == 2) {
        *(undefined1 *)(puVar7 + 0xf) = puStack_e8._0_1_;
      }
      else if (3 < iStack_f0) {
        puVar7[0xf] = puStack_e8;
        puStack_e8 = (undefined8 *)0x0;
      }
      iStack_f0 = 0;
      puVar7[0x18] = lVar16;
      *(undefined1 *)(puVar7 + 0x19) = 0;
      *(undefined1 *)(puVar7 + 0x1c) = 0;
      puVar8 = puVar7 + 0x18;
      func_0x0001092ba064(puVar8,puVar7);
      if (((ulong)puVar8 & 1) == 0) {
        puVar7[0x1b] = puVar7[9];
        puVar7[9] = 0;
        puVar7[0x11] = puVar7[10];
        iVar10 = *(int *)(puVar7 + 0xb);
        *(int *)(puVar7 + 0x12) = iVar10;
        if (iVar10 == 3) {
          puVar7[0x13] = puVar7[0xc];
        }
        else if (iVar10 == 2) {
          *(undefined1 *)(puVar7 + 0x13) = *(undefined1 *)(puVar7 + 0xc);
        }
        else if (3 < iVar10) {
          puVar7[0x13] = puVar7[0xc];
          puVar7[0xc] = 0;
        }
        *(undefined4 *)(puVar7 + 0xb) = 0;
        puVar7[0x14] = puVar7[0xd];
        iVar10 = *(int *)(puVar7 + 0xe);
        *(int *)(puVar7 + 0x15) = iVar10;
        if (iVar10 == 3) {
          puVar7[0x16] = puVar7[0xf];
        }
        else if (iVar10 == 2) {
          *(undefined1 *)(puVar7 + 0x16) = *(undefined1 *)(puVar7 + 0xf);
        }
        else if (3 < iVar10) {
          puVar7[0x16] = puVar7[0xf];
          puVar7[0xf] = 0;
        }
        *(undefined4 *)(puVar7 + 0xe) = 0;
        FUN_10a99ffd0(puVar7 + 0x1a,puVar7 + 0x1b,puVar7 + 0x11);
        puVar7[0x18] = puVar7[0x1a];
        plVar9 = (long *)(puVar7[0x1a] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar7 + 0x1c) = 1;
          lVar11 = puVar7[0x18];
          plVar9 = (long *)(lVar11 + 0x10);
          uVar13 = puVar7[3];
          do {
            lVar16 = *plVar9;
            if (lVar16 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                uStack_128 = 0;
                puStack_120 = puVar7;
                uStack_118 = uVar13;
                func_0x000109d1b588(lVar11 + 0x18,&uStack_128);
                *(undefined8 *)(lVar11 + 0x10) = 0;
                if (plVar14 == (long *)0x0) goto LAB_10a99f750;
                goto LAB_10a99f70c;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar16 >> 1 & 1) == 0);
        }
        plVar9 = (long *)puVar7[0x18];
        if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar9 + 0x12);
          goto LAB_10a99f8d8;
        }
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        plVar9 = (long *)puVar7[0x1a];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        if ((3 < *(int *)(puVar7 + 0x15)) && ((undefined8 *)puVar7[0x16] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0x16])();
        }
        if ((3 < *(int *)(puVar7 + 0x12)) && ((undefined8 *)puVar7[0x13] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0x13])();
        }
        plVar9 = (long *)puVar7[0x1b];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar7 + 2);
        if ((3 < *(int *)(puVar7 + 0xe)) && ((undefined8 *)puVar7[0xf] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0xf])();
        }
        if ((3 < *(int *)(puVar7 + 0xb)) && ((undefined8 *)puVar7[0xc] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0xc])();
        }
        plVar9 = (long *)puVar7[9];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar7 + 2);
        __ZdlPv(puVar7);
      }
      if (plVar14 != (long *)0x0) {
LAB_10a99f70c:
        puVar2 = (ulong *)(plVar14 + 1);
        do {
          uVar12 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar2 - 1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_10a99f73c;
        }
      }
LAB_10a99f750:
      if ((3 < iStack_f0) && (puStack_e8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_e8)();
      }
      if ((3 < iStack_108) && (puStack_100 != (undefined8 *)0x0)) {
        (**(code **)*puStack_100)();
      }
      plVar14 = (long *)0x0;
      goto LAB_10a99f794;
    }
    plVar14 = (long *)*plVar9;
    *plVar9 = 0;
    if (((uint)plVar14[2] >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_128,plVar14 + 0x12);
      FUN_10a99fe7c(&uStack_f8,&uStack_128);
      __ZNSt13exception_ptrD1Ev(&uStack_128);
LAB_10a99f358:
      puVar2 = (ulong *)(plVar14 + 1);
      do {
        uVar12 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar12 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar2 - 1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_10a99f73c:
        if (uVar12 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      goto LAB_10a99f750;
    }
    if ((((uint)plVar14[2] >> 1 & 1) != 0) && (((uint)plVar14[2] >> 5 & 1) == 0)) {
      if ((*(byte *)(plVar14 + 0x15) & 1) == 0) goto LAB_10a99f8d8;
      FUN_10a99fce4(&uStack_110,plVar14 + 0x13);
      goto LAB_10a99f358;
    }
  }
  if (((uint)plVar14[2] >> 5 & 1) == 0) {
    puVar7 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar7 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar7,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_128,plVar14 + 0x12);
    func_0x0001092af97c(&uStack_128);
  }
LAB_10a99f8d8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a99f8dc);
  (*pcVar6)();
}



/* Entry: 10a99f08c; end: 10a99fb4f;  */

void FUN_10a99f08c(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *unaff_x26;
  int aiStack_e8 [2];
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined8 *puStack_c8;
  int aiStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 *puStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = *(long **)(param_6 + 0x10);
  plVar14 = *(long **)(param_6 + 0x18);
  (**(code **)(*plVar14 + 0x58))();
  lVar16 = plVar14[0x47];
  uVar13 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_c0,uVar13,param_4);
  puVar8 = puStack_b8;
  iVar3 = aiStack_c0[0];
  if (aiStack_c0[0] == 3) {
    puStack_b0 = puStack_b8;
    unaff_x26 = puVar8;
  }
  else if (aiStack_c0[0] == 2) {
    puStack_b0 = (undefined8 *)CONCAT71(puStack_b0._1_7_,puStack_b8._0_1_);
    unaff_x26 = (undefined8 *)((ulong)puStack_b8 & 0xff);
  }
  else if (3 < aiStack_c0[0]) {
    puStack_b8 = (undefined8 *)0x0;
    puStack_b0 = puVar8;
    unaff_x26 = puVar8;
  }
  aiStack_c0[0] = 0;
  uVar15 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_e8,uVar15,param_4 + 0x10);
  iVar6 = aiStack_e8[0];
  iStack_d0 = aiStack_e8[0];
  if (aiStack_e8[0] == 3) {
    puStack_c8 = puStack_e0;
  }
  else if (aiStack_e8[0] == 2) {
    puStack_c8 = (undefined8 *)CONCAT71(puStack_c8._1_7_,puStack_e0._0_1_);
  }
  else if (3 < aiStack_e8[0]) {
    puStack_c8 = puStack_e0;
    puStack_e0 = (undefined8 *)0x0;
  }
  aiStack_e8[0] = 0;
  uStack_d8 = uVar15;
  if (*plVar10 == 0) {
    FUN_10a99fb50(&uStack_90,uVar15,&UNK_10f634760,0x34);
    FUN_10a05589c(&uStack_d8,&uStack_90);
    if ((3 < (int)uStack_90) && ((undefined8 *)CONCAT44(uStack_84,iStack_88) != (undefined8 *)0x0))
    {
      (*(code *)**(undefined8 **)CONCAT44(uStack_84,iStack_88))();
    }
    plVar14 = (long *)(ulong)(3 < iVar3);
LAB_10a99f794:
    if ((3 < iStack_d0) && (puStack_c8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_c8)();
    }
    if ((3 < aiStack_e8[0]) && (puStack_e0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_e0)();
    }
    if (((int)plVar14 != 0) && (puStack_b0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_b0)();
    }
    if ((3 < aiStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_b8)();
    }
    *param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    iStack_88 = iVar3;
    if (iVar3 == 3) {
      puStack_80 = puStack_b0;
    }
    else if (iVar3 == 2) {
      puStack_80 = (undefined8 *)CONCAT71(puStack_80._1_7_,(char)unaff_x26);
    }
    else if (3 < iVar3) {
      puStack_80 = puStack_b0;
      puStack_b0 = (undefined8 *)0x0;
    }
    iStack_70 = iVar6;
    if (iVar6 == 3) {
      puStack_68 = puStack_c8;
    }
    else if (iVar6 == 2) {
      puStack_68 = (undefined8 *)CONCAT71(puStack_68._1_7_,puStack_c8._0_1_);
    }
    else if (3 < iVar6) {
      puStack_68 = puStack_c8;
      puStack_c8 = (undefined8 *)0x0;
    }
    iStack_d0 = 0;
    uStack_90 = uVar13;
    uStack_78 = uVar15;
    if (((uint)*(undefined8 *)(*plVar10 + 0x10) >> 1 & 1) == 0) {
      puVar8 = (undefined8 *)0xe8;
      __Znwm();
      *puVar8 = FUN_10a9bc1f8;
      puVar8[1] = FUN_10a9bc658;
      func_0x0001092ba17c(puVar8 + 2);
      plVar14 = (long *)puVar8[7];
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar8[9] = *plVar10;
      *plVar10 = 0;
      puVar8[10] = uStack_90;
      *(int *)(puVar8 + 0xb) = iStack_88;
      if (iStack_88 == 3) {
        puVar8[0xc] = puStack_80;
      }
      else if (iStack_88 == 2) {
        *(undefined1 *)(puVar8 + 0xc) = puStack_80._0_1_;
      }
      else if (3 < iStack_88) {
        puVar8[0xc] = puStack_80;
        puStack_80 = (undefined8 *)0x0;
      }
      iStack_88 = 0;
      puVar8[0xd] = uStack_78;
      *(int *)(puVar8 + 0xe) = iStack_70;
      if (iStack_70 == 3) {
        puVar8[0xf] = puStack_68;
      }
      else if (iStack_70 == 2) {
        *(undefined1 *)(puVar8 + 0xf) = puStack_68._0_1_;
      }
      else if (3 < iStack_70) {
        puVar8[0xf] = puStack_68;
        puStack_68 = (undefined8 *)0x0;
      }
      iStack_70 = 0;
      puVar8[0x18] = lVar16;
      *(undefined1 *)(puVar8 + 0x19) = 0;
      *(undefined1 *)(puVar8 + 0x1c) = 0;
      puVar9 = puVar8 + 0x18;
      func_0x0001092ba064(puVar9,puVar8);
      if (((ulong)puVar9 & 1) == 0) {
        puVar8[0x1b] = puVar8[9];
        puVar8[9] = 0;
        puVar8[0x11] = puVar8[10];
        iVar3 = *(int *)(puVar8 + 0xb);
        *(int *)(puVar8 + 0x12) = iVar3;
        if (iVar3 == 3) {
          puVar8[0x13] = puVar8[0xc];
        }
        else if (iVar3 == 2) {
          *(undefined1 *)(puVar8 + 0x13) = *(undefined1 *)(puVar8 + 0xc);
        }
        else if (3 < iVar3) {
          puVar8[0x13] = puVar8[0xc];
          puVar8[0xc] = 0;
        }
        *(undefined4 *)(puVar8 + 0xb) = 0;
        puVar8[0x14] = puVar8[0xd];
        iVar3 = *(int *)(puVar8 + 0xe);
        *(int *)(puVar8 + 0x15) = iVar3;
        if (iVar3 == 3) {
          puVar8[0x16] = puVar8[0xf];
        }
        else if (iVar3 == 2) {
          *(undefined1 *)(puVar8 + 0x16) = *(undefined1 *)(puVar8 + 0xf);
        }
        else if (3 < iVar3) {
          puVar8[0x16] = puVar8[0xf];
          puVar8[0xf] = 0;
        }
        *(undefined4 *)(puVar8 + 0xe) = 0;
        FUN_10a99ffd0(puVar8 + 0x1a,puVar8 + 0x1b,puVar8 + 0x11);
        puVar8[0x18] = puVar8[0x1a];
        plVar10 = (long *)(puVar8[0x1a] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar8 + 0x1c) = 1;
          lVar16 = puVar8[0x18];
          plVar10 = (long *)(lVar16 + 0x10);
          uVar13 = puVar8[3];
          do {
            lVar12 = *plVar10;
            if (lVar12 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                uStack_a8 = 0;
                puStack_a0 = puVar8;
                uStack_98 = uVar13;
                func_0x000109d1b588(lVar16 + 0x18,&uStack_a8);
                *(undefined8 *)(lVar16 + 0x10) = 0;
                if (plVar14 == (long *)0x0) goto LAB_10a99f750;
                goto LAB_10a99f70c;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar12 >> 1 & 1) == 0);
        }
        plVar10 = (long *)puVar8[0x18];
        if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar10 + 0x12);
          goto LAB_10a99f8d8;
        }
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        plVar10 = (long *)puVar8[0x1a];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        if ((3 < *(int *)(puVar8 + 0x15)) && ((undefined8 *)puVar8[0x16] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0x16])();
        }
        if ((3 < *(int *)(puVar8 + 0x12)) && ((undefined8 *)puVar8[0x13] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0x13])();
        }
        plVar10 = (long *)puVar8[0x1b];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar8 + 2);
        if ((3 < *(int *)(puVar8 + 0xe)) && ((undefined8 *)puVar8[0xf] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0xf])();
        }
        if ((3 < *(int *)(puVar8 + 0xb)) && ((undefined8 *)puVar8[0xc] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0xc])();
        }
        plVar10 = (long *)puVar8[9];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar8 + 2);
        __ZdlPv(puVar8);
      }
      if (plVar14 != (long *)0x0) {
LAB_10a99f70c:
        puVar2 = (ulong *)(plVar14 + 1);
        do {
          uVar11 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar2 - 1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10a99f73c;
        }
      }
LAB_10a99f750:
      if ((3 < iStack_70) && (puStack_68 != (undefined8 *)0x0)) {
        (**(code **)*puStack_68)();
      }
      if ((3 < iStack_88) && (puStack_80 != (undefined8 *)0x0)) {
        (**(code **)*puStack_80)();
      }
      plVar14 = (long *)0x0;
      goto LAB_10a99f794;
    }
    plVar14 = (long *)*plVar10;
    *plVar10 = 0;
    if (((uint)plVar14[2] >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_a8,plVar14 + 0x12);
      FUN_10a99fe7c(&uStack_78,&uStack_a8);
      __ZNSt13exception_ptrD1Ev(&uStack_a8);
LAB_10a99f358:
      puVar2 = (ulong *)(plVar14 + 1);
      do {
        uVar11 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar2 - 1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_10a99f73c:
        if (uVar11 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      goto LAB_10a99f750;
    }
    if ((((uint)plVar14[2] >> 1 & 1) != 0) && (((uint)plVar14[2] >> 5 & 1) == 0)) {
      if ((*(byte *)(plVar14 + 0x15) & 1) == 0) goto LAB_10a99f8d8;
      FUN_10a99fce4(&uStack_90,plVar14 + 0x13);
      goto LAB_10a99f358;
    }
  }
  if (((uint)plVar14[2] >> 5 & 1) == 0) {
    puVar8 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar8 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar8,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_a8,plVar14 + 0x12);
    func_0x0001092af97c(&uStack_a8);
  }
LAB_10a99f8d8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a99f8dc);
  (*pcVar7)();
}



/* Entry: 10a99fb50; end: 10a99fc83;  */

void FUN_10a99fb50(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puStack_68;
  long *plStack_60;
  int iStack_58;
  undefined8 *puStack_50;
  undefined1 auStack_48 [8];
  int iStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  (**(code **)(*param_2 + 0x30))(&puStack_68,param_2);
  puStack_50 = puStack_68;
  puStack_68 = (undefined8 *)0x0;
  iStack_58 = 7;
  plStack_60 = param_2;
  FUN_10a055e1c(auStack_48,&plStack_60,&DAT_10f685520);
  FUN_10a055f9c(param_1,auStack_48,&uStack_30);
  if ((3 < iStack_40) && (puStack_38 != (undefined8 *)0x0)) {
    (**(code **)*puStack_38)();
  }
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a99fc84; end: 10a99fce3;  */

long FUN_10a99fc84(long param_1)

{
  if ((3 < *(int *)(param_1 + 0x20)) && (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x28))();
  }
  if ((3 < *(int *)(param_1 + 8)) && (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x10))();
  }
  return param_1;
}



/* Entry: 10a99fce4; end: 10a99fe7b;  */

void FUN_10a99fce4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  FUN_10a49049c(aiStack_70,plVar1,*param_2,param_2[1]);
  uStack_38 = 1;
  piStack_40 = aiStack_70;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a99fe7c; end: 10a99ffcf;  */

void FUN_10a99fe7c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001092af97c(param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a99fea4);
  (*pcVar1)();
}



/* Entry: 10a99ffd0; end: 10a9a0563;  */

void FUN_10a99ffd0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  *puVar6 = FUN_10a9bbbf4;
  puVar6[1] = FUN_10a9bc000;
  uVar9 = *param_2;
  *param_2 = 0;
  puVar6[9] = *param_3;
  puVar6[0x10] = uVar9;
  iVar2 = *(int *)(param_3 + 1);
  *(int *)(puVar6 + 10) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xb] = param_3[2];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xb) = *(undefined1 *)(param_3 + 2);
  }
  else if (3 < iVar2) {
    puVar6[0xb] = param_3[2];
    param_3[2] = 0;
  }
  *(undefined4 *)(param_3 + 1) = 0;
  puVar6[0xc] = param_3[3];
  iVar2 = *(int *)(param_3 + 4);
  *(int *)(puVar6 + 0xd) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xe] = param_3[5];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xe) = *(undefined1 *)(param_3 + 5);
  }
  else if (3 < iVar2) {
    puVar6[0xe] = param_3[5];
    param_3[5] = 0;
  }
  *(undefined4 *)(param_3 + 4) = 0;
  func_0x0001092ba17c(puVar6 + 2);
  lVar10 = puVar6[7];
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar10;
  puVar6[0x12] = 0;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  puVar7 = puVar6 + 0x12;
  FUN_10a057268(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    puVar6[0x11] = puVar6[0x12];
    FUN_10a9a060c(puVar6 + 0x13,puVar6 + 0x11,puVar6[0x10]);
    puVar6[0x12] = puVar6[0x13];
    plVar8 = (long *)(puVar6[0x13] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x12] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x15) = 1;
      lVar10 = puVar6[0x12];
      plVar8 = (long *)(lVar10 + 0x10);
      uStack_48 = puVar6[3];
      do {
        lVar12 = *plVar8;
        if (lVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_58 = 0;
            puStack_50 = puVar6;
            func_0x000109d1b588(lVar10 + 0x18,&uStack_58);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x12];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = (long *)puVar6[0x13];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 1 & 1) == 0) {
      lVar10 = puVar6[0x10];
      puVar6[0x14] = lVar10;
      puVar6[0x10] = 0;
      if (((uint)*(undefined8 *)(lVar10 + 0x10) >> 5 & 1) == 0) {
        func_0x0001092af8bc(puVar6 + 0x14);
        if ((*(byte *)(puVar6[0x14] + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9a0418);
          (*pcVar5)();
        }
        FUN_10a99fce4(puVar6 + 9,puVar6[0x14] + 0x98);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&uStack_58,puVar6[0x14] + 0x90);
        FUN_10a99fe7c(puVar6 + 0xc,&uStack_58);
        __ZNSt13exception_ptrD1Ev(&uStack_58);
      }
      plVar8 = (long *)puVar6[0x14];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
    }
    func_0x0001092ba100(puVar6 + 2);
    plVar8 = (long *)puVar6[0x11];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    func_0x000109d1a1d0(puVar6 + 2);
    if ((3 < *(int *)(puVar6 + 0xd)) && ((undefined8 *)puVar6[0xe] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xe])();
    }
    if ((3 < *(int *)(puVar6 + 10)) && ((undefined8 *)puVar6[0xb] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xb])();
    }
    plVar8 = (long *)puVar6[0x10];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    __ZdlPv(puVar6);
  }
  return;
}



/* Entry: 10a9a0564; end: 10a9a060b;  */

long * FUN_10a9a0564(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((3 < (int)param_1[5]) && ((undefined8 *)param_1[6] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[6])();
  }
  if ((3 < (int)param_1[2]) && ((undefined8 *)param_1[3] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[3])();
  }
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



/* Entry: 10a9a060c; end: 10a9a0b8f;  */

/* WARNING: Removing unreachable block (ram,0x00010a9a0764) */
/* WARNING: Removing unreachable block (ram,0x00010a9a0974) */
/* WARNING: Removing unreachable block (ram,0x00010a9a0724) */
/* WARNING: Removing unreachable block (ram,0x00010a9a08b8) */

void FUN_10a9a060c(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 0;
  *plVar4 = (long)&PTR_FUN_110c346a8;
  plVar10 = plVar4 + 0x16;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x17] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0x32aaaba7;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x22] = 0;
  lStack_78 = 0;
  plVar4[0x18] = (long)plVar4;
  plVar4[0x19] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x17] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1b);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a9a0b90;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x17];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a9a08a4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x18];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a9a0ae4:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1b);
  }
  else {
    lVar8 = plVar4[0x18];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
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
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
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
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a9a08a4:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a9a0d00;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a9a0ae0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x17];
  plVar4[0x17] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
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
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a9a0988:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a9a0ad8;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a9a0988;
  pcStack_68 = FUN_10a9a0b90;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
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
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x18];
  plVar4[0x18] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x18);
  }
LAB_10a9a0ad8:
  *param_1 = (long)plVar4;
LAB_10a9a0ae0:
  plStack_80 = (long *)0x0;
  goto LAB_10a9a0ae4;
}



/* Entry: 10a9a0b90; end: 10a9a0cff;  */

void FUN_10a9a0b90(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a9a0d00;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar9 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    lVar6 = *param_1;
    if ((*(byte *)(lVar6 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a9a0cfc);
      (*pcVar4)();
    }
    plVar5 = (long *)(lVar9 + 0x10);
    do {
      lVar8 = *plVar5;
      if (lVar8 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          if (*(char *)(lVar9 + 0xa8) == '\x01') {
            *(undefined1 *)(lVar9 + 0xa8) = 0;
          }
          uVar10 = *(undefined8 *)(lVar6 + 0x98);
          *(undefined8 *)(lVar9 + 0xa0) = *(undefined8 *)(lVar6 + 0xa0);
          *(undefined8 *)(lVar9 + 0x98) = uVar10;
          *(undefined1 *)(lVar9 + 0xa8) = 1;
          *(undefined8 *)(lVar9 + 0x10) = 2;
          FUN_109d1b4dc(lVar9 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar8 >> 1 & 1) == 0);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar9,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  func_0x00010a9a10cc(param_1,param_1 + 3);
  return;
}



/* Entry: 10a9a0d00; end: 10a9a0ddf;  */

void FUN_10a9a0d00(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a9a0b90;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
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
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  func_0x00010a9a10cc(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a9a0de0; end: 10a9a0e53;  */

long * FUN_10a9a0de0(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
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



/* Entry: 10a9a0e54; end: 10a9a105f;  */

undefined8 * FUN_10a9a0e54(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110c346a8;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x17];
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
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
  plVar5 = (long *)param_1[0x16];
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
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a9a1060; end: 10a9a113b;  */

undefined8 * FUN_10a9a1060(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a9a113c; end: 10a9a1157;  */

void FUN_10a9a113c(void)

{
  return;
}



/* Entry: 10a9a1158; end: 10a9a1297;  */

void FUN_10a9a1158(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
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
  undefined1 *in_stack_ffffffffffffffa0;
  ulong in_stack_ffffffffffffffa8;
  ulong in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  
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
  FUN_10a9a1298(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (*(char *)((long)plVar5 + 0x1f) < '\0') {
    func_0x000107c3192c(&stack0xffffffffffffffa0,plVar5[1],plVar5[2]);
  }
  else {
    in_stack_ffffffffffffffa8 = plVar5[2];
    in_stack_ffffffffffffffa0 = (undefined1 *)plVar5[1];
    in_stack_ffffffffffffffb0 = plVar5[3];
  }
  puVar1 = in_stack_ffffffffffffffa0;
  if (-1 < (long)in_stack_ffffffffffffffb0) {
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb0 >> 0x38;
    puVar1 = &stack0xffffffffffffffa0;
  }
  (**(code **)(*param_2 + 0x128))(&stack0xffffffffffffffb8,param_2,puVar1,in_stack_ffffffffffffffa8)
  ;
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = in_stack_ffffffffffffffb8;
  if ((long)in_stack_ffffffffffffffb0 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa0);
  }
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



/* Entry: 10a9a1298; end: 10a9a12ff;  */

void FUN_10a9a1298(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
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
      param_4 = 0x48;
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
  plVar6 = plVar4;
  FUN_10a9a1298(plVar4,param_2);
  FUN_10a052e3c(param_4);
  uVar7 = (ulong)*(uint *)(plVar6 + 4);
  FUN_10a971eb8(uVar7);
  (**(code **)(*plVar4 + 0x128))(extraout_x8 + 2,plVar4,uVar7,param_2);
  *extraout_x8 = 6;
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar7 = lVar8 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar8 + 2];
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
  lVar8 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar8;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar8 >> 3;
        if (uVar9 <= uVar7) {
          uVar9 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar8,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar8 = lVar8 + uVar7 * 0x10;
    while (lVar12 != lVar8) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a9a1300; end: 10a9a13db;  */

void FUN_10a9a1300(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
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
  FUN_10a9a1298(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar5 = (ulong)*(uint *)(plVar4 + 4);
  FUN_10a971eb8(uVar5);
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,uVar5,param_3);
  *param_1 = 6;
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar5 = lVar6 - 1;
  plVar3[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar4[lVar6 + 2];
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar5) {
      return;
    }
  }
  lVar6 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar6;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar6,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
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
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar5;
  return;
}



/* Entry: 10a9a13dc; end: 10a9a14d3;  */

void FUN_10a9a13dc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
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
  FUN_10a9a1298(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar1 = *(uint *)((long)plVar5 + 0x74);
  if (2 < uVar1) {
    FUN_10a00946c(&UNK_10f685ce2);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a9a14c0);
    (*pcVar2)();
  }
  (**(code **)(*param_2 + 0x128))
            (param_1 + 2,param_2,(&PTR_DAT_110c35528)[uVar1],
             *(undefined8 *)(&UNK_10e4e7fd0 + (ulong)uVar1 * 8));
  *param_1 = 6;
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



/* Entry: 10a9a14d4; end: 10a9a158b;  */

void FUN_10a9a14d4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9a1298(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a9a158c(param_1,param_2,plVar4[0xc],plVar4[0xd]);
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



/* Entry: 10a9a158c; end: 10a9a162b;  */

void FUN_10a9a158c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_38 = &PTR_DAT_110c33330;
  uStack_30 = param_3;
  plStack_28 = param_4;
  func_0x000109899de4(param_1,param_2,&uStack_30,&ppuStack_38,0,0);
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a9a162c; end: 10a9a16e3;  */

void FUN_10a9a162c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a9a1298(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0xe];
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



/* Entry: 10a9a16e4; end: 10a9a16f3;  */

void FUN_10a9a16e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34730;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a9a16f4; end: 10a9a1713;  */

void FUN_10a9a16f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c34730;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9a1714; end: 10a9a1723;  */

void FUN_10a9a1714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a9a171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a9a1724; end: 10a9a1903;  */

long * FUN_10a9a1724(undefined8 *param_1,long *param_2,int *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  if (*param_3 == 6) {
    func_0x000109898570(&iStack_60,param_2,param_3);
    param_1[1] = puStack_58;
    *param_1 = CONCAT44(uStack_5c,iStack_60);
    param_1[2] = uStack_50;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    func_0x000109884c0c(&iStack_60,param_3,param_2);
    func_0x00010988469c(&puStack_48,&iStack_60,param_2);
    if ((undefined8 *)CONCAT44(uStack_5c,iStack_60) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)CONCAT44(uStack_5c,iStack_60))();
    }
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x268))(param_2,&puStack_48);
    if (plVar4 == (long *)0x0) {
      bVar3 = true;
    }
    else {
      (**(code **)(*param_2 + 0x288))(&iStack_60,param_2,&puStack_48,0);
      bVar3 = iStack_60 == 3;
      if ((3 < iStack_60) && (puStack_58 != (undefined8 *)0x0)) {
        (**(code **)*puStack_58)();
      }
    }
    if (puStack_48 != (undefined8 *)0x0) {
      (**(code **)*puStack_48)();
    }
    if (bVar3) {
      FUN_10a4c25ec(&iStack_60,param_2,param_3);
      param_1[1] = puStack_58;
      *param_1 = CONCAT44(uStack_5c,iStack_60);
      param_1[2] = uStack_50;
      uVar5 = 1;
    }
    else {
      plVar4 = param_2;
      FUN_10a99d4e8(param_2,*param_3,*(undefined8 *)(param_3 + 2));
      if (((ulong)plVar4 & 1) == 0) {
        plVar4 = (long *)&UNK_10f634795;
        func_0x00010988bd28();
        func_0x000104bd46a0();
        plVar7 = (long *)plVar4[1];
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
          do {
            lVar6 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        return plVar4;
      }
      FUN_10a13a07c(&iStack_60,param_2,param_3);
      param_1[1] = puStack_58;
      *param_1 = CONCAT44(uStack_5c,iStack_60);
      uVar5 = 2;
    }
    *(undefined1 *)(param_1 + 3) = uVar5;
  }
  return param_2;
}



/* Entry: 10a9a1904; end: 10a9a195b;  */

long FUN_10a9a1904(long param_1)

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



/* Entry: 10a9a195c; end: 10a9a1a6f;  */

void FUN_10a9a195c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
  long *in_stack_ffffffffffffffb8;
  
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
  FUN_10a9a1a70(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a970d10(&stack0xffffffffffffffb8,plVar7);
  FUN_10a913ce8(param_1,param_2,&stack0xffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffffb8 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a9a1a70; end: 10a9a1ad7;  */

void FUN_10a9a1a70(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *in_stack_ffffffffffffff98;
  
  ppuVar6 = param_1;
  func_0x000109898688();
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar6);
    param_2 = ppuVar6;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar7 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar8 = plVar7;
  (**(code **)(*plVar7 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar9 = plVar7;
  FUN_10a9a1a70(plVar7,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a970e1c(&stack0xffffffffffffff98,plVar9);
  FUN_10a13a520(extraout_x8,plVar7,&stack0xffffffffffffff98);
  if (in_stack_ffffffffffffff98 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffff98 + 1);
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
        (**(code **)(*in_stack_ffffffffffffff98 + 8))();
      }
    }
  }
  plVar7 = plVar8 + 0x4b;
  lVar10 = plVar8[0x59];
  uVar12 = lVar10 - 1;
  plVar8[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = plVar7[lVar10 + 2];
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar12) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar15 = plVar8[0x4c];
  lVar13 = lVar15 - lVar10;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar12) {
    uVar18 = uVar12 - uVar17;
    lVar16 = plVar8[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar12 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar10 >> 3;
        if (uVar11 <= uVar12) {
          uVar11 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar10)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_88 = plVar7;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar10,lVar13);
          *plVar7 = lVar14;
          plVar8[0x4c] = lVar15 + uVar18 * 0x10;
          plVar8[0x4d] = lVar5 + uVar11 * 0x10;
          lStack_a8 = lVar10;
          lStack_a0 = lVar10;
          lStack_98 = lVar10;
          lStack_90 = lVar16;
          func_0x00010988c1b8(&lStack_a8);
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
    _bzero(lVar15,uVar18 * 0x10);
    plVar8[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar12 < uVar17) {
    lVar10 = lVar10 + uVar12 * 0x10;
    while (lVar15 != lVar10) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar8[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar12;
  return;
}



/* Entry: 10a9a1ad8; end: 10a9a1beb;  */

void FUN_10a9a1ad8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
  long *in_stack_ffffffffffffffb8;
  
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
  FUN_10a9a1a70(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a970e1c(&stack0xffffffffffffffb8,plVar7);
  FUN_10a13a520(param_1,param_2,&stack0xffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffffb8 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a9a1bec; end: 10a9a1cff;  */

void FUN_10a9a1bec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
  long *in_stack_ffffffffffffffb8;
  
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
  FUN_10a9a1a70(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a9711d0(&stack0xffffffffffffffb8,plVar7);
  FUN_10a99ee9c(param_1,param_2,&stack0xffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffffb8 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
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
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a9a1d00; end: 10a9a1ebf;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10a9a1d00(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 *in_stack_ffffffffffffffb8;
  
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
  FUN_10a9a1a70(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a971220(&plStack_70,plVar7);
  FUN_10a9a1ec0(&stack0xffffffffffffffb8,param_2,&stack0xffffffffffffffa0);
  (**(code **)(*param_2 + 0x30))(&plStack_68,param_2);
  func_0x0001098843c0(&stack0xffffffffffffffa0,&plStack_68,param_2,&UNK_10f634758);
  (**(code **)(*param_2 + 0x2b0))
            (param_1,param_2,&stack0xffffffffffffffa0,&stack0xffffffffffffffb0,1);
  if (&stack0x00000000 != (undefined1 *)0x70) {
    (*(code *)*plStack_70)();
  }
  if (plStack_68 != (long *)0x0) {
    (**(code **)*plStack_68)();
  }
  if (in_stack_ffffffffffffffb8 != (undefined8 *)0x0) {
    (**(code **)*in_stack_ffffffffffffffb8)();
  }
  if (plStack_70 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_70 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plStack_70 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    plVar14 = (long *)plVar6[0x4d];
    if ((ulong)((long)plVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = (long)plVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
          plStack_70 = plVar14;
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
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a9a1ec0; end: 10a9a1fd3;  */

void FUN_10a9a1ec0(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined4 *extraout_x8;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *unaff_x26;
  int aiStack_168 [2];
  undefined8 *puStack_160;
  undefined8 uStack_158;
  int iStack_150;
  undefined8 *puStack_148;
  int aiStack_140 [2];
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int iStack_108;
  undefined4 uStack_104;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  int iStack_f0;
  undefined8 *puStack_e8;
  long lStack_d8;
  undefined8 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  iVar10 = (int)&puStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0xb0))(&puStack_80,param_2,0,0);
  pcStack_78 = FUN_10a9a1fd4;
  ppuStack_70 = &PTR_FUN_110c347e0;
  uStack_60 = param_3[1];
  uStack_68 = *param_3;
  lVar11 = 2;
  (**(code **)(*param_2 + 0x2a0))(param_1,param_2,&puStack_80,2,&pcStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  puVar7 = puStack_80;
  if (puStack_80 != (undefined8 *)0x0) {
    (**(code **)*puStack_80)();
    puVar7 = puStack_80;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (iVar10 == 0) {
    __Unwind_Resume(puVar7);
  }
  else {
    (*(code *)*ppuStack_70)(&ppuStack_70);
  }
  func_0x000104bd46a0(puVar7);
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = *(long **)(param_5 + 0x10);
  plVar14 = *(long **)(param_5 + 0x18);
  (**(code **)(*plVar14 + 0x58))();
  lVar16 = plVar14[0x47];
  uVar13 = *(undefined8 *)(param_5 + 0x18);
  func_0x0001098849a4(aiStack_140,uVar13,lVar11);
  puVar7 = puStack_138;
  iVar10 = aiStack_140[0];
  if (aiStack_140[0] == 3) {
    puStack_130 = puStack_138;
    unaff_x26 = puVar7;
  }
  else if (aiStack_140[0] == 2) {
    puStack_130 = (undefined8 *)CONCAT71(puStack_130._1_7_,puStack_138._0_1_);
    unaff_x26 = (undefined8 *)((ulong)puStack_138 & 0xff);
  }
  else if (3 < aiStack_140[0]) {
    puStack_138 = (undefined8 *)0x0;
    puStack_130 = puVar7;
    unaff_x26 = puVar7;
  }
  aiStack_140[0] = 0;
  uVar15 = *(undefined8 *)(param_5 + 0x18);
  func_0x0001098849a4(aiStack_168,uVar15,lVar11 + 0x10);
  iVar5 = aiStack_168[0];
  iStack_150 = aiStack_168[0];
  if (aiStack_168[0] == 3) {
    puStack_148 = puStack_160;
  }
  else if (aiStack_168[0] == 2) {
    puStack_148 = (undefined8 *)CONCAT71(puStack_148._1_7_,puStack_160._0_1_);
  }
  else if (3 < aiStack_168[0]) {
    puStack_148 = puStack_160;
    puStack_160 = (undefined8 *)0x0;
  }
  aiStack_168[0] = 0;
  uStack_158 = uVar15;
  if (*plVar9 == 0) {
    FUN_10a9a2a98(&uStack_110,uVar15,&UNK_10f634760,0x34);
    FUN_10a05589c(&uStack_158,&uStack_110);
    if ((3 < (int)uStack_110) &&
       ((undefined8 *)CONCAT44(uStack_104,iStack_108) != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)CONCAT44(uStack_104,iStack_108))();
    }
    plVar14 = (long *)(ulong)(3 < iVar10);
LAB_10a9a26dc:
    if ((3 < iStack_150) && (puStack_148 != (undefined8 *)0x0)) {
      (**(code **)*puStack_148)();
    }
    if ((3 < aiStack_168[0]) && (puStack_160 != (undefined8 *)0x0)) {
      (**(code **)*puStack_160)();
    }
    if (((int)plVar14 != 0) && (puStack_130 != (undefined8 *)0x0)) {
      (**(code **)*puStack_130)();
    }
    if ((3 < aiStack_140[0]) && (puStack_138 != (undefined8 *)0x0)) {
      (**(code **)*puStack_138)();
    }
    *extraout_x8 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    iStack_108 = iVar10;
    if (iVar10 == 3) {
      puStack_100 = puStack_130;
    }
    else if (iVar10 == 2) {
      puStack_100 = (undefined8 *)CONCAT71(puStack_100._1_7_,(char)unaff_x26);
    }
    else if (3 < iVar10) {
      puStack_100 = puStack_130;
      puStack_130 = (undefined8 *)0x0;
    }
    iStack_f0 = iVar5;
    if (iVar5 == 3) {
      puStack_e8 = puStack_148;
    }
    else if (iVar5 == 2) {
      puStack_e8 = (undefined8 *)CONCAT71(puStack_e8._1_7_,puStack_148._0_1_);
    }
    else if (3 < iVar5) {
      puStack_e8 = puStack_148;
      puStack_148 = (undefined8 *)0x0;
    }
    iStack_150 = 0;
    uStack_110 = uVar13;
    uStack_f8 = uVar15;
    if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) == 0) {
      puVar7 = (undefined8 *)0xe8;
      __Znwm();
      *puVar7 = FUN_10a9bce30;
      puVar7[1] = FUN_10a9bd290;
      func_0x0001092ba17c(puVar7 + 2);
      plVar14 = (long *)puVar7[7];
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar7[9] = *plVar9;
      *plVar9 = 0;
      puVar7[10] = uStack_110;
      *(int *)(puVar7 + 0xb) = iStack_108;
      if (iStack_108 == 3) {
        puVar7[0xc] = puStack_100;
      }
      else if (iStack_108 == 2) {
        *(undefined1 *)(puVar7 + 0xc) = puStack_100._0_1_;
      }
      else if (3 < iStack_108) {
        puVar7[0xc] = puStack_100;
        puStack_100 = (undefined8 *)0x0;
      }
      iStack_108 = 0;
      puVar7[0xd] = uStack_f8;
      *(int *)(puVar7 + 0xe) = iStack_f0;
      if (iStack_f0 == 3) {
        puVar7[0xf] = puStack_e8;
      }
      else if (iStack_f0 == 2) {
        *(undefined1 *)(puVar7 + 0xf) = puStack_e8._0_1_;
      }
      else if (3 < iStack_f0) {
        puVar7[0xf] = puStack_e8;
        puStack_e8 = (undefined8 *)0x0;
      }
      iStack_f0 = 0;
      puVar7[0x18] = lVar16;
      *(undefined1 *)(puVar7 + 0x19) = 0;
      *(undefined1 *)(puVar7 + 0x1c) = 0;
      puVar8 = puVar7 + 0x18;
      func_0x0001092ba064(puVar8,puVar7);
      if (((ulong)puVar8 & 1) == 0) {
        puVar7[0x1b] = puVar7[9];
        puVar7[9] = 0;
        puVar7[0x11] = puVar7[10];
        iVar10 = *(int *)(puVar7 + 0xb);
        *(int *)(puVar7 + 0x12) = iVar10;
        if (iVar10 == 3) {
          puVar7[0x13] = puVar7[0xc];
        }
        else if (iVar10 == 2) {
          *(undefined1 *)(puVar7 + 0x13) = *(undefined1 *)(puVar7 + 0xc);
        }
        else if (3 < iVar10) {
          puVar7[0x13] = puVar7[0xc];
          puVar7[0xc] = 0;
        }
        *(undefined4 *)(puVar7 + 0xb) = 0;
        puVar7[0x14] = puVar7[0xd];
        iVar10 = *(int *)(puVar7 + 0xe);
        *(int *)(puVar7 + 0x15) = iVar10;
        if (iVar10 == 3) {
          puVar7[0x16] = puVar7[0xf];
        }
        else if (iVar10 == 2) {
          *(undefined1 *)(puVar7 + 0x16) = *(undefined1 *)(puVar7 + 0xf);
        }
        else if (3 < iVar10) {
          puVar7[0x16] = puVar7[0xf];
          puVar7[0xf] = 0;
        }
        *(undefined4 *)(puVar7 + 0xe) = 0;
        FUN_10a9a2f84(puVar7 + 0x1a,puVar7 + 0x1b,puVar7 + 0x11);
        puVar7[0x18] = puVar7[0x1a];
        plVar9 = (long *)(puVar7[0x1a] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar7 + 0x1c) = 1;
          lVar11 = puVar7[0x18];
          plVar9 = (long *)(lVar11 + 0x10);
          uVar13 = puVar7[3];
          do {
            lVar16 = *plVar9;
            if (lVar16 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                uStack_128 = 0;
                puStack_120 = puVar7;
                uStack_118 = uVar13;
                func_0x000109d1b588(lVar11 + 0x18,&uStack_128);
                *(undefined8 *)(lVar11 + 0x10) = 0;
                if (plVar14 == (long *)0x0) goto LAB_10a9a2698;
                goto LAB_10a9a2654;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar16 >> 1 & 1) == 0);
        }
        plVar9 = (long *)puVar7[0x18];
        if (((uint)*(undefined8 *)(puVar7[0x18] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar9 + 0x12);
          goto LAB_10a9a2820;
        }
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        plVar9 = (long *)puVar7[0x1a];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        if ((3 < *(int *)(puVar7 + 0x15)) && ((undefined8 *)puVar7[0x16] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0x16])();
        }
        if ((3 < *(int *)(puVar7 + 0x12)) && ((undefined8 *)puVar7[0x13] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0x13])();
        }
        plVar9 = (long *)puVar7[0x1b];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar7 + 2);
        if ((3 < *(int *)(puVar7 + 0xe)) && ((undefined8 *)puVar7[0xf] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0xf])();
        }
        if ((3 < *(int *)(puVar7 + 0xb)) && ((undefined8 *)puVar7[0xc] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar7[0xc])();
        }
        plVar9 = (long *)puVar7[9];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar12 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar12 & 0x1fffffffc) == 4) {
            do {
              uVar12 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar12 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar12 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar7 + 2);
        __ZdlPv(puVar7);
      }
      if (plVar14 != (long *)0x0) {
LAB_10a9a2654:
        puVar2 = (ulong *)(plVar14 + 1);
        do {
          uVar12 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar2 - 1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_10a9a2684;
        }
      }
LAB_10a9a2698:
      if ((3 < iStack_f0) && (puStack_e8 != (undefined8 *)0x0)) {
        (**(code **)*puStack_e8)();
      }
      if ((3 < iStack_108) && (puStack_100 != (undefined8 *)0x0)) {
        (**(code **)*puStack_100)();
      }
      plVar14 = (long *)0x0;
      goto LAB_10a9a26dc;
    }
    plVar14 = (long *)*plVar9;
    *plVar9 = 0;
    if (((uint)plVar14[2] >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_128,plVar14 + 0x12);
      FUN_10a9a2e30(&uStack_f8,&uStack_128);
      __ZNSt13exception_ptrD1Ev(&uStack_128);
LAB_10a9a22a0:
      puVar2 = (ulong *)(plVar14 + 1);
      do {
        uVar12 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar12 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar2 - 1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_10a9a2684:
        if (uVar12 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      goto LAB_10a9a2698;
    }
    if ((((uint)plVar14[2] >> 1 & 1) != 0) && (((uint)plVar14[2] >> 5 & 1) == 0)) {
      if ((*(byte *)(plVar14 + 0x15) & 1) == 0) goto LAB_10a9a2820;
      FUN_10a9a2c2c(&uStack_110,plVar14 + 0x13);
      goto LAB_10a9a22a0;
    }
  }
  if (((uint)plVar14[2] >> 5 & 1) == 0) {
    puVar7 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar7 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar7,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_128,plVar14 + 0x12);
    func_0x0001092af97c(&uStack_128);
  }
LAB_10a9a2820:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a9a2824);
  (*pcVar6)();
}



/* Entry: 10a9a1fd4; end: 10a9a2a97;  */

void FUN_10a9a1fd4(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *unaff_x26;
  int aiStack_e8 [2];
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined8 *puStack_c8;
  int aiStack_c0 [2];
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  int iStack_70;
  undefined8 *puStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = *(long **)(param_6 + 0x10);
  plVar14 = *(long **)(param_6 + 0x18);
  (**(code **)(*plVar14 + 0x58))();
  lVar16 = plVar14[0x47];
  uVar13 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_c0,uVar13,param_4);
  puVar8 = puStack_b8;
  iVar3 = aiStack_c0[0];
  if (aiStack_c0[0] == 3) {
    puStack_b0 = puStack_b8;
    unaff_x26 = puVar8;
  }
  else if (aiStack_c0[0] == 2) {
    puStack_b0 = (undefined8 *)CONCAT71(puStack_b0._1_7_,puStack_b8._0_1_);
    unaff_x26 = (undefined8 *)((ulong)puStack_b8 & 0xff);
  }
  else if (3 < aiStack_c0[0]) {
    puStack_b8 = (undefined8 *)0x0;
    puStack_b0 = puVar8;
    unaff_x26 = puVar8;
  }
  aiStack_c0[0] = 0;
  uVar15 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_e8,uVar15,param_4 + 0x10);
  iVar6 = aiStack_e8[0];
  iStack_d0 = aiStack_e8[0];
  if (aiStack_e8[0] == 3) {
    puStack_c8 = puStack_e0;
  }
  else if (aiStack_e8[0] == 2) {
    puStack_c8 = (undefined8 *)CONCAT71(puStack_c8._1_7_,puStack_e0._0_1_);
  }
  else if (3 < aiStack_e8[0]) {
    puStack_c8 = puStack_e0;
    puStack_e0 = (undefined8 *)0x0;
  }
  aiStack_e8[0] = 0;
  uStack_d8 = uVar15;
  if (*plVar10 == 0) {
    FUN_10a9a2a98(&uStack_90,uVar15,&UNK_10f634760,0x34);
    FUN_10a05589c(&uStack_d8,&uStack_90);
    if ((3 < (int)uStack_90) && ((undefined8 *)CONCAT44(uStack_84,iStack_88) != (undefined8 *)0x0))
    {
      (*(code *)**(undefined8 **)CONCAT44(uStack_84,iStack_88))();
    }
    plVar14 = (long *)(ulong)(3 < iVar3);
LAB_10a9a26dc:
    if ((3 < iStack_d0) && (puStack_c8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_c8)();
    }
    if ((3 < aiStack_e8[0]) && (puStack_e0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_e0)();
    }
    if (((int)plVar14 != 0) && (puStack_b0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_b0)();
    }
    if ((3 < aiStack_c0[0]) && (puStack_b8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_b8)();
    }
    *param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    iStack_88 = iVar3;
    if (iVar3 == 3) {
      puStack_80 = puStack_b0;
    }
    else if (iVar3 == 2) {
      puStack_80 = (undefined8 *)CONCAT71(puStack_80._1_7_,(char)unaff_x26);
    }
    else if (3 < iVar3) {
      puStack_80 = puStack_b0;
      puStack_b0 = (undefined8 *)0x0;
    }
    iStack_70 = iVar6;
    if (iVar6 == 3) {
      puStack_68 = puStack_c8;
    }
    else if (iVar6 == 2) {
      puStack_68 = (undefined8 *)CONCAT71(puStack_68._1_7_,puStack_c8._0_1_);
    }
    else if (3 < iVar6) {
      puStack_68 = puStack_c8;
      puStack_c8 = (undefined8 *)0x0;
    }
    iStack_d0 = 0;
    uStack_90 = uVar13;
    uStack_78 = uVar15;
    if (((uint)*(undefined8 *)(*plVar10 + 0x10) >> 1 & 1) == 0) {
      puVar8 = (undefined8 *)0xe8;
      __Znwm();
      *puVar8 = FUN_10a9bce30;
      puVar8[1] = FUN_10a9bd290;
      func_0x0001092ba17c(puVar8 + 2);
      plVar14 = (long *)puVar8[7];
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar8[9] = *plVar10;
      *plVar10 = 0;
      puVar8[10] = uStack_90;
      *(int *)(puVar8 + 0xb) = iStack_88;
      if (iStack_88 == 3) {
        puVar8[0xc] = puStack_80;
      }
      else if (iStack_88 == 2) {
        *(undefined1 *)(puVar8 + 0xc) = puStack_80._0_1_;
      }
      else if (3 < iStack_88) {
        puVar8[0xc] = puStack_80;
        puStack_80 = (undefined8 *)0x0;
      }
      iStack_88 = 0;
      puVar8[0xd] = uStack_78;
      *(int *)(puVar8 + 0xe) = iStack_70;
      if (iStack_70 == 3) {
        puVar8[0xf] = puStack_68;
      }
      else if (iStack_70 == 2) {
        *(undefined1 *)(puVar8 + 0xf) = puStack_68._0_1_;
      }
      else if (3 < iStack_70) {
        puVar8[0xf] = puStack_68;
        puStack_68 = (undefined8 *)0x0;
      }
      iStack_70 = 0;
      puVar8[0x18] = lVar16;
      *(undefined1 *)(puVar8 + 0x19) = 0;
      *(undefined1 *)(puVar8 + 0x1c) = 0;
      puVar9 = puVar8 + 0x18;
      func_0x0001092ba064(puVar9,puVar8);
      if (((ulong)puVar9 & 1) == 0) {
        puVar8[0x1b] = puVar8[9];
        puVar8[9] = 0;
        puVar8[0x11] = puVar8[10];
        iVar3 = *(int *)(puVar8 + 0xb);
        *(int *)(puVar8 + 0x12) = iVar3;
        if (iVar3 == 3) {
          puVar8[0x13] = puVar8[0xc];
        }
        else if (iVar3 == 2) {
          *(undefined1 *)(puVar8 + 0x13) = *(undefined1 *)(puVar8 + 0xc);
        }
        else if (3 < iVar3) {
          puVar8[0x13] = puVar8[0xc];
          puVar8[0xc] = 0;
        }
        *(undefined4 *)(puVar8 + 0xb) = 0;
        puVar8[0x14] = puVar8[0xd];
        iVar3 = *(int *)(puVar8 + 0xe);
        *(int *)(puVar8 + 0x15) = iVar3;
        if (iVar3 == 3) {
          puVar8[0x16] = puVar8[0xf];
        }
        else if (iVar3 == 2) {
          *(undefined1 *)(puVar8 + 0x16) = *(undefined1 *)(puVar8 + 0xf);
        }
        else if (3 < iVar3) {
          puVar8[0x16] = puVar8[0xf];
          puVar8[0xf] = 0;
        }
        *(undefined4 *)(puVar8 + 0xe) = 0;
        FUN_10a9a2f84(puVar8 + 0x1a,puVar8 + 0x1b,puVar8 + 0x11);
        puVar8[0x18] = puVar8[0x1a];
        plVar10 = (long *)(puVar8[0x1a] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar8 + 0x1c) = 1;
          lVar16 = puVar8[0x18];
          plVar10 = (long *)(lVar16 + 0x10);
          uVar13 = puVar8[3];
          do {
            lVar12 = *plVar10;
            if (lVar12 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                uStack_a8 = 0;
                puStack_a0 = puVar8;
                uStack_98 = uVar13;
                func_0x000109d1b588(lVar16 + 0x18,&uStack_a8);
                *(undefined8 *)(lVar16 + 0x10) = 0;
                if (plVar14 == (long *)0x0) goto LAB_10a9a2698;
                goto LAB_10a9a2654;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar12 >> 1 & 1) == 0);
        }
        plVar10 = (long *)puVar8[0x18];
        if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar10 + 0x12);
          goto LAB_10a9a2820;
        }
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        plVar10 = (long *)puVar8[0x1a];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        if ((3 < *(int *)(puVar8 + 0x15)) && ((undefined8 *)puVar8[0x16] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0x16])();
        }
        if ((3 < *(int *)(puVar8 + 0x12)) && ((undefined8 *)puVar8[0x13] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0x13])();
        }
        plVar10 = (long *)puVar8[0x1b];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar8 + 2);
        if ((3 < *(int *)(puVar8 + 0xe)) && ((undefined8 *)puVar8[0xf] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0xf])();
        }
        if ((3 < *(int *)(puVar8 + 0xb)) && ((undefined8 *)puVar8[0xc] != (undefined8 *)0x0)) {
          (*(code *)**(undefined8 **)puVar8[0xc])();
        }
        plVar10 = (long *)puVar8[9];
        if (plVar10 != (long *)0x0) {
          puVar2 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar8 + 2);
        __ZdlPv(puVar8);
      }
      if (plVar14 != (long *)0x0) {
LAB_10a9a2654:
        puVar2 = (ulong *)(plVar14 + 1);
        do {
          uVar11 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar2 - 1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_10a9a2684;
        }
      }
LAB_10a9a2698:
      if ((3 < iStack_70) && (puStack_68 != (undefined8 *)0x0)) {
        (**(code **)*puStack_68)();
      }
      if ((3 < iStack_88) && (puStack_80 != (undefined8 *)0x0)) {
        (**(code **)*puStack_80)();
      }
      plVar14 = (long *)0x0;
      goto LAB_10a9a26dc;
    }
    plVar14 = (long *)*plVar10;
    *plVar10 = 0;
    if (((uint)plVar14[2] >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_a8,plVar14 + 0x12);
      FUN_10a9a2e30(&uStack_78,&uStack_a8);
      __ZNSt13exception_ptrD1Ev(&uStack_a8);
LAB_10a9a22a0:
      puVar2 = (ulong *)(plVar14 + 1);
      do {
        uVar11 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar11 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar2 - 1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_10a9a2684:
        if (uVar11 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
      goto LAB_10a9a2698;
    }
    if ((((uint)plVar14[2] >> 1 & 1) != 0) && (((uint)plVar14[2] >> 5 & 1) == 0)) {
      if ((*(byte *)(plVar14 + 0x15) & 1) == 0) goto LAB_10a9a2820;
      FUN_10a9a2c2c(&uStack_90,plVar14 + 0x13);
      goto LAB_10a9a22a0;
    }
  }
  if (((uint)plVar14[2] >> 5 & 1) == 0) {
    puVar8 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar8 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar8,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&uStack_a8,plVar14 + 0x12);
    func_0x0001092af97c(&uStack_a8);
  }
LAB_10a9a2820:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a9a2824);
  (*pcVar7)();
}


