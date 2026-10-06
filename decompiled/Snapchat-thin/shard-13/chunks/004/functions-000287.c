/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a5943a4; end: 10a5944cb;  */

void FUN_10a5943a4(long param_1,undefined8 param_2)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  iVar4 = (int)param_2;
  lVar2 = 0x60;
  if (iVar4 != 0) {
    lVar2 = 0x288;
  }
  piVar1 = (int *)(param_1 + lVar2);
  if (*piVar1 != 0) {
    if (*(char *)((long)piVar1 + 0x221) == '\x01') {
      bVar3 = (char)piVar1[0x88] != '\0';
    }
    else {
      bVar3 = false;
    }
    lVar2 = 0x4b0;
    if (iVar4 != 0) {
      lVar2 = 0x4b8;
    }
    lVar5 = *(long *)(param_1 + lVar2);
    if (*(char *)((long)piVar1 + 0x222) == '\x01') {
      *(undefined1 *)((long)piVar1 + 0x222) = 0;
      if ((char)piVar1[0x4c] == '\x01') {
        (**(code **)(piVar1 + 0x3c))(piVar1 + 0x3c);
      }
      else if ((char)piVar1[0x4c] == '\x02') {
        FUN_10a05e614(piVar1 + 0x3c);
      }
      if (*(long *)(param_1 + lVar2) != lVar5) {
        return;
      }
    }
    if (bVar3) {
      *(undefined2 *)(piVar1 + 0x88) = 0x100;
      uStack_41 = 0;
      FUN_10a594204(piVar1 + 6,&uStack_41);
      if (*(long *)(param_1 + lVar2) != lVar5) {
        return;
      }
      if (iVar4 == 1) {
        uStack_42 = 0;
        FUN_10a087a3c(piVar1 + 0x4e,&uStack_42);
        if (*(long *)(param_1 + 0x4b8) != lVar5) {
          return;
        }
      }
    }
    FUN_10a593a80(param_1,param_2);
  }
  return;
}



/* Entry: 10a5944cc; end: 10a5946a3;  */

void FUN_10a5944cc(long param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lStack_60;
  code *pcStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  lVar6 = 0x4b0;
  if (param_2 != 0) {
    lVar6 = 0x4b8;
  }
  uVar10 = *(undefined8 *)(param_1 + lVar6);
  lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 0x870);
  puVar8 = *(undefined8 **)(lVar6 + 0x38);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(lVar6 + 0x28);
    plVar7 = *(long **)(lVar6 + 0x30);
  }
  else {
    plVar7 = *(long **)(lVar6 + 0x40);
  }
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  lVar6 = *(long *)(param_1 + 0x50);
  if (lVar6 != 0) {
    plVar9 = (long *)(lVar6 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)puVar8[2];
  puStack_48 = puVar8;
  if (plVar9 == (long *)0x0) {
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    *puVar5 = uVar1;
    puVar5[1] = lVar6;
    *(int *)(puVar5 + 2) = param_2;
    puVar5[3] = uVar10;
    puVar5[5] = 0x10a5c2320;
    pcStack_58 = FUN_10a5c2220;
    puStack_50 = puVar5;
    (**(code **)*puVar8)(puVar8,&pcStack_58);
  }
  else {
    lStack_60 = 0;
    (**(code **)(*plVar9 + 0x28))(plVar9,0,&lStack_60);
    if (lStack_60 != 0) {
      func_0x0001092af97c(&lStack_60);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a594678);
      (*pcVar4)();
    }
    puVar5 = (undefined8 *)0x38;
    __Znwm();
    *puVar5 = uVar1;
    puVar5[1] = lVar6;
    *(int *)(puVar5 + 2) = param_2;
    puVar5[3] = uVar10;
    puVar5[5] = FUN_10a5c22ec;
    puVar5[6] = plVar9;
    pcStack_58 = FUN_10a5c21f0;
    puStack_50 = puVar5;
    (**(code **)*puVar8)(puVar8,&pcStack_58);
    __ZNSt13exception_ptrD1Ev(&lStack_60);
  }
  lStack_60 = 0;
  __ZNSt13exception_ptrD1Ev(&lStack_60);
  if (plVar7 != (long *)0x0) {
    plVar9 = plVar7 + 1;
    do {
      lVar6 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a5946a4; end: 10a594757;  */

undefined1 FUN_10a5946a4(long param_1)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_1 + 0x60) == 2) &&
     (*(char *)(param_1 + 0x281) == '\x01' && *(char *)(param_1 + 0x280) == '\x02')) {
    return 1;
  }
  if (*(int *)(param_1 + 0x288) == 2) {
    uVar1 = 0;
    if (*(char *)(param_1 + 0x4a8) == '\x02') {
      uVar1 = *(undefined1 *)(param_1 + 0x4a9);
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 10a594758; end: 10a594873;  */

void FUN_10a594758(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  double dVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0x850);
  dVar4 = *(double *)(lVar2 + 8) + *(double *)(lVar2 + 0x18);
  FUN_10a594874(dVar4,param_1,0);
  FUN_10a594874(dVar4,param_1,1);
  if (((*(int *)(param_1 + 0x60) == 2) &&
      (*(char *)(param_1 + 0x281) == '\x01' && *(char *)(param_1 + 0x280) == '\x02')) ||
     ((*(int *)(param_1 + 0x288) == 2 &&
      (*(char *)(param_1 + 0x4a9) == '\x01' && *(char *)(param_1 + 0x4a8) == '\x02')))) {
    if ((*(byte *)(param_1 + 0x504) & 1) == 0) {
      plVar3 = (long *)(param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x58);
      plVar1 = (long *)((long)plVar3 + *(long *)(*plVar3 + -0x18));
      if ((*(byte *)(plVar1 + 3) & 1) == 0) {
        *(undefined1 *)(plVar1 + 3) = 1;
        plVar1[2] = lVar2;
        if (lVar2 != 0) {
          plVar1[1] = *(long *)(*(long *)(lVar2 + 0x850) + 0x2c);
        }
        (**(code **)(*plVar1 + 0x18))();
      }
      FUN_10a5ae998(*(undefined8 *)(param_1 + 0x38),&PTR_DAT_110b99f08,lVar2,plVar3);
      *(undefined1 *)(param_1 + 0x504) = 1;
    }
  }
  else if (*(char *)(param_1 + 0x500) == '\x01') {
    *(undefined1 *)(param_1 + 0x500) = 0;
  }
  return;
}



/* Entry: 10a594874; end: 10a594d33;  */

void FUN_10a594874(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  ushort uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined4 uStack_c8;
  undefined1 auStack_c4 [20];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long lStack_80;
  undefined8 uStack_78;
  
  iVar7 = (int)param_6;
  lVar9 = 0x60;
  if (iVar7 != 0) {
    lVar9 = 0x288;
  }
  piVar1 = (int *)(param_5 + lVar9);
  if (*piVar1 != 2) {
    return;
  }
  lVar9 = *(long *)(piVar1 + 2);
  if (lVar9 == 0) {
    return;
  }
  lVar3 = 0x4b0;
  if (iVar7 != 0) {
    lVar3 = 0x4b8;
  }
  lVar11 = *(long *)(param_5 + lVar3);
  __ZNSt3__15mutex4lockEv(lVar9);
  uStack_a8 = *(undefined8 *)(lVar9 + 0x48);
  uStack_b0 = *(ulong *)(lVar9 + 0x40);
  uStack_98 = *(undefined8 *)(lVar9 + 0x58);
  uStack_a0 = *(undefined8 *)(lVar9 + 0x50);
  uStack_78 = *(undefined8 *)(lVar9 + 0x78);
  lVar15 = *(long *)(lVar9 + 0x70);
  uStack_88 = (undefined4)*(undefined8 *)(lVar9 + 0x68);
  uStack_84 = (undefined4)((ulong)*(undefined8 *)(lVar9 + 0x68) >> 0x20);
  uStack_90 = (undefined4)*(undefined8 *)(lVar9 + 0x60);
  uStack_8c = (undefined4)((ulong)*(undefined8 *)(lVar9 + 0x60) >> 0x20);
  *(undefined4 *)(lVar9 + 0x40) = 0;
  *(undefined1 *)(lVar9 + 0x44) = 0;
  *(undefined1 *)(lVar9 + 0x48) = 0;
  *(undefined1 *)(lVar9 + 0x78) = 0;
  lStack_80 = lVar15;
  __ZNSt3__15mutex6unlockEv(lVar9);
  uVar13 = (undefined4)lVar15;
  if (uStack_b0._1_1_ != '\x01') goto LAB_10a594a74;
  bVar4 = (byte)uStack_b0;
  uVar10 = uStack_b0 & 0xff;
  uVar8 = (ushort)(0x403020001 >> ((uStack_b0 & 7) << 3));
  if (4 < uVar10) {
    uVar8 = 1;
  }
  uStack_130 = CONCAT31(uStack_130._1_3_,(char)uVar8);
  if (*piVar1 == 2) {
    if (*(char *)((long)piVar1 + 0x221) == '\x01') {
      uVar12 = (uint)((char)piVar1[0x88] != '\0');
      if ((char)piVar1[0x88] == '\x02') {
        if (*(char *)((long)piVar1 + 0x222) == '\x01') {
          *(undefined1 *)((long)piVar1 + 0x222) = 0;
          lVar9 = *(long *)(param_5 + lVar3);
          if ((char)piVar1[0x4c] == '\x01') {
            (**(code **)(piVar1 + 0x3c))(piVar1 + 0x3c);
          }
          else if ((char)piVar1[0x4c] == '\x02') {
            FUN_10a05e614(piVar1 + 0x3c);
          }
          if (*(long *)(param_5 + lVar3) != lVar9) goto LAB_10a594a68;
        }
        if ((char)piVar1[0x6a] == '\x01') {
          *(undefined1 *)(piVar1 + 0x6a) = 0;
        }
        if ((char)piVar1[0x73] == '\x01') {
          *(undefined1 *)(piVar1 + 0x73) = 0;
        }
        if ((char)piVar1[0x76] == '\x01') {
          *(undefined1 *)(piVar1 + 0x76) = 0;
        }
        piVar1[0x78] = 0;
        piVar1[0x79] = 0;
        piVar1[0x7a] = 0;
        piVar1[0x7c] = 0;
        piVar1[0x7d] = 0;
        if ((char)piVar1[0x87] == '\x01') {
          *(undefined1 *)(piVar1 + 0x87) = 0;
        }
        uVar12 = 1;
      }
    }
    else {
      uVar12 = 0;
    }
    *(ushort *)(piVar1 + 0x88) = uVar8 & 0xff | 0x100;
    lVar9 = *(long *)(param_5 + lVar3);
    FUN_10a594204(piVar1 + 6,&uStack_130);
    if (((iVar7 != 0) && (*(long *)(param_5 + lVar3) == lVar9)) &&
       (uVar2 = (uint)(4 < uVar10) | 0x1dU >> (ulong)(bVar4 & 0x1f) & 1,
       uStack_d0 = (undefined1)uVar2, uVar2 != uVar12)) {
      FUN_10a087a3c(piVar1 + 0x4e,&uStack_d0);
    }
  }
LAB_10a594a68:
  if (*(long *)(param_5 + lVar3) != lVar11) {
    return;
  }
LAB_10a594a74:
  if (uStack_b0._2_1_ == '\x01') {
    if (((*piVar1 == 2) && ((*(byte *)((long)piVar1 + 0x222) & 1) == 0)) &&
       ((*(char *)((long)piVar1 + 0x221) == '\x01' && ((char)piVar1[0x88] == '\x02')))) {
      *(undefined1 *)((long)piVar1 + 0x222) = 1;
      if ((char)piVar1[0x3a] == '\x01') {
        (**(code **)(piVar1 + 0x2a))(piVar1 + 0x2a);
      }
      else if ((char)piVar1[0x3a] == '\x02') {
        FUN_10a05e614(piVar1 + 0x2a);
      }
    }
    if (*(long *)(param_5 + lVar3) != lVar11) {
      return;
    }
  }
  if (uStack_b0._3_1_ == '\x01') {
    if ((*piVar1 == 2) && (*(char *)((long)piVar1 + 0x222) == '\x01')) {
      *(undefined1 *)((long)piVar1 + 0x222) = 0;
      if ((char)piVar1[0x4c] == '\x01') {
        (**(code **)(piVar1 + 0x3c))(piVar1 + 0x3c);
      }
      else if ((char)piVar1[0x4c] == '\x02') {
        FUN_10a05e614(piVar1 + 0x3c);
      }
    }
    if (*(long *)(param_5 + lVar3) != lVar11) {
      return;
    }
  }
  if ((((uStack_b0._4_1_ != '\x01') ||
       (FUN_10a5943a4(param_5,param_6), *(long *)(param_5 + lVar3) == lVar11)) && (*piVar1 == 2)) &&
     ((*(char *)((long)piVar1 + 0x221) == '\x01' && ((char)piVar1[0x88] == '\x02')))) {
    if ((char)uStack_78 == '\x01') {
      uVar13 = 0xe826d695;
      FUN_10a594d34((double)lStack_80 * 1e-09,piVar1 + 0x60,(ulong)&uStack_b0 | 8,
                    (long)&uStack_a0 + 4);
      *(ulong *)(piVar1 + 0x7c) = CONCAT44(uStack_88,uStack_8c);
    }
    if (((char)piVar1[0x6a] == '\x01') && (*(char *)(param_5 + 0x500) == '\x01')) {
      FUN_10a594e5c(param_1,&uStack_d0,piVar1 + 0x60);
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0x3f80000000000000;
      if ((*(byte *)(param_5 + 0x500) & 1) != 0) {
        uStack_130 = (undefined4)CONCAT71(uStack_cf,uStack_d0);
        uStack_12c = (undefined4)((uint7)uStack_cf >> 0x18);
        uStack_128 = uStack_c8;
        uStack_124 = CONCAT44(uStack_124._4_4_,0x3f800000);
        uStack_ec = uStack_c8;
        func_0x0001073b60c0(param_5 + 0x4c0,&uStack_130);
        uStack_e8 = uVar13;
        uStack_e4 = param_3;
        if ((*(byte *)(param_5 + 0x500) & 1) != 0) {
          uStack_130 = *(undefined4 *)(param_5 + 0x4c0);
          uVar16 = *(undefined8 *)(param_5 + 0x4d0);
          uStack_12c = (undefined4)*(undefined8 *)(param_5 + 0x4c4);
          uStack_128 = (undefined4)((ulong)*(undefined8 *)(param_5 + 0x4c4) >> 0x20);
          uStack_11c = *(undefined4 *)(param_5 + 0x4d8);
          uStack_118 = *(undefined8 *)(param_5 + 0x4e0);
          uStack_110 = *(undefined4 *)(param_5 + 0x4e8);
          uStack_124 = uVar16;
          uVar13 = uStack_110;
          func_0x00010a14d808(&uStack_130);
          uVar14 = (undefined4)uVar16;
          uStack_10c = uVar13;
          uStack_108 = uVar14;
          uStack_104 = param_3;
          uStack_100 = param_4;
          func_0x00010a5951a4(&uStack_10c,auStack_c4);
          uStack_fc = uVar13;
          uStack_f8 = uVar14;
          uStack_f4 = param_3;
          uStack_f0 = param_4;
          func_0x00010a595144(&uStack_fc);
          uStack_d8 = CONCAT44(param_4,param_3);
          piVar6 = piVar1;
          uStack_e0 = uVar13;
          uStack_dc = uVar14;
          func_0x00010a593934(piVar1[0x7c],piVar1[0x7d],piVar1,&uStack_ec);
          if ((int)piVar6 == 0) {
            return;
          }
          *(ulong *)(piVar1 + 0x80) = CONCAT44(uStack_e0,uStack_e4);
          *(ulong *)(piVar1 + 0x7e) = CONCAT44(uStack_e8,uStack_ec);
          *(undefined8 *)(piVar1 + 0x83) = uStack_d8;
          *(ulong *)(piVar1 + 0x81) = CONCAT44(uStack_dc,uStack_e0);
          *(undefined8 *)(piVar1 + 0x85) = *(undefined8 *)(piVar1 + 0x7c);
          if ((*(byte *)(piVar1 + 0x87) & 1) == 0) {
            *(undefined1 *)(piVar1 + 0x87) = 1;
          }
          FUN_10a5951f8(piVar1 + 0x18,&uStack_ec,&uStack_e0,piVar1 + 0x7c);
          return;
        }
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a594d34);
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 10a594d34; end: 10a594e5b;  */

void FUN_10a594d34(double param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar15;
  double dVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar15 = (undefined4)((ulong)param_1 >> 0x20);
  uVar12 = SUB84(param_1,0);
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_2 + 5) == '\x01') {
    if ((double)param_2[4] < param_1) {
      dVar6 = param_1 - (double)param_2[4];
      fVar23 = *(float *)(param_3 + 1);
      fVar28 = (float)dVar6;
      fVar18 = (float)(1.0 / (0.07957747154594767 / dVar6 + 1.0));
      fVar35 = (float)param_2[0xc];
      fVar20 = (float)((ulong)param_2[0xc] >> 0x20);
      param_2[0xc] = CONCAT44(fVar20 + (((float)((ulong)*param_3 >> 0x20) -
                                        (float)((ulong)*param_2 >> 0x20)) / fVar28 - fVar20) *
                                       fVar18,
                              fVar35 + (((float)*param_3 - (float)*param_2) / fVar28 - fVar35) *
                                       fVar18);
      *(float *)(param_2 + 0xd) =
           *(float *)(param_2 + 0xd) +
           ((fVar23 - *(float *)(param_2 + 1)) / fVar28 - *(float *)(param_2 + 0xd)) * fVar18;
    }
    uVar11 = *param_3;
    uStack_24 = (undefined4)param_4[1];
    uStack_20 = (undefined4)((ulong)param_4[1] >> 0x20);
    uStack_2c = (undefined4)*param_4;
    uStack_28 = (undefined4)((ulong)*param_4 >> 0x20);
    param_2[1] = CONCAT44(uStack_2c,*(undefined4 *)(param_3 + 1));
    *param_2 = uVar11;
    param_2[3] = CONCAT44(uStack_1c,uStack_20);
    param_2[2] = CONCAT44(uStack_24,uStack_28);
    param_2[4] = param_1;
  }
  else {
    uVar11 = *param_3;
    uStack_24 = (undefined4)param_4[1];
    uStack_20 = (undefined4)((ulong)param_4[1] >> 0x20);
    uStack_2c = (undefined4)*param_4;
    uStack_28 = (undefined4)((ulong)*param_4 >> 0x20);
    param_2[1] = CONCAT44(uStack_2c,*(undefined4 *)(param_3 + 1));
    *param_2 = uVar11;
    param_2[3] = CONCAT44(uStack_1c,uStack_20);
    param_2[2] = CONCAT44(uStack_24,uStack_28);
    param_2[4] = param_1;
    *(undefined1 *)(param_2 + 5) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(param_3 + 5) & 1) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 3) = 0x3f800000;
  }
  else {
    dVar6 = (double)CONCAT44(uVar15,uVar12);
    if (*(char *)(param_3 + 0xb) == '\x01') {
      dVar34 = 0.004166666666666667;
      if ((double)param_3[10] < dVar6) {
        dVar34 = dVar6 - (double)param_3[10];
      }
    }
    else {
      dVar34 = 0.004166666666666667;
    }
    param_3[10] = dVar6;
    *(undefined1 *)(param_3 + 0xb) = 1;
    dVar14 = dVar34 / -0.2;
    _exp();
    fVar18 = (float)dVar14;
    fVar28 = (float)param_3[0xc] * fVar18;
    fVar35 = (float)((ulong)param_3[0xc] >> 0x20) * fVar18;
    param_3[0xc] = CONCAT44(fVar35,fVar28);
    fVar23 = *(float *)(param_3 + 0xd);
    *(float *)(param_3 + 0xd) = fVar23 * fVar18;
    if (*(char *)((long)param_3 + 0x4c) == '\x01') {
      fVar29 = (float)(1.0 / (0.05305164769729845 / dVar34 + 1.0));
      fVar20 = (float)param_3[6];
      fVar13 = (float)((ulong)param_3[6] >> 0x20);
      uVar11 = CONCAT44(fVar13 + ((float)((ulong)*param_3 >> 0x20) - fVar13) * fVar29,
                        fVar20 + ((float)*param_3 - fVar20) * fVar29);
      param_3[6] = uVar11;
      fVar36 = *(float *)(param_3 + 7) +
               (*(float *)(param_3 + 1) - *(float *)(param_3 + 7)) * fVar29;
      *(float *)(param_3 + 7) = fVar36;
      pauVar1 = (undefined1 (*) [12])((long)param_3 + 0xc);
      fVar16 = (float)*(undefined8 *)((long)param_3 + 0x14);
      fVar17 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x14) >> 0x20);
      fVar20 = (float)*(undefined8 *)*pauVar1;
      fVar13 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      fVar30 = (float)*(undefined8 *)((long)param_3 + 0x3c);
      fVar19 = fVar20 * fVar30;
      fVar31 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x3c) >> 0x20);
      fVar21 = fVar13 * fVar31;
      fVar32 = (float)*(undefined8 *)((long)param_3 + 0x44);
      fVar22 = fVar16 * fVar32;
      fVar33 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x44) >> 0x20);
      auVar2._4_4_ = fVar21;
      auVar2._0_4_ = fVar19;
      auVar2._8_4_ = fVar22;
      auVar2._12_4_ = fVar17 * fVar33;
      auVar3._4_4_ = fVar21;
      auVar3._0_4_ = fVar19;
      auVar3._8_4_ = fVar22;
      auVar3._12_4_ = fVar17 * fVar33;
      auVar25 = NEON_ext(auVar2,auVar3,8,1);
      uVar24 = NEON_rev64(auVar25._0_8_,4);
      fVar19 = fVar19 + (float)uVar24 + fVar21 + (float)((ulong)uVar24 >> 0x20);
      auVar26._0_4_ = -(uint)(fVar19 < 0.0);
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_4_ = auVar26._0_4_;
      auVar26._12_4_ = auVar26._0_4_;
      auVar25._12_4_ = fVar17;
      auVar25._0_12_ = *pauVar1;
      auVar7._4_4_ = -fVar13;
      auVar7._0_4_ = -fVar20;
      auVar7._8_4_ = -fVar16;
      auVar7._12_4_ = -fVar17;
      auVar27._12_4_ = fVar17;
      auVar27._0_12_ = *pauVar1;
      auVar27 = auVar27 ^ (auVar25 ^ auVar7) & auVar26;
      fVar20 = -fVar19;
      if (0.0 <= fVar19) {
        fVar20 = fVar19;
      }
      if (fVar20 <= 0.9999999) {
        _acosf();
        fVar19 = (1.0 - fVar29) * fVar20;
        _sinf();
        fVar29 = fVar20 * fVar29;
        _sinf();
        _sinf();
        fVar13 = (fVar30 * fVar19 + auVar27._0_4_ * fVar29) / fVar20;
        fVar16 = (fVar31 * fVar19 + auVar27._4_4_ * fVar29) / fVar20;
        fVar17 = (fVar32 * fVar19 + auVar27._8_4_ * fVar29) / fVar20;
        fVar20 = (fVar33 * fVar19 + auVar27._12_4_ * fVar29) / fVar20;
      }
      else {
        fVar20 = 1.0 - fVar29;
        fVar13 = auVar27._0_4_ * fVar29 + fVar30 * fVar20;
        fVar16 = auVar27._4_4_ * fVar29 + fVar31 * fVar20;
        fVar17 = auVar27._8_4_ * fVar29 + fVar32 * fVar20;
        fVar20 = auVar27._12_4_ * fVar29 + fVar33 * fVar20;
      }
      *(ulong *)((long)param_3 + 0x44) = CONCAT44(fVar20,fVar17);
      *(ulong *)((long)param_3 + 0x3c) = CONCAT44(fVar16,fVar13);
    }
    else {
      *(undefined8 *)((long)param_3 + 0x44) = *(undefined8 *)((long)param_3 + 0x14);
      *(undefined8 *)((long)param_3 + 0x3c) = *(undefined8 *)((long)param_3 + 0xc);
      param_3[7] = param_3[1];
      param_3[6] = *param_3;
      *(undefined1 *)((long)param_3 + 0x4c) = 1;
      uVar11 = param_3[6];
      fVar36 = *(float *)(param_3 + 7);
      fVar17 = (float)*(undefined8 *)((long)param_3 + 0x44);
      fVar20 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x44) >> 0x20);
      fVar13 = (float)*(undefined8 *)((long)param_3 + 0x3c);
      fVar16 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x3c) >> 0x20);
    }
    dVar6 = dVar6 - (double)param_3[4];
    dVar34 = 0.1;
    if (dVar6 <= 0.1) {
      dVar34 = dVar6;
    }
    dVar14 = 0.05305164769729845;
    if (0.0 <= dVar6) {
      dVar14 = dVar34 + 0.05305164769729845;
    }
    fVar29 = (float)dVar14;
    fVar23 = fVar23 * fVar18 * fVar29;
    fVar18 = -15.0;
    if (-15.0 <= fVar23) {
      fVar18 = fVar23;
    }
    fVar23 = 15.0;
    if (fVar18 <= 15.0) {
      fVar23 = fVar18;
    }
    fVar28 = fVar28 * fVar29;
    fVar35 = fVar35 * fVar29;
    uVar8 = NEON_fmov(0xc1700000,4);
    uVar8 = CONCAT44(fVar35,fVar28) ^
            (CONCAT44(fVar35,fVar28) ^ uVar8) &
            CONCAT44(-(uint)(fVar35 < (float)(uVar8 >> 0x20)),-(uint)(fVar28 < (float)uVar8));
    uVar9 = NEON_fmov(0x41700000,4);
    uVar8 = uVar8 ^ (uVar8 ^ uVar9) &
                    CONCAT44(-(uint)((float)(uVar9 >> 0x20) < (float)(uVar8 >> 0x20)),
                             -(uint)((float)uVar9 < (float)uVar8));
    *param_2 = CONCAT44((float)((ulong)uVar11 >> 0x20) + (float)(uVar8 >> 0x20),
                        (float)uVar11 + (float)uVar8);
    *(float *)(param_2 + 1) = fVar36 + fVar23;
    fVar18 = fVar13 * fVar13;
    fVar23 = fVar16 * fVar16;
    auVar4._4_4_ = fVar23;
    auVar4._0_4_ = fVar18;
    auVar4._8_4_ = fVar17 * fVar17;
    auVar4._12_4_ = fVar20 * fVar20;
    auVar5._4_4_ = fVar23;
    auVar5._0_4_ = fVar18;
    auVar5._8_4_ = fVar17 * fVar17;
    auVar5._12_4_ = fVar20 * fVar20;
    auVar25 = NEON_ext(auVar4,auVar5,8,1);
    uVar11 = NEON_rev64(auVar25._0_8_,4);
    fVar18 = fVar18 + (float)uVar11 + fVar23 + (float)((ulong)uVar11 >> 0x20);
    if (fVar18 == 0.0) {
      fVar20 = 1.0;
      fVar13 = 0.0;
      fVar16 = 0.0;
      fVar17 = 0.0;
    }
    else {
      fVar18 = 1.0 / SQRT(fVar18);
      fVar13 = fVar13 * fVar18;
      fVar16 = fVar16 * fVar18;
      fVar17 = fVar17 * fVar18;
      fVar20 = fVar20 * fVar18;
    }
    *(float *)((long)param_2 + 0xc) = fVar13;
    *(float *)(param_2 + 2) = fVar16;
    *(float *)((long)param_2 + 0x14) = fVar17;
    *(float *)(param_2 + 3) = fVar20;
  }
  return;
}



/* Entry: 10a594e5c; end: 10a595143;  */

void FUN_10a594e5c(double param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  if ((*(byte *)(param_3 + 5) & 1) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 3) = 0x3f800000;
  }
  else {
    if (*(char *)(param_3 + 0xb) == '\x01') {
      dVar29 = 0.004166666666666667;
      if ((double)param_3[10] < param_1) {
        dVar29 = param_1 - (double)param_3[10];
      }
    }
    else {
      dVar29 = 0.004166666666666667;
    }
    param_3[10] = param_1;
    *(undefined1 *)(param_3 + 0xb) = 1;
    dVar11 = dVar29 / -0.2;
    _exp();
    fVar9 = (float)dVar11;
    fVar30 = (float)param_3[0xc] * fVar9;
    fVar31 = (float)((ulong)param_3[0xc] >> 0x20) * fVar9;
    param_3[0xc] = CONCAT44(fVar31,fVar30);
    fVar14 = *(float *)(param_3 + 0xd);
    *(float *)(param_3 + 0xd) = fVar14 * fVar9;
    if (*(char *)((long)param_3 + 0x4c) == '\x01') {
      fVar24 = (float)(1.0 / (0.05305164769729845 / dVar29 + 1.0));
      fVar16 = (float)param_3[6];
      fVar10 = (float)((ulong)param_3[6] >> 0x20);
      uVar20 = CONCAT44(fVar10 + ((float)((ulong)*param_3 >> 0x20) - fVar10) * fVar24,
                        fVar16 + ((float)*param_3 - fVar16) * fVar24);
      param_3[6] = uVar20;
      fVar32 = *(float *)(param_3 + 7) +
               (*(float *)(param_3 + 1) - *(float *)(param_3 + 7)) * fVar24;
      *(float *)(param_3 + 7) = fVar32;
      pauVar1 = (undefined1 (*) [12])((long)param_3 + 0xc);
      fVar12 = (float)*(undefined8 *)((long)param_3 + 0x14);
      fVar13 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x14) >> 0x20);
      fVar16 = (float)*(undefined8 *)*pauVar1;
      fVar10 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      fVar25 = (float)*(undefined8 *)((long)param_3 + 0x3c);
      fVar15 = fVar16 * fVar25;
      fVar26 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x3c) >> 0x20);
      fVar17 = fVar10 * fVar26;
      fVar27 = (float)*(undefined8 *)((long)param_3 + 0x44);
      fVar18 = fVar12 * fVar27;
      fVar28 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x44) >> 0x20);
      auVar2._4_4_ = fVar17;
      auVar2._0_4_ = fVar15;
      auVar2._8_4_ = fVar18;
      auVar2._12_4_ = fVar13 * fVar28;
      auVar3._4_4_ = fVar17;
      auVar3._0_4_ = fVar15;
      auVar3._8_4_ = fVar18;
      auVar3._12_4_ = fVar13 * fVar28;
      auVar21 = NEON_ext(auVar2,auVar3,8,1);
      uVar19 = NEON_rev64(auVar21._0_8_,4);
      fVar15 = fVar15 + (float)uVar19 + fVar17 + (float)((ulong)uVar19 >> 0x20);
      auVar22._0_4_ = -(uint)(fVar15 < 0.0);
      auVar22._4_4_ = auVar22._0_4_;
      auVar22._8_4_ = auVar22._0_4_;
      auVar22._12_4_ = auVar22._0_4_;
      auVar21._12_4_ = fVar13;
      auVar21._0_12_ = *pauVar1;
      auVar6._4_4_ = -fVar10;
      auVar6._0_4_ = -fVar16;
      auVar6._8_4_ = -fVar12;
      auVar6._12_4_ = -fVar13;
      auVar23._12_4_ = fVar13;
      auVar23._0_12_ = *pauVar1;
      auVar23 = auVar23 ^ (auVar21 ^ auVar6) & auVar22;
      fVar16 = -fVar15;
      if (0.0 <= fVar15) {
        fVar16 = fVar15;
      }
      if (fVar16 <= 0.9999999) {
        _acosf();
        fVar15 = (1.0 - fVar24) * fVar16;
        _sinf();
        fVar24 = fVar16 * fVar24;
        _sinf();
        _sinf();
        fVar10 = (fVar25 * fVar15 + auVar23._0_4_ * fVar24) / fVar16;
        fVar12 = (fVar26 * fVar15 + auVar23._4_4_ * fVar24) / fVar16;
        fVar13 = (fVar27 * fVar15 + auVar23._8_4_ * fVar24) / fVar16;
        fVar16 = (fVar28 * fVar15 + auVar23._12_4_ * fVar24) / fVar16;
      }
      else {
        fVar16 = 1.0 - fVar24;
        fVar10 = auVar23._0_4_ * fVar24 + fVar25 * fVar16;
        fVar12 = auVar23._4_4_ * fVar24 + fVar26 * fVar16;
        fVar13 = auVar23._8_4_ * fVar24 + fVar27 * fVar16;
        fVar16 = auVar23._12_4_ * fVar24 + fVar28 * fVar16;
      }
      *(ulong *)((long)param_3 + 0x44) = CONCAT44(fVar16,fVar13);
      *(ulong *)((long)param_3 + 0x3c) = CONCAT44(fVar12,fVar10);
    }
    else {
      *(undefined8 *)((long)param_3 + 0x44) = *(undefined8 *)((long)param_3 + 0x14);
      *(undefined8 *)((long)param_3 + 0x3c) = *(undefined8 *)((long)param_3 + 0xc);
      param_3[7] = param_3[1];
      param_3[6] = *param_3;
      *(undefined1 *)((long)param_3 + 0x4c) = 1;
      uVar20 = param_3[6];
      fVar32 = *(float *)(param_3 + 7);
      fVar13 = (float)*(undefined8 *)((long)param_3 + 0x44);
      fVar16 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x44) >> 0x20);
      fVar10 = (float)*(undefined8 *)((long)param_3 + 0x3c);
      fVar12 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x3c) >> 0x20);
    }
    param_1 = param_1 - (double)param_3[4];
    dVar29 = 0.1;
    if (param_1 <= 0.1) {
      dVar29 = param_1;
    }
    dVar11 = 0.05305164769729845;
    if (0.0 <= param_1) {
      dVar11 = dVar29 + 0.05305164769729845;
    }
    fVar24 = (float)dVar11;
    fVar14 = fVar14 * fVar9 * fVar24;
    fVar9 = -15.0;
    if (-15.0 <= fVar14) {
      fVar9 = fVar14;
    }
    fVar14 = 15.0;
    if (fVar9 <= 15.0) {
      fVar14 = fVar9;
    }
    fVar30 = fVar30 * fVar24;
    fVar31 = fVar31 * fVar24;
    uVar7 = NEON_fmov(0xc1700000,4);
    uVar7 = CONCAT44(fVar31,fVar30) ^
            (CONCAT44(fVar31,fVar30) ^ uVar7) &
            CONCAT44(-(uint)(fVar31 < (float)(uVar7 >> 0x20)),-(uint)(fVar30 < (float)uVar7));
    uVar8 = NEON_fmov(0x41700000,4);
    uVar7 = uVar7 ^ (uVar7 ^ uVar8) &
                    CONCAT44(-(uint)((float)(uVar8 >> 0x20) < (float)(uVar7 >> 0x20)),
                             -(uint)((float)uVar8 < (float)uVar7));
    *param_2 = CONCAT44((float)((ulong)uVar20 >> 0x20) + (float)(uVar7 >> 0x20),
                        (float)uVar20 + (float)uVar7);
    *(float *)(param_2 + 1) = fVar32 + fVar14;
    fVar9 = fVar10 * fVar10;
    fVar14 = fVar12 * fVar12;
    auVar4._4_4_ = fVar14;
    auVar4._0_4_ = fVar9;
    auVar4._8_4_ = fVar13 * fVar13;
    auVar4._12_4_ = fVar16 * fVar16;
    auVar5._4_4_ = fVar14;
    auVar5._0_4_ = fVar9;
    auVar5._8_4_ = fVar13 * fVar13;
    auVar5._12_4_ = fVar16 * fVar16;
    auVar21 = NEON_ext(auVar4,auVar5,8,1);
    uVar20 = NEON_rev64(auVar21._0_8_,4);
    fVar9 = fVar9 + (float)uVar20 + fVar14 + (float)((ulong)uVar20 >> 0x20);
    if (fVar9 == 0.0) {
      fVar16 = 1.0;
      fVar10 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
    }
    else {
      fVar9 = 1.0 / SQRT(fVar9);
      fVar10 = fVar10 * fVar9;
      fVar12 = fVar12 * fVar9;
      fVar13 = fVar13 * fVar9;
      fVar16 = fVar16 * fVar9;
    }
    *(float *)((long)param_2 + 0xc) = fVar10;
    *(float *)(param_2 + 2) = fVar12;
    *(float *)((long)param_2 + 0x14) = fVar13;
    *(float *)(param_2 + 3) = fVar16;
  }
  return;
}



/* Entry: 10a595144; end: 10a5951f7;  */

float FUN_10a595144(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  fVar2 = param_1[3] * param_1[3] + fVar1 * fVar1 +
          param_1[1] * param_1[1] + param_1[2] * param_1[2];
  if (fVar2 != 0.0) {
    return fVar1 * (1.0 / SQRT(fVar2));
  }
  return 0.0;
}



/* Entry: 10a5951f8; end: 10a5953df;  */

undefined ***
FUN_10a5951f8(undefined ***param_1,code **param_2,code **param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined8 ****ppppuVar2;
  undefined **ppuVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  code **ppcVar12;
  code **ppcVar13;
  long lVar14;
  code *pcVar15;
  code **unaff_x21;
  undefined8 ***apppuStack_120 [2];
  char cStack_109;
  undefined1 uStack_101;
  code **ppcStack_100;
  code **ppcStack_f8;
  code **ppcStack_f0;
  undefined ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  code *pcStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar13 = param_2;
  if ((param_1 == (undefined ***)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    pppuVar8 = param_1;
    if ((param_1 != (undefined ***)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      uStack_d0 = *(undefined4 *)param_4;
      uStack_cc = *(undefined4 *)((long)param_4 + 4);
      (*(code *)*param_1)(*(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4),
                          *(undefined4 *)(param_2 + 1),*(undefined4 *)param_3,
                          *(undefined4 *)((long)param_3 + 4),*(undefined4 *)(param_3 + 1),
                          *(undefined4 *)((long)param_3 + 0xc));
      pppuVar8 = param_1;
    }
  }
  else {
    pppuVar7 = param_1;
    ppcVar12 = param_2;
    FUN_10a688b40();
    if (pppuVar7 == (undefined ***)0x0) {
      pppuVar8 = (undefined ***)0x0;
      ppcVar13 = (code **)0x0;
      unaff_x21 = ppcVar12;
      if (ppcVar12 != (code **)0x0) {
        ppuVar11 = *param_1;
        ppuVar3 = param_1[1];
        if (ppuVar3 != (undefined **)0x0) {
          ppuVar1 = ppuVar3 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar5) {
              *ppuVar1 = *ppuVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pcStack_b0 = *param_2;
        uStack_a8 = *(undefined4 *)(param_2 + 1);
        uStack_9c = SUB84(param_3[1],0);
        uStack_98 = (undefined4)((ulong)param_3[1] >> 0x20);
        uStack_a4 = SUB84(*param_3,0);
        uStack_a0 = (undefined4)((ulong)*param_3 >> 0x20);
        uStack_94 = (undefined4)*param_4;
        uStack_90 = (undefined4)((ulong)*param_4 >> 0x20);
        pcStack_88 = FUN_10a5c2540;
        ppuStack_80 = &PTR_FUN_110bf7b48;
        puVar9 = (undefined8 *)0x38;
        ppuStack_c0 = ppuVar11;
        ppuStack_b8 = ppuVar3;
        __Znwm();
        param_3 = &pcStack_88;
        *puVar9 = ppuVar11;
        puVar9[1] = ppuVar3;
        ppuStack_c0 = (undefined **)0x0;
        ppuStack_b8 = (undefined **)0x0;
        puVar9[3] = CONCAT44(uStack_a4,uStack_a8);
        puVar9[2] = pcStack_b0;
        puVar9[5] = CONCAT44(uStack_94,uStack_98);
        puVar9[4] = CONCAT44(uStack_9c,uStack_a0);
        *(undefined4 *)(puVar9 + 6) = uStack_90;
        ppcVar13 = &pcStack_88;
        puStack_78 = puVar9;
        FUN_10a4634ec(ppcVar12);
        pppuVar8 = &ppuStack_80;
        (*(code *)*ppuStack_80)();
      }
    }
    else {
      *pppuVar7 = (undefined **)CONCAT44((int)((ulong)*pppuVar7 >> 0x20) + 1,(int)*pppuVar7 + 1);
      pppuVar8 = (undefined ***)*param_1;
      FUN_10a5c2354(pppuVar8,param_2,param_3,param_4);
      iVar6 = *(int *)((long)pppuVar7 + 4) + -1;
      *(int *)((long)pppuVar7 + 4) = iVar6;
      if (iVar6 == 0) {
        *(undefined4 *)pppuVar7 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar8;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(param_3 + 1);
  func_0x00010a004dac(&ppuStack_c0);
  pppuVar7 = pppuVar8;
  __Unwind_Resume();
  pcStack_d8 = FUN_10a5953e0;
  pppuVar10 = pppuVar7;
  ppcStack_100 = param_2;
  ppcStack_f8 = unaff_x21;
  ppcStack_f0 = param_3;
  pppuStack_e8 = pppuVar8;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_10a03e114();
  pppuVar8 = pppuVar10 + 4;
  *pppuVar10 = &PTR_DAT_110bf6ae8;
  uStack_101 = 1;
  FUN_10a549930(pppuVar8,apppuStack_120,&uStack_101);
  FUN_10a5ae998(pppuVar7[1],&PTR_DAT_110b9fab0,ppcVar13,pppuVar7);
  lVar14 = *(long *)(ppcVar13[0x20] + 0x268);
  if ((lVar14 != 0) && ((*(byte *)(lVar14 + 0x10) >> 4 & 1) != 0)) {
    ppuVar11 = *pppuVar8;
    FUN_10aca1b2c(ppuVar11,*(ulong *)(*(long *)(lVar14 + 0x80) + 0x10) & 0xfffffffffffffffc);
    if ((int)ppuVar11 == 0) {
      if ((uRam000000011330a9e8 & 1) != 0) {
        pcVar15 = ppcVar13[0x20] + 0x208;
        if ((char)ppcVar13[0x20][0x21f] < '\0') {
          pcVar15 = *(code **)pcVar15;
        }
        func_0x00010ae06f08(0,1,&UNK_10f6642b4,&UNK_10f6642ec,0x1a,&UNK_10f664366,param_7,param_8,
                            pcVar15);
      }
    }
    else if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
      pcVar15 = ppcVar13[0x20] + 0x208;
      if ((char)ppcVar13[0x20][0x21f] < '\0') {
        pcVar15 = *(code **)pcVar15;
      }
      func_0x00010ae06f08(1,4,&UNK_10f6642b4,&UNK_10f6642ec,0x16,&UNK_10f66432f,param_7,param_8,
                          pcVar15);
      if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
        (**(code **)(**pppuVar8 + 0x30))(apppuStack_120);
        ppppuVar2 = (undefined8 ****)apppuStack_120[0];
        if (-1 < cStack_109) {
          ppppuVar2 = apppuStack_120;
        }
        func_0x00010ae06f08(1,4,&UNK_10f6642b4,&UNK_10f6642ec,0x17,&UNK_10f63757c,param_7,param_8,
                            ppppuVar2);
        if (cStack_109 < '\0') {
          __ZdlPv(apppuStack_120[0]);
        }
      }
    }
  }
  return pppuVar7;
}



/* Entry: 10a5953e0; end: 10a5955e3;  */

undefined8 * FUN_10a5953e0(undefined8 *param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 **appuStack_50 [2];
  char cStack_39;
  undefined1 uStack_31;
  
  puVar2 = param_1;
  FUN_10a03e114();
  puVar6 = puVar2 + 4;
  *puVar2 = &PTR_DAT_110bf6ae8;
  uStack_31 = 1;
  FUN_10a549930(puVar6,appuStack_50,&uStack_31);
  FUN_10a5ae998(param_1[1],&PTR_DAT_110b9fab0,param_2,param_1);
  lVar4 = *(long *)(*(long *)(param_2 + 0x100) + 0x268);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x10) >> 4 & 1) != 0)) {
    uVar3 = *puVar6;
    FUN_10aca1b2c(uVar3,*(ulong *)(*(long *)(lVar4 + 0x80) + 0x10) & 0xfffffffffffffffc);
    if ((int)uVar3 == 0) {
      if ((uRam000000011330a9e8 & 1) != 0) {
        plVar5 = (long *)(*(long *)(param_2 + 0x100) + 0x208);
        if (*(char *)(*(long *)(param_2 + 0x100) + 0x21f) < '\0') {
          plVar5 = (long *)*plVar5;
        }
        func_0x00010ae06f08(0,1,&UNK_10f6642b4,&UNK_10f6642ec,0x1a,&UNK_10f664366,in_x6,in_x7,plVar5
                           );
      }
    }
    else if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x100) + 0x208);
      if (*(char *)(*(long *)(param_2 + 0x100) + 0x21f) < '\0') {
        plVar5 = (long *)*plVar5;
      }
      func_0x00010ae06f08(1,4,&UNK_10f6642b4,&UNK_10f6642ec,0x16,&UNK_10f66432f,in_x6,in_x7,plVar5);
      if (((byte)uRam000000011330a9e8 >> 2 & 1) != 0) {
        (**(code **)(*(long *)*puVar6 + 0x30))(appuStack_50);
        pppuVar1 = (undefined8 ***)appuStack_50[0];
        if (-1 < cStack_39) {
          pppuVar1 = appuStack_50;
        }
        func_0x00010ae06f08(1,4,&UNK_10f6642b4,&UNK_10f6642ec,0x17,&UNK_10f63757c,in_x6,in_x7,
                            pppuVar1);
        if (cStack_39 < '\0') {
          __ZdlPv(appuStack_50[0]);
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10a5955e4; end: 10a5955eb;  */

void FUN_10a5955e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  lVar4 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(lVar4 + 0x6c) = 0x48;
  if (*(char *)(*(long *)(lVar4 + 200) + 8) == '\x01') {
    FUN_10a54a030(auStack_30,lVar4 + 0x28);
    FUN_10a5b8b84(lVar4 + 0xc0,auStack_30);
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
  FUN_10a5b8c10(lVar4 + 0x38);
  return;
}



/* Entry: 10a5955ec; end: 10a595693;  */

void FUN_10a5955ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  *(undefined4 *)(param_1 + 0x6c) = 0x48;
  if (*(char *)(*(long *)(param_1 + 200) + 8) == '\x01') {
    FUN_10a54a030(auStack_30,param_1 + 0x28);
    FUN_10a5b8b84(param_1 + 0xc0,auStack_30);
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
  }
  FUN_10a5b8c10(param_1 + 0x38);
  return;
}



/* Entry: 10a595694; end: 10a596207;  */

/* WARNING: Removing unreachable block (ram,0x00010a595bb0) */
/* WARNING: Removing unreachable block (ram,0x00010a595ba0) */
/* WARNING: Removing unreachable block (ram,0x00010a595bc0) */

undefined1  [16] FUN_10a595694(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  char acStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  byte abStack_198 [8];
  long lStack_190;
  char acStack_188 [8];
  long lStack_180;
  char acStack_178 [8];
  long lStack_170;
  char acStack_168 [8];
  long lStack_160;
  uint uStack_158;
  undefined4 uStack_154;
  char cStack_141;
  char acStack_140 [8];
  long lStack_138;
  char acStack_130 [8];
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  byte bStack_f0;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 ***pppuStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  undefined8 ***pppuStack_a0;
  ulong uStack_98;
  byte bStack_89;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(&pppuStack_a0,&UNK_10f6643b4);
  func_0x000107c2b054(&pppuStack_b8,&UNK_10f6643c3);
  FUN_10a08d2e0(auStack_e8,param_1);
  if (-1 < (char)bStack_a1) {
    uStack_b0 = (ulong)bStack_a1;
    pppuStack_b8 = &pppuStack_b8;
  }
  puVar4 = auStack_e8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuStack_b8,uStack_b0);
  uStack_118 = puVar4[1];
  uStack_120 = *puVar4;
  lStack_110 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (-1 < (char)bStack_89) {
    uStack_98 = (ulong)bStack_89;
    pppuStack_a0 = &pppuStack_a0;
  }
  puVar4 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar4,pppuStack_a0,uStack_98);
  uStack_c8 = puVar4[1];
  uStack_d0 = *puVar4;
  uStack_c0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_e8[0]);
  }
  FUN_10a0f1b8c(&uStack_120,&uStack_d0,4);
  if ((bStack_f0 & 1) == 0) {
    uVar15 = 0;
    uVar11 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar9 = 0;
    uVar18 = 0;
    uVar16 = 0;
    uVar17 = 0;
  }
  else {
    FUN_10a0f20c0(auStack_e8,&uStack_120);
    plStack_70 = (long *)0x0;
    FUN_109fc89b4(acStack_130,auStack_e8,alStack_88,0,0);
    if (plStack_70 == alStack_88) {
      lVar8 = 0x20;
LAB_10a595814:
      (**(code **)(*plStack_70 + lVar8))();
    }
    else if (plStack_70 != (long *)0x0) {
      lVar8 = 0x28;
      goto LAB_10a595814;
    }
    if (acStack_130[0] == '\t') goto LAB_10a596024;
    func_0x000107c2b054(&uStack_158,&DAT_10f2c3ece);
    pcVar5 = acStack_130;
    func_0x0001094947d8(pcVar5,&uStack_158);
    func_0x000109381b20(acStack_140,pcVar5);
    if (cStack_141 < '\0') {
      __ZdlPv(CONCAT44(uStack_154,uStack_158));
    }
    acStack_168[0] = '\0';
    lStack_160 = 0;
    if (acStack_140[0] == '\x01') {
      lVar8 = lStack_138;
      FUN_10a5c258c(lStack_138,&DAT_10f33d2cc);
      if (lVar8 != 0) {
        func_0x000107c2b054(&uStack_158,&DAT_10f33d2cc);
        pcVar5 = acStack_140;
        func_0x0001094947d8(pcVar5,&uStack_158);
        func_0x000109381b20(acStack_178,pcVar5);
        lVar8 = lStack_160;
        cVar2 = acStack_168[0];
        acStack_168[0] = acStack_178[0];
        acStack_178[0] = cVar2;
        lStack_160 = lStack_170;
        lStack_170 = lVar8;
        func_0x000109380ffc(&lStack_170);
        if (cStack_141 < '\0') {
          __ZdlPv(CONCAT44(uStack_154,uStack_158));
        }
      }
      if (acStack_168[0] == '\0') {
        if (acStack_140[0] != '\x01') goto LAB_10a595b10;
        lVar8 = lStack_138;
        FUN_10a5c258c(lStack_138,"config");
        if (lVar8 != 0) {
          func_0x000107c2b054(&uStack_158,"config");
          pcVar5 = acStack_140;
          func_0x0001094947d8(pcVar5,&uStack_158);
          func_0x000109381b20(acStack_188,pcVar5);
          lVar8 = lStack_160;
          cVar2 = acStack_168[0];
          acStack_168[0] = acStack_188[0];
          acStack_188[0] = cVar2;
          lStack_160 = lStack_180;
          lStack_180 = lVar8;
          func_0x000109380ffc(&lStack_180);
          if (cStack_141 < '\0') {
            __ZdlPv(CONCAT44(uStack_154,uStack_158));
          }
        }
        if (acStack_168[0] != '\0') goto LAB_10a5958fc;
        if ((acStack_140[0] != '\x01') || (func_0x00010a5c2938(), lStack_138 == 0))
        goto LAB_10a595b10;
        func_0x000107c2b054(&uStack_158,&DAT_10f3a3972);
        pcVar5 = acStack_140;
        func_0x0001094947d8(pcVar5,&uStack_158);
        func_0x000109381b20(abStack_198,pcVar5);
        if (cStack_141 < '\0') {
          __ZdlPv(CONCAT44(uStack_154,uStack_158));
        }
        if ((abStack_198[0] == 1) && (func_0x00010a5c2a78(), lStack_190 != 0)) {
          func_0x000107c2b054(&uStack_158,&UNK_10f664448);
          pbVar7 = abStack_198;
          func_0x0001094947d8(pbVar7,&uStack_158);
          func_0x000109381b20(acStack_1a8,pbVar7);
          if (cStack_141 < '\0') {
            __ZdlPv(CONCAT44(uStack_154,uStack_158));
          }
          if ((byte)(acStack_1a8[0] - 5U) < 2) {
            func_0x000109407a04(acStack_1a8,&uStack_158);
            uVar16 = (ulong)uStack_158;
          }
          else {
            uVar16 = 0;
          }
          func_0x000109380ffc(auStack_1a0,acStack_1a8[0]);
        }
        else {
          uVar16 = 0;
        }
        func_0x000109380ffc(&lStack_190,abStack_198[0]);
        uVar11 = 0;
        uVar13 = 0;
        uVar14 = 0;
        uVar9 = 0;
        goto LAB_10a595b30;
      }
LAB_10a5958fc:
      if (acStack_168[0] == '\x01') {
        plVar10 = (long *)(lStack_160 + 8);
        plVar12 = (long *)*plVar10;
        if (plVar12 != (long *)0x0) {
LAB_10a595918:
          plVar6 = plVar12 + 4;
          func_0x00010a003d08(plVar6,&UNK_10f6643e6);
          plVar19 = plVar12;
          if ('\0' < (char)plVar6) goto LAB_10a59594c;
          plVar6 = plVar12 + 4;
          func_0x00010a003d08(plVar6,&UNK_10f6643e6);
          if (((uint)plVar6 >> 7 & 1) != 0) {
            plVar19 = plVar12 + 1;
            plVar12 = plVar10;
            goto LAB_10a59594c;
          }
          plVar6 = plVar12;
          for (plVar19 = (long *)*plVar12; plVar19 != (long *)0x0;
              plVar19 = *(long **)((long)plVar19 + (uVar14 >> 4 & 8))) {
            uVar14 = (ulong)(plVar19 + 4);
            func_0x00010a003d08(uVar14,&UNK_10f6643e6);
            if (-1 < (char)uVar14) {
              plVar6 = plVar19;
            }
          }
          for (plVar12 = (long *)plVar12[1]; plVar12 != (long *)0x0;
              plVar12 = *(long **)((long)plVar12 + lVar8)) {
            plVar19 = plVar12 + 4;
            func_0x00010a003d08(plVar19,&UNK_10f6643e6);
            lVar8 = 0;
            plVar1 = plVar12;
            if ((char)plVar19 < '\x01') {
              lVar8 = 8;
              plVar1 = plVar10;
            }
            plVar10 = plVar1;
          }
          if (plVar6 == plVar10) goto LAB_10a595954;
          func_0x000107c2b054(&uStack_158,&UNK_10f6643e6);
          func_0x0001094947d8(acStack_168,&uStack_158);
          func_0x00010938d198();
          uVar11 = (ulong)abStack_198[0];
          if (cStack_141 < '\0') {
            __ZdlPv(CONCAT44(uStack_154,uStack_158));
          }
          goto LAB_10a595958;
        }
      }
LAB_10a595954:
      uVar11 = 0;
LAB_10a595958:
      if (acStack_168[0] != '\x01') goto LAB_10a595b20;
      lVar8 = lStack_160;
      func_0x00010947a85c(lStack_160,&UNK_10f6643f3);
      if (lVar8 == 0) {
        uVar13 = 0;
      }
      else {
        func_0x000107c2b054(&uStack_158,&UNK_10f6643f3);
        func_0x0001094947d8(acStack_168,&uStack_158);
        func_0x00010938d198();
        uVar13 = (ulong)abStack_198[0];
        if (cStack_141 < '\0') {
          __ZdlPv(CONCAT44(uStack_154,uStack_158));
        }
      }
      if (acStack_168[0] != '\x01') goto LAB_10a595b24;
      plVar10 = (long *)(lStack_160 + 8);
      plVar12 = (long *)*plVar10;
      if (plVar12 != (long *)0x0) {
LAB_10a595c3c:
        plVar6 = plVar12 + 4;
        func_0x00010a003d08(plVar6,&UNK_10f664403);
        plVar19 = plVar12;
        if ('\0' < (char)plVar6) goto LAB_10a595c70;
        plVar6 = plVar12 + 4;
        func_0x00010a003d08(plVar6,&UNK_10f664403);
        if (((uint)plVar6 >> 7 & 1) != 0) {
          plVar19 = plVar12 + 1;
          plVar12 = plVar10;
          goto LAB_10a595c70;
        }
        plVar6 = plVar12;
        for (plVar19 = (long *)*plVar12; plVar19 != (long *)0x0;
            plVar19 = *(long **)((long)plVar19 + (uVar14 >> 4 & 8))) {
          uVar14 = (ulong)(plVar19 + 4);
          func_0x00010a003d08(uVar14,&UNK_10f664403);
          if (-1 < (char)uVar14) {
            plVar6 = plVar19;
          }
        }
        for (plVar12 = (long *)plVar12[1]; plVar12 != (long *)0x0;
            plVar12 = *(long **)((long)plVar12 + lVar8)) {
          plVar19 = plVar12 + 4;
          func_0x00010a003d08(plVar19,&UNK_10f664403);
          lVar8 = 0;
          plVar1 = plVar12;
          if ((char)plVar19 < '\x01') {
            lVar8 = 8;
            plVar1 = plVar10;
          }
          plVar10 = plVar1;
        }
        if (plVar6 == plVar10) goto LAB_10a595c78;
        func_0x000107c2b054(&uStack_158,&UNK_10f664403);
        func_0x0001094947d8(acStack_168,&uStack_158);
        func_0x00010938d198();
        uVar14 = (ulong)abStack_198[0];
        if (cStack_141 < '\0') {
          __ZdlPv(CONCAT44(uStack_154,uStack_158));
        }
        goto LAB_10a595c7c;
      }
LAB_10a595c78:
      uVar14 = 0;
LAB_10a595c7c:
      if (acStack_168[0] != '\x01') goto LAB_10a595b28;
      plVar10 = (long *)(lStack_160 + 8);
      plVar12 = (long *)*plVar10;
      if (plVar12 != (long *)0x0) {
LAB_10a595c9c:
        plVar6 = plVar12 + 4;
        func_0x00010a003d08(plVar6,&UNK_10f664416);
        plVar19 = plVar12;
        if ('\0' < (char)plVar6) goto LAB_10a595cd0;
        plVar6 = plVar12 + 4;
        func_0x00010a003d08(plVar6,&UNK_10f664416);
        if (((uint)plVar6 >> 7 & 1) != 0) {
          plVar19 = plVar12 + 1;
          plVar12 = plVar10;
          goto LAB_10a595cd0;
        }
        plVar6 = plVar12;
        for (plVar19 = (long *)*plVar12; plVar19 != (long *)0x0;
            plVar19 = *(long **)((long)plVar19 + (uVar9 >> 4 & 8))) {
          uVar9 = (ulong)(plVar19 + 4);
          func_0x00010a003d08(uVar9,&UNK_10f664416);
          if (-1 < (char)uVar9) {
            plVar6 = plVar19;
          }
        }
        for (plVar12 = (long *)plVar12[1]; plVar12 != (long *)0x0;
            plVar12 = *(long **)((long)plVar12 + lVar8)) {
          plVar19 = plVar12 + 4;
          func_0x00010a003d08(plVar19,&UNK_10f664416);
          lVar8 = 0;
          plVar1 = plVar12;
          if ((char)plVar19 < '\x01') {
            lVar8 = 8;
            plVar1 = plVar10;
          }
          plVar10 = plVar1;
        }
        if (plVar6 == plVar10) goto LAB_10a595cd8;
        func_0x000107c2b054(&uStack_158,&UNK_10f664416);
        func_0x0001094947d8(acStack_168,&uStack_158);
        func_0x00010938d198();
        uVar9 = (ulong)abStack_198[0];
        if (cStack_141 < '\0') {
          __ZdlPv(CONCAT44(uStack_154,uStack_158));
        }
        goto LAB_10a595cdc;
      }
LAB_10a595cd8:
      uVar9 = 0;
LAB_10a595cdc:
      if (acStack_168[0] != '\x01') goto LAB_10a595b2c;
      lVar8 = lStack_160;
      func_0x00010a5c26b8();
      if (lVar8 == 0) {
        uVar18 = 1;
      }
      else {
        func_0x000107c2b054(&uStack_158,&UNK_10f66442a);
        func_0x0001094947d8(acStack_168,&uStack_158);
        func_0x00010938d198();
        uVar18 = (ulong)abStack_198[0];
        if (cStack_141 < '\0') {
          __ZdlPv(CONCAT44(uStack_154,uStack_158));
        }
      }
      if ((acStack_168[0] == '\x01') && (lVar8 = lStack_160, func_0x00010a5c27f8(), lVar8 != 0)) {
        func_0x000107c2b054(&uStack_158,&DAT_10f66443f);
        func_0x0001094947d8(acStack_168,&uStack_158);
        func_0x00010938d198();
        uVar15 = (ulong)abStack_198[0];
        if (cStack_141 < '\0') {
          __ZdlPv(CONCAT44(uStack_154,uStack_158));
        }
      }
      else {
        uVar15 = 0;
      }
      uVar16 = 0;
    }
    else {
LAB_10a595b10:
      uVar11 = 0;
LAB_10a595b20:
      uVar13 = 0;
LAB_10a595b24:
      uVar14 = 0;
LAB_10a595b28:
      uVar9 = 0;
LAB_10a595b2c:
      uVar16 = 0;
LAB_10a595b30:
      uVar15 = 0;
      uVar18 = 1;
    }
    func_0x000109380ffc(&lStack_160,acStack_168[0]);
    func_0x000109380ffc(&lStack_138,acStack_140[0]);
    func_0x000109380ffc(auStack_128,acStack_130[0]);
    if (cStack_d1 < '\0') {
      __ZdlPv(auStack_e8[0]);
    }
    uVar18 = uVar18 << 0x28;
    uVar9 = uVar9 << 0x20;
    uVar14 = uVar14 << 0x18;
    uVar13 = uVar13 << 0x10;
    uVar11 = uVar11 << 8;
    if ((bStack_f0 & 1) != 0) {
      FUN_10a0f1ea0(&uStack_120);
    }
    uVar17 = 0x100000000;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar20._0_8_ = uVar11 | uVar15 | uVar13 | uVar14 | uVar9 | uVar18;
    auVar20._8_8_ = uVar17 | uVar16;
    return auVar20;
  }
  ___stack_chk_fail();
LAB_10a596024:
  FUN_10a00946c(&UNK_10f6643cb);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a596034);
  (*pcVar3)();
LAB_10a59594c:
  plVar10 = plVar12;
  plVar12 = (long *)*plVar19;
  if ((long *)*plVar19 == (long *)0x0) goto LAB_10a595954;
  goto LAB_10a595918;
LAB_10a595c70:
  plVar10 = plVar12;
  plVar12 = (long *)*plVar19;
  if ((long *)*plVar19 == (long *)0x0) goto LAB_10a595c78;
  goto LAB_10a595c3c;
LAB_10a595cd0:
  plVar10 = plVar12;
  plVar12 = (long *)*plVar19;
  if ((long *)*plVar19 == (long *)0x0) goto LAB_10a595cd8;
  goto LAB_10a595c9c;
}



/* Entry: 10a596208; end: 10a5962eb;  */

byte * FUN_10a596208(byte *param_1,ulong param_2)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar3 = param_2;
  FUN_10a595694();
  if ((uVar3 >> 0x20 & 1) != 0) {
    param_1[1] = (byte)(param_2 >> 8);
    param_1[2] = (byte)(param_2 >> 0x10);
    param_1[3] = (byte)(param_2 >> 0x18);
    param_1[4] = (byte)(param_2 >> 0x20);
    param_1[5] = (byte)(param_2 >> 0x28);
    uVar1 = (uint)param_2 | (uint)*param_1;
    *param_1 = (byte)uVar1 & 1;
    *(int *)(param_1 + 8) = (int)uVar3;
    if (((((uint)(param_2 >> 0x28) | (uint)(param_2 >> 8)) & 1) == 0) && ((uVar1 & 1) == 0)) {
      pbVar2 = &UNK_10f664463;
      FUN_10a00946c(&UNK_10f664463);
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        func_0x00010ae06f08(1,8,&UNK_10f6644b5,&UNK_10f664567,0x86,&UNK_10f66459c);
      }
      uRam00000001138350e0 = 0;
      return pbVar2;
    }
    if ((int)uVar3 != 0) {
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        func_0x00010ae06f08(1,8,&UNK_10f6644b5,&UNK_10f6644e9,0x78,&UNK_10f664535,in_x6,in_x7,uVar3)
        ;
        uVar3 = (ulong)*(uint *)(param_1 + 8);
      }
      uRam00000001138350e0 = (undefined4)uVar3;
    }
  }
  return param_1;
}



/* Entry: 10a5962ec; end: 10a59634f;  */

undefined8 FUN_10a5962ec(undefined8 param_1)

{
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f6644b5,&UNK_10f664567,0x86,&UNK_10f66459c);
  }
  uRam00000001138350e0 = 0;
  return param_1;
}



/* Entry: 10a596350; end: 10a5963db;  */

undefined1  [16] FUN_10a596350(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x12;
  auVar1._0_8_ = &UNK_10f666a45;
  return auVar1;
}



/* Entry: 10a5963dc; end: 10a596aab;  */

void FUN_10a5963dc(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f666a45,0x12);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf8160;
  pppuVar2 = (undefined8 ***)&UNK_10f66429f;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bf8160;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f6645cc,FUN_10a5c2bb8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f6645d8,FUN_10a5c2d44,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f6645e1,FUN_10a5c2ea4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f6645f5,FUN_10a5c2fdc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f664608,FUN_10a5c31b8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f66462b,FUN_10a5c3270,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f664651,FUN_10a5c3328,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f664670,FUN_10a5c33e0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f664679,FUN_10a5c3598,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f664686,FUN_10a5c3650,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f664697,FUN_10a5c3708,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f6646ad,FUN_10a5c37c0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f6646be,FUN_10a5c3878,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f6646d6,FUN_10a5c3930,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f6646e7,FUN_10a5c3b78,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f6646fd,FUN_10a5c3c30,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a596a8c;
    FUN_10a054dac(param_1,&UNK_10f66470e,FUN_10a5c3ce8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x100,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f389e6f,FUN_10a5c2bb8,FUN_10a5c3da0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f666a45,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a596a8c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a596a90);
  (*pcVar6)();
}



/* Entry: 10a596aac; end: 10a597187;  */

/* WARNING: Removing unreachable block (ram,0x00010a596c00) */
/* WARNING: Removing unreachable block (ram,0x00010a596c74) */
/* WARNING: Type propagation algorithm not settling */

short *** FUN_10a596aac(short ***param_1,short **param_2)

{
  short *psVar1;
  char cVar2;
  short *******pppppppsVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulong ******ppppppuVar7;
  long *plVar8;
  ulong *******pppppppuVar9;
  short ***pppsVar10;
  short *******pppppppsVar11;
  short ****ppppsVar12;
  short ***pppsVar13;
  undefined1 uVar14;
  short ******ppppppsVar15;
  short *******pppppppsVar16;
  short *psVar17;
  undefined8 *extraout_x8;
  long lVar18;
  int *piVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  short *apsStack_148 [2];
  char cStack_131;
  short *******pppppppsStack_130;
  short *******pppppppsStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  short *******apppppppsStack_f0 [2];
  char cStack_d9;
  long *plStack_d8;
  long *plStack_d0;
  char cStack_c1;
  undefined1 uStack_b9;
  long *plStack_b8;
  ulong *******pppppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = (short **)0x0;
  *param_1 = (short **)&PTR_DAT_110bf6e80;
  param_1[2] = (short **)0x0;
  param_1[3] = param_2;
  pppsVar13 = param_1 + 4;
  param_1[5] = (short **)0x0;
  *pppsVar13 = (short **)0x0;
  param_1[7] = (short **)0x0;
  param_1[6] = (short **)0x0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  param_1[10] = (short **)0x0;
  param_1[9] = (short **)0x0;
  param_1[0xc] = (short **)0x0;
  param_1[0xb] = (short **)0x0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  ppppppsVar15 = (short ******)(param_1 + 0xe);
  param_1[0xf] = (short **)0x0;
  *ppppppsVar15 = (short *****)0x0;
  param_1[0x11] = (short **)0x0;
  param_1[0x10] = (short **)0x0;
  param_1[0x13] = (short **)0x0;
  param_1[0x12] = (short **)0x0;
  param_1[0x14] = (short **)0x0;
  func_0x000107c2b054(apppppppsStack_f0,&UNK_10f664726);
  FUN_10a597188(&plStack_d8,param_1);
  plVar20 = plStack_d8;
  if (plStack_d8 == (long *)0x0) {
    func_0x000107c2b054(&pppppppuStack_b0,&DAT_10f2c6384);
    FUN_10a5b8c64(ppppppsVar15,&pppppppuStack_b0,&uStack_98,1);
  }
  else {
    FUN_10a042718(ppppppsVar15);
    (**(code **)(*plVar20 + 0x10))(&pppppppsStack_130,plVar20);
    pppppppsVar3 = pppppppsStack_128;
    for (pppppppsVar11 = pppppppsStack_130; pppppppsVar11 != pppppppsVar3;
        pppppppsVar11 = pppppppsVar11 + 3) {
      if (*(char *)((long)pppppppsVar11 + 0x17) < '\0') {
        if (pppppppsVar11[1] == (short ******)0x2) {
          pppppppsVar16 = (short *******)*pppppppsVar11;
          goto LAB_10a596bc4;
        }
LAB_10a596bd0:
        uVar14 = 0;
        pppppppuStack_b0 = (ulong *******)((ulong)pppppppuStack_b0 & 0xffffffffffffff00);
        pppppppsVar16 = pppppppsVar11;
      }
      else {
        pppppppsVar16 = pppppppsVar11;
        if (*(char *)((long)pppppppsVar11 + 0x17) != '\x02') goto LAB_10a596bd0;
LAB_10a596bc4:
        if (*(short *)pppppppsVar16 != 0x6e62) goto LAB_10a596bd0;
        pppppppsVar16 = (short *******)&pppppppuStack_b0;
        func_0x000107c2b054(&pppppppuStack_b0,&DAT_10f490e00);
        uVar14 = 1;
      }
      uStack_98 = CONCAT71(uStack_98._1_7_,uVar14);
      FUN_10a0b4ec0(ppppppsVar15,pppppppsVar16);
    }
    pppppppuStack_b0 = (ulong *******)&pppppppsStack_130;
    FUN_10a0426d8(&pppppppuStack_b0);
  }
  if (plStack_d0 != (long *)0x0) {
    plVar20 = plStack_d0 + 1;
    do {
      lVar18 = *plVar20;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
    }
  }
  FUN_10a3dda08(&pppppppsStack_130,param_2);
  pppppppsVar11 = pppppppsStack_130;
  FUN_10a9dd42c(&plStack_d8,pppppppsStack_130,apppppppsStack_f0);
  iVar6 = (int)&plStack_d8;
  FUN_10ad01a04();
  if (iVar6 == 0) {
    uStack_88 = 0;
    uStack_a8 = 0;
    pppppppuStack_b0 = (ulong *******)0x0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
  }
  else {
    FUN_10a9dd3c4(&pppppppuStack_b0,pppppppsVar11,apppppppsStack_f0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(plStack_d8);
  }
  if ((char)lStack_120 == '\x01') {
    __ZNSt3__15mutex6unlockEv(pppppppsStack_128);
  }
  if ((pppppppuStack_b0 != (ulong *******)0x0) && (*(uint *)(pppppppuStack_b0 + 1) < 5)) {
    ppppppuVar7 = *pppppppuStack_b0;
    (*(code *)(*ppppppuVar7)[2])();
    if (((ulong)ppppppuVar7 & 1) != 0) {
      FUN_10a0f20c0(&plStack_d8,&pppppppuStack_b0);
      lStack_108 = 0;
      lStack_100 = 0;
      uStack_f8 = 0;
      func_0x00010983ac24(&lStack_108,&plStack_d8);
      if (lStack_100 != lStack_108) {
        uVar23 = 0;
        do {
          func_0x0001098390a4(&UNK_10f63c7bf,0x16d,&UNK_10f650e37,1);
          if ((ulong)(lStack_100 - lStack_108 >> 3) <= (uVar23 & 0xffffffff)) {
            FUN_10a34e7b4();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a596ffc);
            (*pcVar4)();
          }
          piVar19 = *(int **)(lStack_108 + (uVar23 & 0xffffffff) * 8);
          func_0x0001098390a4(&UNK_10f63c7bf,0x1e5,&UNK_10f6514b1,*piVar19 == 5);
          plVar22 = *(long **)(piVar19 + 2);
          func_0x000107c2b054(&pppppppsStack_130,"key");
          plVar20 = plVar22;
          FUN_10a10a278(plVar22,&pppppppsStack_130);
          if (plVar22 + 1 == plVar20) {
            bVar5 = false;
          }
          else {
            bVar5 = *(int *)plVar20[7] == 1;
          }
          if (lStack_120 < 0) {
            __ZdlPv(pppppppsStack_130);
          }
          if (bVar5) {
            pppppppsStack_128 = (short *******)0x0;
            pppppppsStack_130 = (short *******)0x0;
            uStack_118 = 0;
            lStack_120 = 0;
            uStack_110 = 0x3f800000;
            plVar20 = (long *)*plVar22;
            while (plVar20 != plVar22 + 1) {
              psVar1 = (short *)(plVar20 + 4);
              if (*(char *)((long)plVar20 + 0x37) < '\0') {
                if (plVar20[5] == 3) {
                  psVar17 = *(short **)psVar1;
                  goto LAB_10a596e94;
                }
LAB_10a596ea8:
                plVar8 = plVar22;
                FUN_10a0f5104(plVar22,psVar1);
                pppppppuVar9 = (ulong *******)&pppppppsStack_130;
                apsStack_148[0] = psVar1;
                FUN_109cf993c(pppppppuVar9,psVar1,&UNK_10dd5b8f9,apsStack_148,&plStack_b8);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (pppppppuVar9 + 5,plVar8);
              }
              else {
                psVar17 = psVar1;
                if (*(char *)((long)plVar20 + 0x37) != '\x03') goto LAB_10a596ea8;
LAB_10a596e94:
                if (*psVar17 != 0x656b || (char)psVar17[1] != 'y') goto LAB_10a596ea8;
              }
              plVar8 = (long *)plVar20[1];
              plVar21 = plVar20;
              if ((long *)plVar20[1] == (long *)0x0) {
                do {
                  plVar20 = (long *)plVar21[2];
                  bVar5 = (long *)*plVar20 != plVar21;
                  plVar21 = plVar20;
                } while (bVar5);
              }
              else {
                do {
                  plVar20 = plVar8;
                  plVar8 = (long *)*plVar20;
                } while ((long *)*plVar20 != (long *)0x0);
              }
            }
            func_0x000107c2b054(apsStack_148,"key");
            FUN_10a0f5104(plVar22,apsStack_148);
            pppsVar10 = pppsVar13;
            plStack_b8 = plVar22;
            FUN_10a5c404c(pppsVar13,plVar22,&UNK_10dd5b8f9,&plStack_b8,&uStack_b9);
            func_0x0001094f977c(pppsVar10 + 5,&pppppppsStack_130);
            if (cStack_131 < '\0') {
              __ZdlPv(apsStack_148[0]);
            }
            func_0x000104c4f944(&pppppppsStack_130);
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < (ulong)(lStack_100 - lStack_108 >> 3));
      }
      func_0x000109839c54(&lStack_108);
      if (cStack_c1 < '\0') {
        __ZdlPv(plStack_d8);
      }
    }
  }
  pppppppsVar11 = (short *******)&pppppppuStack_b0;
  FUN_10a0f1ea0();
  if (cStack_d9 < '\0') {
    pppppppsVar11 = apppppppsStack_f0[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    func_0x000109839c54(&lStack_108);
    if (cStack_c1 < '\0') {
      __ZdlPv(plStack_d8);
    }
    FUN_10a0f1ea0(&pppppppuStack_b0);
    if (cStack_d9 < '\0') {
      __ZdlPv(apppppppsStack_f0[0]);
    }
    pppppppuStack_b0 = (ulong *******)(param_1 + 0x11);
    FUN_10a1033c4(&pppppppuStack_b0);
    pppppppuStack_b0 = (ulong *******)ppppppsVar15;
    FUN_10a0426d8(&pppppppuStack_b0);
    FUN_10a5c3f98(param_1 + 9);
    FUN_10a5c3ee8(pppsVar13);
    *param_1 = (short **)&PTR_DAT_110b17898;
    func_0x00010a004dac(param_1 + 1);
    __Unwind_Resume();
    ppppsVar12 = pppppppsVar11[3][0x20][0x39];
    (*(code *)(*ppppsVar12)[0xd])();
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    pppsVar13 = ppppsVar12[1];
    if (pppsVar13 != (short ***)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      extraout_x8[1] = pppsVar13;
      if (pppsVar13 != (short ***)0x0) {
        *extraout_x8 = *ppppsVar12;
      }
    }
    return pppsVar13;
  }
  return param_1;
}



/* Entry: 10a597188; end: 10a5971df;  */

void FUN_10a597188(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(*(long *)(*(long *)(param_2 + 0x18) + 0x100) + 0x1c8);
  (**(code **)(*plVar1 + 0x68))();
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = plVar1[1];
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      *param_1 = *plVar1;
    }
  }
  return;
}



/* Entry: 10a5971e0; end: 10a597217;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a5971e0(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = *(long **)(param_2 + 0x70);
  if (*(long **)(param_2 + 0x78) == plVar1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a597218);
    (*pcVar3)();
  }
  if (*(char *)((long)plVar1 + 0x17) < '\0') {
    lVar4 = *plVar1;
    uVar2 = plVar1[1];
    if (0x16 < uVar2) {
      if (uVar2 < 0x7ffffffffffffff7) {
        lVar4 = 0x19;
        if ((uVar2 | 7) != 0x17) {
          lVar4 = (uVar2 | 7) + 1;
        }
      }
      else {
        func_0x000104bd47d4();
      }
      func_0x000107c60e20(lVar4);
      return;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_1,lVar4,uVar2 + 1);
    return;
  }
  lVar5 = plVar1[1];
  lVar4 = *plVar1;
  param_1[2] = plVar1[2];
  param_1[1] = lVar5;
  *param_1 = lVar4;
  return;
}



/* Entry: 10a597218; end: 10a597327;  */

void FUN_10a597218(long param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 *extraout_x8;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined1 uStack_a1;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&lStack_50,*param_2,param_2[1]);
  }
  else {
    lStack_48 = param_2[1];
    lStack_50 = *param_2;
    lStack_40 = param_2[2];
  }
  FUN_10a5b8c64(param_1 + 0x70,&lStack_50,&lStack_38,1);
  if (lStack_40 < 0) {
    __ZdlPv(lStack_50);
  }
  lVar2 = *(long *)(param_1 + 0x88);
  lVar6 = *(long *)(param_1 + 0x90);
  while (lVar6 != lVar2) {
    lVar6 = lVar6 + -0x18;
    lStack_50 = lVar6;
    func_0x00010a10356c(&lStack_50);
  }
  *(long *)(param_1 + 0x90) = lVar2;
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0xa90) + 0x18);
  func_0x00010a9eec38();
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*(char *)((long)plVar4 + 0x17) < '\0') {
    if (*(long *)((long)plVar4 + 8) != 0) {
      pcVar5 = (char *)*plVar4;
      goto LAB_10a597370;
    }
  }
  else {
    pcVar5 = (char *)plVar4;
    if (*(char *)((long)plVar4 + 0x17) == '\0') goto LAB_10a597464;
LAB_10a597370:
    if (*pcVar5 == '@') {
      lVar6 = lVar2 + 0x20;
      FUN_10a5c4524(lVar6,plVar4);
      if (lVar6 != 0) {
        lVar6 = lVar2 + 0x20;
        FUN_10a5c4524(lVar6,plVar4);
        pcVar1 = *(char **)(lVar2 + 0x78);
        for (pcVar5 = *(char **)(lVar2 + 0x70); pcVar5 != pcVar1; pcVar5 = pcVar5 + 0x18) {
          lVar2 = lVar6 + 0x28;
          func_0x000104c5e210(lVar2,pcVar5);
          if (lVar2 != 0) {
            lVar6 = lVar6 + 0x28;
            func_0x000104c5e210(lVar6,pcVar5);
            if (-1 < *(char *)(lVar6 + 0x3f)) {
              uVar9 = *(undefined8 *)(lVar6 + 0x30);
              uVar8 = *(undefined8 *)(lVar6 + 0x28);
              extraout_x8[2] = *(undefined8 *)(lVar6 + 0x38);
              extraout_x8[1] = uVar9;
              *extraout_x8 = uVar8;
              return;
            }
            uVar8 = *(undefined8 *)(lVar6 + 0x28);
            uVar9 = *(undefined8 *)(lVar6 + 0x30);
            goto LAB_10a59747c;
          }
          lVar2 = (long)pcVar5[0x17];
          pcVar7 = pcVar5;
          if (lVar2 < 0) {
            lVar2 = *(long *)(pcVar5 + 8);
            pcVar7 = *(char **)pcVar5;
          }
          if (0 < lVar2) {
            pcVar3 = pcVar7;
            while (_memchr(pcVar3,0x2d), pcVar3 != (char *)0x0) {
              if (*pcVar3 == '-') {
                if ((pcVar3 != pcVar7 + lVar2) && ((long)pcVar3 - (long)pcVar7 != -1)) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                            (auStack_c0,pcVar5,0,(long)pcVar3 - (long)pcVar7,&uStack_a1);
                  lVar2 = lVar6 + 0x28;
                  func_0x000104c5e210(lVar2,auStack_c0);
                  if (lVar2 != 0) {
                    lVar6 = lVar6 + 0x28;
                    func_0x000104c5e210(lVar6,auStack_c0);
                    if (*(char *)(lVar6 + 0x3f) < '\0') {
                      func_0x000107c3192c(extraout_x8,*(undefined8 *)(lVar6 + 0x28),
                                          *(undefined8 *)(lVar6 + 0x30));
                    }
                    else {
                      uVar9 = *(undefined8 *)(lVar6 + 0x30);
                      uVar8 = *(undefined8 *)(lVar6 + 0x28);
                      extraout_x8[2] = *(undefined8 *)(lVar6 + 0x38);
                      extraout_x8[1] = uVar9;
                      *extraout_x8 = uVar8;
                    }
                    if (-1 < cStack_a9) {
                      return;
                    }
                    __ZdlPv(auStack_c0[0]);
                    return;
                  }
                  if (cStack_a9 < '\0') {
                    __ZdlPv(auStack_c0[0]);
                  }
                }
                break;
              }
              pcVar3 = pcVar3 + 1;
              if ((long)(pcVar7 + lVar2) - (long)pcVar3 < 1) break;
            }
          }
        }
      }
    }
  }
  if (*(char *)((long)plVar4 + 0x17) < '\0') {
    uVar8 = *plVar4;
    uVar9 = *(undefined8 *)((long)plVar4 + 8);
LAB_10a59747c:
    func_0x000107c3192c(extraout_x8,uVar8,uVar9);
    return;
  }
LAB_10a597464:
  uVar8 = *plVar4;
  extraout_x8[1] = *(undefined8 *)((long)plVar4 + 8);
  *extraout_x8 = uVar8;
  extraout_x8[2] = *(undefined8 *)((long)plVar4 + 0x10);
  return;
}



/* Entry: 10a597328; end: 10a597537;  */

void FUN_10a597328(undefined8 *param_1,long param_2,char *param_3)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 uStack_51;
  
  if (param_3[0x17] < '\0') {
    if (*(long *)(param_3 + 8) != 0) {
      pcVar5 = *(char **)param_3;
      goto LAB_10a597370;
    }
  }
  else {
    pcVar5 = param_3;
    if (param_3[0x17] == '\0') goto LAB_10a597464;
LAB_10a597370:
    if (*pcVar5 == '@') {
      lVar2 = param_2 + 0x20;
      FUN_10a5c4524(lVar2,param_3);
      if (lVar2 != 0) {
        lVar2 = param_2 + 0x20;
        FUN_10a5c4524(lVar2,param_3);
        pcVar1 = *(char **)(param_2 + 0x78);
        for (pcVar5 = *(char **)(param_2 + 0x70); pcVar5 != pcVar1; pcVar5 = pcVar5 + 0x18) {
          lVar4 = lVar2 + 0x28;
          func_0x000104c5e210(lVar4,pcVar5);
          if (lVar4 != 0) {
            lVar2 = lVar2 + 0x28;
            func_0x000104c5e210(lVar2,pcVar5);
            if (-1 < *(char *)(lVar2 + 0x3f)) {
              uVar8 = *(undefined8 *)(lVar2 + 0x30);
              uVar7 = *(undefined8 *)(lVar2 + 0x28);
              param_1[2] = *(undefined8 *)(lVar2 + 0x38);
              param_1[1] = uVar8;
              *param_1 = uVar7;
              return;
            }
            uVar7 = *(undefined8 *)(lVar2 + 0x28);
            uVar8 = *(undefined8 *)(lVar2 + 0x30);
            goto LAB_10a59747c;
          }
          lVar4 = (long)pcVar5[0x17];
          pcVar6 = pcVar5;
          if (lVar4 < 0) {
            lVar4 = *(long *)(pcVar5 + 8);
            pcVar6 = *(char **)pcVar5;
          }
          if (0 < lVar4) {
            pcVar3 = pcVar6;
            while (_memchr(pcVar3,0x2d), pcVar3 != (char *)0x0) {
              if (*pcVar3 == '-') {
                if ((pcVar3 != pcVar6 + lVar4) && ((long)pcVar3 - (long)pcVar6 != -1)) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                            (auStack_70,pcVar5,0,(long)pcVar3 - (long)pcVar6,&uStack_51);
                  lVar4 = lVar2 + 0x28;
                  func_0x000104c5e210(lVar4,auStack_70);
                  if (lVar4 != 0) {
                    lVar2 = lVar2 + 0x28;
                    func_0x000104c5e210(lVar2,auStack_70);
                    if (*(char *)(lVar2 + 0x3f) < '\0') {
                      func_0x000107c3192c(param_1,*(undefined8 *)(lVar2 + 0x28),
                                          *(undefined8 *)(lVar2 + 0x30));
                    }
                    else {
                      uVar8 = *(undefined8 *)(lVar2 + 0x30);
                      uVar7 = *(undefined8 *)(lVar2 + 0x28);
                      param_1[2] = *(undefined8 *)(lVar2 + 0x38);
                      param_1[1] = uVar8;
                      *param_1 = uVar7;
                    }
                    if (-1 < cStack_59) {
                      return;
                    }
                    __ZdlPv(auStack_70[0]);
                    return;
                  }
                  if (cStack_59 < '\0') {
                    __ZdlPv(auStack_70[0]);
                  }
                }
                break;
              }
              pcVar3 = pcVar3 + 1;
              if ((long)(pcVar6 + lVar4) - (long)pcVar3 < 1) break;
            }
          }
        }
      }
    }
  }
  if (param_3[0x17] < '\0') {
    uVar7 = *(undefined8 *)param_3;
    uVar8 = *(undefined8 *)(param_3 + 8);
LAB_10a59747c:
    func_0x000107c3192c(param_1,uVar7,uVar8);
    return;
  }
LAB_10a597464:
  uVar7 = *(undefined8 *)param_3;
  param_1[1] = *(undefined8 *)(param_3 + 8);
  *param_1 = uVar7;
  param_1[2] = *(undefined8 *)(param_3 + 0x10);
  return;
}



/* Entry: 10a597538; end: 10a5975f7;  */

long * FUN_10a597538(undefined8 param_1,ulong param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_208;
  long *plStack_200;
  undefined *puStack_1f8;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 ***pppuStack_1b0;
  code *pcStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 ***pppuStack_170;
  code *pcStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 ***pppuStack_130;
  code *pcStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined1 ***pppuStack_f0;
  code *pcStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar7 = param_4;
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_48,*param_4);
    plVar7 = &lStack_48;
    param_3 = plStack_40;
    (**(code **)(*plStack_40 + 0x38))(param_1,plStack_40);
  }
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar8 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_3 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_3;
  }
  plVar3 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume(plVar3);
  pcStack_58 = FUN_10a5975f8;
  plVar6 = plVar7;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a597188(&plStack_90);
  if (plStack_90 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_98,*plVar7);
    plVar6 = &lStack_98;
    plVar3 = plStack_90;
    (**(code **)(*plStack_90 + 0x40))(extraout_x8,plStack_90);
  }
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      plVar3 = plStack_88;
    }
  }
  if (plStack_90 != (long *)0x0) {
    return plVar3;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_90);
  __Unwind_Resume(plVar7);
  pcStack_a8 = FUN_10a5976b8;
  plVar3 = plVar6;
  ppuStack_b0 = &puStack_60;
  FUN_10a597188(&plStack_e0);
  if (plStack_e0 != (long *)0x0) {
    plVar7 = plStack_e0;
    (**(code **)(*plStack_e0 + 0x48))(extraout_x8_00,plStack_e0);
    plVar3 = plVar6;
  }
  if (plStack_d8 != (long *)0x0) {
    plVar6 = plStack_d8 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      plVar7 = plStack_d8;
    }
  }
  if (plStack_e0 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_e0);
  __Unwind_Resume(plVar7);
  pcStack_e8 = FUN_10a59776c;
  uVar10 = param_2;
  pppuStack_f0 = &ppuStack_b0;
  FUN_10a597188(&plStack_120);
  if (plStack_120 != (long *)0x0) {
    plVar7 = plStack_120;
    (**(code **)(*plStack_120 + 0x50))(extraout_x8_01,plStack_120);
    uVar10 = param_2;
  }
  if (plStack_118 != (long *)0x0) {
    plVar6 = plStack_118 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
      plVar7 = plStack_118;
    }
  }
  if (plStack_120 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_120);
  __Unwind_Resume(plVar7);
  pcStack_128 = FUN_10a597820;
  uVar9 = uVar10;
  pppuStack_130 = &pppuStack_f0;
  FUN_10a597188(&plStack_160);
  if (plStack_160 != (long *)0x0) {
    plVar7 = plStack_160;
    (**(code **)(*plStack_160 + 0x58))(extraout_x8_02,plStack_160);
    uVar9 = uVar10;
  }
  if (plStack_158 != (long *)0x0) {
    plVar6 = plStack_158 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
      plVar7 = plStack_158;
    }
  }
  if (plStack_160 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_160);
  __Unwind_Resume(plVar7);
  pcStack_168 = FUN_10a5978d4;
  uVar10 = uVar9;
  pppuStack_170 = &pppuStack_130;
  FUN_10a597188(&plStack_1a0);
  if (plStack_1a0 != (long *)0x0) {
    uVar10 = (ulong)(uint)(((float)uVar9 + -32.0) * 0.5555556);
    plVar7 = plStack_1a0;
    (**(code **)(*plStack_1a0 + 0x58))(extraout_x8_03,uVar10,plStack_1a0);
  }
  if (plStack_198 != (long *)0x0) {
    plVar6 = plStack_198 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_198);
      plVar7 = plStack_198;
    }
  }
  if (plStack_1a0 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_1a0);
  __Unwind_Resume(plVar7);
  pcStack_1a8 = FUN_10a597998;
  pppuStack_1b0 = &pppuStack_170;
  FUN_10a597188(&plStack_1e0);
  if (plStack_1e0 != (long *)0x0) {
    plVar7 = plStack_1e0;
    (**(code **)(*plStack_1e0 + 0x60))(extraout_x8_04,uVar10,plStack_1e0);
  }
  if (plStack_1d8 != (long *)0x0) {
    plVar6 = plStack_1d8 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      plVar7 = plStack_1d8;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d8);
    }
  }
  if (plStack_1e0 != (long *)0x0) {
    return plVar7;
  }
  puVar4 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_1e0);
  puVar5 = puVar4;
  __Unwind_Resume();
  plStack_200 = plStack_1d8;
  pcStack_1e8 = FUN_10a597a4c;
  plVar7 = (long *)*plVar3;
  if ((((byte)puVar5[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar5 + 0x18) < 0xe7)) {
    puStack_1f8 = puVar4;
    pppuStack_1f0 = &pppuStack_1b0;
    func_0x00010988cc0c(&lStack_208);
    lVar8 = SUB168(SEXT816(lStack_208) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar7 = (long *)((((lVar8 >> 7) - (lVar8 >> 0x3f)) + (*plVar3 / 1000) * 2) * 1000);
  }
  return plVar7;
}



/* Entry: 10a5975f8; end: 10a5976b7;  */

long * FUN_10a5975f8(undefined8 param_1,ulong param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_1b8;
  long *plStack_1b0;
  undefined *puStack_1a8;
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined8 ***pppuStack_160;
  code *pcStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 ***pppuStack_e0;
  code *pcStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar7 = param_4;
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_48,*param_4);
    plVar7 = &lStack_48;
    param_3 = plStack_40;
    (**(code **)(*plStack_40 + 0x40))(param_1,plStack_40);
  }
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar8 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_3 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_3;
  }
  plVar3 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume(plVar3);
  pcStack_58 = FUN_10a5976b8;
  plVar6 = plVar7;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a597188(&plStack_90);
  if (plStack_90 != (long *)0x0) {
    plVar3 = plStack_90;
    (**(code **)(*plStack_90 + 0x48))(extraout_x8,plStack_90);
    plVar6 = plVar7;
  }
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      plVar3 = plStack_88;
    }
  }
  if (plStack_90 != (long *)0x0) {
    return plVar3;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_90);
  __Unwind_Resume(plVar7);
  pcStack_98 = FUN_10a59776c;
  uVar10 = param_2;
  ppuStack_a0 = &puStack_60;
  FUN_10a597188(&plStack_d0);
  if (plStack_d0 != (long *)0x0) {
    plVar7 = plStack_d0;
    (**(code **)(*plStack_d0 + 0x50))(extraout_x8_00,plStack_d0);
    uVar10 = param_2;
  }
  if (plStack_c8 != (long *)0x0) {
    plVar3 = plStack_c8 + 1;
    do {
      lVar8 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
      plVar7 = plStack_c8;
    }
  }
  if (plStack_d0 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_d0);
  __Unwind_Resume(plVar7);
  pcStack_d8 = FUN_10a597820;
  uVar9 = uVar10;
  pppuStack_e0 = &ppuStack_a0;
  FUN_10a597188(&plStack_110);
  if (plStack_110 != (long *)0x0) {
    plVar7 = plStack_110;
    (**(code **)(*plStack_110 + 0x58))(extraout_x8_01,plStack_110);
    uVar9 = uVar10;
  }
  if (plStack_108 != (long *)0x0) {
    plVar3 = plStack_108 + 1;
    do {
      lVar8 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
      plVar7 = plStack_108;
    }
  }
  if (plStack_110 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_110);
  __Unwind_Resume(plVar7);
  pcStack_118 = FUN_10a5978d4;
  uVar10 = uVar9;
  pppuStack_120 = &pppuStack_e0;
  FUN_10a597188(&plStack_150);
  if (plStack_150 != (long *)0x0) {
    uVar10 = (ulong)(uint)(((float)uVar9 + -32.0) * 0.5555556);
    plVar7 = plStack_150;
    (**(code **)(*plStack_150 + 0x58))(extraout_x8_02,uVar10,plStack_150);
  }
  if (plStack_148 != (long *)0x0) {
    plVar3 = plStack_148 + 1;
    do {
      lVar8 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_148);
      plVar7 = plStack_148;
    }
  }
  if (plStack_150 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_150);
  __Unwind_Resume(plVar7);
  pcStack_158 = FUN_10a597998;
  pppuStack_160 = &pppuStack_120;
  FUN_10a597188(&plStack_190);
  if (plStack_190 != (long *)0x0) {
    plVar7 = plStack_190;
    (**(code **)(*plStack_190 + 0x60))(extraout_x8_03,uVar10,plStack_190);
  }
  if (plStack_188 != (long *)0x0) {
    plVar3 = plStack_188 + 1;
    do {
      lVar8 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      plVar7 = plStack_188;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_188);
    }
  }
  if (plStack_190 != (long *)0x0) {
    return plVar7;
  }
  puVar4 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_190);
  puVar5 = puVar4;
  __Unwind_Resume();
  plStack_1b0 = plStack_188;
  pcStack_198 = FUN_10a597a4c;
  plVar7 = (long *)*plVar6;
  if ((((byte)puVar5[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar5 + 0x18) < 0xe7)) {
    puStack_1a8 = puVar4;
    pppuStack_1a0 = &pppuStack_160;
    func_0x00010988cc0c(&lStack_1b8);
    lVar8 = SUB168(SEXT816(lStack_1b8) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar7 = (long *)((((lVar8 >> 7) - (lVar8 >> 0x3f)) + (*plVar6 / 1000) * 2) * 1000);
  }
  return plVar7;
}



/* Entry: 10a5976b8; end: 10a59776b;  */

long * FUN_10a5976b8(undefined8 param_1,ulong param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_168;
  long *plStack_160;
  undefined *puStack_158;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 ***pppuStack_110;
  code *pcStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar6 = param_4;
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    param_3 = plStack_40;
    (**(code **)(*plStack_40 + 0x48))(param_1,plStack_40);
    plVar6 = param_4;
  }
  if (plStack_38 != (long *)0x0) {
    plVar7 = plStack_38 + 1;
    do {
      lVar8 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_3 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_3;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume(plVar7);
  pcStack_48 = FUN_10a59776c;
  uVar10 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10a597188(&plStack_80);
  if (plStack_80 != (long *)0x0) {
    plVar7 = plStack_80;
    (**(code **)(*plStack_80 + 0x50))(extraout_x8,plStack_80);
    uVar10 = param_2;
  }
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      plVar7 = plStack_78;
    }
  }
  if (plStack_80 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_80);
  __Unwind_Resume(plVar7);
  pcStack_88 = FUN_10a597820;
  uVar9 = uVar10;
  ppuStack_90 = &puStack_50;
  FUN_10a597188(&plStack_c0);
  if (plStack_c0 != (long *)0x0) {
    plVar7 = plStack_c0;
    (**(code **)(*plStack_c0 + 0x58))(extraout_x8_00,plStack_c0);
    uVar9 = uVar10;
  }
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
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
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
      plVar7 = plStack_b8;
    }
  }
  if (plStack_c0 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_c0);
  __Unwind_Resume(plVar7);
  pcStack_c8 = FUN_10a5978d4;
  uVar10 = uVar9;
  pppuStack_d0 = &ppuStack_90;
  FUN_10a597188(&plStack_100);
  if (plStack_100 != (long *)0x0) {
    uVar10 = (ulong)(uint)(((float)uVar9 + -32.0) * 0.5555556);
    plVar7 = plStack_100;
    (**(code **)(*plStack_100 + 0x58))(extraout_x8_01,uVar10,plStack_100);
  }
  if (plStack_f8 != (long *)0x0) {
    plVar1 = plStack_f8 + 1;
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
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
      plVar7 = plStack_f8;
    }
  }
  if (plStack_100 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_100);
  __Unwind_Resume(plVar7);
  pcStack_108 = FUN_10a597998;
  pppuStack_110 = &pppuStack_d0;
  FUN_10a597188(&plStack_140);
  if (plStack_140 != (long *)0x0) {
    plVar7 = plStack_140;
    (**(code **)(*plStack_140 + 0x60))(extraout_x8_02,uVar10,plStack_140);
  }
  if (plStack_138 != (long *)0x0) {
    plVar1 = plStack_138 + 1;
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
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      plVar7 = plStack_138;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_138);
    }
  }
  if (plStack_140 != (long *)0x0) {
    return plVar7;
  }
  puVar4 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_140);
  puVar5 = puVar4;
  __Unwind_Resume();
  plStack_160 = plStack_138;
  pcStack_148 = FUN_10a597a4c;
  plVar7 = (long *)*plVar6;
  if ((((byte)puVar5[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar5 + 0x18) < 0xe7)) {
    puStack_158 = puVar4;
    pppuStack_150 = &pppuStack_110;
    func_0x00010988cc0c(&lStack_168);
    lVar8 = SUB168(SEXT816(lStack_168) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar7 = (long *)((((lVar8 >> 7) - (lVar8 >> 0x3f)) + (*plVar6 / 1000) * 2) * 1000);
  }
  return plVar7;
}



/* Entry: 10a59776c; end: 10a59781f;  */

long * FUN_10a59776c(undefined8 param_1,ulong param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_128;
  long *plStack_120;
  undefined *puStack_118;
  undefined8 ***pppuStack_110;
  code *pcStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  long *plStack_40;
  long *plStack_38;
  
  uVar9 = param_2;
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    param_3 = plStack_40;
    (**(code **)(*plStack_40 + 0x50))(param_1,plStack_40);
    uVar9 = param_2;
  }
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_3 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_3;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume(plVar6);
  pcStack_48 = FUN_10a597820;
  uVar8 = uVar9;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10a597188(&plStack_80);
  if (plStack_80 != (long *)0x0) {
    plVar6 = plStack_80;
    (**(code **)(*plStack_80 + 0x58))(extraout_x8,plStack_80);
    uVar8 = uVar9;
  }
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      plVar6 = plStack_78;
    }
  }
  if (plStack_80 != (long *)0x0) {
    return plVar6;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_80);
  __Unwind_Resume(plVar6);
  pcStack_88 = FUN_10a5978d4;
  uVar9 = uVar8;
  ppuStack_90 = &puStack_50;
  FUN_10a597188(&plStack_c0);
  if (plStack_c0 != (long *)0x0) {
    uVar9 = (ulong)(uint)(((float)uVar8 + -32.0) * 0.5555556);
    plVar6 = plStack_c0;
    (**(code **)(*plStack_c0 + 0x58))(extraout_x8_00,uVar9,plStack_c0);
  }
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
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
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
      plVar6 = plStack_b8;
    }
  }
  if (plStack_c0 != (long *)0x0) {
    return plVar6;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_c0);
  __Unwind_Resume(plVar6);
  pcStack_c8 = FUN_10a597998;
  pppuStack_d0 = &ppuStack_90;
  FUN_10a597188(&plStack_100);
  if (plStack_100 != (long *)0x0) {
    plVar6 = plStack_100;
    (**(code **)(*plStack_100 + 0x60))(extraout_x8_01,uVar9,plStack_100);
  }
  if (plStack_f8 != (long *)0x0) {
    plVar1 = plStack_f8 + 1;
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
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      plVar6 = plStack_f8;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
    }
  }
  if (plStack_100 != (long *)0x0) {
    return plVar6;
  }
  puVar4 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_100);
  puVar5 = puVar4;
  __Unwind_Resume();
  plStack_120 = plStack_f8;
  pcStack_108 = FUN_10a597a4c;
  plVar6 = (long *)*param_4;
  if ((((byte)puVar5[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar5 + 0x18) < 0xe7)) {
    puStack_118 = puVar4;
    pppuStack_110 = &pppuStack_d0;
    func_0x00010988cc0c(&lStack_128);
    lVar7 = SUB168(SEXT816(lStack_128) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar6 = (long *)((((lVar7 >> 7) - (lVar7 >> 0x3f)) + (*param_4 / 1000) * 2) * 1000);
  }
  return plVar6;
}



/* Entry: 10a597820; end: 10a5978d3;  */

long * FUN_10a597820(undefined8 param_1,ulong param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_e8;
  long *plStack_e0;
  undefined *puStack_d8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  long *plStack_40;
  long *plStack_38;
  
  uVar8 = param_2;
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    param_3 = plStack_40;
    (**(code **)(*plStack_40 + 0x58))(param_1,plStack_40);
    uVar8 = param_2;
  }
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_3 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_3;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume(plVar6);
  pcStack_48 = FUN_10a5978d4;
  uVar9 = uVar8;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10a597188(&plStack_80);
  if (plStack_80 != (long *)0x0) {
    uVar9 = (ulong)(uint)(((float)uVar8 + -32.0) * 0.5555556);
    plVar6 = plStack_80;
    (**(code **)(*plStack_80 + 0x58))(extraout_x8,uVar9,plStack_80);
  }
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      plVar6 = plStack_78;
    }
  }
  if (plStack_80 != (long *)0x0) {
    return plVar6;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_80);
  __Unwind_Resume(plVar6);
  pcStack_88 = FUN_10a597998;
  ppuStack_90 = &puStack_50;
  FUN_10a597188(&plStack_c0);
  if (plStack_c0 != (long *)0x0) {
    plVar6 = plStack_c0;
    (**(code **)(*plStack_c0 + 0x60))(extraout_x8_00,uVar9,plStack_c0);
  }
  if (plStack_b8 != (long *)0x0) {
    plVar1 = plStack_b8 + 1;
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
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      plVar6 = plStack_b8;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  if (plStack_c0 != (long *)0x0) {
    return plVar6;
  }
  puVar4 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_c0);
  puVar5 = puVar4;
  __Unwind_Resume();
  plStack_e0 = plStack_b8;
  pcStack_c8 = FUN_10a597a4c;
  plVar6 = (long *)*param_4;
  if ((((byte)puVar5[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar5 + 0x18) < 0xe7)) {
    puStack_d8 = puVar4;
    pppuStack_d0 = &ppuStack_90;
    func_0x00010988cc0c(&lStack_e8);
    lVar7 = SUB168(SEXT816(lStack_e8) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar6 = (long *)((((lVar7 >> 7) - (lVar7 >> 0x3f)) + (*param_4 / 1000) * 2) * 1000);
  }
  return plVar6;
}



/* Entry: 10a5978d4; end: 10a597997;  */

long * FUN_10a5978d4(undefined8 param_1,ulong param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  long lStack_a8;
  long *plStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_50;
  code *pcStack_48;
  long *plStack_40;
  long *plStack_38;
  
  uVar8 = param_2;
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    uVar8 = (ulong)(uint)(((float)param_2 + -32.0) * 0.5555556);
    param_3 = plStack_40;
    (**(code **)(*plStack_40 + 0x58))(param_1,uVar8,plStack_40);
  }
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_3 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_3;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume(plVar6);
  pcStack_48 = FUN_10a597998;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10a597188(&plStack_80);
  if (plStack_80 != (long *)0x0) {
    plVar6 = plStack_80;
    (**(code **)(*plStack_80 + 0x60))(extraout_x8,uVar8,plStack_80);
  }
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      plVar6 = plStack_78;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (plStack_80 != (long *)0x0) {
    return plVar6;
  }
  puVar4 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_80);
  puVar5 = puVar4;
  __Unwind_Resume();
  plStack_a0 = plStack_78;
  pcStack_88 = FUN_10a597a4c;
  plVar6 = (long *)*param_4;
  if ((((byte)puVar5[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar5 + 0x18) < 0xe7)) {
    puStack_98 = puVar4;
    ppuStack_90 = &puStack_50;
    func_0x00010988cc0c(&lStack_a8);
    lVar7 = SUB168(SEXT816(lStack_a8) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar6 = (long *)((((lVar7 >> 7) - (lVar7 >> 0x3f)) + (*param_4 / 1000) * 2) * 1000);
  }
  return plVar6;
}



/* Entry: 10a597998; end: 10a597a4b;  */

long * FUN_10a597998(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lStack_68;
  long *plStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    param_3 = plStack_40;
    (**(code **)(*plStack_40 + 0x60))(param_1,param_2,plStack_40);
  }
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      param_3 = plStack_38;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_3;
  }
  puVar3 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  puVar4 = puVar3;
  __Unwind_Resume();
  plStack_60 = plStack_38;
  pcStack_48 = FUN_10a597a4c;
  plVar5 = (long *)*param_4;
  if ((((byte)puVar4[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar4 + 0x18) < 0xe7)) {
    puStack_58 = puVar3;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010988cc0c(&lStack_68);
    lVar6 = SUB168(SEXT816(lStack_68) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar5 = (long *)((((lVar6 >> 7) - (lVar6 >> 0x3f)) + (*param_4 / 1000) * 2) * 1000);
  }
  return plVar5;
}



/* Entry: 10a597a4c; end: 10a597bff;  */

long FUN_10a597a4c(long param_1,long *param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_2;
  if (((*(byte *)(param_1 + 0x1c) >> 6 & 1) == 0) && (*(int *)(param_1 + 0x18) < 0xe7)) {
    func_0x00010988cc0c(&lStack_28);
    lVar1 = SUB168(SEXT816(lStack_28) * SEXT816(-0x20c49ba5e353f7cf),8);
    lVar1 = (((lVar1 >> 7) - (lVar1 >> 0x3f)) + (*param_2 / 1000) * 2) * 1000;
  }
  return lVar1;
}



/* Entry: 10a597c00; end: 10a597cbf;  */

long * FUN_10a597c00(undefined8 param_1,ulong param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_348;
  long *plStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  long *plStack_320;
  long *plStack_318;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  long lStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  long lStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar6 = param_4;
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_48,*param_4);
    plVar6 = &lStack_48;
    param_3 = plStack_40;
    (**(code **)(*plStack_40 + 0x18))(param_1,plStack_40);
  }
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_3 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_3;
  }
  plVar5 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume(plVar5);
  pcStack_58 = FUN_10a597cc0;
  plVar7 = plVar6;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a597188(&plStack_90);
  if (plStack_90 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_98,*plVar6);
    plVar7 = &lStack_98;
    plVar5 = plStack_90;
    (**(code **)(*plStack_90 + 0x20))(extraout_x8_05,plStack_90);
  }
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      plVar5 = plStack_88;
    }
  }
  if (plStack_90 != (long *)0x0) {
    return plVar5;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_90);
  __Unwind_Resume(plVar6);
  pcStack_a8 = FUN_10a597d80;
  plVar5 = plVar7;
  ppuStack_b0 = &puStack_60;
  FUN_10a597188(&plStack_e0);
  if (plStack_e0 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_e8,*plVar7);
    plVar5 = &lStack_e8;
    plVar6 = plStack_e0;
    (**(code **)(*plStack_e0 + 0x28))(extraout_x8_06,plStack_e0);
  }
  if (plStack_d8 != (long *)0x0) {
    plVar7 = plStack_d8 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      plVar6 = plStack_d8;
    }
  }
  if (plStack_e0 != (long *)0x0) {
    return plVar6;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_e0);
  __Unwind_Resume(plVar6);
  pcStack_f8 = FUN_10a597e40;
  plVar7 = plVar5;
  pppuStack_100 = &ppuStack_b0;
  FUN_10a597188(&plStack_130);
  if (plStack_130 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_138,*plVar5);
    plVar7 = &lStack_138;
    plVar6 = plStack_130;
    (**(code **)(*plStack_130 + 0x30))(extraout_x8_07,plStack_130);
  }
  if (plStack_128 != (long *)0x0) {
    plVar5 = plStack_128 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_128);
      plVar6 = plStack_128;
    }
  }
  if (plStack_130 != (long *)0x0) {
    return plVar6;
  }
  plVar5 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_130);
  __Unwind_Resume(plVar5);
  pcStack_148 = FUN_10a597f00;
  plVar6 = plVar7;
  pppuStack_150 = &pppuStack_100;
  FUN_10a597188(&plStack_180);
  if (plStack_180 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_188,*plVar7);
    plVar6 = &lStack_188;
    plVar5 = plStack_180;
    (**(code **)(*plStack_180 + 0x38))(extraout_x8_08,plStack_180);
  }
  if (plStack_178 != (long *)0x0) {
    plVar7 = plStack_178 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
      plVar5 = plStack_178;
    }
  }
  if (plStack_180 != (long *)0x0) {
    return plVar5;
  }
  plVar5 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_180);
  __Unwind_Resume(plVar5);
  pcStack_198 = FUN_10a5975f8;
  plVar7 = plVar6;
  pppuStack_1a0 = &pppuStack_150;
  FUN_10a597188(&plStack_1d0);
  if (plStack_1d0 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_1d8,*plVar6);
    plVar7 = &lStack_1d8;
    plVar5 = plStack_1d0;
    (**(code **)(*plStack_1d0 + 0x40))(extraout_x8,plStack_1d0);
  }
  if (plStack_1c8 != (long *)0x0) {
    plVar6 = plStack_1c8 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c8);
      plVar5 = plStack_1c8;
    }
  }
  if (plStack_1d0 != (long *)0x0) {
    return plVar5;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_1d0);
  __Unwind_Resume(plVar6);
  pcStack_1e8 = FUN_10a5976b8;
  plVar5 = plVar7;
  pppuStack_1f0 = &pppuStack_1a0;
  FUN_10a597188(&plStack_220);
  if (plStack_220 != (long *)0x0) {
    plVar6 = plStack_220;
    (**(code **)(*plStack_220 + 0x48))(extraout_x8_00,plStack_220);
    plVar5 = plVar7;
  }
  if (plStack_218 != (long *)0x0) {
    plVar7 = plStack_218 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_218);
      plVar6 = plStack_218;
    }
  }
  if (plStack_220 != (long *)0x0) {
    return plVar6;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_220);
  __Unwind_Resume(plVar6);
  pcStack_228 = FUN_10a59776c;
  uVar10 = param_2;
  pppuStack_230 = &pppuStack_1f0;
  FUN_10a597188(&plStack_260);
  if (plStack_260 != (long *)0x0) {
    plVar6 = plStack_260;
    (**(code **)(*plStack_260 + 0x50))(extraout_x8_01,plStack_260);
    uVar10 = param_2;
  }
  if (plStack_258 != (long *)0x0) {
    plVar7 = plStack_258 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_258 + 0x10))(plStack_258);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_258);
      plVar6 = plStack_258;
    }
  }
  if (plStack_260 != (long *)0x0) {
    return plVar6;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_260);
  __Unwind_Resume(plVar6);
  pcStack_268 = FUN_10a597820;
  uVar9 = uVar10;
  pppuStack_270 = &pppuStack_230;
  FUN_10a597188(&plStack_2a0);
  if (plStack_2a0 != (long *)0x0) {
    plVar6 = plStack_2a0;
    (**(code **)(*plStack_2a0 + 0x58))(extraout_x8_02,plStack_2a0);
    uVar9 = uVar10;
  }
  if (plStack_298 != (long *)0x0) {
    plVar7 = plStack_298 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_298);
      plVar6 = plStack_298;
    }
  }
  if (plStack_2a0 != (long *)0x0) {
    return plVar6;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_2a0);
  __Unwind_Resume(plVar6);
  pcStack_2a8 = FUN_10a5978d4;
  uVar10 = uVar9;
  pppuStack_2b0 = &pppuStack_270;
  FUN_10a597188(&plStack_2e0);
  if (plStack_2e0 != (long *)0x0) {
    uVar10 = (ulong)(uint)(((float)uVar9 + -32.0) * 0.5555556);
    plVar6 = plStack_2e0;
    (**(code **)(*plStack_2e0 + 0x58))(extraout_x8_03,uVar10,plStack_2e0);
  }
  if (plStack_2d8 != (long *)0x0) {
    plVar7 = plStack_2d8 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2d8);
      plVar6 = plStack_2d8;
    }
  }
  if (plStack_2e0 != (long *)0x0) {
    return plVar6;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_2e0);
  __Unwind_Resume(plVar6);
  pcStack_2e8 = FUN_10a597998;
  pppuStack_2f0 = &pppuStack_2b0;
  FUN_10a597188(&plStack_320);
  if (plStack_320 != (long *)0x0) {
    plVar6 = plStack_320;
    (**(code **)(*plStack_320 + 0x60))(extraout_x8_04,uVar10,plStack_320);
  }
  if (plStack_318 != (long *)0x0) {
    plVar7 = plStack_318 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_318 + 0x10))(plStack_318);
      plVar6 = plStack_318;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_318);
    }
  }
  if (plStack_320 != (long *)0x0) {
    return plVar6;
  }
  puVar3 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_320);
  puVar4 = puVar3;
  __Unwind_Resume();
  plStack_340 = plStack_318;
  pcStack_328 = FUN_10a597a4c;
  plVar6 = (long *)*plVar5;
  if ((((byte)puVar4[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar4 + 0x18) < 0xe7)) {
    puStack_338 = puVar3;
    pppuStack_330 = &pppuStack_2f0;
    func_0x00010988cc0c(&lStack_348);
    lVar8 = SUB168(SEXT816(lStack_348) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar6 = (long *)((((lVar8 >> 7) - (lVar8 >> 0x3f)) + (*plVar5 / 1000) * 2) * 1000);
  }
  return plVar6;
}



/* Entry: 10a597cc0; end: 10a597d7f;  */

long * FUN_10a597cc0(undefined8 param_1,ulong param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  undefined8 extraout_x8_07;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_2f8;
  long *plStack_2f0;
  undefined *puStack_2e8;
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined8 ***pppuStack_2a0;
  code *pcStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined8 ***pppuStack_260;
  code *pcStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined8 ***pppuStack_220;
  code *pcStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined8 ***pppuStack_1e0;
  code *pcStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  long lStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar7 = param_4;
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_48,*param_4);
    plVar7 = &lStack_48;
    param_3 = plStack_40;
    (**(code **)(*plStack_40 + 0x20))(param_1,plStack_40);
  }
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_3 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_3;
  }
  plVar5 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume(plVar5);
  pcStack_58 = FUN_10a597d80;
  plVar6 = plVar7;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a597188(&plStack_90);
  if (plStack_90 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_98,*plVar7);
    plVar6 = &lStack_98;
    plVar5 = plStack_90;
    (**(code **)(*plStack_90 + 0x28))(extraout_x8_05,plStack_90);
  }
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      plVar5 = plStack_88;
    }
  }
  if (plStack_90 != (long *)0x0) {
    return plVar5;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_90);
  __Unwind_Resume(plVar7);
  pcStack_a8 = FUN_10a597e40;
  plVar5 = plVar6;
  ppuStack_b0 = &puStack_60;
  FUN_10a597188(&plStack_e0);
  if (plStack_e0 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_e8,*plVar6);
    plVar5 = &lStack_e8;
    plVar7 = plStack_e0;
    (**(code **)(*plStack_e0 + 0x30))(extraout_x8_06,plStack_e0);
  }
  if (plStack_d8 != (long *)0x0) {
    plVar6 = plStack_d8 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      plVar7 = plStack_d8;
    }
  }
  if (plStack_e0 != (long *)0x0) {
    return plVar7;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_e0);
  __Unwind_Resume(plVar6);
  pcStack_f8 = FUN_10a597f00;
  plVar7 = plVar5;
  pppuStack_100 = &ppuStack_b0;
  FUN_10a597188(&plStack_130);
  if (plStack_130 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_138,*plVar5);
    plVar7 = &lStack_138;
    plVar6 = plStack_130;
    (**(code **)(*plStack_130 + 0x38))(extraout_x8_07,plStack_130);
  }
  if (plStack_128 != (long *)0x0) {
    plVar5 = plStack_128 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_128);
      plVar6 = plStack_128;
    }
  }
  if (plStack_130 != (long *)0x0) {
    return plVar6;
  }
  plVar5 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_130);
  __Unwind_Resume(plVar5);
  pcStack_148 = FUN_10a5975f8;
  plVar6 = plVar7;
  pppuStack_150 = &pppuStack_100;
  FUN_10a597188(&plStack_180);
  if (plStack_180 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_188,*plVar7);
    plVar6 = &lStack_188;
    plVar5 = plStack_180;
    (**(code **)(*plStack_180 + 0x40))(extraout_x8,plStack_180);
  }
  if (plStack_178 != (long *)0x0) {
    plVar7 = plStack_178 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
      plVar5 = plStack_178;
    }
  }
  if (plStack_180 != (long *)0x0) {
    return plVar5;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_180);
  __Unwind_Resume(plVar7);
  pcStack_198 = FUN_10a5976b8;
  plVar5 = plVar6;
  pppuStack_1a0 = &pppuStack_150;
  FUN_10a597188(&plStack_1d0);
  if (plStack_1d0 != (long *)0x0) {
    plVar7 = plStack_1d0;
    (**(code **)(*plStack_1d0 + 0x48))(extraout_x8_00,plStack_1d0);
    plVar5 = plVar6;
  }
  if (plStack_1c8 != (long *)0x0) {
    plVar6 = plStack_1c8 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c8);
      plVar7 = plStack_1c8;
    }
  }
  if (plStack_1d0 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_1d0);
  __Unwind_Resume(plVar7);
  pcStack_1d8 = FUN_10a59776c;
  uVar10 = param_2;
  pppuStack_1e0 = &pppuStack_1a0;
  FUN_10a597188(&plStack_210);
  if (plStack_210 != (long *)0x0) {
    plVar7 = plStack_210;
    (**(code **)(*plStack_210 + 0x50))(extraout_x8_01,plStack_210);
    uVar10 = param_2;
  }
  if (plStack_208 != (long *)0x0) {
    plVar6 = plStack_208 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_208 + 0x10))(plStack_208);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_208);
      plVar7 = plStack_208;
    }
  }
  if (plStack_210 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_210);
  __Unwind_Resume(plVar7);
  pcStack_218 = FUN_10a597820;
  uVar9 = uVar10;
  pppuStack_220 = &pppuStack_1e0;
  FUN_10a597188(&plStack_250);
  if (plStack_250 != (long *)0x0) {
    plVar7 = plStack_250;
    (**(code **)(*plStack_250 + 0x58))(extraout_x8_02,plStack_250);
    uVar9 = uVar10;
  }
  if (plStack_248 != (long *)0x0) {
    plVar6 = plStack_248 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_248 + 0x10))(plStack_248);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_248);
      plVar7 = plStack_248;
    }
  }
  if (plStack_250 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_250);
  __Unwind_Resume(plVar7);
  pcStack_258 = FUN_10a5978d4;
  uVar10 = uVar9;
  pppuStack_260 = &pppuStack_220;
  FUN_10a597188(&plStack_290);
  if (plStack_290 != (long *)0x0) {
    uVar10 = (ulong)(uint)(((float)uVar9 + -32.0) * 0.5555556);
    plVar7 = plStack_290;
    (**(code **)(*plStack_290 + 0x58))(extraout_x8_03,uVar10,plStack_290);
  }
  if (plStack_288 != (long *)0x0) {
    plVar6 = plStack_288 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_288 + 0x10))(plStack_288);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_288);
      plVar7 = plStack_288;
    }
  }
  if (plStack_290 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_290);
  __Unwind_Resume(plVar7);
  pcStack_298 = FUN_10a597998;
  pppuStack_2a0 = &pppuStack_260;
  FUN_10a597188(&plStack_2d0);
  if (plStack_2d0 != (long *)0x0) {
    plVar7 = plStack_2d0;
    (**(code **)(*plStack_2d0 + 0x60))(extraout_x8_04,uVar10,plStack_2d0);
  }
  if (plStack_2c8 != (long *)0x0) {
    plVar6 = plStack_2c8 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
      plVar7 = plStack_2c8;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2c8);
    }
  }
  if (plStack_2d0 != (long *)0x0) {
    return plVar7;
  }
  puVar3 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_2d0);
  puVar4 = puVar3;
  __Unwind_Resume();
  plStack_2f0 = plStack_2c8;
  pcStack_2d8 = FUN_10a597a4c;
  plVar7 = (long *)*plVar5;
  if ((((byte)puVar4[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar4 + 0x18) < 0xe7)) {
    puStack_2e8 = puVar3;
    pppuStack_2e0 = &pppuStack_2a0;
    func_0x00010988cc0c(&lStack_2f8);
    lVar8 = SUB168(SEXT816(lStack_2f8) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar7 = (long *)((((lVar8 >> 7) - (lVar8 >> 0x3f)) + (*plVar5 / 1000) * 2) * 1000);
  }
  return plVar7;
}



/* Entry: 10a597d80; end: 10a597e3f;  */

long * FUN_10a597d80(undefined8 param_1,ulong param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_2a8;
  long *plStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined8 ***pppuStack_1d0;
  code *pcStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 ***pppuStack_190;
  code *pcStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar6 = param_4;
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_48,*param_4);
    plVar6 = &lStack_48;
    param_3 = plStack_40;
    (**(code **)(*plStack_40 + 0x28))(param_1,plStack_40);
  }
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_3 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_3;
  }
  plVar5 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume(plVar5);
  pcStack_58 = FUN_10a597e40;
  plVar7 = plVar6;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a597188(&plStack_90);
  if (plStack_90 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_98,*plVar6);
    plVar7 = &lStack_98;
    plVar5 = plStack_90;
    (**(code **)(*plStack_90 + 0x30))(extraout_x8_05,plStack_90);
  }
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      plVar5 = plStack_88;
    }
  }
  if (plStack_90 != (long *)0x0) {
    return plVar5;
  }
  plVar5 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_90);
  __Unwind_Resume(plVar5);
  pcStack_a8 = FUN_10a597f00;
  plVar6 = plVar7;
  ppuStack_b0 = &puStack_60;
  FUN_10a597188(&plStack_e0);
  if (plStack_e0 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_e8,*plVar7);
    plVar6 = &lStack_e8;
    plVar5 = plStack_e0;
    (**(code **)(*plStack_e0 + 0x38))(extraout_x8_06,plStack_e0);
  }
  if (plStack_d8 != (long *)0x0) {
    plVar7 = plStack_d8 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      plVar5 = plStack_d8;
    }
  }
  if (plStack_e0 != (long *)0x0) {
    return plVar5;
  }
  plVar5 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_e0);
  __Unwind_Resume(plVar5);
  pcStack_f8 = FUN_10a5975f8;
  plVar7 = plVar6;
  pppuStack_100 = &ppuStack_b0;
  FUN_10a597188(&plStack_130);
  if (plStack_130 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_138,*plVar6);
    plVar7 = &lStack_138;
    plVar5 = plStack_130;
    (**(code **)(*plStack_130 + 0x40))(extraout_x8,plStack_130);
  }
  if (plStack_128 != (long *)0x0) {
    plVar6 = plStack_128 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_128);
      plVar5 = plStack_128;
    }
  }
  if (plStack_130 != (long *)0x0) {
    return plVar5;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_130);
  __Unwind_Resume(plVar6);
  pcStack_148 = FUN_10a5976b8;
  plVar5 = plVar7;
  pppuStack_150 = &pppuStack_100;
  FUN_10a597188(&plStack_180);
  if (plStack_180 != (long *)0x0) {
    plVar6 = plStack_180;
    (**(code **)(*plStack_180 + 0x48))(extraout_x8_00,plStack_180);
    plVar5 = plVar7;
  }
  if (plStack_178 != (long *)0x0) {
    plVar7 = plStack_178 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
      plVar6 = plStack_178;
    }
  }
  if (plStack_180 != (long *)0x0) {
    return plVar6;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_180);
  __Unwind_Resume(plVar6);
  pcStack_188 = FUN_10a59776c;
  uVar10 = param_2;
  pppuStack_190 = &pppuStack_150;
  FUN_10a597188(&plStack_1c0);
  if (plStack_1c0 != (long *)0x0) {
    plVar6 = plStack_1c0;
    (**(code **)(*plStack_1c0 + 0x50))(extraout_x8_01,plStack_1c0);
    uVar10 = param_2;
  }
  if (plStack_1b8 != (long *)0x0) {
    plVar7 = plStack_1b8 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b8);
      plVar6 = plStack_1b8;
    }
  }
  if (plStack_1c0 != (long *)0x0) {
    return plVar6;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_1c0);
  __Unwind_Resume(plVar6);
  pcStack_1c8 = FUN_10a597820;
  uVar9 = uVar10;
  pppuStack_1d0 = &pppuStack_190;
  FUN_10a597188(&plStack_200);
  if (plStack_200 != (long *)0x0) {
    plVar6 = plStack_200;
    (**(code **)(*plStack_200 + 0x58))(extraout_x8_02,plStack_200);
    uVar9 = uVar10;
  }
  if (plStack_1f8 != (long *)0x0) {
    plVar7 = plStack_1f8 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1f8);
      plVar6 = plStack_1f8;
    }
  }
  if (plStack_200 != (long *)0x0) {
    return plVar6;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_200);
  __Unwind_Resume(plVar6);
  pcStack_208 = FUN_10a5978d4;
  uVar10 = uVar9;
  pppuStack_210 = &pppuStack_1d0;
  FUN_10a597188(&plStack_240);
  if (plStack_240 != (long *)0x0) {
    uVar10 = (ulong)(uint)(((float)uVar9 + -32.0) * 0.5555556);
    plVar6 = plStack_240;
    (**(code **)(*plStack_240 + 0x58))(extraout_x8_03,uVar10,plStack_240);
  }
  if (plStack_238 != (long *)0x0) {
    plVar7 = plStack_238 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_238 + 0x10))(plStack_238);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_238);
      plVar6 = plStack_238;
    }
  }
  if (plStack_240 != (long *)0x0) {
    return plVar6;
  }
  plVar6 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_240);
  __Unwind_Resume(plVar6);
  pcStack_248 = FUN_10a597998;
  pppuStack_250 = &pppuStack_210;
  FUN_10a597188(&plStack_280);
  if (plStack_280 != (long *)0x0) {
    plVar6 = plStack_280;
    (**(code **)(*plStack_280 + 0x60))(extraout_x8_04,uVar10,plStack_280);
  }
  if (plStack_278 != (long *)0x0) {
    plVar7 = plStack_278 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_278 + 0x10))(plStack_278);
      plVar6 = plStack_278;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_278);
    }
  }
  if (plStack_280 != (long *)0x0) {
    return plVar6;
  }
  puVar3 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_280);
  puVar4 = puVar3;
  __Unwind_Resume();
  plStack_2a0 = plStack_278;
  pcStack_288 = FUN_10a597a4c;
  plVar6 = (long *)*plVar5;
  if ((((byte)puVar4[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar4 + 0x18) < 0xe7)) {
    puStack_298 = puVar3;
    pppuStack_290 = &pppuStack_250;
    func_0x00010988cc0c(&lStack_2a8);
    lVar8 = SUB168(SEXT816(lStack_2a8) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar6 = (long *)((((lVar8 >> 7) - (lVar8 >> 0x3f)) + (*plVar5 / 1000) * 2) * 1000);
  }
  return plVar6;
}



/* Entry: 10a597e40; end: 10a597eff;  */

long * FUN_10a597e40(undefined8 param_1,ulong param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_258;
  long *plStack_250;
  undefined *puStack_248;
  undefined8 ***pppuStack_240;
  code *pcStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined8 ***pppuStack_200;
  code *pcStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 ***pppuStack_1c0;
  code *pcStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 ***pppuStack_180;
  code *pcStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 ***pppuStack_140;
  code *pcStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar7 = param_4;
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_48,*param_4);
    plVar7 = &lStack_48;
    param_3 = plStack_40;
    (**(code **)(*plStack_40 + 0x30))(param_1,plStack_40);
  }
  if (plStack_38 != (long *)0x0) {
    plVar6 = plStack_38 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_3 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_3;
  }
  plVar5 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume(plVar5);
  pcStack_58 = FUN_10a597f00;
  plVar6 = plVar7;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a597188(&plStack_90);
  if (plStack_90 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_98,*plVar7);
    plVar6 = &lStack_98;
    plVar5 = plStack_90;
    (**(code **)(*plStack_90 + 0x38))(extraout_x8_05,plStack_90);
  }
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      plVar5 = plStack_88;
    }
  }
  if (plStack_90 != (long *)0x0) {
    return plVar5;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_90);
  __Unwind_Resume(plVar7);
  pcStack_a8 = FUN_10a5975f8;
  plVar5 = plVar6;
  ppuStack_b0 = &puStack_60;
  FUN_10a597188(&plStack_e0);
  if (plStack_e0 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_e8,*plVar6);
    plVar5 = &lStack_e8;
    plVar7 = plStack_e0;
    (**(code **)(*plStack_e0 + 0x40))(extraout_x8,plStack_e0);
  }
  if (plStack_d8 != (long *)0x0) {
    plVar6 = plStack_d8 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      plVar7 = plStack_d8;
    }
  }
  if (plStack_e0 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_e0);
  __Unwind_Resume(plVar7);
  pcStack_f8 = FUN_10a5976b8;
  plVar6 = plVar5;
  pppuStack_100 = &ppuStack_b0;
  FUN_10a597188(&plStack_130);
  if (plStack_130 != (long *)0x0) {
    plVar7 = plStack_130;
    (**(code **)(*plStack_130 + 0x48))(extraout_x8_00,plStack_130);
    plVar6 = plVar5;
  }
  if (plStack_128 != (long *)0x0) {
    plVar5 = plStack_128 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_128);
      plVar7 = plStack_128;
    }
  }
  if (plStack_130 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_130);
  __Unwind_Resume(plVar7);
  pcStack_138 = FUN_10a59776c;
  uVar10 = param_2;
  pppuStack_140 = &pppuStack_100;
  FUN_10a597188(&plStack_170);
  if (plStack_170 != (long *)0x0) {
    plVar7 = plStack_170;
    (**(code **)(*plStack_170 + 0x50))(extraout_x8_01,plStack_170);
    uVar10 = param_2;
  }
  if (plStack_168 != (long *)0x0) {
    plVar5 = plStack_168 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
      plVar7 = plStack_168;
    }
  }
  if (plStack_170 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_170);
  __Unwind_Resume(plVar7);
  pcStack_178 = FUN_10a597820;
  uVar9 = uVar10;
  pppuStack_180 = &pppuStack_140;
  FUN_10a597188(&plStack_1b0);
  if (plStack_1b0 != (long *)0x0) {
    plVar7 = plStack_1b0;
    (**(code **)(*plStack_1b0 + 0x58))(extraout_x8_02,plStack_1b0);
    uVar9 = uVar10;
  }
  if (plStack_1a8 != (long *)0x0) {
    plVar5 = plStack_1a8 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a8);
      plVar7 = plStack_1a8;
    }
  }
  if (plStack_1b0 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_1b0);
  __Unwind_Resume(plVar7);
  pcStack_1b8 = FUN_10a5978d4;
  uVar10 = uVar9;
  pppuStack_1c0 = &pppuStack_180;
  FUN_10a597188(&plStack_1f0);
  if (plStack_1f0 != (long *)0x0) {
    uVar10 = (ulong)(uint)(((float)uVar9 + -32.0) * 0.5555556);
    plVar7 = plStack_1f0;
    (**(code **)(*plStack_1f0 + 0x58))(extraout_x8_03,uVar10,plStack_1f0);
  }
  if (plStack_1e8 != (long *)0x0) {
    plVar5 = plStack_1e8 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1e8);
      plVar7 = plStack_1e8;
    }
  }
  if (plStack_1f0 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_1f0);
  __Unwind_Resume(plVar7);
  pcStack_1f8 = FUN_10a597998;
  pppuStack_200 = &pppuStack_1c0;
  FUN_10a597188(&plStack_230);
  if (plStack_230 != (long *)0x0) {
    plVar7 = plStack_230;
    (**(code **)(*plStack_230 + 0x60))(extraout_x8_04,uVar10,plStack_230);
  }
  if (plStack_228 != (long *)0x0) {
    plVar5 = plStack_228 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_228 + 0x10))(plStack_228);
      plVar7 = plStack_228;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_228);
    }
  }
  if (plStack_230 != (long *)0x0) {
    return plVar7;
  }
  puVar3 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_230);
  puVar4 = puVar3;
  __Unwind_Resume();
  plStack_250 = plStack_228;
  pcStack_238 = FUN_10a597a4c;
  plVar7 = (long *)*plVar6;
  if ((((byte)puVar4[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar4 + 0x18) < 0xe7)) {
    puStack_248 = puVar3;
    pppuStack_240 = &pppuStack_200;
    func_0x00010988cc0c(&lStack_258);
    lVar8 = SUB168(SEXT816(lStack_258) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar7 = (long *)((((lVar8 >> 7) - (lVar8 >> 0x3f)) + (*plVar6 / 1000) * 2) * 1000);
  }
  return plVar7;
}



/* Entry: 10a597f00; end: 10a597f07;  */

long * FUN_10a597f00(undefined8 param_1,ulong param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lStack_208;
  long *plStack_200;
  undefined *puStack_1f8;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 ***pppuStack_1b0;
  code *pcStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 ***pppuStack_170;
  code *pcStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 ***pppuStack_130;
  code *pcStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined1 ***pppuStack_f0;
  code *pcStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar7 = param_4;
  FUN_10a597188(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_48,*param_4);
    plVar7 = &lStack_48;
    param_3 = plStack_40;
    (**(code **)(*plStack_40 + 0x38))(param_1,plStack_40);
  }
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar8 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      param_3 = plStack_38;
    }
  }
  if (plStack_40 != (long *)0x0) {
    return param_3;
  }
  plVar3 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_40);
  __Unwind_Resume(plVar3);
  pcStack_58 = FUN_10a5975f8;
  plVar6 = plVar7;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a597188(&plStack_90);
  if (plStack_90 != (long *)0x0) {
    func_0x00010988cc0c(&lStack_98,*plVar7);
    plVar6 = &lStack_98;
    plVar3 = plStack_90;
    (**(code **)(*plStack_90 + 0x40))(extraout_x8,plStack_90);
  }
  if (plStack_88 != (long *)0x0) {
    plVar7 = plStack_88 + 1;
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      plVar3 = plStack_88;
    }
  }
  if (plStack_90 != (long *)0x0) {
    return plVar3;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_90);
  __Unwind_Resume(plVar7);
  pcStack_a8 = FUN_10a5976b8;
  plVar3 = plVar6;
  ppuStack_b0 = &puStack_60;
  FUN_10a597188(&plStack_e0);
  if (plStack_e0 != (long *)0x0) {
    plVar7 = plStack_e0;
    (**(code **)(*plStack_e0 + 0x48))(extraout_x8_00,plStack_e0);
    plVar3 = plVar6;
  }
  if (plStack_d8 != (long *)0x0) {
    plVar6 = plStack_d8 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      plVar7 = plStack_d8;
    }
  }
  if (plStack_e0 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_e0);
  __Unwind_Resume(plVar7);
  pcStack_e8 = FUN_10a59776c;
  uVar10 = param_2;
  pppuStack_f0 = &ppuStack_b0;
  FUN_10a597188(&plStack_120);
  if (plStack_120 != (long *)0x0) {
    plVar7 = plStack_120;
    (**(code **)(*plStack_120 + 0x50))(extraout_x8_01,plStack_120);
    uVar10 = param_2;
  }
  if (plStack_118 != (long *)0x0) {
    plVar6 = plStack_118 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
      plVar7 = plStack_118;
    }
  }
  if (plStack_120 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_120);
  __Unwind_Resume(plVar7);
  pcStack_128 = FUN_10a597820;
  uVar9 = uVar10;
  pppuStack_130 = &pppuStack_f0;
  FUN_10a597188(&plStack_160);
  if (plStack_160 != (long *)0x0) {
    plVar7 = plStack_160;
    (**(code **)(*plStack_160 + 0x58))(extraout_x8_02,plStack_160);
    uVar9 = uVar10;
  }
  if (plStack_158 != (long *)0x0) {
    plVar6 = plStack_158 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_158);
      plVar7 = plStack_158;
    }
  }
  if (plStack_160 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_160);
  __Unwind_Resume(plVar7);
  pcStack_168 = FUN_10a5978d4;
  uVar10 = uVar9;
  pppuStack_170 = &pppuStack_130;
  FUN_10a597188(&plStack_1a0);
  if (plStack_1a0 != (long *)0x0) {
    uVar10 = (ulong)(uint)(((float)uVar9 + -32.0) * 0.5555556);
    plVar7 = plStack_1a0;
    (**(code **)(*plStack_1a0 + 0x58))(extraout_x8_03,uVar10,plStack_1a0);
  }
  if (plStack_198 != (long *)0x0) {
    plVar6 = plStack_198 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_198);
      plVar7 = plStack_198;
    }
  }
  if (plStack_1a0 != (long *)0x0) {
    return plVar7;
  }
  plVar7 = (long *)&UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_1a0);
  __Unwind_Resume(plVar7);
  pcStack_1a8 = FUN_10a597998;
  pppuStack_1b0 = &pppuStack_170;
  FUN_10a597188(&plStack_1e0);
  if (plStack_1e0 != (long *)0x0) {
    plVar7 = plStack_1e0;
    (**(code **)(*plStack_1e0 + 0x60))(extraout_x8_04,uVar10,plStack_1e0);
  }
  if (plStack_1d8 != (long *)0x0) {
    plVar6 = plStack_1d8 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      plVar7 = plStack_1d8;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d8);
    }
  }
  if (plStack_1e0 != (long *)0x0) {
    return plVar7;
  }
  puVar4 = &UNK_10f66473a;
  FUN_10a00946c();
  FUN_10a298038(&plStack_1e0);
  puVar5 = puVar4;
  __Unwind_Resume();
  plStack_200 = plStack_1d8;
  pcStack_1e8 = FUN_10a597a4c;
  plVar7 = (long *)*plVar3;
  if ((((byte)puVar5[0x1c] >> 6 & 1) == 0) && (*(int *)(puVar5 + 0x18) < 0xe7)) {
    puStack_1f8 = puVar4;
    pppuStack_1f0 = &pppuStack_1b0;
    func_0x00010988cc0c(&lStack_208);
    lVar8 = SUB168(SEXT816(lStack_208) * SEXT816(-0x20c49ba5e353f7cf),8);
    plVar7 = (long *)((((lVar8 >> 7) - (lVar8 >> 0x3f)) + (*plVar3 / 1000) * 2) * 1000);
  }
  return plVar7;
}



/* Entry: 10a597f08; end: 10a597fb3;  */

void FUN_10a597f08(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uStack_49;
  long *plStack_48;
  
  if (*param_2 != 0) {
    for (plVar3 = *(long **)(*param_2 + 0xf0); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      plStack_48 = plVar3 + 2;
      lVar1 = param_1 + 0x20;
      FUN_10a5c404c(lVar1,plStack_48,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
      for (plVar4 = (long *)plVar3[7]; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        plStack_48 = plVar4 + 2;
        lVar2 = lVar1 + 0x28;
        FUN_109cf993c(lVar2,plStack_48,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (lVar2 + 0x28,plVar4 + 5);
      }
    }
  }
  return;
}



/* Entry: 10a597fb4; end: 10a5980a7;  */

undefined1  [16] FUN_10a597fb4(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined1 *puStack_38;
  
  plVar6 = (long *)(param_1 + 0x88);
  if (*plVar6 == *(long *)(param_1 + 0x90)) {
    FUN_10a597188(&plStack_48);
    if (plStack_48 != (long *)0x0) {
      param_2 = param_1 + 0x70;
      (**(code **)(*plStack_48 + 0x68))(&uStack_60,plStack_48,param_2);
      FUN_10a5b8e00(plVar6);
      *(undefined8 *)(param_1 + 0x90) = uStack_58;
      *(undefined8 *)(param_1 + 0x88) = uStack_60;
      *(undefined8 *)(param_1 + 0x98) = uStack_50;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_60 = 0;
      puStack_38 = (undefined1 *)&uStack_60;
      FUN_10a1033c4(&puStack_38);
    }
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    if (plStack_48 == (long *)0x0) {
      puVar4 = &UNK_10f66473a;
      FUN_10a00946c(&UNK_10f66473a);
      FUN_10a298038(&plStack_48);
      __Unwind_Resume(puVar4);
      auVar8._8_8_ = 0xe;
      auVar8._0_8_ = &UNK_10f666a58;
      return auVar8;
    }
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = plVar6;
  return auVar7;
}



/* Entry: 10a5980a8; end: 10a59812b;  */

undefined1  [16] FUN_10a5980a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f666a58;
  return auVar1;
}



/* Entry: 10a59812c; end: 10a5981eb;  */

void FUN_10a59812c(undefined8 param_1)

{
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  puStack_80 = (undefined1 *)0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0xffffffff;
  FUN_10a5981ec(param_1,&puStack_88);
  puStack_98 = &DAT_10f664775;
  puStack_a0 = &DAT_10f664770;
  puStack_90 = &DAT_10f664785;
  puStack_88 = &UNK_10f66475a;
  uStack_78 = 3;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  puStack_80 = (undefined1 *)&puStack_a0;
  FUN_10a5c4b6c();
  func_0x00010a5c56dc(param_1);
  return;
}



/* Entry: 10a5981ec; end: 10a5982c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a598284) */

undefined1  [16] FUN_10a5981ec(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f666a58,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a5c4a70(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a5982c4; end: 10a598353;  */

undefined8 * FUN_10a5982c4(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uStack_31;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110bf6ef0;
  param_1[2] = 0;
  param_1[3] = param_2;
  FUN_10a05a5d4(param_1 + 4,&uStack_31);
  param_1[7] = 0;
  param_1[6] = param_1 + 7;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  return param_1;
}



/* Entry: 10a598354; end: 10a5983db;  */

undefined8 * FUN_10a598354(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + 7;
  func_0x00010a5c5798(param_1 + 6,*puVar1);
  param_1[6] = puVar1;
  param_1[8] = 0;
  *puVar1 = 0;
  puVar2 = param_1 + 10;
  func_0x00010a2aaee8(param_1 + 9,*puVar2);
  param_1[9] = puVar2;
  param_1[0xb] = 0;
  *puVar2 = 0;
  func_0x00010a5c5798(param_1 + 6,*puVar1);
  func_0x00010a05a86c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a5983dc; end: 10a5983df;  */

undefined8 * FUN_10a5983dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + 7;
  func_0x00010a5c5798(param_1 + 6,*puVar1);
  param_1[6] = puVar1;
  param_1[8] = 0;
  *puVar1 = 0;
  puVar2 = param_1 + 10;
  func_0x00010a2aaee8(param_1 + 9,*puVar2);
  param_1[9] = puVar2;
  param_1[0xb] = 0;
  *puVar2 = 0;
  func_0x00010a5c5798(param_1 + 6,*puVar1);
  func_0x00010a05a86c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a5983e0; end: 10a5983f3;  */

void FUN_10a5983e0(void)

{
  FUN_10a598354();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5983f4; end: 10a59854b;  */

long FUN_10a5983f4(long param_1)

{
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a59854c; end: 10a59b24b;  */

void FUN_10a59854c(long *param_1,long param_2)

{
  undefined2 uVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ushort uVar29;
  long lVar30;
  ulong *puVar31;
  ulong *puVar32;
  undefined8 *puVar33;
  long **pplVar34;
  long *plVar35;
  long lVar36;
  long *plVar37;
  undefined8 uVar38;
  long lVar39;
  long *plVar40;
  undefined2 uVar41;
  long *plVar42;
  long *plVar43;
  long lStack_1e0;
  ulong uStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  float fStack_1c0;
  long lStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  ulong uStack_198;
  float fStack_190;
  long lStack_180;
  ulong uStack_178;
  long lStack_170;
  long lStack_168;
  undefined4 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  float fStack_130;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  float fStack_100;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  float fStack_a0;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined ***pppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = &PTR_DAT_110bc3308;
  lVar12 = param_2 + 0xd48;
  FUN_10a5aeb74();
  param_1[0x1f] = param_1[0x1e];
  uVar7 = 0xffffffffffffffff;
  lVar13 = lVar12;
  do {
    lVar13 = *(long *)(lVar13 + 8);
    uVar7 = uVar7 + 1;
  } while (lVar13 != lVar12);
  if ((ulong)(param_1[0x20] - param_1[0x1e] >> 3) < uVar7) {
    if (uVar7 >> 0x3d == 0) {
      FUN_10a5b8e84();
      lVar39 = uVar7 - (param_1[0x1f] - param_1[0x1e]);
      _memcpy(lVar39);
      lVar13 = param_1[0x1e];
      param_1[0x1e] = lVar39;
      param_1[0x1f] = uVar7;
      param_1[0x20] = uVar7 + (long)ppuVar10 * 8;
      if (lVar13 != 0) {
        __ZdlPv();
      }
      goto LAB_10a598604;
    }
    FUN_10a5b8e70();
LAB_10a59b058:
    FUN_10a5b8eb8();
LAB_10a59b05c:
    FUN_10a5b8e70();
    goto LAB_10a59b068;
  }
LAB_10a598604:
  plVar35 = (long *)param_1[0x26];
  if (plVar35 != (long *)0x0) {
    if (plVar35[3] != 0) {
      func_0x00010a3f8868(plVar35,plVar35[2]);
      plVar35[2] = 0;
      lVar13 = plVar35[1];
      if (lVar13 != 0) {
        lVar39 = 0;
        do {
          *(undefined8 *)(*plVar35 + lVar39 * 8) = 0;
          lVar39 = lVar39 + 1;
        } while (lVar13 != lVar39);
      }
      plVar35[3] = 0;
      plVar35 = (long *)param_1[0x26];
    }
    if (plVar35[8] != 0) {
      plVar8 = (long *)plVar35[7];
      while (plVar8 != (long *)0x0) {
        plVar8 = (long *)*plVar8;
        __ZdlPv();
      }
      plVar35[7] = 0;
      lVar13 = plVar35[6];
      if (lVar13 != 0) {
        lVar39 = 0;
        do {
          *(undefined8 *)(plVar35[5] + lVar39 * 8) = 0;
          lVar39 = lVar39 + 1;
        } while (lVar13 != lVar39);
      }
      plVar35[8] = 0;
      plVar35 = (long *)param_1[0x26];
    }
    if (plVar35[0xd] != 0) {
      plVar8 = (long *)plVar35[0xc];
      while (plVar8 != (long *)0x0) {
        plVar8 = (long *)*plVar8;
        __ZdlPv();
      }
      plVar35[0xc] = 0;
      lVar13 = plVar35[0xb];
      if (lVar13 != 0) {
        lVar39 = 0;
        do {
          *(undefined8 *)(plVar35[10] + lVar39 * 8) = 0;
          lVar39 = lVar39 + 1;
        } while (lVar13 != lVar39);
      }
      plVar35[0xd] = 0;
      plVar35 = (long *)param_1[0x26];
    }
    if (plVar35[0x12] != 0) {
      func_0x00010a3f871c(plVar35 + 0xf,plVar35[0x11]);
      plVar35[0x11] = 0;
      lVar13 = plVar35[0x10];
      if (lVar13 != 0) {
        lVar39 = 0;
        do {
          *(undefined8 *)(plVar35[0xf] + lVar39 * 8) = 0;
          lVar39 = lVar39 + 1;
        } while (lVar13 != lVar39);
      }
      plVar35[0x12] = 0;
      plVar35 = (long *)param_1[0x26];
    }
    plVar35[0x15] = plVar35[0x14];
    FUN_10a5bac14(plVar35,(long)((float)(ulong)param_1[0x1c] / *(float *)(plVar35 + 4)));
    uVar7 = 0xffffffffffffffff;
    lVar13 = lVar12;
    do {
      lVar13 = *(long *)(lVar13 + 8);
      uVar7 = uVar7 + 1;
    } while (lVar13 != lVar12);
    FUN_10a5c6c9c(param_1[0x26] + 0x28,(long)((float)uVar7 / *(float *)(param_1[0x26] + 0x48)));
    uVar7 = 0xffffffffffffffff;
    lVar13 = lVar12;
    do {
      lVar13 = *(long *)(lVar13 + 8);
      uVar7 = uVar7 + 1;
    } while (lVar13 != lVar12);
    lVar39 = (long)((float)uVar7 / *(float *)(param_1[0x26] + 0x98));
    func_0x00010a5c6e6c(param_1[0x26] + 0x78);
    lVar30 = param_1[0x26];
    uVar7 = 0xffffffffffffffff;
    lVar13 = lVar12;
    do {
      lVar13 = *(long *)(lVar13 + 8);
      uVar7 = uVar7 + 1;
    } while (lVar13 != lVar12);
    lVar13 = *(long *)(lVar30 + 0xa0);
    if ((ulong)(*(long *)(lVar30 + 0xb0) - lVar13 >> 5) < uVar7) {
      if (uVar7 >> 0x3b != 0) goto LAB_10a59b058;
      lVar14 = *(long *)(lVar30 + 0xa8);
      FUN_10a5b8ecc();
      lVar13 = uVar7 + (lVar14 - lVar13);
      lVar36 = lVar13 - (*(long *)(lVar30 + 0xa8) - *(long *)(lVar30 + 0xa0));
      _memcpy(lVar36);
      lVar14 = *(long *)(lVar30 + 0xa0);
      *(long *)(lVar30 + 0xa0) = lVar36;
      *(long *)(lVar30 + 0xa8) = lVar13;
      *(ulong *)(lVar30 + 0xb0) = uVar7 + lVar39 * 0x20;
      if (lVar14 != 0) {
        __ZdlPv();
      }
    }
  }
  uStack_178 = 0;
  lStack_180 = 0;
  lStack_168 = 0;
  lStack_170 = 0;
  uStack_160 = 0x3f800000;
  plStack_1a8 = (long *)0x0;
  lStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  fStack_190 = 1.0;
  lVar13 = *(long *)(lVar12 + 8);
  if (lVar13 != lVar12) {
    do {
      plVar35 = *(long **)(lVar13 + 0x28);
      plStack_f0 = plVar35;
      if ((*(byte *)(plVar35 + 0x30) & 0x17) == 0) {
        plVar8 = plVar35;
        FUN_10a2d47c8();
        *(undefined4 *)(plVar35 + 0x9e) = 0;
        plVar35[0x9f] = 0;
        if (((ulong)plVar8 & 1) == 0) {
          plVar8 = param_1 + 0x21;
          FUN_10a5c703c(plVar8,plVar35,&plStack_f0);
          FUN_10a5c7444(plVar8 + 3,1,1);
          plStack_120 = (long *)CONCAT71(plStack_120._1_7_,1);
          FUN_10a5c7804(&plStack_c0,&plStack_120,1);
          FUN_10a59b24c(param_1,plVar35,0,0,&plStack_c0);
          func_0x00010a3f8758(&plStack_c0);
          FUN_10a59b5bc(plVar35,param_1 + 0x21);
        }
        else {
          plVar8 = plVar35;
          FUN_10a59b800();
          plStack_120 = plVar8;
          if ((plVar8 == (long *)0x0) || ((*(ushort *)(plVar8 + 0x30) >> 4 & 1) != 0)) {
            plVar8 = param_1 + 0x21;
            FUN_10a5c703c(plVar8,plVar35,&plStack_f0);
            FUN_10a5c7444(plVar8 + 3,3,3);
            uStack_150 = CONCAT71(uStack_150._1_7_,3);
            FUN_10a5c7804(&plStack_c0,&uStack_150,1);
            FUN_10a59b24c(param_1,plVar35,0,0,&plStack_c0);
          }
          else {
            *(undefined1 *)(plVar8 + 0xe2) = 1;
            FUN_10a59b908(param_1[0x26],plVar8);
            plVar17 = &lStack_180;
            FUN_10a5c7a64(plVar17,plVar8,&plStack_120);
            if (plVar17[6] != 8) {
              uVar41 = (undefined2)((uint)((int)param_1[0x1f] - (int)param_1[0x1e]) >> 3);
              uStack_150 = CONCAT62(uStack_150._2_6_,uVar41);
              *(undefined2 *)(plVar35 + 0x9e) = uVar41;
              uVar7 = ((ulong)(uint)((int)plVar8 << 3) + 8 ^ (ulong)plVar8 >> 0x20) *
                      -0x622015f714c7d297;
              uVar7 = ((ulong)plVar8 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
              plVar40 = (long *)((uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297);
              plVar17 = (long *)param_1[1];
              if (plVar17 != (long *)0x0) {
                uVar7 = (long)plVar17 - 1;
                if (((ulong)plVar17 & uVar7) == 0) {
                  plVar42 = (long *)(uVar7 & (ulong)plVar40);
                }
                else {
                  plVar42 = plVar40;
                  if (plVar17 <= plVar40) {
                    uVar22 = 0;
                    if (plVar17 != (long *)0x0) {
                      uVar22 = (ulong)plVar40 / (ulong)plVar17;
                    }
                    plVar42 = (long *)((long)plVar40 - uVar22 * (long)plVar17);
                  }
                }
                lVar39 = *param_1;
                puVar20 = *(undefined8 **)(lVar39 + (long)plVar42 * 8);
                if ((puVar20 != (undefined8 *)0x0) &&
                   (plVar11 = (long *)*puVar20, plVar11 != (long *)0x0)) {
LAB_10a598aac:
                  plVar16 = (long *)plVar11[1];
                  if (plVar16 == plVar40) {
                    if ((long *)plVar11[2] != plVar8) goto LAB_10a598af0;
                    if (((ulong)plVar17 & uVar7) == 0) {
                      plVar42 = (long *)(uVar7 & (ulong)plVar40);
                    }
                    else {
                      plVar42 = plVar40;
                      if (plVar17 <= plVar40) {
                        uVar22 = 0;
                        if (plVar17 != (long *)0x0) {
                          uVar22 = (ulong)plVar40 / (ulong)plVar17;
                        }
                        plVar42 = (long *)((long)plVar40 - uVar22 * (long)plVar17);
                      }
                    }
                    lVar30 = *plVar11;
                    plVar16 = *(long **)(lVar39 + (long)plVar42 * 8);
                    do {
                      plVar19 = plVar16;
                      plVar16 = (long *)*plVar19;
                    } while ((long *)*plVar19 != plVar11);
                    if (plVar19 == param_1 + 2) {
LAB_10a598b70:
                      if (lVar30 == 0) {
LAB_10a598ba4:
                        *(undefined8 *)(lVar39 + (long)plVar42 * 8) = 0;
                        lVar30 = *plVar11;
                        goto LAB_10a598bac;
                      }
                      plVar16 = *(long **)(lVar30 + 8);
                      if (((ulong)plVar17 & uVar7) == 0) {
                        plVar15 = (long *)((ulong)plVar16 & uVar7);
                      }
                      else {
                        plVar15 = plVar16;
                        if (plVar17 <= plVar16) {
                          uVar22 = 0;
                          if (plVar17 != (long *)0x0) {
                            uVar22 = (ulong)plVar16 / (ulong)plVar17;
                          }
                          plVar15 = (long *)((long)plVar16 - uVar22 * (long)plVar17);
                        }
                      }
                      if (plVar15 != plVar42) goto LAB_10a598ba4;
LAB_10a598bb4:
                      if (((ulong)plVar17 & uVar7) == 0) {
                        plVar16 = (long *)((ulong)plVar16 & uVar7);
                      }
                      else if (plVar17 <= plVar16) {
                        uVar7 = 0;
                        if (plVar17 != (long *)0x0) {
                          uVar7 = (ulong)plVar16 / (ulong)plVar17;
                        }
                        plVar16 = (long *)((long)plVar16 - uVar7 * (long)plVar17);
                      }
                      if (plVar16 != plVar42) {
                        *(long **)(*param_1 + (long)plVar16 * 8) = plVar19;
                        lVar30 = *plVar11;
                      }
                    }
                    else {
                      plVar16 = (long *)plVar19[1];
                      if (((ulong)plVar17 & uVar7) == 0) {
                        plVar16 = (long *)((ulong)plVar16 & uVar7);
                      }
                      else if (plVar17 <= plVar16) {
                        uVar22 = 0;
                        if (plVar17 != (long *)0x0) {
                          uVar22 = (ulong)plVar16 / (ulong)plVar17;
                        }
                        plVar16 = (long *)((long)plVar16 - uVar22 * (long)plVar17);
                      }
                      if (plVar16 != plVar42) goto LAB_10a598b70;
LAB_10a598bac:
                      if (lVar30 != 0) {
                        plVar16 = *(long **)(lVar30 + 8);
                        goto LAB_10a598bb4;
                      }
                    }
                    *plVar19 = lVar30;
                    *plVar11 = 0;
                    param_1[3] = param_1[3] + -1;
                    func_0x00010a3f8ab8(plVar11 + 3);
                    __ZdlPv(plVar11);
                  }
                  else {
                    if (((ulong)plVar17 & uVar7) == 0) {
                      plVar16 = (long *)((ulong)plVar16 & uVar7);
                    }
                    else if (plVar17 <= plVar16) {
                      uVar22 = 0;
                      if (plVar17 != (long *)0x0) {
                        uVar22 = (ulong)plVar16 / (ulong)plVar17;
                      }
                      plVar16 = (long *)((long)plVar16 - uVar22 * (long)plVar17);
                    }
                    if (plVar16 == plVar42) goto LAB_10a598af0;
                  }
                }
              }
LAB_10a598c0c:
              plVar17 = (long *)param_1[6];
              if (plVar17 != (long *)0x0) {
                uVar7 = (long)plVar17 - 1;
                if (((ulong)plVar17 & uVar7) == 0) {
                  plVar42 = (long *)(uVar7 & (ulong)plVar40);
                }
                else {
                  plVar42 = plVar40;
                  if (plVar17 <= plVar40) {
                    uVar22 = 0;
                    if (plVar17 != (long *)0x0) {
                      uVar22 = (ulong)plVar40 / (ulong)plVar17;
                    }
                    plVar42 = (long *)((long)plVar40 - uVar22 * (long)plVar17);
                  }
                }
                lVar39 = param_1[5];
                puVar20 = *(undefined8 **)(lVar39 + (long)plVar42 * 8);
                if ((puVar20 != (undefined8 *)0x0) &&
                   (plVar11 = (long *)*puVar20, plVar11 != (long *)0x0)) {
LAB_10a598c50:
                  plVar16 = (long *)plVar11[1];
                  if (plVar16 == plVar40) {
                    if ((long *)plVar11[2] != plVar8) goto LAB_10a598c94;
                    if (((ulong)plVar17 & uVar7) == 0) {
                      plVar42 = (long *)(uVar7 & (ulong)plVar40);
                    }
                    else {
                      plVar42 = plVar40;
                      if (plVar17 <= plVar40) {
                        uVar22 = 0;
                        if (plVar17 != (long *)0x0) {
                          uVar22 = (ulong)plVar40 / (ulong)plVar17;
                        }
                        plVar42 = (long *)((long)plVar40 - uVar22 * (long)plVar17);
                      }
                    }
                    lVar30 = *plVar11;
                    plVar16 = *(long **)(lVar39 + (long)plVar42 * 8);
                    do {
                      plVar19 = plVar16;
                      plVar16 = (long *)*plVar19;
                    } while ((long *)*plVar19 != plVar11);
                    if (plVar19 == param_1 + 7) {
LAB_10a598d14:
                      if (lVar30 == 0) {
LAB_10a598d48:
                        *(undefined8 *)(lVar39 + (long)plVar42 * 8) = 0;
                        lVar30 = *plVar11;
                        goto LAB_10a598d50;
                      }
                      plVar16 = *(long **)(lVar30 + 8);
                      if (((ulong)plVar17 & uVar7) == 0) {
                        plVar15 = (long *)((ulong)plVar16 & uVar7);
                      }
                      else {
                        plVar15 = plVar16;
                        if (plVar17 <= plVar16) {
                          uVar22 = 0;
                          if (plVar17 != (long *)0x0) {
                            uVar22 = (ulong)plVar16 / (ulong)plVar17;
                          }
                          plVar15 = (long *)((long)plVar16 - uVar22 * (long)plVar17);
                        }
                      }
                      if (plVar15 != plVar42) goto LAB_10a598d48;
LAB_10a598d58:
                      if (((ulong)plVar17 & uVar7) == 0) {
                        plVar16 = (long *)((ulong)plVar16 & uVar7);
                      }
                      else if (plVar17 <= plVar16) {
                        uVar7 = 0;
                        if (plVar17 != (long *)0x0) {
                          uVar7 = (ulong)plVar16 / (ulong)plVar17;
                        }
                        plVar16 = (long *)((long)plVar16 - uVar7 * (long)plVar17);
                      }
                      if (plVar16 != plVar42) {
                        *(long **)(param_1[5] + (long)plVar16 * 8) = plVar19;
                        lVar30 = *plVar11;
                      }
                    }
                    else {
                      plVar16 = (long *)plVar19[1];
                      if (((ulong)plVar17 & uVar7) == 0) {
                        plVar16 = (long *)((ulong)plVar16 & uVar7);
                      }
                      else if (plVar17 <= plVar16) {
                        uVar22 = 0;
                        if (plVar17 != (long *)0x0) {
                          uVar22 = (ulong)plVar16 / (ulong)plVar17;
                        }
                        plVar16 = (long *)((long)plVar16 - uVar22 * (long)plVar17);
                      }
                      if (plVar16 != plVar42) goto LAB_10a598d14;
LAB_10a598d50:
                      if (lVar30 != 0) {
                        plVar16 = *(long **)(lVar30 + 8);
                        goto LAB_10a598d58;
                      }
                    }
                    *plVar19 = lVar30;
                    *plVar11 = 0;
                    param_1[8] = param_1[8] + -1;
                    if (plVar11[4] != 0) {
                      __ZNSt3__119__shared_weak_count14__release_weakEv();
                    }
                    __ZdlPv(plVar11);
                  }
                  else {
                    if (((ulong)plVar17 & uVar7) == 0) {
                      plVar16 = (long *)((ulong)plVar16 & uVar7);
                    }
                    else if (plVar17 <= plVar16) {
                      uVar22 = 0;
                      if (plVar17 != (long *)0x0) {
                        uVar22 = (ulong)plVar16 / (ulong)plVar17;
                      }
                      plVar16 = (long *)((long)plVar16 - uVar22 * (long)plVar17);
                    }
                    if (plVar16 == plVar42) goto LAB_10a598c94;
                  }
                }
              }
LAB_10a598db4:
              plVar17 = &lStack_180;
              FUN_10a5c7a64(plVar17,plVar8,&plStack_120);
              FUN_10a5c7f40(plVar17 + 3,&uStack_150,&uStack_150);
              FUN_10a38cc90(&plStack_c0,plVar8);
              plVar17 = plStack_1a8;
              plVar42 = param_1;
              if (plStack_1a8 != (long *)0x0) {
                uVar7 = (long)plStack_1a8 - 1;
                if (((ulong)plStack_1a8 & uVar7) == 0) {
                  plVar42 = (long *)(uVar7 & (ulong)plVar40);
                }
                else {
                  plVar42 = plVar40;
                  if (plStack_1a8 <= plVar40) {
                    uVar22 = 0;
                    if (plStack_1a8 != (long *)0x0) {
                      uVar22 = (ulong)plVar40 / (ulong)plStack_1a8;
                    }
                    plVar42 = (long *)((long)plVar40 - uVar22 * (long)plStack_1a8);
                  }
                }
                puVar20 = *(undefined8 **)(lStack_1b0 + (long)plVar42 * 8);
                if (puVar20 != (undefined8 *)0x0) {
                  for (plVar11 = (long *)*puVar20; plVar11 != (long *)0x0;
                      plVar11 = (long *)*plVar11) {
                    plVar16 = (long *)plVar11[1];
                    if (plVar16 == plVar40) {
                      if ((long *)plVar11[2] == plVar8) goto LAB_10a5990fc;
                    }
                    else {
                      if (((ulong)plStack_1a8 & uVar7) == 0) {
                        plVar16 = (long *)((ulong)plVar16 & uVar7);
                      }
                      else if (plStack_1a8 <= plVar16) {
                        uVar22 = 0;
                        if (plStack_1a8 != (long *)0x0) {
                          uVar22 = (ulong)plVar16 / (ulong)plStack_1a8;
                        }
                        plVar16 = (long *)((long)plVar16 - uVar22 * (long)plStack_1a8);
                      }
                      if (plVar16 != plVar42) break;
                    }
                  }
                }
              }
              plVar11 = (long *)0x28;
              __Znwm();
              *plVar11 = 0;
              plVar11[1] = (long)plVar40;
              plVar11[3] = 0;
              plVar11[4] = 0;
              plVar11[2] = (long)plVar8;
              if ((plVar17 == (long *)0x0) ||
                 (fStack_190 * (float)plVar17 < (float)(uStack_198 + 1))) {
                uVar7 = 1;
                if ((long *)0x2 < plVar17) {
                  uVar7 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
                }
                plVar42 = (long *)(uVar7 | (long)plVar17 << 1);
                plVar16 = (long *)(long)((float)(uStack_198 + 1) / fStack_190);
                if (plVar42 <= plVar16) {
                  plVar42 = plVar16;
                }
                plVar16 = plVar17;
                if ((long)plVar42 - 1U == 0) {
                  plVar42 = (long *)0x2;
                }
                else if (((ulong)plVar42 & (long)plVar42 - 1U) != 0) {
                  __ZNSt3__112__next_primeEm();
                  plVar16 = plStack_1a8;
                }
                plVar17 = plVar42;
                if (plVar16 < plVar42) {
LAB_10a598f0c:
                  if ((ulong)plVar17 >> 0x3d != 0) {
                    func_0x000109ffded8();
                    goto LAB_10a59b068;
                  }
                  lVar39 = (long)plVar17 << 3;
                  __Znwm();
                  bVar3 = lStack_1b0 != 0;
                  lStack_1b0 = lVar39;
                  if (bVar3) {
                    __ZdlPv();
                  }
                  plVar42 = (long *)0x0;
                  do {
                    *(undefined8 *)(lStack_1b0 + (long)plVar42 * 8) = 0;
                    plVar42 = (long *)((long)plVar42 + 1);
                  } while (plVar17 != plVar42);
                  plStack_1a8 = plVar17;
                  if (plStack_1a0 != (long *)0x0) {
                    plVar42 = (long *)plStack_1a0[1];
                    uVar7 = (long)plVar17 - 1;
                    if (((ulong)plVar17 & uVar7) == 0) {
                      plVar42 = (long *)((ulong)plVar42 & uVar7);
                    }
                    else if (plVar17 <= plVar42) {
                      uVar22 = 0;
                      if (plVar17 != (long *)0x0) {
                        uVar22 = (ulong)plVar42 / (ulong)plVar17;
                      }
                      plVar42 = (long *)((long)plVar42 - uVar22 * (long)plVar17);
                    }
                    *(long ***)(lStack_1b0 + (long)plVar42 * 8) = &plStack_1a0;
                    plVar16 = (long *)*plStack_1a0;
                    plVar19 = plStack_1a0;
                    while (plVar16 != (long *)0x0) {
                      plVar15 = (long *)plVar16[1];
                      if (((ulong)plVar17 & uVar7) == 0) {
                        plVar15 = (long *)((ulong)plVar15 & uVar7);
                      }
                      else if (plVar17 <= plVar15) {
                        uVar22 = 0;
                        if (plVar17 != (long *)0x0) {
                          uVar22 = (ulong)plVar15 / (ulong)plVar17;
                        }
                        plVar15 = (long *)((long)plVar15 - uVar22 * (long)plVar17);
                      }
                      plVar37 = plVar16;
                      if (plVar15 != plVar42) {
                        if (*(long *)(lStack_1b0 + (long)plVar15 * 8) == 0) {
                          *(long **)(lStack_1b0 + (long)plVar15 * 8) = plVar19;
                          plVar42 = plVar15;
                        }
                        else {
                          *plVar19 = *plVar16;
                          *plVar16 = **(long **)(lStack_1b0 + (long)plVar15 * 8);
                          **(undefined8 **)(lStack_1b0 + (long)plVar15 * 8) = plVar16;
                          plVar37 = plVar19;
                        }
                      }
                      plVar19 = plVar37;
                      plVar16 = (long *)*plVar37;
                    }
                  }
                }
                else {
                  plVar17 = plVar16;
                  if (plVar42 < plVar16) {
                    plVar17 = (long *)(long)((float)uStack_198 / fStack_190);
                    if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else if ((long *)0x1 < plVar17) {
                      plVar17 = (long *)(1L << (-LZCOUNT((long)plVar17 - 1) & 0x3fU));
                    }
                    lVar39 = lStack_1b0;
                    if (plVar42 <= plVar17) {
                      plVar42 = plVar17;
                    }
                    plVar17 = plStack_1a8;
                    if (plVar42 < plVar16) {
                      plVar17 = plVar42;
                      if (plVar42 != (long *)0x0) goto LAB_10a598f0c;
                      lStack_1b0 = 0;
                      if (lVar39 != 0) {
                        __ZdlPv();
                      }
                      plStack_1a8 = (long *)0x0;
                      plVar17 = (long *)0x0;
                    }
                  }
                }
                if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
                  plVar42 = (long *)((long)plVar17 - 1U & (ulong)plVar40);
                }
                else {
                  plVar42 = plVar40;
                  if (plVar17 <= plVar40) {
                    uVar7 = 0;
                    if (plVar17 != (long *)0x0) {
                      uVar7 = (ulong)plVar40 / (ulong)plVar17;
                    }
                    plVar42 = (long *)((long)plVar40 - uVar7 * (long)plVar17);
                  }
                }
              }
              plVar40 = *(long **)(lStack_1b0 + (long)plVar42 * 8);
              if (plVar40 == (long *)0x0) {
                *plVar11 = (long)plStack_1a0;
                *(long ***)(lStack_1b0 + (long)plVar42 * 8) = &plStack_1a0;
                plStack_1a0 = plVar11;
                if (*plVar11 != 0) {
                  plVar40 = *(long **)(*plVar11 + 8);
                  if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
                    plVar40 = (long *)((ulong)plVar40 & (long)plVar17 - 1U);
                  }
                  else if (plVar17 <= plVar40) {
                    uVar7 = 0;
                    if (plVar17 != (long *)0x0) {
                      uVar7 = (ulong)plVar40 / (ulong)plVar17;
                    }
                    plVar40 = (long *)((long)plVar40 - uVar7 * (long)plVar17);
                  }
                  plVar40 = (long *)(lStack_1b0 + (long)plVar40 * 8);
                  goto LAB_10a5990ec;
                }
              }
              else {
                *plVar11 = *plVar40;
LAB_10a5990ec:
                *plVar40 = (long)plVar11;
              }
              uStack_198 = uStack_198 + 1;
LAB_10a5990fc:
              if (plStack_b8 != (long *)0x0) {
                plVar17 = plStack_b8 + 2;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar3) {
                    *plVar17 = *plVar17 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              lVar39 = plVar11[4];
              plVar11[4] = (long)plStack_b8;
              plVar11[3] = (long)plStack_c0;
              if (lVar39 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              plVar17 = plStack_b8;
              if (plStack_b8 != (long *)0x0) {
                plVar40 = plStack_b8 + 1;
                do {
                  lVar39 = *plVar40;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar40,0x10);
                  if (bVar3) {
                    *plVar40 = lVar39 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar39 == 0) {
                  (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
                }
              }
              plVar17 = &lStack_180;
              plVar40 = plVar8;
              FUN_10a5c7a64(plVar17,plVar8,&plStack_120);
              bVar4 = (byte)(1 << (ulong)((int)plVar17[6] - 1U & 0x1f));
              *(byte *)((long)plVar35 + 0x4f2) = bVar4;
              *(byte *)((long)plVar35 + 0x4f3) = *(byte *)((long)plVar35 + 0x4f3) | bVar4;
              puVar32 = (ulong *)param_1[0x1f];
              if (puVar32 < (ulong *)param_1[0x20]) {
                puVar31 = puVar32 + 1;
                *puVar32 = (ulong)plVar35;
              }
              else {
                lVar39 = (long)puVar32 - param_1[0x1e];
                uVar7 = (lVar39 >> 3) + 1;
                if (uVar7 >> 0x3d != 0) goto LAB_10a59b05c;
                uVar18 = param_1[0x20] - param_1[0x1e];
                uVar22 = (long)uVar18 >> 2;
                if (uVar22 <= uVar7) {
                  uVar22 = uVar7;
                }
                if (0x7ffffffffffffff7 < uVar18) {
                  uVar22 = 0x1fffffffffffffff;
                }
                FUN_10a5b8e84();
                puVar32 = (ulong *)(uVar22 + lVar39);
                puVar31 = puVar32 + 1;
                *puVar32 = (ulong)plVar35;
                lVar30 = (long)puVar32 - (param_1[0x1f] - param_1[0x1e]);
                _memcpy(lVar30);
                lVar39 = param_1[0x1e];
                param_1[0x1e] = lVar30;
                param_1[0x1f] = (long)puVar31;
                param_1[0x20] = uVar22 + (long)plVar40 * 8;
                if (lVar39 != 0) {
                  __ZdlPv();
                }
              }
              param_1[0x1f] = (long)puVar31;
              plStack_b8 = (long *)0x0;
              plStack_c0 = (long *)0x0;
              lStack_a8 = 0;
              plStack_b0 = (long *)0x0;
              fStack_a0 = 1.0;
              FUN_10a59b24c(param_1,plVar35,plVar8,1,&plStack_c0);
              func_0x00010a3f8758(&plStack_c0);
              goto LAB_10a598a04;
            }
            plVar17 = param_1 + 0x21;
            FUN_10a5c703c(plVar17,plVar35,&plStack_f0);
            FUN_10a5c7444(plVar17 + 3,4,4);
            uStack_150 = CONCAT71(uStack_150._1_7_,4);
            FUN_10a5c7804(&plStack_c0,&uStack_150,1);
            FUN_10a59b24c(param_1,plVar35,plVar8,0,&plStack_c0);
          }
          func_0x00010a3f8758(&plStack_c0);
          FUN_10a59b5bc(plVar35,param_1 + 0x21);
        }
      }
LAB_10a598a04:
      lVar13 = *(long *)(lVar13 + 8);
    } while (lVar13 != lVar12);
  }
  for (plVar35 = (long *)param_1[7]; plVar35 != (long *)0x0; plVar35 = (long *)*plVar35) {
    plVar8 = (long *)plVar35[4];
    if ((plVar8 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar8, plVar8 != (long *)0x0)) {
      plStack_c0 = (long *)plVar35[3];
      if ((plStack_c0 != (long *)0x0) && ((*(ushort *)(plStack_c0 + 0x30) >> 4 & 1) == 0)) {
        *(undefined1 *)(plStack_c0 + 0xe2) = 0;
        FUN_10a59b908(param_1[0x26]);
      }
      plVar17 = plVar8 + 1;
      do {
        lVar13 = *plVar17;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar3) {
          *plVar17 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  if (param_1[3] != 0) {
    func_0x00010a3f8a7c(param_1,param_1[2]);
    param_1[2] = 0;
    lVar13 = param_1[1];
    if (lVar13 != 0) {
      lVar39 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar39 * 8) = 0;
        lVar39 = lVar39 + 1;
      } while (lVar13 != lVar39);
    }
    param_1[3] = 0;
  }
  lVar13 = lStack_180;
  lStack_180 = 0;
  lVar39 = *param_1;
  *param_1 = lVar13;
  if (lVar39 != 0) {
    __ZdlPv();
  }
  uVar7 = uStack_178;
  plVar35 = param_1 + 5;
  param_1[2] = lStack_170;
  param_1[1] = uStack_178;
  uStack_178 = 0;
  param_1[3] = lStack_168;
  *(undefined4 *)(param_1 + 4) = uStack_160;
  if (lStack_168 != 0) {
    uVar22 = *(ulong *)(lStack_170 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar22 = uVar22 & uVar7 - 1;
    }
    else if (uVar7 <= uVar22) {
      uVar18 = 0;
      if (uVar7 != 0) {
        uVar18 = uVar22 / uVar7;
      }
      uVar22 = uVar22 - uVar18 * uVar7;
    }
    *(long **)(*param_1 + uVar22 * 8) = param_1 + 2;
    lStack_170 = 0;
    lStack_168 = 0;
  }
  if (param_1[8] != 0) {
    func_0x00010a3f8a04(plVar35,param_1[7]);
    param_1[7] = 0;
    lVar13 = param_1[6];
    if (lVar13 != 0) {
      lVar39 = 0;
      do {
        *(undefined8 *)(*plVar35 + lVar39 * 8) = 0;
        lVar39 = lVar39 + 1;
      } while (lVar13 != lVar39);
    }
    param_1[8] = 0;
  }
  lVar13 = lStack_1b0;
  lStack_1b0 = 0;
  lVar39 = *plVar35;
  *plVar35 = lVar13;
  if (lVar39 != 0) {
    __ZdlPv();
  }
  plVar8 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  param_1[7] = (long)plStack_1a0;
  param_1[8] = uStack_198;
  *(float *)(param_1 + 9) = fStack_190;
  param_1[6] = (long)plVar8;
  if (uStack_198 != 0) {
    plVar17 = (long *)plStack_1a0[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      plVar17 = (long *)((ulong)plVar17 & (long)plVar8 - 1U);
    }
    else if (plVar8 <= plVar17) {
      uVar7 = 0;
      if (plVar8 != (long *)0x0) {
        uVar7 = (ulong)plVar17 / (ulong)plVar8;
      }
      plVar17 = (long *)((long)plVar17 - uVar7 * (long)plVar8);
    }
    *(long **)(*plVar35 + (long)plVar17 * 8) = param_1 + 7;
    plStack_1a0 = (long *)0x0;
    uStack_198 = 0;
  }
  pppuStack_78 = (undefined ***)0x0;
  if (param_1[0x26] != 0) {
    ppuStack_90 = &PTR_FUN_110bf7bf0;
    pppuStack_78 = &ppuStack_90;
    plStack_88 = param_1;
  }
  uStack_1d8 = 0;
  lStack_1e0 = 0;
  lStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  fStack_1c0 = 1.0;
  FUN_10a5b9080(&lStack_1e0,(long)(float)(ulong)(param_1[0x1f] - param_1[0x1e] >> 3));
  puVar32 = (ulong *)param_1[0x1e];
  puVar31 = (ulong *)param_1[0x1f];
  if (puVar32 != puVar31) {
    do {
      uVar22 = *puVar32;
      uVar41 = *(undefined2 *)(uVar22 + 0x4f0);
      plVar35 = (long *)0x20;
      __Znwm();
      *(undefined2 *)(plVar35 + 3) = uVar41;
      uVar7 = ((ulong)(uint)((int)uVar22 << 3) + 8 ^ uVar22 >> 0x20) * -0x622015f714c7d297;
      uVar7 = (uVar22 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
      uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
      *plVar35 = 0;
      plVar35[1] = uVar7;
      plVar35[2] = uVar22;
      if (uStack_1d8 != 0) {
        uVar18 = uStack_1d8 - 1;
        if ((uStack_1d8 & uVar18) == 0) {
          uVar23 = uVar18 & uVar7;
        }
        else {
          uVar23 = uVar7;
          if (uStack_1d8 <= uVar7) {
            uVar23 = 0;
            if (uStack_1d8 != 0) {
              uVar23 = uVar7 / uStack_1d8;
            }
            uVar23 = uVar7 - uVar23 * uStack_1d8;
          }
        }
        plVar8 = *(long **)(lStack_1e0 + uVar23 * 8);
        if (plVar8 != (long *)0x0) {
          do {
            while( true ) {
              plVar8 = (long *)*plVar8;
              if (plVar8 == (long *)0x0) goto LAB_10a5995ec;
              uVar26 = plVar8[1];
              if (uVar26 != uVar7) break;
              if (plVar8[2] == uVar22) {
                __ZdlPv(plVar35);
                goto LAB_10a5996dc;
              }
            }
            if ((uStack_1d8 & uVar18) == 0) {
              uVar26 = uVar26 & uVar18;
            }
            else if (uStack_1d8 <= uVar26) {
              uVar5 = 0;
              if (uStack_1d8 != 0) {
                uVar5 = uVar26 / uStack_1d8;
              }
              uVar26 = uVar26 - uVar5 * uStack_1d8;
            }
          } while (uVar26 == uVar23);
        }
      }
LAB_10a5995ec:
      if ((uStack_1d8 == 0) || (fStack_1c0 * (float)uStack_1d8 < (float)(lStack_1c8 + 1))) {
        uVar7 = 1;
        if (2 < uStack_1d8) {
          uVar7 = (ulong)((uStack_1d8 & uStack_1d8 - 1) != 0);
        }
        uVar7 = uVar7 | uStack_1d8 << 1;
        uVar22 = (ulong)((float)(lStack_1c8 + 1) / fStack_1c0);
        if (uVar7 <= uVar22) {
          uVar7 = uVar22;
        }
        FUN_10a5b9080(&lStack_1e0,uVar7);
        uVar7 = plVar35[1];
      }
      uVar22 = uStack_1d8 - 1;
      if ((uStack_1d8 & uVar22) == 0) {
        uVar7 = uVar22 & uVar7;
      }
      else if (uStack_1d8 <= uVar7) {
        uVar18 = 0;
        if (uStack_1d8 != 0) {
          uVar18 = uVar7 / uStack_1d8;
        }
        uVar7 = uVar7 - uVar18 * uStack_1d8;
      }
      plVar8 = *(long **)(lStack_1e0 + uVar7 * 8);
      if (plVar8 == (long *)0x0) {
        *plVar35 = (long)plStack_1d0;
        plStack_1d0 = plVar35;
        *(long ***)(lStack_1e0 + uVar7 * 8) = &plStack_1d0;
        if (*plVar35 != 0) {
          uVar7 = *(ulong *)(*plVar35 + 8);
          if ((uStack_1d8 & uVar22) == 0) {
            uVar7 = uVar7 & uVar22;
          }
          else if (uStack_1d8 <= uVar7) {
            uVar22 = 0;
            if (uStack_1d8 != 0) {
              uVar22 = uVar7 / uStack_1d8;
            }
            uVar7 = uVar7 - uVar22 * uStack_1d8;
          }
          plVar8 = (long *)(lStack_1e0 + uVar7 * 8);
          goto LAB_10a5996cc;
        }
      }
      else {
        *plVar35 = *plVar8;
LAB_10a5996cc:
        *plVar8 = (long)plVar35;
      }
      lStack_1c8 = lStack_1c8 + 1;
LAB_10a5996dc:
      puVar32 = puVar32 + 1;
    } while (puVar32 != puVar31);
  }
  plVar35 = param_1 + 0xf;
  lVar13 = param_1[0x12];
  if (lVar13 == lStack_1c8) {
    pplVar34 = &plStack_1d0;
    do {
      pplVar34 = (long **)*pplVar34;
      if (pplVar34 == (long **)0x0) goto LAB_10a59974c;
      plVar8 = plVar35;
      FUN_10a5b9250(plVar35,pplVar34[2]);
    } while ((plVar8 != (long *)0x0) && ((short)plVar8[3] == *(short *)(pplVar34 + 3)));
  }
  *(undefined1 *)(param_1 + 0x27) = 1;
LAB_10a59974c:
  if (lVar13 != 0) {
    plVar8 = (long *)param_1[0x11];
    while (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      __ZdlPv();
    }
    param_1[0x11] = 0;
    lVar13 = param_1[0x10];
    if (lVar13 != 0) {
      lVar39 = 0;
      do {
        *(undefined8 *)(*plVar35 + lVar39 * 8) = 0;
        lVar39 = lVar39 + 1;
      } while (lVar13 != lVar39);
    }
    param_1[0x12] = 0;
  }
  lVar13 = lStack_1e0;
  lStack_1e0 = 0;
  lVar39 = *plVar35;
  *plVar35 = lVar13;
  if (lVar39 != 0) {
    __ZdlPv();
  }
  uVar7 = uStack_1d8;
  param_1[0x11] = (long)plStack_1d0;
  param_1[0x10] = uStack_1d8;
  uStack_1d8 = 0;
  param_1[0x12] = lStack_1c8;
  *(float *)(param_1 + 0x13) = fStack_1c0;
  if (lStack_1c8 != 0) {
    uVar22 = plStack_1d0[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar22 = uVar22 & uVar7 - 1;
    }
    else if (uVar7 <= uVar22) {
      uVar18 = 0;
      if (uVar7 != 0) {
        uVar18 = uVar22 / uVar7;
      }
      uVar22 = uVar22 - uVar18 * uVar7;
    }
    *(long **)(*plVar35 + uVar22 * 8) = param_1 + 0x11;
    plStack_1d0 = (long *)0x0;
    lStack_1c8 = 0;
  }
  plVar17 = *(long **)(param_2 + 0x5d0);
  plVar42 = *(long **)(param_2 + 0x5e0);
  plVar8 = (long *)*plVar17;
  plVar40 = (long *)*plVar8;
  if (plVar40 == plVar8) {
    do {
      plVar11 = plVar17 + 1;
      plVar16 = (long *)*plVar11;
      if (plVar16 == (long *)0x0) break;
      plVar40 = (long *)*plVar16;
      plVar8 = plVar16;
      plVar17 = plVar11;
    } while (plVar40 == plVar16);
  }
  plVar11 = plVar35;
  if (plVar40 != plVar42) {
    plVar16 = param_1 + 0x16;
    do {
      uVar7 = 0xf70c90fec9ecec4c;
      plVar19 = plVar40 + -0x14;
      plVar11 = plVar19;
      (**(code **)(*plVar19 + 0xf0))();
      if (plVar11 != (long *)0xf70c90fec9ecec4c) {
        if ((*(ushort *)(plVar40 + 0x1c) & 0x17) == 0) {
          lVar13 = *(long *)(plVar40[0x19] + 0x128);
          func_0x00010a59bcfc();
          if (lVar13 == 0) {
            FUN_10a5c8718(param_1 + 0x14,plVar19);
          }
          else {
            uVar22 = ((((ulong)plVar19 >> 3 & 0x3ffffff) << 6 | 8) ^ (ulong)plVar19 >> 0x20) *
                     -0x622015f714c7d297;
            uVar22 = ((ulong)plVar19 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
            uVar18 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
            uVar22 = param_1[0x15];
            if (uVar22 != 0) {
              uVar23 = uVar22 - 1;
              if ((uVar22 & uVar23) == 0) {
                uVar7 = uVar23 & uVar18;
              }
              else {
                uVar7 = uVar18;
                if (uVar22 <= uVar18) {
                  uVar7 = 0;
                  if (uVar22 != 0) {
                    uVar7 = uVar18 / uVar22;
                  }
                  uVar7 = uVar18 - uVar7 * uVar22;
                }
              }
              puVar20 = *(undefined8 **)(param_1[0x14] + uVar7 * 8);
              if (puVar20 != (undefined8 *)0x0) {
                for (plVar11 = (long *)*puVar20; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11)
                {
                  uVar26 = plVar11[1];
                  if (uVar26 == uVar18) {
                    if ((long *)plVar11[2] == plVar19) goto LAB_10a599c60;
                  }
                  else {
                    if ((uVar22 & uVar23) == 0) {
                      uVar26 = uVar26 & uVar23;
                    }
                    else if (uVar22 <= uVar26) {
                      uVar5 = 0;
                      if (uVar22 != 0) {
                        uVar5 = uVar26 / uVar22;
                      }
                      uVar26 = uVar26 - uVar5 * uVar22;
                    }
                    if (uVar26 != uVar7) break;
                  }
                }
              }
            }
            plVar11 = (long *)0x20;
            __Znwm();
            *plVar11 = 0;
            plVar11[1] = uVar18;
            plVar11[2] = (long)plVar19;
            plVar11[3] = 0;
            if ((uVar22 == 0) ||
               (*(float *)(param_1 + 0x18) * (float)uVar22 < (float)(param_1[0x17] + 1))) {
              uVar7 = 1;
              if (2 < uVar22) {
                uVar7 = (ulong)((uVar22 & uVar22 - 1) != 0);
              }
              uVar7 = uVar7 | uVar22 << 1;
              uVar23 = (ulong)((float)(param_1[0x17] + 1) / *(float *)(param_1 + 0x18));
              if (uVar7 <= uVar23) {
                uVar7 = uVar23;
              }
              if (uVar7 - 1 == 0) {
                uVar7 = 2;
              }
              else if ((uVar7 & uVar7 - 1) != 0) {
                __ZNSt3__112__next_primeEm();
                uVar22 = param_1[0x15];
              }
              if (uVar22 < uVar7) {
LAB_10a599a58:
                uVar22 = uVar7;
                if (uVar22 >> 0x3d != 0) goto LAB_10a59b04c;
                lVar39 = uVar22 << 3;
                __Znwm();
                lVar30 = param_1[0x14];
                param_1[0x14] = lVar39;
                if (lVar30 != 0) {
                  __ZdlPv();
                }
                uVar7 = 0;
                param_1[0x15] = uVar22;
                do {
                  *(undefined8 *)(param_1[0x14] + uVar7 * 8) = 0;
                  uVar7 = uVar7 + 1;
                } while (uVar22 != uVar7);
                plVar15 = (long *)*plVar16;
                if (plVar15 != (long *)0x0) {
                  uVar7 = plVar15[1];
                  uVar23 = uVar22 - 1;
                  if ((uVar22 & uVar23) == 0) {
                    uVar7 = uVar7 & uVar23;
                  }
                  else if (uVar22 <= uVar7) {
                    uVar26 = 0;
                    if (uVar22 != 0) {
                      uVar26 = uVar7 / uVar22;
                    }
                    uVar7 = uVar7 - uVar26 * uVar22;
                  }
                  *(long **)(param_1[0x14] + uVar7 * 8) = plVar16;
                  plVar37 = (long *)*plVar15;
                  while (plVar37 != (long *)0x0) {
                    uVar26 = plVar37[1];
                    if ((uVar22 & uVar23) == 0) {
                      uVar26 = uVar26 & uVar23;
                    }
                    else if (uVar22 <= uVar26) {
                      uVar5 = 0;
                      if (uVar22 != 0) {
                        uVar5 = uVar26 / uVar22;
                      }
                      uVar26 = uVar26 - uVar5 * uVar22;
                    }
                    plVar43 = plVar37;
                    if (uVar26 != uVar7) {
                      lVar39 = param_1[0x14];
                      if (*(long *)(lVar39 + uVar26 * 8) == 0) {
                        *(long **)(lVar39 + uVar26 * 8) = plVar15;
                        uVar7 = uVar26;
                      }
                      else {
                        *plVar15 = *plVar37;
                        *plVar37 = **(undefined8 **)(lVar39 + uVar26 * 8);
                        **(long **)(lVar39 + uVar26 * 8) = (long)plVar37;
                        plVar43 = plVar15;
                      }
                    }
                    plVar15 = plVar43;
                    plVar37 = (long *)*plVar43;
                  }
                }
              }
              else if (uVar7 < uVar22) {
                uVar23 = (ulong)((float)(ulong)param_1[0x17] / *(float *)(param_1 + 0x18));
                if ((uVar22 < 3) || ((uVar22 & uVar22 - 1) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if (1 < uVar23) {
                  uVar23 = 1L << (-LZCOUNT(uVar23 - 1) & 0x3fU);
                }
                if (uVar7 <= uVar23) {
                  uVar7 = uVar23;
                }
                if (uVar7 < uVar22) {
                  if (uVar7 != 0) goto LAB_10a599a58;
                  lVar39 = param_1[0x14];
                  param_1[0x14] = 0;
                  if (lVar39 != 0) {
                    __ZdlPv();
                  }
                  uVar22 = 0;
                  param_1[0x15] = 0;
                }
                else {
                  uVar22 = param_1[0x15];
                }
              }
              if ((uVar22 & uVar22 - 1) == 0) {
                uVar7 = uVar22 - 1 & uVar18;
              }
              else {
                uVar7 = uVar18;
                if (uVar22 <= uVar18) {
                  uVar7 = 0;
                  if (uVar22 != 0) {
                    uVar7 = uVar18 / uVar22;
                  }
                  uVar7 = uVar18 - uVar7 * uVar22;
                }
              }
            }
            lVar39 = param_1[0x14];
            plVar15 = *(long **)(lVar39 + uVar7 * 8);
            if (plVar15 == (long *)0x0) {
              *plVar11 = *plVar16;
              *plVar16 = (long)plVar11;
              *(long **)(lVar39 + uVar7 * 8) = plVar16;
              if (*plVar11 != 0) {
                uVar7 = *(ulong *)(*plVar11 + 8);
                if ((uVar22 & uVar22 - 1) == 0) {
                  uVar7 = uVar7 & uVar22 - 1;
                }
                else if (uVar22 <= uVar7) {
                  uVar18 = 0;
                  if (uVar22 != 0) {
                    uVar18 = uVar7 / uVar22;
                  }
                  uVar7 = uVar7 - uVar18 * uVar22;
                }
                plVar15 = (long *)(param_1[0x14] + uVar7 * 8);
                goto LAB_10a599c50;
              }
            }
            else {
              *plVar11 = *plVar15;
LAB_10a599c50:
              *plVar15 = (long)plVar11;
            }
            param_1[0x17] = param_1[0x17] + 1;
LAB_10a599c60:
            plVar11[3] = lVar13;
            if ((((char)param_1[0x27] != '\x01') &&
                (func_0x00010a59bd74(lVar13,plVar35), lVar13 != 0)) &&
               (plVar11 = plVar35, func_0x00010a5c8aa8(plVar35,lVar13), plVar11 != (long *)0x0)) {
              lVar13 = plVar11[3];
              plVar11 = param_1 + 10;
              plStack_c0 = plVar19;
              FUN_10a5c6a6c(plVar11,plVar19,&plStack_c0);
              *(short *)(plVar11 + 3) = (short)lVar13;
              goto LAB_10a599cd8;
            }
          }
          func_0x00010a5c88e0(param_1 + 10,plVar19);
        }
        else {
          FUN_10a5c8718(param_1 + 0x14,plVar19);
          func_0x00010a5c88e0(param_1 + 10,plVar19);
        }
      }
LAB_10a599cd8:
      plVar11 = (long *)0xf70c90fec9ecec4c;
      plVar40 = (long *)*plVar40;
      if (plVar40 == plVar8) {
        do {
          plVar19 = plVar17 + 1;
          plVar15 = (long *)*plVar19;
          if (plVar15 == (long *)0x0) break;
          plVar40 = (long *)*plVar15;
          plVar8 = plVar15;
          plVar17 = plVar19;
        } while (plVar40 == plVar15);
      }
    } while (plVar40 != plVar42);
  }
  plVar8 = *(long **)(param_2 + 0x608);
  plVar17 = *(long **)(param_2 + 0x618);
  plVar40 = (long *)*plVar8;
  plVar42 = (long *)*plVar40;
  if (plVar42 == plVar40) {
    do {
      plVar16 = plVar8 + 1;
      plVar19 = (long *)*plVar16;
      if (plVar19 == (long *)0x0) break;
      plVar42 = (long *)*plVar19;
      plVar8 = plVar16;
      plVar40 = plVar19;
    } while (plVar42 == plVar19);
  }
  if (plVar42 != plVar17) {
    plVar16 = param_1 + 0x1b;
    do {
      plVar19 = plVar42 + -0x14;
      if ((*(ushort *)(plVar42 + 0x1c) & 0x17) == 0) {
        lVar13 = *(long *)(plVar42[0x19] + 0x128);
        func_0x00010a59bcfc();
        if (lVar13 == 0) {
          func_0x00010a5c8b7c(param_1 + 0x19,plVar19);
        }
        else {
          uVar7 = ((((ulong)plVar19 >> 3 & 0x3ffffff) << 6 | 8) ^ (ulong)plVar19 >> 0x20) *
                  -0x622015f714c7d297;
          uVar7 = ((ulong)plVar19 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
          plVar37 = (long *)((uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297);
          plVar15 = (long *)param_1[0x1a];
          if (plVar15 != (long *)0x0) {
            uVar7 = (long)plVar15 - 1;
            if (((ulong)plVar15 & uVar7) == 0) {
              plVar11 = (long *)(uVar7 & (ulong)plVar37);
            }
            else {
              plVar11 = plVar37;
              if (plVar15 <= plVar37) {
                uVar22 = 0;
                if (plVar15 != (long *)0x0) {
                  uVar22 = (ulong)plVar37 / (ulong)plVar15;
                }
                plVar11 = (long *)((long)plVar37 - uVar22 * (long)plVar15);
              }
            }
            puVar20 = *(undefined8 **)(param_1[0x19] + (long)plVar11 * 8);
            if (puVar20 != (undefined8 *)0x0) {
              for (plVar43 = (long *)*puVar20; plVar43 != (long *)0x0; plVar43 = (long *)*plVar43) {
                plVar21 = (long *)plVar43[1];
                if (plVar21 == plVar37) {
                  if ((long *)plVar43[2] == plVar19) goto LAB_10a59a17c;
                }
                else {
                  if (((ulong)plVar15 & uVar7) == 0) {
                    plVar21 = (long *)((ulong)plVar21 & uVar7);
                  }
                  else if (plVar15 <= plVar21) {
                    uVar22 = 0;
                    if (plVar15 != (long *)0x0) {
                      uVar22 = (ulong)plVar21 / (ulong)plVar15;
                    }
                    plVar21 = (long *)((long)plVar21 - uVar22 * (long)plVar15);
                  }
                  if (plVar21 != plVar11) break;
                }
              }
            }
          }
          plVar43 = (long *)0x20;
          __Znwm();
          *plVar43 = 0;
          plVar43[1] = (long)plVar37;
          plVar43[2] = (long)plVar19;
          plVar43[3] = 0;
          if ((plVar15 == (long *)0x0) ||
             (*(float *)(param_1 + 0x1d) * (float)plVar15 < (float)(param_1[0x1c] + 1))) {
            uVar7 = 1;
            if ((long *)0x2 < plVar15) {
              uVar7 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
            }
            plVar11 = (long *)(uVar7 | (long)plVar15 << 1);
            plVar19 = (long *)(long)((float)(param_1[0x1c] + 1) / *(float *)(param_1 + 0x1d));
            if (plVar11 <= plVar19) {
              plVar11 = plVar19;
            }
            if ((long)plVar11 - 1U == 0) {
              plVar11 = (long *)0x2;
            }
            else if (((ulong)plVar11 & (long)plVar11 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
              plVar15 = (long *)param_1[0x1a];
            }
            if (plVar15 < plVar11) {
LAB_10a599f78:
              plVar15 = plVar11;
              if ((ulong)plVar15 >> 0x3d != 0) {
                func_0x000109ffded8();
                goto LAB_10a59b068;
              }
              lVar39 = (long)plVar15 << 3;
              __Znwm();
              lVar30 = param_1[0x19];
              param_1[0x19] = lVar39;
              if (lVar30 != 0) {
                __ZdlPv();
              }
              plVar11 = (long *)0x0;
              param_1[0x1a] = (long)plVar15;
              do {
                *(undefined8 *)(param_1[0x19] + (long)plVar11 * 8) = 0;
                plVar11 = (long *)((long)plVar11 + 1);
              } while (plVar15 != plVar11);
              plVar11 = (long *)*plVar16;
              if (plVar11 != (long *)0x0) {
                plVar19 = (long *)plVar11[1];
                uVar7 = (long)plVar15 - 1;
                if (((ulong)plVar15 & uVar7) == 0) {
                  plVar19 = (long *)((ulong)plVar19 & uVar7);
                }
                else if (plVar15 <= plVar19) {
                  uVar22 = 0;
                  if (plVar15 != (long *)0x0) {
                    uVar22 = (ulong)plVar19 / (ulong)plVar15;
                  }
                  plVar19 = (long *)((long)plVar19 - uVar22 * (long)plVar15);
                }
                *(long **)(param_1[0x19] + (long)plVar19 * 8) = plVar16;
                plVar21 = (long *)*plVar11;
                while (plVar21 != (long *)0x0) {
                  plVar25 = (long *)plVar21[1];
                  if (((ulong)plVar15 & uVar7) == 0) {
                    plVar25 = (long *)((ulong)plVar25 & uVar7);
                  }
                  else if (plVar15 <= plVar25) {
                    uVar22 = 0;
                    if (plVar15 != (long *)0x0) {
                      uVar22 = (ulong)plVar25 / (ulong)plVar15;
                    }
                    plVar25 = (long *)((long)plVar25 - uVar22 * (long)plVar15);
                  }
                  plVar24 = plVar21;
                  if (plVar25 != plVar19) {
                    lVar39 = param_1[0x19];
                    if (*(long *)(lVar39 + (long)plVar25 * 8) == 0) {
                      *(long **)(lVar39 + (long)plVar25 * 8) = plVar11;
                      plVar19 = plVar25;
                    }
                    else {
                      *plVar11 = *plVar21;
                      *plVar21 = **(undefined8 **)(lVar39 + (long)plVar25 * 8);
                      **(long **)(lVar39 + (long)plVar25 * 8) = (long)plVar21;
                      plVar24 = plVar11;
                    }
                  }
                  plVar11 = plVar24;
                  plVar21 = (long *)*plVar24;
                }
              }
            }
            else if (plVar11 < plVar15) {
              plVar19 = (long *)(long)((float)(ulong)param_1[0x1c] / *(float *)(param_1 + 0x1d));
              if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((long *)0x1 < plVar19) {
                plVar19 = (long *)(1L << (-LZCOUNT((long)plVar19 + -1) & 0x3fU));
              }
              if (plVar11 <= plVar19) {
                plVar11 = plVar19;
              }
              if (plVar11 < plVar15) {
                if (plVar11 != (long *)0x0) goto LAB_10a599f78;
                lVar39 = param_1[0x19];
                param_1[0x19] = 0;
                if (lVar39 != 0) {
                  __ZdlPv();
                }
                plVar15 = (long *)0x0;
                param_1[0x1a] = 0;
              }
              else {
                plVar15 = (long *)param_1[0x1a];
              }
            }
            if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
              plVar11 = (long *)((long)plVar15 - 1U & (ulong)plVar37);
            }
            else {
              plVar11 = plVar37;
              if (plVar15 <= plVar37) {
                uVar7 = 0;
                if (plVar15 != (long *)0x0) {
                  uVar7 = (ulong)plVar37 / (ulong)plVar15;
                }
                plVar11 = (long *)((long)plVar37 - uVar7 * (long)plVar15);
              }
            }
          }
          lVar39 = param_1[0x19];
          plVar19 = *(long **)(lVar39 + (long)plVar11 * 8);
          if (plVar19 == (long *)0x0) {
            *plVar43 = *plVar16;
            *plVar16 = (long)plVar43;
            *(long **)(lVar39 + (long)plVar11 * 8) = plVar16;
            if (*plVar43 != 0) {
              plVar19 = *(long **)(*plVar43 + 8);
              if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
                plVar19 = (long *)((ulong)plVar19 & (long)plVar15 - 1U);
              }
              else if (plVar15 <= plVar19) {
                uVar7 = 0;
                if (plVar15 != (long *)0x0) {
                  uVar7 = (ulong)plVar19 / (ulong)plVar15;
                }
                plVar19 = (long *)((long)plVar19 - uVar7 * (long)plVar15);
              }
              plVar19 = (long *)(param_1[0x19] + (long)plVar19 * 8);
              goto LAB_10a59a16c;
            }
          }
          else {
            *plVar43 = *plVar19;
LAB_10a59a16c:
            *plVar19 = (long)plVar43;
          }
          param_1[0x1c] = param_1[0x1c] + 1;
LAB_10a59a17c:
          plVar43[3] = lVar13;
        }
      }
      else {
        func_0x00010a5c8b7c(param_1 + 0x19,plVar19);
      }
      plVar42 = (long *)*plVar42;
      if (plVar42 == plVar40) {
        do {
          plVar19 = plVar8 + 1;
          plVar15 = (long *)*plVar19;
          if (plVar15 == (long *)0x0) break;
          plVar42 = (long *)*plVar15;
          plVar8 = plVar19;
          plVar40 = plVar15;
        } while (plVar42 == plVar15);
      }
    } while (plVar42 != plVar17);
  }
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  lStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  fStack_a0 = 1.0;
  uStack_e8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  fStack_d0 = 1.0;
  FUN_10a5c6854(&plStack_c0,(long)(float)(ulong)(param_1[0x1f] - param_1[0x1e] >> 3));
  FUN_10a5c6854(&plStack_f0,(long)(float)(ulong)(param_1[0x1f] - param_1[0x1e] >> 3));
  puVar28 = (undefined8 *)param_1[0x1f];
  for (puVar20 = (undefined8 *)param_1[0x1e]; puVar20 != puVar28; puVar20 = puVar20 + 1) {
    FUN_10a5b9324(*puVar20,plVar35,&plStack_c0,&plStack_f0);
  }
  FUN_10a5c6a24(&plStack_f0);
  FUN_10a5c6a24(&plStack_c0);
  if ((char)param_1[0x27] == '\x01') {
    if (param_1[0xd] != 0) {
      plVar40 = (long *)param_1[0xc];
      while (plVar40 != (long *)0x0) {
        plVar40 = (long *)*plVar40;
        __ZdlPv();
      }
      param_1[0xc] = 0;
      lVar13 = param_1[0xb];
      if (lVar13 != 0) {
        lVar39 = 0;
        do {
          *(undefined8 *)(param_1[10] + lVar39 * 8) = 0;
          lVar39 = lVar39 + 1;
        } while (lVar13 != lVar39);
      }
      param_1[0xd] = 0;
    }
    FUN_10a5b95b4(param_1 + 10,(long)((float)(ulong)param_1[0x17] / *(float *)(param_1 + 0xe)));
    plStack_b8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    lStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    fStack_a0 = 1.0;
    func_0x00010a5b9784(&plStack_c0,(long)(float)(ulong)param_1[0x12]);
    plVar40 = (long *)param_1[0x16];
    if (plVar40 != (long *)0x0) {
      do {
        plVar8 = plStack_b8;
        plVar42 = plStack_c0;
        uVar22 = plVar40[3];
        uVar7 = ((ulong)(uint)((int)uVar22 << 3) + 8 ^ uVar22 >> 0x20) * -0x622015f714c7d297;
        uVar7 = (uVar22 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
        plVar17 = (long *)((uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297);
        uVar7 = uVar22;
        if (plStack_b8 == (long *)0x0) {
          func_0x00010a59bd74(uVar22,plVar35);
          plVar11 = plVar35;
        }
        else {
          uVar18 = (long)plStack_b8 - 1;
          if (((ulong)plStack_b8 & uVar18) == 0) {
            plVar11 = (long *)((ulong)plVar17 & uVar18);
          }
          else {
            plVar11 = plVar17;
            if (plStack_b8 <= plVar17) {
              uVar23 = 0;
              if (plStack_b8 != (long *)0x0) {
                uVar23 = (ulong)plVar17 / (ulong)plStack_b8;
              }
              plVar11 = (long *)((long)plVar17 - uVar23 * (long)plStack_b8);
            }
          }
          plVar16 = (long *)plStack_c0[(long)plVar11];
          if (plVar16 != (long *)0x0) {
            do {
              while( true ) {
                plVar16 = (long *)*plVar16;
                if (plVar16 == (long *)0x0) goto LAB_10a59a420;
                plVar19 = (long *)plVar16[1];
                if (plVar19 != plVar17) break;
                if (plVar16[2] == uVar22) {
                  uVar7 = plVar16[3];
                  goto LAB_10a59a5bc;
                }
              }
              if (((ulong)plStack_b8 & uVar18) == 0) {
                plVar19 = (long *)((ulong)plVar19 & uVar18);
              }
              else if (plStack_b8 <= plVar19) {
                uVar23 = 0;
                if (plStack_b8 != (long *)0x0) {
                  uVar23 = (ulong)plVar19 / (ulong)plStack_b8;
                }
                plVar19 = (long *)((long)plVar19 - uVar23 * (long)plStack_b8);
              }
            } while (plVar19 == plVar11);
          }
LAB_10a59a420:
          uVar23 = (ulong)plStack_b8 & uVar18;
          func_0x00010a59bd74(uVar22,plVar35);
          if (uVar23 == 0) {
            plVar11 = (long *)((ulong)plVar17 & uVar18);
          }
          else {
            plVar11 = plVar17;
            if (plVar8 <= plVar17) {
              uVar23 = 0;
              if (plVar8 != (long *)0x0) {
                uVar23 = (ulong)plVar17 / (ulong)plVar8;
              }
              plVar11 = (long *)((long)plVar17 - uVar23 * (long)plVar8);
            }
          }
          plVar42 = (long *)plVar42[(long)plVar11];
          if (plVar42 != (long *)0x0) {
            do {
              while( true ) {
                plVar42 = (long *)*plVar42;
                if (plVar42 == (long *)0x0) goto LAB_10a59a4a8;
                plVar16 = (long *)plVar42[1];
                if (plVar16 != plVar17) break;
                if (plVar42[2] == uVar22) goto LAB_10a59a5bc;
              }
              if (((ulong)plVar8 & uVar18) == 0) {
                plVar16 = (long *)((ulong)plVar16 & uVar18);
              }
              else if (plVar8 <= plVar16) {
                uVar23 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar23 = (ulong)plVar16 / (ulong)plVar8;
                }
                plVar16 = (long *)((long)plVar16 - uVar23 * (long)plVar8);
              }
            } while (plVar16 == plVar11);
          }
        }
LAB_10a59a4a8:
        plVar42 = (long *)0x20;
        __Znwm();
        *plVar42 = 0;
        plVar42[1] = (long)plVar17;
        plVar42[2] = uVar22;
        plVar42[3] = uVar7;
        if ((plVar8 == (long *)0x0) || (fStack_a0 * (float)plVar8 < (float)(lStack_a8 + 1))) {
          uVar22 = 1;
          if ((long *)0x2 < plVar8) {
            uVar22 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
          }
          uVar22 = uVar22 | (long)plVar8 << 1;
          uVar18 = (ulong)((float)(lStack_a8 + 1) / fStack_a0);
          if (uVar22 <= uVar18) {
            uVar22 = uVar18;
          }
          func_0x00010a5b9784(&plStack_c0,uVar22);
          plVar8 = plStack_b8;
          if (((ulong)plStack_b8 & (long)plStack_b8 - 1U) == 0) {
            plVar11 = (long *)((long)plStack_b8 - 1U & (ulong)plVar17);
          }
          else {
            plVar11 = plVar17;
            if (plStack_b8 <= plVar17) {
              uVar22 = 0;
              if (plStack_b8 != (long *)0x0) {
                uVar22 = (ulong)plVar17 / (ulong)plStack_b8;
              }
              plVar11 = (long *)((long)plVar17 - uVar22 * (long)plStack_b8);
            }
          }
        }
        plVar16 = (long *)plStack_c0[(long)plVar11];
        if (plVar16 == (long *)0x0) {
          *plVar42 = (long)plStack_b0;
          plStack_c0[(long)plVar11] = (long)&plStack_b0;
          plStack_b0 = plVar42;
          if (*plVar42 != 0) {
            plVar16 = *(long **)(*plVar42 + 8);
            if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
              plVar16 = (long *)((ulong)plVar16 & (long)plVar8 - 1U);
            }
            else if (plVar8 <= plVar16) {
              uVar22 = 0;
              if (plVar8 != (long *)0x0) {
                uVar22 = (ulong)plVar16 / (ulong)plVar8;
              }
              plVar16 = (long *)((long)plVar16 - uVar22 * (long)plVar8);
            }
            plVar16 = plStack_c0 + (long)plVar16;
            goto LAB_10a59a5ac;
          }
        }
        else {
          *plVar42 = *plVar16;
LAB_10a59a5ac:
          *plVar16 = (long)plVar42;
        }
        lStack_a8 = lStack_a8 + 1;
LAB_10a59a5bc:
        if ((uVar7 != 0) &&
           (plVar42 = plVar35, FUN_10a5b9250(plVar35,uVar7), plVar42 != (long *)0x0)) {
          lVar13 = plVar42[3];
          plStack_f0 = (long *)plVar40[2];
          plVar42 = param_1 + 10;
          FUN_10a5c6a6c(plVar42,plStack_f0,&plStack_f0);
          *(short *)(plVar42 + 3) = (short)lVar13;
          *(long *)(uVar7 + 0x4f8) = plVar40[2];
        }
        plVar40 = (long *)*plVar40;
      } while (plVar40 != (long *)0x0);
    }
    FUN_10a5b9954(&plStack_c0);
    *(undefined1 *)(param_1 + 0x27) = 0;
  }
  plVar40 = (long *)param_1[0x1b];
  if (plVar40 != (long *)0x0) {
    plVar11 = (long *)param_1[0x26];
    plVar42 = plVar11 + 2;
    do {
      plStack_c0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      plStack_b0 = (long *)0x0;
      plVar16 = plStack_c0;
      plVar19 = plStack_b8;
      for (lVar13 = plVar40[3]; plStack_c0 = plVar16, plStack_b8 = plVar19, lVar13 != 0;
          lVar13 = *(long *)(lVar13 + 0x500)) {
        plVar16 = plVar35;
        FUN_10a5b9250(plVar35,lVar13);
        if (plVar16 != (long *)0x0) {
          FUN_10a5b999c(&plStack_c0,lVar13);
        }
        plVar16 = plStack_c0;
        plVar19 = plStack_b8;
      }
      lVar13 = 0;
      if (plVar19 != plVar16) {
        lVar13 = LZCOUNT((long)plVar19 - (long)plVar16 >> 3) * -2 + 0x7e;
      }
      plStack_f0 = plVar35;
      FUN_10a5b9a84(plVar16,plVar19,&plStack_f0,lVar13,1);
      for (plVar15 = plVar16; plVar19 != plVar15; plVar15 = plVar15 + 1) {
        lVar13 = *plVar15;
        if (plVar11 != (long *)0x0) {
          uVar7 = plVar40[2];
          uVar22 = ((ulong)(uint)((int)uVar7 << 3) + 8 ^ uVar7 >> 0x20) * -0x622015f714c7d297;
          uVar22 = (uVar7 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
          plVar37 = (long *)((uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297);
          plVar8 = (long *)plVar11[1];
          if (plVar8 != (long *)0x0) {
            uVar22 = (long)plVar8 - 1;
            if (((ulong)plVar8 & uVar22) == 0) {
              plVar17 = (long *)((ulong)plVar37 & uVar22);
            }
            else {
              plVar17 = plVar37;
              if (plVar8 <= plVar37) {
                uVar18 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar18 = (ulong)plVar37 / (ulong)plVar8;
                }
                plVar17 = (long *)((long)plVar37 - uVar18 * (long)plVar8);
              }
            }
            puVar20 = *(undefined8 **)(*plVar11 + (long)plVar17 * 8);
            if (puVar20 != (undefined8 *)0x0) {
              for (plVar43 = (long *)*puVar20; plVar43 != (long *)0x0; plVar43 = (long *)*plVar43) {
                plVar21 = (long *)plVar43[1];
                if (plVar21 == plVar37) {
                  if (plVar43[2] == uVar7) goto LAB_10a59a8b0;
                }
                else {
                  if (((ulong)plVar8 & uVar22) == 0) {
                    plVar21 = (long *)((ulong)plVar21 & uVar22);
                  }
                  else if (plVar8 <= plVar21) {
                    uVar18 = 0;
                    if (plVar8 != (long *)0x0) {
                      uVar18 = (ulong)plVar21 / (ulong)plVar8;
                    }
                    plVar21 = (long *)((long)plVar21 - uVar18 * (long)plVar8);
                  }
                  if (plVar21 != plVar17) break;
                }
              }
            }
          }
          plVar43 = (long *)0x30;
          __Znwm();
          *plVar43 = 0;
          plVar43[1] = (long)plVar37;
          plVar43[2] = plVar40[2];
          plVar43[3] = 0;
          plVar43[4] = 0;
          plVar43[5] = 0;
          if ((plVar8 == (long *)0x0) ||
             (*(float *)(plVar11 + 4) * (float)plVar8 < (float)(plVar11[3] + 1))) {
            uVar7 = 1;
            if ((long *)0x2 < plVar8) {
              uVar7 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
            }
            uVar7 = uVar7 | (long)plVar8 << 1;
            uVar22 = (ulong)((float)(plVar11[3] + 1) / *(float *)(plVar11 + 4));
            if (uVar7 <= uVar22) {
              uVar7 = uVar22;
            }
            FUN_10a5bac14(plVar11,uVar7);
            plVar8 = (long *)plVar11[1];
            if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
              plVar17 = (long *)((long)plVar8 - 1U & (ulong)plVar37);
            }
            else {
              plVar17 = plVar37;
              if (plVar8 <= plVar37) {
                uVar7 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar7 = (ulong)plVar37 / (ulong)plVar8;
                }
                plVar17 = (long *)((long)plVar37 - uVar7 * (long)plVar8);
              }
            }
          }
          lVar39 = *plVar11;
          plVar37 = *(long **)(lVar39 + (long)plVar17 * 8);
          if (plVar37 == (long *)0x0) {
            *plVar43 = *plVar42;
            *plVar42 = (long)plVar43;
            *(long **)(lVar39 + (long)plVar17 * 8) = plVar42;
            if (*plVar43 != 0) {
              plVar37 = *(long **)(*plVar43 + 8);
              if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
                plVar37 = (long *)((ulong)plVar37 & (long)plVar8 - 1U);
              }
              else if (plVar8 <= plVar37) {
                uVar7 = 0;
                if (plVar8 != (long *)0x0) {
                  uVar7 = (ulong)plVar37 / (ulong)plVar8;
                }
                plVar37 = (long *)((long)plVar37 - uVar7 * (long)plVar8);
              }
              plVar37 = (long *)(*plVar11 + (long)plVar37 * 8);
              goto LAB_10a59a8a0;
            }
          }
          else {
            *plVar43 = *plVar37;
LAB_10a59a8a0:
            *plVar37 = (long)plVar43;
          }
          plVar11[3] = plVar11[3] + 1;
LAB_10a59a8b0:
          FUN_10a5b999c(plVar43 + 3,lVar13);
        }
        plVar8 = (long *)plVar40[2];
        FUN_10a603408(plVar8,lVar13);
        if (plVar11 != (long *)0x0) {
          plStack_f0 = plVar8;
          if (pppuStack_78 == (undefined ***)0x0) {
            FUN_10a06186c();
            goto LAB_10a59b068;
          }
          (*(code *)(*pppuStack_78)[6])(pppuStack_78,&plStack_f0);
        }
      }
      if (plVar16 != (long *)0x0) {
        __ZdlPv();
      }
      plVar40 = (long *)*plVar40;
    } while (plVar40 != (long *)0x0);
  }
  puVar28 = (undefined8 *)param_1[0x1f];
  for (puVar20 = (undefined8 *)param_1[0x1e]; puVar20 != puVar28; puVar20 = puVar20 + 1) {
    uVar38 = *puVar20;
    uVar9 = uVar38;
    FUN_10a59b800(uVar38);
    plStack_b8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    lStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    fStack_a0 = 1.0;
    FUN_10a59b24c(param_1,uVar38,uVar9,1,&plStack_c0);
    func_0x00010a3f8758(&plStack_c0);
  }
  if (param_1[0x26] != 0) {
    plStack_b8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    lStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    fStack_a0 = 1.0;
    uStack_e8 = 0;
    plStack_f0 = (long *)0x0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    fStack_d0 = 1.0;
    plStack_118 = (long *)0x0;
    plStack_120 = (long *)0x0;
    lStack_108 = 0;
    plStack_110 = (long *)0x0;
    fStack_100 = 1.0;
    fStack_130 = 1.0;
    uVar7 = 0xffffffffffffffff;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lVar13 = lVar12;
    do {
      lVar13 = *(long *)(lVar13 + 8);
      uVar7 = uVar7 + 1;
    } while (lVar13 != lVar12);
    FUN_10a5c6854(&plStack_c0,(long)(float)uVar7);
    FUN_10a5b9080(&plStack_f0,(long)((float)(ulong)(param_1[0x1f] - param_1[0x1e] >> 3) / fStack_d0)
                 );
    uVar7 = 0xffffffffffffffff;
    lVar13 = lVar12;
    do {
      lVar13 = *(long *)(lVar13 + 8);
      uVar7 = uVar7 + 1;
    } while (lVar13 != lVar12);
    FUN_10a5c8d8c(&plStack_120,(long)((float)uVar7 / fStack_100));
    uVar7 = 0xffffffffffffffff;
    lVar13 = lVar12;
    do {
      lVar13 = *(long *)(lVar13 + 8);
      uVar7 = uVar7 + 1;
    } while (lVar13 != lVar12);
    FUN_10a5b9080(&uStack_150,(long)((float)uVar7 / fStack_130));
    lVar13 = param_1[0x1e];
    if (param_1[0x1f] != lVar13) {
      uVar7 = 0;
      uVar29 = 0;
      do {
        pplVar34 = &plStack_f0;
        FUN_10a5c8f5c(pplVar34,*(undefined8 *)(lVar13 + uVar7 * 8));
        *(ushort *)(pplVar34 + 3) = uVar29;
        uVar29 = uVar29 + 1;
        uVar7 = (ulong)uVar29;
        lVar13 = param_1[0x1e];
      } while (uVar7 < (ulong)(param_1[0x1f] - lVar13 >> 3));
    }
    lVar13 = *(long *)(lVar12 + 8);
    if (lVar13 != lVar12) {
      do {
        lVar39 = *(long *)(lVar13 + 0x28);
        lStack_158 = lVar39;
        FUN_10a5c662c(&plStack_c0,lVar39,lVar39);
        FUN_10a59bdf0(param_1,lVar39);
        plVar17 = plStack_118;
        uVar22 = *(ulong *)(lVar39 + 0x168);
        uVar7 = ((ulong)(uint)((int)uVar22 << 3) + 8 ^ uVar22 >> 0x20) * -0x622015f714c7d297;
        uVar7 = (uVar22 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
        plVar40 = (long *)((uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297);
        if (plStack_118 != (long *)0x0) {
          uVar7 = (long)plStack_118 - 1;
          if (((ulong)plStack_118 & uVar7) == 0) {
            plVar8 = (long *)((ulong)plVar40 & uVar7);
          }
          else {
            plVar8 = plVar40;
            if (plStack_118 <= plVar40) {
              uVar18 = 0;
              if (plStack_118 != (long *)0x0) {
                uVar18 = (ulong)plVar40 / (ulong)plStack_118;
              }
              plVar8 = (long *)((long)plVar40 - uVar18 * (long)plStack_118);
            }
          }
          if ((undefined8 *)plStack_120[(long)plVar8] != (undefined8 *)0x0) {
            for (plVar42 = *(long **)plStack_120[(long)plVar8]; plVar42 != (long *)0x0;
                plVar42 = (long *)*plVar42) {
              plVar11 = (long *)plVar42[1];
              if (plVar11 == plVar40) {
                if (plVar42[2] == uVar22) goto LAB_10a59ac9c;
              }
              else {
                if (((ulong)plStack_118 & uVar7) == 0) {
                  plVar11 = (long *)((ulong)plVar11 & uVar7);
                }
                else if (plStack_118 <= plVar11) {
                  uVar18 = 0;
                  if (plStack_118 != (long *)0x0) {
                    uVar18 = (ulong)plVar11 / (ulong)plStack_118;
                  }
                  plVar11 = (long *)((long)plVar11 - uVar18 * (long)plStack_118);
                }
                if (plVar11 != plVar8) break;
              }
            }
          }
        }
        plVar42 = (long *)0x20;
        __Znwm();
        *plVar42 = 0;
        plVar42[1] = (long)plVar40;
        plVar42[2] = uVar22;
        *(undefined2 *)(plVar42 + 3) = 0;
        if ((plVar17 == (long *)0x0) || (fStack_100 * (float)plVar17 < (float)(lStack_108 + 1))) {
          uVar7 = 1;
          if ((long *)0x2 < plVar17) {
            uVar7 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
          }
          uVar7 = uVar7 | (long)plVar17 << 1;
          uVar22 = (ulong)((float)(lStack_108 + 1) / fStack_100);
          if (uVar7 <= uVar22) {
            uVar7 = uVar22;
          }
          FUN_10a5c8d8c(&plStack_120,uVar7);
          plVar17 = plStack_118;
          if (((ulong)plStack_118 & (long)plStack_118 - 1U) == 0) {
            plVar8 = (long *)((long)plStack_118 - 1U & (ulong)plVar40);
          }
          else {
            plVar8 = plVar40;
            if (plStack_118 <= plVar40) {
              uVar7 = 0;
              if (plStack_118 != (long *)0x0) {
                uVar7 = (ulong)plVar40 / (ulong)plStack_118;
              }
              plVar8 = (long *)((long)plVar40 - uVar7 * (long)plStack_118);
            }
          }
        }
        plVar40 = (long *)plStack_120[(long)plVar8];
        if (plVar40 == (long *)0x0) {
          *plVar42 = (long)plStack_110;
          plStack_120[(long)plVar8] = (long)&plStack_110;
          plStack_110 = plVar42;
          if (*plVar42 != 0) {
            plVar40 = *(long **)(*plVar42 + 8);
            if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
              plVar40 = (long *)((ulong)plVar40 & (long)plVar17 - 1U);
            }
            else if (plVar17 <= plVar40) {
              uVar7 = 0;
              if (plVar17 != (long *)0x0) {
                uVar7 = (ulong)plVar40 / (ulong)plVar17;
              }
              plVar40 = (long *)((long)plVar40 - uVar7 * (long)plVar17);
            }
            plVar40 = plStack_120 + (long)plVar40;
            goto LAB_10a59ac8c;
          }
        }
        else {
          *plVar42 = *plVar40;
LAB_10a59ac8c:
          *plVar40 = (long)plVar42;
        }
        lStack_108 = lStack_108 + 1;
LAB_10a59ac9c:
        lVar30 = plVar42[3];
        puVar20 = &uStack_150;
        FUN_10a5c8f5c(puVar20,lVar39,&lStack_158);
        *(short *)(puVar20 + 3) = (short)lVar30;
        *(short *)(plVar42 + 3) = (short)plVar42[3] + 1;
        lVar13 = *(long *)(lVar13 + 8);
      } while (lVar13 != lVar12);
    }
    puVar20 = *(undefined8 **)(param_1[0x26] + 200);
    plVar8 = plStack_c0;
    while (plStack_c0 = plVar8, puVar20 != (undefined8 *)0x0) {
      func_0x00010a5c6560(plVar8,plStack_b8,puVar20[2]);
      if (plVar8 == (long *)0x0) {
        lVar13 = param_1[0x26];
        uVar22 = *(ulong *)(lVar13 + 0xc0);
        uVar7 = puVar20[1];
        uVar18 = uVar22 - 1;
        if ((uVar22 & uVar18) == 0) {
          uVar7 = uVar18 & uVar7;
        }
        else if (uVar22 <= uVar7) {
          uVar23 = 0;
          if (uVar22 != 0) {
            uVar23 = uVar7 / uVar22;
          }
          uVar7 = uVar7 - uVar23 * uVar22;
        }
        puVar33 = (undefined8 *)*puVar20;
        puVar28 = *(undefined8 **)(*(long *)(lVar13 + 0xb8) + uVar7 * 8);
        do {
          puVar27 = puVar28;
          puVar28 = (undefined8 *)*puVar27;
        } while ((undefined8 *)*puVar27 != puVar20);
        puVar28 = puVar33;
        if (puVar27 == (undefined8 *)(lVar13 + 200)) {
LAB_10a59ad7c:
          if (puVar33 == (undefined8 *)0x0) {
LAB_10a59adb4:
            *(undefined8 *)(*(long *)(lVar13 + 0xb8) + uVar7 * 8) = 0;
            puVar28 = (undefined8 *)*puVar20;
            goto LAB_10a59adbc;
          }
          uVar23 = puVar33[1];
          if ((uVar22 & uVar18) == 0) {
            uVar26 = uVar23 & uVar18;
          }
          else {
            uVar26 = uVar23;
            if (uVar22 <= uVar23) {
              uVar26 = 0;
              if (uVar22 != 0) {
                uVar26 = uVar23 / uVar22;
              }
              uVar26 = uVar23 - uVar26 * uVar22;
            }
          }
          if (uVar26 != uVar7) goto LAB_10a59adb4;
LAB_10a59adc4:
          if ((uVar22 & uVar18) == 0) {
            uVar23 = uVar23 & uVar18;
          }
          else if (uVar22 <= uVar23) {
            uVar18 = 0;
            if (uVar22 != 0) {
              uVar18 = uVar23 / uVar22;
            }
            uVar23 = uVar23 - uVar18 * uVar22;
          }
          if (uVar23 != uVar7) {
            *(undefined8 **)(*(long *)(lVar13 + 0xb8) + uVar23 * 8) = puVar27;
            puVar28 = (undefined8 *)*puVar20;
          }
        }
        else {
          uVar23 = puVar27[1];
          if ((uVar22 & uVar18) == 0) {
            uVar23 = uVar23 & uVar18;
          }
          else if (uVar22 <= uVar23) {
            uVar26 = 0;
            if (uVar22 != 0) {
              uVar26 = uVar23 / uVar22;
            }
            uVar23 = uVar23 - uVar26 * uVar22;
          }
          if (uVar23 != uVar7) goto LAB_10a59ad7c;
LAB_10a59adbc:
          if (puVar28 != (undefined8 *)0x0) {
            uVar23 = puVar28[1];
            goto LAB_10a59adc4;
          }
        }
        *puVar27 = puVar28;
        *puVar20 = 0;
        *(long *)(lVar13 + 0xd0) = *(long *)(lVar13 + 0xd0) + -1;
        __ZdlPv(puVar20);
        puVar20 = puVar33;
        plVar8 = plStack_c0;
      }
      else {
        puVar20 = (undefined8 *)*puVar20;
        plVar8 = plStack_c0;
      }
    }
    for (lVar13 = *(long *)(lVar12 + 8); lVar13 != lVar12; lVar13 = *(long *)(lVar13 + 8)) {
      lVar39 = *(long *)(lVar13 + 0x28);
      pplVar34 = &plStack_f0;
      func_0x00010a5c8aa8(pplVar34,lVar39);
      if (pplVar34 == (long **)0x0) {
        lVar30 = 0;
      }
      else {
        lVar30 = *(long *)(lVar39 + 0x500);
        while ((lVar30 != 0 &&
               (plVar8 = plVar35, FUN_10a5b9250(plVar35,lVar30), plVar8 == (long *)0x0))) {
          lVar30 = *(long *)(lVar30 + 0x500);
        }
      }
      lVar14 = param_1[0x26];
      plVar17 = param_1;
      FUN_10a59bdf0(param_1,lVar39);
      plVar8 = (long *)0x0;
      if (lVar30 != 0) {
        plVar8 = param_1;
        FUN_10a59bdf0(param_1,lVar30);
      }
      if (pplVar34 == (long **)0x0) {
        uVar41 = 0xffff;
      }
      else {
        uVar41 = *(undefined2 *)(pplVar34 + 3);
      }
      puVar20 = &uStack_150;
      lVar30 = lVar39;
      func_0x00010a5c8aa8();
      if (puVar20 == (undefined8 *)0x0) {
        FUN_109ffdddc(&UNK_10f639994);
        goto LAB_10a59b068;
      }
      uVar1 = *(undefined2 *)(puVar20 + 3);
      plVar40 = *(long **)(lVar14 + 0xa8);
      if (plVar40 < *(long **)(lVar14 + 0xb0)) {
        *plVar40 = lVar39;
        plVar40[1] = (long)plVar17;
        plVar40[2] = (long)plVar8;
        *(undefined2 *)(plVar40 + 3) = uVar41;
        *(undefined2 *)((long)plVar40 + 0x1a) = uVar1;
        plVar8 = plVar40 + 4;
        *(bool *)((long)plVar40 + 0x1c) = pplVar34 != (long **)0x0;
      }
      else {
        lVar36 = (long)plVar40 - *(long *)(lVar14 + 0xa0);
        uVar7 = (lVar36 >> 5) + 1;
        if (uVar7 >> 0x3b != 0) {
          FUN_10a5b8eb8();
          goto LAB_10a59b068;
        }
        uVar18 = (long)*(long **)(lVar14 + 0xb0) - *(long *)(lVar14 + 0xa0);
        uVar22 = (long)uVar18 >> 4;
        if (uVar22 <= uVar7) {
          uVar22 = uVar7;
        }
        if (0x7fffffffffffffdf < uVar18) {
          uVar22 = 0x7ffffffffffffff;
        }
        FUN_10a5b8ecc();
        plVar40 = (long *)(uVar22 + lVar36);
        *plVar40 = lVar39;
        plVar40[1] = (long)plVar17;
        plVar40[2] = (long)plVar8;
        *(undefined2 *)(plVar40 + 3) = uVar41;
        *(undefined2 *)((long)plVar40 + 0x1a) = uVar1;
        *(bool *)((long)plVar40 + 0x1c) = pplVar34 != (long **)0x0;
        plVar8 = plVar40 + 4;
        lVar36 = (long)plVar40 - (*(long *)(lVar14 + 0xa8) - *(long *)(lVar14 + 0xa0));
        _memcpy(lVar36);
        lVar39 = *(long *)(lVar14 + 0xa0);
        *(long *)(lVar14 + 0xa0) = lVar36;
        *(long **)(lVar14 + 0xa8) = plVar8;
        *(ulong *)(lVar14 + 0xb0) = uVar22 + lVar30 * 0x20;
        if (lVar39 != 0) {
          __ZdlPv();
        }
      }
      *(long **)(lVar14 + 0xa8) = plVar8;
    }
    func_0x00010a3f893c(&uStack_150);
    FUN_10a5c8d44(&plStack_120);
    func_0x00010a3f893c(&plStack_f0);
    FUN_10a5c6a24(&plStack_c0);
  }
  func_0x00010a3f893c(&lStack_1e0);
  if (pppuStack_78 == &ppuStack_90) {
    lVar12 = 0x20;
LAB_10a59afcc:
    (**(code **)((long)*pppuStack_78 + lVar12))();
  }
  else if (pppuStack_78 != (undefined ***)0x0) {
    lVar12 = 0x28;
    goto LAB_10a59afcc;
  }
  func_0x00010a3f89cc(&lStack_1b0);
  func_0x00010a3f8a44(&lStack_180);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10a59b04c:
  func_0x000109ffded8();
LAB_10a59b068:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a59b06c);
  (*pcVar6)();
LAB_10a598af0:
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) goto LAB_10a598c0c;
  goto LAB_10a598aac;
LAB_10a598c94:
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) goto LAB_10a598db4;
  goto LAB_10a598c50;
}



/* Entry: 10a59b24c; end: 10a59b5bb;  */

void FUN_10a59b24c(long param_1,ulong param_2,long param_3,undefined1 param_4,long param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong unaff_x26;
  float fVar13;
  undefined2 uStack_9a;
  undefined1 uStack_97;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  undefined4 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  if (*(long *)(param_1 + 0x130) == 0) {
    return;
  }
  uStack_9a = (undefined2)((ulong)param_3 >> 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x4f0);
  uStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  uStack_70 = *(undefined4 *)(param_5 + 0x20);
  FUN_10a5c7634(&lStack_90,*(undefined8 *)(param_5 + 8));
  for (plVar10 = *(long **)(param_5 + 0x10); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    FUN_10a5c7874(&lStack_90,*(undefined1 *)(plVar10 + 2),*(undefined1 *)(plVar10 + 2));
  }
  lVar11 = *(long *)(param_1 + 0x130);
  plVar10 = (long *)(lVar11 + 0x78);
  uVar5 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar5 = (param_2 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
  uVar12 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
  uVar5 = *(ulong *)(lVar11 + 0x80);
  if (uVar5 != 0) {
    uVar3 = uVar5 - 1;
    if ((uVar5 & uVar3) == 0) {
      unaff_x26 = uVar3 & uVar12;
    }
    else {
      unaff_x26 = uVar12;
      if (uVar5 <= uVar12) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar12 / uVar5;
        }
        unaff_x26 = uVar12 - uVar7 * uVar5;
      }
    }
    puVar6 = *(undefined8 **)(*plVar10 + unaff_x26 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar6; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar7 = plVar9[1];
        if (uVar7 == uVar12) {
          if (plVar9[2] == param_2) goto LAB_10a59b4dc;
        }
        else {
          if ((uVar5 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar5 <= uVar7) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar7 / uVar5;
            }
            uVar7 = uVar7 - uVar2 * uVar5;
          }
          if (uVar7 != unaff_x26) break;
        }
      }
    }
  }
  plVar9 = (long *)0x58;
  __Znwm();
  uStack_58 = 1;
  *plVar9 = 0;
  plVar9[1] = uVar12;
  plVar9[2] = param_2;
  plVar9[10] = 0;
  plVar9[9] = 0;
  plVar9[8] = 0;
  plVar9[7] = 0;
  plVar9[6] = 0;
  plVar9[5] = 0;
  plVar9[4] = 0;
  plVar9[3] = 0;
  *(undefined4 *)(plVar9 + 10) = 0x3f800000;
  fVar13 = (float)(*(long *)(lVar11 + 0x90) + 1);
  plStack_68 = plVar9;
  plStack_60 = plVar10;
  if ((uVar5 == 0) || (*(float *)(lVar11 + 0x98) * (float)uVar5 < fVar13)) {
    uVar3 = 1;
    if (2 < uVar5) {
      uVar3 = (ulong)((uVar5 & uVar5 - 1) != 0);
    }
    uVar3 = uVar3 | uVar5 << 1;
    uVar5 = (ulong)(fVar13 / *(float *)(lVar11 + 0x98));
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    func_0x00010a5c6e6c(plVar10,uVar3);
    uVar5 = *(ulong *)(lVar11 + 0x80);
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x26 = uVar5 - 1 & uVar12;
    }
    else {
      unaff_x26 = uVar12;
      if (uVar5 <= uVar12) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar12 / uVar5;
        }
        unaff_x26 = uVar12 - uVar3 * uVar5;
      }
    }
  }
  lVar8 = *plVar10;
  plVar4 = *(long **)(lVar8 + unaff_x26 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)(lVar11 + 0x88);
    *plVar9 = *plVar4;
    *plVar4 = (long)plVar9;
    *(long **)(lVar8 + unaff_x26 * 8) = plVar4;
    if (*plVar9 == 0) goto LAB_10a59b4d0;
    uVar12 = *(ulong *)(*plVar9 + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar12 = uVar12 & uVar5 - 1;
    }
    else if (uVar5 <= uVar12) {
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar12 / uVar5;
      }
      uVar12 = uVar12 - uVar3 * uVar5;
    }
    plVar4 = (long *)(*plVar10 + uVar12 * 8);
  }
  else {
    *plVar9 = *plVar4;
  }
  *plVar4 = (long)plVar9;
LAB_10a59b4d0:
  *(long *)(lVar11 + 0x90) = *(long *)(lVar11 + 0x90) + 1;
LAB_10a59b4dc:
  plVar9[4] = param_3;
  plVar9[3] = param_2;
  *(ulong *)((long)plVar9 + 0x26) = CONCAT44(uVar1,CONCAT13(uStack_97,CONCAT12(param_4,uStack_9a)));
  func_0x00010a5b901c(plVar9 + 6);
  lVar11 = lStack_90;
  lStack_90 = 0;
  lVar8 = plVar9[6];
  plVar9[6] = lVar11;
  if (lVar8 != 0) {
    __ZdlPv();
  }
  uVar5 = uStack_88;
  plVar9[8] = lStack_80;
  plVar9[7] = uStack_88;
  uStack_88 = 0;
  plVar9[9] = lStack_78;
  *(undefined4 *)(plVar9 + 10) = uStack_70;
  if (lStack_78 != 0) {
    uVar12 = *(ulong *)(lStack_80 + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar12 = uVar12 & uVar5 - 1;
    }
    else if (uVar5 <= uVar12) {
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar12 / uVar5;
      }
      uVar12 = uVar12 - uVar3 * uVar5;
    }
    *(long **)(plVar9[6] + uVar12 * 8) = plVar9 + 8;
    lStack_80 = 0;
    lStack_78 = 0;
  }
  func_0x00010a3f8758(&lStack_90);
  return;
}



/* Entry: 10a59b5bc; end: 10a59b7ff;  */

long * FUN_10a59b5bc(undefined8 param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uStack_b0;
  long *plStack_a8;
  
  plVar5 = param_2;
  FUN_10a5b8f00(param_2,param_1);
  if (plVar5 == (long *)0x0) {
    puVar4 = &UNK_10f639994;
    FUN_109ffdddc();
    plVar5 = *(long **)(puVar4 + 0x518);
    if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)
       ) {
      plVar6 = *(long **)(puVar4 + 0x510);
      plVar15 = plVar5 + 1;
      do {
        lVar8 = *plVar15;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar2) {
          *plVar15 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
      if (plVar6 != (long *)0x0) {
        return plVar6;
      }
    }
    plVar5 = *(long **)(puVar4 + 0x168);
    func_0x00010a42b410();
    if (plVar5 != (long *)0x0) {
      FUN_10a38cc90(&uStack_b0,plVar5);
      if (plStack_a8 != (long *)0x0) {
        plVar15 = plStack_a8 + 2;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar2) {
            *plVar15 = *plVar15 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lVar8 = *(long *)(puVar4 + 0x518);
      *(long **)(puVar4 + 0x518) = plStack_a8;
      *(undefined8 *)(puVar4 + 0x510) = uStack_b0;
      if (lVar8 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plStack_a8 != (long *)0x0) {
        plVar15 = plStack_a8 + 1;
        do {
          lVar8 = *plVar15;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar2) {
            *plVar15 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
        }
      }
    }
    return plVar5;
  }
  if (plVar5[6] != 0) {
    plVar15 = (long *)plVar5[5];
    uVar7 = uRam000000011330a9e8;
    do {
      if (plVar15 == (long *)0x0) {
        plVar15 = plVar5 + 3;
        if (plVar5[6] != 0) {
          plVar6 = (long *)plVar5[5];
          while (plVar6 != (long *)0x0) {
            plVar6 = (long *)*plVar6;
            __ZdlPv();
          }
          plVar5[5] = 0;
          lVar8 = plVar5[4];
          if (lVar8 != 0) {
            lVar10 = 0;
            do {
              *(undefined8 *)(*plVar15 + lVar10 * 8) = 0;
              lVar10 = lVar10 + 1;
            } while (lVar8 != lVar10);
          }
          plVar5[6] = 0;
          plVar15 = (long *)0x0;
        }
        return plVar15;
      }
      if ((uVar7 >> 1 & 1) != 0) {
        if (4 < *(byte *)(plVar15 + 2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a59b7f4);
          (*pcVar3)();
        }
        func_0x00010ae06f08(1,2,&UNK_10f666a67,&UNK_10f666aa0,0x26,&UNK_10f666b2c);
        uVar7 = uRam000000011330a9e8;
      }
      plVar15 = (long *)*plVar15;
    } while( true );
  }
  uVar11 = param_2[1];
  lVar8 = *plVar5;
  uVar9 = plVar5[1];
  uVar12 = uVar11 - 1;
  if ((uVar11 & uVar12) == 0) {
    uVar9 = uVar12 & uVar9;
  }
  else if (uVar11 <= uVar9) {
    uVar13 = 0;
    if (uVar11 != 0) {
      uVar13 = uVar9 / uVar11;
    }
    uVar9 = uVar9 - uVar13 * uVar11;
  }
  plVar15 = *(long **)(*param_2 + uVar9 * 8);
  do {
    plVar6 = plVar15;
    plVar15 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar5);
  if (plVar6 == param_2 + 2) {
LAB_10a59b738:
    if (lVar8 == 0) {
LAB_10a59b76c:
      *(undefined8 *)(*param_2 + uVar9 * 8) = 0;
      lVar8 = *plVar5;
      goto LAB_10a59b774;
    }
    uVar13 = *(ulong *)(lVar8 + 8);
    if ((uVar11 & uVar12) == 0) {
      uVar14 = uVar13 & uVar12;
    }
    else {
      uVar14 = uVar13;
      if (uVar11 <= uVar13) {
        uVar14 = 0;
        if (uVar11 != 0) {
          uVar14 = uVar13 / uVar11;
        }
        uVar14 = uVar13 - uVar14 * uVar11;
      }
    }
    if (uVar14 != uVar9) goto LAB_10a59b76c;
  }
  else {
    uVar13 = plVar6[1];
    if ((uVar11 & uVar12) == 0) {
      uVar13 = uVar13 & uVar12;
    }
    else if (uVar11 <= uVar13) {
      uVar14 = 0;
      if (uVar11 != 0) {
        uVar14 = uVar13 / uVar11;
      }
      uVar13 = uVar13 - uVar14 * uVar11;
    }
    if (uVar13 != uVar9) goto LAB_10a59b738;
LAB_10a59b774:
    if (lVar8 == 0) goto LAB_10a59b7b0;
    uVar13 = *(ulong *)(lVar8 + 8);
  }
  if ((uVar11 & uVar12) == 0) {
    uVar13 = uVar13 & uVar12;
  }
  else if (uVar11 <= uVar13) {
    uVar12 = 0;
    if (uVar11 != 0) {
      uVar12 = uVar13 / uVar11;
    }
    uVar13 = uVar13 - uVar12 * uVar11;
  }
  if (uVar13 != uVar9) {
    *(long **)(*param_2 + uVar13 * 8) = plVar6;
    lVar8 = *plVar5;
  }
LAB_10a59b7b0:
  *plVar6 = lVar8;
  *plVar5 = 0;
  param_2[3] = param_2[3] + -1;
  func_0x00010a3f8758(plVar5 + 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar5);
  return plVar5;
}



/* Entry: 10a59b800; end: 10a59b907;  */

long FUN_10a59b800(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  
  plVar4 = *(long **)(param_1 + 0x518);
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    lVar6 = *(long *)(param_1 + 0x510);
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    if (lVar6 != 0) {
      return lVar6;
    }
  }
  lVar6 = *(long *)(param_1 + 0x168);
  func_0x00010a42b410();
  if (lVar6 != 0) {
    FUN_10a38cc90(&uStack_40,lVar6);
    if (plStack_38 != (long *)0x0) {
      plVar4 = plStack_38 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar5 = *(long *)(param_1 + 0x518);
    *(long **)(param_1 + 0x518) = plStack_38;
    *(undefined8 *)(param_1 + 0x510) = uStack_40;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plStack_38 != (long *)0x0) {
      plVar4 = plStack_38 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
  }
  return lVar6;
}



/* Entry: 10a59b908; end: 10a59bcfb;  */

void FUN_10a59b908(long param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x25;
  float fVar17;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(undefined1 *)(param_2 + 0x710);
  uVar8 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar8 = (param_2 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  uVar16 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = *(ulong *)(param_1 + 0x58);
  if (uVar8 != 0) {
    uVar6 = uVar8 - 1;
    if ((uVar8 & uVar6) == 0) {
      unaff_x25 = uVar6 & uVar16;
    }
    else {
      unaff_x25 = uVar16;
      if (uVar8 <= uVar16) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar16 / uVar8;
        }
        unaff_x25 = uVar16 - uVar10 * uVar8;
      }
    }
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x50) + unaff_x25 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar9; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar10 = plVar15[1];
        if (uVar10 == uVar16) {
          if (plVar15[2] == param_2) goto LAB_10a59bc88;
        }
        else {
          if ((uVar8 & uVar6) == 0) {
            uVar10 = uVar10 & uVar6;
          }
          else if (uVar8 <= uVar10) {
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar7 * uVar8;
          }
          if (uVar10 != unaff_x25) break;
        }
      }
    }
  }
  plVar15 = (long *)0x20;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  plVar15[2] = param_2;
  *(undefined1 *)(plVar15 + 3) = 0;
  fVar17 = (float)(*(long *)(param_1 + 0x68) + 1);
  if ((uVar8 == 0) || (*(float *)(param_1 + 0x70) * (float)uVar8 < fVar17)) {
    uVar6 = 1;
    if (2 < uVar8) {
      uVar6 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar6 = uVar6 | uVar8 << 1;
    uVar10 = (ulong)(fVar17 / *(float *)(param_1 + 0x70));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar8 = *(ulong *)(param_1 + 0x58);
    }
    if (uVar8 < uVar6) {
LAB_10a59ba9c:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a59bce8);
        (*pcVar3)();
      }
      lVar4 = uVar6 << 3;
      __Znwm();
      lVar5 = *(long *)(param_1 + 0x50);
      *(long *)(param_1 + 0x50) = lVar4;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      uVar8 = 0;
      *(ulong *)(param_1 + 0x58) = uVar6;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x50) + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
      plVar11 = *(long **)(param_1 + 0x60);
      uVar8 = uVar6;
      if (plVar11 != (long *)0x0) {
        uVar10 = plVar11[1];
        uVar7 = uVar6 - 1;
        if ((uVar6 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar6 <= uVar10) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar14 * uVar6;
        }
        *(undefined8 **)(*(long *)(param_1 + 0x50) + uVar10 * 8) = (undefined8 *)(param_1 + 0x60);
        plVar12 = (long *)*plVar11;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar7) == 0) {
            uVar14 = uVar14 & uVar7;
          }
          else if (uVar6 <= uVar14) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar2 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar10) {
            lVar4 = *(long *)(param_1 + 0x50);
            if (*(long *)(lVar4 + uVar14 * 8) == 0) {
              *(long **)(lVar4 + uVar14 * 8) = plVar11;
              uVar10 = uVar14;
            }
            else {
              *plVar11 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar4 + uVar14 * 8);
              **(long **)(lVar4 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar11;
            }
          }
          plVar11 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar8) {
      uVar10 = (ulong)((float)*(ulong *)(param_1 + 0x68) / *(float *)(param_1 + 0x70));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar10) {
        uVar6 = uVar10;
      }
      if (uVar6 < uVar8) {
        if (uVar6 != 0) goto LAB_10a59ba9c;
        lVar4 = *(long *)(param_1 + 0x50);
        *(undefined8 *)(param_1 + 0x50) = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_1 + 0x58) = 0;
        uVar8 = 0;
      }
      else {
        uVar8 = *(ulong *)(param_1 + 0x58);
      }
    }
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar16;
    }
    else {
      unaff_x25 = uVar16;
      if (uVar8 <= uVar16) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar16 / uVar8;
        }
        unaff_x25 = uVar16 - uVar6 * uVar8;
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0x50);
  plVar11 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)(param_1 + 0x60);
    *plVar15 = *plVar11;
    *plVar11 = (long)plVar15;
    *(long **)(lVar4 + unaff_x25 * 8) = plVar11;
    if (*plVar15 == 0) goto LAB_10a59bc7c;
    uVar16 = *(ulong *)(*plVar15 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar16 = uVar16 & uVar8 - 1;
    }
    else if (uVar8 <= uVar16) {
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = uVar16 / uVar8;
      }
      uVar16 = uVar16 - uVar6 * uVar8;
    }
    plVar11 = (long *)(*(long *)(param_1 + 0x50) + uVar16 * 8);
  }
  else {
    *plVar15 = *plVar11;
  }
  *plVar11 = (long)plVar15;
LAB_10a59bc7c:
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
LAB_10a59bc88:
  *(undefined1 *)(plVar15 + 3) = uVar1;
  return;
}



/* Entry: 10a59bcfc; end: 10a59bdef;  */

long FUN_10a59bcfc(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    plVar3 = *(long **)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18) << 3;
    do {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        plVar1 = (long *)(lVar2 + 0xb0);
        (**(code **)(*plVar1 + 0x10))();
        if (plVar1 == (long *)0xf70c90fec9ecec4c) {
          return lVar2;
        }
      }
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 0;
}



/* Entry: 10a59bdf0; end: 10a59c1f3;  */

long FUN_10a59bdf0(long param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  
  lVar13 = *(long *)(param_1 + 0x130);
  if (lVar13 == 0) {
    return 0;
  }
  lVar14 = *(long *)(lVar13 + 0xe0);
  plVar3 = (long *)0x20;
  __Znwm();
  plVar3[2] = param_2;
  plVar3[3] = lVar14;
  uVar6 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
  uVar6 = (param_2 >> 0x20 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
  uVar5 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  *plVar3 = 0;
  plVar3[1] = uVar5;
  uVar6 = *(ulong *)(lVar13 + 0xc0);
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar7 & uVar5;
    }
    else {
      uVar8 = uVar5;
      if (uVar6 <= uVar5) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar5 / uVar6;
        }
        uVar8 = uVar5 - uVar8 * uVar6;
      }
    }
    puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0xb8) + uVar8 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar9; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar10 = plVar15[1];
        if (uVar10 == uVar5) {
          if (plVar15[2] == param_2) {
            __ZdlPv(plVar3);
            goto LAB_10a59c174;
          }
        }
        else {
          if ((uVar6 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar6 <= uVar10) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar10 / uVar6;
            }
            uVar10 = uVar10 - uVar1 * uVar6;
          }
          if (uVar10 != uVar8) break;
        }
      }
    }
  }
  fVar16 = (float)(*(long *)(lVar13 + 0xd0) + 1);
  if ((uVar6 == 0) || (*(float *)(lVar13 + 0xd8) * (float)uVar6 < fVar16)) {
    uVar5 = 1;
    if (2 < uVar6) {
      uVar5 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar5 = uVar5 | uVar6 << 1;
    uVar7 = (ulong)(fVar16 / *(float *)(lVar13 + 0xd8));
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar6 = *(ulong *)(lVar13 + 0xc0);
    }
    if (uVar6 < uVar5) {
LAB_10a59bf80:
      if (uVar5 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a59c1e0);
        (*pcVar2)();
      }
      lVar14 = uVar5 << 3;
      __Znwm();
      lVar4 = *(long *)(lVar13 + 0xb8);
      *(long *)(lVar13 + 0xb8) = lVar14;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar6 = 0;
      *(ulong *)(lVar13 + 0xc0) = uVar5;
      do {
        *(undefined8 *)(*(long *)(lVar13 + 0xb8) + uVar6 * 8) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
      plVar15 = *(long **)(lVar13 + 200);
      uVar6 = uVar5;
      if (plVar15 != (long *)0x0) {
        uVar7 = plVar15[1];
        uVar8 = uVar5 - 1;
        if ((uVar5 & uVar8) == 0) {
          uVar7 = uVar7 & uVar8;
        }
        else if (uVar5 <= uVar7) {
          uVar10 = 0;
          if (uVar5 != 0) {
            uVar10 = uVar7 / uVar5;
          }
          uVar7 = uVar7 - uVar10 * uVar5;
        }
        *(undefined8 **)(*(long *)(lVar13 + 0xb8) + uVar7 * 8) = (undefined8 *)(lVar13 + 200);
        plVar11 = (long *)*plVar15;
        while (plVar11 != (long *)0x0) {
          uVar10 = plVar11[1];
          if ((uVar5 & uVar8) == 0) {
            uVar10 = uVar10 & uVar8;
          }
          else if (uVar5 <= uVar10) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar1 * uVar5;
          }
          plVar12 = plVar11;
          if (uVar10 != uVar7) {
            lVar14 = *(long *)(lVar13 + 0xb8);
            if (*(long *)(lVar14 + uVar10 * 8) == 0) {
              *(long **)(lVar14 + uVar10 * 8) = plVar15;
              uVar7 = uVar10;
            }
            else {
              *plVar15 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar14 + uVar10 * 8);
              **(long **)(lVar14 + uVar10 * 8) = (long)plVar11;
              plVar12 = plVar15;
            }
          }
          plVar15 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar5 < uVar6) {
      uVar7 = (ulong)((float)*(ulong *)(lVar13 + 0xd0) / *(float *)(lVar13 + 0xd8));
      if ((uVar6 < 3) || ((uVar6 & uVar6 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar7) {
        uVar5 = uVar7;
      }
      if (uVar5 < uVar6) {
        if (uVar5 != 0) goto LAB_10a59bf80;
        lVar14 = *(long *)(lVar13 + 0xb8);
        *(undefined8 *)(lVar13 + 0xb8) = 0;
        if (lVar14 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(lVar13 + 0xc0) = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = *(ulong *)(lVar13 + 0xc0);
      }
    }
  }
  uVar7 = plVar3[1];
  uVar5 = uVar6 - 1;
  if ((uVar6 & uVar5) == 0) {
    uVar7 = uVar5 & uVar7;
  }
  else if (uVar6 <= uVar7) {
    uVar8 = 0;
    if (uVar6 != 0) {
      uVar8 = uVar7 / uVar6;
    }
    uVar7 = uVar7 - uVar8 * uVar6;
  }
  lVar14 = *(long *)(lVar13 + 0xb8);
  plVar15 = *(long **)(lVar14 + uVar7 * 8);
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)(lVar13 + 200);
    *plVar3 = *plVar15;
    *plVar15 = (long)plVar3;
    *(long **)(lVar14 + uVar7 * 8) = plVar15;
    if (*plVar3 == 0) goto LAB_10a59c158;
    uVar7 = *(ulong *)(*plVar3 + 8);
    if ((uVar6 & uVar5) == 0) {
      uVar7 = uVar7 & uVar5;
    }
    else if (uVar6 <= uVar7) {
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = uVar7 / uVar6;
      }
      uVar7 = uVar7 - uVar5 * uVar6;
    }
    plVar15 = (long *)(*(long *)(lVar13 + 0xb8) + uVar7 * 8);
  }
  else {
    *plVar3 = *plVar15;
  }
  *plVar15 = (long)plVar3;
LAB_10a59c158:
  *(long *)(lVar13 + 0xd0) = *(long *)(lVar13 + 0xd0) + 1;
  *(long *)(*(long *)(param_1 + 0x130) + 0xe0) = *(long *)(*(long *)(param_1 + 0x130) + 0xe0) + 1;
  plVar15 = plVar3;
LAB_10a59c174:
  return plVar15[3];
}



/* Entry: 10a59c1f4; end: 10a59c27f;  */

undefined8 * FUN_10a59c1f4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110bf7c80;
  if (param_1[8] != 0) {
    FUN_10a5c91ac(param_1[7]);
    param_1[7] = 0;
    lVar1 = param_1[6];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(param_1[5] + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[8] = 0;
  }
  func_0x00010a5c9238(param_1 + 2);
  FUN_10a5c91ac(param_1[7]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010a5c9238(param_1 + 2);
  return param_1;
}



/* Entry: 10a59c280; end: 10a59c283;  */

undefined8 * FUN_10a59c280(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110bf7c80;
  if (param_1[8] != 0) {
    FUN_10a5c91ac(param_1[7]);
    param_1[7] = 0;
    lVar1 = param_1[6];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(param_1[5] + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[8] = 0;
  }
  func_0x00010a5c9238(param_1 + 2);
  FUN_10a5c91ac(param_1[7]);
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010a5c9238(param_1 + 2);
  return param_1;
}



/* Entry: 10a59c284; end: 10a59c297;  */

void FUN_10a59c284(void)

{
  FUN_10a59c1f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a59c298; end: 10a59c61f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a59c298(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 ******ppppppuVar1;
  undefined8 **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *******pppppppuVar7;
  byte bVar8;
  code *pcVar9;
  undefined8 *******pppppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ***pppuVar13;
  undefined8 **ppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 *puVar18;
  undefined8 ****ppppuVar19;
  undefined8 *****pppppuVar20;
  ulong uVar21;
  undefined8 *****pppppuVar22;
  undefined8 *****pppppuStack_1c0;
  undefined8 *******pppppppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 ******ppppppuStack_1a8;
  undefined8 ******ppppppuStack_1a0;
  undefined8 ******ppppppuStack_198;
  undefined **ppuStack_190;
  undefined8 *****pppppuStack_188;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  ulong uStack_170;
  undefined8 *******pppppppuStack_168;
  ulong uStack_160;
  undefined8 *******pppppppuStack_158;
  undefined8 ****ppppuStack_150;
  undefined8 ******ppppppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 *******pppppppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  undefined8 *******pppppppuStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  byte bStack_f1;
  undefined8 ******ppppppuStack_f0;
  undefined8 *****pppppuStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 *****apppppuStack_98 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c8 = 0x12;
  puStack_d0 = &DAT_10f641387;
  uStack_c0 = 0xc20b28733a8f1f0c;
  __ZNSt3__19to_stringEj(&pppppppuStack_128,*(undefined4 *)param_3);
  pppppppuVar10 = &pppppppuStack_128;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar10,&DAT_10f62b0e2,1);
  ppppppuStack_a8 = pppppppuVar10[1];
  ppppppuStack_b0 = *pppppppuVar10;
  ppppppuStack_a0 = pppppppuVar10[2];
  pppppppuVar10[1] = (undefined8 ******)0x0;
  pppppppuVar10[2] = (undefined8 ******)0x0;
  *pppppppuVar10 = (undefined8 ******)0x0;
  __ZNSt3__19to_stringEj(&pppppppuStack_108,*(undefined4 *)((long)param_3 + 4));
  uVar3 = CONCAT44(uStack_fc,uStack_100);
  pppppppuVar10 = pppppppuStack_108;
  if (-1 < (char)bStack_f1) {
    uVar3 = (ulong)bStack_f1;
    pppppppuVar10 = &pppppppuStack_108;
  }
  ppppppuVar11 = &ppppppuStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar11,pppppppuVar10,uVar3);
  pppppuStack_e8 = ppppppuVar11[1];
  ppppppuStack_f0 = (undefined8 ******)*ppppppuVar11;
  pppppuStack_e0 = ppppppuVar11[2];
  ppppppuVar11[1] = (undefined8 *****)0x0;
  ppppppuVar11[2] = (undefined8 *****)0x0;
  *ppppppuVar11 = (undefined8 *****)0x0;
  if ((char)bStack_f1 < '\0') {
    __ZdlPv(pppppppuStack_108);
  }
  if ((long)ppppppuStack_a0 < 0) {
    __ZdlPv(ppppppuStack_b0);
  }
  if ((char)bStack_111 < '\0') {
    __ZdlPv(pppppppuStack_128);
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&pppppppuStack_128,&UNK_10f664a2c,&ppppppuStack_f0);
  bVar8 = bStack_111;
  pppppppuVar16 = pppppppuStack_128;
  uVar21 = (ulong)bStack_111;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&pppppppuStack_108,&UNK_10f664a3d,&ppppppuStack_f0);
  uVar3 = uStack_120;
  pppppppuVar10 = pppppppuVar16;
  if (-1 < (char)bVar8) {
    uVar3 = uVar21;
    pppppppuVar10 = &pppppppuStack_128;
  }
  uVar4 = CONCAT44(uStack_fc,uStack_100);
  pppppppuVar7 = pppppppuStack_108;
  if (-1 < (char)bStack_f1) {
    uVar4 = (ulong)bStack_f1;
    pppppppuVar7 = &pppppppuStack_108;
  }
  FUN_10ab451f4(&ppppppuStack_b0,0,pppppppuVar10,uVar3,pppppppuVar7,uVar4,&UNK_10f664a4a,0x17,1);
  if ((char)bStack_f1 < '\0') {
    __ZdlPv(pppppppuStack_108);
  }
  if ((char)bStack_111 < '\0') {
    __ZdlPv(pppppppuStack_128);
  }
  pppppppuStack_108 = (undefined8 *******)NEON_ucvtf(*param_3,4);
  uStack_100 = 0x3f800000;
  if (*(char *)(param_3 + 1) == '\0') {
    uStack_100 = 0;
  }
  if (ppppppuStack_b0[0x45] == ppppppuStack_b0[0x46]) {
    ppppuVar19 = (undefined8 ****)0x0;
  }
  else {
    ppppuVar19 = *ppppppuStack_b0[0x45];
  }
  func_0x000107c2b074(&pppppppuStack_128,&puStack_d0);
  pppppppuVar10 = &pppppppuStack_128;
  FUN_10a0d9d6c(ppppuVar19,pppppppuVar10,&pppppppuStack_108);
  if ((char)bStack_111 < '\0') {
    __ZdlPv(pppppppuStack_128);
  }
  param_1[1] = ppppppuStack_a8;
  *param_1 = ppppppuStack_b0;
  if (ppppppuStack_a8 != (undefined8 ******)0x0) {
    ppppppuVar11 = ppppppuStack_a8 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar11,0x10);
      if (bVar6) {
        *ppppppuVar11 = (undefined8 *****)((long)*ppppppuVar11 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a044790(&ppppppuStack_a0);
  ppppppuVar11 = apppppuStack_98;
  (*(code *)*apppppuStack_98[0])();
  ppppppuVar12 = ppppppuStack_a8;
  if (ppppppuStack_a8 != (undefined8 ******)0x0) {
    ppppppuVar1 = ppppppuStack_a8 + 1;
    do {
      pppppuVar17 = *ppppppuVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
      if (bVar6) {
        *ppppppuVar1 = (undefined8 *****)((long)pppppuVar17 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppuVar17 == (undefined8 *****)0x0) {
      (*(code *)(*ppppppuStack_a8)[2])(ppppppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppuVar11 = ppppppuVar12;
    }
  }
  if ((long)pppppuStack_e0 < 0) {
    ppppppuVar11 = ppppppuStack_f0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_111 < '\0') {
    __ZdlPv(pppppppuStack_128);
  }
  func_0x00010a015cb4(&ppppppuStack_b0);
  if ((long)pppppuStack_e0 < 0) {
    __ZdlPv(ppppppuStack_f0);
  }
  ppppppuVar12 = ppppppuVar11;
  __Unwind_Resume();
  pppppuVar17 = &pppppuStack_1c0;
  pppppuVar22 = &pppppuStack_1c0;
  uStack_170 = uStack_120;
  pppppppuStack_168 = pppppppuVar16;
  pcStack_138 = FUN_10a59c620;
  pppuVar13 = ppppppuVar12[1][0x20][0x39];
  pppppppuVar16 = pppppppuVar10;
  uStack_160 = uVar21;
  pppppppuStack_158 = &pppppppuStack_108;
  ppppuStack_150 = ppppuVar19;
  ppppppuStack_148 = ppppppuVar11;
  puStack_140 = &stack0xfffffffffffffff0;
  (*(code *)(*pppuVar13)[0x20])();
  ppuStack_180 = (undefined8 **)0x0;
  ppuStack_178 = (undefined8 **)0x0;
  ppuVar14 = pppuVar13[1];
  if (((ppuVar14 == (undefined8 **)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_178 = ppuVar14,
      ppuVar14 == (undefined8 **)0x0)) ||
     (ppuStack_180 = *pppuVar13, ppuStack_180 == (undefined8 **)0x0)) {
    pppppuStack_188 = ppppppuVar12[1];
    ppuStack_190 = &PTR_FUN_110bf7140;
    FUN_10a59c880(&pppppuStack_1c0,&ppuStack_190);
  }
  else {
    (*(code *)(*ppuStack_180)[2])(&pppppuStack_1c0);
  }
  pppppuVar20 = pppppuStack_1c0;
  pppppuStack_1c0 = (undefined8 *****)0x0;
  pppppuVar15 = ppppppuVar12[2];
  ppppppuVar12[2] = pppppuVar20;
  if (pppppuVar15 != (undefined8 *****)0x0) {
    (*(code *)(*pppppuVar15)[1])();
    pppppuVar20 = pppppuStack_1c0;
    pppppuStack_1c0 = (undefined8 *****)0x0;
    if (pppppuVar20 != (undefined8 *****)0x0) {
      (*(code *)(*pppppuVar20)[1])();
    }
  }
  pppppuVar20 = ppppppuVar12[2];
  if (pppppuVar20 == (undefined8 *****)0x0) {
    FUN_10a00946c(&UNK_10f664a62);
LAB_10a59c834:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10a59c838);
    (*pcVar9)();
  }
  (*(code *)(*ppppppuVar12)[5])(ppppppuVar12);
  if ((undefined8 *******)0x7ffffffffffffff7 < pppppppuVar16) {
    func_0x000109ffde50();
    goto LAB_10a59c834;
  }
  if (pppppppuVar16 < (undefined8 *******)0x17) {
    uStack_1b0 = CONCAT17((char)pppppppuVar16,(undefined7)uStack_1b0);
    if (pppppppuVar16 == (undefined8 *******)0x0) goto LAB_10a59c76c;
  }
  else {
    ppppuVar19 = (undefined8 ****)0x19;
    if (((ulong)pppppppuVar16 | 7) != 0x17) {
      ppppuVar19 = (undefined8 ****)(((ulong)pppppppuVar16 | 7) + 1);
    }
    pppppuVar17 = (undefined8 *****)ppppuVar19;
    __Znwm();
    uStack_1b0 = (ulong)ppppuVar19 | 0x8000000000000000;
    pppppuStack_1c0 = pppppuVar17;
    pppppppuStack_1b8 = pppppppuVar16;
  }
  _memmove(pppppuVar17,ppppppuVar12,pppppppuVar16);
  pppppuVar22 = pppppuVar17;
LAB_10a59c76c:
  *(undefined1 *)((long)pppppuVar22 + (long)pppppppuVar16) = 0;
  if (*(char *)((long)pppppppuVar10 + 0x17) < '\0') {
    func_0x000107c3192c(&ppppppuStack_1a8,*pppppppuVar10,pppppppuVar10[1]);
  }
  else {
    ppppppuStack_1a0 = pppppppuVar10[1];
    ppppppuStack_1a8 = *pppppppuVar10;
    ppppppuStack_198 = pppppppuVar10[2];
  }
  (*(code *)(*pppppuVar20)[2])(pppppuVar20,&pppppuStack_1c0);
  if ((long)ppppppuStack_198 < 0) {
    __ZdlPv(ppppppuStack_1a8);
  }
  if ((long)uStack_1b0 < 0) {
    __ZdlPv(pppppuStack_1c0);
  }
  ppuVar14 = ppuStack_178;
  if (ppuStack_178 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_178 + 1;
    do {
      puVar18 = *ppuVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar6) {
        *ppuVar2 = (undefined8 *)((long)puVar18 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar18 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_178)[2])(ppuStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  return;
}



/* Entry: 10a59c620; end: 10a59c87f;  */

void FUN_10a59c620(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  undefined8 *puVar7;
  long lVar8;
  long **pplVar9;
  long *plStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  
  pplVar6 = &plStack_90;
  pplVar9 = &plStack_90;
  plVar4 = *(long **)(*(long *)(param_1[1] + 0x100) + 0x1c8);
  puVar7 = param_2;
  (**(code **)(*plVar4 + 0x100))();
  plStack_50 = (long *)0x0;
  plStack_48 = (long *)0x0;
  plVar5 = (long *)plVar4[1];
  if (((plVar5 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar5, plVar5 == (long *)0x0)) ||
     (plStack_50 = (long *)*plVar4, plStack_50 == (long *)0x0)) {
    lStack_58 = param_1[1];
    ppuStack_60 = &PTR_FUN_110bf7140;
    FUN_10a59c880(&plStack_90,&ppuStack_60);
  }
  else {
    (**(code **)(*plStack_50 + 0x10))(&plStack_90);
  }
  plVar4 = plStack_90;
  plStack_90 = (long *)0x0;
  plVar5 = (long *)param_1[2];
  param_1[2] = (long)plVar4;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
    plVar4 = plStack_90;
    plStack_90 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  plVar4 = (long *)param_1[2];
  if (plVar4 == (long *)0x0) {
    FUN_10a00946c(&UNK_10f664a62);
LAB_10a59c834:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a59c838);
    (*pcVar3)();
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  if ((undefined8 *)0x7ffffffffffffff7 < puVar7) {
    func_0x000109ffde50();
    goto LAB_10a59c834;
  }
  if (puVar7 < (undefined8 *)0x17) {
    uStack_80 = CONCAT17((char)puVar7,(undefined7)uStack_80);
    if (puVar7 == (undefined8 *)0x0) goto LAB_10a59c76c;
  }
  else {
    plVar5 = (long *)0x19;
    if (((ulong)puVar7 | 7) != 0x17) {
      plVar5 = (long *)(((ulong)puVar7 | 7) + 1);
    }
    pplVar6 = (long **)plVar5;
    __Znwm();
    uStack_80 = (ulong)plVar5 | 0x8000000000000000;
    plStack_90 = (long *)pplVar6;
    puStack_88 = puVar7;
  }
  _memmove(pplVar6,param_1,puVar7);
  pplVar9 = pplVar6;
LAB_10a59c76c:
  *(undefined1 *)((long)pplVar9 + (long)puVar7) = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_78,*param_2,param_2[1]);
  }
  else {
    uStack_70 = param_2[1];
    uStack_78 = *param_2;
    lStack_68 = param_2[2];
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&plStack_90);
  if (lStack_68 < 0) {
    __ZdlPv(uStack_78);
  }
  if ((long)uStack_80 < 0) {
    __ZdlPv(plStack_90);
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar5 = plStack_48 + 1;
    do {
      lVar8 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a59c880; end: 10a59c94b;  */

void FUN_10a59c880(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  uVar2 = *(undefined8 *)(param_2 + 8);
  *puVar1 = &PTR_DAT_110bb5618;
  FUN_10a03c0d0(puVar1 + 1);
  *puVar1 = &PTR_DAT_110bf70c8;
  puVar1[1] = &PTR_DAT_110bf7118;
  puVar1[5] = uVar2;
  puVar1[6] = 0;
  puVar1[7] = 0;
  FUN_10a5ae998(puVar1[2],&PTR_DAT_110b9f988,uVar2,puVar1 + 1);
  *param_1 = puVar1;
  return;
}



/* Entry: 10a59c94c; end: 10a59c94f;  */

void FUN_10a59c94c(void)

{
  return;
}



/* Entry: 10a59c950; end: 10a59c98f;  */

undefined8 * FUN_10a59c950(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a59c990; end: 10a59c9ef;  */

void FUN_10a59c990(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a59c9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
    return;
  }
  return;
}



/* Entry: 10a59c9f0; end: 10a59cb8b;  */

long * FUN_10a59c9f0(long *param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined **ppuVar16;
  long *plVar17;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  code *pcVar18;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  long lStack_48;
  undefined1 *puVar6;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = &PTR_DAT_110bf6f90;
  *param_1 = (long)&PTR_DAT_110bf6f90;
  param_1[1] = param_2;
  param_1[2] = 0;
  FUN_10a03c0d0(param_1 + 3);
  *param_1 = (long)&PTR_FUN_110bf6fe0;
  param_1[3] = (long)&PTR_DAT_110bf7038;
  plVar15 = param_1 + 7;
  *plVar15 = 0x32aaaba7;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  auStack_60[0] = 1;
  uStack_58 = 0x32;
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  FUN_10a504768(&lStack_80,auStack_60,&lStack_48,1);
  param_1[0x15] = 0;
  param_1[0x17] = lStack_78;
  param_1[0x16] = lStack_80;
  param_1[0x18] = lStack_70;
  param_1[0x19] = 0;
  plVar17 = param_1 + 0x1a;
  *plVar17 = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  plVar7 = (long *)param_1[4];
  FUN_10a5ae998(plVar7,&PTR_DAT_110b9f988,param_1[1],param_1 + 3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    __ZdlPv(*plVar17);
  }
  if (param_1[0x16] != 0) {
    param_1[0x17] = param_1[0x16];
    __ZdlPv();
  }
  FUN_10a5bae18(param_1 + 0xf);
  __ZNSt3__15mutexD1Ev(plVar15);
  param_1[3] = (long)&PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = (long)&PTR_DAT_110bf6f90;
  plVar8 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  pcVar18 = FUN_10a59cb8c;
  plVar9 = plVar7;
  __Unwind_Resume();
  plVar8 = &lStack_80;
  puVar5 = (undefined1 *)register0x00000008;
  do {
    plVar10 = plVar9;
    puVar6 = (undefined1 *)plVar8;
    *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
    *(long **)(puVar6 + -0x38) = plVar17;
    *(undefined ***)(puVar6 + -0x30) = ppuVar16;
    *(long **)(puVar6 + -0x28) = plVar7;
    *(long **)(puVar6 + -0x20) = plVar15;
    *(long **)(puVar6 + -0x18) = param_1;
    *(undefined1 **)(puVar6 + -0x10) = puVar5 + -0x10;
    *(code **)(puVar6 + -8) = pcVar18;
    *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar15 = plVar10 + 0x15;
    func_0x00010a505604();
    if ((int)plVar15 != 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      plVar10[0x15] = (long)plVar15;
      uVar13 = (plVar10[0x17] - plVar10[0x16] >> 3) * -0x5555555555555555;
      if (uVar13 < (ulong)(long)(int)plVar10[0x19] || uVar13 - (long)(int)plVar10[0x19] == 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x10a59ce84);
        (*pcVar18)();
      }
      __ZNSt3__15mutex4lockEv(plVar10 + 7);
      if (plVar10[0x14] != 0) {
        lVar11 = (long)*(char *)((long)plVar10 + 0xe7);
        if (lVar11 < 0) {
          lVar11 = plVar10[0x1b];
        }
        if (lVar11 == 0) {
          FUN_10a59cf10(puVar6 + -0x188,plVar10[1]);
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (puVar6 + -0x170,&UNK_10f664b8d,*(long *)(puVar6 + -0x188) + 0x48);
          plVar15 = (long *)(puVar6 + -0x170);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar15,&DAT_10f62a9ea,1);
          lVar11 = *plVar15;
          *(long *)(puVar6 + -0x68) = plVar15[1];
          *(undefined8 *)(puVar6 + -0x61) = *(undefined8 *)((long)plVar15 + 0xf);
          uVar1 = *(undefined1 *)((long)plVar15 + 0x17);
          plVar15[1] = 0;
          plVar15[2] = 0;
          *plVar15 = 0;
          if (*(char *)((long)plVar10 + 0xe7) < '\0') {
            __ZdlPv(plVar10[0x1a]);
          }
          lVar14 = *(long *)(puVar6 + -0x68);
          plVar10[0x1a] = lVar11;
          plVar10[0x1b] = lVar14;
          *(undefined8 *)((long)plVar10 + 0xdf) = *(undefined8 *)(puVar6 + -0x61);
          *(undefined1 *)((long)plVar10 + 0xe7) = uVar1;
          if ((char)puVar6[-0x159] < '\0') {
            __ZdlPv(*(undefined8 *)(puVar6 + -0x170));
          }
          plVar15 = *(long **)(puVar6 + -0x180);
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
        }
        FUN_109fed7e0(puVar6 + -0x170);
        uVar13 = plVar10[0x1b];
        plVar15 = (long *)plVar10[0x1a];
        if (-1 < (char)*(byte *)((long)plVar10 + 0xe7)) {
          uVar13 = (ulong)*(byte *)((long)plVar10 + 0xe7);
          plVar15 = plVar10 + 0x1a;
        }
        FUN_10a002568(puVar6 + -0x170,plVar15,uVar13);
        plVar7 = (long *)0x0;
        ppuVar16 = (undefined **)0xc0c0c0c0c0c0c0c1;
        plVar17 = (long *)0xaa;
        unaff_x24 = 0x18;
        unaff_x25 = 10000;
        while (plVar10[0x14] != 0) {
          puVar12 = (undefined8 *)
                    (*(long *)(plVar10[0x10] + ((ulong)plVar10[0x13] / 0xaa) * 8) +
                    ((ulong)plVar10[0x13] % 0xaa) * 0x18);
          lVar14 = (long)*(char *)((long)puVar12 + 0x17);
          lVar11 = lVar14;
          if (lVar14 < 0) {
            lVar11 = puVar12[1];
          }
          plVar7 = (long *)((long)plVar7 + lVar11 + 1);
          if ((long *)0x2710 < plVar7) break;
          lVar11 = puVar12[1];
          puVar4 = (undefined8 *)*puVar12;
          if (-1 < *(char *)((long)puVar12 + 0x17)) {
            lVar11 = lVar14;
            puVar4 = puVar12;
          }
          FUN_10a002568(puVar6 + -0x170,puVar4,lVar11);
          FUN_10a002568();
          func_0x00010a5c9344(plVar10 + 0xf);
        }
        func_0x00010a002480(puVar6 + -0x188,puVar6 + -0x168,puVar6 + -0x68);
        (**(code **)(*plVar10 + 0x30))(plVar10,puVar6 + -0x188);
        if ((char)puVar6[-0x171] < '\0') {
          __ZdlPv(*(undefined8 *)(puVar6 + -0x188));
        }
        *(undefined ***)(puVar6 + -0x100) = &PTR_DAT_11088d708;
        *(undefined ***)(puVar6 + -0x170) = &PTR_DAT_11088d6e0;
        *(undefined ***)(puVar6 + -0x168) = &PTR_DAT_11088d7b0;
        if ((char)puVar6[-0x111] < '\0') {
          __ZdlPv(*(undefined8 *)(puVar6 + -0x128));
        }
        *(undefined **)(puVar6 + -0x168) =
             PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
        __ZNSt3__16localeD1Ev(puVar6 + -0x160);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(puVar6 + -0x170,&PTR_PTR_11088d720);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(puVar6 + -0x100);
      }
      plVar15 = plVar10 + 7;
      __ZNSt3__15mutex6unlockEv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x58)) {
      return plVar15;
    }
    ___stack_chk_fail();
    if ((char)puVar6[-0x159] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar6 + -0x170));
    }
    func_0x00010a5c92ec(puVar6 + -0x188);
    __ZNSt3__15mutex6unlockEv(plVar10 + 7);
    pcVar18 = FUN_10a59cef8;
    plVar9 = plVar15;
    __Unwind_Resume();
    plVar8 = (long *)(puVar6 + -400);
    plVar9 = plVar9 + -3;
    param_1 = plVar10;
    puVar5 = puVar6;
  } while( true );
}



/* Entry: 10a59cb8c; end: 10a59cef7;  */

void FUN_10a59cb8c(long *param_1)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar12;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    plVar7 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x20 = plVar7 + 0x15;
    func_0x00010a505604();
    if ((int)unaff_x20 != 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      plVar7[0x15] = (long)unaff_x20;
      uVar10 = (plVar7[0x17] - plVar7[0x16] >> 3) * -0x5555555555555555;
      if (uVar10 < (ulong)(long)(int)plVar7[0x19] || uVar10 - (long)(int)plVar7[0x19] == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a59ce84);
        (*pcVar6)();
      }
      __ZNSt3__15mutex4lockEv(plVar7 + 7);
      if (plVar7[0x14] != 0) {
        lVar8 = (long)*(char *)((long)plVar7 + 0xe7);
        if (lVar8 < 0) {
          lVar8 = plVar7[0x1b];
        }
        if (lVar8 == 0) {
          FUN_10a59cf10((undefined1 *)((long)register0x00000008 + -0x188),plVar7[1]);
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    ((undefined1 *)((long)register0x00000008 + -0x170),&UNK_10f664b8d,
                     *(long *)((long)register0x00000008 + -0x188) + 0x48);
          plVar12 = (long *)((long)register0x00000008 + -0x170);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar12,&DAT_10f62a9ea,1);
          lVar8 = *plVar12;
          *(long *)((long)register0x00000008 + -0x68) = plVar12[1];
          *(undefined8 *)((long)register0x00000008 + -0x61) = *(undefined8 *)((long)plVar12 + 0xf);
          uVar2 = *(undefined1 *)((long)plVar12 + 0x17);
          plVar12[1] = 0;
          plVar12[2] = 0;
          *plVar12 = 0;
          if (*(char *)((long)plVar7 + 0xe7) < '\0') {
            __ZdlPv(plVar7[0x1a]);
          }
          lVar11 = *(long *)((long)register0x00000008 + -0x68);
          plVar7[0x1a] = lVar8;
          plVar7[0x1b] = lVar11;
          *(undefined8 *)((long)plVar7 + 0xdf) = *(undefined8 *)((long)register0x00000008 + -0x61);
          *(undefined1 *)((long)plVar7 + 0xe7) = uVar2;
          if (*(char *)((long)register0x00000008 + -0x159) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x170));
          }
          plVar12 = *(long **)((long)register0x00000008 + -0x180);
          if (plVar12 != (long *)0x0) {
            plVar1 = plVar12 + 1;
            do {
              lVar8 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
        }
        FUN_109fed7e0((undefined1 *)((long)register0x00000008 + -0x170));
        uVar10 = plVar7[0x1b];
        plVar12 = (long *)plVar7[0x1a];
        if (-1 < (char)*(byte *)((long)plVar7 + 0xe7)) {
          uVar10 = (ulong)*(byte *)((long)plVar7 + 0xe7);
          plVar12 = plVar7 + 0x1a;
        }
        FUN_10a002568((undefined1 *)((long)register0x00000008 + -0x170),plVar12,uVar10);
        unaff_x21 = 0;
        unaff_x22 = 0xc0c0c0c0c0c0c0c1;
        unaff_x23 = 0xaa;
        unaff_x24 = 0x18;
        unaff_x25 = 10000;
        while (plVar7[0x14] != 0) {
          puVar9 = (undefined8 *)
                   (*(long *)(plVar7[0x10] + ((ulong)plVar7[0x13] / 0xaa) * 8) +
                   ((ulong)plVar7[0x13] % 0xaa) * 0x18);
          lVar11 = (long)*(char *)((long)puVar9 + 0x17);
          lVar8 = lVar11;
          if (lVar11 < 0) {
            lVar8 = puVar9[1];
          }
          unaff_x21 = unaff_x21 + lVar8 + 1;
          if (10000 < unaff_x21) break;
          lVar8 = puVar9[1];
          puVar5 = (undefined8 *)*puVar9;
          if (-1 < *(char *)((long)puVar9 + 0x17)) {
            lVar8 = lVar11;
            puVar5 = puVar9;
          }
          FUN_10a002568((undefined1 *)((long)register0x00000008 + -0x170),puVar5,lVar8);
          FUN_10a002568();
          func_0x00010a5c9344(plVar7 + 0xf);
        }
        func_0x00010a002480((undefined1 *)((long)register0x00000008 + -0x188),
                            (undefined1 *)((long)register0x00000008 + -0x168),
                            (undefined1 *)((long)register0x00000008 + -0x68));
        (**(code **)(*plVar7 + 0x30))(plVar7,(undefined1 *)((long)register0x00000008 + -0x188));
        if (*(char *)((long)register0x00000008 + -0x171) < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x188));
        }
        *(undefined ***)((long)register0x00000008 + -0x100) = &PTR_DAT_11088d708;
        *(undefined ***)((long)register0x00000008 + -0x170) = &PTR_DAT_11088d6e0;
        *(undefined ***)((long)register0x00000008 + -0x168) = &PTR_DAT_11088d7b0;
        if (*(char *)((long)register0x00000008 + -0x111) < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x128));
        }
        *(undefined **)((long)register0x00000008 + -0x168) =
             PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
        __ZNSt3__16localeD1Ev((undefined1 *)((long)register0x00000008 + -0x160));
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev
                  ((undefined1 *)((long)register0x00000008 + -0x170),&PTR_PTR_11088d720);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev
                  ((undefined1 *)((long)register0x00000008 + -0x100));
      }
      unaff_x20 = plVar7 + 7;
      __ZNSt3__15mutex6unlockEv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x159) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x170));
    }
    func_0x00010a5c92ec((undefined1 *)((long)register0x00000008 + -0x188));
    __ZNSt3__15mutex6unlockEv(plVar7 + 7);
    unaff_x30 = FUN_10a59cef8;
    plVar12 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -400);
    param_1 = plVar12 + -3;
    unaff_x19 = plVar7;
  } while( true );
}



/* Entry: 10a59cef8; end: 10a59cf0f;  */

void FUN_10a59cef8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *unaff_x19;
  long *plVar14;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    plVar8 = (long *)(param_1 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x20 = param_1 + 0x90;
    func_0x00010a505604();
    if ((int)unaff_x20 != 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(param_1 + 0x90) = unaff_x20;
      uVar12 = (*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 3) * -0x5555555555555555;
      if (uVar12 < (ulong)(long)*(int *)(param_1 + 0xb0) ||
          uVar12 - (long)*(int *)(param_1 + 0xb0) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a59ce84);
        (*pcVar7)();
      }
      __ZNSt3__15mutex4lockEv(param_1 + 0x20);
      if (*(long *)(param_1 + 0x88) != 0) {
        lVar9 = (long)*(char *)(param_1 + 0xcf);
        if (lVar9 < 0) {
          lVar9 = *(long *)(param_1 + 0xc0);
        }
        if (lVar9 == 0) {
          FUN_10a59cf10((undefined1 *)((long)register0x00000008 + -0x188),
                        *(undefined8 *)(param_1 + -0x10));
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    ((undefined1 *)((long)register0x00000008 + -0x170),&UNK_10f664b8d,
                     *(long *)((long)register0x00000008 + -0x188) + 0x48);
          puVar10 = (undefined8 *)((long)register0x00000008 + -0x170);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar10,&DAT_10f62a9ea,1);
          uVar2 = *puVar10;
          *(undefined8 *)((long)register0x00000008 + -0x68) = puVar10[1];
          *(undefined8 *)((long)register0x00000008 + -0x61) = *(undefined8 *)((long)puVar10 + 0xf);
          uVar3 = *(undefined1 *)((long)puVar10 + 0x17);
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0;
          if (*(char *)(param_1 + 0xcf) < '\0') {
            __ZdlPv(*(undefined8 *)(param_1 + 0xb8));
          }
          uVar11 = *(undefined8 *)((long)register0x00000008 + -0x68);
          *(undefined8 *)(param_1 + 0xb8) = uVar2;
          *(undefined8 *)(param_1 + 0xc0) = uVar11;
          *(undefined8 *)(param_1 + 199) = *(undefined8 *)((long)register0x00000008 + -0x61);
          *(undefined1 *)(param_1 + 0xcf) = uVar3;
          if (*(char *)((long)register0x00000008 + -0x159) < '\0') {
            __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x170));
          }
          plVar14 = *(long **)((long)register0x00000008 + -0x180);
          if (plVar14 != (long *)0x0) {
            plVar1 = plVar14 + 1;
            do {
              lVar9 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
            }
          }
        }
        FUN_109fed7e0((undefined1 *)((long)register0x00000008 + -0x170));
        uVar12 = *(ulong *)(param_1 + 0xc0);
        puVar10 = *(undefined8 **)(param_1 + 0xb8);
        if (-1 < (char)*(byte *)(param_1 + 0xcf)) {
          uVar12 = (ulong)*(byte *)(param_1 + 0xcf);
          puVar10 = (undefined8 *)(param_1 + 0xb8);
        }
        FUN_10a002568((undefined1 *)((long)register0x00000008 + -0x170),puVar10,uVar12);
        unaff_x21 = 0;
        unaff_x22 = 0xc0c0c0c0c0c0c0c1;
        unaff_x23 = 0xaa;
        unaff_x24 = 0x18;
        unaff_x25 = 10000;
        while (*(long *)(param_1 + 0x88) != 0) {
          puVar10 = (undefined8 *)
                    (*(long *)(*(long *)(param_1 + 0x68) + (*(ulong *)(param_1 + 0x80) / 0xaa) * 8)
                    + (*(ulong *)(param_1 + 0x80) % 0xaa) * 0x18);
          lVar13 = (long)*(char *)((long)puVar10 + 0x17);
          lVar9 = lVar13;
          if (lVar13 < 0) {
            lVar9 = puVar10[1];
          }
          unaff_x21 = unaff_x21 + lVar9 + 1;
          if (10000 < unaff_x21) break;
          lVar9 = puVar10[1];
          puVar6 = (undefined8 *)*puVar10;
          if (-1 < *(char *)((long)puVar10 + 0x17)) {
            lVar9 = lVar13;
            puVar6 = puVar10;
          }
          FUN_10a002568((undefined1 *)((long)register0x00000008 + -0x170),puVar6,lVar9);
          FUN_10a002568();
          func_0x00010a5c9344(param_1 + 0x60);
        }
        func_0x00010a002480((undefined1 *)((long)register0x00000008 + -0x188),
                            (undefined1 *)((long)register0x00000008 + -0x168),
                            (undefined1 *)((long)register0x00000008 + -0x68));
        (**(code **)(*plVar8 + 0x30))(plVar8,(undefined1 *)((long)register0x00000008 + -0x188));
        if (*(char *)((long)register0x00000008 + -0x171) < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x188));
        }
        *(undefined ***)((long)register0x00000008 + -0x100) = &PTR_DAT_11088d708;
        *(undefined ***)((long)register0x00000008 + -0x170) = &PTR_DAT_11088d6e0;
        *(undefined ***)((long)register0x00000008 + -0x168) = &PTR_DAT_11088d7b0;
        if (*(char *)((long)register0x00000008 + -0x111) < '\0') {
          __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x128));
        }
        *(undefined **)((long)register0x00000008 + -0x168) =
             PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
        __ZNSt3__16localeD1Ev((undefined1 *)((long)register0x00000008 + -0x160));
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev
                  ((undefined1 *)((long)register0x00000008 + -0x170),&PTR_PTR_11088d720);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev
                  ((undefined1 *)((long)register0x00000008 + -0x100));
      }
      unaff_x20 = param_1 + 0x20;
      __ZNSt3__15mutex6unlockEv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return;
    }
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x159) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x170));
    }
    func_0x00010a5c92ec((undefined1 *)((long)register0x00000008 + -0x188));
    __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
    unaff_x30 = FUN_10a59cef8;
    param_1 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -400);
    unaff_x19 = plVar8;
  } while( true );
}



/* Entry: 10a59cf10; end: 10a59d2b3;  */

void FUN_10a59cf10(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a5ca860(param_1,&pcStack_a0,&UNK_10f66429f,&UNK_10f66429f,&UNK_10f66429f);
  if (param_2 == 0) {
LAB_10a59d1e4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
LAB_10a59d234:
    puVar8 = &UNK_10f64981f;
  }
  else {
    ppuStack_a8 = (undefined **)0xb;
    pcStack_b0 = (code *)&DAT_10f535b2b;
    plVar10 = *(long **)(param_2 + 0xaa0);
    pcVar5 = (code *)*param_1;
    ppuVar2 = (undefined **)param_1[1];
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = ppuVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar4) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar7 = plVar10 + 9;
    pcStack_c0 = pcVar5;
    ppuStack_b8 = ppuVar2;
    FUN_10a1cda24(plVar7,&pcStack_b0);
    if (plVar7 == (long *)0x0) goto LAB_10a59d234;
    ppuStack_98 = ppuStack_a8;
    pcStack_a0 = pcStack_b0;
    FUN_10a2677b4(plVar10[0x11],&pcStack_a0);
    plVar9 = (long *)plVar7[4];
    if ((plVar9 != (long *)0x0) &&
       (plVar6 = plVar9, ___dynamic_cast(plVar9,&PTR_DAT_110bbadc8,&PTR_DAT_110bbab38,0),
       plVar6 != (long *)0x0)) {
      pcStack_a0 = FUN_10a5cad88;
      ppuStack_98 = &PTR_DAT_110bf7d88;
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar1 = ppuVar2 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar4) {
            *ppuVar1 = *ppuVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pcStack_90 = pcVar5;
      ppuStack_88 = ppuVar2;
      FUN_10a5cabf8();
      (*(code *)*ppuStack_98)(&ppuStack_98);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      plVar7 = (long *)plVar7[4];
      (**(code **)(*plVar7 + 0x18))();
      if ((int)plVar7 != 0) {
        (**(code **)(*(long *)((long)plVar10 + *(long *)(*plVar10 + -0x18)) + 0x28))
                  ((long)plVar10 + *(long *)(*plVar10 + -0x18));
      }
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar1 = ppuVar2 + 1;
        do {
          puVar8 = *ppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar4) {
            *ppuVar1 = puVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar8 == (undefined *)0x0) {
          (**(code **)(*ppuVar2 + 0x10))(ppuVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar2);
        }
      }
      ppuStack_b8 = (undefined **)0xf;
      pcStack_c0 = (code *)&DAT_10f64980f;
      plVar10 = *(long **)(param_2 + 0xaa0);
      pcVar5 = (code *)*param_1;
      ppuVar2 = (undefined **)param_1[1];
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar1 = ppuVar2 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar4) {
            *ppuVar1 = *ppuVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar7 = plVar10 + 9;
      FUN_10a1cda24(plVar7,&pcStack_c0);
      if (plVar7 == (long *)0x0) {
        puVar8 = &UNK_10f64981f;
      }
      else {
        ppuStack_98 = ppuStack_b8;
        pcStack_a0 = pcStack_c0;
        FUN_10a2677b4(plVar10[0x11],&pcStack_a0);
        plVar9 = (long *)plVar7[4];
        if ((plVar9 != (long *)0x0) &&
           (plVar6 = plVar9, ___dynamic_cast(plVar9,&PTR_DAT_110bbadc8,&PTR_DAT_110bbab38,0),
           plVar6 != (long *)0x0)) {
          pcStack_a0 = (code *)0x10a5cadf4;
          ppuStack_98 = &PTR_DAT_110bf7da8;
          if (ppuVar2 != (undefined **)0x0) {
            ppuVar1 = ppuVar2 + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
              if (bVar4) {
                *ppuVar1 = *ppuVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          pcStack_90 = pcVar5;
          ppuStack_88 = ppuVar2;
          FUN_10a5cabf8();
          (*(code *)*ppuStack_98)(&ppuStack_98);
          (**(code **)(*plVar9 + 0x10))(plVar9);
          plVar7 = (long *)plVar7[4];
          (**(code **)(*plVar7 + 0x18))();
          if ((int)plVar7 != 0) {
            (**(code **)(*(long *)((long)plVar10 + *(long *)(*plVar10 + -0x18)) + 0x28))
                      ((long)plVar10 + *(long *)(*plVar10 + -0x18));
          }
          if (ppuVar2 != (undefined **)0x0) {
            ppuVar1 = ppuVar2 + 1;
            do {
              puVar8 = *ppuVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
              if (bVar4) {
                *ppuVar1 = puVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (puVar8 == (undefined *)0x0) {
              (**(code **)(*ppuVar2 + 0x10))(ppuVar2);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar2);
            }
          }
          goto LAB_10a59d1e4;
        }
        puVar8 = &UNK_10f64983a;
      }
      FUN_10a00946c(puVar8);
      goto LAB_10a59d250;
    }
    puVar8 = &UNK_10f64983a;
  }
  FUN_10a00946c(puVar8);
LAB_10a59d250:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a59d254);
  (*pcVar5)();
}



/* Entry: 10a59d2b4; end: 10a59d3e3;  */

void FUN_10a59d2b4(undefined8 param_1)

{
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f664b97;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f66429f;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a004eb4(param_1,&puStack_98);
  ppuStack_90 = &puStack_a0;
  puStack_a0 = &UNK_10f664ba2;
  puStack_98 = &UNK_10f664b9e;
  uStack_88 = 1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f66429f;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  pcStack_a8 = FUN_10a59d3e4;
  func_0x00010a59d38c(param_1,&puStack_98,&pcStack_a8);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a59d3e4; end: 10a59d5c3;  */

void FUN_10a59d3e4(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined7 uStack_40;
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (*(long *)(param_1 + 0x990) == 0) {
    return;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x990) + 0x30);
  lVar6 = *param_2;
  if (lVar6 == 0) {
LAB_10a59d418:
    pcVar3 = "null";
  }
  else {
    if (*(int *)(lVar6 + 8) != 0) {
      if (*(int *)(lVar6 + 8) != 1) {
        func_0x000107c2b054(auStack_38,&DAT_10f648172);
        FUN_10a4729e4(&uStack_50,lVar6,auStack_38);
        if (cStack_21 < '\0') {
          __ZdlPv(auStack_38[0]);
        }
        goto LAB_10a59d434;
      }
      goto LAB_10a59d418;
    }
    pcVar3 = "undefined";
  }
  func_0x000107c2b054(&uStack_50,pcVar3);
LAB_10a59d434:
  __ZNSt3__15mutex4lockEv(lVar7 + 0x38);
  if (*(ulong *)(lVar7 + 0xa0) < 100) {
    lVar4 = *(long *)(lVar7 + 0x80);
    lVar5 = *(long *)(lVar7 + 0x88);
    lVar6 = 0;
    if (lVar5 != lVar4) {
      lVar6 = (lVar5 - lVar4 >> 3) * 0xaa + -1;
    }
    if (lVar6 == *(long *)(lVar7 + 0x98) + *(ulong *)(lVar7 + 0xa0)) {
      func_0x000104c39758(lVar7 + 0x78);
      lVar4 = *(long *)(lVar7 + 0x80);
      lVar5 = *(long *)(lVar7 + 0x88);
    }
    if (lVar5 == lVar4) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *(long *)(lVar7 + 0xa0) + *(long *)(lVar7 + 0x98);
      puVar2 = (undefined8 *)(*(long *)(lVar4 + (uVar1 / 0xaa) * 8) + (uVar1 % 0xaa) * 0x18);
    }
    if (cStack_39 < '\0') {
      func_0x000107c3192c(puVar2,uStack_50,uStack_48);
    }
    else {
      puVar2[2] = CONCAT17(cStack_39,uStack_40);
      puVar2[1] = uStack_48;
      *puVar2 = uStack_50;
    }
    *(long *)(lVar7 + 0xa0) = *(long *)(lVar7 + 0xa0) + 1;
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f664aad,&UNK_10f664af9,0x2d,&UNK_10f664b4a);
  }
  __ZNSt3__15mutex6unlockEv(lVar7 + 0x38);
  if (cStack_39 < '\0') {
    __ZdlPv(uStack_50);
  }
  return;
}



/* Entry: 10a59d5c4; end: 10a59d69b;  */

undefined8 * FUN_10a59d5c4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uStack_41;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_110bf7060;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = 0xe8;
  __Znwm();
  FUN_10a59c9f0();
  param_1[6] = uVar1;
  FUN_10a5c9e50(param_1 + 7,&uStack_41,param_1 + 2);
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



/* Entry: 10a59d69c; end: 10a59d6f3;  */

undefined8 * FUN_10a59d69c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bf7060;
  FUN_10a5c9f34(param_1 + 7);
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  return param_1;
}



/* Entry: 10a59d6f4; end: 10a59d6f7;  */

undefined8 * FUN_10a59d6f4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110bf7060;
  FUN_10a5c9f34(param_1 + 7);
  plVar1 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  return param_1;
}



/* Entry: 10a59d6f8; end: 10a59d70b;  */

void FUN_10a59d6f8(void)

{
  FUN_10a59d69c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a59d70c; end: 10a59d78b;  */

void FUN_10a59d70c(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110bf7098);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_2 + 0xa0))(&uStack_38,param_2,&PTR_DAT_110bf7098);
    if (*(char *)(param_1 + 0x2f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x18));
    }
    *(undefined8 *)(param_1 + 0x20) = uStack_30;
    *(undefined8 *)(param_1 + 0x18) = uStack_38;
    *(undefined8 *)(param_1 + 0x28) = uStack_28;
  }
  return;
}



/* Entry: 10a59d78c; end: 10a59d7a3;  */

void FUN_10a59d78c(long param_1,long *param_2)

{
  code *pcVar1;
  long lStack_20;
  long lStack_18;
  
  lStack_20 = param_1 + 0x18;
  lStack_18 = (long)*(char *)(param_1 + 0x2f);
  if (lStack_18 < 0) {
    lStack_20 = *(long *)lStack_20;
    lStack_18 = *(long *)(param_1 + 0x20);
    if (lStack_18 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a00d7a8);
      (*pcVar1)();
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110bf7098,&lStack_20);
  return;
}



/* Entry: 10a59d7a4; end: 10a59d993;  */

void FUN_10a59d7a4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long *extraout_x8;
  long lVar8;
  long *unaff_x22;
  long lStack_88;
  long *plStack_80;
  long alStack_78 [2];
  long lStack_68;
  long *plStack_60;
  long alStack_58 [3];
  long *plStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x100);
    lStack_68 = *(long *)(lVar7 + 0x250);
    plStack_60 = *(long **)(lVar7 + 600);
    if (plStack_60 != (long *)0x0) {
      plVar6 = plStack_60 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lStack_68 != 0) {
      FUN_10a59d994(&lStack_88);
      alStack_78[0] = 0;
      if (plStack_80 != (long *)0x0) {
        plVar6 = plStack_80;
        __ZNSt3__119__shared_weak_count4lockEv();
        if (plVar6 == (long *)0x0) {
          lVar7 = 0;
        }
        else {
          alStack_78[0] = lStack_88;
          lVar7 = lStack_88;
        }
        if (plStack_80 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (lVar7 != 0) {
          plStack_40 = (long *)0x0;
          unaff_x22 = alStack_58;
          FUN_10a59da5c(lVar7,alStack_58);
          if (plStack_40 == unaff_x22) {
            lVar7 = 0x20;
          }
          else {
            if (plStack_40 == (long *)0x0) goto LAB_10a59d888;
            lVar7 = 0x28;
          }
          (**(code **)(*plStack_40 + lVar7))();
        }
LAB_10a59d888:
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
          do {
            lVar7 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
    }
    plVar6 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      plVar1 = plStack_60 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
  plVar6 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar6 + 0x18))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_40 == unaff_x22) {
    lVar7 = 0x20;
  }
  else {
    if (plStack_40 == (long *)0x0) goto LAB_10a59d974;
    lVar7 = 0x28;
  }
  (**(code **)(*plStack_40 + lVar7))();
LAB_10a59d974:
  func_0x00010a5c9f8c(alStack_78);
  func_0x00010a3f5df8(&lStack_68);
  __Unwind_Resume();
  lVar7 = plVar6[0x30];
  if (lVar7 != 0) {
    plVar6 = plVar6 + 2;
    lVar8 = 0x10;
    do {
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a59da5c);
        (*pcVar5)();
      }
      if ((undefined *)plVar6[-2] == &UNK_10e4ce7af) {
        lVar7 = plVar6[-1];
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          *extraout_x8 = lVar7;
          extraout_x8[1] = 0;
          return;
        }
        plVar1 = plVar6 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *extraout_x8 = lVar7;
        extraout_x8[1] = (long)plVar6;
        plVar2 = plVar6 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 != 0) {
          return;
        }
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
      plVar6 = plVar6 + 3;
      lVar8 = lVar8 + -1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10a59d994; end: 10a59da5b;  */

void FUN_10a59d994(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_2 + 0x180);
  if (lVar6 != 0) {
    plVar7 = (long *)(param_2 + 0x10);
    lVar8 = 0x10;
    do {
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a59da5c);
        (*pcVar5)();
      }
      if ((undefined *)plVar7[-2] == &UNK_10e4ce7af) {
        lVar6 = plVar7[-1];
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          *param_1 = lVar6;
          param_1[1] = 0;
          return;
        }
        plVar1 = plVar7 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *param_1 = lVar6;
        param_1[1] = (long)plVar7;
        plVar2 = plVar7 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 != 0) {
          return;
        }
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a59da5c; end: 10a59daf3;  */

void FUN_10a59da5c(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10a59daa4;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10a59daa4:
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 == 0) {
    param_1[3] = 0;
  }
  else if (lVar2 == param_2) {
    param_1[3] = (long)param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    param_1[3] = lVar2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 8);
  return;
}



/* Entry: 10a59daf4; end: 10a59e133;  */

/* WARNING: Removing unreachable block (ram,0x00010a59dd00) */

long * FUN_10a59daf4(long *param_1,long **param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined1 auStack_1b0 [8];
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 auStack_178 [8];
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_2[4];
  if (-1 < (char)*(byte *)((long)param_2 + 0x2f)) {
    plVar10 = (long *)(ulong)*(byte *)((long)param_2 + 0x2f);
  }
  plVar14 = param_1 + 6;
  lVar9 = *plVar14;
  if (plVar10 == (long *)0x0) {
    if (lVar9 != 0) {
      FUN_10a871f30(lVar9);
      param_1 = *(long **)(lVar9 + 0x378);
      (**(code **)(*param_1 + 0x50))();
    }
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
        puVar8 = &UNK_10f664c76;
        uVar7 = 0x1c;
LAB_10a59dbf8:
        plVar10 = (long *)0x1;
        FUN_10ae06f30(1,2,&UNK_10f664baa,&UNK_10f664c09,uVar7,puVar8,&stack0x00000000);
        return plVar10;
      }
      goto LAB_10a59e060;
    }
  }
  else if (lVar9 == 0) {
    plVar10 = (long *)0x3f0;
    __Znwm();
    plVar11 = plVar10 + 1;
    plVar10[2] = 0;
    *plVar11 = 0;
    *plVar10 = (long)&PTR_FUN_110bf8288;
    _bzero(plVar10 + 4,0x3a8);
    plVar12 = plVar10 + 3;
    *plVar12 = (long)&PTR_DAT_110c25618;
    *(undefined1 *)(plVar10 + 0x18) = 1;
    plVar10[0x77] = 0;
    plVar10[0x76] = 0;
    *(undefined1 *)(plVar10 + 0x78) = 0;
    plVar10[0x7a] = 0;
    plVar10[0x79] = 0;
    plVar10[0x59] = 0;
    plVar10[0x58] = 0;
    plVar10[0x5b] = 0;
    plVar10[0x5a] = 0;
    plVar10[0x5d] = 0;
    plVar10[0x5c] = 0;
    plVar10[0x5f] = 0;
    plVar10[0x5e] = 0;
    plVar10[0x61] = 0;
    plVar10[0x60] = 0;
    plVar10[99] = 0;
    plVar10[0x62] = 0;
    plVar10[0x65] = 0;
    plVar10[100] = 0;
    plVar10[0x67] = 0;
    plVar10[0x66] = 0;
    plVar10[0x69] = 0;
    plVar10[0x68] = 0;
    plVar10[0x6b] = 0;
    plVar10[0x6a] = 0;
    plVar10[0x7c] = 0;
    plVar10[0x7b] = 0;
    plVar10[0x7d] = 0;
    plStack_158 = plVar12;
    plStack_150 = plVar10;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar10 + 6,param_2);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (plVar10 + 9,param_2 + 3);
    pcVar3 = (code *)0x20;
    __Znwm();
    uStack_a8 = 0x8000000000000020;
    ppuStack_b0 = (undefined **)0x1b;
    *(undefined8 *)(pcVar3 + 8) = 0x6370616e732e7365;
    *(undefined8 *)pcVar3 = 0x6d61672e736e656c;
    *(undefined8 *)(pcVar3 + 0x13) = 0x3334343a6d6f632e;
    *(undefined8 *)(pcVar3 + 0xb) = 0x7461686370616e73;
    pcVar3[0x1b] = (code)0x0;
    pcStack_b8 = pcVar3;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (plVar10 + 0xc,&pcStack_b8);
    *(undefined1 *)((long)plVar10 + 0xc1) = 1;
    *(undefined1 *)((long)plVar10 + 0xc2) = 1;
    plVar4 = *(long **)(*(long *)(param_1[5] + 0x100) + 0x1c8);
    (**(code **)(*plVar4 + 0xa0))();
    plStack_168 = (long *)0x0;
    plStack_160 = (long *)0x0;
    plVar5 = (long *)plVar4[1];
    if (((plVar5 == (long *)0x0) ||
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_160 = plVar5, plVar5 == (long *)0x0)) ||
       (plStack_168 = (long *)*plVar4, plStack_168 == (long *)0x0)) {
      FUN_10a85e878(auStack_178,&pcStack_b8);
    }
    else {
      (**(code **)(*plStack_168 + 0x10))(auStack_178);
    }
    plVar4 = *(long **)(*(long *)(param_1[5] + 0x100) + 0x1c8);
    (**(code **)(*plVar4 + 0x60))();
    plVar5 = (long *)plVar4[1];
    lStack_188 = plVar4[1];
    lStack_190 = *plVar4;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar13 = *(long *)(param_1[5] + 0x100);
    FUN_10a59cf10(auStack_1b0);
    lVar9 = param_1[5];
    plVar6 = (long *)0x690;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110bf8328;
    plVar4 = plVar6 + 3;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    pcStack_b8 = FUN_10a5ca4c0;
    ppuStack_b0 = &PTR_DAT_110950c70;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_f8 = 0x10a5ca4d0;
    ppuStack_f0 = &PTR_DAT_110950c70;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_138 = 0x10a5ca4e0;
    ppuStack_130 = &PTR_DAT_110950c70;
    plStack_148 = plVar12;
    plStack_140 = plVar10;
    FUN_10a85faa8(plVar4,lVar9,&lStack_190,auStack_178,&plStack_148,lVar13 + 0x208,&pcStack_b8,
                  &uStack_f8,auStack_1b0,&uStack_138);
    (*(code *)*ppuStack_130)(&ppuStack_130);
    (*(code *)*ppuStack_f0)(&ppuStack_f0);
    (*(code *)*ppuStack_b0)(&ppuStack_b0);
    do {
      lVar9 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
    plStack_1a0 = plVar4;
    plStack_198 = plVar6;
    func_0x00010a5ca544(&plStack_1a0,plVar6 + 6,plVar4);
    param_2 = &plStack_1a0;
    FUN_10a59e134(plVar14);
    plVar10 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar4 = plStack_198 + 1;
      do {
        lVar9 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (plStack_1a8 != (long *)0x0) {
      plVar10 = plStack_1a8 + 1;
      do {
        lVar9 = *plVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a8);
      }
    }
    param_1 = (long *)*plVar14;
    FUN_10a8692fc();
    if (plVar5 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = plVar5;
    }
    if (plStack_170 != (long *)0x0) {
      plVar10 = plStack_170 + 1;
      do {
        lVar9 = *plVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plStack_170;
      }
    }
    plVar10 = plStack_160;
    if (plStack_160 != (long *)0x0) {
      plVar14 = plStack_160 + 1;
      do {
        lVar9 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_160 + 0x10))(plStack_160);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plVar10;
      }
    }
    plVar10 = plStack_150;
    if (plStack_150 != (long *)0x0) {
      plVar14 = plStack_150 + 1;
      do {
        lVar9 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_150 + 0x10))(plStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = plVar10;
      }
    }
  }
  else if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      puVar8 = &UNK_10f664cc3;
      uVar7 = 0x22;
      goto LAB_10a59dbf8;
    }
    goto LAB_10a59e060;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_1;
  }
LAB_10a59e060:
  ___stack_chk_fail();
  func_0x00010a5ca3d0(&plStack_168);
  func_0x00010a5ca378(&plStack_158);
  __Unwind_Resume();
  plVar4 = param_2[1];
  plVar14 = *param_2;
  *param_2 = (long *)0x0;
  param_2[1] = (long *)0x0;
  plVar10 = (long *)param_1[1];
  param_1[1] = (long)plVar4;
  *param_1 = (long)plVar14;
  if (plVar10 != (long *)0x0) {
    plVar14 = plVar10 + 1;
    do {
      lVar9 = *plVar14;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return param_1;
}



/* Entry: 10a59e134; end: 10a59e23f;  */

undefined8 * FUN_10a59e134(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a59e240; end: 10a59e27f;  */

bool FUN_10a59e240(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if ((lVar1 != 0) &&
     (((*(long *)(lVar1 + 0x378) == 0 || (*(char *)(*(long *)(lVar1 + 0x378) + 0xa8) == '\x01')) &&
      (*(long *)(lVar1 + 0x368) != 0)))) {
    return **(int **)(lVar1 + 0x1e8) == 2;
  }
  return false;
}



/* Entry: 10a59e280; end: 10a59e36f;  */

long * FUN_10a59e280(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
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
  long *in_stack_ffffffffffffffc8;
  long in_stack_ffffffffffffffd8;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x20))();
  if ((int)plVar1 != 0) {
    if ((-1 < *(char *)((long)param_2 + 0x17)) || ((ulong)param_2[1] < 0x18e70)) {
      lVar2 = param_1[6];
      lVar9 = *(long *)(lVar2 + 0x378);
      if (((lVar9 == 0) || (*(char *)(lVar9 + 0xa8) == '\x01')) && (*(long *)(lVar2 + 0x368) != 0))
      {
        if (**(int **)(lVar2 + 0x1e8) == 2) {
          uVar5 = param_2[1];
          if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
            uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
          }
          func_0x00010ae02f70(0,uVar5);
          ppuVar8 = &PTR_PTR_113303650;
          FUN_10ae079a0();
          func_0x00010ae02f80();
          FUN_10ae07cd4(ppuVar8,&PTR_PTR_113303650);
          plVar3 = *(long **)(lVar2 + 0x368);
          plVar1 = (long *)*param_2;
          if (-1 < *(char *)((long)param_2 + 0x17)) {
            plVar1 = param_2;
          }
                    /* WARNING: Could not recover jumptable at 0x00010a86cc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*plVar3)(plVar3,plVar1);
          return plVar3;
        }
        lVar9 = *(long *)(lVar2 + 0x378);
      }
      func_0x00010ae02ecc(0,*(undefined1 *)(lVar9 + 0xa8));
      func_0x00010ae02ecc();
      ppuVar8 = &PTR_PTR_113303678;
      ppuVar7 = ppuVar8;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar1 = (long *)0x0;
      if (ppuVar7 != (undefined **)0x0) {
        FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar7[0x13],ppuVar7[0xf],
                      ppuVar7 + 0x14,0x400);
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
        puVar11 = ppuVar7[0x12];
        puVar10 = ppuVar7[0xb];
        uVar4 = 0;
        _clock_gettime_nsec_np();
        uVar5 = uVar4;
        _pthread_self();
        _pthread_mach_thread_np();
        ppuStack_8e8 = ppuVar7 + 1;
        uStack_8b8 = *(undefined4 *)(ppuVar7 + 0xe);
        uStack_8c0 = uVar5 & 0xffffffff;
        ppuStack_8b0 = ppuVar7 + 0x10;
        plVar1 = (long *)*ppuVar7;
        ppuVar8 = (undefined **)&ppuStack_8e8;
        uStack_8f0 = uStack_898;
        puStack_8e0 = puVar10;
        puStack_8d8 = puVar11;
        uStack_8d0 = (ulong)(puVar11 != (undefined *)0x0);
        uStack_8c8 = uVar4;
        FUN_10ae0784c(plVar1,ppuVar8,&puStack_900,&puStack_918);
      }
      iVar6 = (int)ppuVar8;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return plVar1;
      }
      ___stack_chk_fail();
      if (iVar6 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(plVar1);
      return plVar1;
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      __ZNSt3__19to_stringEm(&stack0xffffffffffffffc8,0x18e70);
      plVar1 = (long *)0x0;
      func_0x00010ae06f08(0,1,&UNK_10f664baa,&UNK_10f664d14,0x4d,&UNK_10f664d82);
      if (in_stack_ffffffffffffffd8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffc8);
        plVar1 = in_stack_ffffffffffffffc8;
      }
    }
  }
  return plVar1;
}



/* Entry: 10a59e370; end: 10a59e46b;  */

long * FUN_10a59e370(long *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
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
  long *in_stack_ffffffffffffffb8;
  long in_stack_ffffffffffffffc8;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x20))();
  if ((int)plVar1 != 0) {
    if (param_3 < 0x18e71) {
      lVar2 = param_1[6];
      lVar8 = *(long *)(lVar2 + 0x378);
      if (((lVar8 == 0) || (*(char *)(lVar8 + 0xa8) == '\x01')) && (*(long *)(lVar2 + 0x368) != 0))
      {
        if (**(int **)(lVar2 + 0x1e8) == 2) {
          func_0x00010ae02f70(0,param_3);
          ppuVar7 = &PTR_PTR_1133036c0;
          FUN_10ae079a0();
          func_0x00010ae02f80();
          FUN_10ae07cd4(ppuVar7,&PTR_PTR_1133036c0);
          plVar1 = *(long **)(lVar2 + 0x368);
                    /* WARNING: Could not recover jumptable at 0x00010a86cd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3);
          return plVar1;
        }
        lVar8 = *(long *)(lVar2 + 0x378);
      }
      func_0x00010ae02ecc(0,*(undefined1 *)(lVar8 + 0xa8));
      func_0x00010ae02ecc();
      ppuVar7 = &PTR_PTR_1133036e0;
      ppuVar6 = ppuVar7;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar1 = (long *)0x0;
      if (ppuVar6 != (undefined **)0x0) {
        FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar6[0x13],ppuVar6[0xf],
                      ppuVar6 + 0x14,0x400);
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
        puVar10 = ppuVar6[0x12];
        puVar9 = ppuVar6[0xb];
        uVar3 = 0;
        _clock_gettime_nsec_np();
        uVar4 = uVar3;
        _pthread_self();
        _pthread_mach_thread_np();
        ppuStack_8e8 = ppuVar6 + 1;
        uStack_8b8 = *(undefined4 *)(ppuVar6 + 0xe);
        uStack_8c0 = uVar4 & 0xffffffff;
        ppuStack_8b0 = ppuVar6 + 0x10;
        plVar1 = (long *)*ppuVar6;
        ppuVar7 = (undefined **)&ppuStack_8e8;
        uStack_8f0 = uStack_898;
        puStack_8e0 = puVar9;
        puStack_8d8 = puVar10;
        uStack_8d0 = (ulong)(puVar10 != (undefined *)0x0);
        uStack_8c8 = uVar3;
        FUN_10ae0784c(plVar1,ppuVar7,&puStack_900,&puStack_918);
      }
      iVar5 = (int)ppuVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return plVar1;
      }
      ___stack_chk_fail();
      if (iVar5 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(plVar1);
      return plVar1;
    }
    if ((bRam000000011330a9e8 & 1) != 0) {
      __ZNSt3__19to_stringEm(&stack0xffffffffffffffb8,0x18e70);
      plVar1 = (long *)0x0;
      func_0x00010ae06f08(0,1,&UNK_10f664baa,&UNK_10f664dbe,0x5b,&UNK_10f664d82);
      if (in_stack_ffffffffffffffc8 < 0) {
        __ZdlPv(in_stack_ffffffffffffffb8);
        plVar1 = in_stack_ffffffffffffffb8;
      }
    }
  }
  return plVar1;
}



/* Entry: 10a59e46c; end: 10a59e48b;  */

void FUN_10a59e46c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined8 *)(lVar4 + 0x18);
  FUN_10a8a41a8(&uStack_88);
  while( true ) {
    __ZNSt3__15mutex4lockEv(lVar4 + 0x438);
    if (*(long *)(lVar4 + 0x4a0) == 0) break;
    puVar7 = (undefined8 *)
             (*(long *)(*(long *)(lVar4 + 0x480) + (*(ulong *)(lVar4 + 0x498) >> 6) * 8) +
             (*(ulong *)(lVar4 + 0x498) & 0x3f) * 0x40);
    uStack_78 = *puVar7;
    (**(code **)(puVar7[1] + 0x10))(apuStack_70);
    FUN_10a8a5a9c(lVar4 + 0x478);
    __ZNSt3__15mutex6unlockEv(lVar4 + 0x438);
    puVar7 = &uStack_88;
    FUN_10a873a28(&uStack_78);
    (*(code *)*apuStack_70[0])(apuStack_70);
  }
  __ZNSt3__15mutex6unlockEv(lVar4 + 0x438);
  plVar5 = *(long **)(lVar4 + 0x570);
  if (plVar5 != (long *)0x0) {
    FUN_10a873acc();
  }
  if (plStack_80 != (long *)0x0) {
    plVar6 = plStack_80 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      plVar5 = plStack_80;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a5ca2e0(&uStack_88);
  plVar6 = plVar5;
  __Unwind_Resume();
  plStack_a8 = plStack_80;
  pcStack_98 = FUN_10a873a28;
  pcVar8 = (code *)*plVar6;
  plStack_b8 = (long *)puVar7[1];
  uStack_c0 = *puVar7;
  if (puVar7[1] != 0) {
    plVar1 = (long *)(puVar7[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_b0 = plVar5;
  puStack_a0 = &stack0xfffffffffffffff0;
  (*pcVar8)(&uStack_c0,plVar6);
  plVar5 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar6 = plStack_b8 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a59e48c; end: 10a59e713;  */

undefined8 * FUN_10a59e48c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  long lVar2;
  ulong uVar3;
  undefined8 **ppuVar4;
  undefined1 uVar5;
  undefined8 ***pppuVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  undefined8 **appuStack_80 [2];
  char cStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_110bf6f90;
  param_1[1] = param_2;
  param_1[2] = 0;
  FUN_10a03c0d0(param_1 + 3);
  *param_1 = &PTR_DAT_110bf7168;
  param_1[3] = &PTR_DAT_110bf71c0;
  puVar9 = param_1 + 7;
  param_1[8] = 0;
  *puVar9 = 0;
  param_1[0xc] = 0x32aaaba7;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  lVar13 = *(long *)(param_1[1] + 0x100);
  uVar3 = *(ulong *)(lVar13 + 0x210);
  if (-1 < (char)*(byte *)(lVar13 + 0x21f)) {
    uVar3 = (ulong)*(byte *)(lVar13 + 0x21f);
  }
  FUN_10a003c90(appuStack_80,uVar3 + 1,&ppuStack_98);
  pppuVar1 = (undefined8 ***)appuStack_80[0];
  if (-1 < cStack_69) {
    pppuVar1 = appuStack_80;
  }
  if (uVar3 != 0) {
    lVar2 = *(long *)(lVar13 + 0x208);
    if (-1 < *(char *)(lVar13 + 0x21f)) {
      lVar2 = lVar13 + 0x208;
    }
    _memmove(pppuVar1,lVar2,uVar3);
  }
  *(undefined2 *)((long)pppuVar1 + uVar3) = 0x3a;
  __ZNSt3__16chrono12steady_clock3nowEv();
  __ZNSt3__19to_stringEx(&ppuStack_98);
  pppuVar1 = (undefined8 ***)ppuStack_98;
  if (-1 < (char)bStack_81) {
    uStack_90 = (ulong)bStack_81;
    pppuVar1 = &ppuStack_98;
  }
  pppuVar6 = appuStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,pppuVar1,uStack_90);
  ppuVar4 = *pppuVar6;
  uStack_68 = SUB87(pppuVar6[1],0);
  uStack_61 = (undefined1)*(undefined8 *)((long)pppuVar6 + 0xf);
  uStack_60 = (undefined7)((ulong)*(undefined8 *)((long)pppuVar6 + 0xf) >> 8);
  uVar5 = *(undefined1 *)((long)pppuVar6 + 0x17);
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(*puVar9);
  }
  param_1[7] = ppuVar4;
  param_1[8] = CONCAT17(uStack_61,uStack_68);
  *(ulong *)((long)param_1 + 0x47) = CONCAT71(uStack_60,uStack_61);
  *(undefined1 *)((long)param_1 + 0x4f) = uVar5;
  if ((char)bStack_81 < '\0') {
    __ZdlPv(ppuStack_98);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(appuStack_80[0]);
  }
  puVar7 = (undefined8 *)param_1[4];
  ppuVar10 = &PTR_DAT_110b9f988;
  FUN_10a5ae998(puVar7,&PTR_DAT_110b9f988,param_1[1],param_1 + 3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_10a5c93e4(param_1 + 0x14);
    __ZNSt3__15mutexD1Ev(param_1 + 0xc);
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(*puVar9);
    }
    param_1[3] = &PTR_FUN_110b9f9a8;
    if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[6] = 0;
    }
    func_0x00010a004e5c(param_1 + 4);
    *param_1 = &PTR_DAT_110bf6f90;
    plVar8 = (long *)param_1[2];
    param_1[2] = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    __Unwind_Resume();
    lVar13 = puVar7[1];
    uVar3 = 0;
    if (puVar7[2] != lVar13) {
      uVar3 = (puVar7[2] - lVar13 >> 3) * 0xaa - 1;
    }
    uVar12 = puVar7[5] + puVar7[4];
    puVar9 = puVar7;
    if (uVar3 == uVar12) {
      FUN_10a5c9578(puVar7);
      lVar13 = puVar7[1];
      uVar12 = puVar7[5] + puVar7[4];
    }
    puVar11 = (undefined8 *)(*(long *)(lVar13 + (uVar12 / 0xaa) * 8) + (uVar12 % 0xaa) * 0x18);
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar14 = *ppuVar10;
    puVar11[1] = ppuVar10[1];
    *puVar11 = puVar14;
    puVar11[2] = ppuVar10[2];
    *ppuVar10 = (undefined *)0x0;
    ppuVar10[1] = (undefined *)0x0;
    ppuVar10[2] = (undefined *)0x0;
    puVar7[5] = puVar7[5] + 1;
    return puVar9;
  }
  return param_1;
}



/* Entry: 10a59e714; end: 10a59e7c7;  */

void FUN_10a59e714(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar1 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * 0xaa - 1;
  }
  uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar4) {
    FUN_10a5c9578(param_1);
    lVar2 = *(long *)(param_1 + 8);
    uVar4 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + (uVar4 / 0xaa) * 8) + (uVar4 % 0xaa) * 0x18);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar5 = *param_2;
  puVar3[1] = param_2[1];
  *puVar3 = uVar5;
  puVar3[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}



/* Entry: 10a59e7c8; end: 10a59e8a7;  */

void FUN_10a59e7c8(long param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0xd0);
  if (0xa00000 < uVar1) {
    lVar4 = 0;
    do {
      if (*(long *)(param_1 + 200) == 0) break;
      plVar2 = (long *)(*(long *)(*(long *)(param_1 + 0xa8) +
                                 (*(ulong *)(param_1 + 0xc0) / 0xaa) * 8) +
                       (*(ulong *)(param_1 + 0xc0) % 0xaa) * 0x18);
      lVar3 = plVar2[1] - *plVar2;
      *(ulong *)(param_1 + 0xd0) = uVar1 - lVar3;
      lVar4 = lVar3 + lVar4;
      FUN_10a59e8a8(param_1 + 0xa0);
      uVar1 = *(ulong *)(param_1 + 0xd0);
    } while (0xa00000 < uVar1);
    if ((lVar4 != 0) && ((bRam000000011330a9e8 & 1) != 0)) {
      func_0x00010ae06f08(0,1,&UNK_10f664e55,&UNK_10f664eab,0x31,&UNK_10f664f01,in_x6,in_x7,lVar4,
                          0xa00000);
    }
  }
  return;
}



/* Entry: 10a59e8a8; end: 10a59e947;  */

void FUN_10a59e8a8(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    plVar5 = (long *)(*(long *)(*(long *)(param_1 + 8) + (uVar4 / 0xaa) * 8) + (uVar4 % 0xaa) * 0x18
                     );
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      plVar5[1] = lVar2;
      __ZdlPv();
      uVar4 = *(ulong *)(param_1 + 0x20);
      lVar3 = *(long *)(param_1 + 0x28);
    }
    *(ulong *)(param_1 + 0x20) = uVar4 + 1;
    *(long *)(param_1 + 0x28) = lVar3 + -1;
    if (0x153 < uVar4 + 1) {
      __ZdlPv(**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0xaa;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a59e948);
  (*pcVar1)();
}



/* Entry: 10a59e948; end: 10a59f10f;  */

void FUN_10a59e948(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *****pppppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar8;
  undefined ***pppuVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  long lVar13;
  undefined **ppuVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 ****ppppuStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  
  plVar11 = param_1;
  (**(code **)(*param_1 + 0x20))();
  if ((int)plVar11 != 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (999999999 < (long)plVar11 - param_1[10]) {
      param_1[10] = (long)plVar11;
      param_1[0xb] = 0x32;
    }
    lStack_98 = 0;
    lStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
    lStack_a8 = 0;
    puStack_b0 = (undefined *)0x0;
    __ZNSt3__15mutex4lockEv(param_1 + 0xc);
    ppuVar14 = (undefined **)(param_1 + 0x14);
    lVar10 = param_1[0x15];
    puVar12 = *ppuVar14;
    lVar13 = param_1[0x17];
    lVar17 = param_1[0x16];
    lVar18 = param_1[0x19];
    uVar8 = param_1[0x18];
    param_1[0x15] = lStack_a8;
    *ppuVar14 = puStack_b0;
    param_1[0x17] = lStack_98;
    param_1[0x16] = lStack_a0;
    lVar15 = param_1[0x19];
    param_1[0x19] = lStack_88;
    param_1[0x18] = uStack_90;
    param_1[0x1a] = 0;
    puStack_b0 = puVar12;
    lStack_a8 = lVar10;
    lStack_a0 = lVar17;
    lStack_98 = lVar13;
    uStack_90 = uVar8;
    lStack_88 = lVar18;
    __ZNSt3__15mutex6unlockEv(param_1 + 0xc);
    if (lVar15 != 0) {
      pppppuVar4 = (undefined8 *****)0x19008;
      __Znwm();
      *(undefined1 *)pppppuVar4 = 0;
      uStack_b8 = 0x8000000000019008;
      uStack_c0 = 0;
      uStack_d0 = 0;
      lStack_e0 = 0;
      lStack_d8 = 0;
      ppppuStack_c8 = pppppuVar4;
      func_0x000107c31950(&lStack_e0,0x19000);
      if (lStack_88 != 0) {
        while (param_1[0xb] != 0) {
          ppuStack_110 = (undefined **)0x0;
          ppuStack_118 = (undefined **)0x0;
          ppuStack_120 = &PTR_DAT_110b1aa68;
          ppuStack_108 = (undefined **)&DAT_11383d918;
          ppuStack_100 = (undefined **)&DAT_11383d918;
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_e8 = 1;
          pppuVar5 = &ppuStack_120;
          func_0x0001098d8018();
          uVar8 = uStack_b8 >> 0x38;
          if ((long)uStack_b8 < 0) {
            *(undefined1 *)ppppuStack_c8 = 0;
            uStack_c0 = 0;
          }
          else {
            uVar8 = 0;
            ppppuStack_c8 = (undefined8 ****)((ulong)ppppuStack_c8 & 0xffffffffffffff00);
            uStack_b8 = uStack_b8 & 0xffffffffffffff;
          }
          if (lStack_88 != 0) {
            uVar16 = 0x18c00U - (long)pppuVar5 &
                     ((long)(0x18c00U - (long)pppuVar5) >> 0x3f ^ 0xffffffffffffffffU);
            do {
              uVar2 = uStack_c0;
              if (-1 < (char)uVar8) {
                uVar2 = uVar8;
              }
              plVar11 = (long *)(*(long *)(lStack_a8 + (uStack_90 / 0xaa) * 8) +
                                (uStack_90 % 0xaa) * 0x18);
              lVar15 = plVar11[1] - *plVar11;
              if ((long)uVar16 < (long)(lVar15 + uVar2)) {
                if (uVar2 != 0) goto LAB_10a59eb38;
                if ((bRam000000011330a9e8 & 1) != 0) {
                  func_0x00010ae06f08(0,1,&UNK_10f664e55,&UNK_10f664f46,0x61,&UNK_10f664f91,in_x6,
                                      in_x7,lVar15,uVar16);
                }
                FUN_10a59e8a8(&puStack_b0);
                goto LAB_10a59ed04;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&ppppuStack_c8);
              FUN_10a59e8a8(&puStack_b0);
              uVar8 = uStack_b8 >> 0x38;
            } while (lStack_88 != 0);
          }
          uVar16 = uStack_c0;
          if (-1 < (char)uVar8) {
            uVar16 = uVar8;
          }
          if (uVar16 == 0) goto LAB_10a59f050;
LAB_10a59eb38:
          ppuStack_110 = (undefined **)((ulong)ppuStack_110 | 1);
          if (uStack_f8 == 0) {
            ppuVar6 = ppuStack_118;
            if (((ulong)ppuStack_118 & 1) != 0) {
              ppuVar6 = *(undefined ***)((ulong)ppuStack_118 & 0xfffffffffffffffe);
            }
            func_0x0001098d8234();
            uStack_f8 = (ulong)ppuVar6;
          }
          uVar8 = uStack_f8;
          *(uint *)(uStack_f8 + 0x10) = *(uint *)(uStack_f8 + 0x10) | 1;
          uVar16 = *(ulong *)(uStack_f8 + 0x18);
          if (uVar16 == 0) {
            uVar16 = *(ulong *)(uStack_f8 + 8);
            if ((uVar16 & 1) != 0) {
              uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
            }
            func_0x0001098e162c();
            *(ulong *)(uVar8 + 0x18) = uVar16;
          }
          uStack_70 = uStack_c0;
          ppppuStack_78 = ppppuStack_c8;
          if (-1 < (long)uStack_b8) {
            uStack_70 = uStack_b8 >> 0x38;
            ppppuStack_78 = &ppppuStack_c8;
          }
          func_0x000107c30348();
          if ((uVar16 & 1) == 0) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              uVar8 = uStack_c0;
              if (-1 < (long)uStack_b8) {
                uVar8 = uStack_b8 >> 0x38;
              }
              func_0x00010ae06f08(0,1,&UNK_10f664e55,&UNK_10f664f46,0x67,&UNK_10f664fd4,in_x6,in_x7,
                                  uVar8);
            }
          }
          else {
            pppuVar5 = &ppuStack_120;
            func_0x0001098d8018();
            pppuVar9 = (undefined ***)(lStack_d8 - lStack_e0);
            if (pppuVar5 < pppuVar9 || (long)pppuVar5 - (long)pppuVar9 == 0) {
              if (pppuVar5 < pppuVar9) {
                lStack_d8 = lStack_e0 + (long)pppuVar5;
              }
            }
            else {
              func_0x000107c27d58(&lStack_e0,(long)pppuVar5 - (long)pppuVar9);
            }
            if (lStack_e0 != lStack_d8) {
              pppuVar5 = &ppuStack_120;
              func_0x00010b4d1758(pppuVar5,lStack_e0,(int)lStack_d8 - (int)lStack_e0);
              if (((ulong)pppuVar5 & 1) != 0) {
                if (lStack_e0 != lStack_d8) {
                  if (param_1[0xb] != 0) {
                    param_1[0xb] = param_1[0xb] + -1;
                  }
                  (**(code **)(*param_1 + 0x38))(param_1,lStack_e0,lStack_d8 - lStack_e0);
                }
                goto LAB_10a59ed04;
              }
            }
            if ((bRam000000011330a9e8 & 1) != 0) {
              func_0x00010ae06f08(0,1,&UNK_10f664e55,&UNK_10f665019,0x81,&UNK_10f6650c7);
            }
            lStack_d8 = lStack_e0;
          }
LAB_10a59ed04:
          func_0x0001098d7dcc(&ppuStack_120);
          if (lStack_88 == 0) goto LAB_10a59f008;
        }
        __ZNSt3__15mutex4lockEv(param_1 + 0xc);
        while (lStack_88 != 0) {
          uVar8 = (lStack_88 + uStack_90) - 1;
          plVar11 = (long *)(*(long *)(lStack_a8 + (uVar8 / 0xaa) * 8) + (uVar8 % 0xaa) * 0x18);
          param_1[0x1a] = (plVar11[1] - *plVar11) + param_1[0x1a];
          uVar8 = param_1[0x18];
          lVar15 = param_1[0x15];
          lVar10 = param_1[0x16];
          if (uVar8 == 0) {
            uVar8 = lVar10 - lVar15;
            lVar17 = 0;
            if (uVar8 != 0) {
              lVar17 = ((long)uVar8 >> 3) * 0xaa + -1;
            }
            if ((ulong)(lVar17 - param_1[0x19]) < 0xaa) {
              lVar10 = param_1[0x14];
              uVar16 = param_1[0x17] - lVar10;
              if (uVar8 < uVar16) {
                if (lVar15 == lVar10) {
                  ppuVar6 = (undefined **)0xff0;
                  __Znwm();
                  ppuStack_120 = ppuVar6;
                  func_0x00010a5c982c(ppuVar14,&ppuStack_120);
                  uVar7 = *(undefined8 *)(param_1[0x16] + -8);
                  param_1[0x16] = param_1[0x16] + -8;
                  FUN_10a5ca5f4(ppuVar14,uVar7);
                }
                else {
                  ppuVar6 = (undefined **)0xff0;
                  __Znwm();
                  ppuStack_120 = ppuVar6;
                  FUN_10a5c9930(ppuVar14,&ppuStack_120);
                }
                if (param_1[0x16] - param_1[0x15] == 8) {
                  lVar15 = 0x55;
                }
                else {
                  lVar15 = param_1[0x18] + 0xaa;
                }
                param_1[0x18] = lVar15;
              }
              else {
                lVar15 = (long)uVar16 >> 2;
                if (param_1[0x17] == lVar10) {
                  lVar15 = 1;
                }
                ppuVar6 = ppuVar14;
                ppuStack_100 = ppuVar14;
                FUN_10a5c9c44();
                ppuStack_108 = ppuVar6 + lVar15;
                pppppuVar4 = (undefined8 *****)0xff0;
                ppuStack_120 = ppuVar6;
                ppuStack_118 = ppuVar6;
                ppuStack_110 = ppuVar6;
                __Znwm();
                ppppuStack_78 = pppppuVar4;
                FUN_10a5c9a38(&ppuStack_120,&ppppuStack_78);
                uVar8 = param_1[0x15];
                uVar16 = param_1[0x16];
                if (uVar8 != uVar16) {
                  do {
                    FUN_10a5ca6f8(&ppuStack_120,uVar8);
                    uVar8 = uVar8 + 8;
                    uVar16 = param_1[0x16];
                  } while (uVar8 != uVar16);
                  uVar8 = param_1[0x15];
                }
                ppuVar6 = (undefined **)param_1[0x14];
                puVar12 = (undefined *)param_1[0x17];
                param_1[0x15] = (long)ppuStack_118;
                param_1[0x14] = (long)ppuStack_120;
                param_1[0x17] = (long)ppuStack_108;
                param_1[0x16] = (long)ppuStack_110;
                if ((long)ppuStack_110 - (long)ppuStack_118 == 8) {
                  lVar15 = 0x55;
                }
                else {
                  lVar15 = param_1[0x18] + 0xaa;
                }
                param_1[0x18] = lVar15;
                ppuStack_110 = (undefined **)uVar16;
                if (uVar16 != uVar8) {
                  ppuStack_110 = (undefined **)
                                 (uVar16 + ((uVar8 - uVar16) + 7 & 0xfffffffffffffff8));
                }
                ppuStack_120 = ppuVar6;
                ppuStack_118 = (undefined **)uVar8;
                ppuStack_108 = (undefined **)puVar12;
                if (ppuVar6 != (undefined **)0x0) {
                  __ZdlPv();
                }
              }
            }
            else {
              param_1[0x18] = 0xaa;
              uVar7 = *(undefined8 *)(lVar10 + -8);
              param_1[0x16] = lVar10 + -8;
              FUN_10a5ca5f4(ppuVar14,uVar7);
            }
            uVar8 = param_1[0x18];
            lVar15 = param_1[0x15];
            lVar10 = param_1[0x16];
          }
          plVar1 = (long *)(lVar15 + (uVar8 / 0xaa) * 8);
          lVar13 = *plVar1;
          lVar17 = 0;
          if (lVar10 != lVar15) {
            lVar17 = lVar13 + (uVar8 % 0xaa) * 0x18;
          }
          if (lVar17 == lVar13) {
            lVar17 = plVar1[-1] + 0xff0;
          }
          *(undefined8 *)(lVar17 + -0x18) = 0;
          *(undefined8 *)(lVar17 + -0x10) = 0;
          *(undefined8 *)(lVar17 + -8) = 0;
          lVar15 = *plVar11;
          *(long *)(lVar17 + -0x10) = plVar11[1];
          *(long *)(lVar17 + -0x18) = lVar15;
          *(long *)(lVar17 + -8) = plVar11[2];
          *plVar11 = 0;
          plVar11[1] = 0;
          plVar11[2] = 0;
          param_1[0x19] = param_1[0x19] + 1;
          param_1[0x18] = param_1[0x18] + -1;
          if (lStack_88 == 0) {
LAB_10a59f050:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10a59f054);
            (*pcVar3)();
          }
          lVar10 = lStack_88 + -1;
          plVar11 = (long *)(*(long *)(lStack_a8 + ((uStack_90 + lVar10) / 0xaa) * 8) +
                            ((uStack_90 + lVar10) % 0xaa) * 0x18);
          lVar15 = *plVar11;
          if (lVar15 != 0) {
            plVar11[1] = lVar15;
            __ZdlPv();
            lVar10 = lStack_88 + -1;
          }
          lStack_88 = lVar10;
          FUN_10a5ca7fc(&puStack_b0);
        }
        FUN_10a59e7c8(param_1);
        __ZNSt3__15mutex6unlockEv(param_1 + 0xc);
      }
LAB_10a59f008:
      if (lStack_e0 != 0) {
        lStack_d8 = lStack_e0;
        __ZdlPv();
      }
      if ((long)uStack_b8 < 0) {
        __ZdlPv(ppppuStack_c8);
      }
    }
    FUN_10a5c93e4(&puStack_b0);
  }
  return;
}



/* Entry: 10a59f110; end: 10a59f1b7;  */

void FUN_10a59f110(long param_1)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *****pppppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  long lVar15;
  undefined **ppuVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 ****ppppuStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  
  plVar7 = (long *)(param_1 + -0x18);
  plVar13 = plVar7;
  (**(code **)(*plVar7 + 0x20))();
  if ((int)plVar13 != 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (999999999 < (long)plVar13 - *(long *)(param_1 + 0x38)) {
      *(long **)(param_1 + 0x38) = plVar13;
      *(undefined8 *)(param_1 + 0x40) = 0x32;
    }
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
    lStack_a8 = 0;
    puStack_b0 = (undefined *)0x0;
    __ZNSt3__15mutex4lockEv(param_1 + 0x48);
    ppuVar16 = (undefined **)(param_1 + 0x88);
    lVar12 = *(long *)(param_1 + 0x90);
    puVar14 = *ppuVar16;
    uVar19 = *(undefined8 *)(param_1 + 0xa0);
    uVar8 = *(undefined8 *)(param_1 + 0x98);
    lVar20 = *(long *)(param_1 + 0xb0);
    uVar9 = *(ulong *)(param_1 + 0xa8);
    *(long *)(param_1 + 0x90) = lStack_a8;
    *ppuVar16 = puStack_b0;
    *(undefined8 *)(param_1 + 0xa0) = uStack_98;
    *(undefined8 *)(param_1 + 0x98) = uStack_a0;
    lVar17 = *(long *)(param_1 + 0xb0);
    *(long *)(param_1 + 0xb0) = lStack_88;
    *(ulong *)(param_1 + 0xa8) = uStack_90;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    puStack_b0 = puVar14;
    lStack_a8 = lVar12;
    uStack_a0 = uVar8;
    uStack_98 = uVar19;
    uStack_90 = uVar9;
    lStack_88 = lVar20;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x48);
    if (lVar17 != 0) {
      pppppuVar4 = (undefined8 *****)0x19008;
      __Znwm();
      *(undefined1 *)pppppuVar4 = 0;
      uStack_b8 = 0x8000000000019008;
      uStack_c0 = 0;
      uStack_d0 = 0;
      lStack_e0 = 0;
      lStack_d8 = 0;
      ppppuStack_c8 = pppppuVar4;
      func_0x000107c31950(&lStack_e0,0x19000);
      if (lStack_88 != 0) {
        while (*(long *)(param_1 + 0x40) != 0) {
          ppuStack_110 = (undefined **)0x0;
          ppuStack_118 = (undefined **)0x0;
          ppuStack_120 = &PTR_DAT_110b1aa68;
          ppuStack_108 = (undefined **)&DAT_11383d918;
          ppuStack_100 = (undefined **)&DAT_11383d918;
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_e8 = 1;
          pppuVar5 = &ppuStack_120;
          func_0x0001098d8018();
          uVar9 = uStack_b8 >> 0x38;
          if ((long)uStack_b8 < 0) {
            *(undefined1 *)ppppuStack_c8 = 0;
            uStack_c0 = 0;
          }
          else {
            uVar9 = 0;
            ppppuStack_c8 = (undefined8 ****)((ulong)ppppuStack_c8 & 0xffffffffffffff00);
            uStack_b8 = uStack_b8 & 0xffffffffffffff;
          }
          if (lStack_88 != 0) {
            uVar18 = 0x18c00U - (long)pppuVar5 &
                     ((long)(0x18c00U - (long)pppuVar5) >> 0x3f ^ 0xffffffffffffffffU);
            do {
              uVar2 = uStack_c0;
              if (-1 < (char)uVar9) {
                uVar2 = uVar9;
              }
              plVar13 = (long *)(*(long *)(lStack_a8 + (uStack_90 / 0xaa) * 8) +
                                (uStack_90 % 0xaa) * 0x18);
              lVar17 = plVar13[1] - *plVar13;
              if ((long)uVar18 < (long)(lVar17 + uVar2)) {
                if (uVar2 != 0) goto LAB_10a59eb38;
                if ((bRam000000011330a9e8 & 1) != 0) {
                  func_0x00010ae06f08(0,1,&UNK_10f664e55,&UNK_10f664f46,0x61,&UNK_10f664f91,in_x6,
                                      in_x7,lVar17,uVar18);
                }
                FUN_10a59e8a8(&puStack_b0);
                goto LAB_10a59ed04;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&ppppuStack_c8);
              FUN_10a59e8a8(&puStack_b0);
              uVar9 = uStack_b8 >> 0x38;
            } while (lStack_88 != 0);
          }
          uVar18 = uStack_c0;
          if (-1 < (char)uVar9) {
            uVar18 = uVar9;
          }
          if (uVar18 == 0) goto LAB_10a59f050;
LAB_10a59eb38:
          ppuStack_110 = (undefined **)((ulong)ppuStack_110 | 1);
          if (uStack_f8 == 0) {
            ppuVar6 = ppuStack_118;
            if (((ulong)ppuStack_118 & 1) != 0) {
              ppuVar6 = *(undefined ***)((ulong)ppuStack_118 & 0xfffffffffffffffe);
            }
            func_0x0001098d8234();
            uStack_f8 = (ulong)ppuVar6;
          }
          uVar9 = uStack_f8;
          *(uint *)(uStack_f8 + 0x10) = *(uint *)(uStack_f8 + 0x10) | 1;
          uVar18 = *(ulong *)(uStack_f8 + 0x18);
          if (uVar18 == 0) {
            uVar18 = *(ulong *)(uStack_f8 + 8);
            if ((uVar18 & 1) != 0) {
              uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
            }
            func_0x0001098e162c();
            *(ulong *)(uVar9 + 0x18) = uVar18;
          }
          uStack_70 = uStack_c0;
          ppppuStack_78 = ppppuStack_c8;
          if (-1 < (long)uStack_b8) {
            uStack_70 = uStack_b8 >> 0x38;
            ppppuStack_78 = &ppppuStack_c8;
          }
          func_0x000107c30348();
          if ((uVar18 & 1) == 0) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              uVar9 = uStack_c0;
              if (-1 < (long)uStack_b8) {
                uVar9 = uStack_b8 >> 0x38;
              }
              func_0x00010ae06f08(0,1,&UNK_10f664e55,&UNK_10f664f46,0x67,&UNK_10f664fd4,in_x6,in_x7,
                                  uVar9);
            }
          }
          else {
            pppuVar5 = &ppuStack_120;
            func_0x0001098d8018();
            pppuVar10 = (undefined ***)(lStack_d8 - lStack_e0);
            if (pppuVar5 < pppuVar10 || (long)pppuVar5 - (long)pppuVar10 == 0) {
              if (pppuVar5 < pppuVar10) {
                lStack_d8 = lStack_e0 + (long)pppuVar5;
              }
            }
            else {
              func_0x000107c27d58(&lStack_e0,(long)pppuVar5 - (long)pppuVar10);
            }
            if (lStack_e0 != lStack_d8) {
              pppuVar5 = &ppuStack_120;
              func_0x00010b4d1758(pppuVar5,lStack_e0,(int)lStack_d8 - (int)lStack_e0);
              if (((ulong)pppuVar5 & 1) != 0) {
                if (lStack_e0 != lStack_d8) {
                  if (*(long *)(param_1 + 0x40) != 0) {
                    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
                  }
                  (**(code **)(*plVar7 + 0x38))(plVar7,lStack_e0,lStack_d8 - lStack_e0);
                }
                goto LAB_10a59ed04;
              }
            }
            if ((bRam000000011330a9e8 & 1) != 0) {
              func_0x00010ae06f08(0,1,&UNK_10f664e55,&UNK_10f665019,0x81,&UNK_10f6650c7);
            }
            lStack_d8 = lStack_e0;
          }
LAB_10a59ed04:
          func_0x0001098d7dcc(&ppuStack_120);
          if (lStack_88 == 0) goto LAB_10a59f008;
        }
        __ZNSt3__15mutex4lockEv(param_1 + 0x48);
        while (lStack_88 != 0) {
          uVar9 = (lStack_88 + uStack_90) - 1;
          plVar13 = (long *)(*(long *)(lStack_a8 + (uVar9 / 0xaa) * 8) + (uVar9 % 0xaa) * 0x18);
          *(long *)(param_1 + 0xb8) = (plVar13[1] - *plVar13) + *(long *)(param_1 + 0xb8);
          uVar9 = *(ulong *)(param_1 + 0xa8);
          lVar17 = *(long *)(param_1 + 0x90);
          lVar12 = *(long *)(param_1 + 0x98);
          if (uVar9 == 0) {
            uVar9 = lVar12 - lVar17;
            lVar20 = 0;
            if (uVar9 != 0) {
              lVar20 = ((long)uVar9 >> 3) * 0xaa + -1;
            }
            if ((ulong)(lVar20 - *(long *)(param_1 + 0xb0)) < 0xaa) {
              lVar12 = *(long *)(param_1 + 0x88);
              uVar18 = *(long *)(param_1 + 0xa0) - lVar12;
              if (uVar9 < uVar18) {
                if (lVar17 == lVar12) {
                  ppuVar6 = (undefined **)0xff0;
                  __Znwm();
                  ppuStack_120 = ppuVar6;
                  func_0x00010a5c982c(ppuVar16,&ppuStack_120);
                  puVar11 = (undefined8 *)(*(long *)(param_1 + 0x98) + -8);
                  uVar8 = *puVar11;
                  *(undefined8 **)(param_1 + 0x98) = puVar11;
                  FUN_10a5ca5f4(ppuVar16,uVar8);
                }
                else {
                  ppuVar6 = (undefined **)0xff0;
                  __Znwm();
                  ppuStack_120 = ppuVar6;
                  FUN_10a5c9930(ppuVar16,&ppuStack_120);
                }
                if (*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) == 8) {
                  lVar17 = 0x55;
                }
                else {
                  lVar17 = *(long *)(param_1 + 0xa8) + 0xaa;
                }
                *(long *)(param_1 + 0xa8) = lVar17;
              }
              else {
                lVar17 = (long)uVar18 >> 2;
                if (*(long *)(param_1 + 0xa0) == lVar12) {
                  lVar17 = 1;
                }
                ppuVar6 = ppuVar16;
                ppuStack_100 = ppuVar16;
                FUN_10a5c9c44();
                ppuStack_108 = ppuVar6 + lVar17;
                pppppuVar4 = (undefined8 *****)0xff0;
                ppuStack_120 = ppuVar6;
                ppuStack_118 = ppuVar6;
                ppuStack_110 = ppuVar6;
                __Znwm();
                ppppuStack_78 = pppppuVar4;
                FUN_10a5c9a38(&ppuStack_120,&ppppuStack_78);
                uVar9 = *(ulong *)(param_1 + 0x90);
                uVar18 = *(ulong *)(param_1 + 0x98);
                if (uVar9 != uVar18) {
                  do {
                    FUN_10a5ca6f8(&ppuStack_120,uVar9);
                    uVar9 = uVar9 + 8;
                    uVar18 = *(ulong *)(param_1 + 0x98);
                  } while (uVar9 != uVar18);
                  uVar9 = *(ulong *)(param_1 + 0x90);
                }
                ppuVar6 = *(undefined ***)(param_1 + 0x88);
                puVar14 = *(undefined **)(param_1 + 0xa0);
                *(undefined ***)(param_1 + 0x90) = ppuStack_118;
                *(undefined ***)(param_1 + 0x88) = ppuStack_120;
                *(undefined ***)(param_1 + 0xa0) = ppuStack_108;
                *(undefined ***)(param_1 + 0x98) = ppuStack_110;
                if ((long)ppuStack_110 - (long)ppuStack_118 == 8) {
                  lVar17 = 0x55;
                }
                else {
                  lVar17 = *(long *)(param_1 + 0xa8) + 0xaa;
                }
                *(long *)(param_1 + 0xa8) = lVar17;
                ppuStack_110 = (undefined **)uVar18;
                if (uVar18 != uVar9) {
                  ppuStack_110 = (undefined **)
                                 (uVar18 + ((uVar9 - uVar18) + 7 & 0xfffffffffffffff8));
                }
                ppuStack_120 = ppuVar6;
                ppuStack_118 = (undefined **)uVar9;
                ppuStack_108 = (undefined **)puVar14;
                if (ppuVar6 != (undefined **)0x0) {
                  __ZdlPv();
                }
              }
            }
            else {
              *(undefined8 *)(param_1 + 0xa8) = 0xaa;
              uVar8 = *(undefined8 *)(lVar12 + -8);
              *(undefined8 **)(param_1 + 0x98) = (undefined8 *)(lVar12 + -8);
              FUN_10a5ca5f4(ppuVar16,uVar8);
            }
            uVar9 = *(ulong *)(param_1 + 0xa8);
            lVar17 = *(long *)(param_1 + 0x90);
            lVar12 = *(long *)(param_1 + 0x98);
          }
          plVar1 = (long *)(lVar17 + (uVar9 / 0xaa) * 8);
          lVar15 = *plVar1;
          lVar20 = 0;
          if (lVar12 != lVar17) {
            lVar20 = lVar15 + (uVar9 % 0xaa) * 0x18;
          }
          if (lVar20 == lVar15) {
            lVar20 = plVar1[-1] + 0xff0;
          }
          *(undefined8 *)(lVar20 + -0x18) = 0;
          *(undefined8 *)(lVar20 + -0x10) = 0;
          *(undefined8 *)(lVar20 + -8) = 0;
          lVar17 = *plVar13;
          *(long *)(lVar20 + -0x10) = plVar13[1];
          *(long *)(lVar20 + -0x18) = lVar17;
          *(long *)(lVar20 + -8) = plVar13[2];
          *plVar13 = 0;
          plVar13[1] = 0;
          plVar13[2] = 0;
          *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
          *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + -1;
          if (lStack_88 == 0) {
LAB_10a59f050:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10a59f054);
            (*pcVar3)();
          }
          lVar12 = lStack_88 + -1;
          plVar13 = (long *)(*(long *)(lStack_a8 + ((uStack_90 + lVar12) / 0xaa) * 8) +
                            ((uStack_90 + lVar12) % 0xaa) * 0x18);
          lVar17 = *plVar13;
          if (lVar17 != 0) {
            plVar13[1] = lVar17;
            __ZdlPv();
            lVar12 = lStack_88 + -1;
          }
          lStack_88 = lVar12;
          FUN_10a5ca7fc(&puStack_b0);
        }
        FUN_10a59e7c8(plVar7);
        __ZNSt3__15mutex6unlockEv(param_1 + 0x48);
      }
LAB_10a59f008:
      if (lStack_e0 != 0) {
        lStack_d8 = lStack_e0;
        __ZdlPv();
      }
      if ((long)uStack_b8 < 0) {
        __ZdlPv(ppppuStack_c8);
      }
    }
    FUN_10a5c93e4(&puStack_b0);
  }
  return;
}



/* Entry: 10a59f1b8; end: 10a59f59f;  */

void FUN_10a59f1b8(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f665176,0x14);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bf81e0;
  pppuVar2 = (undefined8 ***)&UNK_10f66429f;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bf81e0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a59f580;
    FUN_10a054dac(param_1,&UNK_10f64bfd7,FUN_10a5cae60,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a59f580;
    FUN_10a054dac(param_1,&UNK_10f665116,FUN_10a5cafe4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a59f580;
    FUN_10a054dac(param_1,&UNK_10f66512b,FUN_10a5cb0c0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a59f580;
    FUN_10a054dac(param_1,&UNK_10f665142,FUN_10a5cb1a4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64c0a8,FUN_10a5cb29c,FUN_10a5cb37c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64c0b6,FUN_10a5cb7d0,FUN_10a5cb8b0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f665161,FUN_10a5cb968,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"config",FUN_10a5cbb1c,FUN_10a5cbd14);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f665176,0x14);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a59f580:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a59f584);
  (*pcVar6)();
}



/* Entry: 10a59f5a0; end: 10a59f63b;  */

/* WARNING: Removing unreachable block (ram,0x00010a5bb11c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb120) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb138) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb140) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb148) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb158) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb168) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb170) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb1e4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb18c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb198) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb1a8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb1b4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb1bc) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb1d0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb210) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb298) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2b0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2b8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2c0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2d4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2d8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2e0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb24c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb254) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb264) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb290) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb308) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb310) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb31c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb320) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb328) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb330) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb33c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb340) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb348) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb350) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb374) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb378) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb380) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb388) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3b0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3b8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3c0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3c4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3dc) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3e4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3e8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3f0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3f8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2e8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2ec) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3fc) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb414) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb428) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb4c4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb4d0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb540) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb548) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb554) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb560) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb568) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb574) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb57c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb588) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb590) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb59c) */

void FUN_10a59f5a0(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x87) < '\0') {
    if (*(long *)(param_1 + 0x78) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x87) == '\0') {
    return;
  }
  if ((*(byte *)(param_2 + 0x238) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x208) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x230) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined ***)(param_2 + 0x200) = &PTR_FUN_110bef348;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x230) = 0x3f800000;
    *(undefined1 *)(param_2 + 0x238) = 1;
  }
  FUN_10a4d8870(param_2 + 0x200,param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xb8);
  return;
}



/* Entry: 10a59f63c; end: 10a5a029f;  */

void FUN_10a59f63c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  long *unaff_x27;
  ulong unaff_x28;
  long *plVar27;
  long lStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  float fStack_b0;
  int iStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if (param_2 != 0) {
    param_2 = param_2 + 0x10;
    FUN_10a507e80(param_2,param_1 + 0xd);
    if (param_2 == 0) {
      uStack_c8 = 0;
      lStack_d0 = 0;
      uStack_b8 = 0;
      plStack_c0 = (long *)0x0;
      fStack_b0 = 1.0;
    }
    else {
      puVar21 = *(undefined8 **)(param_2 + 0x80);
      puVar1 = *(undefined8 **)(param_2 + 0x88);
      uStack_c8 = 0;
      lStack_d0 = 0;
      uStack_b8 = 0;
      plStack_c0 = (long *)0x0;
      fStack_b0 = 1.0;
      if (puVar1 != puVar21) {
        do {
          uVar14 = uStack_c8;
          unaff_x27 = (long *)*puVar21;
          iVar2 = (int)unaff_x27[3];
          plVar24 = (long *)puVar21[1];
          if (plVar24 != (long *)0x0) {
            plVar12 = plVar24 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar5) {
                *plVar12 = *plVar12 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uVar26 = (ulong)iVar2;
          iStack_a0 = iVar2;
          plStack_98 = unaff_x27;
          plStack_90 = plVar24;
          if (uStack_c8 != 0) {
            uVar9 = uStack_c8 - 1;
            if ((uStack_c8 & uVar9) == 0) {
              unaff_x28 = uVar9 & uVar26;
            }
            else {
              unaff_x28 = uVar26;
              if (uStack_c8 <= uVar26) {
                uVar16 = 0;
                if (uStack_c8 != 0) {
                  uVar16 = uVar26 / uStack_c8;
                }
                unaff_x28 = uVar26 - uVar16 * uStack_c8;
              }
            }
            plVar12 = *(long **)(lStack_d0 + unaff_x28 * 8);
            if (plVar12 != (long *)0x0) {
              do {
                while( true ) {
                  plVar12 = (long *)*plVar12;
                  if (plVar12 == (long *)0x0) goto LAB_10a59f758;
                  uVar16 = plVar12[1];
                  if (uVar16 != uVar26) break;
                  if (*(int *)(plVar12 + 2) == iVar2) {
                    if (plVar24 != (long *)0x0) {
                      plVar12 = plVar24 + 1;
                      do {
                        lVar13 = *plVar12;
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                        if (bVar5) {
                          *plVar12 = lVar13 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (lVar13 == 0) {
                        (**(code **)(*plVar24 + 0x10))(plVar24);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
                      }
                    }
                    goto LAB_10a59f9f4;
                  }
                }
                if ((uStack_c8 & uVar9) == 0) {
                  uVar16 = uVar16 & uVar9;
                }
                else if (uStack_c8 <= uVar16) {
                  uVar22 = 0;
                  if (uStack_c8 != 0) {
                    uVar22 = uVar16 / uStack_c8;
                  }
                  uVar16 = uVar16 - uVar22 * uStack_c8;
                }
              } while (uVar16 == unaff_x28);
            }
          }
LAB_10a59f758:
          plVar12 = (long *)0x28;
          __Znwm();
          plStack_70 = &lStack_d0;
          uStack_68 = 1;
          *plVar12 = 0;
          plVar12[1] = uVar26;
          *(int *)(plVar12 + 2) = iVar2;
          plVar12[3] = (long)unaff_x27;
          plVar12[4] = (long)plVar24;
          plStack_98 = (long *)0x0;
          plStack_90 = (long *)0x0;
          plStack_78 = plVar12;
          if ((uVar14 == 0) || (fStack_b0 * (float)uVar14 < (float)(uStack_b8 + 1))) {
            uVar9 = 1;
            if (2 < uVar14) {
              uVar9 = (ulong)((uVar14 & uVar14 - 1) != 0);
            }
            uVar9 = uVar9 | uVar14 << 1;
            uVar16 = (ulong)((float)(uStack_b8 + 1) / fStack_b0);
            if (uVar9 <= uVar16) {
              uVar9 = uVar16;
            }
            uVar16 = uVar14;
            if (uVar9 - 1 == 0) {
              uVar9 = 2;
            }
            else if ((uVar9 & uVar9 - 1) != 0) {
              __ZNSt3__112__next_primeEm();
              uVar16 = uStack_c8;
            }
            if (uVar16 < uVar9) {
LAB_10a59f80c:
              if (uVar9 >> 0x3d != 0) {
                func_0x000109ffded8();
                goto LAB_10a5a0218;
              }
              lVar13 = uVar9 << 3;
              __Znwm();
              bVar5 = lStack_d0 != 0;
              lStack_d0 = lVar13;
              if (bVar5) {
                __ZdlPv();
              }
              uVar14 = 0;
              do {
                *(undefined8 *)(lStack_d0 + uVar14 * 8) = 0;
                uVar14 = uVar14 + 1;
              } while (uVar9 != uVar14);
              uVar14 = uVar9;
              uStack_c8 = uVar9;
              if (plStack_c0 != (long *)0x0) {
                uVar16 = plStack_c0[1];
                uVar22 = uVar9 - 1;
                if ((uVar9 & uVar22) == 0) {
                  uVar16 = uVar16 & uVar22;
                }
                else if (uVar9 <= uVar16) {
                  uVar19 = 0;
                  if (uVar9 != 0) {
                    uVar19 = uVar16 / uVar9;
                  }
                  uVar16 = uVar16 - uVar19 * uVar9;
                }
                *(long ***)(lStack_d0 + uVar16 * 8) = &plStack_c0;
                plVar24 = (long *)*plStack_c0;
                plVar10 = plStack_c0;
                while (plVar24 != (long *)0x0) {
                  uVar19 = plVar24[1];
                  if ((uVar9 & uVar22) == 0) {
                    uVar19 = uVar19 & uVar22;
                  }
                  else if (uVar9 <= uVar19) {
                    uVar6 = 0;
                    if (uVar9 != 0) {
                      uVar6 = uVar19 / uVar9;
                    }
                    uVar19 = uVar19 - uVar6 * uVar9;
                  }
                  plVar11 = plVar24;
                  if (uVar19 != uVar16) {
                    if (*(long *)(lStack_d0 + uVar19 * 8) == 0) {
                      *(long **)(lStack_d0 + uVar19 * 8) = plVar10;
                      uVar16 = uVar19;
                    }
                    else {
                      *plVar10 = *plVar24;
                      *plVar24 = **(long **)(lStack_d0 + uVar19 * 8);
                      **(undefined8 **)(lStack_d0 + uVar19 * 8) = plVar24;
                      plVar11 = plVar10;
                    }
                  }
                  plVar10 = plVar11;
                  plVar24 = (long *)*plVar11;
                }
              }
            }
            else {
              uVar14 = uVar16;
              if (uVar9 < uVar16) {
                uVar14 = (ulong)((float)uStack_b8 / fStack_b0);
                if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if (1 < uVar14) {
                  uVar14 = 1L << (-LZCOUNT(uVar14 - 1) & 0x3fU);
                }
                lVar13 = lStack_d0;
                if (uVar9 <= uVar14) {
                  uVar9 = uVar14;
                }
                uVar14 = uStack_c8;
                if (uVar9 < uVar16) {
                  if (uVar9 != 0) goto LAB_10a59f80c;
                  lStack_d0 = 0;
                  if (lVar13 != 0) {
                    __ZdlPv();
                  }
                  uStack_c8 = 0;
                  uVar14 = 0;
                }
              }
            }
            if ((uVar14 & uVar14 - 1) == 0) {
              unaff_x28 = uVar14 - 1 & uVar26;
            }
            else {
              unaff_x28 = uVar26;
              if (uVar14 <= uVar26) {
                uVar9 = 0;
                if (uVar14 != 0) {
                  uVar9 = uVar26 / uVar14;
                }
                unaff_x28 = uVar26 - uVar9 * uVar14;
              }
            }
          }
          plVar24 = *(long **)(lStack_d0 + unaff_x28 * 8);
          if (plVar24 == (long *)0x0) {
            *plVar12 = (long)plStack_c0;
            *(long ***)(lStack_d0 + unaff_x28 * 8) = &plStack_c0;
            plStack_c0 = plVar12;
            if (*plVar12 != 0) {
              uVar26 = *(ulong *)(*plVar12 + 8);
              if ((uVar14 & uVar14 - 1) == 0) {
                uVar26 = uVar26 & uVar14 - 1;
              }
              else if (uVar14 <= uVar26) {
                uVar9 = 0;
                if (uVar14 != 0) {
                  uVar9 = uVar26 / uVar14;
                }
                uVar26 = uVar26 - uVar9 * uVar14;
              }
              plVar24 = (long *)(lStack_d0 + uVar26 * 8);
              goto LAB_10a59f9e4;
            }
          }
          else {
            *plVar12 = *plVar24;
LAB_10a59f9e4:
            *plVar24 = (long)plVar12;
          }
          uStack_b8 = uStack_b8 + 1;
LAB_10a59f9f4:
          puVar21 = puVar21 + 2;
        } while (puVar21 != puVar1);
      }
    }
    plVar10 = param_1 + 2;
    plVar24 = (long *)*plVar10;
    plVar12 = plStack_c0;
    while (plStack_c0 = plVar12, plVar24 != (long *)0x0) {
      plVar11 = plVar24 + 3;
      if (*(long *)(*plVar11 + 0x18) == 0) {
LAB_10a59fbb0:
        plVar24 = (long *)*plVar24;
      }
      else {
        if (uStack_c8 != 0) {
          uVar14 = (ulong)(int)plVar24[2];
          uVar26 = uStack_c8 - 1;
          if ((uStack_c8 & uVar26) == 0) {
            uVar9 = uVar26 & uVar14;
          }
          else {
            uVar9 = uVar14;
            if (uStack_c8 <= uVar14) {
              uVar9 = 0;
              if (uStack_c8 != 0) {
                uVar9 = uVar14 / uStack_c8;
              }
              uVar9 = uVar14 - uVar9 * uStack_c8;
            }
          }
          plVar20 = *(long **)(lStack_d0 + uVar9 * 8);
          if (plVar20 != (long *)0x0) {
            do {
              while( true ) {
                plVar20 = (long *)*plVar20;
                if (plVar20 == (long *)0x0) goto LAB_10a59fb34;
                uVar16 = plVar20[1];
                if (uVar16 != uVar14) break;
                if (*(int *)(plVar20 + 2) == (int)plVar24[2]) goto LAB_10a59fbb0;
              }
              if ((uStack_c8 & uVar26) == 0) {
                uVar16 = uVar16 & uVar26;
              }
              else if (uStack_c8 <= uVar16) {
                uVar22 = 0;
                if (uStack_c8 != 0) {
                  uVar22 = uVar16 / uStack_c8;
                }
                uVar16 = uVar16 - uVar22 * uStack_c8;
              }
            } while (uVar16 == uVar9);
          }
        }
LAB_10a59fb34:
        plStack_78 = (long *)0x0;
        plStack_70 = (long *)0x0;
        func_0x00010acb1720((long *)(*plVar11 + 0x18),&plStack_78);
        plVar12 = plStack_70;
        if (plStack_70 != (long *)0x0) {
          plVar20 = plStack_70 + 1;
          do {
            lVar13 = *plVar20;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *plVar20 = lVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        if (param_1[7] != 0) {
          FUN_10a5bb214(param_1[7],plVar11);
        }
        uVar26 = param_1[1];
        uVar14 = plVar24[1];
        uVar9 = uVar26 - 1;
        if ((uVar26 & uVar9) == 0) {
          uVar14 = uVar9 & uVar14;
        }
        else if (uVar26 <= uVar14) {
          uVar16 = 0;
          if (uVar26 != 0) {
            uVar16 = uVar14 / uVar26;
          }
          uVar14 = uVar14 - uVar16 * uVar26;
        }
        plVar20 = (long *)*plVar24;
        plVar12 = *(long **)(*param_1 + uVar14 * 8);
        do {
          plVar17 = plVar12;
          plVar12 = (long *)*plVar17;
        } while ((long *)*plVar17 != plVar24);
        plVar12 = plVar20;
        if (plVar17 == plVar10) {
LAB_10a59fc14:
          if (plVar20 == (long *)0x0) {
LAB_10a59fc4c:
            *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
            plVar12 = (long *)*plVar24;
            goto LAB_10a59fc54;
          }
          uVar16 = plVar20[1];
          if ((uVar26 & uVar9) == 0) {
            uVar22 = uVar16 & uVar9;
          }
          else {
            uVar22 = uVar16;
            if (uVar26 <= uVar16) {
              uVar22 = 0;
              if (uVar26 != 0) {
                uVar22 = uVar16 / uVar26;
              }
              uVar22 = uVar16 - uVar22 * uVar26;
            }
          }
          if (uVar22 != uVar14) goto LAB_10a59fc4c;
LAB_10a59fc5c:
          if ((uVar26 & uVar9) == 0) {
            uVar16 = uVar16 & uVar9;
          }
          else if (uVar26 <= uVar16) {
            uVar9 = 0;
            if (uVar26 != 0) {
              uVar9 = uVar16 / uVar26;
            }
            uVar16 = uVar16 - uVar9 * uVar26;
          }
          if (uVar16 != uVar14) {
            *(long **)(*param_1 + uVar16 * 8) = plVar17;
            plVar12 = (long *)*plVar24;
          }
        }
        else {
          uVar16 = plVar17[1];
          if ((uVar26 & uVar9) == 0) {
            uVar16 = uVar16 & uVar9;
          }
          else if (uVar26 <= uVar16) {
            uVar22 = 0;
            if (uVar26 != 0) {
              uVar22 = uVar16 / uVar26;
            }
            uVar16 = uVar16 - uVar22 * uVar26;
          }
          if (uVar16 != uVar14) goto LAB_10a59fc14;
LAB_10a59fc54:
          if (plVar12 != (long *)0x0) {
            uVar16 = plVar12[1];
            goto LAB_10a59fc5c;
          }
        }
        *plVar17 = (long)plVar12;
        *plVar24 = 0;
        param_1[3] = param_1[3] + -1;
        func_0x00010a1340b4(plVar11);
        __ZdlPv(plVar24);
        plVar24 = plVar20;
        plVar12 = plStack_c0;
      }
    }
    if (plVar12 != (long *)0x0) {
LAB_10a59fcc4:
      uVar14 = param_1[1];
      if (uVar14 != 0) {
        uVar26 = (ulong)(int)plVar12[2];
        uVar9 = uVar14 - 1;
        if ((uVar14 & uVar9) == 0) {
          uVar16 = uVar9 & uVar26;
        }
        else {
          uVar16 = uVar26;
          if (uVar14 <= uVar26) {
            uVar16 = 0;
            if (uVar14 != 0) {
              uVar16 = uVar26 / uVar14;
            }
            uVar16 = uVar26 - uVar16 * uVar14;
          }
        }
        puVar21 = *(undefined8 **)(*param_1 + uVar16 * 8);
        if (puVar21 != (undefined8 *)0x0) {
          for (plVar24 = (long *)*puVar21; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
            uVar22 = plVar24[1];
            if (uVar22 == uVar26) {
              if ((int)plVar24[2] == (int)plVar12[2]) {
                lVar13 = *(long *)(plVar24[3] + 0x18);
                func_0x00010acb1720((long *)(plVar24[3] + 0x18),plVar12 + 3);
                if (lVar13 != 0) goto LAB_10a5a019c;
                goto LAB_10a5a018c;
              }
            }
            else {
              if ((uVar14 & uVar9) == 0) {
                uVar22 = uVar22 & uVar9;
              }
              else if (uVar14 <= uVar22) {
                uVar19 = 0;
                if (uVar14 != 0) {
                  uVar19 = uVar22 / uVar14;
                }
                uVar22 = uVar22 - uVar19 * uVar14;
              }
              if (uVar22 != uVar16) break;
            }
          }
        }
      }
      lVar13 = plVar12[3];
      uVar3 = *(undefined4 *)(lVar13 + 0x18);
      plVar20 = (long *)0x70;
      __Znwm();
      plVar17 = plVar20 + 1;
      *plVar17 = 0;
      plVar20[2] = 0;
      *plVar20 = (long)&PTR_DAT_110ba7638;
      plVar11 = plVar20 + 3;
      FUN_10acb13b8(plVar11,uVar3,lVar13 + 0x20);
      iVar2 = (int)plVar12[2];
      plVar25 = (long *)(long)iVar2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = *plVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar27 = (long *)param_1[1];
      iStack_a0 = iVar2;
      plStack_98 = plVar11;
      plStack_90 = plVar20;
      plStack_88 = plVar11;
      plStack_80 = plVar20;
      if (plVar27 != (long *)0x0) {
        uVar14 = (long)plVar27 - 1;
        if (((ulong)plVar27 & uVar14) == 0) {
          unaff_x27 = (long *)(uVar14 & (ulong)plVar25);
        }
        else {
          unaff_x27 = plVar25;
          if (plVar27 <= plVar25) {
            uVar26 = 0;
            if (plVar27 != (long *)0x0) {
              uVar26 = (ulong)plVar25 / (ulong)plVar27;
            }
            unaff_x27 = (long *)((long)plVar25 - uVar26 * (long)plVar27);
          }
        }
        puVar21 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
        if (puVar21 != (undefined8 *)0x0) {
          for (plVar24 = (long *)*puVar21; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
            plVar15 = (long *)plVar24[1];
            if (plVar15 == plVar25) {
              if ((int)plVar24[2] == iVar2) goto LAB_10a59fee4;
            }
            else {
              if (((ulong)plVar27 & uVar14) == 0) {
                plVar15 = (long *)((ulong)plVar15 & uVar14);
              }
              else if (plVar27 <= plVar15) {
                uVar26 = 0;
                if (plVar27 != (long *)0x0) {
                  uVar26 = (ulong)plVar15 / (ulong)plVar27;
                }
                plVar15 = (long *)((long)plVar15 - uVar26 * (long)plVar27);
              }
              if (plVar15 != unaff_x27) break;
            }
          }
        }
      }
      plVar24 = (long *)0x28;
      __Znwm();
      uStack_68 = 1;
      *plVar24 = 0;
      plVar24[1] = (long)plVar25;
      *(int *)(plVar24 + 2) = iVar2;
      plVar24[3] = (long)plVar11;
      plVar24[4] = (long)plVar20;
      plStack_98 = (long *)0x0;
      plStack_90 = (long *)0x0;
      plStack_78 = plVar24;
      plStack_70 = param_1;
      if ((plVar27 == (long *)0x0) ||
         (*(float *)(param_1 + 4) * (float)plVar27 < (float)(param_1[3] + 1))) {
        uVar14 = 1;
        if ((long *)0x2 < plVar27) {
          uVar14 = (ulong)(((ulong)plVar27 & (long)plVar27 - 1U) != 0);
        }
        plVar11 = (long *)(uVar14 | (long)plVar27 << 1);
        plVar20 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
        if (plVar11 <= plVar20) {
          plVar11 = plVar20;
        }
        if ((long)plVar11 - 1U == 0) {
          plVar11 = (long *)0x2;
        }
        else if (((ulong)plVar11 & (long)plVar11 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar27 = (long *)param_1[1];
        }
        if (plVar27 < plVar11) {
LAB_10a59ff38:
          if ((ulong)plVar11 >> 0x3d != 0) {
            func_0x000109ffded8();
LAB_10a5a0218:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a5a021c);
            (*pcVar7)();
          }
          lVar13 = (long)plVar11 << 3;
          __Znwm();
          lVar8 = *param_1;
          *param_1 = lVar13;
          if (lVar8 != 0) {
            __ZdlPv();
          }
          plVar20 = (long *)0x0;
          param_1[1] = (long)plVar11;
          do {
            *(undefined8 *)(*param_1 + (long)plVar20 * 8) = 0;
            plVar20 = (long *)((long)plVar20 + 1);
          } while (plVar11 != plVar20);
          plVar20 = (long *)*plVar10;
          plVar27 = plVar11;
          if (plVar20 != (long *)0x0) {
            plVar17 = (long *)plVar20[1];
            uVar14 = (long)plVar11 - 1;
            if (((ulong)plVar11 & uVar14) == 0) {
              plVar17 = (long *)((ulong)plVar17 & uVar14);
            }
            else if (plVar11 <= plVar17) {
              uVar26 = 0;
              if (plVar11 != (long *)0x0) {
                uVar26 = (ulong)plVar17 / (ulong)plVar11;
              }
              plVar17 = (long *)((long)plVar17 - uVar26 * (long)plVar11);
            }
            *(long **)(*param_1 + (long)plVar17 * 8) = plVar10;
            plVar15 = (long *)*plVar20;
            while (plVar15 != (long *)0x0) {
              plVar23 = (long *)plVar15[1];
              if (((ulong)plVar11 & uVar14) == 0) {
                plVar23 = (long *)((ulong)plVar23 & uVar14);
              }
              else if (plVar11 <= plVar23) {
                uVar26 = 0;
                if (plVar11 != (long *)0x0) {
                  uVar26 = (ulong)plVar23 / (ulong)plVar11;
                }
                plVar23 = (long *)((long)plVar23 - uVar26 * (long)plVar11);
              }
              plVar18 = plVar15;
              if (plVar23 != plVar17) {
                lVar13 = *param_1;
                if (*(long *)(lVar13 + (long)plVar23 * 8) == 0) {
                  *(long **)(lVar13 + (long)plVar23 * 8) = plVar20;
                  plVar17 = plVar23;
                }
                else {
                  *plVar20 = *plVar15;
                  *plVar15 = **(undefined8 **)(lVar13 + (long)plVar23 * 8);
                  **(long **)(lVar13 + (long)plVar23 * 8) = (long)plVar15;
                  plVar18 = plVar20;
                }
              }
              plVar20 = plVar18;
              plVar15 = (long *)*plVar18;
            }
          }
        }
        else if (plVar11 < plVar27) {
          plVar20 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          if ((plVar27 < (long *)0x3) || (((ulong)plVar27 & (long)plVar27 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar20) {
            plVar20 = (long *)(1L << (-LZCOUNT((long)plVar20 + -1) & 0x3fU));
          }
          if (plVar11 <= plVar20) {
            plVar11 = plVar20;
          }
          if (plVar11 < plVar27) {
            if (plVar11 != (long *)0x0) goto LAB_10a59ff38;
            lVar13 = *param_1;
            *param_1 = 0;
            if (lVar13 != 0) {
              __ZdlPv();
            }
            param_1[1] = 0;
            plVar27 = (long *)0x0;
          }
          else {
            plVar27 = (long *)param_1[1];
          }
        }
        if (((ulong)plVar27 & (long)plVar27 - 1U) == 0) {
          unaff_x27 = (long *)((long)plVar27 - 1U & (ulong)plVar25);
        }
        else {
          unaff_x27 = plVar25;
          if (plVar27 <= plVar25) {
            uVar14 = 0;
            if (plVar27 != (long *)0x0) {
              uVar14 = (ulong)plVar25 / (ulong)plVar27;
            }
            unaff_x27 = (long *)((long)plVar25 - uVar14 * (long)plVar27);
          }
        }
      }
      lVar13 = *param_1;
      plVar11 = *(long **)(lVar13 + (long)unaff_x27 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar24 = *plVar10;
        *plVar10 = (long)plVar24;
        *(long **)(lVar13 + (long)unaff_x27 * 8) = plVar10;
        if (*plVar24 != 0) {
          plVar11 = *(long **)(*plVar24 + 8);
          if (((ulong)plVar27 & (long)plVar27 - 1U) == 0) {
            plVar11 = (long *)((ulong)plVar11 & (long)plVar27 - 1U);
          }
          else if (plVar27 <= plVar11) {
            uVar14 = 0;
            if (plVar27 != (long *)0x0) {
              uVar14 = (ulong)plVar11 / (ulong)plVar27;
            }
            plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar27);
          }
          plVar11 = (long *)(*param_1 + (long)plVar11 * 8);
          goto LAB_10a5a0134;
        }
      }
      else {
        *plVar24 = *plVar11;
LAB_10a5a0134:
        *plVar11 = (long)plVar24;
      }
      param_1[3] = param_1[3] + 1;
      goto LAB_10a5a0144;
    }
LAB_10a5a01e4:
    FUN_10a5cbe10(&lStack_d0);
  }
  return;
LAB_10a59fee4:
  do {
    lVar13 = *plVar17;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar13 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
  }
LAB_10a5a0144:
  plVar11 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar20 = plStack_80 + 1;
    do {
      lVar13 = *plVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  func_0x00010acb1720(plVar24[3] + 0x18,plVar12 + 3);
LAB_10a5a018c:
  if (param_1[5] != 0) {
    FUN_10a5bb214(param_1[5],plVar24 + 3);
  }
LAB_10a5a019c:
  plVar12 = (long *)*plVar12;
  if (plVar12 == (long *)0x0) goto LAB_10a5a01e4;
  goto LAB_10a59fcc4;
}



/* Entry: 10a5a02a0; end: 10a5a03f7;  */

undefined8 * FUN_10a5a02a0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0xd) = 0x100;
  *param_1 = &PTR_DAT_110b17898;
  param_1[1] = 0;
  plVar1 = param_1 + 3;
  param_1[2] = 0;
  FUN_10a0040d0(plVar1,&PTR_PTR_110bf7338);
  *param_1 = &PTR_FUN_110bf7210;
  param_1[3] = &PTR_DAT_110bf7280;
  param_1[10] = &PTR_DAT_110bf72f8;
  param_1[8] = param_2;
  uVar3 = 0x128;
  __Znwm();
  FUN_10a5cbeb4();
  param_1[9] = uVar3;
  plVar2 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar2 + 3) & 1) == 0) {
    *(undefined1 *)(plVar2 + 3) = 1;
    plVar2[2] = param_2;
    if (param_2 != 0) {
      plVar2[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar2 + 0x18))();
  }
  FUN_10a5ae998(param_1[6],&PTR_DAT_110b99f08,param_2,plVar1);
  return param_1;
}



/* Entry: 10a5a03f8; end: 10a5a0477;  */

undefined8 * FUN_10a5a03f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf7210;
  param_1[3] = &PTR_DAT_110bf7280;
  param_1[10] = &PTR_DAT_110bf72f8;
  FUN_10a5cc010(param_1 + 9,0);
  param_1[3] = &PTR_DAT_110bf7878;
  param_1[10] = &PTR_FUN_110bf78f0;
  func_0x00010a004e5c(param_1 + 6);
  func_0x00010a004e04(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a5a0478; end: 10a5a0493;  */

undefined8 * FUN_10a5a0478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf7210;
  param_1[3] = &PTR_DAT_110bf7280;
  param_1[10] = &PTR_DAT_110bf72f8;
  FUN_10a5cc010(param_1 + 9,0);
  param_1[3] = &PTR_DAT_110bf7878;
  param_1[10] = &PTR_FUN_110bf78f0;
  func_0x00010a004e5c(param_1 + 6);
  func_0x00010a004e04(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a5a0494; end: 10a5a04bf;  */

void FUN_10a5a0494(void)

{
  FUN_10a5a03f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a5a04c0; end: 10a5a04ef;  */

void FUN_10a5a04c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a5a03f8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a5a04f0; end: 10a5a0603;  */

void FUN_10a5a04f0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined7 uStack_38;
  char cStack_31;
  
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x000107c2b054(&uStack_48,&UNK_10f665176);
  if (lVar2 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar2 + 0x8d8),&uStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(uStack_48);
  }
  lVar1 = *(long *)(param_1 + 0x48);
  lVar2 = *param_2;
  if ((lVar2 == 0) || (func_0x00010aae9fd8(), lVar2 == 0)) {
    if (*(char *)(lVar1 + 0x9f) < '\0') {
      **(undefined1 **)(lVar1 + 0x88) = 0;
      *(undefined8 *)(lVar1 + 0x90) = 0;
    }
    else {
      *(undefined1 *)(lVar1 + 0x88) = 0;
      *(undefined1 *)(lVar1 + 0x9f) = 0;
    }
    if (*(char *)(lVar1 + 0x87) < '\0') {
      **(undefined1 **)(lVar1 + 0x70) = 0;
      *(undefined8 *)(lVar1 + 0x78) = 0;
    }
    else {
      *(undefined1 *)(lVar1 + 0x70) = 0;
      *(undefined1 *)(lVar1 + 0x87) = 0;
    }
  }
  else {
    FUN_10a08d2e0(&uStack_48,lVar2 + 0x10);
    if (*(char *)(lVar1 + 0x87) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x70));
    }
    *(undefined8 *)(lVar1 + 0x78) = uStack_40;
    *(undefined8 *)(lVar1 + 0x70) = uStack_48;
    *(ulong *)(lVar1 + 0x80) = CONCAT17(cStack_31,uStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar1 + 0x88,lVar2 + 0x10);
  }
  return;
}



/* Entry: 10a5a0604; end: 10a5a0613;  */

/* WARNING: Removing unreachable block (ram,0x00010a5bb11c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb120) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb138) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb140) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb148) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb158) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb168) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb170) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb1e4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb18c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb198) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb1a8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb1b4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb1bc) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb1d0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb210) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb298) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2b0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2b8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2c0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2d4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2d8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2e0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb24c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb254) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb264) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb290) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb308) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb310) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb31c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb320) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb328) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb330) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb33c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb340) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb348) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb350) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb374) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb378) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb380) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb388) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3ac) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3b0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3b8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3c0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3c4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3dc) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3e4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3e8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3f0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3f8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2e8) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb2ec) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb3fc) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb414) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb428) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb4c4) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb4d0) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb540) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb548) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb554) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb560) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb568) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb574) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb57c) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb588) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb590) */
/* WARNING: Removing unreachable block (ram,0x00010a5bb59c) */

void FUN_10a5a0604(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x87) < '\0') {
    if (*(long *)(lVar1 + 0x78) == 0) {
      return;
    }
  }
  else if (*(char *)(lVar1 + 0x87) == '\0') {
    return;
  }
  if ((*(byte *)(param_2 + 0x238) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x208) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x230) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined ***)(param_2 + 0x200) = &PTR_FUN_110bef348;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x230) = 0x3f800000;
    *(undefined1 *)(param_2 + 0x238) = 1;
  }
  FUN_10a4d8870(param_2 + 0x200,lVar1 + 0x68);
  *(undefined1 *)(lVar1 + 0x68) = 0;
  *(undefined1 *)(lVar1 + 0xa0) = 0;
  *(undefined1 *)(lVar1 + 0xb0) = 0;
  *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(lVar1 + 0xb8);
  return;
}



/* Entry: 10a5a0614; end: 10a5a0787;  */

void FUN_10a5a0614(long *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar12 = *(long **)(*(long *)(param_2 + 0x48) + 0x10);
  if (plVar12 != (long *)0x0) {
    plVar13 = (long *)0x0;
    plVar8 = (long *)0x0;
    do {
      lVar14 = plVar12[3];
      plVar9 = plVar8;
      if (*(long *)(lVar14 + 0x18) != 0) {
        lVar11 = plVar12[4];
        if (plVar13 < (long *)param_1[2]) {
          *plVar13 = lVar14;
          plVar13[1] = lVar11;
          if (lVar11 != 0) {
            plVar8 = (long *)(lVar11 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = *plVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plVar13 = plVar13 + 2;
        }
        else {
          lVar10 = (long)plVar13 - (long)plVar8;
          uVar1 = (lVar10 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            *param_1 = (long)plVar8;
            FUN_10a5bb6d4();
LAB_10a5a0764:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a5a0768);
            (*pcVar4)();
          }
          uVar6 = param_1[2] - (long)plVar8;
          uVar7 = (long)uVar6 >> 3;
          if (uVar7 <= uVar1) {
            uVar7 = uVar1;
          }
          if (0x7fffffffffffffef < uVar6) {
            uVar7 = 0xfffffffffffffff;
          }
          if (uVar7 >> 0x3c != 0) {
            *param_1 = (long)plVar8;
            func_0x000109ffded8();
            goto LAB_10a5a0764;
          }
          lVar5 = uVar7 << 4;
          __Znwm();
          plVar9 = (long *)(lVar5 + lVar10);
          *plVar9 = lVar14;
          plVar9[1] = lVar11;
          if (lVar11 != 0) {
            plVar13 = (long *)(lVar11 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar3) {
                *plVar13 = *plVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plVar13 = plVar9 + 2;
          plVar9 = plVar9 + (lVar10 >> 4) * -2;
          _memcpy(plVar9,plVar8,lVar10);
          param_1[1] = (long)plVar13;
          param_1[2] = lVar5 + uVar7 * 0x10;
          if (plVar8 != (long *)0x0) {
            __ZdlPv(plVar8);
          }
        }
        param_1[1] = (long)plVar13;
      }
      plVar12 = (long *)*plVar12;
      plVar8 = plVar9;
    } while (plVar12 != (long *)0x0);
    *param_1 = (long)plVar9;
  }
  return;
}



/* Entry: 10a5a0788; end: 10a5a079b;  */

undefined8 * FUN_10a5a0788(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar5 = *(long *)(param_1 + 0x48);
  uVar2 = *param_2;
  lVar6 = param_2[1];
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(lVar5 + 0x30);
  *(undefined8 *)(lVar5 + 0x28) = uVar2;
  *(long *)(lVar5 + 0x30) = lVar6;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return (undefined8 *)(lVar5 + 0x28);
}


