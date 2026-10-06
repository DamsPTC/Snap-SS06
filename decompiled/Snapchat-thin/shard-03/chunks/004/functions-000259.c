/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027face4; end: 1027fae9f;  */

/* WARNING: Removing unreachable block (ram,0x0001027fae10) */

void FUN_1027face4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x40);
  bVar1 = *(byte *)(param_1 + 0x48);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 1)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(ulong *)(param_1 + 0x10);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    func_0x0001027fe4dc(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d08294(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x0001028028c0();
  (*pcVar7)(&uStack_80,&UNK_110677440,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d08294(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    bStack_90 = *(undefined1 *)(param_1 + 0x48);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uStack_d0 = *(undefined8 *)(param_1 + 8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = 0x1000000000000000;
    *(undefined1 *)(param_1 + 0x48) = 0;
    FUN_102802e10(&uStack_d0,0x112ec28c0,&UNK_10dae0c48);
  }
  else {
    func_0x000100d08294(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1027faea0; end: 1027fb05b;  */

/* WARNING: Removing unreachable block (ram,0x0001027fafcc) */

void FUN_1027faea0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x40);
  bVar1 = *(byte *)(param_1 + 0x48);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 2)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(ulong *)(param_1 + 0x10);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    func_0x0001027fe4dc(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d08294(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802900();
  (*pcVar7)(&uStack_80,&UNK_1106774c0,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d08294(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    bStack_90 = *(undefined1 *)(param_1 + 0x48);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uStack_d0 = *(undefined8 *)(param_1 + 8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = 0x2000000000000000;
    *(undefined1 *)(param_1 + 0x48) = 0;
    FUN_102802e10(&uStack_d0,0x112ec28c0,&UNK_10dae0c48);
  }
  else {
    func_0x000100d08294(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1027fb05c; end: 1027fb217;  */

/* WARNING: Removing unreachable block (ram,0x0001027fb188) */

void FUN_1027fb05c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x40);
  bVar1 = *(byte *)(param_1 + 0x48);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 3)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(ulong *)(param_1 + 0x10);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    func_0x0001027fe4dc(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d08294(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802940();
  (*pcVar7)(&uStack_80,&UNK_110677540,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d08294(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    bStack_90 = *(undefined1 *)(param_1 + 0x48);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uStack_d0 = *(undefined8 *)(param_1 + 8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = 0x3000000000000000;
    *(undefined1 *)(param_1 + 0x48) = 0;
    FUN_102802e10(&uStack_d0,0x112ec28c0,&UNK_10dae0c48);
  }
  else {
    func_0x000100d08294(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1027fb218; end: 1027fb467;  */

/* WARNING: Removing unreachable block (ram,0x0001027fb3cc) */

void FUN_1027fb218(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  long unaff_x21;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auStack_138 [72];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  byte bStack_b0;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar11 = *(undefined8 *)(param_1 + 8);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uVar8 = *(ulong *)(param_1 + 0x40);
  bVar5 = *(byte *)(param_1 + 0x48);
  bVar6 = ((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar9 = (uint)bVar5;
  lVar7 = param_1;
  if ((!bVar6 || uVar9 != 0xff) && ((uint)(uVar8 >> 0x3c) & 0xfffffc03 | (uVar9 & 0x3f) << 2) == 4)
  {
    lVar1 = *(long *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_c0 = *(undefined8 *)(param_1 + 0x38);
    uStack_c8 = *(undefined8 *)(param_1 + 0x30);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    uStack_f0 = uVar11;
    lStack_e8 = lVar1;
    uStack_e0 = uVar3;
    uStack_d8 = uVar2;
    uStack_d0 = uVar4;
    uStack_b8 = uVar8;
    bStack_b0 = bVar5;
    func_0x0001027fe4dc(&uStack_f0,auStack_138);
    lVar7 = 0;
    FUN_102802d00(0,0,0,0,0,0);
    uStack_a0 = uVar11;
    lStack_98 = lVar1;
    uStack_90 = uVar3;
    uStack_88 = uVar2;
    uStack_80 = uVar4;
    uStack_78 = uVar10;
  }
  pcVar12 = *(code **)(param_4 + 0x198);
  func_0x000102802980();
  (*pcVar12)(&uStack_a0,&UNK_1106775c0,lVar7,param_3,param_4);
  uVar10 = uStack_78;
  uVar4 = uStack_80;
  uVar3 = uStack_88;
  uVar2 = uStack_90;
  lVar7 = lStack_98;
  uVar11 = uStack_a0;
  if ((unaff_x21 == 0) && (lStack_98 != 0)) {
    if (bVar6 && uVar9 == 0xff) {
      func_0x000107c61434(lStack_98);
      func_0x000107c61434(uVar3);
      func_0x00010006c00c(uVar4,uVar10);
    }
    else {
      pcVar12 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_98);
      func_0x000107c61434(uVar3);
      func_0x00010006c00c(uVar4,uVar10);
      (*pcVar12)(param_3,param_4);
    }
    FUN_102802d00(uStack_a0,lStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
    uStack_c8 = *(undefined8 *)(param_1 + 0x30);
    uStack_d0 = *(undefined8 *)(param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x40);
    uStack_c0 = *(undefined8 *)(param_1 + 0x38);
    bStack_b0 = *(undefined1 *)(param_1 + 0x48);
    lStack_e8 = *(undefined8 *)(param_1 + 0x10);
    uStack_f0 = *(undefined8 *)(param_1 + 8);
    uStack_d8 = *(undefined8 *)(param_1 + 0x20);
    uStack_e0 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = uVar11;
    *(long *)(param_1 + 0x10) = lVar7;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
    FUN_102802e10(&uStack_f0,0x112ec28c0,&UNK_10dae0c48);
  }
  else {
    FUN_102802d00(uStack_a0,lStack_98,uStack_90,uStack_88,uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1027fb468; end: 1027fb627;  */

/* WARNING: Removing unreachable block (ram,0x0001027fb594) */

void FUN_1027fb468(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x40);
  bVar1 = *(byte *)(param_1 + 0x48);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 5)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(ulong *)(param_1 + 0x10);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    func_0x0001027fe4dc(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d08294(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x0001028029c0();
  (*pcVar7)(&uStack_80,&UNK_110677648,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d08294(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    bStack_90 = *(undefined1 *)(param_1 + 0x48);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uStack_d0 = *(undefined8 *)(param_1 + 8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = 0x1000000000000000;
    *(undefined1 *)(param_1 + 0x48) = 1;
    FUN_102802e10(&uStack_d0,0x112ec28c0,&UNK_10dae0c48);
  }
  else {
    func_0x000100d08294(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1027fb628; end: 1027fb7e7;  */

/* WARNING: Removing unreachable block (ram,0x0001027fb754) */

void FUN_1027fb628(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x40);
  bVar1 = *(byte *)(param_1 + 0x48);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 6)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(ulong *)(param_1 + 0x10);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    func_0x0001027fe4dc(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d08294(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802a00();
  (*pcVar7)(&uStack_80,&UNK_1106776c8,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d08294(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    bStack_90 = *(undefined1 *)(param_1 + 0x48);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uStack_d0 = *(undefined8 *)(param_1 + 8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = 0x2000000000000000;
    *(undefined1 *)(param_1 + 0x48) = 1;
    FUN_102802e10(&uStack_d0,0x112ec28c0,&UNK_10dae0c48);
  }
  else {
    func_0x000100d08294(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1027fb7e8; end: 1027fb9a7;  */

/* WARNING: Removing unreachable block (ram,0x0001027fb914) */

void FUN_1027fb7e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x40);
  bVar1 = *(byte *)(param_1 + 0x48);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 7)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(ulong *)(param_1 + 0x10);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    func_0x0001027fe4dc(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d08294(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802a40();
  (*pcVar7)(&uStack_80,&UNK_110677748,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d08294(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    bStack_90 = *(undefined1 *)(param_1 + 0x48);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uStack_d0 = *(undefined8 *)(param_1 + 8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = 0x3000000000000000;
    *(undefined1 *)(param_1 + 0x48) = 1;
    FUN_102802e10(&uStack_d0,0x112ec28c0,&UNK_10dae0c48);
  }
  else {
    func_0x000100d08294(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1027fb9a8; end: 1027fbb63;  */

/* WARNING: Removing unreachable block (ram,0x0001027fbad4) */

void FUN_1027fb9a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x40);
  bVar1 = *(byte *)(param_1 + 0x48);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 8)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(ulong *)(param_1 + 0x10);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    func_0x0001027fe4dc(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d08294(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802a80();
  (*pcVar7)(&uStack_80,&UNK_1106777c8,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d08294(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    bStack_90 = *(undefined1 *)(param_1 + 0x48);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uStack_d0 = *(undefined8 *)(param_1 + 8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x48) = 2;
    FUN_102802e10(&uStack_d0,0x112ec28c0,&UNK_10dae0c48);
  }
  else {
    func_0x000100d08294(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1027fbb64; end: 1027fbe33;  */

/* WARNING: Removing unreachable block (ram,0x0001027fbd44) */

void FUN_1027fbb64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  ulong uVar14;
  uint uVar15;
  long unaff_x21;
  undefined8 uVar16;
  code *pcVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 uStack_1b8;
  undefined1 uStack_1a8;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  byte bStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uVar16 = param_1[1];
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uVar14 = param_1[8];
  bVar7 = *(byte *)(param_1 + 9);
  bVar11 = ((uVar14 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar15 = (uint)bVar7;
  puVar12 = param_1;
  if ((!bVar11 || uVar15 != 0xff) &&
      ((uint)(uVar14 >> 0x3c) & 0xfffffc03 | (uVar15 & 0x3f) << 2) == 9) {
    lVar1 = param_1[2];
    uVar4 = param_1[3];
    uVar2 = param_1[4];
    uVar5 = param_1[5];
    uVar3 = param_1[6];
    uVar6 = param_1[7];
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_140 = uVar16;
    lStack_138 = lVar1;
    uStack_130 = uVar4;
    uStack_128 = uVar2;
    uStack_120 = uVar5;
    uStack_118 = uVar3;
    uStack_110 = uVar6;
    uStack_108 = uVar14;
    bStack_100 = bVar7;
    func_0x0001027fe4dc(&uStack_140,&uStack_190);
    puVar12 = &uStack_f0;
    FUN_102802e10(puVar12,0x112ec2a70,&UNK_10dbe6900);
    uStack_b0 = uVar16;
    lStack_a8 = lVar1;
    uStack_a0 = uVar4;
    uStack_98 = uVar2;
    uStack_90 = uVar5;
    uStack_88 = uVar3;
    uStack_80 = uVar6;
    uStack_78 = uVar14 & 0xcfffffffffffffff;
  }
  pcVar17 = *(code **)(param_4 + 0x198);
  func_0x000102802ac0();
  (*pcVar17)(&uStack_b0,&UNK_110677848,puVar12,param_3,param_4);
  uVar14 = uStack_78;
  uVar6 = uStack_80;
  uVar5 = uStack_88;
  uVar4 = uStack_90;
  uVar3 = uStack_98;
  uVar2 = uStack_a0;
  lVar1 = lStack_a8;
  uVar16 = uStack_b0;
  if (unaff_x21 == 0) {
    uStack_190 = uStack_b0;
    lStack_188 = lStack_a8;
    uStack_178 = uStack_98;
    uStack_180 = uStack_a0;
    uStack_168 = uStack_88;
    uStack_170 = uStack_90;
    uStack_160 = uStack_80;
    uStack_158 = uStack_78;
    if (lStack_a8 != 0) {
      uStack_1a8 = (undefined1)uStack_98;
      uStack_1b8 = (undefined1)lStack_a8;
      if (bVar11 && uVar15 == 0xff) {
        lStack_138 = lStack_a8;
        uStack_140 = uStack_b0;
        uStack_128 = uStack_98;
        uStack_130 = uStack_a0;
        uStack_118 = uStack_88;
        uStack_120 = uStack_90;
        uStack_108 = uStack_78;
        uStack_110 = uStack_80;
        func_0x0001027fe510(&uStack_140,&uStack_f0);
      }
      else {
        pcVar17 = *(code **)(param_4 + 8);
        lStack_138 = lStack_a8;
        uStack_140 = uStack_b0;
        uStack_128 = uStack_98;
        uStack_130 = uStack_a0;
        uStack_118 = uStack_88;
        uStack_120 = uStack_90;
        uStack_108 = uStack_78;
        uStack_110 = uStack_80;
        func_0x0001027fe510(&uStack_140,&uStack_f0);
        (*pcVar17)(param_3,param_4);
      }
      uVar18 = (undefined1)((ulong)uVar3 >> 8);
      uVar19 = (undefined1)((ulong)uVar3 >> 0x10);
      uVar20 = (undefined1)((ulong)uVar3 >> 0x18);
      uVar21 = (undefined1)((ulong)uVar3 >> 0x20);
      uVar22 = (undefined1)((ulong)uVar3 >> 0x28);
      uVar23 = (undefined1)((ulong)uVar3 >> 0x30);
      uVar24 = (undefined1)((ulong)uVar3 >> 0x38);
      auVar26[8] = uStack_1a8;
      auVar26._0_8_ = uVar2;
      auVar25[8] = uStack_1a8;
      auVar25._0_8_ = uVar2;
      auVar10._8_8_ = uVar5;
      auVar10._0_8_ = uVar4;
      auVar27._8_8_ = uVar5;
      auVar27._0_8_ = uVar4;
      auVar27 = NEON_ext(auVar27,auVar10,8,1);
      auVar25[9] = uVar18;
      auVar25[10] = uVar19;
      auVar25[0xb] = uVar20;
      auVar25[0xc] = uVar21;
      auVar25[0xd] = uVar22;
      auVar25[0xe] = uVar23;
      auVar25[0xf] = uVar24;
      auVar26[9] = uVar18;
      auVar26[10] = uVar19;
      auVar26[0xb] = uVar20;
      auVar26[0xc] = uVar21;
      auVar26[0xd] = uVar22;
      auVar26[0xe] = uVar23;
      auVar26[0xf] = uVar24;
      auVar25 = NEON_ext(auVar25,auVar26,8,1);
      uVar18 = (undefined1)((ulong)lVar1 >> 8);
      uVar19 = (undefined1)((ulong)lVar1 >> 0x10);
      uVar20 = (undefined1)((ulong)lVar1 >> 0x18);
      uVar21 = (undefined1)((ulong)lVar1 >> 0x20);
      uVar22 = (undefined1)((ulong)lVar1 >> 0x28);
      uVar23 = (undefined1)((ulong)lVar1 >> 0x30);
      uVar24 = (undefined1)((ulong)lVar1 >> 0x38);
      auVar9[8] = uStack_1b8;
      auVar9._0_8_ = uVar16;
      auVar8[8] = uStack_1b8;
      auVar8._0_8_ = uVar16;
      auVar8[9] = uVar18;
      auVar8[10] = uVar19;
      auVar8[0xb] = uVar20;
      auVar8[0xc] = uVar21;
      auVar8[0xd] = uVar22;
      auVar8[0xe] = uVar23;
      auVar8[0xf] = uVar24;
      auVar9[9] = uVar18;
      auVar9[10] = uVar19;
      auVar9[0xb] = uVar20;
      auVar9[0xc] = uVar21;
      auVar9[0xd] = uVar22;
      auVar9[0xe] = uVar23;
      auVar9[0xf] = uVar24;
      auVar26 = NEON_ext(auVar8,auVar9,8,1);
      FUN_102802e10(&uStack_b0,0x112ec2a70,&UNK_10dbe6900);
      uStack_118 = param_1[6];
      uStack_120 = param_1[5];
      uStack_110 = param_1[7];
      uStack_108 = param_1[8];
      bStack_100 = *(byte *)(param_1 + 9);
      uStack_140 = param_1[1];
      lStack_138 = param_1[2];
      uStack_128 = param_1[4];
      uStack_130 = param_1[3];
      param_1[2] = auVar26._0_8_;
      param_1[1] = uVar16;
      param_1[4] = auVar25._0_8_;
      param_1[3] = uVar2;
      param_1[6] = auVar27._0_8_;
      param_1[5] = uVar4;
      param_1[7] = uVar6;
      param_1[8] = uVar14 & 0xcfffffffffffffff | 0x1000000000000000;
      *(undefined1 *)(param_1 + 9) = 2;
      uVar16 = 0x112ec28c0;
      puVar13 = &UNK_10dae0c48;
      puVar12 = &uStack_140;
      goto LAB_1027fbcb4;
    }
  }
  uVar16 = 0x112ec2a70;
  puVar13 = &UNK_10dbe6900;
  puVar12 = &uStack_b0;
LAB_1027fbcb4:
  FUN_102802e10(puVar12,uVar16,puVar13);
  return;
}



/* Entry: 1027fbe34; end: 1027fbff3;  */

/* WARNING: Removing unreachable block (ram,0x0001027fbf60) */

void FUN_1027fbe34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x40);
  bVar1 = *(byte *)(param_1 + 0x48);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 10)
  {
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(ulong *)(param_1 + 0x10);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    func_0x0001027fe4dc(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d08294(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802b00();
  (*pcVar7)(&uStack_80,&UNK_1106778d0,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d08294(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    bStack_90 = *(undefined1 *)(param_1 + 0x48);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uStack_d0 = *(undefined8 *)(param_1 + 8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = 0x2000000000000000;
    *(undefined1 *)(param_1 + 0x48) = 2;
    FUN_102802e10(&uStack_d0,0x112ec28c0,&UNK_10dae0c48);
  }
  else {
    func_0x000100d08294(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1027fbff4; end: 1027fc1b3;  */

/* WARNING: Removing unreachable block (ram,0x0001027fc120) */

void FUN_1027fbff4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 0x40);
  bVar1 = *(byte *)(param_1 + 0x48);
  bVar2 = ((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if ((!bVar2 || uVar5 != 0xff) && ((uint)(uVar4 >> 0x3c) & 0xfffffc03 | (uVar5 & 0x3f) << 2) == 0xb
     ) {
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(ulong *)(param_1 + 0x10);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_d0 = uVar6;
    uStack_98 = uVar4;
    bStack_90 = bVar1;
    func_0x0001027fe4dc(&uStack_d0,auStack_118);
    lVar3 = 0;
    func_0x000100d08294(0,0xf000000000000000);
    uStack_80 = uVar6;
    uStack_78 = uVar8;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000102802b40();
  (*pcVar7)(&uStack_80,&UNK_110677950,lVar3,param_3,param_4);
  uVar4 = uStack_78;
  uVar6 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar2 && uVar5 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    func_0x000100d08294(uStack_80,uStack_78);
    uStack_a8 = *(undefined8 *)(param_1 + 0x30);
    uStack_b0 = *(undefined8 *)(param_1 + 0x28);
    uStack_98 = *(undefined8 *)(param_1 + 0x40);
    uStack_a0 = *(undefined8 *)(param_1 + 0x38);
    bStack_90 = *(undefined1 *)(param_1 + 0x48);
    uStack_c8 = *(undefined8 *)(param_1 + 0x10);
    uStack_d0 = *(undefined8 *)(param_1 + 8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x20);
    uStack_c0 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(ulong *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x40) = 0x3000000000000000;
    *(undefined1 *)(param_1 + 0x48) = 2;
    FUN_102802e10(&uStack_d0,0x112ec28c0,&UNK_10dae0c48);
  }
  else {
    func_0x000100d08294(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1027fc1b4; end: 1027fc4c3;  */

/* WARNING: Removing unreachable block (ram,0x0001027fc408) */

void FUN_1027fc1b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
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
  long lStack_288;
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
  long lStack_188;
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
  
  uStack_a8 = *(undefined8 *)(param_1 + 0x98);
  uStack_b0 = *(undefined8 *)(param_1 + 0x90);
  uStack_118 = *(undefined8 *)(param_1 + 0xa8);
  uStack_120 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x88);
  uStack_c0 = *(undefined8 *)(param_1 + 0x80);
  uStack_128 = *(undefined8 *)(param_1 + 0x98);
  uStack_130 = *(undefined8 *)(param_1 + 0x90);
  uStack_88 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  uStack_f8 = *(undefined8 *)(param_1 + 200);
  uStack_100 = *(undefined8 *)(param_1 + 0xc0);
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_108 = *(undefined8 *)(param_1 + 0xb8);
  uStack_110 = *(undefined8 *)(param_1 + 0xb0);
  uStack_168 = *(undefined8 *)(param_1 + 0x58);
  uStack_170 = *(undefined8 *)(param_1 + 0x50);
  uStack_158 = *(undefined8 *)(param_1 + 0x68);
  uStack_160 = *(undefined8 *)(param_1 + 0x60);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_c8 = *(undefined8 *)(param_1 + 0x78);
  uStack_d0 = *(undefined8 *)(param_1 + 0x70);
  uStack_138 = *(undefined8 *)(param_1 + 0x88);
  uStack_140 = *(undefined8 *)(param_1 + 0x80);
  uStack_148 = *(undefined8 *)(param_1 + 0x78);
  uStack_150 = *(undefined8 *)(param_1 + 0x70);
  uStack_78 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  lStack_188 = 1;
  uStack_180 = 0;
  uStack_178 = 0;
  puVar2 = &uStack_170;
  func_0x0001027fe598();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_1d8 = uStack_a8;
    uStack_1e0 = uStack_b0;
    uStack_1c8 = uStack_98;
    uStack_1d0 = uStack_a0;
    uStack_1b8 = uStack_88;
    uStack_1c0 = uStack_90;
    uStack_1a8 = uStack_78;
    uStack_1b0 = uStack_80;
    uStack_218 = uStack_e8;
    uStack_220 = uStack_f0;
    uStack_208 = uStack_d8;
    uStack_210 = uStack_e0;
    uStack_1f8 = uStack_c8;
    uStack_200 = uStack_d0;
    uStack_1e8 = uStack_b8;
    uStack_1f0 = uStack_c0;
    puVar2 = &uStack_f0;
    func_0x0001027fe5ac();
    if ((int)puVar2 == 0) {
      puVar2 = &uStack_220;
      func_0x000100d081cc();
      uVar9 = puVar2[1];
      uVar8 = *puVar2;
      lVar6 = puVar2[3];
      uVar4 = puVar2[2];
      uVar7 = puVar2[5];
      uVar5 = puVar2[4];
      uStack_278 = uStack_148;
      uStack_280 = uStack_150;
      uStack_268 = uStack_138;
      uStack_270 = uStack_140;
      uStack_298 = uStack_168;
      uStack_2a0 = uStack_170;
      lStack_288 = uStack_158;
      uStack_290 = uStack_160;
      uStack_238 = uStack_108;
      uStack_240 = uStack_110;
      uStack_228 = uStack_f8;
      uStack_230 = uStack_100;
      uStack_258 = uStack_128;
      uStack_260 = uStack_130;
      uStack_248 = uStack_118;
      uStack_250 = uStack_120;
      FUN_1027fe5b8(&uStack_2a0,&uStack_320);
      puVar2 = (undefined8 *)0x0;
      func_0x000102802d4c(0,0,0,1,0,0);
      uStack_1a0 = uVar8;
      uStack_198 = uVar9;
      uStack_190 = uVar4;
      lStack_188 = lVar6;
      uStack_180 = uVar5;
      uStack_178 = uVar7;
    }
  }
  pcVar3 = *(code **)(param_4 + 0x198);
  func_0x000102802b80();
  (*pcVar3)(&uStack_1a0,&UNK_1106793e0,puVar2,param_3,param_4);
  uVar9 = uStack_178;
  uVar8 = uStack_180;
  lVar6 = lStack_188;
  uVar7 = uStack_190;
  uVar5 = uStack_198;
  uVar4 = uStack_1a0;
  if (unaff_x21 == 0) {
    if (lStack_188 != 1) {
      if (iVar1 == 1) {
        func_0x00010006c00c(uStack_1a0,uStack_198);
        func_0x000101597350(uVar7,lVar6,uVar8,uVar9);
      }
      else {
        pcVar3 = *(code **)(param_4 + 8);
        func_0x00010006c00c(uStack_1a0,uStack_198);
        func_0x000101597350(uVar7,lVar6,uVar8,uVar9);
        (*pcVar3)(param_3,param_4);
      }
      func_0x000102802d4c(uStack_1a0,uStack_198,uStack_190,lStack_188,uStack_180,uStack_178);
      uStack_320 = uVar4;
      uStack_318 = uVar5;
      uStack_310 = uVar7;
      lStack_308 = lVar6;
      uStack_300 = uVar8;
      uStack_2f8 = uVar9;
      FUN_1027fe5ec(&uStack_320);
      uStack_258 = uStack_2d8;
      uStack_260 = uStack_2e0;
      uStack_248 = uStack_2c8;
      uStack_250 = uStack_2d0;
      uStack_238 = uStack_2b8;
      uStack_240 = uStack_2c0;
      uStack_228 = uStack_2a8;
      uStack_230 = uStack_2b0;
      uStack_298 = uStack_318;
      uStack_2a0 = uStack_320;
      lStack_288 = lStack_308;
      uStack_290 = uStack_310;
      uStack_278 = uStack_2f8;
      uStack_280 = uStack_300;
      uStack_268 = uStack_2e8;
      uStack_270 = uStack_2f0;
      func_0x0001027fe5fc(&uStack_2a0);
      uStack_1d8 = *(undefined8 *)(param_1 + 0x98);
      uStack_1e0 = *(undefined8 *)(param_1 + 0x90);
      uStack_1c8 = *(undefined8 *)(param_1 + 0xa8);
      uStack_1d0 = *(undefined8 *)(param_1 + 0xa0);
      uStack_1b8 = *(undefined8 *)(param_1 + 0xb8);
      uStack_1c0 = *(undefined8 *)(param_1 + 0xb0);
      uStack_1a8 = *(undefined8 *)(param_1 + 200);
      uStack_1b0 = *(undefined8 *)(param_1 + 0xc0);
      uStack_218 = *(undefined8 *)(param_1 + 0x58);
      uStack_220 = *(undefined8 *)(param_1 + 0x50);
      uStack_208 = *(undefined8 *)(param_1 + 0x68);
      uStack_210 = *(undefined8 *)(param_1 + 0x60);
      uStack_1f8 = *(undefined8 *)(param_1 + 0x78);
      uStack_200 = *(undefined8 *)(param_1 + 0x70);
      uStack_1e8 = *(undefined8 *)(param_1 + 0x88);
      uStack_1f0 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = uStack_278;
      *(undefined8 *)(param_1 + 0x70) = uStack_280;
      *(undefined8 *)(param_1 + 0x88) = uStack_268;
      *(undefined8 *)(param_1 + 0x80) = uStack_270;
      *(undefined8 *)(param_1 + 0x58) = uStack_298;
      *(undefined8 *)(param_1 + 0x50) = uStack_2a0;
      *(long *)(param_1 + 0x68) = lStack_288;
      *(undefined8 *)(param_1 + 0x60) = uStack_290;
      *(undefined8 *)(param_1 + 0xb8) = uStack_238;
      *(undefined8 *)(param_1 + 0xb0) = uStack_240;
      *(undefined8 *)(param_1 + 200) = uStack_228;
      *(undefined8 *)(param_1 + 0xc0) = uStack_230;
      *(undefined8 *)(param_1 + 0x98) = uStack_258;
      *(undefined8 *)(param_1 + 0x90) = uStack_260;
      *(undefined8 *)(param_1 + 0xa8) = uStack_248;
      *(undefined8 *)(param_1 + 0xa0) = uStack_250;
      FUN_102802e10(&uStack_220,0x112ec28c8,&UNK_10dae0c50);
      return;
    }
    lVar6 = 1;
  }
  func_0x000102802d4c(uStack_1a0,uStack_198,uStack_190,lVar6,uStack_180,uStack_178);
  return;
}



/* Entry: 1027fc4c4; end: 1027fc70f;  */

/* WARNING: Removing unreachable block (ram,0x0001027fc640) */

void FUN_1027fc4c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uStack_2f0;
  ulong uStack_2e8;
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
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
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
  ulong uStack_168;
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
  
  uStack_118 = *(undefined8 *)(param_1 + 0x98);
  uStack_120 = *(undefined8 *)(param_1 + 0x90);
  uStack_108 = *(undefined8 *)(param_1 + 0xa8);
  uStack_110 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_100 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e8 = *(undefined8 *)(param_1 + 200);
  uStack_f0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_158 = *(undefined8 *)(param_1 + 0x58);
  uStack_160 = *(undefined8 *)(param_1 + 0x50);
  uStack_148 = *(undefined8 *)(param_1 + 0x68);
  uStack_150 = *(undefined8 *)(param_1 + 0x60);
  uStack_168 = 0xf000000000000000;
  uStack_170 = 0;
  uStack_138 = *(undefined8 *)(param_1 + 0x78);
  uStack_140 = *(undefined8 *)(param_1 + 0x70);
  uStack_128 = *(undefined8 *)(param_1 + 0x88);
  uStack_130 = *(undefined8 *)(param_1 + 0x80);
  puVar4 = &uStack_160;
  uStack_e0 = uStack_160;
  uStack_d8 = uStack_158;
  uStack_d0 = uStack_150;
  uStack_c8 = uStack_148;
  uStack_c0 = uStack_140;
  uStack_b8 = uStack_138;
  uStack_b0 = uStack_130;
  uStack_a8 = uStack_128;
  uStack_a0 = uStack_120;
  uStack_98 = uStack_118;
  uStack_90 = uStack_110;
  uStack_88 = uStack_108;
  uStack_80 = uStack_100;
  uStack_78 = uStack_f8;
  uStack_70 = uStack_f0;
  uStack_68 = uStack_e8;
  func_0x0001027fe598();
  iVar3 = (int)puVar4;
  if (iVar3 != 1) {
    uStack_1a8 = uStack_98;
    uStack_1b0 = uStack_a0;
    uStack_198 = uStack_88;
    uStack_1a0 = uStack_90;
    uStack_188 = uStack_78;
    uStack_190 = uStack_80;
    uStack_178 = uStack_68;
    uStack_180 = uStack_70;
    uStack_1e8 = uStack_d8;
    uStack_1f0 = uStack_e0;
    uStack_1d8 = uStack_c8;
    uStack_1e0 = uStack_d0;
    uStack_1c8 = uStack_b8;
    uStack_1d0 = uStack_c0;
    uStack_1b8 = uStack_a8;
    uStack_1c0 = uStack_b0;
    puVar4 = &uStack_e0;
    func_0x0001027fe5ac();
    if ((int)puVar4 == 1) {
      puVar4 = &uStack_1f0;
      func_0x000100d081cc();
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      uStack_228 = uStack_118;
      uStack_230 = uStack_120;
      uStack_218 = uStack_108;
      uStack_220 = uStack_110;
      uStack_208 = uStack_f8;
      uStack_210 = uStack_100;
      uStack_1f8 = uStack_e8;
      uStack_200 = uStack_f0;
      uStack_268 = uStack_158;
      uStack_270 = uStack_160;
      uStack_258 = uStack_148;
      uStack_260 = uStack_150;
      uStack_248 = uStack_138;
      uStack_250 = uStack_140;
      uStack_238 = uStack_128;
      uStack_240 = uStack_130;
      FUN_1027fe5b8(&uStack_270,&uStack_2f0);
      puVar4 = (undefined8 *)0x0;
      func_0x000100d08294(0,0xf000000000000000);
      uStack_170 = uVar1;
      uStack_168 = uVar2;
    }
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x000102802bc0();
  (*pcVar5)(&uStack_170,&UNK_110679460,puVar4,param_3,param_4);
  uVar2 = uStack_168;
  uVar1 = uStack_170;
  if ((unaff_x21 == 0) && (uStack_168 >> 0x3c < 0xf)) {
    if (iVar3 == 1) {
      func_0x00010006c00c();
    }
    else {
      pcVar5 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar5)(param_3,param_4);
    }
    func_0x000100d08294(uStack_170,uStack_168);
    uStack_2f0 = uVar1;
    uStack_2e8 = uVar2;
    func_0x0001027fe600(&uStack_2f0);
    uStack_228 = uStack_2a8;
    uStack_230 = uStack_2b0;
    uStack_218 = uStack_298;
    uStack_220 = uStack_2a0;
    uStack_208 = uStack_288;
    uStack_210 = uStack_290;
    uStack_1f8 = uStack_278;
    uStack_200 = uStack_280;
    uStack_268 = uStack_2e8;
    uStack_270 = uStack_2f0;
    uStack_258 = uStack_2d8;
    uStack_260 = uStack_2e0;
    uStack_248 = uStack_2c8;
    uStack_250 = uStack_2d0;
    uStack_238 = uStack_2b8;
    uStack_240 = uStack_2c0;
    func_0x0001027fe5fc(&uStack_270);
    uStack_1a8 = *(undefined8 *)(param_1 + 0x98);
    uStack_1b0 = *(undefined8 *)(param_1 + 0x90);
    uStack_198 = *(undefined8 *)(param_1 + 0xa8);
    uStack_1a0 = *(undefined8 *)(param_1 + 0xa0);
    uStack_188 = *(undefined8 *)(param_1 + 0xb8);
    uStack_190 = *(undefined8 *)(param_1 + 0xb0);
    uStack_178 = *(undefined8 *)(param_1 + 200);
    uStack_180 = *(undefined8 *)(param_1 + 0xc0);
    uStack_1e8 = *(undefined8 *)(param_1 + 0x58);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x50);
    uStack_1d8 = *(undefined8 *)(param_1 + 0x68);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x60);
    uStack_1c8 = *(undefined8 *)(param_1 + 0x78);
    uStack_1d0 = *(undefined8 *)(param_1 + 0x70);
    uStack_1b8 = *(undefined8 *)(param_1 + 0x88);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = uStack_248;
    *(undefined8 *)(param_1 + 0x70) = uStack_250;
    *(undefined8 *)(param_1 + 0x88) = uStack_238;
    *(undefined8 *)(param_1 + 0x80) = uStack_240;
    *(ulong *)(param_1 + 0x58) = uStack_268;
    *(undefined8 *)(param_1 + 0x50) = uStack_270;
    *(undefined8 *)(param_1 + 0x68) = uStack_258;
    *(undefined8 *)(param_1 + 0x60) = uStack_260;
    *(undefined8 *)(param_1 + 0xb8) = uStack_208;
    *(undefined8 *)(param_1 + 0xb0) = uStack_210;
    *(undefined8 *)(param_1 + 200) = uStack_1f8;
    *(undefined8 *)(param_1 + 0xc0) = uStack_200;
    *(undefined8 *)(param_1 + 0x98) = uStack_228;
    *(undefined8 *)(param_1 + 0x90) = uStack_230;
    *(undefined8 *)(param_1 + 0xa8) = uStack_218;
    *(undefined8 *)(param_1 + 0xa0) = uStack_220;
    FUN_102802e10(&uStack_1f0,0x112ec28c8,&UNK_10dae0c50);
  }
  else {
    func_0x000100d08294(uStack_170,uStack_168);
  }
  return;
}



/* Entry: 1027fc710; end: 1027fc947;  */

/* WARNING: Removing unreachable block (ram,0x0001027fc89c) */

void FUN_1027fc710(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  long unaff_x21;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_138 [72];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_80 = 1;
  uVar9 = *(undefined8 *)(param_1 + 8);
  bVar5 = *(byte *)(param_1 + 0x48);
  bVar6 = ((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar8 = (uint)bVar5;
  lVar7 = param_1;
  if ((!bVar6 || uVar8 != 0xff) &&
      ((uint)(*(ulong *)(param_1 + 0x40) >> 0x3c) & 0xfffffc03 | (uVar8 & 0x3f) << 2) == 0xc) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    uStack_c8 = *(undefined8 *)(param_1 + 0x30);
    uStack_d0 = *(undefined8 *)(param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x40);
    uStack_c0 = *(undefined8 *)(param_1 + 0x38);
    uStack_f0 = uVar9;
    uStack_e8 = uVar1;
    uStack_e0 = uVar3;
    uStack_d8 = uVar2;
    bStack_b0 = bVar5;
    func_0x0001027fe4dc(&uStack_f0,auStack_138);
    lVar7 = 0;
    func_0x000102802d9c(0,0,0,0,1);
    uStack_a0 = uVar9;
    uStack_98 = uVar1;
    uStack_90 = uVar3;
    uStack_88 = uVar2;
    lStack_80 = lVar4;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  func_0x000102802cc0();
  (*pcVar10)(&uStack_a0,&UNK_1106779d0,lVar7,param_3,param_4);
  lVar7 = lStack_80;
  uVar3 = uStack_88;
  uVar2 = uStack_90;
  uVar1 = uStack_98;
  uVar9 = uStack_a0;
  if (unaff_x21 == 0) {
    if (lStack_80 == 1) {
      func_0x000102802d9c(uStack_a0,uStack_98,uStack_90,uStack_88,1);
    }
    else {
      if (bVar6 && uVar8 == 0xff) {
        func_0x00010006c00c();
        func_0x0001027fe4b0(uVar2,uVar3,lVar7);
      }
      else {
        pcVar10 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x0001027fe4b0(uVar2,uVar3,lVar7);
        (*pcVar10)(param_3,param_4);
      }
      func_0x000102802d9c(uStack_a0,uStack_98,uStack_90,uStack_88,lStack_80);
      uStack_c8 = *(undefined8 *)(param_1 + 0x30);
      uStack_d0 = *(undefined8 *)(param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x40);
      uStack_c0 = *(undefined8 *)(param_1 + 0x38);
      bStack_b0 = *(undefined1 *)(param_1 + 0x48);
      uStack_e8 = *(undefined8 *)(param_1 + 0x10);
      uStack_f0 = *(undefined8 *)(param_1 + 8);
      uStack_d8 = *(undefined8 *)(param_1 + 0x20);
      uStack_e0 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 8) = uVar9;
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      *(long *)(param_1 + 0x28) = lVar7;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x48) = 3;
      FUN_102802e10(&uStack_f0,0x112ec28c0,&UNK_10dae0c48);
    }
  }
  else {
    func_0x000102802d9c(uStack_a0,uStack_98,uStack_90,uStack_88,lStack_80);
  }
  return;
}



/* Entry: 1027fc948; end: 1027fcd07;  */

/* WARNING: Removing unreachable block (ram,0x0001027fcc18) */

void FUN_1027fc948(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
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
  undefined8 uStack_3a8;
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
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_102802de4(&uStack_1d0);
  uStack_208 = uStack_188;
  uStack_210 = uStack_190;
  uStack_1f8 = uStack_178;
  uStack_200 = uStack_180;
  uStack_1e8 = uStack_168;
  uStack_1f0 = uStack_170;
  uStack_1d8 = uStack_158;
  uStack_1e0 = uStack_160;
  uStack_248 = uStack_1c8;
  uStack_250 = uStack_1d0;
  uStack_238 = uStack_1b8;
  uStack_240 = uStack_1c0;
  uStack_228 = uStack_1a8;
  uStack_230 = uStack_1b0;
  uStack_218 = uStack_198;
  uStack_220 = uStack_1a0;
  uStack_148 = *(undefined8 *)(param_1 + 0x58);
  uStack_150 = *(undefined8 *)(param_1 + 0x50);
  uStack_b8 = *(undefined8 *)(param_1 + 0x68);
  uStack_c0 = *(undefined8 *)(param_1 + 0x60);
  uStack_128 = *(undefined8 *)(param_1 + 0x78);
  uStack_130 = *(undefined8 *)(param_1 + 0x70);
  uStack_118 = *(undefined8 *)(param_1 + 0x88);
  uStack_120 = *(undefined8 *)(param_1 + 0x80);
  uStack_138 = *(undefined8 *)(param_1 + 0x68);
  uStack_140 = *(undefined8 *)(param_1 + 0x60);
  uStack_a8 = *(undefined8 *)(param_1 + 0x78);
  uStack_b0 = *(undefined8 *)(param_1 + 0x70);
  uStack_c8 = *(undefined8 *)(param_1 + 0x58);
  uStack_d0 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = *(undefined8 *)(param_1 + 0xa8);
  uStack_80 = *(undefined8 *)(param_1 + 0xa0);
  uStack_e8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_f0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_68 = *(undefined8 *)(param_1 + 0xb8);
  uStack_70 = *(undefined8 *)(param_1 + 0xb0);
  uStack_d8 = *(undefined8 *)(param_1 + 200);
  uStack_e0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_98 = *(undefined8 *)(param_1 + 0x88);
  uStack_a0 = *(undefined8 *)(param_1 + 0x80);
  uStack_108 = *(undefined8 *)(param_1 + 0x98);
  uStack_110 = *(undefined8 *)(param_1 + 0x90);
  uStack_88 = *(undefined8 *)(param_1 + 0x98);
  uStack_90 = *(undefined8 *)(param_1 + 0x90);
  uStack_f8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_100 = *(undefined8 *)(param_1 + 0xa0);
  uStack_58 = *(undefined8 *)(param_1 + 200);
  uStack_60 = *(undefined8 *)(param_1 + 0xc0);
  puVar3 = &uStack_150;
  func_0x0001027fe598();
  iVar1 = (int)puVar3;
  if (iVar1 != 1) {
    uStack_288 = uStack_88;
    uStack_290 = uStack_90;
    uStack_278 = uStack_78;
    uStack_280 = uStack_80;
    uStack_268 = uStack_68;
    uStack_270 = uStack_70;
    uStack_258 = uStack_58;
    uStack_260 = uStack_60;
    uStack_2c8 = uStack_c8;
    uStack_2d0 = uStack_d0;
    uStack_2b8 = uStack_b8;
    uStack_2c0 = uStack_c0;
    uStack_2a8 = uStack_a8;
    uStack_2b0 = uStack_b0;
    uStack_298 = uStack_98;
    uStack_2a0 = uStack_a0;
    puVar3 = &uStack_d0;
    func_0x0001027fe5ac();
    if ((int)puVar3 == 2) {
      puVar3 = &uStack_2d0;
      func_0x000100d081cc();
      uStack_408 = uStack_208;
      uStack_410 = uStack_210;
      uStack_3f8 = uStack_1f8;
      uStack_400 = uStack_200;
      uStack_3e8 = uStack_1e8;
      uStack_3f0 = uStack_1f0;
      uStack_3d8 = uStack_1d8;
      uStack_3e0 = uStack_1e0;
      uStack_448 = uStack_248;
      uStack_450 = uStack_250;
      uStack_438 = uStack_238;
      uStack_440 = uStack_240;
      uStack_428 = uStack_228;
      uStack_430 = uStack_230;
      uStack_418 = uStack_218;
      uStack_420 = uStack_220;
      uStack_3a8 = uStack_128;
      uStack_3b0 = uStack_130;
      uStack_398 = uStack_118;
      uStack_3a0 = uStack_120;
      uStack_3c8 = uStack_148;
      uStack_3d0 = uStack_150;
      uStack_3b8 = uStack_138;
      uStack_3c0 = uStack_140;
      uStack_368 = uStack_e8;
      uStack_370 = uStack_f0;
      uStack_358 = uStack_d8;
      uStack_360 = uStack_e0;
      uStack_388 = uStack_108;
      uStack_390 = uStack_110;
      uStack_378 = uStack_f8;
      uStack_380 = uStack_100;
      FUN_1027fe5b8(&uStack_3d0,&uStack_350);
      FUN_102802e10(&uStack_450,0x112ec2a78,&UNK_10dae11c0);
      uStack_328 = puVar3[5];
      uStack_330 = puVar3[4];
      uStack_318 = puVar3[7];
      uStack_320 = puVar3[6];
      uStack_348 = puVar3[1];
      uStack_350 = *puVar3;
      uStack_338 = puVar3[3];
      uStack_340 = puVar3[2];
      uStack_2e8 = puVar3[0xd];
      uStack_2f0 = puVar3[0xc];
      uStack_2d8 = puVar3[0xf];
      uStack_2e0 = puVar3[0xe];
      uStack_308 = puVar3[9];
      uStack_310 = puVar3[8];
      uStack_2f8 = puVar3[0xb];
      uStack_300 = puVar3[10];
      puVar3 = &uStack_350;
      func_0x000102802e74(puVar3);
      uStack_208 = uStack_308;
      uStack_210 = uStack_310;
      uStack_1f8 = uStack_2f8;
      uStack_200 = uStack_300;
      uStack_1e8 = uStack_2e8;
      uStack_1f0 = uStack_2f0;
      uStack_1d8 = uStack_2d8;
      uStack_1e0 = uStack_2e0;
      uStack_248 = uStack_348;
      uStack_250 = uStack_350;
      uStack_238 = uStack_338;
      uStack_240 = uStack_340;
      uStack_228 = uStack_328;
      uStack_230 = uStack_330;
      uStack_218 = uStack_318;
      uStack_220 = uStack_320;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000102802c00();
  (*pcVar6)(&uStack_250,&UNK_1106794e0,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_308 = uStack_208;
    uStack_310 = uStack_210;
    uStack_2f8 = uStack_1f8;
    uStack_300 = uStack_200;
    uStack_2e8 = uStack_1e8;
    uStack_2f0 = uStack_1f0;
    uStack_2d8 = uStack_1d8;
    uStack_2e0 = uStack_1e0;
    uStack_348 = uStack_248;
    uStack_350 = uStack_250;
    uStack_338 = uStack_238;
    uStack_340 = uStack_240;
    uStack_328 = uStack_228;
    uStack_330 = uStack_230;
    uStack_318 = uStack_218;
    uStack_320 = uStack_220;
    uStack_2a8 = uStack_228;
    uStack_2b0 = uStack_230;
    uStack_298 = uStack_218;
    uStack_2a0 = uStack_220;
    uStack_2c8 = uStack_248;
    uStack_2d0 = uStack_250;
    uStack_2b8 = uStack_238;
    uStack_2c0 = uStack_240;
    uStack_268 = uStack_1e8;
    uStack_270 = uStack_1f0;
    uStack_258 = uStack_1d8;
    uStack_260 = uStack_1e0;
    uStack_288 = uStack_208;
    uStack_290 = uStack_210;
    uStack_278 = uStack_1f8;
    uStack_280 = uStack_200;
    iVar2 = (int)&uStack_350;
    func_0x000102802e50();
    if (iVar2 != 1) {
      if (iVar1 == 1) {
        uStack_388 = uStack_308;
        uStack_390 = uStack_310;
        uStack_378 = uStack_2f8;
        uStack_380 = uStack_300;
        uStack_368 = uStack_2e8;
        uStack_370 = uStack_2f0;
        uStack_358 = uStack_2d8;
        uStack_360 = uStack_2e0;
        uStack_3c8 = uStack_348;
        uStack_3d0 = uStack_350;
        uStack_3b8 = uStack_338;
        uStack_3c0 = uStack_340;
        uStack_3a8 = uStack_328;
        uStack_3b0 = uStack_330;
        uStack_398 = uStack_318;
        uStack_3a0 = uStack_320;
        FUN_1027fe628(&uStack_3d0,&uStack_450);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        uStack_388 = uStack_308;
        uStack_390 = uStack_310;
        uStack_378 = uStack_2f8;
        uStack_380 = uStack_300;
        uStack_368 = uStack_2e8;
        uStack_370 = uStack_2f0;
        uStack_358 = uStack_2d8;
        uStack_360 = uStack_2e0;
        uStack_3c8 = uStack_348;
        uStack_3d0 = uStack_350;
        uStack_3b8 = uStack_338;
        uStack_3c0 = uStack_340;
        uStack_3a8 = uStack_328;
        uStack_3b0 = uStack_330;
        uStack_398 = uStack_318;
        uStack_3a0 = uStack_320;
        FUN_1027fe628(&uStack_3d0,&uStack_450);
        (*pcVar6)(param_3,param_4);
      }
      FUN_102802e10(&uStack_250,0x112ec2a78,&UNK_10dae11c0);
      uStack_488 = uStack_288;
      uStack_490 = uStack_290;
      uStack_478 = uStack_278;
      uStack_480 = uStack_280;
      uStack_468 = uStack_268;
      uStack_470 = uStack_270;
      uStack_458 = uStack_258;
      uStack_460 = uStack_260;
      uStack_4c8 = uStack_2c8;
      uStack_4d0 = uStack_2d0;
      uStack_4b8 = uStack_2b8;
      uStack_4c0 = uStack_2c0;
      uStack_4a8 = uStack_2a8;
      uStack_4b0 = uStack_2b0;
      uStack_498 = uStack_298;
      uStack_4a0 = uStack_2a0;
      func_0x0001027fe614(&uStack_4d0);
      uStack_408 = uStack_488;
      uStack_410 = uStack_490;
      uStack_3f8 = uStack_478;
      uStack_400 = uStack_480;
      uStack_3e8 = uStack_468;
      uStack_3f0 = uStack_470;
      uStack_3d8 = uStack_458;
      uStack_3e0 = uStack_460;
      uStack_448 = uStack_4c8;
      uStack_450 = uStack_4d0;
      uStack_438 = uStack_4b8;
      uStack_440 = uStack_4c0;
      uStack_428 = uStack_4a8;
      uStack_430 = uStack_4b0;
      uStack_418 = uStack_498;
      uStack_420 = uStack_4a0;
      func_0x0001027fe5fc(&uStack_450);
      uStack_388 = *(undefined8 *)(param_1 + 0x98);
      uStack_390 = *(undefined8 *)(param_1 + 0x90);
      uStack_378 = *(undefined8 *)(param_1 + 0xa8);
      uStack_380 = *(undefined8 *)(param_1 + 0xa0);
      uStack_368 = *(undefined8 *)(param_1 + 0xb8);
      uStack_370 = *(undefined8 *)(param_1 + 0xb0);
      uStack_358 = *(undefined8 *)(param_1 + 200);
      uStack_360 = *(undefined8 *)(param_1 + 0xc0);
      uStack_3c8 = *(undefined8 *)(param_1 + 0x58);
      uStack_3d0 = *(undefined8 *)(param_1 + 0x50);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x68);
      uStack_3c0 = *(undefined8 *)(param_1 + 0x60);
      uStack_3a8 = *(undefined8 *)(param_1 + 0x78);
      uStack_3b0 = *(undefined8 *)(param_1 + 0x70);
      uStack_398 = *(undefined8 *)(param_1 + 0x88);
      uStack_3a0 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = uStack_428;
      *(undefined8 *)(param_1 + 0x70) = uStack_430;
      *(undefined8 *)(param_1 + 0x88) = uStack_418;
      *(undefined8 *)(param_1 + 0x80) = uStack_420;
      *(undefined8 *)(param_1 + 0x58) = uStack_448;
      *(undefined8 *)(param_1 + 0x50) = uStack_450;
      *(undefined8 *)(param_1 + 0x68) = uStack_438;
      *(undefined8 *)(param_1 + 0x60) = uStack_440;
      *(undefined8 *)(param_1 + 0xb8) = uStack_3e8;
      *(undefined8 *)(param_1 + 0xb0) = uStack_3f0;
      *(undefined8 *)(param_1 + 200) = uStack_3d8;
      *(undefined8 *)(param_1 + 0xc0) = uStack_3e0;
      *(undefined8 *)(param_1 + 0x98) = uStack_408;
      *(undefined8 *)(param_1 + 0x90) = uStack_410;
      *(undefined8 *)(param_1 + 0xa8) = uStack_3f8;
      *(undefined8 *)(param_1 + 0xa0) = uStack_400;
      uVar4 = 0x112ec28c8;
      puVar5 = &UNK_10dae0c50;
      puVar3 = &uStack_3d0;
      goto LAB_1027fcb74;
    }
  }
  uVar4 = 0x112ec2a78;
  puVar5 = &UNK_10dae11c0;
  puVar3 = &uStack_250;
LAB_1027fcb74:
  FUN_102802e10(puVar3,uVar4,puVar5);
  return;
}



/* Entry: 1027fcd08; end: 1027fd08b;  */

void FUN_1027fcd08(undefined8 param_1,code *param_2,code *param_3,undefined8 param_4,code *param_5,
                  code *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  code *pcVar6;
  code *pcVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  code *unaff_x20;
  code *unaff_x21;
  code *pcVar11;
  code *pcVar12;
  code *unaff_x25;
  code *unaff_x26;
  undefined8 unaff_x30;
  undefined8 uVar13;
  undefined8 in_register_00005008;
  undefined8 uVar14;
  code *pcVar15;
  undefined8 in_register_00005028;
  undefined8 uVar16;
  undefined1 auStack_1a0 [16];
  code *pcStack_190;
  undefined8 uStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 in_stack_fffffffffffffed0;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  puVar1 = &uStack_150;
  pcVar7 = (code *)&uStack_150;
  pcVar11 = *(code **)unaff_x20;
  pcVar6 = param_3;
  pcVar12 = param_5;
  if (*(long *)(pcVar11 + 0x10) != 0) {
    unaff_x26 = *(code **)(param_5 + 0x118);
    param_6 = param_3;
    func_0x0001027ff098();
    pcVar12 = (code *)&UNK_110551188;
    unaff_x30 = 0x1027fcd70;
    pcVar6 = pcVar11;
    (*unaff_x26)(pcVar11,1,&UNK_110551188,param_6,param_4,param_5);
    unaff_x25 = unaff_x21;
    if (unaff_x21 != (code *)0x0) {
      return;
    }
  }
  uVar9 = *(ulong *)(unaff_x20 + 0x40);
  uVar8 = (uint)(byte)unaff_x20[0x48];
  bVar5 = ((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  if ((!bVar5) || (bVar5 = unaff_x20[0x48] == (code)0xff, !bVar5)) {
LAB_1027fcdcc:
    uVar8 = (uint)(uVar9 >> 0x3c) & 3 | (uVar8 & 0x3f) << 2;
    uVar9 = 0;
    uVar10 = 0;
code_r0x0001027fcde0:
    puVar2 = &uStack_150;
    puVar3 = &uStack_150;
    puVar4 = &uStack_150;
    uVar13 = param_1;
    uVar14 = in_register_00005008;
    pcVar15 = param_2;
    uVar16 = in_register_00005028;
    switch(uVar8) {
    case 0:
      goto code_r0x0001027fcdf0;
    case 1:
    case 0xef:
    case 0xfe:
    case 199:
    case 0xf7:
      FUN_1027fd130();
      goto joined_r0x0001027fd050;
    case 2:
      FUN_1027fd1d8();
    case 0xa2:
      goto joined_r0x0001027fd050;
    case 3:
    case 0x1c:
      FUN_1027fd280();
      goto joined_r0x0001027fd050;
    case 4:
    case 0x90:
    case 0xd4:
code_r0x0001027fd00c:
      FUN_1027fd328();
      goto joined_r0x0001027fd050;
    case 5:
    case 0x1f:
    case 0x78:
    case 0x80:
    case 0xa0:
    case 0xb4:
    case 0xbc:
    case 0xc4:
    case 0xd8:
    case 0xec:
    case 0xf4:
    case 0xfc:
      FUN_1027fd3dc();
      goto joined_r0x0001027fd050;
    case 6:
    case 0x21:
      FUN_1027fd484();
      goto joined_r0x0001027fd050;
    case 7:
    case 0xc6:
      FUN_1027fd52c();
code_r0x0001027fd06c:
      goto joined_r0x0001027fd050;
    case 8:
    case 0xb7:
    case 0xbf:
code_r0x0001027fcf9c:
      FUN_1027fd5d4();
code_r0x0001027fcfa8:
      if (unaff_x21 != (code *)0x0) {
        return;
      }
code_r0x0001027fcfac:
      break;
    case 9:
    case 0x20:
      FUN_1027fd67c();
      goto joined_r0x0001027fd050;
    case 10:
      FUN_1027fd738();
      goto joined_r0x0001027fd050;
    case 0xb:
      FUN_1027fd7e0();
      goto joined_r0x0001027fd050;
    default:
      break;
    case 0x1b:
      goto code_r0x0001027fd00c;
    case 0x1d:
      goto code_r0x0001027fcfa8;
    case 0x1e:
      goto LAB_1027fcdcc;
    case 0x22:
      puVar1 = (undefined8 *)auStack_1a0;
      pcStack_190 = pcVar11;
    case 0x7c:
    case 0xa4:
    case 0xdc:
      *(code **)((long)puVar1 + 0x20) = unaff_x20;
      *(undefined8 *)((long)puVar1 + 0x28) = param_4;
      *(code **)((long)puVar1 + 0x30) = param_3;
      *(code **)((long)puVar1 + 0x38) = param_5;
      *(undefined1 **)((long)puVar1 + 0x40) = &stack0xfffffffffffffff0;
      *(undefined8 *)((long)puVar1 + 0x48) = unaff_x30;
      puVar2 = puVar1;
code_r0x0001027fd0a0:
      in_register_00005008 = *(undefined8 *)(pcVar6 + 0x10);
      param_1 = *(undefined8 *)(pcVar6 + 8);
      uVar10 = (uint)(*(ulong *)(pcVar6 + 0x40) >> 0x20);
      uVar8 = (uint)(byte)pcVar6[0x48];
      puVar3 = puVar2;
      param_5 = param_6;
      if ((((*(ulong *)(pcVar6 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
         (pcVar6[0x48] != (code)0xff)) {
LAB_1027fd0d4:
        bVar5 = (uVar10 >> 0x1c & 0xfffffc03) == 0 && (uVar8 & 0x3f) == 0;
        puVar4 = puVar3;
code_r0x0001027fd0e0:
        if (bVar5) {
          puVar4[1] = in_register_00005008;
          *puVar4 = param_1;
          pcVar11 = *(code **)(param_5 + 0x88);
          func_0x000102802880();
code_r0x0001027fd104:
          (*pcVar11)();
code_r0x0001027fd120:
          return;
        }
      }
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1027fd130);
      (*pcVar12)();
    case 0x23:
      goto code_r0x0001027fcea0;
    case 0x24:
    case 0xee:
      goto code_r0x0001027fd06c;
    case 0x25:
    case 0x4a:
    case 0x5a:
    case 0x62:
    case 0x6a:
    case 0x72:
    case 0x77:
    case 0x9f:
      goto code_r0x0001027fcdac;
    case 0x26:
      goto code_r0x0001027fce58;
    case 0x36:
      goto code_r0x0001027fce20;
    case 0x37:
    case 0x3f:
    case 0x47:
    case 0x4f:
    case 0x57:
    case 0x5f:
    case 0x67:
    case 0x6f:
    case 0x97:
      goto code_r0x0001027fcf9c;
    case 0x38:
    case 0x40:
    case 0x48:
    case 0x50:
    case 0x58:
    case 0x60:
    case 0x68:
    case 0x70:
    case 0x98:
    case 0xb8:
    case 0xc0:
      goto code_r0x0001027fd120;
    case 0x3a:
    case 0x42:
      goto code_r0x0001027fcdc0;
    case 0x3e:
      goto code_r0x0001027fce38;
    case 0x46:
    case 0x4e:
      goto code_r0x0001027fce50;
    case 0x52:
      goto code_r0x0001027fcdbc;
    case 0x56:
    case 0x5e:
    case 0x66:
    case 0x6e:
      goto code_r0x0001027fce60;
    case 0x76:
      goto code_r0x0001027fce14;
    case 0x79:
    case 0x81:
    case 0x84:
    case 0xa1:
    case 0xb5:
    case 0xbd:
    case 0xc5:
    case 0xd9:
    case 0xed:
    case 0xf5:
    case 0xfd:
      goto code_r0x0001027fcd98;
    case 0x7a:
      goto code_r0x0001027fd080;
    case 0x7b:
    case 0xa3:
    case 0xda:
    case 0xdb:
      goto code_r0x0001027fcf00;
    case 0x7e:
      goto code_r0x0001027fd150;
    case 0x7f:
    case 0x88:
    case 0x9e:
    case 0xcc:
      goto code_r0x0001027fcd94;
    case 0x86:
    case 0xb3:
    case 0xbb:
    case 0xc3:
    case 0xd7:
    case 0xeb:
    case 0xf3:
    case 0xfb:
      goto code_r0x0001027fcda8;
    case 0x8a:
      goto code_r0x0001027fce30;
    case 0x8b:
    case 0x8d:
    case 0xc9:
    case 0xf9:
      goto code_r0x0001027fd160;
    case 0x8c:
    case 200:
    case 0xf8:
      goto LAB_1027fd0d4;
    case 0x8f:
    case 0xd3:
      goto code_r0x0001027fcfac;
    case 0x91:
    case 0xd5:
      goto code_r0x0001027fcda4;
    case 0x96:
      goto code_r0x0001027fcde0;
    case 0x9a:
      goto code_r0x0001027fcdb4;
    case 0xac:
    case 0xae:
    case 0xe4:
    case 0xe6:
      goto code_r0x0001027fcd9c;
    case 0xb2:
    case 0xba:
    case 0xc2:
      goto code_r0x0001027fd164;
    case 0xb6:
      goto code_r0x0001027fd18c;
    case 0xbe:
      goto code_r0x0001027fd144;
    case 0xd2:
      goto code_r0x0001027fce80;
    case 0xd6:
      pcStack_140 = pcVar11;
code_r0x0001027fd144:
      param_5 = param_6;
code_r0x0001027fd150:
      in_register_00005008 = *(undefined8 *)(pcVar6 + 0x10);
      param_1 = *(undefined8 *)(pcVar6 + 8);
      uVar9 = *(ulong *)(pcVar6 + 0x40);
      unaff_x20 = pcVar12;
code_r0x0001027fd160:
      uVar8 = (uint)(byte)pcVar6[0x48];
code_r0x0001027fd164:
      if (((((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (uVar8 == 0xff)) ||
         (((uint)(uVar9 >> 0x3c) & 0xfffffc03 | (uVar8 & 0x3f) << 2) != 1)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1027fd1d8);
        (*pcVar12)();
      }
code_r0x0001027fd18c:
      pcVar12 = *(code **)(param_5 + 0x88);
      uStack_150 = param_1;
      uStack_148 = in_register_00005008;
      func_0x0001028028c0();
      (*pcVar12)(&uStack_150,3,&UNK_110677440,pcVar6,unaff_x20,param_5);
      return;
    case 0xea:
    case 0xf2:
    case 0xfa:
      goto code_r0x0001027fd104;
    case 0xf0:
      goto code_r0x0001027fd0e0;
    case 0xf6:
      goto code_r0x0001027fd0a0;
    case 0xff:
      goto code_r0x0001027fce18;
    }
  }
code_r0x0001027fcd90:
  pcVar11 = unaff_x21;
code_r0x0001027fcd94:
  in_register_00005008 = *(undefined8 *)(unaff_x20 + 0x98);
  param_1 = *(undefined8 *)(unaff_x20 + 0x90);
  in_register_00005028 = *(undefined8 *)(unaff_x20 + 0xa8);
  param_2 = *(code **)(unaff_x20 + 0xa0);
code_r0x0001027fcd98:
  uStack_110 = param_1;
  uStack_108 = in_register_00005008;
  pcStack_100 = param_2;
  uStack_f8 = in_register_00005028;
code_r0x0001027fcd9c:
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 200);
  pcStack_e0 = *(code **)(unaff_x20 + 0xc0);
code_r0x0001027fcda4:
  in_register_00005008 = *(undefined8 *)(unaff_x20 + 0x58);
  param_1 = *(undefined8 *)(unaff_x20 + 0x50);
  in_register_00005028 = *(undefined8 *)(unaff_x20 + 0x68);
  param_2 = *(code **)(unaff_x20 + 0x60);
code_r0x0001027fcda8:
  uStack_150 = param_1;
  uStack_148 = in_register_00005008;
  pcStack_140 = param_2;
  uStack_138 = in_register_00005028;
code_r0x0001027fcdac:
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x78);
  in_stack_fffffffffffffed0 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x80);
code_r0x0001027fcdb4:
  func_0x0001027fe598();
  pcVar6 = pcVar7;
code_r0x0001027fcdbc:
  bVar5 = (int)pcVar6 == 1;
code_r0x0001027fcdc0:
  unaff_x21 = pcVar11;
  if (!bVar5) {
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    uStack_78 = uStack_f8;
    pcStack_80 = pcStack_100;
    pcVar11 = unaff_x21;
code_r0x0001027fce14:
    uVar13 = uStack_f0;
    uVar14 = uStack_e8;
    pcVar15 = pcStack_e0;
    uVar16 = uStack_d8;
code_r0x0001027fce18:
    param_1 = uStack_150;
    in_register_00005008 = uStack_148;
    param_2 = pcStack_140;
    in_register_00005028 = uStack_138;
    uStack_70 = uVar13;
    uStack_68 = uVar14;
    pcStack_60 = pcVar15;
    uStack_58 = uVar16;
code_r0x0001027fce20:
    uStack_a8 = uStack_128;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    pcVar6 = (code *)&uStack_d0;
    uStack_d0 = param_1;
    uStack_c8 = in_register_00005008;
    pcStack_c0 = param_2;
    uStack_b8 = in_register_00005028;
    uStack_b0 = in_stack_fffffffffffffed0;
code_r0x0001027fce30:
    func_0x0001027fe5ac();
    unaff_x25 = pcVar6;
code_r0x0001027fce38:
    unaff_x21 = pcVar11;
    pcVar12 = (code *)&uStack_d0;
    func_0x000100d081cc(pcVar12);
    pcVar6 = unaff_x20;
    if ((int)unaff_x25 == 0) {
code_r0x0001027fce80:
      FUN_1027fd888();
      bVar5 = unaff_x21 != (code *)0x0;
      unaff_x21 = (code *)0x0;
      if (bVar5) {
        return;
      }
    }
    else {
      pcVar6 = pcVar12;
      if ((int)unaff_x25 == 1) {
code_r0x0001027fce50:
        pcVar6 = unaff_x20;
code_r0x0001027fce58:
code_r0x0001027fce60:
        FUN_1027fd96c();
        if (unaff_x21 != (code *)0x0) {
          return;
        }
        unaff_x21 = (code *)0x0;
      }
    }
  }
  pcVar11 = *(code **)(unaff_x20 + 0xd0);
  if (*(long *)(pcVar11 + 0x10) != 0) {
    unaff_x26 = *(code **)(param_5 + 0x118);
    func_0x0001027ff0d8();
    unaff_x25 = unaff_x21;
code_r0x0001027fcea0:
    (*unaff_x26)(pcVar11,0x10,&UNK_110552078,pcVar6,param_4,param_5);
    unaff_x21 = (code *)0x0;
    if (unaff_x25 != (code *)0x0) {
      return;
    }
  }
  FUN_1027fda4c();
  if (unaff_x21 == (code *)0x0) {
    FUN_1027fdafc();
    unaff_x21 = (code *)0x0;
code_r0x0001027fcf00:
    FUN_1027fdb94();
    if (unaff_x21 == (code *)0x0) {
      FUN_1027fdc28();
      func_0x000100076224(param_3,*(undefined8 *)(unaff_x20 + 0xd8),
                          *(undefined8 *)(unaff_x20 + 0xe0),param_4,param_5);
    }
  }
code_r0x0001027fd080:
  return;
code_r0x0001027fcdf0:
  FUN_1027fd08c();
joined_r0x0001027fd050:
  if (unaff_x21 != (code *)0x0) {
    return;
  }
  goto code_r0x0001027fcd90;
}



/* Entry: 1027fd08c; end: 1027fd12f;  */

void FUN_1027fd08c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  if (((((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x48) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x40) >> 0x3c) & 0xfffffc03) == 0 &&
      (*(byte *)(param_1 + 0x48) & 0x3f) == 0)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_102802880();
    (*pcVar1)(&uStack_50,2,&UNK_1106773c0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027fd130);
  (*pcVar1)();
}



/* Entry: 1027fd130; end: 1027fd1d7;  */

void FUN_1027fd130(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  if (((((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x48) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x40) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x48) & 0x3f) << 2) == 1)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001028028c0();
    (*pcVar1)(&uStack_50,3,&UNK_110677440,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027fd1d8);
  (*pcVar1)();
}



/* Entry: 1027fd1d8; end: 1027fd27f;  */

void FUN_1027fd1d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  if (((((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x48) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x40) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x48) & 0x3f) << 2) == 2)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802900();
    (*pcVar1)(&uStack_50,4,&UNK_1106774c0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027fd280);
  (*pcVar1)();
}



/* Entry: 1027fd280; end: 1027fd327;  */

void FUN_1027fd280(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  if (((((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x48) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x40) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x48) & 0x3f) << 2) == 3)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802940();
    (*pcVar1)(&uStack_50,5,&UNK_110677540,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027fd328);
  (*pcVar1)();
}



/* Entry: 1027fd328; end: 1027fd3db;  */

void FUN_1027fd328(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  if (((((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x48) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x40) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x48) & 0x3f) << 2) == 4)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802980();
    (*pcVar1)(&uStack_70,6,&UNK_1106775c0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027fd3dc);
  (*pcVar1)();
}



/* Entry: 1027fd3dc; end: 1027fd483;  */

void FUN_1027fd3dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  if (((((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x48) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x40) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x48) & 0x3f) << 2) == 5)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001028029c0();
    (*pcVar1)(&uStack_50,7,&UNK_110677648,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027fd484);
  (*pcVar1)();
}



/* Entry: 1027fd484; end: 1027fd52b;  */

void FUN_1027fd484(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  if (((((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x48) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x40) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x48) & 0x3f) << 2) == 6)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802a00();
    (*pcVar1)(&uStack_50,8,&UNK_1106776c8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027fd52c);
  (*pcVar1)();
}



/* Entry: 1027fd52c; end: 1027fd5d3;  */

void FUN_1027fd52c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  if (((((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x48) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x40) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x48) & 0x3f) << 2) == 7)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802a40();
    (*pcVar1)(&uStack_50,9,&UNK_110677748,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027fd5d4);
  (*pcVar1)();
}



/* Entry: 1027fd5d4; end: 1027fd67b;  */

void FUN_1027fd5d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  if (((((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x48) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x40) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x48) & 0x3f) << 2) == 8)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802a80();
    (*pcVar1)(&uStack_50,10,&UNK_1106777c8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027fd67c);
  (*pcVar1)();
}



/* Entry: 1027fd67c; end: 1027fd737;  */

void FUN_1027fd67c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_78 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = *(undefined8 *)(param_1 + 8);
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(ulong *)(param_1 + 0x40);
  if (((((uStack_48 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x48) != 0xff)) &&
     (((uint)(uStack_48 >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 0x48) & 0x3f) << 2) == 9)) {
    uStack_48 = uStack_48 & 0xcfffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802ac0();
    (*pcVar1)(&uStack_80,0xb,&UNK_110677848,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027fd738);
  (*pcVar1)();
}



/* Entry: 1027fd738; end: 1027fd7df;  */

void FUN_1027fd738(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  if (((((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x48) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x40) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x48) & 0x3f) << 2) == 10)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802b00();
    (*pcVar1)(&uStack_50,0xc,&UNK_1106778d0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027fd7e0);
  (*pcVar1)();
}



/* Entry: 1027fd7e0; end: 1027fd887;  */

void FUN_1027fd7e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  if (((((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x48) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x40) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x48) & 0x3f) << 2) == 0xb)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802b40();
    (*pcVar1)(&uStack_50,0xd,&UNK_110677950,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027fd888);
  (*pcVar1)();
}



/* Entry: 1027fd888; end: 1027fd96b;  */

void FUN_1027fd888(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_f8 = *(undefined8 *)(param_1 + 0x98);
  uStack_100 = *(undefined8 *)(param_1 + 0x90);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_f0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_e0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c8 = *(undefined8 *)(param_1 + 200);
  uStack_d0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_138 = *(undefined8 *)(param_1 + 0x58);
  uStack_140 = *(undefined8 *)(param_1 + 0x50);
  uStack_128 = *(undefined8 *)(param_1 + 0x68);
  uStack_130 = *(undefined8 *)(param_1 + 0x60);
  uStack_118 = *(undefined8 *)(param_1 + 0x78);
  uStack_120 = *(undefined8 *)(param_1 + 0x70);
  uStack_108 = *(undefined8 *)(param_1 + 0x88);
  uStack_110 = *(undefined8 *)(param_1 + 0x80);
  iVar1 = (int)&uStack_140;
  func_0x0001027fe598();
  if (iVar1 != 1) {
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_48 = uStack_c8;
    uStack_50 = uStack_d0;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    iVar1 = (int)&uStack_c0;
    func_0x0001027fe5ac();
    if (iVar1 == 0) {
      puVar2 = &uStack_c0;
      func_0x000100d081cc();
      uStack_168 = puVar2[1];
      uStack_170 = *puVar2;
      uStack_158 = puVar2[3];
      uStack_160 = puVar2[2];
      uStack_148 = puVar2[5];
      uStack_150 = puVar2[4];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000102802b80();
      (*pcVar3)(&uStack_170,0xe,&UNK_1106793e0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1027fd96c);
  (*pcVar3)();
}



/* Entry: 1027fd96c; end: 1027fda4b;  */

void FUN_1027fd96c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  
  uStack_f8 = *(undefined8 *)(param_1 + 0x98);
  uStack_100 = *(undefined8 *)(param_1 + 0x90);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_f0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_e0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c8 = *(undefined8 *)(param_1 + 200);
  uStack_d0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_138 = *(undefined8 *)(param_1 + 0x58);
  uStack_140 = *(undefined8 *)(param_1 + 0x50);
  uStack_128 = *(undefined8 *)(param_1 + 0x68);
  uStack_130 = *(undefined8 *)(param_1 + 0x60);
  uStack_118 = *(undefined8 *)(param_1 + 0x78);
  uStack_120 = *(undefined8 *)(param_1 + 0x70);
  uStack_108 = *(undefined8 *)(param_1 + 0x88);
  uStack_110 = *(undefined8 *)(param_1 + 0x80);
  iVar1 = (int)&uStack_140;
  func_0x0001027fe598();
  if (iVar1 != 1) {
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_48 = uStack_c8;
    uStack_50 = uStack_d0;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    iVar1 = (int)&uStack_c0;
    func_0x0001027fe5ac();
    if (iVar1 == 1) {
      puVar2 = &uStack_c0;
      func_0x000100d081cc();
      uStack_148 = puVar2[1];
      uStack_150 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000102802bc0();
      (*pcVar3)(&uStack_150,0xf,&UNK_110679460,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1027fda4c);
  (*pcVar3)();
}



/* Entry: 1027fda4c; end: 1027fdafb;  */

void FUN_1027fda4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  if (((((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x48) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x40) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x48) & 0x3f) << 2) == 0xc)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802cc0();
    (*pcVar1)(&uStack_70,0x11,&UNK_1106779d0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1027fdafc; end: 1027fdb93;  */

void FUN_1027fdafc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x118);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0xf0);
    uStack_80 = *(undefined8 *)(param_1 + 0xe8);
    uStack_68 = *(undefined8 *)(param_1 + 0x100);
    uStack_70 = *(undefined8 *)(param_1 + 0xf8);
    uStack_58 = *(undefined8 *)(param_1 + 0x110);
    uStack_60 = *(undefined8 *)(param_1 + 0x108);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802c80();
    (*pcVar1)(&uStack_80,0x14,&UNK_110551788,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1027fdb94; end: 1027fdc27;  */

void FUN_1027fdb94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_70 = *(ulong *)(param_1 + 0x120);
  if ((uStack_70 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x148);
    uStack_60 = *(undefined8 *)(param_1 + 0x130);
    uStack_68 = *(undefined8 *)(param_1 + 0x128);
    uStack_50 = *(undefined8 *)(param_1 + 0x140);
    uStack_58 = *(undefined8 *)(param_1 + 0x138);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000102802c40();
    (*pcVar1)(&uStack_70,0x15,&UNK_1105519c8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1027fdc28; end: 1027fdd23;  */

void FUN_1027fdc28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_f8 = *(undefined8 *)(param_1 + 0x98);
  uStack_100 = *(undefined8 *)(param_1 + 0x90);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_f0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_e0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c8 = *(undefined8 *)(param_1 + 200);
  uStack_d0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_138 = *(undefined8 *)(param_1 + 0x58);
  uStack_140 = *(undefined8 *)(param_1 + 0x50);
  uStack_128 = *(undefined8 *)(param_1 + 0x68);
  uStack_130 = *(undefined8 *)(param_1 + 0x60);
  uStack_118 = *(undefined8 *)(param_1 + 0x78);
  uStack_120 = *(undefined8 *)(param_1 + 0x70);
  uStack_108 = *(undefined8 *)(param_1 + 0x88);
  uStack_110 = *(undefined8 *)(param_1 + 0x80);
  iVar1 = (int)&uStack_140;
  func_0x0001027fe598();
  if (iVar1 != 1) {
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    uStack_58 = uStack_d8;
    uStack_60 = uStack_e0;
    uStack_48 = uStack_c8;
    uStack_50 = uStack_d0;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    iVar1 = (int)&uStack_c0;
    func_0x0001027fe5ac();
    if (iVar1 == 2) {
      puVar2 = &uStack_c0;
      func_0x000100d081cc();
      uStack_1b8 = puVar2[1];
      uStack_1c0 = *puVar2;
      uStack_1a8 = puVar2[3];
      uStack_1b0 = puVar2[2];
      uStack_198 = puVar2[5];
      uStack_1a0 = puVar2[4];
      uStack_188 = puVar2[7];
      uStack_190 = puVar2[6];
      uStack_178 = puVar2[9];
      uStack_180 = puVar2[8];
      uStack_168 = puVar2[0xb];
      uStack_170 = puVar2[10];
      uStack_158 = puVar2[0xd];
      uStack_160 = puVar2[0xc];
      uStack_148 = puVar2[0xf];
      uStack_150 = puVar2[0xe];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000102802c00();
      (*pcVar3)(&uStack_1c0,0x16,&UNK_1106794e0,puVar2,param_3,param_4);
    }
  }
  return;
}



/* Entry: 1027fdd24; end: 1027fdd27;  */

uint FUN_1027fdd24(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uStack_b20;
  ulong uStack_b18;
  ulong uStack_b10;
  ulong uStack_b08;
  ulong uStack_b00;
  ulong uStack_af8;
  ulong uStack_aa0;
  ulong uStack_a98;
  ulong uStack_a90;
  ulong uStack_a88;
  ulong uStack_a80;
  ulong uStack_a78;
  ulong uStack_a70;
  ulong uStack_a68;
  ulong uStack_a60;
  ulong uStack_a58;
  ulong uStack_a50;
  ulong uStack_a48;
  ulong uStack_a40;
  ulong uStack_a38;
  ulong uStack_a30;
  long lStack_a28;
  ulong uStack_a20;
  ulong uStack_a18;
  ulong uStack_a10;
  ulong uStack_a08;
  ulong uStack_a00;
  ulong uStack_9f8;
  ulong uStack_9f0;
  ulong uStack_9e8;
  ulong uStack_9e0;
  ulong uStack_9d8;
  ulong uStack_9d0;
  ulong uStack_9c8;
  ulong uStack_9c0;
  ulong uStack_9b8;
  ulong uStack_9b0;
  long lStack_9a8;
  ulong uStack_9a0;
  ulong uStack_998;
  ulong uStack_990;
  ulong uStack_988;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  ulong uStack_958;
  ulong uStack_950;
  ulong uStack_948;
  ulong uStack_940;
  ulong uStack_938;
  ulong uStack_930;
  long lStack_928;
  ulong uStack_920;
  ulong uStack_918;
  ulong uStack_910;
  ulong uStack_908;
  ulong uStack_900;
  ulong uStack_8f8;
  ulong uStack_8f0;
  ulong uStack_8e8;
  ulong uStack_8e0;
  ulong uStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  undefined8 uStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  undefined8 uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  undefined8 uStack_7a8;
  undefined1 auStack_7a0 [48];
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  undefined1 uStack_6f8;
  undefined7 uStack_6f7;
  undefined1 uStack_6f0;
  undefined7 uStack_6ef;
  char cStack_6e8;
  undefined7 uStack_6e7;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  long lStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  undefined1 uStack_5f8;
  undefined7 uStack_5f7;
  undefined1 uStack_5f0;
  undefined7 uStack_5ef;
  char cStack_5e8;
  undefined7 uStack_5e7;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  long lStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined1 uStack_3d0;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  undefined1 uStack_380;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined1 uStack_2b0;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined1 uStack_260;
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
  
  lVar11 = *param_1;
  lVar10 = *param_2;
  lVar12 = *(long *)(lVar11 + 0x10);
  if (lVar12 == *(long *)(lVar10 + 0x10)) {
    if (lVar12 != 0 && lVar11 != lVar10) {
      puVar13 = (undefined8 *)(lVar11 + 0x20);
      puVar14 = (undefined8 *)(lVar10 + 0x20);
      do {
        uStack_248 = puVar13[1];
        uStack_250 = *puVar13;
        uStack_238 = puVar13[3];
        uStack_240 = puVar13[2];
        uStack_228 = puVar13[5];
        uStack_230 = puVar13[4];
        uStack_218 = puVar13[7];
        uStack_220 = puVar13[6];
        uStack_208 = puVar13[9];
        uStack_210 = puVar13[8];
        uStack_1f8 = puVar13[0xb];
        uStack_200 = puVar13[10];
        uStack_1e8 = puVar13[0xd];
        uStack_1f0 = puVar13[0xc];
        uStack_1d8 = puVar13[0xf];
        uStack_1e0 = puVar13[0xe];
        uStack_1c8 = puVar13[0x11];
        uStack_1d0 = puVar13[0x10];
        uStack_1b8 = puVar13[0x13];
        uStack_1c0 = puVar13[0x12];
        uStack_1a8 = puVar13[0x15];
        uStack_1b0 = puVar13[0x14];
        uStack_198 = puVar13[0x17];
        uStack_1a0 = puVar13[0x16];
        uStack_188 = puVar13[0x19];
        uStack_190 = puVar13[0x18];
        uStack_178 = puVar13[0x1b];
        uStack_180 = puVar13[0x1a];
        uStack_170 = puVar13[0x1c];
        uStack_158 = puVar14[1];
        uStack_160 = *puVar14;
        uStack_148 = puVar14[3];
        uStack_150 = puVar14[2];
        uStack_138 = puVar14[5];
        uStack_140 = puVar14[4];
        uStack_128 = puVar14[7];
        uStack_130 = puVar14[6];
        uStack_118 = puVar14[9];
        uStack_120 = puVar14[8];
        uStack_108 = puVar14[0xb];
        uStack_110 = puVar14[10];
        uStack_f8 = puVar14[0xd];
        uStack_100 = puVar14[0xc];
        uStack_e8 = puVar14[0xf];
        uStack_f0 = puVar14[0xe];
        uStack_d8 = puVar14[0x11];
        uStack_e0 = puVar14[0x10];
        uStack_c8 = puVar14[0x13];
        uStack_d0 = puVar14[0x12];
        uStack_b8 = puVar14[0x15];
        uStack_c0 = puVar14[0x14];
        uStack_a8 = puVar14[0x17];
        uStack_b0 = puVar14[0x16];
        uStack_98 = puVar14[0x19];
        uStack_a0 = puVar14[0x18];
        uStack_88 = puVar14[0x1b];
        uStack_90 = puVar14[0x1a];
        uStack_80 = puVar14[0x1c];
        FUN_1028027b0(&uStack_250,&uStack_670);
        FUN_1028027b0(&uStack_160,&uStack_670);
        puVar4 = &uStack_250;
        FUN_1027feba0(puVar4,&uStack_160);
        func_0x0001028027e4(&uStack_160);
        func_0x0001028027e4(&uStack_250);
        if (((ulong)puVar4 & 1) == 0) goto LAB_1027ff8a8;
        puVar14 = puVar14 + 0x1d;
        puVar13 = puVar13 + 0x1d;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    lStack_3a8 = param_1[4];
    lStack_3b0 = param_1[3];
    lStack_398 = param_1[6];
    lStack_3a0 = param_1[5];
    lStack_388 = param_1[8];
    lStack_390 = param_1[7];
    uStack_380 = (undefined1)param_1[9];
    lStack_3b8 = param_1[2];
    lStack_3c0 = param_1[1];
    lStack_3f8 = param_2[4];
    lStack_400 = param_2[3];
    lStack_3e8 = param_2[6];
    lStack_3f0 = param_2[5];
    lStack_3d8 = param_2[8];
    lStack_3e0 = param_2[7];
    uStack_3d0 = (undefined1)param_2[9];
    lStack_408 = param_2[2];
    lStack_410 = param_2[1];
    uStack_658 = param_1[4];
    uStack_660 = param_1[3];
    uStack_648 = param_1[6];
    uStack_650 = param_1[5];
    uStack_638 = param_1[8];
    uStack_640 = param_1[7];
    uStack_630 = CONCAT71(uStack_630._1_7_,(char)param_1[9]);
    uStack_668 = param_1[2];
    uStack_670 = param_1[1];
    uStack_610 = param_2[4];
    uStack_618 = param_2[3];
    uStack_600 = param_2[6];
    uStack_608 = param_2[5];
    uVar6 = param_2[8];
    uStack_5f0 = (undefined1)uVar6;
    uStack_5ef = (undefined7)(uVar6 >> 8);
    uStack_5f8 = (undefined1)param_2[7];
    uStack_5f7 = (undefined7)((ulong)param_2[7] >> 8);
    cStack_5e8 = (char)param_2[9];
    uStack_620 = param_2[2];
    uStack_628 = param_2[1];
    bVar1 = ((uVar6 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
    if ((((uStack_638 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && ((char)param_1[9] == -1))
    {
      if (bVar1 || cStack_5e8 != -1) {
LAB_1027ff3c8:
        uStack_6ef = uStack_5ef;
        uStack_6f7 = uStack_5f7;
        uStack_6f0 = uStack_5f0;
        uStack_730 = uStack_630;
        uStack_770 = uStack_670;
        uStack_768 = uStack_668;
        uStack_760 = uStack_660;
        uStack_758 = uStack_658;
        uStack_750 = uStack_650;
        uStack_748 = uStack_648;
        uStack_740 = uStack_640;
        uStack_738 = uStack_638;
        uStack_728 = uStack_628;
        uStack_720 = uStack_620;
        uStack_718 = uStack_618;
        uStack_710 = uStack_610;
        uStack_708 = uStack_608;
        uStack_700 = uStack_600;
        uStack_6f8 = uStack_5f8;
        cStack_6e8 = cStack_5e8;
        FUN_1027fe6d8(&lStack_3c0,&uStack_370,0x112ec28c0,&UNK_10dae0c48);
        FUN_1027fe6d8(&lStack_410,&uStack_370,0x112ec28c0,&UNK_10dae0c48);
        uVar8 = 0x112ec29d0;
        puVar9 = &UNK_10dae11a8;
LAB_1027ff8a0:
        puVar7 = &uStack_770;
      }
      else {
        uStack_758 = param_1[4];
        uStack_760 = param_1[3];
        uStack_748 = param_1[6];
        uStack_750 = param_1[5];
        uStack_738 = param_1[8];
        uStack_740 = param_1[7];
        uStack_730 = CONCAT71(uStack_730._1_7_,(char)param_1[9]);
        uStack_768 = param_1[2];
        uStack_770 = param_1[1];
        FUN_1027fe6d8(&lStack_3c0,&uStack_370,0x112ec28c0,&UNK_10dae0c48);
        FUN_1027fe6d8(&lStack_410,&uStack_370,0x112ec28c0,&UNK_10dae0c48);
        FUN_102802e10(&uStack_770,0x112ec28c0,&UNK_10dae0c48);
LAB_1027ff528:
        uStack_628 = param_1[0x13];
        uStack_630 = param_1[0x12];
        lStack_438 = param_1[0x15];
        lStack_440 = param_1[0x14];
        uStack_638 = param_1[0x11];
        uStack_640 = param_1[0x10];
        lStack_448 = param_1[0x13];
        lStack_450 = param_1[0x12];
        uStack_618 = param_1[0x15];
        uStack_620 = param_1[0x14];
        lStack_428 = param_1[0x17];
        lStack_430 = param_1[0x16];
        uStack_608 = param_1[0x17];
        uStack_610 = param_1[0x16];
        lStack_418 = param_1[0x19];
        lStack_420 = param_1[0x18];
        lStack_488 = param_1[0xb];
        lStack_490 = param_1[10];
        lStack_478 = param_1[0xd];
        lStack_480 = param_1[0xc];
        lStack_468 = param_1[0xf];
        lStack_470 = param_1[0xe];
        lStack_458 = param_1[0x11];
        lStack_460 = param_1[0x10];
        uStack_668 = param_1[0xb];
        uStack_670 = param_1[10];
        uStack_658 = param_1[0xd];
        uStack_660 = param_1[0xc];
        uStack_648 = param_1[0xf];
        uStack_650 = param_1[0xe];
        lStack_508 = param_2[0xb];
        lStack_510 = param_2[10];
        uStack_5d8 = param_2[0xd];
        uStack_5e0 = param_2[0xc];
        lStack_4e8 = param_2[0xf];
        lStack_4f0 = param_2[0xe];
        lStack_4d8 = param_2[0x11];
        lStack_4e0 = param_2[0x10];
        lStack_4f8 = param_2[0xd];
        lStack_500 = param_2[0xc];
        uStack_5c8 = param_2[0xf];
        uStack_5d0 = param_2[0xe];
        uStack_598 = param_2[0x15];
        uStack_5a0 = param_2[0x14];
        lStack_4a8 = param_2[0x17];
        lStack_4b0 = param_2[0x16];
        uStack_588 = param_2[0x17];
        uStack_590 = param_2[0x16];
        lStack_498 = param_2[0x19];
        lStack_4a0 = param_2[0x18];
        uStack_5b8 = param_2[0x11];
        uStack_5c0 = param_2[0x10];
        lStack_4c8 = param_2[0x13];
        lStack_4d0 = param_2[0x12];
        uStack_5a8 = param_2[0x13];
        uStack_5b0 = param_2[0x12];
        lStack_4b8 = param_2[0x15];
        lStack_4c0 = param_2[0x14];
        uStack_600 = param_1[0x18];
        uStack_5f8 = (undefined1)param_1[0x19];
        uStack_5f7 = (undefined7)((ulong)param_1[0x19] >> 8);
        cStack_5e8 = (char)param_2[0xb];
        uStack_5e7 = (undefined7)((ulong)param_2[0xb] >> 8);
        uStack_5f0 = (undefined1)param_2[10];
        uStack_5ef = (undefined7)((ulong)param_2[10] >> 8);
        lStack_578 = param_2[0x19];
        uStack_580 = param_2[0x18];
        iVar2 = (int)&uStack_670;
        func_0x0001027fe598();
        if (iVar2 == 1) {
          iVar2 = (int)&uStack_5f0;
          func_0x0001027fe598();
          if (iVar2 == 1) {
            uStack_728 = uStack_628;
            uStack_730 = uStack_630;
            uStack_718 = uStack_618;
            uStack_720 = uStack_620;
            uStack_708 = uStack_608;
            uStack_710 = uStack_610;
            uStack_6f8 = uStack_5f8;
            uStack_6f7 = uStack_5f7;
            uStack_700 = uStack_600;
            uStack_768 = uStack_668;
            uStack_770 = uStack_670;
            uStack_758 = uStack_658;
            uStack_760 = uStack_660;
            uStack_748 = uStack_648;
            uStack_750 = uStack_650;
            uStack_738 = uStack_638;
            uStack_740 = uStack_640;
            FUN_1027fe6d8(&lStack_490,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
            FUN_1027fe6d8(&lStack_510,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
            puVar7 = &uStack_770;
LAB_1027ff694:
            FUN_102802e10(puVar7,0x112ec28c8,&UNK_10dae0c50);
LAB_1027ff698:
            uVar6 = param_1[0x1a];
            FUN_1027fe214(uVar6,param_2[0x1a]);
            if ((uVar6 & 1) != 0) {
              uVar20 = param_1[0x1e];
              uVar16 = param_1[0x1d];
              uVar26 = param_1[0x20];
              uVar24 = param_1[0x1f];
              uVar21 = param_1[0x22];
              uVar17 = param_1[0x21];
              uVar6 = param_1[0x23];
              uVar22 = param_2[0x1e];
              uVar18 = param_2[0x1d];
              uVar27 = param_2[0x20];
              uVar25 = param_2[0x1f];
              uVar23 = param_2[0x22];
              uVar19 = param_2[0x21];
              uVar15 = param_2[0x23];
              uStack_920 = uVar18;
              uStack_918 = uVar22;
              uStack_910 = uVar25;
              uStack_908 = uVar27;
              uStack_900 = uVar19;
              uStack_8f8 = uVar23;
              uStack_8f0 = uVar15;
              uStack_8a0 = uVar16;
              uStack_898 = uVar20;
              uStack_890 = uVar24;
              uStack_888 = uVar26;
              uStack_880 = uVar17;
              uStack_878 = uVar21;
              uStack_870 = uVar6;
              if (uVar6 >> 0x3c < 0xf) {
                if (uVar15 >> 0x3c < 0xf) {
                  uStack_820 = uVar16;
                  uStack_818 = uVar20;
                  uStack_810 = uVar24;
                  uStack_808 = uVar26;
                  uStack_800 = uVar17;
                  uStack_7f8 = uVar21;
                  uStack_7f0 = uVar6;
                  uStack_670 = uVar18;
                  uStack_668 = uVar22;
                  uStack_660 = uVar25;
                  uStack_658 = uVar27;
                  uStack_650 = uVar19;
                  uStack_648 = uVar23;
                  uStack_640 = uVar15;
                  FUN_1027fe6d8(&uStack_8a0,&uStack_9a0,0x112ec28d0,&UNK_10dae0c58);
                  FUN_1027fe6d8(&uStack_920,&uStack_9a0,0x112ec28d0,&UNK_10dae0c58);
                  puVar7 = &uStack_820;
                  FUN_102803e1c(puVar7,&uStack_670);
                  func_0x0001016164a8(uVar18,uVar22,uVar25,uVar27,uVar19,uVar23,uVar15);
                  func_0x0001016164a8(uVar16,uVar20,uVar24,uVar26,uVar17,uVar21,uVar6);
                  if (((ulong)puVar7 & 1) != 0) goto LAB_1027ffd6c;
                  goto LAB_1027ff8a8;
                }
              }
              else if (0xe < uVar15 >> 0x3c) {
                FUN_1027fe6d8(&uStack_8a0,&uStack_670,0x112ec28d0,&UNK_10dae0c58);
                FUN_1027fe6d8(&uStack_920,&uStack_670,0x112ec28d0,&UNK_10dae0c58);
                func_0x0001016164a8(uVar16,uVar20,uVar24,uVar26,uVar17,uVar21,uVar6);
LAB_1027ffd6c:
                uVar18 = param_1[0x25];
                uVar6 = param_1[0x24];
                uVar24 = param_1[0x27];
                uVar22 = param_1[0x26];
                uVar19 = param_1[0x29];
                uVar15 = param_1[0x28];
                uVar20 = param_2[0x25];
                uVar16 = param_2[0x24];
                uVar25 = param_2[0x27];
                uVar23 = param_2[0x26];
                uVar21 = param_2[0x29];
                uVar17 = param_2[0x28];
                uStack_570 = uVar16;
                uStack_568 = uVar20;
                uStack_560 = uVar23;
                uStack_558 = uVar25;
                uStack_550 = uVar17;
                uStack_548 = uVar21;
                uStack_540 = uVar6;
                uStack_538 = uVar18;
                uStack_530 = uVar22;
                uStack_528 = uVar24;
                uStack_520 = uVar15;
                uStack_518 = uVar19;
                if ((uVar6 & 0xff) == 2) {
                  if ((uVar16 & 0xff) != 2) {
LAB_1027ffed8:
                    FUN_1027fe6d8(&uStack_540,&uStack_9a0,0x112ec28d8,&UNK_10dae0c60);
                    FUN_1027fe6d8(&uStack_570,&uStack_9a0,0x112ec28d8,&UNK_10dae0c60);
                    FUN_1027fe674(uVar6,uVar18,uVar22,uVar24,uVar15,uVar19,&SUB_10006c090,
                                  &SUB_101553ccc);
                    FUN_1027fe674(uVar16,uVar20,uVar23,uVar25,uVar17,uVar21,&SUB_10006c090,
                                  &SUB_101553ccc);
                    goto LAB_1027ff8a8;
                  }
                  FUN_1027fe6d8(&uStack_540,&uStack_9a0,0x112ec28d8,&UNK_10dae0c60);
                  FUN_1027fe6d8(&uStack_570,&uStack_9a0,0x112ec28d8,&UNK_10dae0c60);
                  FUN_1027fe674(uVar6,uVar18,uVar22,uVar24,uVar15,uVar19,&SUB_10006c090,
                                &SUB_101553ccc);
                }
                else {
                  if ((uVar16 & 0xff) == 2) goto LAB_1027ffed8;
                  uStack_9a0 = CONCAT71(uStack_9a0._1_7_,(char)uVar16) & 0xffffffffffffff01;
                  uStack_a20 = CONCAT71(uStack_a20._1_7_,(char)uVar6) & 0xffffffffffffff01;
                  uStack_a18 = uVar18;
                  uStack_a10 = uVar22;
                  uStack_a08 = uVar24;
                  uStack_a00 = uVar15;
                  uStack_9f8 = uVar19;
                  uStack_998 = uVar20;
                  uStack_990 = uVar23;
                  uStack_988 = uVar25;
                  uStack_980 = uVar17;
                  uStack_978 = uVar21;
                  FUN_1027fe6d8(&uStack_540,auStack_7a0,0x112ec28d8,&UNK_10dae0c60);
                  FUN_1027fe6d8(&uStack_570,auStack_7a0,0x112ec28d8,&UNK_10dae0c60);
                  puVar7 = &uStack_a20;
                  FUN_1028053e0(puVar7,&uStack_9a0);
                  FUN_1027fe674(uVar16,uVar20,uVar23,uVar25,uVar17,uVar21,&SUB_10006c090,
                                &SUB_101553ccc);
                  FUN_1027fe674(uVar6,uVar18,uVar22,uVar24,uVar15,uVar19,&SUB_10006c090,
                                &SUB_101553ccc);
                  if (((ulong)puVar7 & 1) == 0) goto LAB_1027ff8a8;
                }
                lVar12 = param_1[0x1b];
                func_0x000100e25fcc(lVar12,param_1[0x1c],param_2[0x1b],param_2[0x1c]);
                uVar3 = (uint)lVar12;
                goto LAB_1027ff8ac;
              }
              FUN_1027fe6d8(&uStack_8a0,&uStack_670,0x112ec28d0,&UNK_10dae0c58);
              FUN_1027fe6d8(&uStack_920,&uStack_670,0x112ec28d0,&UNK_10dae0c58);
              func_0x0001016164a8(uVar16,uVar20,uVar24,uVar26,uVar17,uVar21,uVar6);
              func_0x0001016164a8(uVar18,uVar22,uVar25,uVar27,uVar19,uVar23,uVar15);
            }
            goto LAB_1027ff8a8;
          }
LAB_1027ff7dc:
          uStack_6a8 = uStack_5a8;
          uStack_6b0 = uStack_5b0;
          uStack_698 = uStack_598;
          uStack_6a0 = uStack_5a0;
          uStack_688 = uStack_588;
          uStack_690 = uStack_590;
          lStack_678 = lStack_578;
          uStack_680 = uStack_580;
          cStack_6e8 = cStack_5e8;
          uStack_6e7 = uStack_5e7;
          uStack_6f0 = uStack_5f0;
          uStack_6ef = uStack_5ef;
          uStack_6d8 = uStack_5d8;
          uStack_6e0 = uStack_5e0;
          uStack_6c8 = uStack_5c8;
          uStack_6d0 = uStack_5d0;
          uStack_6b8 = uStack_5b8;
          uStack_6c0 = uStack_5c0;
          uStack_728 = uStack_628;
          uStack_730 = uStack_630;
          uStack_718 = uStack_618;
          uStack_720 = uStack_620;
          uStack_708 = uStack_608;
          uStack_710 = uStack_610;
          uStack_6f8 = uStack_5f8;
          uStack_6f7 = uStack_5f7;
          uStack_700 = uStack_600;
          uStack_768 = uStack_668;
          uStack_770 = uStack_670;
          uStack_758 = uStack_658;
          uStack_760 = uStack_660;
          uStack_748 = uStack_648;
          uStack_750 = uStack_650;
          uStack_738 = uStack_638;
          uStack_740 = uStack_640;
          FUN_1027fe6d8(&lStack_490,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
          FUN_1027fe6d8(&lStack_510,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
          uVar8 = 0x112ec29d8;
          puVar9 = &UNK_10dae11b0;
          goto LAB_1027ff8a0;
        }
        uStack_7d8 = uStack_628;
        uStack_7e0 = uStack_630;
        uStack_7c8 = uStack_618;
        uStack_7d0 = uStack_620;
        uStack_7a8 = CONCAT71(uStack_5f7,uStack_5f8);
        uStack_7b8 = uStack_608;
        uStack_7c0 = uStack_610;
        uStack_7b0 = uStack_600;
        uStack_818 = uStack_668;
        uStack_820 = uStack_670;
        uStack_808 = uStack_658;
        uStack_810 = uStack_660;
        uStack_7f8 = uStack_648;
        uStack_800 = uStack_650;
        uStack_7e8 = uStack_638;
        uStack_7f0 = uStack_640;
        iVar2 = (int)&uStack_5f0;
        func_0x0001027fe598();
        if (iVar2 == 1) goto LAB_1027ff7dc;
        uStack_9d8 = uStack_5a8;
        uStack_9e0 = uStack_5b0;
        uStack_9c8 = uStack_598;
        uStack_9d0 = uStack_5a0;
        uStack_9b8 = uStack_588;
        uStack_9c0 = uStack_590;
        lStack_9a8 = lStack_578;
        uStack_9b0 = uStack_580;
        uStack_a18 = CONCAT71(uStack_5e7,cStack_5e8);
        uStack_a20 = CONCAT71(uStack_5ef,uStack_5f0);
        uStack_a08 = uStack_5d8;
        uStack_a10 = uStack_5e0;
        uStack_9f8 = uStack_5c8;
        uStack_a00 = uStack_5d0;
        uStack_9e8 = uStack_5b8;
        uStack_9f0 = uStack_5c0;
        uStack_938 = uStack_588;
        uStack_940 = uStack_590;
        lStack_928 = lStack_578;
        uStack_930 = uStack_580;
        uStack_958 = uStack_5a8;
        uStack_960 = uStack_5b0;
        uStack_948 = uStack_598;
        uStack_950 = uStack_5a0;
        uStack_978 = uStack_5c8;
        uStack_980 = uStack_5d0;
        uStack_968 = uStack_5b8;
        uStack_970 = uStack_5c0;
        uStack_988 = uStack_5d8;
        uStack_990 = uStack_5e0;
        uStack_8f8 = uStack_7f8;
        uStack_900 = uStack_800;
        uStack_8e8 = uStack_7e8;
        uStack_8f0 = uStack_7f0;
        uStack_918 = uStack_818;
        uStack_920 = uStack_820;
        uStack_908 = uStack_808;
        uStack_910 = uStack_810;
        uStack_8b8 = uStack_7b8;
        uStack_8c0 = uStack_7c0;
        uStack_8a8 = uStack_7a8;
        uStack_8b0 = uStack_7b0;
        uStack_8d8 = uStack_7d8;
        uStack_8e0 = uStack_7e0;
        uStack_8c8 = uStack_7c8;
        uStack_8d0 = uStack_7d0;
        uStack_898 = uStack_818;
        uStack_8a0 = uStack_820;
        uStack_888 = uStack_808;
        uStack_890 = uStack_810;
        uStack_878 = uStack_7f8;
        uStack_880 = uStack_800;
        uStack_868 = uStack_7e8;
        uStack_870 = uStack_7f0;
        uStack_858 = uStack_7d8;
        uStack_860 = uStack_7e0;
        uStack_848 = uStack_7c8;
        uStack_850 = uStack_7d0;
        uStack_838 = uStack_7b8;
        uStack_840 = uStack_7c0;
        uStack_828 = uStack_7a8;
        uStack_830 = uStack_7b0;
        iVar2 = (int)&uStack_920;
        uStack_9a0 = uStack_a20;
        uStack_998 = uStack_a18;
        func_0x0001027fe5ac();
        if (iVar2 == 0) {
          puVar7 = &uStack_8a0;
          func_0x000100d081cc();
          uStack_b18 = puVar7[1];
          uStack_b20 = *puVar7;
          uStack_b08 = puVar7[3];
          uStack_b10 = puVar7[2];
          uStack_af8 = puVar7[5];
          uStack_b00 = puVar7[4];
          uStack_738 = uStack_968;
          uStack_740 = uStack_970;
          uStack_748 = uStack_978;
          uStack_750 = uStack_980;
          uStack_6f8 = (undefined1)lStack_928;
          uStack_6f7 = (undefined7)((ulong)lStack_928 >> 8);
          uStack_700 = uStack_930;
          uStack_708 = uStack_938;
          uStack_710 = uStack_940;
          uStack_718 = uStack_948;
          uStack_720 = uStack_950;
          uStack_728 = uStack_958;
          uStack_730 = uStack_960;
          uStack_768 = uStack_998;
          uStack_770 = uStack_9a0;
          uStack_758 = uStack_988;
          uStack_760 = uStack_990;
          iVar2 = (int)&uStack_9a0;
          func_0x0001027fe5ac();
          if (iVar2 == 0) {
            puVar7 = &uStack_770;
            func_0x000100d081cc();
            uStack_a98 = puVar7[1];
            uStack_aa0 = *puVar7;
            uStack_a88 = puVar7[3];
            uStack_a90 = puVar7[2];
            uStack_a78 = puVar7[5];
            uStack_a80 = puVar7[4];
            FUN_1027fe6d8(&lStack_490,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
            FUN_1027fe6d8(&lStack_510,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
            puVar7 = &uStack_b20;
            func_0x000103689d00(puVar7,&uStack_aa0);
LAB_1027ffea4:
            FUN_102802e10(&uStack_a20,0x112ec28c8,&UNK_10dae0c50);
            FUN_102802e10(&uStack_670,0x112ec28c8,&UNK_10dae0c50);
            if (((ulong)puVar7 & 1) == 0) goto LAB_1027ff8a8;
            goto LAB_1027ff698;
          }
LAB_1027ffa64:
          FUN_1027fe6d8(&lStack_490,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
          puVar7 = &uStack_370;
LAB_1027ffc64:
          FUN_1027fe6d8(&lStack_510,puVar7,0x112ec28c8,&UNK_10dae0c50);
          FUN_102802e10(&uStack_a20,0x112ec28c8,&UNK_10dae0c50);
          uVar8 = 0x112ec28c8;
          puVar9 = &UNK_10dae0c50;
          puVar7 = &uStack_670;
        }
        else {
          if (iVar2 != 1) {
            puVar7 = &uStack_8a0;
            func_0x000100d081cc();
            uStack_328 = puVar7[9];
            uStack_330 = puVar7[8];
            uStack_318 = puVar7[0xb];
            uStack_320 = puVar7[10];
            uStack_308 = puVar7[0xd];
            uStack_310 = puVar7[0xc];
            uStack_2f8 = puVar7[0xf];
            uStack_300 = puVar7[0xe];
            uStack_368 = puVar7[1];
            uStack_370 = *puVar7;
            uStack_358 = puVar7[3];
            uStack_360 = puVar7[2];
            uStack_348 = puVar7[5];
            uStack_350 = puVar7[4];
            uStack_338 = puVar7[7];
            uStack_340 = puVar7[6];
            uStack_a58 = uStack_958;
            uStack_a60 = uStack_960;
            uStack_a48 = uStack_948;
            uStack_a50 = uStack_950;
            uStack_a38 = uStack_938;
            uStack_a40 = uStack_940;
            lStack_a28 = lStack_928;
            uStack_a30 = uStack_930;
            uStack_a98 = uStack_998;
            uStack_aa0 = uStack_9a0;
            uStack_a88 = uStack_988;
            uStack_a90 = uStack_990;
            uStack_a78 = uStack_978;
            uStack_a80 = uStack_980;
            uStack_a68 = uStack_968;
            uStack_a70 = uStack_970;
            iVar2 = (int)&uStack_9a0;
            func_0x0001027fe5ac();
            if (iVar2 == 2) {
              puVar7 = &uStack_aa0;
              func_0x000100d081cc();
              uStack_728 = puVar7[9];
              uStack_730 = puVar7[8];
              uStack_718 = puVar7[0xb];
              uStack_720 = puVar7[10];
              uStack_708 = puVar7[0xd];
              uStack_710 = puVar7[0xc];
              uStack_700 = puVar7[0xe];
              uStack_6f8 = (undefined1)puVar7[0xf];
              uStack_6f7 = (undefined7)(puVar7[0xf] >> 8);
              uStack_768 = puVar7[1];
              uStack_770 = *puVar7;
              uStack_758 = puVar7[3];
              uStack_760 = puVar7[2];
              uStack_748 = puVar7[5];
              uStack_750 = puVar7[4];
              uStack_738 = puVar7[7];
              uStack_740 = puVar7[6];
              FUN_1027fe6d8(&lStack_490,&uStack_b20,0x112ec28c8,&UNK_10dae0c50);
              FUN_1027fe6d8(&lStack_510,&uStack_b20,0x112ec28c8,&UNK_10dae0c50);
              puVar7 = &uStack_370;
              func_0x00010368a888(puVar7,&uStack_770);
              goto LAB_1027ffea4;
            }
            FUN_1027fe6d8(&lStack_490,&uStack_770,0x112ec28c8,&UNK_10dae0c50);
            puVar7 = &uStack_770;
            goto LAB_1027ffc64;
          }
          puVar7 = &uStack_8a0;
          func_0x000100d081cc();
          uVar6 = *puVar7;
          uVar15 = puVar7[1];
          uStack_728 = uStack_958;
          uStack_730 = uStack_960;
          uStack_718 = uStack_948;
          uStack_720 = uStack_950;
          uStack_708 = uStack_938;
          uStack_710 = uStack_940;
          uStack_6f8 = (undefined1)lStack_928;
          uStack_6f7 = (undefined7)((ulong)lStack_928 >> 8);
          uStack_700 = uStack_930;
          uStack_768 = uStack_998;
          uStack_770 = uStack_9a0;
          uStack_758 = uStack_988;
          uStack_760 = uStack_990;
          uStack_748 = uStack_978;
          uStack_750 = uStack_980;
          uStack_738 = uStack_968;
          uStack_740 = uStack_970;
          iVar2 = (int)&uStack_9a0;
          func_0x0001027fe5ac();
          if (iVar2 != 1) goto LAB_1027ffa64;
          puVar7 = &uStack_770;
          func_0x000100d081cc();
          uVar16 = *puVar7;
          uVar17 = puVar7[1];
          FUN_1027fe6d8(&lStack_490,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
          FUN_1027fe6d8(&lStack_510,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
          func_0x000100e25fcc(uVar6,uVar15,uVar16,uVar17);
          FUN_102802e10(&uStack_a20,0x112ec28c8,&UNK_10dae0c50);
          uVar8 = 0x112ec28c8;
          puVar9 = &UNK_10dae0c50;
          puVar7 = &uStack_670;
          if ((uVar6 & 1) != 0) goto LAB_1027ff694;
        }
      }
      FUN_102802e10(puVar7,uVar8,puVar9);
    }
    else {
      if (!bVar1 && cStack_5e8 == -1) goto LAB_1027ff3c8;
      uStack_758 = param_2[4];
      uStack_760 = param_2[3];
      uStack_748 = param_2[6];
      uStack_750 = param_2[5];
      uStack_738 = param_2[8];
      uStack_740 = param_2[7];
      uStack_260 = (undefined1)param_2[9];
      uStack_730 = CONCAT71(uStack_730._1_7_,uStack_260);
      uStack_768 = param_2[2];
      uStack_770 = param_2[1];
      lStack_2e8 = param_1[2];
      lStack_2f0 = param_1[1];
      lStack_2d8 = param_1[4];
      lStack_2e0 = param_1[3];
      lStack_2c8 = param_1[6];
      lStack_2d0 = param_1[5];
      lStack_2b8 = param_1[8];
      lStack_2c0 = param_1[7];
      uStack_2b0 = (undefined1)param_1[9];
      uStack_2a0 = uStack_770;
      uStack_298 = uStack_768;
      uStack_290 = uStack_760;
      uStack_288 = uStack_758;
      uStack_280 = uStack_750;
      uStack_278 = uStack_748;
      uStack_270 = uStack_740;
      uStack_268 = uStack_738;
      FUN_1027fe6d8(&lStack_3c0,&uStack_370,0x112ec28c0,&UNK_10dae0c48);
      FUN_1027fe6d8(&lStack_410,&uStack_370,0x112ec28c0,&UNK_10dae0c48);
      plVar5 = &lStack_2f0;
      FUN_1027fe720(plVar5,&uStack_2a0);
      FUN_102802e10(&uStack_770,0x112ec28c0,&UNK_10dae0c48);
      FUN_102802e10(&uStack_670,0x112ec28c0,&UNK_10dae0c48);
      if (((ulong)plVar5 & 1) != 0) goto LAB_1027ff528;
    }
  }
LAB_1027ff8a8:
  uVar3 = 0;
LAB_1027ff8ac:
  return uVar3 & 1;
}



/* Entry: 1027fdd28; end: 1027fde33;  */

void FUN_1027fdd28(undefined8 *param_1)

{
  undefined *puVar1;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  undefined1 uStack_119;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined1 auStack_b0 [120];
  undefined8 uStack_38;
  
  FUN_1027fe578(auStack_b0);
  uStack_e9 = (undefined1)auStack_b0._72_8_;
  uStack_e8 = SUB87(auStack_b0._72_8_,1);
  uStack_f1 = (undefined1)auStack_b0._64_8_;
  uStack_f0 = SUB87(auStack_b0._64_8_,1);
  uStack_d9 = (undefined1)auStack_b0._88_8_;
  uStack_d8 = SUB87(auStack_b0._88_8_,1);
  uStack_e1 = (undefined1)auStack_b0._80_8_;
  uStack_e0 = SUB87(auStack_b0._80_8_,1);
  uStack_c9 = (undefined1)auStack_b0._104_8_;
  uStack_c8 = SUB87(auStack_b0._104_8_,1);
  uStack_d1 = (undefined1)auStack_b0._96_8_;
  uStack_d0 = SUB87(auStack_b0._96_8_,1);
  uStack_b9 = (undefined1)uStack_38;
  uStack_c1 = (undefined1)auStack_b0._112_8_;
  uStack_c0 = SUB87(auStack_b0._112_8_,1);
  uStack_129 = (undefined1)auStack_b0._8_8_;
  uStack_128 = SUB87(auStack_b0._8_8_,1);
  uStack_131 = (undefined1)auStack_b0._0_8_;
  uStack_130 = SUB87(auStack_b0._0_8_,1);
  uStack_119 = (undefined1)auStack_b0._24_8_;
  uStack_118 = SUB87(auStack_b0._24_8_,1);
  uStack_121 = (undefined1)auStack_b0._16_8_;
  uStack_120 = SUB87(auStack_b0._16_8_,1);
  uStack_109 = (undefined1)auStack_b0._40_8_;
  uStack_108 = SUB87(auStack_b0._40_8_,1);
  uStack_111 = (undefined1)auStack_b0._32_8_;
  uStack_110 = SUB87(auStack_b0._32_8_,1);
  uStack_f9 = (undefined1)auStack_b0._56_8_;
  uStack_f8 = SUB87(auStack_b0._56_8_,1);
  uStack_101 = (undefined1)auStack_b0._48_8_;
  uStack_100 = SUB87(auStack_b0._48_8_,1);
  *(ulong *)((long)param_1 + 0xa1) = CONCAT17(uStack_d9,uStack_e0);
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_e1,uStack_e8);
  *(ulong *)((long)param_1 + 0xb1) = CONCAT17(uStack_c9,uStack_d0);
  *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_d1,uStack_d8);
  *(ulong *)((long)param_1 + 0xc1) = CONCAT17(uStack_b9,uStack_c0);
  *(ulong *)((long)param_1 + 0xb9) = CONCAT17(uStack_c1,uStack_c8);
  *(ulong *)((long)param_1 + 0x61) = CONCAT17(uStack_119,uStack_120);
  *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_121,uStack_128);
  *(ulong *)((long)param_1 + 0x71) = CONCAT17(uStack_109,uStack_110);
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_111,uStack_118);
  *(ulong *)((long)param_1 + 0x81) = CONCAT17(uStack_f9,uStack_100);
  *(ulong *)((long)param_1 + 0x79) = CONCAT17(uStack_101,uStack_108);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(ulong *)((long)param_1 + 0x91) = CONCAT17(uStack_e9,uStack_f0);
  *(ulong *)((long)param_1 + 0x89) = CONCAT17(uStack_f1,uStack_f8);
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[8] = 0x3000000000000000;
  *(undefined1 *)(param_1 + 9) = 0xff;
  param_1[0x19] = uStack_38;
  *(ulong *)((long)param_1 + 0x51) = CONCAT17(uStack_129,uStack_130);
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_131,uStack_138);
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x1a] = puVar1;
  param_1[0x1c] = 0xc000000000000000;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0xf000000000000000;
  param_1[0x24] = 2;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  return;
}



/* Entry: 1027fde34; end: 1027fde57;  */

undefined1  [16] FUN_1027fde34(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f0c2030;
  auVar1._0_8_ = 0xd00000000000002a;
  return auVar1;
}



/* Entry: 1027fde58; end: 1027fde87;  */

undefined1  [16] FUN_1027fde58(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0xd8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0));
  return auVar1;
}



/* Entry: 1027fde88; end: 1027fdebb;  */

void FUN_1027fde88(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0));
  *(undefined8 *)(unaff_x20 + 0xd8) = param_1;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_2;
  return;
}



/* Entry: 1027fdebc; end: 1027fdecf;  */

undefined1  [16] FUN_1027fdebc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0xd8;
  auVar1._0_8_ = 0x1027fdecc;
  return auVar1;
}



/* Entry: 1027fded0; end: 1027fdee3;  */

void FUN_1027fded0(void)

{
  FUN_1027fa834();
  return;
}



/* Entry: 1027fdee4; end: 1027fdf4b;  */

void FUN_1027fdee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_190 [336];
  
  func_0x000107c610b4(auStack_190);
  FUN_1027fcd08(param_1,param_2,param_3);
  return;
}



/* Entry: 1027fdf4c; end: 1027fdf4f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1027fdf4c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1027fdf50; end: 1027fdf87;  */

uint FUN_1027fdf50(long param_1,long param_2)

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
  FUN_102802730();
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



/* Entry: 1027fdf88; end: 1027fdfd7;  */

uint FUN_1027fdf88(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_2c0 [336];
  undefined1 auStack_170 [336];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_170,param_1,0x150);
  func_0x000107c610b4(auStack_2c0);
  FUN_1027ff118(auStack_2c0,auStack_170);
  return uVar1 & 1;
}



/* Entry: 1027fdfd8; end: 1027fe077;  */

/* WARNING: Possible PIC construction at 0x0001027fe024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027fe034: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027fe028) */
/* WARNING: Removing unreachable block (ram,0x0001027fe038) */

void FUN_1027fdfd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ec2920 != -1) {
    func_0x000107c61568(0x112ec2920,FUN_1027fa7ec);
  }
  uVar5 = uRam0000000113804830;
  uVar4 = uRam0000000113804828;
  uVar3 = uRam0000000113804820;
  uVar2 = uRam0000000113804818;
  uVar1 = uRam0000000113804810;
  *param_1 = uRam0000000113804808;
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



/* Entry: 1027fe078; end: 1027fe0b3;  */

void FUN_1027fe078(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112ec29b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112ec29b0,&UNK_10dae1198);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1027fe0b4; end: 1027fe1bf;  */

void FUN_1027fe0b4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1c8 [72];
  undefined1 auStack_180 [336];
  
  func_0x000107c610b4(auStack_180);
  func_0x000107c6068c(auStack_1c8,0);
  func_0x000107c5fa50(auStack_1c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1027fe1c0; end: 1027fe213;  */

uint FUN_1027fe1c0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2c0 [336];
  undefined1 auStack_170 [336];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_2c0,param_1,0x150);
  func_0x000107c610b4(auStack_170,param_2,0x150);
  FUN_1027ff118(auStack_2c0,auStack_170);
  return uVar1 & 1;
}



/* Entry: 1027fe214; end: 1027fe333;  */

uint FUN_1027fe214(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_218 [152];
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_118 = puVar4[0xd];
        uStack_120 = puVar4[0xc];
        uStack_108 = puVar4[0xf];
        uStack_110 = puVar4[0xe];
        uStack_f8 = puVar4[0x11];
        uStack_100 = puVar4[0x10];
        uStack_f0 = puVar4[0x12];
        uStack_158 = puVar4[5];
        uStack_160 = puVar4[4];
        uStack_148 = puVar4[7];
        uStack_150 = puVar4[6];
        uStack_138 = puVar4[9];
        uStack_140 = puVar4[8];
        uStack_128 = puVar4[0xb];
        uStack_130 = puVar4[10];
        uStack_178 = puVar4[1];
        uStack_180 = *puVar4;
        uStack_168 = puVar4[3];
        uStack_170 = puVar4[2];
        uStack_78 = puVar5[0xd];
        uStack_80 = puVar5[0xc];
        uStack_68 = puVar5[0xf];
        uStack_70 = puVar5[0xe];
        uStack_58 = puVar5[0x11];
        uStack_60 = puVar5[0x10];
        uStack_50 = puVar5[0x12];
        uStack_b8 = puVar5[5];
        uStack_c0 = puVar5[4];
        uStack_a8 = puVar5[7];
        uStack_b0 = puVar5[6];
        uStack_98 = puVar5[9];
        uStack_a0 = puVar5[8];
        uStack_88 = puVar5[0xb];
        uStack_90 = puVar5[10];
        uStack_d8 = puVar5[1];
        uStack_e0 = *puVar5;
        uStack_c8 = puVar5[3];
        uStack_d0 = puVar5[2];
        func_0x000102802810(&uStack_180,auStack_218);
        func_0x000102802810(&uStack_e0,auStack_218);
        puVar1 = &uStack_180;
        FUN_102807248(puVar1,&uStack_e0);
        uVar3 = (uint)puVar1;
        func_0x00010280284c(&uStack_e0);
        func_0x00010280284c(&uStack_180);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x13;
        puVar4 = puVar4 + 0x13;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 1027fe334; end: 1027fe46f;  */

uint FUN_1027fe334(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_340 [256];
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_178 = puVar4[0x19];
        uStack_180 = puVar4[0x18];
        uStack_168 = puVar4[0x1b];
        uStack_170 = puVar4[0x1a];
        uStack_158 = puVar4[0x1d];
        uStack_160 = puVar4[0x1c];
        uStack_148 = puVar4[0x1f];
        uStack_150 = puVar4[0x1e];
        uStack_1b8 = puVar4[0x11];
        uStack_1c0 = puVar4[0x10];
        uStack_1a8 = puVar4[0x13];
        uStack_1b0 = puVar4[0x12];
        uStack_198 = puVar4[0x15];
        uStack_1a0 = puVar4[0x14];
        uStack_188 = puVar4[0x17];
        uStack_190 = puVar4[0x16];
        uStack_1f8 = puVar4[9];
        uStack_200 = puVar4[8];
        uStack_1e8 = puVar4[0xb];
        uStack_1f0 = puVar4[10];
        uStack_1d8 = puVar4[0xd];
        uStack_1e0 = puVar4[0xc];
        uStack_1c8 = puVar4[0xf];
        uStack_1d0 = puVar4[0xe];
        uStack_238 = puVar4[1];
        uStack_240 = *puVar4;
        uStack_228 = puVar4[3];
        uStack_230 = puVar4[2];
        uStack_218 = puVar4[5];
        uStack_220 = puVar4[4];
        uStack_208 = puVar4[7];
        uStack_210 = puVar4[6];
        uStack_78 = puVar5[0x19];
        uStack_80 = puVar5[0x18];
        uStack_68 = puVar5[0x1b];
        uStack_70 = puVar5[0x1a];
        uStack_58 = puVar5[0x1d];
        uStack_60 = puVar5[0x1c];
        uStack_48 = puVar5[0x1f];
        uStack_50 = puVar5[0x1e];
        uStack_b8 = puVar5[0x11];
        uStack_c0 = puVar5[0x10];
        uStack_a8 = puVar5[0x13];
        uStack_b0 = puVar5[0x12];
        uStack_98 = puVar5[0x15];
        uStack_a0 = puVar5[0x14];
        uStack_88 = puVar5[0x17];
        uStack_90 = puVar5[0x16];
        uStack_f8 = puVar5[9];
        uStack_100 = puVar5[8];
        uStack_e8 = puVar5[0xb];
        uStack_f0 = puVar5[10];
        uStack_d8 = puVar5[0xd];
        uStack_e0 = puVar5[0xc];
        uStack_c8 = puVar5[0xf];
        uStack_d0 = puVar5[0xe];
        uStack_138 = puVar5[1];
        uStack_140 = *puVar5;
        uStack_128 = puVar5[3];
        uStack_130 = puVar5[2];
        uStack_118 = puVar5[5];
        uStack_120 = puVar5[4];
        uStack_108 = puVar5[7];
        uStack_110 = puVar5[6];
        FUN_102802e78(&uStack_240,auStack_340);
        FUN_102802e78(&uStack_140,auStack_340);
        puVar1 = &uStack_240;
        FUN_10280a714(puVar1,&uStack_140);
        uVar3 = (uint)puVar1;
        func_0x000102802eb4(&uStack_140);
        func_0x000102802eb4(&uStack_240);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x20;
        puVar4 = puVar4 + 0x20;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 1027fe470; end: 1027fe47b;  */

void FUN_1027fe470(void)

{
  return;
}



/* Entry: 1027fe47c; end: 1027fe577;  */

undefined8 FUN_1027fe47c(undefined8 param_1)

{
  (*(code *)(undefined *)0x102816ef8)();
  return param_1;
}



/* Entry: 1027fe578; end: 1027fe5b7;  */

void FUN_1027fe578(undefined8 *param_1)

{
  param_1[1] = 0x3000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  return;
}



/* Entry: 1027fe5b8; end: 1027fe5eb;  */

undefined8 FUN_1027fe5b8(undefined8 param_1,undefined8 param_2)

{
  FUN_10280232c(param_2,param_1,&UNK_110551378);
  return param_2;
}



/* Entry: 1027fe5ec; end: 1027fe627;  */

void FUN_1027fe5ec(long param_1)

{
  *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) & 0xcfffffffffffffff;
  return;
}



/* Entry: 1027fe628; end: 1027fe663;  */

undefined8 FUN_1027fe628(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10368bd58)(param_2,param_1);
  return param_2;
}



/* Entry: 1027fe664; end: 1027fe673;  */

void FUN_1027fe664(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  if ((param_4 >> 0x3d & 1) == 0) {
    param_1 = param_3;
    param_2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001027fe670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}



/* Entry: 1027fe674; end: 1027fe6d7;  */

void FUN_1027fe674(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,code *UNRECOVERED_JUMPTABLE)

{
  if (param_1 == '\x02') {
    return;
  }
  (*param_7)(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001027fe6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_4,param_5,param_6);
  return;
}



/* Entry: 1027fe6d8; end: 1027fe71f;  */

undefined8 FUN_1027fe6d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1027fe720; end: 1027fea9f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027fe904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027fe94c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027fe840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027fe7fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027fe950) */
/* WARNING: Removing unreachable block (ram,0x0001027fe908) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001027fe800) */
/* WARNING: Type propagation algorithm not settling */

undefined **
FUN_1027fe720(undefined8 *param_1,undefined8 *param_2,undefined **param_3,undefined **param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  code *pcVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined1 in_ZR;
  int iVar9;
  uint uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **unaff_x19;
  undefined *puVar24;
  undefined **unaff_x20;
  undefined **ppuVar25;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **ppuVar26;
  undefined *puVar27;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuVar28;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *puVar29;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  
  pppuVar7 = &ppuStack_c0;
  puVar29 = &stack0xfffffffffffffff0;
  ppuVar13 = (undefined **)*param_1;
  ppuVar16 = (undefined **)param_1[1];
  ppuVar15 = (undefined **)param_1[2];
  ppuVar25 = (undefined **)param_1[3];
  ppuVar22 = (undefined **)param_1[4];
  ppuVar23 = (undefined **)param_1[5];
  ppuVar26 = (undefined **)param_1[6];
  ppuVar28 = (undefined **)param_1[7];
  uVar19 = (ulong)((uint)((ulong)ppuVar28 >> 0x3c) & 3 | (uint)*(byte *)(param_1 + 8) << 2) & 0xff;
  bVar30 = 0xc;
  uVar10 = 0xdae0c0c;
  uVar5 = 0xdae0c0c;
  switch(uVar19) {
  default:
    uVar19 = param_2[7];
  case 0x65:
  case 0x6e:
  case 0x84:
  case 0xb2:
  case 0xea:
    bVar30 = *(byte *)(param_2 + 8);
code_r0x0001027fe78c:
    uVar19 = uVar19 >> 0x3c;
code_r0x0001027fe790:
    in_ZR = (uVar19 & 3) == 0 && (bVar30 & 0x3f) == 0;
code_r0x0001027fe798:
    if (!(bool)in_ZR) goto code_r0x0001027fe9b8;
code_r0x0001027fe79c:
    break;
  case 1:
    if (((uint)((ulong)param_2[7] >> 0x3c) & 3 | (*(byte *)(param_2 + 8) & 0x3f) << 2) != 1)
    goto code_r0x0001027fe9b8;
    break;
  case 2:
    if (((uint)((ulong)param_2[7] >> 0x3c) & 3 | (*(byte *)(param_2 + 8) & 0x3f) << 2) == 2) break;
    goto code_r0x0001027fe9b8;
  case 3:
    uVar19 = param_2[7];
  case 0x75:
  case 0xb9:
  case 0xf1:
    uVar5 = (uint)*(byte *)(param_2 + 8);
code_r0x0001027fe9a4:
    uVar10 = uVar5;
    uVar19 = uVar19 >> 0x3c;
code_r0x0001027fe9a8:
    if (((uint)uVar19 & 3 | (uVar10 & 0x3f) << 2) != 3) goto code_r0x0001027fe9b8;
    break;
  case 4:
    uVar19 = (ulong)((uint)((ulong)param_2[7] >> 0x3c) & 3 | (*(byte *)(param_2 + 8) & 0x3f) << 2);
  case 0x7c:
    if ((int)uVar19 == 4) {
      unaff_x25 = (undefined **)param_2[2];
      unaff_x26 = (undefined **)param_2[3];
      ppuVar26 = (undefined **)param_2[4];
      ppuVar28 = (undefined **)param_2[5];
      unaff_x27 = (undefined **)*param_2;
      unaff_x28 = (undefined **)param_2[1];
      if ((ppuVar13 != unaff_x27) || (ppuVar16 != unaff_x28)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(ppuVar13,ppuVar16,unaff_x27,unaff_x28,0);
        return ppuVar13;
      }
      in_ZR = ppuVar15 == unaff_x25;
code_r0x0001027fe808:
      if ((bool)in_ZR) {
code_r0x0001027fe80c:
        param_3 = ppuVar26;
        param_4 = ppuVar28;
        if (ppuVar25 != unaff_x26) goto code_r0x0001027fe814;
      }
      else {
code_r0x0001027fe814:
        param_4 = unaff_x26;
        param_3 = unaff_x25;
        ppuVar13 = ppuVar15;
        ppuVar16 = ppuVar25;
        unaff_x25 = param_3;
        unaff_x26 = param_4;
code_r0x0001027fe824:
        func_0x000107c605b8(ppuVar13,ppuVar16,param_3,param_4,0);
code_r0x0001027fe82c:
        param_3 = ppuVar26;
        param_4 = ppuVar28;
        if (((ulong)ppuVar13 & 1) == 0) goto code_r0x0001027fe9b8;
      }
      unaff_x30 = 0x1027fe844;
      ppuVar13 = ppuVar22;
      ppuVar14 = ppuVar23;
      ppuVar26 = param_3;
      ppuVar28 = param_4;
      goto code_r0x000100e25fcc;
    }
code_r0x0001027fe9b8:
    uVar10 = 0;
code_r0x0001027fe9bc:
    ppuVar13 = (undefined **)(ulong)(uVar10 & 1);
code_r0x0001027fe9d4:
    return ppuVar13;
  case 5:
  case 0x5e:
  case 0x66:
  case 0x86:
  case 0x9a:
  case 0xa2:
  case 0xaa:
  case 0xbe:
  case 0xd2:
  case 0xda:
  case 0xe2:
  case 0xf6:
    if (((uint)((ulong)param_2[7] >> 0x3c) & 3 | (*(byte *)(param_2 + 8) & 0x3f) << 2) == 5) break;
    goto code_r0x0001027fe9b8;
  case 6:
    uVar19 = (ulong)((uint)((ulong)param_2[7] >> 0x3c) & 3 | (*(byte *)(param_2 + 8) & 0x3f) << 2);
  case 0xac:
    if ((int)uVar19 != 6) goto code_r0x0001027fe9b8;
    break;
  case 7:
    if (((uint)((ulong)param_2[7] >> 0x3c) & 3 | (*(byte *)(param_2 + 8) & 0x3f) << 2) == 7)
    goto code_r0x0001027fe9fc;
    goto code_r0x0001027fe9b8;
  case 8:
    uVar19 = param_2[7];
    uVar10 = (uint)*(byte *)(param_2 + 8);
  case 0x62:
  case 0x8a:
  case 0xc2:
  case 0xfa:
    uVar19 = (ulong)((uint)(uVar19 >> 0x3c) & 3 | (uVar10 & 0x3f) << 2);
code_r0x0001027fea94:
    if ((int)uVar19 != 8) goto code_r0x0001027fe9b8;
    break;
  case 9:
    unaff_x26 = (undefined **)param_2[7];
    if (((uint)((ulong)unaff_x26 >> 0x3c) & 3 | (*(byte *)(param_2 + 8) & 0x3f) << 2) == 9) {
      unaff_x27 = (undefined **)param_2[2];
      unaff_x28 = (undefined **)param_2[3];
      unaff_x25 = (undefined **)param_2[4];
      ppuStack_c0 = (undefined **)param_2[6];
      ppuStack_b8 = (undefined **)param_2[5];
      if (((ppuVar13 == (undefined **)*param_2) && (ppuVar16 == (undefined **)param_2[1])) ||
         (func_0x000107c605b8(), ((ulong)ppuVar13 & 1) != 0)) {
        ppuVar13 = ppuVar15;
        if ((ppuVar15 != unaff_x27) || (ppuVar25 != unaff_x28)) goto code_r0x0001027fe8f4;
        if (((ppuVar22 == unaff_x25) && (ppuVar23 == ppuStack_b8)) ||
           (ppuVar13 = ppuVar22, func_0x000107c605b8(ppuVar22,ppuVar23,unaff_x25,ppuStack_b8,0),
           ((ulong)ppuVar13 & 1) != 0)) {
          param_4 = (undefined **)((ulong)unaff_x26 & 0xcfffffffffffffff);
          unaff_x30 = 0x1027fe950;
          pppuVar7 = &ppuStack_c0;
          ppuVar13 = ppuVar26;
          ppuVar14 = (undefined **)((ulong)ppuVar28 & 0xcfffffffffffffff);
          param_3 = ppuStack_c0;
          goto code_r0x000100e25fcc;
        }
      }
    }
    goto code_r0x0001027fe9b8;
  case 10:
  case 0xd4:
    uVar19 = (ulong)((uint)((ulong)param_2[7] >> 0x3c) & 3 | (*(byte *)(param_2 + 8) & 0x3f) << 2);
  case 0x60:
    if ((int)uVar19 != 10) goto code_r0x0001027fe9b8;
    break;
  case 0xb:
  case 0x30:
  case 0x40:
  case 0x48:
  case 0x50:
  case 0x58:
  case 0x5d:
  case 0x85:
    uVar19 = param_2[7];
    uVar10 = (uint)*(byte *)(param_2 + 8);
  case 0x80:
    uVar19 = (ulong)((uint)(uVar19 >> 0x3c) & 3 | uVar10 << 2);
code_r0x0001027fe7b0:
    uVar19 = (ulong)((uint)uVar19 & 0xff);
code_r0x0001027fe7b4:
    if ((int)uVar19 != 0xb) goto code_r0x0001027fe9b8;
    break;
  case 0xc:
    ppuStack_88 = ppuVar13;
    ppuStack_80 = ppuVar16;
    ppuStack_78 = ppuVar15;
    ppuStack_70 = ppuVar25;
  case 0x3c:
  case 0x44:
  case 0x4c:
  case 0x54:
    ppuStack_68 = ppuVar22;
    if (((uint)((ulong)param_2[7] >> 0x3c) & 3 | (*(byte *)(param_2 + 8) & 0x3f) << 2) != 0xc)
    goto code_r0x0001027fe9b8;
code_r0x0001027fe874:
    uStack_90 = param_2[4];
    uStack_a8 = param_2[1];
    uStack_b0 = *param_2;
    uStack_a0 = param_2[2];
    uStack_98 = param_2[3];
    pppuVar7 = &ppuStack_88;
    func_0x00010367685c(pppuVar7,&uStack_b0);
    uVar10 = (uint)pppuVar7;
    goto code_r0x0001027fe9bc;
  case 0x1c:
  case 0xf8:
    goto code_r0x0001027fe814;
  case 0x1d:
  case 0x25:
  case 0x2d:
  case 0x35:
  case 0x3d:
  case 0x45:
  case 0x4d:
  case 0x55:
  case 0x7d:
    goto code_r0x0001027fe990;
  case 0x1e:
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 0x46:
  case 0x4e:
  case 0x56:
  case 0x7e:
  case 0x9e:
  case 0xa6:
    goto code_r0x0001027feb14;
  case 0x20:
  case 0x28:
    goto code_r0x0001027fe7b4;
  case 0x24:
    goto code_r0x0001027fe82c;
  case 0x2c:
  case 0x34:
    if (((ulong)ppuVar13 & 1) == 0) goto code_r0x0001027fe9b8;
    uVar10 = 1;
    goto code_r0x0001027fe9bc;
  case 0x38:
    goto code_r0x0001027fe7b0;
  case 0x5c:
    goto code_r0x0001027fe808;
  case 0x5f:
  case 0x67:
  case 0x6a:
  case 0x87:
  case 0x9b:
  case 0xa3:
  case 0xab:
  case 0xbf:
  case 0xd3:
  case 0xdb:
  case 0xe3:
  case 0xf7:
    goto code_r0x0001027fe78c;
  case 0x61:
  case 0x89:
  case 0xc0:
  case 0xc1:
  case 0xf9:
code_r0x0001027fe8f4:
    ppuVar16 = ppuVar25;
    goto code_r0x000107c605b8;
  case 100:
    goto code_r0x0001027feb44;
  case 0x6c:
  case 0x99:
  case 0xa1:
  case 0xa9:
  case 0xbd:
  case 0xd1:
  case 0xd9:
  case 0xe1:
  case 0xf5:
    goto code_r0x0001027fe79c;
  case 0x70:
    goto code_r0x0001027fe824;
  case 0x71:
  case 0x73:
  case 0xaf:
  case 0xdf:
  case 0xe7:
    goto code_r0x0001027feb54;
  case 0x72:
  case 0xae:
  case 0xde:
  case 0xf4:
    func_0x000107c61520();
  case 0xe6:
    param_2 = (undefined8 *)0x112ec28f8;
code_r0x0001027fead4:
    *param_2 = ppuVar13;
    return ppuVar13;
  case 0x76:
  case 0xba:
  case 0xf2:
code_r0x0001027fe9fc:
    break;
  case 0x77:
  case 0xbb:
  case 0xf3:
    goto code_r0x0001027fe798;
  case 0x88:
    goto code_r0x0001027fe9d4;
  case 0x92:
  case 0x94:
  case 0xca:
  case 0xcc:
    goto code_r0x0001027fe790;
  case 0x98:
  case 0xa0:
  case 0xa8:
    goto code_r0x0001027feb58;
  case 0x9c:
    func_0x000107c61520(ppuVar13,&UNK_110551110);
    ppuRam0000000112ec2910 = ppuVar13;
    return ppuVar13;
  case 0x9d:
  case 0xa5:
    goto code_r0x0001027fe98c;
  case 0xa4:
    goto code_r0x0001027feb38;
  case 0xad:
  case 0xdd:
    goto code_r0x0001027fe9a8;
  case 0xb8:
    goto code_r0x0001027fe874;
  case 0xbc:
    if (ppuVar13 != (undefined **)0x0) {
      return ppuVar13;
    }
code_r0x0001027feb38:
    ppuVar13 = (undefined **)&DAT_10dae0c68;
    ppuVar16 = &PTR_DAT_110551000;
code_r0x0001027feb44:
    func_0x000107c61520(ppuVar13,ppuVar16 + 0x10);
    param_2 = (undefined8 *)0x112ec2908;
code_r0x0001027feb54:
    *param_2 = ppuVar13;
code_r0x0001027feb58:
    return ppuVar13;
  case 0xd0:
  case 0xd8:
  case 0xe0:
    ppuVar13 = (undefined **)&DAT_10dae26d0;
    func_0x000107c61520(&DAT_10dae26d0,&UNK_1105526e8);
    param_2 = (undefined8 *)0x112ec2900;
code_r0x0001027feb14:
    *param_2 = ppuVar13;
    return ppuVar13;
  case 0xd5:
  case 0xe4:
    goto code_r0x0001027fe9a4;
  case 0xd6:
    goto code_r0x0001027fead4;
  case 0xdc:
    goto code_r0x0001027fea94;
  case 0xe5:
    goto code_r0x0001027fe80c;
  case 0xf0:
    goto code_r0x0001027fe994;
  }
  param_3 = (undefined **)*param_2;
  param_4 = (undefined **)param_2[1];
  ppuVar22 = unaff_x19;
  ppuVar23 = unaff_x20;
  ppuVar25 = unaff_x21;
  ppuVar15 = unaff_x22;
  ppuVar26 = unaff_x23;
  ppuVar28 = unaff_x24;
  puVar29 = unaff_x29;
code_r0x0001027fe98c:
code_r0x0001027fe990:
code_r0x0001027fe994:
  pppuVar7 = (undefined ***)register0x00000008;
  ppuVar14 = ppuVar16;
code_r0x000100e25fcc:
  do {
    *(undefined ***)((long)pppuVar7 + -0x50) = unaff_x26;
    *(undefined ***)((long)pppuVar7 + -0x48) = unaff_x25;
    *(undefined ***)((long)pppuVar7 + -0x40) = ppuVar28;
    *(undefined ***)((long)pppuVar7 + -0x38) = ppuVar26;
    *(undefined ***)((long)pppuVar7 + -0x30) = ppuVar15;
    *(undefined ***)((long)pppuVar7 + -0x28) = ppuVar25;
    *(undefined ***)((long)pppuVar7 + -0x20) = ppuVar23;
    *(undefined ***)((long)pppuVar7 + -0x18) = ppuVar22;
    *(undefined1 **)((long)pppuVar7 + -0x10) = puVar29;
    *(undefined8 *)((long)pppuVar7 + -8) = unaff_x30;
    *(undefined8 *)((long)pppuVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar10 = (uint)((ulong)ppuVar14 >> 0x20);
    uVar17 = uVar10 >> 0x1e;
    uVar5 = (uint)((ulong)param_4 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar9 = (int)ppuVar13;
    if ((ulong)ppuVar14 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((ppuVar13 != (undefined **)0x0) || (ppuVar14 != (undefined **)0xc000000000000000)) ||
          ((ulong)param_4 >> 0x3e < 3)) ||
         ((uVar19 = 0, param_3 != (undefined **)0x0 || (param_4 != (undefined **)0xc000000000000000)
          ))) goto joined_r0x000100e26170;
code_r0x000100e26128:
      ppuVar11 = (undefined **)0x1;
    }
    else if (uVar10 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)ppuVar14 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)ppuVar13 >> 0x20);
        if (SBORROW4(iVar18,iVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = (ulong)param_4 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)param_3 >> 0x20);
      if (SBORROW4(iVar18,(int)param_3)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)param_3)) goto code_r0x000100e26094;
code_r0x000100e26154:
      ppuVar11 = (undefined **)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = (long)ppuVar13[3] - (long)ppuVar13[2];
        if (SBORROW8((long)ppuVar13[3],(long)ppuVar13[2])) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = (long)param_3[3] - (long)param_3[2];
        if (SBORROW8((long)param_3[3],(long)param_3[2])) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            *(char *)((long)pppuVar7 + -0x70) = (char)ppuVar13;
            *(char *)((long)pppuVar7 + -0x6f) = (char)((ulong)ppuVar13 >> 8);
            *(char *)((long)pppuVar7 + -0x6e) = (char)((ulong)ppuVar13 >> 0x10);
            *(char *)((long)pppuVar7 + -0x6d) = (char)((ulong)ppuVar13 >> 0x18);
            *(char *)((long)pppuVar7 + -0x6c) = (char)((ulong)ppuVar13 >> 0x20);
            *(char *)((long)pppuVar7 + -0x6b) = (char)((ulong)ppuVar13 >> 0x28);
            *(char *)((long)pppuVar7 + -0x6a) = (char)((ulong)ppuVar13 >> 0x30);
            *(char *)((long)pppuVar7 + -0x69) = (char)((ulong)ppuVar13 >> 0x38);
            *(char *)((long)pppuVar7 + -0x68) = (char)ppuVar14;
            *(char *)((long)pppuVar7 + -0x67) = (char)((ulong)ppuVar14 >> 8);
            *(char *)((long)pppuVar7 + -0x66) = (char)((ulong)ppuVar14 >> 0x10);
            *(char *)((long)pppuVar7 + -0x65) = (char)((ulong)ppuVar14 >> 0x18);
            *(char *)((long)pppuVar7 + -100) = (char)((ulong)ppuVar14 >> 0x20);
            *(char *)((long)pppuVar7 + -99) = (char)((ulong)ppuVar14 >> 0x28);
            ppuVar14 = (undefined **)((long)pppuVar7 + (((ulong)ppuVar14 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            ppuVar25 = (undefined **)0x0;
            func_0x000100e25bdc((undefined1 *)((long)pppuVar7 + -0x71),
                                (undefined1 *)((long)pppuVar7 + -0x70));
            ppuVar11 = (undefined **)(ulong)*(byte *)((long)pppuVar7 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (undefined **)(long)iVar9;
          ppuVar26 = (undefined **)(((long)ppuVar13 >> 0x20) - (long)unaff_x25);
          if ((long)ppuVar13 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          ppuVar28 = ppuVar14;
          if (ppuVar13 == (undefined **)0x0) {
            func_0x000107c5ec38();
            ppuVar13 = (undefined **)0x0;
          }
          else {
            ppuVar15 = ppuVar13;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)ppuVar15)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            ppuVar13 = (undefined **)((long)ppuVar13 + ((long)unaff_x25 - (long)ppuVar15));
            func_0x000107c5ec38();
            ppuVar22 = ppuVar13;
            if (ppuVar13 != (undefined **)0x0) {
              if ((long)ppuVar26 <= (long)ppuVar15) {
                ppuVar15 = ppuVar26;
              }
              ppuVar15 = (undefined **)((long)ppuVar15 + (long)ppuVar13);
              goto code_r0x000100e262a4;
            }
          }
          ppuVar15 = (undefined **)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)((long)pppuVar7 + -0x6a) = 0;
            *(undefined8 *)((long)pppuVar7 + -0x70) = 0;
            ppuVar14 = (undefined **)((long)pppuVar7 + -0x70);
            goto code_r0x000100e26260;
          }
          puVar24 = ppuVar13[2];
          ppuVar28 = (undefined **)ppuVar13[3];
          func_0x000107c5ec30();
          ppuVar15 = ppuVar13;
          if (ppuVar13 != (undefined **)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8((long)puVar24,(long)ppuVar15)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            ppuVar13 = (undefined **)((long)ppuVar13 + ((long)puVar24 - (long)ppuVar15));
          }
          ppuVar26 = (undefined **)((long)ppuVar28 - (long)puVar24);
          if (SBORROW8((long)ppuVar28,(long)puVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          ppuVar22 = ppuVar13;
          unaff_x25 = ppuVar14;
          if (ppuVar13 == (undefined **)0x0) {
            ppuVar15 = (undefined **)0x0;
          }
          else {
            if ((long)ppuVar26 <= (long)ppuVar15) {
              ppuVar15 = ppuVar26;
            }
            ppuVar15 = (undefined **)((long)ppuVar15 + (long)ppuVar13);
          }
        }
code_r0x000100e262a4:
        ppuVar23 = (undefined **)((ulong)ppuVar14 & 0x3fffffffffffffff);
        ppuVar25 = (undefined **)0x0;
        func_0x000100e25bdc((undefined1 *)((long)pppuVar7 + -0x70),ppuVar13,ppuVar15,param_3,param_4
                           );
        ppuVar11 = (undefined **)(ulong)*(byte *)((long)pppuVar7 + -0x70);
        ppuVar14 = ppuVar15;
        ppuVar15 = param_4;
      }
      else {
        ppuVar11 = (undefined **)(ulong)(uVar19 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar7 + -0x58)) {
      return ppuVar11;
    }
    func_0x000107c60e78();
    puVar8 = (undefined8 *)((long)pppuVar7 + -0xc0);
    *(undefined ***)((long)pppuVar7 + -0xc0) = ppuVar28;
    *(undefined ***)((long)pppuVar7 + -0xb8) = ppuVar26;
    *(undefined ***)((long)pppuVar7 + -0xb0) = ppuVar15;
    *(undefined ***)((long)pppuVar7 + -0xa8) = ppuVar25;
    *(undefined ***)((long)pppuVar7 + -0xa0) = ppuVar23;
    *(undefined ***)((long)pppuVar7 + -0x98) = ppuVar22;
    *(undefined1 **)((long)pppuVar7 + -0x90) = (undefined1 *)((long)pppuVar7 + -0x10);
    *(undefined **)((long)pppuVar7 + -0x88) = &UNK_100e26304;
    ppuVar13 = (undefined **)*ppuVar11;
    ppuVar26 = (undefined **)ppuVar11[1];
    ppuVar23 = (undefined **)ppuVar11[3];
    bVar30 = *(byte *)(ppuVar11 + 5);
    ppuVar28 = (undefined **)
               ((ulong)*(uint *)((long)ppuVar11 + 0x11) << 8 |
                (ulong)*(uint3 *)((long)ppuVar11 + 0x15) << 0x28 | (ulong)*(byte *)(ppuVar11 + 2));
    ppuVar16 = ppuVar26;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (*(byte *)(ppuVar14 + 5) == 0) {
          puVar24 = *ppuVar14;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(ppuVar13,puVar24,uVar12);
          return (undefined **)(ulong)((uint)ppuVar13 & 1);
        }
        return (undefined **)0x0;
      }
      if (bVar30 == 1) {
        if (*(byte *)(ppuVar14 + 5) != 1) {
          return (undefined **)0x0;
        }
        unaff_x27 = (undefined **)ppuVar14[1];
        unaff_x28 = (undefined **)ppuVar14[2];
        puVar24 = *ppuVar14;
        uVar12 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(ppuVar13,puVar24,uVar12);
        if (((ulong)ppuVar13 & 1) == 0) {
          return (undefined **)0x0;
        }
        ppuVar13 = ppuVar26;
        ppuVar16 = ppuVar28;
        if ((ppuVar26 == unaff_x27) && (ppuVar28 == unaff_x28)) {
          return (undefined **)0x1;
        }
      }
      else {
        if (*(byte *)(ppuVar14 + 5) != 2) {
          return (undefined **)0x0;
        }
        unaff_x27 = (undefined **)*ppuVar14;
        unaff_x28 = (undefined **)ppuVar14[1];
        puVar24 = ppuVar14[3];
        if ((ppuVar13 == unaff_x27) && (ppuVar26 == unaff_x28)) {
          if (((*(byte *)(ppuVar11 + 2) ^ *(byte *)(ppuVar14 + 2)) & 1) != 0) {
            return (undefined **)0x0;
          }
          if (ppuVar23 != (undefined **)0x0) {
            if (puVar24 == (undefined *)0x0) {
              return (undefined **)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(puVar24);
            func_0x000107c61174();
            ppuVar13 = ppuVar23;
            func_0x000107c60118();
            func_0x000107c61170(ppuVar23);
            func_0x000107c61170(puVar24);
            ppuVar23 = ppuVar13;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (puVar24 == (undefined *)0x0) {
            return (undefined **)0x1;
          }
          return (undefined **)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    puVar27 = ppuVar11[4];
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (*(byte *)(ppuVar14 + 5) != 4) {
          return (undefined **)0x0;
        }
        unaff_x27 = (undefined **)*ppuVar14;
        unaff_x28 = (undefined **)ppuVar14[1];
        if (((ppuVar13 == unaff_x27) && (ppuVar26 == unaff_x28)) &&
           (ppuVar13 = ppuVar28, ppuVar16 = ppuVar23, unaff_x27 = (undefined **)ppuVar14[2],
           unaff_x28 = (undefined **)ppuVar14[3],
           ppuVar28 == (undefined **)ppuVar14[2] && ppuVar23 == (undefined **)ppuVar14[3])) {
          return (undefined **)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (*(byte *)(ppuVar14 + 5) != 3) {
        return (undefined **)0x0;
      }
      if ((uint)*(byte *)ppuVar14 != ((uint)ppuVar13 & 0xff)) {
        return (undefined **)0x0;
      }
      unaff_x28 = (undefined **)ppuVar14[2];
      puVar24 = ppuVar14[4];
      if (ppuVar28 == (undefined **)0x0) {
        if (unaff_x28 != (undefined **)0x0) {
          return (undefined **)0x0;
        }
      }
      else {
        if (unaff_x28 == (undefined **)0x0) {
          return (undefined **)0x0;
        }
        unaff_x27 = (undefined **)ppuVar14[1];
        ppuVar13 = ppuVar26;
        ppuVar16 = ppuVar28;
        if ((ppuVar26 != unaff_x27) || (ppuVar28 != unaff_x28)) goto code_r0x000107c605b8;
      }
      if (puVar27 != (undefined *)0x0) {
        if (puVar24 == (undefined *)0x0) {
          return (undefined **)0x0;
        }
        if ((ppuVar23 == (undefined **)ppuVar14[3]) && (puVar27 == puVar24)) {
          return (undefined **)0x1;
        }
        func_0x000107c605b8(ppuVar23,puVar27,ppuVar14[3],puVar24,0);
joined_r0x000100e266a4:
        if (((ulong)ppuVar23 & 1) == 0) {
          return (undefined **)0x0;
        }
        return (undefined **)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar30 != 5) {
      if ((((ppuVar23 == (undefined **)0x0 && ppuVar26 == (undefined **)0x0) &&
           ppuVar13 == (undefined **)0x0) && puVar27 == (undefined *)0x0) &&
          ppuVar28 == (undefined **)0x0) {
        if (*(byte *)(ppuVar14 + 5) != 6) {
          return (undefined **)0x0;
        }
        puVar27 = ppuVar14[4];
        puVar24 = ppuVar14[3];
        bVar30 = *(byte *)(ppuVar14 + 1) | (byte)puVar24;
        bVar31 = *(byte *)((long)ppuVar14 + 9) | (byte)((ulong)puVar24 >> 8);
        bVar32 = *(byte *)((long)ppuVar14 + 10) | (byte)((ulong)puVar24 >> 0x10);
        bVar33 = *(byte *)((long)ppuVar14 + 0xb) | (byte)((ulong)puVar24 >> 0x18);
        bVar34 = *(byte *)((long)ppuVar14 + 0xc) | (byte)((ulong)puVar24 >> 0x20);
        bVar35 = *(byte *)((long)ppuVar14 + 0xd) | (byte)((ulong)puVar24 >> 0x28);
        bVar36 = *(byte *)((long)ppuVar14 + 0xe) | (byte)((ulong)puVar24 >> 0x30);
        bVar37 = *(byte *)((long)ppuVar14 + 0xf) | (byte)((ulong)puVar24 >> 0x38);
        bVar38 = *(byte *)(ppuVar14 + 2) | (byte)puVar27;
        bVar39 = *(byte *)((long)ppuVar14 + 0x11) | (byte)((ulong)puVar27 >> 8);
        bVar40 = *(byte *)((long)ppuVar14 + 0x12) | (byte)((ulong)puVar27 >> 0x10);
        bVar41 = *(byte *)((long)ppuVar14 + 0x13) | (byte)((ulong)puVar27 >> 0x18);
        bVar42 = *(byte *)((long)ppuVar14 + 0x14) | (byte)((ulong)puVar27 >> 0x20);
        bVar43 = *(byte *)((long)ppuVar14 + 0x15) | (byte)((ulong)puVar27 >> 0x28);
        bVar44 = *(byte *)((long)ppuVar14 + 0x16) | (byte)((ulong)puVar27 >> 0x30);
        bVar45 = *(byte *)((long)ppuVar14 + 0x17) | (byte)((ulong)puVar27 >> 0x38);
        auVar46[1] = bVar31;
        auVar46[0] = bVar30;
        auVar46[2] = bVar32;
        auVar46[3] = bVar33;
        auVar46[4] = bVar34;
        auVar46[5] = bVar35;
        auVar46[6] = bVar36;
        auVar46[7] = bVar37;
        auVar46[8] = bVar38;
        auVar46[9] = bVar39;
        auVar46[10] = bVar40;
        auVar46[0xb] = bVar41;
        auVar46[0xc] = bVar42;
        auVar46[0xd] = bVar43;
        auVar46[0xe] = bVar44;
        auVar46[0xf] = bVar45;
        auVar4[1] = bVar31;
        auVar4[0] = bVar30;
        auVar4[2] = bVar32;
        auVar4[3] = bVar33;
        auVar4[4] = bVar34;
        auVar4[5] = bVar35;
        auVar4[6] = bVar36;
        auVar4[7] = bVar37;
        auVar4[8] = bVar38;
        auVar4[9] = bVar39;
        auVar4[10] = bVar40;
        auVar4[0xb] = bVar41;
        auVar4[0xc] = bVar42;
        auVar4[0xd] = bVar43;
        auVar4[0xe] = bVar44;
        auVar4[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar4,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *ppuVar14 == (undefined *)0x0) {
          return (undefined **)0x1;
        }
        return (undefined **)0x0;
      }
      if ((ppuVar13 == (undefined **)0x1) &&
         (((ppuVar23 == (undefined **)0x0 && ppuVar26 == (undefined **)0x0) &&
          ppuVar28 == (undefined **)0x0) && puVar27 == (undefined *)0x0)) {
        if (*(byte *)(ppuVar14 + 5) != 6) {
          return (undefined **)0x0;
        }
        if (*ppuVar14 != (undefined *)0x1) {
          return (undefined **)0x0;
        }
      }
      else {
        if (*(byte *)(ppuVar14 + 5) != 6) {
          return (undefined **)0x0;
        }
        if (*ppuVar14 != (undefined *)0x2) {
          return (undefined **)0x0;
        }
      }
      puVar27 = ppuVar14[4];
      puVar24 = ppuVar14[3];
      bVar30 = *(byte *)(ppuVar14 + 1) | (byte)puVar24;
      bVar31 = *(byte *)((long)ppuVar14 + 9) | (byte)((ulong)puVar24 >> 8);
      bVar32 = *(byte *)((long)ppuVar14 + 10) | (byte)((ulong)puVar24 >> 0x10);
      bVar33 = *(byte *)((long)ppuVar14 + 0xb) | (byte)((ulong)puVar24 >> 0x18);
      bVar34 = *(byte *)((long)ppuVar14 + 0xc) | (byte)((ulong)puVar24 >> 0x20);
      bVar35 = *(byte *)((long)ppuVar14 + 0xd) | (byte)((ulong)puVar24 >> 0x28);
      bVar36 = *(byte *)((long)ppuVar14 + 0xe) | (byte)((ulong)puVar24 >> 0x30);
      bVar37 = *(byte *)((long)ppuVar14 + 0xf) | (byte)((ulong)puVar24 >> 0x38);
      bVar38 = *(byte *)(ppuVar14 + 2) | (byte)puVar27;
      bVar39 = *(byte *)((long)ppuVar14 + 0x11) | (byte)((ulong)puVar27 >> 8);
      bVar40 = *(byte *)((long)ppuVar14 + 0x12) | (byte)((ulong)puVar27 >> 0x10);
      bVar41 = *(byte *)((long)ppuVar14 + 0x13) | (byte)((ulong)puVar27 >> 0x18);
      bVar42 = *(byte *)((long)ppuVar14 + 0x14) | (byte)((ulong)puVar27 >> 0x20);
      bVar43 = *(byte *)((long)ppuVar14 + 0x15) | (byte)((ulong)puVar27 >> 0x28);
      bVar44 = *(byte *)((long)ppuVar14 + 0x16) | (byte)((ulong)puVar27 >> 0x30);
      bVar45 = *(byte *)((long)ppuVar14 + 0x17) | (byte)((ulong)puVar27 >> 0x38);
      auVar2[1] = bVar31;
      auVar2[0] = bVar30;
      auVar2[2] = bVar32;
      auVar2[3] = bVar33;
      auVar2[4] = bVar34;
      auVar2[5] = bVar35;
      auVar2[6] = bVar36;
      auVar2[7] = bVar37;
      auVar2[8] = bVar38;
      auVar2[9] = bVar39;
      auVar2[10] = bVar40;
      auVar2[0xb] = bVar41;
      auVar2[0xc] = bVar42;
      auVar2[0xd] = bVar43;
      auVar2[0xe] = bVar44;
      auVar2[0xf] = bVar45;
      auVar3[1] = bVar31;
      auVar3[0] = bVar30;
      auVar3[2] = bVar32;
      auVar3[3] = bVar33;
      auVar3[4] = bVar34;
      auVar3[5] = bVar35;
      auVar3[6] = bVar36;
      auVar3[7] = bVar37;
      auVar3[8] = bVar38;
      auVar3[9] = bVar39;
      auVar3[10] = bVar40;
      auVar3[0xb] = bVar41;
      auVar3[0xc] = bVar42;
      auVar3[0xd] = bVar43;
      auVar3[0xe] = bVar44;
      auVar3[0xf] = bVar45;
      auVar46 = NEON_ext(auVar2,auVar3,8,1);
      puVar24 = (undefined *)
                CONCAT17(bVar37 | auVar46[7],
                         CONCAT16(bVar36 | auVar46[6],
                                  CONCAT15(bVar35 | auVar46[5],
                                           CONCAT14(bVar34 | auVar46[4],
                                                    CONCAT13(bVar33 | auVar46[3],
                                                             CONCAT12(bVar32 | auVar46[2],
                                                                      CONCAT11(bVar31 | auVar46[1],
                                                                               bVar30 | auVar46[0]))
                                                            )))));
      goto joined_r0x000100e26620;
    }
    if (*(byte *)(ppuVar14 + 5) != 5) {
      return (undefined **)0x0;
    }
    param_3 = (undefined **)ppuVar14[1];
    param_4 = (undefined **)ppuVar14[2];
    puVar24 = *ppuVar14;
    uVar12 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(ppuVar13,puVar24,uVar12);
    if (((ulong)ppuVar13 & 1) == 0) {
      return (undefined **)0x0;
    }
    puVar29 = *(undefined1 **)((long)pppuVar7 + -0x90);
    unaff_x30 = *(undefined8 *)((long)pppuVar7 + -0x88);
    ppuVar23 = *(undefined ***)((long)pppuVar7 + -0xa0);
    ppuVar22 = *(undefined ***)((long)pppuVar7 + -0x98);
    ppuVar15 = *(undefined ***)((long)pppuVar7 + -0xb0);
    ppuVar25 = *(undefined ***)((long)pppuVar7 + -0xa8);
    puVar1 = (undefined8 *)((long)pppuVar7 + -0xb8);
    pppuVar7 = (undefined ***)((long)pppuVar7 + -0x80);
    ppuVar13 = ppuVar26;
    ppuVar14 = ppuVar28;
    ppuVar26 = (undefined **)*puVar1;
    ppuVar28 = (undefined **)*puVar8;
  } while( true );
}



/* Entry: 1027feaa0; end: 1027feb9f;  */

void FUN_1027feaa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec28f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dae3078;
  func_0x000107c61520(&DAT_10dae3078,&UNK_110552dc0);
  puRam0000000112ec28f8 = puVar1;
  return;
}



/* Entry: 1027feba0; end: 1027ff057;  */

uint FUN_1027feba0(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_3f0 [64];
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  ulong uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  ulong uStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  ulong uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  ulong uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_1;
  lVar5 = *param_2;
  lVar7 = *(long *)(lVar6 + 0x10);
  if (lVar7 == *(long *)(lVar5 + 0x10)) {
    if (lVar7 != 0 && lVar6 != lVar5) {
      puVar8 = (undefined8 *)(lVar6 + 0x20);
      puVar9 = (undefined8 *)(lVar5 + 0x20);
      do {
        uStack_188 = puVar8[1];
        uStack_190 = *puVar8;
        uStack_178 = puVar8[3];
        uStack_180 = puVar8[2];
        uStack_168 = puVar8[5];
        uStack_170 = puVar8[4];
        uStack_158 = puVar8[7];
        uStack_160 = puVar8[6];
        uStack_148 = puVar8[9];
        uStack_150 = puVar8[8];
        uStack_138 = puVar8[0xb];
        uStack_140 = puVar8[10];
        uStack_128 = puVar8[0xd];
        uStack_130 = puVar8[0xc];
        uStack_118 = puVar8[0xf];
        uStack_120 = puVar8[0xe];
        uStack_108 = puVar8[0x11];
        uStack_110 = puVar8[0x10];
        uStack_f8 = puVar8[0x13];
        uStack_100 = puVar8[0x12];
        uStack_e8 = puVar9[1];
        uStack_f0 = *puVar9;
        uStack_d8 = puVar9[3];
        uStack_e0 = puVar9[2];
        uStack_c8 = puVar9[5];
        uStack_d0 = puVar9[4];
        uStack_b8 = puVar9[7];
        uStack_c0 = puVar9[6];
        uStack_a8 = puVar9[9];
        uStack_b0 = puVar9[8];
        uStack_98 = puVar9[0xb];
        uStack_a0 = puVar9[10];
        uStack_88 = puVar9[0xd];
        uStack_90 = puVar9[0xc];
        uStack_78 = puVar9[0xf];
        uStack_80 = puVar9[0xe];
        uStack_68 = puVar9[0x11];
        uStack_70 = puVar9[0x10];
        uStack_58 = puVar9[0x13];
        uStack_60 = puVar9[0x12];
        FUN_1027f894c(&uStack_190,&lStack_2f0);
        FUN_1027f894c(&uStack_f0,&lStack_2f0);
        puVar2 = &uStack_190;
        FUN_102812cc4(puVar2,&uStack_f0);
        func_0x0001027f89bc(&uStack_f0);
        func_0x0001027f89bc(&uStack_190);
        if (((ulong)puVar2 & 1) == 0) goto LAB_1027ff028;
        puVar9 = puVar9 + 0x14;
        puVar8 = puVar8 + 0x14;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar3 = param_1[1];
    if ((uVar3 == param_2[1] && param_1[2] == param_2[2]) ||
       (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
      uVar3 = param_1[3];
      if (((uVar3 == param_2[3]) && (param_1[4] == param_2[4])) ||
         (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
        uVar3 = param_1[5];
        if (((uVar3 == param_2[5]) && (param_1[6] == param_2[6])) ||
           (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
          uVar3 = param_1[7];
          if ((((uVar3 == param_2[7]) && (param_1[8] == param_2[8])) ||
              (func_0x000107c605b8(), (uVar3 & 1) != 0)) && ((int)param_1[9] == (int)param_2[9])) {
            uVar3 = param_1[10];
            if (((uVar3 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
               (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
              uVar3 = param_1[0xc];
              if (((uVar3 == param_2[0xc]) && (param_1[0xd] == param_2[0xd])) ||
                 (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
                uVar3 = param_1[0xe];
                FUN_1027fe334(uVar3,param_2[0xe]);
                if ((uVar3 & 1) != 0) {
                  lVar7 = param_1[0xf];
                  lVar5 = param_2[0xf];
                  if ((char)param_2[0x10] == '\x01') {
                    if (lVar5 < 2) {
                      if (lVar5 == 0) {
                        if (lVar7 == 0) {
LAB_1027fedb0:
                          lStack_208 = param_1[0x16];
                          lStack_210 = param_1[0x15];
                          lStack_1f8 = param_1[0x18];
                          lStack_200 = param_1[0x17];
                          lStack_1e8 = param_1[0x1a];
                          lStack_1f0 = param_1[0x19];
                          lStack_1d8 = param_1[0x1c];
                          lStack_1e0 = param_1[0x1b];
                          lStack_248 = param_2[0x16];
                          lStack_250 = param_2[0x15];
                          lStack_238 = param_2[0x18];
                          lStack_240 = param_2[0x17];
                          lStack_228 = param_2[0x1a];
                          lStack_230 = param_2[0x19];
                          lStack_218 = param_2[0x1c];
                          lStack_220 = param_2[0x1b];
                          uStack_2e8 = param_1[0x16];
                          lStack_2f0 = param_1[0x15];
                          lStack_2d8 = param_1[0x18];
                          lStack_2e0 = param_1[0x17];
                          lStack_2c8 = param_1[0x1a];
                          lStack_2d0 = param_1[0x19];
                          lStack_2b8 = param_1[0x1c];
                          lStack_2c0 = param_1[0x1b];
                          uStack_328 = param_2[0x16];
                          lStack_330 = param_2[0x15];
                          lStack_318 = param_2[0x18];
                          lStack_320 = param_2[0x17];
                          lStack_308 = param_2[0x1a];
                          lStack_310 = param_2[0x19];
                          lStack_2f8 = param_2[0x1c];
                          lStack_300 = param_2[0x1b];
                          lStack_2b0 = lStack_330;
                          uStack_2a8 = uStack_328;
                          lStack_2a0 = lStack_320;
                          lStack_298 = lStack_318;
                          lStack_290 = lStack_310;
                          lStack_288 = lStack_308;
                          lStack_280 = lStack_300;
                          lStack_278 = lStack_2f8;
                          if (uStack_2e8 >> 0x3c < 0xf) {
                            if (0xe < uStack_328 >> 0x3c) goto LAB_1027feeb0;
                            lStack_3a8 = param_2[0x16];
                            lStack_3b0 = param_2[0x15];
                            lStack_398 = param_2[0x18];
                            lStack_3a0 = param_2[0x17];
                            lStack_388 = param_2[0x1a];
                            lStack_390 = param_2[0x19];
                            lStack_378 = param_2[0x1c];
                            lStack_380 = param_2[0x1b];
                            lStack_1c8 = param_1[0x16];
                            lStack_1d0 = param_1[0x15];
                            lStack_1b8 = param_1[0x18];
                            lStack_1c0 = param_1[0x17];
                            lStack_1a8 = param_1[0x1a];
                            lStack_1b0 = param_1[0x19];
                            lStack_198 = param_1[0x1c];
                            lStack_1a0 = param_1[0x1b];
                            lStack_370 = lStack_3b0;
                            uStack_368 = lStack_3a8;
                            lStack_360 = lStack_3a0;
                            lStack_358 = lStack_398;
                            lStack_350 = lStack_390;
                            lStack_348 = lStack_388;
                            lStack_340 = lStack_380;
                            lStack_338 = lStack_378;
                            FUN_1027fe6d8(&lStack_210,auStack_3f0,0x112ec28b0,&UNK_10dae0c38);
                            FUN_1027fe6d8(&lStack_250,auStack_3f0,0x112ec28b0,&UNK_10dae0c38);
                            plVar4 = &lStack_1d0;
                            FUN_102816638(plVar4,&lStack_370);
                            FUN_102802e10(&lStack_3b0,0x112ec28b0,&UNK_10dae0c38);
                            FUN_102802e10(&lStack_2f0,0x112ec28b0,&UNK_10dae0c38);
                            if (((ulong)plVar4 & 1) != 0) goto LAB_1027fefe0;
                          }
                          else if (uStack_328 >> 0x3c < 0xf) {
LAB_1027feeb0:
                            lStack_370 = lStack_2f0;
                            uStack_368 = uStack_2e8;
                            lStack_360 = lStack_2e0;
                            lStack_358 = lStack_2d8;
                            lStack_350 = lStack_2d0;
                            lStack_348 = lStack_2c8;
                            lStack_340 = lStack_2c0;
                            lStack_338 = lStack_2b8;
                            FUN_1027fe6d8(&lStack_210,&lStack_1d0,0x112ec28b0,&UNK_10dae0c38);
                            FUN_1027fe6d8(&lStack_250,&lStack_1d0,0x112ec28b0,&UNK_10dae0c38);
                            FUN_102802e10(&lStack_370,0x112ec28b8,&UNK_10dae0c40);
                          }
                          else {
                            uStack_368 = param_1[0x16];
                            lStack_370 = param_1[0x15];
                            lStack_358 = param_1[0x18];
                            lStack_360 = param_1[0x17];
                            lStack_348 = param_1[0x1a];
                            lStack_350 = param_1[0x19];
                            lStack_338 = param_1[0x1c];
                            lStack_340 = param_1[0x1b];
                            FUN_1027fe6d8(&lStack_210,&lStack_1d0,0x112ec28b0,&UNK_10dae0c38);
                            FUN_1027fe6d8(&lStack_250,&lStack_1d0,0x112ec28b0,&UNK_10dae0c38);
                            FUN_102802e10(&lStack_370,0x112ec28b0,&UNK_10dae0c38);
LAB_1027fefe0:
                            lVar7 = param_1[0x11];
                            lVar5 = param_2[0x11];
                            if ((char)param_2[0x12] == '\x01') {
                              if (lVar5 == 0) {
                                if (lVar7 == 0) goto LAB_1027ff014;
                              }
                              else if (lVar5 == 1) {
                                if (lVar7 == 1) {
LAB_1027ff014:
                                  lVar7 = param_1[0x13];
                                  func_0x000100e25fcc(lVar7,param_1[0x14],param_2[0x13],
                                                      param_2[0x14]);
                                  uVar1 = (uint)lVar7;
                                  goto LAB_1027ff02c;
                                }
                              }
                              else if (lVar7 == 2) goto LAB_1027ff014;
                            }
                            else if (lVar7 == lVar5) goto LAB_1027ff014;
                          }
                        }
                      }
                      else if (lVar7 == 1) goto LAB_1027fedb0;
                    }
                    else if (lVar5 == 2) {
                      if (lVar7 == 2) goto LAB_1027fedb0;
                    }
                    else if (lVar7 == 3) goto LAB_1027fedb0;
                  }
                  else if (lVar7 == lVar5) goto LAB_1027fedb0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1027ff028:
  uVar1 = 0;
LAB_1027ff02c:
  return uVar1 & 1;
}



/* Entry: 1027ff058; end: 1027ff117;  */

void FUN_1027ff058(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae0f48;
  func_0x000107c61520(&UNK_10dae0f48,&UNK_110551188);
  puRam0000000112ec2918 = puVar1;
  return;
}



/* Entry: 1027ff118; end: 102800063;  */

uint FUN_1027ff118(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uStack_b20;
  ulong uStack_b18;
  ulong uStack_b10;
  ulong uStack_b08;
  ulong uStack_b00;
  ulong uStack_af8;
  ulong uStack_aa0;
  ulong uStack_a98;
  ulong uStack_a90;
  ulong uStack_a88;
  ulong uStack_a80;
  ulong uStack_a78;
  ulong uStack_a70;
  ulong uStack_a68;
  ulong uStack_a60;
  ulong uStack_a58;
  ulong uStack_a50;
  ulong uStack_a48;
  ulong uStack_a40;
  ulong uStack_a38;
  ulong uStack_a30;
  long lStack_a28;
  ulong uStack_a20;
  ulong uStack_a18;
  ulong uStack_a10;
  ulong uStack_a08;
  ulong uStack_a00;
  ulong uStack_9f8;
  ulong uStack_9f0;
  ulong uStack_9e8;
  ulong uStack_9e0;
  ulong uStack_9d8;
  ulong uStack_9d0;
  ulong uStack_9c8;
  ulong uStack_9c0;
  ulong uStack_9b8;
  ulong uStack_9b0;
  long lStack_9a8;
  ulong uStack_9a0;
  ulong uStack_998;
  ulong uStack_990;
  ulong uStack_988;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  ulong uStack_958;
  ulong uStack_950;
  ulong uStack_948;
  ulong uStack_940;
  ulong uStack_938;
  ulong uStack_930;
  long lStack_928;
  ulong uStack_920;
  ulong uStack_918;
  ulong uStack_910;
  ulong uStack_908;
  ulong uStack_900;
  ulong uStack_8f8;
  ulong uStack_8f0;
  ulong uStack_8e8;
  ulong uStack_8e0;
  ulong uStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  undefined8 uStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  undefined8 uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  undefined8 uStack_7a8;
  undefined1 auStack_7a0 [48];
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  undefined1 uStack_6f8;
  undefined7 uStack_6f7;
  undefined1 uStack_6f0;
  undefined7 uStack_6ef;
  char cStack_6e8;
  undefined7 uStack_6e7;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  long lStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  undefined1 uStack_5f8;
  undefined7 uStack_5f7;
  undefined1 uStack_5f0;
  undefined7 uStack_5ef;
  char cStack_5e8;
  undefined7 uStack_5e7;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  long lStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  undefined1 uStack_3d0;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  undefined1 uStack_380;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined1 uStack_2b0;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined1 uStack_260;
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
  
  lVar11 = *param_1;
  lVar10 = *param_2;
  lVar12 = *(long *)(lVar11 + 0x10);
  if (lVar12 == *(long *)(lVar10 + 0x10)) {
    if (lVar12 != 0 && lVar11 != lVar10) {
      puVar13 = (undefined8 *)(lVar11 + 0x20);
      puVar14 = (undefined8 *)(lVar10 + 0x20);
      do {
        uStack_248 = puVar13[1];
        uStack_250 = *puVar13;
        uStack_238 = puVar13[3];
        uStack_240 = puVar13[2];
        uStack_228 = puVar13[5];
        uStack_230 = puVar13[4];
        uStack_218 = puVar13[7];
        uStack_220 = puVar13[6];
        uStack_208 = puVar13[9];
        uStack_210 = puVar13[8];
        uStack_1f8 = puVar13[0xb];
        uStack_200 = puVar13[10];
        uStack_1e8 = puVar13[0xd];
        uStack_1f0 = puVar13[0xc];
        uStack_1d8 = puVar13[0xf];
        uStack_1e0 = puVar13[0xe];
        uStack_1c8 = puVar13[0x11];
        uStack_1d0 = puVar13[0x10];
        uStack_1b8 = puVar13[0x13];
        uStack_1c0 = puVar13[0x12];
        uStack_1a8 = puVar13[0x15];
        uStack_1b0 = puVar13[0x14];
        uStack_198 = puVar13[0x17];
        uStack_1a0 = puVar13[0x16];
        uStack_188 = puVar13[0x19];
        uStack_190 = puVar13[0x18];
        uStack_178 = puVar13[0x1b];
        uStack_180 = puVar13[0x1a];
        uStack_170 = puVar13[0x1c];
        uStack_158 = puVar14[1];
        uStack_160 = *puVar14;
        uStack_148 = puVar14[3];
        uStack_150 = puVar14[2];
        uStack_138 = puVar14[5];
        uStack_140 = puVar14[4];
        uStack_128 = puVar14[7];
        uStack_130 = puVar14[6];
        uStack_118 = puVar14[9];
        uStack_120 = puVar14[8];
        uStack_108 = puVar14[0xb];
        uStack_110 = puVar14[10];
        uStack_f8 = puVar14[0xd];
        uStack_100 = puVar14[0xc];
        uStack_e8 = puVar14[0xf];
        uStack_f0 = puVar14[0xe];
        uStack_d8 = puVar14[0x11];
        uStack_e0 = puVar14[0x10];
        uStack_c8 = puVar14[0x13];
        uStack_d0 = puVar14[0x12];
        uStack_b8 = puVar14[0x15];
        uStack_c0 = puVar14[0x14];
        uStack_a8 = puVar14[0x17];
        uStack_b0 = puVar14[0x16];
        uStack_98 = puVar14[0x19];
        uStack_a0 = puVar14[0x18];
        uStack_88 = puVar14[0x1b];
        uStack_90 = puVar14[0x1a];
        uStack_80 = puVar14[0x1c];
        FUN_1028027b0(&uStack_250,&uStack_670);
        FUN_1028027b0(&uStack_160,&uStack_670);
        puVar4 = &uStack_250;
        FUN_1027feba0(puVar4,&uStack_160);
        func_0x0001028027e4(&uStack_160);
        func_0x0001028027e4(&uStack_250);
        if (((ulong)puVar4 & 1) == 0) goto LAB_1027ff8a8;
        puVar14 = puVar14 + 0x1d;
        puVar13 = puVar13 + 0x1d;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    lStack_3a8 = param_1[4];
    lStack_3b0 = param_1[3];
    lStack_398 = param_1[6];
    lStack_3a0 = param_1[5];
    lStack_388 = param_1[8];
    lStack_390 = param_1[7];
    uStack_380 = (undefined1)param_1[9];
    lStack_3b8 = param_1[2];
    lStack_3c0 = param_1[1];
    lStack_3f8 = param_2[4];
    lStack_400 = param_2[3];
    lStack_3e8 = param_2[6];
    lStack_3f0 = param_2[5];
    lStack_3d8 = param_2[8];
    lStack_3e0 = param_2[7];
    uStack_3d0 = (undefined1)param_2[9];
    lStack_408 = param_2[2];
    lStack_410 = param_2[1];
    uStack_658 = param_1[4];
    uStack_660 = param_1[3];
    uStack_648 = param_1[6];
    uStack_650 = param_1[5];
    uStack_638 = param_1[8];
    uStack_640 = param_1[7];
    uStack_630 = CONCAT71(uStack_630._1_7_,(char)param_1[9]);
    uStack_668 = param_1[2];
    uStack_670 = param_1[1];
    uStack_610 = param_2[4];
    uStack_618 = param_2[3];
    uStack_600 = param_2[6];
    uStack_608 = param_2[5];
    uVar6 = param_2[8];
    uStack_5f0 = (undefined1)uVar6;
    uStack_5ef = (undefined7)(uVar6 >> 8);
    uStack_5f8 = (undefined1)param_2[7];
    uStack_5f7 = (undefined7)((ulong)param_2[7] >> 8);
    cStack_5e8 = (char)param_2[9];
    uStack_620 = param_2[2];
    uStack_628 = param_2[1];
    bVar1 = ((uVar6 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
    if ((((uStack_638 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && ((char)param_1[9] == -1))
    {
      if (bVar1 || cStack_5e8 != -1) {
LAB_1027ff3c8:
        uStack_6ef = uStack_5ef;
        uStack_6f7 = uStack_5f7;
        uStack_6f0 = uStack_5f0;
        uStack_730 = uStack_630;
        uStack_770 = uStack_670;
        uStack_768 = uStack_668;
        uStack_760 = uStack_660;
        uStack_758 = uStack_658;
        uStack_750 = uStack_650;
        uStack_748 = uStack_648;
        uStack_740 = uStack_640;
        uStack_738 = uStack_638;
        uStack_728 = uStack_628;
        uStack_720 = uStack_620;
        uStack_718 = uStack_618;
        uStack_710 = uStack_610;
        uStack_708 = uStack_608;
        uStack_700 = uStack_600;
        uStack_6f8 = uStack_5f8;
        cStack_6e8 = cStack_5e8;
        FUN_1027fe6d8(&lStack_3c0,&uStack_370,0x112ec28c0,&UNK_10dae0c48);
        FUN_1027fe6d8(&lStack_410,&uStack_370,0x112ec28c0,&UNK_10dae0c48);
        uVar8 = 0x112ec29d0;
        puVar9 = &UNK_10dae11a8;
LAB_1027ff8a0:
        puVar7 = &uStack_770;
      }
      else {
        uStack_758 = param_1[4];
        uStack_760 = param_1[3];
        uStack_748 = param_1[6];
        uStack_750 = param_1[5];
        uStack_738 = param_1[8];
        uStack_740 = param_1[7];
        uStack_730 = CONCAT71(uStack_730._1_7_,(char)param_1[9]);
        uStack_768 = param_1[2];
        uStack_770 = param_1[1];
        FUN_1027fe6d8(&lStack_3c0,&uStack_370,0x112ec28c0,&UNK_10dae0c48);
        FUN_1027fe6d8(&lStack_410,&uStack_370,0x112ec28c0,&UNK_10dae0c48);
        FUN_102802e10(&uStack_770,0x112ec28c0,&UNK_10dae0c48);
LAB_1027ff528:
        uStack_628 = param_1[0x13];
        uStack_630 = param_1[0x12];
        lStack_438 = param_1[0x15];
        lStack_440 = param_1[0x14];
        uStack_638 = param_1[0x11];
        uStack_640 = param_1[0x10];
        lStack_448 = param_1[0x13];
        lStack_450 = param_1[0x12];
        uStack_618 = param_1[0x15];
        uStack_620 = param_1[0x14];
        lStack_428 = param_1[0x17];
        lStack_430 = param_1[0x16];
        uStack_608 = param_1[0x17];
        uStack_610 = param_1[0x16];
        lStack_418 = param_1[0x19];
        lStack_420 = param_1[0x18];
        lStack_488 = param_1[0xb];
        lStack_490 = param_1[10];
        lStack_478 = param_1[0xd];
        lStack_480 = param_1[0xc];
        lStack_468 = param_1[0xf];
        lStack_470 = param_1[0xe];
        lStack_458 = param_1[0x11];
        lStack_460 = param_1[0x10];
        uStack_668 = param_1[0xb];
        uStack_670 = param_1[10];
        uStack_658 = param_1[0xd];
        uStack_660 = param_1[0xc];
        uStack_648 = param_1[0xf];
        uStack_650 = param_1[0xe];
        lStack_508 = param_2[0xb];
        lStack_510 = param_2[10];
        uStack_5d8 = param_2[0xd];
        uStack_5e0 = param_2[0xc];
        lStack_4e8 = param_2[0xf];
        lStack_4f0 = param_2[0xe];
        lStack_4d8 = param_2[0x11];
        lStack_4e0 = param_2[0x10];
        lStack_4f8 = param_2[0xd];
        lStack_500 = param_2[0xc];
        uStack_5c8 = param_2[0xf];
        uStack_5d0 = param_2[0xe];
        uStack_598 = param_2[0x15];
        uStack_5a0 = param_2[0x14];
        lStack_4a8 = param_2[0x17];
        lStack_4b0 = param_2[0x16];
        uStack_588 = param_2[0x17];
        uStack_590 = param_2[0x16];
        lStack_498 = param_2[0x19];
        lStack_4a0 = param_2[0x18];
        uStack_5b8 = param_2[0x11];
        uStack_5c0 = param_2[0x10];
        lStack_4c8 = param_2[0x13];
        lStack_4d0 = param_2[0x12];
        uStack_5a8 = param_2[0x13];
        uStack_5b0 = param_2[0x12];
        lStack_4b8 = param_2[0x15];
        lStack_4c0 = param_2[0x14];
        uStack_600 = param_1[0x18];
        uStack_5f8 = (undefined1)param_1[0x19];
        uStack_5f7 = (undefined7)((ulong)param_1[0x19] >> 8);
        cStack_5e8 = (char)param_2[0xb];
        uStack_5e7 = (undefined7)((ulong)param_2[0xb] >> 8);
        uStack_5f0 = (undefined1)param_2[10];
        uStack_5ef = (undefined7)((ulong)param_2[10] >> 8);
        lStack_578 = param_2[0x19];
        uStack_580 = param_2[0x18];
        iVar2 = (int)&uStack_670;
        func_0x0001027fe598();
        if (iVar2 == 1) {
          iVar2 = (int)&uStack_5f0;
          func_0x0001027fe598();
          if (iVar2 == 1) {
            uStack_728 = uStack_628;
            uStack_730 = uStack_630;
            uStack_718 = uStack_618;
            uStack_720 = uStack_620;
            uStack_708 = uStack_608;
            uStack_710 = uStack_610;
            uStack_6f8 = uStack_5f8;
            uStack_6f7 = uStack_5f7;
            uStack_700 = uStack_600;
            uStack_768 = uStack_668;
            uStack_770 = uStack_670;
            uStack_758 = uStack_658;
            uStack_760 = uStack_660;
            uStack_748 = uStack_648;
            uStack_750 = uStack_650;
            uStack_738 = uStack_638;
            uStack_740 = uStack_640;
            FUN_1027fe6d8(&lStack_490,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
            FUN_1027fe6d8(&lStack_510,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
            puVar7 = &uStack_770;
LAB_1027ff694:
            FUN_102802e10(puVar7,0x112ec28c8,&UNK_10dae0c50);
LAB_1027ff698:
            uVar6 = param_1[0x1a];
            FUN_1027fe214(uVar6,param_2[0x1a]);
            if ((uVar6 & 1) != 0) {
              uVar20 = param_1[0x1e];
              uVar16 = param_1[0x1d];
              uVar26 = param_1[0x20];
              uVar24 = param_1[0x1f];
              uVar21 = param_1[0x22];
              uVar17 = param_1[0x21];
              uVar6 = param_1[0x23];
              uVar22 = param_2[0x1e];
              uVar18 = param_2[0x1d];
              uVar27 = param_2[0x20];
              uVar25 = param_2[0x1f];
              uVar23 = param_2[0x22];
              uVar19 = param_2[0x21];
              uVar15 = param_2[0x23];
              uStack_920 = uVar18;
              uStack_918 = uVar22;
              uStack_910 = uVar25;
              uStack_908 = uVar27;
              uStack_900 = uVar19;
              uStack_8f8 = uVar23;
              uStack_8f0 = uVar15;
              uStack_8a0 = uVar16;
              uStack_898 = uVar20;
              uStack_890 = uVar24;
              uStack_888 = uVar26;
              uStack_880 = uVar17;
              uStack_878 = uVar21;
              uStack_870 = uVar6;
              if (uVar6 >> 0x3c < 0xf) {
                if (uVar15 >> 0x3c < 0xf) {
                  uStack_820 = uVar16;
                  uStack_818 = uVar20;
                  uStack_810 = uVar24;
                  uStack_808 = uVar26;
                  uStack_800 = uVar17;
                  uStack_7f8 = uVar21;
                  uStack_7f0 = uVar6;
                  uStack_670 = uVar18;
                  uStack_668 = uVar22;
                  uStack_660 = uVar25;
                  uStack_658 = uVar27;
                  uStack_650 = uVar19;
                  uStack_648 = uVar23;
                  uStack_640 = uVar15;
                  FUN_1027fe6d8(&uStack_8a0,&uStack_9a0,0x112ec28d0,&UNK_10dae0c58);
                  FUN_1027fe6d8(&uStack_920,&uStack_9a0,0x112ec28d0,&UNK_10dae0c58);
                  puVar7 = &uStack_820;
                  FUN_102803e1c(puVar7,&uStack_670);
                  func_0x0001016164a8(uVar18,uVar22,uVar25,uVar27,uVar19,uVar23,uVar15);
                  func_0x0001016164a8(uVar16,uVar20,uVar24,uVar26,uVar17,uVar21,uVar6);
                  if (((ulong)puVar7 & 1) != 0) goto LAB_1027ffd6c;
                  goto LAB_1027ff8a8;
                }
              }
              else if (0xe < uVar15 >> 0x3c) {
                FUN_1027fe6d8(&uStack_8a0,&uStack_670,0x112ec28d0,&UNK_10dae0c58);
                FUN_1027fe6d8(&uStack_920,&uStack_670,0x112ec28d0,&UNK_10dae0c58);
                func_0x0001016164a8(uVar16,uVar20,uVar24,uVar26,uVar17,uVar21,uVar6);
LAB_1027ffd6c:
                uVar18 = param_1[0x25];
                uVar6 = param_1[0x24];
                uVar24 = param_1[0x27];
                uVar22 = param_1[0x26];
                uVar19 = param_1[0x29];
                uVar15 = param_1[0x28];
                uVar20 = param_2[0x25];
                uVar16 = param_2[0x24];
                uVar25 = param_2[0x27];
                uVar23 = param_2[0x26];
                uVar21 = param_2[0x29];
                uVar17 = param_2[0x28];
                uStack_570 = uVar16;
                uStack_568 = uVar20;
                uStack_560 = uVar23;
                uStack_558 = uVar25;
                uStack_550 = uVar17;
                uStack_548 = uVar21;
                uStack_540 = uVar6;
                uStack_538 = uVar18;
                uStack_530 = uVar22;
                uStack_528 = uVar24;
                uStack_520 = uVar15;
                uStack_518 = uVar19;
                if ((uVar6 & 0xff) == 2) {
                  if ((uVar16 & 0xff) != 2) {
LAB_1027ffed8:
                    FUN_1027fe6d8(&uStack_540,&uStack_9a0,0x112ec28d8,&UNK_10dae0c60);
                    FUN_1027fe6d8(&uStack_570,&uStack_9a0,0x112ec28d8,&UNK_10dae0c60);
                    FUN_1027fe674(uVar6,uVar18,uVar22,uVar24,uVar15,uVar19,&SUB_10006c090,
                                  &SUB_101553ccc);
                    FUN_1027fe674(uVar16,uVar20,uVar23,uVar25,uVar17,uVar21,&SUB_10006c090,
                                  &SUB_101553ccc);
                    goto LAB_1027ff8a8;
                  }
                  FUN_1027fe6d8(&uStack_540,&uStack_9a0,0x112ec28d8,&UNK_10dae0c60);
                  FUN_1027fe6d8(&uStack_570,&uStack_9a0,0x112ec28d8,&UNK_10dae0c60);
                  FUN_1027fe674(uVar6,uVar18,uVar22,uVar24,uVar15,uVar19,&SUB_10006c090,
                                &SUB_101553ccc);
                }
                else {
                  if ((uVar16 & 0xff) == 2) goto LAB_1027ffed8;
                  uStack_9a0 = CONCAT71(uStack_9a0._1_7_,(char)uVar16) & 0xffffffffffffff01;
                  uStack_a20 = CONCAT71(uStack_a20._1_7_,(char)uVar6) & 0xffffffffffffff01;
                  uStack_a18 = uVar18;
                  uStack_a10 = uVar22;
                  uStack_a08 = uVar24;
                  uStack_a00 = uVar15;
                  uStack_9f8 = uVar19;
                  uStack_998 = uVar20;
                  uStack_990 = uVar23;
                  uStack_988 = uVar25;
                  uStack_980 = uVar17;
                  uStack_978 = uVar21;
                  FUN_1027fe6d8(&uStack_540,auStack_7a0,0x112ec28d8,&UNK_10dae0c60);
                  FUN_1027fe6d8(&uStack_570,auStack_7a0,0x112ec28d8,&UNK_10dae0c60);
                  puVar7 = &uStack_a20;
                  FUN_1028053e0(puVar7,&uStack_9a0);
                  FUN_1027fe674(uVar16,uVar20,uVar23,uVar25,uVar17,uVar21,&SUB_10006c090,
                                &SUB_101553ccc);
                  FUN_1027fe674(uVar6,uVar18,uVar22,uVar24,uVar15,uVar19,&SUB_10006c090,
                                &SUB_101553ccc);
                  if (((ulong)puVar7 & 1) == 0) goto LAB_1027ff8a8;
                }
                lVar12 = param_1[0x1b];
                func_0x000100e25fcc(lVar12,param_1[0x1c],param_2[0x1b],param_2[0x1c]);
                uVar3 = (uint)lVar12;
                goto LAB_1027ff8ac;
              }
              FUN_1027fe6d8(&uStack_8a0,&uStack_670,0x112ec28d0,&UNK_10dae0c58);
              FUN_1027fe6d8(&uStack_920,&uStack_670,0x112ec28d0,&UNK_10dae0c58);
              func_0x0001016164a8(uVar16,uVar20,uVar24,uVar26,uVar17,uVar21,uVar6);
              func_0x0001016164a8(uVar18,uVar22,uVar25,uVar27,uVar19,uVar23,uVar15);
            }
            goto LAB_1027ff8a8;
          }
LAB_1027ff7dc:
          uStack_6a8 = uStack_5a8;
          uStack_6b0 = uStack_5b0;
          uStack_698 = uStack_598;
          uStack_6a0 = uStack_5a0;
          uStack_688 = uStack_588;
          uStack_690 = uStack_590;
          lStack_678 = lStack_578;
          uStack_680 = uStack_580;
          cStack_6e8 = cStack_5e8;
          uStack_6e7 = uStack_5e7;
          uStack_6f0 = uStack_5f0;
          uStack_6ef = uStack_5ef;
          uStack_6d8 = uStack_5d8;
          uStack_6e0 = uStack_5e0;
          uStack_6c8 = uStack_5c8;
          uStack_6d0 = uStack_5d0;
          uStack_6b8 = uStack_5b8;
          uStack_6c0 = uStack_5c0;
          uStack_728 = uStack_628;
          uStack_730 = uStack_630;
          uStack_718 = uStack_618;
          uStack_720 = uStack_620;
          uStack_708 = uStack_608;
          uStack_710 = uStack_610;
          uStack_6f8 = uStack_5f8;
          uStack_6f7 = uStack_5f7;
          uStack_700 = uStack_600;
          uStack_768 = uStack_668;
          uStack_770 = uStack_670;
          uStack_758 = uStack_658;
          uStack_760 = uStack_660;
          uStack_748 = uStack_648;
          uStack_750 = uStack_650;
          uStack_738 = uStack_638;
          uStack_740 = uStack_640;
          FUN_1027fe6d8(&lStack_490,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
          FUN_1027fe6d8(&lStack_510,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
          uVar8 = 0x112ec29d8;
          puVar9 = &UNK_10dae11b0;
          goto LAB_1027ff8a0;
        }
        uStack_7d8 = uStack_628;
        uStack_7e0 = uStack_630;
        uStack_7c8 = uStack_618;
        uStack_7d0 = uStack_620;
        uStack_7a8 = CONCAT71(uStack_5f7,uStack_5f8);
        uStack_7b8 = uStack_608;
        uStack_7c0 = uStack_610;
        uStack_7b0 = uStack_600;
        uStack_818 = uStack_668;
        uStack_820 = uStack_670;
        uStack_808 = uStack_658;
        uStack_810 = uStack_660;
        uStack_7f8 = uStack_648;
        uStack_800 = uStack_650;
        uStack_7e8 = uStack_638;
        uStack_7f0 = uStack_640;
        iVar2 = (int)&uStack_5f0;
        func_0x0001027fe598();
        if (iVar2 == 1) goto LAB_1027ff7dc;
        uStack_9d8 = uStack_5a8;
        uStack_9e0 = uStack_5b0;
        uStack_9c8 = uStack_598;
        uStack_9d0 = uStack_5a0;
        uStack_9b8 = uStack_588;
        uStack_9c0 = uStack_590;
        lStack_9a8 = lStack_578;
        uStack_9b0 = uStack_580;
        uStack_a18 = CONCAT71(uStack_5e7,cStack_5e8);
        uStack_a20 = CONCAT71(uStack_5ef,uStack_5f0);
        uStack_a08 = uStack_5d8;
        uStack_a10 = uStack_5e0;
        uStack_9f8 = uStack_5c8;
        uStack_a00 = uStack_5d0;
        uStack_9e8 = uStack_5b8;
        uStack_9f0 = uStack_5c0;
        uStack_938 = uStack_588;
        uStack_940 = uStack_590;
        lStack_928 = lStack_578;
        uStack_930 = uStack_580;
        uStack_958 = uStack_5a8;
        uStack_960 = uStack_5b0;
        uStack_948 = uStack_598;
        uStack_950 = uStack_5a0;
        uStack_978 = uStack_5c8;
        uStack_980 = uStack_5d0;
        uStack_968 = uStack_5b8;
        uStack_970 = uStack_5c0;
        uStack_988 = uStack_5d8;
        uStack_990 = uStack_5e0;
        uStack_8f8 = uStack_7f8;
        uStack_900 = uStack_800;
        uStack_8e8 = uStack_7e8;
        uStack_8f0 = uStack_7f0;
        uStack_918 = uStack_818;
        uStack_920 = uStack_820;
        uStack_908 = uStack_808;
        uStack_910 = uStack_810;
        uStack_8b8 = uStack_7b8;
        uStack_8c0 = uStack_7c0;
        uStack_8a8 = uStack_7a8;
        uStack_8b0 = uStack_7b0;
        uStack_8d8 = uStack_7d8;
        uStack_8e0 = uStack_7e0;
        uStack_8c8 = uStack_7c8;
        uStack_8d0 = uStack_7d0;
        uStack_898 = uStack_818;
        uStack_8a0 = uStack_820;
        uStack_888 = uStack_808;
        uStack_890 = uStack_810;
        uStack_878 = uStack_7f8;
        uStack_880 = uStack_800;
        uStack_868 = uStack_7e8;
        uStack_870 = uStack_7f0;
        uStack_858 = uStack_7d8;
        uStack_860 = uStack_7e0;
        uStack_848 = uStack_7c8;
        uStack_850 = uStack_7d0;
        uStack_838 = uStack_7b8;
        uStack_840 = uStack_7c0;
        uStack_828 = uStack_7a8;
        uStack_830 = uStack_7b0;
        iVar2 = (int)&uStack_920;
        uStack_9a0 = uStack_a20;
        uStack_998 = uStack_a18;
        func_0x0001027fe5ac();
        if (iVar2 == 0) {
          puVar7 = &uStack_8a0;
          func_0x000100d081cc();
          uStack_b18 = puVar7[1];
          uStack_b20 = *puVar7;
          uStack_b08 = puVar7[3];
          uStack_b10 = puVar7[2];
          uStack_af8 = puVar7[5];
          uStack_b00 = puVar7[4];
          uStack_738 = uStack_968;
          uStack_740 = uStack_970;
          uStack_748 = uStack_978;
          uStack_750 = uStack_980;
          uStack_6f8 = (undefined1)lStack_928;
          uStack_6f7 = (undefined7)((ulong)lStack_928 >> 8);
          uStack_700 = uStack_930;
          uStack_708 = uStack_938;
          uStack_710 = uStack_940;
          uStack_718 = uStack_948;
          uStack_720 = uStack_950;
          uStack_728 = uStack_958;
          uStack_730 = uStack_960;
          uStack_768 = uStack_998;
          uStack_770 = uStack_9a0;
          uStack_758 = uStack_988;
          uStack_760 = uStack_990;
          iVar2 = (int)&uStack_9a0;
          func_0x0001027fe5ac();
          if (iVar2 == 0) {
            puVar7 = &uStack_770;
            func_0x000100d081cc();
            uStack_a98 = puVar7[1];
            uStack_aa0 = *puVar7;
            uStack_a88 = puVar7[3];
            uStack_a90 = puVar7[2];
            uStack_a78 = puVar7[5];
            uStack_a80 = puVar7[4];
            FUN_1027fe6d8(&lStack_490,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
            FUN_1027fe6d8(&lStack_510,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
            puVar7 = &uStack_b20;
            func_0x000103689d00(puVar7,&uStack_aa0);
LAB_1027ffea4:
            FUN_102802e10(&uStack_a20,0x112ec28c8,&UNK_10dae0c50);
            FUN_102802e10(&uStack_670,0x112ec28c8,&UNK_10dae0c50);
            if (((ulong)puVar7 & 1) == 0) goto LAB_1027ff8a8;
            goto LAB_1027ff698;
          }
LAB_1027ffa64:
          FUN_1027fe6d8(&lStack_490,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
          puVar7 = &uStack_370;
LAB_1027ffc64:
          FUN_1027fe6d8(&lStack_510,puVar7,0x112ec28c8,&UNK_10dae0c50);
          FUN_102802e10(&uStack_a20,0x112ec28c8,&UNK_10dae0c50);
          uVar8 = 0x112ec28c8;
          puVar9 = &UNK_10dae0c50;
          puVar7 = &uStack_670;
        }
        else {
          if (iVar2 != 1) {
            puVar7 = &uStack_8a0;
            func_0x000100d081cc();
            uStack_328 = puVar7[9];
            uStack_330 = puVar7[8];
            uStack_318 = puVar7[0xb];
            uStack_320 = puVar7[10];
            uStack_308 = puVar7[0xd];
            uStack_310 = puVar7[0xc];
            uStack_2f8 = puVar7[0xf];
            uStack_300 = puVar7[0xe];
            uStack_368 = puVar7[1];
            uStack_370 = *puVar7;
            uStack_358 = puVar7[3];
            uStack_360 = puVar7[2];
            uStack_348 = puVar7[5];
            uStack_350 = puVar7[4];
            uStack_338 = puVar7[7];
            uStack_340 = puVar7[6];
            uStack_a58 = uStack_958;
            uStack_a60 = uStack_960;
            uStack_a48 = uStack_948;
            uStack_a50 = uStack_950;
            uStack_a38 = uStack_938;
            uStack_a40 = uStack_940;
            lStack_a28 = lStack_928;
            uStack_a30 = uStack_930;
            uStack_a98 = uStack_998;
            uStack_aa0 = uStack_9a0;
            uStack_a88 = uStack_988;
            uStack_a90 = uStack_990;
            uStack_a78 = uStack_978;
            uStack_a80 = uStack_980;
            uStack_a68 = uStack_968;
            uStack_a70 = uStack_970;
            iVar2 = (int)&uStack_9a0;
            func_0x0001027fe5ac();
            if (iVar2 == 2) {
              puVar7 = &uStack_aa0;
              func_0x000100d081cc();
              uStack_728 = puVar7[9];
              uStack_730 = puVar7[8];
              uStack_718 = puVar7[0xb];
              uStack_720 = puVar7[10];
              uStack_708 = puVar7[0xd];
              uStack_710 = puVar7[0xc];
              uStack_700 = puVar7[0xe];
              uStack_6f8 = (undefined1)puVar7[0xf];
              uStack_6f7 = (undefined7)(puVar7[0xf] >> 8);
              uStack_768 = puVar7[1];
              uStack_770 = *puVar7;
              uStack_758 = puVar7[3];
              uStack_760 = puVar7[2];
              uStack_748 = puVar7[5];
              uStack_750 = puVar7[4];
              uStack_738 = puVar7[7];
              uStack_740 = puVar7[6];
              FUN_1027fe6d8(&lStack_490,&uStack_b20,0x112ec28c8,&UNK_10dae0c50);
              FUN_1027fe6d8(&lStack_510,&uStack_b20,0x112ec28c8,&UNK_10dae0c50);
              puVar7 = &uStack_370;
              func_0x00010368a888(puVar7,&uStack_770);
              goto LAB_1027ffea4;
            }
            FUN_1027fe6d8(&lStack_490,&uStack_770,0x112ec28c8,&UNK_10dae0c50);
            puVar7 = &uStack_770;
            goto LAB_1027ffc64;
          }
          puVar7 = &uStack_8a0;
          func_0x000100d081cc();
          uVar6 = *puVar7;
          uVar15 = puVar7[1];
          uStack_728 = uStack_958;
          uStack_730 = uStack_960;
          uStack_718 = uStack_948;
          uStack_720 = uStack_950;
          uStack_708 = uStack_938;
          uStack_710 = uStack_940;
          uStack_6f8 = (undefined1)lStack_928;
          uStack_6f7 = (undefined7)((ulong)lStack_928 >> 8);
          uStack_700 = uStack_930;
          uStack_768 = uStack_998;
          uStack_770 = uStack_9a0;
          uStack_758 = uStack_988;
          uStack_760 = uStack_990;
          uStack_748 = uStack_978;
          uStack_750 = uStack_980;
          uStack_738 = uStack_968;
          uStack_740 = uStack_970;
          iVar2 = (int)&uStack_9a0;
          func_0x0001027fe5ac();
          if (iVar2 != 1) goto LAB_1027ffa64;
          puVar7 = &uStack_770;
          func_0x000100d081cc();
          uVar16 = *puVar7;
          uVar17 = puVar7[1];
          FUN_1027fe6d8(&lStack_490,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
          FUN_1027fe6d8(&lStack_510,&uStack_370,0x112ec28c8,&UNK_10dae0c50);
          func_0x000100e25fcc(uVar6,uVar15,uVar16,uVar17);
          FUN_102802e10(&uStack_a20,0x112ec28c8,&UNK_10dae0c50);
          uVar8 = 0x112ec28c8;
          puVar9 = &UNK_10dae0c50;
          puVar7 = &uStack_670;
          if ((uVar6 & 1) != 0) goto LAB_1027ff694;
        }
      }
      FUN_102802e10(puVar7,uVar8,puVar9);
    }
    else {
      if (!bVar1 && cStack_5e8 == -1) goto LAB_1027ff3c8;
      uStack_758 = param_2[4];
      uStack_760 = param_2[3];
      uStack_748 = param_2[6];
      uStack_750 = param_2[5];
      uStack_738 = param_2[8];
      uStack_740 = param_2[7];
      uStack_260 = (undefined1)param_2[9];
      uStack_730 = CONCAT71(uStack_730._1_7_,uStack_260);
      uStack_768 = param_2[2];
      uStack_770 = param_2[1];
      lStack_2e8 = param_1[2];
      lStack_2f0 = param_1[1];
      lStack_2d8 = param_1[4];
      lStack_2e0 = param_1[3];
      lStack_2c8 = param_1[6];
      lStack_2d0 = param_1[5];
      lStack_2b8 = param_1[8];
      lStack_2c0 = param_1[7];
      uStack_2b0 = (undefined1)param_1[9];
      uStack_2a0 = uStack_770;
      uStack_298 = uStack_768;
      uStack_290 = uStack_760;
      uStack_288 = uStack_758;
      uStack_280 = uStack_750;
      uStack_278 = uStack_748;
      uStack_270 = uStack_740;
      uStack_268 = uStack_738;
      FUN_1027fe6d8(&lStack_3c0,&uStack_370,0x112ec28c0,&UNK_10dae0c48);
      FUN_1027fe6d8(&lStack_410,&uStack_370,0x112ec28c0,&UNK_10dae0c48);
      plVar5 = &lStack_2f0;
      FUN_1027fe720(plVar5,&uStack_2a0);
      FUN_102802e10(&uStack_770,0x112ec28c0,&UNK_10dae0c48);
      FUN_102802e10(&uStack_670,0x112ec28c0,&UNK_10dae0c48);
      if (((ulong)plVar5 & 1) != 0) goto LAB_1027ff528;
    }
  }
LAB_1027ff8a8:
  uVar3 = 0;
LAB_1027ff8ac:
  return uVar3 & 1;
}



/* Entry: 102800064; end: 1028000a3;  */

void FUN_102800064(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1020;
  func_0x000107c61520(&UNK_10dae1020,&UNK_110551238);
  puRam0000000112ec2938 = puVar1;
  return;
}



/* Entry: 1028000a4; end: 1028000b7;  */

void FUN_1028000a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1028000b8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1028000f8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1028000b8; end: 102800163;  */

void FUN_1028000b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae0d00;
  func_0x000107c61520(&UNK_10dae0d00,&UNK_110551080);
  puRam0000000112ec2940 = puVar1;
  return;
}



/* Entry: 102800164; end: 102800167;  */

void FUN_102800164(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae0d40;
  func_0x000107c61520(&UNK_10dae0d40,&UNK_110551080);
  puRam0000000112ec2960 = puVar1;
  return;
}



/* Entry: 102800168; end: 1028001a7;  */

void FUN_102800168(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae0d40;
  func_0x000107c61520(&UNK_10dae0d40,&UNK_110551080);
  puRam0000000112ec2960 = puVar1;
  return;
}



/* Entry: 1028001a8; end: 1028001bb;  */

void FUN_1028001a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1028001bc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1028001fc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1028001bc; end: 102800267;  */

void FUN_1028001bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae0e00;
  func_0x000107c61520(&UNK_10dae0e00,&UNK_110551110);
  puRam0000000112ec2968 = puVar1;
  return;
}



/* Entry: 102800268; end: 1028002ab;  */

void FUN_102800268(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1028002ac; end: 1028002af;  */

void FUN_1028002ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae0e40;
  func_0x000107c61520(&UNK_10dae0e40,&UNK_110551110);
  puRam0000000112ec2988 = puVar1;
  return;
}



/* Entry: 1028002b0; end: 1028002ef;  */

void FUN_1028002b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae0e40;
  func_0x000107c61520(&UNK_10dae0e40,&UNK_110551110);
  puRam0000000112ec2988 = puVar1;
  return;
}



/* Entry: 1028002f0; end: 102800313;  */

void FUN_1028002f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102800314();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102800314; end: 102800353;  */

void FUN_102800314(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae0f20;
  func_0x000107c61520(&UNK_10dae0f20,&UNK_110551188);
  puRam0000000112ec2990 = puVar1;
  return;
}



/* Entry: 102800354; end: 10280036b;  */

void FUN_102800354(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1027ff058();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1027ff098)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10280036c; end: 1028003ab;  */

void FUN_10280036c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec2998 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae0f88;
  func_0x000107c61520(&UNK_10dae0f88,&UNK_110551188);
  puRam0000000112ec2998 = puVar1;
  return;
}



/* Entry: 1028003ac; end: 1028003cf;  */

void FUN_1028003ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1028003d0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1028003d0; end: 10280040f;  */

void FUN_1028003d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec29a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae0ff8;
  func_0x000107c61520(&UNK_10dae0ff8,&UNK_110551238);
  puRam0000000112ec29a0 = puVar1;
  return;
}



/* Entry: 102800410; end: 102800423;  */

void FUN_102800410(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102800064();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_10155b3b0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102800424; end: 102800453;  */

void FUN_102800424(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102800454; end: 102800457;  */

void FUN_102800454(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec29a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1060;
  func_0x000107c61520(&UNK_10dae1060,&UNK_110551238);
  puRam0000000112ec29a8 = puVar1;
  return;
}



/* Entry: 102800458; end: 102800497;  */

void FUN_102800458(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec29a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dae1060;
  func_0x000107c61520(&UNK_10dae1060,&UNK_110551238);
  puRam0000000112ec29a8 = puVar1;
  return;
}



/* Entry: 102800498; end: 1028004bf;  */

void FUN_102800498(void)

{
  return;
}



/* Entry: 1028004c0; end: 102800573;  */

/* WARNING: Possible PIC construction at 0x000102800514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102800544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102800518) */
/* WARNING: Removing unreachable block (ram,0x000102800528) */
/* WARNING: Removing unreachable block (ram,0x000102800548) */
/* WARNING: Removing unreachable block (ram,0x000102800564) */
/* WARNING: Removing unreachable block (ram,0x000102800558) */
/* WARNING: Removing unreachable block (ram,0x000102800540) */

void FUN_1028004c0(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[2]);
  func_0x000107c6142c(param_1[4]);
  func_0x000107c6142c(param_1[6]);
  func_0x000107c6142c(param_1[8]);
  func_0x000107c6142c(param_1[0xb]);
  func_0x000107c6142c(param_1[0xd]);
  func_0x000107c6142c(param_1[0xe]);
  uVar1 = param_1[0x14];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(param_1[0x13]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 102800574; end: 102800737;  */

undefined8 * FUN_102800574(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar9 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  uVar9 = param_2[2];
  uVar1 = param_2[3];
  param_1[2] = uVar9;
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar10 = param_2[8];
  param_1[8] = uVar10;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  uVar4 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  uVar5 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar5;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  uVar3 = param_2[0xe];
  uVar6 = param_2[0xf];
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0x11] = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  uVar6 = param_2[0x13];
  uVar7 = param_2[0x14];
  func_0x000107c61434();
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar6,uVar7);
  param_1[0x13] = uVar6;
  param_1[0x14] = uVar7;
  uVar8 = param_2[0x16];
  if (uVar8 >> 0x3c < 0xf) {
    uVar9 = param_2[0x15];
    func_0x00010006c00c(uVar9,uVar8);
    param_1[0x15] = uVar9;
    param_1[0x16] = uVar8;
    uVar8 = param_2[0x19];
    if (uVar8 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar9 = param_2[0x18];
      func_0x00010006c00c(uVar9,uVar8);
      param_1[0x18] = uVar9;
      param_1[0x19] = uVar8;
    }
    else {
      uVar9 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar9;
      param_1[0x19] = param_2[0x19];
    }
    uVar8 = param_2[0x1c];
    if (uVar8 >> 0x3c < 0xf) {
      uVar9 = param_2[0x1b];
      param_1[0x1a] = param_2[0x1a];
      func_0x00010006c00c(uVar9,uVar8);
      param_1[0x1b] = uVar9;
      param_1[0x1c] = uVar8;
    }
    else {
      uVar9 = param_2[0x1a];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar9;
      param_1[0x1c] = param_2[0x1c];
    }
  }
  else {
    uVar9 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar9;
    uVar9 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar9;
    uVar9 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar9;
    uVar9 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar9;
  }
  return param_1;
}



/* Entry: 102800738; end: 102800ac7;  */

undefined8 * FUN_102800738(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
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
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  uVar3 = param_2[0x14];
  func_0x00010006c00c(uVar1,uVar3);
  uVar4 = param_1[0x13];
  uVar5 = param_1[0x14];
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar3;
  func_0x00010006c090(uVar4,uVar5);
  uVar2 = param_2[0x16];
  if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
    if (0xe < uVar2 >> 0x3c) {
      FUN_1027fe47c(param_1 + 0x15);
      uVar4 = param_2[0x18];
      uVar1 = param_2[0x17];
      uVar5 = param_2[0x1a];
      uVar3 = param_2[0x19];
      uVar7 = param_2[0x1c];
      uVar6 = param_2[0x1b];
      uVar8 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar8;
      param_1[0x1c] = uVar7;
      param_1[0x1b] = uVar6;
      param_1[0x1a] = uVar5;
      param_1[0x19] = uVar3;
      param_1[0x18] = uVar4;
      param_1[0x17] = uVar1;
      return param_1;
    }
    uVar3 = param_2[0x15];
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = param_1[0x15];
    uVar4 = param_1[0x16];
    param_1[0x15] = uVar3;
    param_1[0x16] = uVar2;
    func_0x00010006c090(uVar1,uVar4);
    if ((ulong)param_1[0x19] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x19] >> 0x3c < 0xf) {
        *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
        uVar1 = param_2[0x18];
        uVar3 = param_2[0x19];
        func_0x00010006c00c(uVar1,uVar3);
        uVar4 = param_1[0x18];
        uVar5 = param_1[0x19];
        param_1[0x18] = uVar1;
        param_1[0x19] = uVar3;
        func_0x00010006c090(uVar4,uVar5);
      }
      else {
        func_0x000101599dcc(param_1 + 0x17);
        uVar1 = param_2[0x19];
        uVar4 = param_2[0x17];
        param_1[0x18] = param_2[0x18];
        param_1[0x17] = uVar4;
        param_1[0x19] = uVar1;
      }
    }
    else if ((ulong)param_2[0x19] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar1 = param_2[0x18];
      uVar4 = param_2[0x19];
      func_0x00010006c00c(uVar1,uVar4);
      param_1[0x18] = uVar1;
      param_1[0x19] = uVar4;
    }
    else {
      uVar4 = param_2[0x18];
      uVar1 = param_2[0x17];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar4;
      param_1[0x17] = uVar1;
    }
    uVar2 = (ulong)param_2[0x1c] >> 0x3c;
    if ((ulong)param_1[0x1c] >> 0x3c < 0xf) {
      if (0xe < uVar2) {
        func_0x00010159d670(param_1 + 0x1a);
        uVar1 = param_2[0x1c];
        uVar4 = param_2[0x1a];
        param_1[0x1b] = param_2[0x1b];
        param_1[0x1a] = uVar4;
        param_1[0x1c] = uVar1;
        return param_1;
      }
      param_1[0x1a] = param_2[0x1a];
      uVar1 = param_2[0x1b];
      uVar3 = param_2[0x1c];
      func_0x00010006c00c(uVar1,uVar3);
      uVar4 = param_1[0x1b];
      uVar5 = param_1[0x1c];
      param_1[0x1b] = uVar1;
      param_1[0x1c] = uVar3;
      func_0x00010006c090(uVar4,uVar5);
      return param_1;
    }
  }
  else {
    if (0xe < uVar2 >> 0x3c) {
      uVar4 = param_2[0x16];
      uVar1 = param_2[0x15];
      uVar5 = param_2[0x18];
      uVar3 = param_2[0x17];
      uVar7 = param_2[0x1a];
      uVar6 = param_2[0x19];
      uVar8 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar8;
      param_1[0x1a] = uVar7;
      param_1[0x19] = uVar6;
      param_1[0x18] = uVar5;
      param_1[0x17] = uVar3;
      param_1[0x16] = uVar4;
      param_1[0x15] = uVar1;
      return param_1;
    }
    uVar1 = param_2[0x15];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[0x15] = uVar1;
    param_1[0x16] = uVar2;
    if ((ulong)param_2[0x19] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar1 = param_2[0x18];
      uVar4 = param_2[0x19];
      func_0x00010006c00c(uVar1,uVar4);
      param_1[0x18] = uVar1;
      param_1[0x19] = uVar4;
    }
    else {
      uVar4 = param_2[0x18];
      uVar1 = param_2[0x17];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar4;
      param_1[0x17] = uVar1;
    }
    uVar2 = (ulong)param_2[0x1c] >> 0x3c;
  }
  if (uVar2 < 0xf) {
    param_1[0x1a] = param_2[0x1a];
    uVar1 = param_2[0x1b];
    uVar4 = param_2[0x1c];
    func_0x00010006c00c(uVar1,uVar4);
    param_1[0x1b] = uVar1;
    param_1[0x1c] = uVar4;
  }
  else {
    uVar4 = param_2[0x1b];
    uVar1 = param_2[0x1a];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar4;
    param_1[0x1a] = uVar1;
  }
  return param_1;
}



/* Entry: 102800ac8; end: 102800ca3;  */

undefined8 * FUN_102800ac8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c6142c(uVar1);
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0x11] = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x14];
  uVar4 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (0xe < (ulong)param_1[0x16] >> 0x3c) {
LAB_102800bbc:
    uVar1 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar1;
    uVar1 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar1;
    uVar1 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar1;
    uVar1 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar1;
    return param_1;
  }
  uVar3 = param_2[0x16];
  if (0xe < uVar3 >> 0x3c) {
    FUN_1027fe47c(param_1 + 0x15);
    goto LAB_102800bbc;
  }
  uVar1 = param_1[0x15];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar3;
  func_0x00010006c090(uVar1);
  if ((ulong)param_1[0x19] >> 0x3c < 0xf) {
    uVar3 = param_2[0x19];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar1 = param_1[0x18];
      param_1[0x18] = param_2[0x18];
      param_1[0x19] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_102800c50;
    }
    func_0x000101599dcc(param_1 + 0x17);
  }
  uVar1 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar1;
  param_1[0x19] = param_2[0x19];
LAB_102800c50:
  if ((ulong)param_1[0x1c] >> 0x3c < 0xf) {
    uVar3 = param_2[0x1c];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[0x1b];
      uVar2 = param_2[0x1a];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar2;
      param_1[0x1c] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x00010159d670(param_1 + 0x1a);
  }
  uVar1 = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1a] = uVar1;
  param_1[0x1c] = param_2[0x1c];
  return param_1;
}



/* Entry: 102800ca4; end: 102800d73;  */

int FUN_102800ca4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1d] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102800d74; end: 102800ebf;  */

/* WARNING: Possible PIC construction at 0x000102800e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102800e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102800e38) */
/* WARNING: Removing unreachable block (ram,0x000102800e78) */
/* WARNING: Removing unreachable block (ram,0x000102800e84) */
/* WARNING: Removing unreachable block (ram,0x000102800eac) */
/* WARNING: Removing unreachable block (ram,0x000102800e9c) */
/* WARNING: Removing unreachable block (ram,0x000102800e48) */
/* WARNING: Removing unreachable block (ram,0x000102800e58) */
/* WARNING: Removing unreachable block (ram,0x000102800e6c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102800d74(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  if ((((param_1[8] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(char *)(param_1 + 9) != -1)) {
    func_0x0001016161ac(param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],param_1[7]
                       );
  }
  if (((param_1[0xb] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_102800ec0(param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],param_1[0xe],param_1[0xf],
                  param_1[0x10],param_1[0x11]);
  }
  func_0x000107c6142c(param_1[0x1a]);
  uVar1 = param_1[0x1b];
  uVar2 = (uint)((ulong)param_1[0x1c] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[0x1c] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102800ec0; end: 102801a9b;  */

void FUN_102800ec0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  code *UNRECOVERED_JUMPTABLE_00,code *UNRECOVERED_JUMPTABLE_01,code *param_19,
                  code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3c) & 3;
  if (1 < uVar1) {
    if (uVar1 == 2) {
      (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2 & 0xcfffffffffffffff);
      (*param_19)(param_3,param_4,param_5,param_6,param_7);
      (*UNRECOVERED_JUMPTABLE)(param_8,param_9,param_10);
      (*UNRECOVERED_JUMPTABLE)(param_11,param_12,param_13);
                    /* WARNING: Could not recover jumptable at 0x000102800ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_14,param_15,param_16);
      return;
    }
    return;
  }
  if (uVar1 == 0) {
    (*UNRECOVERED_JUMPTABLE_00)();
                    /* WARNING: Could not recover jumptable at 0x000102800f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)(param_3,param_4,param_5,param_6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010280101c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Entry: 102801a9c; end: 102801b8f;  */

undefined8 FUN_102801a9c(undefined8 param_1)

{
  FUN_102801fbc(param_1,&UNK_1105512e8);
  return param_1;
}



/* Entry: 102801b90; end: 102801ecb;  */

undefined8 * FUN_102801b90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar5 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar5);
  uVar9 = param_1[8];
  cVar3 = *(char *)(param_1 + 9);
  if ((((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar3 == -1)) {
LAB_102801c04:
    uVar7 = param_2[2];
    uVar17 = param_2[1];
    uVar5 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar5;
    uVar5 = param_2[5];
    uVar15 = param_2[8];
    uVar12 = param_2[7];
    param_1[6] = param_2[6];
    param_1[5] = uVar5;
    param_1[8] = uVar15;
    param_1[7] = uVar12;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    param_1[2] = uVar7;
    param_1[1] = uVar17;
  }
  else {
    uVar11 = param_2[8];
    cVar4 = *(char *)(param_2 + 9);
    if ((((uVar11 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar4 == -1)) {
      FUN_102801a9c(param_1 + 1);
      goto LAB_102801c04;
    }
    uVar13 = param_2[7];
    uVar5 = param_1[1];
    uVar12 = param_1[2];
    uVar17 = param_1[3];
    uVar15 = param_1[4];
    uVar7 = param_1[5];
    uVar2 = param_1[6];
    uVar8 = param_1[7];
    uVar6 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    uVar6 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar6;
    uVar6 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar6;
    param_1[7] = uVar13;
    param_1[8] = uVar11;
    *(char *)(param_1 + 9) = cVar4;
    func_0x0001016161ac(uVar5,uVar12,uVar17,uVar15,uVar7,uVar2,uVar8,uVar9,cVar3);
  }
  uVar9 = param_1[0xb];
  if (((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
LAB_102801c88:
    uVar5 = param_2[0x12];
    uVar7 = param_2[0x15];
    uVar17 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar5;
    param_1[0x15] = uVar7;
    param_1[0x14] = uVar17;
    uVar5 = param_2[0x16];
    uVar7 = param_2[0x19];
    uVar17 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar5;
    param_1[0x19] = uVar7;
    param_1[0x18] = uVar17;
    uVar5 = param_2[10];
    uVar7 = param_2[0xd];
    uVar17 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar5;
    param_1[0xd] = uVar7;
    param_1[0xc] = uVar17;
    uVar5 = param_2[0xe];
    uVar7 = param_2[0x11];
    uVar17 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar5;
    param_1[0x11] = uVar7;
    param_1[0x10] = uVar17;
  }
  else {
    uVar11 = param_2[0xb];
    if (((uVar11 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      func_0x000102801ac8(param_1 + 10);
      goto LAB_102801c88;
    }
    uVar6 = param_1[10];
    uVar5 = param_1[0xc];
    uVar15 = param_1[0xd];
    uVar17 = param_1[0xe];
    uVar2 = param_1[0xf];
    uVar7 = param_1[0x10];
    uVar8 = param_1[0x11];
    uVar16 = param_1[0x13];
    uVar14 = param_1[0x12];
    uVar19 = param_1[0x15];
    uVar18 = param_1[0x14];
    uVar21 = param_1[0x17];
    uVar20 = param_1[0x16];
    uVar12 = param_1[0x18];
    uVar13 = param_1[0x19];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar11;
    uVar22 = param_2[0xc];
    uVar24 = param_2[0xf];
    uVar23 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar22;
    param_1[0xf] = uVar24;
    param_1[0xe] = uVar23;
    uVar22 = param_2[0x10];
    uVar24 = param_2[0x13];
    uVar23 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar22;
    param_1[0x13] = uVar24;
    param_1[0x12] = uVar23;
    uVar22 = param_2[0x14];
    uVar24 = param_2[0x17];
    uVar23 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar22;
    param_1[0x17] = uVar24;
    param_1[0x16] = uVar23;
    uVar22 = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar22;
    FUN_102800ec0(uVar6,uVar9,uVar5,uVar15,uVar17,uVar2,uVar7,uVar8,uVar14,uVar16,uVar18,uVar19,
                  uVar20,uVar21,uVar12,uVar13,&SUB_10006c090,&SUB_101597ae4,&SUB_101553bdc,
                  &SUB_101553ccc);
  }
  uVar5 = param_1[0x1a];
  param_1[0x1a] = param_2[0x1a];
  func_0x000107c6142c(uVar5);
  uVar5 = param_1[0x1b];
  uVar17 = param_1[0x1c];
  uVar7 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar7;
  func_0x00010006c090(uVar5,uVar17);
  puVar1 = param_1 + 0x1d;
  if ((ulong)param_1[0x23] >> 0x3c < 0xf) {
    uVar9 = param_2[0x23];
    if (uVar9 >> 0x3c < 0xf) {
      uVar11 = param_1[0x20];
      if (((uVar11 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
LAB_102801dc0:
        uVar5 = param_2[0x1d];
        uVar7 = param_2[0x20];
        uVar17 = param_2[0x1f];
        param_1[0x1e] = param_2[0x1e];
        *puVar1 = uVar5;
        param_1[0x20] = uVar7;
        param_1[0x1f] = uVar17;
      }
      else {
        uVar10 = param_2[0x20];
        if (((uVar10 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
          func_0x000102801af4(puVar1);
          goto LAB_102801dc0;
        }
        uVar12 = param_2[0x1f];
        uVar5 = param_1[0x1d];
        uVar17 = param_1[0x1e];
        uVar7 = param_1[0x1f];
        uVar15 = param_2[0x1d];
        param_1[0x1e] = param_2[0x1e];
        param_1[0x1d] = uVar15;
        param_1[0x1f] = uVar12;
        param_1[0x20] = uVar10;
        FUN_1027fe664(uVar5,uVar17,uVar7,uVar11,&SUB_10006c090);
      }
      uVar5 = param_1[0x22];
      uVar17 = param_1[0x23];
      uVar7 = param_2[0x21];
      param_1[0x22] = param_2[0x22];
      param_1[0x21] = uVar7;
      param_1[0x23] = uVar9;
      func_0x00010006c090(uVar5,uVar17);
      goto LAB_102801e04;
    }
    func_0x000102801b28(puVar1);
  }
  uVar5 = param_2[0x1d];
  uVar7 = param_2[0x20];
  uVar17 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  *puVar1 = uVar5;
  param_1[0x20] = uVar7;
  param_1[0x1f] = uVar17;
  uVar5 = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x21] = uVar5;
  param_1[0x23] = param_2[0x23];
LAB_102801e04:
  if (*(char *)(param_1 + 0x24) != '\x02') {
    if (*(byte *)(param_2 + 0x24) != 2) {
      *(byte *)(param_1 + 0x24) = *(byte *)(param_2 + 0x24) & 1;
      uVar5 = param_1[0x25];
      uVar17 = param_1[0x26];
      uVar7 = param_2[0x25];
      param_1[0x26] = param_2[0x26];
      param_1[0x25] = uVar7;
      func_0x00010006c090(uVar5,uVar17);
      if ((ulong)param_1[0x29] >> 0x3c < 0xf) {
        uVar9 = param_2[0x29];
        if (uVar9 >> 0x3c < 0xf) {
          *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
          uVar5 = param_1[0x28];
          param_1[0x28] = param_2[0x28];
          param_1[0x29] = uVar9;
          func_0x00010006c090(uVar5);
          return param_1;
        }
        func_0x000101599dcc(param_1 + 0x27);
      }
      uVar5 = param_2[0x27];
      param_1[0x28] = param_2[0x28];
      param_1[0x27] = uVar5;
      param_1[0x29] = param_2[0x29];
      return param_1;
    }
    func_0x000102801b5c(param_1 + 0x24);
  }
  uVar5 = param_2[0x24];
  uVar7 = param_2[0x27];
  uVar17 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar5;
  param_1[0x27] = uVar7;
  param_1[0x26] = uVar17;
  uVar5 = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x28] = uVar5;
  return param_1;
}



/* Entry: 102801ecc; end: 102801fbb;  */

int FUN_102801ecc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2a] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102801fbc; end: 102801ff3;  */

void FUN_102801fbc(undefined8 *param_1)

{
  func_0x0001016161ac(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                      param_1[7],*(undefined1 *)(param_1 + 8));
  return;
}



/* Entry: 102801ff4; end: 10280213f;  */

undefined8 * FUN_102801ff4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = *(undefined1 *)(param_2 + 8);
  func_0x000101615c50(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar9);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  *(undefined1 *)(param_1 + 8) = uVar9;
  return param_1;
}



/* Entry: 102802140; end: 1028021a3;  */

undefined8 * FUN_102802140(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar7 = *(undefined1 *)(param_2 + 8);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar8 = *(undefined1 *)(param_1 + 8);
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  *(undefined1 *)(param_1 + 8) = uVar7;
  func_0x0001016161ac(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar8);
  return param_1;
}



/* Entry: 1028021a4; end: 1028022bb;  */

int FUN_1028021a4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3f3 < param_2) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + 0x3f4;
  }
  uVar1 = ((uint)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 0x10) << 2) ^ 0x3ff;
  if (0x3f2 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}


