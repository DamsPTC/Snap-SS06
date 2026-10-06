/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1c4ae8; end: 10b1c4c0b;  */

long FUN_10b1c4ae8(long param_1)

{
  long lVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_60 [16];
  long lStack_50;
  long alStack_48 [2];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x178) & 1) != 0) {
    return param_1 + 0x138;
  }
  lVar1 = param_1 + 0x218;
  FUN_10b1c8334();
  if (lVar1 != 0) {
    return lVar1;
  }
  FUN_10b1cfb94(alStack_48,param_1 + 0x1d8);
  if (alStack_48[0] == 0) {
    param_1 = 0;
    goto LAB_10b1c4bd4;
  }
  FUN_10b1bebd0(auStack_60);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_38,param_1 + 0x20);
    uStack_78 = *(undefined4 *)(param_1 + 0x18);
    uStack_88 = uStack_30;
    uStack_90 = uStack_38;
    uStack_80 = uStack_28;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar1 = lStack_50;
    FUN_10b1bf250(lStack_50,&uStack_90);
    func_0x00010b1eb738();
    if (lVar1 == 0) goto LAB_10b1c4bc0;
    FUN_10b1c8174(&uStack_90,lVar1 + 0x48);
    func_0x00010b1218e8(param_1 + 0x218,&uStack_90);
    func_0x00010b121b8c(&uStack_90);
    param_1 = param_1 + 0x218;
    FUN_10b1c8334(param_1);
  }
  else {
LAB_10b1c4bc0:
    param_1 = 0;
  }
  func_0x000107c2798c(auStack_60);
LAB_10b1c4bd4:
  func_0x00010b1de708(alStack_48);
  return param_1;
}



/* Entry: 10b1c4c0c; end: 10b1c4c87;  */

bool FUN_10b1c4c0c(int param_1)

{
  FUN_10b1c4a78();
  return param_1 != 0;
}



/* Entry: 10b1c4c88; end: 10b1c4d47;  */

long FUN_10b1c4c88(long param_1)

{
  undefined1 in_ZR;
  long extraout_x9;
  long lVar1;
  undefined1 auStack_78 [48];
  undefined1 auStack_48 [24];
  long lStack_30;
  
  if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
    lVar1 = param_1 + 0x248;
    FUN_10b1e4e00();
    if (lVar1 == 0) {
      FUN_10b1edb04();
      if (lStack_30 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_10b1bebd0(auStack_48);
        func_0x00010b1ed728();
        if ((bool)in_ZR) {
          FUN_10b1c1ef4(auStack_78,extraout_x9 + 0xf8);
          func_0x00010b12191c(param_1 + 0x248,auStack_78);
          func_0x00010b121b68(auStack_78);
          lVar1 = param_1 + 0x248;
          FUN_10b1e4e00(lVar1);
        }
        else {
          lVar1 = 0;
        }
        func_0x00010b1ebe94();
      }
      func_0x00010b1ecf24();
    }
  }
  else {
    lVar1 = param_1 + 0x180;
  }
  return lVar1;
}



/* Entry: 10b1c4d48; end: 10b1c4e37;  */

bool FUN_10b1c4d48(long param_1)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lStack_60;
  long lStack_58;
  long alStack_50 [3];
  ulong *puStack_38;
  ulong *puStack_30;
  undefined8 uStack_28;
  
  FUN_10b1c4c88();
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    puStack_38 = (ulong *)0x0;
    puStack_30 = (ulong *)0x0;
    uStack_28 = 0;
    func_0x00010564c19c(alStack_50);
    while (alStack_50[0] != 0) {
      if ((*(int *)(alStack_50[0] + 0x44) == 2) && (*(long *)(alStack_50[0] + 0x30) != 0)) {
        lStack_58 = *(long *)(*(long *)(alStack_50[0] + 0x38) + 0x10);
        lStack_60 = lStack_58 + *(long *)(alStack_50[0] + 0x30);
        FUN_10b1c4e38(&puStack_38,&lStack_58,&lStack_60);
      }
      func_0x000107c27d54(alStack_50);
    }
    func_0x00010b1c4e7c(&UNK_10e565f1d,&puStack_38);
    uVar4 = 0;
    puVar3 = puStack_38;
    while ((bVar2 = puVar3 == puStack_30, !bVar2 && (uVar4 <= *puVar3))) {
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 2;
      uVar4 = *puVar1;
    }
    func_0x00010802fa78(&puStack_38);
    return bVar2;
  }
  return true;
}



/* Entry: 10b1c4e38; end: 10b1c4f2b;  */

undefined8 * FUN_10b1c4e38(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x00010b1ed574();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_10b1d6748();
  }
  else {
    *extraout_x8 = *param_2;
    extraout_x8[1] = *param_3;
    puVar1 = extraout_x8 + 2;
  }
  unaff_x19[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 10b1c4f2c; end: 10b1c51e7;  */

void FUN_10b1c4f2c(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong uVar7;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_178;
  undefined1 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_80;
  undefined1 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  long lStack_40;
  ulong uStack_38;
  long lStack_30;
  ulong uStack_28;
  long lStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  func_0x00010b1ec024();
  func_0x00010b1ebe28();
  func_0x00010b1ee4f0();
  func_0x00010b1ebb5c(&uStack_470);
  lVar4 = lStack_460;
  func_0x00010b1edf14();
  func_0x00010b1edee8(&uStack_1f8,*(undefined4 *)(param_3 + 0x18));
  lVar4 = lVar4 + 0x28;
  func_0x000107c28108(lVar4,&uStack_1f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1f8);
  if (lVar4 == 0) {
    *(undefined4 *)(unaff_x19 + 0x4f) = 0;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&uStack_18,lVar4 + 0x28);
  }
  func_0x00010b1eb9c4();
  if (lVar4 == 0) goto LAB_10b1c5110;
  func_0x00010b1eca58(&uStack_470);
  func_0x00010b1edf14();
  lVar4 = lStack_460 + 0x108;
  FUN_10b1e4440(lVar4,&uStack_18);
  if (lVar4 == 0) {
    uVar7 = 0;
    uStack_28 = 0;
    lStack_20 = 0;
  }
  else {
    uVar7 = *(ulong *)(lVar4 + 0x28);
    lStack_20 = *(long *)(lVar4 + 0x30);
    uStack_28 = uVar7;
    if (lStack_20 != 0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b1eb9c4();
  if (uVar7 == 0) {
    *(undefined4 *)(unaff_x19 + 0x4f) = 0;
  }
  else {
    lVar4 = uVar7 + 0x40;
    uVar5 = uVar7;
    __ZNSt3__15mutex8try_lockEv();
    lStack_58 = lVar4;
    if ((int)uVar5 == 0) {
      lStack_58 = 0;
    }
    if (*(char *)(unaff_x20 + 0x76) == '\x01') {
      uStack_38 = uStack_28;
      lStack_30 = lStack_20;
      if (lStack_20 != 0) {
        plVar1 = (long *)(lStack_20 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
      uStack_38 = 0;
      lStack_30 = 0;
    }
    uStack_48 = (undefined1)uVar5;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_50 = uVar7;
    lStack_40 = lStack_58;
    func_0x00010b1de708(&uStack_78);
    func_0x000107c2798c(&uStack_68);
    if ((uVar5 & 1) == 0) {
      uStack_468 = uStack_10;
      uStack_470 = uStack_18;
      func_0x00010b1ee4f0(uStack_8);
      unaff_x19[1] = uStack_10;
      *unaff_x19 = uStack_18;
      unaff_x19[2] = extraout_x8;
      func_0x00010b1ec8f8();
      *(undefined4 *)(unaff_x19 + 0x4f) = 1;
      func_0x00010b1eb738();
    }
    else {
      if ((((*(byte *)(uVar7 + 0x80) & 1) != 0) || (*(char *)(uVar7 + 0x1a2) == '\x01')) &&
         ((param_4 == 0 || ((*(byte *)(uVar7 + 0x170) & 1) != 0)))) {
        lVar6 = (long)*(char *)(uVar7 + 0x57);
        if (lVar6 < 0) {
          lVar6 = *(long *)(uVar7 + 0x48);
        }
        if (((lVar6 != 0) && (FUN_10b1bf250(lVar4,param_3), lVar4 != 0)) &&
           (*(long *)(lVar4 + 0x30) == 0)) {
          uStack_1f0 = 0;
          uStack_1f8 = 0;
          uStack_1d0 = 0;
          uStack_1d8 = 0;
          uStack_1c0 = 0;
          uStack_1c8 = 0;
          uStack_1e8 = 0;
          uStack_1b0 = 0;
          uStack_1a0 = 0;
          uStack_1a8 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          func_0x00010b1ee018(&uStack_470);
          func_0x00010b1eb714();
          FUN_10b121c1c();
          *(undefined4 *)(unaff_x19 + 0x4f) = 2;
          func_0x00010b1ebb80();
          FUN_10b1213b8(&uStack_1f8);
          goto LAB_10b1c5104;
        }
      }
      *(undefined4 *)(unaff_x19 + 0x4f) = 0;
    }
LAB_10b1c5104:
    func_0x00010b1d3e60(&uStack_50);
  }
  func_0x00010b1edad8();
LAB_10b1c5110:
  func_0x00010b1edf4c();
  return;
}



/* Entry: 10b1c51e8; end: 10b1c52c7;  */

void FUN_10b1c51e8(void)

{
  undefined1 auStack_408 [24];
  undefined1 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined1 auStack_2d0 [640];
  
  func_0x00010b1ecf44(auStack_408);
  uStack_3f0 = 0;
  func_0x00010b1ec904();
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  func_0x00010b1ee4b8(auStack_2d0);
  FUN_10b1c446c();
  func_0x00010b1ec240();
  func_0x00010b1ecca8();
  func_0x00010b1ed368();
  return;
}



/* Entry: 10b1c52c8; end: 10b1c53bb;  */

void FUN_10b1c52c8(long param_1)

{
  long extraout_x8;
  undefined1 auStack_440 [24];
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined8 uStack_404;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined1 auStack_2c0 [640];
  
  func_0x00010b1eb434();
  if (extraout_x8 != 0) {
    func_0x00010b1eb8e4();
    func_0x00010b1ecf44(auStack_440);
    func_0x00010b1ec904();
    uStack_420 = 0;
    uStack_428 = 0;
    uStack_410 = 0;
    uStack_418 = 0;
    uStack_404 = 0;
    uStack_40c = 0;
    uStack_408 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_3f8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    func_0x00010b1eb6f8(auStack_2c0);
    FUN_10b1c446c();
    func_0x00010b1ec240();
    func_0x00010b1ecca8();
    func_0x00010b1ed368();
    return;
  }
  func_0x00010b1ead30();
  *(undefined1 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_1 + 0x1c8,0xb0);
  return;
}



/* Entry: 10b1c53bc; end: 10b1c5423;  */

void FUN_10b1c53bc(void)

{
  ulong in_x4;
  
  func_0x00010b1ee250();
  func_0x00010b1eb424();
  if ((in_x4 & 1) == 0) {
    FUN_10b1c5424();
  }
  func_0x00010b1eb6f8();
  FUN_10b1c52c8();
  func_0x00010b1eb6f8();
  FUN_10b1c545c();
  return;
}



/* Entry: 10b1c5424; end: 10b1c545b;  */

bool FUN_10b1c5424(long param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x6c0) != '\x01') {
    return false;
  }
  lVar4 = (long)*(int *)(param_1 + 0x6a8) << 2;
  piVar3 = *(int **)(param_1 + 0x6b0);
  do {
    bVar2 = lVar4 != 0;
    if (lVar4 == 0) {
      return bVar2;
    }
    iVar1 = *piVar3;
    lVar4 = lVar4 + -4;
    piVar3 = piVar3 + 1;
  } while (iVar1 == 0);
  return bVar2;
}



/* Entry: 10b1c545c; end: 10b1c569f;  */

void FUN_10b1c545c(undefined1 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *unaff_x19;
  long lVar6;
  undefined8 *unaff_x21;
  undefined8 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [24];
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined1 uStack_d8;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_68;
  
  puVar5 = &uStack_120;
  puVar7 = &uStack_120;
  func_0x00010b1eaf40();
  puVar8 = param_1;
  uStack_68 = extraout_x8;
  if (((((*(byte *)(param_3 + 0x1c2) & 1) == 0) &&
       (func_0x00010b1eb434(), puVar8 = param_1, extraout_x8_00 != 0)) &&
      ((*(byte *)(param_3 + 0x88) & 1) != 0)) &&
     (in_ZR = *(long *)(param_3 + 0x80) == 0, *(long *)(param_3 + 0x80) < 1)) {
    func_0x00010b1eb8f0();
    FUN_10b1c41c0();
    puVar8 = param_1;
    unaff_x21 = param_2;
    if (param_1 != (undefined1 *)0x0) {
      if ((((byte)param_1[0x10] >> 4 & 1) == 0) ||
         (puVar8 = unaff_x19, FUN_10b1c9560(), ((ulong)puVar8 & 0x100000000) == 0)) {
        if ((((byte)param_1[0x10] >> 4 & 1) == 0) ||
           (*(int *)(*(long *)(param_1 + 0x70) + 0x88) != 0)) goto LAB_10b1c548c;
        uVar11 = *(uint *)(*(long *)(param_1 + 0x70) + 0x70);
        puVar8 = (undefined1 *)(ulong)uVar11;
        FUN_10b24a690();
        uVar9 = (int)puVar8 - 1;
        in_ZR = uVar9 == 3;
        if ((3 < uVar9) || (puVar8 = unaff_x19, FUN_10b1c9560(), (ulong)puVar8 >> 0x20 == 0))
        goto LAB_10b1c548c;
        uVar9 = uVar11 & 0xffffff00;
        uVar11 = uVar11 & 0xff;
        uVar10 = 1;
      }
      else {
        uVar9 = 0;
        uVar11 = 0;
        uVar10 = 0;
        puVar8 = (undefined1 *)((ulong)puVar8 & 0x1ffffffff);
      }
      *(undefined1 *)(param_3 + 0x1c2) = 1;
      func_0x00010b1ecd44(&uStack_120);
      func_0x00010b1ec1fc(auStack_110);
      plVar3 = &lStack_f8;
      func_0x00010b1ec76c();
      uStack_dc = uVar11 | uVar9;
      uStack_e0 = SUB84(puVar8,0);
      lVar6 = *(long *)(unaff_x19 + 0x6c8);
      uStack_d8 = uVar10;
      func_0x00010b1ecd34();
      in_ZR = lVar6 == *plVar3;
      if ((bool)in_ZR) {
        FUN_10b1c9600(&uStack_120);
      }
      else {
        uStack_c8 = 0x10b1e6a84;
        ppuStack_c0 = &PTR_FUN_110cc4478;
        puVar4 = (undefined8 *)0x50;
        __Znwm();
        puVar4[1] = uStack_118;
        *puVar4 = uStack_120;
        uStack_120 = 0;
        uStack_118 = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (puVar4 + 2,auStack_110);
        uVar2 = uStack_e8;
        uVar1 = uStack_f0;
        lVar6 = lStack_f8;
        uStack_f0 = 0;
        uStack_e8 = 0;
        lStack_f8 = 0;
        *(undefined1 *)(puVar4 + 9) = uStack_d8;
        puVar7 = &uStack_c8;
        puVar4[6] = uVar1;
        puVar4[5] = lVar6;
        puVar4[7] = uVar2;
        puVar4[8] = CONCAT44(uStack_dc,uStack_e0);
        puStack_b8 = puVar4;
        func_0x00010b1ed83c();
        func_0x00010b1ecb00();
        func_0x00010b1eafb4(ppuStack_c0);
      }
      FUN_10b1c9768();
      puVar8 = (undefined1 *)puVar5;
      unaff_x21 = puVar7;
    }
  }
LAB_10b1c548c:
  func_0x00010b1eaddc(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eafb4(ppuStack_c0);
  FUN_10b1c9768(&uStack_120);
  func_0x00010b1eb590();
  func_0x00010b1ee250();
  func_0x00010b1eb424();
  if ((param_5 & 1) == 0) {
    FUN_10b1c5424(unaff_x21);
  }
  func_0x00010b1eb6f8(puVar8);
  FUN_10b1c51e8();
  func_0x00010b1eb6f8();
  FUN_10b1c545c();
  return;
}



/* Entry: 10b1c56a0; end: 10b1c5707;  */

void FUN_10b1c56a0(void)

{
  ulong in_x4;
  
  func_0x00010b1ee250();
  func_0x00010b1eb424();
  if ((in_x4 & 1) == 0) {
    FUN_10b1c5424();
  }
  func_0x00010b1eb6f8();
  FUN_10b1c51e8();
  func_0x00010b1eb6f8();
  FUN_10b1c545c();
  return;
}



/* Entry: 10b1c5708; end: 10b1c589b;  */

undefined1 *
FUN_10b1c5708(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  ulong uVar4;
  undefined1 auStack_440 [80];
  undefined1 auStack_3a0 [40];
  undefined8 uStack_378;
  undefined1 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [136];
  byte bStack_2c8;
  long *aplStack_d8 [2];
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [136];
  undefined8 uStack_8;
  
  func_0x00010b1ee670();
  lVar3 = param_5;
  func_0x00010b1eb8e4();
  func_0x00010b1eaf40();
  uStack_8 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_6,lVar3);
  func_0x00010b1eb6f8(aplStack_d8);
  FUN_10b1c589c();
  puVar2 = (undefined8 *)(param_5 + 0x38);
  (**(code **)(*aplStack_d8[0] + 0x40))(aplStack_d8[0],param_3,param_4 + 0x38);
  if ((int)aplStack_d8[0] == 0) {
    uStack_378 = uStack_c8;
    uStack_370 = uStack_c0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_360 = uStack_b0;
    uStack_368 = uStack_b8;
    uStack_358 = uStack_a8;
    uStack_a8 = 0;
    uStack_b0 = 0;
    auStack_a0[0] = param_7;
    func_0x00010b1d73bc(auStack_90,param_5,auStack_a0);
    FUN_10b1e4e64(auStack_3a0,auStack_90,1);
    puVar2 = &uStack_378;
    func_0x00010b1eb6f8(auStack_350);
    FUN_10b1c59f4();
    uVar4 = (ulong)bStack_2c8;
    func_0x00010b121af0(auStack_350);
    func_0x00010b1e5290(auStack_3a0);
    func_0x00010b1d73e8(auStack_90);
    func_0x00010b1ebe9c();
  }
  else {
    uVar4 = 0;
  }
  func_0x00010b1d7410(aplStack_d8);
  func_0x00010b1eaddc(uStack_8);
  if ((bool)in_ZR) {
    return (undefined1 *)(ulong)((uint)uVar4 & 1);
  }
  ___stack_chk_fail();
  func_0x00010b1eb5a0();
  func_0x00010b1e5290();
  func_0x00010b1d73e8(auStack_90);
  func_0x00010b1ebe9c();
  func_0x00010b1d7410(aplStack_d8);
  func_0x00010b1eb590();
  func_0x00010b1eb424();
  extraout_x8_00[4] = 0;
  extraout_x8_00[5] = 0;
  extraout_x8_00[6] = 0;
  extraout_x8_00[1] = 0;
  extraout_x8_00[2] = 0;
  *extraout_x8_00 = 0;
  *(undefined1 *)(extraout_x8_00 + 3) = 0;
  func_0x00010b1eb674(auStack_440);
  func_0x00010b1ede38();
  func_0x00010b1ebe64();
  if ((*(long *)(uVar4 + 0x20) != 0) && (func_0x00010b1ec3bc(), (bool)in_ZR)) {
    if (*(int *)(extraout_x8_01 + 0x1c) == *(int *)((long)puVar2 + 4)) {
      func_0x00010b1eb6f8(auStack_440);
      FUN_10b1c1ff0();
      goto LAB_10b1c59a0;
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    *(undefined1 *)(uVar4 + 0x18) = 0;
    *(undefined8 *)(uVar4 + 0x28) = 0;
    *(undefined8 *)(uVar4 + 0x30) = 0;
    func_0x00010b1eb6f8(auStack_440);
    func_0x00010b1ed914();
    FUN_10b1d6520(auStack_440);
    func_0x00010b1ec1ec();
    func_0x00010b1eb6f8(auStack_440);
    func_0x00010b1eb674();
    func_0x00010b1ede38();
    func_0x00010b1ebe64();
  }
  func_0x00010b1eb6f8(auStack_440);
  FUN_10b1c1ff0();
LAB_10b1c59a0:
  FUN_10b1c1fcc(uVar4,auStack_440);
  puVar1 = auStack_440;
  func_0x00010b125864(puVar1);
  return puVar1;
}



/* Entry: 10b1c589c; end: 10b1c59f3;  */

void FUN_10b1c589c(void)

{
  undefined1 in_ZR;
  long in_x3;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  undefined1 auStack_a0 [80];
  
  func_0x00010b1eb424();
  extraout_x8[4] = 0;
  extraout_x8[5] = 0;
  extraout_x8[6] = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = 0;
  *(undefined1 *)(extraout_x8 + 3) = 0;
  func_0x00010b1eb674(auStack_a0);
  func_0x00010b1ede38();
  func_0x00010b1ebe64();
  if ((*(long *)(unaff_x19 + 0x20) != 0) && (func_0x00010b1ec3bc(), (bool)in_ZR)) {
    if (*(int *)(extraout_x8_00 + 0x1c) == *(int *)(in_x3 + 4)) {
      func_0x00010b1eb6f8(auStack_a0);
      FUN_10b1c1ff0();
      goto LAB_10b1c59a0;
    }
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined1 *)(unaff_x19 + 0x18) = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
    func_0x00010b1eb6f8(auStack_a0);
    func_0x00010b1ed914();
    FUN_10b1d6520(auStack_a0);
    func_0x00010b1ec1ec();
    func_0x00010b1eb6f8(auStack_a0);
    func_0x00010b1eb674();
    func_0x00010b1ede38();
    func_0x00010b1ebe64();
  }
  func_0x00010b1eb6f8(auStack_a0);
  FUN_10b1c1ff0();
LAB_10b1c59a0:
  FUN_10b1c1fcc();
  func_0x00010b125864(auStack_a0);
  return;
}



/* Entry: 10b1c59f4; end: 10b1c6773;  */

void FUN_10b1c59f4(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,long param_5,
                  int param_6,uint param_7)

{
  int iVar1;
  undefined4 uVar2;
  long ****pppplVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long ******pppppplVar11;
  byte *pbVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long ******extraout_x8_05;
  long lVar16;
  ulong uVar17;
  long *****ppppplVar18;
  long lVar19;
  long *plVar20;
  long *****ppppplVar21;
  long lVar22;
  byte bVar23;
  long *plVar24;
  int iVar25;
  long lVar26;
  long *****ppppplStack_6d0;
  undefined1 auStack_6b8 [24];
  long alStack_6a0 [3];
  long alStack_688 [2];
  undefined8 uStack_678;
  undefined1 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long ****pppplStack_650;
  long ****pppplStack_648;
  long lStack_640;
  long lStack_638;
  undefined8 uStack_630;
  undefined1 auStack_3d0 [16];
  undefined1 auStack_3c0 [40];
  long lStack_398;
  undefined8 uStack_390;
  long *****ppppplStack_388;
  long *****ppppplStack_380;
  long *****ppppplStack_378;
  byte *pbStack_370;
  code *pcStack_368;
  undefined **ppuStack_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  long ****pppplStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  int iStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [640];
  code *pcStack_80;
  undefined **ppuStack_78;
  long alStack_70 [11];
  long lStack_18;
  
  func_0x00010b1ec024();
  func_0x00010b1eae84();
  if (((*(long *)(param_5 + 0x18) == 0) || (lVar10 = param_4[2], lVar10 == 0)) ||
     ((*(byte *)(lVar10 + 0x130) & 1) == 0)) {
    func_0x00010b1ead30();
    *(undefined1 *)(extraout_x8 + 0x18) = 0;
    func_0x00010b1eaf40();
    if (extraout_x8_00 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(extraout_x8 + 0x1c8,0xb0);
      return;
    }
  }
  else {
    uVar5 = *(char *)(lVar10 + 0x40) == '\x01';
    if (((!(bool)uVar5) || ((*(byte *)(lVar10 + 0x160) & 1) != 0)) ||
       (uVar5 = *(long *)(lVar10 + 0x38) == 1, 0 < *(long *)(lVar10 + 0x38))) {
      FUN_10b1b953c(lVar10,*(undefined1 *)(param_3 + 0x120));
    }
    if (param_6 == 0) {
LAB_10b1c5af4:
      bVar6 = false;
    }
    else {
      bVar6 = *(char *)(param_4[2] + 0x160) != '\x01';
      bVar7 = *(int *)(param_3 + 0x40) == 5;
      uVar5 = bVar6 || bVar7;
      if (!bVar6 && !bVar7) {
        func_0x00010b1ebbd4(*(undefined1 *)(param_3 + 0x5f));
        if (extraout_x8_01 == 0) {
          lVar10 = param_3 + 0x48;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar10,param_3);
        }
        goto LAB_10b1c5af4;
      }
      bVar6 = true;
    }
    pbStack_370 = (byte *)0x0;
    func_0x00010b1eb6f8();
    FUN_10b1bf378();
    ppppplVar21 = (long *****)0x0;
    if (lVar10 == 0) {
LAB_10b1c5b64:
      __ZNSt3__16chrono12system_clock3nowEv();
    }
    else {
      func_0x00010b1eb6f8(&pppplStack_350);
      FUN_10b1be290();
      FUN_10b1c76a8(&pbStack_370,&pppplStack_350);
      ppppplVar21 = &pppplStack_350;
      func_0x000107c29c20();
      uVar5 = *(char *)(param_4[2] + 0x160) == '\x01';
      if (!(bool)uVar5) goto LAB_10b1c5b64;
      ppppplVar21 = *(long ******)(lVar10 + 0x40);
    }
    if ((!bVar6) && (uVar5 = *(long *)(param_3 + 0x68) == 1, 0 < *(long *)(param_3 + 0x68))) {
      uVar14 = *(undefined8 *)(param_1 + 0x238);
      FUN_10b12983c(&pppplStack_350,*(undefined4 *)(param_3 + 0x40));
      func_0x00010b1eb654(&pppplStack_650,&pppplStack_350);
      FUN_10b11ef50(uVar14,0xaa,&pppplStack_650,
                    (*(long *)(param_3 + 0x68) - (long)ppppplVar21) / 3600000000);
      FUN_10b120998(&pppplStack_650);
      func_0x00010b1eb5ac(&pppplStack_350);
    }
    lVar15 = param_4[2];
    *(long ******)(lVar15 + 0x60) = ppppplVar21;
    if (*(long *)(lVar15 + 0x30) == 0) {
      *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    }
    func_0x00010b1ed464();
    lVar15 = *(long *)(extraout_x8_02 + 0x20);
    func_0x00010b1ee218();
    if ((bool)uVar5) {
      func_0x00010b1ebb18(&lStack_398);
      if (lStack_398 == 0) goto LAB_10b1c5c1c;
      FUN_10b123ab4(auStack_3d0);
    }
    else {
      uStack_390 = 0;
      lStack_398 = 0;
LAB_10b1c5c1c:
      func_0x00010b1246a0(auStack_3d0);
    }
    if (lStack_398 == 0) {
      bVar6 = false;
    }
    else {
      bVar6 = 0 < *(int *)(lStack_398 + 0x10);
    }
    bVar7 = false;
    lVar22 = 0;
    plVar20 = (long *)(param_5 + 0x10);
    plVar24 = plVar20;
    while (lVar19 = lStack_398, plVar24 = (long *)*plVar24, plVar24 != (long *)0x0) {
      lVar26 = plVar24[0xc];
      if ((*(byte *)(plVar24 + 8) & 1) == 0) {
        lVar19 = *(long *)(param_4[2] + 0x20);
        *(long *)(param_4[2] + 0x20) = lVar26;
        if (ppppplStack_380 < ppppplStack_378) {
          ppppplVar21 = (long *****)plVar24[0xc];
          *ppppplStack_380 = (long ****)0x0;
          ppppplStack_380[1] = (long ****)ppppplVar21;
          ppppplStack_380 = ppppplStack_380 + 2;
        }
        else {
          func_0x00010b1ee170();
          func_0x00010b1edc38(extraout_x8_04 >> 4);
          func_0x00010b1ee170(ppppplStack_380);
          func_0x00010b1eccf4();
          lVar16 = plVar24[0xc];
          *plStack_340 = 0;
          plStack_340[1] = lVar16;
          func_0x00010b1ebee8(plStack_340 + 2);
          func_0x00010b1eb960();
          ppppplStack_380 = ppppplStack_6d0;
        }
        lVar22 = (lVar26 + lVar22) - lVar19;
        bVar7 = true;
      }
      else {
        func_0x00010b1ed92c();
        func_0x00010b1631b0(&pcStack_80,lVar19 + 0x10,&pppplStack_350);
        lVar22 = lVar26 + lVar22;
        func_0x00010b1ec9b0();
        if (pcStack_80 != (code *)0x0) {
          lVar22 = lVar22 - *(long *)(pcStack_80 + 0x30);
        }
        if ((char)plVar24[0x12] == '\x01') {
          FUN_10b17d944(&pppplStack_650,plVar24 + 0xd);
          lStack_640 = plVar24[0xc];
          if (uStack_630._4_4_ == 2) {
            ppppplVar18 = *(long ******)(lStack_638 + 0x10);
            ppppplVar21 = (long *****)((long)ppppplVar18 + lStack_640);
            if (ppppplStack_380 < ppppplStack_378) {
              *ppppplStack_380 = (long ****)ppppplVar18;
              ppppplStack_380[1] = (long ****)ppppplVar21;
              ppppplStack_380 = ppppplStack_380 + 2;
            }
            else {
              func_0x00010b1ee170();
              func_0x00010b1edc38(extraout_x8_03 >> 4);
              func_0x00010b1ee170(ppppplStack_380);
              func_0x00010b1eccf4();
              *plStack_340 = (long)ppppplVar18;
              plStack_340[1] = (long)ppppplVar21;
              func_0x00010b1ebee8(plStack_340 + 2);
              func_0x00010b1eb960();
              ppppplStack_380 = ppppplStack_6d0;
            }
          }
        }
        else {
          pppplStack_650 = (long ****)&PTR_DAT_110ccaac8;
          pppplStack_648 = (long ****)0x0;
          uStack_630 = 0;
          lStack_640 = plVar24[0xc];
        }
        lVar19 = lStack_398;
        func_0x00010b1ed92c();
        FUN_10b1c345c(lVar19 + 0x10,&pppplStack_350);
        FUN_10b24d538();
        func_0x00010b1ec9b0();
        FUN_10b24d1ec();
      }
    }
    lVar19 = param_4[2];
    if (lStack_398 != 0) {
      FUN_10b1c38c4(lVar19 + 0xf8,lStack_398,0);
      lVar19 = param_4[2];
    }
    *(long *)(lVar19 + 0x28) = *(long *)(lVar19 + 0x28) + lVar22;
    if ((*(int *)(param_3 + 0x1c) == 3) && (*(long ******)(param_3 + 0x30) != (long *****)0x0)) {
      pppplStack_350 = (long ****)0x0;
      uStack_348 = (undefined **)*(long ******)(param_3 + 0x30);
      if ((ulong)((long)ppppplStack_378 - (long)ppppplStack_388) < 0x10) {
        pppppplVar11 = (long ******)ppppplStack_378;
        if ((long ******)ppppplStack_388 != (long ******)0x0) {
          ppppplStack_380 = ppppplStack_388;
          __ZdlPv();
          func_0x00010b1ed464(0);
          pppppplVar11 = extraout_x8_05;
        }
        uVar17 = (long)pppppplVar11 >> 3;
        if (uVar17 < 2) {
          uVar17 = 1;
        }
        if ((long ******)0x7fffffffffffffef < pppppplVar11) {
          uVar17 = 0xfffffffffffffff;
        }
        if (uVar17 >> 0x3c != 0) goto LAB_10b1c6564;
        pppppplVar11 = &ppppplStack_378;
        func_0x00010b1a4120();
        ppppplStack_378 = (long *****)(pppppplVar11 + uVar17 * 2);
        ppppplStack_388 = (long *****)pppppplVar11;
      }
      else {
        uVar17 = (long)ppppplStack_380 - (long)ppppplStack_388;
        if (uVar17 < 0x10) {
          if (ppppplStack_380 != ppppplStack_388) {
            _memcpy(ppppplStack_388,&pppplStack_350,uVar17);
          }
          for (; uVar17 != 0x10; uVar17 = uVar17 + 0x10) {
            ppppplVar21 = *(long ******)((long)&pppplStack_350 + uVar17);
            ppppplStack_380[1] = (long ****)*(long ******)((long)&uStack_348 + uVar17);
            *ppppplStack_380 = (long ****)ppppplVar21;
            ppppplStack_380 = ppppplStack_380 + 2;
          }
          goto LAB_10b1c5f00;
        }
      }
      pppplVar3 = pppplStack_350;
      ppppplStack_388[1] = (long ****)uStack_348;
      *ppppplStack_388 = pppplVar3;
      ppppplStack_380 = ppppplStack_388 + 2;
    }
LAB_10b1c5f00:
    if (bVar6) {
      lVar19 = param_4[2];
      if ((ppppplStack_388 != ppppplStack_380) && (*(int *)(lVar19 + 0x88) == 0)) {
        ppppplStack_380 = ppppplStack_388;
      }
    }
    else {
      lVar19 = param_4[2];
    }
    if (*(char *)(lVar19 + 0x130) == '\x01') {
      bVar6 = 0 < *(int *)(lVar19 + 0x88);
    }
    else {
      bVar6 = false;
    }
    if ((ppppplStack_388 == ppppplStack_380) || (*(char *)(param_1 + 0x278) != '\x01')) {
      iVar25 = *(int *)(param_3 + 0x178);
      if (*(char *)(param_3 + 0x17c) == '\0') {
        iVar25 = 0;
      }
      bVar6 = true;
    }
    else {
      iVar9 = (int)param_1 + 600;
      FUN_10b1c713c();
      iVar25 = *(int *)(param_3 + 0x178);
      iVar1 = iVar25;
      if (*(char *)(param_3 + 0x17c) == '\0') {
        iVar1 = 0;
      }
      if (iVar9 != 0) {
        lVar19 = param_4[2];
        if (((*(byte *)(param_3 + 0x120) & 1) == 0) &&
           (*(long *)(lVar19 + 0xe0) != *(long *)(lVar19 + 0xe8))) {
          FUN_10b1bd950(param_3 + 0x80);
          FUN_10b1bd8d4(param_1,param_3 + 0x80,param_4[2] + 0xc0);
          lVar19 = param_4[2];
        }
        if (iVar1 == 0) {
          iVar25 = 0;
        }
        else if (*(long *)(lVar19 + 0xe0) != *(long *)(lVar19 + 0xe8)) {
          FUN_10b1bb504(&pppplStack_350,param_1,lVar19 + 0xc0);
          pppplStack_648 = (long ****)uStack_348;
          pppplStack_650 = pppplStack_350;
          uStack_348 = (undefined **)0x0;
          pppplStack_350 = (long ****)0x0;
          func_0x00010b121bb0(&pppplStack_350);
          if (((long *****)pppplStack_650 != (long *****)0x0) &&
             (*(int *)(pppplStack_650 + 0x13) != iVar1)) {
            FUN_10b1c428c(&pppplStack_350,param_4[2] + 0xc0);
            *(int *)(pppplStack_350 + 0x13) = iVar1;
            FUN_10b1c4308(param_4[2] + 0xc0,pppplStack_350,0);
            FUN_10b1e4d20(&pppplStack_350);
          }
          func_0x00010b1219bc(&pppplStack_650);
          lVar19 = param_4[2];
        }
        uVar2 = *(undefined4 *)(param_3 + 0x40);
        pppplStack_350 = (long ****)CONCAT35(pppplStack_350._5_3_,*(undefined5 *)(param_3 + 0x170));
        uStack_348 = (undefined **)CONCAT44(*(undefined4 *)(param_3 + 0x78),iVar1);
        if (*(char *)(param_3 + 0x120) == '\x01') {
          cVar8 = (char)param_3 + -0x80;
          FUN_10b190fc4();
        }
        else {
          cVar8 = '\0';
        }
        plStack_340 = (long *)CONCAT71(plStack_340._1_7_,cVar8);
        FUN_10b1ee78c(param_1 + 600,lVar19 + 0x68,param_3,&ppppplStack_388,uVar2,&pppplStack_350);
        iVar1 = iVar25;
        if (!bVar6) {
          if ((*(byte *)(param_4[2] + 0x148) & 1) == 0) {
            FUN_10b1c7218(&pppplStack_350,param_1,param_2,param_4[2],*(undefined4 *)(param_3 + 0x40)
                         );
            lVar19 = param_4[2];
            if (*(char *)(lVar19 + 0x148) == '\x01') {
              func_0x00010b1d3014((undefined8 *)(lVar19 + 0x138),&pppplStack_350);
            }
            else {
              *(undefined ***)(lVar19 + 0x140) = uStack_348;
              *(undefined8 *)(lVar19 + 0x138) = pppplStack_350;
              uStack_348 = (undefined **)0x0;
              pppplStack_350 = (long ****)0x0;
              *(undefined1 *)(lVar19 + 0x148) = 1;
            }
            func_0x00010b1d2ff0(&pppplStack_350);
          }
          bVar6 = false;
          goto LAB_10b1c6154;
        }
      }
      iVar25 = iVar1;
      bVar6 = true;
    }
LAB_10b1c6154:
    uVar5 = ((param_7 | *(byte *)(param_1 + 0x63c)) & 1) == 0;
    if ((bool)uVar5) {
      lVar10 = 0;
    }
    FUN_10b1bd97c(&pppplStack_650,param_1,param_4,param_3,lVar10);
    if (lVar10 != 0) {
      iVar9 = (int)&pppplStack_650;
      FUN_10b1c4a78();
      if (iVar9 == 3) {
        puVar13 = &UNK_10f731b57;
        uVar14 = 0x16;
        uVar5 = true;
      }
      else {
        uVar5 = iVar9 == 4;
        if (!(bool)uVar5) goto LAB_10b1c61cc;
        puVar13 = &UNK_10f731b6e;
        uVar14 = 0x1a;
      }
      FUN_10b20c010(*(undefined8 *)(param_1 + 0x238),puVar13,uVar14,*(undefined4 *)(param_3 + 0x40),
                    *(undefined4 *)(param_3 + 0x1c));
    }
LAB_10b1c61cc:
    uStack_678 = *param_4;
    uStack_670 = *(undefined1 *)(param_4 + 1);
    *param_4 = 0;
    *(undefined1 *)(param_4 + 1) = 0;
    uStack_660 = param_4[3];
    uStack_668 = param_4[2];
    uStack_658 = param_4[4];
    param_4[3] = 0;
    param_4[4] = 0;
    lVar10 = param_1;
    FUN_10b1bdc50(param_1,param_2,&uStack_678);
    func_0x00010b1edfa8();
    if ((int)lVar10 == 0) {
      func_0x00010b1eb3bc(&pppplStack_350,param_1,param_2,param_3);
      if (((plStack_340 != (long *)0x0) && (func_0x00010b1ee218(), (bool)uVar5)) &&
         (func_0x00010b1ec3bc(), (bool)uVar5)) {
        func_0x00010b1ebb18(alStack_688);
        if (alStack_688[0] != 0) {
          while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
            uVar5 = *(char *)(plVar20 + 8) == '\x01';
            if ((bool)uVar5) {
              func_0x00010b1ed8a8(&pcStack_80);
              func_0x00010b1631b0(alStack_6a0,auStack_3c0,&pcStack_80);
              func_0x00010b1ec164();
              lVar10 = alStack_688[0];
              if (alStack_6a0[0] == 0) {
                func_0x00010b1ed8a8(auStack_6b8);
                func_0x00010b1631e4(&pcStack_368,lVar10 + 0x10,auStack_6b8);
                uVar2 = uStack_358;
                pcVar4 = pcStack_368;
                if (pcStack_368 != (code *)0x0) {
                  pcStack_80 = pcStack_368;
                  ppuStack_78 = ppuStack_360;
                  alStack_70[0] = CONCAT44(uStack_354,uStack_358);
                  func_0x000107c27d54(&pcStack_80);
                  FUN_10b1e5324(lVar10 + 0x10,uVar2,pcVar4);
                  if (*(long *)(lVar10 + 0x28) == 0) {
                    func_0x00010b1ec35c();
                    FUN_10b24d1ec(pcVar4 + 0x20);
                    FUN_10b1e5470(lVar10 + 0x10,pcVar4,0x48);
                  }
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_6b8);
              }
              else {
                func_0x00010b1ed8a8();
                FUN_10b1c345c(lVar10 + 0x10,&pcStack_80);
                FUN_10b24d538();
                func_0x00010b1ec164();
              }
            }
          }
          func_0x00010b1ede84(plStack_340 + 0x1f,alStack_688[0]);
        }
        FUN_10b1e4868(alStack_688);
        plStack_340[5] = plStack_340[5] - lVar22;
        if (bVar7) {
          plStack_340[4] = lVar15;
        }
      }
      func_0x00010b1d3e60(&pppplStack_350);
      bVar23 = 0;
      lVar22 = 0;
    }
    else if (pbStack_370 == (byte *)0x0) {
      bVar23 = 1;
    }
    else {
      pbVar12 = pbStack_370;
      func_0x000107c29c54();
      bVar23 = *pbVar12;
    }
    FUN_10b1c3994(param_1,lVar22);
    if (!bVar6) {
      plVar20 = *(long **)(param_1 + 0x6c8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&pppplStack_350,param_2);
      iStack_338 = iVar25;
      func_0x00010b1ecae0(&uStack_330);
      uStack_318 = *(undefined4 *)(param_3 + 0x40);
      uStack_314 = *(undefined4 *)(param_3 + 0x78);
      func_0x00010b1eceac(param_1,&uStack_310);
      FUN_10b12394c(auStack_300,&pppplStack_650);
      pcStack_80 = FUN_10b1e5484;
      ppuStack_78 = &PTR_FUN_110cc4318;
      lVar10 = 0x2c8;
      __Znwm();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
      uVar14 = uStack_320;
      *(undefined8 *)(lVar10 + 0x48) = uStack_308;
      *(undefined8 *)(lVar10 + 0x40) = uStack_310;
      *(int *)(lVar10 + 0x18) = iStack_338;
      *(undefined8 *)(lVar10 + 0x28) = uStack_328;
      *(undefined8 *)(lVar10 + 0x20) = uStack_330;
      uStack_330 = 0;
      uStack_328 = 0;
      uStack_320 = 0;
      *(undefined8 *)(lVar10 + 0x30) = uVar14;
      *(ulong *)(lVar10 + 0x38) = CONCAT44(uStack_314,uStack_318);
      uStack_310 = 0;
      uStack_308 = 0;
      FUN_10b121c1c(lVar10 + 0x50,auStack_300);
      alStack_70[0] = lVar10;
      (**(code **)(*plVar20 + 0x10))(plVar20,&pcStack_80);
      func_0x00010b1eb150(ppuStack_78);
      func_0x00010b1c76e0(&pppplStack_350);
    }
    plVar24 = *(long **)(param_1 + 0x6c8);
    func_0x00010b1eceac(&pcStack_80);
    plVar20 = alStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar20,param_2);
    pppplStack_350 = (long ****)0x10b1e566c;
    uStack_348 = &PTR_FUN_110cc4330;
    func_0x00010b1ec004();
    plVar20[1] = (long)ppuStack_78;
    *plVar20 = (long)pcStack_80;
    pcStack_80 = (code *)0x0;
    ppuStack_78 = (undefined **)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar20 + 2,alStack_70)
    ;
    plStack_340 = plVar20;
    (**(code **)(*plVar24 + 0x10))(plVar24,&pppplStack_350);
    func_0x00010b1eafb4(uStack_348);
    func_0x00010b1c7714(&pcStack_80);
    if ((bVar23 & 1) == 0) {
      func_0x00010b1ead30();
      func_0x00010b1eb274();
    }
    else {
      func_0x00010b1ec240();
    }
    func_0x00010b121af0(&pppplStack_650);
    FUN_10b24d634(auStack_3d0);
    FUN_10b1e4868(&lStack_398);
    FUN_10b1a4048(&ppppplStack_388);
    func_0x000107c29c20(&pbStack_370);
    func_0x00010b1eadc4();
    if ((bool)uVar5) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10b1c6564:
  func_0x00010b1a40cc();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10b1c656c);
  (*pcVar4)();
}



/* Entry: 10b1c6774; end: 10b1c6e17;  */

void FUN_10b1c6774(code **param_1,ulong param_2,long param_3,ulong param_4,long param_5,
                  ulong param_6)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  code **ppcVar6;
  code **ppcVar7;
  undefined8 *puVar8;
  code **ppcVar9;
  code **ppcVar10;
  ulong uVar11;
  long extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar12;
  undefined1 uVar13;
  int extraout_w10;
  int extraout_w10_00;
  code **unaff_x19;
  code **ppcVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  undefined4 uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_3b8 [40];
  code **ppcStack_390;
  code **ppcStack_388;
  undefined1 **ppuStack_380;
  code *pcStack_378;
  undefined4 uStack_368;
  code *pcStack_360;
  long lStack_358;
  ulong uStack_350;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined1 auStack_330 [16];
  long lStack_320;
  undefined4 auStack_308 [2];
  code *pcStack_300;
  long lStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined8 auStack_298 [12];
  undefined8 uStack_238;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  long *plStack_1d0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  undefined1 auStack_1a0 [16];
  code *pcStack_190;
  undefined8 *puStack_188;
  long lStack_178;
  code **ppcStack_170;
  undefined1 uStack_168;
  code *pcStack_160;
  code **ppcStack_158;
  undefined8 *in_stack_fffffffffffffeb0;
  code *pcStack_140;
  undefined8 *puStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  long lStack_118;
  code *pcStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  code *pcStack_e0;
  undefined **ppuStack_d8;
  long *plStack_d0;
  code **ppcStack_c8;
  
  uVar11 = param_4;
  func_0x00010b1eae28();
  FUN_10b1cdb48();
  uVar4 = (param_2 & 1) == 0;
  ppcVar9 = param_1;
  if ((bool)uVar4) {
    ppcVar9 = (code **)0x0;
  }
  ppcVar10 = (code **)(param_2 & 1);
  ppcVar6 = unaff_x19;
  FUN_10b1cdc14();
  uStack_168 = SUB81(ppcVar9,0);
  ppcStack_170 = ppcVar6;
  if (((ulong)ppcVar9 & 1) != 0) {
    if ((param_6 & 1) == 0) {
      lVar16 = 0x4c8;
      if (*(char *)(unaff_x19 + 0x9a) == '\0') {
        lVar16 = 0x640;
      }
      param_5 = *(long *)((long)unaff_x19 + lVar16);
    }
    lStack_178 = 0;
    ppcVar7 = ppcVar6;
    if ((param_4 & 1) == 0) {
      if (((uint)(param_5 != 0) & (uint)param_2) == 1) {
        param_3 = param_5 - (long)param_1;
        goto LAB_10b1c6820;
      }
    }
    else {
LAB_10b1c6820:
      lStack_178 = param_3;
      if (0 < param_3) {
        func_0x00010b1ed2b4();
        ppcStack_170 = (code **)((long)ppcVar7 - param_3 &
                                ((long)ppcVar7 - param_3 >> 0x3f ^ 0xffffffffffffffffU));
        if ((long)ppcVar6 <= (long)ppcStack_170) {
          ppcStack_170 = ppcVar6;
        }
        uStack_168 = 1;
      }
    }
    ppcVar14 = ppcStack_170;
    func_0x00010b1ed2b4();
    fVar21 = (float)(long)ppcVar7;
    fVar22 = (float)(long)ppcVar14;
    if (0.0 < *(float *)((long)unaff_x19 + 0x65c)) {
      if (fVar21 < *(float *)((long)unaff_x19 + 0x65c) * fVar22) {
        ppcVar6 = unaff_x19 + 0x88;
        do {
          pcVar15 = *ppcVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppcVar6,0x10);
          if (bVar3) {
            *(byte *)ppcVar6 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((ulong)pcVar15 & 1) != 0) goto LAB_10b1c68ac;
      }
      if (*(float *)(unaff_x19 + 0xcb) * fVar22 <= fVar21) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(unaff_x19 + 0x88,0x10);
          if (bVar3) {
            *(undefined1 *)(unaff_x19 + 0x88) = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
LAB_10b1c68ac:
    ppcVar6 = ppcVar7;
    if ((((param_4 & 1) == 0) && (0.0 < *(float *)((long)unaff_x19 + 0x654))) &&
       (uVar4 = *(float *)(unaff_x19 + 0xca) * fVar22 == fVar21,
       *(float *)(unaff_x19 + 0xca) * fVar22 < fVar21)) {
      func_0x00010b1eced4(&pcStack_160);
      if ((*(byte *)(in_stack_fffffffffffffeb0 + 5) & 1) == 0) {
        FUN_10b1d92f0(in_stack_fffffffffffffeb0);
        in_stack_fffffffffffffeb0[4] = 0;
        in_stack_fffffffffffffeb0[1] = 0;
        *in_stack_fffffffffffffeb0 = 0;
        in_stack_fffffffffffffeb0[3] = 0;
        in_stack_fffffffffffffeb0[2] = 0;
        func_0x000107c27b50(in_stack_fffffffffffffeb0);
        *(undefined1 *)(in_stack_fffffffffffffeb0 + 5) = 1;
        func_0x000107c27b4c(auStack_1a0,in_stack_fffffffffffffeb0);
        puVar8 = (undefined8 *)0x88;
        __Znwm();
        plVar18 = puVar8 + 1;
        *plVar18 = 0;
        puVar8[2] = 0;
        *puVar8 = &PTR_DAT_110cc4610;
        pcVar15 = (code *)(puVar8 + 3);
        puVar8[4] = 0;
        *(undefined8 *)pcVar15 = 0;
        puVar8[6] = 0;
        puVar8[5] = 0;
        puVar8[8] = 0;
        puVar8[7] = 0;
        puVar8[10] = 0;
        puVar8[9] = 0;
        puVar8[0xc] = 0;
        puVar8[0xb] = 0;
        puVar8[0xe] = 0;
        puVar8[0xd] = 0;
        puVar8[0x10] = 0;
        puVar8[0xf] = 0;
        __ZNSt3__115recursive_mutexC1Ev();
        *(undefined1 *)(puVar8 + 0xb) = 0;
        *(undefined1 *)(puVar8 + 0xd) = 0;
        puVar8[0xf] = 0;
        puVar8[0x10] = 0;
        puVar8[0xe] = 0;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar3) {
            *plVar18 = *plVar18 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        pcStack_1b8 = (code *)0x0;
        pcStack_1b0 = (code *)0x0;
        plStack_1d0 = (long *)0x0;
        pcStack_190 = pcVar15;
        puStack_188 = puVar8;
        pcStack_140 = pcVar15;
        puStack_138 = puVar8;
        func_0x000107c27b60(&pcStack_e0,auStack_1a0,&plStack_1d0);
        func_0x000107c27b64(&pcStack_1b8,&pcStack_e0);
        func_0x000107c27b58(&pcStack_e0);
        func_0x00010b1ec7ac();
        func_0x000107c27b48(&lStack_e8);
        func_0x000107c27b4c(&plStack_100,lStack_e8);
        plStack_d0 = (long *)lStack_e8;
        ppuStack_d8 = (undefined **)puStack_138;
        pcStack_e0 = pcStack_140;
        pcStack_140 = (code *)0x0;
        puStack_138 = (undefined8 *)0x0;
        lStack_e8 = 0;
        pcStack_110 = (code *)0x0;
        lStack_108 = 0;
        pcStack_120 = pcStack_1b8 + 0x38;
        lStack_118 = CONCAT71(lStack_118._1_7_,1);
        __ZNSt3__15mutex4lockEv();
        pcVar15 = pcStack_1b8;
        func_0x0001052a9e98();
        if ((int)pcVar15 == 0) {
          func_0x00010b1ebccc();
          plVar18 = plStack_d0;
          *(undefined ***)pcVar15 = &PTR_FUN_110cc4660;
          *(undefined ***)(pcVar15 + 0x10) = ppuStack_d8;
          *(code **)(pcVar15 + 8) = pcStack_e0;
          pcStack_e0 = (code *)0x0;
          ppuStack_d8 = (undefined **)0x0;
          plStack_d0 = (long *)0x0;
          *(long **)(pcVar15 + 0x18) = plVar18;
          lVar16 = *(long *)(pcStack_1b8 + 0x80);
          *(code **)(pcStack_1b8 + 0x80) = pcVar15;
          if (lVar16 != 0) {
            func_0x00010b1ed01c();
          }
        }
        else {
          func_0x000107c27b64(&pcStack_110,&pcStack_1b8);
        }
        func_0x000107c2798c(&pcStack_120);
        if (pcStack_110 != (code *)0x0) {
          pcStack_120 = pcStack_110;
          lStack_118 = lStack_108;
          if (lStack_108 != 0) {
            do {
              func_0x00010b1eb124();
            } while (extraout_w10 != 0);
          }
          FUN_10b1e78d8(&pcStack_e0);
          func_0x000107c27b58(&pcStack_120);
        }
        uStack_128 = uStack_f8;
        plStack_130 = plStack_100;
        plStack_100 = (long *)0x0;
        uStack_f8 = 0;
        func_0x000107c27b58(&pcStack_110);
        func_0x00010b1e7b04(&pcStack_e0);
        func_0x000107c27b58(&plStack_100);
        lVar16 = lStack_e8;
        lStack_e8 = 0;
        if (lVar16 != 0) {
          func_0x00010b1eb318();
        }
        func_0x00010b1ed28c();
        func_0x000107c27b58(&plStack_130);
        FUN_10b12d6b8(&pcStack_140);
        func_0x00010b1ec3bc(in_stack_fffffffffffffeb0);
        puVar8 = puStack_188;
        pcVar15 = pcStack_190;
        if ((bool)uVar4) {
          pcStack_190 = (code *)0x0;
          puStack_188 = (undefined8 *)0x0;
          ppuStack_d8 = *(undefined ***)(extraout_x8 + 0x38);
          pcStack_e0 = *(code **)(extraout_x8 + 0x30);
          *(undefined8 **)(extraout_x8 + 0x38) = puVar8;
          *(code **)(extraout_x8 + 0x30) = pcVar15;
          FUN_10b12d6b8(&pcStack_e0);
        }
        else {
          *(undefined8 **)(extraout_x8 + 0x38) = puStack_188;
          *(code **)(extraout_x8 + 0x30) = pcStack_190;
          pcStack_190 = (code *)0x0;
          puStack_188 = (undefined8 *)0x0;
          *(undefined1 *)(extraout_x8 + 0x40) = 1;
        }
        FUN_10b12d6b8(&pcStack_190);
        func_0x000107c27b58(auStack_1a0);
        pcStack_e0 = (code *)0x0;
        ppuStack_d8 = (undefined **)0x0;
        plStack_d0 = (long *)0x0;
        ppcVar10 = &pcStack_e0;
        ppcVar9 = (code **)0xaf;
        func_0x00010b1eb5b4(unaff_x19[0x47],0xaf,ppcVar10);
        FUN_10b120998(&pcStack_e0);
      }
      ppcVar6 = &pcStack_160;
      func_0x000107c2798c();
    }
    uVar4 = ppcVar7 == ppcVar14;
    if ((long)ppcVar14 < (long)ppcVar7) {
      func_0x00010b1ec7a0();
      ppcVar10 = (code **)0x1;
      uVar11 = 0;
      FUN_10b1c9c60();
      if (0.0 < *(float *)(unaff_x19 + 0xe)) {
        ppcVar14 = (code **)(long)((1.0 - *(float *)(unaff_x19 + 0xe)) * fVar22);
        ppcStack_170 = ppcVar14;
      }
      func_0x00010b1ee400();
      ppcVar6 = unaff_x19;
      (**(code **)(*unaff_x19 + 0x18))();
      uVar4 = ppcVar6 == ppcVar14;
      if ((long)ppcVar14 < (long)ppcVar6) {
        plStack_1d0 = &lStack_178;
        pcVar15 = unaff_x19[0xd9];
        func_0x00010b1ecd34();
        if (pcVar15 == *ppcVar6) {
          pcStack_e0 = FUN_10b1e7b28;
          ppuStack_d8 = &PTR_FUN_110cc4690;
          plStack_d0 = plStack_1d0;
          ppcVar10 = &pcStack_e0;
          ppcStack_c8 = unaff_x19;
          func_0x00010b1edf68(&pcStack_160);
          ppcVar9 = &pcStack_160;
          FUN_10b1d9314(&pcStack_1b8,ppcVar9);
          func_0x00010b128754(&pcStack_160);
          func_0x00010b1eb150(ppuStack_d8);
        }
        else {
          __ZNSt3__17promiseIvEC1Ev(&plStack_100);
          __ZNSt3__17promiseIvE10get_futureEv(&pcStack_110,&plStack_100);
          plStack_d0 = plStack_100;
          plStack_100 = (long *)0x0;
          ppcStack_158 = &pcStack_1b8;
          pcStack_e0 = FUN_10b1e7c54;
          ppuStack_d8 = &PTR_FUN_110cc46a8;
          pcStack_160 = (code *)0x0;
          ppcStack_c8 = ppcStack_158;
          func_0x00010b1ebe1c();
          ppcVar9 = &pcStack_e0;
          func_0x00010b1ebbe0();
          func_0x00010b1eafb4(ppuStack_d8);
          __ZNSt3__17promiseIvED1Ev(&pcStack_160);
          __ZNSt3__117__assoc_sub_state4waitEv(pcStack_110);
          __ZNSt3__16futureIvED1Ev(&pcStack_110);
          __ZNSt3__17promiseIvED1Ev(&plStack_100);
        }
        uVar4 = pcStack_1b8 == pcStack_1b0;
        if (!(bool)uVar4) {
          ppcVar9 = &pcStack_1b8;
          ppcVar10 = (code **)0x4;
          FUN_10b1cd118();
        }
      }
      ppcVar6 = &pcStack_1b8;
      func_0x00010b128754();
    }
  }
  func_0x00010b1eadc4();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c2798c(&pcStack_120);
  func_0x000107c27b58(&pcStack_110);
  func_0x00010b1e7b04(&pcStack_e0);
  func_0x000107c27b58(&plStack_100);
  lVar16 = lStack_e8;
  lStack_e8 = 0;
  if (lVar16 != 0) {
    func_0x00010b1eb318();
  }
  func_0x00010b1ed28c();
  FUN_10b12d6b8(&pcStack_140);
  FUN_10b12d6b8(&pcStack_190);
  func_0x000107c27b58(auStack_1a0);
  ppcVar7 = &pcStack_160;
  func_0x000107c2798c();
  func_0x00010b1eb590();
  pcStack_1d8 = FUN_10b1c6e18;
  ppcVar14 = ppcVar7;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x00010b1eaeac();
  uStack_238 = extraout_x8_00;
  func_0x00010b1eb674(auStack_330);
  lVar16 = lStack_320;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  if (lStack_320 == 0) {
    func_0x00010b1ecf68();
    FUN_10b1c70ec();
  }
  else {
    func_0x00010b1ee348();
    if ((bool)uVar4) {
      uVar20 = (uint)(0 < *(int *)(lVar16 + 0x88));
    }
    else {
      uVar20 = 0;
    }
    uVar4 = *(char *)(ppcVar7 + 0x4f) == '\x01';
    if ((bool)uVar4) {
      ppcVar14 = ppcVar7 + 0x4b;
      FUN_10b1c713c(ppcVar14,lVar16);
      uVar5 = (uint)ppcVar14;
      lVar16 = lStack_320;
    }
    else {
      uVar5 = 0;
    }
    ppcVar14 = *(code ***)(lVar16 + 0x48);
    func_0x00010b1ec6e4(ppcVar14,*(undefined8 *)(lVar16 + 0x50));
    if (ppcVar14 == (code **)0x0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined4 *)(ppcVar14 + 7);
    }
    uStack_338 = uVar19;
    if (((uVar5 | uVar20 | (uint)*(byte *)(lVar16 + 0x148)) & 1) != 0) {
      if (uVar20 == 0) {
        if ((*(byte *)(lVar16 + 0x148) & 1) == 0) {
          FUN_10b1c7218(&pcStack_2a0,ppcVar7,ppcVar9,ppcVar10,uVar11);
          FUN_10b1d2fcc((undefined8 *)(lVar16 + 0x138));
          *(undefined8 *)(lVar16 + 0x140) = auStack_298[0];
          *(undefined8 *)(lVar16 + 0x138) = pcStack_2a0;
          pcStack_2a0 = (code *)0x0;
          auStack_298[0] = 0;
          *(undefined1 *)(lVar16 + 0x148) = 1;
          FUN_10b1d2ff0(&pcStack_2a0);
          lVar16 = lStack_320;
        }
        pcVar15 = *(code **)(lVar16 + 0x138);
        lVar16 = *(long *)(lVar16 + 0x140);
        uStack_368 = uVar19;
        pcStack_360 = pcVar15;
        lStack_358 = lVar16;
        if (lVar16 != 0) {
          do {
            func_0x00010b1eb124();
          } while (extraout_w10_00 != 0);
        }
        func_0x0001052b7b6c(auStack_2c8);
        func_0x0001052b7b20(ppcVar6,auStack_2c8);
        uStack_2e0 = uStack_2b8;
        uStack_2e8 = uStack_2c0;
        pcStack_360 = (code *)0x0;
        lStack_358 = 0;
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        uStack_2d0 = uStack_2a8;
        uStack_2d8 = uStack_2b0;
        uStack_2b0 = 0;
        uStack_2a8 = 0;
        ppuStack_2f0 = &PTR_DAT_1108752b8;
        pcStack_2a0 = FUN_10b1d745c;
        auStack_308[0] = uVar19;
        pcStack_300 = pcVar15;
        lStack_2f8 = lVar16;
        FUN_10b1d74d0(auStack_298,auStack_308);
        func_0x00010b1ebe1c();
        func_0x00010b1ebbe0();
        func_0x00010b1eb08c(auStack_298[0]);
        func_0x00010b1d7434(auStack_308);
        func_0x0001052b7e10(auStack_2c8);
        ppcVar14 = &pcStack_360;
        FUN_10b1d2ff0();
        goto LAB_10b1c7070;
      }
      uVar11 = *(ulong *)(lVar16 + 0x80);
      uVar4 = (uVar11 & 1) == 0;
      puVar1 = (ulong *)(lVar16 + 0x80);
      if (!(bool)uVar4) {
        puVar1 = (ulong *)(uVar11 + 7);
      }
      uVar11 = uStack_348 & 0xff;
      uVar13 = (undefined1)uStack_348;
      uVar12 = uStack_350;
      for (lVar16 = (long)*(int *)(lVar16 + 0x88) << 3; lVar16 != 0; lVar16 = lVar16 + -8) {
        uVar20 = *(uint *)(*puVar1 + 0x44);
        ppcVar14 = (code **)(ulong)uVar20;
        if (uVar20 != 0) {
          uVar17 = *(ulong *)(*puVar1 + 0x38);
          if ((uVar11 & 1) != 0) {
            uVar11 = 1;
            uVar4 = uVar17 == uVar12;
            if (uVar17 <= uVar12) goto LAB_10b1c6f50;
          }
          func_0x00010b1c71bc();
          uStack_340._0_5_ = CONCAT14(1,(int)ppcVar14);
          uVar11 = 1;
          uVar12 = uVar17;
        }
LAB_10b1c6f50:
        uVar13 = (undefined1)uVar11;
        puVar1 = puVar1 + 1;
      }
      uVar11 = uStack_348 >> 8;
      uStack_348 = CONCAT71((int7)uVar11,uVar13);
      uStack_350 = uVar12;
    }
    func_0x00010b1ecf68();
    FUN_10b1c70ec();
  }
LAB_10b1c7070:
  func_0x00010b1ecef4();
  func_0x00010b1eaddc(uStack_238);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x00010b1ecef4();
    func_0x00010b1eb598();
    pcStack_378 = FUN_10b1c70ec;
    ppcStack_390 = ppcVar14;
    ppcStack_388 = ppcVar6;
    ppuStack_380 = &puStack_1e0;
    func_0x00010b1eb648();
    func_0x0001052b7b90(auStack_3b8);
    func_0x0001052b8044(auStack_3b8,ppcVar14);
    func_0x0001052b7b20(ppcVar6,auStack_3b8);
    func_0x0001052b7e10(auStack_3b8);
    return;
  }
  return;
}



/* Entry: 10b1c6e18; end: 10b1c70eb;  */

void FUN_10b1c6e18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  int extraout_w10;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 auStack_1e8 [40];
  undefined8 *puStack_1c0;
  undefined8 uStack_190;
  long lStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined1 auStack_160 [16];
  long lStack_150;
  undefined4 auStack_138 [2];
  undefined8 uStack_130;
  long lStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 auStack_c8 [12];
  undefined8 uStack_68;
  
  puVar4 = param_1;
  func_0x00010b1eaeac();
  uStack_68 = extraout_x8;
  func_0x00010b1eb674(auStack_160);
  lVar8 = lStack_150;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  if (lStack_150 == 0) {
    func_0x00010b1ecf68();
    FUN_10b1c70ec();
  }
  else {
    func_0x00010b1ee348();
    if ((bool)in_ZR) {
      uVar11 = (uint)(0 < *(int *)(lVar8 + 0x88));
    }
    else {
      uVar11 = 0;
    }
    in_ZR = *(char *)(param_1 + 0x4f) == '\x01';
    if ((bool)in_ZR) {
      puVar4 = param_1 + 0x4b;
      FUN_10b1c713c(puVar4,lVar8);
      uVar3 = (uint)puVar4;
      lVar8 = lStack_150;
    }
    else {
      uVar3 = 0;
    }
    puVar4 = *(undefined8 **)(lVar8 + 0x48);
    func_0x00010b1ec6e4(puVar4,*(undefined8 *)(lVar8 + 0x50));
    if (puVar4 == (undefined8 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(puVar4 + 7);
    }
    uStack_168 = uVar10;
    if (((uVar3 | uVar11 | (uint)*(byte *)(lVar8 + 0x148)) & 1) != 0) {
      if (uVar11 == 0) {
        if ((*(byte *)(lVar8 + 0x148) & 1) == 0) {
          FUN_10b1c7218(&pcStack_d0,param_1,param_2,param_3,param_4);
          FUN_10b1d2fcc((undefined8 *)(lVar8 + 0x138));
          *(undefined8 *)(lVar8 + 0x140) = auStack_c8[0];
          *(undefined8 *)(lVar8 + 0x138) = pcStack_d0;
          pcStack_d0 = (code *)0x0;
          auStack_c8[0] = 0;
          *(undefined1 *)(lVar8 + 0x148) = 1;
          FUN_10b1d2ff0(&pcStack_d0);
          lVar8 = lStack_150;
        }
        uVar2 = *(undefined8 *)(lVar8 + 0x138);
        lVar8 = *(long *)(lVar8 + 0x140);
        uStack_190 = uVar2;
        lStack_188 = lVar8;
        if (lVar8 != 0) {
          do {
            func_0x00010b1eb124();
          } while (extraout_w10 != 0);
        }
        func_0x0001052b7b6c(auStack_f8);
        func_0x0001052b7b20(auStack_f8);
        uStack_110 = uStack_e8;
        uStack_118 = uStack_f0;
        uStack_190 = 0;
        lStack_188 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_100 = uStack_d8;
        uStack_108 = uStack_e0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        ppuStack_120 = &PTR_DAT_1108752b8;
        pcStack_d0 = FUN_10b1d745c;
        auStack_138[0] = uVar10;
        uStack_130 = uVar2;
        lStack_128 = lVar8;
        FUN_10b1d74d0(auStack_c8,auStack_138);
        func_0x00010b1ebe1c();
        func_0x00010b1ebbe0();
        func_0x00010b1eb08c(auStack_c8[0]);
        func_0x00010b1d7434(auStack_138);
        func_0x0001052b7e10(auStack_f8);
        puVar4 = &uStack_190;
        FUN_10b1d2ff0();
        goto LAB_10b1c7070;
      }
      uVar5 = *(ulong *)(lVar8 + 0x80);
      in_ZR = (uVar5 & 1) == 0;
      puVar1 = (ulong *)(lVar8 + 0x80);
      if (!(bool)in_ZR) {
        puVar1 = (ulong *)(uVar5 + 7);
      }
      uVar5 = uStack_178 & 0xff;
      uVar7 = (undefined1)uStack_178;
      uVar6 = uStack_180;
      for (lVar8 = (long)*(int *)(lVar8 + 0x88) << 3; lVar8 != 0; lVar8 = lVar8 + -8) {
        uVar11 = *(uint *)(*puVar1 + 0x44);
        puVar4 = (undefined8 *)(ulong)uVar11;
        if (uVar11 != 0) {
          uVar9 = *(ulong *)(*puVar1 + 0x38);
          if ((uVar5 & 1) != 0) {
            uVar5 = 1;
            in_ZR = uVar9 == uVar6;
            if (uVar9 <= uVar6) goto LAB_10b1c6f50;
          }
          func_0x00010b1c71bc();
          uStack_170._0_5_ = CONCAT14(1,(int)puVar4);
          uVar5 = 1;
          uVar6 = uVar9;
        }
LAB_10b1c6f50:
        uVar7 = (undefined1)uVar5;
        puVar1 = puVar1 + 1;
      }
      uVar5 = uStack_178 >> 8;
      uStack_178 = CONCAT71((int7)uVar5,uVar7);
      uStack_180 = uVar6;
    }
    func_0x00010b1ecf68();
    FUN_10b1c70ec();
  }
LAB_10b1c7070:
  func_0x00010b1ecef4();
  func_0x00010b1eaddc(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1ecef4();
  func_0x00010b1eb598();
  puStack_1c0 = puVar4;
  func_0x00010b1eb648();
  func_0x0001052b7b90(auStack_1e8);
  func_0x0001052b8044(auStack_1e8,puVar4);
  func_0x0001052b7b20(auStack_1e8);
  func_0x0001052b7e10(auStack_1e8);
  return;
}



/* Entry: 10b1c70ec; end: 10b1c713b;  */

void FUN_10b1c70ec(void)

{
  undefined1 auStack_48 [40];
  
  func_0x00010b1eb648();
  func_0x0001052b7b90(auStack_48);
  func_0x0001052b8044(auStack_48);
  func_0x0001052b7b20(auStack_48);
  func_0x0001052b7e10(auStack_48);
  return;
}



/* Entry: 10b1c713c; end: 10b1c718b;  */

undefined8 FUN_10b1c713c(ulong param_1,long param_2)

{
  undefined8 uVar1;
  
  if (((*(uint *)(param_2 + 0xbc) < *(uint *)(param_1 + 0x18) && *(int *)(param_2 + 0x88) != 0) &&
       (*(uint *)(param_1 + 0x18) <= *(uint *)(param_2 + 0xbc) || -1 < *(int *)(param_2 + 0x88))) ||
     (FUN_10b1efe88(param_1,param_2), (param_1 & 1) == 0)) {
    FUN_10b24e550(param_2 + 0x68);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10b1c718c; end: 10b1c7217;  */

int * FUN_10b1c718c(int *param_1,int *param_2,int param_3,uint param_4)

{
  do {
    if (param_1 == param_2) {
      return (int *)0x0;
    }
    if (*param_1 == param_3) {
      if ((param_4 & 1) != 0) {
        return param_1;
      }
      if (*(long *)(param_1 + 0xc) == 0) {
        return param_1;
      }
    }
    param_1 = param_1 + 0x22;
  } while( true );
}



/* Entry: 10b1c7218; end: 10b1c76a7;  */

void FUN_10b1c7218(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long *unaff_x19;
  code *pcVar7;
  long *plVar8;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [24];
  undefined8 auStack_198 [3];
  undefined4 uStack_180;
  long lStack_178;
  undefined1 auStack_170 [8];
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  undefined **ppuStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  long lStack_98;
  code *pcStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  long alStack_58 [10];
  undefined8 uStack_8;
  
  func_0x00010b1ee670();
  lVar4 = param_2;
  func_0x00010b1eae28();
  uStack_8 = extraout_x8;
  FUN_10b1e3630(auStack_1c0,lVar4 + 8);
  func_0x00010b1ec9d4(auStack_1b0);
  puVar3 = auStack_198;
  func_0x00010b1eca94();
  ppuStack_e8 = &PTR_FUN_110cc3cb0;
  uStack_180 = param_5;
  lStack_178 = param_2;
  func_0x00010b1ee030();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_110cc3cd0;
  puStack_e0 = puVar3 + 3;
  puVar3[4] = 0;
  *puStack_e0 = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[9] = 0x3cb0b1bb;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0x32aaaba7;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  puVar3[0x17] = 0;
  puVar3[0x16] = 0;
  puVar3[0x18] = 0;
  puStack_d8 = puVar3;
  puStack_d0 = puStack_e0;
  puStack_c8 = puVar3;
  do {
    func_0x00010b1ed504();
  } while (extraout_w11 != 0);
  ppuStack_e8 = &PTR_FUN_110cc3c68;
  puStack_158 = puVar3;
  do {
    func_0x00010b1ed504();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b1ed504();
  } while (extraout_w11_01 != 0);
  puStack_168 = puVar3;
  FUN_10b1dc1e0(&puStack_160);
  FUN_10b1dc0c4(&puStack_160,auStack_1c0);
  puStack_100 = puStack_d8;
  puStack_108 = puStack_e0;
  puStack_e0 = (undefined8 *)0x0;
  puStack_d8 = (undefined8 *)0x0;
  puStack_f0 = puStack_c8;
  puStack_f8 = puStack_d0;
  puStack_d0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  ppuStack_110 = &PTR_FUN_110cc3c68;
  pcStack_68 = FUN_10b1dc380;
  ppuStack_60 = &PTR_FUN_110cc3d20;
  lVar4 = 0x78;
  __Znwm();
  FUN_10b1dc0c4();
  *(undefined8 **)(lVar4 + 0x60) = puStack_100;
  *(undefined8 **)(lVar4 + 0x58) = puStack_108;
  puStack_108 = (undefined8 *)0x0;
  puStack_100 = (undefined8 *)0x0;
  *(undefined8 **)(lVar4 + 0x70) = puStack_f0;
  *(undefined8 **)(lVar4 + 0x68) = puStack_f8;
  puStack_f8 = (undefined8 *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  *(undefined ***)(lVar4 + 0x50) = &PTR_FUN_110cc3c68;
  alStack_58[0] = lVar4;
  func_0x00010b1ebe1c();
  func_0x00010b1ebbe0();
  func_0x00010b1eb688(ppuStack_60);
  FUN_10b1dc120(&puStack_160);
  FUN_10b1dc204(&ppuStack_e8);
  puVar5 = (undefined8 *)0xa8;
  __Znwm();
  plVar8 = puVar5 + 1;
  *plVar8 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110cc4960;
  puVar3 = puVar5 + 3;
  _bzero(puVar3,0x90);
  __ZNSt3__115recursive_mutexC1Ev(puVar3);
  *(undefined1 *)(puVar5 + 0xb) = 0;
  *(undefined1 *)(puVar5 + 0x11) = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x12] = 0;
  *unaff_x19 = (long)puVar3;
  unaff_x19[1] = (long)puVar5;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pcStack_68 = (code *)0x0;
  ppuStack_60 = (undefined **)0x0;
  ppuStack_e8 = (undefined **)0x0;
  puStack_e0 = (undefined8 *)0x0;
  puStack_c0 = puVar3;
  puStack_b8 = puVar5;
  FUN_10b1dc30c(&puStack_160,auStack_170,&ppuStack_e8);
  FUN_10b1dc35c(&pcStack_68,&puStack_160);
  FUN_10b1dc1e0(&puStack_160);
  FUN_10b1dc1e0(&ppuStack_e8);
  func_0x000107c27b48(&lStack_70);
  func_0x000107c27b4c(&uStack_80,lStack_70);
  pcVar7 = pcStack_68;
  lStack_150 = lStack_70;
  puStack_c0 = (undefined8 *)0x0;
  puStack_b8 = (undefined8 *)0x0;
  lStack_70 = 0;
  pcStack_90 = (code *)0x0;
  lStack_88 = 0;
  pcStack_a0 = pcStack_68 + 0x60;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  puStack_160 = puVar3;
  puStack_158 = puVar5;
  __ZNSt3__15mutex4lockEv();
  pcVar6 = pcVar7;
  FUN_10b1e9a5c();
  if ((int)pcVar6 == 0) {
    func_0x00010b1ebccc();
    lVar4 = lStack_150;
    *(undefined ***)pcVar6 = &PTR_FUN_110cc49b0;
    *(undefined8 **)(pcVar6 + 0x10) = puStack_158;
    *(undefined8 **)(pcVar6 + 8) = puStack_160;
    puStack_160 = (undefined8 *)0x0;
    puStack_158 = (undefined8 *)0x0;
    lStack_150 = 0;
    *(long *)(pcVar6 + 0x18) = lVar4;
    lVar4 = *(long *)(pcVar7 + 0xa8);
    *(code **)(pcVar7 + 0xa8) = pcVar6;
    if (lVar4 != 0) {
      func_0x00010b1ed01c();
    }
    pcVar7 = (code *)0x0;
  }
  else {
    FUN_10b1dc35c(&pcStack_90,&pcStack_68);
    pcVar7 = pcStack_90;
  }
  func_0x00010b1ebfbc();
  if (pcVar7 != (code *)0x0) {
    lStack_98 = lStack_88;
    pcStack_a0 = pcVar7;
    if (lStack_88 != 0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10 != 0);
    }
    FUN_10b1e9a9c(&puStack_160,pcVar7);
    FUN_10b1dc1e0(&pcStack_a0);
  }
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_10b1dc1e0(&pcStack_90);
  func_0x00010b1e9de8(&puStack_160);
  func_0x000107c27b58(&uStack_80);
  lVar4 = lStack_70;
  lStack_70 = 0;
  if (lVar4 != 0) {
    func_0x00010b1eb318();
  }
  FUN_10b1dc1e0(&pcStack_68);
  func_0x000107c27b58(&uStack_b0);
  FUN_10b1d2ff0(&puStack_c0);
  func_0x00010b1edb64();
  func_0x00010b1d0a68(auStack_1c0);
  func_0x00010b1eaddc(uStack_8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1ebfbc();
    FUN_10b1dc1e0(&pcStack_90);
    func_0x00010b1e9de8(&puStack_160);
    func_0x000107c27b58(&uStack_80);
    lVar4 = lStack_70;
    lStack_70 = 0;
    if (lVar4 != 0) {
      func_0x00010b1eb318();
    }
    FUN_10b1dc1e0(&pcStack_68);
    FUN_10b1d2ff0(&puStack_c0);
    FUN_10b1d2ff0();
    func_0x00010b1edb64();
    func_0x00010b1d0a68(auStack_1c0);
    do {
      func_0x00010b1eb598();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_58);
      func_0x00010b1ec7b4();
    } while( true );
  }
  return;
}



/* Entry: 10b1c76a8; end: 10b1c7733;  */

undefined8 * FUN_10b1c76a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  func_0x00010b1eca70();
  return param_1;
}



/* Entry: 10b1c7734; end: 10b1c7817;  */

void FUN_10b1c7734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 extraout_x8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_0000007c;
  undefined1 in_stack_00000088;
  undefined1 in_stack_00000128;
  undefined1 in_stack_00000178;
  undefined1 in_stack_0000017c;
  undefined1 in_stack_00000180;
  undefined1 in_stack_00000184;
  undefined8 in_stack_000001f0;
  
  func_0x00010b1ee654();
  func_0x00010b1ecf44(&stack0x00000008);
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = *param_4;
  in_stack_00000058 = *(undefined8 *)(param_4 + 4);
  in_stack_00000050 = *(undefined8 *)(param_4 + 2);
  in_stack_00000060 = *(undefined8 *)(param_4 + 6);
  *(undefined8 *)(param_4 + 2) = 0;
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 6) = 0;
  in_stack_00000068 = *(undefined8 *)(param_4 + 8);
  in_stack_00000070 = (undefined4)*(undefined8 *)(param_4 + 10);
  in_stack_0000007c = *(undefined8 *)(param_4 + 0xd);
  in_stack_00000074 = (undefined4)*(undefined8 *)(param_4 + 0xb);
  in_stack_00000078 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0xb) >> 0x20);
  in_stack_00000088 = 0;
  in_stack_00000128 = 0;
  FUN_10b12110c(&stack0x00000130,param_7);
  in_stack_00000178 = 0;
  in_stack_0000017c = 0;
  in_stack_00000180 = 0;
  in_stack_00000184 = 0;
  FUN_10b1c7818(extraout_x8,param_1,param_2,&stack0x00000008,param_5,param_6,param_8,
                in_stack_000001f0);
  FUN_10b1213b8(&stack0x00000008);
  return;
}



/* Entry: 10b1c7818; end: 10b1c7b9b;  */

void FUN_10b1c7818(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_1b0 [168];
  byte *pbStack_108;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  byte bStack_bf;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_88;
  undefined1 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010b1ebd38();
  func_0x00010b147e48(extraout_x8);
  func_0x00010b1ec8bc(&uStack_88);
  func_0x00010b1eb674();
  if ((uStack_78 != 0) && (uVar4 = uStack_78, func_0x00010b1ebe54(), (uVar4 & 1) == 0)) {
    uVar4 = (ulong)*(byte *)(uStack_78 + 0x40);
    if ((param_5 != 0) && ((*(byte *)(uStack_78 + 0x40) & 1) != 0)) {
      uVar4 = uStack_78;
      FUN_10b1c7b9c();
    }
    if (((uVar4 & 1) != 0) && ((bRam00000001137f4138 & 1) == 0)) {
      iVar3 = 0x137f4138;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        uVar1 = 0xa8;
        func_0x000107c2be10();
        uRam00000001137f40f9 = uVar1;
        func_0x00010b1ebd84(0x1137f4138);
      }
    }
  }
  uStack_e8 = uStack_88;
  uStack_e0 = uStack_80;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_d0 = uStack_70;
  uStack_d8 = uStack_78;
  uStack_c8 = uStack_68;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_10b1bb3c8(&bStack_c0);
  func_0x00010b1eca08();
  if ((uStack_a0 == 0) || ((*(byte *)(uStack_a0 + 0x40) & 1) == 0)) goto LAB_10b1c7ad0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  if (((bStack_c0 & 1) == 0) &&
     (bVar2 = *(long *)(uStack_a0 + 0x38) == 1, 0 < *(long *)(uStack_a0 + 0x38))) {
    bStack_bf = 1;
    uVar4 = uStack_a0;
    func_0x00010b1ecd0c();
    if (bVar2) {
      *(undefined1 *)(uVar4 + 0x40) = 0;
    }
LAB_10b1c79b8:
    uStack_b8 = param_6;
    func_0x00010b1ebe54();
    if ((uVar4 & 1) == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,uStack_a0);
    }
  }
  else {
    uVar8 = *(undefined8 *)(uStack_a0 + 0x20);
    uVar7 = *(undefined8 *)(uStack_a0 + 0x18);
    uVar10 = *(undefined8 *)(uStack_a0 + 0x30);
    uVar9 = *(undefined8 *)(uStack_a0 + 0x28);
    uVar11 = *(undefined8 *)(uStack_a0 + 0x31);
    *(undefined8 *)(unaff_x19 + 0x81) = *(undefined8 *)(uStack_a0 + 0x39);
    *(undefined8 *)(unaff_x19 + 0x79) = uVar11;
    *(undefined8 *)(unaff_x19 + 0x68) = uVar8;
    *(undefined8 *)(unaff_x19 + 0x60) = uVar7;
    *(undefined8 *)(unaff_x19 + 0x78) = uVar10;
    *(undefined8 *)(unaff_x19 + 0x70) = uVar9;
    FUN_10b1bdae8(auStack_1b0);
    FUN_10b12157c(unaff_x19 + 0x1c8,auStack_1b0);
    func_0x00010b1ebeac();
    if (((bStack_c0 & 1) == 0) && ((bStack_bf & 1) == 0)) goto LAB_10b1c7ad0;
    uVar4 = uStack_a0;
    uStack_b8 = param_6;
    if (uStack_a0 != 0) goto LAB_10b1c79b8;
  }
  lVar5 = param_3;
  FUN_10b1c0aa8(param_3,&bStack_c0);
  if ((int)lVar5 != 0) {
    __ZNSt3__16chrono12system_clock3nowEv();
    puVar6 = auStack_100;
    FUN_10b1bfa28(puVar6,param_3 + 0x128);
    func_0x00010b1ec8bc();
    func_0x00010b1ede04();
    func_0x000107c27914(auStack_100);
    func_0x00010b1ec8bc(&pbStack_108);
    FUN_10b1be290();
    if (param_5 != 0) {
      if (lStack_98 == 0) {
        func_0x00010b1ec8b0();
        FUN_10b1bd698();
      }
      else {
        func_0x00010b1eb6f8(auStack_1b0);
        FUN_10b1bdb60();
        func_0x00010b1edc8c();
        func_0x00010b1ec7bc();
      }
    }
    if (pbStack_108 != (byte *)0x0) {
      if (*(char *)(unaff_x19 + 0x58) == '\x01') {
        func_0x00010b123e24(unaff_x19 + 0x18,puVar6);
      }
      else {
        func_0x00010b125750(unaff_x19 + 0x18,puVar6);
        *(undefined1 *)(unaff_x19 + 0x58) = 1;
      }
      func_0x00010b1ebcb4();
      FUN_10b1be194(auStack_b0,auStack_1b0);
      func_0x00010b1eb910();
      func_0x000107c29c54();
      if ((*pbStack_108 & 1) == 0) {
        func_0x00010b121660(unaff_x19 + 0x18);
      }
    }
    func_0x000107c29c20(&pbStack_108);
  }
LAB_10b1c7ad0:
  func_0x00010b1d3e60(auStack_b0);
  func_0x00010b1ec494();
  return;
}



/* Entry: 10b1c7b9c; end: 10b1c7c17;  */

uint FUN_10b1c7b9c(long param_1)

{
  long lVar1;
  uint unaff_w20;
  long lStack_70;
  undefined1 auStack_60 [64];
  
  if ((*(int *)(param_1 + 0x1c) != 2) && (*(long *)(param_1 + 0xe0) != *(long *)(param_1 + 0xe8))) {
    FUN_10b1c3338(auStack_60,param_1 + 0xc0);
    func_0x00010b1ec470();
    if (lStack_70 != 0) {
      lVar1 = lStack_70;
      FUN_10b190fc4(lStack_70);
      unaff_w20 = (uint)lVar1;
    }
    func_0x00010b1ecf1c();
    if (lStack_70 != 0) goto LAB_10b1c7bfc;
  }
  unaff_w20 = 0;
LAB_10b1c7bfc:
  return unaff_w20 & 1;
}



/* Entry: 10b1c7c18; end: 10b1c8103;  */

void FUN_10b1c7c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 **ppuVar10;
  undefined4 *puVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar13;
  undefined4 *puVar14;
  long extraout_x9;
  long lVar15;
  undefined4 *puVar16;
  undefined8 in_register_00005008;
  undefined8 uVar17;
  undefined1 auStack_3f0 [80];
  undefined4 *puStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined1 auStack_388 [24];
  undefined4 *puStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined4 uStack_358;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 *puStack_328;
  undefined4 *puStack_320;
  undefined4 *puStack_318;
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [64];
  undefined1 uStack_2b8;
  undefined1 auStack_2a8 [128];
  long lStack_228;
  char cStack_220;
  undefined4 *puStack_30;
  undefined4 *puStack_28;
  undefined4 *puStack_20;
  undefined4 *puStack_18;
  undefined4 **ppuStack_10;
  
  func_0x00010b1ec024();
  func_0x00010b1eb434();
  if (extraout_x8 == 0) {
    return;
  }
  func_0x00010b1ebbd4(*(undefined1 *)(param_5 + 0x17));
  if (extraout_x8_00 == 0) {
    return;
  }
  func_0x00010b1eb8e4();
  func_0x00010b1ebe54();
  if ((param_4 & 1) != 0) {
    return;
  }
  FUN_10b202630(auStack_2f8,param_5);
  func_0x00010b1eb6f8(auStack_2a8);
  FUN_10b1c52c8();
  func_0x00010b121e00(auStack_2f8);
  if (cStack_220 != '\x01' || 0 < lStack_228) goto LAB_10b1c7ec8;
  auStack_2f8[0] = 0;
  uStack_2b8 = 0;
  puVar7 = auStack_2a8;
  FUN_10b1c4ae8();
  if (puVar7 != (undefined1 *)0x0) {
    func_0x00010b11fdec(auStack_2f8);
  }
  FUN_10b1bfa28(auStack_310,auStack_2f8);
  puStack_328 = (undefined4 *)0x0;
  puStack_320 = (undefined4 *)0x0;
  puStack_318 = (undefined4 *)0x0;
  uStack_340 = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  func_0x00010b1eb6f8(&puStack_370);
  func_0x00010b1eb674();
  if (lStack_360 == 0) {
    ppuVar10 = &puStack_370;
LAB_10b1c7ea8:
    func_0x00010b1d3e60(ppuVar10);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_340);
    lVar3 = *(long *)(lStack_360 + 0x50);
    for (lVar12 = *(long *)(lStack_360 + 0x48); puVar8 = puStack_320, lVar12 != lVar3;
        lVar12 = lVar12 + 0x88) {
      if (*(long *)(lVar12 + 0x30) == 0) {
        if (puStack_320 < puStack_318) {
          func_0x00010b1edd84();
          puStack_320 = puVar8 + 0x10;
        }
        else {
          lVar15 = (long)puStack_320 - (long)puStack_328;
          uVar1 = (lVar15 >> 6) + 1;
          if (uVar1 >> 0x3a != 0) {
            FUN_10b1d7554();
LAB_10b1c8044:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10b1c8048);
            (*pcVar5)();
          }
          uVar13 = (long)puStack_318 - (long)puStack_328 >> 5;
          if (uVar13 <= uVar1) {
            uVar13 = uVar1;
          }
          if (0x7fffffffffffffbf < (ulong)((long)puStack_318 - (long)puStack_328)) {
            uVar13 = 0x3ffffffffffffff;
          }
          ppuStack_10 = &puStack_318;
          if (uVar13 == 0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            if (uVar13 >> 0x3a != 0) {
              func_0x000104bd35f4();
              goto LAB_10b1c8044;
            }
            puVar8 = (undefined4 *)(uVar13 << 6);
            __Znwm();
          }
          lVar15 = (long)puVar8 + lVar15;
          puStack_30 = puVar8;
          puStack_28 = (undefined4 *)lVar15;
          puStack_20 = (undefined4 *)lVar15;
          puStack_18 = puVar8 + uVar13 * 0x10;
          func_0x00010b1edd84();
          puVar4 = puStack_320;
          puVar16 = puStack_328;
          puVar2 = (undefined4 *)((long)puStack_328 + (lVar15 - (long)puStack_320));
          puVar11 = puVar2;
          puVar14 = puStack_328;
          while (puVar14 != puVar4) {
            func_0x00010b1ec614(puVar11);
            uVar17 = *(undefined8 *)(extraout_x9 + 0x2c);
            *(undefined8 *)(extraout_x8_01 + 0x34) = *(undefined8 *)(extraout_x9 + 0x34);
            *(undefined8 *)(extraout_x8_01 + 0x2c) = uVar17;
            *(undefined8 *)(extraout_x8_01 + 0x28) = in_register_00005008;
            *(undefined8 *)(extraout_x8_01 + 0x20) = param_1;
            puVar11 = (undefined4 *)(extraout_x8_01 + 0x40);
            puVar14 = (undefined4 *)(extraout_x9 + 0x40);
          }
          for (; puVar16 != puVar4; puVar16 = puVar16 + 0x10) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar16 + 2);
          }
          puStack_20 = puStack_328;
          puStack_18 = puStack_318;
          puStack_30 = puStack_328;
          puStack_28 = puStack_328;
          puStack_328 = puVar2;
          puStack_320 = (undefined4 *)(lVar15 + 0x40);
          puStack_318 = puVar8 + uVar13 * 0x10;
          FUN_10b1d7560(&puStack_30);
          puStack_320 = (undefined4 *)(lVar15 + 0x40);
        }
      }
    }
    func_0x00010b1d3e60(&puStack_370);
    uVar6 = puStack_328 == puStack_320;
    if (!(bool)uVar6) {
      puVar9 = &uStack_340;
      func_0x000107c278d0(puVar9,auStack_2a8);
      if (((ulong)puVar9 & 1) == 0) {
        func_0x00010b1ed4c4();
        func_0x00010b1eb674(&puStack_30);
        if (((puStack_20 != (undefined4 *)0x0) &&
            (func_0x00010b1ec3bc(), puVar8 = puStack_320, (bool)uVar6)) &&
           (puVar14 = puStack_328, *(long *)(extraout_x8_02 + 0x38) < 1)) {
          for (; puVar14 != puVar8; puVar14 = puVar14 + 0x10) {
            __ZNSt3__16chrono12system_clock3nowEv();
            func_0x000107c27994(auStack_388,auStack_310);
            func_0x00010b1ed77c();
            func_0x00010b1ede04();
            func_0x000107c27914();
            func_0x00010b1ed77c();
            FUN_10b1be404();
          }
          ppuVar10 = &puStack_30;
          func_0x00010b1d3e60();
          func_0x00010b1ed4c4();
          func_0x00010b1ed77c(&puStack_30);
          func_0x00010b1eb674();
          if (puStack_20 != (undefined4 *)0x0) {
            __ZNSt3__16chrono12system_clock3nowEv();
            puVar14 = puStack_320;
            for (puVar8 = puStack_328; puVar8 != puVar14; puVar8 = puVar8 + 0x10) {
              func_0x00010b1eca94(&puStack_3a0);
              uStack_358 = *puVar8;
              uStack_368 = uStack_398;
              puStack_370 = puStack_3a0;
              lStack_360 = lStack_390;
              uStack_398 = 0;
              lStack_390 = 0;
              puStack_3a0 = (undefined4 *)0x0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_3a0);
              puVar11 = puStack_20;
              FUN_10b1bf250(puStack_20,&puStack_370);
              if ((puVar11 != (undefined4 *)0x0) && (*(long *)(puVar11 + 0xc) == 0)) {
                *(undefined4 ***)(puVar11 + 0xc) = ppuVar10;
                func_0x00010b1ed77c();
                FUN_10b1be404();
              }
              func_0x00010b1ebf28();
            }
            lVar12 = *(long *)(puStack_20 + 0x12);
            FUN_10b1bf2b0(lVar12,*(undefined8 *)(puStack_20 + 0x14));
            if (lVar12 == 0) {
              puStack_30 = (undefined4 *)0x0;
              puStack_28 = (undefined4 *)((ulong)puStack_28 & 0xffffffffffffff00);
              puStack_18 = (undefined4 *)0x0;
              ppuStack_10 = (undefined4 **)0x0;
              func_0x00010b1ed77c(auStack_3f0);
              func_0x00010b1ebe44();
              FUN_10b1d6520(auStack_3f0);
              func_0x00010b1ec750();
            }
          }
        }
        ppuVar10 = &puStack_30;
        goto LAB_10b1c7ea8;
      }
    }
  }
  func_0x00010b1ed294();
  FUN_10b1d75a4(&puStack_328);
  func_0x000107c27914(auStack_310);
  FUN_10b121398(auStack_2f8);
LAB_10b1c7ec8:
  func_0x00010b121af0(auStack_2a8);
  return;
}



/* Entry: 10b1c8104; end: 10b1c8173;  */

void FUN_10b1c8104(long *param_1)

{
  long unaff_x19;
  undefined4 *unaff_x20;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  
  func_0x00010b1eb648();
  FUN_10b1e5708();
  if (*param_1 == 0) {
    func_0x00010b1ebccc();
    uStack_40 = 1;
    *(undefined4 *)((long)param_1 + 0x1c) = *unaff_x20;
    lStack_48 = unaff_x19 + 8;
    FUN_10b1e5758();
    uStack_50 = 0;
    func_0x00010b1e57a4(&uStack_50);
  }
  return;
}



/* Entry: 10b1c8174; end: 10b1c8333;  */

void FUN_10b1c8174(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x00010b1ebe28();
  puStack_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (((puVar2 == (undefined8 *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), puStack_58 = puVar2, puVar2 == (undefined8 *)0x0))
     || (puVar5 = (undefined8 *)*unaff_x20, puStack_60 = puVar5, puVar5 == (undefined8 *)0x0)) {
    puVar1 = puStack_58;
    func_0x00010b1ed008();
    puVar2[2] = 0;
    *puVar2 = &PTR_DAT_110cc4358;
    puVar2[1] = 0;
    puVar6 = puVar2 + 3;
    *puVar6 = &PTR_FUN_110ccad58;
    puVar2[4] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    *(undefined8 *)((long)puVar2 + 0x49) = 0;
    *(undefined8 *)((long)puVar2 + 0x41) = 0;
    puVar5 = puVar6;
    puStack_50 = puVar6;
    puStack_48 = puVar2;
    FUN_10b136bfc(puVar6,unaff_x20 + 4);
    if (((ulong)puVar5 & 1) != 0) {
      ppuVar3 = &puStack_50;
      puStack_70 = puVar6;
      puStack_68 = puVar2;
    }
    *ppuVar3 = (undefined8 *)0x0;
    ppuVar3[1] = (undefined8 *)0x0;
    FUN_10b1e580c(&puStack_50);
    puVar2 = puStack_68;
    puVar5 = puStack_70;
    puStack_70 = (undefined8 *)0x0;
    puStack_68 = (undefined8 *)0x0;
    puStack_50 = (undefined8 *)0x0;
    puStack_60 = puVar5;
    puStack_58 = puVar2;
    puStack_48 = puVar1;
    FUN_10b1e580c(&puStack_50);
    FUN_10b1e580c(&puStack_70);
    if (puVar5 == (undefined8 *)0x0) {
      func_0x00010b1ecd18();
      goto LAB_10b1c82a8;
    }
    if (puVar2 != (undefined8 *)0x0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10 != 0);
    }
    puStack_48 = (undefined8 *)unaff_x20[1];
    puStack_50 = (undefined8 *)*unaff_x20;
    *unaff_x20 = puVar5;
    unaff_x20[1] = puVar2;
    func_0x00010b1d5bdc(&puStack_50);
  }
  if (unaff_x20[2] == 0) {
    FUN_10b1bf2fc(&puStack_50);
    func_0x00010b1edd30();
    func_0x00010b12186c(&puStack_50);
  }
LAB_10b1c82a8:
  puStack_50 = puVar5;
  puStack_48 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    *unaff_x19 = puVar5;
    unaff_x19[1] = 0;
  }
  else {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_00 != 0);
    *unaff_x19 = puVar5;
    unaff_x19[1] = puStack_48;
    if (puStack_48 != (undefined8 *)0x0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10_01 != 0);
    }
  }
  lVar4 = unaff_x20[3];
  uVar7 = unaff_x20[2];
  unaff_x19[3] = unaff_x20[3];
  unaff_x19[2] = uVar7;
  if (lVar4 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_02 != 0);
  }
  unaff_x19[4] = 0;
  unaff_x19[5] = 0;
  func_0x00010b121a28(&puStack_50);
  FUN_10b1e580c(&puStack_60);
  return;
}



/* Entry: 10b1c8334; end: 10b1c837b;  */

undefined8 FUN_10b1c8334(void)

{
  long extraout_x8;
  undefined8 *unaff_x19;
  
  func_0x00010b1ed564();
  if (extraout_x8 == 0) {
    func_0x00010b1ec488();
    func_0x00010b1eb6b8();
    func_0x00010b1ebeac();
    if (unaff_x19[4] == 0) {
      FUN_10b1e5830();
      return 0;
    }
  }
  return *unaff_x19;
}



/* Entry: 10b1c837c; end: 10b1c84cf;  */

bool FUN_10b1c837c(undefined8 param_1,undefined8 param_2,long *param_3,undefined1 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  byte *param_9)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  
  func_0x00010b1ee638();
  lVar3 = *param_3;
  lVar1 = param_3[1];
  do {
    if (lVar3 == lVar1) {
LAB_10b1c8490:
      return lVar3 == lVar1;
    }
    func_0x00010b1ee3f4(&stack0x00000068);
    FUN_10b1baed4();
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,*(undefined4 *)(param_6 + 0x18));
    func_0x00010b1ec76c(&stack0x00000028);
    in_stack_00000040 = CONCAT71(in_stack_00000040._1_7_,param_4);
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    in_stack_00000048 = param_5;
    __ZNSt3__16chrono12system_clock3nowEv();
    func_0x00010b1ed800();
    func_0x00010b1ee3f4();
    func_0x00010b1ede04();
    func_0x000107c27914(&stack0x00000008);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000028);
    func_0x00010b1ee3f4();
    FUN_10b1be290();
    in_stack_00000040 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    FUN_10b1be194(&stack0x00000068,&stack0x00000020);
    func_0x00010b1d3e60(&stack0x00000020);
    if (param_9 != (byte *)0x0) {
      pbVar2 = param_9;
      func_0x000107c29c54();
      if ((*pbVar2 & 1) == 0) {
        func_0x000107c29c20();
        func_0x00010b1ecad0();
        goto LAB_10b1c8490;
      }
    }
    func_0x000107c29c20();
    func_0x00010b1ecad0();
    lVar3 = lVar3 + 0x50;
  } while( true );
}



/* Entry: 10b1c84d0; end: 10b1c8537;  */

bool FUN_10b1c84d0(undefined8 param_1,uint param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010b1eb8e4();
  lVar1 = param_3[1];
  lVar2 = *param_3;
  do {
    lVar3 = lVar2;
    if (lVar3 == lVar1) break;
    func_0x00010b1eb6f8();
    FUN_10b1c8538();
    lVar2 = lVar3 + 0x50;
  } while ((param_2 & 1) != 0);
  return lVar3 == lVar1;
}



/* Entry: 10b1c8538; end: 10b1c85d7;  */

undefined1  [16] FUN_10b1c8538(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  func_0x00010b1ec3fc();
  uVar2 = 0;
  func_0x00010b1ed980();
  func_0x00010b1ed15c();
  func_0x00010b1ebfd4();
  func_0x00010b1ed830();
  func_0x00010b1ecbc0();
  FUN_10b1c17ec();
  func_0x00010b1ec248();
  func_0x00010b1ebe5c();
  uVar1 = 0;
  if ((uVar2 & 1) == 0) {
    uVar1 = param_2;
  }
  auVar3._8_8_ = (ulong)~(uint)uVar2 & 1;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10b1c85d8; end: 10b1c8737;  */

void FUN_10b1c85d8(long param_1)

{
  long lVar1;
  undefined8 *in_x4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined1 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0x278) == '\x01') {
    func_0x00010b1ee250();
    func_0x00010b1eb63c();
    func_0x00010b1eb3bc(&uStack_68);
    if ((lStack_58 != 0) && ((*(byte *)(lStack_58 + 0x40) & 1) != 0)) {
      if (*(long *)(lStack_58 + 0x150) != 0) {
        FUN_10b204844();
      }
      FUN_10b1c713c(unaff_x20 + 600,lStack_58);
      if (*(int *)(lStack_58 + 0x88) != 0) {
        if (*(long *)(lStack_58 + 0xe0) != *(long *)(lStack_58 + 0xe8)) {
          FUN_10b1bb504(&uStack_b0);
          uStack_78 = uStack_a8;
          uStack_80 = uStack_b0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          func_0x00010b121bb0(&uStack_b0);
          func_0x00010b1ed824();
          if (extraout_x8 != 0) {
            *(undefined4 *)(in_x4 + 1) = *(undefined4 *)(extraout_x8 + 0x98);
          }
          func_0x00010b1219bc(&uStack_80);
        }
        uStack_a8 = in_x4[1];
        uStack_b0 = *in_x4;
        uStack_a0 = *(undefined4 *)(in_x4 + 2);
        lVar1 = unaff_x20 + 600;
        FUN_10b1ef7c0(lVar1,lStack_58 + 0x68);
        if ((int)lVar1 != 0) {
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_50 = 0;
          uStack_48 = 0;
          func_0x00010b1ebdbc();
          FUN_10b1bdc50();
          func_0x00010b1ec750();
        }
      }
    }
    func_0x00010b1ece8c();
  }
  return;
}



/* Entry: 10b1c8738; end: 10b1c8757;  */

long FUN_10b1c8738(long param_1)

{
  func_0x00010b1eb568();
  FUN_10b1e5b8c();
  return param_1 + 0x18;
}



/* Entry: 10b1c8758; end: 10b1c87fb;  */

void FUN_10b1c8758(long param_1,long param_2)

{
  long lVar1;
  double unaff_x19;
  double *unaff_x20;
  double dVar2;
  
  func_0x00010b1eb63c();
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 != 0 && param_2 != lVar1) && (lVar1 == 0 || lVar1 <= param_2)) {
    dVar2 = unaff_x20[1];
    if ((long)unaff_x19 - lVar1 <= (long)unaff_x20[1]) {
      dVar2 = (double)((long)unaff_x19 - lVar1);
    }
    dVar2 = -(*unaff_x20 * (double)(long)dVar2);
    _exp();
    for (lVar1 = 0; lVar1 != 0x18; lVar1 = lVar1 + 8) {
      *(double *)((long)unaff_x20 + lVar1 + 0x10) =
           dVar2 * *(double *)((long)unaff_x20 + lVar1 + 0x10);
    }
  }
  unaff_x20[5] = unaff_x19;
  return;
}



/* Entry: 10b1c87fc; end: 10b1c8943;  */

void FUN_10b1c87fc(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_38;
  
  func_0x00010b1eaf00();
  uVar1 = param_1[0xd2] == 1;
  if (0 < (long)param_1[0xd2]) {
    func_0x00010b1ebbb0();
    func_0x00010b1ebb5c(&pcStack_98);
    param_1 = puStack_88;
    func_0x00010b1ec1f4();
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x20) = 1;
      func_0x00010b1ebe94();
      FUN_10b1fe814(auStack_a8);
      func_0x00010b1ec1fc(auStack_d0);
      puVar2 = &uStack_b8;
      func_0x00010b1ecd44();
      pcStack_98 = FUN_10b1e5e70;
      ppuStack_90 = &PTR_FUN_110cc4398;
      func_0x00010b1ec004();
      func_0x00010b1edfec();
      puVar2[4] = uStack_b0;
      puVar2[3] = uStack_b8;
      uStack_b8 = 0;
      uStack_b0 = 0;
      puStack_88 = puVar2;
      func_0x00010b1ebe1c();
      func_0x00010b1ebbe0();
      func_0x00010b1edd5c(ppuStack_90);
      FUN_10b1c8944(auStack_d0);
      param_1 = auStack_a8;
      func_0x000106e50c54();
    }
    else {
      func_0x00010b1ebe94();
    }
  }
  func_0x00010b1eaddc(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eba88(&pcStack_98);
  FUN_10b1c8944(auStack_d0);
  func_0x000106e50c54(auStack_a8);
  func_0x00010b1eb590();
  func_0x00010b1ebd60();
  func_0x00010b125908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b1c8944; end: 10b1c8963;  */

void FUN_10b1c8944(void)

{
  func_0x00010b1ebd60();
  func_0x00010b125908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b1c8964; end: 10b1c8a1b;  */

void FUN_10b1c8964(long param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x22;
  double in_stack_00000008;
  double in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000030;
  undefined4 in_stack_0000003c;
  
  uVar1 = param_3;
  func_0x00010b1ee684();
  in_stack_0000003c = uVar1;
  if (0 < *(long *)(param_1 + 0x690)) {
    func_0x00010b1ed2e8();
    __ZNSt3__16chrono12system_clock3nowEv();
    func_0x00010b1ecf3c(&stack0x00000020);
    lVar2 = in_stack_00000030;
    func_0x00010b1edf14();
    lVar2 = lVar2 + 0xd8;
    FUN_10b1c8738(lVar2,&stack0x0000003c);
    if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
      FUN_10b1c8a1c(lVar2,unaff_x22 + 0x690);
    }
    in_stack_00000008 = (double)param_4;
    in_stack_00000010 = (double)param_5;
    in_stack_00000018 = 0x3ff0000000000000;
    func_0x00010b1c87c8(lVar2,&stack0x00000008,param_1);
    *(undefined1 *)(lVar2 + 0x38) = 1;
    func_0x000107c2798c(&stack0x00000020);
  }
  return;
}



/* Entry: 10b1c8a1c; end: 10b1c8a47;  */

void FUN_10b1c8a1c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010b1ebd6c();
  if ((bool)in_ZR) {
    *(undefined1 *)(unaff_x19 + 0x30) = 0;
  }
  func_0x00010b1d7c20();
  return;
}



/* Entry: 10b1c8a48; end: 10b1c8f5f;  */

void FUN_10b1c8a48(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *extraout_x8;
  long lVar11;
  ulong uVar12;
  long *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *plVar13;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *plVar14;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x12;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *unaff_x24;
  long *plVar18;
  long lVar19;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined1 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  undefined4 in_stack_00000060;
  long in_stack_00000078;
  long *in_stack_00000080;
  undefined8 *in_stack_00000088;
  ulong in_stack_00000090;
  
  func_0x00010b1ecc8c();
  uVar5 = *(long *)(param_1 + 0x690) < 0;
  if (*(long *)(param_1 + 0x690) < 1) {
    *(undefined1 *)extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 5) = 0;
  }
  else {
    func_0x00010b1ebb5c(&stack0x00000068);
    lVar8 = in_stack_00000078;
    func_0x00010b1ec1f4();
    if ((*(byte *)(lVar8 + 0x101) & 1) == 0) {
      in_stack_00000040 = 0;
      in_stack_00000048 = (long *)0x0;
      in_stack_00000050 = (long *)0x0;
      func_0x00010b1eb5b4(*(undefined8 *)(param_1 + 0x238),0xd5,&stack0x00000040);
      FUN_10b120998(&stack0x00000040);
      *(undefined1 *)extraout_x8 = 0;
      *(undefined1 *)(extraout_x8 + 5) = 0;
    }
    else {
      func_0x00010b1ee44c();
      in_stack_00000060 = 0x3f800000;
      in_stack_00000028 = lVar8 + 0xd8;
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      puVar9 = &stack0x00000028;
      FUN_10b1c8f60();
      if (puVar9 == (undefined8 *)0x0) {
        func_0x00010b1ee464();
        func_0x00010b1eb5b4();
      }
      else {
        in_stack_00000010 = (undefined8 *)in_stack_00000028;
        in_stack_00000018 = in_stack_00000018 & 0xffffffffffffff00;
        in_stack_00000020 = 0;
        puVar9 = &stack0x00000010;
        FUN_10b1c8f60();
        lVar8 = puVar9[8];
        in_stack_00000080 = (long *)&stack0x00000010;
        in_stack_00000088 = puVar9;
        in_stack_00000090 = param_2;
        while (func_0x00010b1c8fa4(&stack0x00000088), in_stack_00000088 != (undefined8 *)0x0) {
          lVar11 = in_stack_00000088[8];
          uVar5 = lVar8 - lVar11 < 0;
          if (lVar8 <= lVar11) {
            lVar8 = lVar11;
          }
        }
        puVar9 = &stack0x00000028;
        FUN_10b1c8f60();
        in_stack_00000018 = param_2;
        while (in_stack_00000010 = puVar9, puVar9 != (undefined8 *)0x0) {
          plVar10 = puVar9 + 3;
          FUN_10b1c8758(plVar10,lVar8);
          plVar15 = in_stack_00000048;
          iVar1 = *(int *)(puVar9 + 2);
          plVar18 = (long *)(long)iVar1;
          if (in_stack_00000048 != (long *)0x0) {
            uVar12 = (long)in_stack_00000048 - 1;
            if (((ulong)in_stack_00000048 & uVar12) == 0) {
              unaff_x24 = (long *)(uVar12 & (ulong)plVar18);
              uVar5 = false;
            }
            else {
              uVar5 = (long)in_stack_00000048 - (long)plVar18 < 0;
              unaff_x24 = plVar18;
              if (in_stack_00000048 <= plVar18) {
                uVar2 = 0;
                if (in_stack_00000048 != (long *)0x0) {
                  uVar2 = (ulong)plVar18 / (ulong)in_stack_00000048;
                }
                unaff_x24 = (long *)((long)plVar18 - uVar2 * (long)in_stack_00000048);
              }
            }
            plVar17 = *(long **)(in_stack_00000040 + (long)unaff_x24 * 8);
            if (plVar17 != (long *)0x0) {
              do {
                while( true ) {
                  plVar17 = (long *)*plVar17;
                  if (plVar17 == (long *)0x0) goto LAB_10b1c8bf4;
                  plVar13 = (long *)plVar17[1];
                  if (plVar13 != plVar18) break;
                  uVar5 = (int)plVar17[2] - iVar1 < 0;
                  if ((int)plVar17[2] == iVar1) goto LAB_10b1c8e44;
                }
                if (((ulong)in_stack_00000048 & uVar12) == 0) {
                  plVar13 = (long *)((ulong)plVar13 & uVar12);
                }
                else if (in_stack_00000048 <= plVar13) {
                  uVar2 = 0;
                  if (in_stack_00000048 != (long *)0x0) {
                    uVar2 = (ulong)plVar13 / (ulong)in_stack_00000048;
                  }
                  plVar13 = (long *)((long)plVar13 - uVar2 * (long)in_stack_00000048);
                }
                uVar5 = (long)plVar13 - (long)unaff_x24 < 0;
              } while (plVar13 == unaff_x24);
            }
          }
LAB_10b1c8bf4:
          func_0x00010b1ec5d4();
          in_stack_00000090 = 1;
          in_stack_00000080 = plVar10;
          in_stack_00000088 = &stack0x00000050;
          *plVar10 = 0;
          plVar10[1] = (long)plVar18;
          *(int *)(plVar10 + 2) = iVar1;
          plVar10[4] = 0;
          plVar10[5] = 0;
          plVar10[3] = 0;
          plVar17 = plVar10;
          func_0x00010b1ebbc8(in_stack_00000058);
          if (plVar15 == (long *)0x0) {
LAB_10b1c8c30:
            bVar4 = (long *)0x2 < plVar15;
            bVar7 = plVar15 == (long *)0x3;
            func_0x00010b1eaeec((long)plVar15 << 1);
            plVar13 = extraout_x8_00;
            if (!bVar4 || bVar7) {
              plVar13 = extraout_x9;
            }
            plVar14 = plVar15;
            if ((long)plVar13 - 1U == 0) {
              plVar13 = (long *)0x2;
            }
            else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
              func_0x00010b1edda4();
              plVar13 = plVar17;
              plVar14 = in_stack_00000048;
            }
            if (plVar14 < plVar13) {
LAB_10b1c8c7c:
              if ((ulong)plVar13 >> 0x3d != 0) {
                func_0x000104bd35f4();
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10b1c8f0c);
                (*pcVar3)();
              }
              lVar11 = (long)plVar13 << 3;
              __Znwm(lVar11);
              FUN_10b1e63e4(&stack0x00000040,lVar11);
              plVar15 = (long *)0x0;
              in_stack_00000048 = plVar13;
              while (plVar13 != plVar15) {
                func_0x00010b1ebda4();
                plVar15 = extraout_x9_00;
              }
              plVar15 = plVar13;
              if (in_stack_00000050 != (long *)0x0) {
                func_0x00010b1ec57c();
                func_0x00010b1ed4a4();
                *(long ***)(extraout_x8_01 + (long)extraout_x11 * 8) = &stack0x00000050;
                lVar11 = extraout_x8_01;
                uVar12 = extraout_x9_01;
                plVar17 = extraout_x10;
                plVar14 = extraout_x11;
                while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
                  plVar16 = (long *)plVar17[1];
                  if (((ulong)plVar13 & uVar12) == 0) {
                    plVar16 = (long *)((ulong)plVar16 & uVar12);
                  }
                  else if (plVar13 <= plVar16) {
                    uVar2 = 0;
                    if (plVar13 != (long *)0x0) {
                      uVar2 = (ulong)plVar16 / (ulong)plVar13;
                    }
                    plVar16 = (long *)((long)plVar16 - uVar2 * (long)plVar13);
                  }
                  if (plVar16 != plVar14) {
                    if (*(long *)(lVar11 + (long)plVar16 * 8) == 0) {
                      func_0x00010b1ebf54();
                      lVar11 = extraout_x8_03;
                      uVar12 = extraout_x9_03;
                      plVar17 = extraout_x12;
                      plVar14 = extraout_x11_01;
                    }
                    else {
                      func_0x00010b1ead88();
                      lVar11 = extraout_x8_02;
                      uVar12 = extraout_x9_02;
                      plVar17 = extraout_x10_00;
                      plVar14 = extraout_x11_00;
                    }
                  }
                }
              }
            }
            else {
              plVar15 = plVar14;
              if (plVar13 < plVar14) {
                func_0x00010b1ebdb0((float)in_stack_00000058,in_stack_00000060);
                if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((long *)0x1 < plVar17) {
                  plVar17 = (long *)(1L << (-LZCOUNT((long)plVar17 + -1) & 0x3fU));
                }
                if (plVar13 <= plVar17) {
                  plVar13 = plVar17;
                }
                plVar15 = in_stack_00000048;
                if (plVar13 < plVar14) {
                  if (plVar13 != (long *)0x0) goto LAB_10b1c8c7c;
                  func_0x00010b1e63e8(&stack0x00000040,0);
                  in_stack_00000048 = (long *)0x0;
                  plVar15 = (long *)0x0;
                }
              }
            }
            if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
              uVar6 = false;
              unaff_x24 = (long *)((long)plVar15 - 1U & (ulong)plVar18);
            }
            else {
              uVar6 = (long)plVar15 - (long)plVar18 < 0;
              unaff_x24 = plVar18;
              if (plVar15 <= plVar18) {
                uVar12 = 0;
                if (plVar15 != (long *)0x0) {
                  uVar12 = (ulong)plVar18 / (ulong)plVar15;
                }
                unaff_x24 = (long *)((long)plVar18 - uVar12 * (long)plVar15);
              }
            }
          }
          else {
            func_0x00010b1ebbbc();
            uVar6 = false;
            if ((bool)uVar5) goto LAB_10b1c8c30;
          }
          lVar11 = in_stack_00000040;
          plVar18 = *(long **)(in_stack_00000040 + (long)unaff_x24 * 8);
          if (plVar18 == (long *)0x0) {
            *plVar10 = (long)in_stack_00000050;
            in_stack_00000050 = plVar10;
            *(long ***)(lVar11 + (long)unaff_x24 * 8) = &stack0x00000050;
            if (*plVar10 != 0) {
              plVar18 = *(long **)(*plVar10 + 8);
              if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
                plVar18 = (long *)((ulong)plVar18 & (long)plVar15 - 1U);
                uVar6 = false;
              }
              else {
                uVar6 = (long)plVar18 - (long)plVar15 < 0;
                if (plVar15 <= plVar18) {
                  uVar12 = 0;
                  if (plVar15 != (long *)0x0) {
                    uVar12 = (ulong)plVar18 / (ulong)plVar15;
                  }
                  plVar18 = (long *)((long)plVar18 - uVar12 * (long)plVar15);
                }
              }
              *(long **)(lVar11 + (long)plVar18 * 8) = plVar10;
            }
          }
          else {
            *plVar10 = *plVar18;
            *plVar18 = (long)plVar10;
          }
          in_stack_00000080 = (undefined8 *)0x0;
          in_stack_00000058 = in_stack_00000058 + 1;
          FUN_10b1e6400(&stack0x00000080);
          uVar5 = uVar6;
          plVar17 = plVar10;
LAB_10b1c8e44:
          lVar19 = puVar9[6];
          lVar11 = puVar9[5];
          plVar17[5] = puVar9[7];
          plVar17[4] = lVar19;
          plVar17[3] = lVar11;
          func_0x00010b1c8fa4(&stack0x00000010);
          puVar9 = in_stack_00000010;
        }
        func_0x00010b1ee464();
        func_0x00010b1eb5b4();
      }
      FUN_10b120998(&stack0x00000080);
      plVar10 = in_stack_00000048;
      lVar8 = in_stack_00000040;
      in_stack_00000040 = 0;
      in_stack_00000048 = (long *)0x0;
      *extraout_x8 = lVar8;
      extraout_x8[1] = (long)plVar10;
      extraout_x8[2] = (long)in_stack_00000050;
      extraout_x8[3] = in_stack_00000058;
      *(undefined4 *)(extraout_x8 + 4) = in_stack_00000060;
      if (in_stack_00000058 != 0) {
        plVar15 = (long *)in_stack_00000050[1];
        if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
          plVar15 = (long *)((ulong)plVar15 & (long)plVar10 - 1U);
        }
        else if (plVar10 <= plVar15) {
          uVar12 = 0;
          if (plVar10 != (long *)0x0) {
            uVar12 = (ulong)plVar15 / (ulong)plVar10;
          }
          plVar15 = (long *)((long)plVar15 - uVar12 * (long)plVar10);
        }
        *(long **)(lVar8 + (long)plVar15 * 8) = extraout_x8 + 2;
        in_stack_00000050 = (long *)0x0;
        in_stack_00000058 = 0;
      }
      func_0x00010b1ec94c();
      FUN_10b18c9cc(&stack0x00000040);
    }
    func_0x00010b1ed21c();
  }
  return;
}



/* Entry: 10b1c8f60; end: 10b1c8fc3;  */

long * FUN_10b1c8f60(long *param_1)

{
  long *plVar1;
  
  if ((char)param_1[2] == '\x01') {
    return (long *)param_1[1];
  }
  plVar1 = (long *)(*param_1 + 0x10);
  do {
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)0x0) break;
  } while (*(char *)(plVar1 + 9) != '\x01');
  param_1[1] = (long)plVar1;
  *(undefined1 *)(param_1 + 2) = 1;
  return plVar1;
}



/* Entry: 10b1c8fc4; end: 10b1c90df;  */

void FUN_10b1c8fc4(long param_1,undefined8 param_2,long param_3)

{
  long *extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w10;
  long lVar2;
  undefined4 in_stack_00000014;
  long in_stack_00000028;
  
  func_0x00010b1ee684();
  if (*(long *)(param_1 + 0x568) != 0) {
    lVar1 = param_3;
    FUN_10b1c41c0();
    func_0x00010b1ebbd4(*(undefined1 *)(param_3 + 0x17));
    if ((extraout_x8_00 != 0) && (*(char *)(param_3 + 0x88) == '\x01' && lVar1 != 0)) {
      func_0x00010b1eb3bc(&stack0x00000018,param_1,param_2,param_3);
      if ((in_stack_00000028 == 0) || ((*(byte *)(in_stack_00000028 + 0x40) & 1) == 0)) {
        *extraout_x8 = 0;
        extraout_x8[1] = 0;
      }
      else {
        in_stack_00000014 = *(undefined4 *)(param_3 + 0x50);
        if (*(char *)(param_3 + 0x58) == '\0') {
          in_stack_00000014 = 0;
        }
        lVar2 = *(long *)(in_stack_00000028 + 0x150);
        if (lVar2 == 0) {
          FUN_10b1c90e0(param_1 + 0x568,*(ulong *)(lVar1 + 0x40) & 0xfffffffffffffffc,
                        &stack0x00000014,param_3 + 0x78,param_1 + 0x6e8,param_1 + 0x678);
          func_0x00010b137bf8(in_stack_00000028 + 0x150);
          func_0x00010b1ee090();
          lVar2 = *(long *)(in_stack_00000028 + 0x150);
        }
        lVar1 = *(long *)(in_stack_00000028 + 0x158);
        *extraout_x8 = lVar2;
        extraout_x8[1] = lVar1;
        if (lVar1 != 0) {
          do {
            func_0x00010b1eb124();
          } while (extraout_w10 != 0);
        }
      }
      func_0x00010b1ec750();
      return;
    }
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10b1c90e0; end: 10b1c910f;  */

void FUN_10b1c90e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x00010b1ee5e8(param_1,param_2,param_2,param_3,param_4,param_5,param_6);
  FUN_10b1e6480();
  return;
}



/* Entry: 10b1c9110; end: 10b1c93bf;  */

void FUN_10b1c9110(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined4 uVar5;
  undefined8 extraout_x8;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 auStack_100 [3];
  long lStack_e8;
  undefined1 auStack_e0 [16];
  long lStack_d0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 *apuStack_a8 [10];
  undefined8 uStack_58;
  
  func_0x00010b1eb63c();
  func_0x00010b1eaf40();
  uStack_58 = extraout_x8;
  __ZNSt3__16chrono12system_clock3nowEv();
  lVar10 = *(long *)(unaff_x20 + 0x518);
  func_0x00010b1ebdbc(auStack_e0);
  func_0x00010b1eb674();
  if (lStack_d0 == 0) goto LAB_10b1c9304;
  lVar10 = param_1 + lVar10 * -1000;
  lVar6 = *(long *)(lStack_d0 + 0x60);
  in_ZR = lVar6 == lVar10;
  if (lVar10 < lVar6) {
    in_ZR = *(char *)(unaff_x20 + 0x660) == '\x01';
    if (!(bool)in_ZR) goto LAB_10b1c9304;
    lVar10 = *(long *)(lStack_d0 + 0x48);
    in_ZR = 1;
    lVar1 = lVar10;
    if (lVar10 == *(long *)(lStack_d0 + 0x50)) goto LAB_10b1c9304;
    while (lVar7 = lVar10, lVar10 = lVar1 + 0x88, lVar10 != *(long *)(lStack_d0 + 0x50)) {
      plVar8 = (long *)(lVar1 + 200);
      lVar1 = lVar10;
      if (*(long *)(lVar7 + 0x40) <= *plVar8) {
        lVar10 = lVar7;
      }
    }
    lVar6 = lVar6 - *(long *)(lVar7 + 0x40);
    in_ZR = lVar6 == 60000000;
    if (60000000 < lVar6) goto LAB_10b1c9304;
    lVar6 = *(long *)(lVar7 + 0x40) + 60000000;
    in_ZR = param_1 == lVar6;
    lVar10 = param_1;
    if (param_1 <= lVar6) {
      param_1 = lVar6;
      lVar10 = lVar6;
    }
  }
  if (((param_5 & 1) != 0) && ((*(byte *)(lStack_d0 + 0x163) & 1) == 0)) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x238);
    in_ZR = (param_4 & 0x100000000) == 0;
    uVar5 = 0x87;
    if ((bool)in_ZR) {
      uVar5 = 0x88;
    }
    FUN_10b12983c(&pcStack_b8,param_4);
    func_0x00010b1eb654(&uStack_138,&pcStack_b8);
    func_0x00010b1eb5b4(uVar9,uVar5,&uStack_138);
    func_0x00010b1eb750();
    func_0x00010b1eb5ac(&pcStack_b8);
  }
  *(long *)(lStack_d0 + 0x60) = param_1;
  *(undefined1 *)(lStack_d0 + 0x163) = 1;
  plVar8 = *(long **)(unaff_x20 + 0x6c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_138);
  func_0x00010b1ee038(&uStack_120);
  puVar2 = auStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  pcStack_b8 = FUN_10b1e6794;
  ppuStack_b0 = &PTR_FUN_110cc4430;
  lStack_e8 = lVar10;
  func_0x00010b1ed008();
  puVar2[1] = uStack_130;
  *puVar2 = uStack_138;
  puVar2[2] = uStack_128;
  puVar3 = puVar2;
  func_0x00010b1ed800();
  puVar3[4] = uStack_118;
  puVar3[3] = uStack_120;
  uStack_120 = 0;
  uStack_118 = 0;
  puVar3[6] = param_1;
  puVar3[5] = unaff_x20;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar3 + 7,auStack_100);
  puVar2[10] = lStack_e8;
  apuStack_a8[0] = puVar2;
  (**(code **)(*plVar8 + 0x10))(plVar8,&pcStack_b8);
  func_0x00010b1eafb4(ppuStack_b0);
  FUN_10b1c93c0(&uStack_138);
LAB_10b1c9304:
  func_0x00010b1ecdb0();
  func_0x00010b1eaddc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1eb230();
    ppuVar4 = apuStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar4);
    func_0x00010b1ecdb0();
    func_0x00010b1eb590();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar4 + 7);
    func_0x00010b125908(ppuVar4 + 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
              (ppuVar4);
    return;
  }
  return;
}



/* Entry: 10b1c93c0; end: 10b1c9413;  */

void FUN_10b1c93c0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  func_0x00010b125908(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b1c9414; end: 10b1c94bf;  */

uint FUN_10b1c9414(void)

{
  undefined4 in_w3;
  undefined8 *in_x6;
  undefined1 auStack_78 [48];
  undefined4 uStack_48;
  
  func_0x00010b1ee598();
  func_0x00010b1ed980(auStack_78);
  func_0x00010b1ed15c();
  uStack_48 = in_w3;
  func_0x00010b1ebfd4();
  in_x6[1] = 0;
  in_x6[2] = 0;
  *in_x6 = 0;
  func_0x00010b1ee3f4();
  FUN_10b1c17ec();
  func_0x00010b1eb5a0();
  func_0x000107c27914();
  func_0x00010b1ebe5c();
  return ((uint)in_x6 ^ 0xffffffff) & 1;
}



/* Entry: 10b1c94c0; end: 10b1c955f;  */

undefined1 FUN_10b1c94c0(void)

{
  undefined1 auStack_a8 [72];
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b1eb8e4();
  func_0x00010b1ec518();
  func_0x00010b1eb674(&uStack_58);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010b1eb6f8(auStack_a8);
  func_0x00010b1ed914();
  func_0x00010b1ee004();
  func_0x00010b1eb910();
  func_0x00010b1ecde4();
  return uStack_60;
}



/* Entry: 10b1c9560; end: 10b1c95ff;  */

ulong FUN_10b1c9560(long param_1,uint param_2)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uStack_24;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 0;
  }
  else if (*(char *)(param_1 + 0x6c0) == '\x01') {
    puVar2 = &UNK_10e496048;
    uStack_24 = param_2;
    func_0x00010b18054c(&UNK_10e496048,param_1 + 0x6a8,&uStack_24);
    bVar1 = (undefined *)(*(long *)(param_1 + 0x6b0) + (long)*(int *)(param_1 + 0x6a8) * 4) !=
            puVar2;
    uVar3 = 0;
    if (bVar1) {
      uVar3 = param_2 & 0xffffff00;
    }
    uVar5 = 0;
    if (bVar1) {
      uVar5 = param_2 & 0xff;
    }
    uVar4 = 0;
    if (bVar1) {
      uVar4 = 0x100000000;
    }
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 0;
  }
  return uVar4 | (uVar3 | uVar5);
}



/* Entry: 10b1c9600; end: 10b1c9767;  */

void FUN_10b1c9600(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x9;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_148 [80];
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined1 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *param_1;
  FUN_10b202630(auStack_148,param_1 + 5);
  iVar1 = *(int *)(param_1 + 8);
  uVar4 = *(ulong *)((long)param_1 + 0x44);
  func_0x00010b1ec518();
  func_0x00010b1eb674(&uStack_68,uVar3,param_1 + 2,auStack_148);
  if ((lStack_58 == 0) || (func_0x00010b1ed728(), !(bool)in_ZR)) goto LAB_10b1c9714;
  FUN_10b1bb504(&uStack_d0,uVar3,extraout_x9 + 0xc0);
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  func_0x00010b121bb0(&uStack_d0);
  func_0x00010b1ed824();
  if ((extraout_x8 != 0) && ((*(byte *)(extraout_x8 + 0x10) >> 4 & 1) != 0)) {
    iVar2 = *(int *)(*(long *)(extraout_x8 + 0x70) + 0x88);
    if ((iVar2 == 0) && ((uVar4 >> 0x20 & 1) != 0)) {
      if (*(int *)(*(long *)(extraout_x8 + 0x70) + 0x70) == (int)uVar4) {
LAB_10b1c96bc:
        uStack_f8 = uStack_68;
        uStack_f0 = uStack_60;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_e0 = uStack_50;
        lStack_e8 = lStack_58;
        uStack_d8 = uStack_48;
        uStack_50 = 0;
        uStack_48 = 0;
        func_0x00010b1ed914(&uStack_d0,uVar3,param_1 + 2,&uStack_f8,1);
        FUN_10b1d6520(&uStack_d0);
        func_0x00010b1ecad0();
      }
    }
    else if (iVar2 == iVar1) goto LAB_10b1c96bc;
  }
  func_0x00010b1219bc(&uStack_80);
LAB_10b1c9714:
  func_0x00010b1ece8c();
  func_0x00010b121e00(auStack_148);
  return;
}



/* Entry: 10b1c9768; end: 10b1c9787;  */

long FUN_10b1c9768(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1ec7dc();
  func_0x00010b1eca60();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b1c9788; end: 10b1c9823;  */

void FUN_10b1c9788(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char cStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c278b8(&uStack_38,&UNK_10e55a8c8);
  func_0x00010564c150(&uStack_58,&UNK_10f731b89);
  uVar1 = uStack_28;
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  param_1[2] = uVar1;
  param_1[3] = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (cStack_40 == '\x01') {
    param_1[5] = uStack_50;
    param_1[4] = uStack_58;
    param_1[6] = uStack_48;
    func_0x00010b1ed800();
    *(undefined1 *)(param_1 + 7) = extraout_w8;
  }
  func_0x00010b1ed0e0();
  func_0x00010b1ed29c();
  return;
}



/* Entry: 10b1c9824; end: 10b1c9c33;  */

undefined1  [16] FUN_10b1c9824(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 in_ZR;
  long *plVar5;
  int *piVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  long lVar10;
  byte bVar11;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_1a0 [40];
  int aiStack_178 [10];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_118 [32];
  long alStack_f8 [3];
  undefined1 auStack_e0 [16];
  int aiStack_d0 [6];
  undefined8 uStack_b8;
  long *aplStack_a8 [2];
  long alStack_98 [2];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  
  func_0x00010b1ec874();
  func_0x00010b1eae28();
  bVar11 = *(byte *)(param_1 + 0x76);
  puVar8 = *(undefined1 **)(param_3 + 0x10);
  uStack_70 = extraout_x8;
  if ((bVar11 & 1) == 0) {
    if (puVar8 != (undefined1 *)0x0) {
      if ((*(long *)(puVar8 + 0x170) != 0) &&
         (in_ZR = *(long *)(*(long *)(puVar8 + 0x170) + 8) == -1, !(bool)in_ZR)) {
        bVar11 = 0;
        goto LAB_10b1c9ad4;
      }
      goto LAB_10b1c9884;
    }
LAB_10b1c9abc:
    bVar11 = 0;
    alStack_98[0] = 0;
    alStack_98[1] = 0;
  }
  else {
    if (puVar8 == (undefined1 *)0x0) goto LAB_10b1c9abc;
LAB_10b1c9884:
    in_ZR = puVar8[0x130] == '\x01';
    puVar9 = puVar8;
    if (!(bool)in_ZR) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e0);
      uStack_130 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      func_0x00010b1ed944();
      func_0x00010b1ebfb4();
      func_0x00010b1ec2e0(&uStack_150);
      func_0x00010b1eb3bc();
      func_0x00010b1ed944();
      func_0x00010b1ebfb4();
      func_0x00010b1ec164();
      puVar9 = (undefined1 *)unaff_x21[2];
      puVar8 = (undefined1 *)0x0;
      if (puVar9 == (undefined1 *)0x0) goto LAB_10b1c9abc;
      bVar11 = *(byte *)(unaff_x19 + 0x76);
    }
    puVar8 = puVar9 + 0xf8;
    FUN_10b1c1e40(alStack_98,puVar8,(bVar11 ^ 0xff) & 1);
    if (alStack_98[0] == 0) {
LAB_10b1c9ac8:
      bVar11 = 0;
    }
    else {
      in_ZR = *(char *)(unaff_x21[2] + 0x40) == '\x01';
      if (((!(bool)in_ZR) ||
          (lVar10 = *(long *)(unaff_x21[2] + 0x38), in_ZR = lVar10 == 0, 0 < lVar10)) ||
         (in_ZR = *(char *)(alStack_98[0] + 0x30) == '\x01', !(bool)in_ZR)) goto LAB_10b1c9ac8;
      func_0x00010b1ec2e0(aplStack_a8);
      FUN_10b1c1ff0();
      if (aplStack_a8[0] == (long *)0x0) {
        bVar11 = 0;
      }
      else {
        func_0x00010b1246a0(auStack_e0);
        func_0x00010b1ec9dc(alStack_98[0],alStack_f8);
        lVar10 = 0;
        bVar2 = false;
        while (lVar3 = alStack_f8[0], alStack_f8[0] != 0) {
          in_ZR = *(int *)(alStack_f8[0] + 0x44) == 2;
          if ((bool)in_ZR) {
            puVar8 = (undefined1 *)unaff_x21[2];
            FUN_10b2026a0(&uStack_150,puVar8,alStack_f8[0] + 8);
            plVar5 = aplStack_a8[0];
            func_0x00010b1ec4bc();
            func_0x00010b1edc1c();
            plVar7 = aplStack_a8[0];
            if (((ulong)plVar5 & 1) != 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (auStack_88,auStack_118);
              func_0x00010b1ecab8(auStack_1a0,auStack_88);
              (**(code **)(*plVar7 + 0x60))(aiStack_178,plVar7,auStack_1a0);
              piVar6 = aiStack_178;
              puVar8 = auStack_118;
              FUN_10b11e978();
              iVar1 = *piVar6;
              FUN_10b131cc0(aiStack_178);
              func_0x000107c2826c(auStack_1a0);
              func_0x00010b1edad0();
              if (iVar1 == 0) {
                lVar10 = *(long *)(lVar3 + 0x30) + lVar10;
              }
              else {
                bVar2 = true;
              }
            }
            func_0x00010b1ed22c();
          }
          else {
            func_0x000107c28188(alStack_f8[0] + 8);
            func_0x00010b1ee2f0();
            piVar6 = aiStack_d0;
            func_0x00010b1eb4b4();
            if (piVar6 == (int *)0x0) {
              puVar9 = (undefined1 *)(ulong)(aiStack_d0[0] + 1);
              piVar6 = aiStack_d0;
              func_0x000107c27d60(piVar6,puVar9);
              if ((int)piVar6 != 0) {
                func_0x000107c28188(lVar3 + 8);
                func_0x00010b1ee2f0();
                func_0x00010b1eb4b4(aiStack_d0);
                puVar8 = puVar9;
              }
              piVar6 = aiStack_d0;
              func_0x000107c27d64(piVar6,0x48);
              func_0x0001053aba50(piVar6 + 2,uStack_b8,lVar3 + 8);
              uVar4 = uStack_b8;
              *(undefined ***)(piVar6 + 8) = &PTR_DAT_110ccaac8;
              *(undefined8 *)(piVar6 + 10) = uVar4;
              piVar6[0x10] = 0;
              piVar6[0x11] = 0;
              piVar6[0xc] = 0;
              piVar6[0xd] = 0;
              func_0x000107c27d68(aiStack_d0,puVar8,piVar6);
              aiStack_d0[0] = aiStack_d0[0] + 1;
            }
            puVar8 = (undefined1 *)(lVar3 + 0x20);
            FUN_10b1c3524(piVar6 + 8);
          }
          func_0x000107c27d54(alStack_f8);
        }
        if (!bVar2) {
          puVar8 = auStack_e0;
          func_0x00010b1ede84(unaff_x21[2] + 0xf8,puVar8);
        }
        if (lVar10 != 0) {
          *unaff_x21 = 0;
          *(undefined1 *)(unaff_x21 + 1) = 0;
          *(long *)(unaff_x21[2] + 0x28) = *(long *)(unaff_x21[2] + 0x28) - lVar10;
          unaff_x21[3] = 0;
          unaff_x21[4] = 0;
          func_0x00010b1ec2e0();
          FUN_10b1bdc50();
          func_0x00010b1ec1ec();
          puVar8 = (undefined1 *)-lVar10;
          FUN_10b1c3994();
        }
        bVar11 = bVar2 ^ 1;
        FUN_10b24d634(auStack_e0);
      }
      func_0x00010b125864(aplStack_a8);
    }
  }
  FUN_10b1e4868(alStack_98);
LAB_10b1c9ad4:
  func_0x00010b1eaddc(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1eb668();
    func_0x00010b1d3e60();
    FUN_10b24d634(auStack_e0);
    func_0x00010b125864(aplStack_a8);
    plVar7 = alStack_98;
    FUN_10b1e4868(plVar7);
    func_0x00010b1eb590();
    func_0x00010b1e6b08();
    auVar13._8_8_ = (ulong)puVar8 & 0xff;
    auVar13._0_8_ = plVar7;
    return auVar13;
  }
  auVar12._1_7_ = 0;
  auVar12[0] = bVar11;
  auVar12._8_8_ = puVar8;
  return auVar12;
}



/* Entry: 10b1c9c34; end: 10b1c9c37;  */

void FUN_10b1c9c34(void)

{
  func_0x00010b1e6b08();
  return;
}



/* Entry: 10b1c9c38; end: 10b1c9c5f;  */

void FUN_10b1c9c38(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b125908(param_1 + 0x60);
  func_0x00010b1ebd60(param_1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x19);
  return;
}



/* Entry: 10b1c9c60; end: 10b1c9ef7;  */

void FUN_10b1c9c60(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  undefined1 in_ZR;
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined **in_stack_00000040;
  long *in_stack_00000048;
  code *in_stack_00000068;
  undefined **in_stack_00000070;
  long *in_stack_00000078;
  undefined **in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined1 uStack00000000000000b8;
  undefined1 uStack00000000000000b9;
  undefined8 in_stack_000000f8;
  
  func_0x00010b1ee61c();
  func_0x00010b1eae28();
  in_stack_000000f8 = extraout_x8;
  func_0x00010b1ebb5c(&stack0x00000010);
  lVar2 = in_stack_00000020;
  func_0x00010b1ec1f4(in_stack_00000020);
  plVar3 = (long *)&stack0x000000a0;
  func_0x00010b1ec1fc();
  _uStack00000000000000b8 = CONCAT11((char)param_4,(char)param_3);
  in_stack_00000068 = FUN_10b1e7218;
  in_stack_00000070 = &PTR_FUN_110cc45a0;
  func_0x00010b1ec004();
  *plVar3 = unaff_x19;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (plVar3 + 1,&stack0x000000a0);
  *(undefined2 *)(plVar3 + 4) = _uStack00000000000000b8;
  in_stack_00000078 = plVar3;
  FUN_10b1c9ef8(&stack0x00000030,lVar2 + 0x80,&stack0x00000068);
  func_0x00010b1eb338(in_stack_00000070);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x000000a0);
  func_0x00010b1ebf84();
  uVar1 = 0;
  func_0x000108820c58();
  if ((((param_4 | uVar1) & 1) == 0) && (func_0x00010b1ee330(), (bool)in_ZR)) {
    FUN_10b1b8c14(&stack0x00000010,unaff_x19 + 0x2a0);
    lVar2 = in_stack_00000020;
    func_0x00010b1ec1f4(in_stack_00000020);
    plVar3 = (long *)&stack0x000000a0;
    func_0x00010b1ec1fc();
    _uStack00000000000000b8 = CONCAT11(uStack00000000000000b9,(char)param_3);
    in_stack_00000038 = 0x10b1e7260;
    in_stack_00000040 = &PTR_FUN_110cc45b8;
    func_0x00010b1ec004();
    *plVar3 = unaff_x19;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (plVar3 + 1,&stack0x000000a0);
    *(undefined1 *)(plVar3 + 4) = uStack00000000000000b8;
    in_stack_00000048 = plVar3;
    FUN_10b1c9ef8(&stack0x00000008,lVar2 + 0x90,&stack0x00000038);
    func_0x00010b1ebb00(in_stack_00000040);
    func_0x00010b1ec35c();
    func_0x00010b1ebf84();
    __ZNSt3__117__assoc_sub_state4waitEv(in_stack_00000008);
    func_0x000107c29bd8(&stack0x00000008);
  }
  if ((param_3 != 0) && (func_0x00010b1ee330(), (bool)in_ZR)) {
    func_0x00010b1ecd44(&stack0x00000010);
    in_stack_000000a0 = &PTR_DAT_110cc45d0;
    in_stack_000000b0 = in_stack_00000018;
    in_stack_000000a8 = in_stack_00000010;
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    func_0x00010b1ebe1c();
    func_0x00010b1ebbe0();
    func_0x00010b1eafb4(in_stack_000000a0);
    func_0x00010b1ebf7c();
  }
  func_0x000107c29bd8(&stack0x00000030);
  func_0x00010b1eaddc(in_stack_000000f8);
  if ((bool)in_ZR) {
    func_0x00010b1ee600();
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eb668();
  func_0x000107c29bd8();
  func_0x000107c29bd8(&stack0x00000030);
  do {
    func_0x00010b1eb590();
  } while( true );
}



/* Entry: 10b1c9ef8; end: 10b1ca16f;  */

/* WARNING: Removing unreachable block (ram,0x00010b1ca878) */

ulong **** FUN_10b1c9ef8(ulong ****param_1,undefined8 param_2,ulong *****param_3,ulong *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  int iVar6;
  undefined1 in_ZR;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  ulong ****ppppuVar12;
  ulong ****ppppuVar13;
  undefined8 *puVar14;
  ulong *****pppppuVar15;
  ulong *****pppppuVar16;
  ulong *****pppppuVar17;
  ulong *puVar18;
  uint uVar19;
  uint uVar20;
  code *pcVar21;
  undefined1 extraout_w8;
  char extraout_w8_00;
  undefined1 extraout_w8_01;
  char extraout_w8_02;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  ulong *****pppppuVar22;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  ulong *****extraout_x8_07;
  ulong extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  undefined8 *****extraout_x8_11;
  undefined8 *****pppppuVar23;
  ulong extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  ulong ****extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x9;
  undefined8 extraout_x9_00;
  ulong extraout_x9_01;
  int *piVar24;
  ulong extraout_x9_02;
  undefined8 *****extraout_x9_03;
  ulong extraout_x9_04;
  int extraout_w10;
  ulong *****pppppuVar25;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  ulong ****ppppuVar26;
  ulong extraout_x11;
  ulong *****extraout_x12;
  byte bVar27;
  int iVar28;
  undefined8 *unaff_x19;
  ulong ***pppuVar29;
  long lVar30;
  long lVar31;
  undefined8 *****pppppuVar32;
  ulong *****pppppuVar33;
  undefined4 *puVar34;
  ulong uVar35;
  ulong *****pppppuVar36;
  undefined8 uVar37;
  undefined8 ****ppppuVar38;
  ulong *****pppppuVar39;
  ulong ****ppppuVar40;
  ulong *****pppppuVar41;
  undefined8 *****pppppuVar42;
  undefined8 *****pppppuVar43;
  ulong *****pppppuVar44;
  undefined8 unaff_x30;
  ulong ****in_register_00005008;
  undefined8 uVar45;
  undefined8 in_stack_00000008;
  ulong ***in_stack_00000010;
  ulong *****in_stack_00000018;
  ulong ****in_stack_00000020;
  ulong ****in_stack_00000028;
  ulong ***in_stack_00000030;
  long in_stack_00000038;
  undefined **in_stack_00000040;
  undefined8 *in_stack_00000048;
  ulong *****in_stack_00000060;
  code *in_stack_00000068;
  undefined **in_stack_00000070;
  undefined8 *in_stack_00000078;
  code *in_stack_00000098;
  undefined **in_stack_000000a0;
  ulong ***in_stack_000000a8;
  ulong *****in_stack_000000b0;
  undefined1 uStack00000000000000b8;
  undefined1 uStack00000000000000b9;
  undefined8 in_stack_000000f0;
  ulong uStack_980;
  undefined1 auStack_960 [32];
  ulong ****ppppuStack_940;
  ulong ****ppppuStack_938;
  ulong ****ppppuStack_930;
  char cStack_928;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined4 uStack_8e0;
  undefined8 ****ppppuStack_8d8;
  undefined1 uStack_8d0;
  ulong uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_888;
  ulong ****ppppuStack_880;
  undefined1 auStack_878 [24];
  char cStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  char cStack_848;
  undefined8 ****ppppuStack_840;
  undefined8 ****ppppuStack_838;
  undefined8 ****ppppuStack_830;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  ulong ***apppuStack_7e0 [8];
  ulong ****ppppuStack_7a0;
  undefined1 uStack_798;
  undefined1 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined1 uStack_768;
  undefined1 auStack_760 [64];
  long alStack_720 [7];
  byte bStack_6e8;
  long lStack_6e0;
  undefined8 ***pppuStack_6d8;
  undefined8 ***pppuStack_6d0;
  undefined8 ***pppuStack_6c8;
  char cStack_6c0;
  undefined8 ***pppuStack_6b8;
  undefined8 ***pppuStack_6b0;
  byte bStack_6a8;
  ulong ***apppuStack_6a0 [3];
  undefined1 auStack_688 [24];
  ulong ****ppppuStack_670;
  ulong ****ppppuStack_668;
  ulong ****ppppuStack_660;
  long lStack_658;
  undefined4 uStack_650;
  undefined1 auStack_618 [8];
  undefined8 uStack_610;
  undefined8 auStack_608 [3];
  char cStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  char cStack_5d8;
  undefined8 ****ppppuStack_5d0;
  undefined8 ****ppppuStack_5c8;
  undefined8 ****ppppuStack_5c0;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 auStack_568 [64];
  undefined8 uStack_528;
  undefined1 uStack_520;
  undefined1 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 uStack_4f0;
  undefined1 auStack_4e8 [64];
  long alStack_4a8 [7];
  byte bStack_470;
  long lStack_468;
  undefined8 ***pppuStack_460;
  undefined8 ***pppuStack_458;
  undefined8 ***pppuStack_450;
  char cStack_448;
  undefined8 ***pppuStack_440;
  undefined8 ***pppuStack_438;
  byte bStack_430;
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [16];
  undefined1 uStack_3e8;
  ulong ****ppppuStack_3e0;
  ulong ****ppppuStack_3d8;
  ulong ****ppppuStack_3d0;
  char cStack_3c8;
  ulong ****ppppuStack_3c0;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined8 uStack_3b0;
  char cStack_3a8;
  undefined1 uStack_3a1;
  byte bStack_398;
  ulong ***pppuStack_370;
  ulong ***pppuStack_368;
  ulong ****ppppuStack_360;
  ulong ****ppppuStack_358;
  ulong ****ppppuStack_350;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  ulong ****ppppuStack_2f8;
  ulong ****ppppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 ****ppppuStack_2b0;
  ulong ***pppuStack_2a8;
  undefined1 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined1 uStack_270;
  ulong ****ppppuStack_268;
  ulong ****ppppuStack_260;
  ulong ****appppuStack_258 [7];
  undefined8 ****ppppuStack_220;
  undefined1 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  byte bStack_1e0;
  undefined8 ****ppppuStack_1d8;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong ***pppuStack_1b0;
  ulong ***pppuStack_1a8;
  undefined1 uStack_1a0;
  byte bStack_198;
  ulong ****ppppuStack_190;
  undefined1 uStack_188;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  ulong ****ppppuStack_150;
  ulong ****ppppuStack_148;
  ulong ****ppppuStack_140;
  ulong ****ppppuStack_138;
  ulong uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [40];
  int iStack_f0;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined1 uStack_c8;
  char cStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  char cStack_98;
  ulong auStack_68 [3];
  ulong **appuStack_50 [2];
  ulong ***apppuStack_40 [3];
  undefined8 uStack_28;
  ulong ****ppppuStack_20;
  ulong ***pppuStack_18;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  func_0x00010b1ecc8c();
  pppppuVar17 = param_3;
  puVar18 = param_4;
  func_0x00010b1eae28();
  in_stack_00000018 = (ulong *****)0x0;
  in_stack_00000020 = (ulong ****)0x0;
  ppppuVar12 = pppppuVar17[1];
  in_stack_00000098 = (code *)extraout_x8_00;
  if (((ppppuVar12 == (ulong ****)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), in_stack_00000020 = ppppuVar12,
      ppppuVar12 == (ulong ****)0x0)) ||
     (in_stack_00000018 = (ulong *****)*param_3, pppppuVar39 = in_stack_00000018,
     in_stack_00000018 == (ulong *****)0x0)) {
    ppppuVar26 = in_stack_00000020;
    in_stack_00000030 = (ulong ***)*param_4;
    (**(code **)(param_4[1] + 0x10))(&stack0x00000038,param_4 + 1);
    in_stack_00000060 = (ulong *****)in_stack_00000030;
    (**(code **)(in_stack_00000038 + 0x10))(&stack0x00000068,&stack0x00000038);
    ppppuVar13 = (ulong ****)0xc0;
    __Znwm();
    *ppppuVar13 = (ulong ***)&PTR_DAT_110cc44d0;
    ppppuVar13[1] = (ulong ***)0x0;
    ppppuVar13[0x12] = (ulong ***)in_stack_00000060;
    ppppuVar13[2] = (ulong ***)0x0;
    ppppuVar13[3] = (ulong ***)0x32aaaba7;
    ppppuVar12 = ppppuVar13;
    func_0x00010b1eb2bc();
    ppppuVar12[10] = (ulong ***)0x0;
    ppppuVar12[0xb] = (ulong ***)0x3cb0b1bb;
    func_0x00010b1ecb94();
    pppppuVar17 = (ulong *****)&stack0x00000068;
    (**(code **)(extraout_x9 + 0x10))(ppppuVar12 + 0x13);
    *(uint *)(ppppuVar13 + 0x11) = *(uint *)(ppppuVar13 + 0x11) | 8;
    func_0x000107c2805c(ppppuVar13);
    func_0x00010b1e70ac();
    func_0x00010b1eb338(in_stack_00000068);
    func_0x00010b1eb08c(in_stack_00000038);
    in_stack_00000010 = (ulong ***)0x0;
    ppppuVar12 = &stack0x00000010;
    in_stack_00000028 = ppppuVar13;
    func_0x000107c29bd8();
    func_0x00010b1ebccc();
    ppppuVar40 = ppppuVar12 + 2;
    *ppppuVar40 = (ulong ***)0x0;
    *ppppuVar12 = (ulong ***)&PTR_FUN_110cc4518;
    ppppuVar12[1] = (ulong ***)0x0;
    pppppuVar39 = (ulong *****)(ppppuVar12 + 3);
    *pppppuVar39 = ppppuVar13;
    in_stack_00000028 = (ulong ****)0x0;
    in_stack_00000030 = (ulong ***)0x0;
    in_stack_00000038 = 0;
    in_stack_00000060 = (ulong *****)0x0;
    in_stack_00000018 = pppppuVar39;
    in_stack_00000020 = ppppuVar12;
    in_stack_00000068 = (code *)ppppuVar26;
    func_0x00010b1eda3c();
    func_0x00010b1edf2c();
    do {
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ppppuVar40,0x10);
      if (bVar10) {
        *ppppuVar40 = (ulong ***)((long)*ppppuVar40 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    in_register_00005008 = param_3[1];
    param_1 = *param_3;
    *param_3 = (ulong ****)pppppuVar39;
    param_3[1] = ppppuVar12;
    in_stack_00000060 = (ulong *****)param_1;
    in_stack_00000068 = (code *)in_register_00005008;
    func_0x00010b1d393c(&stack0x00000060);
    func_0x00010b1ec230();
  }
  do {
    func_0x00010b1eb124();
    uVar20 = (uint)unaff_x30;
  } while (extraout_w10 != 0);
  in_stack_00000008 = 0;
  in_stack_00000030 = (ulong ***)0x0;
  in_stack_00000038 = 0;
  puVar14 = (undefined8 *)0xa0;
  in_stack_00000060 = pppppuVar39;
  in_stack_00000068 = (code *)ppppuVar12;
  __Znwm();
  puVar14[2] = 0;
  puVar14[3] = 0x32aaaba7;
  func_0x00010b1eb2bc();
  puVar14[10] = 0;
  puVar14[0xb] = 0x3cb0b1bb;
  puVar14[0xd] = in_register_00005008;
  puVar14[0xc] = param_1;
  puVar14[0xf] = in_register_00005008;
  puVar14[0xe] = param_1;
  puVar14[0x10] = 0;
  *puVar14 = &PTR_FUN_110cc4568;
  puVar14[1] = 0;
  puVar14[0x12] = pppppuVar39;
  puVar14[0x13] = ppppuVar12;
  in_stack_00000060 = (ulong *****)0x0;
  in_stack_00000068 = (code *)0x0;
  *(undefined4 *)(puVar14 + 0x11) = 8;
  *unaff_x19 = puVar14;
  in_stack_00000028 = (ulong ****)puVar14;
  func_0x000107c2805c();
  func_0x00010b1e71e4(&stack0x00000028);
  func_0x00010b1eda3c();
  func_0x00010b1edf2c();
  FUN_10b1e7110();
  ppppuVar12 = (ulong ****)&stack0x00000018;
  FUN_10b1e7110();
  func_0x00010b1eaddc(in_stack_00000098);
  if ((bool)in_ZR) {
    return ppppuVar12;
  }
  ___stack_chk_fail();
  func_0x00010b1ec230();
  ppppuVar26 = (ulong ****)&stack0x00000018;
  FUN_10b1e7110();
  func_0x00010b1eb590();
  pcStack_8 = FUN_10b1ca170;
  ppppuStack_20 = (ulong ****)param_3;
  pppuStack_18 = (ulong ***)ppppuVar12;
  puStack_10 = &stack0x000000f0;
  func_0x00010b1eae28();
  uVar8 = *(code *)(ppppuVar26 + 0xc6) == (code)0x1;
  uStack_28 = extraout_x8_01;
  if ((bool)uVar8) {
    func_0x00010b1ee12c(ppppuVar12 + 0xbe);
    if ((bool)uVar8) {
      pppuVar29 = ppppuVar12[0x47];
      if (pppuVar29 != (ulong ***)0x0) {
        func_0x00010b1ec190();
        func_0x00010b1ed7d0();
        func_0x00010b1eb654();
        puVar18 = auStack_68;
        pppppuVar17 = (ulong *****)0xda;
        func_0x00010b1eb5b4(pppuVar29,0xda,puVar18);
LAB_10b1ca1c4:
        func_0x00010b1eb750();
        ppppuVar26 = apppuStack_40;
LAB_10b1ca1d0:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar26);
      }
    }
    else {
      func_0x00010b1ee330();
      if (!(bool)uVar8) goto LAB_10b1ca240;
      func_0x00010b1ebbd4(*(undefined1 *)((long)pppppuVar17 + 0x17));
      if (extraout_x8_02 != 0) {
        ppppuVar26 = ppppuVar12;
        func_0x00010b1ede4c(ppppuVar12);
        func_0x00010b1ee12c(ppppuVar12 + 0xbe);
        if (!(bool)uVar8) {
          func_0x00010b1ecb18();
          func_0x000107c278b8(appuStack_50);
          func_0x00010b1ecf68();
          func_0x00010b1ede4c();
          ppppuVar26 = (ulong ****)appuStack_50;
          goto LAB_10b1ca1d0;
        }
        pppuVar29 = ppppuVar12[0x47];
        if (pppuVar29 != (ulong ***)0x0) {
          func_0x00010b1ec190();
          func_0x00010b1ed7d0();
          func_0x00010b1eb654();
          puVar18 = auStack_68;
          pppppuVar17 = (ulong *****)0xda;
          func_0x00010b1eb5b4(pppuVar29,0xda,puVar18);
          goto LAB_10b1ca1c4;
        }
      }
    }
    func_0x00010b1eaddc(uStack_28);
    if ((bool)uVar8) {
      return ppppuVar26;
    }
  }
  else {
LAB_10b1ca240:
    func_0x00010b1eaddc(uStack_28);
    pppuVar29 = pppuStack_18;
    if ((bool)uVar8) {
      iVar28 = 0;
      uVar19 = 1;
      func_0x00010b1ee61c(ppppuVar12);
      func_0x00010b1eae28();
      func_0x00010b1ebb5c(&stack0x00000010);
      ppppuVar12 = in_stack_00000020;
      func_0x00010b1ec1f4(in_stack_00000020);
      in_stack_00000098 = (code *)pppuVar29;
      puVar14 = &stack0x000000a0;
      func_0x00010b1ec1fc();
      _uStack00000000000000b8 = CONCAT11((char)uVar19,(char)iVar28);
      in_stack_00000068 = FUN_10b1e7218;
      in_stack_00000070 = &PTR_FUN_110cc45a0;
      func_0x00010b1ec004();
      *puVar14 = in_stack_00000098;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar14 + 1,&stack0x000000a0);
      *(undefined2 *)(puVar14 + 4) = _uStack00000000000000b8;
      in_stack_00000078 = puVar14;
      FUN_10b1c9ef8(&stack0x00000030,ppppuVar12 + 0x10,&stack0x00000068);
      func_0x00010b1eb338(in_stack_00000070);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x000000a0);
      func_0x00010b1ebf84();
      uVar20 = 0;
      func_0x000108820c58();
      if ((((uVar19 | uVar20) & 1) == 0) && (func_0x00010b1ee330(), (bool)uVar8)) {
        FUN_10b1b8c14(&stack0x00000010,pppuVar29 + 0x54);
        ppppuVar12 = in_stack_00000020;
        func_0x00010b1ec1f4(in_stack_00000020);
        in_stack_00000098 = (code *)pppuVar29;
        puVar14 = &stack0x000000a0;
        func_0x00010b1ec1fc();
        _uStack00000000000000b8 = CONCAT11(uStack00000000000000b9,(char)iVar28);
        in_stack_00000038 = 0x10b1e7260;
        in_stack_00000040 = &PTR_FUN_110cc45b8;
        func_0x00010b1ec004();
        *puVar14 = in_stack_00000098;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (puVar14 + 1,&stack0x000000a0);
        *(undefined1 *)(puVar14 + 4) = uStack00000000000000b8;
        in_stack_00000048 = puVar14;
        FUN_10b1c9ef8(&stack0x00000008,ppppuVar12 + 0x12,&stack0x00000038);
        func_0x00010b1ebb00(in_stack_00000040);
        func_0x00010b1ec35c();
        func_0x00010b1ebf84();
        __ZNSt3__117__assoc_sub_state4waitEv(in_stack_00000008);
        func_0x000107c29bd8(&stack0x00000008);
      }
      if ((iVar28 != 0) && (func_0x00010b1ee330(), (bool)uVar8)) {
        func_0x00010b1ecd44(&stack0x00000010);
        in_stack_00000098 = (code *)0x10b1e72a8;
        in_stack_000000a0 = &PTR_DAT_110cc45d0;
        in_stack_000000b0 = in_stack_00000018;
        in_stack_000000a8 = in_stack_00000010;
        in_stack_00000010 = (ulong ***)0x0;
        in_stack_00000018 = (ulong *****)0x0;
        func_0x00010b1ebe1c();
        func_0x00010b1ebbe0();
        func_0x00010b1eafb4(in_stack_000000a0);
        func_0x00010b1ebf7c();
      }
      ppppuVar12 = &stack0x00000030;
      func_0x000107c29bd8(ppppuVar12);
      func_0x00010b1eaddc(extraout_x8);
      if (!(bool)uVar8) {
        ___stack_chk_fail();
        func_0x00010b1eb668();
        func_0x000107c29bd8();
        func_0x000107c29bd8(&stack0x00000030);
        do {
          func_0x00010b1eb590();
        } while( true );
      }
      func_0x00010b1ee600();
      return ppppuVar12;
    }
  }
  ___stack_chk_fail();
  func_0x00010b1eb230();
  pppppuVar15 = (ulong *****)apppuStack_40;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b1eb590();
  pcVar21 = FUN_10b1ca2c4;
  func_0x00010b1ec024();
  uStack_980 = CONCAT44(uStack_980._4_4_,uVar20);
  pppppuVar32 = &ppppuStack_8d8;
  pppppuVar16 = pppppuVar15;
  pppppuVar33 = pppppuVar17;
  ppppuStack_20 = (ulong ****)&puStack_10;
  pppuStack_18 = (ulong ***)pcVar21;
  func_0x00010b1eae84();
  __ZNSt3__16chrono12system_clock3nowEv();
  uVar8 = *(char *)(pppppuVar15 + 0xc6) == '\x01';
  if ((bool)uVar8) {
    lStack_338 = 0;
    lStack_340 = 0;
    uStack_330 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_618,pppppuVar17);
    FUN_10b1f4818(&ppppuStack_e0,pppppuVar15 + 0xbb,auStack_618,puVar18,uVar20);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_618);
    uStack_3b8 = 0;
    bStack_398 = 0;
    ppppuStack_3c0 = (ulong ****)&ppppuStack_e0;
    FUN_10b1e77b0(&ppppuStack_3c0);
    bVar10 = false;
    pppppuVar33 = pppppuVar15;
    pppppuVar25 = pppppuVar17;
LAB_10b1ca374:
    if ((bStack_398 & 1) != 0) {
      pppppuVar41 = pppppuVar33;
      FUN_10b1cd5c8(pppppuVar33,pppppuVar25[1],*(undefined1 *)((long)pppppuVar25 + 0x17),uStack_3b0,
                    uStack_3a1,3);
      if (((ulong)pppppuVar41 & 1) == 0) goto LAB_10b1ca3dc;
      func_0x00010b1ed7dc(&ppppuStack_8d8);
      func_0x00010b1eb674();
      if (((uStack_8c8 == 0) || (uVar35 = uStack_8c8, func_0x00010b1ecd0c(), !(bool)uVar8)) ||
         (uVar8 = *(long *)(uVar35 + 0x38) == 0, 0 < *(long *)(uVar35 + 0x38))) goto LAB_10b1ca3d8;
      if (*(char *)((long)pppppuVar33 + 0x296) == '\x01') {
        ppppuStack_1d8 = ppppuStack_8d8;
        uStack_1d0 = uStack_8d0;
        ppppuStack_8d8 = (undefined8 *****)0x0;
        uStack_8d0 = 0;
        uStack_1b8 = uStack_8b8;
        uStack_1c0 = uStack_8c0;
        uStack_8c0 = 0;
        uStack_8b8 = 0;
        uStack_1c8 = uVar35;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&ppppuStack_2b0);
        uVar35 = uStack_1c8;
        pppppuVar25 = &ppppuStack_150;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (pppppuVar25,&ppppuStack_2b0);
        ppppuStack_138 = *(ulong *****)(uVar35 + 0x60);
        ppppuStack_668 = (ulong ****)0x0;
        ppppuStack_670 = (ulong ****)0x0;
        lStack_658 = 0;
        ppppuStack_660 = (ulong ****)0x0;
        uStack_650 = 0x3f800000;
        for (lVar30 = 0; uVar8 = lVar30 + -0x20 < 0, lVar30 != 0x20; lVar30 = lVar30 + 0x20) {
          func_0x00010b1ed9d4(&ppppuStack_670);
          pppppuVar44 = (ulong *****)ppppuStack_668;
          pppppuVar41 = pppppuVar25;
          if ((ulong *****)ppppuStack_668 != (ulong *****)0x0) {
            uVar35 = (long)ppppuStack_668 - 1;
            if (((ulong)ppppuStack_668 & uVar35) == 0) {
              pppppuVar39 = (ulong *****)(uVar35 & (ulong)pppppuVar25);
              uVar8 = false;
            }
            else {
              uVar8 = (long)pppppuVar25 - (long)ppppuStack_668 < 0;
              pppppuVar39 = pppppuVar25;
              if (ppppuStack_668 <= pppppuVar25) {
                uVar5 = 0;
                if ((ulong *****)ppppuStack_668 != (ulong *****)0x0) {
                  uVar5 = (ulong)pppppuVar25 / (ulong)ppppuStack_668;
                }
                pppppuVar39 = (ulong *****)((long)pppppuVar25 - uVar5 * (long)ppppuStack_668);
              }
            }
            ppppuVar12 = (ulong ****)ppppuStack_670[(long)pppppuVar39];
            if (ppppuVar12 != (ulong ****)0x0) {
              do {
                while( true ) {
                  ppppuVar12 = (ulong ****)*ppppuVar12;
                  if (ppppuVar12 == (ulong ****)0x0) goto LAB_10b1ca4fc;
                  pppppuVar22 = (ulong *****)ppppuVar12[1];
                  uVar8 = (long)pppppuVar22 - (long)pppppuVar25 < 0;
                  if (pppppuVar22 != pppppuVar25) break;
                  pppppuVar41 = (ulong *****)(ppppuVar12 + 2);
                  func_0x00010b1ebe54();
                  if (((ulong)pppppuVar41 & 1) != 0) goto LAB_10b1ca614;
                }
                if (((ulong)pppppuVar44 & uVar35) == 0) {
                  pppppuVar22 = (ulong *****)((ulong)pppppuVar22 & uVar35);
                }
                else if (pppppuVar44 <= pppppuVar22) {
                  uVar5 = 0;
                  if (pppppuVar44 != (ulong *****)0x0) {
                    uVar5 = (ulong)pppppuVar22 / (ulong)pppppuVar44;
                  }
                  pppppuVar22 = (ulong *****)((long)pppppuVar22 - uVar5 * (long)pppppuVar44);
                }
                uVar8 = (long)pppppuVar22 - (long)pppppuVar39 < 0;
              } while (pppppuVar22 == pppppuVar39);
            }
          }
LAB_10b1ca4fc:
          func_0x00010b1ec5d4();
          appppuStack_258[0] = (ulong ****)0x0;
          *pppppuVar41 = (ulong ****)0x0;
          pppppuVar41[1] = (ulong ****)pppppuVar25;
          ppppuStack_268 = (ulong ****)pppppuVar41;
          ppppuStack_260 = (ulong ****)&ppppuStack_660;
          func_0x00010b1eca94(pppppuVar41 + 2);
          pppppuVar41[5] = *(ulong *****)((long)&ppppuStack_138 + lVar30);
          appppuStack_258[0] = (ulong ****)CONCAT71(appppuStack_258[0]._1_7_,1);
          func_0x00010b1ebbc8(lStack_658);
          if ((pppppuVar44 == (ulong *****)0x0) || (func_0x00010b1ebbbc(), (bool)uVar8)) {
            func_0x00010b1ee148();
            bVar7 = (ulong *****)0x2 < pppppuVar44;
            bVar9 = pppppuVar44 == (ulong *****)0x3;
            func_0x00010b1eaeec();
            uVar37 = extraout_x8_03;
            if (!bVar7 || bVar9) {
              uVar37 = extraout_x9_00;
            }
            FUN_10b1b7c48(&ppppuStack_670,uVar37);
            pppppuVar44 = (ulong *****)ppppuStack_668;
            if (((ulong)ppppuStack_668 & (ulong)((long)ppppuStack_668 + -1)) == 0) {
              pppppuVar39 = (ulong *****)((ulong)((long)ppppuStack_668 + -1) & (ulong)pppppuVar25);
            }
            else {
              pppppuVar39 = pppppuVar25;
              if (ppppuStack_668 <= pppppuVar25) {
                uVar35 = 0;
                if ((ulong *****)ppppuStack_668 != (ulong *****)0x0) {
                  uVar35 = (ulong)pppppuVar25 / (ulong)ppppuStack_668;
                }
                pppppuVar39 = (ulong *****)((long)pppppuVar25 - uVar35 * (long)ppppuStack_668);
              }
            }
          }
          ppppuVar12 = (ulong ****)ppppuStack_670[(long)pppppuVar39];
          if (ppppuVar12 == (ulong ****)0x0) {
            *ppppuStack_268 = (ulong ***)ppppuStack_660;
            ppppuStack_660 = ppppuStack_268;
            ppppuStack_670[(long)pppppuVar39] = (ulong ***)&ppppuStack_660;
            if ((ulong ****)*ppppuStack_268 != (ulong ****)0x0) {
              pppppuVar25 = (ulong *****)(*ppppuStack_268)[1];
              if (((ulong)pppppuVar44 & (long)pppppuVar44 - 1U) == 0) {
                pppppuVar25 = (ulong *****)((ulong)pppppuVar25 & (long)pppppuVar44 - 1U);
              }
              else if (pppppuVar44 <= pppppuVar25) {
                uVar35 = 0;
                if (pppppuVar44 != (ulong *****)0x0) {
                  uVar35 = (ulong)pppppuVar25 / (ulong)pppppuVar44;
                }
                pppppuVar25 = (ulong *****)((long)pppppuVar25 - uVar35 * (long)pppppuVar44);
              }
              ppppuStack_670[(long)pppppuVar25] = (ulong ***)ppppuStack_268;
            }
          }
          else {
            *ppppuStack_268 = *ppppuVar12;
            *ppppuVar12 = (ulong ***)ppppuStack_268;
          }
          ppppuStack_268 = (ulong ****)0x0;
          lStack_658 = lStack_658 + 1;
          pppppuVar41 = &ppppuStack_268;
          FUN_10b1b7e40();
LAB_10b1ca614:
          pppppuVar25 = pppppuVar41;
        }
        pppppuVar25 = &ppppuStack_150;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        ppppuStack_260 = (ulong ****)0x0;
        ppppuStack_268 = (ulong ****)0x0;
        appppuStack_258[0] = (ulong ****)0x0;
        lVar30 = *(long *)(uStack_1c8 + 0x50) - *(long *)(uStack_1c8 + 0x48);
        if (lVar30 != 0) {
          uVar35 = lVar30 / 0x88;
          if (uVar35 >> 0x3b != 0) {
            FUN_10b1d8b08();
            goto LAB_10b1cc094;
          }
          lVar30 = 0;
          FUN_10b1d8b14(&ppppuStack_150,uVar35,0,appppuStack_258);
          func_0x00010b1ee2c4();
          pppppuVar25 = (ulong *****)(extraout_x8_04 - lVar30);
          _memcpy();
          ppppuVar12 = ppppuStack_268;
          appppuStack_258[0] = ppppuStack_138;
          ppppuStack_260 = ppppuStack_140;
          ppppuStack_268 = (ulong ****)(extraout_x8_04 - lVar30);
          func_0x00010b1ec444(ppppuVar12);
        }
        FUN_10b2029a0();
        pppppuVar41 = pppppuVar25;
        __ZNSt3__16chrono12system_clock3nowEv();
        ppppuStack_2f0 = (ulong ****)0x0;
        ppppuStack_2f8 = (ulong ****)0x0;
        uStack_2e8 = 0;
        piVar2 = *(int **)(uStack_1c8 + 0x50);
        for (piVar24 = *(int **)(uStack_1c8 + 0x48); piVar24 != piVar2; piVar24 = piVar24 + 0x22) {
          pppppuVar33 = pppppuVar25;
          FUN_10b20345c(pppppuVar25,*piVar24,piVar24[0xe]);
          iVar28 = *piVar24;
          pppppuVar39 = *(ulong ******)(piVar24 + 10);
          ppppuVar12 = *(ulong *****)(piVar24 + 0x10);
          if (ppppuStack_260 < appppuStack_258[0]) {
            *(int *)ppppuStack_260 = iVar28;
            ppppuStack_260[1] = (ulong ***)pppppuVar33;
            ppppuStack_260[2] = (ulong ***)pppppuVar39;
            pppppuVar44 = (ulong *****)(ppppuStack_260 + 4);
            ppppuStack_260[3] = (ulong ***)ppppuVar12;
          }
          else {
            lVar30 = (long)ppppuStack_260 - (long)ppppuStack_268 >> 5;
            if (lVar30 + 1U >> 0x3b != 0) {
              FUN_10b1d8b08();
              goto LAB_10b1cc094;
            }
            func_0x00010b1ec290();
            uVar37 = extraout_x8_05;
            if (0x7fffffffffffffdf < extraout_x9_01) {
              uVar37 = 0x7ffffffffffffff;
            }
            FUN_10b1d8b14(&ppppuStack_150,uVar37);
            *(int *)ppppuStack_140 = iVar28;
            ppppuStack_140[1] = (ulong ***)pppppuVar33;
            ppppuStack_140[2] = (ulong ***)pppppuVar39;
            ppppuStack_140[3] = (ulong ***)ppppuVar12;
            pppppuVar44 = (ulong *****)(ppppuStack_140 + 4);
            func_0x00010b1ee2c4();
            pppppuVar39 = (ulong *****)(extraout_x8_06 - lVar30);
            _memcpy(pppppuVar39);
            ppppuVar12 = ppppuStack_268;
            appppuStack_258[0] = ppppuStack_138;
            ppppuStack_268 = (ulong ****)pppppuVar39;
            ppppuStack_260 = (ulong ****)pppppuVar44;
            func_0x00010b1ec444(ppppuVar12);
          }
          ppppuStack_260 = (ulong ****)pppppuVar44;
          if (*(long *)(piVar24 + 0xc) == 0) {
            lVar30 = *(long *)(piVar24 + 10);
            FUN_10b1cd230(lVar30,*(undefined8 *)(piVar24 + 0x10),*(undefined8 *)(uStack_1c8 + 0x60),
                          pppppuVar33);
            if (0 < lVar30 && lVar30 < (long)pppppuVar41) {
              FUN_10b1d8bac(&ppppuStack_2f8,piVar24);
            }
          }
          pppppuVar33 = pppppuVar15;
        }
        lVar30 = (long)ppppuStack_260 - (long)ppppuStack_268;
        for (pppppuVar25 = (ulong *****)ppppuStack_268; lVar30 = lVar30 + -0x20,
            pppppuVar44 = (ulong *****)ppppuStack_2f8, pppppuVar25 != (ulong *****)ppppuStack_260;
            pppppuVar25 = pppppuVar25 + 4) {
          pppppuVar22 = (ulong *****)ppppuStack_260;
          if ((pppppuVar25[1] == (ulong ****)0x0) || (*(int *)((long)pppppuVar25[1] + 0x4c) < 1))
          goto LAB_10b1caa78;
        }
        goto LAB_10b1cad9c;
      }
      ppppuStack_668 = (ulong ****)0x0;
      ppppuStack_670 = (ulong ****)0x0;
      ppppuStack_660 = (ulong ****)0x0;
      ppppuStack_260 = (ulong ****)0x0;
      ppppuStack_268 = (ulong ****)0x0;
      appppuStack_258[0] = (ulong ****)0x0;
      puVar1 = *(undefined4 **)(uVar35 + 0x50);
      for (puVar34 = *(undefined4 **)(uVar35 + 0x48); puVar34 != puVar1; puVar34 = puVar34 + 0x22) {
        pppppuVar39 = pppppuVar41;
        if (*(long *)(puVar34 + 0xc) < 1) {
          FUN_10b2029a0();
          FUN_10b20345c();
          pppppuVar39 = *(ulong ******)(puVar34 + 10);
          FUN_10b1cd230(pppppuVar39,*(undefined8 *)(puVar34 + 0x10),
                        *(undefined8 *)(uStack_8c8 + 0x60),pppppuVar41);
          if (0 < (long)pppppuVar39 && (long)pppppuVar39 < (long)pppppuVar16) {
            *(ulong ******)(puVar34 + 0xc) = pppppuVar16;
            FUN_10b1d8bac(&ppppuStack_670,puVar34);
            pppppuVar39 = &ppppuStack_268;
            FUN_10b1d75ec(pppppuVar39,*puVar34);
          }
        }
        pppppuVar41 = pppppuVar39;
      }
      FUN_10b1cd2ac(pppppuVar33[0x47],uStack_8c8,&ppppuStack_670);
      if (*(char *)((long)pppppuVar33 + 0x295) == '\x01') {
        lVar30 = 0;
        lVar31 = 0;
        pppppuVar39 = (ulong *****)ppppuStack_668;
LAB_10b1ca6d4:
        if (lVar30 != 0xc) {
          iVar28 = *(int *)(&UNK_10e564630 + lVar30);
          ppppuVar12 = *(ulong *****)(uStack_8c8 + 0x48);
          while( true ) {
            if (ppppuVar12 == *(ulong *****)(uStack_8c8 + 0x50)) goto LAB_10b1ca80c;
            if (*(int *)ppppuVar12 == iVar28) break;
            ppppuVar12 = ppppuVar12 + 0x11;
          }
          pppppuVar41 = (ulong *****)0x0;
          for (pppppuVar25 = (ulong *****)ppppuStack_670; pppppuVar25 != pppppuVar39;
              pppppuVar25 = pppppuVar25 + 1) {
            ppppuVar26 = *pppppuVar25;
            if (ppppuVar12 != ppppuVar26 && *(int *)ppppuVar26 == iVar28) {
              ppppuVar26[6] = (ulong ***)0x0;
              pppppuVar41 = (ulong *****)((long)pppppuVar41 + 1);
            }
          }
          pppppuVar44 = (ulong *****)ppppuStack_670;
          pppppuVar25 = pppppuVar17;
          if (pppppuVar41 != (ulong *****)0x0) {
            for (; uVar8 = pppppuVar44 == pppppuVar39, !(bool)uVar8; pppppuVar44 = pppppuVar44 + 1)
            {
              pppppuVar25 = pppppuVar44;
              if ((*pppppuVar44)[6] == (ulong ***)0x0) goto LAB_10b1ca774;
            }
            goto LAB_10b1ca79c;
          }
          goto LAB_10b1ca80c;
        }
        ppppuStack_668 = (ulong ****)pppppuVar39;
        if (lVar31 != 0) {
          ppppuStack_148 = (ulong ****)0x0;
          ppppuStack_150 = (ulong ****)0x0;
          ppppuStack_140 = (ulong ****)0x0;
          FUN_10b114b00(pppppuVar33[0x47],0xdc,&ppppuStack_150,*(undefined8 *)(uStack_8c8 + 0x28));
          FUN_10b120998(&ppppuStack_150);
        }
      }
      pppppuVar41 = *(ulong ******)(uStack_8c8 + 0x48);
      pppppuVar39 = *(ulong ******)(uStack_8c8 + 0x50);
      pppppuVar44 = pppppuVar41;
      FUN_10b1bf2b0(pppppuVar41,pppppuVar39);
      ppppuVar12 = ppppuStack_260;
      pppppuVar22 = (ulong *****)ppppuStack_268;
      if (pppppuVar44 == (ulong *****)0x0) {
        for (; uVar8 = pppppuVar41 == pppppuVar39, !(bool)uVar8; pppppuVar41 = pppppuVar41 + 0x11) {
          if (0 < (long)pppppuVar41[6]) {
            func_0x00010b1ed7dc();
            FUN_10b1be404();
          }
        }
        if ((uVar20 == 0) || (((ulong)pppppuVar33[0xbe] & 1) == 0)) {
          if ((*(long *)(uStack_8c8 + 0x170) == 0) ||
             (uVar8 = true, *(long *)(*(long *)(uStack_8c8 + 0x170) + 8) == -1)) {
            ppppuStack_220 = ppppuStack_8d8;
            uStack_218 = uStack_8d0;
            ppppuStack_8d8 = (undefined8 *****)0x0;
            uStack_8d0 = 0;
            uStack_210 = uStack_8c8;
            uStack_200 = uStack_8b8;
            uStack_208 = uStack_8c0;
            uStack_8c0 = 0;
            uStack_8b8 = 0;
            func_0x00010b1ed7dc(&ppppuStack_150);
            func_0x00010b1ebe44();
            func_0x00010b1d3e60(&ppppuStack_220);
            func_0x00010b1ee270();
            if ((bool)uVar8) {
              func_0x00010b1ece38(&lStack_340);
            }
            func_0x00010b1ebf30();
            iVar28 = 0;
          }
          else {
            iVar28 = 3;
          }
        }
        else {
          bVar10 = true;
          iVar28 = 2;
        }
      }
      else {
        for (; ppppuVar26 = ppppuStack_668, uVar8 = pppppuVar22 == (ulong *****)ppppuVar12,
            pppppuVar41 = (ulong *****)ppppuStack_670, !(bool)uVar8;
            pppppuVar22 = (ulong *****)((long)pppppuVar22 + 4)) {
          ppppuVar26 = pppppuVar33[0x47];
          FUN_10b12983c(&ppppuStack_150,*(int *)pppppuVar22);
          func_0x00010b20b440(*(int *)pppppuVar44);
          func_0x00010b1ec990(auStack_128,"other");
          func_0x00010b1eb930(&ppppuStack_2b0,&ppppuStack_150);
          func_0x00010b1eb5b4(ppppuVar26,0xb8,&ppppuStack_2b0);
          func_0x00010b1ece9c();
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
            func_0x00010b1ee484();
          } while (!(bool)uVar8);
          pppppuVar33 = pppppuVar15;
        }
        for (; pppppuVar41 != (ulong *****)ppppuVar26; pppppuVar41 = pppppuVar41 + 1) {
          if (*(char *)((long)pppppuVar33 + 0x294) == '\x01') {
            for (piVar24 = *(int **)(uStack_8c8 + 0x48); piVar24 != *(int **)(uStack_8c8 + 0x50);
                piVar24 = piVar24 + 0x22) {
              if ((*(long *)(piVar24 + 0xc) == 0) && (*piVar24 == *(int *)*pppppuVar41))
              goto LAB_10b1cabc4;
            }
          }
          func_0x00010b1ed7dc();
          FUN_10b1be404();
LAB_10b1cabc4:
        }
        if ((uVar20 == 0) || (((ulong)pppppuVar33[0xbe] & 1) == 0)) {
          iVar28 = 3;
        }
        else {
          bVar10 = true;
          iVar28 = 2;
        }
      }
      func_0x00010b1b399c(&ppppuStack_268);
      FUN_10b1d8c5c(&ppppuStack_670);
      func_0x00010b1eca08();
      uVar8 = iVar28 == 3;
      if (((bool)uVar8) || (iVar28 == 0)) goto LAB_10b1ca3dc;
    }
    goto LAB_10b1cbf54;
  }
  if ((long)pppppuVar15[0x51] < 1) {
LAB_10b1caedc:
    pppppuVar25 = pppppuVar16;
    FUN_10b2029a0();
    uStack_8f8 = 0;
    uStack_900 = 0;
    uStack_8e8 = 0;
    uStack_8f0 = 0;
    uStack_8e0 = 0x3f800000;
    pppppuVar39 = pppppuVar25 + 0xc;
    FUN_10b1e72c8();
    ppppuStack_150 = (ulong ****)pppppuVar39;
    ppppuStack_148 = (ulong ****)pppppuVar33;
    iVar28 = 0x7fffffff;
    while (iVar6 = iVar28, (ulong *****)ppppuStack_150 != (ulong *****)0x0) {
      iVar3 = *(int *)(ppppuStack_148 + 7);
      FUN_10b1e734c(&ppppuStack_150);
      iVar28 = iVar3;
      if (iVar6 <= iVar3) {
        iVar28 = iVar6;
      }
      if (iVar3 < 1) {
        iVar28 = iVar6;
      }
    }
    uVar8 = iVar6 == 0x7fffffff;
    if (!(bool)uVar8) {
      func_0x00010b1edaa4(&ppppuStack_670);
      ppppuStack_1d8 = (undefined8 ****)((ulong)ppppuStack_1d8 & 0xffffffffffffff00);
      uStack_1c8 = uStack_1c8 & 0xffffffffffffff00;
      func_0x00010b1edc80(&ppppuStack_8d8);
      pppppuVar39 = (ulong *****)ppppuStack_8d8[1];
      ppppuStack_260 = (ulong ****)ppppuStack_8d8[2];
      ppppuStack_268 = (ulong ****)pppppuVar39;
      if ((ulong *****)ppppuStack_260 != (ulong *****)0x0) {
        do {
          func_0x00010b1eaf98();
          pppppuVar39 = extraout_x8_07;
        } while (extraout_w11 != 0);
      }
      FUN_10b1fafd0(&uStack_888,pppppuVar39[2],&ppppuStack_670);
      uStack_798 = 0;
      uStack_768 = 0;
      if (cStack_848 != '\0') {
        uStack_780 = 0;
        uVar8 = cStack_860 == '\x01';
        if ((bool)uVar8) {
          func_0x00010b1ecb3c();
          uStack_780 = extraout_w8;
        }
        uStack_770 = uStack_850;
        uStack_778 = uStack_858;
        uStack_768 = 1;
        FUN_10b1d7db0(auStack_878);
      }
      ppppuStack_7a0 = ppppuStack_880;
      ppppuStack_880 = (ulong ****)0x0;
      FUN_10b1d7d18(auStack_760,&ppppuStack_7a0);
      uStack_7f8 = 0;
      uStack_800 = 0;
      uStack_7e8 = 0;
      uStack_7f0 = 0;
      uStack_818 = 0;
      uStack_820 = 0;
      uStack_808 = 0;
      uStack_810 = 0;
      FUN_10b1d7d18(apppuStack_7e0,&uStack_820);
      ppppuStack_838 = (undefined8 *****)0x0;
      ppppuStack_830 = (undefined8 *****)0x0;
      ppppuStack_840 = (undefined8 *****)0x0;
      FUN_10b1d7f2c(&lStack_6e0,auStack_760);
      pppppuVar33 = (ulong *****)apppuStack_7e0;
      FUN_10b1d7f2c(alStack_720);
      ppppuStack_220 = &ppppuStack_840;
      uStack_218 = 0;
      pppppuVar32 = (undefined8 *****)0x1;
      while ((((bStack_6a8 & 1) != 0 || ((bStack_6e8 & 1) != 0)) &&
             (uVar8 = 1, lStack_6e0 != alStack_720[0]))) {
        if ((bStack_6a8 & 1) == 0) {
          uVar37 = *(undefined8 *)(lStack_6e0 + 8);
          func_0x00010b1eb9a4(apppuStack_6a0);
          pppppuVar33 = (ulong *****)apppuStack_6a0;
          func_0x000107c27f54(auStack_688,&UNK_10f2e0451);
          func_0x00010b1eb99c(uVar37);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_688);
          func_0x00010b1eda74();
        }
        ppppuVar38 = ppppuStack_838;
        pppppuVar23 = (undefined8 *****)ppppuStack_840;
        if (ppppuStack_838 < ppppuStack_830) {
          *(undefined1 *)ppppuStack_838 = 0;
          *(undefined1 *)(ppppuStack_838 + 3) = 0;
          uVar8 = cStack_6c0 == '\x01';
          if ((bool)uVar8) {
            ppppuStack_838[2] = pppuStack_6c8;
            ppppuStack_838[1] = pppuStack_6d0;
            *ppppuStack_838 = pppuStack_6d8;
            func_0x00010b1ee1ec();
            *(undefined1 *)(ppppuVar38 + 3) = 1;
          }
          ppppuVar38[5] = pppuStack_6b0;
          ppppuVar38[4] = pppuStack_6b8;
          pppppuVar23 = (undefined8 *****)(ppppuVar38 + 6);
        }
        else {
          lVar30 = (long)ppppuStack_838 - (long)ppppuStack_840;
          if (0x555555555555555 < lVar30 / 0x30 + 1U) {
            FUN_10b1d7df0();
            goto LAB_10b1cc094;
          }
          func_0x00010b1eb414(((long)ppppuStack_830 - (long)ppppuStack_840) / 0x30);
          uVar35 = extraout_x9_02;
          if (0x2aaaaaaaaaaaaa9 < extraout_x8_08) {
            uVar35 = extraout_x11;
          }
          if (uVar35 == 0) {
            lVar31 = 0;
          }
          else {
            if (extraout_x11 < uVar35) goto LAB_10b1cc078;
            lVar31 = uVar35 * 0x30;
            __Znwm();
          }
          puVar14 = (undefined8 *)(lVar31 + lVar30);
          func_0x00010b1ec934();
          if (cStack_6c0 == '\x01') {
            puVar14[1] = pppuStack_6d0;
            *puVar14 = pppuStack_6d8;
            puVar14[2] = pppuStack_6c8;
            func_0x00010b1ee1ec();
            *(undefined1 *)(puVar14 + 3) = 1;
          }
          puVar14[5] = pppuStack_6b0;
          puVar14[4] = pppuStack_6b8;
          pppppuVar42 = (undefined8 *****)(puVar14 + (lVar30 / -0x30) * 6);
          for (lVar30 = 0;
              bVar10 = (undefined8 *****)((long)pppppuVar23 + lVar30) ==
                       (undefined8 *****)ppppuVar38, !bVar10; lVar30 = lVar30 + 0x30) {
            func_0x00010b1ec378();
            lVar30 = extraout_x8_09;
            if (bVar10) {
              func_0x00010b1eb768();
              *(undefined1 *)(extraout_x10 + 0x18) = 1;
              lVar30 = extraout_x8_10;
            }
            uVar37 = *(undefined8 *)((long)pppppuVar23 + lVar30 + 0x20);
            *(undefined8 *)((long)pppppuVar42 + lVar30 + 0x28) =
                 *(undefined8 *)((long)pppppuVar23 + lVar30 + 0x28);
            *(undefined8 *)((long)pppppuVar42 + lVar30 + 0x20) = uVar37;
          }
          for (; uVar8 = pppppuVar23 == (undefined8 *****)ppppuVar38, !(bool)uVar8;
              pppppuVar23 = pppppuVar23 + 6) {
            func_0x00010b1eddb4();
          }
          pppppuVar23 = (undefined8 *****)(puVar14 + 6);
          ppppuStack_830 = (undefined8 ****)(lVar31 + uVar35 * 0x30);
          bVar10 = (undefined8 *****)ppppuStack_840 != (undefined8 *****)0x0;
          ppppuStack_840 = pppppuVar42;
          if (bVar10) {
            ppppuStack_838 = pppppuVar23;
            __ZdlPv();
          }
        }
        ppppuStack_838 = pppppuVar23;
        FUN_10b1d7dfc(&lStack_6e0);
      }
      uStack_218 = 1;
      FUN_10b1d7ec0(&ppppuStack_220);
      func_0x00010b1ebe7c(alStack_720);
      FUN_10b1d7f8c(&pppuStack_6d8);
      func_0x00010b1ebe7c(apppuStack_7e0);
      func_0x00010b1ed9c8();
      func_0x00010b1ebe7c(auStack_760);
      func_0x00010b1ebe7c(&ppppuStack_7a0);
      ppppuStack_d8 = ppppuStack_838;
      ppppuStack_e0 = ppppuStack_840;
      ppppuStack_d0 = ppppuStack_830;
      ppppuStack_840 = (undefined8 *****)0x0;
      ppppuStack_838 = (undefined8 *****)0x0;
      ppppuStack_830 = (undefined8 *****)0x0;
      uStack_c8 = 1;
      FUN_10b1d7fac(&ppppuStack_840);
      FUN_10b1d7fd0(&uStack_888);
      FUN_10b1b7824(&ppppuStack_268);
      func_0x00010bccbe4c(&ppppuStack_8d8);
      func_0x00010b1ecedc();
      func_0x00010b1ee1d8();
      if ((bool)uVar8) {
        func_0x00010b1ecc04();
        uStack_130 = CONCAT71(uStack_130._1_7_,1);
      }
      iStack_f0 = 0;
      func_0x00010b1ed198();
      ppppuStack_e0 = (undefined8 ****)((ulong)ppppuStack_e0 & 0xffffffffffffff00);
      uStack_c8 = 0;
      if (iStack_f0 == 0) {
        func_0x00010b1ee1b0();
        if ((bool)uVar8) {
          func_0x00010b1ed644();
          func_0x00010b1ee19c();
          cStack_3a8 = extraout_w8_00;
        }
      }
      else {
        if (iStack_f0 != 1) {
          func_0x00010563ab98();
          goto LAB_10b1cc094;
        }
        ppppuStack_3c0 = (ulong ****)((ulong)ppppuStack_3c0 & 0xffffffffffffff00);
        cStack_3a8 = '\0';
      }
      func_0x00010b1ed198();
      func_0x00010b1ecb88();
      FUN_10b1d803c();
      FUN_10b1b78d0(&ppppuStack_1d8);
      func_0x000107c279a4(&ppppuStack_670);
      if (cStack_3a8 == '\x01') {
        pppppuVar41 = (ulong *****)CONCAT71(uStack_3b7,uStack_3b8);
        for (pppppuVar39 = (ulong *****)ppppuStack_3c0; pppppuVar39 != pppppuVar41;
            pppppuVar39 = pppppuVar39 + 6) {
          if (*(char *)(pppppuVar39 + 5) == '\x01') {
            pppppuVar32 = (undefined8 *****)((long)pppppuVar39[4] * 1000);
          }
          else {
            pppppuVar32 = (undefined8 *****)0x0;
          }
          pppppuVar33 = pppppuVar39;
          func_0x00010549026c();
          puVar14 = &uStack_900;
          FUN_10b1b7254();
          *puVar14 = pppppuVar32;
        }
      }
      FUN_10b1d801c(&ppppuStack_3c0);
    }
    uStack_918 = 0;
    uStack_910 = 0;
    uStack_908 = 0;
    pppppuVar39 = pppppuVar25 + 0xc;
    FUN_10b1e72c8();
    ppppuStack_2f8 = (ulong ****)pppppuVar39;
    ppppuStack_2f0 = (ulong ****)pppppuVar33;
    func_0x00010b1ec26c();
    pppppuVar33 = (ulong *****)ppppuStack_2f0;
    while (ppppuStack_2f0 = (ulong ****)pppppuVar33, pppppuVar39 != (ulong *****)0x0) {
      uVar35 = (ulong)*(int *)((long)pppppuVar33 + 0x54);
      if (0 < *(int *)((long)pppppuVar33 + 0x54)) {
        uVar20 = *(uint *)(pppppuVar33 + 7);
        uVar8 = uVar20 == 1;
        if (0 < (int)uVar20) {
          uVar5 = (ulong)uVar20;
          if ((long)uVar35 <= (long)(ulong)uVar20) {
            uVar5 = uVar35;
          }
          uVar8 = *(char *)((long)pppppuVar33 + 0x5d) == '\x01';
          if ((bool)uVar8) {
            uVar35 = uVar5;
          }
        }
        ppppuVar12 = *pppppuVar33;
        func_0x00010b1edaa4(&ppppuStack_1d8);
        uStack_980 = uStack_980 & 0xffffffffffffff00 | 1;
        ppppuStack_220 = (undefined8 ****)((ulong)ppppuStack_220 & 0xffffffffffffff00);
        uStack_210 = uStack_210 & 0xffffffffffffff00;
        func_0x00010bccbc98(&ppppuStack_670,pppppuVar15 + 0x10,&UNK_10f73845f,0x3b);
        pppppuVar23 = (undefined8 *****)ppppuStack_670[1];
        pppuStack_2a8 = ppppuStack_670[2];
        pppppuVar39 = pppppuVar16;
        ppppuStack_2b0 = pppppuVar23;
        if ((ulong ****)pppuStack_2a8 != (ulong ****)0x0) {
          do {
            func_0x00010b1eaf98();
            pppppuVar23 = extraout_x8_11;
            pppppuVar39 = extraout_x12;
          } while (extraout_w11_00 != 0);
        }
        FUN_10b1fb254(auStack_618,pppppuVar23[2],&ppppuStack_1d8,
                      (ulong)ppppuVar12 & 0xffffffff | 0x100000000,
                      (long)(pppppuVar39 + uVar35 * -0x1e848) / 1000,uStack_980);
        uStack_520 = 0;
        uStack_4f0 = 0;
        if (cStack_5d8 != '\0') {
          uStack_508 = 0;
          bVar10 = cStack_5f0 == '\x01';
          uVar8 = bVar10;
          if (bVar10) {
            func_0x00010b1ebc9c(auStack_608[0]);
          }
          uStack_4f8 = uStack_5e0;
          uStack_500 = uStack_5e8;
          uStack_4f0 = 1;
          uStack_508 = bVar10;
          FUN_10b1d8118(auStack_608);
        }
        uStack_528 = uStack_610;
        uStack_610 = 0;
        FUN_10b1d8080(auStack_4e8,&uStack_528);
        uStack_578 = 0;
        uStack_580 = 0;
        uStack_588 = 0;
        uStack_590 = 0;
        uStack_5a8 = 0;
        uStack_5b0 = 0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        FUN_10b1d8080(auStack_568,&uStack_5b0);
        ppppuStack_5c0 = (undefined8 *****)0x0;
        ppppuStack_5d0 = (undefined8 *****)0x0;
        ppppuStack_5c8 = (undefined8 *****)0x0;
        FUN_10b1d8294(&lStack_468,auStack_4e8);
        FUN_10b1d8294(alStack_4a8,auStack_568);
        ppppuStack_268 = (ulong ****)&ppppuStack_5d0;
        ppppuStack_260 = (ulong ****)((ulong)ppppuStack_260 & 0xffffffffffffff00);
        while ((((bStack_430 & 1) != 0 || ((bStack_470 & 1) != 0)) &&
               (uVar8 = 1, lStack_468 != alStack_4a8[0]))) {
          if ((bStack_430 & 1) == 0) {
            uVar37 = *(undefined8 *)(lStack_468 + 8);
            func_0x00010b1eb9a4(auStack_428);
            func_0x00010b1eb224(auStack_410);
            func_0x00010b1eb99c(uVar37);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_410);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_428);
          }
          ppppuVar38 = ppppuStack_5c8;
          pppppuVar23 = (undefined8 *****)ppppuStack_5d0;
          if (ppppuStack_5c8 < ppppuStack_5c0) {
            func_0x00010b1ec934();
            uVar8 = cStack_448 == '\x01';
            if ((bool)uVar8) {
              func_0x00010b1ec278(pppuStack_450,pppuStack_460);
              pppuStack_458 = (undefined8 ****)0x0;
              pppuStack_450 = (undefined8 ****)0x0;
              pppuStack_460 = (undefined8 ****)0x0;
              *(undefined1 *)(ppppuVar38 + 3) = 1;
            }
            ppppuVar38[5] = pppuStack_438;
            ppppuVar38[4] = pppuStack_440;
            pppppuVar23 = (undefined8 *****)(ppppuVar38 + 6);
          }
          else {
            lVar30 = (long)ppppuStack_5c8 - (long)ppppuStack_5d0;
            if (pppppuVar32 < (undefined8 *****)(lVar30 / 0x30 + 1)) {
              FUN_10b1d8158();
              goto LAB_10b1cc094;
            }
            func_0x00010b1eb414(((long)ppppuStack_5c0 - (long)ppppuStack_5d0) / 0x30);
            pppppuVar42 = extraout_x9_03;
            if (0x2aaaaaaaaaaaaa9 < extraout_x8_12) {
              pppppuVar42 = pppppuVar32;
            }
            if (pppppuVar42 == (undefined8 *****)0x0) {
              lVar31 = 0;
            }
            else {
              if (pppppuVar32 < pppppuVar42) {
                func_0x000104bd35f4();
                goto LAB_10b1cc094;
              }
              lVar31 = (long)pppppuVar42 * 0x30;
              __Znwm();
            }
            pppppuVar32 = (undefined8 *****)(lVar31 + lVar30);
            *(undefined1 *)pppppuVar32 = 0;
            *(undefined1 *)(pppppuVar32 + 3) = 0;
            if (cStack_448 == '\x01') {
              pppppuVar32[1] = (undefined8 ****)pppuStack_458;
              *pppppuVar32 = (undefined8 ****)pppuStack_460;
              pppppuVar32[2] = (undefined8 ****)pppuStack_450;
              pppuStack_458 = (undefined8 ****)0x0;
              pppuStack_450 = (undefined8 ****)0x0;
              pppuStack_460 = (undefined8 ****)0x0;
              *(undefined1 *)(pppppuVar32 + 3) = 1;
            }
            pppppuVar32[5] = (undefined8 ****)pppuStack_438;
            pppppuVar32[4] = (undefined8 ****)pppuStack_440;
            pppppuVar43 = pppppuVar32 + (lVar30 / -0x30) * 6;
            for (lVar30 = 0;
                bVar10 = (undefined8 *****)((long)pppppuVar23 + lVar30) ==
                         (undefined8 *****)ppppuVar38, !bVar10; lVar30 = lVar30 + 0x30) {
              func_0x00010b1ec378();
              lVar30 = extraout_x8_13;
              if (bVar10) {
                func_0x00010b1eb768();
                *(undefined1 *)(extraout_x10_00 + 0x18) = 1;
                lVar30 = extraout_x8_14;
              }
              uVar37 = *(undefined8 *)((long)pppppuVar23 + lVar30 + 0x20);
              *(undefined8 *)((long)pppppuVar43 + lVar30 + 0x28) =
                   *(undefined8 *)((long)pppppuVar23 + lVar30 + 0x28);
              *(undefined8 *)((long)pppppuVar43 + lVar30 + 0x20) = uVar37;
            }
            for (; uVar8 = pppppuVar23 == (undefined8 *****)ppppuVar38, !(bool)uVar8;
                pppppuVar23 = pppppuVar23 + 6) {
              func_0x000107c279a4(pppppuVar23);
            }
            pppppuVar23 = pppppuVar32 + 6;
            ppppuStack_5c0 = (undefined8 ****)(lVar31 + (long)pppppuVar42 * 0x30);
            bVar10 = (undefined8 *****)ppppuStack_5d0 != (undefined8 *****)0x0;
            ppppuStack_5d0 = pppppuVar43;
            ppppuStack_5c8 = pppppuVar23;
            if (bVar10) {
              __ZdlPv();
            }
            func_0x00010b1ec26c();
          }
          ppppuStack_5c8 = pppppuVar23;
          FUN_10b1d8164(&lStack_468);
        }
        ppppuStack_260 = (ulong ****)CONCAT71(ppppuStack_260._1_7_,1);
        FUN_10b1d8228(&ppppuStack_268);
        func_0x00010b1ebd20(alStack_4a8);
        FUN_10b1d82f4(&pppuStack_460);
        func_0x00010b1ebd20(auStack_568);
        func_0x00010b1ebd20(&uStack_5b0);
        func_0x00010b1ebd20(auStack_4e8);
        func_0x00010b1ebd20(&uStack_528);
        ppppuStack_d8 = ppppuStack_5c8;
        ppppuStack_e0 = ppppuStack_5d0;
        ppppuStack_d0 = ppppuStack_5c0;
        ppppuStack_5d0 = (undefined8 *****)0x0;
        ppppuStack_5c8 = (undefined8 *****)0x0;
        ppppuStack_5c0 = (undefined8 *****)0x0;
        uStack_c8 = 1;
        FUN_10b1d8314(&ppppuStack_5d0);
        FUN_10b1d8338(auStack_618);
        FUN_10b1b7824(&ppppuStack_2b0);
        func_0x00010bccbe4c(&ppppuStack_670);
        func_0x00010bccbdb4(&ppppuStack_670);
        func_0x00010b1ee1d8();
        if ((bool)uVar8) {
          func_0x00010b1ecc04();
          uStack_130 = CONCAT71(uStack_130._1_7_,1);
        }
        iStack_f0 = 0;
        func_0x00010b1ed190();
        ppppuStack_e0 = (undefined8 ****)((ulong)ppppuStack_e0 & 0xffffffffffffff00);
        uStack_c8 = 0;
        if (iStack_f0 == 0) {
          func_0x00010b1ee1b0();
          if ((bool)uVar8) {
            func_0x00010b1ed644();
            ppppuStack_140 = (ulong ****)0x0;
            ppppuStack_138 = (ulong ****)0x0;
            ppppuStack_148 = (ulong ****)0x0;
            cStack_3a8 = '\x01';
          }
        }
        else {
          if (iStack_f0 != 1) {
            func_0x00010563ab98();
            goto LAB_10b1cc094;
          }
          cStack_3a8 = '\0';
          ppppuStack_3c0 = (ulong ****)((ulong)ppppuStack_3c0 & 0xffffffffffffff00);
        }
        func_0x00010b1ed190();
        func_0x00010b1ecb88();
        FUN_10b1d83a4();
        FUN_10b1b78d0(&ppppuStack_220);
        func_0x000107c279a4(&ppppuStack_1d8);
        if ((cStack_3a8 == '\x01') &&
           (pppppuVar41 = (ulong *****)CONCAT71(uStack_3b7,uStack_3b8),
           pppppuVar39 = (ulong *****)ppppuStack_3c0, (ulong *****)ppppuStack_3c0 != pppppuVar41)) {
          for (; uVar8 = pppppuVar39 == pppppuVar41, !(bool)uVar8; pppppuVar39 = pppppuVar39 + 6) {
            pppppuVar22 = pppppuVar39;
            func_0x00010549026c(pppppuVar39);
            pppppuVar44 = pppppuVar39 + 4;
            func_0x000107267f8c();
            FUN_10b1cca18(&ppppuStack_150,pppppuVar15,pppppuVar17,pppppuVar22,ppppuVar12,
                          pppppuVar33 + 1,0,(long)*pppppuVar44 * 1000,&uStack_900,0);
            func_0x00010b1ee270();
            if ((bool)uVar8) {
              func_0x00010b1ece38(&uStack_918);
            }
            func_0x00010b1ebf30();
          }
        }
        FUN_10b1d8384(&ppppuStack_3c0);
      }
      FUN_10b1e734c(&ppppuStack_2f8);
      pppppuVar33 = (ulong *****)ppppuStack_2f0;
      pppppuVar39 = (ulong *****)ppppuStack_2f8;
    }
    func_0x00010b1edaa4(auStack_960);
    auStack_3f8[0] = 0;
    uStack_3e8 = 0;
    func_0x00010b1edc80(&ppppuStack_3c0);
    ppppuVar12 = (ulong ****)ppppuStack_3c0[1];
    pppuStack_368 = ppppuStack_3c0[2];
    pppuStack_370 = (ulong ***)ppppuVar12;
    if ((ulong ****)pppuStack_368 != (ulong ****)0x0) {
      do {
        func_0x00010b1eaf98();
        ppppuVar12 = extraout_x8_15;
      } while (extraout_w11_01 != 0);
    }
    FUN_10b1fb3c8(&ppppuStack_e0,ppppuVar12[2],auStack_960);
    pppuStack_2a8 = (ulong ***)((ulong)pppuStack_2a8 & 0xffffffffffffff00);
    uStack_270 = 0;
    if (cStack_98 != '\0') {
      uStack_290 = 0;
      if (cStack_b8 == '\x01') {
        func_0x00010b1ecb3c();
        uStack_290 = extraout_w8_01;
      }
      uStack_280 = uStack_a8;
      uStack_288 = uStack_b0;
      uStack_278 = uStack_a0;
      uStack_270 = 1;
      FUN_10b1d87d8(&ppppuStack_d0);
    }
    ppppuStack_2b0 = ppppuStack_d8;
    ppppuStack_d8 = (undefined8 *****)0x0;
    func_0x00010b1d8730(&ppppuStack_268,&ppppuStack_2b0);
    uStack_300 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    lStack_338 = 0;
    lStack_340 = 0;
    func_0x00010b1d8730(&ppppuStack_2f8,&lStack_340);
    ppppuStack_350 = (ulong ****)0x0;
    ppppuStack_360 = (ulong ****)0x0;
    ppppuStack_358 = (ulong ****)0x0;
    FUN_10b1d897c(&ppppuStack_1d8,&ppppuStack_268);
    FUN_10b1d897c(&ppppuStack_220,&ppppuStack_2f8);
    ppppuStack_190 = (ulong ****)&ppppuStack_360;
    uStack_188 = 0;
    while ((((bStack_198 & 1) != 0 || ((bStack_1e0 & 1) != 0)) && (ppppuStack_1d8 != ppppuStack_220)
           )) {
      if ((bStack_198 & 1) == 0) {
        ppppuVar38 = (undefined8 ****)ppppuStack_1d8[1];
        func_0x00010b1eb9a4(auStack_180);
        func_0x00010b1eb224(auStack_168);
        func_0x00010b1eb99c(ppppuVar38);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
      }
      ppppuVar12 = ppppuStack_358;
      pppppuVar39 = (ulong *****)ppppuStack_360;
      if (ppppuStack_358 < ppppuStack_350) {
        func_0x00010b1ec934();
        if ((char)uStack_1b8 == '\x01') {
          func_0x00010b1ec278(uStack_1c0,CONCAT71(uStack_1cf,uStack_1d0));
          func_0x00010b1ee1ec();
          *(undefined1 *)(ppppuVar12 + 3) = 1;
        }
        *(undefined1 *)(ppppuVar12 + 6) = uStack_1a0;
        ppppuVar12[5] = pppuStack_1a8;
        ppppuVar12[4] = pppuStack_1b0;
        pppppuVar39 = (ulong *****)(ppppuVar12 + 7);
      }
      else {
        lVar30 = (long)ppppuStack_358 - (long)ppppuStack_360;
        uVar35 = lVar30 / 0x38 + 1;
        uVar8 = 0x492492492492491 < uVar35;
        if (0x492492492492492 < uVar35) {
          FUN_10b1d8828();
          goto LAB_10b1cc094;
        }
        func_0x00010b1eb414(((long)ppppuStack_350 - (long)ppppuStack_360) / 0x38);
        func_0x00010b1ed5cc();
        uVar35 = extraout_x9_04;
        if ((bool)uVar8) {
          uVar35 = 0x492492492492492;
        }
        if (uVar35 == 0) {
          lVar31 = 0;
        }
        else {
          if (0x492492492492492 < uVar35) {
            func_0x000104bd35f4();
            goto LAB_10b1cc094;
          }
          lVar31 = uVar35 * 0x38;
          __Znwm();
        }
        puVar14 = (undefined8 *)(lVar31 + lVar30);
        *(undefined1 *)puVar14 = 0;
        *(undefined1 *)(puVar14 + 3) = 0;
        if ((char)uStack_1b8 == '\x01') {
          puVar14[1] = uStack_1c8;
          *puVar14 = CONCAT71(uStack_1cf,uStack_1d0);
          puVar14[2] = uStack_1c0;
          func_0x00010b1ee1ec();
          *(undefined1 *)(puVar14 + 3) = 1;
        }
        puVar14[5] = pppuStack_1a8;
        puVar14[4] = pppuStack_1b0;
        *(undefined1 *)(puVar14 + 6) = uStack_1a0;
        pppppuVar33 = (ulong *****)(puVar14 + (lVar30 / -0x38) * 7);
        for (lVar30 = 0;
            bVar10 = (ulong *****)((long)pppppuVar39 + lVar30) == (ulong *****)ppppuVar12, !bVar10;
            lVar30 = lVar30 + 0x38) {
          func_0x00010b1ec378();
          lVar30 = extraout_x8_16;
          if (bVar10) {
            func_0x00010b1eb768();
            *(undefined1 *)(extraout_x10_01 + 0x18) = 1;
            lVar30 = extraout_x8_17;
          }
          uVar45 = *(undefined8 *)((long)pppppuVar39 + lVar30 + 0x28);
          uVar37 = *(undefined8 *)((long)pppppuVar39 + lVar30 + 0x20);
          *(undefined1 *)((long)pppppuVar33 + lVar30 + 0x30) =
               *(undefined1 *)((long)pppppuVar39 + lVar30 + 0x30);
          *(undefined8 *)((long)pppppuVar33 + lVar30 + 0x28) = uVar45;
          *(undefined8 *)((long)pppppuVar33 + lVar30 + 0x20) = uVar37;
        }
        for (; pppppuVar39 != (ulong *****)ppppuVar12; pppppuVar39 = pppppuVar39 + 7) {
          func_0x00010b1eddb4();
        }
        pppppuVar39 = (ulong *****)(puVar14 + 7);
        ppppuStack_350 = (ulong ****)(lVar31 + uVar35 * 0x38);
        bVar10 = (ulong *****)ppppuStack_360 != (ulong *****)0x0;
        ppppuStack_360 = (ulong ****)pppppuVar33;
        if (bVar10) {
          ppppuStack_358 = (ulong ****)pppppuVar39;
          __ZdlPv();
        }
      }
      ppppuStack_358 = (ulong ****)pppppuVar39;
      FUN_10b1d8834(&ppppuStack_1d8);
    }
    uStack_188 = 1;
    FUN_10b1d8910(&ppppuStack_190);
    func_0x00010b1ebe84(&ppppuStack_220);
    FUN_10b1d89e4(&uStack_1d0);
    func_0x00010b1ebe84(&ppppuStack_2f8);
    func_0x00010b1ed8b0();
    func_0x00010b1ebe84(&ppppuStack_268);
    func_0x00010b1ebe84(&ppppuStack_2b0);
    ppppuStack_3d8 = ppppuStack_358;
    ppppuStack_3e0 = ppppuStack_360;
    ppppuStack_3d0 = ppppuStack_350;
    ppppuStack_360 = (ulong ****)0x0;
    ppppuStack_358 = (ulong ****)0x0;
    ppppuStack_350 = (ulong ****)0x0;
    cStack_3c8 = '\x01';
    FUN_10b1d8a04(&ppppuStack_360);
    FUN_10b1d8a28(&ppppuStack_e0);
    FUN_10b1b7824(&pppuStack_370);
    func_0x00010bccbe4c(&ppppuStack_3c0);
    func_0x00010bccbdb4(&ppppuStack_3c0);
    ppppuStack_148 = (ulong ****)((ulong)ppppuStack_148 & 0xffffffffffffff00);
    uVar35 = uStack_130 >> 8;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    if (cStack_3c8 == '\x01') {
      ppppuStack_140 = ppppuStack_3d8;
      ppppuStack_148 = ppppuStack_3e0;
      ppppuStack_138 = ppppuStack_3d0;
      ppppuStack_3d0 = (ulong ****)0x0;
      ppppuStack_3d8 = (ulong ****)0x0;
      ppppuStack_3e0 = (ulong ****)0x0;
      uStack_130 = CONCAT71((int7)uVar35,1);
    }
    iStack_f0 = 0;
    func_0x00010b1ed250();
    ppppuStack_3e0 = (ulong ****)((ulong)ppppuStack_3e0 & 0xffffffffffffff00);
    cStack_3c8 = 0;
    if (iStack_f0 == 0) {
      ppppuStack_940 = (ulong ****)((ulong)ppppuStack_940._1_7_ << 8);
      cStack_928 = '\0';
      if ((char)uStack_130 == '\x01') {
        ppppuStack_938 = ppppuStack_140;
        ppppuStack_940 = ppppuStack_148;
        ppppuStack_930 = ppppuStack_138;
        func_0x00010b1ee19c();
        cStack_928 = extraout_w8_02;
      }
    }
    else {
      if (iStack_f0 != 1) {
        func_0x00010563ab98();
        goto LAB_10b1cc094;
      }
      ppppuStack_940 = (ulong ****)((ulong)ppppuStack_940._1_7_ << 8);
      cStack_928 = '\0';
    }
    func_0x00010b1ed250();
    func_0x00010b1ecb88();
    FUN_10b1d8aa0();
    FUN_10b1b78d0(auStack_3f8);
    func_0x00010b1ec510();
    ppppuVar12 = ppppuStack_938;
    uVar8 = 0;
    if (cStack_928 == '\x01') {
      pppppuVar39 = (ulong *****)(ppppuStack_940 + 5);
      while( true ) {
        pppppuVar33 = pppppuVar39 + -5;
        uVar11 = pppppuVar33 == (ulong *****)ppppuVar12;
        uVar8 = 1;
        if ((bool)uVar11) break;
        ppppuStack_150 = (ulong ****)(ulong)*(uint *)(pppppuVar39 + -1);
        pppppuVar41 = pppppuVar25 + 0xc;
        pppppuVar44 = &ppppuStack_150;
        FUN_10b1cd0e4();
        if ((pppppuVar41 == (ulong *****)0x0) ||
           (uVar11 = *(int *)((long)pppppuVar44 + 0x54) == 0, *(int *)((long)pppppuVar44 + 0x54) < 1
           )) {
          func_0x00010549026c(pppppuVar33);
          if ((*(byte *)((long)pppppuVar39 + -4) & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_10b1cc094;
          }
          iVar28 = *(int *)(pppppuVar39 + -1);
          pppppuVar41 = pppppuVar25;
          FUN_10b1231f8(pppppuVar25,iVar28);
          pppppuVar44 = pppppuVar39;
          func_0x000107267f8c();
          FUN_10b1cca18(&ppppuStack_150,pppppuVar15,pppppuVar17,pppppuVar33,iVar28,pppppuVar41,
                        (long)*pppppuVar44 * 1000,0,&uStack_900,0);
          func_0x00010b1ee270();
          if ((bool)uVar11) {
            func_0x00010b1ece38(&uStack_918);
          }
          func_0x00010b1ebf30();
        }
        pppppuVar39 = pppppuVar39 + 7;
      }
    }
    FUN_10b1cd118(pppppuVar15,&uStack_918,3);
    FUN_10b1cc598(pppppuVar15,pppppuVar17,pppppuVar16);
    FUN_10b1d8a80(&ppppuStack_940);
    func_0x00010b128754(&uStack_918);
    FUN_10b1b78fc(&uStack_900);
  }
  else {
    uVar8 = pppppuVar16 == (ulong *****)pppppuVar15[0x98];
    if ((long)pppppuVar15[0x98] <= (long)pppppuVar16) {
      pppppuVar15[0x98] = (ulong ****)(pppppuVar16 + (long)pppppuVar15[0x51] * 0x7d);
      goto LAB_10b1caedc;
    }
  }
  bVar27 = 1;
  goto LAB_10b1cc02c;
LAB_10b1caa78:
  pppppuVar36 = pppppuVar22 + -4;
  if (pppppuVar36 == pppppuVar25) goto LAB_10b1cad9c;
  if ((pppppuVar22[-3] != (ulong ****)0x0) && (0 < *(int *)((long)pppppuVar22[-3] + 0x4c))) {
    pppppuVar44 = (ulong *****)0x0;
    pppppuVar39 = (ulong *****)((lVar30 >> 5) + 1);
    ppppuStack_148 = (ulong ****)0x0;
    ppppuStack_150 = (ulong ****)0x0;
    if (lVar30 >> 5 < 3) goto LAB_10b1cad70;
    pppppuVar44 = pppppuVar39;
    if ((ulong *****)0x3fffffffffffffe < pppppuVar39) {
      pppppuVar44 = (ulong *****)0x3ffffffffffffff;
    }
    if (pppppuVar44 == (ulong *****)0x0) goto LAB_10b1cacbc;
    goto LAB_10b1caca0;
  }
  lVar30 = lVar30 + -0x20;
  pppppuVar22 = pppppuVar36;
  goto LAB_10b1caa78;
LAB_10b1ca774:
  while (pppppuVar44 = pppppuVar44 + 1, pppppuVar44 != pppppuVar39) {
    if ((*pppppuVar44)[6] != (ulong ***)0x0) {
      *pppppuVar25 = *pppppuVar44;
      pppppuVar25 = pppppuVar25 + 1;
    }
  }
  uVar8 = pppppuVar25 == pppppuVar39;
  if (!(bool)uVar8) {
    pppppuVar39 = pppppuVar25;
  }
LAB_10b1ca79c:
  pppppuVar25 = (ulong *****)ppppuStack_268;
  if (ppppuVar12[6] == (ulong ***)0x0) {
    for (; uVar8 = pppppuVar25 == (ulong *****)ppppuStack_260, !(bool)uVar8;
        pppppuVar25 = (ulong *****)((long)pppppuVar25 + 4)) {
      pppppuVar44 = pppppuVar25;
      if (*(int *)pppppuVar25 == iVar28) goto LAB_10b1ca840;
    }
  }
LAB_10b1ca7a4:
  ppppuVar12 = pppppuVar33[0x47];
  FUN_10b12983c(&ppppuStack_150,iVar28);
  FUN_10b1edaec(pppppuVar41);
  func_0x00010b123dbc(auStack_128,&UNK_10f731bc3,0xf);
  func_0x00010b1eb930(&ppppuStack_2b0,&ppppuStack_150);
  func_0x00010b1eb5b4(ppppuVar12,0xdb,&ppppuStack_2b0);
  lVar31 = (long)pppppuVar41 + lVar31;
  func_0x00010b1ece9c();
  pppppuVar33 = (ulong *****)0x38;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
    func_0x00010b1ee484();
  } while (!(bool)uVar8);
  func_0x00010b1ece40();
  pppppuVar25 = pppppuVar41;
LAB_10b1ca80c:
  lVar30 = lVar30 + 4;
  goto LAB_10b1ca6d4;
LAB_10b1ca840:
  while (pppppuVar25 = (ulong *****)((long)pppppuVar25 + 4),
        pppppuVar25 != (ulong *****)ppppuStack_260) {
    if (*(int *)pppppuVar25 != iVar28) {
      *(int *)pppppuVar44 = *(int *)pppppuVar25;
      pppppuVar44 = (ulong *****)((long)pppppuVar44 + 4);
    }
  }
  uVar8 = pppppuVar44 == (ulong *****)ppppuStack_260;
  if (!(bool)uVar8) {
    uVar8 = true;
    ppppuStack_260 = (ulong ****)pppppuVar44;
  }
  goto LAB_10b1ca7a4;
  while (pppppuVar44 = (ulong *****)((ulong)pppppuVar44 >> 1), pppppuVar44 != (ulong *****)0x0) {
LAB_10b1caca0:
    lVar30 = (long)pppppuVar44 << 5;
    __ZnwmRKSt9nothrow_t(lVar30,PTR___ZSt7nothrow_1103469d8);
    if (lVar30 != 0) goto LAB_10b1cad54;
  }
LAB_10b1cacbc:
  lVar30 = 0;
LAB_10b1cad54:
  uStack_888 = 0;
  ppppuStack_880 = (ulong ****)pppppuVar44;
  FUN_10b1e7798(&ppppuStack_150,lVar30);
  ppppuStack_148 = (ulong ****)pppppuVar44;
  FUN_10b1e7470(&uStack_888);
LAB_10b1cad70:
  FUN_10b1e7490(pppppuVar25,pppppuVar36,pppppuVar39,ppppuStack_150,pppppuVar44);
  FUN_10b1e7470(&ppppuStack_150);
  pppppuVar44 = (ulong *****)ppppuStack_2f8;
LAB_10b1cad9c:
  for (; ppppuVar12 = ppppuStack_2f0, pppppuVar25 = (ulong *****)ppppuStack_2f8,
      pppppuVar44 != (ulong *****)ppppuStack_2f0; pppppuVar44 = pppppuVar44 + 1) {
    (*pppppuVar44)[6] = (ulong ***)pppppuVar41;
  }
  FUN_10b1cd2ac(pppppuVar33[0x47],uStack_1c8,&ppppuStack_2f8);
  for (; pppppuVar25 != (ulong *****)ppppuVar12; pppppuVar25 = pppppuVar25 + 1) {
    (*pppppuVar25)[6] = (ulong ***)0x0;
  }
  uStack_130 = 0;
  ppppuStack_138 = (ulong ****)0x0;
  ppppuStack_140 = (ulong ****)0x0;
  ppppuStack_148 = (ulong ****)0x0;
  ppppuStack_150 = (ulong ****)0x0;
  FUN_10b1be194(&ppppuStack_1d8,&ppppuStack_150);
  func_0x00010b1d3e60(&ppppuStack_150);
  ppppuVar12 = ppppuStack_260;
  for (pppppuVar25 = (ulong *****)ppppuStack_268; uVar8 = pppppuVar25 == (ulong *****)ppppuVar12,
      !(bool)uVar8; pppppuVar25 = pppppuVar25 + 4) {
    FUN_10b1cca18(&ppppuStack_150,pppppuVar33,pppppuVar17,&ppppuStack_2b0,*(int *)pppppuVar25,
                  pppppuVar25[1],pppppuVar25[2],pppppuVar25[3],&ppppuStack_670,
                  CONCAT11((char)uVar20,1));
    func_0x00010b1ee270();
    if ((bool)uVar8) {
      func_0x00010b1ece38(&lStack_340);
    }
    func_0x00010b1ebf30();
  }
  if (((uVar20 & 1) == 0) || (uVar8 = *(char *)(pppppuVar33 + 0xc6) == '\x01', !(bool)uVar8)) {
    func_0x00010b1eda7c();
    func_0x00010b1edb5c();
    func_0x00010b1ece7c();
    func_0x00010b1edbb4();
    func_0x00010b1eda10();
    pppppuVar25 = pppppuVar17;
LAB_10b1ca3d8:
    func_0x00010b1eca08();
LAB_10b1ca3dc:
    FUN_10b1e77b0(&ppppuStack_3c0);
    goto LAB_10b1ca374;
  }
  ppppuVar12 = pppppuVar33[0xbe];
  func_0x00010b1eda7c();
  func_0x00010b1edb5c();
  func_0x00010b1ece7c();
  func_0x00010b1edbb4();
  func_0x00010b1eda10();
  pppppuVar25 = pppppuVar17;
  if (((ulong)ppppuVar12 & 1) == 0) goto LAB_10b1ca3d8;
  func_0x00010b1eca08();
  bVar10 = true;
LAB_10b1cbf54:
  FUN_10b1d8c84(&uStack_3b8);
  func_0x00010b1eba88(&ppppuStack_e0);
  if ((bVar10) && (ppppuVar12 = pppppuVar33[0x47], ppppuVar12 != (ulong ****)0x0)) {
    func_0x00010b1ec990(&ppppuStack_150,"phase");
    func_0x00010b1eb654(&ppppuStack_e0,&ppppuStack_150);
    func_0x00010b1eb5b4(ppppuVar12,0xda,&ppppuStack_e0);
    func_0x00010b1ecab0();
    func_0x00010b1eb5ac(&ppppuStack_150);
  }
  uVar8 = lStack_340 == lStack_338;
  if (!(bool)uVar8) {
    FUN_10b1cd118(pppppuVar33,&lStack_340,3);
  }
  bVar27 = bVar10 ^ 1;
  func_0x00010b128754(&lStack_340);
  if ((uVar20 == 0) || (((ulong)pppppuVar33[0xbe] & 1) == 0)) {
    ppppuVar12 = pppppuVar33[0x51];
    uVar8 = ppppuVar12 == (ulong ****)0x1;
    if (0 < (long)ppppuVar12) {
      uVar8 = pppppuVar16 == (ulong *****)pppppuVar33[0x98];
      if ((long)pppppuVar16 < (long)pppppuVar33[0x98]) goto LAB_10b1cc02c;
      pppppuVar33[0x98] = (ulong ****)(pppppuVar16 + (long)ppppuVar12 * 0x7d);
    }
    func_0x00010b1ed7dc();
    FUN_10b1cc598();
  }
LAB_10b1cc02c:
  func_0x00010b1eadc4();
  if ((bool)uVar8) {
    return (ulong ****)(ulong)bVar27;
  }
  ___stack_chk_fail();
LAB_10b1cc078:
  func_0x000104bd35f4();
LAB_10b1cc094:
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x10b1cc098);
  (*pcVar21)();
}



/* Entry: 10b1ca170; end: 10b1ca2c3;  */

/* WARNING: Removing unreachable block (ram,0x00010b1ca878) */

ulong **** FUN_10b1ca170(ulong ****param_1,ulong *****param_2,undefined1 *param_3,uint param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong *****pppppuVar14;
  ulong *****pppppuVar15;
  ulong *****pppppuVar16;
  ulong *****pppppuVar17;
  uint uVar18;
  undefined1 extraout_w8;
  char extraout_w8_00;
  undefined1 extraout_w8_01;
  char extraout_w8_02;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  ulong *****pppppuVar19;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  ulong *****extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  undefined8 *****extraout_x8_10;
  undefined8 *****pppppuVar20;
  ulong extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  ulong ****extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  undefined8 extraout_x9;
  ulong extraout_x9_00;
  int *piVar21;
  ulong extraout_x9_01;
  undefined8 *****extraout_x9_02;
  ulong extraout_x9_03;
  ulong *****pppppuVar22;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  ulong ****ppppuVar23;
  ulong extraout_x11;
  ulong *****extraout_x12;
  byte bVar24;
  int iVar25;
  ulong ****unaff_x19;
  ulong ***pppuVar26;
  long lVar27;
  long lVar28;
  undefined8 *****pppppuVar29;
  ulong *****pppppuVar30;
  undefined4 *puVar31;
  ulong uVar32;
  undefined8 uVar33;
  undefined8 ****ppppuVar34;
  ulong *****unaff_x26;
  undefined8 *****pppppuVar35;
  undefined8 *****pppppuVar36;
  ulong ****ppppuVar37;
  ulong *****pppppuVar38;
  undefined8 uVar39;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000038;
  undefined **in_stack_00000040;
  undefined8 *in_stack_00000048;
  code *in_stack_00000068;
  undefined **in_stack_00000070;
  undefined8 *in_stack_00000078;
  code *in_stack_00000098;
  undefined **in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined1 uStack00000000000000b8;
  undefined1 uStack00000000000000b9;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  ulong uStack_980;
  undefined1 auStack_960 [32];
  ulong ****ppppuStack_940;
  ulong ****ppppuStack_938;
  ulong ****ppppuStack_930;
  char cStack_928;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined4 uStack_8e0;
  undefined8 ****ppppuStack_8d8;
  undefined1 uStack_8d0;
  ulong uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_888;
  ulong ****ppppuStack_880;
  undefined1 auStack_878 [24];
  char cStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  char cStack_848;
  undefined8 ****ppppuStack_840;
  undefined8 ****ppppuStack_838;
  undefined8 ****ppppuStack_830;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  ulong ***apppuStack_7e0 [8];
  ulong ****ppppuStack_7a0;
  undefined1 uStack_798;
  undefined1 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined1 uStack_768;
  undefined1 auStack_760 [64];
  long alStack_720 [7];
  byte bStack_6e8;
  long lStack_6e0;
  undefined8 ***pppuStack_6d8;
  undefined8 ***pppuStack_6d0;
  undefined8 ***pppuStack_6c8;
  char cStack_6c0;
  undefined8 ***pppuStack_6b8;
  undefined8 ***pppuStack_6b0;
  byte bStack_6a8;
  ulong ***apppuStack_6a0 [3];
  undefined1 auStack_688 [24];
  ulong ****ppppuStack_670;
  ulong ****ppppuStack_668;
  ulong ****ppppuStack_660;
  long lStack_658;
  undefined4 uStack_650;
  undefined1 auStack_618 [8];
  undefined8 uStack_610;
  undefined8 auStack_608 [3];
  char cStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  char cStack_5d8;
  undefined8 ****ppppuStack_5d0;
  undefined8 ****ppppuStack_5c8;
  undefined8 ****ppppuStack_5c0;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 auStack_568 [64];
  undefined8 uStack_528;
  undefined1 uStack_520;
  undefined1 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 uStack_4f0;
  undefined1 auStack_4e8 [64];
  long alStack_4a8 [7];
  byte bStack_470;
  long lStack_468;
  undefined8 ***pppuStack_460;
  undefined8 ***pppuStack_458;
  undefined8 ***pppuStack_450;
  char cStack_448;
  undefined8 ***pppuStack_440;
  undefined8 ***pppuStack_438;
  byte bStack_430;
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [16];
  undefined1 uStack_3e8;
  ulong ****ppppuStack_3e0;
  ulong ****ppppuStack_3d8;
  ulong ****ppppuStack_3d0;
  char cStack_3c8;
  ulong ****ppppuStack_3c0;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined8 uStack_3b0;
  char cStack_3a8;
  undefined1 uStack_3a1;
  byte bStack_398;
  ulong ***pppuStack_370;
  ulong ***pppuStack_368;
  ulong ****ppppuStack_360;
  ulong ****ppppuStack_358;
  ulong ****ppppuStack_350;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  ulong ****ppppuStack_2f8;
  ulong ****ppppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 ****ppppuStack_2b0;
  ulong ***pppuStack_2a8;
  undefined1 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined1 uStack_270;
  ulong ****ppppuStack_268;
  ulong ****ppppuStack_260;
  ulong ****appppuStack_258 [7];
  undefined8 ****ppppuStack_220;
  undefined1 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  byte bStack_1e0;
  undefined8 ****ppppuStack_1d8;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong ***pppuStack_1b0;
  ulong ***pppuStack_1a8;
  undefined1 uStack_1a0;
  byte bStack_198;
  ulong ****ppppuStack_190;
  undefined1 uStack_188;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  ulong ****ppppuStack_150;
  ulong ****ppppuStack_148;
  ulong ****ppppuStack_140;
  ulong ****ppppuStack_138;
  ulong uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [40];
  int iStack_f0;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined1 uStack_c8;
  char cStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  char cStack_98;
  undefined1 auStack_68 [24];
  ulong **appuStack_50 [2];
  ulong ***apppuStack_40 [3];
  undefined8 uStack_28;
  
  func_0x00010b1eae28();
  uVar8 = *(code *)(param_1 + 0xc6) == (code)0x1;
  uStack_28 = extraout_x8_00;
  if ((bool)uVar8) {
    func_0x00010b1ee12c(unaff_x19 + 0xbe);
    if ((bool)uVar8) {
      pppuVar26 = unaff_x19[0x47];
      if (pppuVar26 != (ulong ***)0x0) {
        func_0x00010b1ec190();
        func_0x00010b1ed7d0();
        func_0x00010b1eb654();
        param_3 = auStack_68;
        param_2 = (ulong *****)0xda;
        func_0x00010b1eb5b4(pppuVar26,0xda,param_3);
LAB_10b1ca1c4:
        func_0x00010b1eb750();
        param_1 = apppuStack_40;
LAB_10b1ca1d0:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1);
      }
    }
    else {
      func_0x00010b1ee330();
      if (!(bool)uVar8) goto LAB_10b1ca240;
      func_0x00010b1ebbd4(*(undefined1 *)((long)param_2 + 0x17));
      if (extraout_x8_01 != 0) {
        param_1 = unaff_x19;
        func_0x00010b1ede4c();
        func_0x00010b1ee12c(unaff_x19 + 0xbe);
        if (!(bool)uVar8) {
          func_0x00010b1ecb18();
          func_0x000107c278b8(appuStack_50);
          func_0x00010b1ecf68();
          func_0x00010b1ede4c();
          param_1 = (ulong ****)appuStack_50;
          goto LAB_10b1ca1d0;
        }
        pppuVar26 = unaff_x19[0x47];
        if (pppuVar26 != (ulong ***)0x0) {
          func_0x00010b1ec190();
          func_0x00010b1ed7d0();
          func_0x00010b1eb654();
          param_3 = auStack_68;
          param_2 = (ulong *****)0xda;
          func_0x00010b1eb5b4(pppuVar26,0xda,param_3);
          goto LAB_10b1ca1c4;
        }
      }
    }
    func_0x00010b1eaddc(uStack_28);
    if ((bool)uVar8) {
      return param_1;
    }
  }
  else {
LAB_10b1ca240:
    func_0x00010b1eaddc(uStack_28);
    if ((bool)uVar8) {
      iVar25 = 0;
      uVar18 = 1;
      func_0x00010b1ee61c();
      func_0x00010b1eae28();
      in_stack_000000f8 = extraout_x8;
      func_0x00010b1ebb5c(&stack0x00000010);
      lVar27 = in_stack_00000020;
      func_0x00010b1ec1f4(in_stack_00000020);
      puVar13 = &stack0x000000a0;
      in_stack_00000098 = (code *)unaff_x19;
      func_0x00010b1ec1fc();
      _uStack00000000000000b8 = CONCAT11((char)uVar18,(char)iVar25);
      in_stack_00000068 = FUN_10b1e7218;
      in_stack_00000070 = &PTR_FUN_110cc45a0;
      func_0x00010b1ec004();
      *puVar13 = in_stack_00000098;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar13 + 1,&stack0x000000a0);
      *(undefined2 *)(puVar13 + 4) = _uStack00000000000000b8;
      in_stack_00000078 = puVar13;
      FUN_10b1c9ef8(&stack0x00000030,lVar27 + 0x80,&stack0x00000068);
      func_0x00010b1eb338(in_stack_00000070);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x000000a0);
      func_0x00010b1ebf84();
      uVar12 = 0;
      func_0x000108820c58();
      if ((((uVar18 | uVar12) & 1) == 0) && (func_0x00010b1ee330(), (bool)uVar8)) {
        FUN_10b1b8c14(&stack0x00000010,unaff_x19 + 0x54);
        lVar27 = in_stack_00000020;
        func_0x00010b1ec1f4(in_stack_00000020);
        puVar13 = &stack0x000000a0;
        in_stack_00000098 = (code *)unaff_x19;
        func_0x00010b1ec1fc();
        _uStack00000000000000b8 = CONCAT11(uStack00000000000000b9,(char)iVar25);
        in_stack_00000038 = 0x10b1e7260;
        in_stack_00000040 = &PTR_FUN_110cc45b8;
        func_0x00010b1ec004();
        *puVar13 = in_stack_00000098;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (puVar13 + 1,&stack0x000000a0);
        *(undefined1 *)(puVar13 + 4) = uStack00000000000000b8;
        in_stack_00000048 = puVar13;
        FUN_10b1c9ef8(&stack0x00000008,lVar27 + 0x90,&stack0x00000038);
        func_0x00010b1ebb00(in_stack_00000040);
        func_0x00010b1ec35c();
        func_0x00010b1ebf84();
        __ZNSt3__117__assoc_sub_state4waitEv(in_stack_00000008);
        func_0x000107c29bd8(&stack0x00000008);
      }
      if ((iVar25 != 0) && (func_0x00010b1ee330(), (bool)uVar8)) {
        func_0x00010b1ecd44(&stack0x00000010);
        in_stack_00000098 = (code *)0x10b1e72a8;
        in_stack_000000a0 = &PTR_DAT_110cc45d0;
        in_stack_000000b0 = in_stack_00000018;
        in_stack_000000a8 = in_stack_00000010;
        in_stack_00000010 = 0;
        in_stack_00000018 = 0;
        func_0x00010b1ebe1c();
        func_0x00010b1ebbe0();
        func_0x00010b1eafb4(in_stack_000000a0);
        func_0x00010b1ebf7c();
      }
      ppppuVar37 = (ulong ****)&stack0x00000030;
      func_0x000107c29bd8(ppppuVar37);
      func_0x00010b1eaddc(in_stack_000000f8);
      if (!(bool)uVar8) {
        ___stack_chk_fail();
        func_0x00010b1eb668();
        func_0x000107c29bd8();
        func_0x000107c29bd8(&stack0x00000030);
        do {
          func_0x00010b1eb590();
        } while( true );
      }
      func_0x00010b1ee600();
      return ppppuVar37;
    }
  }
  ___stack_chk_fail();
  func_0x00010b1eb230();
  pppppuVar14 = (ulong *****)apppuStack_40;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b1eb590();
  func_0x00010b1ec024();
  uStack_980 = CONCAT44(uStack_980._4_4_,param_4);
  pppppuVar29 = &ppppuStack_8d8;
  pppppuVar15 = pppppuVar14;
  pppppuVar30 = param_2;
  func_0x00010b1eae84();
  __ZNSt3__16chrono12system_clock3nowEv();
  uVar8 = *(char *)(pppppuVar14 + 0xc6) == '\x01';
  if ((bool)uVar8) {
    lStack_338 = 0;
    lStack_340 = 0;
    uStack_330 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_618,param_2);
    FUN_10b1f4818(&ppppuStack_e0,pppppuVar14 + 0xbb,auStack_618,param_3,param_4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_618);
    uStack_3b8 = 0;
    bStack_398 = 0;
    ppppuStack_3c0 = (ulong ****)&ppppuStack_e0;
    FUN_10b1e77b0(&ppppuStack_3c0);
    bVar10 = false;
    pppppuVar30 = pppppuVar14;
    pppppuVar22 = param_2;
LAB_10b1ca374:
    if ((bStack_398 & 1) != 0) {
      pppppuVar16 = pppppuVar30;
      FUN_10b1cd5c8(pppppuVar30,pppppuVar22[1],*(undefined1 *)((long)pppppuVar22 + 0x17),uStack_3b0,
                    uStack_3a1,3);
      if (((ulong)pppppuVar16 & 1) == 0) goto LAB_10b1ca3dc;
      func_0x00010b1ed7dc(&ppppuStack_8d8);
      func_0x00010b1eb674();
      if (((uStack_8c8 == 0) || (uVar32 = uStack_8c8, func_0x00010b1ecd0c(), !(bool)uVar8)) ||
         (uVar8 = *(long *)(uVar32 + 0x38) == 0, 0 < *(long *)(uVar32 + 0x38))) goto LAB_10b1ca3d8;
      if (*(char *)((long)pppppuVar30 + 0x296) == '\x01') {
        ppppuStack_1d8 = ppppuStack_8d8;
        uStack_1d0 = uStack_8d0;
        ppppuStack_8d8 = (undefined8 *****)0x0;
        uStack_8d0 = 0;
        uStack_1b8 = uStack_8b8;
        uStack_1c0 = uStack_8c0;
        uStack_8c0 = 0;
        uStack_8b8 = 0;
        uStack_1c8 = uVar32;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&ppppuStack_2b0);
        uVar32 = uStack_1c8;
        pppppuVar22 = &ppppuStack_150;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (pppppuVar22,&ppppuStack_2b0);
        ppppuStack_138 = *(ulong *****)(uVar32 + 0x60);
        ppppuStack_668 = (ulong ****)0x0;
        ppppuStack_670 = (ulong ****)0x0;
        lStack_658 = 0;
        ppppuStack_660 = (ulong ****)0x0;
        uStack_650 = 0x3f800000;
        for (lVar27 = 0; uVar8 = lVar27 + -0x20 < 0, lVar27 != 0x20; lVar27 = lVar27 + 0x20) {
          func_0x00010b1ed9d4(&ppppuStack_670);
          pppppuVar38 = (ulong *****)ppppuStack_668;
          pppppuVar16 = pppppuVar22;
          if ((ulong *****)ppppuStack_668 != (ulong *****)0x0) {
            uVar32 = (long)ppppuStack_668 - 1;
            if (((ulong)ppppuStack_668 & uVar32) == 0) {
              unaff_x26 = (ulong *****)(uVar32 & (ulong)pppppuVar22);
              uVar8 = false;
            }
            else {
              uVar8 = (long)pppppuVar22 - (long)ppppuStack_668 < 0;
              unaff_x26 = pppppuVar22;
              if (ppppuStack_668 <= pppppuVar22) {
                uVar4 = 0;
                if ((ulong *****)ppppuStack_668 != (ulong *****)0x0) {
                  uVar4 = (ulong)pppppuVar22 / (ulong)ppppuStack_668;
                }
                unaff_x26 = (ulong *****)((long)pppppuVar22 - uVar4 * (long)ppppuStack_668);
              }
            }
            ppppuVar37 = (ulong ****)ppppuStack_670[(long)unaff_x26];
            if (ppppuVar37 != (ulong ****)0x0) {
              do {
                while( true ) {
                  ppppuVar37 = (ulong ****)*ppppuVar37;
                  if (ppppuVar37 == (ulong ****)0x0) goto LAB_10b1ca4fc;
                  pppppuVar19 = (ulong *****)ppppuVar37[1];
                  uVar8 = (long)pppppuVar19 - (long)pppppuVar22 < 0;
                  if (pppppuVar19 != pppppuVar22) break;
                  pppppuVar16 = (ulong *****)(ppppuVar37 + 2);
                  func_0x00010b1ebe54();
                  if (((ulong)pppppuVar16 & 1) != 0) goto LAB_10b1ca614;
                }
                if (((ulong)pppppuVar38 & uVar32) == 0) {
                  pppppuVar19 = (ulong *****)((ulong)pppppuVar19 & uVar32);
                }
                else if (pppppuVar38 <= pppppuVar19) {
                  uVar4 = 0;
                  if (pppppuVar38 != (ulong *****)0x0) {
                    uVar4 = (ulong)pppppuVar19 / (ulong)pppppuVar38;
                  }
                  pppppuVar19 = (ulong *****)((long)pppppuVar19 - uVar4 * (long)pppppuVar38);
                }
                uVar8 = (long)pppppuVar19 - (long)unaff_x26 < 0;
              } while (pppppuVar19 == unaff_x26);
            }
          }
LAB_10b1ca4fc:
          func_0x00010b1ec5d4();
          appppuStack_258[0] = (ulong ****)0x0;
          *pppppuVar16 = (ulong ****)0x0;
          pppppuVar16[1] = (ulong ****)pppppuVar22;
          ppppuStack_268 = (ulong ****)pppppuVar16;
          ppppuStack_260 = (ulong ****)&ppppuStack_660;
          func_0x00010b1eca94(pppppuVar16 + 2);
          pppppuVar16[5] = *(ulong *****)((long)&ppppuStack_138 + lVar27);
          appppuStack_258[0] = (ulong ****)CONCAT71(appppuStack_258[0]._1_7_,1);
          func_0x00010b1ebbc8(lStack_658);
          if ((pppppuVar38 == (ulong *****)0x0) || (func_0x00010b1ebbbc(), (bool)uVar8)) {
            func_0x00010b1ee148();
            bVar7 = (ulong *****)0x2 < pppppuVar38;
            bVar9 = pppppuVar38 == (ulong *****)0x3;
            func_0x00010b1eaeec();
            uVar33 = extraout_x8_02;
            if (!bVar7 || bVar9) {
              uVar33 = extraout_x9;
            }
            FUN_10b1b7c48(&ppppuStack_670,uVar33);
            pppppuVar38 = (ulong *****)ppppuStack_668;
            if (((ulong)ppppuStack_668 & (ulong)((long)ppppuStack_668 + -1)) == 0) {
              unaff_x26 = (ulong *****)((ulong)((long)ppppuStack_668 + -1) & (ulong)pppppuVar22);
            }
            else {
              unaff_x26 = pppppuVar22;
              if (ppppuStack_668 <= pppppuVar22) {
                uVar32 = 0;
                if ((ulong *****)ppppuStack_668 != (ulong *****)0x0) {
                  uVar32 = (ulong)pppppuVar22 / (ulong)ppppuStack_668;
                }
                unaff_x26 = (ulong *****)((long)pppppuVar22 - uVar32 * (long)ppppuStack_668);
              }
            }
          }
          ppppuVar37 = (ulong ****)ppppuStack_670[(long)unaff_x26];
          if (ppppuVar37 == (ulong ****)0x0) {
            *ppppuStack_268 = (ulong ***)ppppuStack_660;
            ppppuStack_660 = ppppuStack_268;
            ppppuStack_670[(long)unaff_x26] = (ulong ***)&ppppuStack_660;
            if ((ulong ****)*ppppuStack_268 != (ulong ****)0x0) {
              pppppuVar22 = (ulong *****)(*ppppuStack_268)[1];
              if (((ulong)pppppuVar38 & (long)pppppuVar38 - 1U) == 0) {
                pppppuVar22 = (ulong *****)((ulong)pppppuVar22 & (long)pppppuVar38 - 1U);
              }
              else if (pppppuVar38 <= pppppuVar22) {
                uVar32 = 0;
                if (pppppuVar38 != (ulong *****)0x0) {
                  uVar32 = (ulong)pppppuVar22 / (ulong)pppppuVar38;
                }
                pppppuVar22 = (ulong *****)((long)pppppuVar22 - uVar32 * (long)pppppuVar38);
              }
              ppppuStack_670[(long)pppppuVar22] = (ulong ***)ppppuStack_268;
            }
          }
          else {
            *ppppuStack_268 = *ppppuVar37;
            *ppppuVar37 = (ulong ***)ppppuStack_268;
          }
          ppppuStack_268 = (ulong ****)0x0;
          lStack_658 = lStack_658 + 1;
          pppppuVar16 = &ppppuStack_268;
          FUN_10b1b7e40();
LAB_10b1ca614:
          pppppuVar22 = pppppuVar16;
        }
        pppppuVar22 = &ppppuStack_150;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        ppppuStack_260 = (ulong ****)0x0;
        ppppuStack_268 = (ulong ****)0x0;
        appppuStack_258[0] = (ulong ****)0x0;
        lVar27 = *(long *)(uStack_1c8 + 0x50) - *(long *)(uStack_1c8 + 0x48);
        if (lVar27 != 0) {
          uVar32 = lVar27 / 0x88;
          if (uVar32 >> 0x3b != 0) {
            FUN_10b1d8b08();
            goto LAB_10b1cc094;
          }
          lVar27 = 0;
          FUN_10b1d8b14(&ppppuStack_150,uVar32,0,appppuStack_258);
          func_0x00010b1ee2c4();
          pppppuVar22 = (ulong *****)(extraout_x8_03 - lVar27);
          _memcpy();
          ppppuVar37 = ppppuStack_268;
          appppuStack_258[0] = ppppuStack_138;
          ppppuStack_260 = ppppuStack_140;
          ppppuStack_268 = (ulong ****)(extraout_x8_03 - lVar27);
          func_0x00010b1ec444(ppppuVar37);
        }
        FUN_10b2029a0();
        pppppuVar16 = pppppuVar22;
        __ZNSt3__16chrono12system_clock3nowEv();
        ppppuStack_2f0 = (ulong ****)0x0;
        ppppuStack_2f8 = (ulong ****)0x0;
        uStack_2e8 = 0;
        piVar2 = *(int **)(uStack_1c8 + 0x50);
        for (piVar21 = *(int **)(uStack_1c8 + 0x48); piVar21 != piVar2; piVar21 = piVar21 + 0x22) {
          pppppuVar30 = pppppuVar22;
          FUN_10b20345c(pppppuVar22,*piVar21,piVar21[0xe]);
          iVar25 = *piVar21;
          unaff_x26 = *(ulong ******)(piVar21 + 10);
          ppppuVar37 = *(ulong *****)(piVar21 + 0x10);
          if (ppppuStack_260 < appppuStack_258[0]) {
            *(int *)ppppuStack_260 = iVar25;
            ppppuStack_260[1] = (ulong ***)pppppuVar30;
            ppppuStack_260[2] = (ulong ***)unaff_x26;
            pppppuVar38 = (ulong *****)(ppppuStack_260 + 4);
            ppppuStack_260[3] = (ulong ***)ppppuVar37;
          }
          else {
            lVar27 = (long)ppppuStack_260 - (long)ppppuStack_268 >> 5;
            if (lVar27 + 1U >> 0x3b != 0) {
              FUN_10b1d8b08();
              goto LAB_10b1cc094;
            }
            func_0x00010b1ec290();
            uVar33 = extraout_x8_04;
            if (0x7fffffffffffffdf < extraout_x9_00) {
              uVar33 = 0x7ffffffffffffff;
            }
            FUN_10b1d8b14(&ppppuStack_150,uVar33);
            *(int *)ppppuStack_140 = iVar25;
            ppppuStack_140[1] = (ulong ***)pppppuVar30;
            ppppuStack_140[2] = (ulong ***)unaff_x26;
            ppppuStack_140[3] = (ulong ***)ppppuVar37;
            pppppuVar38 = (ulong *****)(ppppuStack_140 + 4);
            func_0x00010b1ee2c4();
            unaff_x26 = (ulong *****)(extraout_x8_05 - lVar27);
            _memcpy(unaff_x26);
            ppppuVar37 = ppppuStack_268;
            appppuStack_258[0] = ppppuStack_138;
            ppppuStack_268 = (ulong ****)unaff_x26;
            ppppuStack_260 = (ulong ****)pppppuVar38;
            func_0x00010b1ec444(ppppuVar37);
          }
          ppppuStack_260 = (ulong ****)pppppuVar38;
          if (*(long *)(piVar21 + 0xc) == 0) {
            lVar27 = *(long *)(piVar21 + 10);
            FUN_10b1cd230(lVar27,*(undefined8 *)(piVar21 + 0x10),*(undefined8 *)(uStack_1c8 + 0x60),
                          pppppuVar30);
            if (0 < lVar27 && lVar27 < (long)pppppuVar16) {
              FUN_10b1d8bac(&ppppuStack_2f8,piVar21);
            }
          }
          pppppuVar30 = pppppuVar14;
        }
        lVar27 = (long)ppppuStack_260 - (long)ppppuStack_268;
        for (pppppuVar22 = (ulong *****)ppppuStack_268; lVar27 = lVar27 + -0x20,
            pppppuVar38 = (ulong *****)ppppuStack_2f8, pppppuVar22 != (ulong *****)ppppuStack_260;
            pppppuVar22 = pppppuVar22 + 4) {
          pppppuVar19 = (ulong *****)ppppuStack_260;
          if ((pppppuVar22[1] == (ulong ****)0x0) || (*(int *)((long)pppppuVar22[1] + 0x4c) < 1))
          goto LAB_10b1caa78;
        }
        goto LAB_10b1cad9c;
      }
      ppppuStack_668 = (ulong ****)0x0;
      ppppuStack_670 = (ulong ****)0x0;
      ppppuStack_660 = (ulong ****)0x0;
      ppppuStack_260 = (ulong ****)0x0;
      ppppuStack_268 = (ulong ****)0x0;
      appppuStack_258[0] = (ulong ****)0x0;
      puVar1 = *(undefined4 **)(uVar32 + 0x50);
      for (puVar31 = *(undefined4 **)(uVar32 + 0x48); puVar31 != puVar1; puVar31 = puVar31 + 0x22) {
        pppppuVar38 = pppppuVar16;
        if (*(long *)(puVar31 + 0xc) < 1) {
          FUN_10b2029a0();
          FUN_10b20345c();
          pppppuVar38 = *(ulong ******)(puVar31 + 10);
          FUN_10b1cd230(pppppuVar38,*(undefined8 *)(puVar31 + 0x10),
                        *(undefined8 *)(uStack_8c8 + 0x60),pppppuVar16);
          if (0 < (long)pppppuVar38 && (long)pppppuVar38 < (long)pppppuVar15) {
            *(ulong ******)(puVar31 + 0xc) = pppppuVar15;
            FUN_10b1d8bac(&ppppuStack_670,puVar31);
            pppppuVar38 = &ppppuStack_268;
            FUN_10b1d75ec(pppppuVar38,*puVar31);
          }
        }
        pppppuVar16 = pppppuVar38;
      }
      FUN_10b1cd2ac(pppppuVar30[0x47],uStack_8c8,&ppppuStack_670);
      if (*(char *)((long)pppppuVar30 + 0x295) == '\x01') {
        lVar27 = 0;
        lVar28 = 0;
        pppppuVar16 = (ulong *****)ppppuStack_668;
LAB_10b1ca6d4:
        if (lVar27 != 0xc) {
          iVar25 = *(int *)(&UNK_10e564630 + lVar27);
          ppppuVar37 = *(ulong *****)(uStack_8c8 + 0x48);
          while( true ) {
            if (ppppuVar37 == *(ulong *****)(uStack_8c8 + 0x50)) goto LAB_10b1ca80c;
            if (*(int *)ppppuVar37 == iVar25) break;
            ppppuVar37 = ppppuVar37 + 0x11;
          }
          pppppuVar38 = (ulong *****)0x0;
          for (pppppuVar22 = (ulong *****)ppppuStack_670; pppppuVar22 != pppppuVar16;
              pppppuVar22 = pppppuVar22 + 1) {
            ppppuVar23 = *pppppuVar22;
            if (ppppuVar37 != ppppuVar23 && *(int *)ppppuVar23 == iVar25) {
              ppppuVar23[6] = (ulong ***)0x0;
              pppppuVar38 = (ulong *****)((long)pppppuVar38 + 1);
            }
          }
          pppppuVar19 = (ulong *****)ppppuStack_670;
          pppppuVar22 = param_2;
          if (pppppuVar38 != (ulong *****)0x0) {
            for (; uVar8 = pppppuVar19 == pppppuVar16, !(bool)uVar8; pppppuVar19 = pppppuVar19 + 1)
            {
              pppppuVar22 = pppppuVar19;
              if ((*pppppuVar19)[6] == (ulong ***)0x0) goto LAB_10b1ca774;
            }
            goto LAB_10b1ca79c;
          }
          goto LAB_10b1ca80c;
        }
        ppppuStack_668 = (ulong ****)pppppuVar16;
        if (lVar28 != 0) {
          ppppuStack_148 = (ulong ****)0x0;
          ppppuStack_150 = (ulong ****)0x0;
          ppppuStack_140 = (ulong ****)0x0;
          FUN_10b114b00(pppppuVar30[0x47],0xdc,&ppppuStack_150,*(undefined8 *)(uStack_8c8 + 0x28));
          FUN_10b120998(&ppppuStack_150);
        }
      }
      pppppuVar16 = *(ulong ******)(uStack_8c8 + 0x48);
      unaff_x26 = *(ulong ******)(uStack_8c8 + 0x50);
      pppppuVar38 = pppppuVar16;
      FUN_10b1bf2b0(pppppuVar16,unaff_x26);
      ppppuVar37 = ppppuStack_260;
      pppppuVar19 = (ulong *****)ppppuStack_268;
      if (pppppuVar38 == (ulong *****)0x0) {
        for (; uVar8 = pppppuVar16 == unaff_x26, !(bool)uVar8; pppppuVar16 = pppppuVar16 + 0x11) {
          if (0 < (long)pppppuVar16[6]) {
            func_0x00010b1ed7dc();
            FUN_10b1be404();
          }
        }
        if ((param_4 == 0) || (((ulong)pppppuVar30[0xbe] & 1) == 0)) {
          if ((*(long *)(uStack_8c8 + 0x170) == 0) ||
             (uVar8 = true, *(long *)(*(long *)(uStack_8c8 + 0x170) + 8) == -1)) {
            ppppuStack_220 = ppppuStack_8d8;
            uStack_218 = uStack_8d0;
            ppppuStack_8d8 = (undefined8 *****)0x0;
            uStack_8d0 = 0;
            uStack_210 = uStack_8c8;
            uStack_200 = uStack_8b8;
            uStack_208 = uStack_8c0;
            uStack_8c0 = 0;
            uStack_8b8 = 0;
            func_0x00010b1ed7dc(&ppppuStack_150);
            func_0x00010b1ebe44();
            func_0x00010b1d3e60(&ppppuStack_220);
            func_0x00010b1ee270();
            if ((bool)uVar8) {
              func_0x00010b1ece38(&lStack_340);
            }
            func_0x00010b1ebf30();
            iVar25 = 0;
          }
          else {
            iVar25 = 3;
          }
        }
        else {
          bVar10 = true;
          iVar25 = 2;
        }
      }
      else {
        for (; ppppuVar23 = ppppuStack_668, uVar8 = pppppuVar19 == (ulong *****)ppppuVar37,
            pppppuVar16 = (ulong *****)ppppuStack_670, !(bool)uVar8;
            pppppuVar19 = (ulong *****)((long)pppppuVar19 + 4)) {
          ppppuVar23 = pppppuVar30[0x47];
          FUN_10b12983c(&ppppuStack_150,*(int *)pppppuVar19);
          func_0x00010b20b440(*(int *)pppppuVar38);
          func_0x00010b1ec990(auStack_128,"other");
          func_0x00010b1eb930(&ppppuStack_2b0,&ppppuStack_150);
          func_0x00010b1eb5b4(ppppuVar23,0xb8,&ppppuStack_2b0);
          func_0x00010b1ece9c();
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
            func_0x00010b1ee484();
          } while (!(bool)uVar8);
          pppppuVar30 = pppppuVar14;
        }
        for (; pppppuVar16 != (ulong *****)ppppuVar23; pppppuVar16 = pppppuVar16 + 1) {
          if (*(char *)((long)pppppuVar30 + 0x294) == '\x01') {
            for (piVar21 = *(int **)(uStack_8c8 + 0x48); piVar21 != *(int **)(uStack_8c8 + 0x50);
                piVar21 = piVar21 + 0x22) {
              if ((*(long *)(piVar21 + 0xc) == 0) && (*piVar21 == *(int *)*pppppuVar16))
              goto LAB_10b1cabc4;
            }
          }
          func_0x00010b1ed7dc();
          FUN_10b1be404();
LAB_10b1cabc4:
        }
        if ((param_4 == 0) || (((ulong)pppppuVar30[0xbe] & 1) == 0)) {
          iVar25 = 3;
        }
        else {
          bVar10 = true;
          iVar25 = 2;
        }
      }
      func_0x00010b1b399c(&ppppuStack_268);
      FUN_10b1d8c5c(&ppppuStack_670);
      func_0x00010b1eca08();
      uVar8 = iVar25 == 3;
      if (((bool)uVar8) || (iVar25 == 0)) goto LAB_10b1ca3dc;
    }
    goto LAB_10b1cbf54;
  }
  if ((long)pppppuVar14[0x51] < 1) {
LAB_10b1caedc:
    pppppuVar16 = pppppuVar15;
    FUN_10b2029a0();
    uStack_8f8 = 0;
    uStack_900 = 0;
    uStack_8e8 = 0;
    uStack_8f0 = 0;
    uStack_8e0 = 0x3f800000;
    pppppuVar22 = pppppuVar16 + 0xc;
    FUN_10b1e72c8();
    ppppuStack_150 = (ulong ****)pppppuVar22;
    ppppuStack_148 = (ulong ****)pppppuVar30;
    iVar25 = 0x7fffffff;
    while (iVar5 = iVar25, (ulong *****)ppppuStack_150 != (ulong *****)0x0) {
      iVar3 = *(int *)(ppppuStack_148 + 7);
      FUN_10b1e734c(&ppppuStack_150);
      iVar25 = iVar3;
      if (iVar5 <= iVar3) {
        iVar25 = iVar5;
      }
      if (iVar3 < 1) {
        iVar25 = iVar5;
      }
    }
    uVar8 = iVar5 == 0x7fffffff;
    if (!(bool)uVar8) {
      func_0x00010b1edaa4(&ppppuStack_670);
      ppppuStack_1d8 = (undefined8 ****)((ulong)ppppuStack_1d8 & 0xffffffffffffff00);
      uStack_1c8 = uStack_1c8 & 0xffffffffffffff00;
      func_0x00010b1edc80(&ppppuStack_8d8);
      pppppuVar30 = (ulong *****)ppppuStack_8d8[1];
      ppppuStack_260 = (ulong ****)ppppuStack_8d8[2];
      ppppuStack_268 = (ulong ****)pppppuVar30;
      if ((ulong *****)ppppuStack_260 != (ulong *****)0x0) {
        do {
          func_0x00010b1eaf98();
          pppppuVar30 = extraout_x8_06;
        } while (extraout_w11 != 0);
      }
      FUN_10b1fafd0(&uStack_888,pppppuVar30[2],&ppppuStack_670);
      uStack_798 = 0;
      uStack_768 = 0;
      if (cStack_848 != '\0') {
        uStack_780 = 0;
        uVar8 = cStack_860 == '\x01';
        if ((bool)uVar8) {
          func_0x00010b1ecb3c();
          uStack_780 = extraout_w8;
        }
        uStack_770 = uStack_850;
        uStack_778 = uStack_858;
        uStack_768 = 1;
        FUN_10b1d7db0(auStack_878);
      }
      ppppuStack_7a0 = ppppuStack_880;
      ppppuStack_880 = (ulong ****)0x0;
      FUN_10b1d7d18(auStack_760,&ppppuStack_7a0);
      uStack_7f8 = 0;
      uStack_800 = 0;
      uStack_7e8 = 0;
      uStack_7f0 = 0;
      uStack_818 = 0;
      uStack_820 = 0;
      uStack_808 = 0;
      uStack_810 = 0;
      FUN_10b1d7d18(apppuStack_7e0,&uStack_820);
      ppppuStack_838 = (undefined8 *****)0x0;
      ppppuStack_830 = (undefined8 *****)0x0;
      ppppuStack_840 = (undefined8 *****)0x0;
      FUN_10b1d7f2c(&lStack_6e0,auStack_760);
      pppppuVar30 = (ulong *****)apppuStack_7e0;
      FUN_10b1d7f2c(alStack_720);
      ppppuStack_220 = &ppppuStack_840;
      uStack_218 = 0;
      pppppuVar29 = (undefined8 *****)0x1;
      while ((((bStack_6a8 & 1) != 0 || ((bStack_6e8 & 1) != 0)) &&
             (uVar8 = 1, lStack_6e0 != alStack_720[0]))) {
        if ((bStack_6a8 & 1) == 0) {
          uVar33 = *(undefined8 *)(lStack_6e0 + 8);
          func_0x00010b1eb9a4(apppuStack_6a0);
          pppppuVar30 = (ulong *****)apppuStack_6a0;
          func_0x000107c27f54(auStack_688,&UNK_10f2e0451);
          func_0x00010b1eb99c(uVar33);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_688);
          func_0x00010b1eda74();
        }
        ppppuVar34 = ppppuStack_838;
        pppppuVar20 = (undefined8 *****)ppppuStack_840;
        if (ppppuStack_838 < ppppuStack_830) {
          *(undefined1 *)ppppuStack_838 = 0;
          *(undefined1 *)(ppppuStack_838 + 3) = 0;
          uVar8 = cStack_6c0 == '\x01';
          if ((bool)uVar8) {
            ppppuStack_838[2] = pppuStack_6c8;
            ppppuStack_838[1] = pppuStack_6d0;
            *ppppuStack_838 = pppuStack_6d8;
            func_0x00010b1ee1ec();
            *(undefined1 *)(ppppuVar34 + 3) = 1;
          }
          ppppuVar34[5] = pppuStack_6b0;
          ppppuVar34[4] = pppuStack_6b8;
          pppppuVar20 = (undefined8 *****)(ppppuVar34 + 6);
        }
        else {
          lVar27 = (long)ppppuStack_838 - (long)ppppuStack_840;
          if (0x555555555555555 < lVar27 / 0x30 + 1U) {
            FUN_10b1d7df0();
            goto LAB_10b1cc094;
          }
          func_0x00010b1eb414(((long)ppppuStack_830 - (long)ppppuStack_840) / 0x30);
          uVar32 = extraout_x9_01;
          if (0x2aaaaaaaaaaaaa9 < extraout_x8_07) {
            uVar32 = extraout_x11;
          }
          if (uVar32 == 0) {
            lVar28 = 0;
          }
          else {
            if (extraout_x11 < uVar32) goto LAB_10b1cc078;
            lVar28 = uVar32 * 0x30;
            __Znwm();
          }
          puVar13 = (undefined8 *)(lVar28 + lVar27);
          func_0x00010b1ec934();
          if (cStack_6c0 == '\x01') {
            puVar13[1] = pppuStack_6d0;
            *puVar13 = pppuStack_6d8;
            puVar13[2] = pppuStack_6c8;
            func_0x00010b1ee1ec();
            *(undefined1 *)(puVar13 + 3) = 1;
          }
          puVar13[5] = pppuStack_6b0;
          puVar13[4] = pppuStack_6b8;
          pppppuVar35 = (undefined8 *****)(puVar13 + (lVar27 / -0x30) * 6);
          for (lVar27 = 0;
              bVar10 = (undefined8 *****)((long)pppppuVar20 + lVar27) ==
                       (undefined8 *****)ppppuVar34, !bVar10; lVar27 = lVar27 + 0x30) {
            func_0x00010b1ec378();
            lVar27 = extraout_x8_08;
            if (bVar10) {
              func_0x00010b1eb768();
              *(undefined1 *)(extraout_x10 + 0x18) = 1;
              lVar27 = extraout_x8_09;
            }
            uVar33 = *(undefined8 *)((long)pppppuVar20 + lVar27 + 0x20);
            *(undefined8 *)((long)pppppuVar35 + lVar27 + 0x28) =
                 *(undefined8 *)((long)pppppuVar20 + lVar27 + 0x28);
            *(undefined8 *)((long)pppppuVar35 + lVar27 + 0x20) = uVar33;
          }
          for (; uVar8 = pppppuVar20 == (undefined8 *****)ppppuVar34, !(bool)uVar8;
              pppppuVar20 = pppppuVar20 + 6) {
            func_0x00010b1eddb4();
          }
          pppppuVar20 = (undefined8 *****)(puVar13 + 6);
          ppppuStack_830 = (undefined8 ****)(lVar28 + uVar32 * 0x30);
          bVar10 = (undefined8 *****)ppppuStack_840 != (undefined8 *****)0x0;
          ppppuStack_840 = pppppuVar35;
          if (bVar10) {
            ppppuStack_838 = pppppuVar20;
            __ZdlPv();
          }
        }
        ppppuStack_838 = pppppuVar20;
        FUN_10b1d7dfc(&lStack_6e0);
      }
      uStack_218 = 1;
      FUN_10b1d7ec0(&ppppuStack_220);
      func_0x00010b1ebe7c(alStack_720);
      FUN_10b1d7f8c(&pppuStack_6d8);
      func_0x00010b1ebe7c(apppuStack_7e0);
      func_0x00010b1ed9c8();
      func_0x00010b1ebe7c(auStack_760);
      func_0x00010b1ebe7c(&ppppuStack_7a0);
      ppppuStack_d8 = ppppuStack_838;
      ppppuStack_e0 = ppppuStack_840;
      ppppuStack_d0 = ppppuStack_830;
      ppppuStack_840 = (undefined8 *****)0x0;
      ppppuStack_838 = (undefined8 *****)0x0;
      ppppuStack_830 = (undefined8 *****)0x0;
      uStack_c8 = 1;
      FUN_10b1d7fac(&ppppuStack_840);
      FUN_10b1d7fd0(&uStack_888);
      FUN_10b1b7824(&ppppuStack_268);
      func_0x00010bccbe4c(&ppppuStack_8d8);
      func_0x00010b1ecedc();
      func_0x00010b1ee1d8();
      if ((bool)uVar8) {
        func_0x00010b1ecc04();
        uStack_130 = CONCAT71(uStack_130._1_7_,1);
      }
      iStack_f0 = 0;
      func_0x00010b1ed198();
      ppppuStack_e0 = (undefined8 ****)((ulong)ppppuStack_e0 & 0xffffffffffffff00);
      uStack_c8 = 0;
      if (iStack_f0 == 0) {
        func_0x00010b1ee1b0();
        if ((bool)uVar8) {
          func_0x00010b1ed644();
          func_0x00010b1ee19c();
          cStack_3a8 = extraout_w8_00;
        }
      }
      else {
        if (iStack_f0 != 1) {
          func_0x00010563ab98();
          goto LAB_10b1cc094;
        }
        ppppuStack_3c0 = (ulong ****)((ulong)ppppuStack_3c0 & 0xffffffffffffff00);
        cStack_3a8 = '\0';
      }
      func_0x00010b1ed198();
      func_0x00010b1ecb88();
      FUN_10b1d803c();
      FUN_10b1b78d0(&ppppuStack_1d8);
      func_0x000107c279a4(&ppppuStack_670);
      if (cStack_3a8 == '\x01') {
        pppppuVar38 = (ulong *****)CONCAT71(uStack_3b7,uStack_3b8);
        for (pppppuVar22 = (ulong *****)ppppuStack_3c0; pppppuVar22 != pppppuVar38;
            pppppuVar22 = pppppuVar22 + 6) {
          if (*(char *)(pppppuVar22 + 5) == '\x01') {
            pppppuVar29 = (undefined8 *****)((long)pppppuVar22[4] * 1000);
          }
          else {
            pppppuVar29 = (undefined8 *****)0x0;
          }
          pppppuVar30 = pppppuVar22;
          func_0x00010549026c();
          puVar13 = &uStack_900;
          FUN_10b1b7254();
          *puVar13 = pppppuVar29;
        }
      }
      FUN_10b1d801c(&ppppuStack_3c0);
    }
    uStack_918 = 0;
    uStack_910 = 0;
    uStack_908 = 0;
    pppppuVar22 = pppppuVar16 + 0xc;
    FUN_10b1e72c8();
    ppppuStack_2f8 = (ulong ****)pppppuVar22;
    ppppuStack_2f0 = (ulong ****)pppppuVar30;
    func_0x00010b1ec26c();
    pppppuVar30 = (ulong *****)ppppuStack_2f0;
    while (ppppuStack_2f0 = (ulong ****)pppppuVar30, pppppuVar22 != (ulong *****)0x0) {
      uVar32 = (ulong)*(int *)((long)pppppuVar30 + 0x54);
      if (0 < *(int *)((long)pppppuVar30 + 0x54)) {
        uVar12 = *(uint *)(pppppuVar30 + 7);
        uVar8 = uVar12 == 1;
        if (0 < (int)uVar12) {
          uVar4 = (ulong)uVar12;
          if ((long)uVar32 <= (long)(ulong)uVar12) {
            uVar4 = uVar32;
          }
          uVar8 = *(char *)((long)pppppuVar30 + 0x5d) == '\x01';
          if ((bool)uVar8) {
            uVar32 = uVar4;
          }
        }
        ppppuVar37 = *pppppuVar30;
        func_0x00010b1edaa4(&ppppuStack_1d8);
        uStack_980 = uStack_980 & 0xffffffffffffff00 | 1;
        ppppuStack_220 = (undefined8 ****)((ulong)ppppuStack_220 & 0xffffffffffffff00);
        uStack_210 = uStack_210 & 0xffffffffffffff00;
        func_0x00010bccbc98(&ppppuStack_670,pppppuVar14 + 0x10,&UNK_10f73845f,0x3b);
        pppppuVar20 = (undefined8 *****)ppppuStack_670[1];
        pppuStack_2a8 = ppppuStack_670[2];
        pppppuVar22 = pppppuVar15;
        ppppuStack_2b0 = pppppuVar20;
        if ((ulong ****)pppuStack_2a8 != (ulong ****)0x0) {
          do {
            func_0x00010b1eaf98();
            pppppuVar20 = extraout_x8_10;
            pppppuVar22 = extraout_x12;
          } while (extraout_w11_00 != 0);
        }
        FUN_10b1fb254(auStack_618,pppppuVar20[2],&ppppuStack_1d8,
                      (ulong)ppppuVar37 & 0xffffffff | 0x100000000,
                      (long)(pppppuVar22 + uVar32 * -0x1e848) / 1000,uStack_980);
        uStack_520 = 0;
        uStack_4f0 = 0;
        if (cStack_5d8 != '\0') {
          uStack_508 = 0;
          bVar10 = cStack_5f0 == '\x01';
          uVar8 = bVar10;
          if (bVar10) {
            func_0x00010b1ebc9c(auStack_608[0]);
          }
          uStack_4f8 = uStack_5e0;
          uStack_500 = uStack_5e8;
          uStack_4f0 = 1;
          uStack_508 = bVar10;
          FUN_10b1d8118(auStack_608);
        }
        uStack_528 = uStack_610;
        uStack_610 = 0;
        FUN_10b1d8080(auStack_4e8,&uStack_528);
        uStack_578 = 0;
        uStack_580 = 0;
        uStack_588 = 0;
        uStack_590 = 0;
        uStack_5a8 = 0;
        uStack_5b0 = 0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        FUN_10b1d8080(auStack_568,&uStack_5b0);
        ppppuStack_5c0 = (undefined8 *****)0x0;
        ppppuStack_5d0 = (undefined8 *****)0x0;
        ppppuStack_5c8 = (undefined8 *****)0x0;
        FUN_10b1d8294(&lStack_468,auStack_4e8);
        FUN_10b1d8294(alStack_4a8,auStack_568);
        ppppuStack_268 = (ulong ****)&ppppuStack_5d0;
        ppppuStack_260 = (ulong ****)((ulong)ppppuStack_260 & 0xffffffffffffff00);
        while ((((bStack_430 & 1) != 0 || ((bStack_470 & 1) != 0)) &&
               (uVar8 = 1, lStack_468 != alStack_4a8[0]))) {
          if ((bStack_430 & 1) == 0) {
            uVar33 = *(undefined8 *)(lStack_468 + 8);
            func_0x00010b1eb9a4(auStack_428);
            func_0x00010b1eb224(auStack_410);
            func_0x00010b1eb99c(uVar33);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_410);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_428);
          }
          ppppuVar34 = ppppuStack_5c8;
          pppppuVar20 = (undefined8 *****)ppppuStack_5d0;
          if (ppppuStack_5c8 < ppppuStack_5c0) {
            func_0x00010b1ec934();
            uVar8 = cStack_448 == '\x01';
            if ((bool)uVar8) {
              func_0x00010b1ec278(pppuStack_450,pppuStack_460);
              pppuStack_458 = (undefined8 ****)0x0;
              pppuStack_450 = (undefined8 ****)0x0;
              pppuStack_460 = (undefined8 ****)0x0;
              *(undefined1 *)(ppppuVar34 + 3) = 1;
            }
            ppppuVar34[5] = pppuStack_438;
            ppppuVar34[4] = pppuStack_440;
            pppppuVar20 = (undefined8 *****)(ppppuVar34 + 6);
          }
          else {
            lVar27 = (long)ppppuStack_5c8 - (long)ppppuStack_5d0;
            if (pppppuVar29 < (undefined8 *****)(lVar27 / 0x30 + 1)) {
              FUN_10b1d8158();
              goto LAB_10b1cc094;
            }
            func_0x00010b1eb414(((long)ppppuStack_5c0 - (long)ppppuStack_5d0) / 0x30);
            pppppuVar35 = extraout_x9_02;
            if (0x2aaaaaaaaaaaaa9 < extraout_x8_11) {
              pppppuVar35 = pppppuVar29;
            }
            if (pppppuVar35 == (undefined8 *****)0x0) {
              lVar28 = 0;
            }
            else {
              if (pppppuVar29 < pppppuVar35) {
                func_0x000104bd35f4();
                goto LAB_10b1cc094;
              }
              lVar28 = (long)pppppuVar35 * 0x30;
              __Znwm();
            }
            pppppuVar29 = (undefined8 *****)(lVar28 + lVar27);
            *(undefined1 *)pppppuVar29 = 0;
            *(undefined1 *)(pppppuVar29 + 3) = 0;
            if (cStack_448 == '\x01') {
              pppppuVar29[1] = (undefined8 ****)pppuStack_458;
              *pppppuVar29 = (undefined8 ****)pppuStack_460;
              pppppuVar29[2] = (undefined8 ****)pppuStack_450;
              pppuStack_458 = (undefined8 ****)0x0;
              pppuStack_450 = (undefined8 ****)0x0;
              pppuStack_460 = (undefined8 ****)0x0;
              *(undefined1 *)(pppppuVar29 + 3) = 1;
            }
            pppppuVar29[5] = (undefined8 ****)pppuStack_438;
            pppppuVar29[4] = (undefined8 ****)pppuStack_440;
            pppppuVar36 = pppppuVar29 + (lVar27 / -0x30) * 6;
            for (lVar27 = 0;
                bVar10 = (undefined8 *****)((long)pppppuVar20 + lVar27) ==
                         (undefined8 *****)ppppuVar34, !bVar10; lVar27 = lVar27 + 0x30) {
              func_0x00010b1ec378();
              lVar27 = extraout_x8_12;
              if (bVar10) {
                func_0x00010b1eb768();
                *(undefined1 *)(extraout_x10_00 + 0x18) = 1;
                lVar27 = extraout_x8_13;
              }
              uVar33 = *(undefined8 *)((long)pppppuVar20 + lVar27 + 0x20);
              *(undefined8 *)((long)pppppuVar36 + lVar27 + 0x28) =
                   *(undefined8 *)((long)pppppuVar20 + lVar27 + 0x28);
              *(undefined8 *)((long)pppppuVar36 + lVar27 + 0x20) = uVar33;
            }
            for (; uVar8 = pppppuVar20 == (undefined8 *****)ppppuVar34, !(bool)uVar8;
                pppppuVar20 = pppppuVar20 + 6) {
              func_0x000107c279a4(pppppuVar20);
            }
            pppppuVar20 = pppppuVar29 + 6;
            ppppuStack_5c0 = (undefined8 ****)(lVar28 + (long)pppppuVar35 * 0x30);
            bVar10 = (undefined8 *****)ppppuStack_5d0 != (undefined8 *****)0x0;
            ppppuStack_5d0 = pppppuVar36;
            ppppuStack_5c8 = pppppuVar20;
            if (bVar10) {
              __ZdlPv();
            }
            func_0x00010b1ec26c();
          }
          ppppuStack_5c8 = pppppuVar20;
          FUN_10b1d8164(&lStack_468);
        }
        ppppuStack_260 = (ulong ****)CONCAT71(ppppuStack_260._1_7_,1);
        FUN_10b1d8228(&ppppuStack_268);
        func_0x00010b1ebd20(alStack_4a8);
        FUN_10b1d82f4(&pppuStack_460);
        func_0x00010b1ebd20(auStack_568);
        func_0x00010b1ebd20(&uStack_5b0);
        func_0x00010b1ebd20(auStack_4e8);
        func_0x00010b1ebd20(&uStack_528);
        ppppuStack_d8 = ppppuStack_5c8;
        ppppuStack_e0 = ppppuStack_5d0;
        ppppuStack_d0 = ppppuStack_5c0;
        ppppuStack_5d0 = (undefined8 *****)0x0;
        ppppuStack_5c8 = (undefined8 *****)0x0;
        ppppuStack_5c0 = (undefined8 *****)0x0;
        uStack_c8 = 1;
        FUN_10b1d8314(&ppppuStack_5d0);
        FUN_10b1d8338(auStack_618);
        FUN_10b1b7824(&ppppuStack_2b0);
        func_0x00010bccbe4c(&ppppuStack_670);
        func_0x00010bccbdb4(&ppppuStack_670);
        func_0x00010b1ee1d8();
        if ((bool)uVar8) {
          func_0x00010b1ecc04();
          uStack_130 = CONCAT71(uStack_130._1_7_,1);
        }
        iStack_f0 = 0;
        func_0x00010b1ed190();
        ppppuStack_e0 = (undefined8 ****)((ulong)ppppuStack_e0 & 0xffffffffffffff00);
        uStack_c8 = 0;
        if (iStack_f0 == 0) {
          func_0x00010b1ee1b0();
          if ((bool)uVar8) {
            func_0x00010b1ed644();
            ppppuStack_140 = (ulong ****)0x0;
            ppppuStack_138 = (ulong ****)0x0;
            ppppuStack_148 = (ulong ****)0x0;
            cStack_3a8 = '\x01';
          }
        }
        else {
          if (iStack_f0 != 1) {
            func_0x00010563ab98();
            goto LAB_10b1cc094;
          }
          cStack_3a8 = '\0';
          ppppuStack_3c0 = (ulong ****)((ulong)ppppuStack_3c0 & 0xffffffffffffff00);
        }
        func_0x00010b1ed190();
        func_0x00010b1ecb88();
        FUN_10b1d83a4();
        FUN_10b1b78d0(&ppppuStack_220);
        func_0x000107c279a4(&ppppuStack_1d8);
        if ((cStack_3a8 == '\x01') &&
           (pppppuVar38 = (ulong *****)CONCAT71(uStack_3b7,uStack_3b8),
           pppppuVar22 = (ulong *****)ppppuStack_3c0, (ulong *****)ppppuStack_3c0 != pppppuVar38)) {
          for (; uVar8 = pppppuVar22 == pppppuVar38, !(bool)uVar8; pppppuVar22 = pppppuVar22 + 6) {
            pppppuVar17 = pppppuVar22;
            func_0x00010549026c(pppppuVar22);
            pppppuVar19 = pppppuVar22 + 4;
            func_0x000107267f8c();
            FUN_10b1cca18(&ppppuStack_150,pppppuVar14,param_2,pppppuVar17,ppppuVar37,pppppuVar30 + 1
                          ,0,(long)*pppppuVar19 * 1000,&uStack_900,0);
            func_0x00010b1ee270();
            if ((bool)uVar8) {
              func_0x00010b1ece38(&uStack_918);
            }
            func_0x00010b1ebf30();
          }
        }
        FUN_10b1d8384(&ppppuStack_3c0);
      }
      FUN_10b1e734c(&ppppuStack_2f8);
      pppppuVar30 = (ulong *****)ppppuStack_2f0;
      pppppuVar22 = (ulong *****)ppppuStack_2f8;
    }
    func_0x00010b1edaa4(auStack_960);
    auStack_3f8[0] = 0;
    uStack_3e8 = 0;
    func_0x00010b1edc80(&ppppuStack_3c0);
    ppppuVar37 = (ulong ****)ppppuStack_3c0[1];
    pppuStack_368 = ppppuStack_3c0[2];
    pppuStack_370 = (ulong ***)ppppuVar37;
    if ((ulong ****)pppuStack_368 != (ulong ****)0x0) {
      do {
        func_0x00010b1eaf98();
        ppppuVar37 = extraout_x8_14;
      } while (extraout_w11_01 != 0);
    }
    FUN_10b1fb3c8(&ppppuStack_e0,ppppuVar37[2],auStack_960);
    pppuStack_2a8 = (ulong ***)((ulong)pppuStack_2a8 & 0xffffffffffffff00);
    uStack_270 = 0;
    if (cStack_98 != '\0') {
      uStack_290 = 0;
      if (cStack_b8 == '\x01') {
        func_0x00010b1ecb3c();
        uStack_290 = extraout_w8_01;
      }
      uStack_280 = uStack_a8;
      uStack_288 = uStack_b0;
      uStack_278 = uStack_a0;
      uStack_270 = 1;
      FUN_10b1d87d8(&ppppuStack_d0);
    }
    ppppuStack_2b0 = ppppuStack_d8;
    ppppuStack_d8 = (undefined8 *****)0x0;
    func_0x00010b1d8730(&ppppuStack_268,&ppppuStack_2b0);
    uStack_300 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    lStack_338 = 0;
    lStack_340 = 0;
    func_0x00010b1d8730(&ppppuStack_2f8,&lStack_340);
    ppppuStack_350 = (ulong ****)0x0;
    ppppuStack_360 = (ulong ****)0x0;
    ppppuStack_358 = (ulong ****)0x0;
    FUN_10b1d897c(&ppppuStack_1d8,&ppppuStack_268);
    FUN_10b1d897c(&ppppuStack_220,&ppppuStack_2f8);
    ppppuStack_190 = (ulong ****)&ppppuStack_360;
    uStack_188 = 0;
    while ((((bStack_198 & 1) != 0 || ((bStack_1e0 & 1) != 0)) && (ppppuStack_1d8 != ppppuStack_220)
           )) {
      if ((bStack_198 & 1) == 0) {
        ppppuVar34 = (undefined8 ****)ppppuStack_1d8[1];
        func_0x00010b1eb9a4(auStack_180);
        func_0x00010b1eb224(auStack_168);
        func_0x00010b1eb99c(ppppuVar34);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
      }
      ppppuVar37 = ppppuStack_358;
      pppppuVar30 = (ulong *****)ppppuStack_360;
      if (ppppuStack_358 < ppppuStack_350) {
        func_0x00010b1ec934();
        if ((char)uStack_1b8 == '\x01') {
          func_0x00010b1ec278(uStack_1c0,CONCAT71(uStack_1cf,uStack_1d0));
          func_0x00010b1ee1ec();
          *(undefined1 *)(ppppuVar37 + 3) = 1;
        }
        *(undefined1 *)(ppppuVar37 + 6) = uStack_1a0;
        ppppuVar37[5] = pppuStack_1a8;
        ppppuVar37[4] = pppuStack_1b0;
        pppppuVar30 = (ulong *****)(ppppuVar37 + 7);
      }
      else {
        lVar27 = (long)ppppuStack_358 - (long)ppppuStack_360;
        uVar32 = lVar27 / 0x38 + 1;
        uVar8 = 0x492492492492491 < uVar32;
        if (0x492492492492492 < uVar32) {
          FUN_10b1d8828();
          goto LAB_10b1cc094;
        }
        func_0x00010b1eb414(((long)ppppuStack_350 - (long)ppppuStack_360) / 0x38);
        func_0x00010b1ed5cc();
        uVar32 = extraout_x9_03;
        if ((bool)uVar8) {
          uVar32 = 0x492492492492492;
        }
        if (uVar32 == 0) {
          lVar28 = 0;
        }
        else {
          if (0x492492492492492 < uVar32) {
            func_0x000104bd35f4();
            goto LAB_10b1cc094;
          }
          lVar28 = uVar32 * 0x38;
          __Znwm();
        }
        puVar13 = (undefined8 *)(lVar28 + lVar27);
        *(undefined1 *)puVar13 = 0;
        *(undefined1 *)(puVar13 + 3) = 0;
        if ((char)uStack_1b8 == '\x01') {
          puVar13[1] = uStack_1c8;
          *puVar13 = CONCAT71(uStack_1cf,uStack_1d0);
          puVar13[2] = uStack_1c0;
          func_0x00010b1ee1ec();
          *(undefined1 *)(puVar13 + 3) = 1;
        }
        puVar13[5] = pppuStack_1a8;
        puVar13[4] = pppuStack_1b0;
        *(undefined1 *)(puVar13 + 6) = uStack_1a0;
        pppppuVar22 = (ulong *****)(puVar13 + (lVar27 / -0x38) * 7);
        for (lVar27 = 0;
            bVar10 = (ulong *****)((long)pppppuVar30 + lVar27) == (ulong *****)ppppuVar37, !bVar10;
            lVar27 = lVar27 + 0x38) {
          func_0x00010b1ec378();
          lVar27 = extraout_x8_15;
          if (bVar10) {
            func_0x00010b1eb768();
            *(undefined1 *)(extraout_x10_01 + 0x18) = 1;
            lVar27 = extraout_x8_16;
          }
          uVar39 = *(undefined8 *)((long)pppppuVar30 + lVar27 + 0x28);
          uVar33 = *(undefined8 *)((long)pppppuVar30 + lVar27 + 0x20);
          *(undefined1 *)((long)pppppuVar22 + lVar27 + 0x30) =
               *(undefined1 *)((long)pppppuVar30 + lVar27 + 0x30);
          *(undefined8 *)((long)pppppuVar22 + lVar27 + 0x28) = uVar39;
          *(undefined8 *)((long)pppppuVar22 + lVar27 + 0x20) = uVar33;
        }
        for (; pppppuVar30 != (ulong *****)ppppuVar37; pppppuVar30 = pppppuVar30 + 7) {
          func_0x00010b1eddb4();
        }
        pppppuVar30 = (ulong *****)(puVar13 + 7);
        ppppuStack_350 = (ulong ****)(lVar28 + uVar32 * 0x38);
        bVar10 = (ulong *****)ppppuStack_360 != (ulong *****)0x0;
        ppppuStack_360 = (ulong ****)pppppuVar22;
        if (bVar10) {
          ppppuStack_358 = (ulong ****)pppppuVar30;
          __ZdlPv();
        }
      }
      ppppuStack_358 = (ulong ****)pppppuVar30;
      FUN_10b1d8834(&ppppuStack_1d8);
    }
    uStack_188 = 1;
    FUN_10b1d8910(&ppppuStack_190);
    func_0x00010b1ebe84(&ppppuStack_220);
    FUN_10b1d89e4(&uStack_1d0);
    func_0x00010b1ebe84(&ppppuStack_2f8);
    func_0x00010b1ed8b0();
    func_0x00010b1ebe84(&ppppuStack_268);
    func_0x00010b1ebe84(&ppppuStack_2b0);
    ppppuStack_3d8 = ppppuStack_358;
    ppppuStack_3e0 = ppppuStack_360;
    ppppuStack_3d0 = ppppuStack_350;
    ppppuStack_360 = (ulong ****)0x0;
    ppppuStack_358 = (ulong ****)0x0;
    ppppuStack_350 = (ulong ****)0x0;
    cStack_3c8 = '\x01';
    FUN_10b1d8a04(&ppppuStack_360);
    FUN_10b1d8a28(&ppppuStack_e0);
    FUN_10b1b7824(&pppuStack_370);
    func_0x00010bccbe4c(&ppppuStack_3c0);
    func_0x00010bccbdb4(&ppppuStack_3c0);
    ppppuStack_148 = (ulong ****)((ulong)ppppuStack_148 & 0xffffffffffffff00);
    uVar32 = uStack_130 >> 8;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    if (cStack_3c8 == '\x01') {
      ppppuStack_140 = ppppuStack_3d8;
      ppppuStack_148 = ppppuStack_3e0;
      ppppuStack_138 = ppppuStack_3d0;
      ppppuStack_3d0 = (ulong ****)0x0;
      ppppuStack_3d8 = (ulong ****)0x0;
      ppppuStack_3e0 = (ulong ****)0x0;
      uStack_130 = CONCAT71((int7)uVar32,1);
    }
    iStack_f0 = 0;
    func_0x00010b1ed250();
    ppppuStack_3e0 = (ulong ****)((ulong)ppppuStack_3e0 & 0xffffffffffffff00);
    cStack_3c8 = 0;
    if (iStack_f0 == 0) {
      ppppuStack_940 = (ulong ****)((ulong)ppppuStack_940._1_7_ << 8);
      cStack_928 = '\0';
      if ((char)uStack_130 == '\x01') {
        ppppuStack_938 = ppppuStack_140;
        ppppuStack_940 = ppppuStack_148;
        ppppuStack_930 = ppppuStack_138;
        func_0x00010b1ee19c();
        cStack_928 = extraout_w8_02;
      }
    }
    else {
      if (iStack_f0 != 1) {
        func_0x00010563ab98();
        goto LAB_10b1cc094;
      }
      ppppuStack_940 = (ulong ****)((ulong)ppppuStack_940._1_7_ << 8);
      cStack_928 = '\0';
    }
    func_0x00010b1ed250();
    func_0x00010b1ecb88();
    FUN_10b1d8aa0();
    FUN_10b1b78d0(auStack_3f8);
    func_0x00010b1ec510();
    ppppuVar37 = ppppuStack_938;
    uVar8 = 0;
    if (cStack_928 == '\x01') {
      pppppuVar30 = (ulong *****)(ppppuStack_940 + 5);
      while( true ) {
        pppppuVar22 = pppppuVar30 + -5;
        uVar11 = pppppuVar22 == (ulong *****)ppppuVar37;
        uVar8 = 1;
        if ((bool)uVar11) break;
        ppppuStack_150 = (ulong ****)(ulong)*(uint *)(pppppuVar30 + -1);
        pppppuVar38 = pppppuVar16 + 0xc;
        pppppuVar19 = &ppppuStack_150;
        FUN_10b1cd0e4();
        if ((pppppuVar38 == (ulong *****)0x0) ||
           (uVar11 = *(int *)((long)pppppuVar19 + 0x54) == 0, *(int *)((long)pppppuVar19 + 0x54) < 1
           )) {
          func_0x00010549026c(pppppuVar22);
          if ((*(byte *)((long)pppppuVar30 + -4) & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_10b1cc094;
          }
          iVar25 = *(int *)(pppppuVar30 + -1);
          pppppuVar38 = pppppuVar16;
          FUN_10b1231f8(pppppuVar16,iVar25);
          pppppuVar19 = pppppuVar30;
          func_0x000107267f8c();
          FUN_10b1cca18(&ppppuStack_150,pppppuVar14,param_2,pppppuVar22,iVar25,pppppuVar38,
                        (long)*pppppuVar19 * 1000,0,&uStack_900,0);
          func_0x00010b1ee270();
          if ((bool)uVar11) {
            func_0x00010b1ece38(&uStack_918);
          }
          func_0x00010b1ebf30();
        }
        pppppuVar30 = pppppuVar30 + 7;
      }
    }
    FUN_10b1cd118(pppppuVar14,&uStack_918,3);
    FUN_10b1cc598(pppppuVar14,param_2,pppppuVar15);
    FUN_10b1d8a80(&ppppuStack_940);
    func_0x00010b128754(&uStack_918);
    FUN_10b1b78fc(&uStack_900);
  }
  else {
    uVar8 = pppppuVar15 == (ulong *****)pppppuVar14[0x98];
    if ((long)pppppuVar14[0x98] <= (long)pppppuVar15) {
      pppppuVar14[0x98] = (ulong ****)(pppppuVar15 + (long)pppppuVar14[0x51] * 0x7d);
      goto LAB_10b1caedc;
    }
  }
  bVar24 = 1;
  goto LAB_10b1cc02c;
LAB_10b1caa78:
  pppppuVar17 = pppppuVar19 + -4;
  if (pppppuVar17 == pppppuVar22) goto LAB_10b1cad9c;
  if ((pppppuVar19[-3] != (ulong ****)0x0) && (0 < *(int *)((long)pppppuVar19[-3] + 0x4c))) {
    pppppuVar38 = (ulong *****)0x0;
    unaff_x26 = (ulong *****)((lVar27 >> 5) + 1);
    ppppuStack_148 = (ulong ****)0x0;
    ppppuStack_150 = (ulong ****)0x0;
    if (lVar27 >> 5 < 3) goto LAB_10b1cad70;
    pppppuVar38 = unaff_x26;
    if ((ulong *****)0x3fffffffffffffe < unaff_x26) {
      pppppuVar38 = (ulong *****)0x3ffffffffffffff;
    }
    if (pppppuVar38 == (ulong *****)0x0) goto LAB_10b1cacbc;
    goto LAB_10b1caca0;
  }
  lVar27 = lVar27 + -0x20;
  pppppuVar19 = pppppuVar17;
  goto LAB_10b1caa78;
LAB_10b1ca774:
  while (pppppuVar19 = pppppuVar19 + 1, pppppuVar19 != pppppuVar16) {
    if ((*pppppuVar19)[6] != (ulong ***)0x0) {
      *pppppuVar22 = *pppppuVar19;
      pppppuVar22 = pppppuVar22 + 1;
    }
  }
  uVar8 = pppppuVar22 == pppppuVar16;
  if (!(bool)uVar8) {
    pppppuVar16 = pppppuVar22;
  }
LAB_10b1ca79c:
  pppppuVar22 = (ulong *****)ppppuStack_268;
  if (ppppuVar37[6] == (ulong ***)0x0) {
    for (; uVar8 = pppppuVar22 == (ulong *****)ppppuStack_260, !(bool)uVar8;
        pppppuVar22 = (ulong *****)((long)pppppuVar22 + 4)) {
      pppppuVar19 = pppppuVar22;
      if (*(int *)pppppuVar22 == iVar25) goto LAB_10b1ca840;
    }
  }
LAB_10b1ca7a4:
  ppppuVar37 = pppppuVar30[0x47];
  FUN_10b12983c(&ppppuStack_150,iVar25);
  FUN_10b1edaec(pppppuVar38);
  func_0x00010b123dbc(auStack_128,&UNK_10f731bc3,0xf);
  func_0x00010b1eb930(&ppppuStack_2b0,&ppppuStack_150);
  func_0x00010b1eb5b4(ppppuVar37,0xdb,&ppppuStack_2b0);
  lVar28 = (long)pppppuVar38 + lVar28;
  func_0x00010b1ece9c();
  pppppuVar30 = (ulong *****)0x38;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
    func_0x00010b1ee484();
  } while (!(bool)uVar8);
  func_0x00010b1ece40();
  pppppuVar22 = pppppuVar38;
LAB_10b1ca80c:
  lVar27 = lVar27 + 4;
  goto LAB_10b1ca6d4;
LAB_10b1ca840:
  while (pppppuVar22 = (ulong *****)((long)pppppuVar22 + 4),
        pppppuVar22 != (ulong *****)ppppuStack_260) {
    if (*(int *)pppppuVar22 != iVar25) {
      *(int *)pppppuVar19 = *(int *)pppppuVar22;
      pppppuVar19 = (ulong *****)((long)pppppuVar19 + 4);
    }
  }
  uVar8 = pppppuVar19 == (ulong *****)ppppuStack_260;
  if (!(bool)uVar8) {
    uVar8 = true;
    ppppuStack_260 = (ulong ****)pppppuVar19;
  }
  goto LAB_10b1ca7a4;
  while (pppppuVar38 = (ulong *****)((ulong)pppppuVar38 >> 1), pppppuVar38 != (ulong *****)0x0) {
LAB_10b1caca0:
    lVar27 = (long)pppppuVar38 << 5;
    __ZnwmRKSt9nothrow_t(lVar27,PTR___ZSt7nothrow_1103469d8);
    if (lVar27 != 0) goto LAB_10b1cad54;
  }
LAB_10b1cacbc:
  lVar27 = 0;
LAB_10b1cad54:
  uStack_888 = 0;
  ppppuStack_880 = (ulong ****)pppppuVar38;
  FUN_10b1e7798(&ppppuStack_150,lVar27);
  ppppuStack_148 = (ulong ****)pppppuVar38;
  FUN_10b1e7470(&uStack_888);
LAB_10b1cad70:
  FUN_10b1e7490(pppppuVar22,pppppuVar17,unaff_x26,ppppuStack_150,pppppuVar38);
  FUN_10b1e7470(&ppppuStack_150);
  pppppuVar38 = (ulong *****)ppppuStack_2f8;
LAB_10b1cad9c:
  for (; ppppuVar37 = ppppuStack_2f0, pppppuVar22 = (ulong *****)ppppuStack_2f8,
      pppppuVar38 != (ulong *****)ppppuStack_2f0; pppppuVar38 = pppppuVar38 + 1) {
    (*pppppuVar38)[6] = (ulong ***)pppppuVar16;
  }
  FUN_10b1cd2ac(pppppuVar30[0x47],uStack_1c8,&ppppuStack_2f8);
  for (; pppppuVar22 != (ulong *****)ppppuVar37; pppppuVar22 = pppppuVar22 + 1) {
    (*pppppuVar22)[6] = (ulong ***)0x0;
  }
  uStack_130 = 0;
  ppppuStack_138 = (ulong ****)0x0;
  ppppuStack_140 = (ulong ****)0x0;
  ppppuStack_148 = (ulong ****)0x0;
  ppppuStack_150 = (ulong ****)0x0;
  FUN_10b1be194(&ppppuStack_1d8,&ppppuStack_150);
  func_0x00010b1d3e60(&ppppuStack_150);
  ppppuVar37 = ppppuStack_260;
  for (pppppuVar22 = (ulong *****)ppppuStack_268; uVar8 = pppppuVar22 == (ulong *****)ppppuVar37,
      !(bool)uVar8; pppppuVar22 = pppppuVar22 + 4) {
    FUN_10b1cca18(&ppppuStack_150,pppppuVar30,param_2,&ppppuStack_2b0,*(int *)pppppuVar22,
                  pppppuVar22[1],pppppuVar22[2],pppppuVar22[3],&ppppuStack_670,
                  CONCAT11((char)param_4,1));
    func_0x00010b1ee270();
    if ((bool)uVar8) {
      func_0x00010b1ece38(&lStack_340);
    }
    func_0x00010b1ebf30();
  }
  if (((param_4 & 1) == 0) || (uVar8 = *(char *)(pppppuVar30 + 0xc6) == '\x01', !(bool)uVar8)) {
    func_0x00010b1eda7c();
    func_0x00010b1edb5c();
    func_0x00010b1ece7c();
    func_0x00010b1edbb4();
    func_0x00010b1eda10();
    pppppuVar22 = param_2;
LAB_10b1ca3d8:
    func_0x00010b1eca08();
LAB_10b1ca3dc:
    FUN_10b1e77b0(&ppppuStack_3c0);
    goto LAB_10b1ca374;
  }
  ppppuVar37 = pppppuVar30[0xbe];
  func_0x00010b1eda7c();
  func_0x00010b1edb5c();
  func_0x00010b1ece7c();
  func_0x00010b1edbb4();
  func_0x00010b1eda10();
  pppppuVar22 = param_2;
  if (((ulong)ppppuVar37 & 1) == 0) goto LAB_10b1ca3d8;
  func_0x00010b1eca08();
  bVar10 = true;
LAB_10b1cbf54:
  FUN_10b1d8c84(&uStack_3b8);
  func_0x00010b1eba88(&ppppuStack_e0);
  if ((bVar10) && (ppppuVar37 = pppppuVar30[0x47], ppppuVar37 != (ulong ****)0x0)) {
    func_0x00010b1ec990(&ppppuStack_150,"phase");
    func_0x00010b1eb654(&ppppuStack_e0,&ppppuStack_150);
    func_0x00010b1eb5b4(ppppuVar37,0xda,&ppppuStack_e0);
    func_0x00010b1ecab0();
    func_0x00010b1eb5ac(&ppppuStack_150);
  }
  uVar8 = lStack_340 == lStack_338;
  if (!(bool)uVar8) {
    FUN_10b1cd118(pppppuVar30,&lStack_340,3);
  }
  bVar24 = bVar10 ^ 1;
  func_0x00010b128754(&lStack_340);
  if ((param_4 == 0) || (((ulong)pppppuVar30[0xbe] & 1) == 0)) {
    ppppuVar37 = pppppuVar30[0x51];
    uVar8 = ppppuVar37 == (ulong ****)0x1;
    if (0 < (long)ppppuVar37) {
      uVar8 = pppppuVar15 == (ulong *****)pppppuVar30[0x98];
      if ((long)pppppuVar15 < (long)pppppuVar30[0x98]) goto LAB_10b1cc02c;
      pppppuVar30[0x98] = (ulong ****)(pppppuVar15 + (long)ppppuVar37 * 0x7d);
    }
    func_0x00010b1ed7dc();
    FUN_10b1cc598();
  }
LAB_10b1cc02c:
  func_0x00010b1eadc4();
  if ((bool)uVar8) {
    return (ulong ****)(ulong)bVar24;
  }
  ___stack_chk_fail();
LAB_10b1cc078:
  func_0x000104bd35f4();
LAB_10b1cc094:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10b1cc098);
  (*pcVar6)();
}



/* Entry: 10b1ca2c4; end: 10b1cc597;  */

/* WARNING: Removing unreachable block (ram,0x00010b1ca878) */

byte FUN_10b1ca2c4(ulong *****param_1,ulong *****param_2,undefined8 param_3,uint param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  ulong *****pppppuVar13;
  ulong *****pppppuVar14;
  undefined8 *puVar15;
  ulong *****pppppuVar16;
  undefined1 extraout_w8;
  char extraout_w8_00;
  undefined1 extraout_w8_01;
  char extraout_w8_02;
  ulong *****pppppuVar17;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  ulong *****extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 *****extraout_x8_07;
  undefined8 *****pppppuVar18;
  ulong extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  ulong ****extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  undefined8 extraout_x9;
  ulong extraout_x9_00;
  int *piVar19;
  ulong extraout_x9_01;
  undefined8 *****extraout_x9_02;
  ulong extraout_x9_03;
  ulong *****pppppuVar20;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  ulong ****ppppuVar21;
  ulong extraout_x11;
  ulong *****extraout_x12;
  byte bVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  undefined8 *****pppppuVar26;
  ulong *****pppppuVar27;
  undefined4 *puVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 ****ppppuVar31;
  ulong *****unaff_x26;
  undefined8 *****pppppuVar32;
  undefined8 *****pppppuVar33;
  ulong ****ppppuVar34;
  ulong *****pppppuVar35;
  undefined8 uVar36;
  ulong uStack_910;
  undefined1 auStack_8f0 [32];
  ulong ****ppppuStack_8d0;
  ulong ****ppppuStack_8c8;
  ulong ****ppppuStack_8c0;
  char cStack_8b8;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined4 uStack_870;
  undefined8 ****ppppuStack_868;
  undefined1 uStack_860;
  ulong uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_818;
  ulong ****ppppuStack_810;
  undefined1 auStack_808 [24];
  char cStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  char cStack_7d8;
  undefined8 ****ppppuStack_7d0;
  undefined8 ****ppppuStack_7c8;
  undefined8 ****ppppuStack_7c0;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  ulong ***apppuStack_770 [8];
  ulong ****ppppuStack_730;
  undefined1 uStack_728;
  undefined1 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined1 uStack_6f8;
  undefined1 auStack_6f0 [64];
  long alStack_6b0 [7];
  byte bStack_678;
  long lStack_670;
  undefined8 ***pppuStack_668;
  undefined8 ***pppuStack_660;
  undefined8 ***pppuStack_658;
  char cStack_650;
  undefined8 ***pppuStack_648;
  undefined8 ***pppuStack_640;
  byte bStack_638;
  ulong ***apppuStack_630 [3];
  undefined1 auStack_618 [24];
  ulong ****ppppuStack_600;
  ulong ****ppppuStack_5f8;
  ulong ****ppppuStack_5f0;
  long lStack_5e8;
  undefined4 uStack_5e0;
  undefined1 auStack_5a8 [8];
  undefined8 uStack_5a0;
  undefined8 auStack_598 [3];
  char cStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  char cStack_568;
  undefined8 ****ppppuStack_560;
  undefined8 ****ppppuStack_558;
  undefined8 ****ppppuStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 auStack_4f8 [64];
  undefined8 uStack_4b8;
  undefined1 uStack_4b0;
  undefined1 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 uStack_480;
  undefined1 auStack_478 [64];
  long alStack_438 [7];
  byte bStack_400;
  long lStack_3f8;
  undefined8 ***pppuStack_3f0;
  undefined8 ***pppuStack_3e8;
  undefined8 ***pppuStack_3e0;
  char cStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined8 ***pppuStack_3c8;
  byte bStack_3c0;
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [16];
  undefined1 uStack_378;
  ulong ****ppppuStack_370;
  ulong ****ppppuStack_368;
  ulong ****ppppuStack_360;
  char cStack_358;
  ulong ****ppppuStack_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined8 uStack_340;
  char cStack_338;
  undefined1 uStack_331;
  byte bStack_328;
  ulong ***pppuStack_300;
  ulong ***pppuStack_2f8;
  ulong ****ppppuStack_2f0;
  ulong ****ppppuStack_2e8;
  ulong ****ppppuStack_2e0;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong ****ppppuStack_288;
  ulong ****ppppuStack_280;
  undefined8 uStack_278;
  undefined8 ****ppppuStack_240;
  ulong ***pppuStack_238;
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined1 uStack_200;
  ulong ****ppppuStack_1f8;
  ulong ****ppppuStack_1f0;
  ulong ****appppuStack_1e8 [7];
  undefined8 ****ppppuStack_1b0;
  undefined1 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  byte bStack_170;
  undefined8 ****ppppuStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong ***pppuStack_140;
  ulong ***pppuStack_138;
  undefined1 uStack_130;
  byte bStack_128;
  ulong ****ppppuStack_120;
  undefined1 uStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  ulong ****ppppuStack_e0;
  ulong ****ppppuStack_d8;
  ulong ****ppppuStack_d0;
  ulong ****ppppuStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [40];
  int iStack_80;
  undefined8 ****ppppuStack_70;
  undefined8 ****ppppuStack_68;
  undefined8 ****ppppuStack_60;
  undefined1 uStack_58;
  char cStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  char cStack_28;
  
  func_0x00010b1ec024();
  uStack_910 = CONCAT44(uStack_910._4_4_,param_4);
  pppppuVar26 = &ppppuStack_868;
  pppppuVar13 = param_1;
  pppppuVar27 = param_2;
  func_0x00010b1eae84();
  __ZNSt3__16chrono12system_clock3nowEv();
  uVar9 = *(char *)(param_1 + 0xc6) == '\x01';
  if ((bool)uVar9) {
    lStack_2c8 = 0;
    lStack_2d0 = 0;
    uStack_2c0 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_5a8,param_2);
    FUN_10b1f4818(&ppppuStack_70,param_1 + 0xbb,auStack_5a8,param_3,param_4);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5a8);
    uStack_348 = 0;
    bStack_328 = 0;
    ppppuStack_350 = (ulong ****)&ppppuStack_70;
    FUN_10b1e77b0(&ppppuStack_350);
    bVar11 = false;
    pppppuVar27 = param_1;
    pppppuVar20 = param_2;
LAB_10b1ca374:
    if ((bStack_328 & 1) != 0) {
      pppppuVar14 = pppppuVar27;
      FUN_10b1cd5c8(pppppuVar27,pppppuVar20[1],*(undefined1 *)((long)pppppuVar20 + 0x17),uStack_340,
                    uStack_331,3);
      if (((ulong)pppppuVar14 & 1) == 0) goto LAB_10b1ca3dc;
      func_0x00010b1ed7dc(&ppppuStack_868);
      func_0x00010b1eb674();
      if (((uStack_858 == 0) || (uVar29 = uStack_858, func_0x00010b1ecd0c(), !(bool)uVar9)) ||
         (uVar9 = *(long *)(uVar29 + 0x38) == 0, 0 < *(long *)(uVar29 + 0x38))) goto LAB_10b1ca3d8;
      if (*(char *)((long)pppppuVar27 + 0x296) == '\x01') {
        ppppuStack_168 = ppppuStack_868;
        uStack_160 = uStack_860;
        ppppuStack_868 = (undefined8 *****)0x0;
        uStack_860 = 0;
        uStack_148 = uStack_848;
        uStack_150 = uStack_850;
        uStack_850 = 0;
        uStack_848 = 0;
        uStack_158 = uVar29;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&ppppuStack_240);
        uVar29 = uStack_158;
        pppppuVar20 = &ppppuStack_e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (pppppuVar20,&ppppuStack_240);
        ppppuStack_c8 = *(ulong *****)(uVar29 + 0x60);
        ppppuStack_5f8 = (ulong ****)0x0;
        ppppuStack_600 = (ulong ****)0x0;
        lStack_5e8 = 0;
        ppppuStack_5f0 = (ulong ****)0x0;
        uStack_5e0 = 0x3f800000;
        for (lVar24 = 0; uVar9 = lVar24 + -0x20 < 0, lVar24 != 0x20; lVar24 = lVar24 + 0x20) {
          func_0x00010b1ed9d4(&ppppuStack_600);
          pppppuVar35 = (ulong *****)ppppuStack_5f8;
          pppppuVar14 = pppppuVar20;
          if ((ulong *****)ppppuStack_5f8 != (ulong *****)0x0) {
            uVar29 = (long)ppppuStack_5f8 - 1;
            if (((ulong)ppppuStack_5f8 & uVar29) == 0) {
              unaff_x26 = (ulong *****)(uVar29 & (ulong)pppppuVar20);
              uVar9 = false;
            }
            else {
              uVar9 = (long)pppppuVar20 - (long)ppppuStack_5f8 < 0;
              unaff_x26 = pppppuVar20;
              if (ppppuStack_5f8 <= pppppuVar20) {
                uVar5 = 0;
                if ((ulong *****)ppppuStack_5f8 != (ulong *****)0x0) {
                  uVar5 = (ulong)pppppuVar20 / (ulong)ppppuStack_5f8;
                }
                unaff_x26 = (ulong *****)((long)pppppuVar20 - uVar5 * (long)ppppuStack_5f8);
              }
            }
            ppppuVar34 = (ulong ****)ppppuStack_600[(long)unaff_x26];
            if (ppppuVar34 != (ulong ****)0x0) {
              do {
                while( true ) {
                  ppppuVar34 = (ulong ****)*ppppuVar34;
                  if (ppppuVar34 == (ulong ****)0x0) goto LAB_10b1ca4fc;
                  pppppuVar17 = (ulong *****)ppppuVar34[1];
                  uVar9 = (long)pppppuVar17 - (long)pppppuVar20 < 0;
                  if (pppppuVar17 != pppppuVar20) break;
                  pppppuVar14 = (ulong *****)(ppppuVar34 + 2);
                  func_0x00010b1ebe54();
                  if (((ulong)pppppuVar14 & 1) != 0) goto LAB_10b1ca614;
                }
                if (((ulong)pppppuVar35 & uVar29) == 0) {
                  pppppuVar17 = (ulong *****)((ulong)pppppuVar17 & uVar29);
                }
                else if (pppppuVar35 <= pppppuVar17) {
                  uVar5 = 0;
                  if (pppppuVar35 != (ulong *****)0x0) {
                    uVar5 = (ulong)pppppuVar17 / (ulong)pppppuVar35;
                  }
                  pppppuVar17 = (ulong *****)((long)pppppuVar17 - uVar5 * (long)pppppuVar35);
                }
                uVar9 = (long)pppppuVar17 - (long)unaff_x26 < 0;
              } while (pppppuVar17 == unaff_x26);
            }
          }
LAB_10b1ca4fc:
          func_0x00010b1ec5d4();
          appppuStack_1e8[0] = (ulong ****)0x0;
          *pppppuVar14 = (ulong ****)0x0;
          pppppuVar14[1] = (ulong ****)pppppuVar20;
          ppppuStack_1f8 = (ulong ****)pppppuVar14;
          ppppuStack_1f0 = (ulong ****)&ppppuStack_5f0;
          func_0x00010b1eca94(pppppuVar14 + 2);
          pppppuVar14[5] = *(ulong *****)((long)&ppppuStack_c8 + lVar24);
          appppuStack_1e8[0] = (ulong ****)CONCAT71(appppuStack_1e8[0]._1_7_,1);
          func_0x00010b1ebbc8(lStack_5e8);
          if ((pppppuVar35 == (ulong *****)0x0) || (func_0x00010b1ebbbc(), (bool)uVar9)) {
            func_0x00010b1ee148();
            bVar8 = (ulong *****)0x2 < pppppuVar35;
            bVar10 = pppppuVar35 == (ulong *****)0x3;
            func_0x00010b1eaeec();
            uVar30 = extraout_x8;
            if (!bVar8 || bVar10) {
              uVar30 = extraout_x9;
            }
            FUN_10b1b7c48(&ppppuStack_600,uVar30);
            pppppuVar35 = (ulong *****)ppppuStack_5f8;
            if (((ulong)ppppuStack_5f8 & (ulong)((long)ppppuStack_5f8 + -1)) == 0) {
              unaff_x26 = (ulong *****)((ulong)((long)ppppuStack_5f8 + -1) & (ulong)pppppuVar20);
            }
            else {
              unaff_x26 = pppppuVar20;
              if (ppppuStack_5f8 <= pppppuVar20) {
                uVar29 = 0;
                if ((ulong *****)ppppuStack_5f8 != (ulong *****)0x0) {
                  uVar29 = (ulong)pppppuVar20 / (ulong)ppppuStack_5f8;
                }
                unaff_x26 = (ulong *****)((long)pppppuVar20 - uVar29 * (long)ppppuStack_5f8);
              }
            }
          }
          ppppuVar34 = (ulong ****)ppppuStack_600[(long)unaff_x26];
          if (ppppuVar34 == (ulong ****)0x0) {
            *ppppuStack_1f8 = (ulong ***)ppppuStack_5f0;
            ppppuStack_5f0 = ppppuStack_1f8;
            ppppuStack_600[(long)unaff_x26] = (ulong ***)&ppppuStack_5f0;
            if ((ulong ****)*ppppuStack_1f8 != (ulong ****)0x0) {
              pppppuVar20 = (ulong *****)(*ppppuStack_1f8)[1];
              if (((ulong)pppppuVar35 & (long)pppppuVar35 - 1U) == 0) {
                pppppuVar20 = (ulong *****)((ulong)pppppuVar20 & (long)pppppuVar35 - 1U);
              }
              else if (pppppuVar35 <= pppppuVar20) {
                uVar29 = 0;
                if (pppppuVar35 != (ulong *****)0x0) {
                  uVar29 = (ulong)pppppuVar20 / (ulong)pppppuVar35;
                }
                pppppuVar20 = (ulong *****)((long)pppppuVar20 - uVar29 * (long)pppppuVar35);
              }
              ppppuStack_600[(long)pppppuVar20] = (ulong ***)ppppuStack_1f8;
            }
          }
          else {
            *ppppuStack_1f8 = *ppppuVar34;
            *ppppuVar34 = (ulong ***)ppppuStack_1f8;
          }
          ppppuStack_1f8 = (ulong ****)0x0;
          lStack_5e8 = lStack_5e8 + 1;
          pppppuVar14 = &ppppuStack_1f8;
          FUN_10b1b7e40();
LAB_10b1ca614:
          pppppuVar20 = pppppuVar14;
        }
        pppppuVar20 = &ppppuStack_e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        ppppuStack_1f0 = (ulong ****)0x0;
        ppppuStack_1f8 = (ulong ****)0x0;
        appppuStack_1e8[0] = (ulong ****)0x0;
        lVar24 = *(long *)(uStack_158 + 0x50) - *(long *)(uStack_158 + 0x48);
        if (lVar24 != 0) {
          uVar29 = lVar24 / 0x88;
          if (uVar29 >> 0x3b != 0) {
            FUN_10b1d8b08();
            goto LAB_10b1cc094;
          }
          lVar24 = 0;
          FUN_10b1d8b14(&ppppuStack_e0,uVar29,0,appppuStack_1e8);
          func_0x00010b1ee2c4();
          pppppuVar20 = (ulong *****)(extraout_x8_00 - lVar24);
          _memcpy();
          ppppuVar34 = ppppuStack_1f8;
          appppuStack_1e8[0] = ppppuStack_c8;
          ppppuStack_1f0 = ppppuStack_d0;
          ppppuStack_1f8 = (ulong ****)(extraout_x8_00 - lVar24);
          func_0x00010b1ec444(ppppuVar34);
        }
        FUN_10b2029a0();
        pppppuVar14 = pppppuVar20;
        __ZNSt3__16chrono12system_clock3nowEv();
        ppppuStack_280 = (ulong ****)0x0;
        ppppuStack_288 = (ulong ****)0x0;
        uStack_278 = 0;
        piVar2 = *(int **)(uStack_158 + 0x50);
        for (piVar19 = *(int **)(uStack_158 + 0x48); piVar19 != piVar2; piVar19 = piVar19 + 0x22) {
          pppppuVar27 = pppppuVar20;
          FUN_10b20345c(pppppuVar20,*piVar19,piVar19[0xe]);
          iVar23 = *piVar19;
          unaff_x26 = *(ulong ******)(piVar19 + 10);
          ppppuVar34 = *(ulong *****)(piVar19 + 0x10);
          if (ppppuStack_1f0 < appppuStack_1e8[0]) {
            *(int *)ppppuStack_1f0 = iVar23;
            ppppuStack_1f0[1] = (ulong ***)pppppuVar27;
            ppppuStack_1f0[2] = (ulong ***)unaff_x26;
            pppppuVar35 = (ulong *****)(ppppuStack_1f0 + 4);
            ppppuStack_1f0[3] = (ulong ***)ppppuVar34;
          }
          else {
            lVar24 = (long)ppppuStack_1f0 - (long)ppppuStack_1f8 >> 5;
            if (lVar24 + 1U >> 0x3b != 0) {
              FUN_10b1d8b08();
              goto LAB_10b1cc094;
            }
            func_0x00010b1ec290();
            uVar30 = extraout_x8_01;
            if (0x7fffffffffffffdf < extraout_x9_00) {
              uVar30 = 0x7ffffffffffffff;
            }
            FUN_10b1d8b14(&ppppuStack_e0,uVar30);
            *(int *)ppppuStack_d0 = iVar23;
            ppppuStack_d0[1] = (ulong ***)pppppuVar27;
            ppppuStack_d0[2] = (ulong ***)unaff_x26;
            ppppuStack_d0[3] = (ulong ***)ppppuVar34;
            pppppuVar35 = (ulong *****)(ppppuStack_d0 + 4);
            func_0x00010b1ee2c4();
            unaff_x26 = (ulong *****)(extraout_x8_02 - lVar24);
            _memcpy(unaff_x26);
            ppppuVar34 = ppppuStack_1f8;
            appppuStack_1e8[0] = ppppuStack_c8;
            ppppuStack_1f8 = (ulong ****)unaff_x26;
            ppppuStack_1f0 = (ulong ****)pppppuVar35;
            func_0x00010b1ec444(ppppuVar34);
          }
          ppppuStack_1f0 = (ulong ****)pppppuVar35;
          if (*(long *)(piVar19 + 0xc) == 0) {
            lVar24 = *(long *)(piVar19 + 10);
            FUN_10b1cd230(lVar24,*(undefined8 *)(piVar19 + 0x10),*(undefined8 *)(uStack_158 + 0x60),
                          pppppuVar27);
            if (0 < lVar24 && lVar24 < (long)pppppuVar14) {
              FUN_10b1d8bac(&ppppuStack_288,piVar19);
            }
          }
          pppppuVar27 = param_1;
        }
        lVar24 = (long)ppppuStack_1f0 - (long)ppppuStack_1f8;
        for (pppppuVar20 = (ulong *****)ppppuStack_1f8; lVar24 = lVar24 + -0x20,
            pppppuVar35 = (ulong *****)ppppuStack_288, pppppuVar20 != (ulong *****)ppppuStack_1f0;
            pppppuVar20 = pppppuVar20 + 4) {
          pppppuVar17 = (ulong *****)ppppuStack_1f0;
          if ((pppppuVar20[1] == (ulong ****)0x0) || (*(int *)((long)pppppuVar20[1] + 0x4c) < 1))
          goto LAB_10b1caa78;
        }
        goto LAB_10b1cad9c;
      }
      ppppuStack_5f8 = (ulong ****)0x0;
      ppppuStack_600 = (ulong ****)0x0;
      ppppuStack_5f0 = (ulong ****)0x0;
      ppppuStack_1f0 = (ulong ****)0x0;
      ppppuStack_1f8 = (ulong ****)0x0;
      appppuStack_1e8[0] = (ulong ****)0x0;
      puVar1 = *(undefined4 **)(uVar29 + 0x50);
      for (puVar28 = *(undefined4 **)(uVar29 + 0x48); puVar28 != puVar1; puVar28 = puVar28 + 0x22) {
        pppppuVar35 = pppppuVar14;
        if (*(long *)(puVar28 + 0xc) < 1) {
          FUN_10b2029a0();
          FUN_10b20345c();
          pppppuVar35 = *(ulong ******)(puVar28 + 10);
          FUN_10b1cd230(pppppuVar35,*(undefined8 *)(puVar28 + 0x10),
                        *(undefined8 *)(uStack_858 + 0x60),pppppuVar14);
          if (0 < (long)pppppuVar35 && (long)pppppuVar35 < (long)pppppuVar13) {
            *(ulong ******)(puVar28 + 0xc) = pppppuVar13;
            FUN_10b1d8bac(&ppppuStack_600,puVar28);
            pppppuVar35 = &ppppuStack_1f8;
            FUN_10b1d75ec(pppppuVar35,*puVar28);
          }
        }
        pppppuVar14 = pppppuVar35;
      }
      FUN_10b1cd2ac(pppppuVar27[0x47],uStack_858,&ppppuStack_600);
      if (*(char *)((long)pppppuVar27 + 0x295) == '\x01') {
        lVar24 = 0;
        lVar25 = 0;
        pppppuVar14 = (ulong *****)ppppuStack_5f8;
LAB_10b1ca6d4:
        if (lVar24 != 0xc) {
          iVar23 = *(int *)(&UNK_10e564630 + lVar24);
          ppppuVar34 = *(ulong *****)(uStack_858 + 0x48);
          while( true ) {
            if (ppppuVar34 == *(ulong *****)(uStack_858 + 0x50)) goto LAB_10b1ca80c;
            if (*(int *)ppppuVar34 == iVar23) break;
            ppppuVar34 = ppppuVar34 + 0x11;
          }
          pppppuVar35 = (ulong *****)0x0;
          for (pppppuVar20 = (ulong *****)ppppuStack_600; pppppuVar20 != pppppuVar14;
              pppppuVar20 = pppppuVar20 + 1) {
            ppppuVar21 = *pppppuVar20;
            if (ppppuVar34 != ppppuVar21 && *(int *)ppppuVar21 == iVar23) {
              ppppuVar21[6] = (ulong ***)0x0;
              pppppuVar35 = (ulong *****)((long)pppppuVar35 + 1);
            }
          }
          pppppuVar17 = (ulong *****)ppppuStack_600;
          pppppuVar20 = param_2;
          if (pppppuVar35 != (ulong *****)0x0) {
            for (; uVar9 = pppppuVar17 == pppppuVar14, !(bool)uVar9; pppppuVar17 = pppppuVar17 + 1)
            {
              pppppuVar20 = pppppuVar17;
              if ((*pppppuVar17)[6] == (ulong ***)0x0) goto LAB_10b1ca774;
            }
            goto LAB_10b1ca79c;
          }
          goto LAB_10b1ca80c;
        }
        ppppuStack_5f8 = (ulong ****)pppppuVar14;
        if (lVar25 != 0) {
          ppppuStack_d8 = (ulong ****)0x0;
          ppppuStack_e0 = (ulong ****)0x0;
          ppppuStack_d0 = (ulong ****)0x0;
          FUN_10b114b00(pppppuVar27[0x47],0xdc,&ppppuStack_e0,*(undefined8 *)(uStack_858 + 0x28));
          FUN_10b120998(&ppppuStack_e0);
        }
      }
      pppppuVar14 = *(ulong ******)(uStack_858 + 0x48);
      unaff_x26 = *(ulong ******)(uStack_858 + 0x50);
      pppppuVar35 = pppppuVar14;
      FUN_10b1bf2b0(pppppuVar14,unaff_x26);
      ppppuVar34 = ppppuStack_1f0;
      pppppuVar17 = (ulong *****)ppppuStack_1f8;
      if (pppppuVar35 == (ulong *****)0x0) {
        for (; uVar9 = pppppuVar14 == unaff_x26, !(bool)uVar9; pppppuVar14 = pppppuVar14 + 0x11) {
          if (0 < (long)pppppuVar14[6]) {
            func_0x00010b1ed7dc();
            FUN_10b1be404();
          }
        }
        if ((param_4 == 0) || (((ulong)pppppuVar27[0xbe] & 1) == 0)) {
          if ((*(long *)(uStack_858 + 0x170) == 0) ||
             (uVar9 = true, *(long *)(*(long *)(uStack_858 + 0x170) + 8) == -1)) {
            ppppuStack_1b0 = ppppuStack_868;
            uStack_1a8 = uStack_860;
            ppppuStack_868 = (undefined8 *****)0x0;
            uStack_860 = 0;
            uStack_1a0 = uStack_858;
            uStack_190 = uStack_848;
            uStack_198 = uStack_850;
            uStack_850 = 0;
            uStack_848 = 0;
            func_0x00010b1ed7dc(&ppppuStack_e0);
            func_0x00010b1ebe44();
            func_0x00010b1d3e60(&ppppuStack_1b0);
            func_0x00010b1ee270();
            if ((bool)uVar9) {
              func_0x00010b1ece38(&lStack_2d0);
            }
            func_0x00010b1ebf30();
            iVar23 = 0;
          }
          else {
            iVar23 = 3;
          }
        }
        else {
          bVar11 = true;
          iVar23 = 2;
        }
      }
      else {
        for (; ppppuVar21 = ppppuStack_5f8, uVar9 = pppppuVar17 == (ulong *****)ppppuVar34,
            pppppuVar14 = (ulong *****)ppppuStack_600, !(bool)uVar9;
            pppppuVar17 = (ulong *****)((long)pppppuVar17 + 4)) {
          ppppuVar21 = pppppuVar27[0x47];
          FUN_10b12983c(&ppppuStack_e0,*(int *)pppppuVar17);
          func_0x00010b20b440(*(int *)pppppuVar35);
          func_0x00010b1ec990(auStack_b8,"other");
          func_0x00010b1eb930(&ppppuStack_240,&ppppuStack_e0);
          func_0x00010b1eb5b4(ppppuVar21,0xb8,&ppppuStack_240);
          func_0x00010b1ece9c();
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
            func_0x00010b1ee484();
          } while (!(bool)uVar9);
          pppppuVar27 = param_1;
        }
        for (; pppppuVar14 != (ulong *****)ppppuVar21; pppppuVar14 = pppppuVar14 + 1) {
          if (*(char *)((long)pppppuVar27 + 0x294) == '\x01') {
            for (piVar19 = *(int **)(uStack_858 + 0x48); piVar19 != *(int **)(uStack_858 + 0x50);
                piVar19 = piVar19 + 0x22) {
              if ((*(long *)(piVar19 + 0xc) == 0) && (*piVar19 == *(int *)*pppppuVar14))
              goto LAB_10b1cabc4;
            }
          }
          func_0x00010b1ed7dc();
          FUN_10b1be404();
LAB_10b1cabc4:
        }
        if ((param_4 == 0) || (((ulong)pppppuVar27[0xbe] & 1) == 0)) {
          iVar23 = 3;
        }
        else {
          bVar11 = true;
          iVar23 = 2;
        }
      }
      func_0x00010b1b399c(&ppppuStack_1f8);
      FUN_10b1d8c5c(&ppppuStack_600);
      func_0x00010b1eca08();
      uVar9 = iVar23 == 3;
      if (((bool)uVar9) || (iVar23 == 0)) goto LAB_10b1ca3dc;
    }
    goto LAB_10b1cbf54;
  }
  if ((long)param_1[0x51] < 1) {
LAB_10b1caedc:
    pppppuVar14 = pppppuVar13;
    FUN_10b2029a0();
    uStack_888 = 0;
    uStack_890 = 0;
    uStack_878 = 0;
    uStack_880 = 0;
    uStack_870 = 0x3f800000;
    pppppuVar20 = pppppuVar14 + 0xc;
    FUN_10b1e72c8();
    ppppuStack_e0 = (ulong ****)pppppuVar20;
    ppppuStack_d8 = (ulong ****)pppppuVar27;
    iVar23 = 0x7fffffff;
    while (iVar6 = iVar23, (ulong *****)ppppuStack_e0 != (ulong *****)0x0) {
      iVar3 = *(int *)(ppppuStack_d8 + 7);
      FUN_10b1e734c(&ppppuStack_e0);
      iVar23 = iVar3;
      if (iVar6 <= iVar3) {
        iVar23 = iVar6;
      }
      if (iVar3 < 1) {
        iVar23 = iVar6;
      }
    }
    uVar9 = iVar6 == 0x7fffffff;
    if (!(bool)uVar9) {
      func_0x00010b1edaa4(&ppppuStack_600);
      ppppuStack_168 = (undefined8 ****)((ulong)ppppuStack_168 & 0xffffffffffffff00);
      uStack_158 = uStack_158 & 0xffffffffffffff00;
      func_0x00010b1edc80(&ppppuStack_868);
      pppppuVar27 = (ulong *****)ppppuStack_868[1];
      ppppuStack_1f0 = (ulong ****)ppppuStack_868[2];
      ppppuStack_1f8 = (ulong ****)pppppuVar27;
      if ((ulong *****)ppppuStack_1f0 != (ulong *****)0x0) {
        do {
          func_0x00010b1eaf98();
          pppppuVar27 = extraout_x8_03;
        } while (extraout_w11 != 0);
      }
      FUN_10b1fafd0(&uStack_818,pppppuVar27[2],&ppppuStack_600);
      uStack_728 = 0;
      uStack_6f8 = 0;
      if (cStack_7d8 != '\0') {
        uStack_710 = 0;
        uVar9 = cStack_7f0 == '\x01';
        if ((bool)uVar9) {
          func_0x00010b1ecb3c();
          uStack_710 = extraout_w8;
        }
        uStack_700 = uStack_7e0;
        uStack_708 = uStack_7e8;
        uStack_6f8 = 1;
        FUN_10b1d7db0(auStack_808);
      }
      ppppuStack_730 = ppppuStack_810;
      ppppuStack_810 = (ulong ****)0x0;
      FUN_10b1d7d18(auStack_6f0,&ppppuStack_730);
      uStack_788 = 0;
      uStack_790 = 0;
      uStack_778 = 0;
      uStack_780 = 0;
      uStack_7a8 = 0;
      uStack_7b0 = 0;
      uStack_798 = 0;
      uStack_7a0 = 0;
      FUN_10b1d7d18(apppuStack_770,&uStack_7b0);
      ppppuStack_7c8 = (undefined8 *****)0x0;
      ppppuStack_7c0 = (undefined8 *****)0x0;
      ppppuStack_7d0 = (undefined8 *****)0x0;
      FUN_10b1d7f2c(&lStack_670,auStack_6f0);
      pppppuVar27 = (ulong *****)apppuStack_770;
      FUN_10b1d7f2c(alStack_6b0);
      ppppuStack_1b0 = &ppppuStack_7d0;
      uStack_1a8 = 0;
      pppppuVar26 = (undefined8 *****)0x1;
      while ((((bStack_638 & 1) != 0 || ((bStack_678 & 1) != 0)) &&
             (uVar9 = 1, lStack_670 != alStack_6b0[0]))) {
        if ((bStack_638 & 1) == 0) {
          uVar30 = *(undefined8 *)(lStack_670 + 8);
          func_0x00010b1eb9a4(apppuStack_630);
          pppppuVar27 = (ulong *****)apppuStack_630;
          func_0x000107c27f54(auStack_618,&UNK_10f2e0451);
          func_0x00010b1eb99c(uVar30);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_618);
          func_0x00010b1eda74();
        }
        ppppuVar31 = ppppuStack_7c8;
        pppppuVar18 = (undefined8 *****)ppppuStack_7d0;
        if (ppppuStack_7c8 < ppppuStack_7c0) {
          *(undefined1 *)ppppuStack_7c8 = 0;
          *(undefined1 *)(ppppuStack_7c8 + 3) = 0;
          uVar9 = cStack_650 == '\x01';
          if ((bool)uVar9) {
            ppppuStack_7c8[2] = pppuStack_658;
            ppppuStack_7c8[1] = pppuStack_660;
            *ppppuStack_7c8 = pppuStack_668;
            func_0x00010b1ee1ec();
            *(undefined1 *)(ppppuVar31 + 3) = 1;
          }
          ppppuVar31[5] = pppuStack_640;
          ppppuVar31[4] = pppuStack_648;
          pppppuVar18 = (undefined8 *****)(ppppuVar31 + 6);
        }
        else {
          lVar24 = (long)ppppuStack_7c8 - (long)ppppuStack_7d0;
          if (0x555555555555555 < lVar24 / 0x30 + 1U) {
            FUN_10b1d7df0();
            goto LAB_10b1cc094;
          }
          func_0x00010b1eb414(((long)ppppuStack_7c0 - (long)ppppuStack_7d0) / 0x30);
          uVar29 = extraout_x9_01;
          if (0x2aaaaaaaaaaaaa9 < extraout_x8_04) {
            uVar29 = extraout_x11;
          }
          if (uVar29 == 0) {
            lVar25 = 0;
          }
          else {
            if (extraout_x11 < uVar29) goto LAB_10b1cc078;
            lVar25 = uVar29 * 0x30;
            __Znwm();
          }
          puVar15 = (undefined8 *)(lVar25 + lVar24);
          func_0x00010b1ec934();
          if (cStack_650 == '\x01') {
            puVar15[1] = pppuStack_660;
            *puVar15 = pppuStack_668;
            puVar15[2] = pppuStack_658;
            func_0x00010b1ee1ec();
            *(undefined1 *)(puVar15 + 3) = 1;
          }
          puVar15[5] = pppuStack_640;
          puVar15[4] = pppuStack_648;
          pppppuVar32 = (undefined8 *****)(puVar15 + (lVar24 / -0x30) * 6);
          for (lVar24 = 0;
              bVar11 = (undefined8 *****)((long)pppppuVar18 + lVar24) ==
                       (undefined8 *****)ppppuVar31, !bVar11; lVar24 = lVar24 + 0x30) {
            func_0x00010b1ec378();
            lVar24 = extraout_x8_05;
            if (bVar11) {
              func_0x00010b1eb768();
              *(undefined1 *)(extraout_x10 + 0x18) = 1;
              lVar24 = extraout_x8_06;
            }
            uVar30 = *(undefined8 *)((long)pppppuVar18 + lVar24 + 0x20);
            *(undefined8 *)((long)pppppuVar32 + lVar24 + 0x28) =
                 *(undefined8 *)((long)pppppuVar18 + lVar24 + 0x28);
            *(undefined8 *)((long)pppppuVar32 + lVar24 + 0x20) = uVar30;
          }
          for (; uVar9 = pppppuVar18 == (undefined8 *****)ppppuVar31, !(bool)uVar9;
              pppppuVar18 = pppppuVar18 + 6) {
            func_0x00010b1eddb4();
          }
          pppppuVar18 = (undefined8 *****)(puVar15 + 6);
          ppppuStack_7c0 = (undefined8 ****)(lVar25 + uVar29 * 0x30);
          bVar11 = (undefined8 *****)ppppuStack_7d0 != (undefined8 *****)0x0;
          ppppuStack_7d0 = pppppuVar32;
          if (bVar11) {
            ppppuStack_7c8 = pppppuVar18;
            __ZdlPv();
          }
        }
        ppppuStack_7c8 = pppppuVar18;
        FUN_10b1d7dfc(&lStack_670);
      }
      uStack_1a8 = 1;
      FUN_10b1d7ec0(&ppppuStack_1b0);
      func_0x00010b1ebe7c(alStack_6b0);
      FUN_10b1d7f8c(&pppuStack_668);
      func_0x00010b1ebe7c(apppuStack_770);
      func_0x00010b1ed9c8();
      func_0x00010b1ebe7c(auStack_6f0);
      func_0x00010b1ebe7c(&ppppuStack_730);
      ppppuStack_68 = ppppuStack_7c8;
      ppppuStack_70 = ppppuStack_7d0;
      ppppuStack_60 = ppppuStack_7c0;
      ppppuStack_7d0 = (undefined8 *****)0x0;
      ppppuStack_7c8 = (undefined8 *****)0x0;
      ppppuStack_7c0 = (undefined8 *****)0x0;
      uStack_58 = 1;
      FUN_10b1d7fac(&ppppuStack_7d0);
      FUN_10b1d7fd0(&uStack_818);
      FUN_10b1b7824(&ppppuStack_1f8);
      func_0x00010bccbe4c(&ppppuStack_868);
      func_0x00010b1ecedc();
      func_0x00010b1ee1d8();
      if ((bool)uVar9) {
        func_0x00010b1ecc04();
        uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
      }
      iStack_80 = 0;
      func_0x00010b1ed198();
      ppppuStack_70 = (undefined8 ****)((ulong)ppppuStack_70 & 0xffffffffffffff00);
      uStack_58 = 0;
      if (iStack_80 == 0) {
        func_0x00010b1ee1b0();
        if ((bool)uVar9) {
          func_0x00010b1ed644();
          func_0x00010b1ee19c();
          cStack_338 = extraout_w8_00;
        }
      }
      else {
        if (iStack_80 != 1) {
          func_0x00010563ab98();
          goto LAB_10b1cc094;
        }
        ppppuStack_350 = (ulong ****)((ulong)ppppuStack_350 & 0xffffffffffffff00);
        cStack_338 = '\0';
      }
      func_0x00010b1ed198();
      func_0x00010b1ecb88();
      FUN_10b1d803c();
      FUN_10b1b78d0(&ppppuStack_168);
      func_0x000107c279a4(&ppppuStack_600);
      if (cStack_338 == '\x01') {
        pppppuVar35 = (ulong *****)CONCAT71(uStack_347,uStack_348);
        for (pppppuVar20 = (ulong *****)ppppuStack_350; pppppuVar20 != pppppuVar35;
            pppppuVar20 = pppppuVar20 + 6) {
          if (*(char *)(pppppuVar20 + 5) == '\x01') {
            pppppuVar26 = (undefined8 *****)((long)pppppuVar20[4] * 1000);
          }
          else {
            pppppuVar26 = (undefined8 *****)0x0;
          }
          pppppuVar27 = pppppuVar20;
          func_0x00010549026c();
          puVar15 = &uStack_890;
          FUN_10b1b7254();
          *puVar15 = pppppuVar26;
        }
      }
      FUN_10b1d801c(&ppppuStack_350);
    }
    uStack_8a8 = 0;
    uStack_8a0 = 0;
    uStack_898 = 0;
    pppppuVar20 = pppppuVar14 + 0xc;
    FUN_10b1e72c8();
    ppppuStack_288 = (ulong ****)pppppuVar20;
    ppppuStack_280 = (ulong ****)pppppuVar27;
    func_0x00010b1ec26c();
    pppppuVar27 = (ulong *****)ppppuStack_280;
    while (ppppuStack_280 = (ulong ****)pppppuVar27, pppppuVar20 != (ulong *****)0x0) {
      uVar29 = (ulong)*(int *)((long)pppppuVar27 + 0x54);
      if (0 < *(int *)((long)pppppuVar27 + 0x54)) {
        uVar4 = *(uint *)(pppppuVar27 + 7);
        uVar9 = uVar4 == 1;
        if (0 < (int)uVar4) {
          uVar5 = (ulong)uVar4;
          if ((long)uVar29 <= (long)(ulong)uVar4) {
            uVar5 = uVar29;
          }
          uVar9 = *(char *)((long)pppppuVar27 + 0x5d) == '\x01';
          if ((bool)uVar9) {
            uVar29 = uVar5;
          }
        }
        ppppuVar34 = *pppppuVar27;
        func_0x00010b1edaa4(&ppppuStack_168);
        uStack_910 = uStack_910 & 0xffffffffffffff00 | 1;
        ppppuStack_1b0 = (undefined8 ****)((ulong)ppppuStack_1b0 & 0xffffffffffffff00);
        uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
        func_0x00010bccbc98(&ppppuStack_600,param_1 + 0x10,&UNK_10f73845f,0x3b);
        pppppuVar18 = (undefined8 *****)ppppuStack_600[1];
        pppuStack_238 = ppppuStack_600[2];
        pppppuVar20 = pppppuVar13;
        ppppuStack_240 = pppppuVar18;
        if ((ulong ****)pppuStack_238 != (ulong ****)0x0) {
          do {
            func_0x00010b1eaf98();
            pppppuVar18 = extraout_x8_07;
            pppppuVar20 = extraout_x12;
          } while (extraout_w11_00 != 0);
        }
        FUN_10b1fb254(auStack_5a8,pppppuVar18[2],&ppppuStack_168,
                      (ulong)ppppuVar34 & 0xffffffff | 0x100000000,
                      (long)(pppppuVar20 + uVar29 * -0x1e848) / 1000,uStack_910);
        uStack_4b0 = 0;
        uStack_480 = 0;
        if (cStack_568 != '\0') {
          uStack_498 = 0;
          bVar11 = cStack_580 == '\x01';
          uVar9 = bVar11;
          if (bVar11) {
            func_0x00010b1ebc9c(auStack_598[0]);
          }
          uStack_488 = uStack_570;
          uStack_490 = uStack_578;
          uStack_480 = 1;
          uStack_498 = bVar11;
          FUN_10b1d8118(auStack_598);
        }
        uStack_4b8 = uStack_5a0;
        uStack_5a0 = 0;
        FUN_10b1d8080(auStack_478,&uStack_4b8);
        uStack_508 = 0;
        uStack_510 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_538 = 0;
        uStack_540 = 0;
        uStack_528 = 0;
        uStack_530 = 0;
        FUN_10b1d8080(auStack_4f8,&uStack_540);
        ppppuStack_550 = (undefined8 *****)0x0;
        ppppuStack_560 = (undefined8 *****)0x0;
        ppppuStack_558 = (undefined8 *****)0x0;
        FUN_10b1d8294(&lStack_3f8,auStack_478);
        FUN_10b1d8294(alStack_438,auStack_4f8);
        ppppuStack_1f8 = (ulong ****)&ppppuStack_560;
        ppppuStack_1f0 = (ulong ****)((ulong)ppppuStack_1f0 & 0xffffffffffffff00);
        while ((((bStack_3c0 & 1) != 0 || ((bStack_400 & 1) != 0)) &&
               (uVar9 = 1, lStack_3f8 != alStack_438[0]))) {
          if ((bStack_3c0 & 1) == 0) {
            uVar30 = *(undefined8 *)(lStack_3f8 + 8);
            func_0x00010b1eb9a4(auStack_3b8);
            func_0x00010b1eb224(auStack_3a0);
            func_0x00010b1eb99c(uVar30);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3a0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3b8);
          }
          ppppuVar31 = ppppuStack_558;
          pppppuVar18 = (undefined8 *****)ppppuStack_560;
          if (ppppuStack_558 < ppppuStack_550) {
            func_0x00010b1ec934();
            uVar9 = cStack_3d8 == '\x01';
            if ((bool)uVar9) {
              func_0x00010b1ec278(pppuStack_3e0,pppuStack_3f0);
              pppuStack_3e8 = (undefined8 ****)0x0;
              pppuStack_3e0 = (undefined8 ****)0x0;
              pppuStack_3f0 = (undefined8 ****)0x0;
              *(undefined1 *)(ppppuVar31 + 3) = 1;
            }
            ppppuVar31[5] = pppuStack_3c8;
            ppppuVar31[4] = pppuStack_3d0;
            pppppuVar18 = (undefined8 *****)(ppppuVar31 + 6);
          }
          else {
            lVar24 = (long)ppppuStack_558 - (long)ppppuStack_560;
            if (pppppuVar26 < (undefined8 *****)(lVar24 / 0x30 + 1)) {
              FUN_10b1d8158();
              goto LAB_10b1cc094;
            }
            func_0x00010b1eb414(((long)ppppuStack_550 - (long)ppppuStack_560) / 0x30);
            pppppuVar32 = extraout_x9_02;
            if (0x2aaaaaaaaaaaaa9 < extraout_x8_08) {
              pppppuVar32 = pppppuVar26;
            }
            if (pppppuVar32 == (undefined8 *****)0x0) {
              lVar25 = 0;
            }
            else {
              if (pppppuVar26 < pppppuVar32) {
                func_0x000104bd35f4();
                goto LAB_10b1cc094;
              }
              lVar25 = (long)pppppuVar32 * 0x30;
              __Znwm();
            }
            pppppuVar26 = (undefined8 *****)(lVar25 + lVar24);
            *(undefined1 *)pppppuVar26 = 0;
            *(undefined1 *)(pppppuVar26 + 3) = 0;
            if (cStack_3d8 == '\x01') {
              pppppuVar26[1] = (undefined8 ****)pppuStack_3e8;
              *pppppuVar26 = (undefined8 ****)pppuStack_3f0;
              pppppuVar26[2] = (undefined8 ****)pppuStack_3e0;
              pppuStack_3e8 = (undefined8 ****)0x0;
              pppuStack_3e0 = (undefined8 ****)0x0;
              pppuStack_3f0 = (undefined8 ****)0x0;
              *(undefined1 *)(pppppuVar26 + 3) = 1;
            }
            pppppuVar26[5] = (undefined8 ****)pppuStack_3c8;
            pppppuVar26[4] = (undefined8 ****)pppuStack_3d0;
            pppppuVar33 = pppppuVar26 + (lVar24 / -0x30) * 6;
            for (lVar24 = 0;
                bVar11 = (undefined8 *****)((long)pppppuVar18 + lVar24) ==
                         (undefined8 *****)ppppuVar31, !bVar11; lVar24 = lVar24 + 0x30) {
              func_0x00010b1ec378();
              lVar24 = extraout_x8_09;
              if (bVar11) {
                func_0x00010b1eb768();
                *(undefined1 *)(extraout_x10_00 + 0x18) = 1;
                lVar24 = extraout_x8_10;
              }
              uVar30 = *(undefined8 *)((long)pppppuVar18 + lVar24 + 0x20);
              *(undefined8 *)((long)pppppuVar33 + lVar24 + 0x28) =
                   *(undefined8 *)((long)pppppuVar18 + lVar24 + 0x28);
              *(undefined8 *)((long)pppppuVar33 + lVar24 + 0x20) = uVar30;
            }
            for (; uVar9 = pppppuVar18 == (undefined8 *****)ppppuVar31, !(bool)uVar9;
                pppppuVar18 = pppppuVar18 + 6) {
              func_0x000107c279a4(pppppuVar18);
            }
            pppppuVar18 = pppppuVar26 + 6;
            ppppuStack_550 = (undefined8 ****)(lVar25 + (long)pppppuVar32 * 0x30);
            bVar11 = (undefined8 *****)ppppuStack_560 != (undefined8 *****)0x0;
            ppppuStack_560 = pppppuVar33;
            ppppuStack_558 = pppppuVar18;
            if (bVar11) {
              __ZdlPv();
            }
            func_0x00010b1ec26c();
          }
          ppppuStack_558 = pppppuVar18;
          FUN_10b1d8164(&lStack_3f8);
        }
        ppppuStack_1f0 = (ulong ****)CONCAT71(ppppuStack_1f0._1_7_,1);
        FUN_10b1d8228(&ppppuStack_1f8);
        func_0x00010b1ebd20(alStack_438);
        FUN_10b1d82f4(&pppuStack_3f0);
        func_0x00010b1ebd20(auStack_4f8);
        func_0x00010b1ebd20(&uStack_540);
        func_0x00010b1ebd20(auStack_478);
        func_0x00010b1ebd20(&uStack_4b8);
        ppppuStack_68 = ppppuStack_558;
        ppppuStack_70 = ppppuStack_560;
        ppppuStack_60 = ppppuStack_550;
        ppppuStack_560 = (undefined8 *****)0x0;
        ppppuStack_558 = (undefined8 *****)0x0;
        ppppuStack_550 = (undefined8 *****)0x0;
        uStack_58 = 1;
        FUN_10b1d8314(&ppppuStack_560);
        FUN_10b1d8338(auStack_5a8);
        FUN_10b1b7824(&ppppuStack_240);
        func_0x00010bccbe4c(&ppppuStack_600);
        func_0x00010bccbdb4(&ppppuStack_600);
        func_0x00010b1ee1d8();
        if ((bool)uVar9) {
          func_0x00010b1ecc04();
          uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
        }
        iStack_80 = 0;
        func_0x00010b1ed190();
        ppppuStack_70 = (undefined8 ****)((ulong)ppppuStack_70 & 0xffffffffffffff00);
        uStack_58 = 0;
        if (iStack_80 == 0) {
          func_0x00010b1ee1b0();
          if ((bool)uVar9) {
            func_0x00010b1ed644();
            ppppuStack_d0 = (ulong ****)0x0;
            ppppuStack_c8 = (ulong ****)0x0;
            ppppuStack_d8 = (ulong ****)0x0;
            cStack_338 = '\x01';
          }
        }
        else {
          if (iStack_80 != 1) {
            func_0x00010563ab98();
            goto LAB_10b1cc094;
          }
          cStack_338 = '\0';
          ppppuStack_350 = (ulong ****)((ulong)ppppuStack_350 & 0xffffffffffffff00);
        }
        func_0x00010b1ed190();
        func_0x00010b1ecb88();
        FUN_10b1d83a4();
        FUN_10b1b78d0(&ppppuStack_1b0);
        func_0x000107c279a4(&ppppuStack_168);
        if ((cStack_338 == '\x01') &&
           (pppppuVar35 = (ulong *****)CONCAT71(uStack_347,uStack_348),
           pppppuVar20 = (ulong *****)ppppuStack_350, (ulong *****)ppppuStack_350 != pppppuVar35)) {
          for (; uVar9 = pppppuVar20 == pppppuVar35, !(bool)uVar9; pppppuVar20 = pppppuVar20 + 6) {
            pppppuVar16 = pppppuVar20;
            func_0x00010549026c(pppppuVar20);
            pppppuVar17 = pppppuVar20 + 4;
            func_0x000107267f8c();
            FUN_10b1cca18(&ppppuStack_e0,param_1,param_2,pppppuVar16,ppppuVar34,pppppuVar27 + 1,0,
                          (long)*pppppuVar17 * 1000,&uStack_890,0);
            func_0x00010b1ee270();
            if ((bool)uVar9) {
              func_0x00010b1ece38(&uStack_8a8);
            }
            func_0x00010b1ebf30();
          }
        }
        FUN_10b1d8384(&ppppuStack_350);
      }
      FUN_10b1e734c(&ppppuStack_288);
      pppppuVar27 = (ulong *****)ppppuStack_280;
      pppppuVar20 = (ulong *****)ppppuStack_288;
    }
    func_0x00010b1edaa4(auStack_8f0);
    auStack_388[0] = 0;
    uStack_378 = 0;
    func_0x00010b1edc80(&ppppuStack_350);
    ppppuVar34 = (ulong ****)ppppuStack_350[1];
    pppuStack_2f8 = ppppuStack_350[2];
    pppuStack_300 = (ulong ***)ppppuVar34;
    if ((ulong ****)pppuStack_2f8 != (ulong ****)0x0) {
      do {
        func_0x00010b1eaf98();
        ppppuVar34 = extraout_x8_11;
      } while (extraout_w11_01 != 0);
    }
    FUN_10b1fb3c8(&ppppuStack_70,ppppuVar34[2],auStack_8f0);
    pppuStack_238 = (ulong ***)((ulong)pppuStack_238 & 0xffffffffffffff00);
    uStack_200 = 0;
    if (cStack_28 != '\0') {
      uStack_220 = 0;
      if (cStack_48 == '\x01') {
        func_0x00010b1ecb3c();
        uStack_220 = extraout_w8_01;
      }
      uStack_210 = uStack_38;
      uStack_218 = uStack_40;
      uStack_208 = uStack_30;
      uStack_200 = 1;
      FUN_10b1d87d8(&ppppuStack_60);
    }
    ppppuStack_240 = ppppuStack_68;
    ppppuStack_68 = (undefined8 *****)0x0;
    func_0x00010b1d8730(&ppppuStack_1f8,&ppppuStack_240);
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    lStack_2c8 = 0;
    lStack_2d0 = 0;
    func_0x00010b1d8730(&ppppuStack_288,&lStack_2d0);
    ppppuStack_2e0 = (ulong ****)0x0;
    ppppuStack_2f0 = (ulong ****)0x0;
    ppppuStack_2e8 = (ulong ****)0x0;
    FUN_10b1d897c(&ppppuStack_168,&ppppuStack_1f8);
    FUN_10b1d897c(&ppppuStack_1b0,&ppppuStack_288);
    ppppuStack_120 = (ulong ****)&ppppuStack_2f0;
    uStack_118 = 0;
    while ((((bStack_128 & 1) != 0 || ((bStack_170 & 1) != 0)) && (ppppuStack_168 != ppppuStack_1b0)
           )) {
      if ((bStack_128 & 1) == 0) {
        ppppuVar31 = (undefined8 ****)ppppuStack_168[1];
        func_0x00010b1eb9a4(auStack_110);
        func_0x00010b1eb224(auStack_f8);
        func_0x00010b1eb99c(ppppuVar31);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
      }
      ppppuVar34 = ppppuStack_2e8;
      pppppuVar27 = (ulong *****)ppppuStack_2f0;
      if (ppppuStack_2e8 < ppppuStack_2e0) {
        func_0x00010b1ec934();
        if ((char)uStack_148 == '\x01') {
          func_0x00010b1ec278(uStack_150,CONCAT71(uStack_15f,uStack_160));
          func_0x00010b1ee1ec();
          *(undefined1 *)(ppppuVar34 + 3) = 1;
        }
        *(undefined1 *)(ppppuVar34 + 6) = uStack_130;
        ppppuVar34[5] = pppuStack_138;
        ppppuVar34[4] = pppuStack_140;
        pppppuVar27 = (ulong *****)(ppppuVar34 + 7);
      }
      else {
        lVar24 = (long)ppppuStack_2e8 - (long)ppppuStack_2f0;
        uVar29 = lVar24 / 0x38 + 1;
        uVar9 = 0x492492492492491 < uVar29;
        if (0x492492492492492 < uVar29) {
          FUN_10b1d8828();
          goto LAB_10b1cc094;
        }
        func_0x00010b1eb414(((long)ppppuStack_2e0 - (long)ppppuStack_2f0) / 0x38);
        func_0x00010b1ed5cc();
        uVar29 = extraout_x9_03;
        if ((bool)uVar9) {
          uVar29 = 0x492492492492492;
        }
        if (uVar29 == 0) {
          lVar25 = 0;
        }
        else {
          if (0x492492492492492 < uVar29) {
            func_0x000104bd35f4();
            goto LAB_10b1cc094;
          }
          lVar25 = uVar29 * 0x38;
          __Znwm();
        }
        puVar15 = (undefined8 *)(lVar25 + lVar24);
        *(undefined1 *)puVar15 = 0;
        *(undefined1 *)(puVar15 + 3) = 0;
        if ((char)uStack_148 == '\x01') {
          puVar15[1] = uStack_158;
          *puVar15 = CONCAT71(uStack_15f,uStack_160);
          puVar15[2] = uStack_150;
          func_0x00010b1ee1ec();
          *(undefined1 *)(puVar15 + 3) = 1;
        }
        puVar15[5] = pppuStack_138;
        puVar15[4] = pppuStack_140;
        *(undefined1 *)(puVar15 + 6) = uStack_130;
        pppppuVar20 = (ulong *****)(puVar15 + (lVar24 / -0x38) * 7);
        for (lVar24 = 0;
            bVar11 = (ulong *****)((long)pppppuVar27 + lVar24) == (ulong *****)ppppuVar34, !bVar11;
            lVar24 = lVar24 + 0x38) {
          func_0x00010b1ec378();
          lVar24 = extraout_x8_12;
          if (bVar11) {
            func_0x00010b1eb768();
            *(undefined1 *)(extraout_x10_01 + 0x18) = 1;
            lVar24 = extraout_x8_13;
          }
          uVar36 = *(undefined8 *)((long)pppppuVar27 + lVar24 + 0x28);
          uVar30 = *(undefined8 *)((long)pppppuVar27 + lVar24 + 0x20);
          *(undefined1 *)((long)pppppuVar20 + lVar24 + 0x30) =
               *(undefined1 *)((long)pppppuVar27 + lVar24 + 0x30);
          *(undefined8 *)((long)pppppuVar20 + lVar24 + 0x28) = uVar36;
          *(undefined8 *)((long)pppppuVar20 + lVar24 + 0x20) = uVar30;
        }
        for (; pppppuVar27 != (ulong *****)ppppuVar34; pppppuVar27 = pppppuVar27 + 7) {
          func_0x00010b1eddb4();
        }
        pppppuVar27 = (ulong *****)(puVar15 + 7);
        ppppuStack_2e0 = (ulong ****)(lVar25 + uVar29 * 0x38);
        bVar11 = (ulong *****)ppppuStack_2f0 != (ulong *****)0x0;
        ppppuStack_2f0 = (ulong ****)pppppuVar20;
        if (bVar11) {
          ppppuStack_2e8 = (ulong ****)pppppuVar27;
          __ZdlPv();
        }
      }
      ppppuStack_2e8 = (ulong ****)pppppuVar27;
      FUN_10b1d8834(&ppppuStack_168);
    }
    uStack_118 = 1;
    FUN_10b1d8910(&ppppuStack_120);
    func_0x00010b1ebe84(&ppppuStack_1b0);
    FUN_10b1d89e4(&uStack_160);
    func_0x00010b1ebe84(&ppppuStack_288);
    func_0x00010b1ed8b0();
    func_0x00010b1ebe84(&ppppuStack_1f8);
    func_0x00010b1ebe84(&ppppuStack_240);
    ppppuStack_368 = ppppuStack_2e8;
    ppppuStack_370 = ppppuStack_2f0;
    ppppuStack_360 = ppppuStack_2e0;
    ppppuStack_2f0 = (ulong ****)0x0;
    ppppuStack_2e8 = (ulong ****)0x0;
    ppppuStack_2e0 = (ulong ****)0x0;
    cStack_358 = '\x01';
    FUN_10b1d8a04(&ppppuStack_2f0);
    FUN_10b1d8a28(&ppppuStack_70);
    FUN_10b1b7824(&pppuStack_300);
    func_0x00010bccbe4c(&ppppuStack_350);
    func_0x00010bccbdb4(&ppppuStack_350);
    ppppuStack_d8 = (ulong ****)((ulong)ppppuStack_d8 & 0xffffffffffffff00);
    uVar29 = uStack_c0 >> 8;
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
    if (cStack_358 == '\x01') {
      ppppuStack_d0 = ppppuStack_368;
      ppppuStack_d8 = ppppuStack_370;
      ppppuStack_c8 = ppppuStack_360;
      ppppuStack_360 = (ulong ****)0x0;
      ppppuStack_368 = (ulong ****)0x0;
      ppppuStack_370 = (ulong ****)0x0;
      uStack_c0 = CONCAT71((int7)uVar29,1);
    }
    iStack_80 = 0;
    func_0x00010b1ed250();
    ppppuStack_370 = (ulong ****)((ulong)ppppuStack_370 & 0xffffffffffffff00);
    cStack_358 = 0;
    if (iStack_80 == 0) {
      ppppuStack_8d0 = (ulong ****)((ulong)ppppuStack_8d0._1_7_ << 8);
      cStack_8b8 = '\0';
      if ((char)uStack_c0 == '\x01') {
        ppppuStack_8c8 = ppppuStack_d0;
        ppppuStack_8d0 = ppppuStack_d8;
        ppppuStack_8c0 = ppppuStack_c8;
        func_0x00010b1ee19c();
        cStack_8b8 = extraout_w8_02;
      }
    }
    else {
      if (iStack_80 != 1) {
        func_0x00010563ab98();
        goto LAB_10b1cc094;
      }
      ppppuStack_8d0 = (ulong ****)((ulong)ppppuStack_8d0._1_7_ << 8);
      cStack_8b8 = '\0';
    }
    func_0x00010b1ed250();
    func_0x00010b1ecb88();
    FUN_10b1d8aa0();
    FUN_10b1b78d0(auStack_388);
    func_0x00010b1ec510();
    ppppuVar34 = ppppuStack_8c8;
    uVar9 = 0;
    if (cStack_8b8 == '\x01') {
      pppppuVar27 = (ulong *****)(ppppuStack_8d0 + 5);
      while( true ) {
        pppppuVar20 = pppppuVar27 + -5;
        uVar12 = pppppuVar20 == (ulong *****)ppppuVar34;
        uVar9 = 1;
        if ((bool)uVar12) break;
        ppppuStack_e0 = (ulong ****)(ulong)*(uint *)(pppppuVar27 + -1);
        pppppuVar35 = pppppuVar14 + 0xc;
        pppppuVar17 = &ppppuStack_e0;
        FUN_10b1cd0e4();
        if ((pppppuVar35 == (ulong *****)0x0) ||
           (uVar12 = *(int *)((long)pppppuVar17 + 0x54) == 0, *(int *)((long)pppppuVar17 + 0x54) < 1
           )) {
          func_0x00010549026c(pppppuVar20);
          if ((*(byte *)((long)pppppuVar27 + -4) & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_10b1cc094;
          }
          iVar23 = *(int *)(pppppuVar27 + -1);
          pppppuVar35 = pppppuVar14;
          FUN_10b1231f8(pppppuVar14,iVar23);
          pppppuVar17 = pppppuVar27;
          func_0x000107267f8c();
          FUN_10b1cca18(&ppppuStack_e0,param_1,param_2,pppppuVar20,iVar23,pppppuVar35,
                        (long)*pppppuVar17 * 1000,0,&uStack_890,0);
          func_0x00010b1ee270();
          if ((bool)uVar12) {
            func_0x00010b1ece38(&uStack_8a8);
          }
          func_0x00010b1ebf30();
        }
        pppppuVar27 = pppppuVar27 + 7;
      }
    }
    FUN_10b1cd118(param_1,&uStack_8a8,3);
    FUN_10b1cc598(param_1,param_2,pppppuVar13);
    FUN_10b1d8a80(&ppppuStack_8d0);
    func_0x00010b128754(&uStack_8a8);
    FUN_10b1b78fc(&uStack_890);
  }
  else {
    uVar9 = pppppuVar13 == (ulong *****)param_1[0x98];
    if ((long)param_1[0x98] <= (long)pppppuVar13) {
      param_1[0x98] = (ulong ****)(pppppuVar13 + (long)param_1[0x51] * 0x7d);
      goto LAB_10b1caedc;
    }
  }
  bVar22 = 1;
LAB_10b1cc02c:
  func_0x00010b1eadc4();
  if ((bool)uVar9) {
    return bVar22;
  }
  ___stack_chk_fail();
LAB_10b1cc078:
  func_0x000104bd35f4();
LAB_10b1cc094:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10b1cc098);
  (*pcVar7)();
LAB_10b1caa78:
  pppppuVar16 = pppppuVar17 + -4;
  if (pppppuVar16 == pppppuVar20) goto LAB_10b1cad9c;
  if ((pppppuVar17[-3] != (ulong ****)0x0) && (0 < *(int *)((long)pppppuVar17[-3] + 0x4c))) {
    pppppuVar35 = (ulong *****)0x0;
    unaff_x26 = (ulong *****)((lVar24 >> 5) + 1);
    ppppuStack_d8 = (ulong ****)0x0;
    ppppuStack_e0 = (ulong ****)0x0;
    if (lVar24 >> 5 < 3) goto LAB_10b1cad70;
    pppppuVar35 = unaff_x26;
    if ((ulong *****)0x3fffffffffffffe < unaff_x26) {
      pppppuVar35 = (ulong *****)0x3ffffffffffffff;
    }
    if (pppppuVar35 == (ulong *****)0x0) goto LAB_10b1cacbc;
    goto LAB_10b1caca0;
  }
  lVar24 = lVar24 + -0x20;
  pppppuVar17 = pppppuVar16;
  goto LAB_10b1caa78;
  while (pppppuVar35 = (ulong *****)((ulong)pppppuVar35 >> 1), pppppuVar35 != (ulong *****)0x0) {
LAB_10b1caca0:
    lVar24 = (long)pppppuVar35 << 5;
    __ZnwmRKSt9nothrow_t(lVar24,PTR___ZSt7nothrow_1103469d8);
    if (lVar24 != 0) goto LAB_10b1cad54;
  }
LAB_10b1cacbc:
  lVar24 = 0;
LAB_10b1cad54:
  uStack_818 = 0;
  ppppuStack_810 = (ulong ****)pppppuVar35;
  FUN_10b1e7798(&ppppuStack_e0,lVar24);
  ppppuStack_d8 = (ulong ****)pppppuVar35;
  FUN_10b1e7470(&uStack_818);
LAB_10b1cad70:
  FUN_10b1e7490(pppppuVar20,pppppuVar16,unaff_x26,ppppuStack_e0,pppppuVar35);
  FUN_10b1e7470(&ppppuStack_e0);
  pppppuVar35 = (ulong *****)ppppuStack_288;
LAB_10b1cad9c:
  for (; ppppuVar34 = ppppuStack_280, pppppuVar20 = (ulong *****)ppppuStack_288,
      pppppuVar35 != (ulong *****)ppppuStack_280; pppppuVar35 = pppppuVar35 + 1) {
    (*pppppuVar35)[6] = (ulong ***)pppppuVar14;
  }
  FUN_10b1cd2ac(pppppuVar27[0x47],uStack_158,&ppppuStack_288);
  for (; pppppuVar20 != (ulong *****)ppppuVar34; pppppuVar20 = pppppuVar20 + 1) {
    (*pppppuVar20)[6] = (ulong ***)0x0;
  }
  uStack_c0 = 0;
  ppppuStack_c8 = (ulong ****)0x0;
  ppppuStack_d0 = (ulong ****)0x0;
  ppppuStack_d8 = (ulong ****)0x0;
  ppppuStack_e0 = (ulong ****)0x0;
  FUN_10b1be194(&ppppuStack_168,&ppppuStack_e0);
  func_0x00010b1d3e60(&ppppuStack_e0);
  ppppuVar34 = ppppuStack_1f0;
  for (pppppuVar20 = (ulong *****)ppppuStack_1f8; uVar9 = pppppuVar20 == (ulong *****)ppppuVar34,
      !(bool)uVar9; pppppuVar20 = pppppuVar20 + 4) {
    FUN_10b1cca18(&ppppuStack_e0,pppppuVar27,param_2,&ppppuStack_240,*(int *)pppppuVar20,
                  pppppuVar20[1],pppppuVar20[2],pppppuVar20[3],&ppppuStack_600,
                  CONCAT11((char)param_4,1));
    func_0x00010b1ee270();
    if ((bool)uVar9) {
      func_0x00010b1ece38(&lStack_2d0);
    }
    func_0x00010b1ebf30();
  }
  if (((param_4 & 1) == 0) || (uVar9 = *(char *)(pppppuVar27 + 0xc6) == '\x01', !(bool)uVar9)) {
    func_0x00010b1eda7c();
    func_0x00010b1edb5c();
    func_0x00010b1ece7c();
    func_0x00010b1edbb4();
    func_0x00010b1eda10();
    pppppuVar20 = param_2;
LAB_10b1ca3d8:
    func_0x00010b1eca08();
LAB_10b1ca3dc:
    FUN_10b1e77b0(&ppppuStack_350);
    goto LAB_10b1ca374;
  }
  ppppuVar34 = pppppuVar27[0xbe];
  func_0x00010b1eda7c();
  func_0x00010b1edb5c();
  func_0x00010b1ece7c();
  func_0x00010b1edbb4();
  func_0x00010b1eda10();
  pppppuVar20 = param_2;
  if (((ulong)ppppuVar34 & 1) == 0) goto LAB_10b1ca3d8;
  func_0x00010b1eca08();
  bVar11 = true;
LAB_10b1cbf54:
  FUN_10b1d8c84(&uStack_348);
  func_0x00010b1eba88(&ppppuStack_70);
  if ((bVar11) && (ppppuVar34 = pppppuVar27[0x47], ppppuVar34 != (ulong ****)0x0)) {
    func_0x00010b1ec990(&ppppuStack_e0,"phase");
    func_0x00010b1eb654(&ppppuStack_70,&ppppuStack_e0);
    func_0x00010b1eb5b4(ppppuVar34,0xda,&ppppuStack_70);
    func_0x00010b1ecab0();
    func_0x00010b1eb5ac(&ppppuStack_e0);
  }
  uVar9 = lStack_2d0 == lStack_2c8;
  if (!(bool)uVar9) {
    FUN_10b1cd118(pppppuVar27,&lStack_2d0,3);
  }
  bVar22 = bVar11 ^ 1;
  func_0x00010b128754(&lStack_2d0);
  if ((param_4 == 0) || (((ulong)pppppuVar27[0xbe] & 1) == 0)) {
    ppppuVar34 = pppppuVar27[0x51];
    uVar9 = ppppuVar34 == (ulong ****)0x1;
    if (0 < (long)ppppuVar34) {
      uVar9 = pppppuVar13 == (ulong *****)pppppuVar27[0x98];
      if ((long)pppppuVar13 < (long)pppppuVar27[0x98]) goto LAB_10b1cc02c;
      pppppuVar27[0x98] = (ulong ****)(pppppuVar13 + (long)ppppuVar34 * 0x7d);
    }
    func_0x00010b1ed7dc();
    FUN_10b1cc598();
  }
  goto LAB_10b1cc02c;
LAB_10b1ca774:
  while (pppppuVar17 = pppppuVar17 + 1, pppppuVar17 != pppppuVar14) {
    if ((*pppppuVar17)[6] != (ulong ***)0x0) {
      *pppppuVar20 = *pppppuVar17;
      pppppuVar20 = pppppuVar20 + 1;
    }
  }
  uVar9 = pppppuVar20 == pppppuVar14;
  if (!(bool)uVar9) {
    pppppuVar14 = pppppuVar20;
  }
LAB_10b1ca79c:
  pppppuVar20 = (ulong *****)ppppuStack_1f8;
  if (ppppuVar34[6] == (ulong ***)0x0) {
    for (; uVar9 = pppppuVar20 == (ulong *****)ppppuStack_1f0, !(bool)uVar9;
        pppppuVar20 = (ulong *****)((long)pppppuVar20 + 4)) {
      pppppuVar17 = pppppuVar20;
      if (*(int *)pppppuVar20 == iVar23) goto LAB_10b1ca840;
    }
  }
LAB_10b1ca7a4:
  ppppuVar34 = pppppuVar27[0x47];
  FUN_10b12983c(&ppppuStack_e0,iVar23);
  FUN_10b1edaec(pppppuVar35);
  func_0x00010b123dbc(auStack_b8,&UNK_10f731bc3,0xf);
  func_0x00010b1eb930(&ppppuStack_240,&ppppuStack_e0);
  func_0x00010b1eb5b4(ppppuVar34,0xdb,&ppppuStack_240);
  lVar25 = (long)pppppuVar35 + lVar25;
  func_0x00010b1ece9c();
  pppppuVar27 = (ulong *****)0x38;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    func_0x00010b1ee484();
  } while (!(bool)uVar9);
  func_0x00010b1ece40();
  pppppuVar20 = pppppuVar35;
LAB_10b1ca80c:
  lVar24 = lVar24 + 4;
  goto LAB_10b1ca6d4;
LAB_10b1ca840:
  while (pppppuVar20 = (ulong *****)((long)pppppuVar20 + 4),
        pppppuVar20 != (ulong *****)ppppuStack_1f0) {
    if (*(int *)pppppuVar20 != iVar23) {
      *(int *)pppppuVar17 = *(int *)pppppuVar20;
      pppppuVar17 = (ulong *****)((long)pppppuVar17 + 4);
    }
  }
  uVar9 = pppppuVar17 == (ulong *****)ppppuStack_1f0;
  if (!(bool)uVar9) {
    uVar9 = true;
    ppppuStack_1f0 = (ulong ****)pppppuVar17;
  }
  goto LAB_10b1ca7a4;
}



/* Entry: 10b1cc598; end: 10b1cca17;  */

/* WARNING: Type propagation algorithm not settling */

ulong *****
FUN_10b1cc598(long param_1,ulong *****param_2,ulong *****param_3,ulong *****param_4,
             undefined8 param_5,long param_6,ulong *****param_7,long param_8)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined1 in_ZR;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 *****pppppuVar9;
  char *pcVar10;
  ulong *****pppppuVar11;
  ulong *****pppppuVar12;
  ulong *****pppppuVar13;
  char extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *****extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong *****pppppuVar14;
  undefined8 *****extraout_x9;
  ulong ****ppppuVar15;
  int extraout_w11;
  undefined8 *****extraout_x11;
  ulong uVar16;
  ulong uVar17;
  ulong *****pppppuVar18;
  undefined8 uVar19;
  long *plVar20;
  ulong *****pppppuVar21;
  ulong *****pppppuVar22;
  long lVar23;
  ulong uVar24;
  bool bVar25;
  uint6 uVar26;
  byte bVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  byte bVar31;
  ulong ****ppppuStack_458;
  undefined8 uStack_450;
  undefined1 uStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 uStack_420;
  long lStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  ulong ****appppuStack_400 [3];
  undefined8 uStack_3e8;
  undefined1 uStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  ulong ****ppppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined8 ****ppppuStack_3b0;
  undefined8 *puStack_3a8;
  undefined1 auStack_398 [40];
  undefined8 uStack_370;
  long *plStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  ulong ****appppuStack_2e0 [4];
  ulong *****pppppuStack_2c0;
  ulong *****pppppuStack_2b8;
  undefined8 ****ppppuStack_2b0;
  char cStack_2a8;
  ulong *****apppppuStack_2a0 [2];
  undefined1 uStack_290;
  long alStack_288 [10];
  long lStack_238;
  long lStack_230;
  undefined1 auStack_228 [296];
  ulong ****ppppuStack_100;
  undefined8 *****pppppuStack_f8;
  undefined8 uStack_f0;
  undefined8 *****pppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 ****ppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  int iStack_50;
  undefined8 uStack_48;
  
  func_0x00010b1eaf40();
  uStack_48 = extraout_x8;
  func_0x00010b1ecbf8();
  func_0x00010b1ebbd4(*(undefined1 *)((long)param_2 + 0x17));
  if ((extraout_x8_00 != 0) &&
     (in_ZR = *(long *)(param_1 + 0x520) == 1, 0 < *(long *)(param_1 + 0x520))) {
    func_0x00010b1ec874();
    func_0x000107c27f70(appppuStack_2e0);
    apppppuStack_2a0[0] = (ulong *****)((ulong)apppppuStack_2a0[0] & 0xffffffffffffff00);
    uStack_290 = 0;
    func_0x00010bccbc98(alStack_288,param_1 + 0x80,&UNK_10f738542,0x3f);
    lVar23 = *(long *)(alStack_288[0] + 8);
    lStack_230 = *(long *)(alStack_288[0] + 0x10);
    lStack_238 = lVar23;
    if (lStack_230 != 0) {
      do {
        func_0x00010b1eaf98();
        lVar23 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    param_4 = appppuStack_2e0;
    FUN_10b1fb758(auStack_228,*(undefined8 *)(lVar23 + 0x10));
    FUN_10b1d3ecc(&ppppuStack_100,auStack_228);
    pppppuStack_d8 = pppppuStack_f8;
    pppppuStack_e0 = (undefined8 *****)ppppuStack_100;
    uStack_d0 = uStack_f0;
    pppppuStack_f8 = (undefined8 *****)0x0;
    uStack_f0 = 0;
    ppppuStack_100 = (ulong ****)0x0;
    uStack_c8 = 1;
    FUN_10b1d8ae4(&ppppuStack_100);
    FUN_10b1d4718(auStack_228);
    FUN_10b1b7824(&lStack_238);
    func_0x00010bccbe4c(alStack_288);
    func_0x00010bccbdb4(alStack_288);
    param_2 = (ulong *****)&pppppuStack_e0;
    FUN_10b1d4780(&ppppuStack_b0);
    func_0x00010b1ece84();
    if (iStack_50 == 1) {
      func_0x00010b1d47e4(&ppppuStack_b0);
      pppppuStack_e0 = (undefined8 *****)((ulong)pppppuStack_e0 & 0xffffffffffffff00);
      uStack_c8 = 0;
      if (iStack_50 != 1) goto LAB_10b1cc6f4;
      pppppuVar9 = &pppppuStack_2c0;
      param_2 = (ulong *****)&pppppuStack_e0;
      FUN_10b1d481c();
    }
    else {
      pppppuStack_e0 = (undefined8 *****)((ulong)pppppuStack_e0 & 0xffffffffffffff00);
LAB_10b1cc6f4:
      uStack_c8 = 0;
      pppppuVar9 = &ppppuStack_b0;
      func_0x00010b1d4800();
      func_0x00010b1ed710();
      if (*(char *)(pppppuVar9 + 3) == '\x01') {
        pppppuStack_2b8 = (ulong *****)pppppuVar9[1];
        pppppuStack_2c0 = (ulong *****)*pppppuVar9;
        ppppuStack_2b0 = pppppuVar9[2];
        func_0x00010b1eb5fc();
        cStack_2a8 = extraout_w8;
      }
    }
    func_0x00010b1ece84();
    func_0x00010b1ebfa4(&ppppuStack_b0);
    func_0x00010b1ebcc4();
    func_0x00010b1ebf8c();
    in_ZR = 0;
    if ((cStack_2a8 == '\x01') && (in_ZR = pppppuStack_2c0 == pppppuStack_2b8, !(bool)in_ZR)) {
      uStack_a8 = 0;
      ppppuStack_b0 = (undefined8 ****)0x0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_90 = 0x3f800000;
      lVar23 = CONCAT62(uStack_2f8._2_6_,CONCAT11(uStack_2f8._1_1_,(char)uStack_2f8));
      while( true ) {
        pppppuVar21 = pppppuStack_2b8;
        cVar5 = SBORROW8(lVar23,lStack_2f0);
        cVar6 = lVar23 - lStack_2f0 < 0;
        if (lVar23 == lStack_2f0) break;
        func_0x00010b1eb6f8();
        func_0x000107260010();
        if ((int)pppppuVar9 != 0) {
          func_0x00010549026c(lVar23 + 0x20);
          func_0x00010b1ed86c();
          pppppuStack_d8 = extraout_x11;
          if (cVar6 == cVar5) {
            pppppuStack_d8 = extraout_x8_02;
          }
          pppppuVar9 = &ppppuStack_b0;
          param_2 = (ulong *****)&pppppuStack_e0;
          pppppuStack_e0 = extraout_x9;
          func_0x0001086a32c8();
        }
        lVar23 = lVar23 + 0x110;
      }
      apppppuStack_2a0[0] = (ulong *****)0x0;
      pppppuStack_e0 = &ppppuStack_b0;
      pppppuStack_d8 = apppppuStack_2a0;
      for (pppppuVar13 = pppppuStack_2c0; pppppuVar12 = pppppuVar21, pppppuVar13 != pppppuVar21;
          pppppuVar13 = pppppuVar13 + 0x22) {
        iVar8 = (int)&pppppuStack_e0;
        param_2 = pppppuVar13;
        FUN_10b1d7ca4();
        pppppuVar12 = pppppuVar13;
        if (iVar8 != 0) goto LAB_10b1cc7e0;
      }
      goto LAB_10b1cc810;
    }
    goto LAB_10b1cc8dc;
  }
  goto LAB_10b1cc8f0;
code_r0x00010b1ccd30:
  pppppuVar13 = pppppuVar13 + 0x11;
  goto LAB_10b1ccd1c;
LAB_10b1cc7e0:
  while (pppppuVar13 = pppppuVar13 + 0x22, pppppuVar13 != pppppuVar21) {
    uVar24 = 0;
    param_2 = pppppuVar13;
    FUN_10b1d7ca4();
    if ((uVar24 & 1) == 0) {
      func_0x00010b1ebdc8();
      FUN_10b1d416c();
      pppppuVar12 = pppppuVar12 + 0x22;
    }
  }
LAB_10b1cc810:
  if (pppppuVar12 != pppppuStack_2b8) {
    FUN_10b1d45f8(&pppppuStack_2c0);
    param_2 = pppppuVar12;
    pppppuVar12 = pppppuStack_2b8;
  }
  in_ZR = pppppuStack_2c0 == pppppuVar12;
  if (!(bool)in_ZR) {
    uVar19 = *(undefined8 *)(param_1 + 0x238);
    func_0x00010b1ec188(&pppppuStack_e0);
    func_0x00010b1eb654(appppuStack_2e0,&pppppuStack_e0);
    FUN_10b114b00(uVar19,0x9c,appppuStack_2e0,
                  ((long)pppppuStack_2b8 - (long)pppppuStack_2c0) / 0x110);
    func_0x00010b1eddbc();
    func_0x00010b1eb5ac(&pppppuStack_e0);
    uVar19 = *(undefined8 *)(param_1 + 0x238);
    func_0x00010b1ec188(&pppppuStack_e0);
    func_0x00010b1eb654(appppuStack_2e0,&pppppuStack_e0);
    param_2 = (ulong *****)0x9b;
    param_4 = apppppuStack_2a0[0];
    FUN_10b114b00(uVar19,0x9b,appppuStack_2e0);
    func_0x00010b1eddbc();
    func_0x00010b1eb5ac(&pppppuStack_e0);
    pppppuVar13 = pppppuStack_2b8;
    for (pppppuVar21 = pppppuStack_2c0; in_ZR = pppppuVar21 == pppppuVar13, !(bool)in_ZR;
        pppppuVar21 = pppppuVar21 + 0x22) {
      param_2 = pppppuVar21;
      FUN_10b1d41d0(&uStack_2f8);
    }
  }
  func_0x0001086af8b0(&ppppuStack_b0);
LAB_10b1cc8dc:
  FUN_10b1d48fc(&pppppuStack_2c0);
  func_0x00010b1eb918();
  param_3 = (ulong *****)0x3;
  FUN_10b1cd178();
LAB_10b1cc8f0:
  pppppuVar21 = (ulong *****)&uStack_2f8;
  FUN_10b1d8ae4();
  func_0x00010b1eaddc(uStack_48);
  if ((bool)in_ZR) {
    return pppppuVar21;
  }
  ___stack_chk_fail();
  func_0x00010b1eddbc();
  func_0x00010b1eb5ac(&pppppuStack_e0);
  func_0x0001086af8b0(&ppppuStack_b0);
  FUN_10b1d48fc(&pppppuStack_2c0);
  pcVar10 = (char *)&uStack_2f8;
  FUN_10b1d8ae4();
  func_0x00010b1eb994();
  pppppuVar12 = param_3;
  pppppuVar18 = param_4;
  func_0x00010b1eaf40();
  pppppuVar13 = (ulong *****)pppppuVar12[1];
  pppppuVar21 = param_2;
  uStack_370 = extraout_x8_03;
  FUN_10b1cd5c8(param_2,pppppuVar13,*(undefined1 *)((long)pppppuVar12 + 0x17),pppppuVar18[1],
                *(undefined1 *)((long)param_4 + 0x17),3);
  if (((ulong)pppppuVar21 & 1) == 0) {
    *pcVar10 = '\0';
    pcVar10[0x48] = '\0';
    goto LAB_10b1cccc8;
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  if ((param_6 != 0) && (0 < (int)*(uint *)(param_6 + 0x4c))) {
    uVar7 = param_8 == 1;
    if (param_8 < 1) {
      ppppuVar15 = param_2[0x47];
      FUN_10b12983c(&ppppuStack_3c0,param_5);
      func_0x00010b1ebd14();
      func_0x00010b1eb884(auStack_398);
      pppppuVar13 = &ppppuStack_3c0;
      func_0x00010b1eb930(&uStack_3e8);
      func_0x00010b1eb040(ppppuVar15);
      FUN_10b120998(&uStack_3e8);
      do {
        func_0x00010b1ecb08();
        func_0x00010b1ec838();
      } while (!(bool)uVar7);
      param_7 = pppppuVar21 + -0x1e848;
    }
    else {
      param_7 = (ulong *****)(param_8 + (ulong)*(uint *)(param_6 + 0x4c) * 1000000);
    }
  }
  pppppuVar18 = (ulong *****)plStack_300[1];
  pppppuVar12 = pppppuVar21;
  if ((pppppuVar18 == (ulong *****)0x0) ||
     (pppppuVar11 = (ulong *****)(plStack_300 + 3), pppppuVar12 = pppppuVar11,
     *pppppuVar11 == (ulong ****)0x0)) {
    lVar23 = 0;
  }
  else {
    func_0x000107c278c4();
    uVar24 = (long)pppppuVar18 - 1;
    if (((ulong)pppppuVar18 & uVar24) == 0) {
      pppppuVar22 = (ulong *****)((ulong)pppppuVar11 & uVar24);
    }
    else {
      pppppuVar22 = pppppuVar11;
      if (pppppuVar18 <= pppppuVar11) {
        uVar16 = 0;
        if (pppppuVar18 != (ulong *****)0x0) {
          uVar16 = (ulong)pppppuVar11 / (ulong)pppppuVar18;
        }
        pppppuVar22 = (ulong *****)((long)pppppuVar11 - uVar16 * (long)pppppuVar18);
      }
    }
    plVar20 = *(long **)(*plStack_300 + (long)pppppuVar22 * 8);
    pppppuVar12 = pppppuVar11;
    pppppuVar13 = param_4;
    if (plVar20 != (long *)0x0) {
      do {
        while( true ) {
          plVar20 = (long *)*plVar20;
          pppppuVar13 = param_4;
          if (plVar20 == (long *)0x0) goto LAB_10b1ccbe0;
          pppppuVar14 = (ulong *****)plVar20[1];
          if (pppppuVar11 != pppppuVar14) break;
          func_0x00010b1ed968();
          if ((int)pppppuVar12 != 0) {
            lVar23 = plVar20[5];
            pppppuVar13 = param_4;
            goto LAB_10b1ccbe8;
          }
        }
        if (((ulong)pppppuVar18 & uVar24) == 0) {
          pppppuVar14 = (ulong *****)((ulong)pppppuVar14 & uVar24);
        }
        else if (pppppuVar18 <= pppppuVar14) {
          uVar16 = 0;
          if (pppppuVar18 != (ulong *****)0x0) {
            uVar16 = (ulong)pppppuVar14 / (ulong)pppppuVar18;
          }
          pppppuVar14 = (ulong *****)((long)pppppuVar14 - uVar16 * (long)pppppuVar18);
        }
      } while (pppppuVar14 == pppppuVar22);
    }
LAB_10b1ccbe0:
    lVar23 = 0;
  }
LAB_10b1ccbe8:
  if (param_6 == 0) {
    in_ZR = 0 < (long)param_7 && param_7 == pppppuVar21;
    if (0 >= (long)param_7 || (long)pppppuVar21 <= (long)param_7) goto LAB_10b1ccc7c;
    bVar25 = false;
  }
  else {
    uVar2 = *(uint *)(param_6 + 0x30);
    if (((int)uVar2 < 1) || (*(char *)(param_6 + 0x55) != '\x01')) {
      bVar25 = false;
    }
    else {
      pppppuVar18 = param_7;
      if ((60000000 < lVar23 - param_8) &&
         (pppppuVar18 = (ulong *****)(lVar23 + (ulong)uVar2 * 1000000),
         (long)param_7 <= (long)pppppuVar18)) {
        pppppuVar18 = param_7;
      }
      bVar25 = true;
      param_7 = pppppuVar18;
    }
    in_ZR = (long)param_7 >= 1 && param_7 == pppppuVar21;
    if ((long)param_7 < 1 || (long)pppppuVar21 <= (long)param_7) {
LAB_10b1ccc7c:
      func_0x00010b1eb4c4();
      pppppuVar21 = pppppuVar12;
      goto LAB_10b1cccc8;
    }
    pppppuVar18 = (ulong *****)(lVar23 + (ulong)uVar2 * 1000000);
    in_ZR = (int)uVar2 < 1 || pppppuVar18 == pppppuVar21;
    if ((int)uVar2 >= 1 && (long)pppppuVar21 < (long)pppppuVar18) {
      func_0x00010b1eb4c4();
      pppppuVar21 = pppppuVar12;
      goto LAB_10b1cccc8;
    }
  }
  pppppuVar12 = param_2;
  func_0x00010b1ec6a0(&uStack_3e8);
  func_0x00010b1eb674();
  lVar4 = lStack_3d8;
  if (((lStack_3d8 == 0) || (in_ZR = *(char *)(lStack_3d8 + 0x40) == '\x01', !(bool)in_ZR)) ||
     (in_ZR = *(long *)(lStack_3d8 + 0x38) == 0, 0 < *(long *)(lStack_3d8 + 0x38))) {
LAB_10b1cccc0:
    func_0x00010b1eb4c4();
    param_3 = pppppuVar13;
  }
  else {
    if ((param_6 != 0) && (lVar23 < *(long *)(lStack_3d8 + 0x60))) {
      pppppuVar18 = (ulong *****)
                    (*(long *)(lStack_3d8 + 0x60) + (ulong)*(uint *)(param_6 + 0x30) * 1000000);
      bVar1 = (int)*(uint *)(param_6 + 0x30) < 1;
      in_ZR = bVar1 || pppppuVar18 == pppppuVar21;
      if ((!bVar1 && pppppuVar18 != pppppuVar21) &&
          (bVar1 || (long)pppppuVar21 <= (long)pppppuVar18)) goto LAB_10b1cccc0;
    }
    pppppuVar12 = *(ulong ******)(lStack_3d8 + 0x48);
    pppppuVar18 = *(ulong ******)(lStack_3d8 + 0x50);
    pppppuVar13 = pppppuVar12;
LAB_10b1ccd1c:
    in_ZR = pppppuVar13 == pppppuVar18;
    if (!(bool)in_ZR) {
      in_ZR = *(int *)pppppuVar13 == (int)param_5;
      if (!(bool)in_ZR) goto code_r0x00010b1ccd30;
      if ((bVar25) ||
         (in_ZR = (ulong *****)pppppuVar13[5] == pppppuVar21,
         (long)pppppuVar13[5] <= (long)pppppuVar21)) {
        pppppuVar13[6] = (ulong ****)pppppuVar21;
        FUN_10b1bf2b0();
        if (pppppuVar12 == (ulong *****)0x0) {
          if ((char)uStack_2f8 == '\0') {
            appppuStack_400[0] = (ulong ****)0x0;
            ppppuStack_3c0 = (ulong ****)0x10b1e7830;
            ppuStack_3b8 = &PTR_FUN_110cc45e8;
            ppppuStack_3b0 = appppuStack_400;
            puStack_3a8 = &uStack_3e8;
            uStack_450 = uStack_3e8;
            uStack_448 = uStack_3e0;
            uStack_3e8 = 0;
            uStack_3e0 = 0;
            lStack_440 = lVar4;
            uStack_430 = uStack_3c8;
            uStack_438 = uStack_3d0;
            uStack_3d0 = 0;
            uStack_3c8 = 0;
            func_0x00010b1ebe44(pcVar10,param_2,param_3,&uStack_450,3);
            func_0x00010b1ebe64();
            func_0x00010b1ec6a0(&ppppuStack_458,param_2);
            FUN_10b1be290();
            param_3 = &ppppuStack_458;
            FUN_10b1c76a8(appppuStack_400);
            func_0x00010b1ec230();
            func_0x000107c281f0(&ppppuStack_3c0);
            pppppuVar12 = appppuStack_400;
            func_0x000107c29c20();
            goto LAB_10b1cccc4;
          }
          func_0x00010b1ec6a0(param_2);
          FUN_10b1be404();
          if (((uStack_2f8._1_1_ != '\0') &&
              (in_ZR = *(char *)(param_2 + 0xc6) == '\x01', (bool)in_ZR)) &&
             (func_0x00010b1ee12c(param_2 + 0xbe), (bool)in_ZR)) {
            func_0x00010b1ed818();
            pppppuVar12 = &ppppuStack_3c0;
            func_0x00010b1eb884();
            func_0x00010b1eb514();
            func_0x00010b1eb24c();
            param_3 = pppppuVar18;
            goto LAB_10b1ccf98;
          }
          uStack_428 = uStack_3e8;
          uStack_420 = uStack_3e0;
          uStack_3e8 = 0;
          uStack_3e0 = 0;
          uStack_410 = uStack_3d0;
          lStack_418 = lStack_3d8;
          uStack_408 = uStack_3c8;
          uStack_3d0 = 0;
          uStack_3c8 = 0;
          func_0x00010b1ebe44(pcVar10,param_2,param_3,&uStack_428,3);
          func_0x00010b1ecf14();
          in_ZR = pcVar10[0x48] == '\x01';
          if ((bool)in_ZR) {
            func_0x00010b1ed818();
            pppppuVar12 = &ppppuStack_3c0;
            func_0x00010b1eb884();
            func_0x00010b1eb514();
            func_0x00010b1eb24c();
            func_0x00010b1ec724();
            func_0x00010b1eb5ac(&ppppuStack_3c0);
            goto LAB_10b1cccc4;
          }
          func_0x00010b1edd44();
          func_0x00010b1ed818();
          pppppuVar12 = &ppppuStack_3c0;
          func_0x00010b1eb884();
          func_0x00010b1eb514();
          func_0x00010b1eb24c();
          goto LAB_10b1ccf98;
        }
        pppppuVar21 = (ulong *****)param_2[0x47];
        FUN_10b12983c(&ppppuStack_3c0,param_5);
        func_0x00010b20b440(*(int *)pppppuVar12);
        func_0x00010b1ec990(auStack_398,"other");
        func_0x00010b1eb930(appppuStack_400,&ppppuStack_3c0);
        param_3 = (ulong *****)0xb8;
        func_0x00010b1eb5b4(pppppuVar21,0xb8,appppuStack_400);
        func_0x00010b1ec724();
        do {
          func_0x00010b1ecb08();
          func_0x00010b1ec838();
        } while (!(bool)in_ZR);
        pppppuVar12 = pppppuVar21;
        if ((char)uStack_2f8 != '\0') {
          func_0x00010b1ed818();
          pppppuVar12 = &ppppuStack_3c0;
          func_0x00010b1eb884();
          func_0x00010b1eb514();
          func_0x00010b1eb24c();
LAB_10b1ccf98:
          func_0x00010b1ec724();
          func_0x00010b1eb5ac(&ppppuStack_3c0);
        }
        *pcVar10 = '\0';
        pcVar10[0x48] = '\0';
        goto LAB_10b1cccc4;
      }
    }
    func_0x00010b1eb4c4();
    param_3 = pppppuVar18;
  }
LAB_10b1cccc4:
  func_0x00010b1edfa8();
  pppppuVar21 = pppppuVar12;
  pppppuVar13 = param_3;
LAB_10b1cccc8:
  func_0x00010b1eaddc(uStack_370);
  if ((bool)in_ZR) {
    return pppppuVar21;
  }
  ___stack_chk_fail();
  func_0x00010b1ec724();
  func_0x00010b1eb5ac(&ppppuStack_3c0);
  func_0x00010b1edfa8();
  func_0x00010b1eb598();
  func_0x00010b1eb63c();
  Hint_Prefetch(*pppppuVar21,0,2,0);
  pppppuVar12 = pppppuVar13;
  func_0x00010b1e741c(*pppppuVar21);
  pppppuVar21 = pppppuVar13;
  func_0x00010b1ebdbc();
  lVar23 = 0;
  ppppuVar15 = *pppppuVar13;
  uVar24 = (ulong)ppppuVar15 >> 0xc ^ (ulong)pppppuVar21 >> 7;
  bVar3 = (byte)pppppuVar21;
  uVar26 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar24 = uVar24 & (ulong)pppppuVar13[2];
    uVar19 = *(undefined8 *)((long)ppppuVar15 + uVar24);
    cVar6 = (char)((ulong)uVar19 >> 8);
    cVar5 = (char)((ulong)uVar19 >> 0x10);
    cVar28 = (char)((ulong)uVar19 >> 0x18);
    cVar29 = (char)((ulong)uVar19 >> 0x20);
    cVar30 = (char)((ulong)uVar19 >> 0x28);
    bVar27 = (byte)((ulong)uVar19 >> 0x30);
    bVar31 = (byte)((ulong)uVar19 >> 0x38);
    for (uVar16 = CONCAT17(-(bVar31 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar27 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar30 == (char)(uVar26 >> 0x28)),
                                             CONCAT14(-(cVar29 == (char)(uVar26 >> 0x20)),
                                                      CONCAT13(-(cVar28 == (char)(uVar26 >> 0x18)),
                                                               CONCAT12(-(cVar5 == (char)(uVar26 >>
                                                                                         0x10)),
                                                                        CONCAT11(-(cVar6 == (char)(
                                                  uVar26 >> 8)),-((char)uVar19 == (char)uVar26))))))
                                   )) & 0x8080808080808080; uVar16 != 0;
        uVar16 = uVar16 - 1 & uVar16) {
      uVar17 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar24 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3) &
               (ulong)pppppuVar13[2];
      if (*(int *)(pppppuVar13[1] + uVar17 * 0xd) == *(int *)pppppuVar12 &&
          *(int *)((long)(pppppuVar13[1] + uVar17 * 0xd) + 4) == *(int *)((long)pppppuVar12 + 4)) {
        return (ulong *****)((long)ppppuVar15 + uVar17);
      }
    }
    bVar27 = NEON_umaxv(CONCAT17(-(bVar31 == 0x80),
                                 CONCAT16(-(bVar27 == 0x80),
                                          CONCAT15(-(cVar30 == -0x80),
                                                   CONCAT14(-(cVar29 == -0x80),
                                                            CONCAT13(-(cVar28 == -0x80),
                                                                     CONCAT12(-(cVar5 == -0x80),
                                                                              CONCAT11(-(cVar6 == 
                                                  -0x80),-((char)uVar19 == -0x80)))))))),1);
    if ((bVar27 & 1) != 0) break;
    lVar23 = lVar23 + 8;
    uVar24 = lVar23 + uVar24;
  }
  return (ulong *****)0x0;
}



/* Entry: 10b1cca18; end: 10b1cd0e3;  */

ulong * FUN_10b1cca18(undefined1 *param_1,ulong *param_2,ulong *param_3,ulong *param_4,
                     undefined8 param_5,long param_6,ulong *param_7,long param_8,long *param_9,
                     undefined4 param_10)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  int *piVar9;
  undefined8 extraout_x8;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  long *plVar15;
  ulong *puVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  bool bVar20;
  uint6 uVar21;
  byte bVar22;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined8 uVar23;
  byte bVar29;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong auStack_100 [3];
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined **ppuStack_b8;
  ulong *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  
  puVar7 = param_3;
  puVar14 = param_4;
  func_0x00010b1eaf40();
  puVar8 = (ulong *)puVar7[1];
  puVar16 = param_2;
  uStack_70 = extraout_x8;
  FUN_10b1cd5c8(param_2,puVar8,*(undefined1 *)((long)puVar7 + 0x17),puVar14[1],
                *(undefined1 *)((long)param_4 + 0x17),3);
  if (((ulong)puVar16 & 1) == 0) {
    *param_1 = 0;
    param_1[0x48] = 0;
    goto LAB_10b1cccc8;
  }
  __ZNSt3__16chrono12system_clock3nowEv();
  if ((param_6 != 0) && (0 < (int)*(uint *)(param_6 + 0x4c))) {
    uVar5 = param_8 == 1;
    if (param_8 < 1) {
      uVar19 = param_2[0x47];
      FUN_10b12983c(&uStack_c0,param_5);
      func_0x00010b1ebd14();
      func_0x00010b1eb884(auStack_98);
      puVar8 = &uStack_c0;
      func_0x00010b1eb930(&uStack_e8);
      func_0x00010b1eb040(uVar19);
      FUN_10b120998(&uStack_e8);
      do {
        func_0x00010b1ecb08();
        func_0x00010b1ec838();
      } while (!(bool)uVar5);
      param_7 = puVar16 + -0x1e848;
    }
    else {
      param_7 = (ulong *)(param_8 + (ulong)*(uint *)(param_6 + 0x4c) * 1000000);
    }
  }
  puVar14 = (ulong *)param_9[1];
  puVar7 = puVar16;
  if ((puVar14 == (ulong *)0x0) || (puVar6 = (ulong *)(param_9 + 3), puVar7 = puVar6, *puVar6 == 0))
  {
    lVar18 = 0;
  }
  else {
    func_0x000107c278c4();
    uVar19 = (long)puVar14 - 1;
    if (((ulong)puVar14 & uVar19) == 0) {
      puVar17 = (ulong *)((ulong)puVar6 & uVar19);
    }
    else {
      puVar17 = puVar6;
      if (puVar14 <= puVar6) {
        uVar11 = 0;
        if (puVar14 != (ulong *)0x0) {
          uVar11 = (ulong)puVar6 / (ulong)puVar14;
        }
        puVar17 = (ulong *)((long)puVar6 - uVar11 * (long)puVar14);
      }
    }
    plVar15 = *(long **)(*param_9 + (long)puVar17 * 8);
    puVar7 = puVar6;
    puVar8 = param_4;
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          puVar8 = param_4;
          if (plVar15 == (long *)0x0) goto LAB_10b1ccbe0;
          puVar10 = (ulong *)plVar15[1];
          if (puVar6 != puVar10) break;
          func_0x00010b1ed968();
          if ((int)puVar7 != 0) {
            lVar18 = plVar15[5];
            puVar8 = param_4;
            goto LAB_10b1ccbe8;
          }
        }
        if (((ulong)puVar14 & uVar19) == 0) {
          puVar10 = (ulong *)((ulong)puVar10 & uVar19);
        }
        else if (puVar14 <= puVar10) {
          uVar11 = 0;
          if (puVar14 != (ulong *)0x0) {
            uVar11 = (ulong)puVar10 / (ulong)puVar14;
          }
          puVar10 = (ulong *)((long)puVar10 - uVar11 * (long)puVar14);
        }
      } while (puVar10 == puVar17);
    }
LAB_10b1ccbe0:
    lVar18 = 0;
  }
LAB_10b1ccbe8:
  if (param_6 == 0) {
    in_ZR = 0 < (long)param_7 && param_7 == puVar16;
    if (0 >= (long)param_7 || (long)puVar16 <= (long)param_7) goto LAB_10b1ccc7c;
    bVar20 = false;
  }
  else {
    uVar2 = *(uint *)(param_6 + 0x30);
    if (((int)uVar2 < 1) || (*(char *)(param_6 + 0x55) != '\x01')) {
      bVar20 = false;
    }
    else {
      puVar14 = param_7;
      if ((60000000 < lVar18 - param_8) &&
         (puVar14 = (ulong *)(lVar18 + (ulong)uVar2 * 1000000), (long)param_7 <= (long)puVar14)) {
        puVar14 = param_7;
      }
      bVar20 = true;
      param_7 = puVar14;
    }
    in_ZR = (long)param_7 >= 1 && param_7 == puVar16;
    if ((long)param_7 < 1 || (long)puVar16 <= (long)param_7) {
LAB_10b1ccc7c:
      func_0x00010b1eb4c4();
      puVar16 = puVar7;
      goto LAB_10b1cccc8;
    }
    puVar14 = (ulong *)(lVar18 + (ulong)uVar2 * 1000000);
    in_ZR = (int)uVar2 < 1 || puVar14 == puVar16;
    if ((int)uVar2 >= 1 && (long)puVar16 < (long)puVar14) {
      func_0x00010b1eb4c4();
      puVar16 = puVar7;
      goto LAB_10b1cccc8;
    }
  }
  puVar7 = param_2;
  func_0x00010b1ec6a0(&uStack_e8);
  func_0x00010b1eb674();
  lVar4 = lStack_d8;
  if (((lStack_d8 == 0) || (in_ZR = *(char *)(lStack_d8 + 0x40) == '\x01', !(bool)in_ZR)) ||
     (in_ZR = *(long *)(lStack_d8 + 0x38) == 0, 0 < *(long *)(lStack_d8 + 0x38))) {
LAB_10b1cccc0:
    func_0x00010b1eb4c4();
    param_3 = puVar8;
  }
  else {
    if ((param_6 != 0) && (lVar18 < *(long *)(lStack_d8 + 0x60))) {
      puVar14 = (ulong *)(*(long *)(lStack_d8 + 0x60) + (ulong)*(uint *)(param_6 + 0x30) * 1000000);
      bVar1 = (int)*(uint *)(param_6 + 0x30) < 1;
      in_ZR = bVar1 || puVar14 == puVar16;
      if ((!bVar1 && puVar14 != puVar16) && (bVar1 || (long)puVar16 <= (long)puVar14))
      goto LAB_10b1cccc0;
    }
    puVar7 = *(ulong **)(lStack_d8 + 0x48);
    puVar14 = *(ulong **)(lStack_d8 + 0x50);
    puVar8 = puVar7;
LAB_10b1ccd1c:
    in_ZR = puVar8 == puVar14;
    if (!(bool)in_ZR) {
      in_ZR = (int)*puVar8 == (int)param_5;
      if (!(bool)in_ZR) goto code_r0x00010b1ccd30;
      if ((bVar20) || (in_ZR = (ulong *)puVar8[5] == puVar16, (long)puVar8[5] <= (long)puVar16)) {
        puVar8[6] = (ulong)puVar16;
        FUN_10b1bf2b0();
        if (puVar7 != (ulong *)0x0) {
          puVar16 = (ulong *)param_2[0x47];
          FUN_10b12983c(&uStack_c0,param_5);
          func_0x00010b20b440((int)*puVar7);
          func_0x00010b1ec990(auStack_98,"other");
          func_0x00010b1eb930(auStack_100,&uStack_c0);
          param_3 = (ulong *)0xb8;
          func_0x00010b1eb5b4(puVar16,0xb8,auStack_100);
          func_0x00010b1ec724();
          do {
            func_0x00010b1ecb08();
            func_0x00010b1ec838();
          } while (!(bool)in_ZR);
          puVar7 = puVar16;
          if ((char)param_10 != '\0') {
            func_0x00010b1ed818();
            puVar7 = &uStack_c0;
            func_0x00010b1eb884();
            func_0x00010b1eb514();
            func_0x00010b1eb24c();
LAB_10b1ccf98:
            func_0x00010b1ec724();
            func_0x00010b1eb5ac(&uStack_c0);
          }
          *param_1 = 0;
          param_1[0x48] = 0;
          goto LAB_10b1cccc4;
        }
        if ((char)param_10 == '\0') {
          auStack_100[0] = 0;
          uStack_c0 = 0x10b1e7830;
          ppuStack_b8 = &PTR_FUN_110cc45e8;
          puStack_b0 = auStack_100;
          puStack_a8 = &uStack_e8;
          uStack_150 = uStack_e8;
          uStack_148 = uStack_e0;
          uStack_e8 = 0;
          uStack_e0 = 0;
          lStack_140 = lVar4;
          uStack_130 = uStack_c8;
          uStack_138 = uStack_d0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          func_0x00010b1ebe44(param_1,param_2,param_3,&uStack_150,3);
          func_0x00010b1ebe64();
          func_0x00010b1ec6a0(&uStack_158,param_2);
          FUN_10b1be290();
          param_3 = &uStack_158;
          FUN_10b1c76a8(auStack_100);
          func_0x00010b1ec230();
          func_0x000107c281f0(&uStack_c0);
          puVar7 = auStack_100;
          func_0x000107c29c20();
          goto LAB_10b1cccc4;
        }
        func_0x00010b1ec6a0(param_2);
        FUN_10b1be404();
        if (((param_10._1_1_ != '\0') && (in_ZR = (char)param_2[0xc6] == '\x01', (bool)in_ZR)) &&
           (func_0x00010b1ee12c(param_2 + 0xbe), (bool)in_ZR)) {
          func_0x00010b1ed818();
          puVar7 = &uStack_c0;
          func_0x00010b1eb884();
          func_0x00010b1eb514();
          func_0x00010b1eb24c();
          param_3 = puVar14;
          goto LAB_10b1ccf98;
        }
        uStack_128 = uStack_e8;
        uStack_120 = uStack_e0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_110 = uStack_d0;
        lStack_118 = lStack_d8;
        uStack_108 = uStack_c8;
        uStack_d0 = 0;
        uStack_c8 = 0;
        func_0x00010b1ebe44(param_1,param_2,param_3,&uStack_128,3);
        func_0x00010b1ecf14();
        in_ZR = param_1[0x48] == '\x01';
        if (!(bool)in_ZR) {
          func_0x00010b1edd44();
          func_0x00010b1ed818();
          puVar7 = &uStack_c0;
          func_0x00010b1eb884();
          func_0x00010b1eb514();
          func_0x00010b1eb24c();
          goto LAB_10b1ccf98;
        }
        func_0x00010b1ed818();
        puVar7 = &uStack_c0;
        func_0x00010b1eb884();
        func_0x00010b1eb514();
        func_0x00010b1eb24c();
        func_0x00010b1ec724();
        func_0x00010b1eb5ac(&uStack_c0);
        goto LAB_10b1cccc4;
      }
    }
    func_0x00010b1eb4c4();
    param_3 = puVar14;
  }
LAB_10b1cccc4:
  func_0x00010b1edfa8();
  puVar16 = puVar7;
  puVar8 = param_3;
LAB_10b1cccc8:
  func_0x00010b1eaddc(uStack_70);
  if ((bool)in_ZR) {
    return puVar16;
  }
  ___stack_chk_fail();
  func_0x00010b1ec724();
  func_0x00010b1eb5ac(&uStack_c0);
  func_0x00010b1edfa8();
  func_0x00010b1eb598();
  func_0x00010b1eb63c();
  Hint_Prefetch(*puVar16,0,2,0);
  puVar7 = puVar8;
  func_0x00010b1e741c(*puVar16);
  puVar16 = puVar8;
  func_0x00010b1ebdbc();
  lVar18 = 0;
  uVar11 = *puVar8;
  uVar19 = uVar11 >> 0xc ^ (ulong)puVar16 >> 7;
  bVar3 = (byte)puVar16;
  uVar21 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar19 = uVar19 & puVar8[2];
    uVar23 = *(undefined8 *)(uVar11 + uVar19);
    cVar24 = (char)((ulong)uVar23 >> 8);
    cVar25 = (char)((ulong)uVar23 >> 0x10);
    cVar26 = (char)((ulong)uVar23 >> 0x18);
    cVar27 = (char)((ulong)uVar23 >> 0x20);
    cVar28 = (char)((ulong)uVar23 >> 0x28);
    bVar22 = (byte)((ulong)uVar23 >> 0x30);
    bVar29 = (byte)((ulong)uVar23 >> 0x38);
    for (uVar12 = CONCAT17(-(bVar29 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar22 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar28 == (char)(uVar21 >> 0x28)),
                                             CONCAT14(-(cVar27 == (char)(uVar21 >> 0x20)),
                                                      CONCAT13(-(cVar26 == (char)(uVar21 >> 0x18)),
                                                               CONCAT12(-(cVar25 ==
                                                                         (char)(uVar21 >> 0x10)),
                                                                        CONCAT11(-(cVar24 ==
                                                                                  (char)(uVar21 >> 8
                                                                                        )),
                                                                                 -((char)uVar23 ==
                                                                                  (char)uVar21))))))
                                   )) & 0x8080808080808080; uVar12 != 0;
        uVar12 = uVar12 - 1 & uVar12) {
      uVar13 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar19 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & puVar8[2];
      piVar9 = (int *)(puVar8[1] + uVar13 * 0x68);
      if (*piVar9 == (int)*puVar7 && piVar9[1] == *(int *)((long)puVar7 + 4)) {
        return (ulong *)(uVar11 + uVar13);
      }
    }
    bVar22 = NEON_umaxv(CONCAT17(-(bVar29 == 0x80),
                                 CONCAT16(-(bVar22 == 0x80),
                                          CONCAT15(-(cVar28 == -0x80),
                                                   CONCAT14(-(cVar27 == -0x80),
                                                            CONCAT13(-(cVar26 == -0x80),
                                                                     CONCAT12(-(cVar25 == -0x80),
                                                                              CONCAT11(-(cVar24 ==
                                                                                        -0x80),-((
                                                  char)uVar23 == -0x80)))))))),1);
    if ((bVar22 & 1) != 0) break;
    lVar18 = lVar18 + 8;
    uVar19 = lVar18 + uVar19;
  }
  return (ulong *)0x0;
code_r0x00010b1ccd30:
  puVar8 = puVar8 + 0x11;
  goto LAB_10b1ccd1c;
}



/* Entry: 10b1cd0e4; end: 10b1cd117;  */

long FUN_10b1cd0e4(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  int *piVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar11;
  byte bVar17;
  
  func_0x00010b1eb63c();
  Hint_Prefetch(*param_1,0,2,0);
  puVar1 = param_2;
  func_0x00010b1e741c(*param_1);
  puVar3 = param_2;
  func_0x00010b1ebdbc();
  lVar4 = 0;
  uVar5 = *param_2;
  uVar7 = uVar5 >> 0xc ^ (ulong)puVar3 >> 7;
  bVar6 = (byte)puVar3 & 0x7f;
  while( true ) {
    uVar7 = uVar7 & param_2[2];
    uVar11 = *(undefined8 *)(uVar5 + uVar7);
    bVar10 = (byte)((ulong)uVar11 >> 8);
    bVar12 = (byte)((ulong)uVar11 >> 0x10);
    bVar13 = (byte)((ulong)uVar11 >> 0x18);
    bVar14 = (byte)((ulong)uVar11 >> 0x20);
    bVar15 = (byte)((ulong)uVar11 >> 0x28);
    bVar16 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == bVar6),
                          CONCAT16(-(bVar16 == bVar6),
                                   CONCAT15(-(bVar15 == bVar6),
                                            CONCAT14(-(bVar14 == bVar6),
                                                     CONCAT13(-(bVar13 == bVar6),
                                                              CONCAT12(-(bVar12 == bVar6),
                                                                       CONCAT11(-(bVar10 == bVar6),
                                                                                -((byte)uVar11 ==
                                                                                 bVar6)))))))) &
                 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar7 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & param_2[2];
      piVar2 = (int *)(param_2[1] + uVar9 * 0x68);
      if (*piVar2 == (int)*puVar1 && piVar2[1] == *(int *)((long)puVar1 + 4)) {
        return uVar5 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                 CONCAT16(-(bVar16 == 0x80),
                                          CONCAT15(-(bVar15 == 0x80),
                                                   CONCAT14(-(bVar14 == 0x80),
                                                            CONCAT13(-(bVar13 == 0x80),
                                                                     CONCAT12(-(bVar12 == 0x80),
                                                                              CONCAT11(-(bVar10 ==
                                                                                        0x80),-((
                                                  byte)uVar11 == 0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar4 = lVar4 + 8;
    uVar7 = lVar4 + uVar7;
  }
  return 0;
}



/* Entry: 10b1cd118; end: 10b1cd177;  */

void FUN_10b1cd118(void)

{
  undefined8 *puVar1;
  code *extraout_x8;
  undefined8 *puVar2;
  undefined8 *puStack_38;
  
  func_0x00010b1eda8c();
  puVar1 = (undefined8 *)puStack_38[1];
  for (puVar2 = (undefined8 *)*puStack_38; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    func_0x00010b1ec8a4(*puVar2);
    (*extraout_x8)();
  }
  func_0x00010b1ec680();
  return;
}



/* Entry: 10b1cd178; end: 10b1cd22f;  */

void FUN_10b1cd178(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_98 [72];
  char cStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x110) {
    func_0x00010b1ebebc(auStack_98);
    FUN_10b1cd7e4();
    if (cStack_50 == '\x01') {
      FUN_10b1d83e8(&lStack_48,auStack_98);
    }
    func_0x00010b1eca68();
  }
  if (lStack_48 != lStack_40) {
    FUN_10b1cd118(param_1,&lStack_48,param_3);
  }
  func_0x00010b128754(&lStack_48);
  return;
}



/* Entry: 10b1cd230; end: 10b1cd2ab;  */

long FUN_10b1cd230(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  
  if ((int)*(uint *)(param_4 + 0x4c) < 1) {
    uVar1 = *(uint *)(param_4 + 0x30);
  }
  else {
    uVar1 = *(uint *)(param_4 + 0x30);
    if (0 < param_2) {
      param_1 = param_2 + (ulong)*(uint *)(param_4 + 0x4c) * 1000000;
    }
  }
  if ((0 < (int)uVar1) && (0 < param_3)) {
    lVar2 = param_3 + (ulong)uVar1 * 1000000;
    if (param_1 <= lVar2) {
      param_1 = lVar2;
    }
    if ((*(byte *)(param_4 + 0x55) & 60000000 < param_3 - param_2) == 0) {
      lVar2 = param_1;
    }
    return lVar2;
  }
  return param_1;
}



/* Entry: 10b1cd2ac; end: 10b1cd59f;  */

int ** FUN_10b1cd2ac(int **param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  bool bVar12;
  int **ppiVar13;
  int **ppiVar14;
  undefined8 extraout_x8;
  long lVar15;
  int *piVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  int *piVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_168 [24];
  int *piStack_150;
  int *piStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [40];
  undefined1 auStack_110 [40];
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  
  ppiVar13 = param_1;
  func_0x00010b1eaf40();
  puVar21 = (undefined8 *)*param_3;
  puVar8 = (undefined8 *)param_3[1];
  uVar11 = puVar21 == puVar8;
  uStack_70 = extraout_x8;
  if (!(bool)uVar11) {
    lVar15 = 0;
    for (lVar19 = *(long *)(param_2 + 0x48); lVar19 != *(long *)(param_2 + 0x50);
        lVar19 = lVar19 + 0x88) {
      if (*(long *)(lVar19 + 0x30) == 0) {
        lVar15 = lVar15 + 1;
      }
    }
    lVar19 = (long)puVar8 - (long)puVar21;
    piStack_150 = (int *)0x0;
    piStack_148 = (int *)0x0;
    uStack_140 = 0;
    bVar12 = lVar15 != 0;
    puVar1 = &UNK_10f7323c9;
    if (bVar12) {
      puVar1 = &UNK_10f7323ab;
    }
    uVar2 = 0x14;
    if (bVar12) {
      uVar2 = 0x1d;
    }
    puVar3 = &DAT_10f3a425a;
    if (bVar12) {
      puVar3 = &UNK_10f732386;
    }
    uVar4 = 6;
    if (bVar12) {
      uVar4 = 0x13;
    }
    for (; uVar11 = puVar21 == puVar8, !(bool)uVar11; puVar21 = puVar21 + 1) {
      iVar9 = *(int *)*puVar21;
      for (piVar20 = piStack_150;
          (piVar16 = piStack_148, piVar20 != piStack_148 && (piVar16 = piVar20, *piVar20 != iVar9));
          piVar20 = piVar20 + 1) {
      }
      if (piStack_148 == piVar16) {
        FUN_10b1d75ec(&piStack_150,iVar9);
        lVar23 = 0;
        puVar17 = (undefined8 *)*param_3;
        while (puVar17 != (undefined8 *)param_3[1]) {
          puVar18 = puVar17 + 1;
          piVar20 = (int *)*puVar17;
          puVar17 = puVar18;
          if (*piVar20 == iVar9) {
            lVar23 = lVar23 + 1;
          }
        }
        lVar22 = 0;
        for (piVar20 = *(int **)(param_2 + 0x48); piVar20 != *(int **)(param_2 + 0x50);
            piVar20 = piVar20 + 0x22) {
          if ((*(long *)(piVar20 + 0xc) == 0) && (*piVar20 == iVar9)) {
            lVar22 = lVar22 + 1;
          }
        }
        FUN_10b12983c(auStack_138,iVar9);
        uVar5 = uVar2;
        if (lVar22 != 0) {
          uVar5 = 0x10;
        }
        puVar6 = puVar1;
        if (lVar22 != 0) {
          puVar6 = &UNK_10f73239a;
        }
        puVar7 = puVar3;
        uVar10 = uVar4;
        if (1 < (ulong)(lVar22 + lVar23)) {
          puVar7 = puVar6;
          uVar10 = uVar5;
        }
        func_0x00010b123dbc(auStack_110,&DAT_10f2dd06f,5,puVar7,uVar10);
        FUN_10b1edaec(lVar22 + lVar23);
        func_0x00010b123dbc(auStack_e8,&UNK_10f732358,0xf);
        FUN_10b1edaec(lVar23);
        func_0x00010b123dbc(auStack_c0,&UNK_10f732368,0x10);
        FUN_10b1edaec(lVar15 + (lVar19 >> 3));
        func_0x00010b123dbc(auStack_98,&UNK_10f732379,0xc);
        func_0x00010b120648(auStack_168,auStack_138,5);
        func_0x00010b1eb5b4(param_1,0xd9,auStack_168);
        FUN_10b120998(auStack_168);
        lVar23 = 0xb0;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138 + lVar23)
          ;
          lVar23 = lVar23 + -0x28;
        } while (lVar23 != -0x18);
      }
    }
    ppiVar13 = &piStack_150;
    func_0x00010b1b399c();
  }
  func_0x00010b1eaddc(uStack_70);
  if ((bool)uVar11) {
    return ppiVar13;
  }
  ___stack_chk_fail();
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b1ec0a4();
  } while (!(bool)uVar11);
  ppiVar14 = &piStack_150;
  func_0x00010b1b399c();
  func_0x00010b1eb590();
  func_0x00010b1eb65c();
  if (ppiVar14 != (int **)0x0) {
    ppiVar13[1] = (int *)ppiVar14;
    __ZdlPv();
  }
  return ppiVar13;
}



/* Entry: 10b1cd5a0; end: 10b1cd5c7;  */

void FUN_10b1cd5a0(long param_1)

{
  long unaff_x19;
  
  func_0x00010b1eb65c();
  if (param_1 != 0) {
    *(long *)(unaff_x19 + 8) = param_1;
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1cd5c8; end: 10b1cd6d7;  */

undefined1  [16]
FUN_10b1cd5c8(long param_1,undefined1 *param_2,char param_3,ulong param_4,uint param_5,
             undefined8 param_6)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int extraout_w8;
  undefined8 extraout_x9;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x00010b1eaf30((int)(char)param_5);
  uVar2 = extraout_w8 == 0;
  uVar1 = param_4;
  if (-1 < extraout_w8) {
    uVar1 = (ulong)param_5 & 0xff;
  }
  uStack_28 = extraout_x9;
  if (((uVar1 == 0) ||
      (uVar2 = (undefined1 *)0x100 < param_2 && param_3 == '\0',
      (undefined1 *)0x100 < param_2 && param_3 < '\0')) || (-1 >= extraout_w8 && 0x100 < param_4)) {
    uVar3 = *(undefined8 *)(param_1 + 0x238);
    FUN_10b1e6ab0(auStack_78,param_6);
    func_0x00010b1ebd14();
    func_0x00010b1eb884(auStack_50);
    param_2 = auStack_78;
    func_0x00010b1eb930(auStack_90,param_2);
    func_0x00010b1eb040(uVar3);
    func_0x00010b1ebff4();
    do {
      func_0x00010b1ecb08();
      func_0x00010b1ec838();
    } while (!(bool)uVar2);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  func_0x00010b1eaddc(uStack_28,uVar3);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010b1eb5a0();
    FUN_10b120998();
    puVar4 = auStack_40;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010b1ec0a4();
    } while (!(bool)uVar2);
    func_0x00010b1eb590();
    if (puVar4 < (undefined1 *)0x4) {
      auVar5._0_8_ = (&PTR_DAT_110cc4b48)[(long)puVar4];
      auVar5._8_8_ = 1;
      return auVar5;
    }
    auVar6._8_8_ = 5;
    auVar6._0_8_ = &UNK_10f7323de;
    return auVar6;
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = uVar3;
  return auVar7;
}



/* Entry: 10b1cd6d8; end: 10b1cd703;  */

undefined1  [16] FUN_10b1cd6d8(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 < 4) {
    auVar1._0_8_ = (&PTR_DAT_110cc4b48)[param_1];
    auVar1._8_8_ = 1;
    return auVar1;
  }
  auVar2._8_8_ = 5;
  auVar2._0_8_ = &UNK_10f7323de;
  return auVar2;
}



/* Entry: 10b1cd704; end: 10b1cd797;  */

undefined ** FUN_10b1cd704(undefined **param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar7;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined8 unaff_x21;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  undefined1 auStack_2b8 [96];
  undefined1 auStack_258 [296];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *apuStack_110 [12];
  int iStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  
  func_0x00010b1eae28();
  uStack_28 = extraout_x8;
  if (((ulong)param_2 & 1) != 0) {
    unaff_x20 = *(undefined ***)(param_3 + 0x238);
    func_0x00010b1ed818();
    func_0x00010b1eb884(auStack_50);
    func_0x00010b1ed7d0();
    func_0x00010b1eb654();
    param_3 = auStack_68;
    param_2 = (undefined8 *)0xe2;
    param_1 = unaff_x20;
    func_0x00010b1eb5b4(unaff_x20,0xe2,param_3);
    func_0x00010b1eb750();
    func_0x00010b1eb5ac(auStack_50);
  }
  func_0x00010b1ec928();
  func_0x00010b1eaddc(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b1eb230();
  func_0x00010b1eb5ac(auStack_50);
  func_0x00010b1eb590();
  func_0x00010b1eb5dc();
  FUN_10b1d8e7c(param_2,param_3);
  func_0x00010b1eaeac(extraout_x8_00,*param_2);
  uStack_a8 = extraout_x8_01;
  func_0x00010bccbc98(auStack_2b8,unaff_x21,extraout_x9);
  func_0x00010b1ec434();
  lVar7 = extraout_x8_02;
  if (extraout_x9_00 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar7 = extraout_x8_03;
    } while (extraout_w11 != 0);
  }
  if (((ulong)unaff_x19 & 1) != 0) {
    unaff_x20 = *(undefined ***)
                 (*(long *)(*(long *)(lVar7 + 0x10) + ((long)unaff_x19 >> 1)) +
                 ((ulong)unaff_x20 & 0xffffffff));
  }
  (*(code *)unaff_x20)(auStack_258);
  FUN_10b1d3ecc(&puStack_130,auStack_258);
  uStack_2d8 = uStack_128;
  puStack_2e0 = puStack_130;
  uStack_2d0 = uStack_120;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_2c8 = 1;
  FUN_10b1d8ae4(&puStack_130);
  FUN_10b1d4718(auStack_258);
  func_0x00010b1ebd30();
  func_0x00010b1ece08();
  func_0x00010b1ebf18();
  ppuVar6 = &puStack_2e0;
  FUN_10b1d4780(apuStack_110);
  func_0x00010b1ed084();
  do {
    uVar3 = iStack_b0 == 1;
    if ((bool)uVar3) {
      ppuVar5 = apuStack_110;
      func_0x00010b1d47e4();
      func_0x00010b1ed704(iStack_b0);
      uVar3 = extraout_w8 == 1;
      if (!(bool)uVar3) goto LAB_10b1d8da4;
      func_0x00010b1ecf68();
      FUN_10b1d481c();
    }
    else {
      func_0x00010b1ed704();
LAB_10b1d8da4:
      ppuVar6 = apuStack_110;
      func_0x00010b1d4800();
      ppuVar5 = unaff_x19;
      FUN_10b1d47a8();
    }
    func_0x00010b1ed084();
    func_0x00010b1ebfa4(apuStack_110);
    func_0x00010b1ec678();
    func_0x00010b1eaddc(uStack_a8);
    if ((bool)uVar3) {
      return ppuVar5;
    }
    ___stack_chk_fail();
    func_0x00010b1ebfa4(apuStack_110);
    func_0x00010b1ec678();
    do {
      func_0x00010b1eb598();
    } while ((int)ppuVar6 == 0);
    if ((int)ppuVar6 != 2) {
      func_0x00010b1ebbe8();
      bVar4 = ppuVar6 == (undefined **)0x0;
      bVar2 = ((ulong)ppuVar6 & 1) != 0;
      if ((ppuVar5 == (undefined **)FUN_10b1fb6fc) && (bVar4)) {
        return &PTR_DAT_110cc4e28;
      }
      ppuVar6 = &PTR_DAT_110cc4e88;
      if (ppuVar5 != (undefined **)FUN_10b1fbdd0 ||
          !bVar4 && (bVar2 || ppuVar5 != (undefined **)0x0)) {
        ppuVar6 = (undefined **)0x0;
      }
      ppuVar1 = &PTR_DAT_110cc4e58;
      if (ppuVar5 != (undefined **)FUN_10b1fbc04 ||
          !bVar4 && (bVar2 || ppuVar5 != (undefined **)0x0)) {
        ppuVar1 = ppuVar6;
      }
      return ppuVar1;
    }
    func_0x00010b1eb748();
    func_0x00010b1ed1f4(apuStack_110);
    ___cxa_end_catch();
    ppuVar6 = ppuVar5;
  } while( true );
}



/* Entry: 10b1cd798; end: 10b1cd7e3;  */

undefined ** FUN_10b1cd798(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar7;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  undefined **unaff_x19;
  code *unaff_x20;
  undefined8 unaff_x21;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined1 auStack_248 [96];
  undefined1 auStack_1e8 [296];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *apuStack_a0 [12];
  int iStack_40;
  undefined8 uStack_38;
  
  func_0x00010b1eb5dc();
  FUN_10b1d8e7c(param_2,param_3);
  func_0x00010b1eaeac(extraout_x8,*param_2);
  uStack_38 = extraout_x8_00;
  func_0x00010bccbc98(auStack_248,unaff_x21,extraout_x9);
  func_0x00010b1ec434();
  lVar7 = extraout_x8_01;
  if (extraout_x9_00 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar7 = extraout_x8_02;
    } while (extraout_w11 != 0);
  }
  if (((ulong)unaff_x19 & 1) != 0) {
    unaff_x20 = *(code **)(*(long *)(*(long *)(lVar7 + 0x10) + ((long)unaff_x19 >> 1)) +
                          ((ulong)unaff_x20 & 0xffffffff));
  }
  (*unaff_x20)(auStack_1e8);
  FUN_10b1d3ecc(&puStack_c0,auStack_1e8);
  uStack_268 = uStack_b8;
  puStack_270 = puStack_c0;
  uStack_260 = uStack_b0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  puStack_c0 = (undefined *)0x0;
  uStack_258 = 1;
  FUN_10b1d8ae4(&puStack_c0);
  FUN_10b1d4718(auStack_1e8);
  func_0x00010b1ebd30();
  func_0x00010b1ece08();
  func_0x00010b1ebf18();
  ppuVar6 = &puStack_270;
  FUN_10b1d4780(apuStack_a0);
  func_0x00010b1ed084();
  do {
    uVar3 = iStack_40 == 1;
    if ((bool)uVar3) {
      ppuVar5 = apuStack_a0;
      func_0x00010b1d47e4();
      func_0x00010b1ed704(iStack_40);
      uVar3 = extraout_w8 == 1;
      if (!(bool)uVar3) goto LAB_10b1d8da4;
      func_0x00010b1ecf68();
      FUN_10b1d481c();
    }
    else {
      func_0x00010b1ed704();
LAB_10b1d8da4:
      ppuVar6 = apuStack_a0;
      func_0x00010b1d4800();
      ppuVar5 = unaff_x19;
      FUN_10b1d47a8();
    }
    func_0x00010b1ed084();
    func_0x00010b1ebfa4(apuStack_a0);
    func_0x00010b1ec678();
    func_0x00010b1eaddc(uStack_38);
    if ((bool)uVar3) {
      return ppuVar5;
    }
    ___stack_chk_fail();
    func_0x00010b1ebfa4(apuStack_a0);
    func_0x00010b1ec678();
    do {
      func_0x00010b1eb598();
    } while ((int)ppuVar6 == 0);
    if ((int)ppuVar6 != 2) {
      func_0x00010b1ebbe8();
      bVar4 = ppuVar6 == (undefined **)0x0;
      bVar2 = ((ulong)ppuVar6 & 1) != 0;
      if ((ppuVar5 == (undefined **)FUN_10b1fb6fc) && (bVar4)) {
        return &PTR_DAT_110cc4e28;
      }
      ppuVar6 = &PTR_DAT_110cc4e88;
      if (ppuVar5 != (undefined **)FUN_10b1fbdd0 ||
          !bVar4 && (bVar2 || ppuVar5 != (undefined **)0x0)) {
        ppuVar6 = (undefined **)0x0;
      }
      ppuVar1 = &PTR_DAT_110cc4e58;
      if (ppuVar5 != (undefined **)FUN_10b1fbc04 ||
          !bVar4 && (bVar2 || ppuVar5 != (undefined **)0x0)) {
        ppuVar1 = ppuVar6;
      }
      return ppuVar1;
    }
    func_0x00010b1eb748();
    func_0x00010b1ed1f4(apuStack_a0);
    ___cxa_end_catch();
    ppuVar6 = ppuVar5;
  } while( true );
}



/* Entry: 10b1cd7e4; end: 10b1cd91b;  */

void FUN_10b1cd7e4(long param_1,ulong param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uStack_68;
  undefined1 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  bVar1 = *(char *)(param_3 + 0x18) == '\x01';
  if (((!bVar1) || (func_0x00010b1ed7f4(), !bVar1)) || (FUN_10b1cd5c8(), (param_2 & 1) == 0)) {
    func_0x00010b1ec928();
    return;
  }
  func_0x00010549026c(param_3 + 0x20);
  func_0x00010549026c(param_3);
  func_0x00010b1ebdc8(&uStack_68);
  func_0x00010b1eb674();
  if ((lStack_58 != 0) && ((*(byte *)(lStack_58 + 0x40) & 1) != 0)) {
    lVar2 = lStack_58;
    FUN_10b1c7b9c();
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010b1ebdc8(param_1);
    func_0x00010b1ebe44();
    func_0x00010b1eb910();
    if (*(char *)(param_1 + 0x48) == '\x01') {
      *(char *)(param_1 + 0x40) = (char)lVar2;
      goto LAB_10b1cd8fc;
    }
    FUN_10b1d6520(param_1);
  }
  func_0x00010b1ec928();
LAB_10b1cd8fc:
  func_0x00010b1ebe9c();
  return;
}



/* Entry: 10b1cd91c; end: 10b1cd957;  */

/* WARNING: Removing unreachable block (ram,0x00010b1c6808) */
/* WARNING: Removing unreachable block (ram,0x00010b1c681c) */
/* WARNING: Removing unreachable block (ram,0x00010b1c68b0) */
/* WARNING: Removing unreachable block (ram,0x00010b1c68b4) */
/* WARNING: Removing unreachable block (ram,0x00010b1c68b8) */
/* WARNING: Removing unreachable block (ram,0x00010b1c68bc) */
/* WARNING: Removing unreachable block (ram,0x00010b1c68c4) */
/* WARNING: Removing unreachable block (ram,0x00010b1c68c8) */
/* WARNING: Removing unreachable block (ram,0x00010b1c68cc) */
/* WARNING: Removing unreachable block (ram,0x00010b1c68e0) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6970) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6978) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6980) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6a14) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6a4c) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6a04) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6a50) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6a60) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6a6c) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6a70) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6a78) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6a88) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6ab8) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6abc) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6afc) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6adc) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6b10) */
/* WARNING: Removing unreachable block (ram,0x00010b1c6b40) */

void FUN_10b1cd91c(long ****param_1,ulong param_2)

{
  ulong *puVar1;
  long **pplVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long ***ppplVar9;
  long ***ppplVar10;
  long ***ppplVar11;
  undefined8 uVar12;
  long *****ppppplVar13;
  undefined8 extraout_x8;
  ulong uVar14;
  ulong uVar15;
  undefined1 uVar16;
  int extraout_w10;
  long *****unaff_x19;
  long ****pppplVar17;
  long lVar18;
  ulong uVar19;
  undefined4 uVar20;
  uint uVar21;
  float fVar22;
  undefined1 auStack_3b8 [40];
  code **ppcStack_390;
  long ****pppplStack_388;
  undefined1 **ppuStack_380;
  code *pcStack_378;
  undefined4 uStack_368;
  code *pcStack_360;
  long lStack_358;
  ulong uStack_350;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined1 auStack_330 [16];
  long lStack_320;
  undefined4 auStack_308 [2];
  code *pcStack_300;
  long lStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined8 auStack_298 [12];
  undefined8 uStack_238;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined1 *puStack_1d0;
  long ****pppplStack_1c8;
  long ****pppplStack_1c0;
  long ***ppplStack_1b8;
  long ***ppplStack_1b0;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [8];
  long ****pppplStack_170;
  undefined1 uStack_168;
  long **pplStack_160;
  long ****pppplStack_158;
  undefined1 *puStack_148;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [16];
  undefined8 auStack_110 [2];
  undefined1 *apuStack_100 [3];
  long lStack_e8;
  long **pplStack_e0;
  undefined **ppuStack_d8;
  undefined1 *puStack_d0;
  long ****pppplStack_c8;
  long ****pppplStack_c0;
  undefined1 *puStack_b8;
  
  func_0x00010b1eb5dc();
  FUN_10b1bac30();
  func_0x00010b1eb6f8();
  uVar12 = 1;
  func_0x00010b1eae28();
  FUN_10b1cdb48();
  uVar5 = (param_2 & 1) == 0;
  if ((bool)uVar5) {
    param_1 = (long ****)0x0;
  }
  ppplVar11 = (long ***)(param_2 & 1);
  ppppplVar7 = unaff_x19;
  FUN_10b1cdc14(unaff_x19,param_1,ppplVar11);
  uStack_168 = SUB81(param_1,0);
  pppplStack_170 = (long ****)ppppplVar7;
  if (((ulong)param_1 & 1) != 0) {
    ppppplVar13 = ppppplVar7;
    if (0 < (long)unaff_x19) {
      ppppplVar8 = ppppplVar7;
      func_0x00010b1ed2b4();
      ppppplVar13 = (long *****)
                    ((long)ppppplVar8 - (long)unaff_x19 &
                    ((long)ppppplVar8 - (long)unaff_x19 >> 0x3f ^ 0xffffffffffffffffU));
      if ((long)ppppplVar7 <= (long)ppppplVar13) {
        ppppplVar13 = ppppplVar7;
      }
      uStack_168 = 1;
      ppppplVar7 = ppppplVar8;
    }
    pppplStack_170 = (long ****)ppppplVar13;
    func_0x00010b1ed2b4();
    fVar22 = (float)(long)ppppplVar13;
    if (0.0 < *(float *)((long)unaff_x19 + 0x65c)) {
      if ((float)(long)ppppplVar7 < *(float *)((long)unaff_x19 + 0x65c) * fVar22) {
        ppppplVar8 = unaff_x19 + 0x88;
        do {
          pppplVar17 = *ppppplVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
          if (bVar4) {
            *(byte *)ppppplVar8 = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((ulong)pppplVar17 & 1) != 0) goto LAB_10b1c6b48;
      }
      if (*(float *)(unaff_x19 + 0xcb) * fVar22 <= (float)(long)ppppplVar7) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(unaff_x19 + 0x88,0x10);
          if (bVar4) {
            *(undefined1 *)(unaff_x19 + 0x88) = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
LAB_10b1c6b48:
    uVar5 = ppppplVar7 == ppppplVar13;
    if ((long)ppppplVar13 < (long)ppppplVar7) {
      func_0x00010b1ec7a0();
      ppplVar11 = (long ***)0x1;
      uVar12 = 0;
      FUN_10b1c9c60();
      if (0.0 < *(float *)(unaff_x19 + 0xe)) {
        ppppplVar13 = (long *****)(long)((1.0 - *(float *)(unaff_x19 + 0xe)) * fVar22);
        pppplStack_170 = (long ****)ppppplVar13;
      }
      func_0x00010b1ee400();
      ppppplVar7 = unaff_x19;
      (*(code *)(*unaff_x19)[3])();
      uVar5 = ppppplVar7 == ppppplVar13;
      if ((long)ppppplVar13 < (long)ppppplVar7) {
        puStack_1d0 = auStack_178;
        pppplStack_1c0 = (long ****)&pppplStack_170;
        pppplVar17 = unaff_x19[0xd9];
        pppplStack_1c8 = (long ****)unaff_x19;
        func_0x00010b1ecd34();
        if (pppplVar17 == *ppppplVar7) {
          pplStack_e0 = (long **)FUN_10b1e7b28;
          ppuStack_d8 = &PTR_FUN_110cc4690;
          pppplStack_c8 = pppplStack_1c8;
          puStack_d0 = puStack_1d0;
          pppplStack_c0 = pppplStack_1c0;
          ppplVar11 = &pplStack_e0;
          func_0x00010b1edf68(&pplStack_160,unaff_x19,ppplVar11);
          param_1 = (long ****)&pplStack_160;
          FUN_10b1d9314(&ppplStack_1b8,param_1);
          func_0x00010b128754(&pplStack_160);
          func_0x00010b1eb150(ppuStack_d8);
        }
        else {
          __ZNSt3__17promiseIvEC1Ev(apuStack_100);
          __ZNSt3__17promiseIvE10get_futureEv(auStack_110,apuStack_100);
          puStack_d0 = apuStack_100[0];
          apuStack_100[0] = (undefined1 *)0x0;
          pppplStack_158 = &ppplStack_1b8;
          pplStack_e0 = (long **)FUN_10b1e7c54;
          ppuStack_d8 = &PTR_FUN_110cc46a8;
          pplStack_160 = (long **)0x0;
          puStack_148 = (undefined1 *)&puStack_1d0;
          pppplStack_c8 = pppplStack_158;
          pppplStack_c0 = (long ****)unaff_x19;
          puStack_b8 = (undefined1 *)&puStack_1d0;
          func_0x00010b1ebe1c();
          param_1 = (long ****)&pplStack_e0;
          func_0x00010b1ebbe0();
          func_0x00010b1eafb4(ppuStack_d8);
          __ZNSt3__17promiseIvED1Ev(&pplStack_160);
          __ZNSt3__117__assoc_sub_state4waitEv(auStack_110[0]);
          __ZNSt3__16futureIvED1Ev(auStack_110);
          __ZNSt3__17promiseIvED1Ev(apuStack_100);
        }
        uVar5 = ppplStack_1b8 == ppplStack_1b0;
        if (!(bool)uVar5) {
          param_1 = &ppplStack_1b8;
          ppplVar11 = (long ***)0x4;
          FUN_10b1cd118(unaff_x19,param_1,4);
        }
      }
      ppppplVar7 = (long *****)&ppplStack_1b8;
      func_0x00010b128754();
    }
  }
  func_0x00010b1eadc4();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c2798c(auStack_120);
  func_0x000107c27b58(auStack_110);
  func_0x00010b1e7b04(&pplStack_e0);
  func_0x000107c27b58(apuStack_100);
  lVar18 = lStack_e8;
  lStack_e8 = 0;
  if (lVar18 != 0) {
    func_0x00010b1eb318();
  }
  func_0x00010b1ed28c();
  FUN_10b12d6b8(auStack_140);
  FUN_10b12d6b8(auStack_190);
  func_0x000107c27b58(auStack_1a0);
  ppplVar9 = &pplStack_160;
  func_0x000107c2798c();
  func_0x00010b1eb590();
  pcStack_1d8 = FUN_10b1c6e18;
  ppplVar10 = ppplVar9;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x00010b1eaeac();
  uStack_238 = extraout_x8;
  func_0x00010b1eb674(auStack_330);
  lVar18 = lStack_320;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  if (lStack_320 == 0) {
    func_0x00010b1ecf68();
    FUN_10b1c70ec();
  }
  else {
    func_0x00010b1ee348();
    if ((bool)uVar5) {
      uVar21 = (uint)(0 < *(int *)(lVar18 + 0x88));
    }
    else {
      uVar21 = 0;
    }
    uVar5 = *(char *)(ppplVar9 + 0x4f) == '\x01';
    if ((bool)uVar5) {
      ppplVar10 = ppplVar9 + 0x4b;
      FUN_10b1c713c(ppplVar10,lVar18);
      uVar6 = (uint)ppplVar10;
      lVar18 = lStack_320;
    }
    else {
      uVar6 = 0;
    }
    ppplVar10 = *(long ****)(lVar18 + 0x48);
    func_0x00010b1ec6e4(ppplVar10,*(undefined8 *)(lVar18 + 0x50));
    if (ppplVar10 == (long ***)0x0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined4 *)(ppplVar10 + 7);
    }
    uStack_338 = uVar20;
    if (((uVar6 | uVar21 | (uint)*(byte *)(lVar18 + 0x148)) & 1) != 0) {
      if (uVar21 == 0) {
        if ((*(byte *)(lVar18 + 0x148) & 1) == 0) {
          FUN_10b1c7218(&pcStack_2a0,ppplVar9,param_1,ppplVar11,uVar12);
          FUN_10b1d2fcc((undefined8 *)(lVar18 + 0x138));
          *(undefined8 *)(lVar18 + 0x140) = auStack_298[0];
          *(undefined8 *)(lVar18 + 0x138) = pcStack_2a0;
          pcStack_2a0 = (code *)0x0;
          auStack_298[0] = 0;
          *(undefined1 *)(lVar18 + 0x148) = 1;
          FUN_10b1d2ff0(&pcStack_2a0);
          lVar18 = lStack_320;
        }
        pplVar2 = *(long ***)(lVar18 + 0x138);
        lVar18 = *(long *)(lVar18 + 0x140);
        uStack_368 = uVar20;
        pcStack_360 = (code *)pplVar2;
        lStack_358 = lVar18;
        if (lVar18 != 0) {
          do {
            func_0x00010b1eb124();
          } while (extraout_w10 != 0);
        }
        func_0x0001052b7b6c(auStack_2c8);
        func_0x0001052b7b20(ppppplVar7,auStack_2c8);
        uStack_2e0 = uStack_2b8;
        uStack_2e8 = uStack_2c0;
        pcStack_360 = (code *)0x0;
        lStack_358 = 0;
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        uStack_2d0 = uStack_2a8;
        uStack_2d8 = uStack_2b0;
        uStack_2b0 = 0;
        uStack_2a8 = 0;
        ppuStack_2f0 = &PTR_DAT_1108752b8;
        pcStack_2a0 = FUN_10b1d745c;
        auStack_308[0] = uVar20;
        pcStack_300 = (code *)pplVar2;
        lStack_2f8 = lVar18;
        FUN_10b1d74d0(auStack_298,auStack_308);
        func_0x00010b1ebe1c();
        func_0x00010b1ebbe0();
        func_0x00010b1eb08c(auStack_298[0]);
        func_0x00010b1d7434(auStack_308);
        func_0x0001052b7e10(auStack_2c8);
        ppplVar10 = (long ***)&pcStack_360;
        FUN_10b1d2ff0();
        goto LAB_10b1c7070;
      }
      uVar14 = *(ulong *)(lVar18 + 0x80);
      uVar5 = (uVar14 & 1) == 0;
      puVar1 = (ulong *)(lVar18 + 0x80);
      if (!(bool)uVar5) {
        puVar1 = (ulong *)(uVar14 + 7);
      }
      uVar14 = uStack_348 & 0xff;
      uVar16 = (undefined1)uStack_348;
      uVar15 = uStack_350;
      for (lVar18 = (long)*(int *)(lVar18 + 0x88) << 3; lVar18 != 0; lVar18 = lVar18 + -8) {
        uVar21 = *(uint *)(*puVar1 + 0x44);
        ppplVar10 = (long ***)(ulong)uVar21;
        if (uVar21 != 0) {
          uVar19 = *(ulong *)(*puVar1 + 0x38);
          if ((uVar14 & 1) != 0) {
            uVar14 = 1;
            uVar5 = uVar19 == uVar15;
            if (uVar19 <= uVar15) goto LAB_10b1c6f50;
          }
          func_0x00010b1c71bc();
          uStack_340._0_5_ = CONCAT14(1,(int)ppplVar10);
          uVar14 = 1;
          uVar15 = uVar19;
        }
LAB_10b1c6f50:
        uVar16 = (undefined1)uVar14;
        puVar1 = puVar1 + 1;
      }
      uVar14 = uStack_348 >> 8;
      uStack_348 = CONCAT71((int7)uVar14,uVar16);
      uStack_350 = uVar15;
    }
    func_0x00010b1ecf68();
    FUN_10b1c70ec();
  }
LAB_10b1c7070:
  func_0x00010b1ecef4();
  func_0x00010b1eaddc(uStack_238);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1ecef4();
  func_0x00010b1eb598();
  pcStack_378 = FUN_10b1c70ec;
  ppcStack_390 = (code **)ppplVar10;
  pppplStack_388 = (long ****)ppppplVar7;
  ppuStack_380 = &puStack_1e0;
  func_0x00010b1eb648();
  func_0x0001052b7b90(auStack_3b8);
  func_0x0001052b8044(auStack_3b8,ppplVar10);
  func_0x0001052b7b20(ppppplVar7,auStack_3b8);
  func_0x0001052b7e10(auStack_3b8);
  return;
}



/* Entry: 10b1cd958; end: 10b1cdb47;  */

void FUN_10b1cd958(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  code *pcVar3;
  undefined8 uStack_178;
  undefined1 auStack_170 [24];
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined1 auStack_148 [48];
  undefined **ppuStack_118;
  code *pcStack_110;
  undefined8 *puStack_108;
  code *pcStack_100;
  undefined8 *puStack_f8;
  undefined **ppuStack_f0;
  code *pcStack_e8;
  undefined8 *puStack_e0;
  code *pcStack_d8;
  undefined8 *puStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_68;
  
  func_0x00010b1eaeac();
  uStack_178 = param_1;
  uStack_68 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_170);
  ppuStack_f0 = &PTR_FUN_110cc3b70;
  puVar1 = (undefined8 *)0xa8;
  uStack_158 = param_4;
  uStack_150 = param_3;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cc3b90;
  pcVar3 = (code *)(puVar1 + 3);
  *(undefined8 *)pcVar3 = 0;
  puVar1[4] = 0;
  puVar1[5] = 0x3cb0b1bb;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0x32aaaba7;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  pcStack_e8 = pcVar3;
  puStack_e0 = puVar1;
  pcStack_d8 = pcVar3;
  puStack_d0 = puVar1;
  do {
    func_0x00010b1eb124();
  } while (extraout_w10 != 0);
  ppuStack_f0 = &PTR_FUN_110cc3b28;
  pcStack_c8 = pcVar3;
  ppuStack_c0 = (undefined **)puVar1;
  do {
    func_0x00010b1eb124();
  } while (extraout_w10_00 != 0);
  do {
    func_0x00010b1eb124();
  } while (extraout_w10_01 != 0);
  *unaff_x19 = pcVar3;
  unaff_x19[1] = puVar1;
  func_0x0001052a6f94(&pcStack_c8);
  puVar2 = auStack_148;
  FUN_10b1d8ef4(puVar2,&uStack_178);
  pcStack_e8 = (code *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  pcStack_d8 = (code *)0x0;
  puStack_d0 = (undefined8 *)0x0;
  ppuStack_118 = &PTR_FUN_110cc3b28;
  pcStack_c8 = FUN_10b1d9100;
  ppuStack_c0 = &PTR_FUN_110cc3bd0;
  pcStack_110 = pcVar3;
  puStack_108 = puVar1;
  pcStack_100 = pcVar3;
  puStack_f8 = puVar1;
  func_0x00010b1ed008();
  FUN_10b1d8ef4();
  *(undefined8 **)(puVar2 + 0x40) = puStack_108;
  *(code **)(puVar2 + 0x38) = pcStack_110;
  pcStack_110 = (code *)0x0;
  puStack_108 = (undefined8 *)0x0;
  *(undefined8 **)(puVar2 + 0x50) = puStack_f8;
  *(code **)(puVar2 + 0x48) = pcStack_100;
  pcStack_100 = (code *)0x0;
  puStack_f8 = (undefined8 *)0x0;
  *(undefined ***)(puVar2 + 0x30) = &PTR_FUN_110cc3b28;
  puStack_b8 = puVar2;
  func_0x00010b1ebe1c();
  func_0x00010b1ebbe0();
  func_0x00010b1eb08c(ppuStack_c0);
  func_0x00010b1d8f2c(auStack_148);
  FUN_10b1d8fec(&ppuStack_f0);
  func_0x00010b1ec35c();
  func_0x00010b1eaddc(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eb08c(ppuStack_c0);
  func_0x00010b1d8f2c(auStack_148);
  func_0x0001052a6f94();
  FUN_10b1d8fec(&ppuStack_f0);
  func_0x00010b1ec35c();
  do {
    func_0x00010b1eb598();
  } while( true );
}



/* Entry: 10b1cdb48; end: 10b1cdc13;  */

undefined1  [16] FUN_10b1cdb48(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_60 [8];
  long lStack_58;
  uint uStack_48;
  
  if (*(char *)(param_1 + 0x4ef) < '\0') {
    if (*(long *)(param_1 + 0x4e0) != 0) goto LAB_10b1cdb74;
  }
  else if (*(char *)(param_1 + 0x4ef) != '\0') {
LAB_10b1cdb74:
    __ZNSt3__15mutex4lockEv(param_1 + 0x448);
    if ((*(byte *)(*(long *)(param_1 + 0x498) + 8) & 1) == 0) {
      uVar4 = param_1 + 0x490;
      (**(code **)(param_1 + 0x490))();
      if ((param_2 & 1) == 0) {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
    func_0x00010b1edeb4();
    if (uVar4 == 0) {
      plVar1 = (long *)(param_1 + 0x4d8);
      if (*(char *)(param_1 + 0x4ef) < '\0') {
        plVar1 = (long *)*plVar1;
      }
      _statvfs(plVar1,auStack_60);
      if ((int)plVar1 != 0) goto LAB_10b1cdbdc;
      uVar4 = lStack_58 * (ulong)uStack_48;
    }
    uVar3 = uVar4 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xff;
    uVar2 = 1;
    goto LAB_10b1cdbe4;
  }
LAB_10b1cdbdc:
  uVar4 = 0;
  uVar2 = 0;
  uVar3 = 0;
LAB_10b1cdbe4:
  auVar5._0_8_ = uVar3 | uVar4;
  auVar5._8_8_ = uVar2;
  return auVar5;
}



/* Entry: 10b1cdc14; end: 10b1cdd57;  */

undefined1  [16] FUN_10b1cdc14(long param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  byte unaff_w21;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_58;
  long lStack_50;
  
  func_0x00010b1ec874();
  lVar9 = param_1;
  func_0x00010b1eba4c();
  if ((unaff_w21 & 1) == 0) {
    unaff_x20 = 0;
  }
  lVar10 = *(long *)(param_1 + 0x510);
  lStack_50 = lVar10 + 0x18;
  func_0x00010b1ebed4();
  __ZNSt3__15mutex4lockEv();
  func_0x00010b1ecfbc();
  __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE();
  lVar11 = *(long *)(lVar10 + 0x10);
  uStack_58 = 0;
  func_0x00010b1ebf94();
  if (lVar11 != 0) {
    __ZNSt13exception_ptrC1ERKS_(&uStack_58,(long *)(lVar10 + 0x10));
    __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_58);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10b1cdd40);
    (*pcVar4)();
  }
  func_0x00010b1ebf84();
  if (((*(byte *)(lVar10 + 0xc0) & unaff_w21 & 1) == 0) ||
     (iVar2 = *(int *)(lVar10 + 0xa8), iVar2 == 0)) {
    uVar6 = 0;
    uVar5 = 0;
    uVar7 = 0;
  }
  else {
    uVar6 = 0;
    uVar8 = *(ulong *)(lVar10 + 0xa0);
    uVar7 = lVar9 + unaff_x20;
    puVar1 = (ulong *)(lVar10 + 0xa0);
    if ((uVar8 & 1) != 0) {
      puVar1 = (ulong *)(uVar8 + 7);
    }
    puVar3 = puVar1;
    for (lVar9 = (long)iVar2 << 3; lVar9 != 0; lVar9 = lVar9 + -8) {
      if (uVar7 == 0) goto LAB_10b1cdd00;
      uVar8 = *(ulong *)(*puVar3 + 0x10);
      if (uVar7 <= uVar8) {
        uVar8 = uVar7;
      }
      uVar6 = (ulong)((float)uVar6 + (float)uVar8 * *(float *)(*puVar3 + 0x18));
      uVar7 = uVar7 - uVar8;
      puVar3 = puVar3 + 1;
    }
    if (uVar7 != 0) {
      uVar6 = (ulong)((float)uVar6 + (float)uVar7 * *(float *)(puVar1[(long)iVar2 + -1] + 0x18));
    }
LAB_10b1cdd00:
    uVar7 = uVar6 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xff;
    uVar5 = 1;
  }
  auVar12._0_8_ = uVar7 | uVar6;
  auVar12._8_8_ = uVar5;
  return auVar12;
}



/* Entry: 10b1cdd58; end: 10b1cdf3f;  */

void FUN_10b1cdd58(undefined8 param_1,long param_2,undefined8 *param_3,uint param_4,
                  undefined4 param_5,undefined8 param_6,ulong param_7,ulong param_8,long param_9,
                  long *param_10,ulong param_11,long param_12,long param_13,long param_14,
                  undefined8 param_15,byte param_16,undefined4 param_17,long **param_18,
                  undefined1 param_19,undefined4 param_20,byte param_21,undefined4 param_22,
                  char param_23)

{
  bool bVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  undefined1 extraout_w8;
  long extraout_x8;
  ulong extraout_x8_00;
  long *plVar16;
  long extraout_x8_01;
  ulong extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  long *unaff_x19;
  long unaff_x22;
  long *plVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  long unaff_x30;
  undefined8 uVar22;
  long in_stack_00000080;
  long *in_stack_00000088;
  long *in_stack_00000090;
  long *in_stack_00000098;
  undefined1 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  byte in_stack_000000c8;
  char in_stack_000000d0;
  int in_stack_000000e0;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 uStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  ulong uStack_2c8;
  long lStack_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  long lStack_2b0;
  ushort uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  byte bStack_288;
  undefined7 uStack_287;
  undefined8 uStack_280;
  long alStack_278 [10];
  long lStack_228;
  undefined8 *puStack_220;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  char cStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long alStack_150 [10];
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [80];
  ulong auStack_60 [9];
  byte bStack_18;
  ulong uStack_10;
  long *plStack_8;
  
  func_0x00010b1ecc8c();
  func_0x00010b1ecb5c();
  if ((*(byte *)(param_2 + 0x661) & 1) != 0) {
    bVar2 = *(byte *)(unaff_x22 + 0x5d0);
    if ((bVar2 & 1) == 0) {
      FUN_10b1d1744(unaff_x22 + 0x578);
      func_0x00010b1f1f3c(unaff_x22 + 0x578,unaff_x22 + 0x80);
      *(undefined1 *)(unaff_x22 + 0x5d0) = 1;
    }
    __ZNSt3__16chrono12system_clock3nowEv();
    bVar5 = false;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    do {
      FUN_10b1f2a10(&stack0x00000060,unaff_x22 + 0x578);
      if (((ulong)in_stack_00000098 & 1) == 0) {
        func_0x00010b1ecda0();
        if (((*(byte *)(param_3[1] + 8) & 1) == 0) && (bVar5 || (bVar2 & 1) != 0)) {
          FUN_10b1d1744(unaff_x22 + 0x578);
          FUN_10b1cdd58(&param_10);
          FUN_10b1d16b8();
          FUN_10b1de4e8(param_10,param_11);
          func_0x00010b128754(&param_10);
        }
        return;
      }
      FUN_10b1d1508(&param_10);
      bVar5 = param_23 != '\0' || bVar5;
      if ((param_21 & 1) != 0) {
        func_0x00010b1eb918();
        FUN_10b1d83e8();
        if (((*(byte *)(param_3[1] + 8) & 1) == 0) &&
           (puVar9 = param_3, (*(code *)*param_3)(), ((ulong)puVar9 & 1) != 0)) {
          func_0x00010b1eca68();
          func_0x00010b1ecda0();
          return;
        }
      }
      func_0x00010b1eca68();
      func_0x00010b1ecda0();
    } while( true );
  }
  func_0x00010b1ec024();
  uStack_2e8 = CONCAT44(param_5,(undefined4)uStack_2e8);
  plVar7 = unaff_x19;
  func_0x00010b1eae84();
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  __ZNSt3__16chrono12system_clock3nowEv();
  bVar5 = false;
  lVar21 = -1;
  do {
    uStack_2b8 = 0;
    uStack_2a8 = uStack_2a8 & 0xff00;
    plVar14 = (long *)0x23;
    func_0x00010bccbc98(alStack_278,unaff_x22 + 0x80,&UNK_10f7385e4,0x23);
    lVar18 = *(long *)(alStack_278[0] + 8);
    puStack_220 = *(undefined8 **)(alStack_278[0] + 0x10);
    lStack_228 = lVar18;
    if (puStack_220 != (undefined8 *)0x0) {
      do {
        func_0x00010b1eaf98();
        lVar18 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    plVar12 = (long *)0x1;
    FUN_10b1fbacc(auStack_218,*(undefined8 *)(lVar18 + 0x10),lVar21,1);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    uStack_b8 = 0;
    if (cStack_1c8 != '\0') {
      uStack_f0 = uStack_200;
      uStack_f8 = uStack_208;
      uStack_e8 = uStack_1f8;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_d8 = uStack_1e8;
      uStack_e0 = uStack_1f0;
      uStack_d0 = uStack_1e0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      uStack_c0 = uStack_1d0;
      uStack_c8 = uStack_1d8;
      uStack_b8 = 1;
      func_0x00010b1de180(&uStack_208);
    }
    uStack_100 = uStack_210;
    uStack_210 = 0;
    func_0x00010b1de0dc(auStack_b0,&uStack_100);
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    func_0x00010b1de0dc(alStack_150,&uStack_1a0);
    plStack_1b8 = (long *)0x0;
    plStack_1b0 = (long *)0x0;
    plStack_1c0 = (long *)0x0;
    FUN_10b1de378(&uStack_10,auStack_b0);
    plVar11 = alStack_150;
    FUN_10b1de378(auStack_60);
    param_18 = &plStack_1c0;
    param_19 = 0;
    while ((((param_16 & 1) != 0 || ((bStack_18 & 1) != 0)) && (uStack_10 != auStack_60[0]))) {
      if ((param_16 & 1) == 0) {
        uVar20 = *(undefined8 *)(uStack_10 + 8);
        func_0x00010b1eb9a4(&param_21);
        func_0x00010b1ee27c();
        func_0x00010b1eb224();
        plVar12 = (long *)&stack0x00000068;
        func_0x00010b1eb99c(uVar20);
        func_0x00010b1ebf08();
        func_0x00010b1ebf10();
      }
      plVar3 = plStack_1b8;
      plVar17 = plStack_1c0;
      if (plStack_1b8 < plStack_1b0) {
        plStack_1b8[2] = (long)param_10;
        plStack_1b8[1] = param_9;
        *plStack_1b8 = (long)plStack_8;
        param_10 = (long *)0x0;
        plStack_8 = (long *)0x0;
        plStack_1b8[4] = param_12;
        plStack_1b8[3] = param_11;
        plStack_1b8[5] = param_13;
        param_12 = 0;
        param_13 = 0;
        param_11 = 0;
        plStack_1b8[7] = CONCAT62(param_15._2_6_,(ushort)param_15);
        plStack_1b8[6] = param_14;
        plVar17 = plStack_1b8 + 8;
      }
      else {
        lVar21 = (long)plStack_1b8 - (long)plStack_1c0;
        lVar18 = lVar21 >> 6;
        if (lVar18 + 1U >> 0x3a != 0) {
          FUN_10b1de1fc();
          goto LAB_10b1d14a0;
        }
        func_0x00010b1ebaa0((long)plStack_1b0 - (long)plStack_1c0);
        uVar10 = extraout_x9;
        if (0x7fffffffffffffbf < extraout_x8_00) {
          uVar10 = 0x3ffffffffffffff;
        }
        if (uVar10 == 0) {
          lVar8 = 0;
        }
        else {
          if (uVar10 >> 0x3a != 0) {
            func_0x000104bd35f4();
            goto LAB_10b1d14a0;
          }
          lVar8 = uVar10 << 6;
          __Znwm();
        }
        puVar9 = (undefined8 *)(lVar8 + lVar21);
        puVar9[1] = param_9;
        *puVar9 = plStack_8;
        puVar9[2] = param_10;
        plStack_8 = (long *)0x0;
        puVar9[4] = param_12;
        puVar9[3] = param_11;
        puVar9[5] = param_13;
        param_10 = (long *)0x0;
        param_11 = 0;
        param_12 = 0;
        param_13 = 0;
        plVar19 = puVar9 + lVar18 * -8;
        puVar9[7] = CONCAT62(param_15._2_6_,(ushort)param_15);
        puVar9[6] = param_14;
        plVar16 = plVar19;
        plVar13 = plVar17;
        while (plVar13 != plVar3) {
          func_0x00010b1eb2fc(plVar16);
          uVar22 = *(undefined8 *)(extraout_x9_00 + 0x20);
          uVar20 = *(undefined8 *)(extraout_x9_00 + 0x18);
          *(undefined8 *)(extraout_x8_01 + 0x28) = *(undefined8 *)(extraout_x9_00 + 0x28);
          *(undefined8 *)(extraout_x8_01 + 0x20) = uVar22;
          *(undefined8 *)(extraout_x8_01 + 0x18) = uVar20;
          *(undefined8 *)(extraout_x9_00 + 0x20) = 0;
          *(undefined8 *)(extraout_x9_00 + 0x28) = 0;
          *(undefined8 *)(extraout_x9_00 + 0x18) = 0;
          uVar20 = *(undefined8 *)(extraout_x9_00 + 0x30);
          *(undefined8 *)(extraout_x8_01 + 0x38) = *(undefined8 *)(extraout_x9_00 + 0x38);
          *(undefined8 *)(extraout_x8_01 + 0x30) = uVar20;
          plVar16 = (long *)(extraout_x8_01 + 0x40);
          plVar13 = (long *)(extraout_x9_00 + 0x40);
        }
        for (; plVar17 != plVar3; plVar17 = plVar17 + 8) {
          func_0x00010b1de1dc(plVar17);
        }
        plStack_1b0 = (long *)(lVar8 + uVar10 * 0x40);
        plVar17 = puVar9 + 8;
        bVar1 = plStack_1c0 != (long *)0x0;
        plStack_1c0 = plVar19;
        if (bVar1) {
          plStack_1b8 = plVar17;
          __ZdlPv();
        }
      }
      param_9 = 0;
      plStack_1b8 = plVar17;
      FUN_10b1de208(&uStack_10);
    }
    param_19 = 1;
    FUN_10b1de30c(&param_18);
    func_0x00010b1ebc00(auStack_60);
    FUN_10b1de3ec(&plStack_8);
    func_0x00010b1ebc00(alStack_150);
    func_0x00010b1ebc00(&uStack_1a0);
    func_0x00010b1ebc00(auStack_b0);
    func_0x00010b1ebc00(&uStack_100);
    plStack_298 = plStack_1b8;
    plStack_2a0 = plStack_1c0;
    plStack_290 = plStack_1b0;
    plStack_1c0 = (long *)0x0;
    plStack_1b8 = (long *)0x0;
    plStack_1b0 = (long *)0x0;
    bStack_288 = 1;
    FUN_10b1de40c(&plStack_1c0);
    FUN_10b1de430(auStack_218);
    FUN_10b1b7824(&lStack_228);
    func_0x00010bccbe4c(alStack_278);
    func_0x00010bccbdb4(alStack_278);
    func_0x00010b1ecd94();
    uVar6 = bStack_288 == 1;
    plVar17 = (long *)(ulong)param_4;
    if ((bool)uVar6) {
      in_stack_00000090 = plStack_298;
      in_stack_00000088 = plStack_2a0;
      in_stack_00000098 = plStack_290;
      func_0x00010b1ee548();
      in_stack_000000a0 = 1;
    }
    in_stack_000000e0 = 0;
    func_0x00010b1ed09c();
    func_0x00010b1ecbec();
    if (in_stack_000000e0 == 0) {
      plStack_2e0 = (long *)((ulong)plStack_2e0._1_7_ << 8);
      uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
      func_0x00010b1ecd88();
      if ((bool)uVar6) {
        plStack_2d8 = in_stack_00000090;
        plStack_2e0 = in_stack_00000088;
        plStack_2d0 = in_stack_00000098;
        in_stack_00000090 = (long *)0x0;
        in_stack_00000098 = (long *)0x0;
        in_stack_00000088 = (long *)0x0;
        uVar6 = 1;
        goto LAB_10b1d11e0;
      }
    }
    else {
      if (in_stack_000000e0 != 1) {
        func_0x00010563ab98();
LAB_10b1d14a0:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10b1d14a4);
        (*pcVar4)();
      }
      uVar6 = 0;
      plStack_2e0 = (long *)((ulong)plStack_2e0._1_7_ << 8);
LAB_10b1d11e0:
      uStack_2c8 = CONCAT71(uStack_2c8._1_7_,uVar6);
    }
    func_0x00010b1ed09c();
    func_0x00010b1ec3f0();
    FUN_10b1de4a4();
    func_0x00010b1ecf0c();
    plVar3 = plStack_2d8;
    iVar15 = (int)param_8;
    uVar6 = (char)uStack_2c8 == '\x01';
    if ((!(bool)uVar6) || (uVar6 = true, plVar12 = plStack_2e0, plStack_2e0 == plStack_2d8)) {
      func_0x00010b1ed188();
      if ((bVar5 & (*(byte *)(param_3[1] + 8) ^ 0xff)) != 0) {
        FUN_10b1d0dd0(&stack0x00000080,unaff_x22,param_3,plVar17,0);
        FUN_10b1d16b8(unaff_x19,
                      ((long)in_stack_00000088 - in_stack_00000080) / 0x48 +
                      (unaff_x19[1] - *unaff_x19) / 0x48);
        plVar11 = in_stack_00000088;
        plVar12 = unaff_x19;
        FUN_10b1de4e8(in_stack_00000080,in_stack_00000088,unaff_x19);
        func_0x00010b128754(&stack0x00000080);
        plVar14 = plVar17;
      }
LAB_10b1d141c:
      func_0x00010b1eadc4();
      if ((bool)uVar6) {
        return;
      }
      ___stack_chk_fail();
      if ((int)plVar11 != 0) {
        func_0x00010b1ebbe8();
        func_0x00010b128754(unaff_x19);
      }
      func_0x00010b1eb598();
      func_0x00010b1ecc8c(FUN_10b1d1508);
      puStack_220 = &stack0x00000150;
      func_0x00010b1ecb5c();
      func_0x00010b1eb674(&plStack_298,plVar11,plVar12,plVar14,&section_100000100);
      uVar10 = CONCAT71(uStack_287,bStack_288);
      if (((uVar10 == 0) || (*(char *)(uVar10 + 0x40) != '\x01')) ||
         (*(char *)(uVar10 + 0x130) != '\x01')) {
        uVar20 = 0;
      }
      else {
        if (iVar15 == 0) {
LAB_10b1d15e0:
          uVar6 = (undefined1)uVar10;
          FUN_10b1c7b9c();
          plStack_298 = (long *)0x0;
          plStack_290 = (long *)((ulong)plStack_290 & 0xffffffffffffff00);
          uStack_280 = 0;
          alStack_278[0] = 0;
          func_0x00010b1ee4b8(&uStack_2e8);
          func_0x00010b1ebe44();
          func_0x00010b1eb910();
          if ((char)plStack_2a0 != '\x01') {
            func_0x00010b1ee004();
            func_0x00010b1ee0b0();
            func_0x00010b1ec928();
            return;
          }
          uStack_2a8 = CONCAT11(uStack_2a8._1_1_,uVar6);
          plStack_8 = plStack_2e0;
          uStack_10 = uStack_2e8;
          uStack_2e8 = 0;
          plStack_2e0 = (long *)0x0;
          param_11 = uStack_2c8;
          param_10 = plStack_2d0;
          param_12 = lStack_2c0;
          plStack_2d8 = (long *)0x0;
          plStack_2d0 = (long *)0x0;
          uStack_2c8 = 0;
          lStack_2c0 = 0;
          param_13 = CONCAT71(uStack_2b7,uStack_2b8);
          param_14 = lStack_2b0;
          param_15._0_2_ = uStack_2a8;
          func_0x00010b1ec940();
          param_18 = (long **)((ulong)param_18 & 0xffffffffffffff00);
          func_0x00010b1ee004();
          goto LAB_10b1d1590;
        }
        if ((*(byte *)(uVar10 + 0x164) & 1) == 0) {
          lVar21 = *(long *)(uVar10 + 0x48);
          lVar18 = *(long *)(uVar10 + 0x50);
          while( true ) {
            if (lVar21 == lVar18) {
              uVar10 = (ulong)bStack_288;
              goto LAB_10b1d15e0;
            }
            FUN_10b2029a0();
            FUN_10b1231f8();
            if (((param_7 & 1) != 0) &&
               (0 < (int)*(uint *)(uVar10 + 0x50) &&
                unaff_x30 < (long)((ulong)*(uint *)(uVar10 + 0x50) * 1000000))) break;
            lVar21 = lVar21 + 0x88;
          }
        }
        uVar20 = 1;
      }
      func_0x00010b1ec928(uVar20);
      param_18 = (long **)CONCAT71(param_18._1_7_,extraout_w8);
LAB_10b1d1590:
      func_0x00010b1ee0b0();
      return;
    }
    plVar13 = plStack_2e0;
    if ((char)plStack_2d8[-1] == '\x01') {
      lVar21 = plStack_2d8[-2];
    }
    else {
      lVar21 = 0;
    }
    for (; plVar13 != plVar3; plVar13 = plVar13 + 8) {
      if ((char)plVar13[7] == '\x01') {
        unaff_x30 = plVar13[6] * -1000;
      }
      else {
        unaff_x30 = 0;
      }
      param_7 = 1;
      plVar14 = plVar13 + 3;
      unaff_x30 = unaff_x30 + (long)plVar7;
      param_8 = uStack_2e8 >> 0x20;
      plVar12 = plVar13;
      FUN_10b1d1508(&stack0x00000080,unaff_x22,plVar13,plVar14,plVar17);
      uVar6 = in_stack_000000d0 == '\0' && bVar5 == false;
      bVar5 = in_stack_000000d0 != '\0' || bVar5 != false;
      if ((in_stack_000000c8 & 1) != 0) {
        plVar11 = &stack0x00000080;
        FUN_10b1d83e8(unaff_x19);
        if ((*(byte *)(param_3[1] + 8) & 1) == 0) {
          puVar9 = param_3;
          (*(code *)*param_3)();
          iVar15 = (int)param_8;
          if (((ulong)puVar9 & 1) != 0) {
            func_0x00010b1edb8c();
            func_0x00010b1ed188();
            goto LAB_10b1d141c;
          }
        }
      }
      func_0x00010b1edb8c();
    }
    func_0x00010b1ed188();
  } while( true );
}



/* Entry: 10b1cdf40; end: 10b1ce34b;  */

long FUN_10b1cdf40(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  char cVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  long unaff_x19;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 uStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 uStack_180;
  long alStack_178 [10];
  long lStack_128;
  long lStack_120;
  undefined1 auStack_118 [8];
  long lStack_110;
  undefined1 uStack_108;
  undefined8 uStack_107;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  char cStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  char cStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 uStack_a0;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  char cStack_78;
  int iStack_38;
  undefined8 uStack_30;
  undefined7 uStack_28;
  undefined1 uStack_21;
  undefined7 uStack_20;
  
  func_0x00010b1ec024();
  func_0x00010b1eae28();
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  cVar4 = *(char *)(unaff_x19 + 0x58);
  __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x18);
  uVar7 = cVar4 == '\x01';
  if ((bool)uVar7) {
    __ZNSt3__15mutex4lockEv(unaff_x19 + 0x448);
    lVar10 = *(long *)(unaff_x19 + 0x488);
    func_0x00010b1edeb4();
    uVar7 = 0;
    if (lVar10 == -0x8000000000000000) {
      uStack_1b0 = 0;
      uStack_1a0 = 0;
      func_0x00010bccbc98(alStack_178,unaff_x19 + 0x80,&UNK_10f73827b,0x2a);
      lVar10 = *(long *)(alStack_178[0] + 8);
      lStack_120 = *(long *)(alStack_178[0] + 0x10);
      lStack_128 = lVar10;
      if (lStack_120 != 0) {
        do {
          func_0x00010b1eaf98();
          lVar10 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      FUN_10b1fa9a0(auStack_118,*(undefined8 *)(lVar10 + 0x10));
      lStack_d0 = lStack_110;
      bVar2 = cStack_f0 == '\0';
      if (bVar2) {
        uStack_108 = 0;
      }
      else {
        uStack_28 = uStack_ff;
        uStack_30 = uStack_107;
        uStack_21 = uStack_f8;
        uStack_20 = uStack_f7;
        cStack_f0 = '\0';
      }
      cStack_b0 = !bVar2;
      lStack_110 = 0;
      puStack_e0 = (undefined8 *)0x0;
      puStack_d8 = (undefined8 *)0x0;
      puStack_e8 = (undefined8 *)0x0;
      uStack_bf = uStack_28;
      uStack_c7 = (undefined7)uStack_30;
      uStack_c0 = (undefined1)((ulong)uStack_30 >> 0x38);
      uStack_b8 = uStack_21;
      uStack_b7 = uStack_20;
      ppuStack_a8 = &puStack_e8;
      uStack_a0 = 0;
      uStack_c8 = uStack_108;
      while (puVar5 = puStack_e8, cStack_b0 == '\x01' && lStack_d0 != 0) {
        if (puStack_e0 < puStack_d8) {
          func_0x00010b1ed5a4(CONCAT71(uStack_c7,uStack_c8));
          puVar11 = (undefined8 *)(extraout_x8_00 + 0x18);
        }
        else {
          lVar10 = (long)puStack_e0 - (long)puStack_e8;
          if (0xaaaaaaaaaaaaaaa < lVar10 / 0x18 + 1U) {
            FUN_10b1d9360();
            goto LAB_10b1ce284;
          }
          func_0x00010b1ec290();
          uVar3 = extraout_x8_01;
          if (0x555555555555554 < extraout_x9) {
            uVar3 = 0xaaaaaaaaaaaaaaa;
          }
          if (0xaaaaaaaaaaaaaaa < uVar3) {
            func_0x000104bd35f4();
            goto LAB_10b1ce284;
          }
          lVar8 = uVar3 * 0x18;
          __Znwm();
          puVar1 = (undefined8 *)(lVar8 + lVar10);
          puVar9 = (undefined8 *)(lVar8 + uVar3 * 0x18);
          puVar1[1] = CONCAT71(uStack_bf,uStack_c0);
          *puVar1 = CONCAT71(uStack_c7,uStack_c8);
          puVar1[2] = CONCAT71(uStack_b7,uStack_b8);
          puVar11 = puVar1 + 3;
          func_0x00010b1ebb40();
          puStack_e8 = puVar1 + (lVar10 / -0x18) * 3;
          puStack_d8 = puVar9;
          if (puVar5 != (undefined8 *)0x0) {
            puStack_e0 = puVar11;
            func_0x00010b1eb70c();
          }
        }
        puStack_e0 = puVar11;
        FUN_10b1d936c(&lStack_d0);
      }
      uStack_a0 = 1;
      func_0x00010b1d93f0(&ppuStack_a8);
      puVar1 = puStack_d8;
      puVar11 = puStack_e0;
      puVar5 = puStack_e8;
      puStack_198 = puStack_e8;
      puStack_190 = puStack_e0;
      puStack_188 = puStack_d8;
      puStack_e0 = (undefined8 *)0x0;
      puStack_d8 = (undefined8 *)0x0;
      puStack_e8 = (undefined8 *)0x0;
      uStack_180 = 1;
      FUN_10b1d9418(&puStack_e8);
      FUN_10b1d942c(auStack_118);
      func_0x00010b1ece74();
      func_0x00010bccbe4c(alStack_178);
      func_0x00010b1ed214();
      puStack_90 = puVar5;
      puStack_88 = puVar11;
      puStack_80 = puVar1;
      puStack_190 = (undefined8 *)0x0;
      puStack_188 = (undefined8 *)0x0;
      puStack_198 = (undefined8 *)0x0;
      cStack_78 = '\x01';
      iStack_38 = 0;
      func_0x00010b1ec9e4();
      puStack_198 = (undefined8 *)((ulong)puStack_198 & 0xffffffffffffff00);
      uStack_180 = 0;
      if (iStack_38 == 0) {
        func_0x00010b1ec880();
        uVar7 = cStack_78 == '\x01';
        if (!(bool)uVar7) goto LAB_10b1ce228;
        uStack_1c8 = *(undefined8 *)(extraout_x9_00 + 0x90);
        lStack_1d0 = *(long *)(extraout_x9_00 + 0x88);
        puStack_1c0 = puStack_80;
        puStack_88 = (undefined8 *)0x0;
        puStack_80 = (undefined8 *)0x0;
        puStack_90 = (undefined8 *)0x0;
        uStack_1b8 = 1;
        func_0x00010b1ec9e4();
        FUN_10b1d9484(&puStack_90);
        func_0x00010b1ec6d0();
        __ZNSt3__15mutex4lockEv(unaff_x19 + 0x448);
        lVar10 = *(long *)(lStack_1d0 + 0x10);
        *(long *)(unaff_x19 + 0x488) = lVar10;
        __ZNSt3__15mutex6unlockEv(unaff_x19 + 0x448);
      }
      else {
        uVar7 = iStack_38 == 1;
        if (!(bool)uVar7) goto LAB_10b1ce280;
        func_0x00010b1ec880();
LAB_10b1ce228:
        func_0x00010b1ec9e4();
        func_0x00010b1eda60();
        func_0x00010b1ec6d0();
        lVar10 = 0;
      }
      FUN_10b1d945c(&lStack_1d0);
    }
  }
  else {
    lVar10 = 0;
  }
  func_0x00010b1eadc4();
  if ((bool)uVar7) {
    return lVar10;
  }
  ___stack_chk_fail();
LAB_10b1ce280:
  func_0x00010563ab98();
LAB_10b1ce284:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10b1ce288);
  (*pcVar6)();
}



/* Entry: 10b1ce34c; end: 10b1ce74f;  */

/* WARNING: Removing unreachable block (ram,0x00010b1ce62c) */

void FUN_10b1ce34c(undefined8 param_1,undefined8 *****param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined1 uVar3;
  long lVar4;
  long *extraout_x8;
  long extraout_x8_00;
  undefined8 *****extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  ulong extraout_x9_00;
  undefined8 *****pppppuVar5;
  int extraout_w11;
  int iVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  long lVar9;
  long lVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****unaff_x27;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuStack_1e0;
  undefined8 ****ppppuStack_1d8;
  undefined8 ****ppppuStack_1d0;
  undefined1 uStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined1 uStack_1b0;
  undefined8 ****ppppuStack_1a8;
  undefined8 ****ppppuStack_1a0;
  undefined8 ****ppppuStack_198;
  char cStack_190;
  long alStack_188 [10];
  long lStack_138;
  long lStack_130;
  undefined1 auStack_128 [8];
  long lStack_120;
  undefined1 uStack_118;
  undefined8 uStack_117;
  undefined8 uStack_100;
  char cStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined8 ****ppppuStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined8 uStack_b8;
  char cStack_b0;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****ppppuStack_90;
  char cStack_88;
  int iStack_48;
  undefined8 uStack_40;
  undefined8 uStack_29;
  
  func_0x00010b1ec024();
  func_0x00010b1eae84();
  auStack_1c0[0] = 0;
  uStack_1b0 = 0;
  func_0x00010bccbc98(alStack_188,extraout_x9 + 0x80,&UNK_10f7382a6,0x2b);
  lVar9 = *(long *)(alStack_188[0] + 8);
  lStack_130 = *(long *)(alStack_188[0] + 0x10);
  lStack_138 = lVar9;
  if (lStack_130 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar9 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  FUN_10b1faac8(auStack_128,*(undefined8 *)(lVar9 + 0x10));
  lStack_d8 = lStack_120;
  bVar1 = cStack_f8 == '\0';
  if (bVar1) {
    uStack_118 = 0;
  }
  else {
    uStack_40 = uStack_117;
    uStack_29 = uStack_100;
    cStack_f8 = '\0';
  }
  cStack_b0 = !bVar1;
  lStack_120 = 0;
  ppppuStack_e8 = (undefined8 *****)0x0;
  ppppuStack_e0 = (undefined8 *****)0x0;
  ppppuStack_f0 = (undefined8 *****)0x0;
  uStack_cf = uStack_40;
  uStack_b8 = uStack_29;
  ppppuStack_1e0 = &ppppuStack_f0;
  ppppuStack_1d8 = (undefined8 ****)((ulong)ppppuStack_1d8 & 0xffffffffffffff00);
  uStack_d0 = uStack_118;
  while (pppppuVar7 = (undefined8 *****)ppppuStack_f0, iVar6 = (int)param_2,
        cStack_b0 == '\x01' && lStack_d8 != 0) {
    if (ppppuStack_e8 < ppppuStack_e0) {
      func_0x00010b1ee17c();
      pppppuVar7 = param_2;
    }
    else {
      lVar9 = (long)ppppuStack_e8 - (long)ppppuStack_f0;
      lVar10 = lVar9 >> 5;
      if (lVar10 + 1U >> 0x3b != 0) {
        FUN_10b1d94c8();
        goto LAB_10b1ce688;
      }
      func_0x00010b1ec290();
      unaff_x27 = extraout_x8_01;
      if (0x7fffffffffffffdf < extraout_x9_00) {
        unaff_x27 = (undefined8 *****)0x7ffffffffffffff;
      }
      if ((ulong)unaff_x27 >> 0x3b != 0) {
        func_0x000104bd35f4();
        goto LAB_10b1ce688;
      }
      lVar4 = (long)unaff_x27 << 5;
      __Znwm();
      pppppuVar8 = (undefined8 *****)(lVar4 + (long)unaff_x27 * 0x20);
      func_0x00010b1ee17c(lVar4 + lVar9);
      pppppuVar11 = (undefined8 *****)(extraout_x8_02 + lVar10 * -0x20);
      func_0x00010b1ebb40();
      ppppuStack_f0 = pppppuVar11;
      ppppuStack_e0 = pppppuVar8;
      if (pppppuVar7 != (undefined8 *****)0x0) {
        ppppuStack_e8 = unaff_x27;
        func_0x00010b1eb70c();
      }
    }
    ppppuStack_e8 = unaff_x27;
    FUN_10b1d94d4(&lStack_d8);
    param_2 = pppppuVar7;
  }
  func_0x00010b1ed494();
  func_0x00010b1d9578();
  ppppuVar13 = ppppuStack_e0;
  ppppuVar12 = ppppuStack_e8;
  pppppuVar7 = (undefined8 *****)ppppuStack_f0;
  ppppuStack_1a8 = ppppuStack_f0;
  ppppuStack_1a0 = ppppuStack_e8;
  ppppuStack_198 = ppppuStack_e0;
  ppppuStack_e8 = (undefined8 *****)0x0;
  ppppuStack_e0 = (undefined8 *****)0x0;
  ppppuStack_f0 = (undefined8 *****)0x0;
  cStack_190 = (char)param_2;
  FUN_10b1d95a0(&ppppuStack_f0);
  FUN_10b1d95b4(auStack_128);
  FUN_10b1b7824(&lStack_138);
  func_0x00010bccbe4c(alStack_188);
  func_0x00010bccbdb4(alStack_188);
  ppppuStack_a0 = pppppuVar7;
  ppppuStack_98 = ppppuVar12;
  ppppuStack_90 = ppppuVar13;
  ppppuStack_1a0 = (undefined8 ****)0x0;
  ppppuStack_198 = (undefined8 ****)0x0;
  ppppuStack_1a8 = (undefined8 ****)0x0;
  iStack_48 = 0;
  cStack_88 = (char)param_2;
  func_0x00010b1ed260();
  ppppuVar12 = ppppuStack_98;
  ppppuStack_1a8 = (undefined8 ****)((ulong)ppppuStack_1a8 & 0xffffffffffffff00);
  cStack_190 = 0;
  if (iStack_48 == 0) {
    ppppuStack_1e0 = (undefined8 ****)((ulong)ppppuStack_1e0 & 0xffffffffffffff00);
    uStack_1c8 = 0;
    uVar3 = cStack_88 == '\x01';
    if ((bool)uVar3) {
      ppppuStack_1d8 = ppppuStack_98;
      ppppuStack_1e0 = ppppuStack_a0;
      ppppuStack_1d0 = ppppuStack_90;
      ppppuStack_98 = (undefined8 *****)0x0;
      ppppuStack_90 = (undefined8 *****)0x0;
      ppppuStack_a0 = (undefined8 *****)0x0;
      iVar6 = 1;
      uStack_1c8 = 1;
      pppppuVar7 = (undefined8 *****)ppppuVar12;
    }
    else {
      iVar6 = 0;
    }
  }
  else {
    uVar3 = iStack_48 == 1;
    if (!(bool)uVar3) goto LAB_10b1ce684;
    func_0x00010b1ed454();
  }
  func_0x00010b1ed260();
  func_0x00010b1edde4();
  FUN_10b1b78d0(auStack_1c0);
  pppppuVar8 = (undefined8 *****)ppppuStack_1e0;
  if (iVar6 != 0) {
    for (; uVar3 = true, pppppuVar8 != pppppuVar7; pppppuVar8 = pppppuVar8 + 4) {
      pppppuVar11 = pppppuVar8;
      if (*(char *)(pppppuVar8 + 3) != '\x01' || (long)pppppuVar8[2] < 1) goto LAB_10b1ce5e0;
    }
    goto LAB_10b1ce640;
  }
LAB_10b1ce650:
  func_0x00010b1ec2c8();
  FUN_10b1d95e4(&ppppuStack_1e0);
  func_0x00010b1eadc4();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1ce684:
  func_0x00010563ab98();
LAB_10b1ce688:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1ce68c);
  (*pcVar2)();
LAB_10b1ce5e0:
  while (pppppuVar5 = pppppuVar11, pppppuVar11 = pppppuVar5 + 4, pppppuVar11 != pppppuVar7) {
    if (*(char *)(pppppuVar5 + 7) == '\x01' && 0 < (long)pppppuVar5[6]) {
      ppppuVar12 = *pppppuVar11;
      ppppuVar14 = pppppuVar5[7];
      ppppuVar13 = pppppuVar5[6];
      pppppuVar8[1] = pppppuVar5[5];
      *pppppuVar8 = ppppuVar12;
      pppppuVar8[3] = ppppuVar14;
      pppppuVar8[2] = ppppuVar13;
      pppppuVar8 = pppppuVar8 + 4;
    }
  }
  uVar3 = pppppuVar8 == (undefined8 *****)ppppuStack_1d8;
  pppppuVar7 = (undefined8 *****)ppppuStack_1d8;
  if (!(bool)uVar3) {
    uVar3 = true;
    pppppuVar7 = pppppuVar8;
    ppppuStack_1d8 = pppppuVar8;
  }
LAB_10b1ce640:
  *extraout_x8 = (long)ppppuStack_1e0;
  extraout_x8[1] = (long)pppppuVar7;
  extraout_x8[2] = (long)ppppuStack_1d0;
  goto LAB_10b1ce650;
}



/* Entry: 10b1ce750; end: 10b1cf4db;  */

void FUN_10b1ce750(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long **pplVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  ulong *puVar8;
  long lVar9;
  char extraout_w8;
  byte extraout_w8_00;
  int iVar10;
  undefined8 extraout_x8;
  long ***extraout_x8_00;
  long extraout_x8_01;
  long *****ppppplVar11;
  long *****extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x8_06;
  long ****pppplVar12;
  long ****extraout_x8_07;
  long ***ppplVar13;
  long ***extraout_x8_08;
  long ***extraout_x8_09;
  long ***extraout_x8_10;
  long *****extraout_x9;
  long *****ppppplVar14;
  long *****extraout_x9_00;
  ulong uVar15;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  undefined8 *puVar16;
  long *****extraout_x9_03;
  long *****ppppplVar17;
  long ****pppplVar18;
  long ****extraout_x9_04;
  long ****extraout_x9_05;
  ulong uVar19;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  long *****extraout_x10;
  ulong extraout_x10_00;
  long ***ppplVar20;
  long ***extraout_x10_01;
  int extraout_w11;
  int extraout_w11_00;
  long *****ppppplVar21;
  long *****extraout_x11;
  long *****extraout_x11_00;
  long ****pppplVar22;
  long ****pppplVar23;
  long ****extraout_x11_01;
  long ****extraout_x11_02;
  long *****extraout_x12;
  long ***extraout_x12_00;
  long *****ppppplVar24;
  long *plVar25;
  long ****pppplVar26;
  long unaff_x21;
  long ****pppplVar27;
  long ****pppplVar28;
  long ***ppplVar29;
  ulong uVar30;
  long *****unaff_x25;
  long *****ppppplVar31;
  long ****pppplVar32;
  ulong uVar33;
  long *****ppppplVar34;
  ulong uStack_440;
  long ****pppplStack_438;
  long ****pppplStack_430;
  long ***ppplStack_428;
  undefined4 uStack_420;
  long ****pppplStack_410;
  long ****pppplStack_408;
  long ***ppplStack_400;
  long **pplStack_3f0;
  long **pplStack_3e8;
  long **pplStack_3e0;
  byte bStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  char cStack_3b8;
  long alStack_3a8 [10];
  undefined1 auStack_358 [296];
  long **pplStack_230;
  long ***ppplStack_228;
  long ***ppplStack_220;
  undefined1 auStack_218 [16];
  undefined1 uStack_208;
  long alStack_200 [10];
  long lStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long ****pppplStack_198;
  long ****pppplStack_190;
  long ***ppplStack_180;
  long ***ppplStack_178;
  long ***ppplStack_170;
  long ****pppplStack_168;
  byte bStack_158;
  int iStack_120;
  ulong auStack_f0 [12];
  int iStack_90;
  undefined8 uStack_10;
  
  func_0x00010b1ec024();
  func_0x00010b1eb8e4();
  func_0x00010b1eaf40();
  uStack_10 = extraout_x8;
  func_0x000107c27f70(alStack_200);
  uStack_440 = uStack_440 & 0xffffffffffffff00;
  pppplStack_430 = (long ****)((ulong)pppplStack_430 & 0xffffffffffffff00);
  func_0x00010bccbc98(alStack_3a8,unaff_x21 + 0x80,&UNK_10f73833e,0x3e);
  ppplVar29 = *(long ****)(alStack_3a8[0] + 8);
  pplStack_3e8 = *(long ***)(alStack_3a8[0] + 0x10);
  pplStack_3f0 = (long **)ppplVar29;
  if ((long ***)pplStack_3e8 != (long ***)0x0) {
    do {
      func_0x00010b1eaf98();
      ppplVar29 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  FUN_10b1fadb4(auStack_358,ppplVar29[2],alStack_200,param_3 & 0xffffffff | 0x100000000);
  FUN_10b1d3ecc(&pplStack_230,auStack_358);
  ppplStack_178 = ppplStack_228;
  ppplStack_180 = (long ***)pplStack_230;
  ppplStack_170 = ppplStack_220;
  ppplStack_220 = (long ***)0x0;
  ppplStack_228 = (long ***)0x0;
  pplStack_230 = (long **)0x0;
  pppplStack_168._0_1_ = 1;
  FUN_10b1d8ae4(&pplStack_230);
  FUN_10b1d4718(auStack_358);
  FUN_10b1b7824(&pplStack_3f0);
  func_0x00010bccbe4c(alStack_3a8);
  func_0x00010b1ecedc();
  FUN_10b1d4780(auStack_f0,&ppplStack_180);
  func_0x00010b1ecf9c();
  if (iStack_90 == 1) {
    func_0x00010b1d47e4(auStack_f0);
    ppplStack_180 = (long ***)((ulong)ppplStack_180 & 0xffffffffffffff00);
    pppplStack_168 = (long ****)((ulong)pppplStack_168._1_7_ << 8);
    if (iStack_90 != 1) goto LAB_10b1ce87c;
    FUN_10b1d481c(&uStack_3d0,&ppplStack_180);
  }
  else {
    ppplStack_180 = (long ***)((ulong)ppplStack_180 & 0xffffffffffffff00);
    pppplStack_168 = (long ****)((ulong)pppplStack_168._1_7_ << 8);
LAB_10b1ce87c:
    puVar8 = auStack_f0;
    func_0x00010b1d4800();
    uStack_3d0 = uStack_3d0 & 0xffffffffffffff00;
    cStack_3b8 = '\0';
    if ((char)puVar8[3] == '\x01') {
      uStack_3c8 = puVar8[1];
      uStack_3d0 = *puVar8;
      uStack_3c0 = puVar8[2];
      func_0x00010b1eb5fc();
      cStack_3b8 = extraout_w8;
    }
  }
  func_0x00010b1ecf9c();
  func_0x00010b1ebfa4(auStack_f0);
  func_0x00010b1ec6d0();
  func_0x000107c279a4(alStack_200);
  func_0x000107c27f70(&pppplStack_410);
  auStack_218[0] = 0;
  uStack_208 = 0;
  func_0x00010bccbc98(alStack_200,unaff_x21 + 0x80,&UNK_10f738301,0x3c);
  lVar9 = *(long *)(alStack_200[0] + 8);
  lStack_1a8 = *(long *)(alStack_200[0] + 0x10);
  lStack_1b0 = lVar9;
  if (lStack_1a8 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar9 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  FUN_10b1fad4c(auStack_f0,*(undefined8 *)(lVar9 + 0x10),&pppplStack_410,
                param_3 & 0xffffffff | 0x100000000);
  FUN_10b1d4fe0(&uStack_1a0,auStack_f0);
  pppplStack_438 = pppplStack_198;
  uStack_440 = uStack_1a0;
  pppplStack_430 = pppplStack_190;
  pppplStack_190 = (long ****)0x0;
  pppplStack_198 = (long ****)0x0;
  uStack_1a0 = 0;
  ppplStack_428._0_1_ = 1;
  FUN_10b1d4f78(&uStack_1a0);
  FUN_10b1d57fc(auStack_f0);
  FUN_10b1b7824(&lStack_1b0);
  func_0x00010bccbe4c(alStack_200);
  func_0x00010bccbdb4(alStack_200);
  FUN_10b1d5864(&ppplStack_180,&uStack_440);
  func_0x00010b1ed178();
  if (iStack_120 == 1) {
    func_0x00010b1d58c8(&ppplStack_180);
    uStack_440 = uStack_440 & 0xffffffffffffff00;
    ppplStack_428 = (long ***)((ulong)ppplStack_428._1_7_ << 8);
    if (iStack_120 != 1) goto LAB_10b1ce9d8;
    FUN_10b1d5900(&pplStack_3f0,&uStack_440);
  }
  else {
    uStack_440 = uStack_440 & 0xffffffffffffff00;
    ppplStack_428 = (long ***)((ulong)ppplStack_428._1_7_ << 8);
LAB_10b1ce9d8:
    pppplVar12 = &ppplStack_180;
    func_0x00010b1d58e4();
    func_0x00010b1ee4c4();
    if (*(char *)(pppplVar12 + 3) == '\x01') {
      pplStack_3e8 = (long **)pppplVar12[1];
      pplStack_3f0 = (long **)*pppplVar12;
      pplStack_3e0 = (long **)pppplVar12[2];
      func_0x00010b1eb5fc();
      bStack_3d8 = extraout_w8_00;
    }
  }
  func_0x00010b1ed178();
  func_0x00010b1ec228(&ppplStack_180);
  FUN_10b1b78d0(auStack_218);
  func_0x00010b1eda44();
  uVar33 = uStack_3c8;
  uVar6 = 0;
  if ((((cStack_3b8 == '\x01') && (uVar6 = uStack_3d0 == uStack_3c8, !(bool)uVar6)) &&
      ((bStack_3d8 & 1) != 0)) && (uVar6 = pplStack_3f0 == pplStack_3e8, !(bool)uVar6)) {
    pppplStack_438 = (long ****)0x0;
    uStack_440 = 0;
    ppplStack_428 = (long ***)0x0;
    pppplStack_430 = (long ****)0x0;
    uStack_420 = 0x3f800000;
    uVar19 = uStack_3d0;
    while( true ) {
      pplVar2 = pplStack_3e8;
      uVar5 = (long)(uVar19 - uVar33) < 0;
      uVar6 = uVar19 == uVar33;
      ppplVar29 = (long ***)pplStack_3f0;
      if ((bool)uVar6) break;
      func_0x0001072e787c(uVar19 + 0x20);
      FUN_10b1bcb0c(&pppplStack_410,uVar19);
      func_0x00010b1eca94(&ppplStack_180);
      pppplStack_168 = pppplStack_410;
      pppplStack_410 = (long ****)0x0;
      FUN_10b1de9cc(&pppplStack_410);
      ppppplVar17 = (long *****)&ppplStack_428;
      func_0x000107c278c4(ppppplVar17,&ppplStack_180);
      ppppplVar14 = (long *****)pppplStack_438;
      ppppplVar34 = ppppplVar17;
      if ((long *****)pppplStack_438 != (long *****)0x0) {
        uVar30 = (long)pppplStack_438 - 1;
        if (((ulong)pppplStack_438 & uVar30) == 0) {
          unaff_x25 = (long *****)(uVar30 & (ulong)ppppplVar17);
          uVar6 = true;
          uVar5 = false;
        }
        else {
          uVar5 = (long)ppppplVar17 - (long)pppplStack_438 < 0;
          uVar6 = ppppplVar17 == (long *****)pppplStack_438;
          unaff_x25 = ppppplVar17;
          if (pppplStack_438 <= ppppplVar17) {
            uVar1 = 0;
            if ((long *****)pppplStack_438 != (long *****)0x0) {
              uVar1 = (ulong)ppppplVar17 / (ulong)pppplStack_438;
            }
            unaff_x25 = (long *****)((long)ppppplVar17 - uVar1 * (long)pppplStack_438);
          }
        }
        plVar25 = *(long **)(uStack_440 + (long)unaff_x25 * 8);
        if (plVar25 != (long *)0x0) {
          do {
            while( true ) {
              plVar25 = (long *)*plVar25;
              if (plVar25 == (long *)0x0) goto LAB_10b1ceb48;
              ppppplVar11 = (long *****)plVar25[1];
              uVar5 = (long)ppppplVar11 - (long)ppppplVar17 < 0;
              uVar6 = ppppplVar11 == ppppplVar17;
              if (!(bool)uVar6) break;
              ppppplVar34 = (long *****)(plVar25 + 2);
              func_0x000107c278d0(ppppplVar34,&ppplStack_180);
              if (((ulong)ppppplVar34 & 1) != 0) goto LAB_10b1cedb4;
            }
            if (((ulong)ppppplVar14 & uVar30) == 0) {
              ppppplVar11 = (long *****)((ulong)ppppplVar11 & uVar30);
            }
            else if (ppppplVar14 <= ppppplVar11) {
              uVar1 = 0;
              if (ppppplVar14 != (long *****)0x0) {
                uVar1 = (ulong)ppppplVar11 / (ulong)ppppplVar14;
              }
              ppppplVar11 = (long *****)((long)ppppplVar11 - uVar1 * (long)ppppplVar14);
            }
            uVar5 = (long)ppppplVar11 - (long)unaff_x25 < 0;
            uVar6 = ppppplVar11 == unaff_x25;
          } while ((bool)uVar6);
        }
      }
LAB_10b1ceb48:
      func_0x00010b1ec5d4();
      ppplStack_400 = (long ***)0x1;
      pppplStack_410 = (long ****)ppppplVar34;
      pppplStack_408 = (long ****)&pppplStack_430;
      *ppppplVar34 = (long ****)0x0;
      ppppplVar34[1] = (long ****)ppppplVar17;
      ppppplVar34[3] = (long ****)ppplStack_178;
      ppppplVar34[2] = (long ****)ppplStack_180;
      pppplVar12 = pppplStack_168;
      ppplVar29 = ppplStack_170;
      ppplStack_178 = (long ***)0x0;
      ppplStack_180 = (long ***)0x0;
      ppplStack_170 = (long ***)0x0;
      pppplStack_168 = (long ****)0x0;
      ppppplVar34[4] = (long ****)ppplVar29;
      ppppplVar34[5] = pppplVar12;
      ppppplVar11 = ppppplVar34;
      func_0x00010b1ebbc8(ppplStack_428);
      if ((ppppplVar14 == (long *****)0x0) || (func_0x00010b1ebbbc(), (bool)uVar5)) {
        bVar4 = (long *****)0x2 < ppppplVar14;
        bVar7 = ppppplVar14 == (long *****)0x3;
        func_0x00010b1eaeec((long)ppppplVar14 << 1);
        ppppplVar31 = extraout_x8_02;
        if (!bVar4 || bVar7) {
          ppppplVar31 = extraout_x9;
        }
        if ((long)ppppplVar31 - 1U == 0) {
          ppppplVar31 = (long *****)0x2;
        }
        else if (((ulong)ppppplVar31 & (long)ppppplVar31 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          ppppplVar11 = ppppplVar31;
        }
        pppplVar12 = pppplStack_438;
        if (pppplStack_438 < ppppplVar31) {
LAB_10b1cebf4:
          if ((ulong)ppppplVar31 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b1cf2d0;
          }
          lVar9 = (long)ppppplVar31 << 3;
          __Znwm(lVar9);
          func_0x00010b1e7d28(&uStack_440,lVar9);
          ppppplVar14 = (long *****)0x0;
          uVar30 = uStack_440;
          pppplStack_438 = (long ****)ppppplVar31;
          while (ppppplVar31 != ppppplVar14) {
            func_0x00010b1ebda4();
            uVar30 = extraout_x8_03;
            ppppplVar14 = extraout_x9_00;
          }
          ppppplVar14 = ppppplVar31;
          if ((long *****)pppplStack_430 != (long *****)0x0) {
            ppppplVar11 = (long *****)pppplStack_430[1];
            uVar15 = (long)ppppplVar31 - 1;
            uVar1 = 0;
            if (ppppplVar31 != (long *****)0x0) {
              uVar1 = (ulong)ppppplVar11 / (ulong)ppppplVar31;
            }
            ppppplVar21 = ppppplVar11;
            if (ppppplVar31 <= ppppplVar11) {
              ppppplVar21 = (long *****)((long)ppppplVar11 - uVar1 * (long)ppppplVar31);
            }
            if (((ulong)ppppplVar31 & uVar15) == 0) {
              ppppplVar21 = (long *****)((ulong)ppppplVar11 & uVar15);
            }
            *(long ******)(uVar30 + (long)ppppplVar21 * 8) = &pppplStack_430;
            ppppplVar11 = (long *****)pppplStack_430;
            while (ppppplVar11 = (long *****)*ppppplVar11, ppppplVar11 != (long *****)0x0) {
              ppppplVar24 = (long *****)ppppplVar11[1];
              if (((ulong)ppppplVar31 & uVar15) == 0) {
                ppppplVar24 = (long *****)((ulong)ppppplVar24 & uVar15);
              }
              else if (ppppplVar31 <= ppppplVar24) {
                uVar1 = 0;
                if (ppppplVar31 != (long *****)0x0) {
                  uVar1 = (ulong)ppppplVar24 / (ulong)ppppplVar31;
                }
                ppppplVar24 = (long *****)((long)ppppplVar24 - uVar1 * (long)ppppplVar31);
              }
              if (ppppplVar24 != ppppplVar21) {
                if (*(long *)(uVar30 + (long)ppppplVar24 * 8) == 0) {
                  func_0x00010b1ebf54();
                  uVar30 = extraout_x8_05;
                  uVar15 = extraout_x9_02;
                  ppppplVar11 = extraout_x12;
                  ppppplVar21 = extraout_x11_00;
                }
                else {
                  func_0x00010b1ead88();
                  uVar30 = extraout_x8_04;
                  uVar15 = extraout_x9_01;
                  ppppplVar11 = extraout_x10;
                  ppppplVar21 = extraout_x11;
                }
              }
            }
          }
        }
        else {
          ppppplVar14 = (long *****)pppplStack_438;
          if (ppppplVar31 < pppplStack_438) {
            func_0x00010b1ebdb0((float)ppplStack_428,uStack_420);
            if ((pppplVar12 < (long *****)0x3) || (((ulong)pppplVar12 & (long)pppplVar12 - 1U) != 0)
               ) {
              __ZNSt3__112__next_primeEm();
            }
            else {
              func_0x00010b1ead68();
            }
            if (ppppplVar31 <= ppppplVar11) {
              ppppplVar31 = ppppplVar11;
            }
            ppppplVar14 = (long *****)pppplStack_438;
            if (ppppplVar31 < pppplVar12) {
              if (ppppplVar31 != (long *****)0x0) goto LAB_10b1cebf4;
              func_0x00010b1e7d28(&uStack_440,0);
              pppplStack_438 = (long ****)0x0;
              ppppplVar14 = (long *****)0x0;
            }
          }
        }
        if (((ulong)ppppplVar14 & (long)ppppplVar14 - 1U) == 0) {
          uVar6 = 1;
          unaff_x25 = (long *****)((long)ppppplVar14 - 1U & (ulong)ppppplVar17);
        }
        else {
          uVar6 = ppppplVar17 == ppppplVar14;
          unaff_x25 = ppppplVar17;
          if (ppppplVar14 <= ppppplVar17) {
            uVar30 = 0;
            if (ppppplVar14 != (long *****)0x0) {
              uVar30 = (ulong)ppppplVar17 / (ulong)ppppplVar14;
            }
            unaff_x25 = (long *****)((long)ppppplVar17 - uVar30 * (long)ppppplVar14);
          }
        }
      }
      puVar16 = *(undefined8 **)(uStack_440 + (long)unaff_x25 * 8);
      if (puVar16 == (undefined8 *)0x0) {
        *ppppplVar34 = pppplStack_430;
        *(long ******)(uStack_440 + (long)unaff_x25 * 8) = &pppplStack_430;
        pppplStack_430 = (long ****)ppppplVar34;
        if (*ppppplVar34 != (long ****)0x0) {
          func_0x00010b1ed484();
          if ((bool)uVar6) {
            ppppplVar17 = (long *****)((ulong)extraout_x9_03 & extraout_x10_00);
          }
          else {
            ppppplVar17 = extraout_x9_03;
            if (ppppplVar14 <= extraout_x9_03) {
              uVar30 = 0;
              if (ppppplVar14 != (long *****)0x0) {
                uVar30 = (ulong)extraout_x9_03 / (ulong)ppppplVar14;
              }
              ppppplVar17 = (long *****)((long)extraout_x9_03 - uVar30 * (long)ppppplVar14);
            }
          }
          *(long ******)(extraout_x8_06 + (long)ppppplVar17 * 8) = ppppplVar34;
        }
      }
      else {
        *ppppplVar34 = (long ****)*puVar16;
        *puVar16 = ppppplVar34;
      }
      pppplStack_410 = (long ****)0x0;
      ppplStack_428 = (long ***)((long)ppplStack_428 + 1);
      func_0x00010b1e7d40(&pppplStack_410);
LAB_10b1cedb4:
      func_0x00010b1e7d94(&ppplStack_180);
      uVar19 = uVar19 + 0x110;
    }
    for (; uVar5 = (long)ppplVar29 - (long)pplVar2 < 0, ppplVar29 != (long ***)pplVar2;
        ppplVar29 = ppplVar29 + 0x19) {
      ppppplVar17 = (long *****)(ppplVar29 + 4);
      func_0x0001072e787c();
      pppplVar12 = pppplStack_438;
      if (((long *****)pppplStack_438 != (long *****)0x0) &&
         ((long ****)ppplStack_428 != (long ****)0x0)) {
        func_0x00010b1ed9d4(&uStack_440);
        uVar33 = (long)pppplVar12 - 1;
        if (((ulong)pppplVar12 & uVar33) == 0) {
          ppppplVar34 = (long *****)((ulong)ppppplVar17 & uVar33);
        }
        else {
          ppppplVar34 = ppppplVar17;
          if (pppplVar12 <= ppppplVar17) {
            uVar19 = 0;
            if ((long *****)pppplVar12 != (long *****)0x0) {
              uVar19 = (ulong)ppppplVar17 / (ulong)pppplVar12;
            }
            ppppplVar34 = (long *****)((long)ppppplVar17 - uVar19 * (long)pppplVar12);
          }
        }
        plVar25 = *(long **)(uStack_440 + (long)ppppplVar34 * 8);
        if (plVar25 != (long *)0x0) {
          do {
            while( true ) {
              plVar25 = (long *)*plVar25;
              if (plVar25 == (long *)0x0) goto LAB_10b1ceea4;
              ppppplVar14 = (long *****)plVar25[1];
              if (ppppplVar14 != ppppplVar17) break;
              iVar10 = (int)plVar25 + 0x10;
              func_0x00010b1ebe54();
              if (iVar10 != 0) {
                lVar9 = plVar25[5];
                FUN_10b1c46b8(&ppplStack_180,ppplVar29,*(undefined8 *)(unaff_x21 + 0x238));
                FUN_10b1d5c00(lVar9 + 0x48,&ppplStack_180);
                FUN_10b1d5ca0(&ppplStack_180);
                goto LAB_10b1ceea4;
              }
            }
            if (((ulong)pppplVar12 & uVar33) == 0) {
              ppppplVar14 = (long *****)((ulong)ppppplVar14 & uVar33);
            }
            else if (pppplVar12 <= ppppplVar14) {
              uVar19 = 0;
              if ((long *****)pppplVar12 != (long *****)0x0) {
                uVar19 = (ulong)ppppplVar14 / (ulong)pppplVar12;
              }
              ppppplVar14 = (long *****)((long)ppppplVar14 - uVar19 * (long)pppplVar12);
            }
          } while (ppppplVar14 == ppppplVar34);
        }
      }
LAB_10b1ceea4:
    }
    ppplVar29 = (long ***)0x0;
    uVar6 = 1;
    for (ppppplVar17 = (long *****)pppplStack_430; ppppplVar17 != (long *****)0x0;
        ppppplVar17 = (long *****)*ppppplVar17) {
      pppplVar12 = ppppplVar17[5];
      uVar5 = (long)pppplVar12[9] - (long)pppplVar12[10] < 0;
      uVar6 = pppplVar12[9] == pppplVar12[10];
      if (!(bool)uVar6) {
        ppplVar29 = (long ***)((long)ppplVar29 + (ulong)*(byte *)(pppplVar12 + 8));
      }
      FUN_10b1be528(&ppplStack_180);
      if ((bStack_158 & 1) != 0) {
        pppplVar12 = ppppplVar17[5];
        pppplStack_408 = (long ****)pppplVar12[10];
        pppplStack_410 = (long ****)pppplVar12[9];
        ppplStack_400 = pppplVar12[0xb];
        pppplVar12[10] = (long ***)0x0;
        pppplVar12[0xb] = (long ***)0x0;
        pppplVar12[9] = (long ***)0x0;
        FUN_10b1cf4dc(ppppplVar17[5] + 9);
        FUN_10b1b92e0(ppplStack_170,ppppplVar17[5]);
        pppplVar12 = pppplStack_408;
        ppppplVar34 = (long *****)pppplStack_410;
        while( true ) {
          uVar5 = (long)ppppplVar34 - (long)pppplVar12 < 0;
          uVar6 = ppppplVar34 == (long *****)pppplVar12;
          if ((bool)uVar6) break;
          ppppplVar34[0xd] = (long ****)0x0;
          ppppplVar34[0xe] = (long ****)0x0;
          ppppplVar34[0xf] = (long ****)0x0;
          func_0x00010b1eb6f8();
          func_0x00010b1ed90c();
          func_0x00010b1ec5e4();
          ppppplVar34 = ppppplVar34 + 0x11;
        }
        FUN_10b1d31b4(&pppplStack_410);
      }
      func_0x00010b1d3e60(&ppplStack_180);
    }
    func_0x00010b1ed284(&pppplStack_410);
    pppplVar12 = (long ****)ppplStack_400;
    func_0x00010b1ec238();
    iVar10 = (int)param_3;
    pppplVar28 = (long ****)(long)iVar10;
    pppplVar32 = (long ****)pppplVar12[0x17];
    if (pppplVar32 == (long ****)0x0) {
      pppplVar26 = (long ****)0x0;
    }
    else {
      uVar33 = (long)pppplVar32 - 1;
      if (((ulong)pppplVar32 & uVar33) == 0) {
        pppplVar26 = (long ****)(uVar33 & (ulong)pppplVar28);
        uVar6 = true;
        uVar5 = false;
      }
      else {
        uVar5 = (long)pppplVar32 - (long)pppplVar28 < 0;
        uVar6 = pppplVar32 == pppplVar28;
        pppplVar26 = pppplVar28;
        if (pppplVar32 <= pppplVar28) {
          uVar19 = 0;
          if (pppplVar32 != (long ****)0x0) {
            uVar19 = (ulong)pppplVar28 / (ulong)pppplVar32;
          }
          pppplVar26 = (long ****)((long)pppplVar28 - uVar19 * (long)pppplVar32);
        }
      }
      pppplVar27 = (long ****)pppplVar12[0x16][(long)pppplVar26];
      if (pppplVar27 != (long ****)0x0) {
        do {
          while( true ) {
            pppplVar27 = (long ****)*pppplVar27;
            if (pppplVar27 == (long ****)0x0) goto LAB_10b1cf02c;
            pppplVar18 = (long ****)pppplVar27[1];
            if (pppplVar18 != pppplVar28) break;
            uVar5 = *(int *)(pppplVar27 + 2) - iVar10 < 0;
            uVar6 = *(int *)(pppplVar27 + 2) == iVar10;
            if ((bool)uVar6) goto LAB_10b1cf288;
          }
          if (((ulong)pppplVar32 & uVar33) == 0) {
            pppplVar18 = (long ****)((ulong)pppplVar18 & uVar33);
          }
          else if (pppplVar32 <= pppplVar18) {
            uVar19 = 0;
            if (pppplVar32 != (long ****)0x0) {
              uVar19 = (ulong)pppplVar18 / (ulong)pppplVar32;
            }
            pppplVar18 = (long ****)((long)pppplVar18 - uVar19 * (long)pppplVar32);
          }
          uVar5 = (long)pppplVar18 - (long)pppplVar26 < 0;
          uVar6 = pppplVar18 == pppplVar26;
        } while ((bool)uVar6);
      }
    }
LAB_10b1cf02c:
    pppplVar27 = pppplVar12;
    func_0x00010b1ebccc();
    pppplVar18 = pppplVar12 + 0x18;
    ppplStack_170 = (long ***)0x1;
    *pppplVar27 = (long ***)0x0;
    pppplVar27[1] = (long ***)pppplVar28;
    *(int *)(pppplVar27 + 2) = iVar10;
    pppplVar27[3] = (long ***)0x0;
    pppplVar22 = pppplVar27;
    ppplStack_180 = (long ***)pppplVar27;
    ppplStack_178 = (long ***)pppplVar18;
    func_0x00010b1ebbc8(pppplVar12[0x19]);
    if ((pppplVar32 == (long ****)0x0) || (func_0x00010b1ebbbc(), (bool)uVar5)) {
      bVar4 = (long ****)0x2 < pppplVar32;
      bVar7 = pppplVar32 == (long ****)0x3;
      func_0x00010b1eaeec((long)pppplVar32 << 1);
      pppplVar26 = extraout_x8_07;
      if (!bVar4 || bVar7) {
        pppplVar26 = extraout_x9_04;
      }
      if ((long)pppplVar26 - 1U == 0) {
        pppplVar26 = (long ****)0x2;
      }
      else if (((ulong)pppplVar26 & (long)pppplVar26 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        pppplVar32 = (long ****)pppplVar12[0x17];
        pppplVar22 = pppplVar26;
      }
      if (pppplVar32 < pppplVar26) {
LAB_10b1cf0c8:
        if ((ulong)pppplVar26 >> 0x3d != 0) goto LAB_10b1cf2cc;
        lVar9 = (long)pppplVar26 << 3;
        __Znwm(lVar9);
        FUN_10b1e7dfc(pppplVar12 + 0x16,lVar9);
        pppplVar32 = (long ****)0x0;
        pppplVar12[0x17] = (long ***)pppplVar26;
        ppplVar13 = pppplVar12[0x16];
        while (pppplVar26 != pppplVar32) {
          func_0x00010b1ebda4();
          ppplVar13 = extraout_x8_08;
          pppplVar32 = extraout_x9_05;
        }
        ppplVar20 = *pppplVar18;
        pppplVar32 = pppplVar26;
        if (ppplVar20 != (long ***)0x0) {
          pppplVar22 = (long ****)ppplVar20[1];
          uVar19 = (long)pppplVar26 - 1;
          uVar33 = 0;
          if (pppplVar26 != (long ****)0x0) {
            uVar33 = (ulong)pppplVar22 / (ulong)pppplVar26;
          }
          pppplVar23 = pppplVar22;
          if (pppplVar26 <= pppplVar22) {
            pppplVar23 = (long ****)((long)pppplVar22 - uVar33 * (long)pppplVar26);
          }
          if (((ulong)pppplVar26 & uVar19) == 0) {
            pppplVar23 = (long ****)((ulong)pppplVar22 & uVar19);
          }
          ppplVar13[(long)pppplVar23] = (long **)pppplVar18;
          while (ppplVar20 = (long ***)*ppplVar20, ppplVar20 != (long ***)0x0) {
            pppplVar22 = (long ****)ppplVar20[1];
            if (((ulong)pppplVar26 & uVar19) == 0) {
              pppplVar22 = (long ****)((ulong)pppplVar22 & uVar19);
            }
            else if (pppplVar26 <= pppplVar22) {
              uVar33 = 0;
              if (pppplVar26 != (long ****)0x0) {
                uVar33 = (ulong)pppplVar22 / (ulong)pppplVar26;
              }
              pppplVar22 = (long ****)((long)pppplVar22 - uVar33 * (long)pppplVar26);
            }
            if (pppplVar22 != pppplVar23) {
              if (ppplVar13[(long)pppplVar22] == (long **)0x0) {
                func_0x00010b1ebf54();
                ppplVar13 = extraout_x8_10;
                uVar19 = extraout_x9_07;
                ppplVar20 = extraout_x12_00;
                pppplVar23 = extraout_x11_02;
              }
              else {
                func_0x00010b1ead88();
                ppplVar13 = extraout_x8_09;
                uVar19 = extraout_x9_06;
                ppplVar20 = extraout_x10_01;
                pppplVar23 = extraout_x11_01;
              }
            }
          }
        }
      }
      else if (pppplVar26 < pppplVar32) {
        func_0x00010b1ebdb0((float)pppplVar12[0x19],*(undefined4 *)(pppplVar12 + 0x1a));
        if ((pppplVar32 < (long ****)0x3) || (((ulong)pppplVar32 & (long)pppplVar32 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x00010b1ead68();
        }
        if (pppplVar26 <= pppplVar22) {
          pppplVar26 = pppplVar22;
        }
        if (pppplVar26 < pppplVar32) {
          if (pppplVar26 != (long ****)0x0) goto LAB_10b1cf0c8;
          FUN_10b1e7dfc(pppplVar12 + 0x16,0);
          pppplVar12[0x17] = (long ***)0x0;
          pppplVar32 = (long ****)0x0;
        }
        else {
          pppplVar32 = (long ****)pppplVar12[0x17];
        }
      }
      if (((ulong)pppplVar32 & (long)pppplVar32 - 1U) == 0) {
        uVar6 = 1;
        pppplVar26 = (long ****)((long)pppplVar32 - 1U & (ulong)pppplVar28);
      }
      else {
        uVar6 = pppplVar32 == pppplVar28;
        pppplVar26 = pppplVar28;
        if (pppplVar32 <= pppplVar28) {
          uVar33 = 0;
          if (pppplVar32 != (long ****)0x0) {
            uVar33 = (ulong)pppplVar28 / (ulong)pppplVar32;
          }
          pppplVar26 = (long ****)((long)pppplVar28 - uVar33 * (long)pppplVar32);
        }
      }
    }
    ppplVar13 = pppplVar12[0x16];
    if (ppplVar13[(long)pppplVar26] == (long **)0x0) {
      *pppplVar27 = *pppplVar18;
      *pppplVar18 = (long ***)pppplVar27;
      ppplVar13[(long)pppplVar26] = (long **)pppplVar18;
      if (*pppplVar27 != (long ***)0x0) {
        pppplVar28 = (long ****)(*pppplVar27)[1];
        if (((ulong)pppplVar32 & (long)pppplVar32 - 1U) == 0) {
          pppplVar28 = (long ****)((ulong)pppplVar28 & (long)pppplVar32 - 1U);
          uVar6 = true;
        }
        else {
          uVar6 = pppplVar28 == pppplVar32;
          if (pppplVar32 <= pppplVar28) {
            uVar33 = 0;
            if (pppplVar32 != (long ****)0x0) {
              uVar33 = (ulong)pppplVar28 / (ulong)pppplVar32;
            }
            pppplVar28 = (long ****)((long)pppplVar28 - uVar33 * (long)pppplVar32);
          }
        }
        ppplVar13[(long)pppplVar28] = (long **)pppplVar27;
      }
    }
    else {
      func_0x00010b1ec534();
    }
    ppplStack_180 = (long ***)0x0;
    pppplVar12[0x19] = (long ***)((long)pppplVar12[0x19] + 1);
    FUN_10b1e7e14(&ppplStack_180);
LAB_10b1cf288:
    pppplVar27[3] = ppplVar29;
    func_0x00010b1ecda8();
    FUN_10b1e7db4(&uStack_440);
  }
  FUN_10b1d59d8(&pplStack_3f0);
  FUN_10b1d48fc(&uStack_3d0);
  func_0x00010b1eaddc(uStack_10);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1cf2cc:
  func_0x000104bd35f4();
LAB_10b1cf2d0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10b1cf2d4);
  (*pcVar3)();
}



/* Entry: 10b1cf4dc; end: 10b1cf4e3;  */

void FUN_10b1cf4dc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb63c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x88;
    FUN_10b1d5ca0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b1cf4e4; end: 10b1cf62f;  */

undefined1 * FUN_10b1cf4e4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auStack_c8 [24];
  undefined4 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [16];
  long lStack_88;
  undefined4 uStack_7c;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  puVar3 = &stack0xffffffffffffff30;
  puVar4 = &stack0xffffffffffffff30;
  func_0x00010b1ebd8c();
  func_0x00010b1eaeac();
  uStack_7c = param_3;
  uStack_48 = extraout_x8;
  func_0x00010b1ebb5c(auStack_98);
  func_0x00010b1ebfcc(lStack_88);
  lVar1 = lStack_88 + 0x58;
  FUN_10b1cf630(lVar1,&uStack_7c);
  func_0x00010b1ecae0(auStack_c8);
  uStack_b0 = uStack_7c;
  plVar2 = &lStack_a8;
  func_0x00010b1e80f0(plVar2,unaff_x21 + 8);
  pcStack_78 = FUN_10b1e8f2c;
  ppuStack_70 = &PTR_FUN_110cc4848;
  func_0x00010b1edc98();
  *plVar2 = unaff_x21;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar2 + 1,auStack_c8);
  *(undefined4 *)(plVar2 + 4) = uStack_b0;
  plVar2[6] = lStack_a0;
  plVar2[5] = lStack_a8;
  lStack_a8 = 0;
  lStack_a0 = 0;
  plStack_68 = plVar2;
  FUN_10b1cf650(lVar1,&pcStack_78);
  func_0x00010b1eb08c(ppuStack_70);
  FUN_10b1cf73c(&stack0xffffffffffffff30);
  func_0x00010b1ebe94();
  func_0x00010b1eaddc(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010b1eb08c(ppuStack_70);
  FUN_10b1cf73c(&stack0xffffffffffffff30);
  func_0x00010b1ebe94();
  func_0x00010b1eb590();
  func_0x00010b1eb568();
  FUN_10b1e7e38();
  return puVar4 + 0x18;
}



/* Entry: 10b1cf630; end: 10b1cf64f;  */

long FUN_10b1cf630(long param_1)

{
  func_0x00010b1eb568();
  FUN_10b1e7e38();
  return param_1 + 0x18;
}



/* Entry: 10b1cf650; end: 10b1cf73b;  */

void FUN_10b1cf650(void)

{
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x00010b1ebd98();
  func_0x00010b1e812c(&lStack_40);
  if (lStack_40 == 0) {
    FUN_10b1e8158(&uStack_58,2);
    uStack_48 = uStack_58;
    uStack_58 = 0;
    func_0x00010b124bb4(&uStack_58);
    FUN_10b1e8494(&uStack_58,&uStack_48);
    FUN_10b1e84b0(&lStack_40,&uStack_58);
    FUN_10b1e8b38(&uStack_58);
    func_0x00010b1ed758();
    func_0x00010b1e84d4();
    func_0x00010b1e8b5c(&uStack_48);
  }
  lStack_50 = lStack_38;
  if (lStack_38 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  FUN_10b1e850c(extraout_x8,2,&uStack_58);
  FUN_10b1e8b38(&uStack_58);
  FUN_10b1e8b38(&lStack_40);
  return;
}



/* Entry: 10b1cf73c; end: 10b1cf79f;  */

long FUN_10b1cf73c(long param_1)

{
  func_0x00010b1245e8(param_1 + 0x28);
  func_0x00010b1eb938();
  return param_1;
}



/* Entry: 10b1cf7a0; end: 10b1cf9e7;  */

void FUN_10b1cf7a0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  undefined8 uVar7;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 uVar8;
  ulong extraout_x9_00;
  int extraout_w12;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 *puStack_78;
  
  puStack_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  func_0x00010b1ebb5c(auStack_88);
  puVar4 = puStack_78;
  func_0x00010b1ec1f4();
  plVar9 = puVar4 + 0x23;
  while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
    FUN_10b1d9650(&puStack_a0,plVar9[5],plVar9[6]);
  }
  func_0x00010b1ece00();
  puVar2 = puStack_98;
  puVar4 = puStack_a0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((long)puStack_98 - (long)puStack_a0 != 0) {
    uVar6 = (long)puStack_98 - (long)puStack_a0 >> 4;
    if (0xaaaaaaaaaaaaaaa < uVar6) {
      FUN_10b1da530();
LAB_10b1cf99c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10b1cf9a0);
      (*pcVar3)();
    }
    func_0x00010b1da5c4(auStack_88,uVar6,0,param_1 + 2);
    func_0x00010b1edc10();
    FUN_10b1da620(auStack_88);
  }
  do {
    if (puVar4 == puVar2) {
      func_0x00010b1da4f4(&puStack_a0);
      return;
    }
    FUN_10b1bebd0(auStack_b8,*puVar4);
    lVar10 = lStack_a8;
    if ((((*(byte *)(lStack_a8 + 0x160) & 1) == 0) && (*(char *)(lStack_a8 + 0x40) == '\x01')) &&
       (*(long *)(lStack_a8 + 0x38) < 1)) {
      lVar5 = *(long *)(lStack_a8 + 0x48);
      FUN_10b1c718c(lVar5,*(undefined8 *)(lStack_a8 + 0x50),param_4,0);
      if (lVar5 != 0) {
        uVar7 = *puVar4;
        lStack_c8 = puVar4[1];
        uVar8 = 0;
        uStack_d0 = uVar7;
        if (lStack_c8 != 0) {
          do {
            func_0x00010b1eb0ac();
            uVar7 = extraout_x8;
            uVar8 = extraout_x9;
            lVar10 = lStack_a8;
          } while (extraout_w12 != 0);
        }
        uStack_c0 = *(undefined8 *)(lVar10 + 0x60);
        puVar1 = (undefined8 *)param_1[1];
        if (puVar1 < (undefined8 *)param_1[2]) {
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          uStack_d0 = 0;
          lStack_c8 = 0;
          puVar11 = puVar1 + 3;
          puVar1[2] = uStack_c0;
        }
        else {
          if (0xaaaaaaaaaaaaaaa < ((long)puVar1 - *param_1) / 0x18 + 1U) {
            FUN_10b1da530();
            goto LAB_10b1cf99c;
          }
          func_0x00010b1ec290();
          uVar7 = extraout_x8_00;
          if (0x555555555555554 < extraout_x9_00) {
            uVar7 = 0xaaaaaaaaaaaaaaa;
          }
          func_0x00010b1da5c4(auStack_88,uVar7);
          puStack_78[1] = lStack_c8;
          *puStack_78 = uStack_d0;
          uStack_d0 = 0;
          lStack_c8 = 0;
          puStack_78[2] = uStack_c0;
          puStack_78 = puStack_78 + 3;
          func_0x00010b1edc10();
          puVar11 = (undefined8 *)param_1[1];
          FUN_10b1da620(auStack_88);
        }
        param_1[1] = (long)puVar11;
        func_0x00010b121950(&uStack_d0);
      }
    }
    func_0x00010b1eb9bc();
    puVar4 = puVar4 + 2;
  } while( true );
}



/* Entry: 10b1cf9e8; end: 10b1cfb93;  */

void FUN_10b1cf9e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  undefined8 extraout_x9;
  int extraout_w12;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_498 [632];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a0;
  undefined1 uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_ac;
  undefined1 uStack_a8;
  undefined1 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x00010b1ebe28();
  FUN_10b1cfb94(&lStack_50,param_2);
  if (lStack_50 == 0) {
    *unaff_x19 = 0;
    unaff_x19[0x278] = 0;
    goto LAB_10b1cfac4;
  }
  FUN_10b1bebd0(&uStack_90);
  if (*(char *)(unaff_x20 + 0x76) == '\x01') {
    uStack_58 = 0;
    if (lStack_48 != 0) {
      do {
        func_0x00010b1eb0ac();
        lStack_50 = extraout_x8;
        uStack_58 = extraout_x9;
      } while (extraout_w12 != 0);
    }
  }
  else {
    uStack_58 = 0;
    lStack_50 = 0;
  }
  uStack_78 = uStack_90;
  uStack_70 = uStack_88;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_68 = lStack_80;
  uStack_a0 = 0;
  lStack_60 = lStack_50;
  func_0x00010b1de708(&uStack_a0);
  func_0x000107c2798c(&uStack_90);
  if ((((*(byte *)(lStack_80 + 0x160) & 1) == 0) && (*(char *)(lStack_80 + 0x40) == '\x01')) &&
     (*(long *)(lStack_80 + 0x38) < 1)) {
    lVar1 = *(long *)(lStack_80 + 0x48);
    func_0x00010b1ec6e4(lVar1,*(undefined8 *)(lStack_80 + 0x50));
    if (lVar1 == 0) goto LAB_10b1cfab4;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_210 = 0;
    uStack_1d8 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    func_0x00010b1ee018(auStack_498);
    func_0x00010b1eb918();
    FUN_10b121c1c();
    unaff_x19[0x278] = 1;
    func_0x00010b121af0(auStack_498);
    FUN_10b1213b8(&uStack_220);
  }
  else {
LAB_10b1cfab4:
    *unaff_x19 = 0;
    unaff_x19[0x278] = 0;
  }
  func_0x00010b1d3e60(&uStack_78);
LAB_10b1cfac4:
  func_0x00010b1edba4();
  return;
}



/* Entry: 10b1cfb94; end: 10b1cfbbf;  */

void FUN_10b1cfb94(long param_1)

{
  long unaff_x19;
  
  func_0x00010b1eb808();
  if (param_1 != 0) {
    func_0x00010b1ec7f8();
    *(long *)(unaff_x19 + 8) = param_1;
    if (param_1 != 0) {
      func_0x00010b1ecc80();
    }
  }
  return;
}



/* Entry: 10b1cfbc0; end: 10b1cfc4b;  */

undefined1  [16] FUN_10b1cfbc0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined4 uStack_34;
  
  uStack_34 = param_3;
  func_0x00010b1ebb5c(auStack_50);
  func_0x00010b1edca0();
  lVar1 = lStack_40 + 0xb0;
  FUN_10b1e4614(lVar1,&uStack_34);
  if (lVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(ulong *)(lVar1 + 0x18) & 0xffffffffffffff00;
    uVar2 = *(ulong *)(lVar1 + 0x18) & 0xff;
  }
  func_0x00010b1eb9c4();
  auVar4._0_8_ = uVar3 | uVar2;
  auVar4[8] = lVar1 != 0;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10b1cfc4c; end: 10b1cfccf;  */

void FUN_10b1cfc4c(long *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  uStack_24 = 1;
  uStack_2c = 1;
  uStack_30 = param_4;
  uStack_28 = param_3;
  FUN_10b1cfcd0(param_1,param_2 + 0x80,FUN_10b1fabf4,0,&uStack_28,&uStack_30);
  if ((char)param_1[3] == '\x01') {
    lVar1 = *param_1;
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      FUN_10b1daf5c(lVar1,lVar2,LZCOUNT(lVar2 - lVar1 >> 6) << 1 ^ 0x7e,1);
    }
  }
  return;
}



/* Entry: 10b1cfcd0; end: 10b1cfd33;  */

/* WARNING: Removing unreachable block (ram,0x00010b1daa14) */
/* WARNING: Removing unreachable block (ram,0x00010b1daa1c) */

void FUN_10b1cfcd0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 ***pppuVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar8;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  int extraout_w11;
  long lVar9;
  undefined8 ***pppuVar10;
  ulong unaff_x21;
  long lVar11;
  code *unaff_x22;
  undefined8 ***pppuVar12;
  undefined8 unaff_x23;
  undefined8 ***pppuVar13;
  undefined8 **ppuStack_3c0;
  undefined8 **ppuStack_3b8;
  undefined8 **ppuStack_3b0;
  char cStack_3a8;
  undefined1 auStack_398 [96];
  undefined1 auStack_338 [8];
  undefined8 uStack_330;
  undefined1 auStack_328 [64];
  char cStack_2e8;
  undefined8 **ppuStack_2e0;
  undefined8 **ppuStack_2d8;
  undefined8 **appuStack_2d0 [2];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *apuStack_270 [10];
  undefined8 uStack_220;
  undefined1 auStack_218 [64];
  undefined1 uStack_1d8;
  undefined1 auStack_1d0 [80];
  long alStack_180 [9];
  byte bStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  byte bStack_e8;
  undefined8 **ppuStack_e0;
  undefined1 uStack_d8;
  undefined8 **appuStack_d0 [3];
  undefined8 **appuStack_b8 [3];
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined1 uStack_88;
  
  func_0x00010b1ec3fc();
  FUN_10b1dabac(param_2,param_3);
  func_0x00010b1ec024(extraout_x8,*param_2,param_2[1]);
  func_0x00010b1eae84();
  func_0x00010bccbc98(auStack_398,unaff_x23,extraout_x9);
  func_0x00010b1ec434();
  lVar9 = extraout_x8_00;
  if (extraout_x9_00 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar9 = extraout_x8_01;
    } while (extraout_w11 != 0);
  }
  plVar1 = (long *)(*(long *)(lVar9 + 0x10) + ((long)unaff_x21 >> 1));
  if ((unaff_x21 & 1) != 0) {
    unaff_x22 = *(code **)(*plVar1 + ((ulong)unaff_x22 & 0xffffffff));
  }
  (*unaff_x22)(auStack_338,plVar1,*param_4,*param_5);
  uStack_220 = 0;
  auStack_218[0] = 0;
  uStack_1d8 = 0;
  if (cStack_2e8 == '\0') {
    uVar8 = 0;
  }
  else {
    FUN_10b1dac44(auStack_218,auStack_328);
    FUN_10b1dac7c(auStack_328);
    uVar8 = uStack_220;
  }
  uStack_220 = uStack_330;
  uStack_330 = uVar8;
  FUN_10b1dabd8(auStack_1d0,&uStack_220);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  FUN_10b1dabd8(apuStack_270,&uStack_2c0);
  ppuStack_2d8 = (undefined8 ***)0x0;
  appuStack_2d0[0] = (undefined8 ***)0x0;
  ppuStack_2e0 = (undefined8 ***)0x0;
  FUN_10b1dae2c(&lStack_130,auStack_1d0);
  pppuVar7 = (undefined8 ***)apuStack_270;
  FUN_10b1dae2c(alStack_180);
  ppuStack_e0 = &ppuStack_2e0;
  uStack_d8 = 0;
  while ((((bStack_e8 & 1) != 0 || ((bStack_138 & 1) != 0)) && (lStack_130 != alStack_180[0]))) {
    if ((bStack_e8 & 1) == 0) {
      func_0x00010b1eb9a4(appuStack_d0);
      pppuVar7 = appuStack_d0;
      func_0x00010b1eb224(appuStack_b8);
      func_0x00010b1eb3c8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_d0);
    }
    if (ppuStack_2d8 < appuStack_2d0[0]) {
      func_0x00010b1ed5a4(uStack_128);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_128 = 0;
      *(undefined8 *)(extraout_x8_02 + 0x20) = uStack_108;
      *(undefined8 *)(extraout_x8_02 + 0x18) = uStack_110;
      *(undefined8 *)(extraout_x8_02 + 0x30) = 0;
      *(undefined8 *)(extraout_x8_02 + 0x38) = 0;
      *(undefined8 *)(extraout_x8_02 + 0x28) = 0;
      *(undefined8 *)(extraout_x8_02 + 0x30) = uStack_f8;
      *(undefined8 *)(extraout_x8_02 + 0x28) = uStack_100;
      *(undefined8 *)(extraout_x8_02 + 0x38) = uStack_f0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      pppuVar10 = (undefined8 ***)(extraout_x8_02 + 0x40);
    }
    else {
      lVar9 = (long)ppuStack_2d8 - (long)ppuStack_2e0;
      if ((lVar9 >> 6) + 1U >> 0x3a != 0) {
        FUN_10b1dacd0();
        goto LAB_10b1daa6c;
      }
      func_0x00010b1ec290();
      lVar11 = extraout_x8_03;
      if (0x7fffffffffffffbf < extraout_x9_01) {
        lVar11 = 0x3ffffffffffffff;
      }
      if (lVar11 == 0) {
        lVar11 = 0;
        pppuVar12 = (undefined8 ***)0x0;
      }
      else {
        FUN_10b1dacdc();
        pppuVar12 = pppuVar7;
      }
      lVar9 = lVar11 + lVar9;
      func_0x00010b1ec278(uStack_118,uStack_128);
      ppuVar4 = ppuStack_2d8;
      pppuVar13 = (undefined8 ***)ppuStack_2e0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_128 = 0;
      *(undefined8 *)(lVar9 + 0x20) = uStack_108;
      *(undefined8 *)(lVar9 + 0x18) = uStack_110;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined8 *)(lVar9 + 0x38) = 0;
      *(undefined8 *)(lVar9 + 0x28) = 0;
      *(undefined8 *)(lVar9 + 0x30) = uStack_f8;
      *(undefined8 *)(lVar9 + 0x28) = uStack_100;
      *(undefined8 *)(lVar9 + 0x38) = uStack_f0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      pppuVar2 = (undefined8 ***)((long)ppuStack_2e0 + (lVar9 - (long)ppuStack_2d8));
      ppuStack_98 = appuStack_d0;
      ppuStack_90 = appuStack_b8;
      appuStack_b8[0] = pppuVar2;
      appuStack_d0[0] = pppuVar2;
      ppuStack_a0 = appuStack_2d0;
      for (pppuVar10 = (undefined8 ***)ppuStack_2e0; pppuVar10 != (undefined8 ***)ppuVar4;
          pppuVar10 = pppuVar10 + 8) {
        pppuVar7 = pppuVar10;
        FUN_10b1dac60(appuStack_b8[0]);
        appuStack_b8[0] = appuStack_b8[0] + 8;
      }
      uStack_88 = 1;
      for (; pppuVar13 != (undefined8 ***)ppuVar4; pppuVar13 = pppuVar13 + 8) {
        func_0x00010b12492c(pppuVar13);
      }
      pppuVar10 = (undefined8 ***)(lVar9 + 0x40);
      pppuVar12 = (undefined8 ***)(lVar11 + (long)pppuVar12 * 0x40);
      func_0x00010b1dad04(&ppuStack_a0);
      bVar3 = (undefined8 ***)ppuStack_2e0 != (undefined8 ***)0x0;
      ppuStack_2e0 = pppuVar2;
      appuStack_2d0[0] = pppuVar12;
      if (bVar3) {
        ppuStack_2d8 = pppuVar10;
        __ZdlPv();
      }
    }
    ppuStack_2d8 = pppuVar10;
    FUN_10b1dad3c(&lStack_130);
  }
  uStack_d8 = 1;
  FUN_10b1dae04(&ppuStack_e0);
  func_0x00010b1ebe8c(alStack_180);
  FUN_10b1daea4(&uStack_128);
  func_0x00010b1ebe8c(apuStack_270);
  func_0x00010b1edc24();
  func_0x00010b1ebe8c(auStack_1d0);
  func_0x00010b1ebe8c(&uStack_220);
  ppuStack_3b8 = ppuStack_2d8;
  ppuStack_3c0 = ppuStack_2e0;
  ppuStack_3b0 = appuStack_2d0[0];
  ppuStack_2e0 = (undefined8 ***)0x0;
  ppuStack_2d8 = (undefined8 ***)0x0;
  appuStack_2d0[0] = (undefined8 ***)0x0;
  cStack_3a8 = '\x01';
  func_0x00010b1248a0(&ppuStack_2e0);
  FUN_10b1daec4(auStack_338);
  func_0x00010b1ebd30();
  func_0x00010b1ece08();
  func_0x00010b1ebf18();
  func_0x00010b1ecd94();
  uVar6 = cStack_3a8 == '\x01';
  if ((bool)uVar6) {
    func_0x00010b1ec5ec();
  }
  FUN_10b124a24(&ppuStack_3c0);
  ppuStack_a0 = (undefined8 **)((ulong)ppuStack_a0 & 0xffffffffffffff00);
  uStack_88 = 0;
  func_0x00010b1ec934();
  func_0x00010b1ecd88();
  if ((bool)uVar6) {
    func_0x00010b1ec3c8();
  }
  FUN_10b124a24(&ppuStack_a0);
  func_0x00010b1ec3f0();
  FUN_10b1daf18();
  func_0x00010b1ec678();
  func_0x00010b1eadc4();
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010563ab98();
LAB_10b1daa6c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10b1daa70);
  (*pcVar5)();
}



/* Entry: 10b1cfd34; end: 10b1d04a7;  */

void FUN_10b1cfd34(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  long *plVar8;
  long extraout_x9_00;
  int extraout_w11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  long *plStack_3a0;
  long *plStack_398;
  long *plStack_390;
  undefined1 uStack_388;
  long *plStack_378;
  long *plStack_370;
  ulong uStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  char cStack_348;
  long alStack_340 [10];
  long lStack_2f0;
  long lStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined8 uStack_2d8;
  uint auStack_2d0 [2];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  char cStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [72];
  undefined8 uStack_1e0;
  uint uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 auStack_198 [72];
  long alStack_150 [8];
  byte bStack_110;
  long lStack_108;
  undefined4 auStack_100 [2];
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  byte bStack_c8;
  long **pplStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [48];
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  int iStack_20;
  
  func_0x00010b1ec024();
  func_0x00010b1eae28();
  func_0x000107c27f70(&plStack_3c0);
  plStack_378 = (long *)((ulong)plStack_378 & 0xffffffffffffff00);
  uStack_368 = uStack_368 & 0xffffffffffffff00;
  func_0x00010bccbc98(alStack_340,unaff_x19 + 0x80,&UNK_10f73866b,0x30);
  lVar11 = *(long *)(alStack_340[0] + 8);
  lStack_2e8 = *(long *)(alStack_340[0] + 0x10);
  lStack_2f0 = lVar11;
  if (lStack_2e8 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar11 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10b1fbc90(auStack_2e0,*(undefined8 *)(lVar11 + 0x10),&plStack_3c0);
  uStack_1d8 = uStack_1d8 & 0xffffff00;
  uStack_1a0 = 0;
  if (cStack_298 != '\0') {
    uStack_1d8 = auStack_2d0[0];
    uStack_1c8 = uStack_2c0;
    uStack_1d0 = uStack_2c8;
    uStack_1c0 = uStack_2b8;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_1b0 = uStack_2a8;
    uStack_1b8 = uStack_2b0;
    uStack_1a8 = uStack_2a0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_1a0 = 1;
    func_0x00010b1dbd78(auStack_2d0);
  }
  uStack_1e0 = uStack_2d8;
  uStack_2d8 = 0;
  func_0x00010b1dbccc(auStack_198,&uStack_1e0);
  uStack_230 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  func_0x00010b1dbccc(auStack_228,&uStack_270);
  plStack_288 = (long *)0x0;
  plStack_280 = (long *)0x0;
  plStack_290 = (long *)0x0;
  FUN_10b1dbf4c(&lStack_108,auStack_198);
  FUN_10b1dbf4c(alStack_150,auStack_228);
  pplStack_c0 = &plStack_290;
  uStack_b8 = 0;
  while ((((bStack_c8 & 1) != 0 || ((bStack_110 & 1) != 0)) && (lStack_108 != alStack_150[0]))) {
    if ((bStack_c8 & 1) == 0) {
      uVar9 = *(undefined8 *)(lStack_108 + 8);
      func_0x00010b1eb9a4(auStack_b0);
      func_0x00010b1ee27c();
      func_0x000107c27f54(&UNK_10f2e0451);
      func_0x00010b1eb99c(uVar9);
      func_0x00010b1ebf08();
      func_0x00010b1ebf10();
    }
    unaff_x20 = plStack_288;
    plVar7 = plStack_290;
    if (plStack_288 < plStack_280) {
      *(undefined4 *)plStack_288 = auStack_100[0];
      plStack_288[3] = lStack_e8;
      plStack_288[2] = lStack_f0;
      plStack_288[1] = lStack_f8;
      lStack_f0 = 0;
      lStack_e8 = 0;
      lStack_f8 = 0;
      plStack_288[5] = lStack_d8;
      plStack_288[4] = lStack_e0;
      plStack_288[6] = lStack_d0;
      lStack_d8 = 0;
      lStack_d0 = 0;
      lStack_e0 = 0;
      plVar7 = plStack_288 + 7;
    }
    else {
      lVar11 = (long)plStack_288 - (long)plStack_290;
      uVar1 = lVar11 / 0x38 + 1;
      uVar5 = 0x492492492492491 < uVar1;
      if (0x492492492492492 < uVar1) {
        FUN_10b1dbdec();
        goto LAB_10b1d0300;
      }
      func_0x00010b1eb414(((long)plStack_280 - (long)plStack_290) / 0x38);
      func_0x00010b1ed5cc();
      uVar1 = extraout_x9;
      if ((bool)uVar5) {
        uVar1 = 0x492492492492492;
      }
      if (uVar1 == 0) {
        lVar10 = 0;
      }
      else {
        if (0x492492492492492 < uVar1) {
          func_0x000104bd35f4();
          goto LAB_10b1d0300;
        }
        lVar10 = uVar1 * 0x38;
        __Znwm();
      }
      lVar14 = lStack_d8;
      lVar13 = lStack_e0;
      puVar2 = (undefined4 *)(lVar10 + lVar11);
      *puVar2 = auStack_100[0];
      *(long *)(puVar2 + 4) = lStack_f0;
      *(long *)(puVar2 + 2) = lStack_f8;
      *(long *)(puVar2 + 6) = lStack_e8;
      lStack_f8 = 0;
      lStack_f0 = 0;
      *(long *)(puVar2 + 10) = lStack_d8;
      *(long *)(puVar2 + 8) = lStack_e0;
      *(long *)(puVar2 + 0xc) = lStack_d0;
      lStack_e8 = 0;
      lStack_e0 = 0;
      lStack_d8 = 0;
      lStack_d0 = 0;
      plVar12 = (long *)(puVar2 + (lVar11 / -0x38) * 0xe);
      plVar6 = plVar12;
      plVar8 = plVar7;
      while (plVar8 != unaff_x20) {
        func_0x00010b1ec614(plVar6);
        *(undefined8 *)(extraout_x8_00 + 0x30) = *(undefined8 *)(extraout_x9_00 + 0x30);
        *(long *)(extraout_x8_00 + 0x28) = lVar14;
        *(long *)(extraout_x8_00 + 0x20) = lVar13;
        *(undefined8 *)(extraout_x9_00 + 0x28) = 0;
        *(undefined8 *)(extraout_x9_00 + 0x30) = 0;
        *(undefined8 *)(extraout_x9_00 + 0x20) = 0;
        plVar6 = (long *)(extraout_x8_00 + 0x38);
        plVar8 = (long *)(extraout_x9_00 + 0x38);
      }
      for (; plVar7 != unaff_x20; plVar7 = plVar7 + 7) {
        FUN_10b1dbdc8(plVar7);
      }
      plStack_280 = (long *)(lVar10 + uVar1 * 0x38);
      plVar7 = (long *)(puVar2 + 0xe);
      bVar3 = plStack_290 != (long *)0x0;
      plStack_290 = plVar12;
      if (bVar3) {
        plStack_288 = plVar7;
        __ZdlPv();
      }
    }
    plStack_288 = plVar7;
    FUN_10b1dbdf8(&lStack_108);
  }
  uStack_b8 = 1;
  FUN_10b1dbee0(&pplStack_c0);
  func_0x00010b1ebd28(alStack_150);
  FUN_10b1dbfc4(auStack_100);
  func_0x00010b1ebd28(auStack_228);
  func_0x00010b1edcd8();
  func_0x00010b1ebd28(auStack_198);
  func_0x00010b1ebd28(&uStack_1e0);
  plStack_358 = plStack_288;
  plStack_360 = plStack_290;
  plStack_350 = plStack_280;
  plStack_290 = (long *)0x0;
  plStack_288 = (long *)0x0;
  plStack_280 = (long *)0x0;
  cStack_348 = '\x01';
  FUN_10b1dbfe4(&plStack_290);
  FUN_10b1dc008(auStack_2e0);
  FUN_10b1b7824(&lStack_2f0);
  func_0x00010bccbe4c(alStack_340);
  func_0x00010bccbdb4(alStack_340);
  func_0x00010b1ecd94();
  uVar5 = cStack_348 == '\x01';
  if ((bool)uVar5) {
    plStack_70 = plStack_358;
    plStack_78 = plStack_360;
    plStack_68 = plStack_350;
    plStack_358 = (long *)0x0;
    plStack_350 = (long *)0x0;
    plStack_360 = (long *)0x0;
    lStack_60 = CONCAT71(lStack_60._1_7_,1);
  }
  iStack_20 = 0;
  func_0x00010b1ecad8();
  func_0x00010b1ee4c4();
  if (iStack_20 == 0) {
    func_0x00010b1ed710();
    func_0x00010b1ecd88();
    if (!(bool)uVar5) goto LAB_10b1d01fc;
    plStack_398 = plStack_70;
    plStack_3a0 = plStack_78;
    plStack_390 = plStack_68;
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    plStack_78 = (long *)0x0;
    uStack_388 = 1;
    func_0x00010b1ecad8();
    FUN_10b1dc080(&plStack_78);
    func_0x00010b1ecac8();
    func_0x00010b1ebf8c();
    plStack_3b0 = plStack_390;
    plStack_3b8 = plStack_398;
    plVar7 = plStack_3a0;
    plStack_3a0 = (long *)0x0;
    plStack_398 = (long *)0x0;
    plStack_390 = (long *)0x0;
    plStack_3c0 = plVar7;
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    plStack_80 = (long *)0x0;
    FUN_10b1dbfe4(&plStack_80);
    func_0x00010b1ee56c();
    plStack_378 = (long *)0x0;
    plStack_370 = (long *)0x0;
    uStack_368 = 0;
    uStack_b8 = 0;
    pplStack_c0 = &plStack_378;
    for (; plVar7 != unaff_x20; plVar7 = plVar7 + 7) {
      func_0x00010b1edee8(&plStack_360,(int)*plVar7);
      plStack_78 = plStack_358;
      plStack_80 = plStack_360;
      plStack_70 = plStack_350;
      plStack_358 = (long *)0x0;
      plStack_350 = (long *)0x0;
      plStack_360 = (long *)0x0;
      lStack_60 = plVar7[5];
      plStack_68 = (long *)plVar7[4];
      lStack_58 = plVar7[6];
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[4] = 0;
      func_0x00010b1ed224();
      func_0x000107c280dc(&plStack_378,&plStack_80);
      func_0x000107c27bbc(&plStack_80);
    }
    uStack_b8 = 1;
    func_0x000107c280d4(&pplStack_c0);
    FUN_10b1b8c14(&plStack_360,unaff_x19 + 0x2a0);
    plVar6 = plStack_350;
    FUN_10b1b8c30(plStack_350,param_2);
    plVar8 = plStack_370;
    for (plVar7 = plStack_378; uVar5 = plVar7 == plVar8, !(bool)uVar5; plVar7 = plVar7 + 6) {
      plStack_78 = (long *)plVar7[1];
      plStack_80 = (long *)*plVar7;
      plStack_70 = (long *)plVar7[2];
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
      lStack_60 = plVar7[4];
      plStack_68 = (long *)plVar7[3];
      lStack_58 = plVar7[5];
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[3] = 0;
      func_0x000107c283d4(plVar6 + 5,&plStack_80);
      func_0x000107c278c0(&plStack_80);
    }
    plVar7 = plStack_350;
    FUN_10b1b8c30(plStack_350,param_2);
    *(undefined1 *)(plVar7 + 10) = 1;
    func_0x000107c2798c(&plStack_360);
    func_0x000107c280f8(&plStack_378);
    FUN_10b1dbfe4(&plStack_3c0);
  }
  else {
    uVar5 = iStack_20 == 1;
    if (!(bool)uVar5) goto LAB_10b1d02fc;
    func_0x00010b1ed710();
LAB_10b1d01fc:
    func_0x00010b1ecad8();
    func_0x00010b1ec3f0();
    FUN_10b1dc080();
    func_0x00010b1ecac8();
    func_0x00010b1ebf8c();
  }
  FUN_10b1dc060(&plStack_3a0);
  func_0x00010b1eadc4();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1d02fc:
  func_0x00010563ab98();
LAB_10b1d0300:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10b1d0304);
  (*pcVar4)();
}



/* Entry: 10b1d04a8; end: 10b1d04e3;  */

void FUN_10b1d04a8(void)

{
  undefined1 auStack_40 [32];
  
  FUN_10b1c1ff0(auStack_40);
  func_0x00010b1edaac();
  func_0x00010b1ec45c();
  FUN_10b1e96cc();
  func_0x00010b1eb908();
  return;
}



/* Entry: 10b1d04e4; end: 10b1d04ff;  */

void FUN_10b1d04e4(void)

{
  func_0x00010b1ee5e8();
  FUN_10b1e95a0();
  return;
}



/* Entry: 10b1d0500; end: 10b1d057f;  */

void FUN_10b1d0500(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 *unaff_x19;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b1eb424();
  func_0x00010b1eb674(auStack_58);
  if ((lStack_48 == 0) || (func_0x00010b1ec3bc(), !(bool)in_ZR)) {
    func_0x00010b1ebe9c();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    func_0x00010b1eb6f8(auStack_80,param_1,param_2,*(undefined4 *)(extraout_x8 + 0x18));
    FUN_10b1c1ff0();
    func_0x00010b1edaac();
    func_0x00010b1ec45c();
    FUN_10b1e96cc();
    func_0x00010b1eb908();
    func_0x00010b1ebe9c();
  }
  return;
}



/* Entry: 10b1d0580; end: 10b1d05f7;  */

void FUN_10b1d0580(undefined8 *param_1)

{
  undefined8 *apuStack_30 [2];
  
  FUN_10b1d0500(apuStack_30);
  if (apuStack_30[0] == (undefined8 *)0x0) {
    func_0x00010b1ebccc();
    apuStack_30[0][1] = 0;
    apuStack_30[0][2] = 0;
    *apuStack_30[0] = &PTR_FUN_110cc48c0;
    apuStack_30[0][3] = &PTR_DAT_110cc4910;
    *param_1 = apuStack_30[0] + 3;
    param_1[1] = apuStack_30[0];
  }
  else {
    func_0x00010b1edea0();
  }
  func_0x00010b1eb908();
  return;
}



/* Entry: 10b1d05f8; end: 10b1d0667;  */

void FUN_10b1d05f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  FUN_10b1d04a8(auStack_40,param_1,param_2,param_4);
  FUN_10b1c1fcc(alStack_30,auStack_40);
  func_0x00010b1eb908();
  if (alStack_30[0] == 0) {
    func_0x00010b1ec934();
  }
  else {
    func_0x00010b1edea0();
  }
  func_0x00010b1ecff8();
  return;
}



/* Entry: 10b1d0668; end: 10b1d06a7;  */

undefined8 FUN_10b1d0668(void)

{
  code *extraout_x8;
  undefined8 uStack_30;
  
  func_0x00010b1ebb24();
  func_0x00010b1ec4bc(uStack_30);
  (*extraout_x8)();
  func_0x00010b1eb908();
  return uStack_30;
}



/* Entry: 10b1d06a8; end: 10b1d06e3;  */

void FUN_10b1d06a8(void)

{
  code *extraout_x8;
  undefined8 uStack_30;
  
  func_0x00010b1ebb24();
  func_0x00010b1ee2fc(uStack_30);
  (*extraout_x8)();
  func_0x00010b1eb3fc();
  return;
}



/* Entry: 10b1d06e4; end: 10b1d072b;  */

undefined4 FUN_10b1d06e4(void)

{
  undefined4 uVar1;
  code *extraout_x8;
  undefined4 uStack_30;
  
  func_0x00010b1ebb24();
  func_0x00010b1ec4bc();
  (*extraout_x8)();
  uVar1 = 3;
  if (uStack_30 != 0) {
    uVar1 = 1;
  }
  func_0x00010b1eb908();
  return uVar1;
}



/* Entry: 10b1d072c; end: 10b1d0923;  */

void FUN_10b1d072c(long *param_1,long param_2,undefined4 param_3,long param_4,long *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int extraout_w10;
  ulong uVar8;
  undefined1 uVar9;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar5 = *(long **)(param_4 + 0x10);
  uStack_94 = param_3;
  func_0x00010b1ebfcc();
  FUN_10b1d0a10();
  lVar6 = *plVar5;
  if (lVar6 == 0) {
    func_0x000107c278b8(auStack_c8,&UNK_10f731a31);
    uVar2 = uStack_94;
    bVar1 = *(byte *)(param_2 + 0x17);
    uVar8 = *(ulong *)(param_2 + 8);
    if (*param_5 == 0) {
      if ((bRam00000001137f4148 & 1) == 0) {
        iVar4 = 0x137f4148;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          uVar9 = 0x28;
          func_0x000107c2be10();
          uRam00000001137f40fb = uVar9;
          func_0x00010b1ebd84(0x1137f4148);
        }
      }
      uVar9 = uRam00000001137f40fb;
      if ((*param_5 == 0) && ((bRam00000001137f4150 & 1) == 0)) {
        iVar4 = 0x137f4150;
        ___cxa_guard_acquire();
        if (iVar4 != 0) {
          uVar3 = 0x40;
          func_0x000107c2be10();
          uRam00000001137f40fc = uVar3;
          func_0x00010b1ebd84(0x1137f4150);
        }
      }
    }
    else {
      uVar9 = 0;
    }
    if (-1 < (char)bVar1) {
      uVar8 = (ulong)bVar1;
    }
    func_0x00010b205838(uVar8 == 0,uVar2);
    uStack_88 = 0;
    uStack_90 = 0x10000;
    uStack_80 = uVar9;
    FUN_10b4942a4(&uStack_70);
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x00010b127f4c(&uStack_70);
    func_0x00010b1ed758();
    FUN_10b1c1fcc();
    func_0x00010b125864(&uStack_b0);
    func_0x00010b1ec670();
    lVar6 = *plVar5;
  }
  lVar7 = plVar5[1];
  *param_1 = lVar6;
  param_1[1] = lVar7;
  if (lVar7 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  return;
}


