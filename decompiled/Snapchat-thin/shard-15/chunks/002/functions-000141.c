/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b904718; end: 10b904867;  */

long * FUN_10b904718(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b906d7c();
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x188))(plVar1,param_2 + 8);
  if (((ulong)plVar1 & 1) != 0) {
    return (long *)0x1;
  }
  plVar1 = *(long **)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010b904768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x180))(plVar1,unaff_x19 + 8);
  return plVar1;
}



/* Entry: 10b904868; end: 10b904953;  */

void FUN_10b904868(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *extraout_x8;
  int extraout_w10;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  
  func_0x00010b906d44();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  FUN_10b9a3a64(&stack0x00000008,param_4);
  FUN_10b9031b8(param_5);
  puVar4 = (undefined8 *)0x88;
  __Znwm();
  plVar6 = puVar4 + 1;
  *plVar6 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110d749a8;
  puVar1 = puVar4 + 3;
  func_0x00010b8e00ac(puVar1,uVar5,param_2 + 8,&stack0x00000008,param_3,param_5);
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    in_stack_00000020 = puVar1;
    in_stack_00000028 = puVar4;
    func_0x000107c278e4(puVar4 + 4,&stack0x00000020);
    func_0x000107c284e8(&stack0x00000020);
    if (puVar4[5] == 0) goto LAB_10b90493c;
  }
  do {
    func_0x00010b906c70();
  } while (extraout_w10 != 0);
LAB_10b90493c:
  *extraout_x8 = (long)puVar1;
  func_0x00010b8e0784(puVar1);
  func_0x00010b906d30();
  return;
}



/* Entry: 10b904954; end: 10b904a2f;  */

void FUN_10b904954(void)

{
  long extraout_x8;
  
  func_0x00010b906978();
  func_0x00010b906d70();
                    /* WARNING: Could not recover jumptable at 0x00010b904988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(extraout_x8 + 0x138))();
  return;
}



/* Entry: 10b904a30; end: 10b904ae7;  */

undefined *
FUN_10b904a30(undefined *param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5,
             long param_6)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  long *plVar11;
  undefined8 extraout_x8;
  undefined8 *puVar12;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  long alStack_408 [10];
  undefined8 uStack_3b8;
  undefined *apuStack_350 [4];
  undefined8 uStack_330;
  undefined **ppuStack_328;
  undefined8 uStack_320;
  undefined1 *puStack_318;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [32];
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [8];
  undefined *apuStack_240 [3];
  undefined1 auStack_228 [8];
  undefined *apuStack_220 [3];
  undefined1 auStack_208 [8];
  undefined *apuStack_200 [3];
  long alStack_1e8 [4];
  undefined8 uStack_1c8;
  undefined1 auStack_148 [32];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_f8;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_48;
  
  lVar13 = param_2;
  func_0x00010b90699c();
  uVar14 = *(undefined8 *)(lVar13 + 0x10);
  uStack_48 = extraout_x8_01;
  func_0x00010b906a08();
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = uVar14;
  lStack_60 = lVar13;
  func_0x00010b906a40(&uStack_78);
  func_0x00010b906d1c(auStack_98,*(undefined8 *)(param_2 + 0x10),param_3 + 8);
  lVar13 = *(long *)(param_2 + 0x10);
  func_0x00010b906b70();
  func_0x00010b906af4();
  puVar7 = auStack_90;
  (**(code **)(extraout_x8_02 + 0x148))();
  puVar19 = param_1;
  func_0x00010b906d3c();
  func_0x00010b90694c(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar6 = lVar13;
  func_0x00010b90699c();
  uVar14 = *(undefined8 *)(lVar6 + 0x10);
  uStack_f8 = extraout_x8_04;
  func_0x00010b906a00();
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_128 = uVar14;
  lStack_110 = lVar6;
  func_0x00010b906a40(&uStack_128);
  func_0x00010b906d1c(auStack_148,*(undefined8 *)(lVar13 + 0x10),puVar7 + 8);
  puVar7 = auStack_148;
  func_0x00010b90498c(extraout_x8_03);
  func_0x00010b906d3c();
  func_0x00010b90694c(uStack_f8);
  if ((bool)in_ZR) {
    return puVar19;
  }
  ___stack_chk_fail();
  ppuVar9 = apuStack_350;
  lVar6 = lVar13;
  func_0x00010b90699c();
  uStack_1c8 = extraout_x8_05;
  if ((bRam00000001137fd0a8 & 1) == 0) {
    lVar6 = 0x1137fd0a8;
    ___cxa_guard_acquire();
    if ((int)lVar6 != 0) {
      func_0x000107c31088(0x1137fd0a0,&UNK_10f7cccd8);
      lVar6 = 0x1137fd0a8;
      ___cxa_guard_release(0x1137fd0a8);
    }
  }
  ppuVar17 = *(undefined ***)(lVar13 + 0x10);
  func_0x00010b906a20();
  ppuVar8 = (undefined **)0x1137fd0a0;
  func_0x00010b8dbf98(alStack_1e8,ppuVar17,0x1137fd0a0,lVar6);
  if ((*(byte *)(param_6 + 8) & 1) == 0) {
    func_0x00010b90692c();
  }
  else {
    puStack_300 = &UNK_10f7ccce5;
    uStack_2f8 = 5;
    func_0x00010b906a20();
    func_0x00010b906c40(auStack_208);
    if ((*(byte *)(param_6 + 8) & 1) == 0) {
      func_0x00010b90692c();
    }
    else {
      puStack_300 = &UNK_10f7ccceb;
      uStack_2f8 = 9;
      func_0x00010b906a20();
      func_0x00010b906c40(auStack_228);
      if ((*(byte *)(param_6 + 8) & 1) != 0) {
        puVar12 = (undefined8 *)param_4[1];
        puVar18 = (undefined8 *)*param_4;
LAB_10b904c70:
        in_ZR = puVar18 == puVar12;
        if (!(bool)in_ZR) goto code_r0x00010b904c78;
        plVar16 = *(long **)(lVar13 + 0x10);
        puStack_300 = &DAT_10f2eae00;
        uStack_2f8 = 6;
        func_0x00010b906a20();
        ppuVar8 = apuStack_220;
        (**(code **)(*plVar16 + 0xd0))(auStack_248,plVar16,ppuVar8,&puStack_300,ppuVar17);
        if ((*(byte *)(param_6 + 8) & 1) == 0) {
          func_0x00010b90692c();
        }
        else {
          uVar14 = *(undefined8 *)(lVar13 + 0x10);
          func_0x00010b906a20();
          ppuVar8 = (undefined **)0x3;
          FUN_10b9012e0(auStack_268,uVar14,3,puVar7,plVar16);
          if ((*(byte *)(param_6 + 8) & 1) == 0) {
            func_0x00010b90692c();
          }
          else {
            puVar15 = *(undefined **)(lVar13 + 0x10);
            func_0x00010b906a20();
            uStack_298 = 0;
            uStack_290 = 0;
            puStack_2a0 = puVar15;
            uStack_288 = uVar14;
            func_0x00010b906a40(&puStack_2a0);
            ppuVar8 = apuStack_200;
            (**(code **)(**(long **)(lVar13 + 0x10) + 0x118))
                      (auStack_2c0,*(long **)(lVar13 + 0x10),ppuVar8,&puStack_2a0);
            if ((*(byte *)(param_6 + 8) & 1) == 0) {
              func_0x00010b90692c();
            }
            else {
              FUN_10b8dd210(&puStack_300,auStack_2c0);
              puVar7 = auStack_2e0;
              FUN_10b8dd210(puVar7,auStack_268);
              uVar14 = *(undefined8 *)(lVar13 + 0x10);
              func_0x00010b906a20();
              uStack_320 = 2;
              uStack_330 = uVar14;
              ppuStack_328 = &puStack_300;
              puStack_318 = puVar7;
              func_0x00010b906a40(&uStack_330);
              ppuVar8 = apuStack_240;
              (**(code **)(**(long **)(lVar13 + 0x10) + 0x110))
                        (apuStack_350,*(long **)(lVar13 + 0x10),ppuVar8,&uStack_330);
              if ((*(byte *)(param_6 + 8) & 1) == 0) {
                func_0x00010b90692c();
              }
              else {
                func_0x00010b906c20();
                ppuVar8 = ppuVar9;
              }
              func_0x00010b906bbc();
              lVar13 = 0x20;
              do {
                func_0x0001080e0bc0((long)&puStack_300 + lVar13);
                lVar13 = lVar13 + -0x20;
                in_ZR = lVar13 == -0x20;
              } while (!(bool)in_ZR);
            }
            func_0x0001080e0bc0(auStack_2c0);
          }
          func_0x0001080e0bc0(auStack_268);
        }
        func_0x0001080e0bc0(auStack_248);
        goto LAB_10b904e48;
      }
LAB_10b904cd8:
      func_0x00010b90692c();
LAB_10b904e48:
      func_0x0001080e0bc0(auStack_228);
    }
    func_0x0001080e0bc0(auStack_208);
  }
  plVar16 = alStack_1e8;
  func_0x0001080e0bc0();
  func_0x00010b90694c(uStack_1c8);
  if ((bool)in_ZR) {
    return puVar19;
  }
  ___stack_chk_fail();
  func_0x00010b9069ac();
  plVar11 = plVar16;
  func_0x00010b906b54();
  plVar5 = plVar16;
  plVar10 = plVar11;
  func_0x00010b902c00();
  puVar12 = (undefined8 *)plVar10[10];
  puVar18 = puVar12 + plVar10[0xb] * 2;
  do {
    if (puVar12 == puVar18) {
      if (plVar10[0xb] == plVar11[0xc]) {
        plVar5 = alStack_408;
        FUN_10b90276c();
      }
      else {
        puVar19 = *ppuVar8;
        puVar18[1] = ppuVar8[1];
        *puVar18 = puVar19;
        plVar11[0xb] = plVar11[0xb] + 1;
      }
      func_0x00010b902c60(*(undefined8 *)(*plVar16 + 0x170));
      (*extraout_x8_00)();
                    /* WARNING: Could not recover jumptable at 0x00010b901a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e5f6963)[(ulong)plVar5 & 0xffffffff] * 4 + 0x10b901a08))();
      return puVar19;
    }
    lVar13 = 0;
    do {
      if (lVar13 == 0x10) {
        uVar3 = 1;
        uStack_3b8 = extraout_x8;
        if ((bRam00000001137fd078 & 1) == 0) goto LAB_10b901dac;
        while (func_0x00010b902bc4(uStack_3b8), !(bool)uVar3) {
          ___stack_chk_fail();
LAB_10b901dac:
          iVar4 = 0x137fd078;
          ___cxa_guard_acquire();
          if (iVar4 != 0) {
            func_0x000107c31088(0x1137fd070,&UNK_10f7ccc53);
            ___cxa_guard_release(0x1137fd078);
          }
        }
        lVar13 = extraout_x8_06;
        FUN_10b9a8e40(extraout_x8_06,uRam00000001137fd070,2);
        *(undefined1 *)(lVar13 + 8) = 2;
        return puVar19;
      }
      pcVar1 = (char *)((long)puVar12 + lVar13);
      pcVar2 = (char *)((long)ppuVar8 + lVar13);
      lVar13 = lVar13 + 1;
    } while (*pcVar1 == *pcVar2);
    puVar12 = puVar12 + 2;
  } while( true );
code_r0x00010b904c78:
  uStack_298 = puVar18[1];
  puVar19 = (undefined *)*puVar18;
  plVar16 = *(long **)(lVar13 + 0x10);
  puStack_2a0 = puVar19;
  func_0x00010b906a20();
  (**(code **)(*plVar16 + 0xd0))(&puStack_300,plVar16,apuStack_220,&puStack_2a0,ppuVar17);
  ppuVar8 = &puStack_300;
  func_0x0001080df8d0(auStack_228);
  ppuVar17 = &puStack_300;
  func_0x0001080e0bc0();
  puVar18 = puVar18 + 2;
  if ((*(byte *)(param_6 + 8) & 1) == 0) goto LAB_10b904cd8;
  goto LAB_10b904c70;
}



/* Entry: 10b904ae8; end: 10b904b87;  */

void FUN_10b904ae8(undefined8 param_1,long param_2,long param_3,long *param_4,undefined8 param_5,
                  long param_6)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  int iVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  undefined8 *puVar11;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  long alStack_358 [10];
  undefined8 uStack_308;
  undefined *apuStack_2a0 [4];
  undefined8 uStack_280;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1b8 [32];
  undefined1 auStack_198 [8];
  undefined *apuStack_190 [3];
  undefined1 auStack_178 [8];
  undefined *apuStack_170 [3];
  undefined1 auStack_158 [8];
  undefined *apuStack_150 [3];
  long alStack_138 [4];
  undefined8 uStack_118;
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_48;
  
  lVar12 = param_2;
  func_0x00010b90699c();
  uVar15 = *(undefined8 *)(lVar12 + 0x10);
  uStack_48 = extraout_x8_01;
  func_0x00010b906a00();
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = uVar15;
  lStack_60 = lVar12;
  func_0x00010b906a40(&uStack_78);
  func_0x00010b906d1c(auStack_98,*(undefined8 *)(param_2 + 0x10),param_3 + 8);
  puVar6 = auStack_98;
  func_0x00010b90498c(param_1);
  func_0x00010b906d3c();
  func_0x00010b90694c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar8 = apuStack_2a0;
  lVar12 = param_2;
  func_0x00010b90699c();
  uStack_118 = extraout_x8_02;
  if ((bRam00000001137fd0a8 & 1) == 0) {
    lVar12 = 0x1137fd0a8;
    ___cxa_guard_acquire();
    if ((int)lVar12 != 0) {
      func_0x000107c31088(0x1137fd0a0,&UNK_10f7cccd8);
      lVar12 = 0x1137fd0a8;
      ___cxa_guard_release(0x1137fd0a8);
    }
  }
  ppuVar16 = *(undefined ***)(param_2 + 0x10);
  func_0x00010b906a20();
  ppuVar7 = (undefined **)0x1137fd0a0;
  func_0x00010b8dbf98(alStack_138,ppuVar16,0x1137fd0a0,lVar12);
  if ((*(byte *)(param_6 + 8) & 1) == 0) {
    func_0x00010b90692c();
  }
  else {
    puStack_250 = &UNK_10f7ccce5;
    uStack_248 = 5;
    func_0x00010b906a20();
    func_0x00010b906c40(auStack_158);
    if ((*(byte *)(param_6 + 8) & 1) == 0) {
      func_0x00010b90692c();
    }
    else {
      puStack_250 = &UNK_10f7ccceb;
      uStack_248 = 9;
      func_0x00010b906a20();
      func_0x00010b906c40(auStack_178);
      if ((*(byte *)(param_6 + 8) & 1) != 0) {
        puVar11 = (undefined8 *)param_4[1];
        puVar17 = (undefined8 *)*param_4;
LAB_10b904c70:
        in_ZR = puVar17 == puVar11;
        if (!(bool)in_ZR) goto code_r0x00010b904c78;
        plVar14 = *(long **)(param_2 + 0x10);
        puStack_250 = &DAT_10f2eae00;
        uStack_248 = 6;
        func_0x00010b906a20();
        ppuVar7 = apuStack_170;
        (**(code **)(*plVar14 + 0xd0))(auStack_198,plVar14,ppuVar7,&puStack_250,ppuVar16);
        if ((*(byte *)(param_6 + 8) & 1) == 0) {
          func_0x00010b90692c();
        }
        else {
          uVar15 = *(undefined8 *)(param_2 + 0x10);
          func_0x00010b906a20();
          ppuVar7 = (undefined **)0x3;
          FUN_10b9012e0(auStack_1b8,uVar15,3,puVar6,plVar14);
          if ((*(byte *)(param_6 + 8) & 1) == 0) {
            func_0x00010b90692c();
          }
          else {
            uVar13 = *(undefined8 *)(param_2 + 0x10);
            func_0x00010b906a20();
            uStack_1e8 = 0;
            uStack_1e0 = 0;
            uStack_1f0 = uVar13;
            uStack_1d8 = uVar15;
            func_0x00010b906a40(&uStack_1f0);
            ppuVar7 = apuStack_150;
            (**(code **)(**(long **)(param_2 + 0x10) + 0x118))
                      (auStack_210,*(long **)(param_2 + 0x10),ppuVar7,&uStack_1f0);
            if ((*(byte *)(param_6 + 8) & 1) == 0) {
              func_0x00010b90692c();
            }
            else {
              FUN_10b8dd210(&puStack_250,auStack_210);
              puVar6 = auStack_230;
              FUN_10b8dd210(puVar6,auStack_1b8);
              uVar15 = *(undefined8 *)(param_2 + 0x10);
              func_0x00010b906a20();
              uStack_270 = 2;
              uStack_280 = uVar15;
              ppuStack_278 = &puStack_250;
              puStack_268 = puVar6;
              func_0x00010b906a40(&uStack_280);
              ppuVar7 = apuStack_190;
              (**(code **)(**(long **)(param_2 + 0x10) + 0x110))
                        (apuStack_2a0,*(long **)(param_2 + 0x10),ppuVar7,&uStack_280);
              if ((*(byte *)(param_6 + 8) & 1) == 0) {
                func_0x00010b90692c();
              }
              else {
                func_0x00010b906c20();
                ppuVar7 = ppuVar8;
              }
              func_0x00010b906bbc();
              lVar12 = 0x20;
              do {
                func_0x0001080e0bc0((long)&puStack_250 + lVar12);
                lVar12 = lVar12 + -0x20;
                in_ZR = lVar12 == -0x20;
              } while (!(bool)in_ZR);
            }
            func_0x0001080e0bc0(auStack_210);
          }
          func_0x0001080e0bc0(auStack_1b8);
        }
        func_0x0001080e0bc0(auStack_198);
        goto LAB_10b904e48;
      }
LAB_10b904cd8:
      func_0x00010b90692c();
LAB_10b904e48:
      func_0x0001080e0bc0(auStack_178);
    }
    func_0x0001080e0bc0(auStack_158);
  }
  plVar14 = alStack_138;
  func_0x0001080e0bc0();
  func_0x00010b90694c(uStack_118);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b9069ac();
  plVar10 = plVar14;
  func_0x00010b906b54();
  plVar5 = plVar14;
  plVar9 = plVar10;
  func_0x00010b902c00();
  puVar11 = (undefined8 *)plVar9[10];
  puVar17 = puVar11 + plVar9[0xb] * 2;
  do {
    if (puVar11 == puVar17) {
      if (plVar9[0xb] == plVar10[0xc]) {
        plVar5 = alStack_358;
        FUN_10b90276c();
      }
      else {
        puVar18 = *ppuVar7;
        puVar17[1] = ppuVar7[1];
        *puVar17 = puVar18;
        plVar10[0xb] = plVar10[0xb] + 1;
      }
      func_0x00010b902c60(*(undefined8 *)(*plVar14 + 0x170));
      (*extraout_x8_00)();
                    /* WARNING: Could not recover jumptable at 0x00010b901a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e5f6963)[(ulong)plVar5 & 0xffffffff] * 4 + 0x10b901a08))();
      return;
    }
    lVar12 = 0;
    do {
      if (lVar12 == 0x10) {
        uVar3 = 1;
        uStack_308 = extraout_x8;
        if ((bRam00000001137fd078 & 1) == 0) goto LAB_10b901dac;
        while (func_0x00010b902bc4(uStack_308), !(bool)uVar3) {
          ___stack_chk_fail();
LAB_10b901dac:
          iVar4 = 0x137fd078;
          ___cxa_guard_acquire();
          if (iVar4 != 0) {
            func_0x000107c31088(0x1137fd070,&UNK_10f7ccc53);
            ___cxa_guard_release(0x1137fd078);
          }
        }
        lVar12 = extraout_x8_03;
        FUN_10b9a8e40(extraout_x8_03,uRam00000001137fd070,2);
        *(undefined1 *)(lVar12 + 8) = 2;
        return;
      }
      pcVar1 = (char *)((long)puVar11 + lVar12);
      pcVar2 = (char *)((long)ppuVar7 + lVar12);
      lVar12 = lVar12 + 1;
    } while (*pcVar1 == *pcVar2);
    puVar11 = puVar11 + 2;
  } while( true );
code_r0x00010b904c78:
  uStack_1e8 = puVar17[1];
  uStack_1f0 = *puVar17;
  plVar14 = *(long **)(param_2 + 0x10);
  func_0x00010b906a20();
  (**(code **)(*plVar14 + 0xd0))(&puStack_250,plVar14,apuStack_170,&uStack_1f0,ppuVar16);
  ppuVar7 = &puStack_250;
  func_0x0001080df8d0(auStack_178);
  ppuVar16 = &puStack_250;
  func_0x0001080e0bc0();
  puVar17 = puVar17 + 2;
  if ((*(byte *)(param_6 + 8) & 1) == 0) goto LAB_10b904cd8;
  goto LAB_10b904c70;
}



/* Entry: 10b904b88; end: 10b904ec3;  */

void FUN_10b904b88(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,long param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  int iVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x8;
  undefined8 *puVar11;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  long alStack_2a8 [10];
  undefined8 uStack_258;
  undefined *apuStack_1f0 [4];
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [8];
  undefined *apuStack_e0 [3];
  undefined1 auStack_c8 [8];
  undefined *apuStack_c0 [3];
  undefined1 auStack_a8 [8];
  undefined *apuStack_a0 [3];
  long alStack_88 [4];
  undefined8 uStack_68;
  
  ppuVar8 = apuStack_1f0;
  lVar12 = param_1;
  func_0x00010b90699c();
  uStack_68 = extraout_x8_01;
  if ((bRam00000001137fd0a8 & 1) == 0) {
    lVar12 = 0x1137fd0a8;
    ___cxa_guard_acquire();
    if ((int)lVar12 != 0) {
      func_0x000107c31088(0x1137fd0a0,&UNK_10f7cccd8);
      lVar12 = 0x1137fd0a8;
      ___cxa_guard_release(0x1137fd0a8);
    }
  }
  ppuVar16 = *(undefined ***)(param_1 + 0x10);
  func_0x00010b906a20();
  ppuVar7 = (undefined **)0x1137fd0a0;
  func_0x00010b8dbf98(alStack_88,ppuVar16,0x1137fd0a0,lVar12);
  if ((*(byte *)(param_5 + 8) & 1) == 0) {
    func_0x00010b90692c();
  }
  else {
    puStack_1a0 = &UNK_10f7ccce5;
    uStack_198 = 5;
    func_0x00010b906a20();
    func_0x00010b906c40(auStack_a8);
    if ((*(byte *)(param_5 + 8) & 1) == 0) {
      func_0x00010b90692c();
    }
    else {
      puStack_1a0 = &UNK_10f7ccceb;
      uStack_198 = 9;
      func_0x00010b906a20();
      func_0x00010b906c40(auStack_c8);
      if ((*(byte *)(param_5 + 8) & 1) != 0) {
        puVar11 = (undefined8 *)param_3[1];
        puVar17 = (undefined8 *)*param_3;
LAB_10b904c70:
        in_ZR = puVar17 == puVar11;
        if (!(bool)in_ZR) goto code_r0x00010b904c78;
        plVar14 = *(long **)(param_1 + 0x10);
        puStack_1a0 = &DAT_10f2eae00;
        uStack_198 = 6;
        func_0x00010b906a20();
        ppuVar7 = apuStack_c0;
        (**(code **)(*plVar14 + 0xd0))(auStack_e8,plVar14,ppuVar7,&puStack_1a0,ppuVar16);
        if ((*(byte *)(param_5 + 8) & 1) == 0) {
          func_0x00010b90692c();
        }
        else {
          uVar15 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010b906a20();
          ppuVar7 = (undefined **)0x3;
          FUN_10b9012e0(auStack_108,uVar15,3,param_2,plVar14);
          if ((*(byte *)(param_5 + 8) & 1) == 0) {
            func_0x00010b90692c();
          }
          else {
            uVar13 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010b906a20();
            uStack_138 = 0;
            uStack_130 = 0;
            uStack_140 = uVar13;
            uStack_128 = uVar15;
            func_0x00010b906a40(&uStack_140);
            ppuVar7 = apuStack_a0;
            (**(code **)(**(long **)(param_1 + 0x10) + 0x118))
                      (auStack_160,*(long **)(param_1 + 0x10),ppuVar7,&uStack_140);
            if ((*(byte *)(param_5 + 8) & 1) == 0) {
              func_0x00010b90692c();
            }
            else {
              FUN_10b8dd210(&puStack_1a0,auStack_160);
              puVar6 = auStack_180;
              FUN_10b8dd210(puVar6,auStack_108);
              uVar15 = *(undefined8 *)(param_1 + 0x10);
              func_0x00010b906a20();
              uStack_1c0 = 2;
              uStack_1d0 = uVar15;
              ppuStack_1c8 = &puStack_1a0;
              puStack_1b8 = puVar6;
              func_0x00010b906a40(&uStack_1d0);
              ppuVar7 = apuStack_e0;
              (**(code **)(**(long **)(param_1 + 0x10) + 0x110))
                        (apuStack_1f0,*(long **)(param_1 + 0x10),ppuVar7,&uStack_1d0);
              if ((*(byte *)(param_5 + 8) & 1) == 0) {
                func_0x00010b90692c();
              }
              else {
                func_0x00010b906c20();
                ppuVar7 = ppuVar8;
              }
              func_0x00010b906bbc();
              lVar12 = 0x20;
              do {
                func_0x0001080e0bc0((long)&puStack_1a0 + lVar12);
                lVar12 = lVar12 + -0x20;
                in_ZR = lVar12 == -0x20;
              } while (!(bool)in_ZR);
            }
            func_0x0001080e0bc0(auStack_160);
          }
          func_0x0001080e0bc0(auStack_108);
        }
        func_0x0001080e0bc0(auStack_e8);
        goto LAB_10b904e48;
      }
LAB_10b904cd8:
      func_0x00010b90692c();
LAB_10b904e48:
      func_0x0001080e0bc0(auStack_c8);
    }
    func_0x0001080e0bc0(auStack_a8);
  }
  plVar14 = alStack_88;
  func_0x0001080e0bc0();
  func_0x00010b90694c(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b9069ac();
  plVar10 = plVar14;
  func_0x00010b906b54();
  plVar5 = plVar14;
  plVar9 = plVar10;
  func_0x00010b902c00();
  puVar11 = (undefined8 *)plVar9[10];
  puVar17 = puVar11 + plVar9[0xb] * 2;
  do {
    if (puVar11 == puVar17) {
      if (plVar9[0xb] == plVar10[0xc]) {
        plVar5 = alStack_2a8;
        FUN_10b90276c();
      }
      else {
        puVar18 = *ppuVar7;
        puVar17[1] = ppuVar7[1];
        *puVar17 = puVar18;
        plVar10[0xb] = plVar10[0xb] + 1;
      }
      func_0x00010b902c60(*(undefined8 *)(*plVar14 + 0x170));
      (*extraout_x8_00)();
                    /* WARNING: Could not recover jumptable at 0x00010b901a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e5f6963)[(ulong)plVar5 & 0xffffffff] * 4 + 0x10b901a08))();
      return;
    }
    lVar12 = 0;
    do {
      if (lVar12 == 0x10) {
        uVar3 = 1;
        uStack_258 = extraout_x8;
        if ((bRam00000001137fd078 & 1) == 0) goto LAB_10b901dac;
        while (func_0x00010b902bc4(uStack_258), !(bool)uVar3) {
          ___stack_chk_fail();
LAB_10b901dac:
          iVar4 = 0x137fd078;
          ___cxa_guard_acquire();
          if (iVar4 != 0) {
            func_0x000107c31088(0x1137fd070,&UNK_10f7ccc53);
            ___cxa_guard_release(0x1137fd078);
          }
        }
        lVar12 = extraout_x8_02;
        FUN_10b9a8e40(extraout_x8_02,uRam00000001137fd070,2);
        *(undefined1 *)(lVar12 + 8) = 2;
        return;
      }
      pcVar1 = (char *)((long)puVar11 + lVar12);
      pcVar2 = (char *)((long)ppuVar7 + lVar12);
      lVar12 = lVar12 + 1;
    } while (*pcVar1 == *pcVar2);
    puVar11 = puVar11 + 2;
  } while( true );
code_r0x00010b904c78:
  uStack_138 = puVar17[1];
  uStack_140 = *puVar17;
  plVar14 = *(long **)(param_1 + 0x10);
  func_0x00010b906a20();
  (**(code **)(*plVar14 + 0xd0))(&puStack_1a0,plVar14,apuStack_c0,&uStack_140,ppuVar16);
  ppuVar7 = &puStack_1a0;
  func_0x0001080df8d0(auStack_c8);
  ppuVar16 = &puStack_1a0;
  func_0x0001080e0bc0();
  puVar17 = puVar17 + 2;
  if ((*(byte *)(param_5 + 8) & 1) == 0) goto LAB_10b904cd8;
  goto LAB_10b904c70;
}



/* Entry: 10b904ec4; end: 10b904eef;  */

void FUN_10b904ec4(long *param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 *puVar9;
  code *extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  undefined8 uVar11;
  long alStack_b8 [10];
  undefined8 uStack_68;
  
  func_0x00010b9069ac();
  plVar8 = param_1;
  func_0x00010b906b54();
  plVar6 = param_1;
  plVar7 = plVar8;
  func_0x00010b902c00();
  puVar9 = (undefined8 *)plVar7[10];
  puVar3 = puVar9 + plVar7[0xb] * 2;
  do {
    if (puVar9 == puVar3) {
      if (plVar7[0xb] == plVar8[0xc]) {
        plVar6 = alStack_b8;
        FUN_10b90276c();
      }
      else {
        uVar11 = *param_2;
        puVar3[1] = param_2[1];
        *puVar3 = uVar11;
        plVar8[0xb] = plVar8[0xb] + 1;
      }
      func_0x00010b902c60(*(undefined8 *)(*param_1 + 0x170));
      (*extraout_x8_00)();
                    /* WARNING: Could not recover jumptable at 0x00010b901a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e5f6963)[(ulong)plVar6 & 0xffffffff] * 4 + 0x10b901a08))();
      return;
    }
    lVar10 = 0;
    do {
      if (lVar10 == 0x10) {
        uVar4 = 1;
        uStack_68 = extraout_x8;
        if ((bRam00000001137fd078 & 1) == 0) goto LAB_10b901dac;
        while (func_0x00010b902bc4(uStack_68), !(bool)uVar4) {
          ___stack_chk_fail();
LAB_10b901dac:
          iVar5 = 0x137fd078;
          ___cxa_guard_acquire();
          if (iVar5 != 0) {
            func_0x000107c31088(0x1137fd070,&UNK_10f7ccc53);
            ___cxa_guard_release(0x1137fd078);
          }
        }
        lVar10 = extraout_x8_01;
        FUN_10b9a8e40(extraout_x8_01,uRam00000001137fd070,2);
        *(undefined1 *)(lVar10 + 8) = 2;
        return;
      }
      pcVar1 = (char *)((long)puVar9 + lVar10);
      pcVar2 = (char *)((long)param_2 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar1 == *pcVar2);
    puVar9 = puVar9 + 2;
  } while( true );
}



/* Entry: 10b904ef0; end: 10b904eff;  */

long FUN_10b904ef0(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10b904f00; end: 10b904f7b;  */

void FUN_10b904f00(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar3 = 8;
    for (lVar2 = 0; lVar2 != lVar1; lVar2 = lVar2 + 1) {
      if (-1 < *(char *)(*param_1 + lVar2)) {
        func_0x0001080e0bc0(param_1[1] + lVar3);
        lVar1 = param_1[3];
      }
      lVar3 = lVar3 + 0x28;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b904f7c; end: 10b904f97;  */

void FUN_10b904f7c(long param_1)

{
  func_0x0001080e08ac();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10b904f98; end: 10b904f9f;  */

void FUN_10b904f98(void)

{
  return;
}



/* Entry: 10b904fa0; end: 10b90509f;  */

long * FUN_10b904fa0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_x8;
  long *plVar5;
  ulong uVar6;
  long *plStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = param_2;
  uVar3 = param_5;
  lVar4 = param_6;
  func_0x00010b90699c();
  plVar2 = param_2;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = extraout_x8;
  (**(code **)(*plVar5 + 0xd8))(auStack_78,param_2,&uStack_58,uVar3,lVar4);
  uVar1 = *(char *)(param_6 + 8) == '\x01';
  if ((bool)uVar1) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x180))(param_2,auStack_70);
    if (((ulong)plVar2 & 1) == 0) {
      plVar5 = *(long **)(param_1 + 8);
      (**(code **)(*param_2 + 0x60))(&plStack_80,param_2,param_5);
      (**(code **)(*plVar5 + 0x18))(plVar5,&plStack_80,auStack_78,param_6);
      func_0x000107c278f8();
      plVar2 = plStack_80;
    }
    else {
      plVar5 = (long *)0x1;
    }
  }
  else {
    plVar5 = (long *)0x0;
  }
  func_0x00010b906a68();
  func_0x00010b90694c(uStack_48);
  if ((bool)uVar1) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar5 = plVar2 + 4;
  *plVar2 = (long)&PTR_FUN_110d74518;
  for (uVar6 = 0; uVar6 < (ulong)plVar2[3]; uVar6 = uVar6 + 1) {
    (**(code **)(*(long *)plVar2[2] + 0x1d0))((long *)plVar2[2],plVar5);
    plVar5 = plVar5 + 1;
  }
  return plVar2;
}



/* Entry: 10b9050a0; end: 10b9050a3;  */

undefined8 * FUN_10b9050a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = param_1 + 4;
  *param_1 = &PTR_FUN_110d74518;
  for (uVar2 = 0; uVar2 < (ulong)param_1[3]; uVar2 = uVar2 + 1) {
    (**(code **)(*(long *)param_1[2] + 0x1d0))((long *)param_1[2],puVar1);
    puVar1 = puVar1 + 1;
  }
  return param_1;
}



/* Entry: 10b9050a4; end: 10b9050b7;  */

void FUN_10b9050a4(void)

{
  FUN_10b905324();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9050b8; end: 10b90519f;  */

void FUN_10b9050b8(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long *unaff_x20;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 in_stack_00000028;
  
  func_0x00010b906d44();
  puVar2 = param_1;
  func_0x00010b90699c();
  in_stack_00000028 = extraout_x8_00;
  func_0x00010b9069c4();
  plVar3 = unaff_x20;
  puVar5 = puVar2;
  (**(code **)(*unaff_x20 + 0x68))(&stack0x00000008);
  uVar1 = 0;
  if (puVar2[8] == '\x01') {
    param_3 = param_1 + 0x20;
    uVar7 = 0xffffffffffffffff;
    do {
      uVar7 = uVar7 + 1;
      uVar1 = uVar7 == *(ulong *)(param_1 + 0x18);
      if (*(ulong *)(param_1 + 0x18) <= uVar7) {
        puVar5 = &stack0x00000008;
        func_0x00010b906c20();
        goto LAB_10b905184;
      }
      param_3 = param_3 + 8;
      puVar5 = &stack0x00000010;
      plVar3 = unaff_x20;
      (**(code **)(*unaff_x20 + 0xf8))();
    } while ((puVar2[8] & 1) != 0);
  }
  *extraout_x8 = unaff_x20[0x28];
  lVar8 = unaff_x20[0x29];
  extraout_x8[2] = unaff_x20[0x2a];
  extraout_x8[1] = lVar8;
  *(undefined1 *)(extraout_x8 + 3) = 0;
LAB_10b905184:
  func_0x00010b906a68();
  func_0x00010b90694c(in_stack_00000028);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  plVar6 = (long *)plVar3[2];
  plVar4 = plVar3;
  func_0x00010b906a00();
                    /* WARNING: Could not recover jumptable at 0x00010b906b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0xd8))
            (extraout_x8_01,plVar6,puVar5 + 8,plVar3 + (long)(param_3 + 4),plVar4);
  return;
}



/* Entry: 10b9051a0; end: 10b9051e7;  */

void FUN_10b9051a0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0x10);
  lVar1 = param_2 + param_4 * 8;
  func_0x00010b906a00();
                    /* WARNING: Could not recover jumptable at 0x00010b906b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xd8))(param_1,plVar2,param_3 + 8,lVar1 + 0x20,param_2);
  return;
}



/* Entry: 10b9051e8; end: 10b905323;  */

void FUN_10b9051e8(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int extraout_w10;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x00010b906a00();
  puVar4 = (undefined8 *)0x88;
  __Znwm();
  plVar7 = puVar4 + 1;
  *plVar7 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110d74590;
  puVar1 = puVar4 + 3;
  FUN_10b9ace44(puVar1,param_4);
  puVar4[3] = &PTR_DAT_110d745e0;
  FUN_10b8e0de0(puVar4 + 8,uVar6,param_3 + 8,&uStack_88,param_2,0);
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_70 = puVar1;
    puStack_68 = puVar4;
    func_0x000107c278e4(puVar4 + 4,&puStack_70);
    func_0x000107c284e8(&puStack_70);
  }
  func_0x00010b906d30();
  if (*(char *)(param_5 + 8) == '\x01') {
    puVar5 = puVar1;
    if (puVar4[5] != 0) {
      do {
        func_0x00010b906c70();
      } while (extraout_w10 != 0);
    }
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
  *param_1 = (long)puVar5;
  func_0x000107c3105c(puVar1);
  return;
}



/* Entry: 10b905324; end: 10b905383;  */

undefined8 * FUN_10b905324(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  puVar1 = param_1 + 4;
  *param_1 = &PTR_FUN_110d74518;
  for (uVar2 = 0; uVar2 < (ulong)param_1[3]; uVar2 = uVar2 + 1) {
    (**(code **)(*(long *)param_1[2] + 0x1d0))((long *)param_1[2],puVar1);
    puVar1 = puVar1 + 1;
  }
  return param_1;
}



/* Entry: 10b905384; end: 10b905387;  */

void FUN_10b905384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74590;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b905388; end: 10b90539b;  */

void FUN_10b905388(void)

{
  FUN_10b905404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90539c; end: 10b9053a7;  */

void FUN_10b90539c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b906ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b9053a8; end: 10b9053bb;  */

void FUN_10b9053a8(void)

{
  FUN_10b9053d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9053bc; end: 10b9053d3;  */

undefined1  [16] FUN_10b9053bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 8;
  auVar1._0_8_ = &UNK_10f7cccf5;
  return auVar1;
}



/* Entry: 10b9053d4; end: 10b905403;  */

undefined8 * FUN_10b9053d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d745e0;
  FUN_10b8e0f58(param_1 + 5);
  *param_1 = &PTR_DAT_110d7f008;
  func_0x000104bdbf78(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b905404; end: 10b905417;  */

void FUN_10b905404(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74590;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b905418; end: 10b90542b;  */

void FUN_10b905418(void)

{
  func_0x00010b905514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90542c; end: 10b905447;  */

void FUN_10b90542c(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  param_2 = param_2 + param_3 * 0x20;
  *param_1 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b905448; end: 10b905567;  */

void FUN_10b905448(undefined4 *param_1,long param_2,long param_3)

{
  char cVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  cVar1 = *(char *)(*(long *)(param_2 + 0x18) + 0x18);
  if (cVar1 == '\x06') {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010b906a00();
    func_0x00010b906d70();
    (**(code **)(extraout_x8 + 0x130))(&uStack_60,uVar2,param_3 + 8);
    FUN_10b9a8e18(param_1,&uStack_60);
    func_0x000107c278f8(uStack_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    if (cVar1 == '\x02') {
      func_0x00010b906a00();
      func_0x00010b906d70();
      (**(code **)(extraout_x8_00 + 0x150))(uVar2,param_3 + 8);
      *(undefined2 *)(param_1 + 2) = 4;
      *param_1 = (int)uVar2;
    }
    else {
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x00010b906a00();
      FUN_10b9018fc(param_1,uVar2,param_3 + 8,&uStack_60,param_2);
    }
  }
  return;
}



/* Entry: 10b905568; end: 10b90558b;  */

undefined8 * FUN_10b905568(undefined8 *param_1)

{
  FUN_10b90558c(*param_1);
  return param_1;
}



/* Entry: 10b90558c; end: 10b9055af;  */

void FUN_10b90558c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9069fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b9055b0; end: 10b9055cf;  */

void FUN_10b9055b0(void)

{
  FUN_10b9055d0();
  func_0x00010b906ccc();
  return;
}



/* Entry: 10b9055d0; end: 10b905623;  */

long FUN_10b9055d0(ulong param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (param_1 & 0xffffffff) * -0x395b586ca42e166b;
  return (((ulong)param_2 * -0x395b586ca42e166b ^ (ulong)param_2 * -0x395b586ca42e166b >> 0x2f) *
          0x35a98f4d286a90b9 + 0xe6546b64 ^ (uVar1 ^ uVar1 >> 0x2f) * -0x395b586ca42e166b) *
         -0x395b586ca42e166b + 0xe6546b64;
}



/* Entry: 10b905624; end: 10b9056eb;  */

void FUN_10b905624(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_10b9056ec(lVar3,uVar4,param_2);
  lVar2 = param_1[5];
  if (lVar2 != 0) goto LAB_10b90566c;
  if (*(char *)(lVar3 + lVar1) == -2) {
    lVar2 = 0;
    goto LAB_10b90566c;
  }
  if (uVar4 == 0) {
    uVar4 = 1;
LAB_10b9056c0:
    FUN_10b90572c(param_1,uVar4);
  }
  else {
    if (uVar4 - (uVar4 >> 3) >> 1 < (ulong)param_1[2]) {
      uVar4 = uVar4 << 1 | 1;
      goto LAB_10b9056c0;
    }
    func_0x00010b905858(param_1);
  }
  lVar3 = *param_1;
  lVar1 = lVar3;
  FUN_10b9056ec(lVar3,param_1[3],param_2);
  lVar2 = param_1[5];
LAB_10b90566c:
  param_1[2] = param_1[2] + 1;
  param_1[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 10b9056ec; end: 10b90572b;  */

ulong FUN_10b9056ec(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b90572c; end: 10b9059f3;  */

void FUN_10b90572c(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x28;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_10b9059f4();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_10b9056ec(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_10b905a1c(param_1[1] + lVar4 * 0x28,lVar5);
    }
    lVar5 = lVar5 + 0x28;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b9059f4; end: 10b905a1b;  */

void FUN_10b9059f4(undefined4 *param_1)

{
  FUN_10b9055d0(*param_1,param_1[1]);
  func_0x00010b906ccc();
  return;
}



/* Entry: 10b905a1c; end: 10b905a4b;  */

/* WARNING: Possible PIC construction at 0x0001080e0bdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080e0be0) */
/* WARNING: Removing unreachable block (ram,0x0001080e0c0c) */
/* WARNING: Removing unreachable block (ram,0x0001080e0c00) */
/* WARNING: Removing unreachable block (ram,0x0001080e0d5c) */

void FUN_10b905a1c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = param_2 + 1;
  *param_1 = *param_2;
  func_0x0001080e08ac(param_1 + 1,plVar1);
  func_0x0001080e0d20();
  if ((char)plVar1[3] == '\x01') {
    func_0x0001080e0df8();
    (**(code **)(*plVar1 + 0x1c0))();
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



/* Entry: 10b905a4c; end: 10b905a97;  */

void FUN_10b905a4c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9069fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b905a98; end: 10b905aab;  */

void FUN_10b905a98(void)

{
  FUN_10b905b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b905aac; end: 10b905aff;  */

long * FUN_10b905aac(undefined8 param_1)

{
  char cVar1;
  undefined1 in_ZR;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  int extraout_w11;
  long *unaff_x20;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  long lStack_e0;
  long alStack_d8 [2];
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_98;
  int aiStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  plVar9 = alStack_40;
  plVar8 = alStack_40;
  func_0x00010b90699c();
  uStack_28 = extraout_x8_00;
  func_0x00010b8a1764(alStack_40);
  FUN_10b905c74(param_1);
  func_0x000104bda914(alStack_40);
  func_0x00010b90694c(uStack_28);
  if ((bool)in_ZR) {
    return plVar8;
  }
  ___stack_chk_fail();
  piVar4 = aiStack_70;
  piVar5 = aiStack_70;
  pcStack_48 = FUN_10b905b00;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010b90699c();
  aiStack_70[0] = 2;
  aiStack_70[1] = 0;
  uStack_68 = 0;
  uStack_58 = extraout_x8_01;
  if (*plVar9 != 0) {
    do {
      func_0x00010b906a90();
      uStack_68 = extraout_x8_02;
    } while (extraout_w11 != 0);
  }
  FUN_10b905c74();
  func_0x000104bda914();
  func_0x00010b90694c(uStack_58);
  if ((bool)in_ZR) {
    return (long *)piVar5;
  }
  ___stack_chk_fail();
  plVar8 = &lStack_e0;
  piVar6 = piVar5;
  func_0x00010b90699c();
  uStack_98 = extraout_x8_03;
  func_0x00010b8e1148(alStack_d8,piVar6 + 6);
  if (alStack_d8[0] != 0) {
    lStack_e0 = *(long *)(piVar5 + 4);
    if ((lStack_e0 != 0) && (*(long *)(lStack_e0 + 0x10) != 0)) {
      plVar9 = (long *)(*(long *)(lStack_e0 + 0x10) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    unaff_x20 = &lStack_c8;
    lStack_c8 = 0x10b905c38;
    ppuStack_c0 = &PTR_FUN_110d746f0;
    uStack_b0 = *(undefined8 *)(piVar5 + 0xc);
    uStack_b8 = *(undefined8 *)(piVar5 + 10);
    func_0x0001080d3888(alStack_d8[0],&lStack_e0,&lStack_c8);
    func_0x00010b906d08(ppuStack_c0);
    func_0x000105276914(lStack_e0);
    piVar4 = (int *)plVar8;
  }
  func_0x00010b8e0a68(alStack_d8);
  func_0x00010b8e0a20(piVar5 + 0xe);
  func_0x00010b8e1574(piVar5 + 6);
  piVar6 = piVar5 + 4;
  func_0x0001052768f0();
  func_0x00010b90694c(uStack_98);
  if ((bool)in_ZR) {
    return (long *)piVar5;
  }
  ___stack_chk_fail();
  func_0x00010b906d7c();
  FUN_10b8dcc7c(*(undefined8 *)piVar6,(undefined1 *)((long)piVar4 + 0x10));
  lVar7 = *unaff_x20;
  lVar3 = lVar7;
  plVar8 = (long *)(piVar5 + 6);
  func_0x00010b8dddd0();
  uStack_118 = extraout_x8;
  FUN_10b8dcd08();
  if (lVar3 != 0) {
    plVar8 = *(long **)(piVar5 + 6);
    FUN_10b9a57c8(lVar7 + 0xa0);
    uStack_128 = *(undefined8 *)(lVar3 + 0xc);
    uStack_130 = *(undefined8 *)(lVar3 + 4);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    func_0x00010b8dcf04(&uStack_148);
    func_0x00010b8ddf04(uStack_138,uStack_148);
  }
  bVar2 = lVar3 == 0;
  piVar4 = (int *)(ulong)!bVar2;
  func_0x00010b8ddd90(uStack_118);
  if (bVar2) {
    return (long *)piVar4;
  }
  ___stack_chk_fail();
  if ((ulong)*(uint *)((long)plVar8 + 4) <
      (ulong)((*(long *)(piVar4 + 0x24) - *(long *)(piVar4 + 0x22)) / 0x14)) {
    piVar4 = (int *)(*(long *)(piVar4 + 0x22) + (ulong)*(uint *)((long)plVar8 + 4) * 0x14);
    if (*piVar4 != *(int *)plVar8) {
      piVar4 = (int *)0x0;
    }
    return (long *)piVar4;
  }
  return (long *)(int *)0x0;
}



/* Entry: 10b905b00; end: 10b905b5f;  */

int * FUN_10b905b00(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  undefined1 in_ZR;
  bool bVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w11;
  long *unaff_x20;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  long lStack_a0;
  long alStack_98 [2];
  long lStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  int aiStack_30 [2];
  undefined8 uStack_28;
  undefined8 uStack_18;
  
  piVar5 = aiStack_30;
  piVar6 = aiStack_30;
  func_0x00010b90699c();
  aiStack_30[0] = 2;
  aiStack_30[1] = 0;
  uStack_28 = 0;
  uStack_18 = extraout_x8_00;
  if (*param_2 != 0) {
    do {
      func_0x00010b906a90();
      uStack_28 = extraout_x8_01;
    } while (extraout_w11 != 0);
  }
  FUN_10b905c74();
  func_0x000104bda914();
  func_0x00010b90694c(uStack_18);
  if ((bool)in_ZR) {
    return piVar6;
  }
  ___stack_chk_fail();
  plVar9 = &lStack_a0;
  piVar7 = piVar6;
  func_0x00010b90699c();
  uStack_58 = extraout_x8_02;
  func_0x00010b8e1148(alStack_98,piVar7 + 6);
  if (alStack_98[0] != 0) {
    lStack_a0 = *(long *)(piVar6 + 4);
    if ((lStack_a0 != 0) && (*(long *)(lStack_a0 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_a0 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x20 = &lStack_88;
    lStack_88 = 0x10b905c38;
    ppuStack_80 = &PTR_FUN_110d746f0;
    uStack_70 = *(undefined8 *)(piVar6 + 0xc);
    uStack_78 = *(undefined8 *)(piVar6 + 10);
    func_0x0001080d3888(alStack_98[0],&lStack_a0,&lStack_88);
    func_0x00010b906d08(ppuStack_80);
    func_0x000105276914(lStack_a0);
    piVar5 = (int *)plVar9;
  }
  func_0x00010b8e0a68(alStack_98);
  func_0x00010b8e0a20(piVar6 + 0xe);
  func_0x00010b8e1574(piVar6 + 6);
  piVar7 = piVar6 + 4;
  func_0x0001052768f0();
  func_0x00010b90694c(uStack_58);
  if ((bool)in_ZR) {
    return piVar6;
  }
  ___stack_chk_fail();
  func_0x00010b906d7c();
  FUN_10b8dcc7c(*(undefined8 *)piVar7,(undefined1 *)((long)piVar5 + 0x10));
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  plVar9 = (long *)(piVar6 + 6);
  func_0x00010b8dddd0();
  uStack_d8 = extraout_x8;
  FUN_10b8dcd08();
  if (lVar4 != 0) {
    plVar9 = *(long **)(piVar6 + 6);
    FUN_10b9a57c8(lVar8 + 0xa0);
    uStack_e8 = *(undefined8 *)(lVar4 + 0xc);
    uStack_f0 = *(undefined8 *)(lVar4 + 4);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    func_0x00010b8dcf04(&uStack_108);
    func_0x00010b8ddf04(uStack_f8,uStack_108);
  }
  bVar3 = lVar4 == 0;
  piVar5 = (int *)(ulong)!bVar3;
  func_0x00010b8ddd90(uStack_d8);
  if (bVar3) {
    return piVar5;
  }
  ___stack_chk_fail();
  if ((ulong)*(uint *)((long)plVar9 + 4) <
      (ulong)((*(long *)(piVar5 + 0x24) - *(long *)(piVar5 + 0x22)) / 0x14)) {
    piVar5 = (int *)(*(long *)(piVar5 + 0x22) + (ulong)*(uint *)((long)plVar9 + 4) * 0x14);
    if (*piVar5 != *(int *)plVar9) {
      piVar5 = (int *)0x0;
    }
    return piVar5;
  }
  return (int *)0x0;
}



/* Entry: 10b905b60; end: 10b905c67;  */

int * FUN_10b905b60(int *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  undefined1 in_ZR;
  bool bVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *unaff_x20;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  long lStack_70;
  long alStack_68 [2];
  long lStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_28;
  
  plVar7 = &lStack_70;
  piVar5 = param_1;
  func_0x00010b90699c();
  uStack_28 = extraout_x8_00;
  func_0x00010b8e1148(alStack_68,piVar5 + 6);
  if (alStack_68[0] != 0) {
    lStack_70 = *(long *)(param_1 + 4);
    if ((lStack_70 != 0) && (*(long *)(lStack_70 + 0x10) != 0)) {
      plVar1 = (long *)(*(long *)(lStack_70 + 0x10) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x20 = &lStack_58;
    lStack_58 = 0x10b905c38;
    ppuStack_50 = &PTR_FUN_110d746f0;
    uStack_40 = *(undefined8 *)(param_1 + 0xc);
    uStack_48 = *(undefined8 *)(param_1 + 10);
    func_0x0001080d3888(alStack_68[0],&lStack_70,&lStack_58);
    func_0x00010b906d08(ppuStack_50);
    func_0x000105276914(lStack_70);
    param_2 = (undefined1 *)plVar7;
  }
  func_0x00010b8e0a68(alStack_68);
  func_0x00010b8e0a20(param_1 + 0xe);
  func_0x00010b8e1574(param_1 + 6);
  piVar5 = param_1 + 4;
  func_0x0001052768f0();
  func_0x00010b90694c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b906d7c();
    FUN_10b8dcc7c(*(undefined8 *)piVar5,param_2 + 0x10);
    lVar6 = *unaff_x20;
    lVar4 = lVar6;
    plVar7 = (long *)(param_1 + 6);
    func_0x00010b8dddd0();
    uStack_a8 = extraout_x8;
    FUN_10b8dcd08();
    if (lVar4 != 0) {
      plVar7 = *(long **)(param_1 + 6);
      FUN_10b9a57c8(lVar6 + 0xa0);
      uStack_b8 = *(undefined8 *)(lVar4 + 0xc);
      uStack_c0 = *(undefined8 *)(lVar4 + 4);
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      func_0x00010b8dcf04(&uStack_d8);
      func_0x00010b8ddf04(uStack_c8,uStack_d8);
    }
    bVar3 = lVar4 == 0;
    piVar5 = (int *)(ulong)!bVar3;
    func_0x00010b8ddd90(uStack_a8);
    if (!bVar3) {
      ___stack_chk_fail();
      if ((ulong)((*(long *)(piVar5 + 0x24) - *(long *)(piVar5 + 0x22)) / 0x14) <=
          (ulong)*(uint *)((long)plVar7 + 4)) {
        return (int *)0x0;
      }
      piVar5 = (int *)(*(long *)(piVar5 + 0x22) + (ulong)*(uint *)((long)plVar7 + 4) * 0x14);
      if (*piVar5 != *(int *)plVar7) {
        piVar5 = (int *)0x0;
      }
      return piVar5;
    }
    return piVar5;
  }
  return param_1;
}



/* Entry: 10b905c68; end: 10b905c73;  */

void FUN_10b905c68(void)

{
  return;
}



/* Entry: 10b905c74; end: 10b905d73;  */

long ** FUN_10b905c74(long param_1,long *param_2)

{
  undefined1 in_ZR;
  long **pplVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long lVar3;
  long *aplStack_a0 [2];
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  code *pcStack_68;
  undefined8 auStack_60 [5];
  undefined8 uStack_38;
  
  pplVar1 = aplStack_a0;
  lVar3 = param_1;
  plVar2 = param_2;
  func_0x00010b90699c();
  uStack_38 = extraout_x8;
  func_0x00010b8e1148(aplStack_a0,lVar3 + 0x18);
  if (aplStack_a0[0] != (long *)0x0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
      do {
        func_0x00010b906c70();
      } while (extraout_w10 != 0);
    }
    do {
      func_0x00010b906a10();
    } while (extraout_w10_00 != 0);
    lStack_88 = param_1;
    FUN_10b905d74(auStack_80,param_2);
    pcStack_68 = FUN_10b905dd0;
    FUN_10b905f80(auStack_60,&lStack_88);
    plVar2 = &lStack_90;
    lStack_90 = lVar3;
    (**(code **)(*aplStack_a0[0] + 0x20))(aplStack_a0[0],plVar2,2,0,&pcStack_68);
    func_0x000105276914(lStack_90);
    func_0x00010b906d08(auStack_60[0]);
    FUN_10b905ffc(&lStack_88);
    func_0x000105276914(0);
  }
  func_0x00010b8e0a68();
  func_0x00010b90694c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    lVar3 = *plVar2;
    *pplVar1 = (long *)lVar3;
    if (lVar3 == 2) {
      lVar3 = 0;
      if (plVar2[1] != 0) {
        do {
          func_0x00010b906a90();
          lVar3 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      pplVar1[1] = (long *)lVar3;
    }
    else if (lVar3 == 1) {
      FUN_10b9a8f04(pplVar1 + 1,plVar2 + 1);
    }
    return (long **)(long *)pplVar1;
  }
  return pplVar1;
}



/* Entry: 10b905d74; end: 10b905dcf;  */

long * FUN_10b905d74(long *param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 == 2) {
    lVar1 = 0;
    if (param_2[1] != 0) {
      do {
        func_0x00010b906a90();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    param_1[1] = lVar1;
  }
  else if (lVar1 == 1) {
    FUN_10b9a8f04(param_1 + 1,param_2 + 1);
  }
  return param_1;
}



/* Entry: 10b905dd0; end: 10b905f7f;  */

undefined8 * FUN_10b905dd0(long *param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar5;
  code *extraout_x9_01;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_f0 [32];
  undefined8 auStack_d0 [4];
  long lStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 auStack_80 [4];
  undefined8 auStack_5a [2];
  byte bStack_4a;
  undefined1 auStack_49 [16];
  char cStack_39;
  undefined8 uStack_38;
  
  plVar2 = param_1;
  lVar7 = param_2;
  func_0x00010b90699c();
  lVar7 = *(long *)(lVar7 + 0x10);
  uStack_38 = extraout_x8;
  FUN_10b8dcd48(auStack_49,*plVar2,lVar7 + 0x28);
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)(lVar7 + 0x30);
  FUN_10b8dcd48(auStack_5a);
  uVar1 = 0;
  if ((cStack_39 == '\x01') && (uVar1 = 0, bStack_4a == 1)) {
    uVar1 = *(long *)(param_2 + 0x18) == 1;
    if ((bool)uVar1) {
      lStack_b0 = 0;
      puStack_a8 = (undefined8 *)0x0;
      uStack_a0 = uStack_a0 & 0xffffffffffffff00;
      lStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      puVar4 = (undefined8 *)(param_2 + 0x20);
      (**(code **)(**(long **)(lVar7 + 0x38) + 0x28))
                (auStack_80,*(long **)(lVar7 + 0x38),puVar4,&lStack_b0,param_1[1]);
      if ((*(byte *)(param_1[1] + 8) & 1) == 0) {
        FUN_10b8ffe04(auStack_d0);
        lStack_b0 = *param_1;
        lStack_98 = param_1[1];
        uStack_a0 = 1;
        puVar3 = &uStack_90;
        puStack_a8 = auStack_d0;
        func_0x0001080e01a8();
        if ((bStack_4a & 1) == 0) goto LAB_10b905f7c;
        func_0x00010b906c60();
        puVar4 = auStack_5a;
        (*extraout_x9_01)(auStack_f0);
        func_0x00010b906bbc();
      }
      else {
        lStack_b0 = *param_1;
        uStack_a0 = 1;
        puStack_a8 = auStack_80;
        lStack_98 = param_1[1];
        func_0x0001080e01a8(&uStack_90);
        func_0x00010b906c60();
        lVar7 = -0x39;
        pcVar5 = extraout_x9;
LAB_10b905ef8:
        puVar4 = (undefined8 *)(&stack0xfffffffffffffff0 + lVar7);
        (*pcVar5)(auStack_d0);
      }
      func_0x0001080e0bc0(auStack_d0);
    }
    else {
      puVar3 = (undefined8 *)*param_1;
      puVar4 = (undefined8 *)(param_2 + 0x20);
      func_0x00010b900534(auStack_80,puVar3,puVar4,param_1[1]);
      uVar1 = *(char *)(param_1[1] + 8) == '\x01';
      if ((bool)uVar1) {
        lStack_b0 = *param_1;
        uStack_a0 = 1;
        puStack_a8 = auStack_80;
        lStack_98 = param_1[1];
        func_0x00010b906a40(&lStack_b0);
        if ((bStack_4a & 1) == 0) goto LAB_10b905f7c;
        func_0x00010b906c60();
        lVar7 = -0x4a;
        pcVar5 = extraout_x9_00;
        goto LAB_10b905ef8;
      }
    }
    puVar3 = auStack_80;
    func_0x0001080e0bc0();
  }
  func_0x00010b90694c(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
LAB_10b905f7c:
  func_0x0001080da3e4();
  uVar6 = *puVar4;
  *puVar3 = &PTR_FUN_110d74710;
  puVar3[1] = uVar6;
  *puVar4 = 0;
  FUN_10b905d74(puVar3 + 2,puVar4 + 1);
  return puVar3;
}



/* Entry: 10b905f80; end: 10b905fb3;  */

undefined8 * FUN_10b905f80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_FUN_110d74710;
  param_1[1] = uVar1;
  *param_2 = 0;
  FUN_10b905d74(param_1 + 2,param_2 + 1);
  return param_1;
}



/* Entry: 10b905fb4; end: 10b905ffb;  */

undefined8 * FUN_10b905fb4(long param_1)

{
  func_0x000104bda914(param_1 + 0x10);
  func_0x00010b905a70(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10b905ffc; end: 10b906027;  */

undefined8 * FUN_10b905ffc(undefined8 *param_1)

{
  func_0x000104bda914(param_1 + 1);
  func_0x00010b905a70(*param_1);
  return param_1;
}



/* Entry: 10b906028; end: 10b90602b;  */

undefined8 * FUN_10b906028(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74740;
  func_0x00010b9062f4(param_1 + 3);
  return param_1;
}



/* Entry: 10b90602c; end: 10b90603f;  */

void FUN_10b90602c(void)

{
  FUN_10b9062c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b906040; end: 10b9062c7;  */

void FUN_10b906040(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_70;
  undefined8 auStack_68 [2];
  long lStack_58;
  
  puVar2 = (undefined8 *)*param_3;
  if ((puVar2 == (undefined8 *)0x0) ||
     (___dynamic_cast(puVar2,&PTR_DAT_110d7ed28,&PTR_DAT_110d747a0,0xfffffffffffffffe),
     puVar3 = puVar2, puVar2 == (undefined8 *)0x0)) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    do {
      func_0x00010b906a10();
    } while (extraout_w10 != 0);
    puVar6 = puVar2;
    if (puVar2[10] == *(long *)(param_2 + 0x18)) {
      plVar5 = *(long **)(param_2 + 0x10);
      do {
        func_0x00010b906a10();
      } while (extraout_w10_02 != 0);
      goto LAB_10b906168;
    }
  }
  FUN_10b9a3a64(&puStack_70,param_4);
  lVar7 = *param_3;
  bVar1 = *(byte *)(param_2 + 0x20);
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  if (lVar7 != 0) {
    do {
      func_0x00010b906a10();
    } while (extraout_w10_00 != 0);
  }
  lStack_58 = lVar7;
  FUN_10b8de964(puVar2,&lStack_58,bVar1 & 1,&puStack_70);
  func_0x000104bda3ac(lVar7);
  *puVar2 = &PTR_DAT_110d747c8;
  puVar2[2] = &PTR_FUN_110d74810;
  uVar4 = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
    do {
      func_0x00010b906a90();
      uVar4 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  puVar2[10] = uVar4;
  FUN_10b906478(puVar6);
  FUN_10b906478(0);
  puVar3 = auStack_68;
  FUN_10b9a3d64(puVar3);
  plVar5 = *(long **)(param_2 + 0x10);
  do {
    func_0x00010b906a10();
  } while (extraout_w10_01 != 0);
LAB_10b906168:
  puStack_70 = puVar2;
  func_0x00010b906a20();
  (**(code **)(*plVar5 + 0x70))(param_1,plVar5,&puStack_70,puVar3);
  func_0x0001080e0c4c(puStack_70);
  FUN_10b906478(puVar2);
  return;
}



/* Entry: 10b9062c8; end: 10b906317;  */

undefined8 * FUN_10b9062c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74740;
  func_0x00010b9062f4(param_1 + 3);
  return param_1;
}



/* Entry: 10b906318; end: 10b90633f;  */

void FUN_10b906318(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9069fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b906340; end: 10b906353;  */

void FUN_10b906340(void)

{
  FUN_10b90641c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b906354; end: 10b90640b;  */

undefined8 *
FUN_10b906354(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,long *param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 auStack_50 [4];
  byte bStack_30;
  undefined8 uStack_28;
  
  plVar3 = param_5;
  func_0x00010b90699c();
  lStack_78 = param_2 + 0x28;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_28 = extraout_x8;
  (**(code **)(**(long **)(param_2 + 0x50) + 0x20))
            (auStack_50,*(long **)(param_2 + 0x50),*param_3,plVar3[1],plVar3[2],&uStack_80);
  if ((bStack_30 & 1) == 0) {
    lVar4 = *param_5;
    *param_1 = *(undefined8 *)(lVar4 + 0x140);
    uVar5 = *(undefined8 *)(lVar4 + 0x148);
    param_1[2] = *(undefined8 *)(lVar4 + 0x150);
    param_1[1] = uVar5;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    func_0x00010b906c20();
  }
  puVar1 = auStack_50;
  FUN_10b906458();
  func_0x00010b90694c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = puVar1 + -2;
  *puVar2 = &PTR_DAT_110d747c8;
  *puVar1 = &PTR_FUN_110d74810;
  func_0x00010b9062f4(puVar1 + 8);
  *puVar2 = &PTR_DAT_110d72728;
  *puVar1 = &PTR_DAT_110d72770;
  func_0x000107c278f4(puVar1 + 6);
  FUN_10b9a3d64(puVar1 + 4);
  func_0x00010b8c39c8(puVar1);
  return puVar2;
}



/* Entry: 10b90640c; end: 10b90641b;  */

undefined8 * FUN_10b90640c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_DAT_110d747c8;
  *param_1 = &PTR_FUN_110d74810;
  func_0x00010b9062f4(param_1 + 8);
  *puVar1 = &PTR_DAT_110d72728;
  *param_1 = &PTR_DAT_110d72770;
  func_0x000107c278f4(param_1 + 6);
  FUN_10b9a3d64(param_1 + 4);
  func_0x00010b8c39c8(param_1);
  return puVar1;
}



/* Entry: 10b90641c; end: 10b906457;  */

undefined8 * FUN_10b90641c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d747c8;
  param_1[2] = &PTR_FUN_110d74810;
  func_0x00010b9062f4(param_1 + 10);
  *param_1 = &PTR_DAT_110d72728;
  param_1[2] = &PTR_DAT_110d72770;
  func_0x000107c278f4(param_1 + 8);
  FUN_10b9a3d64(param_1 + 6);
  func_0x00010b8c39c8(param_1 + 2);
  return param_1;
}



/* Entry: 10b906458; end: 10b906477;  */

void FUN_10b906458(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001080e0bc0();
  }
  return;
}



/* Entry: 10b906478; end: 10b90649b;  */

void FUN_10b906478(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9069fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b90649c; end: 10b9065bb;  */

void FUN_10b90649c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x20;
  long lVar4;
  long *plVar5;
  
  lVar4 = *(long *)(param_6 + 0x10);
  if (lVar4 == 0) {
    plVar5 = *(long **)(param_6 + 0x18);
    __Znwm(0x90);
    func_0x00010b906aa0();
    func_0x00010b906b78(&PTR_FUN_110d748e0);
    lVar4 = 0;
    if (*plVar5 != 0) {
      do {
        func_0x00010b906a90();
        lVar4 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    unaff_x20[0x11] = lVar4;
    do {
      func_0x00010b906a10();
    } while (extraout_w10_00 != 0);
    do {
      lVar4 = *extraout_x8_02 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_02,0x10);
      if (bVar2) {
        *extraout_x8_02 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    plVar5 = *(long **)(param_6 + 0x18);
    lVar3 = 0xd8;
    __Znwm(0xd8);
    func_0x00010b906aa0();
    func_0x00010b906b78(&PTR_FUN_110d74838);
    FUN_10b8e0de0(lVar3 + 0x88,param_2,lVar4 + 8,param_4,param_5,0);
    lVar4 = 0;
    if (*plVar5 != 0) {
      do {
        func_0x00010b906a90();
        lVar4 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    unaff_x20[0x1a] = lVar4;
    do {
      func_0x00010b906a10();
    } while (extraout_w10 != 0);
    do {
      lVar4 = *extraout_x8_00 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_00,0x10);
      if (bVar2) {
        *extraout_x8_00 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (lVar4 == 0) {
    (**(code **)(*unaff_x20 + 8))();
  }
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10b9065bc; end: 10b9065bf;  */

undefined8 * FUN_10b9065bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010b906b78(&PTR_FUN_110d74838);
  func_0x00010b9062f4(puVar1 + 0x1a);
  FUN_10b8e0f58(param_1 + 0x11);
  *param_1 = &PTR_FUN_110d76370;
  param_1[2] = &PTR_DAT_110d763d8;
  func_0x00010b8c2eec(param_1 + 0xe);
  func_0x000107c278f4(param_1 + 0xc);
  FUN_10b8e0f58(param_1 + 2);
  return param_1;
}



/* Entry: 10b9065c0; end: 10b9065d3;  */

void FUN_10b9065c0(void)

{
  FUN_10b906734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9065d4; end: 10b906723;  */

undefined1 ** FUN_10b9065d4(long param_1,undefined8 *param_2)

{
  undefined1 **ppuVar1;
  undefined1 in_ZR;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x9;
  long unaff_x19;
  undefined8 uVar5;
  undefined1 **unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *unaff_x23;
  long lVar6;
  undefined1 *apuStack_f0 [7];
  undefined1 *apuStack_b8 [4];
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined8 uStack_68;
  
  ppuVar1 = apuStack_f0;
  func_0x00010b906c9c();
  func_0x00010b90699c();
  func_0x00010b906bd8();
  ppuVar2 = (undefined1 **)(param_1 + 0x88);
  FUN_10b8e129c(ppuVar2,*param_2,unaff_x23[1]);
  uVar5 = extraout_x8;
  if ((*(byte *)(unaff_x23[1] + 8) & 1) == 0) {
    func_0x00010b906c80();
  }
  else {
    lVar6 = unaff_x19 << 5;
    apuStack_f0[0] = (undefined1 *)apuStack_f0;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    unaff_x21 = apuStack_f0 + unaff_x19 * -4;
    ppuVar2 = unaff_x21;
    if (unaff_x19 != 0) {
      do {
        func_0x0001080e0180(ppuVar2);
        lVar6 = lVar6 + -0x20;
        in_ZR = lVar6 == 0;
        ppuVar2 = ppuVar2 + 4;
      } while (!(bool)in_ZR);
    }
    ppuVar2 = *(undefined1 ***)(unaff_x22 + 0xd0);
    func_0x00010b906c04();
    (*extraout_x8_00)();
    if (((ulong)ppuVar2 & 1) == 0) {
      func_0x00010b906c80();
      ppuVar1 = (undefined1 **)apuStack_f0[0];
    }
    else {
      uStack_98 = *unaff_x23;
      ppuStack_90 = unaff_x21;
      func_0x00010b906a40(&uStack_98);
      func_0x00010b906ad8();
      if ((*(byte *)(unaff_x23[1] + 8) & 1) == 0) {
        func_0x00010b906c80();
      }
      else {
        func_0x00010b906d5c(*(undefined8 *)(unaff_x22 + 0xd0));
        (*extraout_x9)(extraout_x8);
      }
      ppuVar1 = (undefined1 **)apuStack_f0[0];
      ppuVar2 = apuStack_b8;
      func_0x0001080e0bc0();
    }
    unaff_x22 = (undefined1 *)ppuVar1;
    if (unaff_x19 != 0) {
      lVar6 = unaff_x19 * -0x20;
      ppuVar2 = unaff_x21 + unaff_x19 * 4 + -4;
      do {
        func_0x0001080e0bc0();
        ppuVar2 = ppuVar2 + -4;
        lVar6 = lVar6 + 0x20;
        uVar5 = 0;
      } while (lVar6 != 0);
    }
  }
  func_0x00010b90694c(uStack_68);
  if ((bool)in_ZR) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = ppuVar2 + -2;
  *(undefined8 *)((long)ppuVar1 + -0x20) = uVar5;
  *(long *)((long)ppuVar1 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)ppuVar1 + -8) = FUN_10b906724;
  ppuVar4 = ppuVar3;
  func_0x00010b906b78(&PTR_FUN_110d74838);
  func_0x00010b9062f4(ppuVar4 + 0x1a);
  FUN_10b8e0f58(ppuVar2 + 0xf);
  *(undefined1 **)((long)ppuVar1 + -0x30) = unaff_x22;
  *(undefined1 ***)((long)ppuVar1 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar1 + -0x20) = *(undefined8 *)((long)ppuVar1 + -0x20);
  *(undefined8 *)((long)ppuVar1 + -0x18) = *(undefined8 *)((long)ppuVar1 + -0x18);
  *(undefined8 *)((long)ppuVar1 + -0x10) = *(undefined8 *)((long)ppuVar1 + -0x10);
  *(undefined8 *)((long)ppuVar1 + -8) = *(undefined8 *)((long)ppuVar1 + -8);
  *ppuVar3 = (undefined1 *)&PTR_FUN_110d76370;
  *ppuVar2 = (undefined1 *)&PTR_DAT_110d763d8;
  func_0x00010b8c2eec(ppuVar2 + 0xc);
  func_0x000107c278f4(ppuVar2 + 10);
  FUN_10b8e0f58(ppuVar2);
  return ppuVar3;
}



/* Entry: 10b906724; end: 10b906733;  */

undefined8 * FUN_10b906724(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + -2;
  puVar2 = puVar1;
  func_0x00010b906b78(&PTR_FUN_110d74838);
  func_0x00010b9062f4(puVar2 + 0x1a);
  FUN_10b8e0f58(param_1 + 0xf);
  *puVar1 = &PTR_FUN_110d76370;
  *param_1 = &PTR_DAT_110d763d8;
  func_0x00010b8c2eec(param_1 + 0xc);
  func_0x000107c278f4(param_1 + 10);
  FUN_10b8e0f58(param_1);
  return puVar1;
}



/* Entry: 10b906734; end: 10b90676f;  */

undefined8 * FUN_10b906734(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010b906b78(&PTR_FUN_110d74838);
  func_0x00010b9062f4(puVar1 + 0x1a);
  FUN_10b8e0f58(param_1 + 0x11);
  *param_1 = &PTR_FUN_110d76370;
  param_1[2] = &PTR_DAT_110d763d8;
  func_0x00010b8c2eec(param_1 + 0xe);
  func_0x000107c278f4(param_1 + 0xc);
  FUN_10b8e0f58(param_1 + 2);
  return param_1;
}



/* Entry: 10b906770; end: 10b906773;  */

undefined8 * FUN_10b906770(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010b906b78(&PTR_FUN_110d748e0);
  func_0x00010b9062f4(puVar1 + 0x11);
  *param_1 = &PTR_FUN_110d76370;
  param_1[2] = &PTR_DAT_110d763d8;
  func_0x00010b8c2eec(param_1 + 0xe);
  func_0x000107c278f4(param_1 + 0xc);
  FUN_10b8e0f58(param_1 + 2);
  return param_1;
}



/* Entry: 10b906774; end: 10b906787;  */

void FUN_10b906774(void)

{
  FUN_10b9068bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b906788; end: 10b9068ab;  */

undefined8 * FUN_10b906788(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long in_x4;
  undefined8 *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x9;
  long unaff_x19;
  undefined1 *puVar5;
  long unaff_x22;
  undefined8 *unaff_x23;
  long lVar6;
  undefined1 *puStack_110;
  undefined1 auStack_f0 [56];
  undefined8 auStack_b8 [4];
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_68;
  
  func_0x00010b906c9c();
  func_0x00010b90699c();
  func_0x00010b906bd8();
  lVar6 = in_x4 << 5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = auStack_f0 + in_x4 * -0x20;
  puVar1 = puVar5;
  if (in_x4 != 0) {
    do {
      func_0x0001080e0180(puVar1);
      lVar6 = lVar6 + -0x20;
      in_ZR = lVar6 == 0;
      puVar1 = puVar1 + 0x20;
    } while (!(bool)in_ZR);
  }
  puVar2 = *(undefined8 **)(unaff_x22 + 0x88);
  func_0x00010b906c04();
  (*extraout_x8_00)();
  if (((ulong)puVar2 & 1) == 0) {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
  }
  else {
    uStack_98 = *unaff_x23;
    puStack_90 = puVar5;
    func_0x00010b906a40(&uStack_98);
    func_0x00010b906ad8();
    if ((*(byte *)(unaff_x23[1] + 8) & 1) == 0) {
      *(undefined2 *)(extraout_x8 + 1) = 1;
      *extraout_x8 = 0;
    }
    else {
      func_0x00010b906d5c(*(undefined8 *)(unaff_x22 + 0x88));
      (*extraout_x9)(extraout_x8);
    }
    puVar2 = auStack_b8;
    func_0x0001080e0bc0();
  }
  if (unaff_x19 != 0) {
    lVar6 = unaff_x19 * -0x20;
    puVar2 = (undefined8 *)(puVar5 + unaff_x19 * 0x20 + -0x20);
    do {
      func_0x0001080e0bc0();
      puVar2 = puVar2 + -4;
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != 0);
  }
  func_0x00010b90694c(uStack_68);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = puVar2 + -2;
  puVar4 = puVar3;
  puStack_110 = puVar5;
  func_0x00010b906b78(&PTR_FUN_110d748e0);
  func_0x00010b9062f4(puVar4 + 0x11);
  *puVar3 = &PTR_FUN_110d76370;
  *puVar2 = &PTR_DAT_110d763d8;
  func_0x00010b8c2eec(puVar2 + 0xc);
  func_0x000107c278f4(puVar2 + 10);
  FUN_10b8e0f58(puVar2);
  return puVar3;
}



/* Entry: 10b9068ac; end: 10b9068bb;  */

undefined8 * FUN_10b9068ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + -2;
  puVar2 = puVar1;
  func_0x00010b906b78(&PTR_FUN_110d748e0);
  func_0x00010b9062f4(puVar2 + 0x11);
  *puVar1 = &PTR_FUN_110d76370;
  *param_1 = &PTR_DAT_110d763d8;
  func_0x00010b8c2eec(param_1 + 0xc);
  func_0x000107c278f4(param_1 + 10);
  FUN_10b8e0f58(param_1);
  return puVar1;
}



/* Entry: 10b9068bc; end: 10b9068ef;  */

undefined8 * FUN_10b9068bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010b906b78(&PTR_FUN_110d748e0);
  func_0x00010b9062f4(puVar1 + 0x11);
  *param_1 = &PTR_FUN_110d76370;
  param_1[2] = &PTR_DAT_110d763d8;
  func_0x00010b8c2eec(param_1 + 0xe);
  func_0x000107c278f4(param_1 + 0xc);
  FUN_10b8e0f58(param_1 + 2);
  return param_1;
}



/* Entry: 10b9068f0; end: 10b9068ff;  */

void FUN_10b9068f0(void)

{
  return;
}



/* Entry: 10b906900; end: 10b906913;  */

void FUN_10b906900(void)

{
  func_0x00010b90691c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b906914; end: 10b906d87;  */

void FUN_10b906914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b906ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b906d88; end: 10b906e3b;  */

undefined8 *
FUN_10b906d88(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  *param_1 = param_2;
  uStack_21 = param_3;
  FUN_10b906e3c(param_1 + 1,param_2,&uStack_21,param_4);
  uStack_30 = 0;
  uStack_38 = 0;
  if (param_1[1] != 0) {
    do {
      func_0x00010b90fce8();
      uStack_38 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_40 = 0;
  func_0x000107c31088(auStack_48,&UNK_10f7cccfe);
  FUN_10b907f3c(param_1 + 2,&uStack_30,&uStack_38,&uStack_40,auStack_48);
  func_0x00010b910428();
  func_0x000107c2ab10(uStack_40);
  FUN_10b907f14(uStack_38);
  param_1[0x1d] = &UNK_10dd5b8b0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  return param_1;
}



/* Entry: 10b906e3c; end: 10b906e73;  */

void FUN_10b906e3c(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  
  func_0x00010b9102e0();
  uVar1 = 0xe0;
  __Znwm();
  FUN_10b9036e0();
  *extraout_x8 = uVar1;
  return;
}



/* Entry: 10b906e74; end: 10b906ebb;  */

long FUN_10b906e74(long param_1)

{
  FUN_10b903778(*(undefined8 *)(param_1 + 8));
  func_0x00010b907758(param_1 + 0x118);
  func_0x00010b907804(param_1 + 0xe8);
  FUN_10b907870(param_1 + 0x10);
  FUN_10b907eac((undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10b906ebc; end: 10b90719b;  */

void FUN_10b906ebc(void)

{
  undefined1 auStack_50 [16];
  
  func_0x00010b9103d4();
  func_0x00010b9a8f60(auStack_50);
  func_0x00010b910298();
  func_0x00010b9102b4();
  return;
}



/* Entry: 10b90719c; end: 10b9071c3;  */

void FUN_10b90719c(void)

{
  undefined1 in_ZR;
  
  func_0x00010b910720();
  if (!(bool)in_ZR) {
    func_0x00010b91035c();
    func_0x00010b8e0a44();
  }
  return;
}



/* Entry: 10b9071c4; end: 10b907267;  */

long * FUN_10b9071c4(long param_1,undefined **param_2,undefined **param_3)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined *extraout_x8_01;
  undefined *puVar6;
  undefined8 extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  long lVar7;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long *unaff_x19;
  undefined1 *unaff_x24;
  long alStack_1b8 [4];
  long alStack_198 [4];
  undefined8 uStack_178;
  undefined1 *puStack_170;
  long *plStack_168;
  long lStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 auStack_120 [2];
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long alStack_d8 [4];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  ppuVar5 = param_3;
  func_0x00010b90fc50();
  uStack_48 = extraout_x8;
  func_0x00010b9108bc(&lStack_60);
  uVar1 = lStack_60 == 1;
  if ((bool)uVar1) {
    unaff_x24 = auStack_78;
    func_0x000107c31030(auStack_78,auStack_58);
    ppuVar5 = param_2;
    FUN_10b908074(param_1,auStack_78,param_2,param_3);
    func_0x000107c27900(auStack_70);
  }
  else {
    func_0x00010b910590();
    func_0x00010b910930();
  }
  plVar2 = &lStack_60;
  func_0x000107c2a668();
  func_0x00010b90fc10(uStack_48);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  lStack_b0 = param_1;
  ppuStack_a8 = param_2;
  ppuStack_a0 = param_3;
  func_0x00010b9104fc();
  func_0x00010b910148();
  func_0x00010b90fcb8();
  puStack_f8 = &UNK_10f7ccd01;
  uStack_f0 = 0xe;
  uStack_b8 = extraout_x8_00;
  (**(code **)(*(long *)*plVar2 + 0xd0))(alStack_d8,(long *)*plVar2,ppuVar5 + 1,&puStack_f8);
  uVar1 = 0;
  if (*(char *)(param_2 + 1) == '\x01') {
    puStack_128 = &UNK_10f7ccd10;
    auStack_120[0] = 0xc;
    func_0x00010b9107d8(&puStack_f8,*unaff_x19,param_1 + 8,&puStack_128);
    uVar1 = *(char *)(param_2 + 1) == '\x01';
    if ((bool)uVar1) {
      FUN_10b9073d0(&lStack_100,*unaff_x19,alStack_d8,&puStack_f8);
      puVar6 = (undefined *)0x0;
      if (*param_3 != (undefined *)0x0) {
        do {
          func_0x00010b91066c();
          puVar6 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      auStack_120[0] = CONCAT62(auStack_120[0]._2_6_,0xff03);
      param_3 = &puStack_110;
      puStack_128 = puVar6;
      func_0x000107c30fa8(&puStack_110,&puStack_128);
      func_0x00010b910428();
      param_2 = &puStack_128;
      func_0x000107c31030(&puStack_128,&puStack_110);
      uStack_130 = 0;
      if (lStack_100 != 0) {
        do {
          func_0x00010b90fce8();
          uStack_130 = extraout_x8_02;
        } while (extraout_w11_00 != 0);
      }
      FUN_10b907458(unaff_x19 + 2,&puStack_128,&uStack_130);
      FUN_10b90a5b8(uStack_130);
      func_0x000107c27900(auStack_120);
      func_0x000107c27900(auStack_108);
      FUN_10b90f23c(lStack_100);
    }
    func_0x0001080e0bc0(&puStack_f8);
  }
  plVar2 = alStack_d8;
  func_0x0001080e0bc0(plVar2);
  func_0x00010b90fc10(uStack_b8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puStack_170 = unaff_x24;
    plStack_168 = &lStack_60;
    lStack_160 = param_1;
    ppuStack_158 = param_2;
    ppuStack_150 = param_3;
    func_0x00010b91020c();
    func_0x00010b90fcb8();
    uVar3 = 0x58;
    uStack_178 = extraout_x8_04;
    __Znwm();
    func_0x0001080e08ac(alStack_198,param_3);
    func_0x0001080e08ac(alStack_1b8);
    plVar2 = alStack_198;
    FUN_10b90f07c(uVar3,param_2,plVar2,alStack_1b8);
    *extraout_x8_03 = uVar3;
    plVar4 = alStack_1b8;
    func_0x0001080e0bc0(plVar4);
    func_0x00010b910788();
    func_0x00010b90fc10(uStack_178);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      FUN_10b90f264(plVar4 + 8);
      func_0x00010b910720();
      if (!(bool)uVar1) {
        lVar7 = 0;
        if (*plVar2 != 0) {
          do {
            func_0x00010b90fce8();
            lVar7 = extraout_x8_05;
          } while (extraout_w11_01 != 0);
        }
        *unaff_x19 = lVar7;
        FUN_10b90a5b8();
      }
      return unaff_x19;
    }
    return plVar4;
  }
  return plVar2;
}



/* Entry: 10b907268; end: 10b9073cf;  */

undefined8 * FUN_10b907268(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined *extraout_x8_00;
  undefined *puVar5;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined **unaff_x21;
  long unaff_x22;
  undefined8 auStack_138 [4];
  long alStack_118 [4];
  undefined8 uStack_f8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 auStack_a0 [2];
  long lStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 auStack_58 [4];
  undefined8 uStack_38;
  
  func_0x00010b9104fc();
  func_0x00010b910148();
  func_0x00010b90fcb8();
  puStack_78 = &UNK_10f7ccd01;
  uStack_70 = 0xe;
  uStack_38 = extraout_x8;
  (**(code **)(*(long *)*param_1 + 0xd0))(auStack_58,(long *)*param_1,param_3 + 8,&puStack_78);
  uVar1 = 0;
  if (*(char *)(unaff_x21 + 1) == '\x01') {
    puStack_a8 = &UNK_10f7ccd10;
    auStack_a0[0] = 0xc;
    func_0x00010b9107d8(&puStack_78,*unaff_x19,unaff_x22 + 8,&puStack_a8);
    uVar1 = *(char *)(unaff_x21 + 1) == '\x01';
    if ((bool)uVar1) {
      FUN_10b9073d0(&lStack_80,*unaff_x19,auStack_58,&puStack_78);
      puVar5 = (undefined *)0x0;
      if (*unaff_x20 != 0) {
        do {
          func_0x00010b91066c();
          puVar5 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      auStack_a0[0] = CONCAT62(auStack_a0[0]._2_6_,0xff03);
      unaff_x20 = &lStack_90;
      puStack_a8 = puVar5;
      func_0x000107c30fa8(&lStack_90,&puStack_a8);
      func_0x00010b910428();
      unaff_x21 = &puStack_a8;
      func_0x000107c31030(&puStack_a8,&lStack_90);
      uStack_b0 = 0;
      if (lStack_80 != 0) {
        do {
          func_0x00010b90fce8();
          uStack_b0 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      FUN_10b907458(unaff_x19 + 2,&puStack_a8,&uStack_b0);
      FUN_10b90a5b8(uStack_b0);
      func_0x000107c27900(auStack_a0);
      func_0x000107c27900(auStack_88);
      FUN_10b90f23c(lStack_80);
    }
    func_0x0001080e0bc0(&puStack_78);
  }
  puVar2 = auStack_58;
  func_0x0001080e0bc0(puVar2);
  func_0x00010b90fc10(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b91020c();
    func_0x00010b90fcb8();
    uVar3 = 0x58;
    uStack_f8 = extraout_x8_03;
    __Znwm();
    func_0x0001080e08ac(alStack_118,unaff_x20);
    func_0x0001080e08ac(auStack_138);
    plVar4 = alStack_118;
    FUN_10b90f07c(uVar3,unaff_x21,plVar4,auStack_138);
    *extraout_x8_02 = uVar3;
    puVar2 = auStack_138;
    func_0x0001080e0bc0(puVar2);
    func_0x00010b910788();
    func_0x00010b90fc10(uStack_f8);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      FUN_10b90f264(puVar2 + 8);
      func_0x00010b910720();
      if (!(bool)uVar1) {
        uVar3 = 0;
        if (*plVar4 != 0) {
          do {
            func_0x00010b90fce8();
            uVar3 = extraout_x8_04;
          } while (extraout_w11_01 != 0);
        }
        *unaff_x19 = uVar3;
        FUN_10b90a5b8();
      }
      return unaff_x19;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b9073d0; end: 10b907457;  */

undefined8 * FUN_10b9073d0(void)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 auStack_88 [4];
  long alStack_68 [4];
  undefined8 uStack_48;
  
  func_0x00010b91020c();
  func_0x00010b90fcb8();
  uVar1 = 0x58;
  uStack_48 = extraout_x8_00;
  __Znwm();
  func_0x0001080e08ac(alStack_68);
  func_0x0001080e08ac(auStack_88);
  plVar3 = alStack_68;
  FUN_10b90f07c(uVar1);
  *extraout_x8 = uVar1;
  puVar2 = auStack_88;
  func_0x0001080e0bc0(puVar2);
  func_0x00010b910788();
  func_0x00010b90fc10(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10b90f264(puVar2 + 8);
    func_0x00010b910720();
    if (!(bool)in_ZR) {
      uVar1 = 0;
      if (*plVar3 != 0) {
        do {
          func_0x00010b90fce8();
          uVar1 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      *unaff_x19 = uVar1;
      FUN_10b90a5b8();
    }
    return unaff_x19;
  }
  return puVar2;
}



/* Entry: 10b907458; end: 10b9074ab;  */

undefined8 * FUN_10b907458(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  FUN_10b90f264(param_1 + 0x40);
  func_0x00010b910720();
  if (!(bool)in_ZR) {
    uVar1 = 0;
    if (*param_3 != 0) {
      do {
        func_0x00010b90fce8();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = uVar1;
    FUN_10b90a5b8();
  }
  return unaff_x19;
}



/* Entry: 10b9074ac; end: 10b9074cf;  */

long FUN_10b9074ac(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_10b90f860(auStack_28);
  return lStack_20 + 8;
}



/* Entry: 10b9074d0; end: 10b907563;  */

void FUN_10b9074d0(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x00010b910720();
  if (!(bool)in_ZR) {
    uVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b90fce8();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = uVar1;
    func_0x00010b8e0a44();
  }
  return;
}



/* Entry: 10b907564; end: 10b90770f;  */

void FUN_10b907564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  long lVar3;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  long *plStack_58;
  long lStack_50;
  undefined8 uStack_38;
  
  func_0x00010b90fc50();
  lVar3 = *(long *)(param_1 + 8);
  plVar1 = *(long **)(lVar3 + 0x60);
  uStack_38 = extraout_x8;
  (**(code **)(*plVar1 + 0xe8))();
  if (((ulong)plVar1 & 1) != 0) {
    plVar1 = (long *)(lVar3 + 0x18);
    func_0x00010b903104(&plStack_b8,plVar1,param_2,param_3);
    if (plStack_b8 != (long *)0x0) {
      FUN_10b907710(&puStack_c0,&plStack_b8);
      if (puStack_c0 == (undefined8 *)0x0) {
        func_0x00010b91031c();
      }
      else {
        FUN_10b9a2df8(&plStack_58);
        in_ZR = lStack_50 == 1;
        if ((bool)in_ZR) {
          func_0x00010b9a8f6c();
        }
        else if (lStack_50 == 0) {
          func_0x00010b91031c();
        }
        else {
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          puVar2 = puStack_c0;
          plVar1 = plStack_58;
          for (lVar3 = lStack_50 << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
            puVar2 = &uStack_88;
            func_0x00010811ffc4(puVar2,*(long *)(*(long *)(*plVar1 + 0x20) + 0x10) + 0x10);
            plVar1 = plVar1 + 1;
          }
          func_0x000107c31084();
          func_0x00010b9a6554(&uStack_b0,&uStack_88,&DAT_10f68f19e,2);
          puStack_68 = &UNK_1003ab990;
          puStack_70 = &uStack_b0;
          func_0x000107c2793c(&UNK_10f7ccd1d);
          func_0x00010b910288(auStack_a8);
          func_0x000107c31080(&uStack_90,puVar2,auStack_a8);
          FUN_10b99f560(&puStack_70,&uStack_90);
          func_0x00010b910590();
          func_0x000104bda960(puStack_70);
          func_0x000107c278f8(uStack_90);
          func_0x00010b91079c();
          func_0x000107c278f8(uStack_b0);
          func_0x00010b91031c();
          func_0x000104bfe1e0(&uStack_88);
        }
        FUN_10b907e08(&plStack_58);
      }
      FUN_10b90cab4();
      plVar1 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        func_0x00010b90fe14();
        plVar1 = plStack_b8;
      }
      goto LAB_10b9075f8;
    }
  }
  func_0x00010b91031c();
LAB_10b9075f8:
  func_0x00010b90fc10(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar3 = *plVar1;
  if ((lVar3 != 0) && (func_0x00010b910604(lVar3,&PTR_DAT_1107e3600,&PTR_DAT_110d7e910), lVar3 != 0)
     ) {
    do {
      func_0x00010b90fe5c();
    } while (extraout_w10 != 0);
  }
  *extraout_x8_00 = lVar3;
  return;
}



/* Entry: 10b907710; end: 10b9077bf;  */

void FUN_10b907710(long *param_1,long *param_2)

{
  long lVar1;
  int extraout_w10;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (func_0x00010b910604(lVar1,&PTR_DAT_1107e3600,&PTR_DAT_110d7e910), lVar1 != 0)
     ) {
    do {
      func_0x00010b90fe5c();
    } while (extraout_w10 != 0);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10b9077c0; end: 10b9077c7;  */

void FUN_10b9077c0(undefined8 *param_1)

{
  long *unaff_x19;
  long unaff_x20;
  long *plVar1;
  
  func_0x00010b9102e0(param_1,*param_1);
  plVar1 = (long *)param_1[1];
  while (plVar1 != unaff_x19) {
    plVar1 = plVar1 + -1;
    if (*plVar1 != 0) {
      func_0x00010b90fe14();
    }
  }
  *(long **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b9077c8; end: 10b90786f;  */

void FUN_10b9077c8(long param_1)

{
  long *unaff_x19;
  long unaff_x20;
  long *plVar1;
  
  func_0x00010b9102e0();
  plVar1 = *(long **)(param_1 + 8);
  while (plVar1 != unaff_x19) {
    plVar1 = plVar1 + -1;
    if (*plVar1 != 0) {
      func_0x00010b90fe14();
    }
  }
  *(long **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b907870; end: 10b9078cb;  */

long FUN_10b907870(long param_1)

{
  func_0x000107c278f4(param_1 + 200);
  func_0x000107c278f4(param_1 + 0xc0);
  func_0x0001090b64f0(param_1 + 0xb8);
  FUN_10b9078cc(param_1 + 0x88);
  FUN_10b907af0(param_1 + 0x70);
  func_0x00010b907ba0(param_1 + 0x40);
  FUN_10b907c34(param_1 + 0x10);
  FUN_10b907ef4(param_1 + 8);
  return param_1;
}



/* Entry: 10b9078cc; end: 10b90790f;  */

long * FUN_10b9078cc(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10b907910();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_10b907acc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b907910; end: 10b9079cb;  */

void FUN_10b907910(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar1 = param_1;
  FUN_10b9079cc();
  plVar2 = param_1;
  func_0x00010b907a08();
  do {
    plVar6 = param_2 + -0x1ff;
    do {
      if (param_2 == plVar2) {
        param_1[5] = 0;
        puVar3 = (undefined8 *)param_1[1];
        while (uVar5 = param_1[2] - (long)puVar3 >> 3, 2 < uVar5) {
          __ZdlPv(*puVar3);
          puVar3 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar3;
        }
        if (uVar5 == 1) {
          lVar4 = 0x24;
        }
        else {
          if (uVar5 != 2) {
            return;
          }
          lVar4 = 0x49;
        }
        param_1[4] = lVar4;
        return;
      }
      FUN_10b907a40(param_2);
      param_2 = param_2 + 7;
      plVar6 = plVar6 + 7;
    } while ((long *)*plVar1 != plVar6);
    plVar1 = plVar1 + 1;
    param_2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 10b9079cc; end: 10b907a3f;  */

void FUN_10b9079cc(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10b907a40; end: 10b907a77;  */

long FUN_10b907a40(long param_1)

{
  FUN_10b907a78(*(undefined8 *)(param_1 + 0x30));
  func_0x000104bdc2fc(param_1 + 0x28);
  func_0x000107c27900(param_1 + 0x20);
  func_0x00010b910460();
  return param_1;
}



/* Entry: 10b907a78; end: 10b907a9f;  */

void FUN_10b907a78(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c39f2c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b90fd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b907aa0; end: 10b907acb;  */

long * FUN_10b907aa0(long *param_1)

{
  FUN_10b907acc();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b907acc; end: 10b907aef;  */

void FUN_10b907acc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b907af0; end: 10b907b57;  */

undefined8 FUN_10b907af0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b907b20(&uStack_28);
  return param_1;
}



/* Entry: 10b907b58; end: 10b907b5f;  */

void FUN_10b907b58(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b9102e0(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x10) {
    func_0x000107c27900(lVar1 + -8);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b907b60; end: 10b907c0b;  */

void FUN_10b907b60(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b9102e0();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x10) {
    func_0x000107c27900(lVar1 + -8);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}


