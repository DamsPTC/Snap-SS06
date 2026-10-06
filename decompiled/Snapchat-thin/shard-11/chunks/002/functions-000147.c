/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082bf4d0; end: 1082bf513;  */

void FUN_1082bf4d0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001082bf9f8();
  func_0x0001082a0b90();
  func_0x0001082a0b90(param_1 + 0x20,unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  return;
}



/* Entry: 1082bf514; end: 1082bf53f;  */

undefined8 * FUN_1082bf514(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a37408;
  FUN_1082beacc(param_1 + 1);
  return param_1;
}



/* Entry: 1082bf540; end: 1082bf553;  */

void FUN_1082bf540(void)

{
  FUN_1082bf514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082bf554; end: 1082bf58f;  */

undefined8 FUN_1082bf554(undefined8 param_1)

{
  func_0x0001082bfa38();
  FUN_1082bf6d4();
  return param_1;
}



/* Entry: 1082bf590; end: 1082bf5b3;  */

void FUN_1082bf590(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001082bf9f8(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_110a37408;
  FUN_1082a0b6c(param_2 + 1);
  FUN_1082a0b6c(param_2 + 5,unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x20 + 0x40);
  return;
}



/* Entry: 1082bf5b4; end: 1082bf68f;  */

void FUN_1082bf5b4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [56];
  
  uVar3 = *param_2;
  uVar2 = *param_3;
  FUN_1082a0b6c(auStack_88,param_1 + 8);
  lVar1 = param_1 + 8;
  FUN_108269618(lVar1);
  FUN_10829082c(auStack_68,auStack_88,uVar3,lVar1);
  FUN_1082a0b6c(auStack_e0,param_1 + 0x28);
  FUN_10828db68(auStack_c0,auStack_e0,uVar2,*(undefined8 *)(param_1 + 0x48));
  FUN_10828cc04(auStack_68,auStack_c0,0);
  func_0x00010827ed24(auStack_c0);
  func_0x0001082bf898();
  func_0x00010827ec18(auStack_68);
  func_0x0001082bf8d0();
  return;
}



/* Entry: 1082bf690; end: 1082bf6c7;  */

long FUN_1082bf690(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a37478);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1082bf6c8; end: 1082bf6d3;  */

undefined ** FUN_1082bf6c8(void)

{
  return &PTR_DAT_110a37478;
}



/* Entry: 1082bf6d4; end: 1082bf72f;  */

void FUN_1082bf6d4(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001082bf9f8();
  *param_1 = &PTR_FUN_110a37408;
  FUN_1082a0b6c(param_1 + 1);
  FUN_1082a0b6c(param_1 + 5,unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x20 + 0x40);
  return;
}



/* Entry: 1082bf730; end: 1082bfb6b;  */

void FUN_1082bf730(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082bf738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082bfb6c; end: 1082bfc83;  */

void FUN_1082bfb6c(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  int extraout_w11;
  long lVar3;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  int iStack_6c;
  long lStack_68;
  
  iStack_6c = (int)param_3;
  if (((param_2 == 0) || (iStack_6c == 0)) || (lVar3 = *param_4, lVar3 == 0)) {
    *param_1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0xb8);
    lStack_68 = param_2;
    func_0x00010828a9ac(uVar1,lVar3 + 0x20,param_3);
    plVar2 = *(long **)(*(long *)(param_2 + 0x10) + 0xb8);
    (**(code **)(*plVar2 + 0x70))(plVar2,lVar3 + 0x20,param_3);
    uStack_80 = 0;
    if (*param_4 != 0) {
      do {
        func_0x0001082c3d3c();
        uStack_80 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_88 = 0;
    uStack_74 = (undefined2)uVar1;
    uStack_78 = param_6;
    FUN_1082764bc(&uStack_88);
    lStack_98 = *param_4;
    *param_4 = 0;
    uStack_a0 = 0;
    uStack_8c = SUB82(plVar2,0);
    uStack_90 = param_6;
    FUN_1082764bc(&uStack_a0);
    FUN_1082bfc84(param_1,&lStack_68,&uStack_80,&lStack_98,&iStack_6c,param_5,param_7);
    func_0x0001082c3f64();
    func_0x0001082c3dc4();
  }
  return;
}



/* Entry: 1082bfc84; end: 1082bfcdf;  */

void FUN_1082bfc84(void)

{
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001082c3dcc();
  func_0x0001082c3d74();
  func_0x0001082c3f1c();
  *unaff_x20 = unaff_x19;
  func_0x0001082c3f6c();
  func_0x0001082c3ee8();
  func_0x0001082c3dc4();
  return;
}



/* Entry: 1082bfce0; end: 1082bfe67;  */

void FUN_1082bfce0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined2 param_10,undefined4 param_11,undefined2 param_12,
                  undefined4 param_13,undefined4 param_14,undefined1 param_15,undefined8 param_16)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 extraout_x8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  long *plStack_70;
  long lStack_68;
  
  lVar5 = param_2;
  lStack_68 = param_2;
  func_0x0001082c3cbc();
  if ((int)lVar5 == 0) {
    FUN_1082a5548(&plStack_70,*(undefined8 *)(param_2 + 0x48),param_6,param_5,1,param_7,param_8,
                  param_4,param_15,param_9);
    if (plStack_70 == (long *)0x0) {
      *param_1 = 0;
    }
    else {
      piVar1 = (int *)((long)plStack_70 + *(long *)(*plStack_70 + -0x18) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lStack_80 = (long)plStack_70 + *(long *)(*plStack_70 + -0x18);
      uStack_88 = 0;
      uStack_78 = param_14;
      uStack_74 = param_10;
      func_0x0001082c4034();
      plVar4 = plStack_70;
      plStack_70 = (long *)0x0;
      uStack_98 = 0;
      if (plVar4 != (long *)0x0) {
        func_0x0001082c3fe0();
        uStack_98 = extraout_x8;
      }
      uStack_a0 = 0;
      uStack_90 = param_14;
      uStack_8c = param_12;
      func_0x0001082c3f30();
      uStack_a4 = 0;
      FUN_1082bfe68(param_1,&lStack_68,&lStack_80,&uStack_98,&uStack_a4,param_3,param_16);
      FUN_1082c42e0(*param_1);
      FUN_1082764bc(&uStack_98);
      FUN_1082764bc(&lStack_80);
    }
    func_0x00010827aaa0(&plStack_70);
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 1082bfe68; end: 1082bfec3;  */

void FUN_1082bfe68(void)

{
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001082c3dcc();
  func_0x0001082c3d74();
  func_0x0001082c3f1c();
  *unaff_x20 = unaff_x19;
  func_0x0001082c3f6c();
  func_0x0001082c3ee8();
  func_0x0001082c3dc4();
  return;
}



/* Entry: 1082bfec4; end: 1082c0053;  */

int ** FUN_1082bfec4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                    int **param_5,undefined8 *param_6,undefined8 *param_7,int **param_8,
                    ulong param_9,uint param_10,undefined4 param_11,uint param_12,byte param_13)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  int *piVar7;
  undefined8 *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  int **ppiVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int **ppiVar15;
  ulong uVar16;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  undefined8 uVar17;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  int **unaff_x24;
  undefined8 *unaff_x25;
  int **unaff_x26;
  undefined8 uStack_270;
  undefined1 auStack_268 [24];
  int *piStack_250;
  undefined4 uStack_248;
  undefined2 uStack_244;
  int *piStack_240;
  undefined4 uStack_238;
  undefined2 uStack_234;
  int **ppiStack_230;
  int **ppiStack_228;
  undefined8 *puStack_220;
  int **ppiStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined4 uStack_200;
  undefined1 uStack_1fc;
  undefined1 uStack_1fb;
  undefined4 uStack_1f8;
  undefined1 uStack_1f4;
  int *piStack_1e8;
  uint auStack_1e0 [24];
  char cStack_180;
  undefined8 uStack_168;
  int **ppiStack_160;
  undefined8 *puStack_158;
  int **ppiStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  int **ppiStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined1 uStack_110;
  undefined4 uStack_10c;
  int **ppiStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  int *piStack_f0;
  undefined8 uStack_e8;
  int *piStack_e0;
  undefined1 auStack_d8 [4];
  byte bStack_d4;
  char cStack_80;
  undefined8 uStack_68;
  
  func_0x0001082c3cc8();
  ppiVar10 = param_5;
  puVar12 = param_6;
  ppiVar15 = param_8;
  uStack_68 = extraout_x8;
  if (param_2 == 0) {
    *param_1 = 0;
    ppiVar4 = (int **)0x0;
    puVar8 = param_4;
  }
  else {
    ppiVar4 = *(int ***)(*(long *)(param_2 + 0x10) + 0xb8);
    puVar8 = (undefined8 *)0x1;
    puVar13 = param_7;
    uVar16 = param_9;
    FUN_10828a818(auStack_d8);
    if ((bStack_d4 & 1) == 0) {
      *param_1 = 0;
      param_7 = puVar13;
      param_9 = uVar16;
    }
    else {
      uVar16 = (ulong)param_13;
      puVar13 = (undefined8 *)(ulong)(byte)param_11;
      puVar12 = (undefined8 *)(ulong)param_10;
      uStack_f8 = 0x100000000;
      uStack_110 = param_11._1_1_;
      ppiVar10 = (int **)0x1;
      puVar8 = param_6;
      ppiVar15 = param_5;
      ppiStack_108 = param_8;
      uStack_100 = param_9;
      FUN_1082a5548(&piStack_e0,*(undefined8 *)(param_2 + 0x48),auStack_d8);
      if (piStack_e0 == (int *)0x0) {
        *param_1 = 0;
      }
      else {
        puVar12 = (undefined8 *)(ulong)param_12;
        piStack_e0 = (int *)0x0;
        func_0x0001082c3fe0();
        piStack_f0 = (int *)*param_4;
        *param_4 = 0;
        puVar8 = &uStack_e8;
        ppiVar10 = &piStack_f0;
        FUN_1082bfb6c(param_1,param_2,param_3);
        FUN_10810a400(&piStack_f0);
        func_0x0001082c3f94();
        puVar13 = param_7;
      }
      ppiVar4 = &piStack_e0;
      func_0x00010827aaa0();
      param_7 = puVar13;
      param_9 = uVar16;
    }
    in_ZR = cStack_80 == '\x01';
    unaff_x21 = param_3;
    unaff_x22 = param_2;
    unaff_x23 = param_4;
    unaff_x24 = param_5;
    unaff_x25 = param_6;
    unaff_x26 = param_8;
    if ((bool)in_ZR) {
      func_0x0001082c3f08();
    }
  }
  uVar3 = (undefined1)param_9;
  func_0x0001082c3c60(uStack_68);
  if ((bool)in_ZR) {
    return ppiVar4;
  }
  ___stack_chk_fail();
  FUN_10810a400(&piStack_f0);
  func_0x0001082c3f94();
  ppiVar5 = &piStack_e0;
  func_0x00010827aaa0();
  if (cStack_80 == '\x01') {
    func_0x0001082c3f08();
  }
  func_0x0001082c3d6c();
  pcStack_118 = FUN_1082c0054;
  ppiVar6 = ppiVar5;
  ppiVar11 = ppiVar10;
  puVar13 = puVar12;
  puVar14 = param_7;
  ppiVar9 = ppiVar15;
  ppiStack_160 = unaff_x26;
  puStack_158 = unaff_x25;
  ppiStack_150 = unaff_x24;
  puStack_148 = unaff_x23;
  lStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  puStack_130 = param_1;
  ppiStack_128 = ppiVar4;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x0001082c3cc8();
  uStack_168 = extraout_x8_01;
  ppiVar6 = *(int ***)(ppiVar6[2] + 0x2e);
  ppiVar4 = ppiVar9;
  FUN_10828aae8(auStack_1e0);
  uVar16 = (ulong)auStack_1e0[0];
  if (auStack_1e0[0] == 0) {
    *extraout_x8_00 = 0;
  }
  else {
    piStack_1e8 = (int *)*puVar8;
    if (piStack_1e8 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piStack_1e8,0x10);
        if (bVar2) {
          *piStack_1e8 = *piStack_1e8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_1f4 = ppiStack_108._0_1_;
    uStack_1f8 = uStack_10c;
    uStack_1fb = uStack_110;
    ppiVar4 = (int **)&UNK_10f484001;
    ppiVar9 = &piStack_1e8;
    uStack_200 = SUB84(ppiVar15,0);
    ppiVar11 = ppiVar10;
    puVar13 = puVar12;
    uStack_1fc = uVar3;
    FUN_1082bfec4(extraout_x8_00,ppiVar5);
    ppiVar6 = &piStack_1e8;
    FUN_10810a400();
    puVar14 = param_7;
  }
  uVar3 = cStack_180 == '\x01';
  if ((bool)uVar3) {
    func_0x0001082c3f38();
  }
  func_0x0001082c3c60(uStack_168);
  if ((bool)uVar3) {
    return ppiVar6;
  }
  ___stack_chk_fail();
  ppiVar5 = &piStack_1e8;
  FUN_10810a400();
  if (cStack_180 == '\x01') {
    func_0x0001082c3f38();
  }
  func_0x0001082c3d6c();
  pcStack_208 = FUN_1082c018c;
  piStack_240 = *ppiVar9;
  *ppiVar9 = (int *)0x0;
  uStack_238 = *(undefined4 *)(ppiVar9 + 1);
  uStack_234 = *(undefined2 *)((long)ppiVar9 + 0xc);
  piStack_250 = *ppiVar11;
  *ppiVar11 = (int *)0x0;
  uStack_248 = *(undefined4 *)(ppiVar11 + 1);
  uStack_244 = *(undefined2 *)((long)ppiVar11 + 0xc);
  uStack_270 = *puVar14;
  *puVar14 = 0;
  ppiStack_230 = ppiVar15;
  ppiStack_228 = ppiVar10;
  puStack_220 = puVar12;
  ppiStack_218 = ppiVar6;
  ppuStack_210 = &puStack_120;
  FUN_10828adb8(auStack_268,puVar13,2,&uStack_270);
  FUN_1082c40ac(ppiVar5,uVar16,&piStack_240,&piStack_250,auStack_268);
  func_0x00010828afb8(auStack_268);
  func_0x0001082c3f8c();
  func_0x0001082c3dc4();
  func_0x0001082c3f30();
  *ppiVar5 = (int *)&PTR_FUN_110a37498;
  piVar7 = *ppiVar4;
  ppiVar5[0xb] = ppiVar4[1];
  ppiVar5[10] = piVar7;
  if ((*(byte *)(ppiVar5 + 10) >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(*(long *)(uVar16 + 0x10) + 0xb8);
    piVar7 = ppiVar5[2];
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      func_0x0001082c3df0();
      (*extraout_x8_02)();
    }
    FUN_10828aa6c(uVar17,piVar7);
    uVar3 = (undefined1)uVar17;
  }
  *(undefined1 *)(ppiVar5 + 0xc) = uVar3;
  *(undefined1 *)((long)ppiVar5 + 0x61) = 0;
  return ppiVar5;
}



/* Entry: 1082c0054; end: 1082c018b;  */

int ** FUN_1082c0054(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                    undefined8 *param_5,undefined8 param_6,undefined8 *param_7,int **param_8,
                    undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined1 param_12)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  int **ppiVar5;
  int **ppiVar6;
  int *piVar7;
  ulong uVar8;
  int **ppiVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int **ppiVar12;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 uVar13;
  undefined8 uStack_160;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined2 uStack_134;
  int *piStack_130;
  undefined4 uStack_128;
  undefined2 uStack_124;
  int **ppiStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  int **ppiStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  int *piStack_d8;
  uint auStack_d0 [24];
  char cStack_70;
  undefined8 uStack_58;
  
  lVar4 = param_2;
  puVar10 = param_5;
  uVar13 = param_6;
  puVar11 = param_7;
  ppiVar9 = param_8;
  func_0x0001082c3cc8();
  ppiVar5 = *(int ***)(*(long *)(lVar4 + 0x10) + 0xb8);
  ppiVar12 = ppiVar9;
  uStack_58 = extraout_x8;
  FUN_10828aae8(auStack_d0);
  uVar8 = (ulong)auStack_d0[0];
  if (auStack_d0[0] == 0) {
    *param_1 = 0;
  }
  else {
    piStack_d8 = (int *)*param_4;
    if (piStack_d8 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piStack_d8,0x10);
        if (bVar2) {
          *piStack_d8 = *piStack_d8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_e4 = param_12;
    uStack_e8 = param_11;
    uStack_eb = param_10;
    ppiVar12 = (int **)&UNK_10f484001;
    ppiVar9 = &piStack_d8;
    uStack_f0 = SUB84(param_8,0);
    puVar10 = param_5;
    uVar13 = param_6;
    uStack_ec = param_9;
    FUN_1082bfec4(param_1,param_2);
    ppiVar5 = &piStack_d8;
    FUN_10810a400();
    puVar11 = param_7;
  }
  uVar3 = cStack_70 == '\x01';
  if ((bool)uVar3) {
    func_0x0001082c3f38();
  }
  func_0x0001082c3c60(uStack_58);
  if ((bool)uVar3) {
    return ppiVar5;
  }
  ___stack_chk_fail();
  ppiVar6 = &piStack_d8;
  FUN_10810a400();
  if (cStack_70 == '\x01') {
    func_0x0001082c3f38();
  }
  func_0x0001082c3d6c();
  pcStack_f8 = FUN_1082c018c;
  piStack_130 = *ppiVar9;
  *ppiVar9 = (int *)0x0;
  uStack_128 = *(undefined4 *)(ppiVar9 + 1);
  uStack_124 = *(undefined2 *)((long)ppiVar9 + 0xc);
  uStack_140 = *puVar10;
  *puVar10 = 0;
  uStack_138 = *(undefined4 *)(puVar10 + 1);
  uStack_134 = *(undefined2 *)((long)puVar10 + 0xc);
  uStack_160 = *puVar11;
  *puVar11 = 0;
  ppiStack_120 = param_8;
  puStack_118 = param_5;
  uStack_110 = param_6;
  ppiStack_108 = ppiVar5;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_10828adb8(auStack_158,uVar13,2,&uStack_160);
  FUN_1082c40ac(ppiVar6,uVar8,&piStack_130,&uStack_140,auStack_158);
  func_0x00010828afb8(auStack_158);
  func_0x0001082c3f8c();
  func_0x0001082c3dc4();
  func_0x0001082c3f30();
  *ppiVar6 = (int *)&PTR_FUN_110a37498;
  piVar7 = *ppiVar12;
  ppiVar6[0xb] = ppiVar12[1];
  ppiVar6[10] = piVar7;
  if ((*(byte *)(ppiVar6 + 10) >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(uVar8 + 0x10) + 0xb8);
    piVar7 = ppiVar6[2];
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      func_0x0001082c3df0();
      (*extraout_x8_00)();
    }
    FUN_10828aa6c(uVar13,piVar7);
    uVar3 = (undefined1)uVar13;
  }
  *(undefined1 *)(ppiVar6 + 0xc) = uVar3;
  *(undefined1 *)((long)ppiVar6 + 0x61) = 0;
  return ppiVar6;
}



/* Entry: 1082c018c; end: 1082c02d3;  */

undefined8 *
FUN_1082c018c(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 uVar1;
  long lVar2;
  code *extraout_x8;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined2 uStack_34;
  
  uStack_40 = *param_3;
  *param_3 = 0;
  uStack_38 = *(undefined4 *)(param_3 + 1);
  uStack_34 = *(undefined2 *)((long)param_3 + 0xc);
  uStack_50 = *param_4;
  *param_4 = 0;
  uStack_48 = *(undefined4 *)(param_4 + 1);
  uStack_44 = *(undefined2 *)((long)param_4 + 0xc);
  uStack_70 = *param_6;
  *param_6 = 0;
  FUN_10828adb8(auStack_68,param_5,2,&uStack_70);
  FUN_1082c40ac(param_1,param_2,&uStack_40,&uStack_50,auStack_68);
  func_0x00010828afb8(auStack_68);
  func_0x0001082c3f8c();
  func_0x0001082c3dc4();
  func_0x0001082c3f30();
  *param_1 = &PTR_FUN_110a37498;
  uVar3 = *param_7;
  param_1[0xb] = param_7[1];
  param_1[10] = uVar3;
  if ((*(byte *)(param_1 + 10) >> 1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0xb8);
    lVar2 = param_1[2];
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      func_0x0001082c3df0();
      (*extraout_x8)();
    }
    FUN_10828aa6c(uVar3,lVar2);
    uVar1 = (undefined1)uVar3;
  }
  *(undefined1 *)(param_1 + 0xc) = uVar1;
  *(undefined1 *)((long)param_1 + 0x61) = 0;
  return param_1;
}



/* Entry: 1082c02d4; end: 1082c0317;  */

undefined8 * FUN_1082c02d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a37568;
  FUN_108294b38(param_1 + 9);
  FUN_1082764bc(param_1 + 7);
  *param_1 = &PTR_DAT_110a353d0;
  func_0x00010828afb8(param_1 + 4);
  FUN_1082764bc(param_1 + 2);
  return param_1;
}



/* Entry: 1082c0318; end: 1082c031b;  */

undefined8 * FUN_1082c0318(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a37568;
  FUN_108294b38(param_1 + 9);
  FUN_1082764bc(param_1 + 7);
  *param_1 = &PTR_DAT_110a353d0;
  func_0x00010828afb8(param_1 + 4);
  FUN_1082764bc(param_1 + 2);
  return param_1;
}



/* Entry: 1082c031c; end: 1082c032f;  */

void FUN_1082c031c(void)

{
  FUN_1082c02d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082c0330; end: 1082c034f;  */

void FUN_1082c0330(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (*(char *)(param_1 + 0x61) == '\x01')) {
    *(undefined1 *)(param_2 + 0xb0) = 1;
    *(undefined4 *)(param_3 + 0xac) = 2;
  }
  return;
}



/* Entry: 1082c0350; end: 1082c043f;  */

void FUN_1082c0350(undefined4 param_1,undefined4 param_2,ulong param_3,undefined *param_4,
                  long param_5,long param_6,long param_7,undefined8 *param_8)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined *unaff_x22;
  long unaff_x23;
  undefined8 uVar5;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar4 = param_6;
  func_0x0001082c4080();
  func_0x0001082c3cc8();
  lStack_80 = param_5;
  uStack_58 = extraout_x8;
  func_0x0001082c3c74();
  if ((param_3 & 1) == 0) {
    func_0x0001082c3cec(*(undefined8 *)(unaff_x23 + 8));
    if ((bool)in_ZR) {
      param_4 = &UNK_10f484024;
      FUN_10827b938();
    }
    lVar1 = *(long *)(unaff_x23 + 0x10);
    func_0x0001082c3d4c();
    if ((*(byte *)(lVar1 + 10) & 1) == 0) {
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x23 + 8) + 0x10) + 0xc0);
      param_1 = (undefined4)*param_8;
      param_2 = (undefined4)param_8[2];
      puVar2 = (undefined8 *)0x20;
      __Znwm();
      *puVar2 = &PTR_FUN_110a374e8;
      puVar2[1] = &lStack_80;
      puVar2[2] = param_6;
      puVar2[3] = unaff_x23;
      puStack_60 = puVar2;
      FUN_10831a3c8(uVar5);
      FUN_10827fb94();
      param_4 = unaff_x22;
      param_5 = param_6;
      lVar4 = param_7;
    }
  }
  func_0x0001082c3c60(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = auStack_78;
  FUN_10827fb94();
  func_0x0001082c3d6c();
  if (*(long *)(param_5 + 8) == 0 && *(long *)(param_5 + 0x10) == 0) {
    func_0x0001082c3ff0(*(undefined8 *)(puVar3 + 0x10));
    uStack_100 = 0;
    uStack_f8 = CONCAT44(param_2,param_1);
    FUN_1082c0500(puVar3,param_4,param_5,0,0x113254e20,&uStack_100,&uStack_100);
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0x3f800000;
    uStack_e8 = 0;
    uStack_f0 = 0x3f800000;
    uStack_e0 = 0x103f800000;
    FUN_10818cfd0(lVar4,&uStack_100);
    if ((int)lVar4 != 0) {
      uStack_108 = *(undefined8 *)(*(long *)(puVar3 + 0x10) + 0x90);
      uStack_110 = 0;
      FUN_1082878ec(puVar3,param_4,param_5,&uStack_110,&uStack_100);
    }
  }
  return;
}



/* Entry: 1082c0440; end: 1082c04ff;  */

void FUN_1082c0440(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(long *)(param_5 + 8) == 0 && *(long *)(param_5 + 0x10) == 0) {
    func_0x0001082c3ff0(*(undefined8 *)(param_3 + 0x10));
    uStack_60 = 0;
    uStack_58 = CONCAT44(param_2,param_1);
    FUN_1082c0500(param_3,param_4,param_5,0,0x113254e20,&uStack_60,&uStack_60);
  }
  else {
    uStack_58 = 0;
    uStack_60 = 0x3f800000;
    uStack_48 = 0;
    uStack_50 = 0x3f800000;
    uStack_40 = 0x103f800000;
    FUN_10818cfd0(param_6,&uStack_60);
    if ((int)param_6 != 0) {
      uStack_68 = *(undefined8 *)(*(long *)(param_3 + 0x10) + 0x90);
      uStack_70 = 0;
      FUN_1082878ec(param_3,param_4,param_5,&uStack_70,&uStack_60);
    }
  }
  return;
}



/* Entry: 1082c0500; end: 1082c076f;  */

void FUN_1082c0500(long *param_1,long *param_2,long *param_3,int param_4,undefined8 param_5,
                  undefined8 *param_6,undefined8 *param_7)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  undefined4 *puVar10;
  long *plVar11;
  float *pfVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  float fVar23;
  float extraout_s2;
  float extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined8 extraout_d2;
  undefined8 extraout_var;
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float in_s3;
  float fVar30;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  int iStack_250;
  int iStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined8 uStack_22c;
  undefined8 uStack_224;
  undefined8 uStack_21c;
  undefined8 uStack_214;
  int iStack_20c;
  char cStack_208;
  char cStack_207;
  float *pfStack_200;
  undefined8 *puStack_1f8;
  char *pcStack_1f0;
  long **pplStack_1e8;
  undefined4 **ppuStack_1e0;
  char cStack_1d1;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  float fStack_1b4;
  undefined4 auStack_1b0 [4];
  undefined4 *puStack_1a0;
  long *plStack_198;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long alStack_10c [6];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_68;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  plVar11 = &lStack_140;
  uVar16 = param_5;
  puVar14 = param_6;
  func_0x0001082c3cc8();
  uStack_68 = extraout_x8;
  FUN_1082d38bc(alStack_10c,puVar14,uVar16);
  auVar28._8_8_ = extraout_var;
  auVar28._0_8_ = extraout_d2;
  uStack_d8 = *(undefined4 *)param_7;
  uStack_bc = *(undefined4 *)((long)param_7 + 0xc);
  fVar23 = (float)*(undefined8 *)((long)param_7 + 4);
  auVar24._4_12_ = auVar28._4_12_;
  auVar24._0_4_ = fVar23;
  uVar22 = (undefined4)((ulong)*(undefined8 *)((long)param_7 + 4) >> 0x20);
  auVar26._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
  auVar26._0_8_ = auVar24._0_8_;
  auVar26._8_4_ = uVar22;
  auVar25._8_8_ = auVar26._8_8_;
  auVar25._4_4_ = fVar23;
  auVar25._0_4_ = fVar23;
  auVar27._0_12_ = auVar25._0_12_;
  auVar27._12_4_ = uVar22;
  auVar28 = NEON_ext(auVar27,auVar27,8,1);
  auVar29._0_12_ = auVar28._0_12_;
  auVar29._12_4_ = uStack_bc;
  uStack_c8 = auVar29._8_8_;
  uStack_d0 = auVar28._0_8_;
  auVar28 = NEON_fmov(0x3f800000,4);
  uStack_b0 = auVar28._8_8_;
  uStack_b8 = auVar28._0_8_;
  uVar6 = param_4 == 0;
  uStack_a4 = 0xf;
  if ((bool)uVar6) {
    uStack_a4 = 0;
  }
  uStack_a8 = 0;
  uStack_d4 = uStack_d8;
  fStack_c0 = fVar23;
  func_0x0001082c3e54(param_1[1]);
  if (((((*(byte *)(*(long *)(extraout_x8_00 + 0x10) + 99) & 1) == 0) &&
       ((*(byte *)(param_1 + 10) >> 1 & 1) == 0)) || (param_4 == 0)) ||
     (((uint)*(undefined8 *)(extraout_x8_00 + 0x18) >> 9 & 1) == 0)) {
LAB_1082c0704:
    plVar18 = alStack_10c;
    plVar19 = (long *)0x0;
    FUN_1082c0dd8();
    plVar15 = param_2;
    plVar17 = param_3;
  }
  else {
    plVar18 = alStack_10c;
    plVar17 = (long *)0x0;
    plVar9 = param_1;
    plVar15 = param_2;
    plVar19 = param_3;
    FUN_1082c0770();
    uVar7 = (uint)plVar9;
    uVar6 = uVar7 == 2;
    if (1 < uVar7) {
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      if ((param_2 == (long *)0x0) || (uVar16 = param_5, FUN_1082878d0(), (int)uVar16 == 0)) {
LAB_1082c0680:
        uStack_118 = param_6[1];
        uStack_120 = *param_6;
        fVar23 = (float)uStack_120;
        uStack_130 = *param_7;
        uStack_128 = param_7[1];
      }
      else {
        plVar9 = alStack_10c;
        FUN_1082d3c68(plVar9,&uStack_120);
        if ((int)plVar9 == 0) goto LAB_1082c0680;
        if (((param_3[1] != 0) && (uVar6 = (*(byte *)(param_3[1] + 0x30) & 0x18) == 0, !(bool)uVar6)
            ) || ((param_3[2] != 0 &&
                  (uVar6 = (*(byte *)(param_3[2] + 0x30) & 0x18) == 0, !(bool)uVar6)))) {
          puVar10 = &uStack_d8;
          FUN_1082d3c68(puVar10,&uStack_130);
          if ((int)puVar10 == 0) goto LAB_1082c0680;
        }
        uStack_98 = 0;
        lStack_a0 = 0x3f800000;
        uStack_88 = 0;
        uStack_90 = 0x3f800000;
        uStack_80 = 0x103f800000;
        plVar15 = &lStack_a0;
        uVar16 = param_5;
        FUN_10818cfd0();
        if ((int)uVar16 == 0) goto LAB_1082c071c;
        FUN_108189c38(&lStack_a0,&uStack_120,1);
        uVar6 = uVar7 == 2;
      }
      lVar21 = param_1[1];
      FUN_1082c225c();
      func_0x000108277358(&lStack_a0,&uStack_120);
      plVar19 = &lStack_a0;
      FUN_1082f93f8(&lStack_138,lVar21,param_1,param_3,param_5,plVar19,&uStack_130,1);
      if (lStack_138 == 0) goto LAB_1082c0704;
      lStack_140 = lStack_138;
      uStack_88 = 0;
      plVar18 = &lStack_a0;
      func_0x0001082c4018();
      FUN_10827fb18(&lStack_a0);
      plVar15 = param_1;
      plVar17 = plVar11;
      if (lStack_140 != 0) {
        func_0x0001082c3c9c();
        plVar15 = param_1;
        plVar17 = plVar11;
      }
    }
  }
LAB_1082c071c:
  func_0x0001082c3c60(uStack_68);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  FUN_10827fb18(&lStack_a0);
  lVar21 = lStack_140;
  if (lStack_140 != 0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c3d6c();
  puVar14 = &uStack_290;
  puStack_1a0 = (undefined4 *)0x0;
  plStack_198 = plVar18;
  if (((plVar17 == (long *)0x0) && (plVar19 != (long *)0x0)) && (plVar19[2] == 0)) {
    plVar11 = plVar19;
    FUN_1082a2744(plVar19,auStack_1b0);
    if ((int)plVar11 != 0) {
      puStack_1a0 = auStack_1b0;
    }
  }
  lVar1 = plStack_198[0xd];
  uStack_1b8 = func_0x0001082c3ff0(*(undefined8 *)(lVar21 + 0x10));
  uStack_1c0 = 0;
  fStack_1b4 = fVar23;
  fStack_1d0 = (float)FUN_1082c0b88();
  fVar30 = 0.0;
  lVar20 = 4;
  pfVar12 = (float *)(plStack_198 + 4);
  do {
    fVar30 = fVar30 * pfVar12[-8] * pfVar12[-4] * *pfVar12;
    lVar20 = lVar20 + -1;
    pfVar12 = pfVar12 + 1;
  } while (lVar20 != 0);
  bVar4 = false;
  if ((fVar30 == 0.0) && (bVar4 = false, !NAN(fStack_1d0) && !NAN(extraout_s2))) {
    bVar4 = fStack_1d0 < extraout_s2;
  }
  bVar5 = false;
  if ((bVar4) && (bVar5 = false, !NAN(fVar23) && !NAN(in_s3))) {
    bVar5 = fVar23 < in_s3;
  }
  if (!bVar5) {
    return;
  }
  uStack_278 = *(undefined8 *)(*(long *)(lVar21 + 0x10) + 0x90);
  uStack_280 = 0;
  pfVar12 = &fStack_1d0;
  uVar16 = 1;
  fStack_1cc = fVar23;
  fStack_1c8 = extraout_s2;
  fStack_1c4 = in_s3;
  FUN_1082771d4(pfVar12,1,0);
  iStack_240 = (int)pfVar12;
  uStack_23c = (undefined4)((ulong)pfVar12 >> 0x20);
  uStack_238 = (undefined4)uVar16;
  uStack_234 = (undefined4)((ulong)uVar16 >> 0x20);
  puVar13 = &uStack_280;
  FUN_10821a044(puVar13,&iStack_240);
  if (((ulong)puVar13 & 1) == 0) {
    return;
  }
  plVar11 = plStack_198;
  FUN_1082d5218(plStack_198,1,(int)plStack_198[0xd]);
  if (((ulong)plVar11 & 1) != 0) {
    return;
  }
  cStack_1d1 = (int)plStack_198[0xd] != 0;
  bVar4 = plVar17 != (long *)0x0;
  pfStack_200 = &fStack_1d0;
  puStack_1f8 = &uStack_1c0;
  pcStack_1f0 = &cStack_1d1;
  pplStack_1e8 = &plStack_198;
  ppuStack_1e0 = &puStack_1a0;
  bVar5 = puStack_1a0 == (undefined4 *)0x0;
  if (plVar15 == (long *)0x0) {
    uStack_234 = 0;
    uStack_230 = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    uStack_224 = 0;
    uStack_22c = 0;
    uStack_214 = 0;
    uStack_21c = 0;
    iStack_20c = 0;
    cStack_207 = '\0';
  }
  else {
    (**(code **)(*plVar15 + 0x20))(&iStack_240,plVar15,&fStack_1d0,(int)plStack_198[0xd] != 0);
    if (iStack_240 == 0) {
      if ((cStack_207 != '\x01') ||
         (((plVar17 != (long *)0x0 && (cStack_208 != cStack_1d1)) ||
          (iStack_20c != 1 && (bVar4 || bVar5))))) {
        FUN_1082c0c2c(&pfStack_200);
        return;
      }
      goto LAB_1082c0964;
    }
    if (iStack_240 == 2) {
      return;
    }
    if (iStack_240 != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1082c0b88);
      (*pcVar3)();
    }
  }
  iStack_240 = 1;
  if (bVar4 || bVar5) {
    iStack_240 = 1;
    FUN_1082c0c2c(&pfStack_200);
    return;
  }
  func_0x000108277358(&uStack_280,&uStack_1c0);
  iStack_240 = 0;
  uStack_234 = (undefined4)uStack_278;
  uStack_230 = (undefined4)((ulong)uStack_278 >> 0x20);
  uStack_23c = (undefined4)uStack_280;
  uStack_238 = (undefined4)((ulong)uStack_280 >> 0x20);
  uStack_224 = uStack_268;
  uStack_22c = uStack_270;
  uStack_214 = uStack_258;
  uStack_21c = uStack_260;
  iStack_20c = iStack_250;
  cStack_208 = cStack_1d1;
  cStack_207 = '\x01';
LAB_1082c0964:
  uStack_280 = CONCAT44(uStack_238,uStack_23c);
  uStack_278 = CONCAT44(uStack_230,uStack_234);
  FUN_10838ed10(&uStack_280,&uStack_1c0);
  pfVar12 = &fStack_1d0;
  FUN_10838ed10(pfVar12,&uStack_280);
  if ((((int)pfVar12 != 0) && (1.0 <= fStack_1c8 - fStack_1d0)) &&
     (fVar23 = fStack_1c4 - fStack_1cc, 1.0 <= fVar23)) {
    if (iStack_20c == 1) {
      puVar14 = &uStack_280;
      FUN_1082d4a60(puVar14,cStack_208,plStack_198,puStack_1a0 == (undefined4 *)0x0);
      if ((int)puVar14 != 0) {
        if (bVar4 || bVar5) {
          return;
        }
        if ((int)plStack_198[6] != 0) {
          return;
        }
        fStack_1d0 = (float)FUN_1082c0b88();
        pfVar12 = &fStack_1d0;
        fStack_1cc = fVar23;
        fStack_1c8 = extraout_s2_00;
        fStack_1c4 = in_s3;
        FUN_108281a6c(pfVar12,&uStack_1c0);
        if ((int)pfVar12 != 0) {
          FUN_108287500(lVar21,puStack_1a0);
          return;
        }
        iVar8 = (int)&fStack_1d0;
        func_0x0001082772bc();
        if (iVar8 == 0) {
          return;
        }
        if (fStack_1c8 - fStack_1d0 <= 256.0) {
          return;
        }
        if (fStack_1c4 - fStack_1cc <= 256.0) {
          return;
        }
        uStack_290 = 0;
        uStack_288 = 0;
        func_0x00010827a188(&fStack_1d0,&uStack_290);
        FUN_10827f67c(*puStack_1a0,puStack_1a0[1],puStack_1a0[2],puStack_1a0[3],lVar21);
        FUN_1082c49d4(lVar21,&uStack_290,0);
        return;
      }
    }
    else {
      puVar13 = &uStack_280;
      FUN_1082d4a60(puVar13,cStack_208,plStack_198,0);
      if (((int)puVar13 != 0) && ((int)plStack_198[6] == 0)) {
        uVar22 = FUN_1082c0b88();
        uStack_290 = CONCAT44(fVar23,uVar22);
        uStack_288 = CONCAT44(in_s3,extraout_s2_01);
        FUN_108281a6c(&uStack_290,&uStack_280);
        cVar2 = cStack_208;
        if ((int)puVar14 != 0) {
          FUN_10827e874();
          FUN_1082c0c88(lVar21,0,plVar19,cVar2,0x113254e20,&uStack_23c,puVar14);
          return;
        }
      }
    }
    *(int *)(plStack_198 + 0xd) = (int)lVar1;
  }
  return;
}



/* Entry: 1082c0770; end: 1082c0b87;  */

void FUN_1082c0770(float param_1,float param_2,float param_3,float param_4,long param_5,
                  long *param_6,long param_7,ulong param_8,long param_9)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  int iStack_110;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  int iStack_cc;
  char cStack_c8;
  char cStack_c7;
  float *pfStack_c0;
  undefined8 *puStack_b8;
  char *pcStack_b0;
  ulong *puStack_a8;
  undefined4 **ppuStack_a0;
  char cStack_91;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  undefined4 auStack_70 [4];
  undefined4 *puStack_60;
  ulong uStack_58;
  
  puVar10 = &uStack_150;
  puStack_60 = (undefined4 *)0x0;
  uStack_58 = param_8;
  if (((param_7 == 0) && (param_9 != 0)) && (*(long *)(param_9 + 0x10) == 0)) {
    lVar12 = param_9;
    FUN_1082a2744(param_9,auStack_70);
    if ((int)lVar12 != 0) {
      puStack_60 = auStack_70;
    }
  }
  uVar1 = *(undefined4 *)(uStack_58 + 0x68);
  func_0x0001082c3ff0(*(undefined8 *)(param_5 + 0x10));
  uStack_80 = 0;
  fStack_78 = param_1;
  fStack_74 = param_2;
  FUN_1082c0b88();
  fVar15 = 0.0;
  lVar12 = 4;
  pfVar7 = (float *)(uStack_58 + 0x20);
  do {
    fVar15 = fVar15 * pfVar7[-8] * pfVar7[-4] * *pfVar7;
    lVar12 = lVar12 + -1;
    pfVar7 = pfVar7 + 1;
  } while (lVar12 != 0);
  bVar4 = false;
  if ((fVar15 == 0.0) && (bVar4 = false, !NAN(param_1) && !NAN(param_3))) {
    bVar4 = param_1 < param_3;
  }
  bVar5 = false;
  if ((bVar4) && (bVar5 = false, !NAN(param_2) && !NAN(param_4))) {
    bVar5 = param_2 < param_4;
  }
  if (!bVar5) {
    return;
  }
  uStack_138 = *(undefined8 *)(*(long *)(param_5 + 0x10) + 0x90);
  uStack_140 = 0;
  pfVar7 = &fStack_90;
  uVar11 = 1;
  fStack_90 = param_1;
  fStack_8c = param_2;
  fStack_88 = param_3;
  fStack_84 = param_4;
  FUN_1082771d4(pfVar7,1,0);
  iStack_100 = (int)pfVar7;
  uStack_fc = (undefined4)((ulong)pfVar7 >> 0x20);
  uStack_f8 = (undefined4)uVar11;
  uStack_f4 = (undefined4)((ulong)uVar11 >> 0x20);
  puVar8 = &uStack_140;
  FUN_10821a044(puVar8,&iStack_100);
  if (((ulong)puVar8 & 1) == 0) {
    return;
  }
  uVar9 = uStack_58;
  FUN_1082d5218(uStack_58,1,*(undefined4 *)(uStack_58 + 0x68));
  if ((uVar9 & 1) != 0) {
    return;
  }
  cStack_91 = *(int *)(uStack_58 + 0x68) != 0;
  bVar4 = param_7 != 0;
  pfStack_c0 = &fStack_90;
  puStack_b8 = &uStack_80;
  pcStack_b0 = &cStack_91;
  puStack_a8 = &uStack_58;
  ppuStack_a0 = &puStack_60;
  bVar5 = puStack_60 == (undefined4 *)0x0;
  if (param_6 == (long *)0x0) {
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_e4 = 0;
    uStack_ec = 0;
    uStack_d4 = 0;
    uStack_dc = 0;
    iStack_cc = 0;
    cStack_c7 = '\0';
  }
  else {
    (**(code **)(*param_6 + 0x20))(&iStack_100,param_6,&fStack_90,*(int *)(uStack_58 + 0x68) != 0);
    if (iStack_100 == 0) {
      if ((cStack_c7 != '\x01') ||
         (((param_7 != 0 && (cStack_c8 != cStack_91)) || (iStack_cc != 1 && (bVar4 || bVar5))))) {
        FUN_1082c0c2c(&pfStack_c0);
        return;
      }
      goto LAB_1082c0964;
    }
    if (iStack_100 == 2) {
      return;
    }
    if (iStack_100 != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1082c0b88);
      (*pcVar3)();
    }
  }
  iStack_100 = 1;
  if (bVar4 || bVar5) {
    iStack_100 = 1;
    FUN_1082c0c2c(&pfStack_c0);
    return;
  }
  func_0x000108277358(&uStack_140,&uStack_80);
  iStack_100 = 0;
  uStack_f4 = (undefined4)uStack_138;
  uStack_f0 = (undefined4)((ulong)uStack_138 >> 0x20);
  uStack_fc = (undefined4)uStack_140;
  uStack_f8 = (undefined4)((ulong)uStack_140 >> 0x20);
  uStack_e4 = uStack_128;
  uStack_ec = uStack_130;
  uStack_d4 = uStack_118;
  uStack_dc = uStack_120;
  iStack_cc = iStack_110;
  cStack_c8 = cStack_91;
  cStack_c7 = '\x01';
LAB_1082c0964:
  uStack_138 = CONCAT44(uStack_f0,uStack_f4);
  uStack_140 = CONCAT44(uStack_f8,uStack_fc);
  FUN_10838ed10(&uStack_140,&uStack_80);
  pfVar7 = &fStack_90;
  FUN_10838ed10(pfVar7,&uStack_140);
  if ((((int)pfVar7 != 0) && (fVar15 = 1.0, 1.0 <= fStack_88 - fStack_90)) &&
     (fVar13 = fStack_84 - fStack_8c, 1.0 <= fVar13)) {
    if (iStack_cc == 1) {
      puVar10 = &uStack_140;
      fVar14 = fStack_8c;
      FUN_1082d4a60(puVar10,cStack_c8,uStack_58,puStack_60 == (undefined4 *)0x0);
      if ((int)puVar10 != 0) {
        if (bVar4 || bVar5) {
          return;
        }
        if (*(int *)(uStack_58 + 0x30) != 0) {
          return;
        }
        FUN_1082c0b88();
        pfVar7 = &fStack_90;
        fStack_90 = fVar15;
        fStack_8c = fVar13;
        fStack_88 = fVar14;
        fStack_84 = param_4;
        FUN_108281a6c(pfVar7,&uStack_80);
        if ((int)pfVar7 != 0) {
          FUN_108287500(param_5,puStack_60);
          return;
        }
        iVar6 = (int)&fStack_90;
        func_0x0001082772bc();
        if (iVar6 == 0) {
          return;
        }
        if (fStack_88 - fStack_90 <= 256.0) {
          return;
        }
        if (fStack_84 - fStack_8c <= 256.0) {
          return;
        }
        uStack_150 = 0;
        uStack_148 = 0;
        func_0x00010827a188(&fStack_90,&uStack_150);
        FUN_10827f67c(*puStack_60,puStack_60[1],puStack_60[2],puStack_60[3],param_5);
        FUN_1082c49d4(param_5,&uStack_150,0);
        return;
      }
    }
    else {
      puVar8 = &uStack_140;
      fVar14 = fStack_8c;
      FUN_1082d4a60(puVar8,cStack_c8,uStack_58,0);
      if (((int)puVar8 != 0) && (*(int *)(uStack_58 + 0x30) == 0)) {
        FUN_1082c0b88();
        uStack_150 = CONCAT44(fVar13,fVar15);
        uStack_148 = CONCAT44(param_4,fVar14);
        FUN_108281a6c(&uStack_150,&uStack_140);
        cVar2 = cStack_c8;
        if ((int)puVar10 != 0) {
          FUN_10827e874();
          FUN_1082c0c88(param_5,0,param_9,cVar2,0x113254e20,&uStack_fc,puVar10);
          return;
        }
      }
    }
    *(undefined4 *)(uStack_58 + 0x68) = uVar1;
  }
  return;
}



/* Entry: 1082c0b88; end: 1082c0c2b;  */

undefined8 FUN_1082c0b88(undefined8 param_1,long param_2)

{
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  if (*(int *)(param_2 + 0x30) == 3) {
    FUN_1082d3d24(param_2);
  }
  else {
    func_0x0001082c3750(&uStack_41,param_2);
    func_0x0001082c3750(&uStack_41,param_2 + 0x10);
    func_0x0001082c3774(&uStack_42,param_2);
    func_0x0001082c3774(&uStack_42,param_2 + 0x10);
  }
  return param_1;
}



/* Entry: 1082c0c2c; end: 1082c0c87;  */

void FUN_1082c0c2c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long *param_5)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int extraout_w8;
  uint uVar7;
  float *pfVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined4 uVar15;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uVar16;
  
  pfVar8 = (float *)*param_5;
  fVar14 = pfVar8[2] - *pfVar8;
  if (fVar14 <= 15000.0) {
    param_3 = (ulong)(uint)pfVar8[1];
    fVar14 = pfVar8[3] - pfVar8[1];
    if (fVar14 <= 15000.0) {
      return;
    }
  }
  uVar16 = (ulong)(uint)fVar14;
  puVar1 = (undefined4 *)param_5[1];
  cVar2 = *(char *)param_5[2];
  puVar6 = *(undefined8 **)param_5[3];
  lVar9 = *(long *)param_5[4];
  if (*(int *)(puVar6 + 6) != 0) {
    if (lVar9 == 0) {
      return;
    }
    if (*(int *)(puVar6 + 6) == 3) {
      return;
    }
    uVar11 = FUN_1082d4054(puVar6);
    uVar17 = uVar16;
    uVar18 = param_3;
    uVar19 = param_4;
    uVar12 = func_0x0001082d4060(puVar6);
    uVar3 = puVar1[2];
    uVar20 = CONCAT44(*puVar1,*puVar1);
    uVar10 = puVar1[1];
    uVar15 = puVar1[3];
    uVar21 = CONCAT44(uVar15,uVar10);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    puVar4 = &uStack_80;
    FUN_1082d4ef0(uVar11,uVar12,uVar16,uVar17,param_3,uVar18,puVar4,&uStack_90,&uStack_a0);
    if ((int)puVar4 == 0) {
      return;
    }
    puVar4 = &uStack_b0;
    puVar5 = &uStack_c0;
    FUN_1082d4ef0(uVar16,uVar17,param_4,uVar19,param_3,uVar18,uVar20,uVar21,puVar4,puVar5,&uStack_d0
                 );
    if ((int)puVar4 == 0) {
      return;
    }
    FUN_1082d5168(uStack_80,uStack_90,uStack_a0);
    puVar4 = puVar5;
    FUN_1082d5168(uStack_b0,uStack_c0,uStack_d0);
    func_0x0001082d76a8((ulong)puVar4 | (ulong)puVar5);
    func_0x0001082d786c();
    if (extraout_w8 == 0) {
      return;
    }
    puVar6[1] = CONCAT44(uVar3,uVar3);
    *puVar6 = uVar20;
    puVar6[3] = CONCAT44(uVar15,uVar10);
    puVar6[2] = uVar21;
    if (*(int *)(puVar6 + 6) == 3) {
      auVar13 = NEON_fmov(0x3f800000,4);
      puVar6[5] = auVar13._8_8_;
      puVar6[4] = auVar13._0_8_;
    }
    *(undefined4 *)(puVar6 + 6) = 0;
    uVar7 = 0xf;
    if (cVar2 == '\0') {
      uVar7 = 0;
    }
    goto LAB_1082d4c74;
  }
  puVar4 = puVar6;
  FUN_1082d4ca8();
  uVar7 = (uint)puVar4;
  if (lVar9 == 0) {
    if (uVar7 != 0) {
      uVar7 = (int)puVar6 + 0x34;
      FUN_1082d4ca8();
      if (uVar7 != 0) {
        func_0x0001082d7860();
        goto LAB_1082d4c28;
      }
    }
    func_0x0001082d7860();
LAB_1082d4c64:
    FUN_1082d4e24();
  }
  else {
    if (uVar7 == 0) {
      func_0x0001082d7860();
      goto LAB_1082d4c64;
    }
    func_0x0001082d7860();
LAB_1082d4c28:
    func_0x0001082d4cec();
  }
  if (cVar2 == '\0') {
    uVar7 = *(uint *)(puVar6 + 0xd) & (uVar7 ^ 0xffffffff);
  }
  else {
    uVar7 = *(uint *)(puVar6 + 0xd) | uVar7;
  }
LAB_1082d4c74:
  *(uint *)(puVar6 + 0xd) = uVar7;
  return;
}



/* Entry: 1082c0c88; end: 1082c0dd7;  */

void FUN_1082c0c88(undefined8 param_1,float param_2,ulong param_3,long *****param_4,long *param_5,
                  long *****param_6,long *param_7)

{
  uint uVar1;
  float fVar2;
  undefined1 in_ZR;
  int iVar3;
  ulong uVar4;
  long ****pppplVar5;
  undefined8 *puVar6;
  long *****ppppplVar7;
  long *plVar8;
  long lVar9;
  long *****ppppplVar10;
  long *plVar11;
  ulong *puVar12;
  long *****ppppplVar13;
  ushort uVar14;
  uint uVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long *****ppppplVar16;
  long extraout_x8_02;
  long lVar17;
  long extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  long ****extraout_x8_08;
  long ****extraout_x8_09;
  long extraout_x8_10;
  code *extraout_x8_11;
  undefined8 extraout_x8_12;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long unaff_x20;
  long *****unaff_x21;
  long *unaff_x23;
  long *****ppppplVar18;
  long *****unaff_x24;
  long *unaff_x25;
  long ***ppplVar19;
  uint uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined2 uStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long ****pppplStack_2c8;
  undefined4 uStack_2c0;
  undefined2 uStack_2bc;
  undefined8 uStack_2b8;
  long ****pppplStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  long ***ppplStack_290;
  undefined4 uStack_288;
  undefined2 uStack_284;
  long ***ppplStack_280;
  undefined4 uStack_278;
  undefined2 uStack_274;
  long ***ppplStack_270;
  undefined8 uStack_268;
  long ***ppplStack_260;
  undefined1 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_1c0;
  long ***appplStack_1b8 [3];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long ****pppplStack_150;
  long ****apppplStack_148 [3];
  undefined8 uStack_130;
  undefined8 uStack_68;
  
  ppppplVar16 = &pppplStack_150;
  func_0x0001082c3fd0();
  func_0x0001082c408c();
  func_0x0001082c3c84();
  uStack_68 = extraout_x8;
  func_0x0001082c3c74();
  ppppplVar18 = param_4;
  if ((param_3 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      param_4 = (long *****)&UNK_10f48412d;
      FUN_10827b938();
    }
    ppppplVar18 = unaff_x24;
    func_0x0001083a630c();
    iVar3 = (int)ppppplVar18;
    in_ZR = iVar3 == 1;
    if ((!(bool)in_ZR) || (ppppplVar18 = param_4, (int)unaff_x25[6] != 0)) {
      func_0x0001082c3ea0();
      ppppplVar18 = unaff_x24;
      FUN_10828786c();
      if ((int)ppppplVar18 != 0) {
        uVar21 = *(undefined8 *)(unaff_x20 + 8);
        func_0x0001082c4054();
        in_ZR = iVar3 == 0;
        FUN_1082f93f8(apppplStack_148,uVar21);
        param_4 = ppppplVar18;
        param_5 = unaff_x23;
        param_6 = unaff_x21;
        param_7 = unaff_x25;
        if ((long *****)apppplStack_148[0] != (long *****)0x0) {
          pppplStack_150 = apppplStack_148[0];
          uStack_130 = 0;
          param_6 = apppplStack_148;
          func_0x0001082c3d14();
          FUN_10827fb18(apppplStack_148);
          param_5 = (long *)ppppplVar16;
          param_7 = unaff_x25;
          if ((long *****)pppplStack_150 != (long *****)0x0) {
            func_0x0001082c3c9c();
            param_5 = (long *)ppppplVar16;
            param_7 = unaff_x25;
          }
          goto LAB_1082c0d7c;
        }
      }
      ppppplVar18 = param_4;
      func_0x0001082c4098();
      FUN_10827c870();
      func_0x0001082c3cfc();
      func_0x0001082c3f54();
      func_0x0001082c3e90();
    }
  }
LAB_1082c0d7c:
  func_0x0001082c3c60(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3efc();
  FUN_10827fb18();
  ppppplVar16 = (long *****)pppplStack_150;
  if ((long *****)pppplStack_150 != (long *****)0x0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c3d6c();
  puVar12 = &uStack_1c0;
  ppppplVar10 = ppppplVar16;
  ppppplVar7 = ppppplVar18;
  plVar11 = param_5;
  ppppplVar13 = param_6;
  func_0x0001082c3cc8();
  uStack_198 = extraout_x8_00;
  func_0x0001082c3c74();
  if (((ulong)ppppplVar10 & 1) == 0) {
    func_0x0001082c3cec(ppppplVar16[1]);
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    ppppplVar10 = ppppplVar16;
    plVar11 = param_7;
    ppppplVar13 = param_6;
    FUN_1082c0770();
    in_ZR = (uint)ppppplVar10 == 2;
    ppppplVar7 = ppppplVar18;
    if (1 < (uint)ppppplVar10) {
      if (param_7 == (long *)0x0) {
        in_ZR = *(char *)(ppppplVar16 + 0xc) == '\x01';
        if (((bool)in_ZR) && (*(int *)(param_6 + 0xd) == 0)) {
          ppppplVar10 = (long *****)0x0;
        }
        else {
          func_0x0001082c3f74();
        }
      }
      else {
        in_ZR = *(int *)(param_6 + 0xd) == 0;
        uVar15 = 2;
        if ((bool)in_ZR) {
          uVar15 = 0;
        }
        ppppplVar10 = (long *****)(ulong)uVar15;
      }
      FUN_1082facb8(&uStack_1c0,param_5,ppppplVar10,param_6,param_7,0);
      uStack_1a0 = 0;
      ppppplVar13 = (long *****)appplStack_1b8;
      func_0x0001082c4018();
      FUN_10827fb18(appplStack_1b8);
      ppppplVar7 = ppppplVar10;
      plVar11 = (long *)puVar12;
      if (uStack_1c0 != 0) {
        func_0x0001082c3c9c();
        ppppplVar7 = ppppplVar10;
        plVar11 = (long *)puVar12;
      }
    }
  }
  func_0x0001082c3c60(uStack_198);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3efc();
  FUN_10827fb18();
  uVar4 = uStack_1c0;
  if (uStack_1c0 != 0) {
    func_0x0001082c3c9c();
    uVar4 = uStack_1c0;
  }
  func_0x0001082c3d6c();
  func_0x0001082c3ca8();
  uStack_228 = extraout_x8_01;
  func_0x0001082c3c74();
  if ((uVar4 & 1) != 0) goto LAB_1082c1524;
  ppppplVar18 = (long *****)*plVar11;
  in_ZR = *(char *)(*(long *)(param_7[1] + 0x20) + 0x54) == '\x01';
  ppppplVar16 = ppppplVar18;
  if ((bool)in_ZR) {
    FUN_10827b938(*(long *)(param_7[1] + 0x20),&UNK_10f48426e);
    ppppplVar16 = (long *****)*plVar11;
  }
  uStack_2d8 = ppppplVar16[5];
  pppplVar5 = ppppplVar16[4];
  uStack_2e0 = pppplVar5;
  if ((*(ushort *)((long)ppppplVar16 + 0x1a) >> 1 & 1) != 0) {
    uStack_2e0._0_4_ = SUB84(pppplVar5,0);
    uStack_2e0._4_4_ = (float)((ulong)pppplVar5 >> 0x20);
    uStack_2d8._4_4_ = (float)((ulong)uStack_2d8 >> 0x20);
    fVar2 = uStack_2d8._4_4_;
    if ((*(ushort *)((long)ppppplVar16 + 0x1a) & 1) == 0) {
      fVar26 = (float)(int)(float)uStack_2e0;
      fVar25 = (float)(int)uStack_2e0._4_4_;
      fVar24 = (float)(int)(float)uStack_2d8;
      fVar22 = (float)(int)uStack_2d8._4_4_;
      pppplVar5 = (long ****)(ulong)(uint)fVar22;
      if (fVar26 == (float)uStack_2e0) {
        fVar26 = fVar26 + -1.0;
      }
      if (fVar25 == uStack_2e0._4_4_) {
        fVar25 = fVar25 + -1.0;
      }
      uStack_2e0 = (long ****)CONCAT44(fVar25,fVar26);
      if (fVar24 == (float)uStack_2d8) {
        fVar24 = fVar24 + 1.0;
      }
      uStack_2d8 = (long ****)CONCAT44(fVar22,fVar24);
      in_ZR = fVar22 == fVar2;
      param_2 = fVar2;
      if ((bool)in_ZR) {
        param_2 = 1.0;
        pppplVar5 = (long ****)(ulong)(uint)(fVar22 + 1.0);
        uStack_2d8 = (long ****)CONCAT44(fVar22 + 1.0,fVar24);
      }
    }
    else {
      pppplVar5 = (long ****)CONCAT44(uStack_2e0._4_4_ + -0.5,(float)uStack_2e0 + -0.5);
      uStack_2d8 = (long ****)CONCAT44(uStack_2d8._4_4_ + 0.5,(float)uStack_2d8 + 0.5);
      uStack_2e0 = pppplVar5;
    }
  }
  uVar23 = SUB84(pppplVar5,0);
  pppplVar5 = (long ****)param_7[2];
  ppplVar19 = pppplVar5[0x12];
  FUN_1082b1dfc();
  uStack_268 = 0;
  uStack_258 = 0;
  unaff_x24 = (long *****)&ppplStack_270;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_308 = 0;
  uStack_300 = ppplVar19;
  ppplStack_270 = (long ***)pppplVar5;
  ppplStack_260 = (long ***)pppplVar5;
  FUN_108287e44(&ppplStack_270,&uStack_308);
  uStack_230 = 0;
  ppppplVar16 = ppppplVar18;
  (*(code *)(*ppppplVar18)[8])();
  if (ppppplVar7 == (long *****)0x0) {
    func_0x0001082c3ff0(param_7[2]);
    uStack_308 = 0;
    uStack_300 = (long ***)CONCAT44(param_2,uVar23);
    puVar6 = &uStack_2e0;
    FUN_10838ed10(puVar6,&uStack_308);
    if ((int)puVar6 != 0) goto LAB_1082c10cc;
  }
  else {
    if (((ulong)ppppplVar16 & 1) == 0) {
      uVar14 = *(ushort *)(*plVar11 + 0x1a) & 1;
    }
    else {
      uVar14 = 2;
    }
    (*(code *)(*ppppplVar7)[3])
              (ppppplVar7,param_7[1],param_7,ppppplVar18,uVar14,&ppplStack_270,&uStack_2e0);
    in_ZR = (int)ppppplVar7 == 2;
    if (!(bool)in_ZR) {
LAB_1082c10cc:
      FUN_1082c1b60((int)param_7[6]);
      func_0x0001082c3ef0();
      unaff_x24 = ppppplVar18;
      (*(code *)(*ppppplVar18)[10])
                (ppppplVar18,*(undefined8 *)(extraout_x8_02 + 0xb8),&ppplStack_270);
      uStack_2e4 = SUB82(unaff_x24,0);
      ppppplVar10 = ppppplVar18;
      (*(code *)(*ppppplVar18)[0xb])();
      uVar15 = (uint)ppppplVar10;
      if (((ulong)ppppplVar16 & 1) == 0) {
        uVar20 = *(byte *)(param_7 + 0xc) & uVar15;
      }
      else {
        uVar20 = 1;
      }
      lVar17 = *plVar11;
      *(long *****)(lVar17 + 0x28) = uStack_2d8;
      *(long *****)(lVar17 + 0x20) = uStack_2e0;
      *(undefined2 *)(lVar17 + 0x1a) = 0;
      in_ZR = (char)param_7[0xc] == '\x01';
      if ((bool)in_ZR) {
        func_0x0001082c3e54(param_7[1]);
        if ((*(byte *)(extraout_x8_03 + 0x19) >> 6 & 1) == 0) {
          uVar1 = uVar20 & 1;
        }
        else {
          ppppplVar10 = (long *****)param_7[2];
          if (ppppplVar10 != (long *****)0x0) {
            (*(code *)(*ppppplVar10)[3])();
          }
          in_ZR = ppppplVar10 == (long *****)0x0;
          uVar1 = (byte)in_ZR & uVar20;
        }
        if (((uVar1 != 0) && (func_0x0001082c3e34(), ((ulong)ppppplVar10[0x12] & 1) == 0)) &&
           (func_0x0001082c3e34(), (*(byte *)((long)ppppplVar10 + 0xcc) & 1) != 0)) {
          func_0x0001082c404c();
          *(undefined1 *)((long)ppppplVar10 + 0xb1) = 1;
        }
      }
      uStack_308 = 0;
      uStack_300 = (long ***)CONCAT26((short)((ulong)uStack_300 >> 0x30),0x321000000000);
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      if ((((uint)unaff_x24 & 0xffff) >> 2 & 1) == 0) {
LAB_1082c1490:
        func_0x0001082c3e34();
        pppplVar5 = ppppplVar13[3];
        if (pppplVar5 != (long ****)0x0) {
          ppplStack_280 = (long ***)*plVar11;
          ppplStack_290 = (long ***)CONCAT44(ppplStack_290._4_4_,*(undefined4 *)(ppppplVar10 + 9));
          (*(code *)(*pppplVar5)[6])(pppplVar5,&ppplStack_280,&ppplStack_290);
        }
        if (uVar15 != 0) {
          FUN_1082c22ec(param_7);
        }
        lVar17 = *plVar11;
        *plVar11 = 0;
        func_0x0001082c3e54();
        FUN_1082feef8(ppppplVar10);
        if (lVar17 != 0) {
          func_0x0001082c3c9c();
        }
      }
      else {
        lVar17 = param_7[2];
        func_0x0001082c3df0();
        (*extraout_x8_04)();
        if ((*(byte *)(lVar17 + 10) & 1) == 0) {
          lVar17 = param_7[2];
          unaff_x24 = *(long ******)(*(long *)(param_7[1] + 0x10) + 0xb8);
          if (lVar17 == 0) {
            lVar9 = 0;
          }
          else {
            func_0x0001082c3df0();
            (*extraout_x8_05)();
            lVar9 = lVar17;
          }
          func_0x0001082c3e34();
          FUN_10828aa4c(unaff_x24,lVar9,(uVar20 | *(byte *)(lVar17 + 0x90)) & 1);
          if (((((ulong)unaff_x24 & 1) == 0) && (in_ZR = (char)param_7[0xc] == '\x01', (bool)in_ZR))
             && (ppppplVar16 = unaff_x24, func_0x0001082c3e34(),
                ((uVar20 | *(byte *)(ppppplVar16 + 0x12) ^ 0xffffffff) & 1) == 0)) {
            lVar17 = param_7[2];
            ppppplVar16 = *(long ******)(*(long *)(param_7[1] + 0x10) + 0xb8);
            if (lVar17 == 0) {
              lVar17 = 0;
            }
            else {
              func_0x0001082c3df0();
              (*extraout_x8_06)();
            }
            FUN_10828aa4c(ppppplVar16,lVar17,0);
            if (((ulong)ppppplVar16 & 1) != 0) {
              ppppplVar10 = ppppplVar16;
              func_0x0001082c404c();
              *(undefined1 *)((long)ppppplVar10 + 0xb1) = 1;
              unaff_x24 = ppppplVar16;
            }
          }
          if (((ulong)unaff_x24 & 1) != 0) {
            ppplStack_280 = (long ***)0x0;
            if (param_7[2] != 0) {
              do {
                func_0x0001082c3d3c();
                ppplStack_280 = (long ***)extraout_x8_09;
              } while (extraout_w11_00 != 0);
            }
            uStack_278 = (undefined4)param_7[3];
            uStack_274 = *(undefined2 *)((long)param_7 + 0x1c);
            FUN_1082c3700(&uStack_308,&ppplStack_280);
            ppppplVar10 = (long *****)&ppplStack_280;
LAB_1082c1360:
            FUN_1082764bc();
            uStack_2f8 = 0;
            uStack_2f0 = (int)unaff_x24;
            goto LAB_1082c1490;
          }
          if ((uVar20 & *(byte *)(param_7 + 0xc) & 1) == 0) {
LAB_1082c1370:
            lVar17 = param_7[2];
          }
          else {
            plVar8 = (long *)param_7[2];
            lVar17 = 0;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x18))();
              if (plVar8 != (long *)0x0) {
                func_0x0001082c3ef0();
                plVar8 = *(long **)(extraout_x8_07 + 0xb8);
                if (((*(byte *)((long)plVar8 + 0x19) >> 6 & 1) == 0) &&
                   ((**(code **)(*plVar8 + 0x98))(), (int)plVar8 != 0)) {
                  func_0x0001082c3e34();
                  if (((int)plVar8[0x115] != 0) || ((int)plVar8[0x13] != 0)) {
                    func_0x0001082c404c();
                  }
                  func_0x0001082c3e34();
                  *(undefined1 *)((long)plVar8 + 0xb1) = 1;
                  ppplStack_290 = (long ***)0x0;
                  if (param_7[2] != 0) {
                    do {
                      func_0x0001082c3d3c();
                      ppplStack_290 = (long ***)extraout_x8_08;
                    } while (extraout_w11 != 0);
                  }
                  uStack_288 = (undefined4)param_7[3];
                  uStack_284 = *(undefined2 *)((long)param_7 + 0x1c);
                  FUN_1082c3700(&uStack_308,&ppplStack_290);
                  ppppplVar10 = (long *****)&ppplStack_290;
                  goto LAB_1082c1360;
                }
              }
              goto LAB_1082c1370;
            }
          }
          lVar9 = param_7[6];
          func_0x0001082c3ef0();
          plVar8 = *(long **)(extraout_x8_10 + 0xb8);
          if (lVar17 == 0) {
            lVar17 = 0;
          }
          else {
            func_0x0001082c3df0();
            (*extraout_x8_11)();
          }
          (**(code **)(*plVar8 + 0x60))(plVar8,lVar17,(int)lVar9);
          lVar9 = param_7[2];
          FUN_1082b1dfc();
          uStack_2a0 = 0;
          lStack_298 = lVar9;
          if (((uint)plVar8 >> 8 & 1) == 0) {
            ppppplVar18 = ppppplVar18 + 4;
            func_0x00010812f180();
            pppplStack_2b0 = (long ****)ppppplVar18;
            lStack_2a8 = lVar17;
            func_0x0001082889e4(&pppplStack_2b0,0xffffffff,0xffffffff);
            func_0x00010821b838(&uStack_2a0,&pppplStack_2b0);
          }
          uVar21 = uStack_2a0;
          uStack_2b8 = 0;
          if (param_7[2] != 0) {
            do {
              func_0x0001082c3d3c();
              uStack_2b8 = extraout_x8_12;
            } while (extraout_w11_01 != 0);
          }
          FUN_1082b1e54(&pppplStack_2b0);
          FUN_1082764bc(&uStack_2b8);
          pppplStack_2c8 = pppplStack_2b0;
          pppplStack_2b0 = (long ****)0x0;
          uStack_2c0 = (undefined4)param_7[3];
          uStack_2bc = *(undefined2 *)((long)param_7 + 0x1c);
          uStack_2d0 = 0;
          FUN_1082c3700(&uStack_308,&pppplStack_2c8);
          FUN_1082764bc(&pppplStack_2c8);
          FUN_1082764bc(&uStack_2d0);
          in_ZR = ((ulong)plVar8 & 1) == 0;
          uStack_2f8 = 0;
          if ((bool)in_ZR) {
            uStack_2f8 = uVar21;
          }
          ppppplVar10 = &pppplStack_2b0;
          uStack_2f0 = (int)unaff_x24;
          FUN_1082764bc();
          goto LAB_1082c1490;
        }
      }
      func_0x0001082c3f94();
    }
  }
  FUN_1082c3a7c(&ppplStack_270);
LAB_1082c1524:
  func_0x0001082c3c60(uStack_228);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1082764bc(&ppplStack_290);
  func_0x0001082c3f94();
  FUN_1082c3a7c(&ppplStack_270);
  do {
    func_0x0001082c3d6c();
    FUN_10827a4f4(unaff_x24 + 4);
  } while( true );
}



/* Entry: 1082c0dd8; end: 1082c0f07;  */

void FUN_1082c0dd8(undefined8 param_1,float param_2,long *param_3,long *param_4,long *param_5,
                  undefined1 *param_6,long *param_7)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 in_ZR;
  ulong uVar4;
  long ****pppplVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *****ppppplVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong *puVar12;
  undefined1 *puVar13;
  ushort uVar14;
  uint uVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *****ppppplVar16;
  long extraout_x8_01;
  long lVar17;
  long extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long ****extraout_x8_07;
  long ****extraout_x8_08;
  long extraout_x8_09;
  code *extraout_x8_10;
  undefined8 extraout_x8_11;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long *****ppppplVar18;
  long *****unaff_x24;
  long ***ppplVar19;
  uint uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined2 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long ****pppplStack_178;
  undefined4 uStack_170;
  undefined2 uStack_16c;
  undefined8 uStack_168;
  long ****pppplStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long ***ppplStack_140;
  undefined4 uStack_138;
  undefined2 uStack_134;
  long ***ppplStack_130;
  undefined4 uStack_128;
  undefined2 uStack_124;
  long ***ppplStack_120;
  undefined8 uStack_118;
  long ***ppplStack_110;
  undefined1 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar12 = &uStack_70;
  plVar10 = param_3;
  plVar7 = param_4;
  plVar11 = param_5;
  puVar13 = param_6;
  func_0x0001082c3cc8();
  uStack_48 = extraout_x8;
  func_0x0001082c3c74();
  if (((ulong)plVar10 & 1) == 0) {
    func_0x0001082c3cec(param_3[1]);
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    plVar10 = param_3;
    plVar11 = param_7;
    puVar13 = param_6;
    FUN_1082c0770();
    in_ZR = (uint)plVar10 == 2;
    plVar7 = param_4;
    if (1 < (uint)plVar10) {
      if (param_7 == (long *)0x0) {
        in_ZR = (char)param_3[0xc] == '\x01';
        if (((bool)in_ZR) && (*(int *)(param_6 + 0x68) == 0)) {
          plVar10 = (long *)0x0;
        }
        else {
          func_0x0001082c3f74();
        }
      }
      else {
        in_ZR = *(int *)(param_6 + 0x68) == 0;
        uVar15 = 2;
        if ((bool)in_ZR) {
          uVar15 = 0;
        }
        plVar10 = (long *)(ulong)uVar15;
      }
      FUN_1082facb8(&uStack_70,param_5,plVar10,param_6,param_7,0);
      uStack_50 = 0;
      puVar13 = auStack_68;
      func_0x0001082c4018();
      FUN_10827fb18(auStack_68);
      plVar7 = plVar10;
      plVar11 = (long *)puVar12;
      if (uStack_70 != 0) {
        func_0x0001082c3c9c();
        plVar7 = plVar10;
        plVar11 = (long *)puVar12;
      }
    }
  }
  func_0x0001082c3c60(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3efc();
  FUN_10827fb18();
  uVar4 = uStack_70;
  if (uStack_70 != 0) {
    func_0x0001082c3c9c();
    uVar4 = uStack_70;
  }
  func_0x0001082c3d6c();
  func_0x0001082c3ca8();
  uStack_d8 = extraout_x8_00;
  func_0x0001082c3c74();
  if ((uVar4 & 1) != 0) goto LAB_1082c1524;
  ppppplVar18 = (long *****)*plVar11;
  in_ZR = *(char *)(*(long *)(param_7[1] + 0x20) + 0x54) == '\x01';
  ppppplVar16 = ppppplVar18;
  if ((bool)in_ZR) {
    FUN_10827b938(*(long *)(param_7[1] + 0x20),&UNK_10f48426e);
    ppppplVar16 = (long *****)*plVar11;
  }
  uStack_188 = ppppplVar16[5];
  pppplVar5 = ppppplVar16[4];
  uStack_190 = pppplVar5;
  if ((*(ushort *)((long)ppppplVar16 + 0x1a) >> 1 & 1) != 0) {
    uStack_190._0_4_ = SUB84(pppplVar5,0);
    uStack_190._4_4_ = (float)((ulong)pppplVar5 >> 0x20);
    uStack_188._4_4_ = (float)((ulong)uStack_188 >> 0x20);
    fVar2 = uStack_188._4_4_;
    if ((*(ushort *)((long)ppppplVar16 + 0x1a) & 1) == 0) {
      fVar25 = (float)(int)(float)uStack_190;
      fVar24 = (float)(int)uStack_190._4_4_;
      fVar23 = (float)(int)(float)uStack_188;
      fVar21 = (float)(int)uStack_188._4_4_;
      pppplVar5 = (long ****)(ulong)(uint)fVar21;
      if (fVar25 == (float)uStack_190) {
        fVar25 = fVar25 + -1.0;
      }
      if (fVar24 == uStack_190._4_4_) {
        fVar24 = fVar24 + -1.0;
      }
      uStack_190 = (long ****)CONCAT44(fVar24,fVar25);
      if (fVar23 == (float)uStack_188) {
        fVar23 = fVar23 + 1.0;
      }
      uStack_188 = (long ****)CONCAT44(fVar21,fVar23);
      in_ZR = fVar21 == fVar2;
      param_2 = fVar2;
      if ((bool)in_ZR) {
        param_2 = 1.0;
        pppplVar5 = (long ****)(ulong)(uint)(fVar21 + 1.0);
        uStack_188 = (long ****)CONCAT44(fVar21 + 1.0,fVar23);
      }
    }
    else {
      pppplVar5 = (long ****)CONCAT44(uStack_190._4_4_ + -0.5,(float)uStack_190 + -0.5);
      uStack_188 = (long ****)CONCAT44(uStack_188._4_4_ + 0.5,(float)uStack_188 + 0.5);
      uStack_190 = pppplVar5;
    }
  }
  uVar22 = SUB84(pppplVar5,0);
  pppplVar5 = (long ****)param_7[2];
  ppplVar19 = pppplVar5[0x12];
  FUN_1082b1dfc();
  uStack_118 = 0;
  uStack_108 = 0;
  unaff_x24 = (long *****)&ppplStack_120;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = ppplVar19;
  ppplStack_120 = (long ***)pppplVar5;
  ppplStack_110 = (long ***)pppplVar5;
  FUN_108287e44(&ppplStack_120,&uStack_1b8);
  uStack_e0 = 0;
  ppppplVar16 = ppppplVar18;
  (*(code *)(*ppppplVar18)[8])();
  if (plVar7 == (long *)0x0) {
    func_0x0001082c3ff0(param_7[2]);
    uStack_1b8 = 0;
    uStack_1b0 = (long ***)CONCAT44(param_2,uVar22);
    puVar6 = &uStack_190;
    FUN_10838ed10(puVar6,&uStack_1b8);
    if ((int)puVar6 != 0) goto LAB_1082c10cc;
  }
  else {
    if (((ulong)ppppplVar16 & 1) == 0) {
      uVar14 = *(ushort *)(*plVar11 + 0x1a) & 1;
    }
    else {
      uVar14 = 2;
    }
    (**(code **)(*plVar7 + 0x18))
              (plVar7,param_7[1],param_7,ppppplVar18,uVar14,&ppplStack_120,&uStack_190);
    in_ZR = (int)plVar7 == 2;
    if (!(bool)in_ZR) {
LAB_1082c10cc:
      FUN_1082c1b60((int)param_7[6]);
      func_0x0001082c3ef0();
      unaff_x24 = ppppplVar18;
      (*(code *)(*ppppplVar18)[10])
                (ppppplVar18,*(undefined8 *)(extraout_x8_01 + 0xb8),&ppplStack_120);
      uStack_194 = SUB82(unaff_x24,0);
      ppppplVar8 = ppppplVar18;
      (*(code *)(*ppppplVar18)[0xb])();
      uVar15 = (uint)ppppplVar8;
      if (((ulong)ppppplVar16 & 1) == 0) {
        uVar20 = *(byte *)(param_7 + 0xc) & uVar15;
      }
      else {
        uVar20 = 1;
      }
      lVar17 = *plVar11;
      *(long *****)(lVar17 + 0x28) = uStack_188;
      *(long *****)(lVar17 + 0x20) = uStack_190;
      *(undefined2 *)(lVar17 + 0x1a) = 0;
      in_ZR = (char)param_7[0xc] == '\x01';
      if ((bool)in_ZR) {
        func_0x0001082c3e54(param_7[1]);
        if ((*(byte *)(extraout_x8_02 + 0x19) >> 6 & 1) == 0) {
          uVar1 = uVar20 & 1;
        }
        else {
          ppppplVar8 = (long *****)param_7[2];
          if (ppppplVar8 != (long *****)0x0) {
            (*(code *)(*ppppplVar8)[3])();
          }
          in_ZR = ppppplVar8 == (long *****)0x0;
          uVar1 = (byte)in_ZR & uVar20;
        }
        if (((uVar1 != 0) && (func_0x0001082c3e34(), ((ulong)ppppplVar8[0x12] & 1) == 0)) &&
           (func_0x0001082c3e34(), (*(byte *)((long)ppppplVar8 + 0xcc) & 1) != 0)) {
          func_0x0001082c404c();
          *(undefined1 *)((long)ppppplVar8 + 0xb1) = 1;
        }
      }
      uStack_1b8 = 0;
      uStack_1b0 = (long ***)CONCAT26((short)((ulong)uStack_1b0 >> 0x30),0x321000000000);
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      if ((((uint)unaff_x24 & 0xffff) >> 2 & 1) == 0) {
LAB_1082c1490:
        func_0x0001082c3e34();
        plVar10 = *(long **)(puVar13 + 0x18);
        if (plVar10 != (long *)0x0) {
          ppplStack_130 = (long ***)*plVar11;
          ppplStack_140 = (long ***)CONCAT44(ppplStack_140._4_4_,*(undefined4 *)(ppppplVar8 + 9));
          (**(code **)(*plVar10 + 0x30))(plVar10,&ppplStack_130,&ppplStack_140);
        }
        if (uVar15 != 0) {
          FUN_1082c22ec(param_7);
        }
        lVar17 = *plVar11;
        *plVar11 = 0;
        func_0x0001082c3e54();
        FUN_1082feef8(ppppplVar8);
        if (lVar17 != 0) {
          func_0x0001082c3c9c();
        }
      }
      else {
        lVar17 = param_7[2];
        func_0x0001082c3df0();
        (*extraout_x8_03)();
        if ((*(byte *)(lVar17 + 10) & 1) == 0) {
          lVar17 = param_7[2];
          unaff_x24 = *(long ******)(*(long *)(param_7[1] + 0x10) + 0xb8);
          if (lVar17 == 0) {
            lVar9 = 0;
          }
          else {
            func_0x0001082c3df0();
            (*extraout_x8_04)();
            lVar9 = lVar17;
          }
          func_0x0001082c3e34();
          FUN_10828aa4c(unaff_x24,lVar9,(uVar20 | *(byte *)(lVar17 + 0x90)) & 1);
          if (((((ulong)unaff_x24 & 1) == 0) && (in_ZR = (char)param_7[0xc] == '\x01', (bool)in_ZR))
             && (ppppplVar16 = unaff_x24, func_0x0001082c3e34(),
                ((uVar20 | *(byte *)(ppppplVar16 + 0x12) ^ 0xffffffff) & 1) == 0)) {
            lVar17 = param_7[2];
            ppppplVar16 = *(long ******)(*(long *)(param_7[1] + 0x10) + 0xb8);
            if (lVar17 == 0) {
              lVar17 = 0;
            }
            else {
              func_0x0001082c3df0();
              (*extraout_x8_05)();
            }
            FUN_10828aa4c(ppppplVar16,lVar17,0);
            if (((ulong)ppppplVar16 & 1) != 0) {
              ppppplVar8 = ppppplVar16;
              func_0x0001082c404c();
              *(undefined1 *)((long)ppppplVar8 + 0xb1) = 1;
              unaff_x24 = ppppplVar16;
            }
          }
          if (((ulong)unaff_x24 & 1) != 0) {
            ppplStack_130 = (long ***)0x0;
            if (param_7[2] != 0) {
              do {
                func_0x0001082c3d3c();
                ppplStack_130 = (long ***)extraout_x8_08;
              } while (extraout_w11_00 != 0);
            }
            uStack_128 = (undefined4)param_7[3];
            uStack_124 = *(undefined2 *)((long)param_7 + 0x1c);
            FUN_1082c3700(&uStack_1b8,&ppplStack_130);
            ppppplVar8 = (long *****)&ppplStack_130;
LAB_1082c1360:
            FUN_1082764bc();
            uStack_1a8 = 0;
            uStack_1a0 = (int)unaff_x24;
            goto LAB_1082c1490;
          }
          if ((uVar20 & *(byte *)(param_7 + 0xc) & 1) == 0) {
LAB_1082c1370:
            lVar17 = param_7[2];
          }
          else {
            plVar10 = (long *)param_7[2];
            lVar17 = 0;
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x18))();
              if (plVar10 != (long *)0x0) {
                func_0x0001082c3ef0();
                plVar10 = *(long **)(extraout_x8_06 + 0xb8);
                if (((*(byte *)((long)plVar10 + 0x19) >> 6 & 1) == 0) &&
                   ((**(code **)(*plVar10 + 0x98))(), (int)plVar10 != 0)) {
                  func_0x0001082c3e34();
                  if (((int)plVar10[0x115] != 0) || ((int)plVar10[0x13] != 0)) {
                    func_0x0001082c404c();
                  }
                  func_0x0001082c3e34();
                  *(undefined1 *)((long)plVar10 + 0xb1) = 1;
                  ppplStack_140 = (long ***)0x0;
                  if (param_7[2] != 0) {
                    do {
                      func_0x0001082c3d3c();
                      ppplStack_140 = (long ***)extraout_x8_07;
                    } while (extraout_w11 != 0);
                  }
                  uStack_138 = (undefined4)param_7[3];
                  uStack_134 = *(undefined2 *)((long)param_7 + 0x1c);
                  FUN_1082c3700(&uStack_1b8,&ppplStack_140);
                  ppppplVar8 = (long *****)&ppplStack_140;
                  goto LAB_1082c1360;
                }
              }
              goto LAB_1082c1370;
            }
          }
          lVar9 = param_7[6];
          func_0x0001082c3ef0();
          plVar10 = *(long **)(extraout_x8_09 + 0xb8);
          if (lVar17 == 0) {
            lVar17 = 0;
          }
          else {
            func_0x0001082c3df0();
            (*extraout_x8_10)();
          }
          (**(code **)(*plVar10 + 0x60))(plVar10,lVar17,(int)lVar9);
          lVar9 = param_7[2];
          FUN_1082b1dfc();
          uStack_150 = 0;
          lStack_148 = lVar9;
          if (((uint)plVar10 >> 8 & 1) == 0) {
            ppppplVar18 = ppppplVar18 + 4;
            func_0x00010812f180();
            pppplStack_160 = (long ****)ppppplVar18;
            lStack_158 = lVar17;
            func_0x0001082889e4(&pppplStack_160,0xffffffff,0xffffffff);
            func_0x00010821b838(&uStack_150,&pppplStack_160);
          }
          uVar3 = uStack_150;
          uStack_168 = 0;
          if (param_7[2] != 0) {
            do {
              func_0x0001082c3d3c();
              uStack_168 = extraout_x8_11;
            } while (extraout_w11_01 != 0);
          }
          FUN_1082b1e54(&pppplStack_160);
          FUN_1082764bc(&uStack_168);
          pppplStack_178 = pppplStack_160;
          pppplStack_160 = (long ****)0x0;
          uStack_170 = (undefined4)param_7[3];
          uStack_16c = *(undefined2 *)((long)param_7 + 0x1c);
          uStack_180 = 0;
          FUN_1082c3700(&uStack_1b8,&pppplStack_178);
          FUN_1082764bc(&pppplStack_178);
          FUN_1082764bc(&uStack_180);
          in_ZR = ((ulong)plVar10 & 1) == 0;
          uStack_1a8 = 0;
          if ((bool)in_ZR) {
            uStack_1a8 = uVar3;
          }
          ppppplVar8 = &pppplStack_160;
          uStack_1a0 = (int)unaff_x24;
          FUN_1082764bc();
          goto LAB_1082c1490;
        }
      }
      func_0x0001082c3f94();
    }
  }
  FUN_1082c3a7c(&ppplStack_120);
LAB_1082c1524:
  func_0x0001082c3c60(uStack_d8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1082764bc(&ppplStack_140);
  func_0x0001082c3f94();
  FUN_1082c3a7c(&ppplStack_120);
  do {
    func_0x0001082c3d6c();
    FUN_10827a4f4(unaff_x24 + 4);
  } while( true );
}



/* Entry: 1082c0f08; end: 1082c15ef;  */

void FUN_1082c0f08(undefined8 param_1,float param_2,ulong param_3,long *param_4,long *param_5,
                  long param_6)

{
  uint uVar1;
  float fVar2;
  undefined1 in_ZR;
  long lVar3;
  long ****pppplVar4;
  undefined8 *puVar5;
  long *****ppppplVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  long *****ppppplVar9;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  long ****extraout_x8_06;
  long ****extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  undefined8 extraout_x8_10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long unaff_x20;
  uint uVar10;
  long *****ppppplVar11;
  long *****unaff_x24;
  long ***ppplVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined2 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long ****pppplStack_108;
  undefined4 uStack_100;
  undefined2 uStack_fc;
  undefined8 uStack_f8;
  long ****pppplStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long ***ppplStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  long ***ppplStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  long ***ppplStack_b0;
  undefined8 uStack_a8;
  long ***ppplStack_a0;
  undefined1 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001082c3ca8();
  uStack_68 = extraout_x8;
  func_0x0001082c3c74();
  if ((param_3 & 1) != 0) goto LAB_1082c1524;
  ppppplVar11 = (long *****)*param_5;
  lVar3 = *(long *)(*(long *)(unaff_x20 + 8) + 0x20);
  in_ZR = *(char *)(lVar3 + 0x54) == '\x01';
  ppppplVar9 = ppppplVar11;
  if ((bool)in_ZR) {
    FUN_10827b938(lVar3,&UNK_10f48426e);
    ppppplVar9 = (long *****)*param_5;
  }
  uStack_118 = ppppplVar9[5];
  pppplVar4 = ppppplVar9[4];
  uStack_120 = pppplVar4;
  if ((*(ushort *)((long)ppppplVar9 + 0x1a) >> 1 & 1) != 0) {
    uStack_120._0_4_ = SUB84(pppplVar4,0);
    uStack_120._4_4_ = (float)((ulong)pppplVar4 >> 0x20);
    uStack_118._4_4_ = (float)((ulong)uStack_118 >> 0x20);
    fVar2 = uStack_118._4_4_;
    if ((*(ushort *)((long)ppppplVar9 + 0x1a) & 1) == 0) {
      fVar19 = (float)(int)(float)uStack_120;
      fVar18 = (float)(int)uStack_120._4_4_;
      fVar17 = (float)(int)(float)uStack_118;
      fVar15 = (float)(int)uStack_118._4_4_;
      pppplVar4 = (long ****)(ulong)(uint)fVar15;
      if (fVar19 == (float)uStack_120) {
        fVar19 = fVar19 + -1.0;
      }
      if (fVar18 == uStack_120._4_4_) {
        fVar18 = fVar18 + -1.0;
      }
      uStack_120 = (long ****)CONCAT44(fVar18,fVar19);
      if (fVar17 == (float)uStack_118) {
        fVar17 = fVar17 + 1.0;
      }
      uStack_118 = (long ****)CONCAT44(fVar15,fVar17);
      in_ZR = fVar15 == fVar2;
      param_2 = fVar2;
      if ((bool)in_ZR) {
        param_2 = 1.0;
        pppplVar4 = (long ****)(ulong)(uint)(fVar15 + 1.0);
        uStack_118 = (long ****)CONCAT44(fVar15 + 1.0,fVar17);
      }
    }
    else {
      pppplVar4 = (long ****)CONCAT44(uStack_120._4_4_ + -0.5,(float)uStack_120 + -0.5);
      uStack_118 = (long ****)CONCAT44(uStack_118._4_4_ + 0.5,(float)uStack_118 + 0.5);
      uStack_120 = pppplVar4;
    }
  }
  uVar16 = SUB84(pppplVar4,0);
  pppplVar4 = *(long *****)(unaff_x20 + 0x10);
  ppplVar12 = pppplVar4[0x12];
  FUN_1082b1dfc();
  uStack_a8 = 0;
  uStack_98 = 0;
  unaff_x24 = (long *****)&ppplStack_b0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_148 = 0;
  uStack_140 = ppplVar12;
  ppplStack_b0 = (long ***)pppplVar4;
  ppplStack_a0 = (long ***)pppplVar4;
  FUN_108287e44(&ppplStack_b0,&uStack_148);
  uStack_70 = 0;
  ppppplVar9 = ppppplVar11;
  (*(code *)(*ppppplVar11)[8])();
  if (param_4 == (long *)0x0) {
    func_0x0001082c3ff0(*(undefined8 *)(unaff_x20 + 0x10));
    uStack_148 = 0;
    uStack_140 = (long ***)CONCAT44(param_2,uVar16);
    puVar5 = &uStack_120;
    FUN_10838ed10(puVar5,&uStack_148);
    if ((int)puVar5 != 0) goto LAB_1082c10cc;
  }
  else {
    (**(code **)(*param_4 + 0x18))(param_4,*(undefined8 *)(unaff_x20 + 8));
    in_ZR = (int)param_4 == 2;
    if (!(bool)in_ZR) {
LAB_1082c10cc:
      FUN_1082c1b60(*(undefined4 *)(unaff_x20 + 0x30));
      func_0x0001082c3ef0();
      unaff_x24 = ppppplVar11;
      (*(code *)(*ppppplVar11)[10])
                (ppppplVar11,*(undefined8 *)(extraout_x8_00 + 0xb8),&ppplStack_b0);
      uStack_124 = SUB82(unaff_x24,0);
      ppppplVar6 = ppppplVar11;
      (*(code *)(*ppppplVar11)[0xb])();
      uVar10 = (uint)ppppplVar6;
      if (((ulong)ppppplVar9 & 1) == 0) {
        uVar14 = *(byte *)(unaff_x20 + 0x60) & uVar10;
      }
      else {
        uVar14 = 1;
      }
      lVar3 = *param_5;
      *(long *****)(lVar3 + 0x28) = uStack_118;
      *(long *****)(lVar3 + 0x20) = uStack_120;
      *(undefined2 *)(lVar3 + 0x1a) = 0;
      in_ZR = *(char *)(unaff_x20 + 0x60) == '\x01';
      if ((bool)in_ZR) {
        func_0x0001082c3e54(*(undefined8 *)(unaff_x20 + 8));
        if ((*(byte *)(extraout_x8_01 + 0x19) >> 6 & 1) == 0) {
          uVar1 = uVar14 & 1;
        }
        else {
          ppppplVar6 = *(long ******)(unaff_x20 + 0x10);
          if (ppppplVar6 != (long *****)0x0) {
            (*(code *)(*ppppplVar6)[3])();
          }
          in_ZR = ppppplVar6 == (long *****)0x0;
          uVar1 = (byte)in_ZR & uVar14;
        }
        if (((uVar1 != 0) && (func_0x0001082c3e34(), ((ulong)ppppplVar6[0x12] & 1) == 0)) &&
           (func_0x0001082c3e34(), (*(byte *)((long)ppppplVar6 + 0xcc) & 1) != 0)) {
          func_0x0001082c404c();
          *(undefined1 *)((long)ppppplVar6 + 0xb1) = 1;
        }
      }
      uStack_148 = 0;
      uStack_140 = (long ***)CONCAT26((short)((ulong)uStack_140 >> 0x30),0x321000000000);
      uStack_138 = 0;
      uStack_130 = 0;
      if ((((uint)unaff_x24 & 0xffff) >> 2 & 1) == 0) {
LAB_1082c1490:
        func_0x0001082c3e34();
        plVar7 = *(long **)(param_6 + 0x18);
        if (plVar7 != (long *)0x0) {
          ppplStack_c0 = (long ***)*param_5;
          ppplStack_d0 = (long ***)CONCAT44(ppplStack_d0._4_4_,*(undefined4 *)(ppppplVar6 + 9));
          (**(code **)(*plVar7 + 0x30))(plVar7,&ppplStack_c0,&ppplStack_d0);
        }
        if (uVar10 != 0) {
          FUN_1082c22ec();
        }
        lVar3 = *param_5;
        *param_5 = 0;
        func_0x0001082c3e54();
        FUN_1082feef8(ppppplVar6);
        if (lVar3 != 0) {
          func_0x0001082c3c9c();
        }
      }
      else {
        lVar3 = *(long *)(unaff_x20 + 0x10);
        func_0x0001082c3df0();
        (*extraout_x8_02)();
        if ((*(byte *)(lVar3 + 10) & 1) == 0) {
          lVar3 = *(long *)(unaff_x20 + 0x10);
          unaff_x24 = *(long ******)(*(long *)(*(long *)(unaff_x20 + 8) + 0x10) + 0xb8);
          if (lVar3 == 0) {
            lVar13 = 0;
          }
          else {
            func_0x0001082c3df0();
            (*extraout_x8_03)();
            lVar13 = lVar3;
          }
          func_0x0001082c3e34();
          FUN_10828aa4c(unaff_x24,lVar13,(uVar14 | *(byte *)(lVar3 + 0x90)) & 1);
          if (((((ulong)unaff_x24 & 1) == 0) &&
              (in_ZR = *(char *)(unaff_x20 + 0x60) == '\x01', (bool)in_ZR)) &&
             (ppppplVar9 = unaff_x24, func_0x0001082c3e34(),
             ((uVar14 | *(byte *)(ppppplVar9 + 0x12) ^ 0xffffffff) & 1) == 0)) {
            lVar3 = *(long *)(unaff_x20 + 0x10);
            ppppplVar9 = *(long ******)(*(long *)(*(long *)(unaff_x20 + 8) + 0x10) + 0xb8);
            if (lVar3 == 0) {
              lVar3 = 0;
            }
            else {
              func_0x0001082c3df0();
              (*extraout_x8_04)();
            }
            FUN_10828aa4c(ppppplVar9,lVar3,0);
            if (((ulong)ppppplVar9 & 1) != 0) {
              ppppplVar6 = ppppplVar9;
              func_0x0001082c404c();
              *(undefined1 *)((long)ppppplVar6 + 0xb1) = 1;
              unaff_x24 = ppppplVar9;
            }
          }
          if (((ulong)unaff_x24 & 1) != 0) {
            ppplStack_c0 = (long ***)0x0;
            if (*(long *)(unaff_x20 + 0x10) != 0) {
              do {
                func_0x0001082c3d3c();
                ppplStack_c0 = (long ***)extraout_x8_07;
              } while (extraout_w11_00 != 0);
            }
            uStack_b8 = *(undefined4 *)(unaff_x20 + 0x18);
            uStack_b4 = *(undefined2 *)(unaff_x20 + 0x1c);
            FUN_1082c3700(&uStack_148,&ppplStack_c0);
            ppppplVar6 = (long *****)&ppplStack_c0;
LAB_1082c1360:
            FUN_1082764bc();
            uStack_138 = 0;
            uStack_130 = (int)unaff_x24;
            goto LAB_1082c1490;
          }
          if ((uVar14 & *(byte *)(unaff_x20 + 0x60) & 1) == 0) {
LAB_1082c1370:
            lVar3 = *(long *)(unaff_x20 + 0x10);
          }
          else {
            plVar7 = *(long **)(unaff_x20 + 0x10);
            lVar3 = 0;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x18))();
              if (plVar7 != (long *)0x0) {
                func_0x0001082c3ef0();
                plVar7 = *(long **)(extraout_x8_05 + 0xb8);
                if (((*(byte *)((long)plVar7 + 0x19) >> 6 & 1) == 0) &&
                   ((**(code **)(*plVar7 + 0x98))(), (int)plVar7 != 0)) {
                  func_0x0001082c3e34();
                  if (((int)plVar7[0x115] != 0) || ((int)plVar7[0x13] != 0)) {
                    func_0x0001082c404c();
                  }
                  func_0x0001082c3e34();
                  *(undefined1 *)((long)plVar7 + 0xb1) = 1;
                  ppplStack_d0 = (long ***)0x0;
                  if (*(long *)(unaff_x20 + 0x10) != 0) {
                    do {
                      func_0x0001082c3d3c();
                      ppplStack_d0 = (long ***)extraout_x8_06;
                    } while (extraout_w11 != 0);
                  }
                  uStack_c8 = *(undefined4 *)(unaff_x20 + 0x18);
                  uStack_c4 = *(undefined2 *)(unaff_x20 + 0x1c);
                  FUN_1082c3700(&uStack_148,&ppplStack_d0);
                  ppppplVar6 = (long *****)&ppplStack_d0;
                  goto LAB_1082c1360;
                }
              }
              goto LAB_1082c1370;
            }
          }
          uVar16 = *(undefined4 *)(unaff_x20 + 0x30);
          func_0x0001082c3ef0();
          plVar7 = *(long **)(extraout_x8_08 + 0xb8);
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            func_0x0001082c3df0();
            (*extraout_x8_09)();
          }
          (**(code **)(*plVar7 + 0x60))(plVar7,lVar3,uVar16);
          uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
          FUN_1082b1dfc();
          uStack_e0 = 0;
          uStack_d8 = uVar8;
          if (((uint)plVar7 >> 8 & 1) == 0) {
            ppppplVar11 = ppppplVar11 + 4;
            func_0x00010812f180();
            pppplStack_f0 = (long ****)ppppplVar11;
            lStack_e8 = lVar3;
            func_0x0001082889e4(&pppplStack_f0,0xffffffff,0xffffffff);
            func_0x00010821b838(&uStack_e0,&pppplStack_f0);
          }
          uVar8 = uStack_e0;
          uStack_f8 = 0;
          if (*(long *)(unaff_x20 + 0x10) != 0) {
            do {
              func_0x0001082c3d3c();
              uStack_f8 = extraout_x8_10;
            } while (extraout_w11_01 != 0);
          }
          FUN_1082b1e54(&pppplStack_f0);
          FUN_1082764bc(&uStack_f8);
          pppplStack_108 = pppplStack_f0;
          pppplStack_f0 = (long ****)0x0;
          uStack_100 = *(undefined4 *)(unaff_x20 + 0x18);
          uStack_fc = *(undefined2 *)(unaff_x20 + 0x1c);
          uStack_110 = 0;
          FUN_1082c3700(&uStack_148,&pppplStack_108);
          FUN_1082764bc(&pppplStack_108);
          FUN_1082764bc(&uStack_110);
          in_ZR = ((ulong)plVar7 & 1) == 0;
          uStack_138 = 0;
          if ((bool)in_ZR) {
            uStack_138 = uVar8;
          }
          ppppplVar6 = &pppplStack_f0;
          uStack_130 = (int)unaff_x24;
          FUN_1082764bc();
          goto LAB_1082c1490;
        }
      }
      func_0x0001082c3f94();
    }
  }
  FUN_1082c3a7c(&ppplStack_b0);
LAB_1082c1524:
  func_0x0001082c3c60(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1082764bc(&ppplStack_d0);
  func_0x0001082c3f94();
  FUN_1082c3a7c(&ppplStack_b0);
  do {
    func_0x0001082c3d6c();
    FUN_10827a4f4(unaff_x24 + 4);
  } while( true );
}



/* Entry: 1082c15f0; end: 1082c19c3;  */

void FUN_1082c15f0(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,uint param_7,undefined8 *param_8,
                  undefined4 *param_9,undefined8 param_10,int param_11,int param_12,
                  undefined8 param_13,long *param_14)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  int extraout_w11;
  int extraout_w11_00;
  uint uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined8 extraout_d2;
  undefined8 extraout_var;
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 extraout_d3;
  undefined8 extraout_var_00;
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  uint in_stack_fffffffffffffe50;
  long lStack_170;
  long lStack_168;
  undefined4 uStack_160;
  undefined2 uStack_15c;
  ulong auStack_158 [3];
  undefined1 uStack_140;
  undefined8 uStack_13c;
  undefined8 uStack_134;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  int iStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auVar11 [16];
  undefined1 auVar9 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  auVar8 = NEON_fmov(0x3f800000,4);
  if ((*(byte *)(param_1 + 0x50) >> 1 & 1) == 0) {
    if (param_11 != 0) {
      func_0x0001082c3e54(*(undefined8 *)(param_1 + 8));
      func_0x0001082c4074();
      if ((extraout_x8 & 1) != 0) goto LAB_1082c170c;
    }
  }
  else if (param_11 != 0) {
LAB_1082c170c:
    FUN_1082d38bc(auStack_158);
    auVar14._8_8_ = extraout_var_00;
    auVar14._0_8_ = extraout_d3;
    uStack_84 = param_9[3];
    uStack_88 = (undefined4)*(undefined8 *)(param_9 + 1);
    auVar16._4_12_ = auVar14._4_12_;
    auVar16._0_4_ = uStack_88;
    uVar7 = (undefined4)((ulong)*(undefined8 *)(param_9 + 1) >> 0x20);
    auVar18._12_4_ = (undefined4)((ulong)extraout_var_00 >> 0x20);
    auVar18._0_8_ = auVar16._0_8_;
    auVar18._8_4_ = uVar7;
    auVar17._8_8_ = auVar18._8_8_;
    auVar17._4_4_ = uStack_88;
    auVar17._0_4_ = uStack_88;
    auVar19._0_12_ = auVar17._0_12_;
    auVar19._12_4_ = uVar7;
    auVar14 = NEON_ext(auVar19,auVar19,8,1);
    auVar20._0_12_ = auVar14._0_12_;
    auVar20._12_4_ = uStack_84;
    uStack_a0 = CONCAT44(*param_9,*param_9);
    uStack_90 = auVar20._8_8_;
    uStack_98 = auVar14._0_8_;
    uStack_70 = 0;
    puVar2 = auStack_158;
    uStack_80 = auVar8._0_8_;
    uStack_78 = auVar8._8_8_;
    FUN_108308520(puVar2,&uStack_a0);
    uVar5 = (uint)param_5;
    if (((ulong)puVar2 & 1) == 0) {
      uVar5 = 0;
    }
    uVar3 = (ulong)uVar5;
    auStack_158[0] = 0;
    auStack_158[1] = 0;
    auStack_158[2] = 0;
    uStack_140 = 1;
    uStack_13c = *param_8;
    uStack_134 = param_8[1];
    if (param_12 == 0) {
      uStack_b0 = 0;
      if (*param_3 != 0) {
        do {
          func_0x0001082c3d3c();
          uStack_b0 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      uStack_a8 = (undefined4)param_3[1];
      uStack_a4 = *(undefined2 *)((long)param_3 + 0xc);
      func_0x0001082c3ef0();
      FUN_1082cdf08(&uStack_a0,&uStack_b0,param_4,0x113254e20,uVar3 << 0x20,
                    param_6 & 0xffffffff | 0x100000000,param_9,
                    *(undefined8 *)(extraout_x8_02 + 0xb8),&UNK_10df12d54,
                    in_stack_fffffffffffffe50 & 0xffffff00);
      lVar4 = -0xa0;
      lVar6 = uStack_a0;
    }
    else {
      uStack_c0 = 0;
      if (*param_3 != 0) {
        do {
          func_0x0001082c3d3c();
          uStack_c0 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      uStack_b8 = (undefined4)param_3[1];
      uStack_b4 = *(undefined2 *)((long)param_3 + 0xc);
      FUN_1082cdd5c(&uStack_a0,&uStack_c0,param_4,0x113254e20);
      lVar4 = -0xb0;
      lVar6 = uStack_a0;
    }
    uStack_a0 = 0;
    FUN_1082764bc(&stack0xfffffffffffffff0 + lVar4);
    lVar4 = *param_14;
    if (lVar4 != 0) {
      *param_14 = 0;
      lStack_d0 = lVar4;
      lStack_c8 = lVar6;
      FUN_10828b6b8(&uStack_a0,&lStack_c8,&lStack_d0);
      lVar6 = uStack_a0;
      FUN_10827f5a4(&lStack_d0);
      if (lStack_c8 != 0) {
        func_0x0001082c3c9c();
      }
    }
    lStack_e0 = 0;
    lStack_d8 = lVar6;
    FUN_108287a24(&uStack_a0,&lStack_d8,&lStack_e0);
    lVar6 = uStack_a0;
    lVar4 = lStack_e0;
    uStack_a0 = 0;
    lStack_e0 = 0;
    if (lVar4 != 0) {
      func_0x0001082c3c9c();
    }
    lVar4 = lStack_d8;
    lStack_d8 = 0;
    if (lVar4 != 0) {
      func_0x0001082c3c9c();
    }
    lStack_e8 = lVar6;
    FUN_108288160(auStack_158,&lStack_e8);
    lVar4 = lStack_e8;
    lStack_e8 = 0;
    if (lVar4 != 0) {
      func_0x0001082c3c9c();
    }
    uVar3 = (ulong)param_7;
    uVar1 = uStack_140;
    if (param_7 != 3) {
      func_0x0001082b705c();
      auStack_158[0] = uVar3;
      uVar1 = 0;
      if (uVar3 == 0) {
        uVar1 = uStack_140;
      }
    }
    uStack_140 = uVar1;
    FUN_1082c0500(param_1,param_2,auStack_158,1,param_13,param_10,param_9);
    func_0x00010827ee54(auStack_158);
    return;
  }
  FUN_1082d38bc(auStack_158);
  auVar9._8_8_ = extraout_var;
  auVar9._0_8_ = extraout_d2;
  uStack_124 = *param_9;
  uStack_108 = param_9[3];
  uStack_10c = (undefined4)*(undefined8 *)(param_9 + 1);
  auVar10._4_12_ = auVar9._4_12_;
  auVar10._0_4_ = uStack_10c;
  uVar7 = (undefined4)((ulong)*(undefined8 *)(param_9 + 1) >> 0x20);
  auVar12._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
  auVar12._0_8_ = auVar10._0_8_;
  auVar12._8_4_ = uVar7;
  auVar11._8_8_ = auVar12._8_8_;
  auVar11._4_4_ = uStack_10c;
  auVar11._0_4_ = uStack_10c;
  auVar13._0_12_ = auVar11._0_12_;
  auVar13._12_4_ = uVar7;
  auVar14 = NEON_ext(auVar13,auVar13,8,1);
  auVar15._0_12_ = auVar14._0_12_;
  auVar15._12_4_ = uStack_108;
  uStack_114 = auVar15._8_8_;
  uStack_11c = auVar14._0_8_;
  uStack_f4 = 0;
  iStack_f0 = param_11;
  lStack_168 = *param_3;
  *param_3 = 0;
  uStack_160 = (undefined4)param_3[1];
  uStack_15c = *(undefined2 *)((long)param_3 + 0xc);
  lStack_170 = *param_14;
  *param_14 = 0;
  uStack_120 = uStack_124;
  uStack_104 = auVar8._0_8_;
  uStack_fc = auVar8._8_8_;
  FUN_1082c19c4(param_1,param_2,&lStack_168,param_4,&lStack_170,param_5,param_6,param_8,param_7);
  FUN_10827f5a4(&lStack_170);
  func_0x0001082c4034();
  return;
}



/* Entry: 1082c19c4; end: 1082c1b5f;  */

undefined8 *
FUN_1082c19c4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,long param_11,undefined8 param_12)

{
  uint uVar1;
  long lVar2;
  undefined1 in_ZR;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_120 [20];
  int iStack_10c;
  undefined1 auStack_108 [20];
  int iStack_f4;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_94;
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar6 = param_1;
  func_0x0001082c3cc8();
  uStack_68 = extraout_x8;
  func_0x0001082c3c74();
  if (((ulong)puVar6 & 1) == 0) {
    func_0x0001082c3cec(param_1[1]);
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    puVar6 = param_1;
    FUN_1082c0770(param_1,param_2,0,param_11,0);
    iVar3 = (int)puVar6;
    if (iVar3 != 0) {
      uStack_b4 = param_9;
      uStack_b0 = param_8;
      func_0x0001082c3f74(*(undefined4 *)(param_11 + 0x68));
      uStack_b8 = SUB84(puVar6,0);
      iVar4 = *(int *)(param_1 + 6);
      FUN_1082c1b60(iVar4);
      uVar8 = param_1[1];
      uStack_a0 = *param_3;
      *param_3 = 0;
      uStack_98 = *(undefined4 *)(param_3 + 1);
      uStack_94 = *(undefined2 *)((long)param_3 + 0xc);
      uStack_a8 = *param_5;
      *param_5 = 0;
      lStack_c8 = param_11;
      uStack_c0 = param_12;
      uStack_d0 = uStack_b4;
      uStack_cc = uStack_b8;
      FUN_1083086e4(&lStack_90,uVar8,&uStack_a0,param_4,&uStack_a8,param_6,param_7,uStack_b0,
                    iVar4 == 1);
      in_ZR = iVar3 == 2;
      uVar8 = 0;
      if (!(bool)in_ZR) {
        uVar8 = param_2;
      }
      uStack_70 = 0;
      FUN_1082c0f08(param_1,uVar8,&lStack_90,auStack_88);
      FUN_10827fb18(auStack_88);
      lVar2 = lStack_90;
      lStack_90 = 0;
      if (lVar2 != 0) {
        func_0x0001082c3c9c();
      }
      puVar6 = &uStack_a8;
      FUN_10827f5a4();
      func_0x0001082c3f30();
    }
  }
  func_0x0001082c3c60(uStack_68);
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  FUN_10827fb18(auStack_88);
  lVar2 = lStack_90;
  lStack_90 = 0;
  if (lVar2 != 0) {
    func_0x0001082c3c9c();
  }
  puVar5 = &uStack_a8;
  FUN_10827f5a4();
  func_0x0001082c3f30();
  func_0x0001082c3d6c();
  pcStack_d8 = FUN_1082c1b60;
  uStack_f0 = param_2;
  puStack_e8 = puVar6;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x0001082c3798(auStack_108);
  if (iStack_f4 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    func_0x0001082c3798(auStack_120,puVar5);
    uVar7 = 1;
    if ((int)puVar5 != 0x13) {
      uVar7 = 2;
    }
    uVar1 = 0;
    if (iStack_10c != 1) {
      uVar1 = uVar7;
    }
    puVar6 = (undefined8 *)(ulong)uVar1;
  }
  return puVar6;
}



/* Entry: 1082c1b60; end: 1082c1bbf;  */

undefined4 FUN_1082c1b60(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [20];
  int iStack_3c;
  undefined1 auStack_38 [20];
  int iStack_24;
  
  func_0x0001082c3798(auStack_38);
  if (iStack_24 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x0001082c3798(auStack_50,param_1);
    uVar2 = 1;
    if ((int)param_1 != 0x13) {
      uVar2 = 2;
    }
    uVar1 = 0;
    if (iStack_3c != 1) {
      uVar1 = uVar2;
    }
  }
  return uVar1;
}



/* Entry: 1082c1bc0; end: 1082c1dcf;  */

/* WARNING: Removing unreachable block (ram,0x0001082c21c4) */
/* WARNING: Removing unreachable block (ram,0x0001082c2068) */

void FUN_1082c1bc0(float param_1,float param_2,float param_3,float param_4,ulong param_5,
                  long *param_6,undefined8 param_7,undefined8 param_8,long *param_9,long *param_10,
                  ulong param_11)

{
  code *pcVar1;
  undefined1 in_ZR;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  uint uVar9;
  int iVar10;
  undefined1 auStack_368 [8];
  long lStack_360;
  long **pplStack_358;
  long *plStack_350;
  long *plStack_348;
  undefined8 uStack_340;
  long lStack_338;
  uint uStack_330;
  undefined1 uStack_32c;
  long *plStack_328;
  long *plStack_320;
  long lStack_318;
  long lStack_310;
  byte bStack_301;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined1 auStack_220 [24];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [16];
  undefined8 uStack_1c8;
  ulong uStack_148;
  
  uVar8 = param_11;
  func_0x0001082c408c();
  func_0x0001082c3c84();
  if (uVar8 == 0) {
    FUN_10827e874();
    param_11 = param_5;
  }
  uVar4 = *(ulong *)(unaff_x20 + 8);
  func_0x0001082c3cbc();
  if ((uVar4 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    func_0x0001083a630c();
                    /* WARNING: Could not recover jumptable at 0x0001082c1c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10df15a28)[param_11 & 0xffffffff] * 4 + 0x1082c1c44))();
    return;
  }
  func_0x0001082c3c60(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3e60();
  if (uStack_148 != 0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c400c();
  if (uStack_148 != 0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c3d6c();
  plVar7 = param_6;
  func_0x0001082c3ca8();
  uStack_1c8 = extraout_x8_00;
  func_0x0001082c3c74();
  if ((uStack_148 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      plVar7 = (long *)&UNK_10f484249;
      FUN_10827b938();
    }
    plVar5 = param_9;
    FUN_1082c36d0();
    if ((int)plVar5 != 0) {
      FUN_1082d8588(param_10);
      param_4 = param_4 * param_3 * param_2 * (param_1 - param_1);
      uVar4 = (ulong)(uint)param_4;
      in_ZR = !NAN(param_4) && !NAN(param_4);
      if (!NAN(param_4)) {
        if (param_6 == (long *)0x0) {
          param_6 = (long *)0x0;
          plVar7 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x90);
        }
        else {
          (**(code **)(*param_6 + 0x10))();
        }
        plStack_328 = param_6;
        plStack_320 = plVar7;
        if ((*(byte *)(unaff_x20 + 0x60) & 1) == 0) {
          func_0x0001082c405c();
          uVar9 = (uint)param_6;
        }
        else {
          uVar9 = 2;
        }
        lVar6 = *(long *)(unaff_x20 + 0x10);
        func_0x0001082c3e54(*(undefined8 *)(unaff_x20 + 8));
        if (lVar6 != 0) {
          func_0x0001082c3d4c();
        }
        lStack_338 = unaff_x20 + 0x50;
        pplStack_358 = &plStack_328;
        uStack_32c = 0;
        plVar7 = param_10 + 8;
        lStack_360 = lVar6;
        plStack_350 = param_9;
        plStack_348 = param_10;
        uStack_340 = param_7;
        uStack_330 = uVar9;
        FUN_10827cbe0();
        in_ZR = (char)param_10[7] == '\0';
        uVar2 = (uint)plVar7;
        if ((bool)in_ZR) {
          uVar2 = 1;
        }
        if ((uVar2 & 1) == 0) {
          func_0x0001082c4000();
          func_0x000108293e28();
          if (plVar7 == (long *)0x0) goto LAB_1082c1f10;
          plVar5 = plVar7;
          (**(code **)(*plVar7 + 0x30))(plVar7,auStack_368);
          in_ZR = (int)plVar5 == 2;
          if (!(bool)in_ZR) goto LAB_1082c1f10;
        }
        else {
LAB_1082c1f10:
          plVar7 = param_10;
          FUN_1082d88ec();
          if (((char)param_10[7] == '\0') && ((*(byte *)((long)param_10 + 0x3b) & 1) == 0))
          goto LAB_1082c1fb4;
          if ((((uVar8 & 1) != 0) || ((*(byte *)((long)param_10 + 0x8d) & 1) != 0)) &&
             (param_10[10] == 0)) {
            func_0x0001082c405c();
            uVar4 = 0;
            uStack_2f8 = 0;
            lStack_300 = 0;
            puStack_2f0 = (undefined *)0x0;
            plVar5 = param_10;
            FUN_1082d8e40(param_10,auStack_1d8,&bStack_301);
            iVar10 = (int)plVar7;
            if (((int)plVar5 != 0) && ((bStack_301 & 1) == 0)) {
              iVar3 = (int)param_10 + 0x40;
              func_0x0001083a630c();
              if ((iVar3 == 2) && (*(short *)((long)param_10 + 0x4c) != 1)) {
                in_ZR = iVar10 == 1;
                if (!(bool)in_ZR) {
                  uVar4 = (ulong)*(uint *)((long)param_10 + 0x44);
                  plVar7 = param_9;
                  FUN_108349c34(param_9,&uStack_200);
                  if (((ulong)plVar7 & 1) != 0) goto LAB_1082c1f3c;
                }
                func_0x0001082c3d20();
                FUN_1082c3450();
                goto LAB_1082c1fb4;
              }
            }
            plVar7 = param_10;
            FUN_1082d95fc(param_10,&lStack_300,&bStack_301);
            if (((int)plVar7 != 0) && ((bStack_301 & 1) == 0)) {
              in_ZR = 0;
              func_0x0001082c3d20();
              FUN_1082c0c88();
              goto LAB_1082c1fb4;
            }
            in_ZR = iVar10 == 1;
            if ((bool)in_ZR) {
              plVar7 = param_10 + 8;
              FUN_10828786c();
              if (((int)plVar7 != 0) && (plVar7 = param_9, FUN_10827a0d8(), (int)plVar7 != 0)) {
                func_0x0001082c3e54(*(undefined8 *)(unaff_x20 + 8));
                func_0x0001082c4074();
                if ((extraout_x8_01 & 1) == 0) {
                  uVar4 = 0;
                  uStack_1f8 = 0;
                  uStack_200 = 0;
                  uStack_1e8 = 0;
                  uStack_1f0 = 0;
                  plVar7 = param_10;
                  FUN_1082d96c0(param_10,&uStack_200);
                  if ((int)plVar7 != 0) {
                    plVar7 = *(long **)(unaff_x20 + 8);
                    FUN_1083057c4(&lStack_310,plVar7,param_7,param_9,&uStack_200);
                    if (lStack_310 != 0) {
                      lStack_318 = lStack_310;
                      lStack_310 = 0;
                      uStack_208 = 0;
                      FUN_1082c0f08();
                      FUN_10827fb18(auStack_220);
                      if (lStack_318 != 0) {
                        func_0x0001082c3c9c();
                      }
                      lVar6 = lStack_310;
                      lStack_310 = 0;
                      if (lVar6 != 0) {
                        func_0x0001082c3c9c();
                      }
                      goto LAB_1082c1fb4;
                    }
                  }
                }
              }
            }
          }
LAB_1082c1f3c:
          func_0x0001082c4000();
          func_0x0001082c3d58();
        }
        FUN_1082876e0(param_9);
        in_ZR = (float)uVar4 == 0.0;
        if (!(bool)in_ZR) {
          if (plVar7 == (long *)0x0) {
            if (param_10[10] != 0) {
              plVar7 = &lStack_300;
              FUN_1082d90c8(uVar4,plVar7,param_10,0);
              func_0x0001082c4068();
              func_0x0001082c4044();
              if ((char)param_10[7] == '\0') goto LAB_1082c1fb4;
              func_0x0001082c4000();
              func_0x0001082c3d58();
              if (plVar7 != (long *)0x0) goto LAB_1082c1f60;
            }
            plVar7 = param_10 + 8;
            FUN_10828769c();
            if ((int)plVar7 != 0) {
              plVar7 = &lStack_300;
              FUN_1082d90c8(uVar4,plVar7,param_10,1);
              func_0x0001082c4068();
              func_0x0001082c4044();
              if ((char)param_10[7] == '\0') goto LAB_1082c1fb4;
              func_0x0001082c4000();
              func_0x0001082c3d58();
              if (plVar7 != (long *)0x0) goto LAB_1082c1f60;
            }
            in_ZR = uVar9 == 2;
            if (1 < uVar9) {
              if (!(bool)in_ZR) goto LAB_1082c2214;
              uStack_330 = 1;
            }
            func_0x0001082c4000();
            FUN_108293d6c();
          }
LAB_1082c1f60:
          lStack_300 = **(long **)(*(long *)(unaff_x20 + 8) + 0x40);
          puStack_2f0 = &UNK_10df14cb4;
          uStack_2f8 = param_7;
          FUN_10828b040();
          (**(code **)(*plVar7 + 0x28))(plVar7,&lStack_300);
        }
      }
    }
  }
LAB_1082c1fb4:
  func_0x0001082c3c60(uStack_1c8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1082c2214:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082c2218);
  (*pcVar1)();
}



/* Entry: 1082c1dd0; end: 1082c225b;  */

/* WARNING: Removing unreachable block (ram,0x0001082c21c4) */
/* WARNING: Removing unreachable block (ram,0x0001082c2068) */

void FUN_1082c1dd0(float param_1,float param_2,float param_3,float param_4,ulong param_5,
                  long *param_6,undefined8 param_7,undefined8 param_8,long *param_9,long *param_10,
                  ulong param_11)

{
  code *pcVar1;
  undefined1 in_ZR;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined1 auStack_218 [8];
  long lStack_210;
  long **pplStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  uint uStack_1e0;
  undefined1 uStack_1dc;
  long *plStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  byte bStack_1b1;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  
  plVar6 = param_6;
  func_0x0001082c3ca8();
  uStack_78 = extraout_x8;
  func_0x0001082c3c74();
  if ((param_5 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      plVar6 = (long *)&UNK_10f484249;
      FUN_10827b938();
    }
    plVar4 = param_9;
    FUN_1082c36d0();
    if ((int)plVar4 != 0) {
      FUN_1082d8588(param_10);
      param_4 = param_4 * param_3 * param_2 * (param_1 - param_1);
      uVar9 = (ulong)(uint)param_4;
      in_ZR = !NAN(param_4) && !NAN(param_4);
      if (!NAN(param_4)) {
        if (param_6 == (long *)0x0) {
          param_6 = (long *)0x0;
          plVar6 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x90);
        }
        else {
          (**(code **)(*param_6 + 0x10))();
        }
        plStack_1d8 = param_6;
        plStack_1d0 = plVar6;
        if ((*(byte *)(unaff_x20 + 0x60) & 1) == 0) {
          func_0x0001082c405c();
          uVar7 = (uint)param_6;
        }
        else {
          uVar7 = 2;
        }
        lVar5 = *(long *)(unaff_x20 + 0x10);
        func_0x0001082c3e54(*(undefined8 *)(unaff_x20 + 8));
        if (lVar5 != 0) {
          func_0x0001082c3d4c();
        }
        lStack_1e8 = unaff_x20 + 0x50;
        pplStack_208 = &plStack_1d8;
        uStack_1dc = 0;
        plVar6 = param_10 + 8;
        lStack_210 = lVar5;
        plStack_200 = param_9;
        plStack_1f8 = param_10;
        uStack_1f0 = param_7;
        uStack_1e0 = uVar7;
        FUN_10827cbe0();
        in_ZR = (char)param_10[7] == '\0';
        uVar2 = (uint)plVar6;
        if ((bool)in_ZR) {
          uVar2 = 1;
        }
        if ((uVar2 & 1) == 0) {
          func_0x0001082c4000();
          func_0x000108293e28();
          if (plVar6 == (long *)0x0) goto LAB_1082c1f10;
          plVar4 = plVar6;
          (**(code **)(*plVar6 + 0x30))(plVar6,auStack_218);
          in_ZR = (int)plVar4 == 2;
          if (!(bool)in_ZR) goto LAB_1082c1f10;
        }
        else {
LAB_1082c1f10:
          plVar6 = param_10;
          FUN_1082d88ec();
          if (((char)param_10[7] == '\0') && ((*(byte *)((long)param_10 + 0x3b) & 1) == 0))
          goto LAB_1082c1fb4;
          if ((((param_11 & 1) != 0) || ((*(byte *)((long)param_10 + 0x8d) & 1) != 0)) &&
             (param_10[10] == 0)) {
            func_0x0001082c405c();
            uVar9 = 0;
            uStack_1a8 = 0;
            lStack_1b0 = 0;
            puStack_1a0 = (undefined *)0x0;
            plVar4 = param_10;
            FUN_1082d8e40(param_10,auStack_88,&bStack_1b1);
            iVar8 = (int)plVar6;
            if (((int)plVar4 != 0) && ((bStack_1b1 & 1) == 0)) {
              iVar3 = (int)param_10 + 0x40;
              func_0x0001083a630c();
              if ((iVar3 == 2) && (*(short *)((long)param_10 + 0x4c) != 1)) {
                in_ZR = iVar8 == 1;
                if (!(bool)in_ZR) {
                  uVar9 = (ulong)*(uint *)((long)param_10 + 0x44);
                  plVar6 = param_9;
                  FUN_108349c34(param_9,&uStack_b0);
                  if (((ulong)plVar6 & 1) != 0) goto LAB_1082c1f3c;
                }
                func_0x0001082c3d20();
                FUN_1082c3450();
                goto LAB_1082c1fb4;
              }
            }
            plVar6 = param_10;
            FUN_1082d95fc(param_10,&lStack_1b0,&bStack_1b1);
            if (((int)plVar6 != 0) && ((bStack_1b1 & 1) == 0)) {
              in_ZR = 0;
              func_0x0001082c3d20();
              FUN_1082c0c88();
              goto LAB_1082c1fb4;
            }
            in_ZR = iVar8 == 1;
            if ((bool)in_ZR) {
              plVar6 = param_10 + 8;
              FUN_10828786c();
              if (((int)plVar6 != 0) && (plVar6 = param_9, FUN_10827a0d8(), (int)plVar6 != 0)) {
                func_0x0001082c3e54(*(undefined8 *)(unaff_x20 + 8));
                func_0x0001082c4074();
                if ((extraout_x8_00 & 1) == 0) {
                  uVar9 = 0;
                  uStack_a8 = 0;
                  uStack_b0 = 0;
                  uStack_98 = 0;
                  uStack_a0 = 0;
                  plVar6 = param_10;
                  FUN_1082d96c0(param_10,&uStack_b0);
                  if ((int)plVar6 != 0) {
                    plVar6 = *(long **)(unaff_x20 + 8);
                    FUN_1083057c4(&lStack_1c0,plVar6,param_7,param_9,&uStack_b0);
                    if (lStack_1c0 != 0) {
                      lStack_1c8 = lStack_1c0;
                      lStack_1c0 = 0;
                      uStack_b8 = 0;
                      FUN_1082c0f08();
                      FUN_10827fb18(auStack_d0);
                      if (lStack_1c8 != 0) {
                        func_0x0001082c3c9c();
                      }
                      lVar5 = lStack_1c0;
                      lStack_1c0 = 0;
                      if (lVar5 != 0) {
                        func_0x0001082c3c9c();
                      }
                      goto LAB_1082c1fb4;
                    }
                  }
                }
              }
            }
          }
LAB_1082c1f3c:
          func_0x0001082c4000();
          func_0x0001082c3d58();
        }
        FUN_1082876e0(param_9);
        in_ZR = (float)uVar9 == 0.0;
        if (!(bool)in_ZR) {
          if (plVar6 == (long *)0x0) {
            if (param_10[10] != 0) {
              plVar6 = &lStack_1b0;
              FUN_1082d90c8(uVar9,plVar6,param_10,0);
              func_0x0001082c4068();
              func_0x0001082c4044();
              if ((char)param_10[7] == '\0') goto LAB_1082c1fb4;
              func_0x0001082c4000();
              func_0x0001082c3d58();
              if (plVar6 != (long *)0x0) goto LAB_1082c1f60;
            }
            plVar6 = param_10 + 8;
            FUN_10828769c();
            if ((int)plVar6 != 0) {
              plVar6 = &lStack_1b0;
              FUN_1082d90c8(uVar9,plVar6,param_10,1);
              func_0x0001082c4068();
              func_0x0001082c4044();
              if ((char)param_10[7] == '\0') goto LAB_1082c1fb4;
              func_0x0001082c4000();
              func_0x0001082c3d58();
              if (plVar6 != (long *)0x0) goto LAB_1082c1f60;
            }
            in_ZR = uVar7 == 2;
            if (1 < uVar7) {
              if (!(bool)in_ZR) goto LAB_1082c2214;
              uStack_1e0 = 1;
            }
            func_0x0001082c4000();
            FUN_108293d6c();
          }
LAB_1082c1f60:
          lStack_1b0 = **(long **)(*(long *)(unaff_x20 + 8) + 0x40);
          puStack_1a0 = &UNK_10df14cb4;
          uStack_1a8 = param_7;
          FUN_10828b040();
          (**(code **)(*plVar6 + 0x28))(plVar6,&lStack_1b0);
        }
      }
    }
  }
LAB_1082c1fb4:
  func_0x0001082c3c60(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1082c2214:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082c2218);
  (*pcVar1)();
}



/* Entry: 1082c225c; end: 1082c22db;  */

long FUN_1082c225c(void)

{
  long lStack_28;
  
  FUN_1082c3920(&lStack_28);
  func_0x0001082c3a70(lStack_28);
  return lStack_28 + 8;
}



/* Entry: 1082c22dc; end: 1082c22eb;  */

byte FUN_1082c22dc(long param_1)

{
  return (*(byte *)(param_1 + 0x61) ^ 0xff) & 1;
}



/* Entry: 1082c22ec; end: 1082c2357;  */

/* WARNING: Removing unreachable block (ram,0x0001082c2398) */
/* WARNING: Removing unreachable block (ram,0x0001082c23dc) */

void FUN_1082c22ec(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  long extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar8;
  undefined8 uStack_128;
  ulong uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  bVar1 = *(byte *)(param_5 + 0x61);
  *(undefined1 *)(param_5 + 0x61) = 1;
  if ((bVar1 & 1) == 0) {
    lVar4 = *(long *)(param_5 + 0x10);
    func_0x0001082c3d4c();
    *(undefined1 *)(lVar4 + 9) = 1;
    func_0x0001082c3e54(*(undefined8 *)(param_5 + 8));
    if ((*(byte *)(extraout_x8 + 0x1b) >> 5 & 1) != 0) {
      puVar7 = &uStack_c0;
      func_0x0001082c3cc8();
      uStack_38 = extraout_x8_00;
      FUN_1082c22ec();
      uVar5 = *(undefined8 *)(param_5 + 0x10);
      FUN_1082b1dfc();
      uStack_68 = 0;
      lVar4 = *(long *)(param_5 + 8);
      uVar8 = *(ulong *)(*(long *)(*(long *)(lVar4 + 0x10) + 0xb8) + 0x18);
      uStack_70 = uVar5;
      uStack_60 = uVar5;
      if (((uint)uVar8 >> 0x1d & 1) == 0) {
        uVar3 = (uVar8 & 0xc000000) != 0;
        FUN_1082eed88(&uStack_c0,lVar4,&uStack_70,0);
        FUN_1082c493c(param_5,&uStack_c0);
        uVar8 = uStack_c0;
        uStack_c0 = 0;
        if (uVar8 != 0) {
          func_0x0001082c3c9c();
        }
      }
      else {
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_b8 = 0x3f800000;
        uStack_7c = 0x3f8000003f800000;
        uStack_84 = 0x3f8000003f800000;
        ppuStack_a0 = &PTR_PTR_110a34ca8;
        uStack_88 = 0;
        uVar3 = 1;
        FUN_10817500c(&uStack_68);
        uStack_b4 = param_2;
        uStack_b0 = param_3;
        uStack_ac = param_4;
        FUN_1082fadbc(&lStack_a8,lVar4,&ppuStack_a0,0x113254e20,&uStack_b8,&UNK_10df14d12);
        uStack_40 = 0;
        puVar7 = (ulong *)0x0;
        FUN_1082c0f08(param_5,0,&lStack_a8,auStack_58);
        FUN_10827fb18(auStack_58);
        if (lStack_a8 != 0) {
          func_0x0001082c3c9c();
        }
        func_0x00010827ee54();
      }
      func_0x0001082c3c60(uStack_38);
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      uVar8 = uStack_c0;
      uStack_c0 = 0;
      if (uVar8 != 0) {
        func_0x0001082c3c9c();
      }
      func_0x0001082c3d6c();
      func_0x0001082c408c();
      uVar6 = uVar8;
      func_0x0001082c3c74();
      if ((uVar6 & 1) == 0) {
        puVar2 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
        func_0x0001082c3cec(*(undefined8 *)(uVar8 + 8));
        if ((bool)uVar3) {
          FUN_10827b938();
        }
        FUN_10827c39c(uVar8,1);
        FUN_1082c1b60();
        uVar5 = *(undefined8 *)(uVar8 + 8);
        uStack_128 = *puVar2;
        *puVar2 = 0;
        FUN_108308d4c(uVar8,puVar7,uVar5);
        FUN_10827f5a4(&uStack_128);
      }
      return;
    }
    FUN_1082c41b8();
    *(undefined4 *)(param_5 + 0xac) = 1;
  }
  return;
}



/* Entry: 1082c2358; end: 1082c2543;  */

void FUN_1082c2358(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined1 *param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  undefined8 uStack_128;
  ulong uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar6 = &uStack_c0;
  func_0x0001082c3cc8();
  uStack_38 = extraout_x8;
  FUN_1082c22ec();
  uVar3 = *(undefined8 *)(param_5 + 0x10);
  FUN_1082b1dfc();
  uStack_68 = 0;
  uStack_70 = uVar3;
  uStack_60 = uVar3;
  if (param_6 != (undefined1 *)0x0) {
    puVar4 = &uStack_70;
    FUN_108287e44(puVar4,param_6);
    if ((int)puVar4 == 0) goto LAB_1082c2488;
  }
  lVar8 = *(long *)(param_5 + 8);
  uVar7 = *(ulong *)(*(long *)(*(long *)(lVar8 + 0x10) + 0xb8) + 0x18);
  if (((uint)uVar7 >> 0x1d & 1) == 0) {
    if ((int)uStack_68 < 1 && uStack_68._4_4_ < 1) {
      if ((int)uStack_60 < (int)uStack_70) goto LAB_1082c23dc;
      bVar2 = (uVar7 & 0xc000000) != 0;
      in_ZR = bVar2 && uStack_60._4_4_ == uStack_70._4_4_;
      if (bVar2 && uStack_60._4_4_ < uStack_70._4_4_) goto LAB_1082c23e4;
    }
    else {
LAB_1082c23dc:
      in_ZR = true;
      if ((uVar7 & 0xc000000) != 0) goto LAB_1082c23e4;
    }
    FUN_1082eed88(&uStack_c0,lVar8,&uStack_70,param_7);
    FUN_1082c493c(param_5,&uStack_c0);
    uVar7 = uStack_c0;
    uStack_c0 = 0;
    param_6 = (undefined1 *)puVar6;
    if (uVar7 != 0) {
      func_0x0001082c3c9c();
      param_6 = (undefined1 *)puVar6;
    }
  }
  else {
LAB_1082c23e4:
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_b8 = 0x3f800000;
    uStack_7c = 0x3f8000003f800000;
    uStack_84 = 0x3f8000003f800000;
    ppuStack_a0 = &PTR_PTR_110a34ca8;
    uStack_88 = 0;
    in_ZR = (int)param_7 == 0;
    puVar1 = &UNK_10df14cf6;
    if ((bool)in_ZR) {
      puVar1 = &UNK_10df14d12;
    }
    FUN_10817500c(&uStack_68);
    uStack_b4 = param_2;
    uStack_b0 = param_3;
    uStack_ac = param_4;
    FUN_1082fadbc(&lStack_a8,lVar8,&ppuStack_a0,0x113254e20,&uStack_b8,puVar1);
    uStack_40 = 0;
    param_6 = (undefined1 *)0x0;
    FUN_1082c0f08(param_5,0,&lStack_a8,auStack_58);
    FUN_10827fb18(auStack_58);
    if (lStack_a8 != 0) {
      func_0x0001082c3c9c();
    }
    func_0x00010827ee54();
  }
LAB_1082c2488:
  func_0x0001082c3c60(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = uStack_c0;
  uStack_c0 = 0;
  if (uVar7 != 0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c3d6c();
  func_0x0001082c408c();
  uVar5 = uVar7;
  func_0x0001082c3c74();
  if ((uVar5 & 1) == 0) {
    puVar4 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
    func_0x0001082c3cec(*(undefined8 *)(uVar7 + 8));
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    FUN_10827c39c(uVar7,1);
    FUN_1082c1b60();
    uVar3 = *(undefined8 *)(uVar7 + 8);
    uStack_128 = *puVar4;
    *puVar4 = 0;
    FUN_108308d4c(uVar7,param_6,uVar3);
    FUN_10827f5a4(&uStack_128);
  }
  return;
}



/* Entry: 1082c2544; end: 1082c263f;  */

void FUN_1082c2544(ulong param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *in_stack_00000010;
  undefined8 uStack_68;
  
  func_0x0001082c408c();
  uVar1 = param_1;
  func_0x0001082c3c74();
  if ((uVar1 & 1) == 0) {
    func_0x0001082c3cec(*(undefined8 *)(param_1 + 8));
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    FUN_10827c39c(param_1,1);
    FUN_1082c1b60();
    uVar2 = *(undefined8 *)(param_1 + 8);
    uStack_68 = *in_stack_00000010;
    *in_stack_00000010 = 0;
    FUN_108308d4c(param_1,param_2,uVar2);
    FUN_10827f5a4(&uStack_68);
  }
  return;
}



/* Entry: 1082c2640; end: 1082c2797;  */

void FUN_1082c2640(float param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined8 *param_6,float **param_7,float **param_8,long *param_9,long *param_10,
                  undefined8 *param_11,undefined8 *param_12,undefined8 param_13)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float **ppfVar5;
  float **ppfVar6;
  float **ppfVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w11;
  long unaff_x20;
  undefined8 unaff_x26;
  float fVar15;
  float fVar16;
  float *pfStack_1d8;
  float *apfStack_1d0 [4];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  float **ppfStack_188;
  long *plStack_180;
  long *plStack_178;
  float *pfStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  float *pfStack_128;
  undefined8 uStack_120;
  long alStack_118 [3];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  float *pfStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  float *pfStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppfVar5 = &pfStack_a0;
  ppfVar6 = param_8;
  plVar8 = param_9;
  plVar10 = param_10;
  puVar12 = param_11;
  puVar14 = param_12;
  func_0x0001082c3c84();
  uStack_58 = extraout_x8;
  func_0x0001082c3c74();
  if (((ulong)param_6 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    if (((ulong)param_12 & 1) == 0) {
      uStack_80 = 0;
      if (*(long *)(unaff_x20 + 0x28) != 0) {
        do {
          func_0x0001082c3d3c();
          uStack_80 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
    }
    else {
      uStack_80 = 0;
    }
    if ((*(byte *)(unaff_x20 + 0x60) & 1) == 0) {
      func_0x0001082c3eac();
      puVar12 = param_6;
      uStack_98 = uStack_80;
    }
    else {
      puVar12 = (undefined8 *)0x2;
      uStack_98 = uStack_80;
    }
    uVar1 = *(undefined8 *)(unaff_x20 + 8);
    lStack_90 = *param_10;
    *param_10 = 0;
    uStack_80 = 0;
    puVar14 = &uStack_98;
    FUN_1082f49d0(&pfStack_88,uVar1,param_8,&lStack_90,param_11,param_9,puVar12,puVar14);
    FUN_10827f5a4(&uStack_98);
    func_0x00010827f564(&lStack_90);
    pfStack_a0 = pfStack_88;
    uStack_60 = 0;
    plVar8 = alStack_78;
    func_0x0001082c3d14();
    func_0x0001082c3f9c();
    param_7 = param_8;
    ppfVar6 = ppfVar5;
    plVar10 = param_9;
    if (pfStack_a0 != (float *)0x0) {
      func_0x0001082c3c9c();
      param_7 = param_8;
      ppfVar6 = ppfVar5;
      plVar10 = param_9;
    }
    FUN_10827f5a4();
  }
  func_0x0001082c3c60(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = 0;
  FUN_10827f5a4();
  func_0x0001082c3d6c();
  ppfVar5 = ppfVar6;
  plVar9 = plVar8;
  plVar11 = plVar10;
  puVar13 = puVar12;
  func_0x0001082c3c84();
  uStack_f8 = extraout_x8_01;
  func_0x0001082c3c74();
  if ((uVar2 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    param_12 = *(undefined8 **)(*plVar10 + 0x90);
    FUN_10828b0a8(&uStack_120,param_12,*(undefined4 *)(*plVar10 + 0x98),
                  *(undefined8 *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x20 + 0x34));
    if ((*(byte *)(unaff_x20 + 0x60) & 1) == 0) {
      func_0x0001082c3eac();
    }
    else {
      param_12 = (undefined8 *)0x2;
    }
    unaff_x26 = *(undefined8 *)(unaff_x20 + 8);
    func_0x00010827f824(auStack_138,puVar12);
    uStack_140 = uStack_120;
    uStack_120 = 0;
    puVar14 = &uStack_140;
    param_7 = ppfVar6;
    plVar11 = plVar8;
    puVar13 = param_12;
    FUN_1082f48f4(&pfStack_128,unaff_x26,ppfVar6,plVar10,auStack_138,plVar8,param_12,puVar14);
    FUN_10827f5a4(&uStack_140);
    FUN_10827f4d4(auStack_138);
    pfStack_148 = pfStack_128;
    uStack_100 = 0;
    ppfVar5 = &pfStack_148;
    plVar9 = alStack_118;
    func_0x0001082c3d14();
    func_0x0001082c3f84();
    if (pfStack_148 != (float *)0x0) {
      func_0x0001082c3c9c();
    }
    FUN_10827f5a4();
  }
  func_0x0001082c3c60(uStack_f8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_120;
  FUN_10827f5a4();
  func_0x0001082c3d6c();
  ppfVar7 = ppfVar5;
  uStack_1a0 = unaff_x26;
  puStack_198 = param_12;
  puStack_190 = puVar12;
  ppfStack_188 = ppfVar6;
  plStack_180 = plVar10;
  plStack_178 = plVar8;
  func_0x0001082c3c84();
  uStack_1a8 = extraout_x8_02;
  func_0x0001082c3c74();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    func_0x0001082c3eac();
    FUN_1082f2e48(apfStack_1d0,*(undefined8 *)(unaff_x20 + 8),ppfVar5,plVar9,puVar3,plVar11,puVar13,
                  puVar14,param_13);
    pfStack_1d8 = apfStack_1d0[0];
    uStack_1b0 = 0;
    ppfVar7 = &pfStack_1d8;
    func_0x0001082c3d14();
    func_0x0001082c3e98();
    param_7 = ppfVar5;
    if (pfStack_1d8 != (float *)0x0) {
      func_0x0001082c3c9c();
      param_7 = ppfVar5;
    }
  }
  func_0x0001082c3c60(uStack_1a8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3e60();
  pfVar4 = pfStack_1d8;
  if (pfStack_1d8 != (float *)0x0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c3d6c();
  fVar15 = param_1 / (param_4 - param_1);
  fVar16 = 0.95;
  if (fVar15 <= 0.95) {
    fVar16 = fVar15;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  *pfVar4 = param_5 * fVar16;
  param_4 = param_4 / (param_4 - param_1);
  fVar15 = 1.95;
  if (param_4 <= 1.95) {
    fVar15 = param_4;
  }
  if (fVar15 <= 1.0) {
    fVar15 = 1.0;
  }
  *(float *)param_7 = fVar15;
  *(float *)ppfVar7 = -(fVar16 * param_2);
  *(float *)((long)ppfVar7 + 4) = -(fVar16 * param_3);
  return;
}



/* Entry: 1082c2798; end: 1082c2913;  */

void FUN_1082c2798(float param_1,float param_2,float param_3,float param_4,float param_5,
                  ulong param_6,float **param_7,float **param_8,long *param_9,long *param_10,
                  undefined8 param_11,undefined8 *param_12,undefined8 param_13)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  float *pfVar2;
  float **ppfVar3;
  float **ppfVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  float fVar8;
  float fVar9;
  float *pfStack_138;
  float *apfStack_130 [4];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float **ppfStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  float *pfStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  float *pfStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppfVar3 = param_8;
  plVar5 = param_9;
  plVar6 = param_10;
  uVar7 = param_11;
  func_0x0001082c3c84();
  uStack_58 = extraout_x8;
  func_0x0001082c3c74();
  if ((param_6 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    unaff_x25 = *(undefined8 *)(*param_10 + 0x90);
    FUN_10828b0a8(&uStack_80,unaff_x25,*(undefined4 *)(*param_10 + 0x98),
                  *(undefined8 *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x20 + 0x34));
    if ((*(byte *)(unaff_x20 + 0x60) & 1) == 0) {
      func_0x0001082c3eac();
    }
    else {
      unaff_x25 = 2;
    }
    unaff_x26 = *(undefined8 *)(unaff_x20 + 8);
    func_0x00010827f824(auStack_98,param_11);
    uStack_a0 = uStack_80;
    uStack_80 = 0;
    param_12 = &uStack_a0;
    param_7 = param_8;
    plVar6 = param_9;
    uVar7 = unaff_x25;
    FUN_1082f48f4(&pfStack_88,unaff_x26,param_8,param_10,auStack_98,param_9,unaff_x25,param_12);
    FUN_10827f5a4(&uStack_a0);
    FUN_10827f4d4(auStack_98);
    pfStack_a8 = pfStack_88;
    uStack_60 = 0;
    ppfVar3 = &pfStack_a8;
    plVar5 = alStack_78;
    func_0x0001082c3d14();
    func_0x0001082c3f84();
    if (pfStack_a8 != (float *)0x0) {
      func_0x0001082c3c9c();
    }
    FUN_10827f5a4();
  }
  func_0x0001082c3c60(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar1 = &uStack_80;
    FUN_10827f5a4();
    func_0x0001082c3d6c();
    ppfVar4 = ppfVar3;
    uStack_100 = unaff_x26;
    uStack_f8 = unaff_x25;
    uStack_f0 = param_11;
    ppfStack_e8 = param_8;
    plStack_e0 = param_10;
    plStack_d8 = param_9;
    func_0x0001082c3c84();
    uStack_108 = extraout_x8_00;
    func_0x0001082c3c74();
    if (((ulong)puVar1 & 1) == 0) {
      func_0x0001082c3cd8();
      if ((bool)in_ZR) {
        FUN_10827b938();
      }
      func_0x0001082c3eac();
      FUN_1082f2e48(apfStack_130,*(undefined8 *)(unaff_x20 + 8),ppfVar3,plVar5,puVar1,plVar6,uVar7,
                    param_12,param_13);
      pfStack_138 = apfStack_130[0];
      uStack_110 = 0;
      ppfVar4 = &pfStack_138;
      func_0x0001082c3d14();
      func_0x0001082c3e98();
      param_7 = ppfVar3;
      if (pfStack_138 != (float *)0x0) {
        func_0x0001082c3c9c();
        param_7 = ppfVar3;
      }
    }
    func_0x0001082c3c60(uStack_108);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001082c3e60();
    pfVar2 = pfStack_138;
    if (pfStack_138 != (float *)0x0) {
      func_0x0001082c3c9c();
    }
    func_0x0001082c3d6c();
    fVar8 = param_1 / (param_4 - param_1);
    fVar9 = 0.95;
    if (fVar8 <= 0.95) {
      fVar9 = fVar8;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    *pfVar2 = param_5 * fVar9;
    param_4 = param_4 / (param_4 - param_1);
    fVar8 = 1.95;
    if (param_4 <= 1.95) {
      fVar8 = param_4;
    }
    if (fVar8 <= 1.0) {
      fVar8 = 1.0;
    }
    *(float *)param_7 = fVar8;
    *(float *)ppfVar4 = -(fVar9 * param_2);
    *(float *)((long)ppfVar4 + 4) = -(fVar9 * param_3);
    return;
  }
  return;
}



/* Entry: 1082c2914; end: 1082c29f3;  */

void FUN_1082c2914(float param_1,float param_2,float param_3,float param_4,float param_5,
                  ulong param_6,float **param_7,float **param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined1 in_ZR;
  float *pfVar1;
  float **ppfVar2;
  undefined8 extraout_x8;
  long unaff_x20;
  float fVar3;
  float fVar4;
  float *pfStack_88;
  float *apfStack_80 [4];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppfVar2 = param_8;
  func_0x0001082c3c84();
  uStack_58 = extraout_x8;
  func_0x0001082c3c74();
  if ((param_6 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    func_0x0001082c3eac();
    FUN_1082f2e48(apfStack_80,*(undefined8 *)(unaff_x20 + 8),param_8,param_9,param_6,param_10,
                  param_11,param_12,param_13);
    pfStack_88 = apfStack_80[0];
    uStack_60 = 0;
    ppfVar2 = &pfStack_88;
    func_0x0001082c3d14();
    func_0x0001082c3e98();
    param_7 = param_8;
    if (pfStack_88 != (float *)0x0) {
      func_0x0001082c3c9c();
      param_7 = param_8;
    }
  }
  func_0x0001082c3c60(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3e60();
  pfVar1 = pfStack_88;
  if (pfStack_88 != (float *)0x0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c3d6c();
  fVar3 = param_1 / (param_4 - param_1);
  fVar4 = 0.95;
  if (fVar3 <= 0.95) {
    fVar4 = fVar3;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *pfVar1 = param_5 * fVar4;
  param_4 = param_4 / (param_4 - param_1);
  fVar3 = 1.95;
  if (param_4 <= 1.95) {
    fVar3 = param_4;
  }
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  *(float *)param_7 = fVar3;
  *(float *)ppfVar2 = -(fVar4 * param_2);
  *(float *)((long)ppfVar2 + 4) = -(fVar4 * param_3);
  return;
}



/* Entry: 1082c29f4; end: 1082c2a4b;  */

void FUN_1082c29f4(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1 / (param_4 - param_1);
  fVar2 = 0.95;
  if (fVar1 <= 0.95) {
    fVar2 = fVar1;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *param_6 = param_5 * fVar2;
  param_4 = param_4 / (param_4 - param_1);
  fVar1 = 1.95;
  if (param_4 <= 1.95) {
    fVar1 = param_4;
  }
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  *param_7 = fVar1;
  *param_8 = -(fVar2 * param_2);
  param_8[1] = -(fVar2 * param_3);
  return;
}



/* Entry: 1082c2a4c; end: 1082c2bdb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1082c2a4c(undefined8 param_1,undefined8 param_2,float param_3,float param_4,ulong param_5,
                  long *******param_6,long *******param_7,long ******param_8,float *******param_9,
                  float *******param_10,long *******param_11,float *******param_12)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  long *****ppppplVar5;
  ulong uVar6;
  long *******ppppppplVar7;
  float *******pppppppfVar8;
  long lVar9;
  float ******ppppppfVar10;
  long ******pppppplVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long ******pppppplVar15;
  float *******pppppppfVar16;
  float *******pppppppfVar17;
  float *******pppppppfVar18;
  float *******pppppppfVar19;
  float *******pppppppfVar20;
  float *******pppppppfVar21;
  long *******ppppppplVar22;
  uint uVar23;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  long *******unaff_x19;
  long unaff_x20;
  int iVar24;
  float ******unaff_x27;
  long *******unaff_x28;
  float fVar25;
  float fVar26;
  long lStack_5a8;
  long ******pppppplStack_5a0;
  long lStack_598;
  float *******pppppppfStack_590;
  float *******pppppppfStack_588;
  long ******pppppplStack_580;
  float *******pppppppfStack_578;
  float *******pppppppfStack_570;
  code *pcStack_568;
  float *******pppppppfStack_560;
  long ******pppppplStack_558;
  float ******ppppppfStack_550;
  long ******pppppplStack_548;
  float ******ppppppfStack_540;
  undefined6 uStack_538;
  undefined2 uStack_532;
  float *******pppppppfStack_530;
  float *******pppppppfStack_528;
  float *******pppppppfStack_520;
  float *******pppppppfStack_518;
  long *******ppppppplStack_510;
  long ******pppppplStack_508;
  undefined8 uStack_500;
  long *******ppppppplStack_4f8;
  long *******ppppppplStack_4f0;
  float *******pppppppfStack_4e8;
  long *******ppppppplStack_4e0;
  undefined8 uStack_4d8;
  long *******ppppppplStack_4d0;
  long *******ppppppplStack_4c8;
  long ******pppppplStack_4c0;
  float *******pppppppfStack_4b8;
  long *******ppppppplStack_4b0;
  float *******pppppppfStack_4a8;
  float *******pppppppfStack_4a0;
  float *******pppppppfStack_498;
  uint uStack_490;
  char cStack_48c;
  undefined1 auStack_3f0 [24];
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long ******pppppplStack_3b0;
  float *******pppppppfStack_3a8;
  long *******ppppppplStack_3a0;
  long *******ppppppplStack_398;
  long ******pppppplStack_370;
  long *******ppppppplStack_368;
  float *******pppppppfStack_360;
  long *******ppppppplStack_358;
  long *******ppppppplStack_350;
  float *******pppppppfStack_348;
  long ******pppppplStack_340;
  float *******pppppppfStack_338;
  long ****pppplStack_330;
  float *******pppppppfStack_328;
  float ******ppppppfStack_320;
  ulong uStack_318;
  undefined8 uStack_308;
  undefined8 uStack_240;
  float ****ppppfStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_e8;
  long ******pppppplStack_e0;
  float *******pppppppfStack_d8;
  float *******pppppppfStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  float *******pppppppfStack_b8;
  long **pplStack_a0;
  code *pcStack_98;
  float ******ppppppfStack_88;
  float ******ppppppfStack_80;
  float ******ppppppfStack_78;
  byte bStack_6a;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppppppplVar12 = param_7;
  pppppplVar11 = param_8;
  pppppppfVar17 = param_9;
  pppppppfVar8 = param_10;
  ppppppplVar7 = param_11;
  pppppppfVar16 = param_12;
  func_0x0001082c3c84();
  uStack_58 = extraout_x8_02;
  func_0x0001082c3c74();
  if ((param_5 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    if ((int)param_8 != 0) {
      pppppppfVar8 = param_9;
      func_0x0001081421e0();
      in_ZR = (uint)pppppppfVar8 == 1;
      if (((uint)pppppppfVar8 < 2) &&
         (in_ZR = false, *(float *)(param_9 + 1) == (float)(int)*(float *)(param_9 + 1))) {
        in_ZR = *(float *)((long)param_9 + 0x14) == (float)(int)*(float *)((long)param_9 + 0x14);
        param_8 = (long ******)(ulong)!(bool)in_ZR;
      }
      else {
        param_8 = (long ******)0x1;
      }
    }
    ppppppplVar12 = param_11;
    FUN_10828786c();
    if ((((ulong)param_8 & 1) == 0) && ((int)ppppppplVar12 != 0)) {
      lVar9 = *(long *)(unaff_x20 + 0x10);
      func_0x0001082c3d4c();
      in_ZR = *(char *)(lVar9 + 8) == '\x02';
      uVar23 = 0;
      if ('\x01' < *(char *)(lVar9 + 8)) {
        uVar23 = 2;
      }
      pppppppfVar17 = (float *******)(ulong)uVar23;
      param_6 = param_7;
      pppppppfVar8 = param_12;
      FUN_108303bc4(&ppppppfStack_80,*(undefined8 *)(unaff_x20 + 8),param_7,param_9,param_10);
      ppppppfStack_88 = ppppppfStack_80;
      uStack_60 = 0;
      ppppppplVar12 = (long *******)&ppppppfStack_88;
      pppppplVar11 = (long ******)&ppppppfStack_78;
      func_0x0001082c3d14();
      func_0x0001082c3e98();
      if (ppppppfStack_88 != (float ******)0x0) {
        func_0x0001082c3c9c();
      }
    }
    else {
      FUN_108376ad8(&ppppppfStack_78);
      FUN_1083912bc(param_10,&ppppppfStack_78);
      bStack_6a = bStack_6a | 4;
      pppppppfVar8 = &ppppppfStack_78;
      ppppppplVar12 = param_7;
      pppppplVar11 = param_8;
      pppppppfVar17 = param_9;
      ppppppplVar7 = param_11;
      FUN_1082c2bdc();
      FUN_10837ca5c(ppppppfStack_78);
      param_6 = unaff_x19;
    }
  }
  func_0x0001082c3c60(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3e60();
  ppppppfVar10 = ppppppfStack_88;
  if (ppppppfStack_88 != (float ******)0x0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c3d6c();
  pcStack_98 = FUN_1082c2bdc;
  ppppppplVar14 = ppppppplVar12;
  pppppplVar15 = pppppplVar11;
  pppppppfVar18 = pppppppfVar17;
  pppppppfVar20 = pppppppfVar8;
  ppppppplVar22 = ppppppplVar7;
  pppppplStack_e0 = param_8;
  pppppppfStack_d8 = param_12;
  pppppppfStack_d0 = param_10;
  ppppppplStack_c8 = param_11;
  ppppppplStack_c0 = param_7;
  pppppppfStack_b8 = param_9;
  pplStack_a0 = (long **)&stack0xfffffffffffffff0;
  func_0x0001082c4080();
  func_0x0001082c3cc8();
  uStack_e8 = extraout_x8_03;
  func_0x0001082c3c74();
  if (((ulong)ppppppfVar10 & 1) == 0) {
    func_0x0001082c3cec(param_11[1]);
    if ((bool)in_ZR) {
      param_6 = (long *******)&UNK_10f48420e;
      FUN_10827b938();
    }
    func_0x0001082c4098();
    FUN_10827f320();
    func_0x0001082c3fa4();
    FUN_1082c338c();
    func_0x0001082c3e90();
  }
  func_0x0001082c3c60(uStack_e8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3e6c();
  func_0x0001082c3d6c();
  ppppppplVar13 = (long *******)&pppppppfStack_360;
  pcStack_1d8 = FUN_1082c2c74;
  ppppfStack_1e0 = (float ****)&pplStack_a0;
  func_0x0001082c3fd0();
  func_0x0001082c408c();
  func_0x0001082c3c84();
  uStack_240 = extraout_x8_04;
  func_0x0001082c3c74();
  if (((ulong)ppppppfVar10 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      param_6 = (long *******)&UNK_10f48416a;
      FUN_10827b938();
    }
    fVar25 = *(float *)pppppppfVar8;
    fVar26 = *(float *)(pppppppfVar8 + 1);
    in_ZR = fVar25 == fVar26;
    if (fVar26 <= fVar25) {
      if (ppppppplVar7[2] != (long ******)0x0) goto LAB_1082c2d38;
    }
    else {
      fVar25 = *(float *)((long)pppppppfVar8 + 4);
      fVar26 = *(float *)((long)pppppppfVar8 + 0xc);
      in_ZR = fVar26 <= fVar25 && ppppppplVar7[2] == (long ******)0x0;
      if (fVar26 > fVar25 || ppppppplVar7[2] != (long ******)0x0) {
LAB_1082c2d38:
        func_0x0001082c3ea0();
        ppppppplVar14 = ppppppplVar7;
        FUN_10828786c();
        unaff_x27 = ppppppfVar10;
        if ((int)ppppppplVar14 != 0) {
          param_8 = (long ******)pppppplVar11[1];
          func_0x0001082c4054();
          FUN_1081779a8(&ppppppfStack_320,pppppppfVar8);
          in_ZR = (int)ppppppfVar10 == 0;
          ppppppplVar22 = (long *******)(ulong)!(bool)in_ZR;
          pppppppfVar18 = &ppppppfStack_320;
          param_6 = ppppppplVar14;
          pppppppfVar20 = pppppppfVar8;
          FUN_1082f93f8(&pppppppfStack_360,param_8,ppppppplVar14,param_11,ppppppplVar12);
          unaff_x28 = ppppppplVar14;
          if (pppppppfStack_360 != (float *******)0x0) {
            pppppppfStack_328 = pppppppfStack_360;
            uStack_308 = 0;
            ppppppplVar14 = (long *******)&pppppppfStack_328;
            pppppplVar15 = (long ******)&ppppppfStack_320;
            func_0x0001082c3d14();
            FUN_10827fb18(&ppppppfStack_320);
            if (pppppppfStack_328 != (float *******)0x0) {
              func_0x0001082c3c9c();
            }
            goto LAB_1082c2e00;
          }
        }
        FUN_1081779a8(&pppppppfStack_360,pppppppfVar8);
        ppppppplVar14 = (long *******)0x0;
        pppppplVar15 = (long ******)0x2;
        pppppppfVar18 = (float *******)0x0;
        ppppppplVar22 = (long *******)0x0;
        FUN_10827f1c0(&ppppppfStack_320);
        pppppppfVar20 = &ppppppfStack_320;
        func_0x0001082c3cfc();
        func_0x0001082c3f54();
        func_0x00010827f18c();
        param_6 = ppppppplVar13;
        goto LAB_1082c2e00;
      }
    }
    ppppppplVar12 = ppppppplVar7;
    func_0x0001083a630c();
    uVar2 = (int)ppppppplVar12 == 1;
    in_ZR = 1;
    if (!(bool)uVar2) {
      func_0x0001082c3c60(uStack_240);
      if (!(bool)uVar2) goto LAB_1082c2e2c;
      func_0x0001082c3cfc();
      pppppppfVar16 = pppppppfVar18;
      pppppppfVar20 = pppppppfVar8;
      ppppppplVar22 = ppppppplVar7;
      func_0x0001082c408c();
      func_0x0001082c3c84();
      if (ppppppplVar22 == (long *******)0x0) {
        FUN_10827e874();
        ppppppplVar7 = ppppppplVar12;
      }
      ppppplVar5 = pppppplVar11[1];
      func_0x0001082c3cbc();
      if (((ulong)ppppplVar5 & 1) == 0) {
        func_0x0001082c3cd8();
        if ((bool)uVar2) {
          FUN_10827b938();
        }
        func_0x0001083a630c();
                    /* WARNING: Could not recover jumptable at 0x0001082c1c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10df15a28)[(ulong)ppppppplVar7 & 0xffffffff] * 4 + 0x1082c1c44
                  ))();
        return;
      }
      func_0x0001082c3c60(extraout_x8);
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001082c3e60();
      uVar6 = uStack_318;
      if (uStack_318 != 0) {
        func_0x0001082c3c9c();
        uVar6 = uStack_318;
      }
      func_0x0001082c400c();
      if (uVar6 != 0) {
        func_0x0001082c3c9c();
      }
      func_0x0001082c3d6c();
      pppppppfStack_328 = (float *******)FUN_1082c1dd0;
      ppppppplVar12 = param_6;
      pppppplStack_370 = param_8;
      ppppppplStack_368 = ppppppplVar7;
      pppppppfStack_360 = pppppppfVar8;
      ppppppplStack_358 = param_11;
      ppppppplStack_350 = param_7;
      pppppppfStack_348 = pppppppfVar18;
      pppppplStack_340 = pppppplVar11;
      pppppppfStack_338 = pppppppfVar17;
      pppplStack_330 = (long ****)&ppppfStack_1e0;
      func_0x0001082c3ca8();
      ppppppplStack_398 = (long *******)extraout_x8_00;
      func_0x0001082c3c74();
      if ((uVar6 & 1) == 0) {
        func_0x0001082c3cd8();
        if ((bool)uVar2) {
          ppppppplVar12 = (long *******)&UNK_10f484249;
          FUN_10827b938();
        }
        pppppppfVar8 = pppppppfVar16;
        FUN_1082c36d0();
        if ((int)pppppppfVar8 != 0) {
          FUN_1082d8588(pppppppfVar20);
          param_4 = param_4 * param_3 * fVar26 * (fVar25 - fVar25);
          uVar6 = (ulong)(uint)param_4;
          uVar2 = !NAN(param_4) && !NAN(param_4);
          if (!NAN(param_4)) {
            if (param_6 == (long *******)0x0) {
              ppppppplVar7 = (long *******)0x0;
              ppppppplVar12 = (long *******)pppppplVar11[2][0x12];
            }
            else {
              ppppppplVar7 = param_6;
              (*(code *)(*param_6)[2])();
            }
            ppppppplStack_4f8 = ppppppplVar7;
            ppppppplStack_4f0 = ppppppplVar12;
            if (((ulong)pppppplVar11[0xc] & 1) == 0) {
              func_0x0001082c405c();
              uVar23 = (uint)ppppppplVar7;
            }
            else {
              uVar23 = 2;
            }
            pppppplVar15 = (long ******)pppppplVar11[2];
            func_0x0001082c3e54(pppppplVar11[1]);
            if (pppppplVar15 != (long ******)0x0) {
              func_0x0001082c3d4c();
            }
            pppppplStack_508 = pppppplVar11 + 10;
            pppppppfStack_528 = (float *******)&ppppppplStack_4f8;
            uStack_500 = (long *******)(CONCAT44(uStack_500._4_4_,uVar23) & 0xffffff00ffffffff);
            pppppppfVar8 = pppppppfVar20 + 8;
            pppppppfStack_530 = (float *******)pppppplVar15;
            pppppppfStack_520 = pppppppfVar16;
            pppppppfStack_518 = pppppppfVar20;
            ppppppplStack_510 = ppppppplVar14;
            FUN_10827cbe0();
            uVar2 = *(char *)(pppppppfVar20 + 7) == '\0';
            uVar3 = (uint)pppppppfVar8;
            if ((bool)uVar2) {
              uVar3 = 1;
            }
            if ((uVar3 & 1) == 0) {
              func_0x0001082c4000();
              func_0x000108293e28();
              if (pppppppfVar8 == (float *******)0x0) goto LAB_1082c1f10;
              pppppppfVar17 = pppppppfVar8;
              (*(code *)(*pppppppfVar8)[6])(pppppppfVar8,&uStack_538);
              uVar2 = (int)pppppppfVar17 == 2;
              if (!(bool)uVar2) goto LAB_1082c1f10;
            }
            else {
LAB_1082c1f10:
              pppppppfVar8 = pppppppfVar20;
              FUN_1082d88ec();
              if ((*(char *)(pppppppfVar20 + 7) == '\0') &&
                 ((*(byte *)((long)pppppppfVar20 + 0x3b) & 1) == 0)) goto LAB_1082c1fb4;
              if (((((ulong)ppppppplVar22 & 1) != 0) ||
                  ((*(byte *)((long)pppppppfVar20 + 0x8d) & 1) != 0)) &&
                 (pppppppfVar20[10] == (float ******)0x0)) {
                func_0x0001082c405c();
                pppppppfStack_4a0 = (float *******)((ulong)pppppppfStack_4a0 & 0xffffffff00000000);
                uVar6 = 0;
                pppppppfStack_4a8 = (float *******)0x0;
                ppppppplStack_4b0 = (long *******)0x0;
                ppppppplStack_4c8 = (long *******)0x0;
                ppppppplStack_4d0 = (long *******)0x0;
                pppppppfStack_4b8 = (float *******)0x0;
                pppppplStack_4c0 = (long ******)0x0;
                pppppppfVar17 = pppppppfVar20;
                FUN_1082d8e40(pppppppfVar20,&pppppppfStack_3a8,(long)&uStack_4d8 + 7);
                iVar24 = (int)pppppppfVar8;
                if (((int)pppppppfVar17 != 0) && (((ulong)uStack_4d8 & 0x100000000000000) == 0)) {
                  iVar4 = (int)pppppppfVar20 + 0x40;
                  func_0x0001083a630c();
                  if ((iVar4 == 2) && (*(short *)((long)pppppppfVar20 + 0x4c) != 1)) {
                    uVar2 = iVar24 == 1;
                    if (!(bool)uVar2) {
                      uVar6 = (ulong)*(uint *)((long)pppppppfVar20 + 0x44);
                      pppppppfVar8 = pppppppfVar16;
                      FUN_108349c34(pppppppfVar16,&uStack_3d0);
                      if (((ulong)pppppppfVar8 & 1) != 0) goto LAB_1082c1f3c;
                    }
                    func_0x0001082c3d20();
                    FUN_1082c3450();
                    goto LAB_1082c1fb4;
                  }
                }
                pppppppfVar8 = pppppppfVar20;
                FUN_1082d95fc(pppppppfVar20,&ppppppplStack_4d0,(long)&uStack_4d8 + 7);
                if (((int)pppppppfVar8 != 0) && ((uStack_4d8._7_1_ & 1) == 0)) {
                  uVar2 = (int)pppppppfStack_4a0 == 2;
                  if ((bool)uVar2) {
                    func_0x0001082c3d20();
                    FUN_1082c2c74();
                  }
                  else {
                    uVar2 = (int)pppppppfStack_4a0 == 1;
                    if ((bool)uVar2) {
                      func_0x0001082c3d20();
                      FUN_1082c1bc0();
                    }
                    else {
                      func_0x0001082c3d20();
                      FUN_1082c0c88();
                    }
                  }
                  goto LAB_1082c1fb4;
                }
                uVar2 = iVar24 == 1;
                if ((bool)uVar2) {
                  pppppppfVar8 = pppppppfVar20 + 8;
                  FUN_10828786c();
                  if (((int)pppppppfVar8 != 0) &&
                     (pppppppfVar8 = pppppppfVar16, FUN_10827a0d8(), (int)pppppppfVar8 != 0)) {
                    func_0x0001082c3e54(pppppplVar11[1]);
                    func_0x0001082c4074();
                    if ((extraout_x8_01 & 1) == 0) {
                      uVar6 = 0;
                      uStack_3c8 = 0;
                      uStack_3d0 = 0;
                      uStack_3b8 = 0;
                      uStack_3c0 = 0;
                      pppppppfVar8 = pppppppfVar20;
                      FUN_1082d96c0(pppppppfVar20,&uStack_3d0);
                      if ((int)pppppppfVar8 != 0) {
                        pppppppfVar8 = (float *******)pppppplVar11[1];
                        FUN_1083057c4(&ppppppplStack_4e0,pppppppfVar8,ppppppplVar14,pppppppfVar16,
                                      &uStack_3d0);
                        if (ppppppplStack_4e0 != (long *******)0x0) {
                          pppppppfStack_4e8 = (float *******)ppppppplStack_4e0;
                          ppppppplStack_4e0 = (long *******)0x0;
                          uStack_3d8 = 0;
                          FUN_1082c0f08(pppppplVar11,param_6,&pppppppfStack_4e8,auStack_3f0);
                          FUN_10827fb18(auStack_3f0);
                          if (pppppppfStack_4e8 != (float *******)0x0) {
                            func_0x0001082c3c9c();
                          }
                          ppppppplVar12 = ppppppplStack_4e0;
                          ppppppplStack_4e0 = (long *******)0x0;
                          if (ppppppplVar12 != (long *******)0x0) {
                            func_0x0001082c3c9c();
                          }
                          goto LAB_1082c1fb4;
                        }
                      }
                    }
                  }
                }
              }
LAB_1082c1f3c:
              func_0x0001082c4000();
              func_0x0001082c3d58();
            }
            FUN_1082876e0(pppppppfVar16);
            uVar2 = (float)uVar6 == 0.0;
            if (!(bool)uVar2) {
              if (pppppppfVar8 == (float *******)0x0) {
                if (pppppppfVar20[10] != (float ******)0x0) {
                  pppppppfVar8 = (float *******)&ppppppplStack_4d0;
                  FUN_1082d90c8(uVar6,pppppppfVar8,pppppppfVar20,0);
                  func_0x0001082c4068();
                  func_0x0001082c4044();
                  if (*(char *)(pppppppfVar20 + 7) == '\0') goto LAB_1082c1fb4;
                  func_0x0001082c4000();
                  func_0x0001082c3d58();
                  if (pppppppfVar8 != (float *******)0x0) goto LAB_1082c1f60;
                }
                pppppppfVar8 = pppppppfVar20 + 8;
                FUN_10828769c();
                if ((int)pppppppfVar8 != 0) {
                  pppppppfVar8 = (float *******)&ppppppplStack_4d0;
                  FUN_1082d90c8(uVar6,pppppppfVar8,pppppppfVar20,1);
                  func_0x0001082c4068();
                  func_0x0001082c4044();
                  if (*(char *)(pppppppfVar20 + 7) == '\0') goto LAB_1082c1fb4;
                  func_0x0001082c4000();
                  func_0x0001082c3d58();
                  if (pppppppfVar8 != (float *******)0x0) goto LAB_1082c1f60;
                }
                uVar2 = uVar23 == 2;
                if (1 < uVar23) {
                  if (!(bool)uVar2) goto LAB_1082c2214;
                  uVar23 = 1;
                  uStack_500 = (long *******)CONCAT44(uStack_500._4_4_,1);
                }
                func_0x0001082c4000();
                FUN_108293d6c();
              }
LAB_1082c1f60:
              ppppppplStack_4d0 = (long *******)*pppppplVar11[1][8];
              pppppplStack_4c0 = (long ******)&UNK_10df14cb4;
              pppppppfStack_4a8 = (float *******)&ppppppplStack_4f8;
              pppppppfStack_498 = pppppppfStack_518;
              cStack_48c = (char)pppppplVar11 + ' ';
              ppppppplStack_4c8 = ppppppplVar14;
              pppppppfStack_4b8 = (float *******)pppppplVar11;
              ppppppplStack_4b0 = param_6;
              pppppppfStack_4a0 = pppppppfVar16;
              uStack_490 = uVar23;
              FUN_10828b040();
              (*(code *)(*pppppppfVar8)[5])(pppppppfVar8,&ppppppplStack_4d0);
            }
          }
        }
      }
LAB_1082c1fb4:
      func_0x0001082c3c60(ppppppplStack_398);
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
LAB_1082c2214:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1082c2218);
      (*pcVar1)();
    }
  }
LAB_1082c2e00:
  func_0x0001082c3c60(uStack_240);
  if ((bool)in_ZR) {
    return;
  }
LAB_1082c2e2c:
  uVar2 = 0;
  ___stack_chk_fail();
  FUN_10827fb18(&ppppppfStack_320);
  pppppppfVar17 = pppppppfStack_328;
  if (pppppppfStack_328 != (float *******)0x0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c3d6c();
  ppppppplStack_368 = (long *******)FUN_1082c2e6c;
  ppppppplVar12 = ppppppplVar14;
  pppppppfVar19 = pppppppfVar18;
  pppppppfVar21 = pppppppfVar20;
  ppppppplVar13 = ppppppplVar22;
  pppppplStack_3b0 = param_8;
  pppppppfStack_3a8 = pppppppfVar8;
  ppppppplStack_3a0 = ppppppplVar7;
  ppppppplStack_398 = param_11;
  pppppplStack_370 = (long ******)&ppppfStack_1e0;
  func_0x0001082c4080();
  func_0x0001082c3cc8();
  uStack_3b8 = extraout_x8_05;
  func_0x0001082c3c74();
  if (((ulong)pppppppfVar17 & 1) == 0) {
    func_0x0001082c3cec(param_11[1]);
    if ((bool)uVar2) {
      FUN_10827b938();
    }
    ppppppplVar12 = (long *******)0x0;
    pppppppfVar17 = pppppppfVar20;
    param_6 = ppppppplVar22;
    FUN_1082d8f54(&pppppppfStack_498);
    func_0x0001082c3fa4();
    func_0x0001082c3f54();
    func_0x0001082c3e90();
  }
  func_0x0001082c3c60(uStack_3b8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3e6c();
  func_0x0001082c3d6c();
  pppppppfStack_4a8 = (float *******)FUN_1082c2f10;
  uStack_500 = unaff_x28;
  ppppppplStack_4f8 = (long *******)unaff_x27;
  ppppppplStack_4f0 = (long *******)param_8;
  pppppppfStack_4e8 = pppppppfVar20;
  ppppppplStack_4e0 = ppppppplVar22;
  uStack_4d8 = param_11;
  ppppppplStack_4d0 = param_7;
  ppppppplStack_4c8 = ppppppplVar14;
  pppppplStack_4c0 = pppppplVar15;
  pppppppfStack_4b8 = pppppppfVar18;
  ppppppplStack_4b0 = &pppppplStack_370;
  func_0x0001082c3c84();
  pppppplStack_508 = (long ******)extraout_x8_06;
  func_0x0001082c3c74();
  if (((ulong)pppppppfVar17 & 1) == 0) {
    func_0x0001082c3fc0(pppppplVar15[1]);
    if ((bool)uVar2) {
      func_0x0001082c402c();
    }
    ppppppfStack_540 = *pppppppfVar19;
    *pppppppfVar19 = (float ******)0x0;
    _uStack_538 = CONCAT26(uStack_532,*(undefined6 *)(pppppppfVar19 + 1));
    pppppplStack_548 = *ppppppplVar13;
    *ppppppplVar13 = (long ******)0x0;
    ppppppfStack_550 = *pppppppfStack_4a0;
    *pppppppfStack_4a0 = (float ******)0x0;
    pppppppfStack_560 = pppppppfStack_498;
    FUN_1082fcc84(&pppppppfStack_530);
    FUN_10827f75c(&ppppppfStack_550);
    FUN_10827f5a4(&pppppplStack_548);
    func_0x0001082c3dc4();
    pppppplStack_558 = (long ******)pppppppfStack_530;
    pppppppfStack_530 = (float *******)0x0;
    ppppppplStack_510 = (long *******)0x0;
    func_0x0001082c3d14();
    func_0x0001082c3f84();
    param_6 = ppppppplVar12;
    if (pppppplStack_558 != (long ******)0x0) {
      func_0x0001082c3c9c();
      param_6 = ppppppplVar12;
    }
    pppppppfVar17 = pppppppfStack_530;
    pppppppfStack_530 = (float *******)0x0;
    if (pppppppfVar17 != (float *******)0x0) {
      func_0x0001082c3c9c();
    }
  }
  func_0x0001082c3c60(pppppplStack_508);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001082c3f84();
    if (pppppplStack_558 != (long ******)0x0) {
      func_0x0001082c3c9c();
    }
    pppppppfVar8 = pppppppfStack_530;
    pppppppfStack_530 = (float *******)0x0;
    if (pppppppfVar8 != (float *******)0x0) {
      func_0x0001082c3c9c();
    }
    func_0x0001082c3d6c();
    pcStack_568 = FUN_1082c3094;
    pppppplVar11 = (long ******)pppppppfVar8;
    pppppppfStack_590 = pppppppfVar21;
    pppppppfStack_588 = pppppppfVar16;
    pppppplStack_580 = pppppplVar15;
    pppppppfStack_578 = pppppppfVar17;
    pppppppfStack_570 = (float *******)&ppppppplStack_4b0;
    func_0x0001082c3c74();
    if (((ulong)pppppplVar11 & 1) == 0) {
      ppppplVar5 = (long *****)pppppppfVar8[1];
      func_0x0001082c3fc0();
      if ((bool)uVar2) {
        func_0x0001082c402c();
        ppppplVar5 = (long *****)pppppppfVar8[1];
      }
      pppppplStack_5a0 = *param_6;
      *param_6 = (long ******)0x0;
      FUN_1082f9198(&lStack_598);
      func_0x0001082c400c();
      if (ppppplVar5 != (long *****)0x0) {
        func_0x0001082c3c9c();
      }
      lStack_5a8 = lStack_598;
      lStack_598 = 0;
      FUN_1082c493c(pppppppfVar8,&lStack_5a8);
      if (lStack_5a8 != 0) {
        func_0x0001082c3c9c();
      }
      lVar9 = lStack_598;
      lStack_598 = 0;
      if (lVar9 != 0) {
        func_0x0001082c3c9c();
      }
    }
    return;
  }
  return;
}



/* Entry: 1082c2bdc; end: 1082c2c73;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1082c2bdc(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                  float ***param_5,undefined1 ****param_6,undefined1 ****param_7,
                  undefined1 ***param_8,float ***param_9,float ***param_10,undefined1 ****param_11,
                  undefined8 param_12)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined1 **ppuVar7;
  ulong uVar8;
  undefined1 ****ppppuVar9;
  float ***pppfVar10;
  float ***pppfVar11;
  float ***pppfVar12;
  undefined1 ***pppuVar13;
  undefined1 ****ppppuVar14;
  undefined1 ***pppuVar15;
  float ***pppfVar16;
  undefined1 ****ppppuVar17;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  long unaff_x23;
  uint uVar18;
  int iVar19;
  undefined1 **unaff_x26;
  float ***unaff_x27;
  undefined1 ****unaff_x28;
  float fVar20;
  float fVar21;
  long lStack_518;
  undefined1 ***pppuStack_510;
  long lStack_508;
  float ***pppfStack_500;
  undefined8 uStack_4f8;
  undefined1 ***pppuStack_4f0;
  float ***pppfStack_4e8;
  float ****ppppfStack_4e0;
  code *pcStack_4d8;
  float ***pppfStack_4d0;
  undefined1 ***pppuStack_4c8;
  float **ppfStack_4c0;
  undefined1 ***pppuStack_4b8;
  float **ppfStack_4b0;
  undefined6 uStack_4a8;
  undefined2 uStack_4a2;
  float ***pppfStack_4a0;
  float ****ppppfStack_498;
  float ***pppfStack_490;
  float ***pppfStack_488;
  undefined1 ****ppppuStack_480;
  undefined1 ***pppuStack_478;
  undefined8 uStack_470;
  undefined1 ****ppppuStack_468;
  undefined1 ****ppppuStack_460;
  float ***pppfStack_458;
  undefined1 ****ppppuStack_450;
  ulong in_stack_fffffffffffffbb8;
  undefined1 ****ppppuStack_420;
  float ****ppppfStack_418;
  float ***pppfStack_410;
  float ***pppfStack_408;
  uint uStack_400;
  char cStack_3fc;
  undefined1 auStack_360 [24];
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 **ppuStack_320;
  float ***pppfStack_318;
  undefined1 ****ppppuStack_310;
  float **ppfStack_2e0;
  undefined1 ****ppppuStack_2d8;
  float ***apppfStack_2d0 [3];
  float ***pppfStack_2b8;
  undefined1 ***pppuStack_2b0;
  float ***pppfStack_2a8;
  undefined1 **ppuStack_2a0;
  float ***pppfStack_298;
  float **ppfStack_290;
  ulong uStack_288;
  undefined8 uStack_278;
  undefined8 uStack_1b0;
  float *pfStack_150;
  code *pcStack_148;
  undefined8 uStack_58;
  
  pppuVar15 = param_8;
  pppfVar11 = param_9;
  pppfVar16 = param_10;
  ppppuVar17 = param_11;
  func_0x0001082c4080();
  func_0x0001082c3cc8();
  uStack_58 = extraout_x8_02;
  func_0x0001082c3c74();
  if (((ulong)param_5 & 1) == 0) {
    func_0x0001082c3cec(*(undefined8 *)(unaff_x23 + 8));
    if ((bool)in_ZR) {
      param_6 = (undefined1 ****)&UNK_10f48420e;
      FUN_10827b938();
    }
    func_0x0001082c4098();
    FUN_10827f320();
    func_0x0001082c3fa4();
    FUN_1082c338c();
    func_0x0001082c3e90();
  }
  func_0x0001082c3c60(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3e6c();
  func_0x0001082c3d6c();
  ppppuVar14 = (undefined1 ****)apppfStack_2d0;
  pcStack_148 = FUN_1082c2c74;
  pfStack_150 = (float *)&stack0xfffffffffffffff0;
  func_0x0001082c3fd0();
  func_0x0001082c408c();
  func_0x0001082c3c84();
  uStack_1b0 = extraout_x8_03;
  func_0x0001082c3c74();
  if (((ulong)param_5 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      param_6 = (undefined1 ****)&UNK_10f48416a;
      FUN_10827b938();
    }
    fVar20 = *(float *)param_10;
    fVar21 = *(float *)(param_10 + 1);
    in_ZR = fVar20 == fVar21;
    if (fVar21 <= fVar20) {
      if (param_11[2] != (undefined1 ***)0x0) goto LAB_1082c2d38;
    }
    else {
      fVar20 = *(float *)((long)param_10 + 4);
      fVar21 = *(float *)((long)param_10 + 0xc);
      in_ZR = fVar21 <= fVar20 && param_11[2] == (undefined1 ***)0x0;
      if (fVar21 > fVar20 || param_11[2] != (undefined1 ***)0x0) {
LAB_1082c2d38:
        func_0x0001082c3ea0();
        ppppuVar9 = param_11;
        FUN_10828786c();
        unaff_x27 = param_5;
        if ((int)ppppuVar9 != 0) {
          unaff_x26 = param_8[1];
          func_0x0001082c4054();
          FUN_1081779a8(&ppfStack_290,param_10);
          in_ZR = (int)param_5 == 0;
          ppppuVar17 = (undefined1 ****)(ulong)!(bool)in_ZR;
          pppfVar11 = &ppfStack_290;
          param_6 = ppppuVar9;
          pppfVar16 = param_10;
          FUN_1082f93f8(apppfStack_2d0,unaff_x26);
          unaff_x28 = ppppuVar9;
          if (apppfStack_2d0[0] != (float ***)0x0) {
            pppfStack_298 = apppfStack_2d0[0];
            uStack_278 = 0;
            param_7 = (undefined1 ****)&pppfStack_298;
            pppuVar15 = (undefined1 ***)&ppfStack_290;
            func_0x0001082c3d14();
            FUN_10827fb18(&ppfStack_290);
            if (pppfStack_298 != (float ***)0x0) {
              func_0x0001082c3c9c();
            }
            goto LAB_1082c2e00;
          }
        }
        FUN_1081779a8(apppfStack_2d0,param_10);
        param_7 = (undefined1 ****)0x0;
        pppuVar15 = (undefined1 ***)0x2;
        pppfVar11 = (float ***)0x0;
        ppppuVar17 = (undefined1 ****)0x0;
        FUN_10827f1c0(&ppfStack_290);
        pppfVar16 = &ppfStack_290;
        func_0x0001082c3cfc();
        func_0x0001082c3f54();
        func_0x00010827f18c();
        param_6 = ppppuVar14;
        goto LAB_1082c2e00;
      }
    }
    ppppuVar14 = param_11;
    func_0x0001083a630c();
    uVar3 = (int)ppppuVar14 == 1;
    in_ZR = 1;
    if (!(bool)uVar3) {
      func_0x0001082c3c60(uStack_1b0);
      if (!(bool)uVar3) goto LAB_1082c2e2c;
      func_0x0001082c3cfc();
      pppfVar16 = pppfVar11;
      pppfVar12 = param_10;
      ppppuVar17 = param_11;
      func_0x0001082c408c();
      func_0x0001082c3c84();
      if (ppppuVar17 == (undefined1 ****)0x0) {
        FUN_10827e874();
        param_11 = ppppuVar14;
      }
      ppuVar7 = param_8[1];
      func_0x0001082c3cbc();
      if (((ulong)ppuVar7 & 1) == 0) {
        func_0x0001082c3cd8();
        if ((bool)uVar3) {
          FUN_10827b938();
        }
        func_0x0001083a630c();
                    /* WARNING: Could not recover jumptable at 0x0001082c1c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10df15a28)[(ulong)param_11 & 0xffffffff] * 4 + 0x1082c1c44))()
        ;
        return;
      }
      func_0x0001082c3c60(extraout_x8);
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001082c3e60();
      uVar8 = uStack_288;
      if (uStack_288 != 0) {
        func_0x0001082c3c9c();
        uVar8 = uStack_288;
      }
      func_0x0001082c400c();
      if (uVar8 != 0) {
        func_0x0001082c3c9c();
      }
      func_0x0001082c3d6c();
      pppfStack_298 = (float ***)FUN_1082c1dd0;
      ppppuVar14 = param_6;
      ppppuStack_2d8 = param_11;
      apppfStack_2d0[0] = param_10;
      pppfStack_2b8 = pppfVar11;
      pppuStack_2b0 = param_8;
      pppfStack_2a8 = param_9;
      ppuStack_2a0 = (undefined1 **)&pfStack_150;
      func_0x0001082c3ca8();
      func_0x0001082c3c74();
      if ((uVar8 & 1) == 0) {
        func_0x0001082c3cd8();
        if ((bool)uVar3) {
          ppppuVar14 = (undefined1 ****)&UNK_10f484249;
          FUN_10827b938();
        }
        pppfVar11 = pppfVar16;
        FUN_1082c36d0();
        if ((int)pppfVar11 != 0) {
          FUN_1082d8588(pppfVar12);
          param_4 = param_4 * param_3 * fVar21 * (fVar20 - fVar20);
          uVar8 = (ulong)(uint)param_4;
          uVar3 = !NAN(param_4) && !NAN(param_4);
          if (!NAN(param_4)) {
            if (param_6 == (undefined1 ****)0x0) {
              ppppuVar9 = (undefined1 ****)0x0;
              ppppuVar14 = (undefined1 ****)param_8[2][0x12];
            }
            else {
              ppppuVar9 = param_6;
              (*(code *)(*param_6)[2])();
            }
            ppppuStack_468 = ppppuVar9;
            ppppuStack_460 = ppppuVar14;
            if (((ulong)param_8[0xc] & 1) == 0) {
              func_0x0001082c405c();
              uVar18 = (uint)ppppuVar9;
            }
            else {
              uVar18 = 2;
            }
            pppuVar15 = (undefined1 ***)param_8[2];
            func_0x0001082c3e54(param_8[1]);
            if (pppuVar15 != (undefined1 ***)0x0) {
              func_0x0001082c3d4c();
            }
            pppuStack_478 = param_8 + 10;
            ppppfStack_498 = (float ****)&ppppuStack_468;
            uStack_470 = (undefined1 ****)(CONCAT44(uStack_470._4_4_,uVar18) & 0xffffff00ffffffff);
            pppfVar11 = pppfVar12 + 8;
            pppfStack_4a0 = (float ***)pppuVar15;
            pppfStack_490 = pppfVar16;
            pppfStack_488 = pppfVar12;
            ppppuStack_480 = param_7;
            FUN_10827cbe0();
            uVar3 = *(char *)(pppfVar12 + 7) == '\0';
            uVar5 = (uint)pppfVar11;
            if ((bool)uVar3) {
              uVar5 = 1;
            }
            if ((uVar5 & 1) == 0) {
              func_0x0001082c4000();
              func_0x000108293e28();
              if (pppfVar11 == (float ***)0x0) goto LAB_1082c1f10;
              pppfVar10 = pppfVar11;
              (*(code *)(*pppfVar11)[6])(pppfVar11,&uStack_4a8);
              uVar3 = (int)pppfVar10 == 2;
              if (!(bool)uVar3) goto LAB_1082c1f10;
            }
            else {
LAB_1082c1f10:
              pppfVar11 = pppfVar12;
              FUN_1082d88ec();
              if ((*(char *)(pppfVar12 + 7) == '\0') &&
                 ((*(byte *)((long)pppfVar12 + 0x3b) & 1) == 0)) goto LAB_1082c1fb4;
              if (((((ulong)ppppuVar17 & 1) != 0) || ((*(byte *)((long)pppfVar12 + 0x8d) & 1) != 0))
                 && (pppfVar12[10] == (float **)0x0)) {
                func_0x0001082c405c();
                pppfStack_410 = (float ***)((ulong)pppfStack_410 & 0xffffffff00000000);
                uVar8 = 0;
                ppppfStack_418 = (float ****)0x0;
                ppppuStack_420 = (undefined1 ****)0x0;
                pppfVar10 = pppfVar12;
                FUN_1082d8e40(pppfVar12,&pppfStack_318,&stack0xfffffffffffffbbf);
                iVar19 = (int)pppfVar11;
                if (((int)pppfVar10 != 0) && ((in_stack_fffffffffffffbb8 & 0x100000000000000) == 0))
                {
                  iVar6 = (int)pppfVar12 + 0x40;
                  func_0x0001083a630c();
                  if ((iVar6 == 2) && (*(short *)((long)pppfVar12 + 0x4c) != 1)) {
                    uVar3 = iVar19 == 1;
                    if (!(bool)uVar3) {
                      uVar8 = (ulong)*(uint *)((long)pppfVar12 + 0x44);
                      pppfVar11 = pppfVar16;
                      FUN_108349c34(pppfVar16,&uStack_340);
                      if (((ulong)pppfVar11 & 1) != 0) goto LAB_1082c1f3c;
                    }
                    func_0x0001082c3d20();
                    FUN_1082c3450();
                    goto LAB_1082c1fb4;
                  }
                }
                pppfVar11 = pppfVar12;
                FUN_1082d95fc(pppfVar12,&stack0xfffffffffffffbc0,&stack0xfffffffffffffbbf);
                if (((int)pppfVar11 != 0) && ((in_stack_fffffffffffffbb8 & 0x100000000000000) == 0))
                {
                  uVar3 = (int)pppfStack_410 == 2;
                  if ((bool)uVar3) {
                    func_0x0001082c3d20();
                    FUN_1082c2c74();
                  }
                  else {
                    uVar3 = (int)pppfStack_410 == 1;
                    if ((bool)uVar3) {
                      func_0x0001082c3d20();
                      FUN_1082c1bc0();
                    }
                    else {
                      func_0x0001082c3d20();
                      FUN_1082c0c88();
                    }
                  }
                  goto LAB_1082c1fb4;
                }
                uVar3 = iVar19 == 1;
                if ((bool)uVar3) {
                  pppfVar11 = pppfVar12 + 8;
                  FUN_10828786c();
                  if (((int)pppfVar11 != 0) &&
                     (pppfVar11 = pppfVar16, FUN_10827a0d8(), (int)pppfVar11 != 0)) {
                    func_0x0001082c3e54(param_8[1]);
                    func_0x0001082c4074();
                    if ((extraout_x8_01 & 1) == 0) {
                      uVar8 = 0;
                      uStack_338 = 0;
                      uStack_340 = 0;
                      uStack_328 = 0;
                      uStack_330 = 0;
                      pppfVar11 = pppfVar12;
                      FUN_1082d96c0(pppfVar12,&uStack_340);
                      if ((int)pppfVar11 != 0) {
                        pppfVar11 = (float ***)param_8[1];
                        FUN_1083057c4(&ppppuStack_450,pppfVar11,param_7,pppfVar16,&uStack_340);
                        if (ppppuStack_450 != (undefined1 ****)0x0) {
                          pppfStack_458 = (float ***)ppppuStack_450;
                          ppppuStack_450 = (undefined1 ****)0x0;
                          uStack_348 = 0;
                          FUN_1082c0f08(param_8,param_6,&pppfStack_458,auStack_360);
                          FUN_10827fb18(auStack_360);
                          if (pppfStack_458 != (float ***)0x0) {
                            func_0x0001082c3c9c();
                          }
                          ppppuVar17 = ppppuStack_450;
                          ppppuStack_450 = (undefined1 ****)0x0;
                          if (ppppuVar17 != (undefined1 ****)0x0) {
                            func_0x0001082c3c9c();
                          }
                          goto LAB_1082c1fb4;
                        }
                      }
                    }
                  }
                }
              }
LAB_1082c1f3c:
              func_0x0001082c4000();
              func_0x0001082c3d58();
            }
            FUN_1082876e0(pppfVar16);
            uVar3 = (float)uVar8 == 0.0;
            if (!(bool)uVar3) {
              if (pppfVar11 == (float ***)0x0) {
                if (pppfVar12[10] != (float **)0x0) {
                  pppfVar11 = (float ***)&stack0xfffffffffffffbc0;
                  FUN_1082d90c8(uVar8,pppfVar11,pppfVar12,0);
                  func_0x0001082c4068();
                  func_0x0001082c4044();
                  if (*(char *)(pppfVar12 + 7) == '\0') goto LAB_1082c1fb4;
                  func_0x0001082c4000();
                  func_0x0001082c3d58();
                  if (pppfVar11 != (float ***)0x0) goto LAB_1082c1f60;
                }
                pppfVar11 = pppfVar12 + 8;
                FUN_10828769c();
                if ((int)pppfVar11 != 0) {
                  pppfVar11 = (float ***)&stack0xfffffffffffffbc0;
                  FUN_1082d90c8(uVar8,pppfVar11,pppfVar12,1);
                  func_0x0001082c4068();
                  func_0x0001082c4044();
                  if (*(char *)(pppfVar12 + 7) == '\0') goto LAB_1082c1fb4;
                  func_0x0001082c4000();
                  func_0x0001082c3d58();
                  if (pppfVar11 != (float ***)0x0) goto LAB_1082c1f60;
                }
                uVar3 = uVar18 == 2;
                if (1 < uVar18) {
                  if (!(bool)uVar3) goto LAB_1082c2214;
                  uVar18 = 1;
                  uStack_470 = (undefined1 ****)CONCAT44(uStack_470._4_4_,1);
                }
                func_0x0001082c4000();
                FUN_108293d6c();
              }
LAB_1082c1f60:
              ppppfStack_418 = (float ****)&ppppuStack_468;
              pppfStack_408 = pppfStack_488;
              cVar4 = (char)param_8 + ' ';
              ppppuStack_420 = param_6;
              pppfStack_410 = pppfVar16;
              uStack_400 = uVar18;
              FUN_10828b040();
              cStack_3fc = cVar4;
              (*(code *)(*pppfVar11)[5])(pppfVar11,&stack0xfffffffffffffbc0);
            }
          }
        }
      }
LAB_1082c1fb4:
      func_0x0001082c3c60(extraout_x8_00);
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
LAB_1082c2214:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1082c2218);
      (*pcVar2)();
    }
  }
LAB_1082c2e00:
  func_0x0001082c3c60(uStack_1b0);
  if ((bool)in_ZR) {
    return;
  }
LAB_1082c2e2c:
  uVar3 = 0;
  ___stack_chk_fail();
  FUN_10827fb18(&ppfStack_290);
  pppfVar12 = pppfStack_298;
  if (pppfStack_298 != (float ***)0x0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c3d6c();
  ppppuStack_2d8 = (undefined1 ****)FUN_1082c2e6c;
  pppfVar10 = pppfVar16;
  ppppuVar14 = ppppuVar17;
  ppuStack_320 = unaff_x26;
  pppfStack_318 = param_10;
  ppppuStack_310 = param_11;
  ppfStack_2e0 = &pfStack_150;
  func_0x0001082c4080();
  func_0x0001082c3cc8();
  uStack_328 = extraout_x8_04;
  func_0x0001082c3c74();
  if (((ulong)pppfVar12 & 1) == 0) {
    func_0x0001082c3cec(*(undefined8 *)(unaff_x23 + 8));
    if ((bool)uVar3) {
      FUN_10827b938();
    }
    param_7 = (undefined1 ****)0x0;
    pppfVar12 = pppfVar16;
    param_6 = ppppuVar17;
    FUN_1082d8f54(&pppfStack_408);
    func_0x0001082c3fa4();
    func_0x0001082c3f54();
    func_0x0001082c3e90();
  }
  func_0x0001082c3c60(uStack_328);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3e6c();
  func_0x0001082c3d6c();
  ppppfStack_418 = (float ****)FUN_1082c2f10;
  uStack_470 = unaff_x28;
  ppppuStack_468 = (undefined1 ****)unaff_x27;
  ppppuStack_460 = (undefined1 ****)unaff_x26;
  pppfStack_458 = pppfVar16;
  ppppuStack_450 = ppppuVar17;
  ppppuStack_420 = (undefined1 ****)&ppfStack_2e0;
  func_0x0001082c3c84();
  pppuStack_478 = (undefined1 ***)extraout_x8_05;
  func_0x0001082c3c74();
  if (((ulong)pppfVar12 & 1) == 0) {
    func_0x0001082c3fc0(pppuVar15[1]);
    if ((bool)uVar3) {
      func_0x0001082c402c();
    }
    ppfStack_4b0 = *pppfVar11;
    *pppfVar11 = (float **)0x0;
    _uStack_4a8 = CONCAT26(uStack_4a2,*(undefined6 *)(pppfVar11 + 1));
    pppuStack_4b8 = *ppppuVar14;
    *ppppuVar14 = (undefined1 ***)0x0;
    ppfStack_4c0 = *pppfStack_410;
    *pppfStack_410 = (float **)0x0;
    pppfStack_4d0 = pppfStack_408;
    FUN_1082fcc84(&pppfStack_4a0);
    FUN_10827f75c(&ppfStack_4c0);
    FUN_10827f5a4(&pppuStack_4b8);
    func_0x0001082c3dc4();
    pppuStack_4c8 = (undefined1 ***)pppfStack_4a0;
    pppfStack_4a0 = (float ***)0x0;
    ppppuStack_480 = (undefined1 ****)0x0;
    func_0x0001082c3d14();
    func_0x0001082c3f84();
    param_6 = param_7;
    if (pppuStack_4c8 != (undefined1 ***)0x0) {
      func_0x0001082c3c9c();
      param_6 = param_7;
    }
    pppfVar12 = pppfStack_4a0;
    pppfStack_4a0 = (float ***)0x0;
    if (pppfVar12 != (float ***)0x0) {
      func_0x0001082c3c9c();
    }
  }
  func_0x0001082c3c60(pppuStack_478);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001082c3f84();
    if (pppuStack_4c8 != (undefined1 ***)0x0) {
      func_0x0001082c3c9c();
    }
    pppfVar11 = pppfStack_4a0;
    pppfStack_4a0 = (float ***)0x0;
    if (pppfVar11 != (float ***)0x0) {
      func_0x0001082c3c9c();
    }
    func_0x0001082c3d6c();
    pcStack_4d8 = FUN_1082c3094;
    pppuVar13 = (undefined1 ***)pppfVar11;
    pppfStack_500 = pppfVar10;
    uStack_4f8 = param_12;
    pppuStack_4f0 = pppuVar15;
    pppfStack_4e8 = pppfVar12;
    ppppfStack_4e0 = (float ****)&ppppuStack_420;
    func_0x0001082c3c74();
    if (((ulong)pppuVar13 & 1) == 0) {
      ppuVar7 = (undefined1 **)pppfVar11[1];
      func_0x0001082c3fc0();
      if ((bool)uVar3) {
        func_0x0001082c402c();
        ppuVar7 = (undefined1 **)pppfVar11[1];
      }
      pppuStack_510 = *param_6;
      *param_6 = (undefined1 ***)0x0;
      FUN_1082f9198(&lStack_508);
      func_0x0001082c400c();
      if (ppuVar7 != (undefined1 **)0x0) {
        func_0x0001082c3c9c();
      }
      lStack_518 = lStack_508;
      lStack_508 = 0;
      FUN_1082c493c(pppfVar11,&lStack_518);
      if (lStack_518 != 0) {
        func_0x0001082c3c9c();
      }
      lVar1 = lStack_508;
      lStack_508 = 0;
      if (lVar1 != 0) {
        func_0x0001082c3c9c();
      }
    }
    return;
  }
  return;
}



/* Entry: 1082c2c74; end: 1082c2e6b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1082c2c74(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                  float ***param_5,float ***param_6,float ***param_7,float **param_8,
                  float ***param_9,float ***param_10,float ***param_11,undefined8 param_12)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  float ***pppfVar8;
  float ***pppfVar9;
  float ***pppfVar10;
  float **ppfVar11;
  float *pfVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long unaff_x20;
  long unaff_x23;
  uint uVar13;
  float ***unaff_x24;
  float ***unaff_x25;
  int iVar14;
  undefined8 unaff_x26;
  float ***unaff_x27;
  float fVar15;
  float fVar16;
  long lStack_3d8;
  float **ppfStack_3d0;
  long lStack_3c8;
  float ***pppfStack_3c0;
  undefined8 uStack_3b8;
  float **ppfStack_3b0;
  float ***pppfStack_3a8;
  float ****ppppfStack_3a0;
  code *pcStack_398;
  float ***pppfStack_390;
  float **ppfStack_388;
  float **ppfStack_380;
  float **ppfStack_378;
  float **ppfStack_370;
  undefined6 uStack_368;
  undefined2 uStack_362;
  float ***pppfStack_360;
  float ****ppppfStack_358;
  float ***pppfStack_350;
  float ***pppfStack_348;
  float ***pppfStack_340;
  long lStack_338;
  undefined8 uStack_330;
  float ***pppfStack_328;
  float ***pppfStack_320;
  float ***pppfStack_318;
  float ***pppfStack_310;
  ulong in_stack_fffffffffffffcf8;
  float ***pppfStack_2e0;
  float ****ppppfStack_2d8;
  float ***pppfStack_2d0;
  float ***pppfStack_2c8;
  uint uStack_2c0;
  char cStack_2bc;
  undefined1 auStack_220 [24];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  float **ppfStack_1a0;
  code *pcStack_198;
  float ***in_stack_fffffffffffffe70;
  float ***pppfStack_158;
  float **ppfStack_150;
  ulong uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_70;
  
  pppfVar10 = (float ***)&stack0xfffffffffffffe70;
  func_0x0001082c3fd0();
  func_0x0001082c408c();
  func_0x0001082c3c84();
  uStack_70 = extraout_x8_02;
  func_0x0001082c3c74();
  if (((ulong)param_5 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      param_6 = (float ***)&UNK_10f48416a;
      FUN_10827b938();
    }
    fVar15 = *(float *)unaff_x25;
    fVar16 = *(float *)(unaff_x25 + 1);
    in_ZR = fVar15 == fVar16;
    if (fVar16 <= fVar15) {
      if (unaff_x24[2] != (float **)0x0) goto LAB_1082c2d38;
    }
    else {
      fVar15 = *(float *)((long)unaff_x25 + 4);
      fVar16 = *(float *)((long)unaff_x25 + 0xc);
      in_ZR = fVar16 <= fVar15 && unaff_x24[2] == (float **)0x0;
      if (fVar16 > fVar15 || unaff_x24[2] != (float **)0x0) {
LAB_1082c2d38:
        func_0x0001082c3ea0();
        FUN_10828786c();
        unaff_x27 = param_5;
        if ((int)unaff_x24 != 0) {
          unaff_x26 = *(undefined8 *)(unaff_x20 + 8);
          func_0x0001082c4054();
          FUN_1081779a8(&ppfStack_150);
          in_ZR = (int)param_5 == 0;
          param_11 = (float ***)(ulong)!(bool)in_ZR;
          param_9 = &ppfStack_150;
          FUN_1082f93f8(&stack0xfffffffffffffe70,unaff_x26);
          if (in_stack_fffffffffffffe70 != (float ***)0x0) {
            uStack_138 = 0;
            param_7 = (float ***)&pppfStack_158;
            param_8 = (float **)&ppfStack_150;
            pppfStack_158 = in_stack_fffffffffffffe70;
            func_0x0001082c3d14();
            FUN_10827fb18(&ppfStack_150);
            param_6 = unaff_x24;
            param_10 = unaff_x25;
            if (pppfStack_158 != (float ***)0x0) {
              func_0x0001082c3c9c();
              param_6 = unaff_x24;
              param_10 = unaff_x25;
            }
            goto LAB_1082c2e00;
          }
        }
        FUN_1081779a8(&stack0xfffffffffffffe70);
        param_7 = (float ***)0x0;
        param_8 = (float **)0x2;
        param_9 = (float ***)0x0;
        param_11 = (float ***)0x0;
        FUN_10827f1c0(&ppfStack_150);
        param_10 = &ppfStack_150;
        func_0x0001082c3cfc();
        func_0x0001082c3f54();
        func_0x00010827f18c();
        param_6 = pppfVar10;
        goto LAB_1082c2e00;
      }
    }
    pppfVar10 = unaff_x24;
    func_0x0001083a630c();
    in_ZR = (int)pppfVar10 == 1;
    if (!(bool)in_ZR) {
      func_0x0001082c3c60(uStack_70);
      uVar3 = in_ZR;
      if (!(bool)in_ZR) goto LAB_1082c2e2c;
      func_0x0001082c3cfc();
      pppfVar9 = unaff_x24;
      func_0x0001082c408c();
      func_0x0001082c3c84();
      if (pppfVar9 == (float ***)0x0) {
        FUN_10827e874();
        unaff_x24 = pppfVar10;
      }
      uVar7 = *(ulong *)(unaff_x20 + 8);
      func_0x0001082c3cbc();
      if ((uVar7 & 1) == 0) {
        func_0x0001082c3cd8();
        if ((bool)in_ZR) {
          FUN_10827b938();
        }
        func_0x0001083a630c();
                    /* WARNING: Could not recover jumptable at 0x0001082c1c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10df15a28)[(ulong)unaff_x24 & 0xffffffff] * 4 + 0x1082c1c44))
                  ();
        return;
      }
      func_0x0001082c3c60(extraout_x8);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x0001082c3e60();
      uVar7 = uStack_148;
      if (uStack_148 != 0) {
        func_0x0001082c3c9c();
        uVar7 = uStack_148;
      }
      func_0x0001082c400c();
      if (uVar7 != 0) {
        func_0x0001082c3c9c();
      }
      func_0x0001082c3d6c();
      pppfStack_158 = (float ***)FUN_1082c1dd0;
      pppfVar10 = param_6;
      func_0x0001082c3ca8();
      func_0x0001082c3c74();
      if ((uVar7 & 1) == 0) {
        func_0x0001082c3cd8();
        if ((bool)in_ZR) {
          pppfVar10 = (float ***)&UNK_10f484249;
          FUN_10827b938();
        }
        pppfVar8 = param_9;
        FUN_1082c36d0();
        if ((int)pppfVar8 != 0) {
          FUN_1082d8588(unaff_x25);
          param_4 = param_4 * param_3 * fVar16 * (fVar15 - fVar15);
          uVar7 = (ulong)(uint)param_4;
          in_ZR = !NAN(param_4) && !NAN(param_4);
          if (!NAN(param_4)) {
            if (param_6 == (float ***)0x0) {
              pppfVar8 = (float ***)0x0;
              pppfVar10 = *(float ****)(*(long *)(unaff_x20 + 0x10) + 0x90);
            }
            else {
              pppfVar8 = param_6;
              (*(code *)(*param_6)[2])();
            }
            pppfStack_328 = pppfVar8;
            pppfStack_320 = pppfVar10;
            if ((*(byte *)(unaff_x20 + 0x60) & 1) == 0) {
              func_0x0001082c405c();
              uVar13 = (uint)pppfVar8;
            }
            else {
              uVar13 = 2;
            }
            ppfVar11 = *(float ***)(unaff_x20 + 0x10);
            func_0x0001082c3e54(*(undefined8 *)(unaff_x20 + 8));
            if (ppfVar11 != (float **)0x0) {
              func_0x0001082c3d4c();
            }
            lStack_338 = unaff_x20 + 0x50;
            ppppfStack_358 = &pppfStack_328;
            uStack_330 = CONCAT44(uStack_330._4_4_,uVar13) & 0xffffff00ffffffff;
            pppfVar10 = unaff_x25 + 8;
            pppfStack_360 = (float ***)ppfVar11;
            pppfStack_350 = param_9;
            pppfStack_348 = unaff_x25;
            pppfStack_340 = param_7;
            FUN_10827cbe0();
            in_ZR = *(char *)(unaff_x25 + 7) == '\0';
            uVar5 = (uint)pppfVar10;
            if ((bool)in_ZR) {
              uVar5 = 1;
            }
            if ((uVar5 & 1) == 0) {
              func_0x0001082c4000();
              func_0x000108293e28();
              if (pppfVar10 == (float ***)0x0) goto LAB_1082c1f10;
              pppfVar8 = pppfVar10;
              (*(code *)(*pppfVar10)[6])(pppfVar10,&uStack_368);
              in_ZR = (int)pppfVar8 == 2;
              if (!(bool)in_ZR) goto LAB_1082c1f10;
            }
            else {
LAB_1082c1f10:
              pppfVar10 = unaff_x25;
              FUN_1082d88ec();
              if ((*(char *)(unaff_x25 + 7) == '\0') &&
                 ((*(byte *)((long)unaff_x25 + 0x3b) & 1) == 0)) goto LAB_1082c1fb4;
              if (((((ulong)pppfVar9 & 1) != 0) || ((*(byte *)((long)unaff_x25 + 0x8d) & 1) != 0))
                 && (unaff_x25[10] == (float **)0x0)) {
                func_0x0001082c405c();
                pppfStack_2d0 = (float ***)((ulong)pppfStack_2d0 & 0xffffffff00000000);
                uVar7 = 0;
                ppppfStack_2d8 = (float ****)0x0;
                pppfStack_2e0 = (float ***)0x0;
                pppfVar9 = unaff_x25;
                FUN_1082d8e40(unaff_x25,&stack0xfffffffffffffe28,&stack0xfffffffffffffcff);
                iVar14 = (int)pppfVar10;
                if (((int)pppfVar9 != 0) && ((in_stack_fffffffffffffcf8 & 0x100000000000000) == 0))
                {
                  iVar6 = (int)unaff_x25 + 0x40;
                  func_0x0001083a630c();
                  if ((iVar6 == 2) && (*(short *)((long)unaff_x25 + 0x4c) != 1)) {
                    in_ZR = iVar14 == 1;
                    if (!(bool)in_ZR) {
                      uVar7 = (ulong)*(uint *)((long)unaff_x25 + 0x44);
                      pppfVar10 = param_9;
                      FUN_108349c34(param_9,&uStack_200);
                      if (((ulong)pppfVar10 & 1) != 0) goto LAB_1082c1f3c;
                    }
                    func_0x0001082c3d20();
                    FUN_1082c3450();
                    goto LAB_1082c1fb4;
                  }
                }
                pppfVar10 = unaff_x25;
                FUN_1082d95fc(unaff_x25,&stack0xfffffffffffffd00,&stack0xfffffffffffffcff);
                if (((int)pppfVar10 != 0) && ((in_stack_fffffffffffffcf8 & 0x100000000000000) == 0))
                {
                  in_ZR = (int)pppfStack_2d0 == 2;
                  if ((bool)in_ZR) {
                    func_0x0001082c3d20();
                    FUN_1082c2c74();
                  }
                  else {
                    in_ZR = (int)pppfStack_2d0 == 1;
                    if ((bool)in_ZR) {
                      func_0x0001082c3d20();
                      FUN_1082c1bc0();
                    }
                    else {
                      func_0x0001082c3d20();
                      FUN_1082c0c88();
                    }
                  }
                  goto LAB_1082c1fb4;
                }
                in_ZR = iVar14 == 1;
                if ((bool)in_ZR) {
                  pppfVar10 = unaff_x25 + 8;
                  FUN_10828786c();
                  if (((int)pppfVar10 != 0) &&
                     (pppfVar10 = param_9, FUN_10827a0d8(), (int)pppfVar10 != 0)) {
                    func_0x0001082c3e54(*(undefined8 *)(unaff_x20 + 8));
                    func_0x0001082c4074();
                    if ((extraout_x8_01 & 1) == 0) {
                      uVar7 = 0;
                      uStack_1f8 = 0;
                      uStack_200 = 0;
                      uStack_1e8 = 0;
                      uStack_1f0 = 0;
                      pppfVar10 = unaff_x25;
                      FUN_1082d96c0(unaff_x25,&uStack_200);
                      if ((int)pppfVar10 != 0) {
                        pppfVar10 = *(float ****)(unaff_x20 + 8);
                        FUN_1083057c4(&pppfStack_310,pppfVar10,param_7,param_9,&uStack_200);
                        if (pppfStack_310 != (float ***)0x0) {
                          pppfStack_318 = pppfStack_310;
                          pppfStack_310 = (float ***)0x0;
                          uStack_208 = 0;
                          FUN_1082c0f08(unaff_x20,param_6,&pppfStack_318,auStack_220);
                          FUN_10827fb18(auStack_220);
                          if (pppfStack_318 != (float ***)0x0) {
                            func_0x0001082c3c9c();
                          }
                          pppfVar10 = pppfStack_310;
                          pppfStack_310 = (float ***)0x0;
                          if (pppfVar10 != (float ***)0x0) {
                            func_0x0001082c3c9c();
                          }
                          goto LAB_1082c1fb4;
                        }
                      }
                    }
                  }
                }
              }
LAB_1082c1f3c:
              func_0x0001082c4000();
              func_0x0001082c3d58();
            }
            FUN_1082876e0(param_9);
            in_ZR = (float)uVar7 == 0.0;
            if (!(bool)in_ZR) {
              if (pppfVar10 == (float ***)0x0) {
                if (unaff_x25[10] != (float **)0x0) {
                  pppfVar10 = (float ***)&stack0xfffffffffffffd00;
                  FUN_1082d90c8(uVar7,pppfVar10,unaff_x25,0);
                  func_0x0001082c4068();
                  func_0x0001082c4044();
                  if (*(char *)(unaff_x25 + 7) == '\0') goto LAB_1082c1fb4;
                  func_0x0001082c4000();
                  func_0x0001082c3d58();
                  if (pppfVar10 != (float ***)0x0) goto LAB_1082c1f60;
                }
                pppfVar10 = unaff_x25 + 8;
                FUN_10828769c();
                if ((int)pppfVar10 != 0) {
                  pppfVar10 = (float ***)&stack0xfffffffffffffd00;
                  FUN_1082d90c8(uVar7,pppfVar10,unaff_x25,1);
                  func_0x0001082c4068();
                  func_0x0001082c4044();
                  if (*(char *)(unaff_x25 + 7) == '\0') goto LAB_1082c1fb4;
                  func_0x0001082c4000();
                  func_0x0001082c3d58();
                  if (pppfVar10 != (float ***)0x0) goto LAB_1082c1f60;
                }
                in_ZR = uVar13 == 2;
                if (1 < uVar13) {
                  if (!(bool)in_ZR) goto LAB_1082c2214;
                  uVar13 = 1;
                  uStack_330 = CONCAT44(uStack_330._4_4_,1);
                }
                func_0x0001082c4000();
                FUN_108293d6c();
              }
LAB_1082c1f60:
              ppppfStack_2d8 = &pppfStack_328;
              pppfStack_2c8 = pppfStack_348;
              cVar4 = (char)unaff_x20 + ' ';
              pppfStack_2e0 = param_6;
              pppfStack_2d0 = param_9;
              uStack_2c0 = uVar13;
              FUN_10828b040();
              cStack_2bc = cVar4;
              (*(code *)(*pppfVar10)[5])(pppfVar10,&stack0xfffffffffffffd00);
            }
          }
        }
      }
LAB_1082c1fb4:
      func_0x0001082c3c60(extraout_x8_00);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
LAB_1082c2214:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1082c2218);
      (*pcVar2)();
    }
  }
LAB_1082c2e00:
  func_0x0001082c3c60(uStack_70);
  uVar3 = 0;
  if ((bool)in_ZR) {
    return;
  }
LAB_1082c2e2c:
  ___stack_chk_fail();
  FUN_10827fb18(&ppfStack_150);
  pppfVar10 = pppfStack_158;
  if (pppfStack_158 != (float ***)0x0) {
    func_0x0001082c3c9c();
    pppfVar10 = pppfStack_158;
  }
  func_0x0001082c3d6c();
  pcStack_198 = FUN_1082c2e6c;
  pppfVar9 = param_10;
  pppfVar8 = param_11;
  uStack_1e0 = unaff_x26;
  ppfStack_1a0 = (float **)&stack0xfffffffffffffff0;
  func_0x0001082c4080();
  func_0x0001082c3cc8();
  uStack_1e8 = extraout_x8_03;
  func_0x0001082c3c74();
  if (((ulong)pppfVar10 & 1) == 0) {
    func_0x0001082c3cec(*(undefined8 *)(unaff_x23 + 8));
    if ((bool)uVar3) {
      FUN_10827b938();
    }
    param_7 = (float ***)0x0;
    pppfVar10 = param_10;
    param_6 = param_11;
    FUN_1082d8f54(&pppfStack_2c8);
    func_0x0001082c3fa4();
    func_0x0001082c3f54();
    func_0x0001082c3e90();
  }
  func_0x0001082c3c60(uStack_1e8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001082c3e6c();
    func_0x0001082c3d6c();
    ppppfStack_2d8 = (float ****)FUN_1082c2f10;
    pppfStack_328 = unaff_x27;
    pppfStack_320 = (float ***)unaff_x26;
    pppfStack_318 = param_10;
    pppfStack_310 = param_11;
    pppfStack_2e0 = &ppfStack_1a0;
    func_0x0001082c3c84();
    lStack_338 = extraout_x8_04;
    func_0x0001082c3c74();
    if (((ulong)pppfVar10 & 1) == 0) {
      func_0x0001082c3fc0(param_8[1]);
      if ((bool)uVar3) {
        func_0x0001082c402c();
      }
      ppfStack_370 = *param_9;
      *param_9 = (float **)0x0;
      _uStack_368 = CONCAT26(uStack_362,*(undefined6 *)(param_9 + 1));
      ppfStack_378 = *pppfVar8;
      *pppfVar8 = (float **)0x0;
      ppfStack_380 = *pppfStack_2d0;
      *pppfStack_2d0 = (float **)0x0;
      pppfStack_390 = pppfStack_2c8;
      FUN_1082fcc84(&pppfStack_360);
      FUN_10827f75c(&ppfStack_380);
      FUN_10827f5a4(&ppfStack_378);
      func_0x0001082c3dc4();
      ppfStack_388 = (float **)pppfStack_360;
      pppfStack_360 = (float ***)0x0;
      pppfStack_340 = (float ***)0x0;
      func_0x0001082c3d14();
      func_0x0001082c3f84();
      param_6 = param_7;
      if (ppfStack_388 != (float **)0x0) {
        func_0x0001082c3c9c();
        param_6 = param_7;
      }
      pppfVar10 = pppfStack_360;
      pppfStack_360 = (float ***)0x0;
      if (pppfVar10 != (float ***)0x0) {
        func_0x0001082c3c9c();
      }
    }
    func_0x0001082c3c60(lStack_338);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001082c3f84();
    if (ppfStack_388 != (float **)0x0) {
      func_0x0001082c3c9c();
    }
    pppfVar8 = pppfStack_360;
    pppfStack_360 = (float ***)0x0;
    if (pppfVar8 != (float ***)0x0) {
      func_0x0001082c3c9c();
    }
    func_0x0001082c3d6c();
    pcStack_398 = FUN_1082c3094;
    ppfVar11 = (float **)pppfVar8;
    pppfStack_3c0 = pppfVar9;
    uStack_3b8 = param_12;
    ppfStack_3b0 = param_8;
    pppfStack_3a8 = pppfVar10;
    ppppfStack_3a0 = &pppfStack_2e0;
    func_0x0001082c3c74();
    if (((ulong)ppfVar11 & 1) == 0) {
      pfVar12 = (float *)pppfVar8[1];
      func_0x0001082c3fc0();
      if ((bool)uVar3) {
        func_0x0001082c402c();
        pfVar12 = (float *)pppfVar8[1];
      }
      ppfStack_3d0 = *param_6;
      *param_6 = (float **)0x0;
      FUN_1082f9198(&lStack_3c8);
      func_0x0001082c400c();
      if (pfVar12 != (float *)0x0) {
        func_0x0001082c3c9c();
      }
      lStack_3d8 = lStack_3c8;
      lStack_3c8 = 0;
      FUN_1082c493c(pppfVar8,&lStack_3d8);
      if (lStack_3d8 != 0) {
        func_0x0001082c3c9c();
      }
      lVar1 = lStack_3c8;
      lStack_3c8 = 0;
      if (lVar1 != 0) {
        func_0x0001082c3c9c();
      }
    }
    return;
  }
  return;
}



/* Entry: 1082c2e6c; end: 1082c2f0f;  */

void FUN_1082c2e6c(ulong param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  undefined8 *param_5,ulong param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x23;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  ulong uStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined2 uStack_1d4;
  ulong auStack_1d0 [4];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [28];
  undefined8 uStack_58;
  
  uVar4 = param_6;
  puVar5 = param_7;
  func_0x0001082c4080();
  func_0x0001082c3cc8();
  uStack_58 = extraout_x8;
  func_0x0001082c3c74();
  if ((param_1 & 1) == 0) {
    func_0x0001082c3cec(*(undefined8 *)(unaff_x23 + 8));
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    param_3 = (undefined8 *)0x0;
    FUN_1082d8f54(auStack_138);
    func_0x0001082c3fa4();
    func_0x0001082c3f54();
    func_0x0001082c3e90();
    param_1 = param_6;
    param_2 = param_7;
  }
  func_0x0001082c3c60(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3e6c();
  func_0x0001082c3d6c();
  pcStack_148 = FUN_1082c2f10;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x0001082c3c84();
  uStack_1a8 = extraout_x8_00;
  func_0x0001082c3c74();
  if ((param_1 & 1) == 0) {
    func_0x0001082c3fc0(*(undefined8 *)(param_4 + 8));
    if ((bool)in_ZR) {
      func_0x0001082c402c();
    }
    uStack_1e0 = *param_5;
    *param_5 = 0;
    uStack_1d8 = *(undefined4 *)(param_5 + 1);
    uStack_1d4 = *(undefined2 *)((long)param_5 + 0xc);
    uStack_1e8 = *puVar5;
    *puVar5 = 0;
    uStack_1f0 = *puStack_140;
    *puStack_140 = 0;
    uStack_200 = auStack_138[0];
    FUN_1082fcc84(auStack_1d0);
    FUN_10827f75c(&uStack_1f0);
    FUN_10827f5a4(&uStack_1e8);
    func_0x0001082c3dc4();
    uStack_1f8 = auStack_1d0[0];
    auStack_1d0[0] = 0;
    uStack_1b0 = 0;
    func_0x0001082c3d14();
    func_0x0001082c3f84();
    param_2 = param_3;
    if (uStack_1f8 != 0) {
      func_0x0001082c3c9c();
      param_2 = param_3;
    }
    param_1 = auStack_1d0[0];
    auStack_1d0[0] = 0;
    if (param_1 != 0) {
      func_0x0001082c3c9c();
    }
  }
  func_0x0001082c3c60(uStack_1a8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3f84();
  if (uStack_1f8 != 0) {
    func_0x0001082c3c9c();
  }
  uVar1 = auStack_1d0[0];
  auStack_1d0[0] = 0;
  if (uVar1 != 0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c3d6c();
  pcStack_208 = FUN_1082c3094;
  uVar2 = uVar1;
  uStack_230 = uVar4;
  uStack_228 = param_8;
  lStack_220 = param_4;
  uStack_218 = param_1;
  ppuStack_210 = &puStack_150;
  func_0x0001082c3c74();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(uVar1 + 8);
    func_0x0001082c3fc0();
    if ((bool)in_ZR) {
      func_0x0001082c402c();
      lVar3 = *(long *)(uVar1 + 8);
    }
    uStack_240 = *param_2;
    *param_2 = 0;
    FUN_1082f9198(&lStack_238);
    func_0x0001082c400c();
    if (lVar3 != 0) {
      func_0x0001082c3c9c();
    }
    lStack_248 = lStack_238;
    lStack_238 = 0;
    FUN_1082c493c(uVar1,&lStack_248);
    if (lStack_248 != 0) {
      func_0x0001082c3c9c();
    }
    lVar3 = lStack_238;
    lStack_238 = 0;
    if (lVar3 != 0) {
      func_0x0001082c3c9c();
    }
  }
  return;
}



/* Entry: 1082c2f10; end: 1082c3093;  */

void FUN_1082c2f10(ulong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 extraout_x8;
  long unaff_x20;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_94;
  ulong auStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001082c3c84();
  uStack_68 = extraout_x8;
  func_0x0001082c3c74();
  if ((param_1 & 1) == 0) {
    func_0x0001082c3fc0(*(undefined8 *)(unaff_x20 + 8));
    if ((bool)in_ZR) {
      func_0x0001082c402c();
    }
    uStack_a0 = *param_5;
    *param_5 = 0;
    uStack_98 = *(undefined4 *)(param_5 + 1);
    uStack_94 = *(undefined2 *)((long)param_5 + 0xc);
    uStack_a8 = *param_7;
    *param_7 = 0;
    uStack_b0 = *param_9;
    *param_9 = 0;
    FUN_1082fcc84(auStack_90);
    FUN_10827f75c(&uStack_b0);
    FUN_10827f5a4(&uStack_a8);
    func_0x0001082c3dc4();
    uStack_b8 = auStack_90[0];
    auStack_90[0] = 0;
    uStack_70 = 0;
    func_0x0001082c3d14();
    func_0x0001082c3f84();
    param_2 = param_3;
    if (uStack_b8 != 0) {
      func_0x0001082c3c9c();
      param_2 = param_3;
    }
    uVar1 = auStack_90[0];
    auStack_90[0] = 0;
    if (uVar1 != 0) {
      func_0x0001082c3c9c();
    }
  }
  func_0x0001082c3c60(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c3f84();
  if (uStack_b8 != 0) {
    func_0x0001082c3c9c();
  }
  uVar1 = auStack_90[0];
  auStack_90[0] = 0;
  if (uVar1 != 0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c3d6c();
  uVar2 = uVar1;
  uStack_f0 = param_6;
  uStack_e8 = param_8;
  func_0x0001082c3c74();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(uVar1 + 8);
    func_0x0001082c3fc0();
    if ((bool)in_ZR) {
      func_0x0001082c402c();
      lVar3 = *(long *)(uVar1 + 8);
    }
    uStack_100 = *param_2;
    *param_2 = 0;
    FUN_1082f9198(&lStack_f8);
    func_0x0001082c400c();
    if (lVar3 != 0) {
      func_0x0001082c3c9c();
    }
    lStack_108 = lStack_f8;
    lStack_f8 = 0;
    FUN_1082c493c(uVar1,&lStack_108);
    if (lStack_108 != 0) {
      func_0x0001082c3c9c();
    }
    lVar3 = lStack_f8;
    lStack_f8 = 0;
    if (lVar3 != 0) {
      func_0x0001082c3c9c();
    }
  }
  return;
}



/* Entry: 1082c3094; end: 1082c317b;  */

void FUN_1082c3094(ulong param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long lVar2;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = param_1;
  func_0x0001082c3c74();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x0001082c3fc0();
    if ((bool)in_ZR) {
      func_0x0001082c402c();
      lVar2 = *(long *)(param_1 + 8);
    }
    uStack_40 = *param_2;
    *param_2 = 0;
    FUN_1082f9198(&lStack_38);
    func_0x0001082c400c();
    if (lVar2 != 0) {
      func_0x0001082c3c9c();
    }
    lStack_48 = lStack_38;
    lStack_38 = 0;
    FUN_1082c493c(param_1,&lStack_48);
    if (lStack_48 != 0) {
      func_0x0001082c3c9c();
    }
    lVar2 = lStack_38;
    lStack_38 = 0;
    if (lVar2 != 0) {
      func_0x0001082c3c9c();
    }
  }
  return;
}



/* Entry: 1082c317c; end: 1082c31df;  */

bool FUN_1082c317c(long param_1,int param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  FUN_1082c41b8();
  if (*(int *)(param_1 + 0xb4) == param_2) {
    lVar1 = param_1 + 0xb8;
    func_0x000108219544(lVar1,param_3);
    if ((int)lVar1 != 0) {
      return *(int *)(param_1 + 200) != param_4;
    }
  }
  return true;
}



/* Entry: 1082c31e0; end: 1082c338b;  */

void FUN_1082c31e0(ulong param_1,ulong param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  int extraout_w11;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  uVar1 = param_1;
  func_0x0001082c3c74();
  if ((uVar1 & 1) == 0) {
    plVar2 = *(long **)(param_1 + 8);
    func_0x0001082c3fc0();
    if ((bool)in_ZR) {
      func_0x0001082c402c();
      plVar2 = *(long **)(param_1 + 8);
    }
    uVar6 = (uint)param_2;
    if (((uVar6 == 0) || ((*(byte *)(*(long *)(plVar2[2] + 0xb8) + 0x1e) & 1) != 0)) &&
       ((**(code **)(*plVar2 + 0x18))(), plVar2 != (long *)0x0)) {
      lVar7 = plVar2[0x10];
      puVar3 = (undefined8 *)((long)(int)uVar6 * 8 + 0x10);
      if (0xffffffffffffffef < (ulong)((long)(int)uVar6 * 8) || (int)uVar6 < 0) {
        puVar3 = (undefined8 *)0xffffffffffffffff;
      }
      __Znam();
      *puVar3 = 8;
      puVar3[1] = (long)(int)uVar6;
      puStack_58 = puVar3 + 2;
      if (uVar6 != 0) {
        _bzero(puStack_58,-(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3)
        ;
      }
      for (lVar8 = 0; (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) << 3 != lVar8;
          lVar8 = lVar8 + 8) {
        func_0x0001082af91c(&uStack_60,lVar7,param_3,1,param_4);
        uVar5 = uStack_60;
        uStack_60 = 0;
        lVar4 = *(long *)((long)puStack_58 + lVar8);
        *(undefined8 *)((long)puStack_58 + lVar8) = uVar5;
        if (lVar4 != 0) {
          func_0x0001082c3c9c();
        }
        func_0x0001082c400c();
        if (lVar4 != 0) {
          func_0x0001082c3c9c();
        }
        param_3 = param_3 + 0x38;
      }
      uVar5 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        do {
          func_0x0001082c3d3c();
          uVar5 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      puStack_68 = puStack_58;
      puStack_58 = (undefined8 *)0x0;
      uStack_60 = uVar5;
      FUN_108293698();
      FUN_108294bf0(&puStack_68);
      func_0x0001082c3ee8();
      FUN_108294bf0(&puStack_58);
    }
  }
  return;
}



/* Entry: 1082c338c; end: 1082c344f;  */

/* WARNING: Removing unreachable block (ram,0x0001082c1f2c) */
/* WARNING: Removing unreachable block (ram,0x0001082c2068) */
/* WARNING: Removing unreachable block (ram,0x0001082c21c4) */

void FUN_1082c338c(float param_1,float param_2,float param_3,float param_4,ulong param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long *param_9,long *param_10)

{
  code *pcVar1;
  undefined1 in_ZR;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined1 auStack_218 [8];
  long lStack_210;
  long **pplStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  uint uStack_1e0;
  undefined1 uStack_1dc;
  long *plStack_1d8;
  long *plStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  byte bStack_1b1;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  
  func_0x0001082c4080();
  func_0x0001082c3c74();
  if ((param_5 & 1) != 0) {
    return;
  }
  func_0x0001082c3cec(*(undefined8 *)(unaff_x23 + 8));
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  if ((char)param_10[7] == '\0') {
    if (*(char *)((long)param_10 + 0x3b) != '\x01') {
      return;
    }
    if (*(long *)(param_7 + 8) == 0 && *(long *)(param_7 + 0x10) == 0) {
      func_0x0001082c3ff0(*(undefined8 *)(unaff_x23 + 0x10));
      FUN_1082c0500();
    }
    else {
      FUN_10818cfd0(param_9,&stack0xffffffffffffffa0);
      if ((int)param_9 != 0) {
        FUN_1082878ec();
      }
    }
    return;
  }
  plVar6 = unaff_x22;
  func_0x0001082c3ca8();
  uStack_78 = extraout_x8;
  func_0x0001082c3c74();
  if ((unaff_x23 & 1) == 0) {
    func_0x0001082c3cd8();
    if ((bool)in_ZR) {
      plVar6 = (long *)&UNK_10f484249;
      FUN_10827b938();
    }
    plVar4 = param_9;
    FUN_1082c36d0();
    if ((int)plVar4 != 0) {
      FUN_1082d8588(param_10);
      param_4 = param_4 * param_3 * param_2 * (param_1 - param_1);
      uVar9 = (ulong)(uint)param_4;
      in_ZR = !NAN(param_4) && !NAN(param_4);
      if (!NAN(param_4)) {
        if (unaff_x22 == (long *)0x0) {
          unaff_x22 = (long *)0x0;
          plVar6 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x90);
        }
        else {
          (**(code **)(*unaff_x22 + 0x10))();
        }
        plStack_1d8 = unaff_x22;
        plStack_1d0 = plVar6;
        if ((*(byte *)(unaff_x20 + 0x60) & 1) == 0) {
          func_0x0001082c405c();
          uVar7 = (uint)unaff_x22;
        }
        else {
          uVar7 = 2;
        }
        lVar5 = *(long *)(unaff_x20 + 0x10);
        func_0x0001082c3e54(*(undefined8 *)(unaff_x20 + 8));
        if (lVar5 != 0) {
          func_0x0001082c3d4c();
        }
        lStack_1e8 = unaff_x20 + 0x50;
        pplStack_208 = &plStack_1d8;
        uStack_1dc = 0;
        plVar6 = param_10 + 8;
        lStack_210 = lVar5;
        plStack_200 = param_9;
        plStack_1f8 = param_10;
        lStack_1f0 = param_7;
        uStack_1e0 = uVar7;
        FUN_10827cbe0();
        in_ZR = (char)param_10[7] == '\0';
        uVar2 = (uint)plVar6;
        if ((bool)in_ZR) {
          uVar2 = 1;
        }
        if ((uVar2 & 1) == 0) {
          func_0x0001082c4000();
          func_0x000108293e28();
          if (plVar6 == (long *)0x0) goto LAB_1082c1f10;
          plVar4 = plVar6;
          (**(code **)(*plVar6 + 0x30))(plVar6,auStack_218);
          in_ZR = (int)plVar4 == 2;
          if (!(bool)in_ZR) goto LAB_1082c1f10;
        }
        else {
LAB_1082c1f10:
          plVar6 = param_10;
          FUN_1082d88ec();
          if (((char)param_10[7] == '\0') && ((*(byte *)((long)param_10 + 0x3b) & 1) == 0))
          goto LAB_1082c1fb4;
          if (param_10[10] == 0) {
            func_0x0001082c405c();
            uVar9 = 0;
            lStack_1a8 = 0;
            lStack_1b0 = 0;
            lStack_198 = 0;
            puStack_1a0 = (undefined *)0x0;
            plVar4 = param_10;
            FUN_1082d8e40(param_10,auStack_88,&bStack_1b1);
            iVar8 = (int)plVar6;
            if (((int)plVar4 != 0) && ((bStack_1b1 & 1) == 0)) {
              iVar3 = (int)param_10 + 0x40;
              func_0x0001083a630c();
              if ((iVar3 == 2) && (*(short *)((long)param_10 + 0x4c) != 1)) {
                in_ZR = iVar8 == 1;
                if (!(bool)in_ZR) {
                  uVar9 = (ulong)*(uint *)((long)param_10 + 0x44);
                  plVar6 = param_9;
                  FUN_108349c34(param_9,&uStack_b0);
                  if (((ulong)plVar6 & 1) != 0) goto LAB_1082c1f3c;
                }
                func_0x0001082c3d20();
                FUN_1082c3450();
                goto LAB_1082c1fb4;
              }
            }
            plVar6 = param_10;
            FUN_1082d95fc(param_10,&lStack_1b0,&bStack_1b1);
            if (((int)plVar6 != 0) && ((bStack_1b1 & 1) == 0)) {
              in_ZR = 0;
              func_0x0001082c3d20();
              FUN_1082c0c88();
              goto LAB_1082c1fb4;
            }
            in_ZR = iVar8 == 1;
            if ((bool)in_ZR) {
              plVar6 = param_10 + 8;
              FUN_10828786c();
              if (((int)plVar6 != 0) && (plVar6 = param_9, FUN_10827a0d8(), (int)plVar6 != 0)) {
                func_0x0001082c3e54(*(undefined8 *)(unaff_x20 + 8));
                func_0x0001082c4074();
                if ((extraout_x8_00 & 1) == 0) {
                  uVar9 = 0;
                  uStack_a8 = 0;
                  uStack_b0 = 0;
                  uStack_98 = 0;
                  uStack_a0 = 0;
                  plVar6 = param_10;
                  FUN_1082d96c0(param_10,&uStack_b0);
                  if ((int)plVar6 != 0) {
                    plVar6 = *(long **)(unaff_x20 + 8);
                    FUN_1083057c4(&lStack_1c0,plVar6,param_7,param_9,&uStack_b0);
                    if (lStack_1c0 != 0) {
                      lStack_1c8 = lStack_1c0;
                      lStack_1c0 = 0;
                      uStack_b8 = 0;
                      FUN_1082c0f08(unaff_x20);
                      FUN_10827fb18(auStack_d0);
                      if (lStack_1c8 != 0) {
                        func_0x0001082c3c9c();
                      }
                      lVar5 = lStack_1c0;
                      lStack_1c0 = 0;
                      if (lVar5 != 0) {
                        func_0x0001082c3c9c();
                      }
                      goto LAB_1082c1fb4;
                    }
                  }
                }
              }
            }
          }
LAB_1082c1f3c:
          func_0x0001082c4000();
          func_0x0001082c3d58();
        }
        FUN_1082876e0(param_9);
        in_ZR = (float)uVar9 == 0.0;
        if (!(bool)in_ZR) {
          if (plVar6 == (long *)0x0) {
            if (param_10[10] != 0) {
              plVar6 = &lStack_1b0;
              FUN_1082d90c8(uVar9,plVar6,param_10,0);
              func_0x0001082c4068();
              func_0x0001082c4044();
              if ((char)param_10[7] == '\0') goto LAB_1082c1fb4;
              func_0x0001082c4000();
              func_0x0001082c3d58();
              if (plVar6 != (long *)0x0) goto LAB_1082c1f60;
            }
            plVar6 = param_10 + 8;
            FUN_10828769c();
            if ((int)plVar6 != 0) {
              plVar6 = &lStack_1b0;
              FUN_1082d90c8(uVar9,plVar6,param_10,1);
              func_0x0001082c4068();
              func_0x0001082c4044();
              if ((char)param_10[7] == '\0') goto LAB_1082c1fb4;
              func_0x0001082c4000();
              func_0x0001082c3d58();
              if (plVar6 != (long *)0x0) goto LAB_1082c1f60;
            }
            in_ZR = uVar7 == 2;
            if (1 < uVar7) {
              if (!(bool)in_ZR) goto LAB_1082c2214;
              uStack_1e0 = 1;
            }
            func_0x0001082c4000();
            FUN_108293d6c();
          }
LAB_1082c1f60:
          lStack_1b0 = **(long **)(*(long *)(unaff_x20 + 8) + 0x40);
          puStack_1a0 = &UNK_10df14cb4;
          lStack_1a8 = param_7;
          lStack_198 = unaff_x20;
          FUN_10828b040();
          (**(code **)(*plVar6 + 0x28))(plVar6,&lStack_1b0);
        }
      }
    }
  }
LAB_1082c1fb4:
  func_0x0001082c3c60(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1082c2214:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082c2218);
  (*pcVar1)();
}



/* Entry: 1082c3450; end: 1082c36cf;  */

float * FUN_1082c3450(float *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                     undefined8 param_5,undefined8 *param_6,long param_7,undefined8 param_8)

{
  bool bVar1;
  undefined1 uVar2;
  ulong *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long lVar4;
  long unaff_x24;
  float *unaff_x25;
  float fVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float *pfStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [40];
  float *pfStack_f8;
  undefined1 auStack_f0 [40];
  ulong uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_88;
  
  func_0x0001082c3cc8();
  fVar5 = *(float *)(param_7 + 4) * 0.5;
  uVar2 = fVar5 == 0.0;
  uStack_88 = extraout_x8;
  if (0.0 < fVar5) {
    func_0x0001082c3fd0();
    uVar6 = param_6[1];
    uVar7 = CONCAT44((float)((ulong)uVar6 >> 0x20) - (float)((ulong)*param_6 >> 0x20),
                     (float)uVar6 - (float)*param_6);
    puVar3 = &uStack_c8;
    uStack_c8 = uVar7;
    FUN_10838497c(puVar3);
    bVar1 = (float)uVar7 != 0.0;
    uStack_c8 = uStack_c8 ^
                (uStack_c8 ^ 0x3f800000) &
                ~CONCAT44(-(uint)((int)((uint)bVar1 << 0x1f) < 0),
                          -(uint)((int)((uint)bVar1 << 0x1f) < 0));
    fVar8 = (float)uStack_c8 * fVar5;
    fVar5 = (float)(uStack_c8 >> 0x20) * fVar5;
    uVar7 = CONCAT44(fVar5,fVar8);
    fVar9 = *unaff_x25;
    fVar10 = unaff_x25[1];
    fVar12 = *(float *)(param_6 + 1);
    fVar11 = unaff_x25[3];
    uVar2 = *(short *)(unaff_x24 + 0xc) == 2;
    if ((bool)uVar2) {
      fVar9 = fVar9 - fVar8;
      fVar10 = fVar10 - fVar5;
      fVar12 = fVar8 + fVar12;
      fVar11 = fVar5 + fVar11;
    }
    uStack_c8 = uVar7;
    func_0x0001082c3e54(*(undefined8 *)(param_1 + 2));
    if (((*(byte *)(extraout_x8_00 + 0x19) >> 1 & 1) != 0) &&
       (((*(byte *)(param_1 + 0x14) >> 1 & 1) != 0 ||
        ((param_4 != 0 && (func_0x0001082c4074(), (extraout_x8_01 & 1) != 0)))))) {
      uVar13 = 0x3f800000;
      FUN_10816eae8(auStack_f0,fVar12 - fVar9,uVar7 >> 0x20,fVar9,fVar11 - fVar10,-(float)uVar7,
                    fVar10,0,0);
      uVar6 = *(undefined8 *)(param_1 + 2);
      func_0x0001082c4054();
      FUN_1081600e0(auStack_120);
      uStack_128 = 0x3f8000003f800000;
      uStack_130 = 0xbf80000000000000;
      func_0x000108277358(&fStack_c0,&uStack_130);
      FUN_1082f962c(&pfStack_f8,uVar6,puVar3,param_3,auStack_120,&fStack_c0,auStack_f0,1,param_8,
                    uVar13);
      if (pfStack_f8 != (float *)0x0) {
        pfStack_138 = pfStack_f8;
        uStack_a8 = 0;
        func_0x0001082c3d14();
        FUN_10827fb18(&fStack_c0);
        param_1 = pfStack_f8;
        if (pfStack_f8 != (float *)0x0) {
          func_0x0001082c3c9c();
          param_1 = pfStack_f8;
        }
        goto LAB_1082c3674;
      }
    }
    fVar8 = (float)(uVar7 >> 0x20);
    fStack_c0 = fVar9 - fVar8;
    fVar5 = (float)uVar7;
    fStack_bc = fVar5 + fVar10;
    fStack_b8 = fVar8 + fVar9;
    fStack_b4 = fVar10 - fVar5;
    fStack_b0 = fVar8 + fVar12;
    fStack_ac = fVar11 - fVar5;
    uStack_a8 = CONCAT44(fVar5 + fVar11,fVar12 - fVar8);
    uVar2 = param_4 == 0;
    uVar13 = 0xf;
    if ((bool)uVar2) {
      uVar13 = 0;
    }
    FUN_10827c60c(param_1,param_2,param_3,uVar13);
  }
LAB_1082c3674:
  func_0x0001082c3c60(uStack_88);
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10827fb18(&fStack_c0);
  if (pfStack_138 != (float *)0x0) {
    func_0x0001082c3c9c();
  }
  func_0x0001082c3d6c();
  fVar5 = *pfStack_138 - *pfStack_138;
  for (lVar4 = 0; lVar4 != 0x20; lVar4 = lVar4 + 4) {
    fVar5 = fVar5 * *(float *)((long)pfStack_138 + lVar4 + 4);
  }
  return (float *)(ulong)!NAN(fVar5);
}



/* Entry: 1082c36d0; end: 1082c36ff;  */

bool FUN_1082c36d0(float *param_1)

{
  long lVar1;
  float fVar2;
  
  fVar2 = *param_1 - *param_1;
  for (lVar1 = 0; lVar1 != 0x20; lVar1 = lVar1 + 4) {
    fVar2 = fVar2 * *(float *)((long)param_1 + lVar1 + 4);
  }
  return !NAN(fVar2);
}



/* Entry: 1082c3700; end: 1082c3727;  */

void FUN_1082c3700(long *param_1)

{
  FUN_108279f20();
  if (*param_1 == 0) {
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1082c3728; end: 1082c372f;  */

void FUN_1082c3728(void)

{
  return;
}



/* Entry: 1082c3730; end: 1082c3743;  */

void FUN_1082c3730(void)

{
  FUN_1082c02d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082c3744; end: 1082c391f;  */

void FUN_1082c3744(void)

{
  return;
}



/* Entry: 1082c3920; end: 1082c3947;  */

void FUN_1082c3920(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uStack_28;
  
  lVar4 = *(long *)(param_2 + 0x38);
  func_0x0001082c3d4c();
  puVar6 = (undefined8 *)(lVar4 + 0x20);
  piVar5 = (int *)*puVar6;
  if (piVar5 == (int *)0x0) {
    FUN_1082c39c4(&uStack_28);
    uVar3 = uStack_28;
    uStack_28 = 0;
    FUN_1082c3a60(puVar6,uVar3);
    func_0x0001082c3a70(uStack_28);
    piVar5 = (int *)*puVar6;
    if (piVar5 == (int *)0x0) goto LAB_1082c39a0;
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar2) {
      *piVar5 = *piVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_1082c39a0:
  *param_1 = piVar5;
  return;
}



/* Entry: 1082c3948; end: 1082c39c3;  */

void FUN_1082c3948(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uStack_28;
  
  puVar5 = (undefined8 *)(param_2 + 0x20);
  piVar4 = (int *)*puVar5;
  if (piVar4 == (int *)0x0) {
    FUN_1082c39c4(&uStack_28);
    uVar3 = uStack_28;
    uStack_28 = 0;
    FUN_1082c3a60(puVar5,uVar3);
    func_0x0001082c3a70(uStack_28);
    piVar4 = (int *)*puVar5;
    if (piVar4 == (int *)0x0) goto LAB_1082c39a0;
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = *piVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_1082c39a0:
  *param_1 = piVar4;
  return;
}



/* Entry: 1082c39c4; end: 1082c3a0f;  */

void FUN_1082c39c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  FUN_1082c3a10();
  *param_1 = puVar1;
  return;
}



/* Entry: 1082c3a10; end: 1082c3a5f;  */

undefined4 * FUN_1082c3a10(undefined4 *param_1)

{
  *param_1 = 1;
  FUN_108186568(param_1 + 2,0x400);
  FUN_1083164f8(param_1 + 10,0x400);
  return param_1;
}



/* Entry: 1082c3a60; end: 1082c3a7b;  */

void FUN_1082c3a60(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  *param_1 = param_2;
  if (piVar4 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
  if (piVar4 != (int *)0x0) {
    FUN_1082942b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082c3a7c; end: 1082c3aa7;  */

long FUN_1082c3a7c(long param_1)

{
  func_0x00010827f53c(param_1 + 0x40);
  FUN_10827a4f4(param_1 + 0x20);
  return param_1;
}



/* Entry: 1082c3aa8; end: 1082c3aaf;  */

void FUN_1082c3aa8(void)

{
  return;
}



/* Entry: 1082c3ab0; end: 1082c3aeb;  */

void FUN_1082c3ab0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110a374e8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 1082c3aec; end: 1082c3b23;  */

void FUN_1082c3aec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110a374e8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082c3b24; end: 1082c3c1b;  */

undefined8 *
FUN_1082c3b24(long param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001082c3cc8();
  plVar5 = (long *)*param_2;
  uVar6 = *param_3;
  uVar7 = param_3[1];
  uStack_68 = *param_5;
  *param_5 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = **(undefined8 **)(param_1 + 8);
  uStack_28 = extraout_x8;
  (**(code **)(*plVar5 + 0x40))(&uStack_58,uVar6,uVar7,plVar5,uVar4,*(undefined8 *)(param_1 + 0x10))
  ;
  lVar2 = lStack_50;
  if (lStack_50 != 0) {
    lStack_50 = 0;
    lStack_60 = lVar2;
    uStack_30 = 0;
    FUN_1082c0f08(uVar1,uStack_58,&lStack_60,auStack_48);
    func_0x0001082c3f9c();
    uVar4 = uStack_58;
    if (lStack_60 != 0) {
      func_0x0001082c3c9c();
      uVar4 = uStack_58;
    }
    lVar2 = lStack_50;
    lStack_50 = 0;
    if (lVar2 != 0) {
      func_0x0001082c3c9c();
    }
  }
  puVar3 = &uStack_68;
  FUN_10827fb54();
  func_0x0001082c3c60(uStack_28);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001082c3f9c();
  if (lStack_60 != 0) {
    func_0x0001082c3c9c();
  }
  lVar2 = lStack_50;
  lStack_50 = 0;
  if (lVar2 != 0) {
    func_0x0001082c3c9c();
  }
  puVar3 = &uStack_68;
  FUN_10827fb54(puVar3);
  func_0x0001082c3d6c();
  func_0x0001004a5364(uVar4,&PTR_DAT_110a37548);
  puVar3 = puVar3 + 1;
  if ((int)uVar4 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}



/* Entry: 1082c3c1c; end: 1082c3c53;  */

long FUN_1082c3c1c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a37548);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1082c3c54; end: 1082c40ab;  */

undefined ** FUN_1082c3c54(void)

{
  return &PTR_DAT_110a37548;
}



/* Entry: 1082c40ac; end: 1082c41b7;  */

undefined8 *
FUN_1082c40ac(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4,undefined8 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined2 uStack_34;
  
  uStack_40 = *param_3;
  *param_3 = 0;
  uStack_38 = *(undefined4 *)(param_3 + 1);
  uStack_34 = *(undefined2 *)((long)param_3 + 0xc);
  FUN_1082ba080(param_1,param_2,&uStack_40,param_5);
  func_0x0001082c4ee8();
  *param_1 = &PTR_DAT_110a37568;
  func_0x0001082c4f04();
  param_1[7] = extraout_x8;
  uVar2 = *(undefined4 *)(param_4 + 8);
  uVar3 = *(undefined2 *)(param_4 + 0xc);
  param_1[9] = 0;
  *(undefined2 *)((long)param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar2;
  lVar6 = *(long *)(param_2 + 0x40);
  func_0x0001082933e0(lVar6,param_1[2]);
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x0001082c4e7c(param_1 + 9);
  func_0x0001082c4f18();
  return param_1;
}



/* Entry: 1082c41b8; end: 1082c41ef;  */

long FUN_1082c41b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x4c) & 1) != 0)) {
    FUN_1082c41f0(param_1);
    lVar1 = *(long *)(param_1 + 0x48);
  }
  return lVar1;
}



/* Entry: 1082c41f0; end: 1082c42df;  */

long FUN_1082c41f0(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uStack_40;
  long lStack_38;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined8 uStack_28;
  
  uVar5 = *(undefined8 *)(param_1[1] + 0x40);
  lStack_38 = param_1[7];
  if (lStack_38 != 0) {
    piVar1 = (int *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_30 = (undefined4)param_1[8];
  uStack_2c = *(undefined2 *)((long)param_1 + 0x44);
  FUN_1082c3920(&uStack_40,param_1);
  FUN_10829348c(&uStack_28,uVar5,&lStack_38,&uStack_40);
  FUN_1082c4cbc(uStack_40);
  func_0x0001082c4ef0();
  plVar6 = param_1 + 9;
  (**(code **)(*param_1 + 0x18))(param_1,*plVar6,uStack_28);
  uVar5 = uStack_28;
  uStack_28 = 0;
  func_0x0001082c4e7c(plVar6,uVar5);
  lVar4 = *plVar6;
  FUN_108294b38(&uStack_28);
  return lVar4;
}



/* Entry: 1082c42e0; end: 1082c4337;  */

void FUN_1082c42e0(undefined8 param_1)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0001082c4e98();
  if ((uVar1 & 1) == 0) {
    func_0x0001082c4ed4();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    func_0x0001082c4f10();
    if (*(int *)(CONCAT44(uVar2,uVar1) + 0x8a8) == 0) {
      *(undefined4 *)(CONCAT44(uVar2,uVar1) + 0x98) = 2;
      *(undefined4 *)(CONCAT44(uVar2,uVar1) + 0xac) = 0;
      *(undefined8 *)(CONCAT44(uVar2,uVar1) + 0x8d0) = 0;
      *(undefined8 *)(CONCAT44(uVar2,uVar1) + 0x8c8) = 0;
    }
  }
  return;
}



/* Entry: 1082c4338; end: 1082c444b;  */

void FUN_1082c4338(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  ulong param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long lStack_70;
  long lStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  
  func_0x0001082c4e98();
  if ((param_5 & 1) == 0) {
    func_0x0001082c4ed4();
    if ((bool)in_ZR) {
      FUN_10827b938();
    }
    ppuStack_60 = (undefined **)0x0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 1;
    uVar3 = 0x3f800000;
    uStack_3c = 0x3f8000003f800000;
    uStack_44 = 0x3f8000003f800000;
    func_0x0001082c4f04();
    lStack_68 = extraout_x8;
    FUN_108288160(&ppuStack_60,&lStack_68);
    lVar1 = lStack_68;
    lStack_68 = 0;
    if (lVar1 != 0) {
      func_0x0001082c4e8c();
    }
    ppuStack_60 = &PTR_PTR_110a38218;
    uStack_48 = 0;
    uVar2 = *(undefined8 *)(unaff_x19 + 8);
    FUN_10817500c(param_6);
    uStack_80 = uVar3;
    uStack_7c = param_2;
    uStack_78 = param_3;
    uStack_74 = param_4;
    FUN_1082fadbc(&lStack_70,uVar2,&ppuStack_60,0x113254e20,&uStack_80,0);
    func_0x0001082c4f20();
    if (lStack_70 != 0) {
      func_0x0001082c4e8c();
    }
    func_0x00010827ee54(&ppuStack_60);
  }
  return;
}



/* Entry: 1082c444c; end: 1082c462b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1082c444c(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long extraout_x8;
  long *extraout_x8_00;
  uint uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  long alStack_d8 [2];
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 auStack_94 [2];
  long alStack_90 [2];
  undefined8 uStack_80;
  int iStack_7c;
  undefined1 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)*param_2;
  iVar2 = *(int *)(param_1 + 0x30);
  func_0x0001082c4cc8(alStack_90,iVar2);
  if (iStack_7c == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    func_0x0001082c4cc8(alStack_d8 + 1,iVar2);
    uVar9 = 1;
    if (iVar2 != 0x13) {
      uVar9 = 2;
    }
    uVar1 = 0;
    if (uStack_c0._4_4_ != 1) {
      uVar1 = uVar9;
    }
    plVar8 = (long *)(ulong)uVar1;
  }
  alStack_90[1] = 0;
  alStack_90[0] = 0x2000000020000000;
  uStack_80 = 0x2000000020000000;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0xb8);
  plVar7 = alStack_90;
  plVar12 = plVar10;
  (**(code **)(*plVar10 + 0x50))(plVar10,uVar11,plVar7);
  auStack_94[0] = SUB82(plVar12,0);
  uStack_a8 = *(undefined8 *)(*param_2 + 0x28);
  uStack_b0 = *(undefined8 *)(*param_2 + 0x20);
  fStack_c8 = (float)*(int *)(*(long *)(param_1 + 0x10) + 0x90);
  fStack_c4 = (float)*(int *)(*(long *)(param_1 + 0x10) + 0x94);
  alStack_d8[1] = 0;
  puVar3 = &uStack_b0;
  plVar12 = alStack_d8 + 1;
  FUN_10838ed10(puVar3,plVar12);
  if (((ulong)puVar3 & 1) != 0) {
    *(undefined2 *)((long)plVar10 + 0x1a) = 0;
    alStack_d8[1] = 0;
    fStack_c8 = 0.0;
    fStack_c4 = (float)CONCAT22(fStack_c4._2_2_,0x3210);
    uStack_c0 = 0;
    uStack_b8 = 0;
    func_0x0001082c4f10();
    plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x40);
    func_0x0001082c4f04();
    plVar8 = plVar10;
    alStack_d8[0] = extraout_x8;
    (**(code **)(*plVar10 + 0x40))();
    plVar7 = alStack_d8;
    uStack_e0 = uVar11;
    FUN_1082feef8(puVar3,plVar12,plVar7,plVar8,auStack_94,alStack_90,alStack_d8 + 1,
                  *(undefined8 *)(*(long *)(param_1 + 8) + 0x40));
    if (alStack_d8[0] != 0) {
      func_0x0001082c4e8c();
    }
    func_0x0001082c4ee8();
  }
  plVar4 = alStack_90;
  FUN_1082c3a7c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082c4ee8();
  plVar5 = alStack_90;
  FUN_1082c3a7c(plVar5);
  func_0x0001082c4eac();
  pcStack_e8 = FUN_1082c462c;
  lStack_120 = *plVar8;
  *plVar8 = 0;
  uStack_110 = uVar11;
  plStack_108 = param_2;
  plStack_100 = plVar10;
  plStack_f8 = plVar4;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_1082c8ba8(&lStack_118,plVar7,&lStack_120);
  lVar6 = *plVar8;
  *plVar8 = lStack_118;
  if (lVar6 != 0) {
    func_0x0001082c4e8c();
  }
  if (lStack_120 != 0) {
    func_0x0001082c4e8c();
  }
  func_0x0001082c4f04();
  plStack_128 = extraout_x8_00;
  FUN_1082c4338(plVar5,plVar12,&plStack_128);
  if (plStack_128 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001082c46c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_128 + 8))();
    return;
  }
  return;
}



/* Entry: 1082c462c; end: 1082c46f7;  */

void FUN_1082c462c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *extraout_x8;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_40 = *param_4;
  *param_4 = 0;
  FUN_1082c8ba8(&lStack_38,param_3,&lStack_40);
  lVar1 = *param_4;
  *param_4 = lStack_38;
  if (lVar1 != 0) {
    func_0x0001082c4e8c();
  }
  if (lStack_40 != 0) {
    func_0x0001082c4e8c();
  }
  func_0x0001082c4f04();
  plStack_48 = extraout_x8;
  FUN_1082c4338(param_1,param_2,&plStack_48);
  if (plStack_48 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001082c46c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_48 + 8))();
    return;
  }
  return;
}



/* Entry: 1082c46f8; end: 1082c48f7;  */

uint FUN_1082c46f8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6,undefined8 *param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [8];
  undefined4 uStack_70;
  undefined2 uStack_6c;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_7[1];
  uVar13 = *param_7;
  uStack_50._0_4_ = (uint)uVar13;
  uVar8 = *param_8 - ((uint)uStack_50 & (int)(uint)uStack_50 >> 0x1f);
  iVar9 = ((uint)uStack_50 & ((int)(uint)uStack_50 >> 0x1f ^ 0xffffffffU)) -
          (uVar8 & (int)uVar8 >> 0x1f);
  uVar7 = uVar8 | (uint)uStack_50;
  uStack_50 = uVar13;
  if ((int)uVar7 < 0) {
    uStack_50._4_4_ = (uint)((ulong)uVar13 >> 0x20);
    uStack_50 = CONCAT44(uStack_50._4_4_,iVar9);
  }
  iVar3 = *(int *)(*(long *)(param_5 + 0x10) + 0x90);
  iVar4 = *(int *)(*param_6 + 0x90);
  uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  uVar7 = param_8[1] - (uStack_50._4_4_ & (int)uStack_50._4_4_ >> 0x1f);
  iVar10 = (uStack_50._4_4_ & ((int)uStack_50._4_4_ >> 0x1f ^ 0xffffffffU)) -
           (uVar7 & (int)uVar7 >> 0x1f);
  if ((int)(uVar7 | uStack_50._4_4_) < 0) {
    uStack_50 = CONCAT44(iVar10,(uint)uStack_50);
  }
  iVar5 = *(int *)(*(long *)(param_5 + 0x10) + 0x94);
  iVar6 = *(int *)(*param_6 + 0x94);
  uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  iVar2 = (int)uStack_48;
  if (iVar4 <= (int)uStack_48) {
    iVar2 = iVar4;
  }
  iVar1 = (uVar8 - iVar9) + iVar2;
  if (iVar4 < (int)uStack_48 || iVar3 < iVar1) {
    iVar9 = (iVar3 - uVar8) + iVar9;
    if (iVar1 <= iVar3) {
      iVar9 = iVar2;
    }
    uStack_48._4_4_ = (int)((ulong)uStack_48 >> 0x20);
    uStack_48 = CONCAT44(uStack_48._4_4_,iVar9);
  }
  iVar9 = uStack_48._4_4_;
  if (iVar6 <= uStack_48._4_4_) {
    iVar9 = iVar6;
  }
  iVar3 = (uVar7 - iVar10) + iVar9;
  if (iVar6 < uStack_48._4_4_ || iVar5 < iVar3) {
    iVar4 = (iVar5 - uVar7) + iVar10;
    if (iVar3 <= iVar5) {
      iVar4 = iVar9;
    }
    uStack_48 = CONCAT44(iVar4,(int)uStack_48);
  }
  puVar12 = &uStack_50;
  FUN_10821a6d8();
  uStack_88 = (undefined4)uVar13;
  if (((ulong)puVar12 & 1) == 0) {
    uVar13 = CONCAT44(uVar7,uVar8);
    uVar14 = CONCAT44(uStack_48._4_4_ - uStack_50._4_4_,(int)uStack_48 - (uint)uStack_50);
    FUN_1082b8664();
    uStack_60 = uVar13;
    uStack_58 = uVar14;
    func_0x0001082c4f04();
    uStack_70 = (undefined4)param_6[1];
    uStack_6c = *(undefined2 *)((long)param_6 + 0xc);
    FUN_1082cdd5c(&lStack_68,auStack_78,0,0x113254e20,0,0);
    FUN_1082764bc(auStack_78);
    FUN_10817500c(&uStack_50);
    lStack_90 = lStack_68;
    lStack_68 = 0;
    uStack_84 = param_2;
    uStack_80 = param_3;
    uStack_7c = param_4;
    FUN_108287f50(param_5,&uStack_88,&uStack_60,&lStack_90);
    func_0x0001082c4f38();
    if (param_5 != 0) {
      func_0x0001082c4e8c();
    }
    lVar11 = lStack_68;
    lStack_68 = 0;
    if (lVar11 != 0) {
      func_0x0001082c4e8c();
    }
  }
  return (uint)puVar12 ^ 1;
}



/* Entry: 1082c48f8; end: 1082c493b;  */

void FUN_1082c48f8(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  FUN_1082c41b8();
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = param_2;
  func_0x0001082c4f18();
  return;
}



/* Entry: 1082c493c; end: 1082c49d3;  */

void FUN_1082c493c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  FUN_1082c41b8();
  plVar1 = (long *)*param_2;
  *param_2 = 0;
  FUN_1082feaf0();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001082c49ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 1082c49d4; end: 1082c4cbb;  */

void FUN_1082c49d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                  ulong param_5,long param_6,ulong param_7)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  long *unaff_x19;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  long lStack_a0;
  ulong auStack_98 [3];
  undefined1 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar9 = param_2;
  uVar10 = param_3;
  fVar11 = param_4;
  func_0x0001082c4e98();
  if ((param_5 & 1) != 0) {
    return;
  }
  func_0x0001082c4ed4();
  if ((bool)in_ZR) {
    FUN_10827b938();
  }
  puVar2 = (undefined8 *)unaff_x19[2];
  FUN_1082b1dfc();
  uStack_60 = 0;
  uStack_68 = puVar2;
  if (param_6 == 0) {
    uStack_60._4_4_ = 0;
    uStack_60._0_4_ = 0;
    puVar3 = puVar2;
LAB_1082c4ab0:
    uStack_58 = puVar2;
    if ((int)uStack_60 < 1 && uStack_60._4_4_ < 1) {
      if ((int)uStack_68 <= (int)uStack_58) {
        if (uStack_68._4_4_ <= uStack_58._4_4_) goto LAB_1082c4adc;
      }
    }
  }
  else {
    puVar3 = &uStack_68;
    uStack_58 = puVar2;
    FUN_108287e44(puVar3,param_6);
    if ((int)puVar3 == 0) {
      return;
    }
    puVar2 = uStack_58;
    if ((((((int)uStack_60 < 1 && uStack_60._4_4_ < 1) && ((int)uStack_68 <= (int)uStack_58)) &&
         (bVar1 = uStack_68._4_4_ <= uStack_58._4_4_, bVar1)) ||
        (uVar6 = *(ulong *)(*(long *)(*(long *)(unaff_x19[1] + 0x10) + 0xb8) + 0x18),
        ((uint)uVar6 >> 0x1b & 1) != 0)) ||
       ((((uVar6 & 0x440000) == 0 || ((param_7 & 1) == 0)) &&
        (((int)uStack_60 != 0 ||
         ((uStack_60._4_4_ != 0 ||
          ((int)uStack_58 < *(int *)(unaff_x19[2] + 0x90) ||
           uStack_58._4_4_ < *(int *)(unaff_x19[2] + 0x94))))))))) goto LAB_1082c4ab0;
    uStack_60 = 0;
    uStack_58 = uStack_68;
LAB_1082c4adc:
    func_0x0001082c4f10();
    plVar4 = unaff_x19;
    (**(code **)(*unaff_x19 + 0x20))();
    puVar2 = puVar3;
    FUN_1082ffac4(puVar3,plVar4);
    if (((int)puVar2 != 0) &&
       ((*(byte *)(*(long *)(*(long *)(unaff_x19[1] + 0x10) + 0xb8) + 0x1b) >> 3 & 1) == 0)) {
      func_0x0001082c4eb4();
      FUN_1082ff6ec(puVar3,1);
      return;
    }
    *(undefined4 *)(puVar3 + 0x13) = 2;
    *(undefined8 *)((long)puVar3 + 0xa4) = 0;
    *(undefined8 *)((long)puVar3 + 0x9c) = 0;
  }
  uVar5 = (uint)*(undefined8 *)(*(long *)(*(long *)(unaff_x19[1] + 0x10) + 0xb8) + 0x18);
  if ((uVar5 >> 0x1b & 1) == 0) {
    if ((int)uStack_60 < 1 && uStack_60._4_4_ < 1) {
      if ((int)uStack_58 < (int)uStack_68) goto LAB_1082c4b70;
      if ((uVar5 >> 0x1a & 1) != 0) {
        if (uStack_58._4_4_ < uStack_68._4_4_) goto LAB_1082c4bb8;
      }
    }
    else {
LAB_1082c4b70:
      if ((uVar5 >> 0x1a & 1) != 0) goto LAB_1082c4bb8;
    }
    func_0x0001082c4eb4();
    FUN_1082eed10(auStack_c0,unaff_x19[1],&uStack_68);
    FUN_1082c493c();
    func_0x0001082c4f38();
    if (unaff_x19 != (long *)0x0) {
      func_0x0001082c4e8c();
    }
  }
  else {
LAB_1082c4bb8:
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    auStack_98[2] = 0;
    uStack_80 = 1;
    uVar8 = 0x3f800000;
    uVar5 = 3;
    if (param_4 != 1.0) {
      uVar5 = 1;
    }
    uVar6 = (ulong)uVar5;
    uStack_7c = param_1;
    uStack_78 = param_2;
    uStack_74 = param_3;
    fStack_70 = param_4;
    FUN_1082ca37c();
    uStack_80 = 0;
    lVar7 = unaff_x19[1];
    auStack_98[0] = uVar6;
    FUN_10817500c(&uStack_60);
    uStack_b0 = uVar8;
    uStack_ac = uVar9;
    uStack_a8 = uVar10;
    fStack_a4 = fVar11;
    FUN_1082fadbc(&lStack_a0,lVar7,auStack_98,0x113254e20,&uStack_b0,0);
    lStack_b8 = lStack_a0;
    func_0x0001082c4f20();
    if (lStack_b8 != 0) {
      func_0x0001082c4e8c();
    }
    func_0x00010827ee54(auStack_98);
  }
  return;
}



/* Entry: 1082c4cbc; end: 1082c4f43;  */

void FUN_1082c4cbc(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
  if (param_1 != (int *)0x0) {
    FUN_1082942b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082c4f44; end: 1082c5413;  */

void FUN_1082c4f44(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [40];
  undefined1 auStack_1b8 [40];
  undefined1 auStack_190 [40];
  undefined1 auStack_168 [40];
  undefined1 auStack_140 [40];
  undefined1 auStack_118 [40];
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uVar5 = *param_2;
  lVar4 = param_2[5];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  FUN_1082dd9a4(uVar1,lVar4);
  auStack_78[0] = 0x10;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_64 = 0;
  FUN_1082dd868(uVar1,&UNK_10f4842e5,auStack_78,0);
  func_0x0001082c5a58(CONCAT44(uStack_6c,uStack_70));
  lVar3 = param_2[1];
  func_0x0001082c58ec();
  func_0x0001082c5b00();
  func_0x0001082c5958();
  FUN_10829dc20(param_1,lVar3,uVar2,param_2[6],param_1 + 0x94);
  func_0x0001082c5a9c();
  FUN_10829df60();
  if (*(char *)(lVar4 + 0xa4) == '\x01') {
    func_0x00010828e8b0(auStack_a0,&PTR_DAT_110a376e8);
    func_0x0001082c5ad0(uVar5,uVar2);
    func_0x00010827024c(auStack_a0);
  }
  func_0x0001082c59a8(auStack_c8,&UNK_10f4842f1,0x14);
  func_0x0001082c59a8(auStack_f0,&UNK_10f4842fb,0xf);
  func_0x0001082c59a8(auStack_118,&UNK_10f484302,0xf);
  func_0x0001082c594c(auStack_140,&DAT_10f484309);
  func_0x0001082c594c(auStack_168,&DAT_10f48430e);
  func_0x0001082c59a8(auStack_190,&UNK_10f484313,0xe);
  func_0x0001082c594c(auStack_1b8,&UNK_10f484316);
  func_0x0001082c594c(auStack_1e0,&DAT_10f48431a);
  func_0x0001082c58ec();
  FUN_1082dc5d8(lVar3 + extraout_x8,auStack_c8);
  func_0x0001082c58ec();
  FUN_1082dc5d8(lVar3 + extraout_x8_00,auStack_f0);
  func_0x0001082c58ec();
  FUN_1082dc5d8(lVar3 + extraout_x8_01,auStack_118);
  func_0x0001082c58ec();
  FUN_1082dc5d8(lVar3 + extraout_x8_02,auStack_140);
  func_0x0001082c58ec();
  FUN_1082dc5d8(lVar3 + extraout_x8_03,auStack_168);
  func_0x0001082c58ec();
  FUN_1082dc5d8(lVar3 + extraout_x8_04,auStack_190);
  func_0x0001082c58ec();
  FUN_1082dc5d8(lVar3 + extraout_x8_05,auStack_1b8);
  func_0x0001082c58ec();
  FUN_1082dc5d8(lVar3 + extraout_x8_06,auStack_1e0);
  func_0x0001082c58ec();
  func_0x0001082c5958();
  func_0x0001082c58ec();
  func_0x0001082c5958();
  func_0x0001082c58ec();
  func_0x0001082c5988();
  func_0x0001082c58ec();
  func_0x0001082c5988();
  func_0x0001082c58ec();
  func_0x0001082c5958();
  func_0x0001082c58ec();
  func_0x0001082c5958();
  func_0x0001082c58ec();
  func_0x0001082c5958();
  func_0x0001082c58ec();
  func_0x0001082c5958();
  func_0x0001082c58ec();
  func_0x0001082c5958();
  func_0x0001082c58ec();
  func_0x0001082c5958();
  if (*(char *)(lVar4 + 0xa5) == -1) {
    func_0x0001082c58ec();
    func_0x0001082c5958();
  }
  else {
    func_0x00010828bb5c(uVar2,0,2,0xd,&UNK_10f481ec8,auStack_1e8);
    *(int *)(param_1 + 0x98) = (int)uVar2;
    func_0x0001082c58ec();
    func_0x0001082c5958();
  }
  func_0x00010827024c(auStack_1e0);
  func_0x00010827024c(auStack_1b8);
  func_0x00010827024c(auStack_190);
  func_0x00010827024c(auStack_168);
  func_0x00010827024c(auStack_140);
  func_0x00010827024c(auStack_118);
  func_0x00010827024c(auStack_f0);
  func_0x00010827024c(auStack_c8);
  return;
}



/* Entry: 1082c5414; end: 1082c541b;  */

void FUN_1082c5414(void)

{
  return;
}



/* Entry: 1082c541c; end: 1082c54df;  */

void FUN_1082c541c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x0001082c5a6c();
  func_0x0001082c5a8c();
  func_0x0001082c5a20();
                    /* WARNING: Could not recover jumptable at 0x0001082c5458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1082c54e0; end: 1082c56f7;  */

void FUN_1082c54e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uVar5 = *param_2;
  lVar4 = param_2[5];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  FUN_1082dd9a4(uVar1,lVar4);
  auStack_68[0] = 0x17;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_54 = 0;
  FUN_1082dd868(uVar1,&UNK_10f48441e,auStack_68,0);
  func_0x0001082c5a58(CONCAT44(uStack_5c,uStack_60));
  lVar3 = param_2[1];
  func_0x0001082c59d4();
  func_0x0001082c5b00();
  func_0x0001082c59b0();
  FUN_10829dc20(param_1,lVar3,uVar2,param_2[6],param_1 + 0x94);
  func_0x0001082c5a9c();
  FUN_10829df60();
  if (*(char *)(lVar4 + 0xa4) == '\x01') {
    func_0x00010828e8b0(auStack_90,&PTR_DAT_110a37718);
    func_0x0001082c5ad0(uVar5,uVar2);
    func_0x00010827024c(auStack_90);
  }
  func_0x0001082c59d4();
  func_0x0001082c59b0();
  func_0x0001082c59d4();
  func_0x0001082c59b0();
  func_0x0001082c59d4();
  func_0x0001082c59b0();
  func_0x0001082c59d4();
  func_0x0001082c59b0();
  func_0x0001082c59d4();
  func_0x0001082c59b0();
  func_0x0001082c59d4();
  FUN_10829dbfc(lVar3 + extraout_x8,&UNK_10f484505);
  func_0x0001082c59d4();
  FUN_10829dbfc(lVar3 + extraout_x8_00,&UNK_10f48453c);
  if (*(char *)(lVar4 + 0xa5) == -1) {
    func_0x0001082c59d4();
  }
  else {
    func_0x00010828bb5c(uVar2,0,2,0x14,&UNK_10f481ec8,auStack_98);
    *(int *)(param_1 + 0x98) = (int)uVar2;
    func_0x0001082c59d4();
  }
  func_0x0001082c59b0();
  return;
}



/* Entry: 1082c56f8; end: 1082c56ff;  */

void FUN_1082c56f8(void)

{
  return;
}



/* Entry: 1082c5700; end: 1082c57c3;  */

void FUN_1082c5700(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x0001082c5a6c();
  func_0x0001082c5a8c();
  func_0x0001082c5a20();
                    /* WARNING: Could not recover jumptable at 0x0001082c573c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1082c57c4; end: 1082c57c7;  */

undefined8 * FUN_1082c57c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35308;
  FUN_10828e7ac(param_1 + 1);
  return param_1;
}



/* Entry: 1082c57c8; end: 1082c57db;  */

void FUN_1082c57c8(void)

{
  func_0x00010828e388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082c57dc; end: 1082c584b;  */

void FUN_1082c57dc(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x0001082c5960();
  func_0x0001082c59e0();
  lVar2 = unaff_x20 + 0x80;
  FUN_10828e84c(lVar2,unaff_x19 + 0x44);
  if ((int)lVar2 != 0) {
    func_0x0001082c59b8();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x44);
    *(undefined8 *)(unaff_x20 + 0x88) = *(undefined8 *)(unaff_x19 + 0x4c);
    *(undefined8 *)(unaff_x20 + 0x80) = uVar3;
  }
  bVar1 = *(byte *)(unaff_x19 + 0xa5);
  if ((bVar1 != 0xff) && (bVar1 != *(byte *)(unaff_x20 + 0x90))) {
    func_0x0001082c5a44((float)bVar1,0x3b808081);
    *(undefined1 *)(unaff_x20 + 0x90) = *(undefined1 *)(unaff_x19 + 0xa5);
  }
  return;
}



/* Entry: 1082c584c; end: 1082c585b;  */

undefined * FUN_1082c584c(void)

{
  return &UNK_10f4845ca;
}



/* Entry: 1082c585c; end: 1082c586f;  */

void FUN_1082c585c(void)

{
  func_0x00010828e388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082c5870; end: 1082c58df;  */

void FUN_1082c5870(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x0001082c5960();
  func_0x0001082c59e0();
  lVar2 = unaff_x19 + 0x44;
  FUN_10828e84c(lVar2,unaff_x20 + 0x80);
  if ((int)lVar2 != 0) {
    func_0x0001082c59b8();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x44);
    *(undefined8 *)(unaff_x20 + 0x88) = *(undefined8 *)(unaff_x19 + 0x4c);
    *(undefined8 *)(unaff_x20 + 0x80) = uVar3;
  }
  bVar1 = *(byte *)(unaff_x19 + 0xa5);
  if ((bVar1 != 0xff) && (bVar1 != *(byte *)(unaff_x20 + 0x90))) {
    func_0x0001082c5a44((float)bVar1,0x3b808081);
    *(undefined1 *)(unaff_x20 + 0x90) = *(undefined1 *)(unaff_x19 + 0xa5);
  }
  return;
}



/* Entry: 1082c58e0; end: 1082c5b27;  */

undefined * FUN_1082c58e0(void)

{
  return &UNK_10f4845d0;
}



/* Entry: 1082c5b28; end: 1082c5eab;  */

void FUN_1082c5b28(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined *puStack_a8;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar3 = param_2[3];
  plVar1 = (long *)*param_2;
  lVar2 = param_2[1];
  func_0x00010828bb5c(lVar2,lVar3,2,0x1a,&UNK_10f4845d5,auStack_68);
  *(int *)(param_1 + 0x28) = (int)lVar2;
  if (*(int *)(lVar3 + 0x44) == 2) {
    func_0x0001082c6534();
    func_0x0001082c657c();
    func_0x0001082c6534();
    func_0x0001082c6540();
    func_0x0001082c6534();
    func_0x0001082c6540();
    func_0x0001082c6534();
    func_0x0001082c657c();
    func_0x0001082c6534();
    func_0x0001082c657c();
    func_0x0001082c6534();
    func_0x0001082c6540();
    puStack_a8 = &UNK_10f484750;
    for (iVar5 = 0; iVar5 != 4; iVar5 = iVar5 + 1) {
      iVar4 = 4;
      do {
        FUN_1083d4028(&uStack_80,&UNK_10f4846c2);
        func_0x0001082c65b8();
        func_0x0001082c6568();
        func_0x0001082c6534();
        FUN_10828bae8((long)plVar1 + extraout_x8,&UNK_10f4846d9);
        func_0x0001082c65ec();
        func_0x0001082c65e4();
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      func_0x0001082c6534();
      FUN_10828bae8((long)plVar1 + extraout_x8_00,&UNK_10f4846ed);
    }
  }
  else {
    FUN_10828bae8((long)plVar1 + *(long *)(*plVar1 + -0x18),&UNK_10f484794);
    func_0x0001082c6534();
    func_0x0001082c6540();
    func_0x0001082c6534();
    func_0x0001082c6540();
    func_0x0001082c6534();
    func_0x0001082c6540();
    func_0x0001082c6534();
    func_0x0001082c657c();
    func_0x0001082c6534();
    func_0x0001082c6540();
    puStack_a8 = &UNK_10f484851;
    for (iVar5 = -1; iVar5 != 3; iVar5 = iVar5 + 1) {
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      if (*(int *)(lVar3 + 0x44) == 0) {
        FUN_1083d4028(auStack_98,&UNK_10f484813);
      }
      else {
        FUN_1083d4028(auStack_98,&UNK_10f48482c);
      }
      func_0x000107c27b9c(&uStack_80,auStack_98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
      func_0x0001082c65b8();
      func_0x0001082c6568();
      FUN_10828bae8((long)plVar1 + *(long *)(*plVar1 + -0x18),&UNK_10f484845);
      func_0x0001082c65ec();
      func_0x0001082c65e4();
    }
  }
  func_0x0001082c6534();
  FUN_10829dbfc((long)plVar1 + extraout_x8_01,puStack_a8);
  if (*(int *)(lVar3 + 0x48) != 0) {
    if (*(int *)(lVar3 + 0x48) != 1) goto LAB_1082c5e54;
    func_0x0001082c6534();
    func_0x0001082c6540();
  }
  func_0x0001082c6534();
  func_0x0001082c6540();
LAB_1082c5e54:
  func_0x0001082c6534();
  func_0x0001082c657c();
  return;
}



/* Entry: 1082c5eac; end: 1082c5f27;  */

void FUN_1082c5eac(long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [64];
  
  if ((*(float *)(param_1 + 0x20) != *(float *)(param_3 + 0x3c)) ||
     (*(float *)(param_1 + 0x24) != *(float *)(param_3 + 0x40))) {
    uVar2 = *(undefined8 *)(param_3 + 0x3c);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    FUN_1083bb198(auStack_60,(int)uVar2,(int)((ulong)uVar2 >> 0x20));
    (**(code **)(*param_2 + 0xa0))(param_2,uVar1,auStack_60);
  }
  return;
}



/* Entry: 1082c5f28; end: 1082c6023;  */

void FUN_1082c5f28(void)

{
  undefined1 *puVar1;
  long lStack_78;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  
  func_0x0001082c65f4();
  func_0x0001082c64f0();
  puVar1 = auStack_68;
  FUN_1082cde38(auStack_58);
  func_0x0001082c6514();
  func_0x0001082c6598();
  func_0x0001082c65a8();
  func_0x0001082c6584();
  func_0x0001082c65d8();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001082c64e4();
  }
  if (lStack_78 != 0) {
    func_0x0001082c64e4();
  }
  return;
}



/* Entry: 1082c6024; end: 1082c612b;  */

void FUN_1082c6024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long lStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  
  func_0x0001082c65f4();
  func_0x0001082c64f0();
  puVar1 = auStack_68;
  FUN_1082cdf08(auStack_58);
  func_0x0001082c6514();
  func_0x0001082c6598();
  func_0x0001082c65a8();
  func_0x0001082c6584();
  puStack_70 = puVar1;
  FUN_1082c8ba8(extraout_x8,param_3,&puStack_70);
  if (puStack_70 != (undefined1 *)0x0) {
    func_0x0001082c64e4();
  }
  if (lStack_78 != 0) {
    func_0x0001082c64e4();
  }
  return;
}


