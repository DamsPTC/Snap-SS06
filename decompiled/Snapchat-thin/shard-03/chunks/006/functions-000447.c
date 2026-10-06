/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b532bc; end: 102b532bf;  */

void FUN_102b532bc(void)

{
  return;
}



/* Entry: 102b532c0; end: 102b534ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b532c0(undefined8 param_1,byte param_2,byte param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [152];
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
  
  func_0x000100b627a0(0);
  lVar7 = _DAT_112ef6670;
  ppuVar5 = &puStack_1b8;
  func_0x000107c61428(unaff_x20 + _DAT_112ef6670,ppuVar5,0x20,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  if (*(long *)(lVar7 + 0x10) == 0) {
    func_0x000107c614a8(&puStack_1b8);
  }
  else {
    func_0x000107c61434(lVar7);
    lVar1 = 0;
    func_0x000100b6334c();
    if (((ulong)ppuVar5 & 1) == 0) {
      func_0x000107c614a8(&puStack_1b8);
      func_0x000107c6142c(lVar7);
    }
    else {
      puVar6 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar1 * 0x98);
      uStack_e8 = puVar6[1];
      uStack_f0 = *puVar6;
      uStack_d8 = puVar6[3];
      uStack_e0 = puVar6[2];
      uStack_a8 = puVar6[9];
      uStack_b0 = puVar6[8];
      uStack_98 = puVar6[0xb];
      uStack_a0 = puVar6[10];
      uStack_c8 = puVar6[5];
      uStack_d0 = puVar6[4];
      uStack_b8 = puVar6[7];
      uStack_c0 = puVar6[6];
      uStack_88 = puVar6[0xd];
      uStack_90 = puVar6[0xc];
      uStack_78 = puVar6[0xf];
      uStack_80 = puVar6[0xe];
      uStack_68 = puVar6[0x11];
      uStack_70 = puVar6[0x10];
      uStack_60 = puVar6[0x12];
      func_0x000100b63318(&uStack_f0,auStack_188);
      func_0x000107c614a8(&puStack_1b8);
      func_0x000107c6142c(lVar7);
      puVar2 = &UNK_1105a1410;
      func_0x000107c613fc(&UNK_1105a1410,0xa8,7);
      *(undefined8 *)(puVar2 + 0x78) = uStack_88;
      *(undefined8 *)(puVar2 + 0x70) = uStack_90;
      *(undefined8 *)(puVar2 + 0x88) = uStack_78;
      *(undefined8 *)(puVar2 + 0x80) = uStack_80;
      *(undefined8 *)(puVar2 + 0x98) = uStack_68;
      *(undefined8 *)(puVar2 + 0x90) = uStack_70;
      *(undefined8 *)(puVar2 + 0xa0) = uStack_60;
      *(undefined8 *)(puVar2 + 0x38) = uStack_c8;
      *(undefined8 *)(puVar2 + 0x30) = uStack_d0;
      *(undefined8 *)(puVar2 + 0x48) = uStack_b8;
      *(undefined8 *)(puVar2 + 0x40) = uStack_c0;
      *(undefined8 *)(puVar2 + 0x58) = uStack_a8;
      *(undefined8 *)(puVar2 + 0x50) = uStack_b0;
      *(undefined8 *)(puVar2 + 0x68) = uStack_98;
      *(undefined8 *)(puVar2 + 0x60) = uStack_a0;
      *(undefined8 *)(puVar2 + 0x18) = uStack_e8;
      *(undefined8 *)(puVar2 + 0x10) = uStack_f0;
      *(undefined8 *)(puVar2 + 0x28) = uStack_d8;
      *(undefined8 *)(puVar2 + 0x20) = uStack_e0;
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ef6698);
      puVar3 = &UNK_1105a13e8;
      func_0x000107c613fc(&UNK_1105a13e8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_1105a1438;
      func_0x000107c613fc(&UNK_1105a1438,0x38,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      puVar4[0x18] = param_3 & 1;
      *(undefined **)(puVar4 + 0x20) = puVar2;
      puVar4[0x28] = param_2 & 1;
      *(undefined8 *)(puVar4 + 0x30) = param_1;
      uStack_198 = 0x102b55190;
      puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1b0 = 0x42000000;
      puStack_1a8 = &UNK_1000f6b44;
      puStack_1a0 = &UNK_1105a1450;
      ppuVar5 = &puStack_1b8;
      puStack_190 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar3 = puStack_190;
      func_0x000100b63318(&uStack_f0,auStack_188);
      func_0x000107c61174(param_1);
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c4e524(uVar8);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61574(puVar2);
      func_0x000100b63aa8(&uStack_f0);
    }
  }
  return;
}



/* Entry: 102b53500; end: 102b538bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b53500(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar6;
  code *pcVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5ec74();
  lStack_78 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  lVar10 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ef64();
  lStack_80 = *(long *)(lVar2 + -8);
  lStack_70 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar11 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5eea4();
  lStack_68 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  lVar14 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar8 - extraout_x12_01;
  lVar3 = *(long *)(unaff_x20 + _DAT_112ef6700);
  if (lVar3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar9 = lVar3;
      func_0x000107c41334();
      func_0x000107c61180();
      if (lVar9 == 0) {
        func_0x000107c5eea0(lVar14);
        func_0x000107c5ee70();
        (**(code **)(lStack_68 + 8))(lVar14,lVar2);
        func_0x000107c53e24(lVar3);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar9);
      }
      else {
        lStack_88 = lVar1;
        func_0x000107c5ee94(lVar8);
        func_0x000107c61170(lVar9);
        (**(code **)(lStack_68 + 0x20))(lVar13,lVar8,lVar2);
        func_0x000107c5eea0(lVar12);
        func_0x000107c5ef54(lVar11);
        lVar1 = 0x112d36588;
        func_0x0001000285a8(0x112d36588,&UNK_10d900a30);
        lVar14 = 0;
        func_0x000107c5ef5c();
        lVar9 = *(long *)(lVar14 + -8);
        uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
        uVar6 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
        lStack_90 = lVar2;
        func_0x000107c613fc(lVar1,uVar6 + *(long *)(lVar9 + 0x48),uVar5 | 7);
        *(undefined8 *)(lVar1 + 0x18) = 2;
        *(undefined8 *)(lVar1 + 0x10) = 1;
        (**(code **)(lVar9 + 0x68))
                  (lVar1 + uVar6,
                   *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4houryA2EmFWC_110350d80,
                   lVar14);
        lVar8 = lVar1;
        func_0x000100ddce0c();
        func_0x000107c61588(lVar1);
        (**(code **)(lVar9 + 8))(lVar1 + uVar6,lVar14);
        func_0x000107c6145c(lVar1,0x20,7);
        lVar1 = lVar13;
        func_0x000107c5ef28(lVar10,lVar8,lVar13,lVar12);
        uVar4 = (uint)lVar1;
        func_0x000107c6142c();
        func_0x000107c5ec4c();
        lVar2 = lStack_88;
        lVar1 = lStack_90;
        if ((uVar4 & 0xff) == 1) {
          func_0x000107c615e8(lVar3);
          (**(code **)(lStack_78 + 8))(lVar10,lStack_88);
          (**(code **)(lStack_80 + 8))(lVar11,lStack_70);
          lVar1 = lStack_90;
          pcVar7 = *(code **)(lStack_68 + 8);
          (*pcVar7)(lVar12,lStack_90);
        }
        else {
          if (lVar8 < 0x18) {
            func_0x000107c615e8(lVar3);
          }
          else {
            func_0x000107c5ee70();
            func_0x000107c53e24(lVar3);
            func_0x000107c615e8(lVar3);
            func_0x000107c61170(lVar8);
          }
          lVar3 = lStack_68;
          (**(code **)(lStack_78 + 8))(lVar10,lVar2);
          (**(code **)(lStack_80 + 8))(lVar11,lStack_70);
          pcVar7 = *(code **)(lVar3 + 8);
          (*pcVar7)(lVar12,lVar1);
        }
        (*pcVar7)(lVar13,lVar1);
      }
    }
  }
  return;
}



/* Entry: 102b538c0; end: 102b5397b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b538c0(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(undefined1 *)(param_2 + _DAT_112ef6738);
  lVar2 = *(long *)(param_2 + _DAT_112ef6720);
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar4 = lVar2;
      func_0x000107c41f18();
      func_0x000107c615e8(lVar2);
      goto LAB_102b5394c;
    }
  }
  lVar4 = 0;
LAB_102b5394c:
  FUN_102b532c0(uVar3,uVar1,lVar4);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102b5397c; end: 102b539ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5397c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined1 auStack_38 [24];
  
  iVar1 = (int)*param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c3ebcc();
    if (iVar1 != 0) {
      *(undefined1 *)(param_2 + _DAT_112ef6738) = 1;
      FUN_102b53500();
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102b539f0; end: 102b539f7;  */

void FUN_102b539f0(void)

{
  return;
}



/* Entry: 102b539f8; end: 102b53aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b539f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + _DAT_112ef6680) != '\0') goto LAB_102b53a90;
  lVar1 = *(long *)(param_1 + _DAT_112ef6720);
  if (lVar1 == 0) {
LAB_102b53a80:
    lVar2 = 0;
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) goto LAB_102b53a80;
    lVar2 = lVar1;
    func_0x000107c41f18();
    func_0x000107c615e8(lVar1);
  }
  FUN_102b53aac(param_2,lVar2);
LAB_102b53a90:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b53aac; end: 102b53cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b53aac(long param_1,ulong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_238 [152];
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
  undefined1 auStack_68 [24];
  
  lVar5 = _DAT_112ef6670;
  lVar4 = *(long *)(unaff_x20 + _DAT_112ef66f0);
  if (lVar4 != 0) {
    puVar2 = auStack_68;
    func_0x000107c61428(unaff_x20 + _DAT_112ef6670,puVar2,0x20,0);
    lVar5 = *(long *)(unaff_x20 + lVar5);
    if (*(long *)(lVar5 + 0x10) == 0) {
      func_0x000100b6250c(&uStack_100);
      func_0x000107c615f0(lVar4);
    }
    else {
      func_0x000107c615f0(lVar4);
      func_0x000107c61434(lVar5);
      func_0x000100b6334c();
      if (((ulong)puVar2 & 1) == 0) {
        func_0x000107c6142c(lVar5);
        func_0x000100b6250c(&uStack_100);
      }
      else {
        puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + param_1 * 0x98);
        uStack_198 = puVar3[1];
        uStack_1a0 = *puVar3;
        uStack_188 = puVar3[3];
        uStack_190 = puVar3[2];
        uStack_158 = puVar3[9];
        uStack_160 = puVar3[8];
        uStack_148 = puVar3[0xb];
        uStack_150 = puVar3[10];
        uStack_178 = puVar3[5];
        uStack_180 = puVar3[4];
        uStack_168 = puVar3[7];
        uStack_170 = puVar3[6];
        uStack_138 = puVar3[0xd];
        uStack_140 = puVar3[0xc];
        uStack_128 = puVar3[0xf];
        uStack_130 = puVar3[0xe];
        uStack_118 = puVar3[0x11];
        uStack_120 = puVar3[0x10];
        uStack_110 = puVar3[0x12];
        uStack_f8 = puVar3[1];
        uStack_100 = *puVar3;
        uStack_e8 = puVar3[3];
        uStack_f0 = puVar3[2];
        uStack_d8 = puVar3[5];
        uStack_e0 = puVar3[4];
        uStack_c8 = puVar3[7];
        uStack_d0 = puVar3[6];
        uStack_b8 = puVar3[9];
        uStack_c0 = puVar3[8];
        uStack_a8 = puVar3[0xb];
        uStack_b0 = puVar3[10];
        uStack_98 = puVar3[0xd];
        uStack_a0 = puVar3[0xc];
        uStack_88 = puVar3[0xf];
        uStack_90 = puVar3[0xe];
        uStack_78 = puVar3[0x11];
        uStack_80 = puVar3[0x10];
        uStack_70 = puVar3[0x12];
        func_0x000100b63318(&uStack_1a0,auStack_238);
        func_0x000107c6142c(lVar5);
        func_0x000100b63ad4(&uStack_100);
      }
    }
    iVar1 = (int)&uStack_100;
    func_0x000100b63ad8();
    if (iVar1 == 1) {
      func_0x000100b64ce4(&uStack_100,0x112ef67a8,&UNK_10db24e58);
      func_0x000107c614a8(auStack_68);
    }
    else {
      uStack_138 = uStack_98;
      uStack_140 = uStack_a0;
      uStack_128 = uStack_88;
      uStack_130 = uStack_90;
      uStack_118 = uStack_78;
      uStack_120 = uStack_80;
      uStack_110 = uStack_70;
      uStack_178 = uStack_d8;
      uStack_180 = uStack_e0;
      uStack_168 = uStack_c8;
      uStack_170 = uStack_d0;
      uStack_158 = uStack_b8;
      uStack_160 = uStack_c0;
      uStack_148 = uStack_a8;
      uStack_150 = uStack_b0;
      uStack_198 = uStack_f8;
      uStack_1a0 = uStack_100;
      uStack_188 = uStack_e8;
      uStack_190 = uStack_f0;
      func_0x000107c614a8(auStack_68);
      func_0x000100b64ce4(&uStack_1a0,0x112ef67a8,&UNK_10db24e58);
    }
    if ((param_2 & 1) == 0) {
      func_0x000107c51a5c(lVar4);
    }
    else {
      func_0x000107c51a4c();
    }
    func_0x000107c615e8(lVar4);
  }
  return;
}



/* Entry: 102b53cb8; end: 102b53ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b53cb8(long param_1,ulong param_2,long param_3,ulong param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 auStack_1f0 [2];
  undefined8 *puStack_1e0;
  ulong uStack_1d8;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  byte abStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  byte *pbStack_d8;
  ulong uStack_d0;
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_108,0,0);
  uVar3 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar3 == 0) {
    return;
  }
  puVar1 = (undefined8 *)(param_3 + 0x10);
  uVar4 = uVar3;
  if ((param_2 & 1) == 0) {
LAB_102b53d4c:
    if (((param_4 & 1) != 0) || (FUN_102b53ec8(), (uVar4 & 1) == 0)) goto LAB_102b53db4;
    if (param_5 == 0) goto LAB_102b53ea4;
    abStack_120[0] = 1;
    pbStack_d8 = abStack_120;
    puStack_1e0 = puVar1;
    uStack_1d8 = uVar3;
    puStack_e0 = puVar1;
    uStack_d0 = uVar3;
    func_0x000107c61174(param_5);
    func_0x000103afb298(0x102b551a8,&uStack_f0,FUN_102b551b4,auStack_1f0);
    func_0x000107c61170(param_5);
    if ((abStack_120[0] & 1) == 0) goto LAB_102b53ea4;
  }
  else {
    uVar4 = *(ulong *)(uVar3 + _DAT_112ef6720);
    if (uVar4 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c426b0();
        func_0x000107c615e8();
        if ((uVar5 & 1) != 0) goto LAB_102b53d4c;
      }
    }
LAB_102b53db4:
    func_0x000107c61428(puVar1,abStack_120,1,0);
    *(undefined1 *)(param_3 + 0x61) = 0;
    *(undefined1 *)(param_3 + 0x78) = 1;
  }
  func_0x000107c61428(puVar1,auStack_138,0,0);
  lVar2 = _DAT_112ef6670;
  uStack_88 = *(undefined8 *)(param_3 + 0x78);
  uStack_90 = *(undefined8 *)(param_3 + 0x70);
  uStack_78 = *(undefined8 *)(param_3 + 0x88);
  uStack_80 = *(undefined8 *)(param_3 + 0x80);
  uStack_68 = *(undefined8 *)(param_3 + 0x98);
  uStack_70 = *(undefined8 *)(param_3 + 0x90);
  uStack_60 = *(undefined8 *)(param_3 + 0xa0);
  uStack_c8 = *(undefined8 *)(param_3 + 0x38);
  uStack_d0 = *(ulong *)(param_3 + 0x30);
  uStack_b8 = *(undefined8 *)(param_3 + 0x48);
  uStack_c0 = *(undefined8 *)(param_3 + 0x40);
  uStack_a8 = *(undefined8 *)(param_3 + 0x58);
  uStack_b0 = *(undefined8 *)(param_3 + 0x50);
  uStack_98 = *(undefined8 *)(param_3 + 0x68);
  uStack_a0 = *(undefined8 *)(param_3 + 0x60);
  uStack_e8 = *(undefined8 *)(param_3 + 0x18);
  uStack_f0 = *puVar1;
  pbStack_d8 = *(byte **)(param_3 + 0x28);
  puStack_e0 = *(undefined8 **)(param_3 + 0x20);
  func_0x000107c61428(uVar3 + _DAT_112ef6670,auStack_150,0x21,0);
  func_0x000100b63318(&uStack_f0,auStack_1f0);
  uVar6 = *(undefined8 *)(uVar3 + lVar2);
  func_0x000107c61558(uVar6);
  auStack_1f0[0] = *(undefined8 *)(uVar3 + lVar2);
  *(undefined8 *)(uVar3 + lVar2) = 0x8000000000000000;
  func_0x000100b633a4(&uStack_f0,0,uVar6);
  *(undefined8 *)(uVar3 + lVar2) = auStack_1f0[0];
  func_0x000107c614a8(auStack_150);
  if (*(char *)(uVar3 + _DAT_112ef6680) == '\0') {
    func_0x000100b62548();
  }
LAB_102b53ea4:
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 102b53ec8; end: 102b544bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102b53ec8(void)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long unaff_x20;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5ec74();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar3 = 0;
  func_0x000107c5ef64();
  lStack_78 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  lVar8 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_68 = lVar8;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12;
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar10 = lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar10 - extraout_x12_00;
  lVar5 = *(long *)(unaff_x20 + _DAT_112ef6700);
  if (lVar5 != 0) {
    lStack_80 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar3 = lVar5;
      func_0x000107c41334();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c5ee94(lVar16);
        func_0x000107c61170(lVar3);
      }
      (**(code **)(lVar11 + 0x38))(lVar16,lVar3 == 0,1,lVar4);
      func_0x000100b63f80(lVar16,lVar10,0x112d373d8,&UNK_10d9014c0);
      lVar3 = lVar10;
      (**(code **)(lVar11 + 0x30))(lVar10,1,lVar4);
      if ((int)lVar3 == 1) {
        func_0x000100b64ce4(lVar16,0x112d373d8,&UNK_10d9014c0);
        func_0x000107c615e8(lVar5);
        func_0x000100b64ce4(lVar10,0x112d373d8,&UNK_10d9014c0);
      }
      else {
        (**(code **)(lVar11 + 0x20))(lVar8,lVar10,lVar4);
        func_0x000107c5eea0(lStack_70);
        func_0x000107c5ef54(lStack_68);
        lVar3 = 0x112d36588;
        func_0x0001000285a8(0x112d36588,&UNK_10d900a30);
        lVar6 = 0;
        func_0x000107c5ef5c();
        lVar14 = *(long *)(lVar6 + -8);
        uVar9 = (ulong)*(byte *)(lVar14 + 0x50);
        uVar15 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
        puStack_98 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        lStack_88 = lVar13;
        func_0x000107c613fc(lVar3,uVar15 + *(long *)(lVar14 + 0x48),uVar9 | 7);
        *(undefined8 *)(lVar3 + 0x18) = 2;
        *(undefined8 *)(lVar3 + 0x10) = 1;
        (**(code **)(lVar14 + 0x68))
                  (lVar3 + uVar15,
                   *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4houryA2EmFWC_110350d80,
                   lVar6);
        lVar10 = lVar3;
        func_0x000100ddce0c(lVar3);
        lStack_90 = lVar2;
        func_0x000107c61588(lVar3);
        (**(code **)(lVar14 + 8))(lVar3 + uVar15,lVar6);
        func_0x000107c6145c(lVar3,0x20,7);
        lVar3 = lStack_68;
        lVar2 = lStack_70;
        puVar1 = puStack_98;
        lVar13 = lVar8;
        func_0x000107c5ef28(puStack_98,lVar10,lVar8,lStack_70);
        uVar7 = (uint)lVar13;
        func_0x000107c6142c(lVar10);
        func_0x000107c5ec4c();
        func_0x000107c615e8(lVar5);
        (**(code **)(lStack_88 + 8))(puVar1,lStack_90);
        (**(code **)(lStack_78 + 8))(lVar3,lStack_80);
        pcVar12 = *(code **)(lVar11 + 8);
        (*pcVar12)(lVar2,lVar4);
        (*pcVar12)(lVar8,lVar4);
        func_0x000100b64ce4(lVar16,0x112d373d8,&UNK_10d9014c0);
        if ((uVar7 & 0xff) != 1) {
          return 0x17 < lVar10;
        }
      }
    }
  }
  return true;
}



/* Entry: 102b544bc; end: 102b5451b; -[_TtC35SCMemoriesCameraTabButtonController33MemoriesCameraTabButtonController init] */

void FUN_102b544bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesCameraTabButtonController.MemoriesCameraTabButtonController",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b544e8);
  (*pcVar1)();
}



/* Entry: 102b5451c; end: 102b546c3; -[_TtC35SCMemoriesCameraTabButtonController33MemoriesCameraTabButtonController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b545c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b545cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5451c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ef6670));
  func_0x000100b64ce4(param_1 + _DAT_112ef6678,0x112ef67a8,&UNK_10db24e58);
  func_0x000107c61610(param_1 + _DAT_112ef6688);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef6690));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef6698));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef66a0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef66a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef66b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef66b8));
  return;
}



/* Entry: 102b546c4; end: 102b5487f;  */

ulong FUN_102b546c4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b547a8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b547ac);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000100b650a0(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b54880);
  (*pcVar2)();
}



/* Entry: 102b54880; end: 102b54a63;  */

void FUN_102b54880(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 auStack_198 [152];
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
  
  func_0x0001000285a8(0x112ef67c0,&UNK_10db24e78);
  lVar9 = *unaff_x20;
  lVar5 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar5 != lVar9 || lVar1 + uVar6 * 8 <= lVar5 + 0x40U) {
      func_0x000107c610b8(lVar5 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_102b5496c;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 0x98);
        uStack_d8 = puVar3[5];
        uStack_e0 = puVar3[4];
        uStack_c8 = puVar3[7];
        uStack_d0 = puVar3[6];
        uStack_b8 = puVar3[9];
        uStack_c0 = puVar3[8];
        uStack_a8 = puVar3[0xb];
        uStack_b0 = puVar3[10];
        uStack_88 = puVar3[0xf];
        uStack_90 = puVar3[0xe];
        uStack_78 = puVar3[0x11];
        uStack_80 = puVar3[0x10];
        uStack_70 = puVar3[0x12];
        uStack_98 = puVar3[0xd];
        uStack_a0 = puVar3[0xc];
        uStack_f8 = puVar3[1];
        uStack_100 = *puVar3;
        uStack_e8 = puVar3[3];
        uStack_f0 = puVar3[2];
        *(undefined1 *)(*(long *)(lVar5 + 0x30) + uVar8) =
             *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
        puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar8 * 0x98);
        puVar3[1] = uStack_f8;
        *puVar3 = uStack_100;
        puVar3[3] = uStack_e8;
        puVar3[2] = uStack_f0;
        puVar3[9] = uStack_b8;
        puVar3[8] = uStack_c0;
        puVar3[0xb] = uStack_a8;
        puVar3[10] = uStack_b0;
        puVar3[5] = uStack_d8;
        puVar3[4] = uStack_e0;
        puVar3[7] = uStack_c8;
        puVar3[6] = uStack_d0;
        puVar3[0x12] = uStack_70;
        puVar3[0xf] = uStack_88;
        puVar3[0xe] = uStack_90;
        puVar3[0x11] = uStack_78;
        puVar3[0x10] = uStack_80;
        puVar3[0xd] = uStack_98;
        puVar3[0xc] = uStack_a0;
        func_0x000100b63318(&uStack_100,auStack_198);
        if (uVar6 != 0) break;
LAB_102b5496c:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b54a64);
            (*pcVar4)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_102b54a34;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_102b54a34:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 102b54a64; end: 102b54d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b54a64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
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
  
  func_0x000107c614f0();
  *(undefined **)(unaff_x20 + _DAT_112ef6670) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef6678);
  func_0x000100b6250c(&uStack_e8);
  puVar1[0xd] = uStack_80;
  puVar1[0xc] = uStack_88;
  puVar1[0xf] = uStack_70;
  puVar1[0xe] = uStack_78;
  puVar1[0x11] = uStack_60;
  puVar1[0x10] = uStack_68;
  puVar1[0x12] = uStack_58;
  puVar1[5] = uStack_c0;
  puVar1[4] = uStack_c8;
  puVar1[7] = uStack_b0;
  puVar1[6] = uStack_b8;
  puVar1[9] = uStack_a0;
  puVar1[8] = uStack_a8;
  puVar1[0xb] = uStack_90;
  puVar1[10] = uStack_98;
  puVar1[1] = uStack_e0;
  *puVar1 = uStack_e8;
  puVar1[3] = uStack_d0;
  puVar1[2] = uStack_d8;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6680) = 3;
  func_0x000107c61614(unaff_x20 + _DAT_112ef6688,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ef6690) = 0;
  lVar2 = _DAT_112ef6698;
  puVar5 = &UNK_10db24d10;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66b0) = 0;
  lVar2 = _DAT_112ef66b8;
  uVar6 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66c0) = 0;
  lVar2 = _DAT_112ef66c8;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66c8) = 0;
  lVar3 = _DAT_112ef66d0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef66f8) = 0;
  lVar4 = _DAT_112ef6700;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6700) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6708) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6710) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6718) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6720) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6728) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6730) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6738) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6740) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6748) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6750) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6758) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6760) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6768) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6770) = 0;
  *(undefined8 *)(unaff_x20 + lVar2) = param_2;
  *(undefined8 *)(unaff_x20 + lVar4) = param_1;
  *(undefined8 *)(unaff_x20 + lVar3) = param_3;
  puVar5 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&stack0xffffffffffffff08,puVar5);
  return;
}



/* Entry: 102b54d10; end: 102b54e9b;  */

int FUN_102b54d10(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    param_2 = param_2 + 4;
    uVar4 = 2;
    if (0xfffeff < param_2) {
      uVar4 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar4 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar4;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar4 = (uint)param_1[1], param_1[1] != 0)) goto LAB_102b54d78;
    }
    else if (uVar1 == 2) {
      uVar4 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_102b54d78:
        return ((uint)*param_1 | uVar4 << 8) - 4;
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 != 0) goto LAB_102b54d78;
    }
  }
  uVar4 = (uint)*param_1;
  iVar2 = 0;
  if (1 < uVar4 - 2) {
    iVar2 = uVar4 - 4;
  }
  iVar3 = 0;
  if (2 < uVar4) {
    iVar3 = iVar2;
  }
  return iVar3;
}



/* Entry: 102b54e9c; end: 102b5502b;  */

undefined8 * FUN_102b54e9c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[6] = param_2[6];
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[8] = param_2[8];
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)((long)param_1 + 0x51) = *(undefined1 *)((long)param_2 + 0x51);
  uVar2 = param_2[0xc];
  uVar3 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  param_1[0xc] = uVar2;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar2 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  uVar2 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  lVar1 = param_2[0x11];
  if (param_1[0x11] == 0) {
    if (lVar1 != 0) {
      uVar2 = param_2[0x12];
      param_1[0x11] = lVar1;
      param_1[0x12] = uVar2;
      func_0x000107c6157c();
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar2 = param_2[0x12];
      uVar3 = param_1[0x12];
      param_1[0x11] = lVar1;
      param_1[0x12] = uVar2;
      func_0x000107c6157c();
      func_0x000107c61574(uVar3);
      return param_1;
    }
    func_0x000107c61574(param_1[0x12]);
  }
  lVar1 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = lVar1;
  return param_1;
}



/* Entry: 102b5502c; end: 102b551b3;  */

int FUN_102b5502c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102b550a8;
        goto LAB_102b5508c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102b5508c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102b550a8:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102b551b4; end: 102b551f7;  */

void FUN_102b551b4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1,auStack_38,1,0);
  *(undefined1 *)(lVar1 + 0x51) = 0;
  *(undefined1 *)(lVar1 + 0x68) = 1;
  return;
}



/* Entry: 102b551f8; end: 102b55203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b551f8(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  if (*(char *)(lVar3 + _DAT_112ef6680) != '\0') goto LAB_102b53a90;
  lVar2 = *(long *)(lVar3 + _DAT_112ef6720);
  if (lVar2 == 0) {
LAB_102b53a80:
    lVar4 = 0;
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) goto LAB_102b53a80;
    lVar4 = lVar2;
    func_0x000107c41f18();
    func_0x000107c615e8(lVar2);
  }
  FUN_102b53aac(uVar1,lVar4);
LAB_102b53a90:
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102b55204; end: 102b5524b;  */

void FUN_102b55204(void)

{
  undefined1 auStack_40 [16];
  
  func_0x0001043ee624(FUN_102b5524c,auStack_40,FUN_102b532bc,0);
  return;
}



/* Entry: 102b5524c; end: 102b55253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5524c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if ((*(char *)(lVar2 + _DAT_112ef6680) == '\x01') &&
       (lVar2 = *(long *)(lVar2 + _DAT_112ef66f8), lVar2 != 0)) {
      func_0x000107c61174();
      lVar1 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c3d064();
        func_0x000107c615e8(lVar1);
      }
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102b55254; end: 102b5526f;  */

void FUN_102b55254(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000100c6f3ec(param_1,*(undefined8 *)(unaff_x20 + 0x10),0);
  return;
}



/* Entry: 102b55270; end: 102b55287;  */

void FUN_102b55270(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102b55288; end: 102b55647;  */

long FUN_102b55288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
  }
  else {
    uVar2 = param_2;
    func_0x000107c4ae78();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4aeb4();
    func_0x000107c61180();
    puVar4 = &UNK_1105a1530;
    func_0x000107c613fc(&UNK_1105a1530,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,unaff_x20);
    puVar5 = &UNK_1105a1558;
    func_0x000107c613fc(&UNK_1105a1558,0x98,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    *(undefined8 *)(puVar5 + 0x20) = param_4;
    *(undefined8 *)(puVar5 + 0x28) = uVar2;
    *(undefined8 *)(puVar5 + 0x30) = param_3;
    *(undefined8 *)(puVar5 + 0x38) = param_5;
    *(undefined8 *)(puVar5 + 0x40) = param_6;
    *(undefined8 *)(puVar5 + 0x48) = param_7;
    *(undefined8 *)(puVar5 + 0x50) = param_8;
    *(undefined8 *)(puVar5 + 0x58) = param_9;
    *(undefined8 *)(puVar5 + 0x60) = param_11;
    *(undefined8 *)(puVar5 + 0x68) = param_10;
    *(undefined8 *)(puVar5 + 0x70) = param_12;
    *(undefined8 *)(puVar5 + 0x78) = param_13;
    *(undefined8 *)(puVar5 + 0x80) = param_14;
    *(undefined8 *)(puVar5 + 0x88) = param_15;
    *(undefined8 *)(puVar5 + 0x90) = param_16;
    puStack_78 = &UNK_100b61c3c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100b5ebe4;
    puStack_80 = &UNK_1105a1570;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar5;
    func_0x000107c60bc4();
    puVar4 = puStack_70;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_11);
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_12);
    func_0x000107c61174(param_13);
    func_0x000107c61174(param_14);
    func_0x000107c61174(param_15);
    func_0x000107c61174(param_16);
    func_0x000107c61574(puVar4);
    func_0x000107c5dc64(uVar3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar2);
    param_16 = uVar3;
  }
  func_0x000107c61170(param_16);
  return unaff_x20;
}



/* Entry: 102b55648; end: 102b5566b;  */

void FUN_102b55648(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b5566c; end: 102b55677;  */

void FUN_102b5566c(void)

{
  return;
}



/* Entry: 102b55678; end: 102b556bf;  */

void FUN_102b55678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  func_0x000100b62cf8(param_1,param_2,param_3);
  return;
}



/* Entry: 102b556c0; end: 102b5574b; -[_TtC35SCMemoriesCameraTabButtonController50MemoriesCameraTabButtonMemoriesGestureHandlingView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b556c0(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ef6890) = 0;
  *(undefined1 *)(param_1 + _DAT_112ef6898) = 2;
  *(undefined8 *)(param_1 + _DAT_112ef68a0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef68a8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCMemoriesCameraTabButtonController/MemoriesCameraTabButtonMemoriesGestureHandlingView.swift"
                      ,0x5c,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5574c);
  (*pcVar1)();
}



/* Entry: 102b5574c; end: 102b5574f; -[_TtC35SCMemoriesCameraTabButtonController50MemoriesCameraTabButtonMemoriesGestureHandlingView setBadgeIsVisible:badgeCountIsVisible:badgeIsImage:] */

void FUN_102b5574c(void)

{
  return;
}



/* Entry: 102b55750; end: 102b55797; -[_TtC35SCMemoriesCameraTabButtonController50MemoriesCameraTabButtonMemoriesGestureHandlingView handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b55750(long param_1)

{
  if (*(long *)(param_1 + _DAT_112ef6890) != 0) {
    if ((*(byte *)(param_1 + _DAT_112ef6898) != 2) &&
       ((*(byte *)(param_1 + _DAT_112ef6898) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c152490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + _DAT_112ef6890),
                 PTR_s_scrollToGalleryFromCameraAnimate_112632340,1,0xb,0,0,0);
      return;
    }
  }
  return;
}



/* Entry: 102b55798; end: 102b55847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b55798(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112ef6890);
  if (uVar2 != 0) {
    func_0x000107c615f0(uVar2);
    func_0x000107c5cf78(param_3);
    if ((param_2 < -30.0) && (uVar1 = uVar2, func_0x000107c4a214(), (uVar1 & 1) == 0)) {
      if (*(char *)(unaff_x20 + _DAT_112ef68b0) == '\x01') {
        func_0x000107c51a4c();
      }
      else {
        func_0x000107c51a5c(uVar2,param_4,1,0xb,0);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
    return;
  }
  return;
}



/* Entry: 102b55848; end: 102b55897; -[_TtC35SCMemoriesCameraTabButtonController50MemoriesCameraTabButtonMemoriesGestureHandlingView handleSwipe:] */

/* WARNING: Possible PIC construction at 0x000102b55880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b55884) */

void FUN_102b55848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102b55798(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102b55898; end: 102b5589b; -[_TtC35SCMemoriesCameraTabButtonController50MemoriesCameraTabButtonMemoriesGestureHandlingView hitTest:withEvent:] */

void FUN_102b55898(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102b5589c; end: 102b558fb; -[_TtC35SCMemoriesCameraTabButtonController50MemoriesCameraTabButtonMemoriesGestureHandlingView initWithFrame:] */

void FUN_102b5589c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesCameraTabButtonController.MemoriesCameraTabButtonMemoriesGestureHandlingView"
                      ,0x56,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b558c8);
  (*pcVar1)();
}



/* Entry: 102b558fc; end: 102b55943; -[_TtC35SCMemoriesCameraTabButtonController50MemoriesCameraTabButtonMemoriesGestureHandlingView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b55928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b5592c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b558fc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef6890));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef68a0));
  return;
}



/* Entry: 102b55944; end: 102b5598b;  */

void FUN_102b55944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  func_0x000100b66e44(param_1,param_2,param_3);
  return;
}



/* Entry: 102b5598c; end: 102b55a37; -[_TtC35SCMemoriesCameraTabButtonController51MemoriesCameraTabButtonProminentLensCloseButtonView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5598c(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  func_0x000107c61614(param_1 + _DAT_112ef68e0,0);
  *(undefined8 *)(param_1 + _DAT_112ef68e8) = 0x4038000000000000;
  *(undefined8 *)(param_1 + _DAT_112ef68f0) = 0x4038000000000000;
  lVar1 = _DAT_112ef68f8;
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCMemoriesCameraTabButtonController/MemoriesCameraTabButtonProminentLensCloseButtonView.swift"
                      ,0x5d,2,0x24,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b55a38);
  (*pcVar2)();
}



/* Entry: 102b55a38; end: 102b55a3b; -[_TtC35SCMemoriesCameraTabButtonController51MemoriesCameraTabButtonProminentLensCloseButtonView setEnableDarkModeAlways:] */

void FUN_102b55a38(void)

{
  return;
}



/* Entry: 102b55a3c; end: 102b55a3f; -[_TtC35SCMemoriesCameraTabButtonController51MemoriesCameraTabButtonProminentLensCloseButtonView setSelected:overrideTintColor:] */

void FUN_102b55a3c(void)

{
  return;
}



/* Entry: 102b55a40; end: 102b55a43; -[_TtC35SCMemoriesCameraTabButtonController51MemoriesCameraTabButtonProminentLensCloseButtonView setBadgeIsVisible:badgeCountIsVisible:badgeIsImage:] */

void FUN_102b55a40(void)

{
  return;
}



/* Entry: 102b55a44; end: 102b55a47; -[_TtC35SCMemoriesCameraTabButtonController51MemoriesCameraTabButtonProminentLensCloseButtonView setThemeColor:] */

void FUN_102b55a44(void)

{
  return;
}



/* Entry: 102b55a48; end: 102b55a4b; -[_TtC35SCMemoriesCameraTabButtonController51MemoriesCameraTabButtonProminentLensCloseButtonView setHighlightThemeColor:] */

void FUN_102b55a48(void)

{
  return;
}



/* Entry: 102b55a4c; end: 102b55b13; -[_TtC35SCMemoriesCameraTabButtonController51MemoriesCameraTabButtonProminentLensCloseButtonView handleTap:] */

/* WARNING: Possible PIC construction at 0x000102b55aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b55ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b55afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b55acc) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000102b55ab0) */
/* WARNING: Removing unreachable block (ram,0x000102b55af8) */
/* WARNING: Removing unreachable block (ram,0x000102b55ab4) */
/* WARNING: Removing unreachable block (ram,0x000102b55b00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b55a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112ef68e0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c5c734(lVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102b55b14; end: 102b55b1b; -[_TtC35SCMemoriesCameraTabButtonController51MemoriesCameraTabButtonProminentLensCloseButtonView shouldHideOriginalButton] */

undefined8 FUN_102b55b14(void)

{
  return 1;
}



/* Entry: 102b55b1c; end: 102b55b7b; -[_TtC35SCMemoriesCameraTabButtonController51MemoriesCameraTabButtonProminentLensCloseButtonView initWithFrame:] */

void FUN_102b55b1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesCameraTabButtonController.MemoriesCameraTabButtonProminentLensCloseButtonView"
                      ,0x57,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b55b48);
  (*pcVar1)();
}



/* Entry: 102b55b7c; end: 102b55bb3; -[_TtC35SCMemoriesCameraTabButtonController51MemoriesCameraTabButtonProminentLensCloseButtonView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b55b7c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef68e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef68f8));
  return;
}



/* Entry: 102b55bb4; end: 102b55bf3;  */

void FUN_102b55bb4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_102b55bf4(param_1,param_2);
  return;
}



/* Entry: 102b55bf4; end: 102b55e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b55bf4(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  *(undefined **)(unaff_x20 + _DAT_112ef6930) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6938) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6940) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6948) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef6950);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112ef6958;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6958) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6960) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6968) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6970) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6978) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef6980) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6988) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6990) = 0x81;
  *(undefined8 *)(unaff_x20 + _DAT_112ef6998) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef69a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef69a8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef69b0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef69b8) = 0;
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112ef69c0) = param_2;
  puVar5 = PTR_s_initWithFrame__1125e2948;
  uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x000107c615f0(param_1);
  func_0x000107c61154(uVar6,uVar7,uVar8,uVar9,&stack0xffffffffffffff90,puVar5);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c61174();
  puVar4 = puVar3;
  FUN_102b55e94();
  func_0x000107c59e10(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  puVar5 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  func_0x000107c61170(puVar3);
  uVar6 = *(undefined8 *)(puVar3 + _DAT_112ef6960);
  *(undefined **)(puVar3 + _DAT_112ef6960) = puVar5;
  func_0x000107c61174();
  func_0x000107c61170(uVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c3d6fc(puVar3);
    func_0x000107c61170(puVar5);
  }
  puVar5 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  uVar6 = *(undefined8 *)(puVar3 + _DAT_112ef6968);
  *(undefined **)(puVar3 + _DAT_112ef6968) = puVar5;
  func_0x000107c61174();
  func_0x000107c61170(uVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c3d6fc(puVar3);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_1);
  return puVar3;
}



/* Entry: 102b55e94; end: 102b55f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b55e94(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112ef6988);
  if (uVar2 == 0) {
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
  }
  else {
    cVar1 = *(char *)(unaff_x20 + _DAT_112ef6980);
    func_0x000107c61174();
    uVar3 = uVar2;
    func_0x000107c49820();
    uVar4 = uVar3 | 0xffffffff80000000;
    if (cVar1 == '\0') {
      uVar4 = uVar3;
    }
    func_0x000107c5fe40(uVar4);
    func_0x000107c61170(uVar2);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    uVar2 = uVar4;
    func_0x000107c49820(uVar4);
    func_0x000107c5af88(puVar5,param_2,uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 102b55f4c; end: 102b55f7f; -[_TtC35SCMemoriesCameraTabButtonController39MemoriesCameraTabButtonSnapFeedHintView initWithCoder:] */

undefined8 FUN_102b55f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000102b5785c();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 102b55f80; end: 102b56073;  */

/* WARNING: Possible PIC construction at 0x000102b55ff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b56034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b56044: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b55ff4) */
/* WARNING: Removing unreachable block (ram,0x000102b56048) */
/* WARNING: Removing unreachable block (ram,0x000102b56004) */
/* WARNING: Removing unreachable block (ram,0x000102b56038) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b55f80(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ef6950);
    uVar3 = puVar1[1];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    lVar2 = param_1;
    func_0x000107c61174();
    func_0x000107c61434(param_3);
    func_0x000107c6142c(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ef6948);
    *(long *)(unaff_x20 + _DAT_112ef6948) = param_1;
    func_0x000107c61174(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 102b56074; end: 102b5626b;  */

void FUN_102b56074(double param_1,double param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  double dVar8;
  double dVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  ppuVar5 = &puStack_b0;
  dVar8 = param_1;
  func_0x000107c45034();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c5b078();
    dVar9 = 40.0 / param_2;
    if (40.0 / param_2 < 40.0 / dVar8) {
      dVar9 = 40.0 / dVar8;
    }
    puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486f8(0x4044000000000000,0x4044000000000000);
    puVar3 = &UNK_1105a17d0;
    func_0x000107c613fc(&UNK_1105a17d0,0x50,7);
    *(undefined8 *)(puVar3 + 0x18) = 0x4044000000000000;
    *(undefined8 *)(puVar3 + 0x10) = 0x4044000000000000;
    *(double *)(puVar3 + 0x20) = param_1;
    *(long *)(puVar3 + 0x28) = unaff_x20;
    *(double *)(puVar3 + 0x30) = (40.0 - dVar8 * dVar9) * 0.5;
    *(double *)(puVar3 + 0x38) = (40.0 - param_2 * dVar9) * 0.5;
    *(double *)(puVar3 + 0x40) = dVar8 * dVar9;
    *(double *)(puVar3 + 0x48) = param_2 * dVar9;
    puVar4 = &UNK_1105a17f8;
    func_0x000107c613fc(&UNK_1105a17f8,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_102b57a24;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcStack_90 = FUN_102b57a3c;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100f9148c;
    puStack_98 = &UNK_1105a1810;
    puStack_88 = puVar4;
    func_0x000107c60bc4(&puStack_b0);
    puVar6 = puStack_88;
    func_0x000107c61174(unaff_x20);
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar6);
    puVar6 = puVar2;
    func_0x000107c45138(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    puVar7 = puVar4;
    func_0x000107c61544(puVar4,"",0x6b,0x1a9,0x2b,1);
    func_0x000107c61574(puVar4);
    if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b5626c);
      (*pcVar1)();
    }
    func_0x000107c55258();
    func_0x000107c61574(puVar3);
    func_0x000107c61170(unaff_x20);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 102b5626c; end: 102b5636f;  */

/* WARNING: Possible PIC construction at 0x000102b56304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b5632c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b56308) */
/* WARNING: Removing unreachable block (ram,0x000102b56318) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b5626c(uint param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef6948);
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_102b56370();
    func_0x000102b5644c();
    if ((*(char *)(unaff_x20 + _DAT_112ef69b8) == '\x01') && ((param_1 & 1) != 0)) {
      *(undefined1 *)(unaff_x20 + _DAT_112ef69b8) = 0;
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_112ef6938);
    if (lVar2 == 0) {
      FUN_102b56558(param_1 & 1);
      func_0x000107c4abfc();
    }
    else {
      func_0x000107c61174();
      func_0x000107c45154(lVar1,param_2,1);
      func_0x000107c61180();
      func_0x000107c55258(lVar2,param_2,lVar1);
      lVar1 = lVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102b56370; end: 102b56557;  */

/* WARNING: Possible PIC construction at 0x000102b563f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b56420: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b563f8) */
/* WARNING: Removing unreachable block (ram,0x000102b563fc) */
/* WARNING: Removing unreachable block (ram,0x000102b56424) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b56370(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = _DAT_112ef6938;
  if (*(long *)(unaff_x20 + _DAT_112ef6938) != 0) {
    return;
  }
  uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c469a4(uVar3,uVar4,uVar5,uVar6);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102b56558; end: 102b56beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b56558(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_138 [64];
  undefined1 auStack_f8 [80];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar3 = _DAT_112ef6930;
  lVar11 = *(long *)(unaff_x20 + _DAT_112ef6940);
  if (lVar11 == 0) {
    return;
  }
  lVar13 = *(long *)(unaff_x20 + _DAT_112ef6938);
  if (lVar13 == 0) {
    return;
  }
  if ((param_1 & 1) == 0) {
    if (*(char *)(unaff_x20 + _DAT_112ef69b8) != '\x01') {
      return;
    }
    func_0x000107c61428(unaff_x20 + _DAT_112ef6930,auStack_90,0,0);
    uVar9 = *(ulong *)(unaff_x20 + lVar3);
    if (uVar9 >> 0x3e == 0) {
      if (*(long *)((uVar9 & 0xffffffffffffff8) + 0x10) < 1) goto LAB_102b567b4;
LAB_102b5668c:
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      uVar14 = *(undefined8 *)(unaff_x20 + lVar3);
      func_0x000100847984(0);
      func_0x000107c61174(lVar11);
      func_0x000107c61174(lVar13);
      uVar2 = uVar14;
      func_0x000107c61434(uVar14);
      func_0x000107c5fc48();
      func_0x000107c6142c(uVar14);
      func_0x000107c413a0(puVar1);
      func_0x000107c61170(uVar2);
    }
    else {
      uVar8 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar8 = uVar9;
      }
      func_0x000107c60480();
      if (0 < (long)uVar8) goto LAB_102b5668c;
LAB_102b567b4:
      func_0x000107c61174(lVar11);
      func_0x000107c61174(lVar13);
    }
    lVar3 = lVar11;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar12 = unaff_x20;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c40284(0xc02a000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar12);
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ef69a8);
    *(long *)(unaff_x20 + _DAT_112ef69a8) = lVar4;
    func_0x000107c61170(uVar2);
    goto LAB_102b56828;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112ef6930,auStack_90,0,0);
  uVar9 = *(ulong *)(unaff_x20 + lVar3);
  if (uVar9 >> 0x3e == 0) {
    if (*(long *)((uVar9 & 0xffffffffffffff8) + 0x10) < 1) goto LAB_102b56708;
LAB_102b565e0:
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    uVar14 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x000100847984(0);
    func_0x000107c61174(lVar11);
    func_0x000107c61174(lVar13);
    uVar2 = uVar14;
    func_0x000107c61434(uVar14);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar14);
    func_0x000107c413a0(puVar1);
    func_0x000107c61170(uVar2);
  }
  else {
    uVar8 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar8 = uVar9;
    }
    func_0x000107c60480();
    if (0 < (long)uVar8) goto LAB_102b565e0;
LAB_102b56708:
    func_0x000107c61174(lVar11);
    func_0x000107c61174(lVar13);
  }
  lVar3 = lVar11;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar12 = unaff_x20;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c40284(0xc010000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar12);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ef69a8);
  *(long *)(unaff_x20 + _DAT_112ef69a8) = lVar4;
  func_0x000107c61170(uVar2);
  func_0x000107c526c0(0,lVar13);
  *(undefined1 *)(unaff_x20 + _DAT_112ef69b0) = 1;
LAB_102b56828:
  lVar3 = _DAT_112ef6930;
  func_0x000107c61428(unaff_x20 + _DAT_112ef6930,auStack_a8,1,0);
  lVar5 = *(long *)(unaff_x20 + lVar3);
  *(undefined **)(unaff_x20 + lVar3) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c();
  func_0x0001008478a8();
  lVar12 = lVar5;
  func_0x000107c61534();
  *(undefined8 *)(lVar12 + 0x18) = 7;
  *(undefined8 *)(lVar12 + 0x10) = 3;
  func_0x000107c61174();
  lVar4 = lVar11;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar7 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar6);
  *(long *)(lVar12 + 0x20) = lVar7;
  lVar4 = lVar11;
  func_0x000107c5e308();
  func_0x000107c61180();
  lVar6 = lVar4;
  func_0x000107c40290(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  *(long *)(lVar12 + 0x28) = lVar6;
  lVar4 = lVar11;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  lVar6 = lVar4;
  func_0x000107c40290(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  *(long *)(lVar12 + 0x30) = lVar6;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_f8,0x21,0);
  func_0x0001011d6d7c(lVar12);
  func_0x000107c614a8(auStack_f8);
  func_0x000107c61534(lVar5,auStack_138);
  *(undefined8 *)(lVar5 + 0x18) = 9;
  *(undefined8 *)(lVar5 + 0x10) = 4;
  func_0x000107c61174();
  lVar12 = lVar13;
  func_0x000107c5e308();
  func_0x000107c61180();
  lVar4 = lVar12;
  func_0x000107c40290(0x4044000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  *(long *)(lVar5 + 0x20) = lVar4;
  lVar12 = lVar13;
  func_0x000107c44d9c();
  func_0x000107c61180();
  lVar4 = lVar12;
  func_0x000107c40290(0x4044000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  *(long *)(lVar5 + 0x28) = lVar4;
  lVar12 = lVar13;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar6 = lVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar4);
  *(long *)(lVar5 + 0x30) = lVar6;
  lVar12 = lVar13;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(lVar13);
  lVar4 = unaff_x20;
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar6 = lVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar4);
  *(long *)(lVar5 + 0x38) = lVar6;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_f8,0x21,0);
  func_0x0001011d6d7c(lVar5);
  func_0x000107c614a8(auStack_f8);
  lVar12 = *(long *)(unaff_x20 + _DAT_112ef69a8);
  if (lVar12 != 0) {
    func_0x000107c61428(unaff_x20 + lVar3,auStack_f8,0x21,0);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000101e61a00();
    uVar8 = *(ulong *)(unaff_x20 + lVar3);
    uVar10 = uVar8 & 0xffffffffffffff8;
    uVar9 = *(ulong *)(uVar10 + 0x10);
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      func_0x0001011d8f3c(uVar8,uVar9 + 1,1);
      uVar10 = uVar8 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar10 + 0x10) = uVar9 + 1;
    *(long *)(uVar10 + uVar9 * 8 + 0x20) = lVar12;
    *(ulong *)(unaff_x20 + lVar3) = uVar8;
    func_0x000107c614a8(auStack_f8);
    func_0x000107c61170(lVar12);
  }
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  uVar14 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x000100847984(0);
  uVar2 = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar14);
  func_0x000107c3d048(puVar1);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102b56bec; end: 102b56d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b56bec(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112ef6930;
  func_0x000107c61428(unaff_x20 + _DAT_112ef6930,auStack_58,1,0);
  uVar5 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar5 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  }
  else {
    uVar2 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar2 = uVar5;
    }
    func_0x000107c60480();
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  }
  PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50 = puVar3;
  if (0 < (long)uVar2) {
    func_0x000107c61168(puVar3);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000100847984(0);
    uVar4 = uVar6;
    func_0x000107c61434(uVar6);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar6);
    func_0x000107c413a0(puVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(uVar4);
    *(undefined1 *)(unaff_x20 + _DAT_112ef69b8) = 1;
  }
  func_0x000107c5c42c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c61170();
    func_0x000107c4ff34();
  }
  return;
}



/* Entry: 102b56d04; end: 102b56efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b56d04(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  ppuVar5 = &puStack_b0;
  ppuVar7 = &puStack_b0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_layoutSubviews_112600e60);
  FUN_102b56558(0);
  lVar2 = _DAT_112ef69b0;
  if (*(char *)(unaff_x20 + _DAT_112ef69b0) == '\x01') {
    lVar8 = *(long *)(unaff_x20 + _DAT_112ef6938);
    if ((lVar8 != 0) && (lVar9 = *(long *)(unaff_x20 + _DAT_112ef69a8), lVar9 != 0)) {
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar4 = &UNK_1105a1618;
      func_0x000107c613fc(&UNK_1105a1618,0x28,7);
      *(long *)(puVar4 + 0x10) = lVar8;
      *(long *)(puVar4 + 0x18) = lVar9;
      *(long *)(puVar4 + 0x20) = unaff_x20;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_90 = FUN_102b577fc;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_1000f6b44;
      puStack_98 = &UNK_1105a1630;
      puStack_88 = puVar4;
      func_0x000107c60bc4(&puStack_b0);
      puVar4 = puStack_88;
      func_0x000107c61174(lVar8);
      func_0x000107c61174(lVar9);
      func_0x000107c61174(lVar8);
      func_0x000107c61174(lVar9);
      lVar6 = unaff_x20;
      func_0x000107c61174();
      func_0x000107c61574(puVar4);
      puVar4 = &UNK_1105a1668;
      func_0x000107c613fc(&UNK_1105a1668,0x18,7);
      *(long *)(puVar4 + 0x10) = lVar6;
      pcStack_90 = (code *)0x102b57824;
      puStack_b0 = puVar1;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_100ab47f8;
      puStack_98 = &UNK_1105a1680;
      puStack_88 = puVar4;
      func_0x000107c60bc4(&puStack_b0);
      puVar4 = puStack_88;
      func_0x000107c61174(lVar6);
      func_0x000107c61574(puVar4);
      func_0x000107c3dcc0(0x3ff8000000000000,0,puVar3);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar8);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c60bd0(ppuVar5);
    }
    *(undefined1 *)(unaff_x20 + lVar2) = 0;
  }
  return;
}



/* Entry: 102b56efc; end: 102b56f23; -[_TtC35SCMemoriesCameraTabButtonController39MemoriesCameraTabButtonSnapFeedHintView layoutSubviews] */

void FUN_102b56efc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b56d04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b56f24; end: 102b56f27; -[_TtC35SCMemoriesCameraTabButtonController39MemoriesCameraTabButtonSnapFeedHintView hitTest:withEvent:] */

void FUN_102b56f24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102b56f28; end: 102b57037; -[_TtC35SCMemoriesCameraTabButtonController39MemoriesCameraTabButtonSnapFeedHintView handleTap:] */

/* WARNING: Possible PIC construction at 0x000102b56f5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b56f60) */

void FUN_102b56f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102b579a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102b57038; end: 102b57087; -[_TtC35SCMemoriesCameraTabButtonController39MemoriesCameraTabButtonSnapFeedHintView handleSwipe:] */

/* WARNING: Possible PIC construction at 0x000102b57070: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b57074) */

void FUN_102b57038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102b56f74(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102b57088; end: 102b571ef;  */

void FUN_102b57088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = &UNK_1105a16e0;
  func_0x000107c613fc(&UNK_1105a16e0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x102b579e8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105a16f8;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c3d724(0,0x3fd999999999999a,puVar2);
  func_0x000107c60bd0(ppuVar4);
  puVar3 = &UNK_1105a1730;
  func_0x000107c613fc(&UNK_1105a1730,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  uStack_70 = 0x102b579f4;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105a1748;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar3);
  func_0x000107c3d724(0,0x3ff0000000000000,puVar2);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 102b571f0; end: 102b572e3;  */

void FUN_102b571f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = &UNK_1105a1780;
  func_0x000107c613fc(&UNK_1105a1780,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_50 = FUN_102b579fc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105a1798;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c3dcd8(0x3ff8000000000000,0,0x3fd3333333333333,0,puVar1);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102b572e4; end: 102b573bf;  */

/* WARNING: Possible PIC construction at 0x000102b573a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b573a4) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b572e4(byte param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if ((param_1 & 1) != *(byte *)(unaff_x20 + _DAT_112ef6980)) {
    *(byte *)(unaff_x20 + _DAT_112ef6980) = param_1 & 1;
    lVar1 = _DAT_112ef6978;
    lVar2 = *(long *)(unaff_x20 + _DAT_112ef6978);
    *(undefined1 *)(unaff_x20 + _DAT_112ef6970) = *(undefined1 *)(unaff_x20 + _DAT_112ef6970);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    if (((lVar2 == 0) || ((*(byte *)(unaff_x20 + _DAT_112ef69a0) & 1) != 0)) &&
       (*(long *)(unaff_x20 + _DAT_112ef6998) == 0)) {
      func_0x000107c61174(lVar2);
      FUN_102b55e94();
    }
                    /* WARNING: Could not recover jumptable at 0x00010c216170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 102b573c0; end: 102b5745f; -[_TtC35SCMemoriesCameraTabButtonController39MemoriesCameraTabButtonSnapFeedHintView setEnableDarkModeAlways:] */

void FUN_102b573c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102b572e4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b57460; end: 102b574d7; -[_TtC35SCMemoriesCameraTabButtonController39MemoriesCameraTabButtonSnapFeedHintView setSelected:overrideTintColor:] */

/* WARNING: Possible PIC construction at 0x000102b574b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b574c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b574b4) */
/* WARNING: Removing unreachable block (ram,0x000102b574c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b57460(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112ef6970) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ef6978);
  *(undefined8 *)(param_1 + _DAT_112ef6978) = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102b574d8; end: 102b574db; -[_TtC35SCMemoriesCameraTabButtonController39MemoriesCameraTabButtonSnapFeedHintView setBadgeIsVisible:badgeCountIsVisible:badgeIsImage:] */

void FUN_102b574d8(void)

{
  return;
}



/* Entry: 102b574dc; end: 102b57547; -[_TtC35SCMemoriesCameraTabButtonController39MemoriesCameraTabButtonSnapFeedHintView setThemeColor:] */

/* WARNING: Possible PIC construction at 0x000102b57520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b57530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b57524) */
/* WARNING: Removing unreachable block (ram,0x000102b57534) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b574dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ef6998);
  *(undefined8 *)(param_1 + _DAT_112ef6998) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102b57548; end: 102b5754b; -[_TtC35SCMemoriesCameraTabButtonController39MemoriesCameraTabButtonSnapFeedHintView setHighlightThemeColor:] */

void FUN_102b57548(void)

{
  return;
}



/* Entry: 102b5754c; end: 102b57553; -[_TtC35SCMemoriesCameraTabButtonController39MemoriesCameraTabButtonSnapFeedHintView shouldHideOriginalButton] */

undefined8 FUN_102b5754c(void)

{
  return 1;
}



/* Entry: 102b57554; end: 102b575b3; -[_TtC35SCMemoriesCameraTabButtonController39MemoriesCameraTabButtonSnapFeedHintView initWithFrame:] */

void FUN_102b57554(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesCameraTabButtonController.MemoriesCameraTabButtonSnapFeedHintView",
                      0x4b,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b57580);
  (*pcVar1)();
}



/* Entry: 102b575b4; end: 102b576ef; -[_TtC35SCMemoriesCameraTabButtonController39MemoriesCameraTabButtonSnapFeedHintView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b575e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b57600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b57634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b57654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b57674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b57658) */
/* WARNING: Removing unreachable block (ram,0x000102b57638) */
/* WARNING: Removing unreachable block (ram,0x000102b57604) */
/* WARNING: Removing unreachable block (ram,0x000102b575e4) */
/* WARNING: Removing unreachable block (ram,0x000102b57678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b575b4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ef6930));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef6938));
  return;
}



/* Entry: 102b576f0; end: 102b57753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102b576f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *unaff_x20;
  
  lVar2 = ((long *)(*unaff_x20 + _DAT_112ef6950))[1];
  if (lVar2 == 0) {
    uVar3 = 1;
  }
  else if ((param_2 == 0) ||
          (lVar1 = *(long *)(*unaff_x20 + _DAT_112ef6950), lVar1 == param_1 && lVar2 == param_2)) {
    uVar3 = 0;
  }
  else {
    func_0x000107c605b8();
    uVar3 = (uint)lVar1 ^ 1;
  }
  return uVar3 & 1;
}



/* Entry: 102b57754; end: 102b577fb;  */

void FUN_102b57754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x000107c3e8b0(0,0,param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c3d618();
  func_0x000107c422bc(param_4,param_5,param_6,param_7,param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102b577fc; end: 102b5783b;  */

void FUN_102b577fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar5 = &UNK_1105a16e0;
  func_0x000107c613fc(&UNK_1105a16e0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x102b579e8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105a16f8;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c61174(uVar1);
  func_0x000107c61574(puVar5);
  func_0x000107c3d724(0,0x3fd999999999999a,puVar4);
  func_0x000107c60bd0(ppuVar6);
  puVar5 = &UNK_1105a1730;
  func_0x000107c613fc(&UNK_1105a1730,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  *(undefined8 *)(puVar5 + 0x18) = uVar8;
  uStack_70 = 0x102b579f4;
  puStack_90 = puVar3;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105a1748;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar8);
  func_0x000107c61574(puVar5);
  func_0x000107c3d724(0,0x3ff0000000000000,puVar4);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 102b5783c; end: 102b5799f;  */

void FUN_102b5783c(void)

{
  func_0x000107c61168(&PTR_PTR_11288d9c8);
  return;
}



/* Entry: 102b579a0; end: 102b579fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b579a0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef6958);
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(unaff_x20 + _DAT_112ef69c0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c152490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar1,PTR_s_scrollToGalleryFromCameraAnimate_112632340,1,0xb,0,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1527b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar1,PTR_s_scrollToSnapFeedFromCameraAnimat_112632408,1,0xb,0);
  return;
}



/* Entry: 102b579fc; end: 102b57a23;  */

void FUN_102b579fc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5378c(0xc02a000000000000,*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 102b57a24; end: 102b57a3b;  */

void FUN_102b57a24(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x000107c3e8b0(0,0,uVar3,uVar4,uVar5);
  func_0x000107c61180();
  func_0x000107c3d618();
  func_0x000107c422bc(uVar6,uVar7,uVar8,uVar9,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102b57a3c; end: 102b57a5b;  */

void FUN_102b57a3c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b57a5c; end: 102b57a83;  */

void FUN_102b57a5c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102b57a84; end: 102b57a87; +[SCMemTwoDebugToggleRecognizer installOnViewController:tweaksProvider:] */

void FUN_102b57a84(void)

{
  return;
}



/* Entry: 102b57a88; end: 102b57afb; -[SCMemTwoDebugToggleRecognizer gestureRecognizer:shouldReceiveTouch:] */

uint FUN_102b57a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  FUN_102b58024(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102b57afc; end: 102b57b53; -[SCMemTwoDebugToggleRecognizer gestureRecognizerShouldBegin:] */

uint FUN_102b57afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  func_0x000102b58114();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102b57b54; end: 102b57f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b57b54(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  lVar2 = unaff_x20 + _DAT_112ef69f0;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar8 = *(undefined **)(unaff_x20 + _DAT_112ef69f8);
    puVar3 = puVar8;
    func_0x000107c4cac4();
    if ((undefined *)0x2 < puVar3 + 1) {
      puStack_80 = puVar3;
      func_0x000107c60614(&UNK_1106e28f0,&puStack_80,&UNK_1106e28f0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b57f3c);
      (*pcVar1)();
    }
    lVar10 = *(long *)(&UNK_10db25020 + (long)(puVar3 + 1) * 8);
    puVar4 = puVar8;
    func_0x000107c4cac0();
    uVar5 = 0x6f77546d654d;
    if ((int)puVar4 == 0) {
      uVar5 = 0x79636167654c;
    }
    puStack_80 = (undefined *)0x0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x3d);
    func_0x000107c5fb78(0x6e6e757220776f4e,0xec00000020676e69);
    func_0x000107c5fb78(uVar5,0xe600000000000000);
    func_0x000107c6142c(0xe600000000000000);
    func_0x000107c5fb78(0x2820,0xe200000000000000);
    if (puVar3 == (undefined *)0xffffffffffffffff) {
      uVar9 = 0xed0000464f432067;
      uVar5 = 0x6e69776f6c6c6f66;
    }
    else {
      if (puVar3 == (undefined *)0x0) {
        uVar9 = 0xea00000000006666;
      }
      else {
        uVar9 = 0xe90000000000006e;
      }
      uVar5 = 0x6f20646563726f66;
    }
    func_0x000107c5fb78(uVar5,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c5fb78(0xd00000000000002b,0x800000010f0f2cf0);
    uVar5 = uStack_78;
    puVar3 = puStack_80;
    uVar9 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010f0f2cd0);
    func_0x000107c5fadc(puVar3,uVar5);
    func_0x000107c6142c(uVar5);
    puVar4 = PTR__OBJC_CLASS___UIAlertController_1126aeb78;
    func_0x000107c61168(PTR__OBJC_CLASS___UIAlertController_1126aeb78);
    func_0x000107c3dac0();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar3);
    uVar5 = 0x6c65636e6143;
    func_0x000107c5fadc(0x6c65636e6143,0xe600000000000000);
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_1126aeb80;
    func_0x000107c61168(PTR__OBJC_CLASS___UIAlertAction_1126aeb80);
    puVar6 = puVar3;
    func_0x000107c3cffc();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c3d598(puVar4);
    func_0x000107c61170(puVar6);
    if (lVar10 == -1) {
      uVar9 = 0xea0000000000464f;
      uVar5 = 0x4320776f6c6c6f46;
    }
    else if (lVar10 == 0) {
      uVar9 = 0xec00000079636167;
      uVar5 = 0x654c206563726f46;
    }
    else {
      uVar9 = 0xec0000006f77546d;
      uVar5 = 0x654d206563726f46;
    }
    puVar6 = &UNK_1105a18c8;
    func_0x000107c613fc(&UNK_1105a18c8,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar8;
    *(long *)(puVar6 + 0x18) = lVar10;
    func_0x000107c615f0(puVar8);
    func_0x000107c5fadc(uVar5,uVar9);
    func_0x000107c6142c(uVar9);
    pcStack_60 = FUN_102b5821c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100df8ce8;
    puStack_68 = &UNK_1105a18e0;
    puStack_58 = puVar6;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c3cffc(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar5);
    func_0x000107c3d598(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c4f018(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 102b57f3c; end: 102b57f63; -[SCMemTwoDebugToggleRecognizer handleDoubleTap] */

void FUN_102b57f3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b57b54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b57f64; end: 102b57fb7; -[SCMemTwoDebugToggleRecognizer initWithTarget:action:] */

void FUN_102b57f64(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 auStack_40 [32];
  
  if (param_3 != 0) {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(auStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x000107c60eb0("MemTwoDebugToggle.MemTwoDebugToggleRecognizer",0x2d,"init(target:action:)",
                      0x14,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b57fb8);
  (*pcVar1)();
}



/* Entry: 102b57fb8; end: 102b57feb;  */

void FUN_102b57fb8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b57fec; end: 102b58023; -[SCMemTwoDebugToggleRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b57fec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef69f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ef69f8));
  return;
}



/* Entry: 102b58024; end: 102b581fb;  */

undefined8 FUN_102b58024(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c3ec60();
    func_0x000107c609c4();
    dVar2 = param_1;
    func_0x000107c3ec60(unaff_x20);
    func_0x000107c609c8();
    dVar3 = dVar2;
    func_0x000107c515a0(unaff_x20);
    dVar4 = dVar3;
    func_0x000107c3ec60(unaff_x20);
    func_0x000107c609cc();
    dVar4 = dVar4 + -190.0;
    uVar5 = 0;
    if (dVar4 < 0.0) {
      dVar4 = 0.0;
    }
    uVar1 = 0x4057c00000000000;
    func_0x000107c4b8b8(param_2,param_3,unaff_x20);
    func_0x000107c609a4(param_1 + 95.0,dVar2 + dVar3,dVar4,0x404a000000000000,uVar1,uVar5);
    func_0x000107c61170(unaff_x20);
  }
  return param_2;
}



/* Entry: 102b581fc; end: 102b5821b;  */

void FUN_102b581fc(void)

{
  func_0x000107c61168(&PTR_PTR_11288db18);
  return;
}



/* Entry: 102b5821c; end: 102b5823f;  */

void FUN_102b5821c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf086d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_applyMemTwoModeOverride__11259fb58,
             *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102b58240; end: 102b582ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b58240(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102b58634();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ef6a30) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102b582ac; end: 102b58317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b582ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef6a30) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b58318; end: 102b58377; -[_TtC40RealTimeScanScopedFactoryServiceProvider28SCRealTimeScanScopedServices init] */

void FUN_102b58318(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RealTimeScanScopedFactoryServiceProvider.SCRealTimeScanScopedServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b58344);
  (*pcVar1)();
}



/* Entry: 102b58378; end: 102b58387; -[_TtC40RealTimeScanScopedFactoryServiceProvider28SCRealTimeScanScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b58378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef6a30));
  return;
}



/* Entry: 102b58388; end: 102b583f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b58388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a1ad0;
  func_0x000107c613fc(&UNK_1105a1ad0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102b58710,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102b583f4; end: 102b5848f;  */

void FUN_102b583f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105a19e0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105a19e0;
  return;
}



/* Entry: 102b58490; end: 102b584c7;  */

void FUN_102b58490(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}


