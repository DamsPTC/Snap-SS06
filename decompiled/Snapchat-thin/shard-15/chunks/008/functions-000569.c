/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bce1e0c; end: 10bce221b;  */

void FUN_10bce1e0c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong uVar10;
  long lVar11;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  undefined8 extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  ulong *unaff_x19;
  undefined8 *puVar12;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_110;
  byte bStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  byte bStack_e9;
  undefined8 auStack_e8 [3];
  undefined1 auStack_d0 [48];
  undefined8 *puStack_a0;
  byte *pbStack_98;
  undefined8 uStack_70;
  
  func_0x00010bce3d90();
  func_0x00010bce327c();
  uStack_70 = extraout_x8;
  func_0x00010bce3ba4();
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  bStack_e9 = 1;
  puVar8 = param_1;
  for (puVar12 = (undefined8 *)0x0; uVar5 = puVar12 == param_1, !(bool)uVar5;
      puVar12 = (undefined8 *)((long)puVar12 + 1)) {
    func_0x00010bce3e88();
    puStack_f8 = puVar8 + (long)puVar12 * 5;
    uStack_100 = 0;
    func_0x00010bce32e4();
    func_0x00010bce3c04();
    func_0x00010bce3c04();
    puVar7 = puStack_f8;
    func_0x00010bce3f00();
    param_3 = puVar8 + 4;
    puVar8 = &uStack_110;
    FUN_10bce221c(&uStack_110,puVar7);
    func_0x00010bce3878();
    uVar10 = extraout_x8_00;
    if ((extraout_x8_00 & 1) != 0) {
      do {
        func_0x00010bce3290();
      } while (extraout_w10 != 0);
      uVar10 = *unaff_x19;
    }
    if (uVar10 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
    func_0x00010bce3e68();
    if ((bStack_108 & 1) != 0) goto LAB_10bce2174;
    pbVar9 = &bStack_e9;
    func_0x00010bce37e0();
    func_0x00010bce360c();
    func_0x00010bce3c04();
    puVar7 = puStack_f8;
    func_0x00010bce3f00();
    lVar11 = puVar8[1];
    iVar6 = *(int *)(lVar11 + 0x48) + -3;
    cVar3 = SBORROW4(iVar6,0xf);
    cVar4 = *(int *)(lVar11 + 0x48) + -0x12 < 0;
    uVar5 = iVar6 == 0xf;
    switch(iVar6) {
    case 0:
    case 0xd:
    case 0xf:
      func_0x00010bce374c();
      FUN_10bce1c08();
      func_0x00010bce3804();
      if ((extraout_x8_01 & 1) == 0) {
        if (extraout_x8_01 == 0) {
          func_0x00010bce3498();
          FUN_10bcddea0(&puStack_a0);
          func_0x00010bce37c8();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_00 != 0);
      }
      break;
    case 1:
    case 3:
      func_0x00010bce374c();
      FUN_10bce1c5c();
      func_0x00010bce3804();
      if ((extraout_x8_03 & 1) == 0) {
        if (extraout_x8_03 == 0) {
          func_0x00010bce3498();
          FUN_10bcddef0(&puStack_a0);
          func_0x00010bce37d0();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_02 != 0);
      }
      break;
    case 2:
    case 0xc:
    case 0xe:
      FUN_10bce1d64(puVar7,*(undefined4 *)(lVar11 + 0x50));
      pbStack_98 = (byte *)CONCAT44(pbStack_98._4_4_,*(undefined4 *)puVar7);
      puStack_a0 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bcdff8c(param_2,(ulong)pbStack_98 & 0xffffffff);
      goto code_r0x00010bce2070;
    case 4:
    case 10:
      func_0x00010bce374c();
      FUN_10bce1cb0();
      func_0x00010bce3804();
      if ((extraout_x8_02 & 1) == 0) {
        if (extraout_x8_02 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd30(&puStack_a0);
          func_0x00010bcdffb4(param_2,(ulong)pbStack_98 & 0xffffffff);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_01 != 0);
      }
      break;
    case 5:
      func_0x00010bce374c();
      FUN_10bce1d08();
      func_0x00010bce3804();
      if ((extraout_x8_04 & 1) == 0) {
        if (extraout_x8_04 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfd48(&puStack_a0);
          uVar5 = (char)pbStack_98 == '\0';
          pcVar1 = "true";
          if ((bool)uVar5) {
            pcVar1 = "false";
          }
          func_0x00010bcdffdc(param_2,pcVar1);
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_03 != 0);
      }
      break;
    case 6:
      func_0x00010bce374c();
      FUN_10bce1714();
      func_0x00010bce3804();
      if ((extraout_x8_05 & 1) == 0) {
        if (extraout_x8_05 == 0) {
          func_0x00010bce3498();
          func_0x00010bcdfa04(&puStack_a0);
          func_0x00010bce36d4();
          goto code_r0x00010bce2070;
        }
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10_04 != 0);
      }
      break;
    default:
      puVar7 = puVar8;
      func_0x00010bce3ed0();
      puStack_a0 = puVar7;
      pbStack_98 = pbVar9;
      func_0x0001089ac660(auStack_d0,*(undefined4 *)(puVar8[1] + 0x48));
      func_0x00010bce3be4();
      func_0x00010bce38a4();
      uVar2 = extraout_x11;
      puVar8 = extraout_x10;
      if (cVar4 == cVar3) {
        uVar2 = extraout_x8_06;
        puVar8 = auStack_e8;
      }
      func_0x00010bce3630(puVar8,uVar2);
      func_0x00010bce3884();
      goto LAB_10bce2124;
    case 0xb:
      FUN_10bce1d64(puVar7,*(undefined4 *)(lVar11 + 0x50));
      pbStack_98 = (byte *)CONCAT44(pbStack_98._4_4_,*(undefined4 *)puVar7);
      puStack_a0 = (undefined8 *)0x0;
      func_0x00010bce32e4();
      func_0x00010bce3c0c();
      FUN_10bce1940(param_2,puVar8,(ulong)pbStack_98 & 0xffffffff,0);
code_r0x00010bce2070:
      func_0x00010bce3994();
      *unaff_x19 = 0;
      goto code_r0x00010bce212c;
    }
    func_0x00010bce3994();
LAB_10bce2124:
    if (*unaff_x19 != 0) {
LAB_10bce2184:
      func_0x00010bce36e8();
      func_0x00010bce36fc();
      goto LAB_10bce21b0;
    }
code_r0x00010bce212c:
    func_0x00010bce3498();
    func_0x00010bce3d9c(param_2);
    func_0x00010bce35f0();
    param_3 = param_2;
    func_0x00010bce373c(param_2," ");
    func_0x00010bce3f00();
    puVar8 = param_3;
    func_0x00010bce3c04();
    param_3 = param_3 + 4;
    func_0x00010bce35e4();
    FUN_10bce0f24();
    if (*unaff_x19 != 0) goto LAB_10bce2184;
    func_0x00010bce3498();
LAB_10bce2174:
    func_0x00010bce36e8();
    func_0x00010bce36fc();
  }
  func_0x00010bce344c();
  if ((bStack_e9 & 1) == 0) {
    func_0x00010bce360c();
  }
  func_0x00010bce336c();
  *unaff_x19 = 0;
LAB_10bce21b0:
  func_0x00010bce3244(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce3994();
  func_0x00010bce36e8();
  func_0x00010bce36fc();
  func_0x00010bce35bc();
  puVar12 = param_3;
  func_0x00010bce37ac();
  iVar6 = (int)puVar12;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar6 != 5) {
    *(undefined1 *)(puVar8 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_160,param_3);
  uStack_168 = uStack_160;
  if ((uStack_160 & 1) == 0) {
    if (uStack_160 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_160);
    FUN_10bce1db8(param_2,*(undefined4 *)(param_3[1] + 0x50));
    uStack_150 = 0;
    puStack_148 = param_2;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_150);
    puVar12 = puStack_148;
    FUN_10bce2338(puStack_148,uStack_158);
    uVar5 = SUB81(puVar12,0);
    uStack_168 = 0;
    func_0x000107c31550(&uStack_150);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10_05 != 0);
LAB_10bce22d0:
    uVar5 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_168 != 0) {
    FUN_10bcdff38(puVar8);
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(puVar8 + 1) = uVar5;
LAB_10bce22e8:
  *puVar8 = 0;
  return;
}



/* Entry: 10bce221c; end: 10bce2337;  */

void FUN_10bce221c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = param_3;
  func_0x00010bce37ac();
  iVar2 = (int)uVar3;
  FUN_10bcde0c0();
  func_0x00010bcdd9d8();
  if (iVar2 != 5) {
    *(undefined1 *)(unaff_x19 + 1) = 0;
    goto LAB_10bce22e8;
  }
  FUN_10bce41b0(&uStack_50,param_3);
  uStack_58 = uStack_50;
  if ((uStack_50 & 1) == 0) {
    if (uStack_50 != 0) goto LAB_10bce22d0;
    func_0x00010bce3798();
    FUN_10bcddffc(&uStack_50);
    FUN_10bce1db8();
    uStack_40 = 0;
    uStack_38 = unaff_x20;
    func_0x00010bce3798();
    FUN_10bce1b40(&uStack_40);
    FUN_10bce2338(uStack_38,uStack_48);
    uVar1 = (undefined1)uStack_38;
    uStack_58 = 0;
    func_0x000107c31550(&uStack_40);
  }
  else {
    do {
      func_0x00010bce3290();
    } while (extraout_w10 != 0);
LAB_10bce22d0:
    uVar1 = 0;
  }
  func_0x00010bce36fc();
  if (uStack_58 != 0) {
    FUN_10bcdff38();
    func_0x00010bce3798();
    return;
  }
  func_0x00010bce3798();
  *(undefined1 *)(unaff_x19 + 1) = uVar1;
LAB_10bce22e8:
  *unaff_x19 = 0;
  return;
}



/* Entry: 10bce2338; end: 10bce23b3;  */

bool FUN_10bce2338(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  func_0x00010bce369c();
  uVar3 = (ulong)*(int *)(param_2 + 0x28);
  lVar6 = 8;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar5 = uVar3;
    if (uVar4 - uVar3 == -1) break;
    lVar1 = unaff_x19;
    FUN_10bce47ec();
    uVar2 = (ulong)*(uint *)(*(long *)(lVar1 + lVar6) + 0x50);
    func_0x00010bce0568();
    uVar5 = uVar4 + 1;
    lVar6 = lVar6 + 0x20;
    uVar4 = uVar5;
  } while (uVar2 == 0);
  return uVar3 <= uVar5;
}



/* Entry: 10bce23b4; end: 10bce28cb;  */

undefined1  [16] FUN_10bce23b4(ulong *param_1)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined *puVar6;
  ulong *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 extraout_x8;
  undefined *extraout_x8_00;
  long extraout_x9;
  ulong *extraout_x9_00;
  undefined *puVar10;
  int extraout_w10;
  ulong *extraout_x10;
  undefined *extraout_x11;
  ulong *unaff_x19;
  ulong *unaff_x21;
  ulong *puVar11;
  ulong *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  byte abStack_e1 [25];
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_98;
  ulong *puStack_90;
  undefined8 uStack_68;
  
  func_0x00010bce3d90();
  func_0x00010bce327c();
  puVar6 = &DAT_10f62a9e8;
  uStack_68 = extraout_x8;
  FUN_10bce32b0();
  func_0x00010bce3b6c();
  abStack_e1[0] = 1;
  puVar7 = param_1;
  for (puVar11 = (ulong *)0x0; uVar4 = puVar11 == param_1, !(bool)uVar4;
      puVar11 = (ulong *)((long)puVar11 + 1)) {
    puVar7 = unaff_x21;
    FUN_10bcde0c0();
    func_0x00010bcdd9d8();
    uVar5 = (uint)puVar7;
    uVar1 = 4 < uVar5;
    cVar2 = SBORROW4(uVar5,5);
    cVar3 = (int)(uVar5 - 5) < 0;
    uVar4 = uVar5 == 5;
    if ((bool)uVar4) {
      puVar7 = unaff_x21;
      FUN_10bce41b0(&uStack_c8);
      *unaff_x19 = uStack_c8;
      if ((uStack_c8 & 1) == 0) {
        if (uStack_c8 != 0) goto LAB_10bce24a4;
        func_0x00010bce3498();
        puVar7 = &uStack_c8;
        FUN_10bcddffc();
        puVar6 = puStack_c0;
        func_0x00010bce3e88();
        puStack_90 = puVar7 + (long)puVar11 * 5;
        puStack_98 = (undefined *)0x0;
        func_0x00010bce32e4();
        func_0x00010bce3e80();
        puVar12 = puStack_90;
        FUN_10bce2338(puStack_90,puVar6);
        *unaff_x19 = 0;
        puVar7 = puVar12;
        func_0x00010bce37fc();
      }
      else {
        do {
          func_0x00010bce3290();
        } while (extraout_w10 != 0);
LAB_10bce24a4:
        puVar12 = (ulong *)0x0;
      }
      func_0x00010bce3ac0();
      if (*unaff_x19 != 0) goto LAB_10bce2850;
      func_0x00010bce3498();
      if (((ulong)puVar12 & 1) == 0) goto LAB_10bce24bc;
    }
    else {
LAB_10bce24bc:
      puVar12 = (ulong *)abStack_e1;
      func_0x00010bce37e0();
      func_0x00010bce360c();
      func_0x00010bce3c44(unaff_x21[1]);
      if (!(bool)uVar1 || (bool)uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bce24e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e606568)[extraout_x9] * 4 + 0x10bce24e4))();
        auVar13._8_8_ = puVar12;
        auVar13._0_8_ = puVar7;
        return auVar13;
      }
      puVar6 = &UNK_10f830e44;
      func_0x000107c284bc();
      puStack_98 = puVar6;
      puStack_90 = puVar12;
      func_0x0001089ac660(&uStack_c8,*(undefined4 *)(unaff_x21[1] + 0x48));
      func_0x00010bce3b7c();
      func_0x00010bce3d18();
      puVar6 = extraout_x11;
      puVar7 = extraout_x10;
      if (cVar3 == cVar2) {
        puVar6 = extraout_x8_00;
        puVar7 = extraout_x9_00;
      }
      func_0x00010bce3630(puVar7,puVar6);
      func_0x00010bce3bfc();
      if (*unaff_x19 != 0) goto LAB_10bce2850;
      func_0x00010bce3498();
    }
  }
  func_0x00010bce344c();
  if ((abStack_e1[0] & 1) == 0) {
    func_0x00010bce360c();
  }
  puVar6 = &DAT_10f62a9ea;
  func_0x00010bce336c();
  *unaff_x19 = 0;
LAB_10bce2850:
  func_0x00010bce3244(uStack_68);
  if ((bool)uVar4) {
    auVar16._8_8_ = puVar6;
    auVar16._0_8_ = puVar7;
    return auVar16;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_98;
  func_0x000107c31550();
  func_0x00010bce35bc();
  func_0x00010bce3eec();
  if ((ulong)ppuVar8 >> 0x3d == 0) {
    lVar9 = (long)ppuVar8 << 3;
    __Znwm(lVar9);
    auVar14._8_8_ = ppuVar8;
    auVar14._0_8_ = lVar9;
    return auVar14;
  }
  func_0x000104bd35f4();
  puVar10 = ppuVar8[2];
  while (puVar10 != ppuVar8[1]) {
    puVar10 = puVar10 + -8;
    ppuVar8[2] = puVar10;
  }
  if (*ppuVar8 != (undefined *)0x0) {
    __ZdlPv();
  }
  auVar15._8_8_ = puVar6;
  auVar15._0_8_ = ppuVar8;
  return auVar15;
}



/* Entry: 10bce28cc; end: 10bce28d7;  */

undefined1  [16] FUN_10bce28cc(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  func_0x00010bce3eec();
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10bce28d8; end: 10bce294b;  */

undefined1  [16] FUN_10bce28d8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10bce294c; end: 10bce2f0f;  */

void FUN_10bce294c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  ulong extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  ulong uVar6;
  long *extraout_x8_13;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long *extraout_x9_03;
  ulong uVar7;
  ulong extraout_x9_04;
  long *extraout_x9_05;
  long *extraout_x9_06;
  long *extraout_x9_07;
  long *extraout_x9_08;
  int extraout_w10;
  int extraout_w10_00;
  int iVar8;
  long lVar9;
  long extraout_x10;
  ulong extraout_x10_00;
  ulong uVar10;
  long extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  long extraout_x10_04;
  int extraout_w11;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar11;
  long *extraout_x11_01;
  long *extraout_x11_02;
  long *extraout_x11_03;
  long extraout_x11_04;
  long *extraout_x11_05;
  long extraout_x11_06;
  long extraout_x11_07;
  long extraout_x11_08;
  long *extraout_x12;
  long *extraout_x12_00;
  long *plVar12;
  long extraout_x12_01;
  ulong extraout_x12_02;
  ulong uVar13;
  long *extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar14;
  long extraout_x13;
  long extraout_x13_00;
  ulong extraout_x13_01;
  long lVar15;
  long extraout_x13_02;
  long *extraout_x13_03;
  long *extraout_x13_04;
  long lVar16;
  ulong extraout_x14;
  long extraout_x14_00;
  long extraout_x14_01;
  long lVar17;
  long extraout_x15;
  long *plVar18;
  long extraout_x16;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x26;
  long *unaff_x27;
  
  func_0x00010bce369c();
  do {
    func_0x00010bce403c();
    plVar18 = unaff_x26;
LAB_10bce2978:
    func_0x00010bce3f28((long)unaff_x19 - (long)plVar18);
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bce2bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e60657a)[extraout_x8] * 4 + 0x10bce2bf4))();
      return;
    }
    if ((long)extraout_x8 < 0x18) {
      if ((param_4 & 1) == 0) {
        plVar5 = plVar18;
        if (plVar18 == unaff_x19) {
          return;
        }
        while( true ) {
          plVar18 = plVar18 + 1;
          cVar2 = SBORROW8((long)plVar18,(long)unaff_x19);
          cVar3 = (long)plVar18 - (long)unaff_x19 < 0;
          if (plVar18 == unaff_x19) break;
          func_0x00010bce3d78(plVar5 + 1);
          lVar9 = extraout_x12_05;
          plVar4 = extraout_x8_13;
          plVar18 = extraout_x9_08;
          plVar5 = extraout_x8_13;
          if (cVar3 != cVar2) {
            do {
              *plVar4 = lVar9;
              lVar9 = plVar4[-2];
              plVar4 = plVar4 + -1;
            } while (*(int *)(extraout_x11_08 + 0x50) < *(int *)(*(long *)(lVar9 + 8) + 0x50));
            *plVar4 = extraout_x10_04;
          }
        }
        return;
      }
      if (plVar18 == unaff_x19) {
        return;
      }
      lVar9 = 8;
      plVar5 = plVar18;
      break;
    }
    if (param_3 == 0) {
      if (plVar18 == unaff_x19) {
        return;
      }
      uVar7 = extraout_x8 - 2 >> 1;
      uVar6 = extraout_x8;
      uVar10 = uVar7;
      goto LAB_10bce2cf4;
    }
    plVar5 = plVar18 + (extraout_x8 >> 1);
    if (extraout_x8 < 0x81) {
      func_0x00010bce3e14(plVar5,plVar18);
    }
    else {
      func_0x00010bce3e14(plVar18,plVar5);
      func_0x00010bce4000();
      FUN_10bce2f10();
      FUN_10bce2f10(plVar18 + 2,plVar5 + 1);
      plVar4 = unaff_x27;
      FUN_10bce2f10(unaff_x27,plVar5,plVar5 + 1);
      func_0x00010bce4084();
      plVar5 = plVar4;
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      func_0x00010bce3a7c(*plVar18);
      lVar9 = extraout_x8_01;
      lVar15 = extraout_x9_00;
      iVar8 = extraout_w10_00;
      if (extraout_w10_00 <= extraout_w11) {
        plVar5 = plVar18;
        if (extraout_w10_00 < *(int *)(*(long *)(*unaff_x21 + 8) + 0x50)) {
          do {
            plVar5 = plVar5 + 1;
          } while (*(int *)(*(long *)(*plVar5 + 8) + 0x50) <= extraout_w10_00);
        }
        else {
          plVar4 = plVar18 + 1;
          do {
            plVar5 = plVar4;
            cVar2 = SBORROW8((long)plVar5,(long)unaff_x19);
            cVar3 = (long)plVar5 - (long)unaff_x19 < 0;
            if (unaff_x19 <= plVar5) break;
            func_0x00010bce3960();
            lVar9 = extraout_x8_04;
            plVar4 = extraout_x11_01;
          } while (cVar3 == cVar2);
        }
        cVar2 = SBORROW8((long)plVar5,(long)unaff_x19);
        cVar3 = (long)plVar5 - (long)unaff_x19 < 0;
        plVar4 = unaff_x19;
        if (plVar5 < unaff_x19) {
          do {
            func_0x00010bce3960();
            lVar9 = extraout_x8_05;
            plVar4 = extraout_x11_02;
          } while (cVar3 != cVar2);
        }
        while( true ) {
          cVar2 = SBORROW8((long)plVar5,(long)plVar4);
          cVar3 = (long)plVar5 - (long)plVar4 < 0;
          if (plVar4 <= plVar5) break;
          lVar9 = *plVar5;
          *plVar5 = *plVar4;
          *plVar4 = lVar9;
          do {
            plVar5 = plVar5 + 1;
            func_0x00010bce3960();
          } while (cVar3 == cVar2);
          do {
            func_0x00010bce3960();
            lVar9 = extraout_x8_06;
            plVar4 = extraout_x11_03;
          } while (cVar3 != cVar2);
        }
        plVar4 = plVar5 + -1;
        in_CY = plVar4 <= plVar18;
        in_ZR = plVar18 == plVar4;
        if (!(bool)in_ZR) {
          *plVar18 = *plVar4;
        }
        param_4 = 0;
        *plVar4 = lVar9;
        plVar18 = plVar5;
        goto LAB_10bce2978;
      }
    }
    else {
      func_0x00010bce3a7c(*plVar18);
      lVar9 = extraout_x8_00;
      lVar15 = extraout_x9;
      iVar8 = extraout_w10;
    }
    lVar17 = 0;
    do {
      lVar16 = lVar17;
      lVar14 = *(long *)((long)plVar18 + lVar16 + 8);
      lVar17 = lVar16 + 8;
    } while (*(int *)(*(long *)(lVar14 + 8) + 0x50) < iVar8);
    unaff_x26 = (long *)((long)plVar18 + lVar17);
    cVar2 = SBORROW8(lVar17,8);
    cVar3 = lVar16 < 0;
    plVar4 = unaff_x19;
    if (lVar17 == 8) {
      do {
        cVar2 = SBORROW8((long)unaff_x26,(long)plVar4);
        cVar3 = (long)unaff_x26 - (long)plVar4 < 0;
        plVar12 = plVar4;
        plVar11 = unaff_x26;
        if (plVar4 <= unaff_x26) break;
        func_0x00010bce405c();
        lVar9 = extraout_x8_03;
        lVar15 = extraout_x9_02;
        plVar4 = extraout_x12_00;
        unaff_x26 = extraout_x11_00;
        lVar14 = extraout_x13_00;
        plVar12 = extraout_x12_00;
        plVar11 = extraout_x11_00;
      } while (cVar3 == cVar2);
    }
    else {
      do {
        func_0x00010bce405c();
        plVar4 = extraout_x12;
        lVar14 = extraout_x13;
        unaff_x26 = extraout_x11;
        plVar12 = extraout_x12;
        plVar11 = extraout_x11;
        lVar15 = extraout_x9_01;
        lVar9 = extraout_x8_02;
      } while (cVar3 == cVar2);
    }
    while (unaff_x26 < plVar4) {
      *unaff_x26 = *plVar4;
      *plVar4 = lVar14;
      do {
        unaff_x26 = unaff_x26 + 1;
        lVar14 = *unaff_x26;
      } while (*(int *)(*(long *)(lVar14 + 8) + 0x50) < *(int *)(lVar15 + 0x50));
      do {
        plVar4 = plVar4 + -1;
      } while (*(int *)(lVar15 + 0x50) <= *(int *)(*(long *)(*plVar4 + 8) + 0x50));
    }
    unaff_x27 = unaff_x26 + -1;
    if (plVar18 != unaff_x27) {
      *plVar18 = *unaff_x27;
    }
    *unaff_x27 = lVar9;
    in_CY = plVar12 <= plVar11;
    in_ZR = plVar11 == plVar12;
    plVar18 = unaff_x26;
    if (!(bool)in_CY) goto LAB_10bce2af4;
    func_0x00010bce3d3c();
    FUN_10bce3094();
    plVar4 = unaff_x26;
    FUN_10bce3094(unaff_x26,unaff_x19);
    if ((int)plVar4 == 0) goto code_r0x00010bce2af0;
    unaff_x19 = unaff_x27;
    if (((ulong)plVar5 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10bce2c78:
  plVar5 = plVar5 + 1;
  cVar2 = SBORROW8((long)plVar5,(long)unaff_x19);
  cVar3 = (long)plVar5 - (long)unaff_x19 < 0;
  if (plVar5 == unaff_x19) {
    return;
  }
  func_0x00010bce3d78(lVar9);
  lVar9 = extraout_x12_01;
  lVar15 = extraout_x8_07;
  if (cVar3 != cVar2) {
    do {
      *(long *)((long)plVar18 + lVar15) = lVar9;
      lVar17 = lVar15 + -8;
      plVar5 = plVar18;
      if (lVar17 == 0) goto LAB_10bce2ccc;
      lVar9 = *(long *)((long)plVar18 + lVar15 + -0x10);
      lVar15 = lVar17;
    } while (*(int *)(extraout_x11_04 + 0x50) < *(int *)(*(long *)(lVar9 + 8) + 0x50));
    plVar5 = (long *)((long)plVar18 + lVar17);
LAB_10bce2ccc:
    *plVar5 = extraout_x10;
  }
  lVar9 = extraout_x8_07 + 8;
  plVar5 = extraout_x9_03;
  goto LAB_10bce2c78;
LAB_10bce2cf4:
  do {
    cVar2 = SBORROW8(uVar7,uVar10);
    cVar3 = (long)(uVar7 - uVar10) < 0;
    if ((long)uVar10 <= (long)uVar7) {
      func_0x00010bce3ac8();
      if (cVar3 == cVar2) {
        plVar5 = extraout_x11_05;
        uVar13 = extraout_x12_02;
        lVar9 = *extraout_x11_05;
      }
      else {
        plVar5 = extraout_x11_05 + 1;
        uVar13 = extraout_x13_01;
        lVar9 = *plVar5;
        if (*(int *)(*(long *)(*plVar5 + 8) + 0x50) <=
            *(int *)(*(long *)(*extraout_x11_05 + 8) + 0x50)) {
          plVar5 = extraout_x11_05;
          uVar13 = extraout_x12_02;
          lVar9 = *extraout_x11_05;
        }
      }
      lVar15 = plVar18[extraout_x10_00];
      lVar17 = *(long *)(lVar15 + 8);
      uVar6 = extraout_x8_08;
      uVar7 = extraout_x9_04;
      uVar10 = extraout_x10_00;
      plVar4 = plVar18 + extraout_x10_00;
      if (*(int *)(lVar17 + 0x50) <= *(int *)(*(long *)(lVar9 + 8) + 0x50)) {
        do {
          plVar12 = plVar5;
          *plVar4 = lVar9;
          if ((long)extraout_x9_04 < (long)uVar13) break;
          uVar1 = uVar13 << 1 | 1;
          plVar4 = plVar18 + uVar1;
          uVar13 = uVar13 * 2 + 2;
          if ((long)uVar13 < (long)extraout_x8_08) {
            lVar9 = plVar4[1];
            plVar5 = plVar4 + 1;
            if (*(int *)(*(long *)(lVar9 + 8) + 0x50) <= *(int *)(*(long *)(*plVar4 + 8) + 0x50)) {
              plVar5 = plVar4;
              uVar13 = uVar1;
              lVar9 = *plVar4;
            }
          }
          else {
            plVar5 = plVar4;
            uVar13 = uVar1;
            lVar9 = *plVar4;
          }
          plVar4 = plVar12;
        } while (*(int *)(lVar17 + 0x50) <= *(int *)(*(long *)(lVar9 + 8) + 0x50));
        *plVar12 = lVar15;
      }
    }
    uVar10 = uVar10 - 1;
  } while (-1 < (long)uVar10);
  do {
    if ((long)uVar6 < 2) {
      return;
    }
    func_0x00010bce3fec();
    do {
      func_0x00010bce3f14();
      uVar6 = extraout_x14 & 1 | extraout_x13_02 << 1;
      if ((long)(extraout_x16 + 2U) < extraout_x8_09) {
        plVar18 = (long *)(extraout_x15 + 0x10);
        uVar7 = extraout_x16 + 2U;
        lVar9 = *plVar18;
        if (*(int *)(*(long *)(*plVar18 + 8) + 0x50) <=
            *(int *)(*(long *)(*(long *)(extraout_x15 + 8) + 8) + 0x50)) {
          plVar18 = extraout_x9_05;
          uVar7 = uVar6;
          lVar9 = *(long *)(extraout_x15 + 8);
        }
      }
      else {
        plVar18 = extraout_x9_05;
        uVar7 = uVar6;
        lVar9 = *extraout_x9_05;
      }
      *extraout_x12_03 = lVar9;
    } while ((long)uVar7 <= extraout_x11_06);
    unaff_x19 = unaff_x19 + -1;
    cVar2 = SBORROW8((long)plVar18,(long)unaff_x19);
    cVar3 = (long)plVar18 - (long)unaff_x19 < 0;
    if (plVar18 == unaff_x19) {
      *plVar18 = extraout_x10_01;
      lVar9 = extraout_x8_09;
    }
    else {
      func_0x00010bce3aa0();
      lVar9 = extraout_x8_10;
      if (cVar3 == cVar2) {
        func_0x00010bce39a4();
        lVar17 = *extraout_x9_06;
        lVar9 = extraout_x8_11;
        plVar18 = extraout_x9_06;
        lVar15 = extraout_x10_02;
        plVar5 = extraout_x13_03;
        lVar14 = extraout_x14_00;
        if (*(int *)(*(long *)(extraout_x14_00 + 8) + 0x50) < *(int *)(*(long *)(lVar17 + 8) + 0x50)
           ) {
          do {
            plVar4 = plVar5;
            *plVar18 = lVar14;
            if (lVar15 == 0) break;
            func_0x00010bce39a4();
            lVar9 = extraout_x8_12;
            plVar18 = extraout_x9_07;
            plVar4 = extraout_x9_07;
            lVar15 = extraout_x10_03;
            lVar17 = extraout_x11_07;
            plVar5 = extraout_x13_04;
            lVar14 = extraout_x14_01;
          } while (*(int *)(*(long *)(extraout_x14_01 + 8) + 0x50) <
                   *(int *)(extraout_x12_04 + 0x50));
          *plVar4 = lVar17;
        }
      }
    }
    uVar6 = lVar9 - 1;
  } while( true );
code_r0x00010bce2af0:
  if (((ulong)plVar5 & 1) == 0) {
LAB_10bce2af4:
    func_0x00010bce3d3c();
    FUN_10bce294c();
    param_4 = 0;
  }
  goto LAB_10bce2978;
}



/* Entry: 10bce2f10; end: 10bce2faf;  */

void FUN_10bce2f10(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x9;
  long lVar7;
  long lVar8;
  
  lVar6 = *param_2;
  iVar1 = *(int *)(*(long *)(lVar6 + 8) + 0x50);
  lVar5 = *param_1;
  lVar7 = *(long *)(lVar5 + 8);
  lVar8 = *param_3;
  iVar2 = *(int *)(*(long *)(lVar8 + 8) + 0x50);
  if (iVar1 < *(int *)(lVar7 + 0x50)) {
    if (iVar2 < iVar1) {
      *param_1 = lVar8;
    }
    else {
      *param_1 = lVar6;
      *param_2 = lVar5;
      if (*(int *)(lVar7 + 0x50) <= *(int *)(*(long *)(*param_3 + 8) + 0x50)) {
        return;
      }
      *param_2 = *param_3;
    }
    *param_3 = lVar5;
  }
  else {
    cVar3 = SBORROW4(iVar2,iVar1);
    cVar4 = iVar2 - iVar1 < 0;
    if (iVar2 < iVar1) {
      *param_2 = lVar8;
      *param_3 = lVar6;
      func_0x00010bce3a7c(*param_2);
      func_0x00010bce358c();
      if (cVar4 != cVar3) {
        *param_1 = extraout_x8;
        *param_2 = extraout_x9;
        return;
      }
    }
  }
  return;
}



/* Entry: 10bce2fb0; end: 10bce300f;  */

void FUN_10bce2fb0(void)

{
  char in_NG;
  char in_OV;
  undefined8 *unaff_x22;
  
  func_0x00010bce3640();
  FUN_10bce2f10();
  func_0x00010bce3a7c(*unaff_x22);
  func_0x00010bce358c();
  if (in_NG != in_OV) {
    func_0x00010bce3950();
    func_0x00010bce3a7c();
    func_0x00010bce358c();
    if (in_NG != in_OV) {
      func_0x00010bce3984();
      func_0x00010bce3a7c();
      func_0x00010bce358c();
      if (in_NG != in_OV) {
        func_0x00010bce4098();
      }
    }
  }
  return;
}



/* Entry: 10bce3010; end: 10bce3093;  */

void FUN_10bce3010(void)

{
  char in_NG;
  char in_OV;
  undefined8 *in_x4;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 *unaff_x22;
  
  func_0x00010bce3640();
  FUN_10bce2fb0();
  func_0x00010bce3a7c(*in_x4);
  func_0x00010bce358c();
  if (in_NG != in_OV) {
    *unaff_x22 = extraout_x8;
    *in_x4 = extraout_x9;
    func_0x00010bce3a7c(*unaff_x22);
    func_0x00010bce358c();
    if (in_NG != in_OV) {
      func_0x00010bce3950();
      func_0x00010bce3a7c();
      func_0x00010bce358c();
      if (in_NG != in_OV) {
        func_0x00010bce3984();
        func_0x00010bce3a7c();
        func_0x00010bce358c();
        if (in_NG != in_OV) {
          func_0x00010bce4098();
        }
      }
    }
  }
  return;
}



/* Entry: 10bce3094; end: 10bce31cf;  */

ulong FUN_10bce3094(long param_1,long param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar2;
  int iVar3;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar11;
  
  func_0x00010bce37ac();
  func_0x00010bce3f28(param_2 - param_1);
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar2 = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bce30cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e606580)[extraout_x8] * 4 + 0x10bce30d0))(1);
    return uVar2;
  }
  func_0x00010bce4050();
  func_0x00010bce3e14();
  iVar3 = 0;
  lVar4 = 0x18;
  plVar8 = unaff_x19 + 3;
  plVar11 = unaff_x19 + 2;
  do {
    plVar5 = plVar8;
    if (plVar5 == unaff_x20) {
      return 1;
    }
    lVar6 = *plVar5;
    lVar7 = *(long *)(lVar6 + 8);
    lVar9 = *plVar11;
    lVar10 = lVar4;
    if (*(int *)(lVar7 + 0x50) < *(int *)(*(long *)(lVar9 + 8) + 0x50)) {
      do {
        *(long *)((long)unaff_x19 + lVar10) = lVar9;
        lVar1 = lVar10 + -8;
        plVar8 = unaff_x19;
        if (lVar1 == 0) goto LAB_10bce318c;
        lVar9 = *(long *)((long)unaff_x19 + lVar10 + -0x10);
        lVar10 = lVar1;
      } while (*(int *)(lVar7 + 0x50) < *(int *)(*(long *)(lVar9 + 8) + 0x50));
      plVar8 = (long *)((long)unaff_x19 + lVar1);
LAB_10bce318c:
      *plVar8 = lVar6;
      iVar3 = iVar3 + 1;
      if (iVar3 == 8) {
        return (ulong)(plVar5 + 1 == unaff_x20);
      }
    }
    lVar4 = lVar4 + 8;
    plVar8 = plVar5 + 1;
    plVar11 = plVar5;
  } while( true );
}



/* Entry: 10bce31d0; end: 10bce31fb;  */

long * FUN_10bce31d0(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10bce31fc; end: 10bce32af;  */

void FUN_10bce31fc(void)

{
  FUN_10bdb28d0();
  func_0x00010ae6bd08();
  func_0x00010ae6bdd0();
  func_0x00010ae6bd08();
  return;
}



/* Entry: 10bce32b0; end: 10bce32d3;  */

void FUN_10bce32b0(void)

{
  long unaff_x20;
  
  func_0x00010bcdf610();
  *(int *)(unaff_x20 + 0x30) = *(int *)(unaff_x20 + 0x30) + 1;
  return;
}



/* Entry: 10bce32d4; end: 10bce3323;  */

void FUN_10bce32d4(void)

{
  func_0x00010bce3478();
  func_0x00010bce39cc();
  func_0x00010ae6bd08();
  return;
}



/* Entry: 10bce3324; end: 10bce334b;  */

void FUN_10bce3324(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10bce1790(param_3 + 8);
  return;
}



/* Entry: 10bce334c; end: 10bce40b7;  */

void FUN_10bce334c(void)

{
  return;
}



/* Entry: 10bce40b8; end: 10bce40ff;  */

undefined8 FUN_10bce40b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long extraout_x8;
  undefined8 extraout_x9;
  long extraout_x9_00;
  
  func_0x00010bce4188();
  func_0x00010bce4198();
  func_0x00010bce4188(extraout_x9);
  if (extraout_x9_00 == extraout_x8) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar1 = param_2;
  _strlen(param_2);
  func_0x00010ae6bd08(param_1,param_2,uVar1);
  return param_1;
}



/* Entry: 10bce4100; end: 10bce4137;  */

undefined8 FUN_10bce4100(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen(param_2);
  func_0x00010ae6bd08(param_1,param_2,uVar1);
  return param_1;
}



/* Entry: 10bce4138; end: 10bce417f;  */

void FUN_10bce4138(void)

{
  long extraout_x8;
  undefined8 extraout_x9;
  long extraout_x9_00;
  
  func_0x00010bce4188();
  func_0x00010bce4198();
  func_0x00010bce4188(extraout_x9);
  if (extraout_x9_00 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10bce4180; end: 10bce41af;  */

void FUN_10bce4180(void)

{
  return;
}



/* Entry: 10bce41b0; end: 10bce4297;  */

void FUN_10bce41b0(long param_1)

{
  ulong *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined4 *unaff_x20;
  undefined1 auStack_d8 [64];
  long lStack_98;
  ulong uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bce77e0();
  if ((*(uint *)(*(long *)(param_1 + 8) + 0x48) & 0xfffffffe) != 10) {
    FUN_10bdb2a08(&uStack_30,&UNK_10f8313dd,0x32,&UNK_10f831425,0x70);
    func_0x00010bce78e8();
    func_0x00010bce7890();
    puVar1 = &uStack_30;
    func_0x00010ae6c700();
    func_0x00010bce76bc();
    func_0x00010ae6c484(auStack_d8,puVar1[1]);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(lStack_98 + 0x118,*unaff_x20);
    func_0x00010ae6c56c(auStack_d8);
    return;
  }
  lVar2 = *(long *)(unaff_x20 + 6);
  if (lVar2 == 0) {
    func_0x00010bce7900();
    FUN_10bce42f0(&uStack_30);
    if ((uStack_30 & 1) == 0) {
      if (uStack_30 == 0) {
        func_0x00010bce766c();
        FUN_10bcddffc(&uStack_30);
        *(undefined8 *)(unaff_x20 + 6) = uStack_28;
        func_0x00010bce771c();
        lVar2 = *(long *)(unaff_x20 + 6);
        goto LAB_10bce4220;
      }
    }
    else {
      do {
        func_0x00010bce7534();
      } while (extraout_w10 != 0);
    }
    func_0x00010bce786c();
    func_0x00010bce766c();
    func_0x00010bce771c();
  }
  else {
LAB_10bce4220:
    *unaff_x19 = 0;
    unaff_x19[1] = lVar2;
  }
  return;
}



/* Entry: 10bce4298; end: 10bce42ef;  */

void FUN_10bce4298(long param_1)

{
  undefined4 *unaff_x20;
  undefined1 auStack_98 [64];
  long lStack_58;
  
  func_0x00010bce76bc();
  func_0x00010ae6c484(auStack_98,*(undefined8 *)(param_1 + 8));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(lStack_58 + 0x118,*unaff_x20);
  func_0x00010ae6c56c(auStack_98);
  return;
}



/* Entry: 10bce42f0; end: 10bce43f7;  */

void FUN_10bce42f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_60 [24];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bce77e0();
  puVar2 = &uStack_40;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_10bce49cc();
  if (param_1 == 0) {
    lVar1 = 0xd0;
    __Znwm();
    FUN_10bce63e0();
    lStack_48 = lVar1;
    func_0x000107c27958(auStack_60,&uStack_40);
    (**(code **)(**(long **)(unaff_x20 + 0x40) + 0x10))
              (&lStack_78,*(long **)(unaff_x20 + 0x40),auStack_60,lVar1 + 8);
    if (lStack_78 == 0) {
      func_0x00010bce766c();
      FUN_10bce6900(&lStack_78);
      uVar3 = *(undefined8 *)(lStack_70 + 0x18);
      *unaff_x19 = 0;
      unaff_x19[1] = uVar3;
    }
    else {
      func_0x00010bce786c();
      func_0x00010bce766c();
    }
    func_0x00010bce7770();
    func_0x00010bcdd75c(&lStack_48);
  }
  else {
    uVar3 = puVar2[3];
    *unaff_x19 = 0;
    unaff_x19[1] = uVar3;
  }
  return;
}



/* Entry: 10bce43f8; end: 10bce44e3;  */

void FUN_10bce43f8(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 ******ppppppuVar4;
  char cVar5;
  char cVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  long lVar15;
  ulong uVar16;
  int extraout_w10;
  undefined8 ******extraout_x10;
  long extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 *unaff_x19;
  ulong uVar17;
  long unaff_x20;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lStack_f8;
  undefined8 *****pppppuStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  ulong uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bce77e0();
  iVar2 = *(int *)(*(long *)(param_1 + 8) + 0x48);
  cVar5 = SBORROW4(iVar2,0xe);
  cVar6 = iVar2 + -0xe < 0;
  if (iVar2 != 0xe) {
    puVar13 = &UNK_10f8313dd;
    uVar14 = 0x3e;
    FUN_10bdb2a08(&uStack_30,&UNK_10f8313dd,0x3e,&UNK_10f831496,0x34);
    func_0x00010bce78e8();
    func_0x00010bce7890();
    puVar7 = &uStack_30;
    func_0x00010ae6c700();
    puVar12 = puVar7 + 4;
    Hint_Prefetch(*puVar12,0,2,0);
    puVar8 = puVar12;
    puStack_d0 = puVar13;
    uStack_c8 = uVar14;
    func_0x000107c284ac(*puVar12,puVar12);
    lVar15 = 0;
    uVar20 = puVar7[6];
    func_0x00010bce7798(*puVar12 >> 0xc ^ (ulong)puVar8 >> 7);
    uVar17 = extraout_x8_00;
    while( true ) {
      uVar17 = uVar17 & uVar20;
      func_0x00010bce778c();
      for (uVar16 = extraout_x8_01 & 0x8080808080808080; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16)
      {
        uVar3 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar19 = uVar17 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar20;
        puVar8 = (ulong *)(extraout_x11 + uVar19 * 0x20);
        cVar6 = (char)*(byte *)((long)puVar8 + 0x17) < '\0';
        cVar5 = '\0';
        uVar3 = puVar8[1];
        puVar9 = (ulong *)*puVar8;
        if (!(bool)cVar6) {
          uVar3 = (ulong)*(byte *)((long)puVar8 + 0x17);
          puVar9 = puVar8;
        }
        func_0x000107c27944(puVar9,uVar3,puVar13,uVar14);
        if (((ulong)puVar9 & 1) != 0) {
          uVar14 = *(undefined8 *)(puVar7[5] + uVar19 * 0x20 + 0x18);
          *extraout_x8 = 0;
          extraout_x8[1] = uVar14;
          return;
        }
      }
      func_0x00010bce7568();
      if ((extraout_x8_02 & 1) != 0) break;
      lVar15 = lVar15 + 8;
      uVar17 = lVar15 + uVar17;
    }
    puVar10 = (undefined8 *)0x90;
    __Znwm();
    *puVar10 = puVar7;
    func_0x00010bce6428(puVar10 + 1);
    puVar10[0xe] = &UNK_10e52b660;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puStack_d8 = puVar10;
    func_0x000107c27958(&pppppuStack_f0,&puStack_d0);
    (**(code **)(*(long *)puVar7[8] + 0x18))
              (&lStack_f8,(long *)puVar7[8],&pppppuStack_f0,puVar10 + 1);
    if (lStack_f8 == 0) {
      func_0x00010bce77f8();
      Hint_Prefetch(*puVar12,0,2,0);
      func_0x00010bce7480(*puVar12);
      uVar14 = extraout_x11_00;
      ppppppuVar4 = extraout_x10;
      if (cVar6 == cVar5) {
        uVar14 = extraout_x8_03;
        ppppppuVar4 = &pppppuStack_f0;
      }
      puVar8 = puVar12;
      func_0x000107c284ac(puVar12,ppppppuVar4,uVar14);
      lVar15 = 0;
      uVar20 = puVar7[6];
      func_0x00010bce7798(puVar7[4] >> 0xc ^ (ulong)puVar8 >> 7);
      uVar17 = extraout_x8_04;
      while( true ) {
        uVar17 = uVar17 & uVar20;
        func_0x00010bce778c();
        for (uVar16 = extraout_x8_05 & 0x8080808080808080; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16
            ) {
          uVar3 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          puVar18 = (ulong *)(uVar17 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar20
                             );
          puVar9 = (ulong *)(puVar7[5] + (long)puVar18 * 0x20);
          cVar6 = *(char *)((long)puVar9 + 0x17);
          uVar3 = uStack_e8;
          ppppppuVar4 = (undefined8 ******)pppppuStack_f0;
          if (-1 < (long)uStack_e0) {
            uVar3 = uStack_e0 >> 0x38;
            ppppppuVar4 = &pppppuStack_f0;
          }
          puVar11 = (ulong *)*puVar9;
          if (-1 < (long)cVar6) {
            puVar11 = puVar9;
          }
          uVar19 = puVar9[1];
          if (-1 < cVar6) {
            uVar19 = (long)cVar6;
          }
          func_0x000107c27944(puVar11,uVar19,ppppppuVar4,uVar3);
          if (((ulong)puVar11 & 1) != 0) goto LAB_10bce4778;
        }
        func_0x00010bce7568();
        if ((extraout_x8_06 & 1) != 0) break;
        lVar15 = lVar15 + 8;
        uVar17 = lVar15 + uVar17;
      }
      FUN_10bce6ba0(puVar12,puVar8);
      puVar10 = puStack_d8;
      plVar1 = (long *)(puVar7[5] + (long)puVar12 * 0x20);
      plVar1[2] = uStack_e0;
      plVar1[1] = uStack_e8;
      *plVar1 = (long)pppppuStack_f0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      pppppuStack_f0 = (undefined8 ******)0x0;
      puStack_d8 = (undefined8 *)0x0;
      plVar1[3] = (long)puVar10;
      puVar18 = puVar12;
LAB_10bce4778:
      uVar14 = *(undefined8 *)(puVar7[5] + (long)puVar18 * 0x20 + 0x18);
      *extraout_x8 = 0;
      extraout_x8[1] = uVar14;
    }
    else {
      FUN_10bce64c0(extraout_x8,&lStack_f8);
      func_0x00010bce77f8();
    }
    func_0x00010bce7770();
    func_0x00010bcdd930(&puStack_d8);
    return;
  }
  lVar15 = *(long *)(unaff_x20 + 0x18);
  if (lVar15 == 0) {
    func_0x00010bce7900();
    FUN_10bce44e4(&uStack_30);
    if ((uStack_30 & 1) == 0) {
      if (uStack_30 == 0) {
        func_0x00010bce766c();
        FUN_10bcde2ec(&uStack_30);
        *(undefined8 *)(unaff_x20 + 0x18) = uStack_28;
        func_0x00010bce771c();
        lVar15 = *(long *)(unaff_x20 + 0x18);
        goto LAB_10bce4464;
      }
    }
    else {
      do {
        func_0x00010bce7534();
      } while (extraout_w10 != 0);
    }
    FUN_10bce64c0();
    func_0x00010bce766c();
    func_0x00010bce771c();
  }
  else {
LAB_10bce4464:
    *unaff_x19 = 0;
    unaff_x19[1] = lVar15;
  }
  return;
}



/* Entry: 10bce44e4; end: 10bce47eb;  */

void FUN_10bce44e4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  char in_NG;
  char in_OV;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  ulong *puVar8;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 ***extraout_x10;
  long extraout_x11;
  undefined8 extraout_x11_00;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar12 = (ulong *)(param_2 + 0x20);
  Hint_Prefetch(*puVar12,0,2,0);
  puVar5 = puVar12;
  uStack_90 = param_3;
  uStack_88 = param_4;
  func_0x000107c284ac(*puVar12,puVar12);
  lVar15 = 0;
  uVar16 = *(ulong *)(param_2 + 0x30);
  func_0x00010bce7798(*puVar12 >> 0xc ^ (ulong)puVar5 >> 7);
  uVar11 = extraout_x8;
  while( true ) {
    uVar11 = uVar11 & uVar16;
    func_0x00010bce778c();
    for (uVar10 = extraout_x8_00 & 0x8080808080808080; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar11 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar16;
      puVar5 = (ulong *)(extraout_x11 + uVar14 * 0x20);
      in_NG = (char)*(byte *)((long)puVar5 + 0x17) < '\0';
      in_OV = '\0';
      uVar2 = puVar5[1];
      puVar6 = (ulong *)*puVar5;
      if (!(bool)in_NG) {
        uVar2 = (ulong)*(byte *)((long)puVar5 + 0x17);
        puVar6 = puVar5;
      }
      func_0x000107c27944(puVar6,uVar2,param_3,param_4);
      if (((ulong)puVar6 & 1) != 0) {
        uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x28) + uVar14 * 0x20 + 0x18);
        *param_1 = 0;
        param_1[1] = uVar9;
        return;
      }
    }
    func_0x00010bce7568();
    if ((extraout_x8_01 & 1) != 0) break;
    lVar15 = lVar15 + 8;
    uVar11 = lVar15 + uVar11;
  }
  plVar7 = (long *)0x90;
  __Znwm();
  *plVar7 = param_2;
  func_0x00010bce6428(plVar7 + 1);
  plVar7[0xe] = (long)&UNK_10e52b660;
  plVar7[0xf] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plStack_98 = plVar7;
  func_0x000107c27958(&ppuStack_b0,&uStack_90);
  (**(code **)(**(long **)(param_2 + 0x40) + 0x18))
            (&lStack_b8,*(long **)(param_2 + 0x40),&ppuStack_b0,plVar7 + 1);
  if (lStack_b8 == 0) {
    func_0x00010bce77f8();
    Hint_Prefetch(*puVar12,0,2,0);
    func_0x00010bce7480(*puVar12);
    uVar9 = extraout_x11_00;
    pppuVar3 = extraout_x10;
    if (in_NG == in_OV) {
      uVar9 = extraout_x8_02;
      pppuVar3 = &ppuStack_b0;
    }
    puVar5 = puVar12;
    func_0x000107c284ac(puVar12,pppuVar3,uVar9);
    lVar15 = 0;
    uVar16 = *(ulong *)(param_2 + 0x30);
    func_0x00010bce7798(*(ulong *)(param_2 + 0x20) >> 0xc ^ (ulong)puVar5 >> 7);
    uVar11 = extraout_x8_03;
    while( true ) {
      uVar11 = uVar11 & uVar16;
      func_0x00010bce778c();
      for (uVar10 = extraout_x8_04 & 0x8080808080808080; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10)
      {
        uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        puVar13 = (ulong *)(uVar11 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar16);
        puVar6 = (ulong *)(*(long *)(param_2 + 0x28) + (long)puVar13 * 0x20);
        cVar1 = *(char *)((long)puVar6 + 0x17);
        uVar2 = uStack_a8;
        pppuVar3 = (undefined8 ***)ppuStack_b0;
        if (-1 < (long)uStack_a0) {
          uVar2 = uStack_a0 >> 0x38;
          pppuVar3 = &ppuStack_b0;
        }
        puVar8 = (ulong *)*puVar6;
        if (-1 < (long)cVar1) {
          puVar8 = puVar6;
        }
        uVar14 = puVar6[1];
        if (-1 < cVar1) {
          uVar14 = (long)cVar1;
        }
        func_0x000107c27944(puVar8,uVar14,pppuVar3,uVar2);
        if (((ulong)puVar8 & 1) != 0) goto LAB_10bce4778;
      }
      func_0x00010bce7568();
      if ((extraout_x8_05 & 1) != 0) break;
      lVar15 = lVar15 + 8;
      uVar11 = lVar15 + uVar11;
    }
    FUN_10bce6ba0(puVar12,puVar5);
    plVar4 = plStack_98;
    plVar7 = (long *)(*(long *)(param_2 + 0x28) + (long)puVar12 * 0x20);
    plVar7[2] = uStack_a0;
    plVar7[1] = uStack_a8;
    *plVar7 = (long)ppuStack_b0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b0 = (undefined8 ***)0x0;
    plStack_98 = (long *)0x0;
    plVar7[3] = (long)plVar4;
    puVar13 = puVar12;
LAB_10bce4778:
    uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)puVar13 * 0x20 + 0x18);
    *param_1 = 0;
    param_1[1] = uVar9;
  }
  else {
    FUN_10bce64c0(param_1,&lStack_b8);
    func_0x00010bce77f8();
  }
  func_0x00010bce7770();
  func_0x00010bcdd930(&plStack_98);
  return;
}



/* Entry: 10bce47ec; end: 10bce48c3;  */

undefined1  [16] FUN_10bce47ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_38;
  
  uVar3 = *(uint *)(param_1 + 5);
  if ((0 < (int)uVar3) && (param_1[0x11] == 0)) {
    lVar6 = (ulong)uVar3 << 5;
    __Znam(lVar6);
    _bzero();
    uStack_38 = 0;
    func_0x00010bce651c(param_1 + 0x11,lVar6);
    func_0x00010bcdd838(&uStack_38);
    lVar4 = 0;
    lVar6 = 0;
    uVar3 = *(uint *)(param_1 + 5);
    for (lVar5 = (long)(int)uVar3; lVar5 != 0; lVar5 = lVar5 + -1) {
      puVar1 = (undefined8 *)(param_1[0x11] + lVar6);
      *puVar1 = *param_1;
      puVar2 = param_1 + 4;
      if ((param_1[4] & 1) != 0) {
        puVar2 = (undefined8 *)(param_1[4] + (lVar4 >> 0x1d) + 7);
      }
      puVar1[1] = *puVar2;
      puVar1[2] = param_1;
      lVar6 = lVar6 + 0x20;
      lVar4 = lVar4 + 0x100000000;
    }
  }
  auVar7._0_8_ = param_1[0x11];
  auVar7._8_8_ = (long)(int)uVar3;
  return auVar7;
}



/* Entry: 10bce48c4; end: 10bce4993;  */

long FUN_10bce48c4(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_68 [24];
  long lStack_50;
  int iStack_48;
  int iStack_44;
  
  iVar5 = (int)param_2;
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != 0) {
    iStack_44 = iVar5;
    if ((iVar2 < 8) || (*(long *)(param_1 + 200) == 0)) {
      lVar4 = param_1;
      FUN_10bce47ec();
      lVar3 = 0;
      for (param_2 = param_2 << 5; param_2 != 0; param_2 = param_2 + -0x20) {
        iStack_48 = *(int *)(*(long *)(lVar4 + 8) + 0x50);
        lVar1 = lVar4;
        if (iStack_48 != iVar5) {
          lVar1 = lVar3;
        }
        if (7 < iVar2) {
          lStack_50 = lVar4;
          FUN_10bce6534(auStack_68,param_1 + 0xb0,&iStack_48,&lStack_50);
        }
        lVar4 = lVar4 + 0x20;
        lVar3 = lVar1;
      }
      return lVar3;
    }
    param_1 = param_1 + 0xb0;
    piVar6 = &iStack_44;
    FUN_10bce4994();
    if (param_1 != 0) {
      return *(long *)(piVar6 + 2);
    }
  }
  return 0;
}



/* Entry: 10bce4994; end: 10bce49cb;  */

undefined1  [16] FUN_10bce4994(ulong *param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar10;
  byte bVar16;
  undefined1 auVar17 [16];
  
  Hint_Prefetch(*param_1,0,2,0);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297;
  lVar4 = 0;
  uVar5 = *param_1;
  uVar7 = uVar5 >> 0xc ^ uVar3 >> 7;
  bVar6 = (byte)uVar3 & 0x7f;
  while( true ) {
    uVar7 = uVar7 & param_1[2];
    uVar10 = *(undefined8 *)(uVar5 + uVar7);
    bVar9 = (byte)((ulong)uVar10 >> 8);
    bVar11 = (byte)((ulong)uVar10 >> 0x10);
    bVar12 = (byte)((ulong)uVar10 >> 0x18);
    bVar13 = (byte)((ulong)uVar10 >> 0x20);
    bVar14 = (byte)((ulong)uVar10 >> 0x28);
    bVar15 = (byte)((ulong)uVar10 >> 0x30);
    bVar16 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar3 = CONCAT17(-(bVar16 == bVar6),
                          CONCAT16(-(bVar15 == bVar6),
                                   CONCAT15(-(bVar14 == bVar6),
                                            CONCAT14(-(bVar13 == bVar6),
                                                     CONCAT13(-(bVar12 == bVar6),
                                                              CONCAT12(-(bVar11 == bVar6),
                                                                       CONCAT11(-(bVar9 == bVar6),
                                                                                -((byte)uVar10 ==
                                                                                 bVar6)))))))) &
                 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar8 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar7 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & param_1[2];
      if (*(uint *)(param_1[1] + uVar8 * 0x10) == *param_2) {
        auVar17._8_8_ = param_1[1] + uVar8 * 0x10;
        auVar17._0_8_ = uVar5 + uVar8;
        return auVar17;
      }
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar16 == 0x80),
                                CONCAT16(-(bVar15 == 0x80),
                                         CONCAT15(-(bVar14 == 0x80),
                                                  CONCAT14(-(bVar13 == 0x80),
                                                           CONCAT13(-(bVar12 == 0x80),
                                                                    CONCAT12(-(bVar11 == 0x80),
                                                                             CONCAT11(-(bVar9 == 
                                                  0x80),-((byte)uVar10 == 0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    uVar7 = lVar4 + uVar7;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 10bce49cc; end: 10bce4a0b;  */

long FUN_10bce49cc(ulong *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long *plVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  Hint_Prefetch(*param_1,0,2,0);
  puVar5 = param_1;
  func_0x000107c284ac(*param_1,param_1,*param_2,param_2[1]);
  func_0x00010bce76bc(param_1,param_2,puVar5);
  lVar7 = 0;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  func_0x00010bce7798(*param_1 >> 0xc ^ (ulong)puVar5 >> 7);
  uVar8 = extraout_x8;
  do {
    uVar8 = uVar8 & uVar3;
    func_0x00010bce778c();
    for (uVar9 = extraout_x8_00 & 0x8080808080808080; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar4 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar8 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar3;
      plVar1 = (long *)(uVar2 + uVar10 * 0x20);
      uVar4 = plVar1[1];
      plVar6 = (long *)*plVar1;
      if (-1 < (char)*(byte *)((long)plVar1 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)plVar1 + 0x17);
        plVar6 = plVar1;
      }
      func_0x000107c27944(plVar6,uVar4,*unaff_x20,unaff_x20[1]);
      if ((int)plVar6 != 0) {
        return *unaff_x19 + uVar10;
      }
    }
    func_0x00010bce7568();
    if ((extraout_x8_01 & 1) != 0) {
      return 0;
    }
    lVar7 = lVar7 + 8;
    uVar8 = lVar7 + uVar8;
  } while( true );
}



/* Entry: 10bce4a0c; end: 10bce51df;  */

void FUN_10bce4a0c(long *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined8 *****pppppuVar10;
  ulong *puVar11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint *puVar12;
  undefined *puVar13;
  uint *puStack_128;
  uint *puStack_120;
  undefined8 uStack_118;
  undefined8 ****ppppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 ****appppuStack_f8 [2];
  char cStack_e1;
  undefined8 ****ppppuStack_e0;
  ulong *puStack_d8;
  char cStack_c9;
  ulong *puStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_78;
  
  func_0x00010bce7494();
  puStack_128 = (uint *)0x0;
  puStack_120 = (uint *)0x0;
  uStack_118 = 0;
  puVar12 = puStack_120;
  uStack_78 = extraout_x8;
code_r0x00010bce4a74:
  puStack_120 = puVar12;
  pbVar1 = (byte *)*param_3;
  uVar3 = pbVar1 == (byte *)param_3[1];
  if ((pbVar1 < (byte *)param_3[1]) && (uVar7 = (uint)*pbVar1, -1 < (char)*pbVar1)) {
    *param_3 = (ulong)(pbVar1 + 1);
  }
  else {
    puVar11 = param_3;
    func_0x00010b4d4c50();
    uVar7 = (uint)puVar11;
  }
  *(uint *)(param_3 + 4) = uVar7;
  if (uVar7 == 0) {
LAB_10bce508c:
    *param_1 = 0;
    goto LAB_10bce5090;
  }
  uVar2 = uVar7 >> 3;
  uVar7 = uVar7 & 7;
  if ((uVar7 == 4) && (uVar3 = puStack_128 == puStack_120, (bool)uVar3)) {
    if ((param_4 >> 0x20 & 1) == 0) {
      FUN_10bce51e0(param_1);
    }
    else {
      uVar3 = uVar2 == (uint)param_4;
      if ((bool)uVar3) goto LAB_10bce508c;
      FUN_10bce5234(param_1);
    }
    goto LAB_10bce5090;
  }
  uVar4 = *param_2;
  FUN_10bce48c4();
  if ((puStack_128 == puStack_120) && (uVar4 != 0)) {
    uVar3 = uVar7 == 5;
    switch(uVar7) {
    case 0:
      func_0x00010bce74c0();
      FUN_10bce534c();
      break;
    case 1:
      func_0x00010bce74c0();
      FUN_10bce5538();
      break;
    case 2:
      iVar8 = *(int *)((long)param_3 + 0x34);
      *(int *)((long)param_3 + 0x34) = iVar8 + -1;
      uVar3 = iVar8 == 0;
      if (iVar8 < 1) {
        func_0x00010bce6354(param_1);
        break;
      }
      puVar11 = param_3;
      func_0x00010b4d414c();
      if ((int)puVar11 == 0) {
        func_0x00010bce770c();
        break;
      }
      iVar8 = *(int *)(*(long *)(uVar4 + 8) + 0x48);
      if (iVar8 == 9) {
code_r0x00010bce4b90:
        uVar3 = 1;
        ppppuStack_110 = (undefined8 *****)0x0;
        uStack_108 = 0;
        uStack_100 = 0;
        puVar11 = param_3;
        func_0x00010b4d41b4(param_3);
        puVar5 = param_3;
        func_0x00010b4d450c(param_3,&ppppuStack_110,puVar11);
        if (((ulong)puVar5 & 1) == 0) {
          func_0x00010bce770c();
code_r0x00010bce4eac:
          func_0x00010bce7864();
          break;
        }
        lVar9 = *(long *)(uVar4 + 8);
        if ((*(int *)(lVar9 + 0x48) == 9) && (*(int *)(*param_2 + 0x80) == 1)) {
          uVar3 = uStack_100._7_1_ == '\0';
          pppppuVar10 = (undefined8 *****)ppppuStack_110;
          if (-1 < uStack_100) {
            pppppuVar10 = &ppppuStack_110;
          }
          iVar8 = (int)pppppuVar10;
          func_0x000107c2ba54();
          if (iVar8 == 0) {
            func_0x00010bce636c(param_1);
            goto code_r0x00010bce4eac;
          }
          lVar9 = *(long *)(uVar4 + 8);
        }
        uVar7 = *(uint *)(lVar9 + 0x50);
        puVar13 = (undefined *)(ulong)uVar7;
        puVar11 = param_2 + 1;
        puVar6 = puVar13;
        func_0x00010bce6d80();
        puVar12 = (uint *)(param_2[2] + (long)puVar11 * 0x38);
        if (((ulong)puVar6 & 1) == 0) {
          if (*(int *)(*(long *)(uVar4 + 8) + 0x4c) == 3) {
            if (puVar12[0xc] == 0x10) {
              func_0x000107c27940(puVar12 + 2,&ppppuStack_110);
            }
            else {
              if (puVar12[0xc] != 7) {
                func_0x00010bce71f4(&puStack_b0,&DAT_10ddb8888);
                if ((uStack_a0 & 1) == 0) {
                  func_0x00010bce6ccc(&puStack_b0);
                }
                uVar4 = (ulong)puVar12[0xc];
                if (puVar12[0xc] == 0xffffffff) {
                  uVar4 = 0xffffffffffffffff;
                }
                func_0x00010bce6d10(&ppppuStack_e0,&UNK_10f8316d2,0x4e,puVar13,&puStack_b0,uVar4);
                uVar3 = cStack_c9 == '\0';
                pppppuVar10 = (undefined8 *****)ppppuStack_e0;
                if (-1 < cStack_c9) {
                  pppppuVar10 = &ppppuStack_e0;
                }
                func_0x00010bce7558(pppppuVar10);
                pppppuVar10 = &ppppuStack_e0;
                goto code_r0x00010bce500c;
              }
              puStack_b0 = (ulong *)0x0;
              puStack_a8 = (undefined *)0x0;
              uStack_a0 = 0;
              func_0x000107c27940(&puStack_b0,puVar12 + 2);
              func_0x000107c27940(&puStack_b0,&ppppuStack_110);
              if (puVar12[0xc] == 0x10) {
                func_0x000107c2797c(puVar12 + 2,&puStack_b0);
              }
              else {
                FUN_10bcdf79c(puVar12 + 2);
                *(undefined **)(puVar12 + 4) = puStack_a8;
                *(ulong **)(puVar12 + 2) = puStack_b0;
                *(ulong *)(puVar12 + 6) = uStack_a0;
                puStack_b0 = (ulong *)0x0;
                puStack_a8 = (undefined *)0x0;
                uStack_a0 = 0;
                puVar12[0xc] = 0x10;
              }
              func_0x000107c278a8(&puStack_b0);
            }
            goto code_r0x00010bce4c40;
          }
          func_0x00010bce74a4();
          puStack_b0 = puVar11;
          puStack_a8 = puVar6;
          func_0x0001089ac660(&ppppuStack_e0,puVar13);
          func_0x000107c2ba40(appppuStack_f8,&puStack_b0,&ppppuStack_e0);
          uVar3 = cStack_e1 == '\0';
          pppppuVar10 = (undefined8 *****)appppuStack_f8[0];
          if (-1 < cStack_e1) {
            pppppuVar10 = appppuStack_f8;
          }
          func_0x00010bce7558(pppppuVar10);
          pppppuVar10 = appppuStack_f8;
code_r0x00010bce500c:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppuVar10);
          if (*param_1 != 0) goto code_r0x00010bce4eac;
        }
        else {
          *puVar12 = uVar7;
          *(long *)(puVar12 + 6) = uStack_100;
          *(undefined8 *)(puVar12 + 4) = uStack_108;
          *(undefined8 *****)(puVar12 + 2) = ppppuStack_110;
          uStack_108 = 0;
          uStack_100 = 0;
          ppppuStack_110 = (undefined8 *****)0x0;
          puVar12[0xc] = 7;
code_r0x00010bce4c40:
          *param_1 = 0;
        }
        func_0x00010bce75bc();
        func_0x00010bce7864();
      }
      else {
        uVar3 = iVar8 == 0xb;
        if ((bool)uVar3) {
          func_0x00010bce7858();
          *param_1 = (long)ppppuStack_e0;
          if (((ulong)ppppuStack_e0 & 1) == 0) {
            if ((undefined8 *****)ppppuStack_e0 == (undefined8 *****)0x0) {
              func_0x00010bce75bc();
              FUN_10bcddffc(&ppppuStack_e0);
              FUN_10bcde95c(&puStack_b0,puStack_d8);
              *param_1 = (long)puStack_b0;
              puVar11 = puStack_b0;
              if (((ulong)puStack_b0 & 1) != 0) {
                do {
                  func_0x00010bce7534();
                } while (extraout_w10_00 != 0);
                puVar11 = (ulong *)*param_1;
              }
              if (puVar11 == (ulong *)0x0) {
                func_0x00010bce75bc();
                FUN_10bce0550(&puStack_b0);
                func_0x00010bce789c(param_1);
                if (*param_1 == 0) {
                  func_0x00010bce75bc();
                  func_0x00010bce7824();
                  func_0x00010bce773c();
                  goto code_r0x00010bce4c4c;
                }
              }
              func_0x00010bce7824();
            }
          }
          else {
            do {
              func_0x00010bce7534();
            } while (extraout_w10_01 != 0);
          }
          func_0x00010bce773c();
          break;
        }
        if (iVar8 == 0xc) goto code_r0x00010bce4b90;
        while (puVar11 = param_3, func_0x00010b4d41b4(), 0 < (int)puVar11) {
          uVar7 = *(uint *)(*(long *)(uVar4 + 8) + 0x48);
          uVar3 = uVar7 == 0x12;
          if (0x12 < uVar7) {
code_r0x00010bce5050:
            FUN_10bce6384(param_1,uVar7,*(undefined4 *)(*(long *)(uVar4 + 8) + 0x50));
            goto code_r0x00010bce4ec4;
          }
          uVar2 = 1 << (ulong)(uVar7 & 0x1f);
          uVar3 = (uVar2 & 0x66138) == 0;
          if ((bool)uVar3) {
            uVar3 = (uVar2 & 0x8084) == 0;
            if ((bool)uVar3) {
              uVar3 = (uVar2 & 0x10042) == 0;
              if ((bool)uVar3) goto code_r0x00010bce5050;
              func_0x00010bce74c0();
              FUN_10bce5538();
            }
            else {
              func_0x00010bce74c0();
              FUN_10bce5830();
            }
          }
          else {
            func_0x00010bce74c0();
            FUN_10bce534c();
          }
          if (*param_1 != 0) goto LAB_10bce5090;
          func_0x00010bce75bc();
        }
      }
code_r0x00010bce4c4c:
      func_0x00010b4d4184(param_3);
      *param_1 = 0;
      goto code_r0x00010bce4ecc;
    case 3:
      uVar3 = *(int *)(*(long *)(uVar4 + 8) + 0x48) == 10;
      if (!(bool)uVar3) {
        FUN_10bce5adc(param_1);
        goto LAB_10bce5090;
      }
      func_0x00010bce7858();
      *param_1 = (long)ppppuStack_e0;
      pppppuVar10 = (undefined8 *****)ppppuStack_e0;
      if (((ulong)ppppuStack_e0 & 1) != 0) {
        do {
          func_0x00010bce7534();
        } while (extraout_w10 != 0);
        pppppuVar10 = (undefined8 *****)*param_1;
      }
      if (pppppuVar10 == (undefined8 *****)0x0) {
        func_0x00010bce75bc();
        FUN_10bcddffc(&ppppuStack_e0);
        puStack_b0 = puStack_d8;
        puStack_a8 = &UNK_10e52b660;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        FUN_10bce4a0c(param_1,&puStack_b0,param_3,(ulong)uVar2 | 0x100000000);
        if (*param_1 == 0) {
          func_0x00010bce75bc();
          func_0x00010bce789c();
          if (*param_1 == 0) {
            func_0x00010bce75bc();
            func_0x00010bce781c();
            func_0x00010bce773c();
            puVar12 = puStack_120;
            goto code_r0x00010bce4a74;
          }
        }
        func_0x00010bce781c();
      }
      func_0x00010bce773c();
      goto LAB_10bce5090;
    case 4:
      FUN_10bdb2a00(&puStack_b0,&UNK_10f8313dd,0x134);
      FUN_10bce4100(&puStack_b0);
      func_0x00010ae6c700();
      goto LAB_10bce5190;
    case 5:
      func_0x00010bce74c0();
      FUN_10bce5830();
      break;
    default:
LAB_10bce50c4:
      uVar3 = uVar7 == 5;
      FUN_10bce52a8(param_1);
      goto LAB_10bce5090;
    }
code_r0x00010bce4ec4:
    if (*param_1 != 0) goto LAB_10bce5090;
code_r0x00010bce4ecc:
    func_0x00010bce75bc();
    puVar12 = puStack_120;
    goto code_r0x00010bce4a74;
  }
  switch(uVar7) {
  case 0:
    func_0x00010bce78dc();
    func_0x000106e5f2b8();
    if ((uVar4 & 1) != 0) break;
    func_0x00010bce770c();
code_r0x00010bce4e0c:
    iVar8 = 1;
    goto code_r0x00010bce4e10;
  case 1:
    func_0x00010bce78dc();
    func_0x00010b4d3900();
    if ((uVar4 & 1) == 0) {
      func_0x00010bce770c();
      goto code_r0x00010bce4e0c;
    }
    break;
  case 2:
    func_0x00010bce78dc();
    func_0x000106e5f1dc();
    if ((uVar4 & 1) == 0) {
      func_0x00010bce770c();
      goto code_r0x00010bce4e0c;
    }
    func_0x000106e5f5c4(param_3);
    break;
  case 3:
    func_0x000107c284b4(&puStack_128);
    puVar12 = puStack_120;
    goto code_r0x00010bce4a74;
  case 4:
    uVar3 = puStack_128 == puStack_120;
    if (!(bool)uVar3) goto code_r0x00010bce4d98;
    FUN_10bce51e0(param_1);
    goto LAB_10bce5090;
  case 5:
    func_0x00010bce78dc();
    func_0x00010b4d3924();
    if ((uVar4 & 1) == 0) {
      func_0x00010bce770c();
      goto code_r0x00010bce4e0c;
    }
    break;
  default:
    goto LAB_10bce50c4;
  }
  iVar8 = 2;
code_r0x00010bce4e10:
  uVar3 = iVar8 == 2;
  puVar12 = puStack_120;
  if (!(bool)uVar3) goto LAB_10bce5090;
  goto code_r0x00010bce4a74;
code_r0x00010bce4d98:
  uVar3 = uVar2 == puStack_120[-1];
  puVar12 = puStack_120 + -1;
  if (!(bool)uVar3) {
    FUN_10bce5234(param_1);
LAB_10bce5090:
    func_0x000107c27a18();
    func_0x00010bce73b4(uStack_78);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_e0);
LAB_10bce5190:
    func_0x00010bce7864();
    func_0x000107c27a18(&puStack_128);
    func_0x00010bce7560();
    func_0x00010bce76a8(&UNK_10f8315a5);
    FUN_10bcdfe50();
    func_0x00010bce7510();
    func_0x00010bce7558();
    func_0x00010bce7714();
    return;
  }
  goto code_r0x00010bce4a74;
}



/* Entry: 10bce51e0; end: 10bce5233;  */

void FUN_10bce51e0(void)

{
  func_0x00010bce76a8(&UNK_10f8315a5);
  FUN_10bcdfe50();
  func_0x00010bce7510();
  func_0x00010bce7558();
  func_0x00010bce7714();
  return;
}



/* Entry: 10bce5234; end: 10bce528f;  */

void FUN_10bce5234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  FUN_10bce6430(auStack_38,&UNK_10f8315d3,0x31,param_2,param_3);
  func_0x00010bce73c8();
  func_0x00010bce7558();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10bce5290; end: 10bce52a7;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

long * FUN_10bce5290(long *param_1)

{
  long lVar1;
  
  *param_1 = 0xc;
  lVar1 = 0x28;
  func_0x000107c60e20();
  func_0x000107c2b9d0();
  *param_1 = lVar1 + 1;
  return param_1;
}



/* Entry: 10bce52a8; end: 10bce534b;  */

void FUN_10bce52a8(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  int extraout_w8;
  int extraout_w8_00;
  undefined8 extraout_x8;
  ulong auStack_f0 [3];
  byte bStack_d1;
  long alStack_a0 [2];
  undefined1 uStack_89;
  undefined1 auStack_88 [48];
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_28;
  
  plVar4 = alStack_a0;
  uVar5 = param_2;
  func_0x00010bce73e0();
  puVar3 = &UNK_10f831605;
  uStack_28 = extraout_x8;
  func_0x000107c284bc();
  puStack_58 = puVar3;
  uStack_50 = uVar5;
  func_0x0001089ac660(auStack_88,param_2);
  func_0x000107c2ba40(alStack_a0,&puStack_58,auStack_88);
  func_0x00010bce75f8(uStack_89);
  func_0x00010bce7558();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce73b4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  uVar1 = *(uint *)(*(long *)(param_4 + 8) + 0x48);
  if (uVar1 < 0x13) {
    uVar2 = 1 << (ulong)(uVar1 & 0x1f);
    if ((uVar2 & 0x26020) != 0) {
      func_0x000106e5f1dc(param_3,auStack_f0);
      if ((param_3 & 1) == 0) {
LAB_10bce544c:
        func_0x00010bce7408();
        return;
      }
      func_0x00010bce78e8();
      if (extraout_w8_00 == 0xd) {
        func_0x00010bce74d4();
        FUN_10bce5e00();
      }
      else {
        if (extraout_w8_00 == 0x11) {
          auStack_f0[0] =
               CONCAT44(auStack_f0[0]._4_4_,-((uint)auStack_f0[0] & 1) ^ (uint)auStack_f0[0] >> 1);
        }
        func_0x00010bce74d4();
        FUN_10bce5f48();
      }
LAB_10bce54e0:
      if (*plVar4 == 0) {
        func_0x00010bce75bc();
        *plVar4 = 0;
      }
      return;
    }
    if ((uVar2 & 0x40018) != 0) {
      func_0x000106e5f2b8(param_3,auStack_f0);
      if ((param_3 & 1) == 0) goto LAB_10bce544c;
      func_0x00010bce78e8();
      if (extraout_w8 == 4) {
        func_0x00010bce74d4();
        FUN_10bce6090();
      }
      else {
        if (extraout_w8 == 0x12) {
          auStack_f0[0] = -(auStack_f0[0] & 1) ^ auStack_f0[0] >> 1;
        }
        func_0x00010bce74d4();
        FUN_10bce61d8();
      }
      goto LAB_10bce54e0;
    }
    if (uVar1 == 8) {
      func_0x00010b4d4490(param_3,&bStack_d1,1);
      if ((param_3 & 1) == 0) goto LAB_10bce544c;
      if (bStack_d1 == 1) {
        func_0x00010bce74d4();
      }
      else {
        if (bStack_d1 != 0) {
          func_0x00010bce76a8(&UNK_10f8314da);
          FUN_10bce40b8();
          func_0x00010bce7510();
          func_0x00010bce7558();
          goto LAB_10bce547c;
        }
        func_0x00010bce74d4();
      }
      FUN_10bce5c9c();
      goto LAB_10bce54e0;
    }
  }
  FUN_10bce6320(auStack_f0,&UNK_10f8314f5,0x38,uVar1,*(undefined4 *)(*(long *)(param_4 + 8) + 0x50))
  ;
  func_0x00010bce7510();
  func_0x00010bce7558();
LAB_10bce547c:
  func_0x00010bce7714();
  return;
}



/* Entry: 10bce534c; end: 10bce5537;  */

void FUN_10bce534c(long *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int extraout_w8;
  int extraout_w8_00;
  ulong auStack_50 [3];
  byte bStack_31;
  
  uVar1 = *(uint *)(*(long *)(param_4 + 8) + 0x48);
  if (uVar1 < 0x13) {
    uVar2 = 1 << (ulong)(uVar1 & 0x1f);
    if ((uVar2 & 0x26020) != 0) {
      func_0x000106e5f1dc(param_3,auStack_50);
      if ((param_3 & 1) == 0) {
LAB_10bce544c:
        func_0x00010bce7408();
        return;
      }
      func_0x00010bce78e8();
      if (extraout_w8_00 == 0xd) {
        func_0x00010bce74d4();
        FUN_10bce5e00();
      }
      else {
        if (extraout_w8_00 == 0x11) {
          auStack_50[0] =
               CONCAT44(auStack_50[0]._4_4_,-((uint)auStack_50[0] & 1) ^ (uint)auStack_50[0] >> 1);
        }
        func_0x00010bce74d4();
        FUN_10bce5f48();
      }
LAB_10bce54e0:
      if (*param_1 == 0) {
        func_0x00010bce75bc();
        *param_1 = 0;
      }
      return;
    }
    if ((uVar2 & 0x40018) != 0) {
      func_0x000106e5f2b8(param_3,auStack_50);
      if ((param_3 & 1) == 0) goto LAB_10bce544c;
      func_0x00010bce78e8();
      if (extraout_w8 == 4) {
        func_0x00010bce74d4();
        FUN_10bce6090();
      }
      else {
        if (extraout_w8 == 0x12) {
          auStack_50[0] = -(auStack_50[0] & 1) ^ auStack_50[0] >> 1;
        }
        func_0x00010bce74d4();
        FUN_10bce61d8();
      }
      goto LAB_10bce54e0;
    }
    if (uVar1 == 8) {
      func_0x00010b4d4490(param_3,&bStack_31,1);
      if ((param_3 & 1) == 0) goto LAB_10bce544c;
      if (bStack_31 == 1) {
        func_0x00010bce74d4();
      }
      else {
        if (bStack_31 != 0) {
          func_0x00010bce76a8(&UNK_10f8314da);
          FUN_10bce40b8();
          func_0x00010bce7510();
          func_0x00010bce7558();
          goto LAB_10bce547c;
        }
        func_0x00010bce74d4();
      }
      FUN_10bce5c9c();
      goto LAB_10bce54e0;
    }
  }
  FUN_10bce6320(auStack_50,&UNK_10f8314f5,0x38,uVar1,*(undefined4 *)(*(long *)(param_4 + 8) + 0x50))
  ;
  func_0x00010bce7510();
  func_0x00010bce7558();
LAB_10bce547c:
  func_0x00010bce7714();
  return;
}



/* Entry: 10bce5538; end: 10bce582f;  */

void FUN_10bce5538(long *****param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long ***ppplVar9;
  long lVar10;
  long *****ppppplVar11;
  long *****ppppplVar12;
  undefined8 extraout_x8;
  long *****extraout_x8_00;
  long *****extraout_x8_01;
  long *****extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined4 *extraout_x10;
  long *****extraout_x11;
  long *****extraout_x11_00;
  long *****extraout_x11_01;
  long *unaff_x19;
  undefined4 *puVar13;
  long ****pppplVar14;
  undefined4 uStack_1ac;
  undefined4 auStack_1a8 [6];
  undefined4 auStack_190 [12];
  long ****pppplStack_160;
  long **pplStack_158;
  byte bStack_150;
  undefined6 uStack_14f;
  undefined1 uStack_149;
  undefined8 uStack_128;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***appplStack_c8 [2];
  undefined1 uStack_b1;
  long ****apppplStack_b0 [2];
  undefined1 uStack_99;
  long ****pppplStack_80;
  long ****pppplStack_78;
  undefined8 uStack_70;
  undefined8 uStack_48;
  
  lVar10 = param_4;
  func_0x00010bce73e0();
  uVar1 = *(uint *)(*(long *)(lVar10 + 8) + 0x48);
  ppppplVar11 = (long *****)(ulong)uVar1;
  uVar6 = uVar1 == 1;
  uStack_48 = extraout_x8;
  if ((bool)uVar6) {
    ppppplVar8 = (long *****)&ppplStack_d0;
    func_0x00010bce78b4();
    if (((ulong)param_1 & 1) == 0) {
      func_0x00010bce7408();
    }
    else {
      ppplStack_d8 = ppplStack_d0;
      uVar3 = *(undefined4 *)(*(long *)(param_4 + 8) + 0x50);
      func_0x00010bce7844();
      puVar13 = (undefined4 *)(*(long *)(param_2 + 0x10) + (long)param_1 * 0x38);
      if (((ulong)ppppplVar8 & 1) == 0) {
        iVar2 = *(int *)(*(long *)(param_4 + 8) + 0x4c);
        cVar4 = SBORROW4(iVar2,3);
        cVar5 = iVar2 + -3 < 0;
        uVar6 = iVar2 == 3;
        if (!(bool)uVar6) {
          func_0x00010bce74a4();
          pppplStack_80 = (long ****)param_1;
          pppplStack_78 = (long ****)ppppplVar8;
          func_0x0001089ac660(apppplStack_b0,uVar3);
          func_0x000107c2ba40(appplStack_c8,&pppplStack_80,apppplStack_b0);
          func_0x00010bce75f8(uStack_b1);
          ppppplVar8 = extraout_x11_00;
          if (cVar5 == cVar4) {
            ppppplVar8 = extraout_x8_01;
          }
          func_0x00010bce7558();
          param_1 = (long *****)appplStack_c8;
LAB_10bce5780:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
          goto LAB_10bce5784;
        }
        uVar6 = puVar13[0xc] == 0xf;
        if ((bool)uVar6) {
          param_1 = (long *****)(puVar13 + 2);
          ppppplVar8 = (long *****)&ppplStack_d8;
          func_0x0001074669f0();
        }
        else {
          if (puVar13[0xc] != 6) {
            func_0x00010bce71f4(&pppplStack_80,
                                *(ulong *)(PTR___ZTId_110346a88 + 8) & 0x7fffffffffffffff);
            if ((uStack_70 & 1) == 0) {
              FUN_10bce6ccc(&pppplStack_80);
            }
            iVar2 = puVar13[0xc];
            cVar4 = SCARRY4(iVar2,1);
            cVar5 = iVar2 + 1 < 0;
            uVar6 = iVar2 == -1;
            func_0x00010bce7884(apppplStack_b0,&UNK_10f8316d2);
            func_0x00010bce75f8(uStack_99);
            ppppplVar8 = extraout_x11_01;
            if (cVar5 == cVar4) {
              ppppplVar8 = extraout_x8_02;
            }
            func_0x00010bce7558();
            param_1 = apppplStack_b0;
            goto LAB_10bce5780;
          }
          pppplStack_80 = (long ****)0x0;
          pppplStack_78 = (long ****)0x0;
          uStack_70 = 0;
          func_0x0001074669f0(&pppplStack_80,puVar13 + 2);
          ppppplVar8 = (long *****)&ppplStack_d8;
          func_0x0001074669f0(&pppplStack_80);
          uVar6 = puVar13[0xc] == 0xf;
          if ((bool)uVar6) {
            ppppplVar8 = &pppplStack_80;
            func_0x0001089fd070(puVar13 + 2);
          }
          else {
            FUN_10bcdf79c(puVar13 + 2);
            *(long *****)(puVar13 + 4) = pppplStack_78;
            *(long *****)(puVar13 + 2) = pppplStack_80;
            *(ulong *)(puVar13 + 6) = uStack_70;
            pppplStack_80 = (long ****)0x0;
            pppplStack_78 = (long ****)0x0;
            uStack_70 = 0;
            puVar13[0xc] = 0xf;
          }
          param_1 = &pppplStack_80;
          func_0x000107466e2c();
        }
      }
      else {
        *puVar13 = uVar3;
        *(long ****)(puVar13 + 2) = ppplStack_d0;
        puVar13[0xc] = 6;
      }
      *unaff_x19 = 0;
LAB_10bce578c:
      func_0x00010bce75bc();
      *unaff_x19 = 0;
    }
  }
  else {
    uVar6 = uVar1 == 0x10;
    if ((bool)uVar6) {
      ppppplVar8 = &pppplStack_80;
      func_0x00010bce78b4();
      if (((ulong)param_1 & 1) == 0) {
        func_0x00010bce7408();
      }
      else {
        apppplStack_b0[0] = pppplStack_80;
        ppppplVar11 = apppplStack_b0;
        func_0x00010bce74d4();
        FUN_10bce61d8();
LAB_10bce5784:
        if (*unaff_x19 == 0) goto LAB_10bce578c;
      }
    }
    else {
      cVar4 = SBORROW4(uVar1,6);
      cVar5 = (int)(uVar1 - 6) < 0;
      uVar6 = uVar1 == 6;
      if ((bool)uVar6) {
        ppppplVar8 = &pppplStack_80;
        func_0x00010bce78b4();
        if (((ulong)param_1 & 1) != 0) {
          ppppplVar11 = &pppplStack_80;
          func_0x00010bce74d4();
          FUN_10bce6090();
          goto LAB_10bce5784;
        }
        func_0x00010bce7408();
      }
      else {
        FUN_10bce6320(&pppplStack_80,&UNK_10f83152e,0x3d,ppppplVar11,
                      *(undefined4 *)(*(long *)(lVar10 + 8) + 0x50));
        func_0x00010bce75f8(uStack_70._7_1_);
        ppppplVar8 = extraout_x11;
        if (cVar5 == cVar4) {
          ppppplVar8 = extraout_x8_00;
        }
        func_0x00010bce7558();
        param_1 = &pppplStack_80;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
    }
  }
  func_0x00010bce73b4(uStack_48);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  ppppplVar7 = apppplStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  ppppplVar12 = ppppplVar11;
  func_0x00010bce73e0();
  iVar2 = *(int *)(ppppplVar12[1] + 9);
  uVar6 = iVar2 == 2;
  uStack_128 = extraout_x8_03;
  if ((bool)uVar6) {
    ppplVar9 = (long ***)&uStack_1ac;
    func_0x00010bce78bc();
    if (((ulong)ppppplVar7 & 1) == 0) {
      func_0x00010bce7408();
      goto LAB_10bce5a54;
    }
    uVar3 = *(undefined4 *)(ppppplVar11[1] + 10);
    func_0x00010bce7844();
    pppplVar14 = ppppplVar8[2] + (long)ppppplVar7 * 7;
    if (((ulong)ppplVar9 & 1) == 0) {
      uVar6 = *(int *)((long)ppppplVar11[1] + 0x4c) == 3;
      if (!(bool)uVar6) {
        func_0x00010bce74a4();
        pppplStack_160 = (long ****)ppppplVar7;
        pplStack_158 = (long **)ppplVar9;
        func_0x0001089ac660(auStack_190,uVar3);
        func_0x00010bce73f4();
        func_0x00010bce73c8();
        func_0x00010bce7558();
        puVar13 = auStack_1a8;
LAB_10bce5a40:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar13);
        goto LAB_10bce5a44;
      }
      uVar6 = *(int *)(pppplVar14 + 6) == 0xe;
      if ((bool)uVar6) {
        func_0x0001074c4f8c(pppplVar14 + 1);
      }
      else {
        if (*(int *)(pppplVar14 + 6) != 5) {
          func_0x00010bce74b0(PTR___ZTIf_110346a98);
          if ((bStack_150 & 1) == 0) {
            func_0x00010bce76a0();
          }
          iVar2 = *(int *)(pppplVar14 + 6);
          cVar4 = SCARRY4(iVar2,1);
          cVar5 = iVar2 + 1 < 0;
          uVar6 = iVar2 == -1;
          func_0x00010bce7884(auStack_190,&UNK_10f8316d2);
          func_0x00010bce7480();
          puVar13 = extraout_x10;
          if (cVar5 == cVar4) {
            puVar13 = auStack_190;
          }
          func_0x00010bce7558(puVar13);
          puVar13 = auStack_190;
          goto LAB_10bce5a40;
        }
        func_0x00010bce7650();
        func_0x0001074c4f8c(&pppplStack_160,pppplVar14 + 1);
        func_0x0001074c4f8c(&pppplStack_160);
        uVar6 = *(int *)(pppplVar14 + 6) == 0xe;
        if ((bool)uVar6) {
          func_0x0001074714f0(pppplVar14 + 1);
        }
        else {
          FUN_10bcdf79c(pppplVar14 + 1);
          pppplVar14[2] = (long ***)pplStack_158;
          pppplVar14[1] = (long ***)pppplStack_160;
          pppplVar14[3] = (long ***)CONCAT17(uStack_149,CONCAT61(uStack_14f,bStack_150));
          func_0x00010bce7650();
          *(undefined4 *)(pppplVar14 + 6) = 0xe;
        }
        func_0x0001056d1ce4(&pppplStack_160);
      }
    }
    else {
      *(undefined4 *)pppplVar14 = uVar3;
      *(undefined4 *)(pppplVar14 + 1) = uStack_1ac;
      *(undefined4 *)(pppplVar14 + 6) = 5;
    }
    *param_1 = (long ****)0x0;
  }
  else {
    uVar6 = iVar2 == 0xf;
    if ((bool)uVar6) {
      func_0x00010bce78bc();
      if (((ulong)ppppplVar7 & 1) == 0) {
        func_0x00010bce7408();
        goto LAB_10bce5a54;
      }
      auStack_190[0] = pppplStack_160._0_4_;
      func_0x00010bce74d4();
      FUN_10bce5f48();
    }
    else {
      uVar6 = iVar2 == 7;
      if (!(bool)uVar6) {
        FUN_10bce6320(&pppplStack_160,&UNK_10f83156c,0x38,iVar2,*(undefined4 *)(ppppplVar12[1] + 10)
                     );
        func_0x00010bce75f8(uStack_149);
        func_0x00010bce7558();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppplStack_160);
        goto LAB_10bce5a54;
      }
      func_0x00010bce78bc();
      if (((ulong)ppppplVar7 & 1) == 0) {
        func_0x00010bce7408();
        goto LAB_10bce5a54;
      }
      func_0x00010bce74d4();
      FUN_10bce5e00();
    }
LAB_10bce5a44:
    if (*param_1 != (long ****)0x0) goto LAB_10bce5a54;
  }
  func_0x00010bce75bc();
  *param_1 = (long ****)0x0;
LAB_10bce5a54:
  func_0x00010bce73b4(uStack_128);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x00010bce7744();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010bce7560();
    func_0x00010bce76a8(&UNK_10f831619);
    FUN_10bcdfe50();
    func_0x00010bce7510();
    func_0x00010bce7558();
    func_0x00010bce7714();
    return;
  }
  return;
}



/* Entry: 10bce5830; end: 10bce5adb;  */

void FUN_10bce5830(ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 extraout_x8;
  undefined4 *extraout_x10;
  long *unaff_x19;
  undefined4 *puVar8;
  undefined4 uStack_cc;
  undefined4 auStack_c8 [6];
  undefined4 auStack_b0 [12];
  ulong uStack_80;
  undefined4 *puStack_78;
  byte bStack_70;
  undefined6 uStack_6f;
  undefined1 uStack_69;
  undefined8 uStack_48;
  
  lVar7 = param_4;
  func_0x00010bce73e0();
  iVar1 = *(int *)(*(long *)(lVar7 + 8) + 0x48);
  uVar5 = iVar1 == 2;
  uStack_48 = extraout_x8;
  if ((bool)uVar5) {
    puVar6 = &uStack_cc;
    func_0x00010bce78bc();
    if ((param_1 & 1) == 0) {
      func_0x00010bce7408();
      goto LAB_10bce5a54;
    }
    uVar2 = *(undefined4 *)(*(long *)(param_4 + 8) + 0x50);
    func_0x00010bce7844();
    puVar8 = (undefined4 *)(*(long *)(param_2 + 0x10) + param_1 * 0x38);
    if (((ulong)puVar6 & 1) == 0) {
      uVar5 = *(int *)(*(long *)(param_4 + 8) + 0x4c) == 3;
      if (!(bool)uVar5) {
        func_0x00010bce74a4();
        uStack_80 = param_1;
        puStack_78 = puVar6;
        func_0x0001089ac660(auStack_b0,uVar2);
        func_0x00010bce73f4();
        func_0x00010bce73c8();
        func_0x00010bce7558();
        puVar6 = auStack_c8;
LAB_10bce5a40:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6);
        goto LAB_10bce5a44;
      }
      uVar5 = puVar8[0xc] == 0xe;
      if ((bool)uVar5) {
        func_0x0001074c4f8c(puVar8 + 2);
      }
      else {
        if (puVar8[0xc] != 5) {
          func_0x00010bce74b0(PTR___ZTIf_110346a98);
          if ((bStack_70 & 1) == 0) {
            func_0x00010bce76a0();
          }
          iVar1 = puVar8[0xc];
          cVar3 = SCARRY4(iVar1,1);
          cVar4 = iVar1 + 1 < 0;
          uVar5 = iVar1 == -1;
          func_0x00010bce7884(auStack_b0,&UNK_10f8316d2);
          func_0x00010bce7480();
          puVar6 = extraout_x10;
          if (cVar4 == cVar3) {
            puVar6 = auStack_b0;
          }
          func_0x00010bce7558(puVar6);
          puVar6 = auStack_b0;
          goto LAB_10bce5a40;
        }
        func_0x00010bce7650();
        func_0x0001074c4f8c(&uStack_80,puVar8 + 2);
        func_0x0001074c4f8c(&uStack_80);
        uVar5 = puVar8[0xc] == 0xe;
        if ((bool)uVar5) {
          func_0x0001074714f0(puVar8 + 2);
        }
        else {
          FUN_10bcdf79c(puVar8 + 2);
          *(undefined4 **)(puVar8 + 4) = puStack_78;
          *(ulong *)(puVar8 + 2) = uStack_80;
          *(ulong *)(puVar8 + 6) = CONCAT17(uStack_69,CONCAT61(uStack_6f,bStack_70));
          func_0x00010bce7650();
          puVar8[0xc] = 0xe;
        }
        func_0x0001056d1ce4(&uStack_80);
      }
    }
    else {
      *puVar8 = uVar2;
      puVar8[2] = uStack_cc;
      puVar8[0xc] = 5;
    }
    *unaff_x19 = 0;
  }
  else {
    uVar5 = iVar1 == 0xf;
    if ((bool)uVar5) {
      func_0x00010bce78bc();
      if ((param_1 & 1) == 0) {
        func_0x00010bce7408();
        goto LAB_10bce5a54;
      }
      auStack_b0[0] = (undefined4)uStack_80;
      func_0x00010bce74d4();
      FUN_10bce5f48();
    }
    else {
      uVar5 = iVar1 == 7;
      if (!(bool)uVar5) {
        FUN_10bce6320(&uStack_80,&UNK_10f83156c,0x38,iVar1,
                      *(undefined4 *)(*(long *)(lVar7 + 8) + 0x50));
        func_0x00010bce75f8(uStack_69);
        func_0x00010bce7558();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_80);
        goto LAB_10bce5a54;
      }
      func_0x00010bce78bc();
      if ((param_1 & 1) == 0) {
        func_0x00010bce7408();
        goto LAB_10bce5a54;
      }
      func_0x00010bce74d4();
      FUN_10bce5e00();
    }
LAB_10bce5a44:
    if (*unaff_x19 != 0) goto LAB_10bce5a54;
  }
  func_0x00010bce75bc();
  *unaff_x19 = 0;
LAB_10bce5a54:
  func_0x00010bce73b4(uStack_48);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x00010bce7744();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010bce7560();
    func_0x00010bce76a8(&UNK_10f831619);
    FUN_10bcdfe50();
    func_0x00010bce7510();
    func_0x00010bce7558();
    func_0x00010bce7714();
    return;
  }
  return;
}



/* Entry: 10bce5adc; end: 10bce5b2f;  */

void FUN_10bce5adc(void)

{
  func_0x00010bce76a8(&UNK_10f831619);
  FUN_10bcdfe50();
  func_0x00010bce7510();
  func_0x00010bce7558();
  func_0x00010bce7714();
  return;
}



/* Entry: 10bce5b30; end: 10bce5c9b;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

long * FUN_10bce5b30(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined8 *extraout_x8_08;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  undefined8 *extraout_x11_01;
  undefined8 *extraout_x11_02;
  undefined8 *extraout_x11_03;
  undefined8 *extraout_x11_04;
  undefined8 *extraout_x11_05;
  undefined8 *extraout_x11_06;
  undefined8 *extraout_x11_07;
  undefined8 *extraout_x11_08;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 *unaff_x23;
  long *in_stack_00000050;
  undefined8 *in_stack_00000058;
  byte in_stack_00000060;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_000000c0;
  undefined8 uStack_18;
  
  func_0x00010bce793c();
  func_0x00010bce7300();
  func_0x00010bce7588();
  if (((ulong)param_2 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_OV = SBORROW4(iVar1,0x11);
      in_NG = iVar1 + -0x11 < 0;
      in_ZR = iVar1 == 0x11;
      if ((bool)in_ZR) {
        func_0x00010bce7780();
        FUN_10bce70b0();
      }
      else {
        in_OV = SBORROW4(iVar1,8);
        in_NG = iVar1 + -8 < 0;
        in_ZR = iVar1 == 8;
        if (!(bool)in_ZR) {
          func_0x00010bce74e4(0x800000010e606598);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_2 = extraout_x11_00;
          if (in_NG == in_OV) {
            param_2 = extraout_x8_00;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce5c3c;
        }
        func_0x00010bce7650();
        func_0x00010bce77c8();
        FUN_10bce70b0();
        func_0x00010bce77d4();
        FUN_10bce70b0();
        iVar1 = unaff_x23[0xc];
        in_OV = SBORROW4(iVar1,0x11);
        in_NG = iVar1 + -0x11 < 0;
        in_ZR = iVar1 == 0x11;
        if ((bool)in_ZR) {
          if (*(long *)(unaff_x23 + 2) != 0) {
            FUN_10bcdf900(unaff_x23 + 2);
            __ZdlPv(*(undefined8 *)(unaff_x23 + 2));
            *(undefined8 *)(unaff_x23 + 2) = 0;
            *(undefined8 *)(unaff_x23 + 4) = 0;
            *(undefined8 *)(unaff_x23 + 6) = 0;
          }
          func_0x00010bce7398();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 0x11;
        }
        param_1 = (long *)&stack0x00000050;
        FUN_10bcdf89c();
      }
      goto LAB_10bce5b68;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_2;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_2 = extraout_x11;
    if (in_NG == in_OV) {
      param_2 = extraout_x8;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce5c3c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    param_1 = (long *)(unaff_x23 + 2);
    func_0x00010bce7778();
    unaff_x23[0xc] = 8;
LAB_10bce5b68:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  puVar5 = param_4;
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if (((ulong)param_2 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_OV = SBORROW4(iVar1,9);
      in_NG = iVar1 + -9 < 0;
      in_ZR = iVar1 == 9;
      if ((bool)in_ZR) {
        param_1 = (long *)(unaff_x23 + 2);
        FUN_10bce7210();
      }
      else {
        if (iVar1 != 0) {
          func_0x00010bce74e4(0x800000010e6065ca);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_4 = extraout_x11_02;
          if (in_NG == in_OV) {
            param_4 = extraout_x8_02;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce5da0;
        }
        func_0x00010bce7650();
        FUN_10bce7210(&stack0x00000050,*(undefined1 *)(unaff_x23 + 2));
        FUN_10bce7210(&stack0x00000050);
        iVar1 = unaff_x23[0xc];
        in_OV = SBORROW4(iVar1,9);
        in_NG = iVar1 + -9 < 0;
        in_ZR = iVar1 == 9;
        if ((bool)in_ZR) {
          if (*(long *)(unaff_x23 + 2) != 0) {
            *(long *)(unaff_x23 + 4) = *(long *)(unaff_x23 + 2);
            __ZdlPv();
            *(undefined8 *)(unaff_x23 + 2) = 0;
            *(undefined8 *)(unaff_x23 + 4) = 0;
            *(undefined8 *)(unaff_x23 + 6) = 0;
          }
          func_0x00010bce7398();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 9;
        }
        param_1 = (long *)&stack0x00000050;
        FUN_10bcdf860();
      }
      goto LAB_10bce5ccc;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_2;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_4 = extraout_x11_01;
    if (in_NG == in_OV) {
      param_4 = extraout_x8_01;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce5da0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    *(char *)(unaff_x23 + 2) = (char)param_4;
    unaff_x23[0xc] = 0;
    param_4 = param_2;
LAB_10bce5ccc:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  puVar6 = puVar5;
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if (((ulong)param_4 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_OV = SBORROW4(iVar1,0xb);
      in_NG = iVar1 + -0xb < 0;
      in_ZR = iVar1 == 0xb;
      if ((bool)in_ZR) {
        func_0x00010bce7780();
        func_0x000107c2842c();
      }
      else {
        in_OV = SBORROW4(iVar1,2);
        in_NG = iVar1 + -2 < 0;
        in_ZR = iVar1 == 2;
        if (!(bool)in_ZR) {
          func_0x00010bce74b0(PTR___ZTIj_110346ab0);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_4 = extraout_x11_04;
          if (in_NG == in_OV) {
            param_4 = extraout_x8_04;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce5ee8;
        }
        func_0x00010bce7650();
        func_0x00010bce77c8();
        func_0x000107c28468();
        func_0x00010bce77d4();
        func_0x000107c2842c();
        iVar1 = unaff_x23[0xc];
        in_OV = SBORROW4(iVar1,0xb);
        in_NG = iVar1 + -0xb < 0;
        in_ZR = iVar1 == 0xb;
        if ((bool)in_ZR) {
          func_0x00010bce78f4();
          func_0x000107c2847c();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 0xb;
        }
        param_1 = (long *)&stack0x00000050;
        func_0x00010731e26c();
      }
      goto LAB_10bce5e38;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_4;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_4 = extraout_x11_03;
    if (in_NG == in_OV) {
      param_4 = extraout_x8_03;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce5ee8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    unaff_x23[2] = *(undefined4 *)puVar5;
    unaff_x23[0xc] = 2;
LAB_10bce5e38:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  puVar5 = puVar6;
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if (((ulong)param_4 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_OV = SBORROW4(iVar1,10);
      in_NG = iVar1 + -10 < 0;
      in_ZR = iVar1 == 10;
      if ((bool)in_ZR) {
        func_0x00010bce7780();
        func_0x000107c27eac();
      }
      else {
        in_OV = SBORROW4(iVar1,1);
        in_NG = iVar1 + -1 < 0;
        in_ZR = iVar1 == 1;
        if (!(bool)in_ZR) {
          func_0x00010bce74b0(PTR___ZTIi_110346aa8);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_4 = extraout_x11_06;
          if (in_NG == in_OV) {
            param_4 = extraout_x8_06;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce6030;
        }
        func_0x00010bce7650();
        func_0x00010bce77c8();
        func_0x000107c27eac();
        func_0x00010bce77d4();
        func_0x000107c27eac();
        iVar1 = unaff_x23[0xc];
        in_OV = SBORROW4(iVar1,10);
        in_NG = iVar1 + -10 < 0;
        in_ZR = iVar1 == 10;
        if ((bool)in_ZR) {
          func_0x00010bce78f4();
          func_0x00010869e720();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 10;
        }
        param_1 = (long *)&stack0x00000050;
        func_0x000107c27a18();
      }
      goto LAB_10bce5f80;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_4;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_4 = extraout_x11_05;
    if (in_NG == in_OV) {
      param_4 = extraout_x8_05;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce6030:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    unaff_x23[2] = *(undefined4 *)puVar6;
    unaff_x23[0xc] = 1;
LAB_10bce5f80:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  puVar6 = puVar5;
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if (((ulong)param_4 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_ZR = iVar1 == 0xd;
      if ((bool)in_ZR) {
        func_0x00010bce7780();
        func_0x00010802e088();
      }
      else {
        cVar2 = SBORROW4(iVar1,4);
        cVar3 = iVar1 + -4 < 0;
        in_ZR = iVar1 == 4;
        if (!(bool)in_ZR) {
          func_0x00010bce74b0(PTR___ZTIy_110346ae8);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_4 = extraout_x11_08;
          if (cVar3 == cVar2) {
            param_4 = extraout_x8_08;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce6178;
        }
        func_0x00010bce7650();
        func_0x00010bce77c8();
        func_0x00010802def8();
        func_0x00010bce77d4();
        func_0x00010802e088();
        in_ZR = unaff_x23[0xc] == 0xd;
        if ((bool)in_ZR) {
          func_0x00010bce78f4();
          func_0x0001073588ec();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 0xd;
        }
        param_1 = (long *)&stack0x00000050;
        func_0x000107c28374();
      }
      goto LAB_10bce60c8;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_4;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_4 = extraout_x11_07;
    if (in_NG == in_OV) {
      param_4 = extraout_x8_07;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce6178:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    *(undefined8 *)(unaff_x23 + 2) = *puVar5;
    unaff_x23[0xc] = 4;
LAB_10bce60c8:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if (((ulong)param_4 & 1) == 0) {
    func_0x00010bce7598();
    if (!(bool)in_ZR) {
      func_0x00010bce74a4();
      in_stack_00000050 = param_1;
      in_stack_00000058 = param_4;
      func_0x00010bce7504();
      func_0x00010bce73f4();
      func_0x00010bce73c8();
      func_0x00010bce7558();
      param_1 = (long *)&stack0x00000008;
LAB_10bce62c0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      goto LAB_10bce62c4;
    }
    in_ZR = unaff_x23[0xc] == 0xc;
    if ((bool)in_ZR) {
      func_0x00010bce7780();
      func_0x000107c27adc();
    }
    else {
      in_ZR = unaff_x23[0xc] == 3;
      if (!(bool)in_ZR) {
        func_0x00010bce74b0(PTR___ZTIx_110346ae0);
        if ((in_stack_00000060 & 1) == 0) {
          func_0x00010bce76a0();
        }
        func_0x00010bce7578();
        func_0x00010bce7378();
        func_0x00010bce7454();
        func_0x00010bce7558();
        param_1 = (long *)&stack0x00000020;
        goto LAB_10bce62c0;
      }
      func_0x00010bce7650();
      func_0x00010bce77c8();
      func_0x000107c27adc();
      func_0x00010bce77d4();
      func_0x000107c27adc();
      in_ZR = unaff_x23[0xc] == 0xc;
      if ((bool)in_ZR) {
        func_0x00010bce78f4();
        func_0x000107c28910();
      }
      else {
        func_0x00010bce76d4();
        func_0x00010bce7398();
        unaff_x23[0xc] = 0xc;
      }
      param_1 = (long *)&stack0x00000050;
      func_0x000107c27ae4();
    }
  }
  else {
    *unaff_x23 = unaff_w20;
    *(undefined8 *)(unaff_x23 + 2) = *puVar6;
    unaff_x23[0xc] = 3;
  }
  *unaff_x19 = 0;
LAB_10bce62c4:
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce7494();
  func_0x00010bce75c4();
  func_0x00010bce73b4(uStack_18);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *param_1 = 0xc;
    lVar4 = 0x28;
    func_0x000107c60e20();
    func_0x000107c2b9d0();
    *param_1 = lVar4 + 1;
    return param_1;
  }
  return param_1;
}



/* Entry: 10bce5c9c; end: 10bce5dff;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

long * FUN_10bce5c9c(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  undefined8 *extraout_x11_01;
  undefined8 *extraout_x11_02;
  undefined8 *extraout_x11_03;
  undefined8 *extraout_x11_04;
  undefined8 *extraout_x11_05;
  undefined8 *extraout_x11_06;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 *unaff_x23;
  long *in_stack_00000050;
  undefined8 *in_stack_00000058;
  byte in_stack_00000060;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_000000c0;
  undefined8 uStack_18;
  
  func_0x00010bce793c();
  puVar5 = param_4;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if (((ulong)param_2 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_OV = SBORROW4(iVar1,9);
      in_NG = iVar1 + -9 < 0;
      in_ZR = iVar1 == 9;
      if ((bool)in_ZR) {
        param_1 = (long *)(unaff_x23 + 2);
        FUN_10bce7210();
      }
      else {
        if (iVar1 != 0) {
          func_0x00010bce74e4(0x800000010e6065ca);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_4 = extraout_x11_00;
          if (in_NG == in_OV) {
            param_4 = extraout_x8_00;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce5da0;
        }
        func_0x00010bce7650();
        FUN_10bce7210(&stack0x00000050,*(undefined1 *)(unaff_x23 + 2));
        FUN_10bce7210(&stack0x00000050);
        iVar1 = unaff_x23[0xc];
        in_OV = SBORROW4(iVar1,9);
        in_NG = iVar1 + -9 < 0;
        in_ZR = iVar1 == 9;
        if ((bool)in_ZR) {
          if (*(long *)(unaff_x23 + 2) != 0) {
            *(long *)(unaff_x23 + 4) = *(long *)(unaff_x23 + 2);
            __ZdlPv();
            *(undefined8 *)(unaff_x23 + 2) = 0;
            *(undefined8 *)(unaff_x23 + 4) = 0;
            *(undefined8 *)(unaff_x23 + 6) = 0;
          }
          func_0x00010bce7398();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 9;
        }
        param_1 = (long *)&stack0x00000050;
        FUN_10bcdf860();
      }
      goto LAB_10bce5ccc;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_2;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_4 = extraout_x11;
    if (in_NG == in_OV) {
      param_4 = extraout_x8;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce5da0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    *(char *)(unaff_x23 + 2) = (char)param_4;
    unaff_x23[0xc] = 0;
    param_4 = param_2;
LAB_10bce5ccc:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  puVar6 = puVar5;
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if (((ulong)param_4 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_OV = SBORROW4(iVar1,0xb);
      in_NG = iVar1 + -0xb < 0;
      in_ZR = iVar1 == 0xb;
      if ((bool)in_ZR) {
        func_0x00010bce7780();
        func_0x000107c2842c();
      }
      else {
        in_OV = SBORROW4(iVar1,2);
        in_NG = iVar1 + -2 < 0;
        in_ZR = iVar1 == 2;
        if (!(bool)in_ZR) {
          func_0x00010bce74b0(PTR___ZTIj_110346ab0);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_4 = extraout_x11_02;
          if (in_NG == in_OV) {
            param_4 = extraout_x8_02;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce5ee8;
        }
        func_0x00010bce7650();
        func_0x00010bce77c8();
        func_0x000107c28468();
        func_0x00010bce77d4();
        func_0x000107c2842c();
        iVar1 = unaff_x23[0xc];
        in_OV = SBORROW4(iVar1,0xb);
        in_NG = iVar1 + -0xb < 0;
        in_ZR = iVar1 == 0xb;
        if ((bool)in_ZR) {
          func_0x00010bce78f4();
          func_0x000107c2847c();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 0xb;
        }
        param_1 = (long *)&stack0x00000050;
        func_0x00010731e26c();
      }
      goto LAB_10bce5e38;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_4;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_4 = extraout_x11_01;
    if (in_NG == in_OV) {
      param_4 = extraout_x8_01;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce5ee8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    unaff_x23[2] = *(undefined4 *)puVar5;
    unaff_x23[0xc] = 2;
LAB_10bce5e38:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  puVar5 = puVar6;
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if (((ulong)param_4 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_OV = SBORROW4(iVar1,10);
      in_NG = iVar1 + -10 < 0;
      in_ZR = iVar1 == 10;
      if ((bool)in_ZR) {
        func_0x00010bce7780();
        func_0x000107c27eac();
      }
      else {
        in_OV = SBORROW4(iVar1,1);
        in_NG = iVar1 + -1 < 0;
        in_ZR = iVar1 == 1;
        if (!(bool)in_ZR) {
          func_0x00010bce74b0(PTR___ZTIi_110346aa8);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_4 = extraout_x11_04;
          if (in_NG == in_OV) {
            param_4 = extraout_x8_04;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce6030;
        }
        func_0x00010bce7650();
        func_0x00010bce77c8();
        func_0x000107c27eac();
        func_0x00010bce77d4();
        func_0x000107c27eac();
        iVar1 = unaff_x23[0xc];
        in_OV = SBORROW4(iVar1,10);
        in_NG = iVar1 + -10 < 0;
        in_ZR = iVar1 == 10;
        if ((bool)in_ZR) {
          func_0x00010bce78f4();
          func_0x00010869e720();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 10;
        }
        param_1 = (long *)&stack0x00000050;
        func_0x000107c27a18();
      }
      goto LAB_10bce5f80;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_4;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_4 = extraout_x11_03;
    if (in_NG == in_OV) {
      param_4 = extraout_x8_03;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce6030:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    unaff_x23[2] = *(undefined4 *)puVar6;
    unaff_x23[0xc] = 1;
LAB_10bce5f80:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  puVar6 = puVar5;
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if (((ulong)param_4 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_ZR = iVar1 == 0xd;
      if ((bool)in_ZR) {
        func_0x00010bce7780();
        func_0x00010802e088();
      }
      else {
        cVar2 = SBORROW4(iVar1,4);
        cVar3 = iVar1 + -4 < 0;
        in_ZR = iVar1 == 4;
        if (!(bool)in_ZR) {
          func_0x00010bce74b0(PTR___ZTIy_110346ae8);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_4 = extraout_x11_06;
          if (cVar3 == cVar2) {
            param_4 = extraout_x8_06;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce6178;
        }
        func_0x00010bce7650();
        func_0x00010bce77c8();
        func_0x00010802def8();
        func_0x00010bce77d4();
        func_0x00010802e088();
        in_ZR = unaff_x23[0xc] == 0xd;
        if ((bool)in_ZR) {
          func_0x00010bce78f4();
          func_0x0001073588ec();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 0xd;
        }
        param_1 = (long *)&stack0x00000050;
        func_0x000107c28374();
      }
      goto LAB_10bce60c8;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_4;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_4 = extraout_x11_05;
    if (in_NG == in_OV) {
      param_4 = extraout_x8_05;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce6178:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    *(undefined8 *)(unaff_x23 + 2) = *puVar5;
    unaff_x23[0xc] = 4;
LAB_10bce60c8:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if (((ulong)param_4 & 1) == 0) {
    func_0x00010bce7598();
    if (!(bool)in_ZR) {
      func_0x00010bce74a4();
      in_stack_00000050 = param_1;
      in_stack_00000058 = param_4;
      func_0x00010bce7504();
      func_0x00010bce73f4();
      func_0x00010bce73c8();
      func_0x00010bce7558();
      param_1 = (long *)&stack0x00000008;
LAB_10bce62c0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      goto LAB_10bce62c4;
    }
    in_ZR = unaff_x23[0xc] == 0xc;
    if ((bool)in_ZR) {
      func_0x00010bce7780();
      func_0x000107c27adc();
    }
    else {
      in_ZR = unaff_x23[0xc] == 3;
      if (!(bool)in_ZR) {
        func_0x00010bce74b0(PTR___ZTIx_110346ae0);
        if ((in_stack_00000060 & 1) == 0) {
          func_0x00010bce76a0();
        }
        func_0x00010bce7578();
        func_0x00010bce7378();
        func_0x00010bce7454();
        func_0x00010bce7558();
        param_1 = (long *)&stack0x00000020;
        goto LAB_10bce62c0;
      }
      func_0x00010bce7650();
      func_0x00010bce77c8();
      func_0x000107c27adc();
      func_0x00010bce77d4();
      func_0x000107c27adc();
      in_ZR = unaff_x23[0xc] == 0xc;
      if ((bool)in_ZR) {
        func_0x00010bce78f4();
        func_0x000107c28910();
      }
      else {
        func_0x00010bce76d4();
        func_0x00010bce7398();
        unaff_x23[0xc] = 0xc;
      }
      param_1 = (long *)&stack0x00000050;
      func_0x000107c27ae4();
    }
  }
  else {
    *unaff_x23 = unaff_w20;
    *(undefined8 *)(unaff_x23 + 2) = *puVar6;
    unaff_x23[0xc] = 3;
  }
  *unaff_x19 = 0;
LAB_10bce62c4:
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce7494();
  func_0x00010bce75c4();
  func_0x00010bce73b4(uStack_18);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *param_1 = 0xc;
    lVar4 = 0x28;
    func_0x000107c60e20();
    func_0x000107c2b9d0();
    *param_1 = lVar4 + 1;
    return param_1;
  }
  return param_1;
}



/* Entry: 10bce5e00; end: 10bce5f47;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

long * FUN_10bce5e00(long *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 *unaff_x23;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  byte in_stack_00000060;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_000000c0;
  undefined8 uStack_18;
  
  func_0x00010bce793c();
  puVar5 = param_4;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if ((param_2 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_OV = SBORROW4(iVar1,0xb);
      in_NG = iVar1 + -0xb < 0;
      in_ZR = iVar1 == 0xb;
      if ((bool)in_ZR) {
        func_0x00010bce7780();
        func_0x000107c2842c();
      }
      else {
        in_OV = SBORROW4(iVar1,2);
        in_NG = iVar1 + -2 < 0;
        in_ZR = iVar1 == 2;
        if (!(bool)in_ZR) {
          func_0x00010bce74b0(PTR___ZTIj_110346ab0);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_2 = extraout_x11_00;
          if (in_NG == in_OV) {
            param_2 = extraout_x8_00;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce5ee8;
        }
        func_0x00010bce7650();
        func_0x00010bce77c8();
        func_0x000107c28468();
        func_0x00010bce77d4();
        func_0x000107c2842c();
        iVar1 = unaff_x23[0xc];
        in_OV = SBORROW4(iVar1,0xb);
        in_NG = iVar1 + -0xb < 0;
        in_ZR = iVar1 == 0xb;
        if ((bool)in_ZR) {
          func_0x00010bce78f4();
          func_0x000107c2847c();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 0xb;
        }
        param_1 = (long *)&stack0x00000050;
        func_0x00010731e26c();
      }
      goto LAB_10bce5e38;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_2;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_2 = extraout_x11;
    if (in_NG == in_OV) {
      param_2 = extraout_x8;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce5ee8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    unaff_x23[2] = *(undefined4 *)param_4;
    unaff_x23[0xc] = 2;
LAB_10bce5e38:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  puVar6 = puVar5;
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if ((param_2 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_OV = SBORROW4(iVar1,10);
      in_NG = iVar1 + -10 < 0;
      in_ZR = iVar1 == 10;
      if ((bool)in_ZR) {
        func_0x00010bce7780();
        func_0x000107c27eac();
      }
      else {
        in_OV = SBORROW4(iVar1,1);
        in_NG = iVar1 + -1 < 0;
        in_ZR = iVar1 == 1;
        if (!(bool)in_ZR) {
          func_0x00010bce74b0(PTR___ZTIi_110346aa8);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_2 = extraout_x11_02;
          if (in_NG == in_OV) {
            param_2 = extraout_x8_02;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce6030;
        }
        func_0x00010bce7650();
        func_0x00010bce77c8();
        func_0x000107c27eac();
        func_0x00010bce77d4();
        func_0x000107c27eac();
        iVar1 = unaff_x23[0xc];
        in_OV = SBORROW4(iVar1,10);
        in_NG = iVar1 + -10 < 0;
        in_ZR = iVar1 == 10;
        if ((bool)in_ZR) {
          func_0x00010bce78f4();
          func_0x00010869e720();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 10;
        }
        param_1 = (long *)&stack0x00000050;
        func_0x000107c27a18();
      }
      goto LAB_10bce5f80;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_2;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_2 = extraout_x11_01;
    if (in_NG == in_OV) {
      param_2 = extraout_x8_01;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce6030:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    unaff_x23[2] = *(undefined4 *)puVar5;
    unaff_x23[0xc] = 1;
LAB_10bce5f80:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  puVar5 = puVar6;
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if ((param_2 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_ZR = iVar1 == 0xd;
      if ((bool)in_ZR) {
        func_0x00010bce7780();
        func_0x00010802e088();
      }
      else {
        cVar2 = SBORROW4(iVar1,4);
        cVar3 = iVar1 + -4 < 0;
        in_ZR = iVar1 == 4;
        if (!(bool)in_ZR) {
          func_0x00010bce74b0(PTR___ZTIy_110346ae8);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_2 = extraout_x11_04;
          if (cVar3 == cVar2) {
            param_2 = extraout_x8_04;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce6178;
        }
        func_0x00010bce7650();
        func_0x00010bce77c8();
        func_0x00010802def8();
        func_0x00010bce77d4();
        func_0x00010802e088();
        in_ZR = unaff_x23[0xc] == 0xd;
        if ((bool)in_ZR) {
          func_0x00010bce78f4();
          func_0x0001073588ec();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 0xd;
        }
        param_1 = (long *)&stack0x00000050;
        func_0x000107c28374();
      }
      goto LAB_10bce60c8;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_2;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_2 = extraout_x11_03;
    if (in_NG == in_OV) {
      param_2 = extraout_x8_03;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce6178:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    *(undefined8 *)(unaff_x23 + 2) = *puVar6;
    unaff_x23[0xc] = 4;
LAB_10bce60c8:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if ((param_2 & 1) == 0) {
    func_0x00010bce7598();
    if (!(bool)in_ZR) {
      func_0x00010bce74a4();
      in_stack_00000050 = param_1;
      in_stack_00000058 = param_2;
      func_0x00010bce7504();
      func_0x00010bce73f4();
      func_0x00010bce73c8();
      func_0x00010bce7558();
      param_1 = (long *)&stack0x00000008;
LAB_10bce62c0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      goto LAB_10bce62c4;
    }
    in_ZR = unaff_x23[0xc] == 0xc;
    if ((bool)in_ZR) {
      func_0x00010bce7780();
      func_0x000107c27adc();
    }
    else {
      in_ZR = unaff_x23[0xc] == 3;
      if (!(bool)in_ZR) {
        func_0x00010bce74b0(PTR___ZTIx_110346ae0);
        if ((in_stack_00000060 & 1) == 0) {
          func_0x00010bce76a0();
        }
        func_0x00010bce7578();
        func_0x00010bce7378();
        func_0x00010bce7454();
        func_0x00010bce7558();
        param_1 = (long *)&stack0x00000020;
        goto LAB_10bce62c0;
      }
      func_0x00010bce7650();
      func_0x00010bce77c8();
      func_0x000107c27adc();
      func_0x00010bce77d4();
      func_0x000107c27adc();
      in_ZR = unaff_x23[0xc] == 0xc;
      if ((bool)in_ZR) {
        func_0x00010bce78f4();
        func_0x000107c28910();
      }
      else {
        func_0x00010bce76d4();
        func_0x00010bce7398();
        unaff_x23[0xc] = 0xc;
      }
      param_1 = (long *)&stack0x00000050;
      func_0x000107c27ae4();
    }
  }
  else {
    *unaff_x23 = unaff_w20;
    *(undefined8 *)(unaff_x23 + 2) = *puVar5;
    unaff_x23[0xc] = 3;
  }
  *unaff_x19 = 0;
LAB_10bce62c4:
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce7494();
  func_0x00010bce75c4();
  func_0x00010bce73b4(uStack_18);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *param_1 = 0xc;
    lVar4 = 0x28;
    func_0x000107c60e20();
    func_0x000107c2b9d0();
    *param_1 = lVar4 + 1;
    return param_1;
  }
  return param_1;
}



/* Entry: 10bce5f48; end: 10bce608f;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

long * FUN_10bce5f48(long *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 *unaff_x23;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  byte in_stack_00000060;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_000000c0;
  undefined8 uStack_18;
  
  func_0x00010bce793c();
  puVar5 = param_4;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if ((param_2 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_OV = SBORROW4(iVar1,10);
      in_NG = iVar1 + -10 < 0;
      in_ZR = iVar1 == 10;
      if ((bool)in_ZR) {
        func_0x00010bce7780();
        func_0x000107c27eac();
      }
      else {
        in_OV = SBORROW4(iVar1,1);
        in_NG = iVar1 + -1 < 0;
        in_ZR = iVar1 == 1;
        if (!(bool)in_ZR) {
          func_0x00010bce74b0(PTR___ZTIi_110346aa8);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_2 = extraout_x11_00;
          if (in_NG == in_OV) {
            param_2 = extraout_x8_00;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce6030;
        }
        func_0x00010bce7650();
        func_0x00010bce77c8();
        func_0x000107c27eac();
        func_0x00010bce77d4();
        func_0x000107c27eac();
        iVar1 = unaff_x23[0xc];
        in_OV = SBORROW4(iVar1,10);
        in_NG = iVar1 + -10 < 0;
        in_ZR = iVar1 == 10;
        if ((bool)in_ZR) {
          func_0x00010bce78f4();
          func_0x00010869e720();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 10;
        }
        param_1 = (long *)&stack0x00000050;
        func_0x000107c27a18();
      }
      goto LAB_10bce5f80;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_2;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_2 = extraout_x11;
    if (in_NG == in_OV) {
      param_2 = extraout_x8;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce6030:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    unaff_x23[2] = *(undefined4 *)param_4;
    unaff_x23[0xc] = 1;
LAB_10bce5f80:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  puVar6 = puVar5;
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if ((param_2 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_ZR = iVar1 == 0xd;
      if ((bool)in_ZR) {
        func_0x00010bce7780();
        func_0x00010802e088();
      }
      else {
        cVar2 = SBORROW4(iVar1,4);
        cVar3 = iVar1 + -4 < 0;
        in_ZR = iVar1 == 4;
        if (!(bool)in_ZR) {
          func_0x00010bce74b0(PTR___ZTIy_110346ae8);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_2 = extraout_x11_02;
          if (cVar3 == cVar2) {
            param_2 = extraout_x8_02;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce6178;
        }
        func_0x00010bce7650();
        func_0x00010bce77c8();
        func_0x00010802def8();
        func_0x00010bce77d4();
        func_0x00010802e088();
        in_ZR = unaff_x23[0xc] == 0xd;
        if ((bool)in_ZR) {
          func_0x00010bce78f4();
          func_0x0001073588ec();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 0xd;
        }
        param_1 = (long *)&stack0x00000050;
        func_0x000107c28374();
      }
      goto LAB_10bce60c8;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_2;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_2 = extraout_x11_01;
    if (in_NG == in_OV) {
      param_2 = extraout_x8_01;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce6178:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    *(undefined8 *)(unaff_x23 + 2) = *puVar5;
    unaff_x23[0xc] = 4;
LAB_10bce60c8:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if ((param_2 & 1) == 0) {
    func_0x00010bce7598();
    if (!(bool)in_ZR) {
      func_0x00010bce74a4();
      in_stack_00000050 = param_1;
      in_stack_00000058 = param_2;
      func_0x00010bce7504();
      func_0x00010bce73f4();
      func_0x00010bce73c8();
      func_0x00010bce7558();
      param_1 = (long *)&stack0x00000008;
LAB_10bce62c0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      goto LAB_10bce62c4;
    }
    in_ZR = unaff_x23[0xc] == 0xc;
    if ((bool)in_ZR) {
      func_0x00010bce7780();
      func_0x000107c27adc();
    }
    else {
      in_ZR = unaff_x23[0xc] == 3;
      if (!(bool)in_ZR) {
        func_0x00010bce74b0(PTR___ZTIx_110346ae0);
        if ((in_stack_00000060 & 1) == 0) {
          func_0x00010bce76a0();
        }
        func_0x00010bce7578();
        func_0x00010bce7378();
        func_0x00010bce7454();
        func_0x00010bce7558();
        param_1 = (long *)&stack0x00000020;
        goto LAB_10bce62c0;
      }
      func_0x00010bce7650();
      func_0x00010bce77c8();
      func_0x000107c27adc();
      func_0x00010bce77d4();
      func_0x000107c27adc();
      in_ZR = unaff_x23[0xc] == 0xc;
      if ((bool)in_ZR) {
        func_0x00010bce78f4();
        func_0x000107c28910();
      }
      else {
        func_0x00010bce76d4();
        func_0x00010bce7398();
        unaff_x23[0xc] = 0xc;
      }
      param_1 = (long *)&stack0x00000050;
      func_0x000107c27ae4();
    }
  }
  else {
    *unaff_x23 = unaff_w20;
    *(undefined8 *)(unaff_x23 + 2) = *puVar6;
    unaff_x23[0xc] = 3;
  }
  *unaff_x19 = 0;
LAB_10bce62c4:
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce7494();
  func_0x00010bce75c4();
  func_0x00010bce73b4(uStack_18);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *param_1 = 0xc;
    lVar4 = 0x28;
    func_0x000107c60e20();
    func_0x000107c2b9d0();
    *param_1 = lVar4 + 1;
    return param_1;
  }
  return param_1;
}



/* Entry: 10bce6090; end: 10bce61d7;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

long * FUN_10bce6090(long *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 *unaff_x23;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  byte in_stack_00000060;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_000000c0;
  undefined8 uStack_18;
  
  func_0x00010bce793c();
  puVar5 = param_4;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if ((param_2 & 1) == 0) {
    func_0x00010bce7598();
    if ((bool)in_ZR) {
      iVar1 = unaff_x23[0xc];
      in_ZR = iVar1 == 0xd;
      if ((bool)in_ZR) {
        func_0x00010bce7780();
        func_0x00010802e088();
      }
      else {
        cVar2 = SBORROW4(iVar1,4);
        cVar3 = iVar1 + -4 < 0;
        in_ZR = iVar1 == 4;
        if (!(bool)in_ZR) {
          func_0x00010bce74b0(PTR___ZTIy_110346ae8);
          if ((in_stack_00000060 & 1) == 0) {
            func_0x00010bce76a0();
          }
          func_0x00010bce7578();
          func_0x00010bce7378();
          func_0x00010bce7454();
          param_2 = extraout_x11_00;
          if (cVar3 == cVar2) {
            param_2 = extraout_x8_00;
          }
          func_0x00010bce7558();
          param_1 = (long *)&stack0x00000020;
          goto LAB_10bce6178;
        }
        func_0x00010bce7650();
        func_0x00010bce77c8();
        func_0x00010802def8();
        func_0x00010bce77d4();
        func_0x00010802e088();
        in_ZR = unaff_x23[0xc] == 0xd;
        if ((bool)in_ZR) {
          func_0x00010bce78f4();
          func_0x0001073588ec();
        }
        else {
          func_0x00010bce76d4();
          func_0x00010bce7398();
          unaff_x23[0xc] = 0xd;
        }
        param_1 = (long *)&stack0x00000050;
        func_0x000107c28374();
      }
      goto LAB_10bce60c8;
    }
    func_0x00010bce74a4();
    in_stack_00000050 = param_1;
    in_stack_00000058 = param_2;
    func_0x00010bce7504();
    func_0x00010bce73f4();
    func_0x00010bce73c8();
    param_2 = extraout_x11;
    if (in_NG == in_OV) {
      param_2 = extraout_x8;
    }
    func_0x00010bce7558();
    param_1 = (long *)&stack0x00000008;
LAB_10bce6178:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    *unaff_x23 = unaff_w20;
    *(undefined8 *)(unaff_x23 + 2) = *param_4;
    unaff_x23[0xc] = 4;
LAB_10bce60c8:
    *unaff_x19 = 0;
  }
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce793c();
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010bce7300();
  func_0x00010bce7588();
  if ((param_2 & 1) == 0) {
    func_0x00010bce7598();
    if (!(bool)in_ZR) {
      func_0x00010bce74a4();
      in_stack_00000050 = param_1;
      in_stack_00000058 = param_2;
      func_0x00010bce7504();
      func_0x00010bce73f4();
      func_0x00010bce73c8();
      func_0x00010bce7558();
      param_1 = (long *)&stack0x00000008;
LAB_10bce62c0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      goto LAB_10bce62c4;
    }
    in_ZR = unaff_x23[0xc] == 0xc;
    if ((bool)in_ZR) {
      func_0x00010bce7780();
      func_0x000107c27adc();
    }
    else {
      in_ZR = unaff_x23[0xc] == 3;
      if (!(bool)in_ZR) {
        func_0x00010bce74b0(PTR___ZTIx_110346ae0);
        if ((in_stack_00000060 & 1) == 0) {
          func_0x00010bce76a0();
        }
        func_0x00010bce7578();
        func_0x00010bce7378();
        func_0x00010bce7454();
        func_0x00010bce7558();
        param_1 = (long *)&stack0x00000020;
        goto LAB_10bce62c0;
      }
      func_0x00010bce7650();
      func_0x00010bce77c8();
      func_0x000107c27adc();
      func_0x00010bce77d4();
      func_0x000107c27adc();
      in_ZR = unaff_x23[0xc] == 0xc;
      if ((bool)in_ZR) {
        func_0x00010bce78f4();
        func_0x000107c28910();
      }
      else {
        func_0x00010bce76d4();
        func_0x00010bce7398();
        unaff_x23[0xc] = 0xc;
      }
      param_1 = (long *)&stack0x00000050;
      func_0x000107c27ae4();
    }
  }
  else {
    *unaff_x23 = unaff_w20;
    *(undefined8 *)(unaff_x23 + 2) = *puVar5;
    unaff_x23[0xc] = 3;
  }
  *unaff_x19 = 0;
LAB_10bce62c4:
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce7494();
  func_0x00010bce75c4();
  func_0x00010bce73b4(uStack_18);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *param_1 = 0xc;
    lVar4 = 0x28;
    func_0x000107c60e20();
    func_0x000107c2b9d0();
    *param_1 = lVar4 + 1;
    return param_1;
  }
  return param_1;
}



/* Entry: 10bce61d8; end: 10bce631f;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

long * FUN_10bce61d8(long *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 *unaff_x23;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  byte in_stack_00000060;
  undefined8 in_stack_00000088;
  undefined8 uStack_18;
  
  func_0x00010bce793c();
  func_0x00010bce7300();
  func_0x00010bce7588();
  if ((param_2 & 1) == 0) {
    func_0x00010bce7598();
    if (!(bool)in_ZR) {
      func_0x00010bce74a4();
      in_stack_00000050 = param_1;
      in_stack_00000058 = param_2;
      func_0x00010bce7504();
      func_0x00010bce73f4();
      func_0x00010bce73c8();
      func_0x00010bce7558();
      param_1 = (long *)&stack0x00000008;
LAB_10bce62c0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      goto LAB_10bce62c4;
    }
    in_ZR = unaff_x23[0xc] == 0xc;
    if ((bool)in_ZR) {
      func_0x00010bce7780();
      func_0x000107c27adc();
    }
    else {
      in_ZR = unaff_x23[0xc] == 3;
      if (!(bool)in_ZR) {
        func_0x00010bce74b0(PTR___ZTIx_110346ae0);
        if ((in_stack_00000060 & 1) == 0) {
          func_0x00010bce76a0();
        }
        func_0x00010bce7578();
        func_0x00010bce7378();
        func_0x00010bce7454();
        func_0x00010bce7558();
        param_1 = (long *)&stack0x00000020;
        goto LAB_10bce62c0;
      }
      func_0x00010bce7650();
      func_0x00010bce77c8();
      func_0x000107c27adc();
      func_0x00010bce77d4();
      func_0x000107c27adc();
      in_ZR = unaff_x23[0xc] == 0xc;
      if ((bool)in_ZR) {
        func_0x00010bce78f4();
        func_0x000107c28910();
      }
      else {
        func_0x00010bce76d4();
        func_0x00010bce7398();
        unaff_x23[0xc] = 0xc;
      }
      param_1 = (long *)&stack0x00000050;
      func_0x000107c27ae4();
    }
  }
  else {
    *unaff_x23 = unaff_w20;
    *(undefined8 *)(unaff_x23 + 2) = *param_4;
    unaff_x23[0xc] = 3;
  }
  *unaff_x19 = 0;
LAB_10bce62c4:
  func_0x00010bce73b4(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010bce7744();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bce7560();
  func_0x00010bce7494();
  func_0x00010bce75c4();
  func_0x00010bce73b4(uStack_18);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  *param_1 = 0xc;
  lVar1 = 0x28;
  func_0x000107c60e20();
  func_0x000107c2b9d0();
  *param_1 = lVar1 + 1;
  return param_1;
}



/* Entry: 10bce6320; end: 10bce6353;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

long * FUN_10bce6320(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uStack_18;
  
  func_0x00010bce7494();
  func_0x00010bce75c4();
  func_0x00010bce73b4(uStack_18);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  *param_1 = 0xc;
  lVar1 = 0x28;
  func_0x000107c60e20();
  func_0x000107c2b9d0();
  *param_1 = lVar1 + 1;
  return param_1;
}



/* Entry: 10bce6354; end: 10bce6383;  */

/* WARNING: Removing unreachable block (ram,0x00010047bec0) */

long * FUN_10bce6354(long *param_1)

{
  long lVar1;
  
  *param_1 = 0xc;
  lVar1 = 0x28;
  func_0x000107c60e20();
  func_0x000107c2b9d0();
  *param_1 = lVar1 + 1;
  return param_1;
}



/* Entry: 10bce6384; end: 10bce63df;  */

void FUN_10bce6384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  FUN_10bce6430(auStack_38,&UNK_10f83166c,0x39,param_2,param_3);
  func_0x00010bce73c8();
  func_0x00010bce7558();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10bce63e0; end: 10bce641f;  */

undefined8 * FUN_10bce63e0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_10bce6420(param_1 + 1);
  param_1[0x11] = 0;
  param_1[0x12] = &UNK_10e52b660;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = &UNK_10e52b660;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  return param_1;
}



/* Entry: 10bce6420; end: 10bce642f;  */

undefined8 * FUN_10bce6420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d9b1e0;
  param_1[1] = 0;
  FUN_10bce9424();
  return param_1;
}



/* Entry: 10bce6430; end: 10bce6463;  */

ulong * FUN_10bce6430(ulong *param_1,ulong *param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  int extraout_w10;
  undefined8 uStack_18;
  
  func_0x00010bce7494();
  func_0x00010bce75c4();
  func_0x00010bce73b4(uStack_18);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uVar1 = *param_2;
    *param_1 = uVar1;
    if ((uVar1 & 1) != 0) {
      do {
        func_0x00010bce7534();
      } while (extraout_w10 != 0);
    }
    FUN_10bce64b0(param_1);
    return param_1;
  }
  return param_1;
}



/* Entry: 10bce6464; end: 10bce64af;  */

ulong * FUN_10bce6464(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  int extraout_w10;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  if ((uVar1 & 1) != 0) {
    do {
      func_0x00010bce7534();
    } while (extraout_w10 != 0);
  }
  FUN_10bce64b0(param_1);
  return param_1;
}



/* Entry: 10bce64b0; end: 10bce64bf;  */

void FUN_10bce64b0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (*param_1 != 0) {
    return;
  }
  puStack_30 = &UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar2 = puStack_28;
  puVar1 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar2,puVar1);
  puVar2 = (undefined *)*param_1;
  if (puStack_30 != puVar2) {
    *param_1 = (long)puStack_30;
    puStack_30 = (undefined *)0x36;
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar2 = puStack_30;
  }
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 10bce64c0; end: 10bce650b;  */

ulong * FUN_10bce64c0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  int extraout_w10;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  if ((uVar1 & 1) != 0) {
    do {
      func_0x00010bce7534();
    } while (extraout_w10 != 0);
  }
  FUN_10bce650c(param_1);
  return param_1;
}



/* Entry: 10bce650c; end: 10bce6533;  */

void FUN_10bce650c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (*param_1 != 0) {
    return;
  }
  puStack_30 = &UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar2 = puStack_28;
  puVar1 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar2,puVar1);
  puVar2 = (undefined *)*param_1;
  if (puStack_30 != puVar2) {
    *param_1 = (long)puStack_30;
    puStack_30 = (undefined *)0x36;
    if (((ulong)puVar2 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar2 = puStack_30;
  }
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 10bce6534; end: 10bce6587;  */

void FUN_10bce6534(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  long *unaff_x19;
  long *unaff_x20;
  
  uVar2 = (uint)param_2;
  func_0x00010bce77e0();
  FUN_10bce6588();
  puVar1 = (undefined4 *)(unaff_x20[1] + param_1 * 0x10);
  if ((uVar2 & 1) != 0) {
    *puVar1 = *param_2;
    *(undefined8 *)(puVar1 + 2) = *param_3;
  }
  *unaff_x19 = *unaff_x20 + param_1;
  unaff_x19[1] = (long)puVar1;
  *(char *)(unaff_x19 + 2) = (char)uVar2;
  return;
}



/* Entry: 10bce6588; end: 10bce6663;  */

undefined1  [16] FUN_10bce6588(ulong *param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar10;
  byte bVar16;
  undefined1 auVar17 [16];
  
  lVar6 = 0;
  uVar7 = *param_1;
  Hint_Prefetch(uVar7,0,2,0);
  uVar3 = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar3;
  uVar3 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar3 * -0x622015f714c7d297;
  bVar4 = (byte)uVar3 & 0x7f;
  uVar3 = uVar3 >> 7 ^ uVar7 >> 0xc;
  while( true ) {
    uVar3 = uVar3 & param_1[2];
    uVar10 = *(undefined8 *)(uVar7 + uVar3);
    bVar9 = (byte)((ulong)uVar10 >> 8);
    bVar11 = (byte)((ulong)uVar10 >> 0x10);
    bVar12 = (byte)((ulong)uVar10 >> 0x18);
    bVar13 = (byte)((ulong)uVar10 >> 0x20);
    bVar14 = (byte)((ulong)uVar10 >> 0x28);
    bVar15 = (byte)((ulong)uVar10 >> 0x30);
    bVar16 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar16 == bVar4),
                          CONCAT16(-(bVar15 == bVar4),
                                   CONCAT15(-(bVar14 == bVar4),
                                            CONCAT14(-(bVar13 == bVar4),
                                                     CONCAT13(-(bVar12 == bVar4),
                                                              CONCAT12(-(bVar11 == bVar4),
                                                                       CONCAT11(-(bVar9 == bVar4),
                                                                                -((byte)uVar10 ==
                                                                                 bVar4)))))))) &
                 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      puVar5 = (ulong *)(uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_1[2]);
      if (*(uint *)(param_1[1] + (long)puVar5 * 0x10) == *param_2) {
        uVar10 = 0;
        goto LAB_10bce6648;
      }
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar16 == 0x80),
                                CONCAT16(-(bVar15 == 0x80),
                                         CONCAT15(-(bVar14 == 0x80),
                                                  CONCAT14(-(bVar13 == 0x80),
                                                           CONCAT13(-(bVar12 == 0x80),
                                                                    CONCAT12(-(bVar11 == 0x80),
                                                                             CONCAT11(-(bVar9 == 
                                                  0x80),-((byte)uVar10 == 0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  FUN_10bce6664();
  uVar10 = 1;
  puVar5 = param_1;
LAB_10bce6648:
  auVar17._8_8_ = uVar10;
  auVar17._0_8_ = puVar5;
  return auVar17;
}



/* Entry: 10bce6664; end: 10bce66e3;  */

void FUN_10bce6664(long *param_1,undefined *param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 extraout_x8;
  long extraout_x9;
  uint *puVar5;
  long lVar6;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar7;
  
  func_0x00010bce73e0();
  func_0x000107c2b954();
  func_0x00010bce77b0();
  if ((extraout_x9 == 0) && (func_0x00010bce77a4(), !(bool)in_ZR)) {
    func_0x00010bce77ec();
    if (((bool)in_CY) && (func_0x00010bce74f0(), (bool)in_CY)) {
      param_2 = &UNK_110d9ae98;
      func_0x00010bce7724();
    }
    else {
      func_0x00010bce765c();
      FUN_10bce66e4();
    }
    func_0x00010bce7528();
  }
  func_0x00010bce7330();
  func_0x00010bce73b4(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *param_1;
  puVar5 = (uint *)param_1[1];
  lVar6 = param_1[2];
  param_1[2] = (long)param_2;
  func_0x000104ab30b8();
  func_0x00010bce77bc();
  for (; lVar6 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(lVar1 + unaff_x24)) {
      uVar2 = *puVar5;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)uVar2;
      func_0x00010bce7528();
      func_0x00010bce741c((SUB164(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
                          (int)((long)&PTR_LOOP_110c8acd8 + (ulong)uVar2) * -0x14c7d297) & 0x7f);
      uVar7 = *(undefined8 *)puVar5;
      puVar4 = (undefined8 *)(unaff_x25 + (long)param_1 * 0x10);
      puVar4[1] = *(undefined8 *)(puVar5 + 2);
      *puVar4 = uVar7;
    }
    puVar5 = puVar5 + 4;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10bce66e4; end: 10bce678b;  */

void FUN_10bce66e4(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  uint *puVar5;
  long lVar6;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar7;
  
  lVar1 = *param_1;
  puVar5 = (uint *)param_1[1];
  lVar6 = param_1[2];
  param_1[2] = param_2;
  func_0x000104ab30b8();
  func_0x00010bce77bc();
  for (; lVar6 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(lVar1 + unaff_x24)) {
      uVar2 = *puVar5;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)uVar2;
      func_0x00010bce7528();
      func_0x00010bce741c((SUB164(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
                          (int)((long)&PTR_LOOP_110c8acd8 + (ulong)uVar2) * -0x14c7d297) & 0x7f);
      uVar7 = *(undefined8 *)puVar5;
      puVar4 = (undefined8 *)(unaff_x25 + (long)param_1 * 0x10);
      puVar4[1] = *(undefined8 *)(puVar5 + 2);
      *puVar4 = uVar7;
    }
    puVar5 = puVar5 + 4;
  }
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10bce678c; end: 10bce6833;  */

ulong FUN_10bce678c(undefined8 param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)*param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + (ulong)*param_2) * -0x622015f714c7d297;
}



/* Entry: 10bce6834; end: 10bce68ff;  */

long FUN_10bce6834(ulong *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x00010bce76bc();
  lVar6 = 0;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  func_0x00010bce7798(*param_1 >> 0xc ^ param_3 >> 7);
  uVar7 = extraout_x8;
  do {
    uVar7 = uVar7 & uVar3;
    func_0x00010bce778c();
    for (uVar8 = extraout_x8_00 & 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar4 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar7 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar3;
      plVar1 = (long *)(uVar2 + uVar9 * 0x20);
      uVar4 = plVar1[1];
      plVar5 = (long *)*plVar1;
      if (-1 < (char)*(byte *)((long)plVar1 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)plVar1 + 0x17);
        plVar5 = plVar1;
      }
      func_0x000107c27944(plVar5,uVar4,*unaff_x20,unaff_x20[1]);
      if ((int)plVar5 != 0) {
        return *unaff_x19 + uVar9;
      }
    }
    func_0x00010bce7568();
    if ((extraout_x8_01 & 1) != 0) {
      return 0;
    }
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7;
  } while( true );
}



/* Entry: 10bce6900; end: 10bce696b;  */

void FUN_10bce6900(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uVar5;
  
  uVar3 = (uint)param_2;
  func_0x00010bce77e0();
  FUN_10bce696c();
  if ((uVar3 & 1) != 0) {
    puVar1 = (undefined8 *)(unaff_x20[1] + param_1 * 0x20);
    uVar5 = param_2[1];
    uVar4 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar4 = *param_3;
    *param_3 = 0;
    puVar1[3] = uVar4;
  }
  lVar2 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + param_1;
  unaff_x19[1] = lVar2 + param_1 * 0x20;
  *(char *)(unaff_x19 + 2) = (char)uVar3;
  return;
}



/* Entry: 10bce696c; end: 10bce6a73;  */

undefined1  [16] FUN_10bce696c(undefined8 *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  func_0x00010bce76bc();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x00010bce78c4(*param_1);
  func_0x000107c284ac();
  lVar9 = 0;
  uVar10 = unaff_x19[2];
  func_0x00010bce7798(*unaff_x19 >> 0xc ^ (ulong)param_1 >> 7);
  uVar11 = extraout_x8;
  do {
    uVar11 = uVar11 & uVar10;
    func_0x00010bce778c();
    for (uVar12 = extraout_x8_00 & 0x8080808080808080; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar4 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar8 = (ulong *)(uVar11 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar10);
      puVar1 = (ulong *)(unaff_x19[1] + (long)puVar8 * 0x20);
      cVar3 = *(char *)((long)puVar1 + 0x17);
      uVar4 = unaff_x20[1];
      puVar5 = (undefined8 *)*unaff_x20;
      if (-1 < (char)*(byte *)((long)unaff_x20 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)unaff_x20 + 0x17);
        puVar5 = unaff_x20;
      }
      puVar6 = (ulong *)*puVar1;
      if (-1 < (long)cVar3) {
        puVar6 = puVar1;
      }
      uVar2 = puVar1[1];
      if (-1 < cVar3) {
        uVar2 = (long)cVar3;
      }
      func_0x000107c27944(puVar6,uVar2,puVar5,uVar4);
      if (((ulong)puVar6 & 1) != 0) {
        uVar7 = 0;
        goto LAB_10bce6a50;
      }
    }
    func_0x00010bce7568();
    if ((extraout_x8_01 & 1) != 0) {
      FUN_10bce6a74();
      uVar7 = 1;
      puVar8 = unaff_x19;
LAB_10bce6a50:
      auVar13._8_8_ = uVar7;
      auVar13._0_8_ = puVar8;
      return auVar13;
    }
    lVar9 = lVar9 + 8;
    uVar11 = lVar9 + uVar11;
  } while( true );
}



/* Entry: 10bce6a74; end: 10bce6aef;  */

void FUN_10bce6a74(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uStack_28;
  
  func_0x00010bce73e0();
  func_0x00010bce7800();
  func_0x00010bce77b0();
  if ((extraout_x9 == 0) && (func_0x00010bce77a4(), !(bool)in_ZR)) {
    func_0x00010bce77ec();
    if (((bool)in_CY) && (func_0x00010bce74f0(), (bool)in_CY)) {
      func_0x00010bce7724();
    }
    else {
      func_0x00010bce765c();
      FUN_10bce6af0();
    }
    func_0x00010bce7528();
  }
  func_0x00010bce7330();
  func_0x00010bce73b4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce75a8();
  func_0x000107c284a8();
  func_0x00010bce77bc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      lVar1 = unaff_x19;
      FUN_10bce6b6c();
      func_0x00010bce7604();
      func_0x00010bce741c(unaff_w21 & 0x7f);
      func_0x00010bce6b80(unaff_x25 + lVar1 * 0x20,param_2);
    }
    param_2 = param_2 + 0x20;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bce6af0; end: 10bce6b6b;  */

void FUN_10bce6af0(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00010bce75a8();
  func_0x000107c284a8();
  func_0x00010bce77bc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      lVar1 = unaff_x19;
      FUN_10bce6b6c();
      func_0x00010bce7604();
      func_0x00010bce741c(unaff_w21 & 0x7f);
      func_0x00010bce6b80(unaff_x25 + lVar1 * 0x20,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x20;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bce6b6c; end: 10bce6b9f;  */

void FUN_10bce6b6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_20 [2];
  
  func_0x00010bce78c4();
  auStack_20[0] = param_2;
  func_0x000100062cf8(auStack_20);
  return;
}



/* Entry: 10bce6ba0; end: 10bce6c1b;  */

void FUN_10bce6ba0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uStack_28;
  
  func_0x00010bce73e0();
  func_0x00010bce7800();
  func_0x00010bce77b0();
  if ((extraout_x9 == 0) && (func_0x00010bce77a4(), !(bool)in_ZR)) {
    func_0x00010bce77ec();
    if (((bool)in_CY) && (func_0x00010bce74f0(), (bool)in_CY)) {
      func_0x00010bce7724();
    }
    else {
      func_0x00010bce765c();
      FUN_10bce6c1c();
    }
    func_0x00010bce7528();
  }
  func_0x00010bce7330();
  func_0x00010bce73b4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce75a8();
  func_0x000107c284a8();
  func_0x00010bce77bc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      lVar1 = unaff_x19;
      FUN_10bce6c98();
      func_0x00010bce7604();
      func_0x00010bce741c(unaff_w21 & 0x7f);
      func_0x00010bce6cac(unaff_x25 + lVar1 * 0x20,param_2);
    }
    param_2 = param_2 + 0x20;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bce6c1c; end: 10bce6c97;  */

void FUN_10bce6c1c(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00010bce75a8();
  func_0x000107c284a8();
  func_0x00010bce77bc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      lVar1 = unaff_x19;
      FUN_10bce6c98();
      func_0x00010bce7604();
      func_0x00010bce741c(unaff_w21 & 0x7f);
      func_0x00010bce6cac(unaff_x25 + lVar1 * 0x20,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x20;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bce6c98; end: 10bce6ccb;  */

void FUN_10bce6c98(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_20 [2];
  
  func_0x00010bce78c4();
  auStack_20[0] = param_2;
  func_0x000100062cf8(auStack_20);
  return;
}



/* Entry: 10bce6ccc; end: 10bce6e5f;  */

void FUN_10bce6ccc(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) == '\x01') {
    *param_1 = "<unknown>";
    param_1[1] = 9;
    return;
  }
  func_0x000106e5c56c(param_1,"<unknown>");
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10bce6e60; end: 10bce6ee3;  */

void FUN_10bce6e60(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar3;
  long extraout_x9;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uStack_28;
  
  func_0x00010bce73e0();
  func_0x00010bce7800();
  func_0x00010bce77b0();
  if ((extraout_x9 == 0) && (func_0x00010bce77a4(), !(bool)in_ZR)) {
    func_0x00010bce77ec();
    if (((bool)in_CY) && (func_0x00010bce74f0(), (bool)in_CY)) {
      func_0x00010bce78a8();
    }
    else {
      func_0x00010bce765c();
      FUN_10bce6ee4();
    }
    func_0x00010bce7528();
  }
  func_0x00010bce7330();
  func_0x00010bce73b4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bce75a8();
  func_0x00010726210c();
  func_0x00010bce77bc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      uVar1 = *param_2;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)uVar1;
      lVar3 = unaff_x19;
      func_0x000107c2b954();
      func_0x00010bce741c((SUB164(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
                          (int)((long)&PTR_LOOP_110c8acd8 + (ulong)uVar1) * -0x14c7d297) & 0x7f);
      FUN_10bce6f90(unaff_x25 + lVar3 * 0x38,param_2);
    }
    param_2 = param_2 + 0xe;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bce6ee4; end: 10bce6f8f;  */

void FUN_10bce6ee4(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x19;
  uint *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00010bce75a8();
  func_0x00010726210c();
  func_0x00010bce77bc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      uVar1 = *unaff_x20;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (long)&PTR_LOOP_110c8acd8 + (ulong)uVar1;
      lVar3 = unaff_x19;
      func_0x000107c2b954();
      func_0x00010bce741c((SUB164(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^
                          (int)((long)&PTR_LOOP_110c8acd8 + (ulong)uVar1) * -0x14c7d297) & 0x7f);
      FUN_10bce6f90(unaff_x25 + lVar3 * 0x38,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0xe;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10bce6f90; end: 10bce7013;  */

void FUN_10bce6f90(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puStack_38;
  
  *param_1 = *param_2;
  puVar2 = param_1 + 2;
  *(undefined1 *)puVar2 = 0;
  param_1[0xc] = 0xffffffff;
  FUN_10bcdf79c(puVar2);
  uVar1 = param_2[0xc];
  if (uVar1 != 0xffffffff) {
    puStack_38 = puVar2;
    (*(code *)(&PTR_FUN_110d9aef8)[uVar1])(&puStack_38,param_2 + 2);
    param_1[0xc] = uVar1;
  }
  if (param_2[0xc] != 0xffffffff) {
    (*(code *)(&PTR_FUN_110d9ad78)[(uint)param_2[0xc]])(&stack0xffffffffffffffdf,param_2 + 2);
  }
  param_2[0xc] = 0xffffffff;
  return;
}



/* Entry: 10bce7014; end: 10bce70af;  */

void FUN_10bce7014(undefined8 *param_1,undefined1 *param_2)

{
  *(undefined1 *)*param_1 = *param_2;
  return;
}



/* Entry: 10bce70b0; end: 10bce71e7;  */

void FUN_10bce70b0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar4 = param_1[1];
  if (uVar4 < (ulong)param_1[2]) {
    func_0x00010bce7778();
    lVar9 = uVar4 + 0x28;
  }
  else {
    lVar9 = uVar4 - *param_1;
    uVar1 = lVar9 / 0x28 + 1;
    if (0x666666666666666 < uVar1) {
      FUN_10bce71e8();
LAB_10bce71e4:
      func_0x000104bd35f4();
      func_0x00010bce782c();
      func_0x000106e5c56c();
      *(undefined1 *)(uVar4 + 0x10) = 1;
      return;
    }
    uVar3 = (param_1[2] - *param_1) / 0x28;
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x333333333333332 < uVar3) {
      uVar8 = 0x666666666666666;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x666666666666666 < uVar8) goto LAB_10bce71e4;
      lVar5 = uVar8 * 0x28;
      __Znwm();
    }
    lVar9 = lVar5 + lVar9;
    func_0x00010bce7778(lVar9);
    lVar11 = *param_1;
    lVar2 = param_1[1];
    lVar10 = lVar9 + ((lVar2 - lVar11) / -0x28) * 0x28;
    lVar6 = lVar10;
    for (lVar7 = lVar11; lVar7 != lVar2; lVar7 = lVar7 + 0x28) {
      func_0x00010bce7778(lVar6);
      lVar6 = lVar6 + 0x28;
    }
    for (; lVar11 != lVar2; lVar11 = lVar11 + 0x28) {
      FUN_10bcdf718(lVar11 + 8);
    }
    lVar9 = lVar9 + 0x28;
    lVar7 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar9;
    param_1[2] = lVar5 + uVar8 * 0x28;
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10bce71e8; end: 10bce720f;  */

void FUN_10bce71e8(long param_1)

{
  func_0x00010bce782c();
  func_0x000106e5c56c();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 10bce7210; end: 10bce72cb;  */

void FUN_10bce7210(ulong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  
  puVar1 = (undefined1 *)param_1[1];
  if (puVar1 < (undefined1 *)param_1[2]) {
    puVar8 = puVar1 + 1;
    *puVar1 = (char)param_2;
  }
  else {
    uVar5 = *param_1;
    lVar6 = (long)puVar1 - uVar5;
    uVar7 = lVar6 + 1;
    if ((long)uVar7 < 0) {
      FUN_10bce72cc();
      func_0x00010bce782c();
      puVar3 = (undefined8 *)*param_1;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      uVar9 = *param_2;
      puVar3[1] = param_2[1];
      *puVar3 = uVar9;
      puVar3[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return;
    }
    uVar2 = (long)param_1[2] - uVar5;
    uVar4 = uVar2 * 2;
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar4 = uVar7;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar4;
      __Znwm();
    }
    puVar8 = (undefined1 *)(uVar7 + lVar6) + 1;
    *(undefined1 *)(uVar7 + lVar6) = (char)param_2;
    _memcpy(uVar7,uVar5,lVar6);
    *param_1 = uVar7;
    param_1[1] = (ulong)puVar8;
    param_1[2] = uVar7 + uVar4;
    if (uVar5 != 0) {
      __ZdlPv(uVar5);
    }
  }
  param_1[1] = (ulong)puVar8;
  return;
}



/* Entry: 10bce72cc; end: 10bce72d7;  */

void FUN_10bce72cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x00010bce782c();
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10bce72d8; end: 10bce794f;  */

void FUN_10bce72d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10bce7950; end: 10bce79c3;  */

undefined8 FUN_10bce7950(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_1 == INFINITY) {
    puVar1 = &UNK_10f831721;
    uVar2 = 10;
  }
  else if (param_1 == -INFINITY) {
    puVar1 = &UNK_10f83172c;
    uVar2 = 0xb;
  }
  else {
    if (!NAN(param_1)) {
      return 0;
    }
    puVar1 = &UNK_10f831738;
    uVar2 = 5;
  }
  func_0x00010bcdf610(param_2,puVar1,uVar2);
  return 1;
}



/* Entry: 10bce79c4; end: 10bce7aa7;  */

void FUN_10bce79c4(undefined8 param_1,long param_2,long param_3)

{
  func_0x00010bcdf610(param_1,&DAT_10f3b3c06,1);
  param_2 = param_2 + 1;
  while (2 < param_3) {
    FUN_10bce7db4();
    func_0x00010bce7de0();
    func_0x00010bce7dcc((&UNK_10f636fe2)[(ulong)*(byte *)(param_2 + 1) & 0x3f]);
    param_2 = param_2 + 3;
    param_3 = param_3 + -3;
  }
  if (param_3 == 1) {
    FUN_10bce7db4();
  }
  else {
    if (param_3 != 2) goto LAB_10bce7a7c;
    FUN_10bce7db4();
    func_0x00010bce7de0();
  }
  func_0x00010bce7dcc(0x3d);
LAB_10bce7a7c:
  func_0x00010bcdf610(param_1,&DAT_10f3b3c06,1);
  return;
}



/* Entry: 10bce7aa8; end: 10bce7d23;  */

void FUN_10bce7aa8(byte *param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  byte *pbStack_70;
  byte *pbStack_68;
  
  pbVar3 = param_1;
  pbVar4 = param_2;
joined_r0x00010bce7aec:
  pbStack_68 = pbVar4;
  pbStack_70 = pbVar3;
  if (param_3 == (byte *)0x0) {
    return;
  }
  bVar2 = *param_2;
  uVar7 = (uint)bVar2;
  lVar6 = 1;
  func_0x00010bce7dfc();
  lVar5 = LZCOUNT((uint)bVar2 << 0x18 ^ 0xffffffff);
  if ((uint)lVar5 < 5) {
    switch(lVar5) {
    case 1:
      goto LAB_10bce7ca4;
    case 2:
      uVar7 = bVar2 & 0x1f;
      lVar6 = 2;
      break;
    case 3:
      uVar7 = bVar2 & 0xf;
      lVar6 = 3;
      break;
    case 4:
      uVar7 = bVar2 & 7;
      lVar6 = 4;
    }
  }
  else {
LAB_10bce7ca4:
    uVar7 = 0xaaaaaaaa;
    lVar6 = 1;
  }
  lVar5 = lVar6;
  while (lVar5 = lVar5 + -1, pbVar3 = param_1, lVar5 != 0) {
    if (pbStack_68 == (byte *)0x0) goto LAB_10bce7cec;
    bVar2 = *pbStack_70;
    func_0x00010bce7dfc();
    if (-0x41 < (char)bVar2) goto LAB_10bce7cec;
    uVar7 = bVar2 & 0x3f | uVar7 << 6;
  }
  if (0x10 < uVar7 >> 0x10) {
LAB_10bce7cec:
    pbVar4 = (byte *)" ";
    lVar5 = 1;
    goto LAB_10bce7cf4;
  }
  pbVar4 = &DAT_10f47f589;
  lVar5 = 2;
  switch(uVar7) {
  case 8:
    pbVar4 = &UNK_10f580d67;
    break;
  case 9:
    pbVar4 = &DAT_10f47f586;
    break;
  case 10:
    goto LAB_10bce7cf4;
  case 0xb:
LAB_10bce7bd0:
    lVar5 = 0;
    do {
      if (lVar5 == 0x48) goto LAB_10bce7cf8;
      puVar1 = (ulong *)(&UNK_10e606610 + lVar5);
      lVar5 = lVar5 + 8;
    } while (uVar7 < (uint)*puVar1 || *puVar1 >> 0x20 < (ulong)uVar7);
    goto LAB_10bce7b68;
  case 0xc:
    pbVar4 = &UNK_10f580d6a;
    break;
  case 0xd:
    pbVar4 = &DAT_10f47f594;
    break;
  default:
    if (2 < uVar7 - 0xfff9 && 1 < uVar7 - 0x17b4) {
      if (uVar7 == 0x22) {
        pbVar4 = &DAT_10f47f5ef;
        break;
      }
      if ((uVar7 != 0x3c) && (uVar7 != 0x3e)) {
        if (uVar7 == 0x5c) {
          pbVar4 = &DAT_10f47f5f4;
          break;
        }
        if (((uVar7 != 0xad) && (uVar7 != 0x6dd)) &&
           ((uVar7 != 0x70f && uVar7 != 0xfeff) && uVar7 != 0xe0001)) goto LAB_10bce7bd0;
      }
    }
LAB_10bce7b68:
    if (uVar7 >> 0x10 == 0) {
      uVar7 = uVar7 & 0xffff;
    }
    else {
      FUN_10bce7d24(param_1,(uVar7 >> 10) - 0x2840 & 0xffff);
      uVar7 = (uVar7 | 0xfffffc00) & 0xdfff;
    }
    pbVar4 = (byte *)(ulong)uVar7;
    FUN_10bce7d24();
    param_2 = pbStack_70;
    param_3 = pbStack_68;
    goto joined_r0x00010bce7aec;
  }
  lVar5 = 2;
LAB_10bce7cf4:
  lVar6 = lVar5;
  param_2 = pbVar4;
LAB_10bce7cf8:
  func_0x00010bcdf610(param_1,param_2,lVar6);
  pbVar4 = param_2;
  param_2 = pbStack_70;
  param_3 = pbStack_68;
  goto joined_r0x00010bce7aec;
}



/* Entry: 10bce7d24; end: 10bce7db3;  */

void FUN_10bce7d24(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_3f [7];
  ulong uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = param_2 & 0xffffffff;
  puStack_30 = &UNK_10ae73c78;
  puVar1 = auStack_3f;
  func_0x00010ae742c4(puVar1,7,&UNK_10f56e0a9,6,&uStack_38,1);
  func_0x00010bcdf610(param_1,auStack_3f,(long)(int)puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10bce7db4; end: 10bce7e0b;  */

void FUN_10bce7db4(void)

{
  return;
}



/* Entry: 10bce7e0c; end: 10bce7e33;  */

long FUN_10bce7e0c(long param_1)

{
  func_0x000107c30e04(param_1 + 8);
  return param_1;
}



/* Entry: 10bce7e34; end: 10bce7e7b;  */

undefined8 * FUN_10bce7e34(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d9afb8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x00010bce7eac(param_1,param_3);
  return param_1;
}



/* Entry: 10bce7e7c; end: 10bce7e7f;  */

long FUN_10bce7e7c(long param_1)

{
  func_0x000107c30e04(param_1 + 8);
  return param_1;
}



/* Entry: 10bce7e80; end: 10bce7e93;  */

void FUN_10bce7e80(void)

{
  FUN_10bce7e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bce7e94; end: 10bce7ef7;  */

void FUN_10bce7e94(void)

{
  Hint_Prefetch(0x1134045f8,0,0,0);
  Hint_Prefetch(PTR_DAT_1134045f8,0,0,0);
  return;
}



/* Entry: 10bce7ef8; end: 10bce7f67;  */

long * FUN_10bce7ef8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    param_2 = param_3;
    func_0x000105991a14(param_3);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_2 = param_3;
    func_0x00010598f43c(param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  plVar1 = (long *)(uVar9 + 8);
  lVar12 = 0;
  plVar4 = plVar1;
  do {
    lVar10 = *plVar1;
    if ((int)((ulong)(*(long *)(uVar9 + 0x10) - lVar10) >> 4) <= lVar12) {
      return param_2;
    }
    piVar2 = (int *)(lVar10 + lVar12 * 0x10);
    func_0x00010bd3caf8();
    plVar7 = plVar4;
    param_2 = plVar4;
    switch(piVar2[1]) {
    case 0:
      plVar7 = *(long **)(piVar2 + 2);
      uVar5 = (ulong)(uint)(*piVar2 << 3);
      func_0x00010bd3c9d8(uVar5);
      func_0x000107c280ac(plVar7,uVar5);
      param_2 = plVar7;
      break;
    case 1:
      iVar3 = piVar2[2];
      plVar7 = (long *)(ulong)(*piVar2 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar7 = iVar3;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar10 = *(long *)(piVar2 + 2);
      plVar7 = (long *)(ulong)(*piVar2 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar7 = lVar10;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar3 = *piVar2;
      lVar10 = *(long *)(piVar2 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar13 = *param_3;
        uVar8 = iVar3 << 3;
        plVar7 = (long *)(ulong)uVar8;
        func_0x000107c280a4();
        if (lVar11 <= lVar13 + ~((long)plVar4 + (long)(int)plVar7) + 0x10) {
          lVar10 = (long)plVar4 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar10 + -2) = (byte)uVar8 | 0x80;
            lVar10 = lVar10 + 1;
          }
          *(byte *)(lVar10 + -2) = (byte)uVar8;
          *(char *)(lVar10 + -1) = (char)lVar11;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar10 + lVar11);
          break;
        }
      }
      plVar7 = param_3;
      func_0x00010b4d5120(param_3,iVar3,lVar10,plVar4);
      param_2 = plVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar2 << 3 | 3);
      func_0x00010bd3c9d8(uVar5);
      uVar6 = *(undefined8 *)(piVar2 + 2);
      FUN_10bd377f0(uVar6,uVar5,param_3);
      func_0x00010bd3ca0c();
      plVar7 = (long *)(ulong)(*piVar2 << 3 | 4);
      func_0x000107c280a8(plVar7,uVar6);
      param_2 = plVar7;
    }
    lVar12 = lVar12 + 1;
    plVar4 = plVar7;
  } while( true );
}



/* Entry: 10bce7f68; end: 10bce7fb7;  */

ulong FUN_10bce7f68(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)uVar2;
    return uVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(param_1 + uVar2);
  return param_1 + uVar2;
}



/* Entry: 10bce7fb8; end: 10bce7ffb;  */

void FUN_10bce7fb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d9afb8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10bce7ffc; end: 10bce8003;  */

void FUN_10bce7ffc(void)

{
  return;
}



/* Entry: 10bce8004; end: 10bce802b;  */

long FUN_10bce8004(long param_1)

{
  func_0x000107c30e04(param_1 + 8);
  return param_1;
}



/* Entry: 10bce802c; end: 10bce8073;  */

undefined8 * FUN_10bce802c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d9b028;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x00010bce80a4(param_1,param_3);
  return param_1;
}



/* Entry: 10bce8074; end: 10bce8077;  */

long FUN_10bce8074(long param_1)

{
  func_0x000107c30e04(param_1 + 8);
  return param_1;
}



/* Entry: 10bce8078; end: 10bce808b;  */

void FUN_10bce8078(void)

{
  FUN_10bce8004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10bce808c; end: 10bce80ef;  */

void FUN_10bce808c(void)

{
  Hint_Prefetch(0x113404738,0,0,0);
  Hint_Prefetch(PTR_DAT_113404738,0,0,0);
  return;
}



/* Entry: 10bce80f0; end: 10bce815f;  */

long * FUN_10bce80f0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    param_2 = param_3;
    func_0x000105991a14(param_3);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    param_2 = param_3;
    func_0x00010598f43c(param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  plVar1 = (long *)(uVar9 + 8);
  lVar12 = 0;
  plVar4 = plVar1;
  do {
    lVar10 = *plVar1;
    if ((int)((ulong)(*(long *)(uVar9 + 0x10) - lVar10) >> 4) <= lVar12) {
      return param_2;
    }
    piVar2 = (int *)(lVar10 + lVar12 * 0x10);
    func_0x00010bd3caf8();
    plVar7 = plVar4;
    param_2 = plVar4;
    switch(piVar2[1]) {
    case 0:
      plVar7 = *(long **)(piVar2 + 2);
      uVar5 = (ulong)(uint)(*piVar2 << 3);
      func_0x00010bd3c9d8(uVar5);
      func_0x000107c280ac(plVar7,uVar5);
      param_2 = plVar7;
      break;
    case 1:
      iVar3 = piVar2[2];
      plVar7 = (long *)(ulong)(*piVar2 << 3 | 5);
      func_0x00010bd3c9d8();
      *(int *)plVar7 = iVar3;
      param_2 = (long *)((long)plVar7 + 4);
      break;
    case 2:
      lVar10 = *(long *)(piVar2 + 2);
      plVar7 = (long *)(ulong)(*piVar2 << 3 | 1);
      func_0x00010bd3c9d8();
      *plVar7 = lVar10;
      param_2 = plVar7 + 1;
      break;
    case 3:
      iVar3 = *piVar2;
      lVar10 = *(long *)(piVar2 + 2);
      lVar11 = (long)*(char *)(lVar10 + 0x17);
      if ((-1 < lVar11) || (lVar11 = *(long *)(lVar10 + 8), lVar11 < 0x80)) {
        lVar13 = *param_3;
        uVar8 = iVar3 << 3;
        plVar7 = (long *)(ulong)uVar8;
        func_0x000107c280a4();
        if (lVar11 <= lVar13 + ~((long)plVar4 + (long)(int)plVar7) + 0x10) {
          lVar10 = (long)plVar4 + 2;
          for (uVar8 = uVar8 | 2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
            *(byte *)(lVar10 + -2) = (byte)uVar8 | 0x80;
            lVar10 = lVar10 + 1;
          }
          *(byte *)(lVar10 + -2) = (byte)uVar8;
          *(char *)(lVar10 + -1) = (char)lVar11;
          func_0x00010bd3cc08();
          _memcpy();
          param_2 = (long *)(lVar10 + lVar11);
          break;
        }
      }
      plVar7 = param_3;
      func_0x00010b4d5120(param_3,iVar3,lVar10,plVar4);
      param_2 = plVar7;
      break;
    case 4:
      uVar5 = (ulong)(*piVar2 << 3 | 3);
      func_0x00010bd3c9d8(uVar5);
      uVar6 = *(undefined8 *)(piVar2 + 2);
      FUN_10bd377f0(uVar6,uVar5,param_3);
      func_0x00010bd3ca0c();
      plVar7 = (long *)(ulong)(*piVar2 << 3 | 4);
      func_0x000107c280a8(plVar7,uVar6);
      param_2 = plVar7;
    }
    lVar12 = lVar12 + 1;
    plVar4 = plVar7;
  } while( true );
}



/* Entry: 10bce8160; end: 10bce81b7;  */

ulong FUN_10bce8160(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = (int)uVar2;
    return uVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10bd36610();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_10bd37a78();
  *puVar1 = (int)(param_1 + uVar2);
  return param_1 + uVar2;
}


