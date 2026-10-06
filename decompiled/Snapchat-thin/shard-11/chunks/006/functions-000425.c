/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087aef68; end: 1087aefc3;  */

void FUN_1087aef68(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    for (lVar1 = plVar2[1]; lVar1 != lVar3; lVar1 = lVar1 + -0x80) {
      func_0x0001087a3420(lVar1 + -0x70);
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1087aefc4; end: 1087aefcf;  */

undefined8 FUN_1087aefc4(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x0001087b5e24();
  uStack_38 = param_1;
  FUN_1087aef68(&uStack_38);
  return param_1;
}



/* Entry: 1087aefd0; end: 1087af043;  */

undefined8 FUN_1087aefd0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1087aef68(&uStack_28);
  return param_1;
}



/* Entry: 1087af044; end: 1087afbfb;  */

void FUN_1087af044(long *param_1,long param_2,long *param_3,long param_4,long *param_5)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  int extraout_w8_02;
  uint extraout_w8_03;
  undefined4 extraout_w8_04;
  uint extraout_w8_05;
  int extraout_w8_06;
  undefined4 extraout_w8_07;
  undefined4 extraout_w8_08;
  undefined8 extraout_x8;
  long lVar10;
  code *extraout_x8_00;
  long *extraout_x8_01;
  long *plVar11;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  uint extraout_w9;
  undefined4 uVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w10_09;
  int extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long *plVar23;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_70;
  
  func_0x000107c33538();
  puVar5 = (undefined8 *)0x2b0;
  uStack_70 = extraout_x8;
  __Znwm();
  *puVar5 = FUN_1087b40b4;
  puVar5[1] = FUN_1087b487c;
  puVar5[0x54] = param_5;
  puVar5[0x53] = param_4;
  puVar5[0x52] = param_3;
  puVar5[0x51] = param_2;
  puVar6 = (undefined8 *)0x120;
  __Znwm();
  puVar18 = puVar6;
  func_0x0001087b63e0();
  *puVar18 = &PTR_FUN_110a706d8;
  *(undefined1 *)(puVar18 + 0x13) = 0;
  *(undefined1 *)(puVar18 + 0x23) = 0;
  uStack_f0 = (undefined8 *)0x0;
  lStack_120 = 0;
  func_0x000107c27f98(&lStack_120);
  func_0x000107c27f9c(&uStack_f0);
  plVar19 = puVar5 + 3;
  *plVar19 = (long)puVar6;
  puVar5[2] = puVar6;
  uStack_f0 = (undefined8 *)0x0;
  lStack_e8 = 0;
  func_0x000107c27fec(&uStack_f0);
  uStack_f0 = (undefined8 *)puVar5[2];
  if (uStack_f0 != (undefined8 *)0x0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10 != 0);
  }
  *param_1 = (long)uStack_f0;
  uStack_f0 = (undefined8 *)0x0;
  puVar18 = &uStack_f0;
  func_0x000107c27f9c();
  puVar5[0x35] = 0;
  func_0x000107c28258();
  puVar5[0x36] = puVar18;
  *(undefined1 *)(puVar5 + 0x37) = 1;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  lVar10 = *(long *)(param_4 + 0xa78);
  uVar7 = *(undefined8 *)(param_4 + 0xa70);
  puVar5[0x4b] = *(undefined8 *)(param_4 + 0xa78);
  puVar5[0x4a] = uVar7;
  if (lVar10 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10_00 != 0);
  }
  uVar1 = *(uint *)(param_3 + 1);
  uVar3 = 0x1b < uVar1;
  uVar4 = uVar1 == 0x1c;
  uVar1 = (uint)!(bool)uVar3 & 0xd000130U >> (ulong)(uVar1 & 0x1f);
  *(undefined1 *)(puVar5 + 0x4c) = 0;
  *(undefined1 *)(puVar5 + 0x4d) = 0;
  lVar10 = *param_5;
  puVar5[0x4e] = lVar10;
  if (lVar10 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10_01 != 0);
  }
  plVar23 = puVar5 + 0x4c;
  if (uVar1 != 0) {
    plVar17 = puVar5 + 0x4f;
    func_0x000107c289cc(&uStack_f0);
    uVar3 = *(char *)(puVar5 + 0x4d) != '\0';
    uVar4 = *(char *)(puVar5 + 0x4d) == '\x01';
    if ((bool)uVar4) {
      func_0x000107c27fa0(plVar23);
    }
    else {
      *plVar23 = lStack_e8;
      if (lStack_e8 != 0) {
        do {
          func_0x0001087b6290();
        } while (extraout_w11 != 0);
      }
      *(undefined1 *)(puVar5 + 0x4d) = 1;
    }
    lVar10 = *param_5;
    *plVar17 = lVar10;
    if (lVar10 != 0) {
      do {
        func_0x0001087b58e8();
      } while (extraout_w10_02 != 0);
    }
    puVar5[0x50] = uStack_f0;
    if (uStack_f0 != (undefined8 *)0x0) {
      do {
        func_0x0001087b58e8();
      } while (extraout_w10_03 != 0);
    }
    FUN_1087afc54(&lStack_120,plVar17,puVar5 + 0x50);
    func_0x000107c288b0(puVar5 + 0x4e,&lStack_120);
    func_0x000107c27f9c(&lStack_120);
    func_0x0001087b5b30();
    func_0x000107c27f9c(plVar17);
    puVar18 = &uStack_f0;
    func_0x000107c289dc(puVar18);
  }
  uVar16 = puVar5[0x4a];
  func_0x0001087b6478();
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  func_0x0001087b5aa8(uVar7);
  (*extraout_x8_00)();
  FUN_1087afe5c(uVar16,puVar18,uVar7,uVar1,plVar23);
  puVar18 = (undefined8 *)(param_2 + 200);
  func_0x000107c289e8();
  func_0x000107c335e4();
  if ((bool)uVar4) {
    puVar5[0x1e] = puVar5[0x4b];
    puVar5[0x1d] = puVar5[0x4a];
    if (puVar5[0x4b] != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10_04 != 0);
    }
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    puVar5[0x20] = *(undefined8 *)(param_2 + 0x20);
    puVar5[0x1f] = uVar7;
    if (*(long *)(param_2 + 0x20) != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10_05 != 0);
    }
    func_0x0001087b6478();
    puVar5[0x21] = puVar18;
    puVar5[0x2a] = 0;
    puVar6 = puVar18;
    func_0x000107c335b0();
    *puVar6 = &PTR_DAT_110a70718;
    uVar7 = puVar5[0x1d];
    puVar6[2] = puVar5[0x1e];
    puVar6[1] = uVar7;
    puVar5[0x1d] = 0;
    puVar5[0x1e] = 0;
    uVar7 = puVar5[0x1f];
    puVar6[4] = puVar5[0x20];
    puVar6[3] = uVar7;
    puVar5[0x1f] = 0;
    puVar5[0x20] = 0;
    puVar6[5] = puVar18;
    puVar5[0x2a] = puVar6;
    func_0x000107c283c8(param_4 + 0xa30,puVar5 + 0x27);
    func_0x000107c27938(puVar5 + 0x27);
    puVar18 = puVar5 + 0x1d;
    FUN_1087b0580();
    puVar5[0x39] = puVar5[0x4b];
    puVar5[0x38] = puVar5[0x4a];
    if (puVar5[0x4b] != 0) {
      do {
        func_0x000107c33534();
      } while (extraout_w10_06 != 0);
    }
    func_0x0001087b6478();
    puVar5[0x3a] = puVar18;
    puVar5[0x2e] = 0;
    puVar6 = puVar18;
    func_0x000107c335bc();
    *puVar6 = &PTR_FUN_110a70798;
    uVar7 = puVar5[0x38];
    puVar6[2] = puVar5[0x39];
    puVar6[1] = uVar7;
    puVar5[0x38] = 0;
    puVar5[0x39] = 0;
    puVar6[3] = puVar18;
    puVar5[0x2e] = puVar6;
    func_0x000107c283c8(param_4 + 0xa50,puVar5 + 0x2b);
    func_0x000107c27938(puVar5 + 0x2b);
    func_0x000108794594(puVar5 + 0x38);
  }
  puVar5[0x12] = FUN_1087b0728;
  puVar5[0x13] = &PTR_FUN_110a70808;
  puVar5[0x14] = puVar5 + 0x4a;
  plVar17 = (long *)(param_4 + 0x18);
  (**(code **)(*param_3 + 0x10))(puVar5 + 0x2f,param_3,plVar17,puVar5 + 0x4e);
  puVar5[0x18] = puVar5[0x2f];
  do {
    func_0x0001087b58e8();
  } while (extraout_w10_07 != 0);
  func_0x0001087b5a94(puVar5[0x18]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x55) = 0;
    lVar10 = puVar5[0x18];
    func_0x0001087b58a4();
    lVar20 = *param_3;
    if (lVar20 == 0) {
      func_0x000107c3a5c0();
      lVar20 = *param_3;
    }
    func_0x0001087b67d4();
    plVar11 = extraout_x8_01;
    do {
      if (*plVar11 == 0) {
        func_0x0001087b5968();
        plVar11 = extraout_x8_03;
        uVar1 = extraout_w10_09;
        uVar13 = extraout_w11_01;
      }
      else {
        func_0x0001087b5c38();
        plVar11 = extraout_x8_02;
        uVar1 = extraout_w10_08;
        uVar13 = extraout_w11_00;
      }
      if ((uVar13 & 1) != 0) {
        func_0x0001087b5978();
        if ((bool)uVar4) {
          func_0x0001087b5948();
          uVar1 = extraout_w8_03;
          if ((bool)uVar3) {
            uVar1 = extraout_w9;
          }
          plVar19 = (long *)(ulong)uVar1;
          param_3 = (long *)(ulong)(uVar1 * 0x18 + 0x10);
          _malloc();
          *(char *)param_3 = (char)uVar1;
          func_0x0001087b58b4(0);
          *(long **)(lVar10 + 0x90) = param_3;
        }
        func_0x0001087b5988();
        *(long *)(extraout_x8_06 + 0x20) = lVar20;
        func_0x0001087b5958(*(undefined8 *)(lVar10 + 0x90));
        func_0x0001087b67e0();
        goto LAB_1087af630;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1087afeec(puVar5 + 0x18);
  func_0x0001087b686c();
  func_0x0001087b07bc(puVar5 + 5);
  func_0x0001087b66d4();
  func_0x0001087b63b4();
  func_0x0001087b604c();
  func_0x0001087b5f14();
LAB_1087af478:
  do {
    func_0x0001087b5a94(*(undefined8 *)puVar5[0x54]);
    if (((extraout_w8_00 >> 1 & 1) != 0) ||
       ((func_0x0001087b5a94(*(undefined8 *)puVar5[0x54]), (extraout_w8_01 >> 5 & 1) != 0 &&
        (func_0x0001087b6744(), extraout_w8_02 == 0)))) {
      func_0x0001087b62a0();
      lStack_110 = 0;
      uStack_108 = 0;
      lStack_120 = extraout_x8_04 + 0x10;
      uStack_118 = 0;
      uStack_100 = 0x13;
      func_0x0001087b6080();
      FUN_1087b5eb8();
      plVar17 = &lStack_120;
      FUN_108791610(plVar17,puVar5 + 0x47);
      FUN_108791a34(&uStack_f0,plVar17);
      lVar10 = puVar5[0x51];
      func_0x0001087b6078();
      FUN_108788618(&lStack_120);
      plVar17 = *(long **)(lVar10 + 0x48);
      FUN_108791a34(puVar5 + 0x22,&uStack_f0);
      func_0x0001087b622c(*(undefined8 *)(*plVar17 + 0x60));
      func_0x0001087b605c();
      func_0x0001087b655c();
    }
    func_0x000107c28288(puVar5 + 0x35);
    lVar10 = *(long *)(puVar5[0x51] + 0x88);
    if (lVar10 == 0) {
      uVar14 = 0;
    }
    else {
      func_0x0001087b5aa8();
      uVar14 = (undefined4)lVar10;
      (*extraout_x8_05)();
    }
    puVar18 = puVar5 + 0x35;
    FUN_1087b023c();
    lStack_e8 = CONCAT44(lStack_e8._4_4_,uVar14);
    uStack_f0 = puVar18;
    func_0x0001087b63cc();
    lVar10 = *plVar19;
    do {
      lStack_120 = 0;
      iVar15 = (int)lVar10 + 0x10;
      plVar17 = &lStack_120;
      func_0x0001087b5a50();
      if (iVar15 != 0) {
        uVar4 = *(char *)(lVar10 + 0x118) == '\x01';
        if ((bool)uVar4) {
          func_0x0001087a3420(lVar10 + 0xa8);
          *(undefined1 *)(lVar10 + 0x118) = 0;
        }
        FUN_1087b151c(lVar10 + 0x98,&uStack_f0);
        *(undefined1 *)(lVar10 + 0x118) = 1;
        func_0x0001087b6348(lVar10 + 0x10);
        plVar17 = plVar19;
        func_0x000107c31508(lVar10);
        break;
      }
    } while (((uint)lStack_120 >> 1 & 1) == 0);
    func_0x0001087b6234(plVar19);
    func_0x0001087a3420(&uStack_e0);
    func_0x0001087b5fa8();
    func_0x0001087b5e10();
    param_3 = plVar23;
    FUN_1086a8a50();
    func_0x0001087b6174();
    func_0x0001087b5dcc();
    func_0x0001087b5a40();
    func_0x0001087b5a84();
LAB_1087af630:
    func_0x000107c33530(uStack_70);
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    if ((int)plVar17 != 0) goto LAB_1087af71c;
    do {
      __Unwind_Resume(param_3);
LAB_1087af71c:
      func_0x000104bd46a0();
      iVar15 = (int)plVar17;
    } while (iVar15 == 0);
    func_0x0001087b604c();
    func_0x0001087b5f14();
    if (iVar15 != 6) {
      uVar4 = iVar15 == 5;
      if ((bool)uVar4) {
        puVar18 = (undefined8 *)puVar5[0x54];
        func_0x0001087b5d30();
        func_0x0001087b5a94(*puVar18);
        if ((extraout_w8_05 >> 1 & 1) == 0) {
          func_0x0001087b6744();
          uVar4 = extraout_w8_06 == 1;
          if (!(bool)uVar4) goto LAB_1087af984;
          func_0x0001087b6274();
          func_0x0001087b6678(puVar5[0x51]);
          func_0x0001087b6274();
          lVar10 = puVar5[0x51];
          FUN_1087b00ec(*(undefined8 *)(lVar10 + 0x48));
          plVar17 = *(long **)(lVar10 + 0x48);
          func_0x0001087b62a0();
          uStack_e0 = 0;
          uStack_d8 = 0;
          uStack_f0 = (undefined8 *)(extraout_x8_07 + 0x10);
          lStack_e8 = 0;
          uStack_d0 = 0x15;
          func_0x0001087b625c();
          FUN_1087b5eb8();
          puVar18 = &uStack_f0;
          FUN_108791610(puVar18,puVar5 + 0x2f);
          func_0x0001087b623c();
          func_0x0001087b6684();
          func_0x0001087b65a8();
          FUN_108791a34(puVar5 + 0x18,puVar18);
          (**(code **)(*plVar17 + 0x60))(plVar17,puVar5 + 0x18);
          lVar10 = puVar5[0x52];
          func_0x0001087b6054();
          func_0x0001087b6064();
          func_0x0001087b6098();
          func_0x0001087b655c();
          uVar14 = *(undefined4 *)(lVar10 + 8);
          uVar12 = 2;
        }
        else {
LAB_1087af984:
          func_0x0001087b606c();
          uVar12 = 6;
          uVar14 = extraout_w8_07;
        }
        uStack_f0 = (undefined8 *)CONCAT44(uVar12,uVar14);
        func_0x0001087b5830();
        func_0x0001087b5fb8();
        func_0x0001087b5f40();
      }
      else {
        if (iVar15 == 4) {
          func_0x0001087b5d30();
          func_0x0001087b5e30();
          FUN_1087b149c();
          func_0x0001087b5f8c();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1087afa84);
          (*pcVar2)();
        }
        uVar4 = iVar15 == 3;
        if ((bool)uVar4) {
          lVar20 = puVar5[0x53];
          lVar10 = puVar5[0x52];
          lVar22 = puVar5[0x51];
          func_0x0001087b5d30();
          uVar8 = (ulong)*(uint *)(lVar20 + 0xa20);
          func_0x000108841bf8(uVar8);
          uVar9 = (ulong)*(uint *)(lVar10 + 8);
          func_0x0001087b038c(uVar9);
          FUN_108841e44(lVar22 + 0x48,uVar8,uVar9,param_3);
          lVar10 = puVar5[0x52];
          func_0x000107c31338();
          plVar23 = (long *)(long)*(int *)(lVar20 + 0xa20);
          lVar20 = (long)*(int *)(lVar10 + 8);
          func_0x0001087b038c();
          lVar10 = lVar20;
          func_0x0001087b59e0();
          uStack_118 = 0;
          uStack_108 = 0;
          lStack_120 = lVar20;
          lStack_110 = lVar10;
          func_0x0001087b5bd0();
          func_0x0001087b60b0();
          func_0x0001087b5e88(puVar5 + 0x44);
          func_0x0001087b5aa8(*(undefined8 *)(puVar5[0x51] + 0x18));
          (*extraout_x8_08)();
          func_0x0001087b5b84();
          func_0x0001087b63c0();
          lVar10 = puVar5[0x52];
          func_0x0001087b6224();
          func_0x0001087b6090();
          func_0x0001087b5f1c();
          uStack_f0 = (undefined8 *)CONCAT44((int)lVar20,*(undefined4 *)(lVar10 + 8));
          func_0x0001087b5830();
          func_0x0001087b5fb8();
          uStack_e0 = (ulong)*(uint *)(param_3 + 1);
          uStack_f0 = (undefined8 *)(uStack_e0 & 0xff);
          lStack_e8 = 0;
          uStack_d8 = 0;
          func_0x0001087b653c();
          func_0x000107c3173c(&lStack_120);
          func_0x000107c27b94(puVar5 + 0xe,&lStack_120);
          func_0x0001087b5fb0();
          func_0x0001087b5f40();
        }
        else {
          func_0x0001087b5d30();
          uVar4 = iVar15 == 2;
          if ((bool)uVar4) {
            lVar10 = puVar5[0x53];
            lVar20 = puVar5[0x52];
            func_0x000107c31338();
            plVar23 = (long *)(long)*(int *)(lVar10 + 0xa20);
            lVar20 = (long)*(int *)(lVar20 + 8);
            func_0x0001087b038c();
            lVar10 = lVar20;
            func_0x0001087b59e0();
            uStack_118 = 0;
            uStack_108 = 0;
            lStack_120 = lVar20;
            lStack_110 = lVar10;
            func_0x0001087b5bd0();
            func_0x0001087b60b0();
            func_0x0001087b5e88(puVar5 + 0x3e);
            puVar18 = *(undefined8 **)(puVar5[0x51] + 0x18);
            func_0x0001087b5aa8();
            (*extraout_x8_09)();
            func_0x0001087b5b84();
            func_0x0001087b63c0();
            lVar10 = puVar5[0x52];
            func_0x0001087b6224();
            func_0x0001087b6090();
            func_0x0001087b5f1c();
            uStack_f0 = (undefined8 *)CONCAT44((int)lVar20,*(undefined4 *)(lVar10 + 8));
            func_0x0001087b5830();
            func_0x0001087b5fb8();
            func_0x0001087b59e0();
            uStack_f0 = puVar18;
            func_0x00010596d948(puVar5 + 0xe,&uStack_f0);
            func_0x0001087b5f40();
          }
          else {
            func_0x0001087b606c();
            uStack_f0 = (undefined8 *)CONCAT44(7,extraout_w8_08);
            func_0x0001087b5830();
            func_0x0001087b5fb8();
            func_0x0001087b5f40();
          }
        }
      }
      goto LAB_1087af478;
    }
    uVar7 = puVar5[0x53];
    uVar16 = puVar5[0x52];
    uVar21 = puVar5[0x51];
    func_0x0001087b5d30();
    FUN_1087aff78(uVar21,uVar16,uVar7,param_3,0);
    func_0x0001087b6274();
    FUN_1087b00ec(*(undefined8 *)(puVar5[0x51] + 0x48));
    lVar10 = puVar5[0x53];
    func_0x0001087b606c();
    uStack_f0 = (undefined8 *)CONCAT44(2,extraout_w8_04);
    func_0x0001087b5830();
    func_0x0001087b5fb8();
    uVar4 = *(char *)(lVar10 + 0x9f0) == '\x01';
    if ((bool)uVar4) {
      func_0x0001087b63a8(puVar5[0x53]);
    }
    func_0x0001087b5f40();
  } while( true );
}



/* Entry: 1087afbfc; end: 1087afbff;  */

undefined8 * FUN_1087afbfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70680;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    FUN_1087aefd0(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087afc00; end: 1087afc13;  */

void FUN_1087afc00(void)

{
  FUN_1087afc14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087afc14; end: 1087afc53;  */

undefined8 * FUN_1087afc14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70680;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    FUN_1087aefd0(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087afc54; end: 1087afe5b;  */

void FUN_1087afc54(void)

{
  undefined1 uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar4;
  long *plVar5;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long lVar6;
  long *extraout_x8;
  long *plVar7;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  long *unaff_x20;
  long *plVar9;
  long *unaff_x22;
  long lVar10;
  
  func_0x0001087b6824();
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = FUN_1087b3fb0;
  puVar4[1] = FUN_1087b4080;
  lVar6 = *unaff_x20;
  plVar9 = puVar4 + 4;
  *plVar9 = lVar6;
  if (lVar6 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10 != 0);
  }
  lVar6 = *unaff_x22;
  puVar4[5] = lVar6;
  if (lVar6 != 0) {
    do {
      func_0x0001087b58e8();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c27f94(puVar4 + 2);
  func_0x0001087b5dc0();
  plVar5 = plVar9;
  func_0x000107c2886c(puVar4 + 7,plVar9,puVar4 + 5);
  puVar4[6] = puVar4[7];
  do {
    func_0x0001087b58e8();
  } while (extraout_w10_01 != 0);
  func_0x0001087b5a94(puVar4[6]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 10) = 0;
    lVar6 = puVar4[6];
    func_0x0001087b58a4();
    lVar10 = *plVar5;
    if (lVar10 == 0) {
      func_0x000107c3a5c0();
      lVar10 = *plVar5;
    }
    func_0x0001087b67d4();
    plVar7 = extraout_x8;
    do {
      if (*plVar7 == 0) {
        func_0x0001087b5968();
        plVar7 = extraout_x8_01;
        uVar2 = extraout_w10_03;
        uVar8 = extraout_w11_00;
      }
      else {
        func_0x0001087b5c38();
        plVar7 = extraout_x8_00;
        uVar2 = extraout_w10_02;
        uVar8 = extraout_w11;
      }
      if ((uVar8 & 1) != 0) {
        func_0x0001087b5978();
        if ((bool)in_ZR) {
          func_0x0001087b5948();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x0001087b58d8();
          *(undefined1 *)plVar5 = uVar1;
          func_0x0001087b58b4(0);
          *(long **)(lVar6 + 0x90) = plVar5;
        }
        func_0x0001087b5988();
        *(long *)(extraout_x8_02 + 0x20) = lVar10;
        func_0x0001087b5958(*(undefined8 *)(lVar6 + 0x90));
        func_0x0001087b67e0();
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  plVar5 = puVar4 + 6;
  func_0x000107c28870();
  lVar6 = *plVar5;
  func_0x0001087b6034();
  func_0x0001087b5b74();
  if (lVar6 == 1) {
    func_0x0001087b5a94(puVar4[5]);
    if ((extraout_w8_02 >> 5 & 1) == 0) goto LAB_1087afdd4;
    func_0x0001087b5b7c(puVar4[5],puVar4 + 9);
    __ZSt17rethrow_exceptionSt13exception_ptr(puVar4 + 9);
  }
  else {
    if ((lVar6 != 0) || (func_0x0001087b5a94(*plVar9), (extraout_w8_01 >> 5 & 1) == 0)) {
LAB_1087afdd4:
      func_0x0001087b5ca4();
      func_0x0001087b5a40();
      func_0x0001087b60ec();
      func_0x0001087b5a8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar4);
      return;
    }
    func_0x0001087b5b7c(*plVar9,puVar4 + 8);
    __ZSt17rethrow_exceptionSt13exception_ptr(puVar4 + 8);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1087afe08);
  (*pcVar3)();
}



/* Entry: 1087afe5c; end: 1087afeeb;  */

void FUN_1087afe5c(long param_1)

{
  ulong *in_x4;
  int extraout_w11;
  ulong uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_28;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  uStack_30 = 0;
  if ((char)in_x4[1] == '\x01') {
    uStack_38 = *in_x4;
    if (uStack_38 != 0) {
      do {
        func_0x0001087b6290();
      } while (extraout_w11 != 0);
    }
    uStack_30 = 1;
  }
  uStack_28 = 0;
  func_0x0001087b02bc();
  FUN_1086a8a50(&uStack_38);
  return;
}



/* Entry: 1087afeec; end: 1087aff2f;  */

long FUN_1087afeec(void)

{
  code *pcVar1;
  long extraout_x8;
  uint extraout_w9;
  undefined1 auStack_28 [8];
  
  func_0x0001087b6724();
  if ((extraout_w9 >> 5 & 1) == 0) {
    return extraout_x8 + 0x98;
  }
  func_0x0001087b5b7c(auStack_28);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087aff24);
  (*pcVar1)();
}



/* Entry: 1087aff30; end: 1087aff73;  */

void FUN_1087aff30(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087b5d6c();
  *param_1 = *param_2;
  FUN_1087b12d0(param_1 + 1,param_2 + 1);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x4c);
  *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined1 *)(unaff_x20 + 0x4c) = uVar1;
  func_0x000107c27c54(unaff_x20 + 0x50,unaff_x19 + 0x50);
  return;
}



/* Entry: 1087aff74; end: 1087aff77;  */

void FUN_1087aff74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1087aff78; end: 1087b00eb;  */

void FUN_1087aff78(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  code *extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c33580();
  func_0x000107c289e8(param_1 + 0x98);
  func_0x000107c335e4();
  if ((bool)in_ZR) {
    if (param_5 == 0) {
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
    }
    else {
      uStack_b8 = 0;
      uStack_c0 = param_5;
      func_0x000107c2793c(&UNK_10f4bb1c9);
      func_0x000107c3173c(&uStack_58);
    }
    uVar3 = (ulong)*(uint *)(unaff_x20 + 8);
    func_0x0001087b038c();
    uVar4 = uVar3;
    func_0x0001087b617c();
    puVar5 = &uStack_58;
    func_0x000107c27e5c();
    uStack_b8 = 0;
    uStack_98 = 0;
    uStack_c0 = uVar3;
    puStack_b0 = puVar5;
    uStack_a8 = param_2;
    uStack_a0 = uVar4;
    func_0x000107c2793c(&UNK_10f4bb1cf);
    func_0x000107c3173c(auStack_70);
    func_0x000107c31338();
    iVar1 = *(int *)(param_3 + 0xa20);
    iVar2 = *(int *)(unaff_x20 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8,auStack_70);
    func_0x0001087b5e88(auStack_f0);
    func_0x0001087b5aa8(*(undefined8 *)(unaff_x19 + 0x18));
    (*extraout_x8)();
    uStack_c0 = CONCAT44(uStack_c0._4_4_,7);
    func_0x0001087b5c6c((long)iVar2 + (long)iVar1 * 1000);
    uStack_78 = 1;
    func_0x0001087b6518();
    func_0x0001087b5cac();
    func_0x0001087b5d28();
    func_0x0001087b5e50();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  }
  return;
}



/* Entry: 1087b00ec; end: 1087b023b;  */

void FUN_1087b00ec(long *param_1)

{
  ulong uVar1;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  long alStack_80 [4];
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  func_0x0001087b6788();
  func_0x0001087b62a0();
  alStack_80[2] = 0;
  alStack_80[3] = 0;
  alStack_80[0] = extraout_x8 + 0x10;
  alStack_80[1] = 0;
  uStack_60 = 0x14;
  func_0x000107c278b8(auStack_98,&UNK_10f4bb1eb);
  uVar1 = (ulong)*(uint *)(unaff_x21 + 8);
  func_0x0001087b038c(uVar1);
  FUN_108791610(alStack_80,auStack_98,uVar1);
  func_0x000107c278b8(auStack_b0,"message_type");
  FUN_10879cf94(*(undefined4 *)(unaff_x20 + 0x170));
  func_0x0001087b65a8();
  func_0x000107c278b8(auStack_c8,"media_type");
  uVar1 = (ulong)*(uint *)(unaff_x20 + 0x174);
  FUN_1087b14f8(uVar1);
  func_0x0001087b65a8();
  FUN_108791a34(auStack_58,uVar1);
  (**(code **)(*param_1 + 0x60))(param_1,auStack_58);
  FUN_108788618(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  func_0x000107c335e0();
  FUN_108788618(alStack_80);
  return;
}



/* Entry: 1087b023c; end: 1087b0263;  */

long FUN_1087b023c(long param_1)

{
  func_0x000107c2825c();
  return (long)((double)param_1 / 1000000.0);
}



/* Entry: 1087b0264; end: 1087b0267;  */

undefined8 * FUN_1087b0264(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a706d8;
  if (*(char *)(param_1 + 0x23) == '\x01') {
    func_0x0001087a3420(param_1 + 0x15);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087b0268; end: 1087b027b;  */

void FUN_1087b0268(void)

{
  FUN_1087b027c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b027c; end: 1087b032b;  */

undefined8 * FUN_1087b027c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a706d8;
  if (*(char *)(param_1 + 0x23) == '\x01') {
    func_0x0001087a3420(param_1 + 0x15);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087b032c; end: 1087b0347;  */

void FUN_1087b032c(long param_1)

{
  FUN_1087b0348();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1087b0348; end: 1087b03b3;  */

void FUN_1087b0348(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(char *)(param_2 + 4) == '\x01') {
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return;
}



/* Entry: 1087b03b4; end: 1087b03c7;  */

void FUN_1087b03b4(void)

{
  FUN_1087b0484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b03c8; end: 1087b03eb;  */

void FUN_1087b03c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c335b0();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_DAT_110a70718;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10_00 != 0);
  }
  puVar1[5] = puVar2[4];
  return;
}



/* Entry: 1087b03ec; end: 1087b040f;  */

void FUN_1087b03ec(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a70718;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10_00 != 0);
  }
  param_2[5] = puVar1[4];
  return;
}



/* Entry: 1087b0410; end: 1087b0477;  */

void FUN_1087b0410(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *extraout_x8;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  func_0x0001087b5aa8();
  (*extraout_x8)();
  puVar3 = puVar1;
  func_0x000107c335d8();
  if (*(char *)(puVar1 + 6) == '\x01') {
    func_0x0001087b5c04();
    uVar4 = *puVar1;
    uVar2 = uVar4;
    _strlen(uVar4);
    _strlen();
    func_0x000107c27944(uVar4,uVar2);
    if ((int)uVar4 != 0) {
      *(undefined8 **)(unaff_x20 + 8) = puVar3;
    }
  }
  return;
}



/* Entry: 1087b0478; end: 1087b0483;  */

undefined ** FUN_1087b0478(void)

{
  return &PTR_DAT_110a70778;
}



/* Entry: 1087b0484; end: 1087b04af;  */

undefined8 * FUN_1087b0484(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a70718;
  FUN_1087b0580(param_1 + 1);
  return param_1;
}



/* Entry: 1087b04b0; end: 1087b050f;  */

void FUN_1087b04b0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = &PTR_DAT_110a70718;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[4] = param_2[3];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10_00 != 0);
  }
  param_1[5] = param_2[4];
  return;
}



/* Entry: 1087b0510; end: 1087b057f;  */

void FUN_1087b0510(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 6) == '\x01') {
    func_0x0001087b5c04();
    uVar2 = *param_1;
    uVar1 = uVar2;
    _strlen(uVar2);
    _strlen();
    func_0x000107c27944(uVar2,uVar1);
    if ((int)uVar2 != 0) {
      *(undefined8 *)(unaff_x20 + 8) = param_3;
    }
  }
  return;
}



/* Entry: 1087b0580; end: 1087b05a7;  */

undefined8 FUN_1087b0580(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c28800(param_1 + 0x10);
  func_0x000107c334f0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1087b05a8; end: 1087b05ab;  */

undefined8 * FUN_1087b05a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70798;
  func_0x000108794594(param_1 + 1);
  return param_1;
}



/* Entry: 1087b05ac; end: 1087b05bf;  */

void FUN_1087b05ac(void)

{
  FUN_1087b0658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b05c0; end: 1087b05e3;  */

void FUN_1087b05c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c335bc();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_FUN_110a70798;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = puVar2[2];
  return;
}



/* Entry: 1087b05e4; end: 1087b0617;  */

void FUN_1087b05e4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a70798;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  return;
}



/* Entry: 1087b0618; end: 1087b064b;  */

long FUN_1087b0618(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001087b6508(param_2,param_1,&PTR_DAT_110a707f8);
  param_1 = param_1 + 8;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087b064c; end: 1087b0657;  */

undefined ** FUN_1087b064c(void)

{
  return &PTR_DAT_110a707f8;
}



/* Entry: 1087b0658; end: 1087b0683;  */

undefined8 * FUN_1087b0658(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70798;
  func_0x000108794594(param_1 + 1);
  return param_1;
}



/* Entry: 1087b0684; end: 1087b06bf;  */

void FUN_1087b0684(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110a70798;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c33534();
    } while (extraout_w10 != 0);
  }
  param_1[3] = param_2[2];
  return;
}



/* Entry: 1087b06c0; end: 1087b0727;  */

void FUN_1087b06c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 6) == '\x01') {
    func_0x000107c33580();
    uVar2 = *param_1;
    uVar1 = uVar2;
    _strlen(uVar2);
    _strlen();
    func_0x000107c27944(uVar2,uVar1);
    if ((int)uVar2 != 0) {
      *(undefined1 *)(unaff_x19 + 0x28) = 1;
    }
  }
  return;
}



/* Entry: 1087b0728; end: 1087b0733;  */

void FUN_1087b0728(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = **(long **)(param_1 + 0x10);
  if ((*(char *)(lVar1 + 0x30) == '\x01') && (*(char *)(lVar1 + 0x20) == '\x01')) {
    func_0x000107c28850(lVar1 + 0x18);
  }
  if (*(char *)(lVar1 + 0x30) == '\x01') {
    func_0x0001087b6300();
    FUN_1086a8a50();
    *(undefined1 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1087b0734; end: 1087b07a3;  */

void FUN_1087b0734(long param_1)

{
  long unaff_x19;
  
  if ((*(char *)(param_1 + 0x30) == '\x01') && (*(char *)(param_1 + 0x20) == '\x01')) {
    func_0x000107c28850(param_1 + 0x18);
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x0001087b6300();
    FUN_1086a8a50();
    *(undefined1 *)(unaff_x19 + 0x30) = 0;
  }
  return;
}



/* Entry: 1087b07a4; end: 1087b07eb;  */

void FUN_1087b07a4(void)

{
  return;
}



/* Entry: 1087b07ec; end: 1087b081f;  */

void FUN_1087b07ec(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1087a32c8(param_1 + 8);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 1087b0820; end: 1087b0873;  */

void FUN_1087b0820(long param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(int *)(param_1 + 0x28) != -1 || *(int *)(param_2 + 0x28) != -1) {
    if (*(int *)(param_2 + 0x28) == -1) {
      if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110a702d0)[*(uint *)(param_1 + 0x28)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      return;
    }
    func_0x0001087b6488();
  }
  return;
}



/* Entry: 1087b0874; end: 1087b0883;  */

undefined8 * FUN_1087b0874(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(int *)(puVar1 + 5) != 0) {
    func_0x0001087b6750();
    FUN_1087b08b4();
    return puVar1;
  }
  if (param_2 != param_3) {
    FUN_1087b0928(param_2,*param_3,param_3[1]);
  }
  return param_2;
}



/* Entry: 1087b0884; end: 1087b08b3;  */

undefined8 * FUN_1087b0884(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(param_1 + 5) != 0) {
    func_0x0001087b6750();
    FUN_1087b08b4();
    return param_1;
  }
  if (param_2 != param_3) {
    FUN_1087b0928(param_2,*param_3,param_3[1]);
  }
  return param_2;
}



/* Entry: 1087b08b4; end: 1087b08f3;  */

void FUN_1087b08b4(long param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_1087a2c74(auStack_38,*(undefined8 *)(param_1 + 8));
  func_0x0001087b680c();
  FUN_1087b11a8();
  func_0x000108642290(auStack_38);
  return;
}



/* Entry: 1087b08f4; end: 1087b0927;  */

undefined8 * FUN_1087b08f4(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_1087b0928(param_1,*param_2,param_2[1]);
  }
  return param_1;
}



/* Entry: 1087b0928; end: 1087b0937;  */

void FUN_1087b0928(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  uVar1 = (param_3 - param_2) / 0x118;
  if ((ulong)((param_1[2] - *param_1) / 0x118) < uVar1) {
    FUN_1087b0a28(param_1);
    plVar2 = param_1;
    FUN_108642a38(param_1,uVar1);
    FUN_1087a2d1c(param_1,plVar2);
  }
  else {
    lVar3 = param_1[1] - *param_1;
    if (uVar1 <= (ulong)(lVar3 / 0x118)) {
      FUN_1087b0a60(param_2,param_3);
      func_0x00010864305c();
      lVar3 = param_1[1];
      while (lVar3 != unaff_x19) {
        lVar3 = lVar3 + -0x118;
        func_0x000108642334();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1087b0a60(param_2,param_2 + lVar3);
    param_2 = param_2 + lVar3;
  }
  plVar2 = param_1 + 2;
  FUN_1087a2d9c(plVar2,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 1087b0938; end: 1087b0a27;  */

void FUN_1087b0938(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  if ((ulong)((param_1[2] - *param_1) / 0x118) < param_4) {
    FUN_1087b0a28(param_1);
    plVar1 = param_1;
    FUN_108642a38(param_1,param_4);
    FUN_1087a2d1c(param_1,plVar1);
  }
  else {
    lVar2 = param_1[1] - *param_1;
    if (param_4 <= (ulong)(lVar2 / 0x118)) {
      FUN_1087b0a60(param_2,param_3);
      func_0x00010864305c();
      lVar2 = param_1[1];
      while (lVar2 != unaff_x19) {
        lVar2 = lVar2 + -0x118;
        func_0x000108642334();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1087b0a60(param_2,param_2 + lVar2);
    param_2 = param_2 + lVar2;
  }
  plVar1 = param_1 + 2;
  FUN_1087a2d9c(plVar1,param_2,param_3,param_1[1]);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 1087b0a28; end: 1087b0a5f;  */

void FUN_1087b0a28(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1086422f8();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1087b0a60; end: 1087b0a8b;  */

void FUN_1087b0a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1087b0a8c(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1087b0a8c; end: 1087b0adf;  */

void FUN_1087b0a8c(void)

{
  long in_x3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001087b6788();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x118) {
    FUN_1087b0ae0(in_x3,unaff_x21);
    in_x3 = in_x3 + 0x118;
  }
  func_0x0001087b677c();
  return;
}



/* Entry: 1087b0ae0; end: 1087b0bab;  */

void FUN_1087b0ae0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087b5d6c();
  uVar2 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar2;
  func_0x000107c27c5c(param_1 + 2,param_2 + 2);
  FUN_10866e758(unaff_x20 + 0x30,unaff_x19 + 0x30);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x50);
  *(undefined1 *)(unaff_x20 + 0x54) = *(undefined1 *)(unaff_x19 + 0x54);
  *(undefined4 *)(unaff_x20 + 0x50) = uVar1;
  func_0x0001087b0b70(unaff_x20 + 0x58,unaff_x19 + 0x58);
  FUN_1087b1110(unaff_x20 + 0x80,unaff_x19 + 0x80);
  FUN_1087b115c(unaff_x20 + 0xd0,unaff_x19 + 0xd0);
  func_0x000107c28d24(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x110);
  *(undefined1 *)(unaff_x20 + 0x114) = *(undefined1 *)(unaff_x19 + 0x114);
  *(undefined4 *)(unaff_x20 + 0x110) = uVar1;
  return;
}



/* Entry: 1087b0bac; end: 1087b0c5b;  */

void FUN_1087b0bac(long param_1)

{
  long *plVar1;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long lVar2;
  
  func_0x0001087b6788();
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)param_1;
    FUN_1087b0c5c();
    for (; (plVar1 != (long *)0x0 && (unaff_x21 != unaff_x20)); unaff_x21 = (long *)*unaff_x21) {
      *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(unaff_x21 + 2);
      plVar1[3] = unaff_x21[3];
      lVar2 = *plVar1;
      FUN_1087b0c8c(param_1,plVar1);
      plVar1 = (long *)lVar2;
    }
    func_0x0001087b64d4();
  }
  for (; unaff_x21 != unaff_x20; unaff_x21 = (long *)*unaff_x21) {
    FUN_1087b0cc4(param_1,unaff_x21 + 2);
  }
  return;
}



/* Entry: 1087b0c5c; end: 1087b0c8b;  */

long FUN_1087b0c5c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return lVar1;
}



/* Entry: 1087b0c8c; end: 1087b0cc3;  */

void FUN_1087b0c8c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0001087b5d6c();
  *(long *)(unaff_x19 + 8) = (long)*(int *)(param_2 + 0x10);
  FUN_1087b0d14();
  func_0x0001087b677c();
  FUN_1087b0e48();
  return;
}



/* Entry: 1087b0cc4; end: 1087b0d13;  */

undefined8 FUN_1087b0cc4(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_1087b10cc(auStack_38);
  FUN_1087b0c8c(param_1,auStack_38[0]);
  auStack_38[0] = 0;
  FUN_108643c30(auStack_38);
  return param_1;
}



/* Entry: 1087b0d14; end: 1087b0e47;  */

long * FUN_1087b0d14(long *param_1,ulong param_2,int *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar7;
  undefined8 extraout_x9;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar7 = 0;
  if ((param_1[1] == 0) ||
     (func_0x0001087b66b4((float)(param_1[3] + 1),(int)param_1[4],(float)(ulong)param_1[1]),
     uVar7 = extraout_x8, (bool)in_NG)) {
    bVar3 = 2 < uVar7;
    bVar4 = uVar7 == 3;
    uVar8 = 1;
    if (bVar3) {
      uVar8 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    func_0x0001087b5da4(uVar8 | uVar7 << 1);
    uVar1 = extraout_x8_00;
    if (!bVar3 || bVar4) {
      uVar1 = extraout_x9;
    }
    FUN_1087b0f1c(param_1,uVar1);
    uVar7 = param_1[1];
  }
  uVar8 = uVar7 - 1;
  if ((uVar7 & uVar8) == 0) {
    uVar9 = uVar8 & param_2;
  }
  else {
    uVar9 = param_2;
    if (uVar7 <= param_2) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = param_2 / uVar7;
      }
      uVar9 = param_2 - uVar9 * uVar7;
    }
  }
  plVar10 = *(long **)(*param_1 + uVar9 * 8);
  if (plVar10 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else {
    bVar4 = false;
    bVar2 = 0;
    do {
      plVar6 = plVar10;
      plVar10 = (long *)*plVar6;
      if (plVar10 == (long *)0x0) {
        return plVar6;
      }
      uVar11 = plVar10[1];
      if ((uVar7 & uVar8) == 0) {
        uVar12 = uVar11 & uVar8;
      }
      else {
        uVar12 = uVar11;
        if (uVar7 <= uVar11) {
          uVar12 = 0;
          if (uVar7 != 0) {
            uVar12 = uVar11 / uVar7;
          }
          uVar12 = uVar11 - uVar12 * uVar7;
        }
      }
      if (uVar12 != uVar9) {
        return plVar6;
      }
      if (uVar11 == param_2) {
        bVar3 = *(int *)(plVar10 + 2) == *param_3;
      }
      else {
        bVar3 = false;
      }
      bVar5 = bVar3 != bVar4;
      bVar3 = (bool)(bVar2 & bVar5);
      bVar4 = (bool)(bVar4 | bVar5);
      bVar2 = bVar2 | bVar5;
    } while (!bVar3);
  }
  return plVar6;
}



/* Entry: 1087b0e48; end: 1087b0f1b;  */

void FUN_1087b0e48(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
  }
  else if (uVar1 <= uVar2) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    uVar2 = uVar2 - uVar4 * uVar1;
  }
  if (param_3 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    lVar5 = *param_1;
    *(long **)(lVar5 + uVar2 * 8) = plVar6;
    if (*param_2 != 0) {
      uVar2 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar2 = uVar2 & uVar3;
      }
      else if (uVar1 <= uVar2) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        uVar2 = uVar2 - uVar3 * uVar1;
      }
      *(long **)(lVar5 + uVar2 * 8) = param_2;
    }
  }
  else {
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 != 0) {
      uVar4 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar4 = uVar4 & uVar3;
      }
      else if (uVar1 <= uVar4) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar4 / uVar1;
        }
        uVar4 = uVar4 - uVar3 * uVar1;
      }
      if (uVar4 != uVar2) {
        *(long **)(*param_1 + uVar4 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1087b0f1c; end: 1087b0fb3;  */

void FUN_1087b0f1c(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long extraout_x8;
  long *extraout_x9;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar3 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar11 = (long *)param_1[1];
  bVar2 = plVar11 <= param_2;
  if (param_2 <= plVar11) {
    if (!bVar2) {
      func_0x0001087b60d0();
      if ((bVar2) && (((ulong)plVar11 & (long)plVar11 - 1U) == 0)) {
        func_0x0001087b5998();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      if (param_2 <= plVar3) {
        param_2 = plVar3;
      }
      if (param_2 < plVar11) goto LAB_1087b0f64;
    }
    return;
  }
LAB_1087b0f64:
  func_0x000107c335d8();
  if (plVar4 == (long *)0x0) {
    FUN_1086439c8(plVar3);
    plVar3[1] = 0;
  }
  else {
    plVar11 = plVar3 + 1;
    FUN_1086439e0(plVar11);
    FUN_1086439c8(plVar3,plVar11);
    plVar11 = (long *)0x0;
    plVar3[1] = (long)plVar4;
    lVar5 = *plVar3;
    while (plVar4 != plVar11) {
      func_0x0001087b68ac();
      lVar5 = extraout_x8;
      plVar11 = extraout_x9;
    }
    plVar11 = (long *)plVar3[2];
    if (plVar11 != (long *)0x0) {
      plVar7 = (long *)plVar11[1];
      uVar6 = (long)plVar4 - 1;
      if (((ulong)plVar4 & uVar6) == 0) {
        plVar7 = (long *)((ulong)plVar7 & uVar6);
      }
      else if (plVar4 <= plVar7) {
        uVar1 = 0;
        if (plVar4 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar4;
        }
        plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar4);
      }
      *(long **)(lVar5 + (long)plVar7 * 8) = plVar3 + 2;
      while (plVar3 = plVar11, plVar11 = (long *)*plVar3, plVar11 != (long *)0x0) {
        plVar8 = (long *)plVar11[1];
        if (((ulong)plVar4 & uVar6) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar6);
        }
        else if (plVar4 <= plVar8) {
          uVar1 = 0;
          if (plVar4 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)plVar4;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar4);
        }
        if (plVar8 != plVar7) {
          plVar10 = plVar11;
          if (*(long *)(lVar5 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar8 * 8) = plVar3;
            plVar7 = plVar8;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (*(int *)(plVar11 + 2) == *(int *)(plVar10 + 2));
            *plVar3 = (long)plVar10;
            *plVar9 = **(long **)(lVar5 + (long)plVar8 * 8);
            **(long **)(lVar5 + (long)plVar8 * 8) = (long)plVar11;
            plVar11 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1087b0fb4; end: 1087b10cb;  */

void FUN_1087b0fb4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  ulong extraout_x9;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  if (param_2 == 0) {
    FUN_1086439c8(param_1);
    param_1[1] = 0;
  }
  else {
    plVar4 = param_1 + 1;
    FUN_1086439e0(plVar4);
    FUN_1086439c8(param_1,plVar4);
    uVar3 = 0;
    param_1[1] = param_2;
    lVar2 = *param_1;
    while (param_2 != uVar3) {
      func_0x0001087b68ac();
      lVar2 = extraout_x8;
      uVar3 = extraout_x9;
    }
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      uVar3 = plVar4[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar3 = uVar3 & uVar6;
      }
      else if (param_2 <= uVar3) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = uVar3 / param_2;
        }
        uVar3 = uVar3 - uVar7 * param_2;
      }
      *(long **)(lVar2 + uVar3 * 8) = param_1 + 2;
      while (plVar5 = plVar4, plVar4 = (long *)*plVar5, plVar4 != (long *)0x0) {
        uVar7 = plVar4[1];
        if ((param_2 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar3) {
          plVar9 = plVar4;
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar5;
            uVar3 = uVar7;
          }
          else {
            do {
              plVar8 = plVar9;
              plVar9 = (long *)*plVar8;
              if (plVar9 == (long *)0x0) break;
            } while (*(int *)(plVar4 + 2) == *(int *)(plVar9 + 2));
            *plVar5 = (long)plVar9;
            *plVar8 = **(long **)(lVar2 + uVar7 * 8);
            **(long **)(lVar2 + uVar7 * 8) = (long)plVar4;
            plVar4 = plVar5;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1087b10cc; end: 1087b110f;  */

void FUN_1087b10cc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2 + 2;
  func_0x000107c335bc();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 1;
  uVar2 = *param_3;
  param_2[3] = param_3[1];
  param_2[2] = uVar2;
  *param_2 = 0;
  param_2[1] = (long)*(int *)(param_2 + 2);
  return;
}



/* Entry: 1087b1110; end: 1087b1137;  */

void FUN_1087b1110(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  long unaff_x19;
  long unaff_x20;
  
  cVar2 = *(char *)(param_1 + 0x48);
  if (cVar2 != *(char *)(param_2 + 0x48)) {
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x48) == '\x01') {
        func_0x000104be16a0();
        *(undefined1 *)(param_1 + 0x48) = 0;
      }
      return;
    }
    FUN_108684418();
    *(undefined1 *)(param_1 + 0x48) = 1;
    return;
  }
  if (cVar2 != '\0') {
    func_0x000107c32f7c();
    FUN_10866e758();
    func_0x000107c32f88();
    func_0x000107c27c5c();
    uVar1 = *(undefined4 *)(unaff_x19 + 0x40);
    *(undefined1 *)(unaff_x20 + 0x44) = *(undefined1 *)(unaff_x19 + 0x44);
    *(undefined4 *)(unaff_x20 + 0x40) = uVar1;
    return;
  }
  return;
}



/* Entry: 1087b1138; end: 1087b115b;  */

void FUN_1087b1138(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x000104be16a0();
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 1087b115c; end: 1087b1183;  */

void FUN_1087b115c(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = cVar1 == *(char *)(param_2 + 0x18);
  if (!bVar2) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x18) == '\x01') {
        func_0x000107c27a50();
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      return;
    }
    func_0x000107c28c7c();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000108726d24();
    if (!bVar2) {
      func_0x000108726cf4();
      FUN_108725d8c();
    }
    return;
  }
  return;
}



/* Entry: 1087b1184; end: 1087b11a7;  */

void FUN_1087b1184(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27a50();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1087b11a8; end: 1087b11d7;  */

void FUN_1087b11a8(void)

{
  undefined8 *unaff_x20;
  
  func_0x0001087b5d6c();
  FUN_1087a32c8();
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  func_0x0001087b5ac8();
  *(undefined4 *)(unaff_x20 + 5) = 0;
  return;
}



/* Entry: 1087b11d8; end: 1087b11df;  */

void FUN_1087b11d8(long *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  char cVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar3;
  
  if (*(int *)(*param_1 + 0x28) != 1) {
    func_0x0001087b6750();
    FUN_1087b1214();
    return;
  }
  cVar2 = (char)param_2[4];
  if (cVar2 != (char)param_3[4]) {
    if (cVar2 == '\0') {
      FUN_1087a339c();
      *(undefined1 *)(param_2 + 4) = 1;
      return;
    }
    if ((char)param_2[4] == '\x01') {
      FUN_1088b9ec4();
      *(undefined1 *)(param_2 + 4) = 0;
    }
    return;
  }
  if (cVar2 == '\0') {
    return;
  }
  if (param_3 == param_2) {
    return;
  }
  FUN_1088b9be0();
  func_0x0001088bada4();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_2 = (ulong *)unaff_x21[2];
        FUN_1088ba014();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_2 = unaff_x21;
        FUN_1088b9e08();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_1088bab7c();
        unaff_x21[2] = (ulong)puVar3;
        param_2 = puVar3;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088bad94();
    if ((*param_2 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1087b11e0; end: 1087b1213;  */

void FUN_1087b11e0(long param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  char cVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar3;
  
  if (*(int *)(param_1 + 0x28) != 1) {
    func_0x0001087b6750();
    FUN_1087b1214();
    return;
  }
  cVar2 = (char)param_2[4];
  if (cVar2 != (char)param_3[4]) {
    if (cVar2 == '\0') {
      FUN_1087a339c();
      *(undefined1 *)(param_2 + 4) = 1;
      return;
    }
    if ((char)param_2[4] == '\x01') {
      FUN_1088b9ec4();
      *(undefined1 *)(param_2 + 4) = 0;
    }
    return;
  }
  if (cVar2 == '\0') {
    return;
  }
  if (param_3 == param_2) {
    return;
  }
  FUN_1088b9be0();
  func_0x0001088bada4();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_2 = (ulong *)unaff_x21[2];
        FUN_1088ba014();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_2 = unaff_x21;
        FUN_1088b9e08();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_1088bab7c();
        unaff_x21[2] = (ulong)puVar3;
        param_2 = puVar3;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088bad94();
    if ((*param_2 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1087b1214; end: 1087b1257;  */

void FUN_1087b1214(long param_1)

{
  undefined1 auStack_48 [40];
  
  FUN_1087a333c(auStack_48,*(undefined8 *)(param_1 + 8));
  func_0x0001087b680c();
  FUN_1087b12a4();
  func_0x0001087a3168(auStack_48);
  return;
}



/* Entry: 1087b1258; end: 1087b127f;  */

void FUN_1087b1258(ulong *param_1,ulong *param_2)

{
  int iVar1;
  char cVar2;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar3;
  
  cVar2 = (char)param_1[4];
  if (cVar2 != (char)param_2[4]) {
    if (cVar2 == '\0') {
      FUN_1087a339c();
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
    if ((char)param_1[4] == '\x01') {
      FUN_1088b9ec4();
      *(undefined1 *)(param_1 + 4) = 0;
    }
    return;
  }
  if (cVar2 == '\0') {
    return;
  }
  if (param_2 == param_1) {
    return;
  }
  FUN_1088b9be0();
  func_0x0001088bada4();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        FUN_1088ba014();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_1088b9e08();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_1088bab7c();
        unaff_x21[2] = (ulong)puVar3;
        param_1 = puVar3;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088bad94();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1087b1280; end: 1087b12a3;  */

void FUN_1087b1280(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1088b9ec4();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1087b12a4; end: 1087b12cf;  */

void FUN_1087b12a4(void)

{
  long unaff_x20;
  
  func_0x0001087b5d6c();
  FUN_1087a32c8();
  func_0x0001087b677c();
  FUN_1087a9768();
  *(undefined4 *)(unaff_x20 + 0x28) = 1;
  return;
}



/* Entry: 1087b12d0; end: 1087b12f3;  */

undefined8 FUN_1087b12d0(undefined8 param_1)

{
  FUN_1087b12f4();
  return param_1;
}



/* Entry: 1087b12f4; end: 1087b1323;  */

long FUN_1087b12f4(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      lVar2 = param_1;
      if (*(char *)(param_1 + 0x38) == '\x01') {
        lVar2 = param_1 + 8;
        FUN_1087a32c8(lVar2);
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return lVar2;
    }
    lVar2 = param_1 + 8;
    FUN_1087a96a4(lVar2,param_2 + 8);
    *(undefined1 *)(param_1 + 0x38) = 1;
    return lVar2;
  }
  if (cVar1 != '\0') {
    FUN_1087b1348(param_1 + 8,param_2 + 8);
    return param_1 + 8;
  }
  return param_1;
}



/* Entry: 1087b1324; end: 1087b1347;  */

undefined8 FUN_1087b1324(undefined8 param_1)

{
  FUN_1087b1348();
  return param_1;
}



/* Entry: 1087b1348; end: 1087b139b;  */

void FUN_1087b1348(long param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(int *)(param_1 + 0x28) != -1 || *(int *)(param_2 + 0x28) != -1) {
    if (*(int *)(param_2 + 0x28) == -1) {
      if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110a702d0)[*(uint *)(param_1 + 0x28)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      return;
    }
    func_0x0001087b6488();
  }
  return;
}



/* Entry: 1087b139c; end: 1087b13ab;  */

void FUN_1087b139c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*param_1 + 0x28) != 0) {
    func_0x0001087b6750();
    FUN_1087b13dc();
    return;
  }
  func_0x0001087b5d6c(param_2,param_3);
  FUN_1087b0a28();
  func_0x0001087b5ac8();
  return;
}



/* Entry: 1087b13ac; end: 1087b13db;  */

void FUN_1087b13ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x0001087b6750();
    FUN_1087b13dc();
    return;
  }
  func_0x0001087b5d6c(param_2,param_3);
  FUN_1087b0a28();
  func_0x0001087b5ac8();
  return;
}



/* Entry: 1087b13dc; end: 1087b13e7;  */

void FUN_1087b13dc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x0001087b5d6c(*param_1,param_1[1]);
  FUN_1087a32c8();
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  func_0x0001087b5ac8();
  *(undefined4 *)(unaff_x20 + 5) = 0;
  return;
}



/* Entry: 1087b13e8; end: 1087b1407;  */

void FUN_1087b13e8(void)

{
  func_0x0001087b5d6c();
  FUN_1087b0a28();
  func_0x0001087b5ac8();
  return;
}



/* Entry: 1087b1408; end: 1087b140f;  */

long FUN_1087b1408(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x28) == 1) {
    FUN_1087b1474(param_2,param_3);
    return param_2;
  }
  func_0x0001087b6750();
  FUN_1087b1444();
  return lVar1;
}



/* Entry: 1087b1410; end: 1087b1443;  */

long FUN_1087b1410(long param_1,long param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x28) == 1) {
    FUN_1087b1474(param_2,param_3);
    return param_2;
  }
  func_0x0001087b6750();
  FUN_1087b1444();
  return param_1;
}



/* Entry: 1087b1444; end: 1087b144f;  */

void FUN_1087b1444(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001087b5d6c(*param_1,param_1[1]);
  FUN_1087a32c8();
  func_0x0001087b677c();
  FUN_1087a9768();
  *(undefined4 *)(unaff_x20 + 0x28) = 1;
  return;
}



/* Entry: 1087b1450; end: 1087b1473;  */

undefined8 FUN_1087b1450(undefined8 param_1)

{
  FUN_1087b1474();
  return param_1;
}



/* Entry: 1087b1474; end: 1087b149b;  */

long FUN_1087b1474(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        FUN_1088b9ec4();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return param_1;
    }
    FUN_1087a97c4();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    if (param_1 != param_2) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      uVar3 = *(ulong *)(param_2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      if (uVar2 == uVar3) {
        FUN_1088ba078(param_1);
      }
      else {
        FUN_1088ba040(param_1);
      }
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 1087b149c; end: 1087b14f7;  */

void FUN_1087b149c(undefined8 *param_1)

{
  func_0x0001087b14c0();
  *param_1 = &PTR_FUN_110a70850;
  return;
}



/* Entry: 1087b14f8; end: 1087b151b;  */

char * FUN_1087b14f8(uint param_1)

{
  if (param_1 < 7) {
    return (&PTR_s_none_110a70c90)[param_1];
  }
  return "unknown";
}



/* Entry: 1087b151c; end: 1087b1583;  */

void FUN_1087b151c(void)

{
  func_0x0001087b618c();
  FUN_1087a95d0();
  return;
}



/* Entry: 1087b1584; end: 1087b158b;  */

undefined * FUN_1087b1584(long param_1)

{
  if (*(uint *)(param_1 + 0x10) < 0x1c) {
    return (&PTR_DAT_110a70bb0)[*(uint *)(param_1 + 0x10)];
  }
  return &UNK_10f4bb1b2;
}



/* Entry: 1087b158c; end: 1087b15f7;  */

long * FUN_1087b158c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      FUN_1087aefd0();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1087b15f8; end: 1087b15fb;  */

void FUN_1087b15f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70878;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087b15fc; end: 1087b160f;  */

void FUN_1087b15fc(void)

{
  FUN_1087b1734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b1610; end: 1087b1683;  */

undefined8 FUN_1087b1610(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long *plVar2;
  
  func_0x000107c27f98(param_1 + 0x68);
  func_0x0001087b5be4();
  plVar2 = *(long **)(param_1 + 0x40);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_1087b16bc(lVar1);
    func_0x0001087b616c();
  }
  lVar1 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar1 != 0) {
    func_0x0001087b59d4();
  }
  param_1 = param_1 + 0x18;
  func_0x000107c33588();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1087b1684; end: 1087b168b;  */

void FUN_1087b1684(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b168c; end: 1087b169f;  */

void FUN_1087b168c(void)

{
  func_0x0001087b16ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b16a0; end: 1087b16bb;  */

long FUN_1087b16a0(long param_1)

{
  func_0x000100567e90(param_1 + 0x58);
  func_0x000100567ef4(param_1 + 0x48);
  func_0x000100558bb4(param_1 + 0x38);
  func_0x000100564c18(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x18;
}



/* Entry: 1087b16bc; end: 1087b1733;  */

void FUN_1087b16bc(void)

{
  func_0x0001087b6300();
  func_0x0001087b16e0();
  func_0x000100100fd4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1087b1734; end: 1087b1743;  */

void FUN_1087b1734(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70878;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087b1744; end: 1087b1757;  */

void FUN_1087b1744(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


