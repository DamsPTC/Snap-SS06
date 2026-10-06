/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10065f5c8; end: 10065f5f7;  */

void FUN_10065f5c8(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  FUN_10065f604();
  return;
}



/* Entry: 10065f5f8; end: 10065f603;  */

undefined8 FUN_10065f5f8(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10065f604; end: 10065f667;  */

void FUN_10065f604(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_1f0 [464];
  
  FUN_10065f5f8();
  if ((param_1 != 0) && (FUN_10054c3a4(), (int)param_1 != 0)) {
    FUN_1006621d4(auStack_1f0,*unaff_x19);
    FUN_10066b398();
    FUN_10066b3a4();
    func_0x00010066b5cc();
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x3b) == '\x01') {
    FUN_10066b5d4();
    *(undefined1 *)(puVar1 + 0x3a) = 0;
  }
  return;
}



/* Entry: 10065f668; end: 10065f74b;  */

void FUN_10065f668(long param_1,undefined8 *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + 0x20);
  pbVar2 = (byte *)(lVar7 + 5);
  *param_3 = (long)pbVar2;
  FUN_100460200();
  *param_2 = pbVar2;
  *pbVar2 = (byte)(param_4 >> 0x1f) & 1;
  pbVar2[1] = (byte)((ulong)lVar7 >> 0x18);
  pbVar2[2] = (byte)((ulong)lVar7 >> 0x10);
  pbVar2[3] = (byte)((ulong)lVar7 >> 8);
  pbVar2[4] = (byte)lVar7;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar7 = 0;
    uVar6 = 0;
    lVar8 = 0;
    lVar4 = *(long *)(param_1 + 8);
    do {
      if (*(long *)(lVar4 + lVar7) == 0) {
        lVar3 = lVar4 + lVar7 + 9;
        uVar5 = (ulong)*(byte *)(lVar4 + lVar7 + 8);
      }
      else {
        uVar5 = *(ulong *)(lVar4 + lVar7 + 8);
        lVar3 = *(long *)(lVar4 + lVar7 + 0x10);
      }
      func_0x000107c610b4(pbVar2 + lVar8 + 5,lVar3,uVar5);
      lVar4 = *(long *)(param_1 + 8);
      plVar1 = (long *)(lVar4 + lVar7);
      if (*plVar1 == 0) {
        uVar5 = (ulong)*(byte *)(plVar1 + 1);
      }
      else {
        uVar5 = plVar1[1];
      }
      lVar8 = uVar5 + lVar8;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x20;
    } while (uVar6 < *(ulong *)(param_1 + 0x10));
  }
  return;
}



/* Entry: 10065f74c; end: 10065f99b;  */

void FUN_10065f74c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x18);
  return;
}



/* Entry: 10065f99c; end: 10065fba3;  */

bool FUN_10065f99c(long param_1,long param_2,long param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  
  if ((*(char *)(param_2 + 0x4e) != '\0') || (*(char *)(param_2 + 0x5d) != '\0')) {
    bVar2 = (param_4 != 6 && 1 < param_4) && param_4 != 2;
    switch(param_4) {
    case 3:
      pcVar4 = (char *)(param_3 + 3);
      break;
    case 4:
      pcVar4 = (char *)(param_2 + 0x4c);
      break;
    case 5:
      pcVar4 = (char *)(param_2 + 0x4d);
      break;
    default:
      goto LAB_10065fa08;
    case 7:
      if (*(char *)(param_2 + 0x5d) != '\0') {
        return bVar2;
      }
      if (*(char *)(param_2 + 0x5f) != '\0') {
        return bVar2;
      }
      if (*(char *)(param_2 + 0x5e) != '\0') {
        return bVar2;
      }
      cVar3 = *(char *)(param_2 + 0x48);
      goto code_r0x00010065f9f4;
    }
    cVar3 = *pcVar4;
code_r0x00010065f9f4:
    return cVar3 == '\0' && bVar2;
  }
  bVar2 = true;
  switch(param_4) {
  case 0:
    return *(char *)(param_2 + 0x48) == '\0';
  case 1:
    if (*(char *)(param_3 + 1) != '\0') {
      return false;
    }
    cVar3 = *(char *)(param_2 + 0x55);
    goto code_r0x00010065faf4;
  case 2:
    if ((*(char *)(param_2 + 0x4a) == '\0') && (*(char *)(param_2 + 0x55) != '\0')) {
      if (*(char *)(param_2 + 0x49) == '\0') {
        return *(char *)(param_2 + 0x66) == '\0';
      }
      if ((*(char *)(param_2 + 0x56) != '\0') ||
         ((*(char *)(*(long *)(param_2 + 0x18) + 0x18) != '\0' &&
          (*(char *)(param_2 + 0x65) != '\0')))) {
        return true;
      }
    }
    return false;
  case 3:
    if (*(char *)(param_3 + 3) != '\0') {
      return false;
    }
    break;
  case 4:
    if (*(char *)(param_2 + 0x4c) != '\0') {
      return false;
    }
    if (*(char *)(param_2 + 0x55) == '\0') {
      return false;
    }
    break;
  case 5:
    if (*(char *)(param_2 + 0x4d) != '\0') {
      return false;
    }
    if ((*(char *)(param_2 + 0x54) != '\0') && (*(char *)(param_2 + 0x4b) == '\0')) {
      return false;
    }
    if (*(char *)(param_2 + 0x5a) == '\0') {
      return false;
    }
    goto code_r0x00010065faf0;
  default:
    goto LAB_10065fa08;
  case 7:
    if (*(char *)(param_3 + 7) != '\0') {
      return false;
    }
    bVar1 = *(byte *)(param_1 + 0x10);
    if (((bVar1 & 1) != 0) && (*(char *)(param_2 + 0x55) == '\0')) {
      return false;
    }
    if ((bVar1 >> 2 & 1) != 0) {
      if (*(char *)(param_3 + 1) == '\0') {
        return false;
      }
      if (*(char *)(param_2 + 0x56) == '\0') {
        return false;
      }
    }
    if (((bVar1 >> 1 & 1) != 0) && (*(char *)(param_2 + 0x4a) == '\0')) {
      return false;
    }
    if (((bVar1 >> 3 & 1) != 0) && (*(char *)(param_2 + 0x4c) == '\0')) {
      return false;
    }
    if (((bVar1 >> 4 & 1) != 0) && (*(char *)(param_3 + 3) == '\0')) {
      return false;
    }
    if (((bVar1 >> 6 & 1) != 0) && (*(char *)(param_2 + 0x5f) == '\0')) {
      return false;
    }
    if ((bVar1 >> 5 & 1) == 0) {
      if ((bVar1 >> 1 & 1) == 0) {
        return true;
      }
      cVar3 = *(char *)(param_2 + 0x56);
      goto code_r0x00010065faf4;
    }
    if (*(char *)(param_2 + 0x4d) == '\0') {
      return false;
    }
    if ((bVar1 >> 4 & 1) != 0) {
      return true;
    }
    if (*(char *)(param_2 + 0x54) == '\0') {
      return true;
    }
code_r0x00010065faf0:
    cVar3 = *(char *)(param_2 + 0x5e);
    goto code_r0x00010065faf4;
  }
  if (*(char *)(param_2 + 0x59) != '\0') {
LAB_10065fa08:
    return bVar2;
  }
  cVar3 = *(char *)(param_2 + 0x4d);
code_r0x00010065faf4:
  return cVar3 != '\0';
}



/* Entry: 10065fba4; end: 100660117;  */

void FUN_10065fba4(void)

{
  func_0x00010061cab0(&UNK_10f743e0c);
  FUN_10012dd4c();
  func_0x00010065fbf4(0x100660308);
  func_0x00010065fc9c();
  func_0x00010065fcb0();
  return;
}



/* Entry: 100660118; end: 10066015b;  */

undefined4 * FUN_100660118(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 2);
  if (puVar1 < *(undefined4 **)(param_1 + 4)) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_100660168();
  }
  *(undefined4 **)(param_1 + 2) = puVar2;
  return puVar2 + -1;
}



/* Entry: 10066015c; end: 100660167;  */

void FUN_10066015c(void)

{
  return;
}



/* Entry: 100660168; end: 1006601e7;  */

undefined8 FUN_100660168(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  FUN_10066015c();
  FUN_1006601e8();
  FUN_100660228();
  func_0x000100161bec(auStack_48);
  *puStack_38 = *unaff_x20;
  puStack_38 = puStack_38 + 1;
  func_0x000100660238();
  FUN_100161c3c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_100161cc4(auStack_48);
  return uVar1;
}



/* Entry: 1006601e8; end: 100660227;  */

undefined1  [16] FUN_1006601e8(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3e == 0) {
    uVar1 = param_1[2] - *param_1 >> 1;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x3fffffffffffffff;
    }
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  func_0x00010507a6b8();
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 100660228; end: 10066024b;  */

void FUN_100660228(void)

{
  return;
}



/* Entry: 10066024c; end: 10066048b;  */

void FUN_10066024c(long param_1)

{
  if (param_1 != 0) {
    func_0x00010065f964(param_1 + 0x40);
    func_0x000100624e9c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10066048c; end: 1006604cf;  */

undefined4 * FUN_10066048c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 2);
  if (puVar1 < *(undefined4 **)(param_1 + 4)) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_1006604d0();
  }
  *(undefined4 **)(param_1 + 2) = puVar2;
  return puVar2 + -1;
}



/* Entry: 1006604d0; end: 100660553;  */

long FUN_1006604d0(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  undefined4 *puStack_38;
  
  plVar1 = param_1;
  FUN_1006601e8(param_1,(param_1[1] - *param_1 >> 2) + 1);
  func_0x000100161bec(auStack_48,plVar1,param_1[1] - *param_1 >> 2,param_1 + 2);
  *puStack_38 = *param_2;
  puStack_38 = puStack_38 + 1;
  FUN_100660554();
  lVar2 = param_1[1];
  func_0x000100660560();
  return lVar2;
}



/* Entry: 100660554; end: 100660567;  */

void FUN_100660554(void)

{
  long *unaff_x19;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  
  in_stack_00000010 = in_stack_00000010 - (unaff_x19[1] - *unaff_x19);
  func_0x000107c610b4(in_stack_00000010);
  unaff_x19[1] = *unaff_x19;
  *unaff_x19 = in_stack_00000010;
  unaff_x19[1] = in_stack_00000018;
  unaff_x19[2] = in_stack_00000020;
  return;
}



/* Entry: 100660568; end: 1006617e3;  */

void FUN_100660568(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001001b4cac(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001001f1ba4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1006617e4; end: 10066212b; -[SCInfoStickerInjectorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1006617e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined *puVar62;
  undefined *puVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar64 = (long)_DAT_112725874;
  lVar1 = param_1 + lVar64;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3dc58();
  func_0x000107c61180();
  lVar64 = param_1 + lVar64;
  lStack_1b0 = lVar2;
  func_0x000107c61148();
  lVar3 = lVar64;
  func_0x000107c3dc54();
  func_0x000107c61180();
  lVar65 = (long)_DAT_112725878;
  lVar4 = param_1 + lVar65;
  lStack_110 = lVar3;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x000107c3e300();
  func_0x000107c61180();
  lVar65 = param_1 + lVar65;
  lStack_1a8 = lVar5;
  func_0x000107c61148();
  lVar6 = lVar65;
  func_0x000107c3e2fc();
  func_0x000107c61180();
  lVar66 = (long)_DAT_11272587c;
  lVar7 = param_1 + lVar66;
  lStack_108 = lVar6;
  func_0x000107c61148();
  lVar8 = lVar7;
  func_0x000107c3e72c();
  func_0x000107c61180();
  lVar66 = param_1 + lVar66;
  lStack_1a0 = lVar8;
  func_0x000107c61148();
  lVar9 = lVar66;
  func_0x000107c3e728();
  func_0x000107c61180();
  lVar67 = (long)_DAT_112725880;
  lVar10 = param_1 + lVar67;
  lStack_100 = lVar9;
  func_0x000107c61148();
  lVar11 = lVar10;
  func_0x000107c3f1ec();
  func_0x000107c61180();
  lVar67 = param_1 + lVar67;
  lStack_198 = lVar11;
  func_0x000107c61148();
  lVar12 = lVar67;
  func_0x000107c3f1e8();
  func_0x000107c61180();
  lVar68 = (long)_DAT_112725884;
  lVar13 = param_1 + lVar68;
  lStack_f8 = lVar12;
  func_0x000107c61148();
  lVar14 = lVar13;
  func_0x000107c41350();
  func_0x000107c61180();
  lVar68 = param_1 + lVar68;
  lStack_190 = lVar14;
  func_0x000107c61148();
  lVar15 = lVar68;
  func_0x000107c4134c();
  func_0x000107c61180();
  lVar69 = (long)_DAT_112725888;
  lVar16 = param_1 + lVar69;
  lStack_f0 = lVar15;
  func_0x000107c61148();
  lVar17 = lVar16;
  func_0x000107c41f68();
  func_0x000107c61180();
  lVar69 = param_1 + lVar69;
  lStack_188 = lVar17;
  func_0x000107c61148();
  lVar18 = lVar69;
  func_0x000107c41f64();
  func_0x000107c61180();
  lVar70 = (long)_DAT_11272588c;
  lVar19 = param_1 + lVar70;
  lStack_e8 = lVar18;
  func_0x000107c61148();
  lVar20 = lVar19;
  func_0x000107c42dd4();
  func_0x000107c61180();
  lVar70 = param_1 + lVar70;
  lStack_180 = lVar20;
  func_0x000107c61148();
  lVar21 = lVar70;
  func_0x000107c42dd0();
  func_0x000107c61180();
  lVar71 = (long)_DAT_112725890;
  lVar22 = param_1 + lVar71;
  lStack_e0 = lVar21;
  func_0x000107c61148();
  lVar23 = lVar22;
  func_0x000107c43e50();
  func_0x000107c61180();
  lVar71 = param_1 + lVar71;
  lStack_178 = lVar23;
  func_0x000107c61148();
  lVar24 = lVar71;
  func_0x000107c43e4c();
  func_0x000107c61180();
  lVar72 = (long)_DAT_112725894;
  lVar25 = param_1 + lVar72;
  lStack_d8 = lVar24;
  func_0x000107c61148();
  lVar26 = lVar25;
  func_0x000107c4cd2c();
  func_0x000107c61180();
  lVar72 = param_1 + lVar72;
  lStack_170 = lVar26;
  func_0x000107c61148();
  lVar27 = lVar72;
  func_0x000107c4cd28();
  func_0x000107c61180();
  lVar73 = (long)_DAT_112725898;
  lVar28 = param_1 + lVar73;
  lStack_d0 = lVar27;
  func_0x000107c61148();
  lVar29 = lVar28;
  func_0x000107c4d290();
  func_0x000107c61180();
  lVar73 = param_1 + lVar73;
  lStack_168 = lVar29;
  func_0x000107c61148();
  lVar30 = lVar73;
  func_0x000107c4d28c();
  func_0x000107c61180();
  lVar74 = (long)_DAT_11272589c;
  lVar31 = param_1 + lVar74;
  lStack_c8 = lVar30;
  func_0x000107c61148();
  lVar32 = lVar31;
  func_0x000107c4e84c();
  func_0x000107c61180();
  lVar74 = param_1 + lVar74;
  lStack_160 = lVar32;
  func_0x000107c61148();
  lVar33 = lVar74;
  func_0x000107c4e848();
  func_0x000107c61180();
  lVar75 = (long)_DAT_1127258a0;
  lVar34 = param_1 + lVar75;
  lStack_c0 = lVar33;
  func_0x000107c61148();
  lVar35 = lVar34;
  func_0x000107c4f7b8();
  func_0x000107c61180();
  lVar75 = param_1 + lVar75;
  lStack_158 = lVar35;
  func_0x000107c61148();
  lVar36 = lVar75;
  func_0x000107c4f7b4();
  func_0x000107c61180();
  lVar76 = (long)_DAT_1127258a4;
  lVar37 = param_1 + lVar76;
  lStack_b8 = lVar36;
  func_0x000107c61148();
  lVar38 = lVar37;
  func_0x000107c5db70();
  func_0x000107c61180();
  lVar76 = param_1 + lVar76;
  lStack_150 = lVar38;
  func_0x000107c61148();
  lVar39 = lVar76;
  func_0x000107c5db6c();
  func_0x000107c61180();
  lVar77 = (long)_DAT_1127258a8;
  lVar40 = param_1 + lVar77;
  lStack_b0 = lVar39;
  func_0x000107c61148();
  lVar41 = lVar40;
  func_0x000107c4eb30();
  func_0x000107c61180();
  lVar77 = param_1 + lVar77;
  lStack_148 = lVar41;
  func_0x000107c61148();
  lVar42 = lVar77;
  func_0x000107c4eb2c();
  func_0x000107c61180();
  lVar78 = (long)_DAT_1127258ac;
  lVar43 = param_1 + lVar78;
  lStack_a8 = lVar42;
  func_0x000107c61148();
  lVar44 = lVar43;
  func_0x000107c5b338();
  func_0x000107c61180();
  lVar78 = param_1 + lVar78;
  lStack_140 = lVar44;
  func_0x000107c61148();
  lVar45 = lVar78;
  func_0x000107c5b334();
  func_0x000107c61180();
  lVar79 = (long)_DAT_1127258b0;
  lVar46 = param_1 + lVar79;
  lStack_a0 = lVar45;
  func_0x000107c61148();
  lVar47 = lVar46;
  func_0x000107c5b514();
  func_0x000107c61180();
  lVar79 = param_1 + lVar79;
  lStack_138 = lVar47;
  func_0x000107c61148();
  lVar48 = lVar79;
  func_0x000107c5b510();
  func_0x000107c61180();
  lVar80 = (long)_DAT_1127258b4;
  lVar49 = param_1 + lVar80;
  lStack_98 = lVar48;
  func_0x000107c61148();
  lVar50 = lVar49;
  func_0x000107c5bffc();
  func_0x000107c61180();
  lVar80 = param_1 + lVar80;
  lStack_130 = lVar50;
  func_0x000107c61148();
  lVar51 = lVar80;
  func_0x000107c5bff8();
  func_0x000107c61180();
  lVar81 = (long)_DAT_1127258b8;
  lVar52 = param_1 + lVar81;
  lStack_90 = lVar51;
  func_0x000107c61148();
  lVar53 = lVar52;
  func_0x000107c5dce0();
  func_0x000107c61180();
  lVar81 = param_1 + lVar81;
  lStack_128 = lVar53;
  func_0x000107c61148();
  lVar54 = lVar81;
  func_0x000107c5dcdc();
  func_0x000107c61180();
  lVar82 = (long)_DAT_1127258bc;
  lVar55 = param_1 + lVar82;
  lStack_88 = lVar54;
  func_0x000107c61148();
  lVar56 = lVar55;
  func_0x000107c5e17c();
  func_0x000107c61180();
  lVar82 = param_1 + lVar82;
  lStack_120 = lVar56;
  func_0x000107c61148();
  lVar57 = lVar82;
  func_0x000107c5e178();
  func_0x000107c61180();
  lVar83 = (long)_DAT_1127258c0;
  lVar58 = param_1 + lVar83;
  lStack_80 = lVar57;
  func_0x000107c61148();
  lVar59 = lVar58;
  func_0x000107c5a9a0();
  func_0x000107c61180();
  param_1 = param_1 + lVar83;
  lStack_118 = lVar59;
  func_0x000107c61148();
  lVar83 = param_1;
  func_0x000107c5a99c();
  func_0x000107c61180();
  puVar60 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_78 = lVar83;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_110,&lStack_1b0,0x14)
  ;
  func_0x000107c61180();
  puVar63 = puVar60;
  func_0x000107c4d2d4();
  func_0x000107c61170(puVar60);
  func_0x000107c61170(lVar83);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar59);
  func_0x000107c61170(lVar58);
  func_0x000107c61170(lVar57);
  func_0x000107c61170(lVar82);
  func_0x000107c61170(lVar56);
  func_0x000107c61170(lVar55);
  func_0x000107c61170(lVar54);
  func_0x000107c61170(lVar81);
  func_0x000107c61170(lVar53);
  func_0x000107c61170(lVar52);
  func_0x000107c61170(lVar51);
  func_0x000107c61170(lVar80);
  func_0x000107c61170(lVar50);
  func_0x000107c61170(lVar49);
  func_0x000107c61170(lVar48);
  func_0x000107c61170(lVar79);
  func_0x000107c61170(lVar47);
  func_0x000107c61170(lVar46);
  func_0x000107c61170(lVar45);
  func_0x000107c61170(lVar78);
  func_0x000107c61170(lVar44);
  func_0x000107c61170(lVar43);
  func_0x000107c61170(lVar42);
  func_0x000107c61170(lVar77);
  func_0x000107c61170(lVar41);
  func_0x000107c61170(lVar40);
  func_0x000107c61170(lVar39);
  func_0x000107c61170(lVar76);
  func_0x000107c61170(lVar38);
  func_0x000107c61170(lVar37);
  func_0x000107c61170(lVar36);
  func_0x000107c61170(lVar75);
  func_0x000107c61170(lVar35);
  func_0x000107c61170(lVar34);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(lVar74);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(lVar31);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar73);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar72);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar71);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar70);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar69);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar68);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar67);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar66);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar65);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar64);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  puVar60 = PTR_PTR_1126ae720;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  puStack_1c8 = &UNK_10554e02c;
  puStack_1c0 = &UNK_110896980;
  puStack_1b8 = puVar63;
  func_0x000107c61174(puVar63);
  func_0x000107c3e4fc(puVar60,param_2,&puStack_1d8);
  func_0x000107c61180();
  puVar61 = PTR_PTR_1126ba818;
  func_0x000107c610f4(PTR_PTR_1126ba818);
  func_0x000107c46294();
  puVar62 = PTR_PTR_1126baba8;
  func_0x000107c610f4(PTR_PTR_1126baba8);
  func_0x000107c489f8();
  func_0x000107c61170(puVar61);
  func_0x000107c61170(puVar60);
  func_0x000107c61170(puStack_1b8);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar62);
    return puVar62;
  }
  func_0x000107c60e78();
  return *(undefined **)(puVar63 + 0x10);
}



/* Entry: 10066212c; end: 100662133; -[SCAltitudeStickerInjectorServices altitudeStickerInjectorConfig] */

undefined8 FUN_10066212c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100662134; end: 10066213b; -[SCAltitudeStickerInjectorServices altitudeStickerInjector] */

undefined8 FUN_100662134(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10066213c; end: 100662143; -[SCAttachmentStickerInjectorServices attachmentStickerInjectorConfig] */

undefined8 FUN_10066213c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100662144; end: 10066214b; -[SCAttachmentStickerInjectorServices attachmentStickerInjector] */

undefined8 FUN_100662144(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10066214c; end: 100662153; -[SCBatteryStickerInjectorServices batteryStickerInjectorConfig] */

undefined8 FUN_10066214c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100662154; end: 10066215b; -[SCBatteryStickerInjectorServices batteryStickerInjector] */

undefined8 FUN_100662154(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10066215c; end: 100662163; -[SCCameraRollStickerInjectorServices cameraRollStickerInjectorConfig] */

undefined8 FUN_10066215c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100662164; end: 10066216b; -[SCCameraRollStickerInjectorServices cameraRollStickerInjector] */

undefined8 FUN_100662164(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10066216c; end: 100662173; -[SCDateTimeStickerInjectorServices dateTimeStickerInjectorConfig] */

undefined8 FUN_10066216c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100662174; end: 10066217b; -[SCDateTimeStickerInjectorServices dateTimeStickerInjector] */

undefined8 FUN_100662174(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10066217c; end: 100662183; -[SCDiscoverDeeplinkStickerInjectorServices discoverDeeplinkStickerInjectorConfig] */

undefined8 FUN_10066217c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100662184; end: 10066218b; -[SCDiscoverDeeplinkStickerInjectorServices discoverDeeplinkStickerInjector] */

undefined8 FUN_100662184(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10066218c; end: 10066219b; -[_TtC25FanPassStickerInjectorAPI30FanPassStickerInjectorServices fanPassStickerInjectorConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10066218c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301ea18));
  return;
}



/* Entry: 10066219c; end: 1006621ab; -[_TtC25FanPassStickerInjectorAPI30FanPassStickerInjectorServices fanPassStickerInjector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10066219c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301ea10));
  return;
}



/* Entry: 1006621ac; end: 1006621b3; -[SCGenericImageStickerInjectorServices genericImageStickerInjectorConfig] */

undefined8 FUN_1006621ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1006621b4; end: 1006621bb; -[SCGenericImageStickerInjectorServices genericImageStickerInjector] */

undefined8 FUN_1006621b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006621bc; end: 1006621c3; -[SCMentionStickerInjectorServices mentionStickerInjectorConfig] */

undefined8 FUN_1006621bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1006621c4; end: 1006621d3; -[SCMentionStickerInjectorServices mentionStickerInjector] */

undefined8 FUN_1006621c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006621d4; end: 100662323;  */

void FUN_1006621d4(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001006621cc();
  FUN_100662324();
  FUN_100662344(unaff_x19 + 0x18);
  FUN_1005ecf0c(unaff_x19 + 0x130);
  uVar2 = 3;
  uVar1 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(unaff_x19 + 0x148) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x150) = uVar2;
  uVar1 = unaff_x20;
  FUN_10054c8f4();
  *(undefined8 *)(unaff_x19 + 0x158) = uVar1;
  uVar1 = unaff_x20;
  FUN_10054c8f4();
  *(undefined8 *)(unaff_x19 + 0x160) = uVar1;
  uVar2 = 6;
  uVar1 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(unaff_x19 + 0x168) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x170) = uVar2;
  uVar2 = 7;
  uVar1 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(unaff_x19 + 0x178) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x180) = uVar2;
  uVar1 = unaff_x20;
  func_0x000100622570();
  *(char *)(unaff_x19 + 0x188) = (char)uVar1;
  uVar1 = unaff_x20;
  FUN_10054c8f4();
  *(int *)(unaff_x19 + 0x18c) = (int)uVar1;
  FUN_100655fec(unaff_x19 + 400);
  uVar1 = unaff_x20;
  FUN_10054c8f4();
  *(undefined8 *)(unaff_x19 + 0x1a8) = uVar1;
  uVar1 = unaff_x20;
  FUN_10054c8f4();
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar1;
  uVar2 = 0xd;
  uVar1 = unaff_x20;
  FUN_1005f9230();
  *(undefined8 *)(unaff_x19 + 0x1b8) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x1c0) = uVar2;
  FUN_10066b380();
  *(int *)(unaff_x19 + 0x1c8) = (int)unaff_x20;
  *(char *)(unaff_x19 + 0x1cc) = (char)((ulong)unaff_x20 >> 0x20);
  return;
}



/* Entry: 100662324; end: 100662333;  */

void FUN_100662324(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  undefined8 uStack_20;
  
  uStack_20 = param_1;
  FUN_1005ecf0c(auStack_38,param_1,0);
  FUN_10061f6bc(auStack_38);
  func_0x00010061fa30();
  return;
}



/* Entry: 100662334; end: 10066233b; -[SCMusicStickerInjectorServices musicStickerInjectorConfig] */

undefined8 FUN_100662334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10066233c; end: 100662343; -[SCMusicStickerInjectorServices musicStickerInjector] */

undefined8 FUN_10066233c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100662344; end: 100662383;  */

void FUN_100662344(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_10061f5a8(auStack_38);
  FUN_1006623ac(param_1,auStack_38);
  func_0x00010066b328();
  return;
}



/* Entry: 100662384; end: 100662393; -[_TtC24SCPlanStickerInjectorAPI29SCPlanStickerInjectorServices planStickerInjectorConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100662384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301ea50));
  return;
}



/* Entry: 100662394; end: 1006623ab; -[_TtC24SCPlanStickerInjectorAPI29SCPlanStickerInjectorServices planStickerInjector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100662394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301ea48));
  return;
}



/* Entry: 1006623ac; end: 1006623ef;  */

void FUN_1006623ac(undefined8 param_1,undefined8 *param_2)

{
  func_0x0001006623a4(param_1);
  FUN_10006369c(param_1,*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  return;
}



/* Entry: 1006623f0; end: 100662443;  */

undefined8 * FUN_1006623f0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110a8d5f8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = &DAT_11383d918;
  func_0x000107c60ee4(param_1 + 0xd,0xaf);
  return param_1;
}



/* Entry: 100662444; end: 10066244b;  */

void FUN_100662444(void)

{
  return;
}



/* Entry: 10066244c; end: 100662453; -[SCQuestionStickerInjectorServices questionStickerInjectorConfig] */

undefined8 FUN_10066244c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100662454; end: 10066245b; -[SCQuestionStickerInjectorServices questionStickerInjector] */

undefined8 FUN_100662454(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10066245c; end: 100662463; -[SCUVIndexStickerInjectorServices uvIndexStickerInjectorConfig] */

undefined8 FUN_10066245c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100662464; end: 10066246b; -[SCUVIndexStickerInjectorServices uvIndexStickerInjector] */

undefined8 FUN_100662464(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10066246c; end: 100662473; -[SCPollStickerInjectorServices pollStickerInjectorConfig] */

undefined8 FUN_10066246c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100662474; end: 10066247b; -[SCPollStickerInjectorServices pollStickerInjector] */

undefined8 FUN_100662474(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10066247c; end: 10066248b; -[_TtC24SnapMeStickerInjectorAPI29SnapMeStickerInjectorServices snapMeStickerInjectorConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10066247c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dddf50));
  return;
}



/* Entry: 10066248c; end: 10066249b; -[_TtC24SnapMeStickerInjectorAPI29SnapMeStickerInjectorServices snapMeStickerInjector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10066248c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112dddf48));
  return;
}



/* Entry: 10066249c; end: 1006624a3; -[SCSnapcodeStickerInjectorServices snapcodeStickerInjectorConfig] */

undefined8 FUN_10066249c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1006624a4; end: 1006624ab; -[SCSnapcodeStickerInjectorServices snapcodeStickerInjector] */

undefined8 FUN_1006624a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006624ac; end: 1006624b3; -[SCStoryInviteStickerInjectorServices storyInviteStickerInjectorConfig] */

undefined8 FUN_1006624ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1006624b4; end: 1006624bb; -[SCStoryInviteStickerInjectorServices storyInviteStickerInjector] */

undefined8 FUN_1006624b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006624bc; end: 1006624c3; -[SCVenueStickerInjectorServices venueStickerInjectorConfig] */

undefined8 FUN_1006624bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1006624c4; end: 1006624cb; -[SCVenueStickerInjectorServices venueStickerInjector] */

undefined8 FUN_1006624c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006624cc; end: 1006624d3; -[SCWeatherStickerInjectorServices weatherStickerInjectorConfig] */

undefined8 FUN_1006624cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1006624d4; end: 1006624db; -[SCWeatherStickerInjectorServices weatherStickerInjector] */

undefined8 FUN_1006624d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006624dc; end: 100662747;  */

void FUN_1006624dc(void)

{
  return;
}



/* Entry: 100662748; end: 100662757; -[_TtC28ShareYoursStickerInjectorAPI33ShareYoursStickerInjectorServices shareYoursStickerInjectorConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100662748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301ea88));
  return;
}



/* Entry: 100662758; end: 10066289b;  */

void FUN_100662758(long param_1)

{
  func_0x0001001f347c(param_1 + 0x268);
  *(undefined1 *)(param_1 + 0x18d) = 0;
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100662794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    return;
  }
  return;
}



/* Entry: 10066289c; end: 1006628ab; -[_TtC28ShareYoursStickerInjectorAPI33ShareYoursStickerInjectorServices shareYoursStickerInjector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10066289c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301ea80));
  return;
}



/* Entry: 1006628ac; end: 100662973;  */

void FUN_1006628ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001006628b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x18))(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 100662974; end: 100662a1f;  */

void FUN_100662974(long param_1)

{
  long lVar1;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001004b62b4(&uStack_38,0);
  FUN_100460de4(auStack_80);
  lVar1 = *(long *)(param_1 + 8);
  FUN_100460448(lVar1 + 0x600);
  if (*(long *)(lVar1 + 0x5e8) != 0) {
    FUN_100460314();
    *(undefined8 *)(lVar1 + 0x5e8) = 0;
  }
  *(undefined1 *)(lVar1 + 0x56) = 1;
  func_0x000100466b80(lVar1 + 0x600);
  FUN_100617338(lVar1);
  FUN_100467a48(auStack_80);
  FUN_1004b6ddc(&uStack_38);
  return;
}



/* Entry: 100662a20; end: 100662b73;  */

undefined8 * FUN_100662a20(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110cd74b8;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cd73f8;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x000107c60e10();
  }
  return param_1;
}



/* Entry: 100662b74; end: 100662be7; -[SCInfoStickerTypeInjectorConfig hash] */

undefined8 * FUN_100662b74(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(uint *)(param_1 + 8);
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uStack_30 = (ulong)uVar1;
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_28 = *(undefined8 *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x20);
  lStack_20 = -lVar4;
  if (-1 < lVar4) {
    lStack_20 = lVar4;
  }
  puVar3 = &uStack_38;
  FUN_100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  func_0x000107c60e78();
  func_0x000107c61174();
  return puVar3;
}



/* Entry: 100662be8; end: 100662c0b; -[SCInfoStickerTypeInjectorConfig copyWithZone:] */

undefined8 FUN_100662be8(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100662c0c; end: 100662cc3; -[SCInfoStickerTypeInjectorConfig isEqual:] */

bool FUN_100662c0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      func_0x000107c61158(param_1);
      uVar3 = param_3;
      func_0x000107c6115c(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
           (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20);
      }
    }
  }
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 100662cc4; end: 100662d67; -[SCInfoStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_100662cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702390;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100662d68; end: 100662e2b;  */

void FUN_100662d68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100662e2c; end: 100662e33;  */

void FUN_100662e2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100662e34; end: 100662e87;  */

void FUN_100662e34(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100662e88; end: 100662e93;  */

void FUN_100662e88(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_10022f88c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8050;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1a250);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 100662e94; end: 100663147;  */

void FUN_100662e94(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_10022f88c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8050;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1a250);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100663148; end: 100663333; -[SCBitmojiStickerInjectorServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100663148(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1 + _DAT_112725798;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar9 = (long)_DAT_11272579c;
  lVar1 = param_1 + lVar9;
  func_0x000107c61148();
  lVar3 = lVar1;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + lVar9;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c43a4c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127257a0;
  func_0x000107c61148();
  lVar5 = lVar1;
  func_0x000107c3ea58();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + lVar9;
    func_0x000107c61148();
  }
  lVar1 = param_1;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_10553bf84;
  puStack_80 = &UNK_1108964c0;
  puVar6 = PTR_PTR_1126ae720;
  lStack_78 = lVar1;
  lStack_70 = lVar5;
  lStack_68 = lVar3;
  lStack_60 = lVar4;
  lStack_58 = lVar2;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_98);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ba818;
  func_0x000107c610f4(PTR_PTR_1126ba818);
  func_0x000107c46294();
  puVar8 = PTR_PTR_1126ba820;
  func_0x000107c610f4(PTR_PTR_1126ba820);
  func_0x000107c489f8();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100663334; end: 10066333b; -[SCBitmojiFetchServices friendmojiFilteredContainer] */

undefined8 FUN_100663334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10066333c; end: 1006633df; -[SCBitmojiStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_10066333c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fda28;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006633e0; end: 10066341b;  */

void FUN_1006633e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10066341c; end: 100663423;  */

void FUN_10066341c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100663424; end: 100663477;  */

void FUN_100663424(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100663478; end: 10066347f;  */

void FUN_100663478(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d3d30();
  func_0x000107c613fc();
  func_0x0001006634e0(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100663480; end: 1006635a7;  */

void FUN_100663480(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1001d3d30();
  func_0x000107c613fc();
  func_0x0001006634e0(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 1006635a8; end: 100663643; -[SCSnapchatStickerInjectorServiceProvider provide] */

void FUN_1006635a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108969b0);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba818;
  func_0x000107c610f4(PTR_PTR_1126ba818);
  func_0x000107c46294();
  puVar3 = PTR_PTR_1126babd8;
  func_0x000107c610f4(PTR_PTR_1126babd8);
  func_0x000107c489f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100663644; end: 1006636e7; -[SCSnapchatStickerInjectorServices initWithStickerInjector:config:] */

undefined1 *
FUN_100663644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fdab0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006636e8; end: 1006636ef;  */

void FUN_1006636e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xc0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006636f0; end: 100663743;  */

void FUN_1006636f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xc0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100663744; end: 10066378f;  */

void FUN_100663744(void)

{
  long unaff_x20;
  
  FUN_100663790(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Entry: 100663790; end: 1006644f7;  */

void FUN_100663790(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_10023c5f0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  *(undefined8 *)(param_2 + 0xb8) = uStack_118;
  puVar1 = PTR_PTR_1126a8018;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174();
  uVar18 = uStack_f8;
  func_0x000107c61174();
  uVar19 = uStack_100;
  func_0x000107c61174(uStack_100);
  uVar20 = uStack_108;
  func_0x000107c61174();
  uVar21 = uStack_110;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_118);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar22 = auStack_70[0];
  func_0x000107c61174();
  uVar23 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar23 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar23);
  uVar24 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efc3d20);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc31c0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1d160);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef2b120);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25e10);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc3d50);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(uVar24);
  uVar23 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar23);
  uVar24 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef20520);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174(uVar24);
  uVar23 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar23);
  uVar24 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar18);
  func_0x000107c61174();
  uVar23 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar23);
  func_0x000107c61174(uVar19);
  func_0x000107c61174();
  uVar23 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efc3d70);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar23);
  func_0x000107c61174(uVar20);
  func_0x000107c61174();
  uVar23 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1a250);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar23);
  func_0x000107c615f0(uStack_118);
  func_0x000107c61174();
  uVar23 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010efc3da0);
  func_0x000107c5a49c(uVar24);
  func_0x000107c61170(uVar24);
  func_0x000107c615e8(uStack_118);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  uVar23 = uVar24;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c615e8(uStack_118);
  *(undefined8 *)(param_2 + 0xc0) = uVar23;
  *param_1 = param_2;
  return;
}



/* Entry: 1006644f8; end: 1006644ff;  */

void FUN_1006644f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100664500; end: 100664553;  */

void FUN_100664500(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100664554; end: 10066455f;  */

void FUN_100664554(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100213bf8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8030;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2e690);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 100664560; end: 10066480f;  */

void FUN_100664560(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100213bf8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8030;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2e690);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100664810; end: 10066481b;  */

long FUN_100664810(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10066481c; end: 10066499b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10066481c(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  FUN_100664810();
  FUN_10066499c();
  if (0 < *(int *)(unaff_x19 + 0x38)) {
    func_0x0001053936e4(unaff_x19 + 0x30);
  }
  if (0 < *(int *)(unaff_x19 + 0x50)) {
    func_0x0001053936e4(unaff_x19 + 0x48);
  }
  FUN_10029b2d4(unaff_x19 + 0x60);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c2a2e4(*(undefined8 *)(unaff_x19 + 0x68));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107c2a2b8(*(undefined8 *)(unaff_x19 + 0x70));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000107c2a2e4(*(undefined8 *)(unaff_x19 + 0x78));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000107c2a3b0(*(undefined8 *)(unaff_x19 + 0x80));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x000107c2a2d0(*(undefined8 *)(unaff_x19 + 0x88));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x000107c2a274(*(undefined8 *)(unaff_x19 + 0x90));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x000107c2a3b4(*(undefined8 *)(unaff_x19 + 0x98));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x000107c2a2e4(*(undefined8 *)(unaff_x19 + 0xa0));
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x000107c2a3b8(*(undefined8 *)(unaff_x19 + 0xa8));
    }
    if ((uVar1 >> 9 & 1) != 0) {
      func_0x000107c2a3bc(*(undefined8 *)(unaff_x19 + 0xb0));
    }
    if ((uVar1 >> 10 & 1) != 0) {
      func_0x000107c2a3c0(*(undefined8 *)(unaff_x19 + 0xb8));
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      func_0x000107c2a290(*(undefined8 *)(unaff_x19 + 0xc0));
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      func_0x000107c2a2a4(*(undefined8 *)(unaff_x19 + 200));
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      func_0x000107c2a3c4(*(undefined8 *)(unaff_x19 + 0xd0));
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      func_0x000107c2a3c8(*(undefined8 *)(unaff_x19 + 0xd8));
    }
  }
  *(undefined8 *)(unaff_x19 + 0xe8) = 0;
  *(undefined8 *)(unaff_x19 + 0xe0) = 0;
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x108) = 0;
  *(undefined8 *)(unaff_x19 + 0x100) = 0;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0xf0) = 0;
  *(undefined8 *)(unaff_x19 + 0x10f) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10066499c; end: 1006649c3;  */

void FUN_10066499c(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1006649c4; end: 100664aaf; -[CTPStickerContentManagerServiceProvider provide] */

void FUN_1006649c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126bb1b0;
  func_0x000107c610fc(PTR_PTR_1126bb1b0);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c5383c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


