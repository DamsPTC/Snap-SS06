/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4d999c; end: 10b4d99b3;  */

undefined1  [16] FUN_10b4d999c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  func_0x000104bdc2c8();
  plVar1 = param_1;
  FUN_10b4d9c74();
  lVar3 = *plVar1;
  plVar1 = param_1;
  FUN_10b4d9c74();
  lVar2 = (long)*(char *)*plVar1;
  FUN_10b4d9a5c(lVar2);
  FUN_10b4d9c74();
  auVar5._0_8_ = *param_1;
  auVar5._8_8_ = lVar3 + lVar2;
  return auVar5;
}



/* Entry: 10b4d99b4; end: 10b4d9a0b;  */

undefined1  [16] FUN_10b4d99b4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  plVar1 = param_1;
  FUN_10b4d9c74();
  lVar3 = *plVar1;
  plVar1 = param_1;
  FUN_10b4d9c74();
  lVar2 = (long)*(char *)*plVar1;
  FUN_10b4d9a5c(lVar2);
  FUN_10b4d9c74();
  auVar4._0_8_ = *param_1;
  auVar4._8_8_ = lVar3 + lVar2;
  return auVar4;
}



/* Entry: 10b4d9a0c; end: 10b4d9a5b;  */

void FUN_10b4d9a0c(long *param_1,long *param_2)

{
  undefined **ppuVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
  pcVar2 = (char *)*param_2;
  lVar4 = param_2[1];
  lVar3 = (long)*pcVar2;
  FUN_10b4d9a5c();
  lVar4 = lVar4 - (long)pcVar2;
  ppuVar1 = (undefined **)(pcVar2 + lVar3);
  if (lVar3 < lVar4) {
    pcVar2 = (char *)0x0;
  }
  if (lVar3 < lVar4) {
    ppuVar1 = &PTR_PTR_110cf1250;
  }
  *param_1 = (long)pcVar2;
  param_1[1] = (long)ppuVar1;
  *(bool *)(param_1 + 2) = lVar4 <= lVar3;
  return;
}



/* Entry: 10b4d9a5c; end: 10b4d9abf;  */

undefined8 FUN_10b4d9a5c(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 4;
  if ((param_1 & 0xf8) != 0xf0) {
    uVar1 = 0;
  }
  uVar2 = 3;
  if ((param_1 & 0xf0) != 0xe0) {
    uVar2 = uVar1;
  }
  uVar1 = 2;
  if ((param_1 & 0xe0) != 0xc0) {
    uVar1 = uVar2;
  }
  uVar2 = 1;
  if ((param_1 & 0x80000000) != 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10b4d9ac0; end: 10b4d9c73;  */

void FUN_10b4d9ac0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  func_0x00010b4d9b10(&uStack_38,*param_3);
  if (cStack_28 == '\x01') {
    uStack_30 = param_3[1];
    uStack_38 = *param_3;
  }
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  *(bool *)(param_1 + 2) = cStack_28 == '\x01';
  return;
}



/* Entry: 10b4d9c74; end: 10b4d9c8b;  */

void FUN_10b4d9c74(undefined8 *param_1)

{
  undefined8 *extraout_x8;
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char cStack_38;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if (*(char *)(param_1 + 2) == '\x01') {
    func_0x00010b4d9b10(&uStack_48,*param_1);
    if (cStack_38 != '\x01') {
      extraout_x8[1] = CONCAT44(uStack_3c,uStack_40);
      *extraout_x8 = uStack_48;
    }
    else {
      *(undefined4 *)extraout_x8 = uStack_40;
    }
    *(bool *)(extraout_x8 + 2) = cStack_38 == '\x01';
    return;
  }
  uVar1 = *param_1;
  extraout_x8[1] = param_1[1];
  *extraout_x8 = uVar1;
  *(undefined1 *)(extraout_x8 + 2) = 0;
  return;
}



/* Entry: 10b4d9c8c; end: 10b4d9cb3;  */

void FUN_10b4d9c8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char cStack_28;
  
  if (*(char *)(param_2 + 2) == '\x01') {
    func_0x00010b4d9b10(&uStack_38,*param_2);
    if (cStack_28 != '\x01') {
      param_1[1] = CONCAT44(uStack_2c,uStack_30);
      *param_1 = uStack_38;
    }
    else {
      *(undefined4 *)param_1 = uStack_30;
    }
    *(bool *)(param_1 + 2) = cStack_28 == '\x01';
    return;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 10b4d9cb4; end: 10b4d9d0b;  */

void FUN_10b4d9cb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char cStack_28;
  
  func_0x00010b4d9b10(&uStack_38,param_2);
  if (cStack_28 != '\x01') {
    param_1[1] = CONCAT44(uStack_2c,uStack_30);
    *param_1 = uStack_38;
  }
  else {
    *(undefined4 *)param_1 = uStack_30;
  }
  *(bool *)(param_1 + 2) = cStack_28 == '\x01';
  return;
}



/* Entry: 10b4d9d0c; end: 10b4d9d67;  */

void FUN_10b4d9d0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [16];
  char cStack_28;
  
  FUN_10b4d97f8(auStack_38);
  if (cStack_28 == '\x01') {
    FUN_10b4d9d68(param_1);
    FUN_10b4d9d80();
    lVar1 = param_1;
    FUN_10b4d9920(param_1,param_1 + 0x28);
    if ((int)lVar1 == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10b4d9d68; end: 10b4d9d7f;  */

long FUN_10b4d9d68(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  FUN_10b4d9da4();
  return param_1;
}



/* Entry: 10b4d9d80; end: 10b4d9da3;  */

undefined8 FUN_10b4d9d80(undefined8 param_1)

{
  FUN_10b4d9da4();
  return param_1;
}



/* Entry: 10b4d9da4; end: 10b4d9e0b;  */

void FUN_10b4d9da4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = param_1;
  FUN_10b4d9e0c();
  plVar2 = param_1;
  FUN_10b4d9e0c();
  lVar3 = (long)*(char *)*plVar2;
  FUN_10b4d9a5c();
  *plVar1 = *plVar1 + lVar3;
  if (((char)param_1[1] == (char)param_1[3] && (char)param_1[1] != '\0') && (*param_1 == param_1[2])
     ) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



/* Entry: 10b4d9e0c; end: 10b4d9e23;  */

void FUN_10b4d9e0c(byte *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint auStack_58 [4];
  undefined1 uStack_48;
  
  if ((param_1[8] & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  uVar1 = *(uint *)*param_2;
  uStack_48 = 1;
  auStack_58[0] = uVar1;
  FUN_10b4d9f8c(auStack_58);
  if (0x10 < uVar1 >> 0x10 || (uVar1 & 0xf800) == 0xd800) goto LAB_10b4d9e74;
  if (uVar1 < 0x80) {
    *param_1 = (byte)uVar1;
LAB_10b4d9f38:
    bVar3 = 1;
  }
  else {
    if (uVar1 < 0x800) {
      if (*(int *)(param_2 + 2) == 1) goto LAB_10b4d9f14;
      if (*(int *)(param_2 + 2) == 0) {
        bVar3 = (byte)(uVar1 >> 6) | 0xc0;
        goto LAB_10b4d9f34;
      }
    }
    else {
      iVar2 = *(int *)(param_2 + 2);
      if (uVar1 >> 0x10 != 0) {
        switch(iVar2) {
        case 0:
          bVar3 = (byte)(uVar1 >> 0x12) | 0xf0;
          break;
        case 1:
          bVar3 = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
          break;
        case 2:
LAB_10b4d9f20:
          bVar3 = (byte)(uVar1 >> 6) & 0x3f | 0x80;
          break;
        case 3:
          goto LAB_10b4d9f14;
        default:
          goto LAB_10b4d9e74;
        }
LAB_10b4d9f34:
        *param_1 = bVar3;
        goto LAB_10b4d9f38;
      }
      if (iVar2 == 2) {
LAB_10b4d9f14:
        bVar3 = (byte)uVar1 & 0x3f | 0x80;
        goto LAB_10b4d9f34;
      }
      if (iVar2 == 1) goto LAB_10b4d9f20;
      if (iVar2 == 0) {
        bVar3 = (byte)(uVar1 >> 0xc) | 0xe0;
        goto LAB_10b4d9f34;
      }
    }
LAB_10b4d9e74:
    bVar3 = 0;
    param_1[0] = 3;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined ***)(param_1 + 8) = &PTR_PTR_110cf1250;
  }
  param_1[0x10] = bVar3;
  return;
}



/* Entry: 10b4d9e24; end: 10b4d9f57;  */

void FUN_10b4d9e24(byte *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint auStack_48 [4];
  undefined1 uStack_38;
  
  uVar1 = *(uint *)*param_2;
  uStack_38 = 1;
  auStack_48[0] = uVar1;
  FUN_10b4d9f8c(auStack_48);
  if (0x10 < uVar1 >> 0x10 || (uVar1 & 0xf800) == 0xd800) goto LAB_10b4d9e74;
  if (uVar1 < 0x80) {
    *param_1 = (byte)uVar1;
LAB_10b4d9f38:
    bVar3 = 1;
  }
  else {
    if (uVar1 < 0x800) {
      if (*(int *)(param_2 + 2) == 1) goto LAB_10b4d9f14;
      if (*(int *)(param_2 + 2) == 0) {
        bVar3 = (byte)(uVar1 >> 6) | 0xc0;
        goto LAB_10b4d9f34;
      }
    }
    else {
      iVar2 = *(int *)(param_2 + 2);
      if (uVar1 >> 0x10 != 0) {
        switch(iVar2) {
        case 0:
          bVar3 = (byte)(uVar1 >> 0x12) | 0xf0;
          break;
        case 1:
          bVar3 = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
          break;
        case 2:
LAB_10b4d9f20:
          bVar3 = (byte)(uVar1 >> 6) & 0x3f | 0x80;
          break;
        case 3:
          goto LAB_10b4d9f14;
        default:
          goto LAB_10b4d9e74;
        }
LAB_10b4d9f34:
        *param_1 = bVar3;
        goto LAB_10b4d9f38;
      }
      if (iVar2 == 2) {
LAB_10b4d9f14:
        bVar3 = (byte)uVar1 & 0x3f | 0x80;
        goto LAB_10b4d9f34;
      }
      if (iVar2 == 1) goto LAB_10b4d9f20;
      if (iVar2 == 0) {
        bVar3 = (byte)(uVar1 >> 0xc) | 0xe0;
        goto LAB_10b4d9f34;
      }
    }
LAB_10b4d9e74:
    bVar3 = 0;
    param_1[0] = 3;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined ***)(param_1 + 8) = &PTR_PTR_110cf1250;
  }
  param_1[0x10] = bVar3;
  return;
}



/* Entry: 10b4d9f58; end: 10b4d9f8b;  */

void FUN_10b4d9f58(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  FUN_10b4d9fc0();
  func_0x00010b4da034();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b4d9f84);
  (*pcVar1)();
}



/* Entry: 10b4d9f8c; end: 10b4d9fbf;  */

void FUN_10b4d9f8c(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  FUN_10b4d9fc0();
  func_0x00010b4da034();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b4d9fb8);
  (*pcVar1)();
}



/* Entry: 10b4d9fc0; end: 10b4da0cb;  */

void FUN_10b4d9fc0(void)

{
  return;
}



/* Entry: 10b4da0cc; end: 10b4da0df;  */

void FUN_10b4da0cc(void)

{
  __ZNSt3__114error_categoryD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4da0e0; end: 10b4da0eb;  */

undefined * FUN_10b4da0e0(void)

{
  return &DAT_10f51b330;
}



/* Entry: 10b4da0ec; end: 10b4da127;  */

void FUN_10b4da0ec(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  if (param_3 < 4) {
    puVar1 = (&PTR_DAT_110cf1270)[param_3];
  }
  else {
    puVar1 = &DAT_10f661992;
  }
  func_0x000107c278b8(param_1,puVar1);
  return;
}



/* Entry: 10b4da128; end: 10b4da1f7;  */

void FUN_10b4da128(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *param_2;
  iVar1 = 4;
  do {
    __ZNSt3__19to_stringEj(auStack_60,uVar2 & 0xff);
    func_0x000107c2831c(auStack_48,auStack_60,param_1);
    func_0x00010b4da820();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
    iVar1 = iVar1 + -1;
    if (iVar1 != 0) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_48,&UNK_10f774800,param_1);
      func_0x00010b4da820();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
    }
    uVar2 = (uint)((double)uVar2 / 256.0);
  } while (iVar1 != 0);
  return;
}



/* Entry: 10b4da1f8; end: 10b4da74f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4da1f8(ulong *param_1,char *param_2,long param_3)

{
  byte *******pppppppbVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  ulong uVar9;
  ulong uVar10;
  byte ******ppppppbVar11;
  ulong uVar12;
  long lVar13;
  byte ******ppppppbVar14;
  byte *****pppppbVar15;
  long *plVar16;
  undefined1 uVar17;
  int iVar18;
  long lVar19;
  byte ******ppppppbVar20;
  byte *******pppppppbVar21;
  ulong uVar22;
  byte *****pppppbVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbVar25;
  float fVar26;
  double dVar27;
  long alStack_178 [2];
  undefined1 uStack_168;
  byte ******ppppppbStack_160;
  byte ******ppppppbStack_158;
  undefined8 uStack_150;
  byte *******pppppppbStack_148;
  byte *******pppppppbStack_140;
  undefined8 uStack_138;
  byte *******pppppppbStack_130;
  byte ******ppppppbStack_128;
  ulong auStack_120 [19];
  ulong auStack_88 [3];
  
  auStack_88[1] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  pppppppbStack_148 = (byte *******)0x0;
  pppppppbStack_140 = (byte *******)0x0;
  uStack_138 = 0;
  pppppppbVar8 = (byte *******)&pppppppbStack_148;
  func_0x000107c2d138(pppppppbVar8);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if (*param_2 == '.') {
      pppppppbVar8 = (byte *******)&pppppppbStack_148;
      func_0x000107c2d138(pppppppbVar8);
    }
    else {
      pppppppbVar8 = pppppppbStack_140 + -3;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(pppppppbVar8);
    }
    param_2 = param_2 + 1;
  }
  ppppppbVar11 = (byte ******)(long)(char)*(byte *)((long)pppppppbStack_140 + -1);
  if ((long)ppppppbVar11 < 0) {
    ppppppbVar11 = pppppppbStack_140[-2];
  }
  if ((ppppppbVar11 == (byte ******)0x0) &&
     (1 < (ulong)(((long)pppppppbStack_140 - (long)pppppppbStack_148) / 0x18))) {
    pppppppbVar8 = (byte *******)&pppppppbStack_148;
    func_0x000107c30408(pppppppbVar8);
  }
  pppppppbVar7 = pppppppbStack_140;
  if ((ulong)(((long)pppppppbStack_140 - (long)pppppppbStack_148) / 0x18) < 5) {
    ppppppbStack_160 = (byte ******)0x0;
    ppppppbStack_158 = (byte ******)0x0;
    uStack_150 = 0;
    pppppppbVar24 = pppppppbStack_148;
LAB_10b4da2f0:
    ppppppbVar11 = ppppppbStack_160;
    uVar22 = 1;
    if (pppppppbVar24 != pppppppbVar7) {
      ppppppbVar11 = (byte ******)(long)(char)*(byte *)((long)pppppppbVar24 + 0x17);
      if ((long)ppppppbVar11 < 0) {
        ppppppbVar11 = pppppppbVar24[1];
        uVar17 = 0;
        if (ppppppbVar11 == (byte ******)0x0) goto LAB_10b4da6c8;
        pppppppbVar21 = (byte *******)*pppppppbVar24;
      }
      else {
        uVar17 = 0;
        pppppppbVar21 = pppppppbVar24;
        if (*(byte *)((long)pppppppbVar24 + 0x17) == 0) goto LAB_10b4da6c8;
      }
      pppppppbStack_130 = pppppppbVar21;
      ppppppbStack_128 = ppppppbVar11;
      if ((ppppppbVar11 < (byte ******)0x2) || (*(byte *)pppppppbVar21 != 0x30)) {
LAB_10b4da3b0:
        pppppppbVar1 = (byte *******)((long)pppppppbVar21 + (long)ppppppbVar11);
        pppppppbVar8 = pppppppbVar21;
        for (; pppppppbVar25 = pppppppbVar1, ppppppbVar11 != (byte ******)0x0;
            ppppppbVar11 = (byte ******)((long)ppppppbVar11 + -1)) {
          if (*(byte *)pppppppbVar8 != 0x30) {
            pppppppbVar25 = pppppppbVar8;
            if (*(byte *)pppppppbVar8 - 0x30 < 10) {
              lVar19 = 0;
              goto LAB_10b4da3e8;
            }
            break;
          }
          pppppppbVar8 = (byte *******)((long)pppppppbVar8 + 1);
        }
        if (pppppppbVar25 == pppppppbVar21) goto LAB_10b4da618;
LAB_10b4da434:
        lVar19 = 0;
        goto LAB_10b4da4d8;
      }
      lVar19 = (long)(char)*(byte *)((long)pppppppbVar21 + 1);
      __ZNSt3__16locale7classicEv();
      func_0x00010530d5e8(lVar19,pppppppbVar8);
      if ((int)lVar19 == 0x78) {
        uVar22 = 0x10;
        ppppppbVar11 = (byte ******)0x2;
      }
      else {
        if (*(byte *)pppppppbVar21 != 0x30) goto LAB_10b4da3b0;
        uVar22 = 8;
        ppppppbVar11 = (byte ******)0x1;
      }
      pppppppbVar8 = (byte *******)&pppppppbStack_130;
      func_0x000107c2810c(pppppppbVar8,ppppppbVar11,0xffffffffffffffff);
      pppppppbStack_130 = pppppppbVar8;
      ppppppbStack_128 = ppppppbVar11;
      if (ppppppbVar11 != (byte ******)0x0) {
        pppppppbVar1 = (byte *******)((long)pppppppbVar8 + (long)ppppppbVar11);
        pppppppbVar21 = pppppppbVar8;
        for (; pppppppbVar25 = pppppppbVar1, ppppppbVar11 != (byte ******)0x0;
            ppppppbVar11 = (byte ******)((long)ppppppbVar11 + -1)) {
          uVar9 = (ulong)(char)*(byte *)pppppppbVar21;
          if (*(byte *)pppppppbVar21 != 0x30) {
            FUN_10b4da7b0(uVar9,uVar22);
            pppppppbVar25 = pppppppbVar21;
            if ((uVar9 & 1) != 0) {
              lVar19 = 0;
              iVar18 = (int)uVar22;
              fVar26 = *(float *)(&UNK_10e5b4f48 + (ulong)(iVar18 - 2) * 4);
              uVar9 = (long)uVar9 >> 0x20;
              pppppppbVar25 = (byte *******)((long)pppppppbVar21 + (long)ppppppbVar11);
              goto LAB_10b4da554;
            }
            break;
          }
          pppppppbVar21 = (byte *******)((long)pppppppbVar21 + 1);
        }
        if (pppppppbVar25 != pppppppbVar8) goto LAB_10b4da434;
        goto LAB_10b4da618;
      }
      lVar19 = 0;
      goto LAB_10b4da4e8;
    }
    ppppppbVar20 = ppppppbStack_158 + -1;
    uVar22 = 3;
    ppppppbVar14 = ppppppbStack_160;
    do {
      if (ppppppbVar14 == ppppppbVar20) {
        pppppbVar15 = ppppppbStack_158[-1];
        dVar27 = (double)(5 - ((long)ppppppbStack_158 - (long)ppppppbStack_160 >> 3)) * 8.0;
        _exp2();
        if (pppppbVar15 < (byte *****)(long)dVar27) {
          uVar22 = 3;
          ppppppbStack_158 = ppppppbVar20;
          for (; ppppppbVar11 != ppppppbVar20; ppppppbVar11 = ppppppbVar11 + 1) {
            pppppbVar23 = *ppppppbVar11;
            dVar27 = (double)uVar22 * 8.0;
            _exp2();
            pppppbVar15 = (byte *****)((long)pppppbVar15 + (long)pppppbVar23 * (long)dVar27);
            uVar22 = uVar22 - 1;
          }
          uVar22 = (ulong)pppppbVar15 & 0xffffffff;
          uVar17 = 1;
        }
        else {
          uVar17 = 0;
          uVar22 = 3;
        }
        goto LAB_10b4da6c8;
      }
      pppppbVar15 = *ppppppbVar14;
      ppppppbVar14 = ppppppbVar14 + 1;
    } while (pppppbVar15 < (byte *****)0x100);
    uVar17 = 0;
LAB_10b4da6c8:
    func_0x000107c28374(&ppppppbStack_160);
  }
  else {
    uVar22 = 0;
    uVar17 = 0;
  }
  pppppppbVar8 = (byte *******)&pppppppbStack_148;
  func_0x000107c278a8(pppppppbVar8);
  *param_1 = uVar22;
  param_1[1] = (ulong)&PTR_PTR_110cf12d8;
  *(undefined1 *)(param_1 + 2) = uVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_88[1]) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c278a8(&pppppppbStack_148);
  __Unwind_Resume(pppppppbVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114error_categoryD2Ev_110346540)();
  return;
  while( true ) {
    pppppppbVar8 = (byte *******)((long)pppppppbVar8 + 1);
    auStack_88[lVar13] = (ulong)(byte)(bVar2 - 0x30);
    if ((lVar13 == -0x13) || (lVar19 = lVar13 + -1, (long)ppppppbVar11 + lVar13 + -1 == 0)) break;
LAB_10b4da3e8:
    lVar13 = lVar19;
    bVar2 = *(byte *)pppppppbVar8;
    if ((byte)(bVar2 - 0x3a) < 0xf6) {
      uVar22 = lVar13 + 0x14;
      goto LAB_10b4da440;
    }
  }
  uVar22 = lVar13 + 0x13;
LAB_10b4da440:
  uVar9 = -(uVar22 >> 0x1f & 1) & 0xfffffff800000000 | (uVar22 & 0xffffffff) << 3;
  uVar12 = *(ulong *)((long)auStack_120 + uVar9);
  plVar16 = (long *)&UNK_10e00f6f0;
  for (; uVar9 < 0x90; uVar9 = uVar9 + 8) {
    uVar12 = uVar12 + *plVar16 * *(long *)((long)auStack_120 + uVar9 + 8);
    plVar16 = plVar16 + 1;
  }
  uVar9 = auStack_88[0] *
          *(ulong *)(&UNK_10e00f6e8 + ((long)(0x1300000000 - (uVar22 << 0x20)) >> 0x1d));
  auVar3._8_8_ = 0;
  auVar3._0_8_ = auStack_88[0];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(ulong *)(&UNK_10e00f6e8 + ((long)(0x1300000000 - (uVar22 << 0x20)) >> 0x1d));
  pppppppbVar25 = (byte *******)((long)pppppppbVar8 - (ulong)(SUB168(auVar3 * auVar5,8) != 0));
  if (((pppppppbVar25 != pppppppbVar1) && (*(byte *)pppppppbVar25 - 0x30 < 10)) ||
     (CARRY8(uVar12,uVar9))) goto LAB_10b4da618;
  lVar19 = uVar9 + uVar12;
  goto LAB_10b4da4d8;
LAB_10b4da554:
  uVar12 = uVar9;
  if ((long)ppppppbVar11 + -1 == lVar19) goto LAB_10b4da5a4;
  uVar10 = (ulong)(char)*(byte *)((long)pppppppbVar21 + lVar19 + 1);
  FUN_10b4da7b0(uVar10,iVar18);
  if ((uVar10 & 1) == 0) {
    uVar10 = 0;
    pppppppbVar25 = (byte *******)((long)pppppppbVar21 + lVar19 + 1);
    goto LAB_10b4da5d8;
  }
  uVar12 = uVar9 * uVar22;
  uVar10 = (long)uVar10 >> 0x20;
  if (64.0 / fVar26 + -1.0 <= (float)(lVar19 + 1U & 0xffffffff)) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar9;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar22;
    pppppppbVar25 = (byte *******)((long)pppppppbVar21 + lVar19 + 2);
    if (SUB168(auVar4 * auVar6,8) != 0) {
      pppppppbVar25 = (byte *******)((long)pppppppbVar21 + lVar19 + 1);
    }
    goto LAB_10b4da5d8;
  }
  uVar9 = uVar12 + uVar10;
  lVar19 = lVar19 + 1;
  goto LAB_10b4da554;
LAB_10b4da5a4:
  uVar10 = 0;
LAB_10b4da5d8:
  if (pppppppbVar25 != pppppppbVar1) {
    uVar22 = (ulong)(char)*(byte *)pppppppbVar25;
    FUN_10b4da7b0(uVar22,iVar18);
    if ((uVar22 & 1) != 0) goto LAB_10b4da618;
  }
  if (CARRY8(uVar12,uVar10)) goto LAB_10b4da618;
  lVar19 = uVar10 + uVar12;
LAB_10b4da4d8:
  if ((byte *******)((long)pppppppbStack_130 + (long)ppppppbStack_128) == pppppppbVar25) {
LAB_10b4da4e8:
    uStack_168 = 1;
    pppppppbVar8 = &ppppppbStack_160;
    alStack_178[0] = lVar19;
    func_0x00010802e088(pppppppbVar8,alStack_178);
    pppppppbVar24 = pppppppbVar24 + 3;
    goto LAB_10b4da2f0;
  }
LAB_10b4da618:
  uVar17 = 0;
  uVar22 = 2;
  goto LAB_10b4da6c8;
}



/* Entry: 10b4da750; end: 10b4da753;  */

void FUN_10b4da750(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114error_categoryD2Ev_110346540)();
  return;
}



/* Entry: 10b4da754; end: 10b4da767;  */

void FUN_10b4da754(void)

{
  __ZNSt3__114error_categoryD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4da768; end: 10b4da773;  */

undefined * FUN_10b4da768(void)

{
  return &UNK_10f774802;
}



/* Entry: 10b4da774; end: 10b4da7af;  */

void FUN_10b4da774(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  if (param_3 < 4) {
    puVar1 = (&PTR_DAT_110cf12f8)[param_3];
  }
  else {
    puVar1 = &DAT_10f661992;
  }
  func_0x000107c278b8(param_1,puVar1);
  return;
}



/* Entry: 10b4da7b0; end: 10b4da82b;  */

undefined8 FUN_10b4da7b0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)((0x40 < param_1 && param_2 + 0x37 != param_1) &&
                (param_1 < 0x41 || param_1 <= (int)(param_2 + 0x37)));
  uVar1 = param_1 - 0x37;
  if (0x60 < param_1 && param_1 < (int)(param_2 + 0x57)) {
    uVar3 = 1;
    uVar1 = param_1 - 0x57;
  }
  if (param_1 - 0x30U < 10) {
    uVar3 = 1;
    uVar1 = param_1 - 0x30U;
  }
  uVar2 = (uint)(char)param_1;
  if (param_2 < 0xb) {
    uVar3 = (uint)((0x2f < (int)uVar2 && (param_2 | 0x30) != uVar2) &&
                  ((int)uVar2 < 0x30 || (int)uVar2 <= (int)(param_2 | 0x30)));
    uVar1 = uVar2 - 0x30;
  }
  return CONCAT44(uVar1,uVar3);
}



/* Entry: 10b4da82c; end: 10b4dabdf;  */

void FUN_10b4da82c(undefined8 *param_1,long param_2)

{
  short sVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uStack_1a0;
  ulong uStack_198;
  long lStack_188;
  ulong auStack_180 [32];
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  lVar14 = 0;
  plVar15 = (long *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar16 = 0x10;
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  uStack_70 = 0;
  plVar6 = (long *)0x0;
  plVar8 = (long *)0x0;
  bVar5 = false;
  do {
    sVar1 = *(short *)(param_2 + lVar14 * 2);
    plVar7 = plVar6;
    plVar9 = plVar8;
    if (sVar1 == 0) {
      if (bVar5) {
        plVar8[-1] = plVar8[-1] + 1;
      }
      else if (plVar8 < plVar15) {
        plVar9 = plVar8 + 2;
        *plVar8 = lVar14;
        plVar8[1] = 1;
      }
      else {
        lVar10 = (long)plVar8 - (long)plVar6;
        uVar12 = (lVar10 >> 4) + 1;
        if (uVar12 >> 0x3c != 0) {
          func_0x00010b4db908();
          FUN_10b4dafac();
LAB_10b4dab78:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10b4dab7c);
          (*pcVar3)();
        }
        uVar11 = (long)plVar15 - (long)plVar6 >> 3;
        if (uVar11 <= uVar12) {
          uVar11 = uVar12;
        }
        if (0x7fffffffffffffef < (ulong)((long)plVar15 - (long)plVar6)) {
          uVar11 = 0xfffffffffffffff;
        }
        if (uVar11 == 0) {
          lVar4 = 0;
        }
        else {
          if (uVar11 >> 0x3c != 0) {
            func_0x00010b4db908();
            func_0x000104bd35f4();
            goto LAB_10b4dab78;
          }
          lVar4 = uVar11 << 4;
          __Znwm();
        }
        plVar7 = (long *)(lVar4 + lVar10);
        plVar15 = (long *)(lVar4 + uVar11 * 0x10);
        *plVar7 = lVar14;
        plVar7[1] = 1;
        plVar9 = plVar7 + 2;
        plVar7 = plVar7 + (lVar10 >> 4) * -2;
        _memcpy(plVar7,plVar6,lVar10);
        if (plVar6 != (long *)0x0) {
          __ZdlPv(plVar6);
        }
      }
    }
    else if (bVar5) {
      lVar10 = -0x10;
      if (plVar8[-1] != 1) {
        lVar10 = 0;
      }
      plVar9 = (long *)((long)plVar8 + lVar10);
    }
    lVar14 = lVar14 + 1;
    lVar16 = lVar16 + -2;
    plVar6 = plVar7;
    plVar8 = plVar9;
    bVar5 = sVar1 == 0;
  } while (lVar16 != 0);
  func_0x00010b4db908();
  puVar2 = PTR___ZSt7nothrow_1103469d8;
  if ((plVar7 != plVar9) && (plVar9[-1] == 1)) {
    plVar9 = plVar9 + -2;
    plStack_78 = plVar9;
  }
  if (plVar7 == plVar9) {
    lVar14 = 0;
    pcVar13 = "::";
  }
  else {
    uVar11 = (long)plVar9 - (long)plVar7 >> 4;
    lStack_188 = 0;
    auStack_180[0] = 0;
    uVar12 = uVar11;
    if ((long)uVar11 < 1) {
      uVar12 = 0;
    }
    else {
      for (; uVar12 != 0; uVar12 = uVar12 >> 1) {
        lVar14 = uVar12 << 4;
        __ZnwmRKSt9nothrow_t(lVar14,puVar2);
        if (lVar14 != 0) goto LAB_10b4daa10;
      }
      lVar14 = 0;
LAB_10b4daa10:
      uStack_1a0 = 0;
      uStack_198 = uVar12;
      FUN_10b4db300(&lStack_188,lVar14);
      auStack_180[0] = uVar12;
      FUN_10b4db318(&uStack_1a0);
    }
    FUN_10b4db0d8(plVar7,plVar9,uVar11,lStack_188,uVar12);
    FUN_10b4db318(&lStack_188);
    lVar14 = *plVar7;
    pcVar13 = "::";
    if (lVar14 != 0) {
      pcVar13 = ":";
    }
  }
  bVar5 = false;
  lVar16 = 0;
  do {
    if (lVar16 == 8) {
      FUN_10b4dafc0(&uStack_80);
      return;
    }
    if ((bVar5) && (*(short *)(param_2 + lVar16 * 2) == 0)) {
LAB_10b4dab30:
      bVar5 = true;
    }
    else {
      if (plVar7 != plVar9 && lVar14 == lVar16) {
        func_0x000107c278b8(&lStack_188,pcVar13);
        func_0x000107c27fc4(param_1,&lStack_188);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_188);
        goto LAB_10b4dab30;
      }
      func_0x0001054901a8(&lStack_188);
      *(uint *)((long)auStack_180 + *(long *)(lStack_188 + -0x18)) =
           *(uint *)((long)auStack_180 + *(long *)(lStack_188 + -0x18)) & 0xffffffb5 | 8;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEt
                (&lStack_188,*(undefined2 *)(param_2 + lVar16 * 2));
      func_0x000105491b64(&uStack_1a0,auStack_180);
      func_0x000107c27fc4(param_1,&uStack_1a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1a0);
      if (lVar16 != 7) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,":");
      }
      func_0x000105490284(&lStack_188);
      bVar5 = false;
    }
    lVar16 = lVar16 + 1;
  } while( true );
}



/* Entry: 10b4dabe0; end: 10b4daf4b;  */

void FUN_10b4dabe0(ulong *param_1,char *param_2,long param_3)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  char *pcVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 uVar9;
  undefined1 extraout_w8_03;
  int iVar10;
  ulong extraout_x8;
  ulong uVar11;
  int iVar12;
  ulong extraout_x9;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  ulong unaff_x24;
  uint uVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong auStack_70 [2];
  
  auStack_70[0] = 0;
  auStack_70[1] = 0;
  if (param_3 != 0) {
    pcVar1 = param_2 + param_3;
    bVar7 = *param_2 == ':';
    if (!bVar7) {
      iVar10 = 0;
      pcVar14 = param_2;
LAB_10b4dac6c:
      puVar20 = auStack_70;
LAB_10b4dac78:
      uVar19 = (ulong)iVar10;
LAB_10b4dac80:
      if (pcVar14 == pcVar1) goto LAB_10b4daea8;
      if (uVar19 != 8) {
        if (*pcVar14 == ':') goto LAB_10b4dad48;
        lVar17 = 0;
        unaff_x24 = 0;
        while( true ) {
          pcVar8 = pcVar14 + lVar17;
          if (pcVar8 == pcVar1 || 3 < (uint)lVar17) break;
          pcVar15 = (char *)(long)*pcVar8;
          __ZNSt3__16locale7classicEv();
          FUN_10b4db070(pcVar15,param_2);
          param_2 = pcVar15;
          if ((int)pcVar15 == 0) goto LAB_10b4dad1c;
          pcVar16 = (char *)(long)*pcVar8;
          __ZNSt3__16locale7classicEv();
          func_0x00010530d5e8(pcVar16,pcVar15);
          pcVar8 = pcVar16;
          __ZNSt3__16locale7classicEv();
          param_2 = pcVar16;
          func_0x00010b4db0a4(pcVar16,pcVar8);
          iVar12 = 0xffd0;
          if ((int)param_2 == 0) {
            iVar12 = 0xffa9;
          }
          unaff_x24 = (ulong)((int)unaff_x24 * 0x10 + (iVar12 + (int)pcVar16 & 0xffffU));
          lVar17 = lVar17 + 1;
        }
        pcVar15 = pcVar1;
        if (pcVar8 == pcVar1) {
LAB_10b4dad38:
          *(short *)((long)puVar20 + uVar19 * 2) = (short)unaff_x24;
          uVar19 = uVar19 + 1;
          pcVar14 = pcVar15;
          goto LAB_10b4dac80;
        }
LAB_10b4dad1c:
        if (pcVar14[lVar17] == ':') {
          pcVar15 = pcVar14 + lVar17 + 1;
          if (pcVar14 + lVar17 + 1 != pcVar1) goto LAB_10b4dad38;
          goto LAB_10b4dad88;
        }
        if (pcVar14[lVar17] == '.') {
          if ((uint)lVar17 == 0) {
            FUN_10b4db8e4(0);
            auStack_70[0] = 3;
            uVar9 = extraout_w8_02;
            goto LAB_10b4daf1c;
          }
          if (6 < (long)uVar19) goto LAB_10b4dad78;
          FUN_10b4db8e4(0);
          uVar11 = extraout_x8;
          goto LAB_10b4dadcc;
        }
      }
LAB_10b4dad88:
      FUN_10b4db8e4(0);
      auStack_70[0] = 1;
      uVar9 = extraout_w8_01;
      goto LAB_10b4daf1c;
    }
    pcVar8 = param_2 + 1;
    FUN_10b4daff0(pcVar8,pcVar1,":");
    if ((int)pcVar8 != 0) {
      pcVar14 = param_2 + 2;
      iVar10 = 1;
      param_2 = pcVar8;
      goto LAB_10b4dac6c;
    }
  }
LAB_10b4dac58:
  FUN_10b4db8e4(0);
  auStack_70[0] = extraout_x9;
  uVar9 = extraout_w8;
  goto LAB_10b4daf1c;
LAB_10b4dad48:
  if (bVar7) goto LAB_10b4dac58;
  pcVar14 = pcVar14 + 1;
  iVar10 = (int)uVar19 + 1;
  bVar7 = true;
  goto LAB_10b4dac78;
LAB_10b4dadcc:
  uVar18 = (uint)uVar11;
  if (pcVar14 != pcVar1) {
    if (((uVar18 != 0) && (cVar2 = *pcVar14, pcVar14 = pcVar14 + 1, cVar2 != '.' || 3 < uVar18)) ||
       (pcVar14 == pcVar1)) {
LAB_10b4dae80:
      uVar9 = 0;
      auStack_70[0] = 4;
      goto LAB_10b4daf1c;
    }
    __ZNSt3__16locale7classicEv();
    func_0x00010b4db8fc();
    if ((int)param_2 == 0) goto LAB_10b4dae80;
    bVar6 = false;
    uVar5 = (uint)puVar20 & 0xffffff00;
    for (; puVar20 = (ulong *)(ulong)uVar5, pcVar14 != pcVar1; pcVar14 = pcVar14 + 1) {
      __ZNSt3__16locale7classicEv();
      func_0x00010b4db8fc();
      if ((int)param_2 == 0) break;
      uVar4 = (int)*pcVar14 - 0x30;
      if (bVar6) {
        if ((uVar5 & 0xffff) == 0) goto LAB_10b4dae80;
        uVar4 = uVar4 + uVar5 * 10;
      }
      if (0xff < (uVar4 & 0xffff)) goto LAB_10b4dae80;
      bVar6 = true;
      uVar5 = uVar4;
    }
    if (!bVar6) {
      func_0x000104bdc2c8();
      func_0x000104bd46a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__114error_categoryD2Ev_110346540)();
      return;
    }
    iVar12 = (int)uVar19;
    *(short *)((long)auStack_70 + (long)iVar12 * 2) =
         (short)uVar5 + *(short *)((long)auStack_70 + (long)iVar12 * 2) * 0x100;
    uVar11 = (ulong)(uVar18 + 1);
    if ((uVar18 | 2) == 3) {
      uVar19 = (ulong)(iVar12 + 1);
    }
    goto LAB_10b4dadcc;
  }
  if (uVar18 == 4) {
LAB_10b4daea8:
    iVar12 = (int)uVar19;
    if (bVar7) {
      lVar13 = 0xe;
      lVar17 = (long)(iVar12 - iVar10);
      do {
        iVar12 = iVar12 + -1;
        if (lVar17 < 1) break;
        uVar3 = *(undefined2 *)((long)auStack_70 + lVar13);
        *(undefined2 *)((long)auStack_70 + lVar13) =
             *(undefined2 *)((long)auStack_70 + (long)iVar12 * 2);
        *(undefined2 *)((long)auStack_70 + (long)iVar12 * 2) = uVar3;
        lVar13 = lVar13 + -2;
        lVar17 = lVar17 + -1;
      } while (lVar13 != 0);
    }
    else if (iVar12 != 8) {
      FUN_10b4db8e4(0);
      auStack_70[0] = 2;
      uVar9 = extraout_w8_03;
      goto LAB_10b4daf1c;
    }
    uVar9 = 1;
    unaff_x24 = auStack_70[1];
  }
  else {
LAB_10b4dad78:
    FUN_10b4db8e4(0);
    auStack_70[0] = 4;
    uVar9 = extraout_w8_00;
  }
LAB_10b4daf1c:
  *param_1 = auStack_70[0];
  param_1[1] = unaff_x24;
  *(undefined1 *)(param_1 + 2) = uVar9;
  return;
}



/* Entry: 10b4daf4c; end: 10b4daf4f;  */

void FUN_10b4daf4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114error_categoryD2Ev_110346540)();
  return;
}



/* Entry: 10b4daf50; end: 10b4daf63;  */

void FUN_10b4daf50(void)

{
  __ZNSt3__114error_categoryD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4daf64; end: 10b4daf6f;  */

undefined * FUN_10b4daf64(void)

{
  return &UNK_10f774856;
}



/* Entry: 10b4daf70; end: 10b4dafab;  */

void FUN_10b4daf70(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  if (param_3 < 5) {
    puVar1 = (&PTR_DAT_110cf1380)[param_3];
  }
  else {
    puVar1 = &DAT_10f661992;
  }
  func_0x000107c278b8(param_1,puVar1);
  return;
}



/* Entry: 10b4dafac; end: 10b4dafbf;  */

long * FUN_10b4dafac(void)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (*plVar1 != 0) {
    plVar1[1] = *plVar1;
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10b4dafc0; end: 10b4dafef;  */

long * FUN_10b4dafc0(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b4daff0; end: 10b4db06f;  */

bool FUN_10b4daff0(char *param_1,char *param_2,char *param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar2 = param_3;
  _strlen();
  if (param_1 == param_2) {
    bVar1 = false;
  }
  else {
    pcVar3 = pcVar2;
    pcVar4 = param_1;
    do {
      if (pcVar3 == (char *)0x0) {
        return true;
      }
      pcVar5 = pcVar4 + 1;
      if (*pcVar4 != *param_3) {
        return pcVar3 == (char *)0x0;
      }
      pcVar3 = pcVar3 + -1;
      param_3 = param_3 + 1;
      pcVar4 = pcVar5;
    } while (pcVar5 != param_2);
    bVar1 = param_2 + -(long)param_1 == pcVar2;
  }
  return bVar1;
}



/* Entry: 10b4db070; end: 10b4db0d7;  */

uint FUN_10b4db070(long param_1)

{
  uint uVar1;
  int unaff_w19;
  
  func_0x00010b4db8f0();
  if (unaff_w19 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + (long)unaff_w19 * 4) >> 0x10 & 1;
  }
  return uVar1;
}



/* Entry: 10b4db0d8; end: 10b4db2ff;  */

void FUN_10b4db0d8(ulong *param_1,ulong *param_2,ulong param_3,ulong *param_4,long param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long extraout_x9;
  long extraout_x9_00;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar11;
  ulong *puVar12;
  long extraout_x13;
  long extraout_x13_00;
  ulong *extraout_x14;
  ulong *extraout_x14_00;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      if (param_1[1] < param_2[-1]) {
        uVar4 = *param_1;
        *param_1 = param_2[-2];
        param_2[-2] = uVar4;
        uVar4 = param_1[1];
        param_1[1] = param_2[-1];
        param_2[-1] = uVar4;
      }
    }
    else if ((long)param_3 < 1) {
      if (param_1 != param_2) {
        lVar15 = 0;
        puVar7 = param_1;
        while (puVar3 = puVar7 + 2, puVar3 != param_2) {
          uVar4 = puVar7[3];
          if (puVar7[1] < uVar4) {
            uVar11 = *puVar3;
            lVar14 = lVar15;
            do {
              lVar10 = lVar14;
              puVar1 = (undefined8 *)((long)param_1 + lVar10);
              puVar1[2] = *puVar1;
              puVar1[3] = puVar1[1];
              puVar7 = param_1;
              if (lVar10 == 0) goto LAB_10b4db23c;
              lVar14 = lVar10 + -0x10;
            } while ((ulong)puVar1[-1] < uVar4);
            puVar7 = (ulong *)((long)param_1 + lVar10);
LAB_10b4db23c:
            *puVar7 = uVar11;
            puVar7[1] = uVar4;
          }
          lVar15 = lVar15 + 0x10;
          puVar7 = puVar3;
        }
      }
    }
    else {
      uVar4 = param_3 >> 1;
      puVar7 = param_1 + uVar4 * 2;
      lVar15 = param_3 - (param_3 >> 1);
      if (param_5 < (long)param_3) {
        FUN_10b4db0d8();
        FUN_10b4db0d8(puVar7,param_2,lVar15,param_4,param_5);
        do {
          puVar3 = param_2;
          if (lVar15 == 0) {
            return;
          }
          while( true ) {
            if (lVar15 <= param_5 || (long)uVar4 <= param_5) {
              puVar9 = param_4;
              puVar5 = param_1;
              if ((long)uVar4 <= lVar15) {
                for (; puVar5 != puVar7; puVar5 = puVar5 + 2) {
                  uVar4 = *puVar5;
                  puVar9[1] = puVar5[1];
                  *puVar9 = uVar4;
                  puVar9 = puVar9 + 2;
                }
                while( true ) {
                  if (puVar9 == param_4) {
                    return;
                  }
                  if (puVar7 == puVar3) break;
                  puVar5 = param_4 + 2;
                  puVar2 = puVar7;
                  if (param_4[1] < puVar7[1]) {
                    puVar5 = param_4;
                    puVar2 = puVar7 + 2;
                    param_4 = puVar7;
                  }
                  puVar7 = puVar2;
                  *param_1 = *param_4;
                  param_1[1] = param_4[1];
                  param_1 = param_1 + 2;
                  param_4 = puVar5;
                }
                for (; puVar9 != param_4; param_4 = param_4 + 2) {
                  *param_1 = *param_4;
                  param_1[1] = param_4[1];
                  param_1 = param_1 + 2;
                }
                return;
              }
              lVar15 = 0;
              while( true ) {
                puVar9 = (ulong *)((long)puVar7 + lVar15);
                puVar5 = (ulong *)((long)param_4 + lVar15);
                if (puVar9 == puVar3) break;
                uVar4 = *puVar9;
                puVar5[1] = puVar9[1];
                *puVar5 = uVar4;
                lVar15 = lVar15 + 0x10;
              }
              puVar3 = puVar3 + -1;
              while( true ) {
                if (puVar5 == param_4) {
                  return;
                }
                if (puVar7 == param_1) break;
                puVar12 = puVar7 + -1;
                puVar13 = puVar7 + -2;
                puVar9 = puVar5 + -2;
                puVar2 = puVar5 + -1;
                puVar6 = puVar5 + -2;
                if (*puVar12 < puVar5[-1]) {
                  puVar9 = puVar5;
                  puVar7 = puVar13;
                  puVar2 = puVar12;
                  puVar6 = puVar13;
                }
                puVar3[-1] = *puVar6;
                *puVar3 = *puVar2;
                puVar5 = puVar9;
                puVar3 = puVar3 + -2;
              }
              while (puVar5 != param_4) {
                puVar3[-1] = puVar5[-2];
                *puVar3 = puVar5[-1];
                puVar5 = puVar5 + -2;
                puVar3 = puVar3 + -2;
              }
              return;
            }
            lVar14 = 0;
            lVar10 = -uVar4;
            while( true ) {
              if (lVar10 == 0) {
                return;
              }
              puVar9 = (ulong *)((long)param_1 + lVar14);
              if (puVar9[1] < puVar7[1]) break;
              lVar14 = lVar14 + 0x10;
              lVar10 = lVar10 + 1;
            }
            puVar5 = puVar7;
            lVar8 = lVar15;
            if (-lVar10 < lVar15) {
              lVar16 = lVar15 / 2;
              lVar15 = (long)puVar7 + (-lVar14 - (long)param_1) >> 4;
              while (lVar15 != 0) {
                func_0x00010b4db914();
                puVar5 = extraout_x8;
                lVar8 = extraout_x9;
                lVar10 = extraout_x10;
                lVar15 = extraout_x13;
                if (extraout_x11 <= extraout_x15) {
                  puVar9 = extraout_x14;
                  lVar15 = extraout_x12;
                }
              }
              uVar4 = (long)puVar9 + (-lVar14 - (long)param_1) >> 4;
              puVar7 = puVar7 + lVar16 * 2;
            }
            else {
              if (lVar10 == -1) {
                param_1 = (ulong *)((long)param_1 + lVar14);
                uVar4 = *param_1;
                *param_1 = *puVar7;
                *puVar7 = uVar4;
                uVar4 = param_1[1];
                param_1[1] = puVar7[1];
                puVar7[1] = uVar4;
                return;
              }
              uVar4 = -lVar10 / 2;
              puVar9 = (ulong *)((long)param_1 + lVar14 + uVar4 * 0x10);
              lVar15 = (long)puVar3 - (long)puVar7 >> 4;
              puVar2 = puVar7;
              while (puVar7 = puVar2, lVar15 != 0) {
                func_0x00010b4db914();
                puVar2 = extraout_x14_00;
                puVar5 = extraout_x8_00;
                lVar8 = extraout_x9_00;
                lVar10 = extraout_x10_00;
                lVar15 = extraout_x12_00;
                if (extraout_x15_00 <= extraout_x11_00) {
                  puVar2 = puVar7;
                  lVar15 = extraout_x13_00;
                }
              }
              lVar16 = (long)puVar7 - (long)puVar5 >> 4;
            }
            param_2 = puVar7;
            if ((puVar9 != puVar5) &&
               (puVar6 = puVar5, param_2 = puVar9, puVar2 = puVar9, puVar5 != puVar7)) {
              while( true ) {
                puVar12 = puVar6;
                param_2 = puVar2 + 2;
                uVar11 = *puVar2;
                *puVar2 = *puVar5;
                *puVar5 = uVar11;
                uVar11 = puVar2[1];
                puVar2[1] = puVar5[1];
                puVar5[1] = uVar11;
                puVar5 = puVar5 + 2;
                if (puVar5 == puVar7) break;
                puVar6 = puVar5;
                puVar2 = param_2;
                if (param_2 != puVar12) {
                  puVar6 = puVar12;
                }
              }
              puVar2 = puVar12;
              puVar5 = param_2;
              if (param_2 != puVar12) {
                do {
                  while( true ) {
                    puVar6 = puVar2;
                    uVar11 = *puVar5;
                    *puVar5 = *puVar12;
                    *puVar12 = uVar11;
                    uVar11 = puVar5[1];
                    puVar5[1] = puVar12[1];
                    puVar12[1] = uVar11;
                    puVar5 = puVar5 + 2;
                    puVar12 = puVar12 + 2;
                    if (puVar12 == puVar7) break;
                    puVar2 = puVar12;
                    if (puVar5 != puVar6) {
                      puVar2 = puVar6;
                    }
                  }
                  puVar2 = puVar6;
                  puVar12 = puVar6;
                } while (puVar5 != puVar6);
              }
            }
            lVar15 = lVar8 - lVar16;
            if ((long)((lVar8 - (uVar4 + lVar16)) - lVar10) <= (long)(uVar4 + lVar16)) break;
            uVar4 = -(uVar4 + lVar10);
            FUN_10b4db508();
            param_1 = param_2;
            if (lVar15 == 0) {
              return;
            }
          }
          FUN_10b4db508(param_2,puVar7);
          param_1 = (ulong *)((long)param_1 + lVar14);
          puVar7 = puVar9;
          lVar15 = lVar16;
        } while( true );
      }
      FUN_10b4db340(param_1,puVar7,uVar4);
      puVar3 = param_4 + uVar4 * 2;
      FUN_10b4db340(puVar7,param_2,lVar15,puVar3);
      puVar9 = param_4 + param_3 * 2;
      puVar7 = puVar3;
      while (param_4 != puVar3) {
        if (puVar7 == puVar9) {
          for (; param_4 != puVar3; param_4 = param_4 + 2) {
            *param_1 = *param_4;
            param_1[1] = param_4[1];
            param_1 = param_1 + 2;
          }
          return;
        }
        puVar5 = puVar7;
        puVar6 = param_4 + 2;
        puVar2 = param_4;
        if (param_4[1] < puVar7[1]) {
          puVar5 = puVar7 + 2;
          puVar6 = param_4;
          puVar2 = puVar7;
        }
        param_4 = puVar6;
        *param_1 = *puVar2;
        param_1[1] = puVar2[1];
        param_1 = param_1 + 2;
        puVar7 = puVar5;
      }
      for (; puVar7 != puVar9; puVar7 = puVar7 + 2) {
        *param_1 = *puVar7;
        param_1[1] = puVar7[1];
        param_1 = param_1 + 2;
      }
    }
  }
  return;
}



/* Entry: 10b4db300; end: 10b4db317;  */

void FUN_10b4db300(long *param_1,long param_2)

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



/* Entry: 10b4db318; end: 10b4db33f;  */

undefined8 FUN_10b4db318(undefined8 param_1)

{
  FUN_10b4db300(param_1,0);
  return param_1;
}



/* Entry: 10b4db340; end: 10b4db507;  */

void FUN_10b4db340(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_3 != 0) {
    if (param_3 == 2) {
      if ((ulong)param_1[1] < (ulong)param_2[-1]) {
        uVar7 = param_2[-2];
        param_4[1] = param_2[-1];
        *param_4 = uVar7;
        uVar8 = param_1[1];
        uVar7 = *param_1;
      }
      else {
        uVar7 = *param_1;
        param_4[1] = param_1[1];
        *param_4 = uVar7;
        uVar8 = param_2[-1];
        uVar7 = param_2[-2];
      }
      param_4[3] = uVar8;
      param_4[2] = uVar7;
    }
    else if (param_3 == 1) {
      uVar7 = *param_1;
      param_4[1] = param_1[1];
      *param_4 = uVar7;
    }
    else if ((long)param_3 < 9) {
      if (param_1 != param_2) {
        lVar1 = 0;
        uVar7 = *param_1;
        param_4[1] = param_1[1];
        *param_4 = uVar7;
        puVar3 = param_4;
        while (puVar2 = param_1 + 2, puVar2 != param_2) {
          puVar5 = puVar3 + 2;
          if ((ulong)puVar3[1] < (ulong)param_1[3]) {
            puVar3[3] = puVar3[1];
            *puVar5 = *puVar3;
            for (lVar4 = lVar1; puVar3 = param_4, lVar4 != 0; lVar4 = lVar4 + -0x10) {
              puVar3 = (undefined8 *)((long)param_4 + lVar4);
              if ((ulong)param_1[3] <= (ulong)puVar3[-1]) break;
              *puVar3 = puVar3[-2];
              puVar3[1] = puVar3[-1];
            }
            *puVar3 = param_1[2];
            puVar3[1] = param_1[3];
          }
          else {
            uVar7 = *puVar2;
            puVar3[3] = param_1[3];
            *puVar5 = uVar7;
          }
          lVar1 = lVar1 + 0x10;
          puVar3 = puVar5;
          param_1 = puVar2;
        }
      }
    }
    else {
      uVar6 = param_3 >> 1;
      puVar3 = param_1 + uVar6 * 2;
      FUN_10b4db0d8(param_1,puVar3,uVar6,param_4,uVar6);
      lVar1 = param_3 - (param_3 >> 1);
      FUN_10b4db0d8(puVar3,param_2,lVar1,param_4 + uVar6 * 2,lVar1);
      puVar2 = puVar3;
      while (param_1 != puVar3) {
        if (puVar2 == param_2) {
          for (; param_1 != puVar3; param_1 = param_1 + 2) {
            uVar7 = *param_1;
            param_4[1] = param_1[1];
            *param_4 = uVar7;
            param_4 = param_4 + 2;
          }
          return;
        }
        if ((ulong)param_1[1] < (ulong)puVar2[1]) {
          uVar8 = puVar2[1];
          uVar7 = *puVar2;
          puVar2 = puVar2 + 2;
          puVar5 = param_1;
        }
        else {
          puVar5 = param_1 + 2;
          uVar8 = param_1[1];
          uVar7 = *param_1;
        }
        param_4[1] = uVar8;
        *param_4 = uVar7;
        param_4 = param_4 + 2;
        param_1 = puVar5;
      }
      for (; puVar2 != param_2; puVar2 = puVar2 + 2) {
        uVar7 = *puVar2;
        param_4[1] = puVar2[1];
        *param_4 = uVar7;
        param_4 = param_4 + 2;
      }
    }
  }
  return;
}



/* Entry: 10b4db508; end: 10b4db8e3;  */

void FUN_10b4db508(ulong *param_1,ulong *param_2,ulong *param_3,long param_4,long param_5,
                  ulong *param_6,long param_7)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *extraout_x8;
  ulong *extraout_x8_00;
  ulong *puVar3;
  ulong *puVar4;
  long extraout_x9;
  long extraout_x9_00;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long lVar8;
  long extraout_x12;
  long lVar9;
  long extraout_x12_00;
  ulong uVar10;
  ulong *puVar11;
  long extraout_x13;
  long extraout_x13_00;
  ulong *extraout_x14;
  ulong *extraout_x14_00;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong *puVar12;
  long lVar13;
  
  do {
    puVar2 = param_3;
    if (param_5 == 0) {
      return;
    }
    while( true ) {
      if (param_5 <= param_7 || param_4 <= param_7) {
        puVar6 = param_6;
        puVar3 = param_1;
        if (param_4 <= param_5) {
          for (; puVar3 != param_2; puVar3 = puVar3 + 2) {
            uVar10 = *puVar3;
            puVar6[1] = puVar3[1];
            *puVar6 = uVar10;
            puVar6 = puVar6 + 2;
          }
          while( true ) {
            if (puVar6 == param_6) {
              return;
            }
            if (param_2 == puVar2) break;
            puVar3 = param_6 + 2;
            puVar1 = param_2;
            if (param_6[1] < param_2[1]) {
              puVar3 = param_6;
              puVar1 = param_2 + 2;
              param_6 = param_2;
            }
            param_2 = puVar1;
            *param_1 = *param_6;
            param_1[1] = param_6[1];
            param_1 = param_1 + 2;
            param_6 = puVar3;
          }
          for (; puVar6 != param_6; param_6 = param_6 + 2) {
            *param_1 = *param_6;
            param_1[1] = param_6[1];
            param_1 = param_1 + 2;
          }
          return;
        }
        lVar13 = 0;
        while( true ) {
          puVar6 = (ulong *)((long)param_2 + lVar13);
          puVar3 = (ulong *)((long)param_6 + lVar13);
          if (puVar6 == puVar2) break;
          uVar10 = *puVar6;
          puVar3[1] = puVar6[1];
          *puVar3 = uVar10;
          lVar13 = lVar13 + 0x10;
        }
        puVar2 = puVar2 + -1;
        while( true ) {
          if (puVar3 == param_6) {
            return;
          }
          if (param_2 == param_1) break;
          puVar11 = param_2 + -1;
          puVar12 = param_2 + -2;
          puVar6 = puVar3 + -2;
          puVar1 = puVar3 + -1;
          puVar4 = puVar3 + -2;
          if (*puVar11 < puVar3[-1]) {
            puVar6 = puVar3;
            param_2 = puVar12;
            puVar1 = puVar11;
            puVar4 = puVar12;
          }
          puVar2[-1] = *puVar4;
          *puVar2 = *puVar1;
          puVar3 = puVar6;
          puVar2 = puVar2 + -2;
        }
        while (puVar3 != param_6) {
          puVar2[-1] = puVar3[-2];
          *puVar2 = puVar3[-1];
          puVar3 = puVar3 + -2;
          puVar2 = puVar2 + -2;
        }
        return;
      }
      lVar13 = 0;
      lVar7 = -param_4;
      while( true ) {
        if (lVar7 == 0) {
          return;
        }
        puVar6 = (ulong *)((long)param_1 + lVar13);
        if (puVar6[1] < param_2[1]) break;
        lVar13 = lVar13 + 0x10;
        lVar7 = lVar7 + 1;
      }
      puVar3 = param_2;
      lVar5 = param_5;
      if (-lVar7 < param_5) {
        lVar9 = param_5 / 2;
        lVar8 = (long)param_2 + (-lVar13 - (long)param_1) >> 4;
        while (lVar8 != 0) {
          func_0x00010b4db914();
          puVar3 = extraout_x8;
          lVar5 = extraout_x9;
          lVar7 = extraout_x10;
          lVar8 = extraout_x13;
          if (extraout_x11 <= extraout_x15) {
            puVar6 = extraout_x14;
            lVar8 = extraout_x12;
          }
        }
        param_4 = (long)puVar6 + (-lVar13 - (long)param_1) >> 4;
        param_2 = param_2 + lVar9 * 2;
      }
      else {
        if (lVar7 == -1) {
          param_1 = (ulong *)((long)param_1 + lVar13);
          uVar10 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar10;
          uVar10 = param_1[1];
          param_1[1] = param_2[1];
          param_2[1] = uVar10;
          return;
        }
        param_4 = -lVar7 / 2;
        puVar6 = (ulong *)((long)param_1 + lVar13 + param_4 * 0x10);
        lVar9 = (long)puVar2 - (long)param_2 >> 4;
        puVar1 = param_2;
        while (param_2 = puVar1, lVar9 != 0) {
          func_0x00010b4db914();
          puVar1 = extraout_x14_00;
          puVar3 = extraout_x8_00;
          lVar5 = extraout_x9_00;
          lVar7 = extraout_x10_00;
          lVar9 = extraout_x12_00;
          if (extraout_x15_00 <= extraout_x11_00) {
            puVar1 = param_2;
            lVar9 = extraout_x13_00;
          }
        }
        lVar9 = (long)param_2 - (long)puVar3 >> 4;
      }
      param_3 = param_2;
      if ((puVar6 != puVar3) &&
         (puVar4 = puVar3, param_3 = puVar6, puVar1 = puVar6, puVar3 != param_2)) {
        while( true ) {
          puVar11 = puVar4;
          param_3 = puVar1 + 2;
          uVar10 = *puVar1;
          *puVar1 = *puVar3;
          *puVar3 = uVar10;
          uVar10 = puVar1[1];
          puVar1[1] = puVar3[1];
          puVar3[1] = uVar10;
          puVar3 = puVar3 + 2;
          if (puVar3 == param_2) break;
          puVar4 = puVar3;
          puVar1 = param_3;
          if (param_3 != puVar11) {
            puVar4 = puVar11;
          }
        }
        puVar1 = puVar11;
        puVar3 = param_3;
        if (param_3 != puVar11) {
          do {
            while( true ) {
              puVar4 = puVar1;
              uVar10 = *puVar3;
              *puVar3 = *puVar11;
              *puVar11 = uVar10;
              uVar10 = puVar3[1];
              puVar3[1] = puVar11[1];
              puVar11[1] = uVar10;
              puVar3 = puVar3 + 2;
              puVar11 = puVar11 + 2;
              if (puVar11 == param_2) break;
              puVar1 = puVar11;
              if (puVar3 != puVar4) {
                puVar1 = puVar4;
              }
            }
            puVar1 = puVar4;
            puVar11 = puVar4;
          } while (puVar3 != puVar4);
        }
      }
      param_5 = lVar5 - lVar9;
      if ((lVar5 - (param_4 + lVar9)) - lVar7 <= param_4 + lVar9) break;
      param_4 = -(param_4 + lVar7);
      FUN_10b4db508();
      param_1 = param_3;
      if (param_5 == 0) {
        return;
      }
    }
    FUN_10b4db508(param_3,param_2);
    param_1 = (ulong *)((long)param_1 + lVar13);
    param_2 = puVar6;
    param_5 = lVar9;
  } while( true );
}



/* Entry: 10b4db8e4; end: 10b4db92b;  */

void FUN_10b4db8e4(void)

{
  return;
}



/* Entry: 10b4db92c; end: 10b4db93f;  */

void FUN_10b4db92c(void)

{
  __ZNSt3__114error_categoryD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4db940; end: 10b4db94b;  */

undefined * FUN_10b4db940(void)

{
  return &UNK_10f774904;
}



/* Entry: 10b4db94c; end: 10b4db98f;  */

void FUN_10b4db94c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_10f6474ee;
  if (param_3 != 1) {
    puVar1 = &DAT_10f661992;
  }
  puVar2 = &UNK_10f774915;
  if (param_3 != 0) {
    puVar2 = puVar1;
  }
  func_0x000107c278b8(param_1,puVar2);
  return;
}



/* Entry: 10b4db990; end: 10b4dba77;  */

void FUN_10b4db990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined1 auStack_228 [24];
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined1 auStack_1e8 [216];
  undefined1 auStack_110 [208];
  char cStack_40;
  undefined8 uStack_38;
  
  func_0x00010b4dc8b4();
  uStack_38 = extraout_x8;
  FUN_10b4dbfd0(auStack_1e8,param_4);
  func_0x00010b4dc8f8(auStack_110);
  uVar2 = cStack_40 == '\x01';
  if (!(bool)uVar2) {
    ___cxa_allocate_exception(0x20);
    func_0x00010792d560();
    ___cxa_throw();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b4dba48);
    (*pcVar1)();
  }
  FUN_10b4dba78(param_1,auStack_110);
  func_0x00010b4dc03c(auStack_110);
  puVar3 = auStack_1e8;
  func_0x00010792d620();
  func_0x00010b4dc890(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b4dc03c(auStack_110);
  puVar4 = auStack_1e8;
  func_0x00010792d620();
  func_0x00010b4dc8ac();
  pcStack_1f8 = FUN_10b4dba78;
  uStack_210 = param_3;
  puStack_208 = puVar3;
  puStack_200 = &stack0xfffffffffffffff0;
  func_0x00010b4dbb18();
  FUN_10b4e1d70(auStack_228,puVar4,0);
  puVar3 = puVar4 + 0xd0;
  func_0x000107c27b9c(puVar3,auStack_228);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_228);
  lVar8 = (long)(char)puVar4[0xe7];
  if (lVar8 < 0) {
    puVar3 = *(undefined1 **)(puVar4 + 0xd0);
    lVar8 = *(long *)(puVar4 + 0xd8);
  }
  *(undefined1 **)(puVar4 + 0xe8) = puVar3;
  *(long *)(puVar4 + 0xf0) = lVar8;
  if (puVar4[0xa0] == '\x01') {
    puVar5 = (undefined8 *)(puVar4 + 0x88);
    func_0x0001072e787c();
    puVar6 = (undefined8 *)*puVar5;
    uVar7 = puVar5[1];
    if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
      puVar6 = puVar5;
      uVar7 = (ulong)*(byte *)((long)puVar5 + 0x17);
    }
  }
  else {
    puVar6 = (undefined8 *)0x0;
    uVar7 = 0;
  }
  FUN_10b4e1808(puVar4 + 0xf8,puVar6,uVar7);
  return;
}



/* Entry: 10b4dba78; end: 10b4dbb9b;  */

void FUN_10b4dba78(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_38 [24];
  
  func_0x00010b4dbb18();
  FUN_10b4e1d70(auStack_38,param_1,0);
  lVar5 = param_1 + 0xd0;
  func_0x000107c27b9c(lVar5,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  lVar4 = (long)*(char *)(param_1 + 0xe7);
  if (lVar4 < 0) {
    lVar5 = *(long *)(param_1 + 0xd0);
    lVar4 = *(long *)(param_1 + 0xd8);
  }
  *(long *)(param_1 + 0xe8) = lVar5;
  *(long *)(param_1 + 0xf0) = lVar4;
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    puVar1 = (undefined8 *)(param_1 + 0x88);
    func_0x0001072e787c();
    puVar2 = (undefined8 *)*puVar1;
    uVar3 = puVar1[1];
    if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
      puVar2 = puVar1;
      uVar3 = (ulong)*(byte *)((long)puVar1 + 0x17);
    }
  }
  else {
    puVar2 = (undefined8 *)0x0;
    uVar3 = 0;
  }
  FUN_10b4e1808(param_1 + 0xf8,puVar2,uVar3);
  return;
}



/* Entry: 10b4dbb9c; end: 10b4dbc63;  */

void FUN_10b4dbb9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  undefined1 uStack_331;
  undefined1 auStack_300 [216];
  undefined1 auStack_228 [280];
  undefined8 uStack_110;
  undefined8 uStack_108;
  byte bStack_40;
  undefined8 uStack_38;
  
  func_0x00010b4dc8b4();
  uStack_38 = extraout_x8_00;
  FUN_10b4dbfd0(auStack_300,param_4);
  func_0x00010b4dc8f8(&uStack_110);
  uVar8 = (uint)bStack_40;
  cVar3 = SBORROW4(uVar8,1);
  cVar4 = (int)(uVar8 - 1) < 0;
  uVar5 = uVar8 == 1;
  if ((bool)uVar5) {
    FUN_10b164c10(auStack_228,&uStack_110);
    func_0x00010b4dc874(param_1,auStack_228);
    func_0x00010792d338(auStack_228);
  }
  else {
    param_1[1] = uStack_108;
    *param_1 = uStack_110;
    *(undefined1 *)(param_1 + 0x23) = 0;
  }
  func_0x00010b4dc03c();
  func_0x00010b4dc8cc();
  func_0x00010b4dc890(uStack_38);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    puVar7 = &uStack_110;
    func_0x00010b4dc03c(puVar7);
    func_0x00010b4dc8cc();
    func_0x00010b4dc8ac();
    puVar6 = &UNK_10f774924;
    func_0x000100456780();
    uVar1 = extraout_x11;
    puVar2 = extraout_x10;
    if (cVar4 == cVar3) {
      uVar1 = extraout_x8;
      puVar2 = puVar7;
    }
    func_0x000107c613d0(puVar6);
    func_0x0001000d0424(extraout_x8_01,&uStack_331,puVar2,uVar1,&UNK_10f774924,puVar6);
    return;
  }
  return;
}



/* Entry: 10b4dbc64; end: 10b4dbc6f;  */

void FUN_10b4dbc64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  char in_OV;
  undefined *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x10;
  undefined8 extraout_x11;
  undefined1 uStack_31;
  
  puVar3 = &UNK_10f774924;
  func_0x000100456780();
  uVar1 = extraout_x11;
  uVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    uVar2 = param_2;
  }
  func_0x000107c613d0(puVar3);
  func_0x0001000d0424(param_1,&uStack_31,uVar2,uVar1,&UNK_10f774924,puVar3);
  return;
}



/* Entry: 10b4dbc70; end: 10b4dbd3f;  */

void FUN_10b4dbc70(undefined8 *param_1,long param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_2 + 0x60) & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if ((*(byte *)(param_2 + 0x6a) & 1) == 0) {
      param_2 = param_2 + 0x48;
      func_0x00010549026c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
                (param_1,param_2);
      return;
    }
    func_0x00010549026c(param_2 + 0x48);
    func_0x000107c27d14(auStack_38);
    puVar1 = (undefined2 *)(param_2 + 0x68);
    FUN_10b4dbd40();
    __ZNSt3__19to_stringEi(auStack_50,*puVar1);
    func_0x00010533a9c0(param_1,auStack_38,auStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  }
  return;
}



/* Entry: 10b4dbd40; end: 10b4dbd57;  */

void FUN_10b4dbd40(long param_1)

{
  undefined8 *extraout_x8;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    param_1 = param_1 + 0x48;
    func_0x00010549026c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330
    )(extraout_x8,param_1);
    return;
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  return;
}



/* Entry: 10b4dbd58; end: 10b4dbe0f;  */

void FUN_10b4dbd58(undefined8 *param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x60) & 1) != 0) {
    param_2 = param_2 + 0x48;
    func_0x00010549026c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330
    )(param_1,param_2);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10b4dbe10; end: 10b4dbf9b;  */

undefined1 * FUN_10b4dbe10(undefined8 *param_1,undefined8 param_2,char *param_3,long param_4)

{
  bool bVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_3b0 [216];
  undefined1 auStack_2d8 [208];
  undefined1 uStack_208;
  undefined1 auStack_200 [136];
  undefined1 auStack_178 [72];
  undefined8 uStack_130;
  undefined8 uStack_128;
  char cStack_60;
  undefined8 uStack_58;
  
  func_0x00010b4dc8b4();
  uStack_58 = extraout_x8;
  FUN_10b164c44(auStack_200,param_2);
  if (param_4 == 0) {
    func_0x000104bffddc(auStack_178);
    FUN_10b4dba78(param_2,auStack_200);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    cVar2 = *param_3;
    FUN_10b4dbf9c(auStack_178,&UNK_10f774923);
    auStack_2d8[0] = 0;
    uStack_208 = 0;
    func_0x00010b4dc05c(auStack_3b0,auStack_200);
    if (cVar2 == '?') {
      param_3 = param_3 + 1;
    }
    FUN_10b4dc970(&uStack_130,param_3,param_4 - (ulong)(cVar2 == '?'),auStack_2d8,auStack_3b0,
                  0x100000013);
    in_ZR = cStack_60 == '\x01';
    bVar1 = !(bool)in_ZR;
    if (bVar1) {
      param_1[1] = uStack_128;
      *param_1 = uStack_130;
    }
    else {
      FUN_10b4dba78(param_2,&uStack_130);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    *(bool *)(param_1 + 2) = !bVar1;
    func_0x00010b4dc03c(&uStack_130);
    func_0x00010b4dc8cc();
    func_0x00010792d620(auStack_2d8);
  }
  puVar3 = auStack_200;
  func_0x00010792d368();
  func_0x00010b4dc890(uStack_58);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010b4dc03c(&uStack_130);
  func_0x00010b4dc8cc();
  func_0x00010792d620(auStack_2d8);
  puVar3 = auStack_200;
  func_0x00010792d368();
  func_0x00010b4dc8ac();
  if (puVar3[0x18] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
  }
  else {
    FUN_10b4dc858();
  }
  return puVar3;
}



/* Entry: 10b4dbf9c; end: 10b4dbfcf;  */

long FUN_10b4dbf9c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
  }
  else {
    FUN_10b4dc858();
  }
  return param_1;
}



/* Entry: 10b4dbfd0; end: 10b4dc00b;  */

undefined1 * FUN_10b4dbfd0(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xd0] = 0;
  FUN_10b4dc00c();
  return param_1;
}



/* Entry: 10b4dc00c; end: 10b4dc01f;  */

void FUN_10b4dc00c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_10b164c44();
    *(undefined1 *)(param_1 + 0xd0) = 1;
    return;
  }
  return;
}



/* Entry: 10b4dc020; end: 10b4dc077;  */

void FUN_10b4dc020(long param_1)

{
  FUN_10b164c44();
  *(undefined1 *)(param_1 + 0xd0) = 1;
  return;
}



/* Entry: 10b4dc078; end: 10b4dc0bf;  */

void FUN_10b4dc078(undefined8 param_1,int param_2,code *param_3)

{
  (*param_3)();
  if (param_2 == 0) {
    func_0x000107527bd0(param_1,&stack0xffffffffffffffef,1);
  }
  else {
    func_0x000107527bd0(param_1,&stack0xffffffffffffffed,3);
  }
  return;
}



/* Entry: 10b4dc0c0; end: 10b4dc1a7;  */

ulong FUN_10b4dc0c0(char param_1)

{
  undefined1 in_ZR;
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined1 uStack_69;
  undefined4 uStack_68;
  char cStack_61;
  undefined1 uStack_3a;
  char cStack_39;
  undefined8 uStack_38;
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  cStack_39 = param_1;
  func_0x00010b4dc8b4();
  uStack_28 = extraout_x8;
  if ((bRam0000000113375778 & 1) == 0) {
    iVar1 = 0x13375778;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uStack_38 = 0x5d5c5b403d3b3a2f;
      uStack_30 = 0x7c5e;
      FUN_10b4dc3a0(0x113375760,&uStack_38,10,&uStack_3a);
      ___cxa_guard_release(0x113375778);
    }
  }
  uVar2 = (ulong)cStack_39;
  FUN_10b4dc1a8();
  if ((uVar2 & 1) == 0) {
    lVar3 = 0x113375760;
    func_0x00010b4dc7e8(0x113375760,&cStack_39);
    in_ZR = lVar3 == 0x113375768;
    uVar2 = (ulong)!(bool)in_ZR;
  }
  else {
    uVar2 = 1;
  }
  func_0x00010b4dc890(uStack_28);
  if ((bool)in_ZR) {
    return uVar2;
  }
  ___stack_chk_fail();
  cStack_61 = 'x';
  ___cxa_guard_abort();
  func_0x00010b4dc8ac();
  if ((bRam0000000113375798 & 1) == 0) {
    iVar1 = 0x13375798;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uStack_68 = 0x7d7b3f23;
      FUN_10b4dc3a0(0x113375780,&uStack_68,4,&uStack_69);
      ___cxa_guard_release(0x113375798);
    }
  }
  uVar2 = (ulong)cStack_61;
  FUN_10b4dc258();
  if ((uVar2 & 1) == 0) {
    func_0x00010b4dc8d4();
    uVar2 = (ulong)(uVar2 != 0x113375788);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10b4dc1a8; end: 10b4dc257;  */

bool FUN_10b4dc1a8(char param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined1 uStack_29;
  undefined4 uStack_28;
  char cStack_21;
  
  cStack_21 = param_1;
  if ((bRam0000000113375798 & 1) == 0) {
    iVar2 = 0x13375798;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uStack_28 = 0x7d7b3f23;
      FUN_10b4dc3a0(0x113375780,&uStack_28,4,&uStack_29);
      ___cxa_guard_release(0x113375798);
    }
  }
  uVar3 = (ulong)cStack_21;
  FUN_10b4dc258();
  if ((uVar3 & 1) == 0) {
    func_0x00010b4dc8d4();
    bVar1 = uVar3 != 0x113375788;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b4dc258; end: 10b4dc313;  */

bool FUN_10b4dc258(long param_1)

{
  bool bVar1;
  undefined1 uStack_29;
  undefined4 uStack_28;
  undefined1 uStack_24;
  byte bStack_21;
  
  bStack_21 = (byte)param_1;
  if ((bRam00000001133757b8 & 1) == 0) {
    param_1 = 0x1133757b8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      uStack_28 = 0x3e3c2220;
      uStack_24 = 0x60;
      FUN_10b4dc3a0(0x1133757a0,&uStack_28,5,&uStack_29);
      param_1 = 0x1133757b8;
      ___cxa_guard_release(0x1133757b8);
    }
  }
  if (bStack_21 - 0x7f < 0xffffffa1) {
    bVar1 = true;
  }
  else {
    func_0x00010b4dc8d4();
    bVar1 = param_1 != 0x1133757a8;
  }
  return bVar1;
}



/* Entry: 10b4dc314; end: 10b4dc377;  */

void FUN_10b4dc314(undefined8 param_1,uint param_2)

{
  undefined1 uStack_13;
  byte bStack_12;
  byte bStack_11;
  
  uStack_13 = 0x25;
  bStack_12 = (byte)(param_2 >> 4) & 0xf | 0x30;
  if (0xffffff9f < param_2) {
    bStack_12 = ((byte)(param_2 >> 4) & 0xf) + 0x37;
  }
  bStack_11 = (byte)param_2 & 0xf | 0x30;
  if (9 < (param_2 & 0xf)) {
    bStack_11 = (char)(param_2 & 0xf) + 0x37;
  }
  func_0x000107527bd0(param_1,&uStack_13,3);
  return;
}



/* Entry: 10b4dc378; end: 10b4dc39f;  */

void FUN_10b4dc378(undefined8 param_1,undefined1 param_2)

{
  undefined1 uStack_11;
  
  uStack_11 = param_2;
  func_0x000107527bd0(param_1,&uStack_11,1);
  return;
}



/* Entry: 10b4dc3a0; end: 10b4dc3e7;  */

undefined8 * FUN_10b4dc3a0(undefined8 *param_1,long param_2,long param_3)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_10b4dc3e8(param_1,param_2,param_2 + param_3);
  return param_1;
}



/* Entry: 10b4dc3e8; end: 10b4dc42b;  */

void FUN_10b4dc3e8(long param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    FUN_10b4dc42c(param_1,param_1 + 8,param_2);
  }
  return;
}



/* Entry: 10b4dc42c; end: 10b4dc433;  */

undefined1  [16] FUN_10b4dc42c(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x00010b4dc4d8(param_1,param_2,&uStack_48,auStack_50,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x20;
    __Znwm();
    uStack_58 = 1;
    *(undefined1 *)(lVar3 + 0x19) = *param_3;
    plStack_60 = param_1 + 1;
    FUN_10b4dc5f0(param_1,uStack_48,plVar2,lVar3);
    uStack_68 = 0;
    func_0x00010b4dc748(&uStack_68);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10b4dc434; end: 10b4dc5ef;  */

undefined1  [16]
FUN_10b4dc434(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x00010b4dc4d8(param_1,param_2,&uStack_48,auStack_50,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x20;
    __Znwm();
    uStack_58 = 1;
    *(undefined1 *)(lVar3 + 0x19) = *param_4;
    plStack_60 = param_1 + 1;
    FUN_10b4dc5f0(param_1,uStack_48,plVar2,lVar3);
    uStack_68 = 0;
    func_0x00010b4dc748(&uStack_68);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10b4dc5f0; end: 10b4dc663;  */

void FUN_10b4dc5f0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10b4dc664; end: 10b4dc6b3;  */

long * FUN_10b4dc664(long param_1,long *param_2,char *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, *(char *)((long)plVar3 + 0x19) <= *param_3) {
        if (*param_3 <= *(char *)((long)plVar3 + 0x19)) goto LAB_10b4dc6ac;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10b4dc6ac;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_10b4dc6ac:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 10b4dc6b4; end: 10b4dc6d7;  */

undefined8 FUN_10b4dc6b4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10b4dc6d8(&uStack_18);
  return uStack_18;
}



/* Entry: 10b4dc6d8; end: 10b4dc76b;  */

void FUN_10b4dc6d8(undefined8 param_1,long param_2)

{
  if (param_2 < 0) {
    for (; param_2 != 0; param_2 = param_2 + 1) {
      func_0x00010b4dc63c(param_1);
    }
  }
  else {
    while (0 < param_2) {
      func_0x00010b4dc720(param_1);
      param_2 = param_2 + -1;
    }
  }
  return;
}



/* Entry: 10b4dc76c; end: 10b4dc783;  */

void FUN_10b4dc76c(long *param_1,long param_2)

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



/* Entry: 10b4dc784; end: 10b4dc82b;  */

long FUN_10b4dc784(long param_1)

{
  func_0x00010b4dc7a8(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10b4dc82c; end: 10b4dc857;  */

long FUN_10b4dc82c(undefined8 param_1,char *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(char *)(param_3 + 0x19)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 10b4dc858; end: 10b4dc88f;  */

void FUN_10b4dc858(long param_1)

{
  func_0x000107c278b8();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10b4dc890; end: 10b4dc90f;  */

void FUN_10b4dc890(void)

{
  return;
}



/* Entry: 10b4dc910; end: 10b4dc923;  */

void FUN_10b4dc910(void)

{
  __ZNSt3__114error_categoryD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4dc924; end: 10b4dc92f;  */

undefined * FUN_10b4dc924(void)

{
  return &UNK_10f774928;
}



/* Entry: 10b4dc930; end: 10b4dc96f;  */

void FUN_10b4dc930(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  if (param_3 - 2U < 0xc) {
    puVar1 = (&PTR_DAT_110cf1478)[param_3 - 2U];
  }
  else {
    puVar1 = &DAT_10f661992;
  }
  func_0x000107c278b8(param_1,puVar1);
  return;
}



/* Entry: 10b4dc970; end: 10b4dcedf;  */

void FUN_10b4dc970(ulong *param_1,undefined8 param_2,long ****param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long ****pppplVar4;
  long lVar5;
  long ****pppplVar6;
  long *plVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined1 *extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long ***ppplVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_6e0 [208];
  undefined1 uStack_610;
  undefined1 auStack_608 [216];
  long ***ppplStack_530;
  ulong uStack_528;
  long **pplStack_520;
  int *piStack_518;
  undefined1 *puStack_510;
  code *pcStack_508;
  ulong *puStack_4f8;
  undefined8 uStack_4f0;
  undefined1 auStack_4e8 [216];
  long ***ppplStack_410;
  long **pplStack_408;
  undefined8 uStack_400;
  long ***ppplStack_3f8;
  long ***ppplStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long ***ppplStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  int aiStack_3b8 [2];
  undefined **appuStack_3b0 [3];
  undefined ***pppuStack_398;
  long lStack_390;
  undefined **appuStack_388 [3];
  undefined ***pppuStack_370;
  undefined4 uStack_368;
  undefined **appuStack_360 [3];
  undefined ***pppuStack_348;
  undefined4 uStack_340;
  undefined **appuStack_338 [3];
  undefined ***pppuStack_320;
  undefined4 uStack_318;
  undefined **appuStack_310 [3];
  undefined ***pppuStack_2f8;
  undefined4 uStack_2f0;
  undefined **appuStack_2e8 [3];
  undefined ***pppuStack_2d0;
  undefined4 uStack_2c8;
  undefined **appuStack_2c0 [3];
  undefined ***pppuStack_2a8;
  undefined4 uStack_2a0;
  undefined **appuStack_298 [3];
  undefined ***pppuStack_280;
  undefined4 uStack_278;
  undefined **appuStack_270 [3];
  undefined ***pppuStack_258;
  undefined4 uStack_250;
  undefined **appuStack_248 [3];
  undefined ***pppuStack_230;
  undefined4 uStack_228;
  undefined **appuStack_220 [3];
  undefined ***pppuStack_208;
  undefined4 uStack_200;
  undefined **appuStack_1f8 [3];
  undefined ***pppuStack_1e0;
  undefined4 uStack_1d8;
  undefined **appuStack_1d0 [3];
  undefined ***pppuStack_1b8;
  undefined4 uStack_1b0;
  undefined **appuStack_1a8 [3];
  undefined ***pppuStack_190;
  undefined4 uStack_188;
  undefined **appuStack_180 [3];
  undefined ***pppuStack_168;
  undefined4 uStack_160;
  undefined **appuStack_158 [3];
  undefined ***pppuStack_140;
  undefined4 uStack_138;
  undefined **appuStack_130 [3];
  undefined ***pppuStack_118;
  undefined4 uStack_110;
  undefined **appuStack_108 [3];
  undefined ***pppuStack_f0;
  undefined4 uStack_e8;
  undefined **appuStack_e0 [3];
  undefined ***pppuStack_c8;
  undefined4 uStack_c0;
  undefined **appuStack_b8 [3];
  undefined ***pppuStack_a0;
  undefined4 uStack_98;
  undefined **appuStack_90 [3];
  undefined ***pppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_3b8[0] = 0;
  appuStack_3b0[0] = &PTR_FUN_110cf14e8;
  pppuStack_398 = appuStack_3b0;
  appuStack_388[0] = &PTR_DAT_110cf1578;
  pppuStack_370 = appuStack_388;
  uStack_368 = 2;
  appuStack_360[0] = &PTR_DAT_110cf15f8;
  pppuStack_348 = appuStack_360;
  uStack_340 = 3;
  appuStack_338[0] = &PTR_DAT_110cf1678;
  pppuStack_320 = appuStack_338;
  uStack_318 = 4;
  appuStack_310[0] = &PTR_DAT_110cf16f8;
  pppuStack_2f8 = appuStack_310;
  uStack_2f0 = 5;
  appuStack_2e8[0] = &PTR_DAT_110cf1778;
  pppuStack_2d0 = appuStack_2e8;
  uStack_2c8 = 6;
  appuStack_2c0[0] = &PTR_DAT_110cf17f8;
  pppuStack_2a8 = appuStack_2c0;
  uStack_2a0 = 7;
  appuStack_298[0] = &PTR_DAT_110cf1878;
  pppuStack_280 = appuStack_298;
  uStack_278 = 8;
  appuStack_270[0] = &PTR_DAT_110cf18f8;
  pppuStack_258 = appuStack_270;
  uStack_250 = 9;
  appuStack_248[0] = &PTR_DAT_110cf1978;
  pppuStack_230 = appuStack_248;
  uStack_228 = 10;
  appuStack_220[0] = &PTR_DAT_110cf19f8;
  pppuStack_208 = appuStack_220;
  uStack_200 = 0xb;
  appuStack_1f8[0] = &PTR_DAT_110cf1a78;
  pppuStack_1e0 = appuStack_1f8;
  uStack_1d8 = 0xc;
  appuStack_1d0[0] = &PTR_DAT_110cf1af8;
  pppuStack_1b8 = appuStack_1d0;
  uStack_1b0 = 0xd;
  appuStack_1a8[0] = &PTR_DAT_110cf1b78;
  pppuStack_190 = appuStack_1a8;
  uStack_188 = 0xe;
  appuStack_180[0] = &PTR_DAT_110cf1bf8;
  pppuStack_168 = appuStack_180;
  uStack_160 = 0xf;
  appuStack_158[0] = &PTR_DAT_110cf1c78;
  pppuStack_140 = appuStack_158;
  uStack_138 = 0x10;
  appuStack_130[0] = &PTR_DAT_110cf1cf8;
  pppuStack_118 = appuStack_130;
  uStack_110 = 0x11;
  lStack_390 = CONCAT44(lStack_390._4_4_,1);
  appuStack_108[0] = &PTR_DAT_110cf1d78;
  pppuStack_f0 = appuStack_108;
  uStack_e8 = 0x12;
  appuStack_e0[0] = &PTR_DAT_110cf1df8;
  pppuStack_c8 = appuStack_e0;
  uStack_c0 = 0x13;
  appuStack_b8[0] = &PTR_DAT_110cf1e78;
  pppuStack_a0 = appuStack_b8;
  uStack_98 = 0x14;
  appuStack_90[0] = &PTR_DAT_110cf1ef8;
  pppuStack_78 = appuStack_90;
  pplStack_408 = (long **)0x0;
  uStack_400 = 0;
  puStack_4f8 = param_1;
  uStack_4f0 = param_6;
  ppplStack_410 = &pplStack_408;
  for (lVar13 = 0; lVar13 != 0x348; lVar13 = lVar13 + 0x28) {
    pppplVar6 = (long ****)&pplStack_408;
    if ((&pplStack_408 == ppplStack_410) ||
       (func_0x000107c27bdc(), *(int *)(pppplVar6 + 4) < *(int *)((long)aiStack_3b8 + lVar13))) {
      pppplVar4 = (long ****)&pplStack_408;
      ppplStack_3f8 = &pplStack_408;
      if ((long ***)pplStack_408 != (long ***)0x0) {
        ppplStack_3f8 = (long ***)pppplVar6;
        pppplVar4 = pppplVar6 + 1;
        goto LAB_10b4dcc68;
      }
LAB_10b4dcc7c:
      lVar5 = 0x48;
      __Znwm();
      lStack_3d8 = lVar5;
      ppplStack_3d0 = &pplStack_408;
      uStack_3c8 = 0;
      *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)((long)aiStack_3b8 + lVar13);
      func_0x00010b4ddfbc(lVar5 + 0x28,(long)appuStack_3b0 + lVar13);
      uStack_3c8 = CONCAT71(uStack_3c8._1_7_,1);
      func_0x00010b4dde9c(&ppplStack_410,ppplStack_3f8,pppplVar4,lVar5);
      lStack_3d8 = 0;
      func_0x00010b4ddf38(&lStack_3d8);
    }
    else {
      pppplVar4 = &ppplStack_410;
      FUN_10b4ddeec(pppplVar4,&ppplStack_3f8);
LAB_10b4dcc68:
      if (*pppplVar4 == (long ***)0x0) goto LAB_10b4dcc7c;
    }
  }
  lVar13 = 0x328;
  do {
    func_0x00010b4dde58((long)aiStack_3b8 + lVar13);
    lVar13 = lVar13 + -0x28;
    uVar3 = lVar13 == -0x20;
  } while (!(bool)uVar3);
  FUN_10b4ddc1c(auStack_4e8,param_4);
  FUN_10b4de0a0(aiStack_3b8,param_2,param_3,auStack_4e8,param_5,uStack_4f0);
  func_0x00010792d620(auStack_4e8);
  while( true ) {
    uVar1 = pppuStack_1e0._0_4_;
    uVar12 = (ulong)pppuStack_1e0 & 0xffffffff;
    pppplVar6 = &ppplStack_410;
    FUN_10b4ddeec(pppplVar6,&uStack_3e0,uVar12);
    ppplVar11 = *pppplVar6;
    if (ppplVar11 == (long ***)0x0) {
      ppplVar11 = (long ***)0x48;
      __Znwm();
      uStack_3e8 = 1;
      *(undefined4 *)(ppplVar11 + 4) = uVar1;
      ppplVar11[8] = (long **)0x0;
      ppplStack_3f0 = &pplStack_408;
      func_0x00010b4dde9c(&ppplStack_410,uStack_3e0,pppplVar6,ppplVar11);
      ppplStack_3f8 = (long ***)0x0;
      func_0x00010b4ddf38(&ppplStack_3f8);
      param_3 = pppplVar6;
    }
    func_0x00010b4ddfbc(&lStack_3d8,ppplVar11 + 5);
    func_0x00010b4de08c();
    if ((bool)uVar3) {
      uVar3 = 0;
    }
    else {
      uVar3 = *extraout_x8;
    }
    ppplStack_3f8 = (long ***)CONCAT71(ppplStack_3f8._1_7_,uVar3);
    if (plStack_3c0 == (long *)0x0) {
      func_0x000104bfeb48();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b4dce64);
      (*pcVar2)();
    }
    piVar10 = aiStack_3b8;
    pppplVar6 = &ppplStack_3f8;
    plVar7 = plStack_3c0;
    (**(code **)(*plStack_3c0 + 0x30))(plStack_3c0,piVar10,pppplVar6);
    if (((ulong)plVar7 >> 0x20 & 1) == 0) break;
    uVar3 = (int)plVar7 == 2;
    if (!(bool)uVar3) {
      if ((int)plVar7 == 0) {
        func_0x00010b4de080(aiStack_3b8);
        goto LAB_10b4dce04;
      }
      func_0x00010b4de08c();
      if ((bool)uVar3) {
        func_0x00010b4de070();
        func_0x00010b4de080(aiStack_3b8);
        goto LAB_10b4dce18;
      }
      lStack_390 = extraout_x8_00 + 1;
      uVar3 = false;
    }
    func_0x00010b4de070();
  }
  *puStack_4f8 = (ulong)plVar7 & 0xffffffff;
  puStack_4f8[1] = (ulong)&PTR_PTR_110cf1458;
  *(undefined1 *)(puStack_4f8 + 0x1a) = 0;
LAB_10b4dce04:
  func_0x00010b4de070();
LAB_10b4dce18:
  piVar8 = aiStack_3b8;
  func_0x00010b4dde20();
  func_0x00010b4de078();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010b4dde20(aiStack_3b8);
    func_0x00010b4de078();
    piVar9 = piVar8;
    __Unwind_Resume(piVar8);
    pcStack_508 = FUN_10b4dcee0;
    ppplStack_530 = (long ***)param_3;
    uStack_528 = uVar12;
    pplStack_520 = (long **)ppplVar11;
    piStack_518 = piVar8;
    puStack_510 = &stack0xfffffffffffffff0;
    FUN_10b4ddc1c(auStack_608,pppplVar6);
    auStack_6e0[0] = 0;
    uStack_610 = 0;
    FUN_10b4dc970(extraout_x8_01,piVar9,piVar10,auStack_608,auStack_6e0,0);
    func_0x00010792d620(auStack_6e0);
    func_0x00010792d620(auStack_608);
    if ((*(byte *)(extraout_x8_01 + 0xd0) & 1) != 0) {
      uVar12 = extraout_x8_01;
      FUN_10b4dcfa8();
      func_0x000107c27cf4();
      if ((uVar12 & 1) == 0) {
        FUN_10b4dcfa8(extraout_x8_01);
      }
    }
    return;
  }
  return;
}



/* Entry: 10b4dcee0; end: 10b4dcfa7;  */

void FUN_10b4dcee0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 auStack_1e0 [208];
  undefined1 uStack_110;
  undefined1 auStack_108 [216];
  
  FUN_10b4ddc1c(auStack_108,param_4);
  auStack_1e0[0] = 0;
  uStack_110 = 0;
  FUN_10b4dc970(param_1,param_2,param_3,auStack_108,auStack_1e0,0);
  func_0x00010792d620(auStack_1e0);
  func_0x00010792d620(auStack_108);
  if ((*(byte *)(param_1 + 0xd0) & 1) != 0) {
    uVar1 = param_1;
    FUN_10b4dcfa8();
    func_0x000107c27cf4();
    if ((uVar1 & 1) == 0) {
      FUN_10b4dcfa8(param_1);
    }
  }
  return;
}



/* Entry: 10b4dcfa8; end: 10b4dd007;  */

void FUN_10b4dcfa8(undefined8 *param_1)

{
  code *pcVar1;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    return;
  }
  ppuStack_38 = &PTR_DAT_1109ebe50;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  func_0x00010792d5b8(&ppuStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b4dcff4);
  (*pcVar1)();
}



/* Entry: 10b4dd008; end: 10b4dd00f;  */

void FUN_10b4dd008(void)

{
  return;
}



/* Entry: 10b4dd010; end: 10b4dd02f;  */

void FUN_10b4dd010(undefined8 *param_1)

{
  func_0x00010b4de050();
  *param_1 = &PTR_FUN_110cf14e8;
  return;
}



/* Entry: 10b4dd030; end: 10b4dd05b;  */

void FUN_10b4dd030(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110cf14e8;
  return;
}



/* Entry: 10b4dd05c; end: 10b4dd083;  */

void FUN_10b4dd05c(undefined8 param_1)

{
  func_0x00010b4de058();
  func_0x00010b4de040(param_1,&PTR_DAT_110cf1558);
  func_0x00010b4de028();
  return;
}



/* Entry: 10b4dd084; end: 10b4dd097;  */

undefined ** FUN_10b4dd084(void)

{
  return &PTR_DAT_110cf1558;
}



/* Entry: 10b4dd098; end: 10b4dd0b7;  */

void FUN_10b4dd098(undefined8 *param_1)

{
  func_0x00010b4de050();
  *param_1 = &PTR_DAT_110cf1578;
  return;
}



/* Entry: 10b4dd0b8; end: 10b4dd0d3;  */

void FUN_10b4dd0b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110cf1578;
  return;
}



/* Entry: 10b4dd0d4; end: 10b4dd0ef;  */

ulong FUN_10b4dd0d4(ulong param_1)

{
  func_0x00010b4de064();
  func_0x00010b4de508();
  return param_1 & 0xffffffffff;
}



/* Entry: 10b4dd0f0; end: 10b4dd117;  */

void FUN_10b4dd0f0(undefined8 param_1)

{
  func_0x00010b4de058();
  func_0x00010b4de040(param_1,&PTR_DAT_110cf15d8);
  func_0x00010b4de028();
  return;
}



/* Entry: 10b4dd118; end: 10b4dd12b;  */

undefined ** FUN_10b4dd118(void)

{
  return &PTR_DAT_110cf15d8;
}



/* Entry: 10b4dd12c; end: 10b4dd14b;  */

void FUN_10b4dd12c(undefined8 *param_1)

{
  func_0x00010b4de050();
  *param_1 = &PTR_DAT_110cf15f8;
  return;
}



/* Entry: 10b4dd14c; end: 10b4dd177;  */

void FUN_10b4dd14c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110cf15f8;
  return;
}



/* Entry: 10b4dd178; end: 10b4dd19f;  */

void FUN_10b4dd178(undefined8 param_1)

{
  func_0x00010b4de058();
  func_0x00010b4de040(param_1,&PTR_DAT_110cf1658);
  func_0x00010b4de028();
  return;
}



/* Entry: 10b4dd1a0; end: 10b4dd1b3;  */

undefined ** FUN_10b4dd1a0(void)

{
  return &PTR_DAT_110cf1658;
}



/* Entry: 10b4dd1b4; end: 10b4dd1d3;  */

void FUN_10b4dd1b4(undefined8 *param_1)

{
  func_0x00010b4de050();
  *param_1 = &PTR_DAT_110cf1678;
  return;
}



/* Entry: 10b4dd1d4; end: 10b4dd1ef;  */

void FUN_10b4dd1d4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110cf1678;
  return;
}



/* Entry: 10b4dd1f0; end: 10b4dd20b;  */

ulong FUN_10b4dd1f0(ulong param_1)

{
  func_0x00010b4de064();
  FUN_10b4de86c();
  return param_1 & 0xffffffffff;
}


