/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040490b4; end: 10404922b;  */

int FUN_1040490b4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104049130;
        goto LAB_104049114;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104049114:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_104049130:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10404922c; end: 104049463;  */

void FUN_10404922c(void)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar4 = 0xeb00000000646e61;
  uVar3 = 0x73756f68546e6574;
  if (bVar1 != 2) {
    uVar4 = 0xea00000000006e6f;
    uVar3 = 0x696c6c694d656e6f;
  }
  uVar2 = 0x656e6f6e;
  if (bVar1 != 0) {
    uVar2 = 0x6f72657a;
  }
  if (bVar1 < 2) {
    uVar4 = 0xe400000000000000;
    uVar3 = (ulong)uVar2;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104049464; end: 104049533;  */

void FUN_104049464(ulong *param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  uVar4 = 0xeb00000000646e61;
  uVar3 = 0x73756f68546e6574;
  if (bVar1 != 2) {
    uVar4 = 0xea00000000006e6f;
    uVar3 = 0x696c6c694d656e6f;
  }
  uVar2 = 0x656e6f6e;
  if (bVar1 != 0) {
    uVar2 = 0x6f72657a;
  }
  if (bVar1 < 2) {
    uVar4 = 0xe400000000000000;
    uVar3 = (ulong)uVar2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}



/* Entry: 104049534; end: 1040495d7;  */

void FUN_104049534(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304f158;
  func_0x0001000285a8(0x11304f158,&UNK_10dcc7b30);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1040495d8; end: 1040495db;  */

void FUN_1040495d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc7b38;
  _swift_getWitnessTable(&UNK_10dcc7b38,&UNK_110739fe8);
  puRam000000011304f160 = puVar1;
  return;
}



/* Entry: 1040495dc; end: 10404961b;  */

void FUN_1040495dc(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc7b38;
  _swift_getWitnessTable(&UNK_10dcc7b38,&UNK_110739fe8);
  puRam000000011304f160 = puVar1;
  return;
}



/* Entry: 10404961c; end: 104049647;  */

void FUN_10404961c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104049648();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000104049688();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104049648; end: 1040496c7;  */

void FUN_104049648(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc7c00;
  _swift_getWitnessTable(&UNK_10dcc7c00,&UNK_110739fe8);
  puRam000000011304f168 = puVar1;
  return;
}



/* Entry: 1040496c8; end: 1040496cb;  */

void FUN_1040496c8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304f178 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304f180;
  func_0x00010002969c(0x11304f180,&UNK_10dcc7bf8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304f178 = puVar2;
  return;
}



/* Entry: 1040496cc; end: 10404971b;  */

void FUN_1040496cc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304f178 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304f180;
  func_0x00010002969c(0x11304f180,&UNK_10dcc7bf8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304f178 = puVar2;
  return;
}



/* Entry: 10404971c; end: 104049893;  */

int FUN_10404971c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104049798;
        goto LAB_10404977c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10404977c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_104049798:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104049894; end: 104049aa7;  */

void FUN_104049894(void)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar4 = 0xee0065766946746e;
  uVar3 = 0x696f506565726874;
  if (bVar1 != 2) {
    uVar4 = 0xe400000000000000;
    uVar3 = 0x65766966;
  }
  uVar2 = 0x656e6f6e;
  if (bVar1 != 0) {
    uVar2 = 0x6f72657a;
  }
  if (bVar1 < 2) {
    uVar4 = 0xe400000000000000;
    uVar3 = (ulong)uVar2;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104049aa8; end: 104049b67;  */

void FUN_104049aa8(ulong *param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  uVar4 = 0xee0065766946746e;
  uVar3 = 0x696f506565726874;
  if (bVar1 != 2) {
    uVar4 = 0xe400000000000000;
    uVar3 = 0x65766966;
  }
  uVar2 = 0x656e6f6e;
  if (bVar1 != 0) {
    uVar2 = 0x6f72657a;
  }
  if (bVar1 < 2) {
    uVar4 = 0xe400000000000000;
    uVar3 = (ulong)uVar2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  return;
}



/* Entry: 104049b68; end: 104049c0b;  */

void FUN_104049b68(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304f240;
  func_0x0001000285a8(0x11304f240,&UNK_10dcc7c60);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104049c0c; end: 104049c0f;  */

void FUN_104049c0c(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc7c68;
  _swift_getWitnessTable(&UNK_10dcc7c68,&UNK_11073a118);
  puRam000000011304f248 = puVar1;
  return;
}



/* Entry: 104049c10; end: 104049c4f;  */

void FUN_104049c10(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc7c68;
  _swift_getWitnessTable(&UNK_10dcc7c68,&UNK_11073a118);
  puRam000000011304f248 = puVar1;
  return;
}



/* Entry: 104049c50; end: 104049c7b;  */

void FUN_104049c50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104049c7c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000104049cbc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104049c7c; end: 104049cfb;  */

void FUN_104049c7c(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc7d30;
  _swift_getWitnessTable(&UNK_10dcc7d30,&UNK_11073a118);
  puRam000000011304f250 = puVar1;
  return;
}



/* Entry: 104049cfc; end: 104049cff;  */

void FUN_104049cfc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304f260 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304f268;
  func_0x00010002969c(0x11304f268,&UNK_10dcc7d28);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304f260 = puVar2;
  return;
}



/* Entry: 104049d00; end: 104049d4f;  */

void FUN_104049d00(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304f260 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304f268;
  func_0x00010002969c(0x11304f268,&UNK_10dcc7d28);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304f260 = puVar2;
  return;
}



/* Entry: 104049d50; end: 10404a143;  */

int FUN_104049d50(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104049dcc;
        goto LAB_104049db0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104049db0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_104049dcc:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10404a144; end: 10404a293;  */

void FUN_10404a144(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x000104049eb4(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10404a294; end: 10404a29b;  */

undefined1  [16] FUN_10404a294(void)

{
  byte bVar1;
  byte in_ZR;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined *puVar7;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  pcVar4 = (char *)(ulong)*unaff_x20;
  pbVar6 = (byte *)0xe400000000000000;
  pbVar2 = (byte *)0x656e6f4e;
  pbVar5 = pbVar2;
  pbVar3 = pbVar6;
  switch(*unaff_x20) {
  default:
    pbVar6 = (byte *)0x4420;
  case 0x26:
  case 0x34:
  case 0x74:
  case 0xac:
  case 200:
    pbVar6 = (byte *)((ulong)pbVar6 | 0x72690000);
  case 0x19:
  case 0x2d:
  case 0x41:
  case 0x55:
  case 0x5d:
  case 0x65:
  case 0x6d:
  case 0x81:
  case 0x95:
  case 0x9d:
  case 0xa5:
  case 0xb9:
  case 0xc1:
  case 0xc4:
  case 0xe1:
  case 0xf5:
  case 0xfd:
    pbVar6 = (byte *)((ulong)pbVar6 | 0x636500000000);
  case 0x24:
  case 0x4c:
  case 0x8c:
  case 0x8e:
  case 0xec:
  case 0xee:
    pbVar6 = (byte *)((ulong)pbVar6 & 0xffffffffffff | 0xef74000000000000);
  case 0x4e:
  case 0xc6:
    pbVar2 = (byte *)0x7845;
  case 0x3d:
  case 0x7d:
  case 0xb5:
  case 0xd1:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff0000ffff | 0x6c616e7265740000);
  case 0x9e:
    auVar8._8_8_ = pbVar6;
    auVar8._0_8_ = pbVar2;
    return auVar8;
  case 2:
    pbVar6 = (byte *)0x800000010f1e2720;
    pbVar2 = (byte *)0xd000000000000012;
  case 0xca:
    auVar11._8_8_ = pbVar6;
    auVar11._0_8_ = pbVar2;
    return auVar11;
  case 3:
  case 0xfe:
    pbVar2 = (byte *)0xd00000000000001a;
  case 0x2f:
  case 0x5f:
  case 0x67:
  case 0x6f:
  case 0xbf:
    pcVar4 = "lt";
  case 0x17:
  case 0x2b:
  case 0x3f:
  case 0x42:
  case 0x53:
  case 0x5b:
  case 99:
  case 0x6b:
  case 0x7f:
  case 0x93:
  case 0x9b:
  case 0x9f:
  case 0xa3:
  case 0xa7:
  case 0xb7:
  case 0xdf:
  case 0xf3:
  case 0xfb:
    pcVar4 = pcVar4 + 0x720;
  case 0xcb:
    break;
  case 4:
  case 0xda:
    pcVar4 = "Internal Channel Direct";
  case 0x12:
    auVar9._8_8_ = (ulong)pcVar4 | 0x8000000000000000;
    auVar9._0_8_ = 0xd00000000000001d;
    return auVar9;
  case 5:
    pbVar6 = (byte *)0x800000010f1e26c0;
    pcVar4 = (char *)0x1a;
  case 0xf6:
    pbVar2 = (byte *)(((ulong)pcVar4 | 0xd000000000000000) - 3);
  case 0xf2:
  case 0xfa:
    auVar13._8_8_ = pbVar6;
    auVar13._0_8_ = pbVar2;
    return auVar13;
  case 6:
    pbVar2 = (byte *)0xd00000000000001a;
  case 0x30:
  case 0x60:
  case 0x68:
  case 0x70:
  case 0xa0:
  case 0xa8:
  case 0xcc:
    pcVar4 = "Internal Channel Universal";
    break;
  case 7:
    pbVar6 = (byte *)0x800000010f1e2680;
    pcVar4 = (char *)0xd00000000000001a;
  case 0xa6:
    auVar12._0_8_ = pcVar4 + -7;
    auVar12._8_8_ = pbVar6;
    return auVar12;
  case 8:
    pbVar6 = (byte *)0x800000010f1e2660;
  case 0xde:
    pbVar2 = (byte *)0xd000000000000016;
  case 0xb2:
    auVar15._8_8_ = pbVar6;
    auVar15._0_8_ = pbVar2;
    return auVar15;
  case 9:
  case 0xf:
  case 0x57:
  case 0xd7:
  case 0xf7:
  case 0xff:
    pcVar4 = "lt";
  case 0x97:
    pbVar6 = (byte *)((ulong)(pcVar4 + 0x640) | 0x8000000000000000);
    pbVar2 = (byte *)0xd000000000000019;
  case 0:
    auVar10._8_8_ = pbVar6;
    auVar10._0_8_ = pbVar2;
    return auVar10;
  case 0xe:
    auVar25._8_8_ = 0xe400000000000000;
    auVar25._0_8_ = 0x656e6f4e;
    return auVar25;
  case 0x1a:
  case 0x5e:
    pcVar4 = &stack0x00000008;
    unaff_x19 = (byte *)(ulong)*unaff_x20;
  case 0xbe:
    pbVar3 = unaff_x19;
    __ss6HasherV5_seedABSi_tcfC(pcVar4,0);
    pbVar2 = pbVar6;
    func_0x000104049eb4(pbVar3);
    __sSS4hash4intoys6HasherVz_tF(&stack0x00000008,pbVar3,pbVar2);
    _swift_bridgeObjectRelease(pbVar2);
    __ss6HasherV9_finalizeSiyF();
  case 0xb6:
    auVar17._8_8_ = pbVar3;
    auVar17._0_8_ = pbVar2;
    return auVar17;
  case 0x1c:
  case 0x44:
  case 0x84:
  case 0xbc:
  case 0xe4:
    unaff_x19 = (byte *)0xe400000000000000;
    pbVar5 = (byte *)0x112d3c000;
    unaff_x20 = pbVar2;
  case 0x3b:
  case 0x7b:
    pbVar2 = pbVar5 + 0xde0;
  case 0xb3:
  case 0xcf:
    func_0x0001000285a8(pbVar2,&DAT_10d9056a0);
  case 0x56:
  case 0x3a:
    _swift_initStaticObject();
    __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
    _swift_bridgeObjectRelease(unaff_x19);
    if ((byte *)0x9 < pbVar2) {
      pbVar2 = (byte *)0xa;
    }
    auVar22._8_8_ = unaff_x20;
    auVar22._0_8_ = pbVar2;
    return auVar22;
  case 0x2a:
    auVar20._8_8_ = 0xe400000000000000;
    auVar20._0_8_ = 0x656e6f4e;
    return auVar20;
  case 0x2e:
    unaff_x20 = (byte *)0xe400000000000000;
    pbVar6 = pbVar2;
  case 0x92:
  case 0x9a:
  case 0xa2:
    __sSS4hash4intoys6HasherVz_tF();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(unaff_x20);
    auVar28._8_8_ = pbVar6;
    auVar28._0_8_ = unaff_x20;
    return auVar28;
  case 0x31:
  case 0x61:
  case 0x69:
  case 0x71:
  case 0xa1:
  case 0xa9:
  case 0xcd:
    auVar26._0_8_ = *(long *)(pcVar4 + 0x378);
    if (auVar26._0_8_ != 0) {
      auVar26._8_8_ = 0xe400000000000000;
      return auVar26;
    }
    pbVar2 = &UNK_10dcc7000;
  case 0x7a:
    pbVar2 = pbVar2 + 0xe18;
    puVar7 = &UNK_11073a248;
    _swift_getWitnessTable(pbVar2,&UNK_11073a248);
    pbRam000000011304f378 = pbVar2;
    auVar27._8_8_ = puVar7;
    auVar27._0_8_ = pbVar2;
    return auVar27;
  case 0x3e:
  case 0x3c:
  case 0x7c:
  case 0xb4:
  case 0xd0:
    auVar19._8_8_ = 0xe400000000000000;
    auVar19._0_8_ = 0x656e6f4e;
    return auVar19;
  case 0x66:
    pbVar2 = (byte *)0x11304f360;
    pbVar6 = &UNK_10dcc7000;
  case 0x18:
  case 0x2c:
  case 0x40:
  case 0x54:
  case 0x5c:
  case 100:
  case 0x6c:
  case 0x80:
  case 0x94:
  case 0x9c:
  case 0xa4:
  case 0xb8:
  case 0xc0:
  case 0xe0:
  case 0xf4:
  case 0xfc:
    pbVar6 = pbVar6 + 0xda8;
  case 0xce:
    func_0x0001000285a8(pbVar2,pbVar6);
  case 0x16:
    pbVar6 = (byte *)0x11304f330;
    _swift_initStaticObject();
  case 0xba:
    *(byte **)unaff_x19 = pbVar2;
    auVar21._8_8_ = pbVar6;
    auVar21._0_8_ = pbVar2;
    return auVar21;
  case 0x6e:
    func_0x00010404a3b0();
    unaff_x19 = pbVar2;
    pbRam00000000656e6f56 = pbVar5;
  case 0x83:
  case 0xbb:
  case 0xe3:
    pbVar2 = pbVar5;
    func_0x00010404a3f0();
  case 0x1b:
  case 0x43:
    *(byte **)(unaff_x19 + 0x10) = pbVar2;
  case 0x82:
    auVar24._8_8_ = pbVar6;
    auVar24._0_8_ = pbVar2;
    return auVar24;
  case 0x96:
    bVar1 = *unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(&stack0x00000008);
    pbVar3 = pbVar6;
    unaff_x19 = (byte *)(ulong)bVar1;
  case 0x7e:
    pbVar6 = unaff_x19;
    pbVar2 = pbVar3;
    func_0x000104049eb4(pbVar6);
    __sSS4hash4intoys6HasherVz_tF(&stack0x00000008,pbVar6,pbVar2);
    _swift_bridgeObjectRelease(pbVar2);
  case 0xe2:
    __ss6HasherV9_finalizeSiyF();
  case 0x52:
  case 0x5a:
  case 0x62:
  case 0x6a:
    auVar18._8_8_ = pbVar6;
    auVar18._0_8_ = pbVar2;
    return auVar18;
  case 0x98:
    pbVar2 = &UNK_10dcc7db0;
  case 0x10:
  case 0x58:
  case 0xd8:
  case 0xf8:
    puVar7 = &UNK_11073a248;
    _swift_getWitnessTable(pbVar2,&UNK_11073a248);
    pbRam000000011304f368 = pbVar2;
    auVar23._8_8_ = puVar7;
    auVar23._0_8_ = pbVar2;
    return auVar23;
  case 0xd6:
    auVar16._1_7_ = 0;
    auVar16[0] = in_ZR;
    auVar16._8_8_ = 0xe400000000000000;
    return auVar16;
  }
  auVar14._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
  auVar14._0_8_ = pbVar2;
  return auVar14;
}



/* Entry: 10404a29c; end: 10404a33f;  */

void FUN_10404a29c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304f360;
  func_0x0001000285a8(0x11304f360,&UNK_10dcc7da8);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 10404a340; end: 10404a343;  */

void FUN_10404a340(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc7db0;
  _swift_getWitnessTable(&UNK_10dcc7db0,&UNK_11073a248);
  puRam000000011304f368 = puVar1;
  return;
}



/* Entry: 10404a344; end: 10404a383;  */

void FUN_10404a344(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc7db0;
  _swift_getWitnessTable(&UNK_10dcc7db0,&UNK_11073a248);
  puRam000000011304f368 = puVar1;
  return;
}



/* Entry: 10404a384; end: 10404a3af;  */

void FUN_10404a384(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10404a3b0();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010404a3f0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10404a3b0; end: 10404a42f;  */

void FUN_10404a3b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f370 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc7e78;
  _swift_getWitnessTable(&UNK_10dcc7e78,&UNK_11073a248);
  puRam000000011304f370 = puVar1;
  return;
}



/* Entry: 10404a430; end: 10404a433;  */

void FUN_10404a430(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304f380 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304f388;
  func_0x00010002969c(0x11304f388,&UNK_10dcc7e70);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304f380 = puVar2;
  return;
}



/* Entry: 10404a434; end: 10404a483;  */

void FUN_10404a434(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304f380 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304f388;
  func_0x00010002969c(0x11304f388,&UNK_10dcc7e70);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304f380 = puVar2;
  return;
}



/* Entry: 10404a484; end: 10404a5fb;  */

int FUN_10404a484(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf6 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 9) {
      iVar2 = 4;
    }
    if (param_2 + 9 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10404a500;
        goto LAB_10404a4e4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10404a4e4:
      return ((uint)*param_1 | uVar1 << 8) - 9;
    }
  }
LAB_10404a500:
  iVar2 = *param_1 - 10;
  if (*param_1 < 10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10404a5fc; end: 10404a6d3;  */

void FUN_10404a5fc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10404a6d4; end: 10404a6df;  */

void FUN_10404a6d4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10404a6e0; end: 10404a7a3;  */

undefined1  [16] FUN_10404a6e0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 < 2) {
    if (lStack_18 == 0) {
      uVar3 = 0xe000000000000000;
      uVar2 = 0;
    }
    else {
      if (lStack_18 != 1) {
LAB_10404a788:
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10404a7a4);
        (*pcVar1)();
      }
      uVar3 = 0xeb000000004c4c41;
      uVar2 = 0x54534e495f505041;
    }
  }
  else if (lStack_18 == 2) {
    uVar3 = 0x800000010f1e2750;
    uVar2 = 0xd000000000000024;
  }
  else {
    if (lStack_18 != 3) goto LAB_10404a788;
    uVar3 = 0xee00454741504245;
    uVar2 = 0x575f45544f4d4552;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 10404a7a4; end: 10404a7e3;  */

void FUN_10404a7a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304f4a8;
  func_0x0001000285a8(0x11304f4a8,&UNK_10dcc7ec8);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 10404a7e4; end: 10404a7f7;  */

undefined1  [16] FUN_10404a7e4(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10404a7f8; end: 10404a837;  */

void FUN_10404a7f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f4b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc7ed0;
  _swift_getWitnessTable(&UNK_10dcc7ed0,&UNK_11073a308);
  puRam000000011304f4b0 = puVar1;
  return;
}



/* Entry: 10404a838; end: 10404a863;  */

void FUN_10404a838(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10404a864();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010404a8a4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10404a864; end: 10404a8e3;  */

void FUN_10404a864(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f4b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc7f98;
  _swift_getWitnessTable(&UNK_10dcc7f98,&UNK_11073a308);
  puRam000000011304f4b8 = puVar1;
  return;
}



/* Entry: 10404a8e4; end: 10404a8e7;  */

void FUN_10404a8e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304f4c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304f4d0;
  func_0x00010002969c(0x11304f4d0,&UNK_10dcc7f90);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304f4c8 = puVar2;
  return;
}



/* Entry: 10404a8e8; end: 10404a937;  */

void FUN_10404a8e8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304f4c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304f4d0;
  func_0x00010002969c(0x11304f4d0,&UNK_10dcc7f90);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304f4c8 = puVar2;
  return;
}



/* Entry: 10404a938; end: 10404a947;  */

undefined1  [16] FUN_10404a938(void)

{
  return ZEXT816(0x11073a308);
}



/* Entry: 10404a948; end: 10404a98f; +[SCWebViewTweakUtils webviewOverrideCidParams] */

void FUN_10404a948(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_10404b214();
  uVar1 = param_1;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10404a990; end: 10404ad5f;  */

undefined *
FUN_10404a990(ulong param_1,ulong param_2,long param_3,uint param_4,ulong param_5,ulong param_6,
             undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_80;
  
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10404ad14);
    (*pcVar3)();
  }
  uVar10 = param_5 >> 0xe;
  uVar12 = param_6 >> 0xe;
  uVar9 = param_6;
  if ((param_3 != 0) && (uVar10 != uVar12)) {
    _swift_bridgeObjectRetain(param_8);
    uVar10 = param_5;
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_10404aa04:
    uVar11 = uVar10 >> 0xe;
    uVar4 = uVar10;
    uVar5 = uVar10;
    if (uVar11 != uVar12) {
      do {
        uVar10 = uVar4;
        uVar4 = uVar10;
        uVar8 = param_5;
        __sSsySJSS5IndexVcig(uVar10,param_5,param_6,param_7,param_8);
        if ((uVar4 == param_1) && (uVar8 == param_2)) {
          _swift_bridgeObjectRelease(uVar8);
LAB_10404aaac:
          if ((uVar5 >> 0xe != uVar11) || ((param_4 & 1) == 0)) goto LAB_10404aaf0;
          __sSs5index5afterSS5IndexVAD_tF(uVar10,param_5,param_6,param_7,param_8);
          uVar4 = uVar10;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          _swift_bridgeObjectRelease(uVar8);
          if ((uVar4 & 1) != 0) goto LAB_10404aaac;
          __sSs5index5afterSS5IndexVAD_tF(uVar10,param_5,param_6,param_7,param_8);
          uVar4 = uVar10;
          uVar10 = uVar5;
        }
        uVar11 = uVar4 >> 0xe;
        uVar5 = uVar10;
        if (uVar11 == uVar12) break;
      } while( true );
    }
    goto LAB_10404abfc;
  }
  if ((uVar10 == uVar12) &&
     (puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8, (param_4 & 1) != 0)) goto LAB_10404acdc;
  if (uVar12 < uVar10) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10404ad38);
    (*pcVar3)();
  }
  uVar4 = param_5;
  __sSsySsSnySS5IndexVGcig();
  puVar7 = (undefined *)0x0;
  func_0x0001014788a4(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar12 = *(ulong *)(puVar7 + 0x10);
  uVar11 = *(ulong *)(puVar7 + 0x18);
  uVar10 = param_5;
LAB_10404acbc:
  puStack_80 = puVar7;
  if (uVar11 >> 1 <= uVar12) {
    puStack_80 = (undefined *)(ulong)(1 < uVar11);
    func_0x0001014788a4(puStack_80,uVar12 + 1,1,puVar7);
  }
  *(ulong *)(puStack_80 + 0x10) = uVar12 + 1;
  *(ulong *)(puStack_80 + uVar12 * 0x20 + 0x20) = uVar10;
  *(ulong *)(puStack_80 + uVar12 * 0x20 + 0x28) = param_6;
  *(ulong *)(puStack_80 + uVar12 * 0x20 + 0x30) = uVar4;
  *(ulong *)(puStack_80 + uVar12 * 0x20 + 0x38) = uVar9;
LAB_10404acdc:
  _swift_bridgeObjectRelease(param_8);
  return puStack_80;
LAB_10404aaf0:
  if (uVar11 < uVar5 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10404ad60);
    (*pcVar3)();
  }
  uVar11 = uVar10;
  uVar4 = param_5;
  uVar8 = param_6;
  __sSsySsSnySS5IndexVGcig();
  puVar6 = puStack_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    plVar1 = (long *)(puStack_80 + 0x10);
    puStack_80 = (undefined *)0x0;
    func_0x0001014788a4(0,*plVar1 + 1,1);
  }
  uVar2 = *(ulong *)(puStack_80 + 0x10);
  if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar2) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puStack_80 + 0x18));
    func_0x0001014788a4(puVar6,uVar2 + 1,1,puStack_80);
    puStack_80 = puVar6;
  }
  *(ulong *)(puStack_80 + 0x10) = uVar2 + 1;
  *(ulong *)(puStack_80 + uVar2 * 0x20 + 0x20) = uVar5;
  *(ulong *)(puStack_80 + uVar2 * 0x20 + 0x28) = uVar11;
  *(ulong *)(puStack_80 + uVar2 * 0x20 + 0x30) = uVar4;
  *(ulong *)(puStack_80 + uVar2 * 0x20 + 0x38) = uVar8;
  __sSs5index5afterSS5IndexVAD_tF(uVar10,param_5,param_6,param_7,param_8);
  if (*(long *)(puStack_80 + 0x10) == param_3) goto LAB_10404abfc;
  goto LAB_10404aa04;
LAB_10404abfc:
  if ((uVar10 >> 0xe == uVar12) && ((param_4 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_8);
    goto LAB_10404acdc;
  }
  if (uVar12 < uVar10 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10404ad3c);
    (*pcVar3)();
  }
  __sSsySsSnySS5IndexVGcig();
  _swift_bridgeObjectRelease(param_8);
  puVar6 = puStack_80;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar7 = puStack_80;
  if (((ulong)puVar6 & 1) == 0) {
    puVar7 = (undefined *)0x0;
    func_0x0001014788a4(0,*(long *)(puStack_80 + 0x10) + 1,1,puStack_80);
  }
  uVar12 = *(ulong *)(puVar7 + 0x10);
  uVar11 = *(ulong *)(puVar7 + 0x18);
  uVar4 = param_5;
  goto LAB_10404acbc;
}



/* Entry: 10404ad60; end: 10404afa3;  */

void FUN_10404ad60(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long lVar13;
  long extraout_x8;
  undefined *puVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  ulong *puStack_a0;
  
  lVar8 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar13 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar15 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar10 = param_2[2];
  uVar6 = param_2[3];
  _swift_bridgeObjectRetain(uVar6);
  lVar9 = 0x3a;
  FUN_10404a990(0x3a,0xe100000000000000,1,1,uVar1,uVar5,uVar10,uVar6);
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar16 = *(long *)(lVar9 + 0x10);
  if (lVar16 == 0) {
    _swift_bridgeObjectRelease(lVar9);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_a0 = param_1;
    func_0x000100403514(0,lVar16,0);
    puVar17 = (undefined8 *)(lVar9 + 0x38);
    lStack_a8 = lVar9;
    do {
      uVar1 = *puVar17;
      uVar10 = uVar1;
      _swift_bridgeObjectRetain(uVar1);
      __s10Foundation12CharacterSetV11whitespacesACvgZ(puVar15);
      func_0x000101478db0();
      puVar11 = puVar15;
      puVar12 = PTR___sSsN_11034e1d8;
      __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                (puVar15,PTR___sSsN_11034e1d8,uVar10);
      (**(code **)(lVar13 + 8))(puVar15,lVar8);
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = *(ulong *)(puVar14 + 0x10);
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar2) {
        func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar2 + 1,1);
      }
      puVar17 = puVar17 + 4;
      *(ulong *)(puVar14 + 0x10) = uVar2 + 1;
      *(undefined1 **)(puVar14 + uVar2 * 0x10 + 0x20) = puVar11;
      *(undefined **)(puVar14 + uVar2 * 0x10 + 0x28) = puVar12;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    _swift_bridgeObjectRelease(lStack_a8);
    param_1 = puStack_a0;
  }
  if (*(long *)(puVar14 + 0x10) == 2) {
    uVar3 = *(ulong *)(puVar14 + 0x20);
    uVar7 = *(ulong *)(puVar14 + 0x28);
    uVar4 = *(ulong *)(puVar14 + 0x30);
    puVar12 = *(undefined **)(puVar14 + 0x38);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(puVar12);
    _swift_bridgeObjectRelease(puVar14);
    uVar2 = uVar3 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar2 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = uVar4 & 0xffffffffffff;
      if (((ulong)puVar12 & 0x2000000000000000) != 0) {
        uVar2 = (ulong)puVar12 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        *param_1 = uVar3;
        param_1[1] = uVar7;
        param_1[2] = uVar4;
        param_1[3] = (ulong)puVar12;
        return;
      }
    }
    _swift_bridgeObjectRelease(uVar7);
    puVar14 = puVar12;
  }
  _swift_bridgeObjectRelease(puVar14);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10404afa4; end: 10404b057;  */

void FUN_10404afa4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_10404b214();
  _swift_beginAccess(0x11304e430,auStack_58,0,0);
  uVar4 = uRam000000011304e430 & ((long)uRam000000011304e430 >> 0x3f ^ 0xffffffffffffffffU);
  _swift_beginAccess(0x11304e470,auStack_70,0,0);
  uVar1 = uRam000000011304e470;
  _swift_beginAccess(0x11304e4b0,auStack_88,0,0);
  uVar3 = uRam000000011304e4b8;
  uVar2 = uRam000000011304e4b0;
  *param_1 = param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  _swift_bridgeObjectRetain();
  return;
}



/* Entry: 10404b058; end: 10404b06b; +[SCWebViewTweakUtils cidMetadataFromTweakValues] */

void FUN_10404b058(void)

{
  FUN_10404b560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404b06c; end: 10404b09f; +[SCWebViewTweakUtils localTestAsmScript] */

void FUN_10404b06c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010404b62c();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10404b0a0; end: 10404b0a3;  */

undefined1  [16] FUN_10404b0a0(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(0x11304dfd8,auStack_48,0,0);
  uVar1 = uRam000000011304dfd8 & 0xffffffffffff;
  if ((uRam000000011304dfe0 & 0x2000000000000000) != 0) {
    uVar1 = uRam000000011304dfe0 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss11_StringGutsV4growyySiF(0x33);
    __sSS6appendyySSF(0x2f2f3a70747468,0xe700000000000000);
    uVar2 = uRam000000011304dfe0;
    uVar1 = uRam000000011304dfd8;
    _swift_bridgeObjectRetain(uRam000000011304dfe0);
    __sSS6appendyySSF(uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    __sSS6appendyySSF(0xd00000000000002a,0x800000010f1e2780);
  }
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 10404b0a4; end: 10404b0df; -[SCWebViewTweakUtils init] */

void FUN_10404b0a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10404b0e0; end: 10404b113;  */

void FUN_10404b0e0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10404b114; end: 10404b213;  */

undefined * FUN_10404b114(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10404b214);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x11304f548;
    func_0x0001000285a8(0x11304f548,&UNK_10dcc8010);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10404b214; end: 10404b55f;  */

undefined * FUN_10404b214(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(0x11304e3e8,auStack_78,0,0);
  uVar6 = uRam000000011304e3f0;
  uVar4 = uRam000000011304e3e8;
  uStack_c0 = 0x2c;
  lStack_b8 = -0x1f00000000000000;
  puStack_90 = &uStack_c0;
  _swift_bridgeObjectRetain(uRam000000011304e3f0);
  lVar9 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_10404b730,&puStack_a0,uVar4,uVar6);
  uVar15 = *(ulong *)(lVar9 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar18 = 0;
    puVar19 = (undefined8 *)(lVar9 + 0x38);
    do {
      if (*(ulong *)(lVar9 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10404b544);
        (*pcVar8)();
      }
      puStack_90 = (undefined8 *)puVar19[-1];
      uStack_88 = *puVar19;
      uStack_98 = puVar19[-2];
      puStack_a0 = (undefined *)puVar19[-3];
      FUN_10404ad60(&uStack_c0,&puStack_a0);
      uVar17 = uStack_a8;
      uVar6 = uStack_b0;
      lVar7 = lStack_b8;
      uVar4 = uStack_c0;
      if (lStack_b8 != 0) {
        puVar10 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar12 = puVar11;
        if (((ulong)puVar10 & 1) == 0) {
          puVar12 = (undefined *)0x0;
          FUN_103c52c7c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
        }
        uVar3 = *(ulong *)(puVar12 + 0x10);
        puVar11 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar3) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
          FUN_103c52c7c(puVar11,uVar3 + 1,1,puVar12);
        }
        *(ulong *)(puVar11 + 0x10) = uVar3 + 1;
        *(undefined8 *)(puVar11 + uVar3 * 0x20 + 0x20) = uVar4;
        *(long *)(puVar11 + uVar3 * 0x20 + 0x28) = lVar7;
        *(undefined8 *)(puVar11 + uVar3 * 0x20 + 0x30) = uVar6;
        *(undefined8 *)(puVar11 + uVar3 * 0x20 + 0x38) = uVar17;
      }
      uVar18 = uVar18 + 1;
      puVar19 = puVar19 + 4;
    } while (uVar15 != uVar18);
  }
  _swift_bridgeObjectRelease(lVar9);
  uVar15 = *(ulong *)(puVar11 + 0x10);
  puVar10 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (uVar15 != 0) {
    uVar18 = 0;
    puVar19 = (undefined8 *)(puVar11 + 0x38);
    do {
      if (*(ulong *)(puVar11 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10404b548);
        (*pcVar8)();
      }
      uVar3 = puVar19[-3];
      uVar5 = puVar19[-2];
      uVar4 = puVar19[-1];
      uVar6 = *puVar19;
      _swift_bridgeObjectRetain_n(uVar5,2);
      _swift_bridgeObjectRetain_n(uVar6,2);
      puVar12 = puVar10;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar13 = uVar3;
      uVar14 = uVar5;
      puStack_a0 = puVar10;
      func_0x000100029284();
      uVar16 = (ulong)~(uint)uVar14 & 1;
      lVar9 = *(long *)(puVar10 + 0x10) + uVar16;
      if (SCARRY8(*(long *)(puVar10 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10404b54c);
        (*pcVar8)();
      }
      if (*(long *)(puVar10 + 0x18) < lVar9) {
        func_0x0001001833c8(lVar9,puVar12);
        uVar13 = uVar3;
        uVar16 = uVar5;
        func_0x000100029284();
        if (((uint)uVar14 & 1) != ((uint)uVar16 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10404b560);
          (*pcVar8)();
        }
LAB_10404b48c:
        if ((uVar14 & 1) != 0) goto LAB_10404b3a8;
LAB_10404b494:
        puVar10 = puStack_a0;
        *(ulong *)(puStack_a0 + (uVar13 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_a0 + (uVar13 >> 6) * 8 + 0x40) | 1L << (uVar13 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puStack_a0 + 0x30) + uVar13 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(puStack_a0 + 0x38) + uVar13 * 0x10);
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        _swift_bridgeObjectRelease(uVar6);
        _swift_bridgeObjectRelease(uVar5);
        if (SCARRY8(*(long *)(puVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10404b550);
          (*pcVar8)();
        }
        *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
      }
      else {
        if (((ulong)puVar12 & 1) != 0) goto LAB_10404b48c;
        func_0x000100184498();
        if ((uVar14 & 1) == 0) goto LAB_10404b494;
LAB_10404b3a8:
        puVar10 = puStack_a0;
        puVar2 = (undefined8 *)(*(long *)(puStack_a0 + 0x38) + uVar13 * 0x10);
        uVar17 = puVar2[1];
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        _swift_bridgeObjectRelease(uVar6);
        _swift_bridgeObjectRelease_n(uVar5,2);
        _swift_bridgeObjectRelease(uVar17);
      }
      uVar18 = uVar18 + 1;
      puVar19 = puVar19 + 4;
    } while (uVar15 != uVar18);
  }
  _swift_bridgeObjectRelease(puVar11);
  return puVar10;
}



/* Entry: 10404b560; end: 10404b70f;  */

void FUN_10404b560(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10404b214();
  _swift_beginAccess(0x11304e430,auStack_88,0,0);
  uVar3 = uRam000000011304e430 & ((long)uRam000000011304e430 >> 0x3f ^ 0xffffffffffffffffU);
  _swift_beginAccess(0x11304e470,auStack_a0,0,0);
  uVar1 = uRam000000011304e470;
  _swift_beginAccess(0x11304e4b0,auStack_b8,0,0);
  uVar2 = uRam000000011304e4b8;
  uStack_60 = uVar1;
  uStack_58 = uRam000000011304e4b0;
  uStack_50 = uRam000000011304e4b8;
  uStack_70 = param_1;
  uStack_68 = uVar3;
  func_0x0001048367d4(0);
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(uVar2);
  func_0x0001048359d4(&uStack_70);
  return;
}



/* Entry: 10404b710; end: 10404b72f;  */

void FUN_10404b710(void)

{
  _objc_opt_self(&PTR_PTR_112980628);
  return;
}



/* Entry: 10404b730; end: 10404b783;  */

uint FUN_10404b730(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 10404b784; end: 10404b78f;  */

undefined * FUN_10404b784(void)

{
  return &UNK_11073a440;
}



/* Entry: 10404b790; end: 10404b7db; +[SCAdComposerDpaKeys dpaTrackInfo] */

void FUN_10404b790(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1e27b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404b7dc; end: 10404b817; -[SCAdComposerDpaKeys init] */

void FUN_10404b7dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010404b7bc();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10404b818; end: 10404b847;  */

void FUN_10404b818(void)

{
  func_0x00010404b7bc();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10404b848; end: 10404b863; -[SCAdComposerDpaKeys .cxx_destruct] */

void FUN_10404b848(void)

{
  return;
}



/* Entry: 10404b864; end: 10404b8a3;  */

void FUN_10404b864(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc8068;
  _swift_getWitnessTable(&UNK_10dcc8068,&UNK_11073a460);
  puRam000000011304f580 = puVar1;
  return;
}



/* Entry: 10404b8a4; end: 10404b94f;  */

void FUN_10404b8a4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10404b950; end: 10404b97b;  */

void FUN_10404b950(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10404b97c; end: 10404b9cb;  */

void FUN_10404b97c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011304f588 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11304f590;
  func_0x00010002969c(0x11304f590,&UNK_10dcc8108);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011304f588 = puVar2;
  return;
}



/* Entry: 10404b9cc; end: 10404ba0b;  */

void FUN_10404b9cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11304f578;
  func_0x0001000285a8(0x11304f578,&UNK_10dcc8060);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 10404ba0c; end: 10404ba2f;  */

undefined1  [16] FUN_10404ba0c(void)

{
  return ZEXT816(0x11073a460);
}



/* Entry: 10404ba30; end: 10404bb07;  */

void FUN_10404ba30(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10404bb08; end: 10404bb17;  */

void FUN_10404bb08(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10404bb18; end: 10404bb57;  */

void FUN_10404bb18(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f5d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc8170;
  _swift_getWitnessTable(&UNK_10dcc8170,&UNK_11073a4f8);
  puRam000000011304f5d8 = puVar1;
  return;
}



/* Entry: 10404bb58; end: 10404bb7b;  */

undefined1  [16] FUN_10404bb58(void)

{
  return ZEXT816(0x11073a4f8);
}



/* Entry: 10404bb7c; end: 10404bc53;  */

void FUN_10404bb7c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10404bc54; end: 10404bc73;  */

void FUN_10404bc54(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10404bc74; end: 10404bcb3;  */

void FUN_10404bc74(void)

{
  undefined *puVar1;
  
  if (puRam000000011304f5e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc8240;
  _swift_getWitnessTable(&UNK_10dcc8240,&UNK_11073a570);
  puRam000000011304f5e0 = puVar1;
  return;
}



/* Entry: 10404bcb4; end: 10404bcc3;  */

undefined1  [16] FUN_10404bcb4(void)

{
  return ZEXT816(0x11073a570);
}



/* Entry: 10404bcc4; end: 10404bcef; +[SCAdOperaPagePropertyKeys pillInteractionButtonText] */

void FUN_10404bcc4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1e27d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404bcf0; end: 10404bd1b; +[SCAdOperaPagePropertyKeys expandButtonText] */

void FUN_10404bcf0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1e27f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404bd1c; end: 10404bd47; +[SCAdOperaPagePropertyKeys expandButtonHighlightTapArea] */

void FUN_10404bd1c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1e2810);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404bd48; end: 10404bd73; +[SCAdOperaPagePropertyKeys expandButtonIsSpotlight] */

void FUN_10404bd48(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1e2840);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404bd74; end: 10404bda7; +[SCAdOperaPagePropertyKeys placeId] */

void FUN_10404bd74(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c705f6f745f6461,0xee0064695f656361);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404bda8; end: 10404bdd3; +[SCAdOperaPagePropertyKeys progressBarViewModel] */

void FUN_10404bda8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1e2860);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404bdd4; end: 10404bddf;  */

undefined * FUN_10404bdd4(void)

{
  return &UNK_11073a5d8;
}



/* Entry: 10404bde0; end: 10404be0b; +[SCAdOperaPagePropertyKeys composerProgressBarViewModel] */

void FUN_10404bde0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1e2880);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404be0c; end: 10404be17;  */

undefined * FUN_10404be0c(void)

{
  return &UNK_11073a5e8;
}



/* Entry: 10404be18; end: 10404be43; +[SCAdOperaPagePropertyKeys adCollectionItemDeepLinkFallBackStoreVCParams] */

void FUN_10404be18(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x800000010f1e28b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404be44; end: 10404be4f;  */

undefined * FUN_10404be44(void)

{
  return &UNK_11073a5f8;
}



/* Entry: 10404be50; end: 10404be7b; +[SCAdOperaPagePropertyKeys adCollectionItemAppInstallStoreVCParams] */

void FUN_10404be50(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f1e28f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404be7c; end: 10404be87;  */

undefined * FUN_10404be7c(void)

{
  return &UNK_11073a608;
}



/* Entry: 10404be88; end: 10404beb3; +[SCAdOperaPagePropertyKeys adCollectionItemShowcaseParams] */

void FUN_10404be88(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1e2920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404beb4; end: 10404bebf;  */

undefined * FUN_10404beb4(void)

{
  return &UNK_11073a618;
}



/* Entry: 10404bec0; end: 10404beeb; +[SCAdOperaPagePropertyKeys adCTAType] */

void FUN_10404bec0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1e2950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404beec; end: 10404bef7;  */

undefined * FUN_10404beec(void)

{
  return &UNK_10dcc8300;
}



/* Entry: 10404bef8; end: 10404bf2b; +[SCAdOperaPagePropertyKeys isStoryAd] */

void FUN_10404bef8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74735f73695f6461,0xee0064615f79726f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404bf2c; end: 10404bf37;  */

undefined * FUN_10404bf2c(void)

{
  return &UNK_11073a628;
}



/* Entry: 10404bf38; end: 10404bf63; +[SCAdOperaPagePropertyKeys snapIndexInStory] */

void FUN_10404bf38(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1e2970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404bf64; end: 10404bf8f; +[SCAdOperaPagePropertyKeys adComposerDpaLayerEntryPointViewModel] */

void FUN_10404bf64(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f1a1b80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404bf90; end: 10404bfbb; +[SCAdOperaPagePropertyKeys adComposerDpaLayerEntryPointContext] */

void FUN_10404bf90(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1e2990);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404bfbc; end: 10404bfe7; +[SCAdOperaPagePropertyKeys adComposerLayerEnableRedBorder] */

void FUN_10404bfbc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1e29c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404bfe8; end: 10404c013; +[SCAdOperaPagePropertyKeys adComposerLayerBottomContentInset] */

void FUN_10404bfe8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010f1e29f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10404c014; end: 10404c03f; +[SCAdOperaPagePropertyKeys contentViewAdditionalTopOffset] */

void FUN_10404c014(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1e2a20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


