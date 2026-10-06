/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ace9054; end: 10ace9123;  */

void FUN_10ace9054(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  long *param_5)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  
  plVar1 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c6cde0);
  if ((int)plVar1 == 0) {
    (**(code **)(*param_5 + 0x1c8))(&uStack_44,param_5,&PTR_DAT_110c6d208);
    param_4[1] = uStack_3c;
    *param_4 = uStack_44;
    param_4[3] = uStack_2c;
    param_4[2] = uStack_34;
    *(undefined4 *)(param_4 + 4) = uStack_24;
    ppuVar2 = &PTR_DAT_110c6d228;
  }
  else {
    (**(code **)(*param_5 + 0x1c8))(&uStack_44,param_5,&PTR_DAT_110c6cde0);
    param_4[1] = uStack_3c;
    *param_4 = uStack_44;
    param_4[3] = uStack_2c;
    param_4[2] = uStack_34;
    *(undefined4 *)(param_4 + 4) = uStack_24;
    ppuVar2 = &PTR_DAT_110c6ce00;
  }
  uVar4 = (undefined4)uStack_34;
  uVar3 = (undefined4)uStack_44;
  (**(code **)(*param_5 + 0xe8))(param_5,ppuVar2);
  *(undefined4 *)((long)param_4 + 0x24) = uVar3;
  *(undefined4 *)(param_4 + 5) = uVar4;
  *(undefined4 *)((long)param_4 + 0x2c) = param_3;
  return;
}



/* Entry: 10ace9124; end: 10ace91bb;  */

undefined8 *
FUN_10ace9124(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7,long param_8)

{
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  *param_5 = *param_6;
  FUN_10acee6ac(param_5 + 1,param_6 + 1);
  func_0x00010a14d808(param_8);
  uStack_40 = *(undefined8 *)(param_8 + 0x24);
  uStack_38 = *(undefined4 *)(param_8 + 0x2c);
  uStack_58 = param_7;
  uStack_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  FUN_10ace91bc(param_5,&uStack_58,1);
  return param_5;
}



/* Entry: 10ace91bc; end: 10ace922f;  */

void FUN_10ace91bc(ulong *param_1,long param_2,ulong param_3)

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
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong *puStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar9 = *param_1;
  uVar16 = param_1[1];
  lVar12 = (param_3 - uVar9) * 0x28;
  uVar20 = param_3;
  if (uVar9 <= param_3) {
    uVar20 = uVar9;
  }
  if (uVar9 > param_3 || param_3 - uVar9 == 0) {
    lVar12 = 0;
  }
  FUN_10acf039c(uVar16,param_1 + 3,uVar9,lVar12 + param_2,uVar20);
  if ((uVar16 & 1) != 0) {
    return;
  }
  puVar19 = (undefined8 *)(lVar12 + param_2);
  uVar9 = *param_1;
  puVar6 = (undefined8 *)(uVar9 * 2);
  puVar8 = puVar19;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    puVar21 = (undefined8 *)0x0;
LAB_10aceff70:
    plVar13 = (long *)param_1[1];
    uVar16 = param_1[3];
    uVar10 = param_1[4];
    uVar17 = (uVar10 + uVar20) - uVar16;
    lVar12 = 0;
    if (uVar9 <= uVar17) {
      lVar12 = uVar17 - uVar9;
    }
    lVar14 = *plVar13;
    uVar17 = (plVar13[1] - lVar14 >> 3) * -0x3333333333333333;
    uVar9 = 0;
    if (uVar17 != 0) {
      uVar9 = uVar16 / uVar17;
    }
    uVar16 = uVar16 - uVar9 * uVar17;
    uVar9 = uVar16 + lVar12;
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
    puVar22 = (undefined8 *)(uVar4 - uVar9);
    puVar11 = puVar6;
    puVar23 = puVar6;
    if (0 < (long)puVar22) {
      lVar12 = (long)puVar21 - (long)puVar6 >> 3;
      uVar16 = lVar12 * -0x3333333333333333;
      if ((long)uVar16 < (long)puVar22) {
        if ((undefined8 *)0x666666666666666 < puVar22) goto LAB_10acf0310;
        puVar11 = (undefined8 *)(lVar12 * -0x6666666666666666);
        if (puVar11 < puVar22 || (long)puVar11 - (long)puVar22 == 0) {
          puVar11 = puVar22;
        }
        if (0x333333333333332 < uVar16) {
          puVar11 = (undefined8 *)0x666666666666666;
        }
        FUN_10acefec4();
        puVar21 = puVar11 + (long)puVar8 * 5;
        puVar23 = puVar11 + (long)puVar22 * 5;
        puVar22 = puVar11;
        do {
          uVar16 = 0;
          if (uVar17 <= uVar9) {
            uVar16 = uVar17;
          }
          uVar16 = uVar9 - uVar16;
          if (uVar17 < uVar16 || uVar17 - uVar16 == 0) goto LAB_10acf031c;
          puVar15 = (undefined8 *)(lVar14 + uVar16 * 0x28);
          uVar25 = puVar15[1];
          uVar24 = *puVar15;
          uVar27 = puVar15[3];
          uVar26 = puVar15[2];
          puVar22[4] = puVar15[4];
          puVar22[1] = uVar25;
          *puVar22 = uVar24;
          puVar22[3] = uVar27;
          puVar22[2] = uVar26;
          puVar22 = puVar22 + 5;
          uVar9 = uVar9 + 1;
        } while (puVar22 != puVar23);
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
          puVar22 = (undefined8 *)(lVar14 + uVar16 * 0x28);
          uVar25 = puVar22[1];
          uVar24 = *puVar22;
          uVar27 = puVar22[3];
          uVar26 = puVar22[2];
          puVar6[4] = puVar22[4];
          puVar6[1] = uVar25;
          *puVar6 = uVar24;
          puVar6[3] = uVar27;
          puVar6[2] = uVar26;
          puVar6 = puVar6 + 5;
          puVar23 = puVar23 + 5;
        }
      }
    }
    puVar6 = puVar11;
    if (0 < (long)uVar20) {
      if (((long)puVar21 - (long)puVar23 >> 3) * -0x3333333333333333 < (long)uVar20) {
        lVar12 = (long)puVar23 - (long)puVar11;
        uVar9 = uVar20 + (lVar12 >> 3) * -0x3333333333333333;
        if (0x666666666666666 < uVar9) {
          FUN_10acefeb0();
          goto LAB_10acf031c;
        }
        lVar14 = (long)puVar21 - (long)puVar11 >> 3;
        uVar16 = lVar14 * -0x6666666666666666;
        if (uVar16 < uVar9 || uVar16 - uVar9 == 0) {
          uVar16 = uVar9;
        }
        if (0x333333333333332 < (ulong)(lVar14 * -0x3333333333333333)) {
          uVar16 = 0x666666666666666;
        }
        if (uVar16 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          FUN_10acefec4();
        }
        puVar6 = (undefined8 *)(uVar16 + lVar12);
        puVar23 = puVar6 + uVar20 * 5;
        lVar14 = uVar20 * 0x28;
        puVar21 = puVar6;
        do {
          uVar25 = puVar19[1];
          uVar24 = *puVar19;
          uVar27 = puVar19[3];
          uVar26 = puVar19[2];
          puVar21[4] = puVar19[4];
          puVar21[1] = uVar25;
          *puVar21 = uVar24;
          puVar21[3] = uVar27;
          puVar21[2] = uVar26;
          puVar21 = puVar21 + 5;
          puVar19 = puVar19 + 5;
          lVar14 = lVar14 + -0x28;
        } while (lVar14 != 0);
        puVar21 = (undefined8 *)(uVar16 + (long)puVar8 * 0x28);
        puVar6 = (undefined8 *)((long)puVar6 - lVar12);
        _memcpy(puVar6,puVar11,lVar12);
        if (puVar11 != (undefined8 *)0x0) {
          __ZdlPv(puVar11);
        }
      }
      else {
        puVar8 = puVar19 + uVar20 * 5;
        do {
          uVar25 = puVar19[1];
          uVar24 = *puVar19;
          uVar27 = puVar19[3];
          uVar26 = puVar19[2];
          puVar23[4] = puVar19[4];
          puVar23[1] = uVar25;
          *puVar23 = uVar24;
          puVar23[3] = uVar27;
          puVar23[2] = uVar26;
          puVar19 = puVar19 + 5;
          puVar23 = puVar23 + 5;
        } while (puVar19 != puVar8);
      }
    }
    uVar20 = *param_1;
    puStack_88 = (ulong *)0x0;
    plStack_80 = (long *)0x0;
    lStack_70 = ((long)puVar23 - (long)puVar6 >> 3) * -0x3333333333333333;
    uStack_78 = 0;
    plVar7 = (undefined8 *)0x90;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110c6d410;
    puVar18 = (ulong *)(plVar7 + 3);
    *puVar18 = (ulong)puVar6;
    plVar7[4] = (long)puVar23;
    plVar7[5] = (long)puVar21;
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
    FUN_10acefd34(puVar18,uVar20 << 1);
    plVar13 = plStack_80;
    puStack_88 = puVar18;
    if (plStack_80 != (long *)0x0) {
      plVar1 = plStack_80 + 1;
      do {
        lVar12 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        lVar12 = *plStack_80;
        plStack_80 = plVar7;
        (**(code **)(lVar12 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        plVar7 = plStack_80;
      }
    }
    plStack_80 = plVar7;
    FUN_10a4f8a50(param_1 + 1,&puStack_88);
    FUN_10a4f8630(&puStack_88);
    return;
  }
  if (puVar6 < (undefined8 *)0x666666666666667) {
    FUN_10acefec4();
    puVar21 = puVar6 + (long)puVar8 * 5;
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



/* Entry: 10ace9230; end: 10ace9353;  */

void FUN_10ace9230(float *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 uStack_30;
  float fStack_28;
  
  lStack_78 = **(long **)(param_2 + 8);
  uStack_70 = ((*(long **)(param_2 + 8))[1] - lStack_78 >> 3) * -0x3333333333333333;
  uVar1 = 0;
  if (uStack_70 != 0) {
    uVar1 = *(ulong *)(param_2 + 0x18) / uStack_70;
  }
  uStack_50 = *(ulong *)(param_2 + 0x18) - uVar1 * uStack_70;
  uVar1 = 0;
  if (uStack_70 != 0) {
    uVar1 = *(ulong *)(param_2 + 0x20) / uStack_70;
  }
  uVar2 = *(ulong *)(param_2 + 0x20) - uVar1 * uStack_70;
  uVar1 = uStack_70;
  if (uStack_50 <= uVar2) {
    uVar1 = 0;
  }
  lStack_68 = uVar1 + uVar2;
  lStack_60 = lStack_78;
  uStack_58 = uStack_70;
  FUN_10ace9354(auStack_48,&lStack_60,&lStack_78,param_3);
  fVar4 = fStack_40 * fStack_3c + fStack_38 * fStack_34;
  *param_1 = (fStack_3c * fStack_3c + fStack_38 * fStack_38) * -2.0 + 1.0;
  param_1[1] = fVar4 + fVar4;
  fVar3 = fStack_40 * fStack_38 - fStack_3c * fStack_34;
  fVar4 = fStack_40 * fStack_3c - fStack_38 * fStack_34;
  param_1[2] = fVar3 + fVar3;
  param_1[3] = fVar4 + fVar4;
  fVar4 = fStack_3c * fStack_38 + fStack_40 * fStack_34;
  param_1[4] = (fStack_40 * fStack_40 + fStack_38 * fStack_38) * -2.0 + 1.0;
  param_1[5] = fVar4 + fVar4;
  fVar3 = fStack_40 * fStack_38 + fStack_3c * fStack_34;
  fVar4 = fStack_3c * fStack_38 - fStack_40 * fStack_34;
  param_1[6] = fVar3 + fVar3;
  param_1[7] = fVar4 + fVar4;
  param_1[8] = (fStack_40 * fStack_40 + fStack_3c * fStack_3c) * -2.0 + 1.0;
  *(undefined8 *)(param_1 + 9) = uStack_30;
  param_1[0xb] = fStack_28;
  return;
}



/* Entry: 10ace9354; end: 10ace966b;  */

void FUN_10ace9354(long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined1 (*pauVar1) [12];
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  undefined8 uVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  
  uVar8 = param_2[2];
  uVar12 = param_3[2] - uVar8;
  if (uVar12 == 0) {
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = -1;
    param_1[2] = 0x3f80000000000000;
    param_1[1] = 0;
    return;
  }
  uVar13 = param_3[1];
  uVar11 = param_3[2] - 1;
  uVar9 = 0;
  if (uVar13 <= uVar11) {
    uVar9 = uVar13;
  }
  uVar11 = uVar11 - uVar9;
  if (uVar13 <= uVar11) goto LAB_10ace9668;
  plVar15 = (long *)(*param_3 + uVar11 * 0x28);
  uVar11 = param_4 - *plVar15;
  uVar9 = -uVar11;
  if (-1 < (long)uVar11) {
    uVar9 = uVar11;
  }
  if (uVar9 < 0xdf8475801) {
    lVar10 = *param_2;
    uVar14 = param_2[1];
    uVar11 = uVar8;
    uVar13 = uVar8;
    uVar9 = uVar12;
    do {
      uVar2 = uVar13 + (uVar9 >> 1);
      uVar4 = 0;
      if (uVar14 <= uVar2) {
        uVar4 = uVar14;
      }
      if (uVar14 <= uVar2 - uVar4) goto LAB_10ace9668;
      uVar3 = uVar9 + ~(uVar9 >> 1);
      uVar9 = uVar9 >> 1;
      if (*(long *)(lVar10 + (uVar2 - uVar4) * 0x28) <= param_4) {
        uVar11 = uVar2 + 1;
        uVar13 = uVar2 + 1;
        uVar9 = uVar3;
      }
    } while (uVar9 != 0);
    iVar16 = (int)(uVar11 - uVar8);
    if (iVar16 != 0) {
      if (iVar16 < (int)uVar12) {
        uVar12 = uVar8 + ((long)((uVar11 - uVar8 << 0x20) + -0x100000000) >> 0x20);
        uVar9 = 0;
        if (uVar14 <= uVar12) {
          uVar9 = uVar14;
        }
        uVar12 = uVar12 - uVar9;
        if (uVar12 < uVar14) {
          uVar9 = 0;
          if (uVar14 <= uVar8 + (long)iVar16) {
            uVar9 = uVar14;
          }
          uVar9 = (uVar8 + (long)iVar16) - uVar9;
          if (uVar9 < uVar14) {
            plVar15 = (long *)(lVar10 + uVar12 * 0x28);
            plVar17 = (long *)(lVar10 + uVar9 * 0x28);
            fVar35 = (float)((double)(param_4 - *plVar15) / (double)(*plVar17 - *plVar15));
            pauVar1 = (undefined1 (*) [12])(plVar17 + 1);
            fVar25 = (float)plVar17[2];
            fVar26 = (float)((ulong)plVar17[2] >> 0x20);
            fVar21 = (float)*(undefined8 *)*pauVar1;
            fVar24 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
            fVar27 = (float)plVar15[1];
            fVar18 = fVar21 * fVar27;
            fVar32 = (float)((ulong)plVar15[1] >> 0x20);
            fVar20 = fVar24 * fVar32;
            fVar33 = (float)plVar15[2];
            fVar19 = fVar25 * fVar33;
            fVar34 = (float)((ulong)plVar15[2] >> 0x20);
            auVar5._4_4_ = fVar20;
            auVar5._0_4_ = fVar18;
            auVar5._8_4_ = fVar19;
            auVar5._12_4_ = fVar26 * fVar34;
            auVar6._4_4_ = fVar20;
            auVar6._0_4_ = fVar18;
            auVar6._8_4_ = fVar19;
            auVar6._12_4_ = fVar26 * fVar34;
            auVar30 = NEON_ext(auVar5,auVar6,8,1);
            uVar31 = NEON_rev64(auVar30._0_8_,4);
            fVar18 = fVar18 + (float)uVar31 + fVar20 + (float)((ulong)uVar31 >> 0x20);
            auVar22._0_4_ = -(uint)(fVar18 < 0.0);
            auVar22._4_4_ = auVar22._0_4_;
            auVar22._8_4_ = auVar22._0_4_;
            auVar22._12_4_ = auVar22._0_4_;
            auVar28._0_4_ = -fVar21;
            auVar28._4_4_ = -fVar24;
            auVar28._8_4_ = -fVar25;
            auVar28._12_4_ = -fVar26;
            auVar30._12_4_ = fVar26;
            auVar30._0_12_ = *pauVar1;
            auVar23._12_4_ = fVar26;
            auVar23._0_12_ = *pauVar1;
            auVar23 = auVar23 ^ (auVar30 ^ auVar28) & auVar22;
            fVar26 = -fVar18;
            if (0.0 <= fVar18) {
              fVar26 = fVar18;
            }
            if (fVar26 <= 0.9999999) {
              _acosf();
              fVar18 = (1.0 - fVar35) * fVar26;
              _sinf();
              fVar20 = fVar26 * fVar35;
              _sinf();
              _sinf();
              fVar21 = (fVar27 * fVar18 + auVar23._0_4_ * fVar20) / fVar26;
              fVar24 = (fVar32 * fVar18 + auVar23._4_4_ * fVar20) / fVar26;
              fVar25 = (fVar33 * fVar18 + auVar23._8_4_ * fVar20) / fVar26;
              fVar26 = (fVar34 * fVar18 + auVar23._12_4_ * fVar20) / fVar26;
            }
            else {
              fVar26 = 1.0 - fVar35;
              fVar21 = auVar23._0_4_ * fVar35 + fVar27 * fVar26;
              fVar24 = auVar23._4_4_ * fVar35 + fVar32 * fVar26;
              fVar25 = auVar23._8_4_ * fVar35 + fVar33 * fVar26;
              fVar26 = auVar23._12_4_ * fVar35 + fVar34 * fVar26;
            }
            fVar19 = 1.0 - fVar35;
            fVar18 = (float)plVar15[3] * fVar19 + (float)plVar17[3] * fVar35;
            fVar20 = (float)((ulong)plVar15[3] >> 0x20) * fVar19 +
                     (float)((ulong)plVar17[3] >> 0x20) * fVar35;
            fVar19 = fVar19 * *(float *)(plVar15 + 4) + *(float *)(plVar17 + 4) * fVar35;
            goto LAB_10ace954c;
          }
        }
        goto LAB_10ace9668;
      }
      fVar21 = *(float *)(plVar15 + 1);
      fVar24 = *(float *)((long)plVar15 + 0xc);
      fVar25 = *(float *)(plVar15 + 2);
      fVar26 = *(float *)((long)plVar15 + 0x14);
      fVar18 = (float)plVar15[3];
      fVar20 = (float)((ulong)plVar15[3] >> 0x20);
      fVar19 = *(float *)(plVar15 + 4);
      goto LAB_10ace954c;
    }
  }
  else {
    uVar14 = param_2[1];
  }
  uVar12 = 0;
  if (uVar14 <= uVar8) {
    uVar12 = uVar14;
  }
  if (uVar14 <= uVar8 - uVar12) {
LAB_10ace9668:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10ace966c);
    (*pcVar7)();
  }
  lVar10 = *param_2 + (uVar8 - uVar12) * 0x28;
  fVar21 = *(float *)(lVar10 + 8);
  fVar24 = *(float *)(lVar10 + 0xc);
  fVar25 = *(float *)(lVar10 + 0x10);
  fVar26 = *(float *)(lVar10 + 0x14);
  fVar18 = (float)*(undefined8 *)(lVar10 + 0x18);
  fVar20 = (float)((ulong)*(undefined8 *)(lVar10 + 0x18) >> 0x20);
  fVar19 = *(float *)(lVar10 + 0x20);
LAB_10ace954c:
  auVar29._0_8_ = CONCAT44(fVar24 * fVar24,fVar21 * fVar21);
  auVar29._8_4_ = fVar25 * fVar25;
  auVar29._12_4_ = fVar26 * fVar26;
  uVar31 = NEON_rev64(auVar29._0_8_,4);
  auVar30 = NEON_ext(auVar29,auVar29,8,1);
  fVar27 = (float)uVar31 + auVar30._0_4_ + (float)((ulong)uVar31 >> 0x20) + auVar30._4_4_;
  if (fVar27 == 0.0) {
    fVar26 = 1.0;
    fVar21 = 0.0;
    fVar24 = 0.0;
    fVar25 = 0.0;
  }
  else {
    fVar27 = 1.0 / SQRT(fVar27);
    fVar21 = fVar21 * fVar27;
    fVar24 = fVar24 * fVar27;
    fVar25 = fVar25 * fVar27;
    fVar26 = fVar26 * fVar27;
  }
  *param_1 = param_4;
  *(float *)(param_1 + 1) = fVar21;
  *(float *)((long)param_1 + 0xc) = fVar24;
  *(float *)(param_1 + 2) = fVar25;
  *(float *)((long)param_1 + 0x14) = fVar26;
  param_1[3] = CONCAT44(fVar20,fVar18);
  *(float *)(param_1 + 4) = fVar19;
  return;
}



/* Entry: 10ace966c; end: 10ace96a3;  */

long FUN_10ace966c(long param_1)

{
  FUN_10ace96a4();
  FUN_10acf0520(param_1 + 0x20);
  FUN_10a4f8b7c(param_1 + 8);
  return param_1;
}



/* Entry: 10ace96a4; end: 10ace9757;  */

void FUN_10ace96a4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x20))();
    lVar5 = *(long *)(param_1 + 0x20);
    plVar2 = *(long **)(param_1 + 0x28);
    *(long *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    __ZNSt3__115recursive_mutex4lockEv(lVar5);
    *(undefined1 *)(lVar5 + 0x40) = 1;
    __ZNSt3__115recursive_mutex6unlockEv(lVar5);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  return;
}



/* Entry: 10ace9758; end: 10ace9bb3;  */

void FUN_10ace9758(long *param_1,undefined *param_2,undefined *param_3,undefined4 *param_4,
                  undefined *param_5,long *param_6)

{
  undefined **ppuVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long *plVar13;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = (undefined **)0x90;
  __Znwm();
  puVar8 = (undefined *)*param_6;
  ppuVar11 = ppuVar6 + 0xc;
  ppuVar6[0xd] = (undefined *)param_6[1];
  *ppuVar11 = puVar8;
  *ppuVar6 = FUN_10acf16a4;
  ppuVar6[1] = FUN_10acf186c;
  ppuVar6[0xf] = param_2;
  ppuVar6[0x10] = param_5;
  ppuVar6[0xe] = param_3;
  *param_6 = 0;
  param_6[1] = 0;
  func_0x0001092ba17c(ppuVar6 + 2);
  puVar8 = ppuVar6[7];
  if (puVar8 != (undefined *)0x0) {
    plVar13 = (long *)(puVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = (long)puVar8;
  puVar8 = ppuVar6[0xe];
  ppuVar6[10] = (undefined *)0x0;
  ppuVar6[0xb] = (undefined *)0x0;
  ppuVar6[9] = (undefined *)0x0;
  uStack_98 = (code *)((ulong)uStack_98._4_4_ << 0x20);
  FUN_10a26ebc0(ppuVar6 + 9,0,&uStack_98,(long)&uStack_98 + 4,1);
  pcStack_d8 = FUN_10acee828;
  ppuStack_d0 = &PTR_FUN_110c6d248;
  uStack_98 = FUN_10acee828;
  ppuStack_90 = &PTR_FUN_110c6d248;
  puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,uStack_c8);
  puStack_e8 = ppuVar6[10];
  puStack_f0 = ppuVar6[9];
  puStack_e0 = ppuVar6[0xb];
  ppuVar6[10] = (undefined *)0x0;
  ppuVar6[0xb] = (undefined *)0x0;
  ppuVar6[9] = (undefined *)0x0;
  puVar8 = puVar8 + 0x18;
  func_0x0001098aeecc(puVar8,&uStack_98,&UNK_110bef678,&puStack_f0);
  if (puStack_f0 != (undefined *)0x0) {
    puStack_e8 = puStack_f0;
    __ZdlPv();
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  if (ppuVar6[9] != (undefined *)0x0) {
    ppuVar6[10] = ppuVar6[9];
    __ZdlPv();
  }
  *param_4 = (int)puVar8;
  ppuVar6[9] = *ppuVar11;
  plVar13 = (long *)(*ppuVar11 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = *plVar13 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(ppuVar6[9] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(ppuVar6 + 0x11) = 0;
    puVar12 = ppuVar6[9];
    plVar13 = (long *)(puVar12 + 0x10);
    puVar8 = ppuVar6[3];
    do {
      lVar10 = *plVar13;
      if (lVar10 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          uStack_98 = (code *)0x0;
          ppuVar7 = (undefined **)(puVar12 + 0x18);
          ppuStack_90 = ppuVar6;
          puStack_88 = puVar8;
          func_0x000109d1b588(ppuVar7,&uStack_98);
          *(undefined8 *)(puVar12 + 0x10) = 0;
          goto LAB_10ace9a78;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar10 >> 1 & 1) == 0);
  }
  ppuVar7 = (undefined **)ppuVar6[9];
  if (((uint)*(undefined8 *)(ppuVar6[9] + 0x10) >> 5 & 1) == 0) {
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar1 = ppuVar7 + 1;
      do {
        puVar8 = *ppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar4) {
          *ppuVar1 = puVar8 + -4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((ulong)puVar8 & 0x1fffffffc) == 4) {
        do {
          puVar8 = *ppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar4) {
            *ppuVar1 = puVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar8 + -1 == (undefined *)0x0) {
          (**(code **)(*ppuVar7 + 8))();
        }
      }
    }
    FUN_10ace96a4(ppuVar6[0xf]);
    ppuVar6[0xf][0x18] = (char)ppuVar6[0x10];
    FUN_10ace9bb4();
    func_0x0001092ba100(ppuVar6 + 2);
    func_0x000109d1a1d0(ppuVar6 + 2);
    plVar13 = (long *)ppuVar6[0xd];
    if (plVar13 != (long *)0x0) {
      puVar2 = (ulong *)(plVar13 + 1);
      do {
        uVar9 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        do {
          uVar9 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar13 + 8))(plVar13);
        }
      }
    }
    plVar13 = (long *)*ppuVar11;
    if (plVar13 != (long *)0x0) {
      puVar2 = (ulong *)(plVar13 + 1);
      do {
        uVar9 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar9 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar9 & 0x1fffffffc) == 4) {
        do {
          uVar9 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar9 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar9 - 1 == 0) {
          (**(code **)(*plVar13 + 8))();
        }
      }
    }
    __ZdlPv(ppuVar6);
    ppuVar7 = ppuVar6;
LAB_10ace9a78:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(ppuVar7 + 0x12);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ace9abc);
  (*pcVar5)();
}



/* Entry: 10ace9bb4; end: 10ace9d47;  */

void FUN_10ace9bb4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  long *plVar9;
  undefined **ppuVar10;
  code **ppcVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  ulong uStack_200;
  undefined4 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined1 uStack_1cc;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined2 uStack_1a2;
  undefined5 uStack_1a0;
  undefined3 uStack_19b;
  undefined4 uStack_198;
  byte bStack_194;
  ulong uStack_190;
  undefined4 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined4 uStack_160;
  undefined1 uStack_15c;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined ***pppuStack_128;
  long lStack_f8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0x60;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c6d460;
  puVar7 = puVar6 + 3;
  puVar6[4] = 0;
  *puVar7 = 0;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[10] = 0;
  puVar6[9] = 0;
  puVar6[0xb] = 0;
  __ZNSt3__115recursive_mutexC1Ev();
  *(undefined1 *)(puVar6 + 0xb) = 0;
  plVar15 = *(long **)(param_1 + 0x28);
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  *(undefined8 **)(param_1 + 0x28) = puVar6;
  if (plVar15 == (long *)0x0) {
    plVar15 = *(long **)(param_1 + 8);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
LAB_10ace9c84:
    plVar9 = puVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar9 = plVar15 + 1;
    do {
      lVar14 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
    plVar15 = *(long **)(param_1 + 8);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    puVar6 = *(undefined8 **)(param_1 + 0x28);
    if (puVar6 != (undefined8 *)0x0) goto LAB_10ace9c84;
  }
  pcStack_78 = FUN_10acf05b4;
  ppuStack_70 = &PTR_DAT_110c6d4b8;
  uStack_88 = 0;
  uStack_80 = 0;
  lVar14 = param_1 + 0x18;
  ppcVar11 = &pcStack_78;
  lStack_68 = param_1;
  puStack_58 = puVar6;
  (**(code **)(*plVar15 + 0x18))();
  pppuVar8 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  FUN_10acf0520(&uStack_88);
  __Unwind_Resume();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_158 = lVar14;
  if (*(int *)pppuVar8[3] == 1) {
    if (((*(char *)((long)pppuVar8 + 1) == '\x01') &&
        ((*(char *)pppuVar8 != '\0' && *(char *)pppuVar8 != *(char *)((long)param_4 + 0x27)) &&
         *(char *)((long)param_4 + 0x27) != '\0')) && (pppuVar8[1] != (undefined **)0x0)) {
      (**(code **)(*pppuVar8[1] + 0x20))();
    }
    *(ushort *)pppuVar8 = *(byte *)((long)param_4 + 0x27) | 0x100;
    if (*(char *)((long)param_4 + 0x27) == '\0') {
      bVar1 = *(byte *)((long)param_4 + 0x34);
      uStack_188 = (int)param_4[6];
      if (bVar1 == 0) {
        uStack_188 = 0x40000000;
      }
      uStack_190 = (param_4[5] ^ 0x3f80000000000000U) &
                   CONCAT44(-(uint)((int)((uint)bVar1 << 0x1f) < 0),
                            -(uint)((int)((uint)bVar1 << 0x1f) < 0)) ^ 0x3f80000000000000;
      lStack_178 = 0;
      uStack_170 = 0;
      lStack_180 = 0;
      FUN_10a051a50(&lStack_180,*param_4,param_4[1],
                    (param_4[1] - *param_4 >> 2) * -0x5555555555555555);
      lStack_168 = param_4[3];
      uStack_160 = (undefined4)param_4[4];
      uStack_15c = *(undefined1 *)((long)param_4 + 0x25);
      plVar15 = &lStack_158;
      func_0x0001098ac018(plVar15,&UNK_10e4c8fed,0x22,&uStack_190,0,1);
      *(int *)ppcVar11 = (int)plVar15;
      if (lStack_180 != 0) {
        lStack_178 = lStack_180;
LAB_10acea1ec:
        __ZdlPv();
      }
    }
    else {
      sVar2 = (ushort)*(byte *)(param_4 + 4) * 0x100;
      if (*(char *)((long)param_4 + 0x27) == '\x02') {
        sVar2 = sVar2 + 1;
      }
      uStack_138 = (code *)CONCAT62(uStack_138._2_6_,sVar2);
      plVar15 = &lStack_158;
      func_0x0001098ac018(plVar15,&UNK_10e50d082,0x26,&uStack_138,0,1);
      if (*(char *)((long)param_4 + 0x27) == '\x01') {
        *(int *)ppcVar11 = (int)plVar15;
      }
      else {
        uStack_138 = (code *)&UNK_10f6a2191;
        ppuStack_130 = (undefined **)0x51;
        if (*(char *)((long)param_4 + 0x27) != '\x02') goto LAB_10acea22c;
        lStack_1c8 = 0;
        lStack_1c0 = 0;
        uStack_1b8 = 0;
        FUN_10a051a50(&lStack_1c8,*param_4,param_4[1],
                      (param_4[1] - *param_4 >> 2) * -0x5555555555555555);
        uStack_1a4 = (undefined1)((ulong)param_4[4] >> 0x20);
        uVar17 = *(undefined8 *)((long)param_4 + 0x2d);
        uVar21 = *(undefined8 *)((long)param_4 + 0x25);
        uStack_19b = (undefined3)uVar17;
        uStack_198 = (undefined4)((ulong)uVar17 >> 0x18);
        bStack_194 = (byte)((ulong)uVar17 >> 0x38);
        uStack_1a3 = (undefined1)uVar21;
        uStack_1a2 = (undefined2)((ulong)uVar21 >> 8);
        uStack_1a0 = (undefined5)((ulong)uVar21 >> 0x18);
        if (((ulong)pppuVar8[4] & 1) == 0) {
          uVar12 = (undefined1)param_4[3];
          uStack_138._0_7_ =
               CONCAT43(*(undefined4 *)((long)param_4 + 0x1c),
                        (int3)*(undefined4 *)((long)param_4 + 0x19));
          uVar13 = (undefined1)param_4[4];
        }
        else {
          uVar12 = 0;
          uVar13 = 0;
        }
        uStack_1b0._0_5_ = CONCAT41((undefined4)uStack_138,uVar12);
        uStack_1b0 = CONCAT44(uStack_138._3_4_,(undefined4)uStack_1b0);
        uStack_1a8 = CONCAT31((int3)((ulong)param_4[4] >> 8),uVar13);
        uStack_1f8 = uStack_198;
        if (bStack_194 == 0) {
          uStack_1f8 = 0x40000000;
        }
        uStack_200 = (CONCAT35(uStack_19b,uStack_1a0) ^ 0x3f80000000000000) &
                     CONCAT44(-(uint)((int)((uint)bStack_194 << 0x1f) < 0),
                              -(uint)((int)((uint)bStack_194 << 0x1f) < 0)) ^ 0x3f80000000000000;
        lStack_1e8 = 0;
        uStack_1e0 = 0;
        lStack_1f0 = 0;
        FUN_10a051a50(&lStack_1f0,lStack_1c8,lStack_1c0,
                      (lStack_1c0 - lStack_1c8 >> 2) * -0x5555555555555555);
        uStack_1d8 = uStack_1b0;
        uStack_1d0 = uStack_1a8;
        uStack_1cc = uStack_1a3;
        plVar9 = &lStack_158;
        func_0x0001098ac018(plVar9,&UNK_10e4c8fed,0x22,&uStack_200,0,1);
        if (lStack_1f0 != 0) {
          lStack_1e8 = lStack_1f0;
          __ZdlPv();
        }
        uStack_138 = (code *)(CONCAT44(-(uint)((int)((uint)*(byte *)(param_4 + 4) << 0x1f) < 0),
                                       -(uint)((int)((uint)*(byte *)(param_4 + 4) << 0x1f) < 0)) &
                             param_4[3]);
        *(char *)((long)pppuVar8 + 0x21) = '\x01';
        ppuVar10 = pppuVar8[1];
        if (ppuVar10 == (undefined **)0x0) {
          if (((ulong)pppuVar8[4] & 1) != 0) goto LAB_10acea0d8;
        }
        else {
          (**(code **)(*ppuVar10 + 0x30))(ppuVar10,&uStack_138);
          *(char *)(pppuVar8 + 4) = (char)ppuVar10;
          if (((ulong)ppuVar10 & 1) != 0) {
LAB_10acea0d8:
            puVar6 = (undefined8 *)*param_4;
            if (puVar6 != (undefined8 *)param_4[1]) {
              fVar20 = *(float *)(puVar6 + 1);
              fVar16 = fVar20 - *(float *)((long)pppuVar8 + 0x6c);
              uVar21 = *puVar6;
              fVar18 = (float)uVar21 - (float)*(undefined8 *)((long)pppuVar8 + 100);
              fVar19 = (float)((ulong)uVar21 >> 0x20) -
                       (float)((ulong)*(undefined8 *)((long)pppuVar8 + 100) >> 0x20);
              if (1.0 < SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar16 * fVar16)) {
                if (pppuVar8[1] != (undefined **)0x0) {
                  (**(code **)(*pppuVar8[1] + 0x20))();
                }
                *(char *)(pppuVar8 + 4) = '\0';
                *(undefined8 *)((long)pppuVar8 + 100) = uVar21;
                *(float *)((long)pppuVar8 + 0x6c) = fVar20;
              }
            }
          }
        }
        uStack_138._2_6_ = (uint6)((ulong)uStack_138 >> 0x10) & 0xffffffffff00;
        uStack_138 = (code *)CONCAT62(uStack_138._2_6_,1);
        func_0x0001098ac018(&lStack_158,&UNK_10e4c911b,0x23,&uStack_138,0,1);
        lStack_150 = 0;
        lStack_148 = 0;
        uStack_140 = 0;
        uStack_138 = (code *)CONCAT44((int)plVar15,(int)plVar9);
        FUN_10a26ebc0(&lStack_150,0,&uStack_138,&ppuStack_130,2);
        uStack_138 = FUN_10aceec24;
        ppuStack_130 = &PTR_FUN_110c6d278;
        lVar14 = lVar14 + 0x18;
        pppuStack_128 = pppuVar8;
        FUN_10a4f520c(lVar14,&uStack_138,&lStack_150);
        (*(code *)*ppuStack_130)(&ppuStack_130);
        if (lStack_150 != 0) {
          lStack_148 = lStack_150;
          __ZdlPv();
        }
        *(int *)ppcVar11 = (int)lVar14;
        if (lStack_1c8 != 0) {
          lStack_1c0 = lStack_1c8;
          goto LAB_10acea1ec;
        }
      }
    }
  }
  else {
    lStack_1c8 = 0;
    lStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_138 = FUN_10aceebc8;
    ppuStack_130 = &PTR_FUN_110c6d260;
    lVar14 = lVar14 + 0x18;
    FUN_10a4f520c(lVar14,&uStack_138,&lStack_1c8);
    (*(code *)*ppuStack_130)(&ppuStack_130);
    if (lStack_1c8 != 0) {
      lStack_1c0 = lStack_1c8;
      __ZdlPv();
    }
    *(int *)ppcVar11 = (int)lVar14;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
LAB_10acea22c:
  FUN_10a0edfc4(&uStack_138);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10acea238);
  (*pcVar5)();
}



/* Entry: 10ace9d48; end: 10acea2cf;  */

void FUN_10ace9d48(ushort *param_1,long param_2,undefined4 *param_3,long *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  short sVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulong uStack_170;
  undefined4 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined1 uStack_13c;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined2 uStack_112;
  undefined5 uStack_110;
  undefined3 uStack_10b;
  undefined4 uStack_108;
  byte bStack_104;
  ulong uStack_100;
  undefined4 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  ushort *puStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c8 = param_2;
  if (**(int **)(param_1 + 0xc) == 1) {
    if (((*(char *)((long)param_1 + 1) == '\x01') &&
        (((char)*param_1 != '\0' && (char)*param_1 != *(char *)((long)param_4 + 0x27)) &&
         *(char *)((long)param_4 + 0x27) != '\0')) && (*(long **)(param_1 + 4) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 4) + 0x20))();
    }
    *param_1 = *(byte *)((long)param_4 + 0x27) | 0x100;
    if (*(char *)((long)param_4 + 0x27) == '\0') {
      bVar2 = *(byte *)((long)param_4 + 0x34);
      uStack_f8 = (int)param_4[6];
      if (bVar2 == 0) {
        uStack_f8 = 0x40000000;
      }
      uStack_100 = (param_4[5] ^ 0x3f80000000000000U) &
                   CONCAT44(-(uint)((int)((uint)bVar2 << 0x1f) < 0),
                            -(uint)((int)((uint)bVar2 << 0x1f) < 0)) ^ 0x3f80000000000000;
      lStack_e8 = 0;
      uStack_e0 = 0;
      lStack_f0 = 0;
      FUN_10a051a50(&lStack_f0,*param_4,param_4[1],
                    (param_4[1] - *param_4 >> 2) * -0x5555555555555555);
      lStack_d8 = param_4[3];
      uStack_d0 = (undefined4)param_4[4];
      uStack_cc = *(undefined1 *)((long)param_4 + 0x25);
      plVar5 = &lStack_c8;
      func_0x0001098ac018(plVar5,&UNK_10e4c8fed,0x22,&uStack_100,0,1);
      *param_3 = (int)plVar5;
      if (lStack_f0 != 0) {
        lStack_e8 = lStack_f0;
LAB_10acea1ec:
        __ZdlPv();
      }
    }
    else {
      sVar3 = (ushort)*(byte *)(param_4 + 4) * 0x100;
      if (*(char *)((long)param_4 + 0x27) == '\x02') {
        sVar3 = sVar3 + 1;
      }
      uStack_a8 = (code *)CONCAT62(uStack_a8._2_6_,sVar3);
      plVar5 = &lStack_c8;
      func_0x0001098ac018(plVar5,&UNK_10e50d082,0x26,&uStack_a8,0,1);
      if (*(char *)((long)param_4 + 0x27) == '\x01') {
        *param_3 = (int)plVar5;
      }
      else {
        uStack_a8 = (code *)&UNK_10f6a2191;
        ppuStack_a0 = (undefined **)0x51;
        if (*(char *)((long)param_4 + 0x27) != '\x02') goto LAB_10acea22c;
        lStack_138 = 0;
        lStack_130 = 0;
        uStack_128 = 0;
        FUN_10a051a50(&lStack_138,*param_4,param_4[1],
                      (param_4[1] - *param_4 >> 2) * -0x5555555555555555);
        uStack_114 = (undefined1)((ulong)param_4[4] >> 0x20);
        uVar11 = *(undefined8 *)((long)param_4 + 0x2d);
        uVar15 = *(undefined8 *)((long)param_4 + 0x25);
        uStack_10b = (undefined3)uVar11;
        uStack_108 = (undefined4)((ulong)uVar11 >> 0x18);
        bStack_104 = (byte)((ulong)uVar11 >> 0x38);
        uStack_113 = (undefined1)uVar15;
        uStack_112 = (undefined2)((ulong)uVar15 >> 8);
        uStack_110 = (undefined5)((ulong)uVar15 >> 0x18);
        if ((param_1[0x10] & 1) == 0) {
          uVar8 = (undefined1)param_4[3];
          uStack_a8._0_7_ =
               CONCAT43(*(undefined4 *)((long)param_4 + 0x1c),
                        (int3)*(undefined4 *)((long)param_4 + 0x19));
          uVar9 = (undefined1)param_4[4];
        }
        else {
          uVar8 = 0;
          uVar9 = 0;
        }
        uStack_120._0_5_ = CONCAT41((undefined4)uStack_a8,uVar8);
        uStack_120 = CONCAT44(uStack_a8._3_4_,(undefined4)uStack_120);
        uStack_118 = CONCAT31((int3)((ulong)param_4[4] >> 8),uVar9);
        uStack_168 = uStack_108;
        if (bStack_104 == 0) {
          uStack_168 = 0x40000000;
        }
        uStack_170 = (CONCAT35(uStack_10b,uStack_110) ^ 0x3f80000000000000) &
                     CONCAT44(-(uint)((int)((uint)bStack_104 << 0x1f) < 0),
                              -(uint)((int)((uint)bStack_104 << 0x1f) < 0)) ^ 0x3f80000000000000;
        lStack_158 = 0;
        uStack_150 = 0;
        lStack_160 = 0;
        FUN_10a051a50(&lStack_160,lStack_138,lStack_130,
                      (lStack_130 - lStack_138 >> 2) * -0x5555555555555555);
        uStack_148 = uStack_120;
        uStack_140 = uStack_118;
        uStack_13c = uStack_113;
        plVar6 = &lStack_c8;
        func_0x0001098ac018(plVar6,&UNK_10e4c8fed,0x22,&uStack_170,0,1);
        if (lStack_160 != 0) {
          lStack_158 = lStack_160;
          __ZdlPv();
        }
        uStack_a8 = (code *)(CONCAT44(-(uint)((int)((uint)*(byte *)(param_4 + 4) << 0x1f) < 0),
                                      -(uint)((int)((uint)*(byte *)(param_4 + 4) << 0x1f) < 0)) &
                            param_4[3]);
        *(char *)((long)param_1 + 0x21) = '\x01';
        plVar7 = *(long **)(param_1 + 4);
        if (plVar7 == (long *)0x0) {
          if ((param_1[0x10] & 1) != 0) goto LAB_10acea0d8;
        }
        else {
          (**(code **)(*plVar7 + 0x30))(plVar7,&uStack_a8);
          *(char *)(param_1 + 0x10) = (char)plVar7;
          if (((ulong)plVar7 & 1) != 0) {
LAB_10acea0d8:
            puVar1 = (undefined8 *)*param_4;
            if (puVar1 != (undefined8 *)param_4[1]) {
              fVar14 = *(float *)(puVar1 + 1);
              fVar10 = fVar14 - *(float *)(param_1 + 0x36);
              uVar15 = *puVar1;
              fVar12 = (float)uVar15 - (float)*(undefined8 *)(param_1 + 0x32);
              fVar13 = (float)((ulong)uVar15 >> 0x20) -
                       (float)((ulong)*(undefined8 *)(param_1 + 0x32) >> 0x20);
              if (1.0 < SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar10 * fVar10)) {
                if (*(long **)(param_1 + 4) != (long *)0x0) {
                  (**(code **)(**(long **)(param_1 + 4) + 0x20))();
                }
                *(char *)(param_1 + 0x10) = '\0';
                *(undefined8 *)(param_1 + 0x32) = uVar15;
                *(float *)(param_1 + 0x36) = fVar14;
              }
            }
          }
        }
        uStack_a8._2_6_ = (uint6)((ulong)uStack_a8 >> 0x10) & 0xffffffffff00;
        uStack_a8 = (code *)CONCAT62(uStack_a8._2_6_,1);
        func_0x0001098ac018(&lStack_c8,&UNK_10e4c911b,0x23,&uStack_a8,0,1);
        lStack_c0 = 0;
        lStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = (code *)CONCAT44((int)plVar5,(int)plVar6);
        FUN_10a26ebc0(&lStack_c0,0,&uStack_a8,&ppuStack_a0,2);
        uStack_a8 = FUN_10aceec24;
        ppuStack_a0 = &PTR_FUN_110c6d278;
        param_2 = param_2 + 0x18;
        puStack_98 = param_1;
        FUN_10a4f520c(param_2,&uStack_a8,&lStack_c0);
        (*(code *)*ppuStack_a0)(&ppuStack_a0);
        if (lStack_c0 != 0) {
          lStack_b8 = lStack_c0;
          __ZdlPv();
        }
        *param_3 = (int)param_2;
        if (lStack_138 != 0) {
          lStack_130 = lStack_138;
          goto LAB_10acea1ec;
        }
      }
    }
  }
  else {
    lStack_138 = 0;
    lStack_130 = 0;
    uStack_128 = 0;
    uStack_a8 = FUN_10aceebc8;
    ppuStack_a0 = &PTR_FUN_110c6d260;
    param_2 = param_2 + 0x18;
    FUN_10a4f520c(param_2,&uStack_a8,&lStack_138);
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    if (lStack_138 != 0) {
      lStack_130 = lStack_138;
      __ZdlPv();
    }
    *param_3 = (int)param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_10acea22c:
  FUN_10a0edfc4(&uStack_a8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10acea238);
  (*pcVar4)();
}



/* Entry: 10acea2d0; end: 10acea52f;  */

void FUN_10acea2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long *param_5)

{
  long *plVar1;
  
  func_0x00010acea3a4(param_5,&PTR_DAT_110c6d290,param_4);
  plVar1 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c6d2b0);
  if ((int)plVar1 != 0) {
    *(undefined8 *)(param_4 + 0x38) = 0;
    *(undefined8 *)(param_4 + 0x40) = 0;
    *(undefined8 *)(param_4 + 0x48) = 0;
    *(undefined1 *)(param_4 + 0x50) = 1;
    (**(code **)(*param_5 + 0xf8))(param_5,&PTR_DAT_110c6d2b0);
    *(undefined8 *)(param_4 + 0x38) = param_1;
    *(undefined8 *)(param_4 + 0x40) = param_2;
    *(undefined8 *)(param_4 + 0x48) = param_3;
  }
  plVar1 = param_5;
  (**(code **)(*param_5 + 0x50))(param_5,&PTR_DAT_110c6d2d0);
  *(char *)(param_4 + 0x58) = (char)plVar1;
  plVar1 = param_5;
  (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c6d2f0);
  *(long **)(param_4 + 0x60) = plVar1;
  (**(code **)(*param_5 + 0x30))(param_5,&PTR_DAT_110c6d310);
  *(int *)(param_4 + 0x68) = (int)param_5;
  return;
}



/* Entry: 10acea530; end: 10acea7e3;  */

void FUN_10acea530(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
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
  puStack_98 = &UNK_10f6a21e3;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6a1ede;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000179;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f317050;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000179;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acea7e4(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a21f9;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000179;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acea7e4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f64815b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000179;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acea7e4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a2204;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000179;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acea7e4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f63345b;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000179;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acea7e4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a2211;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000179;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acea7e4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a2228;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000179;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acea7e4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6a2244;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000179;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acea7e4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68e822;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x12400000179;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10acea7e4();
  FUN_10a003ff4();
  return;
}



/* Entry: 10acea7e4; end: 10acea9b3;  */

undefined8 * FUN_10acea7e4(undefined8 *param_1,undefined8 *param_2,int param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acea888);
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



/* Entry: 10acea9b4; end: 10aceab2f;  */

void FUN_10acea9b4(undefined4 *param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6ce20,*param_1);
  (**(code **)(*param_2 + 0xf0))(param_2,&PTR_DAT_110c6ce40,param_1 + 2);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c6ce60,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010aceaa3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xf0))(param_2,&PTR_DAT_110c6ce80,param_1 + 0x12);
  return;
}



/* Entry: 10aceab30; end: 10aceab7f;  */

undefined8 FUN_10aceab30(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)*param_1;
  iVar3 = ((int *)*param_1)[1];
  iVar4 = *param_2;
  iVar1 = iVar2;
  if (iVar2 <= iVar3) {
    iVar1 = iVar3;
  }
  iVar5 = iVar2;
  if (iVar3 <= iVar2) {
    iVar5 = iVar3;
  }
  iVar5 = (int)((float)(iVar1 * iVar4) / (float)iVar5);
  iVar1 = iVar5;
  if (iVar2 <= iVar3) {
    iVar1 = iVar4;
    iVar4 = iVar5;
  }
  return CONCAT44(iVar4,iVar1);
}



/* Entry: 10aceab80; end: 10aceabd3;  */

long FUN_10aceab80(long param_1)

{
  long lStack_28;
  
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(char *)(param_1 + 0x3f) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  lStack_28 = param_1 + 0x10;
  FUN_10a2303d4(&lStack_28);
  return param_1;
}



/* Entry: 10aceabd4; end: 10aceae6f;  */

void FUN_10aceabd4(ulong param_1,undefined8 param_2,ulong param_3,undefined4 *param_4,ulong param_5,
                  long param_6)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lStack_338;
  ulong *puStack_330;
  ulong uStack_328;
  undefined1 *puStack_320;
  code *pcStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  ulong *puStack_298;
  long *plStack_1e8;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_f8;
  long lStack_f0;
  long *plStack_88;
  char cStack_80;
  long lStack_70;
  
  puVar9 = &uStack_310;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = *(long **)(param_6 + 0x10);
  uStack_310 = param_1;
  uStack_308 = param_2;
  if (param_5 != 0) {
    puVar4 = &uStack_300;
    uStack_300 = param_1;
    uStack_2f8 = param_2;
    func_0x0001098b9090(puVar4,*param_4);
    if (param_5 != 1) {
      puVar5 = &uStack_300;
      uStack_300 = param_1;
      uStack_2f8 = param_2;
      func_0x00010a289568(puVar5,param_4[1]);
      if (2 < param_5) {
        puVar6 = &uStack_300;
        uStack_300 = param_1;
        uStack_2f8 = param_2;
        FUN_10a4efbc8(puVar6,param_4[2]);
        if (param_5 != 3) {
          puVar7 = &uStack_300;
          uStack_300 = param_1;
          uStack_2f8 = param_2;
          func_0x00010a4efc70(puVar7,param_4[3]);
          if (4 < param_5) {
            puVar8 = &uStack_300;
            uStack_300 = param_1;
            uStack_2f8 = param_2;
            func_0x00010a4efd18(puVar8,param_4[4]);
            if ((*puVar4 != 0) && (*puVar5 != 0)) {
              func_0x00010a51b7f4(&uStack_310,param_3 & 0xffffffff);
              param_3 = 0x100;
              __Znwm();
              uVar11 = *puVar5;
              lVar10 = *plVar12;
              FUN_10a4caea0(&uStack_300,(double)*(long *)*puVar4 / 1000000000.0,
                            *(undefined1 *)(lVar10 + 200),uVar11,*puVar6,*puVar7,*puVar8,0);
              FUN_10acdd890(param_3,lVar10,&uStack_300,uVar11 + 0x10,plVar12 + 1,
                            *(int *)(*(long *)(lVar10 + 0xc0) + 4) == 0);
              if ((cStack_80 == '\x01') && (plStack_88 != (long *)0x0)) {
                plVar12 = plStack_88 + 1;
                do {
                  lVar10 = *plVar12;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                  if (bVar2) {
                    *plVar12 = lVar10 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar10 == 0) {
                  (**(code **)(*plStack_88 + 0x10))(plStack_88);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
                }
              }
              if (lStack_f8 != 0) {
                lStack_f0 = lStack_f8;
                __ZdlPv();
              }
              if (lStack_110 != 0) {
                lStack_108 = lStack_110;
                __ZdlPv();
              }
              if (lStack_128 != 0) {
                lStack_120 = lStack_128;
                __ZdlPv();
              }
              if (plStack_1e8 != (long *)0x0) {
                plVar12 = plStack_1e8 + 1;
                do {
                  lVar10 = *plVar12;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                  if (bVar2) {
                    *plVar12 = lVar10 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (lVar10 == 0) {
                  (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1e8);
                }
              }
              _free();
              uVar11 = *puVar9;
              *puVar9 = param_3;
              puVar8 = puStack_298;
              if (uVar11 != 0) {
                func_0x00010a502568();
                puVar8 = puVar9;
              }
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
              return;
            }
            ___stack_chk_fail();
            func_0x000109458ce0(&uStack_300);
            __ZdlPv(param_3);
            puVar9 = puVar8;
            __Unwind_Resume();
            pcStack_318 = FUN_10aceae70;
            uVar11 = puVar9[1];
            if (uVar11 != 0) {
              puStack_330 = puVar8;
              uStack_328 = param_3;
              puStack_320 = &stack0xfffffffffffffff0;
              if ((*(char *)(uVar11 + 0x40) == '\x01') && (*(char *)(uVar11 + 0x3f) < '\0')) {
                __ZdlPv(*(undefined8 *)(uVar11 + 0x28));
              }
              lStack_338 = uVar11 + 0x10;
              FUN_10a2303d4(&lStack_338);
              __ZdlPv(uVar11);
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aceae40);
  (*pcVar3)();
}



/* Entry: 10aceae70; end: 10aceaecb;  */

void FUN_10aceae70(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if ((*(char *)(lVar1 + 0x40) == '\x01') && (*(char *)(lVar1 + 0x3f) < '\0')) {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x28));
    }
    lStack_28 = lVar1 + 0x10;
    FUN_10a2303d4(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10aceaecc; end: 10aceaee3;  */

void FUN_10aceaecc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10aceaee4; end: 10aceafeb;  */

long FUN_10aceaee4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1 != param_2) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_3 + lVar5);
      if (*(char *)((long)puVar1 + 0x17) < '\0') {
        func_0x000107c3192c(puVar2,*puVar1,puVar1[1]);
      }
      else {
        uVar7 = puVar1[1];
        uVar6 = *puVar1;
        puVar2[2] = puVar1[2];
        puVar2[1] = uVar7;
        *puVar2 = uVar6;
      }
      lVar3 = param_3 + lVar5;
      lVar4 = param_1 + lVar5;
      uVar6 = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(lVar3 + 0x18) = uVar6;
      uVar7 = *(undefined8 *)(lVar4 + 0x30);
      uVar6 = *(undefined8 *)(lVar4 + 0x28);
      uVar9 = *(undefined8 *)(lVar4 + 0x40);
      uVar8 = *(undefined8 *)(lVar4 + 0x38);
      uVar11 = *(undefined8 *)(lVar4 + 0x50);
      uVar10 = *(undefined8 *)(lVar4 + 0x48);
      *(undefined4 *)(lVar3 + 0x58) = *(undefined4 *)(lVar4 + 0x58);
      *(undefined8 *)(lVar3 + 0x50) = uVar11;
      *(undefined8 *)(lVar3 + 0x48) = uVar10;
      *(undefined8 *)(lVar3 + 0x40) = uVar9;
      *(undefined8 *)(lVar3 + 0x38) = uVar8;
      *(undefined8 *)(lVar3 + 0x30) = uVar7;
      *(undefined8 *)(lVar3 + 0x28) = uVar6;
      FUN_10a1ccb30(lVar3 + 0x60,lVar4 + 0x60);
      lVar5 = lVar5 + 0x80;
    } while (param_1 + lVar5 != param_2);
    param_3 = param_3 + lVar5;
  }
  return param_3;
}



/* Entry: 10aceafec; end: 10aceb467;  */

void FUN_10aceafec(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  long lStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  char cStack_51;
  undefined8 **ppuStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  puVar8 = (undefined8 *)0x90;
  __Znwm();
  *puVar8 = FUN_10acf0810;
  puVar8[1] = FUN_10acf0ba8;
  puVar8[0x10] = param_2;
  func_0x0001092ba17c(puVar8 + 2);
  lVar13 = puVar8[7];
  if (lVar13 != 0) {
    plVar9 = (long *)(lVar13 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar13;
  lVar13 = *param_2;
  puVar8[0xe] = lVar13;
  plVar9 = (long *)(lVar13 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = *plVar9 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar8 + 0x11) = 0;
    lVar13 = puVar8[0xe];
    plVar9 = (long *)(lVar13 + 0x10);
    uStack_60 = puVar8[3];
    do {
      lVar15 = *plVar9;
      if (lVar15 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          ppuStack_70 = (undefined **)0x0;
          puStack_68 = puVar8;
          func_0x000109d1b588(lVar13 + 0x18,&ppuStack_70);
          *(undefined8 *)(lVar13 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar15 >> 1 & 1) == 0);
  }
  lVar13 = puVar8[0xe];
  if (((uint)*(undefined8 *)(puVar8[0xe] + 0x10) >> 5 & 1) != 0) {
    func_0x0001092af97c(lVar13 + 0x90);
LAB_10aceb324:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10aceb328);
    (*pcVar7)();
  }
  if ((*(byte *)(lVar13 + 0xc0) & 1) == 0) goto LAB_10aceb324;
  FUN_10a4f0c8c(puVar8 + 9,lVar13 + 0x98);
  plVar9 = (long *)puVar8[0xe];
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar14 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar14 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar14 & 0x1fffffffc) == 4) {
      do {
        uVar14 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar14 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar14 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar13 = puVar8[0x10];
  ppuVar12 = &PTR_PTR_113306f10;
  FUN_10ae079a0(0,&PTR_PTR_113306f10);
  FUN_10ae07cd4(ppuVar12,&PTR_PTR_113306f10);
  plVar9 = *(long **)(lVar13 + 0x10);
  if (plVar9 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    puVar8[0xf] = plVar9;
    if (plVar9 != (long *)0x0) {
      lVar13 = *(long *)(lVar13 + 8);
      puVar8[0xe] = lVar13;
      iVar6 = 0;
      if (lVar13 != 0) {
        puVar10 = puVar8 + 9;
        FUN_10a4f0ad8();
        if (((ulong)puVar10 & 1) == 0) {
          func_0x0001092ba100(puVar8 + 2);
          iVar6 = 3;
        }
        else {
          if (*(char *)((long)puVar8 + 0x5f) < '\0') {
            func_0x000107c3192c(&ppuStack_50,puVar8[9],puVar8[10]);
          }
          else {
            uStack_48 = puVar8[10];
            ppuStack_50 = (undefined8 **)puVar8[9];
            uStack_40 = puVar8[0xb];
          }
          uVar14 = uStack_48;
          pppuVar5 = (undefined8 ***)ppuStack_50;
          if (-1 < (long)uStack_40) {
            uVar14 = uStack_40 >> 0x38;
            pppuVar5 = &ppuStack_50;
          }
          pppuVar11 = &ppuStack_70;
          FUN_10a4f0e48(pppuVar11,pppuVar5,uVar14);
          func_0x00010ad031c0();
          func_0x00010941eff0(&lStack_78,&ppuStack_70,pppuVar11);
          FUN_10aceb468(lVar13 + 0x70,&lStack_78);
          lVar13 = lStack_78;
          lStack_78 = 0;
          if (lVar13 != 0) {
            FUN_109cda590();
            __ZdlPv();
          }
          ppuStack_70 = &PTR_DAT_110af47c8;
          if (cStack_51 < '\0') {
            __ZdlPv(puStack_68);
          }
          if ((long)uStack_40 < 0) {
            __ZdlPv(ppuStack_50);
          }
          iVar16 = 0;
          plVar9 = (long *)puVar8[0xf];
          iVar6 = 0;
          if (plVar9 == (long *)0x0) goto LAB_10aceb2a4;
        }
      }
      iVar16 = iVar6;
      plVar2 = plVar9 + 1;
      do {
        lVar13 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      goto LAB_10aceb2a4;
    }
  }
  iVar16 = 0;
LAB_10aceb2a4:
  plVar9 = (long *)puVar8[0xd];
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 1;
    do {
      lVar13 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (*(char *)((long)puVar8 + 0x5f) < '\0') {
    __ZdlPv(puVar8[9]);
  }
  if (iVar16 == 0) {
    func_0x0001092ba100(puVar8 + 2);
  }
  func_0x000109d1a1d0(puVar8 + 2);
  __ZdlPv(puVar8);
  return;
}



/* Entry: 10aceb468; end: 10aceb4fb;  */

long * FUN_10aceb468(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *puVar4 = &PTR_DAT_110af5de0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = lVar6;
  }
  *param_2 = 0;
  plVar5 = (long *)param_1[1];
  *param_1 = lVar6;
  param_1[1] = (long)puVar4;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10aceb4fc; end: 10aceb587;  */

undefined * FUN_10aceb4fc(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  
  ppuVar6 = &PTR_PTR_113306f50;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0(0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
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
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10aceb588; end: 10aceb5f7;  */

void FUN_10aceb588(long *param_1)

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
        lVar2 = lVar2 + -0x78;
        FUN_10aceb5f8(lVar2);
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



/* Entry: 10aceb5f8; end: 10aceb66b;  */

void FUN_10aceb5f8(long *param_1)

{
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
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



/* Entry: 10aceb66c; end: 10aceb79f;  */

undefined8 * FUN_10aceb66c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1[7] != 0) {
    piVar8 = (int *)(param_1[7] + 0x14);
    do {
      iVar3 = *piVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar2) {
        *piVar8 = iVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  if (0 < *(int *)((long)param_1 + 4)) {
    lVar4 = 0;
    lVar5 = param_1[8];
    do {
      *(undefined4 *)(lVar5 + lVar4 * 4) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((long)param_1 + 4));
  }
  piVar8 = (int *)((long)param_2 + 4);
  iVar3 = *piVar8;
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar9 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar9;
  puVar6 = (undefined8 *)param_1[9];
  puVar7 = param_1 + 10;
  if (puVar6 != puVar7) {
    if (puVar6 != (undefined8 *)0x0) {
      _free(puVar6[-1]);
      iVar3 = *piVar8;
    }
    param_1[8] = param_1 + 1;
    param_1[9] = puVar7;
    puVar6 = puVar7;
  }
  puVar7 = (undefined8 *)param_2[9];
  if (iVar3 < 3) {
    *puVar6 = *puVar7;
    puVar6[1] = puVar7[1];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = puVar7;
    param_2[8] = param_2 + 1;
    param_2[9] = param_2 + 10;
  }
  *(undefined4 *)param_2 = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



/* Entry: 10aceb7a0; end: 10aceb893;  */

undefined8 * FUN_10aceb7a0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_DAT_110af4b00;
  func_0x00010938d9d4(param_1,&uStack_38);
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010938d9d4(param_1,&uStack_38);
  if (0 < *(int *)((long)param_1 + 0x14)) {
    iVar1 = 0;
    do {
      _memcpy(param_1[1] +
              (long)*(int *)(param_1 + 3) * (long)iVar1 * 2 +
              (long)*(int *)(param_1 + 3) * (long)iVar1,
              *(long *)(param_2 + 8) +
              (long)*(int *)(param_2 + 0x18) * (long)iVar1 * 2 +
              (long)*(int *)(param_2 + 0x18) * (long)iVar1,(long)*(int *)(param_1 + 2) * 3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((long)param_1 + 0x14));
  }
  return param_1;
}



/* Entry: 10aceb894; end: 10aceb8a7;  */

void FUN_10aceb894(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0x222222222222223) {
    __Znwm((long)param_2 * 0x78);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10aceb968();
    puVar2 = *(undefined8 **)(puVar1 + 8);
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      uVar3 = *param_2;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar2 = uVar3;
      puVar2 = (undefined8 *)((long)puVar2 + 0xc);
    }
    *(undefined8 **)(puVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 10aceb8a8; end: 10aceb8eb;  */

void FUN_10aceb8a8(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 < (undefined8 *)0x222222222222223) {
    __Znwm((long)param_2 * 0x78);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10aceb968();
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      uVar2 = *param_2;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar1 = uVar2;
      puVar1 = (undefined8 *)((long)puVar1 + 0xc);
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10aceb8ec; end: 10aceb967;  */

void FUN_10aceb8ec(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    FUN_10aceb968(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      uVar2 = *param_2;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar1 = uVar2;
      puVar1 = (undefined8 *)((long)puVar1 + 0xc);
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10aceb968; end: 10aceb9af;  */

void FUN_10aceb968(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_2 < 0x1555555555555556) {
    plVar2 = param_1;
    FUN_10aceb9c4();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_2 * 0xc;
    return;
  }
  FUN_10aceb9b0();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x1555555555555556) {
    __Znwm(param_2 * 0xc);
    return;
  }
  func_0x000109ffded8();
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  plVar2 = *(long **)(puVar1 + 0x308);
  FUN_10aceba4c();
                    /* WARNING: Could not recover jumptable at 0x00010aceba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0);
  return;
}



/* Entry: 10aceb9b0; end: 10aceb9c3;  */

void FUN_10aceb9b0(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x1555555555555556) {
    __Znwm(param_2 * 0xc);
    return;
  }
  func_0x000109ffded8();
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  plVar2 = *(long **)(puVar1 + 0x308);
  FUN_10aceba4c();
                    /* WARNING: Could not recover jumptable at 0x00010aceba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0);
  return;
}



/* Entry: 10aceb9c4; end: 10aceba07;  */

void FUN_10aceb9c4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_2 < 0x1555555555555556) {
    __Znwm(param_2 * 0xc);
    return;
  }
  func_0x000109ffded8();
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  plVar2 = *(long **)(puVar1 + 0x308);
  FUN_10aceba4c();
                    /* WARNING: Could not recover jumptable at 0x00010aceba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0);
  return;
}



/* Entry: 10aceba08; end: 10aceba1b;  */

void FUN_10aceba08(void)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  plVar2 = *(long **)(puVar1 + 0x308);
  FUN_10aceba4c();
                    /* WARNING: Could not recover jumptable at 0x00010aceba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0);
  return;
}



/* Entry: 10aceba1c; end: 10aceba4b;  */

void FUN_10aceba1c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x308);
  FUN_10aceba4c();
                    /* WARNING: Could not recover jumptable at 0x00010aceba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10aceba4c; end: 10acebb2b;  */

void FUN_10aceba4c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long alStack_2c8 [83];
  
  if ((*(byte *)(param_1 + 0x2f0) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x300);
    *(undefined8 *)(param_1 + 0x300) = 0;
    FUN_10acebea4(alStack_2c8,param_1);
    func_0x00010acebe08(lVar2,alStack_2c8);
    FUN_10a4feea0(alStack_2c8);
    if (*(char *)(param_1 + 0x2f0) == '\x01') {
      FUN_10ace5114(param_1);
      *(undefined1 *)(param_1 + 0x2f0) = 0;
    }
    alStack_2c8[0] = 0;
    if (lVar2 != 0) {
      func_0x0001092b4274(alStack_2c8,lVar2);
      if (alStack_2c8[0] != 0) {
        func_0x0001092b4274(alStack_2c8);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10acebae8);
  (*pcVar1)();
}



/* Entry: 10acebb2c; end: 10acebea3;  */

undefined8 * FUN_10acebb2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6d0d0;
  if (param_1[200] != 0) {
    func_0x0001092b4274(param_1 + 200);
  }
  if (*(char *)(param_1 + 0xc6) == '\x01') {
    FUN_10ace5114(param_1 + 0x68);
  }
  *param_1 = &PTR_DAT_110c6d120;
  if (*(char *)(param_1 + 0x66) == '\x01') {
    FUN_10a4feea0(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10acebea4; end: 10acecb83;  */

void FUN_10acebea4(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  unkbyte9 Var7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  double *pdVar14;
  undefined8 *puVar15;
  double *pdVar16;
  double dVar17;
  long lVar18;
  ulong uVar19;
  double *pdVar20;
  int *piVar21;
  int *piVar22;
  undefined1 auVar23 [16];
  undefined4 uStack_340;
  undefined8 uStack_33c;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2a8;
  long lStack_2a0;
  undefined1 *puStack_298;
  undefined1 auStack_290 [16];
  undefined **ppuStack_280;
  long lStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  int iStack_268;
  undefined **ppuStack_260;
  long lStack_258;
  undefined8 uStack_250;
  int iStack_248;
  undefined **ppuStack_240;
  long lStack_238;
  ulong uStack_230;
  int iStack_228;
  undefined1 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined4 auStack_208 [2];
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  double *pdStack_1a8;
  double adStack_1a0 [6];
  long *plStack_170;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  long *plStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined **ppuStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_c0 [72];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined4 *)param_1 = 0x42ff0000;
  piVar21 = (int *)((long)param_1 + 4);
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  piVar21[0] = 0;
  piVar21[1] = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  pdVar16 = (double *)(param_1 + 10);
  param_1[0xb] = 0;
  *pdVar16 = 0.0;
  *(undefined4 *)(param_1 + 0xc) = 0x42ff0000;
  piVar22 = (int *)((long)param_1 + 100);
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  piVar22[0] = 0;
  piVar22[1] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = pdVar16;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  pdVar20 = (double *)(param_1 + 0x16);
  param_1[0x17] = 0;
  *pdVar20 = 0.0;
  *(undefined4 *)(param_1 + 0x18) = 0x42ff0000;
  param_1[0x14] = param_1 + 0xd;
  param_1[0x15] = pdVar20;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  param_1[0x20] = param_1 + 0x19;
  param_1[0x21] = param_1 + 0x22;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 300) = 0;
  auVar23 = NEON_fmov(0xbf800000,4);
  *(long *)((long)param_1 + 0x13c) = auVar23._8_8_;
  *(long *)((long)param_1 + 0x134) = auVar23._0_8_;
  *(undefined4 *)((long)param_1 + 0x144) = 0x7fc00000;
  param_1[0x29] = 0x3f8000007fc00000;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  *(undefined4 *)((long)param_1 + 0x174) = 0x3f800000;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x1ec) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((long)param_1 + 500) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x40] = &PTR_DAT_110ba5598;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x23c) = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined8 *)((long)param_1 + 0x244) = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = param_1 + 0x45;
  param_1[0x4d] = param_1 + 0x4e;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  plVar9 = (long *)param_2[1];
  if (plVar9 == (long *)0x0) {
LAB_10acec96c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_210 = plVar9;
    if (plVar9 == (long *)0x0) goto LAB_10acec96c;
    lVar18 = *param_2;
    lStack_218 = lVar18;
    if (lVar18 == 0) {
LAB_10acec93c:
      plVar10 = plStack_210;
      plVar9 = plStack_210 + 1;
      do {
        lVar18 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_210 + 0x10))(plStack_210);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
      goto LAB_10acec96c;
    }
    if ((*(byte *)(lVar18 + 0x98) & 1) == 0) goto LAB_10aceca0c;
    plVar9 = (long *)(lVar18 + 0x50);
    plStack_170 = (long *)0x0;
    uStack_150 = 0;
    plStack_130 = (long *)0x0;
    if (*plVar9 == 0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = *(long **)(lVar18 + 0x90);
      if (plVar10 != (long *)0x0) {
        if (plVar10 == (long *)(lVar18 + 0x78)) {
          uStack_1d8 = &uStack_1f0;
          (**(code **)(*plVar10 + 0x18))(plVar10,&uStack_1f0);
          plVar10 = uStack_1d8;
        }
        else {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      uStack_1d8 = plVar10;
      FUN_10aceced4(&uStack_1f0,auStack_148);
      if (uStack_1d8 == &uStack_1f0) {
        lVar12 = 0x20;
LAB_10acec104:
        (**(code **)(*uStack_1d8 + lVar12))();
      }
      else if (uStack_1d8 != (long *)0x0) {
        lVar12 = 0x28;
        goto LAB_10acec104;
      }
      plVar10 = *(long **)(lVar18 + 0x70);
      if (plVar10 != (long *)0x0) {
        if (plVar10 == (long *)(lVar18 + 0x58)) {
          uStack_1d8 = &uStack_1f0;
          (**(code **)(*plVar10 + 0x18))(plVar10,&uStack_1f0);
          plVar10 = uStack_1d8;
        }
        else {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      uStack_1d8 = plVar10;
      FUN_10aced040(&uStack_1f0,auStack_168);
      if (uStack_1d8 == &uStack_1f0) {
        lVar18 = 0x20;
LAB_10acec17c:
        (**(code **)(*uStack_1d8 + lVar18))();
      }
      else if (uStack_1d8 != (long *)0x0) {
        lVar18 = 0x28;
        goto LAB_10acec17c;
      }
      if (plStack_130 == (long *)0x0) {
        FUN_10a06186c();
        goto LAB_10aceca0c;
      }
      plVar10 = plStack_130;
      (**(code **)(*plStack_130 + 0x30))(plStack_130,*plVar9);
    }
    plStack_170 = plVar10;
    func_0x00010938aca0(&ppuStack_128,param_2 + 2,param_2 + 6,param_2 + 0x58,&plStack_170);
    FUN_10acef2f8(&plStack_170);
    FUN_10aced1ac(&ppuStack_280,&ppuStack_128);
    FUN_10aced1ac(&ppuStack_260,&ppuStack_108);
    func_0x00010939d4b8(&ppuStack_240,&ppuStack_e8);
    uStack_220 = uStack_c8;
    FUN_10ace5808(plVar9,auStack_c0);
    *(undefined1 *)((long)param_1 + 500) = 2;
    func_0x00010936ff7c(&uStack_2e0,uStack_26c,uStack_270,5,lStack_278,(long)iStack_268 << 2);
    uStack_1f0._0_4_ = 0x42ff0000;
    uStack_1e8._4_4_ = 0;
    uStack_1e0._0_4_ = 0;
    uStack_1f0._4_4_ = 0;
    uStack_1e8._0_4_ = 0;
    uVar19 = (ulong)&uStack_1f0 | 8;
    uStack_1d8._4_4_ = 0;
    uStack_1d0._0_4_ = 0;
    uStack_1e0._4_4_ = 0;
    uStack_1d8._0_4_ = 0;
    uStack_1c8._4_4_ = 0;
    uStack_1d0._4_4_ = 0;
    uStack_1c8._0_4_ = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    adStack_1a0[0] = 0.0;
    adStack_1a0[1] = 0.0;
    auStack_208[0] = 0x2010000;
    uStack_1f8 = 0;
    puStack_200 = &uStack_1f0;
    puStack_1b0 = (undefined8 *)uVar19;
    pdStack_1a8 = adStack_1a0;
    func_0x000109a479a0(&uStack_2e0,auStack_208);
    if (param_1[7] != 0) {
      piVar1 = (int *)(param_1[7] + 0x14);
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
        func_0x000109a848d4(param_1);
      }
    }
    if (0 < *(int *)((long)param_1 + 4)) {
      lVar18 = 0;
      lVar12 = param_1[8];
      do {
        *(undefined4 *)(lVar12 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < *piVar21);
    }
    param_1[1] = CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
    *param_1 = CONCAT44(uStack_1f0._4_4_,(undefined4)uStack_1f0);
    param_1[3] = CONCAT44(uStack_1d8._4_4_,(undefined4)uStack_1d8);
    param_1[2] = CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0);
    param_1[5] = CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8);
    param_1[4] = CONCAT44(uStack_1d0._4_4_,(undefined4)uStack_1d0);
    param_1[7] = lStack_1b8;
    param_1[6] = CONCAT44(uStack_1bc,uStack_1c0);
    pdVar14 = (double *)param_1[9];
    if (pdVar14 != pdVar16) {
      if (pdVar14 != (double *)0x0) {
        _free(pdVar14[-1]);
      }
      param_1[8] = param_1 + 1;
      param_1[9] = pdVar16;
      pdVar14 = pdVar16;
    }
    puVar15 = (undefined8 *)((ulong)&uStack_1f0 | 4);
    if (uStack_1f0._4_4_ < 3) {
      *pdVar14 = *pdStack_1a8;
      pdVar14[1] = pdStack_1a8[1];
      uStack_1f0._0_4_ = 0x42ff0000;
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15[3] = 0;
      puVar15[2] = 0;
      puVar15[5] = 0;
      puVar15[4] = 0;
      *(undefined8 *)((long)puVar15 + 0x34) = 0;
      *(undefined8 *)((long)puVar15 + 0x2c) = 0;
      if (pdStack_1a8 != adStack_1a0) {
        _free(pdStack_1a8[-1]);
      }
    }
    else {
      param_1[8] = puStack_1b0;
      param_1[9] = pdStack_1a8;
      uStack_1f0._0_4_ = 0x42ff0000;
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15[3] = 0;
      puVar15[2] = 0;
      puVar15[5] = 0;
      puVar15[4] = 0;
      *(undefined8 *)((long)puVar15 + 0x34) = 0;
      *(undefined8 *)((long)puVar15 + 0x2c) = 0;
      puStack_1b0 = (undefined8 *)uVar19;
      pdStack_1a8 = adStack_1a0;
    }
    if (lStack_2a8 != 0) {
      piVar21 = (int *)(lStack_2a8 + 0x14);
      do {
        iVar3 = *piVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar5) {
          *piVar21 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_2e0);
      }
    }
    lStack_2a8 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    if (0 < uStack_2e0._4_4_) {
      lVar18 = 0;
      do {
        *(undefined4 *)(lStack_2a0 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < uStack_2e0._4_4_);
    }
    if (puStack_298 != auStack_290 && puStack_298 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_298 + -8));
    }
    func_0x00010936ff7c(&uStack_2e0,uStack_250._4_4_,uStack_250 & 0xffffffff,5,lStack_258,
                        (long)iStack_248 << 2);
    uStack_1f0._0_4_ = 0x42ff0000;
    uStack_1e8._4_4_ = 0;
    uStack_1e0._0_4_ = 0;
    uStack_1f0._4_4_ = 0;
    uStack_1e8._0_4_ = 0;
    uVar19 = (ulong)&uStack_1f0 | 8;
    uStack_1d8._4_4_ = 0;
    uStack_1d0._0_4_ = 0;
    uStack_1e0._4_4_ = 0;
    uStack_1d8._0_4_ = 0;
    uStack_1c8._4_4_ = 0;
    uStack_1d0._4_4_ = 0;
    uStack_1c8._0_4_ = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    adStack_1a0[0] = 0.0;
    adStack_1a0[1] = 0.0;
    auStack_208[0] = 0x2010000;
    uStack_1f8 = 0;
    puStack_200 = &uStack_1f0;
    puStack_1b0 = (undefined8 *)uVar19;
    pdStack_1a8 = adStack_1a0;
    func_0x000109a479a0(&uStack_2e0,auStack_208);
    if (param_1[0x13] != 0) {
      piVar21 = (int *)(param_1[0x13] + 0x14);
      do {
        iVar3 = *piVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar5) {
          *piVar21 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(param_1 + 0xc);
      }
    }
    if (0 < *(int *)((long)param_1 + 100)) {
      lVar18 = 0;
      lVar12 = param_1[0x14];
      do {
        *(undefined4 *)(lVar12 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < *piVar22);
    }
    param_1[0xd] = CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8);
    param_1[0xc] = CONCAT44(uStack_1f0._4_4_,(undefined4)uStack_1f0);
    param_1[0xf] = CONCAT44(uStack_1d8._4_4_,(undefined4)uStack_1d8);
    param_1[0xe] = CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0);
    param_1[0x11] = CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8);
    param_1[0x10] = CONCAT44(uStack_1d0._4_4_,(undefined4)uStack_1d0);
    param_1[0x13] = lStack_1b8;
    param_1[0x12] = CONCAT44(uStack_1bc,uStack_1c0);
    pdVar16 = (double *)param_1[0x15];
    if (pdVar16 != pdVar20) {
      if (pdVar16 != (double *)0x0) {
        _free(pdVar16[-1]);
      }
      param_1[0x14] = param_1 + 0xd;
      param_1[0x15] = pdVar20;
      pdVar16 = pdVar20;
    }
    puVar15 = (undefined8 *)((ulong)&uStack_1f0 | 4);
    if (uStack_1f0._4_4_ < 3) {
      *pdVar16 = *pdStack_1a8;
      pdVar16[1] = pdStack_1a8[1];
      uStack_1f0._0_4_ = 0x42ff0000;
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15[3] = 0;
      puVar15[2] = 0;
      puVar15[5] = 0;
      puVar15[4] = 0;
      *(undefined8 *)((long)puVar15 + 0x34) = 0;
      *(undefined8 *)((long)puVar15 + 0x2c) = 0;
      if (pdStack_1a8 != adStack_1a0) {
        _free(pdStack_1a8[-1]);
      }
    }
    else {
      param_1[0x14] = puStack_1b0;
      param_1[0x15] = pdStack_1a8;
      uStack_1f0._0_4_ = 0x42ff0000;
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15[3] = 0;
      puVar15[2] = 0;
      puVar15[5] = 0;
      puVar15[4] = 0;
      *(undefined8 *)((long)puVar15 + 0x34) = 0;
      *(undefined8 *)((long)puVar15 + 0x2c) = 0;
      puStack_1b0 = (undefined8 *)uVar19;
      pdStack_1a8 = adStack_1a0;
    }
    if (lStack_2a8 != 0) {
      piVar21 = (int *)(lStack_2a8 + 0x14);
      do {
        iVar3 = *piVar21;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar5) {
          *piVar21 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        func_0x000109a848d4(&uStack_2e0);
      }
    }
    lStack_2a8 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    if (0 < uStack_2e0._4_4_) {
      lVar18 = 0;
      do {
        *(undefined4 *)(lStack_2a0 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < uStack_2e0._4_4_);
    }
    if (puStack_298 != auStack_290 && puStack_298 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_298 + -8));
    }
    *(undefined4 *)(param_1 + 0x3f) = 0x42c80000;
    uStack_1f0._0_4_ = 0x42ff0000;
    uStack_1f0._4_4_ = 2;
    puStack_1b0 = &uStack_1e8;
    uStack_1e8._0_4_ = (int)(uStack_230 >> 0x20);
    uStack_1e8._4_4_ = (int)uStack_230;
    uStack_1e0._0_4_ = (undefined4)lStack_238;
    uStack_1e0._4_4_ = (undefined4)((ulong)lStack_238 >> 0x20);
    uStack_1c8._0_4_ = 0;
    uStack_1c8._4_4_ = 0;
    uStack_1d0._0_4_ = 0;
    uStack_1d0._4_4_ = 0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    dVar17 = (double)(long)uStack_1e8._4_4_;
    adStack_1a0[0] = 0.0;
    adStack_1a0[1] = 0.0;
    pdStack_1a8 = adStack_1a0;
    if (lStack_238 != 0) {
LAB_10acec63c:
      dVar2 = dVar17;
      if (uStack_230 >> 0x20 != 1) {
        dVar2 = (double)(long)iStack_228;
      }
      adStack_1a0[0] = dVar17;
      if (iStack_228 != 0) {
        adStack_1a0[0] = dVar2;
      }
      uStack_1f0._0_4_ = 0x42ff4000;
      if (dVar2 != dVar17 && iStack_228 != 0) {
        uStack_1f0._0_4_ = 0x42ff0000;
      }
      adStack_1a0[1] = 4.94065645841247e-324;
      uStack_1c8 = lStack_238 + (long)adStack_1a0[0] * ((long)uStack_230 >> 0x20);
      uStack_1d0 = (uStack_1c8 - (long)adStack_1a0[0]) + (long)dVar17;
      uStack_340 = 0x42ff0000;
      uStack_334 = 0;
      uStack_330 = 0;
      uStack_33c = 0;
      puStack_2d8 = &uStack_340;
      lStack_300 = (long)&uStack_33c + 4;
      uStack_324 = 0;
      uStack_320 = 0;
      uStack_32c = 0;
      uStack_328 = 0;
      uStack_314 = 0;
      uStack_31c = 0;
      uStack_318 = 0;
      lStack_308 = 0;
      uStack_310 = 0;
      uStack_30c = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      uStack_2e0 = (undefined4 *)CONCAT44(uStack_2e0._4_4_,0x2010000);
      uStack_2d0 = 0;
      puStack_2f8 = &uStack_2f0;
      uStack_1d8._0_4_ = (undefined4)uStack_1e0;
      uStack_1d8._4_4_ = uStack_1e0._4_4_;
      func_0x000109a479a0(&uStack_1f0,&uStack_2e0);
      FUN_10ace2200(param_1 + 0x18,&uStack_340,1);
      lVar18 = uStack_1d0;
      lVar12 = uStack_1c8;
      if (lStack_308 != 0) {
        piVar21 = (int *)(lStack_308 + 0x14);
        do {
          iVar3 = *piVar21;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar5) {
            *piVar21 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_340);
          lVar18 = uStack_1d0;
          lVar12 = uStack_1c8;
        }
      }
      lStack_308 = 0;
      uStack_328 = 0;
      uStack_324 = 0;
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_318 = 0;
      uStack_314 = 0;
      uStack_320 = 0;
      uStack_31c = 0;
      if (0 < (int)uStack_33c) {
        lVar13 = 0;
        do {
          *(undefined4 *)(lStack_300 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)uStack_33c);
      }
      uStack_1d0 = lVar18;
      uStack_1c8 = lVar12;
      if (puStack_2f8 != &uStack_2f0 && puStack_2f8 != (undefined8 *)0x0) {
        _free(puStack_2f8[-1]);
      }
      if (lStack_1b8 != 0) {
        piVar21 = (int *)(lStack_1b8 + 0x14);
        do {
          iVar3 = *piVar21;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar5) {
            *piVar21 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_1f0);
        }
      }
      lStack_1b8 = 0;
      uStack_1d8._0_4_ = 0;
      uStack_1d8._4_4_ = 0;
      uStack_1e0._0_4_ = 0;
      uStack_1e0._4_4_ = 0;
      uStack_1c8._0_4_ = 0;
      uStack_1c8._4_4_ = 0;
      uStack_1d0._0_4_ = 0;
      uStack_1d0._4_4_ = 0;
      if (0 < uStack_1f0._4_4_) {
        lVar18 = 0;
        do {
          *(undefined4 *)((long)puStack_1b0 + lVar18 * 4) = 0;
          lVar18 = lVar18 + 1;
        } while (lVar18 < uStack_1f0._4_4_);
      }
      if (pdStack_1a8 != adStack_1a0 && pdStack_1a8 != (double *)0x0) {
        _free(pdStack_1a8[-1]);
      }
      lVar18 = 0;
      *(undefined1 *)((long)param_1 + 0x281) = uStack_220;
      plVar9 = param_2 + 0x38;
      do {
        lVar12 = plVar9[-2];
        *(long *)((long)&uStack_1e8 + lVar18) = plVar9[-1];
        *(long *)((long)&uStack_1f0 + lVar18) = lVar12;
        *(long *)((long)&uStack_1e0 + lVar18) = *plVar9;
        lVar18 = lVar18 + 0x20;
        plVar9 = plVar9 + 3;
      } while (lVar18 != 0x60);
      lVar18 = param_2[0x33];
      Var7 = *(unkbyte9 *)(param_2 + 0x32);
      dVar17 = (double)param_2[0x34];
      param_1[0x35] =
           CONCAT44((float)(double)CONCAT44(uStack_1e8._4_4_,(int)uStack_1e8),
                    (float)(double)CONCAT44(uStack_1f0._4_4_,(undefined4)uStack_1f0));
      *(float *)(param_1 + 0x36) = (float)(double)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0);
      *(undefined4 *)((long)param_1 + 0x1b4) = 0;
      param_1[0x37] =
           CONCAT44((float)(double)CONCAT44(uStack_1c8._4_4_,(undefined4)uStack_1c8),
                    (float)(double)CONCAT44(uStack_1d0._4_4_,(undefined4)uStack_1d0));
      *(float *)(param_1 + 0x38) = (float)(double)CONCAT44(uStack_1bc,uStack_1c0);
      *(undefined4 *)((long)param_1 + 0x1c4) = 0;
      param_1[0x39] = CONCAT44((float)(double)pdStack_1a8,(float)(double)puStack_1b0);
      *(float *)(param_1 + 0x3a) = (float)adStack_1a0[0];
      *(undefined4 *)((long)param_1 + 0x1d4) = 0;
      auVar23[9] = (char)((ulong)lVar18 >> 8);
      auVar23._0_9_ = Var7;
      auVar23[10] = (char)((ulong)lVar18 >> 0x10);
      auVar23[0xb] = (char)((ulong)lVar18 >> 0x18);
      auVar23[0xc] = (char)((ulong)lVar18 >> 0x20);
      auVar23[0xd] = (char)((ulong)lVar18 >> 0x28);
      auVar23[0xe] = (char)((ulong)lVar18 >> 0x30);
      auVar23[0xf] = (char)((ulong)lVar18 >> 0x38);
      fVar6 = (float)auVar23._8_8_;
      param_1[0x3b] =
           CONCAT17((char)((uint)fVar6 >> 0x18),
                    CONCAT16((char)((uint)fVar6 >> 0x10),
                             CONCAT15((char)((uint)fVar6 >> 8),
                                      CONCAT14(SUB41(fVar6,0),(float)(double)Var7))));
      *(float *)(param_1 + 0x3c) = (float)dVar17;
      *(undefined4 *)((long)param_1 + 0x1e4) = 0x3f800000;
      if ((*(byte *)(param_1 + 0x3d) & 1) == 0) {
        *(undefined1 *)(param_1 + 0x3d) = 1;
      }
      *(int *)((long)param_1 + 0x1ec) = (int)param_2[0x40];
      *(undefined1 *)(param_1 + 0x3e) = 1;
      ppuStack_240 = &PTR_DAT_110af4c80;
      if (lStack_238 != 0) {
        __ZdaPv();
      }
      lStack_238 = 0;
      uStack_230 = 0;
      iStack_228 = 0;
      ppuStack_260 = &PTR_DAT_110af4cf0;
      if (lStack_258 != 0) {
        __ZdaPv();
      }
      lStack_258 = 0;
      uStack_250 = 0;
      iStack_248 = 0;
      ppuStack_280 = &PTR_DAT_110af4cf0;
      if (lStack_278 != 0) {
        __ZdaPv();
      }
      FUN_10acef2f8(auStack_c0);
      ppuStack_e8 = &PTR_DAT_110af4c80;
      if (lStack_e0 != 0) {
        __ZdaPv();
      }
      lStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      ppuStack_108 = &PTR_DAT_110af4cf0;
      if (lStack_100 != 0) {
        __ZdaPv();
      }
      lStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      ppuStack_128 = &PTR_DAT_110af4cf0;
      if (lStack_120 != 0) {
        __ZdaPv();
      }
      if (plStack_210 == (long *)0x0) goto LAB_10acec96c;
      goto LAB_10acec93c;
    }
    uStack_1d8._0_4_ = 0;
    uStack_1d8._4_4_ = 0;
    if ((long)uStack_1e8._4_4_ * (long)(int)uStack_1e8 == 0) goto LAB_10acec63c;
  }
  puVar11 = (undefined4 *)0x24;
  func_0x000107c2ae8c();
  *puVar11 = 1;
  uStack_2e0 = puVar11 + 1;
  puStack_2d8 = (undefined4 *)0x1c;
  *(undefined1 *)(puVar11 + 8) = 0;
  *(undefined8 *)(puVar11 + 3) = 0x207c7c2030203d3d;
  *(undefined8 *)(puVar11 + 1) = 0x2029286c61746f74;
  *(undefined8 *)(puVar11 + 6) = 0x4c4c554e203d2120;
  *(undefined8 *)(puVar11 + 4) = 0x61746164207c7c20;
  func_0x000109ac3188(0xffffff29,&uStack_2e0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
LAB_10aceca0c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10aceca10);
  (*pcVar8)();
}



/* Entry: 10acecb84; end: 10acece3f;  */

void FUN_10acecb84(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  uVar5 = param_2[7];
  uVar3 = param_2[6];
  param_1[0xb] = 0;
  param_1[10] = 0;
  piVar2 = (int *)((long)param_2 + 4);
  iVar1 = *piVar2;
  param_1[7] = uVar5;
  param_1[6] = uVar3;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  puVar4 = (undefined8 *)param_2[9];
  if (iVar1 < 3) {
    param_1[10] = *puVar4;
    param_1[0xb] = puVar4[1];
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = puVar4;
    param_2[8] = param_2 + 1;
    param_2[9] = param_2 + 10;
  }
  *(undefined4 *)param_2 = 0x42ff0000;
  param_2[7] = 0;
  param_2[6] = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  uVar5 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar6 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar6;
  uVar6 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar6;
  uVar7 = param_2[0x13];
  uVar6 = param_2[0x12];
  param_1[0x16] = 0;
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar3;
  param_1[0x17] = 0;
  piVar2 = (int *)((long)param_2 + 100);
  iVar1 = *piVar2;
  param_1[0x13] = uVar7;
  param_1[0x12] = uVar6;
  param_1[0x14] = param_1 + 0xd;
  param_1[0x15] = param_1 + 0x16;
  puVar4 = (undefined8 *)param_2[0x15];
  if (iVar1 < 3) {
    param_1[0x16] = *puVar4;
    param_1[0x17] = puVar4[1];
  }
  else {
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = puVar4;
    param_2[0x14] = param_2 + 0xd;
    param_2[0x15] = param_2 + 0x16;
  }
  *(undefined4 *)(param_2 + 0xc) = 0x42ff0000;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  *(undefined8 *)((long)param_2 + 0x7c) = 0;
  *(undefined8 *)((long)param_2 + 0x74) = 0;
  *(undefined8 *)((long)param_2 + 0x8c) = 0;
  *(undefined8 *)((long)param_2 + 0x84) = 0;
  *(undefined8 *)((long)param_2 + 0x6c) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  uVar3 = param_2[0x18];
  uVar6 = param_2[0x1b];
  uVar5 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar3;
  param_1[0x1b] = uVar6;
  param_1[0x1a] = uVar5;
  uVar3 = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar3;
  uVar5 = param_2[0x1f];
  uVar3 = param_2[0x1e];
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  piVar2 = (int *)((long)param_2 + 0xc4);
  iVar1 = *piVar2;
  param_1[0x1f] = uVar5;
  param_1[0x1e] = uVar3;
  param_1[0x20] = param_1 + 0x19;
  param_1[0x21] = param_1 + 0x22;
  puVar4 = (undefined8 *)param_2[0x21];
  if (iVar1 < 3) {
    param_1[0x22] = *puVar4;
    param_1[0x23] = puVar4[1];
  }
  else {
    param_1[0x20] = param_2[0x20];
    param_1[0x21] = puVar4;
    param_2[0x20] = param_2 + 0x19;
    param_2[0x21] = param_2 + 0x22;
  }
  *(undefined4 *)(param_2 + 0x18) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0xcc) = 0;
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)((long)param_2 + 0xdc) = 0;
  *(undefined8 *)((long)param_2 + 0xd4) = 0;
  *(undefined8 *)((long)param_2 + 0xec) = 0;
  *(undefined8 *)((long)param_2 + 0xe4) = 0;
  param_2[0x1f] = 0;
  param_2[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  uVar6 = param_2[0x26];
  uVar5 = param_2[0x25];
  uVar3 = param_2[0x27];
  uVar8 = param_2[0x2a];
  uVar7 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar3;
  param_1[0x2a] = uVar8;
  param_1[0x29] = uVar7;
  param_1[0x26] = uVar6;
  param_1[0x25] = uVar5;
  uVar5 = param_2[0x2c];
  uVar3 = param_2[0x2b];
  uVar7 = param_2[0x2e];
  uVar6 = param_2[0x2d];
  uVar9 = param_2[0x30];
  uVar8 = param_2[0x2f];
  uVar10 = *(undefined8 *)((long)param_2 + 0x184);
  *(undefined8 *)((long)param_1 + 0x18c) = *(undefined8 *)((long)param_2 + 0x18c);
  *(undefined8 *)((long)param_1 + 0x184) = uVar10;
  param_1[0x2e] = uVar7;
  param_1[0x2d] = uVar6;
  param_1[0x30] = uVar9;
  param_1[0x2f] = uVar8;
  param_1[0x2c] = uVar5;
  param_1[0x2b] = uVar3;
  uVar3 = param_2[0x34];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = uVar3;
  param_2[0x34] = 0;
  param_2[0x33] = 0;
  uVar3 = param_2[0x35];
  uVar6 = param_2[0x38];
  uVar5 = param_2[0x37];
  param_1[0x36] = param_2[0x36];
  param_1[0x35] = uVar3;
  param_1[0x38] = uVar6;
  param_1[0x37] = uVar5;
  uVar5 = param_2[0x3a];
  uVar3 = param_2[0x39];
  uVar7 = param_2[0x3c];
  uVar6 = param_2[0x3b];
  uVar9 = param_2[0x3e];
  uVar8 = param_2[0x3d];
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_2 + 0x3f);
  param_1[0x3c] = uVar7;
  param_1[0x3b] = uVar6;
  param_1[0x3e] = uVar9;
  param_1[0x3d] = uVar8;
  param_1[0x3a] = uVar5;
  param_1[0x39] = uVar3;
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  param_1[0x40] = &PTR_DAT_110ba5598;
  uVar3 = param_2[0x42];
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
  param_1[0x42] = uVar3;
  uVar3 = param_2[0x44];
  uVar6 = param_2[0x47];
  uVar5 = param_2[0x46];
  param_1[0x45] = param_2[0x45];
  param_1[0x44] = uVar3;
  param_1[0x47] = uVar6;
  param_1[0x46] = uVar5;
  uVar3 = param_2[0x48];
  param_1[0x49] = param_2[0x49];
  param_1[0x48] = uVar3;
  uVar3 = param_2[0x4a];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4a] = uVar3;
  param_1[0x4c] = param_1 + 0x45;
  param_1[0x4d] = param_1 + 0x4e;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  puVar4 = (undefined8 *)param_2[0x4d];
  if (*(int *)((long)param_2 + 0x224) < 3) {
    param_1[0x4e] = *puVar4;
    param_1[0x4f] = puVar4[1];
  }
  else {
    param_1[0x4d] = puVar4;
    param_1[0x4c] = param_2[0x4c];
    param_2[0x4d] = param_2 + 0x4e;
    param_2[0x4c] = param_2 + 0x45;
  }
  *(undefined4 *)(param_2 + 0x44) = 0x42ff0000;
  *(undefined8 *)((long)param_2 + 0x22c) = 0;
  *(undefined8 *)((long)param_2 + 0x224) = 0;
  *(undefined8 *)((long)param_2 + 0x23c) = 0;
  *(undefined8 *)((long)param_2 + 0x234) = 0;
  *(undefined8 *)((long)param_2 + 0x24c) = 0;
  *(undefined8 *)((long)param_2 + 0x244) = 0;
  param_2[0x4b] = 0;
  param_2[0x4a] = 0;
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  param_1[0x51] = param_2[0x51];
  param_1[0x52] = param_2[0x52];
  param_2[0x52] = 0;
  param_2[0x51] = 0;
  return;
}



/* Entry: 10acece40; end: 10aceced3;  */

undefined8 * FUN_10acece40(undefined8 *param_1)

{
  FUN_10acef2f8(param_1 + 0xd);
  param_1[8] = &PTR_DAT_110af4c80;
  if (param_1[9] != 0) {
    __ZdaPv();
  }
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[4] = &PTR_DAT_110af4cf0;
  if (param_1[5] != 0) {
    __ZdaPv();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR_DAT_110af4cf0;
  if (param_1[1] != 0) {
    __ZdaPv();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10aceced4; end: 10aced03f;  */

long * FUN_10aceced4(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_x19;
  long *unaff_x20;
  int iVar7;
  long lStack_b8;
  long alStack_80 [3];
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_1;
  plVar4 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    if (plVar1 == param_1) {
      if (plVar5 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_1[3];
        (**(code **)(*plVar2 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      plVar1 = plVar2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar1 = (long *)param_2[3];
      (**(code **)(*plVar1 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar1;
  }
  ___stack_chk_fail();
  if ((int)plVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  plVar5 = alStack_80;
  pcStack_48 = FUN_10aced040;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = plVar4;
  plStack_60 = unaff_x20;
  plStack_58 = unaff_x19;
  puStack_50 = &stack0xfffffffffffffff0;
  if (plVar4 != plVar1) {
    plVar3 = (long *)plVar1[3];
    plVar6 = (long *)plVar4[3];
    if (plVar3 == plVar1) {
      if (plVar6 == plVar4) {
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_80);
        (**(code **)(*(long *)plVar1[3] + 0x20))();
        plVar1[3] = 0;
        (**(code **)(*(long *)plVar4[3] + 0x18))((long *)plVar4[3],plVar1);
        (**(code **)(*(long *)plVar4[3] + 0x20))();
        plVar4[3] = 0;
        plVar1[3] = (long)plVar1;
        (**(code **)(alStack_80[0] + 0x18))(alStack_80);
        (**(code **)(alStack_80[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar3 + 0x18))();
        plVar5 = (long *)plVar1[3];
        (**(code **)(*plVar5 + 0x20))();
        plVar1[3] = plVar4[3];
      }
      plVar4[3] = (long)plVar4;
      plVar1 = plVar5;
    }
    else if (plVar6 == plVar4) {
      plVar2 = plVar1;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      plVar5 = (long *)plVar4[3];
      (**(code **)(*plVar5 + 0x20))();
      plVar4[3] = plVar1[3];
      plVar1[3] = (long)plVar1;
      plVar1 = plVar5;
    }
    else {
      plVar1[3] = (long)plVar6;
      plVar4[3] = (long)plVar3;
      plVar1 = plVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar1;
  }
  ___stack_chk_fail();
  if ((int)plVar2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_b8 = plVar2[2];
  plVar1[1] = 0;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = 0;
  *plVar1 = (long)&PTR_DAT_110af4cf0;
  func_0x00010938db10();
  lStack_b8 = plVar2[2];
  func_0x00010938db10(plVar1,&lStack_b8);
  if (0 < *(int *)((long)plVar1 + 0x14)) {
    iVar7 = 0;
    do {
      _memcpy(plVar1[1] + (long)((int)plVar1[3] * iVar7) * 4,
              plVar2[1] + (long)((int)plVar2[3] * iVar7) * 4,(long)(int)plVar1[2] << 2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)((long)plVar1 + 0x14));
  }
  return plVar1;
}



/* Entry: 10aced040; end: 10aced1ab;  */

long * FUN_10aced040(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lStack_78;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar4 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar4 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_1[3];
        (**(code **)(*plVar2 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      param_1 = plVar2;
    }
    else if (plVar4 == param_2) {
      plVar3 = param_1;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      plVar2 = (long *)param_2[3];
      (**(code **)(*plVar2 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
      param_1 = plVar2;
    }
    else {
      param_1[3] = (long)plVar4;
      param_2[3] = (long)plVar1;
      param_1 = plVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)plVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_78 = plVar3[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)&PTR_DAT_110af4cf0;
  func_0x00010938db10();
  lStack_78 = plVar3[2];
  func_0x00010938db10(param_1,&lStack_78);
  if (0 < *(int *)((long)param_1 + 0x14)) {
    iVar5 = 0;
    do {
      _memcpy(param_1[1] + (long)((int)param_1[3] * iVar5) * 4,
              plVar3[1] + (long)((int)plVar3[3] * iVar5) * 4,(long)(int)param_1[2] << 2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((long)param_1 + 0x14));
  }
  return param_1;
}



/* Entry: 10aced1ac; end: 10aced28f;  */

undefined8 * FUN_10aced1ac(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_DAT_110af4cf0;
  func_0x00010938db10(param_1,&uStack_38);
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010938db10(param_1,&uStack_38);
  if (0 < *(int *)((long)param_1 + 0x14)) {
    iVar1 = 0;
    do {
      _memcpy(param_1[1] + (long)(*(int *)(param_1 + 3) * iVar1) * 4,
              *(long *)(param_2 + 8) + (long)(*(int *)(param_2 + 0x18) * iVar1) * 4,
              (long)*(int *)(param_1 + 2) << 2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((long)param_1 + 0x14));
  }
  return param_1;
}



/* Entry: 10aced290; end: 10aced717;  */

undefined4 * FUN_10aced290(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1 != param_2) {
    if (*(long *)(param_2 + 0xe) != 0) {
      piVar1 = (int *)(*(long *)(param_2 + 0xe) + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0xe) + 0x14);
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
        func_0x000109a848d4(param_1);
      }
    }
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    if ((int)param_1[1] < 1) {
      *param_1 = *param_2;
LAB_10aced344:
      if (2 < (int)param_2[1]) goto LAB_10aced378;
      param_1[1] = param_2[1];
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      puVar8 = *(undefined8 **)(param_2 + 0x12);
      puVar10 = *(undefined8 **)(param_1 + 0x12);
      *puVar10 = *puVar8;
      puVar10[1] = puVar8[1];
    }
    else {
      lVar6 = 0;
      lVar9 = *(long *)(param_1 + 0x10);
      do {
        *(undefined4 *)(lVar9 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_1[1]);
      *param_1 = *param_2;
      if ((int)param_1[1] < 3) goto LAB_10aced344;
LAB_10aced378:
      func_0x000109a84868(param_1,param_2);
    }
    uVar7 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xc) = uVar7;
    if (*(long *)(param_2 + 0x26) != 0) {
      piVar1 = (int *)(*(long *)(param_2 + 0x26) + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(long *)(param_1 + 0x26) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0x26) + 0x14);
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
        func_0x000109a848d4(param_1 + 0x18);
      }
    }
    *(undefined8 *)(param_1 + 0x26) = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if ((int)param_1[0x19] < 1) {
      param_1[0x18] = param_2[0x18];
LAB_10aced430:
      if (2 < (int)param_2[0x19]) goto LAB_10aced464;
      param_1[0x19] = param_2[0x19];
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
      puVar8 = *(undefined8 **)(param_2 + 0x2a);
      puVar10 = *(undefined8 **)(param_1 + 0x2a);
      *puVar10 = *puVar8;
      puVar10[1] = puVar8[1];
    }
    else {
      lVar6 = 0;
      lVar9 = *(long *)(param_1 + 0x28);
      do {
        *(undefined4 *)(lVar9 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_1[0x19]);
      param_1[0x18] = param_2[0x18];
      if ((int)param_1[0x19] < 3) goto LAB_10aced430;
LAB_10aced464:
      func_0x000109a84868(param_1 + 0x18,param_2 + 0x18);
    }
    uVar7 = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x1c) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
    *(undefined8 *)(param_1 + 0x24) = uVar7;
    if (*(long *)(param_2 + 0x3e) != 0) {
      piVar1 = (int *)(*(long *)(param_2 + 0x3e) + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(long *)(param_1 + 0x3e) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0x3e) + 0x14);
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
        func_0x000109a848d4(param_1 + 0x30);
      }
    }
    *(undefined8 *)(param_1 + 0x3e) = 0;
    *(undefined8 *)(param_1 + 0x36) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x3a) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    if ((int)param_1[0x31] < 1) {
      param_1[0x30] = param_2[0x30];
LAB_10aced51c:
      if (2 < (int)param_2[0x31]) goto LAB_10aced550;
      param_1[0x31] = param_2[0x31];
      *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
      puVar8 = *(undefined8 **)(param_2 + 0x42);
      puVar10 = *(undefined8 **)(param_1 + 0x42);
      *puVar10 = *puVar8;
      puVar10[1] = puVar8[1];
    }
    else {
      lVar6 = 0;
      lVar9 = *(long *)(param_1 + 0x40);
      do {
        *(undefined4 *)(lVar9 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_1[0x31]);
      param_1[0x30] = param_2[0x30];
      if ((int)param_1[0x31] < 3) goto LAB_10aced51c;
LAB_10aced550:
      func_0x000109a84868(param_1 + 0x30,param_2 + 0x30);
    }
    uVar7 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
    *(undefined8 *)(param_1 + 0x34) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_2 + 0x3a);
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0x3e);
    *(undefined8 *)(param_1 + 0x3c) = uVar7;
  }
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  uVar11 = *(undefined8 *)(param_2 + 0x4c);
  uVar7 = *(undefined8 *)(param_2 + 0x4a);
  uVar12 = *(undefined8 *)(param_2 + 0x4e);
  uVar14 = *(undefined8 *)(param_2 + 0x54);
  uVar13 = *(undefined8 *)(param_2 + 0x52);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x4e) = uVar12;
  *(undefined8 *)(param_1 + 0x54) = uVar14;
  *(undefined8 *)(param_1 + 0x52) = uVar13;
  *(undefined8 *)(param_1 + 0x4c) = uVar11;
  *(undefined8 *)(param_1 + 0x4a) = uVar7;
  uVar11 = *(undefined8 *)(param_2 + 0x58);
  uVar7 = *(undefined8 *)(param_2 + 0x56);
  uVar13 = *(undefined8 *)(param_2 + 0x5c);
  uVar12 = *(undefined8 *)(param_2 + 0x5a);
  uVar15 = *(undefined8 *)(param_2 + 0x60);
  uVar14 = *(undefined8 *)(param_2 + 0x5e);
  uVar16 = *(undefined8 *)(param_2 + 0x61);
  *(undefined8 *)(param_1 + 99) = *(undefined8 *)(param_2 + 99);
  *(undefined8 *)(param_1 + 0x61) = uVar16;
  *(undefined8 *)(param_1 + 0x5c) = uVar13;
  *(undefined8 *)(param_1 + 0x5a) = uVar12;
  *(undefined8 *)(param_1 + 0x60) = uVar15;
  *(undefined8 *)(param_1 + 0x5e) = uVar14;
  *(undefined8 *)(param_1 + 0x58) = uVar11;
  *(undefined8 *)(param_1 + 0x56) = uVar7;
  FUN_10a22b858(param_1 + 0x66,param_2 + 0x66);
  uVar12 = *(undefined8 *)(param_2 + 0x6a);
  uVar11 = *(undefined8 *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(param_2 + 0x6e);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x6a) = uVar12;
  *(undefined8 *)(param_1 + 0x70) = uVar11;
  *(undefined8 *)(param_1 + 0x6e) = uVar7;
  uVar13 = *(undefined8 *)(param_2 + 0x78);
  uVar12 = *(undefined8 *)(param_2 + 0x76);
  uVar11 = *(undefined8 *)(param_2 + 0x7c);
  uVar7 = *(undefined8 *)(param_2 + 0x7a);
  uVar15 = *(undefined8 *)(param_2 + 0x74);
  uVar14 = *(undefined8 *)(param_2 + 0x72);
  param_1[0x7e] = param_2[0x7e];
  *(undefined8 *)(param_1 + 0x78) = uVar13;
  *(undefined8 *)(param_1 + 0x76) = uVar12;
  *(undefined8 *)(param_1 + 0x7c) = uVar11;
  *(undefined8 *)(param_1 + 0x7a) = uVar7;
  *(undefined8 *)(param_1 + 0x74) = uVar15;
  *(undefined8 *)(param_1 + 0x72) = uVar14;
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x82);
  uVar7 = *(undefined8 *)(param_2 + 0x84);
  *(undefined1 *)(param_1 + 0x86) = *(undefined1 *)(param_2 + 0x86);
  *(undefined8 *)(param_1 + 0x84) = uVar7;
  if (param_1 == param_2) goto LAB_10aced6f0;
  if (*(long *)(param_2 + 0x96) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x96) + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar2 = param_1 + 0x88;
  if (*(long *)(param_1 + 0x96) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x96) + 0x14);
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
      func_0x000109a848d4(puVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x96) = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  if ((int)param_1[0x89] < 1) {
    *puVar2 = param_2[0x88];
LAB_10aced69c:
    if (2 < (int)param_2[0x89]) goto LAB_10aced6d0;
    param_1[0x89] = param_2[0x89];
    *(undefined8 *)(param_1 + 0x8a) = *(undefined8 *)(param_2 + 0x8a);
    puVar8 = *(undefined8 **)(param_2 + 0x9a);
    puVar10 = *(undefined8 **)(param_1 + 0x9a);
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
  }
  else {
    lVar6 = 0;
    lVar9 = *(long *)(param_1 + 0x98);
    do {
      *(undefined4 *)(lVar9 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0x89]);
    *puVar2 = param_2[0x88];
    if ((int)param_1[0x89] < 3) goto LAB_10aced69c;
LAB_10aced6d0:
    func_0x000109a84868(puVar2);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x8e) = *(undefined8 *)(param_2 + 0x8e);
  *(undefined8 *)(param_1 + 0x8c) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x92) = *(undefined8 *)(param_2 + 0x92);
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x96) = *(undefined8 *)(param_2 + 0x96);
  *(undefined8 *)(param_1 + 0x94) = uVar7;
LAB_10aced6f0:
  *(undefined2 *)(param_1 + 0xa0) = *(undefined2 *)(param_2 + 0xa0);
  func_0x00010a3df030(param_1 + 0xa2,param_2 + 0xa2);
  return param_1;
}



/* Entry: 10aced718; end: 10aceda9b;  */

void FUN_10aced718(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  puVar6 = (undefined8 *)0x88;
  __Znwm();
  *puVar6 = FUN_10acf0fd8;
  puVar6[1] = FUN_10acf1264;
  puVar6[0xf] = param_2;
  func_0x0001092ba17c(puVar6 + 2);
  lVar10 = puVar6[7];
  if (lVar10 != 0) {
    plVar7 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar10;
  lVar10 = *param_2;
  puVar6[0xe] = lVar10;
  plVar7 = (long *)(lVar10 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = *plVar7 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0xe] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x10) = 0;
    lVar10 = puVar6[0xe];
    plVar7 = (long *)(lVar10 + 0x10);
    uStack_38 = puVar6[3];
    do {
      lVar12 = *plVar7;
      if (lVar12 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lStack_48 = 0;
          plStack_40 = puVar6;
          func_0x000109d1b588(lVar10 + 0x18,&lStack_48);
          *(undefined8 *)(lVar10 + 0x10) = 0;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar12 >> 1 & 1) == 0);
  }
  lVar10 = puVar6[0xe];
  if (((uint)*(undefined8 *)(puVar6[0xe] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar10 + 0xc0) & 1) != 0) {
      FUN_10a4f0c8c(puVar6 + 9,lVar10 + 0x98);
      plVar7 = (long *)puVar6[0xe];
      if (plVar7 != (long *)0x0) {
        puVar1 = (ulong *)(plVar7 + 1);
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
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      lVar10 = puVar6[0xf];
      ppuVar9 = &PTR_PTR_113306f90;
      FUN_10ae079a0(0,&PTR_PTR_113306f90);
      FUN_10ae07cd4(ppuVar9,&PTR_PTR_113306f90);
      plVar7 = *(long **)(lVar10 + 0x10);
      if ((plVar7 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_40 = plVar7, plVar7 == (long *)0x0)) {
        iVar13 = 0;
      }
      else {
        lVar10 = *(long *)(lVar10 + 8);
        iVar13 = 0;
        lStack_48 = lVar10;
        if (lVar10 != 0) {
          puVar8 = puVar6 + 9;
          FUN_10a4f0ad8();
          if (((ulong)puVar8 & 1) == 0) {
            func_0x0001092ba100(puVar6 + 2);
            iVar13 = 3;
          }
          else {
            FUN_10ace51d0(lVar10,puVar6[0xf] + 0x20,puVar6[0xf] + 0x90,puVar6 + 9);
            iVar13 = 0;
          }
        }
        plVar2 = plVar7 + 1;
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
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = (long *)puVar6[0xd];
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 1;
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
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (*(char *)((long)puVar6 + 0x5f) < '\0') {
        __ZdlPv(puVar6[9]);
      }
      if (iVar13 == 0) {
        func_0x0001092ba100(puVar6 + 2);
      }
      func_0x000109d1a1d0(puVar6 + 2);
      __ZdlPv(puVar6);
      return;
    }
  }
  else {
    func_0x0001092af97c(lVar10 + 0x90);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aced9b8);
  (*pcVar5)();
}



/* Entry: 10aceda9c; end: 10acedacf;  */

undefined * FUN_10aceda9c(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  
  ppuVar6 = &PTR_PTR_113306fc8;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0(0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
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
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10acedad0; end: 10acee02b;  */

void FUN_10acedad0(undefined **param_1,undefined ***param_2,undefined4 param_3,undefined4 *param_4,
                  ulong param_5,long param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined ***pppuVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuStack_4c0;
  undefined ***pppuStack_4b8;
  double dStack_4b0;
  double dStack_4a8;
  double dStack_4a0;
  double dStack_498;
  double dStack_490;
  double dStack_488;
  double dStack_480;
  double dStack_478;
  double dStack_470;
  double dStack_468;
  double dStack_460;
  double dStack_458;
  double dStack_450;
  double dStack_448;
  double dStack_440;
  double dStack_438;
  undefined1 auStack_430 [72];
  double *pdStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined **ppuStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  double *pdStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined **ppuStack_310;
  undefined ***pppuStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined ***pppuStack_2a8;
  undefined8 uStack_2a0;
  undefined **ppuStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  double *pdStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  long *plStack_1f8;
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
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined2 uStack_a8;
  undefined1 uStack_a0;
  long *plStack_98;
  char cStack_90;
  long lStack_78;
  
  pppuVar12 = &ppuStack_4c0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_4c0 = param_1;
  pppuStack_4b8 = param_2;
  if (param_5 != 0) {
    pppuVar15 = &ppuStack_310;
    ppuStack_310 = param_1;
    pppuStack_308 = param_2;
    func_0x0001098b9090(pppuVar15,*param_4);
    if (param_5 != 1) {
      pppuVar9 = &ppuStack_310;
      ppuStack_310 = param_1;
      pppuStack_308 = param_2;
      func_0x00010a289568(pppuVar9,param_4[1]);
      if (2 < param_5) {
        pppuVar10 = &ppuStack_310;
        ppuStack_310 = param_1;
        pppuStack_308 = param_2;
        func_0x00010a4efc70(pppuVar10,param_4[2]);
        if (param_5 != 3) {
          pppuVar11 = &ppuStack_310;
          ppuStack_310 = param_1;
          pppuStack_308 = param_2;
          FUN_10a4fc70c(pppuVar11,param_4[3]);
          if (4 < param_5) {
            FUN_10a26d738(param_2,param_4[4]);
            if ((*pppuVar15 != (undefined **)0x0) && (*pppuVar9 != (undefined **)0x0)) {
              puVar3 = (undefined8 *)0x113302560;
              if (*param_2 != (undefined **)0xffffffffffffffff) {
                puVar3 = (undefined8 *)((long)param_1 + (long)*param_2);
              }
              FUN_10a4ff0c0(&ppuStack_4c0,param_3);
              puVar16 = **pppuVar15;
              ppuVar20 = *pppuVar9;
              ppuVar19 = *pppuVar10;
              ppuVar18 = *pppuVar11;
              uVar17 = *puVar3;
              puVar4 = *(undefined1 **)(param_6 + 0x18);
              pppuVar15 = (undefined ***)**(undefined8 **)(param_6 + 0x10);
              iVar5 = *(int *)((*(undefined8 **)(param_6 + 0x10))[2] + 4);
              param_2 = pppuVar15;
              FUN_10ace2c64(pppuVar15,puVar4 + 8,ppuVar20 + 2);
              if (((int)param_2 == 0) || (*(int *)(pppuVar15 + 0x89) != 1)) {
                ppuVar18 = (undefined **)0x0;
              }
              else {
                ppuVar13 = ppuVar20 + 2;
                FUN_10a0ec6f0(ppuVar13);
                FUN_10a4cac0c(auStack_430,(ulong)ppuVar13 & 0xffffffff);
                ppuStack_310 = (undefined **)0x0;
                uStack_300 = 0;
                uStack_2a0 = 0;
                pppuStack_2a8 = (undefined ***)0x0;
                uStack_2e8 = 0;
                uStack_2f0 = 0;
                uStack_2d8 = 0;
                uStack_2e0 = 0;
                uStack_2c8 = 0;
                uStack_2d0 = 0;
                uStack_2b8 = 0;
                uStack_2c0 = 0;
                uStack_2b0 = 0;
                ppuStack_290 = (undefined **)0x0;
                lStack_288 = 0;
                uStack_280 = 0;
                uStack_278 = 0x3ff0000000000000;
                uStack_270 = 0;
                uStack_268 = 0;
                uStack_260 = 0;
                pdStack_250 = (double *)0x3ff0000000000000;
                uStack_240 = 0;
                uStack_248 = 0;
                uStack_238 = 0;
                uStack_230 = 0x3ff0000000000000;
                uStack_228 = 0;
                uStack_220 = 0;
                uStack_218 = 0;
                uStack_210 = 0x3ff0000000000000;
                plStack_1f8 = (long *)0x0;
                uStack_200 = 0;
                uStack_1e8 = 0;
                uStack_1f0 = 0;
                uStack_1e0 = 0;
                uStack_1d8 = 0x3ff0000000000000;
                uStack_1d0 = 0;
                uStack_1c8 = 0;
                uStack_1c0 = 0;
                uStack_1b8 = 0x3ff0000000000000;
                uStack_1b0 = 0;
                uStack_1a8 = 0;
                uStack_1a0 = 0;
                uStack_190 = 0x3ff0000000000000;
                uStack_180 = 0;
                uStack_188 = 0;
                uStack_178 = 0;
                uStack_170 = 0x3ff0000000000000;
                uStack_168 = 0;
                uStack_160 = 0;
                uStack_158 = 0;
                uStack_150 = 0x3ff0000000000000;
                uStack_140 = 0;
                lStack_130 = 0;
                lStack_138 = 0;
                lStack_120 = 0;
                uStack_128 = 0;
                uStack_110 = 0;
                lStack_118 = 0;
                lStack_100 = 0;
                lStack_108 = 0;
                uStack_f8 = 0;
                uStack_c8 = 0x403e000000000000;
                uStack_c0 = 0x403e000000000000;
                uStack_b8 = 0;
                uStack_a8 = 0;
                uStack_a0 = 0;
                cStack_90 = '\0';
                FUN_10aaafb28(pppuVar15 + 0x14,ppuVar19);
                FUN_10acf7de0(pppuVar15 + 0x27,ppuVar18);
                func_0x00010942bc68(&ppuStack_310,pppuVar15 + 0x14);
                dStack_4b0 = (double)(float)auStack_430._0_8_;
                dStack_4a8 = (double)SUB84(auStack_430._0_8_,4);
                dStack_4a0 = (double)(float)auStack_430._8_8_;
                dStack_498 = (double)SUB84(auStack_430._8_8_,4);
                dStack_490 = (double)(float)auStack_430._16_8_;
                dStack_488 = (double)SUB84(auStack_430._16_8_,4);
                dStack_480 = (double)(float)auStack_430._24_8_;
                dStack_478 = (double)SUB84(auStack_430._24_8_,4);
                dStack_470 = (double)(float)auStack_430._32_8_;
                dStack_468 = (double)SUB84(auStack_430._32_8_,4);
                dStack_460 = (double)(float)auStack_430._40_8_;
                dStack_458 = (double)SUB84(auStack_430._40_8_,4);
                dStack_450 = (double)(float)auStack_430._48_8_;
                dStack_448 = (double)SUB84(auStack_430._48_8_,4);
                dStack_440 = (double)(float)auStack_430._56_8_;
                dStack_438 = (double)SUB84(auStack_430._56_8_,4);
                func_0x00010937fc48(&ppuStack_3a0,&dStack_4b0);
                func_0x00010937fbc4(&pdStack_3e8,&ppuStack_3a0);
                uStack_338 = uStack_3c0;
                uStack_340 = uStack_3c8;
                uStack_328 = uStack_3b0;
                uStack_330 = uStack_3b8;
                uStack_320 = uStack_3a8;
                uStack_358 = uStack_3e0;
                pdStack_360 = pdStack_3e8;
                uStack_348 = uStack_3d0;
                uStack_350 = uStack_3d8;
                lStack_288 = lStack_398;
                ppuStack_290 = ppuStack_3a0;
                uStack_278 = uStack_388;
                uStack_280 = uStack_390;
                uStack_268 = uStack_378;
                uStack_270 = uStack_380;
                uStack_260 = uStack_370;
                uStack_248 = uStack_3e0;
                pdStack_250 = pdStack_3e8;
                uStack_238 = uStack_3d0;
                uStack_240 = uStack_3d8;
                uStack_228 = uStack_3c0;
                uStack_230 = uStack_3c8;
                uStack_218 = uStack_3b0;
                uStack_220 = uStack_3b8;
                uStack_210 = uStack_3a8;
                FUN_10acdd07c(&ppuStack_3a0,ppuVar20 + 2);
                func_0x000109457fd4(&ppuStack_310,&ppuStack_3a0);
                _free(uStack_348);
                ppuStack_310 = (undefined **)((double)(long)puVar16 / 1000000000.0);
                FUN_10acdd1a0(&ppuStack_3a0,*ppuVar20,*(int *)(ppuVar20 + 2) == 0);
                FUN_10acf6838(&dStack_4b0,uVar17);
                FUN_10ace341c(pppuVar15,&ppuStack_3a0,&ppuStack_310,&dStack_4b0,iVar5 == 0);
                pdStack_3e8 = &dStack_4b0;
                FUN_10aceb588(&pdStack_3e8);
                ppuStack_3a0 = &PTR_DAT_110af4b00;
                if (lStack_398 != 0) {
                  __ZdaPv();
                }
                FUN_10ace4884(&ppuStack_3a0,pppuVar15,*puVar4,ppuVar20 + 2,0);
                if ((cStack_90 == '\x01') && (plStack_98 != (long *)0x0)) {
                  plVar1 = plStack_98 + 1;
                  do {
                    lVar14 = *plVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar7) {
                      *plVar1 = lVar14 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar14 == 0) {
                    (**(code **)(*plStack_98 + 0x10))(plStack_98);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_98);
                  }
                }
                if (lStack_108 != 0) {
                  lStack_100 = lStack_108;
                  __ZdlPv();
                }
                if (lStack_120 != 0) {
                  lStack_118 = lStack_120;
                  __ZdlPv();
                }
                if (lStack_138 != 0) {
                  lStack_130 = lStack_138;
                  __ZdlPv();
                }
                plVar1 = plStack_1f8;
                if (plStack_1f8 != (long *)0x0) {
                  plVar2 = plStack_1f8 + 1;
                  do {
                    lVar14 = *plVar2;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar7) {
                      *plVar2 = lVar14 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar14 == 0) {
                    (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
                  }
                }
                param_2 = pppuStack_2a8;
                _free(pppuStack_2a8);
                ppuVar18 = ppuStack_3a0;
              }
              ppuStack_3a0 = (undefined **)0x0;
              ppuVar19 = *pppuVar12;
              *pppuVar12 = ppuVar18;
              if (ppuVar19 != (undefined **)0x0) {
                func_0x00010a502490(pppuVar12);
                ppuVar18 = ppuStack_3a0;
                ppuStack_3a0 = (undefined **)0x0;
                param_2 = pppuVar12;
                if (ppuVar18 != (undefined **)0x0) {
                  param_2 = &ppuStack_3a0;
                  func_0x00010a502490(param_2);
                }
              }
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
              return;
            }
            ___stack_chk_fail();
            func_0x000109458ce0(&ppuStack_310);
            __Unwind_Resume(param_2);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10acedfbc);
  (*pcVar8)();
}



/* Entry: 10acee02c; end: 10acee047;  */

void FUN_10acee02c(void)

{
  return;
}



/* Entry: 10acee048; end: 10acee11b;  */

void FUN_10acee048(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ecb88 = 0x42ff0000;
  uRam00000001137ecb94 = 0;
  uRam00000001137ecb98 = 0;
  uRam00000001137ecb8c = 0;
  uRam00000001137ecba4 = 0;
  uRam00000001137ecb9c = 0;
  uRam00000001137ecba0 = 0;
  uRam00000001137ecbb4 = 0;
  uRam00000001137ecbac = 0;
  uRam00000001137ecbc0 = 0;
  uRam00000001137ecbb8 = 0;
  uRam00000001137ecbbc = 0;
  uRam00000001137ecbd8 = 0;
  uRam00000001137ecbc8 = 0x1137ecb90;
  uRam00000001137ecbd0 = 0x1137ecbd8;
  uRam00000001137ecbe0 = 0;
  uStack_20 = 0x10000000001;
  func_0x000109a83fd0(0x1137ecb88,2,&uStack_20,0);
  uVar3 = 0;
  lVar2 = CONCAT44(uRam00000001137ecb9c,uRam00000001137ecb98);
  do {
    if (uVar3 < 9) {
      uVar4 = (&UNK_10e50ceb2)[uVar3];
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(lVar2 + uVar3) = uVar4;
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0x1137ecbe8;
  uRam00000001137ecbe8 = 0x42ff0000;
  uRam00000001137ecbf4 = 0;
  uRam00000001137ecbf8 = 0;
  uRam00000001137ecbec = 0;
  uRam00000001137ecc04 = 0;
  uRam00000001137ecbfc = 0;
  uRam00000001137ecc00 = 0;
  uRam00000001137ecc14 = 0;
  uRam00000001137ecc0c = 0;
  uRam00000001137ecc20 = 0;
  uRam00000001137ecc18 = 0;
  uRam00000001137ecc1c = 0;
  uRam00000001137ecc38 = 0;
  uRam00000001137ecc28 = 0x1137ecbf0;
  uRam00000001137ecc30 = 0x1137ecc38;
  uRam00000001137ecc40 = 0;
  uStack_50 = 0x10000000001;
  func_0x000109a83fd0(0x1137ecbe8,2,&uStack_50,0);
  uVar3 = 0;
  lVar1 = CONCAT44(uRam00000001137ecbfc,uRam00000001137ecbf8);
  do {
    if (uVar3 < 5) {
      uVar4 = (&UNK_10e50cebb)[uVar3];
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(lVar1 + uVar3) = uVar4;
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(lVar2 + 0x90) == '\x01') {
    func_0x00010a042d30(lVar2 + 0x80);
    func_0x00010a136de4(lVar2);
    *(undefined1 *)(lVar2 + 0x90) = 0;
  }
  return;
}



/* Entry: 10acee11c; end: 10acee22f;  */

void FUN_10acee11c(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0x1137ecbe8;
  uRam00000001137ecbe8 = 0x42ff0000;
  uRam00000001137ecbf4 = 0;
  uRam00000001137ecbf8 = 0;
  uRam00000001137ecbec = 0;
  uRam00000001137ecc04 = 0;
  uRam00000001137ecbfc = 0;
  uRam00000001137ecc00 = 0;
  uRam00000001137ecc14 = 0;
  uRam00000001137ecc0c = 0;
  uRam00000001137ecc20 = 0;
  uRam00000001137ecc18 = 0;
  uRam00000001137ecc1c = 0;
  uRam00000001137ecc38 = 0;
  uRam00000001137ecc28 = 0x1137ecbf0;
  uRam00000001137ecc30 = 0x1137ecc38;
  uRam00000001137ecc40 = 0;
  uStack_30 = 0x10000000001;
  func_0x000109a83fd0(0x1137ecbe8,2,&uStack_30,0);
  uVar3 = 0;
  lVar1 = CONCAT44(uRam00000001137ecbfc,uRam00000001137ecbf8);
  do {
    if (uVar3 < 5) {
      uVar4 = (&UNK_10e50cebb)[uVar3];
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(lVar1 + uVar3) = uVar4;
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x100);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(lVar2 + 0x90) == '\x01') {
    func_0x00010a042d30(lVar2 + 0x80);
    func_0x00010a136de4(lVar2);
    *(undefined1 *)(lVar2 + 0x90) = 0;
  }
  return;
}



/* Entry: 10acee230; end: 10acee347;  */

long FUN_10acee230(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x98) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x60);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 100)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa0);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 100));
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != param_1 + 0xb0 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
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
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10acee348; end: 10acee393;  */

void FUN_10acee348(long param_1,long *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  
  FUN_10a26d738(param_2,param_3);
  puVar1 = (undefined1 *)0x113302568;
  if (*param_2 != -1) {
    puVar1 = (undefined1 *)(param_1 + *param_2);
  }
  *puVar1 = 0;
  puVar1[0x10] = 0;
  return;
}



/* Entry: 10acee394; end: 10acee3af;  */

void FUN_10acee394(void)

{
  return;
}



/* Entry: 10acee3b0; end: 10acee44f;  */

void FUN_10acee3b0(long param_1,long *param_2,undefined4 param_3,undefined4 *param_4,long param_5,
                  long param_6)

{
  code *pcVar1;
  long *plVar2;
  long lStack_48;
  long *plStack_40;
  undefined1 uStack_38;
  
  if (param_5 != 0) {
    plVar2 = &lStack_48;
    lStack_48 = param_1;
    plStack_40 = param_2;
    func_0x0001098b9090(plVar2,*param_4);
    if (*plVar2 != 0) {
      FUN_10a26d738(param_2,param_3);
      plVar2 = (long *)0x113302568;
      if (*param_2 != -1) {
        plVar2 = (long *)(param_1 + *param_2);
      }
      (**(code **)(**(long **)(param_6 + 0x10) + 0x10))(&lStack_48);
      *(undefined1 *)(plVar2 + 2) = uStack_38;
      plVar2[1] = (long)plStack_40;
      *plVar2 = lStack_48;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10acee450);
  (*pcVar1)();
}



/* Entry: 10acee450; end: 10acee473;  */

long FUN_10acee450(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10acee474; end: 10acee4e3;  */

undefined8 * FUN_10acee474(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = param_2;
  _strlen();
  uVar1 = (undefined4)uVar3;
  uVar3 = param_2;
  func_0x00010a107b84();
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 1) = uVar1;
  uVar3 = param_2;
  _strlen();
  iVar2 = (int)uVar3;
  FUN_10a107c14();
  *(int *)((long)param_1 + 0xc) = (int)param_2 * -0x29aff4bf + iVar2 * 0xc0eb86b;
  return param_1;
}



/* Entry: 10acee4e4; end: 10acee687;  */

void FUN_10acee4e4(double param_1,double param_2,undefined4 param_3,undefined4 *param_4,long param_5
                  ,long param_6)

{
  code *pcVar1;
  double *pdVar2;
  double dVar3;
  double *pdVar4;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  undefined7 uStack_38;
  char cStack_31;
  undefined4 uStack_30;
  char cStack_28;
  
  dStack_98 = param_1;
  dStack_90 = param_2;
  if (param_5 != 0) {
    pdVar2 = &dStack_88;
    dStack_88 = param_1;
    dStack_80 = param_2;
    func_0x0001098b9090(pdVar2,*param_4);
    if (*pdVar2 != 0.0) {
      pdVar2 = &dStack_98;
      func_0x00010a4efd18(pdVar2,param_3);
      (**(code **)(**(long **)(param_6 + 0x10) + 0x10))(&dStack_88);
      if ((cStack_28 != '\x01') || ((ABS(dStack_88) <= 1e-06 && (ABS(dStack_80) <= 1e-06)))) {
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f6a2083,&UNK_10f6a2582,0x24,&UNK_10f6a265c);
        }
        pdVar4 = (double *)0x0;
      }
      else {
        pdVar4 = (double *)0x60;
        __Znwm();
        pdVar4[1] = dStack_80;
        *pdVar4 = dStack_88;
        pdVar4[3] = dStack_70;
        pdVar4[2] = dStack_78;
        pdVar4[5] = dStack_60;
        pdVar4[4] = dStack_68;
        pdVar4[7] = dStack_50;
        pdVar4[6] = dStack_58;
        if (cStack_31 < '\0') {
          func_0x000107c3192c(pdVar4 + 8,dStack_48,dStack_40);
        }
        else {
          pdVar4[9] = dStack_40;
          pdVar4[8] = dStack_48;
          pdVar4[10] = (double)CONCAT17(cStack_31,uStack_38);
        }
        *(undefined4 *)(pdVar4 + 0xb) = uStack_30;
      }
      if ((cStack_28 == '\x01') && (cStack_31 < '\0')) {
        __ZdlPv(dStack_48);
      }
      dVar3 = *pdVar2;
      *pdVar2 = (double)pdVar4;
      if (dVar3 != 0.0) {
        func_0x00010a502728(pdVar2);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10acee650);
  (*pcVar1)();
}



/* Entry: 10acee688; end: 10acee6ab;  */

long FUN_10acee688(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10acee6ac; end: 10acee6eb;  */

undefined8 * FUN_10acee6ac(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_10acee6ec();
  return param_1;
}



/* Entry: 10acee6ec; end: 10acee7bb;  */

long * FUN_10acee6ec(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    FUN_10a4f8664(*param_1,param_1[2],param_1[3]);
  }
  lVar1 = *(long *)(param_2 + 0x10);
  param_1[3] = *(long *)(param_2 + 0x18);
  param_1[2] = lVar1;
  func_0x00010acee740(param_1,param_2);
  FUN_10acee7bc(*param_1,param_1[2],param_1[3]);
  return param_1;
}



/* Entry: 10acee7bc; end: 10acee827;  */

void FUN_10acee7bc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uStack_30;
  ulong uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  func_0x00010a3c4fb0(param_1 + 0x18,&uStack_30);
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (*(ulong *)(param_1 + 0x30) <= uStack_28) {
    uVar1 = uStack_28;
  }
  *(ulong *)(param_1 + 0x30) = uVar1;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x38);
  return;
}



/* Entry: 10acee828; end: 10aceead7;  */

void FUN_10acee828(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  float *pfVar6;
  long lVar7;
  undefined8 uVar8;
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
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar5 = &lStack_40;
  lStack_40 = param_1;
  uStack_38 = param_2;
  if (param_5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10aceead8);
    (*pcVar3)();
  }
  plVar4 = &lStack_30;
  lStack_30 = param_1;
  uStack_28 = param_2;
  FUN_10aceead8(plVar4,*param_4);
  if (*plVar4 != 0) {
    FUN_10a4efbc8(&lStack_40,param_3);
    pfVar6 = (float *)0x30;
    __Znwm();
    lVar7 = *plVar4;
    fVar9 = *(float *)(lVar7 + 8);
    fVar10 = *(float *)(lVar7 + 0xc);
    fVar12 = *(float *)(lVar7 + 0x10);
    fVar14 = *(float *)(lVar7 + 0x14);
    fVar15 = (fVar10 * fVar10 + fVar12 * fVar12) * -2.0 + 1.0;
    fVar22 = fVar9 * fVar10 + fVar12 * fVar14;
    fVar22 = fVar22 + fVar22;
    fVar23 = fVar9 * fVar12 - fVar10 * fVar14;
    fVar23 = fVar23 + fVar23;
    fVar13 = fVar9 * fVar10 - fVar12 * fVar14;
    fVar13 = fVar13 + fVar13;
    fVar16 = (fVar9 * fVar9 + fVar12 * fVar12) * -2.0 + 1.0;
    fVar19 = fVar10 * fVar12 + fVar9 * fVar14;
    fVar19 = fVar19 + fVar19;
    fVar18 = fVar9 * fVar12 + fVar10 * fVar14;
    fVar18 = fVar18 + fVar18;
    fVar20 = fVar10 * fVar12 - fVar9 * fVar14;
    fVar20 = fVar20 + fVar20;
    fVar14 = (fVar9 * fVar9 + fVar10 * fVar10) * -2.0 + 1.0;
    fVar11 = (fVar15 - fVar16) - fVar14;
    fVar10 = (fVar16 - fVar15) - fVar14;
    fVar9 = (fVar14 - fVar15) - fVar16;
    fVar14 = fVar14 + fVar15 + fVar16;
    fVar12 = fVar11;
    if (fVar11 <= fVar14) {
      fVar12 = fVar14;
    }
    bVar1 = 2;
    if (fVar10 <= fVar12) {
      fVar10 = fVar12;
      bVar1 = fVar14 < fVar11;
    }
    bVar2 = 3;
    if (fVar9 <= fVar10) {
      fVar9 = fVar10;
      bVar2 = bVar1;
    }
    fVar16 = SQRT(fVar9 + 1.0) * 0.5;
    fVar15 = 0.25 / fVar16;
    fVar11 = (fVar23 - fVar18) * fVar15;
    fVar17 = (fVar13 + fVar22) * fVar15;
    fVar21 = (fVar20 + fVar19) * fVar15;
    fVar14 = (fVar13 - fVar22) * fVar15;
    fVar18 = (fVar18 + fVar23) * fVar15;
    fVar13 = fVar11;
    fVar9 = fVar21;
    fVar10 = fVar16;
    fVar12 = fVar17;
    if (bVar2 != 2) {
      fVar13 = fVar14;
      fVar9 = fVar16;
      fVar10 = fVar21;
      fVar12 = fVar18;
    }
    fVar15 = (fVar20 - fVar19) * fVar15;
    fVar19 = fVar16;
    if (bVar2 != 0) {
      fVar19 = fVar15;
      fVar14 = fVar18;
      fVar11 = fVar17;
      fVar15 = fVar16;
    }
    if (bVar2 < 2) {
      fVar13 = fVar19;
      fVar9 = fVar14;
      fVar10 = fVar11;
      fVar12 = fVar15;
    }
    fVar14 = ((fVar12 * -0.70710677 + fVar13 * 0.70710677) - fVar10 * 0.0) - fVar9 * 0.0;
    fVar11 = (fVar12 * 0.70710677 + fVar13 * 0.70710677 + fVar10 * 0.0) - fVar9 * 0.0;
    fVar15 = (fVar10 * 0.70710677 + fVar13 * 0.0 + fVar9 * 0.70710677) - fVar12 * 0.0;
    fVar9 = fVar9 * 0.70710677 + fVar13 * 0.0 + fVar12 * 0.0 + fVar10 * -0.70710677;
    fVar10 = fVar11 * fVar15 + fVar9 * fVar14;
    *pfVar6 = (fVar15 * fVar15 + fVar9 * fVar9) * -2.0 + 1.0;
    pfVar6[1] = fVar10 + fVar10;
    fVar12 = fVar11 * fVar9 - fVar15 * fVar14;
    fVar10 = fVar11 * fVar15 - fVar9 * fVar14;
    pfVar6[2] = fVar12 + fVar12;
    pfVar6[3] = fVar10 + fVar10;
    fVar10 = fVar15 * fVar9 + fVar11 * fVar14;
    pfVar6[4] = (fVar11 * fVar11 + fVar9 * fVar9) * -2.0 + 1.0;
    pfVar6[5] = fVar10 + fVar10;
    fVar10 = fVar11 * fVar9 + fVar15 * fVar14;
    fVar9 = fVar15 * fVar9 - fVar11 * fVar14;
    pfVar6[6] = fVar10 + fVar10;
    pfVar6[7] = fVar9 + fVar9;
    pfVar6[8] = (fVar11 * fVar11 + fVar15 * fVar15) * -2.0 + 1.0;
    uVar8 = *(undefined8 *)(lVar7 + 0x18);
    pfVar6[0xb] = *(float *)(lVar7 + 0x20);
    *(undefined8 *)(pfVar6 + 9) = uVar8;
    lVar7 = *plVar5;
    *plVar5 = (long)pfVar6;
    if (lVar7 != 0) {
      __ZdlPv(lVar7);
    }
  }
  return;
}



/* Entry: 10aceead8; end: 10aceeb7b;  */

long FUN_10aceead8(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam00000001137ecb30 & 1) == 0) {
    iVar1 = 0x137ecb30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(FUN_10aceeb7c,0x1137ecb28,0x100000000);
      ___cxa_guard_release(0x1137ecb30);
    }
  }
  plVar2 = (long *)param_1[1];
  FUN_10a26d738(plVar2,param_2);
  if (*plVar2 == -1) {
    lVar3 = 0x1137ecb28;
  }
  else {
    lVar3 = *param_1 + *plVar2;
  }
  return lVar3;
}



/* Entry: 10aceeb7c; end: 10aceebab;  */

long * FUN_10aceeb7c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aceebac; end: 10aceebc7;  */

void FUN_10aceebac(void)

{
  return;
}



/* Entry: 10aceebc8; end: 10aceec07;  */

void FUN_10aceebc8(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_20;
  undefined8 uStack_18;
  
  plVar1 = &lStack_20;
  lStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010a4efc70(&lStack_20,param_3);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10aceec08; end: 10aceec23;  */

void FUN_10aceec08(void)

{
  return;
}



/* Entry: 10aceec24; end: 10aceef3f;  */

void FUN_10aceec24(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [64];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long alStack_90 [8];
  
  plVar3 = &lStack_120;
  lStack_120 = param_1;
  uStack_118 = param_2;
  if (param_5 == 0) {
LAB_10aceef10:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aceef14);
    (*pcVar1)();
  }
  plVar6 = alStack_90;
  alStack_90[0] = param_1;
  alStack_90[1] = param_2;
  func_0x00010a4efc70(plVar6,*param_4);
  if (param_5 == 1) goto LAB_10aceef10;
  plVar2 = alStack_90;
  alStack_90[0] = param_1;
  alStack_90[1] = param_2;
  func_0x00010a4efc70(plVar2,param_4[1]);
  func_0x00010a4efc70(&lStack_120,param_3);
  lVar10 = *(long *)(param_6 + 0x10);
  puVar11 = (undefined8 *)*plVar6;
  if (puVar11 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0xcc;
    __Znwm();
    uVar12 = *puVar11;
    puVar4[1] = puVar11[1];
    *puVar4 = uVar12;
    uVar12 = puVar11[6];
    uVar14 = puVar11[9];
    uVar13 = puVar11[8];
    uVar18 = puVar11[3];
    uVar17 = puVar11[2];
    uVar16 = puVar11[5];
    uVar15 = puVar11[4];
    puVar4[7] = puVar11[7];
    puVar4[6] = uVar12;
    puVar4[9] = uVar14;
    puVar4[8] = uVar13;
    puVar4[3] = uVar18;
    puVar4[2] = uVar17;
    puVar4[5] = uVar16;
    puVar4[4] = uVar15;
    uVar12 = puVar11[0xe];
    uVar14 = puVar11[0x11];
    uVar13 = puVar11[0x10];
    uVar18 = puVar11[0xb];
    uVar17 = puVar11[10];
    uVar16 = puVar11[0xd];
    uVar15 = puVar11[0xc];
    puVar4[0xf] = puVar11[0xf];
    puVar4[0xe] = uVar12;
    puVar4[0x11] = uVar14;
    puVar4[0x10] = uVar13;
    puVar4[0xb] = uVar18;
    puVar4[10] = uVar17;
    puVar4[0xd] = uVar16;
    puVar4[0xc] = uVar15;
    uVar16 = puVar11[0x15];
    uVar15 = puVar11[0x14];
    uVar13 = puVar11[0x17];
    uVar12 = puVar11[0x16];
    uVar14 = *(undefined8 *)((long)puVar11 + 0xbc);
    uVar18 = puVar11[0x13];
    uVar17 = puVar11[0x12];
    *(undefined8 *)((long)puVar4 + 0xc4) = *(undefined8 *)((long)puVar11 + 0xc4);
    *(undefined8 *)((long)puVar4 + 0xbc) = uVar14;
    puVar4[0x15] = uVar16;
    puVar4[0x14] = uVar15;
    puVar4[0x17] = uVar13;
    puVar4[0x16] = uVar12;
    puVar4[0x13] = uVar18;
    puVar4[0x12] = uVar17;
  }
  uStack_d0 = 0x3f800000;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_bc = 0x3f800000;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0x3f800000;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_94 = 0x3f800000;
  if (puVar4 != (undefined8 *)0x0) {
    uStack_b8 = puVar4[4];
    uStack_c8 = (undefined4)puVar4[2];
    uStack_c4 = (undefined4)((ulong)puVar4[2] >> 0x20);
    uStack_d0 = (undefined4)puVar4[1];
    uStack_cc = (undefined4)((ulong)puVar4[1] >> 0x20);
    uStack_c0 = (undefined4)puVar4[3];
    uStack_bc = (undefined4)((ulong)puVar4[3] >> 0x20);
    uStack_b0 = puVar4[5];
    uStack_a8 = (undefined4)puVar4[6];
    uStack_a4 = (undefined4)((ulong)puVar4[6] >> 0x20);
    uStack_98 = (undefined4)puVar4[8];
    uStack_94 = (undefined4)((ulong)puVar4[8] >> 0x20);
    uStack_a0 = (undefined4)puVar4[7];
    uStack_9c = (undefined4)((ulong)puVar4[7] >> 0x20);
    func_0x000109519fd0(alStack_90,lVar10 + 0x24,&uStack_d0);
    puVar4[2] = alStack_90[1];
    puVar4[1] = alStack_90[0];
    puVar4[4] = alStack_90[3];
    puVar4[3] = alStack_90[2];
    puVar4[6] = alStack_90[5];
    puVar4[5] = alStack_90[4];
    puVar4[8] = alStack_90[7];
    puVar4[7] = alStack_90[6];
  }
  if ((*(byte *)(lVar10 + 0x20) & 1) == 0) {
    lVar8 = *plVar6;
    if (lVar8 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = *(long **)(lVar10 + 8);
      if (plVar6 != (long *)0x0) {
        lVar7 = 0;
        uVar9 = 0;
        do {
          puVar11 = (undefined8 *)
                    (lVar8 + 8 +
                    (-(uVar9 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar9 & 0xffffffff) << 2));
          uVar12 = *puVar11;
          *(undefined8 *)((long)alStack_90 + lVar7 + 8) = puVar11[1];
          *(undefined8 *)((long)alStack_90 + lVar7) = uVar12;
          uVar9 = (long)(int)uVar9 + 4;
          lVar7 = lVar7 + 0x10;
        } while (lVar7 != 0x40);
        (**(code **)(*plVar6 + 0x38))(plVar6,alStack_90);
      }
    }
    *(char *)(lVar10 + 0x20) = (char)plVar6;
    if (puVar4 == (undefined8 *)0x0) goto LAB_10aceeee4;
  }
  else {
    puVar11 = (undefined8 *)*plVar2;
    if (puVar11 == (undefined8 *)0x0) {
      *(undefined1 *)(lVar10 + 0x20) = 0;
      if (*(long **)(lVar10 + 8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar10 + 8) + 0x20))();
      }
      puVar5 = puVar4;
      if (puVar4 == (undefined8 *)0x0) goto LAB_10aceeee4;
    }
    else {
      puVar5 = (undefined8 *)0xcc;
      __Znwm();
      uVar12 = *puVar11;
      puVar5[1] = puVar11[1];
      *puVar5 = uVar12;
      uVar13 = puVar11[3];
      uVar12 = puVar11[2];
      uVar15 = puVar11[5];
      uVar14 = puVar11[4];
      uVar16 = puVar11[6];
      uVar18 = puVar11[9];
      uVar17 = puVar11[8];
      puVar5[7] = puVar11[7];
      puVar5[6] = uVar16;
      puVar5[9] = uVar18;
      puVar5[8] = uVar17;
      puVar5[3] = uVar13;
      puVar5[2] = uVar12;
      puVar5[5] = uVar15;
      puVar5[4] = uVar14;
      uVar13 = puVar11[0xb];
      uVar12 = puVar11[10];
      uVar15 = puVar11[0xd];
      uVar14 = puVar11[0xc];
      uVar16 = puVar11[0xe];
      uVar18 = puVar11[0x11];
      uVar17 = puVar11[0x10];
      puVar5[0xf] = puVar11[0xf];
      puVar5[0xe] = uVar16;
      puVar5[0x11] = uVar18;
      puVar5[0x10] = uVar17;
      puVar5[0xb] = uVar13;
      puVar5[10] = uVar12;
      puVar5[0xd] = uVar15;
      puVar5[0xc] = uVar14;
      uVar13 = puVar11[0x13];
      uVar12 = puVar11[0x12];
      uVar15 = puVar11[0x15];
      uVar14 = puVar11[0x14];
      uVar17 = puVar11[0x17];
      uVar16 = puVar11[0x16];
      uVar18 = *(undefined8 *)((long)puVar11 + 0xbc);
      *(undefined8 *)((long)puVar5 + 0xc4) = *(undefined8 *)((long)puVar11 + 0xc4);
      *(undefined8 *)((long)puVar5 + 0xbc) = uVar18;
      puVar5[0x15] = uVar15;
      puVar5[0x14] = uVar14;
      puVar5[0x17] = uVar17;
      puVar5[0x16] = uVar16;
      puVar5[0x13] = uVar13;
      puVar5[0x12] = uVar12;
      if (puVar4 != (undefined8 *)0x0) {
        __ZdlPv(puVar4);
      }
    }
    puVar4 = puVar5;
    if (*(char *)(lVar10 + 0x20) == '\x01') {
      func_0x0001094f5708(auStack_110,&uStack_d0);
      func_0x000109519fd0(alStack_90,puVar5 + 1,auStack_110);
      *(long *)(lVar10 + 0x2c) = alStack_90[1];
      *(long *)(lVar10 + 0x24) = alStack_90[0];
      *(long *)(lVar10 + 0x3c) = alStack_90[3];
      *(long *)(lVar10 + 0x34) = alStack_90[2];
      *(long *)(lVar10 + 0x4c) = alStack_90[5];
      *(long *)(lVar10 + 0x44) = alStack_90[4];
      *(long *)(lVar10 + 0x5c) = alStack_90[7];
      *(long *)(lVar10 + 0x54) = alStack_90[6];
    }
    else {
      func_0x000109519fd0(alStack_90,lVar10 + 0x24,&uStack_d0);
      puVar5[8] = alStack_90[7];
      puVar5[7] = alStack_90[6];
      puVar5[6] = alStack_90[5];
      puVar5[5] = alStack_90[4];
      puVar5[4] = alStack_90[3];
      puVar5[3] = alStack_90[2];
      puVar5[2] = alStack_90[1];
      puVar5[1] = alStack_90[0];
    }
  }
  if (*(char *)(lVar10 + 0x21) == '\x01') {
    *(int *)(puVar4 + 0x19) = *(int *)(puVar4 + 0x19) + 1;
  }
LAB_10aceeee4:
  lVar10 = *plVar3;
  *plVar3 = (long)puVar4;
  if (lVar10 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10aceef40; end: 10aceef5b;  */

void FUN_10aceef40(void)

{
  return;
}



/* Entry: 10aceef5c; end: 10aceeff7;  */

void FUN_10aceef5c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a5046d8(lVar1 + 0x10,0);
    FUN_10a22ffb4(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aceeff8; end: 10acef01f;  */

void FUN_10aceeff8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000109431a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10acef020; end: 10acef077;  */

long FUN_10acef020(long param_1)

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



/* Entry: 10acef078; end: 10acef07b;  */

void FUN_10acef078(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10acef07c; end: 10acef08f;  */

void FUN_10acef07c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acef090; end: 10acef0a7;  */

void FUN_10acef090(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010acef0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    return;
  }
  return;
}



/* Entry: 10acef0a8; end: 10acef0df;  */

undefined8 FUN_10acef0a8(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c6d380);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10acef0e0; end: 10acef0e3;  */

void FUN_10acef0e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acef0e4; end: 10acef157;  */

void FUN_10acef0e4(undefined8 *param_1,undefined8 param_2,int param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10acef158);
  (*pcVar1)();
}



/* Entry: 10acef158; end: 10acef187;  */

void FUN_10acef158(long *param_1,ulong param_2,int param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar5 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar5) {
    if (param_2 < uVar5) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    return;
  }
  param_2 = param_2 - uVar5;
  lVar8 = param_1[1];
  if ((ulong)(param_1[2] - lVar8 >> 3) < param_2) {
    lVar8 = lVar8 - *param_1;
    uVar5 = param_2 + (lVar8 >> 3);
    if (uVar5 >> 0x3d != 0) {
      FUN_10a94fa30();
      if (param_1[2] != param_1[3]) {
        pcStack_48 = FUN_10acef284;
        aiStack_60[0] = 3;
        puStack_58 = (undefined8 *)(double)param_3;
        puStack_50 = &stack0xfffffffffffffff0;
        FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_60);
        if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
          (**(code **)*puStack_58)();
        }
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10acef2f8);
      (*pcVar1)();
    }
    uVar4 = param_1[2] - *param_1;
    uVar6 = (long)uVar4 >> 2;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a94fa44();
    }
    lVar8 = (long)plVar2 + lVar8;
    _bzero(lVar8,param_2 * 8);
    lVar7 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lVar3 = *param_1;
    *param_1 = lVar7;
    param_1[1] = lVar8 + param_2 * 8;
    param_1[2] = (long)(plVar2 + uVar6);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    if (param_2 != 0) {
      _bzero(lVar8,param_2 * 8);
      lVar8 = lVar8 + param_2 * 8;
    }
    param_1[1] = lVar8;
  }
  return;
}



/* Entry: 10acef188; end: 10acef283;  */

void FUN_10acef188(long *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int aiStack_60 [2];
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  lVar8 = param_1[1];
  if ((ulong)(param_1[2] - lVar8 >> 3) < param_2) {
    lVar8 = lVar8 - *param_1;
    uVar1 = param_2 + (lVar8 >> 3);
    if (uVar1 >> 0x3d != 0) {
      FUN_10a94fa30();
      if (param_1[2] != param_1[3]) {
        pcStack_48 = FUN_10acef284;
        aiStack_60[0] = 3;
        puStack_58 = (undefined8 *)(double)param_3;
        puStack_50 = &stack0xfffffffffffffff0;
        FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_60);
        if ((3 < aiStack_60[0]) && (puStack_58 != (undefined8 *)0x0)) {
          (**(code **)*puStack_58)();
        }
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10acef2f8);
      (*pcVar2)();
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a94fa44();
    }
    lVar8 = (long)plVar3 + lVar8;
    _bzero(lVar8,param_2 << 3);
    lVar7 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lVar4 = *param_1;
    *param_1 = lVar7;
    param_1[1] = lVar8 + param_2 * 8;
    param_1[2] = (long)(plVar3 + uVar6);
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    if (param_2 != 0) {
      _bzero(lVar8,param_2 << 3);
      lVar8 = lVar8 + param_2 * 8;
    }
    param_1[1] = lVar8;
  }
  return;
}



/* Entry: 10acef284; end: 10acef2f7;  */

void FUN_10acef284(undefined8 *param_1,undefined8 param_2,int param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10acef2f8);
  (*pcVar1)();
}



/* Entry: 10acef2f8; end: 10acef39b;  */

undefined8 * FUN_10acef2f8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_28;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    uStack_28 = *param_1;
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_28);
  }
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 5) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10acef35c;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10acef35c:
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1 + 1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10acef39c; end: 10acef3eb;  */

void FUN_10acef39c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = 0x4c0;
  __Znwm();
  FUN_10acef3ec();
  lVar6 = lVar4 + 0x20;
  *param_1 = lVar6;
  param_1[1] = lVar4;
  if ((lVar6 != 0) &&
     ((lVar5 = *(long *)(lVar4 + 0x28), lVar5 == 0 || (*(long *)(lVar5 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = *(long *)(lVar4 + 0x28);
    }
    *(long *)lVar6 = lVar6;
    *(long **)(lVar4 + 0x28) = plVar7;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10acef3ec; end: 10acef43f;  */

undefined8 * FUN_10acef3ec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c6d3a0;
  _bzero(param_1 + 4,0x4a0);
  FUN_10acef574(param_1 + 4);
  return param_1;
}



/* Entry: 10acef440; end: 10acef44f;  */

void FUN_10acef440(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6d3a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10acef450; end: 10acef46f;  */

void FUN_10acef450(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6d3a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acef470; end: 10acef56f;  */

void FUN_10acef470(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x4b8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  (*(code *)**(undefined8 **)(param_1 + 0x478))(param_1 + 0x478);
  plVar4 = *(long **)(param_1 + 0x460);
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
  FUN_10a4feea0(param_1 + 0x1c8);
  func_0x00010a1bb0e8(param_1 + 0x1b0);
  if (*(long *)(param_1 + 0x188) != 0) {
    *(long *)(param_1 + 400) = *(long *)(param_1 + 0x188);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x170);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x158);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_10acef2f8(param_1 + 0x70);
  }
  FUN_10a235538(param_1 + 0x58);
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10acef570; end: 10acef573;  */

void FUN_10acef570(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10acef574; end: 10acef823;  */

long * FUN_10acef574(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *in_x4;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined4 auStack_d0 [2];
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  plVar3 = &lStack_f0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  auStack_d0[0] = 1;
  uStack_c8 = 0;
  uStack_b8 = 3;
  uStack_b0 = 1000;
  uStack_a0 = 3;
  uStack_98 = 2000;
  uStack_88 = 1;
  uStack_80 = 4000;
  uStack_70 = 1;
  uStack_68 = 8000;
  uStack_58 = 1;
  uStack_50 = 16000;
  uStack_40 = 1;
  uStack_38 = 20000;
  lStack_f0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  plVar4 = (long *)auStack_d0;
  plVar5 = &lStack_28;
  FUN_10a504768();
  param_1[2] = 0;
  param_1[4] = lStack_e8;
  param_1[3] = lStack_f0;
  param_1[5] = lStack_e0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0x3ff0000000000000;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0x3ff0000000000000;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0x3ff0000000000000;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x35) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  *(undefined8 *)((long)param_1 + 0x1cc) = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = (long)(param_1 + 0x36);
  param_1[0x3e] = (long)(param_1 + 0x3f);
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x49] = (long)(param_1 + 0x42);
  param_1[0x4a] = (long)(param_1 + 0x4b);
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0x42ff0000;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((long)param_1 + 0x284) = 0;
  *(undefined8 *)((long)param_1 + 0x27c) = 0;
  *(undefined8 *)((long)param_1 + 0x294) = 0;
  *(undefined8 *)((long)param_1 + 0x28c) = 0;
  *(undefined8 *)((long)param_1 + 0x274) = 0;
  *(undefined8 *)((long)param_1 + 0x26c) = 0;
  param_1[0x55] = (long)(param_1 + 0x4e);
  param_1[0x56] = (long)(param_1 + 0x57);
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  auVar8 = NEON_fmov(0xbf800000,4);
  *(long *)((long)param_1 + 0x2e4) = auVar8._8_8_;
  *(long *)((long)param_1 + 0x2dc) = auVar8._0_8_;
  *(undefined4 *)((long)param_1 + 0x2ec) = 0x7fc00000;
  param_1[0x5e] = 0x3f8000007fc00000;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 0x30c) = 0;
  *(undefined4 *)((long)param_1 + 0x31c) = 0x3f800000;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x66] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined1 *)((long)param_1 + 0x394) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined1 *)((long)param_1 + 0x39c) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[0x75] = (long)&PTR_DAT_110ba5598;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x79) = 0x42ff0000;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  *(undefined8 *)((long)param_1 + 0x3d4) = 0;
  *(undefined8 *)((long)param_1 + 0x3cc) = 0;
  param_1[0x81] = (long)(param_1 + 0x7a);
  param_1[0x82] = (long)(param_1 + 0x83);
  *(undefined2 *)(param_1 + 0x85) = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x8a] = (long)FUN_10acef824;
  param_1[0x8b] = (long)&PTR_DAT_110950c70;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_1[1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __Unwind_Resume(plVar3);
  func_0x000105277f8c();
  plVar3 = in_x4;
  if ((plVar4 != (long *)0x0) &&
     ((plVar3 = (long *)plVar4[1], plVar3 == (long *)0x0 || (plVar3[1] == -1)))) {
    plVar7 = (long *)in_x4[1];
    if (plVar7 != (long *)0x0) {
      plVar3 = plVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = plVar7 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = (long *)plVar4[1];
    }
    *plVar4 = (long)plVar5;
    plVar4[1] = (long)plVar7;
    if (plVar3 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar4 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return plVar7;
      }
    }
  }
  return plVar3;
}



/* Entry: 10acef824; end: 10acef833;  */

void FUN_10acef824(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x000105277f8c();
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_5 + 8);
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



/* Entry: 10acef834; end: 10acef8e3;  */

void FUN_10acef834(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10acef8e4; end: 10acef96b;  */

long FUN_10acef8e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10acef96c();
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0x3f800000;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0x3f800000;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0x3f8000003f800000;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0x3f80000000000000;
  *(undefined8 *)(lVar1 + 0x70) = 0x3f80000000000000;
  FUN_10acef9b8();
  return param_1;
}



/* Entry: 10acef96c; end: 10acef9b7;  */

undefined8 * FUN_10acef96c(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_10acef9b8();
  return param_1;
}



/* Entry: 10acef9b8; end: 10acefa0b;  */

void FUN_10acef9b8(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110af58d8;
  puVar1[1] = 0;
  plVar2 = (long *)*param_1;
  *param_1 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010acef9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 10acefa0c; end: 10acefaf7;  */

void FUN_10acefa0c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  
  plVar2 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  uVar5 = *(undefined8 *)(param_5 + 0x10);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10ace6034(uVar5,param_1);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar2);
      return;
    }
  }
  return;
}



/* Entry: 10acefaf8; end: 10acefb2b;  */

void FUN_10acefaf8(void)

{
  return;
}



/* Entry: 10acefb2c; end: 10acefb67;  */

void FUN_10acefb2c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10a50e7bc(param_2 + 0x20);
    if (*(long *)(param_2 + 0x10) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10acefb68; end: 10acefbbf;  */

void FUN_10acefb68(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x90;
  __Znwm();
  FUN_10acefbc0();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10acefbc0; end: 10acefc0b;  */

undefined8 * FUN_10acefbc0(undefined8 *param_1,undefined8 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c6d410;
  FUN_10acefc8c(param_1 + 3,*param_2);
  return param_1;
}



/* Entry: 10acefc0c; end: 10acefc1b;  */

void FUN_10acefc0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c6d410;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


