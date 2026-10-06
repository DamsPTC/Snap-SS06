/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102701f88; end: 102701f8f;  */

void FUN_102701f88(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102702074();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_11053e058;
  *param_1 = lVar1;
  return;
}



/* Entry: 102701f90; end: 102701fbf;  */

void FUN_102701f90(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102701fc0; end: 102701fe3;  */

void FUN_102701fc0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102701fe4; end: 102701feb;  */

void FUN_102701fe4(void)

{
  return;
}



/* Entry: 102701fec; end: 102702057;  */

void FUN_102701fec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  func_0x000107c4ec94();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c50850(lVar2,param_2,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 102702058; end: 102702073;  */

void FUN_102702058(void)

{
  return;
}



/* Entry: 102702074; end: 102702093;  */

void FUN_102702074(void)

{
  func_0x000107c61168(&PTR_PTR_112eb9848);
  return;
}



/* Entry: 102702094; end: 1027021f7;  */

int FUN_102702094(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102702110;
        goto LAB_1027020f4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1027020f4:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_102702110:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1027021f8; end: 102702223;  */

void FUN_1027021f8(void)

{
  func_0x0001000285a8(0x112eb98e0,&UNK_10dad1160);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 102702224; end: 10270239f;  */

undefined1  [16] FUN_102702224(ulong param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *unaff_x19;
  byte *unaff_x20;
  undefined1 auVar7 [16];
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
  
  pbVar5 = (byte *)0xef746e656d656761;
  pbVar3 = (byte *)0x6e614d6b61657774;
  pcVar6 = (char *)(param_1 & 0xff);
  pbVar4 = pbVar3;
  pbVar2 = pbVar5;
  switch(pcVar6) {
  default:
    pcVar6 = "idgetOnboardingRoute";
  case (char *)0x20:
  case (char *)0x30:
  case (char *)0x3e:
  case (char *)0x7e:
  case (char *)0xb6:
  case (char *)0xf6:
    pcVar6 = pcVar6 + 0x530;
  case (char *)0x23:
  case (char *)0x37:
  case (char *)0x4b:
  case (char *)0x5f:
  case (char *)0x67:
  case (char *)0x6f:
  case (char *)0x77:
  case (char *)0x8b:
  case (char *)0x9f:
  case (char *)0xa7:
  case (char *)0xaf:
  case (char *)0xcb:
  case (char *)0xdf:
  case (char *)0xe7:
  case (char *)0xef:
    pcVar6 = pcVar6 + -0x20;
  case (char *)0x2e:
  case (char *)0x56:
  case (char *)0x96:
  case (char *)0x98:
  case (char *)0xd6:
  case (char *)0xd8:
    pbVar5 = (byte *)((ulong)pcVar6 | 0x8000000000000000);
  case (char *)0x24:
  case (char *)0x58:
    pcVar6 = (char *)0xa;
  case (char *)0x47:
  case (char *)0x87:
  case (char *)0xbf:
  case (char *)0xff:
    break;
  case (char *)0x2:
    pcVar6 = "debugNotifications";
  case (char *)0x39:
    auVar9._8_8_ = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
    auVar9._0_8_ = 0xd000000000000012;
    return auVar9;
  case (char *)0x3:
    auVar10._8_8_ = 0xef7363697274654d;
    auVar10._0_8_ = 0x64616f4c65676170;
    return auVar10;
  case (char *)0x4:
    pbVar3 = (byte *)0xd000000000000010;
  case (char *)0x38:
    pcVar6 = "idgetOnboardingRoute";
  case (char *)0xc4:
    pbVar5 = (byte *)((ulong)(pcVar6 + 0x4d0) | 0x8000000000000000);
  case (char *)0x14:
  case (char *)0x1c:
    auVar7._8_8_ = pbVar5;
    auVar7._0_8_ = pbVar3;
    return auVar7;
  case (char *)0x5:
  case (char *)0xe8:
    pcVar6 = "idgetOnboardingRoute";
  case (char *)0x45:
  case (char *)0x85:
    pcVar6 = pcVar6 + 0x4d0;
  case (char *)0xbd:
  case (char *)0xfd:
    auVar12._8_8_ = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
    auVar12._0_8_ = 0xd000000000000011;
    return auVar12;
  case (char *)0x6:
    pbVar5 = (byte *)0x800000010f0b7490;
    pcVar6 = (char *)0x9;
    break;
  case (char *)0x7:
    auVar11._8_8_ = 0x800000010f0b7470;
    auVar11._0_8_ = 0xd000000000000016;
    return auVar11;
  case (char *)0x8:
    auVar15._8_8_ = 0xe900000000000065;
    auVar15._0_8_ = 0x646f4d6b736f696b;
    return auVar15;
  case (char *)0x9:
    pbVar5 = (byte *)0xee00656d6f726843;
  case (char *)0x69:
    pbVar3 = (byte *)0x616d;
  case (char *)0x71:
  case (char *)0x79:
  case (char *)0xa9:
  case (char *)0xb1:
  case (char *)0xf1:
    pbVar3 = (byte *)((ulong)pbVar3 & 0xffff00000000ffff | 0x626544700000);
  case (char *)0xbc:
    auVar8._0_8_ = (ulong)pbVar3 & 0xffffffffffff | 0x6775000000000000;
    auVar8._8_8_ = pbVar5;
    return auVar8;
  case (char *)0xa:
  case (char *)0x70:
    pcVar6 = "idgetOnboardingRoute";
  case (char *)0xe0:
    pbVar5 = (byte *)((ulong)(pcVar6 + 0x450) | 0x8000000000000000);
    pbVar3 = (byte *)0xd000000000000013;
  case (char *)0x1:
    auVar14._8_8_ = pbVar5;
    auVar14._0_8_ = pbVar3;
    return auVar14;
  case (char *)0x18:
    pbVar3 = (byte *)0x112eb9000;
  case (char *)0x4d:
  case (char *)0x8d:
  case (char *)0xcd:
    pbVar3 = pbVar3 + 0x920;
  case (char *)0x12:
  case (char *)0x1a:
  case (char *)0x25:
  case (char *)0x62:
  case (char *)0xc2:
  case (char *)0xe2:
  case (char *)0xea:
    func_0x0001000285a8(pbVar3,&UNK_10dad1168);
    pbVar5 = (byte *)0x112eb9000;
  case (char *)0x68:
    pbVar5 = pbVar5 + 0x8f0;
  case (char *)0x48:
    func_0x000107c61538();
    *(byte **)unaff_x19 = pbVar3;
    auVar23._8_8_ = pbVar5;
    auVar23._0_8_ = pbVar3;
    return auVar23;
  case (char *)0x35:
  case (char *)0x49:
  case (char *)0x5d:
  case (char *)0x65:
  case (char *)0x6d:
  case (char *)0x75:
  case (char *)0x89:
  case (char *)0x9d:
  case (char *)0xa5:
  case (char *)0xad:
  case (char *)0xc9:
  case (char *)0xdd:
  case (char *)0xe5:
  case (char *)0xed:
  case (char *)0x21:
  case (char *)0x88:
    pbVar3 = (byte *)(ulong)*unaff_x20;
    func_0x000107c6068c(&stack0x00000008);
    func_0x000107c60690(pbVar3);
    func_0x000107c606a8();
  case (char *)0x10:
  case (char *)0x4c:
  case (char *)0x5c:
  case (char *)0x64:
  case (char *)0x6c:
  case (char *)0x74:
    auVar22._8_8_ = pbVar5;
    auVar22._0_8_ = pbVar3;
    return auVar22;
  case (char *)0x78:
    bVar1 = *unaff_x20;
    func_0x000107c6068c(&stack0x00000008);
    pbVar2 = pbVar5;
    unaff_x19 = (byte *)(ulong)bVar1;
  case (char *)0xa1:
    pbVar5 = unaff_x19;
    pbVar3 = pbVar2;
    FUN_102702224(pbVar5);
    func_0x000107c5fb58(&stack0x00000008,pbVar5,pbVar3);
    func_0x000107c6142c(pbVar3);
    func_0x000107c606a8();
  case (char *)0x44:
    auVar17._8_8_ = pbVar5;
    auVar17._0_8_ = pbVar3;
    return auVar17;
  case (char *)0x8c:
    pbVar3 = (byte *)(ulong)*unaff_x20;
    FUN_102702224();
    unaff_x19 = (byte *)pcVar6;
  case (char *)0x46:
  case (char *)0x86:
  case (char *)0xbe:
  case (char *)0xfe:
    *(byte **)unaff_x19 = pbVar3;
    *(byte **)(unaff_x19 + 8) = pbVar5;
    auVar18._8_8_ = pbVar5;
    auVar18._0_8_ = pbVar3;
    return auVar18;
  case (char *)0x9c:
  case (char *)0xa4:
  case (char *)0xac:
    pcVar6 = (char *)pbVar3;
  case (char *)0xb0:
    pbVar3 = (byte *)(ulong)*unaff_x20;
    func_0x000107c60690(pcVar6,pbVar3);
  case (char *)0x84:
    auVar21._8_8_ = pbVar5;
    auVar21._0_8_ = pbVar3;
    return auVar21;
  case (char *)0xa0:
    pbVar3 = (byte *)(ulong)*unaff_x20;
    func_0x000107c6068c(&stack0x00000008,0);
    func_0x000107c60690(pbVar3);
    func_0x000107c606a8();
  case (char *)0x26:
  case (char *)0x4e:
  case (char *)0x8e:
  case (char *)0xce:
  case (char *)0x3a:
  case (char *)0x6a:
  case (char *)0x72:
  case (char *)0x7a:
  case (char *)0xaa:
  case (char *)0xb2:
  case (char *)0xf2:
    auVar20._8_8_ = pbVar5;
    auVar20._0_8_ = pbVar3;
    return auVar20;
  case (char *)0xa2:
  case (char *)0x11:
  case (char *)0x19:
  case (char *)0x61:
  case (char *)0xc1:
  case (char *)0xe1:
  case (char *)0xe9:
    pbVar4 = (byte *)0x112d3c000;
    unaff_x19 = pbVar5;
    unaff_x20 = pbVar3;
  case (char *)0x3b:
  case (char *)0x6b:
  case (char *)0x73:
  case (char *)0x7b:
  case (char *)0xab:
  case (char *)0xb3:
  case (char *)0xf3:
    pbVar3 = pbVar4 + 0xde0;
  case (char *)0x34:
    func_0x0001000285a8(pbVar3,&DAT_10d9056a0);
    func_0x000107c61538();
    func_0x000107c604c4();
    func_0x000107c6142c(unaff_x19);
    if ((byte *)0xa < pbVar3) {
      pbVar3 = (byte *)0xb;
    }
    auVar24._8_8_ = unaff_x20;
    auVar24._0_8_ = pbVar3;
    return auVar24;
  case (char *)0xa8:
  case (char *)0xdc:
  case (char *)0xe4:
  case (char *)0xec:
  case (char *)0x22:
  case (char *)0x36:
  case (char *)0x4a:
  case (char *)0x5e:
  case (char *)0x66:
  case (char *)0x6e:
  case (char *)0x76:
  case (char *)0x8a:
  case (char *)0x9e:
  case (char *)0xa6:
  case (char *)0xae:
  case (char *)0xca:
  case (char *)0xde:
  case (char *)0xe6:
  case (char *)0xee:
    pbVar3 = (byte *)0x112eb98e0;
    unaff_x19 = (byte *)pcVar6;
  case (char *)0x60:
    func_0x0001000285a8(pbVar3,&UNK_10dad1160);
    pbVar5 = (byte *)0x112eb98b0;
    func_0x000107c61538();
    *(byte **)unaff_x19 = pbVar3;
  case (char *)0xf0:
  case (char *)0xc8:
    auVar19._8_8_ = pbVar5;
    auVar19._0_8_ = pbVar3;
    return auVar19;
  case (char *)0xfc:
    pcVar6 = &stack0x00000008;
    pbVar3 = (byte *)0x0;
  case (char *)0xc0:
    func_0x000107c6068c(pcVar6,pbVar3);
    FUN_102702224();
    pbVar3 = &stack0x00000008;
    param_3 = unaff_x19;
    unaff_x19 = pbVar5;
  case (char *)0xcc:
    func_0x000107c5fb58(pbVar3,param_3,unaff_x19);
    func_0x000107c6142c(unaff_x19);
    func_0x000107c606a8();
    auVar16._8_8_ = param_3;
    auVar16._0_8_ = unaff_x19;
    return auVar16;
  }
  auVar13._0_8_ = (ulong)pcVar6 | 0xd000000000000010;
  auVar13._8_8_ = pbVar5;
  return auVar13;
}



/* Entry: 1027023a0; end: 10270267f;  */

void FUN_1027023a0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  FUN_102702224(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102702680; end: 102702683;  */

void FUN_102702680(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad1170;
  func_0x000107c61520(&UNK_10dad1170,&UNK_11053e260);
  puRam0000000112eb9928 = puVar1;
  return;
}



/* Entry: 102702684; end: 1027026ef;  */

void FUN_102702684(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad1170;
  func_0x000107c61520(&UNK_10dad1170,&UNK_11053e260);
  puRam0000000112eb9928 = puVar1;
  return;
}



/* Entry: 1027026f0; end: 1027026f3;  */

void FUN_1027026f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad1250;
  func_0x000107c61520(&UNK_10dad1250,&UNK_11053e1c0);
  puRam0000000112eb9940 = puVar1;
  return;
}



/* Entry: 1027026f4; end: 10270275f;  */

void FUN_1027026f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad1250;
  func_0x000107c61520(&UNK_10dad1250,&UNK_11053e1c0);
  puRam0000000112eb9940 = puVar1;
  return;
}



/* Entry: 102702760; end: 1027027a3;  */

void FUN_102702760(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1027027a4; end: 1027027a7;  */

void FUN_1027027a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad12c0;
  func_0x000107c61520(&UNK_10dad12c0,&UNK_11053e1c0);
  puRam0000000112eb9958 = puVar1;
  return;
}



/* Entry: 1027027a8; end: 1027027e7;  */

void FUN_1027027a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad12c0;
  func_0x000107c61520(&UNK_10dad12c0,&UNK_11053e1c0);
  puRam0000000112eb9958 = puVar1;
  return;
}



/* Entry: 1027027e8; end: 1027027eb;  */

void FUN_1027027e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad1278;
  func_0x000107c61520(&UNK_10dad1278,&UNK_11053e1c0);
  puRam0000000112eb9960 = puVar1;
  return;
}



/* Entry: 1027027ec; end: 10270282b;  */

void FUN_1027027ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad1278;
  func_0x000107c61520(&UNK_10dad1278,&UNK_11053e1c0);
  puRam0000000112eb9960 = puVar1;
  return;
}



/* Entry: 10270282c; end: 102702997;  */

int FUN_10270282c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1027028a8;
        goto LAB_10270288c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10270288c:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_1027028a8:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102702998; end: 1027029a7; -[MapViewLifecycleServices broadcasterFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102702998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb9ac0));
  return;
}



/* Entry: 1027029a8; end: 102702a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027029a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb9ac0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102702a40; end: 102702a9f; -[MapViewLifecycleServices init] */

void FUN_102702a40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapViewLifecycleServices.MapViewLifecycleServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102702a6c);
  (*pcVar1)();
}



/* Entry: 102702aa0; end: 102702aaf; -[MapViewLifecycleServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102702aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb9ac0));
  return;
}



/* Entry: 102702ab0; end: 102702acf;  */

void FUN_102702ab0(void)

{
  func_0x000107c61168(&PTR_PTR_11285c190);
  return;
}



/* Entry: 102702ad0; end: 102702b43;  */

void FUN_102702ad0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102702b44; end: 102702b53; -[_TtC18MapDataBridgeScope22FullMapDataBridgeScope metadataManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102702b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb9b90));
  return;
}



/* Entry: 102702b54; end: 102702beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102702b54(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb9b90) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102702bec; end: 102702c43; -[_TtC18MapDataBridgeScope22FullMapDataBridgeScope initWithMetadataManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102702bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112eb9b90) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102702c44; end: 102702ca3; -[_TtC18MapDataBridgeScope22FullMapDataBridgeScope init] */

void FUN_102702c44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapDataBridgeScope.FullMapDataBridgeScope",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102702c70);
  (*pcVar1)();
}



/* Entry: 102702ca4; end: 102702cb3; -[_TtC18MapDataBridgeScope22FullMapDataBridgeScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102702ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb9b90));
  return;
}



/* Entry: 102702cb4; end: 102702cd3;  */

void FUN_102702cb4(void)

{
  func_0x000107c61168(&PTR_PTR_11285c250);
  return;
}



/* Entry: 102702cd4; end: 102702ce3;  */

undefined1  [16] FUN_102702cd4(void)

{
  return ZEXT816(0x11053e3d0);
}



/* Entry: 102702ce4; end: 102702cf3; -[_TtC24MapExternalMusicServices24MapExternalMusicServices connectedProviderResolverObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102702ce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb9bf0));
  return;
}



/* Entry: 102702cf4; end: 102702d03; -[_TtC24MapExternalMusicServices24MapExternalMusicServices nowPlayingServiceObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102702cf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb9bf8));
  return;
}



/* Entry: 102702d04; end: 102702d13; -[_TtC24MapExternalMusicServices24MapExternalMusicServices trackSavingServiceObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102702d04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb9c00));
  return;
}



/* Entry: 102702d14; end: 102702df3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102702d14(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 0x48))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return uVar1;
}



/* Entry: 102702df4; end: 102702fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102702df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb9bf0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb9bf8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb9c00) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb9c08) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eb9c10) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eb9c18) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112eb9c20) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112eb9c28) = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102702fac; end: 10270300b; -[_TtC24MapExternalMusicServices24MapExternalMusicServices init] */

void FUN_102702fac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapExternalMusicServices.MapExternalMusicServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102702fd8);
  (*pcVar1)();
}



/* Entry: 10270300c; end: 1027030a3; -[_TtC24MapExternalMusicServices24MapExternalMusicServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102703058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102703078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010270305c) */
/* WARNING: Removing unreachable block (ram,0x00010270307c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10270300c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb9bf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb9bf8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb9c00));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb9c08));
  return;
}



/* Entry: 1027030a4; end: 1027030fb;  */

void FUN_1027030a4(void)

{
  func_0x000107c61168(&PTR_PTR_11285c310);
  return;
}



/* Entry: 1027030fc; end: 102703267;  */

long * FUN_1027030fc(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar7 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar7;
    lVar7 = param_2[2];
    lVar6 = param_2[3];
    param_1[2] = lVar7;
    param_1[3] = lVar6;
    lVar9 = param_2[4];
    param_1[4] = lVar9;
    lVar10 = (long)*(int *)(param_3 + 0x1c);
    lVar6 = 0;
    func_0x000107c5ede0();
    lVar11 = *(long *)(lVar6 + -8);
    pcVar12 = *(code **)(lVar11 + 0x30);
    func_0x000107c61434(lVar7);
    func_0x000107c61434(lVar9);
    lVar7 = (long)param_2 + lVar10;
    (*pcVar12)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar6);
      (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar10,(long)param_2 + lVar10,
                          *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x24);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar1 = *puVar2;
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102703268; end: 1027032ff;  */

/* WARNING: Possible PIC construction at 0x000102703288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027032dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010270328c) */
/* WARNING: Removing unreachable block (ram,0x0001027032c0) */
/* WARNING: Removing unreachable block (ram,0x0001027032d0) */
/* WARNING: Removing unreachable block (ram,0x0001027032e0) */

void FUN_102703268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 102703300; end: 10270343f;  */

undefined8 * FUN_102703300(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  
  uVar10 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  uVar10 = param_2[2];
  uVar6 = param_2[3];
  param_1[2] = uVar10;
  param_1[3] = uVar6;
  uVar6 = param_2[4];
  param_1[4] = uVar6;
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar4 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar6);
  lVar5 = (long)param_2 + lVar7;
  (*pcVar9)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar10 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar10 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *puVar1 = *param_2;
  func_0x000107c61434();
  func_0x000107c61434(uVar10);
  return param_1;
}



/* Entry: 102703440; end: 102703603;  */

undefined8 * FUN_102703440(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar6 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  param_1[3] = param_2[3];
  uVar6 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar4 = (long)param_1 + lVar7;
  (*pcVar9)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar7;
  (*pcVar9)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x18))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
      goto LAB_10270355c;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar3);
    goto LAB_10270355c;
  }
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                      *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
LAB_10270355c:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar6 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *puVar1 = uVar6;
  return param_1;
}



/* Entry: 102703604; end: 102703707;  */

undefined8 * FUN_102703604(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  uVar8 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar8;
  uVar8 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar8;
  lVar6 = (long)*(int *)(param_3 + 0x1c);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar4 + -8);
  lVar5 = (long)param_2 + lVar6;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x24);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar2 = *param_2;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 102703708; end: 10270388b;  */

undefined8 * FUN_102703708(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar3);
  uVar3 = param_2[4];
  uVar4 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  func_0x000107c6142c(uVar4);
  lVar8 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar5 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = (long)param_1 + lVar8;
  (*pcVar10)(lVar6,1,lVar5);
  lVar7 = (long)param_2 + lVar8;
  (*pcVar10)(lVar7,1,lVar5);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
      goto LAB_102703804;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,lVar5);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
    goto LAB_102703804;
  }
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                      *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
LAB_102703804:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar3 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar3 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 10270388c; end: 1027038a3;  */

void FUN_10270388c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1027038a4; end: 102703933;  */

void FUN_1027038a4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_50 = &UNK_10dad14e8;
  puStack_48 = &UNK_10dad14e8;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10dad14e8;
    puStack_30 = &UNK_10dad14e8;
    puStack_28 = &UNK_10dad1500;
    func_0x000107c6153c(param_1,0x100,7,&puStack_58,param_1 + 0x10);
  }
  return;
}



/* Entry: 102703934; end: 102703947;  */

bool FUN_102703934(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102703948; end: 1027039f3;  */

void FUN_102703948(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1027039f4; end: 102703a1b;  */

void FUN_1027039f4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = 0;
  *(bool *)(param_1 + 1) = lVar1 != 0;
  return;
}



/* Entry: 102703a1c; end: 102703a5b;  */

void FUN_102703a1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb9d00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad1520;
  func_0x000107c61520(&UNK_10dad1520,&UNK_11053e480);
  puRam0000000112eb9d00 = puVar1;
  return;
}



/* Entry: 102703a5c; end: 102703a6b;  */

undefined1  [16] FUN_102703a5c(void)

{
  return ZEXT816(0x11053e480);
}



/* Entry: 102703a6c; end: 102703c6f;  */

void FUN_102703a6c(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 102703c70; end: 102703c7f; -[SCMapExternalMusicTrack provider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102703c70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112eb9d08);
}



/* Entry: 102703c80; end: 102703c8b; -[SCMapExternalMusicTrack title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102703c80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb9d10);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eb9d10))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102703c8c; end: 102703c97; -[SCMapExternalMusicTrack artist] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102703c8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb9d18);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eb9d18))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102703c98; end: 102703d5f; -[SCMapExternalMusicTrack albumArtURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102703c98(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000100029394(param_1 + _DAT_113804750,puVar4);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102703d60; end: 102703d6b; -[SCMapExternalMusicTrack isrc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102703d60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113804758);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113804758))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102703d6c; end: 102703d77; -[SCMapExternalMusicTrack providerTrackID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102703d6c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113804760);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113804760))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102703d78; end: 102703dbf;  */

void FUN_102703d78(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102703dc0; end: 102703dcf; -[SCMapExternalMusicTrack trackID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102703dc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113804768));
  return;
}



/* Entry: 102703dd0; end: 102703fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102703dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb9d08) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb9d10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb9d18);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000100029394(param_6,unaff_x20 + _DAT_113804750);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113804758);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113804760);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113804768) = param_11;
  puVar2 = auStack_70;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x0001000293e4(param_6);
  return puVar2;
}



/* Entry: 102703ff0; end: 1027041c3; -[SCMapExternalMusicTrack initWithProvider:title:artist:albumArtURL:isrc:providerTrackID:trackID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102703ff0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  undefined1 *puVar9;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  uStack_78 = param_9;
  lVar2 = param_1;
  uStack_88 = param_3;
  func_0x000107c614f0();
  lVar3 = 0x112d36580;
  puVar5 = &UNK_10d9016d0;
  lStack_80 = lVar2;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_90 + -extraout_x8;
  func_0x000107c5faec();
  puVar6 = puVar5;
  func_0x000107c5faec();
  if (param_6 == 0) {
    lVar3 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar9,param_6);
    lVar3 = 0;
    func_0x000107c5ede0();
  }
  uVar7 = (ulong)(param_6 == 0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar9,uVar7,1);
  func_0x000107c5faec();
  uVar8 = uVar7;
  func_0x000107c5faec();
  *(undefined8 *)(param_1 + _DAT_112eb9d08) = uStack_88;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb9d10);
  *puVar1 = param_4;
  puVar1[1] = puVar5;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb9d18);
  *puVar1 = param_5;
  puVar1[1] = puVar6;
  func_0x000100029394(puVar9,param_1 + _DAT_113804750);
  puVar1 = (undefined8 *)(param_1 + _DAT_113804758);
  *puVar1 = param_7;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(param_1 + _DAT_113804760);
  *puVar1 = param_8;
  puVar1[1] = uVar8;
  *(undefined8 *)(param_1 + _DAT_113804768) = uStack_78;
  puVar5 = PTR_s_init_1125d9248;
  lStack_68 = lStack_80;
  lStack_70 = param_1;
  func_0x000107c61174();
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar5);
  func_0x0001000293e4(puVar9);
  return plVar4;
}



/* Entry: 1027041c4; end: 1027041f3;  */

void FUN_1027041c4(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_1027041f4(param_1);
  return;
}



/* Entry: 1027041f4; end: 102704383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027041f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  puVar8 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  uVar4 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_112eb9d08) = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb9d10);
  uVar3 = param_1[2];
  uVar5 = param_1[3];
  *puVar1 = uVar4;
  puVar1[1] = uVar3;
  uVar9 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb9d18);
  *puVar1 = uVar5;
  puVar1[1] = uVar9;
  lVar6 = 0;
  func_0x0001027030c4();
  func_0x000100029394((long)param_1 + (long)*(int *)(lVar6 + 0x1c),unaff_x20 + _DAT_113804750);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  uVar4 = puVar1[1];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113804758);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  uVar5 = puVar1[1];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113804760);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  if (*(char *)((long)param_1 + (long)*(int *)(lVar6 + 0x28) + 8) == '\x01') {
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x000107c490d8();
  }
  *(undefined **)(unaff_x20 + _DAT_113804768) = puVar7;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  FUN_102704384(param_1);
  return puVar8;
}



/* Entry: 102704384; end: 1027043bf;  */

undefined8 FUN_102704384(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001027030c4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1027043c0; end: 1027043c3; -[SCMapExternalMusicTrack copyWithZone:] */

void FUN_1027043c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1027043c4; end: 10270443b; -[SCMapExternalMusicTrack description] */

void FUN_1027043c4(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x0001027030c4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c61174(param_1);
  FUN_10270443c(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_102704384(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10270443c; end: 102704583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10270443c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eb9d10);
  uVar4 = ((undefined8 *)(param_2 + _DAT_112eb9d10))[1];
  *param_1 = *(undefined8 *)(param_2 + _DAT_112eb9d08);
  param_1[1] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + _DAT_112eb9d18);
  uVar5 = ((undefined8 *)(param_2 + _DAT_112eb9d18))[1];
  param_1[2] = uVar4;
  param_1[3] = uVar3;
  param_1[4] = uVar5;
  lVar8 = _DAT_113804750;
  lVar7 = 0;
  func_0x0001027030c4();
  func_0x000100029394(param_2 + lVar8,(long)param_1 + (long)*(int *)(lVar7 + 0x1c));
  uVar3 = ((undefined8 *)(param_2 + _DAT_113804758))[1];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x20));
  *puVar1 = *(undefined8 *)(param_2 + _DAT_113804758);
  puVar1[1] = uVar3;
  uVar6 = ((undefined8 *)(param_2 + _DAT_113804760))[1];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24));
  *puVar1 = *(undefined8 *)(param_2 + _DAT_113804760);
  puVar1[1] = uVar6;
  plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x28));
  lVar8 = *(long *)(param_2 + _DAT_113804768);
  if (lVar8 == 0) {
    *plVar2 = 0;
    *(undefined1 *)(plVar2 + 1) = 1;
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar6);
  }
  else {
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar6);
    func_0x000107c5d38c();
    *plVar2 = lVar8;
    *(undefined1 *)(plVar2 + 1) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102704584; end: 1027045ff; -[SCMapExternalMusicTrack init] */

void FUN_102704584(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MapExternalMusicServices/MapExternalMusicTrackWrapper.swift",0x3b,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027045cc);
  (*pcVar1)();
}



/* Entry: 102704600; end: 102704687; -[SCMapExternalMusicTrack .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102704600(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb9d10 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb9d18 + 8));
  func_0x0001000293e4(param_1 + _DAT_113804750);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_113804758 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_113804760 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113804768));
  return;
}



/* Entry: 102704688; end: 10270468f;  */

void FUN_102704688(void)

{
  if (lRam0000000112eb9d48 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6ef818);
  return;
}



/* Entry: 102704690; end: 1027046c7;  */

void FUN_102704690(undefined8 param_1)

{
  if (lRam0000000112eb9d48 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6ef818);
  return;
}



/* Entry: 1027046c8; end: 10270475b;  */

void FUN_1027046c8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_50 = &UNK_10dad16d0;
  puStack_48 = &UNK_10dad16d0;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10dad16d0;
    puStack_30 = &UNK_10dad16d0;
    puStack_28 = &UNK_10dad16e8;
    func_0x000107c61630(param_1,0x100,7,&puStack_58,param_1 + 0x50);
  }
  return;
}



/* Entry: 10270475c; end: 10270476b; -[SCMapNowPlayingCalloutInfo userMusicProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10270475c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb9d58));
  return;
}



/* Entry: 10270476c; end: 1027047cb; -[SCMapNowPlayingCalloutInfo friendIdToTracks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10270476c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eb9d60);
  FUN_102704690(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5f9dc();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027047cc; end: 10270482f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027047cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb9d58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb9d60) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102704830; end: 10270491f; -[SCMapNowPlayingCalloutInfo initWithUserMusicProvider:friendIdToTracks:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102704830(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  uVar3 = 0;
  FUN_102704690(0);
  func_0x000107c5f9e8(param_4,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
  *(undefined8 *)(param_1 + _DAT_112eb9d58) = param_3;
  *(undefined8 *)(param_1 + _DAT_112eb9d60) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102704920; end: 102704923; -[SCMapNowPlayingCalloutInfo copyWithZone:] */

void FUN_102704920(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102704924; end: 102704963; -[SCMapNowPlayingCalloutInfo description] */

void FUN_102704924(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  func_0x000102704dc4();
  func_0x000107c6142c(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102704964; end: 1027049df; -[SCMapNowPlayingCalloutInfo init] */

void FUN_102704964(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MapExternalMusicServices/MapNowPlayingCalloutInfoWrapper.swift",0x3e,2,0x2a,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027049ac);
  (*pcVar1)();
}



/* Entry: 1027049e0; end: 102704a17; -[SCMapNowPlayingCalloutInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027049e0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb9d58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eb9d60));
  return;
}



/* Entry: 102704a18; end: 102705123;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102704a18(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  undefined *puVar12;
  long *plVar13;
  long extraout_x8;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lStack_f0;
  ulong *apuStack_e0 [3];
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar8 = unaff_x20;
  func_0x000107c614f0();
  lVar9 = 0;
  lStack_f0 = lVar8;
  func_0x0001027030c4();
  lStack_b8 = *(long *)(lVar9 + -8);
  lStack_b0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar8 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar18 = (undefined8 *)((long)&lStack_f0 + lVar8);
  *(undefined8 *)(unaff_x20 + _DAT_112eb9d58) = param_1;
  func_0x0001000285a8(0x112eb0b10,&UNK_10dac5360);
  lVar9 = param_2;
  func_0x000107c6048c();
  apuStack_e0[0] = (ulong *)(param_2 + 0x40);
  uVar14 = *apuStack_e0[0];
  uVar17 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar17 & 0x3f));
  }
  lStack_c8 = lVar9 + 0x40;
  func_0x000107c61174(param_1);
  lStack_a8 = param_2;
  func_0x000107c61434(param_2);
  lVar20 = 0;
  uVar16 = uVar15 & uVar14;
  lStack_c0 = lVar9;
  if ((uVar15 & uVar14) == 0) goto LAB_102704b38;
  do {
    uVar15 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
    uStack_a0 = uVar16 - 1 & uVar16;
    while( true ) {
      uVar15 = LZCOUNT(uVar15);
      uVar14 = uVar15 | lVar20 << 6;
      puVar1 = (undefined8 *)(*(long *)(lStack_a8 + 0x30) + uVar14 * 0x10);
      func_0x000102705188(*(long *)(lStack_a8 + 0x38) + *(long *)(lStack_b8 + 0x48) * uVar14,puVar18
                         );
      uStack_88 = *puVar1;
      uStack_90 = puVar1[1];
      lVar10 = 0;
      FUN_102704690();
      lStack_98 = lVar10;
      func_0x000107c610f8();
      lVar9 = lStack_b0;
      *(undefined8 *)(lVar10 + _DAT_112eb9d08) = *puVar18;
      uVar3 = *(undefined8 *)((long)apuStack_e0 + lVar8);
      puVar1 = (undefined8 *)(lVar10 + _DAT_112eb9d10);
      *puVar1 = *(undefined8 *)(&stack0xffffffffffffff18 + lVar8);
      puVar1[1] = uVar3;
      uVar4 = *(undefined8 *)((long)apuStack_e0 + lVar8 + 0x10);
      puVar1 = (undefined8 *)(lVar10 + _DAT_112eb9d18);
      *puVar1 = *(undefined8 *)((long)apuStack_e0 + lVar8 + 8);
      puVar1[1] = uVar4;
      func_0x000100029394((long)puVar18 + (long)*(int *)(lStack_b0 + 0x1c),lVar10 + _DAT_113804750);
      uVar19 = uStack_90;
      puVar1 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar9 + 0x20));
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar10 + _DAT_113804758);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar1 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar9 + 0x24));
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)(lVar10 + _DAT_113804760);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar1 = (undefined8 *)((long)puVar18 + (long)*(int *)(lVar9 + 0x28));
      if (*(char *)(puVar1 + 1) == '\x01') {
        func_0x000107c61434(uStack_90);
        func_0x000107c61434(uVar3);
        func_0x000107c61434(uVar4);
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar6);
        puVar11 = (ulong *)0x0;
      }
      else {
        apuStack_e0[2] = (ulong *)*puVar1;
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        uVar19 = uStack_90;
        apuStack_e0[1] = (ulong *)puVar12;
        func_0x000107c61434(uStack_90);
        func_0x000107c61434(uVar3);
        func_0x000107c61434(uVar4);
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar6);
        puVar11 = apuStack_e0[1];
        func_0x000107c490d8();
      }
      lVar9 = lStack_c0;
      *(ulong **)(lVar10 + _DAT_113804768) = puVar11;
      lStack_78 = lStack_98;
      plVar13 = &lStack_80;
      lStack_80 = lVar10;
      func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
      FUN_102704384(puVar18);
      uVar16 = (uVar15 & 0xffffffffffffffc0 | lVar20 << 6) >> 3;
      *(ulong *)(lStack_c8 + uVar16) = *(ulong *)(lStack_c8 + uVar16) | 1L << (uVar15 & 0x3f);
      puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar14 * 0x10);
      *puVar1 = uStack_88;
      puVar1[1] = uVar19;
      *(long **)(*(long *)(lVar9 + 0x38) + uVar14 * 8) = plVar13;
      if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102704dc4);
        (*pcVar7)();
      }
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
      uVar16 = uStack_a0;
      if (uStack_a0 != 0) break;
LAB_102704b38:
      do {
        lVar10 = lVar20 + 1;
        if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102704dc0);
          (*pcVar7)();
        }
        if ((long)(uVar17 + 0x3f >> 6) <= lVar10) {
          func_0x000107c6142c(lStack_a8);
          *(long *)(unaff_x20 + _DAT_112eb9d60) = lVar9;
          lStack_68 = lStack_f0;
          func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
          return;
        }
        uVar14 = apuStack_e0[0][lVar10];
        lVar20 = lVar20 + 1;
      } while (uVar14 == 0);
      uVar15 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
      uStack_a0 = uVar14 - 1 & uVar14;
      lVar20 = lVar10;
    }
  } while( true );
}



/* Entry: 102705124; end: 102705143;  */

void FUN_102705124(void)

{
  func_0x000107c61168(&PTR_PTR_11285c508);
  return;
}



/* Entry: 102705144; end: 1027051cb;  */

undefined8 FUN_102705144(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001027030c4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1027051cc; end: 1027052a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027051cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10270570c();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112eb9d98) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112eb9da0) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027052a8);
  (*pcVar1)();
}



/* Entry: 1027052a8; end: 102705307; -[_TtC23FullMapScopeGraphBridge38FullMapScopeGraphBridgeSaberEntryPoint init] */

void FUN_1027052a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FullMapScopeGraphBridge.FullMapScopeGraphBridgeSaberEntryPoint",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027052d4);
  (*pcVar1)();
}



/* Entry: 102705308; end: 10270533f; -[_TtC23FullMapScopeGraphBridge38FullMapScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102705324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102705328) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102705308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb9d98));
  return;
}



/* Entry: 102705340; end: 102705367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102705340(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112eb9da0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112eb9d98));
  return;
}



/* Entry: 102705368; end: 102705387;  */

void FUN_102705368(void)

{
  func_0x000107c61168(&PTR_PTR_11285c5d8);
  return;
}



/* Entry: 102705388; end: 1027053eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102705388(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112eb9ef0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1027053ec; end: 1027053f3;  */

void FUN_1027053ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1027053f4; end: 102705493;  */

void FUN_1027053f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102705494; end: 1027054b3;  */

void FUN_102705494(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1027054b4; end: 10270553b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027054b4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb9ea0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112eb9ea8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10270553c);
  (*pcVar2)();
}



/* Entry: 10270553c; end: 102705623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10270553c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb9ea0);
  *(undefined **)(unaff_x20 + _DAT_112eb9ea0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eb9ea8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112eb9ea8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11053e718;
  func_0x000107c613fc(&UNK_11053e718,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102705628,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102705624; end: 10270562f;  */

void FUN_102705624(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}


