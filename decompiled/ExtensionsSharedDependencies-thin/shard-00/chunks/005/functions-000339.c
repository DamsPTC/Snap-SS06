/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00692764; end: 0069279f;  */

ulong * FUN_00692764(ulong *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return (ulong *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x006928fc();
  func_0x00692e60();
  if ((extraout_w8 >> 5 & 1) != 0) {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 006927a0; end: 006927c3;  */

void FUN_006927a0(void)

{
  func_0x006928fc();
  func_0x00692e60();
  return;
}



/* Entry: 006927c4; end: 006927ff;  */

ulong * FUN_006927c4(ulong *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return (ulong *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x006928fc();
  func_0x00692e60();
  if ((extraout_w8 >> 5 & 1) != 0) {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 00692800; end: 0069287b;  */

void FUN_00692800(void)

{
  func_0x006928fc();
  func_0x00692e60();
  return;
}



/* Entry: 0069287c; end: 006928e3;  */

void FUN_0069287c(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00692d80();
  func_0x00693564();
  while (unaff_x22 < *(int *)(unaff_x20 + 0x80)) {
    FUN_0069287c(*(long *)(unaff_x20 + 0x48) + unaff_x21);
    func_0x00693558();
  }
  FUN_00699918();
  *(long *)*unaff_x19 = *(long *)*unaff_x19 + 8;
  return;
}



/* Entry: 006928e4; end: 006935a3;  */

uint FUN_006928e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 8;
  if (*(int *)(param_1 + 0x44) != -1) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00693094(lVar1,param_3);
    return *(uint *)(lVar2 + (long)(int)lVar1 * 4) >> 0x1f;
  }
  return 0;
}



/* Entry: 006935a4; end: 00693663;  */

undefined **
FUN_006935a4(long param_1,undefined **param_2,long param_3,uint param_4,ushort *param_5,uint param_6
            )

{
  undefined **ppuVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_41;
  
  if (param_2 == (undefined **)0x0) {
    param_2 = &PTR_FUN_00a0f388;
  }
  else {
    uVar5 = (ulong)*param_5;
    if (uVar5 != 0) {
      *(uint *)(param_1 + uVar5) = *(uint *)(param_1 + uVar5) | param_6;
    }
    if ((param_4 != 0) && ((param_4 & 7) != 4)) {
      if ((ulong)param_5[1] == 0) {
        ppuVar3 = (undefined **)(ulong)param_4;
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          func_0x00699010();
        }
        FUN_006a4ff4(ppuVar3,&stack0xffffffffffffffe8,param_2,param_3);
        return ppuVar3;
      }
      ppuVar4 = (undefined **)(ulong)param_4;
      ppuVar3 = (undefined **)(param_1 + (ulong)param_5[1]);
      puVar2 = (ulong *)(param_1 + 8);
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      ppuVar1 = ppuVar3;
      FUN_00686eb8(ppuVar3,param_4 & 7,param_4 >> 3,*(undefined8 *)(param_5 + 0x10),param_3,
                   &uStack_80,&uStack_41);
      if (((ulong)ppuVar1 & 1) == 0) {
        if ((*puVar2 & 1) == 0) {
          func_0x00699010(puVar2);
        }
        else {
          puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
        }
        FUN_006a4fd0(ppuVar4,puVar2,param_2,param_3);
      }
      else {
        FUN_00686f4c(ppuVar3,param_4 >> 3,uStack_41,&uStack_80,puVar2,param_2,param_3);
        ppuVar4 = ppuVar3;
      }
      return ppuVar4;
    }
    *(uint *)(param_3 + 0x50) = param_4 - 1;
  }
  return param_2;
}



/* Entry: 00693664; end: 0069377f;  */

undefined **
FUN_00693664(undefined **param_1,undefined **param_2,long param_3,uint param_4,ushort *param_5,
            uint param_6)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  undefined8 unaff_x30;
  undefined8 *puStack_168;
  undefined1 auStack_c0 [112];
  
  if (param_2 == (undefined **)0x0) {
    return &PTR_FUN_00a0f388;
  }
  uVar9 = (ulong)*param_5;
  if (uVar9 != 0) {
    *(uint *)((long)param_1 + uVar9) = *(uint *)((long)param_1 + uVar9) | param_6;
  }
  if ((param_4 == 0) || (uVar3 = (param_4 & 7) == 4, (bool)uVar3)) {
    *(uint *)(param_3 + 0x50) = param_4 - 1;
    return param_2;
  }
  ppuVar8 = param_1;
  ppuVar5 = param_2;
  FUN_00699298();
  FUN_00699298(param_1);
  uVar1 = param_4 >> 3;
  ppuVar4 = ppuVar8;
  FUN_00656068(ppuVar8,uVar1);
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = ppuVar8;
    FUN_00693780(ppuVar8,uVar1);
    if ((int)ppuVar4 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      ppuVar4 = *(undefined ***)(param_3 + 0x60);
      if (ppuVar4 == (undefined **)0x0) {
        FUN_0068e9ac(ppuVar5,uVar1);
        ppuVar4 = ppuVar5;
      }
      else {
        FUN_00655ca0(ppuVar4,ppuVar8,uVar1);
      }
    }
  }
  ppuVar8 = (undefined **)(ulong)param_4;
  func_0x006aabcc();
  if (ppuVar4 == (undefined **)0x0) {
LAB_006a652c:
    func_0x006aabdc();
    func_0x006895cc();
    func_0x006aaadc();
    if ((bool)uVar3) {
      func_0x006aadd8(ppuVar8,param_1,param_2,param_3);
      FUN_006a4ff4();
      return ppuVar8;
    }
  }
  else {
    param_4 = param_4 & 7;
    ppuVar5 = ppuVar4;
    FUN_006538b4();
    uVar2 = *(uint *)(&UNK_00810e8c + ((ulong)ppuVar5 & 0xffffffff) * 4) <= param_4;
    uVar3 = param_4 == *(uint *)(&UNK_00810e8c + ((ulong)ppuVar5 & 0xffffffff) * 4);
    if (!(bool)uVar3) {
      FUN_00659690();
      uVar2 = 1 < param_4;
      uVar3 = param_4 == 2;
      param_1 = ppuVar4;
      if ((!(bool)uVar3) || ((int)ppuVar4 == 0)) goto LAB_006a652c;
      func_0x006ab134();
      func_0x006aadb8();
      ppuVar5 = ppuVar4;
      if (!(bool)uVar2 || (bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x006a6500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(&UNK_00827f78 + extraout_x8_00 * 2) * 4 + 0x6a6504))();
        return ppuVar4;
      }
    }
    func_0x006ab134();
    func_0x006aadb8();
    if (!(bool)uVar2 || (bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x006a64b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_00827f9c)[extraout_x8] * 4 + 0x6a64b4))();
      return ppuVar5;
    }
    func_0x006aaadc();
    if ((bool)uVar3) {
      ppuVar8 = (undefined **)0x0;
      func_0x006aadd8(0,unaff_x30);
      return ppuVar8;
    }
  }
  ___stack_chk_fail();
  ppuVar8 = (undefined **)0x367;
  FUN_0077670c(auStack_c0,&UNK_0091541c,0x367);
  func_0x006987c8(auStack_c0,&UNK_00915452);
  puVar6 = auStack_c0;
  FUN_005558a0();
  func_0x006ab05c();
  func_0x006aac98();
  puVar7 = puVar6;
  FUN_00699298();
  FUN_00699298(puVar6);
  puStack_168 = (undefined8 *)0x0;
  if (*(char *)(*(long *)(puVar7 + 0x20) + 0x53) == '\x01') {
    for (lVar10 = 0; lVar10 < *(int *)(puVar7 + 4); lVar10 = lVar10 + 1) {
      func_0x006ab158();
    }
  }
  else {
    func_0x006aabdc();
    FUN_0068b260();
  }
  for (; puStack_168 != (undefined8 *)0x0; puStack_168 = puStack_168 + 1) {
    func_0x006aabe8(*puStack_168);
    FUN_006a6f40();
  }
  if (*(char *)(*(long *)(puVar7 + 0x20) + 0x50) == '\x01') {
    func_0x006aabdc();
    FUN_006895b0();
    func_0x006aaf10();
    FUN_006a5c08();
  }
  else {
    func_0x006aabdc();
    FUN_006895b0();
    func_0x006aaf10();
    FUN_006a5a40();
  }
  func_0x006aac8c();
  return ppuVar8;
}



/* Entry: 00693780; end: 0069379b;  */

bool FUN_00693780(long param_1)

{
  FUN_006566e8();
  return param_1 != 0;
}



/* Entry: 0069379c; end: 0069379f;  */

void FUN_0069379c(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar2 = param_1;
  uVar5 = param_2;
  uStack_48 = param_2;
  FUN_00699298();
  FUN_00699298(param_1);
  if ((*(byte *)(*(long *)(uVar2 + 0x20) + 0x50) & 1) == 0) {
    do {
      uVar3 = param_3;
      func_0x00538a04(param_3,&uStack_48);
      if ((uVar3 & 1) != 0) {
        return;
      }
      func_0x006ab0c8(uStack_48,&uStack_60);
      if (uStack_48 == 0) {
        return;
      }
      if (((uint)uStack_60 == 0) || (((uint)uStack_60 & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = (uint)uStack_60 - 1;
        return;
      }
      uVar1 = (uint)uStack_60 >> 3;
      uVar3 = uVar2;
      FUN_00656068(uVar2,uVar1);
      if (uVar3 == 0) {
        uVar3 = uVar2;
        FUN_00693780(uVar2,uVar1);
        if ((int)uVar3 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(ulong *)(param_3 + 0x60);
          if (uVar3 == 0) {
            uVar3 = uVar5;
            FUN_0068e9ac(uVar5,uVar1);
          }
          else {
            FUN_00655ca0(uVar3,uVar2,uVar1);
          }
        }
      }
      uVar4 = param_1;
      FUN_006a6428(param_1,uStack_48,param_3,uStack_60 & 0xffffffff,uVar5,uVar3);
      uStack_48 = uVar4;
    } while (uVar4 != 0);
  }
  else {
    uStack_60 = param_1;
    uStack_58 = uVar2;
    uStack_50 = uVar5;
    FUN_006a5ff4(&uStack_60,param_2,param_3);
  }
  return;
}



/* Entry: 006937a0; end: 006938bf;  */

long FUN_006937a0(long param_1,long param_2,ulong param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uStack_4c;
  long lStack_48;
  
  uVar2 = *(ushort *)(param_5 + 2);
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  lStack_48 = param_2;
  do {
    uVar3 = param_3;
    func_0x00538a04(param_3,&lStack_48);
    if ((uVar3 & 1) != 0) {
      return lStack_48;
    }
    FUN_00538a80(lStack_48,&uStack_4c,0);
    if (lStack_48 == 0) {
      return 0;
    }
    if (uStack_4c == 0xb) {
      iVar1 = *(int *)(param_3 + 0x58);
      *(int *)(param_3 + 0x58) = iVar1 + -1;
      if (iVar1 < 1) {
        return 0;
      }
      *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0x5c) + 1;
      lVar4 = param_1 + (ulong)uVar2;
      FUN_0068788c(lVar4,lStack_48,uVar5,param_1 + 8,param_3);
      *(ulong *)(param_3 + 0x58) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20) + -1,
                    (int)*(undefined8 *)(param_3 + 0x58) + 1);
      iVar1 = *(int *)(param_3 + 0x50);
      *(undefined4 *)(param_3 + 0x50) = 0;
      if (iVar1 != 0xb) {
        return 0;
      }
    }
    else {
      if ((uStack_4c == 0) || ((uStack_4c & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = uStack_4c - 1;
        return lStack_48;
      }
      lVar4 = param_1 + (ulong)uVar2;
      FUN_00686df4();
    }
    lStack_48 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 006938c0; end: 006938ff;  */

void FUN_006938c0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined4 unaff_w20;
  long unaff_x21;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00699010();
  }
  func_0x006a5794();
  lVar1 = *(long *)(unaff_x21 + 8);
  *(undefined4 *)(lVar1 + -0x10) = unaff_w20;
  *(undefined4 *)(lVar1 + -0xc) = 0;
  *(long *)(lVar1 + -8) = (long)param_3;
  return;
}



/* Entry: 00693900; end: 00693953;  */

void FUN_00693900(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*puVar1 & 1) == 0) {
    func_0x00699010();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  FUN_006a4c8c(puVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00779b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_009989c8)();
  return;
}



/* Entry: 00693954; end: 00694f93;  */

byte * FUN_00693954(byte *param_1,long param_2,byte *param_3,undefined8 *param_4,long param_5)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong *puVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  char cVar15;
  ushort uVar16;
  undefined4 uVar17;
  uint uVar18;
  int extraout_w8;
  int extraout_w8_00;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined4 *puVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  byte bVar23;
  uint uVar24;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint extraout_w9_04;
  uint extraout_w9_05;
  uint extraout_w9_06;
  uint extraout_w9_07;
  uint extraout_w9_08;
  uint extraout_w9_09;
  uint extraout_w9_10;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  byte *pbVar31;
  ulong *puVar32;
  long lVar33;
  ulong uVar34;
  ushort uVar35;
  byte *pbVar36;
  long lVar37;
  uint uVar38;
  byte *pbVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  long lStack_4f0;
  long lStack_4b0;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  long alStack_490 [2];
  undefined8 uStack_480;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined1 auStack_46e [6];
  long alStack_468 [125];
  undefined8 uStack_80;
  
  uVar20 = uStack_480;
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  pbVar31 = param_1 + 8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  pbVar31[0] = 0;
  pbVar31[1] = 0;
  pbVar31[2] = 0;
  pbVar31[3] = 0;
  pbVar31[4] = 0;
  pbVar31[5] = 0;
  pbVar31[6] = 0;
  pbVar31[7] = 0;
  pbVar39 = param_1 + 0x38;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  pbVar39[0] = 0;
  pbVar39[1] = 0;
  pbVar39[2] = 0;
  pbVar39[3] = 0;
  pbVar39[4] = 0;
  pbVar39[5] = 0;
  pbVar39[6] = 0;
  pbVar39[7] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  lVar19 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar19 + 0x53) & 1) == 0) {
    if (param_3[1] == 1) {
      uVar24 = *(uint *)(param_2 + 4);
      uVar27 = (ulong)(uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU));
      lVar21 = 0x38;
      uVar25 = 0xffffffffffffffff;
      do {
        uVar34 = uVar27;
        if (uVar25 - uVar27 == -1) break;
        plVar14 = (long *)(*(long *)(param_2 + 0x38) + lVar21);
        lVar21 = lVar21 + 0x58;
        uVar34 = uVar25 + 1;
        uVar25 = uVar34;
      } while (*(char *)(*plVar14 + 0x8c) != '\x01');
      if ((long)(int)uVar24 <= (long)uVar34) {
        bVar23 = *param_3 | 0x72;
        goto LAB_00693a44;
      }
    }
    bVar23 = 0x74;
  }
  else {
    bVar23 = 0x75;
  }
LAB_00693a44:
  *param_1 = bVar23;
  if (*(char *)(lVar19 + 0x50) != '\x01') {
    lVar21 = param_5 << 5;
    lVar19 = lVar21;
    puVar13 = param_4;
    do {
      lVar29 = lVar21;
      puVar26 = param_4;
      pbVar11 = param_1;
      if (lVar19 == 0) goto LAB_00693b44;
      pcVar1 = (char *)((long)puVar13 + 0x12);
      puVar13 = puVar13 + 4;
      lVar19 = lVar19 + -0x20;
    } while (*pcVar1 != '\x01');
    pbVar11 = pbVar39;
    FUN_006956b4(pbVar39,1);
    puVar22 = *(undefined4 **)pbVar39;
    *puVar22 = 1;
    *(undefined8 *)(puVar22 + 2) = 0;
LAB_00693b44:
    do {
      if (lVar29 == 0) goto LAB_00693b88;
      pcVar1 = (char *)((long)puVar26 + 0x15);
      lVar29 = lVar29 + -0x20;
      puVar26 = puVar26 + 4;
    } while (*pcVar1 != '\x01');
    pbVar11 = pbVar39;
    FUN_006956b4(pbVar39,3);
    lVar19 = *(long *)pbVar39;
    *(undefined4 *)(lVar19 + 0x10) = 2;
    *(undefined8 *)(lVar19 + 0x18) = 0;
    lVar19 = *(long *)pbVar39;
    *(undefined4 *)(lVar19 + 0x20) = 3;
    *(undefined8 *)(lVar19 + 0x28) = 0;
LAB_00693b88:
    if (param_3[2] == 1) {
      lVar19 = 0;
      puVar13 = param_4;
      for (lVar29 = lVar21; lVar29 != 0; lVar29 = lVar29 + -0x20) {
        pbVar36 = (byte *)*puVar13;
        func_0x00695e78();
        if (((((int)pbVar11 == 0xb) || (func_0x00695e78(), (int)pbVar11 == 10)) &&
            (pbVar11 = pbVar36, func_0x006595dc(), ((ulong)pbVar11 & 1) == 0)) &&
           ((((*(byte *)(*(long *)(pbVar36 + 0x38) + 0x8c) & 1) == 0 &&
             (FUN_006957a0(pbVar36,puVar13), pbVar11 = pbVar36,
             (((uint)pbVar36 | (uint)*(byte *)((long)puVar13 + 0x13)) & 1) == 0)) &&
            (((*(byte *)((long)puVar13 + 0x14) & 1) != 0 &&
             (0.005 <= *(float *)((long)puVar13 + 0xc))))))) {
          lVar19 = lVar19 + 1;
        }
        puVar13 = puVar13 + 4;
      }
    }
    else {
      lVar19 = 0;
    }
    lVar29 = *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 4;
    FUN_006956b4(pbVar39,lVar19 + lVar29);
    lVar30 = 0;
    lStack_4f0 = lVar29;
LAB_00693cc8:
    if (lVar21 == lVar30) goto LAB_00694430;
    uVar20 = *(ulong *)((long)param_4 + lVar30);
    uVar17 = (undefined4)((ulong *)((long)param_4 + lVar30))[1];
    puVar10 = *(ulong **)(param_1 + 0x28);
    if (puVar10 < *(ulong **)(param_1 + 0x30)) {
      *puVar10 = uVar20;
      *(undefined4 *)(puVar10 + 1) = uVar17;
      *(undefined8 *)((long)puVar10 + 0xc) = 0;
      puVar32 = puVar10 + 3;
      *(undefined1 *)((long)puVar10 + 0x14) = 0;
    }
    else {
      lVar33 = *(long *)(param_1 + 0x20);
      lVar37 = (long)puVar10 - lVar33;
      uVar25 = lVar37 / 0x18 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar25) {
        FUN_00695c60();
        goto LAB_00694e84;
      }
      uVar34 = ((long)*(ulong **)(param_1 + 0x30) - lVar33) / 0x18;
      uVar27 = uVar34 * 2;
      if (uVar27 < uVar25 || uVar27 - uVar25 == 0) {
        uVar27 = uVar25;
      }
      if (0x555555555555554 < uVar34) {
        uVar27 = 0xaaaaaaaaaaaaaaa;
      }
      if (0xaaaaaaaaaaaaaaa < uVar27) goto LAB_00694e2c;
      lVar12 = uVar27 * 0x18;
      __Znwm();
      puVar10 = (ulong *)(lVar12 + lVar37);
      *puVar10 = uVar20;
      *(undefined4 *)(puVar10 + 1) = uVar17;
      *(undefined8 *)((long)puVar10 + 0xc) = 0;
      *(undefined1 *)((long)puVar10 + 0x14) = 0;
      puVar32 = puVar10 + 3;
      _memcpy(puVar10 + (lVar37 / -0x18) * 3,lVar33,lVar37);
      *(ulong **)(param_1 + 0x20) = puVar10 + (lVar37 / -0x18) * 3;
      *(ulong **)(param_1 + 0x28) = puVar32;
      *(ulong *)(param_1 + 0x30) = lVar12 + uVar27 * 0x18;
      if (lVar33 != 0) {
        __ZdlPv(lVar33);
      }
    }
    *(ulong **)(param_1 + 0x28) = puVar32;
    uVar25 = uVar20;
    func_0x006657bc(uVar20,*param_3);
    *(char *)((long)puVar32 + -4) = (char)uVar25;
    uVar27 = uVar25;
    if ((int)puVar32[-2] < 0) {
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) == 0) {
        uVar27 = uVar20;
        FUN_00659454();
        uVar35 = 0;
        if (uVar27 != 0) {
          uVar35 = 0x30;
        }
      }
      else {
        uVar35 = 0x20;
      }
    }
    else {
      uVar35 = 0x10;
    }
    iVar7 = (int)uVar27;
    func_0x00695e14();
    switch(iVar7) {
    case 1:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) == 0) {
        uVar16 = 0x18c3;
      }
      else {
        func_0x00695e04();
        bVar6 = iVar7 == 0;
        uVar16 = 0x18c3;
code_r0x0069411c:
        if (!bVar6) {
          uVar16 = uVar16 + 1;
        }
      }
      break;
    case 2:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00695e04();
        bVar6 = iVar7 == 0;
        uVar16 = 0x1883;
        goto code_r0x0069411c;
      }
      uVar16 = 0x1883;
      break;
    case 3:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00695e04();
        bVar6 = iVar7 == 0;
        uVar16 = 0x10c1;
        goto code_r0x0069411c;
      }
      uVar16 = 0x10c1;
      break;
    case 4:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00695e04();
        bVar6 = iVar7 == 0;
        uVar16 = 0x8c1;
        goto code_r0x0069411c;
      }
      uVar16 = 0x8c1;
      break;
    case 5:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00695e04();
        bVar6 = iVar7 == 0;
        uVar16 = 0x1081;
        goto code_r0x0069411c;
      }
      uVar16 = 0x1081;
      break;
    case 6:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00695e04();
        bVar6 = iVar7 == 0;
        uVar16 = 0x8c3;
        goto code_r0x0069411c;
      }
      uVar16 = 0x8c3;
      break;
    case 7:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00695e04();
        bVar6 = iVar7 == 0;
        uVar16 = 0x883;
        goto code_r0x0069411c;
      }
      uVar16 = 0x883;
      break;
    case 8:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00695e04();
        bVar6 = iVar7 == 0;
        uVar16 = 1;
        goto code_r0x0069411c;
      }
      uVar16 = 1;
      break;
    case 9:
      if ((int)uVar25 == 2) goto code_r0x00693eac;
      if ((int)uVar25 == 1) {
        uVar16 = 0xa05;
      }
      else {
        uVar16 = 0xc05;
      }
      goto code_r0x00694428;
    case 10:
      func_0x00695e1c();
      if (*(char *)(extraout_x8 + 0x13) == '\x01') {
        uVar16 = 0x646;
      }
      else if (*(char *)(extraout_x8 + 0x14) == '\x01') {
        uVar16 = 0x446;
      }
      else {
        uVar16 = 0x246;
      }
      goto code_r0x00694428;
    case 0xb:
      uVar25 = uVar20;
      func_0x006595dc();
      iVar7 = (int)uVar25;
      if (iVar7 != 0) {
        uVar35 = uVar35 | 7;
        goto LAB_00694124;
      }
      uVar25 = uVar20;
      func_0x00695e5c();
      iVar7 = (int)uVar25;
      if (iVar7 == 0) {
        func_0x00695e1c();
        if (*(char *)(extraout_x8_01 + 0x13) == '\x01') {
          uVar16 = 0x606;
        }
        else if (*(char *)(extraout_x8_01 + 0x14) == '\x01') {
          uVar16 = 0x406;
        }
        else {
          uVar16 = 0x206;
        }
        goto code_r0x00694428;
      }
      func_0x00695e1c();
      uVar16 = *(ushort *)(extraout_x8_00 + 0x10);
      if ((uVar16 != 0x200) && (uVar16 != 0x400)) {
        func_0x00695e3c();
        FUN_00776794(&uStack_480);
        goto LAB_00694df4;
      }
      uVar35 = uVar35 | uVar16 | 0x86;
      goto LAB_00694124;
    case 0xc:
code_r0x00693eac:
      uVar16 = 0x805;
code_r0x00694428:
      uVar35 = uVar35 | uVar16;
      goto LAB_00694124;
    case 0xd:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00695e04();
        bVar6 = iVar7 == 0;
        uVar16 = 0x881;
        goto code_r0x0069411c;
      }
      uVar16 = 0x881;
      break;
    case 0xe:
      uVar25 = uVar20;
      func_0x006957e8();
      iVar7 = (int)uVar25;
      if (iVar7 == 0) {
        uVar25 = uVar20;
        func_0x006579b0();
        iVar7 = (int)uVar25;
        FUN_00695858();
        if (iVar7 == 0) {
          if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
            func_0x00695e04();
            bVar6 = iVar7 == 0;
            uVar16 = 0x1c81;
            goto code_r0x0069411c;
          }
          uVar16 = 0x1c81;
        }
        else {
          if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
            func_0x00695e04();
            bVar6 = iVar7 == 0;
            uVar16 = 0x1e81;
            goto code_r0x0069411c;
          }
          uVar16 = 0x1e81;
        }
      }
      else {
        if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
          func_0x00695e04();
          bVar6 = iVar7 == 0;
          uVar16 = 0x1881;
          goto code_r0x0069411c;
        }
        uVar16 = 0x1881;
      }
      break;
    case 0xf:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00695e04();
        bVar6 = iVar7 == 0;
        uVar16 = 0x1083;
        goto code_r0x0069411c;
      }
      uVar16 = 0x1083;
      break;
    case 0x10:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00695e04();
        bVar6 = iVar7 == 0;
        uVar16 = 0x10c3;
        goto code_r0x0069411c;
      }
      uVar16 = 0x10c3;
      break;
    case 0x11:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00695e04();
        bVar6 = iVar7 == 0;
        uVar16 = 0x1281;
        goto code_r0x0069411c;
      }
      uVar16 = 0x1281;
      break;
    case 0x12:
      if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
        func_0x00695e04();
        bVar6 = iVar7 == 0;
        uVar16 = 0x12c1;
        goto code_r0x0069411c;
      }
      uVar16 = 0x12c1;
      break;
    default:
      goto LAB_00694124;
    }
    uVar35 = uVar16 | uVar35;
LAB_00694124:
    func_0x00695e14();
    if ((iVar7 == 0xc) || (func_0x00695e14(), iVar7 == 9)) {
      uVar25 = uVar20;
      FUN_00689b10();
      iVar7 = (int)uVar25;
      if (iVar7 == 1) {
        uVar35 = uVar35 | 0x80;
      }
      else {
        uVar35 = (*(byte *)(uVar20 + 1) & 0x20) << 3 | uVar35;
      }
    }
    func_0x00695e1c();
    *(ushort *)((long)puVar32 + -6) = uVar35 | (*(byte *)(extraout_x8_02 + 0x15) & 1) << 3;
    func_0x00695e14();
    if ((iVar7 == 0xb) || (func_0x00695e14(), iVar7 == 10)) {
      uVar25 = uVar20;
      func_0x006595dc();
      if ((int)uVar25 == 0) {
        if (*(char *)(*(long *)(uVar20 + 0x38) + 0x8c) == '\x01') {
          *(undefined2 *)((long)puVar32 + -6) = 0;
        }
        else {
          uVar25 = uVar20;
          func_0x00695e5c();
          if ((int)uVar25 == 0) {
            func_0x00695e1c();
            if ((*(byte *)(extraout_x8_06 + 0x13) & 1) == 0) {
              uVar17 = 4;
              if (*(byte *)(extraout_x8_06 + 0x14) != 0) {
                uVar17 = 5;
              }
              if ((*(byte *)(extraout_x8_06 + 0x14) & param_3[2]) != 0) {
                func_0x00695e1c(uVar17);
                if (0.005 <= *(float *)(extraout_x8_07 + 0xc)) {
                  puVar22 = (undefined4 *)(*(long *)pbVar39 + lStack_4f0 * 0x10);
                  *puVar22 = 5;
                  *(ulong *)(puVar22 + 2) = uVar20;
                  *(short *)(puVar32 + -1) = (short)lStack_4f0;
                  lStack_4f0 = lStack_4f0 + 1;
                  goto LAB_0069441c;
                }
                uVar17 = 5;
              }
            }
            else {
              uVar17 = 6;
            }
            *(short *)(puVar32 + -1) =
                 (short)((uint)(*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38)) >> 4);
            func_0x00695ee8(uVar17);
            func_0x00695dc8();
          }
          else if (param_3[1] == 1) {
            func_0x00695dd4();
            func_0x00695ee8(4);
            func_0x00695dc8();
            func_0x00695e1c();
            if (*(short *)(extraout_x8_05 + 0x10) == 0x200) {
              func_0x00695ee8(7);
              func_0x00695dc8();
            }
            else {
              uStack_480 = uStack_480 & 0xffffffff00000000;
              uStack_478 = 0;
              func_0x00695dc8();
            }
          }
          else {
            *(undefined2 *)(puVar32 + -1) = 0xffff;
          }
        }
      }
      else {
        func_0x00695dd4();
        func_0x00695ee8(0xc);
        func_0x00695dc8();
        if (param_3[1] == 1) {
          FUN_00656024();
          if (*(char *)(*(long *)(uVar20 + 0x20) + 0x53) == '\x01') {
            uVar20 = *(long *)(uVar20 + 0x38) + 0x58;
          }
          else {
            uVar20 = 0;
          }
          uVar25 = uVar20;
          FUN_00656024();
          if (uVar25 == 0) {
            func_0x00695ee0();
            if (((int)uVar25 == 0xe) && (uVar25 = uVar20, func_0x0066573c(), (uVar25 & 1) == 0)) {
              uStack_480 = CONCAT44(uStack_480._4_4_,10);
              uStack_478 = uVar20;
              func_0x00695dc8();
            }
          }
          else {
            uStack_480 = CONCAT44(uStack_480._4_4_,0xd);
            uStack_478 = 0;
            func_0x00695dc8();
            *(ulong *)(*(long *)(param_1 + 0x40) + -8) = uVar25;
          }
        }
      }
    }
    else {
      func_0x00695e14();
      if (iVar7 == 0xe) {
        uVar25 = uVar20;
        func_0x006957e8();
        iVar7 = (int)uVar25;
        if ((uVar25 & 1) == 0) {
          func_0x00695dd4();
          uStack_480 = uStack_480 & 0xffffffff00000000;
          uStack_478 = 0;
          func_0x00695dc8();
          lVar33 = *(long *)(param_1 + 0x40);
          uVar25 = uVar20;
          func_0x006579b0();
          iVar7 = (int)uVar25;
          FUN_00695858();
          if (iVar7 == 0) {
            *(undefined4 *)(lVar33 + -0x10) = 10;
            *(ulong *)(lVar33 + -8) = uVar20;
          }
          else {
            *(undefined4 *)(lVar33 + -0x10) = 9;
          }
          goto LAB_0069441c;
        }
      }
      func_0x00695e14();
      if (((iVar7 == 9) || (func_0x00695e14(), iVar7 == 0xc)) &&
         (func_0x00695e1c(), *(char *)(extraout_x8_03 + 0x12) == '\x01')) {
        if ((*(byte *)(uVar20 + 1) >> 5 & 1) != 0) {
          func_0x00695e28();
          func_0x00695ecc(&uStack_480);
          goto LAB_00694df4;
        }
        func_0x00695e1c();
        uVar17 = *(undefined4 *)(extraout_x8_04 + 0x18);
        func_0x00695dd4();
        uStack_480 = CONCAT44(uStack_480._4_4_,0xb);
        uStack_478 = 0;
        func_0x00695dc8();
        *(undefined4 *)(*(long *)(param_1 + 0x40) + -8) = uVar17;
        *(undefined4 *)((long)puVar32 + -0xc) = uVar17;
      }
    }
LAB_0069441c:
    lVar30 = lVar30 + 0x20;
    goto LAB_00693cc8;
  }
  uVar5 = param_3[1] == 1;
  if ((bool)uVar5) {
    uStack_480 = CONCAT71(uStack_480._1_7_,'p' - *param_3);
    lVar19 = uStack_480;
    uStack_480._6_2_ = SUB82(uVar20,6);
    uStack_480._0_6_ = (uint6)(ushort)lVar19;
    alStack_468[0] = CONCAT44(alStack_468[0]._4_4_,2);
    lVar19 = param_2;
    func_0x00695e80();
    uStack_480 = CONCAT44(uStack_480._4_4_,8);
    uStack_478 = 0;
    uVar20 = *(ulong *)(param_1 + 0x48);
    puVar10 = *(ulong **)(param_1 + 0x38);
    if (uVar20 - (long)puVar10 < 0x10) {
      if (puVar10 != (ulong *)0x0) {
        *(ulong **)(param_1 + 0x40) = puVar10;
        __ZdlPv();
        uVar20 = 0;
        pbVar39[0] = 0;
        pbVar39[1] = 0;
        pbVar39[2] = 0;
        pbVar39[3] = 0;
        pbVar39[4] = 0;
        pbVar39[5] = 0;
        pbVar39[6] = 0;
        pbVar39[7] = 0;
        param_1[0x40] = 0;
        param_1[0x41] = 0;
        param_1[0x42] = 0;
        param_1[0x43] = 0;
        param_1[0x44] = 0;
        param_1[0x45] = 0;
        param_1[0x46] = 0;
        param_1[0x47] = 0;
        param_1[0x48] = 0;
        param_1[0x49] = 0;
        param_1[0x4a] = 0;
        param_1[0x4b] = 0;
        param_1[0x4c] = 0;
        param_1[0x4d] = 0;
        param_1[0x4e] = 0;
        param_1[0x4f] = 0;
      }
      uVar25 = (long)uVar20 >> 3;
      if (uVar25 < 2) {
        uVar25 = 1;
      }
      uVar5 = uVar20 == 0x7ffffffffffffff0;
      if (0x7fffffffffffffef < uVar20) {
        uVar25 = 0xfffffffffffffff;
      }
      if (uVar25 >> 0x3c != 0) {
        func_0x00695b18();
        goto LAB_00694e84;
      }
      FUN_00695b24();
      *(ulong *)(param_1 + 0x38) = uVar25;
      *(ulong *)(param_1 + 0x40) = uVar25;
      *(ulong *)(param_1 + 0x48) = uVar25 + lVar19 * 0x10;
      func_0x00695eb8();
    }
    else {
      uVar20 = (long)*(ulong **)(param_1 + 0x40) - (long)puVar10;
      uVar5 = uVar20 == 0xf;
      if (uVar20 < 0x10) {
        uVar5 = *(ulong **)(param_1 + 0x40) == puVar10;
        if (!(bool)uVar5) {
          func_0x00695ec4(puVar10,&uStack_480);
        }
        func_0x00695eb8();
      }
      else {
        puVar10[1] = 0;
        *puVar10 = uStack_480;
        *(ulong **)(param_1 + 0x40) = puVar10 + 2;
      }
    }
  }
  else {
    uStack_478 = 0;
    uStack_480 = 0x71;
    alStack_468[0] = 2;
    uStack_470 = 0;
    func_0x00695e80();
  }
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  FUN_00695068(&uStack_480,param_4,param_5);
  FUN_0069542c(param_1 + 0x50,&uStack_480);
  func_0x006912b8(&uStack_478);
  func_0x00695f08();
  FUN_00695498(&uStack_480,param_2);
  FUN_004b8084(param_1 + 0x70,&uStack_480);
  plVar14 = &uStack_480;
LAB_00694d98:
  FUN_0040d974(plVar14);
  func_0x00695f1c(uStack_80);
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_00694e40:
  func_0x00695e3c();
  FUN_00776794(&uStack_480);
LAB_00694df4:
  FUN_005558a0(&uStack_480);
LAB_00694dfc:
  func_0x00695e28();
  func_0x00695ecc(&lStack_4b0);
  goto LAB_00694e0c;
LAB_00694430:
  uStack_480 = lStack_4f0 - lVar29;
  puVar13 = &uStack_480;
  lStack_4b0 = lVar19;
  func_0x0054a748(puVar13,&lStack_4b0,&UNK_009146bc);
  if (puVar13 != (undefined8 *)0x0) goto LAB_00694e40;
  lVar19 = *(long *)(param_2 + 0x18);
  if (lVar19 != 0) {
    lVar29 = 4;
    lVar30 = 0;
    for (lVar21 = 0; lVar21 < *(int *)(lVar19 + 4); lVar21 = lVar21 + 1) {
      lVar37 = *(long *)(lVar19 + 0x38);
      lVar33 = lVar37 + lVar29 + -4;
      func_0x00695ee0();
      if (((int)lVar30 == 10) && (FUN_00656024(), lVar30 = lVar33, lVar33 == param_2)) {
        uVar38 = *(uint *)(lVar37 + lVar29);
        uVar24 = (uVar38 & 0x1fffffe0) << 3;
        uVar38 = (uVar38 & 0x1f) << 3 | 4;
        iVar7 = 1;
        goto LAB_00694518;
      }
      lVar29 = lVar29 + 0x58;
    }
  }
  uVar38 = 0;
  iVar7 = 0;
  uVar24 = 0;
LAB_00694518:
  lVar19 = 0x18;
  do {
    *(undefined4 *)((long)&uStack_480 + lVar19) = 0;
    lVar19 = lVar19 + 0x20;
  } while (lVar19 != 0x418);
  if (iVar7 == 0) {
    uVar20 = 1L << ((ulong)(uint)-(int)LZCOUNT(param_5) & 0x3f);
    if (0x1f < uVar20) {
      uVar20 = 0x20;
    }
  }
  else {
    uVar20 = 0x20;
  }
  uVar28 = (int)uVar20 - 1;
  if ((CONCAT44(iVar7,uVar24) & 0xffffffffffffc000) == 0x100000000) {
    uVar24 = uVar24 | uVar38;
    uVar38 = uVar24;
    if ((uVar24 & 0x3f80) != 0) {
      uVar38 = uVar24 + (uVar24 & 0x3f80) + 0x80;
    }
    uVar8 = uVar28 & uVar38 >> 3;
    uVar25 = (ulong)uVar8;
    uVar5 = 0x6d;
    if (0x7f < uVar24) {
      uVar5 = 0x6e;
    }
    *(undefined4 *)(alStack_468 + uVar25 * 4) = 2;
    *(undefined1 *)(&uStack_480 + uVar25 * 4) = uVar5;
    *(short *)((long)&uStack_480 + uVar25 * 0x20 + 2) = (short)uVar38;
    *(short *)((long)&uStack_480 + uVar25 * 0x20 + 4) = (short)uVar24;
    uVar24 = 1 << (ulong)(uVar8 & 0x1f);
  }
  else {
    uVar24 = 0;
  }
  lVar19 = 0x14;
  puVar13 = param_4;
  for (uVar25 = 0; lVar21 = *(long *)(param_1 + 0x20),
      uVar25 < (ulong)((*(long *)(param_1 + 0x28) - lVar21) / 0x18); uVar25 = uVar25 + 1) {
    lVar29 = lVar21 + lVar19;
    uVar34 = *(ulong *)(lVar29 + -0x14);
    uVar27 = uVar34;
    func_0x006595dc();
    if (((((uVar27 & 1) != 0) || (uVar27 = uVar34, FUN_00659454(), uVar27 != 0)) ||
        ((*(byte *)(*(long *)(uVar34 + 0x38) + 0x8c) & 1) != 0)) ||
       ((((*(byte *)((long)puVar13 + 0x13) & 1) != 0 || ((*(byte *)((long)puVar13 + 0x15) & 1) != 0)
         ) || ((uVar27 = uVar34, func_0x00695e5c(), (int)uVar27 != 0 && ((param_3[1] & 1) == 0))))))
    goto LAB_00694618;
    uVar27 = uVar34;
    func_0x00695e5c();
    uVar8 = (uint)uVar27;
    uVar38 = 0;
    if (*(short *)(puVar13 + 2) == 0x400) {
      uVar38 = uVar8;
    }
    if ((uVar38 & 1) != 0) goto LAB_00694618;
    uVar38 = (uint)*(ushort *)(lVar21 + lVar19 + -4);
    func_0x00695ee0();
    if (uVar8 == 9) {
LAB_006946a0:
      iVar7 = *(int *)(*(long *)(uVar34 + 0x38) + 0x80);
      if ((iVar7 != 0) && ((iVar7 != 1 || ((*(byte *)(uVar34 + 1) >> 5 & 1) != 0))))
      goto LAB_00694618;
      bVar6 = true;
      func_0x00695eac();
      if (bVar6) {
        if ((*(byte *)(uVar34 + 1) >> 5 & 1) != 0) goto LAB_00694dfc;
        uVar38 = *(uint *)(lVar21 + lVar19 + -8);
      }
    }
    else if (uVar8 == 0xe) {
      if (((param_3[1] & 1) == 0) &&
         (uVar27 = uVar34, func_0x00695d4c(uVar34,&lStack_4b0), (int)uVar27 == 0))
      goto LAB_00694618;
    }
    else if (uVar8 == 0xc) goto LAB_006946a0;
    if (((0x1f < *(int *)(lVar21 + lVar19 + -0xc)) || (0xff < (int)uVar38)) ||
       (0x7ff < *(int *)(uVar34 + 4))) goto LAB_00694618;
    uVar34 = *(ulong *)(lVar29 + -0x14);
    iVar7 = *(int *)(uVar34 + 4);
    uVar27 = uVar34;
    FUN_00659660();
    iVar9 = (int)uVar27;
    if ((uVar27 & 1) == 0) {
      uVar27 = uVar34;
      FUN_006538b4();
      iVar9 = (int)uVar27;
      uVar38 = *(uint *)(&UNK_00810e8c + (uVar27 & 0xffffffff) * 4);
    }
    else {
      uVar38 = 2;
    }
    uVar38 = uVar38 | iVar7 << 3;
    if ((uVar38 & 0xffffff80) != 0) {
      uVar38 = uVar38 + (uVar38 & 0xffffff80) + 0x80;
    }
    uVar8 = uVar28 & uVar38 >> 3;
    uVar27 = (ulong)uVar8;
    if (((int)alStack_468[uVar27 * 4] == 2) ||
       (((int)alStack_468[uVar27 * 4] == 1 &&
        (*(float *)((long)puVar13 + 0xc) <= *(float *)((long)alStack_468 + (uVar27 * 8 + -1) * 4))))
       ) goto LAB_00694618;
    uStack_4a8 = 0;
    lStack_4b0 = 0;
    pbVar39 = *(byte **)(lVar29 + -0x14);
    uStack_4a0 = (ulong)*(byte *)(lVar21 + lVar19 + -4) << 0x18;
    func_0x00695e78();
    bVar6 = iVar9 == 0xc;
    if (bVar6) {
      func_0x00695eac();
      if (bVar6) {
LAB_006947e0:
        if ((pbVar39[1] >> 5 & 1) != 0) goto LAB_00694e14;
        uStack_4a0._0_4_ =
             CONCAT13((char)*(undefined4 *)(lVar21 + lVar19 + -8),(undefined3)uStack_4a0);
      }
    }
    else {
      func_0x00695e78();
      if ((iVar9 == 9) && ((*(byte *)((long)puVar13 + 0x12) & 1) != 0)) goto LAB_006947e0;
    }
    func_0x00695e78();
    iVar7 = iVar9 + -1;
    cVar3 = SBORROW4(iVar7,0x11);
    cVar4 = iVar9 + -0x12 < 0;
    uVar5 = iVar7 == 0x11;
    switch(iVar7) {
    case 0:
    case 5:
    case 0xf:
      func_0x00695e0c();
      if (iVar9 == 0) {
        func_0x00695db8();
        if ((extraout_w9 >> 5 & 1) == 0) {
          cVar15 = '%';
        }
        else {
          cVar15 = '\'';
        }
      }
      else {
        func_0x00695df8();
        cVar15 = ')';
      }
      break;
    case 1:
    case 6:
    case 0xe:
      func_0x00695e0c();
      if (iVar9 == 0) {
        func_0x00695db8();
        if ((extraout_w9_00 >> 5 & 1) == 0) {
          cVar15 = '\x1f';
        }
        else {
          cVar15 = '!';
        }
      }
      else {
        func_0x00695df8();
        cVar15 = '#';
      }
      break;
    case 2:
    case 3:
      func_0x00695e0c();
      if (iVar9 == 0) {
        func_0x00695db8();
        if ((extraout_w9_03 >> 5 & 1) == 0) {
          cVar15 = '\r';
        }
        else {
          cVar15 = '\x0f';
        }
      }
      else {
        func_0x00695df8();
        cVar15 = '\x11';
      }
      break;
    case 4:
    case 0xc:
      func_0x00695e0c();
      goto code_r0x00694848;
    case 7:
      func_0x00695e0c();
      if (iVar9 == 0) {
        func_0x00695db8();
        if ((extraout_w9_07 >> 5 & 1) == 0) {
          cVar15 = '\x01';
        }
        else {
          cVar15 = '\x03';
        }
      }
      else {
        func_0x00695df8();
        cVar15 = '\x05';
      }
      break;
    case 8:
      uVar18 = (uint)*(byte *)(lVar21 + lVar19);
      cVar3 = SBORROW4(uVar18,2);
      cVar4 = (int)(uVar18 - 2) < 0;
      uVar5 = true;
      if (uVar18 == 2) goto code_r0x006948f4;
      uVar18 = (uint)*(byte *)(lVar21 + lVar19);
      cVar3 = SBORROW4(uVar18,1);
      cVar4 = (int)(uVar18 - 1) < 0;
      bVar6 = uVar18 == 1;
      if (bVar6) {
        func_0x00695e90();
        if (bVar6) {
          func_0x00695df8();
          cVar15 = 'W';
        }
        else {
          func_0x00695eac();
          if (bVar6) {
            func_0x00695df8();
            cVar15 = 'Q';
          }
          else {
            func_0x00695db8();
            if ((extraout_w9_09 >> 5 & 1) == 0) {
              cVar15 = 'G';
            }
            else {
              cVar15 = 'I';
            }
          }
        }
      }
      else {
        if (uVar18 != 0) goto LAB_00694ea8;
        func_0x00695e90();
        if (bVar6) {
          func_0x00695df8();
          cVar15 = 'Y';
        }
        else {
          func_0x00695eac();
          if (bVar6) {
            func_0x00695df8();
            cVar15 = 'S';
          }
          else {
            func_0x00695db8();
            if ((extraout_w9_10 >> 5 & 1) == 0) {
              cVar15 = 'K';
            }
            else {
              cVar15 = 'M';
            }
          }
        }
      }
      break;
    case 9:
      func_0x00695ef4();
      if ((bool)uVar5) {
        cVar3 = SBORROW4(extraout_w8,0x10);
        cVar4 = extraout_w8 + -0x10 < 0;
        if ((extraout_w9_02 >> 5 & 1) == 0) {
          cVar15 = '_';
        }
        else {
          cVar15 = 'a';
        }
      }
      else {
        cVar3 = SBORROW4(extraout_w8,0x10);
        cVar4 = extraout_w8 + -0x10 < 0;
        if ((extraout_w9_02 >> 5 & 1) == 0) {
          cVar15 = '[';
        }
        else {
          cVar15 = ']';
        }
      }
      break;
    case 10:
      func_0x00695e5c();
      if ((int)pbVar39 == 0) {
        func_0x00695ef4();
        if ((bool)uVar5) {
          cVar3 = SBORROW4(extraout_w8_00,0x10);
          cVar4 = extraout_w8_00 + -0x10 < 0;
          if ((extraout_w9_05 >> 5 & 1) == 0) {
            cVar15 = 'g';
          }
          else {
            cVar15 = 'i';
          }
        }
        else {
          cVar3 = SBORROW4(extraout_w8_00,0x10);
          cVar4 = extraout_w8_00 + -0x10 < 0;
          if ((extraout_w9_05 >> 5 & 1) == 0) {
            cVar15 = 'c';
          }
          else {
            cVar15 = 'e';
          }
        }
      }
      else {
        func_0x00695df8();
        cVar15 = 'k';
      }
      break;
    case 0xb:
code_r0x006948f4:
      func_0x00695e90();
      if ((bool)uVar5) {
        func_0x00695df8();
        cVar15 = 'U';
      }
      else {
        func_0x00695eac();
        if ((bool)uVar5) {
          func_0x00695df8();
          cVar15 = 'O';
        }
        else {
          func_0x00695db8();
          if ((extraout_w9_08 >> 5 & 1) == 0) {
            cVar15 = 'C';
          }
          else {
            cVar15 = 'E';
          }
        }
      }
      break;
    case 0xd:
      pbVar11 = pbVar39;
      func_0x006957e8();
      iVar9 = (int)pbVar11;
      if (iVar9 == 0) {
        func_0x00695d4c(pbVar39,(long)&uStack_4a0 + 3);
        pbVar31 = pbVar39;
        func_0x00695e0c();
                    /* WARNING: Could not recover jumptable at 0x00694a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_008276f4)[(ulong)pbVar39 & 0xffffffff] * 4 + 0x694a04))();
        return pbVar31;
      }
      func_0x00695e0c();
code_r0x00694848:
      if (iVar9 == 0) {
        func_0x00695db8();
        if ((extraout_w9_01 >> 5 & 1) == 0) {
          cVar15 = '\a';
        }
        else {
          cVar15 = '\t';
        }
      }
      else {
        func_0x00695df8();
        cVar15 = '\v';
      }
      break;
    case 0x10:
      func_0x00695e0c();
      if (iVar9 == 0) {
        func_0x00695db8();
        if ((extraout_w9_04 >> 5 & 1) == 0) {
          cVar15 = '\x13';
        }
        else {
          cVar15 = '\x15';
        }
      }
      else {
        func_0x00695df8();
        cVar15 = '\x17';
      }
      break;
    case 0x11:
      func_0x00695e0c();
      if (iVar9 == 0) {
        func_0x00695db8();
        if ((extraout_w9_06 >> 5 & 1) == 0) {
          cVar15 = '\x19';
        }
        else {
          cVar15 = '\x1b';
        }
      }
      else {
        func_0x00695df8();
        cVar15 = '\x1d';
      }
      break;
    default:
LAB_00694ea8:
      func_0x00695e3c();
      FUN_00776794(alStack_490);
      goto LAB_00694e24;
    }
    if (cVar4 == cVar3) {
      cVar15 = cVar15 + '\x01';
    }
    lStack_4b0 = CONCAT71(lStack_4b0._1_7_,cVar15);
    fVar40 = *(float *)((long)puVar13 + 0xc);
    uStack_4a0 = CONCAT44(fVar40,(undefined4)uStack_4a0);
    (&uStack_478)[uVar27 * 4] = uStack_4a8;
    (&uStack_480)[uVar27 * 4] = lStack_4b0;
    *(undefined4 *)(alStack_468 + uVar27 * 4) = 1;
    (&uStack_478)[uVar27 * 4] = uVar34;
    alStack_468[uVar27 * 4 + -1] = uStack_4a0;
    *(short *)(alStack_468 + uVar27 * 4 + -1) = (short)uVar38;
    uVar38 = *(uint *)(lVar21 + lVar19 + -0xc);
    if (0x7fffffff < uVar38) {
      uVar38 = 0x3f;
    }
    *(char *)((long)alStack_468 + uVar27 * 0x20 + -6) = (char)uVar38;
    uVar24 = (uint)(0.05 <= fVar40) << (ulong)(uVar8 & 0x1f) | uVar24;
LAB_00694618:
    lVar19 = lVar19 + 0x18;
    puVar13 = puVar13 + 4;
  }
  while (1 < uVar20) {
    uVar25 = uVar20 >> 1;
    uVar38 = uVar24 >> (ulong)((uint)uVar25 & 0x1f);
    if ((uVar38 & uVar24) != 0) break;
    uVar28 = 0;
    puVar13 = &uStack_480;
    for (lVar19 = 0; uVar25 * 0x20 - lVar19 != 0; lVar19 = lVar19 + 0x20) {
      if ((uVar24 >> (ulong)(uVar28 & 0x1f) & 1) == 0) {
        puVar26 = puVar13 + uVar25 * 4;
        uVar41 = *puVar26;
        uVar43 = puVar26[3];
        uVar42 = puVar26[2];
        puVar13[1] = puVar26[1];
        *puVar13 = uVar41;
        puVar13[3] = uVar43;
        puVar13[2] = uVar42;
      }
      uVar28 = uVar28 + 1;
      puVar13 = puVar13 + 4;
    }
    uVar24 = uVar38 | uVar24;
    uVar20 = uVar25;
  }
  uVar25 = uVar20 * 0x20;
  lVar19 = *(long *)(param_1 + 8);
  uVar5 = uVar25 - (*(long *)(param_1 + 0x18) - lVar19) == 0;
  if (uVar25 < (ulong)(*(long *)(param_1 + 0x18) - lVar19) || (bool)uVar5) {
    lVar21 = *(long *)(param_1 + 0x10);
    uVar27 = lVar21 - lVar19;
    lVar29 = uVar25 - uVar27;
    uVar5 = lVar29 == 0;
    if (uVar25 < uVar27 || (bool)uVar5) {
      if (uVar20 != 0) {
        func_0x00695ec4(lVar19,&uStack_480);
      }
      lVar21 = lVar19 + uVar25;
    }
    else {
      uVar5 = lVar21 == lVar19;
      if (!(bool)uVar5) {
        _memcpy(lVar19,&uStack_480,uVar27);
        lVar21 = *(long *)(param_1 + 0x10);
      }
      _memcpy(lVar21,(long)&uStack_480 + uVar27,lVar29);
      lVar21 = lVar21 + lVar29;
    }
  }
  else {
    FUN_006959fc(pbVar31);
    pbVar39 = pbVar31;
    FUN_00695a6c(pbVar31,uVar20);
    func_0x00695a30(pbVar31,pbVar39);
    lVar21 = *(long *)(param_1 + 0x10);
    func_0x00695ec4(lVar21,&uStack_480);
    lVar21 = lVar21 + uVar25;
  }
  *(long *)(param_1 + 0x10) = lVar21;
  *(int *)(param_1 + 0x88) = 0x3f - (int)LZCOUNT(uVar20);
  FUN_00695068(&lStack_4b0,param_4,param_5);
  FUN_0069542c(param_1 + 0x50,&lStack_4b0);
  func_0x006912b8(&uStack_4a8);
  lStack_4b0 = (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) / 0x18;
  plVar14 = &lStack_4b0;
  alStack_490[0] = param_5;
  func_0x0054a748(plVar14,alStack_490,&UNK_00914700);
  if (plVar14 == (long *)0x0) {
    func_0x00695f08();
    FUN_00695498(&lStack_4b0);
    FUN_004b8084(param_1 + 0x70,&lStack_4b0);
    plVar14 = &lStack_4b0;
    goto LAB_00694d98;
  }
  func_0x00695e3c();
  FUN_00776794(&lStack_4b0);
LAB_00694e0c:
  FUN_005558a0(&lStack_4b0);
LAB_00694e14:
  func_0x00695e28();
  func_0x00695ecc(alStack_490);
LAB_00694e24:
  FUN_005558a0(alStack_490);
LAB_00694e2c:
  FUN_0040cee8();
LAB_00694e84:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x694e88);
  (*pcVar2)();
}



/* Entry: 00694f94; end: 00695067;  */

void FUN_00694f94(long *param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00695ea0();
  uVar2 = param_3 * 0x20;
  lVar1 = *param_1;
  if (uVar2 < (ulong)(param_1[2] - lVar1) || uVar2 - (param_1[2] - lVar1) == 0) {
    uVar3 = *(long *)(unaff_x19 + 8) - lVar1;
    if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
      if (param_3 != 0) {
        _memmove(lVar1);
      }
      *(ulong *)(unaff_x19 + 8) = lVar1 + uVar2;
      return;
    }
    if (*(long *)(unaff_x19 + 8) != lVar1) {
      _memmove(lVar1);
    }
  }
  else {
    FUN_006959fc();
    FUN_00695a6c();
    func_0x00695a30();
  }
  FUN_006959dc();
  return;
}



/* Entry: 00695068; end: 0069542b;  */

void FUN_00695068(int *param_1,long param_2,ushort param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  code *pcVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  ushort uVar20;
  ulong uVar21;
  ulong uVar22;
  uint *puVar23;
  uint auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar20 = 0;
  piVar12 = param_1 + 2;
  piVar12[0] = 0;
  piVar12[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar11 = -1;
  while( true ) {
    if (uVar20 == param_3) {
      *param_1 = iVar11;
      return;
    }
    iVar2 = *(int *)(*(long *)(param_2 + (ulong)uVar20 * 0x20) + 4);
    if (0x20 < iVar2) break;
    iVar11 = (-1 << (ulong)(iVar2 - 1U & 0x1f)) + iVar11;
    uVar20 = uVar20 + 1;
  }
  puVar23 = (uint *)0x0;
  uVar13 = 0;
  puVar17 = (uint *)0x0;
  *param_1 = iVar11;
  bVar5 = true;
  do {
    if (uVar20 == param_3) {
      return;
    }
    uVar3 = *(uint *)(*(long *)(param_2 + (ulong)uVar20 * 0x20) + 4);
    if (uVar3 <= uVar13) {
      FUN_00554520(uVar3,uVar13,&UNK_0091472e);
      func_0x00695e3c();
      FUN_00776794(auStack_80);
      FUN_005558a0(auStack_80);
LAB_006953cc:
      func_0x00695b90();
      goto LAB_006953f0;
    }
    if (bVar5 || 0x60 < uVar3 - uVar13) {
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      auStack_80[0] = uVar3;
      if (puVar23 < *(uint **)(param_1 + 6)) {
        *puVar23 = uVar3;
        puVar23[4] = 0;
        puVar23[5] = 0;
        puVar23[6] = 0;
        puVar23[7] = 0;
        puVar23[2] = 0;
        puVar23[3] = 0;
        puVar23[4] = 0;
        puVar23[5] = 0;
        puVar23[2] = 0;
        puVar23[3] = 0;
        puVar23[6] = 0;
        puVar23[7] = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        puVar23 = puVar23 + 8;
      }
      else {
        puVar17 = *(uint **)piVar12;
        lVar18 = (long)puVar23 - (long)puVar17 >> 5;
        uVar22 = lVar18 + 1;
        if (uVar22 >> 0x3b != 0) {
          func_0x00695b84();
LAB_006953f0:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x6953f4);
          (*pcVar6)();
        }
        uVar9 = (long)*(uint **)(param_1 + 6) - (long)puVar17;
        uVar21 = (long)uVar9 >> 4;
        if (uVar21 <= uVar22) {
          uVar21 = uVar22;
        }
        if (0x7fffffffffffffdf < uVar9) {
          uVar21 = 0x7ffffffffffffff;
        }
        if (uVar21 == 0) {
          lVar19 = 0;
        }
        else {
          if (uVar21 >> 0x3b != 0) {
            FUN_0040cee8();
            goto LAB_006953f0;
          }
          lVar19 = uVar21 << 5;
          __Znwm();
        }
        puVar1 = (uint *)(lVar19 + ((long)puVar23 - (long)puVar17));
        *puVar1 = uVar3;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_78 = 0;
        puVar7 = puVar1 + lVar18 * -8;
        for (puVar15 = puVar17; puVar16 = puVar17, puVar15 != puVar23; puVar15 = puVar15 + 8) {
          FUN_00695b58(puVar7,puVar15);
          puVar7 = puVar7 + 8;
        }
        for (; puVar16 != puVar23; puVar16 = puVar16 + 8) {
          FUN_00691360(puVar16 + 2);
        }
        puVar23 = puVar1 + 8;
        *(uint **)(param_1 + 2) = puVar1 + lVar18 * -8;
        *(ulong *)(param_1 + 6) = lVar19 + uVar21 * 0x20;
        if (puVar17 != (uint *)0x0) {
          __ZdlPv(puVar17);
        }
      }
      *(uint **)(param_1 + 4) = puVar23;
      FUN_00691360(&uStack_78);
      puVar17 = puVar23 + -8;
    }
    uVar22 = (ulong)(uVar3 - *puVar17 >> 4);
    uVar13 = uVar3 - *puVar17 & 0xf;
    uVar4 = (uint)uVar20 << 0x10 | 0xffff;
    puVar15 = *(uint **)(puVar17 + 4);
    while( true ) {
      lVar18 = *(long *)(puVar17 + 2);
      lVar19 = (long)puVar15 - lVar18;
      uVar21 = lVar19 >> 2;
      if (uVar22 < uVar21) break;
      if (puVar15 < *(uint **)(puVar17 + 6)) {
        puVar7 = puVar15 + 1;
        *puVar15 = uVar4;
      }
      else {
        uVar9 = uVar21 + 1;
        if (uVar9 >> 0x3e != 0) goto LAB_006953cc;
        uVar10 = (long)*(uint **)(puVar17 + 6) - lVar18;
        uVar14 = (long)uVar10 >> 1;
        if (uVar14 <= uVar9) {
          uVar14 = uVar9;
        }
        if (0x7ffffffffffffffb < uVar10) {
          uVar14 = 0x3fffffffffffffff;
        }
        if (uVar14 >> 0x3e != 0) {
          FUN_0040cee8();
          goto LAB_006953f0;
        }
        lVar8 = uVar14 << 2;
        __Znwm();
        puVar15 = (uint *)(lVar8 + lVar19);
        puVar7 = puVar15 + 1;
        *puVar15 = uVar4;
        _memcpy(puVar15 + -uVar21,lVar18,lVar19);
        *(uint **)(puVar17 + 2) = puVar15 + -uVar21;
        *(uint **)(puVar17 + 4) = puVar7;
        *(ulong *)(puVar17 + 6) = lVar8 + uVar14 * 4;
        if (lVar18 != 0) {
          __ZdlPv(lVar18);
        }
      }
      *(uint **)(puVar17 + 4) = puVar7;
      puVar15 = puVar7;
    }
    bVar5 = false;
    lVar19 = uVar22 * 4;
    *(short *)(lVar18 + lVar19) = *(short *)(lVar18 + lVar19) + (short)(-1 << (ulong)uVar13);
    uVar13 = uVar3 - uVar13;
    uVar20 = uVar20 + 1;
  } while( true );
}



/* Entry: 0069542c; end: 00695497;  */

void FUN_0069542c(undefined4 *param_1,undefined4 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  long *plVar1;
  undefined8 uVar2;
  
  func_0x00695ea0();
  *param_1 = *param_2;
  plVar1 = (long *)(param_1 + 2);
  if (*plVar1 != 0) {
    FUN_00691318(plVar1);
    __ZdlPv(*plVar1);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 8) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 8) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Entry: 00695498; end: 006956b3;  */

void FUN_00695498(undefined8 *param_1,long param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  undefined1 uStack_61;
  long lStack_60;
  ulong uStack_58;
  
  lVar3 = 0;
  lVar9 = param_4 * 0x18;
  plVar1 = param_3;
  for (lVar4 = lVar9; lVar4 != 0; lVar4 = lVar4 + -0x18) {
    if (*(char *)((long)plVar1 + 0x14) != '\x02') {
      lVar6 = (long)*(char *)(*(long *)(*plVar1 + 8) + 0x17);
      if (lVar6 < 0) {
        lVar6 = *(long *)(*(long *)(*plVar1 + 8) + 8);
      }
      lVar3 = lVar6 + lVar3;
    }
    plVar1 = plVar1 + 3;
  }
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 8);
    uVar8 = (ulong)*(char *)(lVar4 + 0x2f);
    if ((long)uVar8 < 0) {
      lVar6 = *(long *)(lVar4 + 0x18);
      uVar8 = *(ulong *)(lVar4 + 0x20);
    }
    else {
      lVar6 = lVar4 + 0x18;
    }
    uVar11 = uVar8;
    if (0xfe < uVar8) {
      uVar11 = 0xff;
    }
    uStack_61 = 0;
    lStack_60 = lVar6;
    uStack_58 = uVar8;
    FUN_00652054(param_1,(param_4 & 0xfffffffffffffff8) + lVar3 + uVar11 + 8,&uStack_61);
    pcVar10 = (char *)*param_1;
    *pcVar10 = (char)uVar11;
    plVar1 = param_3;
    for (lVar3 = lVar9; pcVar10 = pcVar10 + 1, lVar3 != 0; lVar3 = lVar3 + -0x18) {
      if (*(char *)((long)plVar1 + 0x14) != '\x02') {
        cVar5 = *(char *)(*(long *)(*plVar1 + 8) + 0x17);
        if (cVar5 < '\0') {
          cVar5 = *(char *)(*(long *)(*plVar1 + 8) + 8);
        }
        *pcVar10 = cVar5;
      }
      plVar1 = plVar1 + 3;
    }
    uVar11 = (ulong)~(uint)param_4 & 7;
    pcVar7 = pcVar10 + uVar11;
    if (uVar8 < 0x100) {
      if (uVar8 != 0) {
        _memcpy(pcVar7,lVar6,uVar8);
        pcVar7 = pcVar10 + uVar8 + uVar11;
      }
    }
    else {
      lVar3 = 0;
      FUN_00485b24(&lStack_60,0,0x7e);
      if (lVar3 != 0) {
        func_0x00695e48();
        pcVar7 = pcVar10 + lVar3 + uVar11;
      }
      pcVar7[2] = '.';
      pcVar10 = pcVar7 + 3;
      pcVar7[0] = '.';
      pcVar7[1] = '.';
      lVar3 = uStack_58 - 0x7e;
      FUN_00485b24(&lStack_60,lVar3,0xffffffffffffffff);
      pcVar7 = pcVar10;
      if (lVar3 != 0) {
        func_0x00695e48();
        pcVar7 = pcVar10 + lVar3;
      }
    }
    for (; lVar9 != 0; lVar9 = lVar9 + -0x18) {
      if (*(char *)((long)param_3 + 0x14) != '\x02') {
        puVar2 = *(undefined8 **)(*param_3 + 8);
        lVar3 = (long)*(char *)((long)puVar2 + 0x17);
        if (lVar3 < 0) {
          lVar3 = puVar2[1];
          puVar2 = (undefined8 *)*puVar2;
        }
        if (lVar3 != 0) {
          _memcpy(pcVar7,puVar2,lVar3);
          pcVar7 = pcVar7 + lVar3;
        }
      }
      param_3 = param_3 + 3;
    }
  }
  return;
}



/* Entry: 006956b4; end: 0069579f;  */

void FUN_006956b4(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x19;
  ulong unaff_x20;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  func_0x00695ea0();
  puVar1 = (undefined8 *)param_1[1];
  uVar7 = (long)puVar1 - *param_1 >> 4;
  if (uVar7 < param_2) {
    uVar8 = unaff_x20 - uVar7;
    plVar9 = unaff_x19 + 2;
    if ((ulong)(*plVar9 - (long)puVar1 >> 4) < uVar8) {
      plVar4 = unaff_x19;
      uVar5 = unaff_x20;
      FUN_00695ad8();
      lVar6 = *unaff_x19;
      lVar2 = unaff_x19[1];
      plStack_48 = plVar9;
      if (plVar4 == (long *)0x0) {
        uVar5 = 0;
      }
      else {
        FUN_00695b24();
      }
      puStack_60 = (undefined8 *)((long)plVar4 + (lVar2 - lVar6));
      plStack_50 = plVar4 + uVar5 * 2;
      puStack_58 = puStack_60 + uVar8 * 2;
      puVar1 = puStack_60;
      for (lVar6 = unaff_x20 * 0x10 + uVar7 * -0x10; lVar6 != 0; lVar6 = lVar6 + -0x10) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = puVar1 + 2;
      }
      func_0x00695ed4();
      FUN_00695c1c(auStack_68);
    }
    else {
      puVar3 = puVar1;
      for (lVar6 = unaff_x20 * 0x10 + uVar7 * -0x10; lVar6 != 0; lVar6 = lVar6 + -0x10) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
      unaff_x19[1] = (long)(puVar1 + uVar8 * 2);
    }
  }
  else if (unaff_x20 < uVar7) {
    unaff_x19[1] = *param_1 + unaff_x20 * 0x10;
  }
  return;
}



/* Entry: 006957a0; end: 00695857;  */

bool FUN_006957a0(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_006538b4();
  if (((int)lVar2 == 0xb) && ((*(byte *)(param_1 + 1) >> 5 & 1) == 0)) {
    bVar1 = *(short *)(param_2 + 0x10) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 00695858; end: 006959db;  */

undefined8 * FUN_00695858(undefined8 *param_1,short *param_2,short *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 auStack_158 [32];
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar6 = *(uint *)((long)param_1 + 4);
  lVar14 = (long)(int)uVar6;
  lVar16 = param_1[7];
  iVar5 = *(int *)(lVar16 + 4);
  uVar4 = uVar6 - 1 == (int)*(short *)((long)param_1 + 2);
  if ((bool)uVar4) {
    if ((iVar5 + 0x8000U | uVar6) >> 0x10 == 0) {
      *param_2 = (short)iVar5;
      *param_3 = (short)uVar6;
      puVar13 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      goto LAB_0069593c;
    }
  }
  else {
    piVar7 = (int *)(lVar16 + 0x34);
    iVar15 = iVar5;
    for (lVar8 = 1; lVar8 < lVar14; lVar8 = lVar8 + 1) {
      iVar3 = *piVar7;
      iVar2 = iVar3;
      if (iVar15 <= iVar3) {
        iVar2 = iVar15;
      }
      if (iVar5 <= iVar3) {
        iVar5 = iVar3;
      }
      piVar7 = piVar7 + 0xc;
      iVar15 = iVar2;
    }
    lVar8 = (long)iVar5 - (long)iVar15;
    uVar4 = lVar8 == lVar14;
    if (lVar8 < lVar14) {
      puVar13 = (undefined8 *)0x0;
      uVar4 = iVar15 == (short)iVar15;
      if (((bool)uVar4) && (uVar1 = lVar8 + 1, uVar1 >> 0x10 == 0)) {
        *param_2 = (short)iVar15;
        *param_3 = (short)uVar1;
        uVar12 = lVar8 + 0x40U >> 6;
        uStack_58 = uVar12;
        if (lVar8 + 0x40U < 0x840) {
          puVar13 = auStack_158;
          puStack_50 = puVar13;
        }
        else {
          puVar13 = (undefined8 *)(uVar12 << 3);
          __Znwm();
          puStack_50 = puVar13;
        }
        while (0 < (long)uVar12) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
          uVar12 = uVar12 - 1;
        }
        uVar12 = 0;
        piVar7 = (int *)(lVar16 + 4);
        for (; lVar14 != 0; lVar14 = lVar14 + -1) {
          uVar10 = (ulong)((long)*piVar7 - (long)iVar15) >> 3 & 0x1ffffffffffffff8;
          uVar11 = *(ulong *)((long)puStack_50 + uVar10);
          uVar9 = 1L << ((long)*piVar7 - (long)iVar15 & 0x3fU);
          uVar6 = (uint)uVar12;
          if ((uVar9 & uVar11) == 0) {
            uVar6 = uVar6 + 1;
          }
          uVar12 = (ulong)uVar6;
          *(ulong *)((long)puStack_50 + uVar10) = uVar9 | uVar11;
          piVar7 = piVar7 + 0xc;
        }
        uVar4 = uVar1 == uVar12;
        puVar13 = (undefined8 *)(ulong)(byte)uVar4;
        param_1 = auStack_158;
        FUN_00695d18();
      }
      goto LAB_0069593c;
    }
  }
  puVar13 = (undefined8 *)0x0;
LAB_0069593c:
  func_0x00695f1c(uStack_48);
  if ((bool)uVar4) {
    return puVar13;
  }
  ___stack_chk_fail();
  puVar13 = (undefined8 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    uVar17 = *(undefined8 *)param_2;
    uVar19 = *(undefined8 *)(param_2 + 0xc);
    uVar18 = *(undefined8 *)(param_2 + 8);
    puVar13[1] = *(undefined8 *)(param_2 + 4);
    *puVar13 = uVar17;
    puVar13[3] = uVar19;
    puVar13[2] = uVar18;
    puVar13 = puVar13 + 4;
  }
  param_1[1] = puVar13;
  return param_1;
}



/* Entry: 006959dc; end: 006959fb;  */

void FUN_006959dc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1 = puVar1 + 4;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 006959fc; end: 00695a6b;  */

void FUN_006959fc(long *param_1)

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



/* Entry: 00695a6c; end: 00695ab7;  */

/* WARNING: Possible PIC construction at 0x00695aa8: Changing call to branch */

long * FUN_00695a6c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  func_0x00695dec();
  plVar1 = (long *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar2 = *param_2;
    plVar1[1] = param_2[1];
    *plVar1 = lVar2;
    plVar1 = plVar1 + 2;
  }
  param_1[1] = (long)plVar1;
  return param_1;
}



/* Entry: 00695ab8; end: 00695ad7;  */

void FUN_00695ab8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 00695ad8; end: 00695b23;  */

/* WARNING: Possible PIC construction at 0x00695b14: Changing call to branch */

undefined1  [16] FUN_00695ad8(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar2 = (undefined4 *)(param_1[2] - *param_1 >> 3);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined4 *)0xfffffffffffffff;
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = puVar2;
    return auVar3;
  }
  func_0x00695dec();
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  FUN_0040cee8();
  *(undefined4 *)param_1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  lVar1 = *(long *)(param_2 + 2);
  param_1[2] = *(long *)(param_2 + 4);
  param_1[1] = lVar1;
  param_1[3] = *(long *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 00695b24; end: 00695b57;  */

void FUN_00695b24(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  FUN_0040cee8();
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  return;
}



/* Entry: 00695b58; end: 00695b83;  */

void FUN_00695b58(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  return;
}



/* Entry: 00695b84; end: 00695b9b;  */

void FUN_00695b84(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  func_0x00695dec();
  func_0x00695dec();
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



/* Entry: 00695b9c; end: 00695c1b;  */

void FUN_00695b9c(long *param_1,undefined8 *param_2)

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



/* Entry: 00695c1c; end: 00695c5f;  */

long * FUN_00695c1c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x10;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00695c60; end: 00695c6b;  */

void FUN_00695c60(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  ulong *puStack_58;
  
  func_0x00695dec();
  func_0x00695ea0();
  puStack_58 = (ulong *)(param_1 + 0x10);
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 < (undefined8 *)*puStack_58) {
    uVar6 = *unaff_x20;
    puVar5[1] = unaff_x20[1];
    *puVar5 = uVar6;
    puVar5 = puVar5 + 2;
  }
  else {
    lVar4 = ((long)puVar5 - *unaff_x19 >> 4) + 1;
    plVar3 = unaff_x19;
    FUN_00695ad8();
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    if (plVar3 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      FUN_00695b24();
    }
    puStack_70 = (undefined8 *)((long)plVar3 + (lVar2 - lVar1));
    plStack_60 = plVar3 + lVar4 * 2;
    uVar6 = *unaff_x20;
    puStack_70[1] = unaff_x20[1];
    *puStack_70 = uVar6;
    puStack_68 = puStack_70 + 2;
    func_0x00695ed4();
    puVar5 = (undefined8 *)unaff_x19[1];
    FUN_00695c1c(auStack_78);
  }
  unaff_x19[1] = (long)puVar5;
  return;
}



/* Entry: 00695c6c; end: 00695d17;  */

void FUN_00695c6c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  ulong *puStack_48;
  
  func_0x00695ea0();
  puStack_48 = (ulong *)(param_1 + 0x10);
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 < (undefined8 *)*puStack_48) {
    uVar6 = *unaff_x20;
    puVar5[1] = unaff_x20[1];
    *puVar5 = uVar6;
    puVar5 = puVar5 + 2;
  }
  else {
    lVar4 = ((long)puVar5 - *unaff_x19 >> 4) + 1;
    plVar3 = unaff_x19;
    FUN_00695ad8();
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    if (plVar3 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      FUN_00695b24();
    }
    puStack_60 = (undefined8 *)((long)plVar3 + (lVar2 - lVar1));
    plStack_50 = plVar3 + lVar4 * 2;
    uVar6 = *unaff_x20;
    puStack_60[1] = unaff_x20[1];
    *puStack_60 = uVar6;
    puStack_58 = puStack_60 + 2;
    func_0x00695ed4();
    puVar5 = (undefined8 *)unaff_x19[1];
    FUN_00695c1c(auStack_68);
  }
  unaff_x19[1] = (long)puVar5;
  return;
}



/* Entry: 00695d18; end: 00695db7;  */

long FUN_00695d18(long param_1)

{
  if (0x20 < *(ulong *)(param_1 + 0x100)) {
    __ZdlPv(*(undefined8 *)(param_1 + 0x108));
  }
  return param_1;
}



/* Entry: 00695db8; end: 00695f2f;  */

void FUN_00695db8(void)

{
  return;
}



/* Entry: 00695f30; end: 00695ff7;  */

void FUN_00695f30(int param_1)

{
  func_0x00698db8();
                    /* WARNING: Could not recover jumptable at 0x00695f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_00827718)[param_1 - 1] * 4 + 0x695f5c))();
  return;
}



/* Entry: 00695ff8; end: 00696057;  */

uint * FUN_00695ff8(long param_1)

{
  int iVar1;
  uint *puVar2;
  uint extraout_w8;
  undefined4 extraout_var;
  uint *unaff_x19;
  undefined1 auStack_20 [16];
  
  iVar1 = (int)auStack_20;
  if (*(uint *)(param_1 + 0x18) != 0) {
    return (uint *)(ulong)*(uint *)(param_1 + 0x18);
  }
  func_0x00698d68();
  FUN_0077670c(auStack_20);
  func_0x00682f78(auStack_20,&UNK_00914598);
  FUN_00549f3c();
  FUN_0054a2c4();
  func_0x00698f24();
  func_0x00698db8();
  if (iVar1 != 9) {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x0068300c();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698eb4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698d3c();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698db8();
    if (iVar1 != 2) {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      FUN_0054060c();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ea4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698d3c();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698db8();
      if (iVar1 == 1) {
        puVar2 = (uint *)(ulong)*unaff_x19;
      }
      else {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        FUN_0054060c();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698e94();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698d3c();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698db8();
        if (iVar1 == 4) {
          return *(uint **)unaff_x19;
        }
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        func_0x0068300c();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698e84();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698d3c();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698db8();
        if (iVar1 == 3) {
          puVar2 = (uint *)(ulong)*unaff_x19;
        }
        else {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          func_0x0068300c();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698ed4();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698d3c();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698db8();
          if (iVar1 != 7) {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            FUN_0053453c();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698ec4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698d3c();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698de8();
            if ((extraout_w8 & 1) != 0) {
              func_0x006980b4(CONCAT44(extraout_var,extraout_w8) + -1);
            }
            __ZdlPv();
            return unaff_x19;
          }
          puVar2 = (uint *)(ulong)(byte)*unaff_x19;
        }
      }
      return puVar2;
    }
    unaff_x19 = *(uint **)unaff_x19;
  }
  return unaff_x19;
}



/* Entry: 00696058; end: 006960cf;  */

uint * FUN_00696058(int param_1)

{
  uint *puVar1;
  uint extraout_w8;
  undefined4 extraout_var;
  uint *unaff_x19;
  
  func_0x00698db8();
  if (param_1 != 9) {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x0068300c();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698eb4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698d3c();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698db8();
    if (param_1 != 2) {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      FUN_0054060c();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ea4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698d3c();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698db8();
      if (param_1 == 1) {
        puVar1 = (uint *)(ulong)*unaff_x19;
      }
      else {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        FUN_0054060c();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698e94();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698d3c();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698db8();
        if (param_1 == 4) {
          return *(uint **)unaff_x19;
        }
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        func_0x0068300c();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698e84();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698d3c();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698db8();
        if (param_1 == 3) {
          puVar1 = (uint *)(ulong)*unaff_x19;
        }
        else {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          func_0x0068300c();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698ed4();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698d3c();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698db8();
          if (param_1 != 7) {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            FUN_0053453c();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698ec4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698d3c();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698de8();
            if ((extraout_w8 & 1) != 0) {
              func_0x006980b4(CONCAT44(extraout_var,extraout_w8) + -1);
            }
            __ZdlPv();
            return unaff_x19;
          }
          puVar1 = (uint *)(ulong)(byte)*unaff_x19;
        }
      }
      return puVar1;
    }
    unaff_x19 = *(uint **)unaff_x19;
  }
  return unaff_x19;
}



/* Entry: 006960d0; end: 00696147;  */

uint * FUN_006960d0(int param_1)

{
  uint *puVar1;
  uint extraout_w8;
  undefined4 extraout_var;
  uint *unaff_x19;
  
  func_0x00698db8();
  if (param_1 == 2) {
    return *(uint **)unaff_x19;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  FUN_0054060c();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698ea4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698d3c();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698db8();
  if (param_1 == 1) {
    puVar1 = (uint *)(ulong)*unaff_x19;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    FUN_0054060c();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698e94();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698d3c();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698db8();
    if (param_1 == 4) {
      return *(uint **)unaff_x19;
    }
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x0068300c();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698e84();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698d3c();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698db8();
    if (param_1 == 3) {
      puVar1 = (uint *)(ulong)*unaff_x19;
    }
    else {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      func_0x0068300c();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ed4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698d3c();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698db8();
      if (param_1 != 7) {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        FUN_0053453c();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698ec4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698d3c();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698de8();
        if ((extraout_w8 & 1) != 0) {
          func_0x006980b4(CONCAT44(extraout_var,extraout_w8) + -1);
        }
        __ZdlPv();
        return unaff_x19;
      }
      puVar1 = (uint *)(ulong)(byte)*unaff_x19;
    }
  }
  return puVar1;
}



/* Entry: 00696148; end: 006961bf;  */

uint * FUN_00696148(int param_1)

{
  uint *puVar1;
  uint extraout_w8;
  undefined4 extraout_var;
  uint *unaff_x19;
  
  func_0x00698db8();
  if (param_1 == 1) {
    puVar1 = (uint *)(ulong)*unaff_x19;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    FUN_0054060c();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698e94();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698d3c();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698db8();
    if (param_1 == 4) {
      return *(uint **)unaff_x19;
    }
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x0068300c();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698e84();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698d3c();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698db8();
    if (param_1 == 3) {
      puVar1 = (uint *)(ulong)*unaff_x19;
    }
    else {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      func_0x0068300c();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ed4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698d3c();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698db8();
      if (param_1 != 7) {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        FUN_0053453c();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698ec4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698d3c();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698de8();
        if ((extraout_w8 & 1) != 0) {
          func_0x006980b4(CONCAT44(extraout_var,extraout_w8) + -1);
        }
        __ZdlPv();
        return unaff_x19;
      }
      puVar1 = (uint *)(ulong)(byte)*unaff_x19;
    }
  }
  return puVar1;
}



/* Entry: 006961c0; end: 00696237;  */

uint * FUN_006961c0(int param_1)

{
  uint *puVar1;
  uint extraout_w8;
  undefined4 extraout_var;
  uint *unaff_x19;
  
  func_0x00698db8();
  if (param_1 == 4) {
    return *(uint **)unaff_x19;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  func_0x0068300c();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698e84();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698d3c();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698db8();
  if (param_1 == 3) {
    puVar1 = (uint *)(ulong)*unaff_x19;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x0068300c();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698ed4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698d3c();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698db8();
    if (param_1 != 7) {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      FUN_0053453c();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ec4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698d3c();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698de8();
      if ((extraout_w8 & 1) != 0) {
        func_0x006980b4(CONCAT44(extraout_var,extraout_w8) + -1);
      }
      __ZdlPv();
      return unaff_x19;
    }
    puVar1 = (uint *)(ulong)(byte)*unaff_x19;
  }
  return puVar1;
}



/* Entry: 00696238; end: 006962af;  */

uint * FUN_00696238(int param_1)

{
  uint *puVar1;
  uint extraout_w8;
  undefined4 extraout_var;
  uint *unaff_x19;
  
  func_0x00698db8();
  if (param_1 == 3) {
    puVar1 = (uint *)(ulong)*unaff_x19;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x0068300c();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698ed4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698d3c();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698db8();
    if (param_1 != 7) {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      FUN_0053453c();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ec4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698d3c();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698de8();
      if ((extraout_w8 & 1) != 0) {
        func_0x006980b4(CONCAT44(extraout_var,extraout_w8) + -1);
      }
      __ZdlPv();
      return unaff_x19;
    }
    puVar1 = (uint *)(ulong)(byte)*unaff_x19;
  }
  return puVar1;
}



/* Entry: 006962b0; end: 00696327;  */

byte * FUN_006962b0(int param_1)

{
  uint extraout_w8;
  undefined4 extraout_var;
  byte *unaff_x19;
  
  func_0x00698db8();
  if (param_1 != 7) {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    FUN_0053453c();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698ec4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698d3c();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698de8();
    if ((extraout_w8 & 1) != 0) {
      func_0x006980b4(CONCAT44(extraout_var,extraout_w8) + -1);
    }
    __ZdlPv();
    return unaff_x19;
  }
  return (byte *)(ulong)*unaff_x19;
}



/* Entry: 00696328; end: 0069638b;  */

void FUN_00696328(void)

{
  uint extraout_w8;
  undefined4 extraout_var;
  
  func_0x00698de8();
  if ((extraout_w8 & 1) != 0) {
    func_0x006980b4(CONCAT44(extraout_var,extraout_w8) + -1);
  }
  __ZdlPv();
  return;
}



/* Entry: 0069638c; end: 0069675b;  */

void FUN_0069638c(long *param_1)

{
  ulong *puVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *apuStack_d0 [12];
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  if (((param_1[1] & 1U) != 0) && (in_ZR = 0, *(int *)(param_1[1] + 0x1f) == 1)) {
    plVar5 = param_1;
    FUN_0069687c();
    puVar6 = (ulong *)(plVar5 + 3);
    apuStack_d0[0] = puVar6;
    FUN_00567528();
    in_ZR = (int)plVar5[4] == 1;
    if ((bool)in_ZR) {
      func_0x00698f38(*(undefined8 *)(*param_1 + 0x28));
      func_0x00698e70();
      if ((int)puVar6[1] != 0) {
        uVar3 = (*puVar6 & 1) == 0;
        puVar1 = puVar6;
        if (!(bool)uVar3) {
          puVar1 = (ulong *)(*puVar6 + 7);
        }
        uVar7 = *puVar1;
        FUN_00699298(uVar7);
        FUN_00699298();
        func_0x00698dc0();
        if ((bool)uVar3) {
          iVar4 = (int)*(undefined8 *)(uVar7 + 0x38);
        }
        else {
          iVar4 = 0;
        }
        in_ZR = (*puVar6 & 1) == 0;
        if (((long)(int)puVar6[1] & 0x1fffffffffffffffU) != 0) {
          uStack_70 = 0;
          FUN_00656c60();
                    /* WARNING: Could not recover jumptable at 0x006964ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_00827721)[iVar4 - 1] * 4 + 0x6964b0))();
          return;
        }
      }
      *(undefined4 *)(plVar5 + 4) = 2;
    }
    FUN_0054abe8(apuStack_d0);
  }
  func_0x00698f40(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x696718);
  (*pcVar2)();
}



/* Entry: 0069675c; end: 00696773;  */

void FUN_0069675c(long param_1)

{
  FUN_0069687c();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 00696774; end: 0069680f;  */

void FUN_00696774(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  func_0x00698dd0();
  func_0x00698e50();
  FUN_0048fc74(&uStack_38,param_1);
  unaff_x19[1] = uStack_30;
  *unaff_x19 = uStack_38;
  *(undefined4 *)(unaff_x19 + 2) = uStack_28;
  func_0x00698f38(*(undefined8 *)(*unaff_x20 + 0x18));
  return;
}



/* Entry: 00696810; end: 0069687b;  */

void FUN_00696810(long param_1)

{
  ulong extraout_x8;
  long lStack_28;
  
  func_0x00698de8();
  if (((extraout_x8 & 1) == 0) || (*(int *)(extraout_x8 + 0x1f) == 0)) {
    func_0x00698e70();
    lStack_28 = param_1 + 0x18;
    FUN_00567528();
    if (*(int *)(param_1 + 0x20) == 0) {
      FUN_006969f8();
      *(undefined4 *)(param_1 + 0x20) = 2;
    }
    FUN_0054abe8(&lStack_28);
  }
  return;
}



/* Entry: 0069687c; end: 00696893;  */

long FUN_0069687c(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    return *(ulong *)(param_1 + 8) - 1;
  }
  puVar2 = (ulong *)(param_1 + 8);
  uStack_48 = *puVar2;
  uVar3 = uStack_48;
  if ((uStack_48 & 1) == 0) {
    puVar1 = &uStack_38;
    uStack_40 = uStack_48;
    uStack_38 = uStack_48;
    func_0x006981f8(puVar1,&uStack_48);
    uVar3 = (long)puVar1 + 1;
    FUN_00696968(puVar2,&uStack_40,uVar3,4);
    if (((int)puVar2 == 0) && (uVar3 = uStack_40, uStack_48 == 0)) {
      if (puVar1 != (ulong *)0x0) {
        func_0x006980b4(puVar1);
      }
      __ZdlPv(puVar1);
      uVar3 = uStack_40;
    }
  }
  return uVar3 - 1;
}



/* Entry: 00696894; end: 006968bf;  */

long FUN_00696894(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  FUN_00696810();
  FUN_006968c0(param_1);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    return *(ulong *)(param_1 + 8) - 1;
  }
  puVar2 = (ulong *)(param_1 + 8);
  uStack_48 = *puVar2;
  uVar3 = uStack_48;
  if ((uStack_48 & 1) == 0) {
    puVar1 = &uStack_38;
    uStack_40 = uStack_48;
    uStack_38 = uStack_48;
    func_0x006981f8(puVar1,&uStack_48);
    uVar3 = (long)puVar1 + 1;
    FUN_00696968(puVar2,&uStack_40,uVar3,4);
    if (((int)puVar2 == 0) && (uVar3 = uStack_40, uStack_48 == 0)) {
      if (puVar1 != (ulong *)0x0) {
        func_0x006980b4(puVar1);
      }
      __ZdlPv(puVar1);
      uVar3 = uStack_40;
    }
  }
  return uVar3 - 1;
}



/* Entry: 006968c0; end: 006968db;  */

void FUN_006968c0(long param_1)

{
  FUN_0069687c();
  *(undefined4 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 006968dc; end: 00696967;  */

long FUN_006968dc(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar2 = (ulong *)(param_1 + 8);
  uStack_48 = *puVar2;
  uVar3 = uStack_48;
  if ((uStack_48 & 1) == 0) {
    puVar1 = &uStack_38;
    uStack_40 = uStack_48;
    uStack_38 = uStack_48;
    func_0x006981f8(puVar1,&uStack_48);
    uVar3 = (long)puVar1 + 1;
    FUN_00696968(puVar2,&uStack_40,uVar3,4);
    if (((int)puVar2 == 0) && (uVar3 = uStack_40, uStack_48 == 0)) {
      if (puVar1 != (ulong *)0x0) {
        func_0x006980b4(puVar1);
      }
      __ZdlPv(puVar1);
      uVar3 = uStack_40;
    }
  }
  return uVar3 - 1;
}



/* Entry: 00696968; end: 00696993;  */

undefined8 FUN_00696968(long *param_1,long *param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = 2;
  if (param_4 != 4) {
    iVar1 = param_4;
  }
  iVar2 = 0;
  if (param_4 != 3) {
    iVar2 = iVar1;
  }
  switch(param_4) {
  case 1:
  case 2:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) {
LAB_0069849c:
          ClearExclusiveLocal();
          *param_2 = lVar5;
          return 0;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  case 3:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  case 4:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  case 5:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    break;
  default:
    if (iVar2 - 1U < 2) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else if (iVar2 == 5) {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      lVar6 = *param_2;
      do {
        lVar5 = *param_1;
        if (lVar5 != lVar6) goto LAB_0069849c;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return 1;
}



/* Entry: 00696994; end: 006969f7;  */

long * FUN_00696994(long *param_1)

{
  if ((param_1[1] & 1U) == 0) {
    param_1 = (long *)0x0;
  }
  else {
    FUN_00567528();
    (**(code **)(*param_1 + 0x48))(param_1);
    func_0x00698ddc();
  }
  return param_1;
}



/* Entry: 006969f8; end: 00696d9b;  */

void FUN_006969f8(long *param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x50))();
  FUN_00699298();
  plVar5 = plVar4;
  FUN_00699298();
  plVar6 = plVar5;
  func_0x00698dc0();
  if ((bool)in_ZR) {
    iVar3 = (int)plVar5[7];
  }
  else {
    iVar3 = 0;
  }
  func_0x00698e70();
  FUN_0068b130();
  func_0x00698f2c(&lStack_c0);
  func_0x00698f2c(&uStack_110);
  FUN_0048fc74(&lStack_128,param_1 + 2);
  uStack_b8 = uStack_120;
  lStack_c0 = lStack_128;
  uStack_b0 = uStack_118;
  (**(code **)(*param_1 + 0x18))(&lStack_c0);
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uVar2 = lStack_c0 == 0;
  if (!(bool)uVar2) {
    uVar7 = param_1[1];
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 + 0xf);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,uVar7);
    func_0x0068e458(plVar6,plVar4);
    FUN_00656c60();
                    /* WARNING: Could not recover jumptable at 0x00696b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00827734)[iVar3 - 1] * 4 + 0x696b24))();
    return;
  }
  func_0x00698f04(&uStack_110);
  FUN_0069072c(auStack_a0);
  func_0x00698f40(uStack_70);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x696d40);
  (*pcVar1)();
}



/* Entry: 00696d9c; end: 00696e13;  */

long * FUN_00696d9c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00698d74();
  if ((int)param_2 == 9) {
    plVar1 = (long *)*unaff_x19;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x006651b8();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698eb4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 != 2) {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      FUN_00698178();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ea4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 == 1) {
        plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
      }
      else {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        FUN_00698178();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698e94();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 == 4) {
          return *(long **)*unaff_x19;
        }
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        func_0x006651b8();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698e84();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 == 3) {
          plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
        }
        else {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          func_0x006651b8();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698ed4();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698d74();
          if ((int)param_2 == 7) {
            plVar1 = (long *)(ulong)*(byte *)*unaff_x19;
          }
          else {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            func_0x0053794c();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698ec4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if ((int)param_2 == 5) {
              return param_2;
            }
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            func_0x006651b8();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if ((int)param_2 == 6) {
              return param_2;
            }
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            FUN_00698178();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if ((int)param_2 != 8) {
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              func_0x0053794c();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if ((int)param_2 == 10) {
                return (long *)*unaff_x19;
              }
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              uVar4 = 0x9149c0;
              func_0x00682f78();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if ((int)param_2 == 1) {
                *(undefined4 *)*unaff_x19 = uVar4;
              }
              else {
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                puVar3 = &UNK_009149e2;
                func_0x00698198();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698e94();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698d74();
                if ((int)param_2 == 2) {
                  *(undefined **)*unaff_x19 = puVar3;
                }
                else {
                  func_0x00698cc8();
                  FUN_0077670c();
                  func_0x00698c5c();
                  uVar4 = 0x9149fd;
                  func_0x00698198();
                  func_0x00698cb0();
                  func_0x00698ca4();
                  func_0x00698ea4();
                  func_0x00698d58();
                  func_0x00698c98();
                  func_0x00698c8c();
                  func_0x00698cbc();
                  func_0x00698c6c();
                  func_0x00698c80();
                  func_0x00698d60();
                  func_0x00698d74();
                  if ((int)param_2 == 3) {
                    *(undefined4 *)*unaff_x19 = uVar4;
                  }
                  else {
                    func_0x00698cc8();
                    FUN_0077670c();
                    func_0x00698c5c();
                    puVar3 = &UNK_00914a18;
                    func_0x006981b8();
                    func_0x00698cb0();
                    func_0x00698ca4();
                    func_0x00698ed4();
                    func_0x00698d58();
                    func_0x00698c98();
                    func_0x00698c8c();
                    func_0x00698cbc();
                    func_0x00698c6c();
                    func_0x00698c80();
                    func_0x00698d60();
                    func_0x00698d74();
                    if ((int)param_2 != 4) {
                      func_0x00698cc8();
                      FUN_0077670c();
                      func_0x00698c5c();
                      func_0x006981b8();
                      func_0x00698cb0();
                      func_0x00698ca4();
                      func_0x00698e84();
                      func_0x00698d58();
                      func_0x00698c98();
                      func_0x00698c8c();
                      func_0x00698cbc();
                      func_0x00698c6c();
                      func_0x00698c80();
                      func_0x00698d60();
                      uVar5 = param_1;
                      func_0x00698d74();
                      uVar4 = (undefined4)uVar5;
                      if ((int)param_2 == 5) {
                        *(undefined8 *)*unaff_x19 = param_1;
                      }
                      else {
                        func_0x00698cc8();
                        FUN_0077670c();
                        func_0x00698c5c();
                        func_0x006981b8();
                        func_0x00698cb0();
                        func_0x00698ca4();
                        func_0x00698d58();
                        func_0x00698c98();
                        func_0x00698c8c();
                        func_0x00698cbc();
                        func_0x00698c6c();
                        func_0x00698c80();
                        func_0x00698d60();
                        func_0x00698d74();
                        if ((int)param_2 != 6) {
                          func_0x00698cc8();
                          FUN_0077670c();
                          func_0x00698c5c();
                          uVar2 = 0x6c;
                          func_0x00698198();
                          func_0x00698cb0();
                          func_0x00698ca4();
                          func_0x00698d58();
                          func_0x00698c98();
                          func_0x00698c8c();
                          func_0x00698cbc();
                          func_0x00698c6c();
                          func_0x00698c80();
                          func_0x00698d60();
                          func_0x00698d74();
                          if ((int)param_2 == 7) {
                            *(undefined1 *)*unaff_x19 = uVar2;
                            return param_2;
                          }
                          func_0x00698cc8();
                          FUN_0077670c();
                          func_0x00698c5c();
                          puVar3 = &UNK_00914a87;
                          func_0x006981d8();
                          func_0x00698cb0();
                          func_0x00698ca4();
                          func_0x00698ec4();
                          func_0x00698d58();
                          func_0x00698c98();
                          func_0x00698c8c();
                          func_0x00698cbc();
                          func_0x00698c6c();
                          func_0x00698c80();
                          func_0x00698d60();
                          func_0x00698d74();
                          if ((int)param_2 != 9) {
                            func_0x00698cc8();
                            FUN_0077670c();
                            func_0x00698c5c();
                            uVar4 = 0x914aa1;
                            func_0x006981b8();
                            func_0x00698cb0();
                            func_0x00698ca4();
                            func_0x00698eb4();
                            func_0x00698d58();
                            func_0x00698c98();
                            func_0x00698c8c();
                            func_0x00698cbc();
                            func_0x00698c6c();
                            func_0x00698c80();
                            func_0x00698d60();
                            func_0x00698d74();
                            if ((int)param_2 == 8) {
                              *(undefined4 *)*unaff_x19 = uVar4;
                              return param_2;
                            }
                            func_0x00698cc8();
                            FUN_0077670c();
                            func_0x00698c5c();
                            func_0x006981d8();
                            func_0x00698cb0();
                            func_0x00698ca4();
                            func_0x00698d58();
                            func_0x00698c98();
                            func_0x00698c8c();
                            func_0x00698cbc();
                            func_0x00698c6c();
                            func_0x00698c80();
                            func_0x00698d60();
                            func_0x00698de8();
                            if ((extraout_x8 & 1) != 0) {
                              FUN_0068b130(extraout_x8 - 1);
                            }
                            func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
                            FUN_0069687c();
                            *(undefined4 *)(unaff_x19 + 4) = 0;
                            return unaff_x19;
                          }
                          plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(code *)
                            PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38
                          )(plVar1,puVar3);
                          return plVar1;
                        }
                        *(undefined4 *)*unaff_x19 = uVar4;
                      }
                      return param_2;
                    }
                    *(undefined **)*unaff_x19 = puVar3;
                  }
                }
              }
              return param_2;
            }
            plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
          }
        }
      }
      return plVar1;
    }
    plVar1 = *(long **)*unaff_x19;
  }
  return plVar1;
}



/* Entry: 00696e14; end: 00696e8f;  */

long * FUN_00696e14(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00698d74();
  if ((int)param_2 == 2) {
    return *(long **)*unaff_x19;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  FUN_00698178();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698ea4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698d74();
  if ((int)param_2 == 1) {
    plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    FUN_00698178();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698e94();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 == 4) {
      return *(long **)*unaff_x19;
    }
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x006651b8();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698e84();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 == 3) {
      plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
    }
    else {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      func_0x006651b8();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ed4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 == 7) {
        plVar1 = (long *)(ulong)*(byte *)*unaff_x19;
      }
      else {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        func_0x0053794c();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698ec4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 == 5) {
          return param_2;
        }
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        func_0x006651b8();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 == 6) {
          return param_2;
        }
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        FUN_00698178();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 != 8) {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          func_0x0053794c();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698d74();
          if ((int)param_2 == 10) {
            return (long *)*unaff_x19;
          }
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          uVar4 = 0x9149c0;
          func_0x00682f78();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698d74();
          if ((int)param_2 == 1) {
            *(undefined4 *)*unaff_x19 = uVar4;
          }
          else {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            puVar3 = &UNK_009149e2;
            func_0x00698198();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698e94();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if ((int)param_2 == 2) {
              *(undefined **)*unaff_x19 = puVar3;
            }
            else {
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              uVar4 = 0x9149fd;
              func_0x00698198();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698ea4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if ((int)param_2 == 3) {
                *(undefined4 *)*unaff_x19 = uVar4;
              }
              else {
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                puVar3 = &UNK_00914a18;
                func_0x006981b8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698ed4();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698d74();
                if ((int)param_2 != 4) {
                  func_0x00698cc8();
                  FUN_0077670c();
                  func_0x00698c5c();
                  func_0x006981b8();
                  func_0x00698cb0();
                  func_0x00698ca4();
                  func_0x00698e84();
                  func_0x00698d58();
                  func_0x00698c98();
                  func_0x00698c8c();
                  func_0x00698cbc();
                  func_0x00698c6c();
                  func_0x00698c80();
                  func_0x00698d60();
                  uVar5 = param_1;
                  func_0x00698d74();
                  uVar4 = (undefined4)uVar5;
                  if ((int)param_2 == 5) {
                    *(undefined8 *)*unaff_x19 = param_1;
                  }
                  else {
                    func_0x00698cc8();
                    FUN_0077670c();
                    func_0x00698c5c();
                    func_0x006981b8();
                    func_0x00698cb0();
                    func_0x00698ca4();
                    func_0x00698d58();
                    func_0x00698c98();
                    func_0x00698c8c();
                    func_0x00698cbc();
                    func_0x00698c6c();
                    func_0x00698c80();
                    func_0x00698d60();
                    func_0x00698d74();
                    if ((int)param_2 != 6) {
                      func_0x00698cc8();
                      FUN_0077670c();
                      func_0x00698c5c();
                      uVar2 = 0x6c;
                      func_0x00698198();
                      func_0x00698cb0();
                      func_0x00698ca4();
                      func_0x00698d58();
                      func_0x00698c98();
                      func_0x00698c8c();
                      func_0x00698cbc();
                      func_0x00698c6c();
                      func_0x00698c80();
                      func_0x00698d60();
                      func_0x00698d74();
                      if ((int)param_2 == 7) {
                        *(undefined1 *)*unaff_x19 = uVar2;
                        return param_2;
                      }
                      func_0x00698cc8();
                      FUN_0077670c();
                      func_0x00698c5c();
                      puVar3 = &UNK_00914a87;
                      func_0x006981d8();
                      func_0x00698cb0();
                      func_0x00698ca4();
                      func_0x00698ec4();
                      func_0x00698d58();
                      func_0x00698c98();
                      func_0x00698c8c();
                      func_0x00698cbc();
                      func_0x00698c6c();
                      func_0x00698c80();
                      func_0x00698d60();
                      func_0x00698d74();
                      if ((int)param_2 != 9) {
                        func_0x00698cc8();
                        FUN_0077670c();
                        func_0x00698c5c();
                        uVar4 = 0x914aa1;
                        func_0x006981b8();
                        func_0x00698cb0();
                        func_0x00698ca4();
                        func_0x00698eb4();
                        func_0x00698d58();
                        func_0x00698c98();
                        func_0x00698c8c();
                        func_0x00698cbc();
                        func_0x00698c6c();
                        func_0x00698c80();
                        func_0x00698d60();
                        func_0x00698d74();
                        if ((int)param_2 == 8) {
                          *(undefined4 *)*unaff_x19 = uVar4;
                          return param_2;
                        }
                        func_0x00698cc8();
                        FUN_0077670c();
                        func_0x00698c5c();
                        func_0x006981d8();
                        func_0x00698cb0();
                        func_0x00698ca4();
                        func_0x00698d58();
                        func_0x00698c98();
                        func_0x00698c8c();
                        func_0x00698cbc();
                        func_0x00698c6c();
                        func_0x00698c80();
                        func_0x00698d60();
                        func_0x00698de8();
                        if ((extraout_x8 & 1) != 0) {
                          FUN_0068b130(extraout_x8 - 1);
                        }
                        func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
                        FUN_0069687c();
                        *(undefined4 *)(unaff_x19 + 4) = 0;
                        return unaff_x19;
                      }
                      plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)
                        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38
                      )(plVar1,puVar3);
                      return plVar1;
                    }
                    *(undefined4 *)*unaff_x19 = uVar4;
                  }
                  return param_2;
                }
                *(undefined **)*unaff_x19 = puVar3;
              }
            }
          }
          return param_2;
        }
        plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
      }
    }
  }
  return plVar1;
}



/* Entry: 00696e90; end: 00696f0b;  */

long * FUN_00696e90(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00698d74();
  if ((int)param_2 == 1) {
    plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    FUN_00698178();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698e94();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 == 4) {
      return *(long **)*unaff_x19;
    }
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x006651b8();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698e84();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 == 3) {
      plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
    }
    else {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      func_0x006651b8();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ed4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 == 7) {
        plVar1 = (long *)(ulong)*(byte *)*unaff_x19;
      }
      else {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        func_0x0053794c();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698ec4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 == 5) {
          return param_2;
        }
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        func_0x006651b8();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 == 6) {
          return param_2;
        }
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        FUN_00698178();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 != 8) {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          func_0x0053794c();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698d74();
          if ((int)param_2 == 10) {
            return (long *)*unaff_x19;
          }
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          uVar4 = 0x9149c0;
          func_0x00682f78();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698d74();
          if ((int)param_2 == 1) {
            *(undefined4 *)*unaff_x19 = uVar4;
          }
          else {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            puVar3 = &UNK_009149e2;
            func_0x00698198();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698e94();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if ((int)param_2 == 2) {
              *(undefined **)*unaff_x19 = puVar3;
            }
            else {
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              uVar4 = 0x9149fd;
              func_0x00698198();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698ea4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if ((int)param_2 == 3) {
                *(undefined4 *)*unaff_x19 = uVar4;
              }
              else {
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                puVar3 = &UNK_00914a18;
                func_0x006981b8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698ed4();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698d74();
                if ((int)param_2 != 4) {
                  func_0x00698cc8();
                  FUN_0077670c();
                  func_0x00698c5c();
                  func_0x006981b8();
                  func_0x00698cb0();
                  func_0x00698ca4();
                  func_0x00698e84();
                  func_0x00698d58();
                  func_0x00698c98();
                  func_0x00698c8c();
                  func_0x00698cbc();
                  func_0x00698c6c();
                  func_0x00698c80();
                  func_0x00698d60();
                  uVar5 = param_1;
                  func_0x00698d74();
                  uVar4 = (undefined4)uVar5;
                  if ((int)param_2 == 5) {
                    *(undefined8 *)*unaff_x19 = param_1;
                  }
                  else {
                    func_0x00698cc8();
                    FUN_0077670c();
                    func_0x00698c5c();
                    func_0x006981b8();
                    func_0x00698cb0();
                    func_0x00698ca4();
                    func_0x00698d58();
                    func_0x00698c98();
                    func_0x00698c8c();
                    func_0x00698cbc();
                    func_0x00698c6c();
                    func_0x00698c80();
                    func_0x00698d60();
                    func_0x00698d74();
                    if ((int)param_2 != 6) {
                      func_0x00698cc8();
                      FUN_0077670c();
                      func_0x00698c5c();
                      uVar2 = 0x6c;
                      func_0x00698198();
                      func_0x00698cb0();
                      func_0x00698ca4();
                      func_0x00698d58();
                      func_0x00698c98();
                      func_0x00698c8c();
                      func_0x00698cbc();
                      func_0x00698c6c();
                      func_0x00698c80();
                      func_0x00698d60();
                      func_0x00698d74();
                      if ((int)param_2 == 7) {
                        *(undefined1 *)*unaff_x19 = uVar2;
                        return param_2;
                      }
                      func_0x00698cc8();
                      FUN_0077670c();
                      func_0x00698c5c();
                      puVar3 = &UNK_00914a87;
                      func_0x006981d8();
                      func_0x00698cb0();
                      func_0x00698ca4();
                      func_0x00698ec4();
                      func_0x00698d58();
                      func_0x00698c98();
                      func_0x00698c8c();
                      func_0x00698cbc();
                      func_0x00698c6c();
                      func_0x00698c80();
                      func_0x00698d60();
                      func_0x00698d74();
                      if ((int)param_2 != 9) {
                        func_0x00698cc8();
                        FUN_0077670c();
                        func_0x00698c5c();
                        uVar4 = 0x914aa1;
                        func_0x006981b8();
                        func_0x00698cb0();
                        func_0x00698ca4();
                        func_0x00698eb4();
                        func_0x00698d58();
                        func_0x00698c98();
                        func_0x00698c8c();
                        func_0x00698cbc();
                        func_0x00698c6c();
                        func_0x00698c80();
                        func_0x00698d60();
                        func_0x00698d74();
                        if ((int)param_2 == 8) {
                          *(undefined4 *)*unaff_x19 = uVar4;
                          return param_2;
                        }
                        func_0x00698cc8();
                        FUN_0077670c();
                        func_0x00698c5c();
                        func_0x006981d8();
                        func_0x00698cb0();
                        func_0x00698ca4();
                        func_0x00698d58();
                        func_0x00698c98();
                        func_0x00698c8c();
                        func_0x00698cbc();
                        func_0x00698c6c();
                        func_0x00698c80();
                        func_0x00698d60();
                        func_0x00698de8();
                        if ((extraout_x8 & 1) != 0) {
                          FUN_0068b130(extraout_x8 - 1);
                        }
                        func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
                        FUN_0069687c();
                        *(undefined4 *)(unaff_x19 + 4) = 0;
                        return unaff_x19;
                      }
                      plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)
                        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38
                      )(plVar1,puVar3);
                      return plVar1;
                    }
                    *(undefined4 *)*unaff_x19 = uVar4;
                  }
                  return param_2;
                }
                *(undefined **)*unaff_x19 = puVar3;
              }
            }
          }
          return param_2;
        }
        plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
      }
    }
  }
  return plVar1;
}



/* Entry: 00696f0c; end: 00696f87;  */

long * FUN_00696f0c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00698d74();
  if ((int)param_2 == 4) {
    return *(long **)*unaff_x19;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  func_0x006651b8();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698e84();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698d74();
  if ((int)param_2 == 3) {
    plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x006651b8();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698ed4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 == 7) {
      plVar1 = (long *)(ulong)*(byte *)*unaff_x19;
    }
    else {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      func_0x0053794c();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ec4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 == 5) {
        return param_2;
      }
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      func_0x006651b8();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 == 6) {
        return param_2;
      }
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      FUN_00698178();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 != 8) {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        func_0x0053794c();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 == 10) {
          return (long *)*unaff_x19;
        }
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        uVar4 = 0x9149c0;
        func_0x00682f78();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 == 1) {
          *(undefined4 *)*unaff_x19 = uVar4;
        }
        else {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          puVar3 = &UNK_009149e2;
          func_0x00698198();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698e94();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698d74();
          if ((int)param_2 == 2) {
            *(undefined **)*unaff_x19 = puVar3;
          }
          else {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            uVar4 = 0x9149fd;
            func_0x00698198();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698ea4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if ((int)param_2 == 3) {
              *(undefined4 *)*unaff_x19 = uVar4;
            }
            else {
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              puVar3 = &UNK_00914a18;
              func_0x006981b8();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698ed4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if ((int)param_2 != 4) {
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                func_0x006981b8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698e84();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                uVar5 = param_1;
                func_0x00698d74();
                uVar4 = (undefined4)uVar5;
                if ((int)param_2 == 5) {
                  *(undefined8 *)*unaff_x19 = param_1;
                }
                else {
                  func_0x00698cc8();
                  FUN_0077670c();
                  func_0x00698c5c();
                  func_0x006981b8();
                  func_0x00698cb0();
                  func_0x00698ca4();
                  func_0x00698d58();
                  func_0x00698c98();
                  func_0x00698c8c();
                  func_0x00698cbc();
                  func_0x00698c6c();
                  func_0x00698c80();
                  func_0x00698d60();
                  func_0x00698d74();
                  if ((int)param_2 != 6) {
                    func_0x00698cc8();
                    FUN_0077670c();
                    func_0x00698c5c();
                    uVar2 = 0x6c;
                    func_0x00698198();
                    func_0x00698cb0();
                    func_0x00698ca4();
                    func_0x00698d58();
                    func_0x00698c98();
                    func_0x00698c8c();
                    func_0x00698cbc();
                    func_0x00698c6c();
                    func_0x00698c80();
                    func_0x00698d60();
                    func_0x00698d74();
                    if ((int)param_2 == 7) {
                      *(undefined1 *)*unaff_x19 = uVar2;
                      return param_2;
                    }
                    func_0x00698cc8();
                    FUN_0077670c();
                    func_0x00698c5c();
                    puVar3 = &UNK_00914a87;
                    func_0x006981d8();
                    func_0x00698cb0();
                    func_0x00698ca4();
                    func_0x00698ec4();
                    func_0x00698d58();
                    func_0x00698c98();
                    func_0x00698c8c();
                    func_0x00698cbc();
                    func_0x00698c6c();
                    func_0x00698c80();
                    func_0x00698d60();
                    func_0x00698d74();
                    if ((int)param_2 != 9) {
                      func_0x00698cc8();
                      FUN_0077670c();
                      func_0x00698c5c();
                      uVar4 = 0x914aa1;
                      func_0x006981b8();
                      func_0x00698cb0();
                      func_0x00698ca4();
                      func_0x00698eb4();
                      func_0x00698d58();
                      func_0x00698c98();
                      func_0x00698c8c();
                      func_0x00698cbc();
                      func_0x00698c6c();
                      func_0x00698c80();
                      func_0x00698d60();
                      func_0x00698d74();
                      if ((int)param_2 == 8) {
                        *(undefined4 *)*unaff_x19 = uVar4;
                        return param_2;
                      }
                      func_0x00698cc8();
                      FUN_0077670c();
                      func_0x00698c5c();
                      func_0x006981d8();
                      func_0x00698cb0();
                      func_0x00698ca4();
                      func_0x00698d58();
                      func_0x00698c98();
                      func_0x00698c8c();
                      func_0x00698cbc();
                      func_0x00698c6c();
                      func_0x00698c80();
                      func_0x00698d60();
                      func_0x00698de8();
                      if ((extraout_x8 & 1) != 0) {
                        FUN_0068b130(extraout_x8 - 1);
                      }
                      func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
                      FUN_0069687c();
                      *(undefined4 *)(unaff_x19 + 4) = 0;
                      return unaff_x19;
                    }
                    plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)
                      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38
                    )(plVar1,puVar3);
                    return plVar1;
                  }
                  *(undefined4 *)*unaff_x19 = uVar4;
                }
                return param_2;
              }
              *(undefined **)*unaff_x19 = puVar3;
            }
          }
        }
        return param_2;
      }
      plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
    }
  }
  return plVar1;
}



/* Entry: 00696f88; end: 00697003;  */

long * FUN_00696f88(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00698d74();
  if ((int)param_2 == 3) {
    plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x006651b8();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698ed4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 == 7) {
      plVar1 = (long *)(ulong)*(byte *)*unaff_x19;
    }
    else {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      func_0x0053794c();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ec4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 == 5) {
        return param_2;
      }
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      func_0x006651b8();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 == 6) {
        return param_2;
      }
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      FUN_00698178();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 != 8) {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        func_0x0053794c();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 == 10) {
          return (long *)*unaff_x19;
        }
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        uVar4 = 0x9149c0;
        func_0x00682f78();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 == 1) {
          *(undefined4 *)*unaff_x19 = uVar4;
        }
        else {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          puVar3 = &UNK_009149e2;
          func_0x00698198();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698e94();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698d74();
          if ((int)param_2 == 2) {
            *(undefined **)*unaff_x19 = puVar3;
          }
          else {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            uVar4 = 0x9149fd;
            func_0x00698198();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698ea4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if ((int)param_2 == 3) {
              *(undefined4 *)*unaff_x19 = uVar4;
            }
            else {
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              puVar3 = &UNK_00914a18;
              func_0x006981b8();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698ed4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if ((int)param_2 != 4) {
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                func_0x006981b8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698e84();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                uVar5 = param_1;
                func_0x00698d74();
                uVar4 = (undefined4)uVar5;
                if ((int)param_2 == 5) {
                  *(undefined8 *)*unaff_x19 = param_1;
                }
                else {
                  func_0x00698cc8();
                  FUN_0077670c();
                  func_0x00698c5c();
                  func_0x006981b8();
                  func_0x00698cb0();
                  func_0x00698ca4();
                  func_0x00698d58();
                  func_0x00698c98();
                  func_0x00698c8c();
                  func_0x00698cbc();
                  func_0x00698c6c();
                  func_0x00698c80();
                  func_0x00698d60();
                  func_0x00698d74();
                  if ((int)param_2 != 6) {
                    func_0x00698cc8();
                    FUN_0077670c();
                    func_0x00698c5c();
                    uVar2 = 0x6c;
                    func_0x00698198();
                    func_0x00698cb0();
                    func_0x00698ca4();
                    func_0x00698d58();
                    func_0x00698c98();
                    func_0x00698c8c();
                    func_0x00698cbc();
                    func_0x00698c6c();
                    func_0x00698c80();
                    func_0x00698d60();
                    func_0x00698d74();
                    if ((int)param_2 == 7) {
                      *(undefined1 *)*unaff_x19 = uVar2;
                      return param_2;
                    }
                    func_0x00698cc8();
                    FUN_0077670c();
                    func_0x00698c5c();
                    puVar3 = &UNK_00914a87;
                    func_0x006981d8();
                    func_0x00698cb0();
                    func_0x00698ca4();
                    func_0x00698ec4();
                    func_0x00698d58();
                    func_0x00698c98();
                    func_0x00698c8c();
                    func_0x00698cbc();
                    func_0x00698c6c();
                    func_0x00698c80();
                    func_0x00698d60();
                    func_0x00698d74();
                    if ((int)param_2 != 9) {
                      func_0x00698cc8();
                      FUN_0077670c();
                      func_0x00698c5c();
                      uVar4 = 0x914aa1;
                      func_0x006981b8();
                      func_0x00698cb0();
                      func_0x00698ca4();
                      func_0x00698eb4();
                      func_0x00698d58();
                      func_0x00698c98();
                      func_0x00698c8c();
                      func_0x00698cbc();
                      func_0x00698c6c();
                      func_0x00698c80();
                      func_0x00698d60();
                      func_0x00698d74();
                      if ((int)param_2 == 8) {
                        *(undefined4 *)*unaff_x19 = uVar4;
                        return param_2;
                      }
                      func_0x00698cc8();
                      FUN_0077670c();
                      func_0x00698c5c();
                      func_0x006981d8();
                      func_0x00698cb0();
                      func_0x00698ca4();
                      func_0x00698d58();
                      func_0x00698c98();
                      func_0x00698c8c();
                      func_0x00698cbc();
                      func_0x00698c6c();
                      func_0x00698c80();
                      func_0x00698d60();
                      func_0x00698de8();
                      if ((extraout_x8 & 1) != 0) {
                        FUN_0068b130(extraout_x8 - 1);
                      }
                      func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
                      FUN_0069687c();
                      *(undefined4 *)(unaff_x19 + 4) = 0;
                      return unaff_x19;
                    }
                    plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)
                      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38
                    )(plVar1,puVar3);
                    return plVar1;
                  }
                  *(undefined4 *)*unaff_x19 = uVar4;
                }
                return param_2;
              }
              *(undefined **)*unaff_x19 = puVar3;
            }
          }
        }
        return param_2;
      }
      plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
    }
  }
  return plVar1;
}



/* Entry: 00697004; end: 0069707f;  */

long * FUN_00697004(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00698d74();
  if ((int)param_2 == 7) {
    plVar1 = (long *)(ulong)*(byte *)*unaff_x19;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x0053794c();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698ec4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 == 5) {
      return param_2;
    }
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x006651b8();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 == 6) {
      return param_2;
    }
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    FUN_00698178();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 != 8) {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      func_0x0053794c();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 == 10) {
        return (long *)*unaff_x19;
      }
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      uVar4 = 0x9149c0;
      func_0x00682f78();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 == 1) {
        *(undefined4 *)*unaff_x19 = uVar4;
      }
      else {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        puVar3 = &UNK_009149e2;
        func_0x00698198();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698e94();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 == 2) {
          *(undefined **)*unaff_x19 = puVar3;
        }
        else {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          uVar4 = 0x9149fd;
          func_0x00698198();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698ea4();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698d74();
          if ((int)param_2 == 3) {
            *(undefined4 *)*unaff_x19 = uVar4;
          }
          else {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            puVar3 = &UNK_00914a18;
            func_0x006981b8();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698ed4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if ((int)param_2 != 4) {
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              func_0x006981b8();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698e84();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              uVar5 = param_1;
              func_0x00698d74();
              uVar4 = (undefined4)uVar5;
              if ((int)param_2 == 5) {
                *(undefined8 *)*unaff_x19 = param_1;
              }
              else {
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                func_0x006981b8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698d74();
                if ((int)param_2 != 6) {
                  func_0x00698cc8();
                  FUN_0077670c();
                  func_0x00698c5c();
                  uVar2 = 0x6c;
                  func_0x00698198();
                  func_0x00698cb0();
                  func_0x00698ca4();
                  func_0x00698d58();
                  func_0x00698c98();
                  func_0x00698c8c();
                  func_0x00698cbc();
                  func_0x00698c6c();
                  func_0x00698c80();
                  func_0x00698d60();
                  func_0x00698d74();
                  if ((int)param_2 == 7) {
                    *(undefined1 *)*unaff_x19 = uVar2;
                    return param_2;
                  }
                  func_0x00698cc8();
                  FUN_0077670c();
                  func_0x00698c5c();
                  puVar3 = &UNK_00914a87;
                  func_0x006981d8();
                  func_0x00698cb0();
                  func_0x00698ca4();
                  func_0x00698ec4();
                  func_0x00698d58();
                  func_0x00698c98();
                  func_0x00698c8c();
                  func_0x00698cbc();
                  func_0x00698c6c();
                  func_0x00698c80();
                  func_0x00698d60();
                  func_0x00698d74();
                  if ((int)param_2 != 9) {
                    func_0x00698cc8();
                    FUN_0077670c();
                    func_0x00698c5c();
                    uVar4 = 0x914aa1;
                    func_0x006981b8();
                    func_0x00698cb0();
                    func_0x00698ca4();
                    func_0x00698eb4();
                    func_0x00698d58();
                    func_0x00698c98();
                    func_0x00698c8c();
                    func_0x00698cbc();
                    func_0x00698c6c();
                    func_0x00698c80();
                    func_0x00698d60();
                    func_0x00698d74();
                    if ((int)param_2 == 8) {
                      *(undefined4 *)*unaff_x19 = uVar4;
                      return param_2;
                    }
                    func_0x00698cc8();
                    FUN_0077670c();
                    func_0x00698c5c();
                    func_0x006981d8();
                    func_0x00698cb0();
                    func_0x00698ca4();
                    func_0x00698d58();
                    func_0x00698c98();
                    func_0x00698c8c();
                    func_0x00698cbc();
                    func_0x00698c6c();
                    func_0x00698c80();
                    func_0x00698d60();
                    func_0x00698de8();
                    if ((extraout_x8 & 1) != 0) {
                      FUN_0068b130(extraout_x8 - 1);
                    }
                    func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
                    FUN_0069687c();
                    *(undefined4 *)(unaff_x19 + 4) = 0;
                    return unaff_x19;
                  }
                  plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)
                    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38
                  )(plVar1,puVar3);
                  return plVar1;
                }
                *(undefined4 *)*unaff_x19 = uVar4;
              }
              return param_2;
            }
            *(undefined **)*unaff_x19 = puVar3;
          }
        }
      }
      return param_2;
    }
    plVar1 = (long *)(ulong)*(uint *)*unaff_x19;
  }
  return plVar1;
}



/* Entry: 00697080; end: 0069710b;  */

long * FUN_00697080(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00698d74();
  if ((int)param_2 == 5) {
    return param_2;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  func_0x006651b8();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698d74();
  if ((int)param_2 == 6) {
    return param_2;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  FUN_00698178();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698d74();
  if ((int)param_2 == 8) {
    return (long *)(ulong)*(uint *)*unaff_x19;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  func_0x0053794c();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698d74();
  if ((int)param_2 != 10) {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    uVar4 = 0x9149c0;
    func_0x00682f78();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 == 1) {
      *(undefined4 *)*unaff_x19 = uVar4;
    }
    else {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      puVar3 = &UNK_009149e2;
      func_0x00698198();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698e94();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 == 2) {
        *(undefined **)*unaff_x19 = puVar3;
      }
      else {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        uVar4 = 0x9149fd;
        func_0x00698198();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698ea4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 == 3) {
          *(undefined4 *)*unaff_x19 = uVar4;
        }
        else {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          puVar3 = &UNK_00914a18;
          func_0x006981b8();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698ed4();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698d74();
          if ((int)param_2 != 4) {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            func_0x006981b8();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698e84();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            uVar5 = param_1;
            func_0x00698d74();
            uVar4 = (undefined4)uVar5;
            if ((int)param_2 == 5) {
              *(undefined8 *)*unaff_x19 = param_1;
            }
            else {
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              func_0x006981b8();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if ((int)param_2 != 6) {
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                uVar2 = 0x6c;
                func_0x00698198();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698d74();
                if ((int)param_2 == 7) {
                  *(undefined1 *)*unaff_x19 = uVar2;
                  return param_2;
                }
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                puVar3 = &UNK_00914a87;
                func_0x006981d8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698ec4();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698d74();
                if ((int)param_2 != 9) {
                  func_0x00698cc8();
                  FUN_0077670c();
                  func_0x00698c5c();
                  uVar4 = 0x914aa1;
                  func_0x006981b8();
                  func_0x00698cb0();
                  func_0x00698ca4();
                  func_0x00698eb4();
                  func_0x00698d58();
                  func_0x00698c98();
                  func_0x00698c8c();
                  func_0x00698cbc();
                  func_0x00698c6c();
                  func_0x00698c80();
                  func_0x00698d60();
                  func_0x00698d74();
                  if ((int)param_2 == 8) {
                    *(undefined4 *)*unaff_x19 = uVar4;
                    return param_2;
                  }
                  func_0x00698cc8();
                  FUN_0077670c();
                  func_0x00698c5c();
                  func_0x006981d8();
                  func_0x00698cb0();
                  func_0x00698ca4();
                  func_0x00698d58();
                  func_0x00698c98();
                  func_0x00698c8c();
                  func_0x00698cbc();
                  func_0x00698c6c();
                  func_0x00698c80();
                  func_0x00698d60();
                  func_0x00698de8();
                  if ((extraout_x8 & 1) != 0) {
                    FUN_0068b130(extraout_x8 - 1);
                  }
                  func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
                  FUN_0069687c();
                  *(undefined4 *)(unaff_x19 + 4) = 0;
                  return unaff_x19;
                }
                plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)
                  PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38
                )(plVar1,puVar3);
                return plVar1;
              }
              *(undefined4 *)*unaff_x19 = uVar4;
            }
            return param_2;
          }
          *(undefined **)*unaff_x19 = puVar3;
        }
      }
    }
    return param_2;
  }
  return (long *)*unaff_x19;
}



/* Entry: 0069710c; end: 00697197;  */

long * FUN_0069710c(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulong)param_1 >> 0x20);
  uVar6 = (undefined4)param_1;
  func_0x00698d74();
  if ((int)param_2 == 6) {
    return param_2;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  FUN_00698178();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698d74();
  if ((int)param_2 == 8) {
    return (long *)(ulong)*(uint *)*unaff_x19;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  func_0x0053794c();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698d74();
  if ((int)param_2 == 10) {
    return (long *)*unaff_x19;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  uVar4 = 0x9149c0;
  func_0x00682f78();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698d74();
  if ((int)param_2 == 1) {
    *(undefined4 *)*unaff_x19 = uVar4;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    puVar5 = &UNK_009149e2;
    func_0x00698198();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698e94();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 == 2) {
      *(undefined **)*unaff_x19 = puVar5;
    }
    else {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      uVar4 = 0x9149fd;
      func_0x00698198();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ea4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 == 3) {
        *(undefined4 *)*unaff_x19 = uVar4;
      }
      else {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        puVar5 = &UNK_00914a18;
        func_0x006981b8();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698ed4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 != 4) {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          func_0x006981b8();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698e84();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          uVar1 = CONCAT44(uVar7,uVar6);
          func_0x00698d74();
          if ((int)param_2 == 5) {
            *(undefined8 *)*unaff_x19 = uVar1;
          }
          else {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            func_0x006981b8();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if ((int)param_2 != 6) {
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              uVar3 = 0x6c;
              func_0x00698198();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if ((int)param_2 == 7) {
                *(undefined1 *)*unaff_x19 = uVar3;
                return param_2;
              }
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              puVar5 = &UNK_00914a87;
              func_0x006981d8();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698ec4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if ((int)param_2 != 9) {
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                uVar6 = 0x914aa1;
                func_0x006981b8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698eb4();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698d74();
                if ((int)param_2 == 8) {
                  *(undefined4 *)*unaff_x19 = uVar6;
                  return param_2;
                }
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                func_0x006981d8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698de8();
                if ((extraout_x8 & 1) != 0) {
                  FUN_0068b130(extraout_x8 - 1);
                }
                func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
                FUN_0069687c();
                *(undefined4 *)(unaff_x19 + 4) = 0;
                return unaff_x19;
              }
              plVar2 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38
              )(plVar2,puVar5);
              return plVar2;
            }
            *(undefined4 *)*unaff_x19 = uVar6;
          }
          return param_2;
        }
        *(undefined **)*unaff_x19 = puVar5;
      }
    }
  }
  return param_2;
}



/* Entry: 00697198; end: 0069721b;  */

long * FUN_00697198(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00698d74();
  if ((int)param_2 == 8) {
    return (long *)(ulong)*(uint *)*unaff_x19;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  func_0x0053794c();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698d74();
  if ((int)param_2 == 10) {
    return (long *)*unaff_x19;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  uVar4 = 0x9149c0;
  func_0x00682f78();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698d74();
  if ((int)param_2 == 1) {
    *(undefined4 *)*unaff_x19 = uVar4;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    puVar3 = &UNK_009149e2;
    func_0x00698198();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698e94();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 == 2) {
      *(undefined **)*unaff_x19 = puVar3;
    }
    else {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      uVar4 = 0x9149fd;
      func_0x00698198();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ea4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 == 3) {
        *(undefined4 *)*unaff_x19 = uVar4;
      }
      else {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        puVar3 = &UNK_00914a18;
        func_0x006981b8();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698ed4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 != 4) {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          func_0x006981b8();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698e84();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          uVar5 = param_1;
          func_0x00698d74();
          uVar4 = (undefined4)uVar5;
          if ((int)param_2 == 5) {
            *(undefined8 *)*unaff_x19 = param_1;
          }
          else {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            func_0x006981b8();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if ((int)param_2 != 6) {
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              uVar2 = 0x6c;
              func_0x00698198();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if ((int)param_2 == 7) {
                *(undefined1 *)*unaff_x19 = uVar2;
                return param_2;
              }
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              puVar3 = &UNK_00914a87;
              func_0x006981d8();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698ec4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if ((int)param_2 != 9) {
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                uVar4 = 0x914aa1;
                func_0x006981b8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698eb4();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698d74();
                if ((int)param_2 == 8) {
                  *(undefined4 *)*unaff_x19 = uVar4;
                  return param_2;
                }
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                func_0x006981d8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698de8();
                if ((extraout_x8 & 1) != 0) {
                  FUN_0068b130(extraout_x8 - 1);
                }
                func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
                FUN_0069687c();
                *(undefined4 *)(unaff_x19 + 4) = 0;
                return unaff_x19;
              }
              plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38
              )(plVar1,puVar3);
              return plVar1;
            }
            *(undefined4 *)*unaff_x19 = uVar4;
          }
          return param_2;
        }
        *(undefined **)*unaff_x19 = puVar3;
      }
    }
  }
  return param_2;
}



/* Entry: 0069721c; end: 0069729b;  */

long * FUN_0069721c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar4;
  undefined8 uVar5;
  
  func_0x00698d74();
  if ((int)param_2 == 10) {
    return (long *)*unaff_x19;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  uVar4 = 0x9149c0;
  func_0x00682f78();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698d74();
  if ((int)param_2 == 1) {
    *(undefined4 *)*unaff_x19 = uVar4;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    puVar3 = &UNK_009149e2;
    func_0x00698198();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698e94();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if ((int)param_2 == 2) {
      *(undefined **)*unaff_x19 = puVar3;
    }
    else {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      uVar4 = 0x9149fd;
      func_0x00698198();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ea4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if ((int)param_2 == 3) {
        *(undefined4 *)*unaff_x19 = uVar4;
      }
      else {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        puVar3 = &UNK_00914a18;
        func_0x006981b8();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698ed4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if ((int)param_2 != 4) {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          func_0x006981b8();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698e84();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          uVar5 = param_1;
          func_0x00698d74();
          uVar4 = (undefined4)uVar5;
          if ((int)param_2 == 5) {
            *(undefined8 *)*unaff_x19 = param_1;
          }
          else {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            func_0x006981b8();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if ((int)param_2 != 6) {
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              uVar2 = 0x6c;
              func_0x00698198();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if ((int)param_2 == 7) {
                *(undefined1 *)*unaff_x19 = uVar2;
                return param_2;
              }
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              puVar3 = &UNK_00914a87;
              func_0x006981d8();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698ec4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if ((int)param_2 != 9) {
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                uVar4 = 0x914aa1;
                func_0x006981b8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698eb4();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698d74();
                if ((int)param_2 == 8) {
                  *(undefined4 *)*unaff_x19 = uVar4;
                  return param_2;
                }
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                func_0x006981d8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698de8();
                if ((extraout_x8 & 1) != 0) {
                  FUN_0068b130(extraout_x8 - 1);
                }
                func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
                FUN_0069687c();
                *(undefined4 *)(unaff_x19 + 4) = 0;
                return unaff_x19;
              }
              plVar1 = (long *)*unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38
              )(plVar1,puVar3);
              return plVar1;
            }
            *(undefined4 *)*unaff_x19 = uVar4;
          }
          return param_2;
        }
        *(undefined **)*unaff_x19 = puVar3;
      }
    }
  }
  return param_2;
}



/* Entry: 0069729c; end: 0069731b;  */

void FUN_0069729c(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar3;
  undefined8 uVar4;
  
  func_0x00698d74();
  if (param_2 == 1) {
    *(undefined4 *)*unaff_x19 = param_3;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    puVar2 = &UNK_009149e2;
    func_0x00698198();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698e94();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if (param_2 == 2) {
      *(undefined **)*unaff_x19 = puVar2;
    }
    else {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      uVar3 = 0x9149fd;
      func_0x00698198();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ea4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if (param_2 == 3) {
        *(undefined4 *)*unaff_x19 = uVar3;
      }
      else {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        puVar2 = &UNK_00914a18;
        func_0x006981b8();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698ed4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if (param_2 != 4) {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          func_0x006981b8();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698e84();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          uVar4 = param_1;
          func_0x00698d74();
          uVar3 = (undefined4)uVar4;
          if (param_2 == 5) {
            *(undefined8 *)*unaff_x19 = param_1;
          }
          else {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            func_0x006981b8();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if (param_2 != 6) {
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              uVar1 = 0x6c;
              func_0x00698198();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if (param_2 == 7) {
                *(undefined1 *)*unaff_x19 = uVar1;
                return;
              }
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              puVar2 = &UNK_00914a87;
              func_0x006981d8();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698ec4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if (param_2 != 9) {
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                uVar3 = 0x914aa1;
                func_0x006981b8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698eb4();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698d74();
                if (param_2 == 8) {
                  *(undefined4 *)*unaff_x19 = uVar3;
                  return;
                }
                func_0x00698cc8();
                FUN_0077670c();
                func_0x00698c5c();
                func_0x006981d8();
                func_0x00698cb0();
                func_0x00698ca4();
                func_0x00698d58();
                func_0x00698c98();
                func_0x00698c8c();
                func_0x00698cbc();
                func_0x00698c6c();
                func_0x00698c80();
                func_0x00698d60();
                func_0x00698de8();
                if ((extraout_x8 & 1) != 0) {
                  FUN_0068b130(extraout_x8 - 1);
                }
                func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
                FUN_0069687c();
                *(undefined4 *)(unaff_x19 + 4) = 0;
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38
              )(*unaff_x19,puVar2);
              return;
            }
            *(undefined4 *)*unaff_x19 = uVar3;
          }
          return;
        }
        *(undefined **)*unaff_x19 = puVar2;
      }
    }
  }
  return;
}



/* Entry: 0069731c; end: 0069739b;  */

void FUN_0069731c(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar3;
  undefined8 uVar4;
  
  func_0x00698d74();
  if (param_2 == 2) {
    *(undefined8 *)*unaff_x19 = param_3;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    uVar3 = 0x9149fd;
    func_0x00698198();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698ea4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if (param_2 == 3) {
      *(undefined4 *)*unaff_x19 = uVar3;
    }
    else {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      puVar2 = &UNK_00914a18;
      func_0x006981b8();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ed4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if (param_2 != 4) {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        func_0x006981b8();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698e84();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        uVar4 = param_1;
        func_0x00698d74();
        uVar3 = (undefined4)uVar4;
        if (param_2 == 5) {
          *(undefined8 *)*unaff_x19 = param_1;
        }
        else {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          func_0x006981b8();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698d74();
          if (param_2 != 6) {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            uVar1 = 0x6c;
            func_0x00698198();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if (param_2 == 7) {
              *(undefined1 *)*unaff_x19 = uVar1;
              return;
            }
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            puVar2 = &UNK_00914a87;
            func_0x006981d8();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698ec4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if (param_2 != 9) {
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              uVar3 = 0x914aa1;
              func_0x006981b8();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698eb4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698d74();
              if (param_2 == 8) {
                *(undefined4 *)*unaff_x19 = uVar3;
                return;
              }
              func_0x00698cc8();
              FUN_0077670c();
              func_0x00698c5c();
              func_0x006981d8();
              func_0x00698cb0();
              func_0x00698ca4();
              func_0x00698d58();
              func_0x00698c98();
              func_0x00698c8c();
              func_0x00698cbc();
              func_0x00698c6c();
              func_0x00698c80();
              func_0x00698d60();
              func_0x00698de8();
              if ((extraout_x8 & 1) != 0) {
                FUN_0068b130(extraout_x8 - 1);
              }
              func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
              FUN_0069687c();
              *(undefined4 *)(unaff_x19 + 4) = 0;
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
                      (*unaff_x19,puVar2);
            return;
          }
          *(undefined4 *)*unaff_x19 = uVar3;
        }
        return;
      }
      *(undefined **)*unaff_x19 = puVar2;
    }
  }
  return;
}



/* Entry: 0069739c; end: 0069741b;  */

void FUN_0069739c(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar3;
  undefined8 uVar4;
  
  func_0x00698d74();
  if (param_2 == 3) {
    *(undefined4 *)*unaff_x19 = param_3;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    puVar2 = &UNK_00914a18;
    func_0x006981b8();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698ed4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if (param_2 != 4) {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      func_0x006981b8();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698e84();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      uVar4 = param_1;
      func_0x00698d74();
      uVar3 = (undefined4)uVar4;
      if (param_2 == 5) {
        *(undefined8 *)*unaff_x19 = param_1;
      }
      else {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        func_0x006981b8();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if (param_2 != 6) {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          uVar1 = 0x6c;
          func_0x00698198();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698d74();
          if (param_2 == 7) {
            *(undefined1 *)*unaff_x19 = uVar1;
            return;
          }
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          puVar2 = &UNK_00914a87;
          func_0x006981d8();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698ec4();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698d74();
          if (param_2 != 9) {
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            uVar3 = 0x914aa1;
            func_0x006981b8();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698eb4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698d74();
            if (param_2 == 8) {
              *(undefined4 *)*unaff_x19 = uVar3;
              return;
            }
            func_0x00698cc8();
            FUN_0077670c();
            func_0x00698c5c();
            func_0x006981d8();
            func_0x00698cb0();
            func_0x00698ca4();
            func_0x00698d58();
            func_0x00698c98();
            func_0x00698c8c();
            func_0x00698cbc();
            func_0x00698c6c();
            func_0x00698c80();
            func_0x00698d60();
            func_0x00698de8();
            if ((extraout_x8 & 1) != 0) {
              FUN_0068b130(extraout_x8 - 1);
            }
            func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
            FUN_0069687c();
            *(undefined4 *)(unaff_x19 + 4) = 0;
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
                    (*unaff_x19,puVar2);
          return;
        }
        *(undefined4 *)*unaff_x19 = uVar3;
      }
      return;
    }
    *(undefined **)*unaff_x19 = puVar2;
  }
  return;
}



/* Entry: 0069741c; end: 0069749b;  */

void FUN_0069741c(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar3;
  undefined8 uVar4;
  
  func_0x00698d74();
  if (param_2 == 4) {
    *(undefined8 *)*unaff_x19 = param_3;
    return;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  func_0x006981b8();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698e84();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  uVar4 = param_1;
  func_0x00698d74();
  uVar3 = (undefined4)uVar4;
  if (param_2 == 5) {
    *(undefined8 *)*unaff_x19 = param_1;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x006981b8();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if (param_2 != 6) {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      uVar1 = 0x6c;
      func_0x00698198();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if (param_2 == 7) {
        *(undefined1 *)*unaff_x19 = uVar1;
        return;
      }
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      puVar2 = &UNK_00914a87;
      func_0x006981d8();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698ec4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if (param_2 != 9) {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        uVar3 = 0x914aa1;
        func_0x006981b8();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698eb4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if (param_2 == 8) {
          *(undefined4 *)*unaff_x19 = uVar3;
          return;
        }
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        func_0x006981d8();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698de8();
        if ((extraout_x8 & 1) != 0) {
          FUN_0068b130(extraout_x8 - 1);
        }
        func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
        FUN_0069687c();
        *(undefined4 *)(unaff_x19 + 4) = 0;
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
                (*unaff_x19,puVar2);
      return;
    }
    *(undefined4 *)*unaff_x19 = uVar3;
  }
  return;
}



/* Entry: 0069749c; end: 00697527;  */

void FUN_0069749c(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong extraout_x8;
  long *unaff_x19;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_1;
  func_0x00698d74();
  uVar3 = (undefined4)uVar4;
  if (param_2 == 5) {
    *(undefined8 *)*unaff_x19 = param_1;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    func_0x006981b8();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if (param_2 != 6) {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      uVar1 = 0x6c;
      func_0x00698198();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698d74();
      if (param_2 == 7) {
        *(undefined1 *)*unaff_x19 = uVar1;
      }
      else {
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        puVar2 = &UNK_00914a87;
        func_0x006981d8();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698ec4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if (param_2 == 9) {
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
                    (*unaff_x19,puVar2);
          return;
        }
        func_0x00698cc8();
        FUN_0077670c();
        func_0x00698c5c();
        uVar3 = 0x914aa1;
        func_0x006981b8();
        func_0x00698cb0();
        func_0x00698ca4();
        func_0x00698eb4();
        func_0x00698d58();
        func_0x00698c98();
        func_0x00698c8c();
        func_0x00698cbc();
        func_0x00698c6c();
        func_0x00698c80();
        func_0x00698d60();
        func_0x00698d74();
        if (param_2 != 8) {
          func_0x00698cc8();
          FUN_0077670c();
          func_0x00698c5c();
          func_0x006981d8();
          func_0x00698cb0();
          func_0x00698ca4();
          func_0x00698d58();
          func_0x00698c98();
          func_0x00698c8c();
          func_0x00698cbc();
          func_0x00698c6c();
          func_0x00698c80();
          func_0x00698d60();
          func_0x00698de8();
          if ((extraout_x8 & 1) != 0) {
            FUN_0068b130(extraout_x8 - 1);
          }
          func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
          FUN_0069687c();
          *(undefined4 *)(unaff_x19 + 4) = 0;
          return;
        }
        *(undefined4 *)*unaff_x19 = uVar3;
      }
      return;
    }
    *(undefined4 *)*unaff_x19 = uVar3;
  }
  return;
}



/* Entry: 00697528; end: 006975b3;  */

void FUN_00697528(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong extraout_x8;
  long *unaff_x19;
  
  func_0x00698d74();
  if (param_2 == 6) {
    *(undefined4 *)*unaff_x19 = param_1;
    return;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  uVar1 = 0x6c;
  func_0x00698198();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698d74();
  if (param_2 == 7) {
    *(undefined1 *)*unaff_x19 = uVar1;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    puVar3 = &UNK_00914a87;
    func_0x006981d8();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698ec4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if (param_2 == 9) {
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
                (*unaff_x19,puVar3);
      return;
    }
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    uVar2 = 0x914aa1;
    func_0x006981b8();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698eb4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if (param_2 != 8) {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      func_0x006981d8();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698de8();
      if ((extraout_x8 & 1) != 0) {
        FUN_0068b130(extraout_x8 - 1);
      }
      func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
      FUN_0069687c();
      *(undefined4 *)(unaff_x19 + 4) = 0;
      return;
    }
    *(undefined4 *)*unaff_x19 = uVar2;
  }
  return;
}



/* Entry: 006975b4; end: 00697633;  */

void FUN_006975b4(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong extraout_x8;
  long *unaff_x19;
  
  func_0x00698d74();
  if (param_1 == 7) {
    *(undefined1 *)*unaff_x19 = param_2;
  }
  else {
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    puVar2 = &UNK_00914a87;
    func_0x006981d8();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698ec4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if (param_1 == 9) {
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
                (*unaff_x19,puVar2);
      return;
    }
    func_0x00698cc8();
    FUN_0077670c();
    func_0x00698c5c();
    uVar1 = 0x914aa1;
    func_0x006981b8();
    func_0x00698cb0();
    func_0x00698ca4();
    func_0x00698eb4();
    func_0x00698d58();
    func_0x00698c98();
    func_0x00698c8c();
    func_0x00698cbc();
    func_0x00698c6c();
    func_0x00698c80();
    func_0x00698d60();
    func_0x00698d74();
    if (param_1 != 8) {
      func_0x00698cc8();
      FUN_0077670c();
      func_0x00698c5c();
      func_0x006981d8();
      func_0x00698cb0();
      func_0x00698ca4();
      func_0x00698d58();
      func_0x00698c98();
      func_0x00698c8c();
      func_0x00698cbc();
      func_0x00698c6c();
      func_0x00698c80();
      func_0x00698d60();
      func_0x00698de8();
      if ((extraout_x8 & 1) != 0) {
        FUN_0068b130(extraout_x8 - 1);
      }
      func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
      FUN_0069687c();
      *(undefined4 *)(unaff_x19 + 4) = 0;
      return;
    }
    *(undefined4 *)*unaff_x19 = uVar1;
  }
  return;
}



/* Entry: 00697634; end: 006976bb;  */

void FUN_00697634(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong extraout_x8;
  long *unaff_x19;
  
  func_0x00698d74();
  if (param_1 == 9) {
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
              (*unaff_x19,param_2);
    return;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  uVar1 = 0x914aa1;
  func_0x006981b8();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698eb4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698d74();
  if (param_1 == 8) {
    *(undefined4 *)*unaff_x19 = uVar1;
    return;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  func_0x006981d8();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698de8();
  if ((extraout_x8 & 1) != 0) {
    FUN_0068b130(extraout_x8 - 1);
  }
  func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
  FUN_0069687c();
  *(undefined4 *)(unaff_x19 + 4) = 0;
  return;
}



/* Entry: 006976bc; end: 00697743;  */

void FUN_006976bc(int param_1,undefined4 param_2)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  func_0x00698d74();
  if (param_1 == 8) {
    *(undefined4 *)*unaff_x19 = param_2;
    return;
  }
  func_0x00698cc8();
  FUN_0077670c();
  func_0x00698c5c();
  func_0x006981d8();
  func_0x00698cb0();
  func_0x00698ca4();
  func_0x00698d58();
  func_0x00698c98();
  func_0x00698c8c();
  func_0x00698cbc();
  func_0x00698c6c();
  func_0x00698c80();
  func_0x00698d60();
  func_0x00698de8();
  if ((extraout_x8 & 1) != 0) {
    FUN_0068b130(extraout_x8 - 1);
  }
  func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
  FUN_0069687c();
  *(undefined4 *)(unaff_x19 + 4) = 0;
  return;
}



/* Entry: 00697744; end: 0069777b;  */

void FUN_00697744(void)

{
  ulong extraout_x8;
  long *unaff_x19;
  
  func_0x00698de8();
  if ((extraout_x8 & 1) != 0) {
    FUN_0068b130(extraout_x8 - 1);
  }
  func_0x00698f38(*(undefined8 *)(*unaff_x19 + 0x28));
  FUN_0069687c();
  *(undefined4 *)(unaff_x19 + 4) = 0;
  return;
}



/* Entry: 0069777c; end: 006977a7;  */

void FUN_0069777c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_00a0f398;
  param_1[1] = 0;
  param_1[3] = 0x100000000;
  param_1[2] = 0x100000000;
  param_1[4] = &DAT_00810d88;
  param_1[5] = 0;
  param_1[6] = param_2;
  return;
}



/* Entry: 006977a8; end: 0069787b;  */

bool FUN_006977a8(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x21;
  
  func_0x00698e30();
  lVar1 = unaff_x21 + 0x10;
  func_0x00698da4();
  if ((unaff_x19 != (undefined8 *)0x0) && (lVar1 != 0)) {
    *(undefined4 *)(unaff_x19 + 1) = *(undefined4 *)(lVar1 + 0x30);
    *unaff_x19 = *(undefined8 *)(lVar1 + 0x28);
  }
  return lVar1 != 0;
}



/* Entry: 0069787c; end: 006978bb;  */

void FUN_0069787c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_006987e8(param_1 + 4,lVar1 + 8);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar1 + 0x30);
    param_1[8] = *(long *)(lVar1 + 0x28);
  }
  return;
}



/* Entry: 006978bc; end: 00697933;  */

bool FUN_006978bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1 + 0x10;
  func_0x00698da4();
  if (lVar1 == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    func_0x00697fe8(puVar2,param_2);
    func_0x00697e8c(param_1,puVar2);
    puVar3 = puVar2 + 1;
  }
  else {
    puVar2 = (undefined8 *)(lVar1 + 0x28);
    puVar3 = (undefined8 *)(lVar1 + 0x30);
  }
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)puVar3;
  *param_3 = *puVar2;
  return lVar1 == 0;
}



/* Entry: 00697934; end: 0069797f;  */

void FUN_00697934(void)

{
  ulong extraout_x8;
  ulong uVar1;
  long unaff_x19;
  undefined8 uStack_38;
  
  func_0x00698de8();
  uVar1 = extraout_x8;
  if ((extraout_x8 & 1) != 0) {
    uVar1 = *(ulong *)(extraout_x8 + 0xf);
  }
  if (uVar1 == 0) {
    func_0x00698f18();
    while (uStack_38 != 0) {
      FUN_00697dd8(uStack_38 + 0x28);
      func_0x00698df8();
    }
  }
  FUN_00697e3c(unaff_x19 + 0x10);
  return;
}



/* Entry: 00697980; end: 00697b1f;  */

void FUN_00697980(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  long extraout_x8;
  long alStack_48 [3];
  
  lVar1 = param_1;
  FUN_0069808c();
  FUN_0048fc74(alStack_48,param_2 + 0x10);
  while( true ) {
    if (alStack_48[0] == 0) {
      return;
    }
    lVar2 = lVar1;
    func_0x00698da4(lVar1,alStack_48[0] + 8);
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x10;
      func_0x00697fe8(lVar2,alStack_48[0] + 8);
      func_0x00697e8c(param_1,lVar2);
    }
    lVar2 = *(long *)(param_1 + 0x30);
    FUN_00699298();
    func_0x00698dc0();
    if ((bool)in_ZR) {
      lVar2 = *(long *)(lVar2 + 0x38) + 0x58;
    }
    else {
      lVar2 = 0;
    }
    FUN_00656c60(lVar2);
    func_0x00698e78();
    if (!(bool)in_CY || (bool)in_ZR) break;
    func_0x00698df8();
  }
                    /* WARNING: Could not recover jumptable at 0x00697a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_00827747)[extraout_x8] * 4 + 0x697a34))();
  return;
}



/* Entry: 00697b20; end: 00697c87;  */

void FUN_00697b20(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  func_0x00698dd0();
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 + 0xf);
  }
  uVar5 = *(ulong *)(unaff_x19 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 + 0xf);
  }
  if (uVar4 == uVar5) {
    uVar3 = *(undefined8 *)(unaff_x19 + 8);
    *(undefined8 *)(unaff_x19 + 8) = *(undefined8 *)(unaff_x20 + 8);
    *(undefined8 *)(unaff_x20 + 8) = uVar3;
  }
  else {
    lVar2 = 0;
    if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
      lVar2 = *(ulong *)(unaff_x20 + 8) - 1;
    }
    lVar6 = 0;
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      lVar6 = *(ulong *)(unaff_x19 + 8) - 1;
    }
    if (lVar2 != 0 || lVar6 != 0) {
      if (lVar2 == 0) {
        lVar2 = unaff_x20;
        FUN_0069687c();
        param_1 = lVar2;
      }
      if (lVar6 == 0) {
        func_0x00698e70();
        lVar6 = param_1;
      }
      func_0x00696970(lVar2,lVar6);
      uVar1 = *(undefined4 *)(lVar6 + 0x20);
      *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar2 + 0x20) = uVar1;
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != *(long *)(unaff_x19 + 0x28)) {
    uStack_68 = 0x100000000;
    uStack_70 = 0x100000000;
    puStack_60 = &DAT_00810d88;
    uStack_58 = 0;
    FUN_0048fc74(auStack_48,unaff_x20 + 0x10);
    FUN_006988e0(&uStack_70,auStack_48,0);
    FUN_00698898(unaff_x20 + 0x10,unaff_x19 + 0x10);
    FUN_00698898(unaff_x19 + 0x10,&uStack_70);
    FUN_006984b0(&uStack_70);
    return;
  }
  uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x20 + 0x10) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(unaff_x20 + 0x14);
  *(undefined4 *)(unaff_x20 + 0x14) = *(undefined4 *)(unaff_x19 + 0x14);
  *(undefined4 *)(unaff_x19 + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x18) = uVar1;
  uVar1 = *(undefined4 *)(unaff_x20 + 0x1c);
  *(undefined4 *)(unaff_x20 + 0x1c) = *(undefined4 *)(unaff_x19 + 0x1c);
  *(undefined4 *)(unaff_x19 + 0x1c) = uVar1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  return;
}



/* Entry: 00697c88; end: 00697c93;  */

void FUN_00697c88(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00697c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 00697c94; end: 00697d7f;  */

long FUN_00697c94(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lStack_48;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(ulong *)(param_1 + 8) - 1;
    func_0x00687de0(lVar5);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    func_0x00698f0c();
    lVar4 = lStack_48 + 8;
    FUN_00695ff8();
    lVar6 = (ulong)uVar1 * 0x18;
    uVar2 = 8 < (uint)lVar4;
    uVar3 = (uint)lVar4 == 9;
    if (!(bool)uVar3) {
      lVar6 = 0;
    }
    lVar5 = lVar5 + (ulong)uVar1 * 0x30 + lVar6;
    func_0x00698dac();
    FUN_006916c4();
    func_0x00698e78();
    if (!(bool)uVar2 || (bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00697d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_00827751)[extraout_x8] * 4 + 0x697d28))();
      return lVar4;
    }
  }
  return lVar5;
}



/* Entry: 00697d80; end: 00697d87;  */

undefined8 FUN_00697d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00697d88; end: 00697dd7;  */

void FUN_00697d88(long param_1)

{
  undefined8 uStack_38;
  
  func_0x00698f18();
  while (uStack_38 != 0) {
    FUN_00697dd8(uStack_38 + 0x28);
    func_0x00698df8();
  }
  FUN_00697e3c(param_1 + 0x10);
  FUN_00697e64(param_1);
  return;
}



/* Entry: 00697dd8; end: 00697e3b;  */

void FUN_00697dd8(long *param_1)

{
  switch((int)param_1[1]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    break;
  case 9:
    if (*param_1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    break;
  case 10:
    if ((long *)*param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00697e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 8))();
      return;
    }
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00697e3c; end: 00697e63;  */

/* WARNING: Removing unreachable block (ram,0x004904c8) */
/* WARNING: Removing unreachable block (ram,0x004904d8) */
/* WARNING: Removing unreachable block (ram,0x0048b264) */
/* WARNING: Removing unreachable block (ram,0x00437a68) */
/* WARNING: Removing unreachable block (ram,0x00437ab8) */
/* WARNING: Removing unreachable block (ram,0x00437adc) */
/* WARNING: Removing unreachable block (ram,0x00437ac0) */
/* WARNING: Removing unreachable block (ram,0x00437ae0) */
/* WARNING: Removing unreachable block (ram,0x00437af4) */
/* WARNING: Removing unreachable block (ram,0x00437afc) */
/* WARNING: Removing unreachable block (ram,0x00437b08) */
/* WARNING: Removing unreachable block (ram,0x00437a98) */
/* WARNING: Removing unreachable block (ram,0x00437aa8) */
/* WARNING: Removing unreachable block (ram,0x0048b29c) */

void FUN_00697e3c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (*(int *)((long)param_1 + 4) == 1) {
    return;
  }
  if (param_1[3] == 0) {
    lVar3 = param_1[2];
    uVar1 = *(uint *)((long)param_1 + 4);
    for (uVar4 = (ulong)*(uint *)((long)param_1 + 0xc); uVar4 < uVar1; uVar4 = uVar4 + 1) {
      puVar2 = *(undefined8 **)(lVar3 + uVar4 * 8);
      if (((ulong)puVar2 & 1) != 0) {
        puVar5 = param_1;
        FUN_005477d8(param_1,(long)puVar2 + -1);
        puVar2 = puVar5;
      }
      while (puVar2 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar2;
        FUN_006984f8(puVar2);
        __ZdlPv(puVar2);
        puVar2 = puVar5;
      }
    }
  }
  uVar1 = *(uint *)((long)param_1 + 4);
  puVar2 = (undefined8 *)param_1[2];
  uVar4 = (ulong)uVar1;
  while (0 < (long)uVar4) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    uVar4 = uVar4 - 1;
  }
  *(undefined4 *)param_1 = 0;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  return;
}



/* Entry: 00697e64; end: 00697e8b;  */

undefined8 FUN_00697e64(long param_1)

{
  uint extraout_w8;
  undefined4 extraout_var;
  undefined8 unaff_x19;
  
  FUN_006984b0(param_1 + 0x10);
  func_0x00698de8(param_1);
  if ((extraout_w8 & 1) != 0) {
    func_0x006980b4(CONCAT44(extraout_var,extraout_w8) + -1);
  }
  __ZdlPv();
  return unaff_x19;
}



/* Entry: 00697e8c; end: 0069808b;  */

void FUN_00697e8c(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00698dd0();
  lVar1 = *(long *)(param_1 + 0x30);
  FUN_00699298();
  func_0x00698dc0();
  if ((bool)in_ZR) {
    lVar1 = *(long *)(lVar1 + 0x38) + 0x58;
  }
  else {
    lVar1 = 0;
  }
  lVar2 = lVar1;
  FUN_00656c60();
  *(int *)(unaff_x19 + 8) = (int)lVar2;
  FUN_00656c60(lVar1);
  func_0x00698e78();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00697ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00827765)[extraout_x8] * 4 + 0x697ef8))();
    return;
  }
  return;
}



/* Entry: 0069808c; end: 006980db;  */

long FUN_0069808c(long param_1)

{
  FUN_0069638c();
  FUN_0069675c(param_1);
  return param_1 + 0x10;
}



/* Entry: 006980dc; end: 00698177;  */

undefined8 * FUN_006980dc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[3] = param_2;
  if (*(char *)(*(long *)(param_3 + 0x20) + 0x53) == '\x01') {
    uVar2 = *(undefined8 *)(param_3 + 0x38);
  }
  FUN_00656c60(uVar2);
  FUN_006906e4(param_1 + 4,uVar2);
  if (*(char *)(*(long *)(param_3 + 0x20) + 0x53) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_3 + 0x38) + 0x58;
  }
  else {
    iVar1 = 0;
  }
  FUN_00656c60();
  *(int *)(param_1 + 9) = iVar1;
  return param_1;
}



/* Entry: 00698178; end: 00698247;  */

void FUN_00698178(void)

{
  func_0x00698ce4();
  func_0x00698cf4();
  return;
}



/* Entry: 00698248; end: 006984af;  */

long * FUN_00698248(long *param_1)

{
  FUN_00567000(param_1 + 3);
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 006984b0; end: 006984f7;  */

long FUN_006984b0(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    FUN_00547c3c(param_1,0x800380028,FUN_006984f8);
  }
  return param_1;
}



/* Entry: 006984f8; end: 006984ff;  */

void FUN_006984f8(long param_1)

{
  if (*(int *)(param_1 + 0x20) == 9) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 00698500; end: 006985f7;  */

void FUN_00698500(int *param_1,uint param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  puVar3 = (ulong *)(ulong)(param_1[1] - 1U & param_2);
  puVar1 = *(ulong **)(*(long *)(param_1 + 4) + (long)puVar3 * 8);
  puVar4 = puVar3;
  if (puVar1 != param_3) {
    if ((puVar1 != (ulong *)0x0) && (((ulong)puVar1 & 1) == 0)) {
      do {
        puVar1 = (ulong *)*puVar1;
      } while (puVar1 != param_3 && puVar1 != (ulong *)0x0);
      if (puVar1 != (ulong *)0x0) goto LAB_0069858c;
    }
    puVar3 = param_3 + 1;
    FUN_006985f8(param_1,puVar3,&uStack_40);
    if ((*(ulong *)(*(long *)(param_1 + 4) + ((ulong)puVar3 & 0xffffffff) * 8) & 1) != 0) {
      FUN_00547824(param_1,puVar3,uStack_40,CONCAT44(uStack_34,uStack_38));
      goto LAB_0069859c;
    }
    puVar4 = (ulong *)((ulong)puVar3 & 0xffffffff);
  }
LAB_0069858c:
  FUN_00543f60();
  *(ulong **)(*(long *)(param_1 + 4) + (long)puVar4 * 8) = param_3;
LAB_0069859c:
  *param_1 = *param_1 + -1;
  if ((int)puVar3 == param_1[3]) {
    uVar2 = (ulong)puVar3 & 0xffffffff;
    while ((uVar2 < (uint)param_1[1] && (*(long *)(*(long *)(param_1 + 4) + uVar2 * 8) == 0))) {
      uVar2 = uVar2 + 1;
      param_1[3] = (int)uVar2;
    }
  }
  return;
}



/* Entry: 006985f8; end: 00698783;  */

undefined1  [16] FUN_006985f8(ulong param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined *puStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  
  puVar4 = auStack_50;
  puVar5 = auStack_50;
  uVar11 = param_1;
  lVar8 = param_2;
  FUN_00698784();
  uVar10 = uVar11 & 0xffffffff;
  uVar11 = *(ulong *)(*(long *)(param_1 + 0x10) + (uVar11 & 0xffffffff) * 8);
  if ((uVar11 != 0) && ((uVar11 & 1) == 0)) {
    uVar1 = *(uint *)(param_2 + 0x18) <= *(uint *)(uVar11 + 0x20);
    uVar2 = *(uint *)(uVar11 + 0x20) == *(uint *)(param_2 + 0x18);
    if ((bool)uVar2) {
      lVar3 = uVar11 + 8;
      FUN_00695ff8(lVar3);
      func_0x00698e78();
      if (!(bool)uVar1 || (bool)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00698668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_00827774)[extraout_x8] * 4 + 0x69866c))();
        auVar12._8_8_ = lVar8;
        auVar12._0_8_ = lVar3;
        return auVar12;
      }
      func_0x00698d68();
      FUN_0077670c(auStack_50);
      puVar6 = &UNK_00914afe;
      func_0x00537864(auStack_50);
      puVar4 = puVar5;
    }
    else {
      func_0x00698d68();
      FUN_0077670c(auStack_50);
      puVar6 = &UNK_00914ad7;
      func_0x00698198(auStack_50);
    }
    func_0x00698f24();
    ppuVar7 = &puStack_80;
    pcStack_58 = FUN_00698784;
    puVar9 = puVar6;
    uStack_70 = uVar11;
    uStack_68 = uVar10;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_00695f30();
    puStack_80 = puVar6;
    puStack_78 = puVar9;
    FUN_0054792c(&puStack_80);
    FUN_00490120(puVar4,ppuVar7);
    auVar14._8_8_ = ppuVar7;
    auVar14._0_8_ = puVar4;
    return auVar14;
  }
  if ((uVar11 & 1) == 0) {
    param_1 = 0;
    uVar11 = 0;
  }
  else {
    FUN_00695f30(param_2);
    FUN_00547ec0(param_1,uVar10,param_2,lVar8,param_3);
    uVar11 = uVar10 & 0xffffffff00000000;
    uVar10 = uVar10 & 0xffffffff;
  }
  auVar13._8_8_ = uVar11 | uVar10;
  auVar13._0_8_ = param_1;
  return auVar13;
}



/* Entry: 00698784; end: 006987e7;  */

void FUN_00698784(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_30;
  uVar2 = param_2;
  FUN_00695f30();
  uStack_30 = param_2;
  uStack_28 = uVar2;
  FUN_0054792c(&uStack_30);
  FUN_00490120(param_1,puVar1);
  return;
}



/* Entry: 006987e8; end: 00698897;  */

undefined8 * FUN_006987e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined8 auStack_30 [2];
  
  puVar3 = auStack_30;
  puVar1 = param_2;
  FUN_00695ff8();
  puVar2 = param_1;
  FUN_006906e4(param_1);
  switch(*(undefined4 *)(param_1 + 3)) {
  case 1:
  case 3:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    break;
  case 2:
  case 4:
    *param_1 = *param_2;
    break;
  case 5:
  case 6:
  case 8:
  case 10:
    func_0x00698d68();
    FUN_0077670c();
    func_0x00698e60();
    func_0x00698f24();
    pcStack_38 = FUN_00698898;
    if (puVar3 != puVar1) {
      puStack_50 = param_2;
      puStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      FUN_00697e3c(puVar3);
      func_0x00698f0c();
      FUN_006988e0(puVar3,auStack_68,0);
    }
    return puVar3;
  case 7:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    break;
  case 9:
                    /* WARNING: Could not recover jumptable at 0x00779c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__00998a38)
              (param_1,param_2);
    return param_1;
  }
  return puVar2;
}


