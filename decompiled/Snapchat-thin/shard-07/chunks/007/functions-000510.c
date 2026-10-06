/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105980cb0; end: 105980ccf;  */

void FUN_105980cb0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(*(long *)(lVar1 + 0x18) + 8) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105980ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 0x48));
  return;
}



/* Entry: 105980cd0; end: 105980cef;  */

void FUN_105980cd0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105980a9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105980cf0; end: 105980d17;  */

void FUN_105980cf0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105980d18; end: 105980d37;  */

void FUN_105980d18(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105980c28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105980d38; end: 105980dfb;  */

void FUN_105980d38(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105980dfc; end: 105980e93;  */

void FUN_105980dfc(undefined8 param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105980e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10ddc654a)[param_2 & 0xffffffff] * 4 + 0x105980e3c))(param_1);
  return;
}



/* Entry: 105980e94; end: 105980ec7;  */

undefined8 * FUN_105980e94(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_105980ec8(param_1,param_2,param_2 + param_3 * 4,param_3);
  return param_1;
}



/* Entry: 105980ec8; end: 105980f4b;  */

void FUN_105980ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_105980f4c(param_1,param_4);
    FUN_105980f88(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_105980ffc(&uStack_40);
  return;
}



/* Entry: 105980f4c; end: 105980f87;  */

void FUN_105980f4c(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar1 = param_1 + 2;
    FUN_105980fbc();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + (long)param_2 * 4;
    return;
  }
  FUN_105980fa8();
  puVar2 = (undefined4 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 105980f88; end: 105980fa7;  */

void FUN_105980f88(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 105980fa8; end: 105980fbb;  */

void FUN_105980fa8(void)

{
  func_0x000104bd47e8(&UNK_10f316e12);
  FUN_105980fe0();
  return;
}



/* Entry: 105980fbc; end: 105980fdf;  */

void FUN_105980fbc(void)

{
  FUN_105980fe0();
  return;
}



/* Entry: 105980fe0; end: 105980ffb;  */

long FUN_105980fe0(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3e == 0) {
    lVar1 = param_2 << 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10598102c(param_1);
  }
  return param_1;
}



/* Entry: 105980ffc; end: 10598102b;  */

long FUN_105980ffc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10598102c(param_1);
  }
  return param_1;
}



/* Entry: 10598102c; end: 105981043;  */

void FUN_10598102c(undefined8 *param_1)

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



/* Entry: 105981044; end: 105981813;  */

void FUN_105981044(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 auStack_130 [16];
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 auStack_108 [24];
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  func_0x00010007847c(auStack_108,&UNK_10f316e19);
  func_0x00010002b838(&puStack_f0,&UNK_10f316e43);
  func_0x00010044fc54(&puStack_120);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_f0);
  func_0x0001004b5250(auStack_130,&puStack_120);
  FUN_105973878(&uStack_140,auStack_130);
  func_0x00010054fd30(&puStack_150,param_3);
  lVar12 = param_4[1];
  uVar16 = param_4[1];
  uVar15 = *param_4;
  puVar7 = (undefined8 *)0x40;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_1108c50d8;
  if (lVar12 != 0) {
    do {
      FUN_1059827b8();
    } while (extraout_w10 != 0);
  }
  puVar10 = puStack_150;
  lVar12 = lStack_148;
  if (lStack_148 != 0) {
    do {
      FUN_1059827b8();
    } while (extraout_w10_00 != 0);
  }
  puVar19 = puVar7 + 3;
  *puVar19 = &PTR_FUN_1108c4bc8;
  puStack_f0 = (undefined8 *)0x0;
  puStack_e8 = (undefined8 *)0x0;
  puVar7[5] = uVar16;
  puVar7[4] = uVar15;
  puVar7[7] = lVar12;
  puVar7[6] = puVar10;
  puStack_1e0 = (undefined8 *)0x0;
  puStack_1d8 = (undefined8 *)0x0;
  func_0x000100558bb4(&puStack_1e0);
  FUN_10595f228(&puStack_f0);
  puStack_160 = puVar19;
  puStack_158 = puVar7;
  FUN_1059852b4(&uStack_170,param_2,&puStack_120,param_7);
  func_0x000100901cc0(&puStack_180);
  puVar8 = (undefined8 *)0x28;
  __Znwm();
  plVar14 = puVar8 + 1;
  *plVar14 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_1108c5128;
  puVar10 = puVar8 + 3;
  FUN_105979394(puVar10);
  puVar9 = (undefined8 *)0xe8;
  puStack_190 = puVar10;
  puStack_188 = puVar8;
  __Znwm();
  plVar11 = puVar9 + 1;
  *plVar11 = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_1108c5178;
  puStack_160 = (undefined8 *)0x0;
  puStack_158 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)param_5[1];
  puStack_80 = (undefined8 *)*param_5;
  puStack_1e0 = puVar19;
  puStack_1d8 = puVar7;
  if (param_5[1] != 0) {
    do {
      FUN_1059827b8();
    } while (extraout_w10_01 != 0);
  }
  puStack_98 = (undefined8 *)lStack_178;
  puStack_a0 = puStack_180;
  lStack_88 = uStack_168;
  puStack_90 = uStack_170;
  uStack_170 = (undefined8 *)0x0;
  uStack_168 = 0;
  if (lStack_178 != 0) {
    do {
      FUN_1059827b8();
    } while (extraout_w10_02 != 0);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = *plVar14 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lStack_b8 = lStack_138;
  uStack_c0 = uStack_140;
  puStack_b0 = puVar10;
  puStack_a8 = puVar8;
  if (lStack_138 != 0) {
    do {
      FUN_1059827b8();
    } while (extraout_w10_03 != 0);
  }
  lStack_c8 = lStack_148;
  puStack_d0 = puStack_150;
  if (lStack_148 != 0) {
    do {
      FUN_1059827b8();
    } while (extraout_w10_04 != 0);
  }
  func_0x00010028af84(&puStack_f0,param_2 + 0x70);
  puVar7 = puVar9 + 3;
  func_0x0001059828c4(puVar7,&puStack_1e0,&puStack_80,&puStack_90,&puStack_a0,&puStack_b0,&uStack_c0
                      ,&puStack_d0,&puStack_f0);
  func_0x0001001148fc(&puStack_f0);
  func_0x000100558bb4(&puStack_d0);
  func_0x000100558bb4(&uStack_c0);
  FUN_105982408(&puStack_b0);
  func_0x000105982890();
  FUN_10598051c(&puStack_90);
  func_0x00010595f250(&puStack_80);
  FUN_10595f228(&puStack_1e0);
  puStack_1a0 = puVar7;
  puStack_198 = puVar9;
  if ((puVar9[5] == 0) || (*(long *)(puVar9[5] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      puStack_1e0 = puVar7;
      puStack_1d8 = puVar9;
    } while (cVar1 != '\0');
    do {
      func_0x0001059827e8();
    } while (extraout_w11 != 0);
    puStack_f0 = (undefined8 *)puVar9[4];
    puVar9[4] = puVar7;
    puVar9[5] = puVar9;
    puStack_e8 = (undefined8 *)extraout_x8;
    FUN_105982438(&puStack_f0);
    func_0x00010598245c(&puStack_1e0);
  }
  FUN_105976094(&puStack_d0,param_2 + 0x90);
  func_0x0001059760c0(&uStack_1b0,param_2 + 0x90);
  FUN_105980dfc(&puStack_1e0,1);
  puVar8 = (undefined8 *)0xf0;
  __Znwm();
  uVar15 = uStack_1d0;
  puVar10 = puStack_1d8;
  puVar7 = puStack_1e0;
  plVar14 = puVar8 + 1;
  *plVar14 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_1108c51c8;
  puStack_1e0 = (undefined8 *)0x0;
  puStack_1d8 = (undefined8 *)0x0;
  uStack_1d0 = 0;
  uVar16 = uStack_140;
  lVar12 = lStack_138;
  if (lStack_138 != 0) {
    do {
      func_0x0001059827e8();
      uVar15 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar19 = puStack_198;
  puVar9 = puStack_1a0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  puVar17 = puStack_180;
  lVar18 = lStack_178;
  if (lStack_178 != 0) {
    do {
      func_0x0001059827e8();
      uVar15 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  lVar6 = lStack_c8;
  puVar5 = puStack_d0;
  uVar4 = uStack_1a8;
  uVar3 = uStack_1b0;
  puVar13 = puVar8 + 3;
  *puVar13 = &PTR_FUN_1108c4f90;
  puStack_d0 = (undefined8 *)0x0;
  lStack_c8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[4] = &PTR_FUN_1108c4fe8;
  puVar8[8] = puVar10;
  puVar8[7] = puVar7;
  puVar8[9] = uVar15;
  puStack_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  puStack_f0 = (undefined8 *)0x0;
  puStack_80 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  puVar8[0xb] = lVar12;
  puVar8[10] = uVar16;
  puVar8[0xd] = puVar19;
  puVar8[0xc] = puVar9;
  puStack_90 = (undefined8 *)0x0;
  lStack_88 = 0;
  puStack_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  puVar8[0xf] = lVar18;
  puVar8[0xe] = puVar17;
  puVar8[0x11] = lVar6;
  puVar8[0x10] = puVar5;
  puStack_b0 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
  puVar8[0x13] = uVar4;
  puVar8[0x12] = uVar3;
  uStack_c0 = 0;
  lStack_b8 = 0;
  puVar8[0x15] = 0;
  puVar8[0x14] = puVar8 + 0x15;
  puVar8[0x18] = 0;
  puVar8[0x16] = 0;
  puVar8[0x17] = puVar8 + 0x18;
  puVar8[0x1c] = 0;
  puVar8[0x1b] = 0;
  puVar8[0x19] = 0;
  puVar8[0x1a] = puVar8 + 0x1b;
  *(undefined1 *)(puVar8 + 0x1d) = 0;
  func_0x000100902aac(&uStack_c0);
  func_0x000100902aac(&puStack_b0);
  func_0x000105982890();
  func_0x000105982324(&puStack_90);
  func_0x000100558bb4(&puStack_80);
  func_0x0001059821ac(&puStack_f0);
  puStack_1c0 = puVar13;
  puStack_1b8 = puVar8;
  if ((puVar8[6] == 0) || (*(long *)(puVar8[6] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = *plVar14 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      puStack_80 = puVar13;
      puStack_78 = puVar8;
    } while (cVar1 != '\0');
    do {
      func_0x0001059827e8();
    } while (extraout_w11_02 != 0);
    puStack_f0 = (undefined8 *)puVar8[5];
    puVar8[5] = puVar13;
    puVar8[6] = puVar8;
    puStack_e8 = (undefined8 *)extraout_x8_02;
    func_0x0001059821e0(&puStack_f0);
    FUN_1059824ac(&puStack_80);
  }
  func_0x0001059821ac(&puStack_1e0);
  puVar10 = (undefined8 *)0x80;
  __Znwm();
  puStack_78 = (undefined8 *)lStack_148;
  puStack_80 = puStack_150;
  plVar14 = puVar10 + 1;
  *plVar14 = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_1108c5218;
  puVar7 = puVar10 + 3;
  puStack_1c0 = (undefined8 *)0x0;
  puStack_1b8 = (undefined8 *)0x0;
  puStack_1d8 = puStack_118;
  puStack_1e0 = puStack_120;
  puStack_120 = (undefined8 *)0x0;
  puStack_118 = (undefined8 *)0x0;
  puStack_150 = (undefined8 *)0x0;
  lStack_148 = 0;
  lStack_88 = lStack_178;
  puStack_90 = puStack_180;
  puStack_180 = (undefined8 *)0x0;
  lStack_178 = 0;
  puStack_f0 = puVar13;
  puStack_e8 = puVar8;
  func_0x00010597cef8(puVar7,&puStack_f0,&puStack_1e0,&puStack_80,&puStack_90);
  func_0x000100902b24(&puStack_90);
  func_0x000100558bb4(&puStack_80);
  func_0x000100450be4(&puStack_1e0);
  func_0x00010597d61c(&puStack_f0);
  puStack_a0 = puVar7;
  puStack_98 = puVar10;
  if ((puVar10[6] == 0) || (*(long *)(puVar10[6] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar2) {
        *plVar14 = *plVar14 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      puStack_1e0 = puVar7;
      puStack_1d8 = puVar10;
    } while (cVar1 != '\0');
    do {
      func_0x0001059827e8();
    } while (extraout_w11_03 != 0);
    puStack_f0 = (undefined8 *)puVar10[5];
    puVar10[5] = puVar7;
    puVar10[6] = puVar10;
    func_0x00010597d644(&puStack_f0);
    func_0x00010597d5a4(&puStack_1e0);
  }
  plVar11 = (long *)*param_6;
  puStack_f0 = puVar10 + 4;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = *plVar14 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_e8 = puVar10;
  (**(code **)(*plVar11 + 0x10))(plVar11,&puStack_f0);
  func_0x000105959898(&puStack_f0);
  param_1[1] = (long)puStack_98;
  *param_1 = (long)puStack_a0;
  puStack_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  func_0x00010597d5a4(&puStack_a0);
  FUN_1059824ac(&puStack_1c0);
  func_0x000100902aac(&uStack_1b0);
  func_0x000100902aac(&puStack_d0);
  func_0x00010598245c(&puStack_1a0);
  FUN_1059823c4(&puStack_190);
  func_0x0001009047bc(&puStack_180);
  FUN_10598051c(&uStack_170);
  FUN_105982374(&puStack_160);
  func_0x000100558bb4(&puStack_150);
  func_0x000100558bb4(&uStack_140);
  func_0x0001005544a0(auStack_130);
  func_0x000100450be4(&puStack_120);
  func_0x000100078bd8(auStack_108);
  return;
}



/* Entry: 105981814; end: 10598185b;  */

void FUN_105981814(long param_1)

{
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd0) = 1;
    if (*(long **)(param_1 + 0x48) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105981834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10598185c; end: 1059818a3;  */

void FUN_10598185c(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  for (puVar2 = *(undefined4 **)(param_1 + 0x20); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_105981910(param_1,*puVar2,param_2);
  }
  return;
}



/* Entry: 1059818a4; end: 10598190f;  */

void FUN_1059818a4(long param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((((*(byte *)(param_1 + 200) & 1) == 0) && (param_2 == 0)) && (*(long *)(param_1 + 0x40) != 0))
  {
    puVar1 = *(undefined4 **)(param_1 + 0x20);
    for (puVar2 = *(undefined4 **)(param_1 + 0x18); puVar2 != puVar1; puVar2 = puVar2 + 1) {
      FUN_105981910(param_1 + -8,*puVar2,1);
    }
    return;
  }
  return;
}



/* Entry: 105981910; end: 105981eef;  */

void FUN_105981910(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar10;
  int iVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 *unaff_x27;
  long *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar12;
  
  do {
    *(long **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined1 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    iVar5 = (int)param_2;
    *(int *)((long)register0x00000008 + -0x13c) = iVar5;
    if (((*(byte *)(param_1 + 0x1a) & 1) == 0) && (unaff_x21 = param_1, param_1[9] != 0)) {
      unaff_x19 = (long *)param_1[0xd];
      (**(code **)(*unaff_x19 + 0x10))();
      unaff_x23 = (undefined8 *)&UNK_1108c28a8;
      unaff_x20 = param_2;
      if (((ulong)unaff_x19 & 1) == 0) {
        plVar4 = param_1 + 0x12;
        plVar6 = plVar4;
        plVar8 = plVar4;
        while (plVar10 = (long *)*plVar8, plVar10 != (long *)0x0) {
          lVar7 = 8;
          if (iVar5 <= *(int *)((long)plVar10 + 0x1c)) {
            lVar7 = 0;
          }
          plVar8 = (long *)((long)plVar10 + lVar7);
          if (iVar5 <= *(int *)((long)plVar10 + 0x1c)) {
            plVar6 = plVar10;
          }
        }
        if (((plVar4 != plVar6) && (*(int *)((long)plVar6 + 0x1c) <= iVar5)) && (0 < (int)plVar6[4])
           ) {
          unaff_x22 = (long *)&UNK_10f316f26;
LAB_1059819d4:
          unaff_x21 = (long *)param_1[0xb];
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined ***)((long)register0x00000008 + -0xa0) = &PTR_FUN_1108c28b8;
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined4 *)((long)register0x00000008 + -0x80) = 0x1b;
          func_0x000105982860();
          func_0x000105982898();
          func_0x000105982834();
          func_0x000105982878();
          func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x120),&UNK_10f316ebf);
          param_2 = unaff_x19;
          func_0x000100906e58(unaff_x19,(undefined1 *)((long)register0x00000008 + -0x120),unaff_x22)
          ;
          FUN_10596dc7c((undefined1 *)((long)register0x00000008 + -0xd0));
          func_0x000105982850();
          func_0x000105982848();
          func_0x000105982858();
          func_0x000100907750((undefined1 *)((long)register0x00000008 + -0xa0));
          func_0x0001059828b8(*(undefined8 *)(*unaff_x21 + 0x18));
          func_0x000100907750((undefined1 *)((long)register0x00000008 + -0xd0));
          goto LAB_105981db8;
        }
      }
      iVar11 = (int)param_3;
      if (4 < iVar11 - 2U) {
        if (iVar11 == 1) {
          unaff_x19 = (long *)param_1[0xf];
          (**(code **)(*unaff_x19 + 0x10))();
          if (((ulong)unaff_x19 & 1) != 0) goto LAB_105981a7c;
        }
        plVar4 = param_1 + 0x18;
        unaff_x22 = (long *)&UNK_10f316f35;
        while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
          if (*(int *)((long)plVar4 + 0x1c) <= iVar5) {
            if (iVar5 <= *(int *)((long)plVar4 + 0x1c)) goto LAB_1059819d4;
            plVar4 = plVar4 + 1;
          }
        }
      }
LAB_105981a7c:
      func_0x0001059828ac();
      *(long *)((long)register0x00000008 + -0x180) = (long)(int)*unaff_x19;
      func_0x0001059828ac();
      *(int *)unaff_x19 = (int)*unaff_x19 + 1;
      plVar4 = (long *)param_1[2];
      unaff_x27 = (undefined1 *)param_1[3];
      *(long **)((long)register0x00000008 + -0xe8) = plVar4;
      *(undefined1 **)((long)register0x00000008 + -0xe0) = unaff_x27;
      if (unaff_x27 == (undefined1 *)0x0) {
        unaff_x26 = (long *)0x0;
        unaff_x22 = plVar4;
      }
      else {
        do {
          func_0x0001059827b8();
        } while (extraout_w10 != 0);
        unaff_x26 = (long *)param_1[3];
        unaff_x22 = (long *)param_1[2];
      }
      *(int *)((long)register0x00000008 + -0xd8) = iVar5;
      *(long **)((long)register0x00000008 + -0x100) = unaff_x22;
      *(long **)((long)register0x00000008 + -0xf8) = unaff_x26;
      if (unaff_x26 != (long *)0x0) {
        do {
          func_0x0001059827b8();
        } while (extraout_w10_00 != 0);
      }
      *(int *)((long)register0x00000008 + -0xf0) = iVar5;
      unaff_x23 = (undefined8 *)0x90;
      __Znwm();
      unaff_x28 = unaff_x23 + 1;
      *unaff_x28 = 0;
      unaff_x23[2] = 0;
      *unaff_x23 = &PTR_DAT_1108c5268;
      unaff_x24 = unaff_x23 + 3;
      *(code **)((long)register0x00000008 + -0xa0) = FUN_10598251c;
      *(undefined ***)((long)register0x00000008 + -0x98) = &PTR_FUN_1108c52a8;
      *(long **)((long)register0x00000008 + -0x90) = plVar4;
      *(undefined1 **)((long)register0x00000008 + -0x88) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
      *(int *)((long)register0x00000008 + -0x80) = iVar5;
      *(code **)((long)register0x00000008 + -0xd0) = FUN_105982690;
      *(undefined ***)((long)register0x00000008 + -200) = &PTR_FUN_1108c52c0;
      *(long **)((long)register0x00000008 + -0xc0) = unaff_x22;
      *(long **)((long)register0x00000008 + -0xb8) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
      *(int *)((long)register0x00000008 + -0xb0) = iVar5;
      lVar7 = param_1[8];
      lVar12 = param_1[7];
      *(long *)((long)register0x00000008 + -0x118) = param_1[8];
      *(long *)((long)register0x00000008 + -0x120) = lVar12;
      if (lVar7 != 0) {
        do {
          func_0x0001059827b8();
        } while (extraout_w10_01 != 0);
      }
      FUN_1059808cc(unaff_x24,(undefined1 *)((long)register0x00000008 + -0xa0),
                    (undefined1 *)((long)register0x00000008 + -0xd0),
                    (undefined1 *)((long)register0x00000008 + -0x120));
      func_0x000100558bb4((undefined1 *)((long)register0x00000008 + -0x120));
      (*(code *)**(undefined8 **)((long)register0x00000008 + -200))
                ((undefined1 *)((long)register0x00000008 + -200));
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x98))
                ((undefined1 *)((long)register0x00000008 + -0x98));
      *(undefined8 **)((long)register0x00000008 + -0x150) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x148) = unaff_x23;
      func_0x0001059821e0((undefined1 *)((long)register0x00000008 + -0x100));
      func_0x0001059821e0((undefined1 *)((long)register0x00000008 + -0xe8));
      unaff_x25 = (long *)param_1[9];
      *(undefined8 **)((long)register0x00000008 + -0x160) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x158) = unaff_x23;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(unaff_x28,0x10);
        if (bVar2) {
          *unaff_x28 = *unaff_x28 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      (**(code **)(*unaff_x25 + 0x18))
                (unaff_x25,param_2,param_3,(undefined1 *)((long)register0x00000008 + -0x160));
      plVar4 = (long *)((long)register0x00000008 + -0x160);
      func_0x00010598274c();
      unaff_x19 = param_3;
      if (unaff_x25 != (long *)0x0) {
        *(int *)((long)register0x00000008 + -0x178) = iVar5;
        *(int *)((long)register0x00000008 + -0x174) = iVar11;
        unaff_x27 = (undefined1 *)((long)register0x00000008 + -0x178);
        *(undefined8 **)((long)register0x00000008 + -0x170) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x168) = unaff_x23;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(unaff_x28,0x10);
          if (bVar2) {
            *unaff_x28 = *unaff_x28 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        plVar8 = (long *)param_1[0x15];
        unaff_x26 = param_1 + 0x15;
        while (plVar6 = unaff_x26, plVar8 != (long *)0x0) {
          while (unaff_x22 = plVar8, (long *)unaff_x22[4] <= unaff_x25) {
            if (unaff_x25 <= (long *)unaff_x22[4]) goto LAB_105981cf4;
            plVar8 = (long *)unaff_x22[1];
            if ((long *)unaff_x22[1] == (long *)0x0) {
              unaff_x26 = unaff_x22;
              plVar6 = unaff_x22 + 1;
              goto LAB_105981ca8;
            }
          }
          unaff_x26 = unaff_x22;
          plVar8 = (long *)*unaff_x22;
        }
LAB_105981ca8:
        puVar3 = (undefined8 *)0x40;
        __Znwm();
        uVar9 = *(undefined8 *)((long)register0x00000008 + -0x178);
        puVar3[4] = unaff_x25;
        puVar3[5] = uVar9;
        puVar3[6] = unaff_x24;
        puVar3[7] = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = unaff_x26;
        *plVar6 = (long)puVar3;
        if (*(long *)param_1[0x14] != 0) {
          param_1[0x14] = *(long *)param_1[0x14];
        }
        plVar4 = (long *)param_1[0x15];
        func_0x00010002c5b0();
        param_1[0x16] = param_1[0x16] + 1;
        unaff_x22 = unaff_x26;
        unaff_x26 = plVar6;
LAB_105981cf4:
        param_1 = (long *)param_1[0xb];
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined ***)((long)register0x00000008 + -0xa0) = &PTR_FUN_1108c28b8;
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x80) = 0x19;
        func_0x000105982860();
        func_0x000105982898();
        func_0x000105982834();
        func_0x000105982878();
        func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x120),&UNK_10f316f47);
        __ZNSt3__19to_stringEm
                  ((undefined1 *)((long)register0x00000008 + -0x138),
                   *(undefined8 *)((long)register0x00000008 + -0x180));
        param_2 = plVar4;
        FUN_105973c64(plVar4,(undefined1 *)((long)register0x00000008 + -0x120),
                      (undefined1 *)((long)register0x00000008 + -0x138));
        FUN_10596dc7c((undefined1 *)((long)register0x00000008 + -0xd0));
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                  ((undefined1 *)((long)register0x00000008 + -0x138));
        func_0x000105982850();
        func_0x000105982848();
        func_0x000105982858();
        func_0x000100907750((undefined1 *)((long)register0x00000008 + -0xa0));
        func_0x0001059828b8(*(undefined8 *)(*param_1 + 0x18));
        func_0x000100907750((undefined1 *)((long)register0x00000008 + -0xd0));
        func_0x000105982728((undefined1 *)((long)register0x00000008 + -0x170));
        unaff_x19 = plVar4;
      }
      func_0x000105982728((undefined1 *)((long)register0x00000008 + -0x150));
      unaff_x21 = param_1;
    }
LAB_105981db8:
    while( true ) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70))
      {
        return;
      }
      ___stack_chk_fail();
      func_0x0001059827f8();
      func_0x000100907750((undefined1 *)((long)register0x00000008 + -0xd0));
      if ((int)unaff_x19 != 1) break;
      ___cxa_begin_catch(unaff_x20);
      ___cxa_end_catch();
    }
    unaff_x30 = FUN_105981ef0;
    plVar4 = unaff_x20;
    __Unwind_Resume();
    param_1 = plVar4 + -1;
    if (((*(byte *)(plVar4 + 0x19) & 1) != 0) || (plVar4[8] == 0)) {
      return;
    }
    param_3 = (long *)0x4;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x180);
  } while( true );
}



/* Entry: 105981ef0; end: 105981f3f;  */

/* WARNING: Removing unreachable block (ram,0x000105981ab8) */
/* WARNING: Removing unreachable block (ram,0x000105981ac0) */
/* WARNING: Removing unreachable block (ram,0x000105981ad4) */
/* WARNING: Removing unreachable block (ram,0x000105981ae0) */
/* WARNING: Removing unreachable block (ram,0x000105981ae8) */
/* WARNING: Removing unreachable block (ram,0x000105981af4) */
/* WARNING: Removing unreachable block (ram,0x000105981afc) */

void FUN_105981ef0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar9;
  long *plVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar11;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 *unaff_x27;
  long *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long lVar12;
  
  do {
    plVar11 = param_1 + -1;
    if (((*(byte *)(param_1 + 0x19) & 1) != 0) || (param_1[8] == 0)) {
      return;
    }
    *(long **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined1 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    iVar5 = (int)param_2;
    *(int *)((long)register0x00000008 + -0x13c) = iVar5;
    if (((*(byte *)(param_1 + 0x19) & 1) == 0) && (unaff_x21 = plVar11, param_1[8] != 0)) {
      unaff_x19 = (long *)param_1[0xc];
      (**(code **)(*unaff_x19 + 0x10))();
      unaff_x23 = (undefined8 *)&UNK_1108c28a8;
      unaff_x20 = param_2;
      if (((ulong)unaff_x19 & 1) == 0) {
        plVar4 = param_1 + 0x11;
        plVar6 = plVar4;
        plVar9 = plVar4;
        while (plVar10 = (long *)*plVar9, plVar10 != (long *)0x0) {
          lVar7 = 8;
          if (iVar5 <= *(int *)((long)plVar10 + 0x1c)) {
            lVar7 = 0;
          }
          plVar9 = (long *)((long)plVar10 + lVar7);
          if (iVar5 <= *(int *)((long)plVar10 + 0x1c)) {
            plVar6 = plVar10;
          }
        }
        if (((plVar4 != plVar6) && (*(int *)((long)plVar6 + 0x1c) <= iVar5)) && (0 < (int)plVar6[4])
           ) {
          unaff_x22 = (long *)&UNK_10f316f26;
          unaff_x21 = (long *)param_1[10];
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined ***)((long)register0x00000008 + -0xa0) = &PTR_FUN_1108c28b8;
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined4 *)((long)register0x00000008 + -0x80) = 0x1b;
          func_0x000105982860();
          func_0x000105982898();
          func_0x000105982834();
          func_0x000105982878();
          func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x120),&UNK_10f316ebf);
          param_2 = unaff_x19;
          func_0x000100906e58(unaff_x19,(undefined1 *)((long)register0x00000008 + -0x120),
                              &UNK_10f316f26);
          FUN_10596dc7c((undefined1 *)((long)register0x00000008 + -0xd0));
          func_0x000105982850();
          func_0x000105982848();
          func_0x000105982858();
          func_0x000100907750((undefined1 *)((long)register0x00000008 + -0xa0));
          func_0x0001059828b8(*(undefined8 *)(*unaff_x21 + 0x18));
          func_0x000100907750((undefined1 *)((long)register0x00000008 + -0xd0));
          goto LAB_105981db8;
        }
      }
      func_0x0001059828ac();
      *(long *)((long)register0x00000008 + -0x180) = (long)(int)*unaff_x19;
      func_0x0001059828ac();
      *(int *)unaff_x19 = (int)*unaff_x19 + 1;
      plVar4 = (long *)param_1[1];
      unaff_x27 = (undefined1 *)param_1[2];
      *(long **)((long)register0x00000008 + -0xe8) = plVar4;
      *(undefined1 **)((long)register0x00000008 + -0xe0) = unaff_x27;
      if (unaff_x27 == (undefined1 *)0x0) {
        unaff_x26 = (long *)0x0;
        unaff_x22 = plVar4;
      }
      else {
        do {
          func_0x0001059827b8();
        } while (extraout_w10 != 0);
        unaff_x26 = (long *)param_1[2];
        unaff_x22 = (long *)param_1[1];
      }
      *(int *)((long)register0x00000008 + -0xd8) = iVar5;
      *(long **)((long)register0x00000008 + -0x100) = unaff_x22;
      *(long **)((long)register0x00000008 + -0xf8) = unaff_x26;
      if (unaff_x26 != (long *)0x0) {
        do {
          func_0x0001059827b8();
        } while (extraout_w10_00 != 0);
      }
      *(int *)((long)register0x00000008 + -0xf0) = iVar5;
      unaff_x23 = (undefined8 *)0x90;
      __Znwm();
      unaff_x28 = unaff_x23 + 1;
      *unaff_x28 = 0;
      unaff_x23[2] = 0;
      *unaff_x23 = &PTR_DAT_1108c5268;
      unaff_x24 = unaff_x23 + 3;
      *(code **)((long)register0x00000008 + -0xa0) = FUN_10598251c;
      *(undefined ***)((long)register0x00000008 + -0x98) = &PTR_FUN_1108c52a8;
      *(long **)((long)register0x00000008 + -0x90) = plVar4;
      *(undefined1 **)((long)register0x00000008 + -0x88) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
      *(int *)((long)register0x00000008 + -0x80) = iVar5;
      *(code **)((long)register0x00000008 + -0xd0) = FUN_105982690;
      *(undefined ***)((long)register0x00000008 + -200) = &PTR_FUN_1108c52c0;
      *(long **)((long)register0x00000008 + -0xc0) = unaff_x22;
      *(long **)((long)register0x00000008 + -0xb8) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
      *(int *)((long)register0x00000008 + -0xb0) = iVar5;
      lVar7 = param_1[7];
      lVar12 = param_1[6];
      *(long *)((long)register0x00000008 + -0x118) = param_1[7];
      *(long *)((long)register0x00000008 + -0x120) = lVar12;
      if (lVar7 != 0) {
        do {
          func_0x0001059827b8();
        } while (extraout_w10_01 != 0);
      }
      FUN_1059808cc(unaff_x24,(undefined1 *)((long)register0x00000008 + -0xa0),
                    (undefined1 *)((long)register0x00000008 + -0xd0),
                    (undefined1 *)((long)register0x00000008 + -0x120));
      func_0x000100558bb4((undefined1 *)((long)register0x00000008 + -0x120));
      (*(code *)**(undefined8 **)((long)register0x00000008 + -200))
                ((undefined1 *)((long)register0x00000008 + -200));
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x98))
                ((undefined1 *)((long)register0x00000008 + -0x98));
      *(undefined8 **)((long)register0x00000008 + -0x150) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x148) = unaff_x23;
      func_0x0001059821e0((undefined1 *)((long)register0x00000008 + -0x100));
      func_0x0001059821e0((undefined1 *)((long)register0x00000008 + -0xe8));
      unaff_x25 = (long *)param_1[8];
      *(undefined8 **)((long)register0x00000008 + -0x160) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x158) = unaff_x23;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(unaff_x28,0x10);
        if (bVar2) {
          *unaff_x28 = *unaff_x28 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      (**(code **)(*unaff_x25 + 0x18))
                (unaff_x25,param_2,4,(undefined1 *)((long)register0x00000008 + -0x160));
      plVar4 = (long *)((long)register0x00000008 + -0x160);
      func_0x00010598274c();
      unaff_x19 = (long *)0x4;
      if (unaff_x25 != (long *)0x0) {
        *(int *)((long)register0x00000008 + -0x178) = iVar5;
        *(undefined4 *)((long)register0x00000008 + -0x174) = 4;
        unaff_x27 = (undefined1 *)((long)register0x00000008 + -0x178);
        *(undefined8 **)((long)register0x00000008 + -0x170) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x168) = unaff_x23;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(unaff_x28,0x10);
          if (bVar2) {
            *unaff_x28 = *unaff_x28 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        unaff_x22 = param_1 + 0x14;
        plVar11 = (long *)*unaff_x22;
        unaff_x26 = unaff_x22;
        if ((long *)*unaff_x22 != (long *)0x0) {
          do {
            while (unaff_x22 = plVar11, unaff_x25 < (long *)unaff_x22[4]) {
              plVar11 = (long *)*unaff_x22;
              unaff_x26 = unaff_x22;
              if ((long *)*unaff_x22 == (long *)0x0) goto LAB_105981ca8;
            }
            if (unaff_x25 <= (long *)unaff_x22[4]) goto LAB_105981cf4;
            plVar11 = (long *)unaff_x22[1];
          } while ((long *)unaff_x22[1] != (long *)0x0);
          unaff_x26 = unaff_x22 + 1;
        }
LAB_105981ca8:
        puVar3 = (undefined8 *)0x40;
        __Znwm();
        uVar8 = *(undefined8 *)((long)register0x00000008 + -0x178);
        puVar3[4] = unaff_x25;
        puVar3[5] = uVar8;
        puVar3[6] = unaff_x24;
        puVar3[7] = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = unaff_x22;
        *unaff_x26 = (long)puVar3;
        if (*(long *)param_1[0x13] != 0) {
          param_1[0x13] = *(long *)param_1[0x13];
        }
        plVar4 = (long *)param_1[0x14];
        func_0x00010002c5b0();
        param_1[0x15] = param_1[0x15] + 1;
LAB_105981cf4:
        plVar11 = (long *)param_1[10];
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined ***)((long)register0x00000008 + -0xa0) = &PTR_FUN_1108c28b8;
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x80) = 0x19;
        func_0x000105982860();
        func_0x000105982898();
        func_0x000105982834();
        func_0x000105982878();
        func_0x00010002b838((undefined1 *)((long)register0x00000008 + -0x120),&UNK_10f316f47);
        __ZNSt3__19to_stringEm
                  ((undefined1 *)((long)register0x00000008 + -0x138),
                   *(undefined8 *)((long)register0x00000008 + -0x180));
        param_2 = plVar4;
        FUN_105973c64(plVar4,(undefined1 *)((long)register0x00000008 + -0x120),
                      (undefined1 *)((long)register0x00000008 + -0x138));
        FUN_10596dc7c((undefined1 *)((long)register0x00000008 + -0xd0));
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                  ((undefined1 *)((long)register0x00000008 + -0x138));
        func_0x000105982850();
        func_0x000105982848();
        func_0x000105982858();
        func_0x000100907750((undefined1 *)((long)register0x00000008 + -0xa0));
        func_0x0001059828b8(*(undefined8 *)(*plVar11 + 0x18));
        func_0x000100907750((undefined1 *)((long)register0x00000008 + -0xd0));
        func_0x000105982728((undefined1 *)((long)register0x00000008 + -0x170));
        unaff_x19 = plVar4;
      }
      func_0x000105982728((undefined1 *)((long)register0x00000008 + -0x150));
      unaff_x21 = plVar11;
    }
LAB_105981db8:
    while( true ) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70))
      {
        return;
      }
      ___stack_chk_fail();
      func_0x0001059827f8();
      func_0x000100907750((undefined1 *)((long)register0x00000008 + -0xd0));
      if ((int)unaff_x19 != 1) break;
      ___cxa_begin_catch(unaff_x20);
      ___cxa_end_catch();
    }
    unaff_x30 = FUN_105981ef0;
    param_1 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x180);
  } while( true );
}



/* Entry: 105981f40; end: 105982003;  */

long * FUN_105981f40(long *param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  iVar1 = *param_2;
  plVar3 = (long *)param_1[1];
  plVar4 = param_1 + 1;
  do {
    plVar5 = plVar4;
    if (plVar3 == (long *)0x0) {
LAB_105981fa4:
      plVar2 = (long *)0x28;
      __Znwm();
      *(int *)((long)plVar2 + 0x1c) = iVar1;
      *(undefined4 *)(plVar2 + 4) = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar4;
      *plVar5 = (long)plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x00010002c5b0(param_1[1],plVar2);
      param_1[2] = param_1[2] + 1;
LAB_105981fec:
      return plVar2 + 4;
    }
    while (plVar2 = plVar3, plVar4 = plVar2, *(int *)((long)plVar2 + 0x1c) <= iVar1) {
      if (iVar1 <= *(int *)((long)plVar2 + 0x1c)) goto LAB_105981fec;
      plVar3 = (long *)plVar2[1];
      if ((long *)plVar2[1] == (long *)0x0) {
        plVar5 = plVar2 + 1;
        goto LAB_105981fa4;
      }
    }
    plVar3 = (long *)*plVar2;
  } while( true );
}



/* Entry: 105982004; end: 105982183;  */

void FUN_105982004(long param_1,int param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_70 [28];
  int iStack_54;
  undefined *puStack_50;
  undefined8 uStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  plVar3 = (long *)(param_1 + 0x90);
  plVar4 = plVar3;
  plVar6 = plVar3;
  while (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
    lVar1 = 8;
    if (param_2 <= *(int *)((long)plVar5 + 0x1c)) {
      lVar1 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar1);
    if (param_2 <= *(int *)((long)plVar5 + 0x1c)) {
      plVar6 = plVar5;
    }
  }
  iStack_54 = param_2;
  if ((plVar3 == plVar6) || (param_2 < *(int *)((long)plVar6 + 0x1c))) {
    puStack_50 = &UNK_10f316e98;
    uStack_48 = 0;
    piStack_40 = &iStack_54;
    uStack_38 = 0x105982770;
    func_0x0001003a91d4(&UNK_10f316e57);
    func_0x0001003a9204(auStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  }
  else {
    lVar1 = plVar6[4];
    iVar2 = (int)lVar1 + -1;
    *(int *)(plVar6 + 4) = iVar2;
    if (iVar2 == 0 || (int)lVar1 < 1) {
      plVar3 = plVar6;
      func_0x00010002c7d4();
      if (*(long **)(param_1 + 0x88) == plVar6) {
        *(long **)(param_1 + 0x88) = plVar3;
      }
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -1;
      FUN_10530d618(*(undefined8 *)(param_1 + 0x90),plVar6);
      __ZdlPv(plVar6);
    }
  }
  plVar3 = (long *)(param_1 + 0xa8);
  plVar4 = plVar3;
  plVar6 = plVar3;
  while (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
    lVar1 = 8;
    if (param_3 <= (ulong)plVar5[4]) {
      lVar1 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar1);
    if (param_3 <= (ulong)plVar5[4]) {
      plVar6 = plVar5;
    }
  }
  if ((plVar3 != plVar6) && ((ulong)plVar6[4] <= param_3)) {
    plVar3 = plVar6;
    func_0x00010002c7d4();
    if (*(long **)(param_1 + 0xa0) == plVar6) {
      *(long **)(param_1 + 0xa0) = plVar3;
    }
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + -1;
    FUN_10530d618(*(undefined8 *)(param_1 + 0xa8),plVar6);
    FUN_105982728(plVar6 + 6);
    __ZdlPv(plVar6);
  }
  return;
}



/* Entry: 105982184; end: 105982187;  */

undefined8 * FUN_105982184(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c4f90;
  param_1[1] = &PTR_FUN_1108c4fe8;
  func_0x000105982280(param_1[0x18]);
  func_0x0001059822b4(param_1[0x15]);
  func_0x0001059822f0(param_1[0x12]);
  func_0x000100902aac(param_1 + 0xf);
  func_0x000100902aac(param_1 + 0xd);
  func_0x000100902b24(param_1 + 0xb);
  func_0x000105982324(param_1 + 9);
  func_0x000100558bb4(param_1 + 7);
  func_0x0001059821ac(param_1 + 4);
  func_0x0001059821e0(param_1 + 2);
  return param_1;
}



/* Entry: 105982188; end: 10598219b;  */

void FUN_105982188(void)

{
  func_0x000105982204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10598219c; end: 1059821ab;  */

undefined8 * FUN_10598219c(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_1108c4f90;
  *param_1 = &PTR_FUN_1108c4fe8;
  func_0x000105982280(param_1[0x17]);
  func_0x0001059822b4(param_1[0x14]);
  func_0x0001059822f0(param_1[0x11]);
  func_0x000100902aac(param_1 + 0xe);
  func_0x000100902aac(param_1 + 0xc);
  func_0x000100902b24(param_1 + 10);
  func_0x000105982324(param_1 + 8);
  func_0x000100558bb4(param_1 + 6);
  func_0x0001059821ac(param_1 + 3);
  func_0x0001059821e0(param_1 + 1);
  return param_1 + -1;
}



/* Entry: 1059821ac; end: 105982347;  */

undefined8 FUN_1059821ac(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10598102c(&uStack_28);
  return param_1;
}



/* Entry: 105982348; end: 10598234b;  */

void FUN_105982348(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c50d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10598234c; end: 10598235f;  */

void FUN_10598234c(void)

{
  func_0x000105982368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105982360; end: 105982373;  */

void FUN_105982360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059827d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105982374; end: 105982397;  */

void FUN_105982374(long param_1)

{
  func_0x000105982820();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105982398; end: 10598239b;  */

void FUN_105982398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5128;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10598239c; end: 1059823af;  */

void FUN_10598239c(void)

{
  func_0x0001059823b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059823b0; end: 1059823c3;  */

void FUN_1059823b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059827d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1059823c4; end: 1059823e7;  */

void FUN_1059823c4(long param_1)

{
  func_0x000105982820();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1059823e8; end: 1059823eb;  */

void FUN_1059823e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5178;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1059823ec; end: 1059823ff;  */

void FUN_1059823ec(void)

{
  FUN_10598242c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105982400; end: 105982407;  */

void FUN_105982400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059827d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105982408; end: 10598242b;  */

void FUN_105982408(long param_1)

{
  func_0x000105982820();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10598242c; end: 105982437;  */

void FUN_10598242c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5178;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105982438; end: 10598247f;  */

void FUN_105982438(long param_1)

{
  func_0x000105982820();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 105982480; end: 105982483;  */

void FUN_105982480(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c51c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105982484; end: 105982497;  */

void FUN_105982484(void)

{
  func_0x0001059824a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105982498; end: 1059824ab;  */

void FUN_105982498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059827d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1059824ac; end: 1059824cf;  */

void FUN_1059824ac(long param_1)

{
  func_0x000105982820();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1059824d0; end: 1059824d3;  */

void FUN_1059824d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5218;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1059824d4; end: 1059824e7;  */

void FUN_1059824d4(void)

{
  func_0x0001059824f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059824e8; end: 1059824ff;  */

void FUN_1059824e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059827d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105982500; end: 105982513;  */

void FUN_105982500(void)

{
  func_0x00010598271c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105982514; end: 10598251b;  */

void FUN_105982514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001059827d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10598251c; end: 10598263b;  */

void FUN_10598251c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long alStack_50 [2];
  
  FUN_10598263c(alStack_50,param_2 + 0x10);
  if ((alStack_50[0] != 0) && ((*(byte *)(alStack_50[0] + 0xd0) & 1) == 0)) {
    iVar1 = *(int *)(param_2 + 0x20);
    puVar3 = (undefined8 *)(alStack_50[0] + 0xc0);
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = puVar3;
    if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
      do {
        while (puVar3 = puVar2, iVar1 < *(int *)((long)puVar3 + 0x1c)) {
          puVar2 = (undefined8 *)*puVar3;
          puVar4 = puVar3;
          if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_1059825a4;
        }
        if (iVar1 <= *(int *)((long)puVar3 + 0x1c)) goto LAB_1059825e4;
        puVar2 = (undefined8 *)puVar3[1];
      } while ((undefined8 *)puVar3[1] != (undefined8 *)0x0);
      puVar4 = puVar3 + 1;
    }
LAB_1059825a4:
    puVar2 = (undefined8 *)0x20;
    __Znwm();
    *(int *)((long)puVar2 + 0x1c) = iVar1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = puVar3;
    *puVar4 = puVar2;
    if (**(long **)(alStack_50[0] + 0xb8) != 0) {
      *(long *)(alStack_50[0] + 0xb8) = **(long **)(alStack_50[0] + 0xb8);
    }
    func_0x00010002c5b0(*(undefined8 *)(alStack_50[0] + 0xc0));
    *(long *)(alStack_50[0] + 200) = *(long *)(alStack_50[0] + 200) + 1;
LAB_1059825e4:
    FUN_105982004(alStack_50[0],iVar1,param_1);
  }
  func_0x000105982870();
  return;
}



/* Entry: 10598263c; end: 10598267b;  */

void FUN_10598263c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10598267c; end: 10598268f;  */

void FUN_10598267c(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000105982820();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 105982690; end: 105982707;  */

void FUN_105982690(undefined8 param_1,undefined8 param_2,long param_3)

{
  long alStack_30 [2];
  
  FUN_10598263c(alStack_30,param_3 + 0x10);
  if ((alStack_30[0] != 0) && ((*(byte *)(alStack_30[0] + 0xd0) & 1) == 0)) {
    FUN_105982004(alStack_30[0],*(undefined4 *)(param_3 + 0x20),param_1);
  }
  func_0x000105982870();
  return;
}



/* Entry: 105982708; end: 105982727;  */

void FUN_105982708(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000105982820();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 105982728; end: 1059827b7;  */

void FUN_105982728(long param_1)

{
  func_0x000105982820();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1059827b8; end: 10598297b;  */

void FUN_1059827b8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10598297c; end: 1059829fb;  */

void FUN_10598297c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xa8) = 1;
    lVar2 = *(long *)(param_1 + 0xb8);
    while (lVar2 != param_1 + 0xc0) {
      plVar1 = *(long **)(lVar2 + 0x30);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(lVar2 + 0x20),8);
      }
      func_0x00010002c7d4();
    }
    func_0x000105983440(*(undefined8 *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(long *)(param_1 + 0xb8) = param_1 + 0xc0;
  }
  return;
}



/* Entry: 1059829fc; end: 105982d5b;  */

uint * FUN_1059829fc(long param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  uint *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  uint *unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined1 *puStack_300;
  ulong uStack_2f8;
  uint *puStack_2f0;
  long lStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  uint auStack_2b8 [48];
  undefined1 uStack_1f8;
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  long lStack_148;
  ulong uStack_140;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_70;
  
  func_0x00010598428c();
  uStack_70 = extraout_x8;
  if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
    puVar3 = (uint *)0x0;
    param_1 = unaff_x19;
    goto LAB_105982cb8;
  }
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  uStack_2d0 = (undefined4)param_2;
  uStack_2c0 = param_4[1];
  uStack_2c8 = *param_4;
  uStack_2cc = param_3;
  if (param_4[1] != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10 != 0);
  }
  FUN_1059843ec(&pcStack_160);
  func_0x000105984418(&pcStack_160);
  unaff_x20 = auStack_2b8;
  _memcpy(unaff_x20,&pcStack_160,0xc0);
  uStack_1f8 = 0;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  puVar9 = (undefined8 *)(param_1 + 0xc0);
  unaff_x21 = *(ulong *)(param_1 + 0xb0);
  puVar4 = (undefined8 *)*puVar9;
  puVar10 = puVar9;
  if ((undefined8 *)*puVar9 != (undefined8 *)0x0) {
    do {
      while( true ) {
        puVar9 = puVar4;
        uVar8 = puVar9[4];
        in_ZR = unaff_x21 == uVar8;
        if (uVar8 <= unaff_x21) break;
        puVar4 = (undefined8 *)*puVar9;
        puVar10 = puVar9;
        if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_105982ae8;
      }
      in_ZR = uVar8 == unaff_x21;
      if (unaff_x21 <= uVar8) goto LAB_105982b74;
      puVar4 = (undefined8 *)puVar9[1];
    } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
    puVar10 = puVar9 + 1;
  }
LAB_105982ae8:
  puVar4 = (undefined8 *)0x158;
  __Znwm();
  puVar4[4] = unaff_x21;
  puVar4[5] = CONCAT44(uStack_2cc,uStack_2d0);
  puVar4[7] = uStack_2c0;
  puVar4[6] = uStack_2c8;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  _memcpy(puVar4 + 8,auStack_2b8,0xc0);
  *(undefined1 *)(puVar4 + 0x20) = 0;
  *(undefined1 *)(puVar4 + 0x24) = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puVar4[0x29] = 0;
  puVar4[0x2a] = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = puVar9;
  *puVar10 = puVar4;
  if (**(long **)(param_1 + 0xb8) != 0) {
    *(long *)(param_1 + 0xb8) = **(long **)(param_1 + 0xb8);
  }
  unaff_x20 = *(uint **)(param_1 + 0xc0);
  func_0x00010002c5b0(unaff_x20,puVar4);
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  unaff_x21 = *(ulong *)(param_1 + 0xb0);
LAB_105982b74:
  func_0x0001059842ac();
  uVar7 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  puVar3 = unaff_x20;
  uStack_188 = uVar7;
  lStack_180 = lVar1;
  if (lVar1 == 0) {
    lVar11 = 0;
    uVar12 = uVar7;
  }
  else {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_00 != 0);
    lVar11 = *(long *)(param_1 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 8);
  }
  uStack_1a0 = uVar12;
  lStack_198 = lVar11;
  uStack_178 = unaff_x21;
  if (lVar11 != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_01 != 0);
  }
  uStack_190 = unaff_x21;
  func_0x00010598439c();
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined ***)puVar3 = &PTR_FUN_1108c5370;
  pcStack_160 = FUN_1059834f0;
  ppuStack_158 = &PTR_FUN_1108c53b0;
  uStack_188 = 0;
  lStack_180 = 0;
  pcStack_a0 = FUN_105983a60;
  ppuStack_98 = &PTR_FUN_1108c53c8;
  uStack_1a0 = 0;
  lStack_198 = 0;
  uStack_168 = *(undefined8 *)(param_1 + 0x70);
  uStack_170 = *(undefined8 *)(param_1 + 0x68);
  uStack_150 = uVar7;
  lStack_148 = lVar1;
  uStack_140 = unaff_x21;
  uStack_90 = uVar12;
  lStack_88 = lVar11;
  uStack_80 = unaff_x21;
  if (*(long *)(param_1 + 0x70) != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_02 != 0);
  }
  FUN_10597ec1c(puVar3 + 6,&pcStack_160,&pcStack_a0,&uStack_170);
  func_0x000100558bb4(&uStack_170);
  func_0x0001059842c0(ppuStack_98);
  (*(code *)*ppuStack_158)(&ppuStack_158);
  ppuStack_158 = *(undefined ***)(unaff_x20 + 0x42);
  pcStack_160 = *(code **)(unaff_x20 + 0x40);
  *(uint **)(unaff_x20 + 0x40) = puVar3 + 6;
  *(uint **)(unaff_x20 + 0x42) = puVar3;
  FUN_10595b0ec(&pcStack_160);
  FUN_105982438(&uStack_1a0);
  FUN_105982438(&uStack_188);
  param_2 = (ulong)*unaff_x20;
  func_0x0001059842cc(*(undefined8 *)(param_1 + 0x18),param_2,unaff_x20[1]);
  (*extraout_x8_00)();
  do {
    FUN_105983358(&uStack_2d0);
    while( true ) {
      puVar3 = *(uint **)(param_1 + 0xb0);
LAB_105982cb8:
      func_0x00010598424c(uStack_70,puVar3);
      if ((bool)in_ZR) {
        return puVar3;
      }
      ___stack_chk_fail();
      func_0x0001059843e0();
      FUN_105982438(&uStack_1a0);
      FUN_105982438(&uStack_188);
      in_ZR = (int)unaff_x21 == 1;
      if ((bool)in_ZR) break;
      FUN_105983358(&uStack_2d0);
      in_ZR = (int)unaff_x21 == 1;
      if (!(bool)in_ZR) {
        puVar5 = unaff_x20;
        __Unwind_Resume();
        puVar6 = auStack_340;
        pcStack_2d8 = FUN_105982d5c;
        puVar3 = puVar5 + 0x2e;
        uVar8 = param_2;
        puStack_2f0 = unaff_x20;
        lStack_2e8 = param_1;
        puStack_2e0 = &stack0xfffffffffffffff0;
        func_0x0001059841ac();
        if (puVar5 + 0x30 == puVar3) {
          puStack_310 = &UNK_10f316f91;
          uStack_308 = 0;
          puStack_300 = (undefined1 *)0x15d;
          uStack_2f8 = 0;
          func_0x0001003a91d4(&UNK_10f315928);
          func_0x0001003a9204(auStack_340);
          func_0x0001005d466c();
          uStack_308 = 0;
          puStack_310 = (undefined *)param_2;
          puStack_300 = puVar6;
          uStack_2f8 = uVar8;
          func_0x0001003a91d4(&UNK_10f316f54);
          func_0x0001003a9204(auStack_328);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_340);
          uVar7 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    ();
          ___cxa_throw(uVar7,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x105982e30);
          (*pcVar2)();
        }
        return puVar3 + 10;
      }
      ___cxa_begin_catch(unaff_x20);
      ___cxa_end_catch();
    }
    ___cxa_begin_catch(unaff_x20);
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 105982d5c; end: 105982e5b;  */

long FUN_105982d5c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  puVar3 = auStack_70;
  lVar2 = param_1 + 0xb8;
  uVar4 = param_2;
  func_0x0001059841ac();
  if (param_1 + 0xc0 != lVar2) {
    return lVar2 + 0x28;
  }
  puStack_40 = &UNK_10f316f91;
  uStack_38 = 0;
  puStack_30 = (undefined1 *)0x15d;
  uStack_28 = 0;
  func_0x0001003a91d4(&UNK_10f315928);
  func_0x0001003a9204(auStack_70);
  func_0x0001005d466c();
  uStack_38 = 0;
  puStack_40 = (undefined *)param_2;
  puStack_30 = puVar3;
  uStack_28 = uVar4;
  func_0x0001003a91d4(&UNK_10f316f54);
  func_0x0001003a9204(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  uVar4 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  ___cxa_throw(uVar4,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105982e30);
  (*pcVar1)();
}



/* Entry: 105982e5c; end: 1059831cb;  */

void FUN_105982e5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 auStack_178 [4];
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [32];
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_68;
  
  lVar2 = param_1;
  func_0x00010598428c();
  uStack_68 = extraout_x8;
  FUN_105982d5c();
  func_0x000105984570(lVar2 + 0x18);
  uStack_138 = *(undefined8 *)(param_1 + 0x10);
  uStack_140 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10 != 0);
  }
  uStack_130 = param_2;
  FUN_10597f0f8(auStack_128,param_3);
  lStack_100 = param_5[1];
  uStack_108 = *param_5;
  if (param_5[1] != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_00 != 0);
  }
  uStack_188 = *(undefined8 *)(param_1 + 0x10);
  uStack_190 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_01 != 0);
  }
  puVar3 = auStack_178;
  uStack_180 = param_2;
  FUN_10597f0f8(puVar3,param_3);
  lStack_150 = param_5[1];
  uStack_158 = *param_5;
  if (param_5[1] != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_02 != 0);
  }
  func_0x00010598439c();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_1108c5538;
  pcStack_a0 = FUN_105983ff0;
  ppuStack_98 = &PTR_FUN_1108c5578;
  puVar4 = puVar3;
  func_0x0001059842f4();
  puVar4[1] = uStack_138;
  *puVar4 = uStack_140;
  uStack_140 = 0;
  uStack_138 = 0;
  puVar4[2] = uStack_130;
  puVar5 = puVar4;
  func_0x000105984390();
  lVar6 = lStack_100;
  uVar1 = uStack_108;
  puVar4[8] = lStack_100;
  puVar4[7] = uVar1;
  if (lVar6 != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_03 != 0);
  }
  pcStack_d0 = FUN_1059840b0;
  ppuStack_c8 = &PTR_FUN_1108c5590;
  puStack_90 = puVar4;
  func_0x0001059842f4();
  puVar5[1] = uStack_188;
  *puVar5 = uStack_190;
  uStack_190 = 0;
  uStack_188 = 0;
  puVar5[2] = uStack_180;
  FUN_10597f0f8(puVar5 + 3,auStack_178);
  puVar5[8] = lStack_150;
  puVar5[7] = uStack_158;
  if (lStack_150 != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_04 != 0);
  }
  uStack_d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  puStack_c0 = puVar5;
  if (*(long *)(param_1 + 0x70) != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_05 != 0);
  }
  FUN_1059862a4(puVar3 + 3,&pcStack_a0,&pcStack_d0,&uStack_e0);
  func_0x000100558bb4(&uStack_e0);
  (*(code *)*ppuStack_c8)(&ppuStack_c8);
  func_0x000105984384(ppuStack_98);
  func_0x0001059841a0(0);
  uStack_f0 = 0;
  uStack_e8 = 0;
  ppuStack_98 = *(undefined ***)(lVar2 + 0x128);
  pcStack_a0 = *(code **)(lVar2 + 0x120);
  *(undefined8 **)(lVar2 + 0x120) = puVar3 + 3;
  *(undefined8 **)(lVar2 + 0x128) = puVar3;
  func_0x0001059834a8(&pcStack_a0);
  func_0x0001059834a8(&uStack_f0);
  func_0x000105983300(&uStack_190);
  func_0x000105983320(&uStack_140);
  uVar7 = (ulong)*(uint *)(lVar2 + 4);
  uStack_198 = *(undefined8 *)(lVar2 + 0x128);
  uStack_1a0 = *(undefined8 *)(lVar2 + 0x120);
  if (*(long *)(lVar2 + 0x128) != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_06 != 0);
  }
  func_0x0001059842cc();
  (*extraout_x8_00)();
  func_0x0001059807ec(&uStack_1a0);
  while( true ) {
    func_0x00010598424c(uStack_68);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000105984260();
    puVar3 = &uStack_1a0;
    func_0x0001059807ec();
    in_ZR = (int)param_3 == 1;
    if (!(bool)in_ZR) break;
    func_0x00010598429c();
    ___cxa_end_catch();
  }
  func_0x000105984284();
  func_0x000105984260();
  FUN_105982d5c();
  if (uVar7 >> 0x20 == 0) {
    func_0x0001059842cc(*(undefined8 *)((long)puVar3 + 8));
    (*extraout_x8_01)();
  }
  else {
    (**(code **)(**(long **)((long)puVar3 + 8) + 0x18))(*(long **)((long)puVar3 + 8),param_3,uVar7);
  }
  func_0x0001059845bc((undefined1 *)((long)puVar3 + 0x20));
  FUN_1059845e8((undefined1 *)((long)puVar3 + 0x18),param_4 + 0x48);
  func_0x0001059842cc(*(undefined8 *)(param_4 + 0x58));
  (*extraout_x8_02)();
  lVar2 = param_4 + 0xb8;
  func_0x0001059841ac(lVar2,param_3);
  if (param_4 + 0xc0 == lVar2) {
    return;
  }
  lVar6 = lVar2;
  func_0x00010002c7d4();
  if (*(long *)(param_4 + 0xb8) == lVar2) {
    *(long *)(param_4 + 0xb8) = lVar6;
  }
  *(long *)(param_4 + 200) = *(long *)(param_4 + 200) + -1;
  FUN_10530d618(*(undefined8 *)(param_4 + 0xc0),lVar2);
  FUN_105983358(lVar2 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1059831cc; end: 1059832bf;  */

void FUN_1059831cc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  
  func_0x000105984260();
  FUN_105982d5c();
  if (param_3 >> 0x20 == 0) {
    func_0x0001059842cc(*(undefined8 *)(param_1 + 8));
    (*extraout_x8)();
  }
  else {
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  }
  func_0x0001059845bc(param_1 + 0x20);
  FUN_1059845e8(param_1 + 0x18,unaff_x19 + 0x48);
  func_0x0001059842cc(*(undefined8 *)(unaff_x19 + 0x58));
  (*extraout_x8_00)();
  lVar1 = unaff_x19 + 0xb8;
  func_0x0001059841ac();
  if (unaff_x19 + 0xc0 != lVar1) {
    lVar2 = lVar1;
    func_0x00010002c7d4();
    if (*(long *)(unaff_x19 + 0xb8) == lVar1) {
      *(long *)(unaff_x19 + 0xb8) = lVar2;
    }
    *(long *)(unaff_x19 + 200) = *(long *)(unaff_x19 + 200) + -1;
    FUN_10530d618(*(undefined8 *)(unaff_x19 + 0xc0),lVar1);
    FUN_105983358(lVar1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1059832c0; end: 10598333f;  */

long FUN_1059832c0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000105984278();
  func_0x000105984304();
  lVar1 = unaff_x19;
  func_0x000105982820();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 105983340; end: 105983343;  */

undefined8 * FUN_105983340(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c52e8;
  func_0x000105983440(param_1[0x18]);
  func_0x0001001148fc(param_1 + 0x11);
  func_0x000100558bb4(param_1 + 0xf);
  func_0x000100558bb4(param_1 + 0xd);
  FUN_105982408(param_1 + 0xb);
  func_0x000100902b24(param_1 + 9);
  FUN_10598051c(param_1 + 7);
  func_0x00010595f250(param_1 + 5);
  func_0x00010595f228(param_1 + 3);
  FUN_105982438(param_1 + 1);
  return param_1;
}



/* Entry: 105983344; end: 105983357;  */

void FUN_105983344(void)

{
  FUN_1059833c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105983358; end: 1059833a7;  */

long FUN_105983358(long param_1)

{
  func_0x0001059834a8(param_1 + 0x120);
  func_0x000105983480(param_1 + 0x110);
  FUN_10595b0ec(param_1 + 0x100);
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd8);
  }
  func_0x00010598274c(param_1 + 8);
  return param_1;
}



/* Entry: 1059833a8; end: 1059833c7;  */

void FUN_1059833a8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 1059833c8; end: 1059834cf;  */

undefined8 * FUN_1059833c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c52e8;
  func_0x000105983440(param_1[0x18]);
  func_0x0001001148fc(param_1 + 0x11);
  func_0x000100558bb4(param_1 + 0xf);
  func_0x000100558bb4(param_1 + 0xd);
  FUN_105982408(param_1 + 0xb);
  func_0x000100902b24(param_1 + 9);
  FUN_10598051c(param_1 + 7);
  func_0x00010595f250(param_1 + 5);
  func_0x00010595f228(param_1 + 3);
  FUN_105982438(param_1 + 1);
  return param_1;
}



/* Entry: 1059834d0; end: 1059834d3;  */

void FUN_1059834d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c5370;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1059834d4; end: 1059834e7;  */

void FUN_1059834d4(void)

{
  func_0x000105983b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059834e8; end: 1059834ef;  */

void FUN_1059834e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105984274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1059834f0; end: 105983a0b;  */

void FUN_1059834f0(long param_1,undefined8 *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined1 in_ZR;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  ulong *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong auStack_1c0 [2];
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  ulong *puStack_180;
  ulong auStack_178 [4];
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  ulong uStack_140;
  ulong uStack_138;
  ulong *puStack_130;
  undefined1 auStack_128 [8];
  undefined1 uStack_120;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  ulong *puStack_c0;
  code *pcStack_a0;
  undefined **ppuStack_98;
  ulong *puStack_90;
  undefined8 uStack_68;
  
  puVar8 = param_3;
  func_0x00010598428c();
  puVar4 = auStack_1c0;
  puVar8 = puVar8 + 2;
  uStack_68 = extraout_x8;
  FUN_105983a0c();
  if (auStack_1c0[0] == 0) goto LAB_1059838c4;
  if ((*(byte *)(auStack_1c0[0] + 0xa8) & 1) != 0) goto LAB_1059838c4;
  puVar8 = (ulong *)param_3[4];
  func_0x000105984378();
  func_0x000105984490(puVar4 + 3,0);
  if ((char)puVar4[0x1f] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar4 + 0x1b,param_1);
    *(int *)(puVar4 + 0x1e) = *(int *)(param_1 + 0x18);
  }
  else {
    func_0x000105984370(puVar4 + 0x1b);
    *(undefined1 *)(puVar4 + 0x1f) = 1;
  }
  lVar9 = param_2[1];
  uVar14 = param_2[1];
  uVar12 = *param_2;
  puVar5 = (undefined8 *)0x40;
  __Znwm();
  plVar10 = puVar5 + 1;
  *plVar10 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_1108c53f0;
  if (lVar9 != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10 != 0);
  }
  uVar15 = *(undefined8 *)(auStack_1c0[0] + 0x80);
  uVar13 = *(undefined8 *)(auStack_1c0[0] + 0x78);
  if (*(long *)(auStack_1c0[0] + 0x80) != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_00 != 0);
  }
  puVar11 = puVar5 + 3;
  *puVar11 = &PTR_DAT_1108c5440;
  uStack_140 = 0;
  uStack_138 = 0;
  puVar5[5] = uVar14;
  puVar5[4] = uVar12;
  puVar5[7] = uVar15;
  puVar5[6] = uVar13;
  puStack_190 = (undefined8 *)0x0;
  puStack_188 = (undefined8 *)0x0;
  func_0x000100558bb4(&puStack_190);
  param_3 = &uStack_140;
  func_0x00010595b114();
  uVar3 = (int)*puVar4 - 4;
  in_ZR = uVar3 == 0xfffffffc;
  puStack_1a0 = puVar11;
  puStack_198 = puVar5;
  if (0xfffffffc < uVar3) {
    uStack_140 = uStack_140 & 0xffffffffffffff00;
    uStack_120 = 0;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_190 = puVar11;
    puStack_188 = puVar5;
    FUN_105982e5c(auStack_1c0[0],puVar8,param_1,&uStack_140,&puStack_190);
    func_0x00010595b114(&puStack_190);
    FUN_1059833a8(&uStack_140);
    do {
      FUN_105983de8(&puStack_1a0);
      param_3 = puVar4;
LAB_1059838c4:
      while( true ) {
        func_0x00010598245c(auStack_1c0);
        func_0x00010598424c(uStack_68);
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x000105984260();
        FUN_10595a990(&uStack_140);
        in_ZR = (int)param_3 == 1;
        if ((bool)in_ZR) break;
        func_0x00010595b114(&puStack_1b0);
        FUN_105983de8(&puStack_1a0);
        in_ZR = (int)param_3 == 1;
        if (!(bool)in_ZR) {
          puVar4 = auStack_1c0;
          func_0x00010598245c();
          func_0x000105984284();
          *puVar4 = 0;
          puVar4[1] = 0;
          uVar7 = puVar8[1];
          if (uVar7 != 0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            puVar4[1] = uVar7;
            if (uVar7 != 0) {
              *puVar4 = *puVar8;
            }
          }
          return;
        }
        func_0x00010598429c();
        ___cxa_end_catch();
      }
      func_0x00010598429c();
      ___cxa_end_catch();
LAB_10598386c:
      func_0x00010595b114(&puStack_1b0);
      puVar4 = param_3;
    } while( true );
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = *plVar10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puStack_1b0 = puVar11;
  puStack_1a8 = puVar5;
  func_0x000105984378();
  FUN_105984524(param_3 + 3);
  uStack_138 = *(ulong *)(auStack_1c0[0] + 0x10);
  uStack_140 = *(ulong *)(auStack_1c0[0] + 8);
  if (*(long *)(auStack_1c0[0] + 0x10) != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_01 != 0);
  }
  puStack_130 = puVar8;
  func_0x000105984370(auStack_128);
  puStack_100 = puStack_1a8;
  puStack_108 = puStack_1b0;
  if (puStack_1a8 != (undefined8 *)0x0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_02 != 0);
  }
  puStack_188 = *(undefined8 **)(auStack_1c0[0] + 0x10);
  puStack_190 = *(undefined8 **)(auStack_1c0[0] + 8);
  if (*(long *)(auStack_1c0[0] + 0x10) != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_03 != 0);
  }
  puVar4 = auStack_178;
  puStack_180 = puVar8;
  func_0x000105984370();
  puStack_150 = puStack_1a8;
  puStack_158 = puStack_1b0;
  if (puStack_1a8 != (undefined8 *)0x0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_04 != 0);
  }
  func_0x00010598439c();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = (ulong)&PTR_FUN_1108c54b8;
  pcStack_a0 = FUN_105983e30;
  ppuStack_98 = &PTR_FUN_1108c54f8;
  puVar6 = puVar4;
  func_0x0001059842f4();
  puVar6[1] = uStack_138;
  *puVar6 = uStack_140;
  uStack_140 = 0;
  uStack_138 = 0;
  puVar6[2] = (ulong)puStack_130;
  puVar8 = puVar6 + 3;
  FUN_10597f0f8(puVar8,auStack_128);
  puVar11 = puStack_100;
  puVar5 = puStack_108;
  puVar6[8] = (ulong)puStack_100;
  puVar6[7] = (ulong)puVar5;
  if (puVar11 != (undefined8 *)0x0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_05 != 0);
  }
  pcStack_d0 = FUN_105983f00;
  ppuStack_c8 = &PTR_FUN_1108c5510;
  puStack_90 = puVar6;
  func_0x0001059842f4();
  puVar8[1] = (ulong)puStack_188;
  *puVar8 = (ulong)puStack_190;
  puStack_190 = (undefined8 *)0x0;
  puStack_188 = (undefined8 *)0x0;
  puVar8[2] = (ulong)puStack_180;
  func_0x000105984390();
  puVar8[8] = (ulong)puStack_150;
  puVar8[7] = (ulong)puStack_158;
  if (puStack_150 != (undefined8 *)0x0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_06 != 0);
  }
  uStack_d8 = *(undefined8 *)(auStack_1c0[0] + 0x70);
  uStack_e0 = *(undefined8 *)(auStack_1c0[0] + 0x68);
  puStack_c0 = puVar8;
  if (*(long *)(auStack_1c0[0] + 0x70) != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_07 != 0);
  }
  FUN_10597e658(puVar4 + 3,&pcStack_a0,&pcStack_d0,&uStack_e0);
  func_0x000100558bb4(&uStack_e0);
  (*(code *)*ppuStack_c8)(&ppuStack_c8);
  func_0x0001059842c0(ppuStack_98);
  uStack_f0 = 0;
  uStack_e8 = 0;
  ppuStack_98 = (undefined **)param_3[0x23];
  pcStack_a0 = (code *)param_3[0x22];
  param_3[0x22] = (ulong)(puVar4 + 3);
  param_3[0x23] = (ulong)puVar4;
  func_0x000105983480(&pcStack_a0);
  func_0x000105983480(&uStack_f0);
  FUN_1059832c0(&puStack_190);
  func_0x0001059832e0(&uStack_140);
  puVar8 = (ulong *)(ulong)*(uint *)((long)param_3 + 4);
  uStack_138 = param_3[0x23];
  uStack_140 = param_3[0x22];
  if (param_3[0x23] != 0) {
    do {
      func_0x0001059841f8();
    } while (extraout_w10_08 != 0);
  }
  func_0x0001059842cc();
  (*extraout_x8_00)();
  FUN_10595a990(&uStack_140);
  goto LAB_10598386c;
}



/* Entry: 105983a0c; end: 105983a4b;  */

void FUN_105983a0c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 105983a4c; end: 105983a5f;  */

void FUN_105983a4c(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000105982820();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 105983a60; end: 105983af7;  */

void FUN_105983a60(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_40 [2];
  
  FUN_105983a0c(alStack_40,param_2 + 0x10);
  if ((alStack_40[0] != 0) && ((*(byte *)(alStack_40[0] + 0xa8) & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    lVar1 = alStack_40[0];
    FUN_105982d5c(alStack_40[0],uVar2);
    func_0x000105984490(lVar1 + 0x18,param_1 & 0xffffffff | 0x100000000);
    FUN_1059831cc(alStack_40[0],uVar2,param_1 & 0xffffffff | 0x100000000);
  }
  func_0x0001059842a4();
  return;
}



/* Entry: 105983af8; end: 105983b1b;  */

void FUN_105983af8(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000105982820();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 105983b1c; end: 105983b2f;  */

void FUN_105983b1c(void)

{
  func_0x000105983ddc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105983b30; end: 105983b3b;  */

void FUN_105983b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105984274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105983b3c; end: 105983b4f;  */

void FUN_105983b3c(void)

{
  FUN_105983d30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105983b50; end: 105983c3f;  */

undefined8 * FUN_105983b50(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  long lVar1;
  
  func_0x00010598428c();
  if (param_1[1] != 0) {
    lVar1 = param_1[3];
    param_1[1] = 0;
    param_1[2] = 0;
    func_0x00010028c49c();
    lVar1 = *(long *)(lVar1 + 0x10);
    param_1 = (undefined8 *)(lVar1 + 8);
    __ZNSt3__15mutex4lockEv();
    lVar1 = *(long *)(lVar1 + 0x70);
    func_0x0001059843cc(FUN_105983d6c);
    func_0x000105984364();
    func_0x00010598423c();
    func_0x000105984324();
    if (lVar1 == 0) {
      func_0x0001059843a4();
      if (extraout_x8_00 != 0) {
        do {
          func_0x0001059841f8();
        } while (extraout_w10 != 0);
      }
      func_0x0001059842cc();
      (*extraout_x8_01)();
      func_0x00010598433c();
    }
    func_0x0001059842ec();
  }
  func_0x00010598424c(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010598433c();
    func_0x0001059842ec();
    func_0x000105984284();
    func_0x00010598428c();
    if (param_1[1] != 0) {
      lVar1 = param_1[3];
      param_1[1] = 0;
      param_1[2] = 0;
      func_0x00010028c49c();
      lVar1 = *(long *)(lVar1 + 0x10);
      param_1 = (undefined8 *)(lVar1 + 8);
      __ZNSt3__15mutex4lockEv();
      lVar1 = *(long *)(lVar1 + 0x70);
      func_0x0001059843cc(0x105983db0);
      func_0x000105984364();
      func_0x00010598423c();
      func_0x000105984324();
      if (lVar1 == 0) {
        func_0x0001059843a4();
        if (extraout_x8_03 != 0) {
          do {
            func_0x0001059841f8();
          } while (extraout_w10_00 != 0);
        }
        func_0x0001059842cc();
        (*extraout_x8_04)();
        func_0x00010598433c();
      }
      func_0x0001059842ec();
    }
    func_0x00010598424c(extraout_x8_02);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010598433c();
      func_0x0001059842ec();
      func_0x000105984284();
      *param_1 = &PTR_DAT_1108c5440;
      func_0x000100558bb4(param_1 + 3);
      func_0x00010595b114(param_1 + 1);
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105983c40; end: 105983d2f;  */

undefined8 * FUN_105983c40(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  long lVar1;
  
  func_0x00010598428c();
  if (param_1[1] != 0) {
    lVar1 = param_1[3];
    param_1[1] = 0;
    param_1[2] = 0;
    func_0x00010028c49c();
    lVar1 = *(long *)(lVar1 + 0x10);
    param_1 = (undefined8 *)(lVar1 + 8);
    __ZNSt3__15mutex4lockEv();
    lVar1 = *(long *)(lVar1 + 0x70);
    func_0x0001059843cc(0x105983db0);
    func_0x000105984364();
    func_0x00010598423c();
    func_0x000105984324();
    if (lVar1 == 0) {
      func_0x0001059843a4();
      if (extraout_x8_00 != 0) {
        do {
          func_0x0001059841f8();
        } while (extraout_w10 != 0);
      }
      func_0x0001059842cc();
      (*extraout_x8_01)();
      func_0x00010598433c();
    }
    func_0x0001059842ec();
  }
  func_0x00010598424c(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010598433c();
    func_0x0001059842ec();
    func_0x000105984284();
    *param_1 = &PTR_DAT_1108c5440;
    func_0x000100558bb4(param_1 + 3);
    func_0x00010595b114(param_1 + 1);
    return param_1;
  }
  return param_1;
}



/* Entry: 105983d30; end: 105983d6b;  */

undefined8 * FUN_105983d30(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108c5440;
  func_0x000100558bb4(param_1 + 3);
  func_0x00010595b114(param_1 + 1);
  return param_1;
}



/* Entry: 105983d6c; end: 105983de7;  */

void FUN_105983d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105983d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 105983de8; end: 105983e0f;  */

long FUN_105983de8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105983e10; end: 105983e13;  */

void FUN_105983e10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c54b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105983e14; end: 105983e27;  */

void FUN_105983e14(void)

{
  FUN_105983fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105983e28; end: 105983e2f;  */

void FUN_105983e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105984274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105983e30; end: 105983edb;  */

void FUN_105983e30(undefined8 param_1)

{
  long unaff_x19;
  long lStack_68;
  undefined1 auStack_58 [32];
  undefined1 uStack_38;
  
  func_0x000105984314();
  if ((lStack_68 != 0) && ((*(byte *)(lStack_68 + 0xa8) & 1) == 0)) {
    FUN_105982d5c(lStack_68,*(undefined8 *)(unaff_x19 + 0x10));
    func_0x000105984548(lStack_68 + 0x18,0);
    FUN_10597ea68(auStack_58,param_1);
    uStack_38 = 1;
    func_0x0001059843b8();
    FUN_105982e5c();
    func_0x00010598435c();
  }
  func_0x00010598430c();
  return;
}



/* Entry: 105983edc; end: 105983efb;  */

void FUN_105983edc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001059832e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105983efc; end: 105983eff;  */

void FUN_105983efc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105983f00; end: 105983f9f;  */

void FUN_105983f00(ulong param_1)

{
  long unaff_x19;
  undefined8 uStack_68;
  
  func_0x000105984314();
  if ((uStack_68 != 0) && ((*(byte *)(uStack_68 + 0xa8) & 1) == 0)) {
    FUN_105982d5c(uStack_68,*(undefined8 *)(unaff_x19 + 0x10));
    func_0x000105984548(uStack_68 + 0x18,param_1 & 0xffffffff | 0x100000000);
    func_0x0001059843b8();
    FUN_105982e5c();
    func_0x00010598435c();
  }
  func_0x00010598430c();
  return;
}



/* Entry: 105983fa0; end: 105983fbf;  */

void FUN_105983fa0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1059832c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105983fc0; end: 105983fd3;  */

void FUN_105983fc0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105983fd4; end: 105983fe7;  */

void FUN_105983fd4(void)

{
  FUN_105984190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105983fe8; end: 105983fef;  */

void FUN_105983fe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105984274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105983ff0; end: 10598408b;  */

void FUN_105983ff0(long param_1)

{
  long *plVar1;
  code *extraout_x8;
  long lVar2;
  undefined8 uVar3;
  long alStack_40 [2];
  
  plVar1 = alStack_40;
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_105983a0c(alStack_40,lVar2);
  if ((alStack_40[0] != 0) && ((*(byte *)(alStack_40[0] + 0xa8) & 1) == 0)) {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    func_0x0001059842ac();
    func_0x000105984594((undefined1 *)((long)plVar1 + 0x18),0);
    func_0x0001059842cc(*(undefined8 *)(lVar2 + 0x38),*(undefined4 *)((long)plVar1 + 4));
    (*extraout_x8)();
    FUN_1059831cc(alStack_40[0],uVar3,0);
  }
  func_0x0001059842a4();
  return;
}



/* Entry: 10598408c; end: 1059840ab;  */

void FUN_10598408c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000105983320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1059840ac; end: 1059840af;  */

void FUN_1059840ac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1059840b0; end: 10598416f;  */

void FUN_1059840b0(ulong param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long alStack_50 [2];
  
  plVar1 = alStack_50;
  lVar3 = *(long *)(param_2 + 0x10);
  FUN_105983a0c(alStack_50,lVar3);
  if ((alStack_50[0] != 0) && ((*(byte *)(alStack_50[0] + 0xa8) & 1) == 0)) {
    uVar2 = *(undefined8 *)(lVar3 + 0x10);
    func_0x0001059842ac();
    func_0x000105984594((undefined1 *)((long)plVar1 + 0x18),param_1 & 0xffffffff | 0x100000000);
    (**(code **)(**(long **)(lVar3 + 0x38) + 0x18))
              (*(long **)(lVar3 + 0x38),param_1,*(undefined4 *)((long)plVar1 + 4));
    FUN_1059831cc(alStack_50[0],uVar2,param_1 & 0xffffffff | 0x100000000);
  }
  func_0x0001059842a4();
  return;
}



/* Entry: 105984170; end: 10598418f;  */

void FUN_105984170(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000105983300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


