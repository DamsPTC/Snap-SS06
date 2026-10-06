/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074f646c; end: 1074f649b;  */

void FUN_1074f646c(void)

{
  long extraout_x8;
  
  func_0x0001074feb74();
  if (extraout_x8 != 0) {
    FUN_1074f649c();
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f649c; end: 1074f64cf;  */

void FUN_1074f649c(void)

{
  long unaff_x20;
  char *unaff_x21;
  
  func_0x0001074ff8dc();
  while (unaff_x20 != 0) {
    if (-1 < *unaff_x21) {
      func_0x0001074fea00();
    }
    func_0x0001074feeb8();
  }
  return;
}



/* Entry: 1074f64d0; end: 1074f64f3;  */

undefined8 FUN_1074f64d0(undefined8 param_1)

{
  FUN_1074f6518();
  return param_1;
}



/* Entry: 1074f64f4; end: 1074f6517;  */

undefined8 FUN_1074f64f4(undefined8 param_1)

{
  FUN_1074f686c();
  return param_1;
}



/* Entry: 1074f6518; end: 1074f6543;  */

long FUN_1074f6518(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x0001074ff4b4();
    FUN_1074f6544();
  }
  return param_1;
}



/* Entry: 1074f6544; end: 1074f6553;  */

void FUN_1074f6544(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar4;
  
  uVar1 = (param_3 - (long)param_2) / 0x98;
  uVar3 = uVar1;
  func_0x0001074feb74();
  if ((ulong)((extraout_x8 - *param_1) / 0x98) < uVar3) {
    FUN_1074f6624();
    func_0x0001074feae4();
    FUN_10748bb28();
    param_2 = unaff_x19;
    FUN_1074c326c();
    func_0x0001074ff39c();
  }
  else {
    lVar4 = unaff_x19[1] - *param_1;
    if (uVar1 <= (ulong)(lVar4 / 0x98)) {
      func_0x0001074ff1b8();
      FUN_1074f6654();
      plVar2 = unaff_x19;
      func_0x00010748f2a8();
      plVar2 = (long *)plVar2[1];
      while (plVar2 != unaff_x19) {
        plVar2 = plVar2 + -0x13;
        func_0x00010748be00();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1074f6654(param_2,(long)param_2 + lVar4);
    func_0x0001074ff56c(unaff_x19[1] - *unaff_x19);
  }
  func_0x0001074c8db4();
  param_2 = param_2 + 2;
  FUN_1074c32e8();
  unaff_x19[1] = (long)param_2;
  return;
}



/* Entry: 1074f6554; end: 1074f6623;  */

void FUN_1074f6554(long *param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  
  uVar2 = param_4;
  func_0x0001074feb74();
  if ((ulong)((extraout_x8 - *param_1) / 0x98) < uVar2) {
    FUN_1074f6624();
    func_0x0001074feae4();
    FUN_10748bb28();
    param_2 = unaff_x19;
    FUN_1074c326c();
    func_0x0001074ff39c();
  }
  else {
    lVar3 = unaff_x19[1] - *param_1;
    if (param_4 <= (ulong)(lVar3 / 0x98)) {
      func_0x0001074ff1b8();
      FUN_1074f6654();
      plVar1 = unaff_x19;
      func_0x00010748f2a8();
      plVar1 = (long *)plVar1[1];
      while (plVar1 != unaff_x19) {
        plVar1 = plVar1 + -0x13;
        func_0x00010748be00();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1074f6654(param_2,(long)param_2 + lVar3);
    func_0x0001074ff56c(unaff_x19[1] - *unaff_x19);
  }
  func_0x0001074c8db4();
  param_2 = param_2 + 2;
  FUN_1074c32e8();
  unaff_x19[1] = (long)param_2;
  return;
}



/* Entry: 1074f6624; end: 1074f6653;  */

void FUN_1074f6624(long *param_1)

{
  if (*param_1 != 0) {
    FUN_107486f3c();
    func_0x0001074ff38c();
    func_0x0001074ff174();
  }
  return;
}



/* Entry: 1074f6654; end: 1074f666f;  */

void FUN_1074f6654(void)

{
  func_0x0001074ff9c0();
  FUN_1074f6670();
  return;
}



/* Entry: 1074f6670; end: 1074f66b7;  */

void FUN_1074f6670(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001074fed84();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x98) {
    func_0x0001074fed9c();
    FUN_1074f66b8();
  }
  func_0x0001074febdc();
  return;
}



/* Entry: 1074f66b8; end: 1074f6733;  */

void FUN_1074f66b8(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001074fe980();
  func_0x000107470af8();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x31);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x29);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x31) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x29) = uVar1;
  func_0x0001074f6708(unaff_x20 + 0x40,unaff_x19 + 0x40);
  func_0x000107262f3c(unaff_x20 + 0x58,unaff_x19 + 0x58);
  *(undefined1 *)(unaff_x20 + 0x90) = *(undefined1 *)(unaff_x19 + 0x90);
  return;
}



/* Entry: 1074f6734; end: 1074f673f;  */

void FUN_1074f6734(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  
  uVar2 = param_3 - param_2 >> 4;
  uVar3 = uVar2;
  func_0x0001074fe9f4();
  lVar4 = *param_1;
  if ((ulong)(param_1[2] - lVar4 >> 4) < uVar3) {
    func_0x0001074d3120();
    FUN_1074c5038();
    FUN_1074b298c();
    lVar4 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 8);
    if ((ulong)(lVar5 - lVar4 >> 4) < uVar2) {
      lVar1 = unaff_x20 + (lVar5 - lVar4);
      if (lVar5 != lVar4) {
        func_0x0001074ff1b8();
        _memmove();
        lVar5 = *(long *)(unaff_x19 + 8);
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        _memmove(lVar5,lVar1,param_3);
      }
      lVar4 = lVar5 + param_3;
      goto LAB_1074f67fc;
    }
  }
  if (param_3 - unaff_x20 != 0) {
    func_0x0001074ff1b8();
    _memmove();
  }
  lVar4 = lVar4 + (param_3 - unaff_x20);
LAB_1074f67fc:
  *(long *)(unaff_x19 + 8) = lVar4;
  return;
}



/* Entry: 1074f6740; end: 1074f6807;  */

void FUN_1074f6740(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  uVar2 = param_4;
  func_0x0001074fe9f4();
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 4) < uVar2) {
    func_0x0001074d3120();
    FUN_1074c5038();
    FUN_1074b298c();
    lVar3 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 8);
    if ((ulong)(lVar4 - lVar3 >> 4) < param_4) {
      lVar1 = unaff_x20 + (lVar4 - lVar3);
      if (lVar4 != lVar3) {
        func_0x0001074ff1b8();
        _memmove();
        lVar4 = *(long *)(unaff_x19 + 8);
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        _memmove(lVar4,lVar1,param_3);
      }
      lVar3 = lVar4 + param_3;
      goto LAB_1074f67fc;
    }
  }
  if (param_3 - unaff_x20 != 0) {
    func_0x0001074ff1b8();
    _memmove();
  }
  lVar3 = lVar3 + (param_3 - unaff_x20);
LAB_1074f67fc:
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}



/* Entry: 1074f6808; end: 1074f681f;  */

void FUN_1074f6808(void)

{
  FUN_1074f6820();
  return;
}



/* Entry: 1074f6820; end: 1074f6863;  */

void FUN_1074f6820(void)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001074feb10();
  FUN_1074f6864();
  uVar4 = unaff_x19[1];
  uVar3 = *unaff_x19;
  uVar2 = unaff_x19[3];
  uVar1 = unaff_x19[2];
  unaff_x19[1] = uStack_38;
  *unaff_x19 = uStack_40;
  unaff_x19[3] = uStack_28;
  unaff_x19[2] = uStack_30;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  FUN_1074f646c(&uStack_40);
  return;
}



/* Entry: 1074f6864; end: 1074f686b;  */

void FUN_1074f6864(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 1074f686c; end: 1074f6897;  */

long FUN_1074f686c(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x0001074ff4b4();
    FUN_1074f6898();
  }
  return param_1;
}



/* Entry: 1074f6898; end: 1074f68a7;  */

void FUN_1074f6898(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar4;
  
  uVar1 = (param_3 - (long)param_2) / 0x120;
  uVar3 = uVar1;
  func_0x0001074feb74();
  if ((ulong)((extraout_x8 - *param_1) / 0x120) < uVar3) {
    FUN_1074f6978();
    func_0x0001074feae4();
    FUN_1074c6c54();
    FUN_1074cff64();
    func_0x0001074ff39c();
    param_2 = unaff_x19;
  }
  else {
    lVar4 = unaff_x19[1] - *param_1;
    if (uVar1 <= (ulong)(lVar4 / 0x120)) {
      func_0x0001074ff1b8();
      FUN_1074f69a8();
      plVar2 = unaff_x19;
      func_0x0001074b591c();
      plVar2 = (long *)plVar2[1];
      while (plVar2 != unaff_x19) {
        plVar2 = plVar2 + -0x24;
        func_0x0001074ae9a8();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1074f69a8(param_2,(long)param_2 + lVar4);
    func_0x0001074ff56c(unaff_x19[1] - *unaff_x19);
  }
  plVar2 = param_2 + 2;
  FUN_1074cffe0();
  param_2[1] = (long)plVar2;
  return;
}



/* Entry: 1074f68a8; end: 1074f6977;  */

void FUN_1074f68a8(long *param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  
  uVar2 = param_4;
  func_0x0001074feb74();
  if ((ulong)((extraout_x8 - *param_1) / 0x120) < uVar2) {
    FUN_1074f6978();
    func_0x0001074feae4();
    FUN_1074c6c54();
    FUN_1074cff64();
    func_0x0001074ff39c();
    param_2 = unaff_x19;
  }
  else {
    lVar3 = unaff_x19[1] - *param_1;
    if (param_4 <= (ulong)(lVar3 / 0x120)) {
      func_0x0001074ff1b8();
      FUN_1074f69a8();
      plVar1 = unaff_x19;
      func_0x0001074b591c();
      plVar1 = (long *)plVar1[1];
      while (plVar1 != unaff_x19) {
        plVar1 = plVar1 + -0x24;
        func_0x0001074ae9a8();
      }
      *(long **)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_1074f69a8(param_2,(long)param_2 + lVar3);
    func_0x0001074ff56c(unaff_x19[1] - *unaff_x19);
  }
  plVar1 = param_2 + 2;
  FUN_1074cffe0();
  param_2[1] = (long)plVar1;
  return;
}



/* Entry: 1074f6978; end: 1074f69a7;  */

void FUN_1074f6978(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1074ae96c();
    func_0x0001074ff38c();
    func_0x0001074ff174();
  }
  return;
}



/* Entry: 1074f69a8; end: 1074f69c3;  */

void FUN_1074f69a8(void)

{
  func_0x0001074ff9c0();
  FUN_1074f69c4();
  return;
}



/* Entry: 1074f69c4; end: 1074f6a0b;  */

void FUN_1074f69c4(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001074fed84();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x120) {
    func_0x0001074fed9c();
    FUN_1074f6a0c();
  }
  func_0x0001074febdc();
  return;
}



/* Entry: 1074f6a0c; end: 1074f6ae7;  */

void FUN_1074f6a0c(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001074fe980();
  func_0x00010729c0b0();
  func_0x000107262f3c(unaff_x20 + 0x40,unaff_x19 + 0x40);
  *(undefined2 *)(unaff_x20 + 0x78) = *(undefined2 *)(unaff_x19 + 0x78);
  func_0x000107262f3c(unaff_x20 + 0x80,unaff_x19 + 0x80);
  func_0x000107262f3c(unaff_x20 + 0xb8,unaff_x19 + 0xb8);
  *(undefined4 *)(unaff_x20 + 0xf0) = *(undefined4 *)(unaff_x19 + 0xf0);
  func_0x00010729c0e4(unaff_x20 + 0xf8,unaff_x19 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x108);
  *(undefined1 *)(unaff_x20 + 0x118) = *(undefined1 *)(unaff_x19 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x108) = uVar1;
  return;
}



/* Entry: 1074f6ae8; end: 1074f6bb3;  */

long * FUN_1074f6ae8(long *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x9;
  long lVar6;
  long lVar7;
  long lStack_40;
  long lStack_38;
  
  FUN_1074f6bb4();
  lVar7 = param_2[3];
  if (lVar7 != 0) {
    func_0x0001074feb04();
    func_0x0001074f6bcc();
    lVar3 = *param_2;
    lVar5 = param_2[1];
    FUN_1074f6cc4();
    while (lStack_40 = lVar3, lStack_38 = lVar5, lVar3 != 0) {
      func_0x0001074ff84c();
      lVar4 = lVar3;
      func_0x0001074ff39c();
      func_0x00010ae6c8b4();
      bVar2 = (byte)lVar3 & 0x7f;
      lVar3 = param_1[1];
      uVar1 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(lVar6 + (lVar4 - 7U & uVar1) + (uVar1 & 7)) = bVar2;
      FUN_1074f6d18(lVar3 + lVar4 * 0x40,lVar5);
      func_0x0001074f6d38(&lStack_40);
      lVar3 = lStack_40;
      lVar5 = lStack_38;
    }
    param_1[3] = lVar7;
    func_0x0001074fef44();
    *(long *)(extraout_x8 + -8) = extraout_x9 - lVar7;
  }
  return param_1;
}



/* Entry: 1074f6bb4; end: 1074f6c1f;  */

void FUN_1074f6bb4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001074ffaf4();
  *param_1 = extraout_x8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 1074f6c20; end: 1074f6c83;  */

void FUN_1074f6c20(void)

{
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x0001074ff8c8();
  func_0x0001074fe628();
  FUN_107367a70();
  func_0x0001074feef8();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0001074febe8();
      func_0x0001074fe5d8();
      FUN_1074fe3c0();
      func_0x0001074ff414();
      FUN_1074f6c84();
    }
    func_0x0001074ff50c();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 1074f6c84; end: 1074f6cc3;  */

void FUN_1074f6c84(void)

{
  long unaff_x19;
  undefined1 uStack_21;
  
  func_0x0001074ff454();
  func_0x0001074f6ca4();
  if (*(uint *)(unaff_x19 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(unaff_x19 + 0x28)])(&uStack_21);
  }
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 1074f6cc4; end: 1074f6ce3;  */

undefined1  [16] FUN_1074f6cc4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x0001074ff5b4();
  FUN_1074f6ce4();
  return auStack_20;
}



/* Entry: 1074f6ce4; end: 1074f6d17;  */

void FUN_1074f6ce4(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x0001074fe8fc();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 1074f6d18; end: 1074f6d63;  */

void FUN_1074f6d18(long param_1)

{
  long unaff_x19;
  
  func_0x0001074ff784();
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(unaff_x19 + 0x38);
  return;
}



/* Entry: 1074f6d64; end: 1074f6d6b;  */

void FUN_1074f6d64(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x0001074ffaf4();
  *param_1 = extraout_x8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 1074f6d6c; end: 1074f6d77;  */

undefined8 * FUN_1074f6d6c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  func_0x0001074fe6bc();
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    while (plVar3 != plVar2) {
      plVar3 = plVar3 + -1;
      lVar1 = *plVar3;
      *plVar3 = 0;
      if (lVar1 != 0) {
        func_0x0001074fe5f8();
      }
    }
    param_1[1] = plVar2;
    func_0x0001074ff38c();
  }
  return param_1;
}



/* Entry: 1074f6d78; end: 1074f6e0f;  */

undefined8 * FUN_1074f6d78(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    while (plVar3 != plVar2) {
      plVar3 = plVar3 + -1;
      lVar1 = *plVar3;
      *plVar3 = 0;
      if (lVar1 != 0) {
        func_0x0001074fe5f8();
      }
    }
    param_1[1] = plVar2;
    func_0x0001074ff38c();
  }
  return param_1;
}



/* Entry: 1074f6e10; end: 1074f6e33;  */

void FUN_1074f6e10(void)

{
  func_0x0001074febf0();
  func_0x0001074f6a84();
  func_0x0001074fea00();
  return;
}



/* Entry: 1074f6e34; end: 1074f6e9b;  */

/* WARNING: Possible PIC construction at 0x0001074f6e84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074f6e88) */

long FUN_1074f6e34(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x40);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10748ab6c(plVar1 + 5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar1 + 2);
    func_0x0001074fecd0();
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_1 + 0x18;
  func_0x0001074fea40();
  if (lVar2 != 0) {
    func_0x0001074ff6f0();
  }
  return param_1;
}



/* Entry: 1074f6e9c; end: 1074f6ef7;  */

void FUN_1074f6e9c(void)

{
  long unaff_x19;
  
  func_0x0001074ffac4();
  FUN_10747c9d8();
  FUN_1074f5c20(unaff_x19 + 0x20);
  FUN_10745f898(unaff_x19 + 8);
  return;
}



/* Entry: 1074f6ef8; end: 1074f6f27;  */

void FUN_1074f6ef8(void)

{
  long extraout_x8;
  
  func_0x0001074feb74();
  if (extraout_x8 != 0) {
    FUN_1074f6f28();
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f6f28; end: 1074f6fa3;  */

void FUN_1074f6f28(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x0001074fed78();
  while (unaff_x19 != 0) {
    if (-1 < *unaff_x20) {
      func_0x0001074f6f58();
    }
    func_0x0001074ff424();
  }
  return;
}



/* Entry: 1074f6fa4; end: 1074f6fd3;  */

void FUN_1074f6fa4(void)

{
  long extraout_x8;
  
  func_0x0001074feb74();
  if (extraout_x8 != 0) {
    FUN_1074f6fd4();
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f6fd4; end: 1074f7053;  */

void FUN_1074f6fd4(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x0001074fed78();
  while (unaff_x19 != 0) {
    if (-1 < *unaff_x20) {
      func_0x0001074f7004();
    }
    func_0x0001074fee64();
  }
  return;
}



/* Entry: 1074f7054; end: 1074f7083;  */

void FUN_1074f7054(void)

{
  long extraout_x8;
  
  func_0x0001074feb74();
  if (extraout_x8 != 0) {
    FUN_1074f7084();
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f7084; end: 1074f70ff;  */

void FUN_1074f7084(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x0001074fed78();
  while (unaff_x19 != 0) {
    if (-1 < *unaff_x20) {
      func_0x0001074f70b4();
    }
    func_0x0001074ff424();
  }
  return;
}



/* Entry: 1074f7100; end: 1074f712f;  */

void FUN_1074f7100(void)

{
  long extraout_x8;
  
  func_0x0001074feb74();
  if (extraout_x8 != 0) {
    FUN_1074f7130();
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f7130; end: 1074f71af;  */

void FUN_1074f7130(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x0001074fed78();
  while (unaff_x19 != 0) {
    if (-1 < *unaff_x20) {
      func_0x0001074f7160();
    }
    func_0x0001074fee64();
  }
  return;
}



/* Entry: 1074f71b0; end: 1074f71df;  */

void FUN_1074f71b0(void)

{
  long extraout_x8;
  
  func_0x0001074feb74();
  if (extraout_x8 != 0) {
    FUN_1074f71e0();
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f71e0; end: 1074f725b;  */

void FUN_1074f71e0(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x0001074fed78();
  while (unaff_x19 != 0) {
    if (-1 < *unaff_x20) {
      func_0x0001074f7210();
    }
    func_0x0001074ff424();
  }
  return;
}



/* Entry: 1074f725c; end: 1074f728b;  */

void FUN_1074f725c(void)

{
  long extraout_x8;
  
  func_0x0001074feb74();
  if (extraout_x8 != 0) {
    FUN_1074f728c();
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f728c; end: 1074f72bb;  */

void FUN_1074f728c(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x0001074fed78();
  while (unaff_x19 != 0) {
    if (-1 < *unaff_x20) {
      func_0x00010747e6b8();
    }
    func_0x0001074fee64();
  }
  return;
}



/* Entry: 1074f72bc; end: 1074f72d7;  */

void FUN_1074f72bc(long param_1)

{
  FUN_1074f72d8();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 1074f72d8; end: 1074f733f;  */

void FUN_1074f72d8(long param_1)

{
  long unaff_x19;
  
  func_0x0001074fe980();
  func_0x000104c318bc();
  func_0x000104c318bc(param_1 + 0x38,unaff_x19 + 0x38);
  return;
}



/* Entry: 1074f7340; end: 1074f7373;  */

void FUN_1074f7340(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined8 **)(param_1 + 8) = puVar4 + 2;
  return;
}



/* Entry: 1074f7374; end: 1074f7407;  */

undefined8 FUN_1074f7374(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x0001074fe9f4();
  func_0x0001074ffa98();
  FUN_1074f7408();
  func_0x0001074ff474();
  FUN_1074f5cd0(auStack_48);
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001074fe68c();
    } while (extraout_w10 != 0);
  }
  puStack_38 = puStack_38 + 2;
  func_0x0001074fec24();
  FUN_1074f5c98();
  uVar2 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001074fefdc();
  return uVar2;
}



/* Entry: 1074f7408; end: 1074f7453;  */

ulong FUN_1074f7408(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    uVar1 = param_1[2] - *param_1 >> 3;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0xfffffffffffffff;
    }
    return uVar1;
  }
  FUN_1074f5c8c();
  func_0x0001074ff6d4();
  func_0x0001074fea4c();
  if (param_1 != (long *)0x0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1074f7454; end: 1074f7477;  */

void FUN_1074f7454(long param_1)

{
  func_0x0001074fea4c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1074f7478; end: 1074f74b7;  */

void FUN_1074f7478(long param_1)

{
  long unaff_x20;
  
  func_0x0001074fe9f4();
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_107411134(param_1 + 0x40,unaff_x20 + 0x40);
  return;
}



/* Entry: 1074f74b8; end: 1074f7533;  */

long * FUN_1074f74b8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x58;
    func_0x000107411320();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074f7534; end: 1074f7553;  */

void FUN_1074f7534(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x000107411320();
  }
  return;
}



/* Entry: 1074f7554; end: 1074f7583;  */

void FUN_1074f7554(void)

{
  long extraout_x8;
  
  func_0x0001074feb74();
  if (extraout_x8 != 0) {
    FUN_1074f7584();
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f7584; end: 1074f75b7;  */

void FUN_1074f7584(void)

{
  long unaff_x20;
  char *unaff_x21;
  
  func_0x0001074ff8dc();
  while (unaff_x20 != 0) {
    if (-1 < *unaff_x21) {
      func_0x0001074fea00();
    }
    func_0x0001074feeb8();
  }
  return;
}



/* Entry: 1074f75b8; end: 1074f75c3;  */

void FUN_1074f75b8(ulong param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  func_0x0001074fe6bc();
  if (param_1 >> 0x3d == 0) {
    func_0x0001074feb68();
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074ff5e4();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x0001074ff93c();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074f75c4; end: 1074f7623;  */

void FUN_1074f75c4(ulong param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    func_0x0001074feb68();
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074ff5e4();
  lVar1 = extraout_x8;
  lVar2 = extraout_x9;
  while (lVar2 != lVar1) {
    func_0x0001074ff93c();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9_00;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074f7624; end: 1074f7c2b;  */

/* WARNING: Possible PIC construction at 0x0001074f7d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074f7d90) */
/* WARNING: Removing unreachable block (ram,0x0001074f7d98) */
/* WARNING: Removing unreachable block (ram,0x0001074f7db4) */
/* WARNING: Removing unreachable block (ram,0x0001074f7dbc) */
/* WARNING: Removing unreachable block (ram,0x0001074f7dc4) */
/* WARNING: Removing unreachable block (ram,0x0001074f7dc8) */
/* WARNING: Removing unreachable block (ram,0x0001074fe76c) */

void FUN_1074f7624(ulong *param_1,ulong *param_2,ulong *param_3,uint param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *unaff_x19;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar7 = param_1;
LAB_1074f7654:
  puVar11 = param_2 + -1;
  puVar10 = puVar7;
LAB_1074f7668:
  puVar7 = puVar10;
  uVar18 = (long)param_2 - (long)puVar7 >> 3;
  switch(uVar18) {
  case 0:
  case 1:
    goto LAB_1074f7c18;
  case 2:
    uVar18 = param_2[-1];
    FUN_1074f7c2c(uVar18,*puVar7);
    if ((int)uVar18 != 0) {
      uVar18 = *puVar7;
      *puVar7 = param_2[-1];
      param_2[-1] = uVar18;
    }
    goto LAB_1074f7c18;
  case 3:
    puVar10 = puVar7 + 1;
    func_0x0001074ff1c4();
    uVar18 = *puVar10;
    func_0x0001074ff120();
    uVar5 = *puVar11;
    FUN_1074f7c2c(uVar5,*puVar10);
    if ((uVar18 & 1) == 0) {
      if ((int)uVar5 == 0) {
        return;
      }
      func_0x0001074ffa30();
      iVar4 = (int)*puVar10;
      func_0x0001074ff120();
      if (iVar4 == 0) {
        return;
      }
      uVar18 = *puVar7;
      *puVar7 = *puVar10;
      *puVar10 = uVar18;
      return;
    }
    uVar18 = *puVar7;
    if ((int)uVar5 != 0) {
      *puVar7 = *puVar11;
      *puVar11 = uVar18;
      return;
    }
    *puVar7 = *puVar10;
    *puVar10 = uVar18;
    iVar4 = (int)*puVar11;
    FUN_1074f7c2c();
    if (iVar4 == 0) {
      return;
    }
    func_0x0001074ffa30();
    return;
  case 4:
    puVar6 = puVar11;
    func_0x0001074ff1c4(puVar7,puVar7 + 1,puVar7 + 2);
    break;
  case 5:
    puVar10 = puVar7 + 2;
    param_3 = puVar7 + 3;
    func_0x0001074ff1c4(puVar7,puVar7 + 1,puVar10,param_3,puVar11);
    unaff_x29 = &stack0xfffffffffffffff0;
    puVar6 = param_3;
    func_0x0001074fe980();
    unaff_x30 = 0x1074f7d90;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    puVar11 = puVar10;
    break;
  default:
    goto code_r0x0001074f767c;
  }
  *(ulong **)((long)register0x00000008 + -0x30) = param_3;
  *(ulong **)((long)register0x00000008 + -0x28) = puVar11;
  *(ulong **)((long)register0x00000008 + -0x20) = puVar7;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001074fe980();
  FUN_1074f7c84();
  iVar4 = (int)*puVar6;
  func_0x0001074ff120();
  if (((iVar4 != 0) && (func_0x0001074fed38(), iVar4 != 0)) && (func_0x0001074fed1c(), iVar4 != 0))
  {
    func_0x0001074ffa5c();
  }
  return;
code_r0x0001074f767c:
  if ((long)uVar18 < 0x18) {
    if ((param_4 & 1) == 0) {
      puVar10 = puVar7;
      if (puVar7 != param_2) {
        while( true ) {
          puVar7 = puVar7 + 1;
          puVar11 = puVar10 + 1;
          if (puVar11 == param_2) break;
          uVar18 = puVar10[1];
          FUN_1074f7c2c(uVar18,*puVar10);
          puVar10 = puVar11;
          if ((int)uVar18 != 0) {
            uVar18 = *puVar11;
            puVar11 = puVar7;
            do {
              puVar6 = puVar11 + -1;
              *puVar11 = *puVar6;
              uVar5 = uVar18;
              FUN_1074f7c2c(uVar18,puVar11[-2]);
              puVar11 = puVar6;
            } while ((uVar5 & 1) != 0);
            *puVar6 = uVar18;
          }
        }
      }
      goto LAB_1074f7c18;
    }
    if (puVar7 == param_2) goto LAB_1074f7c18;
    lVar17 = 0;
    puVar10 = puVar7;
    goto LAB_1074f7984;
  }
  if (param_3 == (ulong *)0x0) {
    if (puVar7 == param_2) goto LAB_1074f7c18;
    uVar15 = uVar18 - 2 >> 1;
    uVar5 = uVar15;
    goto LAB_1074f7a04;
  }
  puVar10 = puVar7 + (uVar18 >> 1);
  if (uVar18 < 0x81) {
    func_0x0001074ff8c0(puVar10,puVar7);
  }
  else {
    func_0x0001074ff8c0(puVar7,puVar10);
    FUN_1074f7c84(puVar7 + 1,puVar10 + -1,param_2 + -2);
    FUN_1074f7c84(puVar7 + 2,puVar10 + 1,param_2 + -3);
    FUN_1074f7c84(puVar10 + -1,puVar10,puVar10 + 1);
    uVar18 = *puVar7;
    *puVar7 = *puVar10;
    *puVar10 = uVar18;
  }
  param_3 = (ulong *)((long)param_3 + -1);
  if ((param_4 & 1) == 0) {
    param_1 = (ulong *)puVar7[-1];
    FUN_1074f7c2c(param_1,*puVar7);
    if (((ulong)param_1 & 1) == 0) {
      uVar18 = *puVar7;
      func_0x0001074feeb0();
      puVar10 = puVar7;
      if (((ulong)param_1 & 1) == 0) {
        do {
          puVar10 = puVar10 + 1;
          if (param_2 <= puVar10) break;
          func_0x0001074feeb0();
        } while ((int)param_1 == 0);
      }
      else {
        do {
          puVar10 = puVar10 + 1;
          func_0x0001074feeb0();
        } while (((ulong)param_1 & 1) == 0);
      }
      unaff_x19 = param_2;
      if (puVar10 < param_2) {
        do {
          unaff_x19 = unaff_x19 + -1;
          func_0x0001074feeb0();
        } while (((ulong)param_1 & 1) != 0);
      }
      while (puVar10 < unaff_x19) {
        uVar5 = *puVar10;
        *puVar10 = *unaff_x19;
        *unaff_x19 = uVar5;
        do {
          puVar10 = puVar10 + 1;
          func_0x0001074feeb0();
        } while ((int)param_1 == 0);
        do {
          unaff_x19 = unaff_x19 + -1;
          func_0x0001074feeb0();
        } while (((ulong)param_1 & 1) != 0);
      }
      puVar6 = puVar10 + -1;
      if (puVar7 != puVar6) {
        *puVar7 = *puVar6;
      }
      param_4 = 0;
      *puVar6 = uVar18;
      goto LAB_1074f7668;
    }
  }
  lVar17 = 0;
  uVar18 = *puVar7;
  do {
    uVar5 = *(ulong *)((long)puVar7 + lVar17 + 8);
    func_0x0001074ff0d4();
    lVar17 = lVar17 + 8;
  } while ((uVar5 & 1) != 0);
  puVar6 = (ulong *)((long)puVar7 + lVar17);
  puVar13 = param_2;
  puVar10 = puVar6;
  if (lVar17 == 8) {
    do {
      unaff_x19 = puVar13;
      if (puVar13 <= puVar6) break;
      puVar13 = puVar13 + -1;
      uVar5 = *puVar13;
      func_0x0001074ff0d4();
      unaff_x19 = puVar13;
    } while ((uVar5 & 1) == 0);
  }
  else {
    do {
      puVar13 = puVar13 + -1;
      iVar4 = (int)*puVar13;
      func_0x0001074ff0d4();
      unaff_x19 = puVar13;
    } while (iVar4 == 0);
  }
  while (puVar10 < puVar13) {
    uVar5 = *puVar10;
    *puVar10 = *puVar13;
    *puVar13 = uVar5;
    do {
      puVar10 = puVar10 + 1;
      uVar5 = *puVar10;
      func_0x0001074ff0d4();
    } while ((uVar5 & 1) != 0);
    do {
      puVar13 = puVar13 + -1;
      uVar5 = *puVar13;
      func_0x0001074ff0d4();
    } while ((uVar5 & 1) == 0);
  }
  puVar13 = puVar10 + -1;
  if (puVar7 != puVar13) {
    *puVar7 = *puVar13;
  }
  *puVar13 = uVar18;
  if (puVar6 < unaff_x19) goto LAB_1074f77e0;
  puVar6 = puVar7;
  FUN_1074f7dd0(puVar7,puVar13);
  param_1 = puVar10;
  FUN_1074f7dd0(puVar10,param_2);
  if ((int)param_1 == 0) goto code_r0x0001074f77dc;
  param_2 = puVar13;
  if (((ulong)puVar6 & 1) != 0) goto LAB_1074f7c18;
  goto LAB_1074f7654;
LAB_1074f7984:
  puVar11 = puVar10 + 1;
  if (puVar11 == param_2) goto LAB_1074f7c18;
  uVar18 = puVar10[1];
  FUN_1074f7c2c(uVar18,*puVar10);
  if ((int)uVar18 != 0) {
    uVar18 = *puVar11;
    lVar3 = lVar17;
    do {
      lVar16 = lVar3;
      puVar1 = (undefined8 *)((long)puVar7 + lVar16);
      puVar1[1] = *puVar1;
      puVar10 = puVar7;
      if (lVar16 == 0) goto LAB_1074f79d8;
      uVar5 = uVar18;
      FUN_1074f7c2c(uVar18,puVar1[-1]);
      lVar3 = lVar16 + -8;
    } while ((uVar5 & 1) != 0);
    puVar10 = (ulong *)((long)puVar7 + lVar16);
LAB_1074f79d8:
    *puVar10 = uVar18;
  }
  lVar17 = lVar17 + 8;
  puVar10 = puVar11;
  goto LAB_1074f7984;
code_r0x0001074f77dc:
  if (((ulong)puVar6 & 1) == 0) {
LAB_1074f77e0:
    FUN_1074f7624(puVar7,puVar13,param_3,param_4 & 1);
    param_4 = 0;
    param_1 = puVar7;
  }
  goto LAB_1074f7668;
LAB_1074f7a04:
  do {
    if ((long)uVar5 <= (long)uVar15) {
      uVar2 = (uVar5 & 0x3fffffffffffffff) << 1 | 1;
      puVar10 = puVar7 + uVar2;
      uVar14 = uVar5 * 2 + 2;
      puVar11 = puVar10;
      uVar12 = uVar2;
      if ((long)uVar14 < (long)uVar18) {
        uVar8 = *puVar10;
        FUN_1074f7c2c(uVar8,puVar10[1]);
        puVar11 = puVar10 + 1;
        uVar12 = uVar14;
        if ((int)uVar8 == 0) {
          puVar11 = puVar10;
          uVar12 = uVar2;
        }
      }
      puVar10 = puVar7 + uVar5;
      param_1 = (ulong *)*puVar11;
      FUN_1074f7c2c(param_1,*puVar10);
      if (((ulong)param_1 & 1) == 0) {
        uVar14 = *puVar10;
        do {
          puVar6 = puVar11;
          *puVar10 = *puVar6;
          if ((long)uVar15 < (long)uVar12) break;
          uVar8 = uVar12 << 1 | 1;
          puVar10 = puVar7 + uVar8;
          uVar2 = uVar12 * 2 + 2;
          puVar11 = puVar10;
          uVar12 = uVar8;
          if ((long)uVar2 < (long)uVar18) {
            uVar9 = *puVar10;
            FUN_1074f7c2c(uVar9,puVar10[1]);
            puVar11 = puVar10 + 1;
            uVar12 = uVar2;
            if ((int)uVar9 == 0) {
              puVar11 = puVar10;
              uVar12 = uVar8;
            }
          }
          param_1 = (ulong *)*puVar11;
          FUN_1074f7c2c(param_1,uVar14);
          puVar10 = puVar6;
        } while ((int)param_1 == 0);
        *puVar6 = uVar14;
      }
    }
    uVar5 = uVar5 - 1;
  } while (-1 < (long)uVar5);
  for (; 1 < (long)uVar18; uVar18 = uVar18 - 1) {
    uVar15 = *puVar7;
    uVar5 = 0;
    puVar10 = puVar7;
    do {
      uVar2 = uVar5 << 1 | 1;
      uVar14 = uVar5 * 2 + 2;
      uVar12 = uVar2;
      puVar11 = puVar10 + uVar5 + 1;
      if ((long)uVar14 < (long)uVar18) {
        param_1 = (ulong *)puVar10[uVar5 + 1];
        FUN_1074f7c2c(param_1,puVar10[uVar5 + 2]);
        uVar12 = uVar14;
        puVar11 = puVar10 + uVar5 + 2;
        if ((int)param_1 == 0) {
          uVar12 = uVar2;
          puVar11 = puVar10 + uVar5 + 1;
        }
      }
      *puVar10 = *puVar11;
      uVar5 = uVar12;
      puVar10 = puVar11;
    } while ((long)uVar12 <= (long)(uVar18 - 2 >> 1));
    param_2 = param_2 + -1;
    if (puVar11 == param_2) {
      *puVar11 = uVar15;
    }
    else {
      *puVar11 = *param_2;
      *param_2 = uVar15;
      lVar17 = (long)puVar11 + (8 - (long)puVar7) >> 3;
      if (1 < lVar17) {
        uVar5 = lVar17 - 2U >> 1;
        func_0x0001074ff760();
        if ((int)param_1 != 0) {
          uVar15 = *puVar11;
          puVar10 = puVar7 + uVar5;
          do {
            puVar6 = puVar10;
            *puVar11 = *puVar6;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1 >> 1;
            param_1 = (ulong *)puVar7[uVar5];
            FUN_1074f7c2c(param_1,uVar15);
            puVar11 = puVar6;
            puVar10 = puVar7 + uVar5;
          } while (((ulong)param_1 & 1) != 0);
          *puVar6 = uVar15;
        }
      }
    }
  }
LAB_1074f7c18:
  func_0x0001074ff1c4(unaff_x30);
  return;
}



/* Entry: 1074f7c2c; end: 1074f7c83;  */

uint FUN_1074f7c2c(long param_1,long param_2)

{
  long *plVar1;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_30 = param_1 + 0x1c;
  lStack_28 = param_1 + 0x24;
  lStack_20 = param_1 + 0x1a;
  lStack_18 = param_1 + 0x20;
  lStack_50 = param_2 + 0x1c;
  lStack_48 = param_2 + 0x24;
  lStack_40 = param_2 + 0x1a;
  lStack_38 = param_2 + 0x20;
  plVar1 = &lStack_30;
  FUN_1074f7f3c(plVar1,&lStack_50);
  return (uint)plVar1 >> 7 & 1;
}



/* Entry: 1074f7c84; end: 1074f7d67;  */

void FUN_1074f7c84(ulong *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  func_0x0001074ff120();
  uVar3 = *param_3;
  FUN_1074f7c2c(uVar3,*param_2);
  if ((uVar2 & 1) == 0) {
    if ((int)uVar3 != 0) {
      func_0x0001074ffa30();
      iVar1 = (int)*param_2;
      func_0x0001074ff120();
      if (iVar1 != 0) {
        uVar2 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar2;
      }
    }
  }
  else {
    uVar2 = *param_1;
    if ((int)uVar3 == 0) {
      *param_1 = *param_2;
      *param_2 = uVar2;
      iVar1 = (int)*param_3;
      FUN_1074f7c2c();
      if (iVar1 != 0) {
        func_0x0001074ffa30();
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar2;
    }
  }
  return;
}



/* Entry: 1074f7d68; end: 1074f7dcf;  */

void FUN_1074f7d68(int param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x0001074fe980();
  func_0x0001074f7d20();
  func_0x0001074ff760();
  if (param_1 != 0) {
    uVar2 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar2;
    iVar1 = (int)*param_4;
    func_0x0001074ff120();
    if (((iVar1 != 0) && (func_0x0001074fed38(), iVar1 != 0)) && (func_0x0001074fed1c(), iVar1 != 0)
       ) {
      func_0x0001074ffa5c();
    }
  }
  return;
}



/* Entry: 1074f7dd0; end: 1074f7f3b;  */

bool FUN_1074f7dd0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  func_0x0001074ff8c8();
  func_0x0001074fe9f4();
  switch(param_2 - param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar6 = unaff_x20[-1];
    FUN_1074f7c2c(uVar6,*unaff_x19);
    if ((int)uVar6 != 0) {
      uVar6 = *unaff_x19;
      *unaff_x19 = unaff_x20[-1];
      unaff_x20[-1] = uVar6;
    }
    break;
  case 3:
    func_0x0001074f7c84();
    break;
  case 4:
    func_0x0001074f7d20();
    break;
  case 5:
    FUN_1074f7d68();
    break;
  default:
    func_0x0001074ff8c0();
    lVar7 = 0;
    iVar8 = 0;
    for (puVar4 = unaff_x19 + 3; puVar4 != unaff_x20; puVar4 = puVar4 + 1) {
      iVar2 = (int)*puVar4;
      func_0x0001074ff120();
      if (iVar2 != 0) {
        uVar6 = *puVar4;
        lVar1 = lVar7;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)unaff_x19 + lVar9 + 0x18) =
               *(undefined8 *)((long)unaff_x19 + lVar9 + 0x10);
          puVar5 = unaff_x19;
          if (lVar9 == -0x10) goto LAB_1074f7edc;
          uVar3 = uVar6;
          FUN_1074f7c2c(uVar6,*(undefined8 *)((long)unaff_x19 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while ((uVar3 & 1) != 0);
        puVar5 = (ulong *)((long)unaff_x19 + lVar9 + 0x10);
LAB_1074f7edc:
        *puVar5 = uVar6;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return puVar4 + 1 == unaff_x20;
        }
      }
      lVar7 = lVar7 + 8;
    }
  }
  return true;
}



/* Entry: 1074f7f3c; end: 1074f7fcb;  */

uint FUN_1074f7f3c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  
  bVar3 = *(byte *)*param_1;
  bVar4 = *(byte *)*param_2;
  uVar7 = (uint)(bVar4 < bVar3);
  if (bVar3 < bVar4) {
    uVar7 = 0xffffffff;
  }
  if (bVar3 == bVar4) {
    uVar1 = *(uint *)param_1[1];
    uVar2 = *(uint *)param_2[1];
    uVar7 = (uint)(uVar2 < uVar1);
    if (uVar1 < uVar2) {
      uVar7 = 0xffffffff;
    }
    if (uVar1 == uVar2) {
      sVar5 = *(short *)param_1[2];
      sVar6 = *(short *)param_2[2];
      uVar7 = (uint)(sVar6 < sVar5);
      if (sVar5 < sVar6) {
        uVar7 = 0xffffffff;
      }
      if (sVar5 == sVar6) {
        uVar7 = (uint)(*(uint *)param_2[3] < *(uint *)param_1[3]);
        if (*(uint *)param_1[3] < *(uint *)param_2[3]) {
          uVar7 = 0xffffffff;
        }
        return uVar7;
      }
    }
  }
  return uVar7;
}



/* Entry: 1074f7fcc; end: 1074f8013;  */

long FUN_1074f7fcc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074feec8();
  for (; param_1 != unaff_x20; param_1 = param_1 + 0x1b0) {
    func_0x0001074fed9c();
    func_0x00010729bf90();
    unaff_x19 = unaff_x19 + 0x1b0;
  }
  return unaff_x19;
}



/* Entry: 1074f8014; end: 1074f8037;  */

void FUN_1074f8014(long param_1)

{
  func_0x0001074fea40();
  if (param_1 != 0) {
    func_0x0001074ff6f0();
  }
  return;
}



/* Entry: 1074f8038; end: 1074f805f;  */

long FUN_1074f8038(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_1074f8060(auStack_28);
  return lStack_20 + 0x38;
}



/* Entry: 1074f8060; end: 1074f80a7;  */

void FUN_1074f8060(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = param_2;
  func_0x0001074ff2d4();
  FUN_1074f61cc();
  if ((uVar1 & 1) != 0) {
    FUN_1074f80a8(*(long *)(unaff_x20 + 8) + param_1 * 0x40,param_2);
  }
  func_0x0001074ff4dc();
  return;
}



/* Entry: 1074f80a8; end: 1074f80bf;  */

void FUN_1074f80a8(long param_1)

{
  func_0x000104c2fe00();
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1074f80c0; end: 1074f80e3;  */

void FUN_1074f80c0(long param_1,long param_2)

{
  FUN_10735cc04();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return;
}



/* Entry: 1074f80e4; end: 1074f82b7;  */

bool FUN_1074f80e4(void)

{
  bool bVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_240 [24];
  char cStack_228;
  undefined1 *puStack_220;
  undefined1 auStack_218 [24];
  int iStack_200;
  char cStack_1e0;
  long alStack_1d8 [28];
  undefined1 *puStack_f8;
  undefined8 uStack_48;
  
  func_0x0001074fe980();
  func_0x0001074fe5e8();
  uStack_48 = extraout_x8;
  func_0x000107751334(alStack_1d8);
  if (*(char *)(unaff_x20 + 0x1a0) == '\x01') {
    func_0x00010726236c(auStack_218,unaff_x19 + 0x30);
    if (cStack_1e0 == '\x01') {
      func_0x000107869b38(auStack_240,*(undefined8 *)(unaff_x20 + 0x198),auStack_218);
      if (cStack_228 == '\x01') {
        puStack_f8 = auStack_240;
      }
      FUN_1073de9d8(auStack_240);
    }
    func_0x00010724b3d8(auStack_218);
  }
  func_0x0001077514d8(alStack_1d8);
  plVar7 = alStack_1d8;
  (**(code **)(**(long **)(unaff_x20 + 400) + 0x10))(auStack_218,*(long **)(unaff_x20 + 400),plVar7)
  ;
  if (iStack_200 != 1) goto LAB_1074f8224;
  func_0x00010015bc98(auStack_240,auStack_218);
  plVar2 = *(long **)(unaff_x19 + 0x140);
  puStack_220 = auStack_240;
  for (plVar5 = *(long **)(unaff_x19 + 0x138); plVar7 = plVar2, plVar5 != plVar2;
      plVar5 = plVar5 + 3) {
    ppuVar4 = &puStack_220;
    FUN_1074f82b8(ppuVar4,plVar5);
    plVar7 = plVar5;
    if ((int)ppuVar4 != 0) goto LAB_1074f81d8;
  }
LAB_1074f820c:
  func_0x0001001bc934(unaff_x19 + 0x138,plVar7,*(undefined8 *)(unaff_x19 + 0x140));
  func_0x0001000e30f4(auStack_240);
LAB_1074f8224:
  uVar3 = iStack_200 == 1;
  bVar1 = !(bool)uVar3;
  FUN_1074f82f4(auStack_218);
  func_0x000107267da8();
  func_0x0001074fe49c(uStack_48);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010724b3d8(auStack_218);
    plVar5 = alStack_1d8;
    func_0x000107267da8();
    func_0x0001074fe8f4();
    lVar6 = *(long *)*plVar5;
    func_0x000105275210(lVar6,((long *)*plVar5)[1],plVar7);
    return *(long *)(*plVar5 + 8) == lVar6;
  }
  return bVar1;
LAB_1074f81d8:
  while (plVar5 = plVar5 + 3, plVar5 != plVar2) {
    ppuVar4 = &puStack_220;
    FUN_1074f82b8(ppuVar4,plVar5);
    if (((ulong)ppuVar4 & 1) == 0) {
      func_0x000100066230(plVar7,plVar5);
      plVar7 = plVar7 + 3;
    }
  }
  goto LAB_1074f820c;
}



/* Entry: 1074f82b8; end: 1074f82f3;  */

bool FUN_1074f82b8(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  func_0x000105275210(lVar1,((long *)*param_1)[1],param_2);
  return *(long *)(*param_1 + 8) == lVar1;
}



/* Entry: 1074f82f4; end: 1074f8337;  */

void FUN_1074f82f4(long param_1)

{
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x0001074ff62c((&PTR_FUN_1109b6050)[*(uint *)(param_1 + 0x18)]);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 1074f8338; end: 1074f8343;  */

void FUN_1074f8338(void)

{
  return;
}



/* Entry: 1074f8344; end: 1074f8373;  */

void FUN_1074f8344(void)

{
  long extraout_x8;
  
  func_0x0001074feb74();
  if (extraout_x8 != 0) {
    FUN_1074f8374();
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f8374; end: 1074f83a7;  */

void FUN_1074f8374(void)

{
  long unaff_x20;
  char *unaff_x21;
  
  func_0x0001074ff8dc();
  while (unaff_x20 != 0) {
    if (-1 < *unaff_x21) {
      func_0x0001074fea00();
    }
    func_0x0001074feeb8();
  }
  return;
}



/* Entry: 1074f83a8; end: 1074f842b;  */

long FUN_1074f83a8(long param_1)

{
  func_0x000104c2f714(param_1 + 0x150);
  func_0x000104c2f714(param_1 + 0x118);
  func_0x000104c2f714(param_1 + 0xe0);
  func_0x00010726af18(param_1 + 0x78);
  func_0x00010726af18(param_1 + 8);
  return param_1;
}



/* Entry: 1074f842c; end: 1074f848f;  */

/* WARNING: Possible PIC construction at 0x0001074f8480: Changing call to branch */

undefined1  [16] FUN_1074f842c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong extraout_x8;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 < 0x1c71c71c71c71c8) {
    uVar1 = (param_1[2] - *param_1) / 0x90;
    uVar3 = uVar1 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (0xe38e38e38e38e2 < uVar1) {
      uVar3 = 0x1c71c71c71c71c7;
    }
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = uVar3;
    return auVar7;
  }
  func_0x0001074fe6bc();
  if ((long *)0x1c71c71c71c71c7 < param_1) {
    func_0x000104bd35f4();
    func_0x0001074ff5f0();
    if ((extraout_x8 & 1) == 0) {
      lVar4 = **(long **)(unaff_x19 + 8);
      lVar2 = **(long **)(unaff_x19 + 0x10);
      while (lVar2 != lVar4) {
        lVar2 = lVar2 + -0x90;
        func_0x0001074f8514();
      }
    }
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = unaff_x19;
    return auVar5;
  }
  lVar2 = (long)param_1 * 0x90;
  __Znwm(lVar2);
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = lVar2;
  return auVar6;
}



/* Entry: 1074f8490; end: 1074f8543;  */

void FUN_1074f8490(ulong param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long lVar2;
  
  if (param_1 < 0x1c71c71c71c71c8) {
    __Znwm(param_1 * 0x90);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074ff5f0();
  if ((extraout_x8 & 1) == 0) {
    lVar2 = **(long **)(unaff_x19 + 8);
    lVar1 = **(long **)(unaff_x19 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x90;
      func_0x0001074f8514();
    }
  }
  return;
}



/* Entry: 1074f8544; end: 1074f8607;  */

void FUN_1074f8544(long param_1)

{
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001074fed84();
  lVar1 = *(long *)(param_1 + 8);
  lStack_70 = param_1 + 0x10;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_50 = lVar1;
  for (; lStack_48 = lVar1, unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x90) {
    func_0x0001074fed9c();
    func_0x000107263b58();
    func_0x000104c2fe00(lVar1 + 0x40,unaff_x21 + 0x40);
    func_0x000107277f0c(lVar1 + 0x78,unaff_x21 + 0x78);
    lVar1 = lStack_48 + 0x90;
  }
  func_0x0001074ffa50();
  func_0x0001074f84d4(&lStack_70);
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1074f8608; end: 1074f8667;  */

long FUN_1074f8608(long param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074feec8();
  for (; param_1 != unaff_x20; param_1 = param_1 + 0x90) {
    func_0x0001074fed9c();
    func_0x00010726594c();
    func_0x000107262f3c(param_3 + 0x40,param_1 + 0x40);
    FUN_1074f8668(param_3 + 0x78,param_1 + 0x78);
    unaff_x19 = unaff_x19 + 0x90;
    param_3 = param_3 + 0x90;
  }
  return unaff_x19;
}



/* Entry: 1074f8668; end: 1074f868f;  */

void FUN_1074f8668(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074fe980();
  func_0x000107295f10();
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  return;
}



/* Entry: 1074f8690; end: 1074f86bf;  */

void FUN_1074f8690(void)

{
  long extraout_x8;
  
  func_0x0001074feb74();
  if (extraout_x8 != 0) {
    FUN_1074f86c0();
    func_0x0001074fe63c();
  }
  return;
}



/* Entry: 1074f86c0; end: 1074f87a7;  */

void FUN_1074f86c0(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x0001074fed78();
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    if (-1 < *unaff_x20) {
      func_0x0001074f86f8();
    }
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 1074f87a8; end: 1074f882b;  */

undefined8 FUN_1074f87a8(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001074fe9f4();
  func_0x0001074ffa98();
  FUN_1074f8854();
  func_0x0001074ff474();
  FUN_1074f88ec(auStack_58);
  FUN_1074f882c(lStack_48);
  lStack_48 = lStack_48 + 0x50;
  func_0x0001074fec24();
  FUN_1074f889c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_1074f8a30(auStack_58);
  return uVar1;
}



/* Entry: 1074f882c; end: 1074f8853;  */

void FUN_1074f882c(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001074ff784();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}



/* Entry: 1074f8854; end: 1074f889b;  */

long * FUN_1074f8854(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x333333333333334) {
    uVar1 = (param_1[2] - *param_1) / 0x50;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x199999999999998 < uVar1) {
      plVar2 = (long *)0x333333333333333;
    }
    return plVar2;
  }
  FUN_1074f88e0();
  func_0x0001074fe980();
  plVar2 = param_1 + 2;
  FUN_1074f896c(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0x50) * 0x50);
  func_0x0001074fe430();
  return plVar2;
}



/* Entry: 1074f889c; end: 1074f88df;  */

void FUN_1074f889c(long *param_1,long param_2)

{
  func_0x0001074fe980();
  FUN_1074f896c(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x50) * 0x50);
  func_0x0001074fe430();
  return;
}



/* Entry: 1074f88e0; end: 1074f88eb;  */

void FUN_1074f88e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001074fe6bc();
  func_0x0001074ff464();
  if (param_2 != 0) {
    func_0x0001074f8920(param_4);
  }
  func_0x0001074ff524(0x50);
  return;
}



/* Entry: 1074f88ec; end: 1074f893f;  */

void FUN_1074f88ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001074ff464();
  if (param_2 != 0) {
    func_0x0001074f8920(param_4);
  }
  func_0x0001074ff524(0x50);
  return;
}



/* Entry: 1074f8940; end: 1074f896b;  */

void FUN_1074f8940(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074feec8();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (; lStack_48 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x50) {
    FUN_1074f882c(param_4,param_2);
    param_4 = lStack_48 + 0x50;
  }
  func_0x0001074ffa50();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x50) {
    func_0x0001074ff7f0();
  }
  func_0x0001074f89ec(&uStack_70);
  return;
}



/* Entry: 1074f896c; end: 1074f8a2f;  */

void FUN_1074f896c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  long lStack_40;
  long lStack_38;
  
  func_0x0001074feec8();
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x50) {
    FUN_1074f882c(param_4,param_2);
    param_4 = lStack_38 + 0x50;
  }
  func_0x0001074ffa50();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x50) {
    func_0x0001074ff7f0();
  }
  func_0x0001074f89ec(&uStack_60);
  return;
}



/* Entry: 1074f8a30; end: 1074f8a5b;  */

long * FUN_1074f8a30(long *param_1)

{
  FUN_1074f8a5c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1074f8a5c; end: 1074f8a63;  */

void FUN_1074f8a5c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074fe980(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x50;
    func_0x000104c2f714();
  }
  return;
}



/* Entry: 1074f8a64; end: 1074f8ae7;  */

void FUN_1074f8a64(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074fe980();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x50;
    func_0x000104c2f714();
  }
  return;
}



/* Entry: 1074f8ae8; end: 1074f8aef;  */

void FUN_1074f8ae8(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001074fe980(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x50) {
    func_0x0001074ff83c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074f8af0; end: 1074f8b27;  */

void FUN_1074f8af0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001074fe980();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x50) {
    func_0x0001074ff83c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}


