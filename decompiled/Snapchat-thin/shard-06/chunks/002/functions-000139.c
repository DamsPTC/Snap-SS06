/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045857f8; end: 1045858fb;  */

uint FUN_1045857f8(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint unaff_w20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  iVar1 = (int)&uStack_e0;
  FUN_104560f98(param_1,auStack_a8);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_e0,auStack_a8,uVar2,&UNK_11078dce0,6);
  if (iVar1 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_c0 = 1;
    uStack_b8 = 0;
    FUN_10458a570(0,0,0,0,1,0);
    unaff_w20 = 0;
  }
  else {
    uStack_80 = uStack_e0;
    uStack_78 = uStack_d8;
    uStack_70 = (undefined1)uStack_d0;
    uStack_6f = (undefined1)((ulong)uStack_d0 >> 8);
    uStack_68 = uStack_c8;
    uStack_60 = uStack_c0;
    uStack_58 = uStack_b8;
    func_0x0001045f4c0c();
    FUN_10458a570(uStack_e0,uStack_d8,uStack_d0,uStack_c8,uStack_c0,uStack_b8);
  }
  return unaff_w20 & 1;
}



/* Entry: 1045858fc; end: 104585a8b;  */

uint FUN_1045858fc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_104560f98(param_1,auStack_68);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_90,auStack_68,uVar2,&UNK_11078dc58,6);
  lVar7 = lStack_70;
  uVar6 = uStack_78;
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  uVar2 = uStack_90;
  if (iVar1 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_70 = 1;
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    lVar7 = 1;
  }
  else {
    uVar10 = (uint)uStack_80 & 0xff;
    if (*(byte *)(unaff_x20 + 2) == 0xc) {
      if (uVar10 == 0xc) {
LAB_1045859d0:
        lVar8 = unaff_x20[4];
        if (lVar8 == 0) {
          if (lStack_70 == 0) goto LAB_104585a40;
        }
        else if ((lStack_70 != 0) &&
                (((uVar9 = unaff_x20[3], uVar9 == uStack_78 && (lVar8 == lStack_70)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar9,lVar8,uStack_78,lStack_70,0), (uVar9 & 1) != 0)))) {
LAB_104585a40:
          uVar3 = *unaff_x20;
          func_0x000100e25fcc(uVar3,unaff_x20[1],uVar2,uVar4);
          uVar10 = (uint)uVar3;
          func_0x00010458a5a0(uVar2,uVar4,uVar5,uVar6,lVar7);
          goto LAB_1045859a4;
        }
      }
    }
    else if ((uVar10 != 0xc) && (*(byte *)(unaff_x20 + 2) == uVar10)) goto LAB_1045859d0;
  }
  func_0x00010458a5a0(uVar2,uVar4,uVar5,uVar6,lVar7);
  uVar10 = 0;
LAB_1045859a4:
  return uVar10 & 1;
}



/* Entry: 104585a8c; end: 104585ba7;  */

uint FUN_104585a8c(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_a0;
  FUN_104560f98(param_1,auStack_78);
  uVar4 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_a0,auStack_78,uVar4,param_6,6);
  uVar5 = uStack_88;
  uVar4 = uStack_90;
  lVar3 = lStack_98;
  uVar2 = uStack_a0;
  if (iVar1 == 0) {
    lStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uVar2 = 0;
    lVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else if ((param_2 == uStack_a0 && lStack_98 == param_3) ||
          (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (param_2,param_3,uStack_a0,lStack_98,0), (param_2 & 1) != 0)) {
    func_0x000100e25fcc(param_4,param_5,uVar4,uVar5);
    uVar6 = (uint)param_4;
    func_0x00010458a40c(uVar2,lVar3,uVar4,uVar5);
    goto LAB_104585b74;
  }
  func_0x00010458a40c(uVar2,lVar3,uVar4,uVar5);
  uVar6 = 0;
LAB_104585b74:
  return uVar6 & 1;
}



/* Entry: 104585ba8; end: 104585cf3;  */

uint FUN_104585ba8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,code *param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined1 auStack_88 [40];
  
  iVar1 = (int)&uStack_b0;
  FUN_104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_b0,auStack_88,uVar3,param_6,6);
  uVar6 = uStack_98;
  uVar5 = uStack_a0;
  uVar4 = uStack_a8;
  uVar3 = uStack_b0;
  if (iVar1 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    if (param_5 != uStack_98) {
      _swift_retain(param_5);
      _swift_retain(uVar6);
      uVar2 = param_5;
      (*param_7)(param_5,uVar6);
      _swift_release(uVar6);
      _swift_release(param_5);
      if ((uVar2 & 1) == 0) goto LAB_104585cc8;
    }
    func_0x000100e25fcc(param_2,param_3,uVar3,uVar4);
    if ((param_2 & 1) != 0) {
      FUN_104558fb4(param_4,uVar5);
      uVar7 = (uint)param_4;
      func_0x00010458a5d0(uVar3,uVar4,uVar5,uVar6);
      goto LAB_104585cd0;
    }
  }
LAB_104585cc8:
  func_0x00010458a5d0(uVar3,uVar4,uVar5,uVar6);
  uVar7 = 0;
LAB_104585cd0:
  return uVar7 & 1;
}



/* Entry: 104585cf4; end: 104585dcf;  */

uint FUN_104585cf4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint unaff_w20;
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
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_104560f98(param_1,auStack_98);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar2 = &uStack_e0;
  _swift_dynamicCast(puVar2,auStack_98,uVar1,&UNK_11078ddf8,6);
  if ((int)puVar2 == 0) {
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    FUN_10458a760(&uStack_e0,0x113087020,&UNK_10dd19c30);
    unaff_w20 = 0;
  }
  else {
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_f0 = uStack_a0;
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_48 = uStack_b8;
    uStack_50 = uStack_c0;
    uStack_38 = uStack_a8;
    uStack_40 = uStack_b0;
    uStack_30 = uStack_a0;
    uStack_68 = uStack_d8;
    uStack_70 = uStack_e0;
    uStack_58 = uStack_c8;
    uStack_60 = uStack_d0;
    FUN_1045ea6a4();
    FUN_10458a760(&uStack_130,0x113087020,&UNK_10dd19c30);
  }
  return unaff_w20 & 1;
}



/* Entry: 104585dd0; end: 104585ec3;  */

uint FUN_104585dd0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&dStack_90;
  FUN_104560f98(param_2,auStack_78);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&dStack_90,auStack_78,uVar2,&UNK_110790900,6);
  if (iVar1 == 0) {
    dStack_90 = 0.0;
    uStack_88 = 0;
    uStack_80 = 0xf000000000000000;
  }
  else if (param_1 == dStack_90) {
    func_0x000100e25fcc(param_3,param_4,uStack_88,uStack_80);
    uVar3 = (uint)param_3;
    func_0x000100dbb070(dStack_90,uStack_88,uStack_80);
    goto LAB_104585ea4;
  }
  func_0x000100dbb070(dStack_90,uStack_88,uStack_80);
  uVar3 = 0;
LAB_104585ea4:
  return uVar3 & 1;
}



/* Entry: 104585ec4; end: 104585fab;  */

uint FUN_104585ec4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&lStack_80;
  FUN_104560f98(param_1,auStack_68);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&lStack_80,auStack_68,uVar2,param_5,6);
  if (iVar1 == 0) {
    lStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xf000000000000000;
  }
  else if (param_2 == lStack_80) {
    func_0x000100e25fcc(param_3,param_4,uStack_78,uStack_70);
    uVar3 = (uint)param_3;
    (*param_6)(param_2,uStack_78,uStack_70);
    goto LAB_104585f90;
  }
  (*param_6)(lStack_80,uStack_78,uStack_70);
  uVar3 = 0;
LAB_104585f90:
  return uVar3 & 1;
}



/* Entry: 104585fac; end: 10458609f;  */

uint FUN_104585fac(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_104560f98(param_1,auStack_78);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_90,auStack_78,uVar2,param_5,6);
  if (iVar1 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0xf000000000000000;
  }
  else if (param_2 == (int)uStack_90) {
    func_0x000100e25fcc(param_3,param_4,uStack_88,uStack_80);
    uVar3 = (uint)param_3;
    (*param_6)(uStack_90,uStack_88,uStack_80);
    goto LAB_104586080;
  }
  (*param_6)(uStack_90,uStack_88,uStack_80);
  uVar3 = 0;
LAB_104586080:
  return uVar3 & 1;
}



/* Entry: 1045860a0; end: 104586193;  */

uint FUN_1045860a0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_104560f98(param_2,auStack_78);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_90,auStack_78,uVar2,&UNK_110790980,6);
  if (iVar1 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0xf000000000000000;
  }
  else if (param_1 == (float)uStack_90) {
    func_0x000100e25fcc(param_3,param_4,uStack_88,uStack_80);
    uVar3 = (uint)param_3;
    func_0x000100dbb070(uStack_90,uStack_88,uStack_80);
    goto LAB_104586174;
  }
  func_0x000100dbb070(uStack_90,uStack_88,uStack_80);
  uVar3 = 0;
LAB_104586174:
  return uVar3 & 1;
}



/* Entry: 104586194; end: 104586283;  */

uint FUN_104586194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_a0;
  FUN_104560f98(param_1,auStack_78);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_a0,auStack_78,uVar2,&UNK_11078e1f8,6);
  if (iVar1 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    func_0x00010458a4f4(0,0,0,0);
    uVar3 = 0;
  }
  else {
    FUN_1045f8100(param_2,param_3,param_4,param_5,uStack_a0,uStack_98,uStack_90,uStack_88);
    uVar3 = (uint)param_2;
    func_0x00010458a4f4(uStack_a0,uStack_98,uStack_90,uStack_88);
  }
  return uVar3 & 1;
}



/* Entry: 104586284; end: 104586347;  */

uint FUN_104586284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&uStack_80;
  FUN_104560f98(param_1,auStack_68);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_80,auStack_68,uVar2,param_4,6);
  if (iVar1 == 0) {
    uStack_78 = 0xf000000000000000;
    uStack_80 = 0;
    (*param_5)(0,0xf000000000000000);
    uVar3 = 0;
  }
  else {
    func_0x000100e25fcc(param_2,param_3,uStack_80,uStack_78);
    uVar3 = (uint)param_2;
    (*param_5)(uStack_80,uStack_78);
  }
  return uVar3 & 1;
}



/* Entry: 104586348; end: 10458645f;  */

uint FUN_104586348(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_a0;
  FUN_104560f98(param_1,auStack_78);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_a0,auStack_78,uVar2,&UNK_110790d00,6);
  uVar5 = uStack_88;
  uVar4 = uStack_90;
  uVar3 = uStack_98;
  uVar2 = uStack_a0;
  if (iVar1 == 0) {
    uStack_98 = 0xf000000000000000;
    uStack_a0 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    func_0x000100e25fcc(param_2,param_3,uStack_a0,uStack_98);
    if ((param_2 & 1) != 0) {
      func_0x000100e25fcc(param_4,param_5,uVar4,uVar5);
      uVar6 = (uint)param_4;
      FUN_10458a2ac(uVar2,uVar3,uVar4,uVar5);
      goto LAB_104586440;
    }
  }
  FUN_10458a2ac(uVar2,uVar3,uVar4,uVar5);
  uVar6 = 0;
LAB_104586440:
  return uVar6 & 1;
}



/* Entry: 104586460; end: 10458655b;  */

uint FUN_104586460(undefined8 param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,code *param_7)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  FUN_104560f98(param_1,auStack_68);
  uVar1 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  plVar2 = &lStack_88;
  _swift_dynamicCast(plVar2,auStack_68,uVar1,param_6,6);
  if ((int)plVar2 == 0) {
    lStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0xf000000000000000;
    lVar3 = 0;
  }
  else {
    lVar3 = lStack_88;
    if ((param_2 == lStack_88) && (lVar3 = param_2, param_3 == (int)uStack_80)) {
      func_0x000100e25fcc(param_4,param_5);
      uVar4 = (uint)param_4;
      (*param_7)(param_2,uStack_80,uStack_78,uStack_70);
      goto LAB_104586538;
    }
  }
  (*param_7)(lVar3,uStack_80,uStack_78,uStack_70);
  uVar4 = 0;
LAB_104586538:
  return uVar4 & 1;
}



/* Entry: 10458655c; end: 104586873;  */

uint FUN_10458655c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&uStack_90;
  FUN_104560f98(param_1,auStack_78);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_90,auStack_78,uVar2,param_5,6);
  uVar4 = uStack_80;
  uVar3 = uStack_88;
  uVar2 = uStack_90;
  if (iVar1 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    (*param_6)(param_2,uStack_90);
    if ((param_2 & 1) != 0) {
      func_0x000100e25fcc(param_3,param_4,uVar3,uVar4);
      uVar5 = (uint)param_3;
      FUN_10458a48c(uVar2,uVar3,uVar4);
      goto LAB_104586634;
    }
  }
  FUN_10458a48c(uVar2,uVar3,uVar4);
  uVar5 = 0;
LAB_104586634:
  return uVar5 & 1;
}



/* Entry: 104586874; end: 104586967;  */

uint FUN_104586874(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&uStack_80;
  FUN_104560f98(param_1,auStack_68);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  _swift_dynamicCast(&uStack_80,auStack_68,uVar2,&UNK_110790c00,6);
  if (iVar1 == 0) {
    uStack_80 = 2;
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else if ((param_2 & 1) == ((uint)uStack_80 & 1)) {
    func_0x000100e25fcc(param_3,param_4,uStack_78,uStack_70);
    uVar3 = (uint)param_3;
    func_0x000101556278(uStack_80,uStack_78,uStack_70);
    goto LAB_10458694c;
  }
  func_0x000101556278(uStack_80,uStack_78,uStack_70);
  uVar3 = 0;
LAB_10458694c:
  return uVar3 & 1;
}



/* Entry: 104586968; end: 104586adb;  */

uint FUN_104586968(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  uint unaff_w20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = 0;
  __sSqMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + -extraout_x8;
  lVar6 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
  uVar2 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar3 = puVar4;
  _swift_dynamicCast(puVar4,auStack_88,uVar2,param_2,6);
  if ((int)puVar3 == 0) {
    (**(code **)(lVar6 + 0x38))(puVar4,1,1,param_2);
    (**(code **)(lVar7 + 8))(puVar4,lVar1);
    unaff_w20 = 0;
  }
  else {
    (**(code **)(lVar6 + 0x38))(puVar4,0,1,param_2);
    (**(code **)(lVar6 + 0x20))(lVar5,puVar4,param_2);
    __sSQ2eeoiySbx_xtFZTj();
    (**(code **)(lVar6 + 8))(lVar5,param_2);
  }
  return unaff_w20 & 1;
}



/* Entry: 104586adc; end: 104586baf;  */

uint FUN_104586adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x18))(param_2,param_3,param_4);
  return (uint)param_2 & 1;
}



/* Entry: 104586bb0; end: 104586c27;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104586bb0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,byte *param_5,
                    byte *param_6,undefined8 param_7,undefined8 param_8)

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
  
  uVar4 = (uint)((ulong)param_3 >> 0x20) & 0xff;
  if ((char)((ulong)param_7 >> 0x20) == '\x01') {
    if (uVar4 != 1) {
      return (byte *)0x0;
    }
  }
  else {
    if (uVar4 == 1) {
      return (byte *)0x0;
    }
    if ((int)param_7 != (int)param_3) {
      return (byte *)0x0;
    }
  }
  uVar4 = (uint)((ulong)param_4 >> 0x20) & 0xff;
  if ((char)((ulong)param_8 >> 0x20) == '\x01') {
    if (uVar4 == 1) {
SUB_100e25fcc:
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
        uVar4 = (uint)((ulong)param_6 >> 0x20);
        uVar15 = uVar4 >> 0x1e;
        uVar5 = (uint)(param_2 >> 0x20);
        uVar18 = uVar5 >> 0x1e;
        iVar7 = (int)param_5;
        pbVar11 = param_6;
        if ((ulong)param_6 >> 0x3e == 3) {
          uVar17 = 0;
          if ((((param_5 != (byte *)0x0) || (param_6 != (byte *)0xc000000000000000)) ||
              (param_2 >> 0x3e < 3)) ||
             ((uVar17 = 0, param_1 != 0 || (param_2 != 0xc000000000000000))))
          goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar15 == 0) {
            uVar17 = (ulong)param_6 >> 0x30 & 0xff;
          }
          else {
            iVar16 = (int)((ulong)param_5 >> 0x20);
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
            uVar19 = param_2 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar16 = (int)((ulong)param_1 >> 0x20);
          if (SBORROW4(iVar16,(int)param_1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar17 == (long)(iVar16 - (int)param_1)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar8 = (byte *)0x0;
        }
        else {
          if (uVar15 == 2) {
            uVar17 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
            if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
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
            uVar19 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
            if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
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
                *(char *)((long)register0x00000008 + -0x70) = (char)param_5;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_5 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_5 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_5 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_5 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_5 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_5 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_5 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)param_6;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_6 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_6 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_6 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_6 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_6 >> 0x28);
                pbVar11 = (byte *)((long)register0x00000008 +
                                  (((ulong)param_6 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                    (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar7;
              unaff_x23 = (byte *)(((long)param_5 >> 0x20) - (long)unaff_x25);
              if ((long)param_5 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = param_6;
              if (param_5 == (byte *)0x0) {
                func_0x000107c5ec38();
                param_5 = (byte *)0x0;
              }
              else {
                pbVar11 = param_5;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                param_5 = param_5 + ((long)unaff_x25 - (long)pbVar11);
                func_0x000107c5ec38();
                unaff_x19 = param_5;
                if (param_5 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar11) {
                    pbVar11 = unaff_x23;
                  }
                  pbVar11 = pbVar11 + (long)param_5;
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
              lVar21 = *(long *)(param_5 + 0x10);
              unaff_x24 = *(byte **)(param_5 + 0x18);
              func_0x000107c5ec30();
              pbVar11 = param_5;
              if (param_5 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                param_5 = param_5 + (lVar21 - (long)pbVar11);
              }
              unaff_x23 = unaff_x24 + -lVar21;
              if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = param_5;
              unaff_x25 = param_6;
              if (param_5 == (byte *)0x0) {
                pbVar11 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar11) {
                  pbVar11 = unaff_x23;
                }
                pbVar11 = pbVar11 + (long)param_5;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)param_6 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_5,pbVar11,
                                param_1,param_2);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = param_2;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar17 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
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
        param_5 = *(byte **)(pbVar8 + 8);
        pbVar20 = *(byte **)(pbVar8 + 0x18);
        bVar23 = pbVar8[0x28];
        param_6 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar12 = param_5;
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
            pbVar10 = param_5;
            pbVar12 = param_6;
            if ((param_5 == pbVar13) && (param_6 == pbVar14)) {
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
            if ((pbVar10 == pbVar13) && (param_5 == pbVar14)) {
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
            if (((pbVar10 == pbVar13) && (param_5 == pbVar14)) &&
               (pbVar10 = param_6, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
               pbVar14 = *(byte **)(pbVar11 + 0x18),
               param_6 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
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
          if (param_6 == (byte *)0x0) {
            if (pbVar14 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar14 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar13 = *(byte **)(pbVar11 + 8);
            pbVar10 = param_5;
            pbVar12 = param_6;
            if ((param_5 != pbVar13) || (param_6 != pbVar14)) goto code_r0x000107c605b8;
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
          if ((((pbVar20 == (byte *)0x0 && param_5 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
              lVar22 == 0) && param_6 == (byte *)0x0) {
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
                                                                               bVar23 | auVar39[0]))
                                                            ))))) == 0 && *(long *)pbVar11 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar10 == (byte *)0x1) &&
             (((pbVar20 == (byte *)0x0 && param_5 == (byte *)0x0) && param_6 == (byte *)0x0) &&
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
                                                                         CONCAT11(bVar24 | auVar39[1
                                                  ],bVar23 | auVar39[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar11[0x28] != 5) {
          return (byte *)0x0;
        }
        param_1 = *(long *)(pbVar11 + 8);
        param_2 = *(ulong *)(pbVar11 + 0x10);
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
  }
  else if ((uVar4 != 1) && ((int)param_8 == (int)param_4)) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 104586c28; end: 104586d43;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104586c28(long *param_1)

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
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  undefined8 *unaff_x20;
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
  
  lVar16 = param_1[3];
  if (unaff_x20[3] == 0) {
    if (lVar16 != 0) {
      return (byte *)0x0;
    }
  }
  else {
    if (lVar16 == 0) {
      return (byte *)0x0;
    }
    uVar19 = unaff_x20[2];
    if ((uVar19 != param_1[2] || unaff_x20[3] != lVar16) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar19 & 1) == 0)) {
      return (byte *)0x0;
    }
  }
  bVar27 = *(byte *)(param_1 + 4);
  if (*(byte *)(unaff_x20 + 4) == 2) {
    if (bVar27 == 2) {
LAB_104586ca8:
      pbVar10 = (byte *)*unaff_x20;
      pbVar25 = (byte *)unaff_x20[1];
      lVar16 = *param_1;
      uVar19 = param_1[1];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(undefined8 **)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar19 >> 0x20);
        uVar22 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar19 >> 0x3e < 3)) || ((uVar21 = 0, lVar16 != 0 || (uVar19 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar22 == 0) {
            uVar23 = uVar19 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar16 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar16)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar16)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar22 == 2) {
            uVar23 = *(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10);
            if (SBORROW8(*(long *)(lVar16 + 0x18),*(long *)(lVar16 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
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
                pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
                pbVar13 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
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
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (undefined8 *)((ulong)pbVar25 & 0x3fffffffffffffff);
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar16,uVar19);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar19;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
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
        *(undefined8 **)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar24 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar16 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar16,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar16 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar16,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar25;
            if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar16 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar16 == 0) {
                return (byte *)0x0;
              }
              func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar16);
              func_0x000107c61174();
              pbVar10 = pbVar24;
              func_0x000107c60118();
              func_0x000107c61170(pbVar24);
              func_0x000107c61170(lVar16);
              pbVar24 = pbVar10;
joined_r0x000100e266a4:
              if (((ulong)pbVar24 & 1) == 0) {
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
          )(pbVar12,pbVar14,pbVar15,pbVar17,0);
          return pbVar12;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar25, pbVar14 = pbVar24, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar24 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar13 + 0x10);
          lVar16 = *(long *)(pbVar13 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar12 = pbVar10;
            pbVar14 = pbVar25;
            if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar16 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar24 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar16)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar24,lVar26,*(byte **)(pbVar13 + 0x18),lVar16,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar16 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar13 + 0x20);
            lVar16 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar16;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar26;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
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
          lVar26 = *(long *)(pbVar13 + 0x20);
          lVar16 = *(long *)(pbVar13 + 0x18);
          bVar27 = pbVar13[8] | (byte)lVar16;
          bVar28 = pbVar13[9] | (byte)((ulong)lVar16 >> 8);
          bVar29 = pbVar13[10] | (byte)((ulong)lVar16 >> 0x10);
          bVar30 = pbVar13[0xb] | (byte)((ulong)lVar16 >> 0x18);
          bVar31 = pbVar13[0xc] | (byte)((ulong)lVar16 >> 0x20);
          bVar32 = pbVar13[0xd] | (byte)((ulong)lVar16 >> 0x28);
          bVar33 = pbVar13[0xe] | (byte)((ulong)lVar16 >> 0x30);
          bVar34 = pbVar13[0xf] | (byte)((ulong)lVar16 >> 0x38);
          bVar35 = pbVar13[0x10] | (byte)lVar26;
          bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
          lVar16 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar16 = *(long *)(pbVar13 + 8);
        uVar19 = *(ulong *)(pbVar13 + 0x10);
        lVar26 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar26,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(undefined8 **)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  else if ((bVar27 != 2) && (((*(byte *)(unaff_x20 + 4) ^ bVar27) & 1) == 0)) goto LAB_104586ca8;
  return (byte *)0x0;
}



/* Entry: 104586d44; end: 104586ee3;  */

uint FUN_104586d44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  char cStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  char cStack_68;
  ulong uVar9;
  
  uVar10 = *unaff_x20;
  uStack_78 = (undefined1)unaff_x20[1];
  uStack_6f = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x11);
  cStack_68 = (char)((ulong)*(undefined8 *)((long)unaff_x20 + 0x11) >> 0x38);
  cVar5 = cStack_68;
  uStack_77 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 9) >> 0x38);
  uVar11 = *param_1;
  uStack_98 = (undefined1)param_1[1];
  uStack_8f = (undefined7)*(undefined8 *)((long)param_1 + 0x11);
  cStack_88 = (char)((ulong)*(undefined8 *)((long)param_1 + 0x11) >> 0x38);
  cVar4 = cStack_88;
  uStack_97 = (undefined7)*(undefined8 *)((long)param_1 + 9);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 9) >> 0x38);
  uVar2 = CONCAT71(uStack_77,uStack_78);
  uVar3 = CONCAT71(uStack_6f,uStack_70);
  uVar1 = CONCAT71(uStack_97,uStack_98);
  uVar9 = CONCAT71(uStack_8f,uStack_90);
  bVar6 = ((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uStack_a0 = uVar11;
  uStack_80 = uVar10;
  if ((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cStack_68 == -1)) {
    if (bVar6 && cStack_88 == -1) {
      FUN_10458a368(&uStack_80,auStack_c0);
      FUN_10458a368(&uStack_a0,auStack_c0);
      FUN_104567140(uVar10,uVar2,uVar3,0xff);
LAB_104586eb4:
      uVar9 = unaff_x20[4];
      func_0x000100e25fcc(uVar9,unaff_x20[5],param_1[4],param_1[5]);
      uVar7 = (uint)uVar9;
      goto LAB_104586ec0;
    }
LAB_104586dfc:
    FUN_10458a368(&uStack_80,auStack_c0);
    FUN_10458a368(&uStack_a0,auStack_c0);
    FUN_104567140(uVar10,uVar2,uVar3,cVar5);
    FUN_104567140(uVar11,uVar1,uVar9,cVar4);
  }
  else {
    if (bVar6 && cStack_88 == -1) goto LAB_104586dfc;
    FUN_10458a368(&uStack_80,auStack_c0);
    FUN_10458a368(&uStack_a0,auStack_c0);
    uVar8 = uVar10;
    FUN_10460c4a8(uVar10,uVar2,uVar3,cVar5,uVar11,uVar1,uVar9,cVar4);
    FUN_104567140(uVar11,uVar1,uVar9,cVar4);
    FUN_104567140(uVar10,uVar2,uVar3,cVar5);
    if ((uVar8 & 1) != 0) goto LAB_104586eb4;
  }
  uVar7 = 0;
LAB_104586ec0:
  return uVar7 & 1;
}



/* Entry: 104586ee4; end: 104586f1f;  */

uint FUN_104586ee4(void)

{
  uint unaff_w20;
  
  __sSQ2eeoiySbx_xtFZTj();
  return unaff_w20 & 1;
}



/* Entry: 104586f20; end: 104586f33;  */

undefined8 FUN_104586f20(void)

{
  return 1;
}



/* Entry: 104586f34; end: 104586fa3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104586f34(long *param_1)

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
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  lVar23 = *param_1;
  uVar16 = param_1[1];
  uVar12 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar24 = (byte *)unaff_x20[1];
  if ((unaff_x20[2] != uVar12) && (FUN_10453dc68(), (uVar12 & 1) == 0)) {
    return (byte *)0x0;
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
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar12 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar12 = 0, lVar23 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar12 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar12 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar12 == (long)(iVar19 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar12 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar12 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar12 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar12 < 1) goto code_r0x000100e26128;
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
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
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
          unaff_x24 = pbVar24;
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
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar24;
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
        unaff_x20 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar23,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar12 == 0);
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
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar23 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar23 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar24;
        if ((pbVar9 == pbVar15) && (pbVar24 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar23 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar23 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar23);
          func_0x000107c61174();
          pbVar9 = pbVar22;
          func_0x000107c60118();
          func_0x000107c61170(pbVar22);
          func_0x000107c61170(lVar23);
          pbVar22 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar22 & 1) == 0) {
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
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar24, pbVar14 = pbVar22, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar24 == *(byte **)(pbVar13 + 0x10) && pbVar22 == *(byte **)(pbVar13 + 0x18))) {
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
      lVar23 = *(long *)(pbVar13 + 0x20);
      if (pbVar24 == (byte *)0x0) {
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
        pbVar14 = pbVar24;
        if ((pbVar9 != pbVar15) || (pbVar24 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar13 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar13 + 0x18),lVar23,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar23 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar13 + 0x20);
        lVar23 = *(long *)(pbVar13 + 0x18);
        bVar26 = pbVar13[8] | (byte)lVar23;
        bVar27 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar13[0x10] | (byte)lVar25;
        bVar35 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
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
      lVar25 = *(long *)(pbVar13 + 0x20);
      lVar23 = *(long *)(pbVar13 + 0x18);
      bVar26 = pbVar13[8] | (byte)lVar23;
      bVar27 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar13[0x10] | (byte)lVar25;
      bVar35 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar23 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar25 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
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



/* Entry: 104586fa4; end: 104586fab;  */

undefined8 FUN_104586fa4(void)

{
  return 1;
}



/* Entry: 104586fac; end: 104587053;  */

/* WARNING: Removing unreachable block (ram,0x000104587020) */

void FUN_104586fac(undefined8 *param_1)

{
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_40 = unaff_x20[0x10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_d0 = param_1[8];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  FUN_1045b4844(&uStack_110);
  param_1[5] = uStack_e8;
  param_1[4] = uStack_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = uStack_d0;
  param_1[1] = uStack_108;
  *param_1 = uStack_110;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  return;
}



/* Entry: 104587054; end: 1045870a7;  */

uint FUN_104587054(uint param_1)

{
  func_0x000104583fa0();
  return param_1 & 1;
}



/* Entry: 1045870a8; end: 104587127;  */

uint FUN_1045870a8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  FUN_1045b691c(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 104587128; end: 10458712f;  */

undefined8 FUN_104587128(void)

{
  return 1;
}



/* Entry: 104587130; end: 1045871d3;  */

/* WARNING: Removing unreachable block (ram,0x0001045871a0) */

void FUN_104587130(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_40 = unaff_x20[0xe];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_c0 = param_1[8];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  FUN_1045b5550(&uStack_100);
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = uStack_c0;
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Entry: 1045871d4; end: 104587227;  */

uint FUN_1045871d4(uint param_1)

{
  FUN_104583970();
  return param_1 & 1;
}



/* Entry: 104587228; end: 1045872a7;  */

uint FUN_104587228(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_b0 = unaff_x20[0xe];
  func_0x0001045b67e0(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1045872a8; end: 1045872af;  */

undefined8 FUN_1045872a8(void)

{
  return 1;
}



/* Entry: 1045872b0; end: 104587337;  */

/* WARNING: Removing unreachable block (ram,0x000104587304) */

void FUN_1045872b0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  FUN_1045b6038(&uStack_b0);
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = uStack_70;
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  return;
}



/* Entry: 104587338; end: 1045873bf;  */

uint FUN_104587338(uint param_1)

{
  func_0x000104583b64();
  return param_1 & 1;
}



/* Entry: 1045873c0; end: 1045873cb;  */

/* WARNING: Removing unreachable block (ram,0x0001045bf114) */
/* WARNING: Removing unreachable block (ram,0x0001045bf18c) */

void FUN_1045873c0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_2e8 [200];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  undefined1 uStack_70;
  
  lVar5 = *unaff_x20;
  lVar2 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  lVar6 = unaff_x20[3];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_140 = param_1[8];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  lVar8 = *(long *)(lVar5 + 0x10);
  if (lVar8 != 0) {
    __ss6HasherV8_combineyySuF(1);
    uStack_1a8 = uStack_158;
    uStack_1b0 = uStack_160;
    uStack_198 = uStack_148;
    uStack_1a0 = uStack_150;
    uStack_190 = uStack_140;
    uStack_1c8 = uStack_178;
    uStack_1d0 = uStack_180;
    uStack_1b8 = uStack_168;
    uStack_1c0 = uStack_170;
    puVar7 = (undefined8 *)(lVar5 + 0x20);
    while( true ) {
      lVar8 = lVar8 + -1;
      uStack_88 = puVar7[0x15];
      uStack_90 = puVar7[0x14];
      uStack_78 = puVar7[0x17];
      uStack_80 = puVar7[0x16];
      uStack_70 = *(undefined1 *)(puVar7 + 0x18);
      uStack_c8 = puVar7[0xd];
      uStack_d0 = puVar7[0xc];
      uStack_b8 = puVar7[0xf];
      uStack_c0 = puVar7[0xe];
      uStack_a8 = puVar7[0x11];
      uStack_b0 = puVar7[0x10];
      uStack_98 = puVar7[0x13];
      uStack_a0 = puVar7[0x12];
      uStack_108 = puVar7[5];
      uStack_110 = puVar7[4];
      uStack_f8 = puVar7[7];
      uStack_100 = puVar7[6];
      uStack_e8 = puVar7[9];
      uStack_f0 = puVar7[8];
      uStack_d8 = puVar7[0xb];
      uStack_e0 = puVar7[10];
      uStack_128 = puVar7[1];
      uStack_130 = *puVar7;
      uStack_118 = puVar7[3];
      uStack_120 = puVar7[2];
      uStack_1f8 = uStack_1a8;
      uStack_200 = uStack_1b0;
      uStack_1e8 = uStack_198;
      uStack_1f0 = uStack_1a0;
      uStack_1e0 = uStack_190;
      uStack_218 = uStack_1c8;
      uStack_220 = uStack_1d0;
      uStack_208 = uStack_1b8;
      uStack_210 = uStack_1c0;
      FUN_104603a58(&uStack_130,auStack_2e8);
      FUN_1045d5f1c(&uStack_220);
      func_0x000104603a8c(&uStack_130);
      if (lVar8 == 0) break;
      uStack_1a8 = uStack_1f8;
      uStack_1b0 = uStack_200;
      uStack_198 = uStack_1e8;
      uStack_1a0 = uStack_1f0;
      uStack_190 = uStack_1e0;
      uStack_1c8 = uStack_218;
      uStack_1d0 = uStack_220;
      uStack_1b8 = uStack_208;
      uStack_1c0 = uStack_210;
      puVar7 = puVar7 + 0x19;
    }
    uStack_158 = uStack_1f8;
    uStack_160 = uStack_200;
    uStack_148 = uStack_1e8;
    uStack_150 = uStack_1f0;
    uStack_140 = uStack_1e0;
    uStack_178 = uStack_218;
    uStack_180 = uStack_220;
    uStack_168 = uStack_208;
    uStack_170 = uStack_210;
  }
  FUN_1045ae514(&uStack_180,536000000,0x1ff2b601,lVar6);
  uVar3 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar2;
      lVar6 = lVar2 >> 0x20;
      goto LAB_1045bf200;
    }
    if ((uVar1 & 0xff000000000000) == 0) goto LAB_1045bf194;
  }
  else {
    if (uVar4 != 2) goto LAB_1045bf194;
    lVar5 = *(long *)(lVar2 + 0x10);
    lVar6 = *(long *)(lVar2 + 0x18);
LAB_1045bf200:
    if (lVar5 == lVar6) goto LAB_1045bf194;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_180,lVar2,uVar1);
LAB_1045bf194:
  param_1[5] = uStack_158;
  param_1[4] = uStack_160;
  param_1[7] = uStack_148;
  param_1[6] = uStack_150;
  param_1[8] = uStack_140;
  param_1[1] = uStack_178;
  *param_1 = uStack_180;
  param_1[3] = uStack_168;
  param_1[2] = uStack_170;
  return;
}



/* Entry: 1045873cc; end: 1045873fb;  */

uint FUN_1045873cc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10458529c(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],&UNK_11078ce60,
                FUN_1045bba50);
  return (uint)param_1 & 1;
}



/* Entry: 1045873fc; end: 104587407;  */

void FUN_1045873fc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  (*(code *)0x1045f6438)
            (*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],*param_1,param_1[1],param_1[2],
             param_1[3]);
  return;
}



/* Entry: 104587408; end: 1045874bf;  */

/* WARNING: Removing unreachable block (ram,0x00010458748c) */

void FUN_104587408(undefined8 *param_1)

{
  undefined8 *unaff_x20;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
  uStack_78 = unaff_x20[0x11];
  uStack_80 = unaff_x20[0x10];
  uStack_68 = unaff_x20[0x13];
  uStack_70 = unaff_x20[0x12];
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_40 = *(undefined1 *)(unaff_x20 + 0x18);
  uStack_f8 = unaff_x20[1];
  uStack_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_118 = param_1[7];
  uStack_120 = param_1[6];
  uStack_110 = param_1[8];
  uStack_148 = param_1[1];
  uStack_150 = *param_1;
  uStack_138 = param_1[3];
  uStack_140 = param_1[2];
  FUN_1045d5f1c(&uStack_150);
  param_1[5] = uStack_128;
  param_1[4] = uStack_130;
  param_1[7] = uStack_118;
  param_1[6] = uStack_120;
  param_1[8] = uStack_110;
  param_1[1] = uStack_148;
  *param_1 = uStack_150;
  param_1[3] = uStack_138;
  param_1[2] = uStack_140;
  return;
}



/* Entry: 1045874c0; end: 104587523;  */

uint FUN_1045874c0(uint param_1)

{
  FUN_104584a70();
  return param_1 & 1;
}



/* Entry: 104587524; end: 1045875c3;  */

uint FUN_104587524(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined1 uStack_100;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_48 = param_1[0x15];
  uStack_50 = param_1[0x14];
  uStack_38 = param_1[0x17];
  uStack_40 = param_1[0x16];
  uStack_30 = *(undefined1 *)(param_1 + 0x18);
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_118 = unaff_x20[0x15];
  uStack_120 = unaff_x20[0x14];
  uStack_108 = unaff_x20[0x17];
  uStack_110 = unaff_x20[0x16];
  uStack_100 = *(undefined1 *)(unaff_x20 + 0x18);
  uStack_158 = unaff_x20[0xd];
  uStack_160 = unaff_x20[0xc];
  uStack_148 = unaff_x20[0xf];
  uStack_150 = unaff_x20[0xe];
  uStack_138 = unaff_x20[0x11];
  uStack_140 = unaff_x20[0x10];
  uStack_128 = unaff_x20[0x13];
  uStack_130 = unaff_x20[0x12];
  uStack_198 = unaff_x20[5];
  uStack_1a0 = unaff_x20[4];
  uStack_188 = unaff_x20[7];
  uStack_190 = unaff_x20[6];
  uStack_178 = unaff_x20[9];
  uStack_180 = unaff_x20[8];
  uStack_168 = unaff_x20[0xb];
  uStack_170 = unaff_x20[10];
  uStack_1b8 = unaff_x20[1];
  uStack_1c0 = *unaff_x20;
  uStack_1a8 = unaff_x20[3];
  uStack_1b0 = unaff_x20[2];
  func_0x0001045f5e24(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 1045875c4; end: 1045875cf;  */

/* WARNING: Removing unreachable block (ram,0x000104588ee8) */

void FUN_1045875c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  FUN_1045d7890(unaff_x20[2],&uStack_90);
  FUN_1045befbc(&uStack_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 1045875d0; end: 1045875ff;  */

uint FUN_1045875d0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104584bd0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&UNK_11078cfa0,FUN_1045d8220);
  return (uint)param_1 & 1;
}



/* Entry: 104587600; end: 10458760b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104587600(long *param_1)

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
  byte *unaff_x25;
  ulong uVar26;
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
    _swift_retain(uVar25);
    _swift_retain(uVar26);
    uVar12 = uVar25;
    FUN_1045d8220(uVar25,uVar26);
    _swift_release(uVar26);
    _swift_release(uVar25);
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



/* Entry: 10458760c; end: 1045876ab;  */

/* WARNING: Removing unreachable block (ram,0x000104587678) */

void FUN_10458760c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_50 = unaff_x20[10];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  uStack_48 = (undefined1)unaff_x20[0xb];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x61);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x59);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_b0 = param_1[8];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  FUN_1045d8eac(&uStack_f0);
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  param_1[8] = uStack_b0;
  param_1[1] = uStack_e8;
  *param_1 = uStack_f0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  return;
}



/* Entry: 1045876ac; end: 1045876f7;  */

uint FUN_1045876ac(uint param_1)

{
  FUN_10458502c();
  return param_1 & 1;
}



/* Entry: 1045876f8; end: 10458775f;  */

uint FUN_1045876f8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_30 = param_1[10];
  uStack_28 = (undefined1)param_1[0xb];
  uStack_1f = *(undefined8 *)((long)param_1 + 0x61);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_8f = *(undefined8 *)((long)unaff_x20 + 0x61);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_a0 = unaff_x20[10];
  uStack_98 = (undefined1)unaff_x20[0xb];
  uStack_97 = (undefined7)((ulong)unaff_x20[0xb] >> 8);
  FUN_1045f71f8(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 104587760; end: 104587787;  */

undefined8 FUN_104587760(void)

{
  return 1;
}



/* Entry: 104587788; end: 10458781f;  */

/* WARNING: Removing unreachable block (ram,0x0001045877ec) */

void FUN_104587788(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_50 = unaff_x20[6];
  uStack_48 = (undefined1)unaff_x20[7];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x41);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x39);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x39) >> 0x38);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_90 = param_1[8];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  FUN_1045d9d80(&uStack_d0);
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_90;
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Entry: 104587820; end: 104587863;  */

uint FUN_104587820(uint param_1)

{
  FUN_1045843f0();
  return param_1 & 1;
}



/* Entry: 104587864; end: 1045878bb;  */

uint FUN_104587864(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_30 = param_1[6];
  uStack_28 = (undefined1)param_1[7];
  uStack_1f = *(undefined8 *)((long)param_1 + 0x41);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_80 = unaff_x20[6];
  uStack_78 = (undefined1)unaff_x20[7];
  uStack_6f = *(undefined8 *)((long)unaff_x20 + 0x41);
  uStack_77 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x39);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x39) >> 0x38);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x0001045f6f0c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1045878bc; end: 1045878c3;  */

undefined8 FUN_1045878bc(void)

{
  return 1;
}



/* Entry: 1045878c4; end: 104587953;  */

/* WARNING: Removing unreachable block (ram,0x000104587920) */

void FUN_1045878c4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  uStack_48 = (undefined2)unaff_x20[5];
  uStack_3e = *(undefined8 *)((long)unaff_x20 + 0x32);
  uStack_46 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x2a);
  uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x2a) >> 0x30);
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_80 = param_1[8];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  FUN_1045dab8c(&uStack_c0);
  param_1[5] = uStack_98;
  param_1[4] = uStack_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[8] = uStack_80;
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  return;
}



/* Entry: 104587954; end: 104587997;  */

uint FUN_104587954(uint param_1)

{
  func_0x0001045844d0();
  return param_1 & 1;
}



/* Entry: 104587998; end: 1045879ef;  */

uint FUN_104587998(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined8 uStack_5e;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined8 uStack_1e;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_30 = param_1[4];
  uStack_28 = (undefined2)param_1[5];
  uStack_1e = *(undefined8 *)((long)param_1 + 0x32);
  uStack_26 = (undefined6)*(undefined8 *)((long)param_1 + 0x2a);
  uStack_20 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x2a) >> 0x30);
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_70 = unaff_x20[4];
  uStack_68 = (undefined2)unaff_x20[5];
  uStack_5e = *(undefined8 *)((long)unaff_x20 + 0x32);
  uStack_66 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x2a);
  uStack_60 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x2a) >> 0x30);
  func_0x0001045f5214(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1045879f0; end: 104587a9b;  */

/* WARNING: Removing unreachable block (ram,0x000104587a68) */

void FUN_1045879f0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined1 uStack_40;
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_40 = *(undefined1 *)(unaff_x20 + 0x12);
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_e0 = param_1[8];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  FUN_1045db780(&uStack_120);
  param_1[5] = uStack_f8;
  param_1[4] = uStack_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[8] = uStack_e0;
  param_1[1] = uStack_118;
  *param_1 = uStack_120;
  param_1[3] = uStack_108;
  param_1[2] = uStack_110;
  return;
}



/* Entry: 104587a9c; end: 104587af7;  */

uint FUN_104587a9c(uint param_1)

{
  func_0x0001045846a0();
  return param_1 & 1;
}



/* Entry: 104587af8; end: 104587b87;  */

uint FUN_104587af8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined1 uStack_d0;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_30 = *(undefined1 *)(param_1 + 0x12);
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_f8 = unaff_x20[0xd];
  uStack_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  uStack_d0 = *(undefined1 *)(unaff_x20 + 0x12);
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  uStack_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  func_0x0001045f6a28(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 104587b88; end: 104587c0b;  */

void FUN_104587b88(void)

{
  FUN_1045bfa40();
  return;
}



/* Entry: 104587c0c; end: 104587c63;  */

uint FUN_104587c0c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_1045f5384(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 104587c64; end: 104587c6f;  */

/* WARNING: Removing unreachable block (ram,0x000104588ee8) */

void FUN_104587c64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  FUN_1045dd890(unaff_x20[2],&uStack_90);
  FUN_1045befbc(&uStack_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 104587c70; end: 104587c9f;  */

uint FUN_104587c70(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104584bd0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&UNK_11078d530,FUN_1045dde7c);
  return (uint)param_1 & 1;
}



/* Entry: 104587ca0; end: 104587cf7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104587ca0(long *param_1)

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
  byte *unaff_x25;
  ulong uVar26;
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
    _swift_retain(uVar25);
    _swift_retain(uVar26);
    uVar12 = uVar25;
    FUN_1045dde7c(uVar25,uVar26);
    _swift_release(uVar26);
    _swift_release(uVar25);
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



/* Entry: 104587cf8; end: 104587d87;  */

uint FUN_104587cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *unaff_x20;
  
  FUN_10458512c(param_1,*unaff_x20,unaff_x20[1],(ulong)*(uint5 *)(unaff_x20 + 2),
                (ulong)*(uint5 *)(unaff_x20 + 3),param_4,param_5);
  return (uint)param_1 & 1;
}



/* Entry: 104587d88; end: 104587d93;  */

/* WARNING: Removing unreachable block (ram,0x000104588ee8) */

void FUN_104587d88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  FUN_1045df3e8(unaff_x20[2],&uStack_90);
  FUN_1045befbc(&uStack_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 104587d94; end: 104587dc3;  */

uint FUN_104587d94(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104584bd0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],&UNK_11078d638,FUN_1045df80c);
  return (uint)param_1 & 1;
}



/* Entry: 104587dc4; end: 104587dcf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104587dc4(long *param_1)

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
  byte *unaff_x25;
  ulong uVar26;
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
    _swift_retain(uVar25);
    _swift_retain(uVar26);
    uVar12 = uVar25;
    FUN_1045df80c(uVar25,uVar26);
    _swift_release(uVar26);
    _swift_release(uVar25);
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



/* Entry: 104587dd0; end: 104587e6f;  */

/* WARNING: Removing unreachable block (ram,0x000104587e3c) */

void FUN_104587dd0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
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
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_50 = unaff_x20[10];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  uStack_48 = (undefined1)unaff_x20[0xb];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x61);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x59);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_b0 = param_1[8];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  FUN_1045e0234(&uStack_f0);
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  param_1[8] = uStack_b0;
  param_1[1] = uStack_e8;
  *param_1 = uStack_f0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  return;
}



/* Entry: 104587e70; end: 104587ebb;  */

uint FUN_104587e70(uint param_1)

{
  FUN_1045841c0();
  return param_1 & 1;
}



/* Entry: 104587ebc; end: 104587f23;  */

uint FUN_104587ebc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_30 = param_1[10];
  uStack_28 = (undefined1)param_1[0xb];
  uStack_1f = *(undefined8 *)((long)param_1 + 0x61);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_1 + 0x59);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x59) >> 0x38);
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_8f = *(undefined8 *)((long)unaff_x20 + 0x61);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x59) >> 0x38);
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_a0 = unaff_x20[10];
  uStack_98 = (undefined1)unaff_x20[0xb];
  uStack_97 = (undefined7)((ulong)unaff_x20[0xb] >> 8);
  FUN_1045f5a6c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 104587f24; end: 104587fcb;  */

/* WARNING: Removing unreachable block (ram,0x000104587f98) */

void FUN_104587f24(undefined8 *param_1)

{
  undefined8 *unaff_x20;
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
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_50 = unaff_x20[0xe];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_48 = (undefined2)unaff_x20[0xf];
  uStack_3e = *(undefined8 *)((long)unaff_x20 + 0x82);
  uStack_46 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x7a);
  uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x7a) >> 0x30);
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_d0 = param_1[8];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  FUN_1045e0ecc(&uStack_110);
  param_1[5] = uStack_e8;
  param_1[4] = uStack_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = uStack_d0;
  param_1[1] = uStack_108;
  *param_1 = uStack_110;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  return;
}



/* Entry: 104587fcc; end: 10458801f;  */

uint FUN_104587fcc(uint param_1)

{
  FUN_1045842b0();
  return param_1 & 1;
}



/* Entry: 104588020; end: 1045880a3;  */

uint FUN_104588020(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined8 uStack_be;
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
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  
  uVar1 = 0;
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_40 = param_1[0xe];
  uStack_38 = (undefined2)param_1[0xf];
  uStack_2e = *(undefined8 *)((long)param_1 + 0x82);
  uStack_36 = (undefined6)*(undefined8 *)((long)param_1 + 0x7a);
  uStack_30 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x7a) >> 0x30);
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_d0 = unaff_x20[0xe];
  uStack_c8 = (undefined2)unaff_x20[0xf];
  uStack_be = *(undefined8 *)((long)unaff_x20 + 0x82);
  uStack_c6 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x7a);
  uStack_c0 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x7a) >> 0x30);
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  func_0x0001045f56a0(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1045880a4; end: 1045880af;  */

/* WARNING: Removing unreachable block (ram,0x000104588294) */

void FUN_1045880a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  FUN_1045e26bc(unaff_x20[3],&uStack_90,uVar1,uVar2,unaff_x20[2],unaff_x20[3]);
  FUN_1045befbc(&uStack_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 1045880b0; end: 1045880df;  */

uint FUN_1045880b0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104585ba8(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],&UNK_11078d7d8,
                FUN_1045e3b54);
  return (uint)param_1 & 1;
}



/* Entry: 1045880e0; end: 1045880eb;  */

bool FUN_1045880e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  ulong uVar15;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  lVar2 = param_1[2];
  uVar14 = param_1[3];
  uVar15 = *unaff_x20;
  uVar13 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  if (uVar5 != uVar14) {
    _swift_retain(uVar5);
    _swift_retain(uVar14);
    uVar11 = uVar5;
    FUN_1045e3b54(uVar5,uVar14);
    _swift_release(uVar14);
    _swift_release(uVar5);
    if ((uVar11 & 1) == 0) {
      return false;
    }
  }
  func_0x000100e25fcc(uVar15,uVar13,uVar1,uVar4);
  if ((uVar15 & 1) == 0) {
    return false;
  }
  if (*(long *)(uVar3 + 0x10) != *(long *)(lVar2 + 0x10)) {
    return false;
  }
  uVar14 = 1L << ((ulong)*(byte *)(uVar3 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(uVar3 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(uVar3 + 0x40);
  uVar14 = uVar14 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar12 = 0;
  lVar8 = lVar12;
  if (uVar15 == 0) goto LAB_104559bd0;
LAB_104559bfc:
  uVar13 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  uVar15 = uVar15 - 1 & uVar15;
  uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar8 << 6;
  lStack_d0 = *(long *)(*(long *)(uVar3 + 0x30) + uVar13 * 8);
  FUN_104558b10(*(long *)(uVar3 + 0x38) + uVar13 * 0x28,&uStack_c8);
  lVar12 = lVar8;
  do {
    lVar8 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar7 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(uVar3);
      return true;
    }
    uVar13 = 0;
    FUN_104558c58(&uStack_98);
    if ((*(long *)(lVar2 + 0x10) == 0) || (func_0x00010035a314(lVar8), (uVar13 & 1) == 0)) {
LAB_104559d48:
      _swift_release(uVar3);
LAB_104559d70:
      func_0x0001000834e4(&lStack_d0);
      return bVar7;
    }
    FUN_104558b10(*(long *)(lVar2 + 0x38) + lVar8 * 0x28,auStack_120);
    FUN_104558c58(auStack_120,alStack_f8);
    plVar9 = &lStack_d0;
    func_0x0001000a8868(plVar9,uStack_b8);
    _swift_getDynamicType();
    plVar10 = alStack_f8;
    func_0x0001000a8868(plVar10,uStack_e0);
    _swift_getDynamicType();
    lVar8 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar9 != plVar10) {
      _swift_release(uVar3);
      func_0x0001000834e4(alStack_f8);
      goto LAB_104559d70;
    }
    func_0x0001000a8868(&lStack_d0,uStack_b8);
    plVar9 = alStack_f8;
    (**(code **)(lVar8 + 0x20))(plVar9,uVar1,lVar8);
    func_0x0001000834e4(alStack_f8);
    if (((ulong)plVar9 & 1) == 0) goto LAB_104559d48;
    func_0x0001000834e4(&lStack_d0);
    lVar8 = lVar12;
    if (uVar15 != 0) goto LAB_104559bfc;
LAB_104559bd0:
    uVar13 = uVar14;
    if ((long)uVar14 <= lVar12 + 1) {
      uVar13 = lVar12 + 1;
    }
    while( true ) {
      lVar8 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x104559da0);
        (*pcVar6)();
      }
      if ((long)uVar14 <= lVar8) break;
      uVar15 = ((ulong *)(uVar3 + 0x40))[lVar8];
      lVar12 = lVar12 + 1;
      if (uVar15 != 0) goto LAB_104559bfc;
    }
    uVar15 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar12 = uVar13 - 1;
  } while( true );
}



/* Entry: 1045880ec; end: 10458817b;  */

/* WARNING: Removing unreachable block (ram,0x000104588148) */

void FUN_1045880ec(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_90 = param_1[8];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  FUN_1045e4b3c(&uStack_d0);
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_90;
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Entry: 10458817c; end: 1045881bf;  */

uint FUN_10458817c(uint param_1)

{
  func_0x000104585574();
  return param_1 & 1;
}



/* Entry: 1045881c0; end: 104588217;  */

uint FUN_1045881c0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x0001045f76f4(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 104588218; end: 104588223;  */

/* WARNING: Removing unreachable block (ram,0x000104588294) */

void FUN_104588218(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  FUN_1045e62a4(unaff_x20[3],&uStack_90,uVar1,uVar2,unaff_x20[2],unaff_x20[3]);
  FUN_1045befbc(&uStack_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 104588224; end: 1045882cb;  */

/* WARNING: Removing unreachable block (ram,0x000104588294) */

void FUN_104588224(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  (*param_4)(unaff_x20[3],&uStack_90,uVar1,uVar2,unaff_x20[2],unaff_x20[3]);
  FUN_1045befbc(&uStack_90,uVar1,uVar2);
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 1045882cc; end: 1045882fb;  */

uint FUN_1045882cc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104585ba8(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],&UNK_11078d990,0x1045e71c8
               );
  return (uint)param_1 & 1;
}



/* Entry: 1045882fc; end: 104588307;  */

bool FUN_1045882fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  ulong uVar15;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  lVar2 = param_1[2];
  uVar14 = param_1[3];
  uVar15 = *unaff_x20;
  uVar13 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  if (uVar5 != uVar14) {
    _swift_retain(uVar5);
    _swift_retain(uVar14);
    uVar11 = uVar5;
    (*(code *)0x1045e71c8)(uVar5,uVar14);
    _swift_release(uVar14);
    _swift_release(uVar5);
    if ((uVar11 & 1) == 0) {
      return false;
    }
  }
  func_0x000100e25fcc(uVar15,uVar13,uVar1,uVar4);
  if ((uVar15 & 1) == 0) {
    return false;
  }
  if (*(long *)(uVar3 + 0x10) != *(long *)(lVar2 + 0x10)) {
    return false;
  }
  uVar14 = 1L << ((ulong)*(byte *)(uVar3 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(uVar3 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(uVar3 + 0x40);
  uVar14 = uVar14 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar12 = 0;
  lVar8 = lVar12;
  if (uVar15 == 0) goto LAB_104559bd0;
LAB_104559bfc:
  uVar13 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  uVar15 = uVar15 - 1 & uVar15;
  uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar8 << 6;
  lStack_d0 = *(long *)(*(long *)(uVar3 + 0x30) + uVar13 * 8);
  FUN_104558b10(*(long *)(uVar3 + 0x38) + uVar13 * 0x28,&uStack_c8);
  lVar12 = lVar8;
  do {
    lVar8 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar7 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(uVar3);
      return true;
    }
    uVar13 = 0;
    FUN_104558c58(&uStack_98);
    if ((*(long *)(lVar2 + 0x10) == 0) || (func_0x00010035a314(lVar8), (uVar13 & 1) == 0)) {
LAB_104559d48:
      _swift_release(uVar3);
LAB_104559d70:
      func_0x0001000834e4(&lStack_d0);
      return bVar7;
    }
    FUN_104558b10(*(long *)(lVar2 + 0x38) + lVar8 * 0x28,auStack_120);
    FUN_104558c58(auStack_120,alStack_f8);
    plVar9 = &lStack_d0;
    func_0x0001000a8868(plVar9,uStack_b8);
    _swift_getDynamicType();
    plVar10 = alStack_f8;
    func_0x0001000a8868(plVar10,uStack_e0);
    _swift_getDynamicType();
    lVar8 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar9 != plVar10) {
      _swift_release(uVar3);
      func_0x0001000834e4(alStack_f8);
      goto LAB_104559d70;
    }
    func_0x0001000a8868(&lStack_d0,uStack_b8);
    plVar9 = alStack_f8;
    (**(code **)(lVar8 + 0x20))(plVar9,uVar1,lVar8);
    func_0x0001000834e4(alStack_f8);
    if (((ulong)plVar9 & 1) == 0) goto LAB_104559d48;
    func_0x0001000834e4(&lStack_d0);
    lVar8 = lVar12;
    if (uVar15 != 0) goto LAB_104559bfc;
LAB_104559bd0:
    uVar13 = uVar14;
    if ((long)uVar14 <= lVar12 + 1) {
      uVar13 = lVar12 + 1;
    }
    while( true ) {
      lVar8 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x104559da0);
        (*pcVar6)();
      }
      if ((long)uVar14 <= lVar8) break;
      uVar15 = ((ulong *)(uVar3 + 0x40))[lVar8];
      lVar12 = lVar12 + 1;
      if (uVar15 != 0) goto LAB_104559bfc;
    }
    uVar15 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar12 = uVar13 - 1;
  } while( true );
}



/* Entry: 104588308; end: 1045883cf;  */

bool FUN_104588308(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  ulong uVar15;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  lVar2 = param_1[2];
  uVar14 = param_1[3];
  uVar15 = *unaff_x20;
  uVar13 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  if (uVar5 != uVar14) {
    _swift_retain(uVar5);
    _swift_retain(uVar14);
    uVar11 = uVar5;
    (*param_4)(uVar5,uVar14);
    _swift_release(uVar14);
    _swift_release(uVar5);
    if ((uVar11 & 1) == 0) {
      return false;
    }
  }
  func_0x000100e25fcc(uVar15,uVar13,uVar1,uVar4);
  if ((uVar15 & 1) == 0) {
    return false;
  }
  if (*(long *)(uVar3 + 0x10) != *(long *)(lVar2 + 0x10)) {
    return false;
  }
  uVar14 = 1L << ((ulong)*(byte *)(uVar3 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(uVar3 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(uVar3 + 0x40);
  uVar14 = uVar14 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar12 = 0;
  lVar8 = lVar12;
  if (uVar15 == 0) goto LAB_104559bd0;
LAB_104559bfc:
  uVar13 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
  uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
  uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  uVar15 = uVar15 - 1 & uVar15;
  uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar8 << 6;
  lStack_d0 = *(long *)(*(long *)(uVar3 + 0x30) + uVar13 * 8);
  FUN_104558b10(*(long *)(uVar3 + 0x38) + uVar13 * 0x28,&uStack_c8);
  lVar12 = lVar8;
  do {
    lVar8 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar7 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(uVar3);
      return true;
    }
    uVar13 = 0;
    FUN_104558c58(&uStack_98);
    if ((*(long *)(lVar2 + 0x10) == 0) || (func_0x00010035a314(lVar8), (uVar13 & 1) == 0)) {
LAB_104559d48:
      _swift_release(uVar3);
LAB_104559d70:
      func_0x0001000834e4(&lStack_d0);
      return bVar7;
    }
    FUN_104558b10(*(long *)(lVar2 + 0x38) + lVar8 * 0x28,auStack_120);
    FUN_104558c58(auStack_120,alStack_f8);
    plVar9 = &lStack_d0;
    func_0x0001000a8868(plVar9,uStack_b8);
    _swift_getDynamicType();
    plVar10 = alStack_f8;
    func_0x0001000a8868(plVar10,uStack_e0);
    _swift_getDynamicType();
    lVar8 = lStack_b0;
    uVar1 = uStack_b8;
    if (plVar9 != plVar10) {
      _swift_release(uVar3);
      func_0x0001000834e4(alStack_f8);
      goto LAB_104559d70;
    }
    func_0x0001000a8868(&lStack_d0,uStack_b8);
    plVar9 = alStack_f8;
    (**(code **)(lVar8 + 0x20))(plVar9,uVar1,lVar8);
    func_0x0001000834e4(alStack_f8);
    if (((ulong)plVar9 & 1) == 0) goto LAB_104559d48;
    func_0x0001000834e4(&lStack_d0);
    lVar8 = lVar12;
    if (uVar15 != 0) goto LAB_104559bfc;
LAB_104559bd0:
    uVar13 = uVar14;
    if ((long)uVar14 <= lVar12 + 1) {
      uVar13 = lVar12 + 1;
    }
    while( true ) {
      lVar8 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x104559da0);
        (*pcVar6)();
      }
      if ((long)uVar14 <= lVar8) break;
      uVar15 = ((ulong *)(uVar3 + 0x40))[lVar8];
      lVar12 = lVar12 + 1;
      if (uVar15 != 0) goto LAB_104559bfc;
    }
    uVar15 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar12 = uVar13 - 1;
  } while( true );
}



/* Entry: 1045883d0; end: 1045883d7;  */

undefined8 FUN_1045883d0(void)

{
  return 1;
}



/* Entry: 1045883d8; end: 10458849b;  */

void FUN_1045883d8(void)

{
  func_0x0001045bf664();
  return;
}



/* Entry: 10458849c; end: 1045884a3;  */

undefined8 FUN_10458849c(void)

{
  return 1;
}



/* Entry: 1045884a4; end: 10458852b;  */

/* WARNING: Removing unreachable block (ram,0x0001045884f8) */

void FUN_1045884a4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = (undefined1)unaff_x20[3];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x21);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x19);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x19) >> 0x38);
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  FUN_1045e91dc(&uStack_b0);
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = uStack_70;
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  return;
}



/* Entry: 10458852c; end: 104588567;  */

uint FUN_10458852c(uint param_1)

{
  FUN_1045857f8();
  return param_1 & 1;
}



/* Entry: 104588568; end: 1045885af;  */

uint FUN_104588568(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_30 = param_1[2];
  uStack_28 = (undefined1)param_1[3];
  uStack_1f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_60 = unaff_x20[2];
  uStack_58 = (undefined1)unaff_x20[3];
  uStack_4f = *(undefined8 *)((long)unaff_x20 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x19) >> 0x38);
  func_0x0001045f4c0c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1045885b0; end: 104588623;  */

void FUN_1045885b0(void)

{
  FUN_1045bfb8c();
  return;
}



/* Entry: 104588624; end: 10458866b;  */

uint FUN_104588624(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  func_0x0001045f7c60(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10458866c; end: 1045886fb;  */

/* WARNING: Removing unreachable block (ram,0x0001045886c8) */

void FUN_10458866c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_90 = param_1[8];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  FUN_1045ea390(&uStack_d0);
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_90;
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Entry: 1045886fc; end: 10458873f;  */

uint FUN_1045886fc(uint param_1)

{
  FUN_104585cf4();
  return param_1 & 1;
}



/* Entry: 104588740; end: 104588797;  */

uint FUN_104588740(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x0001045f7e5c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 104588798; end: 10458883b;  */

/* WARNING: Removing unreachable block (ram,0x000104588808) */

void FUN_104588798(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_50 = unaff_x20[0xc];
  uStack_48 = (undefined1)unaff_x20[0xd];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x71);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x69);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_c0 = param_1[8];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  FUN_1045ead9c(&uStack_100);
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = uStack_c0;
  param_1[1] = uStack_f8;
  *param_1 = uStack_100;
  param_1[3] = uStack_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Entry: 10458883c; end: 10458888f;  */

uint FUN_10458883c(uint param_1)

{
  FUN_104584f00();
  return param_1 & 1;
}



/* Entry: 104588890; end: 10458890f;  */

uint FUN_104588890(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
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
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_40 = param_1[0xc];
  uStack_38 = (undefined1)param_1[0xd];
  uStack_2f = *(undefined8 *)((long)param_1 + 0x71);
  uStack_37 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_c0 = unaff_x20[0xc];
  uStack_af = *(undefined8 *)((long)unaff_x20 + 0x71);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
  uStack_b8 = (undefined1)unaff_x20[0xd];
  uStack_b7 = (undefined7)((ulong)unaff_x20[0xd] >> 8);
  func_0x0001045f65a4(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 104588910; end: 104588993;  */

void FUN_104588910(void)

{
  FUN_1045bf768();
  return;
}



/* Entry: 104588994; end: 1045889eb;  */

uint FUN_104588994(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = *(undefined1 *)(param_1 + 8);
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = *(undefined1 *)(unaff_x20 + 8);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_1045f74cc(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1045889ec; end: 104588a7b;  */

/* WARNING: Removing unreachable block (ram,0x000104588a48) */

void FUN_1045889ec(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_90 = param_1[8];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  FUN_1045ec3e0(&uStack_d0);
  param_1[5] = uStack_a8;
  param_1[4] = uStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = uStack_90;
  param_1[1] = uStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  return;
}


