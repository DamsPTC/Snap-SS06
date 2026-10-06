/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033eea20; end: 1033eed3b;  */

/* WARNING: Removing unreachable block (ram,0x0001033eeb88) */
/* WARNING: Removing unreachable block (ram,0x0001033eeafc) */
/* WARNING: Removing unreachable block (ram,0x0001033eec68) */
/* WARNING: Removing unreachable block (ram,0x0001033eec18) */
/* WARNING: Removing unreachable block (ram,0x0001033eecbc) */
/* WARNING: Removing unreachable block (ram,0x0001033eebd0) */

void FUN_1033eea20(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  double dVar9;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined7 uStack_87;
  
  lVar5 = 0x112f641e0;
  func_0x0001000285a8(0x112f641e0,&UNK_10dbc0828);
  lVar8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar6 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  func_0x0001033efe14();
  func_0x000107c606e0(auStack_a0 + -extraout_x8,&UNK_11064f678,&UNK_11064f678,lVar6,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_88 = 0;
    puVar7 = &uStack_88;
    lVar6 = lVar5;
    func_0x000107c604f4();
    uStack_89 = 1;
    puStack_98 = puVar7;
    func_0x0001010f2b20();
    func_0x000107c60508(&uStack_88,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_89,lVar5,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar7);
    uVar1 = CONCAT71(uStack_87,uStack_88);
    uStack_89 = 2;
    func_0x000107c60508(&uStack_88,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_89,lVar5,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar7);
    uVar2 = CONCAT71(uStack_87,uStack_88);
    uStack_89 = 3;
    func_0x000107c60508(&uStack_88,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_89,lVar5,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar7);
    uVar3 = CONCAT71(uStack_87,uStack_88);
    uStack_89 = 4;
    func_0x000107c60508(&uStack_88,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_89,lVar5,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar7);
    uVar4 = CONCAT71(uStack_87,uStack_88);
    uStack_89 = 5;
    func_0x000107c60508(&uStack_88,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_89,lVar5,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar7);
    (**(code **)(lVar8 + 8))(auStack_a0 + -extraout_x8,lVar5);
    dVar9 = 0.0;
    if ((double)CONCAT71(uStack_87,uStack_88) != 0.0) {
      dVar9 = ((double)CONCAT71(uStack_87,uStack_88) * 3.141592653589793) / 180.0;
    }
    func_0x0001000834e4(param_2);
    *param_1 = puStack_98;
    param_1[1] = lVar6;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    param_1[6] = dVar9;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1033eed3c; end: 1033eef0b;  */

undefined4 FUN_1033eed3c(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == 0x655474706d6f7270 && param_2 == -0x15ffffffffff8b88) ||
     (func_0x000107c605b8(0x655474706d6f7270,0xea00000000007478,param_1,param_2,0), (uVar2 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0x746169636f737361;
    if (((param_1 == 0x746169636f737361) && (param_2 == -0x11ff9e8b9ebb9b9b)) ||
       (func_0x000107c605b8(0x746169636f737361,0xee00617461446465,param_1,param_2,0),
       (uVar2 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar1 = 1;
    }
    else {
      if ((param_1 != -0x2fffffffffffffea) || (param_2 != -0x7ffffffef0eb6500)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000016,0x800000010f149b00,param_1,param_2,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0x49726f7461657263;
          if (((param_1 != 0x49726f7461657263) || (param_2 != -0x14ffffffff909992)) &&
             (func_0x000107c605b8(0x49726f7461657263,0xeb000000006f666e,param_1,param_2,0),
             (uVar2 & 1) == 0)) {
            uVar2 = 0x496e6f6973736573;
            if ((param_1 == 0x496e6f6973736573) && (param_2 == -0x16ffffffffffff9c)) {
              func_0x000107c6142c(0xe900000000000064);
              return 4;
            }
            func_0x000107c605b8(0x496e6f6973736573,0xe900000000000064,param_1,param_2,0);
            func_0x000107c6142c(param_2);
            if ((uVar2 & 1) != 0) {
              return 4;
            }
            return 5;
          }
          func_0x000107c6142c(param_2);
          return 3;
        }
      }
      func_0x000107c6142c(param_2);
      uVar1 = 2;
    }
  }
  return uVar1;
}



/* Entry: 1033eef0c; end: 1033eef77;  */

ulong FUN_1033eef0c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Entry: 1033eef78; end: 1033ef21f;  */

/* WARNING: Removing unreachable block (ram,0x0001033ef050) */
/* WARNING: Removing unreachable block (ram,0x0001033ef168) */
/* WARNING: Removing unreachable block (ram,0x0001033ef0f0) */
/* WARNING: Removing unreachable block (ram,0x0001033ef124) */
/* WARNING: Removing unreachable block (ram,0x0001033ef198) */
/* WARNING: Removing unreachable block (ram,0x0001033ef0b8) */

void FUN_1033eef78(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar1 = 0x112f640b8;
  func_0x0001000285a8(0x112f640b8,&UNK_10dbc0118);
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  lVar2 = param_2;
  func_0x0001000a8868(param_2,uVar4);
  FUN_1033ef220();
  func_0x000107c606e0(auStack_90 + -extraout_x8,&UNK_11064f3a8,&UNK_11064f3a8,lVar2,uVar4,uVar5);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar3 = &uStack_51;
    lVar2 = lVar1;
    func_0x000107c604f4();
    uVar4 = 0x112f640a0;
    lStack_80 = lVar2;
    puStack_78 = puVar3;
    func_0x0001000285a8(0x112f640a0,&UNK_10dbc0110);
    uStack_52 = 1;
    uVar5 = uVar4;
    FUN_1033ee970();
    func_0x000107c60508(&uStack_68,uVar4,&uStack_52,lVar1,uVar4,uVar5);
    uStack_88 = uStack_68;
    uStack_53 = 2;
    puVar3 = &uStack_53;
    lStack_70 = lVar9;
    func_0x000107c604f8(puVar3,lVar1);
    uStack_54 = 3;
    puVar6 = &uStack_54;
    func_0x000107c60500(puVar6,lVar1);
    uStack_8c = 0;
    uStack_55 = 4;
    puVar7 = &uStack_55;
    func_0x000107c604f8(puVar7,lVar1);
    uStack_56 = 5;
    puVar8 = &uStack_56;
    func_0x000107c604f8(puVar8,lVar1);
    (**(code **)(lStack_70 + 8))(auStack_90 + -extraout_x8,lVar1);
    func_0x0001000834e4(param_2);
    *param_1 = puStack_78;
    param_1[1] = lStack_80;
    param_1[2] = uStack_88;
    *(byte *)(param_1 + 3) = (byte)puVar3 & 1;
    param_1[4] = puVar6;
    *(char *)(param_1 + 5) = (char)uStack_8c;
    *(byte *)((long)param_1 + 0x29) = (byte)puVar7 & 1;
    *(byte *)((long)param_1 + 0x2a) = (byte)puVar8 & 1;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1033ef220; end: 1033ef31f;  */

void FUN_1033ef220(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f640c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0704;
  func_0x000107c61520(&UNK_10dbc0704,&UNK_11064f3a8);
  puRam0000000112f640c0 = puVar1;
  return;
}



/* Entry: 1033ef320; end: 1033ef83b;  */

undefined8 FUN_1033ef320(void)

{
  return 0;
}



/* Entry: 1033ef83c; end: 1033ef877;  */

undefined8 * FUN_1033ef83c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1033ef878; end: 1033ef8eb;  */

undefined8 * FUN_1033ef878(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 1033ef8ec; end: 1033ef92f;  */

undefined8 * FUN_1033ef8ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  uVar3 = param_2[5];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[5] = uVar3;
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 1033ef930; end: 1033ef9d7;  */

int FUN_1033ef930(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1033ef9d8; end: 1033efa17;  */

void FUN_1033ef9d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f640f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc020c;
  func_0x000107c61520(&UNK_10dbc020c,&UNK_11064f558);
  puRam0000000112f640f0 = puVar1;
  return;
}



/* Entry: 1033efa18; end: 1033efa1b;  */

void FUN_1033efa18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f640f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc02c4;
  func_0x000107c61520(&UNK_10dbc02c4,&UNK_11064f4c8);
  puRam0000000112f640f8 = puVar1;
  return;
}



/* Entry: 1033efa1c; end: 1033efa5b;  */

void FUN_1033efa1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f640f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc02c4;
  func_0x000107c61520(&UNK_10dbc02c4,&UNK_11064f4c8);
  puRam0000000112f640f8 = puVar1;
  return;
}



/* Entry: 1033efa5c; end: 1033efa5f;  */

void FUN_1033efa5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc03b4;
  func_0x000107c61520(&UNK_10dbc03b4,&UNK_11064f438);
  puRam0000000112f64100 = puVar1;
  return;
}



/* Entry: 1033efa60; end: 1033efa9f;  */

void FUN_1033efa60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc03b4;
  func_0x000107c61520(&UNK_10dbc03b4,&UNK_11064f438);
  puRam0000000112f64100 = puVar1;
  return;
}



/* Entry: 1033efaa0; end: 1033efaa3;  */

void FUN_1033efaa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc04a4;
  func_0x000107c61520(&UNK_10dbc04a4,&UNK_11064f3a8);
  puRam0000000112f64108 = puVar1;
  return;
}



/* Entry: 1033efaa4; end: 1033efae3;  */

void FUN_1033efaa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64108 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc04a4;
  func_0x000107c61520(&UNK_10dbc04a4,&UNK_11064f3a8);
  puRam0000000112f64108 = puVar1;
  return;
}



/* Entry: 1033efae4; end: 1033efae7;  */

void FUN_1033efae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc055c;
  func_0x000107c61520(&UNK_10dbc055c,&UNK_11064f318);
  puRam0000000112f64110 = puVar1;
  return;
}



/* Entry: 1033efae8; end: 1033efb27;  */

void FUN_1033efae8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc055c;
  func_0x000107c61520(&UNK_10dbc055c,&UNK_11064f318);
  puRam0000000112f64110 = puVar1;
  return;
}



/* Entry: 1033efb28; end: 1033efb2b;  */

void FUN_1033efb28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0614;
  func_0x000107c61520(&UNK_10dbc0614,&UNK_11064f288);
  puRam0000000112f64118 = puVar1;
  return;
}



/* Entry: 1033efb2c; end: 1033efb6b;  */

void FUN_1033efb2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0614;
  func_0x000107c61520(&UNK_10dbc0614,&UNK_11064f288);
  puRam0000000112f64118 = puVar1;
  return;
}



/* Entry: 1033efb6c; end: 1033efb6f;  */

void FUN_1033efb6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc05ac;
  func_0x000107c61520(&UNK_10dbc05ac,&UNK_11064f288);
  puRam0000000112f64120 = puVar1;
  return;
}



/* Entry: 1033efb70; end: 1033efbaf;  */

void FUN_1033efb70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc05ac;
  func_0x000107c61520(&UNK_10dbc05ac,&UNK_11064f288);
  puRam0000000112f64120 = puVar1;
  return;
}



/* Entry: 1033efbb0; end: 1033efbb3;  */

void FUN_1033efbb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0584;
  func_0x000107c61520(&UNK_10dbc0584,&UNK_11064f288);
  puRam0000000112f64128 = puVar1;
  return;
}



/* Entry: 1033efbb4; end: 1033efbf3;  */

void FUN_1033efbb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0584;
  func_0x000107c61520(&UNK_10dbc0584,&UNK_11064f288);
  puRam0000000112f64128 = puVar1;
  return;
}



/* Entry: 1033efbf4; end: 1033efbf7;  */

void FUN_1033efbf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc04f4;
  func_0x000107c61520(&UNK_10dbc04f4,&UNK_11064f318);
  puRam0000000112f64130 = puVar1;
  return;
}



/* Entry: 1033efbf8; end: 1033efc37;  */

void FUN_1033efbf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc04f4;
  func_0x000107c61520(&UNK_10dbc04f4,&UNK_11064f318);
  puRam0000000112f64130 = puVar1;
  return;
}



/* Entry: 1033efc38; end: 1033efc3b;  */

void FUN_1033efc38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc04cc;
  func_0x000107c61520(&UNK_10dbc04cc,&UNK_11064f318);
  puRam0000000112f64138 = puVar1;
  return;
}



/* Entry: 1033efc3c; end: 1033efc7b;  */

void FUN_1033efc3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc04cc;
  func_0x000107c61520(&UNK_10dbc04cc,&UNK_11064f318);
  puRam0000000112f64138 = puVar1;
  return;
}



/* Entry: 1033efc7c; end: 1033efc7f;  */

void FUN_1033efc7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0404;
  func_0x000107c61520(&UNK_10dbc0404,&UNK_11064f3a8);
  puRam0000000112f64140 = puVar1;
  return;
}



/* Entry: 1033efc80; end: 1033efcbf;  */

void FUN_1033efc80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0404;
  func_0x000107c61520(&UNK_10dbc0404,&UNK_11064f3a8);
  puRam0000000112f64140 = puVar1;
  return;
}



/* Entry: 1033efcc0; end: 1033efcc3;  */

void FUN_1033efcc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc03dc;
  func_0x000107c61520(&UNK_10dbc03dc,&UNK_11064f3a8);
  puRam0000000112f64148 = puVar1;
  return;
}



/* Entry: 1033efcc4; end: 1033efd03;  */

void FUN_1033efcc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc03dc;
  func_0x000107c61520(&UNK_10dbc03dc,&UNK_11064f3a8);
  puRam0000000112f64148 = puVar1;
  return;
}



/* Entry: 1033efd04; end: 1033efd07;  */

void FUN_1033efd04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0314;
  func_0x000107c61520(&UNK_10dbc0314,&UNK_11064f438);
  puRam0000000112f64150 = puVar1;
  return;
}



/* Entry: 1033efd08; end: 1033efd47;  */

void FUN_1033efd08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0314;
  func_0x000107c61520(&UNK_10dbc0314,&UNK_11064f438);
  puRam0000000112f64150 = puVar1;
  return;
}



/* Entry: 1033efd48; end: 1033efd4b;  */

void FUN_1033efd48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc02ec;
  func_0x000107c61520(&UNK_10dbc02ec,&UNK_11064f438);
  puRam0000000112f64158 = puVar1;
  return;
}



/* Entry: 1033efd4c; end: 1033efd8b;  */

void FUN_1033efd4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc02ec;
  func_0x000107c61520(&UNK_10dbc02ec,&UNK_11064f438);
  puRam0000000112f64158 = puVar1;
  return;
}



/* Entry: 1033efd8c; end: 1033efd8f;  */

void FUN_1033efd8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc025c;
  func_0x000107c61520(&UNK_10dbc025c,&UNK_11064f4c8);
  puRam0000000112f64160 = puVar1;
  return;
}



/* Entry: 1033efd90; end: 1033efdcf;  */

void FUN_1033efd90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc025c;
  func_0x000107c61520(&UNK_10dbc025c,&UNK_11064f4c8);
  puRam0000000112f64160 = puVar1;
  return;
}



/* Entry: 1033efdd0; end: 1033efdd3;  */

void FUN_1033efdd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0234;
  func_0x000107c61520(&UNK_10dbc0234,&UNK_11064f4c8);
  puRam0000000112f64168 = puVar1;
  return;
}



/* Entry: 1033efdd4; end: 1033efe93;  */

void FUN_1033efdd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0234;
  func_0x000107c61520(&UNK_10dbc0234,&UNK_11064f4c8);
  puRam0000000112f64168 = puVar1;
  return;
}



/* Entry: 1033efe94; end: 1033effeb;  */

int FUN_1033efe94(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1033eff10;
        goto LAB_1033efef4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1033efef4:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1033eff10:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1033effec; end: 1033f002b;  */

void FUN_1033effec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc08f8;
  func_0x000107c61520(&UNK_10dbc08f8,&UNK_11064f678);
  puRam0000000112f64308 = puVar1;
  return;
}



/* Entry: 1033f002c; end: 1033f002f;  */

void FUN_1033f002c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0858;
  func_0x000107c61520(&UNK_10dbc0858,&UNK_11064f678);
  puRam0000000112f64310 = puVar1;
  return;
}



/* Entry: 1033f0030; end: 1033f006f;  */

void FUN_1033f0030(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0858;
  func_0x000107c61520(&UNK_10dbc0858,&UNK_11064f678);
  puRam0000000112f64310 = puVar1;
  return;
}



/* Entry: 1033f0070; end: 1033f0073;  */

void FUN_1033f0070(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0830;
  func_0x000107c61520(&UNK_10dbc0830,&UNK_11064f678);
  puRam0000000112f64318 = puVar1;
  return;
}



/* Entry: 1033f0074; end: 1033f00b3;  */

void FUN_1033f0074(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f64318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbc0830;
  func_0x000107c61520(&UNK_10dbc0830,&UNK_11064f678);
  puRam0000000112f64318 = puVar1;
  return;
}



/* Entry: 1033f00b4; end: 1033f0167;  */

undefined1 FUN_1033f00b4(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1033f0168; end: 1033f01b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0168(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f643d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033f01b4; end: 1033f0213; -[_TtC21SCLensPromptApiPlugin43PlayGamesScopedLensPromptDependencyProvider init] */

void FUN_1033f01b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPromptApiPlugin.PlayGamesScopedLensPromptDependencyProvider",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033f01e0);
  (*pcVar1)();
}



/* Entry: 1033f0214; end: 1033f0223; -[_TtC21SCLensPromptApiPlugin43PlayGamesScopedLensPromptDependencyProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f643d8));
  return;
}



/* Entry: 1033f0224; end: 1033f0243;  */

void FUN_1033f0224(void)

{
  func_0x000107c61168(&PTR_PTR_1128d7e28);
  return;
}



/* Entry: 1033f0244; end: 1033f024f; -[SCLensPromptCaptureApiPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0244(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64408;
  func_0x000107c61428(param_1 + _DAT_112f64408,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f0250; end: 1033f025b; -[SCLensPromptCaptureApiPluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0250(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64408;
  func_0x000107c61428(param_1 + _DAT_112f64408,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f025c; end: 1033f0267; -[SCLensPromptCaptureApiPluginEntryPoint promptLensesDataService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f025c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64410;
  func_0x000107c61428(param_1 + _DAT_112f64410,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f0268; end: 1033f0273; -[SCLensPromptCaptureApiPluginEntryPoint setPromptLensesDataService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0268(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64410;
  func_0x000107c61428(param_1 + _DAT_112f64410,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f0274; end: 1033f027f; -[SCLensPromptCaptureApiPluginEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0274(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64418;
  func_0x000107c61428(param_1 + _DAT_112f64418,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f0280; end: 1033f028b; -[SCLensPromptCaptureApiPluginEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0280(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64418;
  func_0x000107c61428(param_1 + _DAT_112f64418,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f028c; end: 1033f0297; -[SCLensPromptCaptureApiPluginEntryPoint circumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f028c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64420;
  func_0x000107c61428(param_1 + _DAT_112f64420,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f0298; end: 1033f02a3; -[SCLensPromptCaptureApiPluginEntryPoint setCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0298(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64420;
  func_0x000107c61428(param_1 + _DAT_112f64420,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f02a4; end: 1033f02af; -[SCLensPromptCaptureApiPluginEntryPoint loggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f02a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64428;
  func_0x000107c61428(param_1 + _DAT_112f64428,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f02b0; end: 1033f02bb; -[SCLensPromptCaptureApiPluginEntryPoint setLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f02b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64428;
  func_0x000107c61428(param_1 + _DAT_112f64428,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f02bc; end: 1033f02c7; -[SCLensPromptCaptureApiPluginEntryPoint lensPreviewConfiguringServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f02bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64430;
  func_0x000107c61428(param_1 + _DAT_112f64430,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f02c8; end: 1033f02d3; -[SCLensPromptCaptureApiPluginEntryPoint setLensPreviewConfiguringServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f02c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64430;
  func_0x000107c61428(param_1 + _DAT_112f64430,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f02d4; end: 1033f02df; -[SCLensPromptCaptureApiPluginEntryPoint lensPromptLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f02d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64438;
  func_0x000107c61428(param_1 + _DAT_112f64438,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f02e0; end: 1033f02eb; -[SCLensPromptCaptureApiPluginEntryPoint setLensPromptLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f02e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64438;
  func_0x000107c61428(param_1 + _DAT_112f64438,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f02ec; end: 1033f02f7; -[SCLensPromptCaptureApiPluginEntryPoint storiesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f02ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64440;
  func_0x000107c61428(param_1 + _DAT_112f64440,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f02f8; end: 1033f0303; -[SCLensPromptCaptureApiPluginEntryPoint setStoriesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f02f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64440;
  func_0x000107c61428(param_1 + _DAT_112f64440,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f0304; end: 1033f030f; -[SCLensPromptCaptureApiPluginEntryPoint storiesPlaybackServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0304(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64448;
  func_0x000107c61428(param_1 + _DAT_112f64448,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f0310; end: 1033f031b; -[SCLensPromptCaptureApiPluginEntryPoint setStoriesPlaybackServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0310(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64448;
  func_0x000107c61428(param_1 + _DAT_112f64448,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f031c; end: 1033f0327; -[SCLensPromptCaptureApiPluginEntryPoint contentDeliveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f031c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64450;
  func_0x000107c61428(param_1 + _DAT_112f64450,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f0328; end: 1033f0333; -[SCLensPromptCaptureApiPluginEntryPoint setContentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0328(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64450;
  func_0x000107c61428(param_1 + _DAT_112f64450,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f0334; end: 1033f033f; -[SCLensPromptCaptureApiPluginEntryPoint videoFilterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0334(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64458;
  func_0x000107c61428(param_1 + _DAT_112f64458,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f0340; end: 1033f034b; -[SCLensPromptCaptureApiPluginEntryPoint setVideoFilterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0340(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64458;
  func_0x000107c61428(param_1 + _DAT_112f64458,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f034c; end: 1033f0357; -[SCLensPromptCaptureApiPluginEntryPoint previewVideoProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f034c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64460;
  func_0x000107c61428(param_1 + _DAT_112f64460,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f0358; end: 1033f0363; -[SCLensPromptCaptureApiPluginEntryPoint setPreviewVideoProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0358(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64460;
  func_0x000107c61428(param_1 + _DAT_112f64460,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f0364; end: 1033f036f; -[SCLensPromptCaptureApiPluginEntryPoint promptDependencyProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0364(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64468;
  func_0x000107c61428(param_1 + _DAT_112f64468,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f0370; end: 1033f037b; -[SCLensPromptCaptureApiPluginEntryPoint setPromptDependencyProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0370(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64468;
  func_0x000107c61428(param_1 + _DAT_112f64468,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f037c; end: 1033f0387; -[SCLensPromptCaptureApiPluginEntryPoint chatContentDeliveringServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f037c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64470;
  func_0x000107c61428(param_1 + _DAT_112f64470,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f0388; end: 1033f0393; -[SCLensPromptCaptureApiPluginEntryPoint setChatContentDeliveringServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0388(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64470;
  func_0x000107c61428(param_1 + _DAT_112f64470,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f0394; end: 1033f039f; -[SCLensPromptCaptureApiPluginEntryPoint activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0394(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64478;
  func_0x000107c61428(param_1 + _DAT_112f64478,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f03a0; end: 1033f03ab; -[SCLensPromptCaptureApiPluginEntryPoint setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f03a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64478;
  func_0x000107c61428(param_1 + _DAT_112f64478,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f03ac; end: 1033f03b7; -[SCLensPromptCaptureApiPluginEntryPoint lensFullScreenUXServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f03ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64480;
  func_0x000107c61428(param_1 + _DAT_112f64480,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f03b8; end: 1033f03c3; -[SCLensPromptCaptureApiPluginEntryPoint setLensFullScreenUXServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f03b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64480;
  func_0x000107c61428(param_1 + _DAT_112f64480,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f03c4; end: 1033f03cf; -[SCLensPromptCaptureApiPluginEntryPoint retryDelegateServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f03c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f64488;
  func_0x000107c61428(param_1 + _DAT_112f64488,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f03d0; end: 1033f0413;  */

void FUN_1033f03d0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f0414; end: 1033f041f; -[SCLensPromptCaptureApiPluginEntryPoint setRetryDelegateServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0414(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f64488;
  func_0x000107c61428(param_1 + _DAT_112f64488,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f0420; end: 1033f0473;  */

void FUN_1033f0420(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1033f0474; end: 1033f10cf;  */

/* WARNING: Possible PIC construction at 0x0001033f0694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f083c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f1020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f1030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f1040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f1050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f1060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f1070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f1080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f1090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0e0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0c2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033f0abc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033f0ae0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0ad0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0b00) */
/* WARNING: Removing unreachable block (ram,0x0001033f0af0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0b30) */
/* WARNING: Removing unreachable block (ram,0x0001033f0b20) */
/* WARNING: Removing unreachable block (ram,0x0001033f0b70) */
/* WARNING: Removing unreachable block (ram,0x0001033f0b60) */
/* WARNING: Removing unreachable block (ram,0x0001033f0b50) */
/* WARNING: Removing unreachable block (ram,0x0001033f0bb0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0ba0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0b90) */
/* WARNING: Removing unreachable block (ram,0x0001033f0b80) */
/* WARNING: Removing unreachable block (ram,0x0001033f0bf0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0be0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0bd0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0bc0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0c40) */
/* WARNING: Removing unreachable block (ram,0x0001033f0c30) */
/* WARNING: Removing unreachable block (ram,0x0001033f0c20) */
/* WARNING: Removing unreachable block (ram,0x0001033f0c10) */
/* WARNING: Removing unreachable block (ram,0x0001033f0ca0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0c90) */
/* WARNING: Removing unreachable block (ram,0x0001033f0c80) */
/* WARNING: Removing unreachable block (ram,0x0001033f0c70) */
/* WARNING: Removing unreachable block (ram,0x0001033f0c60) */
/* WARNING: Removing unreachable block (ram,0x0001033f0d00) */
/* WARNING: Removing unreachable block (ram,0x0001033f0cf0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0ce0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0cd0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0cc0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0cb0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0d60) */
/* WARNING: Removing unreachable block (ram,0x0001033f0d50) */
/* WARNING: Removing unreachable block (ram,0x0001033f0d40) */
/* WARNING: Removing unreachable block (ram,0x0001033f0d30) */
/* WARNING: Removing unreachable block (ram,0x0001033f0d20) */
/* WARNING: Removing unreachable block (ram,0x0001033f0d10) */
/* WARNING: Removing unreachable block (ram,0x0001033f0dd0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0dc0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0db0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0da0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0d90) */
/* WARNING: Removing unreachable block (ram,0x0001033f0d80) */
/* WARNING: Removing unreachable block (ram,0x0001033f0e50) */
/* WARNING: Removing unreachable block (ram,0x0001033f0e40) */
/* WARNING: Removing unreachable block (ram,0x0001033f0e30) */
/* WARNING: Removing unreachable block (ram,0x0001033f0e20) */
/* WARNING: Removing unreachable block (ram,0x0001033f0e10) */
/* WARNING: Removing unreachable block (ram,0x0001033f0e00) */
/* WARNING: Removing unreachable block (ram,0x0001033f0df0) */
/* WARNING: Removing unreachable block (ram,0x0001033f1094) */
/* WARNING: Removing unreachable block (ram,0x0001033f1084) */
/* WARNING: Removing unreachable block (ram,0x0001033f1074) */
/* WARNING: Removing unreachable block (ram,0x0001033f1064) */
/* WARNING: Removing unreachable block (ram,0x0001033f1054) */
/* WARNING: Removing unreachable block (ram,0x0001033f1044) */
/* WARNING: Removing unreachable block (ram,0x0001033f1034) */
/* WARNING: Removing unreachable block (ram,0x0001033f1024) */
/* WARNING: Removing unreachable block (ram,0x0001033f0fe0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0fd0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0fc0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0fb0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0fa0) */
/* WARNING: Removing unreachable block (ram,0x0001033f0f90) */
/* WARNING: Removing unreachable block (ram,0x0001033f0f80) */
/* WARNING: Removing unreachable block (ram,0x0001033f0f70) */
/* WARNING: Removing unreachable block (ram,0x0001033f0f58) */
/* WARNING: Removing unreachable block (ram,0x0001033f0f48) */
/* WARNING: Removing unreachable block (ram,0x0001033f0f20) */
/* WARNING: Removing unreachable block (ram,0x0001033f0f10) */
/* WARNING: Removing unreachable block (ram,0x0001033f0e6c) */
/* WARNING: Removing unreachable block (ram,0x0001033f10b8) */
/* WARNING: Removing unreachable block (ram,0x0001033f0e88) */
/* WARNING: Removing unreachable block (ram,0x0001033f0840) */
/* WARNING: Removing unreachable block (ram,0x0001033f0920) */
/* WARNING: Removing unreachable block (ram,0x0001033f0938) */
/* WARNING: Removing unreachable block (ram,0x0001033f0940) */
/* WARNING: Removing unreachable block (ram,0x0001033f094c) */
/* WARNING: Removing unreachable block (ram,0x0001033f0954) */
/* WARNING: Removing unreachable block (ram,0x0001033f0958) */
/* WARNING: Removing unreachable block (ram,0x0001033f0960) */
/* WARNING: Removing unreachable block (ram,0x0001033f0964) */
/* WARNING: Removing unreachable block (ram,0x0001033f096c) */
/* WARNING: Removing unreachable block (ram,0x0001033f0970) */
/* WARNING: Removing unreachable block (ram,0x0001033f0978) */
/* WARNING: Removing unreachable block (ram,0x0001033f097c) */
/* WARNING: Removing unreachable block (ram,0x0001033f0984) */
/* WARNING: Removing unreachable block (ram,0x0001033f0988) */
/* WARNING: Removing unreachable block (ram,0x0001033f09bc) */
/* WARNING: Removing unreachable block (ram,0x0001033f09a0) */
/* WARNING: Removing unreachable block (ram,0x0001033f09b8) */
/* WARNING: Removing unreachable block (ram,0x0001033f0e58) */
/* WARNING: Removing unreachable block (ram,0x0001033f0698) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001033f0ac0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f0474(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c4f4b0();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c3f284();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar5);
        lVar5 = lVar1;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c3fa04();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar5);
          lVar5 = lVar1;
        }
        else {
          lVar3 = unaff_x20;
          func_0x000107c4bff0();
          func_0x000107c61180();
          if (lVar3 != 0) {
            lVar3 = unaff_x20;
            func_0x000107c4b338();
            func_0x000107c61180();
            if (lVar3 != 0) {
              lVar3 = unaff_x20;
              func_0x000107c4b39c();
              func_0x000107c61180();
              if (lVar3 == 0) {
                func_0x000107c61170(lVar5);
                lVar5 = lVar1;
              }
              else {
                lVar3 = unaff_x20;
                func_0x000107c5bf88();
                func_0x000107c61180();
                if (lVar3 == 0) {
                  func_0x000107c61170(lVar5);
                  lVar5 = lVar1;
                }
                else {
                  lVar3 = unaff_x20;
                  func_0x000107c5bf74();
                  func_0x000107c61180();
                  if (lVar3 != 0) {
                    lVar3 = unaff_x20;
                    func_0x000107c40434();
                    func_0x000107c61180();
                    if (lVar3 != 0) {
                      lVar3 = unaff_x20;
                      func_0x000107c5dda8();
                      func_0x000107c61180();
                      if (lVar3 == 0) {
                        func_0x000107c61170(lVar5);
                        lVar5 = lVar1;
                      }
                      else {
                        lVar3 = unaff_x20;
                        func_0x000107c4f1dc();
                        func_0x000107c61180();
                        if (lVar3 == 0) {
                          func_0x000107c61170(lVar5);
                          lVar5 = lVar1;
                        }
                        else {
                          lVar3 = unaff_x20;
                          func_0x000107c4f488();
                          func_0x000107c61180();
                          if (lVar3 != 0) {
                            lVar3 = unaff_x20;
                            func_0x000107c3f850();
                            func_0x000107c61180();
                            if (lVar3 != 0) {
                              lVar3 = unaff_x20;
                              func_0x000107c3d1c4();
                              func_0x000107c61180();
                              if (lVar3 == 0) {
                                func_0x000107c61170(lVar5);
                                lVar5 = lVar1;
                              }
                              else {
                                lVar4 = unaff_x20;
                                func_0x000107c4b190();
                                func_0x000107c61180();
                                if (lVar4 == 0) {
                                  func_0x000107c61170(lVar5);
                                  lVar5 = lVar1;
                                }
                                else {
                                  func_0x000107c50810();
                                  func_0x000107c61180();
                                  if (unaff_x20 != 0) {
                                    func_0x0001033e10c8();
                                    func_0x000107c613fc();
                                    if (*(int *)(lVar2 + _DAT_113082420) == 0) {
                                      func_0x000107c61170(lVar2);
                                      lVar5 = lVar3;
                                    }
                                    else {
                                      lVar5 = *(long *)(lVar3 + _DAT_113083f78);
                                      func_0x000107c5d984();
                                      func_0x000107c61180();
                                      func_0x000107c5faec();
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 1033f10d0; end: 1033f1113;  */

void FUN_1033f10d0(void)

{
  long unaff_x20;
  
  func_0x0001033e0c14(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 1033f1114; end: 1033f113b; -[SCLensPromptCaptureApiPluginEntryPoint begin] */

void FUN_1033f1114(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033f0474();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033f113c; end: 1033f117f; -[SCLensPromptCaptureApiPluginEntryPoint end] */

void FUN_1033f113c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1033f1180; end: 1033f194b;  */

void FUN_1033f1180(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (uVar2 = uVar3, func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0),
     (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
    goto LAB_1033f1214;
  }
  if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef0eb6430)) {
    uVar2 = 0xd000000000000017;
    func_0x000107c605b8(0xd000000000000017,0x800000010f149bd0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x49556172656d6163;
      if (((param_2 == 0x49556172656d6163) && (param_3 == -0x12ffff9a8f909cad)) ||
         (func_0x000107c605b8(0x49556172656d6163,0xed000065706f6353,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c530ec();
      }
      else if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10d9470)) ||
              (func_0x000107c605b8(0xd000000000000012,0x800000010ef26b90,param_2,param_3,0),
              (uVar3 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5340c();
      }
      else {
        uVar3 = 0;
        if (((param_2 == 0x6553726567676f6c) && (param_3 == -0x11ff8c9a9c96898e)) ||
           (func_0x000107c605b8(0x6553726567676f6c,0xee00736563697672,param_2,param_3,0),
           (uVar3 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c560e0();
        }
        else {
          uVar3 = 0;
          if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10dbb20)) ||
             (func_0x000107c605b8(0xd00000000000001e,0x800000010ef244e0,param_2,param_3,0),
             (uVar3 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55e08();
          }
          else {
            uVar3 = 0xd000000000000019;
            if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef0eb6410)) ||
               (func_0x000107c605b8(0xd000000000000019,0x800000010f149bf0,param_2,param_3,0),
               (uVar3 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55e40();
            }
            else {
              uVar3 = 0x53736569726f7473;
              if (((param_2 == 0x53736569726f7473) && (param_3 == -0x108c9a9c96898d9b)) ||
                 (func_0x000107c605b8(0x53736569726f7473,0xef73656369767265,param_2,param_3,0),
                 (uVar3 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c59924();
              }
              else {
                if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10d8180)) {
                  uVar3 = 0xd000000000000017;
                  func_0x000107c605b8(0xd000000000000017,0x800000010ef27e80,param_2,param_3,0);
                  if ((uVar3 & 1) == 0) {
                    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10e6230)) {
                      uVar3 = 0xd000000000000017;
                      func_0x000107c605b8(0xd000000000000017,0x800000010ef19dd0,param_2,param_3,0);
                      if ((uVar3 & 1) == 0) {
                        uVar3 = 0xd000000000000013;
                        if (((param_2 == -0x2fffffffffffffed) && (param_3 == -0x7ffffffef0eb63f0))
                           || (func_0x000107c605b8(0xd000000000000013,0x800000010f149c10,param_2,
                                                   param_3,0), (uVar3 & 1) != 0)) {
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c5a518();
                        }
                        else {
                          uVar3 = 0;
                          if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10d4b50))
                             || (func_0x000107c605b8(0xd00000000000001c,0x800000010ef2b4b0,param_2,
                                                     param_3,0), (uVar3 & 1) != 0)) {
                            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c5780c();
                          }
                          else {
                            uVar3 = 0;
                            if (((param_2 == -0x2fffffffffffffe8) &&
                                (param_3 == -0x7ffffffef0eb63d0)) ||
                               (func_0x000107c605b8(0xd000000000000018,0x800000010f149c30,param_2,
                                                    param_3,0), (uVar3 & 1) != 0)) {
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c57964();
                            }
                            else {
                              uVar3 = 0xd00000000000001d;
                              if (((param_2 == -0x2fffffffffffffe3) &&
                                  (param_3 == -0x7ffffffef103cd40)) ||
                                 (func_0x000107c605b8(0xd00000000000001d,0x800000010efc32c0,param_2,
                                                      param_3,0), (uVar3 & 1) != 0)) {
                                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c53350();
                              }
                              else {
                                uVar3 = 0;
                                if (((param_2 == -0x2fffffffffffffea) &&
                                    (param_3 == -0x7ffffffef10ef1d0)) ||
                                   (func_0x000107c605b8(0xd000000000000016,0x800000010ef10e30,
                                                        param_2,param_3,0), (uVar3 & 1) != 0)) {
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c52228();
                                }
                                else {
                                  if ((param_2 != -0x2fffffffffffffe8) ||
                                     (param_3 != -0x7ffffffef0ebc770)) {
                                    uVar3 = 0;
                                    func_0x000107c605b8(0xd000000000000018,0x800000010f143890,
                                                        param_2,param_3,0);
                                    if ((uVar3 & 1) == 0) {
                                      uVar3 = 0xd000000000000015;
                                      if (((param_2 != -0x2fffffffffffffeb) ||
                                          (param_3 != -0x7ffffffef0eb63b0)) &&
                                         (func_0x000107c605b8(0xd000000000000015,0x800000010f149c50,
                                                              param_2,param_3,0), (uVar3 & 1) == 0))
                                      {
                                        func_0x000107c602fc(0x15);
                                        func_0x000107c6142c(0xe000000000000000);
                                        func_0x000107c5fb78(param_2,param_3);
                                        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                            0x800000010ef0fc20,
                                                                                                                        
                                                  "SCLensPromptApiPlugin/SCLensPromptCaptureApiPluginEntryPoint.swift"
                                                  ,0x42,2,0x72,0);
                    /* WARNING: Does not return */
                                        pcVar1 = (code *)SoftwareBreakpoint(1,0x1033f194c);
                                        (*pcVar1)();
                                      }
                                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                      func_0x000107c605b0();
                                      func_0x000107c57ec8();
                                      goto LAB_1033f1214;
                                    }
                                  }
                                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c55d54();
                                }
                              }
                            }
                          }
                        }
                        goto LAB_1033f1214;
                      }
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c53808();
                    goto LAB_1033f1214;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c59918();
              }
            }
          }
        }
      }
      goto LAB_1033f1214;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c57970();
LAB_1033f1214:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1033f194c; end: 1033f19f7; -[SCLensPromptCaptureApiPluginEntryPoint setValue:forIvarName:] */

void FUN_1033f194c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1033f1180(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033f19f8; end: 1033f1b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f19f8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f64408,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64410,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64418,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64420,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64428,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64430,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64438,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64440,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64448,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64450,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64458,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64460,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64468,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64470,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64478,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64480,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f64488,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f64490) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033f1b98; end: 1033f1bb7; -[SCLensPromptCaptureApiPluginEntryPoint init] */

void FUN_1033f1b98(void)

{
  FUN_1033f19f8();
  return;
}



/* Entry: 1033f1bb8; end: 1033f1beb;  */

void FUN_1033f1bb8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033f1bec; end: 1033f1d23; -[SCLensPromptCaptureApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f1bec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f64408);
  func_0x000107c61610(param_1 + _DAT_112f64410);
  func_0x000107c61610(param_1 + _DAT_112f64418);
  func_0x000107c61610(param_1 + _DAT_112f64420);
  func_0x000107c61610(param_1 + _DAT_112f64428);
  func_0x000107c61610(param_1 + _DAT_112f64430);
  func_0x000107c61610(param_1 + _DAT_112f64438);
  func_0x000107c61610(param_1 + _DAT_112f64440);
  func_0x000107c61610(param_1 + _DAT_112f64448);
  func_0x000107c61610(param_1 + _DAT_112f64450);
  func_0x000107c61610(param_1 + _DAT_112f64458);
  func_0x000107c61610(param_1 + _DAT_112f64460);
  func_0x000107c61610(param_1 + _DAT_112f64468);
  func_0x000107c61610(param_1 + _DAT_112f64470);
  func_0x000107c61610(param_1 + _DAT_112f64478);
  func_0x000107c61610(param_1 + _DAT_112f64480);
  func_0x000107c61610(param_1 + _DAT_112f64488);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f64490));
  return;
}



/* Entry: 1033f1d24; end: 1033f1d43;  */

void FUN_1033f1d24(void)

{
  func_0x000107c61168(&PTR_PTR_1128d7ee8);
  return;
}



/* Entry: 1033f1d44; end: 1033f1d4f; -[SCLensPromptMainCameraApiPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033f1d44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f644c0;
  func_0x000107c61428(param_1 + _DAT_112f644c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


