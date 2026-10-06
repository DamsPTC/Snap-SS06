/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1b8c50; end: 10b1b8c7b;  */

void FUN_10b1b8c50(long param_1)

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



/* Entry: 10b1b8c7c; end: 10b1b8c9b;  */

void FUN_10b1b8c7c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b1ee5e8(param_1,param_2,param_2);
  FUN_10b1ea8c0();
  return;
}



/* Entry: 10b1b8c9c; end: 10b1b8cf7;  */

void FUN_10b1b8c9c(void)

{
  func_0x00010b1eae08();
  func_0x00010b1257d4();
  return;
}



/* Entry: 10b1b8cf8; end: 10b1b8e2f;  */

void FUN_10b1b8cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *unaff_x19;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x00010b1eb424();
  func_0x00010b1ebb5c(auStack_48);
  func_0x00010b1ec238(lStack_38);
  func_0x00010b1ebb50();
  if (*unaff_x19 == 0) {
    func_0x00010b1ed30c();
    func_0x00010b1ec764();
    func_0x00010b1edffc(auStack_48);
    FUN_10b1b8c7c(auStack_58,auStack_48);
    func_0x00010b125908(auStack_48);
    lStack_70 = 0;
    lStack_68 = 0;
    FUN_10b2092a0(auStack_48,auStack_58,param_3);
    FUN_10b1b8c9c(&lStack_70,auStack_48);
    func_0x00010b1257d4(auStack_48);
    func_0x00010b1ed284(auStack_48);
    lVar1 = lStack_38;
    func_0x00010b1ec238(lStack_38);
    func_0x00010b1ebb50();
    if (*unaff_x19 == 0) {
      func_0x00010b1ed30c();
      func_0x00010b1b8cc0(lVar1 + 0xa0,&lStack_70);
      func_0x00010b1ec764();
      unaff_x19[1] = lStack_68;
      *unaff_x19 = lStack_70;
      lStack_70 = 0;
      lStack_68 = 0;
    }
    else {
      func_0x00010b1ec764();
    }
    func_0x00010b1257d4(&lStack_70);
    func_0x00010b1257f8(auStack_58);
  }
  else {
    func_0x00010b1ec764();
  }
  return;
}



/* Entry: 10b1b8e30; end: 10b1b918b;  */

void FUN_10b1b8e30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  uint in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  uint in_stack_00000160;
  byte in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  
  func_0x00010b1ee654();
  func_0x00010b1eb424();
  func_0x00010b1ebb5c(&stack0x00000100);
  func_0x00010b1ec238(in_stack_00000110);
  func_0x00010b1ebb50();
  if (*unaff_x19 != 0) {
    func_0x00010b1ebfbc();
    return;
  }
  func_0x00010b1ed30c();
  func_0x00010b1ebfbc();
  func_0x00010b1edffc();
  FUN_10b1b8c7c(&stack0x00000180);
  func_0x00010b125908(&stack0x00000100);
  in_stack_00000170 = 0;
  in_stack_00000178 = 0;
  FUN_10b1b918c();
  if ((in_stack_00000168 & 1) == 0) {
    if (*(char *)(unaff_x21 + 0x4ef) < '\0') {
      if (*(long *)(unaff_x21 + 0x4e0) != 0) goto LAB_10b1b8ebc;
    }
    else if (*(char *)(unaff_x21 + 0x4ef) != '\0') {
LAB_10b1b8ebc:
      func_0x00010b1ebbd4(*(undefined1 *)(unaff_x20 + 0x17));
      func_0x00010b1ec76c(&stack0x00000098);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&stack0x000000b0,unaff_x21 + 0x4d8);
      func_0x00010b1ecb18();
      func_0x000107c278b8(&stack0x00000080);
      func_0x00010b1ecb18();
      func_0x000107c278b8(&stack0x00000068);
      lVar7 = in_stack_000000a8;
      uVar6 = in_stack_00000090;
      uVar5 = in_stack_00000088;
      uVar4 = in_stack_00000080;
      uVar3 = in_stack_00000078;
      uVar2 = in_stack_00000070;
      uVar1 = in_stack_00000068;
      in_stack_000000d0 = in_stack_00000088;
      in_stack_000000c8 = in_stack_00000080;
      in_stack_000000d8 = in_stack_00000090;
      in_stack_00000088 = 0;
      in_stack_00000090 = 0;
      in_stack_000000e8 = in_stack_00000070;
      in_stack_000000e0 = in_stack_00000068;
      in_stack_000000f0 = in_stack_00000078;
      in_stack_00000068 = 0;
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      in_stack_00000080 = 0;
      in_stack_000000f8 = (uint)(extraout_x8 == 0);
      if (in_stack_00000168 == 1) {
        func_0x000107c27b9c(&stack0x00000100,&stack0x00000098);
        func_0x000107c27b9c(&stack0x00000118,&stack0x000000b0);
        func_0x000107c27b9c(&stack0x00000130,&stack0x000000c8);
        func_0x000107c27b9c(&stack0x00000148,&stack0x000000e0);
      }
      else {
        in_stack_00000108 = in_stack_000000a0;
        in_stack_00000100 = in_stack_00000098;
        in_stack_000000a0 = 0;
        in_stack_000000a8 = 0;
        in_stack_00000098 = 0;
        in_stack_00000120 = in_stack_000000b8;
        in_stack_00000118 = in_stack_000000b0;
        in_stack_00000110 = lVar7;
        in_stack_00000128 = in_stack_000000c0;
        in_stack_000000b0 = 0;
        in_stack_000000b8 = 0;
        in_stack_000000c0 = 0;
        in_stack_00000138 = uVar5;
        in_stack_00000130 = uVar4;
        in_stack_000000d0 = 0;
        in_stack_000000d8 = 0;
        in_stack_000000c8 = 0;
        in_stack_00000140 = uVar6;
        in_stack_00000158 = uVar3;
        in_stack_00000150 = uVar2;
        in_stack_00000148 = uVar1;
        in_stack_000000e0 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000168 = 1;
      }
      in_stack_00000160 = in_stack_000000f8;
      FUN_10b1d2ba8(&stack0x00000098);
      func_0x00010b1edf90();
      func_0x00010b1ed224();
      if ((in_stack_00000168 & 1) != 0) goto LAB_10b1b9008;
    }
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    func_0x00010b1edfb8();
  }
  else {
LAB_10b1b9008:
    in_stack_00000100 = 0;
    in_stack_00000108 = 0;
    in_stack_00000110 = 0;
    in_stack_00000118 = 0;
    in_stack_00000120 = 0;
    in_stack_00000128 = 0;
    in_stack_00000130 = 0;
    in_stack_00000138 = 0;
    in_stack_00000140 = 0;
    in_stack_00000148 = 0;
    in_stack_00000150 = 0;
    in_stack_00000158 = 0;
    FUN_10b2093a0(&stack0x00000098,&stack0x00000180);
    FUN_10b1b8c9c(&stack0x00000170,&stack0x00000098);
    func_0x00010b1257d4(&stack0x00000098);
    FUN_10b1d2ba8();
    func_0x00010b1edfb8();
    func_0x00010b1ed284(&stack0x00000100);
    lVar7 = in_stack_00000110;
    func_0x00010b1ec238(in_stack_00000110);
    func_0x00010b1ebb50();
    if (*unaff_x19 == 0) {
      func_0x00010b1ed30c();
      func_0x00010b1b8cc0(lVar7 + 0xa0,&stack0x00000170);
      func_0x00010b1ebfbc();
      unaff_x19[1] = in_stack_00000178;
      *unaff_x19 = in_stack_00000170;
      in_stack_00000170 = 0;
      in_stack_00000178 = 0;
    }
    else {
      func_0x00010b1ebfbc();
    }
  }
  func_0x00010b1257d4(&stack0x00000170);
  func_0x00010b1257f8(&stack0x00000180);
  return;
}



/* Entry: 10b1b918c; end: 10b1b92df;  */

void FUN_10b1b918c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *unaff_x19;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x00010b1eb648();
  func_0x00010b1ebbd4(*(undefined1 *)(param_2 + 0x17));
  FUN_10b490a88(auStack_e0);
  func_0x00010b1ee4f0();
  puVar1 = auStack_e0;
  if ((char)uStack_c8 == '\0') {
    puVar1 = auStack_78;
  }
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  uStack_50 = puVar1[2];
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  func_0x00010b1edf4c();
  func_0x00010b1ec204();
  func_0x00010b1ebbd4(uStack_50._7_1_);
  if (extraout_x8_00 == 0) {
    *unaff_x19 = 0;
    unaff_x19[0x68] = 0;
  }
  else {
    func_0x00010b1ec76c(auStack_e0);
    uStack_c0 = uStack_58;
    uStack_c8 = uStack_60;
    uStack_b8 = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    func_0x00010b1ecb18();
    func_0x000107c278b8(&uStack_f8);
    func_0x00010b1ecb18();
    func_0x000107c278b8(&uStack_110);
    uStack_a8 = uStack_f0;
    uStack_b0 = uStack_f8;
    uStack_a0 = uStack_e8;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_90 = uStack_108;
    uStack_98 = uStack_110;
    uStack_88 = uStack_100;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_80 = (uint)(extraout_x8 == 0);
    FUN_10b1d3c1c();
    FUN_10b1d2ba8(auStack_e0);
    func_0x00010b1eb738();
    func_0x00010b1ebfd4();
  }
  func_0x00010b1ed154();
  return;
}



/* Entry: 10b1b92e0; end: 10b1b953b;  */

void FUN_10b1b92e0(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w12;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b1eb648();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  uVar9 = *(undefined8 *)(unaff_x20 + 0x39);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x31);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar12;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x39) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x31) = uVar8;
  if (unaff_x19 != unaff_x20) {
    lVar6 = *(long *)(unaff_x20 + 0x48);
    lVar1 = *(long *)(unaff_x20 + 0x50);
    uVar5 = lVar1 - lVar6;
    if ((ulong)(*(long *)(unaff_x19 + 0x58) - *(long *)(unaff_x19 + 0x48)) < uVar5) {
      FUN_10b1d2c70(unaff_x19 + 0x48);
      lVar3 = unaff_x19 + 0x48;
      FUN_10b1d2ce8(lVar3,(long)uVar5 / 0x88);
      func_0x00010b1d2ca4(unaff_x19 + 0x48,lVar3);
    }
    else {
      uVar7 = *(long *)(unaff_x19 + 0x50) - *(long *)(unaff_x19 + 0x48);
      if (uVar5 <= uVar7) {
        func_0x00010b1ee4b8();
        FUN_10b1d2d68();
        FUN_10b1d2dac(unaff_x19 + 0x48,param_1);
        goto LAB_10b1b93b4;
      }
      FUN_10b1d2d68(lVar6,lVar6 + uVar7);
      lVar6 = lVar6 + uVar7;
    }
    FUN_10b1d2bf0(unaff_x19 + 0x48,lVar6,lVar1);
  }
LAB_10b1b93b4:
  *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
  cVar2 = *(char *)(unaff_x19 + 0x130);
  if (cVar2 == *(char *)(unaff_x20 + 0x130)) {
    if (cVar2 != '\0') {
      FUN_10b24e938(unaff_x19 + 0x68,unaff_x20 + 0x68);
      uVar9 = *(undefined8 *)(unaff_x20 + 200);
      uVar8 = *(undefined8 *)(unaff_x20 + 0xc0);
      if (*(long *)(unaff_x20 + 200) != 0) {
        do {
          func_0x00010b1eb124();
        } while (extraout_w10 != 0);
      }
      uStack_48 = *(undefined8 *)(unaff_x19 + 200);
      uStack_50 = *(undefined8 *)(unaff_x19 + 0xc0);
      *(undefined8 *)(unaff_x19 + 200) = uVar9;
      *(undefined8 *)(unaff_x19 + 0xc0) = uVar8;
      FUN_10b1d2f58(&uStack_50);
      func_0x00010b123dec(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
      func_0x000107c27cfc(unaff_x19 + 0xe0,unaff_x20 + 0xe0);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x100);
      uVar8 = *(undefined8 *)(unaff_x20 + 0xf8);
      if (*(long *)(unaff_x20 + 0x100) != 0) {
        do {
          func_0x00010b1eb124();
        } while (extraout_w10_00 != 0);
      }
      uStack_48 = *(undefined8 *)(unaff_x19 + 0x100);
      uStack_50 = *(undefined8 *)(unaff_x19 + 0xf8);
      *(undefined8 *)(unaff_x19 + 0x100) = uVar9;
      *(undefined8 *)(unaff_x19 + 0xf8) = uVar8;
      func_0x00010b1d2f7c(&uStack_50);
      func_0x00010b123dec(unaff_x19 + 0x108,unaff_x20 + 0x108);
      func_0x000107c27cfc(unaff_x19 + 0x118,unaff_x20 + 0x118);
    }
  }
  else if (cVar2 == '\0') {
    FUN_10b1d2e4c(unaff_x19 + 0x68,unaff_x20 + 0x68);
  }
  else {
    FUN_10b1d2e28();
  }
  puVar4 = (undefined8 *)(unaff_x19 + 0x138);
  cVar2 = *(char *)(unaff_x19 + 0x148);
  if (cVar2 == *(char *)(unaff_x20 + 0x148)) {
    if (cVar2 != '\0') {
      uVar8 = *(undefined8 *)(unaff_x20 + 0x138);
      uVar9 = 0;
      if (*(long *)(unaff_x20 + 0x140) != 0) {
        do {
          func_0x00010b1eb0ac();
          uVar9 = extraout_x8;
          uVar8 = extraout_x9;
        } while (extraout_w12 != 0);
      }
      uStack_48 = puVar4[1];
      uStack_50 = *puVar4;
      *(undefined8 *)(unaff_x19 + 0x138) = uVar8;
      *(undefined8 *)(unaff_x19 + 0x140) = uVar9;
      FUN_10b1d2ff0(&uStack_50);
    }
  }
  else if (cVar2 == '\0') {
    *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(unaff_x20 + 0x138);
    lVar6 = *(long *)(unaff_x20 + 0x140);
    *(long *)(unaff_x19 + 0x140) = lVar6;
    if (lVar6 != 0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10_01 != 0);
    }
    *(undefined1 *)(unaff_x19 + 0x148) = 1;
  }
  else {
    FUN_10b1d2fcc();
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0x158);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x150);
  if (*(long *)(unaff_x20 + 0x158) != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_02 != 0);
  }
  uStack_48 = *(undefined8 *)(unaff_x19 + 0x158);
  uStack_50 = *(undefined8 *)(unaff_x19 + 0x150);
  *(undefined8 *)(unaff_x19 + 0x158) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x150) = uVar8;
  func_0x00010b1ee090();
  func_0x00010b1ee490();
  FUN_10b123eac(unaff_x19 + 0x168,unaff_x20 + 0x168);
  return;
}



/* Entry: 10b1b953c; end: 10b1b9683;  */

void FUN_10b1b953c(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [88];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
    FUN_10b1b9684(param_1 + 0x68);
  }
  else {
    if (param_2 != 0) {
      func_0x00010b1ecbf8();
      FUN_10b1bf628(param_1 + 0xc0,auStack_108,1);
      func_0x000107c27914(auStack_108);
    }
    FUN_10b1b96c0(auStack_108,param_1 + 0x68);
    FUN_10b1d30b4(&uStack_b0,param_1 + 0xc0);
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    if (*(char *)(param_1 + 0x130) == '\x01') {
      FUN_10b1d3058(param_1 + 0x68,auStack_108);
      uVar2 = uStack_a8;
      uVar1 = uStack_b0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_38 = *(undefined8 *)(param_1 + 200);
      uStack_40 = *(undefined8 *)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 200) = uVar2;
      *(undefined8 *)(param_1 + 0xc0) = uVar1;
      FUN_10b1d2f58(&uStack_40);
      FUN_10b12157c(param_1 + 0xd0,auStack_a0);
      func_0x000107c3194c(param_1 + 0xe0,auStack_90);
      uVar2 = uStack_70;
      uVar1 = uStack_78;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_38 = *(undefined8 *)(param_1 + 0x100);
      uStack_40 = *(undefined8 *)(param_1 + 0xf8);
      *(undefined8 *)(param_1 + 0x100) = uVar2;
      *(undefined8 *)(param_1 + 0xf8) = uVar1;
      func_0x00010b1d2f7c(&uStack_40);
      FUN_10b12157c(param_1 + 0x108,&uStack_68);
      func_0x000107c3194c(param_1 + 0x118,&uStack_58);
    }
    else {
      func_0x00010b1edebc();
      *(undefined1 *)(param_1 + 0x130) = 1;
    }
    func_0x00010b1d3154(auStack_108);
  }
  *(undefined2 *)(param_1 + 0x160) = 1;
  return;
}



/* Entry: 10b1b9684; end: 10b1b96bf;  */

undefined8 * FUN_10b1b9684(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  FUN_10b1d2e28();
  func_0x00010b1ee138();
  *param_1 = extraout_x8;
  param_1[1] = 0;
  _bzero(param_1 + 2,0xb8);
  *(undefined1 *)(param_1 + 0x19) = 1;
  return param_1;
}



/* Entry: 10b1b96c0; end: 10b1b96e3;  */

undefined8 * FUN_10b1b96c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar2;
  ulong extraout_x9;
  
  func_0x00010b1ee138();
  *param_1 = extraout_x8;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  if (param_1 != param_2) {
    uVar1 = param_1[1];
    if ((uVar1 & 1) != 0) {
      func_0x00010b1ed71c();
      uVar1 = extraout_x8_00;
    }
    uVar2 = param_2[1];
    if ((uVar2 & 1) != 0) {
      func_0x00010b1ee33c();
      uVar1 = extraout_x8_01;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      func_0x00010b24e968(param_1);
    }
    else {
      FUN_10b24e938(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b1b96e4; end: 10b1b9727;  */

void FUN_10b1b96e4(long param_1)

{
  func_0x00010b1219e0(param_1 + 0x168);
  FUN_10b133118(param_1 + 0x150);
  FUN_10b1d3038(param_1 + 0x138);
  FUN_10b1d3194(param_1 + 0x68);
  FUN_10b1d31b4(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b1b9728; end: 10b1b9e93;  */

void FUN_10b1b9728(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar13;
  undefined8 *extraout_x8_02;
  undefined8 uVar14;
  ulong extraout_x8_03;
  undefined8 extraout_x9;
  undefined8 uVar15;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w12;
  int extraout_w12_00;
  long extraout_x12;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long alStack_120 [2];
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  byte bStack_a8;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  func_0x00010b1ede0c();
  *param_2 = FUN_10b1ea96c;
  param_2[1] = FUN_10b1eac00;
  param_2[2] = &PTR_FUN_110cc3740;
  puVar8 = (undefined8 *)0xb0;
  __Znwm();
  puVar12 = puVar8 + 3;
  *puVar12 = 0;
  puVar10 = param_2 + 3;
  *puVar10 = puVar12;
  puVar8[1] = 0;
  puVar20 = param_2 + 0xb;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110cc3760;
  ppuVar1 = (undefined8 **)(param_2 + 0x1e);
  puVar13 = param_2 + 0x25;
  puVar18 = param_2 + 0x2b;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0x3cb0b1bb;
  puVar8[8] = 0;
  puVar8[7] = 0;
  puVar8[10] = 0;
  puVar8[9] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0x32aaaba7;
  puVar8[0xe] = 0;
  puVar8[0xd] = 0;
  puVar8[0x10] = 0;
  puVar8[0xf] = 0;
  puVar8[0x12] = 0;
  puVar8[0x11] = 0;
  puVar8[0x14] = 0;
  puVar8[0x13] = 0;
  puVar8[0x15] = 0;
  param_2[4] = puVar8;
  param_2[5] = puVar12;
  param_2[6] = puVar8;
  do {
    func_0x00010b1eaf98();
  } while (extraout_w11 != 0);
  puVar12 = param_2 + 7;
  *(undefined1 *)puVar12 = 0;
  param_2[2] = &PTR_DAT_110cc36f8;
  *(undefined1 *)(param_2 + 10) = 0;
  puStack_108 = puVar8;
  do {
    func_0x00010b1eaf98();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b1eaf98();
  } while (extraout_w11_01 != 0);
  *param_1 = extraout_x8;
  param_1[1] = puVar8;
  func_0x00010b1eddc4();
  func_0x000107c2ff4c(ppuVar1,2);
  puStack_110 = (undefined8 *)0x0;
  puStack_108 = (undefined8 *)0x0;
  uStack_100 = 0;
  ppuVar9 = ppuVar1;
  if (*(char *)(param_2 + 0x21) == '\0') {
    ppuVar9 = &puStack_110;
  }
  puVar8 = *ppuVar9;
  param_2[0x26] = ppuVar9[1];
  *puVar13 = puVar8;
  param_2[0x27] = ppuVar9[2];
  *ppuVar9 = (undefined8 *)0x0;
  ppuVar9[1] = (undefined8 *)0x0;
  ppuVar9[2] = (undefined8 *)0x0;
  func_0x00010b1ed064();
  func_0x00010b1eddb4();
  func_0x000107c2ff4c(&puStack_110,4);
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  uVar7 = (char)puStack_f8 == '\0';
  ppuVar9 = &puStack_110;
  if ((bool)uVar7) {
    ppuVar9 = &puStack_98;
  }
  puStack_78 = ppuVar9[1];
  puStack_80 = *ppuVar9;
  uStack_70 = ppuVar9[2];
  *ppuVar9 = (undefined8 *)0x0;
  ppuVar9[1] = (undefined8 *)0x0;
  ppuVar9[2] = (undefined8 *)0x0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_98);
  func_0x00010b1ebf8c();
  func_0x00010b1ebbd4(*(undefined1 *)((long)param_2 + 0x13f));
  if (extraout_x8_00 == 0) {
LAB_10b1b9a00:
    *(undefined1 *)(param_2 + 0xb) = 0;
    *(undefined1 *)(param_2 + 0x11) = 0;
    func_0x00010b1ed1ac();
    func_0x00010b1eca50();
    alStack_120[0] = 0;
    alStack_120[1] = 0;
  }
  else {
    func_0x00010b1ebbd4(uStack_70._7_1_);
    puVar4 = uStack_70;
    puVar3 = puStack_78;
    puVar8 = puStack_80;
    if (extraout_x8_01 == 0) goto LAB_10b1b9a00;
    puStack_108 = (undefined8 *)param_2[0x26];
    puStack_110 = (undefined8 *)*puVar13;
    param_2[0x29] = puStack_108;
    param_2[0x28] = puStack_110;
    uStack_100 = param_2[0x27];
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    *puVar13 = 0;
    param_2[0x2c] = puStack_78;
    *puVar18 = puStack_80;
    puStack_80 = (undefined8 *)0x0;
    puStack_78 = (undefined8 *)0x0;
    uStack_70 = (undefined8 *)0x0;
    param_2[0x29] = 0;
    param_2[0x2a] = 0;
    param_2[0x28] = 0;
    puStack_e8 = puVar4;
    puStack_f0 = puVar3;
    puStack_f8 = puVar8;
    param_2[0x2c] = 0;
    param_2[0x2d] = puVar4;
    *puVar18 = 0;
    param_2[0x2d] = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x28);
    param_2[0xc] = puStack_108;
    *puVar20 = puStack_110;
    param_2[0xd] = uStack_100;
    puStack_110 = (undefined8 *)0x0;
    puStack_108 = (undefined8 *)0x0;
    param_2[0xf] = puStack_f0;
    param_2[0xe] = puStack_f8;
    param_2[0x10] = puStack_e8;
    uStack_100 = 0;
    puStack_f8 = (undefined8 *)0x0;
    puStack_f0 = (undefined8 *)0x0;
    puStack_e8 = (undefined8 *)0x0;
    *(undefined1 *)(param_2 + 0x11) = 1;
    func_0x0001052a71ac(&puStack_110);
    func_0x00010b1ed1ac();
    func_0x00010b1eca50();
    func_0x00010b1ecb18();
    func_0x000107c278b8(&puStack_80);
    FUN_10b1b918c(&puStack_110,&puStack_80);
    func_0x00010b1ed1ac();
    if ((bStack_a8 & 1) == 0) {
      alStack_120[0] = 0;
      alStack_120[1] = 0;
    }
    else {
      func_0x000107c316c8();
      param_2[0x13] = &PTR_FUN_110cc3e98;
      param_2[0x12] = FUN_10b1dfef0;
      param_2[0x14] = &puStack_110;
      param_2[0x15] = puVar20;
      FUN_10b1b9e94(alStack_120,param_2 + 0x12);
      func_0x00010b1ecfd8();
      func_0x000107c316d0(&puStack_80);
    }
    FUN_10b1d2bd0(&puStack_110);
  }
  func_0x00010b120f50(puVar20);
  if (alStack_120[0] == 0) {
    func_0x00010b1ebf7c();
    func_0x000107c316c8(puVar20,&UNK_10f731984);
    func_0x00010b1ecb18();
    func_0x000107c278b8(param_2 + 0x22);
    FUN_10b207088(ppuVar1,param_2 + 0x22);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x22);
    ppuVar9 = ppuVar1;
    FUN_10b113ed8();
    if (((ulong)ppuVar9 & 1) == 0) {
      *(undefined1 *)(param_2 + 0x2e) = 0;
      __ZNSt3__115recursive_mutex4lockEv(param_2[0x1e]);
      puVar20 = *ppuVar1;
      if ((*(byte *)(puVar20 + 0xb) & 1) != 0) {
        func_0x00010b1edd7c();
        (*(code *)*param_2)(param_2);
        return;
      }
      puVar13 = (undefined8 *)puVar20[0xd];
      bVar6 = (undefined8 *)puVar20[0xe] <= puVar13;
      if (bVar6) {
        lVar16 = puVar20[0xc];
        lVar19 = (long)puVar13 - lVar16;
        if ((lVar19 >> 3) + 1U >> 0x3d != 0) {
          func_0x00010552fc6c();
LAB_10b1b9d4c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10b1b9d50);
          (*pcVar5)();
        }
        func_0x00010b1eb7c8((long)puVar20[0xe] - lVar16);
        uVar2 = extraout_x9_02;
        if (bVar6) {
          uVar2 = extraout_x8_03;
        }
        if (uVar2 == 0) {
          lVar11 = 0;
        }
        else {
          if (uVar2 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b1b9d4c;
          }
          lVar11 = uVar2 << 3;
          __Znwm();
        }
        puVar13 = (undefined8 *)(lVar11 + lVar19);
        puVar18 = puVar13 + 1;
        *puVar13 = param_2;
        _memcpy(puVar13 + -extraout_x12,lVar16,lVar19);
        puVar20[0xc] = puVar13 + -extraout_x12;
        puVar20[0xd] = puVar18;
        puVar20[0xe] = lVar11 + uVar2 * 8;
        if (lVar16 != 0) {
          func_0x00010b1ebc10();
        }
      }
      else {
        puVar18 = puVar13 + 1;
        *puVar13 = param_2;
      }
      puVar20[0xd] = puVar18;
      func_0x00010b1edd7c();
      return;
    }
    ppuVar9 = ppuVar1;
    FUN_10b113f00();
    puVar18 = *ppuVar9;
    param_2[0x12] = puVar18;
    puVar13 = ppuVar9[1];
    param_2[0x13] = puVar13;
    if (puVar13 != (undefined8 *)0x0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10 != 0);
    }
    func_0x000107c2be14(ppuVar1);
    puVar13 = (undefined8 *)puVar18[1];
    puStack_108 = (undefined8 *)puVar18[2];
    uVar14 = 0;
    puStack_110 = puVar13;
    if (puStack_108 != (undefined8 *)0x0) {
      do {
        func_0x00010b1eb0ac();
      } while (extraout_w12 != 0);
      do {
        func_0x00010b1eb0ac();
        puVar13 = extraout_x8_02;
        uVar14 = extraout_x9;
      } while (extraout_w12_00 != 0);
    }
    param_2[0x19] = &PTR_FUN_110cc3de8;
    param_2[0x18] = FUN_10b1dec48;
    param_2[0x1a] = puVar13;
    param_2[0x1b] = uVar14;
    puStack_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    FUN_10b1b9e94(&puStack_80,param_2 + 0x18);
    func_0x00010b1deb20(puVar12,&puStack_80);
    func_0x00010b125908(&puStack_80);
    func_0x00010b1ecf8c();
    func_0x000107c2bdf4(&puStack_98);
    func_0x00010b1ed074();
    func_0x00010b1ecf84();
    func_0x000107c316d0(puVar20);
  }
  else {
    func_0x00010b1deb20(puVar12,alStack_120);
    func_0x00010b1ebf7c();
  }
  func_0x00010b1ed764();
  if ((bool)uVar7) {
    __ZNSt3__112__get_sp_mutEPKv(puVar10);
    __ZNSt3__18__sp_mut4lockEv();
    puVar20 = (undefined8 *)param_2[3];
    lVar16 = param_2[4];
    param_2[3] = 0;
    param_2[4] = 0;
    __ZNSt3__18__sp_mut6unlockEv(puVar10);
    puStack_110 = puVar20;
    puStack_108 = (undefined8 *)lVar16;
    __ZNSt3__15mutex4lockEv(puVar20 + 9);
    uVar14 = *puVar12;
    if (*(char *)(puVar20 + 2) == '\x01') {
      uVar15 = param_2[8];
      *puVar12 = 0;
      param_2[8] = 0;
      lVar16 = puVar20[1];
      *puVar20 = uVar14;
      puVar20[1] = uVar15;
      puVar13 = puStack_110;
      if (lVar16 != 0) {
        do {
          func_0x00010b1eb104();
        } while (extraout_w11_02 != 0);
        puVar13 = puStack_110;
        if (extraout_x9_00 == 0) {
          func_0x00010b1ecf74();
          __ZNSt3__119__shared_weak_count14__release_weakEv(lVar16);
          puVar13 = puStack_110;
        }
      }
    }
    else {
      *puVar20 = uVar14;
      puVar20[1] = param_2[8];
      *puVar12 = 0;
      param_2[8] = 0;
      *(undefined1 *)(puVar20 + 2) = 1;
      puVar13 = puVar20;
    }
    plVar17 = (long *)puVar13[0x12];
    puVar13[0x12] = 0;
    __ZNSt3__15mutex6unlockEv(puVar20 + 9);
    if (plVar17 == (long *)0x0) {
      __ZNSt3__118condition_variable10notify_allEv(puVar13 + 3);
    }
    else {
      (**(code **)(*plVar17 + 0x10))(plVar17,&puStack_110);
      func_0x00010b1eb140();
    }
    puVar20 = puStack_108;
    if (puStack_108 != (undefined8 *)0x0) {
      do {
        func_0x00010b1eb104();
      } while (extraout_w11_03 != 0);
      if (extraout_x9_01 == 0) {
        func_0x00010b1ecf74();
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar20);
      }
    }
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&puStack_110,puVar12);
    func_0x00010b1ed758();
    FUN_10b1d3acc();
    func_0x00010b1ed06c();
  }
  FUN_10b1d3b98(param_2 + 2);
  func_0x00010b1ebc10();
  return;
}



/* Entry: 10b1b9e94; end: 10b1ba377;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010b1ba01c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10b1b9e94(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  long *plVar11;
  long *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *plVar12;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *plVar13;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x12;
  long *plVar14;
  long *unaff_x19;
  long *plVar15;
  long *unaff_x24;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 auStack_c8 [5];
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_70;
  
  func_0x00010b1eae28();
  uStack_70 = extraout_x8;
  func_0x00010b1ecb18();
  func_0x000107c278b8(auStack_140);
  pcStack_d0 = (code *)*param_3;
  func_0x00010b1ee020(*(undefined8 *)(param_3[1] + 0x10),auStack_c8);
  func_0x00010b1edfec(auStack_128);
  pcStack_a0 = pcStack_d0;
  func_0x00010b1ecf2c();
  if ((bRam00000001137f4168 & 1) == 0) {
    iVar6 = 0x137f4168;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      puVar10 = (undefined8 *)0x68;
      __Znwm();
      func_0x00010b1ec504();
      *puVar10 = extraout_x8_04;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[2] = 0;
      puVar10[1] = 0;
      puVar10[4] = 0;
      puVar10[3] = 0;
      puVar10[6] = 0;
      puVar10[5] = 0;
      puVar10[8] = 0;
      puVar10[7] = 0;
      puVar10[10] = 0;
      puVar10[9] = 0;
      *(undefined4 *)(puVar10 + 0xc) = 0x3f800000;
      func_0x00010b1eba6c(&lRam00000001137f4160);
    }
  }
  lVar2 = lRam00000001137f4160;
  lStack_100 = lRam00000001137f4160;
  uStack_f8 = 1;
  __ZNSt3__15mutex4lockEv(lRam00000001137f4160);
  plVar12 = (long *)(lVar2 + 0x40);
  uStack_110 = 0;
  uStack_108 = 0;
  plVar7 = (long *)(lVar2 + 0x58);
  plStack_f0 = plVar12;
  func_0x000107c278c4(plVar7,auStack_128);
  plVar18 = *(long **)(lVar2 + 0x48);
  plVar8 = plVar7;
  if (plVar18 != (long *)0x0) {
    uVar17 = (long)plVar18 - 1;
    if (((ulong)plVar18 & uVar17) == 0) {
      unaff_x24 = (long *)(uVar17 & (ulong)plVar7);
      in_ZR = true;
      in_NG = false;
    }
    else {
      in_NG = (long)plVar7 - (long)plVar18 < 0;
      in_ZR = plVar7 == plVar18;
      unaff_x24 = plVar7;
      if (plVar18 <= plVar7) {
        uVar1 = 0;
        if (plVar18 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar18;
        }
        unaff_x24 = (long *)((long)plVar7 - uVar1 * (long)plVar18);
      }
    }
    plVar15 = *(long **)(*plVar12 + (long)unaff_x24 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_10b1b9fd8;
          plVar11 = (long *)plVar15[1];
          in_NG = (long)plVar11 - (long)plVar7 < 0;
          in_ZR = plVar11 == plVar7;
          if (!(bool)in_ZR) break;
          plVar8 = plVar15 + 2;
          func_0x000107c278d0(plVar8,auStack_128);
          if (((ulong)plVar8 & 1) != 0) goto LAB_10b1ba220;
        }
        if (((ulong)plVar18 & uVar17) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar17);
        }
        else if (plVar18 <= plVar11) {
          uVar1 = 0;
          if (plVar18 != (long *)0x0) {
            uVar1 = (ulong)plVar11 / (ulong)plVar18;
          }
          plVar11 = (long *)((long)plVar11 - uVar1 * (long)plVar18);
        }
        in_NG = (long)plVar11 - (long)unaff_x24 < 0;
        in_ZR = plVar11 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_10b1b9fd8:
  func_0x00010b1edc98();
  plVar15 = (long *)(lVar2 + 0x50);
  uStack_d8 = 0;
  plVar11 = plVar8 + 2;
  *plVar8 = 0;
  plVar8[1] = (long)plVar7;
  plStack_e8 = plVar8;
  plStack_e0 = plVar15;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar11,auStack_128);
  plVar8[5] = 0;
  plVar8[6] = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_d8 = CONCAT71(uStack_d8._1_7_,1);
  func_0x00010b1ebbc8(*(undefined8 *)(lVar2 + 0x58));
  if ((plVar18 == (long *)0x0) ||
     (func_0x00010b1ebbbc(param_1,*(undefined4 *)(lVar2 + 0x60),(float)plVar18), (bool)in_NG)) {
    bVar4 = (long *)0x2 < plVar18;
    bVar5 = plVar18 == (long *)0x3;
    func_0x00010b1eaeec((long)plVar18 << 1);
    plVar16 = extraout_x8_00;
    if (!bVar4 || bVar5) {
      plVar16 = extraout_x9;
    }
    if ((long)plVar16 - 1U == 0) {
      plVar16 = (long *)0x2;
    }
    else if (((ulong)plVar16 & (long)plVar16 - 1U) != 0) {
      func_0x00010b1edda4();
      plVar16 = plVar11;
    }
    plVar18 = *(long **)(lVar2 + 0x48);
    if (plVar18 < plVar16) {
LAB_10b1ba074:
      if ((ulong)plVar16 >> 0x3d != 0) goto LAB_10b1ba300;
      lVar9 = (long)plVar16 << 3;
      __Znwm(lVar9);
      FUN_10b1debf8(plVar12,lVar9);
      plVar18 = (long *)0x0;
      *(long **)(lVar2 + 0x48) = plVar16;
      while (plVar16 != plVar18) {
        func_0x00010b1ebda4();
        plVar18 = extraout_x9_00;
      }
      plVar18 = plVar16;
      if (*plVar15 != 0) {
        func_0x00010b1ec57c();
        func_0x00010b1ed4a4();
        *(long **)(extraout_x8_01 + (long)extraout_x11 * 8) = plVar15;
        lVar9 = extraout_x8_01;
        uVar17 = extraout_x9_01;
        plVar11 = extraout_x10;
        plVar13 = extraout_x11;
        while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
          plVar14 = (long *)plVar11[1];
          if (((ulong)plVar16 & uVar17) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar17);
          }
          else if (plVar16 <= plVar14) {
            uVar1 = 0;
            if (plVar16 != (long *)0x0) {
              uVar1 = (ulong)plVar14 / (ulong)plVar16;
            }
            plVar14 = (long *)((long)plVar14 - uVar1 * (long)plVar16);
          }
          if (plVar14 != plVar13) {
            if (*(long *)(lVar9 + (long)plVar14 * 8) == 0) {
              func_0x00010b1ebf54();
              lVar9 = extraout_x8_03;
              uVar17 = extraout_x9_03;
              plVar11 = extraout_x12;
              plVar13 = extraout_x11_01;
            }
            else {
              func_0x00010b1ead88();
              lVar9 = extraout_x8_02;
              uVar17 = extraout_x9_02;
              plVar11 = extraout_x10_00;
              plVar13 = extraout_x11_00;
            }
          }
        }
      }
    }
    else if (plVar16 < plVar18) {
      func_0x00010b1ebdb0(param_1,*(undefined4 *)(lVar2 + 0x60));
      if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010b1ead68();
      }
      if (plVar16 <= plVar11) {
        plVar16 = plVar11;
      }
      if (plVar16 < plVar18) {
        if (plVar16 != (long *)0x0) goto LAB_10b1ba074;
        FUN_10b1debf8(plVar12,0);
        *(undefined8 *)(lVar2 + 0x48) = 0;
        plVar18 = (long *)0x0;
      }
      else {
        plVar18 = *(long **)(lVar2 + 0x48);
      }
    }
    if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
      in_ZR = 1;
      unaff_x24 = (long *)((long)plVar18 - 1U & (ulong)plVar7);
    }
    else {
      in_ZR = plVar7 == plVar18;
      unaff_x24 = plVar7;
      if (plVar18 <= plVar7) {
        uVar17 = 0;
        if (plVar18 != (long *)0x0) {
          uVar17 = (ulong)plVar7 / (ulong)plVar18;
        }
        unaff_x24 = (long *)((long)plVar7 - uVar17 * (long)plVar18);
      }
    }
  }
  lVar9 = *plVar12;
  if (*(long *)(lVar9 + (long)unaff_x24 * 8) == 0) {
    *plVar8 = *plVar15;
    *plVar15 = (long)plVar8;
    *(long **)(lVar9 + (long)unaff_x24 * 8) = plVar15;
    if (*plVar8 != 0) {
      plVar12 = *(long **)(*plVar8 + 8);
      if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
        plVar12 = (long *)((ulong)plVar12 & (long)plVar18 - 1U);
        in_ZR = true;
      }
      else {
        in_ZR = plVar12 == plVar18;
        if (plVar18 <= plVar12) {
          uVar17 = 0;
          if (plVar18 != (long *)0x0) {
            uVar17 = (ulong)plVar12 / (ulong)plVar18;
          }
          plVar12 = (long *)((long)plVar12 - uVar17 * (long)plVar18);
        }
      }
      *(long **)(lVar9 + (long)plVar12 * 8) = plVar8;
    }
  }
  else {
    func_0x00010b1ec534();
  }
  plStack_e8 = (long *)0x0;
  *(long *)(lVar2 + 0x58) = *(long *)(lVar2 + 0x58) + 1;
  FUN_10b1dec10(&plStack_e8);
  plVar15 = plVar8;
LAB_10b1ba220:
  FUN_10b1deac8(&uStack_110);
  FUN_10b1deb7c();
  if (*unaff_x19 == 0) {
    func_0x00010b125908();
    (*pcStack_a0)(&pcStack_a0);
    func_0x00010b1debb4(plVar15 + 5,*unaff_x19,unaff_x19[1]);
  }
  func_0x00010b1eceec();
  func_0x00010b1eb338(uStack_98);
  func_0x00010b1ebfd4();
  func_0x00010b1eb688(auStack_c8[0]);
  func_0x00010b1eb738();
  func_0x00010b1eaddc(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1ba300:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10b1ba308);
  (*pcVar3)();
}



/* Entry: 10b1ba378; end: 10b1baba7;  */

undefined8 *
FUN_10b1ba378(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined1 param_7)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [48];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 auStack_118 [3];
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_90 [8];
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [16];
  undefined8 *puStack_68;
  undefined8 uStack_10;
  
  func_0x00010b1ec024();
  func_0x00010b1eaf40();
  uStack_10 = extraout_x8;
  func_0x000107c316c8(auStack_118,&UNK_10f7319aa);
  puVar5 = (undefined8 *)0x710;
  __Znwm();
  plVar10 = puVar5 + 1;
  puVar5[2] = 0;
  *plVar10 = 0;
  puVar7 = puVar5 + 3;
  *puVar7 = &PTR_FUN_110cc3630;
  puVar5[5] = 0;
  puVar5[4] = 0;
  *puVar5 = &PTR_DAT_110cc3e10;
  puVar5[6] = 0x32aaaba7;
  puVar11 = puVar5 + 0xf;
  *puVar11 = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  *(undefined8 *)((long)puVar5 + 0x69) = 0;
  *(undefined8 *)((long)puVar5 + 0x61) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  *(undefined2 *)((long)puVar5 + 0x84) = 1;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  *(undefined4 *)((long)puVar5 + 0x8c) = 0x100;
  *(undefined1 *)(puVar5 + 0x12) = 0;
  *(undefined1 *)(puVar5 + 0x13) = 0;
  *(undefined1 *)(puVar5 + 0x49) = 0;
  *(undefined1 *)(puVar5 + 0x52) = 0;
  *(undefined4 *)(puVar5 + 0x56) = 0;
  *(undefined1 *)(puVar5 + 0x4e) = 0;
  puVar5[0x4b] = 0;
  puVar5[0x4a] = 0;
  puVar5[0x4d] = 0;
  puVar5[0x4c] = 0;
  *(undefined8 *)((long)puVar5 + 0x2a7) = 0;
  puVar5[0x54] = 0;
  puVar5[0x53] = 0;
  puVar5[0x57] = 0x32aaaba7;
  puVar5[0x59] = 0;
  puVar5[0x58] = 0;
  puVar5[0x5b] = 0;
  puVar5[0x5a] = 0;
  puVar5[0x5d] = 0;
  puVar5[0x5c] = 0;
  puVar5[0x5f] = 0;
  puVar5[0x5e] = 0;
  puVar5[0x61] = 0;
  puVar5[0x60] = 0;
  puVar5[0x62] = 0;
  *(undefined4 *)(puVar5 + 99) = 0x3f800000;
  puVar5[100] = 0x32aaaba7;
  puVar5[0x66] = 0;
  puVar5[0x65] = 0;
  puVar5[0x68] = 0;
  puVar5[0x67] = 0;
  puVar5[0x6a] = 0;
  puVar5[0x69] = 0;
  puVar5[0x6c] = 0;
  puVar5[0x6b] = 0;
  puVar5[0x6e] = 0;
  puVar5[0x6d] = 0;
  puVar5[0x6f] = 0x32aaaba7;
  *(undefined1 *)(puVar5 + 0x7c) = 0;
  *(undefined1 *)(puVar5 + 0x7d) = 0;
  *(undefined1 *)(puVar5 + 0x7f) = 0;
  *(undefined1 *)(puVar5 + 0x80) = 0;
  *(undefined1 *)(puVar5 + 0x89) = 0;
  puVar5[0x8a] = 0;
  puVar5[0x71] = 0;
  puVar5[0x70] = 0;
  puVar5[0x73] = 0;
  puVar5[0x72] = 0;
  puVar5[0x75] = 0;
  puVar5[0x74] = 0;
  *(undefined8 *)((long)puVar5 + 0x3b1) = 0;
  *(undefined8 *)((long)puVar5 + 0x3a9) = 0;
  *(undefined1 *)(puVar5 + 0x8b) = 0;
  puVar5[0x8c] = 0x32aaaba7;
  puVar5[0x8e] = 0;
  puVar5[0x8d] = 0;
  puVar5[0x90] = 0;
  puVar5[0x8f] = 0;
  puVar5[0x92] = 0;
  puVar5[0x91] = 0;
  puVar5[0x93] = 0;
  puVar5[0x94] = 0x8000000000000000;
  puVar5[0x95] = FUN_10b1d3228;
  puVar5[0x96] = &PTR_DAT_110873830;
  puVar5[0x9b] = 0;
  *(undefined1 *)(puVar5 + 0x9c) = 0;
  *(undefined1 *)(puVar5 + 0x9d) = 0;
  *(undefined1 *)(puVar5 + 0xa2) = 0;
  *(undefined1 *)(puVar5 + 0xa3) = 0;
  *(undefined1 *)(puVar5 + 0xa4) = 0;
  puVar5[0xa5] = 0;
  *(undefined1 *)(puVar5 + 0xa8) = 0;
  *(undefined1 *)(puVar5 + 0xaf) = 0;
  *(undefined1 *)(puVar5 + 0xbd) = 0;
  *(undefined1 *)(puVar5 + 0xbe) = 0;
  *(undefined1 *)(puVar5 + 0xc9) = 0;
  *(undefined1 *)(puVar5 + 0xa1) = 0;
  puVar5[0xa0] = 0;
  puVar5[0x9f] = 0;
  puVar5[0x9e] = 0;
  *(undefined1 *)(puVar5 + 0xb2) = 0;
  puVar5[0xb1] = 0;
  puVar5[0xb0] = 0;
  *(undefined1 *)((long)puVar5 + 0x654) = 0;
  *(undefined4 *)(puVar5 + 0xca) = 0;
  puVar5[0xcb] = 100;
  puVar5[0xcc] = 0x2760;
  puVar5[0xce] = 0x3f800000;
  puVar5[0xcd] = 0x3f800000;
  *(undefined2 *)(puVar5 + 0xcf) = 0;
  puVar5[0xd0] = 0;
  *(undefined1 *)(puVar5 + 0xd1) = 0;
  puVar5[0xd5] = 0;
  *(undefined1 *)(puVar5 + 0xd6) = 0;
  *(undefined1 *)(puVar5 + 0xdb) = 0;
  puVar5[0xd3] = 0;
  puVar5[0xd2] = 0;
  func_0x000107c3144c();
  func_0x00010b1ebb94();
  puStack_68[2] = 0;
  *puStack_68 = &PTR_DAT_1107ea880;
  puStack_68[1] = 0;
  func_0x00010b1ec4c8();
  func_0x00010b1eb478();
  func_0x00010b1ebe4c();
  func_0x00010b1ed434();
  puVar5[0xdc] = extraout_x9;
  puVar5[0xdd] = extraout_x8_00;
  func_0x00010b1ec4d0();
  func_0x000107c3144c();
  func_0x00010b1ebb94();
  func_0x00010b1ee308();
  func_0x00010b1ec4c8();
  func_0x00010b1eb478();
  func_0x00010b1ebe4c();
  func_0x00010b1ed434();
  puVar5[0xde] = extraout_x9_00;
  puVar5[0xdf] = extraout_x8_01;
  func_0x00010b1ec4d0();
  func_0x000107c3144c();
  func_0x00010b1ebb94();
  func_0x00010b1ee308();
  func_0x00010b1ec4c8();
  func_0x00010b1eb478();
  func_0x00010b1ebe4c();
  func_0x00010b1ed434();
  puVar5[0xe0] = extraout_x9_01;
  puVar5[0xe1] = extraout_x8_02;
  func_0x00010b1ec4d0();
  (**(code **)(**(long **)(puVar5[0xdc] + 0x18) + 0x48))(*(long **)(puVar5[0xdc] + 0x18),0);
  *param_1 = puVar7;
  param_1[1] = puVar5;
  if ((puVar5[5] == 0) || (in_ZR = *(long *)(puVar5[5] + 8) == -1, (bool)in_ZR)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_100 = puVar7;
    puStack_f8 = puVar5;
    func_0x00010b1debb4(puVar5 + 4,puVar7,puVar5);
    func_0x00010b1edbf4();
  }
  *(undefined1 *)(puVar5 + 0xd1) = param_7;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar5 + 0x9e,param_2);
  puStack_190 = puVar7;
  puStack_188 = puVar5;
  do {
    func_0x00010b1eb124();
  } while (extraout_w10 != 0);
  func_0x00010b1ec1fc(auStack_180);
  FUN_10b1d3bec(auStack_168,param_3);
  uStack_130 = param_4[1];
  uStack_138 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b1ded74(auStack_78,&puStack_190);
  FUN_10b1ded74(&puStack_100,auStack_78);
  puVar6 = (undefined8 *)0xf8;
  __Znwm();
  puVar6[2] = 0;
  puVar6[3] = 0x32aaaba7;
  puVar7 = puVar6;
  func_0x00010b1eb2bc();
  func_0x00010b1eb468();
  func_0x00010b1ecb94();
  puVar8 = puVar7 + 0x12;
  *puVar7 = &PTR_SUB_110cc3e60;
  puVar7[1] = 0;
  FUN_10b1ded74(puVar8,&puStack_100);
  puStack_88 = puVar6;
  func_0x00010b1edbac();
  puVar7 = puVar8;
  __ZNSt3__115__thread_structC1Ev();
  puStack_1a0 = puVar8;
  func_0x00010b1ebccc();
  puStack_1a0 = (undefined8 *)0x0;
  *puVar7 = puVar8;
  puVar7[2] = 1;
  puVar7[1] = 0x18;
  puVar7[3] = puVar6;
  puVar9 = auStack_90;
  puStack_80 = puVar7;
  func_0x000107c2844c(puVar9,FUN_10b1dfe68,puVar7);
  if ((int)puVar9 != 0) {
    func_0x00010b1ec49c();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10b1bab74);
    (*pcVar4)();
  }
  puStack_80 = (undefined8 *)0x0;
  FUN_10b1dfec8(&puStack_80);
  func_0x000107c28454(&puStack_1a0);
  __ZNSt3__16thread6detachEv(auStack_90);
  __ZNSt3__16threadD1Ev(auStack_90);
  __ZNSt3__16futureIvEC1EPNS_17__assoc_sub_stateE(&uStack_128,puVar6);
  FUN_10b1dede4(&puStack_88);
  FUN_10b1baba8(&puStack_100);
  FUN_10b1baba8(auStack_78);
  uVar3 = uStack_128;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_100 = (undefined8 *)*puVar11;
  *puVar11 = uVar3;
  __ZNSt3__113shared_futureIvED1Ev(&puStack_100);
  __ZNSt3__113shared_futureIvED1Ev(&uStack_120);
  __ZNSt3__16futureIvED1Ev(&uStack_128);
  FUN_10b1baba8(&puStack_190);
  puVar11 = (undefined8 *)*param_5;
  if (puVar11 == (undefined8 *)0x0) {
    func_0x000107c28310(auStack_78,1);
    puVar7 = puStack_68;
    puStack_68[2] = 0;
    *puStack_68 = &PTR_DAT_11093e760;
    puStack_68[1] = 0;
    func_0x00010b1ec4c8();
    puVar7[3] = &PTR_DAT_11093e7b0;
    puVar7[5] = puStack_f8;
    puVar7[4] = puStack_100;
    puVar7[6] = uStack_f0;
    puStack_100 = (undefined8 *)0x0;
    puStack_f8 = (undefined8 *)0x0;
    uStack_f0 = 0;
    func_0x00010b1ebe4c();
    puVar6 = puStack_68;
    puStack_68 = (undefined8 *)0x0;
    puVar7 = puVar6 + 3;
    func_0x000107c28314(auStack_78);
    puStack_188 = puVar6;
    puStack_1a0 = (undefined8 *)0x0;
    uStack_198 = 0;
    puStack_190 = puVar7;
    if (puVar6 == (undefined8 *)0x0) goto LAB_10b1ba8b8;
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
    puVar7 = puVar11;
    puStack_190 = puVar11;
    puStack_188 = puVar6;
    if (puVar6 == (undefined8 *)0x0) goto LAB_10b1ba8b8;
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_01 != 0);
  }
  do {
    func_0x00010b1eb124();
  } while (extraout_w10_02 != 0);
LAB_10b1ba8b8:
  puStack_f8 = (undefined8 *)puVar5[0xb1];
  puStack_100 = (undefined8 *)puVar5[0xb0];
  puVar5[0xb0] = puVar7;
  puVar5[0xb1] = puVar6;
  func_0x000107c28e38(&puStack_100);
  func_0x000107c28e38(&puStack_190);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x000107c28318(&puStack_1a0);
  }
  func_0x00010b0fe910(puVar5 + 0x4c);
  puVar5 = auStack_118;
  func_0x000107c316d0(puVar5);
  func_0x00010b1eaddc(uStack_10);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1ec77c();
    __ZNSt3__119__shared_weak_countD2Ev();
    func_0x000107c28314(auStack_78);
    func_0x00010b125908(param_1);
    puVar5 = auStack_118;
    func_0x000107c316d0();
    do {
      func_0x00010b1eb994();
    } while ((int)param_6 == 0);
    func_0x00010b1ecfac();
    func_0x00010b12487c(puVar5 + 0xb);
    func_0x0001052a71ac(puVar5 + 5);
    func_0x00010b1eca60();
    func_0x00010b1eb954();
    if (puVar5 != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return puVar11;
  }
  return puVar5;
}



/* Entry: 10b1baba8; end: 10b1babdb;  */

undefined8 FUN_10b1baba8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b12487c(param_1 + 0x58);
  func_0x0001052a71ac(param_1 + 0x28);
  func_0x00010b1eca60();
  func_0x00010b1eb954();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10b1babdc; end: 10b1bac2f;  */

void FUN_10b1babdc(undefined8 *param_1)

{
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b1b9728(auStack_40);
  FUN_10b120d5c(&uStack_30,auStack_40);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010b1ebf7c();
  FUN_10b120e24(auStack_40);
  return;
}



/* Entry: 10b1bac30; end: 10b1bac53;  */

void FUN_10b1bac30(long param_1)

{
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    if (*(long *)(param_1 + 0x60) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__117__assoc_sub_state4waitEv_1103465d8)(*(long *)(param_1 + 0x60));
      return;
    }
  }
  return;
}



/* Entry: 10b1bac54; end: 10b1bad13;  */

void FUN_10b1bac54(undefined1 *param_1)

{
  bool bVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  long lStack_30;
  
  func_0x000107c30194(&lStack_38,&UNK_10f731f0f,0x24,&UNK_10e56486a,0x21);
  if (lStack_38 == lStack_30) {
    *param_1 = 0;
    param_1[0x30] = 0;
  }
  else {
    ppuStack_68 = &PTR_FUN_110cfcfc8;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    pppuVar2 = &ppuStack_68;
    func_0x000107c3034c(pppuVar2,lStack_38,(int)lStack_30 - (int)lStack_38);
    bVar1 = ((ulong)pppuVar2 & 1) == 0;
    if (bVar1) {
      *param_1 = 0;
    }
    else {
      func_0x00010b1eb918();
      FUN_10b1d3c38();
    }
    param_1[0x30] = !bVar1;
    FUN_10b5239d4(&ppuStack_68);
  }
  func_0x000107c27914(&lStack_38);
  return;
}



/* Entry: 10b1bad14; end: 10b1bad2f;  */

void FUN_10b1bad14(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b1eb580();
  *(undefined8 *)(param_1 + 0x10) = unaff_x19;
  return;
}



/* Entry: 10b1bad30; end: 10b1bad3b;  */

undefined8 FUN_10b1bad30(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b24cf88(param_1,0,param_2);
  func_0x00010b24c70c();
  return param_1;
}



/* Entry: 10b1bad3c; end: 10b1bad9b;  */

bool FUN_10b1bad3c(void)

{
  bool bVar1;
  int *in_x3;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  FUN_10b1bad9c(auStack_48);
  if (lStack_38 == 0) {
    bVar1 = false;
  }
  else if ((char)in_x3[1] == '\x01') {
    bVar1 = *(int *)(lStack_38 + 0x1c) == *in_x3;
  }
  else {
    bVar1 = true;
  }
  func_0x00010b1ec1ec();
  return bVar1;
}



/* Entry: 10b1bad9c; end: 10b1baed3;  */

void FUN_10b1bad9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [16];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b1ebd38();
  func_0x00010b1eb674(auStack_58);
  if ((((lStack_48 == 0) || (*(char *)(lStack_48 + 0x40) != '\x01')) ||
      (0 < *(long *)(lStack_48 + 0x38))) || (*(long *)(lStack_48 + 0x28) == 0)) {
    func_0x00010b1ec41c();
  }
  else if ((*(byte *)(param_3 + 0x30) & 1) == 0) {
    func_0x00010b1ecdc8();
    *(undefined8 *)(unaff_x19 + 0x10) = extraout_x9;
    *(undefined8 *)(unaff_x19 + 0x20) = uStack_38;
    *(undefined8 *)(unaff_x19 + 0x18) = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010b1eda54(&lStack_a0);
    uStack_68 = uStack_98;
    lStack_70 = lStack_a0;
    lStack_a0 = 0;
    uStack_98 = 0;
    func_0x00010b121b68(&lStack_a0);
    func_0x00010b1ed824();
    func_0x00010b1ec9dc(&lStack_a0);
    while (lVar1 = lStack_a0, lStack_a0 != 0) {
      func_0x00010b1eda4c(auStack_b8);
      lVar1 = lVar1 + 8;
      func_0x000107c278d0(lVar1,auStack_b8);
      func_0x00010b1ebfd4();
      if ((int)lVar1 != 0) {
        func_0x00010b1ecdc8();
        *(undefined8 *)(unaff_x19 + 0x18) = uStack_40;
        *(long *)(unaff_x19 + 0x10) = lStack_48;
        *(undefined8 *)(unaff_x19 + 0x20) = uStack_38;
        uStack_40 = 0;
        uStack_38 = 0;
        goto LAB_10b1baea4;
      }
      func_0x000107c27d54(&lStack_a0);
    }
    func_0x00010b1ec41c();
LAB_10b1baea4:
    func_0x00010b121a70(&lStack_70);
  }
  func_0x00010b1ecde4();
  return;
}



/* Entry: 10b1baed4; end: 10b1bb367;  */

void FUN_10b1baed4(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong in_x3;
  ulong uVar7;
  long in_x4;
  uint uVar8;
  undefined8 *extraout_x8;
  long unaff_x23;
  undefined4 *puVar9;
  long lVar10;
  uint uVar11;
  ulong uStack_120;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  char cStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  
  uVar7 = in_x3;
  func_0x00010b1ec3fc();
  FUN_10b1be528(&uStack_98);
  if ((bStack_70 == 1) && ((uVar7 >> 0x18 & 1) != 0)) {
    func_0x00010b1ebfc4(&uStack_e0);
    func_0x00010b1ec6ac(&uStack_100);
    FUN_10b1bedb0(&uStack_b8,unaff_x23 + 0x80,&uStack_e0,&uStack_100);
    func_0x00010b1ebf8c();
    func_0x00010b1ec510();
    if ((cStack_a0 == '\x01') && (uStack_b8 != uStack_b0)) {
      func_0x0001072e787c(uStack_b8 + 0x40);
      func_0x00010b1ecbc0(extraout_x8);
      FUN_10b1baed4();
      if (extraout_x8[2] != 0) {
        func_0x00010b1ecbc0();
        FUN_10b1bebec();
      }
      func_0x00010b1edf88();
      goto LAB_10b1bb2c8;
    }
    func_0x00010b1edf88();
    if ((bStack_70 & 1) == 0) goto LAB_10b1bafc8;
LAB_10b1baff8:
    uVar11 = 1;
    if (in_x4 == 0) goto LAB_10b1bb030;
LAB_10b1bb000:
    lVar10 = lStack_88;
    func_0x00010b1eda00();
    if (lVar10 == 0) goto LAB_10b1bb030;
    uVar8 = 0;
    if ((uVar11 & 1) == 0) goto LAB_10b1bb018;
LAB_10b1bb04c:
    FUN_10b1bbfac(&lStack_108);
    lVar6 = lStack_88;
    if (lStack_108 == 0) {
      if ((*(char *)(lStack_88 + 0x40) == '\x01') && ((*(byte *)(lStack_88 + 0x130) & 1) == 0)) {
        FUN_10b1b9684(lStack_88 + 0x68);
      }
      func_0x00010b1edff4();
    }
    else {
      puVar1 = (undefined8 *)(lStack_88 + 0x168);
      uStack_d8 = *(undefined8 *)(lStack_88 + 0x170);
      uStack_e0 = *puVar1;
      *(undefined8 *)(lStack_88 + 0x168) = 0;
      *(undefined8 *)(lStack_88 + 0x170) = 0;
      uStack_f8 = *(undefined8 *)(lStack_88 + 0x158);
      uStack_100 = *(undefined8 *)(lStack_88 + 0x150);
      *(undefined8 *)(lStack_88 + 0x150) = 0;
      *(undefined8 *)(lStack_88 + 0x158) = 0;
      uStack_b8 = uStack_b8 & 0xffffffffffffff00;
      bVar5 = *(char *)(lStack_88 + 0x148) == '\x01';
      if (bVar5) {
        uStack_b8 = *(ulong *)(lStack_88 + 0x138);
        uStack_120 = *(ulong *)(lStack_88 + 0x140);
        *(undefined8 *)(lStack_88 + 0x138) = 0;
        *(undefined8 *)(lStack_88 + 0x140) = 0;
        uStack_b0 = uStack_120;
      }
      uVar3 = *(undefined1 *)(lStack_88 + 0x164);
      uStack_a8 = bVar5;
      FUN_10b1b92e0(lStack_88);
      func_0x00010b121998(puVar1,&uStack_e0);
      func_0x00010b137bf8(lVar6 + 0x150,&uStack_100);
      cVar4 = *(char *)(lVar6 + 0x148);
      if ((bool)cVar4 == bVar5) {
        if (cVar4 != '\0') {
          func_0x00010b1d3014(lVar6 + 0x138,&uStack_b8);
        }
      }
      else if (cVar4 == '\0') {
        *(ulong *)(lVar6 + 0x138) = uStack_b8;
        *(ulong *)(lVar6 + 0x140) = uStack_120;
        uStack_b8 = 0;
        uStack_b0 = 0;
        *(undefined1 *)(lVar6 + 0x148) = 1;
      }
      else {
        FUN_10b1d2fcc(lVar6 + 0x138);
      }
      *(undefined1 *)(lVar6 + 0x164) = uVar3;
      FUN_10b1d3038(&uStack_b8);
      FUN_10b133118(&uStack_100);
      func_0x00010b1219e0(&uStack_e0);
      func_0x00010b1edff4();
LAB_10b1bb18c:
      if (*(long *)(lStack_88 + 0x48) != *(long *)(lStack_88 + 0x50)) {
        if (in_x4 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lStack_88;
          func_0x00010b1eda00();
        }
        FUN_10b1b8c14(&uStack_b8,unaff_x23 + 0x2a0);
        lVar6 = CONCAT71(uStack_a7,uStack_a8);
        func_0x00010b1ebfcc(lVar6);
        puVar2 = *(undefined4 **)(lStack_88 + 0x50);
        for (puVar9 = *(undefined4 **)(lStack_88 + 0x48); puVar9 != puVar2; puVar9 = puVar9 + 0x22)
        {
          FUN_10b1bd4d0(&uStack_e0,*puVar9,puVar9 + 2);
          func_0x000107c27e80(lVar6 + 0x28,&uStack_e0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e0);
        }
        func_0x00010b1ed21c();
      }
    }
  }
  else {
    if ((bStack_70 & 1) != 0) goto LAB_10b1baff8;
LAB_10b1bafc8:
    if ((((*(byte *)(lStack_88 + 0x40) & 1) == 0) && ((in_x3 >> 0x28 & 1) == 0)) &&
       (*(char *)(lStack_88 + 0x162) != '\x01')) goto LAB_10b1baff8;
    uVar11 = (*(byte *)(lStack_88 + 0x130) ^ 1) & (uint)(in_x3 >> 8);
    if (in_x4 != 0) goto LAB_10b1bb000;
LAB_10b1bb030:
    lVar10 = 0;
    uVar8 = 0;
    if ((*(byte *)(lStack_88 + 0x161) & 1) == 0) {
      uVar8 = (uint)(in_x3 >> 0x20) & 1;
    }
    if ((uVar11 & 1) != 0) goto LAB_10b1bb04c;
LAB_10b1bb018:
    if (uVar8 != 0) {
      func_0x00010b1ecbc0();
      FUN_10b1bccc0();
      goto LAB_10b1bb18c;
    }
  }
  if (*(char *)(lStack_88 + 0x40) == '\x01') {
    uVar11 = (uint)(0 < *(long *)(lStack_88 + 0x38));
  }
  else {
    uVar11 = 0;
  }
  if (bStack_70 == 1) {
    if (*(char *)(lStack_88 + 0x160) != '\x01' || (in_x3 & 0x10000) != 0) {
      if ((*(char *)(lStack_88 + 0x160) == '\0') || ((in_x3 >> 8 & 1) == 0)) goto LAB_10b1bb26c;
      FUN_10b1b9684(lStack_88 + 0x68);
      goto LAB_10b1bb298;
    }
  }
  else {
LAB_10b1bb26c:
    if (((in_x3 & 1) != 0) || ((lVar10 == 0 || (*(long *)(lVar10 + 0x30) < 1)))) {
      if ((((uint)in_x3 ^ 1) & uVar11) != 0) {
        lVar10 = *(long *)(lStack_88 + 0x48);
        FUN_10b1bf2b0(lVar10,*(undefined8 *)(lStack_88 + 0x50));
        if (lVar10 == 0) goto LAB_10b1bb2c4;
      }
LAB_10b1bb298:
      *extraout_x8 = uStack_98;
      *(undefined1 *)(extraout_x8 + 1) = uStack_90;
      uStack_98 = 0;
      uStack_90 = 0;
      extraout_x8[2] = lStack_88;
      extraout_x8[4] = uStack_78;
      extraout_x8[3] = uStack_80;
      uStack_80 = 0;
      uStack_78 = 0;
      goto LAB_10b1bb2c8;
    }
  }
LAB_10b1bb2c4:
  func_0x00010b1ec41c();
LAB_10b1bb2c8:
  func_0x00010b1d3e60(&uStack_98);
  return;
}



/* Entry: 10b1bb368; end: 10b1bb3c7;  */

void FUN_10b1bb368(void)

{
  undefined1 in_ZR;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  
  func_0x00010b1ec39c();
  FUN_10b1c1ef4();
  func_0x00010b1ed3e4();
  if ((bool)in_ZR && extraout_x9 != 0) {
    func_0x00010b1ec758();
    func_0x00010b1ec6bc();
    if (extraout_x9_00 != 0) {
      do {
        func_0x00010b1eaf98();
      } while (extraout_w11 != 0);
    }
    func_0x00010b1eba10();
    func_0x00010b1ed348();
    func_0x00010b1eb9bc();
  }
  return;
}



/* Entry: 10b1bb3c8; end: 10b1bb503;  */

void FUN_10b1bb3c8(undefined2 *param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = *param_3;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_3 + 1);
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  lVar3 = param_3[2];
  *(undefined8 *)(param_1 + 0x14) = param_3[3];
  *(long *)(param_1 + 0x10) = lVar3;
  *(undefined8 *)(param_1 + 0x18) = param_3[4];
  param_3[3] = 0;
  param_3[4] = 0;
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x40) & 1) == 0)) {
    *(undefined1 *)param_1 = 1;
  }
  else {
    lVar1 = lVar3 + 0x18;
    FUN_10b193d78();
    switch(*(undefined4 *)(lVar1 + 4)) {
    case 0:
      *(undefined1 *)param_1 = 0;
      break;
    case 1:
    case 3:
      param_4 = param_4 ^ 1;
    case 2:
      *(char *)param_1 = (char)param_4;
      if ((param_5 != 0) && (param_4 != 0)) {
        FUN_10b1bb504(&uStack_80,param_2,lVar3 + 0xc0);
        uStack_48 = uStack_78;
        uStack_50 = uStack_80;
        uStack_80 = 0;
        uStack_78 = 0;
        func_0x00010b121bb0(&uStack_80);
        func_0x00010b1ed824();
        if (extraout_x8 != 0) {
          uVar2 = *(ulong *)(extraout_x8 + 0x30) & 0xfffffffffffffffc;
          func_0x000107c278d0(uVar2,*(ulong *)(param_5 + 0x30) & 0xfffffffffffffffc);
          if ((uVar2 & 1) == 0) {
            *(undefined1 *)param_1 = 0;
          }
        }
        func_0x00010b1219bc(&uStack_50);
      }
    }
  }
  return;
}



/* Entry: 10b1bb504; end: 10b1bb563;  */

void FUN_10b1bb504(void)

{
  undefined1 in_ZR;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  
  func_0x00010b1ec39c();
  FUN_10b1c3338();
  func_0x00010b1ed3e4();
  if ((bool)in_ZR && extraout_x9 != 0) {
    func_0x00010b1ec758();
    func_0x00010b1ec6bc();
    if (extraout_x9_00 != 0) {
      do {
        func_0x00010b1eaf98();
      } while (extraout_w11 != 0);
    }
    func_0x00010b1eba10();
    func_0x00010b1ed348();
    func_0x00010b1eb9bc();
  }
  return;
}



/* Entry: 10b1bb564; end: 10b1bb593;  */

void FUN_10b1bb564(long **param_1,undefined8 param_2,long **param_3,long *param_4,undefined4 param_5
                  )

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  ulong uVar5;
  long **pplVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  long ***ppplVar15;
  long **pplVar16;
  long **pplVar17;
  long *plVar18;
  code *pcVar19;
  char extraout_w8;
  undefined1 extraout_w8_00;
  undefined4 extraout_w8_01;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long lVar20;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long *plVar21;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  long **extraout_x8_08;
  long extraout_x8_09;
  ulong extraout_x8_10;
  long extraout_x8_11;
  undefined4 extraout_w9;
  undefined8 extraout_x9;
  long *plVar22;
  ulong extraout_x9_00;
  ulong extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar23;
  long **pplVar24;
  long lVar25;
  ulong uVar26;
  long **pplVar27;
  long lVar28;
  long *plVar29;
  long *unaff_x25;
  long *plVar30;
  undefined8 uVar31;
  undefined8 in_stack_00000050;
  undefined1 auStack_b00 [32];
  undefined1 auStack_ae0 [32];
  long **pplStack_ac0;
  long **pplStack_ab8;
  long **pplStack_ab0;
  undefined1 uStack_aa8;
  long *plStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined1 auStack_a78 [24];
  undefined1 auStack_a60 [8];
  undefined8 uStack_a58;
  undefined1 auStack_a50 [176];
  char cStack_9a0;
  undefined1 auStack_938 [16];
  undefined1 uStack_928;
  long **pplStack_920;
  long **pplStack_918;
  long **pplStack_910;
  char cStack_908;
  undefined1 uStack_900;
  undefined7 uStack_8ff;
  undefined1 uStack_8f0;
  long lStack_8b0;
  long lStack_8a8;
  long **pplStack_8a0;
  long **pplStack_898;
  long **pplStack_890;
  ulong uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined1 auStack_7c0 [192];
  undefined8 uStack_700;
  undefined1 auStack_6f8 [176];
  undefined1 uStack_648;
  long **pplStack_640;
  long **pplStack_638;
  long **pplStack_630;
  char cStack_628;
  ulong uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 uStack_568;
  byte bStack_4c8;
  ulong uStack_4c0;
  undefined1 auStack_4b8 [176];
  byte bStack_408;
  long ***ppplStack_400;
  undefined1 uStack_3f8;
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  long **pplStack_3c0;
  long **pplStack_3b8;
  long **pplStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  undefined1 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined1 uStack_290;
  undefined1 uStack_288;
  undefined1 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined2 uStack_260;
  undefined1 uStack_25e;
  undefined1 uStack_25d;
  undefined1 uStack_25c;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  long *plStack_208;
  long *plStack_200;
  long **pplStack_1f8;
  undefined1 *puStack_1f0;
  long **pplStack_1e8;
  long **pplStack_1e0;
  long **pplStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  long **pplStack_180;
  undefined1 uStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
  long lStack_158;
  undefined4 uStack_150;
  long *aplStack_148 [2];
  undefined8 uStack_138;
  undefined1 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long **pplStack_108;
  undefined1 uStack_100;
  long *plStack_f8;
  long **pplStack_f0;
  long **pplStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long **pplStack_d0;
  long **pplStack_c8;
  undefined1 auStack_b8 [8];
  char cStack_b0;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(int *)((long)param_3 + 0x1c) == 0) {
    func_0x00010b1ec958();
    *(undefined1 *)(extraout_x8 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(extraout_x8 + 0x1c8,0xb0);
    return;
  }
  uStack_224 = 0;
  func_0x00010b1ec024();
  pplVar17 = param_1;
  pplVar13 = param_3;
  uStack_220 = extraout_x8_00;
  uStack_218 = param_2;
  func_0x00010b1eae84();
  if (*(char *)(pplVar13 + 0x24) == '\x01') {
    pplVar17 = param_3 + 0x10;
    FUN_10b190fc4();
  }
  plStack_110 = (long *)0x0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar25 = 0;
  uStack_100 = 1;
  lVar1 = param_4[1];
  pplStack_108 = pplVar17;
  for (lVar20 = *param_4; lVar20 != lVar1; lVar20 = lVar20 + 0x98) {
    lVar28 = 0;
    plVar18 = *(long **)(lVar20 + 0x58);
    for (unaff_x25 = *(long **)(lVar20 + 0x50); unaff_x25 != plVar18; unaff_x25 = unaff_x25 + 2) {
      lVar12 = *unaff_x25;
      if (lVar12 != 0) {
        func_0x00010b1eba4c();
      }
      lVar28 = lVar12 + lVar28;
    }
    lVar25 = lVar28 + lVar25;
  }
  if (0 < (long)param_1[0xcd] && (long)param_1[0xcd] < lVar25) {
    FUN_10b1c6774(param_1,uStack_218,0,0,lVar25);
  }
  FUN_10b202630(&plStack_e0,*param_4);
  plVar18 = (long *)0x0;
  pplVar17 = param_3 + 3;
  FUN_10b1c589c(aplStack_148,param_1,uStack_218,&plStack_e0);
  uStack_228 = param_5;
  pplStack_1e8 = param_1;
  func_0x00010b121e00(&plStack_e0);
  lVar20 = *param_4;
  if (lStack_128 != 0) {
    lVar20 = lStack_128;
  }
  pplVar13 = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,lVar20);
  plStack_168 = (long *)0x0;
  lStack_170 = 0;
  lStack_158 = 0;
  plStack_160 = (long *)0x0;
  pplStack_1f8 = &plStack_160;
  uStack_150 = 0x3f800000;
  plVar30 = (long *)*param_4;
  plStack_200 = (long *)param_4[1];
  plStack_208 = aplStack_148[0];
  puStack_1f0 = auStack_68;
  ppuStack_210 = &puStack_40;
  for (; pplVar14 = pplStack_1e8, uVar9 = plVar30 == plStack_200, !(bool)uVar9;
      plVar30 = plVar30 + 0x13) {
    uVar8 = plVar30[10] - plVar30[0xb] < 0;
    uVar9 = plVar30[10] == plVar30[0xb];
    if ((bool)uVar9) {
      plVar29 = plStack_208;
      func_0x00010b1ee2fc();
      (*extraout_x8_01)();
      if (plVar29 == (long *)0x0) {
        plVar29 = plStack_208;
        func_0x00010b1ec4bc();
        (*extraout_x8_02)();
        if (((ulong)plVar29 & 1) == 0) goto LAB_10b1bbd9c;
        plVar29 = (long *)0x0;
      }
    }
    else {
      plStack_188 = (long *)0x0;
      pplStack_180 = (long **)0x0;
      uStack_178 = 0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_178 = 1;
      lVar20 = plVar30[0xb] - plVar30[10];
      pplStack_180 = pplVar13;
      if (lVar20 == 0x10) {
        plVar29 = plStack_208;
        FUN_10b1c22a8(plStack_208,plVar30 + 7);
        iVar11 = (int)plVar29;
      }
      else if (plVar30[0xb] == plVar30[10]) {
        iVar11 = 1;
      }
      else {
        plStack_f8 = (long *)0x0;
        pplStack_f0 = (long **)0x0;
        pplStack_e8 = (long **)0x0;
        func_0x000108947890(&plStack_f8,lVar20 >> 4);
        unaff_x25 = (long *)plVar30[0xb];
        for (plVar29 = (long *)plVar30[10]; plVar29 != unaff_x25; plVar29 = plVar29 + 2) {
          plVar22 = (long *)*plVar29;
          if (plVar22 == (long *)0x0) {
            plVar22 = (long *)0x0;
LAB_10b1bb7d0:
            plVar23 = (long *)0x0;
          }
          else {
            func_0x00010b1eb9d4();
            (*extraout_x8_03)();
            plVar23 = (long *)*plVar29;
            if (plVar23 == (long *)0x0) goto LAB_10b1bb7d0;
            func_0x00010b1ebf40();
            (*extraout_x8_04)();
          }
          if (pplStack_f0 < pplStack_e8) {
            *pplStack_f0 = plVar22;
            pplStack_f0[1] = plVar23;
            pplStack_f0 = pplStack_f0 + 2;
          }
          else {
            pplVar17 = &plStack_f8;
            func_0x000108947b44(pplVar17,((long)pplStack_f0 - (long)plStack_f8 >> 4) + 1);
            func_0x000108947998(&plStack_e0,pplVar17,(long)pplStack_f0 - (long)plStack_f8 >> 4,
                                &pplStack_e8);
            *pplStack_d0 = plVar22;
            pplStack_d0[1] = plVar23;
            plVar22 = (long *)((long)plStack_d8 - ((long)pplStack_f0 - (long)plStack_f8));
            pplStack_d0 = pplStack_d0 + 2;
            _memcpy(plVar22);
            pplVar17 = pplStack_e8;
            pplStack_1d8 = pplStack_c8;
            pplStack_1e0 = pplStack_d0;
            pplStack_e8 = pplStack_c8;
            pplStack_f0 = pplStack_d0;
            pplStack_d0 = (long **)plStack_f8;
            pplStack_c8 = pplVar17;
            plStack_e0 = plStack_f8;
            plStack_d8 = plStack_f8;
            plStack_f8 = plVar22;
            func_0x000108947a20(&plStack_e0);
            pplStack_f0 = pplStack_1e0;
          }
        }
        plVar29 = plStack_208;
        (**(code **)(*plStack_208 + 0x38))(plStack_208,&plStack_f8,plVar30 + 7);
        iVar11 = (int)plVar29;
        func_0x00010894593c(&plStack_f8);
      }
      plVar29 = pplStack_1e8[0x47];
      func_0x00010b1eb1fc(&plStack_e0);
      func_0x00010b1ed900();
      func_0x00010b1ed8e8();
      func_0x00010b1ec188(puStack_1f0);
      uVar9 = iVar11 == 0;
      pplVar17 = (long **)(ulong)(byte)uVar9;
      func_0x00010b1ed8d4(ppuStack_210,"success");
      func_0x00010b1eccdc();
      func_0x00010b1eb5b4(plVar29,0x21,&plStack_f8);
      func_0x00010b1ebc94();
      do {
        func_0x00010b1ed8cc();
        func_0x00010b1ec03c();
      } while (!(bool)uVar9);
      if (iVar11 != 0) {
LAB_10b1bbd9c:
        func_0x00010b1ec958(uStack_220);
        *(undefined1 *)(extraout_x8_07 + 0x18) = 0;
        func_0x00010b1ed974();
        goto LAB_10b1bbdac;
      }
      plVar29 = pplStack_1e8[0x47];
      func_0x00010b1eb1fc(&plStack_e0);
      func_0x00010b1ed900();
      func_0x00010b1ed8e8();
      func_0x00010b1ec188(puStack_1f0);
      func_0x00010b120648(&plStack_f8,&plStack_e0,4);
      pplVar17 = &plStack_188;
      func_0x000107c28148();
      FUN_10b1135dc(plVar29,0x23,&plStack_f8);
      func_0x00010b1ebc94();
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
        func_0x00010b1ec838();
      } while (!(bool)uVar9);
      plVar29 = (long *)0x0;
      plVar22 = (long *)plVar30[10];
      plVar23 = (long *)plVar30[0xb];
      while( true ) {
        uVar8 = (long)plVar22 - (long)plVar23 < 0;
        uVar9 = plVar22 == plVar23;
        if ((bool)uVar9) break;
        lVar20 = *plVar22;
        if (lVar20 != 0) {
          func_0x00010b1ebf40();
          (*extraout_x8_05)();
        }
        plVar29 = (long *)(lVar20 + (long)plVar29);
        plVar22 = plVar22 + 2;
      }
      FUN_10b12983c(&plStack_e0,*(undefined4 *)(param_3 + 8));
      func_0x00010b1ed8f4();
      func_0x00010b1ec0b8();
      func_0x00010b1ebee0(&plStack_f8,&plStack_e0);
      func_0x00010b1ee15c();
      FUN_10b114b00();
      func_0x00010b1ebc94();
      do {
        func_0x00010b1ed8cc();
        func_0x00010b1ec03c();
      } while (!(bool)uVar9);
      FUN_10b12983c(&plStack_e0,*(undefined4 *)(param_3 + 8));
      func_0x00010b1ed8f4();
      func_0x00010b1ec0b8();
      func_0x00010b1ebee0(&plStack_f8,&plStack_e0);
      func_0x00010b1ee15c();
      FUN_10b11ef50();
      func_0x00010b1ebc94();
      do {
        func_0x00010b1ed8cc();
        func_0x00010b1ec03c();
      } while (!(bool)uVar9);
    }
    plStack_e0 = plVar29;
    FUN_10b17d8dc(&plStack_d8,plVar30 + 0xd);
    plVar22 = plVar30;
    FUN_10b1e50cc();
    plVar29 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      uVar26 = (long)plStack_168 - 1;
      if (((ulong)plStack_168 & uVar26) == 0) {
        unaff_x25 = (long *)(uVar26 & (ulong)plVar22);
        uVar8 = false;
      }
      else {
        uVar8 = (long)plVar22 - (long)plStack_168 < 0;
        unaff_x25 = plVar22;
        if (plStack_168 <= plVar22) {
          uVar5 = 0;
          if (plStack_168 != (long *)0x0) {
            uVar5 = (ulong)plVar22 / (ulong)plStack_168;
          }
          unaff_x25 = (long *)((long)plVar22 - uVar5 * (long)plStack_168);
        }
      }
      plVar23 = *(long **)(lStack_170 + (long)unaff_x25 * 8);
      if (plVar23 != (long *)0x0) {
        do {
          while( true ) {
            plVar23 = (long *)*plVar23;
            if (plVar23 == (long *)0x0) goto LAB_10b1bbaf8;
            plVar21 = (long *)plVar23[1];
            uVar8 = (long)plVar21 - (long)plVar22 < 0;
            if (plVar21 != plVar22) break;
            plVar21 = plVar23 + 9;
            func_0x000107c278d0(plVar21,plVar30 + 7);
            if (((ulong)plVar21 & 1) != 0) goto LAB_10b1bbc18;
          }
          if (((ulong)plVar29 & uVar26) == 0) {
            plVar21 = (long *)((ulong)plVar21 & uVar26);
          }
          else if (plVar29 <= plVar21) {
            uVar5 = 0;
            if (plVar29 != (long *)0x0) {
              uVar5 = (ulong)plVar21 / (ulong)plVar29;
            }
            plVar21 = (long *)((long)plVar21 - uVar5 * (long)plVar29);
          }
          uVar8 = (long)plVar21 - (long)unaff_x25 < 0;
        } while (plVar21 == unaff_x25);
      }
    }
LAB_10b1bbaf8:
    plVar23 = (long *)0x98;
    __Znwm();
    pplStack_f0 = pplStack_1f8;
    pplStack_e8 = (long **)0x0;
    *plVar23 = 0;
    plVar23[1] = (long)plVar22;
    plStack_f8 = plVar23;
    FUN_10b17d5c4(plVar23 + 2,plVar30);
    plVar23[0xc] = 0;
    *(undefined1 *)(plVar23 + 0xd) = 0;
    *(undefined1 *)(plVar23 + 0x12) = 0;
    pplStack_e8 = (long **)CONCAT71(pplStack_e8._1_7_,1);
    func_0x00010b1ebbc8(lStack_158);
    if ((plVar29 == (long *)0x0) || (func_0x00010b1ebbbc(), (bool)uVar8)) {
      func_0x00010b1ee148();
      bVar7 = (long *)0x2 < plVar29;
      bVar10 = plVar29 == (long *)0x3;
      func_0x00010b1eaeec();
      uVar31 = extraout_x8_06;
      if (!bVar7 || bVar10) {
        uVar31 = extraout_x9;
      }
      FUN_10b1e50f0(&lStack_170,uVar31);
      plVar29 = plStack_168;
      if (((ulong)plStack_168 & (long)plStack_168 - 1U) == 0) {
        unaff_x25 = (long *)((long)plStack_168 - 1U & (ulong)plVar22);
      }
      else {
        unaff_x25 = plVar22;
        if (plStack_168 <= plVar22) {
          uVar26 = 0;
          if (plStack_168 != (long *)0x0) {
            uVar26 = (ulong)plVar22 / (ulong)plStack_168;
          }
          unaff_x25 = (long *)((long)plVar22 - uVar26 * (long)plStack_168);
        }
      }
    }
    plVar22 = *(long **)(lStack_170 + (long)unaff_x25 * 8);
    if (plVar22 == (long *)0x0) {
      *plVar23 = (long)plStack_160;
      *(long ***)(lStack_170 + (long)unaff_x25 * 8) = pplStack_1f8;
      plStack_160 = plVar23;
      if (*plVar23 != 0) {
        plVar22 = *(long **)(*plVar23 + 8);
        if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
          plVar22 = (long *)((ulong)plVar22 & (long)plVar29 - 1U);
        }
        else if (plVar29 <= plVar22) {
          uVar26 = 0;
          if (plVar29 != (long *)0x0) {
            uVar26 = (ulong)plVar22 / (ulong)plVar29;
          }
          plVar22 = (long *)((long)plVar22 - uVar26 * (long)plVar29);
        }
        *(long **)(lStack_170 + (long)plVar22 * 8) = plVar23;
      }
    }
    else {
      *plVar23 = *plVar22;
      *plVar22 = (long)plVar23;
    }
    plStack_f8 = (long *)0x0;
    lStack_158 = lStack_158 + 1;
    FUN_10b1e525c(&plStack_f8);
LAB_10b1bbc18:
    plVar23[0xc] = (long)plStack_e0;
    cVar4 = (char)plVar23[0x12];
    if (cVar4 == cStack_b0) {
      if (cVar4 != '\0') {
        FUN_10b1c3524(plVar23 + 0xd,&plStack_d8);
      }
    }
    else if (cVar4 == '\0') {
      FUN_10b1d320c(plVar23 + 0xd,&plStack_d8);
      *(undefined1 *)(plVar23 + 0x12) = 1;
    }
    else {
      FUN_10b1968d4(plVar23 + 0xd);
    }
    pplVar13 = &plStack_d8;
    FUN_10b17d950();
  }
  uVar2 = *(undefined4 *)(param_3 + 8);
  uVar3 = *(uint *)((long)param_3 + 0x1c);
  uStack_1b0 = uStack_138;
  uStack_1a8 = uStack_130;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_198 = uStack_120;
  lStack_1a0 = lStack_128;
  uStack_190 = uStack_118;
  uStack_120 = 0;
  uStack_118 = 0;
  plVar18 = &lStack_170;
  FUN_10b1c59f4(uStack_220,pplStack_1e8,uStack_218,param_3,&uStack_1b0,plVar18,uStack_224,uStack_228
               );
  func_0x00010b1ebfb4();
  plVar30 = pplVar14[0x47];
  func_0x00010b1eb1fc(&plStack_e0);
  FUN_10b12983c(auStack_b8,uVar2);
  param_3 = &plStack_e0;
  func_0x00010b1ee0b8(auStack_90);
  func_0x00010b1ec188(auStack_68);
  func_0x000107c278b8(&uStack_1c8,(&PTR_s_Unknown_110cc4b28)[uVar3]);
  puStack_40 = &DAT_10f6389e8;
  uStack_38 = 4;
  uStack_28 = uStack_1c0;
  uStack_30 = uStack_1c8;
  uStack_20 = uStack_1b8;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  func_0x00010b1eccdc();
  pplVar17 = &plStack_110;
  func_0x000107c28148();
  FUN_10b1135dc(plVar30,0xa0,&plStack_f8);
  func_0x00010b1ebc94();
  do {
    func_0x00010b1ecb08();
    func_0x00010b1ec838();
  } while (!(bool)uVar9);
  func_0x00010b1edf90();
LAB_10b1bbdac:
  func_0x00010b1e5290(&lStack_170);
  func_0x00010b1d7410(aplStack_148);
  func_0x00010b1eadc4();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b1ebe10();
  } while (!(bool)uVar9);
  func_0x00010b1edf90();
  func_0x00010b121af0(uStack_220);
  func_0x00010b1e5290(&lStack_170);
  pplVar13 = aplStack_148;
  func_0x00010b1d7410();
  func_0x00010b1eb598();
  pcVar19 = FUN_10b1bbfac;
  func_0x00010b1ec024();
  pplStack_1e0 = (long **)&stack0x00000050;
  pplStack_1d8 = (long **)pcVar19;
  func_0x00010b1ee598();
  func_0x00010b1eae84();
  if (((uint)plVar18 >> 0x18 & 1) == 0) {
LAB_10b1bc050:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a78,pplVar17);
  }
  else {
    func_0x00010b1ebfc4(auStack_a60);
    func_0x000107c27f70(&uStack_4c0,pplVar17);
    FUN_10b1bedb0(&pplStack_3c0,param_3 + 0x10,auStack_a60,&uStack_4c0);
    func_0x000107c279a4(&uStack_4c0);
    func_0x00010b1edbfc();
    if (((char)uStack_3a8 != '\x01') || (pplStack_3c0 == pplStack_3b8)) {
      func_0x00010b1ee028();
      goto LAB_10b1bc050;
    }
    pplVar14 = pplStack_3c0 + 8;
    func_0x0001072e787c(pplVar14);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a78,pplVar14);
    func_0x00010b1ee028();
  }
  uStack_a90 = 0;
  uStack_a88 = 0;
  uStack_a80 = 0;
  plStack_a98 = (long *)0x0;
  if (((ulong)plVar18 & 0x10000000100) == 0x100) {
    func_0x00010b1ebfc4(&uStack_700);
    func_0x000107c27f70(auStack_7c0,auStack_a78);
    uStack_900 = 0;
    uStack_8f0 = 0;
    func_0x00010bccbc98(&uStack_4c0,param_3 + 0x10,&UNK_10f73837d,0x32);
    pplVar14 = *(long ***)(uStack_4c0 + 8);
    pplStack_918 = *(long ***)(uStack_4c0 + 0x10);
    pplStack_920 = pplVar14;
    if (pplStack_918 != (long **)0x0) {
      do {
        func_0x00010b1eaf98();
        pplVar14 = extraout_x8_08;
      } while (extraout_w11 != 0);
    }
    FUN_10b1fae1c(auStack_a60,pplVar14[2],&uStack_700,auStack_7c0);
    FUN_10b1d3ecc(&uStack_880,auStack_a60);
    uStack_578 = uStack_878;
    uStack_580 = uStack_880;
    uStack_570 = uStack_870;
    uStack_870 = 0;
    uStack_878 = 0;
    uStack_880 = 0;
    uStack_568 = 1;
    FUN_10b1d8ae4(&uStack_880);
    FUN_10b1d4718(auStack_a60);
    FUN_10b1b7824(&pplStack_920);
    func_0x00010bccbe4c(&uStack_4c0);
    func_0x00010bccbdb4(&uStack_4c0);
    FUN_10b1d4780(&pplStack_3c0,&uStack_580);
    func_0x00010b1ed248();
    if ((int)uStack_360 == 1) {
      func_0x00010b1d47e4(&pplStack_3c0);
      uStack_580 = uStack_580 & 0xffffffffffffff00;
      uStack_568 = 0;
      if ((int)uStack_360 != 1) goto LAB_10b1bc238;
      FUN_10b1d481c(&pplStack_640,&uStack_580);
    }
    else {
      uStack_580 = uStack_580 & 0xffffffffffffff00;
LAB_10b1bc238:
      uStack_568 = 0;
      ppplVar15 = &pplStack_3c0;
      func_0x00010b1d4800();
      pplStack_640 = (long **)((ulong)pplStack_640 & 0xffffffffffffff00);
      cStack_628 = '\0';
      if (*(char *)(ppplVar15 + 3) == '\x01') {
        pplStack_638 = ppplVar15[1];
        pplStack_640 = *ppplVar15;
        pplStack_630 = ppplVar15[2];
        func_0x00010b1eb5fc();
        cStack_628 = extraout_w8;
      }
    }
    func_0x00010b1ed248();
    func_0x00010b1ebfa4(&pplStack_3c0);
    FUN_10b1b78d0(&uStack_900);
    func_0x000107c279a4(auStack_7c0);
    func_0x000107c279a4(&uStack_700);
    uVar9 = cStack_628 == '\x01';
    if ((bool)uVar9) {
      if (pplStack_640 == pplStack_638) {
        plVar30 = (long *)0x0;
      }
      else {
        FUN_10b1bcb0c(&pplStack_3c0);
        pplVar14 = pplStack_3c0;
        pplStack_3c0 = (long **)0x0;
        FUN_10b1de9ec(&plStack_a98,pplVar14);
        FUN_10b1de9cc(&pplStack_3c0);
        plVar30 = plStack_a98;
        if (plStack_a98[0x1c] == plStack_a98[0x1d]) {
          plVar29 = param_3[0x47];
          func_0x00010b1ebd14();
          func_0x00010b1eb884(&pplStack_3c0);
          func_0x00010b1eb654(&uStack_580,&pplStack_3c0);
          func_0x00010b1eb040(plVar29);
          FUN_10b120998(&uStack_580);
          func_0x00010b1eb5ac(&pplStack_3c0);
        }
      }
      func_0x00010b1edfb0();
joined_r0x00010b1bc738:
      if (plVar30 == (long *)0x0) goto LAB_10b1bc73c;
      uVar9 = (long *)plVar30[0xc] == param_3[0xd0];
      *(bool *)((long)plVar30 + 0x163) = !(bool)uVar9 && (long)param_3[0xd0] <= plVar30[0xc];
LAB_10b1bc7c8:
      if (((ulong)plVar18 >> 0x20 & 1) != 0) {
        func_0x00010b1ecbc0();
        FUN_10b1bccc0();
        plVar30 = plStack_a98;
      }
      plStack_a98 = (long *)0x0;
      *pplVar13 = plVar30;
    }
    else {
      *pplVar13 = (long *)0x0;
      func_0x00010b1edfb0();
    }
  }
  else {
    if (((ulong)plVar18 >> 0x28 & 1) != 0) {
LAB_10b1bc73c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&pplStack_3c0,pplVar17);
      uStack_25e = ((ulong)plVar18 & 0x10000000000) == 0;
      uStack_3a8 = (long **)((ulong)uStack_3a8 & 0xffffffffffffff00);
      uStack_380 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      uStack_278 = 0;
      uStack_370 = 0;
      uStack_378 = 0;
      uStack_360 = 0;
      uStack_368 = 0;
      uStack_358 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_260 = 0;
      uStack_25d = 0;
      uStack_25c = 0;
      uStack_250 = 0;
      uStack_258 = 0;
      func_0x00010b1edfcc();
      func_0x00010b1ed108();
      FUN_10b1de9cc(&pplStack_920);
      func_0x00010b1ed2d4();
      plVar30 = plStack_a98;
      uVar9 = ((ulong)plVar18 & 0x10000000100) == 0x100;
      if ((bool)uVar9) {
        FUN_10b1b9684(plStack_a98 + 0xd);
      }
      goto LAB_10b1bc7c8;
    }
    func_0x00010b1ebfc4(auStack_ae0);
    func_0x000107c27f70(auStack_b00,auStack_a78);
    auStack_938[0] = 0;
    uStack_928 = 0;
    func_0x00010bccbc98(&uStack_900,param_3 + 0x10,&UNK_10f7383b0,0x36);
    lVar20 = *(long *)(CONCAT71(uStack_8ff,uStack_900) + 8);
    lStack_8a8 = *(long *)(CONCAT71(uStack_8ff,uStack_900) + 0x10);
    lStack_8b0 = lVar20;
    if (lStack_8a8 != 0) {
      do {
        func_0x00010b1eaf98();
        lVar20 = extraout_x8_09;
      } while (extraout_w11_00 != 0);
    }
    FUN_10b1fae80(auStack_a60,*(undefined8 *)(lVar20 + 0x10),auStack_ae0,auStack_b00);
    uStack_700 = 0;
    auStack_6f8[0] = 0;
    uStack_648 = 0;
    if (cStack_9a0 == '\0') {
      uVar31 = 0;
    }
    else {
      FUN_10b1d4b50(auStack_6f8,auStack_a50);
      FUN_10b1d4bc8(auStack_a50);
      uVar31 = uStack_700;
    }
    uStack_700 = uStack_a58;
    uStack_a58 = uVar31;
    FUN_10b1d4adc(&pplStack_640,&uStack_700);
    _bzero(&uStack_880,0xc0);
    FUN_10b1d4adc(auStack_7c0,&uStack_880);
    pplStack_890 = (long **)0x0;
    pplStack_8a0 = (long **)0x0;
    pplStack_898 = (long **)0x0;
    FUN_10b1d4dec(&uStack_4c0,&pplStack_640);
    FUN_10b1d4dec(&uStack_580,auStack_7c0);
    ppplStack_400 = &pplStack_8a0;
    uStack_3f8 = 0;
    pplVar14 = pplVar13;
    while ((((bStack_408 & 1) != 0 || ((bStack_4c8 & 1) != 0)) && (uStack_4c0 != uStack_580))) {
      if ((bStack_408 & 1) == 0) {
        uVar31 = *(undefined8 *)(uStack_4c0 + 8);
        func_0x00010b1eb9a4(auStack_3f0);
        func_0x00010b1eb224(auStack_3d8);
        func_0x00010b1eb99c(uVar31);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f0);
      }
      if (pplStack_898 < pplStack_890) {
        FUN_10b1d4b6c(pplStack_898,auStack_4b8);
        pplVar14 = pplStack_898 + 0x16;
      }
      else {
        lVar20 = (long)pplStack_898 - (long)pplStack_8a0;
        if (0x1745d1745d1745d < lVar20 / 0xb0 + 1U) {
          FUN_10b1d4c38();
          goto LAB_10b1bc83c;
        }
        func_0x00010b1eb414(((long)pplStack_890 - (long)pplStack_8a0) / 0xb0);
        uVar26 = extraout_x9_00;
        if (0xba2e8ba2e8ba2d < extraout_x8_10) {
          uVar26 = 0x1745d1745d1745d;
        }
        if (uVar26 == 0) {
          lVar25 = 0;
        }
        else {
          if (0x1745d1745d1745d < uVar26) {
            func_0x000104bd35f4();
            goto LAB_10b1bc83c;
          }
          lVar25 = uVar26 * 0xb0;
          __Znwm();
        }
        lVar20 = lVar25 + lVar20;
        FUN_10b1d4b6c(lVar20,auStack_4b8);
        pplVar6 = pplStack_898;
        pplVar24 = pplStack_8a0;
        pplVar27 = (long **)(lVar20 + (((long)pplStack_898 - (long)pplStack_8a0) / -0xb0) * 0xb0);
        pplVar16 = pplVar27;
        for (pplVar14 = pplStack_8a0; pplVar14 != pplVar6; pplVar14 = pplVar14 + 0x16) {
          FUN_10b1d4b6c(pplVar16,pplVar14);
          pplVar16 = pplVar16 + 0x16;
        }
        for (; pplVar24 != pplVar6; pplVar24 = pplVar24 + 0x16) {
          func_0x00010b1d4c18(pplVar24);
        }
        pplVar14 = (long **)(lVar20 + 0xb0);
        pplStack_890 = (long **)(lVar25 + uVar26 * 0xb0);
        bVar10 = pplStack_8a0 != (long **)0x0;
        pplStack_8a0 = pplVar27;
        if (bVar10) {
          pplStack_898 = pplVar14;
          __ZdlPv();
        }
      }
      pplStack_898 = pplVar14;
      FUN_10b1d4c44(&uStack_4c0);
    }
    uStack_3f8 = 1;
    FUN_10b1d4d80(&ppplStack_400);
    func_0x00010b1ebbf8(&uStack_580);
    FUN_10b1d4e70(auStack_4b8);
    func_0x00010b1ebbf8(auStack_7c0);
    func_0x00010b1ebbf8(&uStack_880);
    func_0x00010b1ebbf8(&pplStack_640);
    func_0x00010b1ebbf8(&uStack_700);
    pplStack_918 = pplStack_898;
    pplStack_920 = pplStack_8a0;
    pplStack_910 = pplStack_890;
    pplStack_8a0 = (long **)0x0;
    pplStack_898 = (long **)0x0;
    pplStack_890 = (long **)0x0;
    cStack_908 = '\x01';
    FUN_10b1d4e90(&pplStack_8a0);
    FUN_10b1d4eb4(auStack_a60);
    FUN_10b1b7824(&lStack_8b0);
    func_0x00010bccbe4c(&uStack_900);
    func_0x00010bccbdb4(&uStack_900);
    pplStack_3b8 = (long **)((ulong)pplStack_3b8 & 0xffffffffffffff00);
    uStack_3a0 = uStack_3a0 & 0xffffffffffffff00;
    if (cStack_908 == '\x01') {
      pplStack_3b0 = pplStack_918;
      pplStack_3b8 = pplStack_920;
      uStack_3a8 = pplStack_910;
      func_0x00010b1ee4d0();
      uStack_3a0 = CONCAT71(uStack_3a0._1_7_,extraout_w8_00);
    }
    uStack_360 = (ulong)uStack_360._4_4_ << 0x20;
    func_0x00010b1ed258();
    pplStack_920 = (long **)((ulong)pplStack_920 & 0xffffffffffffff00);
    cStack_908 = 0;
    if ((int)uStack_360 == 0) {
      func_0x00010b1ee4c4();
      pplVar16 = pplStack_3b0;
      uVar9 = (char)uStack_3a0 == '\x01';
      if ((bool)uVar9) {
        pplStack_ab8 = pplStack_3b0;
        pplStack_ac0 = pplStack_3b8;
        pplStack_ab0 = uStack_3a8;
        uStack_3a8 = (long **)0x0;
        pplStack_3b8 = (long **)0x0;
        pplStack_3b0 = (long **)0x0;
        bVar10 = true;
        uStack_aa8 = 1;
        pplVar14 = pplVar16;
      }
      else {
        bVar10 = false;
      }
    }
    else {
      uVar9 = (int)uStack_360 == 1;
      if (!(bool)uVar9) goto LAB_10b1bc838;
      bVar10 = false;
      func_0x00010b1ee4c4();
    }
    func_0x00010b1ed258();
    func_0x00010b1edf7c();
    FUN_10b1b78d0(auStack_938);
    func_0x00010b1ec510();
    func_0x00010b1eda44();
    pplVar16 = pplStack_ac0;
    if (bVar10) {
      if (pplStack_ac0 != pplVar14) {
        pplVar14 = pplStack_ac0 + 4;
        func_0x0001072e787c(pplVar14);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&pplStack_3c0,pplVar14);
        func_0x00010b1eb818();
        uStack_3a8 = (long **)CONCAT44(extraout_w9,extraout_w8_01);
        uStack_380 = 1;
        uStack_378 = 0;
        uStack_370 = 0;
        uStack_3a0 = extraout_x10;
        func_0x00010b1ec6d8(*(undefined1 *)(pplVar16 + 0x11));
        uStack_368 = 0;
        uStack_358 = 0;
        uStack_290 = 0;
        uStack_288 = 0;
        uStack_278 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_260 = 0;
        uStack_25e = 1;
        uStack_25d = 0;
        uStack_25c = 0;
        uStack_250 = 0;
        uStack_258 = 0;
        uStack_360 = extraout_x8_11;
        func_0x00010b1edfcc();
        func_0x00010b1ed2d4();
        func_0x00010b1ed108();
        FUN_10b1de9cc(&pplStack_920);
      }
      func_0x00010b1edf98();
      plVar30 = plStack_a98;
      goto joined_r0x00010b1bc738;
    }
    *pplVar13 = (long *)0x0;
    func_0x00010b1edf98();
  }
  FUN_10b1de9cc(&plStack_a98);
  FUN_10b1d4f78(&uStack_a90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a78);
  func_0x00010b1eadc4();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1bc838:
  func_0x00010563ab98();
LAB_10b1bc83c:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10b1bc840);
  (*pcVar19)();
}



/* Entry: 10b1bb594; end: 10b1bbfab;  */

void FUN_10b1bb594(long **param_1,undefined8 param_2,long **param_3,long *param_4,undefined4 param_5
                  ,undefined4 param_6)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  ulong uVar5;
  long **pplVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  long ***ppplVar15;
  long **pplVar16;
  long **pplVar17;
  long *plVar18;
  code *pcVar19;
  char extraout_w8;
  undefined1 extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined8 extraout_x8;
  long lVar20;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long *plVar21;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  long **extraout_x8_07;
  long extraout_x8_08;
  ulong extraout_x8_09;
  long extraout_x8_10;
  undefined4 extraout_w9;
  undefined8 extraout_x9;
  long *plVar22;
  ulong extraout_x9_00;
  ulong extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar23;
  long **pplVar24;
  long lVar25;
  ulong uVar26;
  long **pplVar27;
  long lVar28;
  long *plVar29;
  long *unaff_x25;
  long *plVar30;
  undefined8 uVar31;
  undefined8 in_stack_00000050;
  undefined1 auStack_b00 [32];
  undefined1 auStack_ae0 [32];
  long **pplStack_ac0;
  long **pplStack_ab8;
  long **pplStack_ab0;
  undefined1 uStack_aa8;
  long *plStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined1 auStack_a78 [24];
  undefined1 auStack_a60 [8];
  undefined8 uStack_a58;
  undefined1 auStack_a50 [176];
  char cStack_9a0;
  undefined1 auStack_938 [16];
  undefined1 uStack_928;
  long **pplStack_920;
  long **pplStack_918;
  long **pplStack_910;
  char cStack_908;
  undefined1 uStack_900;
  undefined7 uStack_8ff;
  undefined1 uStack_8f0;
  long lStack_8b0;
  long lStack_8a8;
  long **pplStack_8a0;
  long **pplStack_898;
  long **pplStack_890;
  ulong uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined1 auStack_7c0 [192];
  undefined8 uStack_700;
  undefined1 auStack_6f8 [176];
  undefined1 uStack_648;
  long **pplStack_640;
  long **pplStack_638;
  long **pplStack_630;
  char cStack_628;
  ulong uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 uStack_568;
  byte bStack_4c8;
  ulong uStack_4c0;
  undefined1 auStack_4b8 [176];
  byte bStack_408;
  long ***ppplStack_400;
  undefined1 uStack_3f8;
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  long **pplStack_3c0;
  long **pplStack_3b8;
  long **pplStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  undefined1 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined1 uStack_290;
  undefined1 uStack_288;
  undefined1 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined2 uStack_260;
  undefined1 uStack_25e;
  undefined1 uStack_25d;
  undefined1 uStack_25c;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  long *plStack_208;
  long *plStack_200;
  long **pplStack_1f8;
  undefined1 *puStack_1f0;
  long **pplStack_1e8;
  long **pplStack_1e0;
  long **pplStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  long **pplStack_180;
  undefined1 uStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
  long lStack_158;
  undefined4 uStack_150;
  long *aplStack_148 [2];
  undefined8 uStack_138;
  undefined1 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long **pplStack_108;
  undefined1 uStack_100;
  long *plStack_f8;
  long **pplStack_f0;
  long **pplStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long **pplStack_d0;
  long **pplStack_c8;
  undefined1 auStack_b8 [8];
  char cStack_b0;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_224 = param_5;
  func_0x00010b1ec024();
  pplVar17 = param_1;
  pplVar13 = param_3;
  uStack_220 = extraout_x8;
  uStack_218 = param_2;
  func_0x00010b1eae84();
  if (*(char *)(pplVar13 + 0x24) == '\x01') {
    pplVar17 = param_3 + 0x10;
    FUN_10b190fc4();
  }
  plStack_110 = (long *)0x0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar25 = 0;
  uStack_100 = 1;
  lVar1 = param_4[1];
  pplStack_108 = pplVar17;
  for (lVar20 = *param_4; lVar20 != lVar1; lVar20 = lVar20 + 0x98) {
    lVar28 = 0;
    plVar18 = *(long **)(lVar20 + 0x58);
    for (unaff_x25 = *(long **)(lVar20 + 0x50); unaff_x25 != plVar18; unaff_x25 = unaff_x25 + 2) {
      lVar12 = *unaff_x25;
      if (lVar12 != 0) {
        func_0x00010b1eba4c();
      }
      lVar28 = lVar12 + lVar28;
    }
    lVar25 = lVar28 + lVar25;
  }
  if (0 < (long)param_1[0xcd] && (long)param_1[0xcd] < lVar25) {
    FUN_10b1c6774(param_1,uStack_218,0,0,lVar25);
  }
  FUN_10b202630(&plStack_e0,*param_4);
  plVar18 = (long *)0x0;
  pplVar17 = param_3 + 3;
  FUN_10b1c589c(aplStack_148,param_1,uStack_218,&plStack_e0);
  uStack_228 = param_6;
  pplStack_1e8 = param_1;
  func_0x00010b121e00(&plStack_e0);
  lVar20 = *param_4;
  if (lStack_128 != 0) {
    lVar20 = lStack_128;
  }
  pplVar13 = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,lVar20);
  plStack_168 = (long *)0x0;
  lStack_170 = 0;
  lStack_158 = 0;
  plStack_160 = (long *)0x0;
  pplStack_1f8 = &plStack_160;
  uStack_150 = 0x3f800000;
  plVar30 = (long *)*param_4;
  plStack_200 = (long *)param_4[1];
  plStack_208 = aplStack_148[0];
  puStack_1f0 = auStack_68;
  ppuStack_210 = &puStack_40;
  for (; pplVar14 = pplStack_1e8, uVar9 = plVar30 == plStack_200, !(bool)uVar9;
      plVar30 = plVar30 + 0x13) {
    uVar8 = plVar30[10] - plVar30[0xb] < 0;
    uVar9 = plVar30[10] == plVar30[0xb];
    if ((bool)uVar9) {
      plVar29 = plStack_208;
      func_0x00010b1ee2fc();
      (*extraout_x8_00)();
      if (plVar29 == (long *)0x0) {
        plVar29 = plStack_208;
        func_0x00010b1ec4bc();
        (*extraout_x8_01)();
        if (((ulong)plVar29 & 1) == 0) goto LAB_10b1bbd9c;
        plVar29 = (long *)0x0;
      }
    }
    else {
      plStack_188 = (long *)0x0;
      pplStack_180 = (long **)0x0;
      uStack_178 = 0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_178 = 1;
      lVar20 = plVar30[0xb] - plVar30[10];
      pplStack_180 = pplVar13;
      if (lVar20 == 0x10) {
        plVar29 = plStack_208;
        FUN_10b1c22a8(plStack_208,plVar30 + 7);
        iVar11 = (int)plVar29;
      }
      else if (plVar30[0xb] == plVar30[10]) {
        iVar11 = 1;
      }
      else {
        plStack_f8 = (long *)0x0;
        pplStack_f0 = (long **)0x0;
        pplStack_e8 = (long **)0x0;
        func_0x000108947890(&plStack_f8,lVar20 >> 4);
        unaff_x25 = (long *)plVar30[0xb];
        for (plVar29 = (long *)plVar30[10]; plVar29 != unaff_x25; plVar29 = plVar29 + 2) {
          plVar22 = (long *)*plVar29;
          if (plVar22 == (long *)0x0) {
            plVar22 = (long *)0x0;
LAB_10b1bb7d0:
            plVar23 = (long *)0x0;
          }
          else {
            func_0x00010b1eb9d4();
            (*extraout_x8_02)();
            plVar23 = (long *)*plVar29;
            if (plVar23 == (long *)0x0) goto LAB_10b1bb7d0;
            func_0x00010b1ebf40();
            (*extraout_x8_03)();
          }
          if (pplStack_f0 < pplStack_e8) {
            *pplStack_f0 = plVar22;
            pplStack_f0[1] = plVar23;
            pplStack_f0 = pplStack_f0 + 2;
          }
          else {
            pplVar17 = &plStack_f8;
            func_0x000108947b44(pplVar17,((long)pplStack_f0 - (long)plStack_f8 >> 4) + 1);
            func_0x000108947998(&plStack_e0,pplVar17,(long)pplStack_f0 - (long)plStack_f8 >> 4,
                                &pplStack_e8);
            *pplStack_d0 = plVar22;
            pplStack_d0[1] = plVar23;
            plVar22 = (long *)((long)plStack_d8 - ((long)pplStack_f0 - (long)plStack_f8));
            pplStack_d0 = pplStack_d0 + 2;
            _memcpy(plVar22);
            pplVar17 = pplStack_e8;
            pplStack_1d8 = pplStack_c8;
            pplStack_1e0 = pplStack_d0;
            pplStack_e8 = pplStack_c8;
            pplStack_f0 = pplStack_d0;
            pplStack_d0 = (long **)plStack_f8;
            pplStack_c8 = pplVar17;
            plStack_e0 = plStack_f8;
            plStack_d8 = plStack_f8;
            plStack_f8 = plVar22;
            func_0x000108947a20(&plStack_e0);
            pplStack_f0 = pplStack_1e0;
          }
        }
        plVar29 = plStack_208;
        (**(code **)(*plStack_208 + 0x38))(plStack_208,&plStack_f8,plVar30 + 7);
        iVar11 = (int)plVar29;
        func_0x00010894593c(&plStack_f8);
      }
      plVar29 = pplStack_1e8[0x47];
      func_0x00010b1eb1fc(&plStack_e0);
      func_0x00010b1ed900();
      func_0x00010b1ed8e8();
      func_0x00010b1ec188(puStack_1f0);
      uVar9 = iVar11 == 0;
      pplVar17 = (long **)(ulong)(byte)uVar9;
      func_0x00010b1ed8d4(ppuStack_210,"success");
      func_0x00010b1eccdc();
      func_0x00010b1eb5b4(plVar29,0x21,&plStack_f8);
      func_0x00010b1ebc94();
      do {
        func_0x00010b1ed8cc();
        func_0x00010b1ec03c();
      } while (!(bool)uVar9);
      if (iVar11 != 0) {
LAB_10b1bbd9c:
        func_0x00010b1ec958(uStack_220);
        *(undefined1 *)(extraout_x8_06 + 0x18) = 0;
        func_0x00010b1ed974();
        goto LAB_10b1bbdac;
      }
      plVar29 = pplStack_1e8[0x47];
      func_0x00010b1eb1fc(&plStack_e0);
      func_0x00010b1ed900();
      func_0x00010b1ed8e8();
      func_0x00010b1ec188(puStack_1f0);
      func_0x00010b120648(&plStack_f8,&plStack_e0,4);
      pplVar17 = &plStack_188;
      func_0x000107c28148();
      FUN_10b1135dc(plVar29,0x23,&plStack_f8);
      func_0x00010b1ebc94();
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
        func_0x00010b1ec838();
      } while (!(bool)uVar9);
      plVar29 = (long *)0x0;
      plVar22 = (long *)plVar30[10];
      plVar23 = (long *)plVar30[0xb];
      while( true ) {
        uVar8 = (long)plVar22 - (long)plVar23 < 0;
        uVar9 = plVar22 == plVar23;
        if ((bool)uVar9) break;
        lVar20 = *plVar22;
        if (lVar20 != 0) {
          func_0x00010b1ebf40();
          (*extraout_x8_04)();
        }
        plVar29 = (long *)(lVar20 + (long)plVar29);
        plVar22 = plVar22 + 2;
      }
      FUN_10b12983c(&plStack_e0,*(undefined4 *)(param_3 + 8));
      func_0x00010b1ed8f4();
      func_0x00010b1ec0b8();
      func_0x00010b1ebee0(&plStack_f8,&plStack_e0);
      func_0x00010b1ee15c();
      FUN_10b114b00();
      func_0x00010b1ebc94();
      do {
        func_0x00010b1ed8cc();
        func_0x00010b1ec03c();
      } while (!(bool)uVar9);
      FUN_10b12983c(&plStack_e0,*(undefined4 *)(param_3 + 8));
      func_0x00010b1ed8f4();
      func_0x00010b1ec0b8();
      func_0x00010b1ebee0(&plStack_f8,&plStack_e0);
      func_0x00010b1ee15c();
      FUN_10b11ef50();
      func_0x00010b1ebc94();
      do {
        func_0x00010b1ed8cc();
        func_0x00010b1ec03c();
      } while (!(bool)uVar9);
    }
    plStack_e0 = plVar29;
    FUN_10b17d8dc(&plStack_d8,plVar30 + 0xd);
    plVar22 = plVar30;
    FUN_10b1e50cc();
    plVar29 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      uVar26 = (long)plStack_168 - 1;
      if (((ulong)plStack_168 & uVar26) == 0) {
        unaff_x25 = (long *)(uVar26 & (ulong)plVar22);
        uVar8 = false;
      }
      else {
        uVar8 = (long)plVar22 - (long)plStack_168 < 0;
        unaff_x25 = plVar22;
        if (plStack_168 <= plVar22) {
          uVar5 = 0;
          if (plStack_168 != (long *)0x0) {
            uVar5 = (ulong)plVar22 / (ulong)plStack_168;
          }
          unaff_x25 = (long *)((long)plVar22 - uVar5 * (long)plStack_168);
        }
      }
      plVar23 = *(long **)(lStack_170 + (long)unaff_x25 * 8);
      if (plVar23 != (long *)0x0) {
        do {
          while( true ) {
            plVar23 = (long *)*plVar23;
            if (plVar23 == (long *)0x0) goto LAB_10b1bbaf8;
            plVar21 = (long *)plVar23[1];
            uVar8 = (long)plVar21 - (long)plVar22 < 0;
            if (plVar21 != plVar22) break;
            plVar21 = plVar23 + 9;
            func_0x000107c278d0(plVar21,plVar30 + 7);
            if (((ulong)plVar21 & 1) != 0) goto LAB_10b1bbc18;
          }
          if (((ulong)plVar29 & uVar26) == 0) {
            plVar21 = (long *)((ulong)plVar21 & uVar26);
          }
          else if (plVar29 <= plVar21) {
            uVar5 = 0;
            if (plVar29 != (long *)0x0) {
              uVar5 = (ulong)plVar21 / (ulong)plVar29;
            }
            plVar21 = (long *)((long)plVar21 - uVar5 * (long)plVar29);
          }
          uVar8 = (long)plVar21 - (long)unaff_x25 < 0;
        } while (plVar21 == unaff_x25);
      }
    }
LAB_10b1bbaf8:
    plVar23 = (long *)0x98;
    __Znwm();
    pplStack_f0 = pplStack_1f8;
    pplStack_e8 = (long **)0x0;
    *plVar23 = 0;
    plVar23[1] = (long)plVar22;
    plStack_f8 = plVar23;
    FUN_10b17d5c4(plVar23 + 2,plVar30);
    plVar23[0xc] = 0;
    *(undefined1 *)(plVar23 + 0xd) = 0;
    *(undefined1 *)(plVar23 + 0x12) = 0;
    pplStack_e8 = (long **)CONCAT71(pplStack_e8._1_7_,1);
    func_0x00010b1ebbc8(lStack_158);
    if ((plVar29 == (long *)0x0) || (func_0x00010b1ebbbc(), (bool)uVar8)) {
      func_0x00010b1ee148();
      bVar7 = (long *)0x2 < plVar29;
      bVar10 = plVar29 == (long *)0x3;
      func_0x00010b1eaeec();
      uVar31 = extraout_x8_05;
      if (!bVar7 || bVar10) {
        uVar31 = extraout_x9;
      }
      FUN_10b1e50f0(&lStack_170,uVar31);
      plVar29 = plStack_168;
      if (((ulong)plStack_168 & (long)plStack_168 - 1U) == 0) {
        unaff_x25 = (long *)((long)plStack_168 - 1U & (ulong)plVar22);
      }
      else {
        unaff_x25 = plVar22;
        if (plStack_168 <= plVar22) {
          uVar26 = 0;
          if (plStack_168 != (long *)0x0) {
            uVar26 = (ulong)plVar22 / (ulong)plStack_168;
          }
          unaff_x25 = (long *)((long)plVar22 - uVar26 * (long)plStack_168);
        }
      }
    }
    plVar22 = *(long **)(lStack_170 + (long)unaff_x25 * 8);
    if (plVar22 == (long *)0x0) {
      *plVar23 = (long)plStack_160;
      *(long ***)(lStack_170 + (long)unaff_x25 * 8) = pplStack_1f8;
      plStack_160 = plVar23;
      if (*plVar23 != 0) {
        plVar22 = *(long **)(*plVar23 + 8);
        if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
          plVar22 = (long *)((ulong)plVar22 & (long)plVar29 - 1U);
        }
        else if (plVar29 <= plVar22) {
          uVar26 = 0;
          if (plVar29 != (long *)0x0) {
            uVar26 = (ulong)plVar22 / (ulong)plVar29;
          }
          plVar22 = (long *)((long)plVar22 - uVar26 * (long)plVar29);
        }
        *(long **)(lStack_170 + (long)plVar22 * 8) = plVar23;
      }
    }
    else {
      *plVar23 = *plVar22;
      *plVar22 = (long)plVar23;
    }
    plStack_f8 = (long *)0x0;
    lStack_158 = lStack_158 + 1;
    FUN_10b1e525c(&plStack_f8);
LAB_10b1bbc18:
    plVar23[0xc] = (long)plStack_e0;
    cVar4 = (char)plVar23[0x12];
    if (cVar4 == cStack_b0) {
      if (cVar4 != '\0') {
        FUN_10b1c3524(plVar23 + 0xd,&plStack_d8);
      }
    }
    else if (cVar4 == '\0') {
      FUN_10b1d320c(plVar23 + 0xd,&plStack_d8);
      *(undefined1 *)(plVar23 + 0x12) = 1;
    }
    else {
      FUN_10b1968d4(plVar23 + 0xd);
    }
    pplVar13 = &plStack_d8;
    FUN_10b17d950();
  }
  uVar2 = *(undefined4 *)(param_3 + 8);
  uVar3 = *(uint *)((long)param_3 + 0x1c);
  uStack_1b0 = uStack_138;
  uStack_1a8 = uStack_130;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_198 = uStack_120;
  lStack_1a0 = lStack_128;
  uStack_190 = uStack_118;
  uStack_120 = 0;
  uStack_118 = 0;
  plVar18 = &lStack_170;
  FUN_10b1c59f4(uStack_220,pplStack_1e8,uStack_218,param_3,&uStack_1b0,plVar18,uStack_224,uStack_228
               );
  func_0x00010b1ebfb4();
  plVar30 = pplVar14[0x47];
  func_0x00010b1eb1fc(&plStack_e0);
  FUN_10b12983c(auStack_b8,uVar2);
  param_3 = &plStack_e0;
  func_0x00010b1ee0b8(auStack_90);
  func_0x00010b1ec188(auStack_68);
  func_0x000107c278b8(&uStack_1c8,(&PTR_s_Unknown_110cc4b28)[uVar3]);
  puStack_40 = &DAT_10f6389e8;
  uStack_38 = 4;
  uStack_28 = uStack_1c0;
  uStack_30 = uStack_1c8;
  uStack_20 = uStack_1b8;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  func_0x00010b1eccdc();
  pplVar17 = &plStack_110;
  func_0x000107c28148();
  FUN_10b1135dc(plVar30,0xa0,&plStack_f8);
  func_0x00010b1ebc94();
  do {
    func_0x00010b1ecb08();
    func_0x00010b1ec838();
  } while (!(bool)uVar9);
  func_0x00010b1edf90();
LAB_10b1bbdac:
  func_0x00010b1e5290(&lStack_170);
  func_0x00010b1d7410(aplStack_148);
  func_0x00010b1eadc4();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b1ebe10();
  } while (!(bool)uVar9);
  func_0x00010b1edf90();
  func_0x00010b121af0(uStack_220);
  func_0x00010b1e5290(&lStack_170);
  pplVar13 = aplStack_148;
  func_0x00010b1d7410();
  func_0x00010b1eb598();
  pcVar19 = FUN_10b1bbfac;
  func_0x00010b1ec024();
  pplStack_1e0 = (long **)&stack0x00000050;
  pplStack_1d8 = (long **)pcVar19;
  func_0x00010b1ee598();
  func_0x00010b1eae84();
  if (((uint)plVar18 >> 0x18 & 1) == 0) {
LAB_10b1bc050:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a78,pplVar17);
  }
  else {
    func_0x00010b1ebfc4(auStack_a60);
    func_0x000107c27f70(&uStack_4c0,pplVar17);
    FUN_10b1bedb0(&pplStack_3c0,param_3 + 0x10,auStack_a60,&uStack_4c0);
    func_0x000107c279a4(&uStack_4c0);
    func_0x00010b1edbfc();
    if (((char)uStack_3a8 != '\x01') || (pplStack_3c0 == pplStack_3b8)) {
      func_0x00010b1ee028();
      goto LAB_10b1bc050;
    }
    pplVar14 = pplStack_3c0 + 8;
    func_0x0001072e787c(pplVar14);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a78,pplVar14);
    func_0x00010b1ee028();
  }
  uStack_a90 = 0;
  uStack_a88 = 0;
  uStack_a80 = 0;
  plStack_a98 = (long *)0x0;
  if (((ulong)plVar18 & 0x10000000100) == 0x100) {
    func_0x00010b1ebfc4(&uStack_700);
    func_0x000107c27f70(auStack_7c0,auStack_a78);
    uStack_900 = 0;
    uStack_8f0 = 0;
    func_0x00010bccbc98(&uStack_4c0,param_3 + 0x10,&UNK_10f73837d,0x32);
    pplVar14 = *(long ***)(uStack_4c0 + 8);
    pplStack_918 = *(long ***)(uStack_4c0 + 0x10);
    pplStack_920 = pplVar14;
    if (pplStack_918 != (long **)0x0) {
      do {
        func_0x00010b1eaf98();
        pplVar14 = extraout_x8_07;
      } while (extraout_w11 != 0);
    }
    FUN_10b1fae1c(auStack_a60,pplVar14[2],&uStack_700,auStack_7c0);
    FUN_10b1d3ecc(&uStack_880,auStack_a60);
    uStack_578 = uStack_878;
    uStack_580 = uStack_880;
    uStack_570 = uStack_870;
    uStack_870 = 0;
    uStack_878 = 0;
    uStack_880 = 0;
    uStack_568 = 1;
    FUN_10b1d8ae4(&uStack_880);
    FUN_10b1d4718(auStack_a60);
    FUN_10b1b7824(&pplStack_920);
    func_0x00010bccbe4c(&uStack_4c0);
    func_0x00010bccbdb4(&uStack_4c0);
    FUN_10b1d4780(&pplStack_3c0,&uStack_580);
    func_0x00010b1ed248();
    if ((int)uStack_360 == 1) {
      func_0x00010b1d47e4(&pplStack_3c0);
      uStack_580 = uStack_580 & 0xffffffffffffff00;
      uStack_568 = 0;
      if ((int)uStack_360 != 1) goto LAB_10b1bc238;
      FUN_10b1d481c(&pplStack_640,&uStack_580);
    }
    else {
      uStack_580 = uStack_580 & 0xffffffffffffff00;
LAB_10b1bc238:
      uStack_568 = 0;
      ppplVar15 = &pplStack_3c0;
      func_0x00010b1d4800();
      pplStack_640 = (long **)((ulong)pplStack_640 & 0xffffffffffffff00);
      cStack_628 = '\0';
      if (*(char *)(ppplVar15 + 3) == '\x01') {
        pplStack_638 = ppplVar15[1];
        pplStack_640 = *ppplVar15;
        pplStack_630 = ppplVar15[2];
        func_0x00010b1eb5fc();
        cStack_628 = extraout_w8;
      }
    }
    func_0x00010b1ed248();
    func_0x00010b1ebfa4(&pplStack_3c0);
    FUN_10b1b78d0(&uStack_900);
    func_0x000107c279a4(auStack_7c0);
    func_0x000107c279a4(&uStack_700);
    uVar9 = cStack_628 == '\x01';
    if ((bool)uVar9) {
      if (pplStack_640 == pplStack_638) {
        plVar30 = (long *)0x0;
      }
      else {
        FUN_10b1bcb0c(&pplStack_3c0);
        pplVar14 = pplStack_3c0;
        pplStack_3c0 = (long **)0x0;
        FUN_10b1de9ec(&plStack_a98,pplVar14);
        FUN_10b1de9cc(&pplStack_3c0);
        plVar30 = plStack_a98;
        if (plStack_a98[0x1c] == plStack_a98[0x1d]) {
          plVar29 = param_3[0x47];
          func_0x00010b1ebd14();
          func_0x00010b1eb884(&pplStack_3c0);
          func_0x00010b1eb654(&uStack_580,&pplStack_3c0);
          func_0x00010b1eb040(plVar29);
          FUN_10b120998(&uStack_580);
          func_0x00010b1eb5ac(&pplStack_3c0);
        }
      }
      func_0x00010b1edfb0();
joined_r0x00010b1bc738:
      if (plVar30 == (long *)0x0) goto LAB_10b1bc73c;
      uVar9 = (long *)plVar30[0xc] == param_3[0xd0];
      *(bool *)((long)plVar30 + 0x163) = !(bool)uVar9 && (long)param_3[0xd0] <= plVar30[0xc];
LAB_10b1bc7c8:
      if (((ulong)plVar18 >> 0x20 & 1) != 0) {
        func_0x00010b1ecbc0();
        FUN_10b1bccc0();
        plVar30 = plStack_a98;
      }
      plStack_a98 = (long *)0x0;
      *pplVar13 = plVar30;
    }
    else {
      *pplVar13 = (long *)0x0;
      func_0x00010b1edfb0();
    }
  }
  else {
    if (((ulong)plVar18 >> 0x28 & 1) != 0) {
LAB_10b1bc73c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&pplStack_3c0,pplVar17);
      uStack_25e = ((ulong)plVar18 & 0x10000000000) == 0;
      uStack_3a8 = (long **)((ulong)uStack_3a8 & 0xffffffffffffff00);
      uStack_380 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      uStack_278 = 0;
      uStack_370 = 0;
      uStack_378 = 0;
      uStack_360 = 0;
      uStack_368 = 0;
      uStack_358 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_260 = 0;
      uStack_25d = 0;
      uStack_25c = 0;
      uStack_250 = 0;
      uStack_258 = 0;
      func_0x00010b1edfcc();
      func_0x00010b1ed108();
      FUN_10b1de9cc(&pplStack_920);
      func_0x00010b1ed2d4();
      plVar30 = plStack_a98;
      uVar9 = ((ulong)plVar18 & 0x10000000100) == 0x100;
      if ((bool)uVar9) {
        FUN_10b1b9684(plStack_a98 + 0xd);
      }
      goto LAB_10b1bc7c8;
    }
    func_0x00010b1ebfc4(auStack_ae0);
    func_0x000107c27f70(auStack_b00,auStack_a78);
    auStack_938[0] = 0;
    uStack_928 = 0;
    func_0x00010bccbc98(&uStack_900,param_3 + 0x10,&UNK_10f7383b0,0x36);
    lVar20 = *(long *)(CONCAT71(uStack_8ff,uStack_900) + 8);
    lStack_8a8 = *(long *)(CONCAT71(uStack_8ff,uStack_900) + 0x10);
    lStack_8b0 = lVar20;
    if (lStack_8a8 != 0) {
      do {
        func_0x00010b1eaf98();
        lVar20 = extraout_x8_08;
      } while (extraout_w11_00 != 0);
    }
    FUN_10b1fae80(auStack_a60,*(undefined8 *)(lVar20 + 0x10),auStack_ae0,auStack_b00);
    uStack_700 = 0;
    auStack_6f8[0] = 0;
    uStack_648 = 0;
    if (cStack_9a0 == '\0') {
      uVar31 = 0;
    }
    else {
      FUN_10b1d4b50(auStack_6f8,auStack_a50);
      FUN_10b1d4bc8(auStack_a50);
      uVar31 = uStack_700;
    }
    uStack_700 = uStack_a58;
    uStack_a58 = uVar31;
    FUN_10b1d4adc(&pplStack_640,&uStack_700);
    _bzero(&uStack_880,0xc0);
    FUN_10b1d4adc(auStack_7c0,&uStack_880);
    pplStack_890 = (long **)0x0;
    pplStack_8a0 = (long **)0x0;
    pplStack_898 = (long **)0x0;
    FUN_10b1d4dec(&uStack_4c0,&pplStack_640);
    FUN_10b1d4dec(&uStack_580,auStack_7c0);
    ppplStack_400 = &pplStack_8a0;
    uStack_3f8 = 0;
    pplVar14 = pplVar13;
    while ((((bStack_408 & 1) != 0 || ((bStack_4c8 & 1) != 0)) && (uStack_4c0 != uStack_580))) {
      if ((bStack_408 & 1) == 0) {
        uVar31 = *(undefined8 *)(uStack_4c0 + 8);
        func_0x00010b1eb9a4(auStack_3f0);
        func_0x00010b1eb224(auStack_3d8);
        func_0x00010b1eb99c(uVar31);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f0);
      }
      if (pplStack_898 < pplStack_890) {
        FUN_10b1d4b6c(pplStack_898,auStack_4b8);
        pplVar14 = pplStack_898 + 0x16;
      }
      else {
        lVar20 = (long)pplStack_898 - (long)pplStack_8a0;
        if (0x1745d1745d1745d < lVar20 / 0xb0 + 1U) {
          FUN_10b1d4c38();
          goto LAB_10b1bc83c;
        }
        func_0x00010b1eb414(((long)pplStack_890 - (long)pplStack_8a0) / 0xb0);
        uVar26 = extraout_x9_00;
        if (0xba2e8ba2e8ba2d < extraout_x8_09) {
          uVar26 = 0x1745d1745d1745d;
        }
        if (uVar26 == 0) {
          lVar25 = 0;
        }
        else {
          if (0x1745d1745d1745d < uVar26) {
            func_0x000104bd35f4();
            goto LAB_10b1bc83c;
          }
          lVar25 = uVar26 * 0xb0;
          __Znwm();
        }
        lVar20 = lVar25 + lVar20;
        FUN_10b1d4b6c(lVar20,auStack_4b8);
        pplVar6 = pplStack_898;
        pplVar24 = pplStack_8a0;
        pplVar27 = (long **)(lVar20 + (((long)pplStack_898 - (long)pplStack_8a0) / -0xb0) * 0xb0);
        pplVar16 = pplVar27;
        for (pplVar14 = pplStack_8a0; pplVar14 != pplVar6; pplVar14 = pplVar14 + 0x16) {
          FUN_10b1d4b6c(pplVar16,pplVar14);
          pplVar16 = pplVar16 + 0x16;
        }
        for (; pplVar24 != pplVar6; pplVar24 = pplVar24 + 0x16) {
          func_0x00010b1d4c18(pplVar24);
        }
        pplVar14 = (long **)(lVar20 + 0xb0);
        pplStack_890 = (long **)(lVar25 + uVar26 * 0xb0);
        bVar10 = pplStack_8a0 != (long **)0x0;
        pplStack_8a0 = pplVar27;
        if (bVar10) {
          pplStack_898 = pplVar14;
          __ZdlPv();
        }
      }
      pplStack_898 = pplVar14;
      FUN_10b1d4c44(&uStack_4c0);
    }
    uStack_3f8 = 1;
    FUN_10b1d4d80(&ppplStack_400);
    func_0x00010b1ebbf8(&uStack_580);
    FUN_10b1d4e70(auStack_4b8);
    func_0x00010b1ebbf8(auStack_7c0);
    func_0x00010b1ebbf8(&uStack_880);
    func_0x00010b1ebbf8(&pplStack_640);
    func_0x00010b1ebbf8(&uStack_700);
    pplStack_918 = pplStack_898;
    pplStack_920 = pplStack_8a0;
    pplStack_910 = pplStack_890;
    pplStack_8a0 = (long **)0x0;
    pplStack_898 = (long **)0x0;
    pplStack_890 = (long **)0x0;
    cStack_908 = '\x01';
    FUN_10b1d4e90(&pplStack_8a0);
    FUN_10b1d4eb4(auStack_a60);
    FUN_10b1b7824(&lStack_8b0);
    func_0x00010bccbe4c(&uStack_900);
    func_0x00010bccbdb4(&uStack_900);
    pplStack_3b8 = (long **)((ulong)pplStack_3b8 & 0xffffffffffffff00);
    uStack_3a0 = uStack_3a0 & 0xffffffffffffff00;
    if (cStack_908 == '\x01') {
      pplStack_3b0 = pplStack_918;
      pplStack_3b8 = pplStack_920;
      uStack_3a8 = pplStack_910;
      func_0x00010b1ee4d0();
      uStack_3a0 = CONCAT71(uStack_3a0._1_7_,extraout_w8_00);
    }
    uStack_360 = (ulong)uStack_360._4_4_ << 0x20;
    func_0x00010b1ed258();
    pplStack_920 = (long **)((ulong)pplStack_920 & 0xffffffffffffff00);
    cStack_908 = 0;
    if ((int)uStack_360 == 0) {
      func_0x00010b1ee4c4();
      pplVar16 = pplStack_3b0;
      uVar9 = (char)uStack_3a0 == '\x01';
      if ((bool)uVar9) {
        pplStack_ab8 = pplStack_3b0;
        pplStack_ac0 = pplStack_3b8;
        pplStack_ab0 = uStack_3a8;
        uStack_3a8 = (long **)0x0;
        pplStack_3b8 = (long **)0x0;
        pplStack_3b0 = (long **)0x0;
        bVar10 = true;
        uStack_aa8 = 1;
        pplVar14 = pplVar16;
      }
      else {
        bVar10 = false;
      }
    }
    else {
      uVar9 = (int)uStack_360 == 1;
      if (!(bool)uVar9) goto LAB_10b1bc838;
      bVar10 = false;
      func_0x00010b1ee4c4();
    }
    func_0x00010b1ed258();
    func_0x00010b1edf7c();
    FUN_10b1b78d0(auStack_938);
    func_0x00010b1ec510();
    func_0x00010b1eda44();
    pplVar16 = pplStack_ac0;
    if (bVar10) {
      if (pplStack_ac0 != pplVar14) {
        pplVar14 = pplStack_ac0 + 4;
        func_0x0001072e787c(pplVar14);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&pplStack_3c0,pplVar14);
        func_0x00010b1eb818();
        uStack_3a8 = (long **)CONCAT44(extraout_w9,extraout_w8_01);
        uStack_380 = 1;
        uStack_378 = 0;
        uStack_370 = 0;
        uStack_3a0 = extraout_x10;
        func_0x00010b1ec6d8(*(undefined1 *)(pplVar16 + 0x11));
        uStack_368 = 0;
        uStack_358 = 0;
        uStack_290 = 0;
        uStack_288 = 0;
        uStack_278 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_260 = 0;
        uStack_25e = 1;
        uStack_25d = 0;
        uStack_25c = 0;
        uStack_250 = 0;
        uStack_258 = 0;
        uStack_360 = extraout_x8_10;
        func_0x00010b1edfcc();
        func_0x00010b1ed2d4();
        func_0x00010b1ed108();
        FUN_10b1de9cc(&pplStack_920);
      }
      func_0x00010b1edf98();
      plVar30 = plStack_a98;
      goto joined_r0x00010b1bc738;
    }
    *pplVar13 = (long *)0x0;
    func_0x00010b1edf98();
  }
  FUN_10b1de9cc(&plStack_a98);
  FUN_10b1d4f78(&uStack_a90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a78);
  func_0x00010b1eadc4();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1bc838:
  func_0x00010563ab98();
LAB_10b1bc83c:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10b1bc840);
  (*pcVar19)();
}



/* Entry: 10b1bbfac; end: 10b1bcb0b;  */

void FUN_10b1bbfac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  undefined1 uVar5;
  long *plVar6;
  long **pplVar7;
  long lVar8;
  long *plVar9;
  char extraout_w8;
  undefined1 extraout_w8_00;
  undefined4 extraout_w8_01;
  long *extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  undefined4 extraout_w9;
  ulong extraout_x9;
  ulong extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar10;
  long unaff_x23;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_8d0 [32];
  undefined1 auStack_8b0 [32];
  long *plStack_890;
  long *plStack_888;
  long *plStack_880;
  undefined1 uStack_878;
  long lStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined1 auStack_848 [24];
  undefined1 auStack_830 [8];
  undefined8 uStack_828;
  undefined1 auStack_820 [176];
  char cStack_770;
  undefined1 auStack_708 [16];
  undefined1 uStack_6f8;
  long *plStack_6f0;
  long *plStack_6e8;
  long *plStack_6e0;
  char cStack_6d8;
  undefined1 uStack_6d0;
  undefined7 uStack_6cf;
  undefined1 uStack_6c0;
  long lStack_680;
  long lStack_678;
  long *plStack_670;
  long *plStack_668;
  long *plStack_660;
  ulong uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined1 auStack_590 [192];
  undefined8 uStack_4d0;
  undefined1 auStack_4c8 [176];
  undefined1 uStack_418;
  long *plStack_410;
  long *plStack_408;
  long *plStack_400;
  char cStack_3f8;
  ulong uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  byte bStack_298;
  ulong uStack_290;
  undefined1 auStack_288 [176];
  byte bStack_1d8;
  long **pplStack_1d0;
  undefined1 uStack_1c8;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  func_0x00010b1ec024();
  func_0x00010b1ee598();
  func_0x00010b1eae84();
  if (((uint)param_5 >> 0x18 & 1) == 0) {
LAB_10b1bc050:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_848,param_4);
  }
  else {
    func_0x00010b1ebfc4(auStack_830);
    func_0x000107c27f70(&uStack_290,param_4);
    FUN_10b1bedb0(&plStack_190,unaff_x23 + 0x80,auStack_830,&uStack_290);
    func_0x000107c279a4(&uStack_290);
    func_0x00010b1edbfc();
    if (((char)uStack_178 != '\x01') || (plStack_190 == plStack_188)) {
      func_0x00010b1ee028();
      goto LAB_10b1bc050;
    }
    plVar6 = plStack_190 + 8;
    func_0x0001072e787c(plVar6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_848,plVar6);
    func_0x00010b1ee028();
  }
  uStack_860 = 0;
  uStack_858 = 0;
  uStack_850 = 0;
  lStack_868 = 0;
  if ((param_5 & 0x10000000100) == 0x100) {
    func_0x00010b1ebfc4(&uStack_4d0);
    func_0x000107c27f70(auStack_590,auStack_848);
    uStack_6d0 = 0;
    uStack_6c0 = 0;
    func_0x00010bccbc98(&uStack_290,unaff_x23 + 0x80,&UNK_10f73837d,0x32);
    plVar6 = *(long **)(uStack_290 + 8);
    plStack_6e8 = *(long **)(uStack_290 + 0x10);
    plStack_6f0 = plVar6;
    if (plStack_6e8 != (long *)0x0) {
      do {
        func_0x00010b1eaf98();
        plVar6 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_10b1fae1c(auStack_830,plVar6[2],&uStack_4d0,auStack_590);
    FUN_10b1d3ecc(&uStack_650,auStack_830);
    uStack_348 = uStack_648;
    uStack_350 = uStack_650;
    uStack_340 = uStack_640;
    uStack_640 = 0;
    uStack_648 = 0;
    uStack_650 = 0;
    uStack_338 = 1;
    FUN_10b1d8ae4(&uStack_650);
    FUN_10b1d4718(auStack_830);
    FUN_10b1b7824(&plStack_6f0);
    func_0x00010bccbe4c(&uStack_290);
    func_0x00010bccbdb4(&uStack_290);
    FUN_10b1d4780(&plStack_190,&uStack_350);
    func_0x00010b1ed248();
    if ((int)uStack_130 == 1) {
      func_0x00010b1d47e4(&plStack_190);
      uStack_350 = uStack_350 & 0xffffffffffffff00;
      uStack_338 = 0;
      if ((int)uStack_130 != 1) goto LAB_10b1bc238;
      FUN_10b1d481c(&plStack_410,&uStack_350);
    }
    else {
      uStack_350 = uStack_350 & 0xffffffffffffff00;
LAB_10b1bc238:
      uStack_338 = 0;
      pplVar7 = &plStack_190;
      func_0x00010b1d4800();
      plStack_410 = (long *)((ulong)plStack_410 & 0xffffffffffffff00);
      cStack_3f8 = '\0';
      if (*(char *)(pplVar7 + 3) == '\x01') {
        plStack_408 = pplVar7[1];
        plStack_410 = *pplVar7;
        plStack_400 = pplVar7[2];
        func_0x00010b1eb5fc();
        cStack_3f8 = extraout_w8;
      }
    }
    func_0x00010b1ed248();
    func_0x00010b1ebfa4(&plStack_190);
    FUN_10b1b78d0(&uStack_6d0);
    func_0x000107c279a4(auStack_590);
    func_0x000107c279a4(&uStack_4d0);
    uVar5 = cStack_3f8 == '\x01';
    if ((bool)uVar5) {
      if (plStack_410 == plStack_408) {
        lVar12 = 0;
      }
      else {
        FUN_10b1bcb0c(&plStack_190);
        plVar6 = plStack_190;
        plStack_190 = (long *)0x0;
        FUN_10b1de9ec(&lStack_868,plVar6);
        FUN_10b1de9cc(&plStack_190);
        lVar12 = lStack_868;
        if (*(long *)(lStack_868 + 0xe0) == *(long *)(lStack_868 + 0xe8)) {
          uVar13 = *(undefined8 *)(unaff_x23 + 0x238);
          func_0x00010b1ebd14();
          func_0x00010b1eb884(&plStack_190);
          func_0x00010b1eb654(&uStack_350,&plStack_190);
          func_0x00010b1eb040(uVar13);
          FUN_10b120998(&uStack_350);
          func_0x00010b1eb5ac(&plStack_190);
        }
      }
      func_0x00010b1edfb0();
joined_r0x00010b1bc738:
      if (lVar12 == 0) goto LAB_10b1bc73c;
      uVar5 = *(long *)(lVar12 + 0x60) == *(long *)(unaff_x23 + 0x680);
      *(bool *)(lVar12 + 0x163) =
           !(bool)uVar5 && *(long *)(unaff_x23 + 0x680) <= *(long *)(lVar12 + 0x60);
LAB_10b1bc7c8:
      if ((param_5 >> 0x20 & 1) != 0) {
        func_0x00010b1ecbc0();
        FUN_10b1bccc0();
        lVar12 = lStack_868;
      }
      lStack_868 = 0;
      *param_1 = lVar12;
    }
    else {
      *param_1 = 0;
      func_0x00010b1edfb0();
    }
  }
  else {
    if ((param_5 >> 0x28 & 1) != 0) {
LAB_10b1bc73c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&plStack_190,param_4)
      ;
      uStack_2e = (param_5 & 0x10000000000) == 0;
      uStack_178 = (long *)((ulong)uStack_178 & 0xffffffffffffff00);
      uStack_150 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_48 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_128 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = 0;
      uStack_2d = 0;
      uStack_2c = 0;
      uStack_20 = 0;
      uStack_28 = 0;
      func_0x00010b1edfcc();
      func_0x00010b1ed108();
      FUN_10b1de9cc(&plStack_6f0);
      func_0x00010b1ed2d4();
      lVar12 = lStack_868;
      uVar5 = (param_5 & 0x10000000100) == 0x100;
      if ((bool)uVar5) {
        FUN_10b1b9684(lStack_868 + 0x68);
      }
      goto LAB_10b1bc7c8;
    }
    func_0x00010b1ebfc4(auStack_8b0);
    func_0x000107c27f70(auStack_8d0,auStack_848);
    auStack_708[0] = 0;
    uStack_6f8 = 0;
    func_0x00010bccbc98(&uStack_6d0,unaff_x23 + 0x80,&UNK_10f7383b0,0x36);
    lVar12 = *(long *)(CONCAT71(uStack_6cf,uStack_6d0) + 8);
    lStack_678 = *(long *)(CONCAT71(uStack_6cf,uStack_6d0) + 0x10);
    lStack_680 = lVar12;
    if (lStack_678 != 0) {
      do {
        func_0x00010b1eaf98();
        lVar12 = extraout_x8_00;
      } while (extraout_w11_00 != 0);
    }
    FUN_10b1fae80(auStack_830,*(undefined8 *)(lVar12 + 0x10),auStack_8b0,auStack_8d0);
    uStack_4d0 = 0;
    auStack_4c8[0] = 0;
    uStack_418 = 0;
    if (cStack_770 == '\0') {
      uVar13 = 0;
    }
    else {
      FUN_10b1d4b50(auStack_4c8,auStack_820);
      FUN_10b1d4bc8(auStack_820);
      uVar13 = uStack_4d0;
    }
    uStack_4d0 = uStack_828;
    uStack_828 = uVar13;
    FUN_10b1d4adc(&plStack_410,&uStack_4d0);
    _bzero(&uStack_650,0xc0);
    FUN_10b1d4adc(auStack_590,&uStack_650);
    plStack_660 = (long *)0x0;
    plStack_670 = (long *)0x0;
    plStack_668 = (long *)0x0;
    FUN_10b1d4dec(&uStack_290,&plStack_410);
    FUN_10b1d4dec(&uStack_350,auStack_590);
    pplStack_1d0 = &plStack_670;
    uStack_1c8 = 0;
    plVar6 = param_1;
    while ((((bStack_1d8 & 1) != 0 || ((bStack_298 & 1) != 0)) && (uStack_290 != uStack_350))) {
      if ((bStack_1d8 & 1) == 0) {
        uVar13 = *(undefined8 *)(uStack_290 + 8);
        func_0x00010b1eb9a4(auStack_1c0);
        func_0x00010b1eb224(auStack_1a8);
        func_0x00010b1eb99c(uVar13);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
      }
      if (plStack_668 < plStack_660) {
        FUN_10b1d4b6c(plStack_668,auStack_288);
        plVar6 = plStack_668 + 0x16;
      }
      else {
        lVar12 = (long)plStack_668 - (long)plStack_670;
        if (0x1745d1745d1745d < lVar12 / 0xb0 + 1U) {
          FUN_10b1d4c38();
          goto LAB_10b1bc83c;
        }
        func_0x00010b1eb414(((long)plStack_660 - (long)plStack_670) / 0xb0);
        uVar2 = extraout_x9;
        if (0xba2e8ba2e8ba2d < extraout_x8_01) {
          uVar2 = 0x1745d1745d1745d;
        }
        if (uVar2 == 0) {
          lVar8 = 0;
        }
        else {
          if (0x1745d1745d1745d < uVar2) {
            func_0x000104bd35f4();
            goto LAB_10b1bc83c;
          }
          lVar8 = uVar2 * 0xb0;
          __Znwm();
        }
        lVar12 = lVar8 + lVar12;
        FUN_10b1d4b6c(lVar12,auStack_288);
        plVar3 = plStack_668;
        plVar10 = plStack_670;
        plVar11 = (long *)(lVar12 + (((long)plStack_668 - (long)plStack_670) / -0xb0) * 0xb0);
        plVar9 = plVar11;
        for (plVar6 = plStack_670; plVar6 != plVar3; plVar6 = plVar6 + 0x16) {
          FUN_10b1d4b6c(plVar9,plVar6);
          plVar9 = plVar9 + 0x16;
        }
        for (; plVar10 != plVar3; plVar10 = plVar10 + 0x16) {
          func_0x00010b1d4c18(plVar10);
        }
        plVar6 = (long *)(lVar12 + 0xb0);
        plStack_660 = (long *)(lVar8 + uVar2 * 0xb0);
        bVar1 = plStack_670 != (long *)0x0;
        plStack_670 = plVar11;
        if (bVar1) {
          plStack_668 = plVar6;
          __ZdlPv();
        }
      }
      plStack_668 = plVar6;
      FUN_10b1d4c44(&uStack_290);
    }
    uStack_1c8 = 1;
    FUN_10b1d4d80(&pplStack_1d0);
    func_0x00010b1ebbf8(&uStack_350);
    FUN_10b1d4e70(auStack_288);
    func_0x00010b1ebbf8(auStack_590);
    func_0x00010b1ebbf8(&uStack_650);
    func_0x00010b1ebbf8(&plStack_410);
    func_0x00010b1ebbf8(&uStack_4d0);
    plStack_6e8 = plStack_668;
    plStack_6f0 = plStack_670;
    plStack_6e0 = plStack_660;
    plStack_670 = (long *)0x0;
    plStack_668 = (long *)0x0;
    plStack_660 = (long *)0x0;
    cStack_6d8 = '\x01';
    FUN_10b1d4e90(&plStack_670);
    FUN_10b1d4eb4(auStack_830);
    FUN_10b1b7824(&lStack_680);
    func_0x00010bccbe4c(&uStack_6d0);
    func_0x00010bccbdb4(&uStack_6d0);
    plStack_188 = (long *)((ulong)plStack_188 & 0xffffffffffffff00);
    uStack_170 = uStack_170 & 0xffffffffffffff00;
    if (cStack_6d8 == '\x01') {
      plStack_180 = plStack_6e8;
      plStack_188 = plStack_6f0;
      uStack_178 = plStack_6e0;
      func_0x00010b1ee4d0();
      uStack_170 = CONCAT71(uStack_170._1_7_,extraout_w8_00);
    }
    uStack_130 = (ulong)uStack_130._4_4_ << 0x20;
    func_0x00010b1ed258();
    plStack_6f0 = (long *)((ulong)plStack_6f0 & 0xffffffffffffff00);
    cStack_6d8 = 0;
    if ((int)uStack_130 == 0) {
      func_0x00010b1ee4c4();
      plVar9 = plStack_180;
      uVar5 = (char)uStack_170 == '\x01';
      if ((bool)uVar5) {
        plStack_888 = plStack_180;
        plStack_890 = plStack_188;
        plStack_880 = uStack_178;
        uStack_178 = (long *)0x0;
        plStack_188 = (long *)0x0;
        plStack_180 = (long *)0x0;
        bVar1 = true;
        uStack_878 = 1;
        plVar6 = plVar9;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      uVar5 = (int)uStack_130 == 1;
      if (!(bool)uVar5) goto LAB_10b1bc838;
      bVar1 = false;
      func_0x00010b1ee4c4();
    }
    func_0x00010b1ed258();
    func_0x00010b1edf7c();
    FUN_10b1b78d0(auStack_708);
    func_0x00010b1ec510();
    func_0x00010b1eda44();
    plVar9 = plStack_890;
    if (bVar1) {
      if (plStack_890 != plVar6) {
        plVar6 = plStack_890 + 4;
        func_0x0001072e787c(plVar6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&plStack_190,plVar6);
        func_0x00010b1eb818();
        uStack_178 = (long *)CONCAT44(extraout_w9,extraout_w8_01);
        uStack_150 = 1;
        uStack_148 = 0;
        uStack_140 = 0;
        uStack_170 = extraout_x10;
        func_0x00010b1ec6d8((char)plVar9[0x11]);
        uStack_138 = 0;
        uStack_128 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_48 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_30 = 0;
        uStack_2e = 1;
        uStack_2d = 0;
        uStack_2c = 0;
        uStack_20 = 0;
        uStack_28 = 0;
        uStack_130 = extraout_x8_02;
        func_0x00010b1edfcc();
        func_0x00010b1ed2d4();
        func_0x00010b1ed108();
        FUN_10b1de9cc(&plStack_6f0);
      }
      func_0x00010b1edf98();
      lVar12 = lStack_868;
      goto joined_r0x00010b1bc738;
    }
    *param_1 = 0;
    func_0x00010b1edf98();
  }
  FUN_10b1de9cc(&lStack_868);
  FUN_10b1d4f78(&uStack_860);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_848);
  func_0x00010b1eadc4();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1bc838:
  func_0x00010563ab98();
LAB_10b1bc83c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10b1bc840);
  (*pcVar4)();
}



/* Entry: 10b1bcb0c; end: 10b1bcc83;  */

void FUN_10b1bcb0c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 extraout_w8;
  undefined4 extraout_w9;
  undefined8 extraout_x10;
  undefined8 extraout_x11;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  long unaff_x19;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_1a8 [8];
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
  undefined8 uStack_150;
  undefined1 uStack_140;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b1eb63c();
  param_2 = param_2 + 0x20;
  func_0x0001072e787c(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1a8,param_2);
  func_0x00010b1eb818();
  uStack_190 = CONCAT44(extraout_w9,extraout_w8);
  uStack_168 = CONCAT71(uStack_168._1_7_,1);
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_188 = extraout_x10;
  uStack_180 = extraout_x11;
  uStack_178 = extraout_x12;
  uStack_170 = extraout_x13;
  func_0x00010b1ec6d8(*(undefined1 *)(unaff_x19 + 0x88));
  uStack_150 = 0;
  uStack_140 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x10000;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10b1bcc84();
  FUN_10b1b96e4(auStack_1a8);
  lVar2 = *unaff_x20;
  FUN_10b1b9684(lVar2 + 0x68);
  if ((*(char *)(unaff_x19 + 0xb8) == '\x01') &&
     (*(long *)(unaff_x19 + 0xa0) != *(long *)(unaff_x19 + 0xa8))) {
    FUN_10b1d4960(lVar2 + 0xf8,unaff_x19 + 0xa0,0);
  }
  if ((*(char *)(unaff_x19 + 0x108) == '\x01') &&
     (*(long *)(unaff_x19 + 0xf0) != *(long *)(unaff_x19 + 0xf8))) {
    uVar1 = lVar2 + 0x68;
    FUN_10b1d4998(uVar1,unaff_x19 + 0xf0);
    if ((uVar1 & 1) == 0) {
      func_0x00010b1ee138();
      uStack_1a0 = 0;
      uStack_190 = 0;
      uStack_198 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_170 = 0;
      uStack_178 = 0;
      uStack_160 = 0;
      uStack_168 = 0;
      uStack_158 = 0;
      FUN_10b1d3058(lVar2 + 0x68,auStack_1a8);
      FUN_10b24e4a0(auStack_1a8);
    }
  }
  if ((*(char *)(unaff_x19 + 0xd8) == '\x01') &&
     (*(long *)(unaff_x19 + 0xc0) != *(long *)(unaff_x19 + 200))) {
    FUN_10b1bf628(lVar2 + 0xc0,unaff_x19 + 0xc0,0);
  }
  return;
}



/* Entry: 10b1bcc84; end: 10b1bccbf;  */

void FUN_10b1bcc84(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010b1ebbb0();
  func_0x00010b1ede0c();
  FUN_10b1d5ed8();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10b1bccc0; end: 10b1bd4cf;  */

void FUN_10b1bccc0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  long **pplVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 uVar7;
  long ***ppplVar8;
  long ****pppplVar9;
  long ***ppplVar10;
  long ***ppplVar11;
  long *plVar12;
  long lVar13;
  int extraout_w8;
  int extraout_w8_00;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar14;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar15;
  long ***ppplVar16;
  long lVar17;
  byte bVar18;
  uint6 uVar19;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  undefined8 uVar20;
  byte bVar26;
  long *plStack_340;
  undefined8 uStack_338;
  ulong uStack_330;
  long **pplStack_320;
  long ***ppplStack_318;
  long **pplStack_310;
  long lStack_300;
  ulong uStack_2f8;
  ulong auStack_2f0 [2];
  long lStack_2e0;
  long lStack_2d8;
  char cStack_2c8;
  ulong uStack_2b8;
  long lStack_2b0;
  undefined1 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  long **pplStack_270;
  long ***ppplStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  long alStack_250 [10];
  undefined1 auStack_200 [16];
  long lStack_1f0;
  long **pplStack_120;
  long ***ppplStack_118;
  long **pplStack_110;
  byte bStack_101;
  long lStack_f0;
  int iStack_c0;
  undefined8 uStack_90;
  
  lVar17 = param_4;
  func_0x00010b1eaf40();
  uStack_90 = extraout_x8;
  if (lVar17 == 0) {
    func_0x00010b1ebfc4(&lStack_300);
    func_0x00010b1edf34();
    plStack_290 = (long *)((ulong)plStack_290 & 0xffffffffffffff00);
    uStack_280 = uStack_280 & 0xffffffffffffff00;
    func_0x00010bccbc98(alStack_250,param_1 + 0x80,&UNK_10f7386d2,0x30);
    uVar14 = *(ulong *)(alStack_250[0] + 8);
    lStack_2b0 = *(long *)(alStack_250[0] + 0x10);
    uStack_2b8 = uVar14;
    if (lStack_2b0 != 0) {
      do {
        func_0x00010b1eaf98();
        uVar14 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    FUN_10b1fbdd8(auStack_200,*(undefined8 *)(uVar14 + 0x10),&lStack_300,&pplStack_320);
    FUN_10b1d4fe0(&plStack_340,auStack_200);
    ppplStack_268 = (long ***)uStack_338;
    pplStack_270 = (long **)plStack_340;
    uStack_260 = uStack_330;
    uStack_338 = 0;
    uStack_330 = 0;
    plStack_340 = (long *)0x0;
    uStack_258 = CONCAT71(uStack_258._1_7_,1);
    FUN_10b1d4f78(&plStack_340);
    func_0x00010b1ecd04();
    func_0x00010b1ebd30();
    func_0x00010bccbe4c(alStack_250);
    func_0x00010b1ed0d0();
    func_0x00010b1eddf0();
    func_0x00010b1ebf4c();
    uVar7 = iStack_c0 == 1;
    if ((bool)uVar7) {
      func_0x00010b1d58c8(&pplStack_120);
      func_0x00010b1ee418(iStack_c0);
      uVar7 = extraout_w8_00 == 1;
      if (!(bool)uVar7) goto LAB_10b1bcf58;
      func_0x00010b1eddd8();
    }
    else {
      func_0x00010b1ee418();
LAB_10b1bcf58:
      func_0x00010b1d58e4(&pplStack_120);
      func_0x00010b1ec65c();
      if ((bool)uVar7) {
        func_0x00010b1eb4d4();
        cStack_2c8 = '\x01';
      }
    }
    func_0x00010b1ebf4c();
    func_0x00010b1ebb0c();
    FUN_10b1b78d0(&plStack_290);
LAB_10b1bcf84:
    func_0x00010b1ec204();
    func_0x00010b1ece54();
    pplStack_270 = (long **)&UNK_10e52b660;
    ppplStack_268 = (long ***)0x0;
    uStack_260 = 0;
    uStack_258 = 0;
    if (*(char *)(param_3 + 0x160) == '\x01') {
      ppplVar11 = *(long ****)(param_3 + 0x48);
      ppplVar16 = *(long ****)(param_3 + 0x50);
      if (ppplVar11 != ppplVar16) {
        for (; ppplVar11 != ppplVar16; ppplVar11 = ppplVar11 + 0x11) {
          pplStack_120 = (long **)CONCAT44(pplStack_120._4_4_,*(undefined4 *)ppplVar11);
          pplStack_110 = ppplVar11[2];
          ppplStack_118 = (long ***)ppplVar11[1];
          if (-1 < (char)*(byte *)((long)ppplVar11 + 0x1f)) {
            pplStack_110 = (long **)(ulong)*(byte *)((long)ppplVar11 + 0x1f);
            ppplStack_118 = ppplVar11 + 1;
          }
          Hint_Prefetch(pplStack_270,0,2,0);
          ppplVar8 = &pplStack_120;
          FUN_10b129684(pplStack_270);
          uVar5 = uStack_260;
          pplVar4 = pplStack_270;
          lVar17 = 0;
          uVar14 = (ulong)pplStack_270 >> 0xc ^ (ulong)ppplVar8 >> 7;
          bVar3 = (byte)ppplVar8;
          uVar19 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3)
                                                                        )))) & 0x7f7f7f7f7f7f;
          while( true ) {
            uVar14 = uVar14 & uVar5;
            uVar20 = *(undefined8 *)((long)pplVar4 + uVar14);
            cVar21 = (char)((ulong)uVar20 >> 8);
            cVar22 = (char)((ulong)uVar20 >> 0x10);
            cVar23 = (char)((ulong)uVar20 >> 0x18);
            cVar24 = (char)((ulong)uVar20 >> 0x20);
            cVar25 = (char)((ulong)uVar20 >> 0x28);
            bVar18 = (byte)((ulong)uVar20 >> 0x30);
            bVar26 = (byte)((ulong)uVar20 >> 0x38);
            for (uVar15 = CONCAT17(-(bVar26 == (bVar3 & 0x7f)),
                                   CONCAT16(-(bVar18 == (bVar3 & 0x7f)),
                                            CONCAT15(-(cVar25 == (char)(uVar19 >> 0x28)),
                                                     CONCAT14(-(cVar24 == (char)(uVar19 >> 0x20)),
                                                              CONCAT13(-(cVar23 ==
                                                                        (char)(uVar19 >> 0x18)),
                                                                       CONCAT12(-(cVar22 ==
                                                                                 (char)(uVar19 >>
                                                                                       0x10)),
                                                                                CONCAT11(-(cVar21 ==
                                                                                          (char)(
                                                  uVar19 >> 8)),-((char)uVar20 == (char)uVar19))))))
                                           )) & 0x8080808080808080; uVar15 != 0;
                uVar15 = uVar15 - 1 & uVar15) {
              uVar2 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
              pppplVar9 = (long ****)
                          (ppplStack_268 +
                          (uVar14 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar5) *
                          4);
              FUN_10b1297f4(pppplVar9,&pplStack_120);
              if (((ulong)pppplVar9 & 1) != 0) goto LAB_10b1bd0b0;
            }
            bVar18 = NEON_umaxv(CONCAT17(-(bVar26 == 0x80),
                                         CONCAT16(-(bVar18 == 0x80),
                                                  CONCAT15(-(cVar25 == -0x80),
                                                           CONCAT14(-(cVar24 == -0x80),
                                                                    CONCAT13(-(cVar23 == -0x80),
                                                                             CONCAT12(-(cVar22 ==
                                                                                       -0x80),
                                                  CONCAT11(-(cVar21 == -0x80),
                                                           -((char)uVar20 == -0x80)))))))),1);
            if ((bVar18 & 1) != 0) break;
            lVar17 = lVar17 + 8;
            uVar14 = lVar17 + uVar14;
          }
          ppplVar10 = &pplStack_270;
          FUN_10b1e3c54(ppplVar10,ppplVar8);
          pppplVar9 = (long ****)(ppplStack_268 + (long)ppplVar10 * 4);
          pppplVar9[1] = ppplStack_118;
          *pppplVar9 = (long ***)pplStack_120;
          pppplVar9[2] = (long ***)pplStack_110;
          pppplVar9[3] = ppplVar11;
LAB_10b1bd0b0:
        }
      }
    }
    cVar21 = '\0';
    if (param_4 == 0) {
      cVar21 = cStack_2c8;
    }
    *(char *)(param_3 + 0x161) = cVar21;
    uVar7 = 0;
    if ((cStack_2c8 == '\x01') && (uVar7 = lStack_2e0 == lStack_2d8, !(bool)uVar7)) {
      lStack_300 = 0;
      uStack_2f8 = 0;
      auStack_2f0[0] = 0;
      uVar14 = (lStack_2d8 - lStack_2e0) / 200;
      if (0x1e1e1e1e1e1e1e1 < uVar14) goto LAB_10b1bd300;
      FUN_10b1d5aec(&pplStack_120,uVar14,0,auStack_2f0);
      func_0x00010b1edb6c();
      func_0x00010b1eddfc();
      for (lVar17 = lStack_2e0; uVar7 = lVar17 == lStack_2d8, !(bool)uVar7; lVar17 = lVar17 + 200) {
        ppplVar11 = &pplStack_120;
        lVar13 = lVar17;
        FUN_10b1c46b8(ppplVar11,lVar17,*(undefined8 *)(param_1 + 0x238));
        pplStack_320 = (long **)CONCAT44(pplStack_320._4_4_,pplStack_120._0_4_);
        pplStack_310 = pplStack_110;
        ppplStack_318 = ppplStack_118;
        if (-1 < (char)bStack_101) {
          pplStack_310 = (long **)(ulong)bStack_101;
          ppplStack_318 = (long ***)&ppplStack_118;
        }
        if (((0 < lStack_f0) && (func_0x00010b1edbe8(), ppplVar11 != (long ***)0x0)) &&
           (*(long *)(*(long *)(lVar13 + 0x18) + 0x30) == 0)) {
          ppplVar11 = &pplStack_120;
          FUN_10b1bd620();
        }
        func_0x00010b1edbe8();
        if (ppplVar11 != (long ***)0x0) {
          func_0x00010ae6cb48(&pplStack_270,ppplVar11,0x20);
        }
        FUN_10b1d5c00(&lStack_300,&pplStack_120);
        FUN_10b1d5ca0(&pplStack_120);
      }
      ppplStack_118 = ppplStack_268;
      pplStack_120 = pplStack_270;
      func_0x00010b1e3e0c(&pplStack_120);
      pppplVar9 = (long ****)ppplStack_118;
      uVar14 = uStack_2f8;
      ppplVar11 = (long ***)pplStack_120;
      while (ppplStack_318 = (long ***)pppplVar9, uStack_2f8 = uVar14, ppplVar11 != (long ***)0x0) {
        ppplVar16 = pppplVar9[3];
        uVar7 = uVar14 == auStack_2f0[0];
        if (uVar14 < auStack_2f0[0]) {
          func_0x00010b1eb6f8();
          FUN_10b1d66ac();
          uVar14 = uVar14 + 0x88;
        }
        else {
          plVar12 = &lStack_300;
          FUN_10b1d2ce8(plVar12,(long)(uVar14 - lStack_300) / 0x88 + 1);
          FUN_10b1d5aec(&pplStack_120,plVar12,(long)(uStack_2f8 - lStack_300) / 0x88,auStack_2f0);
          FUN_10b1d66ac(pplStack_110,ppplVar16);
          pplStack_110 = pplStack_110 + 0x11;
          func_0x00010b1edb6c();
          uVar14 = uStack_2f8;
          func_0x00010b1eddfc();
        }
        pplStack_320 = (long **)((long)ppplVar11 + 1);
        ppplStack_318 = (long ***)(pppplVar9 + 4);
        uStack_2f8 = uVar14;
        func_0x00010b1e3e0c(&pplStack_320);
        pppplVar9 = (long ****)ppplStack_318;
        uVar14 = uStack_2f8;
        ppplVar11 = (long ***)pplStack_320;
      }
      FUN_10b1d2c70(param_3 + 0x48);
      *(ulong *)(param_3 + 0x50) = uStack_2f8;
      *(long *)(param_3 + 0x48) = lStack_300;
      *(ulong *)(param_3 + 0x58) = auStack_2f0[0];
      uStack_2f8 = 0;
      auStack_2f0[0] = 0;
      lStack_300 = 0;
      FUN_10b1d31b4(&lStack_300);
    }
    func_0x00010b1d5cd8(&pplStack_270);
    FUN_10b1d59d8(&lStack_2e0);
  }
  else {
    func_0x00010b1eca58(auStack_200);
    lVar17 = lStack_1f0;
    func_0x00010b1ebfcc();
    uVar7 = *(char *)(lVar17 + 0x50) == '\x01';
    if (!(bool)uVar7) {
LAB_10b1bcd54:
      func_0x00010b1ed950();
      func_0x00010b1ebfc4(&lStack_300);
      func_0x00010b1edf34();
      uVar1 = *(uint *)(param_4 + 0x18);
      func_0x00010b1ec6ac(&plStack_340);
      uStack_2b8 = uStack_2b8 & 0xffffffffffffff00;
      uStack_2a8 = 0;
      func_0x00010bccbc98(alStack_250,param_1 + 0x80,&UNK_10f738703,0x51);
      lVar17 = *(long *)(alStack_250[0] + 8);
      lStack_298 = *(long *)(alStack_250[0] + 0x10);
      lStack_2a0 = lVar17;
      if (lStack_298 != 0) {
        do {
          func_0x00010b1eaf98();
          lVar17 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      FUN_10b1fbe3c(auStack_200,*(undefined8 *)(lVar17 + 0x10),&lStack_300,&pplStack_320,
                    (ulong)uVar1 | 0x100000000,&plStack_340);
      FUN_10b1d4fe0(&plStack_290,auStack_200);
      ppplStack_268 = (long ***)uStack_288;
      pplStack_270 = (long **)plStack_290;
      uStack_260 = uStack_280;
      uStack_288 = 0;
      uStack_280 = 0;
      plStack_290 = (long *)0x0;
      uStack_258 = CONCAT71(uStack_258._1_7_,1);
      FUN_10b1d4f78(&plStack_290);
      func_0x00010b1ecd04();
      FUN_10b1b7824(&lStack_2a0);
      func_0x00010bccbe4c(alStack_250);
      func_0x00010b1ed0d0();
      func_0x00010b1eddf0();
      func_0x00010b1ebf4c();
      uVar7 = iStack_c0 == 1;
      if ((bool)uVar7) {
        func_0x00010b1d58c8(&pplStack_120);
        func_0x00010b1ee418(iStack_c0);
        uVar7 = extraout_w8 == 1;
        if (!(bool)uVar7) goto LAB_10b1bcf24;
        func_0x00010b1eddd8();
      }
      else {
        func_0x00010b1ee418();
LAB_10b1bcf24:
        func_0x00010b1d58e4(&pplStack_120);
        func_0x00010b1ec65c();
        if ((bool)uVar7) {
          func_0x00010b1eb4d4();
          cStack_2c8 = '\x01';
        }
      }
      func_0x00010b1ebf4c();
      func_0x00010b1ebb0c();
      func_0x00010b1ed234();
      func_0x00010b1ecff0();
      goto LAB_10b1bcf84;
    }
    lVar17 = lStack_1f0;
    func_0x00010b1ebfcc();
    func_0x00010b1edee8(&pplStack_120,*(undefined4 *)(param_4 + 0x18));
    uVar14 = lVar17 + 0x28;
    func_0x000106886674(uVar14,&pplStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pplStack_120);
    if ((uVar14 & 1) != 0) goto LAB_10b1bcd54;
    func_0x00010b1ed950();
  }
  func_0x00010b1eaddc(uStack_90);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1bd300:
  FUN_10b1d2de0();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10b1bd308);
  (*pcVar6)();
}



/* Entry: 10b1bd4d0; end: 10b1bd52f;  */

void FUN_10b1bd4d0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 *puStack_40;
  ulong uStack_38;
  byte bStack_29;
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  FUN_10b1c49c4(&puStack_40,&uStack_24,param_3);
  if (-1 < (char)bStack_29) {
    uStack_38 = (ulong)bStack_29;
    puStack_40 = (undefined1 *)&puStack_40;
  }
  FUN_10b205f70(param_1,puStack_40,uStack_38);
  func_0x00010b1eb738();
  return;
}



/* Entry: 10b1bd530; end: 10b1bd61f;  */

long FUN_10b1bd530(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong *unaff_x19;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  func_0x00010b1eb648();
  Hint_Prefetch(*param_1,0,2,0);
  FUN_10b129684(*param_1);
  lVar6 = 0;
  uVar1 = unaff_x19[1];
  uVar2 = unaff_x19[2];
  uVar7 = *unaff_x19;
  uVar5 = uVar7 >> 0xc ^ param_2 >> 7;
  bVar3 = (byte)param_2;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      iVar4 = (int)uVar1 + (int)uVar9 * 0x20;
      FUN_10b1297f4();
      if (iVar4 != 0) {
        return *unaff_x19 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 10b1bd620; end: 10b1bd697;  */

void FUN_10b1bd620(void)

{
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b1eb648();
  func_0x00010b123e24();
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  uStack_28 = *(undefined8 *)(unaff_x19 + 0x50);
  uStack_30 = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  func_0x00010b1d5bdc(&uStack_30);
  func_0x00010b123dec(unaff_x19 + 0x58,unaff_x20 + 0x58);
  func_0x000107c27cfc(unaff_x19 + 0x68,unaff_x20 + 0x68);
  *(undefined1 *)(unaff_x19 + 0x80) = *(undefined1 *)(unaff_x20 + 0x80);
  return;
}



/* Entry: 10b1bd698; end: 10b1bd8d3;  */

void FUN_10b1bd698(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  ulong unaff_x21;
  long lStack_80;
  undefined1 auStack_70 [64];
  
  func_0x00010b1ecb30();
  if (*(char *)(param_3 + 0x130) == '\x01') {
    if ((*(byte *)(unaff_x19 + 0x130) & 1) == 0) {
      FUN_10b1bd950(unaff_x19 + 0x90);
      uVar2 = unaff_x21;
      FUN_10b1bd8d4();
      if ((uVar2 & 1) == 0) {
        lVar1 = *(long *)(param_3 + 0xe8) - *(long *)(param_3 + 0xe0);
        if (lVar1 != 0) {
          func_0x00010b1ed734(lVar1,*(undefined8 *)(unaff_x21 + 0x238));
        }
        FUN_10b20bea8();
        FUN_10b1216e0(unaff_x19 + 0x90);
      }
    }
    if ((*(byte *)(unaff_x19 + 0x1b8) & 1) == 0) {
      FUN_10b1217fc(unaff_x19 + 0x180);
      func_0x00010b1246a0(unaff_x19 + 0x180);
      *(undefined1 *)(unaff_x19 + 0x1b8) = 1;
      if ((*(byte *)(unaff_x21 + 0x76) & 1) == 0) {
        uVar2 = unaff_x19 + 0x180;
        FUN_10b1d0ad0(uVar2,param_3 + 0x118);
        if ((uVar2 & 1) == 0) goto LAB_10b1bd8a8;
      }
      else {
        FUN_10b1bb368(auStack_70);
        func_0x00010b1ed6bc();
        func_0x00010b121b68();
        if (lStack_80 == 0) {
          func_0x00010b1ede58();
LAB_10b1bd8a8:
          FUN_10b1217fc(unaff_x19 + 0x180);
        }
        else {
          func_0x00010b24da58(unaff_x19 + 0x180);
          func_0x00010b1ede58();
        }
      }
    }
  }
  if ((param_4 != 0) && ((*(byte *)(unaff_x19 + 0x178) & 1) == 0)) {
    uVar2 = unaff_x19 + 0x138;
    func_0x00010b114b5c();
    if ((*(byte *)(unaff_x21 + 0x76) & 1) == 0) {
      FUN_10b136bfc(uVar2,param_4 + 0x68);
      if ((uVar2 & 1) == 0) goto LAB_10b1bd82c;
    }
    else {
      FUN_10b1bf318(auStack_70);
      func_0x00010b1ed6bc();
      func_0x00010b121b8c();
      if (lStack_80 == 0) {
        func_0x00010b1ede60();
LAB_10b1bd82c:
        lVar1 = *(long *)(param_4 + 0x70) - *(long *)(param_4 + 0x68);
        if (lVar1 != 0) {
          func_0x00010b1ed734(lVar1,*(undefined8 *)(unaff_x21 + 0x238));
        }
        FUN_10b20bea8();
        lVar1 = unaff_x19 + 0x138;
        if (*(char *)(unaff_x19 + 0x178) == '\x01') {
          FUN_10b24fff8();
          *(undefined1 *)(lVar1 + 0x40) = 0;
        }
        return;
      }
      FUN_10b250340(uVar2);
      func_0x00010b1ede60();
    }
  }
  return;
}



/* Entry: 10b1bd8d4; end: 10b1bd94f;  */

ulong FUN_10b1bd8d4(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong unaff_x19;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x76) & 1) != 0) {
    FUN_10b1bb504(auStack_60,param_1,param_3);
    func_0x00010b1ec470();
    func_0x00010b1ee56c();
    if (unaff_x20 != 0) {
      func_0x00010b1ec2e0();
      FUN_10b24fef8();
    }
    func_0x00010b1ecf1c();
    return (ulong)(unaff_x20 != 0);
  }
  uVar1 = *(ulong *)(param_3 + 0x28) <= *(ulong *)(param_3 + 0x20);
  uVar2 = *(ulong *)(param_3 + 0x20) == *(ulong *)(param_3 + 0x28);
  if ((bool)uVar2) {
    uVar3 = 1;
  }
  else {
    func_0x00010b1eb648();
    FUN_10b1371b0();
    func_0x00010b1eb784();
    if (!(bool)uVar1 || (bool)uVar2) {
      func_0x000100063660(unaff_x19,&stack0xffffffffffffffe0);
      return unaff_x19;
    }
    func_0x00010b1edbbc();
    uStack_28 = param_2;
    func_0x00010b1ecbf8();
    func_0x00010b1eb5b4(auStack_30,0xd4,auStack_48);
    func_0x00010b1eb750();
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 10b1bd950; end: 10b1bd97b;  */

void FUN_10b1bd950(long param_1)

{
  FUN_10b1216e0();
  FUN_10b118220(param_1);
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}



/* Entry: 10b1bd97c; end: 10b1bdae7;  */

void FUN_10b1bd97c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long unaff_x19;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010b1ecc8c();
  lVar1 = param_5;
  func_0x00010b1ebbb0();
  if (lVar1 == 0) {
    FUN_10b12106c(param_4 + 0x128);
  }
  lVar1 = *(long *)(param_3 + 0x10);
  func_0x00010b1eca94();
  if (param_5 == 0) {
    *(undefined1 *)(unaff_x19 + 0x18) = 0;
  }
  else {
    func_0x00010b125750(unaff_x19 + 0x18,param_5);
  }
  *(bool *)(unaff_x19 + 0x58) = param_5 != 0;
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  uVar5 = *(undefined8 *)(lVar1 + 0x30);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  uVar7 = *(undefined8 *)(lVar1 + 0x39);
  uVar6 = *(undefined8 *)(lVar1 + 0x31);
  *(undefined1 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x81) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x79) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x78) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
  *(undefined1 *)(unaff_x19 + 0x130) = 0;
  *(undefined1 *)(unaff_x19 + 0x138) = 0;
  *(undefined1 *)(unaff_x19 + 0x178) = 0;
  *(undefined1 *)(unaff_x19 + 0x180) = 0;
  *(undefined1 *)(unaff_x19 + 0x1b8) = 0;
  *(undefined1 *)(unaff_x19 + 0x1c0) = *(undefined1 *)(lVar1 + 0x160);
  *(undefined1 *)(unaff_x19 + 0x1c1) = *(undefined1 *)(lVar1 + 0x164);
  *(undefined1 *)(unaff_x19 + 0x1c2) = 0;
  FUN_10b1bdae8(unaff_x19 + 0x1c8,lVar1);
  _bzero(unaff_x19 + 0x1d8,0xa0);
  if (*(long *)(param_3 + 0x18) == 0) {
    FUN_10b121694((undefined1 *)(unaff_x19 + 0x90),param_4 + 0x80);
    FUN_10b121704((undefined1 *)(unaff_x19 + 0x138),param_4 + 0x128);
    func_0x00010b1ec8b0();
    FUN_10b1bd698();
  }
  else {
    func_0x00010b1ec8bc();
    FUN_10b1bdb60();
    func_0x00010b1edc8c();
    func_0x00010b1ec7bc();
  }
  return;
}



/* Entry: 10b1bdae8; end: 10b1bdb5f;  */

void FUN_10b1bdae8(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  long extraout_x9;
  long lVar2;
  int extraout_w12;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b1ecb30();
  FUN_10b1bf2d0(param_1,(undefined8 *)(param_2 + 0x168));
  if (*unaff_x21 == 0) {
    func_0x00010b12186c();
    FUN_10b1bf2fc();
    lVar2 = *unaff_x21;
    uVar1 = 0;
    if (unaff_x21[1] != 0) {
      do {
        func_0x00010b1eb0ac();
        uVar1 = extraout_x8;
        lVar2 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    uStack_38 = *(undefined8 *)(param_2 + 0x170);
    uStack_40 = *(undefined8 *)(param_2 + 0x168);
    *(long *)(unaff_x19 + 0x168) = lVar2;
    *(undefined8 *)(unaff_x19 + 0x170) = uVar1;
    func_0x00010b1219e0(&uStack_40);
  }
  return;
}



/* Entry: 10b1bdb60; end: 10b1bdc4f;  */

void FUN_10b1bdb60(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 in_register_00005008;
  undefined1 in_register_00005009;
  undefined1 in_register_0000500a;
  undefined1 in_register_0000500b;
  undefined1 in_register_0000500c;
  undefined1 in_register_0000500d;
  undefined1 in_register_0000500e;
  undefined1 in_register_0000500f;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b1eb424();
  func_0x00010b1ed728();
  if ((bool)in_ZR) {
    FUN_10b1bb504(&uStack_60);
  }
  else {
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    in_register_00005008 = 0;
    in_register_00005009 = 0;
    in_register_0000500a = 0;
    in_register_0000500b = 0;
    in_register_0000500c = 0;
    in_register_0000500d = 0;
    in_register_0000500e = 0;
    in_register_0000500f = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  if (param_3 == 0) {
    func_0x00010b1ee44c();
    uStack_88 = CONCAT17(in_register_0000500f,
                         CONCAT16(in_register_0000500e,
                                  CONCAT15(in_register_0000500d,
                                           CONCAT14(in_register_0000500c,
                                                    CONCAT13(in_register_0000500b,
                                                             CONCAT12(in_register_0000500a,
                                                                      CONCAT11(in_register_00005009,
                                                                               in_register_00005008)
                                                                     ))))));
    uStack_90 = CONCAT17(in_register_00005007,
                         CONCAT16(in_register_00005006,
                                  CONCAT15(in_register_00005005,
                                           CONCAT14(in_register_00005004,
                                                    CONCAT13(in_register_00005003,
                                                             CONCAT12(in_register_00005002,
                                                                      CONCAT11(in_register_00005001,
                                                                               in_b0)))))));
  }
  else {
    FUN_10b1bf318(&uStack_90);
  }
  func_0x00010b1ed728();
  if ((bool)in_ZR) {
    func_0x00010b1eda54(&uStack_c0);
  }
  else {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  FUN_10b1d64b8();
  func_0x00010b121b68(&uStack_c0);
  func_0x00010b121b8c(&uStack_90);
  func_0x00010b121bb0(&uStack_60);
  return;
}



/* Entry: 10b1bdc50; end: 10b1be193;  */

uint FUN_10b1bdc50(undefined1 *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x19;
  byte *pbVar9;
  uint uVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_5f8 [272];
  byte *pbStack_4e8;
  undefined1 auStack_4e0 [32];
  undefined1 auStack_4c0 [32];
  undefined4 uStack_4a0;
  undefined1 uStack_49c;
  undefined4 uStack_498;
  undefined1 uStack_494;
  undefined8 uStack_490;
  undefined1 uStack_488;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined8 uStack_470;
  undefined1 uStack_468;
  long lStack_460;
  undefined1 uStack_458;
  long lStack_450;
  undefined1 uStack_448;
  undefined1 auStack_440 [32];
  undefined1 auStack_420 [32];
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  long lStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [272];
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined1 auStack_290 [16];
  long lStack_280;
  undefined1 auStack_278 [304];
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_8;
  
  func_0x00010b1ec024();
  lVar13 = param_3;
  func_0x00010b1ebbb0();
  func_0x00010b1eaf40();
  lVar13 = *(long *)(lVar13 + 0x10);
  uStack_8 = extraout_x8;
  if ((*(byte *)(lVar13 + 0x130) & 1) == 0) {
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    func_0x00010b1ec528();
    func_0x00010b1edc68();
    func_0x00010b1ec7a0(&uStack_140);
    func_0x00010b1eb3bc();
    func_0x00010b1ec528();
    func_0x00010b1edc68();
    lVar13 = *(long *)(param_3 + 0x10);
    if (lVar13 == 0) {
      uVar10 = 0;
      goto LAB_10b1bdfdc;
    }
  }
  uVar3 = 0;
  if (*(char *)(lVar13 + 0x40) == '\x01' && *(int *)(lVar13 + 0x1c) == 2) {
    uVar11 = *(undefined8 *)(unaff_x19 + 0x238);
    piVar1 = *(int **)(lVar13 + 0x50);
    for (piVar12 = *(int **)(lVar13 + 0x48); uVar3 = piVar12 == piVar1, !(bool)uVar3;
        piVar12 = piVar12 + 0x22) {
      if ((*(long *)(piVar12 + 0xc) < 1) && (*piVar12 == 0x13)) {
        piVar5 = piVar12 + 2;
        func_0x00010688f21c(piVar5,&UNK_10f732298);
        if (((ulong)piVar5 & 1) == 0) {
          func_0x00010b1ebd14();
          func_0x00010b1eb884(&uStack_140);
          func_0x00010b1eb654(auStack_278,&uStack_140);
          func_0x00010b1eb040(uVar11);
          func_0x00010b1edc44();
          func_0x00010b1eb5ac(&uStack_140);
          func_0x00010b123d80(&uStack_140,&UNK_10f731c39,5,*(undefined1 *)(lVar13 + 0x160));
          puVar8 = auStack_278;
          func_0x00010b1eb654(puVar8,&uStack_140);
          __ZNSt3__16chrono12system_clock3nowEv();
          lVar4 = ((long)puVar8 - *(long *)(piVar12 + 0x10)) / 3600000000;
          uVar3 = lVar4 == 0;
          lVar13 = -lVar4;
          if (-1 < lVar4) {
            lVar13 = lVar4;
          }
          FUN_10b11ef50(uVar11,0xb9,auStack_278,lVar13);
          func_0x00010b1edc44();
          func_0x00010b1eb5ac(&uStack_140);
          break;
        }
      }
    }
  }
  lVar13 = *(long *)(param_3 + 0x10);
  *(undefined1 *)(lVar13 + 0x160) = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_130 = 0;
  func_0x00010b1ee348();
  if ((bool)uVar3) {
    lVar4 = lVar13 + 0x68;
    func_0x00010b24e714(lVar4);
    func_0x000107c2823c(&uStack_140,lVar4);
    FUN_10b4d1758(lVar13 + 0x68,uStack_140,(int)uStack_138 - (int)uStack_140);
  }
  func_0x00010b1ec6ac(auStack_4e0);
  func_0x00010b1ebfc4(auStack_4c0);
  uStack_4a0 = *(undefined4 *)(lVar13 + 0x18);
  uStack_49c = 1;
  uStack_498 = *(undefined4 *)(lVar13 + 0x1c);
  uStack_494 = 1;
  uStack_490 = *(undefined8 *)(lVar13 + 0x20);
  uStack_488 = 1;
  uStack_480 = *(undefined8 *)(lVar13 + 0x28);
  uStack_478 = 1;
  uStack_470 = *(undefined8 *)(lVar13 + 0x30);
  uStack_468 = 1;
  lStack_460 = *(long *)(lVar13 + 0x60) / 1000;
  uStack_458 = 1;
  lStack_450 = *(long *)(lVar13 + 0x38) / 1000;
  uStack_448 = 1;
  func_0x00010b1ee348();
  if ((bool)uVar3) {
    func_0x000107c27994(auStack_278,lVar13 + 0x118);
  }
  else {
    func_0x00010b1ed464();
  }
  FUN_10b1d5d50(auStack_440,auStack_278);
  func_0x00010b1ee348();
  if ((bool)uVar3) {
    func_0x000107c27994(&lStack_3d0,lVar13 + 0xe0);
  }
  else {
    pcStack_3c8 = (code *)0x0;
    lStack_3d0 = 0;
    uStack_3c0 = 0;
  }
  FUN_10b1d5d50(auStack_420,&lStack_3d0);
  uStack_400 = 0;
  uStack_3f8 = 1;
  uStack_3e8 = uStack_138;
  uStack_3f0 = uStack_140;
  uStack_3e0 = uStack_130;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_3d8 = 1;
  func_0x000107c27914(&lStack_3d0);
  func_0x000107c27914(auStack_278);
  func_0x000107c27914(&uStack_140);
  uStack_120 = 0;
  uVar11 = 0;
  uVar14 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  func_0x00010b1ec528();
  func_0x00010b1edc68();
  iVar2 = *(int *)(unaff_x19 + 0x298) + -1;
  in_ZR = iVar2 == 0;
  if (*(int *)(unaff_x19 + 0x298) < 1) {
    func_0x00010b1d5d6c(auStack_5f8,auStack_4e0);
    func_0x00010b1eced4(auStack_290);
    lStack_3d0 = unaff_x19 + 0x80;
    pcStack_3c8 = FUN_10b1fccbc;
    uStack_3b8 = *(undefined8 *)(lStack_280 + 0x98);
    uStack_3c0 = 0;
    *(undefined8 *)(lStack_280 + 0x98) = 0;
    func_0x00010b1d5d6c(auStack_3b0,auStack_5f8);
    func_0x00010b1e3efc(auStack_278,&lStack_3d0);
    func_0x00010b1e3efc(&uStack_140,auStack_278);
    puVar6 = (undefined8 *)0x1c0;
    __Znwm();
    puVar7 = puVar6;
    func_0x00010b1eaec0();
    *(undefined8 *)((long)puVar7 + 0x84) = uVar14;
    *(undefined8 *)((long)puVar7 + 0x7c) = uVar11;
    *puVar7 = &PTR_SUB_110cc4098;
    puVar7[1] = 0;
    func_0x00010b1e3efc(puVar7 + 0x12,&uStack_140);
    *(uint *)(puVar6 + 0x11) = *(uint *)(puVar6 + 0x11) | 8;
    puStack_148 = puVar6;
    func_0x000107c2805c(puVar6);
    FUN_10b1e3f78(&puStack_148);
    func_0x00010b1e3ed4(&uStack_140);
    func_0x00010b1e3ed4(auStack_278);
    uStack_2a0 = 0;
    puStack_298 = puVar6;
    FUN_10b1c76a8(lStack_280 + 0x98,&puStack_298);
    func_0x000107c29c20(&puStack_298);
    func_0x000107c29bd8(&uStack_2a0);
    func_0x00010b1e3ed4(&lStack_3d0);
    pbVar9 = *(byte **)(lStack_280 + 0x98);
    pbStack_4e8 = pbVar9;
    if (pbVar9 != (byte *)0x0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10 != 0);
    }
    func_0x000107c2798c(auStack_290);
    func_0x000107c29c54();
    uVar10 = (uint)*pbVar9;
    func_0x000107c29c20(&pbStack_4e8);
    func_0x00010b1d5dec(auStack_5f8);
  }
  else {
    uVar10 = 0;
    *(int *)(unaff_x19 + 0x298) = iVar2;
  }
  param_1 = auStack_4e0;
  func_0x00010b1d5dec();
LAB_10b1bdfdc:
  func_0x00010b1eaddc(uStack_8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1edc44();
    func_0x00010b1eb5ac(&uStack_140);
    func_0x00010b1eb590();
    func_0x00010b1eb63c();
    func_0x00010b1d5d04();
    func_0x00010b1d5d2c(uVar10 + 0x18,param_1 + 0x18);
    return uVar10;
  }
  return uVar10 & 1;
}



/* Entry: 10b1be194; end: 10b1be1bf;  */

void FUN_10b1be194(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb63c();
  func_0x00010b1d5d04();
  func_0x00010b1d5d2c(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 10b1be1c0; end: 10b1be28f;  */

void FUN_10b1be1c0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c27f70();
  func_0x00010b1ec6ac(lVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = *param_4;
  *(undefined1 *)(param_1 + 0x44) = 1;
  func_0x000107c27f70(param_1 + 0x48,param_4 + 2);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_4 + 8);
  *(undefined1 *)(param_1 + 0x69) = 1;
  lVar1 = *(long *)(param_4 + 0xc);
  *(long *)(param_1 + 0x70) = *(long *)(param_4 + 10) / 1000;
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(long *)(param_1 + 0x80) = lVar1 / 1000;
  *(undefined1 *)(param_1 + 0x88) = 1;
  func_0x00010866e73c(param_1 + 0x90,param_4 + 0x1a);
  *(undefined4 *)(param_1 + 0xb0) = param_4[0xe];
  *(undefined1 *)(param_1 + 0xb4) = 1;
  *(long *)(param_1 + 0xb8) = *(long *)(param_4 + 0x10) / 1000;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(undefined1 *)(param_4 + 0x20) = 0;
  return;
}



/* Entry: 10b1be290; end: 10b1be403;  */

void FUN_10b1be290(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_register_00005008;
  undefined1 auStack_3e0 [200];
  long lStack_318;
  code *pcStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 auStack_2f8 [200];
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined1 auStack_220 [16];
  long lStack_210;
  undefined1 auStack_208 [232];
  undefined8 auStack_120 [29];
  undefined8 *puStack_38;
  
  func_0x00010b1ebe28();
  FUN_10b1be1c0(auStack_3e0);
  FUN_10b1bad14(auStack_220,unaff_x20 + 0x360);
  lStack_318 = unaff_x20 + 0x80;
  pcStack_310 = FUN_10b1fcde4;
  uStack_300 = *(undefined8 *)(lStack_210 + 0x98);
  uStack_308 = 0;
  *(undefined8 *)(lStack_210 + 0x98) = 0;
  FUN_10b1d5378(auStack_2f8,auStack_3e0);
  func_0x00010b1e41b8(auStack_208,&lStack_318);
  puVar1 = auStack_120;
  func_0x00010b1e41b8(puVar1,auStack_208);
  func_0x00010b1ede0c();
  puVar2 = puVar1;
  func_0x00010b1eaec0();
  *(undefined8 *)((long)puVar2 + 0x84) = in_register_00005008;
  *(undefined8 *)((long)puVar2 + 0x7c) = param_1;
  *puVar2 = &PTR_SUB_110cc40f8;
  puVar2[1] = 0;
  func_0x00010b1e41b8(puVar2 + 0x12,auStack_120);
  *(uint *)(puVar1 + 0x11) = *(uint *)(puVar1 + 0x11) | 8;
  puStack_38 = puVar1;
  func_0x000107c2805c(puVar1);
  FUN_10b1e4324(&puStack_38);
  func_0x00010b1e4190(auStack_120);
  func_0x00010b1e4190(auStack_208);
  uStack_230 = 0;
  puStack_228 = puVar1;
  FUN_10b1c76a8(lStack_210 + 0x98,&puStack_228);
  func_0x000107c29c20(&puStack_228);
  func_0x000107c29bd8(&uStack_230);
  func_0x00010b1e4190(&lStack_318);
  lVar3 = *(long *)(lStack_210 + 0x98);
  *unaff_x19 = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  func_0x000107c2798c(auStack_220);
  func_0x00010b1d5e1c(auStack_3e0);
  return;
}



/* Entry: 10b1be404; end: 10b1be507;  */

undefined8 *
FUN_10b1be404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x9;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 auStack_170 [25];
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_48;
  
  puVar3 = &uStack_180;
  func_0x00010b1eaf30(param_1);
  uStack_48 = extraout_x9;
  func_0x00010b1eceac(&uStack_180);
  puVar2 = auStack_170;
  FUN_10b1be1c0(puVar2,param_2,param_3,param_4);
  pcStack_a8 = FUN_10b1e4400;
  ppuStack_a0 = &PTR_FUN_110cc4130;
  func_0x00010b1ecea4();
  puVar2[1] = uStack_178;
  *puVar2 = uStack_180;
  uStack_180 = 0;
  uStack_178 = 0;
  FUN_10b1d5378(puVar2 + 2,auStack_170);
  puStack_98 = puVar2;
  func_0x00010b1ed83c();
  func_0x00010b1ecb00();
  func_0x00010b1eafb4(ppuStack_a0);
  FUN_10b1be508();
  func_0x00010b1eaddc(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010b1eafb4(ppuStack_a0);
  FUN_10b1be508(&uStack_180);
  func_0x00010b1eb590();
  func_0x00010b1ed394();
  func_0x00010b1d5e1c();
  puVar1 = (undefined1 *)puVar3;
  func_0x000107c350ac();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c278a0();
  }
  return (undefined8 *)(undefined1 *)puVar3;
}



/* Entry: 10b1be508; end: 10b1be527;  */

long FUN_10b1be508(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1ed394();
  func_0x00010b1d5e1c();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b1be528; end: 10b1be7c7;  */

void FUN_10b1be528(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined1 extraout_w8;
  undefined1 uVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *plVar10;
  long *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x9_04;
  long *plVar11;
  long lVar12;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  long lVar13;
  int extraout_w11;
  long *extraout_x11;
  long *plVar14;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x12;
  long *plVar15;
  long *unaff_x19;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *unaff_x27;
  long *plStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined1 auStack_108 [16];
  long lStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long alStack_50 [2];
  undefined1 uStack_40;
  undefined8 uStack_28;
  
  func_0x00010b1eae28();
  uStack_28 = extraout_x8;
  func_0x00010b1ebbd4(*(undefined1 *)(param_4 + 0x17));
  if (extraout_x8_00 == 0) {
    param_2 = *(long *)(param_2 + 0x238);
    func_0x00010b1ebd14();
    func_0x00010b1eb884(alStack_50);
    plVar11 = alStack_50;
    func_0x00010b1eb654(&lStack_68);
    func_0x00010b1eb040(param_2);
    FUN_10b120998(&lStack_68);
    func_0x00010b1eb5ac(alStack_50);
    func_0x00010b1ed4d4();
  }
  else {
    plVar11 = &lStack_68;
    lStack_68 = param_2;
    uStack_60 = param_3;
    lStack_58 = param_4;
    FUN_10b1be7c8(&uStack_80);
    FUN_10b1bebd0(&pcStack_98,uStack_80);
    if (*(char *)(lStack_88 + 0x17) < '\0') {
      if (*(long *)(lStack_88 + 8) == 0) goto LAB_10b1be614;
LAB_10b1be588:
      puStack_a0 = (undefined1 *)lStack_88;
      pcStack_98 = (code *)0x0;
      uStack_90 = 0;
      in_NG = (int)(*(byte *)(param_2 + 0x76) - 1) < 0;
      in_ZR = *(byte *)(param_2 + 0x76) == 1;
      if (((bool)in_ZR) && (lStack_78 != 0)) {
        plVar5 = (long *)(lStack_78 + 8);
        do {
          cVar1 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_c0 = 0;
      func_0x00010b1eb9e0();
      func_0x00010b1de708(&uStack_c0);
      puVar7 = &uStack_b0;
LAB_10b1be738:
      func_0x000107c2798c(puVar7);
      func_0x00010b1edc60();
    }
    else {
      if (*(char *)(lStack_88 + 0x17) != '\0') goto LAB_10b1be588;
LAB_10b1be614:
      func_0x00010b1edc60();
      FUN_10b1be7c8(alStack_50,&lStack_68);
      plVar11 = alStack_50;
      func_0x00010b1d5d2c(&uStack_80);
      uStack_70 = uStack_40;
      func_0x00010b1edba4();
      FUN_10b1bebd0(&pcStack_98,uStack_80);
      if (-1 < *(char *)(lStack_88 + 0x17)) {
        if (*(char *)(lStack_88 + 0x17) == '\0') goto LAB_10b1be6c8;
LAB_10b1be658:
        pcStack_98 = (code *)0x0;
        uStack_90 = 0;
        lStack_c8 = lStack_88;
        in_NG = (int)(*(byte *)(param_2 + 0x76) - 1) < 0;
        in_ZR = *(byte *)(param_2 + 0x76) == 1;
        if (((bool)in_ZR) && (lStack_78 != 0)) {
          plVar5 = (long *)(lStack_78 + 8);
          do {
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar4) {
              *plVar5 = *plVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_e8 = 0;
        func_0x00010b1eb9e0();
        func_0x00010b1de708(&uStack_e8);
        puVar7 = &uStack_d8;
        goto LAB_10b1be738;
      }
      if (*(long *)(lStack_88 + 8) != 0) goto LAB_10b1be658;
LAB_10b1be6c8:
      func_0x00010b1edc60();
      param_2 = *(long *)(param_2 + 0x238);
      func_0x00010b1ebd14();
      func_0x00010b1eb884(alStack_50);
      plVar11 = alStack_50;
      func_0x00010b1eb654(&pcStack_98);
      func_0x00010b1eb040(param_2);
      FUN_10b120998(&pcStack_98);
      func_0x00010b1eb5ac(alStack_50);
      func_0x00010b1ed4d4();
    }
    func_0x00010b1de708(&uStack_80);
  }
  func_0x00010b1eaddc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1ed370();
  FUN_10b120998();
  func_0x00010b1eb5ac(alStack_50);
  func_0x00010b1de708(&uStack_80);
  func_0x00010b1eb590();
  pcVar8 = FUN_10b1be7c8;
  func_0x00010b1ec024();
  puStack_a0 = &stack0xfffffffffffffff0;
  pcStack_98 = pcVar8;
  func_0x00010b1eb648();
  FUN_10b1b8c14(auStack_108,*plVar11 + 0x2a0);
  lVar13 = lStack_f8;
  FUN_10b1b8c30(lStack_f8,*(undefined8 *)(param_2 + 8));
  plVar11 = (long *)(lVar13 + 0x120);
  func_0x000107c278c4(plVar11,*(undefined8 *)(param_2 + 0x10));
  plVar20 = *(long **)(lVar13 + 0x110);
  plVar5 = plVar11;
  if (plVar20 != (long *)0x0) {
    uVar19 = (long)plVar20 - 1;
    if (((ulong)plVar20 & uVar19) == 0) {
      unaff_x27 = (long *)(uVar19 & (ulong)plVar11);
      in_ZR = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)plVar11 - (long)plVar20 < 0;
      in_ZR = plVar11 == plVar20;
      unaff_x27 = plVar11;
      if (plVar20 <= plVar11) {
        func_0x00010b1ee2e4();
      }
    }
    plVar16 = *(long **)(*(long *)(lVar13 + 0x108) + (long)unaff_x27 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_10b1be8a0;
          plVar10 = (long *)plVar16[1];
          in_NG = (long)plVar10 - (long)plVar11 < 0;
          in_ZR = plVar10 == plVar11;
          if (!(bool)in_ZR) break;
          plVar5 = plVar16 + 2;
          func_0x00010b1eda08();
          if (((ulong)plVar5 & 1) != 0) goto LAB_10b1beac4;
        }
        if (((ulong)plVar20 & uVar19) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar19);
        }
        else if (plVar20 <= plVar10) {
          uVar2 = 0;
          if (plVar20 != (long *)0x0) {
            uVar2 = (ulong)plVar10 / (ulong)plVar20;
          }
          plVar10 = (long *)((long)plVar10 - uVar2 * (long)plVar20);
        }
        in_NG = (long)plVar10 - (long)unaff_x27 < 0;
        in_ZR = plVar10 == unaff_x27;
      } while ((bool)in_ZR);
    }
  }
LAB_10b1be8a0:
  func_0x00010b1edc98();
  plVar16 = (long *)(lVar13 + 0x118);
  uStack_280 = 0;
  plVar10 = plVar5 + 2;
  *plVar5 = 0;
  plVar5[1] = (long)plVar11;
  plStack_290 = plVar5;
  plStack_288 = plVar16;
  func_0x00010b1ec9d4();
  plVar5[5] = 0;
  plVar5[6] = 0;
  uStack_280 = CONCAT71(uStack_280._1_7_,1);
  func_0x00010b1ebbc8(*(undefined8 *)(lVar13 + 0x120));
  if ((plVar20 != (long *)0x0) && (func_0x00010b1ebbbc(), plVar18 = unaff_x27, !(bool)in_NG))
  goto LAB_10b1bea5c;
  func_0x00010b1ed6d4();
  bVar3 = (long *)0x2 < plVar20;
  bVar4 = plVar20 == (long *)0x3;
  func_0x00010b1eaeec();
  plVar18 = extraout_x8_01;
  if (!bVar3 || bVar4) {
    plVar18 = extraout_x9;
  }
  if ((long)plVar18 - 1U == 0) {
    plVar18 = (long *)0x2;
  }
  else if (((ulong)plVar18 & (long)plVar18 - 1U) != 0) {
    func_0x00010b1edda4();
    plVar18 = plVar10;
  }
  plVar20 = *(long **)(lVar13 + 0x110);
  if (plVar20 < plVar18) {
LAB_10b1be924:
    if ((ulong)plVar18 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10b1beb84);
      (*pcVar8)();
    }
    lVar12 = (long)plVar18 << 3;
    __Znwm(lVar12);
    FUN_10b1d5e48(lVar13 + 0x108,lVar12);
    plVar20 = (long *)0x0;
    *(long **)(lVar13 + 0x110) = plVar18;
    while (plVar18 != plVar20) {
      func_0x00010b1ebda4();
      plVar20 = extraout_x9_00;
    }
    plVar20 = plVar18;
    if (*plVar16 != 0) {
      func_0x00010b1ec57c();
      func_0x00010b1ed4a4();
      *(long **)(extraout_x8_02 + (long)extraout_x11 * 8) = plVar16;
      lVar12 = extraout_x8_02;
      uVar19 = extraout_x9_01;
      plVar10 = extraout_x10;
      plVar14 = extraout_x11;
      while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
        plVar15 = (long *)plVar10[1];
        if (((ulong)plVar18 & uVar19) == 0) {
          plVar15 = (long *)((ulong)plVar15 & uVar19);
        }
        else if (plVar18 <= plVar15) {
          uVar2 = 0;
          if (plVar18 != (long *)0x0) {
            uVar2 = (ulong)plVar15 / (ulong)plVar18;
          }
          plVar15 = (long *)((long)plVar15 - uVar2 * (long)plVar18);
        }
        if (plVar15 != plVar14) {
          if (*(long *)(lVar12 + (long)plVar15 * 8) == 0) {
            func_0x00010b1ebf54();
            lVar12 = extraout_x8_04;
            uVar19 = extraout_x9_03;
            plVar10 = extraout_x12;
            plVar14 = extraout_x11_01;
          }
          else {
            func_0x00010b1ead88();
            lVar12 = extraout_x8_03;
            uVar19 = extraout_x9_02;
            plVar10 = extraout_x10_00;
            plVar14 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (plVar18 < plVar20) {
    func_0x00010b1ebdb0((float)*(ulong *)(lVar13 + 0x120),*(undefined4 *)(lVar13 + 0x128));
    if ((plVar20 < (long *)0x3) || (((ulong)plVar20 & (long)plVar20 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b1ead68();
    }
    if (plVar18 <= plVar10) {
      plVar18 = plVar10;
    }
    if (plVar18 < plVar20) {
      if (plVar18 != (long *)0x0) goto LAB_10b1be924;
      FUN_10b1d5e48(lVar13 + 0x108,0);
      *(undefined8 *)(lVar13 + 0x110) = 0;
      plVar20 = (long *)0x0;
    }
    else {
      plVar20 = *(long **)(lVar13 + 0x110);
    }
  }
  if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
    in_ZR = 1;
    plVar18 = (long *)((long)plVar20 - 1U & (ulong)plVar11);
  }
  else {
    in_ZR = plVar11 == plVar20;
    plVar18 = plVar11;
    if (plVar20 <= plVar11) {
      func_0x00010b1ee2e4();
      plVar18 = unaff_x27;
    }
  }
LAB_10b1bea5c:
  lVar12 = *(long *)(lVar13 + 0x108);
  if (*(long *)(lVar12 + (long)plVar18 * 8) == 0) {
    *plVar5 = *plVar16;
    *plVar16 = (long)plVar5;
    *(long **)(lVar12 + (long)plVar18 * 8) = plVar16;
    if (*plVar5 != 0) {
      func_0x00010b1ed484();
      if ((bool)in_ZR) {
        plVar11 = (long *)((ulong)extraout_x9_04 & extraout_x10_01);
      }
      else {
        plVar11 = extraout_x9_04;
        if (plVar20 <= extraout_x9_04) {
          uVar19 = 0;
          if (plVar20 != (long *)0x0) {
            uVar19 = (ulong)extraout_x9_04 / (ulong)plVar20;
          }
          plVar11 = (long *)((long)extraout_x9_04 - uVar19 * (long)plVar20);
        }
      }
      *(long **)(extraout_x8_05 + (long)plVar11 * 8) = plVar5;
    }
  }
  else {
    func_0x00010b1ec534();
  }
  plStack_290 = (long *)0x0;
  *(long *)(lVar13 + 0x120) = *(long *)(lVar13 + 0x120) + 1;
  FUN_10b1d5e60(&plStack_290);
  plVar16 = plVar5;
LAB_10b1beac4:
  lVar13 = plVar16[5];
  uVar9 = lVar13 == 0;
  if ((bool)uVar9) {
    func_0x00010b1c4ea8(&plStack_290,*(undefined8 *)(param_2 + 0x10));
    puVar6 = (undefined8 *)0x1d0;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar7 = puVar6;
    func_0x00010b1ec504();
    puVar17 = puVar7 + 3;
    *puVar17 = extraout_x8_06;
    *puVar7 = &PTR_FUN_110cc3a28;
    func_0x00010b1eb2bc();
    puVar7[10] = 0;
    FUN_10b1d5ed8(puVar7 + 0xb,&plStack_290);
    puStack_118 = puVar17;
    puStack_110 = puVar6;
    func_0x00010b1d5d2c(plVar16 + 5,&puStack_118);
    func_0x00010b1edad8();
    func_0x00010b1ed358();
    lVar12 = plVar16[6];
    lVar13 = plVar16[5];
    unaff_x19[1] = plVar16[6];
    *unaff_x19 = lVar13;
  }
  else {
    lVar12 = plVar16[6];
    *unaff_x19 = lVar13;
    unaff_x19[1] = lVar12;
  }
  if (lVar12 != 0) {
    do {
      func_0x00010b1eaf98();
      uVar9 = extraout_w8;
    } while (extraout_w11 != 0);
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar9;
  func_0x000107c2798c(auStack_108);
  return;
}



/* Entry: 10b1be7c8; end: 10b1bebcf;  */

void FUN_10b1be7c8(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 extraout_w8;
  undefined1 uVar8;
  long *plVar9;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x9_04;
  long *plVar10;
  long lVar11;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  long lVar12;
  undefined4 extraout_w11;
  undefined4 uVar13;
  undefined4 extraout_w11_00;
  undefined4 extraout_w11_01;
  int extraout_w11_02;
  undefined4 extraout_var;
  undefined4 uVar14;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  long *extraout_x12;
  long *plVar15;
  long *unaff_x19;
  long unaff_x20;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *unaff_x27;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  undefined1 auStack_18 [16];
  long lStack_8;
  
  func_0x00010b1ec024();
  func_0x00010b1eb648();
  FUN_10b1b8c14(auStack_18,*param_2 + 0x2a0);
  lVar12 = lStack_8;
  FUN_10b1b8c30(lStack_8,*(undefined8 *)(unaff_x20 + 8));
  plVar10 = (long *)(lVar12 + 0x120);
  func_0x000107c278c4(plVar10,*(undefined8 *)(unaff_x20 + 0x10));
  plVar20 = *(long **)(lVar12 + 0x110);
  plVar5 = plVar10;
  if (plVar20 != (long *)0x0) {
    uVar19 = (long)plVar20 - 1;
    if (((ulong)plVar20 & uVar19) == 0) {
      unaff_x27 = (long *)(uVar19 & (ulong)plVar10);
      in_ZR = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)plVar10 - (long)plVar20 < 0;
      in_ZR = plVar10 == plVar20;
      unaff_x27 = plVar10;
      if (plVar20 <= plVar10) {
        func_0x00010b1ee2e4();
      }
    }
    plVar16 = *(long **)(*(long *)(lVar12 + 0x108) + (long)unaff_x27 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_10b1be8a0;
          plVar9 = (long *)plVar16[1];
          in_NG = (long)plVar9 - (long)plVar10 < 0;
          in_ZR = plVar9 == plVar10;
          if (!(bool)in_ZR) break;
          plVar5 = plVar16 + 2;
          func_0x00010b1eda08();
          if (((ulong)plVar5 & 1) != 0) goto LAB_10b1beac4;
        }
        if (((ulong)plVar20 & uVar19) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar19);
        }
        else if (plVar20 <= plVar9) {
          uVar1 = 0;
          if (plVar20 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)plVar20;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar20);
        }
        in_NG = (long)plVar9 - (long)unaff_x27 < 0;
        in_ZR = plVar9 == unaff_x27;
      } while ((bool)in_ZR);
    }
  }
LAB_10b1be8a0:
  func_0x00010b1edc98();
  plVar16 = (long *)(lVar12 + 0x118);
  uStack_190 = 0;
  plVar9 = plVar5 + 2;
  *plVar5 = 0;
  plVar5[1] = (long)plVar10;
  plStack_1a0 = plVar5;
  plStack_198 = plVar16;
  func_0x00010b1ec9d4();
  plVar5[5] = 0;
  plVar5[6] = 0;
  uStack_190 = CONCAT71(uStack_190._1_7_,1);
  func_0x00010b1ebbc8(*(undefined8 *)(lVar12 + 0x120));
  if ((plVar20 != (long *)0x0) && (func_0x00010b1ebbbc(), plVar18 = unaff_x27, !(bool)in_NG))
  goto LAB_10b1bea5c;
  func_0x00010b1ed6d4();
  bVar3 = (long *)0x2 < plVar20;
  bVar4 = plVar20 == (long *)0x3;
  func_0x00010b1eaeec();
  plVar18 = extraout_x8;
  if (!bVar3 || bVar4) {
    plVar18 = extraout_x9;
  }
  if ((long)plVar18 - 1U == 0) {
    plVar18 = (long *)0x2;
  }
  else if (((ulong)plVar18 & (long)plVar18 - 1U) != 0) {
    func_0x00010b1edda4();
    plVar18 = plVar9;
  }
  plVar20 = *(long **)(lVar12 + 0x110);
  if (plVar20 < plVar18) {
LAB_10b1be924:
    if ((ulong)plVar18 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1beb84);
      (*pcVar2)();
    }
    lVar11 = (long)plVar18 << 3;
    __Znwm(lVar11);
    FUN_10b1d5e48(lVar12 + 0x108,lVar11);
    plVar20 = (long *)0x0;
    *(long **)(lVar12 + 0x110) = plVar18;
    while (plVar18 != plVar20) {
      func_0x00010b1ebda4();
      plVar20 = extraout_x9_00;
    }
    plVar20 = plVar18;
    if (*plVar16 != 0) {
      func_0x00010b1ec57c();
      func_0x00010b1ed4a4();
      *(long **)(extraout_x8_00 + CONCAT44(extraout_var,extraout_w11) * 8) = plVar16;
      lVar11 = extraout_x8_00;
      uVar19 = extraout_x9_01;
      plVar9 = extraout_x10;
      uVar13 = extraout_w11;
      uVar14 = extraout_var;
      while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
        plVar15 = (long *)plVar9[1];
        if (((ulong)plVar18 & uVar19) == 0) {
          plVar15 = (long *)((ulong)plVar15 & uVar19);
        }
        else if (plVar18 <= plVar15) {
          uVar1 = 0;
          if (plVar18 != (long *)0x0) {
            uVar1 = (ulong)plVar15 / (ulong)plVar18;
          }
          plVar15 = (long *)((long)plVar15 - uVar1 * (long)plVar18);
        }
        if (plVar15 != (long *)CONCAT44(uVar14,uVar13)) {
          if (*(long *)(lVar11 + (long)plVar15 * 8) == 0) {
            func_0x00010b1ebf54();
            lVar11 = extraout_x8_02;
            uVar19 = extraout_x9_03;
            plVar9 = extraout_x12;
            uVar13 = extraout_w11_01;
            uVar14 = extraout_var_01;
          }
          else {
            func_0x00010b1ead88();
            lVar11 = extraout_x8_01;
            uVar19 = extraout_x9_02;
            plVar9 = extraout_x10_00;
            uVar13 = extraout_w11_00;
            uVar14 = extraout_var_00;
          }
        }
      }
    }
  }
  else if (plVar18 < plVar20) {
    func_0x00010b1ebdb0((float)*(ulong *)(lVar12 + 0x120),*(undefined4 *)(lVar12 + 0x128));
    if ((plVar20 < (long *)0x3) || (((ulong)plVar20 & (long)plVar20 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010b1ead68();
    }
    if (plVar18 <= plVar9) {
      plVar18 = plVar9;
    }
    if (plVar18 < plVar20) {
      if (plVar18 != (long *)0x0) goto LAB_10b1be924;
      FUN_10b1d5e48(lVar12 + 0x108,0);
      *(undefined8 *)(lVar12 + 0x110) = 0;
      plVar20 = (long *)0x0;
    }
    else {
      plVar20 = *(long **)(lVar12 + 0x110);
    }
  }
  if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
    in_ZR = 1;
    plVar18 = (long *)((long)plVar20 - 1U & (ulong)plVar10);
  }
  else {
    in_ZR = plVar10 == plVar20;
    plVar18 = plVar10;
    if (plVar20 <= plVar10) {
      func_0x00010b1ee2e4();
      plVar18 = unaff_x27;
    }
  }
LAB_10b1bea5c:
  lVar11 = *(long *)(lVar12 + 0x108);
  if (*(long *)(lVar11 + (long)plVar18 * 8) == 0) {
    *plVar5 = *plVar16;
    *plVar16 = (long)plVar5;
    *(long **)(lVar11 + (long)plVar18 * 8) = plVar16;
    if (*plVar5 != 0) {
      func_0x00010b1ed484();
      if ((bool)in_ZR) {
        plVar10 = (long *)((ulong)extraout_x9_04 & extraout_x10_01);
      }
      else {
        plVar10 = extraout_x9_04;
        if (plVar20 <= extraout_x9_04) {
          uVar19 = 0;
          if (plVar20 != (long *)0x0) {
            uVar19 = (ulong)extraout_x9_04 / (ulong)plVar20;
          }
          plVar10 = (long *)((long)extraout_x9_04 - uVar19 * (long)plVar20);
        }
      }
      *(long **)(extraout_x8_03 + (long)plVar10 * 8) = plVar5;
    }
  }
  else {
    func_0x00010b1ec534();
  }
  plStack_1a0 = (long *)0x0;
  *(long *)(lVar12 + 0x120) = *(long *)(lVar12 + 0x120) + 1;
  FUN_10b1d5e60(&plStack_1a0);
  plVar16 = plVar5;
LAB_10b1beac4:
  lVar12 = plVar16[5];
  uVar8 = lVar12 == 0;
  if ((bool)uVar8) {
    func_0x00010b1c4ea8(&plStack_1a0,*(undefined8 *)(unaff_x20 + 0x10));
    puVar6 = (undefined8 *)0x1d0;
    __Znwm();
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar7 = puVar6;
    func_0x00010b1ec504();
    puVar17 = puVar7 + 3;
    *puVar17 = extraout_x8_04;
    *puVar7 = &PTR_FUN_110cc3a28;
    func_0x00010b1eb2bc();
    puVar7[10] = 0;
    FUN_10b1d5ed8(puVar7 + 0xb,&plStack_1a0);
    puStack_28 = puVar17;
    puStack_20 = puVar6;
    func_0x00010b1d5d2c(plVar16 + 5,&puStack_28);
    func_0x00010b1edad8();
    func_0x00010b1ed358();
    lVar11 = plVar16[6];
    lVar12 = plVar16[5];
    unaff_x19[1] = plVar16[6];
    *unaff_x19 = lVar12;
  }
  else {
    lVar11 = plVar16[6];
    *unaff_x19 = lVar12;
    unaff_x19[1] = lVar11;
  }
  if (lVar11 != 0) {
    do {
      func_0x00010b1eaf98();
      uVar8 = extraout_w8;
    } while (extraout_w11_02 != 0);
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar8;
  func_0x000107c2798c(auStack_18);
  return;
}



/* Entry: 10b1bebd0; end: 10b1bebeb;  */

void FUN_10b1bebd0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b1eb580();
  *(undefined8 *)(param_1 + 0x10) = unaff_x19;
  return;
}



/* Entry: 10b1bebec; end: 10b1bedaf;  */

void FUN_10b1bebec(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined *param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar11;
  ulong extraout_x8_02;
  long extraout_x9;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 auStack_648 [96];
  undefined1 auStack_5e8 [8];
  undefined8 uStack_5e0;
  undefined1 auStack_5d8 [96];
  char cStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
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
  undefined1 auStack_4e0 [112];
  undefined8 uStack_470;
  undefined1 auStack_468 [96];
  undefined1 uStack_408;
  undefined1 auStack_400 [112];
  long alStack_390 [13];
  byte bStack_328;
  long lStack_320;
  undefined1 auStack_318 [96];
  byte bStack_2b8;
  ulong *puStack_2b0;
  undefined1 uStack_2a8;
  undefined1 auStack_2a0 [144];
  int iStack_210;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [16];
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined1 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = auStack_1f0;
  puVar7 = param_3;
  puVar9 = param_4;
  func_0x00010b1eae28();
  uVar4 = *(ulong *)(puVar7 + 0x10);
  uStack_48 = extraout_x8;
  func_0x000107c278d0(uVar4,puVar9);
  if ((uVar4 & 1) == 0) {
    FUN_10b1b8c14(auStack_1d8,unaff_x19 + 0x2a0);
    lVar5 = lStack_1c8;
    func_0x00010b1ebfcc();
    lVar12 = lVar5 + 0x108;
    FUN_10b1e4440(lVar12,param_4);
    if (lVar12 != 0) {
      lVar5 = lVar5 + 0x108;
      FUN_10b1e4440(lVar5,*(undefined8 *)(param_3 + 0x10));
      if (lVar5 != 0) {
        uStack_180 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_78 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        uStack_1c0 = 0;
        uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
        uStack_170 = 0;
        uStack_178 = 0;
        uStack_160 = 0;
        uStack_168 = 0;
        uStack_158 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_63 = 0;
        FUN_10b1b92e0(*(undefined8 *)(param_3 + 0x10),&uStack_1c0);
        FUN_10b1b96e4(&uStack_1c0);
        puStack_1a0 = (undefined1 *)0x0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        FUN_10b1be194(param_3,&uStack_1c0);
        func_0x00010b1ebe64();
        uVar16 = *(undefined8 *)(lVar12 + 0x30);
        uVar11 = *(undefined8 *)(lVar12 + 0x28);
        if (*(long *)(lVar12 + 0x30) != 0) {
          do {
            func_0x00010b1eb124();
          } while (extraout_w10 != 0);
        }
        uStack_1b8 = *(undefined8 *)(lVar5 + 0x30);
        uStack_1c0 = *(undefined8 *)(lVar5 + 0x28);
        *(undefined8 *)(lVar5 + 0x30) = uVar16;
        *(undefined8 *)(lVar5 + 0x28) = uVar11;
        func_0x00010b1de708(&uStack_1c0);
        func_0x00010b1ebd14();
        puVar9 = &UNK_10f731b03;
        func_0x00010b1eb884(&uStack_1c0);
        func_0x00010b1eb654(auStack_1f0,&uStack_1c0);
        func_0x00010b1eb040();
        func_0x00010b1ebff4();
        func_0x00010b1eb5ac(&uStack_1c0);
        puVar7 = puVar8;
      }
    }
    func_0x00010b1eb9bc();
  }
  func_0x00010b1eaddc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eb5a0();
  FUN_10b120998();
  func_0x00010b1eb5ac(&uStack_1c0);
  func_0x00010b1eb9bc();
  func_0x00010b1eb590();
  pcVar10 = FUN_10b1bedb0;
  func_0x00010b1ec024();
  puStack_1a0 = &stack0xfffffffffffffff0;
  pcStack_198 = pcVar10;
  func_0x00010b1eae84();
  func_0x00010bccbc98(auStack_648);
  func_0x00010b1ec434();
  lVar12 = extraout_x8_00;
  if (extraout_x9 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar12 = extraout_x8_01;
    } while (extraout_w11 != 0);
  }
  FUN_10b1fc31c(auStack_5e8,*(undefined8 *)(lVar12 + 0x10),puVar7,puVar9);
  uStack_470 = 0;
  auStack_468[0] = 0;
  uStack_408 = 0;
  if (cStack_578 == '\0') {
    uVar11 = 0;
  }
  else {
    FUN_10b1d60c8(auStack_468,auStack_5d8);
    FUN_10b1d6184(auStack_5d8);
    uVar11 = uStack_470;
  }
  uStack_470 = uStack_5e0;
  uStack_5e0 = uVar11;
  FUN_10b1d6058(auStack_400,&uStack_470);
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  FUN_10b1d6058(auStack_4e0,&uStack_550);
  func_0x00010b1ecdf4();
  FUN_10b1d6328(&lStack_320,auStack_400);
  FUN_10b1d6328(alStack_390,auStack_4e0);
  puStack_2b0 = &uStack_570;
  uStack_2a8 = 0;
  while ((((bStack_2b8 & 1) != 0 || ((bStack_328 & 1) != 0)) && (lStack_320 != alStack_390[0]))) {
    if ((bStack_2b8 & 1) == 0) {
      func_0x00010b1eb9a4(auStack_2a0);
      func_0x00010b1ee27c();
      func_0x00010b1eb224();
      func_0x00010b1eb3c8();
      func_0x00010b1ebf08();
      func_0x00010b1ebf10();
    }
    if (uStack_568 < uStack_560) {
      FUN_10b1d60e4(uStack_568,auStack_318);
      uVar13 = uStack_568 + 0x60;
    }
    else {
      lVar12 = uStack_568 - uStack_570;
      if (0x2aaaaaaaaaaaaaa < lVar12 / 0x60 + 1U) {
        FUN_10b1d61d4();
        goto LAB_10b1bf114;
      }
      func_0x00010b1eb414((long)(uStack_560 - uStack_570) / 0x60);
      uVar4 = extraout_x9_00;
      if (0x155555555555554 < extraout_x8_02) {
        uVar4 = 0x2aaaaaaaaaaaaaa;
      }
      if (uVar4 == 0) {
        lVar5 = 0;
      }
      else {
        if (0x2aaaaaaaaaaaaaa < uVar4) {
          func_0x000104bd35f4();
          goto LAB_10b1bf114;
        }
        lVar5 = uVar4 * 0x60;
        __Znwm();
      }
      lVar12 = lVar5 + lVar12;
      FUN_10b1d60e4(lVar12,auStack_318);
      uVar2 = uStack_568;
      uVar14 = uStack_570;
      uVar15 = lVar12 + ((long)(uStack_568 - uStack_570) / -0x60) * 0x60;
      uVar6 = uVar15;
      for (uVar13 = uStack_570; uVar13 != uVar2; uVar13 = uVar13 + 0x60) {
        FUN_10b1d60e4(uVar6,uVar13);
        uVar6 = uVar6 + 0x60;
      }
      for (; uVar14 != uVar2; uVar14 = uVar14 + 0x60) {
        FUN_10b1de578(uVar14);
      }
      uVar13 = lVar12 + 0x60;
      uStack_560 = lVar5 + uVar4 * 0x60;
      bVar1 = uStack_570 != 0;
      uStack_570 = uVar15;
      if (bVar1) {
        uStack_568 = uVar13;
        __ZdlPv();
      }
    }
    uStack_568 = uVar13;
    FUN_10b1d61e0(&lStack_320);
  }
  uStack_2a8 = 1;
  FUN_10b1d62bc(&puStack_2b0);
  func_0x00010b1ebe6c(alStack_390);
  FUN_10b1d63b8(auStack_318);
  func_0x00010b1ebe6c(auStack_4e0);
  func_0x00010b1eda30();
  func_0x00010b1ebe6c(auStack_400);
  func_0x00010b1ebe6c(&uStack_470);
  uStack_570 = 0;
  uStack_568 = 0;
  uStack_560 = 0;
  FUN_10b1d63d8(&uStack_570);
  FUN_10b1d63fc(auStack_5e8);
  func_0x00010b1ebd30();
  func_0x00010b1ece08();
  func_0x00010b1ebf18();
  func_0x00010b1ecd94();
  uVar3 = 1;
  func_0x00010b1ec5ec();
  iStack_210 = 0;
  func_0x00010b1ed07c();
  func_0x00010b1ed704();
  if (iStack_210 == 0) {
    func_0x00010b1ec934();
    func_0x00010b1ecd88();
    if ((bool)uVar3) {
      func_0x00010b1ec3c8();
    }
  }
  else {
    uVar3 = iStack_210 == 1;
    if (!(bool)uVar3) goto LAB_10b1bf110;
    func_0x00010b1ec934();
  }
  func_0x00010b1ed07c();
  func_0x00010b1ec3f0();
  FUN_10b1d6474();
  func_0x00010b1ec678();
  func_0x00010b1eadc4();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1bf110:
  func_0x00010563ab98();
LAB_10b1bf114:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10b1bf118);
  (*pcVar10)();
}



/* Entry: 10b1bedb0; end: 10b1bf24f;  */

void FUN_10b1bedb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar8;
  ulong extraout_x8_01;
  long extraout_x9;
  ulong extraout_x9_00;
  int extraout_w11;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_458 [96];
  undefined1 auStack_3f8 [8];
  undefined8 uStack_3f0;
  undefined1 auStack_3e8 [96];
  char cStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [112];
  undefined8 uStack_280;
  undefined1 auStack_278 [96];
  undefined1 uStack_218;
  undefined1 auStack_210 [112];
  long alStack_1a0 [13];
  byte bStack_138;
  long lStack_130;
  undefined1 auStack_128 [96];
  byte bStack_c8;
  ulong *puStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [144];
  int iStack_20;
  
  func_0x00010b1ec024();
  func_0x00010b1eae84();
  func_0x00010bccbc98(auStack_458);
  func_0x00010b1ec434();
  lVar9 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar9 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  FUN_10b1fc31c(auStack_3f8,*(undefined8 *)(lVar9 + 0x10),param_3,param_4);
  uStack_280 = 0;
  auStack_278[0] = 0;
  uStack_218 = 0;
  if (cStack_388 == '\0') {
    uVar8 = 0;
  }
  else {
    FUN_10b1d60c8(auStack_278,auStack_3e8);
    FUN_10b1d6184(auStack_3e8);
    uVar8 = uStack_280;
  }
  uStack_280 = uStack_3f0;
  uStack_3f0 = uVar8;
  FUN_10b1d6058(auStack_210,&uStack_280);
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  FUN_10b1d6058(auStack_2f0,&uStack_360);
  func_0x00010b1ecdf4();
  FUN_10b1d6328(&lStack_130,auStack_210);
  FUN_10b1d6328(alStack_1a0,auStack_2f0);
  puStack_c0 = &uStack_380;
  uStack_b8 = 0;
  while ((((bStack_c8 & 1) != 0 || ((bStack_138 & 1) != 0)) && (lStack_130 != alStack_1a0[0]))) {
    if ((bStack_c8 & 1) == 0) {
      func_0x00010b1eb9a4(auStack_b0);
      func_0x00010b1ee27c();
      func_0x00010b1eb224();
      func_0x00010b1eb3c8();
      func_0x00010b1ebf08();
      func_0x00010b1ebf10();
    }
    if (uStack_378 < uStack_370) {
      FUN_10b1d60e4(uStack_378,auStack_128);
      uVar10 = uStack_378 + 0x60;
    }
    else {
      lVar9 = uStack_378 - uStack_380;
      if (0x2aaaaaaaaaaaaaa < lVar9 / 0x60 + 1U) {
        FUN_10b1d61d4();
        goto LAB_10b1bf114;
      }
      func_0x00010b1eb414((long)(uStack_370 - uStack_380) / 0x60);
      uVar2 = extraout_x9_00;
      if (0x155555555555554 < extraout_x8_01) {
        uVar2 = 0x2aaaaaaaaaaaaaa;
      }
      if (uVar2 == 0) {
        lVar6 = 0;
      }
      else {
        if (0x2aaaaaaaaaaaaaa < uVar2) {
          func_0x000104bd35f4();
          goto LAB_10b1bf114;
        }
        lVar6 = uVar2 * 0x60;
        __Znwm();
      }
      lVar9 = lVar6 + lVar9;
      FUN_10b1d60e4(lVar9,auStack_128);
      uVar3 = uStack_378;
      uVar11 = uStack_380;
      uVar12 = lVar9 + ((long)(uStack_378 - uStack_380) / -0x60) * 0x60;
      uVar7 = uVar12;
      for (uVar10 = uStack_380; uVar10 != uVar3; uVar10 = uVar10 + 0x60) {
        FUN_10b1d60e4(uVar7,uVar10);
        uVar7 = uVar7 + 0x60;
      }
      for (; uVar11 != uVar3; uVar11 = uVar11 + 0x60) {
        FUN_10b1de578(uVar11);
      }
      uVar10 = lVar9 + 0x60;
      uStack_370 = lVar6 + uVar2 * 0x60;
      bVar1 = uStack_380 != 0;
      uStack_380 = uVar12;
      if (bVar1) {
        uStack_378 = uVar10;
        __ZdlPv();
      }
    }
    uStack_378 = uVar10;
    FUN_10b1d61e0(&lStack_130);
  }
  uStack_b8 = 1;
  FUN_10b1d62bc(&puStack_c0);
  func_0x00010b1ebe6c(alStack_1a0);
  FUN_10b1d63b8(auStack_128);
  func_0x00010b1ebe6c(auStack_2f0);
  func_0x00010b1eda30();
  func_0x00010b1ebe6c(auStack_210);
  func_0x00010b1ebe6c(&uStack_280);
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_370 = 0;
  FUN_10b1d63d8(&uStack_380);
  FUN_10b1d63fc(auStack_3f8);
  func_0x00010b1ebd30();
  func_0x00010b1ece08();
  func_0x00010b1ebf18();
  func_0x00010b1ecd94();
  uVar5 = 1;
  func_0x00010b1ec5ec();
  iStack_20 = 0;
  func_0x00010b1ed07c();
  func_0x00010b1ed704();
  if (iStack_20 == 0) {
    func_0x00010b1ec934();
    func_0x00010b1ecd88();
    if ((bool)uVar5) {
      func_0x00010b1ec3c8();
    }
  }
  else {
    uVar5 = iStack_20 == 1;
    if (!(bool)uVar5) goto LAB_10b1bf110;
    func_0x00010b1ec934();
  }
  func_0x00010b1ed07c();
  func_0x00010b1ec3f0();
  FUN_10b1d6474();
  func_0x00010b1ec678();
  func_0x00010b1eadc4();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1bf110:
  func_0x00010563ab98();
LAB_10b1bf114:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10b1bf118);
  (*pcVar4)();
}



/* Entry: 10b1bf250; end: 10b1bf2af;  */

int * FUN_10b1bf250(long param_1)

{
  int *piVar1;
  int *piVar2;
  long unaff_x19;
  long unaff_x20;
  int *piVar3;
  int *piVar4;
  
  func_0x00010b1eb648();
  piVar1 = *(int **)(param_1 + 0x50);
  for (piVar4 = *(int **)(param_1 + 0x48); piVar3 = piVar1, piVar4 != piVar1; piVar4 = piVar4 + 0x22
      ) {
    if (*piVar4 == *(int *)(unaff_x20 + 0x18)) {
      piVar2 = piVar4 + 2;
      func_0x000107c278d0();
      piVar3 = piVar4;
      if (((ulong)piVar2 & 1) != 0) break;
    }
  }
  piVar4 = (int *)0x0;
  if (piVar3 != *(int **)(unaff_x19 + 0x50)) {
    piVar4 = piVar3;
  }
  return piVar4;
}



/* Entry: 10b1bf2b0; end: 10b1bf2cf;  */

long FUN_10b1bf2b0(long param_1,long param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if (*(long *)(param_1 + 0x30) == 0) break;
    param_1 = param_1 + 0x88;
  }
  return param_1;
}



/* Entry: 10b1bf2d0; end: 10b1bf2fb;  */

void FUN_10b1bf2d0(long param_1)

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



/* Entry: 10b1bf2fc; end: 10b1bf317;  */

void FUN_10b1bf2fc(void)

{
  undefined1 uStack_11;
  
  FUN_10b1e4508(&uStack_11);
  return;
}



/* Entry: 10b1bf318; end: 10b1bf377;  */

void FUN_10b1bf318(void)

{
  undefined1 in_ZR;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  
  func_0x00010b1ec39c();
  FUN_10b1c8174();
  func_0x00010b1ed3e4();
  if ((bool)in_ZR && extraout_x9 != 0) {
    func_0x00010b1ec758();
    func_0x00010b1ec6bc();
    if (extraout_x9_00 != 0) {
      do {
        func_0x00010b1eaf98();
      } while (extraout_w11 != 0);
    }
    func_0x00010b1eba10();
    func_0x00010b1ed348();
    func_0x00010b1eb9bc();
  }
  return;
}



/* Entry: 10b1bf378; end: 10b1bf627;  */

undefined ***
FUN_10b1bf378(undefined ***param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  char cVar1;
  undefined1 in_ZR;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_58;
  
  func_0x00010b1ec3fc();
  lVar5 = *(long *)(param_3 + 0x10);
  if ((*(byte *)(lVar5 + 0x40) & 1) == 0) {
    uVar8 = *(undefined8 *)(param_4 + 0x20);
    uVar7 = *(undefined8 *)(param_4 + 0x18);
    uVar10 = *(undefined8 *)(param_4 + 0x30);
    uVar9 = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(param_4 + 0x38);
    *(undefined8 *)(lVar5 + 0x30) = uVar10;
    *(undefined8 *)(lVar5 + 0x28) = uVar9;
    *(undefined8 *)(lVar5 + 0x20) = uVar8;
    *(undefined8 *)(lVar5 + 0x18) = uVar7;
    *(undefined1 *)(lVar5 + 0x40) = 1;
    lVar5 = *(long *)(unaff_x21 + 0x10);
    *(undefined8 *)(lVar5 + 0x38) = 0;
  }
  if (((param_5 == 0) && ((*(byte *)(param_4 + 0x168) & 1) != 0)) &&
     ((*(byte *)(param_4 + 0x138) & 1) != 0)) {
    uStack_88 = 0;
    uStack_90 = 0;
    ppuStack_98 = &PTR_FUN_110cfd560;
    uStack_58 = 0;
    puStack_80 = &DAT_11383d918;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puVar3 = (undefined8 *)(*(ulong *)(*(long *)(param_4 + 0x140) + 0x10) & 0xfffffffffffffffc);
    lVar5 = (long)*(char *)((long)puVar3 + 0x17);
    puVar4 = puVar3;
    if (lVar5 < 0) {
      puVar4 = (undefined8 *)*puVar3;
      lVar5 = puVar3[1];
    }
    func_0x000107c30344(&ppuStack_98,puVar4,lVar5);
    *(undefined4 *)(param_4 + 0x78) = (undefined4)uStack_68;
    cVar1 = *(char *)(((ulong)puStack_80 & 0xfffffffffffffffc) + 0x17);
    if (cVar1 < '\0') {
      if (*(long *)(((ulong)puStack_80 & 0xfffffffffffffffc) + 8) != 0) goto LAB_10b1bf464;
    }
    else if (cVar1 != '\0') {
LAB_10b1bf464:
      in_ZR = *(char *)(param_4 + 0x120) == '\x01';
      if ((bool)in_ZR) {
        uVar6 = *(ulong *)(param_4 + 0xc0) & 0xfffffffffffffffc;
        lVar5 = (long)*(char *)(uVar6 + 0x17);
        if (lVar5 < 0) {
          lVar5 = *(long *)(uVar6 + 8);
        }
        if (lVar5 != 0) goto LAB_10b1bf4cc;
      }
      else {
        FUN_10b1bd950(param_4 + 0x80);
      }
      uVar6 = uStack_90;
      if ((uStack_90 & 1) != 0) {
        uVar6 = *(ulong *)(uStack_90 & 0xfffffffffffffffe);
      }
      ppuVar2 = &puStack_80;
      func_0x000107c30250(ppuVar2,uVar6);
      uVar6 = *(ulong *)(param_4 + 0x88);
      if ((uVar6 & 1) != 0) {
        uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c(param_4 + 0xc0,ppuVar2,uVar6);
    }
LAB_10b1bf4cc:
    param_1 = &ppuStack_98;
    FUN_10b523f08();
    lVar5 = *(long *)(unaff_x21 + 0x10);
  }
  func_0x00010b1ee218(lVar5);
  if (!(bool)in_ZR) goto joined_r0x00010b1bf50c;
  if (*(char *)(param_4 + 0x120) == '\x01') {
LAB_10b1bf4f0:
    if (*(long *)(param_4 + 0x100) == 0) {
      __ZNSt3__16chrono12system_clock3nowEv();
      *(long *)(param_4 + 0x100) = (long)param_1 / 1000;
      uStack_90 = 0;
      uStack_88 = 0;
      ppuStack_98 = (undefined **)0x0;
      if (*(char *)(param_4 + 0x120) != '\x01') goto LAB_10b1bf548;
    }
    else {
      func_0x00010b1ee400();
    }
    FUN_10b1e45d8(param_4 + 0x80,&ppuStack_98);
  }
  else {
    if (*(long *)(extraout_x8 + 0xe0) != *(long *)(extraout_x8 + 0xe8)) goto joined_r0x00010b1bf50c;
    param_1 = (undefined ***)(param_4 + 0x80);
    FUN_10b1bd950();
    if ((*(byte *)(param_4 + 0x120) & 1) != 0) goto LAB_10b1bf4f0;
    func_0x00010b1ee400();
  }
LAB_10b1bf548:
  param_1 = (undefined ***)(extraout_x8 + 0xc0);
  FUN_10b1bf628(param_1,&ppuStack_98,1);
  func_0x00010b1ecaf0();
joined_r0x00010b1bf50c:
  if ((param_5 & 1) == 0) {
    __ZNSt3__16chrono12system_clock3nowEv();
    func_0x00010b1ec8f8();
    func_0x00010b1ecbc0();
    FUN_10b1bf660();
    func_0x00010b1ec248();
    func_0x00010b123e24(param_1,param_4 + 0x40);
    param_1[6] = (undefined **)0x0;
    if (((*(byte *)(param_4 + 0x168) & 1) != 0) || (param_1[0xd] == param_1[0xe])) {
      FUN_10b1bfa28(&ppuStack_98,param_4 + 0x128);
      FUN_10b1bf9f0(param_1 + 9,&ppuStack_98);
      func_0x00010b1ecaf0();
    }
  }
  else {
    param_1 = (undefined ***)0x0;
  }
  return param_1;
}



/* Entry: 10b1bf628; end: 10b1bf65f;  */

void FUN_10b1bf628(int param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b1eb63c();
  FUN_10b1dea14();
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



/* Entry: 10b1bf660; end: 10b1bf9ef;  */

void FUN_10b1bf660(long param_1,undefined8 param_2,long param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,long param_9,
                  long param_10,long param_11)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long lVar9;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long *plVar10;
  undefined8 *extraout_x9_00;
  undefined8 *puVar11;
  ulong extraout_x10;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 unaff_x30;
  long in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000070;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  
  func_0x00010b1ee61c();
  puVar11 = &stack0x00000030;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&stack0x000000b8,param_4 + 2);
  in_stack_000000e8 = *param_4;
  in_stack_000000d8 = in_stack_000000c0;
  in_stack_000000d0 = in_stack_000000b8;
  in_stack_000000e0 = in_stack_000000c8;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  lVar5 = *(long *)(param_3 + 0x10);
  FUN_10b1bf250(lVar5,&stack0x000000d0);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_3 + 0x10);
    func_0x00010b1edf40();
    in_stack_00000070 = param_5;
    func_0x00010b1ec048();
    FUN_10b1d5c00(lVar5 + 0x48,&stack0x00000030);
    func_0x00010b1ed180();
    lVar5 = *(long *)(*(long *)(param_3 + 0x10) + 0x50) + -0x88;
    bVar4 = true;
  }
  else {
    if (param_7 == 0) goto LAB_10b1bf96c;
    lVar13 = *(long *)(lVar5 + 0x30);
    func_0x00010b1edf40();
    in_NG = lVar13 < 0;
    in_ZR = lVar13 == 0;
    bVar4 = 0 < lVar13;
    in_stack_00000070 = param_5;
    func_0x00010b1ec048();
    FUN_10b1bfac8(lVar5,&stack0x00000030);
    func_0x00010b1ed180();
  }
  FUN_10b1b8c14(&stack0x00000018,param_1 + 0x2a0);
  if (bVar4) {
    lVar13 = in_stack_00000028;
    func_0x00010b1ebfcc();
    lVar13 = lVar13 + 0xb0;
    FUN_10b1e4614(lVar13,param_4);
    if (lVar13 != 0) {
      *(long *)(lVar13 + 0x18) = *(long *)(lVar13 + 0x18) + 1;
    }
  }
  lVar13 = in_stack_00000028;
  func_0x00010b1ebfcc();
  FUN_10b1bd4d0();
  puVar6 = (undefined8 *)(lVar13 + 0x40);
  func_0x000107c278c4();
  puVar14 = *(undefined8 **)(lVar13 + 0x30);
  if (puVar14 != (undefined8 *)0x0) {
    uVar15 = (long)puVar14 - 1;
    if (((ulong)puVar14 & uVar15) == 0) {
      puVar11 = (undefined8 *)(uVar15 & (ulong)puVar6);
      in_ZR = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)puVar6 - (long)puVar14 < 0;
      in_ZR = puVar6 == puVar14;
      puVar11 = puVar6;
      if (puVar14 <= puVar6) {
        func_0x00010b1ee2e4();
      }
    }
    plVar12 = *(long **)(*(long *)(lVar13 + 0x28) + (long)puVar11 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10b1bf828;
          puVar8 = (undefined8 *)plVar12[1];
          in_NG = (long)puVar8 - (long)puVar6 < 0;
          in_ZR = puVar8 == puVar6;
          if (!(bool)in_ZR) break;
          plVar7 = plVar12 + 2;
          func_0x000107c278d0();
          if (((ulong)plVar7 & 1) != 0) {
            bVar4 = false;
            goto LAB_10b1bf94c;
          }
        }
        if (((ulong)puVar14 & uVar15) == 0) {
          puVar8 = (undefined8 *)((ulong)puVar8 & uVar15);
        }
        else if (puVar14 <= puVar8) {
          uVar2 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            uVar2 = (ulong)puVar8 / (ulong)puVar14;
          }
          puVar8 = (undefined8 *)((long)puVar8 - uVar2 * (long)puVar14);
        }
        in_NG = (long)puVar8 - (long)puVar11 < 0;
        in_ZR = puVar8 == puVar11;
      } while ((bool)in_ZR);
    }
  }
LAB_10b1bf828:
  plVar12 = (long *)0x40;
  __Znwm();
  plVar7 = (long *)(lVar13 + 0x38);
  in_stack_00000040 = 0;
  *plVar12 = 0;
  plVar12[1] = (long)puVar6;
  plVar12[3] = param_10;
  plVar12[2] = param_9;
  plVar12[4] = param_11;
  in_stack_00000030 = plVar12;
  in_stack_00000038 = plVar7;
  func_0x00010b1ed830();
  func_0x00010b1ec9d4(plVar12 + 5);
  in_stack_00000040 = CONCAT71(in_stack_00000040._1_7_,1);
  func_0x00010b1ebbc8(*(undefined8 *)(lVar13 + 0x40));
  if ((puVar14 == (undefined8 *)0x0) || (func_0x00010b1ebbbc(), puVar8 = puVar11, (bool)in_NG)) {
    func_0x00010b1ed6d4();
    bVar3 = (undefined8 *)0x2 < puVar14;
    bVar4 = puVar14 == (undefined8 *)0x3;
    func_0x00010b1eaeec();
    uVar1 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar1 = extraout_x9;
    }
    func_0x000107c278d8(lVar13 + 0x28,uVar1);
    puVar14 = *(undefined8 **)(lVar13 + 0x30);
    if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
      in_ZR = 1;
      puVar8 = (undefined8 *)((long)puVar14 - 1U & (ulong)puVar6);
    }
    else {
      in_ZR = puVar6 == puVar14;
      puVar8 = puVar6;
      if (puVar14 <= puVar6) {
        func_0x00010b1ee2e4();
        puVar8 = puVar11;
      }
    }
  }
  plVar12 = in_stack_00000030;
  lVar9 = *(long *)(lVar13 + 0x28);
  plVar10 = *(long **)(lVar9 + (long)puVar8 * 8);
  if (plVar10 == (long *)0x0) {
    *in_stack_00000030 = *plVar7;
    *plVar7 = (long)in_stack_00000030;
    *(long **)(lVar9 + (long)puVar8 * 8) = plVar7;
    if (*in_stack_00000030 != 0) {
      func_0x00010b1ed484();
      if ((bool)in_ZR) {
        puVar11 = (undefined8 *)((ulong)extraout_x9_00 & extraout_x10);
      }
      else {
        puVar11 = extraout_x9_00;
        if (puVar14 <= extraout_x9_00) {
          uVar15 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            uVar15 = (ulong)extraout_x9_00 / (ulong)puVar14;
          }
          puVar11 = (undefined8 *)((long)extraout_x9_00 - uVar15 * (long)puVar14);
        }
      }
      *(long **)(extraout_x8_00 + (long)puVar11 * 8) = plVar12;
    }
  }
  else {
    *in_stack_00000030 = *plVar10;
    *plVar10 = (long)in_stack_00000030;
  }
  in_stack_00000030 = (long *)0x0;
  *(long *)(lVar13 + 0x40) = *(long *)(lVar13 + 0x40) + 1;
  func_0x000107c278dc(&stack0x00000030);
  bVar4 = true;
LAB_10b1bf94c:
  func_0x00010b1eb738();
  if ((!bVar4) && (*(long *)(param_4 + 0xc) == 0)) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (plVar12 + 5,*(undefined8 *)(param_3 + 0x10));
  }
  func_0x00010b1eb9bc();
LAB_10b1bf96c:
  func_0x00010b1ecd20();
  func_0x00010b1ee600(lVar5,unaff_x30);
  return;
}



/* Entry: 10b1bf9f0; end: 10b1bfa27;  */

void FUN_10b1bf9f0(void)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b1eb63c();
  func_0x00010b1eb184();
  func_0x00010b1d5bdc();
  func_0x00010b1ecd18();
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



/* Entry: 10b1bfa28; end: 10b1bfac7;  */

void FUN_10b1bfa28(long param_1,long param_2)

{
  char cVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b1eb648();
  if (((*(byte *)(param_2 + 0x40) & 1) == 0) &&
     (param_1 = unaff_x20, func_0x00010b114b5c(), (*(byte *)(unaff_x20 + 0x40) & 1) == 0)) {
    func_0x00010b1ec2c8();
  }
  else {
    if (*(long *)(unaff_x20 + 0x28) == 0) {
      __ZNSt3__16chrono12system_clock3nowEv();
      *(long *)(unaff_x20 + 0x28) = param_1 / 1000;
      cVar1 = *(char *)(unaff_x20 + 0x40);
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      *unaff_x19 = 0;
      if (cVar1 != '\x01') {
        return;
      }
    }
    else {
      func_0x00010b1ec2c8();
    }
    FUN_10b2501c4();
    func_0x000107c2823c();
    FUN_10b4d1758();
  }
  return;
}



/* Entry: 10b1bfac8; end: 10b1bfb2f;  */

void FUN_10b1bfac8(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b1eb63c();
  FUN_10b121638();
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  func_0x00010b1d5bdc(&uStack_30);
  FUN_10b12157c(unaff_x20 + 0x58,unaff_x19 + 0x58);
  func_0x000107c3194c(unaff_x20 + 0x68,unaff_x19 + 0x68);
  *(undefined1 *)(unaff_x20 + 0x80) = *(undefined1 *)(unaff_x19 + 0x80);
  return;
}



/* Entry: 10b1bfb30; end: 10b1bff7f;  */

void FUN_10b1bfb30(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined4 extraout_w8;
  long lVar4;
  long unaff_x21;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  char cStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  byte bStack_d8;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar2 = param_4;
  func_0x00010b1ebd38();
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(param_4 + 8) == 0) goto LAB_10b1bfb94;
LAB_10b1bfb70:
    func_0x00010b1ebdc8(&uStack_88);
    func_0x00010b1eb674();
  }
  else {
    if (*(char *)(uVar2 + 0x17) != '\0') goto LAB_10b1bfb70;
LAB_10b1bfb94:
    func_0x00010b1ec0f0(&uStack_88);
  }
  uStack_120 = 0;
  uStack_118 = 0;
  FUN_10b12157c(param_3 + 0x1c8,&uStack_120);
  func_0x00010b12186c(&uStack_120);
  if (uStack_78 == 0) goto LAB_10b1bff04;
  if ((((param_5 & 1) == 0) && (*(char *)(unaff_x21 + 0x75) == '\x01')) &&
     (*(long *)(uStack_78 + 0x48) != *(long *)(uStack_78 + 0x50))) {
    if ((*(byte *)(uStack_78 + 0x161) & 1) == 0) {
      func_0x00010b1ebdc8();
      func_0x00010b1ed958();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_a0,param_4 + 0x48);
    uStack_158 = *(undefined4 *)(param_4 + 0x40);
    uStack_168 = uStack_98;
    uStack_170 = uStack_a0;
    uStack_160 = uStack_90;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    uVar2 = uStack_78;
    FUN_10b1bf250(uStack_78,&uStack_170);
    if (((*(byte *)(uStack_78 + 0x40) & 1) == 0) && (uVar2 == 0)) {
      func_0x00010b1ead30();
      func_0x00010b1eb274();
      func_0x00010b1ebe5c();
      goto LAB_10b1bff0c;
    }
    uStack_c8 = uStack_88;
    uStack_c0 = uStack_80;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_b8 = uStack_78;
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_10b1bb3c8(&uStack_120);
    func_0x00010b1d3e60(&uStack_c8);
    uStack_120 = CONCAT62(uStack_120._2_6_,CONCAT11((undefined1)uStack_120,(undefined1)uStack_120))
                 ^ 0x100;
    uVar2 = param_4;
    FUN_10b1c0aa8(param_4,&uStack_120);
    if ((uVar2 & 1) == 0) {
      func_0x00010b1ead30();
      func_0x00010b1eb274();
    }
    else {
      FUN_10b1be194(&uStack_88,&uStack_110);
    }
    func_0x00010b1d3e60(&uStack_110);
    func_0x00010b1ebe5c();
    if ((int)uVar2 == 0) goto LAB_10b1bff0c;
  }
  if (*(char *)(uStack_78 + 0x40) == '\x01') {
    if (*(long *)(uStack_78 + 0x38) == 0) {
      if (((*(byte *)(uStack_78 + 0x160) & 1) == 0) &&
         (uVar2 = uStack_78, func_0x00010b1eda08(), (int)uVar2 == 0)) {
        if ((param_5 & 1) == 0) {
LAB_10b1bff04:
          func_0x00010b1ead30();
          func_0x00010b1eb274();
          goto LAB_10b1bff0c;
        }
      }
      else {
        uStack_148 = uStack_88;
        uStack_140 = uStack_80;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_128 = uStack_68;
        uStack_130 = uStack_70;
        uStack_70 = 0;
        uStack_68 = 0;
        func_0x00010b1ebdc8(&uStack_120);
        func_0x00010b1ebe44();
        FUN_10b1d6520(&uStack_120);
        func_0x00010b1ecf14();
        if (((bStack_d8 & 1) == 0) && ((param_5 & 1) == 0)) goto LAB_10b1bff04;
        uStack_100 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        func_0x00010b1edae0();
        func_0x00010b1ebfb4();
      }
    }
    if (uStack_78 == 0) {
      lVar4 = (long)*(char *)(param_4 + 0x17);
      if (lVar4 < 0) {
        lVar4 = *(long *)(param_4 + 8);
      }
      if (lVar4 == 0) {
        func_0x00010b1ec0f0(&uStack_120);
      }
      else {
        func_0x00010b1ebdc8(&uStack_120);
        func_0x00010b1eb674();
      }
      func_0x00010b1edae0();
      func_0x00010b1ebfb4();
    }
  }
  uStack_170 = uStack_170 & 0xffffffffffffff00;
  cStack_150 = '\0';
  if (*(char *)(param_3 + 0x58) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_188,param_3 + 0x20);
    uStack_118 = uStack_180;
    uStack_120 = uStack_188;
    uStack_110 = uStack_178;
    func_0x00010b1ee400(*(undefined4 *)(param_3 + 0x18));
    uStack_108 = CONCAT44(uStack_108._4_4_,extraout_w8);
    if (cStack_150 == '\x01') {
      func_0x000107c27b9c(&uStack_170,&uStack_120);
      uStack_158 = (undefined4)uStack_108;
    }
    else {
      uStack_168 = uStack_118;
      uStack_170 = uStack_120;
      uStack_160 = uStack_110;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_120 = 0;
      cStack_150 = '\x01';
      uStack_158 = extraout_w8;
    }
    func_0x00010b1ed224();
    func_0x00010b1ebfd4();
  }
  uVar2 = uStack_78;
  func_0x00010b1eda08();
  if ((uVar2 & 1) == 0) {
    puVar3 = &uStack_120;
    FUN_10b202630(puVar3,param_3);
    uVar1 = (uint)puVar3;
    func_0x00010b1ec8f8();
    func_0x00010b1ebdc8();
    FUN_10b1c17ec();
    func_0x00010b1ec248();
    func_0x00010b1ed22c();
    if (((param_5 & 1) != 0) || ((uVar1 >> 8 & 1) == 0)) goto LAB_10b1bfe64;
    func_0x00010b1ead30();
    func_0x00010b1eb274();
  }
  else {
LAB_10b1bfe64:
    FUN_10b1b953c(uStack_78,1);
    func_0x00010b1ebdc8();
    FUN_10b1bf378();
    func_0x00010b1ec7a0();
    FUN_10b1bd97c();
  }
  FUN_10b0f7ab4(&uStack_170);
LAB_10b1bff0c:
  func_0x00010b1ec494();
  return;
}



/* Entry: 10b1bff80; end: 10b1c0aa7;  */

void FUN_10b1bff80(void)

{
  undefined **ppuVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  code ****ppppcVar9;
  undefined8 in_x3;
  long *in_x4;
  long *plVar10;
  uint in_w5;
  undefined1 extraout_w8;
  long extraout_x8;
  ulong extraout_x8_00;
  int extraout_w11;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  ulong *unaff_x21;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_448 [24];
  code ***pppcStack_430;
  undefined1 auStack_428 [8];
  undefined8 *puStack_420;
  long lStack_418;
  undefined8 uStack_410;
  ulong uStack_3f0;
  ulong uStack_3e8;
  undefined1 auStack_3d8 [24];
  byte bStack_3c0;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  byte bStack_338;
  byte bStack_330;
  undefined1 auStack_320 [28];
  uint uStack_304;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  undefined1 uStack_2c8;
  undefined1 auStack_2b8 [16];
  undefined1 uStack_2a8;
  long alStack_2a0 [10];
  long lStack_250;
  long lStack_248;
  code **ppcStack_240;
  undefined **ppuStack_238;
  undefined8 *puStack_230;
  ulong uStack_228;
  undefined1 auStack_220 [8];
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long alStack_1f8 [6];
  int iStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_170;
  undefined8 uStack_168;
  code ***pppcStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  byte abStack_d0 [208];
  
  func_0x00010b1ec024();
  uVar13 = in_x3;
  plVar10 = in_x4;
  func_0x00010b1ec874();
  func_0x00010b1eae28();
  uStack_304 = (uint)uVar13;
  FUN_10b1bd4d0(auStack_320,uVar13,plVar10);
  func_0x00010b1eca58(&uStack_228);
  uVar11 = uStack_218;
  func_0x00010b1ec1f4();
  uStack_f8 = uStack_f8 & 0xffffffffffffff00;
  uStack_e0 = uStack_e0 & 0xffffffffffffff00;
  lVar12 = uVar11 + 0x28;
  func_0x000107c28108(lVar12,auStack_320);
  if (lVar12 != 0) {
    func_0x000107c27b98(&uStack_f8,lVar12 + 0x28);
  }
  uVar11 = uStack_218;
  func_0x00010b1ec1f4();
  uStack_350 = uStack_350 & 0xffffffffffffff00;
  uVar4 = (char)uStack_e0 == '\x01';
  if ((bool)uVar4) {
    uStack_348 = uStack_f0;
    uStack_350 = uStack_f8;
    uStack_340 = uStack_e8;
    uStack_e8 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
  }
  bStack_330 = *(byte *)(uVar11 + 0x50);
  bStack_338 = uVar4;
  func_0x000107c279a4(&uStack_f8);
  func_0x000107c2798c(&uStack_228);
  func_0x00010b1ec9d4(&uStack_388);
  uStack_368 = uStack_380;
  uStack_370 = uStack_388;
  uStack_360 = uStack_378;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_388 = 0;
  uStack_358 = (undefined4)in_x3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_388);
  func_0x000107c279a0(auStack_3d8,&uStack_350);
  func_0x00010b1ecb18();
  func_0x000104bff97c(&uStack_228,&uStack_350);
  FUN_10b1c4900(&uStack_f8,&stack0xfffffffffffffc48,&uStack_228);
  func_0x00010b1eccb0();
  if ((uStack_e8 == 0) || ((abStack_d0[0] & 1) == 0)) {
    func_0x00010b1d3e60(&uStack_f8);
    bVar3 = bStack_3c0;
    uVar4 = (bStack_330 & bStack_3c0) == 0;
    if ((!(bool)uVar4) && (lVar12 = unaff_x20[0x47], lVar12 != 0)) {
      FUN_10b12983c(&uStack_f8,in_x3);
      func_0x00010b1ebd14();
      func_0x00010b1eb884(abStack_d0);
      func_0x00010b1eb930(&uStack_228,&uStack_f8);
      func_0x00010b1eb040(lVar12);
      FUN_10b120998(&uStack_228);
      lVar12 = 0x38;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                  ((long)&uStack_f8 + lVar12);
        lVar12 = lVar12 + -0x28;
      } while (lVar12 != -0x18);
      uVar4 = true;
    }
    if ((bStack_330 & 1) == 0) goto LAB_10b1c01d8;
    if (bVar3 == 0) goto LAB_10b1c0520;
    if ((bRam00000001137f4130 & 1) == 0) goto LAB_10b1c07cc;
    goto LAB_10b1c01cc;
  }
  *unaff_x19 = uStack_f8;
  *(undefined1 *)(unaff_x19 + 1) = (undefined1)uStack_f0;
  uStack_f8 = 0;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  unaff_x19[2] = uStack_e8;
  unaff_x19[4] = uStack_d8;
  unaff_x19[3] = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x00010b1d3e60(&uStack_f8);
LAB_10b1c079c:
  do {
    func_0x000107c279a4(auStack_3d8);
    func_0x00010b1ed294();
    func_0x000107c279a4(&uStack_350);
    func_0x00010b1ec998();
    func_0x00010b1eadc4();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
LAB_10b1c07cc:
    iVar5 = 0x137f4130;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      bVar3 = 0x78;
      func_0x000107c2be10();
      bRam00000001137f40f8 = bVar3;
      func_0x00010b1ebd84(0x1137f4130);
    }
LAB_10b1c01cc:
    if ((bRam00000001137f40f8 & 1) != 0) {
LAB_10b1c01d8:
      uVar11 = (ulong)uStack_304;
      func_0x00010b1ec6ac(&pppcStack_430);
      func_0x000107c27f70(&uStack_300,in_x4);
      auStack_2b8[0] = 0;
      uStack_2a8 = 0;
      func_0x00010bccbc98(alStack_2a0,unaff_x20 + 0x10,&UNK_10f738755,0x4b);
      lVar12 = *(long *)(alStack_2a0[0] + 8);
      lStack_248 = *(long *)(alStack_2a0[0] + 0x10);
      lStack_250 = lVar12;
      if (lStack_248 != 0) {
        do {
          func_0x00010b1eaf98();
          lVar12 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      FUN_10b1fbed0(&uStack_f8,*(undefined8 *)(lVar12 + 0x10),&pppcStack_430,uVar11 | 0x100000000,
                    &uStack_300);
      FUN_10b1d4fe0(&ppcStack_240,&uStack_f8);
      ppuStack_158 = ppuStack_238;
      pppcStack_160 = (code ***)ppcStack_240;
      uStack_150 = puStack_230;
      func_0x00010b1ee4d0();
      FUN_10b1d4f78(&ppcStack_240);
      FUN_10b1d57fc(&uStack_f8);
      FUN_10b1b7824(&lStack_250);
      func_0x00010bccbe4c(alStack_2a0);
      func_0x00010bccbdb4(alStack_2a0);
      FUN_10b1d5864(&uStack_228,&pppcStack_160);
      func_0x00010b1ecdec();
      if (iStack_1c8 == 1) {
        func_0x00010b1d58c8(&uStack_228);
        pppcStack_160 = (code ***)((ulong)pppcStack_160 & 0xffffffffffffff00);
        lStack_148 = (ulong)lStack_148._1_7_ << 8;
        if (iStack_1c8 != 1) goto LAB_10b1c02f0;
        FUN_10b1d5900(&uStack_2e0,&pppcStack_160);
      }
      else {
        pppcStack_160 = (code ***)((ulong)pppcStack_160 & 0xffffffffffffff00);
        lStack_148 = (ulong)lStack_148._1_7_ << 8;
LAB_10b1c02f0:
        puVar6 = &uStack_228;
        func_0x00010b1d58e4();
        uStack_2e0 = uStack_2e0 & 0xffffffffffffff00;
        uStack_2c8 = 0;
        if ((char)puVar6[3] == '\x01') {
          uStack_2d8 = puVar6[1];
          uStack_2e0 = *puVar6;
          uStack_2d0 = puVar6[2];
          func_0x00010b1eb5fc();
          uStack_2c8 = extraout_w8;
        }
      }
      func_0x00010b1ecdec();
      FUN_10b1d59f8(auStack_220);
      FUN_10b1b78d0(auStack_2b8);
      func_0x000107c279a4(&uStack_300);
      func_0x00010b1ec204();
      func_0x00010b1ee548(uStack_2c8);
      uVar11 = uStack_2d8;
      if ((extraout_x8_00 & 1) != 0) {
        for (lVar12 = uStack_2e0 + 0x20; lVar12 - 0x20U != uVar11; lVar12 = lVar12 + 200) {
          if (*(char *)(lVar12 + 0x18) == '\x01') {
            if (*(char *)(lVar12 + 0x17) < '\0') {
              if (*(long *)(lVar12 + 8) == 0) goto LAB_10b1c0464;
            }
            else if (*(char *)(lVar12 + 0x17) == '\0') {
LAB_10b1c0464:
              uVar13 = unaff_x20[0x47];
              func_0x00010b1ebd14(&uStack_228);
              FUN_10b123d58();
              func_0x00010b1eb654(&pppcStack_160,&uStack_228);
              func_0x00010b1eb040(uVar13);
              FUN_10b120998(&pppcStack_160);
              func_0x00010b1edbd0();
              goto LAB_10b1c04a0;
            }
            FUN_10b1c46b8(&uStack_228,lVar12 - 0x20U,unaff_x20[0x47]);
            if (alStack_1f8[0] == 0) {
              func_0x000107c281e8(&uStack_3f0,lVar12);
            }
            FUN_10b1be528(&pppcStack_160,unaff_x20,unaff_x21,lVar12);
            pppcStack_430 = pppcStack_160;
            auStack_428[0] = ppuStack_158._0_1_;
            pppcStack_160 = (code ***)0x0;
            ppuStack_158 = (undefined **)((ulong)ppuStack_158 & 0xffffffffffffff00);
            lStack_418 = lStack_148;
            puStack_420 = uStack_150;
            uStack_410 = uStack_140;
            lStack_148 = 0;
            uStack_140 = 0;
            func_0x00010b1d3e60(&pppcStack_160);
            if (puStack_420 != (undefined8 *)0x0) {
              uStack_2f8 = uStack_1b8;
              uStack_300 = uStack_1c0;
              uStack_2f0 = uStack_1b0;
              uStack_1b8 = 0;
              uStack_1b0 = 0;
              uStack_1c0 = 0;
              func_0x00010b1ebebc();
              func_0x00010b1ed90c();
              func_0x000107c27914(&uStack_300);
            }
            func_0x00010b1ebe64();
            FUN_10b1d5ca0(&uStack_228);
          }
LAB_10b1c04a0:
        }
      }
      FUN_10b1d59d8(&uStack_2e0);
      uVar2 = uStack_3e8;
      for (uVar11 = uStack_3f0; uVar4 = uVar11 == uVar2, !(bool)uVar4; uVar11 = uVar11 + 0x18) {
        uVar4 = bStack_3c0 == 1;
        if ((!(bool)uVar4) ||
           (uVar7 = uVar11, func_0x000107c278d0(uVar11,auStack_3d8), (uVar7 & 1) == 0)) {
          FUN_10b1c4900(&uStack_228,&stack0xfffffffffffffc48,uVar11);
          if (uStack_218 != 0) {
            if ((uStack_200 & 1) != 0) {
              *unaff_x19 = uStack_228;
              *(undefined1 *)(unaff_x19 + 1) = auStack_220[0];
              uStack_228 = 0;
              auStack_220[0] = 0;
              unaff_x19[2] = uStack_218;
              unaff_x19[4] = uStack_208;
              unaff_x19[3] = uStack_210;
              uStack_210 = 0;
              uStack_208 = 0;
              func_0x00010b1eccb8();
              func_0x00010b1ed0a4();
              goto LAB_10b1c079c;
            }
            if ((bStack_3c0 & 1) == 0) {
              func_0x000107c27b98(auStack_3d8,uVar11);
            }
          }
          func_0x00010b1eccb8();
        }
      }
      func_0x00010b1ed0a4();
    }
LAB_10b1c0520:
    func_0x00010b1ecb18();
    func_0x000104bff97c(&pppcStack_160,auStack_3d8);
    FUN_10b1c4900(&uStack_228,&stack0xfffffffffffffc48,&pppcStack_160);
    *unaff_x19 = uStack_228;
    *(undefined1 *)(unaff_x19 + 1) = auStack_220[0];
    uStack_228 = 0;
    auStack_220[0] = 0;
    unaff_x19[3] = uStack_210;
    unaff_x19[2] = uStack_218;
    unaff_x19[4] = uStack_208;
    uStack_208 = 0;
    uStack_210 = 0;
    func_0x00010b1eccb8();
    func_0x00010b1eda74();
  } while (unaff_x19[2] != 0);
  func_0x00010b1ed314();
  uVar4 = 0;
  if ((uStack_304 == 0x28) && (uVar4 = *(char *)((long)unaff_x20 + 0x63b) == '\x01', (bool)uVar4)) {
    uStack_358 = 0x10;
    func_0x00010b1ec2e0();
    FUN_10b1bff80();
    uVar11 = unaff_x19[2];
    if ((uVar11 != 0) && (FUN_10b1bf250(uVar11,&uStack_370), uVar11 != 0)) {
      func_0x00010b125750(&pppcStack_430,uVar11);
      pppcStack_430 = (code ***)CONCAT44(pppcStack_430._4_4_,0x28);
      puVar8 = auStack_448;
      func_0x000107c27994(puVar8,uVar11 + 0x68);
      func_0x00010b1ebebc();
      func_0x00010b1ed90c();
      func_0x00010b1ecaf0();
      puVar8[0x80] = 0;
      in_x4 = (long *)unaff_x20[0xd9];
      func_0x00010b1ec1fc(&uStack_228);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_210,unaff_x19[2]);
      unaff_x21 = &uStack_228;
      FUN_10b1d66ac(alStack_1f8,puVar8);
      unaff_x20 = &uStack_170;
      func_0x00010b1ee038();
      pppcStack_160 = (code ***)FUN_10b1e4d44;
      ppuStack_158 = &PTR_FUN_110cc4300;
      func_0x00010b1ee030();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
      unaff_x20[4] = uStack_208;
      unaff_x20[3] = uStack_210;
      unaff_x20[5] = uStack_200;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_210 = 0;
      FUN_10b1d5b20(unaff_x20 + 6,alStack_1f8);
      unaff_x20[0x18] = uStack_168;
      unaff_x20[0x17] = uStack_170;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_150 = unaff_x20;
      (**(code **)(*in_x4 + 0x10))(in_x4,&pppcStack_160);
      func_0x00010b1ed2c4();
      func_0x00010b1c499c(&uStack_228);
      ppppcVar9 = (code ****)auStack_428;
      goto LAB_10b1c0784;
    }
    func_0x00010b1ed314();
  }
  if ((((bStack_338 & 1) == 0) && ((bStack_330 & 1) != 0)) && ((in_w5 >> 0x10 & 1) == 0)) {
    func_0x00010b1ec41c();
    goto LAB_10b1c079c;
  }
  FUN_10b1c49c4(&pppcStack_160,&uStack_304,in_x4);
  uVar4 = uStack_150._7_1_ == 0;
  ppuVar1 = ppuStack_158;
  ppppcVar9 = (code ****)pppcStack_160;
  if (-1 < (long)uStack_150) {
    ppuVar1 = (undefined **)(ulong)uStack_150._7_1_;
    ppppcVar9 = &pppcStack_160;
  }
  FUN_10b205f70(&uStack_228,ppppcVar9,ppuVar1);
  func_0x00010b1ebebc();
  FUN_10b1baed4();
  func_0x00010b1eccb0();
  ppppcVar9 = &pppcStack_160;
LAB_10b1c0784:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppcVar9);
  goto LAB_10b1c079c;
}



/* Entry: 10b1c0aa8; end: 10b1c0d1f;  */

undefined8 * FUN_10b1c0aa8(void)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  bool bVar7;
  byte bVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  int in_stack_00000068;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  func_0x00010b1ee638();
  func_0x00010b1eb63c();
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000078 = &stack0x00000080;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&stack0x00000038,unaff_x20 + 0x48);
  in_stack_00000068 = *(int *)(unaff_x20 + 0x40);
  in_stack_00000058 = in_stack_00000040;
  in_stack_00000050 = in_stack_00000038;
  in_stack_00000060 = in_stack_00000048;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000038);
  FUN_10b1c8104(&stack0x00000078,&stack0x00000068);
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if (lVar9 != 0) {
    piVar10 = *(int **)(lVar9 + 0x48);
    piVar1 = *(int **)(lVar9 + 0x50);
    if (piVar10 != piVar1) {
      for (; piVar10 != piVar1; piVar10 = piVar10 + 0x22) {
        if (*(long *)(piVar10 + 0xc) < 1) {
          if (*piVar10 == in_stack_00000068) {
            piVar5 = piVar10 + 2;
            func_0x000107c278d0(piVar5,&stack0x00000050);
            if (((int)piVar5 == 0) && ((*(byte *)(unaff_x19 + 1) & 1) != 0)) goto LAB_10b1c0cb4;
            if ((int)piVar5 == 0) {
              bVar7 = false;
            }
            else if (*(long *)(unaff_x20 + 0x68) == *(long *)(piVar10 + 10)) {
              bVar7 = true;
              puVar11 = (undefined8 *)0x1;
              if (*(char *)(unaff_x20 + 0x60) == (char)piVar10[8]) goto LAB_10b1c0cc8;
            }
            else {
              bVar7 = true;
            }
          }
          else {
            bVar7 = false;
            puVar11 = (undefined8 *)0x0;
            if ((*(byte *)(unaff_x19 + 1) & 1) != 0) goto LAB_10b1c0cc8;
          }
          if (((((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x40) & 1) == 0) &&
               (iVar4 = *piVar10, iVar4 != in_stack_00000068)) &&
              (iVar4 != 4 || in_stack_00000068 != 0x10)) &&
             (iVar4 != 0x10 || in_stack_00000068 != 4)) goto LAB_10b1c0cb4;
          if (!bVar7) {
            if (((bRam00000001137f4140 & 1) == 0) &&
               (iVar4 = 0x137f4140, ___cxa_guard_acquire(), iVar4 != 0)) {
              bVar8 = 0xc0;
              func_0x000107c2be10();
              bRam00000001137f40fa = bVar8;
              func_0x00010b1ebd84(0x1137f4140);
            }
            if ((bRam00000001137f40fa & 1) != 0) {
              FUN_10b1c8174(&stack0x00000008,piVar10 + 0x12);
              if (*(long *)(piVar10 + 0x1a) == *(long *)(piVar10 + 0x1c)) {
LAB_10b1c0c44:
                bVar8 = 0;
              }
              else {
                puVar6 = &stack0x00000008;
                FUN_10b1c8334();
                if (puVar6 == (undefined1 *)0x0) goto LAB_10b1c0c44;
                bVar8 = puVar6[0x38];
              }
              bVar2 = *(byte *)(unaff_x20 + 0x168);
              bVar3 = *(byte *)(unaff_x20 + 0x160);
              func_0x00010b121b8c(&stack0x00000008);
              if ((bVar8 & 1) != (bVar2 & bVar3 & 1)) goto LAB_10b1c0cb4;
            }
          }
          if (*(long *)(unaff_x19 + 8) != 0) {
            FUN_10b1d75ec(*(long *)(unaff_x19 + 8),*piVar10);
          }
          FUN_10b1c8104(&stack0x00000078,piVar10);
        }
      }
      puVar11 = &stack0x00000078;
      FUN_10b205960(puVar11);
      goto LAB_10b1c0cc8;
    }
  }
LAB_10b1c0cb4:
  puVar11 = (undefined8 *)0x0;
LAB_10b1c0cc8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000050);
  FUN_10b1e56ac(&stack0x00000078);
  return puVar11;
}



/* Entry: 10b1c0d20; end: 10b1c17eb;  */

void FUN_10b1c0d20(long *param_1,undefined8 param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined1 uVar7;
  long *plVar8;
  code **ppcVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 *extraout_x10;
  undefined8 *puVar12;
  uint *puVar13;
  long *plVar14;
  long lVar15;
  long *aplStack_220 [2];
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  long *plStack_1d0;
  undefined5 uStack_1c8;
  uint uStack_1c3;
  uint uStack_1bf;
  undefined3 uStack_1bb;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long alStack_178 [3];
  long lStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  ulong uStack_148;
  undefined4 uStack_140;
  undefined8 auStack_138 [3];
  undefined1 auStack_120 [24];
  long lStack_108;
  undefined8 uStack_100;
  ushort uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long *plStack_b0;
  undefined5 uStack_a8;
  undefined3 uStack_a3;
  undefined5 uStack_a0;
  undefined8 uStack_9b;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined **appuStack_68 [13];
  
  func_0x00010b1ec024();
  func_0x00010b1eae84();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_138);
  if (param_3[2] == 0) {
    func_0x00010b1ecb18();
    func_0x000107c278b8(auStack_120);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_120);
  }
  lVar11 = param_3[2];
  uVar7 = lVar11 == 0;
  puVar1 = (undefined8 *)&UNK_10e564628;
  if (!(bool)uVar7) {
    puVar1 = (undefined8 *)(lVar11 + 0x60);
  }
  puVar12 = &uStack_1b0;
  lStack_108 = 0;
  uStack_100 = *puVar1;
  uStack_f8 = 0;
  if (((lVar11 == 0) || (func_0x00010b1ecd0c(), puVar12 = extraout_x10, !(bool)uVar7)) ||
     (uVar7 = *(long *)(lVar11 + 0x38) == 1, 0 < *(long *)(lVar11 + 0x38))) {
    func_0x00010b1eb2cc(puVar12[0xf]);
    func_0x00010b1eb7e4();
    goto LAB_10b1c0dd0;
  }
  uStack_158 = 0;
  lStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_140 = 0x3f800000;
  plVar14 = alStack_178;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  lVar11 = param_3[2];
  if ((param_4 == 9) || (param_5 != 0)) {
LAB_10b1c0ea0:
    lStack_108 = *(long *)(lVar11 + 0x28);
    if ((*(char *)(lVar11 + 0x130) == '\x01') &&
       (*(long *)(lVar11 + 0x118) != *(long *)(lVar11 + 0x120))) {
      plVar14 = &lStack_188;
      FUN_10b1c1e40(plVar14,lVar11 + 0xf8,1);
    }
    else {
      lStack_188 = 0;
      uStack_180 = 0;
    }
    if ((uStack_f8 & 0x100) == 0) {
      __ZNSt3__16chrono12system_clock3nowEv();
      lVar11 = param_3[2];
      *(long **)(lVar11 + 0x38) = plVar14;
      *(undefined8 *)(lVar11 + 0x20) = 0;
      *(undefined8 *)(lVar11 + 0x28) = 0;
      puStack_f0 = (undefined *)0x0;
      puStack_e8 = (undefined *)0x0;
      puStack_e0 = (undefined *)0x0;
      FUN_10b1d4960(lVar11 + 0xf8,&puStack_f0,1);
      func_0x000107c27914(&puStack_f0);
    }
    lVar11 = param_3[2];
    uVar7 = *(char *)(lVar11 + 0x160) == '\x01';
    if ((bool)uVar7) {
      func_0x00010b1eb2cc(auStack_138[0]);
      func_0x00010b1eb7e4();
    }
    else {
      if ((char)param_1[0x4f] == '\x01') {
        plVar14 = param_1 + 0x4b;
        FUN_10b1c713c(plVar14,lVar11);
        uVar2 = (uint)plVar14 ^ 1;
        lVar11 = param_3[2];
        if (param_4 == 9) {
          uVar2 = 1;
        }
        if (((uVar2 & 1) != 0) || (*(int *)(lVar11 + 0x88) < 1)) goto LAB_10b1c0fb0;
        plVar14 = param_1 + 0x4b;
        lVar15 = lVar11 + 0x68;
        FUN_10b1ef16c();
        lVar11 = param_3[2];
      }
      else {
LAB_10b1c0fb0:
        plVar14 = (long *)0x0;
        lVar15 = 0;
      }
      uVar7 = param_4 == 4;
      if ((bool)uVar7) {
        *(undefined1 *)(lVar11 + 0x164) = 1;
      }
      if (*(long *)(lVar11 + 0x150) != 0) {
        FUN_10b204844();
        lVar11 = param_3[2];
      }
      uVar5 = *(undefined4 *)(lVar11 + 0x18);
      uStack_1b0 = *param_3;
      uStack_1a8 = *(undefined1 *)(param_3 + 1);
      *param_3 = 0;
      *(undefined1 *)(param_3 + 1) = 0;
      uStack_190 = param_3[4];
      uStack_198 = param_3[3];
      param_3[3] = 0;
      param_3[4] = 0;
      plVar8 = param_1;
      lStack_1a0 = lVar11;
      FUN_10b1bdc50(param_1,param_2,&uStack_1b0);
      func_0x00010b1ebfb4();
      if (((ulong)plVar8 & 1) == 0) {
        func_0x00010b1ec928();
      }
      else {
        uVar7 = plVar14 == (long *)0x1;
        if ((0 < (long)plVar14) && (uVar7 = param_1[0x50] == 1, 0 < param_1[0x50])) {
          plVar8 = param_1 + 0x4b;
          FUN_10b1efe88(plVar8,alStack_178);
          if ((int)plVar8 != 0) {
            func_0x00010b1ecae0(&puStack_210);
            ppuVar10 = &puStack_1f8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (ppuVar10,alStack_178);
            if (uStack_148 == 1) {
              uStack_1e0 = (undefined4)plStack_150[2];
            }
            else {
              uStack_1e0 = 5;
            }
            uVar7 = uStack_148 == 1;
            uStack_1dc = CONCAT31(uStack_1dc._1_3_,1 < uStack_148);
            iStack_1d8 = param_4;
            plStack_1d0 = plVar14;
            __ZNSt3__16chrono12system_clock3nowEv();
            uVar2 = uStack_1bf;
            puStack_e0 = puStack_200;
            uStack_1bf = uStack_1bf & 0xffffff;
            uStack_1b4 = (undefined1)((ulong)lVar15 >> 0x20);
            uStack_1b8 = (undefined4)lVar15;
            plVar14 = (long *)param_1[0xd9];
            puStack_e8 = puStack_208;
            puStack_f0 = puStack_210;
            puStack_210 = (undefined *)0x0;
            puStack_208 = (undefined *)0x0;
            uStack_1c8 = (undefined5)((long)ppuVar10 / 1000);
            uStack_1c3 = (uint)(uint3)((ulong)((long)ppuVar10 / 1000) >> 0x28);
            puStack_200 = (undefined *)0x0;
            puStack_d0 = puStack_1f0;
            puStack_d8 = puStack_1f8;
            puStack_c8 = puStack_1e8;
            puStack_1f8 = (undefined *)0x0;
            puStack_1f0 = (undefined *)0x0;
            puStack_1e8 = (undefined *)0x0;
            puStack_b8 = (undefined *)CONCAT44(uStack_1d4,iStack_1d8);
            puStack_c0 = (undefined *)CONCAT44(uStack_1dc,uStack_1e0);
            plStack_b0 = plStack_1d0;
            uStack_9b = CONCAT17(uStack_1b4,CONCAT43(uStack_1b8,uStack_1bb));
            uVar6 = CONCAT44(uVar2,uStack_1c3) & 0xffffffffffffff;
            uStack_a3 = (undefined3)uVar6;
            uStack_a0 = (undefined5)(uVar6 >> 0x18);
            uStack_a8 = uStack_1c8;
            FUN_10b1e3630(&puStack_90,param_1 + 1);
            pcStack_78 = FUN_10b1e6e64;
            ppuStack_70 = &PTR_FUN_110cc44a8;
            ppuVar10 = (undefined **)0x70;
            __Znwm();
            ppuVar10[1] = puStack_e8;
            *ppuVar10 = puStack_f0;
            ppuVar10[2] = puStack_e0;
            puStack_e8 = (undefined *)0x0;
            puStack_e0 = (undefined *)0x0;
            puStack_f0 = (undefined *)0x0;
            ppuVar10[4] = puStack_d0;
            ppuVar10[3] = puStack_d8;
            ppuVar10[5] = puStack_c8;
            puStack_d8 = (undefined *)0x0;
            puStack_d0 = (undefined *)0x0;
            puStack_c8 = (undefined *)0x0;
            ppuVar10[7] = puStack_b8;
            ppuVar10[6] = puStack_c0;
            ppuVar10[9] = (undefined *)CONCAT35(uStack_a3,uStack_a8);
            ppuVar10[8] = (undefined *)plStack_b0;
            *(undefined8 *)((long)ppuVar10 + 0x55) = uStack_9b;
            *(ulong *)((long)ppuVar10 + 0x4d) = CONCAT53(uStack_a0,uStack_a3);
            ppuVar10[0xd] = puStack_88;
            ppuVar10[0xc] = puStack_90;
            puStack_90 = (undefined *)0x0;
            puStack_88 = (undefined *)0x0;
            appuStack_68[0] = ppuVar10;
            func_0x00010b1edbc4(*(undefined8 *)(*plVar14 + 0x10));
            func_0x00010b1eb150(ppuStack_70);
            FUN_10b1c9c38(&puStack_f0);
            func_0x00010b1d7c84(&puStack_210);
          }
        }
        FUN_10b1c1ff0(aplStack_220,param_1,param_2,uVar5);
        if (aplStack_220[0] == (long *)0x0) {
LAB_10b1c13a8:
          ppuVar10 = &puStack_f0;
          for (plVar14 = plStack_150; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
            uVar5 = *(undefined4 *)(plVar14 + 2);
            lVar11 = param_1[0x47];
            func_0x00010b126fec(&puStack_f0,2);
            FUN_10b12983c(&puStack_c8,uVar5);
            func_0x00010b1ebd14(&uStack_a0);
            FUN_10b123d58();
            func_0x00010b1ebee0(&pcStack_78,&puStack_f0);
            func_0x00010b1eb040(lVar11);
            func_0x00010b1eba58();
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_90);
              func_0x00010b1ee484();
            } while (!(bool)uVar7);
          }
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&puStack_f0,alStack_178);
          func_0x00010b1ecab8(&pcStack_78,&puStack_f0);
          func_0x00010b1ec998();
          if (lStack_188 != 0) {
            func_0x00010b1ec9dc(&puStack_210);
            while (puStack_210 != (undefined *)0x0) {
              FUN_10b2026a0(&puStack_f0,alStack_178,puStack_210 + 8);
              func_0x000107c28274(&pcStack_78,&puStack_b8);
              func_0x00010b121e00(&puStack_f0);
              func_0x000107c27d54(&puStack_210);
            }
          }
          (**(code **)(*aplStack_220[0] + 0x60))(&puStack_f0,aplStack_220[0],&pcStack_78);
          ppuVar10 = (undefined **)0x0;
          for (plVar14 = (long *)puStack_e0; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
            uVar7 = *(int *)(plVar14 + 5) == 0;
            ppuVar10 = (undefined **)(ulong)((uint)!(bool)uVar7 | (uint)ppuVar10);
          }
          FUN_10b131cc0(&puStack_f0);
          func_0x000107c2826c(&pcStack_78);
          if ((uint)ppuVar10 != 0) goto LAB_10b1c13a8;
        }
        uVar7 = param_4 == 9;
        plVar14 = plStack_150;
        if (!(bool)uVar7) {
          for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
            lVar11 = param_1[0x47];
            func_0x00010b1ed8dc();
            func_0x00010b1ed3bc(&puStack_c8);
            func_0x00010b1eb284();
            func_0x00010b1eb5b4(lVar11,0x9d,&pcStack_78);
            func_0x00010b1eba58();
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_b8);
              func_0x00010b1ec03c();
            } while (!(bool)uVar7);
            lVar11 = param_1[0x47];
            func_0x00010b1ed8dc();
            func_0x00010b1ed3bc(&puStack_c8);
            func_0x00010b1eb284();
            FUN_10b114b00(lVar11,0x9e,&pcStack_78,lStack_108);
            func_0x00010b1eba58();
            ppuVar10 = (undefined **)0x38;
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_b8);
              func_0x00010b1ec03c();
            } while (!(bool)uVar7);
          }
          if (uStack_148 == 0) {
            lVar11 = param_1[0x47];
            func_0x00010b1ed1d4();
            func_0x00010b1ed3bc(ppuVar10 + 5);
            func_0x00010b1eb284();
            func_0x00010b1eb5b4(lVar11,0x9d,&pcStack_78);
            func_0x00010b1eba58();
            do {
              func_0x00010b1eca78();
              func_0x00010b1ec03c();
            } while (!(bool)uVar7);
            lVar11 = param_1[0x47];
            func_0x00010b1ed1d4();
            FUN_10b1e6ab0(0x60,param_4);
            func_0x00010b1eb284();
            FUN_10b114b00(lVar11,0x9e,&pcStack_78,lStack_108);
            func_0x00010b1eba58();
            do {
              func_0x00010b1eca78();
              func_0x00010b1ec03c();
            } while (!(bool)uVar7);
          }
        }
        FUN_10b1c3994(param_1,-lStack_108);
        func_0x00010b1eb2cc(auStack_138[0]);
        func_0x00010b1eb7e4();
        func_0x00010b1ecff8();
      }
    }
    FUN_10b1e4868(&lStack_188);
  }
  else {
    if ((*(long *)(lVar11 + 0x170) == 0) || (*(long *)(*(long *)(lVar11 + 0x170) + 8) == -1)) {
      if ((*(byte *)(lVar11 + 0x161) & 1) == 0) {
        plVar14 = param_1;
        func_0x00010b1ed958(param_1,param_2);
        lVar11 = param_3[2];
      }
      puVar13 = *(uint **)(lVar11 + 0x48);
      puVar4 = *(uint **)(lVar11 + 0x50);
      if (puVar4 != puVar13) {
        for (; puVar13 != puVar4; puVar13 = puVar13 + 0x22) {
          lVar11 = *(long *)(puVar13 + 0xc);
          puStack_e8 = (undefined *)(lVar11 / 1000);
          puStack_f0 = (undefined *)((ulong)(byte)puVar13[8] | (ulong)*puVar13 << 0x20);
          if (((byte)puVar13[8] == 1) && (uVar7 = lVar11 == 1000, lVar11 < 1000)) {
            func_0x00010b1ec928();
            goto LAB_10b1c1598;
          }
          plVar14 = &lStack_160;
          FUN_10b1c9c34(plVar14,(ulong)&puStack_f0 | 4);
        }
        lVar11 = param_3[2];
      }
      goto LAB_10b1c0ea0;
    }
    func_0x00010b1ed3bc(&puStack_f0);
    func_0x00010b1ebd14();
    func_0x00010b1eb884(&puStack_c8);
    func_0x00010b1eb284();
    lVar11 = 0x38;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((long)&puStack_f0 + lVar11);
      lVar11 = lVar11 + -0x28;
    } while (lVar11 != -0x18);
    puVar3 = *(undefined4 **)(param_3[2] + 0x48);
    uVar7 = 0;
    if (*(long *)(param_3[2] + 0x50) - (long)puVar3 == 0x88) {
      uVar7 = ppuStack_70 == appuStack_68[0];
      if (ppuStack_70 < appuStack_68[0]) {
        FUN_10b12983c(ppuStack_70,*puVar3);
        ppuStack_70 = ppuStack_70 + 5;
      }
      else {
        ppcVar9 = &pcStack_78;
        FUN_10b13c794(ppcVar9,((long)ppuStack_70 - (long)pcStack_78) / 0x28 + 1);
        FUN_10b13c7e4(&puStack_f0,ppcVar9,((long)ppuStack_70 - (long)pcStack_78) / 0x28,appuStack_68
                     );
        FUN_10b12983c(puStack_e0,*puVar3);
        puStack_e0 = (undefined *)((long)puStack_e0 + 0x28);
        func_0x00010b1b88c4(&pcStack_78,&puStack_f0);
        func_0x00010b13c8f4(&puStack_f0);
      }
    }
    func_0x00010b1eb040(param_1[0x47]);
    func_0x00010b1ec928();
    func_0x00010b1eba58();
  }
LAB_10b1c1598:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_178);
  func_0x000107c2be48(&lStack_160);
LAB_10b1c0dd0:
  func_0x00010b1286a4(auStack_138);
  func_0x00010b1eadc4();
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    func_0x00010b1eb6c4();
    func_0x00010b1ec40c();
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010b1ec0a4();
    } while (!(bool)uVar7);
    func_0x00010b1ecff8();
    FUN_10b1e4868(&lStack_188);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_178);
    func_0x000107c2be48(&lStack_160);
    func_0x00010b1286a4(auStack_138);
    do {
      func_0x00010b1eb590();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    } while( true );
  }
  return;
}



/* Entry: 10b1c17ec; end: 10b1c1bc7;  */

undefined1  [16]
FUN_10b1c17ec(undefined8 param_1,long *param_2,undefined8 *param_3,long param_4,undefined8 param_5,
             long *param_6,ulong param_7)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  char **ppcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  code *extraout_x8_01;
  code *extraout_x9;
  int extraout_w10;
  ulong uVar11;
  ulong unaff_x21;
  undefined8 uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 in_stack_00000050;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_340;
  ulong uStack_338;
  long *plStack_330;
  long *plStack_328;
  undefined8 **ppuStack_320;
  code *pcStack_318;
  long lStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_230 [24];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [24];
  char *pcStack_198;
  char *pcStack_190;
  char *pcStack_188;
  long alStack_180 [3];
  byte bStack_168;
  char *pcStack_f8;
  char *pcStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  char **ppcStack_68;
  undefined8 *puStack_60;
  
  func_0x00010b1ec024();
  puVar9 = param_3;
  func_0x00010b1eb8e4();
  func_0x00010b1eae84();
  func_0x00010b1ed4c4();
  func_0x00010b1eb674(&uStack_a0);
  if (puStack_90 == (undefined8 *)0x0) {
    uVar11 = 0;
    plVar13 = (long *)0x0;
    uVar12 = 0;
  }
  else {
    __ZNSt3__16chrono12system_clock3nowEv();
    pcStack_a8 = (char *)0x0;
    if ((param_4 != 0) && (puVar3 = puStack_90, func_0x00010b1eda00(), puVar3 != (undefined8 *)0x0))
    {
      if (puVar3[6] == 0) {
        puVar3[6] = param_1;
      }
      if (*param_6 != param_6[1]) {
        FUN_10b1bf9f0(puVar3 + 9,param_6);
      }
      in_ZR = *(char *)(puVar3 + 0x10) == '\x01';
      puVar9 = puStack_90;
      if ((!(bool)in_ZR) || ((*(byte *)(puStack_90 + 0x2c) & 1) == 0)) {
        func_0x00010b1eb6f8(auStack_1b0);
        FUN_10b1be290();
        FUN_10b1c76a8(&pcStack_a8,auStack_1b0);
        func_0x000107c29c20(auStack_1b0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_e8,param_3);
      uStack_b8 = *(undefined4 *)(param_4 + 0x18);
      uStack_c8 = uStack_e0;
      lStack_d0 = lStack_e8;
      uStack_c0 = uStack_d8;
      lStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_e8);
      param_2 = &lStack_d0;
      puVar3 = puStack_90;
      FUN_10b1bf250();
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[6] = param_1;
        in_ZR = *(char *)(puVar3 + 0x10) == '\x01';
        if ((!(bool)in_ZR) || ((*(byte *)(puStack_90 + 0x2c) & 1) == 0)) {
          *(undefined1 *)(puVar3 + 0x10) = 0;
          plVar13 = *(long **)(unaff_x21 + 0x6c8);
          func_0x00010b1ec76c(auStack_1b0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&pcStack_198,puStack_90);
          FUN_10b1d66ac(alStack_180,puVar3);
          ppcVar4 = &pcStack_f8;
          func_0x00010b1edffc();
          pcStack_78 = FUN_10b1e69dc;
          ppuStack_70 = &PTR_FUN_110cc4448;
          func_0x00010b1ee030();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
          ppcVar4[4] = pcStack_190;
          ppcVar4[3] = pcStack_198;
          ppcVar4[5] = pcStack_188;
          pcStack_190 = (char *)0x0;
          pcStack_188 = (char *)0x0;
          pcStack_198 = (char *)0x0;
          param_2 = alStack_180;
          FUN_10b1d5b20(ppcVar4 + 6);
          ppcVar4[0x18] = pcStack_f0;
          ppcVar4[0x17] = pcStack_f8;
          pcStack_f8 = (char *)0x0;
          pcStack_f0 = (char *)0x0;
          ppcStack_68 = ppcVar4;
          func_0x00010b1edbc4(*(undefined8 *)(*plVar13 + 0x10));
          func_0x00010b1ed134();
          func_0x00010b1c93ec(auStack_1b0);
        }
      }
      func_0x00010b1ec0b0();
    }
    pcStack_78 = FUN_10b1e6a34;
    ppuStack_70 = &PTR_FUN_110cc4460;
    ppcStack_68 = &pcStack_a8;
    puStack_60 = &uStack_a0;
    if ((((param_7 & 1) == 0) && (in_ZR = *(char *)(puStack_90 + 8) == '\x01', (bool)in_ZR)) &&
       (in_ZR = *(char *)((long)puStack_90 + 0x161) == '\x01', (bool)in_ZR)) {
      lVar10 = puStack_90[9];
      param_2 = (long *)puStack_90[10];
      FUN_10b1bf2b0();
      if (lVar10 != 0) goto LAB_10b1c1a18;
      uVar12 = puStack_90[5];
      uStack_1d8 = uStack_a0;
      uStack_1d0 = uStack_98;
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_1c8 = puStack_90;
      uStack_1b8 = uStack_80;
      uStack_1c0 = uStack_88;
      uStack_88 = 0;
      uStack_80 = 0;
      puVar9 = &uStack_1d8;
      func_0x00010b1eb6f8(auStack_1b0);
      func_0x00010b1ebe44();
      FUN_10b1d6520(auStack_1b0);
      func_0x00010b1ec1ec();
      if ((bStack_168 & 1) == 0) {
        uVar11 = 0;
        uVar12 = 0;
        plVar13 = (long *)0x100;
      }
      else {
        if (pcStack_a8 != (char *)0x0) {
          pcVar5 = pcStack_a8;
          func_0x000107c29c54();
          in_ZR = *pcVar5 == '\x01';
          if (!(bool)in_ZR) {
            plVar13 = (long *)0x0;
            uVar12 = 0;
            uVar11 = 1;
            goto LAB_10b1c1a24;
          }
        }
        uVar11 = 0;
        plVar13 = (long *)0x0;
      }
    }
    else {
LAB_10b1c1a18:
      uVar11 = 0;
      plVar13 = (long *)0x0;
      uVar12 = 0;
    }
LAB_10b1c1a24:
    func_0x000107c281f0(&pcStack_78);
    func_0x000107c29c20(&pcStack_a8);
  }
  puVar3 = &uStack_a0;
  func_0x00010b1d3e60();
  func_0x00010b1eadc4();
  if ((bool)in_ZR) {
    auVar14._0_8_ = (ulong)plVar13 | uVar11;
    auVar14._8_8_ = uVar12;
    return auVar14;
  }
  ___stack_chk_fail();
  func_0x000107c281f0(&pcStack_78);
  func_0x000107c29c20(&pcStack_a8);
  puVar6 = &uStack_a0;
  func_0x00010b1d3e60();
  func_0x00010b1eb590();
  pcStack_1e8 = FUN_10b1c1bc8;
  uStack_210 = uVar12;
  puStack_1f0 = &stack0x00000050;
  func_0x00010b1eaf00();
  uVar1 = *(char *)(puVar6 + 0x13) == '\x01';
  plVar8 = param_2;
  if ((bool)uVar1) {
    func_0x00010b1eb65c();
    puVar9 = puVar3 + 2;
    func_0x00010b1eb674(&lStack_2d0);
    plVar8 = &lStack_2d0;
    FUN_10b1be194(puVar3 + 0x53,plVar8);
    func_0x00010b1ecef4();
    plVar13 = param_2;
    if (((puVar3[0x55] != 0) && (func_0x00010b1ec3bc(), (bool)uVar1)) &&
       ((((ulong)param_2 & 1) != 0 || (*(long *)(extraout_x8 + 0x28) != 0)))) {
      _bzero(&lStack_2d0,0xa0);
      func_0x00010b1215a0(puVar3 + 0x3d,&lStack_2d0);
      func_0x00010b121b30(&lStack_2d0);
      puVar9 = (undefined8 *)0x0;
      FUN_10b1c1e40(&lStack_2d0,puVar3[0x55] + 0xf8,0);
      plVar13 = puVar3 + 0x5a;
      func_0x00010b1ed9f4();
      FUN_10b1e4868(&lStack_2d0);
      if (puVar3[0x5a] == 0) {
        FUN_10b1c1ef4(&lStack_2d0,puVar3[0x55] + 0xf8);
        uStack_308 = uStack_2c8;
        lStack_310 = lStack_2d0;
        uStack_2f8 = uStack_2c8;
        lStack_300 = lStack_2d0;
        lStack_2d0 = 0;
        uStack_2c8 = 0;
        func_0x00010b121b68(&lStack_2d0);
        func_0x00010b1ed824();
        if (extraout_x8_00 == 0) {
          unaff_x21 = 0;
        }
        else {
          unaff_x21 = (ulong)*(byte *)(extraout_x8_00 + 0x30);
        }
        func_0x00010b121a70(&lStack_300);
      }
      else {
        unaff_x21 = (ulong)*(byte *)(puVar3[0x5a] + 0x30);
      }
      lVar10 = puVar3[0x55];
      if ((*(long *)(lVar10 + 0x20) == 0) ||
         (uVar1 = *(long *)(lVar10 + 0x20) == *(long *)(lVar10 + 0x28),
         !(bool)uVar1 && (unaff_x21 & 1) == 0)) {
        if (*plVar13 == 0) {
          func_0x00010b1ebb18(&lStack_2d0);
          func_0x00010b1ed9f4();
          FUN_10b1e4868(&lStack_2d0);
          lVar10 = puVar3[0x55];
        }
        puVar9 = (undefined8 *)(ulong)*(uint *)(lVar10 + 0x18);
        FUN_10b1c1ff0(&lStack_2d0,*puVar3,puVar3[1],puVar9);
        plVar13 = puVar3 + 0x58;
        plVar8 = &lStack_2d0;
        FUN_10b1c1fcc(plVar13,plVar8);
        func_0x00010b125864(&lStack_2d0);
        lVar10 = puVar3[0x58];
        plVar7 = (long *)0x0;
        if (lVar10 == 0) goto LAB_10b1c1dcc;
        plVar8 = (long *)puVar3[0x55];
        func_0x00010b1ec4bc(lVar10,plVar8);
        iVar2 = (int)lVar10;
        (*extraout_x8_01)();
        if (iVar2 != 0) {
          plVar8 = (long *)puVar3[0x55];
          if (plVar8[4] == 0) {
            plVar13 = (long *)*plVar13;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_230);
            func_0x00010b1ecab8(&lStack_300,auStack_230);
            func_0x00010b1ecfbc(&lStack_2d0);
            (*extraout_x9)();
            plVar8 = (long *)puVar3[0x55];
            plVar7 = &lStack_2d0;
            FUN_10b11e978(plVar7,plVar8);
            lVar10 = *plVar7;
            FUN_10b131cc0(&lStack_2d0);
            func_0x000107c2826c(&lStack_300);
            func_0x00010b1ece94();
            if ((int)lVar10 == 0) goto LAB_10b1c1dec;
          }
          goto LAB_10b1c1dc8;
        }
      }
      else {
        lStack_2d0 = 0;
        uStack_2c8 = 0;
        plVar8 = &lStack_2d0;
        FUN_10b1c1fcc(puVar3 + 0x58,plVar8);
        func_0x00010b125864(&lStack_2d0);
      }
LAB_10b1c1dec:
      plVar7 = (long *)0x1;
      goto LAB_10b1c1dcc;
    }
  }
LAB_10b1c1dc8:
  plVar7 = (long *)0x0;
LAB_10b1c1dcc:
  func_0x00010b1eaddc(uStack_218);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    FUN_10b131cc0(&lStack_2d0);
    func_0x000107c2826c(&lStack_300);
    func_0x00010b1ece94();
    func_0x00010b1eb590();
    pcStack_318 = FUN_10b1c1e40;
    uStack_340 = uVar12;
    uStack_338 = unaff_x21;
    plStack_330 = plVar13;
    plStack_328 = plVar7;
    ppuStack_320 = &puStack_1f0;
    func_0x00010b1eb648();
    FUN_10b1e46b0(&lStack_350,plVar8);
    plVar8 = plVar13;
    FUN_10b1d4a0c(plVar13,puVar9);
    if (((ulong)plVar8 & 1) == 0) {
      *plVar7 = 0;
      plVar7[1] = 0;
    }
    else if (lStack_350 == 0) {
      plVar8 = plVar13 + 4;
      FUN_10b1e46dc(plVar7,plVar8);
    }
    else {
      *plVar7 = lStack_350;
      plVar7[1] = lStack_348;
      if (lStack_348 != 0) {
        do {
          func_0x00010b1eb124();
        } while (extraout_w10 != 0);
      }
    }
    func_0x00010b1ebfe4();
    auVar16._8_8_ = puVar9;
    auVar16._0_8_ = plVar8;
    return auVar16;
  }
  auVar15._8_8_ = plVar8;
  auVar15._0_8_ = plVar7;
  return auVar15;
}



/* Entry: 10b1c1bc8; end: 10b1c1e3f;  */

void FUN_10b1c1bc8(long param_1,long *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  code *extraout_x8_01;
  code *extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  byte bVar6;
  long lStack_170;
  long lStack_168;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x00010b1eaf00();
  uVar1 = *(char *)(param_1 + 0x98) == '\x01';
  plVar4 = param_2;
  if ((bool)uVar1) {
    func_0x00010b1eb65c();
    param_3 = unaff_x19 + 2;
    func_0x00010b1eb674(&lStack_f0);
    plVar4 = &lStack_f0;
    FUN_10b1be194(unaff_x19 + 0x53,plVar4);
    func_0x00010b1ecef4();
    unaff_x20 = param_2;
    if (((unaff_x19[0x55] != 0) && (func_0x00010b1ec3bc(), (bool)uVar1)) &&
       ((((ulong)param_2 & 1) != 0 || (*(long *)(extraout_x8 + 0x28) != 0)))) {
      _bzero(&lStack_f0,0xa0);
      func_0x00010b1215a0(unaff_x19 + 0x3d,&lStack_f0);
      func_0x00010b121b30(&lStack_f0);
      param_3 = (undefined8 *)0x0;
      FUN_10b1c1e40(&lStack_f0,unaff_x19[0x55] + 0xf8,0);
      unaff_x20 = unaff_x19 + 0x5a;
      func_0x00010b1ed9f4();
      FUN_10b1e4868(&lStack_f0);
      if (unaff_x19[0x5a] == 0) {
        FUN_10b1c1ef4(&lStack_f0,unaff_x19[0x55] + 0xf8);
        uStack_118 = uStack_e8;
        lStack_120 = lStack_f0;
        lStack_f0 = 0;
        uStack_e8 = 0;
        func_0x00010b121b68(&lStack_f0);
        func_0x00010b1ed824();
        if (extraout_x8_00 == 0) {
          bVar6 = 0;
        }
        else {
          bVar6 = *(byte *)(extraout_x8_00 + 0x30);
        }
        func_0x00010b121a70(&lStack_120);
      }
      else {
        bVar6 = *(byte *)(unaff_x19[0x5a] + 0x30);
      }
      lVar5 = unaff_x19[0x55];
      if ((*(long *)(lVar5 + 0x20) == 0) ||
         (uVar1 = *(long *)(lVar5 + 0x20) == *(long *)(lVar5 + 0x28),
         !(bool)uVar1 && (bVar6 & 1) == 0)) {
        if (*unaff_x20 == 0) {
          func_0x00010b1ebb18(&lStack_f0);
          func_0x00010b1ed9f4();
          FUN_10b1e4868(&lStack_f0);
          lVar5 = unaff_x19[0x55];
        }
        param_3 = (undefined8 *)(ulong)*(uint *)(lVar5 + 0x18);
        FUN_10b1c1ff0(&lStack_f0,*unaff_x19,unaff_x19[1],param_3);
        unaff_x20 = unaff_x19 + 0x58;
        plVar4 = &lStack_f0;
        FUN_10b1c1fcc(unaff_x20,plVar4);
        func_0x00010b125864(&lStack_f0);
        lVar5 = unaff_x19[0x58];
        plVar3 = (long *)0x0;
        if (lVar5 == 0) goto LAB_10b1c1dcc;
        plVar4 = (long *)unaff_x19[0x55];
        func_0x00010b1ec4bc(lVar5,plVar4);
        iVar2 = (int)lVar5;
        (*extraout_x8_01)();
        if (iVar2 != 0) {
          plVar4 = (long *)unaff_x19[0x55];
          if (plVar4[4] == 0) {
            unaff_x20 = (long *)*unaff_x20;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_50);
            func_0x00010b1ecab8(&lStack_120,auStack_50);
            func_0x00010b1ecfbc(&lStack_f0);
            (*extraout_x9)();
            plVar4 = (long *)unaff_x19[0x55];
            plVar3 = &lStack_f0;
            FUN_10b11e978(plVar3,plVar4);
            lVar5 = *plVar3;
            FUN_10b131cc0(&lStack_f0);
            func_0x000107c2826c(&lStack_120);
            func_0x00010b1ece94();
            if ((int)lVar5 == 0) goto LAB_10b1c1dec;
          }
          goto LAB_10b1c1dc8;
        }
      }
      else {
        lStack_f0 = 0;
        uStack_e8 = 0;
        plVar4 = &lStack_f0;
        FUN_10b1c1fcc(unaff_x19 + 0x58,plVar4);
        func_0x00010b125864(&lStack_f0);
      }
LAB_10b1c1dec:
      plVar3 = (long *)0x1;
      goto LAB_10b1c1dcc;
    }
  }
LAB_10b1c1dc8:
  plVar3 = (long *)0x0;
LAB_10b1c1dcc:
  func_0x00010b1eaddc(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    FUN_10b131cc0(&lStack_f0);
    func_0x000107c2826c(&lStack_120);
    func_0x00010b1ece94();
    func_0x00010b1eb590();
    func_0x00010b1eb648();
    FUN_10b1e46b0(&lStack_170,plVar4);
    plVar4 = unaff_x20;
    FUN_10b1d4a0c(unaff_x20,param_3);
    if (((ulong)plVar4 & 1) == 0) {
      *plVar3 = 0;
      plVar3[1] = 0;
    }
    else if (lStack_170 == 0) {
      FUN_10b1e46dc(plVar3,unaff_x20 + 4);
    }
    else {
      *plVar3 = lStack_170;
      plVar3[1] = lStack_168;
      if (lStack_168 != 0) {
        do {
          func_0x00010b1eb124();
        } while (extraout_w10 != 0);
      }
    }
    func_0x00010b1ebfe4();
    return;
  }
  return;
}



/* Entry: 10b1c1e40; end: 10b1c1ecf;  */

void FUN_10b1c1e40(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  int extraout_w10;
  long *unaff_x19;
  ulong unaff_x20;
  long lStack_40;
  long lStack_38;
  
  func_0x00010b1eb648();
  FUN_10b1e46b0(&lStack_40,param_2);
  uVar1 = unaff_x20;
  FUN_10b1d4a0c();
  if ((uVar1 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else if (lStack_40 == 0) {
    FUN_10b1e46dc(unaff_x20 + 0x20);
  }
  else {
    *unaff_x19 = lStack_40;
    unaff_x19[1] = lStack_38;
    if (lStack_38 != 0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b1ebfe4();
  return;
}



/* Entry: 10b1c1ed0; end: 10b1c1ef3;  */

void FUN_10b1c1ed0(void)

{
  func_0x00010b1eae08();
  FUN_10b1e4868();
  return;
}



/* Entry: 10b1c1ef4; end: 10b1c1fcb;  */

void FUN_10b1c1ef4(void)

{
  int extraout_w10;
  long unaff_x20;
  undefined1 auStack_50 [8];
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x00010b1ebe28();
  FUN_10b1e46b0(&lStack_40);
  if (lStack_40 == 0) {
    FUN_10b1e46dc(auStack_50,unaff_x20 + 0x20);
    FUN_10b1c1ed0(&lStack_40,auStack_50);
    func_0x00010b1ebfe4();
    if (lStack_40 == 0) {
      func_0x00010b1ecd18();
    }
    else {
      func_0x00010b1ecfbc();
      func_0x00010b1e488c();
    }
    if (lStack_40 == 0) goto LAB_10b1c1f7c;
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    FUN_10b1bf2fc(auStack_50);
    func_0x00010b1edd30();
    func_0x00010b1ebeac();
  }
LAB_10b1c1f7c:
  lStack_48 = lStack_38;
  if (lStack_38 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  FUN_10b1e48c4();
  func_0x00010b121a70(auStack_50);
  func_0x00010b1e4868(&lStack_40);
  return;
}



/* Entry: 10b1c1fcc; end: 10b1c1fef;  */

void FUN_10b1c1fcc(void)

{
  func_0x00010b1eae08();
  func_0x00010b125864();
  return;
}



/* Entry: 10b1c1ff0; end: 10b1c2053;  */

void FUN_10b1c1ff0(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x00010b1ebb5c(auStack_48);
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x00010b1ec8a4(param_1);
  FUN_10b1d072c();
  FUN_10b127f28(&uStack_58);
  func_0x00010b1eb9bc();
  return;
}



/* Entry: 10b1c2054; end: 10b1c22a7;  */

ulong FUN_10b1c2054(long *param_1,long *param_2,long *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  long *plVar3;
  code *extraout_x8_00;
  ulong uVar4;
  undefined1 *unaff_x21;
  undefined8 uVar5;
  long lVar6;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long alStack_e8 [3];
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [40];
  undefined8 uStack_58;
  
  plVar3 = param_1;
  func_0x00010b1eaf40();
  lVar1 = plVar3[0x58];
  uStack_58 = extraout_x8;
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    plVar3 = (long *)*param_2;
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      lVar1 = param_1[0x58];
    }
    FUN_10b1c22a8(lVar1,param_3,param_2);
    uVar4 = (ulong)((int)lVar1 == 0);
    uVar5 = *(undefined8 *)(*param_1 + 0x238);
    func_0x00010b1eddcc();
    func_0x00010b1ee0b8(auStack_a8);
    func_0x00010b1ed8d4(auStack_80,"success");
    func_0x00010b1ed7d0();
    func_0x00010b1ebee0();
    FUN_10b114b00(uVar5,0xbf,alStack_e8,plVar3);
    func_0x00010b1eb750();
    lVar6 = 0x60;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0 + lVar6);
      lVar6 = lVar6 + -0x28;
    } while (lVar6 != -0x18);
    param_1 = *(long **)(*param_1 + 0x238);
    func_0x00010b1eddcc();
    func_0x00010b1ee0b8(auStack_a8);
    in_ZR = (int)lVar1 == 0;
    func_0x00010b1ed8d4(auStack_80,"success");
    func_0x00010b1ed7d0();
    func_0x00010b1ebee0();
    param_3 = alStack_e8;
    FUN_10b11ef50(param_1,0xbf,param_3,plVar3);
    func_0x00010b1eb750();
    unaff_x21 = auStack_d0;
    do {
      func_0x00010b1eca78();
      func_0x00010b1ec03c();
    } while (!(bool)in_ZR);
  }
  func_0x00010b1eaddc(uStack_58);
  if ((bool)in_ZR) {
    return uVar4;
  }
  ___stack_chk_fail();
  func_0x00010b1eb230();
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b1ec0a4();
  } while (!(bool)in_ZR);
  func_0x00010b1eb590();
  uStack_110 = 0xffffffffffffff88;
  pcStack_f8 = FUN_10b1c22a8;
  plStack_120 = param_1;
  puStack_118 = unaff_x21;
  uStack_108 = uVar4;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x00010b1eb63c();
  lVar1 = *param_3;
  if (lVar1 == 0) {
    lVar1 = 0;
    lStack_128 = 0;
  }
  else {
    func_0x00010b1eb9d4();
    (*extraout_x8_00)();
    lStack_128 = *param_3;
    if (lStack_128 != 0) {
      func_0x00010b1eba4c();
    }
  }
  uVar2 = 0xffffffffffffff88;
  lStack_130 = lVar1;
  (**(code **)(lRamffffffffffffff88 + 0x18))(0xffffffffffffff88,&lStack_130,uVar4);
  return uVar2;
}



/* Entry: 10b1c22a8; end: 10b1c2317;  */

void FUN_10b1c22a8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  code *extraout_x8;
  long *unaff_x20;
  
  func_0x00010b1eb63c();
  if (*param_3 != 0) {
    func_0x00010b1eb9d4();
    (*extraout_x8)();
    if (*param_3 != 0) {
      func_0x00010b1eba4c();
    }
  }
  (**(code **)(*unaff_x20 + 0x18))();
  return;
}



/* Entry: 10b1c2318; end: 10b1c3337;  */

long ****** FUN_10b1c2318(long *param_1)

{
  undefined *****pppppuVar1;
  undefined1 in_ZR;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined *******pppppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 ******ppppppuVar14;
  uint uVar15;
  undefined8 extraout_x8;
  undefined8 *****pppppuVar16;
  undefined *******pppppppuVar17;
  code *extraout_x8_00;
  undefined8 ******extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  undefined8 ******extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  undefined8 ******extraout_x9;
  undefined ******extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 ******extraout_x10;
  undefined ******extraout_x10_00;
  int extraout_w11;
  undefined4 extraout_w11_00;
  int extraout_w11_01;
  undefined4 extraout_w11_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  long *unaff_x19;
  byte bVar18;
  undefined *******pppppppuVar19;
  long *****ppppplVar20;
  long ******pppppplVar21;
  uint uVar22;
  long *plVar23;
  long *****ppppplVar24;
  undefined ******ppppppuVar25;
  ulong unaff_x25;
  uint uVar26;
  undefined *******pppppppuVar27;
  undefined *******unaff_x30;
  long lStack_338;
  ulong uStack_328;
  long *****ppppplStack_320;
  long *****ppppplStack_318;
  undefined *****pppppuStack_310;
  undefined8 uStack_308;
  undefined *****pppppuStack_300;
  long lStack_2f8;
  undefined1 *puStack_2e8;
  undefined ******ppppppuStack_2e0;
  undefined4 uStack_2d0;
  undefined8 ****ppppuStack_2c8;
  undefined8 ****ppppuStack_2c0;
  undefined *****pppppuStack_2b8;
  long lStack_2b0;
  long *****ppppplStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [40];
  undefined1 uStack_250;
  undefined7 uStack_24f;
  long lStack_248;
  char cStack_240;
  long *****ppppplStack_230;
  long *****ppppplStack_228;
  undefined ******ppppppuStack_218;
  undefined ******ppppppuStack_210;
  long lStack_208;
  undefined *****pppppuStack_200;
  undefined8 *puStack_1f8;
  undefined *****pppppuStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  long *****ppppplStack_1d0;
  long *****ppppplStack_1c8;
  ulong uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  byte bStack_1a8;
  undefined8 *****pppppuStack_1a0;
  undefined8 uStack_198;
  long *****ppppplStack_190;
  long *****ppppplStack_188;
  ulong uStack_180;
  byte bStack_168;
  undefined *****pppppuStack_158;
  byte bStack_150;
  long ****pppplStack_138;
  long *****ppppplStack_130;
  long *****ppppplStack_128;
  ulong uStack_120;
  undefined4 uStack_118;
  undefined8 ****ppppuStack_110;
  undefined8 ****ppppuStack_108;
  undefined *****apppppuStack_f8 [3];
  char cStack_e0;
  undefined *****pppppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined *****pppppuStack_c0;
  undefined8 *puStack_b8;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulong uStack_80;
  byte bStack_78;
  long *****ppppplStack_68;
  long *****ppppplStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long ***appplStack_38 [4];
  byte bStack_18;
  undefined8 uStack_10;
  
  func_0x00010b1ec024();
  func_0x00010b1eaf40();
  ppppppuStack_210 = (undefined ******)0x0;
  lStack_208 = 0;
  param_1[0x5c] = 0;
  ppppppuStack_218 = (undefined ******)&ppppppuStack_210;
  uStack_10 = extraout_x8;
  if (param_1[0x5a] == 0) {
    pppppplVar21 = (long ******)0x0;
    param_1 = unaff_x19;
    goto LAB_10b1c2cbc;
  }
  pppppppuVar6 = (undefined *******)&ppppplStack_190;
  func_0x00010b1ec9dc();
  while (ppppplVar20 = ppppplStack_190, (undefined8 ******)ppppplStack_190 != (undefined8 ******)0x0
        ) {
    pppppuVar16 = (undefined8 *****)&PTR_PTR_11336cc18;
    if (*(int *)((long)ppppplStack_190 + 0x44) == 2) {
      pppppuVar16 = (undefined8 *****)ppppplStack_190[7];
    }
    ppppppuVar25 = (undefined ******)pppppuVar16[2];
    pppppppuVar19 = &ppppppuStack_210;
    pppppppuVar17 = (undefined *******)ppppppuStack_210;
    while (pppppppuVar27 = pppppppuVar19, pppppppuVar17 != (undefined *******)0x0) {
      while (pppppppuVar19 = pppppppuVar17, pppppppuVar19[4] <= ppppppuVar25) {
        if (ppppppuVar25 <= pppppppuVar19[4]) goto LAB_10b1c2414;
        pppppppuVar17 = (undefined *******)pppppppuVar19[1];
        if ((undefined *******)pppppppuVar19[1] == (undefined *******)0x0) {
          pppppppuVar27 = pppppppuVar19 + 1;
          goto LAB_10b1c23cc;
        }
      }
      pppppppuVar17 = (undefined *******)*pppppppuVar19;
    }
LAB_10b1c23cc:
    func_0x00010b1ec5d4();
    pppppppuVar6[4] = ppppppuVar25;
    pppppppuVar6[5] = (undefined ******)0x0;
    *pppppppuVar6 = (undefined ******)0x0;
    pppppppuVar6[1] = (undefined ******)0x0;
    pppppppuVar6[2] = (undefined ******)pppppppuVar19;
    *pppppppuVar27 = (undefined ******)pppppppuVar6;
    if ((undefined *******)*ppppppuStack_218 != (undefined *******)0x0) {
      ppppppuStack_218 = (undefined ******)*ppppppuStack_218;
    }
    unaff_x30 = pppppppuVar6;
    func_0x000107c27be4(ppppppuStack_210);
    lStack_208 = lStack_208 + 1;
    pppppppuVar19 = pppppppuVar6;
LAB_10b1c2414:
    pppppppuVar19[5] = (undefined ******)(ppppplVar20 + 1);
    param_1[0x5c] = param_1[0x5c] + (long)ppppplVar20[6];
    pppppppuVar6 = (undefined *******)&ppppplStack_190;
    func_0x000107c27d54();
  }
  FUN_10b1c3338(&ppppplStack_190,param_1[0x55] + 0xc0);
  ppppplStack_228 = ppppplStack_188;
  ppppplStack_230 = ppppplStack_190;
  ppppplStack_190 = (long *****)0x0;
  ppppplStack_188 = (long *****)0x0;
  pppppplVar21 = &ppppplStack_190;
  func_0x00010b121bb0();
  if (((param_1[0x51] == 0) || ((undefined8 ******)ppppplStack_230 == (undefined8 ******)0x0)) ||
     ((*(byte *)(ppppplStack_230 + 2) >> 3 & 1) == 0)) {
    uVar15 = 0;
  }
  else {
    lVar13 = (long)*(char *)(((ulong)ppppplStack_230[0xd][2] & 0xfffffffffffffffc) + 0x17);
    if (lVar13 < 0) {
      lVar13 = *(long *)(((ulong)ppppplStack_230[0xd][2] & 0xfffffffffffffffc) + 8);
    }
    uVar15 = (uint)(lVar13 != 0);
  }
  if ((char)param_1[0xd] == '\x01') {
    FUN_10b2029a0();
    unaff_x30 = (undefined *******)(ulong)*(uint *)(param_1 + 5);
    FUN_10b20345c();
    ppppplVar20 = (long *****)&PTR_PTR_113386a18;
    if (pppppplVar21[3] != (long *****)0x0) {
      ppppplVar20 = pppppplVar21[3];
    }
    uVar26 = (uint)*(byte *)((long)ppppplVar20 + 0x3f);
  }
  else {
    uVar26 = 0;
  }
  uVar22 = uVar26 & (uVar15 ^ 1) & (uint)*(byte *)(*param_1 + 0x78);
  unaff_x25 = (ulong)uVar22;
  uVar22 = uVar26 & (uVar22 ^ 1) | uVar15;
  uStack_250 = 0;
  cStack_240 = '\0';
  if (uVar22 == 0) {
LAB_10b1c2530:
    uStack_328 = 0;
    pppppppuVar6 = (undefined *******)ppppppuStack_218;
    while (in_ZR = pppppppuVar6 == &ppppppuStack_210, !(bool)in_ZR) {
      FUN_10b2026a0(&ppppplStack_190,param_1[0x55],pppppppuVar6[5]);
      unaff_x30 = (undefined *******)&pppppuStack_158;
      (**(code **)(*(long *)param_1[0x58] + 0x50))(&ppppplStack_1d0);
      if ((undefined8 ******)ppppplStack_1d0 == (undefined8 ******)0x0) {
LAB_10b1c2584:
        bVar4 = false;
        ppppplStack_130 = (long *****)((ulong)ppppplStack_130 & 0xffffffffffffff00);
        uStack_120 = uStack_120 & 0xffffffffffffff00;
      }
      else {
        ppppppuVar14 = (undefined8 ******)ppppplStack_1d0;
        func_0x00010b1eb9d4();
        iVar5 = (int)ppppppuVar14;
        (*extraout_x8_00)();
        if (iVar5 != 0) goto LAB_10b1c2584;
        (*(code *)(*ppppplStack_1d0)[4])(&ppppplStack_b0);
        ppppplStack_68 = ppppplStack_b0;
        ppppplStack_60 = ppppplStack_a8;
        ppppppuVar14 = (undefined8 ******)ppppplStack_b0;
        if ((undefined8 ******)ppppplStack_a8 != (undefined8 ******)0x0) {
          do {
            func_0x00010b1eaf98();
            ppppppuVar14 = extraout_x8_01;
          } while (extraout_w11 != 0);
        }
        if (ppppppuVar14 == (undefined8 ******)0x0) {
          ppppplStack_130 = (long *****)((ulong)ppppplStack_130 & 0xffffffffffffff00);
        }
        else {
          ppppplStack_128 = ppppplStack_a8;
          ppppplStack_b0 = (long *****)0x0;
          ppppplStack_a8 = (long *****)0x0;
          ppppplStack_130 = (long *****)ppppppuVar14;
        }
        uStack_120 = CONCAT71(uStack_120._1_7_,ppppppuVar14 != (undefined8 ******)0x0);
        func_0x000107c27d78(&ppppplStack_68);
        func_0x00010b1ec42c();
        if ((uStack_120 & 1) == 0) {
LAB_10b1c2770:
          bVar4 = false;
        }
        else if ((uVar15 == 0 && ((uVar26 ^ 0xffffffff) & 1) == 0) &&
                (pppppppuVar6[4] == (undefined ******)0x0)) {
          uVar12 = 0;
          FUN_10b1c3410();
          FUN_10b205814();
          if ((uVar12 & 1) != 0) goto LAB_10b1c263c;
          in_ZR = cStack_240 == '\x01';
          if ((bool)in_ZR) {
            func_0x000107c27d78(&uStack_250);
            uVar26 = 0;
            unaff_x25 = 0;
            cStack_240 = '\0';
          }
          else {
            uVar26 = 0;
            unaff_x25 = 0;
          }
LAB_10b1c26d0:
          plVar23 = (long *)param_1[0x58];
          lVar13 = param_1[0x55];
          if ((undefined8 ******)ppppplStack_130 == (undefined8 ******)0x0) {
            ppppppuVar14 = (undefined8 ******)0x0;
            ppppppuVar7 = (undefined8 ******)ppppplStack_130;
          }
          else {
            ppppppuVar14 = (undefined8 ******)ppppplStack_130;
            func_0x00010b1eb9d4();
            (*extraout_x8_02)();
            ppppppuVar7 = (undefined8 ******)ppppplStack_130;
            if ((undefined8 ******)ppppplStack_130 != (undefined8 ******)0x0) {
              func_0x00010b1ebf40();
              (*extraout_x8_03)();
            }
          }
          unaff_x30 = (undefined *******)&ppppplStack_b0;
          ppppplStack_b0 = (long *****)ppppppuVar14;
          ppppplStack_a8 = (long *****)ppppppuVar7;
          (**(code **)(*plVar23 + 0x28))(plVar23,unaff_x30,lVar13);
          if ((int)plVar23 != 0) {
            plVar23 = (long *)param_1[0x58];
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (&ppppplStack_68,param_1[0x55]);
            func_0x00010b1ecab8(&ppppplStack_b0,&ppppplStack_68);
            unaff_x30 = (undefined *******)&ppppplStack_b0;
            (**(code **)(*plVar23 + 0x60))(auStack_278,plVar23);
            FUN_10b131cc0(auStack_278);
            func_0x000107c2826c(&ppppplStack_b0);
            func_0x00010b1eccec();
            uVar22 = 0;
            goto LAB_10b1c2770;
          }
          uVar22 = 0;
LAB_10b1c277c:
          bVar4 = true;
        }
        else {
LAB_10b1c263c:
          if (uVar22 == 0) goto LAB_10b1c26d0;
          FUN_10b1c3410(&ppppplStack_130);
          if (unaff_x30 != (undefined *******)0x0) {
            uVar12 = (long)unaff_x30 + uStack_328;
            in_ZR = uVar12 == param_1[0x5c];
            if ((ulong)param_1[0x5c] < uVar12) goto LAB_10b1c2668;
            plVar23 = (long *)CONCAT71(uStack_24f,uStack_250);
            if (plVar23 != (long *)0x0) {
              (**(code **)(*plVar23 + 0x20))();
            }
            func_0x00010b1ec6a0((long)plVar23 + uStack_328);
            _memmove();
            uVar22 = 1;
            uStack_328 = uVar12;
            goto LAB_10b1c277c;
          }
LAB_10b1c2668:
          bVar4 = false;
          uVar22 = 1;
        }
      }
      func_0x000107c27f18(&ppppplStack_130);
      func_0x00010b10c000(&ppppplStack_1d0);
      func_0x00010b1eceb4();
      if (!bVar4) goto LAB_10b1c2ca4;
      func_0x000107c27be0();
    }
    in_ZR = cStack_240 == '\x01';
    if ((bool)in_ZR) {
      in_ZR = uStack_328 == param_1[0x5c];
      if (!(bool)in_ZR) goto LAB_10b1c2ca4;
    }
    else if ((int)unaff_x25 == 0) {
      param_1[0x5d] = param_1[0x5c];
      pppppplVar21 = (long ******)0x1;
      goto LAB_10b1c2ca8;
    }
    if (uVar15 != 0) {
      plStack_2a0 = param_1 + 2;
      ppppplStack_2a8 = ppppplStack_230;
      uStack_298 = CONCAT71(uStack_24f,uStack_250);
      lStack_290 = lStack_248;
      if (lStack_248 != 0) {
        do {
          func_0x00010b1eb124();
        } while (extraout_w10 != 0);
      }
      uStack_280 = *(undefined8 *)(*param_1 + 0x238);
      plStack_288 = param_1 + 0x51;
      FUN_10b1b804c(&ppppplStack_190,&ppppplStack_2a8);
      func_0x000107c27d78(&uStack_298);
      ppppplVar20 = ppppplStack_190;
      if ((bStack_150 & 1) == 0) {
        func_0x00010b1edbd8();
        goto LAB_10b1c2ca4;
      }
      ppppplStack_b0 = ppppplStack_190;
      ppppplStack_a8 = ppppplStack_188;
      if ((undefined8 ******)ppppplStack_188 != (undefined8 ******)0x0) {
        do {
          func_0x00010b1eb124();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010b1ec42c();
      if ((undefined8 ******)ppppplVar20 != (undefined8 ******)0x0) {
        ppppplStack_a8 = ppppplStack_188;
        ppppplStack_b0 = ppppplStack_190;
        ppppplStack_190 = (long *****)0x0;
        ppppplStack_188 = (long *****)0x0;
        unaff_x30 = (undefined *******)&ppppplStack_b0;
        func_0x000107c282f0(&uStack_250);
        func_0x00010b1ec42c();
      }
      func_0x00010b1edbd8();
    }
    if ((uVar26 & 1) != 0) {
      pppppplVar21 = (long ******)0x1137f4100;
      if ((bRam00000001137f4108 & 1) == 0) goto LAB_10b1c3054;
      goto LAB_10b1c2884;
    }
    pppppplVar21 = (long ******)CONCAT71(uStack_24f,uStack_250);
    if (pppppplVar21 == (long ******)0x0) {
      pppppuStack_2b8 = (undefined *****)0x0;
    }
    else {
      func_0x00010b1ebf40();
      (*extraout_x8_06)();
      pppppuStack_2b8 = (undefined *****)CONCAT71(uStack_24f,uStack_250);
    }
    param_1[0x5d] = (long)pppppplVar21;
    param_1[0x5c] = (long)pppppplVar21;
    lStack_2b0 = lStack_248;
    if (lStack_248 != 0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10_01 != 0);
    }
    unaff_x30 = (undefined *******)&pppppuStack_2b8;
    func_0x00010b1ecaf8();
    func_0x000107c27d78(&pppppuStack_2b8);
  }
  else {
    func_0x000107c31718(&ppppplStack_190,param_1[0x5c]);
    unaff_x30 = (undefined *******)&ppppplStack_190;
    func_0x000107c282f0(&uStack_250);
    func_0x000107c27d78(&ppppplStack_190);
    in_ZR = cStack_240 == '\x01';
    if ((((bool)in_ZR) &&
        (plVar23 = (long *)CONCAT71(uStack_24f,uStack_250), plVar23 != (long *)0x0)) &&
       ((**(code **)(*plVar23 + 0x20))(), plVar23 != (long *)0x0)) goto LAB_10b1c2530;
LAB_10b1c2ca4:
    pppppplVar21 = (long ******)0x0;
  }
LAB_10b1c2ca8:
  while( true ) {
    func_0x000107c27f18(&uStack_250);
    func_0x00010b1219bc(&ppppplStack_230);
LAB_10b1c2cbc:
    FUN_10b1e4914(ppppppuStack_210);
    func_0x00010b1eaddc(uStack_10);
    if ((bool)in_ZR) {
      return pppppplVar21;
    }
    ___stack_chk_fail();
LAB_10b1c3054:
    iVar5 = 0x137f4108;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c2be18(&PTR_DAT_110cc13c0);
      func_0x00010b1eba6c(pppppplVar21);
    }
LAB_10b1c2884:
    pppppppuVar6 = unaff_x30;
    if ((bRam00000001137f4118 & 1) == 0) {
      iVar5 = 0x137f4118;
      ___cxa_guard_acquire();
      pppppppuVar6 = unaff_x30;
      if (iVar5 != 0) {
        func_0x000107c2be18(&PTR_DAT_110cc13d8);
        func_0x00010b1eba6c(0x1137f4110);
        pppppppuVar6 = unaff_x30;
      }
    }
    if ((unaff_x25 & 1) != 0) break;
    puVar11 = &uStack_250;
    FUN_10b1c3410();
    uStack_2d0 = 1;
    ppppuStack_2c8 = *pppppplVar21;
    ppppuStack_2c0 = pppppplVar21[2];
    ppppplStack_b0 =
         (long *****)CONCAT44(ppppplStack_b0._4_4_,*(undefined4 *)((long)param_1 + 0x74));
    plStack_a0 = (long *)(long)*(char *)((long)param_1 + 0x27);
    if ((long)plStack_a0 < 0) {
      ppppplStack_a8 = (long *****)param_1[2];
      plStack_a0 = (long *)param_1[3];
    }
    else {
      ppppplStack_a8 = (long *****)(param_1 + 2);
    }
    lStack_90 = (long)*(char *)((long)param_1 + 0x47);
    if (lStack_90 < 0) {
      plStack_98 = (long *)param_1[6];
      lStack_90 = param_1[7];
    }
    else {
      plStack_98 = param_1 + 6;
    }
    uStack_88 = (undefined4)param_1[5];
    uStack_84 = (undefined4)param_1[0xc];
    uStack_80 = *(ulong *)(*param_1 + 0x238);
    unaff_x30 = (undefined *******)&ppppplStack_b0;
    puStack_2e8 = puVar11;
    ppppppuStack_2e0 = (undefined ******)pppppppuVar6;
    FUN_10b212160(&ppppplStack_190,&puStack_2e8);
    uVar12 = 0;
    FUN_10b17d480();
    if ((bStack_150 & 1) == 0) {
LAB_10b1c2f1c:
      pppppplVar21 = (long ******)0x0;
    }
    else if ((bStack_168 & 1) == 0) {
      pppppuStack_300 = (undefined *****)CONCAT71(uStack_24f,uStack_250);
      lStack_2f8 = lStack_248;
      if (lStack_248 != 0) {
        do {
          func_0x00010b1eb124();
        } while (extraout_w10_03 != 0);
      }
      unaff_x30 = (undefined *******)&pppppuStack_300;
      func_0x00010b1ecaf8();
      func_0x00010b1ecee4();
      if ((uVar12 & 1) == 0) goto LAB_10b1c2f1c;
      if ((bStack_168 & 1) != 0) goto LAB_10b1c2dbc;
      lVar13 = CONCAT71(uStack_24f,uStack_250);
      if (lVar13 != 0) {
        func_0x00010b1ebf40();
        (*extraout_x8_08)();
      }
      param_1[0x5d] = lVar13;
      param_1[0x5c] = lVar13;
      pppppplVar21 = (long ******)0x1;
    }
    else {
LAB_10b1c2dbc:
      uVar12 = 0;
      unaff_x30 = (undefined *******)&ppppplStack_190;
      FUN_10b19676c();
      plVar10 = plStack_98;
      param_1[0x5c] = 0;
      for (plVar23 = plStack_a0; in_ZR = plVar23 == plVar10, !(bool)in_ZR; plVar23 = plVar23 + 0x13)
      {
        puVar9 = (undefined8 *)plVar23[10];
        in_ZR = plVar23[0xb] - (long)puVar9 == 0x10;
        if (!(bool)in_ZR) goto LAB_10b1c3038;
        uStack_308 = puVar9[1];
        pppppuStack_310 = (undefined *****)*puVar9;
        if (puVar9[1] != 0) {
          do {
            func_0x00010b1eb124();
          } while (extraout_w10_02 != 0);
        }
        unaff_x30 = (undefined *******)&pppppuStack_310;
        func_0x00010b1ecaf8();
        func_0x000107c27d78(&pppppuStack_310);
        if ((uVar12 & 1) == 0) goto LAB_10b1c3038;
        uVar12 = *(ulong *)plVar23[10];
        if (uVar12 == 0) {
          uVar12 = 0;
        }
        else {
          func_0x00010b1ebf40();
          (*extraout_x8_07)();
        }
        param_1[0x5c] = param_1[0x5c] + uVar12;
        uStack_48 = 0;
        ppppplStack_60 = (long *****)0x0;
        uStack_58 = 0;
        ppppplStack_68 = (long *****)&PTR_DAT_110ccaac8;
        if ((char)plVar23[0x12] == '\x01') {
          FUN_10b17d944(&ppppplStack_130,plVar23 + 0xd);
        }
        else {
          FUN_10b1d320c(&ppppplStack_130,&ppppplStack_68);
        }
        FUN_10b24d1ec(&ppppplStack_68);
        lVar13 = param_1[0x5a];
        uStack_120 = uVar12;
        func_0x00010b1edc70();
        FUN_10b1c345c(lVar13 + 0x10,&ppppplStack_68);
        unaff_x30 = (undefined *******)&ppppplStack_130;
        FUN_10b1c3524();
        func_0x00010b1eccec();
        uVar12 = 0;
        FUN_10b24d1ec();
      }
      ppppplStack_318 = ppppplStack_a8;
      ppppplStack_320 = ppppplStack_b0;
      if ((undefined8 ******)ppppplStack_a8 != (undefined8 ******)0x0) {
        do {
          func_0x00010b1eb124();
        } while (extraout_w10_05 != 0);
      }
      unaff_x30 = (undefined *******)&ppppplStack_320;
      func_0x00010b1ecaf8();
      func_0x000107c27d78(&ppppplStack_320);
      if ((uVar12 & 1) == 0) {
LAB_10b1c3038:
        pppppplVar21 = (long ******)0x0;
      }
      else {
        ppppppuVar14 = (undefined8 ******)ppppplStack_b0;
        if ((undefined8 ******)ppppplStack_b0 != (undefined8 ******)0x0) {
          func_0x00010b1ebf40();
          (*extraout_x8_09)();
        }
        param_1[0x5d] = (long)ppppppuVar14;
        func_0x00010b1ee3ac(param_1[0x5c] + (long)ppppppuVar14);
        pppppplVar21 = (long ******)0x1;
      }
      FUN_10b1967f8(&ppppplStack_b0);
    }
    func_0x00010b196744(&ppppplStack_190);
  }
  ppppplVar24 = *pppppplVar21;
  ppppplVar20 = pppppplVar21[2];
  unaff_x30 = (undefined *******)param_1[0x55];
  (**(code **)(*(long *)param_1[0x58] + 0x58))(apppppuStack_f8);
  in_ZR = cStack_e0 == '\x01';
  if ((bool)in_ZR) {
    unaff_x30 = (undefined *******)apppppuStack_f8;
    func_0x000107c27fe4(&ppppplStack_190,unaff_x30,0);
    ppppplStack_128 = ppppplStack_188;
    ppppplStack_130 = ppppplStack_190;
    uStack_120 = uStack_180;
    ppppplStack_188 = (long *****)0x0;
    uStack_180 = 0;
    ppppplStack_190 = (long *****)0x0;
    uStack_118 = 0;
    ppppuStack_110 = ppppplVar24;
    ppppuStack_108 = ppppplVar20;
    FUN_10b212c54(appplStack_38,&ppppplStack_130);
    FUN_10b17d480(&ppppplStack_130);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppplStack_190);
    if ((bStack_18 & 1) != 0) {
      ppppplStack_68 = (long *****)&PTR_FUN_110cfd9c8;
      ppppplStack_60 = (long *****)0x0;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_58 = 0;
      uStack_40 = 0;
      pppplStack_138 = appplStack_38;
      ppppplStack_b0 = &pppplStack_138;
      ppppplStack_a8 = (long *****)((ulong)ppppplStack_a8 & 0xffffffffffffff00);
      bStack_78 = 0;
      FUN_10b1de72c(&ppppplStack_b0);
      lStack_338 = 0;
      do {
        uVar15 = (uint)bStack_78;
        cVar2 = SBORROW4(uVar15,1);
        cVar3 = (int)(uVar15 - 1) < 0;
        in_ZR = uVar15 == 1;
        bVar18 = bStack_78;
        if ((!(bool)in_ZR) || ((uStack_80 & 1) == 0)) goto LAB_10b1c2f30;
        func_0x000107c303b4(&uStack_58);
        func_0x00010b1ebcdc();
        ppppplStack_190 = (long *****)extraout_x10;
        if (cVar3 == cVar2) {
          ppppplStack_190 = (long *****)extraout_x9;
        }
        ppppplStack_188 = (long *****)CONCAT44(extraout_var,extraout_w11_00);
        if (cVar3 == cVar2) {
          ppppplStack_188 = (long *****)extraout_x8_04;
        }
        func_0x000107328610();
        puVar8 = (undefined8 *)param_1[0x55];
        lVar13 = (long)*(char *)((long)puVar8 + 0x17);
        puVar9 = puVar8;
        if (lVar13 < 0) {
          puVar9 = (undefined8 *)*puVar8;
          lVar13 = puVar8[1];
        }
        func_0x00010b1ebcdc(puVar9,lVar13);
        FUN_10b206e3c(&ppppplStack_1d0);
        unaff_x30 = (undefined *******)&ppppplStack_1d0;
        FUN_10b202630(&ppppplStack_190);
        func_0x00010b1ec1c8();
        if ((bRam00000001137f4128 & 1) == 0) {
          iVar5 = 0x137f4128;
          ___cxa_guard_acquire();
          if (iVar5 != 0) {
            func_0x000107c2be18(&PTR_DAT_110cc2fd0);
            func_0x00010b1eba6c(0x1137f4120);
          }
        }
        uStack_198 = uRam00000001137f4120;
        ppppplStack_1d0 = (long *****)&pppppuStack_1a0;
        ppppplStack_1c8 = (long *****)((ulong)ppppplStack_1c8 & 0xffffffffffffff00);
        bStack_1a8 = 0;
        pppppuStack_1a0 = &ppppplStack_a8;
        FUN_10b1de84c(&ppppplStack_1d0);
        unaff_x25 = 0;
        while (bVar18 = bStack_1a8, (bStack_1a8 & 1) != 0) {
          pppppuStack_1f0 = (undefined *****)((ulong)pppppuStack_1f0 & 0xffffffffffffff00);
          uStack_1d8 = 0;
          uVar15 = (uint)(byte)uStack_1b0;
          cVar2 = SBORROW4(uVar15,1);
          cVar3 = (int)(uVar15 - 1) < 0;
          in_ZR = uVar15 == 1;
          if ((bool)in_ZR) {
            func_0x000107c27994(&pppppuStack_1f0,&ppppplStack_1c8);
            lVar13 = lStack_1e8;
            pppppuVar1 = pppppuStack_1f0;
            uStack_1d8 = 1;
            puVar9 = (undefined8 *)0x68;
            __Znwm();
            plVar23 = puVar9 + 1;
            *plVar23 = 0;
            puVar9[2] = 0;
            *puVar9 = &PTR_DAT_110cc4248;
            ppppppuVar25 = (undefined ******)(puVar9 + 3);
            pppppuStack_d8 = pppppuVar1;
            puStack_d0 = (undefined8 *)lVar13;
            uStack_c8 = uStack_1e0;
            lStack_1e8 = 0;
            uStack_1e0 = 0;
            pppppuStack_1f0 = (undefined *****)0x0;
            func_0x00010b20e854(ppppppuVar25,&pppppuStack_d8);
            func_0x000107c27914(&pppppuStack_d8);
            pppppuStack_200 = (undefined *****)ppppppuVar25;
            puStack_1f8 = puVar9;
            if ((puVar9[5] == 0) || (*(long *)(puVar9[5] + 8) == -1)) {
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar4) {
                  *plVar23 = *plVar23 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                pppppuStack_c0 = (undefined *****)ppppppuVar25;
                puStack_b8 = puVar9;
              } while (cVar3 != '\0');
              do {
                func_0x00010b1eaf98();
              } while (extraout_w11_01 != 0);
              pppppuStack_d8 = (undefined *****)puVar9[4];
              puVar9[4] = ppppppuVar25;
              puVar9[5] = puVar9;
              FUN_10b1e4bdc(&pppppuStack_d8);
              func_0x00010b1e4c00(&pppppuStack_c0);
            }
            plVar10 = (long *)param_1[0x58];
            unaff_x25 = (unaff_x25 + lVar13) - (long)pppppuVar1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar4) {
                *plVar23 = *plVar23 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            unaff_x30 = (undefined *******)&pppppuStack_d8;
            pppppuStack_d8 = (undefined *****)ppppppuVar25;
            puStack_d0 = puVar9;
            (**(code **)(*plVar10 + 0x20))(plVar10,unaff_x30,&pppppuStack_158);
            cVar3 = (int)plVar10 < 0;
            bVar4 = (int)plVar10 == 0;
            cVar2 = '\0';
            in_ZR = bVar4;
            func_0x000107c27f10(&pppppuStack_d8);
            func_0x00010b1e4c00(&pppppuStack_200);
          }
          else {
            unaff_x30 = (undefined *******)&ppppplStack_1c8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (&pppppuStack_1f0);
            bVar4 = false;
            uStack_1d8 = 0;
          }
          func_0x00010b1d6540(&pppppuStack_1f0);
          if (!bVar4) break;
          FUN_10b1de84c(&ppppplStack_1d0);
        }
        func_0x00010b1d6568(&ppppplStack_1c8);
        if ((bVar18 & 1) == 0) {
          uStack_1b0 = 0;
          ppppplStack_1c8 = (long *****)0x0;
          uStack_1c0 = 0;
          ppppplStack_1d0 = (long *****)&PTR_DAT_110ccaac8;
          FUN_10b24d0fc(&ppppplStack_1d0);
          uStack_1b0 = CONCAT44(3,(undefined4)uStack_1b0);
          puStack_1b8 = &DAT_11383d918;
          ppppppuVar14 = (undefined8 ******)ppppplStack_1c8;
          if (((ulong)ppppplStack_1c8 & 1) != 0) {
            ppppppuVar14 = *(undefined8 *******)((ulong)ppppplStack_1c8 & 0xfffffffffffffffe);
          }
          func_0x000107c30250(&puStack_1b8,ppppppuVar14);
          func_0x00010b1ebcdc();
          pppppuStack_1f0 = (undefined *****)extraout_x10_00;
          if (cVar3 == cVar2) {
            pppppuStack_1f0 = (undefined *****)extraout_x9_00;
          }
          lStack_1e8 = CONCAT44(extraout_var_00,extraout_w11_02);
          if (cVar3 == cVar2) {
            lStack_1e8 = extraout_x8_05;
          }
          func_0x000107328610();
          lVar13 = param_1[0x5a];
          uStack_1c0 = unaff_x25;
          func_0x00010b1edc70(&pppppuStack_1f0);
          FUN_10b1c345c(lVar13 + 0x10,&pppppuStack_1f0);
          lStack_338 = unaff_x25 + lStack_338;
          unaff_x30 = (undefined *******)&ppppplStack_1d0;
          FUN_10b1c3524();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppuStack_1f0);
          FUN_10b24d1ec(&ppppplStack_1d0);
        }
        func_0x00010b1eceb4();
        if ((bVar18 & 1) != 0) goto LAB_10b1c2f2c;
        FUN_10b1de72c(&ppppplStack_b0);
      } while( true );
    }
    pppppplVar21 = (long ******)0x0;
    goto LAB_10b1c2fc4;
  }
  pppppplVar21 = (long ******)0x0;
  goto LAB_10b1c2fcc;
LAB_10b1c2f2c:
  bVar18 = 1;
LAB_10b1c2f30:
  func_0x00010b1d6588(&ppppplStack_a8);
  if ((bVar18 & 1) == 0) {
    func_0x00010bcd54ac(&ppppplStack_190,&ppppplStack_68);
    param_1[0x5d] = (long)ppppplStack_188 - (long)ppppplStack_190;
    pppppplVar21 = &ppppplStack_b0;
    func_0x000107c3171c(pppppplVar21,&ppppplStack_190);
    ppppplStack_1c8 = ppppplStack_a8;
    ppppplStack_1d0 = ppppplStack_b0;
    if ((undefined8 ******)ppppplStack_a8 != (undefined8 ******)0x0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10_04 != 0);
    }
    unaff_x30 = (undefined *******)&ppppplStack_1d0;
    func_0x00010b1ecaf8();
    func_0x000107c27d78(&ppppplStack_1d0);
    if (((ulong)pppppplVar21 & 1) != 0) {
      func_0x00010b1ee3ac(param_1[0x5d] + lStack_338);
    }
    func_0x00010b1ec42c();
    func_0x000107c27914(&ppppplStack_190);
  }
  else {
    pppppplVar21 = (long ******)0x0;
  }
  FUN_10b5259a4(&ppppplStack_68);
LAB_10b1c2fc4:
  FUN_10b1d65d0(appplStack_38);
LAB_10b1c2fcc:
  func_0x000107c279a4(apppppuStack_f8);
  goto LAB_10b1c2ca8;
}



/* Entry: 10b1c3338; end: 10b1c340f;  */

void FUN_10b1c3338(void)

{
  int extraout_w10;
  long unaff_x20;
  undefined1 auStack_50 [8];
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x00010b1ebe28();
  func_0x00010b1e4944(&lStack_40);
  if (lStack_40 == 0) {
    FUN_10b1e4970(auStack_50,unaff_x20 + 0x20);
    FUN_10b1e49c4(&lStack_40,auStack_50);
    func_0x00010b1ebfec();
    if (lStack_40 == 0) {
      func_0x00010b1ecd18();
    }
    else {
      func_0x00010b1ecfbc();
      func_0x00010b1e49e8();
    }
    if (lStack_40 == 0) goto LAB_10b1c33c0;
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    FUN_10b1bf2fc(auStack_50);
    func_0x00010b1edd30();
    func_0x00010b1ebeac();
  }
LAB_10b1c33c0:
  lStack_48 = lStack_38;
  if (lStack_38 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  func_0x00010b1e4b60();
  func_0x00010b1219bc(auStack_50);
  FUN_10b1e4d20(&lStack_40);
  return;
}



/* Entry: 10b1c3410; end: 10b1c345b;  */

undefined1  [16] FUN_10b1c3410(long *param_1)

{
  long lVar1;
  long lVar2;
  code *extraout_x8;
  undefined1 auVar3 [16];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010b1eb9d4();
    (*extraout_x8)();
    lVar2 = *param_1;
    if (lVar2 != 0) {
      func_0x00010b1eba4c();
      goto LAB_10b1c3450;
    }
  }
  lVar2 = 0;
LAB_10b1c3450:
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 10b1c345c; end: 10b1c3523;  */

int * FUN_10b1c345c(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int *unaff_x19;
  
  func_0x00010b1eb648();
  func_0x000107c28188(param_2);
  func_0x00010b1ee2f0();
  piVar1 = unaff_x19;
  func_0x00010b1eb4b4();
  if (piVar1 == (int *)0x0) {
    piVar1 = unaff_x19;
    func_0x000107c27d60();
    if ((int)piVar1 != 0) {
      func_0x000107c28188();
      func_0x00010b1ee2f0();
      func_0x00010b1eb4b4();
    }
    piVar1 = unaff_x19;
    func_0x000107c27d64();
    func_0x00010564b8a8(piVar1 + 2,*(undefined8 *)(unaff_x19 + 6));
    uVar2 = *(undefined8 *)(unaff_x19 + 6);
    *(undefined ***)(piVar1 + 8) = &PTR_DAT_110ccaac8;
    *(undefined8 *)(piVar1 + 10) = uVar2;
    piVar1[0x10] = 0;
    piVar1[0x11] = 0;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    func_0x000107c27d68();
    *unaff_x19 = *unaff_x19 + 1;
  }
  return piVar1 + 8;
}



/* Entry: 10b1c3524; end: 10b1c357f;  */

long FUN_10b1c3524(long param_1,long param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar2;
  ulong extraout_x9;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b1ed71c();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x00010b1ee33c();
      uVar1 = extraout_x8_00;
      uVar2 = extraout_x9;
    }
    if (uVar1 == uVar2) {
      FUN_10b24d570(param_1);
    }
    else {
      FUN_10b24d538(param_1);
    }
  }
  return param_1;
}



/* Entry: 10b1c3580; end: 10b1c367b;  */

long FUN_10b1c3580(long param_1)

{
  int extraout_w10;
  long unaff_x19;
  long *unaff_x20;
  long lVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b1ebe28();
  lVar1 = *(long *)(param_1 + 0x2a8);
  if (lVar1 == 0) {
    lVar1 = unaff_x19;
    func_0x00010b134530();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    FUN_10b1239f8(lVar1 + 0x18,unaff_x20 + 3);
    func_0x00010b136370();
    FUN_10b1212a4(unaff_x19 + 0x90,unaff_x20 + 0x12);
    FUN_10b12132c(unaff_x19 + 0x138,unaff_x20 + 0x27);
    FUN_10b123a58(unaff_x19 + 0x180,unaff_x20 + 0x30);
    func_0x00010b134f4c();
    lVar1 = unaff_x20[0x3a];
    *(long *)(unaff_x19 + 0x1c8) = unaff_x20[0x39];
    *(long *)(unaff_x19 + 0x1d0) = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    FUN_10b123ac0(unaff_x19 + 0x1d8,unaff_x20 + 0x3b);
    return unaff_x19;
  }
  if ((char)unaff_x20[0xd] == '\x01') {
    if (*(char *)((long)unaff_x20 + 0x47) < '\0') {
      if (unaff_x20[7] == 0) goto LAB_10b1c3628;
    }
    else if (*(char *)((long)unaff_x20 + 0x47) == '\0') goto LAB_10b1c3628;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_48,unaff_x20 + 6);
    uStack_d8 = (undefined4)unaff_x20[5];
    uStack_e8 = uStack_40;
    uStack_f0 = uStack_48;
    uStack_e0 = uStack_38;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_10b1bf250(lVar1,&uStack_f0);
    func_0x00010b1eb738();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  }
  else {
LAB_10b1c3628:
    lVar1 = 0;
  }
  if (*(char *)(*unaff_x20 + 0x76) == '\x01') {
    FUN_10b1bdb60(&uStack_f0,*unaff_x20,unaff_x20 + 0x53,lVar1);
    func_0x00010b1215a0(unaff_x20 + 0x3d,&uStack_f0);
    func_0x00010b1ec7bc();
  }
  FUN_10b12394c();
  return unaff_x19;
}



/* Entry: 10b1c367c; end: 10b1c38c3;  */

void FUN_10b1c367c(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  code **ppcVar6;
  code **ppcVar7;
  code ***pppcVar8;
  undefined1 *puVar9;
  code **ppcVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  long lVar12;
  undefined8 extraout_x8_00;
  long unaff_x19;
  code ***pppcVar13;
  code **ppcVar14;
  code *pcVar15;
  bool bVar16;
  code **unaff_x22;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_1f0 [16];
  undefined1 *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  char cStack_1b0;
  code **ppcStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  code **ppcStack_170;
  code **ppcStack_168;
  code **ppcStack_160;
  code **ppcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  ulong uStack_130;
  int iStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  code **ppcStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  code *apcStack_e8 [3];
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_38;
  
  puVar5 = param_1;
  func_0x00010b1eaeac();
  lVar12 = puVar5[0x55];
  *(undefined8 *)(lVar12 + 0x20) = puVar5[0x5d];
  *(long *)(lVar12 + 0x28) = *(long *)(lVar12 + 0x28) + puVar5[0x5c];
  plVar1 = puVar5 + 0x5a;
  lVar12 = puVar5[0x5a];
  uStack_38 = extraout_x8;
  if (lVar12 == 0) {
    func_0x00010b1ebb18(&pcStack_a8);
    FUN_10b1c1ed0(plVar1,&pcStack_a8);
    FUN_10b1e4868(&pcStack_a8);
    lVar12 = *plVar1;
  }
  uVar4 = *(int *)(lVar12 + 0x10) == 1;
  if (0 < *(int *)(lVar12 + 0x10)) {
    *(undefined1 *)(lVar12 + 0x30) = 1;
    lVar12 = *plVar1;
  }
  bVar2 = *(byte *)(lVar12 + 0x30);
  ppcVar14 = (code **)(ulong)bVar2;
  func_0x00010b1ede84(param_1[0x55] + 0xf8);
  uStack_d0 = param_1[0x53];
  uStack_c8 = *(undefined1 *)(param_1 + 0x54);
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  uStack_b8 = param_1[0x56];
  uStack_c0 = param_1[0x55];
  uStack_b0 = param_1[0x57];
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  uVar11 = 0;
  FUN_10b1bdc50(*param_1,param_1[1]);
  func_0x00010b1d3e60(&uStack_d0);
  FUN_10b1c3994(*param_1,param_1[0x5c]);
  if ((bVar2 & 1) == 0) {
    func_0x00010b1ee00c();
    pcStack_a8 = FUN_10b1e4c24;
    ppuStack_a0 = &PTR_DAT_110cc4288;
    ppcVar10 = &pcStack_a8;
    func_0x00010b1d664c(unaff_x19 + 0x278);
    ppcVar6 = &pcStack_a8;
    func_0x000107c281f0();
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (apcStack_e8,param_1 + 2);
    ppcVar14 = &pcStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&pcStack_a8,param_1[1])
    ;
    func_0x00010b1eceac(*param_1,&uStack_90);
    unaff_x22 = &pcStack_a8;
    ppcVar10 = apcStack_e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_80);
    pcStack_68 = FUN_10b1e4c38;
    ppuStack_60 = &PTR_FUN_110cc42a0;
    puVar5 = (undefined8 *)0x40;
    __Znwm();
    puVar5[1] = ppuStack_a0;
    *puVar5 = pcStack_a8;
    puVar5[2] = uStack_98;
    ppuStack_a0 = (undefined **)0x0;
    uStack_98 = 0;
    pcStack_a8 = (code *)0x0;
    puVar5[4] = uStack_88;
    puVar5[3] = uStack_90;
    uStack_90 = 0;
    uStack_88 = 0;
    puVar5[6] = uStack_78;
    puVar5[5] = uStack_80;
    puVar5[7] = uStack_70;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    ppcVar6 = &pcStack_a8;
    puStack_58 = puVar5;
    FUN_10b1c3be8();
    func_0x00010b1ee00c();
    func_0x00010b1edc04();
    func_0x00010b1edb9c();
    func_0x00010b1ec670();
  }
  func_0x00010b1eaddc(uStack_38);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  ppcVar7 = ppcVar6;
  func_0x00010b1ec670();
  func_0x00010b1eb590();
  pcStack_f8 = FUN_10b1c38c4;
  puStack_110 = param_1;
  ppcStack_108 = ppcVar6;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x00010b1eae28();
  uStack_118 = extraout_x8_00;
  FUN_10b1d4a0c();
  if ((int)ppcVar7 != 0) {
    FUN_10b1e47a8(&uStack_130,1);
    puStack_120[1] = 0;
    puStack_120[2] = 0;
    *puStack_120 = &PTR_FUN_110cc41a8;
    FUN_10b121838(puStack_120 + 3,ppcVar10);
    func_0x00010b1ed7a0();
    func_0x00010b1e4858();
    func_0x00010b1ee4e4();
    ppcVar6 = ppcVar10;
    FUN_10b24d940(ppcVar10);
    func_0x000107c2823c(&uStack_130,ppcVar6);
    ppcVar7 = ppcVar10;
    FUN_10b4d1758(ppcVar10,uStack_130,iStack_128 - (int)uStack_130);
    uVar11 = uStack_130;
    if (((ulong)ppcVar7 & 1) != 0) {
      func_0x00010b1edef0();
      func_0x00010b1eb714();
      func_0x00010b1e488c();
      uVar11 = uStack_130;
    }
    func_0x00010b1ec5e4();
    func_0x00010b1ebfe4();
  }
  func_0x00010b1eaddc(uStack_118);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  ppcVar6 = ppcVar7;
  func_0x00010b1eb590();
  pcStack_148 = FUN_10b1c3994;
  ppcStack_170 = unaff_x22;
  ppcStack_168 = ppcVar14;
  ppcStack_160 = ppcVar10;
  ppcStack_158 = ppcVar7;
  ppuStack_150 = &puStack_100;
  func_0x00010b1eb648();
  ppcStack_1a8 = ppcVar6 + 0x89;
  uStack_1a0 = 1;
  __ZNSt3__15mutex4lockEv();
  if (ppcVar7[0x91] == (code *)0x8000000000000000) goto LAB_10b1c3b9c;
  pcVar15 = ppcVar7[0x91] + (long)ppcVar10;
  pcVar15 = (code *)((ulong)pcVar15 & ((long)pcVar15 >> 0x3f ^ 0xffffffffffffffffU));
  ppcVar7[0x91] = pcVar15;
  pppcVar8 = &ppcStack_1a8;
  func_0x000107c280c4();
  if (((-1 < (long)ppcVar10) || (*(float *)((long)ppcVar7 + 0x65c) <= 0.0)) ||
     (ppcVar14 = ppcVar7 + 0x88, *(char *)ppcVar14 != '\x01')) {
    pppcVar13 = (code ***)0x0;
LAB_10b1c3a54:
    bVar16 = false;
  }
  else {
    func_0x00010b1ee07c();
    pppcVar13 = pppcVar8;
    if ((uVar11 & 1) == 0) {
      pppcVar13 = (code ***)0x0;
    }
    func_0x00010b1ecebc(pppcVar13);
    pppcVar13 = pppcVar8;
    if ((uVar11 & 1) == 0) goto LAB_10b1c3a54;
    if ((0.0 < *(float *)((long)ppcVar7 + 0x65c)) &&
       ((float)pcVar15 < *(float *)((long)ppcVar7 + 0x65c) * (float)(long)pppcVar8)) {
      do {
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppcVar14,0x10);
        if (bVar16) {
          *(char *)ppcVar14 = '\0';
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    bVar16 = true;
  }
  if (*(float *)((long)ppcVar7 + 0x654) <= 0.0) goto LAB_10b1c3b9c;
  auStack_1d8[0] = 0;
  cStack_1b0 = '\0';
  func_0x00010b1eced4(auStack_1f0);
  if (puStack_1e0[0x28] == '\x01') {
    if (!bVar16) {
      func_0x00010b1ee07c();
      pppcVar13 = pppcVar8;
      if ((uVar11 & 1) == 0) {
        pppcVar13 = (code ***)0x0;
      }
      func_0x00010b1ecebc(pppcVar13);
      pppcVar13 = pppcVar8;
      if ((uVar11 & 1) == 0) goto LAB_10b1c3b5c;
    }
    puVar9 = puStack_1e0;
    if ((float)pcVar15 < *(float *)((long)ppcVar7 + 0x654) * (float)(long)pppcVar13) {
      cVar3 = puStack_1e0[0x28];
      if (cVar3 == cStack_1b0) {
        if (cVar3 != '\0') {
          FUN_10b163268(&uStack_198,puStack_1e0);
          uVar19 = *(undefined8 *)(puVar9 + 0x10);
          uVar17 = *(undefined8 *)(puVar9 + 8);
          *(undefined8 *)(puVar9 + 0x10) = uStack_1c8;
          *(undefined8 *)(puVar9 + 8) = uStack_1d0;
          uVar20 = *(undefined8 *)(puVar9 + 0x20);
          uVar18 = *(undefined8 *)(puVar9 + 0x18);
          *(undefined8 *)(puVar9 + 0x20) = uStack_1b8;
          *(undefined8 *)(puVar9 + 0x18) = uStack_1c0;
          uStack_1c8 = uStack_188;
          uStack_1d0 = uStack_190;
          uStack_1b8 = uStack_178;
          uStack_1c0 = uStack_180;
          uStack_190 = uVar17;
          uStack_188 = uVar19;
          uStack_180 = uVar18;
          uStack_178 = uVar20;
          func_0x000107c27b5c();
        }
      }
      else {
        if (cVar3 == '\0') {
          func_0x00010b1de53c(puStack_1e0,auStack_1d8);
          puVar9 = auStack_1d8;
        }
        else {
          func_0x00010b1de53c(auStack_1d8,puStack_1e0);
        }
        FUN_10b1d92f0(puVar9);
      }
      if (puStack_1e0[0x40] == '\x01') {
        FUN_10b12d6b8(puStack_1e0 + 0x30);
        puStack_1e0[0x40] = 0;
      }
    }
  }
LAB_10b1c3b5c:
  func_0x00010b1eb9c4();
  if (cStack_1b0 == '\x01') {
    func_0x000107c27b68(auStack_1d8);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010b1eb5b4(ppcVar7[0x47],0xb0,&uStack_198);
    FUN_10b120998(&uStack_198);
  }
  func_0x00010b1de558(auStack_1d8);
LAB_10b1c3b9c:
  func_0x00010b1ece00();
  return;
}



/* Entry: 10b1c38c4; end: 10b1c3993;  */

void FUN_10b1c38c4(ulong param_1,ulong param_2,ulong param_3)

{
  char *pcVar1;
  char cVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long *plVar5;
  ulong uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_100 [16];
  undefined1 *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  long lStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_40;
  int iStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b1eae28();
  uStack_28 = extraout_x8;
  FUN_10b1d4a0c();
  if ((int)param_1 != 0) {
    FUN_10b1e47a8(&uStack_40,1);
    puStack_30[1] = 0;
    puStack_30[2] = 0;
    *puStack_30 = &PTR_FUN_110cc41a8;
    FUN_10b121838(puStack_30 + 3,param_2);
    func_0x00010b1ed7a0();
    func_0x00010b1e4858();
    func_0x00010b1ee4e4();
    uVar6 = param_2;
    FUN_10b24d940(param_2);
    func_0x000107c2823c(&uStack_40,uVar6);
    param_1 = param_2;
    FUN_10b4d1758(param_2,uStack_40,iStack_38 - (int)uStack_40);
    param_3 = uStack_40;
    if ((param_1 & 1) != 0) {
      func_0x00010b1edef0();
      func_0x00010b1eb714();
      func_0x00010b1e488c();
      param_3 = uStack_40;
    }
    func_0x00010b1ec5e4();
    func_0x00010b1ebfe4();
  }
  func_0x00010b1eaddc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = param_1;
  func_0x00010b1eb590();
  func_0x00010b1eb648();
  lStack_b8 = uVar6 + 0x448;
  uStack_b0 = 1;
  __ZNSt3__15mutex4lockEv();
  if (*(long *)(param_1 + 0x488) == -0x8000000000000000) goto LAB_10b1c3b9c;
  uVar6 = *(long *)(param_1 + 0x488) + param_2;
  uVar6 = uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
  *(ulong *)(param_1 + 0x488) = uVar6;
  plVar3 = &lStack_b8;
  func_0x000107c280c4();
  if (((-1 < (long)param_2) || (*(float *)(param_1 + 0x65c) <= 0.0)) ||
     (pcVar1 = (char *)(param_1 + 0x440), *pcVar1 != '\x01')) {
    plVar5 = (long *)0x0;
LAB_10b1c3a54:
    bVar7 = false;
  }
  else {
    func_0x00010b1ee07c();
    plVar5 = plVar3;
    if ((param_3 & 1) == 0) {
      plVar5 = (long *)0x0;
    }
    func_0x00010b1ecebc(plVar5);
    plVar5 = plVar3;
    if ((param_3 & 1) == 0) goto LAB_10b1c3a54;
    if ((0.0 < *(float *)(param_1 + 0x65c)) &&
       ((float)uVar6 < *(float *)(param_1 + 0x65c) * (float)(long)plVar3)) {
      do {
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar7) {
          *pcVar1 = '\0';
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bVar7 = true;
  }
  if (*(float *)(param_1 + 0x654) <= 0.0) goto LAB_10b1c3b9c;
  auStack_e8[0] = 0;
  cStack_c0 = '\0';
  func_0x00010b1eced4(auStack_100);
  if (puStack_f0[0x28] == '\x01') {
    if (!bVar7) {
      func_0x00010b1ee07c();
      plVar5 = plVar3;
      if ((param_3 & 1) == 0) {
        plVar5 = (long *)0x0;
      }
      func_0x00010b1ecebc(plVar5);
      plVar5 = plVar3;
      if ((param_3 & 1) == 0) goto LAB_10b1c3b5c;
    }
    puVar4 = puStack_f0;
    if ((float)uVar6 < *(float *)(param_1 + 0x654) * (float)(long)plVar5) {
      cVar2 = puStack_f0[0x28];
      if (cVar2 == cStack_c0) {
        if (cVar2 != '\0') {
          FUN_10b163268(&uStack_a8,puStack_f0);
          uVar10 = *(undefined8 *)(puVar4 + 0x10);
          uVar8 = *(undefined8 *)(puVar4 + 8);
          *(undefined8 *)(puVar4 + 0x10) = uStack_d8;
          *(undefined8 *)(puVar4 + 8) = uStack_e0;
          uVar11 = *(undefined8 *)(puVar4 + 0x20);
          uVar9 = *(undefined8 *)(puVar4 + 0x18);
          *(undefined8 *)(puVar4 + 0x20) = uStack_c8;
          *(undefined8 *)(puVar4 + 0x18) = uStack_d0;
          uStack_d8 = uStack_98;
          uStack_e0 = uStack_a0;
          uStack_c8 = uStack_88;
          uStack_d0 = uStack_90;
          uStack_a0 = uVar8;
          uStack_98 = uVar10;
          uStack_90 = uVar9;
          uStack_88 = uVar11;
          func_0x000107c27b5c();
        }
      }
      else {
        if (cVar2 == '\0') {
          func_0x00010b1de53c(puStack_f0,auStack_e8);
          puVar4 = auStack_e8;
        }
        else {
          func_0x00010b1de53c(auStack_e8,puStack_f0);
        }
        FUN_10b1d92f0(puVar4);
      }
      if (puStack_f0[0x40] == '\x01') {
        FUN_10b12d6b8(puStack_f0 + 0x30);
        puStack_f0[0x40] = 0;
      }
    }
  }
LAB_10b1c3b5c:
  func_0x00010b1eb9c4();
  if (cStack_c0 == '\x01') {
    func_0x000107c27b68(auStack_e8);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x00010b1eb5b4(*(undefined8 *)(param_1 + 0x238),0xb0,&uStack_a8);
    FUN_10b120998(&uStack_a8);
  }
  func_0x00010b1de558(auStack_e8);
LAB_10b1c3b9c:
  func_0x00010b1ece00();
  return;
}



/* Entry: 10b1c3994; end: 10b1c3be7;  */

void FUN_10b1c3994(long param_1,ulong param_2)

{
  char *pcVar1;
  char cVar2;
  long *plVar3;
  undefined1 *puVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  ulong uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_b0 [16];
  undefined1 *puStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char cStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b1eb648();
  lStack_68 = param_1 + 0x448;
  uStack_60 = 1;
  __ZNSt3__15mutex4lockEv();
  if (*(long *)(unaff_x19 + 0x488) == -0x8000000000000000) goto LAB_10b1c3b9c;
  uVar6 = *(long *)(unaff_x19 + 0x488) + unaff_x20;
  uVar6 = uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
  *(ulong *)(unaff_x19 + 0x488) = uVar6;
  plVar3 = &lStack_68;
  func_0x000107c280c4();
  if (((-1 < unaff_x20) || (*(float *)(unaff_x19 + 0x65c) <= 0.0)) ||
     (pcVar1 = (char *)(unaff_x19 + 0x440), *pcVar1 != '\x01')) {
    plVar5 = (long *)0x0;
LAB_10b1c3a54:
    bVar7 = false;
  }
  else {
    func_0x00010b1ee07c();
    plVar5 = plVar3;
    if ((param_2 & 1) == 0) {
      plVar5 = (long *)0x0;
    }
    func_0x00010b1ecebc(plVar5);
    plVar5 = plVar3;
    if ((param_2 & 1) == 0) goto LAB_10b1c3a54;
    if ((0.0 < *(float *)(unaff_x19 + 0x65c)) &&
       ((float)uVar6 < *(float *)(unaff_x19 + 0x65c) * (float)(long)plVar3)) {
      do {
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar7) {
          *pcVar1 = '\0';
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bVar7 = true;
  }
  if (*(float *)(unaff_x19 + 0x654) <= 0.0) goto LAB_10b1c3b9c;
  auStack_98[0] = 0;
  cStack_70 = '\0';
  func_0x00010b1eced4(auStack_b0);
  if (puStack_a0[0x28] == '\x01') {
    if (!bVar7) {
      func_0x00010b1ee07c();
      plVar5 = plVar3;
      if ((param_2 & 1) == 0) {
        plVar5 = (long *)0x0;
      }
      func_0x00010b1ecebc(plVar5);
      plVar5 = plVar3;
      if ((param_2 & 1) == 0) goto LAB_10b1c3b5c;
    }
    puVar4 = puStack_a0;
    if ((float)uVar6 < *(float *)(unaff_x19 + 0x654) * (float)(long)plVar5) {
      cVar2 = puStack_a0[0x28];
      if (cVar2 == cStack_70) {
        if (cVar2 != '\0') {
          FUN_10b163268(&uStack_58,puStack_a0);
          uVar10 = *(undefined8 *)(puVar4 + 0x10);
          uVar8 = *(undefined8 *)(puVar4 + 8);
          *(undefined8 *)(puVar4 + 0x10) = uStack_88;
          *(undefined8 *)(puVar4 + 8) = uStack_90;
          uVar11 = *(undefined8 *)(puVar4 + 0x20);
          uVar9 = *(undefined8 *)(puVar4 + 0x18);
          *(undefined8 *)(puVar4 + 0x20) = uStack_78;
          *(undefined8 *)(puVar4 + 0x18) = uStack_80;
          uStack_88 = uStack_48;
          uStack_90 = uStack_50;
          uStack_78 = uStack_38;
          uStack_80 = uStack_40;
          uStack_50 = uVar8;
          uStack_48 = uVar10;
          uStack_40 = uVar9;
          uStack_38 = uVar11;
          func_0x000107c27b5c();
        }
      }
      else {
        if (cVar2 == '\0') {
          func_0x00010b1de53c(puStack_a0,auStack_98);
          puVar4 = auStack_98;
        }
        else {
          func_0x00010b1de53c(auStack_98,puStack_a0);
        }
        FUN_10b1d92f0(puVar4);
      }
      if (puStack_a0[0x40] == '\x01') {
        FUN_10b12d6b8(puStack_a0 + 0x30);
        puStack_a0[0x40] = 0;
      }
    }
  }
LAB_10b1c3b5c:
  func_0x00010b1eb9c4();
  if (cStack_70 == '\x01') {
    func_0x000107c27b68(auStack_98);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010b1eb5b4(*(undefined8 *)(unaff_x19 + 0x238),0xb0,&uStack_58);
    FUN_10b120998(&uStack_58);
  }
  func_0x00010b1de558(auStack_98);
LAB_10b1c3b9c:
  func_0x00010b1ece00();
  return;
}



/* Entry: 10b1c3be8; end: 10b1c3c0b;  */

void FUN_10b1c3be8(void)

{
  long unaff_x19;
  
  func_0x00010b1ec7dc();
  func_0x00010b125908(unaff_x19 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b1c3c0c; end: 10b1c3d2f;  */

undefined8 ****
FUN_10b1c3c0c(undefined8 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 ****param_4,
             undefined8 param_5,undefined8 param_6,undefined8 ***param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  undefined1 *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  int iVar9;
  code *pcVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  undefined8 ****ppppuVar11;
  undefined1 auStack_cc8 [48];
  undefined1 auStack_c98 [24];
  long lStack_c80;
  undefined8 ***pppuStack_c70;
  undefined8 ***pppuStack_c68;
  undefined1 **ppuStack_c60;
  code *pcStack_c58;
  undefined8 **ppuStack_c50;
  undefined8 **ppuStack_c48;
  undefined1 auStack_c40 [40];
  undefined1 uStack_c18;
  undefined8 **ppuStack_c10;
  undefined8 **ppuStack_c08;
  undefined1 auStack_bf8 [80];
  undefined1 auStack_ba8 [24];
  undefined1 auStack_b90 [24];
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 **ppuStack_b60;
  undefined8 uStack_b58;
  undefined1 auStack_b50 [64];
  undefined1 auStack_b10 [168];
  undefined1 uStack_a68;
  undefined1 uStack_a28;
  undefined4 uStack_a20;
  undefined1 uStack_a1c;
  undefined1 uStack_a18;
  undefined1 uStack_a14;
  undefined1 auStack_a10 [24];
  undefined1 auStack_9f8 [136];
  byte bStack_970;
  undefined8 ***pppuStack_968;
  undefined8 uStack_960;
  undefined1 auStack_958 [24];
  undefined1 auStack_940 [64];
  char cStack_900;
  undefined8 uStack_8f8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  long lStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 **ppuStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined **ppuStack_670;
  undefined8 ***pppuStack_5e0;
  undefined **ppuStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  char cStack_558;
  undefined8 uStack_368;
  undefined8 **ppuStack_358;
  undefined8 uStack_350;
  undefined1 auStack_348 [56];
  undefined1 *puStack_310;
  code *pcStack_308;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  pppuVar5 = param_1;
  ppppuVar7 = param_4;
  func_0x00010b1eaeac();
  ppuStack_358 = pppuVar5;
  uStack_350 = param_2;
  uStack_38 = extraout_x8;
  FUN_10b121c1c(auStack_348,param_3);
  iVar9 = (int)param_5;
  uVar1 = *param_4 == (undefined8 ***)0x0;
  ppppuVar4 = (undefined8 ****)(param_1 + 0x49);
  if (!(bool)uVar1) {
    ppppuVar4 = param_4;
  }
  ppuStack_d0 = *ppppuVar4;
  ppuStack_c8 = ppppuVar4[1];
  if ((undefined8 ***)ppuStack_c8 != (undefined8 ***)0x0) {
    do {
      func_0x00010b1eb124();
      iVar9 = (int)param_5;
    } while (extraout_w10 != 0);
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_70 = 0;
  iVar3 = (int)&ppuStack_358;
  uVar8 = 0;
  FUN_10b1c1bc8();
  if (iVar3 == 0) {
LAB_10b1c3cc0:
    func_0x00010b1ede68();
    *(undefined1 *)(unaff_x19 + 0x278) = 0;
    *(undefined1 *)(unaff_x19 + 0x2a8) = 0;
  }
  else if (lStack_98 == 0) {
    func_0x00010b1ede68();
    uStack_68 = 0x10b1e4ce4;
    ppuStack_60 = &PTR_DAT_110cc42b8;
    func_0x00010b1edc04();
    func_0x00010b1edb9c();
  }
  else {
    iVar3 = (int)&ppuStack_358;
    FUN_10b1c2318();
    if (iVar3 == 0) goto LAB_10b1c3cc0;
    FUN_10b1c367c(&ppuStack_358);
  }
  ppppuVar4 = (undefined8 ****)&ppuStack_358;
  FUN_10b1d6668();
  func_0x00010b1eaddc(uStack_38);
  if ((bool)uVar1) {
    return ppppuVar4;
  }
  ___stack_chk_fail();
  func_0x00010b1eb668();
  FUN_10b1d6668();
  func_0x00010b1eb590();
  pcVar10 = FUN_10b1c3d30;
  func_0x00010b1ec024();
  puStack_310 = &stack0xfffffffffffffff0;
  pcStack_308 = pcVar10;
  func_0x00010b1eb8e4();
  func_0x00010b1eaeac();
  pppuStack_968 = ppppuVar4;
  uStack_960 = uVar8;
  uStack_368 = extraout_x8_00;
  FUN_10b121c1c(auStack_958,param_3);
  uVar1 = *param_7 == (undefined8 **)0x0;
  pppuVar5 = param_1 + 0x49;
  if (!(bool)uVar1) {
    pppuVar5 = param_7;
  }
  puStack_6e0 = *pppuVar5;
  puStack_6d8 = pppuVar5[1];
  if ((undefined8 **)puStack_6d8 != (undefined8 **)0x0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_00 != 0);
  }
  uStack_698 = 0;
  uStack_6a0 = 0;
  ppuStack_688 = (undefined8 ***)0x0;
  uStack_690 = 0;
  uStack_6b8 = 0;
  lStack_6c0 = 0;
  lStack_6a8 = 0;
  uStack_6b0 = 0;
  uStack_6c8 = 0;
  uStack_6d0 = 0;
  uStack_680 = 0;
  pppuVar5 = *ppppuVar7;
  if (pppuVar5 == (undefined8 ***)0x0) {
    pppuVar5 = (undefined8 ***)0x0;
  }
  else {
    func_0x00010b1ebf40();
    (*extraout_x8_01)();
  }
  ppppuVar4 = &pppuStack_968;
  FUN_10b1c1bc8(ppppuVar4,1);
  if ((int)ppppuVar4 != 0) {
    if (lStack_6a8 == 0) {
      func_0x00010b1ec4b0();
      pppuStack_5e0 = (undefined8 ****)0x10b1e4cf8;
      ppuStack_5d8 = &PTR_DAT_110cc42d0;
      func_0x00010b1d664c(unaff_x19 + 0x278,&pppuStack_5e0);
      func_0x000107c281f0(&pppuStack_5e0);
      goto LAB_10b1c3f80;
    }
    uVar2 = *(char *)(lStack_6c0 + 0x160) == '\x01';
    if ((((bool)uVar2) && (*(long *)(lStack_6c0 + 0x28) == 0)) &&
       (uVar2 = false, cStack_900 == '\x01')) {
      uStack_5c0 = 0;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      ppuStack_5d8 = (undefined **)0x0;
      pppuStack_5e0 = (undefined8 ****)0x0;
      FUN_10b1be194(&uStack_6d0,&pppuStack_5e0);
      func_0x00010b1d3e60(&pppuStack_5e0);
      puVar6 = auStack_958;
      FUN_10b1c41c0();
      if (puVar6 == (undefined1 *)0x0) {
        auStack_a10[0] = 0;
        bStack_970 = 0;
      }
      else {
        puVar6 = auStack_958;
        FUN_10b1c41c0(puVar6);
        FUN_10b125778(auStack_a10,puVar6);
        if ((iVar9 != 0) && ((bStack_970 & 1) != 0)) {
          FUN_10b24f3f8(auStack_a10);
          FUN_10b250520(auStack_9f8);
          func_0x00010b24f428(auStack_a10);
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_b90,auStack_958);
      uStack_b78 = uStack_8f8;
      uStack_b70 = 0;
      uStack_b68 = 0;
      uStack_b58 = 0;
      ppuStack_b60 = pppuVar5;
      func_0x00010b125750(auStack_b50,auStack_940);
      FUN_10b121494(auStack_b10,auStack_a10);
      uStack_a68 = 0;
      uStack_a28 = 0;
      uStack_a1c = (undefined1)((ulong)param_6 >> 0x20);
      uStack_a20 = (undefined4)param_6;
      uStack_a18 = 0;
      uStack_a14 = 0;
      FUN_10b202630(auStack_bf8,auStack_958);
      ppuStack_c08 = ppppuVar7[1];
      ppuStack_c10 = *ppppuVar7;
      if (ppppuVar7[1] != (undefined8 ***)0x0) {
        do {
          func_0x00010b1eb124();
        } while (extraout_w10_02 != 0);
      }
      auStack_c40[0] = 0;
      uStack_c18 = 0;
      FUN_10b17d524(&uStack_678,auStack_bf8,&ppuStack_c10,auStack_c40);
      FUN_10b1a4728(auStack_ba8,&uStack_678,1);
      func_0x00010b1eb6f8(&pppuStack_5e0);
      FUN_10b1c4280();
      FUN_10b17dec8(auStack_ba8);
      func_0x00010b17dd64(&uStack_678);
      FUN_10b17d950(auStack_c40);
      func_0x00010b1ecee4();
      func_0x00010b121e00(auStack_bf8);
      FUN_10b1213b8(auStack_b90);
      uVar1 = cStack_558 == '\x01';
      if ((bool)uVar1) {
        func_0x00010b1ec240();
        uStack_678 = 0x10b1e4d0c;
        ppuStack_670 = &PTR_DAT_110cc42e8;
        func_0x00010b1d664c(unaff_x19 + 0x278,&uStack_678);
        func_0x000107c281f0(&uStack_678);
        func_0x00010b1edb84();
      }
      else {
        func_0x00010b1edb84();
        func_0x00010b1ec4b0();
        *(undefined1 *)(unaff_x19 + 0x278) = 0;
        *(undefined1 *)(unaff_x19 + 0x2a8) = 0;
      }
      FUN_10b12130c(auStack_a10);
      goto LAB_10b1c3f80;
    }
    ppuStack_c48 = ppppuVar7[1];
    ppuStack_c50 = *ppppuVar7;
    if (ppppuVar7[1] != (undefined8 ***)0x0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10_01 != 0);
    }
    param_4 = &pppuStack_968;
    FUN_10b1c2054(param_4,&ppuStack_c50,lStack_6c0);
    func_0x000107c27d78(&ppuStack_c50);
    uVar1 = uVar2;
    if ((int)param_4 != 0) {
      *(undefined8 ****)(lStack_6c0 + 0x30) = pppuVar5;
      ppuStack_688 = pppuVar5;
      if (iVar9 != 0) {
        func_0x00010b1ee218();
        uVar1 = 0;
        if (((bool)uVar2) &&
           (uVar1 = *(long *)(extraout_x8_02 + 0xe0) == *(long *)(extraout_x8_02 + 0xe8),
           !(bool)uVar1)) {
          FUN_10b1c428c(&pppuStack_5e0,extraout_x8_02 + 0xc0);
          param_4 = (undefined8 ****)pppuStack_5e0;
          FUN_10b24f3f8(pppuStack_5e0);
          FUN_10b250520(param_4 + 3);
          func_0x00010b24f428(pppuStack_5e0);
          FUN_10b1c4308(lStack_6c0 + 0xc0,pppuStack_5e0,1);
          FUN_10b1e4d20(&pppuStack_5e0);
        }
      }
      FUN_10b1c367c(&pppuStack_968);
      goto LAB_10b1c3f80;
    }
  }
  func_0x00010b1ec4b0();
  *(undefined1 *)(unaff_x19 + 0x278) = 0;
  *(undefined1 *)(unaff_x19 + 0x2a8) = 0;
LAB_10b1c3f80:
  ppppuVar4 = &pppuStack_968;
  FUN_10b1d6668();
  func_0x00010b1eaddc(uStack_368);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b1edb84();
    FUN_10b12130c(auStack_a10);
    ppppuVar7 = &pppuStack_968;
    FUN_10b1d6668();
    func_0x00010b1eb590();
    pcStack_c58 = FUN_10b1c41c0;
    if (((ulong)ppppuVar7[0x26] & 1) == 0) {
      ppppuVar11 = ppppuVar7 + 0x3d;
      pppuStack_c70 = param_4;
      pppuStack_c68 = ppppuVar4;
      ppuStack_c60 = &puStack_310;
      FUN_10b1e4d9c();
      if (ppppuVar11 == (undefined8 ****)0x0) {
        func_0x00010b1edb04();
        if (lStack_c80 == 0) {
          ppppuVar11 = (undefined8 ****)0x0;
        }
        else {
          FUN_10b1bebd0(auStack_c98);
          func_0x00010b1ed728();
          if ((bool)uVar1) {
            FUN_10b1c3338(auStack_cc8,extraout_x9 + 0xc0);
            func_0x00010b1218b4(ppppuVar7 + 0x3d,auStack_cc8);
            func_0x00010b121bb0(auStack_cc8);
            ppppuVar11 = ppppuVar7 + 0x3d;
            FUN_10b1e4d9c(ppppuVar11);
          }
          else {
            ppppuVar11 = (undefined8 ****)0x0;
          }
          func_0x00010b1ebe94();
        }
        func_0x00010b1ecf24();
      }
    }
    else {
      ppppuVar11 = ppppuVar7 + 0x12;
    }
    return ppppuVar11;
  }
  return ppppuVar4;
}



/* Entry: 10b1c3d30; end: 10b1c41bf;  */

undefined8 *
FUN_10b1c3d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,int param_5,
             undefined8 param_6,long *param_7)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar8;
  long unaff_x21;
  undefined8 in_stack_00000050;
  undefined1 auStack_968 [48];
  undefined1 auStack_938 [24];
  long lStack_920;
  undefined8 *puStack_910;
  undefined8 *puStack_908;
  undefined8 *puStack_900;
  code *pcStack_8f8;
  long lStack_8f0;
  long lStack_8e8;
  undefined1 auStack_8e0 [40];
  undefined1 uStack_8b8;
  long lStack_8b0;
  long lStack_8a8;
  undefined1 auStack_898 [80];
  undefined1 auStack_848 [24];
  undefined1 auStack_830 [24];
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  long lStack_800;
  undefined8 uStack_7f8;
  undefined1 auStack_7f0 [64];
  undefined1 auStack_7b0 [168];
  undefined1 uStack_708;
  undefined1 uStack_6c8;
  undefined4 uStack_6c0;
  undefined1 uStack_6bc;
  undefined1 uStack_6b8;
  undefined1 uStack_6b4;
  undefined1 auStack_6b0 [24];
  undefined1 auStack_698 [136];
  byte bStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined1 auStack_5f8 [24];
  undefined1 auStack_5e0 [64];
  char cStack_5a0;
  undefined8 uStack_598;
  long lStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined **ppuStack_310;
  undefined8 *puStack_280;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  char cStack_1f8;
  undefined8 uStack_8;
  
  func_0x00010b1ec024();
  func_0x00010b1eb8e4();
  func_0x00010b1eaeac();
  uStack_608 = param_1;
  uStack_600 = param_2;
  uStack_8 = extraout_x8;
  FUN_10b121c1c(auStack_5f8,param_3);
  uVar2 = *param_7 == 0;
  plVar1 = (long *)(unaff_x21 + 0x248);
  if (!(bool)uVar2) {
    plVar1 = param_7;
  }
  lStack_380 = *plVar1;
  lStack_378 = plVar1[1];
  if (lStack_378 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  uStack_338 = 0;
  uStack_340 = 0;
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_358 = 0;
  lStack_360 = 0;
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_320 = 0;
  lVar4 = *param_4;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x00010b1ebf40();
    (*extraout_x8_00)();
  }
  puVar5 = &uStack_608;
  FUN_10b1c1bc8(puVar5,1);
  if ((int)puVar5 != 0) {
    if (lStack_348 == 0) {
      func_0x00010b1ec4b0();
      puStack_280 = (undefined8 *)0x10b1e4cf8;
      ppuStack_278 = &PTR_DAT_110cc42d0;
      func_0x00010b1d664c(unaff_x19 + 0x278,&puStack_280);
      func_0x000107c281f0(&puStack_280);
      goto LAB_10b1c3f80;
    }
    uVar3 = *(char *)(lStack_360 + 0x160) == '\x01';
    if ((((bool)uVar3) && (*(long *)(lStack_360 + 0x28) == 0)) &&
       (uVar3 = false, cStack_5a0 == '\x01')) {
      uStack_260 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      ppuStack_278 = (undefined **)0x0;
      puStack_280 = (undefined8 *)0x0;
      FUN_10b1be194(&uStack_370,&puStack_280);
      func_0x00010b1d3e60(&puStack_280);
      puVar6 = auStack_5f8;
      FUN_10b1c41c0();
      if (puVar6 == (undefined1 *)0x0) {
        auStack_6b0[0] = 0;
        bStack_610 = 0;
      }
      else {
        puVar6 = auStack_5f8;
        FUN_10b1c41c0(puVar6);
        FUN_10b125778(auStack_6b0,puVar6);
        if ((param_5 != 0) && ((bStack_610 & 1) != 0)) {
          FUN_10b24f3f8(auStack_6b0);
          FUN_10b250520(auStack_698);
          func_0x00010b24f428(auStack_6b0);
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_830,auStack_5f8);
      uStack_818 = uStack_598;
      uStack_810 = 0;
      uStack_808 = 0;
      uStack_7f8 = 0;
      lStack_800 = lVar4;
      func_0x00010b125750(auStack_7f0,auStack_5e0);
      FUN_10b121494(auStack_7b0,auStack_6b0);
      uStack_708 = 0;
      uStack_6c8 = 0;
      uStack_6bc = (undefined1)((ulong)param_6 >> 0x20);
      uStack_6c0 = (undefined4)param_6;
      uStack_6b8 = 0;
      uStack_6b4 = 0;
      FUN_10b202630(auStack_898,auStack_5f8);
      lStack_8a8 = param_4[1];
      lStack_8b0 = *param_4;
      if (param_4[1] != 0) {
        do {
          func_0x00010b1eb124();
        } while (extraout_w10_01 != 0);
      }
      auStack_8e0[0] = 0;
      uStack_8b8 = 0;
      FUN_10b17d524(&uStack_318,auStack_898,&lStack_8b0,auStack_8e0);
      FUN_10b1a4728(auStack_848,&uStack_318,1);
      func_0x00010b1eb6f8(&puStack_280);
      FUN_10b1c4280();
      FUN_10b17dec8(auStack_848);
      func_0x00010b17dd64(&uStack_318);
      FUN_10b17d950(auStack_8e0);
      func_0x00010b1ecee4();
      func_0x00010b121e00(auStack_898);
      FUN_10b1213b8(auStack_830);
      uVar2 = cStack_1f8 == '\x01';
      if ((bool)uVar2) {
        func_0x00010b1ec240();
        uStack_318 = 0x10b1e4d0c;
        ppuStack_310 = &PTR_DAT_110cc42e8;
        func_0x00010b1d664c(unaff_x19 + 0x278,&uStack_318);
        func_0x000107c281f0(&uStack_318);
        func_0x00010b1edb84();
      }
      else {
        func_0x00010b1edb84();
        func_0x00010b1ec4b0();
        *(undefined1 *)(unaff_x19 + 0x278) = 0;
        *(undefined1 *)(unaff_x19 + 0x2a8) = 0;
      }
      FUN_10b12130c(auStack_6b0);
      goto LAB_10b1c3f80;
    }
    lStack_8e8 = param_4[1];
    lStack_8f0 = *param_4;
    if (param_4[1] != 0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10_00 != 0);
    }
    unaff_x20 = &uStack_608;
    FUN_10b1c2054(unaff_x20,&lStack_8f0,lStack_360);
    func_0x000107c27d78(&lStack_8f0);
    uVar2 = uVar3;
    if ((int)unaff_x20 != 0) {
      *(long *)(lStack_360 + 0x30) = lVar4;
      lStack_328 = lVar4;
      if (param_5 != 0) {
        func_0x00010b1ee218();
        uVar2 = 0;
        if (((bool)uVar3) &&
           (uVar2 = *(long *)(extraout_x8_01 + 0xe0) == *(long *)(extraout_x8_01 + 0xe8),
           !(bool)uVar2)) {
          FUN_10b1c428c(&puStack_280,extraout_x8_01 + 0xc0);
          unaff_x20 = puStack_280;
          FUN_10b24f3f8(puStack_280);
          FUN_10b250520(unaff_x20 + 3);
          func_0x00010b24f428(puStack_280);
          FUN_10b1c4308(lStack_360 + 0xc0,puStack_280,1);
          FUN_10b1e4d20(&puStack_280);
        }
      }
      FUN_10b1c367c(&uStack_608);
      goto LAB_10b1c3f80;
    }
  }
  func_0x00010b1ec4b0();
  *(undefined1 *)(unaff_x19 + 0x278) = 0;
  *(undefined1 *)(unaff_x19 + 0x2a8) = 0;
LAB_10b1c3f80:
  puVar5 = &uStack_608;
  FUN_10b1d6668();
  func_0x00010b1eaddc(uStack_8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010b1edb84();
    FUN_10b12130c(auStack_6b0);
    puVar7 = &uStack_608;
    FUN_10b1d6668();
    func_0x00010b1eb590();
    pcStack_8f8 = FUN_10b1c41c0;
    if ((*(byte *)(puVar7 + 0x26) & 1) == 0) {
      puVar8 = puVar7 + 0x3d;
      puStack_910 = unaff_x20;
      puStack_908 = puVar5;
      puStack_900 = &stack0x00000050;
      FUN_10b1e4d9c();
      if (puVar8 == (undefined8 *)0x0) {
        func_0x00010b1edb04();
        if (lStack_920 == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          FUN_10b1bebd0(auStack_938);
          func_0x00010b1ed728();
          if ((bool)uVar2) {
            FUN_10b1c3338(auStack_968,extraout_x9 + 0xc0);
            func_0x00010b1218b4(puVar7 + 0x3d,auStack_968);
            func_0x00010b121bb0(auStack_968);
            puVar8 = puVar7 + 0x3d;
            FUN_10b1e4d9c(puVar8);
          }
          else {
            puVar8 = (undefined8 *)0x0;
          }
          func_0x00010b1ebe94();
        }
        func_0x00010b1ecf24();
      }
    }
    else {
      puVar8 = puVar7 + 0x12;
    }
    return puVar8;
  }
  return puVar5;
}



/* Entry: 10b1c41c0; end: 10b1c427f;  */

long FUN_10b1c41c0(long param_1)

{
  undefined1 in_ZR;
  long extraout_x9;
  long lVar1;
  undefined1 auStack_78 [48];
  undefined1 auStack_48 [24];
  long lStack_30;
  
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
    lVar1 = param_1 + 0x1e8;
    FUN_10b1e4d9c();
    if (lVar1 == 0) {
      FUN_10b1edb04();
      if (lStack_30 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_10b1bebd0(auStack_48);
        func_0x00010b1ed728();
        if ((bool)in_ZR) {
          FUN_10b1c3338(auStack_78,extraout_x9 + 0xc0);
          func_0x00010b1218b4(param_1 + 0x1e8,auStack_78);
          func_0x00010b121bb0(auStack_78);
          lVar1 = param_1 + 0x1e8;
          FUN_10b1e4d9c(lVar1);
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
    lVar1 = param_1 + 0x90;
  }
  return lVar1;
}



/* Entry: 10b1c4280; end: 10b1c428b;  */

void FUN_10b1c4280(long **param_1,undefined8 param_2,long **param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  long **pplVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long **pplVar12;
  long **pplVar13;
  long ***ppplVar14;
  long **pplVar15;
  long **pplVar16;
  long *plVar17;
  undefined4 uVar18;
  code *pcVar19;
  char extraout_w8;
  undefined1 extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined8 extraout_x8;
  long lVar20;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long *plVar21;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  long **extraout_x8_07;
  long extraout_x8_08;
  ulong extraout_x8_09;
  long extraout_x8_10;
  undefined4 extraout_w9;
  undefined8 extraout_x9;
  long *plVar22;
  ulong extraout_x9_00;
  ulong extraout_x10;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar23;
  long **pplVar24;
  long lVar25;
  ulong uVar26;
  long **pplVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  long *unaff_x25;
  undefined8 uVar31;
  undefined8 in_stack_00000050;
  undefined1 auStack_b00 [32];
  undefined1 auStack_ae0 [32];
  long **pplStack_ac0;
  long **pplStack_ab8;
  long **pplStack_ab0;
  undefined1 uStack_aa8;
  long *plStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined1 auStack_a78 [24];
  undefined1 auStack_a60 [8];
  undefined8 uStack_a58;
  undefined1 auStack_a50 [176];
  char cStack_9a0;
  undefined1 auStack_938 [16];
  undefined1 uStack_928;
  long **pplStack_920;
  long **pplStack_918;
  long **pplStack_910;
  char cStack_908;
  undefined1 uStack_900;
  undefined7 uStack_8ff;
  undefined1 uStack_8f0;
  long lStack_8b0;
  long lStack_8a8;
  long **pplStack_8a0;
  long **pplStack_898;
  long **pplStack_890;
  ulong uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined1 auStack_7c0 [192];
  undefined8 uStack_700;
  undefined1 auStack_6f8 [176];
  undefined1 uStack_648;
  long **pplStack_640;
  long **pplStack_638;
  long **pplStack_630;
  char cStack_628;
  ulong uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 uStack_568;
  byte bStack_4c8;
  ulong uStack_4c0;
  undefined1 auStack_4b8 [176];
  byte bStack_408;
  long ***ppplStack_400;
  undefined1 uStack_3f8;
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  long **pplStack_3c0;
  long **pplStack_3b8;
  long **pplStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  undefined1 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined1 uStack_290;
  undefined1 uStack_288;
  undefined1 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined2 uStack_260;
  undefined1 uStack_25e;
  undefined1 uStack_25d;
  undefined1 uStack_25c;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  long *plStack_208;
  long *plStack_200;
  long **pplStack_1f8;
  undefined1 *puStack_1f0;
  long **pplStack_1e8;
  long **pplStack_1e0;
  long **pplStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  long **pplStack_180;
  undefined1 uStack_178;
  long lStack_170;
  long *plStack_168;
  long *plStack_160;
  long lStack_158;
  undefined4 uStack_150;
  long *aplStack_148 [2];
  undefined8 uStack_138;
  undefined1 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long **pplStack_108;
  undefined1 uStack_100;
  long *plStack_f8;
  long **pplStack_f0;
  long **pplStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long **pplStack_d0;
  long **pplStack_c8;
  undefined1 auStack_b8 [8];
  char cStack_b0;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_224 = 1;
  uVar18 = 0;
  func_0x00010b1ec024();
  pplVar16 = param_1;
  pplVar12 = param_3;
  uStack_220 = extraout_x8;
  uStack_218 = param_2;
  func_0x00010b1eae84();
  if (*(char *)(pplVar12 + 0x24) == '\x01') {
    pplVar16 = param_3 + 0x10;
    FUN_10b190fc4();
  }
  plStack_110 = (long *)0x0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar25 = 0;
  uStack_100 = 1;
  lVar1 = param_4[1];
  pplStack_108 = pplVar16;
  for (lVar20 = *param_4; lVar20 != lVar1; lVar20 = lVar20 + 0x98) {
    lVar28 = 0;
    plVar17 = *(long **)(lVar20 + 0x58);
    for (unaff_x25 = *(long **)(lVar20 + 0x50); unaff_x25 != plVar17; unaff_x25 = unaff_x25 + 2) {
      lVar11 = *unaff_x25;
      if (lVar11 != 0) {
        func_0x00010b1eba4c();
      }
      lVar28 = lVar11 + lVar28;
    }
    lVar25 = lVar28 + lVar25;
  }
  if (0 < (long)param_1[0xcd] && (long)param_1[0xcd] < lVar25) {
    FUN_10b1c6774(param_1,uStack_218,0,0,lVar25);
  }
  FUN_10b202630(&plStack_e0,*param_4);
  plVar17 = (long *)0x0;
  pplVar16 = param_3 + 3;
  FUN_10b1c589c(aplStack_148,param_1,uStack_218,&plStack_e0);
  uStack_228 = uVar18;
  pplStack_1e8 = param_1;
  func_0x00010b121e00(&plStack_e0);
  lVar20 = *param_4;
  if (lStack_128 != 0) {
    lVar20 = lStack_128;
  }
  pplVar12 = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,lVar20);
  plStack_168 = (long *)0x0;
  lStack_170 = 0;
  lStack_158 = 0;
  plStack_160 = (long *)0x0;
  pplStack_1f8 = &plStack_160;
  uStack_150 = 0x3f800000;
  plVar30 = (long *)*param_4;
  plStack_200 = (long *)param_4[1];
  plStack_208 = aplStack_148[0];
  puStack_1f0 = auStack_68;
  ppuStack_210 = &puStack_40;
  for (; pplVar13 = pplStack_1e8, uVar8 = plVar30 == plStack_200, !(bool)uVar8;
      plVar30 = plVar30 + 0x13) {
    uVar7 = plVar30[10] - plVar30[0xb] < 0;
    uVar8 = plVar30[10] == plVar30[0xb];
    if ((bool)uVar8) {
      plVar29 = plStack_208;
      func_0x00010b1ee2fc();
      (*extraout_x8_00)();
      if (plVar29 == (long *)0x0) {
        plVar29 = plStack_208;
        func_0x00010b1ec4bc();
        (*extraout_x8_01)();
        if (((ulong)plVar29 & 1) == 0) goto LAB_10b1bbd9c;
        plVar29 = (long *)0x0;
      }
    }
    else {
      plStack_188 = (long *)0x0;
      pplStack_180 = (long **)0x0;
      uStack_178 = 0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_178 = 1;
      lVar20 = plVar30[0xb] - plVar30[10];
      pplStack_180 = pplVar12;
      if (lVar20 == 0x10) {
        plVar29 = plStack_208;
        FUN_10b1c22a8(plStack_208,plVar30 + 7);
        iVar10 = (int)plVar29;
      }
      else if (plVar30[0xb] == plVar30[10]) {
        iVar10 = 1;
      }
      else {
        plStack_f8 = (long *)0x0;
        pplStack_f0 = (long **)0x0;
        pplStack_e8 = (long **)0x0;
        func_0x000108947890(&plStack_f8,lVar20 >> 4);
        unaff_x25 = (long *)plVar30[0xb];
        for (plVar29 = (long *)plVar30[10]; plVar29 != unaff_x25; plVar29 = plVar29 + 2) {
          plVar22 = (long *)*plVar29;
          if (plVar22 == (long *)0x0) {
            plVar22 = (long *)0x0;
LAB_10b1bb7d0:
            plVar23 = (long *)0x0;
          }
          else {
            func_0x00010b1eb9d4();
            (*extraout_x8_02)();
            plVar23 = (long *)*plVar29;
            if (plVar23 == (long *)0x0) goto LAB_10b1bb7d0;
            func_0x00010b1ebf40();
            (*extraout_x8_03)();
          }
          if (pplStack_f0 < pplStack_e8) {
            *pplStack_f0 = plVar22;
            pplStack_f0[1] = plVar23;
            pplStack_f0 = pplStack_f0 + 2;
          }
          else {
            pplVar16 = &plStack_f8;
            func_0x000108947b44(pplVar16,((long)pplStack_f0 - (long)plStack_f8 >> 4) + 1);
            func_0x000108947998(&plStack_e0,pplVar16,(long)pplStack_f0 - (long)plStack_f8 >> 4,
                                &pplStack_e8);
            *pplStack_d0 = plVar22;
            pplStack_d0[1] = plVar23;
            plVar22 = (long *)((long)plStack_d8 - ((long)pplStack_f0 - (long)plStack_f8));
            pplStack_d0 = pplStack_d0 + 2;
            _memcpy(plVar22);
            pplVar16 = pplStack_e8;
            pplStack_1d8 = pplStack_c8;
            pplStack_1e0 = pplStack_d0;
            pplStack_e8 = pplStack_c8;
            pplStack_f0 = pplStack_d0;
            pplStack_d0 = (long **)plStack_f8;
            pplStack_c8 = pplVar16;
            plStack_e0 = plStack_f8;
            plStack_d8 = plStack_f8;
            plStack_f8 = plVar22;
            func_0x000108947a20(&plStack_e0);
            pplStack_f0 = pplStack_1e0;
          }
        }
        plVar29 = plStack_208;
        (**(code **)(*plStack_208 + 0x38))(plStack_208,&plStack_f8,plVar30 + 7);
        iVar10 = (int)plVar29;
        func_0x00010894593c(&plStack_f8);
      }
      plVar29 = pplStack_1e8[0x47];
      func_0x00010b1eb1fc(&plStack_e0);
      func_0x00010b1ed900();
      func_0x00010b1ed8e8();
      func_0x00010b1ec188(puStack_1f0);
      uVar8 = iVar10 == 0;
      pplVar16 = (long **)(ulong)(byte)uVar8;
      func_0x00010b1ed8d4(ppuStack_210,"success");
      func_0x00010b1eccdc();
      func_0x00010b1eb5b4(plVar29,0x21,&plStack_f8);
      func_0x00010b1ebc94();
      do {
        func_0x00010b1ed8cc();
        func_0x00010b1ec03c();
      } while (!(bool)uVar8);
      if (iVar10 != 0) {
LAB_10b1bbd9c:
        func_0x00010b1ec958(uStack_220);
        *(undefined1 *)(extraout_x8_06 + 0x18) = 0;
        func_0x00010b1ed974();
        goto LAB_10b1bbdac;
      }
      plVar29 = pplStack_1e8[0x47];
      func_0x00010b1eb1fc(&plStack_e0);
      func_0x00010b1ed900();
      func_0x00010b1ed8e8();
      func_0x00010b1ec188(puStack_1f0);
      func_0x00010b120648(&plStack_f8,&plStack_e0,4);
      pplVar16 = &plStack_188;
      func_0x000107c28148();
      FUN_10b1135dc(plVar29,0x23,&plStack_f8);
      func_0x00010b1ebc94();
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
        func_0x00010b1ec838();
      } while (!(bool)uVar8);
      plVar29 = (long *)0x0;
      plVar22 = (long *)plVar30[10];
      plVar23 = (long *)plVar30[0xb];
      while( true ) {
        uVar7 = (long)plVar22 - (long)plVar23 < 0;
        uVar8 = plVar22 == plVar23;
        if ((bool)uVar8) break;
        lVar20 = *plVar22;
        if (lVar20 != 0) {
          func_0x00010b1ebf40();
          (*extraout_x8_04)();
        }
        plVar29 = (long *)(lVar20 + (long)plVar29);
        plVar22 = plVar22 + 2;
      }
      FUN_10b12983c(&plStack_e0,*(undefined4 *)(param_3 + 8));
      func_0x00010b1ed8f4();
      func_0x00010b1ec0b8();
      func_0x00010b1ebee0(&plStack_f8,&plStack_e0);
      func_0x00010b1ee15c();
      FUN_10b114b00();
      func_0x00010b1ebc94();
      do {
        func_0x00010b1ed8cc();
        func_0x00010b1ec03c();
      } while (!(bool)uVar8);
      FUN_10b12983c(&plStack_e0,*(undefined4 *)(param_3 + 8));
      func_0x00010b1ed8f4();
      func_0x00010b1ec0b8();
      func_0x00010b1ebee0(&plStack_f8,&plStack_e0);
      func_0x00010b1ee15c();
      FUN_10b11ef50();
      func_0x00010b1ebc94();
      do {
        func_0x00010b1ed8cc();
        func_0x00010b1ec03c();
      } while (!(bool)uVar8);
    }
    plStack_e0 = plVar29;
    FUN_10b17d8dc(&plStack_d8,plVar30 + 0xd);
    plVar22 = plVar30;
    FUN_10b1e50cc();
    plVar29 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      uVar26 = (long)plStack_168 - 1;
      if (((ulong)plStack_168 & uVar26) == 0) {
        unaff_x25 = (long *)(uVar26 & (ulong)plVar22);
        uVar7 = false;
      }
      else {
        uVar7 = (long)plVar22 - (long)plStack_168 < 0;
        unaff_x25 = plVar22;
        if (plStack_168 <= plVar22) {
          uVar4 = 0;
          if (plStack_168 != (long *)0x0) {
            uVar4 = (ulong)plVar22 / (ulong)plStack_168;
          }
          unaff_x25 = (long *)((long)plVar22 - uVar4 * (long)plStack_168);
        }
      }
      plVar23 = *(long **)(lStack_170 + (long)unaff_x25 * 8);
      if (plVar23 != (long *)0x0) {
        do {
          while( true ) {
            plVar23 = (long *)*plVar23;
            if (plVar23 == (long *)0x0) goto LAB_10b1bbaf8;
            plVar21 = (long *)plVar23[1];
            uVar7 = (long)plVar21 - (long)plVar22 < 0;
            if (plVar21 != plVar22) break;
            plVar21 = plVar23 + 9;
            func_0x000107c278d0(plVar21,plVar30 + 7);
            if (((ulong)plVar21 & 1) != 0) goto LAB_10b1bbc18;
          }
          if (((ulong)plVar29 & uVar26) == 0) {
            plVar21 = (long *)((ulong)plVar21 & uVar26);
          }
          else if (plVar29 <= plVar21) {
            uVar4 = 0;
            if (plVar29 != (long *)0x0) {
              uVar4 = (ulong)plVar21 / (ulong)plVar29;
            }
            plVar21 = (long *)((long)plVar21 - uVar4 * (long)plVar29);
          }
          uVar7 = (long)plVar21 - (long)unaff_x25 < 0;
        } while (plVar21 == unaff_x25);
      }
    }
LAB_10b1bbaf8:
    plVar23 = (long *)0x98;
    __Znwm();
    pplStack_f0 = pplStack_1f8;
    pplStack_e8 = (long **)0x0;
    *plVar23 = 0;
    plVar23[1] = (long)plVar22;
    plStack_f8 = plVar23;
    FUN_10b17d5c4(plVar23 + 2,plVar30);
    plVar23[0xc] = 0;
    *(undefined1 *)(plVar23 + 0xd) = 0;
    *(undefined1 *)(plVar23 + 0x12) = 0;
    pplStack_e8 = (long **)CONCAT71(pplStack_e8._1_7_,1);
    func_0x00010b1ebbc8(lStack_158);
    if ((plVar29 == (long *)0x0) || (func_0x00010b1ebbbc(), (bool)uVar7)) {
      func_0x00010b1ee148();
      bVar6 = (long *)0x2 < plVar29;
      bVar9 = plVar29 == (long *)0x3;
      func_0x00010b1eaeec();
      uVar31 = extraout_x8_05;
      if (!bVar6 || bVar9) {
        uVar31 = extraout_x9;
      }
      FUN_10b1e50f0(&lStack_170,uVar31);
      plVar29 = plStack_168;
      if (((ulong)plStack_168 & (long)plStack_168 - 1U) == 0) {
        unaff_x25 = (long *)((long)plStack_168 - 1U & (ulong)plVar22);
      }
      else {
        unaff_x25 = plVar22;
        if (plStack_168 <= plVar22) {
          uVar26 = 0;
          if (plStack_168 != (long *)0x0) {
            uVar26 = (ulong)plVar22 / (ulong)plStack_168;
          }
          unaff_x25 = (long *)((long)plVar22 - uVar26 * (long)plStack_168);
        }
      }
    }
    plVar22 = *(long **)(lStack_170 + (long)unaff_x25 * 8);
    if (plVar22 == (long *)0x0) {
      *plVar23 = (long)plStack_160;
      *(long ***)(lStack_170 + (long)unaff_x25 * 8) = pplStack_1f8;
      plStack_160 = plVar23;
      if (*plVar23 != 0) {
        plVar22 = *(long **)(*plVar23 + 8);
        if (((ulong)plVar29 & (long)plVar29 - 1U) == 0) {
          plVar22 = (long *)((ulong)plVar22 & (long)plVar29 - 1U);
        }
        else if (plVar29 <= plVar22) {
          uVar26 = 0;
          if (plVar29 != (long *)0x0) {
            uVar26 = (ulong)plVar22 / (ulong)plVar29;
          }
          plVar22 = (long *)((long)plVar22 - uVar26 * (long)plVar29);
        }
        *(long **)(lStack_170 + (long)plVar22 * 8) = plVar23;
      }
    }
    else {
      *plVar23 = *plVar22;
      *plVar22 = (long)plVar23;
    }
    plStack_f8 = (long *)0x0;
    lStack_158 = lStack_158 + 1;
    FUN_10b1e525c(&plStack_f8);
LAB_10b1bbc18:
    plVar23[0xc] = (long)plStack_e0;
    cVar3 = (char)plVar23[0x12];
    if (cVar3 == cStack_b0) {
      if (cVar3 != '\0') {
        FUN_10b1c3524(plVar23 + 0xd,&plStack_d8);
      }
    }
    else if (cVar3 == '\0') {
      FUN_10b1d320c(plVar23 + 0xd,&plStack_d8);
      *(undefined1 *)(plVar23 + 0x12) = 1;
    }
    else {
      FUN_10b1968d4(plVar23 + 0xd);
    }
    pplVar12 = &plStack_d8;
    FUN_10b17d950();
  }
  uVar18 = *(undefined4 *)(param_3 + 8);
  uVar2 = *(uint *)((long)param_3 + 0x1c);
  uStack_1b0 = uStack_138;
  uStack_1a8 = uStack_130;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_198 = uStack_120;
  lStack_1a0 = lStack_128;
  uStack_190 = uStack_118;
  uStack_120 = 0;
  uStack_118 = 0;
  plVar17 = &lStack_170;
  FUN_10b1c59f4(uStack_220,pplStack_1e8,uStack_218,param_3,&uStack_1b0,plVar17,uStack_224,uStack_228
               );
  func_0x00010b1ebfb4();
  plVar30 = pplVar13[0x47];
  func_0x00010b1eb1fc(&plStack_e0);
  FUN_10b12983c(auStack_b8,uVar18);
  param_3 = &plStack_e0;
  func_0x00010b1ee0b8(auStack_90);
  func_0x00010b1ec188(auStack_68);
  func_0x000107c278b8(&uStack_1c8,(&PTR_s_Unknown_110cc4b28)[uVar2]);
  puStack_40 = &DAT_10f6389e8;
  uStack_38 = 4;
  uStack_28 = uStack_1c0;
  uStack_30 = uStack_1c8;
  uStack_20 = uStack_1b8;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  func_0x00010b1eccdc();
  pplVar16 = &plStack_110;
  func_0x000107c28148();
  FUN_10b1135dc(plVar30,0xa0,&plStack_f8);
  func_0x00010b1ebc94();
  do {
    func_0x00010b1ecb08();
    func_0x00010b1ec838();
  } while (!(bool)uVar8);
  func_0x00010b1edf90();
LAB_10b1bbdac:
  func_0x00010b1e5290(&lStack_170);
  func_0x00010b1d7410(aplStack_148);
  func_0x00010b1eadc4();
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b1ebe10();
  } while (!(bool)uVar8);
  func_0x00010b1edf90();
  func_0x00010b121af0(uStack_220);
  func_0x00010b1e5290(&lStack_170);
  pplVar12 = aplStack_148;
  func_0x00010b1d7410();
  func_0x00010b1eb598();
  pcVar19 = FUN_10b1bbfac;
  func_0x00010b1ec024();
  pplStack_1e0 = (long **)&stack0x00000050;
  pplStack_1d8 = (long **)pcVar19;
  func_0x00010b1ee598();
  func_0x00010b1eae84();
  if (((uint)plVar17 >> 0x18 & 1) == 0) {
LAB_10b1bc050:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a78,pplVar16);
  }
  else {
    func_0x00010b1ebfc4(auStack_a60);
    func_0x000107c27f70(&uStack_4c0,pplVar16);
    FUN_10b1bedb0(&pplStack_3c0,param_3 + 0x10,auStack_a60,&uStack_4c0);
    func_0x000107c279a4(&uStack_4c0);
    func_0x00010b1edbfc();
    if (((char)uStack_3a8 != '\x01') || (pplStack_3c0 == pplStack_3b8)) {
      func_0x00010b1ee028();
      goto LAB_10b1bc050;
    }
    pplVar13 = pplStack_3c0 + 8;
    func_0x0001072e787c(pplVar13);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a78,pplVar13);
    func_0x00010b1ee028();
  }
  uStack_a90 = 0;
  uStack_a88 = 0;
  uStack_a80 = 0;
  plStack_a98 = (long *)0x0;
  if (((ulong)plVar17 & 0x10000000100) == 0x100) {
    func_0x00010b1ebfc4(&uStack_700);
    func_0x000107c27f70(auStack_7c0,auStack_a78);
    uStack_900 = 0;
    uStack_8f0 = 0;
    func_0x00010bccbc98(&uStack_4c0,param_3 + 0x10,&UNK_10f73837d,0x32);
    pplVar13 = *(long ***)(uStack_4c0 + 8);
    pplStack_918 = *(long ***)(uStack_4c0 + 0x10);
    pplStack_920 = pplVar13;
    if (pplStack_918 != (long **)0x0) {
      do {
        func_0x00010b1eaf98();
        pplVar13 = extraout_x8_07;
      } while (extraout_w11 != 0);
    }
    FUN_10b1fae1c(auStack_a60,pplVar13[2],&uStack_700,auStack_7c0);
    FUN_10b1d3ecc(&uStack_880,auStack_a60);
    uStack_578 = uStack_878;
    uStack_580 = uStack_880;
    uStack_570 = uStack_870;
    uStack_870 = 0;
    uStack_878 = 0;
    uStack_880 = 0;
    uStack_568 = 1;
    FUN_10b1d8ae4(&uStack_880);
    FUN_10b1d4718(auStack_a60);
    FUN_10b1b7824(&pplStack_920);
    func_0x00010bccbe4c(&uStack_4c0);
    func_0x00010bccbdb4(&uStack_4c0);
    FUN_10b1d4780(&pplStack_3c0,&uStack_580);
    func_0x00010b1ed248();
    if ((int)uStack_360 == 1) {
      func_0x00010b1d47e4(&pplStack_3c0);
      uStack_580 = uStack_580 & 0xffffffffffffff00;
      uStack_568 = 0;
      if ((int)uStack_360 != 1) goto LAB_10b1bc238;
      FUN_10b1d481c(&pplStack_640,&uStack_580);
    }
    else {
      uStack_580 = uStack_580 & 0xffffffffffffff00;
LAB_10b1bc238:
      uStack_568 = 0;
      ppplVar14 = &pplStack_3c0;
      func_0x00010b1d4800();
      pplStack_640 = (long **)((ulong)pplStack_640 & 0xffffffffffffff00);
      cStack_628 = '\0';
      if (*(char *)(ppplVar14 + 3) == '\x01') {
        pplStack_638 = ppplVar14[1];
        pplStack_640 = *ppplVar14;
        pplStack_630 = ppplVar14[2];
        func_0x00010b1eb5fc();
        cStack_628 = extraout_w8;
      }
    }
    func_0x00010b1ed248();
    func_0x00010b1ebfa4(&pplStack_3c0);
    FUN_10b1b78d0(&uStack_900);
    func_0x000107c279a4(auStack_7c0);
    func_0x000107c279a4(&uStack_700);
    uVar8 = cStack_628 == '\x01';
    if ((bool)uVar8) {
      if (pplStack_640 == pplStack_638) {
        plVar30 = (long *)0x0;
      }
      else {
        FUN_10b1bcb0c(&pplStack_3c0);
        pplVar13 = pplStack_3c0;
        pplStack_3c0 = (long **)0x0;
        FUN_10b1de9ec(&plStack_a98,pplVar13);
        FUN_10b1de9cc(&pplStack_3c0);
        plVar30 = plStack_a98;
        if (plStack_a98[0x1c] == plStack_a98[0x1d]) {
          plVar29 = param_3[0x47];
          func_0x00010b1ebd14();
          func_0x00010b1eb884(&pplStack_3c0);
          func_0x00010b1eb654(&uStack_580,&pplStack_3c0);
          func_0x00010b1eb040(plVar29);
          FUN_10b120998(&uStack_580);
          func_0x00010b1eb5ac(&pplStack_3c0);
        }
      }
      func_0x00010b1edfb0();
joined_r0x00010b1bc738:
      if (plVar30 == (long *)0x0) goto LAB_10b1bc73c;
      uVar8 = (long *)plVar30[0xc] == param_3[0xd0];
      *(bool *)((long)plVar30 + 0x163) = !(bool)uVar8 && (long)param_3[0xd0] <= plVar30[0xc];
LAB_10b1bc7c8:
      if (((ulong)plVar17 >> 0x20 & 1) != 0) {
        func_0x00010b1ecbc0();
        FUN_10b1bccc0();
        plVar30 = plStack_a98;
      }
      plStack_a98 = (long *)0x0;
      *pplVar12 = plVar30;
    }
    else {
      *pplVar12 = (long *)0x0;
      func_0x00010b1edfb0();
    }
  }
  else {
    if (((ulong)plVar17 >> 0x28 & 1) != 0) {
LAB_10b1bc73c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&pplStack_3c0,pplVar16);
      uStack_25e = ((ulong)plVar17 & 0x10000000000) == 0;
      uStack_3a8 = (long **)((ulong)uStack_3a8 & 0xffffffffffffff00);
      uStack_380 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      uStack_278 = 0;
      uStack_370 = 0;
      uStack_378 = 0;
      uStack_360 = 0;
      uStack_368 = 0;
      uStack_358 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_260 = 0;
      uStack_25d = 0;
      uStack_25c = 0;
      uStack_250 = 0;
      uStack_258 = 0;
      func_0x00010b1edfcc();
      func_0x00010b1ed108();
      FUN_10b1de9cc(&pplStack_920);
      func_0x00010b1ed2d4();
      plVar30 = plStack_a98;
      uVar8 = ((ulong)plVar17 & 0x10000000100) == 0x100;
      if ((bool)uVar8) {
        FUN_10b1b9684(plStack_a98 + 0xd);
      }
      goto LAB_10b1bc7c8;
    }
    func_0x00010b1ebfc4(auStack_ae0);
    func_0x000107c27f70(auStack_b00,auStack_a78);
    auStack_938[0] = 0;
    uStack_928 = 0;
    func_0x00010bccbc98(&uStack_900,param_3 + 0x10,&UNK_10f7383b0,0x36);
    lVar20 = *(long *)(CONCAT71(uStack_8ff,uStack_900) + 8);
    lStack_8a8 = *(long *)(CONCAT71(uStack_8ff,uStack_900) + 0x10);
    lStack_8b0 = lVar20;
    if (lStack_8a8 != 0) {
      do {
        func_0x00010b1eaf98();
        lVar20 = extraout_x8_08;
      } while (extraout_w11_00 != 0);
    }
    FUN_10b1fae80(auStack_a60,*(undefined8 *)(lVar20 + 0x10),auStack_ae0,auStack_b00);
    uStack_700 = 0;
    auStack_6f8[0] = 0;
    uStack_648 = 0;
    if (cStack_9a0 == '\0') {
      uVar31 = 0;
    }
    else {
      FUN_10b1d4b50(auStack_6f8,auStack_a50);
      FUN_10b1d4bc8(auStack_a50);
      uVar31 = uStack_700;
    }
    uStack_700 = uStack_a58;
    uStack_a58 = uVar31;
    FUN_10b1d4adc(&pplStack_640,&uStack_700);
    _bzero(&uStack_880,0xc0);
    FUN_10b1d4adc(auStack_7c0,&uStack_880);
    pplStack_890 = (long **)0x0;
    pplStack_8a0 = (long **)0x0;
    pplStack_898 = (long **)0x0;
    FUN_10b1d4dec(&uStack_4c0,&pplStack_640);
    FUN_10b1d4dec(&uStack_580,auStack_7c0);
    ppplStack_400 = &pplStack_8a0;
    uStack_3f8 = 0;
    pplVar13 = pplVar12;
    while ((((bStack_408 & 1) != 0 || ((bStack_4c8 & 1) != 0)) && (uStack_4c0 != uStack_580))) {
      if ((bStack_408 & 1) == 0) {
        uVar31 = *(undefined8 *)(uStack_4c0 + 8);
        func_0x00010b1eb9a4(auStack_3f0);
        func_0x00010b1eb224(auStack_3d8);
        func_0x00010b1eb99c(uVar31);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f0);
      }
      if (pplStack_898 < pplStack_890) {
        FUN_10b1d4b6c(pplStack_898,auStack_4b8);
        pplVar13 = pplStack_898 + 0x16;
      }
      else {
        lVar20 = (long)pplStack_898 - (long)pplStack_8a0;
        if (0x1745d1745d1745d < lVar20 / 0xb0 + 1U) {
          FUN_10b1d4c38();
          goto LAB_10b1bc83c;
        }
        func_0x00010b1eb414(((long)pplStack_890 - (long)pplStack_8a0) / 0xb0);
        uVar26 = extraout_x9_00;
        if (0xba2e8ba2e8ba2d < extraout_x8_09) {
          uVar26 = 0x1745d1745d1745d;
        }
        if (uVar26 == 0) {
          lVar25 = 0;
        }
        else {
          if (0x1745d1745d1745d < uVar26) {
            func_0x000104bd35f4();
            goto LAB_10b1bc83c;
          }
          lVar25 = uVar26 * 0xb0;
          __Znwm();
        }
        lVar20 = lVar25 + lVar20;
        FUN_10b1d4b6c(lVar20,auStack_4b8);
        pplVar5 = pplStack_898;
        pplVar24 = pplStack_8a0;
        pplVar27 = (long **)(lVar20 + (((long)pplStack_898 - (long)pplStack_8a0) / -0xb0) * 0xb0);
        pplVar15 = pplVar27;
        for (pplVar13 = pplStack_8a0; pplVar13 != pplVar5; pplVar13 = pplVar13 + 0x16) {
          FUN_10b1d4b6c(pplVar15,pplVar13);
          pplVar15 = pplVar15 + 0x16;
        }
        for (; pplVar24 != pplVar5; pplVar24 = pplVar24 + 0x16) {
          func_0x00010b1d4c18(pplVar24);
        }
        pplVar13 = (long **)(lVar20 + 0xb0);
        pplStack_890 = (long **)(lVar25 + uVar26 * 0xb0);
        bVar9 = pplStack_8a0 != (long **)0x0;
        pplStack_8a0 = pplVar27;
        if (bVar9) {
          pplStack_898 = pplVar13;
          __ZdlPv();
        }
      }
      pplStack_898 = pplVar13;
      FUN_10b1d4c44(&uStack_4c0);
    }
    uStack_3f8 = 1;
    FUN_10b1d4d80(&ppplStack_400);
    func_0x00010b1ebbf8(&uStack_580);
    FUN_10b1d4e70(auStack_4b8);
    func_0x00010b1ebbf8(auStack_7c0);
    func_0x00010b1ebbf8(&uStack_880);
    func_0x00010b1ebbf8(&pplStack_640);
    func_0x00010b1ebbf8(&uStack_700);
    pplStack_918 = pplStack_898;
    pplStack_920 = pplStack_8a0;
    pplStack_910 = pplStack_890;
    pplStack_8a0 = (long **)0x0;
    pplStack_898 = (long **)0x0;
    pplStack_890 = (long **)0x0;
    cStack_908 = '\x01';
    FUN_10b1d4e90(&pplStack_8a0);
    FUN_10b1d4eb4(auStack_a60);
    FUN_10b1b7824(&lStack_8b0);
    func_0x00010bccbe4c(&uStack_900);
    func_0x00010bccbdb4(&uStack_900);
    pplStack_3b8 = (long **)((ulong)pplStack_3b8 & 0xffffffffffffff00);
    uStack_3a0 = uStack_3a0 & 0xffffffffffffff00;
    if (cStack_908 == '\x01') {
      pplStack_3b0 = pplStack_918;
      pplStack_3b8 = pplStack_920;
      uStack_3a8 = pplStack_910;
      func_0x00010b1ee4d0();
      uStack_3a0 = CONCAT71(uStack_3a0._1_7_,extraout_w8_00);
    }
    uStack_360 = (ulong)uStack_360._4_4_ << 0x20;
    func_0x00010b1ed258();
    pplStack_920 = (long **)((ulong)pplStack_920 & 0xffffffffffffff00);
    cStack_908 = 0;
    if ((int)uStack_360 == 0) {
      func_0x00010b1ee4c4();
      pplVar15 = pplStack_3b0;
      uVar8 = (char)uStack_3a0 == '\x01';
      if ((bool)uVar8) {
        pplStack_ab8 = pplStack_3b0;
        pplStack_ac0 = pplStack_3b8;
        pplStack_ab0 = uStack_3a8;
        uStack_3a8 = (long **)0x0;
        pplStack_3b8 = (long **)0x0;
        pplStack_3b0 = (long **)0x0;
        bVar9 = true;
        uStack_aa8 = 1;
        pplVar13 = pplVar15;
      }
      else {
        bVar9 = false;
      }
    }
    else {
      uVar8 = (int)uStack_360 == 1;
      if (!(bool)uVar8) goto LAB_10b1bc838;
      bVar9 = false;
      func_0x00010b1ee4c4();
    }
    func_0x00010b1ed258();
    func_0x00010b1edf7c();
    FUN_10b1b78d0(auStack_938);
    func_0x00010b1ec510();
    func_0x00010b1eda44();
    pplVar15 = pplStack_ac0;
    if (bVar9) {
      if (pplStack_ac0 != pplVar13) {
        pplVar13 = pplStack_ac0 + 4;
        func_0x0001072e787c(pplVar13);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&pplStack_3c0,pplVar13);
        func_0x00010b1eb818();
        uStack_3a8 = (long **)CONCAT44(extraout_w9,extraout_w8_01);
        uStack_380 = 1;
        uStack_378 = 0;
        uStack_370 = 0;
        uStack_3a0 = extraout_x10;
        func_0x00010b1ec6d8(*(undefined1 *)(pplVar15 + 0x11));
        uStack_368 = 0;
        uStack_358 = 0;
        uStack_290 = 0;
        uStack_288 = 0;
        uStack_278 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_260 = 0;
        uStack_25e = 1;
        uStack_25d = 0;
        uStack_25c = 0;
        uStack_250 = 0;
        uStack_258 = 0;
        uStack_360 = extraout_x8_10;
        func_0x00010b1edfcc();
        func_0x00010b1ed2d4();
        func_0x00010b1ed108();
        FUN_10b1de9cc(&pplStack_920);
      }
      func_0x00010b1edf98();
      plVar30 = plStack_a98;
      goto joined_r0x00010b1bc738;
    }
    *pplVar12 = (long *)0x0;
    func_0x00010b1edf98();
  }
  FUN_10b1de9cc(&plStack_a98);
  FUN_10b1d4f78(&uStack_a90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a78);
  func_0x00010b1eadc4();
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1bc838:
  func_0x00010563ab98();
LAB_10b1bc83c:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10b1bc840);
  (*pcVar19)();
}



/* Entry: 10b1c428c; end: 10b1c4307;  */

void FUN_10b1c428c(undefined8 param_1,ulong param_2)

{
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  long lStack_30;
  long lStack_28;
  
  func_0x00010b1eb648();
  func_0x00010b1e4944(&lStack_30);
  func_0x00010b1eb940();
  FUN_10b1dea14();
  if ((param_2 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else if (lStack_30 == 0) {
    FUN_10b1e4970(unaff_x20 + 0x20);
  }
  else {
    *unaff_x19 = lStack_30;
    unaff_x19[1] = lStack_28;
    if (lStack_28 != 0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b1ebfec();
  return;
}



/* Entry: 10b1c4308; end: 10b1c43b7;  */

void FUN_10b1c4308(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_248 [384];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b1eae28();
  uStack_28 = extraout_x8;
  FUN_10b1dea14();
  if ((int)param_1 != 0) {
    FUN_10b1e4a98(auStack_40,1);
    puStack_30[1] = 0;
    puStack_30[2] = 0;
    *puStack_30 = &PTR_FUN_110cc41f8;
    param_1 = puStack_30 + 3;
    FUN_10b1214e8(param_1,param_2);
    func_0x00010b1ed7a0();
    func_0x00010b1e4b50();
    func_0x00010b1ee4e4();
    func_0x00010b1ecfbc();
    FUN_10b1e45d8();
    if (((ulong)param_1 & 1) != 0) {
      func_0x00010b1edef0();
      func_0x00010b1eb714();
      func_0x00010b1e49e8();
    }
    func_0x00010b1ec5e4();
    func_0x00010b1ebfec();
  }
  func_0x00010b1eaddc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1ec5e4();
  func_0x00010b1ebfec();
  func_0x00010b1eb590();
  func_0x00010b1eb5dc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&uStack_c8,param_3 + 0x48);
  uStack_a8 = uStack_c0;
  uStack_b0 = uStack_c8;
  uStack_a0 = uStack_b8;
  func_0x00010b1ee4f0(*(undefined4 *)(param_1 + 8));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b1213e8(auStack_248,param_1);
  func_0x00010b1ebbd4(uStack_a0._7_1_);
  func_0x00010b1eb6f8(extraout_x8_00);
  FUN_10b1c446c();
  func_0x00010b1213b8(auStack_248);
  func_0x00010b1ed154();
  return;
}



/* Entry: 10b1c43b8; end: 10b1c446b;  */

void FUN_10b1c43b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_1f8 [384];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x00010b1eb5dc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&uStack_78,param_3 + 0x48);
  uStack_58 = uStack_70;
  uStack_60 = uStack_78;
  uStack_50 = uStack_68;
  func_0x00010b1ee4f0(*(undefined4 *)(unaff_x19 + 0x40));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b1213e8(auStack_1f8);
  func_0x00010b1ebbd4(uStack_50._7_1_);
  func_0x00010b1eb6f8(extraout_x8);
  FUN_10b1c446c();
  func_0x00010b1213b8(auStack_1f8);
  func_0x00010b1ed154();
  return;
}



/* Entry: 10b1c446c; end: 10b1c46b7;  */

void FUN_10b1c446c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined1 uVar3;
  undefined1 auStack_2a0 [24];
  undefined1 uStack_288;
  undefined1 uStack_248;
  undefined1 uStack_240;
  undefined1 uStack_218;
  undefined1 uStack_e8;
  undefined2 uStack_e0;
  undefined1 uStack_de;
  undefined1 auStack_28 [16];
  long lStack_18;
  
  func_0x00010b1ec024();
  lVar2 = param_3;
  func_0x00010b1ebd38();
  lVar2 = (long)*(char *)(lVar2 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 == 0) {
    FUN_10b1bff80(auStack_28);
  }
  else {
    func_0x00010b1ec8bc(auStack_28);
    FUN_10b1baed4();
  }
  if (lStack_18 == 0) {
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_218 = 0;
    func_0x00010b1ed608();
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_de = 0;
    func_0x00010b1ec8f8(auStack_2a0);
    uStack_288 = 0;
    func_0x00010b1ed974();
    func_0x00010b1eb714();
    FUN_10b12394c();
    *(undefined1 *)(unaff_x19 + 0x278) = 0;
    goto LAB_10b1c4664;
  }
  lVar1 = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  lVar2 = lStack_18;
  if ((((*(char *)(lStack_18 + 0x40) != '\x01') || (*(long *)(lStack_18 + 0x38) != 0)) &&
      (func_0x00010b1edd98(), ((uint)param_4 >> 0x10 & 1) != 0)) && (lVar1 == 0)) {
    if ((*(byte *)(lVar2 + 0x161) & 1) == 0) {
      func_0x00010b1ec8bc();
      func_0x00010b1ed958();
      lVar2 = lStack_18;
    }
    func_0x00010b1edd98();
    if (lVar1 == 0) {
      func_0x00010b1c4ea8(auStack_2a0,param_3);
      FUN_10b1b92e0(lStack_18,auStack_2a0);
      func_0x00010b1ed358();
      lVar2 = lStack_18;
    }
  }
  if ((((*(byte *)(lVar2 + 0x40) & 1) == 0) && (*(long *)(lVar2 + 0x48) == *(long *)(lVar2 + 0x50)))
     && ((param_4 >> 0x10 & 1) != 0)) {
    func_0x00010b1ec8bc();
    FUN_10b1bf378();
    if (((param_4 >> 0x20 & 1) == 0) || (*(long *)(lStack_18 + 0x48) == *(long *)(lStack_18 + 0x50))
       ) {
      uVar3 = 1;
      goto LAB_10b1c458c;
    }
    uVar3 = 1;
  }
  else {
    FUN_10b1216e0(param_3 + 0x80);
    FUN_10b12106c(param_3 + 0x128);
    uVar3 = 0;
LAB_10b1c458c:
    if (*(long *)(lStack_18 + 0x48) != *(long *)(lStack_18 + 0x50)) {
      if (param_5 == 0) {
        FUN_10b1bf2b0(*(long *)(lStack_18 + 0x48));
      }
      else {
        FUN_10b1bf250(lStack_18,param_5);
      }
    }
  }
  FUN_10b1bd97c(auStack_2a0);
  func_0x00010b1eb714();
  FUN_10b121c1c();
  *(undefined1 *)(unaff_x19 + 0x278) = uVar3;
LAB_10b1c4664:
  func_0x00010b1ebb80();
  func_0x00010b1ec494();
  return;
}



/* Entry: 10b1c46b8; end: 10b1c48ff;  */

void FUN_10b1c46b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar9;
  long extraout_x10;
  long lVar10;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 uStack_140;
  undefined1 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_110;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b1eaf00();
  if ((*(byte *)((long)param_2 + 0x44) & 1) == 0) {
    func_0x000104bdc2c8();
  }
  else {
    func_0x00010b1ebbb0();
    *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 8);
    param_2 = param_2 + 9;
    func_0x0001072e787c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(unaff_x19 + 1);
    *(byte *)(unaff_x19 + 4) = *(byte *)(unaff_x21 + 0x69) & *(byte *)(unaff_x21 + 0x68);
    func_0x00010b1ec6d8(*(undefined1 *)(unaff_x21 + 0x78));
    lVar10 = *(long *)(unaff_x21 + 0x80) * extraout_x10;
    if (*(char *)(unaff_x21 + 0x88) == '\0') {
      lVar10 = 0;
    }
    unaff_x19[5] = extraout_x8;
    unaff_x19[6] = lVar10;
    uVar3 = *(undefined4 *)(unaff_x21 + 0xb0);
    if (*(char *)(unaff_x21 + 0xb4) == '\0') {
      uVar3 = 0;
    }
    *(undefined4 *)(unaff_x19 + 7) = uVar3;
    func_0x00010b1ec6d8(*(undefined1 *)(unaff_x21 + 0xc0));
    unaff_x19[8] = extraout_x8_00;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    bVar5 = *(char *)(unaff_x21 + 0xa8) == '\0';
    puVar7 = (undefined8 *)(unaff_x21 + 0x90);
    if (bVar5) {
      puVar7 = &uStack_d8;
    }
    uVar9 = *puVar7;
    uVar1 = *(undefined8 *)(unaff_x21 + 0x98);
    uVar2 = *(undefined8 *)(unaff_x21 + 0xa0);
    if (bVar5) {
      uVar1 = 0;
      uVar2 = 0;
    }
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    unaff_x19[10] = 0;
    unaff_x19[9] = 0;
    unaff_x19[0xc] = 0;
    unaff_x19[0xb] = 0;
    unaff_x19[0xd] = uVar9;
    unaff_x19[0xe] = uVar1;
    unaff_x19[0xf] = uVar2;
    uStack_b8 = 0;
    uStack_b0 = 0;
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
    param_1 = &uStack_c0;
    func_0x000107c27914();
    func_0x00010b1ecaf0();
    uVar4 = *(uint *)(unaff_x21 + 0x40);
    uVar6 = uVar4 == 0x2d;
    if (0x2c < uVar4) {
      func_0x00010b1ebd14();
      func_0x00010b1eb884(&uStack_c0);
      __ZNSt3__19to_stringEi(&uStack_f0,uVar4);
      puStack_98 = &DAT_10f43a12c;
      puStack_90 = (undefined8 *)0xc;
      uStack_80 = uStack_e8;
      uStack_88 = uStack_f0;
      uStack_78 = uStack_e0;
      func_0x00010b1ed830();
      func_0x00010b1eb930(&uStack_d8,&uStack_c0);
      func_0x00010b1eb040(param_3);
      puVar7 = &uStack_d8;
      FUN_10b120998();
      do {
        func_0x00010b1eca78();
        func_0x00010b1ec03c();
      } while (!(bool)uVar6);
      func_0x00010b1eb738();
      uStack_c0 = CONCAT44(uStack_c0._4_4_,5);
      puStack_98 = (undefined *)0x0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_b8 = 0;
      uStack_a0 = 0;
      __ZNSt3__16chrono12system_clock3nowEv();
      uStack_88 = uStack_88 & 0xffffffff00000000;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_40 = 0;
      param_2 = &uStack_c0;
      param_1 = unaff_x19;
      puStack_90 = puVar7;
      FUN_10b1bfac8();
      func_0x00010b1ed180();
    }
    func_0x00010b1eaddc(uStack_38);
    if ((bool)uVar6) {
      return;
    }
  }
  ___stack_chk_fail();
  FUN_10b120998(&uStack_d8);
  puVar8 = &uStack_88;
  lVar10 = -0x50;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8);
    puVar8 = puVar8 + -5;
    lVar10 = lVar10 + 0x28;
  } while (lVar10 != 0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_f0);
  FUN_10b1d5ca0();
  func_0x00010b1eb598();
  puStack_110 = param_1;
  func_0x00010b1eb434();
  if (extraout_x8_01 == 0) {
    func_0x00010b1ebcb4();
  }
  else {
    FUN_10b1baed4(&uStack_140,*param_2,param_2[1]);
    if ((lStack_130 != 0) &&
       (lVar10 = lStack_130, FUN_10b1bf250(lStack_130,param_2[3]), lVar10 != 0)) {
      lVar10 = *(long *)(lVar10 + 0x30);
      *unaff_x19 = uStack_140;
      *(undefined1 *)(unaff_x19 + 1) = uStack_138;
      uStack_140 = 0;
      uStack_138 = 0;
      unaff_x19[3] = uStack_128;
      unaff_x19[2] = lStack_130;
      unaff_x19[4] = uStack_120;
      uStack_128 = 0;
      uStack_120 = 0;
      *(bool *)(unaff_x19 + 5) = lVar10 == 0;
      goto LAB_10b1c4990;
    }
  }
  func_0x00010b1ed4d4();
LAB_10b1c4990:
  func_0x00010b1eb910();
  return;
}



/* Entry: 10b1c4900; end: 10b1c49c3;  */

void FUN_10b1c4900(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long extraout_x8;
  long lVar1;
  undefined8 uStack_50;
  undefined1 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010b1eb434();
  if (extraout_x8 == 0) {
    func_0x00010b1ebcb4();
  }
  else {
    FUN_10b1baed4(&uStack_50,*param_2,param_2[1],param_3,*(undefined8 *)param_2[2],
                  ((undefined8 *)param_2[2])[1]);
    if ((lStack_40 != 0) && (lVar1 = lStack_40, FUN_10b1bf250(lStack_40,param_2[3]), lVar1 != 0)) {
      lVar1 = *(long *)(lVar1 + 0x30);
      *param_1 = uStack_50;
      *(undefined1 *)(param_1 + 1) = uStack_48;
      uStack_50 = 0;
      uStack_48 = 0;
      param_1[3] = uStack_38;
      param_1[2] = lStack_40;
      param_1[4] = uStack_30;
      uStack_38 = 0;
      uStack_30 = 0;
      *(bool *)(param_1 + 5) = lVar1 == 0;
      goto LAB_10b1c4990;
    }
  }
  func_0x00010b1ed4d4();
LAB_10b1c4990:
  func_0x00010b1eb910();
  return;
}



/* Entry: 10b1c49c4; end: 10b1c4a23;  */

void FUN_10b1c49c4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  __ZNSt3__19to_stringEi(auStack_38,*param_2);
  puVar1 = auStack_38;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(puVar1,&UNK_10f7322e9)
  ;
  func_0x000107c27fc4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,puVar1);
  func_0x00010b1ec670();
  return;
}



/* Entry: 10b1c4a24; end: 10b1c4a57;  */

bool FUN_10b1c4a24(long param_1)

{
  if (((*(char *)(param_1 + 0x58) == '\x01') && (*(char *)(param_1 + 0x88) == '\x01')) &&
     (*(long *)(param_1 + 0x80) == 0)) {
    return *(long *)(param_1 + 0x48) == 0;
  }
  return false;
}



/* Entry: 10b1c4a58; end: 10b1c4a77;  */

bool FUN_10b1c4a58(long param_1)

{
  FUN_10b1c41c0();
  if (param_1 == 0) {
    return false;
  }
  if (((*(uint *)(param_1 + 0x10) >> 2 & 1) == 0) && ((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0)) {
    return *(int *)(param_1 + 0x20) == 0;
  }
  return false;
}



/* Entry: 10b1c4a78; end: 10b1c4ae7;  */

undefined4 FUN_10b1c4a78(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1;
  FUN_10b1c41c0();
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else if (*(long *)(lVar1 + 0x80) == 0) {
    uVar2 = 2;
  }
  else if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_10b1c4ae8();
    if (param_1 == 0) {
      uVar2 = 3;
    }
    else {
      uVar2 = 4;
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


