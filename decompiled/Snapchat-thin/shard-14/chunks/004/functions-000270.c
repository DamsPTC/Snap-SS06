/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1d41d0; end: 10b1d433f;  */

/* WARNING: Possible PIC construction at 0x00010b1d4308: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b1d430c) */
/* WARNING: Removing unreachable block (ram,0x00010b1d431c) */

undefined1  [16] FUN_10b1d41d0(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong extraout_x8;
  ulong uVar6;
  undefined1 *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 **ppuVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [32];
  long lStack_60;
  long lStack_58;
  
  puVar4 = auStack_80;
  ppuVar11 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar5 = (undefined1 *)param_1[1];
  if (puVar5 < (undefined1 *)param_1[2]) {
    FUN_10b1d5d6c(puVar5,param_2);
    param_1[1] = (long)(puVar5 + 0x110);
    auVar14._8_8_ = param_2;
    auVar14._0_8_ = puVar5;
    return auVar14;
  }
  lVar8 = (long)puVar5 - *param_1;
  uVar1 = lVar8 / 0x110 + 1;
  if (uVar1 < 0xf0f0f0f0f0f0f1) {
    uVar3 = (param_1[2] - *param_1) / 0x110;
    uVar6 = uVar3 * 2;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x78787878787877 < uVar3) {
      uVar6 = 0xf0f0f0f0f0f0f0;
    }
    if (uVar6 == 0) {
      uVar6 = 0;
      lVar7 = 0;
    }
    else {
      lVar7 = param_2;
      FUN_10b1d434c();
    }
    lVar8 = uVar6 + lVar8;
    FUN_10b1d5d6c(lVar8,param_2);
    lVar9 = *param_1;
    lVar2 = param_1[1];
    lVar8 = lVar8 + ((lVar2 - lVar9) / -0x110) * 0x110;
    lStack_60 = lVar8;
    lStack_58 = lVar8;
    func_0x00010b1ee3e0();
    for (lVar10 = lVar9; lVar10 != lVar2; lVar10 = lVar10 + 0x110) {
      param_2 = lVar10;
      FUN_10b1d5d6c(lVar8,lVar10);
      lVar8 = lStack_58 + 0x110;
      lStack_58 = lVar8;
    }
    func_0x00010b1ebed4(lVar8);
    for (; lVar9 != lVar2; lVar9 = lVar9 + 0x110) {
      func_0x00010b1d5dec(lVar9);
    }
    unaff_x20 = (undefined1 *)(uVar6 + lVar7 * 0x110);
    uVar12 = 0x10b1d430c;
    puVar5 = auStack_80;
  }
  else {
    FUN_10b1d4340();
    pcStack_88 = FUN_10b1d4340;
    ppuStack_90 = ppuVar11;
    func_0x00010b1eafa8();
    puVar4 = &stack0xffffffffffffff50;
    pcStack_98 = FUN_10b1d434c;
    ppuVar11 = &puStack_a0;
    if (puVar5 < (undefined1 *)0xf0f0f0f0f0f0f1) {
      lVar8 = (long)puVar5 * 0x110;
      puStack_a0 = (undefined1 *)&ppuStack_90;
      __Znwm(lVar8);
      auVar15._8_8_ = puVar5;
      auVar15._0_8_ = lVar8;
      return auVar15;
    }
    uVar12 = 0x10b1d4388;
    puStack_a0 = (undefined1 *)&ppuStack_90;
    func_0x000104bd35f4();
  }
  *(undefined1 **)(puVar4 + -0x20) = unaff_x20;
  *(long **)(puVar4 + -0x18) = param_1;
  *(undefined1 ***)(puVar4 + -0x10) = ppuVar11;
  *(undefined8 *)(puVar4 + -8) = uVar12;
  func_0x00010b1ebd44();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b1eb758();
    while (puVar5 != unaff_x20) {
      puVar5 = puVar5 + -0x110;
      func_0x00010b1d5dec();
    }
  }
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  return auVar13;
}



/* Entry: 10b1d4340; end: 10b1d434b;  */

void FUN_10b1d4340(ulong param_1)

{
  ulong extraout_x8;
  ulong unaff_x20;
  
  func_0x00010b1eafa8();
  if (param_1 < 0xf0f0f0f0f0f0f1) {
    __Znwm(param_1 * 0x110);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b1ebd44();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b1eb758();
    while (param_1 != unaff_x20) {
      param_1 = param_1 - 0x110;
      func_0x00010b1d5dec();
    }
  }
  return;
}



/* Entry: 10b1d434c; end: 10b1d43bf;  */

void FUN_10b1d434c(ulong param_1)

{
  ulong extraout_x8;
  ulong unaff_x20;
  
  if (param_1 < 0xf0f0f0f0f0f0f1) {
    __Znwm(param_1 * 0x110);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b1ebd44();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b1eb758();
    while (param_1 != unaff_x20) {
      param_1 = param_1 - 0x110;
      func_0x00010b1d5dec();
    }
  }
  return;
}



/* Entry: 10b1d43c0; end: 10b1d4423;  */

void FUN_10b1d43c0(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_130 [272];
  
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1d4458();
    func_0x00010b1eb714();
    FUN_10b1d4424();
    func_0x00010b1d5dec(auStack_130);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x118) == '\x01') {
    func_0x00010b1d5dec();
    *(undefined1 *)(lVar1 + 0x110) = 0;
  }
  return;
}



/* Entry: 10b1d4424; end: 10b1d4457;  */

long FUN_10b1d4424(long param_1)

{
  if (*(char *)(param_1 + 0x110) == '\x01') {
    FUN_10b1d416c();
  }
  else {
    FUN_10b1d412c();
  }
  return param_1;
}



/* Entry: 10b1d4458; end: 10b1d454b;  */

void FUN_10b1d4458(undefined8 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b1eb720();
  func_0x00010b1eb06c();
  func_0x00010b1eb4f8();
  func_0x00010b1ebc20();
  FUN_10b1d454c();
  func_0x00010b1ed4f4();
  func_0x00010b1ec898();
  FUN_10b1d3e84();
  *(int *)(unaff_x19 + 0x48) = (int)param_1;
  *(char *)(unaff_x19 + 0x4c) = (char)((ulong)param_1 >> 0x20);
  func_0x00010b1ec88c();
  func_0x000107c28930();
  *(undefined8 *)(unaff_x19 + 0x50) = param_1;
  *(undefined1 *)(unaff_x19 + 0x58) = param_2;
  func_0x00010b1ec5c8();
  *(undefined8 *)(unaff_x19 + 0x60) = param_1;
  *(undefined1 *)(unaff_x19 + 0x68) = param_2;
  func_0x00010b1ec5b4();
  *(undefined8 *)(unaff_x19 + 0x70) = param_1;
  *(undefined1 *)(unaff_x19 + 0x78) = param_2;
  func_0x00010b1edcec();
  *(undefined8 *)(unaff_x19 + 0x80) = param_1;
  *(undefined1 *)(unaff_x19 + 0x88) = param_2;
  func_0x00010b1edd18();
  *(undefined8 *)(unaff_x19 + 0x90) = param_1;
  *(undefined1 *)(unaff_x19 + 0x98) = param_2;
  func_0x0001073a755c(unaff_x19 + 0xa0);
  func_0x0001073a755c(unaff_x19 + 0xc0);
  uVar1 = 0xb;
  func_0x000107c28930();
  *(undefined8 *)(unaff_x19 + 0xe0) = unaff_x20;
  *(undefined1 *)(unaff_x19 + 0xe8) = uVar1;
  func_0x0001073a755c(unaff_x19 + 0xf0);
  return;
}



/* Entry: 10b1d454c; end: 10b1d4563;  */

ulong FUN_10b1d454c(ulong param_1)

{
  FUN_10b1d4564();
  return param_1 & 0xffffffffff;
}



/* Entry: 10b1d4564; end: 10b1d45ef;  */

void FUN_10b1d4564(int param_1)

{
  func_0x00010b1eb67c();
  if (param_1 != 5) {
    func_0x00010b1ebab8();
    func_0x00010b1ec64c();
  }
  return;
}



/* Entry: 10b1d45f0; end: 10b1d45f7;  */

void FUN_10b1d45f0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb63c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x110;
    func_0x00010b1d5dec();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b1d45f8; end: 10b1d462b;  */

void FUN_10b1d45f8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb63c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x110;
    func_0x00010b1d5dec();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b1d462c; end: 10b1d4673;  */

void FUN_10b1d462c(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b1eada8();
  *(undefined1 *)(param_1 + 0x118) = 0;
  if (*(char *)(param_2 + 0x118) == '\x01') {
    func_0x00010b1ebec8();
    FUN_10b1d4674();
    *(undefined1 *)(unaff_x19 + 0x118) = 1;
  }
  return;
}



/* Entry: 10b1d4674; end: 10b1d46f7;  */

void FUN_10b1d4674(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b1eb648();
  func_0x000107c279a0();
  func_0x00010b1eba60();
  func_0x00010b1ed0e8();
  func_0x000104be0ccc(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  func_0x000104be0ccc(unaff_x19 + 0xc0,unaff_x20 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar1;
  func_0x000104be0ccc(unaff_x19 + 0xf0,unaff_x20 + 0xf0);
  return;
}



/* Entry: 10b1d46f8; end: 10b1d4717;  */

void FUN_10b1d46f8(long param_1)

{
  if (*(char *)(param_1 + 0x110) == '\x01') {
    func_0x00010b1d5dec();
  }
  return;
}



/* Entry: 10b1d4718; end: 10b1d477f;  */

void FUN_10b1d4718(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb548();
  _bzero();
  *(undefined8 *)(unaff_x19 + 8) = 0;
  if (*(char *)(unaff_x19 + 0x120) != '\0') {
    func_0x00010b1d4148(unaff_x19 + 0x10);
  }
  FUN_10b1d46f8(unaff_x20 + 8);
  func_0x00010b1ebc2c();
  func_0x000107c31408();
  FUN_10b1d46f8(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b1d4780; end: 10b1d47a7;  */

long FUN_10b1d4780(long param_1)

{
  FUN_10b1d47a8(param_1 + 8);
  *(undefined4 *)(param_1 + 0x60) = 0;
  return param_1;
}



/* Entry: 10b1d47a8; end: 10b1d47c7;  */

void FUN_10b1d47a8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 unaff_x30;
  
  func_0x00010b1ec078();
  if ((bool)in_ZR) {
    func_0x00010b1ee100(param_1,param_2,unaff_x30);
  }
  return;
}



/* Entry: 10b1d47c8; end: 10b1d481b;  */

void FUN_10b1d47c8(long param_1)

{
  func_0x00010563ab1c();
  *(undefined4 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10b1d481c; end: 10b1d48fb;  */

void FUN_10b1d481c(undefined8 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  ulong uVar3;
  long extraout_x8;
  ulong *unaff_x19;
  long lVar4;
  ulong unaff_x22;
  ulong in_stack_00000038;
  
  func_0x00010b1ee684();
  func_0x00010b1eb1e4();
  if ((bool)in_ZR) {
    func_0x00010b1ec2c8();
    lVar4 = *param_2;
    lVar1 = param_2[1];
    func_0x00010b1ed4e4();
    if (!(bool)in_ZR) {
      uVar3 = extraout_x8 / 0x110;
      if (0xf0f0f0f0f0f0f0 < uVar3) {
        FUN_10b1d4340();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1d48d4);
        (*pcVar2)();
      }
      FUN_10b1d434c();
      *unaff_x19 = uVar3;
      unaff_x19[1] = uVar3;
      func_0x00010b1eb35c(0x110);
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x110) {
        FUN_10b1d4674(unaff_x22,lVar4);
        unaff_x22 = in_stack_00000038 + 0x110;
        in_stack_00000038 = unaff_x22;
      }
      func_0x00010b1ed534();
      func_0x00010b1d4388();
      unaff_x19[1] = unaff_x22;
    }
    func_0x00010b1ed494();
    func_0x00010b1d4594();
    *(char *)(unaff_x19 + 3) = (char)lVar4;
  }
  return;
}



/* Entry: 10b1d48fc; end: 10b1d491b;  */

void FUN_10b1d48fc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1d8ae4();
  }
  return;
}



/* Entry: 10b1d491c; end: 10b1d4953;  */

void FUN_10b1d491c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc39e8)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1d4954; end: 10b1d495f;  */

void FUN_10b1d4954(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1d8ae4();
  }
  return;
}



/* Entry: 10b1d4960; end: 10b1d4997;  */

void FUN_10b1d4960(int param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b1eb63c();
  FUN_10b1d4a0c();
  if (param_1 != 0) {
    func_0x0001006203d4();
    uVar1 = *unaff_x19;
    *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19[1];
    *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19[2];
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    return;
  }
  return;
}



/* Entry: 10b1d4998; end: 10b1d4a0b;  */

undefined8 FUN_10b1d4998(undefined8 param_1,ulong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  uVar1 = param_2[1] <= *param_2;
  uVar2 = *param_2 == param_2[1];
  if ((bool)uVar2) {
    uVar3 = 1;
  }
  else {
    func_0x00010b1eb648();
    FUN_10b1371b0();
    func_0x00010b1eb784();
    if (!(bool)uVar1 || (bool)uVar2) {
      func_0x000100063660();
      return unaff_x19;
    }
    func_0x00010b1edbbc();
    uStack_28 = param_1;
    func_0x00010b1ecbf8();
    func_0x00010b1eb5b4(auStack_30,0xd4,auStack_48);
    func_0x00010b1eb750();
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10b1d4a0c; end: 10b1d4aa3;  */

bool FUN_10b1d4a0c(long param_1,uint param_2)

{
  long lVar1;
  int extraout_w10;
  long *plVar2;
  long lStack_30;
  long lStack_28;
  
  if ((param_2 & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x10);
    lStack_30 = *plVar2;
    if (lStack_30 != 0) {
      lStack_28 = *(long *)(param_1 + 0x18);
      if (lStack_28 != 0) {
        do {
          func_0x00010b1eb124();
        } while (extraout_w10 != 0);
      }
      func_0x00010b1d4ac0(plVar2);
      func_0x00010b1edab8();
      func_0x00010b1eb6b8();
      func_0x00010b1ebeac();
      lVar1 = *plVar2;
      if (lVar1 == 0) {
        func_0x00010b1d4aa4(param_1);
      }
      func_0x00010b1219e0(&lStack_30);
      return lVar1 == 0;
    }
  }
  func_0x00010b1d4aa4(param_1);
  func_0x00010b1d4ac0(param_1 + 0x10);
  return true;
}



/* Entry: 10b1d4aa4; end: 10b1d4adb;  */

void FUN_10b1d4aa4(void)

{
  func_0x00010b1eb184();
  func_0x00010b1d2f7c();
  return;
}



/* Entry: 10b1d4adc; end: 10b1d4b13;  */

void FUN_10b1d4adc(void)

{
  long unaff_x20;
  
  func_0x00010b1eb548();
  FUN_10b1d4b14();
  func_0x00010b1eb714();
  FUN_10b1d4b14();
  FUN_10b1d4e70(unaff_x20 + 8);
  return;
}



/* Entry: 10b1d4b14; end: 10b1d4b4f;  */

void FUN_10b1d4b14(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b1eae98();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0xb8) = 0;
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_10b1d4b50((undefined1 *)(param_1 + 8),param_2 + 8);
  }
  return;
}



/* Entry: 10b1d4b50; end: 10b1d4b6b;  */

void FUN_10b1d4b50(long param_1)

{
  FUN_10b1d4b6c();
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



/* Entry: 10b1d4b6c; end: 10b1d4bc7;  */

void FUN_10b1d4b6c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010b1eb1e4();
  if ((bool)in_ZR) {
    func_0x00010b1eb0d4();
    func_0x00010b1ecc30();
  }
  func_0x00010b1ed554();
  if (*(char *)(param_2 + 0x38) == '\x01') {
    func_0x00010b1ed5a4(*(undefined8 *)(param_2 + 0x20));
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    func_0x00010b1ecc24();
  }
  func_0x00010b1ede7c(unaff_x19 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 10b1d4bc8; end: 10b1d4beb;  */

void FUN_10b1d4bc8(long param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    func_0x00010b1d4c18();
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  return;
}



/* Entry: 10b1d4bec; end: 10b1d4c37;  */

void FUN_10b1d4bec(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb398();
  func_0x00010b1eba20();
  func_0x00010b1ede7c(unaff_x20 + 0x40,unaff_x19 + 0x40);
  return;
}



/* Entry: 10b1d4c38; end: 10b1d4c43;  */

void FUN_10b1d4c38(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_e0 [176];
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1d4cdc();
    func_0x00010b1eb714();
    FUN_10b1d4ca8();
    func_0x00010b1d4c18(auStack_e0);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0xb8) == '\x01') {
    func_0x00010b1d4c18();
    *(undefined1 *)(lVar1 + 0xb0) = 0;
  }
  return;
}



/* Entry: 10b1d4c44; end: 10b1d4ca7;  */

void FUN_10b1d4c44(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_d0 [176];
  
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1d4cdc();
    func_0x00010b1eb714();
    FUN_10b1d4ca8();
    func_0x00010b1d4c18(auStack_d0);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0xb8) == '\x01') {
    func_0x00010b1d4c18();
    *(undefined1 *)(lVar1 + 0xb0) = 0;
  }
  return;
}



/* Entry: 10b1d4ca8; end: 10b1d4cdb;  */

long FUN_10b1d4ca8(long param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_10b1d4bec();
  }
  else {
    FUN_10b1d4b50();
  }
  return param_1;
}



/* Entry: 10b1d4cdc; end: 10b1d4d7f;  */

void FUN_10b1d4cdc(undefined8 param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x19;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  func_0x00010b1eb720();
  func_0x00010b1eb06c();
  func_0x00010b1eb4f8();
  func_0x00010b1ebc20();
  FUN_10b1d454c();
  func_0x00010b1ed4f4();
  func_0x00010b1ec898();
  FUN_10b1d3e84();
  *(undefined4 *)(unaff_x19 + 0x48) = uVar1;
  *(char *)(unaff_x19 + 0x4c) = (char)uVar2;
  func_0x00010b1ec88c();
  func_0x000107c28930();
  *(ulong *)(unaff_x19 + 0x50) = CONCAT44(uVar2,uVar1);
  *(undefined1 *)(unaff_x19 + 0x58) = param_2;
  func_0x00010b1ec5c8();
  *(ulong *)(unaff_x19 + 0x60) = CONCAT44(uVar2,uVar1);
  *(undefined1 *)(unaff_x19 + 0x68) = param_2;
  func_0x00010b1ec5b4();
  *(ulong *)(unaff_x19 + 0x70) = CONCAT44(uVar2,uVar1);
  *(undefined1 *)(unaff_x19 + 0x78) = param_2;
  func_0x00010b1edcec();
  *(ulong *)(unaff_x19 + 0x80) = CONCAT44(uVar2,uVar1);
  *(undefined1 *)(unaff_x19 + 0x88) = param_2;
  func_0x00010b1edd18();
  *(ulong *)(unaff_x19 + 0x90) = CONCAT44(uVar2,uVar1);
  *(undefined1 *)(unaff_x19 + 0x98) = param_2;
  func_0x00010b1edcf8();
  *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(uVar2,uVar1);
  *(undefined1 *)(unaff_x19 + 0xa8) = param_2;
  return;
}



/* Entry: 10b1d4d80; end: 10b1d4da7;  */

void FUN_10b1d4d80(void)

{
  uint extraout_w8;
  
  func_0x00010b1eb8fc();
  if ((extraout_w8 & 1) == 0) {
    FUN_10b1d4da8();
  }
  return;
}



/* Entry: 10b1d4da8; end: 10b1d4deb;  */

void FUN_10b1d4da8(long param_1)

{
  long unaff_x21;
  
  func_0x00010b1ebf60();
  if (unaff_x21 != 0) {
    func_0x00010b1ec018();
    while (param_1 != unaff_x21) {
      param_1 = param_1 + -0xb0;
      func_0x00010b1d4c18();
    }
    func_0x00010b1eb23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d4dec; end: 10b1d4e33;  */

void FUN_10b1d4dec(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b1eada8();
  *(undefined1 *)(param_1 + 0xb8) = 0;
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    func_0x00010b1ebec8();
    FUN_10b1d4e34();
    *(undefined1 *)(unaff_x19 + 0xb8) = 1;
  }
  return;
}



/* Entry: 10b1d4e34; end: 10b1d4e6f;  */

void FUN_10b1d4e34(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb648();
  func_0x000107c279a0();
  func_0x00010b1eba60();
  func_0x00010b1ede7c(unaff_x19 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 10b1d4e70; end: 10b1d4e8f;  */

void FUN_10b1d4e70(long param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    func_0x00010b1d4c18();
  }
  return;
}



/* Entry: 10b1d4e90; end: 10b1d4eb3;  */

void FUN_10b1d4e90(void)

{
  func_0x00010b1eb198();
  FUN_10b1d4da8();
  return;
}



/* Entry: 10b1d4eb4; end: 10b1d4f13;  */

void FUN_10b1d4eb4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb548();
  _bzero();
  *(undefined8 *)(unaff_x19 + 8) = 0;
  if (*(char *)(unaff_x19 + 0xc0) != '\0') {
    FUN_10b1d4bc8(unaff_x19 + 0x10);
  }
  FUN_10b1d4e70(unaff_x20 + 8);
  func_0x00010b1ebc2c();
  func_0x000107c31408();
  FUN_10b1d4e70(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b1d4f14; end: 10b1d4f33;  */

void FUN_10b1d4f14(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1d4e90();
  }
  return;
}



/* Entry: 10b1d4f34; end: 10b1d4f6b;  */

void FUN_10b1d4f34(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc39f8)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1d4f6c; end: 10b1d4f77;  */

void FUN_10b1d4f6c(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1d4e90();
  }
  return;
}



/* Entry: 10b1d4f78; end: 10b1d4f9b;  */

void FUN_10b1d4f78(void)

{
  func_0x00010b1eb198();
  FUN_10b1d4f9c();
  return;
}



/* Entry: 10b1d4f9c; end: 10b1d4fdf;  */

void FUN_10b1d4f9c(long param_1)

{
  long unaff_x21;
  
  func_0x00010b1ebf60();
  if (unaff_x21 != 0) {
    func_0x00010b1ec018();
    while (param_1 != unaff_x21) {
      param_1 = param_1 + -200;
      func_0x00010b1d5e1c();
    }
    func_0x00010b1eb23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1d4fe0; end: 10b1d52df;  */

void FUN_10b1d4fe0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined1 **ppuVar5;
  ulong extraout_x8;
  undefined8 uVar6;
  undefined1 **extraout_x9;
  long *unaff_x19;
  long unaff_x20;
  undefined1 **ppuVar7;
  undefined1 **ppuVar8;
  long lVar9;
  undefined1 **ppuVar10;
  undefined1 **unaff_x25;
  undefined1 *puVar11;
  undefined1 auStack_568 [216];
  undefined1 *apuStack_490 [27];
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [200];
  undefined1 uStack_2e8;
  undefined1 auStack_2e0 [216];
  long alStack_208 [26];
  byte bStack_138;
  long lStack_130;
  undefined1 *apuStack_128 [25];
  byte bStack_60;
  undefined1 *apuStack_48 [3];
  long *plStack_30;
  undefined1 **ppuStack_28;
  undefined1 **ppuStack_20;
  undefined1 uStack_18;
  undefined1 *apuStack_10 [2];
  
  func_0x00010b1ec024();
  func_0x00010b1eb648();
  uStack_3b8 = 0;
  auStack_3b0[0] = 0;
  uStack_2e8 = 0;
  if (*(char *)(param_2 + 0xd8) == '\0') {
    uStack_3b8 = 0;
  }
  else {
    FUN_10b1d535c(auStack_3b0,unaff_x20 + 0x10);
    FUN_10b1d5414(unaff_x20 + 0x10);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = uStack_3b8;
  uStack_3b8 = uVar6;
  FUN_10b1d52e0(auStack_2e0,&uStack_3b8);
  _bzero(auStack_568,0xd8);
  FUN_10b1d52e0(apuStack_490,auStack_568);
  func_0x00010b1ec2c8();
  FUN_10b1d5728(&lStack_130,auStack_2e0);
  ppuVar5 = apuStack_490;
  FUN_10b1d5728(alStack_208);
  func_0x00010b1ee424();
  while ((((bStack_60 & 1) != 0 || ((bStack_138 & 1) != 0)) && (lStack_130 != alStack_208[0]))) {
    if ((bStack_60 & 1) == 0) {
      func_0x00010b1eb9a4(apuStack_48);
      ppuVar5 = apuStack_48;
      func_0x00010b1eb224(&plStack_30);
      func_0x00010b1eb3c8();
      func_0x00010b1ecd20();
      func_0x00010b1ed9a8();
    }
    uVar3 = unaff_x19[1];
    if (uVar3 < (ulong)unaff_x19[2]) {
      ppuVar5 = apuStack_128;
      FUN_10b1d5378();
      lVar9 = uVar3 + 200;
    }
    else {
      lVar9 = uVar3 - *unaff_x19;
      if (unaff_x25 < (undefined1 **)(lVar9 / 200 + 1U)) {
        FUN_10b1d54a8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1d5270);
        (*pcVar2)();
      }
      func_0x00010b1eb414((unaff_x19[2] - *unaff_x19) / 200);
      ppuVar7 = extraout_x9;
      if (0xa3d70a3d70a3d6 < extraout_x8) {
        ppuVar7 = unaff_x25;
      }
      if (ppuVar7 == (undefined1 **)0x0) {
        ppuVar7 = (undefined1 **)0x0;
        ppuVar8 = (undefined1 **)0x0;
      }
      else {
        FUN_10b1d54b4();
        ppuVar8 = ppuVar5;
      }
      lVar9 = (long)ppuVar7 + lVar9;
      ppuVar5 = apuStack_128;
      FUN_10b1d5378(lVar9);
      ppuVar10 = (undefined1 **)*unaff_x19;
      ppuVar1 = (undefined1 **)unaff_x19[1];
      puVar11 = (undefined1 *)(lVar9 + (((long)ppuVar1 - (long)ppuVar10) / -200) * 200);
      ppuStack_28 = apuStack_10;
      ppuStack_20 = apuStack_48;
      apuStack_48[0] = puVar11;
      plStack_30 = unaff_x19 + 2;
      apuStack_10[0] = puVar11;
      for (unaff_x25 = ppuVar10; unaff_x25 != ppuVar1; unaff_x25 = unaff_x25 + 0x19) {
        ppuVar5 = unaff_x25;
        FUN_10b1d5378();
        apuStack_48[0] = apuStack_48[0] + 200;
      }
      uStack_18 = 1;
      func_0x00010b1ee424(apuStack_48[0]);
      for (; ppuVar10 != ppuVar1; ppuVar10 = ppuVar10 + 0x19) {
        func_0x00010b1d5e1c(ppuVar10);
      }
      lVar9 = lVar9 + 200;
      func_0x00010b1d54e8(&plStack_30);
      lVar4 = *unaff_x19;
      *unaff_x19 = (long)puVar11;
      unaff_x19[1] = lVar9;
      unaff_x19[2] = (long)(ppuVar7 + (long)ppuVar8 * 0x19);
      if (lVar4 != 0) {
        __ZdlPv();
      }
    }
    unaff_x19[1] = lVar9;
    FUN_10b1d5520(&lStack_130);
  }
  func_0x00010b1d5700(&stack0xffffffffffffffa8);
  func_0x00010b1ebc08(alStack_208);
  FUN_10b1d57dc(apuStack_128);
  func_0x00010b1ebc08(apuStack_490);
  func_0x00010b1ebc08(auStack_568);
  func_0x00010b1ebc08(auStack_2e0);
  func_0x00010b1ebc08(&uStack_3b8);
  return;
}



/* Entry: 10b1d52e0; end: 10b1d531f;  */

void FUN_10b1d52e0(void)

{
  long unaff_x20;
  
  func_0x00010b1ed584();
  FUN_10b1d5320();
  func_0x00010b1eb918();
  FUN_10b1d5320();
  FUN_10b1d57dc(unaff_x20 + 8);
  return;
}



/* Entry: 10b1d5320; end: 10b1d535b;  */

void FUN_10b1d5320(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b1eae98();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0xd0) = 0;
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_10b1d535c((undefined1 *)(param_1 + 8),param_2 + 8);
  }
  return;
}



/* Entry: 10b1d535c; end: 10b1d5377;  */

void FUN_10b1d535c(long param_1)

{
  FUN_10b1d5378();
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}



/* Entry: 10b1d5378; end: 10b1d5413;  */

void FUN_10b1d5378(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010b1eb1e4();
  if ((bool)in_ZR) {
    func_0x00010b1ec278(param_2[2],*param_2);
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    func_0x00010b1ecc30();
  }
  func_0x00010b1ed554();
  if (*(char *)(param_2 + 7) == '\x01') {
    func_0x00010b1ec8d4();
  }
  uVar1 = param_2[8];
  *(undefined1 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x60) = 0;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    func_0x00010b1ed5a4(param_2[9]);
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
  }
  func_0x00010b1ed0b4();
  func_0x000107c27b7c(unaff_x19 + 0x90,param_2 + 0x12);
  func_0x00010b1ed7b8();
  return;
}



/* Entry: 10b1d5414; end: 10b1d5437;  */

void FUN_10b1d5414(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x00010b1d5e1c();
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



/* Entry: 10b1d5438; end: 10b1d54a7;  */

void FUN_10b1d5438(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b1eb398();
  func_0x00010b1eba20();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x44);
  *(undefined4 *)(unaff_x20 + 0x40) = *(undefined4 *)(unaff_x19 + 0x40);
  *(undefined1 *)(unaff_x20 + 0x44) = uVar1;
  func_0x000107c27c54(unaff_x20 + 0x48,unaff_x19 + 0x48);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x88) = uVar1;
  func_0x0001052b2b60(unaff_x20 + 0x90,unaff_x19 + 0x90);
  uVar1 = *(undefined1 *)(unaff_x19 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x19 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xb8) = *(undefined8 *)(unaff_x19 + 0xb8);
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar2;
  *(undefined1 *)(unaff_x20 + 0xc0) = uVar1;
  return;
}



/* Entry: 10b1d54a8; end: 10b1d54b3;  */

void FUN_10b1d54a8(long param_1)

{
  undefined1 in_CY;
  ulong extraout_x8;
  long unaff_x20;
  
  func_0x00010b1eafa8();
  func_0x00010b1ed788();
  if (!(bool)in_CY) {
    __Znwm(param_1 * 200);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b1ebd44();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b1eb758();
    while (param_1 != unaff_x20) {
      param_1 = param_1 + -200;
      func_0x00010b1d5e1c();
    }
  }
  return;
}



/* Entry: 10b1d54b4; end: 10b1d551f;  */

void FUN_10b1d54b4(long param_1)

{
  undefined1 in_CY;
  ulong extraout_x8;
  long unaff_x20;
  
  func_0x00010b1ed788();
  if (!(bool)in_CY) {
    __Znwm(param_1 * 200);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b1ebd44();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b1eb758();
    while (param_1 != unaff_x20) {
      param_1 = param_1 + -200;
      func_0x00010b1d5e1c();
    }
  }
  return;
}



/* Entry: 10b1d5520; end: 10b1d5583;  */

void FUN_10b1d5520(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_e8 [200];
  
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ed23c();
    FUN_10b1d55b8();
    func_0x00010b1eb918();
    FUN_10b1d5584();
    func_0x00010b1d5e1c(auStack_e8);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0xd0) == '\x01') {
    func_0x00010b1d5e1c();
    *(undefined1 *)(lVar1 + 200) = 0;
  }
  return;
}



/* Entry: 10b1d5584; end: 10b1d55b7;  */

long FUN_10b1d5584(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_10b1d5438();
  }
  else {
    FUN_10b1d535c();
  }
  return param_1;
}



/* Entry: 10b1d55b8; end: 10b1d567b;  */

void FUN_10b1d55b8(undefined8 param_1,undefined1 param_2)

{
  undefined1 uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b1eb720();
  func_0x00010b1eb06c();
  func_0x00010b1eb4f8();
  func_0x00010b1ebc20();
  FUN_10b1d567c();
  func_0x00010b1ed4f4();
  func_0x00010b1ec898(unaff_x19 + 0x48);
  func_0x000107c28210();
  func_0x00010b1ec88c();
  func_0x00010b1d56c4();
  *(short *)(unaff_x19 + 0x68) = (short)param_1;
  func_0x00010b1ec5c8();
  *(undefined8 *)(unaff_x19 + 0x70) = param_1;
  *(undefined1 *)(unaff_x19 + 0x78) = param_2;
  func_0x00010b1ec5b4();
  *(undefined8 *)(unaff_x19 + 0x80) = param_1;
  *(undefined1 *)(unaff_x19 + 0x88) = param_2;
  func_0x0001073a755c(unaff_x19 + 0x90);
  uVar1 = 8;
  func_0x00010887383c();
  *(int *)(unaff_x19 + 0xb0) = (int)unaff_x20;
  *(char *)(unaff_x19 + 0xb4) = (char)((ulong)unaff_x20 >> 0x20);
  func_0x00010b1edcf8();
  *(undefined8 *)(unaff_x19 + 0xb8) = unaff_x20;
  *(undefined1 *)(unaff_x19 + 0xc0) = uVar1;
  return;
}



/* Entry: 10b1d567c; end: 10b1d5693;  */

ulong FUN_10b1d567c(ulong param_1)

{
  FUN_10b1d5694();
  return param_1 & 0xffffffffff;
}



/* Entry: 10b1d5694; end: 10b1d5727;  */

void FUN_10b1d5694(int param_1)

{
  func_0x00010b1eb67c();
  if (param_1 != 5) {
    func_0x00010b1ebab8();
    func_0x00010b1ec64c();
  }
  return;
}



/* Entry: 10b1d5728; end: 10b1d576f;  */

void FUN_10b1d5728(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b1eada8();
  *(undefined1 *)(param_1 + 0xd0) = 0;
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    func_0x00010b1ebec8();
    FUN_10b1d5770();
    *(undefined1 *)(unaff_x19 + 0xd0) = 1;
  }
  return;
}



/* Entry: 10b1d5770; end: 10b1d57db;  */

void FUN_10b1d5770(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb648();
  func_0x000107c279a0();
  func_0x00010b1eba60();
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c279a0(unaff_x19 + 0x48,unaff_x20 + 0x48);
  func_0x00010b1ed0b4();
  func_0x000104be0ccc(unaff_x19 + 0x90,unaff_x20 + 0x90);
  func_0x00010b1ed7b8();
  return;
}



/* Entry: 10b1d57dc; end: 10b1d57fb;  */

void FUN_10b1d57dc(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x00010b1d5e1c();
  }
  return;
}



/* Entry: 10b1d57fc; end: 10b1d5863;  */

void FUN_10b1d57fc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1ed584();
  _bzero();
  *(undefined8 *)(unaff_x19 + 8) = 0;
  if (*(char *)(unaff_x19 + 0xd8) != '\0') {
    FUN_10b1d5414(unaff_x19 + 0x10);
  }
  FUN_10b1d57dc(unaff_x20 + 8);
  func_0x00010b1ebc2c();
  func_0x000107c31408();
  FUN_10b1d57dc(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b1d5864; end: 10b1d588b;  */

long FUN_10b1d5864(long param_1)

{
  FUN_10b1d588c(param_1 + 8);
  *(undefined4 *)(param_1 + 0x60) = 0;
  return param_1;
}



/* Entry: 10b1d588c; end: 10b1d58ab;  */

void FUN_10b1d588c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 unaff_x30;
  
  func_0x00010b1ec078();
  if ((bool)in_ZR) {
    func_0x00010b1ee100(param_1,param_2,unaff_x30);
  }
  return;
}



/* Entry: 10b1d58ac; end: 10b1d58ff;  */

void FUN_10b1d58ac(long param_1)

{
  func_0x00010563ab1c();
  *(undefined4 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10b1d5900; end: 10b1d59d7;  */

void FUN_10b1d5900(undefined8 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long lVar4;
  long unaff_x22;
  long in_stack_00000038;
  
  func_0x00010b1ee684();
  func_0x00010b1eb1e4();
  if ((bool)in_ZR) {
    func_0x00010b1ec2c8();
    lVar4 = *param_2;
    lVar1 = param_2[1];
    func_0x00010b1ed4e4();
    if (!(bool)in_ZR) {
      lVar3 = extraout_x8 / 200;
      func_0x00010b1ed788();
      if ((bool)in_CY) {
        FUN_10b1d54a8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1d59b0);
        (*pcVar2)();
      }
      FUN_10b1d54b4();
      *unaff_x19 = lVar3;
      unaff_x19[1] = lVar3;
      func_0x00010b1eb35c(200);
      for (; lVar4 != lVar1; lVar4 = lVar4 + 200) {
        FUN_10b1d5770(unaff_x22,lVar4);
        unaff_x22 = in_stack_00000038 + 200;
        in_stack_00000038 = unaff_x22;
      }
      func_0x00010b1ed534();
      func_0x00010b1d54e8();
      unaff_x19[1] = unaff_x22;
    }
    func_0x00010b1ed494();
    func_0x00010b1d5700();
    *(char *)(unaff_x19 + 3) = (char)lVar4;
  }
  return;
}



/* Entry: 10b1d59d8; end: 10b1d59f7;  */

void FUN_10b1d59d8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1d4f78();
  }
  return;
}



/* Entry: 10b1d59f8; end: 10b1d5a2f;  */

void FUN_10b1d59f8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x00010b1eb07c();
  if (!(bool)in_ZR) {
    func_0x00010b1eb014((&PTR_FUN_110cc3a08)[extraout_x8]);
  }
  func_0x00010b1eb924();
  return;
}



/* Entry: 10b1d5a30; end: 10b1d5a3b;  */

void FUN_10b1d5a30(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1d4f78();
  }
  return;
}



/* Entry: 10b1d5a3c; end: 10b1d5aeb;  */

void FUN_10b1d5a3c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [32];
  long lStack_50;
  long lStack_48;
  
  func_0x00010b1eb63c();
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar3) / -0x88) * 0x88;
  lStack_50 = lVar5;
  lStack_48 = lVar5;
  func_0x00010b1ebc7c();
  lVar2 = lVar5;
  for (lVar4 = lVar3; lVar4 != lVar1; lVar4 = lVar4 + 0x88) {
    FUN_10b1d5b20(lVar2,lVar4);
    lVar2 = lStack_48 + 0x88;
    lStack_48 = lVar2;
  }
  func_0x00010b1ebed4(lVar2);
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x88) {
    FUN_10b1d5ca0(lVar3);
  }
  FUN_10b1d2d30(auStack_70);
  *(long *)(unaff_x19 + 8) = lVar5;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010b1eae3c();
  return;
}



/* Entry: 10b1d5aec; end: 10b1d5b1f;  */

void FUN_10b1d5aec(undefined8 param_1,long param_2)

{
  func_0x00010b1ed404();
  if (param_2 != 0) {
    FUN_10b1d2dec(param_2);
  }
  func_0x00010b1ebcfc(0x88);
  return;
}



/* Entry: 10b1d5b20; end: 10b1d5b9b;  */

void FUN_10b1d5b20(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  uVar2 = *(undefined8 *)(param_2 + 10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0xb);
  *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)(param_2 + 0xd);
  *(undefined8 *)(param_1 + 0xb) = uVar3;
  *(undefined8 *)(param_1 + 10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = uVar1;
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  return;
}



/* Entry: 10b1d5b9c; end: 10b1d5bff;  */

void FUN_10b1d5b9c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010b1ed388();
  while (func_0x00010b1ecd28(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x88;
    FUN_10b1d5ca0();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1d5c00; end: 10b1d5c9f;  */

void FUN_10b1d5c00(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010b1eb648();
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10b1d5b20();
    lVar2 = uVar1 + 0x88;
  }
  else {
    FUN_10b1d2ce8();
    func_0x00010b1ec828();
    FUN_10b1d5aec(auStack_58);
    FUN_10b1d5b20();
    lStack_48 = lStack_48 + 0x88;
    func_0x00010b1eb918();
    FUN_10b1d5a3c();
    lVar2 = *(long *)(unaff_x19 + 8);
    FUN_10b1d5b9c(auStack_58);
  }
  *(long *)(unaff_x19 + 8) = lVar2;
  return;
}



/* Entry: 10b1d5ca0; end: 10b1d5d4f;  */

long FUN_10b1d5ca0(long param_1)

{
  func_0x000107c27914(param_1 + 0x68);
  func_0x00010b12186c(param_1 + 0x58);
  func_0x00010b1d5bdc(param_1 + 0x48);
  func_0x00010b1eb938();
  return param_1;
}



/* Entry: 10b1d5d50; end: 10b1d5d6b;  */

void FUN_10b1d5d50(long param_1)

{
  func_0x000107c27994();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10b1d5d6c; end: 10b1d5e47;  */

void FUN_10b1d5d6c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010b1eb1e4();
  if ((bool)in_ZR) {
    func_0x00010b1ec278(param_2[2],*param_2);
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    func_0x00010b1ecc30();
  }
  func_0x00010b1ed554();
  if (*(char *)(param_2 + 7) == '\x01') {
    func_0x00010b1ec8d4();
  }
  func_0x00010b1ed0e8();
  func_0x000107c27b7c(unaff_x19 + 0xa0,param_2 + 0x14);
  func_0x000107c27b7c(unaff_x19 + 0xc0,param_2 + 0x18);
  uVar1 = param_2[0x1c];
  *(undefined8 *)(unaff_x19 + 0xe8) = param_2[0x1d];
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar1;
  func_0x000107c27b7c(unaff_x19 + 0xf0,param_2 + 0x1e);
  return;
}



/* Entry: 10b1d5e48; end: 10b1d5e5f;  */

void FUN_10b1d5e48(long *param_1,long param_2)

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



/* Entry: 10b1d5e60; end: 10b1d5e93;  */

void FUN_10b1d5e60(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b1eb558();
  if (unaff_x20 != 0) {
    func_0x00010b1ec8c8();
    if ((bool)in_ZR) {
      FUN_10b1d38f8(unaff_x20 + 0x10);
    }
    func_0x00010b1eb70c();
  }
  return;
}



/* Entry: 10b1d5e94; end: 10b1d5e97;  */

void FUN_10b1d5e94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3a28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1d5e98; end: 10b1d5eab;  */

void FUN_10b1d5e98(void)

{
  FUN_10b1d604c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1d5eac; end: 10b1d5ed3;  */

void FUN_10b1d5eac(long param_1)

{
  FUN_10b1b96e4(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 10b1d5ed4; end: 10b1d5ed7;  */

void FUN_10b1d5ed4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1d5ed8; end: 10b1d6023;  */

void FUN_10b1d5ed8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puStack_50;
  undefined1 uStack_48;
  
  func_0x00010b1eb648();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  puStack_50 = (undefined8 *)(param_1 + 0x48);
  *puStack_50 = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uStack_48 = 0;
  lVar2 = *(long *)(unaff_x20 + 0x50) - *(long *)(unaff_x20 + 0x48);
  if (lVar2 != 0) {
    func_0x00010b1d2ca4(puStack_50,lVar2 / 0x88);
    func_0x00010b1ebdc8();
    FUN_10b1d2bf0();
  }
  uStack_48 = 1;
  FUN_10b1d6024(&puStack_50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined1 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x130) = 0;
  if (*(char *)(unaff_x20 + 0x130) == '\x01') {
    FUN_10b1d2e4c((undefined1 *)(unaff_x19 + 0x68),unaff_x20 + 0x68);
  }
  *(undefined1 *)(unaff_x19 + 0x138) = 0;
  *(undefined1 *)(unaff_x19 + 0x148) = 0;
  if (*(char *)(unaff_x20 + 0x148) == '\x01') {
    lVar2 = *(long *)(unaff_x20 + 0x140);
    *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(unaff_x20 + 0x138);
    *(long *)(unaff_x19 + 0x140) = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10 != 0);
    }
    *(undefined1 *)(unaff_x19 + 0x148) = 1;
  }
  lVar2 = *(long *)(unaff_x20 + 0x158);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x150);
  *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x20 + 0x158);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b1ee490();
  lVar2 = *(long *)(unaff_x20 + 0x170);
  *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x20 + 0x168);
  *(long *)(unaff_x19 + 0x170) = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 10b1d6024; end: 10b1d604b;  */

void FUN_10b1d6024(void)

{
  uint extraout_w8;
  
  func_0x00010b1eb8fc();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010b1d31d8();
  }
  return;
}



/* Entry: 10b1d604c; end: 10b1d6057;  */

void FUN_10b1d604c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc3a28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1d6058; end: 10b1d608b;  */

void FUN_10b1d6058(void)

{
  long unaff_x20;
  
  func_0x00010b1eb548();
  FUN_10b1d608c();
  func_0x00010b1eb714();
  FUN_10b1d608c();
  FUN_10b1d63b8(unaff_x20 + 8);
  return;
}



/* Entry: 10b1d608c; end: 10b1d60c7;  */

void FUN_10b1d608c(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b1eae98();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x68) = 0;
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_10b1d60c8((undefined1 *)(param_1 + 8),param_2 + 8);
  }
  return;
}



/* Entry: 10b1d60c8; end: 10b1d60e3;  */

void FUN_10b1d60c8(long param_1)

{
  FUN_10b1d60e4();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 10b1d60e4; end: 10b1d6183;  */

void FUN_10b1d60e4(long param_1,long param_2)

{
  undefined1 in_ZR;
  
  func_0x00010b1ec078();
  if ((bool)in_ZR) {
    func_0x00010b1ec250();
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*(char *)(param_2 + 0x38) == '\x01') {
    func_0x00010b1ed5a4(*(undefined8 *)(param_2 + 0x20));
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_2 + 0x58) == '\x01') {
    func_0x00010b1ed5a4(*(undefined8 *)(param_2 + 0x40));
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}



/* Entry: 10b1d6184; end: 10b1d61a7;  */

void FUN_10b1d6184(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10b1de578();
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



/* Entry: 10b1d61a8; end: 10b1d61d3;  */

void FUN_10b1d61a8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb398();
  func_0x00010b1eba20();
  func_0x000107c27c54(unaff_x20 + 0x40,unaff_x19 + 0x40);
  return;
}



/* Entry: 10b1d61d4; end: 10b1d61df;  */

void FUN_10b1d61d4(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_90 [96];
  
  func_0x00010b1eafa8();
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1d6278();
    func_0x00010b1eb714();
    FUN_10b1d6244();
    FUN_10b1de578(auStack_90);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x68) == '\x01') {
    FUN_10b1de578();
    *(undefined1 *)(lVar1 + 0x60) = 0;
  }
  return;
}



/* Entry: 10b1d61e0; end: 10b1d6243;  */

void FUN_10b1d61e0(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_80 [96];
  
  func_0x00010b1eb65c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x00010b1ec2d4();
    FUN_10b1d6278();
    func_0x00010b1eb714();
    FUN_10b1d6244();
    FUN_10b1de578(auStack_80);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x68) == '\x01') {
    FUN_10b1de578();
    *(undefined1 *)(lVar1 + 0x60) = 0;
  }
  return;
}



/* Entry: 10b1d6244; end: 10b1d6277;  */

long FUN_10b1d6244(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10b1d61a8();
  }
  else {
    FUN_10b1d60c8();
  }
  return param_1;
}



/* Entry: 10b1d6278; end: 10b1d62bb;  */

void FUN_10b1d6278(void)

{
  long unaff_x19;
  
  func_0x00010b1eb720();
  func_0x00010b1eb06c();
  func_0x00010b1eb4f8();
  func_0x00010b1ebc20(unaff_x19 + 0x40);
  func_0x000107c28210();
  return;
}



/* Entry: 10b1d62bc; end: 10b1d62e3;  */

void FUN_10b1d62bc(void)

{
  uint extraout_w8;
  
  func_0x00010b1eb8fc();
  if ((extraout_w8 & 1) == 0) {
    FUN_10b1d62e4();
  }
  return;
}


