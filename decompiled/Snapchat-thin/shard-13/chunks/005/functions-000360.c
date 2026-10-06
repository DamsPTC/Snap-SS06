/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a7c1ff4; end: 10a7c210f;  */

long * FUN_10a7c1ff4(long *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = *param_1;
  puVar1 = (undefined8 *)param_1[1];
  uVar8 = (long)puVar1 - lVar7 >> 3;
  if (uVar8 < param_2) {
    uVar9 = param_2 - uVar8;
    if ((ulong)(param_1[2] - (long)puVar1 >> 3) < uVar9) {
      if (param_2 >> 0x3d != 0) {
        FUN_10a3ebd38();
        *param_1 = (long)&PTR_FUN_110c18b20;
        FUN_10a7c2ec8(param_1 + 0x16);
        if (param_1[0x14] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        *param_1 = (long)&PTR_DAT_110c18ff0;
        if (param_1[0xd] != 0) {
          param_1[0xe] = param_1[0xd];
          __ZdlPv();
        }
        FUN_10a7a2e48(param_1 + 7);
        func_0x00010a0523dc(param_1 + 5);
        return param_1;
      }
      uVar4 = param_1[2] - lVar7;
      uVar6 = (long)uVar4 >> 2;
      if (uVar6 <= param_2) {
        uVar6 = param_2;
      }
      if (0x7ffffffffffffff7 < uVar4) {
        uVar6 = 0x1fffffffffffffff;
      }
      plVar2 = param_1;
      FUN_10a3ebd4c();
      puVar1 = (undefined8 *)((long)plVar2 + ((long)puVar1 - lVar7));
      lVar7 = param_2 * 8 + uVar8 * -8;
      puVar5 = puVar1;
      do {
        *puVar5 = param_3;
        lVar7 = lVar7 + -8;
        puVar5 = puVar5 + 1;
      } while (lVar7 != 0);
      lVar7 = (long)puVar1 - (param_1[1] - *param_1);
      _memcpy(lVar7);
      plVar3 = (long *)*param_1;
      *param_1 = lVar7;
      param_1[1] = (long)(puVar1 + uVar9);
      param_1[2] = (long)(plVar2 + uVar6);
      param_1 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return plVar3;
      }
    }
    else {
      lVar7 = param_2 * 8 + uVar8 * -8;
      puVar5 = puVar1;
      do {
        *puVar5 = param_3;
        lVar7 = lVar7 + -8;
        puVar5 = puVar5 + 1;
      } while (lVar7 != 0);
      param_1[1] = (long)(puVar1 + uVar9);
    }
  }
  else if (param_2 < uVar8) {
    param_1[1] = lVar7 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 10a7c2110; end: 10a7c21df;  */

undefined8 * FUN_10a7c2110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18b20;
  FUN_10a7c2ec8(param_1 + 0x16);
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110c18ff0;
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    __ZdlPv();
  }
  FUN_10a7a2e48(param_1 + 7);
  func_0x00010a0523dc(param_1 + 5);
  return param_1;
}



/* Entry: 10a7c21e0; end: 10a7c229f;  */

void FUN_10a7c21e0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_38;
  
  FUN_10a77468c(&iStack_58);
  if ((iStack_58 < iStack_50 && iStack_4c != iStack_54) &&
      (iStack_50 <= iStack_58 || iStack_54 <= iStack_4c)) {
    (**(code **)(*param_2 + 0x60))(param_1,param_2,auStack_48,uStack_38);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  return;
}



/* Entry: 10a7c22a0; end: 10a7c232f;  */

void FUN_10a7c22a0(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,0);
  if ((param_4 != 0) && (*param_1 != 0)) {
    FUN_10a7c2f3c(param_2,*(undefined8 *)(*param_1 + 0x18),param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7c2330; end: 10a7c23bf;  */

void FUN_10a7c2330(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,0);
  if ((*param_4 != 0) && (*param_1 != 0)) {
    lVar1 = *(long *)(*param_1 + 0x18);
    FUN_10a7c4288(param_2,lVar1,lVar1 + 0x20,param_4,param_6,param_7);
  }
  return;
}



/* Entry: 10a7c23c0; end: 10a7c2433;  */

void FUN_10a7c23c0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,0);
  if (*param_1 != 0) {
    FUN_10a7c4df0(param_2,*(undefined8 *)(*param_1 + 0x18),param_4,*param_7,param_7[1]);
  }
  return;
}



/* Entry: 10a7c2434; end: 10a7c24c3;  */

void FUN_10a7c2434(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  (**(code **)(*param_2 + 0x60))(param_1,param_2,param_3,0);
  if ((param_4 != 0) && (*param_1 != 0)) {
    FUN_10a7c2f3c(param_2,*(undefined8 *)(*param_1 + 0x18),param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7c24c4; end: 10a7c256f;  */

void FUN_10a7c24c4(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  
  if (*param_4 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(*param_4 + 0x10) == 1;
  }
  (**(code **)(*param_2 + 0x60))(param_1,param_2,param_3,bVar1);
  if ((*param_4 != 0) && (*param_1 != 0)) {
    lVar2 = *(long *)(*param_1 + 0x18);
    FUN_10a7c4288(param_2,lVar2,lVar2 + 0x40,param_4,param_6,param_7);
  }
  return;
}



/* Entry: 10a7c2570; end: 10a7c25e3;  */

void FUN_10a7c2570(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  (**(code **)(*param_2 + 0x60))(param_1,param_2,param_3,0);
  if (*param_1 != 0) {
    FUN_10a7c4df0(param_2,*(undefined8 *)(*param_1 + 0x18),param_4,*param_7,param_7[1]);
  }
  return;
}



/* Entry: 10a7c25e4; end: 10a7c2923;  */

void FUN_10a7c25e4(long *param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  byte bVar9;
  bool bVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  undefined8 uStack_58;
  
  if ((*(int *)(param_2 + 0x24) == 0) || (*(char *)(param_2 + 0x21) != '\x01')) {
LAB_10a7c262c:
    iVar19 = param_3[2] - *param_3;
    iVar21 = param_3[3] - param_3[1];
  }
  else {
    iVar19 = *param_4;
    iVar21 = param_4[1];
    if (iVar19 == 0 && iVar21 == 0) goto LAB_10a7c262c;
    if (iVar19 != param_3[2] - *param_3 || iVar21 != param_3[3] - param_3[1]) {
      uStack_58 = *(undefined8 *)param_4;
      bVar10 = true;
      goto LAB_10a7c2648;
    }
  }
  bVar10 = false;
  uStack_58 = CONCAT44(iVar21,iVar19);
LAB_10a7c2648:
  uStack_70 = *(undefined4 *)(param_2 + 8);
  FUN_10ab79b88();
  FUN_10a326b40(param_1,&uStack_78,&uStack_58,&uStack_70);
  if ((*(byte *)(param_2 + 0xa9) & 1) == 0) {
    ppuVar3 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 8) * 4;
    if (0x56 < *(uint *)(param_2 + 8)) {
      ppuVar3 = &PTR_DAT_110ae4700;
    }
    bVar9 = *(byte *)((long)ppuVar3 + 0x1b);
    uVar30 = (ulong)bVar9;
    iVar19 = 1;
    FUN_109fc8e58(1,1);
    uVar29 = (uint)bVar9;
    if (!bVar10) {
      plVar32 = *(long **)(param_2 + 0xb0);
      if (*(long **)(param_2 + 0xb8) != plVar32) {
        uVar30 = (ulong)(int)((*param_3 + *(int *)(param_2 + 0x80) * param_3[1]) * uVar29);
        if (uVar30 < (ulong)(plVar32[1] - *plVar32 >> 3)) {
          lVar22 = *param_1;
          FUN_10a1b7ee0(*(undefined8 *)(lVar22 + 0x28),*plVar32 + uVar30 * 8,
                        *(undefined8 *)(lVar22 + 0x18),*(int *)(param_2 + 0x80) * iVar19,
                        (long)*(int *)(lVar22 + 0x14));
          return;
        }
      }
LAB_10a7c2908:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10a7c290c);
      (*pcVar11)();
    }
    uStack_78 = CONCAT44(param_3[3] - param_3[1],param_3[2] - *param_3);
    FUN_10a775818(&uStack_70);
    uVar24 = *(uint *)(param_2 + 0x24);
    if (uVar24 != 0) {
      uVar20 = 0;
      iVar4 = *param_3;
      iVar6 = param_3[1];
      iVar5 = param_3[2];
      iVar7 = param_3[3];
      iVar19 = *(int *)(param_2 + 0x80);
      iVar21 = *(int *)(param_2 + 0x84);
      fVar36 = (float)iVar19;
      fVar34 = (float)iVar4 / fVar36;
      fVar37 = (float)iVar21;
      fVar35 = (float)iVar6 / fVar37;
      lVar22 = *(long *)(*param_1 + 0x28);
      do {
        iVar13 = (int)(fVar35 * (float)iVar21);
        iVar23 = (int)((fVar35 + (float)(iVar7 - iVar6) / fVar37) * (float)iVar21);
        if (iVar13 < iVar23) {
          iVar25 = 0;
          iVar26 = (int)((fVar34 + (float)(iVar5 - iVar4) / fVar36) * (float)iVar19);
          iVar12 = (int)(fVar34 * (float)iVar19);
          uVar27 = uVar20 & 0xff;
          uVar14 = uVar30 * ((long)iVar12 + (long)iVar19 * (long)iVar13);
          do {
            if (iVar12 < iVar26) {
              iVar15 = 0;
              uVar16 = uVar14;
              lVar17 = (long)iVar12;
              do {
                if ((ulong)(lStack_68 - CONCAT44(uStack_6c,uStack_70) >> 4) <= uVar27)
                goto LAB_10a7c2908;
                if (uVar29 != 0) {
                  piVar2 = (int *)(CONCAT44(uStack_6c,uStack_70) + uVar27 * 0x10);
                  puVar18 = (undefined1 *)
                            (lVar22 + (int)(uVar29 * (*piVar2 + iVar15 +
                                                     *(int *)(*param_1 + 0x10) *
                                                     (iVar25 + piVar2[1]))));
                  uVar28 = uVar16;
                  uVar31 = uVar30;
                  do {
                    uVar33 = (*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0) >> 3) *
                             -0x5555555555555555;
                    if ((uVar33 < uVar27 || uVar33 - uVar27 == 0) ||
                       (plVar32 = (long *)(*(long *)(param_2 + 0xb0) + uVar27 * 0x18),
                       lVar8 = *plVar32, (ulong)(plVar32[1] - lVar8 >> 3) <= uVar28))
                    goto LAB_10a7c2908;
                    *puVar18 = (char)*(undefined8 *)(lVar8 + uVar28 * 8);
                    uVar28 = uVar28 + 1;
                    uVar31 = uVar31 - 1;
                    puVar18 = puVar18 + 1;
                  } while (uVar31 != 0);
                }
                lVar17 = lVar17 + 1;
                iVar15 = iVar15 + 1;
                uVar16 = uVar16 + uVar30;
              } while ((int)lVar17 != iVar26);
            }
            iVar13 = iVar13 + 1;
            iVar25 = iVar25 + 1;
            uVar14 = uVar14 + (long)(int)uVar29 * (long)iVar19;
          } while (iVar13 != iVar23);
          uVar24 = *(uint *)(param_2 + 0x24);
        }
        iVar19 = iVar19 / 2;
        if (iVar19 < 2) {
          iVar19 = 1;
        }
        iVar21 = iVar21 / 2;
        if (iVar21 < 2) {
          iVar21 = 1;
        }
        uVar1 = (int)uVar20 + 1;
        uVar20 = (ulong)uVar1;
      } while ((uVar1 & 0xff) < uVar24);
    }
    lStack_68 = CONCAT44(uStack_6c,uStack_70);
    if (lStack_68 != 0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a7c2924; end: 10a7c2b43;  */

void FUN_10a7c2924(undefined4 *param_1,long param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  
  *(undefined1 *)(param_1 + 1) = 0;
  puVar9 = (undefined8 *)(param_1 + 2);
  *puVar9 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = *(undefined4 *)(param_2 + 8);
  plVar3 = *(long **)(param_2 + 0xb0);
  if ((plVar3 != *(long **)(param_2 + 0xb8)) && (lVar10 = *plVar3, lVar10 != plVar3[1])) {
    iVar16 = *(int *)(param_2 + 0x24);
    if ((iVar16 != 0) && (*(char *)(param_2 + 0x21) == '\x01')) {
      iVar8 = *param_4;
      iVar17 = param_4[1];
      if (iVar8 != 0 || iVar17 != 0) {
        iVar1 = *param_3;
        iVar2 = param_3[1];
        iVar4 = param_3[2] - iVar1;
        iVar5 = param_3[3] - iVar2;
        *(bool *)(param_1 + 1) = iVar8 != iVar4 || iVar17 != iVar5;
        if (iVar8 != iVar4 || iVar17 != iVar5) {
          uVar14 = *(undefined8 *)(param_2 + 0x80);
          func_0x00010a7ba580(puVar9,iVar16);
          if (*(int *)(param_2 + 0x24) == 0) {
            return;
          }
          lVar10 = 0;
          uVar11 = 0;
          fVar15 = (float)(int)((ulong)uVar14 >> 0x20);
          iVar16 = (int)uVar14;
          fVar18 = (float)iVar1 / (float)iVar16;
          fVar19 = (float)iVar2 / fVar15;
          do {
            uVar7 = (*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0) >> 3) *
                    -0x5555555555555555;
            if (uVar7 < uVar11 || uVar7 - uVar11 == 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7c2b20);
              (*pcVar6)();
            }
            iVar17 = (int)((ulong)uVar14 >> 0x20);
            fVar12 = (float)iVar17;
            iVar8 = (int)(fVar19 * fVar12);
            fVar13 = (float)(int)uVar14;
            lStack_b0 = *(long *)(*(long *)(param_2 + 0xb0) + lVar10);
            lStack_a0 = CONCAT44(iVar8,(int)(fVar18 * fVar13));
            uStack_98 = lStack_a0 +
                        ((ulong)(uint)((int)((fVar19 + (float)iVar5 / fVar15) * fVar12) - iVar8) <<
                        0x20) & 0xffffffff00000000 |
                        (ulong)(uint)(int)((fVar18 + (float)iVar4 / (float)iVar16) * fVar13);
            uStack_a8 = uVar14;
            func_0x00010a7ba4b8(puVar9,&lStack_b0);
            uVar14 = NEON_smax(CONCAT44(iVar17 / 2,(int)uVar14 / 2),0x100000001,4);
            uVar11 = uVar11 + 1;
            lVar10 = lVar10 + 0x18;
          } while (uVar11 < *(uint *)(param_2 + 0x24));
          return;
        }
      }
    }
    uStack_a8 = *(undefined8 *)(param_2 + 0x80);
    uStack_98 = *(ulong *)(param_3 + 2);
    lStack_a0 = *(long *)param_3;
    lStack_b0 = lVar10;
    func_0x00010a7ba4b8(puVar9,&lStack_b0);
  }
  return;
}



/* Entry: 10a7c2b44; end: 10a7c2b4b;  */

undefined1 FUN_10a7c2b44(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa9);
}



/* Entry: 10a7c2b4c; end: 10a7c2ccf;  */

void FUN_10a7c2b4c(long *param_1,long param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined4 uStack_64;
  undefined8 uStack_60;
  long *plStack_58;
  
  if (*param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  plVar8 = *(long **)(param_2 + 0xa0);
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5 = (undefined8 *)0x78;
  uStack_64 = param_4;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bc82f0;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar6 == (long *)0x0) {
      uStack_60 = 0;
      plStack_58 = (long *)0x0;
    }
    else {
      plVar1 = plVar6 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uStack_60 = uVar2;
      plStack_58 = plVar6;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      plVar8 = plVar6 + 1;
      do {
        lVar7 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 != 0) goto LAB_10a7c2c38;
      (**(code **)(*plVar6 + 0x10))(plVar6);
      plVar8 = plVar6;
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
LAB_10a7c2c38:
  FUN_10a77d610(puVar5 + 3,&uStack_60,param_3,&uStack_64);
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = (long)(puVar5 + 3);
  param_1[1] = (long)puVar5;
  FUN_10a773954(param_2,*param_3 + 0x20);
  return;
}



/* Entry: 10a7c2cd0; end: 10a7c2cdf;  */

void FUN_10a7c2cd0(long *param_1)

{
  *(undefined1 *)((long)param_1 + 0xaa) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010a7c2cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))();
  return;
}



/* Entry: 10a7c2ce0; end: 10a7c2e13;  */

void FUN_10a7c2ce0(long param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (((*(byte *)(param_1 + 0xa9) & 1) == 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
    if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
      uVar2 = 0;
      uVar3 = 0;
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      do {
        uVar4 = (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
        if (uVar4 < (byte)uVar3 || uVar4 - (byte)uVar3 == 0) goto LAB_10a7c2e10;
        iVar6 = (int)((ulong)uVar5 >> 0x20);
        (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
                  (*(long **)(param_1 + 0x28),0,0,0,(int)uVar5,iVar6,0,
                   *(undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)(uVar3 & 0xff) * 0x18),uVar2,0
                  );
        uVar5 = NEON_smax(CONCAT44(iVar6 / 2,(int)uVar5 / 2),0x100000001,4);
        uVar3 = (uVar3 & 0xff) + 1;
        uVar2 = uVar3 & 0xff;
      } while ((uVar3 & 0xff) < *(uint *)(param_1 + 0x24));
    }
    else {
      if (*(undefined8 **)(param_1 + 0xb8) == *(undefined8 **)(param_1 + 0xb0)) {
LAB_10a7c2e10:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7c2e14);
        (*pcVar1)();
      }
      (**(code **)(**(long **)(param_1 + 0x28) + 0x98))
                (*(long **)(param_1 + 0x28),**(undefined8 **)(param_1 + 0xb0),0,0);
      (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10a7c2e14; end: 10a7c2e4b;  */

undefined8 * FUN_10a7c2e14(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 >> 0x3d == 0) {
    puVar1 = param_1;
    FUN_10a3ebd4c();
    *param_1 = puVar1;
    param_1[1] = puVar1;
    param_1[2] = puVar1 + param_2;
    return puVar1;
  }
  FUN_10a3ebd38();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a7c2e14(param_1);
    puVar2 = (undefined8 *)param_1[1];
    lVar3 = param_2 << 3;
    puVar1 = puVar2;
    do {
      *puVar1 = param_3;
      lVar3 = lVar3 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar3 != 0);
    param_1[1] = puVar2 + param_2;
  }
  return param_1;
}



/* Entry: 10a7c2e4c; end: 10a7c2ec7;  */

undefined8 * FUN_10a7c2e4c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a7c2e14(param_1);
    puVar1 = (undefined8 *)param_1[1];
    lVar3 = param_2 << 3;
    puVar2 = puVar1;
    do {
      *puVar2 = param_3;
      lVar3 = lVar3 + -8;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
    param_1[1] = puVar1 + param_2;
  }
  return param_1;
}



/* Entry: 10a7c2ec8; end: 10a7c2f3b;  */

void FUN_10a7c2ec8(undefined8 *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar1);
  return;
}



/* Entry: 10a7c2f3c; end: 10a7c384b;  */

/* WARNING: Possible PIC construction at 0x00010a7c357c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a7c3580) */

void FUN_10a7c2f3c(long param_1,ulong *param_2,undefined8 *param_3,uint param_4,ulong param_5,
                  int *param_6)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long unaff_x19;
  undefined8 unaff_x20;
  uint uVar28;
  ulong unaff_x21;
  ulong uVar29;
  long lVar30;
  ulong unaff_x22;
  ulong uVar31;
  long lVar32;
  ulong unaff_x23;
  long lVar33;
  undefined8 unaff_x24;
  long lVar34;
  uint uVar35;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  uint uVar36;
  ulong unaff_x28;
  ulong uVar37;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar38;
  int iVar39;
  ulong uVar40;
  int iVar41;
  undefined8 uVar42;
  int iVar43;
  float fVar44;
  int iVar45;
  int iVar46;
  float fVar47;
  int iVar48;
  undefined8 *puStack_170;
  int iStack_168;
  int iStack_164;
  long lStack_160;
  uint uStack_158;
  uint uStack_154;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  uint uStack_12c;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  ulong *puStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  
  puVar2 = &stack0xfffffffffffffff0;
  if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
    if (*param_6 == 0 && param_6[1] == 0) goto LAB_10a7c2f9c;
    bVar1 = *param_6 != (int)param_2[1] - (int)*param_2 ||
            param_6[1] != *(int *)((long)param_2 + 0xc) - *(int *)((long)param_2 + 4);
  }
  else {
LAB_10a7c2f9c:
    bVar1 = false;
  }
  puStack_c8 = param_3;
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    uVar20 = *(uint *)(param_1 + 8);
    uVar36 = uVar20;
    if (param_4 != 0) {
      uVar36 = param_4;
    }
    ppuVar3 = &PTR_DAT_110ae4700 + (ulong)uVar20 * 4;
    if (0x56 < uVar20) {
      ppuVar3 = &PTR_DAT_110ae4700;
    }
    bVar7 = *(byte *)((long)ppuVar3 + 0x1b);
    ppuVar3 = &PTR_DAT_110ae4700 + (ulong)uVar36 * 4;
    if (0x56 < uVar36) {
      ppuVar3 = &PTR_DAT_110ae4700;
    }
    bVar8 = *(byte *)((long)ppuVar3 + 0x1b);
    iVar45 = (int)*param_2;
    iVar48 = *(int *)((long)param_2 + 4);
    uVar29 = (long)(int)param_2[1] - (long)iVar45;
    lVar34 = (long)*(int *)((long)param_2 + 0xc) - (long)iVar48;
    iVar39 = (int)uVar29;
    uVar36 = (uint)bVar8;
    if (!bVar1) {
      lStack_160 = uVar29 * bVar8 * lVar34;
      iStack_164 = iVar39 * uVar36;
      iStack_168 = 0;
      puStack_170 = param_3;
      uStack_158 = uVar36;
      uStack_154 = (uint)bVar7;
      FUN_10a7c384c(param_1,(long)iVar45,(long)iVar48,uVar29,lVar34,*(undefined4 *)(param_1 + 0x80),
                    *(undefined4 *)(param_1 + 0x84),0);
      return;
    }
    uStack_c0 = uVar29 & 0xffffffff | lVar34 << 0x20;
    iVar43 = *(int *)(param_1 + 0x80);
    iVar46 = *(int *)(param_1 + 0x84);
    FUN_10a775818(&piStack_b0,param_1,&uStack_c0);
    if (*(int *)(param_1 + 0x24) != 0) {
      lVar33 = 0;
      uVar29 = 0;
      fVar44 = (float)iVar45 / (float)iVar43;
      fVar47 = (float)iVar48 / (float)iVar46;
      iVar45 = *param_6;
      iVar48 = param_6[1];
      uVar40 = *(ulong *)(param_1 + 0x80);
      uVar42 = 0;
      do {
        if ((ulong)((long)piStack_a8 - (long)piStack_b0 >> 4) <= uVar29) goto LAB_10a7c382c;
        iVar11 = (int)(fVar44 * (float)(int)uVar40);
        iVar41 = (int)(uVar40 >> 0x20);
        fVar38 = (float)iVar41;
        iVar12 = (int)(fVar47 * fVar38);
        iStack_168 = (*(int *)((long)piStack_b0 + lVar33) +
                     ((int *)((long)piStack_b0 + lVar33))[1] * iVar39) * uVar36;
        puStack_170 = puStack_c8;
        iStack_164 = iVar39 * (uint)bVar8;
        lStack_160 = (long)iVar45 * (long)(int)(uint)bVar8 * (long)iVar48;
        uStack_158 = uVar36;
        uStack_154 = (uint)bVar7;
        uStack_e0 = uVar40;
        uStack_d8 = uVar42;
        FUN_10a7c384c(param_1,iVar11,iVar12,
                      (int)((fVar44 + (float)iVar39 / (float)iVar43) * (float)(int)uVar40) - iVar11,
                      (int)((fVar47 + (float)(int)lVar34 / (float)iVar46) * fVar38) - iVar12,
                      uVar40 & 0xffffffff,iVar41,uVar29);
        uVar40 = NEON_smax(CONCAT44((int)(uStack_e0 >> 0x20) / 2,(int)uStack_e0 / 2),0x100000001,4);
        uVar29 = uVar29 + 1;
        lVar33 = lVar33 + 0x10;
      } while (uVar29 < *(uint *)(param_1 + 0x24));
    }
LAB_10a7c35a0:
    if (piStack_b0 != (int *)0x0) {
      piStack_a8 = piStack_b0;
      __ZdlPv();
    }
    return;
  }
  if (((param_5 & 1) == 0) && ((*(byte *)(param_1 + 0xaa) & 1) == 0)) {
    if (!bVar1) {
      puStack_170 = (undefined8 *)0x0;
      (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))();
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0xa8) != '\x01') {
    return;
  }
  uVar20 = *(uint *)(param_1 + 8);
  uVar36 = uVar20;
  if (param_4 != 0) {
    uVar36 = param_4;
  }
  ppuVar3 = &PTR_DAT_110ae4700 + (ulong)uVar20 * 4;
  if (0x56 < uVar20) {
    ppuVar3 = &PTR_DAT_110ae4700;
  }
  uVar29 = (ulong)*(byte *)((long)ppuVar3 + 0x1b);
  ppuVar4 = &PTR_DAT_110ae4700 + (ulong)uVar36 * 4;
  if (0x56 < uVar36) {
    ppuVar4 = &PTR_DAT_110ae4700;
  }
  uVar40 = (ulong)*(byte *)((long)ppuVar4 + 0x1b);
  iVar45 = (int)*param_2;
  lStack_e8 = (long)iVar45;
  iVar48 = *(int *)((long)param_2 + 4);
  uStack_e0 = (ulong)iVar48;
  uVar36 = (int)param_2[1] - iVar45;
  uVar20 = *(int *)((long)param_2 + 0xc) - iVar48;
  uVar37 = (ulong)uVar20;
  uVar35 = (uint)*(byte *)((long)ppuVar4 + 0x1b);
  uVar28 = (uint)*(byte *)((long)ppuVar3 + 0x1b);
  if (bVar1) {
    uStack_c0 = CONCAT44(uVar20,uVar36);
    iVar45 = *(int *)(param_1 + 0x80);
    iVar48 = *(int *)(param_1 + 0x84);
    FUN_10a775818(&piStack_b0);
    if (*(int *)(param_1 + 0x24) == 0) goto LAB_10a7c35a0;
    unaff_x27 = 0;
    fVar44 = (float)(int)lStack_e8 / (float)iVar45;
    fVar47 = (float)(int)uStack_e0 / (float)iVar48;
    unaff_x22 = (long)*param_6 * (long)(int)uVar35 * (long)param_6[1];
    uVar37 = *(ulong *)(param_1 + 0x80);
    lStack_148 = uVar29 * 8;
    if ((long)piStack_a8 - (long)piStack_b0 >> 4 != 0) {
      iVar39 = (int)uVar37;
      uVar17 = (uint)(fVar44 * (float)iVar39);
      uStack_108 = (ulong)uVar17;
      uVar18 = (uint)((fVar44 + (float)(int)uVar36 / (float)iVar45) * (float)iVar39);
      uStack_110 = (ulong)uVar18;
      uStack_128 = uVar37 & 0xffffffff;
      uStack_138 = 0;
      uStack_12c = (uint)(uVar37 >> 0x20);
      uVar19 = (uint)(fVar47 * (float)(int)uStack_12c);
      uStack_120 = (ulong)uVar19;
      uVar20 = (uint)((fVar47 + (float)(int)uVar20 / (float)iVar48) * (float)(int)uStack_12c);
      uStack_118 = (ulong)uVar20;
      uStack_140 = uVar37;
      if (uVar35 == uVar28) {
        if ((int)uVar19 < (int)uVar20) {
          lVar34 = 0;
          uVar23 = (uVar18 - uVar17) * uVar28;
          puStack_f0 = (ulong *)(-(ulong)(uVar23 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar23 << 3)
          ;
          uStack_e0 = (long)(int)uVar35 * (long)(int)(uVar18 - uVar17);
          lStack_f8 = (long)(int)uVar20 - (long)(int)uVar19;
          lStack_100 = (long)(int)lStack_148 * (long)iVar39;
          uVar37 = uVar29 * (((long)(int)uVar19 + -1) * (long)iVar39 + (long)(int)uVar17);
          lStack_e8 = (long)(int)uVar28 * (long)iVar39;
          lVar33 = lStack_148 * ((long)(int)uVar17 + (long)iVar39 * (long)(int)uVar19);
          do {
            lVar21 = ((long)*piStack_b0 + (long)(int)(((int)lVar34 + piStack_b0[1]) * uVar36)) *
                     uVar40;
            if (((int)lVar21 < 0) || (unaff_x22 < uStack_e0 + lVar21)) break;
            plVar5 = *(long **)(param_1 + 0xb0);
            if ((*(long *)(param_1 + 0xb8) - (long)plVar5 >> 3) * -0x5555555555555555 == 0)
            goto LAB_10a7c382c;
            uVar37 = uVar37 + lStack_e8;
            if ((ulong)(plVar5[1] - *plVar5 >> 3) <= uVar37) goto LAB_10a7c382c;
            lVar34 = lVar34 + 1;
            lVar22 = lVar33 + lStack_100;
            _memcpy(*plVar5 + lVar33,puStack_c8 + lVar21,puStack_f0);
            lVar33 = lVar22;
          } while (lStack_f8 != lVar34);
        }
      }
      else if ((int)uVar19 < (int)uVar20) {
        iVar45 = 0;
        uVar37 = uVar29 * ((long)(int)uVar17 + (long)iVar39 * (long)(int)uVar19);
        uVar23 = uVar19;
        do {
          if ((int)uVar17 < (int)uVar18) {
            iVar48 = 0;
            uVar31 = uVar37;
            lVar34 = (long)(int)uVar17;
            do {
              uVar9 = (((int)lVar34 - uVar17) + *piStack_b0 +
                      ((uVar23 - uVar19) + piStack_b0[1]) * uVar36) * uVar35;
              if ((-1 < (int)uVar9) && (uVar9 + uVar40 <= unaff_x22 && uVar28 != 0)) {
                uVar27 = 0;
                plVar5 = *(long **)(param_1 + 0xb0);
                lVar33 = *(long *)(param_1 + 0xb8);
                puVar13 = puStack_c8 +
                          uVar35 * (*piStack_b0 + iVar48 + uVar36 * (iVar45 + piStack_b0[1]));
                uVar24 = uVar31;
                uVar25 = uVar29;
                do {
                  if (uVar27 < uVar40) {
                    uVar42 = *puVar13;
                  }
                  else {
                    uVar42 = 0xffffffffffffffff;
                  }
                  if (((lVar33 - (long)plVar5 >> 3) * -0x5555555555555555 == 0) ||
                     ((ulong)(plVar5[1] - *plVar5 >> 3) <= uVar24)) goto LAB_10a7c382c;
                  *(undefined8 *)(*plVar5 + uVar24 * 8) = uVar42;
                  uVar27 = uVar27 + 1;
                  puVar13 = puVar13 + 1;
                  uVar24 = uVar24 + 1;
                  uVar25 = uVar25 - 1;
                } while (uVar25 != 0);
              }
              lVar34 = lVar34 + 1;
              iVar48 = iVar48 + 1;
              uVar31 = uVar31 + uVar29;
            } while ((uint)lVar34 != uVar18);
          }
          uVar23 = uVar23 + 1;
          iVar45 = iVar45 + 1;
          uVar37 = uVar37 + (long)(int)uVar28 * (long)iVar39;
        } while (uVar23 != uVar20);
      }
      uVar31 = uStack_128;
      uVar20 = uStack_12c;
      unaff_x24 = 0xaaaaaaaaaaaaaaab;
      uStack_c0 = uStack_108 | uStack_120 << 0x20;
      uStack_b8 = uStack_c0 + ((ulong)(uint)((int)uStack_118 - (int)uStack_120) << 0x20) &
                  0xffffffff00000000 | uStack_110;
      if ((*(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0) >> 3) *
          -0x5555555555555555 != 0) {
        unaff_x23 = (ulong)uStack_12c;
        unaff_x20 = 0x18;
        FUN_10a7c3b88(param_1,**(undefined8 **)(param_1 + 0xb0),&uStack_c0,uStack_128,unaff_x23,
                      uVar29);
        if ((*(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0) >> 3) *
            -0x5555555555555555 != 0) {
          uVar42 = **(undefined8 **)(param_1 + 0xb0);
          puVar15 = &uStack_c0;
          unaff_x30 = 0x10a7c3580;
          register0x00000008 = (BADSPACEBASE *)&puStack_170;
          unaff_x19 = param_1;
          unaff_x21 = uVar29;
          unaff_x25 = uVar40;
          unaff_x26 = (ulong)uVar36;
          unaff_x28 = uVar31;
          unaff_x29 = puVar2;
          goto SUB_10a7c4088;
        }
      }
    }
  }
  else {
    iVar39 = *(int *)(param_1 + 0x80);
    uVar31 = (ulong)iVar39;
    puStack_f0 = param_2;
    if (uVar35 == uVar28) {
      if (0 < (int)uVar20) {
        lVar34 = 0;
        lVar33 = (lStack_e8 + (long)iVar48 * (long)iVar39) * uVar29 * 8;
        iVar45 = 0;
        do {
          plVar5 = *(long **)(param_1 + 0xb0);
          if ((*(long **)(param_1 + 0xb8) == plVar5) ||
             ((ulong)(plVar5[1] - *plVar5 >> 3) <=
              (lStack_e8 + (lVar34 + uStack_e0) * uVar31) * uVar29)) goto LAB_10a7c382c;
          uVar37 = uVar37 - 1;
          lVar34 = lVar34 + 1;
          _memcpy(*plVar5 + lVar33,puStack_c8 + iVar45,
                  -(ulong)(uVar36 * uVar28 >> 0x1f) & 0xfffffff800000000 |
                  (ulong)(uVar36 * uVar28) << 3);
          lVar33 = lVar33 + (long)iVar39 * (long)(int)uVar28 * 8;
          iVar45 = iVar45 + uVar36 * uVar35;
        } while (uVar37 != 0);
      }
    }
    else if (0 < (int)uVar20) {
      uVar27 = 0;
      iVar45 = (iVar45 + iVar48 * iVar39) * uVar28;
      do {
        if (0 < (int)uVar36) {
          uVar24 = 0;
          puVar13 = puStack_c8;
          iVar48 = iVar45;
          do {
            uVar25 = (ulong)iVar48;
            if (uVar28 != 0) {
              uVar26 = 0;
              plVar5 = *(long **)(param_1 + 0xb0);
              plVar6 = *(long **)(param_1 + 0xb8);
              uVar14 = uVar29;
              puVar16 = puVar13;
              do {
                if (uVar26 < uVar40) {
                  uVar42 = *puVar16;
                }
                else {
                  uVar42 = 0xffffffffffffffff;
                }
                if ((plVar6 == plVar5) || ((ulong)(plVar5[1] - *plVar5 >> 3) <= uVar25))
                goto LAB_10a7c382c;
                *(undefined8 *)(*plVar5 + uVar25 * 8) = uVar42;
                uVar26 = uVar26 + 1;
                puVar16 = puVar16 + 1;
                uVar25 = uVar25 + 1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            uVar24 = uVar24 + 1;
            puVar13 = puVar13 + uVar40;
            iVar48 = iVar48 + uVar28;
          } while (uVar24 != uVar36);
        }
        uVar27 = uVar27 + 1;
        puStack_c8 = puStack_c8 + (long)(int)uVar35 * (long)(int)uVar36;
        iVar45 = iVar45 + iVar39 * uVar28;
      } while (uVar27 != uVar37);
    }
    puVar15 = puStack_f0;
    if (*(undefined8 **)(param_1 + 0xb8) != *(undefined8 **)(param_1 + 0xb0)) {
      FUN_10a7c3b88(param_1,**(undefined8 **)(param_1 + 0xb0),puStack_f0,uVar31,
                    *(undefined4 *)(param_1 + 0x84),uVar29);
      if (*(undefined8 **)(param_1 + 0xb8) != *(undefined8 **)(param_1 + 0xb0)) {
        uVar42 = **(undefined8 **)(param_1 + 0xb0);
        uVar20 = *(uint *)(param_1 + 0x84);
SUB_10a7c4088:
        *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        iVar48 = *(int *)(param_1 + 0x10);
        iVar45 = *(int *)(param_1 + 0xc) + iVar48 + *(int *)(param_1 + 0x14);
        if (iVar48 < iVar45) {
          *(undefined8 *)((long)register0x00000008 + -0x68) = uVar42;
          uVar40 = *puVar15;
          iVar43 = *(int *)((long)puVar15 + 4);
          uVar37 = puVar15[1];
          iVar46 = *(int *)((long)puVar15 + 0xc);
          *(int *)((long)register0x00000008 + -0x80) = (int)uVar40;
          uVar36 = (int)uVar40 - iVar45;
          uVar36 = uVar36 & ((int)uVar36 >> 0x1f ^ 0xffffffffU);
          iVar39 = (int)uVar37 + iVar45;
          iVar11 = (int)uVar31;
          if (iVar11 <= iVar39) {
            iVar39 = iVar11;
          }
          uVar35 = iVar43 - iVar45;
          uVar35 = uVar35 & ((int)uVar35 >> 0x1f ^ 0xffffffffU);
          uVar40 = (ulong)uVar35;
          uVar28 = iVar46 + iVar45;
          if ((int)uVar20 <= (int)uVar28) {
            uVar28 = uVar20;
          }
          iVar45 = (int)uVar37 + iVar48;
          if (iVar11 <= iVar45) {
            iVar45 = iVar11;
          }
          *(int *)((long)register0x00000008 + -0x7c) = iVar45;
          uVar18 = iVar43 - iVar48;
          uVar17 = iVar46 + iVar48;
          uVar19 = uVar17;
          if ((int)uVar20 <= (int)uVar17) {
            uVar19 = uVar20;
          }
          *(ulong *)((long)register0x00000008 + -0x78) = (ulong)uVar19;
          *(ulong *)((long)register0x00000008 + -0x70) = (ulong)uVar36;
          *(int *)((long)register0x00000008 + -0x84) = iVar39;
          *(ulong *)((long)register0x00000008 + -0x90) = uVar29 * 8;
          lVar34 = uVar29 * 8 * (long)(int)(iVar39 - uVar36);
          if (((int)uVar35 < (int)uVar18) && (lVar34 != 0)) {
            lVar33 = *(long *)((long)register0x00000008 + -0x68) +
                     ((long)iVar11 * uVar40 +
                     (*(ulong *)((long)register0x00000008 + -0x70) & 0xffffffff)) * uVar29 * 8;
            do {
              _bzero(lVar33,lVar34);
              uVar40 = uVar40 + 1;
              lVar33 = lVar33 + (long)iVar11 * uVar29 * 8;
            } while (uVar40 < uVar18);
          }
          uVar18 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
          lVar33 = *(long *)((long)register0x00000008 + -0x68);
          if (((int)uVar17 < (int)uVar28) && (lVar34 != 0)) {
            iVar45 = uVar28 - (int)*(undefined8 *)((long)register0x00000008 + -0x78);
            lVar21 = lVar33 + (*(long *)((long)register0x00000008 + -0x70) +
                              (long)(int)*(undefined8 *)((long)register0x00000008 + -0x78) *
                              (long)iVar11) * uVar29 * 8;
            do {
              _bzero(lVar21,lVar34);
              lVar21 = lVar21 + (long)iVar11 * uVar29 * 8;
              iVar45 = iVar45 + -1;
            } while (iVar45 != 0);
          }
          if ((int)uVar18 < (int)*(long *)((long)register0x00000008 + -0x78)) {
            lVar34 = 0;
            iVar45 = *(int *)((long)register0x00000008 + -0x7c);
            uVar40 = *(ulong *)((long)register0x00000008 + -0x70);
            lVar30 = *(long *)((long)register0x00000008 + -0x90) *
                     (long)(int)((*(int *)((long)register0x00000008 + -0x80) - iVar48 &
                                 (*(int *)((long)register0x00000008 + -0x80) - iVar48 >> 0x1f ^
                                 0xffffffffU)) - (int)uVar40);
            lVar32 = *(long *)((long)register0x00000008 + -0x90) *
                     (long)(*(int *)((long)register0x00000008 + -0x84) - iVar45);
            lVar21 = *(long *)((long)register0x00000008 + -0x78) - (ulong)uVar18;
            lVar22 = (long)iVar11 * (ulong)uVar18;
            do {
              if (lVar30 != 0) {
                _bzero(lVar33 + (lVar22 + (uVar40 & 0xffffffff)) * uVar29 * 8 + lVar34,lVar30);
              }
              if (lVar32 != 0) {
                _bzero(lVar33 + (lVar22 + iVar45) * uVar29 * 8 + lVar34,lVar32);
              }
              lVar34 = lVar34 + (long)iVar11 * uVar29 * 8;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
          }
        }
        return;
      }
    }
  }
LAB_10a7c382c:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a7c3830);
  (*pcVar10)();
}



/* Entry: 10a7c384c; end: 10a7c3b87;  */

void FUN_10a7c384c(long param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                  int param_7,undefined4 param_8,long param_9,int param_10,uint param_11,
                  ulong param_12,uint param_13,uint param_14)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  iVar16 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14);
  uVar2 = param_2 - iVar16 & (param_2 - iVar16 >> 0x1f ^ 0xffffffffU);
  uVar3 = param_3 - iVar16 & (param_3 - iVar16 >> 0x1f ^ 0xffffffffU);
  iVar9 = param_4 + param_2 + iVar16;
  if (param_6 <= iVar9) {
    iVar9 = param_6;
  }
  iVar1 = param_5 + param_3 + iVar16;
  if (param_7 <= iVar1) {
    iVar1 = param_7;
  }
  uVar5 = iVar9 - uVar2;
  uVar13 = (ulong)uVar5;
  uVar6 = iVar1 - uVar3;
  if (0 < (int)uVar5 && 0 < (int)uVar6) {
    uVar17 = (ulong)param_13;
    uVar4 = (ulong)param_14;
    FUN_10a7c2e4c(&lStack_78,uVar6 * uVar4 * uVar13,0);
    if (iVar16 <= param_2) {
      param_2 = iVar16;
    }
    if (iVar16 <= param_3) {
      param_3 = iVar16;
    }
    if (param_13 == param_14) {
      if (0 < (int)param_5) {
        lVar15 = (long)param_10;
        uVar17 = (ulong)param_5;
        iVar16 = param_14 * (param_2 + param_3 * uVar5);
        do {
          if ((lVar15 < 0) || (param_12 < uVar4 * (long)(int)param_4 + lVar15)) break;
          if ((ulong)(lStack_70 - lStack_78 >> 3) <= (ulong)(long)iVar16) {
LAB_10a7c3b68:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a7c3b6c);
            (*pcVar7)();
          }
          _memcpy(lStack_78 + (long)iVar16 * 8,param_9 + lVar15 * 8,(long)(int)param_4 * uVar4 * 8);
          iVar16 = iVar16 + param_14 * uVar5;
          lVar15 = lVar15 + (int)param_11;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
    }
    else if (0 < (int)param_5) {
      uVar12 = 0;
      param_9 = param_9 + (long)param_10 * 8;
      iVar16 = param_14 * (param_2 + param_3 * uVar5);
      do {
        if (0 < (int)param_4) {
          uVar8 = 0;
          lVar15 = param_9;
          iVar9 = iVar16;
          do {
            if (((param_14 != 0) &&
                (lVar10 = (long)param_10 + uVar12 * (long)(int)param_11 + uVar8 * uVar17,
                -1 < lVar10)) && (lVar10 + uVar17 <= param_12)) {
              uVar11 = 0;
              do {
                if (uVar11 < uVar17) {
                  uVar14 = *(undefined8 *)(lVar15 + uVar11 * 8);
                }
                else {
                  uVar14 = 0xffffffffffffffff;
                }
                if ((ulong)(lStack_70 - lStack_78 >> 3) <= (long)iVar9 + uVar11) goto LAB_10a7c3b68;
                *(undefined8 *)(lStack_78 + (long)iVar9 * 8 + uVar11 * 8) = uVar14;
                uVar11 = uVar11 + 1;
              } while (uVar4 != uVar11);
            }
            uVar8 = uVar8 + 1;
            lVar15 = lVar15 + uVar17 * 8;
            iVar9 = iVar9 + param_14;
          } while (uVar8 != param_4);
        }
        uVar12 = uVar12 + 1;
        param_9 = param_9 + (-(ulong)(param_11 >> 0x1f) & 0xfffffff800000000 | (ulong)param_11 << 3)
        ;
        iVar16 = iVar16 + param_14 * uVar5;
      } while (uVar12 != param_5);
    }
    uStack_88 = CONCAT44(param_3,param_2);
    uStack_80 = CONCAT44(param_3 + param_5,param_2 + param_4);
    FUN_10a7c3b88(param_1,lStack_78,&uStack_88,uVar13,uVar6,uVar4);
    func_0x00010a7c4088(param_1,lStack_78,&uStack_88,uVar13,uVar6,uVar4);
    (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
              (*(long **)(param_1 + 0x28),uVar2,uVar3,0,uVar13,uVar6,0,lStack_78,param_8,0);
    (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
    if (lStack_78 != 0) {
      lStack_70 = lStack_78;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a7c3b88; end: 10a7c4287;  */

void FUN_10a7c3b88(long param_1,long param_2,int *param_3,uint param_4,int param_5,uint param_6)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar19 = *param_3;
    iVar4 = param_3[1];
    lVar12 = (long)iVar19;
    uVar3 = param_3[2];
    iVar21 = param_3[3];
    if ((uVar3 - iVar19 != 0 && iVar19 <= (int)uVar3) && iVar4 < iVar21) {
      lVar13 = (long)iVar4;
      uVar5 = (uVar3 - iVar19) * param_6;
      uVar22 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3;
      uVar9 = (ulong)param_6;
      lVar1 = param_2 + (long)(int)((iVar4 * param_4 + iVar19) * param_6) * 8;
      lVar10 = (long)(int)param_4;
      if (0 < iVar4) {
        lVar15 = param_2 + (lVar12 + (lVar13 + -1) * lVar10) * uVar9 * 8;
        lVar18 = 1;
        lVar24 = lVar13;
        do {
          _memcpy(lVar15,lVar1,uVar22);
          if (*(int *)(param_1 + 0x10) <= lVar18) break;
          lVar18 = lVar18 + 1;
          lVar15 = lVar15 + lVar10 * uVar9 * -8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      iVar7 = iVar21 + -1;
      iVar20 = iVar21;
      if (iVar21 <= param_5) {
        iVar20 = param_5;
      }
      lVar18 = param_2 + (long)(int)((iVar7 * param_4 + iVar19) * param_6) * 8;
      if (iVar21 < param_5) {
        lVar15 = param_2 + (lVar10 + (long)(int)param_4 * (long)iVar7 + lVar12) * uVar9 * 8;
        uVar16 = 1;
        do {
          _memcpy(lVar15,lVar18,uVar22);
          uVar2 = uVar16 + 1;
          lVar15 = lVar15 + lVar10 * uVar9 * 8;
          bVar8 = (long)uVar16 < (long)*(int *)(param_1 + 0x10);
          uVar16 = uVar2;
        } while (bVar8 && (iVar20 - iVar21) + 1 != uVar2);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      lVar15 = (ulong)param_6 * 8;
      if (0 < iVar19) {
        lVar11 = iVar21 - lVar13;
        lVar24 = param_2 + (lVar12 + (long)iVar4 * (long)(int)param_4) * uVar9 * 8;
        iVar25 = param_6 * (iVar19 + iVar4 * param_4 + -1);
        iVar20 = 1;
        lVar14 = lVar11;
        lVar23 = lVar24;
        iVar17 = iVar25;
        do {
          do {
            _memcpy(param_2 + (long)iVar25 * 8,lVar23,lVar15);
            iVar25 = iVar25 + param_6 * param_4;
            lVar14 = lVar14 + -1;
            lVar23 = lVar23 + lVar10 * uVar9 * 8;
          } while (lVar14 != 0);
          if (*(int *)(param_1 + 0x10) <= iVar20) break;
          iVar25 = iVar17 - param_6;
          bVar8 = iVar20 != iVar19;
          iVar20 = iVar20 + 1;
          lVar14 = lVar11;
          lVar23 = lVar24;
          iVar17 = iVar25;
        } while (bVar8);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      iVar20 = uVar3 - 1;
      uVar5 = uVar3;
      if ((int)uVar3 <= (int)param_4) {
        uVar5 = param_4;
      }
      if ((int)uVar3 < (int)param_4) {
        lVar11 = iVar21 - lVar13;
        iVar25 = param_6 * (uVar3 + iVar4 * param_4 + -1);
        lVar24 = param_2 + (uVar9 + uVar9 * ((long)iVar20 + (long)iVar4 * (long)(int)param_4)) * 8;
        lVar14 = lVar11;
        iVar17 = iVar25;
        lVar23 = lVar24;
        uVar22 = 1;
        do {
          do {
            _memcpy(lVar24,param_2 + (long)iVar17 * 8,lVar15);
            lVar24 = lVar24 + lVar10 * uVar9 * 8;
            lVar14 = lVar14 + -1;
            iVar17 = iVar17 + param_6 * param_4;
          } while (lVar14 != 0);
          uVar16 = uVar22 + 1;
          lVar24 = lVar23 + lVar15;
          bVar8 = (long)uVar22 < (long)*(int *)(param_1 + 0x10);
          lVar14 = lVar11;
          iVar17 = iVar25;
          lVar23 = lVar24;
          uVar22 = uVar16;
        } while (bVar8 && uVar16 != (uVar5 - uVar3) + 1);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      lVar24 = 0;
      lVar10 = lVar10 - iVar20;
      iVar25 = param_6 * (uVar3 + iVar21 * param_4);
      iVar21 = param_6 * (iVar19 + iVar21 * param_4 + -1);
      iVar6 = param_4 * (iVar4 + -1);
      iVar17 = param_6 * (uVar3 + iVar6);
      iVar19 = param_6 * (iVar19 + iVar6 + -1);
      do {
        lVar13 = lVar13 + -1;
        lVar14 = lVar24 + 1;
        if ((lVar14 <= lVar12) && (-1 < lVar13)) {
          _memcpy(param_2 + (long)iVar19 * 8,lVar1,lVar15);
        }
        if ((-1 < lVar13) && (lVar14 < lVar10)) {
          _memcpy(param_2 + (long)iVar17 * 8,
                  param_2 + (long)(int)((iVar20 + iVar4 * param_4) * param_6) * 8,lVar15);
        }
        lVar23 = (long)iVar7 + 1 + lVar24;
        if ((lVar14 <= lVar12) && (lVar23 < param_5)) {
          _memcpy(param_2 + (long)iVar21 * 8,lVar18,lVar15);
        }
        if ((lVar23 < param_5) && (lVar14 < lVar10)) {
          _memcpy(param_2 + (long)iVar25 * 8,
                  param_2 + (long)(int)((iVar7 * param_4 + iVar20) * param_6) * 8,lVar15);
        }
        lVar24 = lVar24 + 1;
        iVar25 = iVar25 + param_6 + param_6 * param_4;
        iVar21 = iVar21 + param_6 * (param_4 - 1);
        iVar17 = iVar17 + (param_6 - param_6 * param_4);
        iVar19 = iVar19 + param_6 * ~param_4;
      } while (lVar24 < *(int *)(param_1 + 0x10));
    }
  }
  return;
}



/* Entry: 10a7c4288; end: 10a7c4c9b;  */

void FUN_10a7c4288(code **param_1,code **param_2,code **param_3,code **param_4,code *param_5,
                  code **param_6,code *param_7,ulong param_8)

{
  code **ppcVar1;
  int iVar2;
  uint uVar3;
  undefined **ppuVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  byte bVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [4];
  undefined1 auVar20 [4];
  uint uVar21;
  code **ppcVar22;
  long *plVar23;
  code **ppcVar24;
  code **ppcVar25;
  code **ppcVar26;
  uint uVar27;
  code **ppcVar28;
  uint uVar29;
  long lVar30;
  int iVar31;
  uint uVar32;
  int *piVar33;
  bool bVar34;
  ulong uVar35;
  ulong uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  code *pcVar42;
  code **ppcVar43;
  ulong uVar44;
  code *unaff_x23;
  int iVar45;
  uint uVar46;
  code *pcVar47;
  long lVar48;
  float fVar49;
  uint uVar50;
  float fVar51;
  uint uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  long lStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  uint uStack_184;
  code **ppcStack_180;
  code *pcStack_178;
  code **ppcStack_170;
  code *pcStack_168;
  code **ppcStack_160;
  int iStack_158;
  uint uStack_154;
  code **ppcStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  code **ppcStack_138;
  code **ppcStack_130;
  code *pcStack_120;
  code **ppcStack_118;
  code *pcStack_110;
  code *pcStack_108;
  undefined1 auStack_f4 [4];
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  uint uStack_d0;
  uint uStack_cc;
  long lStack_b0;
  
  uVar21 = (uint)param_8;
  uVar39 = (uint)param_7;
  uVar29 = (uint)param_5;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar42 = *param_4;
  ppcVar24 = param_1;
  ppcVar25 = param_2;
  ppcVar43 = param_3;
  ppcVar26 = param_4;
  ppcVar28 = param_6;
  uVar27 = uVar29;
  if ((pcVar42 == (code *)0x0) ||
     (ppcVar22 = *(code ***)(pcVar42 + 8), ppcVar24 = ppcVar22, ppcVar22 == (code **)0x0))
  goto LAB_10a7c4860;
  __ZNSt3__119__shared_weak_count4lockEv();
  uVar21 = (uint)param_8;
  uVar39 = (uint)param_7;
  uVar27 = (uint)param_5;
  ppcVar24 = ppcVar22;
  ppcStack_118 = ppcVar22;
  if (ppcVar22 == (code **)0x0) goto LAB_10a7c4860;
  unaff_x23 = *(code **)pcVar42;
  pcStack_120 = unaff_x23;
  if (unaff_x23 == (code *)0x0) goto LAB_10a7c4830;
  if (*(char *)((long)param_1 + 0xa9) == '\x01') {
    if (((*(char *)(param_1 + 0x15) == '\x01') && (param_1[5] != (code *)0x0)) &&
       (*param_4 != (code *)0x0)) {
      plVar23 = *(long **)(unaff_x23 + 0x28);
      ppcVar24 = (code **)0x0;
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x50))();
        ppcVar24 = (code **)param_1[5];
        (**(code **)(*ppcVar24 + 0x50))();
        uVar21 = (uint)param_8;
        uVar39 = (uint)param_7;
        uVar27 = (uint)param_5;
        if (((int)plVar23 == (int)ppcVar24) && (pcVar42 = *param_4, *(long *)(pcVar42 + 0x18) != 0))
        {
          ppcVar43 = *(code ***)(unaff_x23 + 0x28);
          if (ppcVar43 == (code **)0x0) {
            uVar44 = *(ulong *)(unaff_x23 + 0x80);
          }
          else {
            ppcVar24 = ppcVar43;
            (**(code **)(*ppcVar43 + 0x28))();
            (**(code **)(*ppcVar43 + 0x30))();
            uVar39 = (uint)ppcVar24;
            if (uVar39 < 2) {
              uVar39 = 1;
            }
            uVar21 = (uint)ppcVar43;
            if (uVar21 < 2) {
              uVar21 = 1;
            }
            uVar44 = CONCAT44(uVar21,uVar39);
            ppcVar24 = ppcVar43;
          }
          uVar21 = (uint)param_8;
          uVar39 = (uint)param_7;
          uVar27 = (uint)param_5;
          if ((int)*(uint *)(param_1 + 3) < 2) {
            bVar14 = 1 < (int)*(uint *)((long)param_1 + 0x1c);
          }
          else {
            bVar14 = true;
          }
          ppcVar43 = (code **)(uVar44 >> 0x20);
          if ((*(char *)((long)param_1 + 0x21) == '\x01') && (*(uint *)((long)param_1 + 0x24) != 0))
          {
            if (*(uint *)param_6 == 0 && *(uint *)((long)param_6 + 4) == 0) goto LAB_10a7c48f0;
            bVar34 = *(uint *)param_6 != *(uint *)(param_2 + 1) - *(uint *)param_2 ||
                     *(uint *)((long)param_6 + 4) !=
                     *(uint *)((long)param_2 + 0xc) - *(uint *)((long)param_2 + 4);
            if (!bVar14) goto LAB_10a7c493c;
LAB_10a7c48f8:
            auStack_f4 = (undefined1  [4])0x0;
            piVar33 = *(int **)(pcVar42 + 0x18);
            if (bVar34) goto LAB_10a7c4954;
            piVar33 = piVar33 + 0x10;
            param_2 = param_3;
LAB_10a7c4b7c:
            ppcStack_130 = (code **)0x0;
            ppcStack_138 = (code **)0x0;
            uStack_140 = (code **)0x0;
            ppuStack_e8 = *(undefined ***)(piVar33 + 2);
            pcStack_f0 = *(code **)piVar33;
            pcStack_108 = param_2[1];
            pcStack_110 = *param_2;
            uVar39 = *(uint *)(param_1 + 0x10);
            uVar21 = *(uint *)((long)param_1 + 0x84);
            ppcVar24 = (code **)auStack_f4;
            ppcVar25 = (code **)&uStack_140;
            ppcVar26 = &pcStack_110;
            FUN_10a7c4c9c(ppcVar24,ppcVar25,&pcStack_f0);
            uVar27 = (uint)uVar44;
            ppcVar28 = ppcVar43;
          }
          else {
LAB_10a7c48f0:
            bVar34 = false;
            if (bVar14) goto LAB_10a7c48f8;
LAB_10a7c493c:
            auStack_f4 = *(undefined1 (*) [4])(param_1 + 2);
            piVar33 = *(int **)(pcVar42 + 0x18);
            if (!bVar34) goto LAB_10a7c4b7c;
LAB_10a7c4954:
            auVar20 = auStack_f4;
            ppcStack_130 = (code **)0x0;
            ppcStack_138 = (code **)0x0;
            uStack_140 = (code **)0x0;
            uVar29 = *(uint *)((long)param_1 + 0x24);
            if (uVar29 != 0) {
              uVar46 = 0;
              iVar31 = *piVar33;
              iVar7 = piVar33[1];
              iVar37 = piVar33[2];
              iVar8 = piVar33[3];
              fVar49 = (float)(int)uVar44;
              fVar53 = (float)iVar31 / fVar49;
              iVar45 = (int)(uVar44 >> 0x20);
              fVar51 = (float)iVar45;
              fVar54 = (float)iVar7 / fVar51;
              uVar5 = *(uint *)param_2;
              uVar9 = *(uint *)((long)param_2 + 4);
              uVar50 = *(uint *)(param_1 + 0x10);
              uVar52 = *(uint *)((long)param_1 + 0x84);
              fVar55 = (float)(int)uVar5 / (float)(int)uVar50;
              fVar56 = (float)(int)uVar9 / (float)(int)uVar52;
              uVar6 = *(uint *)(param_2 + 1);
              uVar10 = *(uint *)((long)param_2 + 0xc);
              do {
                uVar39 = (int)uVar44 >> (uVar46 & 0x1f);
                if ((int)uVar39 < 2) {
                  uVar39 = 1;
                }
                uVar21 = iVar45 >> (uVar46 & 0x1f);
                if ((int)uVar21 < 2) {
                  uVar21 = 1;
                }
                uVar27 = (int)*(uint *)(param_1 + 0x10) >> (uVar46 & 0x1f);
                if ((int)uVar27 < 2) {
                  uVar27 = 1;
                }
                uVar3 = (int)*(uint *)((long)param_1 + 0x84) >> (uVar46 & 0x1f);
                uVar40 = (uint)(fVar53 * (float)uVar39);
                uVar41 = (uint)(fVar54 * (float)uVar21);
                if ((int)uVar3 < 2) {
                  uVar3 = 1;
                }
                uVar32 = (uint)(fVar55 * (float)uVar27);
                uVar38 = (uint)(fVar56 * (float)uVar3);
                uVar15 = (int)((fVar53 + (float)(iVar37 - iVar31) / fVar49) * (float)uVar39) -
                         uVar40;
                uVar16 = (int)((fVar54 + (float)(iVar8 - iVar7) / fVar51) * (float)uVar21) - uVar41;
                uVar17 = (int)((fVar55 + (float)(int)(uVar6 - uVar5) / (float)(int)uVar50) *
                              (float)uVar27) - uVar32;
                ppcVar25 = (code **)(ulong)uVar17;
                uVar18 = (int)((fVar56 + (float)(int)(uVar10 - uVar9) / (float)(int)uVar52) *
                              (float)uVar3) - uVar38;
                if ((int)uVar15 <= (int)uVar17) {
                  uVar17 = uVar15;
                }
                if ((int)uVar16 <= (int)uVar18) {
                  uVar18 = uVar16;
                }
                ppcVar24 = (code **)(ulong)uVar18;
                if (0 < (int)uVar17 && 0 < (int)uVar18) {
                  auVar19 = (undefined1  [4])uVar40;
                  if ((int)auVar20 <= (int)uVar40) {
                    auVar19 = auVar20;
                  }
                  uVar29 = uVar32;
                  if ((int)auVar19 <= (int)uVar32) {
                    uVar29 = (uint)auVar19;
                  }
                  uVar29 = uVar29 & ((int)uVar29 >> 0x1f ^ 0xffffffffU);
                  auVar19 = (undefined1  [4])uVar41;
                  if ((int)auVar20 <= (int)uVar41) {
                    auVar19 = auVar20;
                  }
                  uVar15 = uVar38;
                  if ((int)auVar19 <= (int)uVar38) {
                    uVar15 = (uint)auVar19;
                  }
                  uVar15 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
                  auVar19 = (undefined1  [4])((uVar39 - uVar40) - uVar17);
                  uVar39 = (uVar27 - uVar32) - uVar17;
                  if ((int)auVar20 <= (int)auVar19) {
                    auVar19 = auVar20;
                  }
                  if ((int)auVar19 <= (int)uVar39) {
                    uVar39 = (uint)auVar19;
                  }
                  auVar19 = (undefined1  [4])((uVar21 - uVar41) - uVar18);
                  uVar21 = (uVar3 - uVar38) - uVar18;
                  if ((int)auVar20 <= (int)auVar19) {
                    auVar19 = auVar20;
                  }
                  if ((int)auVar19 <= (int)uVar21) {
                    uVar21 = (uint)auVar19;
                  }
                  iVar2 = uVar29 + uVar17 + (uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU));
                  uVar36 = (ulong)(uVar15 + uVar18 + (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU)))
                  ;
                  pcStack_f0 = (code *)CONCAT44(uVar41 - uVar15,uVar40 - uVar29);
                  ppuStack_e8 = (undefined **)
                                ((ulong)(pcStack_f0 + (uVar36 << 0x20)) & 0xffffffff00000000 |
                                (ulong)(iVar2 + (uVar40 - uVar29)));
                  lStack_e0 = CONCAT44(uVar38 - uVar15,uVar32 - uVar29);
                  uStack_d8 = lStack_e0 + (uVar36 << 0x20) & 0xffffffff00000000 |
                              (ulong)(iVar2 + (uVar32 - uVar29));
                  ppcVar24 = (code **)&uStack_140;
                  ppcVar25 = &pcStack_f0;
                  uStack_d0 = uVar46;
                  uStack_cc = uVar46;
                  FUN_10a7b9d9c(ppcVar24,ppcVar25);
                  uVar29 = *(uint *)((long)param_1 + 0x24);
                }
                uVar21 = (uint)param_8;
                uVar39 = (uint)param_7;
                uVar27 = (uint)param_5;
                uVar46 = uVar46 + 1;
              } while (uVar46 < uVar29);
            }
          }
          if (uStack_140 != ppcStack_138) {
            ppcVar25 = *(code ***)(unaff_x23 + 0x28);
            ppcVar26 = (code **)(((long)ppcStack_138 - (long)uStack_140 >> 3) * -0x3333333333333333)
            ;
            (**(code **)(*(long *)param_1[5] + 0xa8))(param_1[5],ppcVar25);
            ppcVar24 = (code **)param_1[5];
            (**(code **)(*ppcVar24 + 0xb0))();
          }
          param_6 = uStack_140;
          if (uStack_140 != (code **)0x0) {
            ppcStack_138 = uStack_140;
            ppcVar24 = uStack_140;
            __ZdlPv();
          }
          goto LAB_10a7c482c;
        }
      }
    }
  }
  else {
    ppcVar25 = *(code ***)(*param_4 + 0x18);
    (**(code **)(*(long *)unaff_x23 + 0x50))(&uStack_140,unaff_x23,ppcVar25);
    uVar21 = (uint)param_8;
    uVar39 = (uint)param_7;
    uVar27 = (uint)param_5;
    if ((((ppcStack_138 != ppcStack_130) && ((uint)uStack_140 == *(uint *)(param_1 + 1))) &&
        ((*(byte *)((long)param_1 + 0xa9) & 1) == 0)) && (*(char *)(param_1 + 0x15) == '\x01')) {
      if (((int)*(uint *)(param_1 + 3) < 2) &&
         (auStack_f4 = (undefined1  [4])0xffffffff, (int)*(uint *)((long)param_1 + 0x1c) < 2)) {
        iStack_158 = 0;
        unaff_x23 = (code *)0x0;
LAB_10a7c446c:
        uVar21 = (uint)param_8;
        uVar39 = (uint)param_7;
        uVar27 = (uint)param_5;
        uStack_184 = uVar29;
        pcStack_178 = unaff_x23;
        if (ppcStack_130 != ppcStack_138) {
          uVar44 = 0;
          uVar5 = *(uint *)param_2;
          uVar9 = *(uint *)((long)param_2 + 4);
          uVar46 = *(uint *)(param_1 + 0x10);
          uVar29 = *(uint *)((long)param_1 + 0x84);
          fVar49 = (float)(int)uVar46;
          fVar51 = (float)(int)uVar29;
          fVar53 = (float)(int)uVar5 / fVar49;
          fVar54 = (float)(int)uVar9 / fVar51;
          uVar6 = *(uint *)(param_2 + 1);
          uVar10 = *(uint *)((long)param_2 + 0xc);
          ppcStack_180 = ppcVar22;
          ppcStack_170 = param_2;
          while( true ) {
            uVar21 = (uint)param_8;
            uVar39 = (uint)param_7;
            uVar27 = (uint)param_5;
            param_5 = (code *)(ulong)uVar29;
            ppcVar24 = (code **)(ulong)uVar46;
            pcVar42 = param_1[0x16];
            uVar36 = ((long)param_1[0x17] - (long)pcVar42 >> 3) * -0x5555555555555555;
            if (uVar36 <= uVar44) break;
            ppcVar25 = ppcStack_138 + uVar44 * 4;
            iVar31 = (int)(fVar53 * (float)(int)uVar46);
            iVar37 = (int)(fVar54 * (float)(int)uVar29);
            uVar39 = (uint)((fVar53 + (float)(int)(uVar6 - uVar5) / fVar49) * (float)(int)uVar46);
            pcVar47 = (code *)CONCAT44(iVar37,iVar31);
            pcStack_108 = (code *)((ulong)(pcVar47 +
                                          ((ulong)(uint)((int)((fVar54 + (float)(int)(uVar10 - uVar9
                                                                                     ) / fVar51) *
                                                              (float)(int)uVar29) - iVar37) << 0x20)
                                          ) & 0xffffffff00000000 | (ulong)uVar39);
            ppcStack_150 = ppcVar25;
            uStack_148 = uVar44;
            pcStack_110 = pcVar47;
            if (iStack_158 == 0) {
              ppuVar4 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 1) * 4;
              if (0x56 < *(uint *)(param_1 + 1)) {
                ppuVar4 = &PTR_DAT_110ae4700;
              }
              bVar12 = *(byte *)((long)ppuVar4 + 0x1b);
              ppcVar28 = (code **)(ulong)bVar12;
              uStack_154 = *(uint *)(ppcVar25 + 2);
              uVar21 = *(uint *)((long)ppcVar25 + 0x14);
              uVar27 = *(uint *)((long)ppcVar25 + 0x1c) - uVar21;
              iVar7 = uVar39 - iVar31;
              uVar39 = (int)((ulong)(pcVar47 +
                                    ((ulong)(uint)((int)((fVar54 + (float)(int)(uVar10 - uVar9) /
                                                                   fVar51) * (float)(int)uVar29) -
                                                  iVar37) << 0x20)) >> 0x20) - iVar37;
              if ((int)(*(uint *)(ppcVar25 + 3) - uStack_154) <= iVar7) {
                iVar7 = *(uint *)(ppcVar25 + 3) - uStack_154;
              }
              if ((int)uVar27 <= (int)uVar39) {
                uVar39 = uVar27;
              }
              uVar44 = (ulong)uVar39;
              if (0 < (int)uVar39) {
                pcVar42 = *ppcVar25;
                lVar48 = (long)(int)(uint)bVar12 * (long)(int)uVar46;
                uVar36 = (((long)iVar37 + -1) * (long)(int)uVar46 + (long)iVar31) * (long)ppcVar28;
                lVar30 = ((long)iVar31 + (long)(int)uVar46 * (long)iVar37) * (long)ppcVar28 * 8;
                pcStack_168 = param_5;
                ppcStack_160 = ppcVar24;
                do {
                  uVar35 = ((long)param_1[0x17] - (long)param_1[0x16] >> 3) * -0x5555555555555555;
                  if (uVar35 < uStack_148 || uVar35 - uStack_148 == 0) goto LAB_10a7c4c08;
                  pcVar47 = param_1[0x16] + uStack_148 * 0x18;
                  lVar11 = *(long *)pcVar47;
                  uVar36 = uVar36 + lVar48;
                  if ((ulong)(*(long *)(pcVar47 + 8) - lVar11 >> 3) <= uVar36) goto LAB_10a7c4c08;
                  iVar31 = uVar21 * *(uint *)(ppcStack_150 + 1);
                  uVar44 = uVar44 - 1;
                  uVar21 = uVar21 + 1;
                  _memcpy(lVar11 + lVar30,
                          pcVar42 + (long)(int)((uStack_154 + iVar31) * (uint)bVar12) * 8,
                          (long)(int)(uint)bVar12 * (long)iVar7 * 8);
                  lVar30 = lVar30 + lVar48 * 8;
                } while (uVar44 != 0);
                pcVar42 = param_1[0x16];
                uVar36 = ((long)param_1[0x17] - (long)pcVar42 >> 3) * -0x5555555555555555;
                unaff_x23 = pcStack_178;
                ppcVar24 = ppcStack_160;
                param_5 = pcStack_168;
                ppcVar22 = ppcStack_180;
              }
              param_2 = ppcStack_170;
              uVar29 = (uint)param_5;
              if (uVar36 <= uStack_148) goto LAB_10a7c4c08;
              ppcVar25 = *(code ***)(pcVar42 + uStack_148 * 0x18);
              param_6 = &pcStack_110;
              ppcVar26 = ppcVar24;
              FUN_10a7c3b88(param_1,ppcVar25);
            }
            else {
              pcVar42 = unaff_x23;
              (**(code **)(*(long *)unaff_x23 + 0x18))
                        (unaff_x23,*(uint *)(ppcVar25 + 1),*(uint *)((long)ppcVar25 + 0xc));
              pcStack_f0 = FUN_10a7c4dc8;
              ppuStack_e8 = &PTR_DAT_110c18be0;
              FUN_10a1b76e0(unaff_x23,*(uint *)(ppcVar25 + 1),*(uint *)((long)ppcVar25 + 0xc),
                            auStack_f4,(long)(int)pcVar42,*ppcVar25,&pcStack_f0);
              (*(code *)*ppuStack_e8)(&ppuStack_e8);
              uVar44 = ((long)param_1[0x17] - (long)param_1[0x16] >> 3) * -0x5555555555555555;
              if (uVar44 < uStack_148 || uVar44 - uStack_148 == 0) goto LAB_10a7c4c08;
              ppcVar25 = *(code ***)(param_1[0x16] + uStack_148 * 0x18);
              param_6 = (code **)*ppcStack_150;
              ppcVar26 = (code **)ppcStack_150[1];
              param_5 = ppcStack_150[2];
              param_8 = (ulong)(*(uint *)(ppcStack_150 + 3) - (int)param_5);
              ppcVar28 = (code **)CONCAT44(uVar29,uVar46);
              (**(code **)(*(long *)unaff_x23 + 0x20))(unaff_x23,ppcVar25);
              param_7 = pcVar47;
            }
            uVar21 = (uint)param_8;
            uVar39 = (uint)param_7;
            uVar27 = (uint)param_5;
            *(undefined1 *)(param_1 + 4) = 1;
            if (uStack_140._4_1_ != '\x01') break;
            uVar29 = (int)uVar29 / 2;
            if ((int)uVar29 < 2) {
              uVar29 = 1;
            }
            uVar46 = (int)ppcVar24 / 2;
            if ((int)uVar46 < 2) {
              uVar46 = 1;
            }
            uVar44 = uStack_148 + 1;
            if ((ulong)((long)ppcStack_130 - (long)ppcStack_138 >> 5) <= uVar44) break;
          }
        }
        if ((((uStack_184 & 1) == 0) && ((*(byte *)((long)param_1 + 0xaa) & 1) == 0)) &&
           (((ulong)uStack_140 & 0x100000000) == 0)) {
          if (param_1[0x17] == param_1[0x16]) {
LAB_10a7c4c08:
                    /* WARNING: Does not return */
            pcVar42 = (code *)SoftwareBreakpoint(1,0x10a7c4c0c);
            (*pcVar42)();
          }
          ppcVar25 = (code **)(ulong)*(uint *)param_2;
          param_6 = (code **)(ulong)*(uint *)((long)param_2 + 4);
          uVar27 = *(uint *)(param_2 + 1) - *(uint *)param_2;
          ppcVar28 = (code **)(ulong)(*(uint *)((long)param_2 + 0xc) - *(uint *)((long)param_2 + 4))
          ;
          uVar21 = (uint)*(undefined8 *)param_1[0x16];
          uStack_190 = 0;
          ppcVar26 = (code **)0x0;
          uVar39 = 0;
          (**(code **)(*(long *)param_1[5] + 0xa0))();
        }
        if (unaff_x23 != (code *)0x0) {
          (**(code **)(*(long *)unaff_x23 + 0x30))(unaff_x23);
        }
      }
      else {
        uVar39 = (uint)uStack_140;
        func_0x00010ab79cdc();
        auStack_f4 = (undefined1  [4])uVar39;
        uVar21 = (uint)param_8;
        uVar39 = (uint)param_7;
        uVar27 = (uint)param_5;
        if (auStack_f4 != (undefined1  [4])0xffffffff) {
          ppcVar25 = (code **)0x0;
          FUN_10a1b70c8(&pcStack_f0);
          uVar21 = (uint)param_8;
          uVar39 = (uint)param_7;
          uVar27 = (uint)param_5;
          unaff_x23 = pcStack_f0;
          if (pcStack_f0 != (code *)0x0) {
            iStack_158 = 1;
            goto LAB_10a7c446c;
          }
        }
      }
    }
    ppcVar24 = ppcStack_138;
    if (ppcStack_138 != (code **)0x0) {
      ppcStack_130 = ppcStack_138;
      __ZdlPv();
      ppcVar22 = ppcStack_118;
    }
LAB_10a7c482c:
    ppcVar43 = param_6;
    if (ppcVar22 == (code **)0x0) goto LAB_10a7c4860;
  }
LAB_10a7c4830:
  ppcVar1 = ppcVar22 + 1;
  do {
    pcVar42 = *ppcVar1;
    cVar13 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(ppcVar1,0x10);
    if (bVar14) {
      *ppcVar1 = pcVar42 + -1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if (pcVar42 == (code *)0x0) {
    (**(code **)(*ppcVar22 + 0x10))(ppcVar22);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppcVar24 = ppcVar22;
  }
LAB_10a7c4860:
  iVar31 = (int)ppcVar28;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  if (unaff_x23 != (code *)0x0) {
    (**(code **)(*(long *)pcStack_178 + 0x30))();
  }
  if (ppcStack_138 != (code **)0x0) {
    ppcStack_130 = ppcStack_138;
    __ZdlPv();
  }
  func_0x00010a1f74b8(&pcStack_120);
  __Unwind_Resume();
  uVar29 = *(uint *)ppcVar43;
  uVar5 = *(uint *)((long)ppcVar43 + 4);
  iVar8 = *(uint *)((long)ppcVar43 + 0xc) - uVar5;
  uVar46 = *(uint *)ppcVar26;
  uVar6 = *(uint *)((long)ppcVar26 + 4);
  iVar7 = *(uint *)((long)ppcVar26 + 0xc) - uVar6;
  iVar37 = *(uint *)(ppcVar26 + 1) - uVar46;
  if ((int)(*(uint *)(ppcVar43 + 1) - uVar29) <= (int)(*(uint *)(ppcVar26 + 1) - uVar46)) {
    iVar37 = *(uint *)(ppcVar43 + 1) - uVar29;
  }
  if (iVar8 <= iVar7) {
    iVar7 = iVar8;
  }
  if (0 < iVar37 && 0 < iVar7) {
    pcStack_198 = FUN_10a7c4c9c;
    uVar10 = *(uint *)ppcVar24;
    uVar9 = uVar29;
    if ((int)uVar10 <= (int)uVar29) {
      uVar9 = uVar10;
    }
    uVar50 = uVar46;
    if ((int)uVar9 <= (int)uVar46) {
      uVar50 = uVar9;
    }
    uVar50 = uVar50 & ((int)uVar50 >> 0x1f ^ 0xffffffffU);
    uVar9 = uVar5;
    if ((int)uVar10 <= (int)uVar5) {
      uVar9 = uVar10;
    }
    uVar52 = uVar6;
    if ((int)uVar9 <= (int)uVar6) {
      uVar52 = uVar9;
    }
    uVar52 = uVar52 & ((int)uVar52 >> 0x1f ^ 0xffffffffU);
    uVar27 = (uVar27 - uVar29) - iVar37;
    uVar39 = (uVar39 - uVar46) - iVar37;
    if ((int)uVar10 <= (int)uVar27) {
      uVar27 = uVar10;
    }
    if ((int)uVar27 <= (int)uVar39) {
      uVar39 = uVar27;
    }
    uVar27 = (iVar31 - uVar5) - iVar7;
    uVar21 = (uVar21 - uVar6) - iVar7;
    if ((int)uVar10 <= (int)uVar27) {
      uVar27 = uVar10;
    }
    if ((int)uVar27 <= (int)uVar21) {
      uVar21 = uVar27;
    }
    uStack_1a8 = 0;
    iVar31 = uVar50 + iVar37 + (uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU));
    uVar44 = (ulong)(uVar52 + iVar7 + (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU)));
    lStack_1c8 = CONCAT44(uVar5 - uVar52,uVar29 - uVar50);
    uStack_1c0 = lStack_1c8 + (uVar44 << 0x20) & 0xffffffff00000000 |
                 (ulong)(iVar31 + (uVar29 - uVar50));
    lStack_1b8 = CONCAT44(uVar6 - uVar52,uVar46 - uVar50);
    uStack_1b0 = lStack_1b8 + (uVar44 << 0x20) & 0xffffffff00000000 |
                 (ulong)(iVar31 + (uVar46 - uVar50));
    puStack_1a0 = &stack0xfffffffffffffff0;
    FUN_10a7b9d9c(ppcVar25,&lStack_1c8);
  }
  return;
}



/* Entry: 10a7c4c9c; end: 10a7c4dc7;  */

void FUN_10a7c4c9c(uint *param_1,undefined8 param_2,uint *param_3,uint *param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uStack_20;
  undefined8 uStack_18;
  
  uVar5 = *param_3;
  uVar7 = param_3[1];
  uVar6 = *param_4;
  uVar8 = param_4[1];
  iVar1 = param_4[2] - uVar6;
  if ((int)(param_3[2] - uVar5) <= (int)(param_4[2] - uVar6)) {
    iVar1 = param_3[2] - uVar5;
  }
  iVar4 = param_4[3] - uVar8;
  if ((int)(param_3[3] - uVar7) <= (int)(param_4[3] - uVar8)) {
    iVar4 = param_3[3] - uVar7;
  }
  if (0 < iVar1 && 0 < iVar4) {
    uVar9 = *param_1;
    uVar10 = uVar5;
    if ((int)uVar9 <= (int)uVar5) {
      uVar10 = uVar9;
    }
    uVar2 = uVar6;
    if ((int)uVar10 <= (int)uVar6) {
      uVar2 = uVar10;
    }
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    uVar10 = uVar7;
    if ((int)uVar9 <= (int)uVar7) {
      uVar10 = uVar9;
    }
    uVar3 = uVar8;
    if ((int)uVar10 <= (int)uVar8) {
      uVar3 = uVar10;
    }
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    uVar10 = (param_5 - uVar5) - iVar1;
    uVar11 = (param_7 - uVar6) - iVar1;
    if ((int)uVar9 <= (int)uVar10) {
      uVar10 = uVar9;
    }
    if ((int)uVar10 <= (int)uVar11) {
      uVar11 = uVar10;
    }
    uVar10 = (param_6 - uVar7) - iVar4;
    uVar12 = (param_8 - uVar8) - iVar4;
    if ((int)uVar9 <= (int)uVar10) {
      uVar10 = uVar9;
    }
    if ((int)uVar10 <= (int)uVar12) {
      uVar12 = uVar10;
    }
    uStack_18 = 0;
    iVar1 = uVar2 + iVar1 + (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU));
    uVar13 = (ulong)(uVar3 + iVar4 + (uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)));
    lStack_38 = CONCAT44(uVar7 - uVar3,uVar5 - uVar2);
    uStack_30 = lStack_38 + (uVar13 << 0x20) & 0xffffffff00000000 | (ulong)(iVar1 + (uVar5 - uVar2))
    ;
    lStack_28 = CONCAT44(uVar8 - uVar3,uVar6 - uVar2);
    uStack_20 = lStack_28 + (uVar13 << 0x20) & 0xffffffff00000000 | (ulong)(iVar1 + (uVar6 - uVar2))
    ;
    FUN_10a7b9d9c(param_2,&lStack_38);
  }
  return;
}



/* Entry: 10a7c4dc8; end: 10a7c4def;  */

void FUN_10a7c4dc8(void)

{
  return;
}



/* Entry: 10a7c4df0; end: 10a7c51ff;  */

void FUN_10a7c4df0(long param_1,int *param_2,long *param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  
  plVar9 = (long *)*param_3;
  if (plVar9 == (long *)0x0) {
    if ((bRam000000011330a9e8 & 1) == 0) {
      return;
    }
    FUN_10ae06f30(0,1,&UNK_10f6774a8,&UNK_10f6777e4,0x4a5,&UNK_10f6775d2,&stack0x00000000);
    return;
  }
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    if (((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) &&
       (param_4 != 0 || param_5 != 0)) {
      iVar3 = *param_2;
      iVar5 = param_2[1];
      lVar12 = plVar9[0xb];
      lStack_78 = plVar9[1];
      if ((param_4 != param_2[2] - iVar3) || (param_5 != param_2[3] - iVar5)) {
        iVar16 = *(int *)(param_1 + 0x80);
        iVar18 = *(int *)(param_1 + 0x84);
        uStack_98 = CONCAT44(param_2[3] - iVar5,param_2[2] - iVar3);
        FUN_10a775818(&lStack_90,param_1,&uStack_98);
        lVar7 = lStack_78;
        if (*(int *)(param_1 + 0x24) != 0) {
          lVar14 = 0;
          uVar15 = 0;
          iVar17 = *(int *)(param_1 + 0x80);
          iVar19 = *(int *)(param_1 + 0x84);
          do {
            if ((ulong)(lStack_88 - lStack_90 >> 4) <= uVar15) goto LAB_10a7c51dc;
            piVar1 = (int *)(lStack_90 + lVar14);
            uStack_98 = CONCAT44(piVar1[3] - piVar1[1],piVar1[2] - *piVar1);
            FUN_10a7c5200(param_1,*param_3,lVar12,lVar7,piVar1,
                          (int)(((float)iVar3 / (float)iVar16) * (float)iVar17),
                          (int)(((float)iVar5 / (float)iVar18) * (float)iVar19),&uStack_98,
                          (int)uVar15);
            iVar17 = iVar17 / 2;
            if (iVar17 < 2) {
              iVar17 = 1;
            }
            iVar19 = iVar19 / 2;
            if (iVar19 < 2) {
              iVar19 = 1;
            }
            uVar15 = uVar15 + 1;
            lVar14 = lVar14 + 0x10;
          } while (uVar15 < *(uint *)(param_1 + 0x24));
        }
LAB_10a7c51c8:
        if (lStack_90 == 0) {
          return;
        }
        lStack_88 = lStack_90;
        __ZdlPv();
        return;
      }
    }
    else {
      lVar12 = plVar9[0xb];
      lStack_78 = plVar9[1];
      iVar3 = *param_2;
      iVar5 = param_2[1];
    }
    lStack_90 = 0;
    FUN_10a7c5200(param_1,plVar9,lVar12,lStack_78,&lStack_90,iVar3,iVar5,&lStack_78,0);
  }
  else {
    if (*(char *)(param_1 + 0xa8) != '\x01') {
      return;
    }
    if (((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) &&
       (param_4 != 0 || param_5 != 0)) {
      iVar3 = *param_2;
      iVar5 = param_2[1];
      iVar16 = param_2[2] - iVar3;
      iVar18 = param_2[3] - iVar5;
      lVar12 = plVar9[0xb];
      uVar4 = (undefined4)plVar9[1];
      uVar6 = *(undefined4 *)((long)plVar9 + 0xc);
      lVar7 = plVar9[1];
      if ((param_4 != iVar16) || (param_5 != iVar18)) {
        iVar17 = *(int *)(param_1 + 0x80);
        iVar19 = *(int *)(param_1 + 0x84);
        lStack_78 = CONCAT44(iVar18,iVar16);
        FUN_10a775818(&lStack_90,param_1,&lStack_78);
        if (*(int *)(param_1 + 0x24) != 0) {
          lVar13 = 0;
          lVar14 = 0;
          uVar15 = 0;
          iVar16 = *(int *)(param_1 + 0x80);
          iVar18 = *(int *)(param_1 + 0x84);
          do {
            if (((ulong)(lStack_88 - lStack_90 >> 4) <= uVar15) ||
               (uVar11 = (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 3) *
                         -0x5555555555555555, uVar11 < uVar15 || uVar11 - uVar15 == 0))
            goto LAB_10a7c51dc;
            puVar2 = (undefined8 *)(lStack_90 + lVar14);
            uVar10 = *puVar2;
            (**(code **)(*(long *)*param_3 + 0x20))
                      ((long *)*param_3,*(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar13),lVar12,
                       lVar7,uVar10,CONCAT44(iVar18,iVar16),
                       CONCAT44((int)(((float)iVar5 / (float)iVar19) * (float)iVar18),
                                (int)(((float)iVar3 / (float)iVar17) * (float)iVar16)),
                       CONCAT44(*(int *)((long)puVar2 + 0xc) - (int)((ulong)uVar10 >> 0x20),
                                *(int *)(puVar2 + 1) - (int)uVar10));
            iVar16 = iVar16 / 2;
            if (iVar16 < 2) {
              iVar16 = 1;
            }
            iVar18 = iVar18 / 2;
            if (iVar18 < 2) {
              iVar18 = 1;
            }
            *(undefined1 *)(param_1 + 0x20) = 1;
            uVar15 = uVar15 + 1;
            lVar14 = lVar14 + 0x10;
            lVar13 = lVar13 + 0x18;
          } while (uVar15 < *(uint *)(param_1 + 0x24));
        }
        goto LAB_10a7c51c8;
      }
    }
    else {
      lVar12 = plVar9[0xb];
      uVar4 = (undefined4)plVar9[1];
      uVar6 = *(undefined4 *)((long)plVar9 + 0xc);
    }
    if (*(undefined8 **)(param_1 + 0xb8) == *(undefined8 **)(param_1 + 0xb0)) {
LAB_10a7c51dc:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a7c51e0);
      (*pcVar8)();
    }
    (**(code **)(*plVar9 + 0x20))
              (plVar9,**(undefined8 **)(param_1 + 0xb0),lVar12,CONCAT44(uVar6,uVar4),0,
               *(undefined8 *)(param_1 + 0x80),*(undefined8 *)param_2,CONCAT44(uVar6,uVar4));
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}



/* Entry: 10a7c5200; end: 10a7c538b;  */

void FUN_10a7c5200(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,int param_6,int param_7,int *param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined1 uStack_79;
  long lStack_78;
  long lStack_70;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = param_6 / iVar1;
  }
  param_6 = param_6 - iVar3 * iVar1;
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = (param_6 + iVar1 + *param_8 + -1) / iVar1;
  }
  iVar4 = iVar4 * iVar1;
  if (0 < iVar4) {
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = param_7 / iVar2;
    }
    param_7 = param_7 - iVar5 * iVar2;
    iVar6 = 0;
    if (iVar2 != 0) {
      iVar6 = (param_7 + iVar2 + param_8[1] + -1) / iVar2;
    }
    iVar6 = iVar6 * iVar2;
    if ((0 < iVar6) &&
       (plVar7 = param_2, (**(code **)(*param_2 + 0x18))(param_2,iVar4,iVar6), 0 < (int)plVar7)) {
      uStack_79 = 0;
      FUN_10a0cf3f0(&lStack_78,(ulong)plVar7 & 0xffffffff,&uStack_79);
      (**(code **)(*param_2 + 0x20))
                (param_2,lStack_78,param_3,param_4,*param_5,CONCAT44(iVar6,iVar4),
                 CONCAT44(param_7,param_6),*(undefined8 *)param_8);
      (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
                (*(long **)(param_1 + 0x28),iVar3 * iVar1,iVar5 * iVar2,0,iVar4,iVar6,0,lStack_78,
                 param_9,0);
      (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
      if (lStack_78 != 0) {
        lStack_70 = lStack_78;
        __ZdlPv();
      }
    }
  }
  return;
}



/* Entry: 10a7c538c; end: 10a7c538f;  */

void FUN_10a7c538c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7c5390; end: 10a7c53a3;  */

void FUN_10a7c5390(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7c53a4; end: 10a7c53bb;  */

void FUN_10a7c53a4(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a7c53b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a7c53bc; end: 10a7c53f3;  */

undefined8 FUN_10a7c53bc(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c18c60);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a7c53f4; end: 10a7c53f7;  */

void FUN_10a7c53f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7c53f8; end: 10a7c5453;  */

long * FUN_10a7c53f8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10a7c5454(plVar1 + 2);
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



/* Entry: 10a7c5454; end: 10a7c548f;  */

void FUN_10a7c5454(undefined8 *param_1)

{
  func_0x00010a1f74b8(param_1 + 4);
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a7c5490; end: 10a7c5567;  */

long * FUN_10a7c5490(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010a7c54ec(plVar1 + 2);
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



/* Entry: 10a7c5568; end: 10a7c595b;  */

long * FUN_10a7c5568(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x24;
  
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar4 = uVar13 - 1;
    if ((uVar13 & uVar4) == 0) {
      unaff_x24 = uVar4 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar13 <= param_2) {
        uVar8 = 0;
        if (uVar13 != 0) {
          uVar8 = param_2 / uVar13;
        }
        unaff_x24 = param_2 - uVar8 * uVar13;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == param_2) {
          if (plVar7[5] == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar13 & uVar4) == 0) {
            uVar8 = uVar8 & uVar4;
          }
          else if (uVar13 <= uVar8) {
            uVar6 = 0;
            if (uVar13 != 0) {
              uVar6 = uVar8 / uVar13;
            }
            uVar8 = uVar8 - uVar6 * uVar13;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar7 = (long *)0x40;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar7 + 2,*param_3,param_3[1]);
  }
  else {
    lVar5 = *param_3;
    plVar7[3] = param_3[1];
    plVar7[2] = lVar5;
    plVar7[4] = param_3[2];
  }
  lVar5 = param_3[3];
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[5] = lVar5;
  if ((uVar13 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar13))
  goto LAB_10a7c5870;
  uVar4 = 1;
  if (2 < uVar13) {
    uVar4 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar4 = uVar4 | uVar13 << 1;
  uVar13 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar4 <= uVar13) {
    uVar4 = uVar13;
  }
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar13 = param_1[1];
  if (uVar13 < uVar4) {
LAB_10a7c56f8:
    if (uVar4 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7c5944);
      (*pcVar2)();
    }
    lVar5 = uVar4 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar5;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    uVar13 = 0;
    param_1[1] = uVar4;
    do {
      *(undefined8 *)(*param_1 + uVar13 * 8) = 0;
      uVar13 = uVar13 + 1;
    } while (uVar4 != uVar13);
    plVar9 = (long *)param_1[2];
    uVar13 = uVar4;
    if (plVar9 != (long *)0x0) {
      uVar8 = plVar9[1];
      uVar6 = uVar4 - 1;
      if ((uVar4 & uVar6) == 0) {
        uVar8 = uVar8 & uVar6;
      }
      else if (uVar4 <= uVar8) {
        uVar12 = 0;
        if (uVar4 != 0) {
          uVar12 = uVar8 / uVar4;
        }
        uVar8 = uVar8 - uVar12 * uVar4;
      }
      *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar9;
      while (plVar10 != (long *)0x0) {
        uVar12 = plVar10[1];
        if ((uVar4 & uVar6) == 0) {
          uVar12 = uVar12 & uVar6;
        }
        else if (uVar4 <= uVar12) {
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar12 / uVar4;
          }
          uVar12 = uVar12 - uVar1 * uVar4;
        }
        plVar11 = plVar10;
        if (uVar12 != uVar8) {
          lVar5 = *param_1;
          if (*(long *)(lVar5 + uVar12 * 8) == 0) {
            *(long **)(lVar5 + uVar12 * 8) = plVar9;
            uVar8 = uVar12;
          }
          else {
            *plVar9 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar5 + uVar12 * 8);
            **(long **)(lVar5 + uVar12 * 8) = (long)plVar10;
            plVar11 = plVar9;
          }
        }
        plVar9 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (uVar4 < uVar13) {
    uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar8) {
      uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
    }
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    if (uVar4 < uVar13) {
      if (uVar4 != 0) goto LAB_10a7c56f8;
      lVar5 = *param_1;
      *param_1 = 0;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = param_1[1];
    }
  }
  if ((uVar13 & uVar13 - 1) == 0) {
    unaff_x24 = uVar13 - 1 & param_2;
  }
  else {
    unaff_x24 = param_2;
    if (uVar13 <= param_2) {
      uVar4 = 0;
      if (uVar13 != 0) {
        uVar4 = param_2 / uVar13;
      }
      unaff_x24 = param_2 - uVar4 * uVar13;
    }
  }
LAB_10a7c5870:
  lVar5 = *param_1;
  plVar9 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar9;
    if (*plVar7 != 0) {
      uVar4 = *(ulong *)(*plVar7 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar4 = uVar4 & uVar13 - 1;
      }
      else if (uVar13 <= uVar4) {
        uVar8 = 0;
        if (uVar13 != 0) {
          uVar8 = uVar4 / uVar13;
        }
        uVar4 = uVar4 - uVar8 * uVar13;
      }
      *(long **)(*param_1 + uVar4 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 10a7c595c; end: 10a7c59a3;  */

void FUN_10a7c595c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a7c5454(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7c59a4; end: 10a7c5a3f;  */

long * FUN_10a7c59a4(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_2;
    }
    else {
      uVar4 = param_2;
      if (uVar2 <= param_2) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_2 / uVar2;
        }
        uVar4 = param_2 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[5] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a7c5a40; end: 10a7c5a87;  */

void FUN_10a7c5a40(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a7c54ec(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a7c5a88; end: 10a7c5b23;  */

long * FUN_10a7c5a88(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_2;
    }
    else {
      uVar4 = param_2;
      if (uVar2 <= param_2) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_2 / uVar2;
        }
        uVar4 = param_2 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (param_2 == uVar6) {
          if (plVar5[5] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a7c5b24; end: 10a7c5c43;  */

long * FUN_10a7c5b24(long *param_1)

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



/* Entry: 10a7c5c44; end: 10a7c5d4f;  */

void FUN_10a7c5c44(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_10a7c5cc0:
    if (lVar3 == 0) {
LAB_10a7c5cf0:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10a7c5cf8;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a7c5cf0;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a7c5cc0;
LAB_10a7c5cf8:
    if (lVar3 == 0) goto LAB_10a7c5d34;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *param_2;
  }
LAB_10a7c5d34:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a7c5d50; end: 10a7c5d97;  */

long * FUN_10a7c5d50(long *param_1)

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



/* Entry: 10a7c5d98; end: 10a7c5da7;  */

void FUN_10a7c5d98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18c88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7c5da8; end: 10a7c5dc7;  */

void FUN_10a7c5da8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c18c88;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7c5dc8; end: 10a7c5e4f;  */

void FUN_10a7c5dc8(long param_1)

{
  long lStack_28;
  
  func_0x000107c28478(param_1 + 0xd8,*(undefined8 *)(param_1 + 0xe0));
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 0xc0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
    __ZdlPv();
  }
  FUN_10a7c5b24(param_1 + 0x80);
  if (*(long *)(param_1 + 0x68) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x68);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  lStack_28 = param_1 + 0x18;
  func_0x00010a1f4614(&lStack_28);
  return;
}



/* Entry: 10a7c5e50; end: 10a7c5e53;  */

void FUN_10a7c5e50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7c5e54; end: 10a7c5f73;  */

undefined8 * FUN_10a7c5e54(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = uVar1;
  uVar7 = param_2[5];
  uVar6 = param_2[4];
  param_1[6] = param_2[6];
  param_1[5] = uVar7;
  param_1[4] = uVar6;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[4] = 0;
  param_1[7] = param_2[7];
  uVar6 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar6;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  uVar6 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar6;
  param_1[0xc] = param_2[0xc];
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  FUN_10a7a7624(param_1 + 0xd,param_2 + 0xd);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar6 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar6;
  param_1[0x14] = param_2[0x14];
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar6 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar6;
  param_1[0x17] = param_2[0x17];
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x15] = 0;
  param_1[0x18] = param_2[0x18];
  plVar2 = param_2 + 0x19;
  lVar4 = *plVar2;
  plVar3 = param_1 + 0x19;
  *plVar3 = lVar4;
  lVar5 = param_2[0x1a];
  param_1[0x1a] = lVar5;
  if (lVar5 == 0) {
    param_1[0x18] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[0x18] = plVar2;
    *plVar2 = 0;
    param_2[0x1a] = 0;
  }
  return param_1;
}



/* Entry: 10a7c5f74; end: 10a7c606f;  */

undefined1  [16] FUN_10a7c5f74(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c19268;
  puVar1 = &UNK_10f674def;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c19268;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a7c6070; end: 10a7c60c3;  */

ulong FUN_10a7c6070(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a7c60c4,0);
  }
  return param_1;
}



/* Entry: 10a7c60c4; end: 10a7c617f;  */

void FUN_10a7c60c4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7c6180(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
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



/* Entry: 10a7c6180; end: 10a7c623b;  */

undefined ** FUN_10a7c6180(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10a7c623c,0);
  }
  return ppuVar1;
}



/* Entry: 10a7c623c; end: 10a7c62f3;  */

void FUN_10a7c623c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
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
  FUN_10a7c6180(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0x1c);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
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



/* Entry: 10a7c62f4; end: 10a7c63af;  */

void FUN_10a7c62f4(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f6772d7,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7c63b0);
  (*pcVar4)();
}



/* Entry: 10a7c63b0; end: 10a7c647f;  */

void FUN_10a7c63b0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7c6480(param_2,param_3);
  FUN_10a076f00(param_5);
  func_0x000109898518(param_2,param_4);
  FUN_10a799c5c(plVar4,param_2);
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



/* Entry: 10a7c6480; end: 10a7c64e7;  */

void FUN_10a7c6480(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10a7c65ac(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a9de1cc(*(undefined8 *)(plVar4[4] + 0x9c0));
  *(undefined1 *)(plVar4[3] + 0x28) = 1;
  *extraout_x8 = 0;
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



/* Entry: 10a7c64e8; end: 10a7c65ab;  */

void FUN_10a7c64e8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7c65ac(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a9de1cc(*(undefined8 *)(param_2[4] + 0x9c0));
  *(undefined1 *)(param_2[3] + 0x28) = 1;
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



/* Entry: 10a7c65ac; end: 10a7c6613;  */

void FUN_10a7c65ac(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *extraout_x8;
  long lVar8;
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
    FUN_10a053854(param_1,ppuVar3);
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
  plVar6 = plVar4;
  FUN_10a7c6480(plVar4,param_2);
  FUN_10a052e3c(param_4);
  lVar8 = plVar6[3];
  uVar7 = *(ulong *)(lVar8 + 0x68);
  plVar6 = (long *)*(long *)(lVar8 + 0x60);
  if (-1 < (char)*(byte *)(lVar8 + 0x77)) {
    uVar7 = (ulong)*(byte *)(lVar8 + 0x77);
    plVar6 = (long *)(lVar8 + 0x60);
  }
  (**(code **)(*plVar4 + 0x128))(extraout_x8 + 2,plVar4,plVar6,uVar7);
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



/* Entry: 10a7c6614; end: 10a7c66f7;  */

void FUN_10a7c6614(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7c6480(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar6 = plVar4[3];
  uVar5 = *(ulong *)(lVar6 + 0x68);
  plVar4 = (long *)*(long *)(lVar6 + 0x60);
  if (-1 < (char)*(byte *)(lVar6 + 0x77)) {
    uVar5 = (ulong)*(byte *)(lVar6 + 0x77);
    plVar4 = (long *)(lVar6 + 0x60);
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar4,uVar5);
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



/* Entry: 10a7c66f8; end: 10a7c67af;  */

void FUN_10a7c66f8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7c67b0(param_1,param_2,FUN_10a799d48,0,param_3,param_4,param_5);
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



/* Entry: 10a7c67b0; end: 10a7c692f;  */

void FUN_10a7c67b0(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  long *plStack_58;
  
  lVar6 = param_2;
  FUN_10a7c65ac(param_2,param_5);
  FUN_10a7c6930(param_7);
  func_0x000109898570(auStack_78,param_2,param_6);
  lVar5 = param_2;
  func_0x000109898518(param_2,param_6 + 0x10);
  FUN_10a0592fc(&uStack_90,param_2,param_6 + 0x20);
  plVar2 = (long *)(lVar6 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar2 + ((ulong)param_3 & 0xffffffff));
  }
  plStack_58 = plStack_88;
  uStack_60 = uStack_90;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  (*param_3)(plVar2,auStack_78,lVar5,&uStack_60);
  plVar2 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a7c6930; end: 10a7c6953;  */

void FUN_10a7c6930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
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
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar3 = (long *)0x3;
  uVar5 = 0;
  FUN_10a052ee0(3,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a7c67b0(extraout_x8,plVar3,FUN_10a799f9c,0,uVar5,param_1,param_4);
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



/* Entry: 10a7c6954; end: 10a7c6a0b;  */

void FUN_10a7c6954(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7c67b0(param_1,param_2,FUN_10a799f9c,0,param_3,param_4,param_5);
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



/* Entry: 10a7c6a0c; end: 10a7c6ef7;  */

/* WARNING: Possible PIC construction at 0x00010a7c6eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a7c6ef0) */
/* WARNING: Removing unreachable block (ram,0x00010a7c6f04) */
/* WARNING: Removing unreachable block (ram,0x00010a7c6fb8) */
/* WARNING: Removing unreachable block (ram,0x00010a7c6f5c) */
/* WARNING: Removing unreachable block (ram,0x00010a7c6f74) */
/* WARNING: Removing unreachable block (ram,0x00010a7c6f00) */

void FUN_10a7c6a0c(undefined4 *param_1,undefined ***param_2,undefined8 param_3,uint *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  undefined ***unaff_x19;
  undefined ***unaff_x20;
  undefined ***unaff_x21;
  long lVar14;
  undefined ***unaff_x22;
  undefined ***pppuVar15;
  undefined ***unaff_x23;
  undefined **ppuVar16;
  undefined ***unaff_x24;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  ulong unaff_x25;
  ulong uVar19;
  undefined ****unaff_x26;
  undefined ***pppuVar20;
  undefined ****ppppuVar21;
  undefined ****unaff_x27;
  undefined ***pppuVar22;
  undefined ****ppppuVar23;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_130;
  undefined ***pppuStack_128;
  undefined ***pppuStack_120;
  undefined ***pppuStack_118;
  undefined8 uStack_110;
  undefined ***pppuStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  undefined ***pppuStack_e8;
  undefined8 *apuStack_e0 [7];
  undefined ***pppuStack_a8;
  undefined **ppuStack_a0;
  undefined ***pppuStack_98;
  undefined8 uStack_90;
  undefined ***pppuStack_88;
  undefined ***pppuStack_78;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppuVar7[0x59] < (undefined **)0x8) {
    pppuVar7[(long)pppuVar7[0x59] + 0x4e] = pppuVar7[0x5a];
    pppuVar7[0x59] = (undefined **)((long)pppuVar7[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppuVar7 + 0x4b);
  }
  pppuVar17 = param_2;
  FUN_10a7c65ac(param_2,param_3);
  FUN_10a7c6ef8(param_5);
  if (*param_4 < 2) {
    pppuVar15 = (undefined ***)0x0;
  }
  else {
    pppuVar15 = param_2;
    FUN_10a5c55b4(param_2,param_4);
  }
  FUN_10a0592fc(&uStack_110,param_2,param_4 + 4);
  FUN_10a6cb688(&pppuStack_120,param_2,param_4 + 8);
  if (pppuVar15 == (undefined ***)0x0) {
    func_0x000107c2b054(&pppuStack_a8,&UNK_10f664875);
    FUN_10a6c7134(pppuStack_120,&pppuStack_a8);
LAB_10a7c6bb0:
    uVar19 = unaff_x25;
    ppppuVar21 = unaff_x26;
    ppppuVar23 = unaff_x27;
    if ((long)pppuStack_98 < 0) {
      pppuStack_120 = pppuStack_a8;
      __ZdlPv();
    }
  }
  else {
    pppuVar8 = pppuVar15;
    FUN_10a247214();
    if (((ulong)pppuVar8 & 1) == 0) {
      func_0x000107c2b054(&pppuStack_a8,&UNK_10f6763d7);
      FUN_10a6c7134(pppuStack_120,&pppuStack_a8);
      goto LAB_10a7c6bb0;
    }
    FUN_10a5d0764(pppuVar17 + 5,&uStack_110,&uStack_110);
    pppuVar10 = pppuStack_108;
    pppuVar8 = pppuStack_118;
    pppuStack_128 = pppuStack_108;
    uStack_130 = uStack_110;
    if (pppuStack_108 != (undefined ***)0x0) {
      pppuVar20 = pppuStack_108 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar20,0x10);
        if (bVar4) {
          *pppuVar20 = (undefined **)((long)*pppuVar20 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppuVar20 = pppuVar17 + 9;
    pppuVar12 = (undefined ***)*pppuVar20;
    while (pppuVar22 = pppuVar20, pppuVar12 != (undefined ***)0x0) {
      while (pppuVar20 = pppuVar12, pppuVar20[5] <= pppuStack_118) {
        if (pppuStack_118 <= pppuVar20[5]) goto LAB_10a7c6c28;
        pppuVar12 = (undefined ***)pppuVar20[1];
        if ((undefined ***)pppuVar20[1] == (undefined ***)0x0) {
          pppuVar22 = pppuVar20 + 1;
          goto LAB_10a7c6bc8;
        }
      }
      pppuVar12 = (undefined ***)*pppuVar20;
    }
LAB_10a7c6bc8:
    ppuVar9 = (undefined **)0x30;
    __Znwm();
    ppuVar9[4] = (undefined *)pppuStack_120;
    ppuVar9[5] = (undefined *)pppuVar8;
    if (pppuVar8 != (undefined ***)0x0) {
      pppuVar8 = pppuVar8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar4) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *ppuVar9 = (undefined *)0x0;
    ppuVar9[1] = (undefined *)0x0;
    ppuVar9[2] = (undefined *)pppuVar20;
    *pppuVar22 = ppuVar9;
    if ((undefined **)*pppuVar17[8] != (undefined **)0x0) {
      pppuVar17[8] = (undefined **)*pppuVar17[8];
      ppuVar9 = *pppuVar22;
    }
    func_0x000107c2b058(pppuVar17[9],ppuVar9);
    pppuVar17[10] = (undefined **)((long)pppuVar17[10] + 1);
LAB_10a7c6c28:
    param_2 = pppuStack_118;
    if (pppuStack_118 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_118 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar4) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (pppuVar10 != (undefined ***)0x0) {
      pppuVar8 = pppuVar10 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar4) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (pppuStack_118 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_118 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar4) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppuStack_a8 = (undefined ***)FUN_10a7c73b8;
    ppuStack_a0 = &PTR_FUN_110c18ce8;
    pppuStack_88 = pppuStack_128;
    uStack_90 = uStack_130;
    pppuStack_78 = pppuStack_118;
    pppuVar8 = pppuVar15;
    pppuStack_98 = pppuVar17;
    FUN_10a247594(pppuVar15,pppuVar17[4]);
    uVar19 = (ulong)((uint)pppuVar8 ^ 1);
    pppuVar17 = (undefined ***)pppuVar17[3];
    *(undefined4 *)((long)pppuVar17 + uVar19 * 4 + 0x1e0) = 2;
    *(undefined1 *)(pppuVar17 + 5) = 1;
    if (((((ulong)pppuVar15[0xe] & 1) == 0) || (((ulong)pppuVar15[0xd] & 1) == 0)) ||
       (((ulong)pppuVar15[9] & 1) == 0)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a7c6e30);
      (*pcVar5)();
    }
    func_0x000107c2b054(auStack_100,&UNK_10f674def);
    pppuStack_e8 = pppuStack_a8;
    (*(code *)ppuStack_a0[3])(apuStack_e0,&ppuStack_a0);
    FUN_10ad39efc(pppuVar17,uVar19,pppuVar15 + 10,pppuVar15 + 6,auStack_100,1,1,&pppuStack_e8);
    (*(code *)*apuStack_e0[0])(apuStack_e0);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
    pppuVar8 = &ppuStack_a0;
    (*(code *)*ppuStack_a0)();
    if (param_2 != (undefined ***)0x0) {
      pppuVar8 = param_2;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppuStack_120 = pppuVar8;
    ppppuVar21 = &pppuStack_a8;
    ppppuVar23 = &pppuStack_e8;
    if (pppuVar10 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuStack_120 = pppuVar10;
    }
  }
  pppuVar8 = pppuStack_120;
  if (pppuStack_118 != (undefined ***)0x0) {
    pppuVar10 = pppuStack_118 + 1;
    do {
      ppuVar9 = *pppuVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar4) {
        *pppuVar10 = (undefined **)((long)ppuVar9 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuStack_118)[2])(pppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar8 = pppuStack_118;
    }
  }
  if (pppuStack_108 != (undefined ***)0x0) {
    pppuVar10 = pppuStack_108 + 1;
    do {
      ppuVar9 = *pppuVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar4) {
        *pppuVar10 = (undefined **)((long)ppuVar9 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuStack_108)[2])(pppuStack_108);
      pppuVar8 = pppuStack_108;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (pppuStack_108 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_108);
    }
    func_0x00010a6c7484(&pppuStack_120);
    FUN_10a0844ac(&uStack_110);
    unaff_x30 = 0x10a7c6ef0;
    register0x00000008 = (BADSPACEBASE *)&uStack_130;
    unaff_x19 = pppuVar7;
    unaff_x20 = pppuVar8;
    unaff_x21 = pppuStack_108;
    unaff_x22 = pppuVar15;
    unaff_x23 = param_2;
    unaff_x24 = pppuVar17;
    unaff_x25 = uVar19;
    unaff_x26 = ppppuVar21;
    unaff_x27 = ppppuVar23;
    unaff_x29 = puVar1;
  }
  pppuVar17 = pppuVar7 + 0x4b;
  ppuVar9 = pppuVar7[0x59];
  ppuVar11 = (undefined **)((long)ppuVar9 + -1);
  pppuVar7[0x59] = ppuVar11;
  if (ppuVar11 < (undefined **)0x8) {
    ppuVar9 = pppuVar17[(long)ppuVar9 + 2];
    if (pppuVar7[0x5a] == ppuVar9) {
      return;
    }
  }
  else {
    ppuVar9 = (undefined **)pppuVar7[0x57][-1];
    pppuVar7[0x57] = pppuVar7[0x57] + -1;
    if (pppuVar7[0x5a] == ppuVar9) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined *****)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined *****)((long)register0x00000008 + -0x50) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined ****)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined ****)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined ****)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined ****)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined ****)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined ****)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  ppuVar11 = *pppuVar17;
  ppuVar13 = pppuVar7[0x4c];
  lVar14 = (long)ppuVar13 - (long)ppuVar11;
  ppuVar18 = (undefined **)(lVar14 >> 4);
  if (ppuVar18 < ppuVar9) {
    uVar19 = (long)ppuVar9 - (long)ppuVar18;
    ppuVar16 = pppuVar7[0x4d];
    if ((ulong)((long)ppuVar16 - (long)ppuVar13 >> 4) < uVar19) {
      if ((ulong)ppuVar9 >> 0x3c == 0) {
        ppuVar13 = (undefined **)((long)ppuVar16 - (long)ppuVar11 >> 3);
        if (ppuVar13 <= ppuVar9) {
          ppuVar13 = ppuVar9;
        }
        if (0x7fffffffffffffef < (ulong)((long)ppuVar16 - (long)ppuVar11)) {
          ppuVar13 = (undefined **)0xfffffffffffffff;
        }
        *(undefined ****)((long)register0x00000008 + -0x68) = pppuVar17;
        if ((ulong)ppuVar13 >> 0x3c == 0) {
          lVar6 = (long)ppuVar13 << 4;
          __Znwm();
          lVar2 = lVar6 + lVar14;
          _bzero(lVar2,uVar19 * 0x10);
          ppuVar18 = (undefined **)(lVar2 + (long)ppuVar18 * -0x10);
          _memcpy(ppuVar18,ppuVar11,lVar14);
          *pppuVar17 = ppuVar18;
          pppuVar7[0x4c] = (undefined **)(lVar2 + uVar19 * 0x10);
          pppuVar7[0x4d] = (undefined **)(lVar6 + (long)ppuVar13 * 0x10);
          *(undefined ***)((long)register0x00000008 + -0x78) = ppuVar11;
          *(undefined ***)((long)register0x00000008 + -0x70) = ppuVar16;
          *(undefined ***)((long)register0x00000008 + -0x88) = ppuVar11;
          *(undefined ***)((long)register0x00000008 + -0x80) = ppuVar11;
          func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
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
    _bzero(ppuVar13,uVar19 * 0x10);
    pppuVar7[0x4c] = ppuVar13 + uVar19 * 2;
  }
  else if (ppuVar9 < ppuVar18) {
    while (ppuVar13 != ppuVar11 + (long)ppuVar9 * 2) {
      ppuVar13 = ppuVar13 + -2;
      func_0x00010988c204(ppuVar13);
    }
    pppuVar7[0x4c] = ppuVar11 + (long)ppuVar9 * 2;
  }
code_r0x00010988c138:
  pppuVar7[0x5a] = ppuVar9;
  return;
}



/* Entry: 10a7c6ef8; end: 10a7c6f1b;  */

void FUN_10a7c6ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar4 = (long *)0x3;
  uVar6 = 0;
  FUN_10a052ee0(3,0,param_1);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a7c6480(plVar4,uVar6);
  FUN_10a052e3c(param_4);
  uVar1 = *(undefined1 *)(plVar4[3] + 0x29);
  *extraout_x8 = 2;
  *(undefined1 *)(extraout_x8 + 2) = uVar1;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a7c6f1c; end: 10a7c6fd7;  */

void FUN_10a7c6f1c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
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
  FUN_10a7c6480(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)(param_2[3] + 0x29);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
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



/* Entry: 10a7c6fd8; end: 10a7c709b;  */

void FUN_10a7c6fd8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7c65ac(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4[3] + 0x29) = (char)param_2;
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



/* Entry: 10a7c709c; end: 10a7c70e3;  */

void FUN_10a7c709c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a7c709c(param_1,*param_2);
    FUN_10a7c709c(param_1,param_2[1]);
    func_0x00010a6c7484(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a7c70e4; end: 10a7c725b;  */

void FUN_10a7c70e4(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_50 [8];
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 != (long *)0x0) {
    lVar8 = *(long *)(param_2 + 0x10);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar6 = *(long *)(param_2 + 0x18);
      lStack_40 = lVar6;
      plStack_38 = plVar4;
      if (lVar6 != 0) {
        lVar7 = *param_1;
        lVar5 = *(long *)(lVar8 + 0x20);
        if (((lVar5 != 0 && lVar7 != 0) && (*(int *)(lVar7 + 0x18) != 0)) &&
           (*(int *)(lVar7 + 0x1c) != 0)) {
          FUN_10a7c725c(auStack_50,lVar5,param_1);
          FUN_10a00bca8(lVar6,auStack_50);
          if (plStack_48 != (long *)0x0) {
            plVar4 = plStack_48 + 1;
            do {
              lVar6 = *plVar4;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar2) {
                *plVar4 = lVar6 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar6 == 0) {
              (**(code **)(*plStack_48 + 0x10))(plStack_48);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
            }
          }
          if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
            func_0x00010ae06f08(1,4,&UNK_10f6778e3,&UNK_10f677920,0x42,&UNK_10f677a01,in_x6,in_x7,
                                *(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c));
          }
        }
        FUN_10a5d1930(lVar8 + 0x28,&lStack_40);
        if (plStack_38 == (long *)0x0) {
          return;
        }
      }
      plVar3 = plStack_38;
      plVar4 = plStack_38 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  return;
}



/* Entry: 10a7c725c; end: 10a7c734b;  */

void FUN_10a7c725c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_50;
  long *plStack_48;
  
  plVar4 = (long *)0x2d0;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110b9fcf0;
  plVar1 = plVar4 + 3;
  FUN_10a1db410(plVar1,param_2,param_3);
  plStack_50 = plVar1;
  plStack_48 = plVar4;
  FUN_10a063ca4(&plStack_50,plVar4 + 0xb,plVar1);
  FUN_10a0db928(param_1,param_2,&plStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a7c734c; end: 10a7c73b7;  */

void FUN_10a7c734c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a7c73b8; end: 10a7c76bb;  */

void FUN_10a7c73b8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_78;
  long *plStack_70;
  char cStack_61;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar12 = *(long *)(param_2 + 0x10);
  lStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x20);
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar4, plVar4 == (long *)0x0)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(param_2 + 0x18);
    lStack_50 = lVar9;
  }
  lStack_60 = 0;
  plStack_58 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x30);
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 == (long *)0x0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(param_2 + 0x28);
    lStack_60 = lVar11;
  }
  lVar13 = *param_1;
  if (((*(long *)(lVar12 + 0x20) == 0 || lVar13 == 0) || (*(int *)(lVar13 + 0x18) == 0)) ||
     (*(int *)(lVar13 + 0x1c) == 0 || lVar9 == 0)) {
    if (lVar11 != 0) {
      func_0x000107c2b054(&uStack_78,&UNK_10f677b6f);
      FUN_10a6c7134(lVar11,&uStack_78);
      if (cStack_61 < '\0') {
        __ZdlPv(uStack_78);
      }
    }
  }
  else {
    FUN_10a7c725c(&uStack_78,*(long *)(lVar12 + 0x20),param_1);
    FUN_10a00bca8(lVar9,&uStack_78);
    if (plStack_70 != (long *)0x0) {
      plVar4 = plStack_70 + 1;
      do {
        lVar9 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
      }
    }
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f6778e3,&UNK_10f677a1b,0x6e,&UNK_10f677a01,in_x6,in_x7,
                          *(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x1c));
    }
  }
  if (lStack_50 != 0) {
    FUN_10a5d1930(lVar12 + 0x28,&lStack_50);
  }
  plVar4 = plStack_58;
  if (lStack_60 != 0) {
    plVar6 = (long *)(lVar12 + 0x48);
    plVar5 = (long *)*plVar6;
    plVar8 = plVar5;
    plVar10 = plVar6;
    if (plVar5 != (long *)0x0) {
      do {
        lVar9 = 8;
        if (plStack_58 <= (long *)plVar8[5]) {
          lVar9 = 0;
          plVar10 = plVar8;
        }
        puVar1 = (undefined8 *)((long)plVar8 + lVar9);
        plVar8 = (long *)*puVar1;
      } while ((long *)*puVar1 != (long *)0x0);
      if ((plVar10 != plVar6) && ((long *)plVar10[5] <= plStack_58)) {
        plVar8 = plVar10;
        plVar6 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar8[2];
            bVar3 = (long *)*plVar7 != plVar8;
            plVar8 = plVar7;
          } while (bVar3);
        }
        else {
          do {
            plVar7 = plVar6;
            plVar6 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        if (*(long **)(lVar12 + 0x40) == plVar10) {
          *(long **)(lVar12 + 0x40) = plVar7;
        }
        *(long *)(lVar12 + 0x50) = *(long *)(lVar12 + 0x50) + -1;
        FUN_10a04815c(plVar5,plVar10);
        func_0x00010a6c7484(plVar10 + 4);
        __ZdlPv(plVar10);
      }
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar10 = plVar4 + 1;
    do {
      lVar12 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar10 = plStack_48 + 1;
    do {
      lVar12 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a7c76bc; end: 10a7c76f7;  */

void FUN_10a7c76bc(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a7c76f8; end: 10a7c7783;  */

void FUN_10a7c76f8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c18ce8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10a7c7784; end: 10a7c78fb;  */

void FUN_10a7c7784(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_50 [8];
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 != (long *)0x0) {
    lVar8 = *(long *)(param_2 + 0x10);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar6 = *(long *)(param_2 + 0x18);
      lStack_40 = lVar6;
      plStack_38 = plVar4;
      if (lVar6 != 0) {
        lVar7 = *param_1;
        lVar5 = *(long *)(lVar8 + 0x20);
        if (((lVar5 != 0 && lVar7 != 0) && (*(int *)(lVar7 + 0x18) != 0)) &&
           (*(int *)(lVar7 + 0x1c) != 0)) {
          FUN_10a7c725c(auStack_50,lVar5,param_1);
          FUN_10a00bca8(lVar6,auStack_50);
          if (plStack_48 != (long *)0x0) {
            plVar4 = plStack_48 + 1;
            do {
              lVar6 = *plVar4;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar2) {
                *plVar4 = lVar6 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar6 == 0) {
              (**(code **)(*plStack_48 + 0x10))(plStack_48);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
            }
          }
          if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
            func_0x00010ae06f08(1,4,&UNK_10f6778e3,&UNK_10f677b8c,0x97,&UNK_10f677a01,in_x6,in_x7,
                                *(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c));
          }
        }
        FUN_10a5d1930(lVar8 + 0x28,&lStack_40);
        if (plStack_38 == (long *)0x0) {
          return;
        }
      }
      plVar3 = plStack_38;
      plVar4 = plStack_38 + 1;
      do {
        lVar8 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  return;
}



/* Entry: 10a7c78fc; end: 10a7c7967;  */

void FUN_10a7c78fc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a7c7968; end: 10a7c7a0b;  */

undefined8 * FUN_10a7c7968(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7c7a0c);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a7c7a0c; end: 10a7c7b13;  */

void FUN_10a7c7a0c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7c7b14(param_2,param_3);
  FUN_10a0584c8(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  FUN_10a79b64c(plVar4,&stack0xffffffffffffffa8);
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



/* Entry: 10a7c7b14; end: 10a7c7b7b;  */

void FUN_10a7c7b14(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
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
  long in_stack_ffffffffffffff80;
  undefined8 in_stack_ffffffffffffff88;
  long in_stack_ffffffffffffff98;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c18e70;
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
  plVar6 = plVar4;
  FUN_10a7c7b14(plVar4,param_2);
  FUN_10a43b1c4(param_4);
  func_0x000109898570(&stack0xffffffffffffff88,plVar4,param_3);
  func_0x000109898570(&lStack_90,plVar4,param_3 + 2);
  FUN_10a79b728(plVar6,&stack0xffffffffffffff88,&lStack_90);
  if (in_stack_ffffffffffffff80 < 0) {
    __ZdlPv(lStack_90);
  }
  if (in_stack_ffffffffffffff98 < 0) {
    __ZdlPv(in_stack_ffffffffffffff88);
  }
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)plVar6;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
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
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10a7c7b7c; end: 10a7c7cbf;  */

void FUN_10a7c7b7c(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
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
  FUN_10a7c7b14(param_2,param_3);
  FUN_10a43b1c4(param_5);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4);
  func_0x000109898570(&lStack_70,param_2,param_4 + 0x10);
  FUN_10a79b728(plVar4,&stack0xffffffffffffffa8,&lStack_70);
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
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



/* Entry: 10a7c7cc0; end: 10a7c7e17;  */

void FUN_10a7c7cc0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  long in_stack_ffffffffffffffa0;
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
  FUN_10a7c7b14(param_2,param_3);
  FUN_10a7c7e18(param_5);
  plVar5 = param_2;
  func_0x000109898518(param_2,param_4);
  func_0x000109898570(&stack0xffffffffffffffa8,param_2,param_4 + 0x10);
  func_0x000109898570(&lStack_70,param_2,param_4 + 0x20);
  FUN_10a79ba1c(plVar4,plVar5,&stack0xffffffffffffffa8,&lStack_70);
  if (in_stack_ffffffffffffffa0 < 0) {
    __ZdlPv(lStack_70);
  }
  if (in_stack_ffffffffffffffb8 < 0) {
    __ZdlPv(in_stack_ffffffffffffffa8);
  }
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar4;
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
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
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
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



/* Entry: 10a7c7e18; end: 10a7c7e3b;  */

void FUN_10a7c7e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
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
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar3 = (long *)0x3;
  uVar5 = 0;
  FUN_10a052ee0(3,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a7c7ef4(extraout_x8,plVar3,FUN_10a79bd2c,0,uVar5,param_1,param_4);
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



/* Entry: 10a7c7e3c; end: 10a7c7ef3;  */

void FUN_10a7c7e3c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7c7ef4(param_1,param_2,FUN_10a79bd2c,0,param_3,param_4,param_5);
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



/* Entry: 10a7c7ef4; end: 10a7c7f83;  */

void FUN_10a7c7ef4(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_2;
  FUN_10a7c7b14(param_2,param_5);
  FUN_10a7c7f84(param_7);
  func_0x000109898518(param_2,param_6);
  plVar2 = (long *)(lVar1 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar2 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar2,param_2);
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar2;
  return;
}



/* Entry: 10a7c7f84; end: 10a7c7fa7;  */

void FUN_10a7c7f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
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
  FUN_10a7c7ef4(extraout_x8,plVar3,FUN_10a79be2c,0,uVar5,param_1,param_4);
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



/* Entry: 10a7c7fa8; end: 10a7c805f;  */

void FUN_10a7c7fa8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7c7ef4(param_1,param_2,FUN_10a79be2c,0,param_3,param_4,param_5);
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



/* Entry: 10a7c8060; end: 10a7c8143;  */

void FUN_10a7c8060(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  FUN_10a7c7b14(param_2,param_3);
  FUN_10a7c8144(param_5);
  plVar5 = param_2;
  func_0x000109898518(param_2,param_4);
  func_0x000109898518(param_2,param_4 + 0x10);
  FUN_10a79bf00(plVar4,plVar5,param_2);
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)plVar4;
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
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
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
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



/* Entry: 10a7c8144; end: 10a7c8167;  */

void FUN_10a7c8144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar6 = 0;
  FUN_10a052ee0(2,0,param_1);
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
  FUN_10a7c8238(plVar3,uVar6);
  FUN_10a065020(param_4);
  func_0x00010989847c(plVar3,param_1);
  FUN_10a79aecc(plVar5,plVar3);
  *extraout_x8 = 2;
  *(char *)(extraout_x8 + 2) = (char)plVar5;
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
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
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a7c8168; end: 10a7c8237;  */

void FUN_10a7c8168(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7c8238(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  FUN_10a79aecc(plVar4,param_2);
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



/* Entry: 10a7c8238; end: 10a7c829f;  */

/* WARNING: Removing unreachable block (ram,0x00010a7c8610) */

void FUN_10a7c8238(undefined **param_1,undefined **param_2,undefined **param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined4 *extraout_x8;
  ulong *puVar13;
  undefined *puVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  undefined8 auStack_140 [2];
  char cStack_129;
  undefined4 uStack_128;
  uint uStack_124;
  char cStack_111;
  undefined8 auStack_110 [2];
  char cStack_f9;
  undefined1 uStack_f8;
  char *pcStack_f0;
  undefined1 uStack_e8;
  ulong uStack_e0;
  undefined1 uStack_d8;
  ulong uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined1 uStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong *puStack_88;
  long in_stack_ffffffffffffff80;
  long *in_stack_ffffffffffffff88;
  
  ppuVar5 = param_1;
  func_0x000109898688();
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar5);
    param_2 = ppuVar5;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c18e70;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar11 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar11;
  (**(code **)(*plVar11 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar11;
  FUN_10a7c7b14(plVar11,param_2);
  FUN_10a7c8888(param_4);
  plVar8 = plVar11;
  FUN_10a373c54(plVar11,param_3);
  plVar9 = plVar11;
  func_0x00010a2e40b8(plVar11,param_3 + 2);
  FUN_10a059354(&uStack_170,plVar11,param_3 + 4);
  FUN_10a2949d4(&uStack_180,plVar11,param_3 + 6);
  plStack_158 = plStack_178;
  uStack_160 = uStack_180;
  plStack_148 = plStack_168;
  uStack_150 = uStack_170;
  uStack_170 = 0;
  plStack_168 = (long *)0x0;
  uStack_180 = 0;
  plStack_178 = (long *)0x0;
  FUN_10a03cd44(&stack0xffffffffffffff80,plVar8);
  if (in_stack_ffffffffffffff80 == 0) {
    FUN_10a00946c(&UNK_10f67671e);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a7c8770);
    (*pcVar3)();
  }
  *(undefined1 *)(in_stack_ffffffffffffff80 + 0x288) = 0;
  FUN_10a08d2e0(&uStack_98,in_stack_ffffffffffffff80 + 0x290);
  uStack_a8 = uStack_a8 & 0xffffffffffffff00;
  uStack_a0 = 0;
  puStack_b0 = (ulong *)0x0;
  uStack_b8 = 3;
  puVar13 = &uStack_98;
  func_0x00010938229c();
  puVar10 = &uStack_a8;
  puStack_b0 = puVar13;
  func_0x00010945a80c(puVar10,"path");
  uVar12 = *puVar10;
  *(undefined1 *)puVar10 = uStack_b8;
  puVar13 = (ulong *)puVar10[1];
  uStack_b8 = (char)uVar12;
  puVar10[1] = (ulong)puStack_b0;
  puStack_b0 = puVar13;
  func_0x000109380ffc(&puStack_b0);
  if ((int)plVar9 == 0) {
    puStack_c0 = (undefined *)0x0;
    uStack_c8 = 3;
    puVar14 = &DAT_10f2ebfea;
    FUN_10a7c9e74();
    puVar13 = &uStack_a8;
    puStack_c0 = puVar14;
    func_0x00010945a80c(puVar13,&DAT_10f4623dd);
    uVar12 = *puVar13;
    *(undefined1 *)puVar13 = uStack_c8;
    puVar14 = (undefined *)puVar13[1];
    uStack_c8 = (char)uVar12;
    puVar13[1] = (ulong)puStack_c0;
    puStack_c0 = puVar14;
    func_0x000109380ffc(&puStack_c0);
  }
  plVar11 = (long *)plVar8[0x4d];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0xb0))();
  }
  uStack_d0 = (ulong)plVar11 & 0xffffffff;
  uStack_d8 = 6;
  puVar13 = &uStack_a8;
  func_0x00010945a80c(puVar13,"width");
  uVar12 = *puVar13;
  *(undefined1 *)puVar13 = uStack_d8;
  uVar15 = puVar13[1];
  uStack_d8 = (char)uVar12;
  puVar13[1] = uStack_d0;
  uStack_d0 = uVar15;
  func_0x000109380ffc(&uStack_d0);
  plVar11 = (long *)plVar8[0x4d];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0xb8))();
  }
  uStack_e0 = (ulong)plVar11 & 0xffffffff;
  uStack_e8 = 6;
  puVar13 = &uStack_a8;
  func_0x00010945a80c(puVar13,"height");
  uVar12 = *puVar13;
  *(undefined1 *)puVar13 = uStack_e8;
  uVar15 = puVar13[1];
  uStack_e8 = (char)uVar12;
  puVar13[1] = uStack_e0;
  uStack_e0 = uVar15;
  func_0x000109380ffc(&uStack_e0);
  pcStack_f0 = (char *)0x0;
  uStack_f8 = 3;
  pcVar16 = "image";
  func_0x0001094a957c();
  puVar13 = &uStack_a8;
  pcStack_f0 = pcVar16;
  func_0x00010945a80c(puVar13,"content_type");
  uStack_f8 = (undefined1)*puVar13;
  *(undefined1 *)puVar13 = 3;
  pcVar16 = (char *)puVar13[1];
  puVar13[1] = (ulong)pcStack_f0;
  pcStack_f0 = pcVar16;
  func_0x000109380ffc(&pcStack_f0);
  uVar19 = *(undefined8 *)(plVar7[0x23] + 0x940);
  func_0x000107c2b054(auStack_110,&UNK_10f67679a);
  cStack_111 = '\x04';
  uStack_128 = 0x54534f50;
  uStack_124 = uStack_124 & 0xffffff00;
  FUN_10a0c32e4(auStack_140,&uStack_a8,0xffffffff,0x20,0,0);
  FUN_10a25f558(uVar19,auStack_110,&uStack_128,auStack_140,&uStack_150,&uStack_160);
  if (cStack_129 < '\0') {
    __ZdlPv(auStack_140[0]);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(CONCAT44(uStack_124,uStack_128));
  }
  if (cStack_f9 < '\0') {
    __ZdlPv(auStack_110[0]);
  }
  func_0x000109380ffc(&uStack_a0,uStack_a8 & 0xff);
  if (in_stack_ffffffffffffff88 != (long *)0x0) {
    plVar11 = in_stack_ffffffffffffff88 + 1;
    do {
      lVar18 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar18 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*in_stack_ffffffffffffff88 + 0x10))(in_stack_ffffffffffffff88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffff88);
    }
  }
  plVar11 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar7 = plStack_158 + 1;
    do {
      lVar18 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar18 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar7 = plStack_148 + 1;
    do {
      lVar18 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar18 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_178;
  if (plStack_178 != (long *)0x0) {
    plVar7 = plStack_178 + 1;
    do {
      lVar18 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar18 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plVar11 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    plVar7 = plStack_168 + 1;
    do {
      lVar18 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar18 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  *extraout_x8 = 0;
  puVar13 = (ulong *)(plVar6 + 0x4b);
  lVar18 = plVar6[0x59];
  uVar12 = lVar18 - 1;
  plVar6[0x59] = uVar12;
  if (uVar12 < 8) {
    uVar12 = puVar13[lVar18 + 2];
    if (plVar6[0x5a] == uVar12) {
      return;
    }
  }
  else {
    uVar12 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar12) {
      return;
    }
  }
  uVar15 = *puVar13;
  lVar18 = plVar6[0x4c];
  lVar20 = lVar18 - uVar15;
  uVar22 = lVar20 >> 4;
  if (uVar22 < uVar12) {
    uVar23 = uVar12 - uVar22;
    lVar21 = plVar6[0x4d];
    if ((ulong)(lVar21 - lVar18 >> 4) < uVar23) {
      if (uVar12 >> 0x3c == 0) {
        uVar17 = (long)(lVar21 - uVar15) >> 3;
        if (uVar17 <= uVar12) {
          uVar17 = uVar12;
        }
        if (0x7fffffffffffffef < lVar21 - uVar15) {
          uVar17 = 0xfffffffffffffff;
        }
        puStack_88 = puVar13;
        if (uVar17 >> 0x3c == 0) {
          lVar4 = uVar17 << 4;
          __Znwm();
          lVar18 = lVar4 + lVar20;
          _bzero(lVar18,uVar23 * 0x10);
          uVar22 = lVar18 + uVar22 * -0x10;
          _memcpy(uVar22,uVar15,lVar20);
          *puVar13 = uVar22;
          plVar6[0x4c] = lVar18 + uVar23 * 0x10;
          plVar6[0x4d] = lVar4 + uVar17 * 0x10;
          uStack_a8 = uVar15;
          uStack_a0 = uVar15;
          uStack_98 = uVar15;
          lStack_90 = lVar21;
          func_0x00010988c1b8(&uStack_a8);
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
    _bzero(lVar18,uVar23 * 0x10);
    plVar6[0x4c] = lVar18 + uVar23 * 0x10;
  }
  else if (uVar12 < uVar22) {
    lVar20 = uVar15 + uVar12 * 0x10;
    while (lVar18 != lVar20) {
      lVar18 = lVar18 + -0x10;
      func_0x00010988c204(lVar18);
    }
    plVar6[0x4c] = lVar20;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar12;
  return;
}



/* Entry: 10a7c82a0; end: 10a7c8887;  */

/* WARNING: Removing unreachable block (ram,0x00010a7c8610) */

void FUN_10a7c82a0(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined *puVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  undefined4 uStack_108;
  uint uStack_104;
  char cStack_f1;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  undefined1 uStack_d8;
  char *pcStack_d0;
  undefined1 uStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  ulong uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined1 uStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong *puStack_68;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  
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
  FUN_10a7c7b14(param_2,param_3);
  FUN_10a7c8888(param_5);
  plVar9 = param_2;
  FUN_10a373c54(param_2,param_4);
  plVar8 = param_2;
  func_0x00010a2e40b8(param_2,param_4 + 0x10);
  FUN_10a059354(&uStack_150,param_2,param_4 + 0x20);
  FUN_10a2949d4(&uStack_160,param_2,param_4 + 0x30);
  plStack_138 = plStack_158;
  uStack_140 = uStack_160;
  plStack_128 = plStack_148;
  uStack_130 = uStack_150;
  uStack_150 = 0;
  plStack_148 = (long *)0x0;
  uStack_160 = 0;
  plStack_158 = (long *)0x0;
  FUN_10a03cd44(&stack0xffffffffffffffa0,plVar9);
  if (in_stack_ffffffffffffffa0 == 0) {
    FUN_10a00946c(&UNK_10f67671e);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a7c8770);
    (*pcVar3)();
  }
  *(undefined1 *)(in_stack_ffffffffffffffa0 + 0x288) = 0;
  FUN_10a08d2e0(&uStack_78,in_stack_ffffffffffffffa0 + 0x290);
  uStack_88 = uStack_88 & 0xffffffffffffff00;
  uStack_80 = 0;
  puStack_90 = (ulong *)0x0;
  uStack_98 = 3;
  puVar11 = &uStack_78;
  func_0x00010938229c();
  puVar7 = &uStack_88;
  puStack_90 = puVar11;
  func_0x00010945a80c(puVar7,"path");
  uVar10 = *puVar7;
  *(undefined1 *)puVar7 = uStack_98;
  puVar11 = (ulong *)puVar7[1];
  uStack_98 = (char)uVar10;
  puVar7[1] = (ulong)puStack_90;
  puStack_90 = puVar11;
  func_0x000109380ffc(&puStack_90);
  if ((int)plVar8 == 0) {
    puStack_a0 = (undefined *)0x0;
    uStack_a8 = 3;
    puVar12 = &DAT_10f2ebfea;
    FUN_10a7c9e74();
    puVar11 = &uStack_88;
    puStack_a0 = puVar12;
    func_0x00010945a80c(puVar11,&DAT_10f4623dd);
    uVar10 = *puVar11;
    *(undefined1 *)puVar11 = uStack_a8;
    puVar12 = (undefined *)puVar11[1];
    uStack_a8 = (char)uVar10;
    puVar11[1] = (ulong)puStack_a0;
    puStack_a0 = puVar12;
    func_0x000109380ffc(&puStack_a0);
  }
  plVar8 = (long *)plVar9[0x4d];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0xb0))();
  }
  uStack_b0 = (ulong)plVar8 & 0xffffffff;
  uStack_b8 = 6;
  puVar11 = &uStack_88;
  func_0x00010945a80c(puVar11,"width");
  uVar10 = *puVar11;
  *(undefined1 *)puVar11 = uStack_b8;
  uVar13 = puVar11[1];
  uStack_b8 = (char)uVar10;
  puVar11[1] = uStack_b0;
  uStack_b0 = uVar13;
  func_0x000109380ffc(&uStack_b0);
  plVar9 = (long *)plVar9[0x4d];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0xb8))();
  }
  uStack_c0 = (ulong)plVar9 & 0xffffffff;
  uStack_c8 = 6;
  puVar11 = &uStack_88;
  func_0x00010945a80c(puVar11,"height");
  uVar10 = *puVar11;
  *(undefined1 *)puVar11 = uStack_c8;
  uVar13 = puVar11[1];
  uStack_c8 = (char)uVar10;
  puVar11[1] = uStack_c0;
  uStack_c0 = uVar13;
  func_0x000109380ffc(&uStack_c0);
  pcStack_d0 = (char *)0x0;
  uStack_d8 = 3;
  pcVar14 = "image";
  func_0x0001094a957c();
  puVar11 = &uStack_88;
  pcStack_d0 = pcVar14;
  func_0x00010945a80c(puVar11,"content_type");
  uStack_d8 = (undefined1)*puVar11;
  *(undefined1 *)puVar11 = 3;
  pcVar14 = (char *)puVar11[1];
  puVar11[1] = (ulong)pcStack_d0;
  pcStack_d0 = pcVar14;
  func_0x000109380ffc(&pcStack_d0);
  uVar17 = *(undefined8 *)(plVar6[0x23] + 0x940);
  func_0x000107c2b054(auStack_f0,&UNK_10f67679a);
  cStack_f1 = '\x04';
  uStack_108 = 0x54534f50;
  uStack_104 = uStack_104 & 0xffffff00;
  FUN_10a0c32e4(auStack_120,&uStack_88,0xffffffff,0x20,0,0);
  FUN_10a25f558(uVar17,auStack_f0,&uStack_108,auStack_120,&uStack_130,&uStack_140);
  if (cStack_109 < '\0') {
    __ZdlPv(auStack_120[0]);
  }
  if (cStack_f1 < '\0') {
    __ZdlPv(CONCAT44(uStack_104,uStack_108));
  }
  if (cStack_d9 < '\0') {
    __ZdlPv(auStack_f0[0]);
  }
  func_0x000109380ffc(&uStack_80,uStack_88 & 0xff);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar16 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar16 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  plVar6 = plStack_138;
  if (plStack_138 != (long *)0x0) {
    plVar9 = plStack_138 + 1;
    do {
      lVar16 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar16 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar9 = plStack_128 + 1;
    do {
      lVar16 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar16 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar9 = plStack_158 + 1;
    do {
      lVar16 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar16 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar9 = plStack_148 + 1;
    do {
      lVar16 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar16 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *param_1 = 0;
  puVar11 = (ulong *)(plVar5 + 0x4b);
  lVar16 = plVar5[0x59];
  uVar10 = lVar16 - 1;
  plVar5[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = puVar11[lVar16 + 2];
    if (plVar5[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar10) {
      return;
    }
  }
  uVar13 = *puVar11;
  lVar16 = plVar5[0x4c];
  lVar18 = lVar16 - uVar13;
  uVar20 = lVar18 >> 4;
  if (uVar20 < uVar10) {
    uVar21 = uVar10 - uVar20;
    lVar19 = plVar5[0x4d];
    if ((ulong)(lVar19 - lVar16 >> 4) < uVar21) {
      if (uVar10 >> 0x3c == 0) {
        uVar15 = (long)(lVar19 - uVar13) >> 3;
        if (uVar15 <= uVar10) {
          uVar15 = uVar10;
        }
        if (0x7fffffffffffffef < lVar19 - uVar13) {
          uVar15 = 0xfffffffffffffff;
        }
        puStack_68 = puVar11;
        if (uVar15 >> 0x3c == 0) {
          lVar4 = uVar15 << 4;
          __Znwm();
          lVar16 = lVar4 + lVar18;
          _bzero(lVar16,uVar21 * 0x10);
          uVar20 = lVar16 + uVar20 * -0x10;
          _memcpy(uVar20,uVar13,lVar18);
          *puVar11 = uVar20;
          plVar5[0x4c] = lVar16 + uVar21 * 0x10;
          plVar5[0x4d] = lVar4 + uVar15 * 0x10;
          uStack_88 = uVar13;
          uStack_80 = uVar13;
          uStack_78 = uVar13;
          lStack_70 = lVar19;
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
    _bzero(lVar16,uVar21 * 0x10);
    plVar5[0x4c] = lVar16 + uVar21 * 0x10;
  }
  else if (uVar10 < uVar20) {
    lVar18 = uVar13 + uVar10 * 0x10;
    while (lVar16 != lVar18) {
      lVar16 = lVar16 + -0x10;
      func_0x00010988c204(lVar16);
    }
    plVar5[0x4c] = lVar18;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar10;
  return;
}



/* Entry: 10a7c8888; end: 10a7c88ab;  */

void FUN_10a7c8888(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  undefined8 uVar15;
  long ***ppplVar16;
  undefined4 *extraout_x8;
  long ***ppplVar17;
  long ***ppplVar18;
  long lVar19;
  ulong uVar20;
  long **pplVar21;
  long ****pppplVar22;
  long ***ppplVar23;
  long ***ppplVar24;
  long ****pppplVar25;
  ulong uVar26;
  long ****pppplVar27;
  undefined1 auStack_158 [8];
  long *plStack_150;
  undefined1 auStack_148 [8];
  long *plStack_140;
  long ***ppplStack_138;
  long ***ppplStack_130;
  long ***ppplStack_128;
  long ***ppplStack_120;
  long ***ppplStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_100;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  char cStack_d9;
  long **pplStack_d0;
  undefined6 uStack_c8;
  undefined2 uStack_c2;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  undefined1 auStack_b0 [8];
  long **pplStack_a8;
  undefined1 auStack_a0 [8];
  long **pplStack_98;
  long ***ppplStack_90;
  long **pplStack_88;
  long **pplStack_80;
  long ***ppplStack_78;
  
  if ((int)param_1 == 4) {
    return;
  }
  pppplVar10 = (long ****)0x4;
  uVar15 = 0;
  FUN_10a052ee0(4,0);
  pppplVar11 = pppplVar10;
  (*(code *)(*pppplVar10)[0xb])();
  if (pppplVar11[0x59] < (long ***)0x8) {
    pppplVar11[(long)pppplVar11[0x59] + 0x4e] = pppplVar11[0x5a];
    pppplVar11[0x59] = (long ***)((long)pppplVar11[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppplVar11 + 0x4b);
  }
  pppplVar12 = pppplVar10;
  FUN_10a7c7b14(pppplVar10,uVar15);
  FUN_10a7c8f88(param_4);
  if (*param_1 == 7) {
    pppplVar13 = pppplVar10;
    (*(code *)(*pppplVar10)[0x13])(pppplVar10,*(undefined8 *)(param_1 + 2));
    pppplVar25 = pppplVar10;
    ppplStack_120 = (long ***)pppplVar13;
    (*(code *)(*pppplVar10)[0x41])(pppplVar10,&ppplStack_120);
    if (((ulong)pppplVar25 & 1) != 0) {
      ppplStack_90 = ppplStack_120;
      pppplVar13 = pppplVar10;
      (*(code *)(*pppplVar10)[0x4d])(pppplVar10,&ppplStack_90);
      ppplStack_138 = (long ***)0x0;
      ppplStack_130 = (long ***)0x0;
      ppplStack_128 = (long ***)0x0;
      FUN_10a540558(&ppplStack_138,pppplVar13);
      if (pppplVar13 != (long ****)0x0) {
        pppplVar25 = (long ****)0x0;
        do {
          (*(code *)(*pppplVar10)[0x51])(&uStack_f0,pppplVar10,&ppplStack_90,pppplVar25);
          FUN_10a277688(&pplStack_d0,pppplVar10,&uStack_f0);
          if (ppplStack_130 < ppplStack_128) {
            ppplStack_130[1] = (long **)CONCAT26(uStack_c2,uStack_c8);
            *ppplStack_130 = pplStack_d0;
            pplStack_d0 = (long **)0x0;
            uStack_c8 = 0;
            uStack_c2 = 0;
            ppplStack_130 = ppplStack_130 + 2;
          }
          else {
            lVar19 = (long)ppplStack_130 - (long)ppplStack_138;
            uVar26 = (lVar19 >> 4) + 1;
            if (uVar26 >> 0x3c != 0) {
              FUN_10a26a148();
              goto LAB_10a7c8e0c;
            }
            uVar20 = (long)ppplStack_128 - (long)ppplStack_138 >> 3;
            if (uVar20 <= uVar26) {
              uVar20 = uVar26;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppplStack_128 - (long)ppplStack_138)) {
              uVar20 = 0xfffffffffffffff;
            }
            pppplVar14 = &ppplStack_138;
            ppplStack_100 = (long ***)&ppplStack_138;
            FUN_10a26a15c();
            puVar3 = (undefined8 *)((long)pppplVar14 + lVar19);
            pppplVar22 = (long ****)(puVar3 + 2);
            puVar3[1] = CONCAT26(uStack_c2,uStack_c8);
            *puVar3 = pplStack_d0;
            pplStack_d0 = (long **)0x0;
            uStack_c8 = 0;
            uStack_c2 = 0;
            pppplVar27 = (long ****)((long)puVar3 - ((long)ppplStack_130 - (long)ppplStack_138));
            _memcpy(pppplVar27);
            ppplStack_120 = ppplStack_138;
            ppplStack_110 = ppplStack_138;
            ppplStack_108 = ppplStack_128;
            ppplStack_118 = ppplStack_138;
            ppplStack_138 = (long ***)pppplVar27;
            ppplStack_130 = (long ***)pppplVar22;
            ppplStack_128 = (long ***)(pppplVar14 + uVar20 * 2);
            func_0x00010a54063c(&ppplStack_120);
            plVar7 = (long *)CONCAT26(uStack_c2,uStack_c8);
            ppplStack_130 = (long ***)pppplVar22;
            if (plVar7 != (long *)0x0) {
              plVar1 = plVar7 + 1;
              do {
                lVar19 = *plVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar19 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar19 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
          }
          if ((3 < (int)uStack_f0) && (puStack_e8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_e8)();
          }
          pppplVar25 = (long ****)((long)pppplVar25 + 1);
        } while (pppplVar25 != pppplVar13);
      }
      if ((long ****)ppplStack_90 != (long ****)0x0) {
        (*(code *)**ppplStack_90)();
      }
      FUN_10a059354(auStack_148,pppplVar10,param_1 + 4);
      FUN_10a2949d4(auStack_158,pppplVar10,param_1 + 8);
      ppplStack_90 = (long ***)((ulong)ppplStack_90 & 0xffffffffffffff00);
      pplStack_88 = (long **)0x0;
      func_0x000109382360(auStack_a0,0,0,0,2);
      ppplVar18 = ppplStack_130;
      for (pppplVar10 = (long ****)ppplStack_138; pppplVar10 != (long ****)ppplVar18;
          pppplVar10 = pppplVar10 + 2) {
        if (*pppplVar10 != (long ***)0x0) {
          ppplStack_118 = (long ***)0x0;
          uVar26 = (ulong)ppplStack_120 >> 8;
          ppplStack_120 = (long ***)CONCAT71((int7)uVar26,3);
          pppplVar13 = (long ****)(*pppplVar10 + 3);
          func_0x00010938229c();
          ppplStack_118 = (long ***)pppplVar13;
          FUN_10a0a4bec(auStack_a0,&ppplStack_120);
          func_0x000109380ffc(&ppplStack_118,(ulong)ppplStack_120 & 0xff);
        }
      }
      func_0x000109381b20(auStack_b0,auStack_a0);
      pppplVar10 = &ppplStack_90;
      func_0x00010945a80c(pppplVar10,&DAT_10f35723b);
      uVar4 = *(undefined1 *)pppplVar10;
      *(undefined1 *)pppplVar10 = auStack_b0[0];
      ppplVar18 = pppplVar10[1];
      auStack_b0[0] = uVar4;
      pppplVar10[1] = (long ***)pplStack_a8;
      pplStack_a8 = (long **)ppplVar18;
      func_0x000109380ffc(&pplStack_a8);
      uStack_c8 = 0x697463417061;
      pplStack_d0 = (long **)0x6e732f2f3a707061;
      uStack_c2 = 0x6e6f;
      uStack_c0 = 0x6d6574737953;
      uStack_ba = 0x1600;
      cStack_d9 = '\x14';
      uStack_e0 = 0x73746e65;
      puStack_e8 = (undefined8 *)0x697069636552646e;
      uStack_f0 = 0x656972467465732f;
      uStack_dc = 0;
      ppplVar18 = &pplStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppplVar18,&uStack_f0,0x14);
      ppplStack_118 = (long ***)ppplVar18[1];
      ppplStack_120 = (long ***)*ppplVar18;
      ppplStack_110 = (long ***)ppplVar18[2];
      ppplVar18[1] = (long **)0x0;
      ppplVar18[2] = (long **)0x0;
      *ppplVar18 = (long **)0x0;
      if (cStack_d9 < '\0') {
        __ZdlPv(uStack_f0);
      }
      if (uStack_ba < 0) {
        __ZdlPv(pplStack_d0);
      }
      pplVar21 = pppplVar12[0x23][0x128];
      uStack_ba = CONCAT11(4,(undefined1)uStack_ba);
      pplStack_d0 = (long **)CONCAT35(pplStack_d0._5_3_,0x54534f50);
      FUN_10a0c32e4(&uStack_f0,&ppplStack_90,0xffffffff,0x20,0,0);
      FUN_10a25f558(pplVar21,&ppplStack_120,&pplStack_d0,&uStack_f0,auStack_148,auStack_158);
      if (cStack_d9 < '\0') {
        __ZdlPv(uStack_f0);
      }
      if (uStack_ba < 0) {
        __ZdlPv(pplStack_d0);
      }
      if ((long)ppplStack_110 < 0) {
        __ZdlPv(ppplStack_120);
      }
      func_0x000109380ffc(&pplStack_98,auStack_a0[0]);
      func_0x000109380ffc(&pplStack_88,(ulong)ppplStack_90 & 0xff);
      if (plStack_150 != (long *)0x0) {
        plVar7 = plStack_150 + 1;
        do {
          lVar19 = *plVar7;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *plVar7 = lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_150);
        }
      }
      if (plStack_140 != (long *)0x0) {
        plVar7 = plStack_140 + 1;
        do {
          lVar19 = *plVar7;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *plVar7 = lVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plStack_140 + 0x10))(plStack_140);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_140);
        }
      }
      ppplStack_120 = (long ***)&ppplStack_138;
      FUN_10a26a1e8(&ppplStack_120);
      *extraout_x8 = 0;
      pppplVar10 = pppplVar11 + 0x4b;
      ppplVar18 = pppplVar11[0x59];
      ppplVar16 = (long ***)((long)ppplVar18 + -1);
      pppplVar11[0x59] = ppplVar16;
      if (ppplVar16 < (long ***)0x8) {
        ppplVar18 = pppplVar10[(long)ppplVar18 + 2];
        if (pppplVar11[0x5a] == ppplVar18) {
          return;
        }
      }
      else {
        ppplVar18 = (long ***)pppplVar11[0x57][-1];
        pppplVar11[0x57] = pppplVar11[0x57] + -1;
        if (pppplVar11[0x5a] == ppplVar18) {
          return;
        }
      }
      ppplVar16 = *pppplVar10;
      ppplVar17 = pppplVar11[0x4c];
      lVar19 = (long)ppplVar17 - (long)ppplVar16;
      ppplVar24 = (long ***)(lVar19 >> 4);
      if (ppplVar24 < ppplVar18) {
        uVar26 = (long)ppplVar18 - (long)ppplVar24;
        ppplVar23 = pppplVar11[0x4d];
        if ((ulong)((long)ppplVar23 - (long)ppplVar17 >> 4) < uVar26) {
          if ((ulong)ppplVar18 >> 0x3c == 0) {
            ppplVar17 = (long ***)((long)ppplVar23 - (long)ppplVar16 >> 3);
            if (ppplVar17 <= ppplVar18) {
              ppplVar17 = ppplVar18;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppplVar23 - (long)ppplVar16)) {
              ppplVar17 = (long ***)0xfffffffffffffff;
            }
            ppplStack_78 = (long ***)pppplVar10;
            if ((ulong)ppplVar17 >> 0x3c == 0) {
              lVar9 = (long)ppplVar17 << 4;
              __Znwm();
              lVar2 = lVar9 + lVar19;
              _bzero(lVar2,uVar26 * 0x10);
              ppplVar24 = (long ***)(lVar2 + (long)ppplVar24 * -0x10);
              _memcpy(ppplVar24,ppplVar16,lVar19);
              *pppplVar10 = ppplVar24;
              pppplVar11[0x4c] = (long ***)(lVar2 + uVar26 * 0x10);
              pppplVar11[0x4d] = (long ***)(lVar9 + (long)ppplVar17 * 0x10);
              pplStack_98 = (long **)ppplVar16;
              ppplStack_90 = ppplVar16;
              pplStack_88 = (long **)ppplVar16;
              pplStack_80 = (long **)ppplVar23;
              func_0x00010988c1b8(&pplStack_98);
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
        _bzero(ppplVar17,uVar26 * 0x10);
        pppplVar11[0x4c] = ppplVar17 + uVar26 * 2;
      }
      else if (ppplVar18 < ppplVar24) {
        while (ppplVar17 != ppplVar16 + (long)ppplVar18 * 2) {
          ppplVar17 = ppplVar17 + -2;
          func_0x00010988c204(ppplVar17);
        }
        pppplVar11[0x4c] = ppplVar16 + (long)ppplVar18 * 2;
      }
code_r0x00010988c138:
      pppplVar11[0x5a] = ppplVar18;
      return;
    }
    if ((long ****)ppplStack_120 != (long ****)0x0) {
      (*(code *)**ppplStack_120)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10a7c8e0c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a7c8e10);
  (*pcVar8)();
}



/* Entry: 10a7c88ac; end: 10a7c8f87;  */

void FUN_10a7c88ac(undefined4 *param_1,long ****param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long ***ppplVar14;
  long ***ppplVar15;
  long ***ppplVar16;
  long lVar17;
  ulong uVar18;
  long **pplVar19;
  long ****pppplVar20;
  long ***ppplVar21;
  long ***ppplVar22;
  long ****pppplVar23;
  ulong uVar24;
  long ****pppplVar25;
  undefined1 auStack_148 [8];
  long *plStack_140;
  undefined1 auStack_138 [8];
  long *plStack_130;
  long ***ppplStack_128;
  long ***ppplStack_120;
  long ***ppplStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_100;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  char cStack_c9;
  long **pplStack_c0;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined2 uStack_aa;
  undefined1 auStack_a0 [8];
  long **pplStack_98;
  undefined1 auStack_90 [8];
  long **pplStack_88;
  long ***ppplStack_80;
  long **pplStack_78;
  long **pplStack_70;
  long ***ppplStack_68;
  
  pppplVar10 = param_2;
  (*(code *)(*param_2)[0xb])();
  if (pppplVar10[0x59] < (long ***)0x8) {
    pppplVar10[(long)pppplVar10[0x59] + 0x4e] = pppplVar10[0x5a];
    pppplVar10[0x59] = (long ***)((long)pppplVar10[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppplVar10 + 0x4b);
  }
  pppplVar11 = param_2;
  FUN_10a7c7b14(param_2,param_3);
  FUN_10a7c8f88(param_5);
  if (*param_4 == 7) {
    pppplVar12 = param_2;
    (*(code *)(*param_2)[0x13])(param_2,*(undefined8 *)(param_4 + 2));
    pppplVar23 = param_2;
    ppplStack_110 = (long ***)pppplVar12;
    (*(code *)(*param_2)[0x41])(param_2,&ppplStack_110);
    if (((ulong)pppplVar23 & 1) != 0) {
      ppplStack_80 = ppplStack_110;
      pppplVar12 = param_2;
      (*(code *)(*param_2)[0x4d])(param_2,&ppplStack_80);
      ppplStack_128 = (long ***)0x0;
      ppplStack_120 = (long ***)0x0;
      ppplStack_118 = (long ***)0x0;
      FUN_10a540558(&ppplStack_128,pppplVar12);
      if (pppplVar12 != (long ****)0x0) {
        pppplVar23 = (long ****)0x0;
        do {
          (*(code *)(*param_2)[0x51])(&uStack_e0,param_2,&ppplStack_80,pppplVar23);
          FUN_10a277688(&pplStack_c0,param_2,&uStack_e0);
          if (ppplStack_120 < ppplStack_118) {
            ppplStack_120[1] = (long **)CONCAT26(uStack_b2,uStack_b8);
            *ppplStack_120 = pplStack_c0;
            pplStack_c0 = (long **)0x0;
            uStack_b8 = 0;
            uStack_b2 = 0;
            ppplStack_120 = ppplStack_120 + 2;
          }
          else {
            lVar17 = (long)ppplStack_120 - (long)ppplStack_128;
            uVar24 = (lVar17 >> 4) + 1;
            if (uVar24 >> 0x3c != 0) {
              FUN_10a26a148();
              goto LAB_10a7c8e0c;
            }
            uVar18 = (long)ppplStack_118 - (long)ppplStack_128 >> 3;
            if (uVar18 <= uVar24) {
              uVar18 = uVar24;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppplStack_118 - (long)ppplStack_128)) {
              uVar18 = 0xfffffffffffffff;
            }
            pppplVar13 = &ppplStack_128;
            ppplStack_f0 = (long ***)&ppplStack_128;
            FUN_10a26a15c();
            puVar3 = (undefined8 *)((long)pppplVar13 + lVar17);
            pppplVar20 = (long ****)(puVar3 + 2);
            puVar3[1] = CONCAT26(uStack_b2,uStack_b8);
            *puVar3 = pplStack_c0;
            pplStack_c0 = (long **)0x0;
            uStack_b8 = 0;
            uStack_b2 = 0;
            pppplVar25 = (long ****)((long)puVar3 - ((long)ppplStack_120 - (long)ppplStack_128));
            _memcpy(pppplVar25);
            ppplStack_110 = ppplStack_128;
            ppplStack_100 = ppplStack_128;
            ppplStack_f8 = ppplStack_118;
            ppplStack_108 = ppplStack_128;
            ppplStack_128 = (long ***)pppplVar25;
            ppplStack_120 = (long ***)pppplVar20;
            ppplStack_118 = (long ***)(pppplVar13 + uVar18 * 2);
            func_0x00010a54063c(&ppplStack_110);
            plVar7 = (long *)CONCAT26(uStack_b2,uStack_b8);
            ppplStack_120 = (long ***)pppplVar20;
            if (plVar7 != (long *)0x0) {
              plVar1 = plVar7 + 1;
              do {
                lVar17 = *plVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar17 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar17 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
          }
          if ((3 < (int)uStack_e0) && (puStack_d8 != (undefined8 *)0x0)) {
            (**(code **)*puStack_d8)();
          }
          pppplVar23 = (long ****)((long)pppplVar23 + 1);
        } while (pppplVar23 != pppplVar12);
      }
      if ((long ****)ppplStack_80 != (long ****)0x0) {
        (*(code *)**ppplStack_80)();
      }
      FUN_10a059354(auStack_138,param_2,param_4 + 4);
      FUN_10a2949d4(auStack_148,param_2,param_4 + 8);
      ppplStack_80 = (long ***)((ulong)ppplStack_80 & 0xffffffffffffff00);
      pplStack_78 = (long **)0x0;
      func_0x000109382360(auStack_90,0,0,0,2);
      ppplVar16 = ppplStack_120;
      for (pppplVar12 = (long ****)ppplStack_128; pppplVar12 != (long ****)ppplVar16;
          pppplVar12 = pppplVar12 + 2) {
        if (*pppplVar12 != (long ***)0x0) {
          ppplStack_108 = (long ***)0x0;
          uVar24 = (ulong)ppplStack_110 >> 8;
          ppplStack_110 = (long ***)CONCAT71((int7)uVar24,3);
          pppplVar23 = (long ****)(*pppplVar12 + 3);
          func_0x00010938229c();
          ppplStack_108 = (long ***)pppplVar23;
          FUN_10a0a4bec(auStack_90,&ppplStack_110);
          func_0x000109380ffc(&ppplStack_108,(ulong)ppplStack_110 & 0xff);
        }
      }
      func_0x000109381b20(auStack_a0,auStack_90);
      pppplVar12 = &ppplStack_80;
      func_0x00010945a80c(pppplVar12,&DAT_10f35723b);
      uVar4 = *(undefined1 *)pppplVar12;
      *(undefined1 *)pppplVar12 = auStack_a0[0];
      ppplVar16 = pppplVar12[1];
      auStack_a0[0] = uVar4;
      pppplVar12[1] = (long ***)pplStack_98;
      pplStack_98 = (long **)ppplVar16;
      func_0x000109380ffc(&pplStack_98);
      uStack_b8 = 0x697463417061;
      pplStack_c0 = (long **)0x6e732f2f3a707061;
      uStack_b2 = 0x6e6f;
      uStack_b0 = 0x6d6574737953;
      uStack_aa = 0x1600;
      cStack_c9 = '\x14';
      uStack_d0 = 0x73746e65;
      puStack_d8 = (undefined8 *)0x697069636552646e;
      uStack_e0 = 0x656972467465732f;
      uStack_cc = 0;
      ppplVar16 = &pplStack_c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppplVar16,&uStack_e0,0x14);
      ppplStack_108 = (long ***)ppplVar16[1];
      ppplStack_110 = (long ***)*ppplVar16;
      ppplStack_100 = (long ***)ppplVar16[2];
      ppplVar16[1] = (long **)0x0;
      ppplVar16[2] = (long **)0x0;
      *ppplVar16 = (long **)0x0;
      if (cStack_c9 < '\0') {
        __ZdlPv(uStack_e0);
      }
      if (uStack_aa < 0) {
        __ZdlPv(pplStack_c0);
      }
      pplVar19 = pppplVar11[0x23][0x128];
      uStack_aa = CONCAT11(4,(undefined1)uStack_aa);
      pplStack_c0 = (long **)CONCAT35(pplStack_c0._5_3_,0x54534f50);
      FUN_10a0c32e4(&uStack_e0,&ppplStack_80,0xffffffff,0x20,0,0);
      FUN_10a25f558(pplVar19,&ppplStack_110,&pplStack_c0,&uStack_e0,auStack_138,auStack_148);
      if (cStack_c9 < '\0') {
        __ZdlPv(uStack_e0);
      }
      if (uStack_aa < 0) {
        __ZdlPv(pplStack_c0);
      }
      if ((long)ppplStack_100 < 0) {
        __ZdlPv(ppplStack_110);
      }
      func_0x000109380ffc(&pplStack_88,auStack_90[0]);
      func_0x000109380ffc(&pplStack_78,(ulong)ppplStack_80 & 0xff);
      if (plStack_140 != (long *)0x0) {
        plVar7 = plStack_140 + 1;
        do {
          lVar17 = *plVar7;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *plVar7 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_140 + 0x10))(plStack_140);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_140);
        }
      }
      if (plStack_130 != (long *)0x0) {
        plVar7 = plStack_130 + 1;
        do {
          lVar17 = *plVar7;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar6) {
            *plVar7 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_130 + 0x10))(plStack_130);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_130);
        }
      }
      ppplStack_110 = (long ***)&ppplStack_128;
      FUN_10a26a1e8(&ppplStack_110);
      *param_1 = 0;
      pppplVar11 = pppplVar10 + 0x4b;
      ppplVar16 = pppplVar10[0x59];
      ppplVar14 = (long ***)((long)ppplVar16 + -1);
      pppplVar10[0x59] = ppplVar14;
      if (ppplVar14 < (long ***)0x8) {
        ppplVar16 = pppplVar11[(long)ppplVar16 + 2];
        if (pppplVar10[0x5a] == ppplVar16) {
          return;
        }
      }
      else {
        ppplVar16 = (long ***)pppplVar10[0x57][-1];
        pppplVar10[0x57] = pppplVar10[0x57] + -1;
        if (pppplVar10[0x5a] == ppplVar16) {
          return;
        }
      }
      ppplVar14 = *pppplVar11;
      ppplVar15 = pppplVar10[0x4c];
      lVar17 = (long)ppplVar15 - (long)ppplVar14;
      ppplVar22 = (long ***)(lVar17 >> 4);
      if (ppplVar22 < ppplVar16) {
        uVar24 = (long)ppplVar16 - (long)ppplVar22;
        ppplVar21 = pppplVar10[0x4d];
        if ((ulong)((long)ppplVar21 - (long)ppplVar15 >> 4) < uVar24) {
          if ((ulong)ppplVar16 >> 0x3c == 0) {
            ppplVar15 = (long ***)((long)ppplVar21 - (long)ppplVar14 >> 3);
            if (ppplVar15 <= ppplVar16) {
              ppplVar15 = ppplVar16;
            }
            if (0x7fffffffffffffef < (ulong)((long)ppplVar21 - (long)ppplVar14)) {
              ppplVar15 = (long ***)0xfffffffffffffff;
            }
            ppplStack_68 = (long ***)pppplVar11;
            if ((ulong)ppplVar15 >> 0x3c == 0) {
              lVar9 = (long)ppplVar15 << 4;
              __Znwm();
              lVar2 = lVar9 + lVar17;
              _bzero(lVar2,uVar24 * 0x10);
              ppplVar22 = (long ***)(lVar2 + (long)ppplVar22 * -0x10);
              _memcpy(ppplVar22,ppplVar14,lVar17);
              *pppplVar11 = ppplVar22;
              pppplVar10[0x4c] = (long ***)(lVar2 + uVar24 * 0x10);
              pppplVar10[0x4d] = (long ***)(lVar9 + (long)ppplVar15 * 0x10);
              pplStack_88 = (long **)ppplVar14;
              ppplStack_80 = ppplVar14;
              pplStack_78 = (long **)ppplVar14;
              pplStack_70 = (long **)ppplVar21;
              func_0x00010988c1b8(&pplStack_88);
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
        _bzero(ppplVar15,uVar24 * 0x10);
        pppplVar10[0x4c] = ppplVar15 + uVar24 * 2;
      }
      else if (ppplVar16 < ppplVar22) {
        while (ppplVar15 != ppplVar14 + (long)ppplVar16 * 2) {
          ppplVar15 = ppplVar15 + -2;
          func_0x00010988c204(ppplVar15);
        }
        pppplVar10[0x4c] = ppplVar14 + (long)ppplVar16 * 2;
      }
code_r0x00010988c138:
      pppplVar10[0x5a] = ppplVar16;
      return;
    }
    if ((long ****)ppplStack_110 != (long ****)0x0) {
      (*(code *)**ppplStack_110)();
    }
  }
  func_0x00010988bd28(&UNK_10f58253c);
LAB_10a7c8e0c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a7c8e10);
  (*pcVar8)();
}



/* Entry: 10a7c8f88; end: 10a7c8fab;  */

void FUN_10a7c8f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar3 = (long *)0x3;
  uVar7 = 0;
  FUN_10a052ee0(3,0,param_1);
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
  FUN_10a7c8238(plVar3,uVar7);
  FUN_10a7c908c(param_4);
  plVar6 = plVar3;
  func_0x000109898518(plVar3,param_1);
  FUN_10a79d688(plVar5,plVar6);
  FUN_10a07ff64(extraout_x8,plVar3,&stack0xffffffffffffffa8);
  plVar3 = plVar4 + 0x4b;
  lVar8 = plVar4[0x59];
  uVar9 = lVar8 - 1;
  plVar4[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar3[lVar8 + 2];
    if (plVar4[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar3;
  lVar13 = plVar4[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar4[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar3 = lVar12;
          plVar4[0x4c] = lVar13 + uVar16 * 0x10;
          plVar4[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_98 = lVar8;
          lStack_90 = lVar8;
          lStack_88 = lVar8;
          lStack_80 = lVar14;
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
    _bzero(lVar13,uVar16 * 0x10);
    plVar4[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar4[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar9;
  return;
}



/* Entry: 10a7c8fac; end: 10a7c908b;  */

void FUN_10a7c8fac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
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
  FUN_10a7c8238(param_2,param_3);
  FUN_10a7c908c(param_5);
  plVar5 = param_2;
  func_0x000109898518(param_2,param_4);
  FUN_10a79d688(plVar4,plVar5);
  FUN_10a07ff64(param_1,param_2,&stack0xffffffffffffffb8);
  plVar4 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar4[lVar6 + 2];
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
  lVar6 = *plVar4;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar4 = lVar10;
          plVar3[0x4c] = lVar11 + uVar14 * 0x10;
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
    _bzero(lVar11,uVar14 * 0x10);
    plVar3[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
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



/* Entry: 10a7c908c; end: 10a7c90af;  */

void FUN_10a7c908c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10a7c7b14(plVar3,uVar5);
  FUN_10a052e3c(param_4);
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



/* Entry: 10a7c90b0; end: 10a7c9157;  */

void FUN_10a7c90b0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10a7c7b14(param_2,param_3);
  FUN_10a052e3c(param_5);
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



/* Entry: 10a7c9158; end: 10a7c91cb;  */

void FUN_10a7c9158(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7c91cc);
  (*pcVar1)();
}



/* Entry: 10a7c91cc; end: 10a7c9213;  */

long * FUN_10a7c91cc(long *param_1)

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



/* Entry: 10a7c9214; end: 10a7c923b;  */

void FUN_10a7c9214(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10aae2930();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a7c923c; end: 10a7c9293;  */

long FUN_10a7c923c(long param_1)

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


