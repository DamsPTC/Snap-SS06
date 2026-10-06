/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10879ec30; end: 10879ec57;  */

void FUN_10879ec30(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010879ef08();
  func_0x000107c27b9c();
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10879ec58; end: 10879ec7b;  */

void FUN_10879ec58(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10879ec7c; end: 10879eca3;  */

void FUN_10879ec7c(long param_1,long param_2)

{
  func_0x00010879ef08();
  FUN_10879eca4(param_1 + 8,param_2 + 8);
  func_0x00010879f098();
  return;
}



/* Entry: 10879eca4; end: 10879ed03;  */

void FUN_10879eca4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 != *(char *)(param_2 + 4)) {
    if (cVar1 == '\0') {
      param_1 = param_2;
      func_0x00010879f060();
    }
    else {
      uVar3 = param_1[1];
      uVar2 = *param_1;
      param_2[2] = param_1[2];
      param_2[1] = uVar3;
      *param_2 = uVar2;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      param_2[3] = param_1[3];
      *(undefined1 *)(param_2 + 4) = 1;
    }
    if (*(char *)(param_1 + 4) == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      *(undefined1 *)(param_1 + 4) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_10879ec30();
    func_0x00010879ef88();
    FUN_10879ec30();
    func_0x00010879eee8();
    return;
  }
  return;
}



/* Entry: 10879ed04; end: 10879ed47;  */

void FUN_10879ed04(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10879ec30();
  func_0x00010879ef88();
  FUN_10879ec30();
  func_0x00010879eee8();
  return;
}



/* Entry: 10879ed48; end: 10879eda3;  */

void FUN_10879ed48(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c33508();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010879f0ac();
    FUN_10879ee00();
    func_0x00010879ef88();
    FUN_10879eda4();
    func_0x00010879eee8();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x28) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)(lVar1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10879eda4; end: 10879edff;  */

undefined8 * FUN_10879eda4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    FUN_10879ec30(param_1);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}



/* Entry: 10879ee00; end: 10879ee3f;  */

void FUN_10879ee00(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x00010879ef70();
  func_0x000107c313dc();
  func_0x00010879eea0();
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  return;
}



/* Entry: 10879ee40; end: 10879ee7b;  */

void FUN_10879ee40(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (param_2 != param_1) {
    func_0x00010879ef08();
    func_0x00010879ee7c();
    if ((int)unaff_x19[1] != 0) {
      func_0x00010879f0ec();
      func_0x000100361ce4();
      plVar2 = param_1;
      func_0x00010064e8bc();
      plVar3 = (long *)*unaff_x25;
      func_0x000100361e44();
      plVar5 = unaff_x25;
      if (0 < (int)plVar2) {
        func_0x000107c39cb4();
        param_1 = param_1 + (int)plVar2;
        plVar5 = unaff_x25 + (int)plVar2;
      }
      lVar4 = unaff_x19[2];
      for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
        plVar2 = plVar3;
        (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
        *param_1 = (long)plVar2;
        func_0x00010064e8d4();
        param_1 = param_1 + 1;
      }
      func_0x000100361e74();
      if (iVar1 < unaff_w20) {
        *(int *)(*unaff_x19 + -1) = unaff_w20;
      }
      return;
    }
  }
  return;
}



/* Entry: 10879ee7c; end: 10879f11b;  */

void FUN_10879ee7c(ulong *param_1)

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



/* Entry: 10879f11c; end: 10879f31f;  */

long * FUN_10879f11c(long *param_1,int *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x22;
  long *plVar13;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  iVar3 = *param_2;
  uVar12 = (ulong)iVar3;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar7 = uVar11 - 1;
    if ((uVar11 & uVar7) == 0) {
      unaff_x22 = uVar7 & uVar12;
    }
    else {
      unaff_x22 = uVar12;
      if (uVar11 <= uVar12) {
        uVar9 = 0;
        if (uVar11 != 0) {
          uVar9 = uVar12 / uVar11;
        }
        unaff_x22 = uVar12 - uVar9 * uVar11;
      }
    }
    plVar13 = *(long **)(*param_1 + unaff_x22 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_10879f1d0;
          uVar9 = plVar13[1];
          if (uVar9 != uVar12) break;
          if ((int)plVar13[2] == iVar3) goto LAB_10879f2f0;
        }
        if ((uVar11 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar11 <= uVar9) {
          uVar4 = 0;
          if (uVar11 != 0) {
            uVar4 = uVar9 / uVar11;
          }
          uVar9 = uVar9 - uVar4 * uVar11;
        }
      } while (uVar9 == unaff_x22);
    }
  }
LAB_10879f1d0:
  plVar1 = param_1 + 2;
  plVar13 = (long *)0x20;
  __Znwm();
  uStack_58 = 1;
  *plVar13 = 0;
  plVar13[1] = uVar12;
  *(int *)(plVar13 + 2) = iVar3;
  plVar13[3] = 0;
  plStack_68 = plVar13;
  plStack_60 = plVar1;
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    bVar5 = 2 < uVar11;
    bVar6 = uVar11 == 3;
    func_0x0001087a47bc(uVar11 << 1);
    uVar2 = extraout_x8;
    if (!bVar5 || bVar6) {
      uVar2 = extraout_x9;
    }
    FUN_10863a5c0(param_1,uVar2);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x22 = uVar11 - 1 & uVar12;
    }
    else {
      unaff_x22 = uVar12;
      if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        unaff_x22 = uVar12 - uVar7 * uVar11;
      }
    }
  }
  plVar13 = plStack_68;
  lVar8 = *param_1;
  plVar10 = *(long **)(lVar8 + unaff_x22 * 8);
  if (plVar10 == (long *)0x0) {
    *plStack_68 = *plVar1;
    *plVar1 = (long)plStack_68;
    *(long **)(lVar8 + unaff_x22 * 8) = plVar1;
    if (*plStack_68 != 0) {
      uVar12 = *(ulong *)(*plStack_68 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        uVar12 = uVar12 - uVar7 * uVar11;
      }
      *(long **)(lVar8 + uVar12 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar10;
    *plVar10 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10863a9ec(&plStack_68);
LAB_10879f2f0:
  return plVar13 + 3;
}



/* Entry: 10879f320; end: 10879f36f;  */

void FUN_10879f320(undefined1 *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  
  do {
    if (param_2 == param_3) {
      uVar1 = 0;
      *param_1 = 0;
LAB_10879f364:
      param_1[0x18] = uVar1;
      return;
    }
    if (*(char *)(param_2 + 0x50) == '\x01' && *(int *)(param_2 + 0x48) == 0) {
      FUN_1087a2c74(param_1,param_2 + 0x20);
      uVar1 = 1;
      goto LAB_10879f364;
    }
    param_2 = param_2 + 0x80;
  } while( true );
}



/* Entry: 10879f370; end: 10879f3e3;  */

void FUN_10879f370(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10879f3e4(param_1,param_2[1] - *param_2 >> 7);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x80) {
    FUN_10879f458(param_1,lVar2 + 0x10,lVar2 + 8);
  }
  return;
}



/* Entry: 10879f3e4; end: 10879f457;  */

long * FUN_10879f3e4(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_1 + 2;
  if ((undefined4 *)(*plVar3 - *param_1 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x0001087a2378();
      func_0x0001087a4614();
      func_0x0001087a44bc();
      puVar1 = (undefined4 *)plVar3[1];
      if (puVar1 < (undefined4 *)plVar3[2]) {
        uVar2 = *param_3;
        *puVar1 = *param_2;
        puVar1[1] = uVar2;
        plVar4 = (long *)(puVar1 + 2);
      }
      else {
        plVar4 = plVar3;
        FUN_1087a2494();
      }
      plVar3[1] = (long)plVar4;
      return plVar4 + -1;
    }
    FUN_1087a2404();
    func_0x0001087a4600();
    FUN_1087a238c();
    func_0x0001087a4614();
  }
  return plVar3;
}



/* Entry: 10879f458; end: 10879f49f;  */

undefined4 * FUN_10879f458(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 2);
  if (puVar2 < *(undefined4 **)(param_1 + 4)) {
    uVar1 = *param_3;
    *puVar2 = *param_2;
    puVar2[1] = uVar1;
    puVar2 = puVar2 + 2;
  }
  else {
    puVar2 = param_1;
    FUN_1087a2494();
  }
  *(undefined4 **)(param_1 + 2) = puVar2;
  return puVar2 + -2;
}



/* Entry: 10879f4a0; end: 10879ffd7;  */

void FUN_10879f4a0(undefined8 param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
                  undefined4 param_5,ulong param_6,ulong *param_7,long *param_8)

{
  undefined **ppuVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined2 uVar6;
  byte bVar7;
  byte bVar8;
  undefined7 uVar9;
  undefined7 uVar10;
  byte bVar11;
  byte bVar12;
  undefined7 uVar13;
  undefined7 uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 **ppuVar17;
  undefined **ppuVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  long lVar21;
  ulong *puVar22;
  long *plVar23;
  long lVar24;
  int iVar25;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 in_stack_00000078;
  long *in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 *in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e4;
  undefined1 in_stack_000000e8;
  undefined4 in_stack_000000ec;
  undefined1 in_stack_000000f0;
  long *in_stack_000000f8;
  undefined8 *in_stack_00000100;
  ulong uStack_878;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  ulong uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined1 auStack_820 [24];
  undefined1 auStack_808 [24];
  undefined1 auStack_7f0 [24];
  undefined1 auStack_7d8 [24];
  undefined1 auStack_7c0 [24];
  undefined1 auStack_7a8 [24];
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined1 auStack_750 [40];
  undefined1 auStack_728 [96];
  undefined1 auStack_6c8 [96];
  undefined1 auStack_668 [904];
  undefined1 auStack_2e0 [24];
  undefined1 uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  undefined1 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 **ppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined4 uStack_218;
  ulong uStack_210;
  byte bStack_208;
  undefined7 uStack_207;
  byte bStack_200;
  undefined8 uStack_1ff;
  undefined1 auStack_1f0 [24];
  uint uStack_1d8;
  char cStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined1 auStack_1a0 [32];
  char cStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  byte bStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_110 [32];
  undefined8 **ppuStack_f0;
  code *pcStack_e8;
  ulong uStack_e0;
  byte bStack_d8;
  byte bStack_d7;
  undefined6 uStack_d6;
  byte bStack_d0;
  undefined7 uStack_cf;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint uStack_a8;
  undefined1 uStack_98;
  undefined1 auStack_88 [24];
  undefined1 uStack_70;
  char cStack_68;
  undefined1 uStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x0001087a4730();
  func_0x000107c29ee4(auStack_110);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_120 = 0;
  FUN_10863acbc(&uStack_130,*(undefined8 *)(in_stack_000000a0 + 0x18));
  uStack_878 = (ulong)param_8 >> 0x20;
  plVar23 = (long *)(in_stack_000000a0 + 0x10);
  puVar22 = param_7;
  plVar16 = param_8;
  while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
    func_0x000107c29e2c(&uStack_150,plVar23 + 0x49);
    if ((bStack_138 & 1) == 0) {
      plVar15 = (long *)*param_3;
      if (plVar15 != (long *)0x0) {
        uStack_170 = 0;
        uStack_168 = 0;
        uStack_160 = 0;
        ppuStack_178 = &PTR_FUN_110a609a8;
        uStack_158 = 0x1aa;
        (**(code **)(*plVar15 + 0x50))(plVar15,&ppuStack_178);
        func_0x000107c2882c(&ppuStack_178);
      }
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&puStack_260,&uStack_150);
      func_0x000107c27994(&ppuStack_280,plVar23 + 5);
      uStack_18 = uStack_258;
      puStack_20 = puStack_260;
      uStack_10 = uStack_250;
      uStack_258 = 0;
      puStack_260 = (undefined8 *)0x0;
      uStack_250 = 0;
      uStack_38 = uStack_278;
      ppuStack_40 = ppuStack_280;
      uStack_30 = uStack_270;
      ppuStack_280 = (undefined8 **)0x0;
      uStack_278 = 0;
      uStack_270 = 0;
      auStack_88[0] = 0;
      uStack_48 = 0;
      uStack_e0 = uStack_e0 & 0xffffffffffffff00;
      uStack_98 = 0;
      FUN_10862240c(&puStack_248,&puStack_20,&ppuStack_40,*(int *)(plVar23 + 0x26) == 1,auStack_88,
                    &uStack_e0);
      func_0x0001086225a4(&uStack_e0);
      func_0x0001086225d4(auStack_88);
      func_0x000107c27914(&ppuStack_40);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_20);
      func_0x000107c27914(&ppuStack_280);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_260);
      uVar13 = uStack_c7;
      bVar11 = bStack_c8;
      uVar9 = uStack_cf;
      bVar7 = bStack_d0;
      ppuVar1 = &PTR_PTR_11326be88;
      if ((undefined **)plVar23[0x16] != (undefined **)0x0) {
        ppuVar1 = (undefined **)plVar23[0x16];
      }
      ppuVar18 = &PTR_PTR_11326be60;
      if (*(int *)((long)ppuVar1 + 0x1c) == 1) {
        ppuVar18 = (undefined **)ppuVar1[2];
      }
      bVar3 = *(byte *)((long)ppuVar18 + 0x21);
      uVar6 = *(undefined2 *)(ppuVar18 + 4);
      puVar20 = ppuVar18[2];
      bVar4 = *(byte *)((long)ppuVar18 + 0x22);
      puVar22 = (ulong *)(ulong)bVar4;
      bStack_d0 = (byte)puVar20;
      bVar8 = bStack_d0;
      bStack_c8 = (byte)ppuVar18[3];
      bVar12 = bStack_c8;
      uStack_c7 = (undefined7)((ulong)ppuVar18[3] >> 8);
      uVar14 = uStack_c7;
      uStack_cf = (undefined7)((ulong)puVar20 >> 8);
      uVar10 = uStack_cf;
      if (*(int *)(plVar23 + 0x26) == 0) {
        bStack_d0 = bVar7;
        uStack_cf = uVar9;
        bStack_c8 = bVar11;
        uStack_c7 = uVar13;
        func_0x0001086a4acc(auStack_88,plVar23 + 8,in_stack_000000b8);
        if (cStack_68 == '\x01') {
          func_0x000107c29ee0(&puStack_20,auStack_88);
        }
        else {
          func_0x000107c27994(&puStack_20,in_stack_000000b8);
        }
        iVar25 = *(int *)(plVar23 + 0x29);
        func_0x000107c27994(&uStack_2a0,&puStack_20);
        uStack_e0 = CONCAT62(uStack_e0._2_6_,uVar6);
        bStack_d7 = (byte)((ulong)puVar20 >> 8);
        uStack_d6 = (undefined6)((ulong)puVar20 >> 0x10);
        uStack_b8 = uStack_298;
        uStack_c0 = uStack_2a0;
        uStack_b0 = uStack_290;
        uStack_2a0 = 0;
        uStack_298 = 0;
        uStack_290 = 0;
        uStack_a8 = (uint)(iVar25 == 1);
        bStack_d8 = bVar8;
        bStack_d0 = bVar12;
        uStack_cf = uVar14;
        bStack_c8 = bVar4;
        if (cStack_1d0 == '\x01') {
          uStack_210 = uStack_e0;
          uStack_1ff = CONCAT17(bVar4,uVar14);
          bStack_200 = bVar12;
          bStack_208 = bVar8;
          uStack_207 = uVar10;
          func_0x000107c3194c(auStack_1f0,&uStack_c0);
          uStack_1d8 = uStack_a8;
          func_0x0001087a4564();
        }
        else {
          FUN_1086224c0(&uStack_210,&uStack_e0);
          func_0x0001087a4564();
        }
        func_0x000107c27914(&uStack_c0);
        func_0x000107c27914(&uStack_2a0);
        uStack_218 = 0;
        func_0x000107c27914(&puStack_20);
        func_0x0001086d73d8(auStack_88);
      }
      else {
        auStack_88[0] = 0;
        uStack_70 = 0;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,*(undefined4 *)(plVar23 + 0xc));
        uStack_c0 = CONCAT71(uStack_c0._1_7_,bVar4);
        bStack_d8 = *(byte *)(ppuVar18 + 4);
        bStack_d7 = bVar3;
        func_0x000107c27afc(&uStack_b8,auStack_88);
        func_0x000107c279dc(auStack_88);
        if (cStack_180 == '\x01') {
          uStack_1c0 = CONCAT62(uStack_d6,CONCAT11(bStack_d7,bStack_d8));
          uStack_1b0 = CONCAT71(uStack_c7,bStack_c8);
          uStack_1b8 = CONCAT71(uStack_cf,bStack_d0);
          uStack_1c8 = uStack_e0;
          uStack_1a8 = (undefined1)uStack_c0;
          func_0x000107c28908(auStack_1a0,&uStack_b8);
          func_0x0001087a4564();
        }
        else {
          FUN_108622550(&uStack_1c8,&uStack_e0);
          func_0x0001087a4564();
        }
        func_0x000107c279dc(&uStack_b8);
        if (*(char *)(plVar23 + 10) < '\0') {
          func_0x000107c29ee0(&uStack_e0,plVar23[0x1c]);
          FUN_10869026c(auStack_1a0,&uStack_e0);
          func_0x000107c27914(&uStack_e0);
        }
        uStack_218 = 1;
      }
      func_0x00010863afb4(&uStack_130,&puStack_248);
      func_0x00010863a4e0(&puStack_248);
      in_stack_00000080 = plVar16;
      plVar16 = (long *)(ulong)bVar3;
    }
    func_0x000107c279a4(&uStack_150);
  }
  iVar25 = (int)plVar16;
  bStack_d8 = 0;
  bStack_d7 = 0;
  uStack_d6 = 0;
  uStack_e0 = 0;
  bStack_d0 = 0;
  uStack_cf = 0;
  func_0x000107c27ab0(&uStack_e0,(in_stack_00000080[1] - *in_stack_00000080) / 0x118);
  lVar2 = in_stack_00000080[1];
  for (lVar21 = *in_stack_00000080; lVar21 != lVar2; lVar21 = lVar21 + 0x118) {
    if (((uint)(iVar25 == 0x15) & (uint)((ulong)param_8 >> 0x20)) == 0) {
      if (*(char *)(lVar21 + 0x54) == '\x01') {
        plVar16 = (long *)(ulong)*(uint *)(lVar21 + 0x50);
        func_0x0001086b0fc8();
        uStack_878 = 1;
      }
      if (*(char *)(lVar21 + 8) == '\x01') {
        param_6 = param_6 & 0xffffff0000000000 | (ulong)*(uint5 *)(lVar21 + 4);
      }
    }
    if (*(char *)(lVar21 + 0x28) == '\x01') {
      func_0x000107c27c5c(puVar22,lVar21 + 0x10);
    }
    if (*(char *)(lVar21 + 0x108) == '\x01') {
      func_0x000107c28840(&uStack_e0,lVar21 + 0xf0);
    }
  }
  plVar15 = (long *)*param_2;
  (**(code **)(*plVar15 + 0x10))();
  plVar23 = (long *)*in_stack_00000070;
  if (*(char *)(in_stack_00000070 + 1) == '\0') {
    plVar23 = plVar15;
  }
  FUN_108848684(auStack_88);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_140 = 0;
  if ((char)in_stack_000000f8[3] == '\x01') {
    puStack_20 = (undefined8 *)0x0;
    uStack_18 = 0;
    uStack_10 = 0;
    lVar2 = in_stack_000000f8[1];
    for (lVar21 = *in_stack_000000f8; lVar21 != lVar2; lVar21 = lVar21 + 0x30) {
      ppuVar1 = &PTR_PTR_113280278;
      if (*(undefined ***)(lVar21 + 0x18) != (undefined **)0x0) {
        ppuVar1 = *(undefined ***)(lVar21 + 0x18);
      }
      ppuVar18 = &PTR_PTR_113280230;
      if (*(int *)((long)ppuVar1 + 0x1c) == 5) {
        ppuVar18 = (undefined **)ppuVar1[2];
      }
      puVar20 = ppuVar18[2];
      ppuVar1 = ppuVar18 + 2;
      if (((ulong)puVar20 & 1) != 0) {
        ppuVar1 = (undefined **)(puVar20 + 7);
      }
      for (lVar24 = (long)*(int *)(ppuVar18 + 3) << 3; lVar24 != 0; lVar24 = lVar24 + -8) {
        puVar19 = (undefined8 *)(*(ulong *)(*ppuVar1 + 0x10) & 0xfffffffffffffffc);
        cVar5 = *(char *)((long)puVar19 + 0x17);
        puStack_248 = (undefined8 *)*puVar19;
        if (-1 < (long)cVar5) {
          puStack_248 = puVar19;
        }
        lStack_240 = puVar19[1];
        if (-1 < cVar5) {
          lStack_240 = (long)cVar5;
        }
        ppuVar17 = &puStack_248;
        FUN_108668260();
        ppuStack_40 = ppuVar17;
        func_0x000107c27adc(&puStack_20,&ppuStack_40);
        ppuVar1 = ppuVar1 + 1;
      }
    }
    puStack_248 = puStack_20;
    lStack_240 = uStack_18;
    puStack_238 = &DAT_10f68e8ee;
    uStack_230 = 1;
    ppuStack_f0 = &puStack_248;
    pcStack_e8 = FUN_1087a34a4;
    func_0x000107c2793c(&DAT_10f2fb62f);
    func_0x000107c3173c(&ppuStack_40);
    func_0x000107c27b9c(&uStack_150,&ppuStack_40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_40);
    func_0x000107c27ae4(&puStack_20);
    puVar22 = param_7;
  }
  uStack_2c0 = uStack_2c0 & 0xffffffffffffff00;
  uStack_2a8 = (char)puVar22[3] == '\x01';
  if ((bool)uStack_2a8) {
    uStack_2b8 = puVar22[1];
    uStack_2c0 = *puVar22;
    uStack_2b0 = puVar22[2];
    puVar22[1] = 0;
    puVar22[2] = 0;
    *puVar22 = 0;
  }
  auStack_2e0[0] = 0;
  uStack_2c8 = 0;
  FUN_108685044(auStack_668,in_stack_00000088);
  FUN_1086858d8(auStack_6c8,in_stack_00000090);
  FUN_1086858d8(auStack_728,in_stack_00000098);
  func_0x00010863a028(auStack_750,in_stack_00000078);
  uStack_768 = uStack_128;
  uStack_770 = uStack_130;
  uStack_760 = uStack_120;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_788 = in_stack_000000a8[1];
  uStack_790 = *in_stack_000000a8;
  uStack_780 = in_stack_000000a8[2];
  *in_stack_000000a8 = 0;
  in_stack_000000a8[1] = 0;
  in_stack_000000a8[2] = 0;
  func_0x000107c27994(auStack_7a8,auStack_88);
  func_0x000108685d94(auStack_7c0,in_stack_000000c0);
  func_0x000108685f04(auStack_7d8,in_stack_000000c8);
  func_0x0001086862e4(auStack_7f0,in_stack_000000d0);
  func_0x0001086864f4(auStack_808,in_stack_000000d8);
  func_0x000107c29e90();
  FUN_10879ffd8(in_stack_000000e4,in_stack_000000e8);
  func_0x0001087a001c(in_stack_000000ec,in_stack_000000f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_820,&uStack_150);
  uStack_838 = CONCAT62(uStack_d6,CONCAT11(bStack_d7,bStack_d8));
  uStack_840 = uStack_e0;
  uStack_830 = CONCAT71(uStack_cf,bStack_d0);
  bStack_d0 = 0;
  uStack_cf = 0;
  bStack_d8 = 0;
  bStack_d7 = 0;
  uStack_d6 = 0;
  uStack_e0 = 0;
  uStack_858 = in_stack_00000100[1];
  uStack_860 = *in_stack_00000100;
  uStack_850 = in_stack_00000100[2];
  in_stack_00000100[1] = 0;
  in_stack_00000100[2] = 0;
  *in_stack_00000100 = 0;
  FUN_1087a0040();
  func_0x0001086392ac(param_1,param_5,param_6,&uStack_2c0,auStack_2e0,auStack_668,
                      (ulong)plVar16 & 0xffffffff | (ulong)((uint)uStack_878 & 0xff) << 0x20,
                      in_stack_00000060,in_stack_00000068,plVar23,plVar15,auStack_6c8,auStack_728,
                      auStack_750,&uStack_770,&uStack_790,in_stack_000000b0);
  FUN_10863a098(&uStack_860);
  func_0x000107c27a04(&uStack_840);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_820);
  func_0x00010863a148(auStack_808);
  FUN_10863a1e0(auStack_7f0);
  func_0x00010863a290(auStack_7d8);
  func_0x00010863a348(auStack_7c0);
  func_0x000107c27914(auStack_7a8);
  func_0x00010863a3d0(&uStack_790);
  func_0x00010863a458(&uStack_770);
  func_0x00010863a518(auStack_750);
  func_0x000104bee768(auStack_728);
  func_0x000104bee768(auStack_6c8);
  func_0x000104bee3a8(auStack_668);
  func_0x000107c279c4(auStack_2e0);
  func_0x000107c279a4(&uStack_2c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
  func_0x000107c27914(auStack_88);
  func_0x000107c27a04(&uStack_e0);
  func_0x00010863a458(&uStack_130);
  func_0x000107c2a2e0(auStack_110);
  return;
}



/* Entry: 10879ffd8; end: 1087a003f;  */

ulong FUN_10879ffd8(int param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else if (param_1 - 0x2000eaU < 0xb) {
    uVar2 = *(ulong *)(&UNK_10df561f8 + (ulong)(param_1 - 0x2000eaU) * 8);
    uVar1 = 0x100000000;
  }
  else {
    uVar1 = 0x100000000;
    uVar2 = 0xb;
  }
  return uVar2 | uVar1;
}



/* Entry: 1087a0040; end: 1087a007b;  */

uint FUN_1087a0040(long *param_1)

{
  uint uVar1;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x10))();
    FUN_1087a2548();
    uVar1 = (uint)param_1 >> 8 & 0xff;
  }
  return (uint)param_1 & 0xff | uVar1 << 8;
}



/* Entry: 1087a007c; end: 1087a052f;  */

void FUN_1087a007c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined1 auStack_348 [24];
  undefined1 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong auStack_310 [3];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong auStack_2e0 [4];
  undefined4 uStack_2c0;
  int iStack_1d8;
  char cStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_b0 [4];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_30;
  undefined8 uStack_18;
  
  func_0x0001087a4730();
  func_0x000107c279ac(&uStack_90,param_6 + 0xb0);
  FUN_108685948(auStack_b0,param_6 + 200);
  func_0x000108685aec(&uStack_d0,param_6 + 0xe0);
  func_0x000108685c38(&uStack_f0,param_6 + 0xf8);
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  func_0x0001087a4648(&uStack_70,auStack_b0[0]);
  uStack_30 = uStack_c0;
  *(undefined8 *)(extraout_x8_00 + 0x38) = uStack_c8;
  *(undefined8 *)(extraout_x8_00 + 0x30) = uStack_d0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  *(undefined8 *)(extraout_x8_00 + 0x50) = uStack_e8;
  *(undefined8 *)(extraout_x8_00 + 0x48) = uStack_f0;
  uStack_18 = uStack_e0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_e0 = 0;
  func_0x000104bee7a0(&uStack_f0);
  func_0x000104bee7dc(&uStack_d0);
  func_0x0001087a4674();
  func_0x0001087a45d8();
  FUN_1087a0530(&uStack_70,param_6 + 0x38);
  uStack_100 = 0;
  uStack_108 = 0;
  plVar3 = (long *)(param_6 + 0x6f0);
  uStack_f8 = 0;
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    func_0x000107c29f64(auStack_2e0,*param_2,plVar3 + 5,2);
    if (cStack_110 == '\x01') {
      uStack_2f8 = CONCAT44(uStack_2f8._4_4_,(uint)(iStack_1d8 == 1));
      FUN_1087a08fc(&uStack_108,auStack_2e0,&uStack_2f8,plVar3 + 8);
    }
    func_0x000107c288c8(auStack_2e0);
  }
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  FUN_10863b5fc(&uStack_2f8,(*(long *)(param_6 + 0x710) - *(long *)(param_6 + 0x708)) / 0x88);
  lVar4 = *(long *)(param_6 + 0x710);
  for (lVar2 = *(long *)(param_6 + 0x708); lVar2 != lVar4; lVar2 = lVar2 + 0x88) {
    auStack_310[0] = auStack_310[0] & 0xffffffff00000000;
    auStack_2e0[0] = 0;
    auStack_2e0[1] = 0;
    auStack_2e0[2] = 0;
    FUN_1087a0990(&uStack_2f8,lVar2,auStack_310,lVar2 + 0x58,auStack_2e0);
    FUN_10861b4fc(auStack_2e0);
  }
  auStack_310[0] = 0;
  auStack_310[1] = 0;
  auStack_310[2] = 0;
  FUN_10863b948(auStack_310,(*(long *)(param_6 + 0x728) - *(long *)(param_6 + 0x720)) / 0x38);
  lVar4 = *(long *)(param_6 + 0x728);
  for (lVar2 = *(long *)(param_6 + 0x720); lVar2 != lVar4; lVar2 = lVar2 + 0x38) {
    FUN_1087a09cc(auStack_310,lVar2,lVar2 + 0x18);
  }
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_318 = 0;
  FUN_10863bc30(&uStack_328,*(long *)(param_6 + 0x740) - *(long *)(param_6 + 0x738) >> 5);
  lVar4 = *(long *)(param_6 + 0x740);
  for (lVar2 = *(long *)(param_6 + 0x738); lVar2 != lVar4; lVar2 = lVar2 + 0x20) {
    auStack_2e0[0] = auStack_2e0[0] & 0xffffffff00000000;
    FUN_1087a0a90(&uStack_328,lVar2,auStack_2e0,lVar2 + 8);
  }
  auStack_348[0] = 0;
  uStack_330 = 0;
  uVar6 = *(undefined8 *)(param_6 + 0x98c);
  uVar5 = *(undefined8 *)(param_6 + 0x658);
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_350 = 0x3f800000;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  auStack_2e0[1] = 0;
  auStack_2e0[0] = 0;
  auStack_2e0[3] = 0;
  auStack_2e0[2] = 0;
  uStack_2c0 = 0x3f800000;
  FUN_1087a0b3c(auStack_3a0,&uStack_70,param_2);
  uVar1 = *(undefined4 *)(param_6 + 0xa1c);
  func_0x0001087a4544(*(undefined8 *)(param_6 + 0x520));
  func_0x0001087a4530(*(undefined1 *)(param_6 + 0x988));
  func_0x0001086866c4(auStack_3b8);
  FUN_10879f4a0(extraout_x8,param_1,param_3,param_4,6,0,auStack_348,0,uVar6,uVar5,param_6 + 0x7d8,
                &uStack_370,&uStack_388,param_6 + 0x130,param_6 + 0x778,&uStack_70,auStack_2e0,
                auStack_3a0,uVar1);
  FUN_10863a098(auStack_3b8);
  func_0x00010863a3d0(auStack_3a0);
  FUN_1087a42a4(auStack_2e0);
  func_0x000108642290(&uStack_388);
  func_0x00010863a518(&uStack_370);
  func_0x000107c279a4(auStack_348);
  func_0x00010863a148(&uStack_328);
  FUN_10863a1e0(auStack_310);
  func_0x00010863a290(&uStack_2f8);
  func_0x00010863a348(&uStack_108);
  func_0x0001087a4638();
  return;
}



/* Entry: 1087a0530; end: 1087a08fb;  */

void FUN_1087a0530(undefined8 param_1,long *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined4 *puVar7;
  long ***ppplVar8;
  long lVar9;
  long ***ppplVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 unaff_x30;
  undefined1 auStack_1d0 [88];
  long *plStack_178;
  long **pplStack_170;
  long lStack_168;
  long **pplStack_138;
  long **pplStack_130;
  long **pplStack_128;
  ulong uStack_120;
  long **pplStack_110;
  long **pplStack_108;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  
  func_0x0001087a4698();
  FUN_1087a256c();
  lVar12 = param_2[1] - *param_2;
  if (0 < lVar12) {
    if (unaff_x19[2] - unaff_x19[1] < lVar12) {
      func_0x0001087a47b0();
      func_0x000107c27ac8();
      func_0x0001087a47b0();
      func_0x000107c27ab8(&plStack_88);
      plVar4 = (long *)((long)plStack_78 + lVar12);
      for (; lVar12 != 0; lVar12 = lVar12 + -0x18) {
        func_0x0001087a4728(plStack_78);
        plStack_78 = plStack_78 + 3;
      }
      plStack_78 = plVar4;
      FUN_1086aa8cc();
      func_0x000107c27ac0(&plStack_88);
    }
    else {
      FUN_10872a79c();
    }
  }
  FUN_1087a2638(unaff_x19 + 3,unaff_x19[4],param_2[3],param_2[4]);
  lVar12 = param_2[6];
  lVar5 = param_2[7];
  lVar13 = lVar5 - lVar12;
  if (0 < lVar13) {
    plVar3 = unaff_x19 + 6;
    lVar9 = unaff_x19[7];
    plVar4 = unaff_x19 + 8;
    if (*plVar4 - lVar9 < lVar13) {
      plVar2 = plVar3;
      func_0x000105291f78(plVar3,(lVar9 - *plVar3) / 0x18 + lVar13 / 0x18);
      func_0x000105291c78(&plStack_88,plVar2,(lVar9 - *plVar3) / 0x18,plVar4);
      lVar5 = (long)plStack_78 + lVar13;
      plVar3 = plStack_78;
      for (; lVar13 != 0; lVar13 = lVar13 + -0x18) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar3,lVar12);
        plVar3 = plVar3 + 3;
        lVar12 = lVar12 + 0x18;
      }
      plStack_78 = (long *)lVar5;
      func_0x000105291cf8(plVar4,lVar9,unaff_x19[7],lVar5);
      lVar12 = unaff_x19[6];
      plStack_78 = (long *)((long)plStack_78 + (unaff_x19[7] - lVar9));
      unaff_x19[7] = lVar9;
      func_0x000105291cf8(plVar4,lVar12,lVar9,plStack_80 + ((lVar9 - lVar12) / -0x18) * 3);
      plStack_88 = (long *)unaff_x19[6];
      unaff_x19[6] = (long)(plStack_80 + ((lVar9 - lVar12) / -0x18) * 3);
      uVar6 = unaff_x19[8];
      unaff_x19[8] = uStack_70;
      unaff_x19[7] = (long)plStack_78;
      plStack_80 = plStack_88;
      plStack_78 = plStack_88;
      uStack_70 = uVar6;
      func_0x000105291e34(&plStack_88);
    }
    else {
      plStack_80 = &lStack_98;
      plStack_78 = &lStack_90;
      uStack_70 = uStack_70 & 0xffffffffffffff00;
      lStack_98 = lVar9;
      plStack_88 = plVar4;
      for (; lStack_90 = lVar9, lVar12 != lVar5; lVar12 = lVar12 + 0x18) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar9,lVar12);
        lVar9 = lStack_90 + 0x18;
      }
      uStack_70 = CONCAT71(uStack_70._1_7_,1);
      func_0x000105291db4(&plStack_88);
      unaff_x19[7] = lVar9;
    }
  }
  puVar11 = (undefined4 *)param_2[9];
  puVar1 = (undefined4 *)param_2[10];
  lVar12 = (long)puVar1 - (long)puVar11;
  if (0 < lVar12 >> 2) {
    plVar4 = unaff_x19 + 9;
    puVar7 = (undefined4 *)unaff_x19[10];
    if (unaff_x19[0xb] - (long)puVar7 < lVar12) {
      plVar3 = plVar4;
      func_0x0001052921ec(plVar4,(lVar12 >> 2) + ((long)puVar7 - *plVar4 >> 2));
      func_0x00010529205c(&plStack_88,plVar3,(long)puVar7 - *plVar4 >> 2,unaff_x19 + 0xb);
      lVar5 = (long)plStack_78 + lVar12;
      for (; lVar12 != 0; lVar12 = lVar12 + -4) {
        *(undefined4 *)plStack_78 = *puVar11;
        puVar11 = puVar11 + 1;
        plStack_78 = (long *)((long)plStack_78 + 4);
      }
      plStack_78 = (long *)lVar5;
      _memcpy(lVar5,puVar7,unaff_x19[10] - (long)puVar7);
      plStack_78 = (long *)((long)plStack_78 + (unaff_x19[10] - (long)puVar7));
      unaff_x19[10] = (long)puVar7;
      lVar12 = (long)plStack_80 - ((long)puVar7 - unaff_x19[9]);
      _memcpy(lVar12);
      plStack_88 = (long *)unaff_x19[9];
      unaff_x19[9] = lVar12;
      uVar6 = unaff_x19[0xb];
      unaff_x19[0xb] = uStack_70;
      unaff_x19[10] = (long)plStack_78;
      plStack_80 = plStack_88;
      plStack_78 = plStack_88;
      uStack_70 = uVar6;
      func_0x0001052920d8(&plStack_88);
    }
    else {
      for (; puVar11 != puVar1; puVar11 = puVar11 + 1) {
        *puVar7 = *puVar11;
        puVar7 = puVar7 + 1;
      }
      unaff_x19[10] = (long)puVar7;
    }
  }
  plVar4 = (long *)(unaff_x20 + 0x938);
  if (*(char *)(unaff_x20 + 0x950) == '\0') {
    plVar4 = (long *)&UNK_10df561c8;
  }
  lVar12 = *plVar4;
  lVar5 = plVar4[1];
  plVar4 = unaff_x19 + 3;
  func_0x0001087a47d0(plVar4,unaff_x19[4]);
  lVar13 = lVar5 - lVar12;
  if (0 < lVar13) {
    func_0x0001087a4698();
    ppplVar8 = (long ***)(plVar4 + 2);
    ppplVar10 = (long ***)plVar4[1];
    lVar9 = lVar13 / 0x58;
    if (lVar13 <= (long)*ppplVar8 - (long)ppplVar10) {
      lVar13 = (long)ppplVar10 - unaff_x20;
      if (lVar13 / 0x58 < lVar9) {
        pplStack_130 = (long **)&pplStack_110;
        pplStack_128 = (long **)&pplStack_108;
        uStack_120 = uStack_120 & 0xffffffffffffff00;
        pplStack_138 = (long **)ppplVar8;
        pplStack_110 = (long **)ppplVar10;
        for (lVar9 = lVar12 + lVar13; pplStack_108 = (long **)ppplVar10, lVar9 != lVar5;
            lVar9 = lVar9 + 0x58) {
          FUN_108685a78(ppplVar10,lVar9);
          ppplVar10 = (long ***)(pplStack_108 + 0xb);
        }
        uStack_120 = CONCAT71(uStack_120._1_7_,1);
        func_0x00010529199c(&pplStack_138);
        unaff_x19[1] = (long)ppplVar10;
        if (lVar13 < 1) goto LAB_1087a2760;
        func_0x0001087a45b0();
        lVar9 = lVar13 / 0x58;
        ppplVar8 = ppplVar10;
      }
      else {
        func_0x0001087a45b0();
      }
      lVar5 = lVar12;
      func_0x0001087a47d0();
      lStack_168 = lVar12;
      pplStack_170 = (long **)ppplVar8;
      for (lVar9 = lVar9 * 0x58; lVar9 != 0; lVar9 = lVar9 + -0x58) {
        plStack_178 = unaff_x19 + 2;
        FUN_108685a78(auStack_1d0,lVar5);
        FUN_1087a2964(unaff_x20,auStack_1d0);
        func_0x000104bee8ec(auStack_1d0);
        unaff_x20 = unaff_x20 + 0x58;
        lVar5 = lVar5 + 0x58;
      }
      return;
    }
    func_0x0001087a47b0();
    plVar4 = unaff_x19;
    func_0x000105291b60();
    func_0x0001052917dc(&pplStack_138,plVar4,(unaff_x20 - *unaff_x19) / 0x58,ppplVar8);
    lVar5 = (long)pplStack_128 + lVar13;
    for (; lVar13 != 0; lVar13 = lVar13 + -0x58) {
      FUN_108685a78(pplStack_128,lVar12);
      pplStack_128 = pplStack_128 + 0xb;
      lVar12 = lVar12 + 0x58;
    }
    pplStack_128 = (long **)lVar5;
    func_0x000105291860(ppplVar8);
    lVar12 = *unaff_x19;
    pplStack_128 = (long **)((long)pplStack_128 + (unaff_x19[1] - unaff_x20));
    unaff_x19[1] = unaff_x20;
    func_0x000105291860(ppplVar8);
    pplStack_138 = (long **)*unaff_x19;
    *unaff_x19 = (long)(pplStack_130 + ((unaff_x20 - lVar12) / -0x58) * 0xb);
    uVar6 = unaff_x19[2];
    unaff_x19[2] = uStack_120;
    unaff_x19[1] = (long)pplStack_128;
    pplStack_130 = pplStack_138;
    pplStack_128 = pplStack_138;
    uStack_120 = uVar6;
    func_0x000105291a1c(&pplStack_138);
  }
LAB_1087a2760:
  func_0x0001087a47d0(unaff_x30);
  return;
}



/* Entry: 1087a08fc; end: 1087a098f;  */

void FUN_1087a08fc(void)

{
  undefined1 in_CY;
  long unaff_x19;
  long lVar1;
  long unaff_x24;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  func_0x0001087a458c();
  if ((bool)in_CY) {
    func_0x0001087a461c();
    FUN_10863b5b4();
    func_0x0001087a44e0();
    FUN_10863b3d0();
    func_0x0001087a4664(lStack_58);
    lStack_58 = lStack_58 + 0x28;
    func_0x0001087a4600();
    FUN_10863b3a8();
    lVar1 = *(long *)(unaff_x19 + 8);
    func_0x00010863b550(auStack_68);
  }
  else {
    func_0x0001087a4664();
    lVar1 = unaff_x24 + 0x28;
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 1087a0990; end: 1087a09cb;  */

long FUN_1087a0990(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1087a29fc();
    lVar2 = uVar1 + 0xb0;
  }
  else {
    lVar2 = param_1;
    FUN_1087a2a30();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0xb0;
}



/* Entry: 1087a09cc; end: 1087a0a8f;  */

void FUN_1087a09cc(long *param_1)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  func_0x0001087a4798();
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    func_0x0001087a46f8(uVar3);
    lVar2 = uVar3 + 0x40;
    param_1[1] = lVar2;
  }
  else {
    func_0x0001087a47b0();
    plVar1 = param_1;
    FUN_10863bbf0(param_1,(extraout_x8 >> 6) + 1);
    FUN_10863b9e0(auStack_68,plVar1,param_1[1] - *param_1 >> 6,param_1 + 2);
    func_0x0001087a46f8(lStack_58);
    lStack_58 = lStack_58 + 0x40;
    func_0x0001087a4600();
    FUN_10863b9b0();
    lVar2 = param_1[1];
    func_0x00010863bb8c(auStack_68);
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1087a0a90; end: 1087a0b3b;  */

void FUN_1087a0a90(void)

{
  undefined1 in_CY;
  long unaff_x19;
  long lVar1;
  undefined4 *unaff_x21;
  undefined4 *unaff_x22;
  long unaff_x24;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  func_0x0001087a458c();
  if ((bool)in_CY) {
    func_0x0001087a461c();
    FUN_10863bee0();
    func_0x0001087a44e0();
    FUN_10863bcd8();
    FUN_1087a2c1c(lStack_58,*unaff_x22,*unaff_x21);
    lStack_58 = lStack_58 + 0x28;
    func_0x0001087a4600();
    FUN_10863bcb0();
    lVar1 = *(long *)(unaff_x19 + 8);
    func_0x00010863be78(auStack_68);
  }
  else {
    FUN_1087a2c1c();
    lVar1 = unaff_x24 + 0x28;
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 1087a0b3c; end: 1087a0ca7;  */

void FUN_1087a0b3c(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uStack_254;
  undefined1 auStack_250 [264];
  int iStack_148;
  char cStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10863b0ec(param_1,(param_2[1] - *param_2) / 0x18);
  lVar2 = param_2[1];
  for (lVar4 = *param_2; lVar4 != lVar2; lVar4 = lVar4 + 0x18) {
    func_0x000107c29f64(auStack_250,*param_3,lVar4,0);
    if (cStack_80 == '\x01') {
      uStack_254 = (uint)(iStack_148 == 1);
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        func_0x0001087a478c();
        func_0x0001087a344c();
        lVar5 = uVar1 + 0x20;
      }
      else {
        plVar3 = param_1;
        FUN_10863b35c(param_1,((long)(uVar1 - *param_1) >> 5) + 1);
        FUN_10863b184(auStack_78,plVar3,param_1[1] - *param_1 >> 5,param_1 + 2);
        func_0x0001087a344c(lStack_68,lVar4,&uStack_254);
        lStack_68 = lStack_68 + 0x20;
        FUN_10863b154(param_1,auStack_78);
        lVar5 = param_1[1];
        func_0x00010863b2f8(auStack_78);
      }
      param_1[1] = lVar5;
    }
    func_0x000107c288c8(auStack_250);
  }
  return;
}



/* Entry: 1087a0ca8; end: 1087a1b4b;  */

void FUN_1087a0ca8(undefined1 *param_1,undefined8 *param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long *param_7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined **ppuVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long extraout_x8;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *extraout_x8_00;
  undefined8 uVar13;
  undefined8 *extraout_x9;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined **ppuVar20;
  uint uVar21;
  undefined **ppuVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  undefined1 auStack_8b0 [24];
  undefined1 auStack_898 [24];
  undefined1 auStack_880 [24];
  undefined1 auStack_868 [24];
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined4 uStack_830;
  undefined1 auStack_820 [32];
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined4 auStack_7d0 [8];
  byte bStack_7b0;
  char cStack_7a8;
  int iStack_6c8;
  char cStack_600;
  undefined **ppuStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined8 uStack_5e0;
  char cStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  undefined8 *puStack_5a8;
  long *plStack_5a0;
  ulong uStack_598;
  float fStack_590;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_3c8 [24];
  char cStack_3b0;
  long *plStack_3a8;
  long **pplStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_348;
  undefined1 auStack_340 [384];
  undefined1 auStack_1c0 [424];
  undefined8 uStack_18;
  
  func_0x0001087a4730();
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10879f320(auStack_3c8,*param_7,param_7[1]);
  if (cStack_3b0 == '\x01') {
    FUN_1087a2c74(&uStack_3e0,auStack_3c8);
  }
  else {
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3d0 = 0;
  }
  uStack_438 = 0;
  uStack_440 = 0;
  lStack_428 = 0;
  uStack_430 = 0;
  uStack_448 = 0;
  uStack_458 = 0;
  uStack_450 = 0;
  lStack_420 = 0;
  lStack_418 = 0;
  uStack_460 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  lStack_410 = 0;
  lStack_408 = 0;
  uStack_478 = 0;
  uStack_488 = 0;
  uStack_480 = 0;
  lStack_400 = 0;
  lStack_3f8 = 0;
  lStack_3f0 = 0;
  lStack_3e8 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_490 = 0;
  func_0x000104bee7a0(&uStack_4a0);
  func_0x000104bee7dc(&uStack_488);
  func_0x000104bee864(&uStack_470);
  func_0x000107c27a04(&uStack_458);
  func_0x000107c279ac(&uStack_520,param_6 + 0xb0);
  FUN_108685948(&uStack_540,param_6 + 200);
  func_0x000108685aec(&uStack_560,param_6 + 0xe0);
  func_0x000108685c38(&uStack_580,param_6 + 0xf8);
  uStack_4f0 = uStack_510;
  uStack_4c0 = uStack_550;
  uStack_4f8 = uStack_518;
  uStack_500 = uStack_520;
  uStack_510 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_4e0 = uStack_538;
  uStack_4e8 = uStack_540;
  uStack_4d8 = uStack_530;
  uStack_540 = 0;
  uStack_538 = 0;
  uStack_530 = 0;
  uStack_4c8 = uStack_558;
  uStack_4d0 = uStack_560;
  uStack_550 = 0;
  uStack_560 = 0;
  uStack_558 = 0;
  uStack_4b0 = uStack_578;
  uStack_4b8 = uStack_580;
  uStack_4a8 = uStack_570;
  uStack_578 = 0;
  uStack_580 = 0;
  uStack_570 = 0;
  func_0x000104bee7a0(&uStack_580);
  func_0x000104bee7dc(&uStack_560);
  func_0x000104bee864(&uStack_540);
  func_0x000107c27a04(&uStack_520);
  FUN_1087a0530(&uStack_500,param_6 + 0x38);
  uStack_598 = 0;
  plStack_5a0 = (long *)0x0;
  puStack_5a8 = (undefined8 *)0x0;
  lStack_5b0 = 0;
  fStack_590 = 1.0;
  uStack_5c0 = 0;
  uStack_5c8 = 0;
  uStack_5b8 = 0;
  FUN_1087a1b4c(&ppuStack_5f8,*param_7,param_7[1]);
  if (cStack_5d0 != '\x01') goto LAB_1087a14f8;
  puVar19 = (undefined8 *)(param_6 + 0x778);
  func_0x000107c295bc(&uStack_440,puVar19);
  if (&uStack_440 != puVar19) {
    lVar30 = *(long *)(param_6 + 0x790);
    lVar18 = *(long *)(param_6 + 0x798);
    uVar11 = lVar18 - lVar30;
    lVar9 = (long)uVar11 / 0x58;
    if ((ulong)(lStack_418 - lStack_428) < uVar11) {
      func_0x0001087a2ff8(&lStack_428);
      plVar23 = &lStack_428;
      func_0x000105291b60(plVar23,lVar9);
      FUN_1086859b8(&lStack_428,plVar23);
      lVar31 = lVar30;
LAB_1087a0f64:
      FUN_1086859ec(&lStack_428,lVar31,lVar18,lVar9);
    }
    else {
      if ((ulong)(lStack_420 - lStack_428) < uVar11) {
        lVar31 = lVar30 + (lStack_420 - lStack_428);
        FUN_1087a3030(lVar30,lVar31);
        lVar9 = (lStack_420 - lStack_428) / -0x58 + lVar9;
        goto LAB_1087a0f64;
      }
      FUN_1087a3030(lVar30,lVar18);
      func_0x000104bee8bc(&lStack_428,lVar30);
    }
    lVar30 = *(long *)(param_6 + 0x7a8);
    lVar18 = *(long *)(param_6 + 0x7b0);
    uVar11 = lVar18 - lVar30;
    lVar9 = (long)uVar11 / 0x18;
    if ((ulong)(lStack_400 - lStack_410) < uVar11) {
      func_0x00010879dd88(&lStack_410);
      plVar23 = &lStack_410;
      func_0x000105291f78(plVar23,lVar9);
      FUN_108685b58(&lStack_410,plVar23);
      lVar31 = lVar30;
LAB_1087a101c:
      FUN_108685b84(&lStack_410,lVar31,lVar18,lVar9);
    }
    else {
      if ((ulong)(lStack_408 - lStack_410) < uVar11) {
        lVar31 = lVar30 + (lStack_408 - lStack_410);
        FUN_1087a30ac(lVar30,lVar31);
        lVar9 = (lStack_408 - lStack_410) / -0x18 + lVar9;
        goto LAB_1087a101c;
      }
      FUN_1087a30ac(lVar30,lVar18);
      func_0x000104bee834(&lStack_410,lVar30);
    }
    lVar9 = lStack_3f8;
    puVar19 = *(undefined8 **)(param_6 + 0x7c0);
    puVar26 = *(undefined8 **)(param_6 + 0x7c8);
    uVar11 = (long)puVar26 - (long)puVar19;
    if ((ulong)(lStack_3e8 - lStack_3f8) < uVar11) {
      FUN_1087a30f0(&lStack_3f8);
      plVar23 = &lStack_3f8;
      func_0x0001052921ec(plVar23,(long)uVar11 >> 2);
      FUN_108685ccc(&lStack_3f8,plVar23);
      lVar9 = lStack_3f0;
      if (puVar26 != puVar19) {
        func_0x0001087a470c(lStack_3f0);
      }
      lStack_3f0 = lVar9 + uVar11;
    }
    else if ((ulong)(lStack_3f0 - lStack_3f8) < uVar11) {
      lVar9 = (long)puVar19 + (lStack_3f0 - lStack_3f8);
      if (lStack_3f0 != lStack_3f8) {
        _memmove(lStack_3f8,puVar19);
      }
      lVar30 = lStack_3f0;
      puVar19 = (undefined8 *)((long)puVar26 - lVar9);
      if (puVar19 != (undefined8 *)0x0) {
        _memmove(lStack_3f0,lVar9,puVar19);
      }
      lStack_3f0 = lVar30 + (long)puVar19;
    }
    else {
      if (puVar26 != puVar19) {
        func_0x0001087a470c(lStack_3f8);
      }
      lStack_3f0 = lVar9 + uVar11;
    }
  }
  plVar23 = (long *)(param_6 + 0x6f0);
  while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
    func_0x000107c29f64(auStack_7d0,*param_2,plVar23 + 5,2);
    if (cStack_600 == '\x01') {
      uStack_390 = CONCAT44(uStack_390._4_4_,(uint)(iStack_6c8 == 1));
      FUN_1087a08fc(&uStack_5c8,auStack_7d0,&uStack_390,plVar23 + 8);
      func_0x000107c28de8(&uStack_390,auStack_7d0);
      func_0x000107c28a9c(auStack_1c0,plVar23 + 5);
      puVar26 = plVar23 + 2;
      FUN_108848654();
      puVar14 = puStack_5a8;
      if (puStack_5a8 != (undefined8 *)0x0) {
        uVar11 = (long)puStack_5a8 - 1;
        uVar21 = (uint)puStack_5a8;
        if (((ulong)puStack_5a8 & uVar11) == 0) {
          puVar19 = (undefined8 *)((ulong)(uVar21 - 1) & (ulong)puVar26);
        }
        else {
          puVar19 = puVar26;
          if (puStack_5a8 <= puVar26) {
            uVar2 = 0;
            if (uVar21 != 0) {
              uVar2 = (uint)puVar26 / uVar21;
            }
            puVar19 = (undefined8 *)(ulong)((uint)puVar26 - uVar2 * uVar21);
          }
        }
        plVar29 = *(long **)(lStack_5b0 + (long)puVar19 * 8);
        if (plVar29 != (long *)0x0) {
          do {
            while( true ) {
              plVar29 = (long *)*plVar29;
              if (plVar29 == (long *)0x0) goto LAB_1087a1220;
              puVar12 = (undefined8 *)plVar29[1];
              if (puVar12 != puVar26) break;
              uVar15 = (ulong)(plVar29 + 2);
              func_0x000107c28078(uVar15,plVar23 + 2);
              if ((uVar15 & 1) != 0) goto LAB_1087a14e4;
            }
            if (((ulong)puVar14 & uVar11) == 0) {
              puVar12 = (undefined8 *)((ulong)puVar12 & uVar11);
            }
            else if (puVar14 <= puVar12) {
              uVar15 = 0;
              if (puVar14 != (undefined8 *)0x0) {
                uVar15 = (ulong)puVar12 / (ulong)puVar14;
              }
              puVar12 = (undefined8 *)((long)puVar12 - uVar15 * (long)puVar14);
            }
          } while (puVar12 == puVar19);
        }
      }
LAB_1087a1220:
      plVar29 = (long *)0x3a0;
      __Znwm();
      uStack_398 = 0;
      *plVar29 = 0;
      plVar29[1] = (long)puVar26;
      plStack_3a8 = plVar29;
      pplStack_3a0 = &plStack_5a0;
      func_0x000107c27994(plVar29 + 2,plVar23 + 2);
      func_0x000107c28de8(plVar29 + 5,&uStack_390);
      func_0x000107c28970(plVar29 + 0x3f,auStack_1c0);
      uStack_398 = CONCAT71(uStack_398._1_7_,1);
      if ((puVar14 == (undefined8 *)0x0) || (fStack_590 * (float)puVar14 < (float)(uStack_598 + 1)))
      {
        bVar6 = (undefined8 *)0x2 < puVar14;
        bVar7 = puVar14 == (undefined8 *)0x3;
        func_0x0001087a47bc((long)puVar14 << 1);
        puVar19 = extraout_x8_00;
        if (!bVar6 || bVar7) {
          puVar19 = extraout_x9;
        }
        if ((long)puVar19 - 1U == 0) {
          puVar19 = (undefined8 *)0x2;
        }
        else if (((ulong)puVar19 & (long)puVar19 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        puVar14 = puStack_5a8;
        if (puStack_5a8 < puVar19) {
LAB_1087a12dc:
          if ((ulong)puVar19 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1087a1964);
            (*pcVar5)();
          }
          lVar9 = (long)puVar19 << 3;
          __Znwm(lVar9);
          FUN_1087a4320(&lStack_5b0,lVar9);
          for (puVar14 = (undefined8 *)0x0; puVar19 != puVar14;
              puVar14 = (undefined8 *)((long)puVar14 + 1)) {
            *(undefined8 *)(lStack_5b0 + (long)puVar14 * 8) = 0;
          }
          puStack_5a8 = puVar19;
          if (plStack_5a0 != (long *)0x0) {
            puVar14 = (undefined8 *)plStack_5a0[1];
            uVar15 = (long)puVar19 - 1;
            uVar11 = 0;
            if (puVar19 != (undefined8 *)0x0) {
              uVar11 = (ulong)puVar14 / (ulong)puVar19;
            }
            puVar12 = puVar14;
            if (puVar19 <= puVar14) {
              puVar12 = (undefined8 *)((long)puVar14 - uVar11 * (long)puVar19);
            }
            if (((ulong)puVar19 & uVar15) == 0) {
              puVar12 = (undefined8 *)((ulong)puVar14 & uVar15);
            }
            *(long ***)(lStack_5b0 + (long)puVar12 * 8) = &plStack_5a0;
            plVar17 = plStack_5a0;
            while (plVar16 = plVar17, plVar17 = (long *)*plVar16, plVar17 != (long *)0x0) {
              puVar14 = (undefined8 *)plVar17[1];
              if (((ulong)puVar19 & uVar15) == 0) {
                puVar14 = (undefined8 *)((ulong)puVar14 & uVar15);
              }
              else if (puVar19 <= puVar14) {
                uVar11 = 0;
                if (puVar19 != (undefined8 *)0x0) {
                  uVar11 = (ulong)puVar14 / (ulong)puVar19;
                }
                puVar14 = (undefined8 *)((long)puVar14 - uVar11 * (long)puVar19);
              }
              if (puVar14 != puVar12) {
                if (*(long *)(lStack_5b0 + (long)puVar14 * 8) == 0) {
                  *(long **)(lStack_5b0 + (long)puVar14 * 8) = plVar16;
                  puVar12 = puVar14;
                }
                else {
                  *plVar16 = *plVar17;
                  *plVar17 = **(long **)(lStack_5b0 + (long)puVar14 * 8);
                  **(undefined8 **)(lStack_5b0 + (long)puVar14 * 8) = plVar17;
                  plVar17 = plVar16;
                }
              }
            }
          }
        }
        else if (puVar19 < puStack_5a8) {
          puVar12 = (undefined8 *)(long)((float)uStack_598 / fStack_590);
          if ((puStack_5a8 < (undefined8 *)0x3) ||
             (((ulong)puStack_5a8 & (long)puStack_5a8 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((undefined8 *)0x1 < puVar12) {
            puVar12 = (undefined8 *)(1L << (-LZCOUNT((long)puVar12 + -1) & 0x3fU));
          }
          if (puVar19 <= puVar12) {
            puVar19 = puVar12;
          }
          if (puVar19 < puVar14) {
            if (puVar19 != (undefined8 *)0x0) goto LAB_1087a12dc;
            FUN_1087a4320(&lStack_5b0,0);
            puStack_5a8 = (undefined8 *)0x0;
          }
        }
        puVar14 = puStack_5a8;
        if (((ulong)puStack_5a8 & (long)puStack_5a8 - 1U) == 0) {
          puVar19 = (undefined8 *)((ulong)((int)puStack_5a8 - 1) & (ulong)puVar26);
        }
        else {
          puVar19 = puVar26;
          if (puStack_5a8 <= puVar26) {
            uVar11 = 0;
            if (puStack_5a8 != (undefined8 *)0x0) {
              uVar11 = (ulong)puVar26 / (ulong)puStack_5a8;
            }
            puVar19 = (undefined8 *)((long)puVar26 - uVar11 * (long)puStack_5a8);
          }
        }
      }
      plVar17 = *(long **)(lStack_5b0 + (long)puVar19 * 8);
      if (plVar17 == (long *)0x0) {
        *plVar29 = (long)plStack_5a0;
        *(long ***)(lStack_5b0 + (long)puVar19 * 8) = &plStack_5a0;
        plStack_5a0 = plVar29;
        if (*plVar29 != 0) {
          puVar26 = *(undefined8 **)(*plVar29 + 8);
          if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
            puVar26 = (undefined8 *)((ulong)puVar26 & (long)puVar14 - 1U);
          }
          else if (puVar14 <= puVar26) {
            uVar11 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar11 = (ulong)puVar26 / (ulong)puVar14;
            }
            puVar26 = (undefined8 *)((long)puVar26 - uVar11 * (long)puVar14);
          }
          *(long **)(lStack_5b0 + (long)puVar26 * 8) = plVar29;
        }
      }
      else {
        *plVar29 = *plVar17;
        *plVar17 = (long)plVar29;
      }
      plStack_3a8 = (long *)0x0;
      uStack_598 = uStack_598 + 1;
      FUN_1087a4338(&plStack_3a8);
LAB_1087a14e4:
      func_0x0001087a3120(&uStack_390);
    }
    func_0x000107c288c8(auStack_7d0);
  }
LAB_1087a14f8:
  FUN_1087a3148(&ppuStack_5f8);
  pplStack_3a0 = (long **)0x0;
  plStack_3a8 = (long *)0x0;
  uStack_398 = 0;
  FUN_10863b5fc(&plStack_3a8,(*(long *)(param_6 + 0x710) - *(long *)(param_6 + 0x708)) / 0x88);
  lVar30 = *(long *)(param_6 + 0x710);
  for (lVar9 = *(long *)(param_6 + 0x708); lVar9 != lVar30; lVar9 = lVar9 + 0x88) {
    auStack_7d0[0] = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_380 = 0;
    FUN_1087a0990(&plStack_3a8,lVar9,auStack_7d0,lVar9 + 0x58,&uStack_390);
    FUN_10861b4fc(&uStack_390);
  }
  uStack_7e8 = 0;
  uStack_7e0 = 0;
  uStack_7d8 = 0;
  FUN_10863b948(&uStack_7e8,(*(long *)(param_6 + 0x728) - *(long *)(param_6 + 0x720)) / 0x38);
  lVar30 = *(long *)(param_6 + 0x728);
  for (lVar9 = *(long *)(param_6 + 0x720); lVar9 != lVar30; lVar9 = lVar9 + 0x38) {
    FUN_1087a09cc(&uStack_7e8,lVar9,lVar9 + 0x18);
  }
  uStack_800 = 0;
  uStack_7f8 = 0;
  uStack_7f0 = 0;
  FUN_10863bc30(&uStack_800,*(long *)(param_6 + 0x740) - *(long *)(param_6 + 0x738) >> 5);
  lVar30 = *(long *)(param_6 + 0x740);
  for (lVar9 = *(long *)(param_6 + 0x738); lVar9 != lVar30; lVar9 = lVar9 + 0x20) {
    uStack_390 = uStack_390 & 0xffffffff00000000;
    FUN_1087a0a90(&uStack_800,lVar9,&uStack_390,lVar9 + 8);
  }
  FUN_1087a3188(&uStack_390,param_7[1] + -0x70);
  iVar4 = uStack_390._4_4_;
  uVar2 = (uint)uStack_390;
  func_0x000107c279a0(auStack_820,auStack_340);
  uVar21 = 0;
  if (iVar4 != 0) {
    uVar21 = uVar2;
  }
  uVar11 = 0;
  if (iVar4 != 0) {
    uVar11 = 0x100000000;
  }
  uVar13 = *(undefined8 *)(param_6 + 0x98c);
  uVar28 = *(undefined8 *)(param_6 + 0x658);
  uStack_848 = 0;
  uStack_850 = 0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_830 = 0x3f800000;
  puVar26 = (undefined8 *)param_7[1];
  for (puVar19 = (undefined8 *)*param_7; puVar19 != puVar26; puVar19 = puVar19 + 0x10) {
    uVar24 = *puVar19;
    puVar14 = &uStack_850;
    FUN_10879f11c(puVar14,puVar19 + 2);
    *puVar14 = uVar24;
  }
  FUN_10879f320(&ppuStack_5f8,*param_7,param_7[1]);
  ppuVar3 = ppuStack_5f0;
  uVar8 = 0;
  ppuVar20 = ppuStack_5f8;
  if ((char)uStack_5e0 == '\x01') {
    for (; uVar8 = ppuVar20 == ppuVar3, !(bool)uVar8; ppuVar20 = ppuVar20 + 0x23) {
      ppuVar22 = ppuVar20 + 0xd;
      while (ppuVar22 = (undefined **)*ppuVar22, ppuVar22 != (undefined **)0x0) {
        plVar23 = (long *)(ulong)*(uint *)(ppuVar22 + 2);
        func_0x0001086b0fc8();
        auStack_7d0[0] = SUB84(plVar23,0);
        func_0x0001087a46d4();
        puVar25 = ppuVar22[3];
        puVar27 = (undefined *)*plVar23;
        func_0x0001087a46d4();
        if ((long)puVar25 <= (long)puVar27) {
          puVar25 = puVar27;
        }
        *plVar23 = (long)puVar25;
      }
    }
    FUN_10863aa28(auStack_7d0,&uStack_850);
    func_0x0001087a4704();
  }
  FUN_1087a2358(&ppuStack_5f8);
  FUN_1087a0b3c(auStack_868,&uStack_500,param_2);
  uVar1 = *(undefined4 *)(param_6 + 0xa1c);
  func_0x0001087a4544(*(undefined8 *)(param_6 + 0x520));
  func_0x0001087a4530(*(undefined1 *)(param_6 + 0x988));
  func_0x0001086866c4(auStack_880);
  FUN_10879f4a0(extraout_x8,param_1,param_3,param_4,iVar4,uStack_348,auStack_820,uVar11 | uVar21,
                uVar13,uVar28,param_6 + 0x7d8,&uStack_850,&uStack_3e0,param_6 + 0x130,&uStack_440,
                &uStack_500,&lStack_5b0,auStack_868,uVar1);
  FUN_10863a098(auStack_880);
  func_0x00010863a3d0(auStack_868);
  func_0x00010863a518(&uStack_850);
  func_0x000107c279a4(auStack_820);
  if (uStack_390._4_4_ != 0) {
    uVar8 = 0;
    if ((uint)uStack_390 == 0x15) {
      param_1 = (undefined1 *)*param_7;
      param_3 = (undefined1 *)param_7[1];
      FUN_1087a1b4c(auStack_7d0);
      uVar8 = cStack_7a8 == '\x01';
      if (((bool)uVar8) && ((bStack_7b0 & 1) != 0)) {
        ppuStack_5f0 = (undefined **)0x0;
        ppuStack_5f8 = &PTR_DAT_110a807a8;
        uStack_5e0 = 0;
        FUN_1088b6dd8(&ppuStack_5f8);
        uStack_5e0 = CONCAT44(1,(undefined4)uStack_5e0);
        ppuStack_5e8 = ppuStack_5f0;
        if (((ulong)ppuStack_5f0 & 1) != 0) {
          ppuStack_5e8 = *(undefined ***)((ulong)ppuStack_5f0 & 0xfffffffffffffffe);
        }
        func_0x0001087a33d8();
        FUN_1088ba040();
        func_0x00010b4d1804(auStack_8b0,&ppuStack_5f8);
        func_0x000107c29ed8(auStack_898,auStack_8b0);
        param_1 = auStack_898;
        FUN_1086554b0(extraout_x8 + 0x30);
        func_0x000107c27914(auStack_898);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8b0);
        FUN_1088b6e60(&ppuStack_5f8);
      }
      FUN_1087a3148(auStack_7d0);
    }
  }
  func_0x0001087a3420(&uStack_390);
  func_0x00010863a148(&uStack_800);
  FUN_10863a1e0(&uStack_7e8);
  func_0x00010863a290(&plStack_3a8);
  func_0x00010863a348(&uStack_5c8);
  FUN_1087a42a4(&lStack_5b0);
  func_0x000104bee768(&uStack_500);
  func_0x000104bee768(&uStack_440);
  func_0x000108642290(&uStack_3e0);
  FUN_1087a2358(auStack_3c8);
  func_0x0001087a4420(uStack_18);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27914(auStack_898);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_8b0);
  FUN_1088b6e60(&ppuStack_5f8);
  FUN_1087a3148(auStack_7d0);
  func_0x000108686860(extraout_x8);
  func_0x0001087a3420(&uStack_390);
  func_0x00010863a148(&uStack_800);
  FUN_10863a1e0(&uStack_7e8);
  func_0x00010863a290(&plStack_3a8);
  func_0x00010863a348(&uStack_5c8);
  FUN_1087a42a4(&lStack_5b0);
  func_0x000104bee768(&uStack_500);
  func_0x000104bee768(&uStack_440);
  func_0x000108642290(&uStack_3e0);
  puVar10 = auStack_3c8;
  FUN_1087a2358();
  func_0x0001087a44b4();
  do {
    if (param_1 == param_3) {
      uVar8 = 0;
      *puVar10 = 0;
LAB_1087a1b90:
      puVar10[0x28] = uVar8;
      return;
    }
    if (param_1[0x50] == '\x01' && *(int *)(param_1 + 0x48) == 1) {
      FUN_1087a333c();
      uVar8 = 1;
      goto LAB_1087a1b90;
    }
    param_1 = param_1 + 0x80;
  } while( true );
}



/* Entry: 1087a1b4c; end: 1087a1b9b;  */

void FUN_1087a1b4c(undefined1 *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  
  do {
    if (param_2 == param_3) {
      uVar1 = 0;
      *param_1 = 0;
LAB_1087a1b90:
      param_1[0x28] = uVar1;
      return;
    }
    if (*(char *)(param_2 + 0x50) == '\x01' && *(int *)(param_2 + 0x48) == 1) {
      FUN_1087a333c(param_1,param_2 + 0x20);
      uVar1 = 1;
      goto LAB_1087a1b90;
    }
    param_2 = param_2 + 0x80;
  } while( true );
}



/* Entry: 1087a1b9c; end: 1087a1c2b;  */

void FUN_1087a1b9c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,uint *param_4,
                  undefined8 param_5)

{
  (**(code **)(*(long *)*param_1 + 0x10))
            ((long *)*param_1,param_3,*param_4,param_4 + 0xf6,param_4 + 1,
             *(long *)(param_4 + 0xfe) - *(long *)(param_4 + 0xfc),param_4 + 0x130,param_5,
             param_4 + 0xc);
  if ((*param_4 & 0xfffffffe) == 4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001087a1c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x58))((long *)*param_2,param_4);
  return;
}



/* Entry: 1087a1c2c; end: 1087a20f7;  */

void FUN_1087a1c2c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  long param_5,undefined4 param_6,undefined8 param_7,ulong *param_8)

{
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_6f0 [24];
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined1 auStack_6c0 [24];
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 auStack_648 [24];
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined4 uStack_5e0;
  undefined1 auStack_5d8 [96];
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined1 auStack_4b8 [904];
  undefined1 auStack_130 [24];
  undefined1 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_b0 [4];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_18;
  
  func_0x0001087a4730();
  plVar1 = (long *)*param_1;
  (**(code **)(*plVar1 + 0x10))();
  func_0x000107c279ac(&uStack_90,param_5 + 0x78);
  FUN_108685948(auStack_b0,param_5 + 0x90);
  func_0x000108685aec(&uStack_d0,param_5 + 0xa8);
  func_0x000108685c38(&uStack_f0,param_5 + 0xc0);
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  func_0x0001087a4648(&uStack_70,auStack_b0[0]);
  uStack_30 = uStack_c0;
  uStack_38 = uStack_c8;
  uStack_40 = uStack_d0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  *(undefined8 *)(extraout_x8_00 + 0x50) = uStack_e8;
  *(undefined8 *)(extraout_x8_00 + 0x48) = uStack_f0;
  uStack_18 = uStack_e0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_e0 = 0;
  func_0x000104bee7a0(&uStack_f0);
  func_0x000104bee7dc(&uStack_d0);
  func_0x0001087a4674();
  func_0x0001087a45d8();
  if (*(char *)(param_5 + 0x548) == '\x01') {
    func_0x0001087a4544(*(undefined8 *)(param_5 + 0x4e8));
  }
  uStack_110 = uStack_110 & 0xffffffffffffff00;
  uStack_f8 = (char)param_8[3] == '\x01';
  if ((bool)uStack_f8) {
    uStack_108 = param_8[1];
    uStack_110 = *param_8;
    uStack_100 = param_8[2];
    param_8[1] = 0;
    param_8[2] = 0;
    *param_8 = 0;
  }
  auStack_130[0] = 0;
  uStack_118 = 0;
  FUN_108685044(auStack_4b8,param_5 + 0xf8);
  uVar3 = *(undefined8 *)(param_5 + 0x954);
  uVar2 = *(undefined8 *)(param_5 + 0x620);
  uStack_510 = 0;
  uStack_518 = 0;
  uStack_500 = 0;
  uStack_508 = 0;
  uStack_520 = 0;
  uStack_530 = 0;
  uStack_528 = 0;
  uStack_4f0 = 0;
  uStack_4f8 = 0;
  uStack_538 = 0;
  uStack_548 = 0;
  uStack_540 = 0;
  uStack_4e8 = 0;
  uStack_4e0 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_550 = 0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_570 = 0;
  uStack_578 = 0;
  uStack_568 = 0;
  FUN_1086858d8(auStack_5d8,&uStack_70);
  uStack_5f8 = 0;
  uStack_600 = 0;
  uStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5e0 = 0x3f800000;
  uStack_610 = 0;
  uStack_608 = 0;
  uStack_620 = 0;
  uStack_618 = 0;
  uStack_630 = 0;
  uStack_628 = 0;
  FUN_108848684(auStack_648);
  uStack_660 = 0;
  uStack_658 = 0;
  uStack_650 = 0;
  uStack_670 = 0;
  uStack_668 = 0;
  uStack_680 = 0;
  uStack_678 = 0;
  uStack_690 = 0;
  uStack_688 = 0;
  uStack_6a0 = 0;
  uStack_698 = 0;
  uStack_6a8 = 0;
  func_0x000107c29e90();
  FUN_10879ffd8(*(undefined4 *)(param_5 + 0x648),*(undefined4 *)(param_5 + 0x64c));
  func_0x0001087a001c(*(undefined4 *)(param_5 + 0x650),*(undefined4 *)(param_5 + 0x654));
  func_0x000107c278b8(auStack_6c0,"");
  uStack_6d0 = 0;
  uStack_6c8 = 0;
  uStack_6d8 = 0;
  func_0x0001087a4530(*(undefined1 *)(param_5 + 0x950));
  func_0x0001086866c4(auStack_6f0);
  FUN_1087a0040();
  func_0x0001086392ac(extraout_x8,param_3,param_4,&uStack_110,auStack_130,auStack_4b8,param_7,uVar3,
                      uVar2,plVar1,plVar1,&uStack_518,auStack_5d8,&uStack_600,&uStack_618,
                      &uStack_630,param_6);
  FUN_10863a098(auStack_6f0);
  func_0x000107c27a04(&uStack_6d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_6c0);
  func_0x00010863a148(&uStack_6a8);
  FUN_10863a1e0(&uStack_690);
  func_0x00010863a290(&uStack_678);
  func_0x00010863a348(&uStack_660);
  func_0x000107c27914(auStack_648);
  func_0x00010863a3d0(&uStack_630);
  func_0x00010863a458(&uStack_618);
  func_0x0001087a4704();
  func_0x000104bee768(auStack_5d8);
  func_0x000104bee768(&uStack_518);
  func_0x000104bee7a0(&uStack_578);
  func_0x000104bee7dc(&uStack_560);
  func_0x000104bee864(&uStack_548);
  func_0x000107c27a04(&uStack_530);
  func_0x000104bee3a8(auStack_4b8);
  func_0x000107c279c4(auStack_130);
  func_0x000107c279a4(&uStack_110);
  func_0x0001087a4638();
  return;
}



/* Entry: 1087a20f8; end: 1087a2357;  */

void FUN_1087a20f8(undefined1 *param_1,undefined8 param_2,long *param_3,long *param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined1 auStack_2a0 [24];
  undefined8 uStack_288;
  long *plStack_280;
  undefined1 uStack_278;
  undefined1 auStack_270 [24];
  long *plStack_258;
  undefined1 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined1 auStack_220 [120];
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [32];
  undefined1 uStack_160;
  undefined1 uStack_15c;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined1 uStack_148;
  undefined1 uStack_144;
  undefined1 uStack_140;
  undefined1 uStack_138;
  undefined1 uStack_130;
  undefined1 uStack_12c;
  undefined1 uStack_128;
  undefined1 uStack_120;
  undefined1 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_fc;
  undefined1 uStack_f8;
  undefined1 uStack_f4;
  undefined1 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_d0;
  undefined **ppuStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(long *)(param_6 + 0x80) - *(long *)(param_6 + 0x78) == 0x18) {
    ppuStack_c8 = &PTR_DAT_110a96180;
    uStack_c0 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    func_0x000107c29ee4(auStack_270,param_5);
    FUN_1086ec2b0(&ppuStack_c8);
    func_0x000107c287d0();
    func_0x000107c2a2e0(auStack_270);
    FUN_108653db8(&ppuStack_c8);
    func_0x00010890d3ac();
    uStack_58 = *(undefined8 *)(param_6 + 0x638);
    func_0x0001087a4728(auStack_270);
    (**(code **)(*param_4 + 0x10))();
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_240 = *(undefined8 *)(param_6 + 0x638);
    uStack_238 = 1;
    uStack_230 = *(undefined8 *)(param_6 + 0x628);
    uStack_228 = 1;
    plStack_258 = param_4;
    func_0x000107c287dc(auStack_220,&ppuStack_c8);
    FUN_1088449f4(auStack_1a8,param_7);
    uStack_190 = *(undefined8 *)(param_6 + 0x620);
    uStack_188 = 0;
    FUN_10879c838(auStack_180,param_6 + 0xf8);
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_158 = *(undefined8 *)(param_6 + 0x878);
    uStack_150 = *(undefined1 *)(param_6 + 0x880);
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    (**(code **)(*param_3 + 0x10))(param_3,auStack_270);
    func_0x0001087a4728(auStack_2a0);
    uStack_288 = *(undefined8 *)(param_6 + 0x628);
    plStack_280 = plStack_258;
    uStack_278 = 1;
    FUN_108868740(param_3,auStack_2a0);
    func_0x0001087a4640();
    func_0x000108664bf8(param_1,auStack_270);
    func_0x000107c288e0(auStack_270);
    func_0x000107c2a5a4(&ppuStack_c8);
  }
  else {
    *param_1 = 0;
    param_1[0x1a8] = 0;
  }
  return;
}



/* Entry: 1087a2358; end: 1087a238b;  */

void FUN_1087a2358(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000108642290();
  }
  return;
}



/* Entry: 1087a238c; end: 1087a2403;  */

void FUN_1087a238c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1087a2404; end: 1087a2427;  */

void FUN_1087a2404(void)

{
  FUN_1087a2428();
  return;
}



/* Entry: 1087a2428; end: 1087a2443;  */

long * FUN_1087a2428(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1087a2470();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087a2444; end: 1087a246f;  */

long * FUN_1087a2444(long *param_1)

{
  FUN_1087a2470();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087a2470; end: 1087a2493;  */

void FUN_1087a2470(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1087a2494; end: 1087a2547;  */

ulong FUN_1087a2494(long *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  long extraout_x8;
  ulong extraout_x9;
  ulong uVar9;
  undefined4 *unaff_x20;
  undefined4 *unaff_x21;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  if ((lVar5 - lVar4 >> 3) + 1U >> 0x3d == 0) {
    func_0x0001087a4798();
    plVar8 = param_1 + 2;
    uVar9 = *plVar8 - extraout_x8 >> 2;
    if (uVar9 <= extraout_x9) {
      uVar9 = extraout_x9;
    }
    if (0x7ffffffffffffff7 < (ulong)(*plVar8 - extraout_x8)) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      FUN_1087a2404();
    }
    puVar1 = (undefined4 *)((long)plVar8 + (lVar5 - lVar4));
    uVar6 = *unaff_x20;
    *puVar1 = *unaff_x21;
    puVar1[1] = uVar6;
    func_0x0001087a4600();
    FUN_1087a238c();
    uVar9 = param_1[1];
    func_0x0001087a4614();
    return uVar9;
  }
  func_0x0001087a2378();
  iVar7 = (int)param_1;
  func_0x0001087a4614();
  func_0x0001087a44bc();
  uVar2 = 0;
  if (iVar7 != 1) {
    uVar2 = (uint)(iVar7 == 2);
  }
  uVar3 = 1;
  if (iVar7 != 1) {
    uVar3 = (uint)(iVar7 == 2);
  }
  return (ulong)(uVar2 | uVar3 << 8);
}



/* Entry: 1087a2548; end: 1087a256b;  */

uint FUN_1087a2548(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_1 != 1) {
    uVar1 = (uint)(param_1 == 2);
  }
  uVar2 = 1;
  if (param_1 != 1) {
    uVar2 = (uint)(param_1 == 2);
  }
  return uVar1 | uVar2 << 8;
}



/* Entry: 1087a256c; end: 1087a2637;  */

long FUN_1087a256c(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((bRam000000011326a658 & 1) == 0) {
    iVar2 = 0x1326a658;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      uStack_28 = 0;
      uStack_20 = 0;
      uStack_18 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      uStack_40 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      func_0x0001052916b0(0x11326a5f8,&uStack_28,&uStack_40,&uStack_58,&uStack_70);
      func_0x000104bee7a0(&uStack_70);
      func_0x000104bee7dc(&uStack_58);
      func_0x000104bee864(&uStack_40);
      func_0x000107c27a04(&uStack_28);
      ___cxa_guard_release(0x11326a658);
    }
  }
  lVar1 = param_1 + 0x8d8;
  if (*(char *)(param_1 + 0x950) == '\0') {
    lVar1 = 0x11326a5f8;
  }
  return lVar1;
}



/* Entry: 1087a2638; end: 1087a2857;  */

void FUN_1087a2638(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  long *unaff_x19;
  long unaff_x20;
  long ***ppplVar3;
  long lVar4;
  long ***ppplVar5;
  long lVar6;
  undefined8 unaff_x30;
  undefined1 auStack_130 [88];
  long *plStack_d8;
  long **pplStack_d0;
  long lStack_c8;
  long **pplStack_98;
  long **pplStack_90;
  long **pplStack_88;
  ulong uStack_80;
  long **pplStack_70;
  long **pplStack_68;
  
  lVar6 = param_4 - param_3;
  if (0 < lVar6) {
    func_0x0001087a4698();
    ppplVar3 = (long ***)(param_1 + 0x10);
    ppplVar5 = *(long ****)(param_1 + 8);
    lVar4 = lVar6 / 0x58;
    if (lVar6 <= (long)*ppplVar3 - (long)ppplVar5) {
      lVar6 = (long)ppplVar5 - unaff_x20;
      if (lVar6 / 0x58 < lVar4) {
        pplStack_90 = (long **)&pplStack_70;
        pplStack_88 = (long **)&pplStack_68;
        uStack_80 = uStack_80 & 0xffffffffffffff00;
        pplStack_98 = (long **)ppplVar3;
        pplStack_70 = (long **)ppplVar5;
        for (lVar4 = param_3 + lVar6; pplStack_68 = (long **)ppplVar5, lVar4 != param_4;
            lVar4 = lVar4 + 0x58) {
          FUN_108685a78(ppplVar5,lVar4);
          ppplVar5 = (long ***)(pplStack_68 + 0xb);
        }
        uStack_80 = CONCAT71(uStack_80._1_7_,1);
        func_0x00010529199c(&pplStack_98);
        unaff_x19[1] = (long)ppplVar5;
        if (lVar6 < 1) goto LAB_1087a2760;
        func_0x0001087a45b0();
        lVar4 = lVar6 / 0x58;
        ppplVar3 = ppplVar5;
      }
      else {
        func_0x0001087a45b0();
      }
      lVar6 = param_3;
      func_0x0001087a47d0();
      pplStack_d0 = (long **)ppplVar3;
      lStack_c8 = param_3;
      for (lVar4 = lVar4 * 0x58; lVar4 != 0; lVar4 = lVar4 + -0x58) {
        plStack_d8 = unaff_x19 + 2;
        FUN_108685a78(auStack_130,lVar6);
        FUN_1087a2964(unaff_x20,auStack_130);
        func_0x000104bee8ec(auStack_130);
        unaff_x20 = unaff_x20 + 0x58;
        lVar6 = lVar6 + 0x58;
      }
      return;
    }
    func_0x0001087a47b0();
    plVar1 = unaff_x19;
    func_0x000105291b60();
    func_0x0001052917dc(&pplStack_98,plVar1,(unaff_x20 - *unaff_x19) / 0x58,ppplVar3);
    lVar4 = (long)pplStack_88 + lVar6;
    for (; lVar6 != 0; lVar6 = lVar6 + -0x58) {
      FUN_108685a78(pplStack_88,param_3);
      pplStack_88 = pplStack_88 + 0xb;
      param_3 = param_3 + 0x58;
    }
    pplStack_88 = (long **)lVar4;
    func_0x000105291860(ppplVar3);
    lVar6 = *unaff_x19;
    pplStack_88 = (long **)((long)pplStack_88 + (unaff_x19[1] - unaff_x20));
    unaff_x19[1] = unaff_x20;
    func_0x000105291860(ppplVar3);
    pplStack_98 = (long **)*unaff_x19;
    *unaff_x19 = (long)(pplStack_90 + ((unaff_x20 - lVar6) / -0x58) * 0xb);
    uVar2 = unaff_x19[2];
    unaff_x19[2] = uStack_80;
    unaff_x19[1] = (long)pplStack_88;
    pplStack_90 = pplStack_98;
    pplStack_88 = pplStack_98;
    uStack_80 = uVar2;
    func_0x000105291a1c(&pplStack_98);
  }
LAB_1087a2760:
  func_0x0001087a47d0(unaff_x30);
  return;
}



/* Entry: 1087a2858; end: 1087a28ef;  */

void FUN_1087a2858(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = lVar3;
  for (uVar2 = param_2 + (lVar3 - param_4); uVar2 < param_3; uVar2 = uVar2 + 0x58) {
    func_0x000105291934(lVar1,uVar2);
    lVar1 = lVar1 + 0x58;
  }
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = lVar3 + -0x58;
  param_2 = param_2 + (lVar1 - param_4);
  for (param_4 = param_4 - lVar3; param_4 != 0; param_4 = param_4 + 0x58) {
    FUN_1087a2964(lVar1,param_2);
    param_2 = param_2 + -0x58;
    lVar1 = lVar1 + -0x58;
  }
  return;
}



/* Entry: 1087a28f0; end: 1087a2963;  */

void FUN_1087a28f0(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_90 [88];
  long lStack_38;
  
  for (param_3 = param_3 * 0x58; param_3 != 0; param_3 = param_3 + -0x58) {
    lStack_38 = param_1 + 0x10;
    FUN_108685a78(auStack_90,param_2);
    FUN_1087a2964(param_4,auStack_90);
    func_0x000104bee8ec(auStack_90);
    param_4 = param_4 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



/* Entry: 1087a2964; end: 1087a299b;  */

long FUN_1087a2964(long param_1,long param_2)

{
  func_0x000107c3194c();
  func_0x000107c3194c(param_1 + 0x18,param_2 + 0x18);
  func_0x0001087a476c();
  func_0x000107c27c54();
  return param_1;
}



/* Entry: 1087a299c; end: 1087a29fb;  */

undefined8 *
FUN_1087a299c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c27994(&uStack_50);
  uVar1 = *param_3;
  uVar2 = *param_4;
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[2] = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  *(undefined4 *)(param_1 + 3) = uVar1;
  param_1[4] = uVar2;
  func_0x0001087a4640();
  return param_1;
}



/* Entry: 1087a29fc; end: 1087a2a2f;  */

void FUN_1087a29fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1087a2ae4(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0xb0;
  return;
}



/* Entry: 1087a2a30; end: 1087a2ae3;  */

long FUN_1087a2a30(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  FUN_10863b8f0(param_1,(param_1[1] - *param_1) / 0xb0 + 1);
  func_0x0001087a44e0();
  FUN_10863b6bc();
  FUN_1087a2ae4(lStack_58,param_2,param_3,param_4,param_5);
  lStack_58 = lStack_58 + 0xb0;
  func_0x0001087a4600();
  FUN_10863b680();
  lVar1 = param_1[1];
  func_0x00010863b88c(auStack_68);
  return lVar1;
}



/* Entry: 1087a2ae4; end: 1087a2b8b;  */

undefined8 FUN_1087a2ae4(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *unaff_x21;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [88];
  
  func_0x0001087a46a4();
  FUN_108685a78(auStack_88);
  uVar1 = *param_3;
  FUN_1087a2b8c(auStack_c0);
  uStack_d8 = unaff_x21[1];
  uStack_e0 = *unaff_x21;
  uStack_d0 = unaff_x21[2];
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  *unaff_x21 = 0;
  FUN_10861b3fc(param_1,auStack_88,uVar1,auStack_c0,&uStack_e0);
  FUN_10861b4fc(&uStack_e0);
  FUN_10861b5ac(auStack_c0);
  func_0x000104bee8ec(auStack_88);
  return param_1;
}



/* Entry: 1087a2b8c; end: 1087a2ba7;  */

void FUN_1087a2b8c(long param_1)

{
  FUN_108686110();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1087a2ba8; end: 1087a2c1b;  */

undefined8 FUN_1087a2ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [32];
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38);
  FUN_1086864ac(auStack_60,param_3);
  uStack_40 = 1;
  FUN_10861b168(param_1,auStack_38,auStack_60);
  FUN_10861b234(auStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return param_1;
}



/* Entry: 1087a2c1c; end: 1087a2c73;  */

undefined4 *
FUN_1087a2c1c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  func_0x000107c27994(auStack_50,param_4);
  uStack_38 = 1;
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_10861b020(param_1 + 2,auStack_50);
  FUN_10861b090(auStack_50);
  return param_1;
}



/* Entry: 1087a2c74; end: 1087a2caf;  */

undefined8 * FUN_1087a2c74(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1087a2cb0(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x118);
  return param_1;
}



/* Entry: 1087a2cb0; end: 1087a2d1b;  */

void FUN_1087a2cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001087a4798();
    FUN_1087a2d1c();
    func_0x0001087a478c();
    FUN_1087a2d68();
  }
  uStack_38 = 1;
  FUN_1087a2fcc(&uStack_40);
  return;
}



/* Entry: 1087a2d1c; end: 1087a2d67;  */

void FUN_1087a2d1c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xea0ea0ea0ea0eb) {
    plVar1 = param_1 + 2;
    func_0x000108642744();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x23);
  }
  else {
    FUN_108642638();
    plVar1 = param_1 + 2;
    FUN_1087a2d9c();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1087a2d68; end: 1087a2d9b;  */

void FUN_1087a2d68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_1087a2d9c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1087a2d9c; end: 1087a2daf;  */

void FUN_1087a2d9c(void)

{
  FUN_1087a2db0();
  return;
}



/* Entry: 1087a2db0; end: 1087a2e3b;  */

long FUN_1087a2db0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x118) {
    FUN_1087a2e3c(param_4,param_2);
    param_4 = lStack_38 + 0x118;
  }
  uStack_48 = 1;
  FUN_108642970(&uStack_60);
  return param_4;
}



/* Entry: 1087a2e3c; end: 1087a2f0b;  */

void FUN_1087a2e3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087a4698();
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  func_0x000107c279a0(param_1 + 2,param_2 + 2);
  func_0x000104be0ccc(unaff_x19 + 0x30,unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
  FUN_108643c70(unaff_x19 + 0x58,unaff_x20 + 0x58);
  FUN_1087a2f0c(unaff_x19 + 0x80,unaff_x20 + 0x80);
  FUN_1087a2f6c(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
  func_0x000107c279d4(unaff_x19 + 0xf0,unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(unaff_x20 + 0x110);
  return;
}



/* Entry: 1087a2f0c; end: 1087a2f3b;  */

void FUN_1087a2f0c(long param_1)

{
  func_0x0001087a46bc();
  *(undefined1 *)(param_1 + 0x48) = 0;
  FUN_1087a2f3c();
  return;
}



/* Entry: 1087a2f3c; end: 1087a2f4f;  */

void FUN_1087a2f3c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_108684418();
    *(undefined1 *)(param_1 + 0x48) = 1;
    return;
  }
  return;
}



/* Entry: 1087a2f50; end: 1087a2f6b;  */

void FUN_1087a2f50(long param_1)

{
  FUN_108684418();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 1087a2f6c; end: 1087a2f9b;  */

void FUN_1087a2f6c(long param_1)

{
  func_0x0001087a46bc();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_1087a2f9c();
  return;
}



/* Entry: 1087a2f9c; end: 1087a2faf;  */

void FUN_1087a2f9c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x000107c28c7c();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 1087a2fb0; end: 1087a2fcb;  */

void FUN_1087a2fb0(long param_1)

{
  func_0x000107c28c7c();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1087a2fcc; end: 1087a302f;  */

long FUN_1087a2fcc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001086422bc(param_1);
  }
  return param_1;
}



/* Entry: 1087a3030; end: 1087a3073;  */

long FUN_1087a3030(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001087a467c();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x58) {
    func_0x0001087a478c();
    FUN_1087a3074();
    unaff_x19 = unaff_x19 + 0x58;
  }
  return unaff_x19;
}



/* Entry: 1087a3074; end: 1087a30ab;  */

long FUN_1087a3074(long param_1,long param_2)

{
  func_0x000107c27cfc();
  func_0x000107c27cfc(param_1 + 0x18,param_2 + 0x18);
  func_0x0001087a476c();
  func_0x000107c27c5c();
  return param_1;
}



/* Entry: 1087a30ac; end: 1087a30ef;  */

long FUN_1087a30ac(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001087a467c();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x18) {
    func_0x0001087a478c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    unaff_x19 = unaff_x19 + 0x18;
  }
  return unaff_x19;
}



/* Entry: 1087a30f0; end: 1087a3147;  */

void FUN_1087a30f0(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 1087a3148; end: 1087a3187;  */

void FUN_1087a3148(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x0001087a3168();
  }
  return;
}



/* Entry: 1087a3188; end: 1087a31d3;  */

void FUN_1087a3188(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087a4698();
  *param_1 = *param_2;
  FUN_1087a31d4(param_1 + 1,param_2 + 1);
  *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c279a0(unaff_x19 + 0x50,unaff_x20 + 0x50);
  return;
}



/* Entry: 1087a31d4; end: 1087a3203;  */

void FUN_1087a31d4(long param_1)

{
  func_0x0001087a46bc();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_1087a3204();
  return;
}



/* Entry: 1087a3204; end: 1087a3217;  */

void FUN_1087a3204(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1087a3244(param_1 + 8,param_2 + 8);
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 1087a3218; end: 1087a3243;  */

void FUN_1087a3218(long param_1,long param_2)

{
  FUN_1087a3244(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 1087a3244; end: 1087a3277;  */

void FUN_1087a3244(long param_1)

{
  func_0x0001087a46bc();
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  FUN_1087a3278();
  return;
}



/* Entry: 1087a3278; end: 1087a32c7;  */

void FUN_1087a3278(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087a4698();
  FUN_1087a32c8();
  uVar1 = *(uint *)(unaff_x20 + 0x28);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_110a702e0)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x28) = uVar1;
  }
  return;
}



/* Entry: 1087a32c8; end: 1087a3313;  */

void FUN_1087a32c8(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a702d0)[*(uint *)(param_1 + 0x28)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 1087a3314; end: 1087a333b;  */

undefined8 FUN_1087a3314(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x0001086422bc(&uStack_28);
  return param_2;
}



/* Entry: 1087a333c; end: 1087a336b;  */

void FUN_1087a333c(long param_1)

{
  func_0x0001087a46bc();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1087a336c();
  return;
}



/* Entry: 1087a336c; end: 1087a337f;  */

void FUN_1087a336c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1087a339c();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 1087a3380; end: 1087a339b;  */

void FUN_1087a3380(long param_1)

{
  FUN_1087a339c();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1087a339c; end: 1087a33a7;  */

undefined8 * FUN_1087a339c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110a80f30;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088bad34();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 1) {
    uVar2 = 0;
    FUN_1088bab7c(0,*(undefined8 *)(param_2 + 0x10));
    param_1[2] = uVar2;
  }
  return param_1;
}



/* Entry: 1087a33a8; end: 1087a34a3;  */

long FUN_1087a33a8(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1087a32c8(param_1 + 8);
  }
  return param_1;
}



/* Entry: 1087a34a4; end: 1087a3623;  */

/* WARNING: Possible PIC construction at 0x0001087a3564: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001087a3568) */
/* WARNING: Removing unreachable block (ram,0x0001087a3548) */

long FUN_1087a34a4(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lStack_100;
  long lStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  byte bStack_98;
  undefined1 uStack_59;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  long *plStack_48;
  undefined1 **ppuStack_40;
  undefined4 uStack_38;
  
  puVar4 = auStack_a0;
  func_0x000107c2837c(auStack_a0);
  ppuStack_40 = &puStack_58;
  uStack_38 = 3;
  lVar3 = *param_2;
  puStack_58 = auStack_a0;
  puStack_50 = auStack_a0;
  plStack_48 = param_2;
  func_0x000107c28380(lVar3,lVar3 + param_2[1],&puStack_58);
  uVar2 = bStack_98 - 0x42;
  if (uVar2 < 0x37 && (1L << ((ulong)uVar2 & 0x3f) & 0x40200700400401U) != 0 || bStack_98 == 0) {
    lVar1 = *param_2;
    *param_2 = lVar3;
    param_2[1] = param_2[1] + (lVar1 - lVar3);
    param_2 = (long *)*param_1;
    if ((long *)param_1[1] == param_2) {
      *param_3 = *param_3;
      return lVar3;
    }
    uVar5 = 0x1087a3568;
  }
  else {
    puVar4 = &uStack_59;
    uVar5 = 0x1087a35a4;
    func_0x00010bd48714(puVar4,&UNK_10f3dc022);
  }
  puStack_d0 = auStack_a0;
  plStack_c8 = param_2;
  puStack_c0 = param_1;
  plStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  uStack_a8 = uVar5;
  func_0x0001087a467c();
  lStack_f8 = *(long *)(puVar4 + 0x18);
  lStack_100 = *(long *)(puVar4 + 0x10);
  plStack_f0 = *(long **)(puVar4 + 0x20);
  func_0x000107c2838c();
  lStack_f8 = param_2[6];
  lStack_100 = param_2[5];
  plStack_f0 = (long *)param_2[7];
  func_0x000107c28390((long)param_2 + 4,&lStack_100,param_3);
  lStack_100 = *param_3;
  lStack_f8 = param_3[3];
  uStack_e0 = 0;
  uStack_d8 = 0;
  plStack_f0 = param_2;
  plStack_e8 = param_3;
  FUN_1087a370c(&lStack_100,*param_1,param_2);
  return lStack_100;
}



/* Entry: 1087a3624; end: 1087a366b;  */

void FUN_1087a3624(ulong *param_1,uint param_2,undefined8 param_3,long param_4,uint *param_5)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = param_4 + (ulong)param_2;
  *param_1 = uVar1;
  param_1[1] = 0;
  if ((*(byte *)((long)param_5 + 9) & 0xf) == 4) {
    uVar3 = (ulong)*param_5;
    if (uVar1 <= uVar3 && uVar3 - uVar1 != 0) {
      *param_1 = uVar3;
      param_1[1] = uVar3 - uVar1;
      return;
    }
  }
  else {
    uVar2 = param_5[1];
    if ((int)param_2 < (int)uVar2) {
      *param_1 = param_4 + (ulong)uVar2;
      param_1[1] = (ulong)(uVar2 - param_2);
    }
  }
  return;
}



/* Entry: 1087a366c; end: 1087a3697;  */

void FUN_1087a366c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_1087a3698(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 1087a3698; end: 1087a36e3;  */

void FUN_1087a3698(void)

{
  undefined8 in_x3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001087a4798();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 1) {
    func_0x000107c283a0(in_x3,unaff_x21);
  }
  return;
}



/* Entry: 1087a36e4; end: 1087a370b;  */

undefined1  [16] FUN_1087a36e4(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *puVar1 = *param_1;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 1087a370c; end: 1087a3793;  */

void FUN_1087a370c(undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_2c = 0;
  if (param_2 < 0) {
    uStack_30 = 0x2d;
    uStack_2c = 1;
    lStack_38 = -param_2;
  }
  else {
    bVar1 = *(byte *)(param_3 + 9) >> 4 & 7;
    lStack_38 = param_2;
    if (1 < bVar1) {
      uStack_30 = 0x2b;
      if (bVar1 != 2) {
        uStack_30 = 0x20;
      }
      uStack_2c = 1;
    }
  }
  lStack_40 = param_3;
  FUN_1087a3794((long)*(char *)(param_3 + 8),&uStack_50);
  *param_1 = uStack_50;
  return;
}



/* Entry: 1087a3794; end: 1087a3817;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1087a3794(int param_1,char *******param_2)

{
  undefined8 *puVar1;
  char *******pppppppcVar2;
  char *******pppppppcVar3;
  undefined1 uVar4;
  char ******ppppppcVar5;
  char ******ppppppcVar6;
  ulong uVar7;
  undefined8 uVar8;
  char ******ppppppcVar9;
  uint uVar10;
  undefined8 extraout_x8;
  int iVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  int iVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  char *******pppppppcVar21;
  undefined8 *unaff_x29;
  code *unaff_x30;
  undefined8 *in_stack_00000050;
  undefined1 auStack_291 [17];
  undefined1 *puStack_280;
  undefined4 uStack_278;
  undefined1 uStack_269;
  char *******pppppppcStack_268;
  ulong uStack_260;
  byte bStack_251;
  undefined **ppuStack_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [503];
  undefined1 auStack_39 [25];
  
  if (param_1 == 0) {
code_r0x0001087a3818:
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    ppppppcVar5 = param_2[3];
    func_0x000107c28424();
    func_0x0001087a4458();
    FUN_1087a3c70();
    *param_2 = ppppppcVar5;
    return;
  }
  if (param_1 == 0x42) {
LAB_1087a3880:
    if (*(char *)((long)param_2[2] + 9) < '\0') {
      func_0x0001087a4500();
    }
    ppppppcVar5 = param_2[3];
    func_0x0001087a3f38();
    func_0x0001087a4458();
    FUN_1087a3f50();
    *param_2 = ppppppcVar5;
  }
  else {
    if (param_1 == 0x4c) {
      func_0x0001087a4730();
      puVar1 = &stack0x00000050;
      in_stack_00000050 = unaff_x29;
      func_0x0001087a4444();
      func_0x00010bd490e8(&pppppppcStack_268,param_2[1]);
      uVar4 = bStack_251 == 0;
      uVar12 = uStack_260;
      if (-1 < (char)bStack_251) {
        uVar12 = (ulong)bStack_251;
      }
      if (uVar12 == 0) {
        FUN_1087a3818();
      }
      else {
        iVar13 = (int)unaff_x19[1];
        func_0x00010bd49134();
        uStack_269 = (undefined1)iVar13;
        if (iVar13 == 0) {
          FUN_1087a3818();
        }
        else {
          uVar7 = unaff_x19[3];
          func_0x000107c28424();
          uVar12 = (ulong)(char)bStack_251;
          pppppppcVar21 = pppppppcStack_268;
          if (-1 < (long)uVar12) {
            pppppppcVar21 = (char *******)&pppppppcStack_268;
          }
          uVar14 = uStack_260;
          if (-1 < (char)bStack_251) {
            uVar14 = uVar12;
          }
          pppppppcVar2 = (char *******)((long)pppppppcVar21 + uVar14);
          iVar13 = (int)uVar14;
          uVar16 = uVar7;
          uVar15 = uVar7;
          for (; iVar11 = (int)uVar16, iVar18 = (int)uVar7 + iVar13, pppppppcVar3 = pppppppcVar2,
              uVar14 != 0; uVar14 = uVar14 - 1) {
            iVar18 = (int)uVar15;
            iVar17 = (int)*(char *)pppppppcVar21;
            uVar16 = (ulong)(uint)(iVar11 - iVar17);
            pppppppcVar3 = pppppppcVar21;
            if ((iVar11 - iVar17 == 0 || iVar11 < iVar17) || ((iVar17 - 0x7fU & 0xff) < 0x82))
            break;
            uVar15 = (ulong)(iVar18 + 1);
            pppppppcVar21 = (char *******)((long)pppppppcVar21 + 1);
          }
          if ((char)bStack_251 < '\0') {
            pppppppcVar2 = (char *******)((long)pppppppcStack_268 + uStack_260);
            pppppppcVar21 = pppppppcStack_268;
            uVar12 = uStack_260;
          }
          else {
            pppppppcVar21 = (char *******)&pppppppcStack_268;
            pppppppcVar2 = (char *******)((long)pppppppcVar21 + uVar12);
          }
          if (pppppppcVar3 == pppppppcVar2) {
            iVar13 = 0;
            uVar10 = (uint)*(byte *)((long)pppppppcVar21 + (uVar12 - 1));
            if (uVar10 != 0) {
              iVar13 = (iVar11 + -1) / (int)uVar10;
            }
            iVar18 = iVar13 + iVar18;
          }
          func_0x000107c28428(auStack_39 + 1,unaff_x19[3],uVar7);
          puStack_248 = auStack_230;
          ppuStack_250 = &PTR_DAT_11099bc38;
          uStack_238 = 500;
          uStack_240 = 0;
          uVar12 = (long)*(int *)((long)unaff_x19 + 0x24) + (long)iVar18;
          uVar14 = uVar12 & 0xffffffff;
          func_0x000107c283e0(&ppuStack_250,uVar14);
          iVar13 = 0;
          pppppppcVar21 = pppppppcStack_268;
          if (-1 < (char)bStack_251) {
            pppppppcVar21 = (char *******)&pppppppcStack_268;
          }
          uVar7 = uVar7 & 0xffffffff;
          puVar20 = puStack_248 + (uVar12 - 1);
          while (puVar19 = puVar20, uVar4 = (int)uVar7 == 1, 1 < (int)uVar7) {
            uVar16 = uVar7 - 1;
            puVar20 = puVar19 + -1;
            *puVar19 = auStack_39[uVar7];
            uVar7 = uVar16;
            if ('\0' < *(char *)pppppppcVar21) {
              iVar13 = iVar13 + 1;
              iVar18 = 0;
              iVar11 = (int)*(char *)pppppppcVar21;
              if (iVar11 != 0) {
                iVar18 = iVar13 / iVar11;
              }
              if ((iVar11 != 0x7f) && (iVar13 == iVar18 * iVar11)) {
                uVar16 = uStack_260;
                pppppppcVar2 = pppppppcStack_268;
                if (-1 < (char)bStack_251) {
                  uVar16 = (ulong)bStack_251;
                  pppppppcVar2 = (char *******)&pppppppcStack_268;
                }
                if ((char *)((long)pppppppcVar21 + 1) != (char *)((long)pppppppcVar2 + uVar16)) {
                  pppppppcVar21 = (char *******)((long)pppppppcVar21 + 1);
                  iVar13 = 0;
                }
                FUN_1087a36e4(&uStack_269,&pppppppcStack_268,puVar20);
                puVar20 = puVar19 + -2;
              }
            }
          }
          *puVar19 = auStack_39[1];
          if (*(int *)((long)unaff_x19 + 0x24) != 0) {
            puVar19[-1] = 0x2d;
          }
          uVar8 = *unaff_x19;
          puStack_280 = puStack_248;
          uStack_278 = (undefined4)uVar12;
          FUN_1087a424c(uVar8,unaff_x19[2],uVar14,uVar14,&puStack_280);
          *unaff_x19 = uVar8;
          func_0x000107c283e8(&ppuStack_250);
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppcStack_268);
      func_0x0001087a4420(extraout_x8);
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      param_2 = (char *******)&pppppppcStack_268;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      unaff_x30 = FUN_1087a3bf4;
      func_0x0001087a44bc();
      register0x00000008 = (BADSPACEBASE *)&puStack_280;
      unaff_x29 = puVar1;
code_r0x0001087a3bf4:
      *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      *(char *)((long)register0x00000008 + -0x11) = (char)param_2[3];
      func_0x000107c283a0(*param_2,(undefined1 *)((long)register0x00000008 + -0x11));
      return;
    }
    if (param_1 != 0x58) {
      if (param_1 == 0x62) goto LAB_1087a3880;
      if (param_1 == 99) goto code_r0x0001087a3bf4;
      if (param_1 != 0x78) {
        if (param_1 == 0x6f) {
          ppppppcVar5 = param_2[3];
          func_0x0001087a40c4();
          ppppppcVar9 = param_2[2];
          if (((*(char *)((long)ppppppcVar9 + 9) < '\0') &&
              (*(int *)((long)ppppppcVar9 + 4) <= (int)ppppppcVar5)) &&
             (param_2[3] != (char ******)0x0)) {
            uVar10 = *(uint *)((long)param_2 + 0x24);
            *(uint *)((long)param_2 + 0x24) = uVar10 + 1;
            *(undefined1 *)((long)param_2 + (ulong)uVar10 + 0x20) = 0x30;
          }
          ppppppcVar6 = *param_2;
          FUN_1087a40dc(ppppppcVar6,ppppppcVar5,param_2 + 4,*(undefined4 *)((long)param_2 + 0x24),
                        ppppppcVar9,param_2,(ulong)ppppppcVar5 & 0xffffffff);
          *param_2 = ppppppcVar6;
          return;
        }
        if (param_1 != 100) {
          unaff_x29 = (undefined8 *)&stack0xfffffffffffffff0;
          unaff_x30 = FUN_1087a3818;
          FUN_1087a3c20();
          register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
        }
        goto code_r0x0001087a3818;
      }
    }
    if (*(char *)((long)param_2[2] + 9) < '\0') {
      func_0x0001087a4500();
    }
    ppppppcVar5 = param_2[3];
    FUN_1087a3d88();
    func_0x0001087a4458();
    FUN_1087a3da0();
    *param_2 = ppppppcVar5;
  }
  return;
}



/* Entry: 1087a3818; end: 1087a3933;  */

void FUN_1087a3818(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[3];
  func_0x000107c28424();
  func_0x0001087a4458();
  FUN_1087a3c70();
  *param_1 = uVar1;
  return;
}



/* Entry: 1087a3934; end: 1087a3bf3;  */

void FUN_1087a3934(long param_1)

{
  char ******ppppppcVar1;
  char ******ppppppcVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char ******ppppppcVar6;
  uint uVar7;
  undefined8 extraout_x8;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 *unaff_x19;
  int iVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 in_stack_00000050;
  undefined1 uStack_291;
  undefined8 *puStack_290;
  code *pcStack_288;
  undefined1 *puStack_280;
  undefined4 uStack_278;
  undefined1 uStack_269;
  char *****pppppcStack_268;
  ulong uStack_260;
  byte bStack_251;
  undefined **ppuStack_250;
  undefined1 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [503];
  undefined1 auStack_39 [41];
  undefined8 uStack_10;
  
  func_0x0001087a4730();
  func_0x0001087a4444();
  uStack_10 = extraout_x8;
  func_0x00010bd490e8(&pppppcStack_268,*(undefined8 *)(param_1 + 8));
  uVar3 = bStack_251 == 0;
  uVar9 = uStack_260;
  if (-1 < (char)bStack_251) {
    uVar9 = (ulong)bStack_251;
  }
  if (uVar9 == 0) {
    FUN_1087a3818();
  }
  else {
    iVar10 = (int)unaff_x19[1];
    func_0x00010bd49134();
    uStack_269 = (undefined1)iVar10;
    if (iVar10 == 0) {
      FUN_1087a3818();
    }
    else {
      uVar4 = unaff_x19[3];
      func_0x000107c28424();
      uVar9 = (ulong)(char)bStack_251;
      ppppppcVar6 = (char ******)pppppcStack_268;
      if (-1 < (long)uVar9) {
        ppppppcVar6 = &pppppcStack_268;
      }
      uVar11 = uStack_260;
      if (-1 < (char)bStack_251) {
        uVar11 = uVar9;
      }
      ppppppcVar1 = (char ******)((long)ppppppcVar6 + uVar11);
      iVar10 = (int)uVar11;
      uVar13 = uVar4;
      uVar12 = uVar4;
      for (; iVar8 = (int)uVar13, iVar15 = (int)uVar4 + iVar10, ppppppcVar2 = ppppppcVar1,
          uVar11 != 0; uVar11 = uVar11 - 1) {
        iVar15 = (int)uVar12;
        iVar14 = (int)*(char *)ppppppcVar6;
        uVar13 = (ulong)(uint)(iVar8 - iVar14);
        ppppppcVar2 = ppppppcVar6;
        if ((iVar8 - iVar14 == 0 || iVar8 < iVar14) || ((iVar14 - 0x7fU & 0xff) < 0x82)) break;
        uVar12 = (ulong)(iVar15 + 1);
        ppppppcVar6 = (char ******)((long)ppppppcVar6 + 1);
      }
      if ((char)bStack_251 < '\0') {
        ppppppcVar1 = (char ******)((long)pppppcStack_268 + uStack_260);
        ppppppcVar6 = (char ******)pppppcStack_268;
        uVar9 = uStack_260;
      }
      else {
        ppppppcVar6 = &pppppcStack_268;
        ppppppcVar1 = (char ******)((long)ppppppcVar6 + uVar9);
      }
      if (ppppppcVar2 == ppppppcVar1) {
        iVar10 = 0;
        uVar7 = (uint)*(byte *)((long)ppppppcVar6 + (uVar9 - 1));
        if (uVar7 != 0) {
          iVar10 = (iVar8 + -1) / (int)uVar7;
        }
        iVar15 = iVar10 + iVar15;
      }
      func_0x000107c28428(auStack_39 + 1,unaff_x19[3],uVar4);
      puStack_248 = auStack_230;
      ppuStack_250 = &PTR_DAT_11099bc38;
      uStack_238 = 500;
      uStack_240 = 0;
      uVar9 = (long)*(int *)((long)unaff_x19 + 0x24) + (long)iVar15;
      uVar11 = uVar9 & 0xffffffff;
      func_0x000107c283e0(&ppuStack_250,uVar11);
      iVar10 = 0;
      ppppppcVar6 = (char ******)pppppcStack_268;
      if (-1 < (char)bStack_251) {
        ppppppcVar6 = &pppppcStack_268;
      }
      uVar4 = uVar4 & 0xffffffff;
      puVar17 = puStack_248 + (uVar9 - 1);
      while (puVar16 = puVar17, uVar3 = (int)uVar4 == 1, 1 < (int)uVar4) {
        uVar13 = uVar4 - 1;
        puVar17 = puVar16 + -1;
        *puVar16 = auStack_39[uVar4];
        uVar4 = uVar13;
        if ('\0' < *(char *)ppppppcVar6) {
          iVar10 = iVar10 + 1;
          iVar15 = 0;
          iVar8 = (int)*(char *)ppppppcVar6;
          if (iVar8 != 0) {
            iVar15 = iVar10 / iVar8;
          }
          if ((iVar8 != 0x7f) && (iVar10 == iVar15 * iVar8)) {
            uVar13 = uStack_260;
            ppppppcVar1 = (char ******)pppppcStack_268;
            if (-1 < (char)bStack_251) {
              uVar13 = (ulong)bStack_251;
              ppppppcVar1 = &pppppcStack_268;
            }
            if ((char *)((long)ppppppcVar6 + 1) != (char *)((long)ppppppcVar1 + uVar13)) {
              ppppppcVar6 = (char ******)((long)ppppppcVar6 + 1);
              iVar10 = 0;
            }
            FUN_1087a36e4(&uStack_269,&pppppcStack_268,puVar17);
            puVar17 = puVar16 + -2;
          }
        }
      }
      *puVar16 = auStack_39[1];
      if (*(int *)((long)unaff_x19 + 0x24) != 0) {
        puVar16[-1] = 0x2d;
      }
      uVar5 = *unaff_x19;
      puStack_280 = puStack_248;
      uStack_278 = (undefined4)uVar9;
      FUN_1087a424c(uVar5,unaff_x19[2],uVar11,uVar11,&puStack_280);
      *unaff_x19 = uVar5;
      func_0x000107c283e8(&ppuStack_250);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppcStack_268);
  func_0x0001087a4420(uStack_10);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    ppppppcVar6 = &pppppcStack_268;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001087a44bc();
    pcStack_288 = FUN_1087a3bf4;
    uStack_291 = SUB81(ppppppcVar6[3],0);
    puStack_290 = &stack0x00000050;
    func_0x000107c283a0(*ppppppcVar6,&uStack_291);
    return;
  }
  return;
}



/* Entry: 1087a3bf4; end: 1087a3c1f;  */

void FUN_1087a3bf4(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = (undefined1)param_1[3];
  func_0x000107c283a0(*param_1,&uStack_11);
  return;
}



/* Entry: 1087a3c20; end: 1087a3c6f;  */

void FUN_1087a3c20(void)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  
  uVar1 = 0x10;
  ___cxa_allocate_exception();
  func_0x000106e53aa8();
  ___cxa_throw(uVar1,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
  func_0x0001087a4748();
  ___cxa_free_exception();
  func_0x0001087a44b4();
  func_0x0001087a46a4();
  FUN_1087a3624(auStack_70);
  func_0x0001087a43cc();
  FUN_1087a3cb4();
  return;
}



/* Entry: 1087a3c70; end: 1087a3cb3;  */

void FUN_1087a3c70(void)

{
  undefined1 auStack_50 [16];
  
  func_0x0001087a46a4();
  FUN_1087a3624(auStack_50);
  func_0x0001087a43cc();
  FUN_1087a3cb4();
  return;
}



/* Entry: 1087a3cb4; end: 1087a3cbf;  */

long FUN_1087a3cb4(long param_1,long param_2,long param_3)

{
  byte bVar1;
  
  FUN_1087a437c();
  func_0x0001087a4498();
  func_0x0001087a468c();
  FUN_1087a3cec();
  func_0x0001087a46b0();
  bVar1 = *(byte *)(param_3 + 4);
  if ((ulong)bVar1 == 1) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      func_0x0001003a9d9c();
      func_0x0001003a9d4c();
    }
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      param_1 = param_3 + (ulong)bVar1;
      func_0x0001003a9d20(param_3,param_1);
    }
  }
  return param_1;
}



/* Entry: 1087a3cc0; end: 1087a3ceb;  */

long FUN_1087a3cc0(long param_1,long param_2,long param_3)

{
  byte bVar1;
  
  FUN_1087a437c();
  func_0x0001087a4498();
  func_0x0001087a468c();
  FUN_1087a3cec();
  func_0x0001087a46b0();
  bVar1 = *(byte *)(param_3 + 4);
  if ((ulong)bVar1 == 1) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      func_0x0001003a9d9c();
      func_0x0001003a9d4c();
    }
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      param_1 = param_3 + (ulong)bVar1;
      func_0x0001003a9d20(param_3,param_1);
    }
  }
  return param_1;
}



/* Entry: 1087a3cec; end: 1087a3d1f;  */

void FUN_1087a3cec(void)

{
  long extraout_x9;
  
  func_0x0001087a457c();
  if (extraout_x9 != 0) {
    func_0x0001087a4434();
  }
  func_0x0001087a43f4();
  func_0x0001087a4780();
  FUN_1087a3d20();
  return;
}



/* Entry: 1087a3d20; end: 1087a3d3b;  */

undefined8 FUN_1087a3d20(undefined8 param_1,undefined8 param_2)

{
  func_0x0001087a4754();
  FUN_1087a3d3c();
  return param_2;
}



/* Entry: 1087a3d3c; end: 1087a3d87;  */

ulong FUN_1087a3d3c(void)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  ulong uVar3;
  ulong unaff_x19;
  undefined1 auStack_3c [20];
  undefined8 uStack_28;
  
  func_0x0001087a4444();
  uStack_28 = extraout_x8;
  func_0x000107c28428(auStack_3c);
  puVar2 = auStack_3c;
  func_0x0001087a460c();
  func_0x0001087a4420(uStack_28);
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  uVar3 = 0;
  do {
    uVar3 = (ulong)((int)uVar3 + 1);
    bVar1 = (undefined1 *)0xf < puVar2;
    puVar2 = (undefined1 *)((ulong)puVar2 >> 4);
  } while (bVar1);
  return uVar3;
}



/* Entry: 1087a3d88; end: 1087a3d9f;  */

int FUN_1087a3d88(ulong param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = 0xf < param_1;
    param_1 = param_1 >> 4;
  } while (bVar1);
  return iVar2;
}


