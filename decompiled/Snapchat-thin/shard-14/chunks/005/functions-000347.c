/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2e490c; end: 10b2e4937;  */

long FUN_10b2e490c(long param_1)

{
  func_0x0001053010fc(param_1 + 0x20);
  __ZNSt8bad_castD2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10b2e4938; end: 10b2e4977;  */

void FUN_10b2e4938(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b2e4978; end: 10b2e4a3f;  */

void FUN_10b2e4978(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x88);
  FUN_10b2e53b8();
  puVar2 = (undefined8 *)(param_1 + 0x90);
  if (puVar2 == puVar1) {
    puVar1 = (undefined8 *)*puVar2;
    while (puVar3 = puVar2, puVar1 != (undefined8 *)0x0) {
      while (puVar2 = puVar1, *(int *)((long)puVar2 + 0x1c) <= param_2) {
        if (param_2 <= *(int *)((long)puVar2 + 0x1c)) {
          return;
        }
        puVar1 = (undefined8 *)puVar2[1];
        if ((undefined8 *)puVar2[1] == (undefined8 *)0x0) {
          puVar3 = puVar2 + 1;
          goto LAB_10b2e49f4;
        }
      }
      puVar1 = (undefined8 *)*puVar2;
    }
LAB_10b2e49f4:
    puVar1 = (undefined8 *)0x28;
    __Znwm();
    *(int *)((long)puVar1 + 0x1c) = param_2;
    *(undefined4 *)(puVar1 + 4) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = puVar2;
    *puVar3 = puVar1;
    if (**(long **)(param_1 + 0x88) != 0) {
      *(long *)(param_1 + 0x88) = **(long **)(param_1 + 0x88);
    }
    func_0x000107c27be4(*(undefined8 *)(param_1 + 0x90),puVar1);
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
  }
  else {
    *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
  }
  return;
}



/* Entry: 10b2e4a40; end: 10b2e50c3;  */

void FUN_10b2e4a40(long *param_1,long **param_2,undefined8 *param_3,long param_4,undefined4 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  long **pplVar8;
  long lVar9;
  long **pplVar10;
  undefined8 *puVar11;
  long *plVar12;
  long **pplVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar15;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  int iVar19;
  long **pplVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  uint uVar24;
  long *plVar25;
  long *plStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  long *aplStack_f8 [3];
  uint uStack_e0;
  undefined8 auStack_88 [2];
  uint uStack_78;
  char cStack_74;
  undefined4 auStack_6c [3];
  
  pplVar20 = param_2 + 0x12;
  pplVar13 = param_2 + 0x11;
  func_0x00010b2e4240(pplVar13,*pplVar20);
  *pplVar20 = (long *)0x0;
  param_2[0x13] = (long *)0x0;
  param_2[0x11] = (long *)pplVar20;
  puVar11 = (undefined8 *)param_3[1];
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0x3f800000;
  puVar22 = (undefined8 *)*param_3;
  while (bVar4 = puVar22 == puVar11, !bVar4) {
    func_0x000107c35ba8(*puVar22);
    lVar9 = 0xc0;
    if (bVar4) {
      lVar9 = 0x60;
    }
    func_0x00010b2e4974(&uStack_120,extraout_x8 + lVar9);
    puVar22 = puVar22 + 2;
  }
  FUN_10b2e6e4c(param_2[6],&uStack_120);
  plVar12 = (long *)param_3[1];
  plVar15 = (long *)*param_3;
  while (plVar15 != plVar12) {
    iVar7 = *(int *)(*plVar15 + 0xa8);
    func_0x00010b2e5404(param_2[7]);
    if (cStack_74 == '\x01') {
      iVar6 = (int)*plVar15;
      func_0x000107c30148();
      func_0x00010b2e5410();
      iVar19 = 8;
      if (iVar6 == 0) {
        iVar19 = iVar7;
      }
    }
    else {
      func_0x00010b2e5410();
      iVar19 = iVar7;
    }
    plVar23 = param_2[7] + 0x32;
    plVar16 = plVar23;
    plVar25 = plVar23;
    while (plVar18 = (long *)*plVar25, plVar18 != (long *)0x0) {
      bVar4 = *(int *)((long)plVar18 + 0x24) < *(int *)(*plVar15 + 0x180);
      if ((int)plVar18[4] != iVar19) {
        bVar4 = (int)plVar18[4] < iVar19;
      }
      lVar9 = 8;
      if (!bVar4) {
        lVar9 = 0;
      }
      plVar25 = (long *)((long)plVar18 + lVar9);
      if (!bVar4) {
        plVar16 = plVar18;
      }
    }
    if (plVar23 == plVar16) {
LAB_10b2e4bbc:
      plVar16 = plVar23;
    }
    else {
      bVar4 = *(int *)(*plVar15 + 0x180) < *(int *)((long)plVar16 + 0x24);
      if (iVar19 != (int)plVar16[4]) {
        bVar4 = iVar19 < (int)plVar16[4];
      }
      if (bVar4) goto LAB_10b2e4bbc;
    }
    uVar5 = plVar23 == plVar16;
    ppuVar1 = &PTR_PTR_113382ca8;
    if (!(bool)uVar5) {
      ppuVar1 = (undefined **)(plVar16 + 5);
    }
    func_0x000107c2c798(aplStack_f8,ppuVar1);
    func_0x000107c35ba8(*plVar15);
    lVar9 = 0xc0;
    if ((bool)uVar5) {
      lVar9 = 0x60;
    }
    FUN_10b2e6e28(param_2[6],*(undefined8 *)(extraout_x8_00 + lVar9),aplStack_f8);
    func_0x000107c3046c(aplStack_f8);
    plVar15 = plVar15 + 2;
  }
  pplVar10 = (long **)param_2[0x16];
  while (pplVar10 != (long **)0x0) {
    aplStack_f8[0] = pplVar10[2];
    puVar11 = &uStack_120;
    func_0x00010867b2d8(puVar11,aplStack_f8);
    if (((ulong)puVar11 & 1) == 0) {
      pplVar8 = param_2 + 0x14;
      func_0x00010869b230(pplVar8,pplVar10);
      pplVar10 = pplVar8;
    }
    else {
      pplVar10 = (long **)*pplVar10;
    }
  }
  func_0x00010b2e4948(aplStack_f8,param_2[7][0xd]);
  pplVar10 = aplStack_f8;
  func_0x000107c30488();
  if ((uStack_e0 != 0) &&
     (__ZNSt3__16chrono12steady_clock3nowEv(),
     (long)(ulong)uStack_e0 < ((long)pplVar10 - (long)param_2[0x10]) / 1000000000)) {
    pplVar10 = param_2;
    func_0x000107c2c950();
  }
  uVar24 = *(uint *)(param_2 + 5);
  if (*(uint *)(param_2 + 5) <= *(uint *)((long)param_2 + 0x2c)) {
    uVar24 = *(uint *)((long)param_2 + 0x2c);
  }
  *(uint *)(param_2 + 5) = uVar24;
  plStack_138 = (long *)0x0;
  plStack_130 = (long *)0x0;
  uStack_128 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  uStack_140 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  plStack_168 = (long *)0x0;
  plStack_160 = (long *)0x0;
  uStack_158 = 0;
  plVar15 = (long *)param_3[1];
  for (plVar12 = (long *)*param_3; plVar23 = plStack_130, plVar12 != plVar15; plVar12 = plVar12 + 2)
  {
    lVar9 = param_4;
    func_0x000107c2c96c(param_4,plVar12);
    if (lVar9 == 0) {
      pplVar10 = &plStack_138;
      func_0x000107c2c728(pplVar10,plVar12);
    }
    else {
      func_0x000107c2c728(&lStack_150,plVar12);
      pplVar10 = param_2;
      FUN_10b2e4978(param_2,*(undefined4 *)(*plVar12 + 0xa8));
    }
  }
  plVar12 = plStack_138;
  do {
    iVar7 = (int)pplVar10;
    if (plVar12 == plVar23) {
      if ((param_2[7][0x3b] == 0) ||
         ((ulong)(lStack_148 - lStack_150 >> 4) <= (ulong)*(uint *)(param_2 + 5))) {
        if (((*(byte *)(param_2[7] + 2) & 1) != 0) && (plStack_168 != plStack_160)) {
          pplVar13 = &plStack_168;
          FUN_10b2e6068(pplVar13,param_1,param_1 + 3,&lStack_150,param_2 + 7,
                        *(undefined4 *)(param_2 + 0xb),param_2[2],param_5);
          iVar7 = (int)pplVar13;
        }
      }
      else {
        plVar12 = &lStack_150;
        FUN_10b2e6744(plVar12,param_1 + 3,(ulong)*(uint *)(param_2 + 5),param_2 + 7,
                      *(undefined4 *)(param_2 + 0xb),param_2[2]);
        iVar7 = (int)plVar12;
      }
      if (plStack_168 != plStack_160) {
        func_0x00010b2e5404(param_2[7]);
        uVar24 = uStack_78;
        func_0x00010b2e5410();
        if (uVar24 != 0) {
          FUN_10b2dd39c();
          plVar12 = plStack_160;
          plVar15 = plStack_168;
          if (iVar7 == 0) {
            uVar24 = 0;
            for (; plVar15 != plVar12; plVar15 = plVar15 + 2) {
              func_0x00010b2e5404(param_2[7]);
              uVar3 = uStack_78;
              func_0x00010b2e5410();
              if ((uVar24 < uVar3) && (*(int *)(*plVar15 + 0x180) == 4)) {
                func_0x00010b2e5444();
                func_0x00010b2e5428();
                (*extraout_x8_03)();
                uVar24 = uVar24 + 1;
              }
            }
            if (uVar24 != 0) {
              func_0x00010b2e546c();
              (*extraout_x8_04)();
            }
          }
          else {
            for (; plVar23 = param_2[0x17], plVar15 != plVar12; plVar15 = plVar15 + 2) {
              func_0x00010b2e5404(param_2[7]);
              plVar25 = (long *)(ulong)uStack_78;
              func_0x00010b2e5410();
              if ((plVar23 < plVar25) && (uVar5 = *(int *)(*plVar15 + 0x180) == 4, (bool)uVar5)) {
                func_0x00010b2e5444();
                func_0x000107c35ba8(*plVar15);
                lVar9 = 0xc0;
                if ((bool)uVar5) {
                  lVar9 = 0x60;
                }
                func_0x00010b2e4974(param_2 + 0x14,extraout_x8_01 + lVar9);
                func_0x00010b2e5428();
                (*extraout_x8_02)();
              }
            }
            if (plVar23 != (long *)0x0) {
              func_0x00010b2e546c();
              (*extraout_x8_05)();
            }
          }
        }
      }
      func_0x000107c2c6d8(&plStack_168);
      func_0x000107c2c6d8(&lStack_150);
      func_0x000107c2c6d8(&plStack_138);
      func_0x00010867bb84(&uStack_120);
      return;
    }
    lVar21 = *(long *)(param_4 + 0x18);
    lVar9 = *param_1;
    lVar2 = param_1[1];
    if ((*(int *)(*plVar12 + 0x180) == 4) && (FUN_10b2dd39c(), iVar7 != 0)) {
      plVar15 = param_2[0x17];
    }
    else {
      plVar15 = (long *)0x0;
    }
    if ((ulong)((lVar21 + (lVar2 - lVar9 >> 4)) - (long)plVar15) < (ulong)*(uint *)(param_2 + 5)) {
LAB_10b2e4d68:
      func_0x000107c2c728(param_1,plVar12);
      FUN_10b2e4978(param_2,*(undefined4 *)(*plVar12 + 0xa8));
      uVar14 = 1;
    }
    else {
      lVar9 = *plVar12;
      iVar7 = *(int *)(lVar9 + 0xa8);
      func_0x000107c30148();
      auStack_6c[0] = *(undefined4 *)(*plVar12 + 0x178);
      func_0x00010b2e5404(param_2[7]);
      puVar11 = auStack_88;
      puVar22 = auStack_88;
      while (puVar17 = (undefined8 *)*puVar11, puVar17 != (undefined8 *)0x0) {
        lVar2 = 8;
        if (iVar7 <= *(int *)(puVar17 + 4)) {
          lVar2 = 0;
        }
        puVar11 = (undefined8 *)((long)puVar17 + lVar2);
        if (iVar7 <= *(int *)(puVar17 + 4)) {
          puVar22 = puVar17;
        }
      }
      if ((auStack_88 == puVar22) || (iVar7 < *(int *)(puVar22 + 4))) {
LAB_10b2e4dec:
        func_0x00010b2e5410();
      }
      else {
        if ((((uint)lVar9 | *(byte *)((long)puVar22 + 0x2c) ^ 0xffffffff) & 1) == 0) {
          puVar11 = puVar22 + 6;
          func_0x000107c2c8c8(puVar11,auStack_6c);
          if (((ulong)puVar11 & 1) == 0) goto LAB_10b2e4dec;
        }
        pplVar10 = pplVar13;
        func_0x00010b2e53b8(pplVar13,iVar7);
        if (pplVar20 == pplVar10) {
          uVar24 = 0;
        }
        else {
          uVar24 = *(uint *)(pplVar10 + 4);
        }
        uVar3 = *(uint *)(puVar22 + 5);
        func_0x00010b2e5410();
        if (uVar24 < uVar3) goto LAB_10b2e4d68;
      }
      func_0x000107c2c728(&plStack_168,plVar12);
      uVar14 = 0;
    }
    pplVar10 = (long **)param_2[2];
    (*(code *)(*pplVar10)[6])
              (pplVar10,*(undefined4 *)(param_2 + 0xb),uVar14,*(undefined4 *)(*plVar12 + 0x178),
               *(undefined4 *)(*plVar12 + 0x180));
    plVar12 = plVar12 + 2;
  } while( true );
}



/* Entry: 10b2e50c4; end: 10b2e50cf;  */

void FUN_10b2e50c4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar14 = *(undefined8 **)(param_1 + 0x60);
  if (puVar14 < *(undefined8 **)(param_1 + 0x68)) {
    *puVar14 = uVar4;
    puVar14[1] = lVar5;
    puVar14 = puVar14 + 2;
    uStack_60 = 0;
    lStack_58 = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x58);
    lVar13 = (long)puVar14 - lVar12;
    uVar2 = (lVar13 >> 4) + 1;
    uStack_60 = uVar4;
    lStack_58 = lVar5;
    if (uVar2 >> 0x3c != 0) {
      func_0x000107c2c960();
code_r0x000100669e80:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100669e84);
      (*pcVar8)();
    }
    uVar10 = (long)*(undefined8 **)(param_1 + 0x68) - lVar12;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar2) {
      uVar11 = uVar2;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    if (uVar11 == 0) {
      lVar9 = 0;
    }
    else {
      if (uVar11 >> 0x3c != 0) {
        func_0x000104bd35f4();
        goto code_r0x000100669e80;
      }
      lVar9 = uVar11 << 4;
      func_0x000107c60e20();
    }
    puVar3 = (undefined8 *)(lVar9 + lVar13);
    *puVar3 = uVar4;
    puVar3[1] = lVar5;
    uStack_60 = 0;
    lStack_58 = 0;
    puVar14 = puVar3 + 2;
    func_0x000107c610b4(puVar3 + (lVar13 >> 4) * -2,lVar12,lVar13);
    *(undefined8 **)(param_1 + 0x58) = puVar3 + (lVar13 >> 4) * -2;
    *(undefined8 **)(param_1 + 0x60) = puVar14;
    *(ulong *)(param_1 + 0x68) = lVar9 + uVar11 * 0x10;
    if (lVar12 != 0) {
      func_0x000107c60e14(lVar12);
    }
  }
  *(undefined8 **)(param_1 + 0x60) = puVar14;
  func_0x000100669e94(&uStack_60);
  return;
}



/* Entry: 10b2e50d0; end: 10b2e50e3;  */

void FUN_10b2e50d0(void)

{
  FUN_10b2e52c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e50e4; end: 10b2e510b;  */

undefined8 FUN_10b2e50e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 unaff_x19;
  
  puVar1 = param_1 + -1;
  *puVar1 = &PTR_DAT_110cd3e98;
  *param_1 = &PTR_FUN_110cd3ee8;
  param_1[3] = &PTR_DAT_110cd3f10;
  __ZNSt3__15mutexD1Ev(param_1 + 0x18);
  func_0x00010867bb84(param_1 + 0x13);
  func_0x00010b2e421c(param_1 + 0x10);
  func_0x00010b2e4278(param_1 + 0xb);
  func_0x000107c2c550(param_1 + 8);
  func_0x000107c2c92c(param_1 + 6);
  func_0x000107c2c904(param_1 + 5);
  func_0x000107c35b4c();
  *puVar1 = extraout_x9;
  puVar1[1] = extraout_x8;
  func_0x000107c2c8d8(puVar1 + 2);
  return unaff_x19;
}



/* Entry: 10b2e510c; end: 10b2e52ab;  */

undefined1  [16]
FUN_10b2e510c(undefined8 *param_1,undefined8 *param_2,int *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int extraout_w8;
  uint uVar5;
  int extraout_w8_00;
  uint extraout_w9;
  uint extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long *unaff_x21;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  func_0x000107c35bbc();
  puVar1 = param_1 + 1;
  if (param_2 == puVar1) {
LAB_10b2e5164:
    bVar4 = true;
    func_0x000107c35ba4();
    if (bVar4) {
LAB_10b2e5190:
      if (*unaff_x21 == 0) goto LAB_10b2e523c;
      param_1 = param_1 + 1;
    }
    else {
      func_0x000107c35bac();
      func_0x000107c35bb4(*(undefined4 *)((long)param_1 + 0x1c));
      uVar5 = extraout_w9;
      if (extraout_w8 != extraout_w10) {
        uVar5 = (uint)(extraout_w8 < extraout_w10);
      }
      if (uVar5 == 1) goto LAB_10b2e5190;
LAB_10b2e5208:
      FUN_10b2dda24();
      param_1 = unaff_x19;
    }
LAB_10b2e521c:
    unaff_x21 = (long *)*param_1;
    if (unaff_x21 == (long *)0x0) {
LAB_10b2e523c:
      unaff_x21 = (long *)0x28;
      __Znwm();
      uVar6 = 1;
      uStack_60 = 1;
      *(undefined8 *)((long)unaff_x21 + 0x1c) = *param_4;
      puStack_68 = puVar1;
      FUN_10b2ddaa0();
      uStack_70 = 0;
      func_0x00010b2ddac8(&uStack_70);
      goto LAB_10b2e527c;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = *(int *)((long)unaff_x21 + 0x1c);
    bVar4 = param_3[1] < (int)unaff_x21[4];
    if (iVar2 != iVar3) {
      bVar4 = iVar2 < iVar3;
    }
    if (bVar4) goto LAB_10b2e5164;
    bVar4 = (int)unaff_x21[4] < param_3[1];
    if (iVar2 != iVar3) {
      bVar4 = iVar3 < iVar2;
    }
    if (bVar4) {
      func_0x000107c35b98();
      if (puVar1 != param_1) {
        func_0x000107c35bb4(*param_3);
        uVar5 = extraout_w9_00;
        if (extraout_w8_00 != extraout_w10_00) {
          uVar5 = (uint)(extraout_w8_00 < extraout_w10_00);
        }
        if (uVar5 == 1) goto LAB_10b2e51f4;
        goto LAB_10b2e5208;
      }
LAB_10b2e51f4:
      if (unaff_x21[1] != 0) goto LAB_10b2e521c;
      goto LAB_10b2e523c;
    }
  }
  uVar6 = 0;
LAB_10b2e527c:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = unaff_x21;
  return auVar7;
}



/* Entry: 10b2e52ac; end: 10b2e52bf;  */

undefined8 FUN_10b2e52ac(void)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 unaff_x19;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  *puVar1 = &PTR_DAT_110cd3e98;
  puVar1[1] = &PTR_FUN_110cd3ee8;
  puVar1[4] = &PTR_DAT_110cd3f10;
  __ZNSt3__15mutexD1Ev(puVar1 + 0x19);
  func_0x00010867bb84(puVar1 + 0x14);
  func_0x00010b2e421c(puVar1 + 0x11);
  func_0x00010b2e4278(puVar1 + 0xc);
  func_0x000107c2c550(puVar1 + 9);
  func_0x000107c2c92c(puVar1 + 7);
  func_0x000107c2c904(puVar1 + 6);
  func_0x000107c35b4c();
  *puVar1 = extraout_x9;
  puVar1[1] = extraout_x8;
  func_0x000107c2c8d8(puVar1 + 2);
  return unaff_x19;
}



/* Entry: 10b2e52c0; end: 10b2e5373;  */

undefined8 FUN_10b2e52c0(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 unaff_x19;
  
  *param_1 = &PTR_DAT_110cd3e98;
  param_1[1] = &PTR_FUN_110cd3ee8;
  param_1[4] = &PTR_DAT_110cd3f10;
  __ZNSt3__15mutexD1Ev(param_1 + 0x19);
  func_0x00010867bb84(param_1 + 0x14);
  func_0x00010b2e421c(param_1 + 0x11);
  func_0x00010b2e4278(param_1 + 0xc);
  func_0x000107c2c550(param_1 + 9);
  func_0x000107c2c92c(param_1 + 7);
  func_0x000107c2c904(param_1 + 6);
  func_0x000107c35b4c();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x8;
  func_0x000107c2c8d8(param_1 + 2);
  return unaff_x19;
}



/* Entry: 10b2e5374; end: 10b2e538b;  */

void FUN_10b2e5374(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2e538c; end: 10b2e53b7;  */

long * FUN_10b2e538c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b2e53b8; end: 10b2e547f;  */

long * FUN_10b2e53b8(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = plVar1;
  plVar4 = plVar1;
  while (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
    lVar2 = 8;
    if (param_2 <= *(int *)((long)plVar5 + 0x1c)) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar2);
    if (param_2 <= *(int *)((long)plVar5 + 0x1c)) {
      plVar3 = plVar5;
    }
  }
  if ((plVar1 == plVar3) || (param_2 < *(int *)((long)plVar3 + 0x1c))) {
    plVar3 = plVar1;
  }
  return plVar3;
}



/* Entry: 10b2e5480; end: 10b2e566f;  */

void FUN_10b2e5480(undefined8 *param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined4 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  plStack_58 = (long *)0x0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  lVar1 = param_3[1];
  for (lVar11 = *param_3; lVar11 != lVar1; lVar11 = lVar11 + 0x10) {
    lVar5 = param_4;
    func_0x000107c2c96c(param_4,lVar11);
    if (lVar5 == 0) {
      func_0x000107c2c728(&plStack_58,lVar11);
    }
  }
  plVar9 = (long *)(param_4 + 0x10);
  while (plVar4 = plStack_50, plVar9 = (long *)*plVar9, plVar10 = plStack_58, plVar9 != (long *)0x0)
  {
    FUN_10b2e5670(plVar9 + 2,&lStack_80);
  }
  do {
    if (plVar10 == plVar4) {
      FUN_10b2e5cdc(&lStack_80);
      func_0x000107c2c6d8(&plStack_58);
      return;
    }
    lVar11 = 0xc0;
    if (*(char *)(*plVar10 + 0x120) == '\0') {
      lVar11 = 0x60;
    }
    iVar2 = *(int *)(*plVar10 + lVar11 + 0x48);
    if (iVar2 == 5 || iVar2 == 3) {
LAB_10b2e5548:
      FUN_10b2e5670(plVar10,&lStack_80);
      func_0x000107c2c728(param_1,plVar10);
    }
    else if (iVar2 == 1) {
      uVar6 = 0;
      if ((uStack_78 != 0) && (lStack_68 != 0)) {
        uVar7 = uStack_78 - 1;
        uVar6 = (ulong)~(uint)uStack_78 & 1;
        if ((uStack_78 & uVar7) != 0) {
          uVar6 = 1;
        }
        plVar9 = *(long **)(lStack_80 + uVar6 * 8);
        if (plVar9 != (long *)0x0) {
          do {
            while( true ) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) goto LAB_10b2e55ec;
              uVar8 = plVar9[1];
              if (uVar8 != 1) break;
              if (*(int *)(plVar9 + 2) == 1) {
                uVar6 = plVar9[4] - plVar9[3] >> 4;
                goto LAB_10b2e55f0;
              }
            }
            if ((uStack_78 & uVar7) == 0) {
              uVar8 = uVar8 & uVar7;
            }
            else if (uStack_78 <= uVar8) {
              uVar3 = 0;
              if (uStack_78 != 0) {
                uVar3 = uVar8 / uStack_78;
              }
              uVar8 = uVar8 - uVar3 * uStack_78;
            }
          } while (uVar8 == uVar6);
        }
LAB_10b2e55ec:
        uVar6 = 0;
      }
LAB_10b2e55f0:
      if (uVar6 < **(uint **)(param_2 + 0x20)) goto LAB_10b2e5548;
    }
    plVar10 = plVar10 + 2;
  } while( true );
}



/* Entry: 10b2e5670; end: 10b2e5bf3;  */

long * FUN_10b2e5670(long *param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long extraout_x12;
  ulong uVar17;
  ulong uVar18;
  ulong unaff_x26;
  float fVar19;
  float fVar20;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  int iStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *param_1;
  lVar7 = 0xc0;
  if (*(char *)(lVar8 + 0x120) == '\0') {
    lVar7 = 0x60;
  }
  iVar1 = *(int *)(lVar8 + lVar7 + 0x48);
  uVar18 = (ulong)iVar1;
  uVar9 = param_2[1];
  if ((uVar9 != 0) && (param_2[3] != 0)) {
    uVar11 = uVar9 - 1;
    if ((uVar9 & uVar11) == 0) {
      uVar13 = uVar11 & uVar18;
    }
    else {
      uVar13 = uVar18;
      if (uVar9 <= uVar18) {
        uVar13 = 0;
        if (uVar9 != 0) {
          uVar13 = uVar18 / uVar9;
        }
        uVar13 = uVar18 - uVar13 * uVar9;
      }
    }
    plVar16 = *(long **)(*param_2 + uVar13 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_10b2e575c;
          uVar17 = plVar16[1];
          if (uVar17 != uVar18) break;
          bVar4 = *(int *)(plVar16 + 2) == iVar1;
          if (bVar4) {
            FUN_10b2e5d98();
            if (bVar4) {
              lVar7 = extraout_x12 + 0x18;
              uVar9 = *(ulong *)(extraout_x12 + 0x20);
              if (uVar9 < *(ulong *)(extraout_x12 + 0x28)) {
                func_0x000100b442b0();
                lVar7 = uVar9 + 0x10;
              }
              else {
                func_0x00010067dc9c();
              }
              *(long *)(extraout_x12 + 0x20) = lVar7;
              return (long *)(lVar7 + -0x10);
            }
            goto LAB_10b2e5b9c;
          }
        }
        if ((uVar9 & uVar11) == 0) {
          uVar17 = uVar17 & uVar11;
        }
        else if (uVar9 <= uVar17) {
          uVar14 = 0;
          if (uVar9 != 0) {
            uVar14 = uVar17 / uVar9;
          }
          uVar17 = uVar17 - uVar14 * uVar9;
        }
      } while (uVar17 == uVar13);
    }
  }
LAB_10b2e575c:
  lStack_70 = param_1[1];
  if (lStack_70 != 0) {
    plVar16 = (long *)(lStack_70 + 8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = *plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_c8 = 0;
  plStack_c0 = (long *)0x0;
  lStack_b8 = 0;
  plStack_90 = &lStack_c8;
  plStack_88 = (long *)((ulong)plStack_88 & 0xffffffffffffff00);
  lStack_78 = lVar8;
  func_0x000107c2c72c(&lStack_c8,1);
  plVar16 = &lStack_b8;
  FUN_10b2e5c1c(plVar16,&lStack_78,&uStack_68,plStack_c0);
  plStack_88 = (long *)CONCAT71(plStack_88._1_7_,1);
  plStack_c0 = plVar16;
  func_0x000107c2c73c(&plStack_90);
  lVar8 = lStack_b8;
  plVar16 = plStack_c0;
  lVar7 = lStack_c8;
  lStack_a8 = lStack_c8;
  plStack_a0 = plStack_c0;
  lStack_98 = lStack_b8;
  plStack_c0 = (long *)0x0;
  lStack_b8 = 0;
  lStack_c8 = 0;
  uVar9 = param_2[1];
  iStack_b0 = iVar1;
  if (uVar9 != 0) {
    uVar11 = uVar9 - 1;
    if ((uVar9 & uVar11) == 0) {
      unaff_x26 = uVar11 & uVar18;
    }
    else {
      unaff_x26 = uVar18;
      if (uVar9 <= uVar18) {
        uVar13 = 0;
        if (uVar9 != 0) {
          uVar13 = uVar18 / uVar9;
        }
        unaff_x26 = uVar18 - uVar13 * uVar9;
      }
    }
    plVar10 = *(long **)(*param_2 + unaff_x26 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_10b2e5874;
          uVar13 = plVar10[1];
          if (uVar13 != uVar18) break;
          if (*(int *)(plVar10 + 2) == iVar1) {
            uVar5 = 1;
            goto LAB_10b2e5b60;
          }
        }
        if ((uVar9 & uVar11) == 0) {
          uVar13 = uVar13 & uVar11;
        }
        else if (uVar9 <= uVar13) {
          uVar17 = 0;
          if (uVar9 != 0) {
            uVar17 = uVar13 / uVar9;
          }
          uVar13 = uVar13 - uVar17 * uVar9;
        }
      } while (uVar13 == unaff_x26);
    }
  }
LAB_10b2e5874:
  plVar6 = (long *)0x30;
  __Znwm();
  plVar10 = param_2 + 2;
  uStack_80 = 1;
  *plVar6 = 0;
  plVar6[1] = uVar18;
  *(int *)(plVar6 + 2) = iVar1;
  plVar6[3] = lVar7;
  plVar6[4] = (long)plVar16;
  plVar6[5] = lVar8;
  plStack_a0 = (long *)0x0;
  lStack_98 = 0;
  lStack_a8 = 0;
  fVar19 = (float)(param_2[3] + 1);
  plStack_88 = plVar10;
  if ((uVar9 == 0) ||
     (fVar20 = *(float *)(param_2 + 4) * (float)uVar9, uVar5 = fVar20 == fVar19, fVar20 < fVar19)) {
    uVar11 = 1;
    if (2 < uVar9) {
      uVar11 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar11 = uVar11 | uVar9 << 1;
    uVar13 = (ulong)(fVar19 / *(float *)(param_2 + 4));
    if (uVar11 <= uVar13) {
      uVar11 = uVar13;
    }
    plStack_90 = plVar6;
    if (uVar11 - 1 == 0) {
      uVar11 = 2;
    }
    else if ((uVar11 & uVar11 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar9 = param_2[1];
    }
    if (uVar9 < uVar11) {
LAB_10b2e5930:
      if (uVar11 >> 0x3d != 0) goto LAB_10b2e5ba0;
      lVar7 = uVar11 << 3;
      __Znwm(lVar7);
      FUN_10b2e5d38(param_2,lVar7);
      param_2[1] = uVar11;
      lVar7 = *param_2;
      for (uVar9 = 0; uVar11 != uVar9; uVar9 = uVar9 + 1) {
        *(undefined8 *)(lVar7 + uVar9 * 8) = 0;
      }
      plVar16 = (long *)*plVar10;
      uVar9 = uVar11;
      if (plVar16 != (long *)0x0) {
        uVar14 = plVar16[1];
        uVar17 = uVar11 - 1;
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar14 / uVar11;
        }
        uVar15 = uVar14;
        if (uVar11 <= uVar14) {
          uVar15 = uVar14 - uVar13 * uVar11;
        }
        if ((uVar11 & uVar17) == 0) {
          uVar15 = uVar14 & uVar17;
        }
        *(long **)(lVar7 + uVar15 * 8) = plVar10;
        while (plVar12 = plVar16, plVar16 = (long *)*plVar12, plVar16 != (long *)0x0) {
          uVar13 = plVar16[1];
          if ((uVar11 & uVar17) == 0) {
            uVar13 = uVar13 & uVar17;
          }
          else if (uVar11 <= uVar13) {
            uVar14 = 0;
            if (uVar11 != 0) {
              uVar14 = uVar13 / uVar11;
            }
            uVar13 = uVar13 - uVar14 * uVar11;
          }
          if (uVar13 != uVar15) {
            if (*(long *)(lVar7 + uVar13 * 8) == 0) {
              *(long **)(lVar7 + uVar13 * 8) = plVar12;
              uVar15 = uVar13;
            }
            else {
              *plVar12 = *plVar16;
              *plVar16 = **(undefined8 **)(lVar7 + uVar13 * 8);
              **(long **)(lVar7 + uVar13 * 8) = (long)plVar16;
              plVar16 = plVar12;
            }
          }
        }
      }
    }
    else if (uVar11 < uVar9) {
      uVar13 = (ulong)((float)(ulong)param_2[3] / *(float *)(param_2 + 4));
      if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar13) {
        uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
      }
      if (uVar11 <= uVar13) {
        uVar11 = uVar13;
      }
      if (uVar11 < uVar9) {
        if (uVar11 != 0) goto LAB_10b2e5930;
        FUN_10b2e5d38(param_2,0);
        param_2[1] = 0;
        uVar9 = 0;
      }
      else {
        uVar9 = param_2[1];
      }
    }
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar5 = true;
      unaff_x26 = uVar9 - 1 & uVar18;
    }
    else {
      uVar5 = uVar9 == uVar18;
      unaff_x26 = uVar18;
      if (uVar9 <= uVar18) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar18 / uVar9;
        }
        unaff_x26 = uVar18 - uVar11 * uVar9;
      }
    }
  }
  lVar7 = *param_2;
  plVar16 = *(long **)(lVar7 + unaff_x26 * 8);
  if (plVar16 == (long *)0x0) {
    *plVar6 = *plVar10;
    *plVar10 = (long)plVar6;
    *(long **)(lVar7 + unaff_x26 * 8) = plVar10;
    if (*plVar6 != 0) {
      uVar18 = *(ulong *)(*plVar6 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar18 = uVar18 & uVar9 - 1;
        uVar5 = true;
      }
      else {
        uVar5 = uVar18 == uVar9;
        if (uVar9 <= uVar18) {
          uVar11 = 0;
          if (uVar9 != 0) {
            uVar11 = uVar18 / uVar9;
          }
          uVar18 = uVar18 - uVar11 * uVar9;
        }
      }
      *(long **)(lVar7 + uVar18 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar16;
    *plVar16 = (long)plVar6;
  }
  plStack_90 = (long *)0x0;
  param_2[3] = param_2[3] + 1;
  FUN_10b2e5d50(&plStack_90);
LAB_10b2e5b60:
  func_0x00010b2e5db0();
  func_0x000107c2c6d8(&lStack_c8);
  plVar16 = &lStack_78;
  func_0x000107c2c578(plVar16);
  FUN_10b2e5d98();
  if ((bool)uVar5) {
    return plVar16;
  }
LAB_10b2e5b9c:
  ___stack_chk_fail();
LAB_10b2e5ba0:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10b2e5ba8);
  (*pcVar3)();
}



/* Entry: 10b2e5bf4; end: 10b2e5bf7;  */

undefined8 FUN_10b2e5bf4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 unaff_x19;
  
  puVar1 = param_1;
  func_0x000107c35bc0();
  lVar2 = puVar1[4];
  param_1[4] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x000107c35b4c();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x8;
  func_0x000107c2c8d8(param_1 + 2);
  return unaff_x19;
}



/* Entry: 10b2e5bf8; end: 10b2e5c0b;  */

void FUN_10b2e5bf8(void)

{
  func_0x00010b2e5ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e5c0c; end: 10b2e5c1b;  */

undefined8 FUN_10b2e5c0c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 unaff_x19;
  
  puVar1 = (undefined8 *)(param_1 + -8);
  puVar2 = puVar1;
  func_0x000107c35bc0();
  lVar3 = puVar2[4];
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  func_0x000107c35b4c();
  *puVar1 = extraout_x9;
  puVar1[1] = extraout_x8;
  func_0x000107c2c8d8(puVar1 + 2);
  return unaff_x19;
}



/* Entry: 10b2e5c1c; end: 10b2e5cdb;  */

undefined8 *
FUN_10b2e5c1c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puVar5 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar4 = param_2[1];
    uVar6 = *param_2;
    puVar5[1] = param_2[1];
    *puVar5 = uVar6;
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
    puVar5 = puVar5 + 2;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  puStack_28 = puVar5;
  func_0x000107c2c734(&uStack_50);
  return puVar5;
}



/* Entry: 10b2e5cdc; end: 10b2e5d37;  */

long * FUN_10b2e5cdc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c2c6d8(plVar1 + 3);
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



/* Entry: 10b2e5d38; end: 10b2e5d4f;  */

void FUN_10b2e5d38(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2e5d50; end: 10b2e5d97;  */

long * FUN_10b2e5d50(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c2c6d8(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b2e5d98; end: 10b2e5dbb;  */

void FUN_10b2e5d98(void)

{
  return;
}



/* Entry: 10b2e5dbc; end: 10b2e5e37;  */

void FUN_10b2e5dbc(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar1 = param_3[1];
  for (lVar3 = *param_3; lVar3 != lVar1; lVar3 = lVar3 + 0x10) {
    lVar2 = param_4;
    func_0x000107c2c96c(param_4,lVar3);
    if (lVar2 == 0) {
      func_0x000107c2c728(param_1,lVar3);
    }
  }
  return;
}



/* Entry: 10b2e5e38; end: 10b2e5e3b;  */

void FUN_10b2e5e38(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  func_0x000107c35b4c();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x8;
  func_0x000107c2c8d8(param_1 + 2);
  return;
}



/* Entry: 10b2e5e3c; end: 10b2e5e4f;  */

void FUN_10b2e5e3c(void)

{
  FUN_10b2e4040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e5e50; end: 10b2e5e63;  */

void FUN_10b2e5e50(void)

{
  return;
}



/* Entry: 10b2e5e64; end: 10b2e5eb3;  */

bool FUN_10b2e5e64(long param_1,int param_2,long param_3)

{
  bool bVar1;
  
  bVar1 = (ulong)(param_3 + param_2 + (long)*(int *)(param_1 + 0x30)) <
          (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x70);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34),bVar1);
  return bVar1;
}



/* Entry: 10b2e5eb4; end: 10b2e5eb7;  */

undefined8 FUN_10b2e5eb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 unaff_x19;
  
  puVar1 = param_1;
  func_0x000107c35bc4();
  *puVar1 = extraout_x9_00;
  puVar1[1] = extraout_x8_00;
  func_0x000107c2c92c(puVar1 + 4);
  func_0x000107c35b4c();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x8;
  func_0x000107c2c8d8(param_1 + 2);
  return unaff_x19;
}



/* Entry: 10b2e5eb8; end: 10b2e5ecb;  */

void FUN_10b2e5eb8(void)

{
  FUN_10b2e5edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e5ecc; end: 10b2e5edb;  */

undefined8 FUN_10b2e5ecc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 unaff_x19;
  
  puVar1 = (undefined8 *)(param_1 + -8);
  puVar2 = puVar1;
  func_0x000107c35bc4();
  *puVar2 = extraout_x9_00;
  puVar2[1] = extraout_x8_00;
  func_0x000107c2c92c(puVar2 + 4);
  func_0x000107c35b4c();
  *puVar1 = extraout_x9;
  puVar1[1] = extraout_x8;
  func_0x000107c2c8d8(puVar1 + 2);
  return unaff_x19;
}



/* Entry: 10b2e5edc; end: 10b2e5f07;  */

undefined8 FUN_10b2e5edc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 unaff_x19;
  
  puVar1 = param_1;
  func_0x000107c35bc4();
  *puVar1 = extraout_x9_00;
  puVar1[1] = extraout_x8_00;
  func_0x000107c2c92c(puVar1 + 4);
  func_0x000107c35b4c();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x8;
  func_0x000107c2c8d8(param_1 + 2);
  return unaff_x19;
}



/* Entry: 10b2e5f08; end: 10b2e5f2b;  */

bool FUN_10b2e5f08(long param_1,int param_2,long param_3)

{
  return (ulong)(param_3 + param_2 + (long)*(int *)(param_1 + 0x30)) <
         (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x70);
}



/* Entry: 10b2e5f2c; end: 10b2e5f3f;  */

void FUN_10b2e5f2c(void)

{
  FUN_10b2e5edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e5f40; end: 10b2e5f53;  */

undefined8 FUN_10b2e5f40(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 unaff_x19;
  
  puVar2 = (undefined8 *)(param_1 + -8);
  puVar1 = puVar2;
  func_0x000107c35bc4();
  *puVar1 = extraout_x9_00;
  puVar1[1] = extraout_x8_00;
  func_0x000107c2c92c(puVar1 + 4);
  func_0x000107c35b4c();
  *puVar2 = extraout_x9;
  puVar2[1] = extraout_x8;
  func_0x000107c2c8d8(puVar2 + 2);
  return unaff_x19;
}



/* Entry: 10b2e5f54; end: 10b2e5f67;  */

void FUN_10b2e5f54(void)

{
  FUN_10b2e5edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e5f68; end: 10b2e604b;  */

undefined8 FUN_10b2e5f68(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 unaff_x19;
  
  puVar2 = (undefined8 *)(param_1 + -8);
  puVar1 = puVar2;
  func_0x000107c35bc4();
  *puVar1 = extraout_x9_00;
  puVar1[1] = extraout_x8_00;
  func_0x000107c2c92c(puVar1 + 4);
  func_0x000107c35b4c();
  *puVar2 = extraout_x9;
  puVar2[1] = extraout_x8;
  func_0x000107c2c8d8(puVar2 + 2);
  return unaff_x19;
}



/* Entry: 10b2e604c; end: 10b2e6067;  */

bool FUN_10b2e604c(long param_1)

{
  func_0x00010925b970();
  return param_1 != 0;
}



/* Entry: 10b2e6068; end: 10b2e6737;  */

void FUN_10b2e6068(long *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                  undefined4 param_6,long *param_7,uint param_8)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  ulong uVar9;
  code *extraout_x8;
  code *extraout_x8_00;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  undefined *puVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  ulong unaff_x22;
  long *plVar21;
  undefined *puVar22;
  undefined *puVar23;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  ulong uStack_148;
  long *plStack_140;
  long lStack_138;
  float fStack_130;
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [24];
  long lStack_c0;
  undefined1 auStack_b0 [40];
  undefined4 uStack_88;
  uint uStack_84;
  long *plStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  
  lStack_168 = 0;
  lStack_160 = 0;
  uStack_158 = 0;
  plStack_170 = (long *)param_4[1];
  do {
    if (((plStack_170 == (long *)*param_4) ||
        (plVar1 = (long *)*param_1, plVar1 == (long *)param_1[1])) ||
       ((ulong)*(uint *)(*param_5 + 0x14c) <=
        (ulong)((param_3[1] - *param_3 >> 4) + (lStack_160 - lStack_168 >> 4)))) {
      func_0x000107c2c6d8(&lStack_168);
      return;
    }
    uStack_84 = *(uint *)(*plVar1 + 400);
    uVar2 = *(undefined4 *)(*plVar1 + 0x178);
    plStack_170 = plStack_170 + -2;
    bVar6 = param_8 == uStack_84;
    iVar3 = *(int *)(*plStack_170 + 0x194);
    uVar14 = (ulong)iVar3;
    uStack_88 = *(undefined4 *)(*plStack_170 + 400);
    FUN_10b2e6884(auStack_b0,*param_5 + 0x80);
    FUN_10b2e6884(auStack_d8,*param_5 + 0x120);
    func_0x000107c2b124(auStack_100,*param_5 + 0xf8);
    func_0x000107c2b124(auStack_128,*param_5 + 0xd0);
    lVar17 = *param_5;
    uStack_148 = 0;
    lStack_150 = 0;
    lStack_138 = 0;
    plStack_140 = (long *)0x0;
    fStack_130 = *(float *)(lVar17 + 200);
    FUN_10b2e3d3c(&lStack_150,*(undefined8 *)(lVar17 + 0xb0));
    plVar21 = (long *)(lVar17 + 0xb8);
LAB_10b2e61b4:
    uVar11 = uStack_148;
    plVar21 = (long *)*plVar21;
    if (plVar21 != (long *)0x0) {
      iVar7 = *(int *)(plVar21 + 2);
      uVar18 = (ulong)iVar7;
      if (uStack_148 != 0) {
        uVar9 = uStack_148 - 1;
        if ((uStack_148 & uVar9) == 0) {
          unaff_x22 = uVar9 & uVar18;
        }
        else {
          unaff_x22 = uVar18;
          if (uStack_148 <= uVar18) {
            uVar12 = 0;
            if (uStack_148 != 0) {
              uVar12 = uVar18 / uStack_148;
            }
            unaff_x22 = uVar18 - uVar12 * uStack_148;
          }
        }
        plVar10 = *(long **)(lStack_150 + unaff_x22 * 8);
        if (plVar10 != (long *)0x0) {
          do {
            while( true ) {
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) goto LAB_10b2e6250;
              uVar12 = plVar10[1];
              if (uVar12 != uVar18) break;
              if (*(int *)(plVar10 + 2) == iVar7) goto LAB_10b2e61b4;
            }
            if ((uStack_148 & uVar9) == 0) {
              uVar12 = uVar12 & uVar9;
            }
            else if (uStack_148 <= uVar12) {
              uVar4 = 0;
              if (uStack_148 != 0) {
                uVar4 = uVar12 / uStack_148;
              }
              uVar12 = uVar12 - uVar4 * uStack_148;
            }
          } while (uVar12 == unaff_x22);
        }
      }
LAB_10b2e6250:
      plVar10 = (long *)0x18;
      __Znwm();
      uStack_70 = 1;
      *plVar10 = 0;
      plVar10[1] = uVar18;
      *(int *)(plVar10 + 2) = iVar7;
      plStack_80 = plVar10;
      pplStack_78 = &plStack_140;
      if ((uVar11 == 0) || (fStack_130 * (float)uVar11 < (float)(lStack_138 + 1))) {
        func_0x00010b2e6da4(uVar11 << 1);
        FUN_10b2e3d3c(&lStack_150);
        uVar11 = uStack_148;
        if ((uStack_148 & uStack_148 - 1) == 0) {
          unaff_x22 = uStack_148 - 1 & uVar18;
        }
        else {
          unaff_x22 = uVar18;
          if (uStack_148 <= uVar18) {
            uVar9 = 0;
            if (uStack_148 != 0) {
              uVar9 = uVar18 / uStack_148;
            }
            unaff_x22 = uVar18 - uVar9 * uStack_148;
          }
        }
      }
      plVar10 = *(long **)(lStack_150 + unaff_x22 * 8);
      if (plVar10 == (long *)0x0) {
        *plStack_80 = (long)plStack_140;
        plStack_140 = plStack_80;
        *(long ***)(lStack_150 + unaff_x22 * 8) = &plStack_140;
        if (*plStack_80 != 0) {
          uVar18 = *(ulong *)(*plStack_80 + 8);
          if ((uVar11 & uVar11 - 1) == 0) {
            uVar18 = uVar18 & uVar11 - 1;
          }
          else if (uVar11 <= uVar18) {
            uVar9 = 0;
            if (uVar11 != 0) {
              uVar9 = uVar18 / uVar11;
            }
            uVar18 = uVar18 - uVar9 * uVar11;
          }
          *(long **)(lStack_150 + uVar18 * 8) = plStack_80;
        }
      }
      else {
        *plStack_80 = *plVar10;
        *plVar10 = (long)plStack_80;
      }
      plStack_80 = (long *)0x0;
      lStack_138 = lStack_138 + 1;
      FUN_10b2e3ed4(&plStack_80);
      goto LAB_10b2e61b4;
    }
    lVar17 = *param_5;
    if (*(uint *)(*plStack_170 + 0x2b0) < *(uint *)(lVar17 + 0x78)) {
      uVar16 = *(uint *)(*plVar1 + 400);
      unaff_x22 = (ulong)uVar16;
      puVar8 = auStack_b0;
      func_0x00010b2e6dbc();
      if ((int)puVar8 == 0) {
        iVar7 = 0;
      }
      else {
        puVar8 = auStack_b0;
        func_0x00010b2e5fa8(puVar8,uVar2);
        iVar7 = (int)puVar8;
      }
      bVar5 = false;
      if ((uStack_148 != 0) && (lStack_138 != 0)) {
        uVar11 = uStack_148 - 1;
        if ((uStack_148 & uVar11) == 0) {
          uVar18 = uVar11 & uVar14;
        }
        else {
          uVar18 = uVar14;
          if (uStack_148 <= uVar14) {
            uVar18 = 0;
            if (uStack_148 != 0) {
              uVar18 = uVar14 / uStack_148;
            }
            uVar18 = uVar14 - uVar18 * uStack_148;
          }
        }
        plVar21 = *(long **)(lStack_150 + uVar18 * 8);
        if (plVar21 != (long *)0x0) {
          do {
            while( true ) {
              plVar21 = (long *)*plVar21;
              if (plVar21 == (long *)0x0) goto LAB_10b2e6454;
              uVar9 = plVar21[1];
              if (uVar9 != uVar14) break;
              if (*(int *)(plVar21 + 2) == iVar3) {
                bVar5 = true;
                goto LAB_10b2e6458;
              }
            }
            if ((uStack_148 & uVar11) == 0) {
              uVar9 = uVar9 & uVar11;
            }
            else if (uStack_148 <= uVar9) {
              uVar12 = 0;
              if (uStack_148 != 0) {
                uVar12 = uVar9 / uStack_148;
              }
              uVar9 = uVar9 - uVar12 * uStack_148;
            }
          } while (uVar9 == uVar18);
        }
LAB_10b2e6454:
        bVar5 = false;
      }
LAB_10b2e6458:
      if (uVar16 == param_8) {
        if (*(char *)(lVar17 + 0x200) == '\x01') {
          puVar8 = auStack_100;
          FUN_10b2e604c(puVar8,&uStack_84);
          if ((int)puVar8 == 0) goto LAB_10b2e649c;
          puVar8 = auStack_100;
          FUN_10b2e604c(puVar8,&uStack_88);
          uVar16 = (uint)puVar8 ^ 1;
        }
        else {
LAB_10b2e649c:
          uVar16 = 0;
        }
        if (*(char *)(*param_5 + 0x200) != '\x01') goto LAB_10b2e64d4;
        puVar8 = auStack_128;
        FUN_10b2e604c(puVar8,&uStack_84);
        if ((int)puVar8 == 0) goto LAB_10b2e64d4;
        puVar8 = auStack_128;
        FUN_10b2e604c(puVar8,&uStack_88);
        uVar13 = (uint)puVar8;
      }
      else {
        uVar16 = 0;
LAB_10b2e64d4:
        uVar13 = 0;
      }
      if ((((uVar16 | uVar13) & 1) == 0) || (lStack_c0 == 0)) {
        if ((uVar16 & 1) == 0) {
          if (uVar13 == 0) goto LAB_10b2e6570;
LAB_10b2e652c:
          puVar19 = (undefined1 *)*plVar1;
          lVar17 = *plStack_170;
          puVar8 = puVar19;
          func_0x00010b2e5f78(puVar19,lVar17);
          if (((int)puVar8 == 0) ||
             (((*(char *)(*param_5 + 0x205) == '\x01' && (*(int *)(puVar19 + 0x180) == 2)) &&
              (*(int *)(lVar17 + 0x180) == 2)))) goto LAB_10b2e6570;
        }
      }
      else {
        if (uVar16 == 0) {
          if (uVar13 != 0) {
            puVar19 = (undefined1 *)0x0;
            goto LAB_10b2e6518;
          }
        }
        else {
          puVar8 = (undefined1 *)0x0;
          func_0x00010b2e6dbc();
          puVar19 = puVar8;
          if ((uVar13 & 1) == 0) {
            if (((ulong)puVar8 & 1) != 0) goto LAB_10b2e6588;
          }
          else {
LAB_10b2e6518:
            puVar8 = auStack_d8;
            func_0x00010b2e6dbc();
            if (((ulong)puVar19 & 1) != 0) goto LAB_10b2e6588;
            if ((int)puVar8 != 0) goto LAB_10b2e652c;
          }
        }
LAB_10b2e6570:
        if (((iVar7 == 0) || (func_0x00010b2e6d94(), ((ulong)puVar8 & 1) == 0)) &&
           ((!bVar5 || (func_0x00010b2e6d94(), ((ulong)puVar8 & 1) == 0)))) {
          bVar5 = false;
          goto LAB_10b2e6594;
        }
      }
LAB_10b2e6588:
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
LAB_10b2e6594:
    FUN_10b2e3f90(&lStack_150);
    func_0x000107c2ab24(auStack_128);
    func_0x000107c2ab24(auStack_100);
    FUN_10b2e3f0c(auStack_d8);
    FUN_10b2e3f0c(auStack_b0);
    if (bVar5) {
      func_0x000107c2c728(&lStack_168,plStack_170);
      puVar20 = (&PTR_DAT_110cd4210)[*(int *)(*plStack_170 + 0x178)];
      puVar23 = (&PTR_DAT_110cd4378)[*(int *)(*plStack_170 + 0x180)];
      puVar22 = (&PTR_DAT_110cd4210)[*(int *)(*plVar1 + 0x178)];
      puVar15 = (&PTR_DAT_110cd4378)[*(int *)(*plVar1 + 0x180)];
      func_0x000107c2c728(param_2);
      FUN_10b2e6738(param_3,param_3[1],lStack_168,lStack_160);
      func_0x000107c2c6fc(param_1,plVar1);
      func_0x000107c2c6dc(&lStack_168);
      (**(code **)(*param_7 + 0x20))(param_7,puVar20,puVar23,puVar22,puVar15,param_6);
      if (param_8 != 0xffffffff && bVar6) {
        func_0x00010b2e6d74();
        (*extraout_x8)();
      }
    }
    else if (param_8 != 0xffffffff && bVar6) {
      func_0x00010b2e6d74();
      (*extraout_x8_00)();
    }
  } while( true );
}



/* Entry: 10b2e6738; end: 10b2e6743;  */

long * FUN_10b2e6738(long *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  
  lVar6 = param_4 - (long)param_3 >> 4;
  if (0 < lVar6) {
    lVar7 = param_1[1];
    if (param_1[2] - lVar7 >> 4 < lVar6) {
      plVar5 = param_1;
      func_0x000107c2c704(param_1,lVar6 + (lVar7 - *param_1 >> 4));
      func_0x000107c2c710(auStack_68,plVar5,(long)param_2 - *param_1 >> 4,param_1 + 2);
      puVar2 = puStack_58 + lVar6 * 2;
      for (; puStack_58 != puVar2; puStack_58 = puStack_58 + 2) {
        lVar6 = param_3[1];
        uVar8 = *param_3;
        puStack_58[1] = param_3[1];
        *puStack_58 = uVar8;
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = *plVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        param_3 = param_3 + 2;
      }
      puStack_58 = puVar2;
      func_0x000107c2c708(param_1,auStack_68,param_2);
      func_0x000107c2c714(auStack_68);
      param_2 = param_1;
    }
    else {
      lVar1 = lVar7 - (long)param_2 >> 4;
      if (lVar1 < lVar6) {
        FUN_10b2dc538(param_1,(long)param_3 + (lVar7 - (long)param_2),param_4,lVar6 - lVar1);
        if (lVar1 < 1) {
          return param_2;
        }
        func_0x00010b2e6d60();
        lVar6 = lVar1;
      }
      else {
        func_0x00010b2e6d60();
      }
      FUN_10b2e6c10(param_1,param_3,lVar6,param_2);
    }
  }
  return param_2;
}



/* Entry: 10b2e6744; end: 10b2e685b;  */

void FUN_10b2e6744(long *param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5,
                  long *param_6)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  plVar3 = (long *)*param_1;
  lVar4 = param_1[1] - (long)plVar3;
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  plVar1 = (long *)param_1[1];
  while ((plVar5 = plVar1 + -2, plVar1 != plVar3 &&
         ((ulong)(lStack_60 - lStack_68 >> 4) < (ulong)((lVar4 >> 4) - param_3)))) {
    uVar2 = *param_4;
    FUN_10b2e685c(uVar2,*(undefined4 *)(*plVar5 + 0xa8),*(undefined4 *)(*plVar5 + 0x180));
    if ((int)uVar2 != 0) {
      func_0x000107c2c728(&lStack_68,plVar5);
    }
    plVar3 = (long *)*param_1;
    plVar1 = plVar5;
  }
  if (lStack_68 != lStack_60) {
    (**(code **)(*param_6 + 0x28))(param_6,lStack_60 - lStack_68 >> 4,param_5);
  }
  FUN_10b2e6738(param_2,*(undefined8 *)(param_2 + 8),lStack_68,lStack_60);
  func_0x000107c2c6d8(&lStack_68);
  return;
}



/* Entry: 10b2e685c; end: 10b2e6883;  */

void FUN_10b2e685c(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  FUN_10b2e6c98(param_1 + 0x1c8,&uStack_18);
  return;
}



/* Entry: 10b2e6884; end: 10b2e6abb;  */

long * FUN_10b2e6884(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x000107c2c8e0(param_1,*(undefined8 *)(param_2 + 8));
  plVar8 = (long *)(param_2 + 0x10);
  plVar1 = param_1 + 2;
LAB_10b2e68cc:
  do {
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return param_1;
    }
    iVar2 = *(int *)(plVar8 + 2);
    uVar10 = (ulong)iVar2;
    uVar9 = param_1[1];
    if (uVar9 != 0) {
      uVar4 = uVar9 - 1;
      if ((uVar9 & uVar4) == 0) {
        unaff_x25 = uVar4 & uVar10;
      }
      else {
        unaff_x25 = uVar10;
        if (uVar9 <= uVar10) {
          uVar7 = 0;
          if (uVar9 != 0) {
            uVar7 = uVar10 / uVar9;
          }
          unaff_x25 = uVar10 - uVar7 * uVar9;
        }
      }
      plVar5 = *(long **)(*param_1 + unaff_x25 * 8);
      if (plVar5 != (long *)0x0) {
        do {
          while( true ) {
            plVar5 = (long *)*plVar5;
            if (plVar5 == (long *)0x0) goto LAB_10b2e6964;
            uVar7 = plVar5[1];
            if (uVar7 != uVar10) break;
            if (*(int *)(plVar5 + 2) == iVar2) goto LAB_10b2e68cc;
          }
          if ((uVar9 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar9 <= uVar7) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar3 * uVar9;
          }
        } while (uVar7 == unaff_x25);
      }
    }
LAB_10b2e6964:
    plVar5 = (long *)0x18;
    __Znwm();
    uStack_58 = 1;
    *plVar5 = 0;
    plVar5[1] = uVar10;
    *(int *)(plVar5 + 2) = iVar2;
    plStack_68 = plVar5;
    plStack_60 = plVar1;
    if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
      func_0x00010b2e6da4(uVar9 << 1);
      func_0x000107c2c8e0(param_1);
      uVar9 = param_1[1];
      if ((uVar9 & uVar9 - 1) == 0) {
        unaff_x25 = uVar9 - 1 & uVar10;
      }
      else {
        unaff_x25 = uVar10;
        if (uVar9 <= uVar10) {
          uVar4 = 0;
          if (uVar9 != 0) {
            uVar4 = uVar10 / uVar9;
          }
          unaff_x25 = uVar10 - uVar4 * uVar9;
        }
      }
    }
    lVar6 = *param_1;
    plVar5 = *(long **)(lVar6 + unaff_x25 * 8);
    if (plVar5 == (long *)0x0) {
      *plStack_68 = *plVar1;
      *plVar1 = (long)plStack_68;
      *(long **)(lVar6 + unaff_x25 * 8) = plVar1;
      if (*plStack_68 != 0) {
        uVar10 = *(ulong *)(*plStack_68 + 8);
        if ((uVar9 & uVar9 - 1) == 0) {
          uVar10 = uVar10 & uVar9 - 1;
        }
        else if (uVar9 <= uVar10) {
          uVar4 = 0;
          if (uVar9 != 0) {
            uVar4 = uVar10 / uVar9;
          }
          uVar10 = uVar10 - uVar4 * uVar9;
        }
        *(long **)(lVar6 + uVar10 * 8) = plStack_68;
      }
    }
    else {
      *plStack_68 = *plVar5;
      *plVar5 = (long)plStack_68;
    }
    plStack_68 = (long *)0x0;
    param_1[3] = param_1[3] + 1;
    func_0x000107c2c8e4(&plStack_68);
  } while( true );
}



/* Entry: 10b2e6abc; end: 10b2e6c0f;  */

long * FUN_10b2e6abc(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,long param_5
                    )

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  
  if (0 < param_5) {
    lVar6 = param_1[1];
    if (param_1[2] - lVar6 >> 4 < param_5) {
      plVar5 = param_1;
      func_0x000107c2c704(param_1,param_5 + (lVar6 - *param_1 >> 4));
      func_0x000107c2c710(auStack_68,plVar5,(long)param_2 - *param_1 >> 4,param_1 + 2);
      puVar2 = puStack_58 + param_5 * 2;
      for (; puStack_58 != puVar2; puStack_58 = puStack_58 + 2) {
        lVar6 = param_3[1];
        uVar7 = *param_3;
        puStack_58[1] = param_3[1];
        *puStack_58 = uVar7;
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = *plVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        param_3 = param_3 + 2;
      }
      puStack_58 = puVar2;
      func_0x000107c2c708(param_1,auStack_68,param_2);
      func_0x000107c2c714(auStack_68);
      param_2 = param_1;
    }
    else {
      lVar1 = lVar6 - (long)param_2 >> 4;
      if (lVar1 < param_5) {
        FUN_10b2dc538(param_1,(long)param_3 + (lVar6 - (long)param_2),param_4,param_5 - lVar1);
        if (lVar1 < 1) {
          return param_2;
        }
        func_0x00010b2e6d60();
        param_5 = lVar1;
      }
      else {
        func_0x00010b2e6d60();
      }
      FUN_10b2e6c10(param_1,param_3,param_5,param_2);
    }
  }
  return param_2;
}



/* Entry: 10b2e6c10; end: 10b2e6c97;  */

void FUN_10b2e6c10(long param_1,undefined8 *param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  lVar2 = param_4 + param_3 * 0x10;
  for (; param_4 != lVar2; param_4 = param_4 + 0x10) {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
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
    lStack_40 = param_1 + 0x10;
    FUN_10b2d78e4(param_4,&uStack_50);
    func_0x000107c2c578(&uStack_50);
    param_2 = param_2 + 2;
  }
  return;
}



/* Entry: 10b2e6c98; end: 10b2e6d1f;  */

bool FUN_10b2e6c98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010b2e6cc4();
  return param_1 + 8 != lVar1;
}



/* Entry: 10b2e6d20; end: 10b2e6e27;  */

long FUN_10b2e6d20(undefined8 param_1,int *param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar2)) {
    bVar1 = *(int *)(param_3 + 0x20) < param_2[1];
    if (*(int *)(param_3 + 0x1c) != *param_2) {
      bVar1 = *(int *)(param_3 + 0x1c) < *param_2;
    }
    lVar2 = 8;
    if (!bVar1) {
      lVar2 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 10b2e6e28; end: 10b2e6e4b;  */

void FUN_10b2e6e28(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c35bcc();
  if (unaff_x19 == param_1 + 0x40) {
    return;
  }
  func_0x00010064e6e8();
  func_0x00010088c344();
  if (*(int *)(unaff_x19 + 0x10) != 0) {
    *(int *)(unaff_x20 + 0x10) = *(int *)(unaff_x19 + 0x10);
  }
  if (*(int *)(unaff_x19 + 0x14) != 0) {
    *(int *)(unaff_x20 + 0x14) = *(int *)(unaff_x19 + 0x14);
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    *(long *)(unaff_x20 + 0x18) = *(long *)(unaff_x19 + 0x18);
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x19 + 0x20);
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    *(int *)(unaff_x20 + 0x24) = *(int *)(unaff_x19 + 0x24);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b2e6e4c; end: 10b2e6ebb;  */

void FUN_10b2e6e4c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong unaff_x19;
  long unaff_x20;
  long lVar3;
  
  func_0x000107c35bd8();
  lVar3 = *(long *)(param_1 + 0x18);
  while (lVar3 != param_1 + 0x10) {
    uVar1 = unaff_x19;
    func_0x00010867b2d8();
    if ((uVar1 & 1) == 0) {
      lVar2 = unaff_x20 + 8;
      FUN_10b2e6ebc(lVar2,lVar3);
      lVar3 = lVar2;
    }
    else {
      lVar3 = *(long *)(lVar3 + 8);
    }
  }
  return;
}



/* Entry: 10b2e6ebc; end: 10b2e6eeb;  */

long * FUN_10b2e6ebc(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000107c35bd8();
  func_0x00010b2e6f3c(param_1 + 0x20,param_2 + 0x10);
  lVar1 = *unaff_x19;
  plVar2 = (long *)unaff_x19[1];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  *(long *)(unaff_x20 + 0x18) = *(long *)(unaff_x20 + 0x18) + -1;
  FUN_10b2e41d0();
  return plVar2;
}



/* Entry: 10b2e6eec; end: 10b2e6f07;  */

void FUN_10b2e6eec(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_10b2e6ebc(param_1,*param_3);
  return;
}



/* Entry: 10b2e6f08; end: 10b2e6f9f;  */

long * FUN_10b2e6f08(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  *(long **)(lVar1 + 8) = plVar2;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
  FUN_10b2e41d0();
  return plVar2;
}



/* Entry: 10b2e6fa0; end: 10b2e70cb;  */

void FUN_10b2e6fa0(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_10b2e7054;
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
    if (uVar8 == uVar3) goto LAB_10b2e7054;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10b2e7054:
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



/* Entry: 10b2e70cc; end: 10b2e750b;  */

void FUN_10b2e70cc(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 ***pppuStack_150;
  undefined8 ***pppuStack_148;
  undefined8 ***apppuStack_140 [2];
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 ***apppuStack_128 [3];
  undefined1 uStack_110;
  undefined8 ***pppuStack_108;
  undefined1 uStack_100;
  undefined8 ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined1 uStack_78;
  
  puStack_a8 = (undefined8 *)0x0;
  puStack_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  plVar14 = (long *)*param_3;
  plVar1 = (long *)param_3[1];
  do {
    puVar3 = puStack_a0;
    puVar13 = puStack_a8;
    if (plVar14 == plVar1) {
      pppuStack_150 = (undefined8 ****)0x0;
      pppuStack_148 = (undefined8 ****)0x0;
      apppuStack_140[0] = (undefined8 ****)0x0;
      pppuStack_108 = &pppuStack_150;
      uStack_100 = 0;
      if ((long)puStack_a0 - (long)puStack_a8 != 0) {
        uVar11 = ((long)puStack_a0 - (long)puStack_a8) / 0xe8;
        if (0x11a7b9611a7b961 < uVar11) {
          FUN_10b2e78fc();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10b2e7464);
          (*pcVar4)();
        }
        ppppuVar10 = apppuStack_140;
        func_0x00010b2e795c();
        apppuStack_140[0] = ppppuVar10 + uVar11 * 0x1d;
        pppuStack_88 = &pppuStack_e0;
        pppuStack_80 = apppuStack_128;
        uStack_78 = 0;
        pppuStack_150 = ppppuVar10;
        pppuStack_148 = ppppuVar10;
        pppuStack_e0 = ppppuVar10;
        pppuStack_90 = apppuStack_140;
        for (; apppuStack_128[0] = ppppuVar10, puVar13 != puVar3; puVar13 = puVar13 + 0x1d) {
          *ppppuVar10 = (undefined8 ***)*puVar13;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (ppppuVar10 + 1,puVar13 + 1);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (ppppuVar10 + 4,puVar13 + 4);
          func_0x000107c279a0(ppppuVar10 + 7,puVar13 + 7);
          _memcpy(ppppuVar10 + 0xb,puVar13 + 0xb,0x78);
          func_0x000107c291e8(ppppuVar10 + 0x1a,puVar13 + 0x1a);
          ppppuVar10 = (undefined8 ****)(apppuStack_128[0] + 0x1d);
        }
        uStack_78 = 1;
        FUN_10b2e7b44(&pppuStack_90);
        pppuStack_148 = ppppuVar10;
      }
      uStack_100 = 1;
      func_0x00010b2e7c2c(&pppuStack_108);
      param_1[1] = pppuStack_148;
      *param_1 = pppuStack_150;
      param_1[2] = apppuStack_140[0];
      pppuStack_150 = (undefined8 ***)0x0;
      pppuStack_148 = (undefined8 ***)0x0;
      apppuStack_140[0] = (undefined8 ***)0x0;
      FUN_10b2d5180(&pppuStack_150);
      FUN_10b2d5180(&puStack_a8);
      return;
    }
    lVar5 = param_2;
    func_0x000107c2c98c(param_2,plVar14);
    if ((int)lVar5 == 3) {
LAB_10b2e7144:
      lVar5 = param_4;
      func_0x000107c2c96c(param_4,plVar14);
      lVar6 = lVar5;
      func_0x000107c316c4();
      uStack_b8 = 0;
      lStack_b0 = 0;
      lVar7 = *plVar14;
      if (*(char *)(lVar7 + 0x30) == '\x01') {
        plVar8 = (long *)(lVar7 + 0x28);
        func_0x000107c283f8();
        lVar12 = *plVar8;
        lVar7 = *plVar14;
        lStack_b0 = lVar12 - *(long *)(lVar7 + 0x20);
        lVar2 = -0xa8;
      }
      else {
        lVar12 = *(long *)(lVar7 + 0x20);
        lVar2 = -0xa0;
      }
      *(long *)(&stack0xfffffffffffffff0 + lVar2) = lVar6 - lVar12;
      if (*(char *)(lVar7 + 0x50) == '\x01') {
        uStack_c0 = *(undefined8 *)(lVar7 + 0x48);
      }
      else {
        uStack_c0 = 0xffffffffffffffff;
      }
      uStack_c8 = *(undefined8 *)(lVar7 + 0x40);
      pppuStack_e0 = (undefined8 ****)0x0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      func_0x000107c3014c(&pppuStack_108);
      apppuStack_128[0] = (undefined8 ***)((ulong)apppuStack_128[0] & 0xffffffffffffff00);
      uStack_110 = 0;
      pppuStack_90 = (undefined8 ***)(&PTR_DAT_110cd4508)[*(int *)(*plVar14 + 0x178)];
      func_0x00010596d948(apppuStack_128,&pppuStack_90);
      puVar13 = puStack_a0;
      lVar7 = *plVar14;
      lVar6 = 0xc0;
      if (*(char *)(lVar7 + 0x120) == '\0') {
        lVar6 = 0x60;
      }
      uStack_130 = *(undefined4 *)(lVar7 + 0xa8);
      uStack_12c = (uint)(lVar5 == 0);
      if (puStack_a0 < puStack_98) {
        FUN_10b2e7cc8();
        FUN_10b2e75d0(puVar13);
        puVar13 = puVar13 + 0x1d;
      }
      else {
        ppuVar9 = &puStack_a8;
        FUN_10b2e7814(ppuVar9,((long)puStack_a0 - (long)puStack_a8) / 0xe8 + 1);
        FUN_10b2e7910(&pppuStack_90,ppuVar9,((long)puStack_a0 - (long)puStack_a8) / 0xe8,&puStack_98
                     );
        FUN_10b2e7cc8(pppuStack_80,*(undefined8 *)(lVar7 + lVar6));
        FUN_10b2e75d0();
        pppuStack_80 = pppuStack_80 + 0x1d;
        FUN_10b2e7874(&puStack_a8,&pppuStack_90);
        puVar13 = puStack_a0;
        func_0x00010b2e7bc4(&pppuStack_90);
      }
      puStack_a0 = puVar13;
      func_0x000107c279a4(apppuStack_128);
      func_0x000107c27ae4(&pppuStack_e0);
    }
    else {
      pppuStack_90 = (undefined8 ***)CONCAT44(pppuStack_90._4_4_,*(undefined4 *)(*plVar14 + 0xa8));
      lVar5 = param_2 + 0x70;
      func_0x000107c2c990(lVar5,&pppuStack_90);
      if ((int)lVar5 != 0) goto LAB_10b2e7144;
    }
    plVar14 = plVar14 + 2;
  } while( true );
}



/* Entry: 10b2e750c; end: 10b2e7513;  */

void FUN_10b2e750c(void)

{
  return;
}



/* Entry: 10b2e7514; end: 10b2e7527;  */

void FUN_10b2e7514(void)

{
  func_0x00010b2e7c58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e7528; end: 10b2e7547;  */

undefined8 FUN_10b2e7528(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 unaff_x19;
  
  puVar1 = param_1 + -1;
  *puVar1 = &PTR_DAT_110cd4438;
  *param_1 = &PTR_FUN_110cd4488;
  param_1[3] = &PTR_DAT_110cd44b0;
  func_0x000107c2c76c(param_1 + 0xd);
  FUN_10b2e4348(param_1 + 10);
  FUN_10b2e4368(param_1 + 9);
  func_0x00010b2e438c(param_1 + 7);
  func_0x00010b2e43b0(param_1 + 6);
  func_0x00010b2e43d4(param_1 + 5);
  func_0x00010b2e43f8(param_1 + 4);
  func_0x000107c35b4c();
  *puVar1 = extraout_x9;
  puVar1[1] = extraout_x8;
  func_0x000107c2c8d8(puVar1 + 2);
  return unaff_x19;
}



/* Entry: 10b2e7548; end: 10b2e75cf;  */

void FUN_10b2e7548(long param_1,undefined8 *param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  lVar2 = param_4 + param_3 * 0x10;
  for (; param_4 != lVar2; param_4 = param_4 + 0x10) {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
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
    lStack_40 = param_1 + 0x10;
    FUN_10b2d78e4(param_4,&uStack_50);
    func_0x000107c2c578(&uStack_50);
    param_2 = param_2 + 2;
  }
  return;
}



/* Entry: 10b2e75d0; end: 10b2e7743;  */

undefined8
FUN_10b2e75d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
             undefined8 *param_13,undefined8 *param_14,int *param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  func_0x000107c278b8(auStack_80,"");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_98,param_3);
  func_0x000107c279a0(auStack_b8,param_4);
  uVar5 = *param_5;
  uVar6 = *param_6;
  uStack_d8 = param_7[1];
  uStack_e0 = *param_7;
  uStack_c8 = param_7[3];
  uStack_d0 = param_7[2];
  uVar1 = *param_8;
  uVar3 = param_8[1];
  uVar2 = *param_9;
  uVar4 = param_9[1];
  uVar11 = *param_10;
  uVar12 = *param_11;
  uVar9 = *param_12;
  uVar8 = *param_13;
  uVar10 = *param_14;
  iVar7 = *param_15;
  func_0x000107c291e8(auStack_f8,param_16);
  FUN_10b2e7744(param_1,param_2,auStack_80,auStack_98,auStack_b8,uVar5,uVar6,&uStack_e0,uVar1,uVar3,
                uVar2,uVar4,uVar11,uVar12,uVar9,uVar8,uVar10,(long)iVar7,auStack_f8);
  func_0x000107c27ae4(auStack_f8);
  func_0x000107c279a4(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  return param_1;
}



/* Entry: 10b2e7744; end: 10b2e7813;  */

void FUN_10b2e7744(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 *param_19)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[3] = param_3[2];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uVar2 = param_4[1];
  uVar1 = *param_4;
  param_1[6] = param_4[2];
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[9] = param_5[2];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined4 *)(param_1 + 0xb) = param_6;
  *(undefined4 *)((long)param_1 + 0x5c) = param_7;
  uVar1 = *param_8;
  uVar3 = param_8[3];
  uVar2 = param_8[2];
  param_1[0xd] = param_8[1];
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar3;
  param_1[0xe] = uVar2;
  param_1[0x10] = param_9;
  param_1[0x11] = param_10;
  param_1[0x12] = param_11;
  param_1[0x13] = param_12;
  param_1[0x14] = param_13;
  param_1[0x15] = param_14;
  param_1[0x16] = param_15;
  param_1[0x17] = param_16;
  param_1[0x18] = param_17;
  param_1[0x19] = param_18;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  uVar1 = *param_19;
  param_1[0x1b] = param_19[1];
  param_1[0x1a] = uVar1;
  param_1[0x1c] = param_19[2];
  *param_19 = 0;
  param_19[1] = 0;
  param_19[2] = 0;
  return;
}



/* Entry: 10b2e7814; end: 10b2e7873;  */

long * FUN_10b2e7814(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x11a7b9611a7b962) {
    uVar1 = (param_1[2] - *param_1) / 0xe8;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x8d3dcb08d3dcaf < uVar1) {
      plVar3 = (long *)0x11a7b9611a7b961;
    }
    return plVar3;
  }
  FUN_10b2e78fc();
  func_0x000107c35bf0();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0xe8) * 0xe8;
  FUN_10b2e79b0(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 10b2e7874; end: 10b2e78fb;  */

void FUN_10b2e7874(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107c35bf0();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0xe8) * 0xe8;
  FUN_10b2e79b0(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b2e78fc; end: 10b2e790f;  */

long * FUN_10b2e78fc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b2e795c();
  }
  lVar2 = param_4 + param_3 * 0xe8;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0xe8;
  return plVar1;
}



/* Entry: 10b2e7910; end: 10b2e797f;  */

long * FUN_10b2e7910(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b2e795c();
  }
  lVar1 = param_4 + param_3 * 0xe8;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0xe8;
  return param_1;
}



/* Entry: 10b2e7980; end: 10b2e79af;  */

void FUN_10b2e7980(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x11a7b9611a7b962) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xe8);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0xe8) {
    func_0x00010b2e7a84(param_4,uVar1);
    param_4 = lStack_48 + 0xe8;
  }
  uStack_58 = 1;
  func_0x00010b2e7a54(param_1,param_2,param_3);
  FUN_10b2e7b44(&uStack_70);
  return;
}



/* Entry: 10b2e79b0; end: 10b2e7a53;  */

void FUN_10b2e79b0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0xe8) {
    func_0x00010b2e7a84(param_4,lVar1);
    param_4 = lStack_38 + 0xe8;
  }
  uStack_48 = 1;
  func_0x00010b2e7a54(param_1,param_2,param_3);
  FUN_10b2e7b44(&uStack_60);
  return;
}



/* Entry: 10b2e7a54; end: 10b2e7b43;  */

void FUN_10b2e7a54(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0xe8) {
    func_0x00010b2d5230();
  }
  return;
}



/* Entry: 10b2e7b44; end: 10b2e7b73;  */

long FUN_10b2e7b44(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10b2e7b74(param_1);
  }
  return param_1;
}



/* Entry: 10b2e7b74; end: 10b2e7b93;  */

void FUN_10b2e7b74(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xe8;
    func_0x00010b2d5230();
  }
  return;
}



/* Entry: 10b2e7b94; end: 10b2e7bef;  */

void FUN_10b2e7b94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0xe8;
    func_0x00010b2d5230();
  }
  return;
}



/* Entry: 10b2e7bf0; end: 10b2e7bf7;  */

void FUN_10b2e7bf0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c35bf0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xe8;
    func_0x00010b2d5230();
  }
  return;
}



/* Entry: 10b2e7bf8; end: 10b2e7cc7;  */

void FUN_10b2e7bf8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c35bf0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0xe8;
    func_0x00010b2d5230();
  }
  return;
}



/* Entry: 10b2e7cc8; end: 10b2e7d2b;  */

void FUN_10b2e7cc8(void)

{
  return;
}



/* Entry: 10b2e7d2c; end: 10b2e802b;  */

void FUN_10b2e7d2c(undefined8 *param_1,double param_2,ulong *param_3)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  undefined8 ***pppuVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 ****ppppuVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  double dVar17;
  double dVar18;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined1 uStack_78;
  
  pppuStack_98 = (undefined8 ****)0x0;
  pppuStack_90 = (undefined8 ****)0x0;
  pppuStack_88 = (undefined8 ****)0x0;
  pppuStack_80 = &pppuStack_98;
  uStack_78 = 0;
  bVar5 = *param_3 <= param_3[1];
  lVar13 = param_3[1] - *param_3;
  if (lVar13 != 0) {
    lVar7 = lVar13 / 0x28;
    func_0x000107c35c18();
    if (bVar5) {
      FUN_10b2e8060();
      goto LAB_10b2e7ff8;
    }
    ppppuVar6 = &pppuStack_88;
    FUN_10b2e806c();
    pppuStack_88 = ppppuVar6 + lVar7 * 5;
    pppuStack_98 = ppppuVar6;
    _memmove();
    pppuStack_90 = (undefined8 ***)((long)ppppuVar6 + lVar13);
  }
  uStack_78 = 1;
  func_0x00010b2e8090(&pppuStack_80);
  if (pppuStack_98 != pppuStack_90) {
    FUN_10b2e80d4(pppuStack_98,pppuStack_90,
                  LZCOUNT(((long)pppuStack_90 - (long)pppuStack_98) / 0x28) << 1 ^ 0x7e,1);
  }
  puVar16 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  dVar17 = 0.0;
  param_1[2] = 0;
  uVar15 = param_3[1];
  puVar10 = (undefined8 *)0x0;
  ppppuVar6 = (undefined8 ****)pppuStack_90;
  do {
    pppuVar3 = pppuStack_98;
    uVar9 = *param_3;
    ppppuVar12 = ppppuVar6;
    dVar18 = dVar17;
    do {
      if (ppppuVar12 == (undefined8 ****)pppuVar3) {
        FUN_10b2e8c48(&pppuStack_98);
        return;
      }
      ppppuVar6 = ppppuVar12 + -5;
      pppuVar8 = ppppuVar12[-3];
      if (uVar15 == uVar9) {
LAB_10b2e7e94:
        FUN_10b2e802c(ppppuVar6);
        dVar17 = dVar18 - param_2;
      }
      else {
        uVar14 = uVar15 - 0x28;
        pppuVar1 = (undefined8 ***)(*(long *)(uVar15 - 0x10) + *(long *)(uVar15 - 0x18));
        if ((long)pppuVar8 < (long)pppuVar1) {
          FUN_10b2e802c(uVar14);
          dVar17 = dVar18 + param_2;
          pppuVar8 = pppuVar1;
          ppppuVar6 = ppppuVar12;
          uVar15 = uVar14;
        }
        else {
          if (pppuVar1 != pppuVar8) goto LAB_10b2e7e94;
          FUN_10b2e802c(uVar14);
          dVar17 = param_2;
          FUN_10b2e802c(ppppuVar6);
          param_2 = param_2 - dVar17;
          dVar17 = dVar18 + param_2;
          uVar15 = uVar14;
        }
      }
      if (puVar10 != puVar16) {
        if ((undefined8 ***)puVar16[-2] == pppuVar8) {
          puVar16 = puVar16 + -3;
          param_1[1] = puVar16;
        }
        if (puVar10 != puVar16) {
          puVar16[-3] = pppuVar8;
        }
      }
      bVar5 = dVar18 == dVar17;
      ppppuVar12 = ppppuVar6;
      dVar18 = dVar17;
    } while (bVar5 || ppppuVar6 == (undefined8 ****)pppuVar3);
    if (puVar16 < (undefined8 *)param_1[2]) {
      *puVar16 = 0x7fffffffffffffff;
      puVar16[1] = pppuVar8;
      puVar16[2] = dVar17;
      puVar16 = puVar16 + 3;
      puVar11 = puVar10;
    }
    else {
      lVar13 = (long)puVar16 - (long)puVar10;
      uVar9 = lVar13 / 0x18 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar9) {
        FUN_10b2e8bf8();
        goto LAB_10b2e7ff8;
      }
      uVar2 = ((long)param_1[2] - (long)puVar10) / 0x18;
      uVar14 = uVar2 * 2;
      if (uVar14 < uVar9 || uVar14 - uVar9 == 0) {
        uVar14 = uVar9;
      }
      if (0x555555555555554 < uVar2) {
        uVar14 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar14) break;
      lVar7 = uVar14 * 0x18;
      __Znwm();
      puVar11 = (undefined8 *)(lVar7 + lVar13);
      *puVar11 = 0x7fffffffffffffff;
      puVar11[1] = pppuVar8;
      puVar11[2] = dVar17;
      puVar16 = puVar11 + 3;
      puVar11 = puVar11 + (lVar13 / -0x18) * 3;
      _memcpy(puVar11,puVar10,lVar13);
      *param_1 = puVar11;
      param_1[1] = puVar16;
      param_1[2] = lVar7 + uVar14 * 0x18;
      if (puVar10 != (undefined8 *)0x0) {
        __ZdlPv(puVar10);
      }
    }
    param_1[1] = puVar16;
    puVar10 = puVar11;
  } while( true );
  func_0x000104bd35f4();
LAB_10b2e7ff8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10b2e7ffc);
  (*pcVar4)();
}



/* Entry: 10b2e802c; end: 10b2e805f;  */

double FUN_10b2e802c(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)*(long *)(param_1 + 0x18) / 1000000000.0;
  dVar1 = 0.0;
  if (0.0 < dVar2) {
    dVar1 = (double)(*(long *)(param_1 + 0x20) << 3) / dVar2;
  }
  return dVar1;
}



/* Entry: 10b2e8060; end: 10b2e806b;  */

void FUN_10b2e8060(void)

{
  func_0x00010b2e8fe4();
  func_0x000107c2c99c();
  return;
}



/* Entry: 10b2e806c; end: 10b2e80bb;  */

void FUN_10b2e806c(void)

{
  func_0x000107c2c99c();
  return;
}



/* Entry: 10b2e80bc; end: 10b2e80d3;  */

void FUN_10b2e80bc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2e80d4; end: 10b2e8873;  */

void FUN_10b2e80d4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  ulong uVar13;
  undefined8 *extraout_x8_05;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *puVar16;
  undefined8 *extraout_x9_01;
  ulong uVar17;
  undefined8 *extraout_x9_02;
  undefined8 uVar18;
  long lVar19;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *extraout_x11;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x30;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  puVar10 = param_3;
  func_0x000107c35c00();
  func_0x000107c35c14();
  do {
    puVar11 = unaff_x19 + -5;
    puVar7 = unaff_x20;
LAB_10b2e8120:
    unaff_x20 = puVar7;
    uVar15 = (long)unaff_x19 - (long)unaff_x20;
    uVar13 = (long)uVar15 / 0x28;
    uVar6 = uVar13 == 5;
    switch(uVar13) {
    case 0:
    case 1:
      goto LAB_10b2e8444;
    case 2:
      uVar6 = unaff_x19[-3] == unaff_x20[2];
      if ((long)unaff_x19[-3] < (long)unaff_x20[2]) {
        func_0x00010b2e8ff8();
        uVar18 = unaff_x19[-4];
        uVar14 = unaff_x19[-5];
        uVar30 = unaff_x19[-2];
        uVar29 = unaff_x19[-3];
        func_0x00010b2e9020(unaff_x19[-1]);
        unaff_x19[-1] = extraout_x8_03;
        unaff_x19[-2] = uVar30;
        unaff_x19[-3] = uVar29;
        unaff_x19[-4] = uVar18;
        unaff_x19[-5] = uVar14;
      }
      goto LAB_10b2e8444;
    case 3:
      func_0x000107c35bf4(extraout_x8);
      if (!(bool)uVar6) goto LAB_10b2e8870;
      param_2 = unaff_x20 + 5;
      func_0x00010b2e8fa4();
      goto code_r0x00010b2e8874;
    case 4:
      func_0x000107c35bf4(extraout_x8);
      if ((bool)uVar6) {
        puVar10 = unaff_x20 + 10;
        func_0x00010b2e8fa4(unaff_x20,unaff_x20 + 5);
        func_0x000107c35c00();
        FUN_10b2e8874();
        lVar12 = puVar11[2];
        lVar21 = puVar10[2];
        cVar4 = SBORROW8(lVar12,lVar21);
        cVar5 = lVar12 - lVar21 < 0;
        if (((lVar12 < lVar21) && (func_0x00010b2e8f00(), cVar5 != cVar4)) &&
           (func_0x00010b2e8f30(), cVar5 != cVar4)) {
          func_0x00010b2e8f60();
        }
        return;
      }
      goto LAB_10b2e8870;
    case 5:
      func_0x000107c35bf4(extraout_x8);
      if ((bool)uVar6) {
        puVar10 = unaff_x20 + 10;
        puVar7 = unaff_x20 + 0xf;
        func_0x00010b2e8fa4(unaff_x20,unaff_x20 + 5);
        func_0x000107c35c00();
        FUN_10b2e893c();
        if ((long)puVar11[2] < (long)puVar7[2]) {
          uVar30 = puVar7[1];
          uVar29 = *puVar7;
          uVar25 = puVar7[3];
          uVar22 = puVar7[2];
          uVar14 = puVar7[4];
          uVar18 = puVar11[4];
          uVar28 = *puVar11;
          uVar27 = puVar11[3];
          uVar26 = puVar11[2];
          puVar7[1] = puVar11[1];
          *puVar7 = uVar28;
          puVar7[3] = uVar27;
          puVar7[2] = uVar26;
          puVar7[4] = uVar18;
          puVar11[4] = uVar14;
          puVar11[1] = uVar30;
          *puVar11 = uVar29;
          puVar11[3] = uVar25;
          puVar11[2] = uVar22;
          lVar12 = puVar7[2];
          lVar21 = puVar10[2];
          cVar4 = SBORROW8(lVar12,lVar21);
          cVar5 = lVar12 - lVar21 < 0;
          if (((lVar12 < lVar21) && (func_0x00010b2e8f00(), cVar5 != cVar4)) &&
             (func_0x00010b2e8f30(), cVar5 != cVar4)) {
            func_0x00010b2e8f60();
          }
        }
        return;
      }
      goto LAB_10b2e8870;
    }
    if ((long)uVar15 < 0x3c0) {
      uVar6 = unaff_x20 == unaff_x19;
      if ((param_4 & 1) == 0) {
        puVar7 = unaff_x20;
        if (!(bool)uVar6) {
          while( true ) {
            unaff_x20 = unaff_x20 + 5;
            uVar6 = 1;
            if (puVar7 + 5 == unaff_x19) break;
            lVar12 = puVar7[7];
            plVar1 = puVar7 + 2;
            puVar7 = puVar7 + 5;
            if (lVar12 < *plVar1) {
              do {
                unaff_x20[1] = unaff_x20[-4];
                *unaff_x20 = unaff_x20[-5];
                unaff_x20[3] = unaff_x20[-2];
                unaff_x20[2] = unaff_x20[-3];
                unaff_x20[4] = unaff_x20[-1];
                plVar1 = unaff_x20 + -8;
                unaff_x20 = unaff_x20 + -5;
              } while (lVar12 < *plVar1);
              func_0x00010b2e8fc0();
              puVar7 = extraout_x9_02;
              unaff_x20 = extraout_x8_05;
            }
          }
        }
        break;
      }
      if ((bool)uVar6) break;
      lVar12 = 0;
      puVar7 = unaff_x20;
      goto LAB_10b2e853c;
    }
    if (param_3 == (undefined8 *)0x0) {
      uVar6 = 1;
      if (unaff_x20 == unaff_x19) break;
      uVar17 = uVar13 - 2 >> 1;
      uVar15 = uVar17;
      goto LAB_10b2e85d4;
    }
    param_1 = unaff_x20 + (uVar13 >> 1) * 5;
    if (uVar15 < 0x1401) {
      param_2 = unaff_x20;
      func_0x00010b2e8ff0();
    }
    else {
      func_0x00010b2e8ff0(unaff_x20,param_1);
      puVar7 = param_1 + -5;
      FUN_10b2e8874(unaff_x20 + 5,puVar7,unaff_x19 + -10);
      FUN_10b2e8874(unaff_x20 + 10,param_1 + 5,unaff_x19 + -0xf);
      puVar10 = param_1 + 5;
      param_2 = param_1;
      FUN_10b2e8874();
      func_0x00010b2e8ff8();
      uVar18 = param_1[1];
      uVar14 = *param_1;
      uVar30 = param_1[3];
      uVar29 = param_1[2];
      func_0x00010b2e9020(param_1[4]);
      param_1[4] = extraout_x8_00;
      param_1[1] = uVar18;
      *param_1 = uVar14;
      param_1[3] = uVar30;
      param_1[2] = uVar29;
      param_1 = puVar7;
    }
    param_3 = (undefined8 *)((long)param_3 + -1);
    if ((param_4 & 1) == 0) {
      lVar12 = unaff_x20[2];
      if (lVar12 <= (long)unaff_x20[-3]) {
        uVar30 = unaff_x20[1];
        uVar29 = *unaff_x20;
        uVar18 = unaff_x20[4];
        uVar14 = unaff_x20[3];
        puVar9 = unaff_x20;
        if (lVar12 < (long)unaff_x19[-3]) {
          do {
            puVar7 = puVar9 + 5;
            plVar1 = puVar9 + 7;
            puVar9 = puVar7;
          } while (*plVar1 <= lVar12);
        }
        else {
          do {
            puVar7 = puVar9 + 5;
            if (unaff_x19 <= puVar7) break;
            plVar1 = puVar9 + 7;
            puVar9 = puVar7;
          } while (*plVar1 <= lVar12);
        }
        puVar9 = unaff_x19;
        puVar8 = unaff_x19;
        if (puVar7 < unaff_x19) {
          do {
            puVar9 = puVar8 + -5;
            plVar1 = puVar8 + -3;
            puVar8 = puVar9;
          } while (lVar12 < *plVar1);
        }
        while (puVar7 < puVar9) {
          uVar27 = puVar7[1];
          uVar25 = *puVar7;
          uVar33 = puVar7[3];
          uVar31 = puVar7[2];
          uVar22 = puVar7[4];
          uVar28 = puVar9[1];
          uVar26 = *puVar9;
          uVar34 = puVar9[3];
          uVar32 = puVar9[2];
          puVar7[4] = puVar9[4];
          puVar7[1] = uVar28;
          *puVar7 = uVar26;
          puVar7[3] = uVar34;
          puVar7[2] = uVar32;
          puVar9[4] = uVar22;
          puVar9[1] = uVar27;
          *puVar9 = uVar25;
          puVar9[3] = uVar33;
          puVar9[2] = uVar31;
          do {
            plVar1 = puVar7 + 7;
            puVar7 = puVar7 + 5;
          } while (*plVar1 <= lVar12);
          do {
            plVar1 = puVar9 + -3;
            puVar9 = puVar9 + -5;
          } while (lVar12 < *plVar1);
        }
        puVar9 = puVar7 + -5;
        if (unaff_x20 != puVar9) {
          uVar25 = puVar7[-4];
          uVar22 = *puVar9;
          uVar27 = puVar7[-2];
          uVar26 = puVar7[-3];
          unaff_x20[4] = puVar7[-1];
          unaff_x20[1] = uVar25;
          *unaff_x20 = uVar22;
          unaff_x20[3] = uVar27;
          unaff_x20[2] = uVar26;
        }
        param_4 = 0;
        puVar7[-4] = uVar30;
        *puVar9 = uVar29;
        puVar7[-3] = lVar12;
        puVar7[-1] = uVar18;
        puVar7[-2] = uVar14;
        goto LAB_10b2e8120;
      }
    }
    else {
      lVar12 = unaff_x20[2];
    }
    uVar30 = unaff_x20[1];
    uVar29 = *unaff_x20;
    uVar18 = unaff_x20[4];
    uVar14 = unaff_x20[3];
    lVar21 = 0;
    do {
      lVar19 = lVar21;
      lVar21 = lVar19 + 0x28;
    } while (*(long *)((long)unaff_x20 + lVar19 + 0x38) < lVar12);
    puVar7 = (undefined8 *)((long)unaff_x20 + lVar21);
    cVar4 = SBORROW8(lVar21,0x28);
    cVar5 = lVar19 < 0;
    puVar9 = unaff_x19;
    if (lVar21 == 0x28) {
      do {
        puVar8 = puVar9;
        cVar4 = SBORROW8((long)puVar7,(long)puVar8);
        cVar5 = (long)puVar7 - (long)puVar8 < 0;
        puVar20 = puVar8;
        puVar16 = puVar7;
        if (puVar8 <= puVar7) break;
        func_0x00010b2e900c();
        lVar12 = extraout_x8_02;
        puVar7 = extraout_x9_00;
        puVar8 = extraout_x10_00;
        puVar9 = extraout_x11;
        puVar20 = extraout_x10_00;
        puVar16 = extraout_x9_00;
      } while (cVar5 == cVar4);
    }
    else {
      do {
        func_0x00010b2e900c();
        puVar8 = extraout_x10;
        puVar7 = extraout_x9;
        puVar20 = extraout_x10;
        puVar16 = extraout_x9;
        lVar12 = extraout_x8_01;
      } while (cVar5 == cVar4);
    }
    while (puVar7 < puVar8) {
      uVar27 = puVar7[1];
      uVar25 = *puVar7;
      uVar33 = puVar7[3];
      uVar31 = puVar7[2];
      uVar22 = puVar7[4];
      uVar28 = puVar8[1];
      uVar26 = *puVar8;
      uVar34 = puVar8[3];
      uVar32 = puVar8[2];
      puVar7[4] = puVar8[4];
      puVar7[1] = uVar28;
      *puVar7 = uVar26;
      puVar7[3] = uVar34;
      puVar7[2] = uVar32;
      puVar8[4] = uVar22;
      puVar8[1] = uVar27;
      *puVar8 = uVar25;
      puVar8[3] = uVar33;
      puVar8[2] = uVar31;
      do {
        plVar1 = puVar7 + 7;
        puVar7 = puVar7 + 5;
      } while (*plVar1 < lVar12);
      do {
        plVar1 = puVar8 + -3;
        puVar8 = puVar8 + -5;
      } while (lVar12 <= *plVar1);
    }
    puVar9 = puVar7 + -5;
    if (unaff_x20 != puVar9) {
      uVar25 = puVar7[-4];
      uVar22 = *puVar9;
      uVar27 = puVar7[-2];
      uVar26 = puVar7[-3];
      unaff_x20[4] = puVar7[-1];
      unaff_x20[1] = uVar25;
      *unaff_x20 = uVar22;
      unaff_x20[3] = uVar27;
      unaff_x20[2] = uVar26;
    }
    puVar7[-4] = uVar30;
    *puVar9 = uVar29;
    puVar7[-3] = lVar12;
    puVar7[-1] = uVar18;
    puVar7[-2] = uVar14;
    uVar6 = puVar16 == puVar20;
    if (puVar16 < puVar20) goto LAB_10b2e82f8;
    puVar8 = unaff_x20;
    FUN_10b2e8a30(unaff_x20,puVar9);
    param_1 = puVar7;
    param_2 = unaff_x19;
    FUN_10b2e8a30();
    if ((int)param_1 == 0) goto code_r0x00010b2e82f4;
    unaff_x19 = puVar9;
  } while (((ulong)puVar8 & 1) == 0);
  goto LAB_10b2e8444;
LAB_10b2e853c:
  puVar11 = puVar7 + 5;
  uVar6 = 1;
  if (puVar11 == unaff_x19) goto LAB_10b2e8444;
  lVar21 = puVar7[7];
  if (lVar21 < (long)puVar7[2]) {
    do {
      puVar7 = (undefined8 *)((long)unaff_x20 + lVar12);
      puVar7[6] = puVar7[1];
      puVar7[5] = *puVar7;
      puVar7[8] = puVar7[3];
      puVar7[7] = puVar7[2];
      puVar7[9] = puVar7[4];
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -0x28;
    } while (lVar21 < (long)puVar7[-3]);
    func_0x00010b2e8fc0();
    lVar12 = extraout_x8_04;
    puVar11 = extraout_x9_01;
  }
  lVar12 = lVar12 + 0x28;
  puVar7 = puVar11;
  goto LAB_10b2e853c;
code_r0x00010b2e82f4:
  if (((ulong)puVar8 & 1) == 0) {
LAB_10b2e82f8:
    puVar10 = param_3;
    FUN_10b2e80d4();
    param_4 = 0;
    param_1 = unaff_x20;
    param_2 = puVar9;
  }
  goto LAB_10b2e8120;
LAB_10b2e85d4:
  do {
    if ((long)uVar15 <= (long)uVar17) {
      uVar23 = (uVar15 & 0x3fffffffffffffff) << 1 | 1;
      puVar7 = unaff_x20 + uVar23 * 5;
      uVar3 = uVar15 * 2 + 2;
      uVar24 = uVar23;
      if ((long)uVar3 < (long)uVar13) {
        plVar1 = puVar7 + 2;
        plVar2 = puVar7 + 7;
        lVar12 = 0x28;
        if (*plVar2 <= *plVar1) {
          lVar12 = 0;
        }
        puVar7 = (undefined8 *)((long)puVar7 + lVar12);
        uVar24 = uVar3;
        if (*plVar2 <= *plVar1) {
          uVar24 = uVar23;
        }
      }
      puVar11 = unaff_x20 + uVar15 * 5;
      lVar12 = puVar11[2];
      if (lVar12 <= (long)puVar7[2]) {
        uVar29 = puVar11[1];
        uVar14 = *puVar11;
        uVar30 = puVar11[4];
        uVar18 = puVar11[3];
        do {
          puVar9 = puVar7;
          uVar25 = puVar9[1];
          uVar22 = *puVar9;
          uVar27 = puVar9[3];
          uVar26 = puVar9[2];
          puVar11[4] = puVar9[4];
          puVar11[1] = uVar25;
          *puVar11 = uVar22;
          puVar11[3] = uVar27;
          puVar11[2] = uVar26;
          if ((long)uVar17 < (long)uVar24) break;
          uVar23 = uVar24 << 1 | 1;
          puVar7 = unaff_x20 + uVar23 * 5;
          uVar3 = uVar24 * 2 + 2;
          uVar24 = uVar23;
          if ((long)uVar3 < (long)uVar13) {
            plVar1 = puVar7 + 2;
            param_1 = (undefined8 *)puVar7[7];
            lVar21 = 0x28;
            if ((long)param_1 <= *plVar1) {
              lVar21 = 0;
            }
            puVar7 = (undefined8 *)((long)puVar7 + lVar21);
            uVar24 = uVar3;
            if ((long)param_1 <= *plVar1) {
              uVar24 = uVar23;
            }
          }
          puVar11 = puVar9;
        } while (lVar12 <= (long)puVar7[2]);
        puVar9[1] = uVar29;
        *puVar9 = uVar14;
        puVar9[2] = lVar12;
        puVar9[4] = uVar30;
        puVar9[3] = uVar18;
      }
    }
    uVar15 = uVar15 - 1;
  } while (-1 < (long)uVar15);
  while( true ) {
    uVar6 = uVar13 - 2 == 0;
    if ((long)uVar13 < 2) break;
    uVar29 = unaff_x20[1];
    uVar18 = *unaff_x20;
    uVar22 = unaff_x20[3];
    uVar30 = unaff_x20[2];
    uVar14 = unaff_x20[4];
    puVar7 = unaff_x20;
    uVar15 = 0;
    do {
      uVar3 = uVar15 << 1 | 1;
      uVar17 = uVar15 * 2 + 2;
      puVar11 = puVar7 + uVar15 * 5 + 5;
      uVar23 = uVar3;
      if (((long)uVar17 < (long)uVar13) &&
         (puVar11 = puVar7 + uVar15 * 5 + 10, uVar23 = uVar17,
         (long)puVar7[uVar15 * 5 + 0xc] <= (long)puVar7[uVar15 * 5 + 7])) {
        puVar11 = puVar7 + uVar15 * 5 + 5;
        uVar23 = uVar3;
      }
      uVar26 = puVar11[1];
      uVar25 = *puVar11;
      uVar28 = puVar11[3];
      uVar27 = puVar11[2];
      puVar7[4] = puVar11[4];
      puVar7[1] = uVar26;
      *puVar7 = uVar25;
      puVar7[3] = uVar28;
      puVar7[2] = uVar27;
      puVar7 = puVar11;
      uVar15 = uVar23;
    } while ((long)uVar23 <= (long)(uVar13 - 2 >> 1));
    puVar7 = unaff_x19 + -5;
    if (puVar11 == puVar7) {
      puVar11[4] = uVar14;
      puVar11[1] = uVar29;
      *puVar11 = uVar18;
      puVar11[3] = uVar22;
      puVar11[2] = uVar30;
    }
    else {
      uVar26 = unaff_x19[-4];
      uVar25 = *puVar7;
      uVar28 = unaff_x19[-2];
      uVar27 = unaff_x19[-3];
      puVar11[4] = unaff_x19[-1];
      puVar11[1] = uVar26;
      *puVar11 = uVar25;
      puVar11[3] = uVar28;
      puVar11[2] = uVar27;
      unaff_x19[-1] = uVar14;
      unaff_x19[-4] = uVar29;
      *puVar7 = uVar18;
      unaff_x19[-2] = uVar22;
      unaff_x19[-3] = uVar30;
      uVar15 = (long)puVar11 + (0x28 - (long)unaff_x20);
      if (0x28 < (long)uVar15) {
        uVar15 = uVar15 / 0x28 - 2 >> 1;
        lVar12 = puVar11[2];
        if ((long)(unaff_x20 + uVar15 * 5)[2] < lVar12) {
          uVar30 = puVar11[1];
          uVar29 = *puVar11;
          uVar18 = puVar11[4];
          uVar14 = puVar11[3];
          puVar9 = unaff_x20 + uVar15 * 5;
          do {
            puVar8 = puVar9;
            uVar25 = puVar8[1];
            uVar22 = *puVar8;
            uVar27 = puVar8[3];
            uVar26 = puVar8[2];
            puVar11[4] = puVar8[4];
            puVar11[1] = uVar25;
            *puVar11 = uVar22;
            puVar11[3] = uVar27;
            puVar11[2] = uVar26;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1 >> 1;
            puVar11 = puVar8;
            puVar9 = unaff_x20 + uVar15 * 5;
          } while ((long)(unaff_x20 + uVar15 * 5)[2] < lVar12);
          puVar8[1] = uVar30;
          *puVar8 = uVar29;
          puVar8[2] = lVar12;
          puVar8[4] = uVar18;
          puVar8[3] = uVar14;
        }
      }
    }
    uVar13 = uVar13 - 1;
    unaff_x19 = puVar7;
  }
LAB_10b2e8444:
  func_0x000107c35bf4(extraout_x8);
  if ((bool)uVar6) {
    func_0x00010b2e8fa4(unaff_x30);
    return;
  }
LAB_10b2e8870:
  puVar11 = puVar10;
  unaff_x20 = param_1;
  ___stack_chk_fail();
code_r0x00010b2e8874:
  lVar12 = param_2[2];
  if (lVar12 < (long)unaff_x20[2]) {
    if ((long)puVar11[2] < lVar12) {
      uVar30 = unaff_x20[1];
      uVar29 = *unaff_x20;
      uVar25 = unaff_x20[3];
      uVar22 = unaff_x20[2];
      uVar14 = unaff_x20[4];
      uVar18 = puVar11[4];
      uVar28 = *puVar11;
      uVar27 = puVar11[3];
      uVar26 = puVar11[2];
      unaff_x20[1] = puVar11[1];
      *unaff_x20 = uVar28;
      unaff_x20[3] = uVar27;
      unaff_x20[2] = uVar26;
      unaff_x20[4] = uVar18;
    }
    else {
      func_0x00010b2e9034();
      if ((long)param_2[2] <= (long)puVar11[2]) {
        return;
      }
      uVar30 = param_2[1];
      uVar29 = *param_2;
      uVar25 = param_2[3];
      uVar22 = param_2[2];
      uVar14 = param_2[4];
      uVar18 = puVar11[4];
      uVar28 = *puVar11;
      uVar27 = puVar11[3];
      uVar26 = puVar11[2];
      param_2[1] = puVar11[1];
      *param_2 = uVar28;
      param_2[3] = uVar27;
      param_2[2] = uVar26;
      param_2[4] = uVar18;
    }
    puVar11[4] = uVar14;
    puVar11[1] = uVar30;
    *puVar11 = uVar29;
    puVar11[3] = uVar25;
    puVar11[2] = uVar22;
  }
  else if ((long)puVar11[2] < lVar12) {
    uVar30 = param_2[1];
    uVar29 = *param_2;
    uVar25 = param_2[3];
    uVar22 = param_2[2];
    uVar14 = param_2[4];
    uVar18 = puVar11[4];
    uVar28 = *puVar11;
    uVar27 = puVar11[3];
    uVar26 = puVar11[2];
    param_2[1] = puVar11[1];
    *param_2 = uVar28;
    param_2[3] = uVar27;
    param_2[2] = uVar26;
    param_2[4] = uVar18;
    puVar11[4] = uVar14;
    puVar11[1] = uVar30;
    *puVar11 = uVar29;
    puVar11[3] = uVar25;
    puVar11[2] = uVar22;
    if ((long)param_2[2] < (long)unaff_x20[2]) {
      func_0x00010b2e9034();
    }
  }
  return;
}



/* Entry: 10b2e8874; end: 10b2e893b;  */

void FUN_10b2e8874(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = param_2[2];
  if (lVar1 < (long)param_1[2]) {
    if ((long)param_3[2] < lVar1) {
      uVar5 = param_1[1];
      uVar4 = *param_1;
      uVar7 = param_1[3];
      uVar6 = param_1[2];
      uVar2 = param_1[4];
      uVar3 = param_3[4];
      uVar10 = *param_3;
      uVar9 = param_3[3];
      uVar8 = param_3[2];
      param_1[1] = param_3[1];
      *param_1 = uVar10;
      param_1[3] = uVar9;
      param_1[2] = uVar8;
      param_1[4] = uVar3;
    }
    else {
      func_0x00010b2e9034();
      if ((long)param_2[2] <= (long)param_3[2]) {
        return;
      }
      uVar5 = param_2[1];
      uVar4 = *param_2;
      uVar7 = param_2[3];
      uVar6 = param_2[2];
      uVar2 = param_2[4];
      uVar3 = param_3[4];
      uVar10 = *param_3;
      uVar9 = param_3[3];
      uVar8 = param_3[2];
      param_2[1] = param_3[1];
      *param_2 = uVar10;
      param_2[3] = uVar9;
      param_2[2] = uVar8;
      param_2[4] = uVar3;
    }
    param_3[4] = uVar2;
    param_3[1] = uVar5;
    *param_3 = uVar4;
    param_3[3] = uVar7;
    param_3[2] = uVar6;
  }
  else if ((long)param_3[2] < lVar1) {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    uVar2 = param_2[4];
    uVar3 = param_3[4];
    uVar10 = *param_3;
    uVar9 = param_3[3];
    uVar8 = param_3[2];
    param_2[1] = param_3[1];
    *param_2 = uVar10;
    param_2[3] = uVar9;
    param_2[2] = uVar8;
    param_2[4] = uVar3;
    param_3[4] = uVar2;
    param_3[1] = uVar5;
    *param_3 = uVar4;
    param_3[3] = uVar7;
    param_3[2] = uVar6;
    if ((long)param_2[2] < (long)param_1[2]) {
      func_0x00010b2e9034();
    }
  }
  return;
}



/* Entry: 10b2e893c; end: 10b2e8997;  */

void FUN_10b2e893c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c35c00();
  FUN_10b2e8874();
  lVar3 = *(long *)(param_4 + 0x10);
  lVar4 = *(long *)(param_3 + 0x10);
  cVar1 = SBORROW8(lVar3,lVar4);
  cVar2 = lVar3 - lVar4 < 0;
  if (((lVar3 < lVar4) && (FUN_10b2e8f00(), cVar2 != cVar1)) &&
     (func_0x00010b2e8f30(), cVar2 != cVar1)) {
    func_0x00010b2e8f60();
  }
  return;
}



/* Entry: 10b2e8998; end: 10b2e8a2f;  */

void FUN_10b2e8998(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x000107c35c00();
  FUN_10b2e893c();
  if ((long)param_5[2] < (long)param_4[2]) {
    uVar8 = param_4[1];
    uVar7 = *param_4;
    uVar10 = param_4[3];
    uVar9 = param_4[2];
    uVar3 = param_4[4];
    uVar5 = param_5[4];
    uVar13 = *param_5;
    uVar12 = param_5[3];
    uVar11 = param_5[2];
    param_4[1] = param_5[1];
    *param_4 = uVar13;
    param_4[3] = uVar12;
    param_4[2] = uVar11;
    param_4[4] = uVar5;
    param_5[4] = uVar3;
    param_5[1] = uVar8;
    *param_5 = uVar7;
    param_5[3] = uVar10;
    param_5[2] = uVar9;
    lVar4 = param_4[2];
    lVar6 = *(long *)(param_3 + 0x10);
    cVar1 = SBORROW8(lVar4,lVar6);
    cVar2 = lVar4 - lVar6 < 0;
    if (((lVar4 < lVar6) && (FUN_10b2e8f00(), cVar2 != cVar1)) &&
       (func_0x00010b2e8f30(), cVar2 != cVar1)) {
      func_0x00010b2e8f60();
    }
  }
  return;
}



/* Entry: 10b2e8a30; end: 10b2e8bf7;  */

ulong FUN_10b2e8a30(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar3 = param_1;
  puVar5 = param_2;
  func_0x000107c35c14();
  lVar7 = ((long)puVar5 - (long)puVar3) / 0x28;
  uVar2 = lVar7 == 5;
  uVar4 = 1;
  uStack_38 = extraout_x8;
  switch(lVar7) {
  case 0:
  case 1:
    goto LAB_10b2e8bc4;
  case 2:
    uVar2 = param_2[-3] == param_1[2];
    if ((long)param_2[-3] < (long)param_1[2]) {
      uVar14 = param_1[1];
      uVar13 = *param_1;
      uVar16 = param_1[3];
      uVar15 = param_1[2];
      uVar6 = param_1[4];
      uVar9 = param_2[-1];
      uVar18 = param_2[-2];
      uVar17 = param_2[-3];
      uVar19 = param_2[-5];
      param_1[1] = param_2[-4];
      *param_1 = uVar19;
      param_1[3] = uVar18;
      param_1[2] = uVar17;
      param_1[4] = uVar9;
      param_2[-1] = uVar6;
      param_2[-2] = uVar16;
      param_2[-3] = uVar15;
      param_2[-4] = uVar14;
      param_2[-5] = uVar13;
    }
    goto LAB_10b2e8bc4;
  case 3:
    FUN_10b2e8874(param_1,param_1 + 5,param_2 + -5);
    break;
  case 4:
    FUN_10b2e893c(param_1,param_1 + 5,param_1 + 10,param_2 + -5);
    break;
  case 5:
    FUN_10b2e8998(param_1,param_1 + 5,param_1 + 10,param_1 + 0xf,param_2 + -5);
    break;
  default:
    func_0x00010b2e8ff0(param_1,param_1 + 5);
    lVar7 = 0;
    iVar8 = 0;
    puVar3 = param_1 + 0xf;
    puVar5 = param_1 + 10;
    while (puVar10 = puVar3, uVar2 = puVar10 == param_2, !(bool)uVar2) {
      lVar11 = puVar10[2];
      if (lVar11 < (long)puVar5[2]) {
        uStack_88 = puVar10[1];
        uStack_90 = *puVar10;
        uStack_48 = puVar10[4];
        uStack_50 = puVar10[3];
        lVar1 = lVar7;
        do {
          lVar12 = lVar1;
          *(undefined8 *)((long)param_1 + lVar12 + 0x80) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x58);
          *(undefined8 *)((long)param_1 + lVar12 + 0x78) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x50);
          *(undefined8 *)((long)param_1 + lVar12 + 0x90) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x68);
          *(undefined8 *)((long)param_1 + lVar12 + 0x88) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x60);
          *(undefined8 *)((long)param_1 + lVar12 + 0x98) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x70);
          puVar3 = param_1;
          if (lVar12 == -0x50) goto LAB_10b2e8b7c;
          lVar1 = lVar12 + -0x28;
        } while (lVar11 < *(long *)((long)param_1 + lVar12 + 0x38));
        puVar3 = (undefined8 *)((long)param_1 + lVar12 + 0x50);
LAB_10b2e8b7c:
        puVar3[1] = uStack_88;
        *puVar3 = uStack_90;
        puVar3[2] = lVar11;
        puVar3[4] = uStack_48;
        puVar3[3] = uStack_50;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          uVar2 = puVar10 + 5 == param_2;
          uVar4 = (ulong)(byte)uVar2;
          goto LAB_10b2e8bc4;
        }
      }
      lVar7 = lVar7 + 0x28;
      puVar5 = puVar10;
      puVar3 = puVar10 + 5;
    }
  }
  uVar4 = 1;
LAB_10b2e8bc4:
  func_0x000107c35bf4(uStack_38);
  if ((bool)uVar2) {
    return uVar4;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_10b2e8bf8;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010b2e8fe4();
  pcStack_a8 = FUN_10b2e8c04;
  uStack_c8 = uVar4;
  puStack_c0 = param_2;
  puStack_b8 = param_1;
  puStack_b0 = (undefined1 *)&puStack_a0;
  FUN_10b2e8c30(&uStack_c8);
  return uVar4;
}



/* Entry: 10b2e8bf8; end: 10b2e8c03;  */

undefined8 FUN_10b2e8bf8(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b2e8fe4();
  uStack_38 = param_1;
  FUN_10b2e8c30(&uStack_38);
  return param_1;
}



/* Entry: 10b2e8c04; end: 10b2e8c2f;  */

undefined8 FUN_10b2e8c04(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b2e8c30(&uStack_28);
  return param_1;
}



/* Entry: 10b2e8c30; end: 10b2e8c47;  */

void FUN_10b2e8c30(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2e8c48; end: 10b2e8d3b;  */

undefined8 FUN_10b2e8c48(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b2e80bc(&uStack_28);
  return param_1;
}



/* Entry: 10b2e8d3c; end: 10b2e8e57;  */

void FUN_10b2e8d3c(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_10b2e8df0;
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
    if (uVar8 == uVar3) goto LAB_10b2e8df0;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10b2e8df0:
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



/* Entry: 10b2e8e58; end: 10b2e8ee3;  */

void FUN_10b2e8e58(long param_1,long param_2)

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



/* Entry: 10b2e8ee4; end: 10b2e8eff;  */

void FUN_10b2e8ee4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x00010b2e8c74(param_1,*param_3);
  return;
}



/* Entry: 10b2e8f00; end: 10b2e9057;  */

void FUN_10b2e8f00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = unaff_x21[1];
  uVar3 = *unaff_x21;
  uVar6 = unaff_x21[3];
  uVar5 = unaff_x21[2];
  uVar1 = unaff_x21[4];
  uVar2 = unaff_x22[4];
  uVar9 = *unaff_x22;
  uVar8 = unaff_x22[3];
  uVar7 = unaff_x22[2];
  unaff_x21[1] = unaff_x22[1];
  *unaff_x21 = uVar9;
  unaff_x21[3] = uVar8;
  unaff_x21[2] = uVar7;
  unaff_x21[4] = uVar2;
  unaff_x22[4] = uVar1;
  unaff_x22[1] = uVar4;
  *unaff_x22 = uVar3;
  unaff_x22[3] = uVar6;
  unaff_x22[2] = uVar5;
  return;
}



/* Entry: 10b2e9058; end: 10b2e964f;  */

long ** FUN_10b2e9058(long **param_1,int param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int extraout_w8;
  long *plVar7;
  long lVar8;
  long **pplVar9;
  undefined **ppuVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  float fVar17;
  undefined *puVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined *puVar22;
  long *plStack_100;
  long *plStack_f8;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(char *)(param_1 + 1) != '\x01') || (plVar11 = param_1[2], plVar11 == (long *)0x0)) {
    pplVar9 = (long **)0xffffffffffffffff;
    goto LAB_10b2e94dc;
  }
  uVar12 = (ulong)*(uint *)(param_1 + 5);
  if (*(char *)(param_3 + 0x18) == '\x01') {
    ppuStack_d0 = (undefined **)((ulong)ppuStack_d0 & 0xffffffffffffff00);
    ppuStack_b8 = (undefined **)((ulong)ppuStack_b8 & 0xffffffffffffff00);
    __ZNSt3__15mutex4lockEv(plVar11 + 0xc);
    plVar13 = (long *)plVar11[5];
    if ((plVar13 != (long *)0x0) && (plVar2 = plVar11 + 7, *plVar2 != 0)) {
      func_0x000107c278c4(plVar2,param_3);
      uVar14 = (long)plVar13 - 1;
      if (((ulong)plVar13 & uVar14) == 0) {
        plVar15 = (long *)((ulong)plVar2 & uVar14);
      }
      else {
        plVar15 = plVar2;
        if (plVar13 <= plVar2) {
          uVar1 = 0;
          if (plVar13 != (long *)0x0) {
            uVar1 = (ulong)plVar2 / (ulong)plVar13;
          }
          plVar15 = (long *)((long)plVar2 - uVar1 * (long)plVar13);
        }
      }
      plVar16 = *(long **)(plVar11[4] + (long)plVar15 * 8);
      if (plVar16 != (long *)0x0) {
LAB_10b2e91e8:
        while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
          plVar7 = (long *)plVar16[1];
          if (plVar2 != plVar7) goto LAB_10b2e9210;
          lVar3 = (long)(plVar16 + 2);
          func_0x000107c278d0(lVar3,param_3);
          if ((int)lVar3 != 0) {
            plVar13 = (long *)plVar16[5];
            if (plVar11 + 1 != plVar13) {
              uVar14 = plVar13[0xe];
              if (uVar14 < uVar12) {
                func_0x00010b2eb09c();
              }
              else {
                if ((char)ppuStack_b8 == '\x01') {
                  if (ppuStack_d0 != (undefined **)0x0) {
                    __ZdlPv();
                  }
                  func_0x00010b2eb0a8();
                }
                else {
                  func_0x00010b2eb0a8();
                  ppuStack_b8 = (undefined **)CONCAT71(ppuStack_b8._1_7_,1);
                }
                FUN_10b2e8c48(&ppuStack_e8);
                if (plVar13[0xe] == 0) {
                  lVar3 = 0;
                }
                else {
                  lVar3 = plVar13[0xc];
                }
                while (lVar3 != 0) {
                  if (*(int *)(lVar3 + 0xc) == 0) {
                    func_0x00010b2eb018();
                  }
                  lVar8 = lVar3 + 0x28;
                  if (lVar8 == plVar13[0xb]) {
                    lVar8 = plVar13[10];
                  }
                  lVar3 = 0;
                  if (lVar8 != plVar13[0xd]) {
                    lVar3 = lVar8;
                  }
                }
              }
              func_0x00010b2eafa8();
              if (uVar12 <= uVar14) {
                if ((char)ppuStack_b8 == '\x01') {
                  func_0x00010b2eb00c();
                }
                else {
                  func_0x00010b2eb09c();
                }
              }
              goto LAB_10b2e9268;
            }
            break;
          }
        }
      }
    }
LAB_10b2e9260:
    func_0x00010b2eb09c();
    func_0x00010b2eafa8();
LAB_10b2e9268:
    FUN_10b2e9754(&ppuStack_d0);
  }
  else {
    ppuStack_d0 = (undefined **)0x0;
    ppuStack_c8 = (undefined **)0x0;
    ppuStack_c0 = (undefined **)0x0;
    __ZNSt3__15mutex4lockEv(plVar11 + 0xc);
    for (plVar13 = plVar11 + 2; plVar13 = (long *)*plVar13, plVar13 != plVar11 + 1;
        plVar13 = plVar13 + 1) {
      if (plVar13[0xe] == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = plVar13[0xc];
      }
      while (lVar3 != 0) {
        if (*(int *)(lVar3 + 0xc) == 0) {
          func_0x00010b2eb018();
        }
        lVar8 = lVar3 + 0x28;
        if (lVar8 == plVar13[0xb]) {
          lVar8 = plVar13[10];
        }
        lVar3 = 0;
        if (lVar8 != plVar13[0xd]) {
          lVar3 = lVar8;
        }
      }
    }
    func_0x00010b2eafa8();
    if ((ulong)(((long)ppuStack_c8 - (long)ppuStack_d0) / 0x28) < uVar12) {
      func_0x00010b2eb09c();
    }
    else {
      if (ppuStack_d0 != ppuStack_c8) {
        func_0x00010b2eb088();
        FUN_10b2e9774();
      }
      func_0x00010b2eb00c();
    }
    FUN_10b2e8c48(&ppuStack_d0);
  }
  if (param_2 == 1) {
    if (1 < (ulong)(((long)plStack_f8 - (long)plStack_100) / 0x18)) {
      ppuVar6 = (undefined **)0x0;
      fVar17 = *(float *)(param_1 + 3);
      dVar19 = (double)(long)param_1[4];
      ppuStack_e8 = (undefined **)0x0;
      ppuStack_e0 = (undefined **)0x0;
      ppuStack_d8 = (undefined **)0x0;
      dVar20 = 0.0;
      for (plVar11 = plStack_100; plVar11 != plStack_f8; plVar11 = plVar11 + 3) {
        if (0.0 < (double)plVar11[2]) {
          puVar18 = (undefined *)
                    SQRT((double)plVar11[2] * ((double)(plVar11[1] - *plVar11) / 1000000000.0));
          dVar21 = dVar20 + (double)puVar18;
          puVar22 = (undefined *)((double)puVar18 - (dVar21 - dVar19));
          if (dVar21 <= dVar19) {
            puVar22 = puVar18;
          }
          if (ppuVar6 < ppuStack_d8) {
            *ppuVar6 = puVar22;
            ppuVar6[1] = (undefined *)plVar11[2];
            ppuVar6 = ppuVar6 + 2;
          }
          else {
            pppuVar4 = &ppuStack_e8;
            func_0x0001077badb4(pppuVar4,((long)ppuVar6 - (long)ppuStack_e8 >> 4) + 1);
            func_0x0001077bad1c(&ppuStack_d0,pppuVar4,(long)ppuStack_e0 - (long)ppuStack_e8 >> 4,
                                &ppuStack_d8);
            *ppuStack_c0 = puVar22;
            ppuStack_c0[1] = (undefined *)plVar11[2];
            ppuStack_c0 = ppuStack_c0 + 2;
            ppuVar10 = (undefined **)((long)ppuStack_c8 - ((long)ppuStack_e0 - (long)ppuStack_e8));
            _memcpy(ppuVar10);
            ppuVar6 = ppuStack_c0;
            ppuVar5 = ppuStack_d8;
            ppuStack_d8 = ppuStack_b8;
            ppuStack_e0 = ppuStack_c0;
            ppuStack_c0 = ppuStack_e8;
            ppuStack_b8 = ppuVar5;
            ppuStack_d0 = ppuStack_e8;
            ppuStack_c8 = ppuStack_e8;
            ppuStack_e8 = ppuVar10;
            func_0x0001077bad64(&ppuStack_d0);
          }
          dVar20 = dVar19;
          if (dVar21 <= dVar19) {
            dVar20 = dVar21;
          }
          ppuStack_e0 = ppuVar6;
          if (dVar19 <= dVar20) break;
        }
      }
      if (ppuStack_e8 != ppuVar6) {
        func_0x00010b2eb088((long)ppuVar6 - (long)ppuStack_e8 >> 4);
        FUN_10b2ea53c();
        ppuVar6 = ppuStack_e0;
      }
      dVar19 = 0.0;
      for (ppuVar5 = ppuStack_e8; ppuVar5 != ppuVar6; ppuVar5 = ppuVar5 + 2) {
        dVar19 = dVar19 + (double)*ppuVar5;
        if (dVar20 * (double)fVar17 <= dVar19) {
          pplVar9 = (long **)(long)(double)ppuVar5[1];
          goto LAB_10b2e9450;
        }
      }
      pplVar9 = (long **)0xffffffffffffffff;
LAB_10b2e9450:
      func_0x00010727d3c0(&ppuStack_e8);
      if (-1 < (long)pplVar9) goto LAB_10b2e94d4;
    }
LAB_10b2e945c:
    plVar11 = param_1[7];
    if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
      plVar11 = (long *)(ulong)*(byte *)((long)param_1 + 0x47);
    }
    if (plVar11 != (long *)0x0) {
      ppuVar6 = &PTR___tlv_bootstrap_11340d9f0;
      (*(code *)PTR___tlv_bootstrap_11340d9f0)();
      if (*(char *)ppuVar6 == '\0') {
        ppuStack_d0 = (undefined **)0x10b2ea4fc;
        ppuStack_c8 = &PTR_FUN_110cd4720;
        *(undefined1 *)ppuVar6 = 1;
        pplVar9 = (long **)param_1[6];
        if (-1 < extraout_w8) {
          pplVar9 = param_1 + 6;
        }
        func_0x000107c30184();
        func_0x000107c281f0(&ppuStack_d0);
        goto LAB_10b2e94d4;
      }
    }
    pplVar9 = (long **)0xffffffffffffffff;
  }
  else if (((param_2 != 0) || ((ulong)(((long)plStack_f8 - (long)plStack_100) / 0x18) < 2)) ||
          (pplVar9 = (long **)(long)(double)plStack_100[2], (long)pplVar9 < 0)) goto LAB_10b2e945c;
LAB_10b2e94d4:
  param_1 = &plStack_100;
  FUN_10b2e8c04();
LAB_10b2e94dc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    FUN_10b2e9754(&ppuStack_d0);
    __Unwind_Resume();
    *param_1 = (long *)&PTR_FUN_110cd4680;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 6);
    func_0x000107c2c9b4(param_1 + 2);
    return param_1;
  }
  return pplVar9;
LAB_10b2e9210:
  if (((ulong)plVar13 & uVar14) == 0) {
    plVar7 = (long *)((ulong)plVar7 & uVar14);
  }
  else if (plVar13 <= plVar7) {
    uVar1 = 0;
    if (plVar13 != (long *)0x0) {
      uVar1 = (ulong)plVar7 / (ulong)plVar13;
    }
    plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar13);
  }
  if (plVar7 != plVar15) goto LAB_10b2e9260;
  goto LAB_10b2e91e8;
}



/* Entry: 10b2e9650; end: 10b2e9653;  */

undefined8 * FUN_10b2e9650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd4680;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 6);
  func_0x000107c2c9b4(param_1 + 2);
  return param_1;
}



/* Entry: 10b2e9654; end: 10b2e9667;  */

void FUN_10b2e9654(void)

{
  FUN_10b2ea314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2e9668; end: 10b2e9753;  */

void FUN_10b2e9668(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x00010b2eb07c();
  puVar5 = (ulong *)(param_1 + 0x10);
  puVar7 = *(undefined8 **)(param_1 + 8);
  if (puVar7 < (undefined8 *)*puVar5) {
    uVar11 = unaff_x20[1];
    uVar10 = *unaff_x20;
    uVar13 = unaff_x20[3];
    uVar12 = unaff_x20[2];
    puVar7[4] = unaff_x20[4];
    puVar7[1] = uVar11;
    *puVar7 = uVar10;
    puVar7[3] = uVar13;
    puVar7[2] = uVar12;
    puVar7 = puVar7 + 5;
  }
  else {
    lVar9 = (long)puVar7 - *unaff_x19;
    uVar1 = lVar9 / 0x28 + 1;
    if (0x666666666666666 < uVar1) {
      FUN_10b2e8060();
      if ((char)puVar5[3] == '\x01') {
        FUN_10b2e8c48();
      }
      return;
    }
    uVar4 = ((long)*puVar5 - *unaff_x19) / 0x28;
    uVar8 = uVar4 * 2;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x333333333333332 < uVar4) {
      uVar8 = 0x666666666666666;
    }
    FUN_10b2e806c();
    puVar2 = (undefined8 *)((long)puVar5 + lVar9);
    uVar11 = unaff_x20[1];
    uVar10 = *unaff_x20;
    uVar13 = unaff_x20[3];
    uVar12 = unaff_x20[2];
    puVar2[4] = unaff_x20[4];
    puVar2[1] = uVar11;
    *puVar2 = uVar10;
    puVar2[3] = uVar13;
    puVar2[2] = uVar12;
    puVar7 = puVar2 + 5;
    lVar9 = *unaff_x19;
    lVar3 = unaff_x19[1];
    _memcpy(puVar2 + ((lVar3 - lVar9) / -0x28) * 5);
    lVar6 = *unaff_x19;
    *unaff_x19 = (long)(puVar2 + ((lVar3 - lVar9) / -0x28) * 5);
    unaff_x19[1] = (long)puVar7;
    unaff_x19[2] = (long)(puVar5 + uVar8 * 5);
    if (lVar6 != 0) {
      __ZdlPv();
    }
  }
  unaff_x19[1] = (long)puVar7;
  return;
}



/* Entry: 10b2e9754; end: 10b2e9773;  */

void FUN_10b2e9754(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b2e8c48();
  }
  return;
}



/* Entry: 10b2e9774; end: 10b2e9e7b;  */

void FUN_10b2e9774(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar13;
  ulong extraout_x8_03;
  long extraout_x9;
  long lVar14;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  undefined8 uVar15;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  undefined8 uVar16;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 uVar17;
  undefined8 *extraout_x11_01;
  undefined8 *extraout_x12;
  undefined8 *extraout_x12_00;
  undefined8 *puVar18;
  long extraout_x12_01;
  long lVar19;
  undefined8 *extraout_x13;
  undefined8 *extraout_x13_00;
  long extraout_x13_01;
  undefined8 *extraout_x14;
  long lVar20;
  long extraout_x14_00;
  undefined8 uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 unaff_x30;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  do {
    puVar10 = param_2 + -5;
    puVar9 = param_1;
LAB_10b2e97bc:
    param_1 = puVar9;
    uVar11 = (long)param_2 - (long)param_1;
    uVar23 = (long)uVar11 / 0x28;
    cVar5 = SBORROW8(uVar23,5);
    cVar6 = (long)(uVar23 - 5) < 0;
    switch(uVar23) {
    case 0:
    case 1:
      goto LAB_10b2e9b10;
    case 2:
      if ((long)(param_2[-2] + param_2[-3]) < (long)(param_1[3] + param_1[2])) {
        func_0x00010b2eb02c();
        uVar15 = param_2[-4];
        uVar16 = param_2[-5];
        uVar21 = param_2[-2];
        uVar17 = param_2[-3];
        func_0x00010b2eb068(param_2[-1]);
        param_2[-1] = extraout_x8_02;
        param_2[-2] = uVar21;
        param_2[-3] = uVar17;
        param_2[-4] = uVar15;
        param_2[-5] = uVar16;
      }
      goto LAB_10b2e9b10;
    case 3:
      puVar9 = param_1 + 5;
      func_0x00010b2eafc0();
      lVar13 = puVar9[3] + puVar9[2];
      if (lVar13 < (long)(param_1[3] + param_1[2])) {
        if ((long)(puVar10[3] + puVar10[2]) < lVar13) {
          uVar21 = param_1[1];
          uVar17 = *param_1;
          uVar25 = param_1[3];
          uVar24 = param_1[2];
          uVar16 = param_1[4];
          uVar15 = puVar10[4];
          uVar28 = *puVar10;
          uVar27 = puVar10[3];
          uVar26 = puVar10[2];
          param_1[1] = puVar10[1];
          *param_1 = uVar28;
          param_1[3] = uVar27;
          param_1[2] = uVar26;
          param_1[4] = uVar15;
        }
        else {
          func_0x00010b2eb0dc();
          if ((long)(puVar9[3] + puVar9[2]) <= (long)(puVar10[3] + puVar10[2])) {
            return;
          }
          uVar21 = puVar9[1];
          uVar17 = *puVar9;
          uVar25 = puVar9[3];
          uVar24 = puVar9[2];
          uVar16 = puVar9[4];
          uVar15 = puVar10[4];
          uVar28 = *puVar10;
          uVar27 = puVar10[3];
          uVar26 = puVar10[2];
          puVar9[1] = puVar10[1];
          *puVar9 = uVar28;
          puVar9[3] = uVar27;
          puVar9[2] = uVar26;
          puVar9[4] = uVar15;
        }
        puVar10[4] = uVar16;
        puVar10[1] = uVar21;
        *puVar10 = uVar17;
        puVar10[3] = uVar25;
        puVar10[2] = uVar24;
      }
      else if ((long)(puVar10[3] + puVar10[2]) < lVar13) {
        uVar21 = puVar9[1];
        uVar17 = *puVar9;
        uVar25 = puVar9[3];
        uVar24 = puVar9[2];
        uVar16 = puVar9[4];
        uVar15 = puVar10[4];
        uVar28 = *puVar10;
        uVar27 = puVar10[3];
        uVar26 = puVar10[2];
        puVar9[1] = puVar10[1];
        *puVar9 = uVar28;
        puVar9[3] = uVar27;
        puVar9[2] = uVar26;
        puVar9[4] = uVar15;
        puVar10[4] = uVar16;
        puVar10[1] = uVar21;
        *puVar10 = uVar17;
        puVar10[3] = uVar25;
        puVar10[2] = uVar24;
        if ((long)(puVar9[3] + puVar9[2]) < (long)(param_1[3] + param_1[2])) {
          func_0x00010b2eb0dc();
        }
      }
      return;
    case 4:
      func_0x00010b2eafc0(param_1,param_1 + 5,param_1 + 10,puVar10);
      func_0x00010b2eae40();
      FUN_10b2e9e7c();
      func_0x00010b2eafdc();
      if (((cVar6 != cVar5) && (func_0x00010b2eae54(), cVar6 != cVar5)) &&
         (func_0x00010b2eae8c(), cVar6 != cVar5)) {
        func_0x00010b2eaf3c();
      }
      return;
    case 5:
      puVar9 = puVar10;
      func_0x00010b2eafc0(param_1,param_1 + 5,param_1 + 10,param_1 + 0xf);
      func_0x00010b2eae40();
      FUN_10b2e9f60();
      lVar13 = puVar9[3] + puVar9[2];
      lVar12 = param_2[-2] + param_2[-3];
      cVar5 = SBORROW8(lVar13,lVar12);
      cVar6 = lVar13 - lVar12 < 0;
      if (lVar13 < lVar12) {
        uVar21 = param_2[-4];
        uVar17 = *puVar10;
        uVar25 = param_2[-2];
        uVar24 = param_2[-3];
        uVar16 = param_2[-1];
        uVar15 = puVar9[4];
        uVar28 = *puVar9;
        uVar27 = puVar9[3];
        uVar26 = puVar9[2];
        param_2[-4] = puVar9[1];
        *puVar10 = uVar28;
        param_2[-2] = uVar27;
        param_2[-3] = uVar26;
        param_2[-1] = uVar15;
        puVar9[4] = uVar16;
        puVar9[1] = uVar21;
        *puVar9 = uVar17;
        puVar9[3] = uVar25;
        puVar9[2] = uVar24;
        func_0x00010b2eafdc();
        if (((cVar6 != cVar5) && (func_0x00010b2eae54(), cVar6 != cVar5)) &&
           (func_0x00010b2eae8c(), cVar6 != cVar5)) {
          func_0x00010b2eaf3c();
        }
      }
      return;
    }
    if ((long)uVar11 < 0x3c0) {
      if ((param_4 & 1) == 0) {
        puVar9 = param_1;
        if (param_1 != param_2) {
          while( true ) {
            puVar10 = puVar9;
            param_1 = param_1 + 5;
            puVar9 = puVar10 + 5;
            if (puVar9 == param_2) break;
            lVar12 = puVar10[7];
            lVar14 = puVar10[8];
            lVar13 = lVar14 + lVar12;
            if (lVar13 < (long)(puVar10[3] + puVar10[2])) {
              uVar17 = puVar10[6];
              uVar15 = *puVar9;
              uVar16 = puVar10[9];
              puVar10 = param_1;
              do {
                puVar22 = puVar10;
                puVar22[1] = puVar22[-4];
                *puVar22 = puVar22[-5];
                puVar22[3] = puVar22[-2];
                puVar22[2] = puVar22[-3];
                puVar22[4] = puVar22[-1];
                puVar10 = puVar22 + -5;
              } while (lVar13 < (long)(puVar22[-7] + puVar22[-8]));
              puVar22[-4] = uVar17;
              puVar22[-5] = uVar15;
              puVar22[-3] = lVar12;
              puVar22[-2] = lVar14;
              puVar22[-1] = uVar16;
            }
          }
        }
        break;
      }
      if (param_1 == param_2) break;
      lVar13 = 0;
      puVar9 = param_1;
      goto LAB_10b2e9be0;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) break;
      uVar11 = uVar23 - 2 >> 1;
      puVar9 = param_1 + uVar11 * 5;
      do {
        FUN_10b2ea1fc(param_1,uVar23,puVar9);
        uVar11 = uVar11 - 1;
        puVar9 = puVar9 + -5;
      } while (-1 < (long)uVar11);
      do {
        if ((long)uVar23 < 2) goto LAB_10b2e9b10;
        uVar17 = param_1[1];
        uVar15 = *param_1;
        uVar24 = param_1[3];
        uVar21 = param_1[2];
        uVar16 = param_1[4];
        do {
          func_0x00010b2eb0c8();
          puVar9 = extraout_x9_01;
          lVar13 = extraout_x13_01;
          if ((extraout_x12_01 < (long)uVar23) &&
             (puVar9 = (undefined8 *)(extraout_x14_00 + 0x50), lVar13 = extraout_x12_01,
             *(long *)(extraout_x14_00 + 0x68) + *(long *)(extraout_x14_00 + 0x60) <=
             *(long *)(extraout_x14_00 + 0x40) + *(long *)(extraout_x14_00 + 0x38))) {
            puVar9 = extraout_x9_01;
            lVar13 = extraout_x13_01;
          }
          uVar26 = puVar9[1];
          uVar25 = *puVar9;
          uVar28 = puVar9[3];
          uVar27 = puVar9[2];
          extraout_x11_01[4] = puVar9[4];
          extraout_x11_01[1] = uVar26;
          *extraout_x11_01 = uVar25;
          extraout_x11_01[3] = uVar28;
          extraout_x11_01[2] = uVar27;
        } while (lVar13 <= extraout_x10_01);
        puVar10 = param_2 + -5;
        if (puVar9 == puVar10) {
          puVar9[4] = uVar16;
          puVar9[1] = uVar17;
          *puVar9 = uVar15;
          puVar9[3] = uVar24;
          puVar9[2] = uVar21;
        }
        else {
          uVar26 = param_2[-4];
          uVar25 = *puVar10;
          uVar28 = param_2[-2];
          uVar27 = param_2[-3];
          puVar9[4] = param_2[-1];
          puVar9[1] = uVar26;
          *puVar9 = uVar25;
          puVar9[3] = uVar28;
          puVar9[2] = uVar27;
          param_2[-1] = uVar16;
          param_2[-4] = uVar17;
          *puVar10 = uVar15;
          param_2[-2] = uVar24;
          param_2[-3] = uVar21;
          uVar11 = (long)puVar9 + (0x28 - (long)param_1);
          if (0x28 < (long)uVar11) {
            uVar4 = 0;
            if (extraout_x8_03 != 0) {
              uVar4 = uVar11 / extraout_x8_03;
            }
            uVar11 = uVar4 - 2 >> 1;
            puVar22 = (undefined8 *)((long)param_1 + uVar11 * extraout_x8_03);
            lVar12 = puVar9[2];
            lVar14 = puVar9[3];
            lVar13 = lVar14 + lVar12;
            if ((long)(puVar22[3] + puVar22[2]) < lVar13) {
              uVar17 = puVar9[1];
              uVar15 = *puVar9;
              uVar16 = puVar9[4];
              do {
                puVar7 = puVar22;
                uVar24 = puVar7[1];
                uVar21 = *puVar7;
                uVar26 = puVar7[3];
                uVar25 = puVar7[2];
                puVar9[4] = puVar7[4];
                puVar9[1] = uVar24;
                *puVar9 = uVar21;
                puVar9[3] = uVar26;
                puVar9[2] = uVar25;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1 >> 1;
                puVar22 = (undefined8 *)((long)param_1 + uVar11 * extraout_x8_03);
                puVar9 = puVar7;
              } while ((long)(puVar22[3] + puVar22[2]) < lVar13);
              puVar7[1] = uVar17;
              *puVar7 = uVar15;
              puVar7[2] = lVar12;
              puVar7[3] = lVar14;
              puVar7[4] = uVar16;
            }
          }
        }
        uVar23 = uVar23 - 1;
        param_2 = puVar10;
      } while( true );
    }
    puVar9 = param_1 + (uVar23 >> 1) * 5;
    if (uVar11 < 0x1401) {
      FUN_10b2e9e7c(puVar9,param_1,puVar10);
    }
    else {
      FUN_10b2e9e7c(param_1,puVar9,puVar10);
      FUN_10b2e9e7c(param_1 + 5,puVar9 + -5,param_2 + -10);
      FUN_10b2e9e7c(param_1 + 10,puVar9 + 5,param_2 + -0xf);
      FUN_10b2e9e7c(puVar9 + -5,puVar9,puVar9 + 5);
      func_0x00010b2eb02c();
      uVar15 = puVar9[1];
      uVar16 = *puVar9;
      uVar21 = puVar9[3];
      uVar17 = puVar9[2];
      func_0x00010b2eb068(puVar9[4]);
      puVar9[4] = extraout_x8;
      puVar9[1] = uVar15;
      *puVar9 = uVar16;
      puVar9[3] = uVar21;
      puVar9[2] = uVar17;
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      lVar12 = param_1[2];
      lVar14 = param_1[3];
      lVar13 = lVar14 + lVar12;
      if (lVar13 <= (long)(param_1[-2] + param_1[-3])) {
        uVar15 = param_1[1];
        uVar16 = *param_1;
        puVar22 = param_1;
        if (lVar13 < (long)(param_2[-2] + param_2[-3])) {
          do {
            puVar9 = puVar22 + 5;
            plVar1 = puVar22 + 7;
            plVar3 = puVar22 + 8;
            puVar22 = puVar9;
          } while (*plVar3 + *plVar1 <= lVar13);
        }
        else {
          do {
            puVar9 = puVar22 + 5;
            if (param_2 <= puVar9) break;
            plVar1 = puVar22 + 7;
            plVar3 = puVar22 + 8;
            puVar22 = puVar9;
          } while (*plVar3 + *plVar1 <= lVar13);
        }
        puVar22 = param_2;
        puVar7 = param_2;
        if (puVar9 < param_2) {
          do {
            puVar7 = puVar22 + -5;
            plVar1 = puVar22 + -3;
            plVar3 = puVar22 + -2;
            puVar22 = puVar7;
          } while (lVar13 < *plVar3 + *plVar1);
        }
        uVar17 = param_1[4];
        while (puVar9 < puVar7) {
          uVar26 = puVar9[1];
          uVar24 = *puVar9;
          uVar30 = puVar9[3];
          uVar28 = puVar9[2];
          uVar21 = puVar9[4];
          uVar27 = puVar7[1];
          uVar25 = *puVar7;
          uVar31 = puVar7[3];
          uVar29 = puVar7[2];
          puVar9[4] = puVar7[4];
          puVar9[1] = uVar27;
          *puVar9 = uVar25;
          puVar9[3] = uVar31;
          puVar9[2] = uVar29;
          puVar7[4] = uVar21;
          puVar7[1] = uVar26;
          *puVar7 = uVar24;
          puVar7[3] = uVar30;
          puVar7[2] = uVar28;
          do {
            plVar1 = puVar9 + 7;
            plVar3 = puVar9 + 8;
            puVar9 = puVar9 + 5;
          } while (*plVar3 + *plVar1 <= lVar13);
          do {
            plVar1 = puVar7 + -3;
            plVar3 = puVar7 + -2;
            puVar7 = puVar7 + -5;
          } while (lVar13 < *plVar3 + *plVar1);
        }
        puVar22 = puVar9 + -5;
        if (param_1 != puVar22) {
          uVar24 = puVar9[-4];
          uVar21 = *puVar22;
          uVar26 = puVar9[-2];
          uVar25 = puVar9[-3];
          param_1[4] = puVar9[-1];
          param_1[1] = uVar24;
          *param_1 = uVar21;
          param_1[3] = uVar26;
          param_1[2] = uVar25;
        }
        param_4 = 0;
        puVar9[-4] = uVar15;
        *puVar22 = uVar16;
        puVar9[-3] = lVar12;
        puVar9[-2] = lVar14;
        puVar9[-1] = uVar17;
        goto LAB_10b2e97bc;
      }
    }
    else {
      lVar12 = param_1[2];
      lVar14 = param_1[3];
      lVar13 = lVar14 + lVar12;
    }
    uVar17 = param_1[1];
    uVar15 = *param_1;
    uVar16 = param_1[4];
    lVar2 = 0;
    do {
      lVar19 = lVar2;
      lVar2 = lVar19 + 0x28;
    } while (*(long *)((long)param_1 + lVar19 + 0x40) + *(long *)((long)param_1 + lVar19 + 0x38) <
             lVar13);
    puVar9 = (undefined8 *)((long)param_1 + lVar2);
    cVar5 = SBORROW8(lVar2,0x28);
    cVar6 = lVar19 < 0;
    puVar22 = param_2;
    if (lVar2 == 0x28) {
      do {
        puVar7 = puVar22;
        cVar5 = SBORROW8((long)puVar9,(long)puVar7);
        cVar6 = (long)puVar9 - (long)puVar7 < 0;
        puVar8 = puVar7;
        puVar18 = puVar9;
        if (puVar7 <= puVar9) break;
        func_0x00010b2eaff4();
        lVar12 = extraout_x8_01;
        lVar14 = extraout_x9_00;
        lVar13 = extraout_x10_00;
        uVar16 = extraout_x11_00;
        puVar9 = extraout_x12_00;
        puVar7 = extraout_x13_00;
        puVar22 = extraout_x14;
        puVar8 = extraout_x13_00;
        puVar18 = extraout_x12_00;
      } while (cVar6 == cVar5);
    }
    else {
      do {
        func_0x00010b2eaff4();
        puVar7 = extraout_x13;
        puVar9 = extraout_x12;
        puVar8 = extraout_x13;
        puVar18 = extraout_x12;
        uVar16 = extraout_x11;
        lVar13 = extraout_x10;
        lVar14 = extraout_x9;
        lVar12 = extraout_x8_00;
      } while (cVar6 == cVar5);
    }
    while (puVar9 < puVar7) {
      uVar26 = puVar9[1];
      uVar24 = *puVar9;
      uVar30 = puVar9[3];
      uVar28 = puVar9[2];
      uVar21 = puVar9[4];
      uVar27 = puVar7[1];
      uVar25 = *puVar7;
      uVar31 = puVar7[3];
      uVar29 = puVar7[2];
      puVar9[4] = puVar7[4];
      puVar9[1] = uVar27;
      *puVar9 = uVar25;
      puVar9[3] = uVar31;
      puVar9[2] = uVar29;
      puVar7[4] = uVar21;
      puVar7[1] = uVar26;
      *puVar7 = uVar24;
      puVar7[3] = uVar30;
      puVar7[2] = uVar28;
      do {
        plVar1 = puVar9 + 7;
        plVar3 = puVar9 + 8;
        puVar9 = puVar9 + 5;
      } while (*plVar3 + *plVar1 < lVar13);
      do {
        plVar1 = puVar7 + -3;
        plVar3 = puVar7 + -2;
        puVar7 = puVar7 + -5;
      } while (lVar13 <= *plVar3 + *plVar1);
    }
    puVar22 = puVar9 + -5;
    if (param_1 != puVar22) {
      uVar24 = puVar9[-4];
      uVar21 = *puVar22;
      uVar26 = puVar9[-2];
      uVar25 = puVar9[-3];
      param_1[4] = puVar9[-1];
      param_1[1] = uVar24;
      *param_1 = uVar21;
      param_1[3] = uVar26;
      param_1[2] = uVar25;
    }
    puVar9[-4] = uVar17;
    *puVar22 = uVar15;
    puVar9[-3] = lVar12;
    puVar9[-2] = lVar14;
    puVar9[-1] = uVar16;
    if (puVar18 < puVar8) goto LAB_10b2e99b0;
    puVar7 = param_1;
    FUN_10b2ea03c(param_1,puVar22);
    puVar8 = puVar9;
    FUN_10b2ea03c(puVar9,param_2);
    if ((int)puVar8 == 0) goto code_r0x00010b2e99ac;
    param_2 = puVar22;
  } while (((ulong)puVar7 & 1) == 0);
LAB_10b2e9b10:
  func_0x00010b2eafc0(unaff_x30);
  return;
LAB_10b2e9be0:
  puVar10 = puVar9 + 5;
  if (puVar10 == param_2) goto LAB_10b2e9b10;
  lVar14 = puVar9[7];
  lVar2 = puVar9[8];
  lVar12 = lVar2 + lVar14;
  if (lVar12 < (long)(puVar9[3] + puVar9[2])) {
    uVar17 = puVar9[6];
    uVar15 = *puVar10;
    uVar16 = puVar9[9];
    lVar19 = lVar13;
    do {
      lVar20 = lVar19;
      puVar9 = (undefined8 *)((long)param_1 + lVar20);
      puVar9[6] = puVar9[1];
      puVar9[5] = *puVar9;
      puVar9[8] = puVar9[3];
      puVar9[7] = puVar9[2];
      puVar9[9] = puVar9[4];
      puVar22 = param_1;
      if (lVar20 == 0) goto LAB_10b2e9c54;
      lVar19 = lVar20 + -0x28;
    } while (lVar12 < (long)(puVar9[-2] + puVar9[-3]));
    puVar22 = (undefined8 *)((long)param_1 + lVar20);
LAB_10b2e9c54:
    puVar22[1] = uVar17;
    *puVar22 = uVar15;
    puVar22[2] = lVar14;
    puVar22[3] = lVar2;
    puVar22[4] = uVar16;
  }
  lVar13 = lVar13 + 0x28;
  puVar9 = puVar10;
  goto LAB_10b2e9be0;
code_r0x00010b2e99ac:
  if (((ulong)puVar7 & 1) == 0) {
LAB_10b2e99b0:
    FUN_10b2e9774(param_1,puVar22,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10b2e97bc;
}



/* Entry: 10b2e9e7c; end: 10b2e9f5f;  */

void FUN_10b2e9e7c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = param_2[3] + param_2[2];
  if (lVar1 < (long)(param_1[3] + param_1[2])) {
    if ((long)(param_3[3] + param_3[2]) < lVar1) {
      uVar5 = param_1[1];
      uVar4 = *param_1;
      uVar7 = param_1[3];
      uVar6 = param_1[2];
      uVar2 = param_1[4];
      uVar3 = param_3[4];
      uVar10 = *param_3;
      uVar9 = param_3[3];
      uVar8 = param_3[2];
      param_1[1] = param_3[1];
      *param_1 = uVar10;
      param_1[3] = uVar9;
      param_1[2] = uVar8;
      param_1[4] = uVar3;
    }
    else {
      func_0x00010b2eb0dc();
      if ((long)(param_2[3] + param_2[2]) <= (long)(param_3[3] + param_3[2])) {
        return;
      }
      uVar5 = param_2[1];
      uVar4 = *param_2;
      uVar7 = param_2[3];
      uVar6 = param_2[2];
      uVar2 = param_2[4];
      uVar3 = param_3[4];
      uVar10 = *param_3;
      uVar9 = param_3[3];
      uVar8 = param_3[2];
      param_2[1] = param_3[1];
      *param_2 = uVar10;
      param_2[3] = uVar9;
      param_2[2] = uVar8;
      param_2[4] = uVar3;
    }
    param_3[4] = uVar2;
    param_3[1] = uVar5;
    *param_3 = uVar4;
    param_3[3] = uVar7;
    param_3[2] = uVar6;
  }
  else if ((long)(param_3[3] + param_3[2]) < lVar1) {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    uVar2 = param_2[4];
    uVar3 = param_3[4];
    uVar10 = *param_3;
    uVar9 = param_3[3];
    uVar8 = param_3[2];
    param_2[1] = param_3[1];
    *param_2 = uVar10;
    param_2[3] = uVar9;
    param_2[2] = uVar8;
    param_2[4] = uVar3;
    param_3[4] = uVar2;
    param_3[1] = uVar5;
    *param_3 = uVar4;
    param_3[3] = uVar7;
    param_3[2] = uVar6;
    if ((long)(param_2[3] + param_2[2]) < (long)(param_1[3] + param_1[2])) {
      func_0x00010b2eb0dc();
    }
  }
  return;
}



/* Entry: 10b2e9f60; end: 10b2e9fab;  */

void FUN_10b2e9f60(void)

{
  char in_NG;
  char in_OV;
  
  FUN_10b2eae40();
  FUN_10b2e9e7c();
  func_0x00010b2eafdc();
  if (((in_NG != in_OV) && (func_0x00010b2eae54(), in_NG != in_OV)) &&
     (func_0x00010b2eae8c(), in_NG != in_OV)) {
    func_0x00010b2eaf3c();
  }
  return;
}



/* Entry: 10b2e9fac; end: 10b2ea03b;  */

void FUN_10b2e9fac(void)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  undefined8 *in_x4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_10b2eae40();
  FUN_10b2e9f60();
  lVar1 = in_x4[3] + in_x4[2];
  lVar2 = unaff_x22[3] + unaff_x22[2];
  cVar3 = SBORROW8(lVar1,lVar2);
  cVar4 = lVar1 - lVar2 < 0;
  if (lVar1 < lVar2) {
    uVar8 = unaff_x22[1];
    uVar7 = *unaff_x22;
    uVar10 = unaff_x22[3];
    uVar9 = unaff_x22[2];
    uVar5 = unaff_x22[4];
    uVar6 = in_x4[4];
    uVar13 = *in_x4;
    uVar12 = in_x4[3];
    uVar11 = in_x4[2];
    unaff_x22[1] = in_x4[1];
    *unaff_x22 = uVar13;
    unaff_x22[3] = uVar12;
    unaff_x22[2] = uVar11;
    unaff_x22[4] = uVar6;
    in_x4[4] = uVar5;
    in_x4[1] = uVar8;
    *in_x4 = uVar7;
    in_x4[3] = uVar10;
    in_x4[2] = uVar9;
    func_0x00010b2eafdc();
    if (((cVar4 != cVar3) && (func_0x00010b2eae54(), cVar4 != cVar3)) &&
       (func_0x00010b2eae8c(), cVar4 != cVar3)) {
      func_0x00010b2eaf3c();
    }
  }
  return;
}


