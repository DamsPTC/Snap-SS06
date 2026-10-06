/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048a09b8; end: 1048a0c23;  */

void FUN_1048a09b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xd000000000000012;
  if (cVar3 != '\x01') {
    uVar1 = 0x6163696669746f6e;
  }
  uVar2 = 0x800000010f2161a0;
  if (cVar3 != '\x01') {
    uVar2 = 0xec0000006e6f6974;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a0c24; end: 1048a0c3f;  */

void FUN_1048a0c24(void)

{
  byte bVar1;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  if (bVar1 >> 6 == 0) {
    if ((bVar1 < 5) && (2 < bVar1)) {
      return;
    }
  }
  else if ((bVar1 >> 6 != 1) && (-0x7e < (char)bVar1)) {
    return;
  }
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  _swift_initStaticObject();
  func_0x000100c8a830();
  return;
}



/* Entry: 1048a0c40; end: 1048a0c87;  */

void FUN_1048a0c40(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  (*param_3)(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a0c88; end: 1048a0c9b;  */

void FUN_1048a0c88(undefined8 param_1)

{
  int iVar1;
  byte bVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  if (bVar2 >> 6 == 0) {
    __ss6HasherV8_combineyySuF(3);
    uVar8 = (uint)bVar2;
    uVar9 = (uint)bVar2;
    if (uVar8 < 4) {
      uVar7 = 0xec00000070756d72;
      uVar6 = 0x615779636167656c;
      if (uVar9 != 2) {
        uVar7 = 0x800000010f2153e0;
        uVar6 = 0xd000000000000016;
      }
      uVar10 = 0xd000000000000013;
      pcVar3 = "warmupCustomStories";
      if (uVar9 != 0) {
        pcVar3 = "snapReadReceiptCleanup";
      }
      uVar11 = (ulong)pcVar3 | 0x8000000000000000;
      bVar4 = SBORROW4(uVar9,1);
      iVar1 = uVar9 - 1;
      bVar5 = uVar9 == 1;
    }
    else {
      uVar11 = 0xee00676e69676461;
      uVar10 = 0x42736569726f7473;
      if (uVar8 != 7) {
        uVar11 = 0x800000010f215380;
        uVar10 = 0xd00000000000001a;
      }
      uVar7 = 0x800000010f2153a0;
      uVar6 = 0xd000000000000010;
      if (uVar8 != 6) {
        uVar7 = uVar11;
        uVar6 = uVar10;
      }
      uVar11 = 0x800000010f2153c0;
      uVar10 = 0xd00000000000001c;
      if (uVar8 != 4) {
        uVar11 = 0xec00000073656972;
        uVar10 = 0x6f74536863746566;
      }
      bVar4 = SBORROW4(uVar8,5);
      iVar1 = uVar9 - 5;
      bVar5 = uVar9 == 5;
    }
    if (bVar5 || iVar1 < 0 != bVar4) {
      uVar7 = uVar11;
      uVar6 = uVar10;
    }
    func_0x000107c5fb58(param_1,uVar6,uVar7);
  }
  else {
    if (bVar2 >> 6 != 1) {
      if (bVar2 < 0x82) {
        if (bVar2 == 0x80) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
      }
      else if (bVar2 == 0x82) {
        uVar6 = 2;
      }
      else {
        uVar6 = 4;
      }
      __ss6HasherV8_combineyySuF(uVar6);
      return;
    }
    __ss6HasherV8_combineyySuF(5);
    bVar5 = (bVar2 & 0x3f) != 1;
    uVar6 = 0xd000000000000012;
    if (bVar5) {
      uVar6 = 0x6163696669746f6e;
    }
    uVar7 = 0x800000010f2161a0;
    if (bVar5) {
      uVar7 = 0xec0000006e6f6974;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
  return;
}



/* Entry: 1048a0c9c; end: 1048a0cdf;  */

void FUN_1048a0c9c(void)

{
  undefined1 uVar1;
  code *in_x3;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  (*in_x3)(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a0ce0; end: 1048a0ceb;  */

bool FUN_1048a0ce0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_2;
  bVar2 = *param_1;
  if (bVar2 >> 6 == 0) {
    if (bVar1 < 0x40) {
      return bVar2 == bVar1;
    }
  }
  else if (bVar2 >> 6 == 1) {
    if ((bVar1 & 0xc0) == 0x40) {
      return ((bVar1 ^ bVar2) & 0x3f) == 0;
    }
  }
  else if (bVar2 < 0x82) {
    if (bVar2 == 0x80) {
      if (bVar1 == 0x80) {
        return true;
      }
    }
    else if (bVar1 == 0x81) {
      return true;
    }
  }
  else if (bVar2 == 0x82) {
    if (bVar1 == 0x82) {
      return true;
    }
  }
  else if (bVar1 == 0x83) {
    return true;
  }
  return false;
}



/* Entry: 1048a0cec; end: 1048a0d4f;  */

ulong FUN_1048a0cec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (8 < uVar1) {
    uVar1 = 9;
  }
  return uVar1;
}



/* Entry: 1048a0d50; end: 1048a0dfb;  */

bool FUN_1048a0d50(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1 & 0xff;
  uVar2 = param_2 & 0xff;
  uVar3 = param_1 >> 6 & 3;
  if (uVar3 == 0) {
    if (uVar2 < 0x40) {
      return uVar1 == uVar2;
    }
  }
  else if (uVar3 == 1) {
    if ((param_2 & 0xc0) == 0x40) {
      return ((uVar2 ^ uVar1) & 0x3f) == 0;
    }
  }
  else if (uVar1 < 0x82) {
    if (uVar1 == 0x80) {
      if (uVar2 == 0x80) {
        return true;
      }
    }
    else if (uVar2 == 0x81) {
      return true;
    }
  }
  else if (uVar1 == 0x82) {
    if (uVar2 == 0x82) {
      return true;
    }
  }
  else if (uVar2 == 0x83) {
    return true;
  }
  return false;
}



/* Entry: 1048a0dfc; end: 1048a0e3b;  */

void FUN_1048a0dfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f0f0;
  _swift_getWitnessTable(&UNK_10dd3f0f0,&UNK_1107aeee8);
  puRam0000000113098e00 = puVar1;
  return;
}



/* Entry: 1048a0e3c; end: 1048a0e3f;  */

void FUN_1048a0e3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f190;
  _swift_getWitnessTable(&UNK_10dd3f190,&UNK_1107aef78);
  puRam0000000113098e08 = puVar1;
  return;
}



/* Entry: 1048a0e40; end: 1048a0e7f;  */

void FUN_1048a0e40(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f190;
  _swift_getWitnessTable(&UNK_10dd3f190,&UNK_1107aef78);
  puRam0000000113098e08 = puVar1;
  return;
}



/* Entry: 1048a0e80; end: 1048a0ea3;  */

void FUN_1048a0e80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a0ea4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a0ea4; end: 1048a0ee3;  */

void FUN_1048a0ea4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098e10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f24c;
  _swift_getWitnessTable(&UNK_10dd3f24c,&UNK_1107af008);
  puRam0000000113098e10 = puVar1;
  return;
}



/* Entry: 1048a0ee4; end: 1048a0ee7;  */

void FUN_1048a0ee4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098e18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f28c;
  _swift_getWitnessTable(&UNK_10dd3f28c,&UNK_1107af008);
  puRam0000000113098e18 = puVar1;
  return;
}



/* Entry: 1048a0ee8; end: 1048a0f27;  */

void FUN_1048a0ee8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098e18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f28c;
  _swift_getWitnessTable(&UNK_10dd3f28c,&UNK_1107af008);
  puRam0000000113098e18 = puVar1;
  return;
}



/* Entry: 1048a0f28; end: 1048a13c3;  */

int FUN_1048a0f28(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf7 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 8) {
      iVar2 = 4;
    }
    if (param_2 + 8 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048a0fa4;
        goto LAB_1048a0f88;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048a0f88:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_1048a0fa4:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048a13c4; end: 1048a146f;  */

void FUN_1048a13c4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a1470; end: 1048a14b7;  */

undefined8 FUN_1048a1470(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  if (*unaff_x20 != '\0') {
    return 0;
  }
  uVar1 = 0x112e04798;
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  _swift_initStaticObject();
  func_0x000100c8a830();
  return uVar1;
}



/* Entry: 1048a14b8; end: 1048a1533;  */

undefined1  [16] FUN_1048a14b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar1 = 0x800000010f215f60;
  uVar3 = 0xd000000000000018;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xef676e69646e6553;
    uVar3 = 0x70616e5374736f50;
  }
  uVar2 = 0xed00007364726143;
  uVar4 = 0x6c6576654c706f54;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 1048a1534; end: 1048a1573;  */

void FUN_1048a1534(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f328;
  _swift_getWitnessTable(&UNK_10dd3f328,&UNK_1107af118);
  puRam0000000113098f70 = puVar1;
  return;
}



/* Entry: 1048a1574; end: 1048a1597;  */

void FUN_1048a1574(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a1598();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a1598; end: 1048a15d7;  */

void FUN_1048a1598(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098f78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f350;
  _swift_getWitnessTable(&UNK_10dd3f350,&UNK_1107af118);
  puRam0000000113098f78 = puVar1;
  return;
}



/* Entry: 1048a15d8; end: 1048a173b;  */

int FUN_1048a15d8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048a1654;
        goto LAB_1048a1638;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048a1638:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1048a1654:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048a173c; end: 1048a17d7;  */

/* WARNING: Removing unreachable block (ram,0x0001048a1c54) */
/* WARNING: Removing unreachable block (ram,0x0001048a1c5c) */
/* WARNING: Removing unreachable block (ram,0x0001048a1d00) */
/* WARNING: Removing unreachable block (ram,0x0001048a1c64) */
/* WARNING: Removing unreachable block (ram,0x0001048a1d20) */
/* WARNING: Removing unreachable block (ram,0x0001048a1cf4) */

undefined1  [16] FUN_1048a173c(ulong param_1,undefined **param_2,uint param_3)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char *pcVar7;
  ushort uVar8;
  undefined1 *puVar9;
  undefined1 in_ZR;
  bool in_CY;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined **ppuVar22;
  undefined **unaff_x20;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_90 [56];
  long lStack_58;
  
  puVar9 = &stack0xffffffffffffffe0;
  ppuVar22 = (undefined **)0x1130986b0;
  puVar20 = (undefined8 *)(param_1 & 0xff);
  ppuVar10 = (undefined **)0x0;
  iVar21 = 0xdd3f3d0;
  uVar18 = (uint)param_2;
  uVar8 = uRam0000000000000001._2_2_;
  ppuVar11 = ppuVar10;
  ppuVar16 = param_2;
  switch(puVar20) {
  case (undefined8 *)0x0:
  case (undefined8 *)0xb:
  case (undefined8 *)0xc:
  case (undefined8 *)0x11:
  case (undefined8 *)0x12:
    goto code_r0x0001048a179c;
  case (undefined8 *)0x1:
  case (undefined8 *)0x6:
  case (undefined8 *)0xa:
  case (undefined8 *)0xd:
  case (undefined8 *)0x14:
  case (undefined8 *)0x3b:
  case (undefined8 *)0x4f:
  case (undefined8 *)0x63:
  case (undefined8 *)0x77:
  case (undefined8 *)0x7f:
  case (undefined8 *)0x87:
  case (undefined8 *)0x8f:
  case (undefined8 *)0xa3:
  case (undefined8 *)0xab:
  case (undefined8 *)0xae:
  case (undefined8 *)0xe3:
  case (undefined8 *)0xf7:
    break;
  default:
    ppuVar22 = (undefined **)0x113098000;
  case (undefined8 *)0x48:
  case (undefined8 *)0x56:
  case (undefined8 *)0x96:
  case (undefined8 *)0xb2:
  case (undefined8 *)0xf0:
  case (undefined8 *)0xfe:
    ppuVar22 = ppuVar22 + 0xd0;
    break;
  case (undefined8 *)0x8:
    ppuVar22 = (undefined **)0x113098588;
    break;
  case (undefined8 *)0xe:
  case (undefined8 *)0x20:
    ppuVar22 = (undefined **)0x113098000;
  case (undefined8 *)0x5c:
    ppuVar22 = ppuVar22 + 0xaa;
    break;
  case (undefined8 *)0xf:
  case (undefined8 *)0x19:
    ppuVar22 = (undefined **)0x113098638;
    break;
  case (undefined8 *)0x10:
    ppuVar22 = (undefined **)0x113098000;
  case (undefined8 *)0x38:
    ppuVar22 = ppuVar22 + 0xbd;
code_r0x0001048a17bc:
    break;
  case (undefined8 *)0x16:
    goto code_r0x0001048a1888;
  case (undefined8 *)0x17:
    goto code_r0x0001048a1818;
  case (undefined8 *)0x1a:
    goto code_r0x0001048a18e4;
  case (undefined8 *)0x1b:
  case (undefined8 *)0xc9:
    goto code_r0x0001048a1904;
  case (undefined8 *)0x1c:
    bVar1 = *(byte *)unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(&stack0xffffffffffffffe8);
    ppuVar22 = (undefined **)(ulong)bVar1;
  case (undefined8 *)0xc0:
    ppuVar10 = ppuVar22;
    __ss6HasherV8_combineyySuF(ppuVar10);
code_r0x0001048a1880:
    __ss6HasherV9_finalizeSiyF();
code_r0x0001048a1888:
    auVar26._8_8_ = param_2;
    auVar26._0_8_ = ppuVar10;
    return auVar26;
  case (undefined8 *)0x1d:
  case (undefined8 *)0xe0:
    if (!in_CY) goto LAB_1048a19cc;
    puVar20 = (undefined8 *)(ulong)(uVar18 + 0x14);
    iVar21 = 2;
    if (0xfffeff < uVar18 + 0x14) {
      iVar21 = 4;
    }
  case (undefined8 *)0x28:
    if ((uint)((ulong)puVar20 >> 8) < 0xff) {
      iVar21 = 1;
    }
    uVar18 = uRam0000000000000001;
    if (iVar21 != 4) {
      if (iVar21 == 2) {
        uVar18 = uRam0000000000000001 & 0xffff;
        if ((short)uRam0000000000000001 != 0) goto LAB_1048a19b0;
        goto LAB_1048a19cc;
      }
LAB_1048a19c4:
      uVar18 = uRam0000000000000001 & 0xff;
    }
    if (uVar18 != 0) {
LAB_1048a19b0:
      auVar32._4_4_ = 0;
      auVar32._0_4_ = ((uint)bRam0000000000000000 | uVar18 << 8) - 0x14;
      auVar32._8_8_ = param_2;
      return auVar32;
    }
LAB_1048a19cc:
    iVar21 = bRam0000000000000000 - 0x15;
    if (bRam0000000000000000 < 0x15) {
      iVar21 = -1;
    }
    auVar33._4_4_ = 0;
    auVar33._0_4_ = iVar21 + 1;
    auVar33._8_8_ = param_2;
    return auVar33;
  case (undefined8 *)0x1e:
    goto code_r0x0001048a180c;
  case (undefined8 *)0x1f:
    goto code_r0x0001048a1938;
  case (undefined8 *)0x21:
    puVar9 = auStack_90;
    ppuVar22 = (undefined **)(ulong)*(byte *)unaff_x20;
  case (undefined8 *)0x51:
  case (undefined8 *)0x81:
  case (undefined8 *)0x89:
  case (undefined8 *)0x91:
    puVar20 = (undefined8 *)(puVar9 + 8);
code_r0x0001048a1804:
    __ss6HasherV5_seedABSi_tcfC(puVar20,0);
code_r0x0001048a180c:
    ppuVar10 = ppuVar22;
code_r0x0001048a1814:
    __ss6HasherV8_combineyySuF(ppuVar10);
code_r0x0001048a1818:
    __ss6HasherV9_finalizeSiyF();
code_r0x0001048a1824:
    auVar24._8_8_ = param_2;
    auVar24._0_8_ = ppuVar10;
    return auVar24;
  case (undefined8 *)0x22:
    goto code_r0x0001048a17a0;
  case (undefined8 *)0x23:
  case (undefined8 *)0xa4:
    goto code_r0x0001048a1824;
  case (undefined8 *)0x24:
  case (undefined8 *)0x4c:
  case (undefined8 *)0x5f:
  case (undefined8 *)0x9f:
  case (undefined8 *)0xbb:
    goto code_r0x0001048a1788;
  case (undefined8 *)0x25:
    goto code_r0x0001048a17bc;
  case (undefined8 *)0x26:
    if (ppuRam0000000113098f80 != (undefined **)0x0) {
      auVar27._8_8_ = param_2;
      auVar27._0_8_ = ppuRam0000000113098f80;
      return auVar27;
    }
  case (undefined8 *)0x29:
  case (undefined8 *)0x9c:
  case (undefined8 *)0xcf:
    ppuVar10 = (undefined **)&UNK_10dd3f408;
    param_2 = (undefined **)&UNK_1107af208;
    _swift_getWitnessTable(&UNK_10dd3f408,&UNK_1107af208);
    ppuRam0000000113098f80 = ppuVar10;
code_r0x0001048a18e4:
    auVar28._8_8_ = param_2;
    auVar28._0_8_ = ppuVar10;
    return auVar28;
  case (undefined8 *)0x27:
  case (undefined8 *)0x64:
    goto code_r0x0001048a1924;
  case (undefined8 *)0x39:
  case (undefined8 *)0x4d:
    goto code_r0x0001048a1b6c;
  case (undefined8 *)0x3a:
  case (undefined8 *)0x4e:
  case (undefined8 *)0x62:
  case (undefined8 *)0x76:
  case (undefined8 *)0x7e:
  case (undefined8 *)0x86:
  case (undefined8 *)0x8e:
  case (undefined8 *)0xa2:
  case (undefined8 *)0xaa:
  case (undefined8 *)0xe2:
  case (undefined8 *)0xf6:
    goto code_r0x0001048a1a0c;
  case (undefined8 *)0x3c:
  case (undefined8 *)0x5e:
  case (undefined8 *)0x9e:
  case (undefined8 *)0xba:
    goto LAB_1048a19c4;
  case (undefined8 *)0x3d:
  case (undefined8 *)0x65:
  case (undefined8 *)0xa5:
  case (undefined8 *)0xe5:
  case (undefined8 *)0x18:
    __ss6HasherV8_combineyySuF();
code_r0x0001048a1850:
    auVar25._8_8_ = param_2;
    auVar25._0_8_ = ppuVar10;
    return auVar25;
  case (undefined8 *)0x3e:
  case (undefined8 *)0x66:
  case (undefined8 *)0xa6:
  case (undefined8 *)0xe6:
    goto code_r0x0001048a1a2c;
  case (undefined8 *)0x46:
  case (undefined8 *)0x6e:
  case (undefined8 *)0xee:
    goto code_r0x0001048a1780;
  case (undefined8 *)0x50:
  case (undefined8 *)0xb8:
    goto code_r0x0001048a1a54;
  case (undefined8 *)0x52:
  case (undefined8 *)0x82:
  case (undefined8 *)0x8a:
  case (undefined8 *)0x92:
  case (undefined8 *)0xb6:
  case (undefined8 *)0xfa:
    goto code_r0x0001048a1a4c;
  case (undefined8 *)0x53:
  case (undefined8 *)0x83:
  case (undefined8 *)0x8b:
  case (undefined8 *)0x93:
  case (undefined8 *)0xb7:
  case (undefined8 *)0xfb:
    goto code_r0x0001048a1b4c;
  case (undefined8 *)0x5d:
  case (undefined8 *)0x9d:
  case (undefined8 *)0xb9:
    goto LAB_1048a1b10;
  case (undefined8 *)0x60:
    goto code_r0x0001048a1b58;
  case (undefined8 *)0x61:
  case (undefined8 *)0x75:
  case (undefined8 *)0x7d:
  case (undefined8 *)0x85:
  case (undefined8 *)0x8d:
  case (undefined8 *)0xa1:
    goto code_r0x0001048a1b68;
  case (undefined8 *)0x70:
  case (undefined8 *)0xb0:
    goto code_r0x0001048a1784;
  case (undefined8 *)0x74:
  case (undefined8 *)0x7c:
  case (undefined8 *)0x84:
  case (undefined8 *)0x8c:
    goto code_r0x0001048a1b28;
  case (undefined8 *)0x78:
  case (undefined8 *)0x7a:
    return ZEXT816(0x208);
  case (undefined8 *)0x79:
    goto code_r0x0001048a1850;
  case (undefined8 *)0x80:
    puVar20 = (undefined8 *)(ulong)(0xeb < param_3);
code_r0x0001048a1a0c:
    if (uVar18 < 0xec) {
      uVar19 = (uint)puVar20;
      if (uVar19 < 2) {
        if (uVar19 != 0) {
          uRam0000000000000001 = (uint)uRam0000000000000001._1_3_ << 8;
          if (uVar18 == 0) goto code_r0x0001048a1a84;
          goto code_r0x0001048a1a60;
        }
      }
      else {
        in_ZR = uVar19 == 2;
code_r0x0001048a1a54:
        if ((bool)in_ZR) {
          uRam0000000000000001 = (uint)uVar8 << 0x10;
        }
        else {
          uRam0000000000000001 = 0;
        }
      }
      if (uVar18 != 0) {
code_r0x0001048a1a60:
        bRam0000000000000000 = (char)param_2 + '\x14';
        auVar3._8_8_ = 0;
        auVar3._0_8_ = param_2;
        return auVar3 << 0x40;
      }
    }
    else {
code_r0x0001048a1a2c:
      iVar21 = (uVar18 - 0xec >> 8) + 1;
      bRam0000000000000000 = (byte)(uVar18 - 0xec);
      uVar18 = (uint)puVar20;
      if (1 < uVar18) {
        if (uVar18 == 2) {
          uRam0000000000000001 = CONCAT22(uVar8,(short)iVar21);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = param_2;
          return auVar4 << 0x40;
        }
        uRam0000000000000001 = iVar21;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = param_2;
        return auVar6 << 0x40;
      }
      if (uVar18 != 0) {
        uRam0000000000000001 = CONCAT31(uRam0000000000000001._1_3_,(char)iVar21);
code_r0x0001048a1a4c:
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_2;
        return auVar2 << 0x40;
      }
    }
code_r0x0001048a1a84:
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_2;
    return auVar5 << 0x40;
  case (undefined8 *)0x88:
    func_0x0001000285a8(0,&UNK_10dd3e030);
    puVar20 = (undefined8 *)(ulong)((uint)unaff_x20 & 0xff);
  case (undefined8 *)0xf8:
    uVar18 = (uint)puVar20;
    if (uVar18 < 2) {
      if (uVar18 == 0) {
        param_2 = (undefined **)&stack0xffffffffffffffe8;
      }
      else {
        param_2 = (undefined **)&stack0x00000010;
      }
LAB_1048a1b34:
      _swift_initStackObject();
      ppuVar10[3] = (undefined *)0x2;
      ppuVar10[2] = (undefined *)0x1;
      ppuVar10[4] = (undefined *)0x1130986b0;
      unaff_x20 = ppuVar10;
code_r0x0001048a1b4c:
      func_0x000100c8a830();
      ppuVar22 = ppuVar10;
code_r0x0001048a1b54:
      ppuVar11 = unaff_x20;
code_r0x0001048a1b58:
      ppuVar10 = ppuVar22;
      _swift_setDeallocating(ppuVar11);
    }
    else {
      if (uVar18 == 2) {
LAB_1048a1b10:
        param_2 = (undefined **)0x113098fc8;
      }
      else {
        in_ZR = uVar18 == 3;
code_r0x0001048a1af8:
        if ((bool)in_ZR) {
          param_2 = (undefined **)&stack0xffffffffffffffb8;
          goto LAB_1048a1b34;
        }
        param_2 = (undefined **)0x113098f98;
      }
      _swift_initStaticObject();
code_r0x0001048a1b28:
      func_0x000100c8a830();
    }
code_r0x0001048a1b64:
code_r0x0001048a1b68:
code_r0x0001048a1b6c:
    auVar34._8_8_ = param_2;
    auVar34._0_8_ = ppuVar10;
    return auVar34;
  case (undefined8 *)0x90:
    goto code_r0x0001048a1b54;
  case (undefined8 *)0xa0:
    goto code_r0x0001048a1af8;
  case (undefined8 *)0xa8:
    goto LAB_1048a1b34;
  case (undefined8 *)0xa9:
    goto code_r0x0001048a1b64;
  case (undefined8 *)0xb4:
    ppuVar10 = (undefined **)puVar20[0x1f1];
  case (undefined8 *)0xc4:
    if (ppuVar10 != (undefined **)0x0) {
      auVar30._8_8_ = param_2;
      auVar30._0_8_ = ppuVar10;
      return auVar30;
    }
LAB_1048a1920:
code_r0x0001048a1924:
code_r0x0001048a1928:
    ppuVar10 = (undefined **)&UNK_10dd3f000;
code_r0x0001048a192c:
    ppuVar10 = ppuVar10 + 0x86;
code_r0x0001048a1930:
    param_2 = (undefined **)&UNK_1107af208;
code_r0x0001048a1938:
    _swift_getWitnessTable(ppuVar10,param_2);
code_r0x0001048a193c:
    puVar20 = (undefined8 *)0x113098000;
code_r0x0001048a1940:
    puVar20 = puVar20 + 0x1f1;
code_r0x0001048a1944:
    *puVar20 = ppuVar10;
code_r0x0001048a1948:
code_r0x0001048a194c:
    auVar31._8_8_ = param_2;
    auVar31._0_8_ = ppuVar10;
    return auVar31;
  case (undefined8 *)0xb5:
    goto code_r0x0001048a1804;
  case (undefined8 *)0xc1:
  case (undefined8 *)0xc2:
  case (undefined8 *)0xc7:
    goto code_r0x0001048a1944;
  case (undefined8 *)0xc3:
    goto code_r0x0001048a193c;
  case (undefined8 *)0xc5:
    goto code_r0x0001048a18fc;
  case (undefined8 *)0xc6:
    goto code_r0x0001048a1948;
  case (undefined8 *)0xc8:
    goto code_r0x0001048a1908;
  case (undefined8 *)0xca:
    goto code_r0x0001048a1880;
  case (undefined8 *)0xcb:
  case (undefined8 *)0xce:
    goto code_r0x0001048a1930;
  case (undefined8 *)0xcc:
    goto code_r0x0001048a192c;
  case (undefined8 *)0xcd:
    goto code_r0x0001048a194c;
  case (undefined8 *)0xd0:
    ppuVar22 = (undefined **)0x0;
code_r0x0001048a18fc:
    FUN_1048a1910();
    ppuVar22[1] = (undefined *)ppuVar10;
code_r0x0001048a1904:
code_r0x0001048a1908:
    auVar29._8_8_ = param_2;
    auVar29._0_8_ = ppuVar10;
    return auVar29;
  case (undefined8 *)0xd1:
    goto code_r0x0001048a1940;
  case (undefined8 *)0xd2:
    goto LAB_1048a1920;
  case (undefined8 *)0xe1:
  case (undefined8 *)0xf5:
    uVar18 = uVar18 & 0xff;
    if (uVar18 == 1 || ((ulong)param_2 & 0xff) == 0) {
      pcVar7 = "captureStatusSender";
      uVar12 = 0xd000000000000012;
      if (((ulong)param_2 & 0xff) != 0) {
        pcVar7 = "/TrendingChipView.swift:";
        uVar12 = 0xd000000000000014;
      }
      uVar17 = (ulong)pcVar7 | 0x8000000000000000;
    }
    else {
      uVar12 = 0x7372656b63697453;
      if (uVar18 == 2) {
        lVar13 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        _swift_allocObject();
        *(undefined8 *)(lVar13 + 0x18) = 4;
        *(undefined8 *)(lVar13 + 0x10) = 2;
        *(undefined8 *)(lVar13 + 0x20) = 0xd000000000000012;
        *(undefined8 *)(lVar13 + 0x28) = 0x800000010f2169e0;
        *(undefined8 *)(lVar13 + 0x30) = 0x65646f4d6961;
        *(undefined8 *)(lVar13 + 0x38) = 0xe600000000000000;
        uVar14 = 0x112d38270;
        lStack_58 = lVar13;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar15 = uVar14;
        func_0x00010011d734();
        uVar12 = 0x23;
        uVar17 = 0xe100000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar14,uVar15);
        _swift_release(lVar13);
      }
      else if (uVar18 == 3) {
        uVar17 = 0xe800000000000000;
      }
      else {
        uVar12 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        _swift_initStaticObject();
        uVar14 = 0x112d38270;
        lStack_58 = uVar12;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar15 = uVar14;
        func_0x00010011d734();
        uVar12 = 0x23;
        uVar17 = 0xe100000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar14,uVar15);
      }
    }
    auVar35._8_8_ = uVar17;
    auVar35._0_8_ = uVar12;
    return auVar35;
  case (undefined8 *)0xe4:
    goto code_r0x0001048a1794;
  case (undefined8 *)0xf4:
    goto code_r0x0001048a1928;
  case (undefined8 *)0xf9:
    goto code_r0x0001048a1814;
  }
  ppuVar10 = &PTR__OBJC_METACLASS____TtCs12_SwiftObject_112e04000;
code_r0x0001048a1780:
  ppuVar10 = ppuVar10 + 0xf3;
code_r0x0001048a1784:
  ppuVar16 = (undefined **)&UNK_10dd3e000;
code_r0x0001048a1788:
  param_2 = ppuVar22;
  func_0x0001000285a8(ppuVar10,ppuVar16 + 6);
code_r0x0001048a1794:
  _swift_initStaticObject();
  func_0x000100c8a830();
code_r0x0001048a179c:
code_r0x0001048a17a0:
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = ppuVar10;
  return auVar23;
}



/* Entry: 1048a17d8; end: 1048a17eb;  */

bool FUN_1048a17d8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1048a17ec; end: 1048a1897;  */

void FUN_1048a17ec(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a1898; end: 1048a18ab;  */

/* WARNING: Removing unreachable block (ram,0x0001048a1c54) */
/* WARNING: Removing unreachable block (ram,0x0001048a1c5c) */
/* WARNING: Removing unreachable block (ram,0x0001048a1d00) */
/* WARNING: Removing unreachable block (ram,0x0001048a1c64) */
/* WARNING: Removing unreachable block (ram,0x0001048a1d20) */
/* WARNING: Removing unreachable block (ram,0x0001048a1cf4) */

undefined1  [16] FUN_1048a1898(undefined8 param_1,undefined **param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char *pcVar6;
  ushort uVar7;
  undefined1 *puVar8;
  undefined1 in_ZR;
  bool in_CY;
  byte bVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  undefined **ppuVar21;
  undefined **unaff_x20;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_90 [56];
  long lStack_58;
  
  bVar9 = *(byte *)unaff_x20;
  puVar11 = (undefined8 *)(ulong)bVar9;
  puVar8 = &stack0xffffffffffffffe0;
  ppuVar21 = (undefined **)0x1130986b0;
  ppuVar10 = (undefined **)0x0;
  iVar20 = 0xdd3f3d0;
  uVar19 = (uint)param_2;
  uVar7 = uRam0000000000000001._2_2_;
  ppuVar12 = ppuVar10;
  ppuVar17 = param_2;
  switch(bVar9) {
  case 0:
  case 0xb:
  case 0xc:
  case 0x11:
  case 0x12:
    goto code_r0x0001048a179c;
  case 1:
  case 6:
  case 10:
  case 0xd:
  case 0x14:
  case 0x3b:
  case 0x4f:
  case 99:
  case 0x77:
  case 0x7f:
  case 0x87:
  case 0x8f:
  case 0xa3:
  case 0xab:
  case 0xae:
  case 0xe3:
  case 0xf7:
    break;
  default:
    ppuVar21 = (undefined **)0x113098000;
  case 0x48:
  case 0x56:
  case 0x96:
  case 0xb2:
  case 0xf0:
  case 0xfe:
    ppuVar21 = ppuVar21 + 0xd0;
    break;
  case 8:
    ppuVar21 = (undefined **)0x113098588;
    break;
  case 0xe:
  case 0x20:
    ppuVar21 = (undefined **)0x113098000;
  case 0x5c:
    ppuVar21 = ppuVar21 + 0xaa;
    break;
  case 0xf:
  case 0x19:
    ppuVar21 = (undefined **)0x113098638;
    break;
  case 0x10:
    ppuVar21 = (undefined **)0x113098000;
  case 0x38:
    ppuVar21 = ppuVar21 + 0xbd;
code_r0x0001048a17bc:
    break;
  case 0x16:
    goto code_r0x0001048a1888;
  case 0x17:
    goto code_r0x0001048a1818;
  case 0x1a:
    goto code_r0x0001048a18e4;
  case 0x1b:
  case 0xc9:
    goto code_r0x0001048a1904;
  case 0x1c:
    bVar9 = *(byte *)unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(&stack0xffffffffffffffe8);
    ppuVar21 = (undefined **)(ulong)bVar9;
  case 0xc0:
    ppuVar10 = ppuVar21;
    __ss6HasherV8_combineyySuF(ppuVar10);
code_r0x0001048a1880:
    __ss6HasherV9_finalizeSiyF();
code_r0x0001048a1888:
    auVar25._8_8_ = param_2;
    auVar25._0_8_ = ppuVar10;
    return auVar25;
  case 0x1d:
  case 0xe0:
    if (!in_CY) goto LAB_1048a19cc;
    puVar11 = (undefined8 *)(ulong)(uVar19 + 0x14);
    iVar20 = 2;
    if (0xfffeff < uVar19 + 0x14) {
      iVar20 = 4;
    }
  case 0x28:
    if ((uint)((ulong)puVar11 >> 8) < 0xff) {
      iVar20 = 1;
    }
    uVar19 = uRam0000000000000001;
    if (iVar20 != 4) {
      if (iVar20 == 2) {
        uVar19 = uRam0000000000000001 & 0xffff;
        if ((short)uRam0000000000000001 != 0) goto LAB_1048a19b0;
        goto LAB_1048a19cc;
      }
LAB_1048a19c4:
      uVar19 = uRam0000000000000001 & 0xff;
    }
    if (uVar19 != 0) {
LAB_1048a19b0:
      auVar31._4_4_ = 0;
      auVar31._0_4_ = ((uint)bRam0000000000000000 | uVar19 << 8) - 0x14;
      auVar31._8_8_ = param_2;
      return auVar31;
    }
LAB_1048a19cc:
    iVar20 = bRam0000000000000000 - 0x15;
    if (bRam0000000000000000 < 0x15) {
      iVar20 = -1;
    }
    auVar32._4_4_ = 0;
    auVar32._0_4_ = iVar20 + 1;
    auVar32._8_8_ = param_2;
    return auVar32;
  case 0x1e:
    goto code_r0x0001048a180c;
  case 0x1f:
    goto code_r0x0001048a1938;
  case 0x21:
    puVar8 = auStack_90;
    ppuVar21 = (undefined **)(ulong)*(byte *)unaff_x20;
  case 0x51:
  case 0x81:
  case 0x89:
  case 0x91:
    puVar11 = (undefined8 *)(puVar8 + 8);
code_r0x0001048a1804:
    __ss6HasherV5_seedABSi_tcfC(puVar11,0);
code_r0x0001048a180c:
    ppuVar10 = ppuVar21;
code_r0x0001048a1814:
    __ss6HasherV8_combineyySuF(ppuVar10);
code_r0x0001048a1818:
    __ss6HasherV9_finalizeSiyF();
code_r0x0001048a1824:
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = ppuVar10;
    return auVar23;
  case 0x22:
    goto code_r0x0001048a17a0;
  case 0x23:
  case 0xa4:
    goto code_r0x0001048a1824;
  case 0x24:
  case 0x4c:
  case 0x5f:
  case 0x9f:
  case 0xbb:
    goto code_r0x0001048a1788;
  case 0x25:
    goto code_r0x0001048a17bc;
  case 0x26:
    if (ppuRam0000000113098f80 != (undefined **)0x0) {
      auVar26._8_8_ = param_2;
      auVar26._0_8_ = ppuRam0000000113098f80;
      return auVar26;
    }
  case 0x29:
  case 0x9c:
  case 0xcf:
    ppuVar10 = (undefined **)&UNK_10dd3f408;
    param_2 = (undefined **)&UNK_1107af208;
    _swift_getWitnessTable(&UNK_10dd3f408,&UNK_1107af208);
    ppuRam0000000113098f80 = ppuVar10;
code_r0x0001048a18e4:
    auVar27._8_8_ = param_2;
    auVar27._0_8_ = ppuVar10;
    return auVar27;
  case 0x27:
  case 100:
    goto code_r0x0001048a1924;
  case 0x39:
  case 0x4d:
    goto code_r0x0001048a1b6c;
  case 0x3a:
  case 0x4e:
  case 0x62:
  case 0x76:
  case 0x7e:
  case 0x86:
  case 0x8e:
  case 0xa2:
  case 0xaa:
  case 0xe2:
  case 0xf6:
    goto code_r0x0001048a1a0c;
  case 0x3c:
  case 0x5e:
  case 0x9e:
  case 0xba:
    goto LAB_1048a19c4;
  case 0x3d:
  case 0x65:
  case 0xa5:
  case 0xe5:
  case 0x18:
    __ss6HasherV8_combineyySuF();
code_r0x0001048a1850:
    auVar24._8_8_ = param_2;
    auVar24._0_8_ = ppuVar10;
    return auVar24;
  case 0x3e:
  case 0x66:
  case 0xa6:
  case 0xe6:
    goto code_r0x0001048a1a2c;
  case 0x46:
  case 0x6e:
  case 0xee:
    goto code_r0x0001048a1780;
  case 0x50:
  case 0xb8:
    goto code_r0x0001048a1a54;
  case 0x52:
  case 0x82:
  case 0x8a:
  case 0x92:
  case 0xb6:
  case 0xfa:
    goto code_r0x0001048a1a4c;
  case 0x53:
  case 0x83:
  case 0x8b:
  case 0x93:
  case 0xb7:
  case 0xfb:
    goto code_r0x0001048a1b4c;
  case 0x5d:
  case 0x9d:
  case 0xb9:
    goto LAB_1048a1b10;
  case 0x60:
    goto code_r0x0001048a1b58;
  case 0x61:
  case 0x75:
  case 0x7d:
  case 0x85:
  case 0x8d:
  case 0xa1:
    goto code_r0x0001048a1b68;
  case 0x70:
  case 0xb0:
    goto code_r0x0001048a1784;
  case 0x74:
  case 0x7c:
  case 0x84:
  case 0x8c:
    goto code_r0x0001048a1b28;
  case 0x78:
  case 0x7a:
    return ZEXT816(0x208);
  case 0x79:
    goto code_r0x0001048a1850;
  case 0x80:
    bVar9 = 0xeb < param_3;
code_r0x0001048a1a0c:
    if (uVar19 < 0xec) {
      if (bVar9 < 2) {
        if (bVar9 != 0) {
          uRam0000000000000001 = (uint)uRam0000000000000001._1_3_ << 8;
          if (uVar19 == 0) goto code_r0x0001048a1a84;
          goto code_r0x0001048a1a60;
        }
      }
      else {
        in_ZR = bVar9 == 2;
code_r0x0001048a1a54:
        if ((bool)in_ZR) {
          uRam0000000000000001 = (uint)uVar7 << 0x10;
        }
        else {
          uRam0000000000000001 = 0;
        }
      }
      if (uVar19 != 0) {
code_r0x0001048a1a60:
        bRam0000000000000000 = (char)param_2 + '\x14';
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_2;
        return auVar2 << 0x40;
      }
    }
    else {
code_r0x0001048a1a2c:
      iVar20 = (uVar19 - 0xec >> 8) + 1;
      bRam0000000000000000 = (byte)(uVar19 - 0xec);
      if (1 < bVar9) {
        if (bVar9 == 2) {
          uRam0000000000000001 = CONCAT22(uVar7,(short)iVar20);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = param_2;
          return auVar3 << 0x40;
        }
        uRam0000000000000001 = iVar20;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = param_2;
        return auVar5 << 0x40;
      }
      if (bVar9 != 0) {
        uRam0000000000000001 = CONCAT31(uRam0000000000000001._1_3_,(char)iVar20);
code_r0x0001048a1a4c:
        auVar1._8_8_ = 0;
        auVar1._0_8_ = param_2;
        return auVar1 << 0x40;
      }
    }
code_r0x0001048a1a84:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_2;
    return auVar4 << 0x40;
  case 0x88:
    func_0x0001000285a8(0,&UNK_10dd3e030);
    puVar11 = (undefined8 *)(ulong)((uint)unaff_x20 & 0xff);
  case 0xf8:
    uVar19 = (uint)puVar11;
    if (uVar19 < 2) {
      if (uVar19 == 0) {
        param_2 = (undefined **)&stack0xffffffffffffffe8;
      }
      else {
        param_2 = (undefined **)&stack0x00000010;
      }
LAB_1048a1b34:
      _swift_initStackObject();
      ppuVar10[3] = (undefined *)0x2;
      ppuVar10[2] = (undefined *)0x1;
      ppuVar10[4] = (undefined *)0x1130986b0;
      unaff_x20 = ppuVar10;
code_r0x0001048a1b4c:
      func_0x000100c8a830();
      ppuVar21 = ppuVar10;
code_r0x0001048a1b54:
      ppuVar12 = unaff_x20;
code_r0x0001048a1b58:
      ppuVar10 = ppuVar21;
      _swift_setDeallocating(ppuVar12);
    }
    else {
      if (uVar19 == 2) {
LAB_1048a1b10:
        param_2 = (undefined **)0x113098fc8;
      }
      else {
        in_ZR = uVar19 == 3;
code_r0x0001048a1af8:
        if ((bool)in_ZR) {
          param_2 = (undefined **)&stack0xffffffffffffffb8;
          goto LAB_1048a1b34;
        }
        param_2 = (undefined **)0x113098f98;
      }
      _swift_initStaticObject();
code_r0x0001048a1b28:
      func_0x000100c8a830();
    }
code_r0x0001048a1b64:
code_r0x0001048a1b68:
code_r0x0001048a1b6c:
    auVar33._8_8_ = param_2;
    auVar33._0_8_ = ppuVar10;
    return auVar33;
  case 0x90:
    goto code_r0x0001048a1b54;
  case 0xa0:
    goto code_r0x0001048a1af8;
  case 0xa8:
    goto LAB_1048a1b34;
  case 0xa9:
    goto code_r0x0001048a1b64;
  case 0xb4:
    ppuVar10 = (undefined **)puVar11[0x1f1];
  case 0xc4:
    if (ppuVar10 != (undefined **)0x0) {
      auVar29._8_8_ = param_2;
      auVar29._0_8_ = ppuVar10;
      return auVar29;
    }
LAB_1048a1920:
code_r0x0001048a1924:
code_r0x0001048a1928:
    ppuVar10 = (undefined **)&UNK_10dd3f000;
code_r0x0001048a192c:
    ppuVar10 = ppuVar10 + 0x86;
code_r0x0001048a1930:
    param_2 = (undefined **)&UNK_1107af208;
code_r0x0001048a1938:
    _swift_getWitnessTable(ppuVar10,param_2);
code_r0x0001048a193c:
    puVar11 = (undefined8 *)0x113098000;
code_r0x0001048a1940:
    puVar11 = puVar11 + 0x1f1;
code_r0x0001048a1944:
    *puVar11 = ppuVar10;
code_r0x0001048a1948:
code_r0x0001048a194c:
    auVar30._8_8_ = param_2;
    auVar30._0_8_ = ppuVar10;
    return auVar30;
  case 0xb5:
    goto code_r0x0001048a1804;
  case 0xc1:
  case 0xc2:
  case 199:
    goto code_r0x0001048a1944;
  case 0xc3:
    goto code_r0x0001048a193c;
  case 0xc5:
    goto code_r0x0001048a18fc;
  case 0xc6:
    goto code_r0x0001048a1948;
  case 200:
    goto code_r0x0001048a1908;
  case 0xca:
    goto code_r0x0001048a1880;
  case 0xcb:
  case 0xce:
    goto code_r0x0001048a1930;
  case 0xcc:
    goto code_r0x0001048a192c;
  case 0xcd:
    goto code_r0x0001048a194c;
  case 0xd0:
    ppuVar21 = (undefined **)0x0;
code_r0x0001048a18fc:
    FUN_1048a1910();
    ppuVar21[1] = (undefined *)ppuVar10;
code_r0x0001048a1904:
code_r0x0001048a1908:
    auVar28._8_8_ = param_2;
    auVar28._0_8_ = ppuVar10;
    return auVar28;
  case 0xd1:
    goto code_r0x0001048a1940;
  case 0xd2:
    goto LAB_1048a1920;
  case 0xe1:
  case 0xf5:
    uVar19 = uVar19 & 0xff;
    if (uVar19 == 1 || ((ulong)param_2 & 0xff) == 0) {
      pcVar6 = "captureStatusSender";
      uVar13 = 0xd000000000000012;
      if (((ulong)param_2 & 0xff) != 0) {
        pcVar6 = "/TrendingChipView.swift:";
        uVar13 = 0xd000000000000014;
      }
      uVar18 = (ulong)pcVar6 | 0x8000000000000000;
    }
    else {
      uVar13 = 0x7372656b63697453;
      if (uVar19 == 2) {
        lVar14 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        _swift_allocObject();
        *(undefined8 *)(lVar14 + 0x18) = 4;
        *(undefined8 *)(lVar14 + 0x10) = 2;
        *(undefined8 *)(lVar14 + 0x20) = 0xd000000000000012;
        *(undefined8 *)(lVar14 + 0x28) = 0x800000010f2169e0;
        *(undefined8 *)(lVar14 + 0x30) = 0x65646f4d6961;
        *(undefined8 *)(lVar14 + 0x38) = 0xe600000000000000;
        uVar15 = 0x112d38270;
        lStack_58 = lVar14;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar16 = uVar15;
        func_0x00010011d734();
        uVar13 = 0x23;
        uVar18 = 0xe100000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar15,uVar16);
        _swift_release(lVar14);
      }
      else if (uVar19 == 3) {
        uVar18 = 0xe800000000000000;
      }
      else {
        uVar13 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        _swift_initStaticObject();
        uVar15 = 0x112d38270;
        lStack_58 = uVar13;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar16 = uVar15;
        func_0x00010011d734();
        uVar13 = 0x23;
        uVar18 = 0xe100000000000000;
        __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar15,uVar16);
      }
    }
    auVar34._8_8_ = uVar18;
    auVar34._0_8_ = uVar13;
    return auVar34;
  case 0xe4:
    goto code_r0x0001048a1794;
  case 0xf4:
    goto code_r0x0001048a1928;
  case 0xf9:
    goto code_r0x0001048a1814;
  }
  ppuVar10 = &PTR__OBJC_METACLASS____TtCs12_SwiftObject_112e04000;
code_r0x0001048a1780:
  ppuVar10 = ppuVar10 + 0xf3;
code_r0x0001048a1784:
  ppuVar17 = (undefined **)&UNK_10dd3e000;
code_r0x0001048a1788:
  param_2 = ppuVar21;
  func_0x0001000285a8(ppuVar10,ppuVar17 + 6);
code_r0x0001048a1794:
  _swift_initStaticObject();
  func_0x000100c8a830();
code_r0x0001048a179c:
code_r0x0001048a17a0:
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = ppuVar10;
  return auVar22;
}



/* Entry: 1048a18ac; end: 1048a18eb;  */

void FUN_1048a18ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098f80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f408;
  _swift_getWitnessTable(&UNK_10dd3f408,&UNK_1107af208);
  puRam0000000113098f80 = puVar1;
  return;
}



/* Entry: 1048a18ec; end: 1048a190f;  */

void FUN_1048a18ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a1910();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a1910; end: 1048a194f;  */

void FUN_1048a1910(void)

{
  undefined *puVar1;
  
  if (puRam0000000113098f88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f430;
  _swift_getWitnessTable(&UNK_10dd3f430,&UNK_1107af208);
  puRam0000000113098f88 = puVar1;
  return;
}



/* Entry: 1048a1950; end: 1048a1ab3;  */

int FUN_1048a1950(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xeb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x14) {
      iVar2 = 4;
    }
    if (param_2 + 0x14 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048a19cc;
        goto LAB_1048a19b0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048a19b0:
      return ((uint)*param_1 | uVar1 << 8) - 0x14;
    }
  }
LAB_1048a19cc:
  iVar2 = *param_1 - 0x15;
  if (*param_1 < 0x15) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048a1ab4; end: 1048a1b6f;  */

void FUN_1048a1ab4(undefined8 param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = 0x112e04798;
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  if ((param_2 < 2) || ((param_2 != 2 && (param_2 == 3)))) {
    _swift_initStackObject();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    func_0x000100c8a830();
    _swift_setDeallocating(lVar1);
  }
  else {
    _swift_initStaticObject();
    func_0x000100c8a830();
  }
  return;
}



/* Entry: 1048a1b70; end: 1048a1da3;  */

void FUN_1048a1b70(byte param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (1 < param_2) {
    if (param_2 == 2) {
      lVar1 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      _swift_allocObject();
      *(undefined8 *)(lVar1 + 0x18) = 4;
      *(undefined8 *)(lVar1 + 0x10) = 2;
      *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000012;
      *(undefined8 *)(lVar1 + 0x28) = 0x800000010f2169e0;
      if (param_1 < 2) {
        if (param_1 == 0) {
          uVar2 = 0xe600000000000000;
          uVar3 = 0x65646f4d6961;
        }
        else {
          uVar2 = 0xe800000000000000;
          uVar3 = 0x736e6f6974706163;
        }
      }
      else if (param_1 == 2) {
        uVar3 = 0x7372656b63697473;
        uVar2 = 0xe800000000000000;
      }
      else if (param_1 == 3) {
        uVar2 = 0xe900000000000072;
        uVar3 = 0x65766f6563696f76;
      }
      else {
        uVar2 = 0xeb00000000726573;
        uVar3 = 0x617245636967616d;
      }
      *(undefined8 *)(lVar1 + 0x30) = uVar3;
      *(undefined8 *)(lVar1 + 0x38) = uVar2;
      uVar3 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar2 = uVar3;
      func_0x00010011d734();
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar3,uVar2);
      _swift_release(lVar1);
    }
    else if (param_2 != 3) {
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      _swift_initStaticObject();
      uVar3 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar2 = uVar3;
      func_0x00010011d734();
      __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar3,uVar2);
    }
  }
  return;
}



/* Entry: 1048a1da4; end: 1048a1dab;  */

undefined8 FUN_1048a1da4(void)

{
  return 1;
}



/* Entry: 1048a1dac; end: 1048a1e17;  */

void FUN_1048a1dac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(uVar1);
  *(bool *)param_1 = lVar2 != 0;
  return;
}



/* Entry: 1048a1e18; end: 1048a1e37;  */

void FUN_1048a1e18(undefined8 *param_1)

{
  *param_1 = 0xd000000000000013;
  param_1[1] = 0x800000010f216a00;
  return;
}



/* Entry: 1048a1e38; end: 1048a1e8b;  */

void FUN_1048a1e38(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000013,0x800000010f216a00);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a1e8c; end: 1048a1ea7;  */

void FUN_1048a1e8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0xd000000000000013,0x800000010f216a00);
  return;
}



/* Entry: 1048a1ea8; end: 1048a1ef7;  */

void FUN_1048a1ea8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000013,0x800000010f216a00);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a1ef8; end: 1048a1f0b;  */

bool FUN_1048a1ef8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1048a1f0c; end: 1048a1f37;  */

void FUN_1048a1f0c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1048a2524(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1048a1f38; end: 1048a1fdf;  */

void FUN_1048a1f38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar2 = 0xe900000000000072;
  uVar4 = 0x65766f6563696f76;
  if (bVar5 != 3) {
    uVar2 = 0xeb00000000726573;
    uVar4 = 0x617245636967616d;
  }
  uVar1 = 0x7372656b63697473;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe800000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x65646f4d6961;
  if (bVar5 != 0) {
    uVar2 = 0x736e6f6974706163;
  }
  uVar3 = 0xe600000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe800000000000000;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  param_1[1] = uVar4;
  return;
}



/* Entry: 1048a1fe0; end: 1048a23c3;  */

void FUN_1048a1fe0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar2 = 0xe900000000000072;
  uVar4 = 0x65766f6563696f76;
  if (bVar5 != 3) {
    uVar2 = 0xeb00000000726573;
    uVar4 = 0x617245636967616d;
  }
  uVar1 = 0x7372656b63697473;
  if (bVar5 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe800000000000000;
  if (bVar5 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x65646f4d6961;
  if (bVar5 != 0) {
    uVar2 = 0x736e6f6974706163;
  }
  uVar3 = 0xe600000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe800000000000000;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a23c4; end: 1048a23db;  */

void FUN_1048a23c4(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar3 = *unaff_x20;
  bVar1 = *(byte *)(unaff_x20 + 1);
  lVar2 = 0x112e04798;
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  if ((bVar1 < 2) || ((bVar1 != 2 && (bVar1 == 3)))) {
    _swift_initStackObject();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    func_0x000100c8a830();
    _swift_setDeallocating(lVar2);
  }
  else {
    _swift_initStaticObject();
    func_0x000100c8a830();
  }
  return;
}



/* Entry: 1048a23dc; end: 1048a2427;  */

void FUN_1048a23dc(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x0001048a2270(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a2428; end: 1048a2433;  */

void FUN_1048a2428(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  
  uVar8 = *unaff_x20;
  bVar5 = (byte)unaff_x20[1];
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 2;
    }
  }
  else {
    if (bVar5 == 2) {
      __ss6HasherV8_combineyySuF(3);
      uVar1 = (uint)uVar8 & 0xff;
      uVar7 = 0xe900000000000072;
      uVar4 = 0x65766f6563696f76;
      if (uVar1 != 3) {
        uVar7 = 0xeb00000000726573;
        uVar4 = 0x617245636967616d;
      }
      uVar3 = 0x7372656b63697473;
      if (uVar1 != 2) {
        uVar3 = uVar4;
      }
      uVar4 = 0xe800000000000000;
      if (uVar1 != 2) {
        uVar4 = uVar7;
      }
      bVar6 = (uVar8 & 0xff) != 0;
      uVar7 = 0x65646f4d6961;
      if (bVar6) {
        uVar7 = 0x736e6f6974706163;
      }
      uVar2 = 0xe600000000000000;
      if (bVar6) {
        uVar2 = 0xe800000000000000;
      }
      if (uVar1 == 1 || (uVar8 & 0xff) == 0) {
        uVar3 = uVar7;
      }
      if (uVar1 == 1 || (uVar8 & 0xff) == 0) {
        uVar4 = uVar2;
      }
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
      return;
    }
    if (bVar5 != 3) {
      __ss6HasherV8_combineyySuF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
                (param_1,0xd000000000000013,0x800000010f216a00);
      return;
    }
    uVar7 = 4;
  }
  __ss6HasherV8_combineyySuF(uVar7);
  __ss6HasherV8_combineyySuF(uVar8);
  return;
}



/* Entry: 1048a2434; end: 1048a247b;  */

void FUN_1048a2434(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x0001048a2270(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a247c; end: 1048a2523;  */

bool FUN_1048a247c(undefined8 *param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  cVar1 = (char)param_2[1];
  bVar2 = *(byte *)(param_1 + 1);
  uVar3 = (uint)*param_2;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (cVar1 == '\0') {
LAB_1048a2510:
        return (uint)*param_1 == uVar3;
      }
    }
    else if (cVar1 == '\x01') goto LAB_1048a2510;
  }
  else if (bVar2 == 2) {
    if (cVar1 == '\x02') {
      return ((uVar3 ^ (uint)*param_1) & 0xff) == 0;
    }
  }
  else if (bVar2 == 3) {
    if (cVar1 == '\x03') goto LAB_1048a2510;
  }
  else if ((cVar1 == '\x04') && (*param_2 == 0)) {
    return true;
  }
  return false;
}



/* Entry: 1048a2524; end: 1048a2587;  */

ulong FUN_1048a2524(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 1048a2588; end: 1048a258b;  */

void FUN_1048a2588(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f4b0;
  _swift_getWitnessTable(&UNK_10dd3f4b0,&UNK_1107af2f8);
  puRam0000000113099040 = puVar1;
  return;
}



/* Entry: 1048a258c; end: 1048a25cb;  */

void FUN_1048a258c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f4b0;
  _swift_getWitnessTable(&UNK_10dd3f4b0,&UNK_1107af2f8);
  puRam0000000113099040 = puVar1;
  return;
}



/* Entry: 1048a25cc; end: 1048a25cf;  */

void FUN_1048a25cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f550;
  _swift_getWitnessTable(&UNK_10dd3f550,&UNK_1107af388);
  puRam0000000113099048 = puVar1;
  return;
}



/* Entry: 1048a25d0; end: 1048a260f;  */

void FUN_1048a25d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f550;
  _swift_getWitnessTable(&UNK_10dd3f550,&UNK_1107af388);
  puRam0000000113099048 = puVar1;
  return;
}



/* Entry: 1048a2610; end: 1048a2633;  */

void FUN_1048a2610(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a2634();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a2634; end: 1048a2673;  */

void FUN_1048a2634(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099050 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f60c;
  _swift_getWitnessTable(&UNK_10dd3f60c,&UNK_1107af418);
  puRam0000000113099050 = puVar1;
  return;
}



/* Entry: 1048a2674; end: 1048a2677;  */

void FUN_1048a2674(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f64c;
  _swift_getWitnessTable(&UNK_10dd3f64c,&UNK_1107af418);
  puRam0000000113099058 = puVar1;
  return;
}



/* Entry: 1048a2678; end: 1048a26b7;  */

void FUN_1048a2678(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f64c;
  _swift_getWitnessTable(&UNK_10dd3f64c,&UNK_1107af418);
  puRam0000000113099058 = puVar1;
  return;
}



/* Entry: 1048a26b8; end: 1048a29eb;  */

uint FUN_1048a26b8(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1048a29ec; end: 1048a2ae3;  */

void FUN_1048a29ec(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a2ae4; end: 1048a2b1f;  */

undefined1  [16] FUN_1048a2ae4(void)

{
  char *pcVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = 0xd00000000000001b;
  pcVar1 = "StoryEverywhereDFNotification";
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd00000000000001c;
    pcVar1 = "ImpalaNotificationProcessor";
  }
  auVar3._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1048a2b20; end: 1048a2b5f;  */

void FUN_1048a2b20(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f708;
  _swift_getWitnessTable(&UNK_10dd3f708,&UNK_1107af528);
  puRam0000000113099140 = puVar1;
  return;
}



/* Entry: 1048a2b60; end: 1048a2b83;  */

void FUN_1048a2b60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a2b84();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a2b84; end: 1048a2bc3;  */

void FUN_1048a2b84(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f730;
  _swift_getWitnessTable(&UNK_10dd3f730,&UNK_1107af528);
  puRam0000000113099148 = puVar1;
  return;
}



/* Entry: 1048a2bc4; end: 1048a2d3b;  */

int FUN_1048a2bc4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048a2c40;
        goto LAB_1048a2c24;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048a2c24:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1048a2c40:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048a2d3c; end: 1048a2de7;  */

void FUN_1048a2d3c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a2de8; end: 1048a2deb;  */

void FUN_1048a2de8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f7b0;
  _swift_getWitnessTable(&UNK_10dd3f7b0,&UNK_1107af618);
  puRam0000000113099150 = puVar1;
  return;
}



/* Entry: 1048a2dec; end: 1048a2e2b;  */

void FUN_1048a2dec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f7b0;
  _swift_getWitnessTable(&UNK_10dd3f7b0,&UNK_1107af618);
  puRam0000000113099150 = puVar1;
  return;
}



/* Entry: 1048a2e2c; end: 1048a2e9f;  */

undefined8 FUN_1048a2e2c(void)

{
  return 0;
}



/* Entry: 1048a2ea0; end: 1048a2ec3;  */

void FUN_1048a2ea0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a2ec4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a2ec4; end: 1048a2f03;  */

void FUN_1048a2ec4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f7d8;
  _swift_getWitnessTable(&UNK_10dd3f7d8,&UNK_1107af618);
  puRam0000000113099158 = puVar1;
  return;
}



/* Entry: 1048a2f04; end: 1048a306f;  */

int FUN_1048a2f04(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048a2f80;
        goto LAB_1048a2f64;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048a2f64:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1048a2f80:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048a3070; end: 1048a310f;  */

void FUN_1048a3070(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a3110; end: 1048a313f;  */

undefined * FUN_1048a3110(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 auStack_a8 [72];
  
  lVar3 = 0x112e04798;
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  _swift_initStaticObject();
  puVar10 = *(undefined **)(lVar3 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d7b088,&UNK_10d9d8120);
    puVar2 = puVar10;
    func_0x000107c602e8();
    puVar12 = (undefined *)0x0;
    do {
      uVar11 = *(ulong *)(lVar3 + 0x20 + (long)puVar12 * 8);
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
      uVar4 = uVar11;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar9 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(puVar2 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar4 & 0x3f);
      lVar5 = *(long *)(puVar2 + 0x30);
      if ((uVar8 & uVar7) != 0) {
        do {
          if ((int)*(undefined8 *)(lVar5 + uVar4 * 8) == (int)uVar11) goto code_r0x000100c8a8b4;
          uVar4 = uVar4 + 1 & ~uVar9;
          uVar6 = uVar4 >> 6;
          uVar7 = *(ulong *)(puVar2 + uVar6 * 8 + 0x38);
          uVar8 = 1L << (uVar4 & 0x3f);
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puVar2 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(ulong *)(lVar5 + uVar4 * 8) = uVar11;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c8a968);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
code_r0x000100c8a8b4:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  return puVar2;
}



/* Entry: 1048a3140; end: 1048a315f;  */

undefined1  [16] FUN_1048a3140(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f215500;
  auVar1._0_8_ = 0xd00000000000001d;
  return auVar1;
}



/* Entry: 1048a3160; end: 1048a319f;  */

void FUN_1048a3160(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f868;
  _swift_getWitnessTable(&UNK_10dd3f868,&UNK_1107af708);
  puRam0000000113099160 = puVar1;
  return;
}



/* Entry: 1048a31a0; end: 1048a31c3;  */

void FUN_1048a31a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a31c4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a31c4; end: 1048a3203;  */

void FUN_1048a31c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f890;
  _swift_getWitnessTable(&UNK_10dd3f890,&UNK_1107af708);
  puRam0000000113099168 = puVar1;
  return;
}



/* Entry: 1048a3204; end: 1048a3303;  */

uint FUN_1048a3204(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1048a3304; end: 1048a332f;  */

void FUN_1048a3304(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1048a3984(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1048a3330; end: 1048a33c7;  */

void FUN_1048a3330(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar1 = 0x6863746566657270;
  if (bVar4 != 2) {
    uVar1 = 0x656e656870617267;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 != 2) {
    uVar3 = 0xee00726567676f4c;
  }
  uVar2 = 0xe900000000000061;
  uVar5 = 0x7461446775626564;
  if (bVar4 != 0) {
    uVar2 = 0xec00000072656c64;
    uVar5 = 0x6e6148726f727265;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  param_1[1] = uVar3;
  return;
}



/* Entry: 1048a33c8; end: 1048a3627;  */

void FUN_1048a33c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x6863746566657270;
  if (bVar4 != 2) {
    uVar1 = 0x656e656870617267;
  }
  uVar3 = 0xe800000000000000;
  if (bVar4 != 2) {
    uVar3 = 0xee00726567676f4c;
  }
  uVar2 = 0xe900000000000061;
  uVar5 = 0x7461446775626564;
  if (bVar4 != 0) {
    uVar2 = 0xec00000072656c64;
    uVar5 = 0x6e6148726f727265;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar1 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a3628; end: 1048a363f;  */

void FUN_1048a3628(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  if ((char)unaff_x20[1] == '\x01') {
    lVar1 = 0x112e04798;
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = lVar2;
    func_0x000100c8a830();
    func_0x000107c61588(lVar1);
  }
  else if ((char)unaff_x20[1] == '\x02') {
    if (lVar2 < 10) {
      if (lVar2 - 5U < 3) {
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
      else if (lVar2 == 0) {
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
      else {
        if (lVar2 != 8) {
          return;
        }
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
    }
    else if (lVar2 < 0xc) {
      if (lVar2 == 10) {
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
      else {
        if (lVar2 != 0xb) {
          return;
        }
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
    }
    else if (lVar2 == 0xc) {
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    }
    else if (lVar2 == 0xd) {
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    }
    else {
      if (lVar2 != 0xe) {
        return;
      }
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    }
    func_0x000107c61538();
    func_0x000100c8a830();
  }
  return;
}



/* Entry: 1048a3640; end: 1048a368b;  */

void FUN_1048a3640(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x0001003e52a4(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a368c; end: 1048a3697;  */

void FUN_1048a368c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  
  uVar6 = *unaff_x20;
  if ((char)unaff_x20[1] == '\0') {
    func_0x000107c60690(1);
    uVar1 = (uint)uVar6 & 0xff;
    uVar3 = 0x6863746566657270;
    if (uVar1 != 2) {
      uVar3 = 0x656e656870617267;
    }
    uVar4 = 0xe800000000000000;
    if (uVar1 != 2) {
      uVar4 = 0xee00726567676f4c;
    }
    uVar2 = 0xe900000000000061;
    uVar5 = 0x7461446775626564;
    if ((uVar6 & 0xff) != 0) {
      uVar2 = 0xec00000072656c64;
      uVar5 = 0x6e6148726f727265;
    }
    if (uVar1 == 1 || (uVar6 & 0xff) == 0) {
      uVar3 = uVar5;
    }
    if (uVar1 == 1 || (uVar6 & 0xff) == 0) {
      uVar4 = uVar2;
    }
    func_0x000107c5fb58(param_1,uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    return;
  }
  if ((char)unaff_x20[1] != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001003e53ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1003e53b0 + (ulong)(byte)(&UNK_10dd3f924)[uVar6] * 4))();
    return;
  }
  func_0x000107c60690(3);
  func_0x000107c60690(uVar6);
  return;
}



/* Entry: 1048a3698; end: 1048a36df;  */

void FUN_1048a3698(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x0001003e52a4(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a36e0; end: 1048a3983;  */

ulong FUN_1048a36e0(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if ((char)param_1[1] == '\0') {
    if (*(char *)(param_2 + 1) == '\0') {
      return (ulong)((((uint)*param_2 ^ (uint)uVar1) & 0xff) == 0);
    }
  }
  else {
    if ((char)param_1[1] != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001048a3744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd3f938)[uVar1] * 4 + 0x1048a3748))();
      return uVar1;
    }
    if (*(char *)(param_2 + 1) == '\x01') {
      return (ulong)((uint)uVar1 == (uint)*param_2);
    }
  }
  return 0;
}



/* Entry: 1048a3984; end: 1048a39e7;  */

ulong FUN_1048a3984(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 1048a39e8; end: 1048a39eb;  */

void FUN_1048a39e8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130993a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f958;
  _swift_getWitnessTable(&UNK_10dd3f958,&UNK_1107af7f8);
  puRam00000001130993a0 = puVar1;
  return;
}



/* Entry: 1048a39ec; end: 1048a3a2b;  */

void FUN_1048a39ec(void)

{
  undefined *puVar1;
  
  if (puRam00000001130993a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3f958;
  _swift_getWitnessTable(&UNK_10dd3f958,&UNK_1107af7f8);
  puRam00000001130993a0 = puVar1;
  return;
}



/* Entry: 1048a3a2c; end: 1048a3a4f;  */

void FUN_1048a3a2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a3a50();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a3a50; end: 1048a3a8f;  */

void FUN_1048a3a50(void)

{
  undefined *puVar1;
  
  if (puRam00000001130993a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fa14;
  _swift_getWitnessTable(&UNK_10dd3fa14,&UNK_1107af888);
  puRam00000001130993a8 = puVar1;
  return;
}



/* Entry: 1048a3a90; end: 1048a3a93;  */

void FUN_1048a3a90(void)

{
  undefined *puVar1;
  
  if (puRam00000001130993b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fa54;
  _swift_getWitnessTable(&UNK_10dd3fa54,&UNK_1107af888);
  puRam00000001130993b0 = puVar1;
  return;
}



/* Entry: 1048a3a94; end: 1048a3ad3;  */

void FUN_1048a3a94(void)

{
  undefined *puVar1;
  
  if (puRam00000001130993b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fa54;
  _swift_getWitnessTable(&UNK_10dd3fa54,&UNK_1107af888);
  puRam00000001130993b0 = puVar1;
  return;
}



/* Entry: 1048a3ad4; end: 1048a3d0f;  */

int FUN_1048a3ad4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048a3b50;
        goto LAB_1048a3b34;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048a3b34:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1048a3b50:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048a3d10; end: 1048a3daf;  */

void FUN_1048a3d10(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a3db0; end: 1048a3db3;  */

void FUN_1048a3db0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fac0;
  _swift_getWitnessTable(&UNK_10dd3fac0,&UNK_1107af998);
  puRam0000000113099440 = puVar1;
  return;
}



/* Entry: 1048a3db4; end: 1048a3df3;  */

void FUN_1048a3db4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fac0;
  _swift_getWitnessTable(&UNK_10dd3fac0,&UNK_1107af998);
  puRam0000000113099440 = puVar1;
  return;
}



/* Entry: 1048a3df4; end: 1048a3e1f;  */

undefined8 FUN_1048a3df4(void)

{
  return 0;
}



/* Entry: 1048a3e20; end: 1048a3e43;  */

void FUN_1048a3e20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a3e44();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a3e44; end: 1048a3e83;  */

void FUN_1048a3e44(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3fae8;
  _swift_getWitnessTable(&UNK_10dd3fae8,&UNK_1107af998);
  puRam0000000113099448 = puVar1;
  return;
}


