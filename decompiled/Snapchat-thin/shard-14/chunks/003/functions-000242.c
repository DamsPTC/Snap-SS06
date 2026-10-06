/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b147c34; end: 10b147c57;  */

void FUN_10b147c34(void)

{
  func_0x00010b14ef90();
  func_0x00010b14fb84(&PTR_FUN_110cbf000);
  return;
}



/* Entry: 10b147c58; end: 10b147c5b;  */

undefined8 FUN_10b147c58(undefined8 param_1)

{
  func_0x00010b14fd24(&PTR_FUN_110cbf000);
  return param_1;
}



/* Entry: 10b147c5c; end: 10b147c6f;  */

void FUN_10b147c5c(void)

{
  FUN_10b147cb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b147c70; end: 10b147cb3;  */

void FUN_10b147c70(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b14f864();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b14f478();
  FUN_10b147b90();
  func_0x00010b14f26c();
  return;
}



/* Entry: 10b147cb4; end: 10b147cdb;  */

undefined8 FUN_10b147cb4(undefined8 param_1)

{
  func_0x00010b14fd24(&PTR_FUN_110cbf000);
  return param_1;
}



/* Entry: 10b147cdc; end: 10b147d17;  */

void FUN_10b147cdc(void)

{
  func_0x00010b150700();
  FUN_10b147a00();
  func_0x00010b14f568();
  FUN_10b147d18();
  func_0x00010b14f26c();
  func_0x00010b1502bc();
  return;
}



/* Entry: 10b147d18; end: 10b147d43;  */

void FUN_10b147d18(void)

{
  func_0x00010b14f288();
  __ZNSt3__112__get_sp_mutEPKv();
  func_0x00010b14f574();
  func_0x00010b14eb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b147d44; end: 10b147d73;  */

void FUN_10b147d44(long param_1)

{
  FUN_10b147988();
  func_0x00010b14fc40();
  FUN_10b1478e8();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10b147d74; end: 10b147e13;  */

void FUN_10b147d74(void)

{
  long unaff_x19;
  undefined8 uStack_30;
  
  func_0x00010b14ede4();
  func_0x00010b14ee9c();
  FUN_10b1473e4();
  func_0x00010b14f55c();
  FUN_10b14740c();
  func_0x00010b14f3e4();
  func_0x00010b14f26c();
  __ZNSt3__15mutex4lockEv(uStack_30 + 0x50);
  func_0x00010b14f1d8();
  FUN_10b147e14();
  func_0x00010b14fac8();
  if (unaff_x19 == 0) {
    func_0x00010b15036c();
  }
  else {
    func_0x00010b14f20c();
    func_0x00010b14ec30();
    func_0x00010b14e920();
  }
  func_0x00010b14f348();
  return;
}



/* Entry: 10b147e14; end: 10b147e23;  */

undefined8 * FUN_10b147e14(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)*param_2;
  if (*(char *)(puVar1 + 3) == '\x01') {
    func_0x000100066230(puVar1);
  }
  else {
    uVar3 = param_1[1];
    uVar2 = *param_1;
    puVar1[2] = param_1[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  return puVar1;
}



/* Entry: 10b147e24; end: 10b147efb;  */

void FUN_10b147e24(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010b14fec8();
  FUN_10b1474e8();
  func_0x00010b14f004(&PTR_FUN_110cbeec8);
  if (extraout_x8 != 0) {
    func_0x00010b14ed54();
    func_0x00010b14f444();
    FUN_10b147304();
    func_0x00010b14f5d4();
  }
  func_0x00010b147278(unaff_x19 + 0x18);
  func_0x00010b14f57c();
  return;
}



/* Entry: 10b147efc; end: 10b147f6f;  */

void FUN_10b147efc(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  func_0x00010b14f3d0();
  func_0x00010b14f420(param_1 + 0x18);
  __ZNSt3__15mutex4lockEv();
  lVar2 = unaff_x19;
  func_0x000107c28058();
  if ((int)lVar2 == 0) {
    uVar3 = *unaff_x20;
    *(undefined8 *)(unaff_x19 + 0x98) = unaff_x20[1];
    *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    *(uint *)(unaff_x19 + 0x88) = *(uint *)(unaff_x19 + 0x88) | 5;
    __ZNSt3__118condition_variable10notify_allEv(unaff_x19 + 0x58);
    func_0x00010b14f5e4();
    return;
  }
  func_0x00010538ceb0(2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b147f64);
  (*pcVar1)();
}



/* Entry: 10b147f70; end: 10b1480ab;  */

void FUN_10b147f70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char cVar6;
  code *pcVar7;
  undefined1 in_ZR;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  code **ppcVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *puVar17;
  long *plVar18;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  undefined8 extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  int extraout_w12;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined1 uStack_138;
  undefined8 auStack_118 [2];
  undefined8 *puStack_108;
  long lStack_100;
  long lStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  long lStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_28;
  
  plVar16 = &lStack_90;
  func_0x00010b14ec00();
  lVar11 = param_2[2];
  uStack_78 = param_2[1];
  pcStack_80 = (code *)*param_2;
  uStack_28 = extraout_x8;
  if (param_2[1] != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  uStack_88 = param_2[4];
  lStack_90 = param_2[3];
  if (param_2[4] != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
  }
  ppcVar14 = &pcStack_80;
  FUN_10b1480ac(param_1,lVar11);
  func_0x00010b141cc4(&lStack_90);
  func_0x00010b1257f8(&pcStack_80);
  if (*(long *)(*(long *)(lVar11 + 0x2e8) + 0x88) != 0) {
    uStack_48 = *param_1;
    lStack_60 = param_1[1];
    lStack_40 = 0;
    uStack_68 = uStack_48;
    if (lStack_60 != 0) {
      do {
        func_0x00010b14ec7c();
        lStack_40 = extraout_x8_00;
        uStack_48 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    pcStack_58 = FUN_10b149cb8;
    ppuStack_50 = &PTR_FUN_110cbecc0;
    if (lStack_40 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_01 != 0);
    }
    ppcVar14 = &pcStack_58;
    FUN_10b1491bc();
    func_0x00010b14efb8(ppuStack_50);
    func_0x00010b147ed8();
  }
  func_0x00010b14e980(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_50)(&ppuStack_50);
  func_0x00010b147ed8(&uStack_68);
  func_0x00010b147ed8();
  func_0x00010b14efdc();
  puVar9 = (undefined8 *)0x3e0;
  __Znwm();
  puVar5 = puVar9 + 0x6f;
  *puVar9 = FUN_10b14d180;
  puVar9[1] = FUN_10b14d4c0;
  pcVar7 = *ppcVar14;
  puVar17 = puVar9 + 0x75;
  puVar9[0x76] = ppcVar14[1];
  *puVar17 = pcVar7;
  *ppcVar14 = (code *)0x0;
  ppcVar14[1] = (code *)0x0;
  lVar11 = *plVar16;
  plVar18 = puVar9 + 0x77;
  puVar9[0x78] = plVar16[1];
  *plVar18 = lVar11;
  puVar9[0x7a] = param_1;
  *plVar16 = 0;
  plVar16[1] = 0;
  func_0x00010b139e74(puVar9 + 2);
  puVar10 = puVar9 + 2;
  FUN_10b139a94(puVar9 + 0x73);
  func_0x00010b14f7d8();
  plVar12 = puVar10 + 1;
  *plVar12 = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_110cbec40;
  puVar1 = puVar10 + 3;
  func_0x00010b14fdc4(puVar1);
  __ZNSt3__115recursive_mutexC1Ev(puVar1);
  puVar15 = puVar9 + 0x62;
  *(undefined1 *)(puVar10 + 0xb) = 0;
  puVar2 = puVar9 + 0x66;
  plVar16 = puVar9 + 0x6a;
  *(undefined1 *)(puVar10 + 0x15) = 0;
  puVar3 = puVar9 + 0x79;
  puVar10[0x17] = 0;
  puVar10[0x18] = 0;
  puVar10[0x16] = 0;
  *extraout_x8_01 = (long)puVar1;
  extraout_x8_01[1] = (long)puVar10;
  puVar9[0x71] = puVar1;
  puVar9[0x72] = puVar10;
  do {
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar8) {
      *plVar12 = *plVar12 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  puVar9[0x12] = 0;
  puVar9[0x13] = 0;
  *puVar15 = 0;
  puVar9[99] = 0;
  func_0x0001052a4d28(&puStack_170,puVar9 + 0x73,puVar15);
  func_0x0001052a4d50(puVar9 + 0x12,&puStack_170);
  func_0x0001052a4f84(&puStack_170);
  func_0x0001052a4f84(puVar15);
  func_0x000107c27b48(puVar3);
  func_0x000107c27b4c(&puStack_1b0,*puVar3);
  puVar9[0x71] = 0;
  puVar9[0x72] = 0;
  uStack_160 = *puVar3;
  *puVar3 = 0;
  puStack_170 = puVar1;
  puStack_168 = puVar10;
  func_0x00010b14fc54();
  __ZNSt3__15mutex4lockEv();
  puVar10 = (undefined8 *)puVar9[0x12];
  func_0x0001052a4d74();
  if ((int)puVar10 == 0) {
    func_0x00010b14f254();
    uVar19 = uStack_160;
    *puVar10 = &PTR_FUN_110cbec90;
    puVar10[2] = puStack_168;
    puVar10[1] = puStack_170;
    puStack_170 = (undefined8 *)0x0;
    puStack_168 = (undefined8 *)0x0;
    uStack_160 = 0;
    func_0x00010b1506a0(uVar19);
    if (extraout_x8_02 != 0) {
      func_0x00010b14e9b4();
    }
  }
  else {
    func_0x0001052a4d50(&puStack_108,puVar9 + 0x12);
  }
  func_0x00010b14fd8c();
  if (puStack_108 != (undefined8 *)0x0) {
    puVar9[0x6d] = puStack_108;
    puVar9[0x6e] = lStack_100;
    if (lStack_100 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_02 != 0);
    }
    FUN_10b1488e8(&puStack_170);
    func_0x0001052a4f84(puVar9 + 0x6d);
  }
  puVar9[0x70] = puStack_1a8;
  *puVar5 = puStack_1b0;
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  func_0x0001052a4f84(&puStack_108);
  func_0x00010b148b58(&puStack_170);
  func_0x000107c27b58(&puStack_1b0);
  lVar11 = puVar9[0x79];
  puVar9[0x79] = 0;
  if (lVar11 != 0) {
    func_0x00010b14e9f4();
  }
  func_0x0001052a4f84(puVar9 + 0x12);
  func_0x000107c27b58(puVar5);
  func_0x00010b147ed8(puVar9 + 0x71);
  func_0x0001052a4f84(puVar9 + 0x73);
  func_0x00010b148b78(puVar9 + 0x6d,param_1[1],param_1[2]);
  plVar12 = plVar18;
  func_0x00010b143580();
  if (((ulong)plVar12 & 1) == 0) {
    *(undefined1 *)(puVar9 + 0x7b) = 0;
    __ZNSt3__115recursive_mutex4lockEv(puVar9[0x77]);
    lVar11 = *plVar18;
    if ((*(byte *)(lVar11 + 0x58) & 1) == 0) {
      puVar5 = *(undefined8 **)(lVar11 + 0x68);
      bVar8 = *(undefined8 **)(lVar11 + 0x70) <= puVar5;
      if (bVar8) {
        lVar20 = *(long *)(lVar11 + 0x60);
        lVar21 = (long)puVar5 - lVar20;
        if ((lVar21 >> 3) + 1U >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b148654:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10b148658);
          (*pcVar7)();
        }
        func_0x00010b14e8b4((long)*(undefined8 **)(lVar11 + 0x70) - lVar20);
        uVar4 = extraout_x9_01;
        if (bVar8) {
          uVar4 = extraout_x8_05;
        }
        if (uVar4 == 0) {
          lVar13 = 0;
        }
        else {
          if (uVar4 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b148654;
          }
          lVar13 = uVar4 << 3;
          __Znwm();
        }
        puVar5 = (undefined8 *)(lVar13 + lVar21);
        puVar10 = puVar5 + 1;
        *puVar5 = puVar9;
        _memcpy(puVar5 + -(lVar21 >> 3),lVar20,lVar21);
        *(undefined8 **)(lVar11 + 0x60) = puVar5 + -(lVar21 >> 3);
        *(undefined8 **)(lVar11 + 0x68) = puVar10;
        *(ulong *)(lVar11 + 0x70) = lVar13 + uVar4 * 8;
        if (lVar20 != 0) {
          __ZdlPv(lVar20);
        }
      }
      else {
        puVar10 = puVar5 + 1;
        *puVar5 = puVar9;
      }
      *(undefined8 **)(lVar11 + 0x68) = puVar10;
      func_0x00010b14f7bc();
    }
    else {
      func_0x00010b14f7bc();
      func_0x00010b14efec(*puVar9);
    }
  }
  else {
    plVar12 = plVar18;
    FUN_10b1435a8();
    func_0x00010b150100();
    if (extraout_x8_03 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_03 != 0);
    }
    (**(code **)(*plVar12 + 0x28))(puVar15);
    puVar10 = puVar15;
    FUN_10b148bb4();
    if (((ulong)puVar10 & 1) == 0) {
      *(undefined1 *)(puVar9 + 0x7b) = 1;
      puStack_1b0 = puVar9;
      puStack_1a8 = puVar15;
      FUN_10b148ca0(&puStack_170,puVar15,&puStack_1b0);
      if (puStack_168 != (undefined8 *)0x0) {
        do {
          func_0x00010b14ea74();
        } while (extraout_w11 != 0);
        if (extraout_x9_00 == 0) {
          func_0x00010b14e9c4();
          func_0x00010b14f3ec();
        }
      }
    }
    else {
      FUN_10b1487f0(puVar9 + 0x12,puVar15);
      func_0x00010b148c7c(puVar15);
      if ((*(byte *)(puVar9 + 0x61) & 1) == 0) {
        puVar15 = puVar9 + 0x12;
        func_0x0001052a0760(&puStack_170);
        func_0x00010b1504c4();
        func_0x00010b14fd1c();
      }
      else {
        lVar11 = puVar9[0x7a];
        FUN_10b1151e4(lVar11 + 0x68,puVar9 + 0x12);
        uVar19 = *puVar17;
        FUN_10b202630(&puStack_170,lVar11 + 0x68);
        FUN_10b1f7064(puVar15,uVar19,&puStack_170,*(undefined4 *)(puVar9[0x7a] + 200));
        func_0x00010b121e00(&puStack_170);
        in_ZR = *(char *)(puVar9 + 0x65) == '\x01';
        if (((bool)in_ZR) &&
           (func_0x00010b14fc98(*(undefined1 *)((long)puVar9 + 0x327)), extraout_x8_04 != 0)) {
          FUN_10b13a7d0(puVar9 + 7);
        }
        else {
          func_0x00010b14f3c4();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar16);
          puVar15 = (undefined8 *)&UNK_10f73074b;
          func_0x00010b1491a4(puVar2);
          puStack_168 = (undefined8 *)puVar9[0x6b];
          puStack_170 = (undefined8 *)*plVar16;
          uStack_160 = puVar9[0x6c];
          puVar9[0x6b] = 0;
          puVar9[0x6c] = 0;
          *plVar16 = 0;
          uStack_198 = 2;
          uStack_190 = uStack_190 & 0xffffffffffffff00;
          in_ZR = *(char *)(puVar9 + 0x69) == '\x01';
          if ((bool)in_ZR) {
            uStack_188 = puVar9[0x67];
            uStack_190 = *puVar2;
            uStack_180 = puVar9[0x68];
            puVar9[0x67] = 0;
            puVar9[0x68] = 0;
            *puVar2 = 0;
          }
          puStack_1a8 = (undefined8 *)0x0;
          uStack_1a0 = 0;
          puStack_1b0 = (undefined8 *)0x0;
          uStack_158 = 2;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_178 = in_ZR;
          if (*(char *)(puVar9 + 0x69) != '\0') {
            func_0x00010b14e994();
            uStack_138 = extraout_w8;
          }
          func_0x00010b1504c4();
          func_0x00010b14fd1c();
          func_0x0001052a03ac(&puStack_1b0);
          func_0x00010b14fd34();
          func_0x00010b1501e4();
        }
        func_0x00010b14f410();
      }
      func_0x00010b14fe20();
      FUN_10b144044(puVar5);
      func_0x00010b14fa9c();
      func_0x00010b14f4a8();
      *(undefined1 *)(puVar9 + 0x7b) = extraout_w8_00;
      func_0x00010b14ed64();
      if ((bool)in_ZR) {
        puStack_108 = puVar15;
        FUN_10b0fb514(puVar9 + 2,&puStack_108);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(auStack_118);
        puStack_108 = auStack_118;
        FUN_10b0fb468(puVar9 + 2,&puStack_108);
        __ZNSt13exception_ptrD1Ev(auStack_118);
      }
      func_0x00010b14f5c4();
      func_0x00010b141cc4(plVar18);
      func_0x00010b1257f8(puVar17);
      func_0x00010b14efd4();
    }
  }
  return;
}



/* Entry: 10b1480ac; end: 10b1487ef;  */

void FUN_10b1480ac(long *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char cVar7;
  code *pcVar8;
  undefined1 in_ZR;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 *puVar16;
  long *plVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_a8;
  undefined8 auStack_88 [2];
  undefined8 *puStack_78;
  long lStack_70;
  
  puVar10 = (undefined8 *)0x3e0;
  __Znwm();
  puVar6 = puVar10 + 0x6f;
  *puVar10 = FUN_10b14d180;
  puVar10[1] = FUN_10b14d4c0;
  uVar18 = *param_3;
  puVar16 = puVar10 + 0x75;
  puVar10[0x76] = param_3[1];
  *puVar16 = uVar18;
  *param_3 = 0;
  param_3[1] = 0;
  lVar12 = *param_4;
  plVar17 = puVar10 + 0x77;
  puVar10[0x78] = param_4[1];
  *plVar17 = lVar12;
  puVar10[0x7a] = param_2;
  *param_4 = 0;
  param_4[1] = 0;
  func_0x00010b139e74(puVar10 + 2);
  puVar11 = puVar10 + 2;
  FUN_10b139a94(puVar10 + 0x73);
  func_0x00010b14f7d8();
  plVar13 = puVar11 + 1;
  *plVar13 = 0;
  puVar11[2] = 0;
  *puVar11 = &PTR_FUN_110cbec40;
  puVar1 = puVar11 + 3;
  func_0x00010b14fdc4(puVar1);
  __ZNSt3__115recursive_mutexC1Ev(puVar1);
  puVar15 = puVar10 + 0x62;
  *(undefined1 *)(puVar11 + 0xb) = 0;
  puVar2 = puVar10 + 0x66;
  plVar3 = puVar10 + 0x6a;
  *(undefined1 *)(puVar11 + 0x15) = 0;
  puVar4 = puVar10 + 0x79;
  puVar11[0x17] = 0;
  puVar11[0x18] = 0;
  puVar11[0x16] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar11;
  puVar10[0x71] = puVar1;
  puVar10[0x72] = puVar11;
  do {
    cVar7 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar9) {
      *plVar13 = *plVar13 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  *puVar15 = 0;
  puVar10[99] = 0;
  func_0x0001052a4d28(&puStack_e0,puVar10 + 0x73,puVar15);
  func_0x0001052a4d50(puVar10 + 0x12,&puStack_e0);
  func_0x0001052a4f84(&puStack_e0);
  func_0x0001052a4f84(puVar15);
  func_0x000107c27b48(puVar4);
  func_0x000107c27b4c(&puStack_120,*puVar4);
  puVar10[0x71] = 0;
  puVar10[0x72] = 0;
  uStack_d0 = *puVar4;
  *puVar4 = 0;
  puStack_e0 = puVar1;
  puStack_d8 = puVar11;
  func_0x00010b14fc54();
  __ZNSt3__15mutex4lockEv();
  puVar11 = (undefined8 *)puVar10[0x12];
  func_0x0001052a4d74();
  if ((int)puVar11 == 0) {
    func_0x00010b14f254();
    uVar18 = uStack_d0;
    *puVar11 = &PTR_FUN_110cbec90;
    puVar11[2] = puStack_d8;
    puVar11[1] = puStack_e0;
    puStack_e0 = (undefined8 *)0x0;
    puStack_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    func_0x00010b1506a0(uVar18);
    if (extraout_x8 != 0) {
      func_0x00010b14e9b4();
    }
  }
  else {
    func_0x0001052a4d50(&puStack_78,puVar10 + 0x12);
  }
  func_0x00010b14fd8c();
  if (puStack_78 != (undefined8 *)0x0) {
    puVar10[0x6d] = puStack_78;
    puVar10[0x6e] = lStack_70;
    if (lStack_70 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    FUN_10b1488e8(&puStack_e0);
    func_0x0001052a4f84(puVar10 + 0x6d);
  }
  puVar10[0x70] = puStack_118;
  *puVar6 = puStack_120;
  puStack_120 = (undefined8 *)0x0;
  puStack_118 = (undefined8 *)0x0;
  func_0x0001052a4f84(&puStack_78);
  func_0x00010b148b58(&puStack_e0);
  func_0x000107c27b58(&puStack_120);
  lVar12 = puVar10[0x79];
  puVar10[0x79] = 0;
  if (lVar12 != 0) {
    func_0x00010b14e9f4();
  }
  func_0x0001052a4f84(puVar10 + 0x12);
  func_0x000107c27b58(puVar6);
  func_0x00010b147ed8(puVar10 + 0x71);
  func_0x0001052a4f84(puVar10 + 0x73);
  func_0x00010b148b78(puVar10 + 0x6d,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  plVar13 = plVar17;
  func_0x00010b143580();
  if (((ulong)plVar13 & 1) == 0) {
    *(undefined1 *)(puVar10 + 0x7b) = 0;
    __ZNSt3__115recursive_mutex4lockEv(puVar10[0x77]);
    lVar12 = *plVar17;
    if ((*(byte *)(lVar12 + 0x58) & 1) == 0) {
      puVar6 = *(undefined8 **)(lVar12 + 0x68);
      bVar9 = *(undefined8 **)(lVar12 + 0x70) <= puVar6;
      if (bVar9) {
        lVar19 = *(long *)(lVar12 + 0x60);
        lVar20 = (long)puVar6 - lVar19;
        if ((lVar20 >> 3) + 1U >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b148654:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10b148658);
          (*pcVar8)();
        }
        func_0x00010b14e8b4((long)*(undefined8 **)(lVar12 + 0x70) - lVar19);
        uVar5 = extraout_x9_00;
        if (bVar9) {
          uVar5 = extraout_x8_02;
        }
        if (uVar5 == 0) {
          lVar14 = 0;
        }
        else {
          if (uVar5 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b148654;
          }
          lVar14 = uVar5 << 3;
          __Znwm();
        }
        puVar6 = (undefined8 *)(lVar14 + lVar20);
        puVar11 = puVar6 + 1;
        *puVar6 = puVar10;
        _memcpy(puVar6 + -(lVar20 >> 3),lVar19,lVar20);
        *(undefined8 **)(lVar12 + 0x60) = puVar6 + -(lVar20 >> 3);
        *(undefined8 **)(lVar12 + 0x68) = puVar11;
        *(ulong *)(lVar12 + 0x70) = lVar14 + uVar5 * 8;
        if (lVar19 != 0) {
          __ZdlPv(lVar19);
        }
      }
      else {
        puVar11 = puVar6 + 1;
        *puVar6 = puVar10;
      }
      *(undefined8 **)(lVar12 + 0x68) = puVar11;
      func_0x00010b14f7bc();
    }
    else {
      func_0x00010b14f7bc();
      func_0x00010b14efec(*puVar10);
    }
  }
  else {
    plVar13 = plVar17;
    FUN_10b1435a8();
    func_0x00010b150100();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar13 + 0x28))(puVar15);
    puVar11 = puVar15;
    FUN_10b148bb4();
    if (((ulong)puVar11 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x7b) = 1;
      puStack_120 = puVar10;
      puStack_118 = puVar15;
      FUN_10b148ca0(&puStack_e0,puVar15,&puStack_120);
      if (puStack_d8 != (undefined8 *)0x0) {
        do {
          func_0x00010b14ea74();
        } while (extraout_w11 != 0);
        if (extraout_x9 == 0) {
          func_0x00010b14e9c4();
          func_0x00010b14f3ec();
        }
      }
    }
    else {
      FUN_10b1487f0(puVar10 + 0x12,puVar15);
      func_0x00010b148c7c(puVar15);
      if ((*(byte *)(puVar10 + 0x61) & 1) == 0) {
        puVar15 = puVar10 + 0x12;
        func_0x0001052a0760(&puStack_e0);
        func_0x00010b1504c4();
        func_0x00010b14fd1c();
      }
      else {
        lVar12 = puVar10[0x7a];
        FUN_10b1151e4(lVar12 + 0x68,puVar10 + 0x12);
        uVar18 = *puVar16;
        FUN_10b202630(&puStack_e0,lVar12 + 0x68);
        FUN_10b1f7064(puVar15,uVar18,&puStack_e0,*(undefined4 *)(puVar10[0x7a] + 200));
        func_0x00010b121e00(&puStack_e0);
        in_ZR = *(char *)(puVar10 + 0x65) == '\x01';
        if (((bool)in_ZR) &&
           (func_0x00010b14fc98(*(undefined1 *)((long)puVar10 + 0x327)), extraout_x8_01 != 0)) {
          FUN_10b13a7d0(puVar10 + 7);
        }
        else {
          func_0x00010b14f3c4();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar3);
          puVar15 = (undefined8 *)&UNK_10f73074b;
          func_0x00010b1491a4(puVar2);
          puStack_d8 = (undefined8 *)puVar10[0x6b];
          puStack_e0 = (undefined8 *)*plVar3;
          uStack_d0 = puVar10[0x6c];
          puVar10[0x6b] = 0;
          puVar10[0x6c] = 0;
          *plVar3 = 0;
          uStack_108 = 2;
          uStack_100 = uStack_100 & 0xffffffffffffff00;
          in_ZR = *(char *)(puVar10 + 0x69) == '\x01';
          if ((bool)in_ZR) {
            uStack_f8 = puVar10[0x67];
            uStack_100 = *puVar2;
            uStack_f0 = puVar10[0x68];
            puVar10[0x67] = 0;
            puVar10[0x68] = 0;
            *puVar2 = 0;
          }
          puStack_118 = (undefined8 *)0x0;
          uStack_110 = 0;
          puStack_120 = (undefined8 *)0x0;
          uStack_c8 = 2;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_e8 = in_ZR;
          if (*(char *)(puVar10 + 0x69) != '\0') {
            func_0x00010b14e994();
            uStack_a8 = extraout_w8;
          }
          func_0x00010b1504c4();
          func_0x00010b14fd1c();
          func_0x0001052a03ac(&puStack_120);
          func_0x00010b14fd34();
          func_0x00010b1501e4();
        }
        func_0x00010b14f410();
      }
      func_0x00010b14fe20();
      FUN_10b144044(puVar6);
      func_0x00010b14fa9c();
      func_0x00010b14f4a8();
      *(undefined1 *)(puVar10 + 0x7b) = extraout_w8_00;
      func_0x00010b14ed64();
      if ((bool)in_ZR) {
        puStack_78 = puVar15;
        FUN_10b0fb514(puVar10 + 2,&puStack_78);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(auStack_88);
        puStack_78 = auStack_88;
        FUN_10b0fb468(puVar10 + 2,&puStack_78);
        __ZNSt13exception_ptrD1Ev(auStack_88);
      }
      func_0x00010b14f5c4();
      func_0x00010b141cc4(plVar17);
      func_0x00010b1257f8(puVar16);
      func_0x00010b14efd4();
    }
  }
  return;
}



/* Entry: 10b1487f0; end: 10b14889b;  */

void FUN_10b1487f0(void)

{
  undefined8 extraout_x9;
  int extraout_w11;
  int extraout_w12;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  func_0x00010b14f670();
  FUN_10b148df4(auStack_40);
  FUN_10b148e1c(auStack_30,auStack_40);
  func_0x00010b14f5a4();
  func_0x00010b14f5ac();
  if (lStack_28 == 0) {
    uStack_38 = 0;
  }
  else {
    do {
      func_0x00010b14ec7c();
      uStack_38 = extraout_x9;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b14ee64();
    } while (extraout_w11 != 0);
  }
  FUN_10b148ff4(auStack_40);
  func_0x00010b14f5a4();
  func_0x00010b14f980();
  func_0x00010b14f6bc();
  return;
}



/* Entry: 10b14889c; end: 10b14889f;  */

void FUN_10b14889c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbec40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1488a0; end: 10b1488b3;  */

void FUN_10b1488a0(void)

{
  FUN_10b1488d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1488b4; end: 10b1488d7;  */

void FUN_10b1488b4(void)

{
  long unaff_x19;
  
  func_0x00010b1503f0();
  FUN_10b139ef0(unaff_x19 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b1488d8; end: 10b1488e7;  */

void FUN_10b1488d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1488e8; end: 10b148acb;  */

void FUN_10b1488e8(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar2;
  long unaff_x21;
  long lVar3;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [72];
  
  uStack_b8 = param_2;
  lStack_b0 = param_3;
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = *param_1;
  uStack_a8 = param_2;
  lStack_a0 = param_3;
  func_0x00010b14f0e8();
  func_0x0001052a5030(auStack_78,&uStack_a8);
  func_0x00010b14f82c();
  if ((bool)in_ZR) {
    if (*(char *)(unaff_x21 + 0x88) == '\x01') {
      func_0x00010b14f484();
      FUN_10b0fb62c();
    }
    else {
      func_0x00010b14f7fc();
      func_0x00010b14f484();
      func_0x0001052a5170();
      *(undefined1 *)(unaff_x21 + 0x88) = 1;
    }
  }
  else {
    func_0x00010b14f484();
    func_0x0001052a5170();
    *(undefined1 *)(unaff_x21 + 0x88) = 1;
    *(undefined1 *)(unaff_x21 + 0x90) = 1;
  }
  func_0x0001052a51d4(auStack_78);
  lVar1 = *param_1;
  lVar3 = *(long *)(lVar1 + 0x98);
  uStack_88 = *(undefined8 *)(lVar1 + 0xa8);
  uStack_90 = *(undefined8 *)(lVar1 + 0xa0);
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  lStack_98 = lVar3;
  func_0x00010b14f014();
  func_0x00010b14ff24();
  while (lVar3 != lVar2) {
    func_0x00010b14fd54();
    (*extraout_x8)();
  }
  func_0x00010b14f6ac();
  func_0x0001052a4f84(&uStack_a8);
  func_0x0001052a4f84(&uStack_b8);
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b148acc; end: 10b148acf;  */

undefined8 * FUN_10b148acc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbec90;
  func_0x00010b148b58(param_1 + 1);
  return param_1;
}



/* Entry: 10b148ad0; end: 10b148ae3;  */

void FUN_10b148ad0(void)

{
  FUN_10b148b2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b148ae4; end: 10b148b2b;  */

void FUN_10b148ae4(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x00010b14eb80();
  if (param_3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  FUN_10b1488e8(param_1 + 8);
  func_0x0001052a4f84(auStack_30);
  return;
}



/* Entry: 10b148b2c; end: 10b148bb3;  */

undefined8 * FUN_10b148b2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbec90;
  func_0x00010b148b58(param_1 + 1);
  return param_1;
}



/* Entry: 10b148bb4; end: 10b148c07;  */

long FUN_10b148bb4(void)

{
  long lVar1;
  long alStack_30 [2];
  
  FUN_10b148c08(alStack_30);
  func_0x00010b14f420(alStack_30[0] + 0x2b8);
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_30[0];
  FUN_10b148c44(alStack_30[0]);
  func_0x00010b14f5e4();
  func_0x00010b14f5ac();
  return lVar1;
}



/* Entry: 10b148c08; end: 10b148c43;  */

void FUN_10b148c08(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x21;
  undefined8 in_register_00005008;
  
  func_0x00010b14edb0();
  func_0x00010b14fed4();
  func_0x00010b14f8d0();
  unaff_x21[1] = in_register_00005008;
  *unaff_x21 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b148c44; end: 10b148c9f;  */

undefined8 FUN_10b148c44(long param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(param_1 + 0x280) & 1) == 0) {
    func_0x00010b14eb40(*(undefined8 *)(param_1 + 0x2f8));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b148ca0; end: 10b148df3;  */

void FUN_10b148ca0(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined1 auStack_b8 [40];
  long lStack_90;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  func_0x00010b14f1e4();
  func_0x00010b150674();
  FUN_10b148df4();
  func_0x00010b1504e4();
  FUN_10b148e1c();
  func_0x00010b148c7c(auStack_80);
  func_0x00010b148c7c(auStack_40);
  func_0x00010b14fa0c();
  func_0x00010b14fefc(uStack_48);
  func_0x00010b150624();
  func_0x00010b14efa0();
  func_0x00010b14f400(extraout_x8 + 0x2b8);
  __ZNSt3__15mutex4lockEv();
  func_0x00010b148c44();
  if ((int)puStack_30 == 0) {
    func_0x00010b150778();
    FUN_10b148ee4();
    func_0x00010b14f694();
    puVar1 = *(undefined1 **)(extraout_x8_00 + 0x300);
    *(undefined8 *)(extraout_x8_00 + 0x300) = extraout_x9;
    if (puVar1 != (undefined1 *)0x0) {
      func_0x00010b14e9f4();
      func_0x00010b150744();
      if (puVar1 != (undefined1 *)0x0) {
        func_0x00010b14e9f4();
      }
    }
  }
  else {
    func_0x00010b150738();
    FUN_10b148e1c();
    puVar1 = puStack_30;
  }
  func_0x00010b14f4bc();
  if (lStack_90 != 0) {
    func_0x00010b150644();
    if (extraout_x8_01 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    func_0x00010b150650();
    FUN_10b148e40();
    puVar1 = auStack_b8;
    func_0x00010b148c7c();
  }
  func_0x00010b14f1f8();
  func_0x00010b148c7c();
  func_0x00010b1506d4();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010b14e9f4();
  }
  func_0x00010b14f498();
  func_0x00010b14f5f4();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010b14e9f4();
  }
  func_0x00010b14f6bc();
  return;
}



/* Entry: 10b148df4; end: 10b148e1b;  */

void FUN_10b148df4(void)

{
  func_0x00010b14ec8c();
  func_0x00010b14f4e4();
  func_0x00010b14e948();
  func_0x00010b14eff4();
  return;
}



/* Entry: 10b148e1c; end: 10b148e3f;  */

void FUN_10b148e1c(void)

{
  func_0x00010b14e8d0();
  func_0x00010b148c7c();
  return;
}



/* Entry: 10b148e40; end: 10b148ee3;  */

void FUN_10b148e40(void)

{
  long extraout_x9;
  int extraout_w11;
  int extraout_w12;
  long unaff_x19;
  
  func_0x00010b14f918();
  if (extraout_x9 != 0) {
    do {
      func_0x00010b14ec7c();
    } while (extraout_w12 != 0);
    do {
      func_0x00010b14ee64();
    } while (extraout_w11 != 0);
  }
  func_0x00010b14f1d8();
  FUN_10b148f8c();
  func_0x00010b14f5a4();
  func_0x00010b14f5ac();
  func_0x000107c27b68(*(undefined8 *)(unaff_x19 + 0x10));
  return;
}



/* Entry: 10b148ee4; end: 10b148f07;  */

void FUN_10b148ee4(void)

{
  func_0x00010b14ef90();
  func_0x00010b14fb84(&PTR_FUN_110cbefb0);
  return;
}



/* Entry: 10b148f08; end: 10b148f0b;  */

undefined8 FUN_10b148f08(undefined8 param_1)

{
  func_0x00010b14fd24(&PTR_FUN_110cbefb0);
  return param_1;
}



/* Entry: 10b148f0c; end: 10b148f1f;  */

void FUN_10b148f0c(void)

{
  FUN_10b148f64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b148f20; end: 10b148f63;  */

void FUN_10b148f20(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010b14f864();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b14f478();
  FUN_10b148e40();
  func_0x00010b14f980();
  return;
}



/* Entry: 10b148f64; end: 10b148f8b;  */

undefined8 FUN_10b148f64(undefined8 param_1)

{
  func_0x00010b14fd24(&PTR_FUN_110cbefb0);
  return param_1;
}



/* Entry: 10b148f8c; end: 10b148fc7;  */

void FUN_10b148f8c(void)

{
  func_0x00010b150700();
  FUN_10b148c08();
  func_0x00010b14f568();
  FUN_10b148fc8();
  func_0x00010b14f980();
  func_0x00010b1502bc();
  return;
}



/* Entry: 10b148fc8; end: 10b148ff3;  */

void FUN_10b148fc8(void)

{
  func_0x00010b14f288();
  __ZNSt3__112__get_sp_mutEPKv();
  func_0x00010b14f574();
  func_0x00010b14eb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}



/* Entry: 10b148ff4; end: 10b1490cf;  */

void FUN_10b148ff4(void)

{
  code *pcVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  int extraout_w11;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [2];
  long lStack_30;
  
  func_0x00010b14f670();
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010b1504fc();
  FUN_10b148df4();
  func_0x00010b1504f0();
  FUN_10b148e1c();
  func_0x00010b148c7c(alStack_40);
  func_0x00010b14f5a4();
  alStack_40[0] = lStack_30 + 0x2b8;
  func_0x00010b14f600();
  __ZNSt3__15mutex4lockEv();
  func_0x00010b150680();
  lVar2 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x00010b14eb14();
      lVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x00010b150558(lVar2 + 0x288);
  FUN_10b1490d0();
  func_0x00010b14f5ac();
  if (*(long *)(lStack_30 + 0x2f8) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_68,lStack_30 + 0x2f8);
    func_0x00010b14f374();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b149098);
    (*pcVar1)();
  }
  FUN_10b149108();
  func_0x00010b14f4ec();
  func_0x00010b14f6bc();
  return;
}



/* Entry: 10b1490d0; end: 10b1490ff;  */

void FUN_10b1490d0(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x00010b14f108();
  while (uVar1 = unaff_x19, FUN_10b149100(), (uVar1 & 1) == 0) {
    func_0x00010b14f320();
  }
  return;
}



/* Entry: 10b149100; end: 10b149107;  */

undefined8 FUN_10b149100(long *param_1)

{
  undefined8 unaff_x19;
  
  if ((*(byte *)(*param_1 + 0x280) & 1) == 0) {
    func_0x00010b14eb40(*(undefined8 *)(*param_1 + 0x2f8));
  }
  else {
    unaff_x19 = 1;
  }
  return unaff_x19;
}



/* Entry: 10b149108; end: 10b149143;  */

undefined1 * FUN_10b149108(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x278] = 0;
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_10b149144();
  }
  else {
    FUN_10b149164();
  }
  return param_1;
}



/* Entry: 10b149144; end: 10b149163;  */

void FUN_10b149144(long param_1)

{
  FUN_10b121c1c();
  *(undefined1 *)(param_1 + 0x278) = 1;
  return;
}



/* Entry: 10b149164; end: 10b1491bb;  */

void FUN_10b149164(long param_1)

{
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 0x278) = 0;
  return;
}



/* Entry: 10b1491bc; end: 10b1492b3;  */

void FUN_10b1491bc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 *puStack_68;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x00010b14f288();
  func_0x00010b14ec00();
  piVar1 = (int *)(param_1 + 0x20);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar5 = iVar2 == 0;
  uStack_38 = extraout_x8;
  if (iVar2 < 1) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_10b1492b4(&uStack_78,unaff_x20 + 0x28);
    FUN_10b149344();
    func_0x00010b14feb8();
    puVar6 = puStack_68;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_78 = *unaff_x19;
    (**(code **)(unaff_x19[1] + 0x10))(auStack_70,unaff_x19 + 1);
    func_0x00010b149c2c(auStack_48);
    FUN_10b1492dc(uVar8,&uStack_78);
    puVar6 = &uStack_78;
    func_0x00010b149c68();
  }
  func_0x00010b14e980(uStack_38);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b14f0c8();
  func_0x000107c2798c();
  func_0x00010b14efcc();
  lVar7 = extraout_x8_00;
  func_0x000107c27f4c();
  *(undefined8 **)(lVar7 + 0x10) = puVar6 + 8;
  return;
}



/* Entry: 10b1492b4; end: 10b1492db;  */

void FUN_10b1492b4(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b1492dc; end: 10b149343;  */

void FUN_10b1492dc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_28;
  
  func_0x00010b14ec00();
  puVar1 = &uStack_88;
  uStack_28 = extraout_x8;
  FUN_10b149964();
  func_0x00010b14f20c();
  func_0x00010b14f444();
  (*extraout_x8_00)();
  func_0x00010b14eebc();
  func_0x00010b14e980(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x00010b14eebc();
  func_0x00010b14efcc();
  func_0x00010b14f3d0();
  func_0x00010b149398();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_10b1493c0(puVar1);
  }
  FUN_10b149518(puVar1);
  *param_2 = uStack_88;
  func_0x00010b150380(*(undefined8 *)(lStack_80 + 0x10),param_2 + 1);
  puVar1[5] = puVar1[5] + 1;
  return;
}



/* Entry: 10b149344; end: 10b1493bf;  */

void FUN_10b149344(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b14f3d0();
  func_0x00010b149398();
  if (param_1 == 0) {
    FUN_10b1493c0();
  }
  FUN_10b149518();
  *param_2 = *unaff_x20;
  func_0x00010b150380(*(undefined8 *)(unaff_x20[1] + 0x10),param_2 + 1);
  *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x19 + 0x28) + 1;
  return;
}



/* Entry: 10b1493c0; end: 10b149517;  */

void FUN_10b1493c0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  
  if ((ulong)param_1[4] < 0x55) {
    uVar6 = param_1[2] - param_1[1];
    plVar2 = param_1 + 3;
    lVar4 = *plVar2;
    uVar5 = lVar4 - *param_1;
    if (uVar5 <= uVar6) {
      lVar1 = (long)uVar5 >> 2;
      if (lVar4 == *param_1) {
        lVar1 = 1;
      }
      plStack_30 = plVar2;
      FUN_10b149898();
      lStack_48 = (long)plVar2 + uVar6;
      plStack_38 = plVar2 + lVar1;
      uVar3 = 0xff0;
      lStack_50 = (long)plVar2;
      lStack_40 = lStack_48;
      __Znwm();
      plStack_60 = param_1 + 5;
      uStack_58 = 0x55;
      uStack_70 = uVar3;
      uStack_68 = uVar3;
      FUN_10b14972c(&lStack_50,&uStack_70);
      uStack_68 = 0;
      lVar4 = param_1[2];
      while (lVar1 = param_1[1], lVar4 != lVar1) {
        lVar4 = lVar4 + -8;
        FUN_10b1497b8(&lStack_50,lVar4);
      }
      lVar4 = *param_1;
      lVar8 = param_1[3];
      lVar7 = param_1[2];
      param_1[1] = lStack_48;
      *param_1 = lStack_50;
      param_1[3] = (long)plStack_38;
      param_1[2] = lStack_40;
      lStack_50 = lVar4;
      lStack_48 = lVar1;
      lStack_40 = lVar7;
      plStack_38 = (long *)lVar8;
      FUN_10b1498d8(&uStack_68);
      FUN_10b149914(&lStack_50);
      return;
    }
    lVar1 = 0xff0;
    if (lVar4 != param_1[2]) {
      __Znwm();
      lStack_50 = lVar1;
      func_0x00010b14f1d8();
      FUN_10b149600();
      return;
    }
    __Znwm();
    lStack_50 = lVar1;
    func_0x00010b14f1d8();
    FUN_10b149684();
  }
  else {
    param_1[4] = param_1[4] - 0x55;
  }
  lStack_50 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  func_0x00010b14f1d8();
  FUN_10b14957c();
  return;
}



/* Entry: 10b149518; end: 10b14957b;  */

void FUN_10b149518(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10b14957c; end: 10b1495ff;  */

void FUN_10b14957c(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong uVar3;
  ulong *unaff_x19;
  
  func_0x00010b14f3d0();
  func_0x00010b14ffb4();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x00010b14f128();
      if (!bVar2) {
        func_0x00010b14f7c4();
      }
      func_0x00010b14ffa4();
    }
    else {
      uVar3 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar3 = 0;
      }
      func_0x00010b14f6c4();
      func_0x00010b14eecc(param_1 + (uVar3 >> 2) * 8);
      func_0x00010b14faf4();
      func_0x00010b14ea30();
    }
  }
  func_0x00010b14ffe4();
  return;
}



/* Entry: 10b149600; end: 10b149683;  */

void FUN_10b149600(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong uVar3;
  ulong *unaff_x19;
  
  func_0x00010b14f3d0();
  func_0x00010b14ffb4();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x00010b14f128();
      if (!bVar2) {
        func_0x00010b14f7c4();
      }
      func_0x00010b14ffa4();
    }
    else {
      uVar3 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar3 = 0;
      }
      func_0x00010b14f6c4();
      func_0x00010b14eecc(param_1 + (uVar3 >> 2) * 8);
      func_0x00010b14faf4();
      func_0x00010b14ea30();
    }
  }
  func_0x00010b14ffe4();
  return;
}



/* Entry: 10b149684; end: 10b14972b;  */

void FUN_10b149684(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  ulong uVar5;
  long unaff_x22;
  
  func_0x00010b14f3d0();
  uVar5 = param_1[1];
  bVar1 = *param_1 <= uVar5;
  uVar2 = uVar5 == *param_1;
  if ((bool)uVar2) {
    lVar3 = unaff_x19;
    func_0x00010b14ffb4();
    if (bVar1) {
      lVar4 = (long)(extraout_x9 - uVar5) >> 2;
      if (extraout_x9 - uVar5 == 0) {
        lVar4 = 1;
      }
      FUN_10b149898();
      func_0x00010b14eecc(lVar3 + (lVar4 * 2 + 6U & 0xfffffffffffffff8));
      func_0x00010b14faf4();
      func_0x00010b14ea30();
      uVar5 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x00010b14f6d0();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(ulong *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar5 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar5 - 8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar5 - 8);
  return;
}



/* Entry: 10b14972c; end: 10b1497b7;  */

void FUN_10b14972c(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  
  func_0x00010b14f3d0();
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    uVar4 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar4;
    if (uVar4 < unaff_x19[1]) {
      func_0x00010b14f128();
      if (!bVar2) {
        func_0x00010b14f7c4();
      }
      func_0x00010b14ffa4();
    }
    else {
      lVar1 = *(long *)(param_1 + 0x10) - uVar4;
      uVar4 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar4 = 0;
      }
      uVar3 = unaff_x19[4];
      func_0x00010b14f6c4(uVar3);
      func_0x00010b14eecc(uVar3 + (uVar4 >> 2) * 8);
      func_0x00010b14faf4();
      func_0x00010b14ea30();
    }
  }
  func_0x00010b14ffe4();
  return;
}



/* Entry: 10b1497b8; end: 10b149863;  */

void FUN_10b1497b8(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010b14f3d0();
  lVar3 = param_1[1];
  if (lVar3 == *param_1) {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == uVar1;
    if (*(ulong *)(unaff_x19 + 0x10) < uVar1) {
      func_0x00010b14f6d0();
      lVar3 = extraout_x8;
      if (!bVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      lVar3 = unaff_x21;
    }
    else {
      lVar4 = (long)(uVar1 - lVar3) >> 2;
      if (uVar1 - lVar3 == 0) {
        lVar4 = 1;
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      FUN_10b149898();
      func_0x00010b14eecc(lVar3 + (lVar4 * 2 + 6U & 0xfffffffffffffff8));
      func_0x00010b14faf4();
      func_0x00010b14ea30();
      lVar3 = *(long *)(unaff_x19 + 8);
    }
  }
  *(undefined8 *)(lVar3 + -8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(lVar3 + -8);
  return;
}



/* Entry: 10b149864; end: 10b149897;  */

void FUN_10b149864(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_3 - (long)param_2 >> 3;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar3;
  for (lVar4 = lVar2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + lVar2;
  return;
}



/* Entry: 10b149898; end: 10b1498bb;  */

void FUN_10b149898(void)

{
  FUN_10b1498bc();
  return;
}



/* Entry: 10b1498bc; end: 10b1498d7;  */

long FUN_10b1498bc(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10b1498fc();
  return param_1;
}



/* Entry: 10b1498d8; end: 10b1498fb;  */

undefined8 FUN_10b1498d8(undefined8 param_1)

{
  FUN_10b1498fc(param_1,0);
  return param_1;
}



/* Entry: 10b1498fc; end: 10b149913;  */

void FUN_10b1498fc(long *param_1,long param_2)

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



/* Entry: 10b149914; end: 10b14993f;  */

long * FUN_10b149914(long *param_1)

{
  FUN_10b149940();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b149940; end: 10b149963;  */

void FUN_10b149940(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b149964; end: 10b14998f;  */

undefined8 * FUN_10b149964(undefined8 *param_1)

{
  *param_1 = FUN_10b149990;
  func_0x00010b149b9c(param_1 + 1);
  return param_1;
}



/* Entry: 10b149990; end: 10b149997;  */

void FUN_10b149990(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 auStack_98 [16];
  long lStack_88;
  code **ppcStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  code *pcStack_58;
  long lStack_50;
  undefined8 uStack_28;
  
  puVar6 = (undefined8 *)(param_1 + 0x10);
  func_0x00010b14ec00();
  uStack_28 = extraout_x8;
  (*(code *)*puVar6)();
  while( true ) {
    lVar4 = *(long *)(param_1 + 0x40);
    FUN_10b149a38(&pcStack_58);
    if ((*(byte *)(lStack_50 + 8) & 1) != 0) break;
    (*pcStack_58)(&pcStack_58);
    func_0x00010b14eebc();
  }
  func_0x00010b14efb8();
  piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x20);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x00010b14e980(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    lVar5 = lVar4;
    func_0x00010b14eebc();
    func_0x00010b14efcc();
    pcStack_68 = FUN_10b149a38;
    ppcStack_80 = &pcStack_58;
    lStack_78 = lVar4;
    puStack_70 = &stack0xfffffffffffffff0;
    FUN_10b1492b4(auStack_98,lVar5 + 0x28);
    if (*(long *)(lStack_88 + 0x28) == 0) {
      extraout_x8_00[3] = 0;
      extraout_x8_00[2] = 0;
      extraout_x8_00[5] = 0;
      extraout_x8_00[4] = 0;
      *extraout_x8_00 = &UNK_1053a6a3c;
      extraout_x8_00[1] = &PTR_DAT_110873830;
    }
    else {
      puVar6 = (undefined8 *)
               (*(long *)(*(long *)(lStack_88 + 8) + (*(ulong *)(lStack_88 + 0x20) / 0x55) * 8) +
               (*(ulong *)(lStack_88 + 0x20) % 0x55) * 0x30);
      *extraout_x8_00 = *puVar6;
      (**(code **)(puVar6[1] + 0x10))(extraout_x8_00 + 1);
      FUN_10b149ae8(lStack_88);
    }
    func_0x00010b14feb8();
    return;
  }
  return;
}



/* Entry: 10b149998; end: 10b149a37;  */

void FUN_10b149998(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 auStack_98 [16];
  long lStack_88;
  code **ppcStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  code *pcStack_58;
  long lStack_50;
  undefined8 uStack_28;
  
  puVar6 = param_1;
  func_0x00010b14ec00();
  uStack_28 = extraout_x8;
  (*(code *)*puVar6)();
  while( true ) {
    lVar4 = param_1[6];
    FUN_10b149a38(&pcStack_58);
    if ((*(byte *)(lStack_50 + 8) & 1) != 0) break;
    (*pcStack_58)(&pcStack_58);
    func_0x00010b14eebc();
  }
  func_0x00010b14efb8();
  piVar1 = (int *)(param_1[6] + 0x20);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x00010b14e980(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    lVar5 = lVar4;
    func_0x00010b14eebc();
    func_0x00010b14efcc();
    pcStack_68 = FUN_10b149a38;
    ppcStack_80 = &pcStack_58;
    lStack_78 = lVar4;
    puStack_70 = &stack0xfffffffffffffff0;
    FUN_10b1492b4(auStack_98,lVar5 + 0x28);
    if (*(long *)(lStack_88 + 0x28) == 0) {
      extraout_x8_00[3] = 0;
      extraout_x8_00[2] = 0;
      extraout_x8_00[5] = 0;
      extraout_x8_00[4] = 0;
      *extraout_x8_00 = &UNK_1053a6a3c;
      extraout_x8_00[1] = &PTR_DAT_110873830;
    }
    else {
      puVar6 = (undefined8 *)
               (*(long *)(*(long *)(lStack_88 + 8) + (*(ulong *)(lStack_88 + 0x20) / 0x55) * 8) +
               (*(ulong *)(lStack_88 + 0x20) % 0x55) * 0x30);
      *extraout_x8_00 = *puVar6;
      (**(code **)(puVar6[1] + 0x10))(extraout_x8_00 + 1);
      FUN_10b149ae8(lStack_88);
    }
    func_0x00010b14feb8();
    return;
  }
  return;
}



/* Entry: 10b149a38; end: 10b149ae7;  */

void FUN_10b149a38(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  FUN_10b1492b4(auStack_38,param_2 + 0x28);
  if (*(long *)(lStack_28 + 0x28) == 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    *param_1 = &UNK_1053a6a3c;
    param_1[1] = &PTR_DAT_110873830;
  }
  else {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(lStack_28 + 8) + (*(ulong *)(lStack_28 + 0x20) / 0x55) * 8) +
             (*(ulong *)(lStack_28 + 0x20) % 0x55) * 0x30);
    *param_1 = *puVar1;
    (**(code **)(puVar1[1] + 0x10))(param_1 + 1);
    FUN_10b149ae8(lStack_28);
  }
  func_0x00010b14feb8();
  return;
}



/* Entry: 10b149ae8; end: 10b149bc7;  */

bool FUN_10b149ae8(long param_1)

{
  bool bVar1;
  
  func_0x00010b150448(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x55) * 8) +
                      (*(ulong *)(param_1 + 0x20) % 0x55) * 0x30);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0xa9 < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x55;
  }
  return bVar1;
}



/* Entry: 10b149bc8; end: 10b149bcf;  */

long FUN_10b149bc8(long param_1)

{
  func_0x00010b149c94(param_1 + 0x38);
  func_0x00010b150448(param_1 + 8);
  return param_1 + 8;
}



/* Entry: 10b149bd0; end: 10b149beb;  */

void FUN_10b149bd0(undefined8 param_1,long param_2)

{
  func_0x00010b149b9c(param_1,param_2 + 8);
  return;
}



/* Entry: 10b149bec; end: 10b149cb7;  */

void FUN_10b149bec(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b14f288();
  *param_1 = *param_2;
  (**(code **)(*(long *)(unaff_x19 + 8) + 0x10))(param_1 + 1,(long *)(unaff_x19 + 8));
  uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  return;
}



/* Entry: 10b149cb8; end: 10b149ceb;  */

void FUN_10b149cb8(long param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_10b149cec(auStack_30,param_1 + 0x10);
  func_0x00010b14fafc();
  func_0x00010b14f24c();
  return;
}



/* Entry: 10b149cec; end: 10b149e57;  */

void FUN_10b149cec(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar3;
  undefined8 *unaff_x25;
  
  func_0x00010b14fbc4();
  func_0x00010b14ec10();
  func_0x00010b14fde4(FUN_10b14d510);
  func_0x00010b14f5bc();
  func_0x00010b14ef78();
  FUN_10b149e58();
  if ((unaff_x20 & 1) == 0) {
    func_0x00010b14f118();
    func_0x00010b14f0e8();
    lVar3 = *unaff_x21;
    if ((*(byte *)(lVar3 + 0x90) & 1) == 0) {
      func_0x00010b14fe9c();
      if ((bool)in_CY) {
        lVar3 = *(long *)(lVar3 + 0x98);
        func_0x00010b14ea1c();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b149e00:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b149e04);
          (*pcVar2)();
        }
        func_0x00010b14e8b4(extraout_x8 - lVar3);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b149e00;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b14e894();
        func_0x00010b14fe6c();
        if (lVar3 != 0) {
          func_0x00010b14f3dc();
        }
      }
      else {
        *unaff_x25 = param_1;
      }
      func_0x00010b14fe60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
      return;
    }
    func_0x00010b14f014();
    func_0x00010b14efec(*param_1);
  }
  else {
    func_0x00010b1506e0();
    FUN_10b149e80();
    func_0x00010b14f184();
    func_0x00010b14e930();
    if ((bool)in_ZR) {
      func_0x00010b14ec20();
      func_0x00010b14eb5c();
    }
    else {
      func_0x00010b14e960();
      func_0x00010b14eb68();
      func_0x00010b14f0a4();
    }
    func_0x00010b14f084();
    func_0x00010b14efd4();
  }
  return;
}



/* Entry: 10b149e58; end: 10b149e7f;  */

undefined1 FUN_10b149e58(void)

{
  undefined1 uVar1;
  long *unaff_x19;
  
  func_0x00010b14ecb0();
  uVar1 = *(undefined1 *)(*unaff_x19 + 0x90);
  func_0x00010b14f014();
  return uVar1;
}



/* Entry: 10b149e80; end: 10b149ebb;  */

long FUN_10b149e80(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    return param_1 + 0x40;
  }
  func_0x00010b14ed8c();
  func_0x00010b14f374();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b149eb4);
  (*pcVar1)();
}



/* Entry: 10b149ebc; end: 10b149efb;  */

void FUN_10b149ebc(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010b14f1cc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b149efc; end: 10b149f0f;  */

void FUN_10b149efc(void)

{
  FUN_10b149f8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b149f10; end: 10b149f8b;  */

void FUN_10b149f10(long param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_10b147f70(auStack_30,param_1 + 0xa0);
  FUN_10b147efc(param_1,auStack_30);
  func_0x00010b147ed8(auStack_30);
  return;
}



/* Entry: 10b149f8c; end: 10b14a01b;  */

void FUN_10b149f8c(long *param_1)

{
  *param_1 = (long)&PTR_DAT_110cbece8;
  func_0x00010b149ff4(param_1 + 0x14);
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b14a01c; end: 10b14a04f;  */

void FUN_10b14a01c(long param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_10b14a050(auStack_30,param_1 + 0x10);
  func_0x00010b14fafc();
  func_0x00010b14f24c();
  return;
}



/* Entry: 10b14a050; end: 10b14a1bb;  */

void FUN_10b14a050(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar3;
  undefined8 *unaff_x25;
  
  func_0x00010b14fbc4();
  func_0x00010b14ec10();
  func_0x00010b14fde4(FUN_10b14d5b4);
  func_0x00010b14f5bc();
  func_0x00010b14ef78();
  FUN_10b14a1bc();
  if ((unaff_x20 & 1) == 0) {
    func_0x00010b14f118();
    func_0x00010b14f0e8();
    lVar3 = *unaff_x21;
    if ((*(byte *)(lVar3 + 0x90) & 1) == 0) {
      func_0x00010b14fe9c();
      if ((bool)in_CY) {
        lVar3 = *(long *)(lVar3 + 0x98);
        func_0x00010b14ea1c();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b14a164:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b14a168);
          (*pcVar2)();
        }
        func_0x00010b14e8b4(extraout_x8 - lVar3);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b14a164;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b14e894();
        func_0x00010b14fe6c();
        if (lVar3 != 0) {
          func_0x00010b14f3dc();
        }
      }
      else {
        *unaff_x25 = param_1;
      }
      func_0x00010b14fe60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
      return;
    }
    func_0x00010b14f014();
    func_0x00010b14efec(*param_1);
  }
  else {
    func_0x00010b1506e0();
    FUN_10b14a1e4();
    func_0x00010b14f184();
    func_0x00010b14e930();
    if ((bool)in_ZR) {
      func_0x00010b14ec20();
      func_0x00010b14eb5c();
    }
    else {
      func_0x00010b14e960();
      func_0x00010b14eb68();
      func_0x00010b14f0a4();
    }
    func_0x00010b14f084();
    func_0x00010b14efd4();
  }
  return;
}



/* Entry: 10b14a1bc; end: 10b14a1e3;  */

undefined1 FUN_10b14a1bc(void)

{
  undefined1 uVar1;
  long *unaff_x19;
  
  func_0x00010b14ecb0();
  uVar1 = *(undefined1 *)(*unaff_x19 + 0x90);
  func_0x00010b14f014();
  return uVar1;
}



/* Entry: 10b14a1e4; end: 10b14a21f;  */

long FUN_10b14a1e4(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    return param_1 + 0x40;
  }
  func_0x00010b14ed8c();
  func_0x00010b14f374();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b14a218);
  (*pcVar1)();
}



/* Entry: 10b14a220; end: 10b14a263;  */

void FUN_10b14a220(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010b14f1cc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b14a264; end: 10b14a293;  */

void FUN_10b14a264(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10b14a294(auStack_30);
  func_0x00010b14fafc();
  func_0x00010b14f24c();
  return;
}



/* Entry: 10b14a294; end: 10b14a3ff;  */

void FUN_10b14a294(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar3;
  long *unaff_x25;
  
  func_0x00010b14fbc4();
  func_0x00010b14ec10();
  func_0x00010b14fde4(FUN_10b14d658);
  func_0x00010b14f5bc();
  func_0x00010b14ef78();
  FUN_10b14a400();
  if ((unaff_x20 & 1) == 0) {
    func_0x00010b14f118();
    func_0x00010b14f0e8();
    lVar3 = *unaff_x21;
    if ((*(byte *)(lVar3 + 0x90) & 1) == 0) {
      func_0x00010b14fe9c();
      if ((bool)in_CY) {
        lVar3 = *(long *)(lVar3 + 0x98);
        func_0x00010b14ea1c();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b14a3a8:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b14a3ac);
          (*pcVar2)();
        }
        func_0x00010b14e8b4(extraout_x8 - lVar3);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b14a3a8;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b14e894();
        func_0x00010b14fe6c();
        if (lVar3 != 0) {
          func_0x00010b14f3dc();
        }
      }
      else {
        *unaff_x25 = (long)param_1;
      }
      func_0x00010b14fe60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
      return;
    }
    func_0x00010b14f014();
    func_0x00010b14efec(*param_1);
  }
  else {
    FUN_10b14a428(param_1[10]);
    func_0x00010b14f184();
    func_0x00010b14e930();
    if ((bool)in_ZR) {
      func_0x00010b14ec20();
      func_0x00010b14eb5c();
    }
    else {
      func_0x00010b14e960();
      func_0x00010b14eb68();
      func_0x00010b14f0a4();
    }
    func_0x00010b14f084();
    func_0x00010b14efd4();
  }
  return;
}



/* Entry: 10b14a400; end: 10b14a427;  */

undefined1 FUN_10b14a400(void)

{
  undefined1 uVar1;
  long *unaff_x19;
  
  func_0x00010b14ecb0();
  uVar1 = *(undefined1 *)(*unaff_x19 + 0x90);
  func_0x00010b14f014();
  return uVar1;
}



/* Entry: 10b14a428; end: 10b14a46b;  */

void FUN_10b14a428(long *param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(*param_1 + 0x88) & 1) == 0) {
    func_0x00010b14ed8c();
    func_0x00010b14f374();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b14a464);
    (*pcVar1)();
  }
  if ((*(byte *)(*param_1 + 0x88) & 1) != 0) {
    return;
  }
  func_0x00010b150270();
  func_0x00010b14ff40();
  func_0x00010b1500a0();
  func_0x00010552fc08();
  func_0x00010b14fa3c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b14a4a8);
  (*pcVar1)();
}



/* Entry: 10b14a46c; end: 10b14a4af;  */

void FUN_10b14a46c(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    return;
  }
  func_0x00010b150270();
  func_0x00010b14ff40();
  func_0x00010b1500a0();
  func_0x00010552fc08();
  func_0x00010b14fa3c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b14a4a8);
  (*pcVar1)();
}



/* Entry: 10b14a4b0; end: 10b14a4eb;  */

void FUN_10b14a4b0(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010b14f1cc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b14a4ec; end: 10b14a5c7;  */

long * FUN_10b14a4ec(long *param_1)

{
  code *extraout_x8;
  long extraout_x9;
  int extraout_w11;
  
  if (*param_1 != 0) {
    do {
      func_0x00010b14ea74();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b14f664();
      (*extraout_x8)();
    }
  }
  return param_1;
}



/* Entry: 10b14a5c8; end: 10b14a757;  */

void FUN_10b14a5c8(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 extraout_w8;
  long lVar3;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  undefined8 *unaff_x21;
  undefined8 uVar4;
  long lStack_48;
  
  func_0x00010b150520();
  puVar1 = (undefined8 *)0x88;
  __Znwm();
  puVar2 = puVar1 + 2;
  *puVar1 = FUN_10b14e10c;
  puVar1[1] = FUN_10b14e20c;
  FUN_10b124f8c();
  func_0x00010b14f8f4();
  lVar3 = unaff_x21[1];
  uVar4 = *unaff_x21;
  puVar1[0xf] = unaff_x21[1];
  puVar1[0xe] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010b150340();
  func_0x00010b1501d4();
  if (((ulong)puVar2 & 1) == 0) {
    *(undefined1 *)(puVar1 + 0x10) = 0;
    func_0x00010b14f18c();
    FUN_10b12d1c8();
    if (lStack_48 != 0) {
      do {
        func_0x00010b14ea74();
      } while (extraout_w11 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b14e9c4();
        func_0x00010b14f3ec();
      }
    }
  }
  else {
    func_0x00010b1501c4();
    func_0x00010b14f584();
    func_0x00010b150340();
    FUN_10b124eb8(puVar1 + 10);
    func_0x00010b14f584();
    lVar3 = puVar1[0xe];
    FUN_10b14a8d4();
    func_0x00010b1500e8();
    if (extraout_x8 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10_00 != 0);
    }
    if (lVar3 != 0) {
      func_0x00010b14f664();
      (*extraout_x8_00)();
    }
    func_0x00010b14fc78();
    func_0x00010b14f184();
    func_0x00010b14faac();
    func_0x00010b14f01c();
    *(undefined1 *)(puVar1 + 0x10) = extraout_w8;
    func_0x00010b14f2b0();
    if ((bool)in_ZR) {
      func_0x00010b14ff64();
      func_0x00010b14f8dc();
    }
    else {
      func_0x00010b1506b4();
      func_0x00010b14f0ac();
      func_0x00010b14f8e8();
      func_0x00010b14f84c();
    }
    func_0x00010b14f084();
    func_0x00010b14efd4();
  }
  return;
}



/* Entry: 10b14a758; end: 10b14a8d3;  */

void FUN_10b14a758(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  long *unaff_x20;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x25;
  
  func_0x00010b14fbc4();
  func_0x00010b14ec10();
  func_0x00010b14fde4(FUN_10b14e068);
  func_0x00010b14f5bc();
  func_0x00010b14ef78();
  plVar4 = (long *)*unaff_x20;
  func_0x00010b14fa64();
  bVar2 = *(byte *)(*unaff_x20 + 0x58);
  func_0x00010b14f4b4();
  if ((bVar2 & 1) == 0) {
    func_0x00010b14f118();
    func_0x00010b14f0e8();
    lVar6 = *plVar4;
    if ((*(byte *)(lVar6 + 0x58) & 1) == 0) {
      func_0x00010b1500dc();
      if ((bool)in_CY) {
        lVar5 = *(long *)(lVar6 + 0x60);
        func_0x00010b14ea1c();
        if (extraout_x10 != 0) {
          func_0x00010552fc6c();
LAB_10b14a87c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b14a880);
          (*pcVar3)();
        }
        func_0x00010b14e8b4(extraout_x8 - lVar5);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b14a87c;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b14e894();
        func_0x00010b1500b8();
        if (lVar5 != 0) {
          func_0x00010b14f3dc();
        }
      }
      else {
        *unaff_x25 = param_1;
        unaff_x25 = unaff_x25 + 1;
      }
      *(undefined8 **)(lVar6 + 0x68) = unaff_x25;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(bVar2);
      return;
    }
    func_0x00010b14f014();
    func_0x00010b14efec(*param_1);
  }
  else {
    func_0x00010b1506e0();
    FUN_10b14a8d4();
    func_0x00010b14f184();
    func_0x00010b14e930();
    if ((bool)in_ZR) {
      func_0x00010b14ec20();
      func_0x00010b14eb5c();
    }
    else {
      func_0x00010b14e960();
      func_0x00010b14eb68();
      func_0x00010b14f0a4();
    }
    func_0x00010b14f084();
    func_0x00010b14efd4();
  }
  return;
}



/* Entry: 10b14a8d4; end: 10b14a90f;  */

long FUN_10b14a8d4(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    return param_1 + 0x40;
  }
  func_0x00010b14ed8c();
  func_0x00010b14f374();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b14a908);
  (*pcVar1)();
}



/* Entry: 10b14a910; end: 10b14aad3;  */

void FUN_10b14a910(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x9;
  int extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 extraout_var;
  int unaff_w20;
  long lVar4;
  undefined8 *unaff_x25;
  undefined8 in_register_00005008;
  
  func_0x00010b14fbc4();
  func_0x00010b14f3b4();
  *param_2 = FUN_10b14df9c;
  param_2[1] = FUN_10b14e03c;
  func_0x000105c40d24(param_2 + 2);
  func_0x000105c407c0(param_2 + 2);
  FUN_10b14a400();
  if (unaff_w20 == 0) {
    func_0x00010b14f8d0();
    param_2[0x13] = in_register_00005008;
    param_2[0x12] = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    puVar3 = param_2 + 0x12;
    FUN_10b14a400();
    if (((ulong)puVar3 & 1) == 0) {
      *(undefined1 *)(param_2 + 0x14) = 0;
      func_0x00010b14f0e8();
      lVar4 = param_2[0x12];
      if ((*(byte *)(lVar4 + 0x90) & 1) != 0) {
        func_0x00010b14f014();
        func_0x00010b14efec(*param_2);
        return;
      }
      func_0x00010b14fe9c();
      if ((bool)in_CY) {
        lVar4 = *(long *)(lVar4 + 0x98);
        func_0x00010b14ea1c();
        if (CONCAT44(extraout_var,extraout_w10_00) != 0) {
          func_0x00010552fc6c();
LAB_10b14aa7c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b14aa80);
          (*pcVar2)();
        }
        func_0x00010b14e8b4(extraout_x8_00 - lVar4);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_01;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b14aa7c;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b14e894();
        func_0x00010b14fe6c();
        if (lVar4 != 0) {
          func_0x00010b14f3dc();
        }
      }
      else {
        *unaff_x25 = param_2;
      }
      func_0x00010b14fe60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
      return;
    }
    FUN_10b14a428();
    func_0x00010b1504a4();
    func_0x00010b14fadc();
  }
  else {
    FUN_10b14a428();
    func_0x00010b1504a4();
  }
  func_0x00010b14ecd0();
  if ((bool)in_ZR) {
    func_0x00010b14f0b4();
    func_0x000105c4120c();
  }
  else {
    func_0x00010b14f27c();
    __ZNSt13exception_ptrC1ERKS_();
    func_0x00010b14f0b4();
    func_0x000105c410b8();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f4dc();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14aad4; end: 10b14ab03;  */

void FUN_10b14aad4(void)

{
  long unaff_x20;
  
  func_0x00010b14f288();
  func_0x000105c41bc0();
  func_0x00010b14fc40();
  func_0x0001087446b0();
  *(undefined1 *)(unaff_x20 + 0x48) = 1;
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  return;
}



/* Entry: 10b14ab04; end: 10b14acaf;  */

void FUN_10b14ab04(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  int extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 extraout_var;
  undefined8 *unaff_x20;
  undefined8 *unaff_x25;
  
  func_0x00010b14fbc4();
  func_0x00010b14f3b4();
  *param_1 = FUN_10b14decc;
  param_1[1] = FUN_10b14df70;
  FUN_10b142c80(param_1 + 2);
  func_0x00010b1502a0();
  puVar3 = unaff_x20;
  FUN_10b14a1bc();
  if ((int)puVar3 == 0) {
    lVar4 = unaff_x20[1];
    param_1[0x12] = *unaff_x20;
    param_1[0x13] = lVar4;
    if (lVar4 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    puVar3 = param_1 + 0x12;
    FUN_10b14a1bc();
    if (((ulong)puVar3 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x14) = 0;
      func_0x00010b14f0e8();
      lVar4 = param_1[0x12];
      if ((*(byte *)(lVar4 + 0x90) & 1) != 0) {
        func_0x00010b14f014();
        func_0x00010b14efec(*param_1);
        return;
      }
      func_0x00010b14fe9c();
      if ((bool)in_CY) {
        lVar4 = *(long *)(lVar4 + 0x98);
        func_0x00010b14ea1c();
        if (CONCAT44(extraout_var,extraout_w10_00) != 0) {
          func_0x00010552fc6c();
LAB_10b14ac68:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b14ac6c);
          (*pcVar2)();
        }
        func_0x00010b14e8b4(extraout_x8 - lVar4);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b14ac68;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b14e894();
        func_0x00010b14fe6c();
        if (lVar4 != 0) {
          func_0x00010b14f3dc();
        }
      }
      else {
        *unaff_x25 = param_1;
      }
      func_0x00010b14fe60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
      return;
    }
    FUN_10b14a1e4(param_1[0x12]);
    func_0x00010b15049c();
    func_0x00010b1503ac();
  }
  else {
    FUN_10b14a1e4();
    func_0x00010b15049c();
  }
  func_0x00010b14ee1c();
  func_0x00010b14f45c();
  if ((bool)in_ZR) {
    func_0x00010b14f900();
  }
  else {
    func_0x00010b14f0ac(&stack0x00000008);
    func_0x00010b14f0b4();
    FUN_10b142e54();
    func_0x00010b14efe4();
  }
  func_0x00010b14f5cc();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14acb0; end: 10b14acff;  */

void FUN_10b14acb0(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b14f3d0();
  FUN_10b1432bc();
  func_0x00010b150538();
  if (!(bool)in_ZR) {
    func_0x00010b150124();
    func_0x0001052a0760();
  }
  else {
    *unaff_x19 = *unaff_x20;
  }
  *(bool *)(unaff_x19 + 8) = (bool)in_ZR;
  func_0x00010b14ecc0();
  return;
}



/* Entry: 10b14ad00; end: 10b14aec7;  */

void FUN_10b14ad00(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  int extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 extraout_var;
  undefined8 *unaff_x20;
  undefined8 *unaff_x25;
  
  func_0x00010b14fbc4();
  func_0x00010b14f3b4();
  *param_1 = FUN_10b14dde8;
  param_1[1] = FUN_10b14dea0;
  func_0x00010b139e74(param_1 + 2);
  FUN_10b139a94(param_1 + 2);
  puVar3 = unaff_x20;
  FUN_10b149e58();
  if ((int)puVar3 == 0) {
    lVar4 = unaff_x20[1];
    param_1[0x12] = *unaff_x20;
    param_1[0x13] = lVar4;
    if (lVar4 != 0) {
      do {
        func_0x00010b14ea0c();
      } while (extraout_w10 != 0);
    }
    puVar3 = param_1 + 0x12;
    FUN_10b149e58();
    if (((ulong)puVar3 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x14) = 0;
      func_0x00010b14f0e8();
      lVar4 = param_1[0x12];
      if ((*(byte *)(lVar4 + 0x90) & 1) != 0) {
        func_0x00010b14f014();
        func_0x00010b14efec(*param_1);
        return;
      }
      func_0x00010b14fe9c();
      if ((bool)in_CY) {
        lVar4 = *(long *)(lVar4 + 0x98);
        func_0x00010b14ea1c();
        if (CONCAT44(extraout_var,extraout_w10_00) != 0) {
          func_0x00010552fc6c();
LAB_10b14ae70:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b14ae74);
          (*pcVar2)();
        }
        func_0x00010b14e8b4(extraout_x8 - lVar4);
        uVar1 = extraout_x9;
        if ((bool)in_CY) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b14ae70;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b14e894();
        func_0x00010b14fe6c();
        if (lVar4 != 0) {
          func_0x00010b14f3dc();
        }
      }
      else {
        *unaff_x25 = param_1;
      }
      func_0x00010b14fe60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)();
      return;
    }
    FUN_10b149e80();
    func_0x00010b15048c();
    func_0x00010b14fe38();
  }
  else {
    FUN_10b149e80();
    func_0x00010b15048c();
  }
  func_0x00010b14ecd0();
  if ((bool)in_ZR) {
    func_0x00010b14f0b4();
    FUN_10b0fb514();
  }
  else {
    func_0x00010b14f27c();
    __ZNSt13exception_ptrC1ERKS_();
    func_0x00010b14f0b4();
    FUN_10b0fb468();
    func_0x00010b14f0a4();
  }
  func_0x00010b14f5c4();
  func_0x00010b14efd4();
  return;
}



/* Entry: 10b14aec8; end: 10b14af1b;  */

void FUN_10b14aec8(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010b14f3d0();
  FUN_10b13a774();
  func_0x00010b150538();
  if (!(bool)in_ZR) {
    func_0x00010b150124();
    func_0x0001052a0760();
  }
  else {
    func_0x00010b150124();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  }
  *(bool *)(unaff_x19 + 0x40) = (bool)in_ZR;
  func_0x00010b14ecc0();
  return;
}



/* Entry: 10b14af1c; end: 10b14b0c3;  */

void FUN_10b14af1c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 extraout_w8;
  long lVar4;
  code *extraout_x8;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  undefined8 *unaff_x21;
  undefined8 uVar5;
  long lStack_48;
  
  func_0x00010b150520();
  puVar2 = (undefined8 *)0xf0;
  __Znwm();
  *puVar2 = FUN_10b14dcc4;
  puVar2[1] = FUN_10b14ddb4;
  FUN_10b121fd0(puVar2 + 10,param_2);
  FUN_10b124f8c(puVar2 + 2);
  plVar1 = puVar2 + 0x19;
  func_0x00010b14f8f4();
  lVar4 = unaff_x21[1];
  uVar5 = *unaff_x21;
  puVar2[0x1c] = unaff_x21[1];
  puVar2[0x1b] = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x00010b14ea0c();
    } while (extraout_w10 != 0);
  }
  puVar3 = puVar2 + 0x1b;
  FUN_10b14b0c4(plVar1);
  func_0x00010b1501d4();
  if (((ulong)puVar3 & 1) == 0) {
    *(undefined1 *)(puVar2 + 0x1d) = 0;
    func_0x00010b14f18c();
    FUN_10b12d1c8();
    if (lStack_48 != 0) {
      do {
        func_0x00010b14ea74();
      } while (extraout_w11 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b14e9c4();
        func_0x00010b14f3ec();
      }
    }
  }
  else {
    func_0x00010b1501c4();
    func_0x00010b14f584();
    puVar3 = puVar2 + 0x1b;
    FUN_10b14b27c(puVar3);
    FUN_10b14b2bc(plVar1,puVar3);
    if (*plVar1 != 0) {
      func_0x00010b150130();
      (*extraout_x8)();
    }
    FUN_10b144044(plVar1);
    func_0x00010b14f184();
    func_0x00010b14fa1c();
    func_0x00010b14f01c();
    *(undefined1 *)(puVar2 + 0x1d) = extraout_w8;
    func_0x00010b14f2b0();
    if ((bool)in_ZR) {
      func_0x00010b14ff64();
      func_0x00010b14f8dc();
    }
    else {
      func_0x00010b1506b4();
      func_0x00010b14f0ac();
      func_0x00010b14f8e8();
      func_0x00010b14f84c();
    }
    func_0x00010b14f084();
    func_0x00010b14ff38();
    func_0x00010b14efd4();
  }
  return;
}


