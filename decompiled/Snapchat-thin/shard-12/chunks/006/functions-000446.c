/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1094edafc; end: 1094edd53;  */

undefined1  [16]
FUN_1094edafc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x27 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1094edd04;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x27) break;
        }
      }
    }
  }
  FUN_1094edd54(aplStack_78,param_1,plVar6,param_3,param_4,param_5);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_1094dfd00(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_1094edd04:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 1094edd54; end: 1094ede03;  */

void FUN_1094edd54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  param_1[1] = param_2;
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  param_5 = (undefined8 *)*param_5;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    puVar1[4] = param_5[2];
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
  }
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[5] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1094ede04; end: 1094edf07;  */

long FUN_1094ede04(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110af7e20;
    lStack_28 = param_1 + 0x40;
    FUN_1094dd9b4(&lStack_28);
  }
  *(undefined8 *)(param_1 + 0x38) = 0x100000001;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110af8010;
  *(undefined8 *)(param_1 + 0x60) = 0x3be56042;
  *(undefined8 *)(param_1 + 0x58) = 0x3f8000003f800000;
  *(undefined1 *)(param_1 + 0x68) = 1;
  plStack_38 = (long *)param_2[1];
  uStack_40 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1 = param_1 + 0x30;
  FUN_1094e8fbc(param_1,&uStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 1094edf08; end: 1094ee21b;  */

long * FUN_1094edf08(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  double dStack_b0;
  double dStack_a8;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  plVar13 = *(long **)(param_2 + 0x50);
  plVar7 = param_1;
  if (plVar13 != (long *)0x0) {
    iVar14 = 0;
    dStack_a8 = 6.283185307179586;
    dStack_b0 = 6.283185307179586;
    uVar29 = NEON_fmov(0x3f800000,4);
    do {
      plVar1 = plVar13 + 2;
      plVar4 = param_1 + 1;
      plStack_98 = plVar1;
      FUN_1094ee398(plVar4,plVar1,&plStack_98);
      plVar7 = param_1 + 1;
      plStack_98 = plVar1;
      FUN_1094ee398(plVar7,plVar1,&plStack_98);
      if (plVar7[5] == 0) {
        puVar5 = (undefined8 *)0x48;
        __Znwm();
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = &PTR_FUN_110af8cd0;
        auVar15._0_8_ = param_1[0xb];
        auVar15._8_8_ = 0;
        auVar15 = NEON_rev64(auVar15,4);
        auVar17._12_4_ = auVar15._12_4_;
        auVar17._0_8_ = auVar15._0_8_;
        auVar17._8_4_ = auVar15._4_4_;
        auVar16._8_8_ = auVar17._8_8_;
        auVar16._0_8_ = CONCAT44(auVar15._0_4_,auVar15._0_4_);
        auVar18._0_12_ = auVar16._0_12_;
        auVar18._12_4_ = auVar15._4_4_;
        *(long *)((long)puVar5 + 0x34) = auVar18._8_8_;
        *(undefined8 *)((long)puVar5 + 0x2c) = auVar16._0_8_;
        lVar9 = param_1[0xc];
        *(int *)((long)puVar5 + 0x3c) = (int)lVar9;
        *(int *)(puVar5 + 8) = (int)lVar9;
        puVar5[4] = 0;
        *(undefined4 *)(puVar5 + 5) = 0;
        plStack_98 = puVar5 + 3;
        *plStack_98 = 0;
        plVar7 = param_1 + 1;
        plStack_90 = puVar5;
        plStack_88 = plVar1;
        FUN_1094ee398(plVar7,plVar1,&plStack_88);
        plVar6 = plStack_98;
        plStack_98 = (long *)0x0;
        plStack_90 = (long *)0x0;
        plVar12 = (long *)plVar7[6];
        plVar7[5] = (long)plVar6;
        plVar7[6] = (long)puVar5;
        if (plVar12 != (long *)0x0) {
          plVar6 = plVar12 + 1;
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
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            plVar7 = plVar12;
          }
        }
        plVar6 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          plVar12 = plStack_90 + 1;
          do {
            lVar9 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            plVar7 = plVar6;
          }
        }
      }
      if (*(float *)((long)param_1 + 100) < *(float *)(plVar13 + 6)) {
        puVar8 = (ulong *)plVar4[5];
        uVar10 = *(ulong *)(param_3 + 8);
        fVar19 = *(float *)(puVar8 + 2);
        fVar23 = (float)uVar10 - fVar19;
        uVar20 = plVar13[5];
        fVar21 = (float)((double)(float)*(undefined8 *)((long)puVar8 + 0x14) * dStack_b0) * fVar23;
        fVar22 = (float)((double)(float)((ulong)*(undefined8 *)((long)puVar8 + 0x14) >> 0x20) *
                        dStack_a8) * fVar23;
        fVar28 = (float)uVar29;
        fVar30 = (float)((ulong)uVar29 >> 0x20);
        fVar21 = fVar21 / (fVar21 + fVar28);
        fVar22 = fVar22 / (fVar22 + fVar30);
        fVar26 = (float)*puVar8;
        fVar25 = (float)(uVar20 >> 0x20);
        fVar27 = (float)(*puVar8 >> 0x20);
        fVar22 = ((fVar25 - fVar27) / fVar23) * fVar22 +
                 (float)(puVar8[1] >> 0x20) * (fVar30 - fVar22);
        fVar21 = ABS((((float)uVar20 - fVar26) / fVar23) * fVar21 +
                     (float)puVar8[1] * (fVar28 - fVar21));
        fVar24 = (float)((double)((float)*(undefined8 *)((long)puVar8 + 0x1c) +
                                 (float)*(undefined8 *)((long)puVar8 + 0x24) * fVar21) * dStack_b0)
                 * fVar23;
        fVar23 = (float)((double)((float)((ulong)*(undefined8 *)((long)puVar8 + 0x1c) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)((long)puVar8 + 0x24) >> 0x20) *
                                 ABS(fVar22)) * dStack_a8) * fVar23;
        fVar24 = fVar24 / (fVar24 + fVar28);
        fVar23 = fVar23 / (fVar23 + fVar30);
        fVar24 = (float)uVar20 * fVar24 + fVar26 * (fVar28 - fVar24);
        fVar25 = fVar25 * fVar23 + fVar27 * (fVar30 - fVar23);
        bVar3 = true;
        if ((!NAN(fVar24)) && (bVar3 = true, !NAN(fVar25))) {
          bVar3 = false;
        }
        if (bVar3) {
          plVar7 = (long *)&UNK_10f5705a4;
          func_0x000105688514();
          FUN_1094ee820(&plStack_98);
          plVar13 = plVar7;
          __Unwind_Resume();
          pcStack_b8 = FUN_1094ee21c;
          lStack_d0 = param_3;
          plStack_c8 = plVar7;
          puStack_c0 = &stack0xfffffffffffffff0;
          if ((char)plVar13[0xd] == '\x01') {
            plVar13[6] = (long)&PTR_FUN_110af7e20;
            plStack_d8 = plVar13 + 8;
            FUN_1094dd9b4(&plStack_d8);
          }
          func_0x0001094ee2e8(plVar13 + 1);
          return plVar13;
        }
        uVar20 = CONCAT44(fVar25,fVar24) ^
                 (CONCAT44(fVar25,fVar24) ^ uVar20) &
                 CONCAT44(-(uint)(fVar19 == 0.0),-(uint)(fVar19 == 0.0));
        fVar25 = 0.0;
        if (fVar19 != 0.0) {
          fVar25 = fVar21;
        }
        *puVar8 = uVar20;
        fVar21 = 0.0;
        if (fVar19 != 0.0) {
          fVar21 = ABS(fVar22);
        }
        *(float *)(puVar8 + 1) = fVar25;
        *(float *)((long)puVar8 + 0xc) = fVar21;
        *(float *)(puVar8 + 2) = (float)uVar10;
        plVar7 = (long *)(param_2 + 0x40);
        plStack_98 = plVar1;
        FUN_1094e1a28(plVar7,plVar1,&UNK_10dd5b8f9,&plStack_98,&plStack_88);
        plVar7[5] = uVar20;
        iVar14 = iVar14 + 1;
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
    if (iVar14 != 0) {
      return plVar7;
    }
  }
  if (param_1[4] != 0) {
    plVar7 = (long *)param_1[3];
    func_0x0001094ee320(plVar7);
    param_1[3] = 0;
    lVar9 = param_1[2];
    if (lVar9 != 0) {
      lVar11 = 0;
      do {
        *(undefined8 *)(param_1[1] + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
    }
    param_1[4] = 0;
  }
  return plVar7;
}



/* Entry: 1094ee21c; end: 1094ee2cf;  */

long FUN_1094ee21c(long param_1)

{
  long lStack_28;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110af7e20;
    lStack_28 = param_1 + 0x40;
    FUN_1094dd9b4(&lStack_28);
  }
  FUN_1094ee2e8(param_1 + 8);
  return param_1;
}



/* Entry: 1094ee2d0; end: 1094ee2e7;  */

long FUN_1094ee2d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  if (*(char *)(param_1 + 0x68) == '\0') {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1094ee2e8; end: 1094ee397;  */

long * FUN_1094ee2e8(long *param_1)

{
  long lVar1;
  
  func_0x0001094ee320(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094ee398; end: 1094ee79f;  */

long * FUN_1094ee398(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar6 = (long *)*param_3;
  plVar5 = (long *)0x38;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*plVar6,plVar6[1]);
  }
  else {
    lVar4 = plVar6[1];
    lVar3 = *plVar6;
    plVar5[4] = plVar6[2];
    plVar5[3] = lVar4;
    plVar5[2] = lVar3;
  }
  plVar5[5] = 0;
  plVar5[6] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1094ee6b0;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_1094ee538:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094ee788);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_1094ee538;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_1094ee6b0:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1094ee7a0; end: 1094ee7e7;  */

void FUN_1094ee7a0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001094ee35c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094ee7e8; end: 1094ee7f7;  */

void FUN_1094ee7e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af8cd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094ee7f8; end: 1094ee817;  */

void FUN_1094ee7f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af8cd0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094ee818; end: 1094ee81f;  */

void FUN_1094ee818(void)

{
  return;
}



/* Entry: 1094ee820; end: 1094ee877;  */

long FUN_1094ee820(long param_1)

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



/* Entry: 1094ee878; end: 1094eea77;  */

long FUN_1094ee878(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  uStack_b0 = 0x200000001;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0x200000001;
  puVar1 = (undefined8 *)(param_1 + 0x2e8);
  plVar2 = (long *)(param_1 + 0x300);
  if (*(char *)(param_1 + 0x348) == '\x01') {
    FUN_1094dd770(puVar1);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    if (*plVar2 != 0) {
      *(long *)(param_1 + 0x308) = *plVar2;
      __ZdlPv();
      *plVar2 = 0;
      *(undefined8 *)(param_1 + 0x308) = 0;
      *(undefined8 *)(param_1 + 0x310) = 0;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    if (*(long *)(param_1 + 0x318) != 0) {
      *(long *)(param_1 + 800) = *(long *)(param_1 + 0x318);
      __ZdlPv();
      *(undefined8 *)(param_1 + 0x318) = 0;
      *(undefined8 *)(param_1 + 800) = 0;
      *(undefined8 *)(param_1 + 0x328) = 0;
    }
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    if (*(long *)(param_1 + 0x330) != 0) {
      *(long *)(param_1 + 0x338) = *(long *)(param_1 + 0x330);
      __ZdlPv();
      *(undefined8 *)(param_1 + 0x330) = 0;
      *(undefined8 *)(param_1 + 0x338) = 0;
      *(undefined8 *)(param_1 + 0x340) = 0;
    }
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *puVar1 = 0;
    uStack_a8 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    *(undefined ***)(param_1 + 0x2d8) = &PTR_FUN_110af8050;
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    uStack_68 = 0;
    *(undefined1 *)(param_1 + 0x348) = 1;
  }
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  ppuStack_b8 = &PTR_FUN_110af7e20;
  puStack_48 = &uStack_a8;
  FUN_1094dd9b4(&puStack_48);
  plStack_c8 = (long *)param_2[1];
  uStack_d0 = *param_2;
  if (param_2[1] != 0) {
    plVar2 = (long *)(param_2[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1 = param_1 + 0x2d8;
  FUN_1094e8fbc(param_1,&uStack_d0);
  plVar2 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar3 = plStack_c8 + 1;
    do {
      lVar6 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return param_1;
}



/* Entry: 1094eea78; end: 1094ef227;  */

/* WARNING: Possible PIC construction at 0x0001094ef0d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001094ef11c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001094ef0d8) */
/* WARNING: Removing unreachable block (ram,0x0001094ef120) */
/* WARNING: Removing unreachable block (ram,0x0001094ef15c) */

float * FUN_1094eea78(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,
                     long param_5)

{
  code *pcVar1;
  undefined1 **ppuVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  undefined1 uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  float *pfVar16;
  long unaff_x20;
  float *pfVar17;
  long lVar18;
  float *unaff_x23;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  undefined1 **ppuVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_198;
  float fStack_190;
  undefined1 uStack_189;
  long *plStack_188;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  float *pfStack_138;
  float *pfStack_130;
  long lStack_128;
  long *plStack_120;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined8 uStack_f7;
  undefined8 uStack_ef;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined8 uStack_99;
  long lStack_90;
  
  fVar25 = (float)param_2;
  fVar24 = (float)param_1;
  ppuVar2 = (undefined1 **)auStack_140;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((uint)param_3[0xb4] & 1) == 0) {
    uStack_c0 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
      if (*(char *)(param_3 + 0xb4) == '\x01') {
        FUN_1094ddaa0();
      }
      else {
        FUN_1094df9ec(param_3 + 0x22,param_4);
        *(undefined1 *)(param_3 + 0xb4) = 1;
      }
      return param_3 + 0x22;
    }
LAB_1094ef1f4:
    fVar25 = (float)uStack_c0;
    fVar24 = (float)param_1;
    ___stack_chk_fail();
  }
  else if (param_3[0xb8] == 9.80909e-45 || param_3[0xb8] == 1.4013e-45) {
    bVar3 = *(char *)(param_5 + 0x58) != '\x01';
    pfVar6 = param_4;
    lStack_128 = param_5;
    if (bVar3) {
      uVar11 = 0;
      pfVar9 = param_3;
    }
    else {
      pfVar9 = (float *)(param_5 + 0x18);
      FUN_1094f5708(&uStack_110,pfVar9);
      uStack_c8 = CONCAT17(uStack_100,uStack_107);
      uStack_d0 = CONCAT17(uStack_108,uStack_10f);
      uStack_c0 = CONCAT17(uStack_f8,uStack_ff);
      uStack_b8 = uStack_f7;
      uStack_a8 = uStack_e7;
      uStack_b0 = uStack_ef;
      uStack_99 = uStack_d8;
      uStack_a1 = uStack_e0;
      uStack_a0 = uStack_df;
      uVar11 = uStack_110;
    }
    pfStack_138 = param_3 + 2;
    *(undefined1 *)pfStack_138 = uVar11;
    *(undefined8 *)((long)param_3 + 0x11) = uStack_c8;
    *(undefined8 *)((long)param_3 + 9) = uStack_d0;
    *(undefined8 *)((long)param_3 + 0x21) = uStack_b8;
    *(undefined8 *)((long)param_3 + 0x19) = uStack_c0;
    *(ulong *)((long)param_3 + 0x31) = CONCAT17(uStack_a1,uStack_a8);
    *(undefined8 *)((long)param_3 + 0x29) = uStack_b0;
    param_1 = CONCAT71(uStack_a0,uStack_a1);
    *(undefined8 *)(param_3 + 0x10) = uStack_99;
    *(undefined8 *)(param_3 + 0xe) = param_1;
    *(bool *)(param_3 + 0x12) = !bVar3;
    unaff_x20 = *(long *)(param_4 + 0x28);
    if (unaff_x20 != 0) {
      pfVar6 = param_3 + 0xd4;
      pfStack_130 = param_3 + 0xd8;
      if (*(char *)(param_3 + 0x12) == '\x01') {
        FUN_1094cf978(&uStack_d0,pfStack_138,unaff_x20 + 0x28);
      }
      else {
        uStack_d0 = *(undefined8 *)(unaff_x20 + 0x28);
        uStack_c8 = CONCAT44(uStack_c8._4_4_,*(undefined4 *)(unaff_x20 + 0x30));
      }
      plVar12 = (long *)(unaff_x20 + 0x10);
      pfVar9 = pfVar6;
      func_0x000107c31944(pfVar6,plVar12);
      pfVar17 = *(float **)(param_3 + 0xd6);
      plStack_120 = plVar12;
      if (pfVar17 != (float *)0x0) {
        uVar20 = (long)pfVar17 - 1;
        if (((ulong)pfVar17 & uVar20) == 0) {
          unaff_x23 = (float *)(uVar20 & (ulong)pfVar9);
        }
        else {
          unaff_x23 = pfVar9;
          if (pfVar17 <= pfVar9) {
            uVar10 = 0;
            if (pfVar17 != (float *)0x0) {
              uVar10 = (ulong)pfVar9 / (ulong)pfVar17;
            }
            unaff_x23 = (float *)((long)pfVar9 - uVar10 * (long)pfVar17);
          }
        }
        puVar7 = *(undefined8 **)(*(long *)pfVar6 + (long)unaff_x23 * 8);
        if (puVar7 != (undefined8 *)0x0) {
          for (plVar19 = (long *)*puVar7; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
            pfVar8 = (float *)plVar19[1];
            if (pfVar8 == pfVar9) {
              pfVar8 = pfVar6;
              func_0x000104c4fbc4(pfVar6,plVar19 + 2,plVar12);
              if (((ulong)pfVar8 & 1) != 0) goto LAB_1094eef64;
            }
            else {
              if (((ulong)pfVar17 & uVar20) == 0) {
                pfVar8 = (float *)((ulong)pfVar8 & uVar20);
              }
              else if (pfVar17 <= pfVar8) {
                uVar10 = 0;
                if (pfVar17 != (float *)0x0) {
                  uVar10 = (ulong)pfVar8 / (ulong)pfVar17;
                }
                pfVar8 = (float *)((long)pfVar8 - uVar10 * (long)pfVar17);
              }
              if (pfVar8 != unaff_x23) break;
            }
          }
        }
      }
      plVar19 = (long *)0x40;
      __Znwm();
      uStack_110 = SUB81(plVar19,0);
      uStack_10f = (undefined7)((ulong)plVar19 >> 8);
      uStack_108 = SUB81(pfVar6,0);
      uStack_107 = (undefined7)((ulong)pfVar6 >> 8);
      uStack_100 = 0;
      uStack_ff = 0;
      *plVar19 = 0;
      plVar19[1] = (long)pfVar9;
      if (*(char *)(unaff_x20 + 0x27) < '\0') {
        func_0x000107c3192c(plVar19 + 2,*(undefined8 *)(unaff_x20 + 0x10),
                            *(undefined8 *)(unaff_x20 + 0x18));
      }
      else {
        lVar5 = plStack_120[1];
        lVar4 = *plStack_120;
        plVar19[4] = plStack_120[2];
        plVar19[3] = lVar5;
        plVar19[2] = lVar4;
      }
      plVar19[5] = 0;
      plVar19[6] = 0;
      plVar19[7] = 0;
      uStack_100 = 1;
      if ((pfVar17 == (float *)0x0) ||
         (param_3[0xdc] * (float)pfVar17 < (float)(*(long *)(param_3 + 0xda) + 1))) {
        uVar20 = 1;
        if ((float *)0x2 < pfVar17) {
          uVar20 = (ulong)(((ulong)pfVar17 & (long)pfVar17 - 1U) != 0);
        }
        pfVar8 = (float *)(uVar20 | (long)pfVar17 << 1);
        pfVar17 = (float *)(long)((float)(*(long *)(param_3 + 0xda) + 1) / param_3[0xdc]);
        if (pfVar8 <= pfVar17) {
          pfVar8 = pfVar17;
        }
        if ((long)pfVar8 - 1U == 0) {
          pfVar8 = (float *)0x2;
        }
        else if (((ulong)pfVar8 & (long)pfVar8 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        pfVar17 = *(float **)(param_3 + 0xd6);
        if (pfVar17 < pfVar8) {
LAB_1094eed74:
          pfVar17 = pfVar8;
          if ((ulong)pfVar17 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_1094ef1f0;
          }
          lVar4 = (long)pfVar17 << 3;
          __Znwm();
          lVar5 = *(long *)pfVar6;
          *(long *)pfVar6 = lVar4;
          if (lVar5 != 0) {
            __ZdlPv();
          }
          pfVar8 = (float *)0x0;
          *(float **)(param_3 + 0xd6) = pfVar17;
          do {
            *(undefined8 *)(*(long *)pfVar6 + (long)pfVar8 * 8) = 0;
            pfVar8 = (float *)((long)pfVar8 + 1);
          } while (pfVar17 != pfVar8);
          plVar12 = *(long **)pfStack_130;
          if (plVar12 != (long *)0x0) {
            pfVar8 = (float *)plVar12[1];
            uVar20 = (long)pfVar17 - 1;
            if (((ulong)pfVar17 & uVar20) == 0) {
              pfVar8 = (float *)((ulong)pfVar8 & uVar20);
            }
            else if (pfVar17 <= pfVar8) {
              uVar10 = 0;
              if (pfVar17 != (float *)0x0) {
                uVar10 = (ulong)pfVar8 / (ulong)pfVar17;
              }
              pfVar8 = (float *)((long)pfVar8 - uVar10 * (long)pfVar17);
            }
            *(float **)(*(long *)pfVar6 + (long)pfVar8 * 8) = pfStack_130;
            plVar14 = (long *)*plVar12;
            while (plVar14 != (long *)0x0) {
              pfVar16 = (float *)plVar14[1];
              if (((ulong)pfVar17 & uVar20) == 0) {
                pfVar16 = (float *)((ulong)pfVar16 & uVar20);
              }
              else if (pfVar17 <= pfVar16) {
                uVar10 = 0;
                if (pfVar17 != (float *)0x0) {
                  uVar10 = (ulong)pfVar16 / (ulong)pfVar17;
                }
                pfVar16 = (float *)((long)pfVar16 - uVar10 * (long)pfVar17);
              }
              plVar15 = plVar14;
              if (pfVar16 != pfVar8) {
                lVar4 = *(long *)pfVar6;
                if (*(long *)(lVar4 + (long)pfVar16 * 8) == 0) {
                  *(long **)(lVar4 + (long)pfVar16 * 8) = plVar12;
                  pfVar8 = pfVar16;
                }
                else {
                  *plVar12 = *plVar14;
                  *plVar14 = **(undefined8 **)(lVar4 + (long)pfVar16 * 8);
                  **(long **)(lVar4 + (long)pfVar16 * 8) = (long)plVar14;
                  plVar15 = plVar12;
                }
              }
              plVar12 = plVar15;
              plVar14 = (long *)*plVar15;
            }
          }
        }
        else if (pfVar8 < pfVar17) {
          pfVar16 = (float *)(long)((float)*(ulong *)(param_3 + 0xda) / param_3[0xdc]);
          if ((pfVar17 < (float *)0x3) || (((ulong)pfVar17 & (long)pfVar17 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((float *)0x1 < pfVar16) {
            pfVar16 = (float *)(1L << (-LZCOUNT((long)pfVar16 + -1) & 0x3fU));
          }
          if (pfVar8 <= pfVar16) {
            pfVar8 = pfVar16;
          }
          if (pfVar8 < pfVar17) {
            if (pfVar8 != (float *)0x0) goto LAB_1094eed74;
            pfVar6[0] = 0.0;
            pfVar6[1] = 0.0;
            if (*(long *)pfVar6 != 0) {
              __ZdlPv();
            }
            pfVar17 = (float *)0x0;
            param_3[0xd6] = 0.0;
            param_3[0xd7] = 0.0;
          }
          else {
            pfVar17 = *(float **)(param_3 + 0xd6);
          }
        }
        if (((ulong)pfVar17 & (long)pfVar17 - 1U) == 0) {
          unaff_x23 = (float *)((long)pfVar17 - 1U & (ulong)pfVar9);
        }
        else {
          unaff_x23 = pfVar9;
          if (pfVar17 <= pfVar9) {
            uVar20 = 0;
            if (pfVar17 != (float *)0x0) {
              uVar20 = (ulong)pfVar9 / (ulong)pfVar17;
            }
            unaff_x23 = (float *)((long)pfVar9 - uVar20 * (long)pfVar17);
          }
        }
      }
      lVar4 = *(long *)pfVar6;
      plVar12 = *(long **)(lVar4 + (long)unaff_x23 * 8);
      if (plVar12 == (long *)0x0) {
        *plVar19 = *(long *)pfStack_130;
        *(long **)pfStack_130 = plVar19;
        *(float **)(lVar4 + (long)unaff_x23 * 8) = pfStack_130;
        if (*plVar19 != 0) {
          pfVar9 = *(float **)(*plVar19 + 8);
          if (((ulong)pfVar17 & (long)pfVar17 - 1U) == 0) {
            pfVar9 = (float *)((ulong)pfVar9 & (long)pfVar17 - 1U);
          }
          else if (pfVar17 <= pfVar9) {
            uVar20 = 0;
            if (pfVar17 != (float *)0x0) {
              uVar20 = (ulong)pfVar9 / (ulong)pfVar17;
            }
            pfVar9 = (float *)((long)pfVar9 - uVar20 * (long)pfVar17);
          }
          *(long **)(*(long *)pfVar6 + (long)pfVar9 * 8) = plVar19;
        }
      }
      else {
        *plVar19 = *plVar12;
        *plVar12 = (long)plVar19;
      }
      *(long *)(param_3 + 0xda) = *(long *)(param_3 + 0xda) + 1;
LAB_1094eef64:
      param_4 = (float *)plVar19[5];
      lVar4 = plVar19[6];
      lVar21 = lVar4 - (long)param_4;
      uVar13 = (lVar21 >> 2) * -0x5555555555555555;
      uVar10 = *(long *)(param_3 + 0xc2) - *(long *)(param_3 + 0xc0) >> 2;
      uVar20 = uVar10 + (lVar21 >> 2) * 0x5555555555555555;
      lVar5 = lStack_128;
      if (uVar20 != 0) {
        if (uVar10 < uVar13 || uVar20 == 0) {
          if (uVar10 < uVar13) {
            plVar19[6] = (long)(param_4 + uVar10 * 3);
          }
        }
        else if ((ulong)((plVar19[7] - lVar4 >> 2) * -0x5555555555555555) < uVar20) {
          if (0x1555555555555555 < uVar10) {
            FUN_1094ef494();
LAB_1094ef1f0:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1094ef1f4);
            (*pcVar1)();
          }
          lVar4 = plVar19[7] - (long)param_4 >> 2;
          uVar13 = lVar4 * 0x5555555555555556;
          if (uVar13 < uVar10 || uVar13 - uVar10 == 0) {
            uVar13 = uVar10;
          }
          if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
            uVar13 = 0x1555555555555555;
          }
          if (0x1555555555555555 < uVar13) {
            func_0x000104c4f740();
            goto LAB_1094ef1f0;
          }
          lVar4 = uVar13 * 0xc;
          __Znwm();
          lVar18 = ((uVar20 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
          _bzero(lVar4 + lVar21,lVar18);
          _memcpy(lVar4,param_4,lVar21);
          lVar5 = lStack_128;
          plVar19[5] = lVar4;
          plVar19[6] = lVar4 + lVar21 + lVar18;
          plVar19[7] = lVar4 + uVar13 * 0xc;
          if (param_4 != (float *)0x0) {
            __ZdlPv(param_4);
          }
        }
        else {
          lVar5 = ((uVar20 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
          _bzero(lVar4,lVar5);
          plVar19[6] = lVar4 + lVar5;
          lVar5 = lStack_128;
        }
        param_4 = (float *)plVar19[5];
      }
      fVar24 = (float)*(ulong *)(lVar5 + 8);
      param_5 = 0;
      uVar23 = 0x1094ef0d8;
      pfVar6 = param_3;
      ppuVar22 = (undefined1 **)&stack0xfffffffffffffff0;
      fVar25 = (float)uStack_d0;
      goto SUB_1094ef250;
    }
    param_4 = pfVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
      return pfVar9;
    }
    goto LAB_1094ef1f4;
  }
  pfVar6 = (float *)&UNK_10f5705dd;
  func_0x000105688514();
  func_0x0001094ef5e0(&uStack_110);
  pfVar9 = pfVar6;
  __Unwind_Resume();
  puStack_150 = &stack0xfffffffffffffff0;
  if (pfVar9[0xb8] == 9.80909e-45 || pfVar9[0xb8] == 1.4013e-45) {
    uStack_148 = 0x1094ef228;
    if (*(char *)(pfVar9 + 0x1e) == '\x01') {
      if ((*(byte *)(param_5 + 0x58) & 1) == 0) {
        pfVar6 = param_4 + 0x24;
        if (pfVar6 != pfVar9 + 0x14) {
          param_4[0x2c] = pfVar9[0x1c];
          plVar12 = *(long **)(pfVar9 + 0x18);
          lVar4 = *(long *)(param_4 + 0x26);
          pfVar9 = pfVar6;
          if (lVar4 != 0) {
            lVar5 = 0;
            do {
              *(undefined8 *)(*(long *)pfVar6 + lVar5 * 8) = 0;
              lVar5 = lVar5 + 1;
            } while (lVar4 != lVar5);
            plVar14 = *(long **)(param_4 + 0x28);
            param_4[0x28] = 0.0;
            param_4[0x29] = 0.0;
            param_4[0x2a] = 0.0;
            param_4[0x2b] = 0.0;
            plVar19 = plVar14;
            if (plVar14 != (long *)0x0 && plVar12 != (long *)0x0) {
              do {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (plVar19 + 2,plVar12 + 2);
                plVar19[5] = plVar12[5];
                *(int *)(plVar19 + 6) = (int)plVar12[6];
                plVar14 = (long *)*plVar19;
                FUN_1094ddefc(pfVar6,plVar19);
                plVar12 = (long *)*plVar12;
                plVar19 = plVar14;
              } while (plVar14 != (long *)0x0 && plVar12 != (long *)0x0);
            }
            func_0x0001094dda5c(pfVar6,plVar14);
          }
          for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            pfVar9 = pfVar6;
            FUN_1094de3d0(pfVar6,plVar12 + 2);
          }
          return pfVar9;
        }
      }
      else {
        for (plVar12 = *(long **)(pfVar9 + 0x18); plVar12 != (long *)0x0; plVar12 = (long *)*plVar12
            ) {
          FUN_1094cf978(&uStack_198,param_5 + 0x18,plVar12 + 5);
          pfVar9 = param_4 + 0x24;
          plStack_188 = plVar12 + 2;
          FUN_1094edafc(pfVar9,plVar12 + 2,&UNK_10dd5b8f9,&plStack_188,&uStack_189);
          *(undefined8 *)(pfVar9 + 10) = uStack_198;
          pfVar9[0xc] = fStack_190;
        }
      }
    }
    return pfVar9;
  }
  ppuVar2 = &puStack_150;
  ppuVar22 = &puStack_150;
  uStack_148 = 0x1094ef228;
  param_3 = (float *)&UNK_10f570619;
  uVar23 = 0x1094ef250;
  func_0x000105688514();
SUB_1094ef250:
  fVar26 = param_4[2];
  fVar27 = fVar24 - fVar26;
  fVar28 = 0.0;
  if (fVar26 != 0.0) {
    fVar28 = fVar27 * *(float *)(*(long *)(param_3 + 0xc6) + param_5 * 4) * 6.2831855;
    fVar28 = fVar28 / (fVar28 + 1.0);
    fVar28 = param_4[1] * (1.0 - fVar28) + ((fVar25 - *param_4) / fVar27) * fVar28;
  }
  fVar27 = fVar27 * (*(float *)(*(long *)(param_3 + 0xc0) + param_5 * 4) +
                    ABS(fVar28) * *(float *)(*(long *)(param_3 + 0xcc) + param_5 * 4)) * 6.2831855;
  fVar27 = fVar27 / (fVar27 + 1.0);
  if (fVar26 != 0.0) {
    fVar25 = *param_4 * (1.0 - fVar27) + fVar25 * fVar27;
  }
  if (NAN(fVar25)) {
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar22;
    *(undefined8 *)((long)ppuVar2 + -8) = uVar23;
    pfVar9 = (float *)&UNK_10f570653;
    func_0x000105688514();
    *(long *)((long)ppuVar2 + -0x30) = unaff_x20;
    *(float **)((long)ppuVar2 + -0x28) = pfVar6;
    *(undefined1 **)((long)ppuVar2 + -0x20) = (undefined1 *)((long)ppuVar2 + -0x10);
    *(code **)((long)ppuVar2 + -0x18) = FUN_1094ef314;
    func_0x0001094ef4a8(pfVar9 + 0xd4);
    func_0x0001094ef560(pfVar9 + 0xb6);
    if (*(char *)(pfVar9 + 0xb4) == '\x01') {
      FUN_1094e0cf8(pfVar9 + 0x22);
    }
    *(undefined ***)pfVar9 = &PTR_FUN_110af9078;
    if (*(char *)(pfVar9 + 0x1e) == '\x01') {
      func_0x0001094dda24(pfVar9 + 0x14);
    }
    return pfVar9;
  }
  *param_4 = fVar25;
  param_4[1] = ABS(fVar28);
  param_4[2] = fVar24;
  return param_3;
}



/* Entry: 1094ef228; end: 1094ef313;  */

float * FUN_1094ef228(float param_1,float param_2,float *param_3,float *param_4,long param_5)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_58;
  float fStack_50;
  undefined1 uStack_49;
  long *plStack_48;
  
  if (param_3[0xb8] == 9.80909e-45 || param_3[0xb8] == 1.4013e-45) {
    if (*(char *)(param_3 + 0x1e) == '\x01') {
      if ((*(byte *)(param_5 + 0x58) & 1) == 0) {
        pfVar2 = param_4 + 0x24;
        if (pfVar2 != param_3 + 0x14) {
          param_4[0x2c] = param_3[0x1c];
          plVar7 = *(long **)(param_3 + 0x18);
          lVar3 = *(long *)(param_4 + 0x26);
          pfVar1 = pfVar2;
          if (lVar3 != 0) {
            lVar4 = 0;
            do {
              *(undefined8 *)(*(long *)pfVar2 + lVar4 * 8) = 0;
              lVar4 = lVar4 + 1;
            } while (lVar3 != lVar4);
            plVar5 = *(long **)(param_4 + 0x28);
            param_4[0x28] = 0.0;
            param_4[0x29] = 0.0;
            param_4[0x2a] = 0.0;
            param_4[0x2b] = 0.0;
            plVar6 = plVar5;
            if (plVar5 != (long *)0x0 && plVar7 != (long *)0x0) {
              do {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (plVar6 + 2,plVar7 + 2);
                plVar6[5] = plVar7[5];
                *(int *)(plVar6 + 6) = (int)plVar7[6];
                plVar5 = (long *)*plVar6;
                FUN_1094ddefc(pfVar2,plVar6);
                plVar7 = (long *)*plVar7;
                plVar6 = plVar5;
              } while (plVar5 != (long *)0x0 && plVar7 != (long *)0x0);
            }
            func_0x0001094dda5c(pfVar2,plVar5);
          }
          for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            pfVar1 = pfVar2;
            FUN_1094de3d0(pfVar2,plVar7 + 2);
          }
          return pfVar1;
        }
      }
      else {
        for (plVar7 = *(long **)(param_3 + 0x18); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          FUN_1094cf978(&uStack_58,param_5 + 0x18,plVar7 + 5);
          param_3 = param_4 + 0x24;
          plStack_48 = plVar7 + 2;
          FUN_1094edafc(param_3,plVar7 + 2,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
          *(undefined8 *)(param_3 + 10) = uStack_58;
          param_3[0xc] = fStack_50;
        }
      }
    }
    return param_3;
  }
  pfVar2 = (float *)&UNK_10f570619;
  func_0x000105688514();
  fVar8 = param_4[2];
  fVar9 = param_1 - fVar8;
  fVar10 = 0.0;
  if (fVar8 != 0.0) {
    fVar10 = fVar9 * *(float *)(*(long *)(pfVar2 + 0xc6) + param_5 * 4) * 6.2831855;
    fVar10 = fVar10 / (fVar10 + 1.0);
    fVar10 = param_4[1] * (1.0 - fVar10) + ((param_2 - *param_4) / fVar9) * fVar10;
  }
  fVar9 = fVar9 * (*(float *)(*(long *)(pfVar2 + 0xc0) + param_5 * 4) +
                  ABS(fVar10) * *(float *)(*(long *)(pfVar2 + 0xcc) + param_5 * 4)) * 6.2831855;
  fVar9 = fVar9 / (fVar9 + 1.0);
  if (fVar8 != 0.0) {
    param_2 = *param_4 * (1.0 - fVar9) + param_2 * fVar9;
  }
  if (NAN(param_2)) {
    pfVar2 = (float *)&UNK_10f570653;
    func_0x000105688514();
    FUN_1094ef4a8(pfVar2 + 0xd4);
    func_0x0001094ef560(pfVar2 + 0xb6);
    if (*(char *)(pfVar2 + 0xb4) == '\x01') {
      FUN_1094e0cf8(pfVar2 + 0x22);
    }
    *(undefined ***)pfVar2 = &PTR_FUN_110af9078;
    if (*(char *)(pfVar2 + 0x1e) == '\x01') {
      func_0x0001094dda24(pfVar2 + 0x14);
    }
    return pfVar2;
  }
  *param_4 = param_2;
  param_4[1] = ABS(fVar10);
  param_4[2] = param_1;
  return pfVar2;
}



/* Entry: 1094ef314; end: 1094ef3db;  */

undefined8 * FUN_1094ef314(undefined8 *param_1)

{
  FUN_1094ef4a8(param_1 + 0x6a);
  func_0x0001094ef560(param_1 + 0x5b);
  if (*(char *)(param_1 + 0x5a) == '\x01') {
    FUN_1094e0cf8(param_1 + 0x11);
  }
  *param_1 = &PTR_FUN_110af9078;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_1094dda24(param_1 + 10);
  }
  return param_1;
}



/* Entry: 1094ef3dc; end: 1094ef3ef;  */

long FUN_1094ef3dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x2d8;
  if (*(char *)(param_1 + 0x348) == '\0') {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1094ef3f0; end: 1094ef493;  */

void FUN_1094ef3f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_270 [584];
  char cStack_28;
  
  auStack_270[0] = 0;
  cStack_28 = '\0';
  FUN_1094e0e58(param_1 + 0x88,auStack_270);
  if (cStack_28 == '\x01') {
    FUN_1094e0cf8(auStack_270);
  }
  if (*(long *)(param_1 + 0x368) != 0) {
    func_0x0001094ef4e0(*(undefined8 *)(param_1 + 0x360));
    *(undefined8 *)(param_1 + 0x360) = 0;
    lVar1 = *(long *)(param_1 + 0x358);
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x350) + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    *(undefined8 *)(param_1 + 0x368) = 0;
  }
  return;
}



/* Entry: 1094ef494; end: 1094ef4a7;  */

long * FUN_1094ef494(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  func_0x0001094ef4e0(plVar1[2]);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 1094ef4a8; end: 1094ef627;  */

long * FUN_1094ef4a8(long *param_1)

{
  long lVar1;
  
  func_0x0001094ef4e0(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094ef628; end: 1094ef9eb;  */

/* WARNING: Removing unreachable block (ram,0x0001094ef8dc) */
/* WARNING: Removing unreachable block (ram,0x0001094ef6bc) */
/* WARNING: Removing unreachable block (ram,0x0001094ef774) */
/* WARNING: Removing unreachable block (ram,0x0001094ef8fc) */

long * FUN_1094ef628(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar9 = *param_2;
  func_0x000107c31940(&uStack_60,&UNK_10f570696);
  FUN_1093781f4(uVar9,&uStack_60);
  if ((int)uVar9 == 0) {
    uVar8 = 1;
  }
  else {
    uVar9 = *param_2;
    func_0x000107c31940(&plStack_78,&UNK_10f5706a6);
    FUN_1093781f4(uVar9,&plStack_78);
    uVar8 = (uint)uVar9 ^ 1;
    if (cStack_61 < '\0') {
      __ZdlPv(plStack_78);
    }
  }
  if ((uVar8 & 1) == 0) {
    uVar9 = *param_2;
    func_0x000107c31940(&plStack_78,&UNK_10f570696);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    FUN_1094a8f9c(&uStack_60,uVar9,&plStack_78,&uStack_90);
    func_0x000107c3193c(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = uStack_58;
    *(undefined8 *)(param_1 + 8) = uStack_60;
    *(undefined8 *)(param_1 + 0x18) = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    puStack_a0 = &uStack_60;
    func_0x000104c607c8(&puStack_a0);
    puStack_a0 = &uStack_90;
    func_0x000104c607c8(&puStack_a0);
    if (cStack_61 < '\0') {
      __ZdlPv(plStack_78);
    }
    uVar9 = *param_2;
    func_0x000107c31940(&uStack_60,&UNK_10f5706a6);
    FUN_1094a68cc(&puStack_a0,uVar9,&uStack_60);
    func_0x000107c31940(&uStack_60,&DAT_10f6389e8);
    ppuVar4 = &puStack_a0;
    FUN_1093781f4(ppuVar4,&uStack_60);
    if (((ulong)ppuVar4 & 1) == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      func_0x000107c31940(&plStack_78,&DAT_10f6389e8);
      uStack_b8 = 0;
      uStack_b0 = 0;
      lStack_a8 = 0;
      FUN_1094a6b30(&uStack_60,&puStack_a0,&plStack_78,&uStack_b8);
      if (lStack_a8 < 0) {
        __ZdlPv(uStack_b8);
      }
      if (cStack_61 < '\0') {
        __ZdlPv(plStack_78);
      }
      FUN_1094e9ca0();
      FUN_1094ec2f8(&plStack_78);
      plVar7 = plStack_78;
      plStack_78 = (long *)0x0;
      plVar5 = *(long **)(param_1 + 0x20);
      *(long **)(param_1 + 0x20) = plVar7;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
        plVar7 = plStack_78;
        plStack_78 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        plVar7 = *(long **)(param_1 + 0x20);
      }
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar5 = (long *)0x28;
        __Znwm();
        plVar5[1] = 0;
        plVar5[2] = 0;
        *plVar5 = (long)&PTR_FUN_110af8da0;
        plStack_78 = plVar5 + 3;
        plVar5[4] = lStack_98;
        *plStack_78 = (long)puStack_a0;
        if (lStack_98 != 0) {
          plVar1 = (long *)(lStack_98 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plStack_70 = plVar5;
        (**(code **)(*plVar7 + 0x10))(plVar7,&plStack_78);
        plVar5 = plStack_70;
        if (plStack_70 != (long *)0x0) {
          plVar1 = plStack_70 + 1;
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
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
      }
    }
    FUN_109380f8c(&puStack_a0);
  }
  else {
    plVar7 = (long *)0x0;
  }
  return plVar7;
}



/* Entry: 1094ef9ec; end: 1094f0057;  */

void FUN_1094ef9ec(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *unaff_x28;
  long *plStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  long lStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  float fStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  lVar2 = param_1;
  FUN_1094e9714();
  if ((int)lVar2 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_10937e740(&plStack_140,&UNK_10f570743);
      FUN_109388c6c(1,&UNK_10f5706b4,&DAT_10f3725f0,0x29,&plStack_140);
      if (uStack_130._7_1_ < '\0') {
        __ZdlPv(plStack_140);
      }
    }
    else {
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      lStack_a0 = 0;
      uStack_90 = 0x3f800000;
      plStack_d8 = (long *)0x0;
      lStack_e0 = 0;
      lStack_c8 = 0;
      plStack_d0 = (long *)0x0;
      fStack_c0 = 1.0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      lStack_100 = 0;
      fStack_f0 = 1.0;
      FUN_1094dfd00(&uStack_b0,
                    (long)(float)(ulong)((*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) *
                                        -0x5555555555555555));
      FUN_1094cfa50(&lStack_e0,
                    (long)((float)(ulong)((*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3)
                                         * -0x5555555555555555) / fStack_c0));
      FUN_1094dfd00(&uStack_110,
                    (long)((float)(ulong)((*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3)
                                         * -0x5555555555555555) / fStack_f0));
      puVar8 = *(undefined8 **)(param_1 + 8);
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      if (puVar8 != puVar1) {
        do {
          lVar2 = param_2 + 0x90;
          func_0x0001094e1f2c(lVar2,puVar8);
          if (lVar2 != 0) {
            FUN_1094f0114(&plStack_140,puVar8,lVar2 + 0x28);
            FUN_1094f01b0(&uStack_b0,&plStack_140,&plStack_140);
            if (uStack_130 < 0) {
              __ZdlPv(plStack_140);
            }
          }
          lVar2 = param_2 + 0x40;
          func_0x0001094e1d64(lVar2,puVar8);
          if (lVar2 != 0) {
            if (*(char *)((long)puVar8 + 0x17) < '\0') {
              func_0x000107c3192c(&plStack_140,*puVar8,puVar8[1]);
            }
            else {
              lStack_138 = puVar8[1];
              plStack_140 = (long *)*puVar8;
              uStack_130 = puVar8[2];
            }
            lStack_128 = *(long *)(lVar2 + 0x28);
            lStack_120 = *(long *)(lVar2 + 0x30);
            uStack_118 = *(undefined4 *)(lVar2 + 0x38);
            plVar7 = &lStack_e0;
            func_0x000107c31944(plVar7,&plStack_140);
            plVar10 = plStack_d8;
            if (plStack_d8 != (long *)0x0) {
              uVar9 = (long)plStack_d8 - 1;
              if (((ulong)plStack_d8 & uVar9) == 0) {
                unaff_x28 = (long *)(uVar9 & (ulong)plVar7);
              }
              else {
                unaff_x28 = plVar7;
                if (plStack_d8 <= plVar7) {
                  uVar6 = 0;
                  if (plStack_d8 != (long *)0x0) {
                    uVar6 = (ulong)plVar7 / (ulong)plStack_d8;
                  }
                  unaff_x28 = (long *)((long)plVar7 - uVar6 * (long)plStack_d8);
                }
              }
              plVar3 = *(long **)(lStack_e0 + (long)unaff_x28 * 8);
              if (plVar3 != (long *)0x0) {
                for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
                  plVar4 = (long *)plVar3[1];
                  if (plVar4 == plVar7) {
                    plVar4 = &lStack_e0;
                    func_0x000104c4fbc4(plVar4,plVar3 + 2,&plStack_140);
                    if (((ulong)plVar4 & 1) != 0) goto LAB_1094efd90;
                  }
                  else {
                    if (((ulong)plVar10 & uVar9) == 0) {
                      plVar4 = (long *)((ulong)plVar4 & uVar9);
                    }
                    else if (plVar10 <= plVar4) {
                      uVar6 = 0;
                      if (plVar10 != (long *)0x0) {
                        uVar6 = (ulong)plVar4 / (ulong)plVar10;
                      }
                      plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar10);
                    }
                    if (plVar4 != unaff_x28) break;
                  }
                }
              }
            }
            plVar3 = (long *)0x40;
            __Znwm();
            plStack_78 = &lStack_e0;
            uStack_70 = 0;
            *plVar3 = 0;
            plVar3[1] = (long)plVar7;
            plStack_80 = plVar3;
            if (uStack_130 < 0) {
              func_0x000107c3192c(plVar3 + 2,plStack_140,lStack_138);
            }
            else {
              plVar3[3] = lStack_138;
              plVar3[2] = (long)plStack_140;
              plVar3[4] = uStack_130;
            }
            plVar3[5] = lStack_128;
            plVar3[6] = lStack_120;
            *(undefined4 *)(plVar3 + 7) = uStack_118;
            uStack_70 = CONCAT71(uStack_70._1_7_,1);
            if ((plVar10 == (long *)0x0) || (fStack_c0 * (float)plVar10 < (float)(lStack_c8 + 1))) {
              uVar9 = 1;
              if ((long *)0x2 < plVar10) {
                uVar9 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
              }
              uVar9 = uVar9 | (long)plVar10 << 1;
              uVar6 = (ulong)((float)(lStack_c8 + 1) / fStack_c0);
              if (uVar9 <= uVar6) {
                uVar9 = uVar6;
              }
              FUN_1094cfa50(&lStack_e0,uVar9);
              plVar10 = plStack_d8;
              if (((ulong)plStack_d8 & (long)plStack_d8 - 1U) == 0) {
                unaff_x28 = (long *)((long)plStack_d8 - 1U & (ulong)plVar7);
              }
              else {
                unaff_x28 = plVar7;
                if (plStack_d8 <= plVar7) {
                  uVar9 = 0;
                  if (plStack_d8 != (long *)0x0) {
                    uVar9 = (ulong)plVar7 / (ulong)plStack_d8;
                  }
                  unaff_x28 = (long *)((long)plVar7 - uVar9 * (long)plStack_d8);
                }
              }
            }
            plVar7 = *(long **)(lStack_e0 + (long)unaff_x28 * 8);
            if (plVar7 == (long *)0x0) {
              *plStack_80 = (long)plStack_d0;
              plStack_d0 = plStack_80;
              *(long ***)(lStack_e0 + (long)unaff_x28 * 8) = &plStack_d0;
              if (*plStack_80 != 0) {
                plVar7 = *(long **)(*plStack_80 + 8);
                if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
                  plVar7 = (long *)((ulong)plVar7 & (long)plVar10 - 1U);
                }
                else if (plVar10 <= plVar7) {
                  uVar9 = 0;
                  if (plVar10 != (long *)0x0) {
                    uVar9 = (ulong)plVar7 / (ulong)plVar10;
                  }
                  plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar10);
                }
                *(long **)(lStack_e0 + (long)plVar7 * 8) = plStack_80;
              }
            }
            else {
              *plStack_80 = *plVar7;
              *plVar7 = (long)plStack_80;
            }
            lStack_c8 = lStack_c8 + 1;
LAB_1094efd90:
            if (uStack_130 < 0) {
              __ZdlPv(plStack_140);
            }
          }
          lVar2 = param_2 + 0x68;
          func_0x0001094e1f2c(lVar2,puVar8);
          if (lVar2 != 0) {
            FUN_1094f0114(&plStack_140,puVar8,lVar2 + 0x28);
            FUN_1094f01b0(&uStack_110,&plStack_140,&plStack_140);
            if (uStack_130 < 0) {
              __ZdlPv(plStack_140);
            }
          }
          puVar8 = puVar8 + 3;
        } while (puVar8 != puVar1);
      }
      FUN_1094f0434(&uStack_b0,param_2 + 0x90);
      func_0x0001094f0540(&lStack_e0,param_2 + 0x40);
      FUN_1094f0434(&uStack_110,param_2 + 0x68);
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),param_2,param_3);
      FUN_1094f0434(&uStack_b0,param_2 + 0x90);
      func_0x0001094f0540(&lStack_e0,param_2 + 0x40);
      FUN_1094f0434(&uStack_110,param_2 + 0x68);
      for (plVar7 = (long *)lStack_a0; plVar10 = plStack_d0, plVar7 != (long *)0x0;
          plVar7 = (long *)*plVar7) {
        plStack_140 = plVar7 + 2;
        lVar2 = param_2 + 0x90;
        FUN_1094edafc(lVar2,plStack_140,&UNK_10dd5b8f9,&plStack_140,&plStack_80);
        *(long *)(lVar2 + 0x28) = plVar7[5];
        *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(plVar7 + 6);
      }
      for (; plVar7 = (long *)lStack_100, plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        plStack_140 = plVar10 + 2;
        lVar2 = param_2 + 0x40;
        FUN_1094e1a28(lVar2,plStack_140,&UNK_10dd5b8f9,&plStack_140,&plStack_80);
        *(long *)(lVar2 + 0x28) = plVar10[5];
        lVar5 = plVar10[6];
        *(int *)(lVar2 + 0x38) = (int)plVar10[7];
        *(long *)(lVar2 + 0x30) = lVar5;
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plStack_140 = plVar7 + 2;
        lVar2 = param_2 + 0x68;
        FUN_1094edafc(lVar2,plStack_140,&UNK_10dd5b8f9,&plStack_140,&plStack_80);
        *(long *)(lVar2 + 0x28) = plVar7[5];
        *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(plVar7 + 6);
      }
      FUN_1094dda24(&uStack_110);
      func_0x0001094cffd4(&lStack_e0);
      FUN_1094dda24(&uStack_b0);
    }
  }
  return;
}



/* Entry: 1094f0058; end: 1094f00fb;  */

long FUN_1094f0058(long param_1)

{
  long *plVar1;
  long lStack_28;
  
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lStack_28 = param_1 + 8;
  func_0x000104c607c8(&lStack_28);
  return param_1;
}



/* Entry: 1094f00fc; end: 1094f0113;  */

void FUN_1094f00fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001094f0108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  return;
}



/* Entry: 1094f0114; end: 1094f0173;  */

undefined8 * FUN_1094f0114(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[3] = *param_3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 1);
  return param_1;
}



/* Entry: 1094f0174; end: 1094f0183;  */

void FUN_1094f0174(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af8da0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094f0184; end: 1094f01a3;  */

void FUN_1094f0184(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af8da0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094f01a4; end: 1094f01af;  */

void FUN_1094f01a4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_109380a70(param_1 + 0x18,&uStack_30);
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
  FUN_1093818c0(param_1 + 0x18);
  return;
}



/* Entry: 1094f01b0; end: 1094f0433;  */

void FUN_1094f01b0(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x24;
  ulong uVar7;
  
  plVar5 = param_1;
  func_0x000107c31944();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x24 = (long *)(uVar7 & (ulong)plVar5);
    }
    else {
      unaff_x24 = plVar5;
      if (plVar6 <= plVar5) {
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)plVar5 - uVar4 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x24 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar5) {
          plVar2 = param_1;
          func_0x000104c4fbc4(param_1,plVar1 + 2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar4 = 0;
            if (plVar6 != (long *)0x0) {
              uVar4 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar6);
          }
          if (plVar2 != unaff_x24) break;
        }
      }
    }
  }
  plVar1 = (long *)0x38;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar5;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar1 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar1[3] = param_3[1];
    plVar1[2] = lVar3;
    plVar1[4] = param_3[2];
  }
  plVar1[5] = param_3[3];
  *(int *)(plVar1 + 6) = (int)param_3[4];
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    FUN_1094dfd00(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar6 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x24 = plVar5;
      if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        unaff_x24 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
    *(long **)(lVar3 + (long)unaff_x24 * 8) = plVar5;
    if (*plVar1 != 0) {
      plVar5 = *(long **)(*plVar1 + 8);
      if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar6 - 1U);
      }
      else if (plVar6 <= plVar5) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar5 / (ulong)plVar6;
        }
        plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = plVar1;
    }
  }
  else {
    *plVar1 = *plVar5;
    *plVar5 = (long)plVar1;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1094f0434; end: 1094f064b;  */

void FUN_1094f0434(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *param_1;
  *param_1 = 0;
  lVar4 = *param_2;
  *param_2 = 0;
  lVar3 = *param_1;
  *param_1 = lVar4;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  lVar3 = *param_2;
  *param_2 = lVar6;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  lVar3 = param_1[2];
  lVar4 = param_1[1];
  lVar6 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar6;
  param_2[1] = lVar4;
  param_2[2] = lVar3;
  lVar4 = param_1[3];
  param_1[3] = param_2[3];
  param_2[3] = lVar4;
  lVar3 = param_1[4];
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(int *)(param_2 + 4) = (int)lVar3;
  if (param_1[3] != 0) {
    uVar1 = param_1[1];
    uVar5 = *(ulong *)(param_1[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar5 = uVar1 - 1 & uVar5;
    }
    else if (uVar1 <= uVar5) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      uVar5 = uVar5 - uVar2 * uVar1;
    }
    *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
  }
  if (lVar4 != 0) {
    uVar1 = param_2[1];
    uVar5 = *(ulong *)(param_2[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar5 = uVar1 - 1 & uVar5;
    }
    else if (uVar1 <= uVar5) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      uVar5 = uVar5 - uVar2 * uVar1;
    }
    *(long **)(*param_2 + uVar5 * 8) = param_2 + 2;
  }
  return;
}



/* Entry: 1094f064c; end: 1094f0763;  */

long FUN_1094f064c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined **appuStack_98 [2];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 *puStack_38;
  
  FUN_1094f104c(appuStack_98);
  FUN_1094f0764(param_1 + 8,appuStack_98);
  puStack_38 = auStack_50;
  func_0x000104c607c8(&puStack_38);
  puStack_38 = auStack_68;
  func_0x000104c607c8(&puStack_38);
  appuStack_98[0] = &PTR_FUN_110af7e20;
  puStack_38 = auStack_88;
  FUN_1094dd9b4(&puStack_38);
  plStack_a8 = (long *)param_2[1];
  uStack_b0 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1 = param_1 + 8;
  FUN_1094e8fbc(param_1,&uStack_b0);
  plVar1 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar2 = plStack_a8 + 1;
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
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 1094f0764; end: 1094f0823;  */

long FUN_1094f0764(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    FUN_1094dd770(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    func_0x000107c3193c(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    func_0x000107c3193c(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  else {
    FUN_1094f1260(param_1,param_2);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  return param_1;
}



/* Entry: 1094f0824; end: 1094f0fd3;  */

void FUN_1094f0824(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *unaff_x27;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  long lVar26;
  undefined8 uVar27;
  float fVar28;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long lStack_98;
  
  plVar1 = (long *)(param_2 + 0x40);
  func_0x000107c31940(&uStack_a8,&UNK_10f570770);
  plVar6 = plVar1;
  FUN_1094e1944(plVar1,&uStack_a8);
  if (plVar6 == (long *)0x0) {
    bVar3 = true;
  }
  else {
    func_0x000107c31940(&lStack_c0,&UNK_10f570778);
    plVar6 = plVar1;
    FUN_1094e1944(plVar1,&lStack_c0);
    bVar3 = plVar6 == (long *)0x0;
    if (lStack_b0 < 0) {
      __ZdlPv(lStack_c0);
    }
  }
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  if (bVar3) {
    return;
  }
  func_0x000107c31940(&uStack_a8,&UNK_10f570770);
  plVar6 = plVar1;
  FUN_1094e1944(plVar1,&uStack_a8);
  if (plVar6 == (long *)0x0) {
LAB_1094f0f2c:
    FUN_109262df8(&UNK_10f639994);
LAB_1094f0f48:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1094f0f4c);
    (*pcVar2)();
  }
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  func_0x000107c31940(&uStack_a8,&UNK_10f570778);
  plVar13 = plVar1;
  FUN_1094e1944(plVar1,&uStack_a8);
  if (plVar13 == (long *)0x0) {
    FUN_109262df8(&UNK_10f639994);
    goto LAB_1094f0f48;
  }
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  fVar25 = *(float *)(plVar6 + 5);
  fVar28 = *(float *)(plVar13 + 5);
  uVar24 = *(undefined8 *)((long)plVar6 + 0x2c);
  uVar27 = *(undefined8 *)((long)plVar13 + 0x2c);
  fVar23 = (float)uVar24;
  fVar21 = (float)uVar27;
  if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
    uVar18 = *(ulong *)(param_2 + 0x58);
    fVar19 = 0.0;
    if (1 < uVar18) {
      uVar10 = 3;
      unaff_x27 = (long *)0x18;
      uVar7 = 1;
      fVar19 = 0.0;
      do {
        uVar11 = (ulong)((int)uVar7 + 1);
        uVar15 = uVar11;
        uVar16 = uVar10;
        if (uVar11 < uVar18) {
          do {
            plVar14 = plVar1;
            FUN_1094e1944(plVar1,*(long *)(param_1 + 0x50) + uVar7 * 0x18);
            if ((plVar14 == (long *)0x0) ||
               (plVar17 = plVar1, FUN_1094e1944(plVar1,*(long *)(param_1 + 0x50) + uVar15 * 0x18),
               plVar17 == (long *)0x0)) {
              FUN_109262df8(&UNK_10f639994);
              goto LAB_1094f0f2c;
            }
            fVar22 = *(float *)((long)plVar14 + 0x2c) - *(float *)((long)plVar17 + 0x2c);
            fVar22 = SQRT(fVar22 * fVar22 +
                          (*(float *)(plVar14 + 5) - *(float *)(plVar17 + 5)) *
                          (*(float *)(plVar14 + 5) - *(float *)(plVar17 + 5)));
            if (fVar22 <= fVar19) {
              fVar22 = fVar19;
            }
            fVar19 = fVar22;
            uVar18 = *(ulong *)(param_2 + 0x58);
            bVar3 = uVar16 < uVar18;
            uVar15 = uVar16;
            uVar16 = (ulong)((int)uVar16 + 1);
          } while (bVar3);
        }
        uVar10 = (ulong)((int)uVar10 + 1);
        uVar7 = uVar11;
      } while (uVar11 < uVar18);
    }
  }
  else {
    fVar19 = fVar25 - fVar28;
    fVar22 = fVar23 - fVar21;
    fVar19 = SQRT(fVar22 * fVar22 + fVar19 * fVar19);
  }
  fVar22 = *(float *)(param_1 + 0x30);
  func_0x000107c31940(&lStack_c0,&DAT_10f68f0c6);
  plVar14 = plVar1;
  func_0x000107c31944(plVar1,&lStack_c0);
  plVar17 = *(long **)(param_2 + 0x48);
  if (plVar17 != (long *)0x0) {
    uVar18 = (long)plVar17 - 1;
    if (((ulong)plVar17 & uVar18) == 0) {
      unaff_x27 = (long *)(uVar18 & (ulong)plVar14);
    }
    else {
      unaff_x27 = plVar14;
      if (plVar17 <= plVar14) {
        uVar7 = 0;
        if (plVar17 != (long *)0x0) {
          uVar7 = (ulong)plVar14 / (ulong)plVar17;
        }
        unaff_x27 = (long *)((long)plVar14 - uVar7 * (long)plVar17);
      }
    }
    puVar4 = *(undefined8 **)(*plVar1 + (long)unaff_x27 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar4; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        plVar5 = (long *)plVar12[1];
        if (plVar5 == plVar14) {
          plVar5 = plVar1;
          func_0x000104c4fbc4(plVar1,plVar12 + 2,&lStack_c0);
          if (((ulong)plVar5 & 1) != 0) goto LAB_1094f0c38;
        }
        else {
          if (((ulong)plVar17 & uVar18) == 0) {
            plVar5 = (long *)((ulong)plVar5 & uVar18);
          }
          else if (plVar17 <= plVar5) {
            uVar7 = 0;
            if (plVar17 != (long *)0x0) {
              uVar7 = (ulong)plVar5 / (ulong)plVar17;
            }
            plVar5 = (long *)((long)plVar5 - uVar7 * (long)plVar17);
          }
          if (plVar5 != unaff_x27) break;
        }
      }
    }
  }
  plVar12 = (long *)0x40;
  __Znwm();
  lVar8 = lStack_b0;
  lStack_98 = 1;
  *plVar12 = 0;
  plVar12[1] = (long)plVar14;
  plVar12[3] = lStack_b8;
  plVar12[2] = lStack_c0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  plVar12[4] = lVar8;
  plVar12[5] = 0;
  *(undefined4 *)(plVar12 + 6) = 0;
  *(undefined8 *)((long)plVar12 + 0x34) = 0x3f0000003f800000;
  fVar20 = (float)(*(long *)(param_2 + 0x58) + 1);
  plStack_a0 = plVar1;
  if ((plVar17 == (long *)0x0) || (*(float *)(param_2 + 0x60) * (float)plVar17 < fVar20)) {
    uVar18 = 1;
    if ((long *)0x2 < plVar17) {
      uVar18 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
    }
    uVar18 = uVar18 | (long)plVar17 << 1;
    uVar7 = (ulong)(fVar20 / *(float *)(param_2 + 0x60));
    if (uVar18 <= uVar7) {
      uVar18 = uVar7;
    }
    FUN_1094cfa50(plVar1,uVar18);
    plVar17 = *(long **)(param_2 + 0x48);
    if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar17 - 1U & (ulong)plVar14);
    }
    else {
      unaff_x27 = plVar14;
      if (plVar17 <= plVar14) {
        uVar18 = 0;
        if (plVar17 != (long *)0x0) {
          uVar18 = (ulong)plVar14 / (ulong)plVar17;
        }
        unaff_x27 = (long *)((long)plVar14 - uVar18 * (long)plVar17);
      }
    }
  }
  lVar8 = *plVar1;
  plVar5 = *(long **)(lVar8 + (long)unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(param_2 + 0x50);
    *plVar12 = *plVar5;
    *plVar5 = (long)plVar12;
    *(long **)(lVar8 + (long)unaff_x27 * 8) = plVar5;
    if (*plVar12 != 0) {
      plVar5 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar17 - 1U);
      }
      else if (plVar17 <= plVar5) {
        uVar18 = 0;
        if (plVar17 != (long *)0x0) {
          uVar18 = (ulong)plVar5 / (ulong)plVar17;
        }
        plVar5 = (long *)((long)plVar5 - uVar18 * (long)plVar17);
      }
      plVar5 = (long *)(*plVar1 + (long)plVar5 * 8);
      goto LAB_1094f0c28;
    }
  }
  else {
    *plVar12 = *plVar5;
LAB_1094f0c28:
    *plVar5 = (long)plVar12;
  }
  *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + 1;
LAB_1094f0c38:
  fVar25 = (fVar25 + fVar28) * 0.5;
  fVar23 = (fVar23 + fVar21) * 0.5;
  fVar19 = fVar19 * fVar22;
  *(float *)(plVar12 + 5) = fVar25;
  *(ulong *)((long)plVar12 + 0x2c) =
       CONCAT44(((float)((ulong)uVar24 >> 0x20) + (float)((ulong)uVar27 >> 0x20)) * 0.5,fVar23);
  *(undefined8 *)((long)plVar12 + 0x34) = 0x3f0000003f800000;
  if (lStack_b0 < 0) {
    __ZdlPv(lStack_c0);
  }
  *(float *)(param_2 + 0x20) = fVar25 - fVar19 * 0.5;
  *(float *)(param_2 + 0x24) = fVar23 - fVar19 * 0.5;
  *(float *)(param_2 + 0x28) = fVar19;
  *(float *)(param_2 + 0x2c) = fVar19;
  lVar8 = plVar6[5];
  lVar26 = plVar13[5];
  plVar1 = (long *)(param_2 + 0xb8);
  func_0x000107c31940(&lStack_c0,"main");
  plVar6 = plVar1;
  func_0x000107c31944(plVar1,&lStack_c0);
  plVar13 = *(long **)(param_2 + 0xc0);
  if (plVar13 != (long *)0x0) {
    uVar18 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar18) == 0) {
      plVar14 = (long *)(uVar18 & (ulong)plVar6);
    }
    else {
      plVar14 = plVar6;
      if (plVar13 <= plVar6) {
        uVar7 = 0;
        if (plVar13 != (long *)0x0) {
          uVar7 = (ulong)plVar6 / (ulong)plVar13;
        }
        plVar14 = (long *)((long)plVar6 - uVar7 * (long)plVar13);
      }
    }
    puVar4 = *(undefined8 **)(*plVar1 + (long)plVar14 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      for (plVar17 = (long *)*puVar4; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
        plVar12 = (long *)plVar17[1];
        if (plVar12 == plVar6) {
          plVar12 = plVar1;
          func_0x000104c4fbc4(plVar1,plVar17 + 2,&lStack_c0);
          if (((ulong)plVar12 & 1) != 0) goto LAB_1094f0e90;
        }
        else {
          if (((ulong)plVar13 & uVar18) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar18);
          }
          else if (plVar13 <= plVar12) {
            uVar7 = 0;
            if (plVar13 != (long *)0x0) {
              uVar7 = (ulong)plVar12 / (ulong)plVar13;
            }
            plVar12 = (long *)((long)plVar12 - uVar7 * (long)plVar13);
          }
          if (plVar12 != plVar14) break;
        }
      }
    }
  }
  plVar17 = (long *)0x38;
  __Znwm();
  lStack_98 = 1;
  *plVar17 = 0;
  plVar17[1] = (long)plVar6;
  plVar17[3] = lStack_b8;
  plVar17[2] = lStack_c0;
  plVar17[4] = lStack_b0;
  plVar17[5] = 0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  *(undefined4 *)(plVar17 + 6) = 0;
  fVar23 = (float)(*(long *)(param_2 + 0xd0) + 1);
  plStack_a0 = plVar1;
  if ((plVar13 == (long *)0x0) || (*(float *)(param_2 + 0xd8) * (float)plVar13 < fVar23)) {
    uVar18 = 1;
    if ((long *)0x2 < plVar13) {
      uVar18 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
    }
    uVar18 = uVar18 | (long)plVar13 << 1;
    uVar7 = (ulong)(fVar23 / *(float *)(param_2 + 0xd8));
    if (uVar18 <= uVar7) {
      uVar18 = uVar7;
    }
    FUN_1094d7a88(plVar1,uVar18);
    plVar13 = *(long **)(param_2 + 0xc0);
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      plVar14 = (long *)((long)plVar13 - 1U & (ulong)plVar6);
    }
    else {
      plVar14 = plVar6;
      if (plVar13 <= plVar6) {
        uVar18 = 0;
        if (plVar13 != (long *)0x0) {
          uVar18 = (ulong)plVar6 / (ulong)plVar13;
        }
        plVar14 = (long *)((long)plVar6 - uVar18 * (long)plVar13);
      }
    }
  }
  lVar9 = *plVar1;
  plVar6 = *(long **)(lVar9 + (long)plVar14 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)(param_2 + 200);
    *plVar17 = *plVar6;
    *plVar6 = (long)plVar17;
    *(long **)(lVar9 + (long)plVar14 * 8) = plVar6;
    if (*plVar17 == 0) goto LAB_1094f0e84;
    plVar6 = *(long **)(*plVar17 + 8);
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      plVar6 = (long *)((ulong)plVar6 & (long)plVar13 - 1U);
    }
    else if (plVar13 <= plVar6) {
      uVar18 = 0;
      if (plVar13 != (long *)0x0) {
        uVar18 = (ulong)plVar6 / (ulong)plVar13;
      }
      plVar6 = (long *)((long)plVar6 - uVar18 * (long)plVar13);
    }
    plVar6 = (long *)(*plVar1 + (long)plVar6 * 8);
  }
  else {
    *plVar17 = *plVar6;
  }
  *plVar6 = (long)plVar17;
LAB_1094f0e84:
  *(long *)(param_2 + 0xd0) = *(long *)(param_2 + 0xd0) + 1;
LAB_1094f0e90:
  uVar24 = NEON_ext(lVar26,lVar8,4,1);
  uVar27 = NEON_ext(lVar8,lVar26,4,1);
  fVar25 = (float)uVar24 - (float)uVar27;
  fVar21 = (float)((ulong)uVar24 >> 0x20) - (float)((ulong)uVar27 >> 0x20);
  fVar23 = SQRT(fVar21 * fVar21 + fVar25 * fVar25) + 1e-05;
  plVar17[5] = CONCAT44(fVar21 / fVar23,fVar25 / fVar23);
  *(float *)(plVar17 + 6) = 0.0 / fVar23;
  if (lStack_b0 < 0) {
    __ZdlPv(lStack_c0);
  }
  return;
}



/* Entry: 1094f0fd4; end: 1094f1033;  */

long FUN_1094f0fd4(long param_1)

{
  func_0x0001094cffd4(param_1 + 0x70);
  FUN_1094e8658(param_1 + 8);
  return param_1;
}



/* Entry: 1094f1034; end: 1094f104b;  */

long FUN_1094f1034(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  if (*(char *)(param_1 + 0x68) == '\0') {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1094f104c; end: 1094f125f;  */

undefined8 * FUN_1094f104c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 *apuStack_a8 [2];
  char cStack_91;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0x100000001;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_110af8090;
  *(undefined4 *)(param_1 + 5) = 0x40400000;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  func_0x000107c31940(apuStack_a8,"main");
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  func_0x000107c2ac94(param_1 + 6,apuStack_a8,auStack_90,1);
  if (cStack_91 < '\0') {
    __ZdlPv(apuStack_a8[0]);
  }
  func_0x000107c31940(apuStack_a8,&DAT_10f68f0c6);
  func_0x000107c31940(auStack_90,&UNK_10f570770);
  func_0x000107c31940(auStack_78,&UNK_10f570778);
  func_0x000107c31940(alStack_60,&DAT_10f2f4ae0);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar2 = param_1 + 9;
  ppuVar3 = apuStack_a8;
  func_0x000107c2ac94(puVar2,ppuVar3,&lStack_48,4);
  puVar4 = (undefined8 *)0x0;
  do {
    if ((&cStack_49)[(long)puVar4] < '\0') {
      puVar2 = *(undefined8 **)((long)alStack_60 + (long)puVar4);
      __ZdlPv();
    }
    puVar4 = puVar4 + -3;
  } while (puVar4 != (undefined8 *)0xffffffffffffffa0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = -0x60;
  pcVar6 = &cStack_49;
  do {
    if (*pcVar6 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar6 + -0x17));
    }
    lVar5 = lVar5 + 0x18;
    pcVar6 = pcVar6 + -0x18;
  } while (lVar5 != 0);
  apuStack_a8[0] = puVar4;
  func_0x000104c607c8(apuStack_a8);
  *param_1 = &PTR_FUN_110af7e20;
  apuStack_a8[0] = param_1 + 2;
  FUN_1094dd9b4(apuStack_a8);
  __Unwind_Resume();
  *puVar2 = &PTR_FUN_110af7e20;
  puVar2[1] = ppuVar3[1];
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar4 = ppuVar3[2];
  puVar2[3] = ppuVar3[3];
  puVar2[2] = puVar4;
  puVar2[4] = ppuVar3[4];
  ppuVar3[2] = (undefined8 *)0x0;
  ppuVar3[3] = (undefined8 *)0x0;
  ppuVar3[4] = (undefined8 *)0x0;
  *puVar2 = &PTR_FUN_110af8090;
  uVar1 = *(undefined4 *)(ppuVar3 + 5);
  *(undefined1 *)((long)puVar2 + 0x2c) = *(undefined1 *)((long)ppuVar3 + 0x2c);
  *(undefined4 *)(puVar2 + 5) = uVar1;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[6] = 0;
  puVar4 = ppuVar3[6];
  puVar2[7] = ppuVar3[7];
  puVar2[6] = puVar4;
  puVar2[8] = ppuVar3[8];
  ppuVar3[6] = (undefined8 *)0x0;
  ppuVar3[7] = (undefined8 *)0x0;
  ppuVar3[8] = (undefined8 *)0x0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar4 = ppuVar3[9];
  puVar2[10] = ppuVar3[10];
  puVar2[9] = puVar4;
  puVar2[0xb] = ppuVar3[0xb];
  ppuVar3[9] = (undefined8 *)0x0;
  ppuVar3[10] = (undefined8 *)0x0;
  ppuVar3[0xb] = (undefined8 *)0x0;
  return puVar2;
}



/* Entry: 1094f1260; end: 1094f12ef;  */

void FUN_1094f1260(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110af7e20;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = uVar2;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *param_1 = &PTR_FUN_110af8090;
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)((long)param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = uVar2;
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[9] = uVar2;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  return;
}



/* Entry: 1094f12f0; end: 1094f1477;  */

long FUN_1094f12f0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 *puStack_38;
  
  uStack_80 = 0x100000001;
  ppuStack_88 = &PTR_FUN_110af80d0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x3f800000;
  *(undefined8 *)(param_1 + 0x10) = 0x100000001;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_1094dd770(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    FUN_1094f1d40(param_1 + 0x30);
    uStack_60 = 0;
    lVar5 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    *(undefined ***)(param_1 + 8) = &PTR_FUN_110af80d0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  uStack_58 = 0;
  func_0x0001094e64a8(&uStack_60);
  ppuStack_88 = &PTR_FUN_110af7e20;
  puStack_38 = &uStack_78;
  FUN_1094dd9b4(&puStack_38);
  plStack_98 = (long *)param_2[1];
  uStack_a0 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1 = param_1 + 8;
  FUN_1094e8fbc(param_1,&uStack_a0);
  plVar1 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar2 = plStack_98 + 1;
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
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 1094f1478; end: 1094f14df;  */

long ******* FUN_1094f1478(float param_1,long param_2,long param_3)

{
  long *******ppppppplVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  long *******ppppppplVar10;
  long lVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long *plVar15;
  long *****ppppplVar16;
  long *plVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  long ******pppppplVar21;
  float fVar22;
  long ******pppppplVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  long ******pppppplVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  long ******pppppplStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long ******pppppplStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined1 uStack_f1;
  long *aplStack_f0 [2];
  char cStack_d9;
  
  lVar11 = param_2 + 0x30;
  FUN_1094cb180();
  if (lVar11 == 0) {
    return (long *******)0x1;
  }
  param_2 = param_2 + 0x30;
  FUN_1094f1dec();
  if (param_2 != 0) {
    return (long *******)(ulong)(param_1 < *(float *)(param_2 + 0x28));
  }
  ppppppplVar12 = (long *******)&UNK_10f639994;
  FUN_109262df8();
  ppppppplVar10 = (long *******)(param_3 + 0x40);
  plVar17 = *(long **)(param_3 + 0x50);
  if (plVar17 == (long *)0x0) {
    *(undefined4 *)(ppppppplVar12 + 0x16) = *(undefined4 *)(param_3 + 4);
LAB_1094f1724:
    if (ppppppplVar12 + 0x11 != ppppppplVar10) {
      *(undefined4 *)(ppppppplVar12 + 0x15) = *(undefined4 *)(param_3 + 0x60);
      FUN_1094e2010(ppppppplVar12 + 0x11,*(undefined8 *)(param_3 + 0x50),0);
    }
    ppppppplVar13 = ppppppplVar12 + 0xc;
    if (ppppppplVar13 == ppppppplVar10) {
      return ppppppplVar13;
    }
    *(undefined4 *)(ppppppplVar12 + 0x10) = *(undefined4 *)(param_3 + 0x60);
    plVar17 = *(long **)(param_3 + 0x50);
    pppppplVar21 = ppppppplVar12[0xd];
    ppppppplVar10 = ppppppplVar13;
    if (pppppplVar21 != (long ******)0x0) {
      pppppplVar23 = (long ******)0x0;
      do {
        (*ppppppplVar13)[(long)pppppplVar23] = (long *****)0x0;
        pppppplVar23 = (long ******)((long)pppppplVar23 + 1);
      } while (pppppplVar21 != pppppplVar23);
      pppppplVar23 = ppppppplVar12[0xe];
      ppppppplVar12[0xe] = (long ******)0x0;
      ppppppplVar12[0xf] = (long ******)0x0;
      pppppplVar21 = pppppplVar23;
      if (pppppplVar23 != (long ******)0x0 && plVar17 != (long *)0x0) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (pppppplVar21 + 2,plVar17 + 2);
          pppppplVar21[5] = (long *****)plVar17[5];
          ppppplVar16 = (long *****)plVar17[6];
          *(int *)(pppppplVar21 + 7) = (int)plVar17[7];
          pppppplVar21[6] = ppppplVar16;
          pppppplVar23 = (long ******)*pppppplVar21;
          FUN_1094e2120(ppppppplVar13,pppppplVar21);
          plVar17 = (long *)*plVar17;
          pppppplVar21 = pppppplVar23;
        } while (pppppplVar23 != (long ******)0x0 && plVar17 != (long *)0x0);
      }
      func_0x0001094d000c(ppppppplVar13,pppppplVar23);
    }
    for (; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
      ppppppplVar10 = ppppppplVar13;
      FUN_1094e25f4(ppppppplVar13,plVar17 + 2);
    }
    return ppppppplVar10;
  }
  uVar18 = 0;
  do {
    ppppppplVar13 = ppppppplVar12;
    FUN_1094f1478((int)plVar17[6],ppppppplVar12,plVar17 + 2);
    uVar18 = uVar18 | (uint)ppppppplVar13;
    plVar17 = (long *)*plVar17;
  } while (plVar17 != (long *)0x0);
  *(undefined4 *)(ppppppplVar12 + 0x16) = *(undefined4 *)(param_3 + 4);
  if ((uVar18 & 1) == 0) goto LAB_1094f1724;
  ppppppplVar1 = ppppppplVar12 + 0xc;
  if (ppppppplVar1 != ppppppplVar10) {
    *(undefined4 *)(ppppppplVar12 + 0x10) = *(undefined4 *)(param_3 + 0x60);
    ppppppplVar13 = ppppppplVar1;
    FUN_1094e2010(ppppppplVar1,*(undefined8 *)(param_3 + 0x50),0);
  }
  if (ppppppplVar12[0x14] == (long ******)0x0) {
    return ppppppplVar13;
  }
  pppppplStack_110 = (long ******)0x0;
  uStack_108 = 0;
  uStack_100 = 0;
  pppppplStack_128 = (long ******)0x0;
  uStack_120 = 0;
  uStack_118 = 0;
  plVar17 = *(long **)(param_3 + 0x50);
  if (plVar17 != (long *)0x0) {
    do {
      uVar3 = uStack_108;
      if (-1 < (long)uStack_100) {
        uVar3 = uStack_100 >> 0x38;
      }
      if (uVar3 == 0) {
LAB_1094f15cc:
        ppppppplVar13 = &pppppplStack_110;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&pppppplStack_128,&pppppplStack_110);
LAB_1094f161c:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (ppppppplVar13,plVar17 + 2);
      }
      else {
        fVar31 = *(float *)(plVar17 + 6);
        ppppppplVar13 = ppppppplVar10;
        FUN_1094e1944(ppppppplVar10,&pppppplStack_110);
        if (ppppppplVar13 == (long *******)0x0) {
LAB_1094f1adc:
          FUN_109262df8(&UNK_10f639994);
          goto LAB_1094f1b68;
        }
        if (fVar31 < *(float *)(ppppppplVar13 + 6)) goto LAB_1094f15cc;
        uVar3 = uStack_120;
        if (-1 < (long)uStack_118) {
          uVar3 = uStack_118 >> 0x38;
        }
        if (uVar3 == 0) {
LAB_1094f1618:
          ppppppplVar13 = &pppppplStack_128;
          goto LAB_1094f161c;
        }
        fVar31 = *(float *)(plVar17 + 6);
        ppppppplVar13 = ppppppplVar10;
        FUN_1094e1944(ppppppplVar10,&pppppplStack_128);
        if (ppppppplVar13 == (long *******)0x0) goto LAB_1094f1adc;
        if (fVar31 < *(float *)(ppppppplVar13 + 6)) goto LAB_1094f1618;
      }
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
    uVar3 = uStack_120;
    if (-1 < (long)uStack_118) {
      uVar3 = uStack_118 >> 0x38;
    }
    if (uVar3 != 0) {
      ppppppplVar13 = ppppppplVar10;
      FUN_1094e1944(ppppppplVar10,&pppppplStack_128);
      if (ppppppplVar13 == (long *******)0x0) {
        FUN_109262df8(&UNK_10f639994);
        goto LAB_1094f1b68;
      }
      ppppppplVar14 = ppppppplVar12;
      FUN_1094f1478(*(undefined4 *)(ppppppplVar13 + 6),ppppppplVar12,&pppppplStack_128);
      if ((int)ppppppplVar14 == 0) {
        ppppppplVar13 = ppppppplVar12 + 0x11;
        FUN_1094e1d64(ppppppplVar13,&pppppplStack_110);
        if (ppppppplVar13 == (long *******)0x0) {
          FUN_109262df8(&UNK_10f639994);
          goto LAB_1094f1b68;
        }
        fVar31 = *(float *)(ppppppplVar13 + 5);
        fVar37 = *(float *)((long)ppppppplVar13 + 0x2c);
        ppppppplVar13 = ppppppplVar12 + 0x11;
        FUN_1094e1d64(ppppppplVar13,&pppppplStack_128);
        if (ppppppplVar13 == (long *******)0x0) {
          FUN_109262df8(&UNK_10f639994);
          goto LAB_1094f1b68;
        }
        fVar36 = *(float *)(ppppppplVar13 + 5);
        fVar34 = *(float *)((long)ppppppplVar13 + 0x2c);
        ppppppplVar13 = ppppppplVar10;
        FUN_1094e1944(ppppppplVar10,&pppppplStack_110);
        if (ppppppplVar13 == (long *******)0x0) {
          FUN_109262df8(&UNK_10f639994);
          goto LAB_1094f1b68;
        }
        pppppplVar21 = ppppppplVar13[5];
        FUN_1094e1944(ppppppplVar10,&pppppplStack_128);
        if (ppppppplVar10 == (long *******)0x0) {
          FUN_109262df8(&UNK_10f639994);
          goto LAB_1094f1b68;
        }
        plVar17 = *(long **)(param_3 + 0x50);
        ppppppplVar14 = ppppppplVar10;
        if (plVar17 != (long *)0x0) {
          fVar32 = fVar31 - fVar36;
          fVar35 = fVar34 - fVar37;
          fVar26 = fVar36 - fVar31;
          fVar30 = fVar26;
          fVar7 = fVar31;
          fVar8 = -fVar35;
          if (ABS(fVar36 - fVar31) <= 0.0001) {
            fVar30 = fVar35;
            fVar7 = fVar37;
            fVar8 = fVar26;
          }
          fVar26 = SQRT(fVar35 * fVar35 + fVar26 * fVar26);
          fVar22 = SUB84(pppppplVar21,0);
          fVar27 = SUB84(ppppppplVar10[5],0) - fVar22;
          fVar25 = (float)((ulong)pppppplVar21 >> 0x20);
          fVar29 = (float)((ulong)ppppppplVar10[5] >> 0x20) - fVar25;
          fVar6 = SQRT(fVar29 * fVar29 + fVar27 * fVar27);
          fVar19 = fVar6 + 0.0001;
          uVar24 = NEON_rev64(CONCAT44(fVar29,fVar27),4);
          do {
            plVar2 = plVar17 + 2;
            bVar5 = *(byte *)((long)plVar17 + 0x27);
            uVar3 = plVar17[3];
            if (-1 < (char)bVar5) {
              uVar3 = (ulong)bVar5;
            }
            uVar4 = uStack_108;
            if (-1 < (long)uStack_100) {
              uVar4 = uStack_100 >> 0x38;
            }
            if (uVar3 == uVar4) {
              plVar15 = (long *)*plVar2;
              if (-1 < (char)bVar5) {
                plVar15 = plVar2;
              }
              ppppppplVar10 = (long *******)pppppplStack_110;
              if (-1 < (long)uStack_100) {
                ppppppplVar10 = &pppppplStack_110;
              }
              _memcmp(plVar15,ppppppplVar10,uVar3);
              if ((int)plVar15 != 0) goto LAB_1094f1918;
LAB_1094f196c:
              ppppppplVar14 = ppppppplVar1;
              aplStack_f0[0] = plVar2;
              FUN_1094e1a28(ppppppplVar1,plVar2,&UNK_10dd5b8f9,aplStack_f0,&uStack_f1);
              ppppppplVar14[5] = (long ******)plVar17[5];
              pppppplVar21 = (long ******)plVar17[6];
              *(int *)(ppppppplVar14 + 7) = (int)plVar17[7];
              ppppppplVar14[6] = pppppplVar21;
            }
            else {
LAB_1094f1918:
              uVar4 = uStack_120;
              if (-1 < (long)uStack_118) {
                uVar4 = uStack_118 >> 0x38;
              }
              if (uVar3 == uVar4) {
                plVar15 = (long *)*plVar2;
                if (-1 < (char)bVar5) {
                  plVar15 = plVar2;
                }
                ppppppplVar10 = (long *******)pppppplStack_128;
                if (-1 < (long)uStack_118) {
                  ppppppplVar10 = &pppppplStack_128;
                }
                _memcmp(plVar15,ppppppplVar10,uVar3);
                if ((int)plVar15 == 0) goto LAB_1094f196c;
              }
              ppppppplVar10 = ppppppplVar12;
              FUN_1094f1478((int)plVar17[6],ppppppplVar12,plVar2);
              if ((int)ppppppplVar10 != 0) goto LAB_1094f196c;
              ppppppplVar10 = ppppppplVar12 + 0x11;
              aplStack_f0[0] = plVar2;
              FUN_1094e1a28(ppppppplVar10,plVar2,&UNK_10dd5b8f9,aplStack_f0,&uStack_f1);
              if (ABS(fVar37 - fVar34) < 0.0001 && ABS(fVar31 - fVar36) < 0.0001) {
                pppppplVar21 = (long ******)plVar17[5];
                FUN_10937e740(aplStack_f0,&UNK_10f57083e);
                FUN_109388c6c(1,&UNK_10f570781,&UNK_10f570821,0x23,aplStack_f0);
                if (cStack_d9 < '\0') {
                  __ZdlPv(aplStack_f0[0]);
                }
              }
              else {
                fVar28 = ((-(fVar32 * fVar37) - fVar31 * fVar35) +
                         fVar32 * *(float *)((long)ppppppplVar10 + 0x2c) +
                         *(float *)(ppppppplVar10 + 5) * fVar35) /
                         SQRT(fVar32 * fVar32 + fVar35 * fVar35);
                fVar20 = *(float *)(ppppppplVar10 + 5);
                if (ABS(fVar36 - fVar31) <= 0.0001) {
                  fVar20 = *(float *)((long)ppppppplVar10 + 0x2c);
                }
                fVar20 = ((fVar20 + fVar28 * (fVar8 / (fVar26 + 0.0001))) - fVar7) / fVar30;
                fVar28 = (fVar28 * fVar6) / fVar26;
                pppppplVar21 = (long ******)
                               CONCAT44(fVar25 + fVar29 * fVar20 +
                                        ((float)((ulong)uVar24 >> 0x20) / fVar19) * -fVar28,
                                        fVar22 + fVar27 * fVar20 + ((float)uVar24 / fVar19) * fVar28
                                       );
              }
              ppppppplVar14 = ppppppplVar1;
              aplStack_f0[0] = plVar2;
              FUN_1094e1a28(ppppppplVar1,plVar2,&UNK_10dd5b8f9,aplStack_f0,&uStack_f1);
              ppppppplVar14[5] = pppppplVar21;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        goto LAB_1094f1a8c;
      }
    }
  }
  ppppppplVar13 = ppppppplVar10;
  FUN_1094e1944(ppppppplVar10,&pppppplStack_110);
  if (ppppppplVar13 == (long *******)0x0) {
    FUN_109262df8(&UNK_10f639994);
  }
  else {
    ppppppplVar14 = ppppppplVar12;
    FUN_1094f1478(*(undefined4 *)(ppppppplVar13 + 6),ppppppplVar12,&pppppplStack_110);
    if (((ulong)ppppppplVar14 & 1) == 0) {
      *(undefined4 *)(ppppppplVar12 + 0x16) = 0;
LAB_1094f1a8c:
      if ((long)uStack_118 < 0) {
        ppppppplVar14 = (long *******)pppppplStack_128;
        __ZdlPv(pppppplStack_128);
      }
      if (-1 < (long)uStack_100) {
        return ppppppplVar14;
      }
      __ZdlPv(pppppplStack_110);
      return (long *******)pppppplStack_110;
    }
    FUN_1094e1944(ppppppplVar10,&pppppplStack_110);
    if (ppppppplVar10 != (long *******)0x0) {
      ppppppplVar14 = ppppppplVar12 + 0x11;
      FUN_1094e1d64(ppppppplVar14,&pppppplStack_110);
      if (ppppppplVar14 != (long *******)0x0) {
        plVar17 = *(long **)(param_3 + 0x50);
        if (plVar17 != (long *)0x0) {
          pppppplVar21 = ppppppplVar10[5];
          pppppplVar23 = ppppppplVar14[5];
          do {
            plVar2 = plVar17 + 2;
            ppppppplVar10 = ppppppplVar12 + 0x11;
            FUN_1094e1d64(ppppppplVar10,plVar2);
            if (ppppppplVar10 == (long *******)0x0) {
              FUN_109262df8(&UNK_10f639994);
              goto LAB_1094f1b68;
            }
            pppppplVar33 = ppppppplVar10[5];
            ppppppplVar14 = ppppppplVar1;
            aplStack_f0[0] = plVar2;
            FUN_1094e1a28(ppppppplVar1,plVar2,&UNK_10dd5b8f9,aplStack_f0,&uStack_f1);
            ppppppplVar14[5] =
                 (long ******)
                 CONCAT44(((float)((ulong)pppppplVar21 >> 0x20) -
                          (float)((ulong)pppppplVar23 >> 0x20)) +
                          (float)((ulong)pppppplVar33 >> 0x20),
                          (SUB84(pppppplVar21,0) - SUB84(pppppplVar23,0)) + SUB84(pppppplVar33,0));
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        goto LAB_1094f1a8c;
      }
    }
    FUN_109262df8(&UNK_10f639994);
  }
LAB_1094f1b68:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1094f1b6c);
  (*pcVar9)();
}



/* Entry: 1094f14e0; end: 1094f1be3;  */

void FUN_1094f14e0(ulong param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *******pppppppuVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 ******ppppppuStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 ******ppppppuStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined1 uStack_c1;
  long *aplStack_c0 [2];
  char cStack_a9;
  
  plVar8 = (long *)(param_2 + 0x40);
  plVar9 = *(long **)(param_2 + 0x50);
  if (plVar9 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 4);
LAB_1094f1724:
    if ((long *)(param_1 + 0x88) != plVar8) {
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x60);
      FUN_1094e2010((long *)(param_1 + 0x88),*(undefined8 *)(param_2 + 0x50),0);
    }
    plVar9 = (long *)(param_1 + 0x60);
    if (plVar9 == plVar8) {
      return;
    }
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x60);
    plVar8 = *(long **)(param_2 + 0x50);
    lVar17 = *(long *)(param_1 + 0x68);
    if (lVar17 != 0) {
      lVar16 = 0;
      do {
        *(undefined8 *)(*plVar9 + lVar16 * 8) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar17 != lVar16);
      plVar10 = *(long **)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      plVar13 = plVar10;
      if (plVar10 != (long *)0x0 && plVar8 != (long *)0x0) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (plVar13 + 2,plVar8 + 2);
          plVar13[5] = plVar8[5];
          lVar17 = plVar8[6];
          *(int *)(plVar13 + 7) = (int)plVar8[7];
          plVar13[6] = lVar17;
          plVar10 = (long *)*plVar13;
          FUN_1094e2120(plVar9,plVar13);
          plVar8 = (long *)*plVar8;
          plVar13 = plVar10;
        } while (plVar10 != (long *)0x0 && plVar8 != (long *)0x0);
      }
      func_0x0001094d000c(plVar9,plVar10);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      FUN_1094e25f4(plVar9,plVar8 + 2);
    }
    return;
  }
  uVar11 = 0;
  do {
    uVar7 = param_1;
    FUN_1094f1478((int)plVar9[6],param_1,plVar9 + 2);
    uVar11 = uVar11 | (uint)uVar7;
    plVar9 = (long *)*plVar9;
  } while (plVar9 != (long *)0x0);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 4);
  if ((uVar11 & 1) == 0) goto LAB_1094f1724;
  plVar9 = (long *)(param_1 + 0x60);
  if (plVar9 != plVar8) {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x60);
    FUN_1094e2010(plVar9,*(undefined8 *)(param_2 + 0x50),0);
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    return;
  }
  ppppppuStack_e0 = (undefined8 *******)0x0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  ppppppuStack_f8 = (undefined8 *******)0x0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  plVar13 = *(long **)(param_2 + 0x50);
  if (plVar13 != (long *)0x0) {
    do {
      uVar7 = uStack_d8;
      if (-1 < (long)uStack_d0) {
        uVar7 = uStack_d0 >> 0x38;
      }
      if (uVar7 == 0) {
LAB_1094f15cc:
        pppppppuVar12 = &ppppppuStack_e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&ppppppuStack_f8,&ppppppuStack_e0);
LAB_1094f161c:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (pppppppuVar12,plVar13 + 2);
      }
      else {
        fVar26 = *(float *)(plVar13 + 6);
        plVar10 = plVar8;
        FUN_1094e1944(plVar8,&ppppppuStack_e0);
        if (plVar10 == (long *)0x0) {
LAB_1094f1adc:
          FUN_109262df8(&UNK_10f639994);
          goto LAB_1094f1b68;
        }
        if (fVar26 < *(float *)(plVar10 + 6)) goto LAB_1094f15cc;
        uVar7 = uStack_f0;
        if (-1 < (long)uStack_e8) {
          uVar7 = uStack_e8 >> 0x38;
        }
        if (uVar7 == 0) {
LAB_1094f1618:
          pppppppuVar12 = &ppppppuStack_f8;
          goto LAB_1094f161c;
        }
        fVar26 = *(float *)(plVar13 + 6);
        plVar10 = plVar8;
        FUN_1094e1944(plVar8,&ppppppuStack_f8);
        if (plVar10 == (long *)0x0) goto LAB_1094f1adc;
        if (fVar26 < *(float *)(plVar10 + 6)) goto LAB_1094f1618;
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
    uVar7 = uStack_f0;
    if (-1 < (long)uStack_e8) {
      uVar7 = uStack_e8 >> 0x38;
    }
    if (uVar7 != 0) {
      plVar13 = plVar8;
      FUN_1094e1944(plVar8,&ppppppuStack_f8);
      if (plVar13 == (long *)0x0) {
        FUN_109262df8(&UNK_10f639994);
        goto LAB_1094f1b68;
      }
      uVar7 = param_1;
      FUN_1094f1478((int)plVar13[6],param_1,&ppppppuStack_f8);
      if ((int)uVar7 == 0) {
        lVar17 = param_1 + 0x88;
        FUN_1094e1d64(lVar17,&ppppppuStack_e0);
        if (lVar17 == 0) {
          FUN_109262df8(&UNK_10f639994);
          goto LAB_1094f1b68;
        }
        fVar26 = *(float *)(lVar17 + 0x28);
        fVar32 = *(float *)(lVar17 + 0x2c);
        lVar17 = param_1 + 0x88;
        FUN_1094e1d64(lVar17,&ppppppuStack_f8);
        if (lVar17 == 0) {
          FUN_109262df8(&UNK_10f639994);
          goto LAB_1094f1b68;
        }
        fVar31 = *(float *)(lVar17 + 0x28);
        fVar29 = *(float *)(lVar17 + 0x2c);
        plVar13 = plVar8;
        FUN_1094e1944(plVar8,&ppppppuStack_e0);
        if (plVar13 == (long *)0x0) {
          FUN_109262df8(&UNK_10f639994);
          goto LAB_1094f1b68;
        }
        lVar17 = plVar13[5];
        FUN_1094e1944(plVar8,&ppppppuStack_f8);
        if (plVar8 == (long *)0x0) {
          FUN_109262df8(&UNK_10f639994);
          goto LAB_1094f1b68;
        }
        plVar13 = *(long **)(param_2 + 0x50);
        if (plVar13 != (long *)0x0) {
          fVar27 = fVar26 - fVar31;
          fVar30 = fVar29 - fVar32;
          fVar21 = fVar31 - fVar26;
          fVar25 = fVar21;
          fVar4 = fVar26;
          fVar5 = -fVar30;
          if (ABS(fVar31 - fVar26) <= 0.0001) {
            fVar25 = fVar30;
            fVar4 = fVar32;
            fVar5 = fVar21;
          }
          fVar21 = SQRT(fVar30 * fVar30 + fVar21 * fVar21);
          fVar18 = (float)lVar17;
          fVar22 = (float)plVar8[5] - fVar18;
          fVar20 = (float)((ulong)lVar17 >> 0x20);
          fVar24 = (float)((ulong)plVar8[5] >> 0x20) - fVar20;
          fVar3 = SQRT(fVar24 * fVar24 + fVar22 * fVar22);
          fVar14 = fVar3 + 0.0001;
          uVar19 = NEON_rev64(CONCAT44(fVar24,fVar22),4);
          do {
            plVar8 = plVar13 + 2;
            bVar2 = *(byte *)((long)plVar13 + 0x27);
            uVar7 = plVar13[3];
            if (-1 < (char)bVar2) {
              uVar7 = (ulong)bVar2;
            }
            uVar1 = uStack_d8;
            if (-1 < (long)uStack_d0) {
              uVar1 = uStack_d0 >> 0x38;
            }
            if (uVar7 == uVar1) {
              plVar10 = (long *)*plVar8;
              if (-1 < (char)bVar2) {
                plVar10 = plVar8;
              }
              pppppppuVar12 = (undefined8 *******)ppppppuStack_e0;
              if (-1 < (long)uStack_d0) {
                pppppppuVar12 = &ppppppuStack_e0;
              }
              _memcmp(plVar10,pppppppuVar12,uVar7);
              if ((int)plVar10 != 0) goto LAB_1094f1918;
LAB_1094f196c:
              plVar10 = plVar9;
              aplStack_c0[0] = plVar8;
              FUN_1094e1a28(plVar9,plVar8,&UNK_10dd5b8f9,aplStack_c0,&uStack_c1);
              plVar10[5] = plVar13[5];
              lVar17 = plVar13[6];
              *(int *)(plVar10 + 7) = (int)plVar13[7];
              plVar10[6] = lVar17;
            }
            else {
LAB_1094f1918:
              uVar1 = uStack_f0;
              if (-1 < (long)uStack_e8) {
                uVar1 = uStack_e8 >> 0x38;
              }
              if (uVar7 == uVar1) {
                plVar10 = (long *)*plVar8;
                if (-1 < (char)bVar2) {
                  plVar10 = plVar8;
                }
                pppppppuVar12 = (undefined8 *******)ppppppuStack_f8;
                if (-1 < (long)uStack_e8) {
                  pppppppuVar12 = &ppppppuStack_f8;
                }
                _memcmp(plVar10,pppppppuVar12,uVar7);
                if ((int)plVar10 == 0) goto LAB_1094f196c;
              }
              uVar7 = param_1;
              FUN_1094f1478((int)plVar13[6],param_1,plVar8);
              if ((int)uVar7 != 0) goto LAB_1094f196c;
              lVar17 = param_1 + 0x88;
              aplStack_c0[0] = plVar8;
              FUN_1094e1a28(lVar17,plVar8,&UNK_10dd5b8f9,aplStack_c0,&uStack_c1);
              if (ABS(fVar32 - fVar29) < 0.0001 && ABS(fVar26 - fVar31) < 0.0001) {
                lVar17 = plVar13[5];
                FUN_10937e740(aplStack_c0,&UNK_10f57083e);
                FUN_109388c6c(1,&UNK_10f570781,&UNK_10f570821,0x23,aplStack_c0);
                if (cStack_a9 < '\0') {
                  __ZdlPv(aplStack_c0[0]);
                }
              }
              else {
                fVar23 = ((-(fVar27 * fVar32) - fVar26 * fVar30) +
                         fVar27 * *(float *)(lVar17 + 0x2c) + *(float *)(lVar17 + 0x28) * fVar30) /
                         SQRT(fVar27 * fVar27 + fVar30 * fVar30);
                fVar15 = *(float *)(lVar17 + 0x28);
                if (ABS(fVar31 - fVar26) <= 0.0001) {
                  fVar15 = *(float *)(lVar17 + 0x2c);
                }
                fVar15 = ((fVar15 + fVar23 * (fVar5 / (fVar21 + 0.0001))) - fVar4) / fVar25;
                fVar23 = (fVar23 * fVar3) / fVar21;
                lVar17 = CONCAT44(fVar20 + fVar24 * fVar15 +
                                  ((float)((ulong)uVar19 >> 0x20) / fVar14) * -fVar23,
                                  fVar18 + fVar22 * fVar15 + ((float)uVar19 / fVar14) * fVar23);
              }
              plVar10 = plVar9;
              aplStack_c0[0] = plVar8;
              FUN_1094e1a28(plVar9,plVar8,&UNK_10dd5b8f9,aplStack_c0,&uStack_c1);
              plVar10[5] = lVar17;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        goto LAB_1094f1a8c;
      }
    }
  }
  plVar13 = plVar8;
  FUN_1094e1944(plVar8,&ppppppuStack_e0);
  if (plVar13 == (long *)0x0) {
    FUN_109262df8(&UNK_10f639994);
  }
  else {
    uVar7 = param_1;
    FUN_1094f1478((int)plVar13[6],param_1,&ppppppuStack_e0);
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
LAB_1094f1a8c:
      if ((long)uStack_e8 < 0) {
        __ZdlPv(ppppppuStack_f8);
      }
      if (-1 < (long)uStack_d0) {
        return;
      }
      __ZdlPv(ppppppuStack_e0);
      return;
    }
    FUN_1094e1944(plVar8,&ppppppuStack_e0);
    if (plVar8 != (long *)0x0) {
      lVar17 = param_1 + 0x88;
      FUN_1094e1d64(lVar17,&ppppppuStack_e0);
      if (lVar17 != 0) {
        plVar13 = *(long **)(param_2 + 0x50);
        if (plVar13 != (long *)0x0) {
          lVar16 = plVar8[5];
          uVar19 = *(undefined8 *)(lVar17 + 0x28);
          do {
            plVar8 = plVar13 + 2;
            lVar17 = param_1 + 0x88;
            FUN_1094e1d64(lVar17,plVar8);
            if (lVar17 == 0) {
              FUN_109262df8(&UNK_10f639994);
              goto LAB_1094f1b68;
            }
            uVar28 = *(undefined8 *)(lVar17 + 0x28);
            plVar10 = plVar9;
            aplStack_c0[0] = plVar8;
            FUN_1094e1a28(plVar9,plVar8,&UNK_10dd5b8f9,aplStack_c0,&uStack_c1);
            plVar10[5] = CONCAT44(((float)((ulong)lVar16 >> 0x20) - (float)((ulong)uVar19 >> 0x20))
                                  + (float)((ulong)uVar28 >> 0x20),
                                  ((float)lVar16 - (float)uVar19) + (float)uVar28);
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        goto LAB_1094f1a8c;
      }
    }
    FUN_109262df8(&UNK_10f639994);
  }
LAB_1094f1b68:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1094f1b6c);
  (*pcVar6)();
}



/* Entry: 1094f1be4; end: 1094f1cbb;  */

void FUN_1094f1be4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined1 uStack_49;
  long *plStack_48;
  
  for (plVar4 = *(long **)(param_1 + 0x70); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    plVar1 = plVar4 + 2;
    lVar2 = param_2 + 0x40;
    FUN_1094e1944(lVar2,plVar1);
    plStack_48 = plVar1;
    if (lVar2 == 0) {
      lVar2 = param_2 + 0x40;
      FUN_1094e1a28(lVar2,plVar1,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
      *(long *)(lVar2 + 0x28) = plVar4[5];
      uVar3 = plVar4[6];
      *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(plVar4 + 7);
      *(undefined8 *)(lVar2 + 0x30) = uVar3;
    }
    else {
      lVar2 = param_2 + 0x40;
      FUN_1094e1a28(lVar2,plVar1,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
      *(long *)(lVar2 + 0x28) = plVar4[5];
    }
  }
  uVar5 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0xb0);
  }
  *(undefined4 *)(param_2 + 4) = uVar5;
  return;
}



/* Entry: 1094f1cbc; end: 1094f1d2b;  */

long FUN_1094f1cbc(long param_1)

{
  func_0x0001094cffd4(param_1 + 0x88);
  func_0x0001094cffd4(param_1 + 0x60);
  func_0x0001094f1d94(param_1 + 8);
  return param_1;
}



/* Entry: 1094f1d2c; end: 1094f1d3f;  */

long FUN_1094f1d2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  if (*(char *)(param_1 + 0x58) == '\0') {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1094f1d40; end: 1094f1deb;  */

void FUN_1094f1d40(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x0001094e64e0(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 1094f1dec; end: 1094f1ecf;  */

long FUN_1094f1dec(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 1094f1ed0; end: 1094f1ffb;  */

long FUN_1094f1ed0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  long lStack_28;
  
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    FUN_109379c18(param_1 + 0x78);
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110af7e20;
    lStack_28 = param_1 + 0x40;
    FUN_1094dd9b4(&lStack_28);
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  *(undefined8 *)(param_1 + 0x38) = 0x100000001;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110af8110;
  *(undefined8 *)(param_1 + 0x58) = 0x100000001;
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined8 *)(param_1 + 0x6c) = 0x3dcccccd3f8ccccd;
  *(undefined8 *)(param_1 + 100) = 0x3c23d70a3e4ccccd;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  plStack_38 = (long *)param_2[1];
  uStack_40 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1 = param_1 + 0x30;
  FUN_1094e8fbc(param_1,&uStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 1094f1ffc; end: 1094f2b17;  */

/* WARNING: Removing unreachable block (ram,0x0001094f2758) */

ulong ****** FUN_1094f1ffc(ulong ******param_1,long param_2,long param_3)

{
  int iVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulong *****pppppuVar9;
  ulong ******ppppppuVar10;
  ulong ******ppppppuVar11;
  ulong ******ppppppuVar12;
  long lVar13;
  ulong ******ppppppuVar14;
  ulong ******ppppppuVar15;
  ulong *****pppppuVar16;
  ulong *****pppppuVar17;
  ulong ******ppppppuVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong ****ppppuVar21;
  ulong ***pppuVar22;
  ulong ******ppppppuVar23;
  undefined8 uVar24;
  ulong ***pppuVar25;
  ulong ***pppuVar26;
  ulong *****pppppuVar27;
  ulong uVar28;
  ulong uVar29;
  ulong ****ppppuVar30;
  ulong ****ppppuVar31;
  long lVar32;
  ulong ******ppppppuVar33;
  undefined *unaff_x23;
  ulong *****pppppuVar34;
  ulong ******unaff_x25;
  int iVar35;
  long *plVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  ulong *****pppppuStack_f8;
  ulong *****pppppuStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_d9;
  ulong ****ppppuStack_d8;
  ulong *****pppppuStack_d0;
  ulong ****ppppuStack_c8;
  ulong ***pppuStack_c0;
  ulong **ppuStack_b8;
  ulong **ppuStack_b0;
  ulong **ppuStack_a8;
  ulong **appuStack_a0 [2];
  ulong ***pppuStack_90;
  char acStack_89 [9];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar35 = *(int *)(param_2 + 0x58);
  ppppppuVar10 = param_1;
  for (plVar36 = *(long **)(param_2 + 0x50); plVar36 != (long *)0x0; plVar36 = (long *)*plVar36) {
    ppppppuVar18 = (ulong ******)(plVar36 + 2);
    ppppppuVar10 = param_1 + 1;
    pppppuStack_d0 = (ulong *****)ppppppuVar18;
    FUN_1094f3600(ppppppuVar10,ppppppuVar18,&pppppuStack_d0);
    if (ppppppuVar10[5] == (ulong *****)0x0) {
      pppppuVar9 = (ulong *****)0x60;
      __Znwm();
      pppppuVar9[1] = (ulong ****)0x0;
      pppppuVar9[2] = (ulong ****)0x0;
      *pppppuVar9 = (ulong ****)&PTR_FUN_110af8f58;
      pppppuVar9[6] = (ulong ****)0x0;
      pppppuVar9[5] = (ulong ****)0x0;
      pppppuVar9[8] = (ulong ****)0x0;
      pppppuVar9[7] = (ulong ****)0x0;
      pppppuStack_d0 = pppppuVar9 + 3;
      pppppuVar9[4] = (ulong ****)0x0;
      *pppppuStack_d0 = (ulong ****)0x0;
      iVar1 = *(int *)(param_1 + 0xc);
      pppppuVar9[9] = (ulong ****)(long)*(int *)(param_1 + 0xb);
      pppppuVar9[10] = (ulong ****)(long)iVar1;
      *(undefined4 *)(pppppuVar9 + 0xb) = *(undefined4 *)((long)param_1 + 100);
      ppppppuVar10 = param_1 + 1;
      pppppuStack_f8 = (ulong *****)ppppppuVar18;
      ppppuStack_c8 = (ulong ****)pppppuVar9;
      FUN_1094f3600(ppppppuVar10,ppppppuVar18,&pppppuStack_f8);
      pppppuVar16 = pppppuStack_d0;
      pppppuStack_d0 = (ulong *****)0x0;
      ppppuStack_c8 = (ulong ****)0x0;
      pppppuVar34 = ppppppuVar10[6];
      ppppppuVar10[5] = pppppuVar16;
      ppppppuVar10[6] = pppppuVar9;
      if (pppppuVar34 != (ulong *****)0x0) {
        pppppuVar16 = pppppuVar34 + 1;
        do {
          ppppuVar21 = *pppppuVar16;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppuVar16,0x10);
          if (bVar5) {
            *pppppuVar16 = (ulong ****)((long)ppppuVar21 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppppuVar21 == (ulong ****)0x0) {
          (*(code *)(*pppppuVar34)[2])(pppppuVar34);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar34);
        }
      }
      ppppuVar21 = ppppuStack_c8;
      if (ppppuStack_c8 != (ulong ****)0x0) {
        ppppuVar30 = ppppuStack_c8 + 1;
        do {
          pppuVar22 = *ppppuVar30;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppuVar30,0x10);
          if (bVar5) {
            *ppppuVar30 = (ulong ***)((long)pppuVar22 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (pppuVar22 == (ulong ***)0x0) {
          (*(code *)(*ppppuStack_c8)[2])(ppppuStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar21);
        }
      }
    }
    ppppppuVar10 = param_1 + 1;
    pppppuStack_d0 = (ulong *****)ppppppuVar18;
    FUN_1094f3600(ppppppuVar10,ppppppuVar18,&pppppuStack_d0);
    ppppppuVar33 = (ulong ******)ppppppuVar10[5];
    pppppuVar9 = ppppppuVar33[5];
    pppppuVar16 = ppppppuVar33[4];
    if (pppppuVar9 == ppppppuVar33[6]) {
      pppppuVar9 = (ulong *****)((long)pppppuVar9 - 1);
      pppppuVar16 = (ulong *****)((long)pppppuVar16 + 1);
      ppppppuVar33[4] = pppppuVar16;
      ppppppuVar33[5] = pppppuVar9;
      if ((ulong *****)0x197 < pppppuVar16) {
        ppppppuVar10 = (ulong ******)*ppppppuVar33[1];
        __ZdlPv();
        ppppppuVar33[1] = ppppppuVar33[1] + 1;
        pppppuVar9 = ppppppuVar33[5];
        pppppuVar16 = (ulong *****)((long)ppppppuVar33[4] - 0xcc);
        ppppppuVar33[4] = pppppuVar16;
      }
    }
    pppppuVar34 = ppppppuVar33[1];
    pppppuVar17 = ppppppuVar33[2];
    unaff_x25 = (ulong ******)((long)pppppuVar17 - (long)pppppuVar34);
    uVar20 = 0;
    if (unaff_x25 != (ulong ******)0x0) {
      uVar20 = ((long)unaff_x25 >> 3) * 0xcc - 1;
    }
    uVar28 = (long)pppppuVar16 + (long)pppppuVar9;
    if (uVar20 == uVar28) {
      if (pppppuVar16 < (ulong *****)0xcc) {
        pppppuVar16 = ppppppuVar33[3];
        pppppuVar9 = *ppppppuVar33;
        if (unaff_x25 < (ulong ******)((long)pppppuVar16 - (long)pppppuVar9)) {
          ppppppuVar10 = (ulong ******)0xff0;
          __Znwm();
          if (pppppuVar16 == pppppuVar17) {
            if (pppppuVar34 == pppppuVar9) {
              pppppuVar16 = (ulong *****)((long)pppppuVar16 - (long)pppppuVar34 >> 2);
              if (pppppuVar17 == pppppuVar34) {
                pppppuVar16 = (ulong *****)0x1;
              }
              lVar32 = (long)pppppuVar16 * 2;
              FUN_1094f2e70();
              pppppuVar34 = (ulong *****)((long)pppppuVar16 + (lVar32 + 6U & 0xfffffffffffffff8));
              lVar32 = (long)ppppppuVar33[2] - (long)ppppppuVar33[1];
              pppppuVar9 = pppppuVar34;
              if (lVar32 != 0) {
                pppppuVar9 = (ulong *****)((long)pppppuVar34 + lVar32);
                pppppuVar17 = ppppppuVar33[1];
                pppppuVar27 = pppppuVar34;
                do {
                  *pppppuVar27 = *pppppuVar17;
                  lVar32 = lVar32 + -8;
                  pppppuVar17 = pppppuVar17 + 1;
                  pppppuVar27 = pppppuVar27 + 1;
                } while (lVar32 != 0);
              }
              pppppuVar17 = *ppppppuVar33;
              *ppppppuVar33 = pppppuVar16;
              ppppppuVar33[1] = pppppuVar34;
              ppppppuVar33[2] = pppppuVar9;
              ppppppuVar33[3] = pppppuVar16 + (long)ppppppuVar18;
              if (pppppuVar17 != (ulong *****)0x0) {
                __ZdlPv(pppppuVar17);
                pppppuVar34 = ppppppuVar33[1];
              }
            }
            pppppuVar34[-1] = (ulong ****)ppppppuVar10;
            pppppuVar16 = ppppppuVar33[1];
            ppppppuVar33[1] = pppppuVar16 + -1;
            ppppuVar21 = pppppuVar16[-1];
            ppppppuVar33[1] = pppppuVar16;
            ppppppuVar10 = ppppppuVar33;
            FUN_1094f2d74(ppppppuVar33,ppppuVar21);
          }
          else {
            *pppppuVar17 = (ulong ****)ppppppuVar10;
            ppppppuVar33[2] = ppppppuVar33[2] + 1;
          }
        }
        else {
          ppppppuVar10 = (ulong ******)((long)pppppuVar16 - (long)pppppuVar9 >> 2);
          if (pppppuVar16 == pppppuVar9) {
            ppppppuVar10 = (ulong ******)0x1;
          }
          FUN_1094f2e70();
          ppppppuVar11 = (ulong ******)0xff0;
          ppppppuVar14 = ppppppuVar18;
          __Znwm();
          ppppppuVar15 = (ulong ******)((long)ppppppuVar10 + (long)unaff_x25);
          ppppppuVar23 = ppppppuVar10 + (long)ppppppuVar18;
          ppppppuVar12 = ppppppuVar10;
          if (unaff_x25 == (ulong ******)((long)ppppppuVar18 * 8)) {
            if ((long)unaff_x25 < 1) {
              ppppppuVar18 = (ulong ******)((long)ppppppuVar15 - (long)ppppppuVar10 >> 2);
              if (pppppuVar17 == pppppuVar34) {
                ppppppuVar18 = (ulong ******)0x1;
              }
              ppppppuVar12 = ppppppuVar18;
              FUN_1094f2e70();
              ppppppuVar15 = ppppppuVar12 + ((ulong)ppppppuVar18 >> 2);
              ppppppuVar23 = ppppppuVar12 + (long)ppppppuVar14;
              unaff_x25 = ppppppuVar11;
              if (ppppppuVar10 != (ulong ******)0x0) {
                __ZdlPv(ppppppuVar10);
              }
            }
            else {
              lVar32 = ((long)ppppppuVar15 - (long)ppppppuVar10 >> 3) + 1;
              ppppppuVar15 = ppppppuVar15 + -((ulong)(lVar32 - (lVar32 >> 0x3f)) >> 1);
            }
          }
          ppppppuVar18 = ppppppuVar15 + 1;
          *ppppppuVar15 = (ulong *****)ppppppuVar11;
          pppppuVar9 = ppppppuVar33[2];
          pppppuVar16 = ppppppuVar33[1];
          while (pppppuVar9 != pppppuVar16) {
            ppppppuVar11 = ppppppuVar12;
            ppppppuVar10 = ppppppuVar15;
            if (ppppppuVar15 == ppppppuVar12) {
              if (ppppppuVar18 < ppppppuVar23) {
                lVar32 = ((long)ppppppuVar23 - (long)ppppppuVar18 >> 3) + 1;
                lVar13 = (long)ppppppuVar18 - (long)ppppppuVar12;
                lVar3 = (long)ppppppuVar18 - (long)ppppppuVar12;
                ppppppuVar18 = ppppppuVar18 + ((ulong)(lVar32 - (lVar32 >> 0x3f)) >> 1);
                ppppppuVar10 = (ulong ******)((long)ppppppuVar18 - lVar13);
                if (lVar3 != 0) {
                  _memmove(ppppppuVar10,ppppppuVar15,lVar3);
                  ppppppuVar14 = ppppppuVar15;
                }
              }
              else {
                ppppppuVar10 = (ulong ******)((long)ppppppuVar23 - (long)ppppppuVar12 >> 2);
                if ((long)ppppppuVar23 - (long)ppppppuVar12 == 0) {
                  ppppppuVar10 = (ulong ******)0x1;
                }
                ppppppuVar11 = ppppppuVar10;
                FUN_1094f2e70();
                ppppppuVar10 = (ulong ******)
                               ((long)ppppppuVar11 +
                               ((long)ppppppuVar10 * 2 + 6U & 0xfffffffffffffff8));
                lVar32 = (long)ppppppuVar18 - (long)ppppppuVar12;
                ppppppuVar18 = ppppppuVar10;
                if (lVar32 != 0) {
                  ppppppuVar18 = (ulong ******)((long)ppppppuVar10 + lVar32);
                  ppppppuVar23 = ppppppuVar10;
                  do {
                    *ppppppuVar23 = *ppppppuVar15;
                    lVar32 = lVar32 + -8;
                    ppppppuVar23 = ppppppuVar23 + 1;
                    ppppppuVar15 = ppppppuVar15 + 1;
                  } while (lVar32 != 0);
                }
                ppppppuVar23 = ppppppuVar11 + (long)ppppppuVar14;
                if (ppppppuVar12 != (ulong ******)0x0) {
                  __ZdlPv(ppppppuVar12);
                }
              }
            }
            pppppuVar9 = pppppuVar9 + -1;
            ppppppuVar15 = ppppppuVar10 + -1;
            *ppppppuVar15 = (ulong *****)*pppppuVar9;
            ppppppuVar12 = ppppppuVar11;
            unaff_x25 = ppppppuVar15;
            pppppuVar16 = ppppppuVar33[1];
          }
          ppppppuVar10 = (ulong ******)*ppppppuVar33;
          *ppppppuVar33 = (ulong *****)ppppppuVar12;
          ppppppuVar33[1] = (ulong *****)ppppppuVar15;
          ppppppuVar33[2] = (ulong *****)ppppppuVar18;
          ppppppuVar33[3] = (ulong *****)ppppppuVar23;
          if (ppppppuVar10 != (ulong ******)0x0) {
            __ZdlPv();
          }
        }
      }
      else {
        ppppppuVar33[4] = (ulong *****)((long)pppppuVar16 - 0xcc);
        ppppuVar21 = *pppppuVar34;
        ppppppuVar33[1] = pppppuVar34 + 1;
        ppppppuVar10 = ppppppuVar33;
        FUN_1094f2d74(ppppppuVar33,ppppuVar21);
      }
      pppppuVar34 = ppppppuVar33[1];
      uVar28 = (long)ppppppuVar33[5] + (long)ppppppuVar33[4];
    }
    unaff_x23 = (undefined *)0xcc;
    puVar19 = (undefined8 *)((long)pppppuVar34[uVar28 / 0xcc] + (uVar28 % 0xcc) * 0x14);
    *puVar19 = plVar36[5];
    uVar24 = plVar36[6];
    *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(plVar36 + 7);
    puVar19[1] = uVar24;
    ppppppuVar33[5] = (ulong *****)((long)ppppppuVar33[5] + 1);
  }
  pppppuVar16 = param_1[0x16];
  fVar37 = *(float *)(param_2 + 0x1e8);
  iVar1 = *(int *)(param_1 + 0xb);
  fVar38 = (float)NEON_ucvtf(*(undefined4 *)(param_3 + 0x10));
  uVar20 = 0;
  if (param_1[0x17] != pppppuVar16) {
    uVar20 = ((long)param_1[0x17] - (long)pppppuVar16) * 0x80 - 1;
  }
  pppppuVar9 = param_1[0x1a];
  uVar28 = (long)pppppuVar9 + (long)param_1[0x19];
  if (uVar20 == uVar28) {
    ppppppuVar10 = param_1 + 0x15;
    FUN_1094f2ea4();
    pppppuVar16 = param_1[0x16];
    pppppuVar9 = param_1[0x1a];
    uVar28 = (long)param_1[0x19] + (long)pppppuVar9;
  }
  *(float *)((long)pppppuVar16[uVar28 >> 10] + (uVar28 & 0x3ff) * 4) = fVar37 / fVar38;
  pppppuVar9 = (ulong *****)((long)pppppuVar9 + 1);
  param_1[0x1a] = pppppuVar9;
  if ((ulong *****)(long)iVar1 <= pppppuVar9) {
    do {
      param_1[0x19] = (ulong *****)((long)param_1[0x19] + 1);
      param_1[0x1a] = (ulong *****)((long)pppppuVar9 - 1);
      ppppppuVar10 = param_1 + 0x15;
      func_0x0001094f35a4(ppppppuVar10,1);
      pppppuVar9 = param_1[0x1a];
    } while ((ulong *****)(long)iVar1 <= pppppuVar9);
    uVar20 = (long)pppppuVar9 - 1;
    if (pppppuVar9 == (ulong *****)0x0 || uVar20 == 0) {
      fVar37 = (float)uVar20;
      fVar38 = 0.0;
    }
    else {
      pppppuVar16 = param_1[0x19];
      pppppuVar34 = param_1[0x16];
      fVar39 = 0.0;
      uVar28 = uVar20;
      pppppuVar9 = pppppuVar16;
      do {
        pppppuVar17 = (ulong *****)((long)pppppuVar9 + 1);
        fVar39 = fVar39 + (*(float *)((long)pppppuVar34[(ulong)pppppuVar17 >> 10] +
                                     ((ulong)pppppuVar17 & 0x3ff) * 4) -
                          *(float *)((long)pppppuVar34[(ulong)pppppuVar9 >> 10] +
                                    ((ulong)pppppuVar9 & 0x3ff) * 4));
        uVar28 = uVar28 - 1;
        pppppuVar9 = pppppuVar17;
      } while (uVar28 != 0);
      fVar37 = (float)uVar20;
      fVar38 = 0.0;
      do {
        uVar28 = (ulong)pppppuVar16 >> 10;
        uVar29 = (ulong)pppppuVar16 & 0x3ff;
        pppppuVar16 = (ulong *****)((long)pppppuVar16 + 1);
        fVar40 = fVar39 / fVar37 -
                 (*(float *)((long)pppppuVar34[(ulong)pppppuVar16 >> 10] +
                            ((ulong)pppppuVar16 & 0x3ff) * 4) -
                 *(float *)((long)pppppuVar34[uVar28] + uVar29 * 4));
        fVar38 = fVar38 + fVar40 * fVar40;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    if (fVar38 / fVar37 <= *(float *)(param_1 + 0xd)) {
      plVar36 = *(long **)(param_2 + 0x50);
      if (plVar36 != (long *)0x0) {
        unaff_x23 = (undefined *)0x14;
        do {
          pppppuStack_d0 = (ulong *****)(plVar36 + 2);
          ppppppuVar10 = param_1 + 1;
          FUN_1094f3600(ppppppuVar10,pppppuStack_d0,&pppppuStack_d0);
          pppppuVar16 = ppppppuVar10[5];
          if (pppppuVar16[5] < pppppuVar16[6]) {
LAB_1094f299c:
            *(undefined4 *)((long)plVar36 + 0x34) = 0;
            iVar35 = iVar35 + -1;
          }
          else {
            ppppuVar21 = pppppuVar16[1];
            if (pppppuVar16[2] != ppppuVar21) {
              ppppuVar30 = pppppuVar16[4];
              pppuVar25 = ppppuVar21[(ulong)ppppuVar30 / 0xcc];
              pppuVar22 = (ulong ***)((long)pppuVar25 + ((ulong)ppppuVar30 % 0xcc) * 0x14);
              uVar20 = (long)ppppuVar30 + (long)pppppuVar16[5];
              pppuVar26 = (ulong ***)((long)ppppuVar21[uVar20 / 0xcc] + (uVar20 % 0xcc) * 0x14);
              if (pppuVar22 != pppuVar26) {
                ppppuVar31 = (ulong ****)0x0;
                ppppuVar21 = ppppuVar21 + (ulong)ppppuVar30 / 0xcc;
                do {
                  if ((*(float *)(pppuVar22 + 1) < *(float *)(pppppuVar16 + 8)) &&
                     (ppppuVar31 = (ulong ****)((long)ppppuVar31 + 1), pppppuVar16[7] <= ppppuVar31)
                     ) goto LAB_1094f299c;
                  pppuVar22 = (ulong ***)((long)pppuVar22 + 0x14);
                  if ((long)pppuVar22 - (long)pppuVar25 == 0xff0) {
                    ppppuVar21 = ppppuVar21 + 1;
                    pppuVar25 = *ppppuVar21;
                    pppuVar22 = pppuVar25;
                  }
                } while (pppuVar22 != pppuVar26);
              }
            }
          }
          plVar36 = (long *)*plVar36;
        } while (plVar36 != (long *)0x0);
      }
      goto LAB_1094f2608;
    }
  }
  iVar35 = 0;
LAB_1094f2608:
  pppppuVar16 = param_1[0x11];
  if (pppppuVar16 != (ulong *****)0x0) {
    unaff_x23 = &UNK_10dd5b8f9;
    do {
      pppppuVar9 = pppppuVar16 + 2;
      if (*(char *)((long)pppppuVar16 + 0x27) < '\0') {
        func_0x000107c3192c(&pppppuStack_d0,pppppuVar16[2],pppppuVar16[3]);
      }
      else {
        ppppuStack_c8 = pppppuVar16[3];
        pppppuStack_d0 = (ulong *****)*pppppuVar9;
        pppuStack_c0 = (ulong ***)pppppuVar16[4];
      }
      ppppuVar21 = pppppuVar16[5];
      if (*(char *)((long)ppppuVar21 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_b8,*ppppuVar21,ppppuVar21[1]);
      }
      else {
        ppuStack_b0 = (ulong **)ppppuVar21[1];
        ppuStack_b8 = (ulong **)*ppppuVar21;
        ppuStack_a8 = (ulong **)ppppuVar21[2];
      }
      ppppuVar21 = pppppuVar16[5];
      if (*(char *)((long)ppppuVar21 + 0x2f) < '\0') {
        func_0x000107c3192c(appuStack_a0,ppppuVar21[3],ppppuVar21[4]);
      }
      else {
        appuStack_a0[1] = (ulong **)ppppuVar21[4];
        appuStack_a0[0] = (ulong **)ppppuVar21[3];
        pppuStack_90 = ppppuVar21[5];
      }
      pppppuStack_f8 = (ulong *****)0x0;
      pppppuStack_f0 = (ulong *****)0x0;
      uStack_e8 = 0;
      func_0x000107c2ac94(&pppppuStack_f8,&pppppuStack_d0,
                          (char *)((long)register0x00000008 + -0x89) + 1,3);
      lVar32 = 0;
      do {
        if (((char *)((long)register0x00000008 + -0x89))[lVar32] < '\0') {
          __ZdlPv(*(undefined8 *)((long)appuStack_a0 + lVar32));
        }
        lVar32 = lVar32 + -0x18;
      } while (lVar32 != -0x48);
      ppppppuVar10 = (ulong ******)pppppuStack_f8;
      unaff_x25 = (ulong ******)pppppuStack_f0;
      for (plVar36 = *(long **)(param_2 + 0x50); pppppuStack_f8 = (ulong *****)ppppppuVar10,
          pppppuStack_f0 = (ulong *****)unaff_x25, plVar36 != (long *)0x0;
          plVar36 = (long *)*plVar36) {
        FUN_1094dc248(ppppppuVar10,unaff_x25,plVar36 + 2,&pppppuStack_d0);
        ppppppuVar18 = (ulong ******)pppppuStack_f0;
        if (ppppppuVar10 != (ulong ******)pppppuStack_f0) {
          ppppppuVar18 = ppppppuVar10 + 3;
          func_0x00010937cc58(&ppppuStack_d8,ppppppuVar18,pppppuStack_f0);
          for (; (ulong ******)pppppuStack_f0 != ppppppuVar18; pppppuStack_f0 = pppppuStack_f0 + -3)
          {
          }
        }
        pppppuStack_f0 = (ulong *****)ppppppuVar18;
        ppppppuVar10 = (ulong ******)pppppuStack_f8;
        unaff_x25 = (ulong ******)pppppuStack_f0;
      }
      if (ppppppuVar10 != unaff_x25) {
        func_0x000105688514(&UNK_10f57089c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1094f2a50);
        (*pcVar4)();
      }
      lVar32 = param_2 + 0x40;
      ppppuStack_d8 = (ulong ****)pppppuVar9;
      FUN_1094e1a28(lVar32,pppppuVar9,&UNK_10dd5b8f9,&ppppuStack_d8,&uStack_d9);
      if (*(float *)(lVar32 + 0x34) <= *(float *)(lVar32 + 0x38)) {
        ppppuStack_d8 = pppppuVar16[5];
        lVar32 = param_2 + 0x40;
        FUN_1094e1a28(lVar32,ppppuStack_d8,&UNK_10dd5b8f9,&ppppuStack_d8,&uStack_d9);
        if (*(float *)(lVar32 + 0x38) < *(float *)(lVar32 + 0x34)) {
          ppppuStack_d8 = pppppuVar16[5] + 3;
          lVar32 = param_2 + 0x40;
          FUN_1094e1a28(lVar32,ppppuStack_d8,&UNK_10dd5b8f9,&ppppuStack_d8,&uStack_d9);
          if (*(float *)(lVar32 + 0x38) < *(float *)(lVar32 + 0x34)) {
            ppppuStack_d8 = pppppuVar16[5];
            unaff_x25 = (ulong ******)(param_2 + 0x40);
            FUN_1094e1a28(unaff_x25,ppppuStack_d8,&UNK_10dd5b8f9,&ppppuStack_d8,&uStack_d9);
            ppppuStack_d8 = pppppuVar16[5] + 3;
            lVar32 = param_2 + 0x40;
            FUN_1094e1a28(lVar32,ppppuStack_d8,&UNK_10dd5b8f9,&ppppuStack_d8,&uStack_d9);
            lVar13 = param_2 + 0x40;
            ppppuStack_d8 = (ulong ****)pppppuVar9;
            FUN_1094e1a28(lVar13,pppppuVar9,&UNK_10dd5b8f9,&ppppuStack_d8,&uStack_d9);
            fVar39 = *(float *)(param_1 + 0xe);
            fVar37 = (float)*(undefined8 *)(lVar32 + 0x28);
            fVar38 = (float)((ulong)*(undefined8 *)(lVar32 + 0x28) >> 0x20);
            fVar37 = fVar37 + (fVar37 - SUB84(unaff_x25[5],0)) * *(float *)((long)param_1 + 0x6c);
            fVar38 = fVar38 + (fVar38 - (float)((ulong)unaff_x25[5] >> 0x20)) *
                              *(float *)((long)param_1 + 0x6c);
            fVar40 = 1.0 - fVar39;
            bVar5 = false;
            bVar7 = false;
            bVar8 = false;
            if (fVar39 <= fVar37) {
              bVar5 = false;
              bVar7 = false;
              bVar8 = true;
              if (!NAN(fVar37) && !NAN(fVar40)) {
                bVar5 = fVar37 < fVar40;
                bVar7 = fVar37 == fVar40;
                bVar8 = false;
              }
            }
            bVar6 = true;
            if ((bVar7 || bVar5 != bVar8) && (bVar6 = false, !NAN(fVar38) && !NAN(fVar39))) {
              bVar6 = fVar38 < fVar39;
            }
            bVar5 = false;
            bVar7 = false;
            bVar8 = false;
            if (!bVar6) {
              bVar5 = false;
              bVar7 = false;
              bVar8 = true;
              if (!NAN(fVar38) && !NAN(fVar40)) {
                bVar5 = fVar38 < fVar40;
                bVar7 = fVar38 == fVar40;
                bVar8 = false;
              }
            }
            if (bVar7 || bVar5 != bVar8) {
              uVar41 = 0;
            }
            else {
              *(ulong *)(lVar13 + 0x28) = CONCAT44(fVar38,fVar37);
              uVar41 = 0x3f800000;
            }
            lVar32 = param_2 + 0x40;
            ppppuStack_d8 = (ulong ****)pppppuVar9;
            FUN_1094e1a28(lVar32,pppppuVar9,&UNK_10dd5b8f9,&ppppuStack_d8,&uStack_d9);
            *(undefined4 *)(lVar32 + 0x34) = uVar41;
          }
        }
      }
      pppppuStack_d0 = (ulong *****)&pppppuStack_f8;
      ppppppuVar10 = &pppppuStack_d0;
      func_0x000104c607c8();
      pppppuVar16 = (ulong *****)*pppppuVar16;
    } while (pppppuVar16 != (ulong *****)0x0);
  }
  if (iVar35 < *(int *)((long)param_1 + 0x5c)) {
    for (plVar36 = *(long **)(param_2 + 0x50); plVar36 != (long *)0x0; plVar36 = (long *)*plVar36) {
      *(undefined4 *)((long)plVar36 + 0x34) = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppppppuVar10;
  }
  ___stack_chk_fail();
  __ZdlPv(unaff_x25);
  if (unaff_x23 != (undefined *)0x0) {
    __ZdlPv(unaff_x23);
  }
  __Unwind_Resume(ppppppuVar10);
  FUN_1094f2ba0(ppppppuVar10 + 0x15);
  func_0x0001094f2c84(ppppppuVar10 + 6);
  FUN_1094f2cdc(ppppppuVar10 + 1);
  return ppppppuVar10;
}



/* Entry: 1094f2b18; end: 1094f2b87;  */

long FUN_1094f2b18(long param_1)

{
  FUN_1094f2ba0(param_1 + 0xa8);
  func_0x0001094f2c84(param_1 + 0x30);
  FUN_1094f2cdc(param_1 + 8);
  return param_1;
}



/* Entry: 1094f2b88; end: 1094f2b9f;  */

long FUN_1094f2b88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  if (*(char *)(param_1 + 0xa0) == '\0') {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1094f2ba0; end: 1094f2c37;  */

long * FUN_1094f2ba0(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_1094f2c1c;
    lVar3 = 0x400;
  }
  param_1[4] = lVar3;
LAB_1094f2c1c:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094f2c38; end: 1094f2cdb;  */

long * FUN_1094f2c38(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094f2cdc; end: 1094f2d37;  */

long * FUN_1094f2cdc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1094f2d38(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094f2d38; end: 1094f2d73;  */

void FUN_1094f2d38(undefined8 *param_1)

{
  FUN_1094f3b54(param_1 + 3);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 1094f2d74; end: 1094f2e6f;  */

void FUN_1094f2d74(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_1094f2e70();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1094f2e70; end: 1094f2ea3;  */

void FUN_1094f2e70(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    __Znwm((long)param_1 << 3);
    return;
  }
  func_0x000104c4f740();
  if ((ulong)param_1[4] < 0x400) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_60 = param_1;
      FUN_1094f3570();
      lStack_78 = (long)plVar1 + uVar6;
      plStack_68 = plVar1 + lVar3;
      uVar2 = 0x1000;
      plStack_80 = plVar1;
      lStack_70 = lStack_78;
      __Znwm();
      uStack_88 = uVar2;
      FUN_1094f3364(&plStack_80,&uStack_88);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_1094f3468(&plStack_80,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_78;
      *param_1 = (long)plStack_80;
      param_1[3] = (long)plStack_68;
      param_1[2] = lStack_70;
      lStack_70 = lVar8;
      if (lVar3 != lVar8) {
        lStack_70 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_80 = plVar1;
      lStack_78 = lVar4;
      plStack_68 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0x1000;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_80 = plVar1;
      func_0x0001094f3158(param_1,&plStack_80);
      return;
    }
    __Znwm();
    plStack_80 = plVar1;
    FUN_1094f325c(param_1,&plStack_80);
  }
  else {
    param_1[4] = param_1[4] - 0x400;
  }
  plStack_80 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_1094f3054(param_1,&plStack_80);
  return;
}



/* Entry: 1094f2ea4; end: 1094f3053;  */

void FUN_1094f2ea4(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x400) {
    lVar7 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar5 = lVar7 - *param_1;
    if (uVar5 <= uVar6) {
      lVar3 = (long)uVar5 >> 2;
      if (lVar7 == *param_1) {
        lVar3 = 1;
      }
      plVar1 = param_1;
      plStack_40 = param_1;
      FUN_1094f3570();
      lStack_58 = (long)plVar1 + uVar6;
      plStack_48 = plVar1 + lVar3;
      uVar2 = 0x1000;
      plStack_60 = plVar1;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = uVar2;
      FUN_1094f3364(&plStack_60,&uStack_68);
      lVar3 = param_1[2];
      lVar7 = -7 - lVar3;
      while (lVar4 = param_1[1], lVar3 != lVar4) {
        lVar3 = lVar3 + -8;
        lVar7 = lVar7 + 8;
        FUN_1094f3468(&plStack_60,lVar3);
      }
      plVar1 = (long *)*param_1;
      lVar9 = param_1[3];
      lVar8 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = (long)plStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_50 = lVar8;
      if (lVar3 != lVar8) {
        lStack_50 = lVar8 + (-(lVar8 + lVar7) & 0xfffffffffffffff8U);
      }
      if (plVar1 == (long *)0x0) {
        return;
      }
      plStack_60 = plVar1;
      lStack_58 = lVar4;
      plStack_48 = (long *)lVar9;
      __ZdlPv();
      return;
    }
    plVar1 = (long *)0x1000;
    if (lVar7 != param_1[2]) {
      __Znwm();
      plStack_60 = plVar1;
      func_0x0001094f3158(param_1,&plStack_60);
      return;
    }
    __Znwm();
    plStack_60 = plVar1;
    FUN_1094f325c(param_1,&plStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x400;
  }
  plStack_60 = *(long **)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  FUN_1094f3054(param_1,&plStack_60);
  return;
}



/* Entry: 1094f3054; end: 1094f325b;  */

void FUN_1094f3054(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_1094f3570();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1094f325c; end: 1094f3363;  */

void FUN_1094f325c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_1094f3570();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 1094f3364; end: 1094f3467;  */

void FUN_1094f3364(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      uVar3 = param_1[4];
      uVar5 = uVar4;
      FUN_1094f3570();
      puVar1 = (undefined8 *)(uVar3 + (uVar4 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar5 * 8;
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1094f3468; end: 1094f356f;  */

void FUN_1094f3468(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      lVar2 = param_1[4];
      FUN_1094f3570();
      puVar8 = (undefined8 *)(lVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = lVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = lVar2 + lVar9 * 8;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 1094f3570; end: 1094f35ff;  */

undefined1  [16] FUN_1094f3570(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  uVar3 = (uint)param_2;
  if (*(ulong *)(param_1 + 0x20) < 0x400) {
    uVar3 = 1;
  }
  uVar1 = 0;
  if (*(ulong *)(param_1 + 0x20) < 0x800) {
    uVar1 = uVar3;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x400;
  }
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar1 ^ 1;
  auVar5._8_8_ = param_2;
  return auVar5;
}



/* Entry: 1094f3600; end: 1094f3a07;  */

long * FUN_1094f3600(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar6 = (long *)*param_3;
  plVar5 = (long *)0x38;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*plVar6,plVar6[1]);
  }
  else {
    lVar4 = plVar6[1];
    lVar3 = *plVar6;
    plVar5[4] = plVar6[2];
    plVar5[3] = lVar4;
    plVar5[2] = lVar3;
  }
  plVar5[5] = 0;
  plVar5[6] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1094f3918;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_1094f37a0:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094f39f0);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_1094f37a0;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_1094f3918:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1094f3a08; end: 1094f3a4f;  */

void FUN_1094f3a08(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1094f2d38(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094f3a50; end: 1094f3a5f;  */

void FUN_1094f3a50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af8f58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094f3a60; end: 1094f3a7f;  */

void FUN_1094f3a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af8f58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094f3a80; end: 1094f3b4f;  */

void FUN_1094f3a80(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar3 = (long)puVar1 - (long)puVar5;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar5);
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    *(undefined8 **)(param_1 + 0x20) = puVar5;
    lVar3 = (long)puVar1 - (long)puVar5;
  }
  if (uVar2 == 1) {
    uVar4 = 0x66;
  }
  else {
    if (uVar2 != 2) goto LAB_1094f3af0;
    uVar4 = 0xcc;
  }
  *(undefined8 *)(param_1 + 0x38) = uVar4;
LAB_1094f3af0:
  if (puVar5 != puVar1) {
    do {
      puVar6 = puVar5 + 1;
      __ZdlPv(*puVar5);
      puVar5 = puVar6;
    } while (puVar6 != puVar1);
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != *(long *)(param_1 + 0x20)) {
      *(ulong *)(param_1 + 0x28) =
           lVar3 + ((*(long *)(param_1 + 0x20) - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094f3b50; end: 1094f3b53;  */

void FUN_1094f3b50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094f3b54; end: 1094f3bab;  */

long FUN_1094f3b54(long param_1)

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



/* Entry: 1094f3bac; end: 1094f3cfb;  */

long FUN_1094f3bac(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uStack_80;
  long *plStack_78;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  uStack_60 = 0x200000001;
  uStack_40 = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2f0) = 0x200000001;
  puVar1 = (undefined8 *)(param_1 + 0x2f8);
  if (*(char *)(param_1 + 0x318) == '\x01') {
    FUN_1094dd770(puVar1);
    *puVar1 = 0;
  }
  else {
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined ***)(param_1 + 0x2e8) = &PTR_FUN_110af8150;
    *(undefined1 *)(param_1 + 0x318) = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x310) = uStack_40;
  ppuStack_68 = &PTR_FUN_110af7e20;
  puStack_38 = &uStack_58;
  FUN_1094dd9b4(&puStack_38);
  plStack_78 = (long *)param_2[1];
  uStack_80 = *param_2;
  if (param_2[1] != 0) {
    plVar2 = (long *)(param_2[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1 = param_1 + 0x2e8;
  FUN_1094e8fbc(param_1,&uStack_80);
  plVar2 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar3 = plStack_78 + 1;
    do {
      lVar6 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return param_1;
}



/* Entry: 1094f3cfc; end: 1094f3e63;  */

void FUN_1094f3cfc(undefined *param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_e0 [113];
  undefined8 uStack_6f;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  undefined8 uStack_4f;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((param_1[0x2e0] & 1) == 0) {
    FUN_1094dd26c(param_1 + 0x98,param_2);
    if (*(char *)(param_3 + 0x58) == '\x01') {
      FUN_1094f5708(auStack_e0 + 0x70,param_3 + 0x18);
      param_1[8] = auStack_e0[0x70];
      *(ulong *)(param_1 + 0x11) = CONCAT17(uStack_60,uStack_67);
      *(undefined8 *)(param_1 + 9) = uStack_6f;
      *(undefined8 *)(param_1 + 0x21) = uStack_57;
      *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_58,uStack_5f);
      *(ulong *)(param_1 + 0x31) = CONCAT17(uStack_40,uStack_47);
      *(undefined8 *)(param_1 + 0x29) = uStack_4f;
      *(undefined8 *)(param_1 + 0x40) = uStack_38;
      *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_3f,uStack_40);
      param_1[0x48] = 1;
      FUN_1094fd688(auStack_e0 + 0x70,param_1 + 8,param_2 + 0x90);
    }
    else {
      param_1[8] = 0;
      param_1[0x48] = 0;
      FUN_1094dfc8c(auStack_e0 + 0x70,param_2 + 0x90);
    }
    plVar8 = (long *)CONCAT71(uStack_5f,uStack_60);
    if (plVar8 == (long *)0x0) {
      fVar9 = 0.0;
      fVar11 = 0.0;
      fVar12 = 0.0;
    }
    else {
      fVar9 = 0.0;
      fVar11 = 0.0;
      fVar12 = 0.0;
      do {
        fVar9 = fVar9 + (float)plVar8[5];
        fVar11 = fVar11 + (float)((ulong)plVar8[5] >> 0x20);
        fVar12 = fVar12 + *(float *)(plVar8 + 6);
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
    fVar13 = (float)*(ulong *)(param_2 + 0xa8);
    *(ulong *)(param_1 + 0x88) = CONCAT44(fVar11 / fVar13,fVar9 / fVar13);
    *(float *)(param_1 + 0x90) = fVar12 / fVar13;
    FUN_1094dda24(auStack_e0 + 0x70);
    return;
  }
  iVar7 = *(int *)(param_1 + 0x2f0);
  puVar3 = param_1;
  lVar5 = param_2;
  lVar6 = param_3;
  if (2 < iVar7 - 7U) {
    if (iVar7 == 1) {
      iVar7 = 7;
    }
    else {
      puVar3 = &UNK_10f57092b;
      unaff_x30 = FUN_1094f3e64;
      func_0x000105688514();
      register0x00000008 = (BADSPACEBASE *)(auStack_e0 + 0x70);
      unaff_x19 = param_1;
      unaff_x20 = param_2;
      unaff_x21 = param_3;
      unaff_x29 = puVar1;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(lVar6 + 0x58) == '\x01') {
    FUN_1094f5708((undefined1 *)((long)register0x00000008 + -0x70),lVar6 + 0x18);
    puVar3[8] = *(undefined1 *)((long)register0x00000008 + -0x70);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x6f);
    *(undefined8 *)(puVar3 + 0x11) = *(undefined8 *)((long)register0x00000008 + -0x67);
    *(undefined8 *)(puVar3 + 9) = uVar10;
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x5f);
    *(undefined8 *)(puVar3 + 0x21) = *(undefined8 *)((long)register0x00000008 + -0x57);
    *(undefined8 *)(puVar3 + 0x19) = uVar10;
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x4f);
    *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)((long)register0x00000008 + -0x47);
    *(undefined8 *)(puVar3 + 0x29) = uVar10;
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)(puVar3 + 0x40) = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)(puVar3 + 0x38) = uVar10;
    puVar3[0x48] = 1;
    FUN_1094fd688((undefined1 *)((long)register0x00000008 + -0x70),puVar3 + 8,lVar5 + 0x90);
  }
  else {
    puVar3[8] = 0;
    puVar3[0x48] = 0;
    FUN_1094dfc8c((undefined1 *)((long)register0x00000008 + -0x70),lVar5 + 0x90);
  }
  plVar8 = *(long **)((long)register0x00000008 + -0x60);
  if (plVar8 == (long *)0x0) {
    fVar9 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
  }
  else {
    fVar9 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    do {
      fVar9 = fVar9 + (float)plVar8[5];
      fVar11 = fVar11 + (float)((ulong)plVar8[5] >> 0x20);
      fVar12 = fVar12 + *(float *)(plVar8 + 6);
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  fVar14 = (float)*(ulong *)(lVar5 + 0xa8);
  fVar13 = *(float *)(puVar3 + 0x90) - fVar12 / fVar14;
  if (iVar7 == 9) {
    fVar13 = ABS(fVar13);
  }
  else {
    fVar15 = *(float *)(puVar3 + 0x88) - fVar9 / fVar14;
    fVar16 = *(float *)(puVar3 + 0x8c) - fVar11 / fVar14;
    if (iVar7 == 8) {
      fVar16 = fVar16 * fVar16;
    }
    else {
      if (iVar7 != 7) {
        func_0x000105688514(&UNK_10f5708ea);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1094f404c);
        (*pcVar2)();
      }
      fVar16 = fVar16 * fVar16 + fVar15 * fVar15;
      fVar15 = fVar13;
    }
    fVar13 = SQRT(fVar16 + fVar15 * fVar15);
  }
  if (*(float *)(puVar3 + 0x310) < fVar13) {
    if ((*(int *)(puVar3 + 0x314) == 0) || (*(int *)(puVar3 + 0x94) != *(int *)(puVar3 + 0x314))) {
      *(int *)(puVar3 + 0x94) = *(int *)(puVar3 + 0x94) + 1;
      goto LAB_1094f4020;
    }
  }
  *(ulong *)(puVar3 + 0x88) = CONCAT44(fVar11 / fVar14,fVar9 / fVar14);
  *(float *)(puVar3 + 0x90) = fVar12 / fVar14;
  *(undefined4 *)(puVar3 + 0x94) = 0;
  for (plVar8 = *(long **)(lVar5 + 0xa0); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    *(long **)((long)register0x00000008 + -0x78) = plVar8 + 2;
    puVar4 = puVar3 + 0x128;
    FUN_1094edafc(puVar4,plVar8 + 2,&UNK_10dd5b8f9,(undefined1 *)((long)register0x00000008 + -0x78),
                  (undefined1 *)((long)register0x00000008 + -0x79));
    *(long *)(puVar4 + 0x28) = plVar8[5];
    *(undefined4 *)(puVar4 + 0x30) = *(undefined4 *)(plVar8 + 6);
  }
LAB_1094f4020:
  FUN_1094dda24((undefined1 *)((long)register0x00000008 + -0x70));
  return;
}



/* Entry: 1094f3e64; end: 1094f4063;  */

void FUN_1094f3e64(long param_1,long param_2,long param_3,int param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 uStack_79;
  long *plStack_78;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  undefined8 uStack_4f;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  
  if (*(char *)(param_3 + 0x58) == '\x01') {
    FUN_1094f5708(&uStack_70,param_3 + 0x18);
    *(undefined1 *)(param_1 + 8) = uStack_70;
    *(ulong *)(param_1 + 0x11) = CONCAT17(uStack_60,uStack_67);
    *(undefined8 *)(param_1 + 9) = uStack_6f;
    *(undefined8 *)(param_1 + 0x21) = uStack_57;
    *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_58,uStack_5f);
    *(ulong *)(param_1 + 0x31) = CONCAT17(uStack_40,uStack_47);
    *(undefined8 *)(param_1 + 0x29) = uStack_4f;
    *(undefined8 *)(param_1 + 0x40) = uStack_38;
    *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_3f,uStack_40);
    *(undefined1 *)(param_1 + 0x48) = 1;
    FUN_1094fd688(&uStack_70,(undefined1 *)(param_1 + 8),param_2 + 0x90);
  }
  else {
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
    FUN_1094dfc8c(&uStack_70,param_2 + 0x90);
  }
  plVar3 = (long *)CONCAT71(uStack_5f,uStack_60);
  if (plVar3 == (long *)0x0) {
    fVar4 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
  }
  else {
    fVar4 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
    do {
      fVar4 = fVar4 + (float)plVar3[5];
      fVar5 = fVar5 + (float)((ulong)plVar3[5] >> 0x20);
      fVar6 = fVar6 + *(float *)(plVar3 + 6);
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
  }
  fVar8 = (float)*(ulong *)(param_2 + 0xa8);
  fVar7 = *(float *)(param_1 + 0x90) - fVar6 / fVar8;
  if (param_4 == 9) {
    fVar7 = ABS(fVar7);
  }
  else {
    fVar9 = *(float *)(param_1 + 0x88) - fVar4 / fVar8;
    fVar10 = *(float *)(param_1 + 0x8c) - fVar5 / fVar8;
    if (param_4 == 8) {
      fVar10 = fVar10 * fVar10;
    }
    else {
      if (param_4 != 7) {
        func_0x000105688514(&UNK_10f5708ea);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1094f404c);
        (*pcVar1)();
      }
      fVar10 = fVar10 * fVar10 + fVar9 * fVar9;
      fVar9 = fVar7;
    }
    fVar7 = SQRT(fVar10 + fVar9 * fVar9);
  }
  if (*(float *)(param_1 + 0x310) < fVar7) {
    if ((*(int *)(param_1 + 0x314) == 0) || (*(int *)(param_1 + 0x94) != *(int *)(param_1 + 0x314)))
    {
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      goto LAB_1094f4020;
    }
  }
  *(ulong *)(param_1 + 0x88) = CONCAT44(fVar5 / fVar8,fVar4 / fVar8);
  *(float *)(param_1 + 0x90) = fVar6 / fVar8;
  *(undefined4 *)(param_1 + 0x94) = 0;
  for (plVar3 = *(long **)(param_2 + 0xa0); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    plStack_78 = plVar3 + 2;
    lVar2 = param_1 + 0x128;
    FUN_1094edafc(lVar2,plStack_78,&UNK_10dd5b8f9,&plStack_78,&uStack_79);
    *(long *)(lVar2 + 0x28) = plVar3[5];
    *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(plVar3 + 6);
  }
LAB_1094f4020:
  FUN_1094dda24(&uStack_70);
  return;
}



/* Entry: 1094f4064; end: 1094f408f;  */

long * FUN_1094f4064(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lStack_58;
  undefined4 uStack_50;
  undefined1 uStack_49;
  long *plStack_48;
  
  if (2 < (int)param_1[0x5e] - 7U && (int)param_1[0x5e] != 1) {
    plVar7 = (long *)&UNK_10f570971;
    func_0x000105688514();
    if ((char)plVar7[99] == '\x01') {
      plVar7[0x5d] = (long)&PTR_FUN_110af7e20;
      FUN_1094dd9b4(&stack0xffffffffffffffc8);
    }
    if ((char)plVar7[0x5c] == '\x01') {
      FUN_1094e0cf8(plVar7 + 0x13);
    }
    *plVar7 = (long)&PTR_FUN_110af9078;
    if ((char)plVar7[0xf] == '\x01') {
      func_0x0001094dda24(plVar7 + 10);
    }
    return plVar7;
  }
  if ((char)param_1[0xf] == '\x01') {
    if ((*(byte *)(param_3 + 0x58) & 1) == 0) {
      plVar7 = (long *)(param_2 + 0x90);
      if (plVar7 != param_1 + 10) {
        *(int *)(param_2 + 0xb0) = (int)param_1[0xe];
        plVar2 = (long *)param_1[0xc];
        lVar3 = *(long *)(param_2 + 0x98);
        plVar1 = plVar7;
        if (lVar3 != 0) {
          lVar4 = 0;
          do {
            *(undefined8 *)(*plVar7 + lVar4 * 8) = 0;
            lVar4 = lVar4 + 1;
          } while (lVar3 != lVar4);
          plVar5 = *(long **)(param_2 + 0xa0);
          *(undefined8 *)(param_2 + 0xa0) = 0;
          *(undefined8 *)(param_2 + 0xa8) = 0;
          plVar6 = plVar5;
          if (plVar5 != (long *)0x0 && plVar2 != (long *)0x0) {
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (plVar6 + 2,plVar2 + 2);
              plVar6[5] = plVar2[5];
              *(int *)(plVar6 + 6) = (int)plVar2[6];
              plVar5 = (long *)*plVar6;
              FUN_1094ddefc(plVar7,plVar6);
              plVar2 = (long *)*plVar2;
              plVar6 = plVar5;
            } while (plVar5 != (long *)0x0 && plVar2 != (long *)0x0);
          }
          func_0x0001094dda5c(plVar7,plVar5);
        }
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          plVar1 = plVar7;
          FUN_1094de3d0(plVar7,plVar2 + 2);
        }
        return plVar1;
      }
    }
    else {
      for (plVar7 = (long *)param_1[0xc]; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        FUN_1094cf978(&lStack_58,param_3 + 0x18,plVar7 + 5);
        param_1 = (long *)(param_2 + 0x90);
        plStack_48 = plVar7 + 2;
        FUN_1094edafc(param_1,plVar7 + 2,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
        param_1[5] = lStack_58;
        *(undefined4 *)(param_1 + 6) = uStack_50;
      }
    }
  }
  return param_1;
}



/* Entry: 1094f4090; end: 1094f419b;  */

undefined8 * FUN_1094f4090(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (*(char *)(param_1 + 99) == '\x01') {
    param_1[0x5d] = &PTR_FUN_110af7e20;
    puStack_28 = param_1 + 0x5f;
    FUN_1094dd9b4(&puStack_28);
  }
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    FUN_1094e0cf8(param_1 + 0x13);
  }
  *param_1 = &PTR_FUN_110af9078;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_1094dda24(param_1 + 10);
  }
  return param_1;
}



/* Entry: 1094f419c; end: 1094f41af;  */

long FUN_1094f419c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x2e8;
  if (*(char *)(param_1 + 0x318) == '\0') {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1094f41b0; end: 1094f4217;  */

void FUN_1094f41b0(long param_1)

{
  undefined1 auStack_270 [584];
  char cStack_28;
  
  auStack_270[0] = 0;
  cStack_28 = '\0';
  FUN_1094e0e58(param_1 + 0x98,auStack_270);
  if (cStack_28 == '\x01') {
    FUN_1094e0cf8(auStack_270);
  }
  return;
}



/* Entry: 1094f4218; end: 1094f4393;  */

long FUN_1094f4218(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  uStack_80 = 0x200000001;
  *(undefined8 *)(param_1 + 0x2e0) = 0x200000001;
  puVar1 = (undefined8 *)(param_1 + 0x2e8);
  plVar2 = (long *)(param_1 + 0x300);
  if (*(char *)(param_1 + 0x318) == '\x01') {
    FUN_1094dd770(puVar1);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    if (*plVar2 != 0) {
      *(long *)(param_1 + 0x308) = *plVar2;
      __ZdlPv();
      *plVar2 = 0;
      *(undefined8 *)(param_1 + 0x308) = 0;
      *(undefined8 *)(param_1 + 0x310) = 0;
    }
    *plVar2 = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
  }
  else {
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    *(undefined ***)(param_1 + 0x2d8) = &PTR_FUN_110af8190;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *plVar2 = 0;
    *(undefined1 *)(param_1 + 0x318) = 1;
  }
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  ppuStack_88 = &PTR_FUN_110af7e20;
  puStack_48 = &uStack_78;
  FUN_1094dd9b4(&puStack_48);
  plStack_98 = (long *)param_2[1];
  uStack_a0 = *param_2;
  if (param_2[1] != 0) {
    plVar2 = (long *)(param_2[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1 = param_1 + 0x2d8;
  FUN_1094e8fbc(param_1,&uStack_a0);
  plVar2 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar3 = plStack_98 + 1;
    do {
      lVar6 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return param_1;
}



/* Entry: 1094f4394; end: 1094f51cf;  */

long * FUN_1094f4394(long *param_1,long *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  float *pfVar18;
  undefined8 unaff_x20;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  ulong uVar26;
  long lVar27;
  float fVar28;
  long lVar29;
  float fVar30;
  long lStack_198;
  undefined4 uStack_190;
  undefined1 uStack_189;
  long *plStack_188;
  long *plStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long *plStack_140;
  long *plStack_138;
  long lStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  long lStack_d8;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  long lStack_89;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_2;
  if ((*(byte *)(param_1 + 0x5a) & 1) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      if ((char)param_1[0x5a] == '\x01') {
        FUN_1094ddaa0();
      }
      else {
        FUN_1094df9ec(param_1 + 0x11,param_2);
        *(undefined1 *)(param_1 + 0x5a) = 1;
      }
      return param_1 + 0x11;
    }
  }
  else {
    if ((int)param_1[0x5c] != 7 && (int)param_1[0x5c] != 1) goto LAB_1094f5118;
    cVar2 = param_3[0x58];
    plVar20 = param_2;
    if (cVar2 != '\x01') {
      uVar12 = 0;
      plVar9 = param_1;
    }
    else {
      plVar9 = (long *)(param_3 + 0x18);
      FUN_1094f5708(&uStack_110,plVar9);
      uStack_b8 = CONCAT17(uStack_100,uStack_107);
      lStack_c0 = CONCAT17(uStack_108,uStack_10f);
      uStack_a8 = CONCAT17(uStack_f0,uStack_f7);
      uStack_b0 = CONCAT17(uStack_f8,uStack_ff);
      uStack_a0 = CONCAT17(uStack_e8,uStack_ef);
      uStack_98 = uStack_e7;
      lStack_89 = lStack_d8;
      uStack_91 = uStack_e0;
      uStack_90 = uStack_df;
      uVar12 = uStack_110;
    }
    plStack_140 = param_1 + 1;
    *(undefined1 *)plStack_140 = uVar12;
    *(undefined8 *)((long)param_1 + 0x11) = uStack_b8;
    *(long *)((long)param_1 + 9) = lStack_c0;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_a8;
    *(undefined8 *)((long)param_1 + 0x19) = uStack_b0;
    *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_91,uStack_98);
    *(undefined8 *)((long)param_1 + 0x29) = uStack_a0;
    param_1[8] = lStack_89;
    param_1[7] = CONCAT71(uStack_90,uStack_91);
    *(bool *)(param_1 + 9) = cVar2 == '\x01';
    plVar19 = (long *)param_2[0x14];
    if (plVar19 != (long *)0x0) {
      plStack_118 = param_1 + 100;
      plStack_138 = param_1 + 0x66;
      unaff_x22 = 0xaaaaaaaaaaaaaaab;
      do {
        plVar13 = plStack_118;
        if ((char)param_1[9] == '\x01') {
          FUN_1094cf978(&lStack_c0,plStack_140,plVar19 + 5);
        }
        else {
          lStack_c0 = plVar19[5];
          uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)plVar19[6]);
        }
        plStack_120 = plVar19 + 2;
        plStack_128 = plVar19;
        func_0x000107c31944();
        plVar20 = (long *)param_1[0x65];
        if (plVar20 != (long *)0x0) {
          uVar24 = (long)plVar20 - 1;
          if (((ulong)plVar20 & uVar24) == 0) {
            unaff_x26 = (long *)(uVar24 & (ulong)plVar13);
          }
          else {
            unaff_x26 = plVar13;
            if (plVar20 <= plVar13) {
              uVar10 = 0;
              if (plVar20 != (long *)0x0) {
                uVar10 = (ulong)plVar13 / (ulong)plVar20;
              }
              unaff_x26 = (long *)((long)plVar13 - uVar10 * (long)plVar20);
            }
          }
          puVar8 = *(undefined8 **)(*plStack_118 + (long)unaff_x26 * 8);
          if (puVar8 != (undefined8 *)0x0) {
            plVar9 = plStack_118;
            for (unaff_x24 = (long *)*puVar8; plStack_118 = plVar9, unaff_x24 != (long *)0x0;
                unaff_x24 = (long *)*unaff_x24) {
              plVar19 = (long *)unaff_x24[1];
              if (plVar19 == plVar13) {
                func_0x000104c4fbc4(plVar9,unaff_x24 + 2,plStack_120);
                if (((ulong)plVar9 & 1) != 0) goto LAB_1094f4888;
              }
              else {
                if (((ulong)plVar20 & uVar24) == 0) {
                  plVar19 = (long *)((ulong)plVar19 & uVar24);
                }
                else if (plVar20 <= plVar19) {
                  uVar10 = 0;
                  if (plVar20 != (long *)0x0) {
                    uVar10 = (ulong)plVar19 / (ulong)plVar20;
                  }
                  plVar19 = (long *)((long)plVar19 - uVar10 * (long)plVar20);
                }
                if (plVar19 != unaff_x26) break;
              }
              plVar9 = plStack_118;
            }
          }
        }
        unaff_x24 = (long *)0x58;
        __Znwm();
        uStack_110 = SUB81(unaff_x24,0);
        uStack_10f = (undefined7)((ulong)unaff_x24 >> 8);
        uStack_108 = SUB81(plStack_118,0);
        uStack_107 = (undefined7)((ulong)plStack_118 >> 8);
        uStack_100 = 0;
        uStack_ff = 0;
        *unaff_x24 = 0;
        unaff_x24[1] = (long)plVar13;
        if (*(char *)((long)plStack_128 + 0x27) < '\0') {
          func_0x000107c3192c(unaff_x24 + 2,plStack_128[2],plStack_128[3]);
        }
        else {
          lVar5 = plStack_120[1];
          lVar4 = *plStack_120;
          unaff_x24[4] = plStack_120[2];
          unaff_x24[3] = lVar5;
          unaff_x24[2] = lVar4;
        }
        unaff_x24[10] = 0;
        unaff_x24[9] = 0;
        unaff_x24[8] = 0;
        unaff_x24[7] = 0;
        unaff_x24[6] = 0;
        unaff_x24[5] = 0;
        uStack_100 = 1;
        if ((plVar20 == (long *)0x0) ||
           (*(float *)(param_1 + 0x68) * (float)plVar20 < (float)(param_1[0x67] + 1))) {
          uVar24 = 1;
          if ((long *)0x2 < plVar20) {
            uVar24 = (ulong)(((ulong)plVar20 & (long)plVar20 - 1U) != 0);
          }
          plVar9 = (long *)(uVar24 | (long)plVar20 << 1);
          plVar20 = (long *)(long)((float)(param_1[0x67] + 1) / *(float *)(param_1 + 0x68));
          if (plVar9 <= plVar20) {
            plVar9 = plVar20;
          }
          if ((long)plVar9 - 1U == 0) {
            plVar9 = (long *)0x2;
          }
          else if (((ulong)plVar9 & (long)plVar9 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          plVar20 = (long *)param_1[0x65];
          if (plVar20 < plVar9) {
LAB_1094f4684:
            plVar20 = plVar9;
            if ((ulong)plVar20 >> 0x3d != 0) {
              func_0x000104c4f740();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1094f517c);
              (*pcVar3)();
            }
            lVar4 = (long)plVar20 << 3;
            __Znwm();
            lVar5 = *plStack_118;
            *plStack_118 = lVar4;
            if (lVar5 != 0) {
              __ZdlPv();
            }
            plVar9 = (long *)0x0;
            param_1[0x65] = (long)plVar20;
            do {
              *(undefined8 *)(*plStack_118 + (long)plVar9 * 8) = 0;
              plVar9 = (long *)((long)plVar9 + 1);
            } while (plVar20 != plVar9);
            plVar9 = (long *)*plStack_138;
            if (plVar9 != (long *)0x0) {
              plVar19 = (long *)plVar9[1];
              uVar24 = (long)plVar20 - 1;
              if (((ulong)plVar20 & uVar24) == 0) {
                plVar19 = (long *)((ulong)plVar19 & uVar24);
              }
              else if (plVar20 <= plVar19) {
                uVar10 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar10 = (ulong)plVar19 / (ulong)plVar20;
                }
                plVar19 = (long *)((long)plVar19 - uVar10 * (long)plVar20);
              }
              *(long **)(*plStack_118 + (long)plVar19 * 8) = plStack_138;
              plVar14 = (long *)*plVar9;
              while (plVar14 != (long *)0x0) {
                plVar16 = (long *)plVar14[1];
                if (((ulong)plVar20 & uVar24) == 0) {
                  plVar16 = (long *)((ulong)plVar16 & uVar24);
                }
                else if (plVar20 <= plVar16) {
                  uVar10 = 0;
                  if (plVar20 != (long *)0x0) {
                    uVar10 = (ulong)plVar16 / (ulong)plVar20;
                  }
                  plVar16 = (long *)((long)plVar16 - uVar10 * (long)plVar20);
                }
                plVar15 = plVar14;
                if (plVar16 != plVar19) {
                  lVar4 = *plStack_118;
                  if (*(long *)(lVar4 + (long)plVar16 * 8) == 0) {
                    *(long **)(lVar4 + (long)plVar16 * 8) = plVar9;
                    plVar19 = plVar16;
                  }
                  else {
                    *plVar9 = *plVar14;
                    *plVar14 = **(undefined8 **)(lVar4 + (long)plVar16 * 8);
                    **(long **)(lVar4 + (long)plVar16 * 8) = (long)plVar14;
                    plVar15 = plVar9;
                  }
                }
                plVar9 = plVar15;
                plVar14 = (long *)*plVar15;
              }
            }
          }
          else if (plVar9 < plVar20) {
            plVar19 = (long *)(long)((float)(ulong)param_1[0x67] / *(float *)(param_1 + 0x68));
            if ((plVar20 < (long *)0x3) || (((ulong)plVar20 & (long)plVar20 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long *)0x1 < plVar19) {
              plVar19 = (long *)(1L << (-LZCOUNT((long)plVar19 + -1) & 0x3fU));
            }
            if (plVar9 <= plVar19) {
              plVar9 = plVar19;
            }
            if (plVar9 < plVar20) {
              if (plVar9 != (long *)0x0) goto LAB_1094f4684;
              lVar4 = *plStack_118;
              *plStack_118 = 0;
              if (lVar4 != 0) {
                __ZdlPv();
              }
              plVar20 = (long *)0x0;
              param_1[0x65] = 0;
            }
            else {
              plVar20 = (long *)param_1[0x65];
            }
          }
          if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
            unaff_x26 = (long *)((long)plVar20 - 1U & (ulong)plVar13);
          }
          else {
            unaff_x26 = plVar13;
            if (plVar20 <= plVar13) {
              uVar24 = 0;
              if (plVar20 != (long *)0x0) {
                uVar24 = (ulong)plVar13 / (ulong)plVar20;
              }
              unaff_x26 = (long *)((long)plVar13 - uVar24 * (long)plVar20);
            }
          }
        }
        lVar4 = *plStack_118;
        plVar13 = *(long **)(lVar4 + (long)unaff_x26 * 8);
        if (plVar13 == (long *)0x0) {
          *unaff_x24 = *plStack_138;
          *plStack_138 = (long)unaff_x24;
          *(long **)(lVar4 + (long)unaff_x26 * 8) = plStack_138;
          if (*unaff_x24 != 0) {
            plVar13 = *(long **)(*unaff_x24 + 8);
            if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
              plVar13 = (long *)((ulong)plVar13 & (long)plVar20 - 1U);
            }
            else if (plVar20 <= plVar13) {
              uVar24 = 0;
              if (plVar20 != (long *)0x0) {
                uVar24 = (ulong)plVar13 / (ulong)plVar20;
              }
              plVar13 = (long *)((long)plVar13 - uVar24 * (long)plVar20);
            }
            *(long **)(*plStack_118 + (long)plVar13 * 8) = unaff_x24;
          }
        }
        else {
          *unaff_x24 = *plVar13;
          *plVar13 = (long)unaff_x24;
        }
        param_1[0x67] = param_1[0x67] + 1;
LAB_1094f4888:
        plVar13 = unaff_x24 + 5;
        uVar10 = unaff_x24[10];
        uVar24 = param_1[0x61] - param_1[0x60] >> 2;
        if (uVar10 != uVar24) {
LAB_1094f48a8:
          unaff_x26 = (long *)(uVar24 - uVar10);
          if (uVar24 >= uVar10 && unaff_x26 != (long *)0x0) {
            lVar5 = unaff_x24[6];
            lVar27 = unaff_x24[7];
            unaff_x23 = lVar27 - lVar5 >> 3;
            lVar4 = 0;
            if (lVar27 - lVar5 != 0) {
              lVar4 = unaff_x23 * 0x155 + -1;
            }
            uVar24 = unaff_x24[9];
            uVar10 = uVar24 + uVar10;
            uVar22 = (long)unaff_x26 - (long)(lVar4 - uVar10);
            if ((long *)(lVar4 - uVar10) <= unaff_x26 && uVar22 != 0) {
              if (lVar27 == lVar5) {
                uVar22 = uVar22 + 1;
              }
              uVar10 = uVar22 / 0x155;
              if (uVar22 % 0x155 != 0) {
                uVar10 = uVar10 + 1;
              }
              uVar22 = uVar10;
              if (uVar24 / 0x155 <= uVar10) {
                uVar22 = uVar24 / 0x155;
              }
              if (uVar24 / 0x155 < uVar10) {
                uVar26 = uVar10 - uVar22;
                if ((ulong)((unaff_x24[8] - unaff_x24[5] >> 3) - unaff_x23) < uVar26) {
                  uVar10 = unaff_x24[8] - unaff_x24[5] >> 2;
                  if (uVar10 <= uVar26 + unaff_x23) {
                    uVar10 = uVar26 + unaff_x23;
                  }
                  uStack_f0 = SUB81(plVar13,0);
                  uStack_ef = (undefined7)((ulong)plVar13 >> 8);
                  if (uVar10 == 0) {
                    plVar20 = (long *)0x0;
                  }
                  else {
                    plVar20 = plVar13;
                    FUN_1094ed9b0();
                  }
                  lStack_130 = uVar22 * -0x155;
                  uStack_110 = SUB81(plVar20,0);
                  uStack_10f = (undefined7)((ulong)plVar20 >> 8);
                  uStack_108 = SUB81(plVar20 + (unaff_x23 - uVar22),0);
                  uStack_107 = (undefined7)((ulong)(plVar20 + (unaff_x23 - uVar22)) >> 8);
                  uStack_f8 = SUB81(plVar20 + uVar10,0);
                  uStack_f7 = (undefined7)((ulong)(plVar20 + uVar10) >> 8);
                  uStack_100 = uStack_108;
                  uStack_ff = uStack_107;
                  do {
                    uVar6 = 0xffc;
                    __Znwm();
                    uStack_c8 = uVar6;
                    FUN_1094ed7a4(&uStack_110,&uStack_c8);
                    uVar26 = uVar26 - 1;
                  } while (uVar26 != 0);
                  if (0x154 < uVar24) {
                    puVar25 = (undefined8 *)unaff_x24[6];
                    puVar8 = (undefined8 *)CONCAT71(uStack_ff,uStack_100);
                    do {
                      if (puVar8 == (undefined8 *)CONCAT71(uStack_f7,uStack_f8)) {
                        uVar24 = CONCAT71(uStack_10f,uStack_110);
                        uVar10 = CONCAT71(uStack_107,uStack_108);
                        if (uVar10 < uVar24 || uVar10 - uVar24 == 0) {
                          uVar10 = (long)((long)puVar8 - uVar24) >> 2;
                          if ((long)puVar8 - uVar24 == 0) {
                            uVar10 = 1;
                          }
                          lVar5 = CONCAT71(uStack_ef,uStack_f0);
                          uVar24 = uVar10;
                          FUN_1094ed9b0();
                          puVar1 = (undefined8 *)(lVar5 + (uVar10 >> 2) * 8);
                          lVar4 = CONCAT71(uStack_ff,uStack_100) -
                                  (long)CONCAT71(uStack_107,uStack_108);
                          puVar8 = puVar1;
                          if (lVar4 != 0) {
                            puVar8 = (undefined8 *)((long)puVar1 + lVar4);
                            puVar11 = (undefined8 *)CONCAT71(uStack_107,uStack_108);
                            puVar17 = puVar1;
                            do {
                              *puVar17 = *puVar11;
                              lVar4 = lVar4 + -8;
                              puVar11 = puVar11 + 1;
                              puVar17 = puVar17 + 1;
                            } while (lVar4 != 0);
                          }
                          lVar27 = CONCAT71(uStack_10f,uStack_110);
                          lVar4 = lVar5 + uVar24 * 8;
                          uStack_110 = (undefined1)lVar5;
                          uStack_10f = (undefined7)((ulong)lVar5 >> 8);
                          uStack_108 = SUB81(puVar1,0);
                          uStack_107 = (undefined7)((ulong)puVar1 >> 8);
                          uStack_100 = SUB81(puVar8,0);
                          uStack_ff = (undefined7)((ulong)puVar8 >> 8);
                          uStack_f8 = (undefined1)lVar4;
                          uStack_f7 = (undefined7)((ulong)lVar4 >> 8);
                          if (lVar27 != 0) {
                            __ZdlPv(lVar27);
                            puVar8 = (undefined8 *)CONCAT71(uStack_ff,uStack_100);
                          }
                        }
                        else {
                          lVar4 = ((long)(uVar10 - uVar24) >> 3) + 1;
                          unaff_x23 = lVar4 - (lVar4 >> 0x3f);
                          lVar27 = uVar10 + (lVar4 / 2) * -8;
                          lVar5 = (long)puVar8 - uVar10;
                          if (lVar5 != 0) {
                            _memmove(lVar27,uVar10,lVar5);
                            uVar10 = CONCAT71(uStack_107,uStack_108);
                          }
                          puVar8 = (undefined8 *)(lVar27 + lVar5);
                          lVar4 = uVar10 + (lVar4 / 2) * -8;
                          uStack_108 = (undefined1)lVar4;
                          uStack_107 = (undefined7)((ulong)lVar4 >> 8);
                          uStack_100 = SUB81(puVar8,0);
                          uStack_ff = (undefined7)((ulong)puVar8 >> 8);
                        }
                      }
                      *puVar8 = *puVar25;
                      puVar8 = (undefined8 *)(CONCAT71(uStack_ff,uStack_100) + 8);
                      uStack_100 = SUB81(puVar8,0);
                      uStack_ff = (undefined7)((ulong)puVar8 >> 8);
                      puVar25 = (undefined8 *)(unaff_x24[6] + 8);
                      unaff_x24[6] = (long)puVar25;
                      uVar22 = uVar22 - 1;
                    } while (uVar22 != 0);
                  }
                  lVar5 = unaff_x24[7];
                  lVar4 = -7 - lVar5;
                  while (lVar27 = unaff_x24[6], lVar5 != lVar27) {
                    lVar5 = lVar5 + -8;
                    lVar4 = lVar4 + 8;
                    FUN_1094ed8a8(&uStack_110,lVar5);
                  }
                  lVar7 = unaff_x24[5];
                  unaff_x24[6] = CONCAT71(uStack_107,uStack_108);
                  unaff_x24[5] = CONCAT71(uStack_10f,uStack_110);
                  uStack_110 = (undefined1)lVar7;
                  uStack_10f = (undefined7)((ulong)lVar7 >> 8);
                  uStack_108 = (undefined1)lVar27;
                  uStack_107 = (undefined7)((ulong)lVar27 >> 8);
                  lVar29 = unaff_x24[8];
                  lVar27 = unaff_x24[7];
                  unaff_x24[8] = CONCAT71(uStack_f7,uStack_f8);
                  unaff_x24[7] = CONCAT71(uStack_ff,uStack_100);
                  uStack_f8 = (undefined1)lVar29;
                  uStack_f7 = (undefined7)((ulong)lVar29 >> 8);
                  uStack_100 = (undefined1)lVar27;
                  uStack_ff = (undefined7)((ulong)lVar27 >> 8);
                  unaff_x24[9] = unaff_x24[9] + lStack_130;
                  if (lVar5 != lVar27) {
                    lVar27 = lVar27 + (-(lVar27 + lVar4) & 0xfffffffffffffff8U);
                    uStack_100 = (undefined1)lVar27;
                    uStack_ff = (undefined7)((ulong)lVar27 >> 8);
                  }
                  if (lVar7 != 0) {
                    __ZdlPv();
                  }
                  goto LAB_1094f4e2c;
                }
                uVar21 = uVar22;
                if (uVar26 != 0) {
                  do {
                    uVar21 = uVar10;
                    if (unaff_x24[8] == unaff_x24[7]) goto LAB_1094f4b2c;
                    uVar6 = 0xffc;
                    __Znwm();
                    uStack_110 = (undefined1)uVar6;
                    uStack_10f = (undefined7)((ulong)uVar6 >> 8);
                    func_0x0001094ed598(plVar13,&uStack_110);
                    uVar26 = uVar26 - 1;
                    uVar10 = uVar21 - 1;
                  } while (uVar26 != 0);
                  uVar24 = unaff_x24[9];
                  uVar21 = uVar22;
                }
                goto LAB_1094f4b70;
              }
              unaff_x24[9] = uVar24 + uVar22 * -0x155;
              for (; uVar22 != 0; uVar22 = uVar22 - 1) {
                uVar6 = *(undefined8 *)unaff_x24[6];
                uStack_110 = (undefined1)uVar6;
                uStack_10f = (undefined7)((ulong)uVar6 >> 8);
                unaff_x24[6] = (long)((undefined8 *)unaff_x24[6] + 1);
                func_0x0001094ed494(plVar13,&uStack_110);
              }
              goto LAB_1094f4e2c;
            }
            goto LAB_1094f4e38;
          }
          if (uVar24 < uVar10) {
            plVar20 = (long *)(unaff_x24[6] + ((ulong)unaff_x24[9] / 0x155) * 8);
            if (unaff_x24[7] == unaff_x24[6]) {
              lVar4 = 0;
            }
            else {
              lVar4 = *plVar20 + ((ulong)unaff_x24[9] % 0x155) * 0xc;
            }
            uStack_110 = SUB81(plVar20,0);
            uStack_10f = (undefined7)((ulong)plVar20 >> 8);
            uStack_108 = (undefined1)lVar4;
            uStack_107 = (undefined7)((ulong)lVar4 >> 8);
            FUN_1094ed9e4(&uStack_110);
            uVar24 = unaff_x24[9];
            uVar10 = unaff_x24[10];
            lVar4 = unaff_x24[6];
            plVar20 = (long *)(lVar4 + ((uVar24 + uVar10) / 0x155) * 8);
            if (unaff_x24[7] == lVar4) {
              lVar5 = 0;
            }
            else {
              lVar5 = *plVar20 + ((uVar24 + uVar10) % 0x155) * 0xc;
            }
            lVar27 = CONCAT71(uStack_107,uStack_108);
            if (lVar5 != lVar27) {
              plVar9 = (long *)CONCAT71(uStack_10f,uStack_110);
              lVar7 = lVar27 - *plVar9 >> 2;
              lVar5 = ((long)plVar20 - (long)plVar9 >> 3) * 0x155 +
                      (lVar5 - *plVar20 >> 2) * -0x5555555555555555 + lVar7 * 0x5555555555555555;
              if (0 < lVar5) {
                plVar20 = (long *)(lVar4 + (uVar24 / 0x155) * 8);
                if (unaff_x24[7] == lVar4) {
                  lVar4 = 0;
                }
                else {
                  lVar4 = *plVar20 + (uVar24 % 0x155) * 0xc;
                }
                if (lVar27 == lVar4) {
                  lVar27 = 0;
                }
                else {
                  lVar27 = ((long)plVar9 - (long)plVar20 >> 3) * 0x155 + lVar7 * -0x5555555555555555
                           + (lVar4 - *plVar20 >> 2) * 0x5555555555555555;
                }
                uStack_110 = SUB81(plVar20,0);
                uStack_10f = (undefined7)((ulong)plVar20 >> 8);
                uStack_108 = (undefined1)lVar4;
                uStack_107 = (undefined7)((ulong)lVar4 >> 8);
                FUN_1094ed9e4(&uStack_110,lVar27);
                lVar27 = unaff_x24[7];
                lVar4 = 0;
                if (lVar27 - unaff_x24[6] != 0) {
                  lVar4 = (lVar27 - unaff_x24[6] >> 3) * 0x155 + -1;
                }
                uVar10 = unaff_x24[10] - lVar5;
                unaff_x24[10] = uVar10;
                uVar24 = (lVar4 - unaff_x24[9]) - uVar10;
                while (0x2a9 < uVar24) {
                  __ZdlPv(*(undefined8 *)(lVar27 + -8));
                  lVar27 = unaff_x24[7] + -8;
                  unaff_x24[7] = lVar27;
                  lVar4 = 0;
                  if (lVar27 - unaff_x24[6] != 0) {
                    lVar4 = (lVar27 - unaff_x24[6] >> 3) * 0x155 + -1;
                  }
                  uVar10 = unaff_x24[10];
                  uVar24 = lVar4 - (uVar10 + unaff_x24[9]);
                }
              }
            }
          }
          goto LAB_1094f4f18;
        }
LAB_1094f4f30:
        puVar23 = (ulong *)(unaff_x24 + 9);
        *puVar23 = *puVar23 + 1;
        unaff_x24[10] = uVar10 - 1;
        FUN_1094edaa0(plVar13,1);
        func_0x0001094ec914(plVar13,&lStack_c0);
        uVar24 = *puVar23;
        lVar4 = unaff_x24[6];
        plVar13 = (long *)(lVar4 + (uVar24 / 0x155) * 8);
        if (unaff_x24[7] == lVar4) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar8 = (undefined8 *)(*plVar13 + (uVar24 % 0x155) * 0xc);
        }
        lVar5 = 0;
        fVar30 = 0.0;
        for (pfVar18 = (float *)param_1[0x60]; pfVar18 != (float *)param_1[0x61];
            pfVar18 = pfVar18 + 1) {
          if (unaff_x24[7] == lVar4) {
            puVar25 = (undefined8 *)0x0;
          }
          else {
            puVar25 = (undefined8 *)
                      (*(long *)(lVar4 + ((unaff_x24[10] + uVar24) / 0x155) * 8) +
                      ((unaff_x24[10] + uVar24) % 0x155) * 0xc);
          }
          if (puVar8 == puVar25) break;
          puVar25 = (undefined8 *)((long)puVar8 + 0xc);
          if ((long)puVar25 - *plVar13 == 0xffc) {
            plVar13 = plVar13 + 1;
            puVar25 = (undefined8 *)*plVar13;
          }
          fVar28 = *pfVar18;
          lVar5 = CONCAT44((float)((ulong)lVar5 >> 0x20) + (float)((ulong)*puVar8 >> 0x20) * fVar28,
                           (float)lVar5 + (float)*puVar8 * fVar28);
          fVar30 = fVar30 + fVar28 * *(float *)(puVar8 + 1);
          puVar8 = puVar25;
        }
        uStack_110 = SUB81(plStack_120,0);
        uStack_10f = (undefined7)((ulong)plStack_120 >> 8);
        plVar9 = param_1 + 0x23;
        param_3 = &UNK_10dd5b8f9;
        plVar20 = plStack_120;
        FUN_1094edafc();
        plVar9[5] = lVar5;
        *(float *)(plVar9 + 6) = fVar30;
        plVar19 = (long *)*plStack_128;
        plVar13 = plStack_118;
      } while (plVar19 != (long *)0x0);
    }
    unaff_x20 = 0;
    param_2 = plVar20;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return plVar9;
    }
  }
  ___stack_chk_fail();
LAB_1094f5118:
  plVar20 = (long *)&UNK_10f5709b5;
  func_0x000105688514();
  func_0x0001094f5488(&uStack_110);
  plVar9 = plVar20;
  __Unwind_Resume();
  puStack_150 = &stack0xfffffffffffffff0;
  if ((int)plVar9[0x5c] != 7 && (int)plVar9[0x5c] != 1) {
    pcStack_148 = FUN_1094f51d0;
    plVar13 = (long *)&UNK_10f5709f6;
    func_0x000105688514();
    pcStack_158 = FUN_1094f51f8;
    uStack_170 = unaff_x20;
    plStack_168 = plVar20;
    puStack_160 = (undefined1 *)&puStack_150;
    func_0x0001094f5378(plVar13 + 100);
    func_0x0001094f5428(plVar13 + 0x5b);
    if ((char)plVar13[0x5a] == '\x01') {
      FUN_1094e0cf8(plVar13 + 0x11);
    }
    *plVar13 = (long)&PTR_FUN_110af9078;
    if ((char)plVar13[0xf] == '\x01') {
      func_0x0001094dda24(plVar13 + 10);
    }
    return plVar13;
  }
  pcStack_148 = FUN_1094f51d0;
  if ((char)plVar9[0xf] == '\x01') {
    plStack_180 = unaff_x24;
    lStack_178 = unaff_x23;
    uStack_170 = unaff_x22;
    plStack_168 = plVar13;
    puStack_160 = (undefined1 *)unaff_x20;
    pcStack_158 = (code *)plVar20;
    if ((param_3[0x58] & 1) == 0) {
      plVar13 = param_2 + 0x12;
      if (plVar13 != plVar9 + 10) {
        *(int *)(param_2 + 0x16) = (int)plVar9[0xe];
        plVar9 = (long *)plVar9[0xc];
        lVar4 = param_2[0x13];
        plVar20 = plVar13;
        if (lVar4 != 0) {
          lVar5 = 0;
          do {
            *(undefined8 *)(*plVar13 + lVar5 * 8) = 0;
            lVar5 = lVar5 + 1;
          } while (lVar4 != lVar5);
          plVar14 = (long *)param_2[0x14];
          param_2[0x14] = 0;
          param_2[0x15] = 0;
          plVar19 = plVar14;
          if (plVar14 != (long *)0x0 && plVar9 != (long *)0x0) {
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (plVar19 + 2,plVar9 + 2);
              plVar19[5] = plVar9[5];
              *(int *)(plVar19 + 6) = (int)plVar9[6];
              plVar14 = (long *)*plVar19;
              FUN_1094ddefc(plVar13,plVar19);
              plVar9 = (long *)*plVar9;
              plVar19 = plVar14;
            } while (plVar14 != (long *)0x0 && plVar9 != (long *)0x0);
          }
          func_0x0001094dda5c(plVar13,plVar14);
        }
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          plVar20 = plVar13;
          FUN_1094de3d0(plVar13,plVar9 + 2);
        }
        return plVar20;
      }
    }
    else {
      for (plVar13 = (long *)plVar9[0xc]; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        FUN_1094cf978(&lStack_198,param_3 + 0x18,plVar13 + 5);
        plVar9 = param_2 + 0x12;
        plStack_188 = plVar13 + 2;
        FUN_1094edafc(plVar9,plVar13 + 2,&UNK_10dd5b8f9,&plStack_188,&uStack_189);
        plVar9[5] = lStack_198;
        *(undefined4 *)(plVar9 + 6) = uStack_190;
      }
    }
  }
  return plVar9;
LAB_1094f4b2c:
  do {
    uVar6 = 0xffc;
    __Znwm();
    uStack_110 = (undefined1)uVar6;
    uStack_10f = (undefined7)((ulong)uVar6 >> 8);
    FUN_1094ed69c(plVar13,&uStack_110);
    lVar4 = 0x154;
    if (unaff_x24[7] - unaff_x24[6] != 8) {
      lVar4 = 0x155;
    }
    uVar24 = lVar4 + unaff_x24[9];
    unaff_x24[9] = uVar24;
    uVar26 = uVar26 - 1;
  } while (uVar26 != 0);
LAB_1094f4b70:
  unaff_x24[9] = uVar24 + uVar21 * -0x155;
  for (; uVar21 != 0; uVar21 = uVar21 - 1) {
    uVar6 = *(undefined8 *)unaff_x24[6];
    uStack_110 = (undefined1)uVar6;
    uStack_10f = (undefined7)((ulong)uVar6 >> 8);
    unaff_x24[6] = (long)((undefined8 *)unaff_x24[6] + 1);
    func_0x0001094ed494(plVar13,&uStack_110);
  }
LAB_1094f4e2c:
  lVar5 = unaff_x24[6];
  lVar27 = unaff_x24[7];
  uVar10 = unaff_x24[9] + unaff_x24[10];
LAB_1094f4e38:
  plVar20 = (long *)(lVar5 + (uVar10 / 0x155) * 8);
  if (lVar27 == lVar5) {
    plVar9 = (long *)0x0;
  }
  else {
    plVar9 = (long *)(*plVar20 + (uVar10 % 0x155) * 0xc);
  }
  uStack_110 = SUB81(plVar20,0);
  uStack_10f = (undefined7)((ulong)plVar20 >> 8);
  uStack_108 = SUB81(plVar9,0);
  uStack_107 = (undefined7)((ulong)plVar9 >> 8);
  FUN_1094ed9e4(&uStack_110,unaff_x26);
  plVar19 = (long *)CONCAT71(uStack_107,uStack_108);
  uVar10 = unaff_x24[10];
  if (plVar9 != plVar19) {
    do {
      plVar14 = plVar19;
      if (plVar20 != (long *)CONCAT71(uStack_10f,uStack_110)) {
        plVar14 = (long *)(*plVar20 + 0xffc);
      }
      plVar16 = plVar9;
      if (plVar9 != plVar14) {
        plVar15 = plVar9;
        do {
          *plVar15 = lStack_c0;
          *(undefined4 *)(plVar15 + 1) = (undefined4)uStack_b8;
          plVar15 = (long *)((long)plVar15 + 0xc);
          plVar16 = plVar14;
        } while (plVar15 != plVar14);
      }
      uVar10 = uVar10 + ((long)plVar16 - (long)plVar9 >> 2) * -0x5555555555555555;
      if (plVar20 == (long *)CONCAT71(uStack_10f,uStack_110)) break;
      plVar20 = plVar20 + 1;
      plVar9 = (long *)*plVar20;
    } while (plVar9 != plVar19);
    unaff_x24[10] = uVar10;
  }
LAB_1094f4f18:
  uVar24 = param_1[0x61] - param_1[0x60] >> 2;
  if (uVar10 == uVar24) goto LAB_1094f4f30;
  goto LAB_1094f48a8;
}



/* Entry: 1094f51d0; end: 1094f51f7;  */

long * FUN_1094f51d0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lStack_58;
  undefined4 uStack_50;
  undefined1 uStack_49;
  long *plStack_48;
  
  if ((int)param_1[0x5c] != 7 && (int)param_1[0x5c] != 1) {
    plVar7 = (long *)&UNK_10f5709f6;
    func_0x000105688514();
    FUN_1094f5378(plVar7 + 100);
    func_0x0001094f5428(plVar7 + 0x5b);
    if ((char)plVar7[0x5a] == '\x01') {
      FUN_1094e0cf8(plVar7 + 0x11);
    }
    *plVar7 = (long)&PTR_FUN_110af9078;
    if ((char)plVar7[0xf] == '\x01') {
      func_0x0001094dda24(plVar7 + 10);
    }
    return plVar7;
  }
  if ((char)param_1[0xf] == '\x01') {
    if ((*(byte *)(param_3 + 0x58) & 1) == 0) {
      plVar7 = (long *)(param_2 + 0x90);
      if (plVar7 != param_1 + 10) {
        *(int *)(param_2 + 0xb0) = (int)param_1[0xe];
        plVar2 = (long *)param_1[0xc];
        lVar3 = *(long *)(param_2 + 0x98);
        plVar1 = plVar7;
        if (lVar3 != 0) {
          lVar4 = 0;
          do {
            *(undefined8 *)(*plVar7 + lVar4 * 8) = 0;
            lVar4 = lVar4 + 1;
          } while (lVar3 != lVar4);
          plVar5 = *(long **)(param_2 + 0xa0);
          *(undefined8 *)(param_2 + 0xa0) = 0;
          *(undefined8 *)(param_2 + 0xa8) = 0;
          plVar6 = plVar5;
          if (plVar5 != (long *)0x0 && plVar2 != (long *)0x0) {
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (plVar6 + 2,plVar2 + 2);
              plVar6[5] = plVar2[5];
              *(int *)(plVar6 + 6) = (int)plVar2[6];
              plVar5 = (long *)*plVar6;
              FUN_1094ddefc(plVar7,plVar6);
              plVar2 = (long *)*plVar2;
              plVar6 = plVar5;
            } while (plVar5 != (long *)0x0 && plVar2 != (long *)0x0);
          }
          func_0x0001094dda5c(plVar7,plVar5);
        }
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          plVar1 = plVar7;
          FUN_1094de3d0(plVar7,plVar2 + 2);
        }
        return plVar1;
      }
    }
    else {
      for (plVar7 = (long *)param_1[0xc]; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        FUN_1094cf978(&lStack_58,param_3 + 0x18,plVar7 + 5);
        param_1 = (long *)(param_2 + 0x90);
        plStack_48 = plVar7 + 2;
        FUN_1094edafc(param_1,plVar7 + 2,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
        param_1[5] = lStack_58;
        *(undefined4 *)(param_1 + 6) = uStack_50;
      }
    }
  }
  return param_1;
}



/* Entry: 1094f51f8; end: 1094f52bf;  */

undefined8 * FUN_1094f51f8(undefined8 *param_1)

{
  FUN_1094f5378(param_1 + 100);
  func_0x0001094f5428(param_1 + 0x5b);
  if (*(char *)(param_1 + 0x5a) == '\x01') {
    FUN_1094e0cf8(param_1 + 0x11);
  }
  *param_1 = &PTR_FUN_110af9078;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_1094dda24(param_1 + 10);
  }
  return param_1;
}



/* Entry: 1094f52c0; end: 1094f52d3;  */

long FUN_1094f52c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x2d8;
  if (*(char *)(param_1 + 0x318) == '\0') {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1094f52d4; end: 1094f5377;  */

void FUN_1094f52d4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_270 [584];
  char cStack_28;
  
  auStack_270[0] = 0;
  cStack_28 = '\0';
  FUN_1094e0e58(param_1 + 0x88,auStack_270);
  if (cStack_28 == '\x01') {
    FUN_1094e0cf8(auStack_270);
  }
  if (*(long *)(param_1 + 0x338) != 0) {
    func_0x0001094f53b0(*(undefined8 *)(param_1 + 0x330));
    *(undefined8 *)(param_1 + 0x330) = 0;
    lVar1 = *(long *)(param_1 + 0x328);
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 800) + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    *(undefined8 *)(param_1 + 0x338) = 0;
  }
  return;
}



/* Entry: 1094f5378; end: 1094f54cf;  */

long * FUN_1094f5378(long *param_1)

{
  long lVar1;
  
  func_0x0001094f53b0(param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094f54d0; end: 1094f561b;  */

void FUN_1094f54d0(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 uStack_60;
  undefined7 uStack_5f;
  char cStack_49;
  char cStack_38;
  
  if (*(char *)((long)param_1 + 0x84) == '\x01') {
    if (*(char *)(param_3 + 0x58) == '\x01') {
      if ((int)param_1[0x10] != 0) goto LAB_1094f55c4;
      FUN_10937e740(&uStack_60,&UNK_10f570ac7);
      FUN_109388c6c(2,&UNK_10f570a35,&DAT_10f3725f0,0xc,&uStack_60);
    }
    else {
      if ((int)param_1[0x10] != 1) goto LAB_1094f55c4;
      FUN_10937e740(&uStack_60,&UNK_10f570b40);
      FUN_109388c6c(2,&UNK_10f570a35,&DAT_10f3725f0,0x11,&uStack_60);
    }
    if (cStack_49 < '\0') {
      __ZdlPv(CONCAT71(uStack_5f,uStack_60));
    }
    uStack_60 = 0;
    cStack_38 = '\0';
    FUN_1094ed29c(param_1 + 10,&uStack_60);
    if (cStack_38 == '\x01') {
      FUN_1094dda24(&uStack_60);
    }
    (**(code **)(*param_1 + 0x38))(param_1);
  }
LAB_1094f55c4:
  *(uint *)(param_1 + 0x10) = (uint)*(byte *)(param_3 + 0x58);
  *(undefined1 *)((long)param_1 + 0x84) = 1;
  FUN_1094e95cc(param_1,param_2,param_3);
  return;
}



/* Entry: 1094f561c; end: 1094f56ff;  */

void FUN_1094f561c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_49;
  long *plStack_48;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if ((*(byte *)(param_3 + 0x58) & 1) == 0) {
      plVar6 = (long *)(param_2 + 0x90);
      if (plVar6 != (long *)(param_1 + 0x50)) {
        *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_1 + 0x70);
        plVar1 = *(long **)(param_1 + 0x60);
        lVar2 = *(long *)(param_2 + 0x98);
        if (lVar2 != 0) {
          lVar3 = 0;
          do {
            *(undefined8 *)(*plVar6 + lVar3 * 8) = 0;
            lVar3 = lVar3 + 1;
          } while (lVar2 != lVar3);
          plVar4 = *(long **)(param_2 + 0xa0);
          *(undefined8 *)(param_2 + 0xa0) = 0;
          *(undefined8 *)(param_2 + 0xa8) = 0;
          plVar5 = plVar4;
          if (plVar4 != (long *)0x0 && plVar1 != (long *)0x0) {
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (plVar5 + 2,plVar1 + 2);
              plVar5[5] = plVar1[5];
              *(int *)(plVar5 + 6) = (int)plVar1[6];
              plVar4 = (long *)*plVar5;
              FUN_1094ddefc(plVar6,plVar5);
              plVar1 = (long *)*plVar1;
              plVar5 = plVar4;
            } while (plVar4 != (long *)0x0 && plVar1 != (long *)0x0);
          }
          func_0x0001094dda5c(plVar6,plVar4);
        }
        for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
          FUN_1094de3d0(plVar6,plVar1 + 2);
        }
        return;
      }
    }
    else {
      for (plVar6 = *(long **)(param_1 + 0x60); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        FUN_1094cf978(&uStack_58,param_3 + 0x18,plVar6 + 5);
        lVar2 = param_2 + 0x90;
        plStack_48 = plVar6 + 2;
        FUN_1094edafc(lVar2,plVar6 + 2,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
        *(undefined8 *)(lVar2 + 0x28) = uStack_58;
        *(undefined4 *)(lVar2 + 0x30) = uStack_50;
      }
    }
  }
  return;
}



/* Entry: 1094f5700; end: 1094f5707;  */

void FUN_1094f5700(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094f5704);
  (*pcVar1)();
}



/* Entry: 1094f5708; end: 1094f59bb;  */

void FUN_1094f5708(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar19 = param_2[7];
  fVar24 = param_2[8];
  fVar9 = param_2[0xb];
  fVar25 = param_2[0xc];
  fVar28 = param_2[0xe];
  fVar10 = param_2[0xf];
  fVar21 = -(fVar25 * fVar9) + fVar10 * fVar24;
  fVar7 = param_2[4];
  fVar6 = param_2[6];
  fVar22 = -(fVar25 * fVar19) + fVar10 * fVar7;
  fVar23 = -(fVar24 * fVar19) + fVar9 * fVar7;
  fVar4 = *param_2;
  fVar3 = param_2[1];
  fVar2 = param_2[2];
  fVar1 = param_2[3];
  fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0xd) >> 0x20);
  fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 9) >> 0x20);
  fVar17 = -fVar8;
  fVar16 = fVar19 * fVar17 + fVar10 * fVar6;
  fVar5 = (float)*(undefined8 *)(param_2 + 0xd);
  fVar14 = (float)*(undefined8 *)(param_2 + 9);
  fVar26 = -fVar5;
  fVar20 = (float)*(undefined8 *)(param_2 + 5);
  fVar15 = fVar19 * fVar26 + fVar10 * fVar20;
  fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 5) >> 0x20);
  fVar17 = fVar9 * fVar17 + fVar10 * fVar12;
  fVar11 = fVar19 * -fVar12 + fVar9 * fVar13;
  fVar10 = fVar9 * fVar26 + fVar10 * fVar14;
  fVar9 = fVar19 * -fVar14 + fVar9 * fVar20;
  fVar27 = fVar6 * fVar26 + fVar28 * fVar20;
  fVar26 = fVar12 * fVar26 + fVar8 * fVar14;
  fVar18 = fVar13 * -fVar14 + fVar12 * fVar20;
  fVar13 = -(fVar25 * param_2[10]) + fVar28 * fVar24;
  fVar12 = -(fVar25 * fVar6) + fVar28 * fVar7;
  fVar30 = -(fVar24 * fVar6) + param_2[10] * fVar7;
  fVar28 = -fVar25 * fVar14 + fVar5 * fVar24;
  fVar29 = -fVar25 * fVar20 + fVar5 * fVar7;
  fVar14 = -fVar24 * fVar20 + fVar14 * fVar7;
  fVar24 = fVar19 * fVar26 + (fVar17 * fVar20 - fVar6 * fVar10);
  fVar25 = fVar19 * fVar13 + (fVar7 * fVar17 - fVar6 * fVar21);
  fVar19 = fVar19 * fVar28 + (fVar7 * fVar10 - fVar21 * fVar20);
  fVar8 = fVar6 * fVar28 + (fVar7 * fVar26 - fVar13 * fVar20);
  fVar5 = 1.0 / ((fVar4 * fVar24 - fVar3 * fVar25) + (fVar2 * fVar19 - fVar8 * fVar1));
  param_1[1] = CONCAT44(-((fVar11 * fVar3 - fVar9 * fVar2) + fVar18 * fVar1) * fVar5,
                        ((fVar16 * fVar3 - fVar15 * fVar2) + fVar27 * fVar1) * fVar5);
  *param_1 = CONCAT44(-((fVar17 * fVar3 - fVar10 * fVar2) + fVar26 * fVar1) * fVar5,fVar24 * fVar5);
  *(float *)(param_1 + 2) = -(fVar25 * fVar5);
  *(ulong *)((long)param_1 + 0x1c) =
       CONCAT44(fVar19 * fVar5,((fVar4 * fVar11 - fVar23 * fVar2) + fVar30 * fVar1) * fVar5);
  *(ulong *)((long)param_1 + 0x14) =
       CONCAT44(-((fVar16 * fVar4 - fVar22 * fVar2) + fVar12 * fVar1) * fVar5,
                ((fVar4 * fVar17 - fVar21 * fVar2) + fVar13 * fVar1) * fVar5);
  *(float *)((long)param_1 + 0x24) = -(((fVar4 * fVar10 - fVar21 * fVar3) + fVar28 * fVar1) * fVar5)
  ;
  *(float *)(param_1 + 5) = ((fVar15 * fVar4 - fVar22 * fVar3) + fVar29 * fVar1) * fVar5;
  *(float *)((long)param_1 + 0x2c) = -(((fVar4 * fVar9 - fVar23 * fVar3) + fVar14 * fVar1) * fVar5);
  *(float *)(param_1 + 6) = -(fVar8 * fVar5);
  *(float *)((long)param_1 + 0x34) = ((fVar4 * fVar26 - fVar13 * fVar3) + fVar28 * fVar2) * fVar5;
  *(float *)(param_1 + 7) = -(((fVar27 * fVar4 - fVar12 * fVar3) + fVar29 * fVar2) * fVar5);
  *(float *)((long)param_1 + 0x3c) = ((fVar4 * fVar18 - fVar30 * fVar3) + fVar14 * fVar2) * fVar5;
  return;
}



/* Entry: 1094f59bc; end: 1094f5b13;  */

long * FUN_1094f59bc(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113829eb0 & 1) == 0) {
    iVar1 = 0x13829eb0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puStack_58 = &DAT_10f570bc6;
      uStack_60 = 2;
      uStack_48 = 3;
      uStack_50 = 5;
      uStack_38 = 7;
      puStack_40 = &DAT_10f570bcc;
      uStack_30 = 4;
      uStack_98 = 5;
      puStack_a0 = (undefined8 *)&DAT_10f570bb6;
      puStack_88 = &DAT_10f570bbc;
      uStack_90 = 0;
      uStack_78 = 1;
      uStack_80 = 4;
      uStack_68 = 4;
      puStack_70 = &DAT_10f570bc1;
      FUN_1094f6c10(0x113829e88,&puStack_a0,5);
      ___cxa_atexit(FUN_1094f5b14,0x113829e88,0x100000000);
      ___cxa_guard_release(0x113829eb0);
    }
  }
  uStack_98 = param_1[1];
  puStack_a0 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uStack_98 = (ulong)*(byte *)((long)param_1 + 0x17);
    puStack_a0 = param_1;
  }
  plVar2 = (long *)0x113829e88;
  FUN_1094f70c8(0x113829e88,&puStack_a0);
  if (plVar2 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)*(byte *)(plVar2 + 4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (long *)(ulong)(uVar5 | (uint)(plVar2 != (long *)0x0) << 8);
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x113829eb0);
  __Unwind_Resume();
  plVar3 = (long *)plVar2[2];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar4 = *plVar2;
  *plVar2 = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 1094f5b14; end: 1094f5b17;  */

long * FUN_1094f5b14(long *param_1)

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



/* Entry: 1094f5b18; end: 1094f5b6b;  */

void FUN_1094f5b18(long param_1,int param_2)

{
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uStack_11 = (undefined1)param_1;
  uStack_12 = (undefined1)param_2;
  if ((int)param_1 != param_2) {
    FUN_1094f5b6c();
    FUN_1094f71c4();
    if (param_1 != 0) {
      func_0x0001094f7268(param_1 + 0x18,&uStack_12);
    }
  }
  return;
}



/* Entry: 1094f5b6c; end: 1094f5deb;  */

/* WARNING: Removing unreachable block (ram,0x0001094f5d94) */
/* WARNING: Removing unreachable block (ram,0x0001094f5d98) */
/* WARNING: Removing unreachable block (ram,0x0001094f5db0) */

void FUN_1094f5b6c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 unaff_x19;
  undefined1 *unaff_x22;
  long lVar4;
  undefined1 auStack_1a8 [40];
  undefined1 auStack_180 [40];
  undefined1 auStack_158 [40];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [40];
  undefined1 uStack_a8;
  undefined1 auStack_a0 [40];
  undefined1 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113732f18 & 1) == 0) {
    iVar1 = 0x13732f18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      unaff_x19 = 0x28;
      __Znwm();
      uStack_e8 = 0x300000002;
      uStack_f0 = 0x100000001;
      uStack_e0 = 0xb00000003;
      FUN_1094f6270(auStack_158,&uStack_f0,3);
      auStack_d8[0] = 0;
      FUN_1094f66e8(auStack_d0,auStack_158);
      uStack_108 = 0x400000002;
      uStack_110 = 0;
      uStack_100 = 0x700000003;
      FUN_1094f6270(auStack_180,&uStack_110,3);
      uStack_a8 = 1;
      FUN_1094f66e8(auStack_a0,auStack_180);
      uStack_128 = 0x400000001;
      uStack_130 = 0x200000000;
      uStack_120 = 0x600000003;
      FUN_1094f6270(auStack_1a8,&uStack_130,3);
      uStack_78 = 2;
      FUN_1094f66e8(auStack_70,auStack_1a8);
      unaff_x22 = auStack_d8;
      FUN_1094f675c(unaff_x19,auStack_d8,3);
      lVar4 = 0x68;
      do {
        FUN_1094f66a0(unaff_x22 + lVar4);
        lVar4 = lVar4 + -0x30;
      } while (lVar4 != -0x28);
      FUN_1094f66a0(auStack_1a8);
      FUN_1094f66a0(auStack_180);
      FUN_1094f66a0(auStack_158);
      uRam0000000113732f10 = unaff_x19;
      ___cxa_guard_release(0x113732f18);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    uVar2 = uRam0000000113732f10;
    ___stack_chk_fail(uRam0000000113732f10);
    puVar3 = unaff_x22 + 0x68;
    lVar4 = -0x90;
    do {
      FUN_1094f66a0(puVar3);
      puVar3 = puVar3 + -0x30;
      lVar4 = lVar4 + 0x30;
    } while (lVar4 != 0);
    FUN_1094f66a0(auStack_1a8);
    FUN_1094f66a0(auStack_180);
    FUN_1094f66a0(auStack_158);
    __ZdlPv(unaff_x19);
    do {
      ___cxa_guard_abort(0x113732f18);
      __Unwind_Resume(uVar2);
    } while( true );
  }
  return;
}



/* Entry: 1094f5dec; end: 1094f5e7f;  */

void FUN_1094f5dec(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 *extraout_x8;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 auStack_128 [2];
  undefined4 *puStack_120;
  undefined8 uStack_118;
  undefined4 auStack_110 [2];
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long lStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_91;
  undefined4 auStack_58 [2];
  long lStack_50;
  undefined8 uStack_48;
  undefined4 auStack_40 [2];
  long lStack_38;
  undefined8 uStack_30;
  byte bStack_21;
  
  bStack_21 = (byte)param_2;
  pbVar13 = (byte *)(param_1 + 0x60);
  if (*pbVar13 == param_2) {
    return;
  }
  uStack_30 = 0;
  auStack_40[0] = 0x1010000;
  auStack_58[0] = 0x2010000;
  uStack_48 = 0;
  lStack_50 = param_1;
  lStack_38 = param_1;
  FUN_1094f5b6c();
  pbVar9 = pbVar13;
  FUN_1094f71c4();
  uVar8 = (uint)pbVar9;
  if (param_1 != 0) {
    param_1 = param_1 + 0x18;
    uVar8 = (uint)&bStack_21;
    func_0x0001094f7268();
    if (param_1 != 0) {
      FUN_109ac9fc8(auStack_40,auStack_58,*(undefined4 *)(param_1 + 0x14),0);
      *pbVar13 = bStack_21;
      return;
    }
  }
  puVar7 = (undefined8 *)&UNK_10f570bd4;
  FUN_109262df8();
  uStack_91 = (undefined1)uVar8;
  if (*(byte *)(puVar7 + 0xc) != uVar8) {
    uStack_f8 = 0x42ff0000;
    puStack_120 = &uStack_f8;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_f4 = 0;
    lStack_b8 = (long)&uStack_f4 + 4;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_cc = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    lStack_c0 = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_100 = 0;
    auStack_110[0] = 0x1010000;
    auStack_128[0] = 0x2010000;
    uStack_118 = 0;
    puVar10 = puVar7;
    puStack_108 = puVar7;
    puStack_b0 = &uStack_a8;
    FUN_1094f5b6c();
    FUN_1094f71c4();
    if (puVar10 != (undefined8 *)0x0) {
      puVar10 = puVar10 + 3;
      func_0x0001094f7268(puVar10,&uStack_91);
      if (puVar10 != (undefined8 *)0x0) {
        FUN_109ac9fc8(auStack_110,auStack_128,*(undefined4 *)((long)puVar10 + 0x14),0);
        FUN_1094d91e0(extraout_x8,&uStack_f8,uStack_91,puVar7 + 0xd,puVar7 + 0xf,puVar7[0x18],
                      puVar7[0x19]);
        if (lStack_c0 != 0) {
          piVar1 = (int *)(lStack_c0 + 0x14);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            func_0x000109a848d4(&uStack_f8);
          }
        }
        lStack_c0 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_d8 = 0;
        uStack_d4 = 0;
        if (0 < (int)uStack_f4) {
          lVar11 = 0;
          do {
            *(undefined4 *)(lStack_b8 + lVar11 * 4) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 < (int)uStack_f4);
        }
        if (puStack_b0 == &uStack_a8 || puStack_b0 == (undefined8 *)0x0) {
          return;
        }
        _free(puStack_b0[-1]);
        return;
      }
    }
    FUN_109262df8(&UNK_10f570bd4);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1094f60c0);
    (*pcVar6)();
  }
  uVar14 = *puVar7;
  uVar16 = puVar7[3];
  uVar15 = puVar7[2];
  iVar3 = *(int *)((long)puVar7 + 4);
  extraout_x8[1] = puVar7[1];
  *extraout_x8 = uVar14;
  extraout_x8[3] = uVar16;
  extraout_x8[2] = uVar15;
  lVar11 = puVar7[7];
  uVar16 = puVar7[4];
  uVar15 = puVar7[7];
  uVar14 = puVar7[6];
  extraout_x8[5] = puVar7[5];
  extraout_x8[4] = uVar16;
  extraout_x8[7] = uVar15;
  extraout_x8[6] = uVar14;
  extraout_x8[10] = 0;
  extraout_x8[8] = extraout_x8 + 1;
  extraout_x8[9] = extraout_x8 + 10;
  extraout_x8[0xb] = 0;
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    iVar3 = *(int *)((long)puVar7 + 4);
  }
  if (iVar3 < 3) {
    puVar10 = (undefined8 *)puVar7[9];
    puVar12 = (undefined8 *)extraout_x8[9];
    *puVar12 = *puVar10;
    puVar12[1] = puVar10[1];
  }
  else {
    *(undefined4 *)((long)extraout_x8 + 4) = 0;
    func_0x000109a84868(extraout_x8,puVar7);
  }
  *(undefined1 *)(extraout_x8 + 0xc) = *(undefined1 *)(puVar7 + 0xc);
  lVar11 = puVar7[0xe];
  uVar14 = puVar7[0xd];
  extraout_x8[0xe] = puVar7[0xe];
  extraout_x8[0xd] = uVar14;
  if (lVar11 != 0) {
    plVar2 = (long *)(lVar11 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar14 = puVar7[0x13];
  extraout_x8[0x14] = puVar7[0x14];
  extraout_x8[0x13] = uVar14;
  uVar14 = puVar7[0x15];
  extraout_x8[0x16] = puVar7[0x16];
  extraout_x8[0x15] = uVar14;
  uVar14 = puVar7[0x17];
  extraout_x8[0x18] = puVar7[0x18];
  extraout_x8[0x17] = uVar14;
  *(undefined1 *)(extraout_x8 + 0x19) = *(undefined1 *)(puVar7 + 0x19);
  uVar14 = puVar7[0xf];
  extraout_x8[0x10] = puVar7[0x10];
  extraout_x8[0xf] = uVar14;
  uVar14 = puVar7[0x11];
  extraout_x8[0x12] = puVar7[0x12];
  extraout_x8[0x11] = uVar14;
  return;
}



/* Entry: 1094f5e80; end: 1094f60db;  */

void FUN_1094f5e80(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 auStack_c8 [2];
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 auStack_b0 [2];
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long lStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  uStack_31 = (undefined1)param_3;
  if (*(byte *)(param_2 + 0xc) == param_3) {
    uVar10 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    iVar3 = *(int *)((long)param_2 + 4);
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
    lVar8 = param_2[7];
    uVar12 = param_2[4];
    uVar11 = param_2[7];
    uVar10 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar12;
    param_1[7] = uVar11;
    param_1[6] = uVar10;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      iVar3 = *(int *)((long)param_2 + 4);
    }
    if (iVar3 < 3) {
      puVar7 = (undefined8 *)param_2[9];
      puVar9 = (undefined8 *)param_1[9];
      *puVar9 = *puVar7;
      puVar9[1] = puVar7[1];
    }
    else {
      *(undefined4 *)((long)param_1 + 4) = 0;
      func_0x000109a84868(param_1,param_2);
    }
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    lVar8 = param_2[0xe];
    uVar10 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar10;
    if (lVar8 != 0) {
      plVar2 = (long *)(lVar8 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar10 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar10;
    uVar10 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar10;
    uVar10 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar10;
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
    uVar10 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar10;
    uVar10 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar10;
    return;
  }
  uStack_98 = 0x42ff0000;
  puStack_c0 = &uStack_98;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_94 = 0;
  lStack_58 = (long)&uStack_94 + 4;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_6c = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  lStack_60 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_a0 = 0;
  auStack_b0[0] = 0x1010000;
  auStack_c8[0] = 0x2010000;
  uStack_b8 = 0;
  puVar7 = param_2;
  puStack_a8 = param_2;
  puStack_50 = &uStack_48;
  FUN_1094f5b6c();
  FUN_1094f71c4();
  if (puVar7 != (undefined8 *)0x0) {
    puVar7 = puVar7 + 3;
    func_0x0001094f7268(puVar7,&uStack_31);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_109ac9fc8(auStack_b0,auStack_c8,*(undefined4 *)((long)puVar7 + 0x14),0);
      FUN_1094d91e0(param_1,&uStack_98,uStack_31,param_2 + 0xd,param_2 + 0xf,param_2[0x18],
                    param_2[0x19]);
      if (lStack_60 != 0) {
        piVar1 = (int *)(lStack_60 + 0x14);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_98);
        }
      }
      lStack_60 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      if (0 < (int)uStack_94) {
        lVar8 = 0;
        do {
          *(undefined4 *)(lStack_58 + lVar8 * 4) = 0;
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)uStack_94);
      }
      if (puStack_50 == &uStack_48 || puStack_50 == (undefined8 *)0x0) {
        return;
      }
      _free(puStack_50[-1]);
      return;
    }
  }
  FUN_109262df8(&UNK_10f570bd4);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1094f60c0);
  (*pcVar6)();
}



/* Entry: 1094f60dc; end: 1094f626f;  */

undefined8 * FUN_1094f60dc(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 auStack_68 [2];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined4 auStack_50 [2];
  undefined8 *puStack_48;
  undefined8 uStack_40;
  byte bStack_31;
  
  bStack_31 = (byte)param_2;
  pbVar6 = (byte *)(param_1 + 0xc);
  if (*pbVar6 != param_2) {
    uStack_40 = 0;
    auStack_50[0] = 0x1010000;
    auStack_68[0] = 0x2010000;
    uStack_58 = 0;
    puStack_60 = param_3;
    puStack_48 = param_1;
    FUN_1094f5b6c();
    FUN_1094f71c4();
    if (param_1 != (undefined8 *)0x0) {
      param_1 = param_1 + 3;
      pbVar6 = &bStack_31;
      func_0x0001094f7268();
      if (param_1 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)auStack_50;
        FUN_109ac9fc8(puVar5,auStack_68,*(undefined4 *)((long)param_1 + 0x14),0);
        return puVar5;
      }
    }
    puVar5 = (undefined8 *)&UNK_10f570bd4;
    FUN_109262df8();
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 4) = 0x3f800000;
    if (param_3 != (undefined8 *)0x0) {
      lVar7 = (long)param_3 << 3;
      do {
        FUN_1094f62e0(puVar5,*pbVar6,*(undefined8 *)pbVar6);
        lVar7 = lVar7 + -8;
        pbVar6 = pbVar6 + 8;
      } while (lVar7 != 0);
    }
    return puVar5;
  }
  if (param_3 == param_1) {
    return param_1;
  }
  if (param_1[7] != 0) {
    piVar1 = (int *)(param_1[7] + 0x14);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5 = param_1;
  if (param_3[7] != 0) {
    piVar1 = (int *)(param_3[7] + 0x14);
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
      puVar5 = param_3;
      func_0x000109a848d4(param_3);
    }
  }
  param_3[7] = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  param_3[5] = 0;
  param_3[4] = 0;
  if (*(int *)((long)param_3 + 4) < 1) {
    *(undefined4 *)param_3 = *(undefined4 *)param_1;
LAB_1094f61f8:
    if (*(int *)((long)param_1 + 4) < 3) {
      *(int *)((long)param_3 + 4) = *(int *)((long)param_1 + 4);
      param_3[1] = param_1[1];
      puVar8 = (undefined8 *)param_1[9];
      puVar10 = (undefined8 *)param_3[9];
      *puVar10 = *puVar8;
      puVar10[1] = puVar8[1];
      goto LAB_1094f6238;
    }
  }
  else {
    lVar7 = 0;
    lVar9 = param_3[8];
    do {
      *(undefined4 *)(lVar9 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((long)param_3 + 4));
    *(undefined4 *)param_3 = *(undefined4 *)param_1;
    if (*(int *)((long)param_3 + 4) < 3) goto LAB_1094f61f8;
  }
  puVar5 = param_3;
  func_0x000109a84868(param_3,param_1);
LAB_1094f6238:
  uVar11 = param_1[2];
  param_3[3] = param_1[3];
  param_3[2] = uVar11;
  uVar11 = param_1[4];
  param_3[5] = param_1[5];
  param_3[4] = uVar11;
  uVar11 = param_1[6];
  param_3[7] = param_1[7];
  param_3[6] = uVar11;
  return puVar5;
}



/* Entry: 1094f6270; end: 1094f62df;  */

undefined8 * FUN_1094f6270(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    param_3 = param_3 << 3;
    do {
      FUN_1094f62e0(param_1,*(undefined1 *)param_2,*param_2);
      param_3 = param_3 + -8;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 1094f62e0; end: 1094f64cf;  */

void FUN_1094f62e0(long *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong unaff_x24;
  
  param_2 = param_2 & 0xff;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    uVar8 = (uint)uVar9;
    uVar10 = (uint)param_2;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar8 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar9 <= param_2) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar10 / uVar8;
        }
        unaff_x24 = (ulong)(uVar10 - uVar1 * uVar8);
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_1094f6390;
          uVar7 = plVar5[1];
          if (uVar7 != param_2) break;
          if (*(byte *)(plVar5 + 2) == uVar10) {
            return;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (uVar9 <= uVar7) {
          uVar2 = 0;
          if (uVar9 != 0) {
            uVar2 = uVar7 / uVar9;
          }
          uVar7 = uVar7 - uVar2 * uVar9;
        }
      } while (uVar7 == unaff_x24);
    }
  }
LAB_1094f6390:
  plVar5 = (long *)0x18;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = param_2;
  plVar5[2] = param_3;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_1094f64d0(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (int)uVar9 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar9 <= param_2) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = param_2 / uVar9;
        }
        unaff_x24 = param_2 - uVar3 * uVar9;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar5 = *plVar4;
    *plVar4 = (long)plVar5;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar5 == 0) goto LAB_1094f649c;
    uVar3 = *(ulong *)(*plVar5 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar3 = uVar3 & uVar9 - 1;
    }
    else if (uVar9 <= uVar3) {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar3 / uVar9;
      }
      uVar3 = uVar3 - uVar7 * uVar9;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar5 = *plVar4;
  }
  *plVar4 = (long)plVar5;
LAB_1094f649c:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1094f64d0; end: 1094f669f;  */

long * FUN_1094f64d0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar3;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar9 <= param_2) {
      return plVar3;
    }
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar3;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    plVar3 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
    plVar9 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar9 * 8) = 0;
      plVar9 = (long *)((long)plVar9 + 1);
    } while (param_2 != plVar9);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      plVar5 = (long *)plVar9[1];
      uVar4 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar4) == 0) {
        plVar5 = (long *)((ulong)plVar5 & uVar4);
      }
      else if (param_2 <= plVar5) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)param_2;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar5 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar9;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar4);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar9;
            plVar5 = plVar8;
          }
          else {
            *plVar9 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar9;
          }
        }
        plVar9 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return plVar3;
  }
  func_0x000104c4f740();
  plVar9 = (long *)plVar3[2];
  while (plVar9 != (long *)0x0) {
    plVar9 = (long *)*plVar9;
    __ZdlPv();
  }
  lVar2 = *plVar3;
  *plVar3 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 1094f66a0; end: 1094f66e7;  */

long * FUN_1094f66a0(long *param_1)

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



/* Entry: 1094f66e8; end: 1094f675b;  */

undefined8 * FUN_1094f66e8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_1094f64d0(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_1094f62e0(param_1,*(undefined1 *)(plVar1 + 2),plVar1[2]);
  }
  return param_1;
}



/* Entry: 1094f675c; end: 1094f6b6b;  */

long * FUN_1094f675c(long *param_1,byte *param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x22;
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    pbVar16 = param_2 + param_3 * 0x30;
    plVar1 = param_1 + 2;
    do {
      bVar2 = *param_2;
      uVar18 = (ulong)bVar2;
      uVar20 = param_1[1];
      uVar17 = (uint)bVar2;
      if (uVar20 != 0) {
        uVar8 = uVar20 - 1;
        uVar19 = (uint)uVar20;
        if ((uVar20 & uVar8) == 0) {
          unaff_x22 = uVar19 - 1 & uVar18;
        }
        else {
          unaff_x22 = uVar18;
          if (uVar20 <= uVar18) {
            uVar3 = 0;
            if (uVar19 != 0) {
              uVar3 = uVar17 / uVar19;
            }
            unaff_x22 = (ulong)(uVar17 - uVar3 * uVar19);
          }
        }
        plVar10 = *(long **)(*param_1 + unaff_x22 * 8);
        if (plVar10 != (long *)0x0) {
          do {
            while( true ) {
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) goto LAB_1094f6838;
              uVar12 = plVar10[1];
              if (uVar12 != uVar18) break;
              if (*(byte *)(plVar10 + 2) == uVar17) goto LAB_1094f6ac8;
            }
            if ((uVar20 & uVar8) == 0) {
              uVar12 = uVar12 & uVar8;
            }
            else if (uVar20 <= uVar12) {
              uVar9 = 0;
              if (uVar20 != 0) {
                uVar9 = uVar12 / uVar20;
              }
              uVar12 = uVar12 - uVar9 * uVar20;
            }
          } while (uVar12 == unaff_x22);
        }
      }
LAB_1094f6838:
      plVar10 = (long *)0x40;
      __Znwm();
      *plVar10 = 0;
      plVar10[1] = uVar18;
      *(byte *)(plVar10 + 2) = bVar2;
      FUN_1094f66e8(plVar10 + 3,param_2 + 8);
      if ((uVar20 == 0) || (*(float *)(param_1 + 4) * (float)uVar20 < (float)(param_1[3] + 1))) {
        uVar8 = 1;
        if (2 < uVar20) {
          uVar8 = (ulong)((uVar20 & uVar20 - 1) != 0);
        }
        uVar8 = uVar8 | uVar20 << 1;
        uVar20 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (uVar8 <= uVar20) {
          uVar8 = uVar20;
        }
        if (uVar8 - 1 == 0) {
          uVar8 = 2;
        }
        else if ((uVar8 & uVar8 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        uVar20 = param_1[1];
        if (uVar20 < uVar8) {
LAB_1094f68e4:
          if (uVar8 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1094f6b40);
            (*pcVar5)();
          }
          lVar6 = uVar8 << 3;
          __Znwm();
          lVar7 = *param_1;
          *param_1 = lVar6;
          if (lVar7 != 0) {
            __ZdlPv();
          }
          uVar20 = 0;
          param_1[1] = uVar8;
          do {
            *(undefined8 *)(*param_1 + uVar20 * 8) = 0;
            uVar20 = uVar20 + 1;
          } while (uVar8 != uVar20);
          plVar11 = (long *)*plVar1;
          uVar20 = uVar8;
          if (plVar11 != (long *)0x0) {
            uVar12 = plVar11[1];
            uVar9 = uVar8 - 1;
            if ((uVar8 & uVar9) == 0) {
              uVar12 = uVar12 & uVar9;
            }
            else if (uVar8 <= uVar12) {
              uVar15 = 0;
              if (uVar8 != 0) {
                uVar15 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar15 * uVar8;
            }
            *(long **)(*param_1 + uVar12 * 8) = plVar1;
            plVar13 = (long *)*plVar11;
            while (plVar13 != (long *)0x0) {
              uVar15 = plVar13[1];
              if ((uVar8 & uVar9) == 0) {
                uVar15 = uVar15 & uVar9;
              }
              else if (uVar8 <= uVar15) {
                uVar4 = 0;
                if (uVar8 != 0) {
                  uVar4 = uVar15 / uVar8;
                }
                uVar15 = uVar15 - uVar4 * uVar8;
              }
              plVar14 = plVar13;
              if (uVar15 != uVar12) {
                lVar6 = *param_1;
                if (*(long *)(lVar6 + uVar15 * 8) == 0) {
                  *(long **)(lVar6 + uVar15 * 8) = plVar11;
                  uVar12 = uVar15;
                }
                else {
                  *plVar11 = *plVar13;
                  *plVar13 = **(undefined8 **)(lVar6 + uVar15 * 8);
                  **(long **)(lVar6 + uVar15 * 8) = (long)plVar13;
                  plVar14 = plVar11;
                }
              }
              plVar11 = plVar14;
              plVar13 = (long *)*plVar14;
            }
          }
        }
        else if (uVar8 < uVar20) {
          uVar12 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if (1 < uVar12) {
            uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
          }
          if (uVar8 <= uVar12) {
            uVar8 = uVar12;
          }
          if (uVar8 < uVar20) {
            if (uVar8 != 0) goto LAB_1094f68e4;
            lVar6 = *param_1;
            *param_1 = 0;
            if (lVar6 != 0) {
              __ZdlPv();
            }
            param_1[1] = 0;
            uVar20 = 0;
          }
          else {
            uVar20 = param_1[1];
          }
        }
        if ((uVar20 & uVar20 - 1) == 0) {
          unaff_x22 = (int)uVar20 - 1 & uVar18;
        }
        else {
          unaff_x22 = uVar18;
          if (uVar20 <= uVar18) {
            uVar8 = 0;
            if (uVar20 != 0) {
              uVar8 = uVar18 / uVar20;
            }
            unaff_x22 = uVar18 - uVar8 * uVar20;
          }
        }
      }
      lVar6 = *param_1;
      plVar11 = *(long **)(lVar6 + unaff_x22 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar10 = *plVar1;
        *plVar1 = (long)plVar10;
        *(long **)(lVar6 + unaff_x22 * 8) = plVar1;
        if (*plVar10 != 0) {
          uVar18 = *(ulong *)(*plVar10 + 8);
          if ((uVar20 & uVar20 - 1) == 0) {
            uVar18 = uVar18 & uVar20 - 1;
          }
          else if (uVar20 <= uVar18) {
            uVar8 = 0;
            if (uVar20 != 0) {
              uVar8 = uVar18 / uVar20;
            }
            uVar18 = uVar18 - uVar8 * uVar20;
          }
          *(long **)(*param_1 + uVar18 * 8) = plVar10;
        }
      }
      else {
        *plVar10 = *plVar11;
        *plVar11 = (long)plVar10;
      }
      param_1[3] = param_1[3] + 1;
LAB_1094f6ac8:
      param_2 = param_2 + 0x30;
    } while (param_2 != pbVar16);
  }
  return param_1;
}


