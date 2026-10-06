/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c405cc; end: 101c4065f;  */

void FUN_101c405cc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x140;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000101c44d70();
  (*pcVar2)(param_2 + 0x140,&UNK_11045b418,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101c40660; end: 101c406f3;  */

void FUN_101c40660(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x168;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_101c43f48();
  (*pcVar2)(param_2 + 0x168,&UNK_11045b490,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101c406f4; end: 101c40787;  */

void FUN_101c406f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_101c44044();
  (*pcVar2)(param_2 + 0x1c8,&UNK_11045b520,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101c40788; end: 101c4081b;  */

void FUN_101c40788(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x260;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101c44db0();
  (*pcVar2)(param_2 + 0x260,&UNK_11045bbb8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 101c4081c; end: 101c40887;  */

void FUN_101c4081c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  
  FUN_101c40888(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 101c40888; end: 101c40ea3;  */

void FUN_101c40888(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x21;
  ulong uVar4;
  code *pcVar5;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  long lStack_150;
  undefined1 uStack_148;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  if ((*(long *)(param_1 + 0x10) != 0) &&
     ((**(code **)(param_4 + 0x30))(*(long *)(param_1 + 0x10),1,param_3,param_4), unaff_x21 != 0)) {
    return;
  }
  func_0x000107c61428(param_1 + 0x18,auStack_90,0,0);
  uVar2 = *(ulong *)(param_1 + 0x18);
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
LAB_101c4095c:
    func_0x000107c61428(param_1 + 0x28,auStack_a8,0,0);
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar4 = *(ulong *)(param_1 + 0x30);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar5 = *(code **)(param_4 + 0x70);
      func_0x000107c61434(uVar4);
      (*pcVar5)(uVar2,uVar4,3,param_3,param_4);
      if (unaff_x21 != 0) goto LAB_101c40a1c;
      func_0x000107c6142c(uVar4);
    }
    func_0x000107c61428(param_1 + 0x38,auStack_c0,0,0);
    uVar2 = *(ulong *)(param_1 + 0x38);
    uVar4 = *(ulong *)(param_1 + 0x40);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar5 = *(code **)(param_4 + 0x70);
      func_0x000107c61434(uVar4);
      (*pcVar5)(uVar2,uVar4,4,param_3,param_4);
      if (unaff_x21 != 0) goto LAB_101c40a1c;
      func_0x000107c6142c(uVar4);
    }
    func_0x000107c61428(param_1 + 0x48,auStack_d8,0,0);
    if (((*(long *)(param_1 + 0x48) == 0) ||
        ((**(code **)(param_4 + 0x30))(*(long *)(param_1 + 0x48),7,param_3,param_4), unaff_x21 == 0)
        ) && (FUN_101c40ea4(param_1,param_2,param_3,param_4), unaff_x21 == 0)) {
      func_0x000107c61428(param_1 + 0x78,auStack_f0,0,0);
      uVar2 = *(ulong *)(param_1 + 0x78);
      uVar4 = *(ulong *)(param_1 + 0x80);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar1 = uVar4 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        pcVar5 = *(code **)(param_4 + 0x70);
        func_0x000107c61434(uVar4);
        (*pcVar5)(uVar2,uVar4,9,param_3,param_4);
        func_0x000107c6142c(uVar4);
      }
      FUN_101c40f4c(param_1,param_2,param_3,param_4);
      FUN_101c41008(param_1,param_2,param_3,param_4);
      func_0x000107c61428((char *)(param_1 + 0x138),auStack_108,0,0);
      if (*(char *)(param_1 + 0x138) == '\x01') {
        (**(code **)(param_4 + 0x68))(1,0xc,param_3,param_4);
      }
      func_0x000107c61428(param_1 + 0x13c,auStack_120,0,0);
      if (*(int *)(param_1 + 0x13c) != 0) {
        (**(code **)(param_4 + 0x28))(*(int *)(param_1 + 0x13c),0xd,param_3,param_4);
      }
      lVar3 = param_1 + 0x140;
      func_0x000107c61428(lVar3,auStack_138,0,0);
      if (*(long *)(param_1 + 0x140) != 0) {
        uStack_148 = *(undefined1 *)(param_1 + 0x148);
        pcVar5 = *(code **)(param_4 + 0x80);
        lStack_150 = *(long *)(param_1 + 0x140);
        func_0x000101c44d70();
        (*pcVar5)(&lStack_150,0xe,&UNK_11045b418,lVar3,param_3,param_4);
      }
      func_0x000107c61428(param_1 + 0x150,&lStack_150,0,0);
      uVar2 = *(ulong *)(param_1 + 0x150);
      uVar4 = *(ulong *)(param_1 + 0x158);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar1 = uVar4 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        pcVar5 = *(code **)(param_4 + 0x70);
        func_0x000107c61434(uVar4);
        (*pcVar5)(uVar2,uVar4,0x10,param_3,param_4);
        func_0x000107c6142c(uVar4);
      }
      func_0x000107c61428(param_1 + 0x160,auStack_168,0,0);
      if (*(char *)(param_1 + 0x160) == '\x01') {
        (**(code **)(param_4 + 0x68))(1,0x11,param_3,param_4);
      }
      FUN_101c410bc(param_1,param_2,param_3,param_4);
      func_0x000107c61428(param_1 + 0x1b8,auStack_180,0,0);
      uVar2 = *(ulong *)(param_1 + 0x1b8);
      uVar4 = *(ulong *)(param_1 + 0x1c0);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar1 = uVar4 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        pcVar5 = *(code **)(param_4 + 0x70);
        func_0x000107c61434(uVar4);
        (*pcVar5)(uVar2,uVar4,0x13,param_3,param_4);
        func_0x000107c6142c(uVar4);
      }
      FUN_101c41174(param_1,param_2,param_3,param_4);
      func_0x000107c61428(param_1 + 600,auStack_198,0,0);
      if (*(char *)(param_1 + 600) == '\x01') {
        (**(code **)(param_4 + 0x68))(1,0x15,param_3,param_4);
      }
      func_0x000107c61428(param_1 + 0x259,auStack_1b0,0,0);
      if (*(char *)(param_1 + 0x259) == '\x01') {
        (**(code **)(param_4 + 0x68))(1,0x16,param_3,param_4);
      }
      func_0x000107c61428(param_1 + 0x25a,auStack_1c8,0,0);
      if (*(char *)(param_1 + 0x25a) == '\x01') {
        (**(code **)(param_4 + 0x68))(1,0x17,param_3,param_4);
      }
      FUN_101c41288(param_1,param_2,param_3,param_4);
      func_0x000107c61428(param_1 + 0x2b8,auStack_1e0,0,0);
      if (*(long *)(param_1 + 0x2b8) != 0) {
        (**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0x2b8),0x19,param_3,param_4);
      }
    }
  }
  else {
    pcVar5 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar5)(uVar2,uVar4,2,param_3,param_4);
    if (unaff_x21 == 0) {
      func_0x000107c6142c(uVar4);
      goto LAB_101c4095c;
    }
LAB_101c40a1c:
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 101c40ea4; end: 101c40f4b;  */

void FUN_101c40ea4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x50;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x70);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x58);
    uStack_80 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101c44df0();
    (*pcVar2)(&uStack_80,8,&UNK_11045b830,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101c40f4c; end: 101c41007;  */

void FUN_101c40f4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_a8 = *(long *)(param_1 + 0x90);
  if (lStack_a8 != 0) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x88);
    uStack_88 = *(undefined8 *)(param_1 + 0xb0);
    uStack_90 = *(undefined8 *)(param_1 + 0xa8);
    uStack_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_80 = *(undefined8 *)(param_1 + 0xb8);
    uStack_68 = *(undefined8 *)(param_1 + 0xd0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    uStack_60 = *(undefined8 *)(param_1 + 0xd8);
    uStack_98 = *(undefined8 *)(param_1 + 0xa0);
    uStack_a0 = *(undefined8 *)(param_1 + 0x98);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101c44db0();
    (*pcVar2)(&uStack_b0,10,&UNK_11045bbb8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101c41008; end: 101c410bb;  */

void FUN_101c41008(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xe0;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_a8 = *(long *)(param_1 + 0xe8);
  if (lStack_a8 != 0) {
    uStack_b0 = *(undefined8 *)(param_1 + 0xe0);
    uStack_78 = *(undefined8 *)(param_1 + 0x118);
    uStack_80 = *(undefined8 *)(param_1 + 0x110);
    uStack_68 = *(undefined8 *)(param_1 + 0x128);
    uStack_70 = *(undefined8 *)(param_1 + 0x120);
    uStack_60 = *(undefined8 *)(param_1 + 0x130);
    uStack_98 = *(undefined8 *)(param_1 + 0xf8);
    uStack_a0 = *(undefined8 *)(param_1 + 0xf0);
    uStack_88 = *(undefined8 *)(param_1 + 0x108);
    uStack_90 = *(undefined8 *)(param_1 + 0x100);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101c44db0();
    (*pcVar2)(&uStack_b0,0xb,&UNK_11045bbb8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101c410bc; end: 101c41173;  */

void FUN_101c410bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x168;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_a0 = *(long *)(param_1 + 0x170);
  if (lStack_a0 != 0) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x168);
    uStack_90 = *(undefined8 *)(param_1 + 0x180);
    uStack_98 = *(undefined8 *)(param_1 + 0x178);
    uStack_80 = *(undefined8 *)(param_1 + 400);
    uStack_88 = *(undefined8 *)(param_1 + 0x188);
    uStack_70 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_78 = *(undefined8 *)(param_1 + 0x198);
    uStack_60 = *(undefined8 *)(param_1 + 0x1b0);
    uStack_68 = *(undefined8 *)(param_1 + 0x1a8);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_101c43f48();
    (*pcVar2)(&uStack_a8,0x12,&UNK_11045b490,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101c41174; end: 101c41287;  */

void FUN_101c41174(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined8 *)(param_1 + 0x1c8);
  func_0x000107c61428(puVar1,auStack_178,0,0);
  uStack_78 = *(undefined8 *)(param_1 + 0x220);
  uStack_80 = *(undefined8 *)(param_1 + 0x218);
  uStack_f8 = *(undefined8 *)(param_1 + 0x230);
  uStack_100 = *(undefined8 *)(param_1 + 0x228);
  uStack_68 = *(undefined8 *)(param_1 + 0x230);
  uStack_70 = *(undefined8 *)(param_1 + 0x228);
  uStack_e8 = *(undefined8 *)(param_1 + 0x240);
  uStack_f0 = *(undefined8 *)(param_1 + 0x238);
  uStack_58 = *(undefined8 *)(param_1 + 0x240);
  uStack_60 = *(undefined8 *)(param_1 + 0x238);
  uStack_d8 = *(undefined8 *)(param_1 + 0x250);
  uStack_e0 = *(undefined8 *)(param_1 + 0x248);
  uStack_b8 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_138 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_140 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_a8 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_b0 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_128 = *(undefined8 *)(param_1 + 0x200);
  uStack_130 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_98 = *(undefined8 *)(param_1 + 0x200);
  uStack_a0 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_118 = *(undefined8 *)(param_1 + 0x210);
  uStack_120 = *(undefined8 *)(param_1 + 0x208);
  uStack_88 = *(undefined8 *)(param_1 + 0x210);
  uStack_90 = *(undefined8 *)(param_1 + 0x208);
  uStack_108 = *(undefined8 *)(param_1 + 0x220);
  uStack_110 = *(undefined8 *)(param_1 + 0x218);
  uStack_158 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_160 = *puVar1;
  uStack_148 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_150 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_c8 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_d0 = *puVar1;
  uStack_48 = *(undefined8 *)(param_1 + 0x250);
  uStack_50 = *(undefined8 *)(param_1 + 0x248);
  puVar1 = &uStack_160;
  FUN_101c43874();
  if ((int)puVar1 != 1) {
    uStack_1a8 = uStack_68;
    uStack_1b0 = uStack_70;
    uStack_198 = uStack_58;
    uStack_1a0 = uStack_60;
    uStack_188 = uStack_48;
    uStack_190 = uStack_50;
    uStack_1e8 = uStack_a8;
    uStack_1f0 = uStack_b0;
    uStack_1d8 = uStack_98;
    uStack_1e0 = uStack_a0;
    uStack_1c8 = uStack_88;
    uStack_1d0 = uStack_90;
    uStack_1b8 = uStack_78;
    uStack_1c0 = uStack_80;
    uStack_208 = uStack_c8;
    uStack_210 = uStack_d0;
    uStack_1f8 = uStack_b8;
    uStack_200 = uStack_c0;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_101c44044();
    (*pcVar2)(&uStack_210,0x14,&UNK_11045b520,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101c41288; end: 101c4133b;  */

void FUN_101c41288(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x260;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_a8 = *(long *)(param_1 + 0x268);
  if (lStack_a8 != 0) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x260);
    uStack_78 = *(undefined8 *)(param_1 + 0x298);
    uStack_80 = *(undefined8 *)(param_1 + 0x290);
    uStack_68 = *(undefined8 *)(param_1 + 0x2a8);
    uStack_70 = *(undefined8 *)(param_1 + 0x2a0);
    uStack_60 = *(undefined8 *)(param_1 + 0x2b0);
    uStack_98 = *(undefined8 *)(param_1 + 0x278);
    uStack_a0 = *(undefined8 *)(param_1 + 0x270);
    uStack_88 = *(undefined8 *)(param_1 + 0x288);
    uStack_90 = *(undefined8 *)(param_1 + 0x280);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101c44db0();
    (*pcVar2)(&uStack_b0,0x18,&UNK_11045bbb8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 101c4133c; end: 101c413eb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c4133c(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  if (param_3 != param_6) {
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    uVar17 = param_3;
    FUN_101c413ec(param_3,param_6);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_3);
    if ((uVar17 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_5 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_1;
    pbVar11 = param_2;
    if ((ulong)param_2 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
          (param_5 >> 0x3e < 3)) || ((uVar17 = 0, param_4 != 0 || (param_5 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_5 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_1;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_1 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_1 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_1 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_1 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_1 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_1 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_1 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_2 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_1 >> 0x20) - (long)unaff_x25);
          if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_2;
          if (param_1 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_1 = (byte *)0x0;
          }
          else {
            pbVar11 = param_1;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_1 = param_1 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_1;
            if (param_1 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_1;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_1 + 0x10);
          unaff_x24 = *(byte **)(param_1 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_1;
          if (param_1 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_1 = param_1 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_1;
          unaff_x25 = param_2;
          if (param_1 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_1;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4
                            ,param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_1 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_1;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 == pbVar13) && (param_2 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
           (pbVar10 = param_2, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_2 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_2 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 != pbVar13) || (param_2 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_2 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_4 = *(long *)(pbVar11 + 8);
    param_5 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 101c413ec; end: 101c428f7;  */

bool FUN_101c413ec(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lStack_e90;
  long lStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  ulong uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  ulong uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined1 auStack_d68 [88];
  ulong uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined1 auStack_cb0 [24];
  undefined1 auStack_c98 [24];
  ulong uStack_c80;
  long lStack_c78;
  ulong uStack_c70;
  long lStack_c68;
  ulong uStack_c60;
  long lStack_c58;
  ulong uStack_c50;
  long lStack_c48;
  ulong uStack_c40;
  undefined8 uStack_c38;
  ulong uStack_c30;
  undefined1 auStack_c20 [24];
  undefined1 auStack_c08 [24];
  undefined1 auStack_bf0 [24];
  undefined1 auStack_bd8 [24];
  undefined1 auStack_bc0 [24];
  undefined1 auStack_ba8 [24];
  ulong uStack_b90;
  long lStack_b88;
  ulong uStack_b80;
  long lStack_b78;
  ulong uStack_b70;
  long lStack_b68;
  ulong uStack_b60;
  long lStack_b58;
  ulong uStack_b50;
  undefined8 uStack_b48;
  ulong uStack_b40;
  long lStack_b38;
  long lStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  ulong uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  ulong uStack_a70;
  long lStack_a68;
  ulong uStack_a60;
  long lStack_a58;
  ulong uStack_a50;
  long lStack_a48;
  ulong uStack_a40;
  long lStack_a38;
  ulong uStack_a30;
  undefined8 uStack_a28;
  ulong uStack_a20;
  long lStack_a18;
  long lStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  ulong uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined1 auStack_950 [24];
  undefined1 auStack_938 [24];
  ulong uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  ulong uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined1 auStack_7f8 [24];
  undefined1 auStack_7e0 [24];
  undefined1 auStack_7c8 [24];
  ulong uStack_7b0;
  long lStack_7a8;
  ulong uStack_7a0;
  long lStack_798;
  ulong uStack_790;
  long lStack_788;
  ulong uStack_780;
  long lStack_778;
  ulong uStack_770;
  undefined8 uStack_768;
  ulong uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined1 auStack_708 [24];
  undefined1 auStack_6f0 [24];
  undefined1 auStack_6d8 [24];
  undefined1 auStack_6c0 [24];
  undefined1 auStack_6a8 [24];
  undefined1 auStack_690 [24];
  undefined1 auStack_678 [24];
  undefined1 auStack_660 [24];
  undefined1 auStack_648 [24];
  undefined1 auStack_630 [24];
  undefined1 auStack_618 [24];
  ulong uStack_600;
  long lStack_5f8;
  ulong uStack_5f0;
  long lStack_5e8;
  ulong uStack_5e0;
  long lStack_5d8;
  ulong uStack_5d0;
  long lStack_5c8;
  ulong uStack_5c0;
  undefined8 uStack_5b8;
  ulong uStack_5b0;
  long lStack_5a0;
  long lStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  ulong uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 auStack_540 [24];
  undefined1 auStack_528 [24];
  ulong uStack_510;
  long lStack_508;
  ulong uStack_500;
  long lStack_4f8;
  ulong uStack_4f0;
  long lStack_4e8;
  ulong uStack_4e0;
  long lStack_4d8;
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  ulong uStack_4c0;
  long lStack_4b0;
  long lStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 auStack_450 [24];
  undefined1 auStack_438 [24];
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  ulong uStack_360;
  long lStack_358;
  ulong uStack_350;
  long lStack_348;
  ulong uStack_340;
  long lStack_338;
  ulong uStack_330;
  long lStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
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
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_120;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  func_0x000107c61428(param_1 + 0x10,auStack_378,0,0);
  lVar15 = *(long *)(param_1 + 0x10);
  func_0x000107c61428(param_2 + 0x10,auStack_390,0,0);
  if (lVar15 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  func_0x000107c61428(param_1 + 0x18,auStack_3a8,0,0);
  func_0x000107c61428(param_2 + 0x18,&uStack_a70,0x20,0);
  uVar16 = *(ulong *)(param_1 + 0x18);
  if ((uVar16 == *(ulong *)(param_2 + 0x18)) &&
     (*(long *)(param_1 + 0x20) == *(long *)(param_2 + 0x20))) {
    func_0x000107c614a8(&uStack_a70);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_a70);
    if ((uVar16 & 1) == 0) {
      return false;
    }
  }
  func_0x000107c61428(param_1 + 0x28,auStack_3c0,0,0);
  func_0x000107c61428(param_2 + 0x28,&uStack_a70,0x20,0);
  uVar16 = *(ulong *)(param_1 + 0x28);
  if ((uVar16 == *(ulong *)(param_2 + 0x28)) &&
     (*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30))) {
    func_0x000107c614a8(&uStack_a70);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_a70);
    if ((uVar16 & 1) == 0) {
      return false;
    }
  }
  func_0x000107c61428(param_1 + 0x38,auStack_3d8,0,0);
  func_0x000107c61428(param_2 + 0x38,&uStack_a70,0x20,0);
  uVar16 = *(ulong *)(param_1 + 0x38);
  if ((uVar16 == *(ulong *)(param_2 + 0x38)) &&
     (*(long *)(param_1 + 0x40) == *(long *)(param_2 + 0x40))) {
    func_0x000107c614a8(&uStack_a70);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_a70);
    if ((uVar16 & 1) == 0) {
      return false;
    }
  }
  func_0x000107c61428(param_1 + 0x48,auStack_3f0,0,0);
  lVar15 = *(long *)(param_1 + 0x48);
  func_0x000107c61428(param_2 + 0x48,auStack_408,0,0);
  if (lVar15 != *(long *)(param_2 + 0x48)) {
    return false;
  }
  func_0x000107c61428(param_1 + 0x50,auStack_420,0,0);
  func_0x000107c61428(param_2 + 0x50,auStack_438,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar24 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar16 = *(ulong *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  uVar18 = *(ulong *)(param_2 + 0x70);
  if (uVar16 >> 0x3c < 0xf) {
    if (0xe < uVar18 >> 0x3c) goto LAB_101c4165c;
    uStack_c0 = uVar13;
    uStack_b8 = uVar4;
    uStack_b0 = uVar24;
    uStack_a8 = uVar5;
    uStack_a0 = uVar16;
    uStack_98 = uVar2;
    uStack_90 = uVar6;
    uStack_88 = uVar3;
    uStack_80 = uVar7;
    uStack_78 = uVar18;
    FUN_101c4377c(uVar13,uVar4,uVar24,uVar5,uVar16);
    FUN_101c4377c(uVar2,uVar6,uVar3,uVar7,uVar18);
    puVar10 = &uStack_c0;
    FUN_101c453b8(puVar10,&uStack_98);
    func_0x000101c437f8(uVar2,uVar6,uVar3,uVar7,uVar18);
    func_0x000101c437f8(uVar13,uVar4,uVar24,uVar5,uVar16);
    if (((ulong)puVar10 & 1) == 0) {
      return false;
    }
  }
  else {
    if (uVar18 >> 0x3c < 0xf) {
LAB_101c4165c:
      FUN_101c4377c(uVar13,uVar4,uVar24,uVar5,uVar16);
      FUN_101c4377c(uVar2,uVar6,uVar3,uVar7,uVar18);
      func_0x000101c437f8(uVar13,uVar4,uVar24,uVar5,uVar16);
      func_0x000101c437f8(uVar2,uVar6,uVar3,uVar7,uVar18);
      return false;
    }
    FUN_101c4377c(uVar13,uVar4,uVar24,uVar5,uVar16);
    FUN_101c4377c(uVar2,uVar6,uVar3,uVar7,uVar18);
    func_0x000101c437f8(uVar13,uVar4,uVar24,uVar5,uVar16);
  }
  func_0x000107c61428(param_1 + 0x78,auStack_450,0,0);
  func_0x000107c61428(param_2 + 0x78,&uStack_a70,0x20,0);
  uVar16 = *(ulong *)(param_1 + 0x78);
  if ((uVar16 == *(ulong *)(param_2 + 0x78)) &&
     (*(long *)(param_1 + 0x80) == *(long *)(param_2 + 0x80))) {
    func_0x000107c614a8(&uStack_a70);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_a70);
    if ((uVar16 & 1) == 0) {
      return false;
    }
  }
  func_0x000107c61428(param_1 + 0x88,auStack_528,0,0);
  func_0x000107c61428(param_2 + 0x88,auStack_540,0,0);
  lStack_a48 = *(long *)(param_1 + 0xb0);
  uStack_a50 = *(ulong *)(param_1 + 0xa8);
  lStack_a38 = *(long *)(param_1 + 0xc0);
  uStack_a40 = *(ulong *)(param_1 + 0xb8);
  uStack_a28 = *(undefined8 *)(param_1 + 0xd0);
  uStack_a30 = *(ulong *)(param_1 + 200);
  uStack_a20 = *(ulong *)(param_1 + 0xd8);
  lStack_a68 = *(long *)(param_1 + 0x90);
  uStack_a70 = *(ulong *)(param_1 + 0x88);
  lStack_a58 = *(long *)(param_1 + 0xa0);
  uStack_a60 = *(ulong *)(param_1 + 0x98);
  uStack_9c8 = *(undefined8 *)(param_2 + 0xd8);
  uStack_9d0 = *(undefined8 *)(param_2 + 0xd0);
  uStack_9d8 = *(undefined8 *)(param_2 + 200);
  uStack_9e0 = *(ulong *)(param_2 + 0xc0);
  uStack_9e8 = *(undefined8 *)(param_2 + 0xb8);
  uStack_9f0 = *(undefined8 *)(param_2 + 0xb0);
  uStack_9f8 = *(undefined8 *)(param_2 + 0xa8);
  uStack_a00 = *(undefined8 *)(param_2 + 0xa0);
  uStack_a08 = *(undefined8 *)(param_2 + 0x98);
  lStack_a10 = *(long *)(param_2 + 0x90);
  lStack_a18 = *(long *)(param_2 + 0x88);
  uStack_510 = uStack_a70;
  lStack_508 = lStack_a68;
  uStack_500 = uStack_a60;
  lStack_4f8 = lStack_a58;
  uStack_4f0 = uStack_a50;
  lStack_4e8 = lStack_a48;
  uStack_4e0 = uStack_a40;
  lStack_4d8 = lStack_a38;
  uStack_4d0 = uStack_a30;
  uStack_4c8 = uStack_a28;
  uStack_4c0 = uStack_a20;
  lStack_4b0 = lStack_a18;
  lStack_4a8 = lStack_a10;
  uStack_4a0 = uStack_a08;
  uStack_498 = uStack_a00;
  uStack_490 = uStack_9f8;
  uStack_488 = uStack_9f0;
  uStack_480 = uStack_9e8;
  uStack_478 = uStack_9e0;
  uStack_470 = uStack_9d8;
  uStack_468 = uStack_9d0;
  uStack_460 = uStack_9c8;
  if (lStack_a68 == 0) {
    if (lStack_a10 == 0) {
      lStack_b68 = *(undefined8 *)(param_1 + 0xb0);
      uStack_b70 = *(undefined8 *)(param_1 + 0xa8);
      lStack_b58 = *(undefined8 *)(param_1 + 0xc0);
      uStack_b60 = *(undefined8 *)(param_1 + 0xb8);
      uStack_b48 = *(undefined8 *)(param_1 + 0xd0);
      uStack_b50 = *(undefined8 *)(param_1 + 200);
      uStack_b40 = *(undefined8 *)(param_1 + 0xd8);
      lStack_b88 = *(undefined8 *)(param_1 + 0x90);
      uStack_b90 = *(ulong *)(param_1 + 0x88);
      lStack_b78 = *(undefined8 *)(param_1 + 0xa0);
      uStack_b80 = *(undefined8 *)(param_1 + 0x98);
      FUN_101c4388c(&uStack_510,&uStack_2d0,0x112e0ae00,&UNK_10d9e3a98);
      FUN_101c4388c(&lStack_4b0,&uStack_2d0,0x112e0ae00,&UNK_10d9e3a98);
      FUN_101c438f0(&uStack_b90,0x112e0ae00,&UNK_10d9e3a98);
      goto LAB_101c41a4c;
    }
LAB_101c4196c:
    uStack_b90 = uStack_a70;
    lStack_b88 = lStack_a68;
    uStack_b80 = uStack_a60;
    lStack_b78 = lStack_a58;
    uStack_b70 = uStack_a50;
    lStack_b68 = lStack_a48;
    uStack_b60 = uStack_a40;
    lStack_b58 = lStack_a38;
    uStack_b50 = uStack_a30;
    uStack_b48 = uStack_a28;
    uStack_b40 = uStack_a20;
    lStack_b38 = lStack_a18;
    lStack_b30 = lStack_a10;
    uStack_b28 = uStack_a08;
    uStack_b20 = uStack_a00;
    uStack_b18 = uStack_9f8;
    uStack_b10 = uStack_9f0;
    uStack_b08 = uStack_9e8;
    uStack_b00 = uStack_9e0;
    uStack_af8 = uStack_9d8;
    uStack_af0 = uStack_9d0;
    uStack_ae8 = uStack_9c8;
    FUN_101c4388c(&uStack_510,&uStack_2d0,0x112e0ae00,&UNK_10d9e3a98);
    plVar11 = &lStack_4b0;
LAB_101c41c34:
    puVar12 = &uStack_2d0;
LAB_101c41c38:
    FUN_101c4388c(plVar11,puVar12,0x112e0ae00,&UNK_10d9e3a98);
    uVar13 = 0x112e0ae08;
    puVar14 = &UNK_10d9e3aa0;
LAB_101c41c54:
    FUN_101c438f0(&uStack_b90,uVar13,puVar14);
    return false;
  }
  if (lStack_a10 == 0) goto LAB_101c4196c;
  lStack_b68 = *(undefined8 *)(param_2 + 0xb0);
  uStack_b70 = *(undefined8 *)(param_2 + 0xa8);
  lStack_b58 = *(undefined8 *)(param_2 + 0xc0);
  uStack_b60 = *(undefined8 *)(param_2 + 0xb8);
  uStack_b48 = *(undefined8 *)(param_2 + 0xd0);
  uStack_b50 = *(undefined8 *)(param_2 + 200);
  uStack_b40 = *(undefined8 *)(param_2 + 0xd8);
  lStack_b88 = *(undefined8 *)(param_2 + 0x90);
  uStack_b90 = *(ulong *)(param_2 + 0x88);
  lStack_b78 = *(undefined8 *)(param_2 + 0xa0);
  uStack_b80 = *(undefined8 *)(param_2 + 0x98);
  uStack_158 = *(undefined8 *)(param_1 + 0xb0);
  uStack_160 = *(undefined8 *)(param_1 + 0xa8);
  uStack_148 = *(undefined8 *)(param_1 + 0xc0);
  uStack_150 = *(undefined8 *)(param_1 + 0xb8);
  uStack_138 = *(undefined8 *)(param_1 + 0xd0);
  uStack_140 = *(undefined8 *)(param_1 + 200);
  uStack_130 = *(undefined8 *)(param_1 + 0xd8);
  uStack_178 = *(undefined8 *)(param_1 + 0x90);
  uStack_180 = *(undefined8 *)(param_1 + 0x88);
  uStack_168 = *(undefined8 *)(param_1 + 0xa0);
  uStack_170 = *(undefined8 *)(param_1 + 0x98);
  uStack_120 = uStack_b90;
  uStack_118 = lStack_b88;
  uStack_110 = uStack_b80;
  uStack_108 = lStack_b78;
  uStack_100 = uStack_b70;
  uStack_f8 = lStack_b68;
  uStack_f0 = uStack_b60;
  uStack_e8 = lStack_b58;
  uStack_e0 = uStack_b50;
  uStack_d8 = uStack_b48;
  uStack_d0 = uStack_b40;
  FUN_101c4388c(&uStack_510,&uStack_2d0,0x112e0ae00,&UNK_10d9e3a98);
  FUN_101c4388c(&lStack_4b0,&uStack_2d0,0x112e0ae00,&UNK_10d9e3a98);
  puVar10 = &uStack_180;
  FUN_101c46f80(puVar10,&uStack_120);
  FUN_101c438f0(&uStack_b90,0x112e0ae00,&UNK_10d9e3a98);
  FUN_101c438f0(&uStack_a70,0x112e0ae00,&UNK_10d9e3a98);
  if (((ulong)puVar10 & 1) == 0) {
    return false;
  }
LAB_101c41a4c:
  func_0x000107c61428(param_1 + 0xe0,auStack_618,0,0);
  func_0x000107c61428(param_2 + 0xe0,auStack_630,0,0);
  lStack_a48 = *(long *)(param_1 + 0x108);
  uStack_a50 = *(ulong *)(param_1 + 0x100);
  lStack_a38 = *(long *)(param_1 + 0x118);
  uStack_a40 = *(ulong *)(param_1 + 0x110);
  uStack_a28 = *(undefined8 *)(param_1 + 0x128);
  uStack_a30 = *(ulong *)(param_1 + 0x120);
  uStack_a20 = *(ulong *)(param_1 + 0x130);
  lStack_a68 = *(long *)(param_1 + 0xe8);
  uStack_a70 = *(ulong *)(param_1 + 0xe0);
  lStack_a58 = *(long *)(param_1 + 0xf8);
  uStack_a60 = *(ulong *)(param_1 + 0xf0);
  uStack_9c8 = *(undefined8 *)(param_2 + 0x130);
  uStack_9e0 = *(ulong *)(param_2 + 0x118);
  uStack_9e8 = *(undefined8 *)(param_2 + 0x110);
  uStack_9d0 = *(undefined8 *)(param_2 + 0x128);
  uStack_9d8 = *(undefined8 *)(param_2 + 0x120);
  uStack_a00 = *(undefined8 *)(param_2 + 0xf8);
  uStack_a08 = *(undefined8 *)(param_2 + 0xf0);
  uStack_9f0 = *(undefined8 *)(param_2 + 0x108);
  uStack_9f8 = *(undefined8 *)(param_2 + 0x100);
  lStack_a10 = *(long *)(param_2 + 0xe8);
  lStack_a18 = *(long *)(param_2 + 0xe0);
  uStack_600 = uStack_a70;
  lStack_5f8 = lStack_a68;
  uStack_5f0 = uStack_a60;
  lStack_5e8 = lStack_a58;
  uStack_5e0 = uStack_a50;
  lStack_5d8 = lStack_a48;
  uStack_5d0 = uStack_a40;
  lStack_5c8 = lStack_a38;
  uStack_5c0 = uStack_a30;
  uStack_5b8 = uStack_a28;
  uStack_5b0 = uStack_a20;
  lStack_5a0 = lStack_a18;
  lStack_598 = lStack_a10;
  uStack_590 = uStack_a08;
  uStack_588 = uStack_a00;
  uStack_580 = uStack_9f8;
  uStack_578 = uStack_9f0;
  uStack_570 = uStack_9e8;
  uStack_568 = uStack_9e0;
  uStack_560 = uStack_9d8;
  uStack_558 = uStack_9d0;
  uStack_550 = uStack_9c8;
  if (lStack_a68 == 0) {
    if (lStack_a10 != 0) {
LAB_101c41bc8:
      uStack_b90 = uStack_a70;
      lStack_b88 = lStack_a68;
      uStack_b80 = uStack_a60;
      lStack_b78 = lStack_a58;
      uStack_b70 = uStack_a50;
      lStack_b68 = lStack_a48;
      uStack_b60 = uStack_a40;
      lStack_b58 = lStack_a38;
      uStack_b50 = uStack_a30;
      uStack_b48 = uStack_a28;
      uStack_b40 = uStack_a20;
      lStack_b38 = lStack_a18;
      lStack_b30 = lStack_a10;
      uStack_b28 = uStack_a08;
      uStack_b20 = uStack_a00;
      uStack_b18 = uStack_9f8;
      uStack_b10 = uStack_9f0;
      uStack_b08 = uStack_9e8;
      uStack_b00 = uStack_9e0;
      uStack_af8 = uStack_9d8;
      uStack_af0 = uStack_9d0;
      uStack_ae8 = uStack_9c8;
      FUN_101c4388c(&uStack_600,&uStack_2d0,0x112e0ae00,&UNK_10d9e3a98);
      plVar11 = &lStack_5a0;
      goto LAB_101c41c34;
    }
    lStack_b68 = *(long *)(param_1 + 0x108);
    uStack_b70 = *(ulong *)(param_1 + 0x100);
    lStack_b58 = *(long *)(param_1 + 0x118);
    uStack_b60 = *(ulong *)(param_1 + 0x110);
    uStack_b48 = *(undefined8 *)(param_1 + 0x128);
    uStack_b50 = *(ulong *)(param_1 + 0x120);
    uStack_b40 = *(ulong *)(param_1 + 0x130);
    lStack_b88 = *(long *)(param_1 + 0xe8);
    uStack_b90 = *(ulong *)(param_1 + 0xe0);
    lStack_b78 = *(long *)(param_1 + 0xf8);
    uStack_b80 = *(ulong *)(param_1 + 0xf0);
    FUN_101c4388c(&uStack_600,&uStack_2d0,0x112e0ae00,&UNK_10d9e3a98);
    FUN_101c4388c(&lStack_5a0,&uStack_2d0,0x112e0ae00,&UNK_10d9e3a98);
    FUN_101c438f0(&uStack_b90,0x112e0ae00,&UNK_10d9e3a98);
  }
  else {
    if (lStack_a10 == 0) goto LAB_101c41bc8;
    lStack_b68 = *(long *)(param_2 + 0x108);
    uStack_b70 = *(ulong *)(param_2 + 0x100);
    lStack_b58 = *(long *)(param_2 + 0x118);
    uStack_b60 = *(ulong *)(param_2 + 0x110);
    uStack_b48 = *(undefined8 *)(param_2 + 0x128);
    uStack_b50 = *(ulong *)(param_2 + 0x120);
    uStack_b40 = *(ulong *)(param_2 + 0x130);
    lStack_b88 = *(long *)(param_2 + 0xe8);
    uStack_b90 = *(ulong *)(param_2 + 0xe0);
    lStack_b78 = *(long *)(param_2 + 0xf8);
    uStack_b80 = *(ulong *)(param_2 + 0xf0);
    uStack_218 = *(undefined8 *)(param_1 + 0x108);
    uStack_220 = *(undefined8 *)(param_1 + 0x100);
    uStack_208 = *(undefined8 *)(param_1 + 0x118);
    uStack_210 = *(undefined8 *)(param_1 + 0x110);
    uStack_1f8 = *(undefined8 *)(param_1 + 0x128);
    uStack_200 = *(undefined8 *)(param_1 + 0x120);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x130);
    uStack_238 = *(undefined8 *)(param_1 + 0xe8);
    uStack_240 = *(undefined8 *)(param_1 + 0xe0);
    uStack_228 = *(undefined8 *)(param_1 + 0xf8);
    uStack_230 = *(undefined8 *)(param_1 + 0xf0);
    uStack_1e0 = uStack_b90;
    lStack_1d8 = lStack_b88;
    uStack_1d0 = uStack_b80;
    lStack_1c8 = lStack_b78;
    uStack_1c0 = uStack_b70;
    lStack_1b8 = lStack_b68;
    uStack_1b0 = uStack_b60;
    lStack_1a8 = lStack_b58;
    uStack_1a0 = uStack_b50;
    uStack_198 = uStack_b48;
    uStack_190 = uStack_b40;
    FUN_101c4388c(&uStack_600,&uStack_2d0,0x112e0ae00,&UNK_10d9e3a98);
    FUN_101c4388c(&lStack_5a0,&uStack_2d0,0x112e0ae00,&UNK_10d9e3a98);
    puVar10 = &uStack_240;
    FUN_101c46f80(puVar10,&uStack_1e0);
    FUN_101c438f0(&uStack_b90,0x112e0ae00,&UNK_10d9e3a98);
    FUN_101c438f0(&uStack_a70,0x112e0ae00,&UNK_10d9e3a98);
    if (((ulong)puVar10 & 1) == 0) {
      return false;
    }
  }
  func_0x000107c61428((char *)(param_1 + 0x138),auStack_648,0,0);
  cVar8 = *(char *)(param_1 + 0x138);
  func_0x000107c61428((char *)(param_2 + 0x138),auStack_660,0,0);
  if (cVar8 != *(char *)(param_2 + 0x138)) {
    return false;
  }
  func_0x000107c61428(param_1 + 0x13c,auStack_678,0,0);
  iVar9 = *(int *)(param_1 + 0x13c);
  func_0x000107c61428(param_2 + 0x13c,auStack_690,0,0);
  if (iVar9 != *(int *)(param_2 + 0x13c)) {
    return false;
  }
  func_0x000107c61428(param_1 + 0x140,auStack_6a8,0,0);
  lVar17 = *(long *)(param_1 + 0x140);
  func_0x000107c61428(param_2 + 0x140,auStack_6c0,0,0);
  lVar15 = *(long *)(param_2 + 0x140);
  if (*(char *)(param_2 + 0x148) == '\x01') {
    if (lVar15 < 2) {
      if (lVar15 == 0) {
        if (lVar17 != 0) {
          return false;
        }
      }
      else if (lVar17 != 1) {
        return false;
      }
    }
    else if (lVar15 == 2) {
      if (lVar17 != 2) {
        return false;
      }
    }
    else if (lVar17 != 3) {
      return false;
    }
  }
  else if (lVar17 != lVar15) {
    return false;
  }
  func_0x000107c61428(param_1 + 0x150,auStack_6d8,0,0);
  func_0x000107c61428(param_2 + 0x150,&uStack_a70,0x20,0);
  uVar16 = *(ulong *)(param_1 + 0x150);
  if ((uVar16 == *(ulong *)(param_2 + 0x150)) &&
     (*(long *)(param_1 + 0x158) == *(long *)(param_2 + 0x158))) {
    func_0x000107c614a8(&uStack_a70);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_a70);
    if ((uVar16 & 1) == 0) {
      return false;
    }
  }
  func_0x000107c61428(param_1 + 0x160,auStack_6f0,0,0);
  cVar8 = *(char *)(param_1 + 0x160);
  func_0x000107c61428(param_2 + 0x160,auStack_708,0,0);
  if (cVar8 != *(char *)(param_2 + 0x160)) {
    return false;
  }
  func_0x000107c61428((ulong *)(param_1 + 0x168),auStack_7c8,0,0);
  puVar12 = (ulong *)(param_2 + 0x168);
  func_0x000107c61428(puVar12,auStack_7e0,0,0);
  lVar15 = *(long *)(param_1 + 400);
  uVar19 = *(ulong *)(param_1 + 0x188);
  lVar17 = *(long *)(param_1 + 0x1a0);
  uVar25 = *(ulong *)(param_1 + 0x198);
  lStack_a68 = *(long *)(param_1 + 0x170);
  uVar16 = *(ulong *)(param_1 + 0x168);
  lVar30 = *(long *)(param_1 + 0x180);
  uVar18 = *(ulong *)(param_1 + 0x178);
  uStack_758 = *(undefined8 *)(param_2 + 0x170);
  uStack_760 = *puVar12;
  uStack_a08 = *(undefined8 *)(param_2 + 0x180);
  lStack_a10 = *(long *)(param_2 + 0x178);
  uStack_9e8 = *(undefined8 *)(param_2 + 0x1a0);
  uStack_9f0 = *(undefined8 *)(param_2 + 0x198);
  uStack_718 = *(undefined8 *)(param_2 + 0x1b0);
  uStack_720 = *(undefined8 *)(param_2 + 0x1a8);
  uStack_738 = *(undefined8 *)(param_2 + 400);
  uStack_740 = *(undefined8 *)(param_2 + 0x188);
  uStack_728 = *(undefined8 *)(param_2 + 0x1a0);
  uStack_730 = *(undefined8 *)(param_2 + 0x198);
  uStack_748 = *(undefined8 *)(param_2 + 0x180);
  uStack_750 = *(undefined8 *)(param_2 + 0x178);
  uStack_9f8 = *(undefined8 *)(param_2 + 400);
  uStack_a00 = *(undefined8 *)(param_2 + 0x188);
  lStack_a18 = *(long *)(param_2 + 0x170);
  uStack_a20 = *puVar12;
  uVar13 = *(undefined8 *)(param_1 + 0x1b0);
  uVar20 = *(ulong *)(param_1 + 0x1a8);
  uStack_9d8 = *(undefined8 *)(param_2 + 0x1b0);
  uStack_9e0 = *(ulong *)(param_2 + 0x1a8);
  uStack_a70 = uVar16;
  uStack_a60 = uVar18;
  lStack_a58 = lVar30;
  uStack_a50 = uVar19;
  lStack_a48 = lVar15;
  uStack_a40 = uVar25;
  lStack_a38 = lVar17;
  uStack_a30 = uVar20;
  uStack_a28 = uVar13;
  uStack_7b0 = uVar16;
  lStack_7a8 = lStack_a68;
  uStack_7a0 = uVar18;
  lStack_798 = lVar30;
  uStack_790 = uVar19;
  lStack_788 = lVar15;
  uStack_780 = uVar25;
  lStack_778 = lVar17;
  uStack_770 = uVar20;
  uStack_768 = uVar13;
  if (lStack_a68 == 0) {
    if (lStack_a18 == 0) {
      FUN_101c4388c(&uStack_7b0,&uStack_b90,0x112e0ae10,&UNK_10d9e3aa8);
      FUN_101c4388c(&uStack_760,&uStack_b90,0x112e0ae10,&UNK_10d9e3aa8);
LAB_101c421e8:
      FUN_101c438f0(&uStack_a70,0x112e0ae10,&UNK_10d9e3aa8);
      func_0x000107c61428(param_1 + 0x1b8,auStack_7f8,0,0);
      func_0x000107c61428(param_2 + 0x1b8,&uStack_a70,0x20,0);
      uVar16 = *(ulong *)(param_1 + 0x1b8);
      if ((uVar16 == *(ulong *)(param_2 + 0x1b8)) &&
         (*(long *)(param_1 + 0x1c0) == *(long *)(param_2 + 0x1c0))) {
        func_0x000107c614a8(&uStack_a70);
      }
      else {
        func_0x000107c605b8();
        func_0x000107c614a8(&uStack_a70);
        if ((uVar16 & 1) == 0) {
          return false;
        }
      }
      puVar12 = (ulong *)(param_1 + 0x1c8);
      func_0x000107c61428(puVar12,auStack_938,0,0);
      puVar1 = (ulong *)(param_2 + 0x1c8);
      func_0x000107c61428(puVar1,auStack_950,0,0);
      lStack_a18 = *(long *)(param_1 + 0x220);
      uStack_a20 = *(ulong *)(param_1 + 0x218);
      uStack_8b8 = *(undefined8 *)(param_1 + 0x230);
      uStack_8c0 = *(undefined8 *)(param_1 + 0x228);
      uStack_a08 = *(undefined8 *)(param_1 + 0x230);
      lStack_a10 = *(long *)(param_1 + 0x228);
      uStack_8a8 = *(undefined8 *)(param_1 + 0x240);
      uStack_8b0 = *(undefined8 *)(param_1 + 0x238);
      uStack_9f8 = *(undefined8 *)(param_1 + 0x240);
      uStack_a00 = *(undefined8 *)(param_1 + 0x238);
      uStack_898 = *(undefined8 *)(param_1 + 0x250);
      uStack_8a0 = *(undefined8 *)(param_1 + 0x248);
      lStack_a58 = *(long *)(param_1 + 0x1e0);
      uStack_a60 = *(ulong *)(param_1 + 0x1d8);
      uStack_8f8 = *(undefined8 *)(param_1 + 0x1f0);
      uStack_900 = *(undefined8 *)(param_1 + 0x1e8);
      lStack_a48 = *(long *)(param_1 + 0x1f0);
      uStack_a50 = *(ulong *)(param_1 + 0x1e8);
      uStack_8e8 = *(undefined8 *)(param_1 + 0x200);
      uStack_8f0 = *(undefined8 *)(param_1 + 0x1f8);
      lStack_a38 = *(long *)(param_1 + 0x200);
      uStack_a40 = *(ulong *)(param_1 + 0x1f8);
      uStack_8d8 = *(undefined8 *)(param_1 + 0x210);
      uStack_8e0 = *(undefined8 *)(param_1 + 0x208);
      uStack_a28 = *(undefined8 *)(param_1 + 0x210);
      uStack_a30 = *(ulong *)(param_1 + 0x208);
      uStack_8c8 = *(undefined8 *)(param_1 + 0x220);
      uStack_8d0 = *(undefined8 *)(param_1 + 0x218);
      uStack_918 = *(undefined8 *)(param_1 + 0x1d0);
      uStack_920 = *puVar12;
      uStack_908 = *(undefined8 *)(param_1 + 0x1e0);
      uStack_910 = *(undefined8 *)(param_1 + 0x1d8);
      lStack_a68 = *(long *)(param_1 + 0x1d0);
      uStack_a70 = *puVar12;
      uStack_988 = *(undefined8 *)(param_2 + 0x220);
      uStack_990 = *(undefined8 *)(param_2 + 0x218);
      uStack_828 = *(undefined8 *)(param_2 + 0x230);
      uStack_830 = *(undefined8 *)(param_2 + 0x228);
      uStack_978 = *(undefined8 *)(param_2 + 0x230);
      uStack_980 = *(undefined8 *)(param_2 + 0x228);
      uStack_818 = *(undefined8 *)(param_2 + 0x240);
      uStack_820 = *(undefined8 *)(param_2 + 0x238);
      uStack_968 = *(undefined8 *)(param_2 + 0x240);
      uStack_970 = *(undefined8 *)(param_2 + 0x238);
      uStack_808 = *(undefined8 *)(param_2 + 0x250);
      uStack_810 = *(undefined8 *)(param_2 + 0x248);
      uStack_9c8 = *(undefined8 *)(param_2 + 0x1e0);
      uStack_9d0 = *(undefined8 *)(param_2 + 0x1d8);
      uStack_868 = *(undefined8 *)(param_2 + 0x1f0);
      uStack_870 = *(undefined8 *)(param_2 + 0x1e8);
      uStack_9b8 = *(undefined8 *)(param_2 + 0x1f0);
      uStack_9c0 = *(undefined8 *)(param_2 + 0x1e8);
      uStack_858 = *(undefined8 *)(param_2 + 0x200);
      uStack_860 = *(undefined8 *)(param_2 + 0x1f8);
      uStack_9a8 = *(undefined8 *)(param_2 + 0x200);
      uStack_9b0 = *(undefined8 *)(param_2 + 0x1f8);
      uStack_848 = *(undefined8 *)(param_2 + 0x210);
      uStack_850 = *(undefined8 *)(param_2 + 0x208);
      uStack_998 = *(undefined8 *)(param_2 + 0x210);
      uStack_9a0 = *(undefined8 *)(param_2 + 0x208);
      uStack_838 = *(undefined8 *)(param_2 + 0x220);
      uStack_840 = *(undefined8 *)(param_2 + 0x218);
      uStack_888 = *(undefined8 *)(param_2 + 0x1d0);
      uStack_890 = *puVar1;
      uStack_878 = *(undefined8 *)(param_2 + 0x1e0);
      uStack_880 = *(undefined8 *)(param_2 + 0x1d8);
      uStack_9d8 = *(undefined8 *)(param_2 + 0x1d0);
      uStack_9e0 = *puVar1;
      uStack_958 = *(undefined8 *)(param_2 + 0x250);
      uStack_960 = *(undefined8 *)(param_2 + 0x248);
      uStack_9e8 = *(undefined8 *)(param_1 + 0x250);
      uStack_9f0 = *(undefined8 *)(param_1 + 0x248);
      iVar9 = (int)&uStack_a70;
      FUN_101c43874();
      if (iVar9 == 1) {
        iVar9 = (int)&uStack_9e0;
        FUN_101c43874();
        if (iVar9 == 1) {
          uStack_b28 = uStack_a08;
          lStack_b30 = lStack_a10;
          uStack_b18 = uStack_9f8;
          uStack_b20 = uStack_a00;
          uStack_b08 = uStack_9e8;
          uStack_b10 = uStack_9f0;
          lStack_b68 = lStack_a48;
          uStack_b70 = uStack_a50;
          lStack_b58 = lStack_a38;
          uStack_b60 = uStack_a40;
          uStack_b48 = uStack_a28;
          uStack_b50 = uStack_a30;
          lStack_b38 = lStack_a18;
          uStack_b40 = uStack_a20;
          lStack_b88 = lStack_a68;
          uStack_b90 = uStack_a70;
          lStack_b78 = lStack_a58;
          uStack_b80 = uStack_a60;
          FUN_101c4388c(&uStack_920,&uStack_2d0,0x112e0ae20,&UNK_10d9e3ab8);
          FUN_101c4388c(&uStack_890,&uStack_2d0,0x112e0ae20,&UNK_10d9e3ab8);
          FUN_101c438f0(&uStack_b90,0x112e0ae20,&UNK_10d9e3ab8);
          goto LAB_101c425c4;
        }
      }
      else {
        uStack_b28 = uStack_a08;
        lStack_b30 = lStack_a10;
        uStack_b18 = uStack_9f8;
        uStack_b20 = uStack_a00;
        uStack_b08 = uStack_9e8;
        uStack_b10 = uStack_9f0;
        lStack_b68 = lStack_a48;
        uStack_b70 = uStack_a50;
        lStack_b58 = lStack_a38;
        uStack_b60 = uStack_a40;
        uStack_b48 = uStack_a28;
        uStack_b50 = uStack_a30;
        lStack_b38 = lStack_a18;
        uStack_b40 = uStack_a20;
        lStack_b88 = lStack_a68;
        uStack_b90 = uStack_a70;
        lStack_b78 = lStack_a58;
        uStack_b80 = uStack_a60;
        iVar9 = (int)&uStack_9e0;
        FUN_101c43874();
        if (iVar9 != 1) {
          uStack_d98 = uStack_978;
          uStack_da0 = uStack_980;
          uStack_d88 = uStack_968;
          uStack_d90 = uStack_970;
          uStack_d78 = uStack_958;
          uStack_d80 = uStack_960;
          uStack_dd8 = uStack_9b8;
          uStack_de0 = uStack_9c0;
          uStack_dc8 = uStack_9a8;
          uStack_dd0 = uStack_9b0;
          uStack_db8 = uStack_998;
          uStack_dc0 = uStack_9a0;
          uStack_da8 = uStack_988;
          uStack_db0 = uStack_990;
          uStack_df8 = uStack_9d8;
          uStack_e00 = uStack_9e0;
          uStack_de8 = uStack_9c8;
          uStack_df0 = uStack_9d0;
          uStack_268 = uStack_978;
          uStack_270 = uStack_980;
          uStack_258 = uStack_968;
          uStack_260 = uStack_970;
          uStack_248 = uStack_958;
          uStack_250 = uStack_960;
          uStack_2a8 = uStack_9b8;
          uStack_2b0 = uStack_9c0;
          uStack_298 = uStack_9a8;
          uStack_2a0 = uStack_9b0;
          uStack_278 = uStack_988;
          uStack_280 = uStack_990;
          uStack_288 = uStack_998;
          uStack_290 = uStack_9a0;
          uStack_2b8 = uStack_9c8;
          uStack_2c0 = uStack_9d0;
          uStack_2c8 = uStack_9d8;
          uStack_2d0 = uStack_9e0;
          uStack_2f8 = uStack_b28;
          lStack_300 = lStack_b30;
          uStack_2e8 = uStack_b18;
          uStack_2f0 = uStack_b20;
          uStack_2d8 = uStack_b08;
          uStack_2e0 = uStack_b10;
          lStack_338 = lStack_b68;
          uStack_340 = uStack_b70;
          lStack_328 = lStack_b58;
          uStack_330 = uStack_b60;
          lStack_308 = lStack_b38;
          uStack_310 = uStack_b40;
          uStack_318 = uStack_b48;
          uStack_320 = uStack_b50;
          lStack_348 = lStack_b78;
          uStack_350 = uStack_b80;
          lStack_358 = lStack_b88;
          uStack_360 = uStack_b90;
          FUN_101c4388c(&uStack_920,&lStack_e90,0x112e0ae20,&UNK_10d9e3ab8);
          FUN_101c4388c(&uStack_890,&lStack_e90,0x112e0ae20,&UNK_10d9e3ab8);
          puVar12 = &uStack_360;
          FUN_101c43930(puVar12,&uStack_2d0);
          FUN_101c438f0(&uStack_e00,0x112e0ae20,&UNK_10d9e3ab8);
          FUN_101c438f0(&uStack_a70,0x112e0ae20,&UNK_10d9e3ab8);
          if (((ulong)puVar12 & 1) == 0) {
            return false;
          }
LAB_101c425c4:
          func_0x000107c61428(param_1 + 600,auStack_ba8,0,0);
          cVar8 = *(char *)(param_1 + 600);
          func_0x000107c61428(param_2 + 600,auStack_bc0,0,0);
          if (cVar8 != *(char *)(param_2 + 600)) {
            return false;
          }
          func_0x000107c61428(param_1 + 0x259,auStack_bd8,0,0);
          cVar8 = *(char *)(param_1 + 0x259);
          func_0x000107c61428(param_2 + 0x259,auStack_bf0,0,0);
          if (cVar8 != *(char *)(param_2 + 0x259)) {
            return false;
          }
          func_0x000107c61428(param_1 + 0x25a,auStack_c08,0,0);
          cVar8 = *(char *)(param_1 + 0x25a);
          func_0x000107c61428(param_2 + 0x25a,auStack_c20,0,0);
          if (cVar8 != *(char *)(param_2 + 0x25a)) {
            return false;
          }
          puVar12 = (ulong *)(param_1 + 0x260);
          func_0x000107c61428(puVar12,auStack_c98,0,0);
          func_0x000107c61428((ulong *)(param_2 + 0x260),auStack_cb0,0,0);
          lStack_c58 = *(long *)(param_1 + 0x288);
          uStack_c60 = *(ulong *)(param_1 + 0x280);
          lStack_c48 = *(long *)(param_1 + 0x298);
          uStack_c50 = *(ulong *)(param_1 + 0x290);
          uStack_c38 = *(undefined8 *)(param_1 + 0x2a8);
          uStack_c40 = *(ulong *)(param_1 + 0x2a0);
          uStack_c30 = *(ulong *)(param_1 + 0x2b0);
          lStack_c78 = *(long *)(param_1 + 0x268);
          uStack_c80 = *(ulong *)(param_1 + 0x260);
          lStack_c68 = *(long *)(param_1 + 0x278);
          uStack_c70 = *(ulong *)(param_1 + 0x270);
          uStack_e40 = *(undefined8 *)(param_2 + 0x2b0);
          uStack_e58 = *(ulong *)(param_2 + 0x298);
          uStack_e60 = *(undefined8 *)(param_2 + 0x290);
          uStack_e48 = *(undefined8 *)(param_2 + 0x2a8);
          uStack_e50 = *(undefined8 *)(param_2 + 0x2a0);
          uStack_e78 = *(undefined8 *)(param_2 + 0x278);
          uStack_e80 = *(undefined8 *)(param_2 + 0x270);
          uStack_e68 = *(undefined8 *)(param_2 + 0x288);
          uStack_e70 = *(undefined8 *)(param_2 + 0x280);
          lStack_e88 = *(long *)(param_2 + 0x268);
          lStack_e90 = *(long *)(param_2 + 0x260);
          uStack_a70 = uStack_c80;
          lStack_a68 = lStack_c78;
          uStack_a60 = uStack_c70;
          lStack_a58 = lStack_c68;
          uStack_a50 = uStack_c60;
          lStack_a48 = lStack_c58;
          uStack_a40 = uStack_c50;
          lStack_a38 = lStack_c48;
          uStack_a30 = uStack_c40;
          uStack_a28 = uStack_c38;
          uStack_a20 = uStack_c30;
          lStack_a18 = lStack_e90;
          lStack_a10 = lStack_e88;
          uStack_a08 = uStack_e80;
          uStack_a00 = uStack_e78;
          uStack_9f8 = uStack_e70;
          uStack_9f0 = uStack_e68;
          uStack_9e8 = uStack_e60;
          uStack_9e0 = uStack_e58;
          uStack_9d8 = uStack_e50;
          uStack_9d0 = uStack_e48;
          uStack_9c8 = uStack_e40;
          if (lStack_c78 == 0) {
            if (lStack_e88 == 0) {
              lStack_b68 = *(undefined8 *)(param_1 + 0x288);
              uStack_b70 = *(undefined8 *)(param_1 + 0x280);
              lStack_b58 = *(undefined8 *)(param_1 + 0x298);
              uStack_b60 = *(undefined8 *)(param_1 + 0x290);
              uStack_b48 = *(undefined8 *)(param_1 + 0x2a8);
              uStack_b50 = *(undefined8 *)(param_1 + 0x2a0);
              uStack_b40 = *(undefined8 *)(param_1 + 0x2b0);
              lStack_b88 = *(undefined8 *)(param_1 + 0x268);
              uStack_b90 = *puVar12;
              lStack_b78 = *(undefined8 *)(param_1 + 0x278);
              uStack_b80 = *(undefined8 *)(param_1 + 0x270);
              FUN_101c4388c(&uStack_c80,&uStack_e00,0x112e0ae00,&UNK_10d9e3a98);
              FUN_101c4388c(&lStack_e90,&uStack_e00,0x112e0ae00,&UNK_10d9e3a98);
              FUN_101c438f0(&uStack_b90,0x112e0ae00,&UNK_10d9e3a98);
              goto LAB_101c428bc;
            }
          }
          else if (lStack_e88 != 0) {
            uStack_ce8 = *(undefined8 *)(param_2 + 0x288);
            uStack_cf0 = *(undefined8 *)(param_2 + 0x280);
            uStack_cd8 = *(undefined8 *)(param_2 + 0x298);
            uStack_ce0 = *(undefined8 *)(param_2 + 0x290);
            uStack_cc8 = *(undefined8 *)(param_2 + 0x2a8);
            uStack_cd0 = *(undefined8 *)(param_2 + 0x2a0);
            uStack_cc0 = *(undefined8 *)(param_2 + 0x2b0);
            uStack_d08 = *(undefined8 *)(param_2 + 0x268);
            uStack_d10 = *(ulong *)(param_2 + 0x260);
            uStack_cf8 = *(undefined8 *)(param_2 + 0x278);
            uStack_d00 = *(undefined8 *)(param_2 + 0x270);
            uStack_dd8 = *(undefined8 *)(param_1 + 0x288);
            uStack_de0 = *(undefined8 *)(param_1 + 0x280);
            uStack_dc8 = *(undefined8 *)(param_1 + 0x298);
            uStack_dd0 = *(undefined8 *)(param_1 + 0x290);
            uStack_db8 = *(undefined8 *)(param_1 + 0x2a8);
            uStack_dc0 = *(undefined8 *)(param_1 + 0x2a0);
            uStack_db0 = *(undefined8 *)(param_1 + 0x2b0);
            uStack_df8 = *(undefined8 *)(param_1 + 0x268);
            uStack_e00 = *puVar12;
            uStack_de8 = *(undefined8 *)(param_1 + 0x278);
            uStack_df0 = *(undefined8 *)(param_1 + 0x270);
            uStack_b90 = uStack_d10;
            lStack_b88 = uStack_d08;
            uStack_b80 = uStack_d00;
            lStack_b78 = uStack_cf8;
            uStack_b70 = uStack_cf0;
            lStack_b68 = uStack_ce8;
            uStack_b60 = uStack_ce0;
            lStack_b58 = uStack_cd8;
            uStack_b50 = uStack_cd0;
            uStack_b48 = uStack_cc8;
            uStack_b40 = uStack_cc0;
            FUN_101c4388c(&uStack_c80,auStack_d68,0x112e0ae00,&UNK_10d9e3a98);
            FUN_101c4388c(&lStack_e90,auStack_d68,0x112e0ae00,&UNK_10d9e3a98);
            puVar12 = &uStack_e00;
            FUN_101c46f80(puVar12,&uStack_b90);
            FUN_101c438f0(&uStack_d10,0x112e0ae00,&UNK_10d9e3a98);
            FUN_101c438f0(&uStack_a70,0x112e0ae00,&UNK_10d9e3a98);
            if (((ulong)puVar12 & 1) == 0) {
              return false;
            }
LAB_101c428bc:
            func_0x000107c61428(param_1 + 0x2b8,&uStack_a70,0,0);
            lVar15 = *(long *)(param_1 + 0x2b8);
            func_0x000107c61428(param_2 + 0x2b8,&uStack_d10,0,0);
            return lVar15 == *(long *)(param_2 + 0x2b8);
          }
          uStack_b90 = uStack_c80;
          lStack_b88 = lStack_c78;
          uStack_b80 = uStack_c70;
          lStack_b78 = lStack_c68;
          uStack_b70 = uStack_c60;
          lStack_b68 = lStack_c58;
          uStack_b60 = uStack_c50;
          lStack_b58 = lStack_c48;
          uStack_b50 = uStack_c40;
          uStack_b48 = uStack_c38;
          uStack_b40 = uStack_c30;
          lStack_b38 = lStack_e90;
          lStack_b30 = lStack_e88;
          uStack_b28 = uStack_e80;
          uStack_b20 = uStack_e78;
          uStack_b18 = uStack_e70;
          uStack_b10 = uStack_e68;
          uStack_b08 = uStack_e60;
          uStack_b00 = uStack_e58;
          uStack_af8 = uStack_e50;
          uStack_af0 = uStack_e48;
          uStack_ae8 = uStack_e40;
          FUN_101c4388c(&uStack_c80,&uStack_e00,0x112e0ae00,&UNK_10d9e3a98);
          plVar11 = &lStack_e90;
          puVar12 = &uStack_e00;
          goto LAB_101c41c38;
        }
      }
      func_0x000107c610b4(&uStack_b90,&uStack_a70,0x120);
      FUN_101c4388c(&uStack_920,&uStack_2d0,0x112e0ae20,&UNK_10d9e3ab8);
      FUN_101c4388c(&uStack_890,&uStack_2d0,0x112e0ae20,&UNK_10d9e3ab8);
      uVar13 = 0x112e0ae28;
      puVar14 = &UNK_10d9e3ac0;
      goto LAB_101c41c54;
    }
  }
  else if (lStack_a18 != 0) {
    lStack_b88 = *(long *)(param_2 + 0x170);
    uStack_b90 = *puVar12;
    lVar28 = *(long *)(param_2 + 0x180);
    uVar26 = *(ulong *)(param_2 + 0x178);
    lVar23 = *(long *)(param_2 + 400);
    uVar21 = *(ulong *)(param_2 + 0x188);
    lVar29 = *(long *)(param_2 + 0x1a0);
    uVar27 = *(ulong *)(param_2 + 0x198);
    uVar24 = *(undefined8 *)(param_2 + 0x1b0);
    uVar22 = *(ulong *)(param_2 + 0x1a8);
    uStack_b80 = uVar26;
    lStack_b78 = lVar28;
    uStack_b70 = uVar21;
    lStack_b68 = lVar23;
    uStack_b60 = uVar27;
    lStack_b58 = lVar29;
    uStack_b50 = uVar22;
    uStack_b48 = uVar24;
    if ((((((uVar16 != uStack_b90) || (lStack_b88 != lStack_a68)) &&
          (func_0x000107c605b8(), (uVar16 & 1) == 0)) ||
         (((uVar18 != uVar26 || (lVar30 != lVar28)) &&
          (func_0x000107c605b8(uVar18,lVar30,uVar26,lVar28,0), (uVar18 & 1) == 0)))) ||
        (((uVar19 != uVar21 || (lVar15 != lVar23)) &&
         (func_0x000107c605b8(uVar19,lVar15,uVar21,lVar23,0), (uVar19 & 1) == 0)))) ||
       (((uVar25 != uVar27 || (lVar17 != lVar29)) &&
        (func_0x000107c605b8(uVar25,lVar17,uVar27,lVar29,0), (uVar25 & 1) == 0)))) {
      uVar13 = 0x112e0ae10;
      puVar14 = &UNK_10d9e3aa8;
      FUN_101c4388c(&uStack_7b0,&uStack_2d0,0x112e0ae10,&UNK_10d9e3aa8);
      FUN_101c4388c(&uStack_760,&uStack_2d0,0x112e0ae10,&UNK_10d9e3aa8);
      FUN_101c438f0(&uStack_b90,0x112e0ae10,&UNK_10d9e3aa8);
      puVar12 = &uStack_a70;
      goto LAB_101c421a8;
    }
    FUN_101c4388c(&uStack_7b0,&uStack_2d0,0x112e0ae10,&UNK_10d9e3aa8);
    FUN_101c4388c(&uStack_760,&uStack_2d0,0x112e0ae10,&UNK_10d9e3aa8);
    func_0x000100e25fcc(uVar20,uVar13,uVar22,uVar24);
    FUN_101c438f0(&uStack_b90,0x112e0ae10,&UNK_10d9e3aa8);
    if ((uVar20 & 1) == 0) {
      uVar13 = 0x112e0ae10;
      puVar14 = &UNK_10d9e3aa8;
      puVar12 = &uStack_a70;
      goto LAB_101c421a8;
    }
    goto LAB_101c421e8;
  }
  uStack_b90 = uVar16;
  lStack_b88 = lStack_a68;
  uStack_b80 = uVar18;
  lStack_b78 = lVar30;
  uStack_b70 = uVar19;
  lStack_b68 = lVar15;
  uStack_b60 = uVar25;
  lStack_b58 = lVar17;
  uStack_b50 = uVar20;
  uStack_b48 = uVar13;
  uStack_b40 = uStack_a20;
  lStack_b38 = lStack_a18;
  lStack_b30 = lStack_a10;
  uStack_b28 = uStack_a08;
  uStack_b20 = uStack_a00;
  uStack_b18 = uStack_9f8;
  uStack_b10 = uStack_9f0;
  uStack_b08 = uStack_9e8;
  uStack_b00 = uStack_9e0;
  uStack_af8 = uStack_9d8;
  FUN_101c4388c(&uStack_7b0,&uStack_2d0,0x112e0ae10,&UNK_10d9e3aa8);
  FUN_101c4388c(&uStack_760,&uStack_2d0,0x112e0ae10,&UNK_10d9e3aa8);
  uVar13 = 0x112e0ae18;
  puVar14 = &UNK_10d9e3ab0;
  puVar12 = &uStack_b90;
LAB_101c421a8:
  FUN_101c438f0(puVar12,uVar13,puVar14);
  return false;
}



/* Entry: 101c428f8; end: 101c42957;  */

void FUN_101c428f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112e0ae30 != -1) {
    func_0x000107c61568(0x112e0ae30,FUN_101c3fd64);
  }
  uVar1 = uRam0000000112e0ae38;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101c42958; end: 101c4297b;  */

undefined1  [16] FUN_101c42958(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f004f80;
  auVar1._0_8_ = 0xd000000000000028;
  return auVar1;
}



/* Entry: 101c4297c; end: 101c429ab;  */

undefined1  [16] FUN_101c4297c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 101c429ac; end: 101c429df;  */

void FUN_101c429ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 101c429e0; end: 101c429f3;  */

undefined8 FUN_101c429e0(void)

{
  return 0x101c429f0;
}



/* Entry: 101c429f4; end: 101c42a2b;  */

void FUN_101c429f4(void)

{
  FUN_101c3ffcc();
  return;
}



/* Entry: 101c42a2c; end: 101c42a2f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c42a2c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101c42a30; end: 101c42a67;  */

uint FUN_101c42a30(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_101c44cb0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101c42a68; end: 101c42b0f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c42a68(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_101c413ec(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 101c42b10; end: 101c42baf;  */

/* WARNING: Possible PIC construction at 0x000101c42b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c42b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c42b60) */
/* WARNING: Removing unreachable block (ram,0x000101c42b70) */

void FUN_101c42b10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0ae68 != -1) {
    func_0x000107c61568(0x112e0ae68,FUN_101c3fd1c);
  }
  uVar5 = uRam00000001138043d0;
  uVar4 = uRam00000001138043c8;
  uVar3 = uRam00000001138043c0;
  uVar2 = uRam00000001138043b8;
  uVar1 = uRam00000001138043b0;
  *param_1 = uRam00000001138043a8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101c42bb0; end: 101c42beb;  */

void FUN_101c42bb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0b238;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0b238,&UNK_10d9e4000);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c42bec; end: 101c42cef;  */

void FUN_101c42bec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c42cf0; end: 101c42d97;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c42cf0(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  ulong uVar26;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_101c413ec(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 101c42d98; end: 101c42da3;  */

void FUN_101c42d98(void)

{
  return;
}



/* Entry: 101c42da4; end: 101c42dd7;  */

undefined8 FUN_101c42da4(undefined8 param_1)

{
  (*(code *)(undefined *)0x101c47778)();
  return param_1;
}



/* Entry: 101c42dd8; end: 101c42df7;  */

void FUN_101c42dd8(void)

{
  func_0x000107c61168(&PTR_PTR_112e0af18);
  return;
}



/* Entry: 101c42df8; end: 101c4377b;  */

void FUN_101c42df8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined1 auStack_980 [24];
  undefined1 auStack_968 [88];
  undefined1 auStack_910 [24];
  undefined1 auStack_8f8 [24];
  undefined1 auStack_8e0 [24];
  undefined1 auStack_8c8 [24];
  undefined1 auStack_8b0 [24];
  undefined1 auStack_898 [24];
  undefined1 auStack_880 [24];
  undefined1 auStack_868 [24];
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined1 auStack_7c0 [24];
  undefined1 auStack_7a8 [24];
  undefined1 auStack_790 [24];
  undefined1 auStack_778 [24];
  undefined1 auStack_760 [24];
  undefined1 auStack_748 [24];
  undefined1 auStack_730 [24];
  undefined1 auStack_718 [24];
  undefined1 auStack_700 [24];
  undefined1 auStack_6e8 [24];
  undefined1 auStack_6d0 [24];
  undefined1 auStack_6b8 [24];
  undefined1 auStack_6a0 [24];
  undefined1 auStack_688 [24];
  undefined1 auStack_670 [24];
  undefined1 auStack_658 [24];
  undefined1 auStack_640 [24];
  undefined1 auStack_628 [24];
  undefined1 auStack_610 [24];
  undefined1 auStack_5f8 [24];
  undefined1 auStack_5e0 [24];
  undefined1 auStack_5c8 [24];
  undefined1 auStack_5b0 [24];
  undefined1 auStack_598 [24];
  undefined1 auStack_580 [24];
  undefined1 auStack_568 [24];
  undefined1 auStack_550 [24];
  undefined1 auStack_538 [24];
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  undefined1 auStack_4f0 [24];
  undefined1 auStack_4d8 [24];
  undefined1 auStack_4c0 [24];
  undefined1 auStack_4a8 [24];
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
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
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
  undefined8 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_70;
  
  puVar19 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar19 = 0;
  puVar16 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar16 = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xe000000000000000;
  puVar18 = (undefined8 *)(unaff_x20 + 0x28);
  *puVar18 = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0xe000000000000000;
  puVar17 = (undefined8 *)(unaff_x20 + 0x38);
  *puVar17 = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  puVar15 = (undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *puVar15 = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x80) = 0xe000000000000000;
  *(undefined4 *)(unaff_x20 + 0x13c) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  puVar12 = (undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *puVar12 = 0;
  *(undefined1 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined1 *)(unaff_x20 + 0x148) = 1;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0xe000000000000000;
  *(undefined1 *)(unaff_x20 + 0x160) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + 0x168);
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0xe000000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + 0x1c8);
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
  FUN_101c438d4(&uStack_490);
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_428;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_430;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_418;
  *(undefined8 *)(unaff_x20 + 0x238) = uStack_420;
  *(undefined8 *)(unaff_x20 + 0x250) = uStack_408;
  *(undefined8 *)(unaff_x20 + 0x248) = uStack_410;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_468;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_470;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_458;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_460;
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_448;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_450;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_438;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_440;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_488;
  *puVar2 = uStack_490;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_478;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_480;
  *(undefined2 *)(unaff_x20 + 600) = 0;
  *(undefined1 *)(unaff_x20 + 0x25a) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined8 *)(unaff_x20 + 0x290) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_4a8,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61428(puVar16,auStack_4c0,1,0);
  *puVar16 = uVar13;
  func_0x000107c61428(param_1 + 0x18,auStack_4d8,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(puVar19,auStack_4f0,1,0);
  *puVar19 = uVar13;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  func_0x000107c61428(param_1 + 0x28,auStack_508,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61428(puVar18,auStack_520,1,0);
  *puVar18 = uVar13;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar14;
  func_0x000107c61428(param_1 + 0x38,auStack_538,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61428(puVar17,auStack_550,1,0);
  *puVar17 = uVar13;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar14);
  func_0x000107c61434(uVar4);
  func_0x000107c61428(param_1 + 0x48,auStack_568,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61428(puVar15,auStack_580,1,0);
  *puVar15 = uVar13;
  func_0x000107c61428(param_1 + 0x50,auStack_598,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uVar20 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c61428(unaff_x20 + 0x50,auStack_5b0,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar20;
  FUN_101c4377c(uVar13,uVar5,uVar3,uVar6,uVar20);
  func_0x000101c437f8(uVar14,uVar7,uVar4,uVar8,uVar11);
  func_0x000107c61428(param_1 + 0x78,auStack_5c8,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61428(unaff_x20 + 0x78,auStack_5e0,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c6142c(uVar14);
  func_0x000107c61428(param_1 + 0x88,auStack_5f8,0,0);
  uStack_3d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_3e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_3c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_3d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_3b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_3c0 = *(undefined8 *)(param_1 + 200);
  uStack_3b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_3f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_400 = *(undefined8 *)(param_1 + 0x88);
  uStack_3e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_3f0 = *(undefined8 *)(param_1 + 0x98);
  func_0x000107c61428(puVar12,auStack_610,1,0);
  uStack_378 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_380 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_368 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_370 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_358 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_360 = *(undefined8 *)(unaff_x20 + 200);
  uStack_398 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_3a0 = *puVar12;
  uStack_388 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_390 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_3d8;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_3e0;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_3c8;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_3d0;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_3b8;
  *(undefined8 *)(unaff_x20 + 200) = uStack_3c0;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_3f8;
  *puVar12 = uStack_400;
  uStack_350 = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_3b0;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_3e8;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_3f0;
  FUN_101c4388c(&uStack_400,&uStack_150,0x112e0ae00,&UNK_10d9e3a98);
  FUN_101c438f0(&uStack_3a0,0x112e0ae00,&UNK_10d9e3a98);
  func_0x000107c61428(param_1 + 0xe0,auStack_628,0,0);
  uStack_318 = *(undefined8 *)(param_1 + 0x108);
  uStack_320 = *(undefined8 *)(param_1 + 0x100);
  uStack_308 = *(undefined8 *)(param_1 + 0x118);
  uStack_310 = *(undefined8 *)(param_1 + 0x110);
  uStack_2f8 = *(undefined8 *)(param_1 + 0x128);
  uStack_300 = *(undefined8 *)(param_1 + 0x120);
  uStack_2f0 = *(undefined8 *)(param_1 + 0x130);
  uStack_338 = *(undefined8 *)(param_1 + 0xe8);
  uStack_340 = *(undefined8 *)(param_1 + 0xe0);
  uStack_328 = *(undefined8 *)(param_1 + 0xf8);
  uStack_330 = *(undefined8 *)(param_1 + 0xf0);
  func_0x000107c61428(unaff_x20 + 0xe0,auStack_640,1,0);
  uStack_2b8 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_2c0 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_2a8 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_2b0 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_298 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_2a0 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_290 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_2d8 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_2e0 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_2c8 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_2d0 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_320;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_338;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_340;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_330;
  FUN_101c4388c(&uStack_340,&uStack_150,0x112e0ae00,&UNK_10d9e3a98);
  FUN_101c438f0(&uStack_2e0,0x112e0ae00,&UNK_10d9e3a98);
  func_0x000107c61428(param_1 + 0x138,auStack_658,0,0);
  uVar10 = *(undefined1 *)(param_1 + 0x138);
  func_0x000107c61428(unaff_x20 + 0x138,auStack_670,1,0);
  *(undefined1 *)(unaff_x20 + 0x138) = uVar10;
  func_0x000107c61428(param_1 + 0x13c,auStack_688,0,0);
  uVar9 = *(undefined4 *)(param_1 + 0x13c);
  func_0x000107c61428(unaff_x20 + 0x13c,auStack_6a0,1,0);
  *(undefined4 *)(unaff_x20 + 0x13c) = uVar9;
  func_0x000107c61428(param_1 + 0x140,auStack_6b8,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x140);
  uVar10 = *(undefined1 *)(param_1 + 0x148);
  func_0x000107c61428(unaff_x20 + 0x140,auStack_6d0,1,0);
  *(undefined8 *)(unaff_x20 + 0x140) = uVar13;
  *(undefined1 *)(unaff_x20 + 0x148) = uVar10;
  func_0x000107c61428(param_1 + 0x150,auStack_6e8,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x150);
  uVar3 = *(undefined8 *)(param_1 + 0x158);
  func_0x000107c61428(unaff_x20 + 0x150,auStack_700,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x158);
  *(undefined8 *)(unaff_x20 + 0x150) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x158) = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c6142c(uVar14);
  func_0x000107c61428(param_1 + 0x160,auStack_718,0,0);
  uVar10 = *(undefined1 *)(param_1 + 0x160);
  func_0x000107c61428(unaff_x20 + 0x160,auStack_730,1,0);
  *(undefined1 *)(unaff_x20 + 0x160) = uVar10;
  func_0x000107c61428((undefined8 *)(param_1 + 0x168),auStack_748,0,0);
  uStack_258 = *(undefined8 *)(param_1 + 400);
  uStack_260 = *(undefined8 *)(param_1 + 0x188);
  uStack_248 = *(undefined8 *)(param_1 + 0x1a0);
  uStack_250 = *(undefined8 *)(param_1 + 0x198);
  uStack_238 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_240 = *(undefined8 *)(param_1 + 0x1a8);
  uStack_278 = *(undefined8 *)(param_1 + 0x170);
  uStack_280 = *(undefined8 *)(param_1 + 0x168);
  uStack_268 = *(undefined8 *)(param_1 + 0x180);
  uStack_270 = *(undefined8 *)(param_1 + 0x178);
  func_0x000107c61428(puVar1,auStack_760,1,0);
  uStack_208 = *(undefined8 *)(unaff_x20 + 400);
  uStack_210 = *(undefined8 *)(unaff_x20 + 0x188);
  uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x1a0);
  uStack_200 = *(undefined8 *)(unaff_x20 + 0x198);
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_230 = *puVar1;
  uStack_218 = *(undefined8 *)(unaff_x20 + 0x180);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0x178);
  *(undefined8 *)(unaff_x20 + 400) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0x188) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_278;
  *puVar1 = uStack_280;
  *(undefined8 *)(unaff_x20 + 0x180) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_270;
  FUN_101c4388c(&uStack_280,&uStack_150,0x112e0ae10,&UNK_10d9e3aa8);
  FUN_101c438f0(&uStack_230,0x112e0ae10,&UNK_10d9e3aa8);
  func_0x000107c61428(param_1 + 0x1b8,auStack_778,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x1b8);
  uVar3 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x000107c61428(unaff_x20 + 0x1b8,auStack_790,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x1c0);
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c6142c(uVar14);
  func_0x000107c61428((undefined8 *)(param_1 + 0x1c8),auStack_7a8,0,0);
  uStack_178 = *(undefined8 *)(param_1 + 0x230);
  uStack_180 = *(undefined8 *)(param_1 + 0x228);
  uStack_168 = *(undefined8 *)(param_1 + 0x240);
  uStack_170 = *(undefined8 *)(param_1 + 0x238);
  uStack_158 = *(undefined8 *)(param_1 + 0x250);
  uStack_160 = *(undefined8 *)(param_1 + 0x248);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x1e8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x200);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x1f8);
  uStack_198 = *(undefined8 *)(param_1 + 0x210);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x208);
  uStack_188 = *(undefined8 *)(param_1 + 0x220);
  uStack_190 = *(undefined8 *)(param_1 + 0x218);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x1d8);
  func_0x000107c61428(puVar2,auStack_7c0,1,0);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x230);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x228);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x240);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x238);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x250);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x248);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x1f0);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x200);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x210);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x208);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x220);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x218);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uStack_150 = *puVar2;
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x1d8);
  *(undefined8 *)(unaff_x20 + 0x210) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x208) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x220) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x218) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x230) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x228) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x238) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x250) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0x248) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x200) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x1f8) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uStack_1d8;
  *puVar2 = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uStack_1d0;
  FUN_101c4388c(&uStack_1e0,&uStack_850,0x112e0ae20,&UNK_10d9e3ab8);
  FUN_101c438f0(&uStack_150,0x112e0ae20,&UNK_10d9e3ab8);
  func_0x000107c61428(param_1 + 600,auStack_868,0,0);
  uVar10 = *(undefined1 *)(param_1 + 600);
  func_0x000107c61428(unaff_x20 + 600,auStack_880,1,0);
  *(undefined1 *)(unaff_x20 + 600) = uVar10;
  func_0x000107c61428(param_1 + 0x259,auStack_898,0,0);
  uVar10 = *(undefined1 *)(param_1 + 0x259);
  func_0x000107c61428(unaff_x20 + 0x259,auStack_8b0,1,0);
  *(undefined1 *)(unaff_x20 + 0x259) = uVar10;
  func_0x000107c61428(param_1 + 0x25a,auStack_8c8,0,0);
  uVar10 = *(undefined1 *)(param_1 + 0x25a);
  func_0x000107c61428(unaff_x20 + 0x25a,auStack_8e0,1,0);
  *(undefined1 *)(unaff_x20 + 0x25a) = uVar10;
  func_0x000107c61428(param_1 + 0x260,auStack_8f8,0,0);
  uStack_98 = *(undefined8 *)(param_1 + 0x288);
  uStack_a0 = *(undefined8 *)(param_1 + 0x280);
  uStack_88 = *(undefined8 *)(param_1 + 0x298);
  uStack_90 = *(undefined8 *)(param_1 + 0x290);
  uStack_78 = *(undefined8 *)(param_1 + 0x2a8);
  uStack_80 = *(undefined8 *)(param_1 + 0x2a0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2b0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x268);
  uStack_c0 = *(undefined8 *)(param_1 + 0x260);
  uStack_a8 = *(undefined8 *)(param_1 + 0x278);
  uStack_b0 = *(undefined8 *)(param_1 + 0x270);
  func_0x000107c61428(unaff_x20 + 0x260,auStack_910,1,0);
  uStack_828 = *(undefined8 *)(unaff_x20 + 0x288);
  uStack_830 = *(undefined8 *)(unaff_x20 + 0x280);
  uStack_818 = *(undefined8 *)(unaff_x20 + 0x298);
  uStack_820 = *(undefined8 *)(unaff_x20 + 0x290);
  uStack_808 = *(undefined8 *)(unaff_x20 + 0x2a8);
  uStack_810 = *(undefined8 *)(unaff_x20 + 0x2a0);
  uStack_800 = *(undefined8 *)(unaff_x20 + 0x2b0);
  uStack_848 = *(undefined8 *)(unaff_x20 + 0x268);
  uStack_850 = *(undefined8 *)(unaff_x20 + 0x260);
  uStack_838 = *(undefined8 *)(unaff_x20 + 0x278);
  uStack_840 = *(undefined8 *)(unaff_x20 + 0x270);
  *(undefined8 *)(unaff_x20 + 0x288) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x280) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x298) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x290) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x2a8) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x2a0) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x268) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x260) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x278) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x270) = uStack_b0;
  FUN_101c4388c(&uStack_c0,auStack_968,0x112e0ae00,&UNK_10d9e3a98);
  FUN_101c438f0(&uStack_850,0x112e0ae00,&UNK_10d9e3a98);
  func_0x000107c61428(param_1 + 0x2b8,auStack_968,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x2b8);
  func_0x000107c61428(unaff_x20 + 0x2b8,auStack_980,1,0);
  *(undefined8 *)(unaff_x20 + 0x2b8) = uVar13;
  return;
}



/* Entry: 101c4377c; end: 101c437b7;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_101c4377c(void)

{
  ulong in_x3;
  ulong in_x4;
  uint uVar1;
  
  if (0xe < in_x4 >> 0x3c) {
    return;
  }
  FUN_101c437b8();
  uVar1 = (uint)(in_x4 >> 0x3e);
  if (uVar1 == 1) {
    in_x3 = in_x4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(in_x3);
  return;
}



/* Entry: 101c437b8; end: 101c437cb;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_101c437b8(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (((param_3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  func_0x000107c61434();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101c437cc; end: 101c43833;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_101c437cc(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  func_0x000107c61434();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101c43834; end: 101c43847;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101c43834(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (((param_3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 101c43848; end: 101c43873;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101c43848(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  func_0x000107c6142c();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x1fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 101c43874; end: 101c4388b;  */

int FUN_101c43874(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c4388c; end: 101c438d3;  */

undefined8 FUN_101c4388c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101c438d4; end: 101c438ef;  */

void FUN_101c438d4(undefined8 *param_1)

{
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 101c438f0; end: 101c4392f;  */

undefined8 FUN_101c438f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101c43930; end: 101c43c5f;  */

uint FUN_101c43930(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_378 [88];
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
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
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar2 = param_1[1];
  if (((uVar2 == param_2[1] && param_1[2] == param_2[2]) ||
      (func_0x000107c605b8(), (uVar2 & 1) != 0)) &&
     ((uVar2 = param_1[3], uVar2 == param_2[3] && param_1[4] == param_2[4] ||
      (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    lStack_d8 = param_1[0xc];
    lStack_e0 = param_1[0xb];
    lStack_c8 = param_1[0xe];
    lStack_d0 = param_1[0xd];
    lStack_b8 = param_1[0x10];
    lStack_c0 = param_1[0xf];
    lStack_b0 = param_1[0x11];
    lStack_f8 = param_1[8];
    lStack_100 = param_1[7];
    lStack_e8 = param_1[10];
    lStack_f0 = param_1[9];
    lStack_138 = param_2[0xc];
    lStack_140 = param_2[0xb];
    lStack_128 = param_2[0xe];
    lStack_130 = param_2[0xd];
    lStack_118 = param_2[0x10];
    lStack_120 = param_2[0xf];
    lStack_110 = param_2[0x11];
    lStack_158 = param_2[8];
    lStack_160 = param_2[7];
    lStack_148 = param_2[10];
    lStack_150 = param_2[9];
    lStack_1e8 = param_1[0xc];
    lStack_1f0 = param_1[0xb];
    lStack_1d8 = param_1[0xe];
    lStack_1e0 = param_1[0xd];
    lStack_1c8 = param_1[0x10];
    lStack_1d0 = param_1[0xf];
    lStack_1c0 = param_1[0x11];
    lStack_208 = param_1[8];
    lStack_210 = param_1[7];
    lStack_1f8 = param_1[10];
    lStack_200 = param_1[9];
    lStack_240 = param_2[0xc];
    lStack_248 = param_2[0xb];
    lStack_230 = param_2[0xe];
    lStack_238 = param_2[0xd];
    lStack_220 = param_2[0x10];
    lStack_228 = param_2[0xf];
    lStack_218 = param_2[0x11];
    lStack_260 = param_2[8];
    lStack_268 = param_2[7];
    lStack_250 = param_2[10];
    lStack_258 = param_2[9];
    lStack_1b8 = lStack_268;
    lStack_1b0 = lStack_260;
    lStack_1a8 = lStack_258;
    lStack_1a0 = lStack_250;
    lStack_198 = lStack_248;
    lStack_190 = lStack_240;
    lStack_188 = lStack_238;
    lStack_180 = lStack_230;
    lStack_178 = lStack_228;
    lStack_170 = lStack_220;
    lStack_168 = lStack_218;
    if (lStack_208 == 0) {
      if (lStack_260 == 0) {
        lStack_298 = param_1[0xc];
        lStack_2a0 = param_1[0xb];
        lStack_288 = param_1[0xe];
        lStack_290 = param_1[0xd];
        lStack_278 = param_1[0x10];
        lStack_280 = param_1[0xf];
        lStack_270 = param_1[0x11];
        lStack_2b8 = param_1[8];
        lStack_2c0 = param_1[7];
        lStack_2a8 = param_1[10];
        lStack_2b0 = param_1[9];
        FUN_101c4388c(&lStack_100,&lStack_a0,0x112e0ae00,&UNK_10d9e3a98);
        FUN_101c4388c(&lStack_160,&lStack_a0,0x112e0ae00,&UNK_10d9e3a98);
        FUN_101c438f0(&lStack_2c0,0x112e0ae00,&UNK_10d9e3a98);
LAB_101c43c50:
        lVar4 = param_1[5];
        func_0x000100e25fcc(lVar4,param_1[6],param_2[5],param_2[6]);
        uVar1 = (uint)lVar4;
        goto LAB_101c43bc4;
      }
    }
    else if (lStack_260 != 0) {
      lStack_2f8 = param_2[0xc];
      lStack_300 = param_2[0xb];
      lStack_2e8 = param_2[0xe];
      lStack_2f0 = param_2[0xd];
      lStack_2d8 = param_2[0x10];
      lStack_2e0 = param_2[0xf];
      lStack_2d0 = param_2[0x11];
      lStack_318 = param_2[8];
      lStack_320 = param_2[7];
      lStack_308 = param_2[10];
      lStack_310 = param_2[9];
      lStack_78 = param_1[0xc];
      lStack_80 = param_1[0xb];
      lStack_68 = param_1[0xe];
      lStack_70 = param_1[0xd];
      lStack_58 = param_1[0x10];
      lStack_60 = param_1[0xf];
      lStack_50 = param_1[0x11];
      lStack_98 = param_1[8];
      lStack_a0 = param_1[7];
      lStack_88 = param_1[10];
      lStack_90 = param_1[9];
      lStack_2c0 = lStack_320;
      lStack_2b8 = lStack_318;
      lStack_2b0 = lStack_310;
      lStack_2a8 = lStack_308;
      lStack_2a0 = lStack_300;
      lStack_298 = lStack_2f8;
      lStack_290 = lStack_2f0;
      lStack_288 = lStack_2e8;
      lStack_280 = lStack_2e0;
      lStack_278 = lStack_2d8;
      lStack_270 = lStack_2d0;
      FUN_101c4388c(&lStack_100,auStack_378,0x112e0ae00,&UNK_10d9e3a98);
      FUN_101c4388c(&lStack_160,auStack_378,0x112e0ae00,&UNK_10d9e3a98);
      plVar3 = &lStack_a0;
      FUN_101c46f80(plVar3,&lStack_2c0);
      FUN_101c438f0(&lStack_320,0x112e0ae00,&UNK_10d9e3a98);
      FUN_101c438f0(&lStack_210,0x112e0ae00,&UNK_10d9e3a98);
      if (((ulong)plVar3 & 1) != 0) goto LAB_101c43c50;
      goto LAB_101c43bc0;
    }
    lStack_2c0 = lStack_210;
    lStack_2b8 = lStack_208;
    lStack_2b0 = lStack_200;
    lStack_2a8 = lStack_1f8;
    lStack_2a0 = lStack_1f0;
    lStack_298 = lStack_1e8;
    lStack_290 = lStack_1e0;
    lStack_288 = lStack_1d8;
    lStack_280 = lStack_1d0;
    lStack_278 = lStack_1c8;
    lStack_270 = lStack_1c0;
    FUN_101c4388c(&lStack_100,&lStack_a0,0x112e0ae00,&UNK_10d9e3a98);
    FUN_101c4388c(&lStack_160,&lStack_a0,0x112e0ae00,&UNK_10d9e3a98);
    FUN_101c438f0(&lStack_2c0,0x112e0ae08,&UNK_10d9e3aa0);
  }
LAB_101c43bc0:
  uVar1 = 0;
LAB_101c43bc4:
  return uVar1 & 1;
}



/* Entry: 101c43c60; end: 101c43d23;  */

/* WARNING: Possible PIC construction at 0x000101c43c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c43cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101c43cd8) */
/* WARNING: Removing unreachable block (ram,0x000101c43c94) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c43c60(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 != pbVar17 || pbVar16 != pbVar12) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar13,pbVar16,pbVar17,pbVar12,0);
    return pbVar13;
  }
  uVar14 = param_1[2];
  if ((uVar14 == param_2[2] && param_1[3] == param_2[3]) ||
     (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
    pbVar13 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar13 != pbVar17) || (pbVar16 != pbVar12)) goto code_r0x000107c605b8;
    uVar14 = param_1[6];
    if (((uVar14 == param_2[6]) && (param_1[7] == param_2[7])) ||
       (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
      pbVar10 = (byte *)param_1[8];
      pbVar25 = (byte *)param_1[9];
      lVar24 = param_2[8];
      uVar14 = param_2[9];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar14 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar15 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
             ((uVar14 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar14 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar15 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar15) {
                    pbVar15 = unaff_x23;
                  }
                  pbVar15 = pbVar15 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar15 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar15 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar15 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar15 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar15) {
                  pbVar15 = unaff_x23;
                }
                pbVar15 = pbVar15 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar14;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar13 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar16 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar15[0x28] == 0) {
              lVar24 = *(long *)pbVar15;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar13,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar13 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar15[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar12 = *(byte **)(pbVar15 + 0x10);
            lVar24 = *(long *)pbVar15;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar24,uVar11);
            if (((ulong)pbVar13 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar15[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            lVar24 = *(long *)(pbVar15 + 0x18);
            if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
              if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar15[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
               (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
               pbVar12 = *(byte **)(pbVar15 + 0x18),
               pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar15[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar12 = *(byte **)(pbVar15 + 0x10);
          lVar24 = *(long *)(pbVar15 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar12 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar12 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar15 + 0x20);
            lVar24 = *(long *)(pbVar15 + 0x18);
            bVar27 = pbVar15[8] | (byte)lVar24;
            bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar15[0x10] | (byte)lVar26;
            bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar15 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar13 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar15 + 0x20);
          lVar24 = *(long *)(pbVar15 + 0x18);
          bVar27 = pbVar15[8] | (byte)lVar24;
          bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar15[0x10] | (byte)lVar26;
          bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar15[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar15 + 8);
        uVar14 = *(ulong *)(pbVar15 + 0x10);
        lVar26 = *(long *)pbVar15;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar26,uVar11);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 101c43d24; end: 101c43da3;  */

void FUN_101c43d24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0ae50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e3c48;
  func_0x000107c61520(&UNK_10d9e3c48,&UNK_11045b490);
  puRam0000000112e0ae50 = puVar1;
  return;
}



/* Entry: 101c43da4; end: 101c43db7;  */

void FUN_101c43da4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c43db8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101c43df8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c43db8; end: 101c43e37;  */

void FUN_101c43db8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0ae70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e3b60;
  func_0x000107c61520(&UNK_10d9e3b60,&UNK_11045b418);
  puRam0000000112e0ae70 = puVar1;
  return;
}



/* Entry: 101c43e38; end: 101c43e3b;  */

void FUN_101c43e38(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e0ae80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e0ae88;
  func_0x00010002969c(0x112e0ae88,&UNK_10d9e3ae8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e0ae80 = puVar2;
  return;
}



/* Entry: 101c43e3c; end: 101c43e8b;  */

void FUN_101c43e3c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e0ae80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e0ae88;
  func_0x00010002969c(0x112e0ae88,&UNK_10d9e3ae8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e0ae80 = puVar2;
  return;
}



/* Entry: 101c43e8c; end: 101c43e8f;  */

void FUN_101c43e8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0ae90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e3ba0;
  func_0x000107c61520(&UNK_10d9e3ba0,&UNK_11045b418);
  puRam0000000112e0ae90 = puVar1;
  return;
}



/* Entry: 101c43e90; end: 101c43ecf;  */

void FUN_101c43e90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0ae90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e3ba0;
  func_0x000107c61520(&UNK_10d9e3ba0,&UNK_11045b418);
  puRam0000000112e0ae90 = puVar1;
  return;
}



/* Entry: 101c43ed0; end: 101c43ef3;  */

void FUN_101c43ed0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c43ef4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101c43ef4; end: 101c43f33;  */

void FUN_101c43ef4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0ae98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e3c20;
  func_0x000107c61520(&UNK_10d9e3c20,&UNK_11045b490);
  puRam0000000112e0ae98 = puVar1;
  return;
}



/* Entry: 101c43f34; end: 101c43f47;  */

void FUN_101c43f34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c43d24();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101c43f48();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c43f48; end: 101c43f87;  */

void FUN_101c43f48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0aea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e3bd8;
  func_0x000107c61520(&DAT_10d9e3bd8,&UNK_11045b490);
  puRam0000000112e0aea0 = puVar1;
  return;
}



/* Entry: 101c43f88; end: 101c43f8b;  */

void FUN_101c43f88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0aea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e3c88;
  func_0x000107c61520(&UNK_10d9e3c88,&UNK_11045b490);
  puRam0000000112e0aea8 = puVar1;
  return;
}



/* Entry: 101c43f8c; end: 101c43fcb;  */

void FUN_101c43f8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0aea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e3c88;
  func_0x000107c61520(&UNK_10d9e3c88,&UNK_11045b490);
  puRam0000000112e0aea8 = puVar1;
  return;
}



/* Entry: 101c43fcc; end: 101c43fef;  */

void FUN_101c43fcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c43ff0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101c43ff0; end: 101c4402f;  */

void FUN_101c43ff0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0aeb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e3cf8;
  func_0x000107c61520(&UNK_10d9e3cf8,&UNK_11045b520);
  puRam0000000112e0aeb0 = puVar1;
  return;
}



/* Entry: 101c44030; end: 101c44043;  */

void FUN_101c44030(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101c43d64)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101c44044();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c44044; end: 101c44083;  */

void FUN_101c44044(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0aeb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e3cb0;
  func_0x000107c61520(&DAT_10d9e3cb0,&UNK_11045b520);
  puRam0000000112e0aeb8 = puVar1;
  return;
}



/* Entry: 101c44084; end: 101c44087;  */

void FUN_101c44084(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0aec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e3d60;
  func_0x000107c61520(&UNK_10d9e3d60,&UNK_11045b520);
  puRam0000000112e0aec0 = puVar1;
  return;
}



/* Entry: 101c44088; end: 101c440c7;  */

void FUN_101c44088(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0aec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e3d60;
  func_0x000107c61520(&UNK_10d9e3d60,&UNK_11045b520);
  puRam0000000112e0aec0 = puVar1;
  return;
}



/* Entry: 101c440c8; end: 101c440eb;  */

void FUN_101c440c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c440ec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101c440ec; end: 101c4412b;  */

void FUN_101c440ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0aec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e3dd0;
  func_0x000107c61520(&UNK_10d9e3dd0,&UNK_11045b5b0);
  puRam0000000112e0aec8 = puVar1;
  return;
}



/* Entry: 101c4412c; end: 101c4413f;  */

void FUN_101c4412c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101c38748)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101c38788)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c44140; end: 101c4416f;  */

void FUN_101c44140(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c44170; end: 101c44173;  */

void FUN_101c44170(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0aed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e3e38;
  func_0x000107c61520(&UNK_10d9e3e38,&UNK_11045b5b0);
  puRam0000000112e0aed0 = puVar1;
  return;
}



/* Entry: 101c44174; end: 101c441b3;  */

void FUN_101c44174(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0aed0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e3e38;
  func_0x000107c61520(&UNK_10d9e3e38,&UNK_11045b5b0);
  puRam0000000112e0aed0 = puVar1;
  return;
}



/* Entry: 101c441b4; end: 101c44253;  */

int FUN_101c441b4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101c44254; end: 101c44293;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101c44254(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(ulong *)(param_1 + 0x40);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x48) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x48) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101c44294; end: 101c44313;  */

undefined8 * FUN_101c44294(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar1 = param_2[8];
  uVar5 = param_2[9];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar1,uVar5);
  param_1[8] = uVar1;
  param_1[9] = uVar5;
  return param_1;
}



/* Entry: 101c44314; end: 101c443db;  */

undefined8 * FUN_101c44314(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[6] = param_2[6];
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[8];
  uVar2 = param_2[9];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[8];
  uVar3 = param_1[9];
  param_1[8] = uVar4;
  param_1[9] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 101c443dc; end: 101c4444f;  */

undefined8 * FUN_101c443dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar3 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101c44450; end: 101c444fb;  */

int FUN_101c44450(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c444fc; end: 101c4455b;  */

/* WARNING: Possible PIC construction at 0x000101c44520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c44534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c44538) */
/* WARNING: Removing unreachable block (ram,0x000101c44524) */
/* WARNING: Removing unreachable block (ram,0x000101c44550) */
/* WARNING: Removing unreachable block (ram,0x000101c4452c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101c444fc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x30) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x30) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101c4455c; end: 101c44663;  */

undefined8 * FUN_101c4455c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar4 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar4;
  uVar3 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  lVar2 = param_2[8];
  if (lVar2 == 0) {
    uVar4 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar4;
    uVar4 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar4;
    uVar4 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar4;
    param_1[0x11] = param_2[0x11];
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    uVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
  }
  else {
    param_1[7] = param_2[7];
    param_1[8] = lVar2;
    uVar4 = param_2[9];
    uVar1 = param_2[10];
    func_0x000107c61434();
    func_0x00010006c00c(uVar4,uVar1);
    param_1[9] = uVar4;
    param_1[10] = uVar1;
    uVar4 = param_2[0xb];
    uVar1 = param_2[0xc];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar1;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    param_1[0xe] = param_2[0xe];
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    uVar4 = param_2[0x10];
    uVar1 = param_2[0x11];
    func_0x00010006c00c(uVar4,uVar1);
    param_1[0x10] = uVar4;
    param_1[0x11] = uVar1;
  }
  return param_1;
}



/* Entry: 101c44664; end: 101c4486b;  */

undefined8 * FUN_101c44664(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[5];
  uVar4 = param_2[6];
  func_0x00010006c00c(uVar1,uVar4);
  uVar3 = param_1[5];
  uVar5 = param_1[6];
  param_1[5] = uVar1;
  param_1[6] = uVar4;
  func_0x00010006c090(uVar3,uVar5);
  lVar2 = param_1[8];
  if (lVar2 == 0) {
    if (param_2[8] == 0) {
      uVar3 = param_2[8];
      uVar1 = param_2[7];
      uVar4 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar4;
      param_1[8] = uVar3;
      param_1[7] = uVar1;
      uVar3 = param_2[0xc];
      uVar1 = param_2[0xb];
      uVar5 = param_2[0xe];
      uVar4 = param_2[0xd];
      uVar7 = param_2[0x10];
      uVar6 = param_2[0xf];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar7;
      param_1[0xf] = uVar6;
      param_1[0xe] = uVar5;
      param_1[0xd] = uVar4;
      param_1[0xc] = uVar3;
      param_1[0xb] = uVar1;
    }
    else {
      param_1[7] = param_2[7];
      param_1[8] = param_2[8];
      uVar1 = param_2[9];
      uVar3 = param_2[10];
      func_0x000107c61434();
      func_0x00010006c00c(uVar1,uVar3);
      param_1[9] = uVar1;
      param_1[10] = uVar3;
      uVar1 = param_2[0xb];
      uVar3 = param_2[0xc];
      func_0x00010006c00c(uVar1,uVar3);
      param_1[0xb] = uVar1;
      param_1[0xc] = uVar3;
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
      uVar1 = param_2[0xe];
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      param_1[0xe] = uVar1;
      uVar1 = param_2[0x10];
      uVar3 = param_2[0x11];
      func_0x00010006c00c(uVar1,uVar3);
      param_1[0x10] = uVar1;
      param_1[0x11] = uVar3;
    }
  }
  else if (param_2[8] == 0) {
    FUN_101c42da4(param_1 + 7);
    uVar3 = param_2[10];
    uVar1 = param_2[9];
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    param_1[10] = uVar3;
    param_1[9] = uVar1;
    uVar4 = param_2[0xe];
    uVar3 = param_2[0xd];
    uVar6 = param_2[0x10];
    uVar5 = param_2[0xf];
    uVar1 = param_2[0x11];
    uVar7 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar7;
    param_1[0x11] = uVar1;
    param_1[0x10] = uVar6;
    param_1[0xf] = uVar5;
    param_1[0xe] = uVar4;
    param_1[0xd] = uVar3;
  }
  else {
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    func_0x000107c61434();
    func_0x000107c6142c(lVar2);
    uVar1 = param_2[9];
    uVar4 = param_2[10];
    func_0x00010006c00c(uVar1,uVar4);
    uVar3 = param_1[9];
    uVar5 = param_1[10];
    param_1[9] = uVar1;
    param_1[10] = uVar4;
    func_0x00010006c090(uVar3,uVar5);
    uVar1 = param_2[0xb];
    uVar4 = param_2[0xc];
    func_0x00010006c00c(uVar1,uVar4);
    uVar3 = param_1[0xb];
    uVar5 = param_1[0xc];
    param_1[0xb] = uVar1;
    param_1[0xc] = uVar4;
    func_0x00010006c090(uVar3,uVar5);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    uVar1 = param_2[0xe];
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    param_1[0xe] = uVar1;
    uVar1 = param_2[0x10];
    uVar4 = param_2[0x11];
    func_0x00010006c00c(uVar1,uVar4);
    uVar3 = param_1[0x10];
    uVar5 = param_1[0x11];
    param_1[0x10] = uVar1;
    param_1[0x11] = uVar4;
    func_0x00010006c090(uVar3,uVar5);
  }
  return param_1;
}



/* Entry: 101c4486c; end: 101c44967;  */

undefined8 * FUN_101c4486c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[8] != 0) {
    lVar3 = param_2[8];
    if (lVar3 != 0) {
      param_1[7] = param_2[7];
      param_1[8] = lVar3;
      func_0x000107c6142c();
      uVar1 = param_1[9];
      uVar2 = param_1[10];
      uVar4 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      uVar1 = param_1[0xb];
      uVar2 = param_1[0xc];
      uVar4 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
      param_1[0xe] = param_2[0xe];
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      uVar1 = param_1[0x10];
      uVar2 = param_1[0x11];
      uVar4 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    FUN_101c42da4(param_1 + 7);
  }
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  param_1[0x11] = param_2[0x11];
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  return param_1;
}



/* Entry: 101c44968; end: 101c44a23;  */

int FUN_101c44968(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x24] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c44a24; end: 101c44a4f;  */

void FUN_101c44a24(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 101c44a50; end: 101c44afb;  */

undefined8 * FUN_101c44a50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 101c44afc; end: 101c44b43;  */

undefined8 * FUN_101c44afc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101c44b44; end: 101c44bdb;  */

int FUN_101c44b44(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c44bdc; end: 101c44caf;  */

/* WARNING: Possible PIC construction at 0x000101c44c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c44c1c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101c44bdc(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 101c44cb0; end: 101c44e2f;  */

void FUN_101c44cb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e3da4;
  func_0x000107c61520(&DAT_10d9e3da4,&UNK_11045b5b0);
  puRam0000000112e0b240 = puVar1;
  return;
}



/* Entry: 101c44e30; end: 101c44e4b;  */

long FUN_101c44e30(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c44e4c; end: 101c44e93;  */

void FUN_101c44e4c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e4500,0x27,2);
  uRam00000001138043e0 = uStack_38;
  uRam00000001138043d8 = uStack_40;
  uRam00000001138043f0 = uStack_28;
  uRam00000001138043e8 = uStack_30;
  uRam0000000113804400 = uStack_18;
  uRam00000001138043f8 = uStack_20;
  return;
}



/* Entry: 101c44e94; end: 101c44f37;  */

void FUN_101c44e94(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      FUN_101c44f38();
    }
    else if (lVar1 == 2) {
      FUN_101c450a0();
    }
  }
  return;
}



/* Entry: 101c44f38; end: 101c4509f;  */

/* WARNING: Removing unreachable block (ram,0x000101c45068) */

void FUN_101c44f38(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x21;
  code *pcVar8;
  ulong uVar9;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  uVar9 = param_1[2];
  plVar6 = param_1;
  if ((uVar9 >> 0x3d & 1) == 0) {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    FUN_101c437cc(lVar1,lVar3,uVar9);
    plVar6 = (long *)0x0;
    func_0x000101c469b8(0,0,0);
    lStack_78 = lVar1;
    lStack_70 = lVar3;
    uStack_68 = uVar9;
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_101c461a0();
  (*pcVar8)(&lStack_78,&UNK_11045b940,plVar6,param_3,param_4);
  uVar5 = uStack_68;
  lVar3 = lStack_70;
  lVar1 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if ((uVar9 & 0x3000000000000000) == 0x3000000000000000) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar3,uVar5);
    }
    else {
      pcVar8 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar3,uVar5);
      (*pcVar8)(param_3,param_4);
    }
    func_0x000101c469b8(lStack_78,lStack_70,uStack_68);
    lVar2 = *param_1;
    lVar4 = param_1[1];
    lVar7 = param_1[2];
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[2] = uVar5;
    FUN_101c43834(lVar2,lVar4,lVar7);
  }
  else {
    func_0x000101c469b8(lStack_78,lStack_70,uStack_68);
  }
  return;
}



/* Entry: 101c450a0; end: 101c4521b;  */

/* WARNING: Removing unreachable block (ram,0x000101c451e0) */

void FUN_101c450a0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x21;
  code *pcVar9;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  uVar7 = param_1[2];
  plVar6 = param_1;
  if ((uVar7 & 0x3000000000000000) != 0x3000000000000000 && (uVar7 & 0x2000000000000000) != 0) {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    FUN_101c437cc(lVar1,lVar3);
    plVar6 = (long *)0x0;
    func_0x000101c469b8(0,0,0);
    lStack_78 = lVar1;
    lStack_70 = lVar3;
    uStack_68 = uVar7 & 0xdfffffffffffffff;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_101c461a0();
  (*pcVar9)(&lStack_78,&UNK_11045b940,plVar6,param_3,param_4);
  uVar5 = uStack_68;
  lVar3 = lStack_70;
  lVar1 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if ((uVar7 & 0x3000000000000000) == 0x3000000000000000) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar3,uVar5);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar3,uVar5);
      (*pcVar9)(param_3,param_4);
    }
    func_0x000101c469b8(lStack_78,lStack_70,uStack_68);
    lVar2 = *param_1;
    lVar4 = param_1[1];
    lVar8 = param_1[2];
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[2] = uVar5 | 0x2000000000000000;
    FUN_101c43834(lVar2,lVar4,lVar8);
  }
  else {
    func_0x000101c469b8(lStack_78,lStack_70,uStack_68);
  }
  return;
}



/* Entry: 101c4521c; end: 101c45297;  */

void FUN_101c4521c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  if (((*(ulong *)(unaff_x20 + 0x10) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    if ((*(ulong *)(unaff_x20 + 0x10) >> 0x3d & 1) == 0) {
      FUN_101c45298();
    }
    else {
      FUN_101c4531c();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      param_2,param_3);
  return;
}



/* Entry: 101c45298; end: 101c4531b;  */

void FUN_101c45298(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = param_1[2];
  if ((uStack_50 >> 0x3d & 1) == 0) {
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_101c461a0();
    (*pcVar1)(&uStack_60,1,&UNK_11045b940,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c4531c);
  (*pcVar1)();
}



/* Entry: 101c4531c; end: 101c453b7;  */

void FUN_101c4531c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = param_1[2];
  if (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (uStack_50 & 0x2000000000000000) != 0) {
    uStack_50 = uStack_50 & 0xdfffffffffffffff;
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_101c461a0();
    (*pcVar1)(&uStack_60,2,&UNK_11045b940,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c453b8);
  (*pcVar1)();
}



/* Entry: 101c453b8; end: 101c453fb;  */

uint FUN_101c453b8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar9 = param_1[1];
  uVar7 = *param_1;
  uVar5 = param_1[2];
  uVar10 = param_2[1];
  uVar8 = *param_2;
  uVar6 = param_2[2];
  uStack_a0 = uVar8;
  uStack_98 = uVar10;
  uStack_90 = uVar6;
  uStack_80 = uVar7;
  uStack_78 = uVar9;
  uStack_70 = uVar5;
  if (((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((uVar6 & 0x3000000000000000) == 0x3000000000000000) {
      FUN_101c46968(&uStack_80,auStack_b8);
      FUN_101c46968(&uStack_a0,auStack_b8);
LAB_101c45e5c:
      FUN_101c43834(uVar7,uVar9,uVar5);
      uVar7 = param_1[3];
      func_0x000100e25fcc(uVar7,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)uVar7;
      goto LAB_101c45f98;
    }
LAB_101c45e84:
    FUN_101c46968(&uStack_80,auStack_b8);
    FUN_101c46968(&uStack_a0,auStack_b8);
    FUN_101c43834(uVar7,uVar9,uVar5);
    uVar7 = uVar8;
    uVar9 = uVar10;
    uVar5 = uVar6;
  }
  else {
    if ((uVar6 & 0x3000000000000000) == 0x3000000000000000) goto LAB_101c45e84;
    if ((uVar5 >> 0x3d & 1) == 0) {
      if ((uVar6 >> 0x3d & 1) != 0) goto LAB_101c45f04;
      FUN_101c46968(&uStack_80,auStack_b8);
      FUN_101c46968(&uStack_a0,auStack_b8);
      uVar3 = uVar5;
      uVar4 = uVar6;
LAB_101c45f68:
      uVar2 = uVar7;
      FUN_101c45d84(uVar7,uVar9,uVar3,uVar8,uVar10,uVar4);
      FUN_101c43834(uVar8,uVar10,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_101c45e5c;
    }
    else {
      if ((uVar6 >> 0x3d & 1) != 0) {
        FUN_101c46968(&uStack_80,auStack_b8);
        FUN_101c46968(&uStack_a0,auStack_b8);
        uVar3 = uVar5 & 0xdfffffffffffffff;
        uVar4 = uVar6 & 0xdfffffffffffffff;
        goto LAB_101c45f68;
      }
LAB_101c45f04:
      FUN_101c46968(&uStack_80,auStack_b8);
      FUN_101c46968(&uStack_a0,auStack_b8);
      FUN_101c43834(uVar8,uVar10,uVar6);
    }
  }
  FUN_101c43834(uVar7,uVar9,uVar5);
  uVar1 = 0;
LAB_101c45f98:
  return uVar1 & 1;
}



/* Entry: 101c453fc; end: 101c4542b;  */

undefined1  [16] FUN_101c453fc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 101c4542c; end: 101c4545f;  */

void FUN_101c4542c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 101c45460; end: 101c45473;  */

undefined1  [16] FUN_101c45460(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x101c45470;
  return auVar1;
}



/* Entry: 101c45474; end: 101c45487;  */

void FUN_101c45474(void)

{
  FUN_101c44e94();
  return;
}



/* Entry: 101c45488; end: 101c454bf;  */

void FUN_101c45488(void)

{
  FUN_101c4521c();
  return;
}



/* Entry: 101c454c0; end: 101c454c3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c454c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101c454c4; end: 101c454fb;  */

uint FUN_101c454c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000101c46928();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}


