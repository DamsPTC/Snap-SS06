/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00338dc8; end: 00338dcf;  */

undefined8 FUN_00338dc8(void)

{
  return 0;
}



/* Entry: 00338dd0; end: 00338e57;  */

long FUN_00338dd0(long param_1)

{
  _getenv();
  if (param_1 != 0) {
    if (param_1 == 0) {
      param_1 = 0;
    }
    else {
      _strlen();
      param_1 = param_1 + 1;
      FUN_00338c74(param_1);
      _memcpy();
    }
    return param_1;
  }
  return 0;
}



/* Entry: 00338e58; end: 00338e7f;  */

bool FUN_00338e58(ulong param_1)

{
  return lRam0000000000afa438 <= (long)(param_1 & 0xffffffff);
}



/* Entry: 00338e80; end: 00338ec3;  */

void FUN_00338e80(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined8 uStack_18;
  
  if (lRam0000000000afa438 <= (long)(ulong)param_3) {
    uStack_28 = param_1;
    uStack_20 = param_2;
    uStack_1c = param_3;
    uStack_18 = param_4;
    (*(code *)PTR_FUN_00afa448)(&uStack_28);
  }
  return;
}



/* Entry: 00338ec4; end: 00338fbf;  */

void FUN_00338ec4(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcStack_28;
  
  if ((dword *)pcRam0000000000afa438 == &MACH_HEADER.filetype) {
    FUN_0033adac(&pcStack_28,&PTR_DAT_00afa460);
    if (*pcStack_28 == '\0') {
      pcRam0000000000afa438 = (char *)((long)&MACH_HEADER.magic + 2);
    }
    else {
      pcVar1 = pcStack_28;
      FUN_00338fc0(pcStack_28,2);
      pcVar2 = pcStack_28;
      pcStack_28 = (char *)0x0;
      pcRam0000000000afa438 = pcVar1;
      if (pcVar2 == (char *)0x0) goto LAB_00338f30;
    }
    pcStack_28 = (char *)0x0;
    FUN_00338cb8();
  }
LAB_00338f30:
  if ((dword *)pcRam0000000000afa440 == &MACH_HEADER.filetype) {
    FUN_0033adac(&pcStack_28,&PTR_DAT_00afa490);
    if (*pcStack_28 == '\0') {
      pcRam0000000000afa440 = (char *)((long)&MACH_HEADER.filetype + 1);
    }
    else {
      pcVar2 = pcStack_28;
      FUN_00338fc0(pcStack_28,0xd);
      pcRam0000000000afa440 = pcVar2;
      if (pcStack_28 == (char *)0x0) {
        return;
      }
    }
    pcStack_28 = (char *)0x0;
    FUN_00338cb8();
  }
  return;
}



/* Entry: 00338fc0; end: 0033904b;  */

undefined8 FUN_00338fc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_00339a78(param_1,"DEBUG");
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    FUN_00339a78(param_1,"INFO");
    if ((int)uVar1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = param_1;
      FUN_00339a78(param_1,"ERROR");
      if ((int)uVar1 == 0) {
        uVar1 = 2;
      }
      else {
        FUN_00339a78(param_1,"NONE");
        uVar1 = 0xd;
        if ((int)param_1 != 0) {
          uVar1 = param_2;
        }
      }
    }
  }
  return uVar1;
}



/* Entry: 0033904c; end: 00339073;  */

void FUN_0033904c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_00338cb8();
  }
  return;
}



/* Entry: 00339074; end: 00339177;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00339074(undefined8 param_1,ulong param_2,byte *param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  byte *pbStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = param_3;
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,param_3,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  pbStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 00339178; end: 003393b3;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00339178(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  byte *pbVar6;
  char *pcVar7;
  uint uVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  byte *apbStack_148 [2];
  char cStack_131;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  ulong auStack_a8 [2];
  undefined7 *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  code *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  FUN_0033a598();
  lVar13 = *param_1;
  lVar2 = lVar13;
  uStack_f8 = uVar1;
  _strrchr(lVar13,0x2f);
  if (lVar2 != 0) {
    lVar13 = lVar2 + 1;
  }
  puVar3 = &uStack_f8;
  _localtime_r(puVar3,auStack_130);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_e8 = 0x656d69746c6163;
    uStack_e1 = 0;
    uStack_f0 = 0x6c3a726f727265;
    uStack_e9 = 0x6f;
  }
  else {
    puVar4 = &uStack_f0;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_130);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_f0 = 0x733a726f727265;
      uStack_e9 = 0x74;
      uStack_e8 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)((long)param_1 + 0xc);
  func_0x00338e1c();
  uVar11 = uVar5;
  _pthread_self();
  auStack_a8[1] = 0x560e98;
  puStack_98 = &uStack_f0;
  uStack_90 = 0x560e98;
  uStack_88 = param_2 & 0xffffffff;
  uStack_80 = 0x5606ac;
  pcStack_70 = FUN_00560738;
  uStack_60 = 0x560e98;
  uStack_58 = (ulong)*(uint *)(param_1 + 1);
  uStack_50 = 0x5606ac;
  puVar9 = auStack_a8;
  auStack_a8[0] = uVar5;
  uStack_78 = uVar11;
  lStack_68 = lVar13;
  FUN_0056189c(apbStack_148,"%s%s.%09d %7ld %s:%d]",0x15,puVar9,6);
  uVar8 = *(uint *)((long)param_1 + 0xc);
  func_0x00338e6c();
  if (uVar8 == 0) {
    auStack_a8[0] = auStack_a8[0] & 0xffffffffffffff00;
    uStack_90 = uStack_90 & 0xffffffffffffff00;
LAB_00339300:
    pbVar6 = *(byte **)PTR____stderrp_00999f90;
    pcVar7 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_a8);
    if ((char)uStack_90 == '\0') goto LAB_00339300;
    pbVar6 = *(byte **)PTR____stderrp_00999f90;
    pcVar7 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_131 < '\0') {
    pbVar6 = apbStack_148[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar6;
  }
  ___stack_chk_fail();
  if (cStack_131 < '\0') {
    __ZdlPv(apbStack_148[0]);
  }
  __Unwind_Resume();
  uVar8 = (uint)puVar9;
  if ((char *)0x3 < pcVar7) {
    uVar11 = (ulong)pcVar7 >> 2;
    pbVar12 = pbVar6;
    do {
      uVar8 = (*(int *)pbVar12 * 0x16a88000 | (uint)(*(int *)pbVar12 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar9;
      uVar8 = (uVar8 >> 0x13 | uVar8 << 0xd) * 5 + 0xe6546b64;
      puVar9 = (ulong *)(ulong)uVar8;
      uVar11 = uVar11 - 1;
      pbVar12 = pbVar12 + 4;
    } while (uVar11 != 0);
    pbVar6 = pbVar6 + ((ulong)pcVar7 & 0xfffffffffffffffc);
  }
  uVar10 = 0;
  uVar11 = (ulong)pcVar7 & 3;
  if (uVar11 != 1) {
    if (uVar11 != 2) {
      if (uVar11 != 3) goto LAB_00339464;
      uVar10 = (uint)pbVar6[2] << 0x10;
    }
    uVar10 = uVar10 | (uint)pbVar6[1] << 8;
  }
  uVar8 = ((uVar10 ^ *pbVar6) * 0x16a88000 | (uVar10 ^ *pbVar6) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar8;
LAB_00339464:
  uVar8 = uVar8 ^ (uint)pcVar7;
  uVar8 = (uVar8 ^ uVar8 >> 0x10) * -0x7a143595;
  uVar8 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar8 ^ uVar8 >> 0x10);
}



/* Entry: 003393b4; end: 0033948f;  */

uint FUN_003393b4(byte *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (3 < param_2) {
    uVar2 = param_2 >> 2;
    pbVar4 = param_1;
    do {
      param_3 = (*(int *)pbVar4 * 0x16a88000 | (uint)(*(int *)pbVar4 * -0x3361d2af) >> 0x11) *
                0x1b873593 ^ param_3;
      param_3 = (param_3 >> 0x13 | param_3 << 0xd) * 5 + 0xe6546b64;
      uVar2 = uVar2 - 1;
      pbVar4 = pbVar4 + 4;
    } while (uVar2 != 0);
    param_1 = param_1 + (param_2 & 0xfffffffffffffffc);
  }
  uVar1 = 0;
  uVar3 = (uint)param_2 & 3;
  if (uVar3 != 1) {
    if (uVar3 != 2) {
      if (uVar3 != 3) goto LAB_00339464;
      uVar1 = (uint)param_1[2] << 0x10;
    }
    uVar1 = uVar1 | (uint)param_1[1] << 8;
  }
  param_3 = ((uVar1 ^ *param_1) * 0x16a88000 | (uVar1 ^ *param_1) * -0x3361d2af >> 0x11) *
            0x1b873593 ^ param_3;
LAB_00339464:
  param_3 = param_3 ^ (uint)param_2;
  uVar1 = (param_3 ^ param_3 >> 0x10) * -0x7a143595;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
  return uVar1 ^ uVar1 >> 0x10;
}



/* Entry: 00339490; end: 003394e3;  */

long FUN_00339490(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    _strlen();
    param_1 = param_1 + 1;
    FUN_00338c74(param_1);
    _memcpy();
  }
  return param_1;
}



/* Entry: 003394e4; end: 00339623;  */

undefined1 ** FUN_003394e4(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 **ppuVar6;
  ulong uVar7;
  char **ppcVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined1 **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  char **ppcVar15;
  byte bVar16;
  long lStack_108;
  undefined8 uStack_100;
  char *pcStack_f8;
  undefined8 uStack_f0;
  char *pcStack_c8;
  char *pcStack_c0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  char acStack_66 [11];
  undefined1 auStack_5b [35];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar3 = &lStack_108;
  lStack_108 = param_2;
  uStack_100 = param_3;
  _localtime();
  _strftime(auStack_5b,0x23,"%Y-%m-%dT%H:%M:%S");
  _snprintf(acStack_66,0xb,".%09d");
  uVar11 = 10;
  do {
    iVar10 = (int)uVar11;
    uVar11 = (ulong)(iVar10 - 3U);
    if (((acStack_66[uVar11] != '0') || (acStack_66[iVar10 - 2] != '0')) ||
       (acStack_66[iVar10 - 1] != '0')) break;
    acStack_66[uVar11] = '\0';
    cVar1 = '\0';
    if (iVar10 != 4) {
      cVar1 = acStack_66[0];
    }
    acStack_66[0] = cVar1;
  } while (3 < iVar10 - 3U);
  puVar4 = auStack_5b;
  _strlen();
  pcVar5 = acStack_66;
  puStack_98 = auStack_5b;
  puStack_90 = puVar4;
  _strlen();
  pcStack_f8 = "Z";
  uStack_f0 = 1;
  ppuVar6 = &puStack_98;
  ppcVar8 = &pcStack_c8;
  uVar9 = 0;
  pcStack_c8 = acStack_66;
  pcStack_c0 = pcVar5;
  FUN_00575ddc(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return ppuVar6;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (((uVar9 & 1) == 0) || (ppcVar8 == (char **)0x0)) {
    uVar13 = 0;
    uVar11 = 0;
    ppuVar12 = (undefined1 **)0x0;
  }
  else {
    ppcVar15 = (char **)0x0;
    uVar13 = 0;
    uVar11 = 0;
    ppuVar12 = (undefined1 **)0x0;
    do {
      if (ppcVar15 != (char **)0x0) {
        if (uVar11 == uVar13) {
          uVar13 = uVar13 * 2;
          if (uVar13 < 9) {
            uVar13 = 8;
          }
          FUN_00338cbc(ppuVar12,uVar13);
        }
        *(undefined1 *)((long)ppuVar12 + uVar11) = 0x20;
        uVar11 = uVar11 + 1;
      }
      cVar1 = "0123456789abcdef"[*(byte *)((long)ppuVar6 + (long)ppcVar15) >> 4];
      if (uVar11 == uVar13) {
        uVar13 = uVar13 * 2;
        if (uVar13 < 9) {
          uVar13 = 8;
        }
        FUN_00338cbc(ppuVar12,uVar13);
      }
      uVar14 = uVar11 + 1;
      *(char *)((long)ppuVar12 + uVar11) = cVar1;
      cVar1 = "0123456789abcdef"[(ulong)*(byte *)((long)ppuVar6 + (long)ppcVar15) & 0xf];
      if (uVar14 == uVar13) {
        uVar13 = uVar13 * 2;
        if (uVar13 < 9) {
          uVar13 = 8;
        }
        FUN_00338cbc(ppuVar12,uVar13);
      }
      uVar11 = uVar11 + 2;
      *(char *)((long)ppuVar12 + uVar14) = cVar1;
      ppcVar15 = (char **)((long)ppcVar15 + 1);
    } while (ppcVar8 != ppcVar15);
  }
  uVar14 = uVar11;
  if ((uVar9 >> 1 & 1) != 0) {
    if (uVar11 == 0) {
      uVar14 = 0;
      puVar2 = PTR___DefaultRuneLocale_00999f28;
    }
    else {
      if (uVar11 == uVar13) {
        uVar13 = uVar13 * 2;
        if (uVar13 < 9) {
          uVar13 = 8;
        }
        FUN_00338cbc(ppuVar12,uVar13);
      }
      *(undefined1 *)((long)ppuVar12 + uVar11) = 0x20;
      if (uVar11 + 1 == uVar13) {
        uVar13 = uVar13 * 2;
        if (uVar13 < 9) {
          uVar13 = 8;
        }
        FUN_00338cbc(ppuVar12,uVar13);
      }
      *(undefined1 *)((long)ppuVar12 + uVar11 + 1) = 0x27;
      uVar14 = uVar11 + 2;
      puVar2 = PTR___DefaultRuneLocale_00999f28;
    }
    for (; ppcVar8 != (char **)0x0; ppcVar8 = (char **)((long)ppcVar8 + -1)) {
      uVar7 = (ulong)*(byte *)ppuVar6;
      if ((char)*(byte *)ppuVar6 < '\0') {
        ___maskrune(uVar7,0x40000);
        if ((int)uVar7 != 0) goto LAB_003397d8;
LAB_003397ec:
        bVar16 = 0x2e;
      }
      else {
        if ((*(uint *)(puVar2 + uVar7 * 4 + 0x3c) & 0x40000) == 0) goto LAB_003397ec;
LAB_003397d8:
        bVar16 = *(byte *)ppuVar6;
      }
      if (uVar14 == uVar13) {
        uVar13 = uVar13 * 2;
        if (uVar13 < 9) {
          uVar13 = 8;
        }
        FUN_00338cbc(ppuVar12,uVar13);
      }
      *(byte *)((long)ppuVar12 + uVar14) = bVar16;
      ppuVar6 = (undefined1 **)((long)ppuVar6 + 1);
      uVar14 = uVar14 + 1;
    }
    if (uVar11 != 0) {
      if (uVar14 == uVar13) {
        uVar13 = uVar13 * 2;
        if (uVar13 < 9) {
          uVar13 = 8;
        }
        FUN_00338cbc(ppuVar12,uVar13);
      }
      *(undefined1 *)((long)ppuVar12 + uVar14) = 0x27;
      uVar14 = uVar14 + 1;
    }
  }
  if (uVar14 == uVar13) {
    uVar13 = uVar13 * 2;
    if (uVar13 < 9) {
      uVar13 = 8;
    }
    FUN_00338cbc(ppuVar12,uVar13);
  }
  *(undefined1 *)((long)ppuVar12 + uVar14) = 0;
  *plVar3 = uVar14 + 1;
  return ppuVar12;
}



/* Entry: 00339624; end: 003398d7;  */

long FUN_00339624(byte *param_1,long param_2,uint param_3,long *param_4)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  
  if (((param_3 & 1) == 0) || (param_2 == 0)) {
    uVar5 = 0;
    uVar6 = 0;
    lVar4 = 0;
  }
  else {
    lVar8 = 0;
    uVar5 = 0;
    uVar6 = 0;
    lVar4 = 0;
    do {
      if (lVar8 != 0) {
        if (uVar6 == uVar5) {
          uVar5 = uVar5 * 2;
          if (uVar5 < 9) {
            uVar5 = 8;
          }
          FUN_00338cbc(lVar4,uVar5);
        }
        *(undefined1 *)(lVar4 + uVar6) = 0x20;
        uVar6 = uVar6 + 1;
      }
      cVar1 = "0123456789abcdef"[param_1[lVar8] >> 4];
      if (uVar6 == uVar5) {
        uVar5 = uVar5 * 2;
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        FUN_00338cbc(lVar4,uVar5);
      }
      uVar7 = uVar6 + 1;
      *(char *)(lVar4 + uVar6) = cVar1;
      cVar1 = "0123456789abcdef"[(ulong)param_1[lVar8] & 0xf];
      if (uVar7 == uVar5) {
        uVar5 = uVar5 * 2;
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        FUN_00338cbc(lVar4,uVar5);
      }
      uVar6 = uVar6 + 2;
      *(char *)(lVar4 + uVar7) = cVar1;
      lVar8 = lVar8 + 1;
    } while (param_2 != lVar8);
  }
  uVar7 = uVar6;
  if ((param_3 >> 1 & 1) != 0) {
    if (uVar6 == 0) {
      uVar7 = 0;
      puVar2 = PTR___DefaultRuneLocale_00999f28;
    }
    else {
      if (uVar6 == uVar5) {
        uVar5 = uVar5 * 2;
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        FUN_00338cbc(lVar4,uVar5);
      }
      *(undefined1 *)(lVar4 + uVar6) = 0x20;
      if (uVar6 + 1 == uVar5) {
        uVar5 = uVar5 * 2;
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        FUN_00338cbc(lVar4,uVar5);
      }
      *(undefined1 *)(lVar4 + uVar6 + 1) = 0x27;
      uVar7 = uVar6 + 2;
      puVar2 = PTR___DefaultRuneLocale_00999f28;
    }
    for (; param_2 != 0; param_2 = param_2 + -1) {
      uVar3 = (ulong)*param_1;
      if ((char)*param_1 < '\0') {
        ___maskrune(uVar3,0x40000);
        if ((int)uVar3 != 0) goto LAB_003397d8;
LAB_003397ec:
        bVar9 = 0x2e;
      }
      else {
        if ((*(uint *)(puVar2 + uVar3 * 4 + 0x3c) & 0x40000) == 0) goto LAB_003397ec;
LAB_003397d8:
        bVar9 = *param_1;
      }
      if (uVar7 == uVar5) {
        uVar5 = uVar5 * 2;
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        FUN_00338cbc(lVar4,uVar5);
      }
      *(byte *)(lVar4 + uVar7) = bVar9;
      param_1 = param_1 + 1;
      uVar7 = uVar7 + 1;
    }
    if (uVar6 != 0) {
      if (uVar7 == uVar5) {
        uVar5 = uVar5 * 2;
        if (uVar5 < 9) {
          uVar5 = 8;
        }
        FUN_00338cbc(lVar4,uVar5);
      }
      *(undefined1 *)(lVar4 + uVar7) = 0x27;
      uVar7 = uVar7 + 1;
    }
  }
  if (uVar7 == uVar5) {
    uVar5 = uVar5 * 2;
    if (uVar5 < 9) {
      uVar5 = 8;
    }
    FUN_00338cbc(lVar4,uVar5);
  }
  *(undefined1 *)(lVar4 + uVar7) = 0;
  *param_4 = uVar7 + 1;
  return lVar4;
}



/* Entry: 003398d8; end: 003399d7;  */

undefined8 FUN_003398d8(byte *param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar2 = 0;
    while( true ) {
      if ((*param_1 - 0x3a < 0xfffffff6) ||
         (uVar1 = ((uint)*param_1 + uVar2 * 10) - 0x30, uVar1 < uVar2)) break;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      uVar2 = uVar1;
      if (param_2 == 0) {
        *param_3 = uVar1;
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 003399d8; end: 00339a17;  */

undefined4 FUN_003399d8(ulong param_1)

{
  undefined4 uVar1;
  char *pcStack_18;
  
  _strtol(param_1,&pcStack_18,10);
  uVar1 = (undefined4)param_1;
  if (0x7fffffff < param_1 || *pcStack_18 != '\0') {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 00339a18; end: 00339a77;  */

int FUN_00339a18(char *param_1,char *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  do {
    param_3 = param_3 + -1;
    iVar1 = (int)*param_1;
    ___tolower();
    iVar2 = (int)*param_2;
    ___tolower();
    if ((iVar2 == 0 || iVar1 == 0) || iVar1 != iVar2) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (param_3 != 0);
  return iVar1 - iVar2;
}



/* Entry: 00339a78; end: 00339a7f;  */

int FUN_00339a78(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = -2;
  do {
    iVar2 = (int)*param_1;
    ___tolower();
    iVar3 = (int)*param_2;
    ___tolower();
    bVar1 = lVar4 != 0;
    lVar4 = lVar4 + -1;
    if ((iVar3 == 0 || iVar2 == 0) || iVar2 != iVar3) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (bVar1);
  return iVar2 - iVar3;
}



/* Entry: 00339a80; end: 00339bcb;  */

void FUN_00339a80(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uStack_48;
  
  *param_3 = 0;
  *param_4 = 0;
  uStack_48 = 0;
  lVar1 = param_1;
  _strstr();
  while (lVar1 != 0) {
    func_0x00339b30(param_1,lVar1,param_3,param_4,&uStack_48);
    param_1 = param_2;
    _strlen();
    param_1 = lVar1 + param_1;
    lVar1 = param_1;
    _strstr(param_1,param_2);
  }
  lVar1 = param_1;
  _strlen(param_1);
  func_0x00339b30(param_1,param_1 + lVar1,param_3,param_4,&uStack_48);
  return;
}



/* Entry: 00339bcc; end: 00339c07;  */

long FUN_00339bcc(long param_1,int param_2,long param_3)

{
  if ((param_1 != 0) && (param_3 != 0)) {
    do {
      if (*(char *)(param_1 + -1 + param_3) == param_2) {
        return param_1 + param_3 + -1;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}



/* Entry: 00339c08; end: 00339cc7;  */

bool FUN_00339c08(long param_1,undefined1 *param_2)

{
  bool bVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
LAB_00339c94:
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    FUN_00339a18(param_1,"1",0xffffffffffffffff);
    if ((int)lVar2 == 0) {
      bVar1 = true;
    }
    else {
      uVar4 = 0;
      bVar1 = true;
      do {
        lVar2 = param_1;
        FUN_00339a18(param_1,(&PTR_s_0_009db138)[uVar4],0xffffffffffffffff);
        if ((int)lVar2 == 0) {
          uVar3 = 0;
          goto LAB_00339cac;
        }
        bVar1 = uVar4 < 4;
        if (uVar4 == 4) goto LAB_00339c94;
        lVar2 = param_1;
        FUN_00339a18(param_1,(&PTR_s_t_009db118)[uVar4],0xffffffffffffffff);
        uVar4 = uVar4 + 1;
      } while ((int)lVar2 != 0);
    }
    uVar3 = 1;
LAB_00339cac:
    *param_2 = uVar3;
  }
  return bVar1;
}



/* Entry: 00339cc8; end: 00339d13;  */

void FUN_00339cc8(long *param_1,int param_2)

{
  *param_1 = (long)param_2;
  return;
}



/* Entry: 00339d14; end: 00339d47;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00339d14(long *param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined7 *puVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1e8 [2];
  char cStack_1d1;
  undefined1 auStack_1d0 [56];
  undefined8 uStack_198;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  ulong auStack_148 [2];
  undefined7 *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  code *pcStack_110;
  long lStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_a0;
  byte abStack_98 [64];
  long lStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  do {
    lVar13 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar13 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (0 < lVar13) {
    return (byte *)(ulong)(lVar13 == 1);
  }
  func_0x00770ce4();
  pcStack_18 = FUN_00339d48;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar9 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar15 = param_2;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_00338e58();
  if ((int)pbVar9 != 0) {
    puStack_a0 = &stack0xfffffffffffffff0;
    pbVar9 = abStack_98;
    _vsnprintf(pbVar9,0x40,param_4,&stack0xfffffffffffffff0);
    if ((int)(uint)pbVar9 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar9;
      if ((uint)pbVar9 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_98;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar9 & 0xffffffff) + 1);
        FUN_00338c74();
        puStack_a0 = &stack0xfffffffffffffff0;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar15 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar9 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return pbVar9;
  }
  ___stack_chk_fail();
  uStack_b8 = 2;
  pcStack_a8 = FUN_00339178;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = 1;
  pbStack_e0 = unaff_x24;
  pbStack_d8 = unaff_x23;
  pbStack_d0 = param_4;
  plStack_c8 = param_1;
  uStack_c0 = param_2;
  ppuStack_b0 = &puStack_20;
  FUN_0033a598();
  lVar13 = *(long *)pbVar9;
  lVar4 = lVar13;
  uStack_198 = uVar3;
  _strrchr(lVar13,0x2f);
  if (lVar4 != 0) {
    lVar13 = lVar4 + 1;
  }
  puVar5 = &uStack_198;
  _localtime_r(puVar5,auStack_1d0);
  if (puVar5 == (undefined8 *)0x0) {
    uStack_188 = 0x656d69746c6163;
    uStack_181 = 0;
    uStack_190 = 0x6c3a726f727265;
    uStack_189 = 0x6f;
  }
  else {
    puVar6 = &uStack_190;
    _strftime(puVar6,0x40,"%m%d %H:%M:%S",auStack_1d0);
    if (puVar6 == (undefined7 *)0x0) {
      uStack_190 = 0x733a726f727265;
      uStack_189 = 0x74;
      uStack_188 = 0x656d69746672;
    }
  }
  uVar7 = (ulong)*(uint *)(pbVar9 + 0xc);
  func_0x00338e1c();
  uVar8 = uVar7;
  _pthread_self();
  auStack_148[1] = 0x560e98;
  puStack_138 = &uStack_190;
  uStack_130 = 0x560e98;
  uStack_128 = uVar15 & 0xffffffff;
  uStack_120 = 0x5606ac;
  pcStack_110 = FUN_00560738;
  uStack_100 = 0x560e98;
  uStack_f8 = (ulong)*(uint *)(pbVar9 + 8);
  uStack_f0 = 0x5606ac;
  puVar12 = auStack_148;
  auStack_148[0] = uVar7;
  uStack_118 = uVar8;
  lStack_108 = lVar13;
  FUN_0056189c(apbStack_1e8,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)(pbVar9 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_148[0] = auStack_148[0] & 0xffffffffffffff00;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
LAB_00339300:
    pbVar9 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_148);
    if ((char)uStack_130 == '\0') goto LAB_00339300;
    pbVar9 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1d1 < '\0') {
    pbVar9 = apbStack_1e8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) {
    return pbVar9;
  }
  ___stack_chk_fail();
  if (cStack_1d1 < '\0') {
    __ZdlPv(apbStack_1e8[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar10) {
    uVar15 = (ulong)pcVar10 >> 2;
    pbVar16 = pbVar9;
    do {
      uVar11 = (*(int *)pbVar16 * 0x16a88000 | (uint)(*(int *)pbVar16 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar15 = uVar15 - 1;
      pbVar16 = pbVar16 + 4;
    } while (uVar15 != 0);
    pbVar9 = pbVar9 + ((ulong)pcVar10 & 0xfffffffffffffffc);
  }
  uVar14 = 0;
  uVar15 = (ulong)pcVar10 & 3;
  if (uVar15 != 1) {
    if (uVar15 != 2) {
      if (uVar15 != 3) goto LAB_00339464;
      uVar14 = (uint)pbVar9[2] << 0x10;
    }
    uVar14 = uVar14 | (uint)pbVar9[1] << 8;
  }
  uVar11 = ((uVar14 ^ *pbVar9) * 0x16a88000 | (uVar14 ^ *pbVar9) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar10;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 00339d48; end: 00339d4f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00339d48(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 00339d50; end: 00339def;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00339d50(byte *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  ulong *puVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_2e8 [2];
  char cStack_2d1;
  undefined1 auStack_2d0 [56];
  undefined8 uStack_298;
  undefined7 uStack_290;
  undefined1 uStack_289;
  undefined7 uStack_288;
  undefined1 uStack_281;
  ulong auStack_248 [2];
  undefined7 *puStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  code *pcStack_210;
  long lStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  undefined8 uStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined1 **ppuStack_1a0;
  byte abStack_198 [64];
  long lStack_158;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  byte abStack_88 [16];
  long lStack_78;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  pbVar10 = (byte *)0x0;
  _pthread_mutex_init();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770d18();
  uStack_18 = 0x339d70;
  puStack_20 = &stack0xfffffffffffffff0;
  _pthread_mutex_destroy();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770d4c();
  uStack_28 = 0x339d8c;
  puStack_30 = (undefined1 *)&puStack_20;
  _pthread_mutex_lock();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770d80();
  uStack_38 = 0x339da8;
  puStack_40 = (undefined1 *)&puStack_30;
  _pthread_mutex_unlock();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770db4();
  uStack_48 = 0x339dc4;
  puStack_50 = (undefined1 *)&puStack_40;
  _pthread_mutex_trylock();
  if (((uint)param_1 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)param_1 == 0);
  }
  func_0x00770de8();
  pcStack_58 = FUN_00339df0;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar15 = abStack_88;
  puStack_60 = (undefined1 *)&puStack_50;
  _pthread_condattr_init();
  if ((int)pbVar15 == 0) {
    pbVar10 = abStack_88;
    _pthread_cond_init();
    if ((int)param_1 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
      return param_1;
    }
  }
  else {
    func_0x00770e50();
    param_1 = pbVar15;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_00339e64;
  ppuStack_a0 = &puStack_60;
  _pthread_cond_destroy();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770e84();
  pcStack_a8 = FUN_00339e80;
  uVar7 = (ulong)param_4 >> 0x20;
  pbVar15 = pbVar10;
  puStack_b0 = (undefined1 *)&ppuStack_a0;
  func_0x0033a068(uVar7);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar7);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar7 = (ulong)param_4 >> 0x20;
    pbVar15 = param_4;
    FUN_0033a598(uVar7);
    FUN_0033a01c(param_3,param_4,uVar7);
    lStack_d8 = (long)(int)param_4;
    uStack_e0 = param_3;
    _pthread_cond_timedwait(param_1,pbVar10,&uStack_e0);
  }
  if (((uint)param_1 < 0x3d) && ((1L << ((ulong)param_1 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)param_1 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_e8 = FUN_00339f68;
  ppuStack_f0 = &puStack_b0;
  _pthread_cond_signal();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770eec();
  uStack_f8 = 0x339f84;
  puStack_100 = (undefined1 *)&ppuStack_f0;
  _pthread_cond_broadcast();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f20();
  uStack_108 = 0x339fa0;
  puStack_110 = (undefined1 *)&puStack_100;
  _pthread_once();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f54();
  pcStack_118 = FUN_00339fbc;
  lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar8 = pbVar10;
  puStack_120 = (undefined1 *)&puStack_110;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    ppuStack_1a0 = &puStack_110;
    pbVar1 = abStack_198;
    _vsnprintf(pbVar1,0x40,pbVar15,&puStack_110);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar15 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar15 = (byte *)0x0;
        unaff_x23 = abStack_198;
      }
      else {
        pbVar15 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_1a0 = &puStack_110;
        _vsnprintf();
        unaff_x23 = pbVar15;
      }
    }
    pbVar8 = pbVar10;
    FUN_00338e80(param_1,pbVar10,2,unaff_x23);
    pbVar1 = pbVar15;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_1b8 = 2;
  pcStack_1a8 = FUN_00339178;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_1e0 = unaff_x24;
  pbStack_1d8 = unaff_x23;
  pbStack_1d0 = pbVar15;
  pbStack_1c8 = param_1;
  pbStack_1c0 = pbVar10;
  ppuStack_1b0 = &puStack_120;
  FUN_0033a598();
  lVar14 = *(long *)pbVar1;
  lVar3 = lVar14;
  uStack_298 = uVar2;
  _strrchr(lVar14,0x2f);
  if (lVar3 != 0) {
    lVar14 = lVar3 + 1;
  }
  puVar4 = &uStack_298;
  _localtime_r(puVar4,auStack_2d0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_288 = 0x656d69746c6163;
    uStack_281 = 0;
    uStack_290 = 0x6c3a726f727265;
    uStack_289 = 0x6f;
  }
  else {
    puVar5 = &uStack_290;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_2d0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_290 = 0x733a726f727265;
      uStack_289 = 0x74;
      uStack_288 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar6;
  _pthread_self();
  auStack_248[1] = 0x560e98;
  puStack_238 = &uStack_290;
  uStack_230 = 0x560e98;
  uStack_228 = (ulong)pbVar8 & 0xffffffff;
  uStack_220 = 0x5606ac;
  pcStack_210 = FUN_00560738;
  uStack_200 = 0x560e98;
  uStack_1f8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_1f0 = 0x5606ac;
  puVar12 = auStack_248;
  auStack_248[0] = uVar6;
  uStack_218 = uVar7;
  lStack_208 = lVar14;
  FUN_0056189c(apbStack_2e8,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_248[0] = auStack_248[0] & 0xffffffffffffff00;
    uStack_230 = uStack_230 & 0xffffffffffffff00;
LAB_00339300:
    pbVar10 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_248);
    if ((char)uStack_230 == '\0') goto LAB_00339300;
    pbVar10 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2d1 < '\0') {
    pbVar10 = apbStack_2e8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1e8) {
    return pbVar10;
  }
  ___stack_chk_fail();
  if (cStack_2d1 < '\0') {
    __ZdlPv(apbStack_2e8[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar9) {
    uVar7 = (ulong)pcVar9 >> 2;
    pbVar15 = pbVar10;
    do {
      uVar11 = (*(int *)pbVar15 * 0x16a88000 | (uint)(*(int *)pbVar15 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar7 = uVar7 - 1;
      pbVar15 = pbVar15 + 4;
    } while (uVar7 != 0);
    pbVar10 = pbVar10 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar7 = (ulong)pcVar9 & 3;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      if (uVar7 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar10[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar10[1] << 8;
  }
  uVar11 = ((uVar13 ^ *pbVar10) * 0x16a88000 | (uVar13 ^ *pbVar10) * -0x3361d2af >> 0x11) *
           0x1b873593 ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar9;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 00339df0; end: 00339e63;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00339df0(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_298 [2];
  char cStack_281;
  undefined1 auStack_280 [56];
  undefined8 uStack_248;
  undefined7 uStack_240;
  undefined1 uStack_239;
  undefined7 uStack_238;
  undefined1 uStack_231;
  ulong auStack_1f8 [2];
  undefined7 *puStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  code *pcStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  undefined8 uStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined1 **ppuStack_150;
  byte abStack_148 [64];
  long lStack_108;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  byte abStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar14 = abStack_38;
  _pthread_condattr_init();
  if ((int)pbVar14 == 0) {
    param_2 = abStack_38;
    _pthread_cond_init();
    if ((int)param_1 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
      return param_1;
    }
  }
  else {
    func_0x00770e50();
    param_1 = pbVar14;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_00339e64;
  puStack_50 = &stack0xfffffffffffffff0;
  _pthread_cond_destroy();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770e84();
  pcStack_58 = FUN_00339e80;
  uVar7 = (ulong)param_4 >> 0x20;
  pbVar14 = param_2;
  puStack_60 = (undefined1 *)&puStack_50;
  func_0x0033a068(uVar7);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar7);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar7 = (ulong)param_4 >> 0x20;
    pbVar14 = param_4;
    FUN_0033a598(uVar7);
    FUN_0033a01c(param_3,param_4,uVar7);
    lStack_88 = (long)(int)param_4;
    uStack_90 = param_3;
    _pthread_cond_timedwait(param_1,param_2,&uStack_90);
  }
  if (((uint)param_1 < 0x3d) && ((1L << ((ulong)param_1 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)param_1 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_98 = FUN_00339f68;
  ppuStack_a0 = &puStack_60;
  _pthread_cond_signal();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770eec();
  uStack_a8 = 0x339f84;
  puStack_b0 = (undefined1 *)&ppuStack_a0;
  _pthread_cond_broadcast();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f20();
  uStack_b8 = 0x339fa0;
  puStack_c0 = (undefined1 *)&puStack_b0;
  _pthread_once();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f54();
  pcStack_c8 = FUN_00339fbc;
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar8 = param_2;
  puStack_d0 = (undefined1 *)&puStack_c0;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    ppuStack_150 = &puStack_c0;
    pbVar1 = abStack_148;
    _vsnprintf(pbVar1,0x40,pbVar14,&puStack_c0);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar14 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar14 = (byte *)0x0;
        unaff_x23 = abStack_148;
      }
      else {
        pbVar14 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_150 = &puStack_c0;
        _vsnprintf();
        unaff_x23 = pbVar14;
      }
    }
    pbVar8 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar1 = pbVar14;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_168 = 2;
  pcStack_158 = FUN_00339178;
  lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_190 = unaff_x24;
  pbStack_188 = unaff_x23;
  pbStack_180 = pbVar14;
  pbStack_178 = param_1;
  pbStack_170 = param_2;
  ppuStack_160 = &puStack_d0;
  FUN_0033a598();
  lVar13 = *(long *)pbVar1;
  lVar3 = lVar13;
  uStack_248 = uVar2;
  _strrchr(lVar13,0x2f);
  if (lVar3 != 0) {
    lVar13 = lVar3 + 1;
  }
  puVar4 = &uStack_248;
  _localtime_r(puVar4,auStack_280);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_238 = 0x656d69746c6163;
    uStack_231 = 0;
    uStack_240 = 0x6c3a726f727265;
    uStack_239 = 0x6f;
  }
  else {
    puVar5 = &uStack_240;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_280);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_240 = 0x733a726f727265;
      uStack_239 = 0x74;
      uStack_238 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar6;
  _pthread_self();
  auStack_1f8[1] = 0x560e98;
  puStack_1e8 = &uStack_240;
  uStack_1e0 = 0x560e98;
  uStack_1d8 = (ulong)pbVar8 & 0xffffffff;
  uStack_1d0 = 0x5606ac;
  pcStack_1c0 = FUN_00560738;
  uStack_1b0 = 0x560e98;
  uStack_1a8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_1a0 = 0x5606ac;
  puVar11 = auStack_1f8;
  auStack_1f8[0] = uVar6;
  uStack_1c8 = uVar7;
  lStack_1b8 = lVar13;
  FUN_0056189c(apbStack_298,"%s%s.%09d %7ld %s:%d]",0x15,puVar11,6);
  uVar10 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar10 == 0) {
    auStack_1f8[0] = auStack_1f8[0] & 0xffffffffffffff00;
    uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
LAB_00339300:
    pbVar14 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_1f8);
    if ((char)uStack_1e0 == '\0') goto LAB_00339300;
    pbVar14 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_281 < '\0') {
    pbVar14 = apbStack_298[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_198) {
    return pbVar14;
  }
  ___stack_chk_fail();
  if (cStack_281 < '\0') {
    __ZdlPv(apbStack_298[0]);
  }
  __Unwind_Resume();
  uVar10 = (uint)puVar11;
  if ((char *)0x3 < pcVar9) {
    uVar7 = (ulong)pcVar9 >> 2;
    pbVar1 = pbVar14;
    do {
      uVar10 = (*(int *)pbVar1 * 0x16a88000 | (uint)(*(int *)pbVar1 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar11;
      uVar10 = (uVar10 >> 0x13 | uVar10 << 0xd) * 5 + 0xe6546b64;
      puVar11 = (ulong *)(ulong)uVar10;
      uVar7 = uVar7 - 1;
      pbVar1 = pbVar1 + 4;
    } while (uVar7 != 0);
    pbVar14 = pbVar14 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar12 = 0;
  uVar7 = (ulong)pcVar9 & 3;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      if (uVar7 != 3) goto LAB_00339464;
      uVar12 = (uint)pbVar14[2] << 0x10;
    }
    uVar12 = uVar12 | (uint)pbVar14[1] << 8;
  }
  uVar10 = ((uVar12 ^ *pbVar14) * 0x16a88000 | (uVar12 ^ *pbVar14) * -0x3361d2af >> 0x11) *
           0x1b873593 ^ uVar10;
LAB_00339464:
  uVar10 = uVar10 ^ (uint)pcVar9;
  uVar10 = (uVar10 ^ uVar10 >> 0x10) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar10 ^ uVar10 >> 0x10);
}



/* Entry: 00339e64; end: 00339e7f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00339e64(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_258 [2];
  char cStack_241;
  undefined1 auStack_240 [56];
  undefined8 uStack_208;
  undefined7 uStack_200;
  undefined1 uStack_1f9;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  ulong auStack_1b8 [2];
  undefined7 *puStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  code *pcStack_180;
  long lStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  undefined8 uStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined1 **ppuStack_110;
  byte abStack_108 [64];
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  _pthread_cond_destroy();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770e84();
  pcStack_18 = FUN_00339e80;
  uVar7 = (ulong)param_4 >> 0x20;
  pbVar14 = param_2;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x0033a068(uVar7);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar7);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar7 = (ulong)param_4 >> 0x20;
    pbVar14 = param_4;
    FUN_0033a598(uVar7);
    FUN_0033a01c(param_3,param_4,uVar7);
    lStack_48 = (long)(int)param_4;
    uStack_50 = param_3;
    _pthread_cond_timedwait(param_1,param_2,&uStack_50);
  }
  if (((uint)param_1 < 0x3d) && ((1L << ((ulong)param_1 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)param_1 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_58 = FUN_00339f68;
  ppuStack_60 = &puStack_20;
  _pthread_cond_signal();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770eec();
  uStack_68 = 0x339f84;
  puStack_70 = (undefined1 *)&ppuStack_60;
  _pthread_cond_broadcast();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f20();
  uStack_78 = 0x339fa0;
  puStack_80 = (undefined1 *)&puStack_70;
  _pthread_once();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f54();
  pcStack_88 = FUN_00339fbc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar8 = param_2;
  puStack_90 = (undefined1 *)&puStack_80;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    ppuStack_110 = &puStack_80;
    pbVar1 = abStack_108;
    _vsnprintf(pbVar1,0x40,pbVar14,&puStack_80);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar14 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar14 = (byte *)0x0;
        unaff_x23 = abStack_108;
      }
      else {
        pbVar14 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_110 = &puStack_80;
        _vsnprintf();
        unaff_x23 = pbVar14;
      }
    }
    pbVar8 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar1 = pbVar14;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_c8) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_128 = 2;
  pcStack_118 = FUN_00339178;
  lStack_158 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_150 = unaff_x24;
  pbStack_148 = unaff_x23;
  pbStack_140 = pbVar14;
  pbStack_138 = param_1;
  pbStack_130 = param_2;
  ppuStack_120 = &puStack_90;
  FUN_0033a598();
  lVar13 = *(long *)pbVar1;
  lVar3 = lVar13;
  uStack_208 = uVar2;
  _strrchr(lVar13,0x2f);
  if (lVar3 != 0) {
    lVar13 = lVar3 + 1;
  }
  puVar4 = &uStack_208;
  _localtime_r(puVar4,auStack_240);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_1f8 = 0x656d69746c6163;
    uStack_1f1 = 0;
    uStack_200 = 0x6c3a726f727265;
    uStack_1f9 = 0x6f;
  }
  else {
    puVar5 = &uStack_200;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_240);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_200 = 0x733a726f727265;
      uStack_1f9 = 0x74;
      uStack_1f8 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar6;
  _pthread_self();
  auStack_1b8[1] = 0x560e98;
  puStack_1a8 = &uStack_200;
  uStack_1a0 = 0x560e98;
  uStack_198 = (ulong)pbVar8 & 0xffffffff;
  uStack_190 = 0x5606ac;
  pcStack_180 = FUN_00560738;
  uStack_170 = 0x560e98;
  uStack_168 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_160 = 0x5606ac;
  puVar11 = auStack_1b8;
  auStack_1b8[0] = uVar6;
  uStack_188 = uVar7;
  lStack_178 = lVar13;
  FUN_0056189c(apbStack_258,"%s%s.%09d %7ld %s:%d]",0x15,puVar11,6);
  uVar10 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar10 == 0) {
    auStack_1b8[0] = auStack_1b8[0] & 0xffffffffffffff00;
    uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
LAB_00339300:
    pbVar14 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_1b8);
    if ((char)uStack_1a0 == '\0') goto LAB_00339300;
    pbVar14 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_241 < '\0') {
    pbVar14 = apbStack_258[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_158) {
    return pbVar14;
  }
  ___stack_chk_fail();
  if (cStack_241 < '\0') {
    __ZdlPv(apbStack_258[0]);
  }
  __Unwind_Resume();
  uVar10 = (uint)puVar11;
  if ((char *)0x3 < pcVar9) {
    uVar7 = (ulong)pcVar9 >> 2;
    pbVar1 = pbVar14;
    do {
      uVar10 = (*(int *)pbVar1 * 0x16a88000 | (uint)(*(int *)pbVar1 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar11;
      uVar10 = (uVar10 >> 0x13 | uVar10 << 0xd) * 5 + 0xe6546b64;
      puVar11 = (ulong *)(ulong)uVar10;
      uVar7 = uVar7 - 1;
      pbVar1 = pbVar1 + 4;
    } while (uVar7 != 0);
    pbVar14 = pbVar14 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar12 = 0;
  uVar7 = (ulong)pcVar9 & 3;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      if (uVar7 != 3) goto LAB_00339464;
      uVar12 = (uint)pbVar14[2] << 0x10;
    }
    uVar12 = uVar12 | (uint)pbVar14[1] << 8;
  }
  uVar10 = ((uVar12 ^ *pbVar14) * 0x16a88000 | (uVar12 ^ *pbVar14) * -0x3361d2af >> 0x11) *
           0x1b873593 ^ uVar10;
LAB_00339464:
  uVar10 = uVar10 ^ (uint)pcVar9;
  uVar10 = (uVar10 ^ uVar10 >> 0x10) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar10 ^ uVar10 >> 0x10);
}



/* Entry: 00339e80; end: 00339f67;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00339e80(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_248 [2];
  char cStack_231;
  undefined1 auStack_230 [56];
  undefined8 uStack_1f8;
  undefined7 uStack_1f0;
  undefined1 uStack_1e9;
  undefined7 uStack_1e8;
  undefined1 uStack_1e1;
  ulong auStack_1a8 [2];
  undefined7 *puStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  code *pcStack_170;
  long lStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined1 **ppuStack_100;
  byte abStack_f8 [64];
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar7 = (ulong)param_4 >> 0x20;
  pbVar14 = param_2;
  func_0x0033a068(uVar7);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar7);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar7 = (ulong)param_4 >> 0x20;
    pbVar14 = param_4;
    FUN_0033a598(uVar7);
    FUN_0033a01c(param_3,param_4,uVar7);
    lStack_38 = (long)(int)param_4;
    uStack_40 = param_3;
    _pthread_cond_timedwait(param_1,param_2,&uStack_40);
  }
  if (((uint)param_1 < 0x3d) && ((1L << ((ulong)param_1 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)param_1 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_48 = FUN_00339f68;
  puStack_50 = &stack0xfffffffffffffff0;
  _pthread_cond_signal();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770eec();
  uStack_58 = 0x339f84;
  puStack_60 = (undefined1 *)&puStack_50;
  _pthread_cond_broadcast();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f20();
  uStack_68 = 0x339fa0;
  puStack_70 = (undefined1 *)&puStack_60;
  _pthread_once();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f54();
  pcStack_78 = FUN_00339fbc;
  lStack_b8 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar8 = param_2;
  puStack_80 = (undefined1 *)&puStack_70;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    ppuStack_100 = &puStack_70;
    pbVar1 = abStack_f8;
    _vsnprintf(pbVar1,0x40,pbVar14,&puStack_70);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar14 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar14 = (byte *)0x0;
        unaff_x23 = abStack_f8;
      }
      else {
        pbVar14 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_100 = &puStack_70;
        _vsnprintf();
        unaff_x23 = pbVar14;
      }
    }
    pbVar8 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar1 = pbVar14;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_b8) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_118 = 2;
  pcStack_108 = FUN_00339178;
  lStack_148 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_140 = unaff_x24;
  pbStack_138 = unaff_x23;
  pbStack_130 = pbVar14;
  pbStack_128 = param_1;
  pbStack_120 = param_2;
  ppuStack_110 = &puStack_80;
  FUN_0033a598();
  lVar13 = *(long *)pbVar1;
  lVar3 = lVar13;
  uStack_1f8 = uVar2;
  _strrchr(lVar13,0x2f);
  if (lVar3 != 0) {
    lVar13 = lVar3 + 1;
  }
  puVar4 = &uStack_1f8;
  _localtime_r(puVar4,auStack_230);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_1e8 = 0x656d69746c6163;
    uStack_1e1 = 0;
    uStack_1f0 = 0x6c3a726f727265;
    uStack_1e9 = 0x6f;
  }
  else {
    puVar5 = &uStack_1f0;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_230);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_1f0 = 0x733a726f727265;
      uStack_1e9 = 0x74;
      uStack_1e8 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar7 = uVar6;
  _pthread_self();
  auStack_1a8[1] = 0x560e98;
  puStack_198 = &uStack_1f0;
  uStack_190 = 0x560e98;
  uStack_188 = (ulong)pbVar8 & 0xffffffff;
  uStack_180 = 0x5606ac;
  pcStack_170 = FUN_00560738;
  uStack_160 = 0x560e98;
  uStack_158 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_150 = 0x5606ac;
  puVar11 = auStack_1a8;
  auStack_1a8[0] = uVar6;
  uStack_178 = uVar7;
  lStack_168 = lVar13;
  FUN_0056189c(apbStack_248,"%s%s.%09d %7ld %s:%d]",0x15,puVar11,6);
  uVar10 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar10 == 0) {
    auStack_1a8[0] = auStack_1a8[0] & 0xffffffffffffff00;
    uStack_190 = uStack_190 & 0xffffffffffffff00;
LAB_00339300:
    pbVar14 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_1a8);
    if ((char)uStack_190 == '\0') goto LAB_00339300;
    pbVar14 = *(byte **)PTR____stderrp_00999f90;
    pcVar9 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_231 < '\0') {
    pbVar14 = apbStack_248[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_148) {
    return pbVar14;
  }
  ___stack_chk_fail();
  if (cStack_231 < '\0') {
    __ZdlPv(apbStack_248[0]);
  }
  __Unwind_Resume();
  uVar10 = (uint)puVar11;
  if ((char *)0x3 < pcVar9) {
    uVar7 = (ulong)pcVar9 >> 2;
    pbVar1 = pbVar14;
    do {
      uVar10 = (*(int *)pbVar1 * 0x16a88000 | (uint)(*(int *)pbVar1 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar11;
      uVar10 = (uVar10 >> 0x13 | uVar10 << 0xd) * 5 + 0xe6546b64;
      puVar11 = (ulong *)(ulong)uVar10;
      uVar7 = uVar7 - 1;
      pbVar1 = pbVar1 + 4;
    } while (uVar7 != 0);
    pbVar14 = pbVar14 + ((ulong)pcVar9 & 0xfffffffffffffffc);
  }
  uVar12 = 0;
  uVar7 = (ulong)pcVar9 & 3;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      if (uVar7 != 3) goto LAB_00339464;
      uVar12 = (uint)pbVar14[2] << 0x10;
    }
    uVar12 = uVar12 | (uint)pbVar14[1] << 8;
  }
  uVar10 = ((uVar12 ^ *pbVar14) * 0x16a88000 | (uVar12 ^ *pbVar14) * -0x3361d2af >> 0x11) *
           0x1b873593 ^ uVar10;
LAB_00339464:
  uVar10 = uVar10 ^ (uint)pcVar9;
  uVar10 = (uVar10 ^ uVar10 >> 0x10) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar10 ^ uVar10 >> 0x10);
}



/* Entry: 00339f68; end: 00339fbb;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00339f68(byte *param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_208 [2];
  char cStack_1f1;
  undefined1 auStack_1f0 [56];
  undefined8 uStack_1b8;
  undefined7 uStack_1b0;
  undefined1 uStack_1a9;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  ulong auStack_168 [2];
  undefined7 *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  code *pcStack_130;
  long lStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined1 **ppuStack_c0;
  byte abStack_b8 [64];
  long lStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  _pthread_cond_signal();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770eec();
  uStack_18 = 0x339f84;
  puStack_20 = &stack0xfffffffffffffff0;
  _pthread_cond_broadcast();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f20();
  uStack_28 = 0x339fa0;
  puStack_30 = (undefined1 *)&puStack_20;
  _pthread_once();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x00770f54();
  pcStack_38 = FUN_00339fbc;
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  puStack_40 = (undefined1 *)&puStack_30;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    ppuStack_c0 = &puStack_30;
    pbVar7 = abStack_b8;
    _vsnprintf(pbVar7,0x40,param_4,&puStack_30);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_b8;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_c0 = &puStack_30;
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_d8 = 2;
  pcStack_c8 = FUN_00339178;
  lStack_108 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_100 = unaff_x24;
  pbStack_f8 = unaff_x23;
  pbStack_f0 = param_4;
  pbStack_e8 = param_1;
  uStack_e0 = param_2;
  ppuStack_d0 = &puStack_40;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_1b8 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_1b8;
  _localtime_r(puVar3,auStack_1f0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_1a8 = 0x656d69746c6163;
    uStack_1a1 = 0;
    uStack_1b0 = 0x6c3a726f727265;
    uStack_1a9 = 0x6f;
  }
  else {
    puVar4 = &uStack_1b0;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1f0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_1b0 = 0x733a726f727265;
      uStack_1a9 = 0x74;
      uStack_1a8 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_168[1] = 0x560e98;
  puStack_158 = &uStack_1b0;
  uStack_150 = 0x560e98;
  uStack_148 = uVar12 & 0xffffffff;
  uStack_140 = 0x5606ac;
  pcStack_130 = FUN_00560738;
  uStack_120 = 0x560e98;
  uStack_118 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_110 = 0x5606ac;
  puVar10 = auStack_168;
  auStack_168[0] = uVar5;
  uStack_138 = uVar6;
  lStack_128 = lVar14;
  FUN_0056189c(apbStack_208,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_168[0] = auStack_168[0] & 0xffffffffffffff00;
    uStack_150 = uStack_150 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_168);
    if ((char)uStack_150 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1f1 < '\0') {
    pbVar7 = apbStack_208[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_108) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1f1 < '\0') {
    __ZdlPv(apbStack_208[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 00339fbc; end: 00339fc3;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00339fbc(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 00339fc4; end: 0033a01b;  */

undefined1  [16] FUN_00339fc4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  iVar5 = (int)((ulong)param_4 >> 0x20);
  iVar4 = (int)param_4;
  if ((int)((ulong)param_2 >> 0x20) != iVar5) {
    func_0x00770f88();
    lVar3 = param_1;
    FUN_00339fc4();
    if ((int)lVar3 < 1) {
      param_2 = CONCAT44(iVar5,iVar4);
      param_1 = param_3;
    }
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = param_1;
    return auVar7;
  }
  uVar2 = (uint)(param_3 < param_1) - (uint)(param_1 < param_3);
  uVar1 = uVar2;
  if (uVar2 == 0) {
    uVar1 = (uint)(iVar4 < (int)param_2) - (uint)((int)param_2 < iVar4);
  }
  if (param_1 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
    uVar2 = uVar1;
  }
  auVar6._4_4_ = 0;
  auVar6._0_4_ = uVar2;
  auVar6._8_8_ = param_2;
  return auVar6;
}



/* Entry: 0033a01c; end: 0033a05b;  */

undefined1  [16]
FUN_0033a01c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  FUN_00339fc4();
  if ((int)uVar1 < 1) {
    param_2 = param_4;
    param_1 = param_3;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 0033a05c; end: 0033a117;  */

undefined1  [16] FUN_0033a05c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1 << 0x20;
  return auVar1 << 0x40;
}



/* Entry: 0033a118; end: 0033a2e7;  */

long FUN_0033a118(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_w8;
  int extraout_w9;
  
  iVar4 = (int)((ulong)param_4 >> 0x20);
  iVar3 = (int)param_4;
  if (iVar4 == 3) {
    if (-1 < iVar3) {
      iVar3 = iVar3 + (int)param_2;
      lVar2 = param_1;
      if (1 < param_1 + 0x8000000000000001U) {
        if ((param_3 == 0x7fffffffffffffff) ||
           ((-1 < (long)param_3 && ((long)(param_3 ^ 0x7fffffffffffffff) <= param_1)))) {
          lVar2 = 0x7fffffffffffffff;
        }
        else if ((param_3 == 0x8000000000000000) ||
                (((long)param_3 < 1 && (param_1 <= (long)(-0x8000000000000000 - param_3))))) {
          lVar2 = -0x8000000000000000;
        }
        else {
          lVar2 = 0x7fffffffffffffff;
          if (param_3 + param_1 != 0x7ffffffffffffffe || iVar3 < 1000000000) {
            lVar2 = param_3 + param_1 + (ulong)(999999999 < iVar3);
          }
        }
      }
      return lVar2;
    }
  }
  else {
    func_0x00770ff0();
  }
  func_0x00770fbc();
  iVar5 = (int)((ulong)param_2 >> 0x20);
  if (iVar4 == 3) {
    if (-1 < iVar3) goto LAB_0033a230;
    func_0x00771024();
    iVar4 = extraout_w9;
    iVar5 = extraout_w8;
  }
  if (iVar5 != iVar4) {
    func_0x00771058();
    return param_1;
  }
LAB_0033a230:
  uVar1 = (int)param_2 - iVar3;
  if (1 < param_1 + 0x8000000000000001U) {
    if ((param_3 == 0x8000000000000000) ||
       (((long)param_3 < 1 && ((long)(param_3 + 0x7fffffffffffffff) <= param_1)))) {
      param_1 = 0x7fffffffffffffff;
    }
    else if (((param_3 == 0x7fffffffffffffff) ||
             ((-1 < (long)param_3 && (param_1 <= (long)(param_3 | 0x8000000000000000))))) ||
            (((int)uVar1 < 0 && (param_1 - param_3 == -0x7fffffffffffffff)))) {
      param_1 = -0x8000000000000000;
    }
    else {
      param_1 = (param_1 - param_3) - (ulong)(uVar1 >> 0x1f);
    }
  }
  return param_1;
}



/* Entry: 0033a2e8; end: 0033a30b;  */

double FUN_0033a2e8(long param_1,int param_2)

{
  return (double)param_2 * 0.001 + (double)param_1 * 1000000.0;
}



/* Entry: 0033a30c; end: 0033a3f3;  */

undefined1  [16] FUN_0033a30c(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = param_2 >> 0x20;
  iVar3 = (int)(param_2 >> 0x20);
  uVar1 = param_2;
  if (iVar3 != (int)param_3) {
    if (param_1 + 0x8000000000000001U < 2) {
      uVar1 = param_2 & 0xffffffff | param_3 << 0x20;
    }
    else if ((int)param_3 == 3) {
      FUN_0033a598(uVar4);
      func_0x0033a204(param_1,param_2,uVar4,uVar1);
      uVar1 = param_2;
    }
    else {
      FUN_0033a598(param_3);
      if (iVar3 != 3) {
        uVar2 = uVar1;
        FUN_0033a598(uVar4);
        func_0x0033a204(param_1,param_2,uVar4,uVar2);
      }
      func_0x0033a118(param_3,uVar1,param_1,param_2);
      param_1 = param_3;
    }
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 0033a3f4; end: 0033a3ff;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0033a3f4(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 0033a400; end: 0033a597;  */

undefined1  [16] FUN_0033a400(ulong param_1)

{
  char cVar1;
  double dVar2;
  undefined1 auVar3 [16];
  ulong uStack_40;
  int iStack_38;
  ulong uStack_30;
  int iStack_28;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)param_1;
  switch(param_1 & 0xffffffff) {
  case 0:
    if ((bRam0000000000b5e6a0 & 1) == 0) goto code_r0x0033a564;
    goto code_r0x0033a44c;
  case 1:
    _gettimeofday(&uStack_40,0);
    iStack_28 = iStack_38 * 1000;
    uStack_30 = uStack_40;
    break;
  case 2:
    FUN_0033a744(&uStack_30);
    break;
  case 3:
    _abort();
code_r0x0033a564:
    param_1 = 0xb5e6a0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      FUN_0033a668();
      cRam0000000000b5e698 = (char)param_1;
      param_1 = 0xb5e6a0;
      ___cxa_guard_release();
    }
code_r0x0033a44c:
    cVar1 = cRam0000000000b5e698;
    _mach_absolute_time();
    if (cVar1 == '\0') {
      dVar2 = dRam0000000000b5e688 * (double)(param_1 - lRam0000000000b5e690);
    }
    else {
      dVar2 = dRam0000000000b5e688 * (double)(param_1 - lRam0000000000b5e690) + 5000000000.0;
    }
    uStack_30 = (ulong)(dVar2 * 1e-09);
    iStack_28 = (int)(dVar2 + (double)(long)(dVar2 * 1e-09) * -1000000000.0);
    break;
  default:
    goto LAB_0033a4fc;
  }
  param_1 = uStack_30;
  if (999999999 < iStack_28) {
    param_1 = uStack_30 + (ulong)(iStack_28 + 0xc4653600) / 1000000000 + 1;
    do {
      iStack_28 = iStack_28 + -1000000000;
    } while (999999999 < iStack_28);
  }
  for (; iStack_28 < 0; iStack_28 = iStack_28 + 1000000000) {
    param_1 = param_1 - 1;
  }
LAB_0033a4fc:
  auVar3._12_4_ = uStack_24;
  auVar3._8_4_ = iStack_28;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 0033a598; end: 0033a5d3;  */

void FUN_0033a598(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((uint)param_1 < 3) {
    (*(code *)PTR_FUN_00afa4a0)();
    if ((uint)param_2 < 1000000000) {
      return;
    }
  }
  else {
    func_0x0077108c();
  }
  func_0x007710c4();
  uVar5 = param_2;
  do {
    uVar2 = param_2 >> 0x20;
    FUN_0033a598(param_2 >> 0x20);
    uVar3 = param_1;
    FUN_00339fc4(param_1,param_2,uVar2,uVar5);
    if ((int)uVar3 < 1) {
      return;
    }
    uVar3 = param_1;
    uVar4 = param_2;
    func_0x0033a204(param_1,param_2,uVar2,uVar5);
    lStack_58 = (long)(int)uVar4;
    uVar5 = 0;
    uStack_60 = uVar3;
    iVar1 = (int)&uStack_60;
    _nanosleep();
  } while (iVar1 != 0);
  return;
}



/* Entry: 0033a5d4; end: 0033a667;  */

void FUN_0033a5d4(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar5 = param_2;
  do {
    uVar2 = param_2 >> 0x20;
    FUN_0033a598(param_2 >> 0x20);
    uVar3 = param_1;
    FUN_00339fc4(param_1,param_2,uVar2,uVar5);
    if ((int)uVar3 < 1) {
      return;
    }
    uVar3 = param_1;
    uVar4 = param_2;
    func_0x0033a204(param_1,param_2,uVar2,uVar5);
    lStack_48 = (long)(int)uVar4;
    uVar5 = 0;
    uStack_50 = uVar3;
    iVar1 = (int)&uStack_50;
    _nanosleep();
  } while (iVar1 != 0);
  return;
}



/* Entry: 0033a668; end: 0033a6e7;  */

void FUN_0033a668(void)

{
  char *pcVar1;
  
  pcVar1 = "GRPC_INIT_TIME_FIX";
  _getenv();
  if (pcVar1 != (char *)0x0) {
    _strtol();
  }
  return;
}



/* Entry: 0033a6e8; end: 0033a6eb;  */

void FUN_0033a6e8(void)

{
  return;
}



/* Entry: 0033a6ec; end: 0033a703;  */

double FUN_0033a6ec(undefined8 param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 1;
  FUN_0033a598(1);
  return (double)param_2 * 0.001 + (double)lVar1 * 1000000.0;
}



/* Entry: 0033a704; end: 0033a743;  */

void FUN_0033a704(void)

{
  return;
}



/* Entry: 0033a744; end: 0033a773;  */

void FUN_0033a744(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  FUN_0033a598();
  *param_1 = uVar1;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 2;
  return;
}



/* Entry: 0033a774; end: 0033a7d7;  */

/* WARNING: Removing unreachable block (ram,0x0033a21c) */
/* WARNING: Removing unreachable block (ram,0x0033a220) */
/* WARNING: Removing unreachable block (ram,0x0033a2e4) */

double FUN_0033a774(undefined8 param_1,double param_2)

{
  return (param_2 - (double)((long)(param_2 / 1000000.0) * 1000000)) * 1000.0;
}



/* Entry: 0033a7d8; end: 0033a833;  */

void FUN_0033a7d8(undefined8 *param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (pcRam0000000000b65ce0 == (code *)0x0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    (*pcRam0000000000b65ce0)(&uStack_38);
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 0033a834; end: 0033a8e7;  */

void FUN_0033a834(void)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (cRam0000000000b65ce8 == '\0') {
    bVar1 = 200;
    FUN_0033ab98();
    bRam0000000000b65d08 = bVar1;
  }
  if ((bRam0000000000b65d08 & 1) != 0) {
    pcVar2 = section_00000068.segname + 8;
    __Znwm();
    *pcVar2 = '\x01';
    FUN_00339d50(pcVar2 + 8);
    FUN_00339df0(pcVar2 + 0x48);
    *(undefined8 *)(pcVar2 + 0x78) = 2;
    pcVar3 = section_00000068.segname + 8;
    pcRam0000000000b65cf0 = pcVar2;
    __Znwm();
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    *(undefined4 *)(pcVar3 + 0x78) = 0;
    FUN_00339d50(pcVar3 + 8);
    FUN_00339df0(pcVar3 + 0x48);
    pcRam0000000000b65cf8 = pcVar3;
  }
  return;
}



/* Entry: 0033a8e8; end: 0033a92f;  */

void FUN_0033a8e8(void)

{
  if ((bRam0000000000b65d08 & 1) != 0) {
    if (lRam0000000000b65cf0 != 0) {
      FUN_0033aaec();
      __ZdlPv();
    }
    if (lRam0000000000b65cf8 != 0) {
      FUN_0033ab20();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)();
      return;
    }
  }
  return;
}



/* Entry: 0033a930; end: 0033a94b;  */

byte FUN_0033a930(void)

{
  return bRam0000000000b65d08 & 1;
}



/* Entry: 0033a94c; end: 0033a9f7;  */

void FUN_0033a94c(char *param_1,char *param_2)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  
  plVar1 = (long *)(param_1 + 0x78);
  lVar7 = *(long *)(param_1 + 0x78);
  pcVar2 = param_1 + 8;
  do {
    if (lVar7 < 2) {
      func_0x00339d8c(pcVar2);
      if (*plVar1 < 2) {
        while (*param_1 == '\0') {
          uVar5 = 1;
          func_0x0033a068(1);
          pcVar6 = pcVar2;
          FUN_00339e80(param_1 + 0x48,pcVar2,uVar5,param_2);
          param_2 = pcVar6;
        }
      }
      func_0x00339da8(pcVar2);
    }
    else {
      while (*plVar1 == lVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          return;
        }
      }
      ClearExclusiveLocal();
    }
    lVar7 = *plVar1;
  } while( true );
}



/* Entry: 0033a9f8; end: 0033aa23;  */

void FUN_0033a9f8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(lRam0000000000b65cf0 + 0x78);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}



/* Entry: 0033aa24; end: 0033aa77;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0033aa24(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  ulong *puVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_2b8 [2];
  char cStack_2a1;
  undefined1 auStack_2a0 [56];
  undefined8 uStack_268;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  ulong auStack_218 [2];
  undefined7 *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  code *pcStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  undefined8 uStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 **ppuStack_170;
  byte abStack_168 [64];
  long lStack_128;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  byte abStack_58 [16];
  long lStack_48;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  lVar14 = lRam0000000000b65cf8;
  if ((bRam0000000000b65d08 & 1) == 0) {
    return param_1;
  }
  pbVar7 = (byte *)(lRam0000000000b65cf8 + 8);
  func_0x00339d8c(pbVar7);
  *(int *)(lVar14 + 0x78) = *(int *)(lVar14 + 0x78) + 1;
  _pthread_mutex_unlock();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770db4();
  _pthread_mutex_trylock();
  if (((uint)pbVar7 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)pbVar7 == 0);
  }
  func_0x00770de8();
  pcStack_28 = FUN_00339df0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar15 = abStack_58;
  puStack_30 = &stack0xffffffffffffffe0;
  _pthread_condattr_init();
  if ((int)pbVar15 == 0) {
    param_2 = abStack_58;
    _pthread_cond_init();
    if ((int)pbVar7 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pbVar7;
    }
  }
  else {
    func_0x00770e50();
    pbVar7 = pbVar15;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_00339e64;
  ppuStack_70 = &puStack_30;
  _pthread_cond_destroy();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770e84();
  pcStack_78 = FUN_00339e80;
  uVar8 = (ulong)param_4 >> 0x20;
  pbVar15 = param_2;
  puStack_80 = (undefined1 *)&ppuStack_70;
  func_0x0033a068(uVar8);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar8);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar8 = (ulong)param_4 >> 0x20;
    pbVar15 = param_4;
    FUN_0033a598(uVar8);
    FUN_0033a01c(param_3,param_4,uVar8);
    lStack_a8 = (long)(int)param_4;
    uStack_b0 = param_3;
    _pthread_cond_timedwait(pbVar7,param_2,&uStack_b0);
  }
  if (((uint)pbVar7 < 0x3d) && ((1L << ((ulong)pbVar7 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar7 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_b8 = FUN_00339f68;
  ppuStack_c0 = &puStack_80;
  _pthread_cond_signal();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770eec();
  uStack_c8 = 0x339f84;
  puStack_d0 = (undefined1 *)&ppuStack_c0;
  _pthread_cond_broadcast();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f20();
  uStack_d8 = 0x339fa0;
  puStack_e0 = (undefined1 *)&puStack_d0;
  _pthread_once();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f54();
  pcStack_e8 = FUN_00339fbc;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar9 = param_2;
  puStack_f0 = (undefined1 *)&puStack_e0;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    ppuStack_170 = &puStack_e0;
    pbVar1 = abStack_168;
    _vsnprintf(pbVar1,0x40,pbVar15,&puStack_e0);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar15 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar15 = (byte *)0x0;
        unaff_x23 = abStack_168;
      }
      else {
        pbVar15 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_170 = &puStack_e0;
        _vsnprintf();
        unaff_x23 = pbVar15;
      }
    }
    pbVar9 = param_2;
    FUN_00338e80(pbVar7,param_2,2,unaff_x23);
    pbVar1 = pbVar15;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_128) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_188 = 2;
  pcStack_178 = FUN_00339178;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_1b0 = unaff_x24;
  pbStack_1a8 = unaff_x23;
  pbStack_1a0 = pbVar15;
  pbStack_198 = pbVar7;
  pbStack_190 = param_2;
  ppuStack_180 = &puStack_f0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar1;
  lVar3 = lVar14;
  uStack_268 = uVar2;
  _strrchr(lVar14,0x2f);
  if (lVar3 != 0) {
    lVar14 = lVar3 + 1;
  }
  puVar4 = &uStack_268;
  _localtime_r(puVar4,auStack_2a0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_258 = 0x656d69746c6163;
    uStack_251 = 0;
    uStack_260 = 0x6c3a726f727265;
    uStack_259 = 0x6f;
  }
  else {
    puVar5 = &uStack_260;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_2a0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_260 = 0x733a726f727265;
      uStack_259 = 0x74;
      uStack_258 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar8 = uVar6;
  _pthread_self();
  auStack_218[1] = 0x560e98;
  puStack_208 = &uStack_260;
  uStack_200 = 0x560e98;
  uStack_1f8 = (ulong)pbVar9 & 0xffffffff;
  uStack_1f0 = 0x5606ac;
  pcStack_1e0 = FUN_00560738;
  uStack_1d0 = 0x560e98;
  uStack_1c8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_1c0 = 0x5606ac;
  puVar12 = auStack_218;
  auStack_218[0] = uVar6;
  uStack_1e8 = uVar8;
  lStack_1d8 = lVar14;
  FUN_0056189c(apbStack_2b8,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_218[0] = auStack_218[0] & 0xffffffffffffff00;
    uStack_200 = uStack_200 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_218);
    if ((char)uStack_200 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2a1 < '\0') {
    pbVar7 = apbStack_2b8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_2a1 < '\0') {
    __ZdlPv(apbStack_2b8[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar10) {
    uVar8 = (ulong)pcVar10 >> 2;
    pbVar15 = pbVar7;
    do {
      uVar11 = (*(int *)pbVar15 * 0x16a88000 | (uint)(*(int *)pbVar15 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar8 = uVar8 - 1;
      pbVar15 = pbVar15 + 4;
    } while (uVar8 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar10 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar8 = (ulong)pcVar10 & 3;
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      if (uVar8 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar7[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar7[1] << 8;
  }
  uVar11 = ((uVar13 ^ *pbVar7) * 0x16a88000 | (uVar13 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar10;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 0033aa78; end: 0033aa93;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0033aa78(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined7 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  ulong *puVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_2b8 [2];
  char cStack_2a1;
  undefined1 auStack_2a0 [56];
  undefined8 uStack_268;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  ulong auStack_218 [2];
  undefined7 *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  code *pcStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  undefined8 uStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 **ppuStack_170;
  byte abStack_168 [64];
  long lStack_128;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  byte abStack_58 [16];
  long lStack_48;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  pcVar11 = pcRam0000000000b65cf8;
  if ((bRam0000000000b65d08 & 1) == 0) {
    return param_1;
  }
  pbVar8 = (byte *)(pcRam0000000000b65cf8 + 8);
  func_0x00339d8c(pbVar8);
  iVar1 = *(int *)(pcVar11 + 0x78);
  *(int *)(pcVar11 + 0x78) = iVar1 + -1;
  if (*pcVar11 != '\0' && iVar1 + -1 == 0) {
    pcVar11[1] = '\x01';
    FUN_00339f68(pcVar11 + 0x48);
  }
  _pthread_mutex_unlock();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770db4();
  _pthread_mutex_trylock();
  if (((uint)pbVar8 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)pbVar8 == 0);
  }
  func_0x00770de8();
  pcStack_28 = FUN_00339df0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar16 = abStack_58;
  puStack_30 = &stack0xffffffffffffffe0;
  _pthread_condattr_init();
  if ((int)pbVar16 == 0) {
    param_2 = abStack_58;
    _pthread_cond_init();
    if ((int)pbVar8 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pbVar8;
    }
  }
  else {
    func_0x00770e50();
    pbVar8 = pbVar16;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_00339e64;
  ppuStack_70 = &puStack_30;
  _pthread_cond_destroy();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770e84();
  pcStack_78 = FUN_00339e80;
  uVar9 = (ulong)param_4 >> 0x20;
  pbVar16 = param_2;
  puStack_80 = (undefined1 *)&ppuStack_70;
  func_0x0033a068(uVar9);
  uVar3 = param_3;
  FUN_00339fc4(param_3,param_4,uVar9);
  if ((int)uVar3 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar9 = (ulong)param_4 >> 0x20;
    pbVar16 = param_4;
    FUN_0033a598(uVar9);
    FUN_0033a01c(param_3,param_4,uVar9);
    lStack_a8 = (long)(int)param_4;
    uStack_b0 = param_3;
    _pthread_cond_timedwait(pbVar8,param_2,&uStack_b0);
  }
  if (((uint)pbVar8 < 0x3d) && ((1L << ((ulong)pbVar8 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar8 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_b8 = FUN_00339f68;
  ppuStack_c0 = &puStack_80;
  _pthread_cond_signal();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770eec();
  uStack_c8 = 0x339f84;
  puStack_d0 = (undefined1 *)&ppuStack_c0;
  _pthread_cond_broadcast();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770f20();
  uStack_d8 = 0x339fa0;
  puStack_e0 = (undefined1 *)&puStack_d0;
  _pthread_once();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770f54();
  pcStack_e8 = FUN_00339fbc;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar2 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar10 = param_2;
  puStack_f0 = (undefined1 *)&puStack_e0;
  FUN_00338e58();
  if ((int)pbVar2 != 0) {
    ppuStack_170 = &puStack_e0;
    pbVar2 = abStack_168;
    _vsnprintf(pbVar2,0x40,pbVar16,&puStack_e0);
    if ((int)(uint)pbVar2 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar16 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar2;
      if ((uint)pbVar2 < 0x40) {
        pbVar16 = (byte *)0x0;
        unaff_x23 = abStack_168;
      }
      else {
        pbVar16 = (byte *)(((ulong)pbVar2 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_170 = &puStack_e0;
        _vsnprintf();
        unaff_x23 = pbVar16;
      }
    }
    pbVar10 = param_2;
    FUN_00338e80(pbVar8,param_2,2,unaff_x23);
    pbVar2 = pbVar16;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_128) {
    return pbVar2;
  }
  ___stack_chk_fail();
  uStack_188 = 2;
  pcStack_178 = FUN_00339178;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = 1;
  pbStack_1b0 = unaff_x24;
  pbStack_1a8 = unaff_x23;
  pbStack_1a0 = pbVar16;
  pbStack_198 = pbVar8;
  pbStack_190 = param_2;
  ppuStack_180 = &puStack_f0;
  FUN_0033a598();
  lVar15 = *(long *)pbVar2;
  lVar4 = lVar15;
  uStack_268 = uVar3;
  _strrchr(lVar15,0x2f);
  if (lVar4 != 0) {
    lVar15 = lVar4 + 1;
  }
  puVar5 = &uStack_268;
  _localtime_r(puVar5,auStack_2a0);
  if (puVar5 == (undefined8 *)0x0) {
    uStack_258 = 0x656d69746c6163;
    uStack_251 = 0;
    uStack_260 = 0x6c3a726f727265;
    uStack_259 = 0x6f;
  }
  else {
    puVar6 = &uStack_260;
    _strftime(puVar6,0x40,"%m%d %H:%M:%S",auStack_2a0);
    if (puVar6 == (undefined7 *)0x0) {
      uStack_260 = 0x733a726f727265;
      uStack_259 = 0x74;
      uStack_258 = 0x656d69746672;
    }
  }
  uVar7 = (ulong)*(uint *)(pbVar2 + 0xc);
  func_0x00338e1c();
  uVar9 = uVar7;
  _pthread_self();
  auStack_218[1] = 0x560e98;
  puStack_208 = &uStack_260;
  uStack_200 = 0x560e98;
  uStack_1f8 = (ulong)pbVar10 & 0xffffffff;
  uStack_1f0 = 0x5606ac;
  pcStack_1e0 = FUN_00560738;
  uStack_1d0 = 0x560e98;
  uStack_1c8 = (ulong)*(uint *)(pbVar2 + 8);
  uStack_1c0 = 0x5606ac;
  puVar13 = auStack_218;
  auStack_218[0] = uVar7;
  uStack_1e8 = uVar9;
  lStack_1d8 = lVar15;
  FUN_0056189c(apbStack_2b8,"%s%s.%09d %7ld %s:%d]",0x15,puVar13,6);
  uVar12 = *(uint *)(pbVar2 + 0xc);
  func_0x00338e6c();
  if (uVar12 == 0) {
    auStack_218[0] = auStack_218[0] & 0xffffffffffffff00;
    uStack_200 = uStack_200 & 0xffffffffffffff00;
LAB_00339300:
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_218);
    if ((char)uStack_200 == '\0') goto LAB_00339300;
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2a1 < '\0') {
    pbVar8 = apbStack_2b8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return pbVar8;
  }
  ___stack_chk_fail();
  if (cStack_2a1 < '\0') {
    __ZdlPv(apbStack_2b8[0]);
  }
  __Unwind_Resume();
  uVar12 = (uint)puVar13;
  if ((char *)0x3 < pcVar11) {
    uVar9 = (ulong)pcVar11 >> 2;
    pbVar16 = pbVar8;
    do {
      uVar12 = (*(int *)pbVar16 * 0x16a88000 | (uint)(*(int *)pbVar16 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar13;
      uVar12 = (uVar12 >> 0x13 | uVar12 << 0xd) * 5 + 0xe6546b64;
      puVar13 = (ulong *)(ulong)uVar12;
      uVar9 = uVar9 - 1;
      pbVar16 = pbVar16 + 4;
    } while (uVar9 != 0);
    pbVar8 = pbVar8 + ((ulong)pcVar11 & 0xfffffffffffffffc);
  }
  uVar14 = 0;
  uVar9 = (ulong)pcVar11 & 3;
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      if (uVar9 != 3) goto LAB_00339464;
      uVar14 = (uint)pbVar8[2] << 0x10;
    }
    uVar14 = uVar14 | (uint)pbVar8[1] << 8;
  }
  uVar12 = ((uVar14 ^ *pbVar8) * 0x16a88000 | (uVar14 ^ *pbVar8) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar12;
LAB_00339464:
  uVar12 = uVar12 ^ (uint)pcVar11;
  uVar12 = (uVar12 ^ uVar12 >> 0x10) * -0x7a143595;
  uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar12 ^ uVar12 >> 0x10);
}



/* Entry: 0033aa94; end: 0033aaeb;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0033aa94(char *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined7 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  ulong *puVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_2b8 [2];
  char cStack_2a1;
  undefined1 auStack_2a0 [56];
  undefined8 uStack_268;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  ulong auStack_218 [2];
  undefined7 *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  code *pcStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  undefined8 uStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 **ppuStack_170;
  byte abStack_168 [64];
  long lStack_128;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  byte abStack_58 [16];
  long lStack_48;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  pbVar8 = (byte *)(param_1 + 8);
  func_0x00339d8c(pbVar8);
  iVar1 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar1 + -1;
  if (*param_1 != '\0' && iVar1 + -1 == 0) {
    param_1[1] = '\x01';
    FUN_00339f68(param_1 + 0x48);
  }
  _pthread_mutex_unlock();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770db4();
  _pthread_mutex_trylock();
  if (((uint)pbVar8 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)pbVar8 == 0);
  }
  func_0x00770de8();
  pcStack_28 = FUN_00339df0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar16 = abStack_58;
  puStack_30 = &stack0xffffffffffffffe0;
  _pthread_condattr_init();
  if ((int)pbVar16 == 0) {
    param_2 = abStack_58;
    _pthread_cond_init();
    if ((int)pbVar8 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pbVar8;
    }
  }
  else {
    func_0x00770e50();
    pbVar8 = pbVar16;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_00339e64;
  ppuStack_70 = &puStack_30;
  _pthread_cond_destroy();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770e84();
  pcStack_78 = FUN_00339e80;
  uVar9 = (ulong)param_4 >> 0x20;
  pbVar16 = param_2;
  puStack_80 = (undefined1 *)&ppuStack_70;
  func_0x0033a068(uVar9);
  uVar3 = param_3;
  FUN_00339fc4(param_3,param_4,uVar9);
  if ((int)uVar3 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar9 = (ulong)param_4 >> 0x20;
    pbVar16 = param_4;
    FUN_0033a598(uVar9);
    FUN_0033a01c(param_3,param_4,uVar9);
    lStack_a8 = (long)(int)param_4;
    uStack_b0 = param_3;
    _pthread_cond_timedwait(pbVar8,param_2,&uStack_b0);
  }
  if (((uint)pbVar8 < 0x3d) && ((1L << ((ulong)pbVar8 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar8 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_b8 = FUN_00339f68;
  ppuStack_c0 = &puStack_80;
  _pthread_cond_signal();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770eec();
  uStack_c8 = 0x339f84;
  puStack_d0 = (undefined1 *)&ppuStack_c0;
  _pthread_cond_broadcast();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770f20();
  uStack_d8 = 0x339fa0;
  puStack_e0 = (undefined1 *)&puStack_d0;
  _pthread_once();
  if ((int)pbVar8 == 0) {
    return pbVar8;
  }
  func_0x00770f54();
  pcStack_e8 = FUN_00339fbc;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar2 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar10 = param_2;
  puStack_f0 = (undefined1 *)&puStack_e0;
  FUN_00338e58();
  if ((int)pbVar2 != 0) {
    ppuStack_170 = &puStack_e0;
    pbVar2 = abStack_168;
    _vsnprintf(pbVar2,0x40,pbVar16,&puStack_e0);
    if ((int)(uint)pbVar2 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar16 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar2;
      if ((uint)pbVar2 < 0x40) {
        pbVar16 = (byte *)0x0;
        unaff_x23 = abStack_168;
      }
      else {
        pbVar16 = (byte *)(((ulong)pbVar2 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_170 = &puStack_e0;
        _vsnprintf();
        unaff_x23 = pbVar16;
      }
    }
    pbVar10 = param_2;
    FUN_00338e80(pbVar8,param_2,2,unaff_x23);
    pbVar2 = pbVar16;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_128) {
    return pbVar2;
  }
  ___stack_chk_fail();
  uStack_188 = 2;
  pcStack_178 = FUN_00339178;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = 1;
  pbStack_1b0 = unaff_x24;
  pbStack_1a8 = unaff_x23;
  pbStack_1a0 = pbVar16;
  pbStack_198 = pbVar8;
  pbStack_190 = param_2;
  ppuStack_180 = &puStack_f0;
  FUN_0033a598();
  lVar15 = *(long *)pbVar2;
  lVar4 = lVar15;
  uStack_268 = uVar3;
  _strrchr(lVar15,0x2f);
  if (lVar4 != 0) {
    lVar15 = lVar4 + 1;
  }
  puVar5 = &uStack_268;
  _localtime_r(puVar5,auStack_2a0);
  if (puVar5 == (undefined8 *)0x0) {
    uStack_258 = 0x656d69746c6163;
    uStack_251 = 0;
    uStack_260 = 0x6c3a726f727265;
    uStack_259 = 0x6f;
  }
  else {
    puVar6 = &uStack_260;
    _strftime(puVar6,0x40,"%m%d %H:%M:%S",auStack_2a0);
    if (puVar6 == (undefined7 *)0x0) {
      uStack_260 = 0x733a726f727265;
      uStack_259 = 0x74;
      uStack_258 = 0x656d69746672;
    }
  }
  uVar7 = (ulong)*(uint *)(pbVar2 + 0xc);
  func_0x00338e1c();
  uVar9 = uVar7;
  _pthread_self();
  auStack_218[1] = 0x560e98;
  puStack_208 = &uStack_260;
  uStack_200 = 0x560e98;
  uStack_1f8 = (ulong)pbVar10 & 0xffffffff;
  uStack_1f0 = 0x5606ac;
  pcStack_1e0 = FUN_00560738;
  uStack_1d0 = 0x560e98;
  uStack_1c8 = (ulong)*(uint *)(pbVar2 + 8);
  uStack_1c0 = 0x5606ac;
  puVar13 = auStack_218;
  auStack_218[0] = uVar7;
  uStack_1e8 = uVar9;
  lStack_1d8 = lVar15;
  FUN_0056189c(apbStack_2b8,"%s%s.%09d %7ld %s:%d]",0x15,puVar13,6);
  uVar12 = *(uint *)(pbVar2 + 0xc);
  func_0x00338e6c();
  if (uVar12 == 0) {
    auStack_218[0] = auStack_218[0] & 0xffffffffffffff00;
    uStack_200 = uStack_200 & 0xffffffffffffff00;
LAB_00339300:
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_218);
    if ((char)uStack_200 == '\0') goto LAB_00339300;
    pbVar8 = *(byte **)PTR____stderrp_00999f90;
    pcVar11 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2a1 < '\0') {
    pbVar8 = apbStack_2b8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return pbVar8;
  }
  ___stack_chk_fail();
  if (cStack_2a1 < '\0') {
    __ZdlPv(apbStack_2b8[0]);
  }
  __Unwind_Resume();
  uVar12 = (uint)puVar13;
  if ((char *)0x3 < pcVar11) {
    uVar9 = (ulong)pcVar11 >> 2;
    pbVar16 = pbVar8;
    do {
      uVar12 = (*(int *)pbVar16 * 0x16a88000 | (uint)(*(int *)pbVar16 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar13;
      uVar12 = (uVar12 >> 0x13 | uVar12 << 0xd) * 5 + 0xe6546b64;
      puVar13 = (ulong *)(ulong)uVar12;
      uVar9 = uVar9 - 1;
      pbVar16 = pbVar16 + 4;
    } while (uVar9 != 0);
    pbVar8 = pbVar8 + ((ulong)pcVar11 & 0xfffffffffffffffc);
  }
  uVar14 = 0;
  uVar9 = (ulong)pcVar11 & 3;
  if (uVar9 != 1) {
    if (uVar9 != 2) {
      if (uVar9 != 3) goto LAB_00339464;
      uVar14 = (uint)pbVar8[2] << 0x10;
    }
    uVar14 = uVar14 | (uint)pbVar8[1] << 8;
  }
  uVar12 = ((uVar14 ^ *pbVar8) * 0x16a88000 | (uVar14 ^ *pbVar8) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar12;
LAB_00339464:
  uVar12 = uVar12 ^ (uint)pcVar11;
  uVar12 = (uVar12 ^ uVar12 >> 0x10) * -0x7a143595;
  uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar12 ^ uVar12 >> 0x10);
}



/* Entry: 0033aaec; end: 0033ab1f;  */

long FUN_0033aaec(long param_1)

{
  func_0x00339d70(param_1 + 8);
  FUN_00339e64(param_1 + 0x48);
  return param_1;
}



/* Entry: 0033ab20; end: 0033ab53;  */

long FUN_0033ab20(long param_1)

{
  func_0x00339d70(param_1 + 8);
  FUN_00339e64(param_1 + 0x48);
  return param_1;
}



/* Entry: 0033ab54; end: 0033ab97;  */

char * FUN_0033ab54(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  if (cVar1 != '\0') {
    do {
      ___toupper();
      *pcVar2 = cVar1;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)*param_1;
  }
  return pcVar2;
}



/* Entry: 0033ab98; end: 0033ac37;  */

bool FUN_0033ab98(ulong param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  char cStack_29;
  ulong uStack_28;
  
  uVar2 = param_1;
  FUN_0033ab54();
  FUN_00338dd0();
  if (uVar2 == 0) {
    cVar1 = *(char *)(param_1 + 8);
  }
  else {
    cStack_29 = '\0';
    uVar3 = uVar2;
    uStack_28 = uVar2;
    FUN_00339c08();
    if ((uVar3 & 1) == 0) {
      FUN_0033ab54(param_1);
      FUN_0033ac38();
      pcVar4 = (char *)(param_1 + 8);
    }
    else {
      pcVar4 = &cStack_29;
    }
    cVar1 = *pcVar4;
    uStack_28 = 0;
    FUN_00338cb8(uVar2);
  }
  return cVar1 != '\0';
}



/* Entry: 0033ac38; end: 0033ad03;  */

char ** FUN_0033ac38(undefined8 param_1,undefined8 param_2)

{
  char **ppcVar1;
  char *pcVar2;
  char *pcVar3;
  char *apcStack_60 [2];
  char cStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_40 = 0x560e98;
  uStack_30 = 0x560e98;
  uStack_48 = param_2;
  uStack_38 = param_1;
  FUN_0056189c(apcStack_60,"Illegal value \'%s\' specified for environment variable \'%s\'",0x3a,
               &uStack_48,2);
  ppcVar1 = (char **)apcStack_60[0];
  if (-1 < cStack_49) {
    ppcVar1 = apcStack_60;
  }
  (*(code *)PTR_FUN_00afa4d8)();
  if (cStack_49 < '\0') {
    ppcVar1 = (char **)apcStack_60[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    if (cStack_49 < '\0') {
      __ZdlPv(apcStack_60[0]);
    }
    __Unwind_Resume();
    pcVar2 = (char *)ppcVar1;
    FUN_0033ab54();
    FUN_00338dd0();
    if (pcVar2 == (char *)0x0) {
      pcVar3 = (char *)(ulong)*(uint *)((long)ppcVar1 + 8);
    }
    else {
      pcVar3 = pcVar2;
      _strtol();
      if (*pcVar2 != '\0') {
        FUN_0033ab54(ppcVar1);
        FUN_0033ac38();
        pcVar3 = (char *)(ulong)*(uint *)((long)ppcVar1 + 8);
      }
      FUN_00338cb8(pcVar2);
    }
    return (char **)pcVar3;
  }
  return ppcVar1;
}



/* Entry: 0033ad04; end: 0033adab;  */

char * FUN_0033ad04(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1;
  FUN_0033ab54();
  FUN_00338dd0();
  if (pcVar1 == (char *)0x0) {
    pcVar2 = (char *)(ulong)*(uint *)(param_1 + 8);
  }
  else {
    pcVar2 = pcVar1;
    _strtol();
    if (*pcVar1 != '\0') {
      FUN_0033ab54(param_1);
      FUN_0033ac38();
      pcVar2 = (char *)(ulong)*(uint *)(param_1 + 8);
    }
    FUN_00338cb8(pcVar1);
  }
  return pcVar2;
}



/* Entry: 0033adac; end: 0033ae07;  */

void FUN_0033adac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_0033ab54();
  FUN_00338dd0();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_2 + 8);
    FUN_00339490();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 0033ae08; end: 0033ae3f;  */

void FUN_0033ae08(void)

{
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/global_config_env.cc"
               ,0x2b,2,"%s");
  return;
}



/* Entry: 0033ae40; end: 0033af2f;  */

void FUN_0033ae40(char *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char *pcStack_48;
  long lStack_40;
  char **ppcStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_00999f88;
  pcStack_48 = param_1;
  lStack_40 = param_2;
  if ((param_2 != 0) && (*param_1 != '[')) {
    do {
      if (param_2 == 0) goto LAB_0033ae70;
      lVar1 = param_2 + -1;
      param_2 = param_2 + -1;
    } while (param_1[lVar1] != ':');
    if (param_2 != -1) {
      ppcStack_38 = &pcStack_48;
      uStack_30 = 0x561238;
      uStack_28 = param_3 & 0xffffffff;
      uStack_20 = 0x5606ac;
      FUN_0056189c("[%s]:%d",7,&ppcStack_38,2);
      goto LAB_0033aea8;
    }
  }
LAB_0033ae70:
  ppcStack_38 = &pcStack_48;
  uStack_30 = 0x561238;
  uStack_28 = param_3 & 0xffffffff;
  uStack_20 = 0x5606ac;
  FUN_0056189c("%s:%d",5,&ppcStack_38,2);
LAB_0033aea8:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_18) {
    ___stack_chk_fail();
    __Unwind_Resume();
    FUN_0033af50();
    return;
  }
  return;
}



/* Entry: 0033af30; end: 0033af4f;  */

void FUN_0033af30(void)

{
  FUN_0033af50();
  return;
}



/* Entry: 0033af50; end: 0033b2a3;  */

/* WARNING: Possible PIC construction at 0x0033b2c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0033b2c8) */

dword * FUN_0033af50(char *param_1,char *param_2,long *param_3,long *param_4,undefined1 *param_5)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  dword *pdVar7;
  char *pcVar8;
  long *plVar9;
  char *pcVar10;
  undefined1 **ppuVar11;
  char *pcVar12;
  undefined1 **ppuVar13;
  char *pcVar14;
  char *unaff_x26;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  char cStack_c1;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  undefined1 *puStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  *param_5 = 0;
  if (param_2 == (char *)0x0) {
LAB_0033b024:
    *param_3 = (long)param_1;
    param_3[1] = (long)param_2;
    *param_4 = 0;
    param_4[1] = 0;
    return (dword *)((long)&MACH_HEADER.magic + 1);
  }
  plVar9 = param_4;
  if (*param_1 == '[') {
    if (param_2 < (char *)((long)&MACH_HEADER.magic + 2)) {
      return (dword *)0x0;
    }
    pcVar14 = param_2 + -1;
    pcVar12 = param_1 + 1;
    pcVar10 = pcVar12;
    pcVar8 = pcVar14;
    _memchr(pcVar12,0x5d);
    if (pcVar10 == (char *)0x0) {
      return (dword *)0x0;
    }
    pcVar10 = pcVar10 + -(long)param_1;
    if (pcVar10 == (char *)0xffffffffffffffff) {
      return (dword *)0x0;
    }
    if (pcVar10 == pcVar14) {
      *param_4 = 0;
      param_4[1] = 0;
LAB_0033b0a4:
      if (pcVar10 + -1 <= pcVar14) {
        pcVar14 = pcVar10 + -1;
      }
      *param_3 = (long)pcVar12;
      param_3[1] = (long)pcVar14;
      if (((pcVar14 != (char *)0x0) &&
          (pcVar14 = pcVar12, _memchr(pcVar12,0x3a), pcVar14 != (char *)0x0)) &&
         ((long)pcVar14 - (long)pcVar12 != -1)) {
        return (dword *)((long)&MACH_HEADER.magic + 1);
      }
      *param_3 = 0;
      param_3[1] = 0;
      return (dword *)0x0;
    }
    if ((pcVar10 + (long)param_1)[1] != ':') {
      return (dword *)0x0;
    }
    pcVar1 = pcVar10 + 2;
    if (pcVar1 <= param_2) {
      pcVar8 = param_2 + -(long)pcVar1;
      if (param_2 + (-2 - (long)pcVar10) <= param_2 + -(long)pcVar1) {
        pcVar8 = param_2 + (-2 - (long)pcVar10);
      }
      *param_4 = (long)(param_1 + (long)pcVar1);
      param_4[1] = (long)pcVar8;
      *param_5 = 1;
      goto LAB_0033b0a4;
    }
  }
  else {
    pcVar14 = param_1;
    pcVar8 = param_2;
    _memchr(param_1,0x3a);
    if ((pcVar14 == (char *)0x0) ||
       (pcVar14 = pcVar14 + -(long)param_1, pcVar14 == (char *)0xffffffffffffffff))
    goto LAB_0033b024;
    unaff_x26 = pcVar14 + 1;
    pcVar12 = param_2 + -(long)unaff_x26;
    if (unaff_x26 <= param_2 && pcVar12 != (char *)0x0) {
      pcVar10 = param_1 + (long)unaff_x26;
      pcVar8 = pcVar12;
      _memchr(pcVar10,0x3a);
      if ((pcVar10 != (char *)0x0) && ((long)pcVar10 - (long)param_1 != -1)) goto LAB_0033b024;
    }
    pcVar10 = param_2;
    if (pcVar14 <= param_2) {
      pcVar10 = pcVar14;
    }
    *param_3 = (long)param_1;
    param_3[1] = (long)pcVar10;
    if (pcVar14 < param_2) {
      if (param_2 + ~(ulong)pcVar14 <= pcVar12) {
        pcVar12 = param_2 + ~(ulong)pcVar14;
      }
      *param_4 = (long)(param_1 + (long)unaff_x26);
      param_4[1] = (long)pcVar12;
      *param_5 = 1;
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
  }
  pcVar10 = "string_view::substr";
  FUN_0033b2a4();
  ppuVar5 = &puStack_e0;
  ppuVar13 = &puStack_e0;
  ppuVar6 = &puStack_e0;
  ppuVar11 = &puStack_e0;
  uStack_58 = 0x33b110;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  pcStack_a0 = unaff_x26;
  pcStack_98 = pcVar14;
  pcStack_90 = pcVar12;
  pcStack_88 = param_2;
  pcStack_80 = param_1;
  puStack_78 = param_5;
  plStack_70 = param_4;
  plStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_0033af50();
  uVar4 = uStack_a8;
  uVar3 = uStack_b0;
  if ((int)pcVar10 == 0) {
    return (dword *)pcVar10;
  }
  if (0x7ffffffffffffff7 < uStack_a8) goto LAB_0033b29c;
  if (uStack_a8 < 0x17) {
    uStack_d0 = CONCAT17((char)uStack_a8,(undefined7)uStack_d0);
    if (uStack_a8 != 0) goto LAB_0033b1b4;
  }
  else {
    uVar2 = (uStack_a8 & 0xfffffffffffffff8) + 8;
    if ((uStack_a8 | 7) != 0x17) {
      uVar2 = uStack_a8 | 7;
    }
    ppuVar5 = (undefined1 **)(uVar2 + 1);
    __Znwm();
    uStack_d0 = (ulong)(uVar2 + 1) | 0x8000000000000000;
    uStack_d8 = uVar4;
    puStack_e0 = (undefined1 *)ppuVar5;
LAB_0033b1b4:
    _memmove(ppuVar5,uVar3,uVar4);
    ppuVar13 = ppuVar5;
  }
  *(undefined1 *)((long)ppuVar13 + uVar4) = 0;
  if (pcVar8[0x17] < '\0') {
    __ZdlPv(*(undefined8 *)pcVar8);
  }
  uVar4 = uStack_b8;
  uVar3 = uStack_c0;
  *(ulong *)(pcVar8 + 8) = uStack_d8;
  *(undefined1 **)pcVar8 = puStack_e0;
  *(ulong *)(pcVar8 + 0x10) = uStack_d0;
  if (cStack_c1 == '\0') {
    return (dword *)pcVar10;
  }
  if (0x7ffffffffffffff7 < uStack_b8) {
LAB_0033b29c:
    func_0x0033b318(&puStack_e0);
    pdVar7 = &MACH_HEADER.ncmds;
    ___cxa_allocate_exception();
    __ZNSt11logic_errorC2EPKc();
    *(undefined **)pdVar7 = PTR___ZTVSt12out_of_range_00998e00 + 0x10;
    return pdVar7;
  }
  if (uStack_b8 < 0x17) {
    uStack_d0 = CONCAT17((char)uStack_b8,(undefined7)uStack_d0);
    if (uStack_b8 == 0) goto LAB_0033b258;
  }
  else {
    uVar2 = (uStack_b8 & 0xfffffffffffffff8) + 8;
    if ((uStack_b8 | 7) != 0x17) {
      uVar2 = uStack_b8 | 7;
    }
    ppuVar6 = (undefined1 **)(uVar2 + 1);
    __Znwm();
    uStack_d0 = (ulong)(uVar2 + 1) | 0x8000000000000000;
    uStack_d8 = uVar4;
    puStack_e0 = (undefined1 *)ppuVar6;
  }
  _memmove(ppuVar6,uVar3,uVar4);
  ppuVar11 = ppuVar6;
LAB_0033b258:
  *(undefined1 *)((long)ppuVar11 + uVar4) = 0;
  if (*(char *)((long)plVar9 + 0x17) < '\0') {
    __ZdlPv(*plVar9);
  }
  plVar9[1] = uStack_d8;
  *plVar9 = (long)puStack_e0;
  plVar9[2] = uStack_d0;
  return (dword *)pcVar10;
}



/* Entry: 0033b2a4; end: 0033b2f3;  */

void FUN_0033b2a4(void)

{
  dword *pdVar1;
  dword *pdVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  ___cxa_allocate_exception();
  FUN_0033b2f4();
  pdVar2 = pdVar1;
  ___cxa_throw(pdVar1,PTR___ZTISt12out_of_range_0099c608,PTR___ZNSt12out_of_rangeD1Ev_009988e8);
  ___cxa_free_exception(pdVar1);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *(undefined **)pdVar2 = PTR___ZTVSt12out_of_range_00998e00 + 0x10;
  return;
}



/* Entry: 0033b2f4; end: 0033b32b;  */

void FUN_0033b2f4(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12out_of_range_00998e00 + 0x10);
  return;
}



/* Entry: 0033b32c; end: 0033b37b;  */

void FUN_0033b32c(void)

{
  dword *pdVar1;
  dword *pdVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  ___cxa_allocate_exception();
  FUN_0033b37c();
  pdVar2 = pdVar1;
  ___cxa_throw(pdVar1,PTR___ZTISt12length_error_0099c600,PTR___ZNSt12length_errorD1Ev_009988e0);
  ___cxa_free_exception(pdVar1);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *(undefined **)pdVar2 = PTR___ZTVSt12length_error_00998df8 + 0x10;
  return;
}



/* Entry: 0033b37c; end: 0033b39f;  */

void FUN_0033b37c(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12length_error_00998df8 + 0x10);
  return;
}



/* Entry: 0033b3a0; end: 0033b3c3;  */

bool FUN_0033b3a0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  do {
    puVar3 = (undefined8 *)*param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *puVar3 = param_2;
  return param_1 + 9 == puVar3;
}



/* Entry: 0033b3c4; end: 0033b3e3;  */

void FUN_0033b3c4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_0033b3e4(param_1,&uStack_11);
  return;
}



/* Entry: 0033b3e4; end: 0033b46f;  */

long * FUN_0033b3e4(undefined8 *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  plVar4 = (long *)param_1[8];
  plVar6 = (long *)*plVar4;
  plVar1 = param_1 + 9;
  if (plVar4 == plVar1) {
    if (plVar6 == (long *)0x0) {
      *param_2 = 1;
      return (long *)0x0;
    }
    param_1[8] = plVar6;
    plVar4 = plVar6;
    plVar6 = (long *)*plVar6;
  }
  if (plVar6 == (long *)0x0) {
    if (plVar4 == (long *)*param_1) {
      *plVar1 = 0;
      do {
        puVar7 = (undefined8 *)*param_1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar3) {
          *param_1 = plVar1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *puVar7 = plVar1;
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        *param_2 = 0;
        param_1[8] = lVar5;
        return plVar4;
      }
    }
    *param_2 = 0;
    return (long *)0x0;
  }
  *param_2 = 0;
  param_1[8] = plVar6;
  return plVar4;
}



/* Entry: 0033b470; end: 0033b6df;  */

qword * FUN_0033b470(qword *param_1,undefined1 *param_2,code *param_3,char *param_4,long param_5,
                    char *param_6)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  qword *unaff_x19;
  qword *unaff_x20;
  long unaff_x21;
  char *unaff_x22;
  char *unaff_x23;
  undefined4 *unaff_x24;
  ulong unaff_x25;
  ulong uVar10;
  code *unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    pcVar9 = param_6;
    lVar8 = param_5;
    pcVar2 = param_3;
    *(code **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined4 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(char **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(char **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(qword **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar7 = *(undefined8 *)pcVar9;
    param_1[3] = *(undefined8 *)(pcVar9 + 8);
    param_1[2] = uVar7;
    unaff_x19 = &section_00000068.addr;
    param_5 = lVar8;
    param_6 = pcVar9;
    __Znwm();
    *unaff_x19 = (qword)&PTR_FUN_009db170;
    *(undefined1 *)(unaff_x19 + 0xf) = 0;
    FUN_00339d50(unaff_x19 + 1);
    FUN_00339df0(unaff_x19 + 9);
    unaff_x23 = segment_command_00000020.segname;
    _malloc();
    if (unaff_x23 == (char *)0x0) {
      pcVar9 = "info != nullptr";
      uVar7 = 0x55;
LAB_0033b6a4:
      *(char **)((long)register0x00000008 + -0xa0) = pcVar9;
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/thd_posix.cc"
                   ,uVar7,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x33b6c8);
      (*pcVar2)();
    }
    *(qword **)unaff_x23 = unaff_x19;
    *(code **)(unaff_x23 + 8) = pcVar2;
    *(char **)(unaff_x23 + 0x10) = param_4;
    *(undefined1 **)(unaff_x23 + 0x18) = param_2;
    unaff_x23[0x20] = *pcVar9;
    cVar1 = pcVar9[1];
    unaff_x23[0x21] = cVar1;
    if (cVar1 != '\0') {
      FUN_0033aa24();
    }
    iVar3 = (int)(undefined1 *)((long)register0x00000008 + -0x98);
    _pthread_attr_init();
    if (iVar3 != 0) {
      pcVar9 = "pthread_attr_init(&attr) == 0";
      uVar7 = 0x60;
      goto LAB_0033b6a4;
    }
    if (*pcVar9 == '\0') {
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x98);
      _pthread_attr_setdetachstate(puVar4,2);
      if ((int)puVar4 != 0) {
        pcVar9 = "pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED) == 0";
        uVar7 = 0x66;
        goto LAB_0033b6a4;
      }
    }
    else {
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x98);
      _pthread_attr_setdetachstate(puVar4,1);
      if ((int)puVar4 != 0) {
        pcVar9 = "pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE) == 0";
        uVar7 = 99;
        goto LAB_0033b6a4;
      }
    }
    uVar10 = *(ulong *)(pcVar9 + 8);
    if (uVar10 != 0) {
      uVar5 = 0x5d;
      _sysconf();
      lVar6 = 0x1d;
      _sysconf(0x1d);
      if (uVar5 <= uVar10) {
        uVar5 = uVar10;
      }
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x98);
      _pthread_attr_setstacksize(puVar4,(uVar5 + lVar6) - 1 & -lVar6);
      if ((int)puVar4 != 0) {
        pcVar9 = "pthread_attr_setstacksize(&attr, stack_size) == 0";
        uVar7 = 0x6b;
        goto LAB_0033b6a4;
      }
    }
    unaff_x24 = (undefined4 *)(unaff_x19 + 0x10);
    param_3 = FUN_0033b77c;
    param_2 = (undefined1 *)((long)register0x00000008 + -0x98);
    param_4 = unaff_x23;
    _pthread_create();
    iVar3 = (int)unaff_x24;
    unaff_x25 = (ulong)(iVar3 == 0);
    unaff_x20 = (qword *)((long)register0x00000008 + -0x98);
    _pthread_attr_destroy();
    if ((int)unaff_x20 != 0) {
      pcVar9 = "pthread_attr_destroy(&attr) == 0";
      uVar7 = 0x96;
      goto LAB_0033b6a4;
    }
    if (iVar3 == 0) {
      param_1[1] = (qword)unaff_x19;
      *(undefined4 *)param_1 = 1;
    }
    else {
      _free(unaff_x23);
      if (pcVar9[1] != '\0') {
        FUN_0033aa78();
      }
      param_1[1] = (qword)unaff_x19;
      *(undefined4 *)param_1 = 4;
      unaff_x20 = unaff_x19;
      (**(code **)(*unaff_x19 + 8))();
      param_1[1] = 0;
    }
    if (lVar8 != 0) {
      *(bool *)lVar8 = iVar3 == 0;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x58)) {
      return param_1;
    }
    ___stack_chk_fail();
    __ZdlPv(unaff_x19);
    unaff_x30 = FUN_0033b6e0;
    param_1 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    unaff_x21 = lVar8;
    unaff_x22 = pcVar9;
    unaff_x26 = pcVar2;
  } while( true );
}



/* Entry: 0033b6e0; end: 0033b6e3;  */

qword * FUN_0033b6e0(qword *param_1,undefined1 *param_2,code *param_3,char *param_4,long param_5,
                    char *param_6)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  qword *unaff_x19;
  qword *unaff_x20;
  long unaff_x21;
  char *unaff_x22;
  char *unaff_x23;
  undefined4 *unaff_x24;
  ulong uVar10;
  ulong unaff_x25;
  code *unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    pcVar9 = param_6;
    lVar8 = param_5;
    pcVar2 = param_3;
    *(code **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined4 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(char **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(char **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(qword **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(qword **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_00999f88;
    uVar7 = *(undefined8 *)pcVar9;
    param_1[3] = *(undefined8 *)(pcVar9 + 8);
    param_1[2] = uVar7;
    unaff_x19 = &section_00000068.addr;
    param_5 = lVar8;
    param_6 = pcVar9;
    __Znwm();
    *unaff_x19 = (qword)&PTR_FUN_009db170;
    *(undefined1 *)(unaff_x19 + 0xf) = 0;
    FUN_00339d50(unaff_x19 + 1);
    FUN_00339df0(unaff_x19 + 9);
    unaff_x23 = segment_command_00000020.segname;
    _malloc();
    if (unaff_x23 == (char *)0x0) {
      pcVar9 = "info != nullptr";
      uVar7 = 0x55;
LAB_0033b6a4:
      *(char **)((long)register0x00000008 + -0xa0) = pcVar9;
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/thd_posix.cc"
                   ,uVar7,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x33b6c8);
      (*pcVar2)();
    }
    *(qword **)unaff_x23 = unaff_x19;
    *(code **)(unaff_x23 + 8) = pcVar2;
    *(char **)(unaff_x23 + 0x10) = param_4;
    *(undefined1 **)(unaff_x23 + 0x18) = param_2;
    unaff_x23[0x20] = *pcVar9;
    cVar1 = pcVar9[1];
    unaff_x23[0x21] = cVar1;
    if (cVar1 != '\0') {
      FUN_0033aa24();
    }
    iVar3 = (int)(undefined1 *)((long)register0x00000008 + -0x98);
    _pthread_attr_init();
    if (iVar3 != 0) {
      pcVar9 = "pthread_attr_init(&attr) == 0";
      uVar7 = 0x60;
      goto LAB_0033b6a4;
    }
    if (*pcVar9 == '\0') {
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x98);
      _pthread_attr_setdetachstate(puVar4,2);
      if ((int)puVar4 != 0) {
        pcVar9 = "pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED) == 0";
        uVar7 = 0x66;
        goto LAB_0033b6a4;
      }
    }
    else {
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x98);
      _pthread_attr_setdetachstate(puVar4,1);
      if ((int)puVar4 != 0) {
        pcVar9 = "pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE) == 0";
        uVar7 = 99;
        goto LAB_0033b6a4;
      }
    }
    uVar10 = *(ulong *)(pcVar9 + 8);
    if (uVar10 != 0) {
      uVar5 = 0x5d;
      _sysconf();
      lVar6 = 0x1d;
      _sysconf(0x1d);
      if (uVar5 <= uVar10) {
        uVar5 = uVar10;
      }
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x98);
      _pthread_attr_setstacksize(puVar4,(uVar5 + lVar6) - 1 & -lVar6);
      if ((int)puVar4 != 0) {
        pcVar9 = "pthread_attr_setstacksize(&attr, stack_size) == 0";
        uVar7 = 0x6b;
        goto LAB_0033b6a4;
      }
    }
    unaff_x24 = (undefined4 *)(unaff_x19 + 0x10);
    param_3 = FUN_0033b77c;
    param_2 = (undefined1 *)((long)register0x00000008 + -0x98);
    param_4 = unaff_x23;
    _pthread_create();
    iVar3 = (int)unaff_x24;
    unaff_x25 = (ulong)(iVar3 == 0);
    unaff_x20 = (qword *)((long)register0x00000008 + -0x98);
    _pthread_attr_destroy();
    if ((int)unaff_x20 != 0) {
      pcVar9 = "pthread_attr_destroy(&attr) == 0";
      uVar7 = 0x96;
      goto LAB_0033b6a4;
    }
    if (iVar3 == 0) {
      param_1[1] = (qword)unaff_x19;
      *(undefined4 *)param_1 = 1;
    }
    else {
      _free(unaff_x23);
      if (pcVar9[1] != '\0') {
        FUN_0033aa78();
      }
      param_1[1] = (qword)unaff_x19;
      *(undefined4 *)param_1 = 4;
      unaff_x20 = unaff_x19;
      (**(code **)(*unaff_x19 + 8))();
      param_1[1] = 0;
    }
    if (lVar8 != 0) {
      *(bool *)lVar8 = iVar3 == 0;
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)register0x00000008 + -0x58)) {
      return param_1;
    }
    ___stack_chk_fail();
    __ZdlPv(unaff_x19);
    unaff_x30 = FUN_0033b6e0;
    param_1 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    unaff_x21 = lVar8;
    unaff_x22 = pcVar9;
    unaff_x26 = pcVar2;
  } while( true );
}



/* Entry: 0033b6e4; end: 0033b71f;  */

undefined8 * FUN_0033b6e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009db170;
  func_0x00339d70(param_1 + 1);
  FUN_00339e64(param_1 + 9);
  return param_1;
}



/* Entry: 0033b720; end: 0033b733;  */

void FUN_0033b720(void)

{
  FUN_0033b6e4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0033b734; end: 0033b76f;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_0033b734(long param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined7 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  ulong *puVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_2b8 [2];
  char cStack_2a1;
  undefined1 auStack_2a0 [56];
  undefined8 uStack_268;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  ulong auStack_218 [2];
  undefined7 *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  code *pcStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  undefined8 uStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 **ppuStack_170;
  byte abStack_168 [64];
  long lStack_128;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  byte abStack_58 [16];
  long lStack_48;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  pbVar7 = (byte *)(param_1 + 8);
  func_0x00339d8c(pbVar7);
  *(undefined1 *)(param_1 + 0x78) = 1;
  FUN_00339f68(param_1 + 0x48);
  _pthread_mutex_unlock();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770db4();
  _pthread_mutex_trylock();
  if (((uint)pbVar7 | 0x10) == 0x10) {
    return (byte *)(ulong)((uint)pbVar7 == 0);
  }
  func_0x00770de8();
  pcStack_28 = FUN_00339df0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar15 = abStack_58;
  puStack_30 = &stack0xffffffffffffffe0;
  _pthread_condattr_init();
  if ((int)pbVar15 == 0) {
    param_2 = abStack_58;
    _pthread_cond_init();
    if ((int)pbVar7 != 0) goto LAB_00339e5c;
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
      return pbVar7;
    }
  }
  else {
    func_0x00770e50();
    pbVar7 = pbVar15;
LAB_00339e5c:
    func_0x00770e1c();
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_00339e64;
  ppuStack_70 = &puStack_30;
  _pthread_cond_destroy();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770e84();
  pcStack_78 = FUN_00339e80;
  uVar8 = (ulong)param_4 >> 0x20;
  pbVar15 = param_2;
  puStack_80 = (undefined1 *)&ppuStack_70;
  func_0x0033a068(uVar8);
  uVar2 = param_3;
  FUN_00339fc4(param_3,param_4,uVar8);
  if ((int)uVar2 == 0) {
    _pthread_cond_wait();
  }
  else {
    FUN_0033a30c(param_3,param_4,1);
    uVar8 = (ulong)param_4 >> 0x20;
    pbVar15 = param_4;
    FUN_0033a598(uVar8);
    FUN_0033a01c(param_3,param_4,uVar8);
    lStack_a8 = (long)(int)param_4;
    uStack_b0 = param_3;
    _pthread_cond_timedwait(pbVar7,param_2,&uStack_b0);
  }
  if (((uint)pbVar7 < 0x3d) && ((1L << ((ulong)pbVar7 & 0x3f) & 0x1000000800000001U) != 0)) {
    return (byte *)(ulong)((uint)pbVar7 == 0x3c);
  }
  func_0x00770eb8();
  pcStack_b8 = FUN_00339f68;
  ppuStack_c0 = &puStack_80;
  _pthread_cond_signal();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770eec();
  uStack_c8 = 0x339f84;
  puStack_d0 = (undefined1 *)&ppuStack_c0;
  _pthread_cond_broadcast();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f20();
  uStack_d8 = 0x339fa0;
  puStack_e0 = (undefined1 *)&puStack_d0;
  _pthread_once();
  if ((int)pbVar7 == 0) {
    return pbVar7;
  }
  func_0x00770f54();
  pcStack_e8 = FUN_00339fbc;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar1 = (byte *)((long)&MACH_HEADER.magic + 2);
  pbVar9 = param_2;
  puStack_f0 = (undefined1 *)&puStack_e0;
  FUN_00338e58();
  if ((int)pbVar1 != 0) {
    ppuStack_170 = &puStack_e0;
    pbVar1 = abStack_168;
    _vsnprintf(pbVar1,0x40,pbVar15,&puStack_e0);
    if ((int)(uint)pbVar1 < 0) {
      unaff_x23 = (byte *)0x0;
      pbVar15 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar1;
      if ((uint)pbVar1 < 0x40) {
        pbVar15 = (byte *)0x0;
        unaff_x23 = abStack_168;
      }
      else {
        pbVar15 = (byte *)(((ulong)pbVar1 & 0xffffffff) + 1);
        FUN_00338c74();
        ppuStack_170 = &puStack_e0;
        _vsnprintf();
        unaff_x23 = pbVar15;
      }
    }
    pbVar9 = param_2;
    FUN_00338e80(pbVar7,param_2,2,unaff_x23);
    pbVar1 = pbVar15;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_128) {
    return pbVar1;
  }
  ___stack_chk_fail();
  uStack_188 = 2;
  pcStack_178 = FUN_00339178;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = 1;
  pbStack_1b0 = unaff_x24;
  pbStack_1a8 = unaff_x23;
  pbStack_1a0 = pbVar15;
  pbStack_198 = pbVar7;
  pbStack_190 = param_2;
  ppuStack_180 = &puStack_f0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar1;
  lVar3 = lVar14;
  uStack_268 = uVar2;
  _strrchr(lVar14,0x2f);
  if (lVar3 != 0) {
    lVar14 = lVar3 + 1;
  }
  puVar4 = &uStack_268;
  _localtime_r(puVar4,auStack_2a0);
  if (puVar4 == (undefined8 *)0x0) {
    uStack_258 = 0x656d69746c6163;
    uStack_251 = 0;
    uStack_260 = 0x6c3a726f727265;
    uStack_259 = 0x6f;
  }
  else {
    puVar5 = &uStack_260;
    _strftime(puVar5,0x40,"%m%d %H:%M:%S",auStack_2a0);
    if (puVar5 == (undefined7 *)0x0) {
      uStack_260 = 0x733a726f727265;
      uStack_259 = 0x74;
      uStack_258 = 0x656d69746672;
    }
  }
  uVar6 = (ulong)*(uint *)(pbVar1 + 0xc);
  func_0x00338e1c();
  uVar8 = uVar6;
  _pthread_self();
  auStack_218[1] = 0x560e98;
  puStack_208 = &uStack_260;
  uStack_200 = 0x560e98;
  uStack_1f8 = (ulong)pbVar9 & 0xffffffff;
  uStack_1f0 = 0x5606ac;
  pcStack_1e0 = FUN_00560738;
  uStack_1d0 = 0x560e98;
  uStack_1c8 = (ulong)*(uint *)(pbVar1 + 8);
  uStack_1c0 = 0x5606ac;
  puVar12 = auStack_218;
  auStack_218[0] = uVar6;
  uStack_1e8 = uVar8;
  lStack_1d8 = lVar14;
  FUN_0056189c(apbStack_2b8,"%s%s.%09d %7ld %s:%d]",0x15,puVar12,6);
  uVar11 = *(uint *)(pbVar1 + 0xc);
  func_0x00338e6c();
  if (uVar11 == 0) {
    auStack_218[0] = auStack_218[0] & 0xffffffffffffff00;
    uStack_200 = uStack_200 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_218);
    if ((char)uStack_200 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar10 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_2a1 < '\0') {
    pbVar7 = apbStack_2b8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_1b8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_2a1 < '\0') {
    __ZdlPv(apbStack_2b8[0]);
  }
  __Unwind_Resume();
  uVar11 = (uint)puVar12;
  if ((char *)0x3 < pcVar10) {
    uVar8 = (ulong)pcVar10 >> 2;
    pbVar15 = pbVar7;
    do {
      uVar11 = (*(int *)pbVar15 * 0x16a88000 | (uint)(*(int *)pbVar15 * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ (uint)puVar12;
      uVar11 = (uVar11 >> 0x13 | uVar11 << 0xd) * 5 + 0xe6546b64;
      puVar12 = (ulong *)(ulong)uVar11;
      uVar8 = uVar8 - 1;
      pbVar15 = pbVar15 + 4;
    } while (uVar8 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar10 & 0xfffffffffffffffc);
  }
  uVar13 = 0;
  uVar8 = (ulong)pcVar10 & 3;
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      if (uVar8 != 3) goto LAB_00339464;
      uVar13 = (uint)pbVar7[2] << 0x10;
    }
    uVar13 = uVar13 | (uint)pbVar7[1] << 8;
  }
  uVar11 = ((uVar13 ^ *pbVar7) * 0x16a88000 | (uVar13 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
           ^ uVar11;
LAB_00339464:
  uVar11 = uVar11 ^ (uint)pcVar10;
  uVar11 = (uVar11 ^ uVar11 >> 0x10) * -0x7a143595;
  uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar11 ^ uVar11 >> 0x10);
}



/* Entry: 0033b770; end: 0033b77b;  */

void FUN_0033b770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077accc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_join_0099a550)(*(undefined8 *)(param_1 + 0x80),0);
  return;
}



/* Entry: 0033b77c; end: 0033b82b;  */

undefined8 FUN_0033b77c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  plVar2 = (long *)*param_1;
  pcVar3 = (code *)param_1[1];
  lVar8 = param_1[2];
  bVar4 = *(byte *)(param_1 + 4);
  bVar5 = *(byte *)((long)param_1 + 0x21);
  _free();
  plVar1 = plVar2 + 1;
  func_0x00339d8c(plVar1);
  if ((char)plVar2[0xf] == '\0') {
    do {
      uVar6 = 0;
      func_0x0033a068(0);
      plVar7 = plVar1;
      FUN_00339e80(plVar2 + 9,plVar1,uVar6,param_2);
      param_2 = plVar7;
    } while ((char)plVar2[0xf] == '\0');
  }
  func_0x00339da8(plVar1);
  if ((bVar4 & 1) == 0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  (*pcVar3)(lVar8);
  if ((bVar5 & 1) != 0) {
    FUN_0033aa78();
  }
  return 0;
}



/* Entry: 0033b82c; end: 0033b93f;  */

undefined1  [16] FUN_0033b82c(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lStack_40;
  int iStack_38;
  
  if ((param_1 == 0x7fffffffffffffff) && (param_2 == -1)) {
    auVar7._8_8_ = 0x300000000;
    auVar7._0_8_ = 0x7fffffffffffffff;
    return auVar7;
  }
  lVar1 = 0x7fffffffffffffff;
  iVar4 = -1;
  lStack_40 = param_1;
  iStack_38 = param_2;
  FUN_0033b940();
  if ((param_1 == lVar1) && (param_2 == iVar4)) {
    auVar8._8_8_ = 0x300000000;
    auVar8._0_8_ = 0x8000000000000000;
    return auVar8;
  }
  uVar2 = 1;
  FUN_0056f3a4(1,param_1,param_2,1,0,&lStack_40);
  uVar3 = 1;
  FUN_0056f3a4(1,lStack_40,iStack_38,0,4,&lStack_40);
  uVar5 = 3;
  func_0x0033a110(uVar2,3);
  uVar6 = 3;
  func_0x0033a080(uVar3,3);
  FUN_0033a118(uVar2,uVar5,uVar3,uVar6);
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar2;
  return auVar9;
}



/* Entry: 0033b940; end: 0033b98f;  */

undefined1  [16] FUN_0033b940(ulong param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = 0x7fffffffffffffff;
  if (param_1 != 0x8000000000000000) {
    uVar3 = -param_1;
  }
  uVar1 = 0xffffffff;
  if (param_1 != 0x8000000000000000) {
    uVar1 = 0;
  }
  if (param_2 != 0) {
    uVar3 = ~param_1;
    uVar1 = (ulong)(4000000000 - param_2);
  }
  uVar2 = (long)param_1 >> 0x3f ^ 0x8000000000000000;
  if (param_2 != -1) {
    uVar2 = uVar3;
  }
  uVar3 = 0xffffffff;
  if (param_2 != -1) {
    uVar3 = uVar1;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 0033b990; end: 0033b9ff;  */

void FUN_0033b990(long param_1,int param_2)

{
  if ((param_1 == 0x7fffffffffffffff) && (param_2 == -1)) {
    func_0x0033a068(1);
  }
  else if ((param_1 == -0x8000000000000000) && (param_2 == -1)) {
    func_0x0033a074(1);
  }
  else {
    FUN_005700ac();
  }
  return;
}



/* Entry: 0033ba00; end: 0033bb1b;  */

undefined1  [16] FUN_0033ba00(undefined8 param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_30;
  uint uStack_28;
  
  if (param_2 >> 0x20 == 3) {
    func_0x007710fc();
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = param_1;
    return auVar8;
  }
  FUN_0033a30c(param_1,param_2,1);
  uVar3 = 1;
  uVar6 = param_2;
  func_0x0033a068(1);
  uVar4 = param_1;
  uVar5 = param_2;
  FUN_00339fc4(param_1,param_2,uVar3,uVar6);
  if ((int)uVar4 == 0) {
    uStack_30 = 0x7fffffffffffffff;
  }
  else {
    uVar3 = 1;
    func_0x0033a074(1);
    uVar4 = param_1;
    FUN_00339fc4(param_1,param_2,uVar3,uVar5);
    if ((int)uVar4 != 0) {
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_0056f74c(&uStack_30,param_1,0);
      iVar2 = (int)param_2 % 1000000000;
      iVar1 = iVar2 * 4 + -0x1194d800;
      if (-1 < iVar2) {
        iVar1 = iVar2 * 4;
      }
      FUN_0056f74c(&uStack_30,((long)iVar2 >> 0x3d) + (long)((int)param_2 / 1000000000),iVar1);
      uVar6 = (ulong)uStack_28;
      goto LAB_0033bb04;
    }
    uStack_30 = 0x8000000000000000;
  }
  uVar6 = 0xffffffff;
LAB_0033bb04:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uStack_30;
  return auVar7;
}



/* Entry: 0033bb1c; end: 0033bb3b;  */

void FUN_0033bb1c(void)

{
  return;
}



/* Entry: 0033bb3c; end: 0033bbef;  */

void FUN_0033bb3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  pcVar3 = "grpc.client_idle_timeout_ms";
  func_0x003a2080(param_2,"grpc.client_idle_timeout_ms",0x1b);
  uStack_58 = 0x7fffffffffffffff;
  if (((ulong)pcVar3 & 0xff) != 0) {
    uStack_58 = param_2;
  }
  ppuStack_68 = &PTR_FUN_009db2e0;
  uStack_32 = 0;
  uStack_60 = param_3;
  FUN_0033d3cc(&uStack_50,&uStack_31,&uStack_32);
  param_1[1] = &PTR_FUN_009db2e0;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  ppuStack_68 = &PTR_FUN_009db368;
  uStack_50 = 0;
  uStack_48 = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&uStack_40,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
    }
    uStack_40 = 0;
  } while (cVar1 != '\0');
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = &PTR_FUN_009db368;
  FUN_0033d130(&ppuStack_68);
  return;
}



/* Entry: 0033bbf0; end: 0033bbf3;  */

undefined8 * FUN_0033bbf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009db2e0;
  if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[5])();
  }
  FUN_0033d4f0(param_1 + 3);
  return param_1;
}



/* Entry: 0033bbf4; end: 0033bd67;  */

void FUN_0033bbf4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  uStack_c8 = *param_2;
  plStack_c0 = (long *)param_2[1];
  if (plStack_c0 != (long *)0x0) {
    plVar1 = plStack_c0 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0033bd68(&uStack_b8,&uStack_c8);
  ppuStack_a0 = &PTR_FUN_009db2e0;
  uStack_90 = uStack_b0;
  uStack_52 = 0;
  uStack_98 = param_3;
  FUN_0033d3cc(&uStack_88,&uStack_51,&uStack_52);
  plVar1 = plStack_c0;
  ppuStack_a0 = &PTR_FUN_009db298;
  uStack_78 = 0;
  puStack_70 = (undefined8 *)0x0;
  uStack_68 = uStack_b8;
  uStack_60 = uStack_a8;
  if (plStack_c0 != (long *)0x0) {
    plVar2 = plStack_c0 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  param_1[1] = &PTR_FUN_009db2e0;
  param_1[3] = uStack_90;
  param_1[2] = uStack_98;
  param_1[5] = uStack_80;
  param_1[4] = uStack_88;
  uStack_88 = 0;
  uStack_80 = 0;
  do {
    uVar5 = uStack_78;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&uStack_78,0x10);
    if (bVar4) {
      uStack_78 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  param_1[6] = uVar5;
  param_1[1] = &PTR_FUN_009db298;
  do {
    puVar6 = puStack_70;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&puStack_70,0x10);
    if (bVar4) {
      puStack_70 = (undefined8 *)0x0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  param_1[7] = puVar6;
  param_1[9] = uStack_60;
  param_1[8] = uStack_68;
  *param_1 = 0;
  if (puStack_70 != (undefined8 *)0x0) {
    (**(code **)*puStack_70)();
  }
  FUN_0033d130(&ppuStack_a0);
  return;
}



/* Entry: 0033bd68; end: 0033bebf;  */

void FUN_0033bd68(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  double dVar7;
  
  pcVar4 = "grpc.max_connection_age_ms";
  lVar3 = param_2;
  func_0x003a2080(param_2,"grpc.max_connection_age_ms",0x1a);
  lVar1 = 0x7fffffffffffffff;
  if (((ulong)pcVar4 & 0xff) != 0) {
    lVar1 = lVar3;
  }
  pcVar4 = "grpc.max_connection_idle_ms";
  lVar3 = param_2;
  func_0x003a2080(param_2,"grpc.max_connection_idle_ms",0x1b);
  pcVar5 = "grpc.max_connection_age_grace_ms";
  func_0x003a2080(param_2,"grpc.max_connection_age_grace_ms",0x20);
  lVar6 = param_2;
  _rand();
  dVar7 = (double)(int)lVar6 * 0.1;
  dVar7 = (dVar7 + dVar7) / 2147483647.0 + 1.0 + -0.1;
  lVar6 = -0x8000000000000000;
  if (lVar1 == -0x8000000000000000) {
    if (0.0 <= dVar7) goto LAB_0033be84;
  }
  else if (lVar1 == 0x7fffffffffffffff) {
    if (dVar7 < 0.0) goto LAB_0033be84;
  }
  else {
    dVar7 = ((dVar7 * (double)lVar1) / 1000.0) * 1000.0;
    if (dVar7 < 9.223372036854776e+18) {
      if (dVar7 <= -9.223372036854776e+18) {
        lVar6 = -0x8000000000000000;
      }
      else {
        lVar6 = (long)dVar7;
      }
      goto LAB_0033be84;
    }
  }
  lVar6 = 0x7fffffffffffffff;
LAB_0033be84:
  lVar1 = 0x7fffffffffffffff;
  if (((ulong)pcVar5 & 0xff) != 0) {
    lVar1 = param_2;
  }
  lVar2 = 0x7fffffffffffffff;
  if (((ulong)pcVar4 & 0xff) != 0) {
    lVar2 = lVar3;
  }
  *param_1 = lVar6;
  param_1[1] = lVar2;
  param_1[2] = lVar1;
  return;
}



/* Entry: 0033bec0; end: 0033bef7;  */

undefined8 * FUN_0033bec0(undefined8 *param_1)

{
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[6])();
  }
  *param_1 = &PTR_FUN_009db2e0;
  if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[5])();
  }
  FUN_0033d4f0(param_1 + 3);
  return param_1;
}



/* Entry: 0033bef8; end: 0033bfaf;  */

void FUN_0033bef8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  plVar1 = (long *)(param_1 + 0x30);
  do {
    puVar4 = (undefined8 *)*plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  func_0x003401f0(*(undefined8 *)(param_1 + 0x18));
  plVar1 = (long *)(param_1 + 0x28);
  do {
    puVar4 = (undefined8 *)*plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0033bf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)();
    return;
  }
  return;
}



/* Entry: 0033bfb0; end: 0033c493;  */

long ** FUN_0033bfb0(qword param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long **pplVar8;
  int iVar9;
  qword *pqVar10;
  long lVar11;
  undefined1 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *plStack_410;
  qword qStack_408;
  long *plStack_400;
  ulong *puStack_3f8;
  long *plStack_3f0;
  qword qStack_3e8;
  ulong uStack_3e0;
  char cStack_3d8;
  undefined1 auStack_3d0 [104];
  undefined1 auStack_368 [8];
  undefined1 auStack_360 [104];
  qword qStack_2f8;
  qword qStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [104];
  qword qStack_278;
  qword qStack_270;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [104];
  qword qStack_1f8;
  qword qStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined8 auStack_1e0 [13];
  qword qStack_178;
  qword qStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [104];
  qword qStack_f8;
  qword qStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [104];
  qword qStack_78;
  qword qStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar3 = segment_command_00000020.segname + 8;
  __Znwm();
  plVar13 = *(long **)(param_1 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *plVar13 = *plVar13 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(long **)pcVar3 = plVar13;
  *(qword *)(pcVar3 + 8) = param_1;
  pqVar10 = (qword *)(pcVar3 + 0x10);
  *pqVar10 = 0;
  *(code **)(pcVar3 + 0x18) = FUN_0033d1d8;
  *(char **)(pcVar3 + 0x20) = pcVar3;
  *(undefined8 *)(pcVar3 + 0x28) = 0;
  puStack_3f8 = (ulong *)0x0;
  FUN_003c1e6c(auStack_e8,pqVar10,&puStack_3f8);
  iVar9 = (int)pqVar10;
  puVar4 = puStack_3f8;
  if (((ulong)puStack_3f8 & 1) != 0) {
    FUN_0055293c();
  }
  plStack_400 = *(long **)(param_1 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plStack_400,0x10);
    if (bVar2) {
      *plStack_400 = *plStack_400 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (*(long *)(param_1 + 0x38) == 0x7fffffffffffffff) goto LAB_0033c364;
  func_0x003c1f6c();
  uVar5 = *puVar4;
  FUN_003c1e28();
  lVar14 = *(long *)(param_1 + 0x38);
  lVar11 = 0x7fffffffffffffff;
  if ((uVar5 != 0x7fffffffffffffff && lVar14 != 0x7fffffffffffffff) &&
     (lVar11 = -0x8000000000000000, uVar5 != 0x8000000000000000 && lVar14 != -0x8000000000000000)) {
    if ((long)uVar5 < 1) {
      if ((long)(-0x8000000000000000 - uVar5) <= lVar14) goto LAB_0033c0b8;
    }
    else if ((long)(uVar5 ^ 0x7fffffffffffffff) < lVar14) {
      lVar11 = 0x7fffffffffffffff;
    }
    else {
LAB_0033c0b8:
      lVar11 = lVar14 + uVar5;
    }
  }
  FUN_003d3444(auStack_3d0,lVar11);
  FUN_0033d5ec(auStack_e8,auStack_3d0);
  auStack_368[0] = 0;
  qStack_2f0 = param_1;
  FUN_0033d5ec(auStack_360,auStack_e8);
  qStack_2f8 = param_1;
  FUN_003d3598(auStack_e8);
  if (plStack_400 != (long *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_400,0x10);
      if (bVar2) {
        *plStack_400 = *plStack_400 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_410 = plStack_400;
  pcVar6 = section_00000108.segname;
  qStack_408 = param_1;
  __Znwm();
  auStack_2e8[0] = 0;
  qStack_270 = qStack_2f0;
  FUN_0033d5ec(auStack_2e0,auStack_360);
  plStack_3f0 = plStack_410;
  qStack_278 = qStack_2f8;
  plStack_410 = (long *)0x0;
  qStack_3e8 = qStack_408;
  pqVar10 = (qword *)(pcVar6 + 0x10);
  *(qword *)(pcVar6 + 0x18) = 0;
  *pqVar10 = 0;
  *(undefined8 *)(pcVar6 + 0x48) = 0;
  *(undefined8 *)(pcVar6 + 0x40) = 0;
  *(undefined8 *)(pcVar6 + 0x58) = 0;
  *(undefined8 *)(pcVar6 + 0x50) = 0;
  *(undefined8 *)(pcVar6 + 0x28) = 0;
  *(undefined8 *)(pcVar6 + 0x20) = 0;
  *(undefined8 *)(pcVar6 + 0x38) = 0;
  *(undefined8 *)(pcVar6 + 0x30) = 0;
  *(undefined ***)pcVar6 = &PTR_FUN_009e0558;
  *(undefined ***)(pcVar6 + 8) = &PTR____cxa_pure_virtual_009e05a0;
  FUN_00339d50(pqVar10);
  *(undefined4 *)(pcVar6 + 0x50) = 1;
  pcVar6[0x54] = 0;
  *(undefined8 *)(pcVar6 + 0x58) = 0;
  *(undefined ***)pcVar6 = &PTR_FUN_009db468;
  *(undefined ***)(pcVar6 + 8) = &PTR_DAT_009db4c0;
  *(undefined8 *)(pcVar6 + 0x68) = 0;
  *(undefined8 *)(pcVar6 + 0x60) = 0;
  *(undefined8 *)(pcVar6 + 0x78) = 0;
  *(undefined8 *)(pcVar6 + 0x70) = 0;
  *(qword *)(pcVar6 + 0x88) = qStack_3e8;
  *(long **)(pcVar6 + 0x80) = plStack_3f0;
  plStack_3f0 = (long *)0x0;
  *(undefined2 *)(pcVar6 + 0x90) = 0;
  func_0x00339d8c(pqVar10);
  auStack_268[0] = 0;
  qStack_1f0 = qStack_270;
  FUN_0033d5ec(auStack_260,auStack_2e0);
  qStack_1f8 = qStack_278;
  auStack_1e8[0] = 0;
  qStack_170 = qStack_1f0;
  puVar7 = auStack_1e0;
  FUN_0033d5ec(auStack_1e0,auStack_260);
  qStack_178 = qStack_1f8;
  FUN_003d3424();
  uVar15 = *puVar7;
  FUN_003d3424();
  *puVar7 = pcVar6;
  auStack_e8[0] = 0;
  qStack_70 = qStack_170;
  FUN_0033d5ec(auStack_e0,auStack_1e0);
  qStack_78 = qStack_178;
  auStack_168[0] = 0;
  puVar12 = auStack_160;
  qStack_f0 = qStack_70;
  FUN_0033d5ec(puVar12,auStack_e0);
  qStack_f8 = qStack_78;
  FUN_0033c4c4(auStack_e8);
  pcVar6[0x98] = 0;
  *(qword *)(pcVar6 + 0x110) = qStack_f0;
  FUN_0033d5ec((long)pcVar6 + 0xa0);
  iVar9 = (int)puVar12;
  *(qword *)(pcVar6 + 0x108) = qStack_f8;
  FUN_0033c4c4(auStack_168);
  pcVar3 = pcVar6;
  FUN_0033d9cc(&uStack_3e0);
  FUN_003d3424();
  *(undefined8 *)pcVar3 = uVar15;
  FUN_0033c4c4(auStack_1e8);
  FUN_0033c4c4(auStack_268);
  func_0x00339da8(pqVar10);
  uVar5 = uStack_3e0;
  if (cStack_3d8 != '\0') {
    uStack_3e0 = 0x36;
    if (uVar5 == 0) {
      FUN_0033ce58(*(undefined8 *)(pcVar6 + 0x88));
    }
    else if ((uVar5 & 1) != 0) {
      FUN_0055293c();
    }
  }
  plVar13 = (long *)(param_1 + 0x30);
  FUN_0033e204(&uStack_3e0);
  FUN_0033d4a8(&plStack_3f0);
  FUN_0033c4c4(auStack_2e8);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      (*(code *)**(undefined8 **)pcVar6)(pcVar6);
      break;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *plVar13 = (long)pcVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_0033d4a8(&plStack_410);
  FUN_0033c4c4(auStack_368);
  FUN_003d3598(auStack_3d0);
LAB_0033c364:
  pplVar8 = &plStack_400;
  FUN_0033d4a8();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return pplVar8;
  }
  ___stack_chk_fail();
  if (iVar9 != 0) {
    func_0x0040cf10();
    FUN_0033d4a8(&plStack_400);
  }
  __Unwind_Resume();
  if (((ulong)*pplVar8 & 1) != 0) {
    FUN_0055293c();
  }
  return pplVar8;
}



/* Entry: 0033c494; end: 0033c4c3;  */

ulong * FUN_0033c494(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 0033c4c4; end: 0033c51b;  */

char * FUN_0033c4c4(char *param_1)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      FUN_0033d674(param_1 + 8);
      return param_1;
    }
    if (cVar1 != '\0') {
      _abort();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x33c518);
      (*pcVar2)();
    }
  }
  FUN_003d3598(param_1 + 8);
  return param_1;
}



/* Entry: 0033c51c; end: 0033c647;  */

void FUN_0033c51c(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined **ppuVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x003401f0(*(undefined8 *)(param_2 + 0x18));
  plVar5 = *(long **)(param_5 + 0x18);
  uStack_60 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x30))((ulong)&uStack_60 | 8,plVar5,&uStack_50);
    ppuVar6 = &PTR___tlv_bootstrap_00b2c390;
    (*(code *)PTR___tlv_bootstrap_00b2c390)();
    puVar7 = (ulong *)*ppuVar6;
    do {
      uVar8 = *puVar7;
      uVar1 = uVar8 + 0x20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar3) {
        *puVar7 = uVar1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7[2] < uVar1) {
      func_0x003d6048(puVar7,0x20);
    }
    else {
      puVar7 = (ulong *)((long)puVar7 + uVar8 + 0x30);
    }
    *puVar7 = (ulong)&PTR_LAB_009db548;
    puVar7[2] = (ulong)ppuStack_58;
    puVar7[1] = uStack_60;
    uStack_60 = 0;
    ppuStack_58 = &PTR_PTR_00afa4e0;
    *param_1 = puVar7;
    (**(code **)(PTR_PTR_00afa4e0 + 8))(&PTR_PTR_00afa4e0);
    FUN_0033e354(&uStack_60,0);
    return;
  }
  FUN_0033e390();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x33c61c);
  (*pcVar4)();
}



/* Entry: 0033c648; end: 0033c687;  */

long FUN_0033c648(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 8))();
  FUN_0033e354(param_1,0);
  return param_1;
}



/* Entry: 0033c688; end: 0033c6af;  */

undefined8 FUN_0033c688(long *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x20) != 0) {
    (**(code **)(*param_1 + 0x30))();
  }
  return 0;
}



/* Entry: 0033c6b0; end: 0033ce57;  */

void FUN_0033c6b0(long param_1)

{
  long **pplVar1;
  long **pplVar2;
  long **pplVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  qword *pqVar7;
  qword *pqVar8;
  long **pplVar9;
  ulong uVar10;
  int iVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  dword *pdVar16;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined1 uStack_589;
  ulong uStack_588;
  ulong uStack_580;
  undefined8 *puStack_578;
  long *plStack_570;
  long **pplStack_568;
  undefined1 *puStack_560;
  code *pcStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  qword qStack_538;
  undefined1 *puStack_530;
  dword *pdStack_528;
  long lStack_520;
  undefined1 *puStack_518;
  undefined8 *puStack_510;
  undefined1 *puStack_508;
  long *plStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long *plStack_4d8;
  undefined8 uStack_4d0;
  long **pplStack_4c8;
  long *plStack_4c0;
  long lStack_4b8;
  ulong uStack_4b0;
  char cStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long **pplStack_490;
  undefined1 auStack_488 [8];
  undefined1 auStack_480 [104];
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long **pplStack_3f8;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [104];
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long **pplStack_360;
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [104];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long **pplStack_2c8;
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [104];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long **pplStack_230;
  undefined1 auStack_228 [8];
  qword aqStack_220 [13];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long **pplStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [104];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long **pplStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [104];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_4d0 = *(undefined8 *)(param_1 + 0x18);
  pplStack_4c8 = *(long ***)(param_1 + 0x20);
  if (pplStack_4c8 != (long **)0x0) {
    pplVar1 = pplStack_4c8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
      if (bVar5) {
        *pplVar1 = (long *)((long)*pplVar1 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_4d8 = *(long **)(param_1 + 8);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plStack_4d8,0x10);
    if (bVar5) {
      *plStack_4d8 = *plStack_4d8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uStack_4f0 = *(undefined8 *)(param_1 + 0x10);
  if (pplStack_4c8 != (long **)0x0) {
    pplVar1 = pplStack_4c8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
      if (bVar5) {
        *pplVar1 = (long *)((long)*pplVar1 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_108 = 0;
  pplStack_100 = (long **)0x0;
  puStack_508 = auStack_3f0;
  uStack_408 = uStack_4f0;
  uStack_400 = uStack_4d0;
  pplStack_3f8 = pplStack_4c8;
  uStack_110 = uStack_4f0;
  FUN_0033e430(&uStack_408);
  uStack_4a0 = uStack_408;
  pplStack_490 = pplStack_3f8;
  uStack_498 = uStack_400;
  uStack_400 = 0;
  pplStack_3f8 = (long **)0x0;
  puStack_518 = auStack_488;
  auStack_488[0] = 0;
  FUN_0033d5ec(auStack_480,auStack_3e8);
  uStack_410 = uStack_378;
  uStack_418 = uStack_380;
  uStack_380 = 0;
  uStack_378 = 0;
  if (plStack_4d8 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plStack_4d8,0x10);
      if (bVar5) {
        *plStack_4d8 = *plStack_4d8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puStack_548 = &uStack_498;
  plStack_500 = plStack_4d8;
  pqVar7 = &section_00000108.size;
  puStack_540 = &uStack_400;
  lStack_520 = param_1;
  lStack_4f8 = param_1;
  __Znwm();
  uStack_370 = uStack_4a0;
  puStack_510 = &uStack_368;
  pplStack_360 = pplStack_490;
  uStack_368 = uStack_498;
  uStack_498 = 0;
  pplStack_490 = (long **)0x0;
  auStack_358[0] = 0;
  FUN_0033d5ec(auStack_350,auStack_480);
  plStack_4c0 = plStack_500;
  uStack_2e0 = uStack_410;
  uStack_2e8 = uStack_418;
  uStack_418 = 0;
  uStack_410 = 0;
  plStack_500 = (long *)0x0;
  lStack_4b8 = lStack_4f8;
  pdVar16 = (dword *)(pqVar7 + 2);
  pqVar7[3] = 0;
  *(undefined8 *)pdVar16 = 0;
  pqVar7[9] = 0;
  pqVar7[8] = 0;
  pqVar7[0xb] = 0;
  pqVar7[10] = 0;
  pqVar7[5] = 0;
  pqVar7[4] = 0;
  pqVar7[7] = 0;
  pqVar7[6] = 0;
  *pqVar7 = (qword)&PTR_FUN_009e0558;
  pqVar7[1] = (qword)&PTR____cxa_pure_virtual_009e05a0;
  puStack_530 = auStack_358;
  FUN_00339d50(pdVar16);
  *(undefined4 *)(pqVar7 + 10) = 1;
  *(undefined1 *)((long)pqVar7 + 0x54) = 0;
  pqVar7[0xb] = 0;
  *pqVar7 = (qword)&PTR_FUN_009db5c8;
  pqVar7[1] = (qword)&PTR_DAT_009db620;
  pqVar7[0xd] = 0;
  pqVar7[0xc] = 0;
  pqVar7[0xf] = 0;
  pqVar7[0xe] = 0;
  puStack_550 = pqVar7 + 0x10;
  pqVar7[0x11] = lStack_4b8;
  *puStack_550 = plStack_4c0;
  plStack_4c0 = (long *)0x0;
  *(undefined2 *)(pqVar7 + 0x12) = 0;
  pdStack_528 = pdVar16;
  func_0x00339d8c(pdVar16);
  puVar6 = puStack_510;
  uStack_2d8 = uStack_370;
  pplStack_2c8 = pplStack_360;
  uStack_2d0 = uStack_368;
  *puStack_510 = 0;
  puVar6[1] = 0;
  auStack_2c0[0] = 0;
  FUN_0033d5ec(auStack_2b8,auStack_350);
  uStack_248 = uStack_2e0;
  uStack_250 = uStack_2e8;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_240 = uStack_2d8;
  pplStack_230 = pplStack_2c8;
  uStack_238 = uStack_2d0;
  uStack_2d0 = 0;
  pplStack_2c8 = (long **)0x0;
  auStack_228[0] = 0;
  pqVar8 = aqStack_220;
  FUN_0033d5ec(aqStack_220,auStack_2b8);
  uStack_1b0 = uStack_248;
  uStack_1b8 = uStack_250;
  uStack_248 = 0;
  uStack_250 = 0;
  FUN_003d3424();
  qStack_538 = *pqVar8;
  FUN_003d3424();
  *pqVar8 = (qword)pqVar7;
  uStack_110 = uStack_240;
  pplStack_100 = pplStack_230;
  uStack_108 = uStack_238;
  pplStack_230 = (long **)0x0;
  uStack_238 = 0;
  auStack_f8[0] = 0;
  FUN_0033d5ec(auStack_f0,aqStack_220);
  uStack_80 = uStack_1b0;
  uStack_88 = uStack_1b8;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1a8 = uStack_110;
  pplStack_198 = pplStack_100;
  uStack_1a0 = uStack_108;
  uStack_108 = 0;
  pplStack_100 = (long **)0x0;
  puVar12 = auStack_188;
  auStack_190[0] = 0;
  FUN_0033d5ec(puVar12,auStack_f0);
  uStack_118 = uStack_80;
  uStack_120 = uStack_88;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_0033e574(auStack_f8);
  pplVar1 = pplStack_100;
  if (pplStack_100 != (long **)0x0) {
    plVar15 = (long *)(pplStack_100 + 1);
    do {
      lVar13 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)((long)*pplStack_100 + 0x10))(pplStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar1);
    }
  }
  pqVar7[0x13] = uStack_1a8;
  pqVar7[0x15] = (qword)pplStack_198;
  pqVar7[0x14] = uStack_1a0;
  uStack_1a0 = 0;
  pplStack_198 = (long **)0x0;
  *(undefined1 *)(pqVar7 + 0x16) = 0;
  FUN_0033d5ec(pqVar7 + 0x17);
  iVar11 = (int)puVar12;
  pqVar7[0x25] = uStack_118;
  pqVar7[0x24] = uStack_120;
  uStack_120 = 0;
  uStack_118 = 0;
  FUN_0033e574(auStack_190);
  pplVar1 = pplStack_198;
  lVar13 = lStack_520;
  pdVar16 = pdStack_528;
  if (pplStack_198 != (long **)0x0) {
    plVar15 = (long *)(pplStack_198 + 1);
    do {
      lVar14 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)((long)*pplStack_198 + 0x10))(pplStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar1);
    }
  }
  pqVar8 = pqVar7;
  FUN_0033e874(&uStack_4b0);
  FUN_003d3424();
  *pqVar8 = qStack_538;
  FUN_0033e574(auStack_228);
  pplVar9 = pplStack_230;
  if (pplStack_230 != (long **)0x0) {
    plVar15 = (long *)(pplStack_230 + 1);
    do {
      lVar14 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)((long)*pplStack_230 + 0x10))(pplStack_230);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar9);
    }
  }
  FUN_0033e574(auStack_2c0);
  pplVar9 = pplStack_2c8;
  if (pplStack_2c8 != (long **)0x0) {
    plVar15 = (long *)(pplStack_2c8 + 1);
    do {
      lVar14 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)((long)*pplStack_2c8 + 0x10))(pplStack_2c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar9);
    }
  }
  func_0x00339da8(pdVar16);
  uVar10 = uStack_4b0;
  if (cStack_4a8 != '\0') {
    uStack_4b0 = 0x36;
    if (uVar10 == 0) {
      FUN_0033ce58(pqVar7[0x11]);
    }
    else if ((uVar10 & 1) != 0) {
      FUN_0055293c();
    }
  }
  FUN_0033e204(&uStack_4b0);
  FUN_0033d4a8(&plStack_4c0);
  FUN_0033e574(puStack_530);
  pplVar9 = pplStack_360;
  if (pplStack_360 != (long **)0x0) {
    pplVar2 = pplStack_360 + 1;
    do {
      plVar15 = *pplVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar2,0x10);
      if (bVar5) {
        *pplVar2 = (long *)((long)plVar15 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (plVar15 == (long *)0x0) {
      (*(code *)(*pplStack_360)[2])(pplStack_360);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar9);
    }
  }
  plVar15 = (long *)(lVar13 + 0x28);
  do {
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      (**(code **)*pqVar7)(pqVar7);
      break;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = (long)pqVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0033d4a8(&plStack_500);
  FUN_0033e574(puStack_518);
  pplVar9 = pplStack_490;
  if (pplStack_490 != (long **)0x0) {
    plVar15 = (long *)(pplStack_490 + 1);
    do {
      lVar13 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)((long)*pplStack_490 + 0x10))(pplStack_490);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar9);
    }
  }
  FUN_0033e574(puStack_508);
  pplVar9 = pplStack_3f8;
  if (pplStack_3f8 != (long **)0x0) {
    plVar15 = (long *)(pplStack_3f8 + 1);
    do {
      lVar13 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)((long)*pplStack_3f8 + 0x10))(pplStack_3f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar9);
    }
  }
  pplVar9 = &plStack_4d8;
  FUN_0033d4a8();
  pplVar2 = pplStack_4c8;
  if (pplStack_4c8 != (long **)0x0) {
    pplVar3 = pplStack_4c8 + 1;
    do {
      plVar15 = *pplVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pplVar3,0x10);
      if (bVar5) {
        *pplVar3 = (long *)((long)plVar15 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (plVar15 == (long *)0x0) {
      (*(code *)(*pplStack_4c8)[2])(pplStack_4c8);
      pplVar9 = pplVar2;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar11 != 0) {
    func_0x0040cf10();
    FUN_0033d4a8(&plStack_4c0);
    FUN_0033e574(puStack_530);
    FUN_0033d4f0(puStack_510);
    __ZdlPv(pqVar7);
    FUN_0033d4a8(&plStack_500);
    FUN_0033e574(puStack_518);
    FUN_0033d4f0(puStack_548);
    FUN_0033e574(puStack_508);
    FUN_0033d4f0(puStack_540);
    FUN_0033d4a8(&plStack_4d8);
    FUN_0033d4f0(&uStack_4d0);
  }
  __Unwind_Resume();
  plStack_570 = (long *)pplVar1;
  pplStack_568 = pplVar2;
  pcStack_558 = FUN_0033ce58;
  lVar13 = 0;
  puStack_560 = &stack0xfffffffffffffff0;
  FUN_00400ab8();
  uStack_5a0 = 0;
  uStack_598 = 0;
  uStack_5a8 = 0;
  FUN_003b646c(&uStack_588,2,"enter idle",10,&uStack_589,&uStack_5a8);
  FUN_003be104(&uStack_580,&uStack_588,0xd,0);
  uVar10 = *(ulong *)(lVar13 + 0x20);
  if (uStack_580 != uVar10) {
    *(ulong *)(lVar13 + 0x20) = uStack_580;
    uStack_580 = 0x36;
    if ((uVar10 & 1) == 0) goto LAB_0033cee4;
    FUN_0055293c();
    uVar10 = uStack_580;
  }
  if ((uVar10 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0033cee4:
  if ((uStack_588 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_578 = &uStack_5a8;
  FUN_0033d548(&puStack_578);
  plVar15 = pplVar9[1];
  func_0x003a6548(plVar15,0);
  (**(code **)(*plVar15 + 0x10))();
  return;
}



/* Entry: 0033ce58; end: 0033cf6f;  */

void FUN_0033ce58(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 *puStack_28;
  
  lVar1 = 0;
  FUN_00400ab8();
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  FUN_003b646c(&uStack_38,2,"enter idle",10,&uStack_39,&uStack_58);
  FUN_003be104(&uStack_30,&uStack_38,0xd,0);
  uVar2 = *(ulong *)(lVar1 + 0x20);
  if (uStack_30 != uVar2) {
    *(ulong *)(lVar1 + 0x20) = uStack_30;
    uStack_30 = 0x36;
    if ((uVar2 & 1) == 0) goto LAB_0033cee4;
    FUN_0055293c();
    uVar2 = uStack_30;
  }
  if ((uVar2 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0033cee4:
  if ((uStack_38 & 1) != 0) {
    FUN_0055293c();
  }
  puStack_28 = &uStack_58;
  FUN_0033d548(&puStack_28);
  plVar3 = *(long **)(param_1 + 8);
  func_0x003a6548(plVar3,0);
  (**(code **)(*plVar3 + 0x10))();
  return;
}



/* Entry: 0033cf70; end: 0033d0bb;  */

void FUN_0033cf70(long param_1)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **appuStack_68 [3];
  undefined ***pppuStack_50;
  undefined **appuStack_48 [3];
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  appuStack_48[0] = &PTR_FUN_009db860;
  pppuStack_30 = appuStack_48;
  FUN_003f517c(param_1 + 0x18,0,&UNK_00002710,appuStack_48);
  if (pppuStack_30 == appuStack_48) {
    lVar3 = 4;
    pppuVar1 = appuStack_48;
LAB_0033cfdc:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 5;
    pppuVar1 = pppuStack_30;
    goto LAB_0033cfdc;
  }
  appuStack_68[0] = &PTR_FUN_009db8f0;
  pppuStack_50 = appuStack_68;
  FUN_003f517c(param_1 + 0x18,4,&UNK_00002710,appuStack_68);
  if (pppuStack_50 == appuStack_68) {
    lVar3 = 4;
    pppuVar1 = appuStack_68;
LAB_0033d030:
    (*(code *)(*pppuVar1)[lVar3])();
  }
  else {
    pppuVar1 = pppuStack_50;
    if (pppuStack_50 != (undefined ***)0x0) {
      lVar3 = 5;
      goto LAB_0033d030;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_50 == appuStack_68) {
    lVar3 = 4;
    pppuVar2 = appuStack_68;
  }
  else {
    if (pppuStack_50 == (undefined ***)0x0) goto LAB_0033d0b4;
    lVar3 = 5;
    pppuVar2 = pppuStack_50;
  }
  (*(code *)(*pppuVar2)[lVar3])();
LAB_0033d0b4:
  __Unwind_Resume(pppuVar1);
  return;
}



/* Entry: 0033d0bc; end: 0033d0cb;  */

void FUN_0033d0bc(void)

{
  return;
}


