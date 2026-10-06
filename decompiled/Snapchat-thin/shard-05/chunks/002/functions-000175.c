/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c2cae4; end: 103c2cb03;  */

void FUN_103c2cae4(void)

{
  undefined1 *unaff_x20;
  
  FUN_103c2cb04(*unaff_x20,FUN_103c2cbb0);
  return;
}



/* Entry: 103c2cb04; end: 103c2cb9b;  */

void FUN_103c2cb04(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000103c2e1d4();
  func_0x000107c606a8();
  return;
}



/* Entry: 103c2cb9c; end: 103c2cbaf;  */

void FUN_103c2cb9c(char param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 auStack_68 [72];
  
  uVar1 = 0xd000000000000022;
  func_0x000107c6068c(auStack_68,0);
  if (param_1 == '\0') {
    pcVar2 = "erSessionServiceRegistry";
  }
  else {
    uVar1 = 0xd000000000000028;
    pcVar2 = "ionServiceRegistry";
    if (param_1 != '\x01') {
      uVar1 = 0xd000000000000022;
      pcVar2 = "stryModuleFactory";
    }
  }
  func_0x000107c5fb58(auStack_68,uVar1,(ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c2cbb0; end: 103c2cda3;  */

/* WARNING: Possible PIC construction at 0x000103c2ce98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c2ce3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c2ce9c) */

void FUN_103c2cbb0(byte *param_1,ulong param_2,byte *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x30;
  undefined1 auStack_90 [80];
  
  puVar2 = &stack0xffffffffffffffe0;
  pbVar8 = (byte *)0xd000000000000012;
  pbVar5 = (byte *)0xd000000000000010;
  pbVar11 = (byte *)0x10f1aff70;
  pcVar7 = (char *)(param_2 & 0xff);
  pbVar9 = &UNK_10dc68064;
  pbVar10 = (byte *)((ulong)(byte)pcVar7[0x10dc68064] * 4 + 0x103c2cbf4);
  puVar3 = &stack0xffffffffffffffe0;
  puVar1 = &stack0xffffffffffffffe0;
  pbVar6 = pbVar5;
  switch(pcVar7) {
  case (char *)0x0:
    break;
  default:
    pcVar7 = "cationFailed";
  case (char *)0xe4:
  case (char *)0xf2:
    pcVar7 = pcVar7 + 0xfb0;
code_r0x000103c2cbfc:
code_r0x000103c2cc1c:
    pbVar11 = (byte *)(pcVar7 + -0x20);
code_r0x000103c2cc20:
    pbVar5 = (byte *)0x12;
    goto code_r0x000103c2cc24;
  case (char *)0x2:
  case (char *)0xe2:
    pcVar7 = "PlatformCallingDependencies";
  case (char *)0x1c:
  case (char *)0xfb:
    pbVar11 = (byte *)(pcVar7 + -0x20);
    pbVar5 = (byte *)0xd00000000000001b;
    break;
  case (char *)0x3:
  case (char *)0x5:
  case (char *)0xb:
    pcVar7 = "cationFailed";
  case (char *)0x1d:
  case (char *)0x27:
  case (char *)0x31:
    pcVar7 = pcVar7 + 0xff0;
    goto code_r0x000103c2cc1c;
  case (char *)0x6:
    goto code_r0x000103c2cc4c;
  case (char *)0x7:
  case (char *)0x22:
  case (char *)0x2c:
  case (char *)0x36:
    goto code_r0x000103c2cc34;
  case (char *)0x9:
  case (char *)0x24:
  case (char *)0x2e:
  case (char *)0x38:
    goto code_r0x000103c2cc30;
  case (char *)0xa:
  case (char *)0x17:
  case (char *)0x20:
  case (char *)0x2a:
  case (char *)0x34:
    goto code_r0x000103c2cc2c;
  case (char *)0xd:
    pcVar7 = (char *)pbVar5;
  case (char *)0xcc:
    pbVar5 = (byte *)0x72657355;
code_r0x000103c2cca0:
    pbVar5 = (byte *)((ulong)pbVar5 | 0x674100000000);
code_r0x000103c2cca4:
    pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffffffff | 0x6e65000000000000);
    pcVar7 = (char *)((ulong)pcVar7 & 0xff);
    pbVar8 = &DAT_10dc68000;
code_r0x000103c2ccb0:
    pbVar8 = pbVar8 + 0x68;
code_r0x000103c2ccb4:
                    /* WARNING: Could not recover jumptable at 0x000103c2ccc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)pbVar8[(long)pcVar7] * 4 + 0x103c2ccc4))(param_1,pbVar5);
    return;
  case (char *)0xe:
    goto code_r0x000103c2ccb0;
  case (char *)0xf:
    goto code_r0x000103c2cc48;
  case (char *)0x10:
    goto code_r0x000103c2cce0;
  case (char *)0x11:
    goto code_r0x000103c2cd18;
  case (char *)0x12:
    pbVar11 = (byte *)0x800000010efb6320;
    pbVar5 = (byte *)0xd000000000000016;
    goto code_r0x000103c2cce0;
  case (char *)0x13:
    pcVar7 = pcVar7 + -0x20;
    goto code_r0x000103c2cd18;
  case (char *)0x14:
    goto code_r0x000103c2cd50;
  case (char *)0x15:
    goto code_r0x000103c2cc70;
  case (char *)0x16:
  case (char *)0x4c:
  case (char *)0x7c:
  case (char *)0xac:
  case (char *)0x5e:
  case (char *)0x65:
  case (char *)0x8f:
  case (char *)0xb8:
  case (char *)0xbf:
    pcVar7 = (char *)pbVar5;
code_r0x000103c2cd44:
    pbVar5 = (byte *)0x22;
code_r0x000103c2cd48:
    pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffffffff | 0xd000000000000000);
    in_ZR = ((ulong)pcVar7 & 0xff) == 0;
    pcVar7 = (char *)((ulong)pcVar7 & 0xffffffff);
code_r0x000103c2cd50:
    if ((bool)in_ZR) {
code_r0x000103c2cd80:
      pcVar7 = "re";
code_r0x000103c2cd84:
      pcVar7 = pcVar7 + 0x500;
code_r0x000103c2cd88:
      pbVar11 = (byte *)(pcVar7 + -0x20);
    }
    else {
      pbVar8 = (byte *)0x10f1b04b0;
      pbVar9 = pbVar5 + 6;
      pbVar10 = (byte *)0x10f1b0480;
      in_ZR = (int)pcVar7 == 1;
      pbVar6 = pbVar5;
code_r0x000103c2cd74:
      pbVar5 = pbVar9;
      if (!(bool)in_ZR) {
        pbVar5 = pbVar6;
      }
code_r0x000103c2cd78:
      pbVar11 = pbVar8;
      if (!(bool)in_ZR) {
        pbVar11 = pbVar10;
      }
    }
code_r0x000103c2cd8c:
    func_0x000107c5fb58(param_1,pbVar5,(ulong)pbVar11 | 0x8000000000000000);
    param_1 = (byte *)((ulong)pbVar11 | 0x8000000000000000);
code_r0x000103c2cd98:
    pbVar11 = param_1;
    goto code_r0x000107c6142c;
  case (char *)0x18:
    goto code_r0x000103c2cc64;
  case (char *)0x19:
    pcVar7 = (char *)0x12;
  case (char *)0x54:
  case (char *)0x84:
    pbVar5 = (byte *)(((ulong)pcVar7 | 0xd000000000000000) + 0xb);
    goto code_r0x000103c2cd1c;
  case (char *)0x1a:
    goto code_r0x000103c2cc20;
  case (char *)0x1b:
    goto code_r0x000103c2cca4;
  case (char *)0x1f:
  case (char *)0x29:
  case (char *)0x33:
  case (char *)0x48:
  case (char *)0x78:
  case (char *)0xa0:
  case (char *)0xd0:
    goto code_r0x000103c2cc24;
  case (char *)0x21:
  case (char *)0x2b:
  case (char *)0x35:
    goto code_r0x000103c2cc1c;
  case (char *)0x25:
  case (char *)0x2f:
  case (char *)0x39:
    goto code_r0x000103c2cc60;
  case (char *)0x26:
  case (char *)0x30:
  case (char *)0x3a:
  case (char *)0xf8:
    goto code_r0x000103c2cc48;
  case (char *)0x44:
    goto code_r0x000103c2ce0c;
  case (char *)0x45:
  case (char *)0x75:
  case (char *)0x9d:
  case (char *)0xcd:
    goto code_r0x000103c2cc38;
  case (char *)0x46:
  case (char *)0x76:
  case (char *)0x9e:
  case (char *)0xce:
    FUN_103c2d688(param_1,0xd000000000000010,FUN_103c29a4c,&UNK_1106ecc48);
    if (unaff_x21 == 0) {
      *pcVar7 = (byte)param_1;
    }
    return;
  case (char *)0x4d:
  case (char *)0x7d:
  case (char *)0x87:
  case (char *)0xad:
  case (char *)0x53:
  case (char *)0x83:
  case (char *)0xb3:
code_r0x000103c2cdac:
    pbVar5 = (byte *)(ulong)*unaff_x20;
code_r0x000103c2cdb0:
    param_3 = (byte *)0x103c2c000;
code_r0x000103c2cdb4:
    func_0x000103c2ceb4(param_1,pbVar5,param_3 + 0xbb0);
code_r0x000103c2cdbc:
code_r0x000103c2cdc0:
    return;
  case (char *)0x4e:
  case (char *)0x7e:
  case (char *)0x8a:
  case (char *)0xae:
    goto code_r0x000103c2cd78;
  case (char *)0x4f:
  case (char *)0x56:
  case (char *)0x7f:
  case (char *)0x8b:
  case (char *)0xaf:
    puVar2 = auStack_90;
  case (char *)0x58:
  case (char *)0x68:
  case (char *)0x92:
  case (char *)0xc2:
    *(undefined1 **)(puVar2 + 0x60) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar2 + 0x68) = unaff_x30;
    puVar3 = puVar2;
    unaff_x20 = pbVar5;
code_r0x000103c2cdd8:
    pbVar11 = (byte *)0xd000000000000022;
    func_0x000107c6068c(puVar3 + 8);
    pcVar7 = (char *)(ulong)((uint)unaff_x20 & 0xff);
    if (((ulong)unaff_x20 & 0xff) == 0) {
      pbVar9 = pbVar11;
      pbVar8 = (byte *)0x10f1b04e0;
    }
    else {
      pbVar8 = (byte *)0x10f1b04b0;
      pbVar9 = (byte *)0xd000000000000028;
      pbVar10 = (byte *)0x10f1b0480;
      puVar1 = puVar3;
code_r0x000103c2ce0c:
      puVar3 = puVar1;
      if ((int)pcVar7 != 1) {
        pbVar9 = pbVar11;
        pbVar8 = pbVar10;
      }
    }
    func_0x000107c5fb58(puVar3 + 8,pbVar9,(ulong)pbVar8 | 0x8000000000000000);
    pbVar11 = (byte *)((ulong)pbVar8 | 0x8000000000000000);
    goto code_r0x000107c6142c;
  case (char *)0x50:
  case (char *)0x80:
  case (char *)0xb0:
    goto code_r0x000103c2cd8c;
  case (char *)0x51:
  case (char *)0x63:
  case (char *)0x81:
  case (char *)0x8d:
  case (char *)0xb1:
  case (char *)0xbd:
    goto code_r0x000103c2cdb0;
  case (char *)0x52:
  case (char *)0x5d:
  case (char *)0x67:
  case (char *)0x82:
  case (char *)0x91:
  case (char *)0xb2:
  case (char *)0xb7:
  case (char *)0xc1:
    goto code_r0x000103c2cdbc;
  case (char *)0x55:
  case (char *)0x6a:
  case (char *)0x89:
  case (char *)0x94:
  case (char *)0xc4:
    goto code_r0x000103c2cd80;
  case (char *)0x57:
  case (char *)0x62:
  case (char *)0x69:
  case (char *)0x88:
  case (char *)0x8c:
  case (char *)0x93:
  case (char *)0xbc:
  case (char *)0xc3:
    goto code_r0x000103c2cd98;
  case (char *)0x59:
  case (char *)0x5c:
  case (char *)0x5f:
  case (char *)0x66:
  case (char *)0x6b:
  case (char *)0x6d:
  case (char *)0x90:
  case (char *)0x95:
  case (char *)0x97:
  case (char *)0xb6:
  case (char *)0xb9:
  case (char *)0xc0:
  case (char *)0xc5:
  case (char *)0xc7:
    goto code_r0x000103c2cd88;
  case (char *)0x5a:
  case (char *)0xb4:
    goto code_r0x000103c2cd48;
  case (char *)0x5b:
  case (char *)0x60:
  case (char *)0x61:
  case (char *)0xb5:
  case (char *)0xba:
  case (char *)0xbb:
    goto code_r0x000103c2cdc0;
  case (char *)0x64:
  case (char *)0x8e:
  case (char *)0xbe:
    goto code_r0x000103c2cdac;
  case (char *)0x6c:
  case (char *)0x96:
  case (char *)0xc6:
    goto code_r0x000103c2cd20;
  case (char *)0x6e:
  case (char *)0x98:
  case (char *)0xc8:
    goto code_r0x000103c2cdd8;
  case (char *)0x74:
    goto code_r0x000103c2cd84;
  case (char *)0x85:
  case (char *)0x86:
    goto code_r0x000103c2cdb4;
  case (char *)0x9c:
    goto code_r0x000103c2cd1c;
  case (char *)0xd4:
                    /* WARNING (jumptable): Read-only address (ram,0x00010f1aff70) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x00010f1aff78) is written */
                    /* WARNING: Read-only address (ram,0x00010f1aff70) is written */
                    /* WARNING: Read-only address (ram,0x00010f1aff78) is written */
    s_ValdiCallingDependenciesImpl_Val_10f1aff40._48_8_ = param_1;
    s_ValdiCallingDependenciesImpl_Val_10f1aff40[0x38] = '\x10';
    s_ValdiCallingDependenciesImpl_Val_10f1aff40[0x39] = '\0';
    s_ValdiCallingDependenciesImpl_Val_10f1aff40[0x3a] = '\0';
    s_ValdiCallingDependenciesImpl_Val_10f1aff40[0x3b] = '\0';
    s_ValdiCallingDependenciesImpl_Val_10f1aff40[0x3c] = '\0';
    s_ValdiCallingDependenciesImpl_Val_10f1aff40[0x3d] = '\0';
    s_ValdiCallingDependenciesImpl_Val_10f1aff40[0x3e] = '\0';
    s_ValdiCallingDependenciesImpl_Val_10f1aff40[0x3f] = -0x30;
    return;
  case (char *)0xd5:
  case (char *)0xe9:
  case (char *)0xfd:
    goto code_r0x000103c2cd24;
  case (char *)0xd6:
  case (char *)0xea:
  case (char *)0xfe:
    goto code_r0x000107c6142c;
  case (char *)0xd7:
  case (char *)0xeb:
  case (char *)0xff:
    goto code_r0x000103c2cbfc;
  case (char *)0xd8:
    goto code_r0x000103c2cd44;
  case (char *)0xd9:
    goto code_r0x000103c2cca0;
  case (char *)0xda:
    func_0x000107c6068c(&stack0xffffffffffffffe8);
    func_0x000103c2e1d4();
  case (char *)0xfc:
    func_0x000107c606a8();
    return;
  case (char *)0xe8:
    FUN_103c2d064();
                    /* WARNING (jumptable): Read-only address (ram,0x00010f1aff70) is written */
                    /* WARNING: Read-only address (ram,0x00010f1aff70) is written */
                    /* WARNING: Read-only address (ram,0x00010f1aff71) is written */
    s_ValdiCallingDependenciesImpl_Val_10f1aff40[0x30] = (char)param_1;
    return;
  case (char *)0xec:
    goto code_r0x000103c2ccb4;
  case (char *)0xed:
    goto code_r0x000103c2cd74;
  case (char *)0xee:
    if (puRam0000000112ff9750 != (undefined *)0x0) {
      builtin_strncpy("nciesServiceProvider","nciesServiceProv",0x10);
      return;
    }
    puVar4 = &UNK_10dc681a0;
    func_0x000107c61520(&UNK_10dc681a0,&UNK_1106ecc48);
    puRam0000000112ff9750 = puVar4;
    return;
  case (char *)0xef:
    func_0x000107c61520(param_1,0xd000000000000c58);
    pbRam0000000112ff9748 = param_1;
    return;
  case (char *)0xf9:
    goto code_r0x000103c2cc74;
  case (char *)0xfa:
    func_0x000107c606a8();
    return;
  }
  goto code_r0x000103c2cc28;
code_r0x000103c2cd18:
  pbVar11 = (byte *)((ulong)pcVar7 | 0x8000000000000000);
  goto code_r0x000103c2cd1c;
code_r0x000103c2cce0:
code_r0x000103c2cd1c:
  param_3 = pbVar11;
  pbVar11 = param_3;
code_r0x000103c2cd20:
  func_0x000107c5fb58(param_1,pbVar5,param_3);
code_r0x000103c2cd24:
  goto code_r0x000107c6142c;
code_r0x000103c2cc48:
code_r0x000103c2cc4c:
  unaff_x20 = pbVar5;
  FUN_103c2d388(0xd000000000000010);
  param_3 = pbVar5;
  pbVar11 = param_1;
code_r0x000103c2cc60:
  param_1 = pbVar11;
code_r0x000103c2cc64:
  func_0x000107c5fb58(param_1,param_3,unaff_x20);
code_r0x000103c2cc70:
  param_1 = unaff_x20;
code_r0x000103c2cc74:
  pbVar11 = param_1;
  goto code_r0x000107c6142c;
code_r0x000103c2cc24:
  pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffffffff | 0xd000000000000000);
code_r0x000103c2cc28:
  param_3 = (byte *)((ulong)pbVar11 | 0x8000000000000000);
code_r0x000103c2cc2c:
  func_0x000107c5fb58(param_1,pbVar5,param_3);
code_r0x000103c2cc30:
  param_1 = (byte *)((ulong)pbVar11 | 0x8000000000000000);
code_r0x000103c2cc34:
code_r0x000103c2cc38:
  pbVar11 = param_1;
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pbVar11);
  return;
}



/* Entry: 103c2cda4; end: 103c2cdc3;  */

void FUN_103c2cda4(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000103c2ceb4(param_1,*unaff_x20,FUN_103c2cbb0);
  return;
}



/* Entry: 103c2cdc4; end: 103c2cf47;  */

void FUN_103c2cdc4(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 auStack_68 [72];
  
  uVar1 = 0xd000000000000022;
  func_0x000107c6068c(auStack_68);
  if (param_2 == '\0') {
    pcVar2 = "erSessionServiceRegistry";
  }
  else {
    uVar1 = 0xd000000000000028;
    pcVar2 = "ionServiceRegistry";
    if (param_2 != '\x01') {
      uVar1 = 0xd000000000000022;
      pcVar2 = "stryModuleFactory";
    }
  }
  func_0x000107c5fb58(auStack_68,uVar1,(ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c2cf48; end: 103c2cf7f;  */

void FUN_103c2cf48(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_103c2d688(param_2,param_3,FUN_103c29a4c,&UNK_1106ecc48);
  if (unaff_x21 == 0) {
    *param_1 = (char)param_2;
  }
  return;
}



/* Entry: 103c2cf80; end: 103c2cfa3;  */

void FUN_103c2cf80(undefined8 *param_1,undefined8 param_2)

{
  FUN_103c2ca44();
  *param_1 = param_2;
  return;
}



/* Entry: 103c2cfa4; end: 103c2d063;  */

void FUN_103c2cfa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68228;
  func_0x000107c61520(&UNK_10dc68228,&UNK_1106ecc48);
  puRam0000000112ff9748 = puVar1;
  return;
}



/* Entry: 103c2d064; end: 103c2d0bf;  */

ulong FUN_103c2d064(ulong param_1,undefined8 param_2)

{
  func_0x000103c2e1b0();
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 103c2d0c0; end: 103c2d0eb;  */

void FUN_103c2d0c0(void)

{
  func_0x0001000285a8(0x112ff9818,&UNK_10dc680d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 103c2d0ec; end: 103c2d17f;  */

/* WARNING: Possible PIC construction at 0x000103c2d324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c2ce3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c2d0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c2ce98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c2ce40) */
/* WARNING: Removing unreachable block (ram,0x000103c2d328) */
/* WARNING: Removing unreachable block (ram,0x000103c2d0a4) */
/* WARNING: Removing unreachable block (ram,0x000103c2d0ac) */

undefined1  [16] FUN_103c2d0ec(ulong param_1,undefined8 param_2,byte *param_3,undefined *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 in_ZR;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined *puVar22;
  char *pcVar24;
  byte *pbVar25;
  byte *pbVar26;
  ulong extraout_x8;
  ulong uVar27;
  byte *extraout_x8_00;
  char *pcVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *unaff_x19;
  byte *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x30;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auStack_90 [80];
  undefined8 uVar23;
  
  puVar22 = (undefined *)0xe900000000000074;
  pbVar19 = (byte *)0x6e65674172657355;
  pbVar26 = (byte *)(param_1 & 0xff);
  pbVar20 = pbVar26;
  switch(pbVar26) {
  default:
    pbVar26 = (byte *)0x10efb6000;
  case (byte *)0xdc:
  case (byte *)0xea:
    pbVar26 = pbVar26 + 0x340;
    goto code_r0x000103c2d12c;
  case (byte *)0x1:
  case (byte *)0x1c:
  case (byte *)0x26:
  case (byte *)0x30:
    pbVar26 = (byte *)0x10efb6000;
  case (byte *)0x1a:
  case (byte *)0x24:
  case (byte *)0x2e:
    pbVar26 = pbVar26 + 0x360;
    goto code_r0x000103c2d168;
  case (byte *)0x2:
  case (byte *)0xf:
  case (byte *)0x18:
  case (byte *)0x22:
  case (byte *)0x2c:
    goto code_r0x000103c2d15c;
  case (byte *)0x3:
    pbVar19 = (byte *)0x12;
  case (byte *)0x15:
  case (byte *)0x1f:
  case (byte *)0x29:
    pbVar19 = (byte *)((ulong)pbVar19 & 0xffffffffffff | 0xd000000000000000);
    goto code_r0x000103c2d14c;
  case (byte *)0x5:
    func_0x000103c2ceb4();
  case (byte *)0xc4:
    auVar46._8_8_ = puVar22;
    auVar46._0_8_ = pbVar19;
    return auVar46;
  case (byte *)0x6:
    goto code_r0x000103c2d1e0;
  case (byte *)0x7:
    goto code_r0x000103c2d178;
  case (byte *)0x8:
    pbVar19 = (byte *)(ulong)*unaff_x20;
    FUN_103c2d0ec();
    *(byte **)unaff_x19 = pbVar19;
    *(undefined **)(unaff_x19 + 8) = puVar22;
  case (byte *)0x11:
    auVar48._8_8_ = puVar22;
    auVar48._0_8_ = pbVar19;
    return auVar48;
  case (byte *)0x9:
    goto code_r0x000103c2d248;
  case (byte *)0xa:
    goto code_r0x000103c2d1f4;
  case (byte *)0xc:
    goto code_r0x000103c2d280;
  case (byte *)0xd:
    puVar22 = (undefined *)(ulong)*unaff_x20;
    break;
  case (byte *)0xe:
  case (byte *)0x44:
  case (byte *)0x74:
  case (byte *)0xa4:
    unaff_x19 = pbVar26;
  case (byte *)0x56:
  case (byte *)0x5d:
  case (byte *)0x87:
  case (byte *)0xb0:
  case (byte *)0xb7:
    FUN_103c2d0c0();
code_r0x000103c2d274:
    *(byte **)unaff_x19 = pbVar19;
code_r0x000103c2d278:
code_r0x000103c2d280:
    auVar50._8_8_ = puVar22;
    auVar50._0_8_ = pbVar19;
    return auVar50;
  case (byte *)0x12:
    goto code_r0x000103c2d150;
  case (byte *)0x14:
  case (byte *)0xf3:
    goto code_r0x000103c2d138;
  case (byte *)0x17:
  case (byte *)0x21:
  case (byte *)0x2b:
  case (byte *)0x40:
  case (byte *)0x70:
  case (byte *)0x98:
  case (byte *)0xc8:
    goto code_r0x000103c2d154;
  case (byte *)0x19:
  case (byte *)0x23:
  case (byte *)0x2d:
    goto code_r0x000103c2d14c;
  case (byte *)0x1d:
  case (byte *)0x27:
  case (byte *)0x31:
    puVar22 = (undefined *)0xe900000000000cf4;
  case (byte *)0x10:
    FUN_103c2cb04(0x6e65674172657355,puVar22);
    auVar45._8_8_ = puVar22;
    auVar45._0_8_ = pbVar19;
    return auVar45;
  case (byte *)0x1e:
  case (byte *)0x28:
  case (byte *)0x32:
  case (byte *)0xf0:
    goto code_r0x000103c2d174;
  case (byte *)0x3c:
    func_0x000103c2e1c4();
    auVar54._8_8_ = puVar22;
    auVar54._0_8_ = 0x11;
    return auVar54;
  case (byte *)0x3d:
  case (byte *)0x6d:
  case (byte *)0x95:
  case (byte *)0xc5:
    goto code_r0x000103c2d168;
  case (byte *)0x3e:
  case (byte *)0x6e:
  case (byte *)0x96:
  case (byte *)0xc6:
    func_0x000103c2e1ec();
    pbVar26 = extraout_x8_00;
  case (byte *)0xe6:
    auVar58._8_8_ = puVar22;
    auVar58._0_8_ = pbVar26 + 4;
    return auVar58;
  case (byte *)0x47:
  case (byte *)0x4e:
  case (byte *)0x77:
  case (byte *)0x83:
  case (byte *)0xa7:
    goto code_r0x000103c2d2f4;
  case (byte *)0x48:
  case (byte *)0x78:
  case (byte *)0xa8:
    goto code_r0x000103c2d2bc;
  case (byte *)0x49:
  case (byte *)0x5b:
  case (byte *)0x79:
  case (byte *)0x85:
  case (byte *)0xa9:
  case (byte *)0xb5:
    goto code_r0x000103c2d2e0;
  case (byte *)0x4a:
  case (byte *)0x55:
  case (byte *)0x5f:
  case (byte *)0x7a:
  case (byte *)0x89:
  case (byte *)0xaa:
  case (byte *)0xaf:
  case (byte *)0xb9:
    goto code_r0x000103c2d2ec;
  case (byte *)0x4b:
  case (byte *)0x7b:
  case (byte *)0xab:
    goto code_r0x000103c2d2d8;
  case (byte *)0x4c:
  case (byte *)0x7c:
    param_3 = (byte *)0x103c2d024;
    param_4 = &UNK_1106ec000;
    unaff_x19 = pbVar26;
  case (byte *)0xb:
    param_4 = param_4 + 0xcd8;
code_r0x000103c2d248:
    FUN_103c2d688(0x6e65674172657355,0xe900000000000074,param_3,param_4);
code_r0x000103c2d24c:
    if (unaff_x21 == 0) {
code_r0x000103c2d250:
      *unaff_x19 = (byte)pbVar19;
    }
LAB_103c2d254:
    auVar49._8_8_ = puVar22;
    auVar49._0_8_ = pbVar19;
    return auVar49;
  case (byte *)0x4d:
  case (byte *)0x62:
  case (byte *)0x81:
  case (byte *)0x8c:
  case (byte *)0xbc:
    goto code_r0x000103c2d2b0;
  case (byte *)0x4f:
  case (byte *)0x5a:
  case (byte *)0x61:
  case (byte *)0x80:
  case (byte *)0x84:
  case (byte *)0x8b:
  case (byte *)0xb4:
  case (byte *)0xbb:
    auVar52._0_8_ = *(long *)(pbVar26 + 0x828);
    if (auVar52._0_8_ != 0) {
      auVar52._8_8_ = 0xe900000000000074;
      return auVar52;
    }
  case (byte *)0x45:
  case (byte *)0x75:
  case (byte *)0x7f:
  case (byte *)0xa5:
code_r0x000103c2d2d8:
code_r0x000103c2d2dc:
    pbVar19 = &DAT_10dc68000;
code_r0x000103c2d2e0:
    pbVar19 = pbVar19 + 0x2c8;
code_r0x000103c2d2e4:
    puVar22 = &UNK_1106eccd8;
code_r0x000103c2d2ec:
    func_0x000107c61520(pbVar19,puVar22);
code_r0x000103c2d2f0:
    pbVar26 = (byte *)0x112ff9000;
code_r0x000103c2d2f4:
    *(byte **)(pbVar26 + 0x828) = pbVar19;
code_r0x000103c2d2fc:
    auVar53._8_8_ = puVar22;
    auVar53._0_8_ = pbVar19;
    return auVar53;
  case (byte *)0x50:
  case (byte *)0x60:
  case (byte *)0x8a:
  case (byte *)0xba:
    goto code_r0x000103c2d2fc;
  case (byte *)0x51:
  case (byte *)0x54:
  case (byte *)0x57:
  case (byte *)0x5e:
  case (byte *)0x63:
  case (byte *)0x65:
  case (byte *)0x88:
  case (byte *)0x8d:
  case (byte *)0x8f:
  case (byte *)0xae:
  case (byte *)0xb1:
  case (byte *)0xb8:
  case (byte *)0xbd:
  case (byte *)0xbf:
    goto code_r0x000103c2d2b8;
  case (byte *)0x52:
  case (byte *)0xac:
    goto code_r0x000103c2d278;
  case (byte *)0x53:
  case (byte *)0x58:
  case (byte *)0x59:
  case (byte *)0xad:
  case (byte *)0xb2:
  case (byte *)0xb3:
    goto code_r0x000103c2d2f0;
  case (byte *)0x5c:
  case (byte *)0x86:
  case (byte *)0xb6:
    goto code_r0x000103c2d2dc;
  case (byte *)0x64:
  case (byte *)0x8e:
  case (byte *)0xbe:
    goto code_r0x000103c2d250;
  case (byte *)0x66:
  case (byte *)0x90:
  case (byte *)0xc0:
    func_0x000103c2e1b0();
    uVar23 = 0x112ff9838;
    goto code_r0x000107c61538;
  case (byte *)0x6c:
    goto code_r0x000103c2d2b4;
  case (byte *)0x7d:
  case (byte *)0x7e:
    goto code_r0x000103c2d2e4;
  case (byte *)0x94:
    goto code_r0x000103c2d24c;
  case (byte *)0xcd:
  case (byte *)0xe1:
  case (byte *)0xf5:
    goto LAB_103c2d254;
  case (byte *)0xce:
  case (byte *)0xe2:
  case (byte *)0xf6:
    auVar59._8_8_ = 0x800000010f1b0230;
    auVar59._0_8_ = 0xd000000000000014;
    return auVar59;
  case (byte *)0xcf:
  case (byte *)0xe3:
  case (byte *)0xf7:
    goto code_r0x000103c2d12c;
  case (byte *)0xd0:
    goto code_r0x000103c2d274;
  case (byte *)0xd1:
  case (byte *)0xf9:
  case (byte *)0x13:
  case (byte *)0xf8:
    param_3 = (byte *)0x112ff9000;
    puVar22 = puRam6e6567417265735d;
    pbVar20 = pbRam6e65674172657355;
    unaff_x19 = pbVar26;
    goto code_r0x000103c2d1e0;
  case (byte *)0xd2:
  case (byte *)0xfa:
    pbVar26 = pbVar26 + -0x20;
    uVar27 = 9;
    goto code_r0x000103c2d4d8;
  case (byte *)0xda:
    goto code_r0x000103c2d130;
  case (byte *)0xe0:
    pbVar26 = pbVar26 + 0xd0;
  case (byte *)0xcc:
    uVar27 = 10;
code_r0x000103c2d4d8:
    auVar56._8_8_ = (ulong)pbVar26 | 0x8000000000000000;
    auVar56._0_8_ = uVar27 | 0xd000000000000014;
    return auVar56;
  case (byte *)0xe4:
    goto code_r0x000103c2d1e4;
  case (byte *)0xe5:
    puVar22 = &UNK_1106ec000;
  case (byte *)0x46:
  case (byte *)0x76:
  case (byte *)0x82:
  case (byte *)0xa6:
    puVar22 = puVar22 + 0xcd8;
    func_0x000107c61520(0x6e65674172657355,puVar22);
code_r0x000103c2d2b0:
    pbVar26 = (byte *)0x112ff9000;
code_r0x000103c2d2b4:
    pbVar26 = pbVar26 + 0x820;
code_r0x000103c2d2b8:
    *(byte **)pbVar26 = pbVar19;
code_r0x000103c2d2bc:
    auVar51._8_8_ = puVar22;
    auVar51._0_8_ = pbVar19;
    return auVar51;
  case (byte *)0xe7:
    auVar57._8_8_ = 0xe900000000000074;
    auVar57._0_8_ = pbVar26 + 5;
    return auVar57;
  case (byte *)0xf1:
    break;
  case (byte *)0xf2:
    func_0x0001000285a8(0x6e65674172657355,0xe900000000000174);
    uVar23 = 0x112ff9a08;
code_r0x000107c61538:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_initStaticObject_11034f440)();
    auVar62._8_8_ = uVar23;
    auVar62._0_8_ = pbVar19;
    return auVar62;
  case (byte *)0xf4:
    func_0x000103c2e1ec();
    auVar55._0_8_ = extraout_x8 | 2;
    auVar55._8_8_ = puVar22;
    return auVar55;
  }
  puVar12 = &stack0xffffffffffffffe0;
  puVar2 = &stack0xffffffffffffffe0;
  pbVar30 = (byte *)0xe900000000000074;
  pbVar20 = (byte *)0x6e65674172657355;
  pcVar24 = (char *)((ulong)puVar22 & 0xff);
  pcVar28 = &UNK_10dc68068;
  pbVar29 = (byte *)(ulong)(byte)pcVar24[0x10dc68068];
  pbVar26 = (byte *)((long)pbVar29 * 4 + 0x103c2ccc4);
  puVar13 = &stack0xffffffffffffffe0;
  puVar14 = &stack0xffffffffffffffe0;
  puVar15 = &stack0xffffffffffffffe0;
  puVar16 = &stack0xffffffffffffffe0;
  puVar17 = &stack0xffffffffffffffe0;
  puVar18 = &stack0xffffffffffffffe0;
  puVar3 = &stack0xffffffffffffffe0;
  puVar4 = &stack0xffffffffffffffe0;
  puVar5 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xffffffffffffffe0;
  puVar11 = &stack0xffffffffffffffe0;
  puVar7 = &stack0xffffffffffffffe0;
  puVar8 = &stack0xffffffffffffffe0;
  puVar9 = &stack0xffffffffffffffe0;
  puVar10 = &stack0xffffffffffffffe0;
  puVar1 = &stack0xffffffffffffffe0;
  pbVar21 = pbVar20;
  pbVar25 = (byte *)pcVar24;
  pbVar31 = pbVar30;
  switch(pcVar24) {
  default:
    pcVar24 = "action with ID ";
  case (char *)0xe0:
  case (char *)0xee:
    pcVar24 = pcVar24 + 0x340;
    goto code_r0x000103c2cccc;
  case (char *)0x1:
  case (char *)0x7:
    pcVar24 = "action with ID ";
  case (char *)0x19:
  case (char *)0x23:
  case (char *)0x2d:
    pcVar24 = pcVar24 + 0x360;
    goto code_r0x000103c2ccec;
  case (char *)0x2:
    goto code_r0x000103c2cd1c;
  case (char *)0x3:
  case (char *)0x1e:
  case (char *)0x28:
  case (char *)0x32:
    pbVar20 = (byte *)0x12;
  case (char *)0x41:
  case (char *)0x71:
  case (char *)0x99:
  case (char *)0xc9:
    pbVar20 = (byte *)((ulong)pbVar20 & 0xffffffffffff | 0xd000000000000000);
    pcVar24 = "PlatformAssertFail";
    goto code_r0x000103c2cd14;
  case (char *)0x5:
  case (char *)0x20:
  case (char *)0x2a:
  case (char *)0x34:
    goto code_r0x000103c2cd00;
  case (char *)0x6:
  case (char *)0x13:
  case (char *)0x1c:
  case (char *)0x26:
  case (char *)0x30:
    goto code_r0x000103c2ccfc;
  case (char *)0x9:
    goto code_r0x000103c2cd5c;
  case (char *)0xa:
    goto code_r0x000103c2cd80;
  case (char *)0xb:
    goto code_r0x000103c2cd18;
  case (char *)0xc:
    func_0x000103c2ceb4(0x6e65674172657355,0x6e65674172657355,FUN_103c2cbb0);
    auVar32._8_8_ = pbVar20;
    auVar32._0_8_ = pbVar19;
    return auVar32;
  case (char *)0xd:
    goto code_r0x000103c2cde8;
  case (char *)0xe:
    goto code_r0x000103c2cd94;
  case (char *)0xf:
    goto code_r0x000103c2cde4;
  case (char *)0x10:
    goto code_r0x000103c2ce20;
  case (char *)0x12:
  case (char *)0x48:
  case (char *)0x78:
  case (char *)0xa8:
    goto code_r0x000103c2ce04;
  case (char *)0x14:
  case (char *)0x11:
    pbVar25 = pbVar20;
code_r0x000103c2cd44:
    pbVar20 = (byte *)0xd000000000000022;
    pcVar24 = (char *)(ulong)((uint)pbVar25 & 0xff);
    if (((ulong)pbVar25 & 0xff) == 0) {
code_r0x000103c2cd80:
      pcVar24 = "re";
code_r0x000103c2cd84:
      pbVar30 = (byte *)(pcVar24 + 0x4e0);
    }
    else {
      pcVar28 = "PlatformActiveUserSessionServiceRegistry";
code_r0x000103c2cd5c:
      pcVar28 = pcVar28 + -0x20;
      pbVar26 = pbVar20 + 6;
code_r0x000103c2cd64:
      pbVar29 = (byte *)0x10f1b0480;
code_r0x000103c2cd70:
      in_ZR = (int)pcVar24 == 1;
      pbVar21 = pbVar20;
code_r0x000103c2cd74:
      pbVar20 = pbVar26;
      pbVar30 = (byte *)pcVar28;
      if (!(bool)in_ZR) {
        pbVar20 = pbVar21;
        pbVar30 = pbVar29;
      }
    }
    func_0x000107c5fb58(0x6e65674172657355,pbVar20,(ulong)pbVar30 | 0x8000000000000000);
    goto code_r0x000103c2cd94;
  case (char *)0x15:
    puVar2 = auStack_90;
  case (char *)0x50:
  case (char *)0x80:
    *(byte **)(puVar2 + 0x50) = unaff_x20;
    *(undefined8 *)(puVar2 + 0x58) = 0xe900000000000074;
    *(undefined1 **)(puVar2 + 0x60) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar2 + 0x68) = unaff_x30;
    pbVar30 = (byte *)0xd000000000000022;
    pcVar24 = puVar2 + 8;
    puVar3 = puVar2;
    unaff_x20 = pbVar20;
code_r0x000103c2cde4:
    func_0x000107c6068c(pcVar24);
    puVar4 = puVar3;
code_r0x000103c2cde8:
    in_ZR = ((ulong)unaff_x20 & 0xff) == 0;
    pcVar24 = (char *)(ulong)((uint)unaff_x20 & 0xff);
    puVar5 = puVar4;
code_r0x000103c2cdec:
    puVar6 = puVar5;
    if ((bool)in_ZR) {
      pcVar24 = "re";
      puVar11 = puVar5;
code_r0x000103c2ce20:
      pbVar20 = pbVar30;
      unaff_x20 = (byte *)(pcVar24 + 0x4e0);
    }
    else {
code_r0x000103c2cdf0:
      pcVar28 = "re";
      puVar7 = puVar6;
code_r0x000103c2cdf4:
      pcVar28 = pcVar28 + 0x4b0;
      pbVar26 = pbVar30 + 6;
      pbVar29 = (byte *)0x10f1b0000;
      puVar8 = puVar7;
code_r0x000103c2ce04:
      pbVar29 = pbVar29 + 0x480;
      in_ZR = (int)pcVar24 == 1;
      puVar9 = puVar8;
      pbVar31 = pbVar30;
code_r0x000103c2ce10:
      puVar10 = puVar9;
      pbVar30 = pbVar26;
      if (!(bool)in_ZR) {
        pbVar30 = pbVar31;
      }
code_r0x000103c2ce14:
      puVar1 = puVar10;
      unaff_x20 = (byte *)pcVar28;
      if (!(bool)in_ZR) {
        unaff_x20 = pbVar29;
      }
code_r0x000103c2ce18:
      puVar11 = puVar1;
      pbVar20 = pbVar30;
    }
    func_0x000107c5fb58(puVar11 + 8,pbVar20,(ulong)unaff_x20 | 0x8000000000000000);
    unaff_x20 = (byte *)((ulong)unaff_x20 | 0x8000000000000000);
    break;
  case (char *)0x16:
    goto code_r0x000103c2ccf0;
  case (char *)0x17:
  case (char *)0xfc:
    goto code_r0x000103c2cd74;
  case (char *)0x18:
  case (char *)0xf7:
    goto code_r0x000103c2ccd8;
  case (char *)0x1b:
  case (char *)0x25:
  case (char *)0x2f:
  case (char *)0x44:
  case (char *)0x74:
  case (char *)0x9c:
  case (char *)0xcc:
    goto code_r0x000103c2ccf4;
  case (char *)0x1d:
  case (char *)0x27:
  case (char *)0x31:
    goto code_r0x000103c2ccec;
  case (char *)0x21:
  case (char *)0x2b:
  case (char *)0x35:
    goto code_r0x000103c2cd30;
  case (char *)0x22:
  case (char *)0x2c:
  case (char *)0x36:
  case (char *)0xf4:
    goto code_r0x000103c2cd14;
  case (char *)0x40:
    func_0x000107c606a8();
    auVar60._8_8_ = pbVar20;
    auVar60._0_8_ = pbVar19;
    return auVar60;
  case (char *)0x49:
  case (char *)0x79:
  case (char *)0x83:
  case (char *)0xa9:
    goto code_r0x000103c2ce74;
  case (char *)0x4b:
  case (char *)0x52:
  case (char *)0x7b:
  case (char *)0x87:
  case (char *)0xab:
    goto code_r0x000103c2ce94;
  case (char *)0x4d:
  case (char *)0x5f:
  case (char *)0x7d:
  case (char *)0x89:
  case (char *)0xad:
  case (char *)0xb9:
    goto code_r0x000103c2ce80;
  case (char *)0x4e:
  case (char *)0x59:
  case (char *)0x63:
  case (char *)0x7e:
  case (char *)0x8d:
  case (char *)0xae:
  case (char *)0xb3:
  case (char *)0xbd:
    goto code_r0x000103c2ce8c;
  case (char *)0x4f:
  case (char *)0x7f:
  case (char *)0xaf:
    goto code_r0x000103c2ce78;
  case (char *)0x51:
  case (char *)0x66:
  case (char *)0x85:
  case (char *)0x90:
  case (char *)0xc0:
    goto code_r0x000103c2ce50;
  case (char *)0x53:
  case (char *)0x5e:
  case (char *)0x65:
  case (char *)0x84:
  case (char *)0x88:
  case (char *)0x8f:
  case (char *)0xb8:
  case (char *)0xbf:
    goto code_r0x000103c2ce68;
  case (char *)0x54:
  case (char *)0x64:
  case (char *)0x8e:
  case (char *)0xbe:
    func_0x000107c606a8();
  case (char *)0x6a:
  case (char *)0x94:
  case (char *)0xc4:
    auVar34._8_8_ = pbVar20;
    auVar34._0_8_ = pbVar19;
    return auVar34;
  case (char *)0x55:
  case (char *)0x58:
  case (char *)0x5b:
  case (char *)0x62:
  case (char *)0x67:
  case (char *)0x69:
  case (char *)0x8c:
  case (char *)0x91:
  case (char *)0x93:
  case (char *)0xb2:
  case (char *)0xb5:
  case (char *)0xbc:
  case (char *)0xc1:
  case (char *)0xc3:
    puVar12 = auStack_90;
  case (char *)0x4c:
  case (char *)0x7c:
  case (char *)0xac:
    *(byte **)(puVar12 + 0x50) = unaff_x20;
    *(undefined8 *)(puVar12 + 0x58) = 0xe900000000000074;
    *(undefined1 **)(puVar12 + 0x60) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar12 + 0x68) = unaff_x30;
    puVar13 = puVar12;
code_r0x000103c2ce68:
    func_0x000107c6068c(puVar13 + 8);
    puVar14 = puVar13;
    pbVar30 = pbVar20;
code_r0x000103c2ce74:
    pbVar19 = pbVar30;
    puVar15 = puVar14;
    pbVar20 = pbVar21;
code_r0x000103c2ce78:
    FUN_103c2d388(pbVar19);
    puVar16 = puVar15;
code_r0x000103c2ce7c:
    puVar17 = puVar16;
    param_3 = pbVar19;
code_r0x000103c2ce80:
    puVar18 = puVar17;
    pbVar30 = pbVar20;
code_r0x000103c2ce84:
    pbVar20 = param_3;
    pbVar19 = puVar18 + 8;
code_r0x000103c2ce8c:
    param_3 = pbVar30;
    pbVar30 = param_3;
code_r0x000103c2ce90:
    func_0x000107c5fb58(pbVar19,pbVar20,param_3);
code_r0x000103c2ce94:
    unaff_x20 = pbVar30;
    break;
  case (char *)0x56:
  case (char *)0xb0:
    goto code_r0x000103c2ce18;
  case (char *)0x57:
  case (char *)0x5c:
  case (char *)0x5d:
  case (char *)0xb1:
  case (char *)0xb6:
  case (char *)0xb7:
    goto code_r0x000103c2ce90;
  case (char *)0x5a:
  case (char *)0x61:
  case (char *)0x8b:
  case (char *)0xb4:
  case (char *)0xbb:
    goto code_r0x000103c2ce10;
  case (char *)0x60:
  case (char *)0x8a:
  case (char *)0xba:
    goto code_r0x000103c2ce7c;
  case (char *)0x68:
  case (char *)0x92:
  case (char *)0xc2:
    goto code_r0x000103c2cdf0;
  case (char *)0x70:
    goto code_r0x000103c2ce54;
  case (char *)0x81:
  case (char *)0x82:
    goto code_r0x000103c2ce84;
  case (char *)0x98:
    goto code_r0x000103c2cdec;
  case (char *)0xc8:
    goto code_r0x000103c2cd64;
  case (char *)0xd0:
    pbVar20 = (byte *)0x6e65674172657f9d;
    func_0x000107c61520(0x6e65674172657355,0x6e65674172657f9d);
    pbRam0000000112ff9750 = pbVar19;
  case (char *)0x42:
  case (char *)0x72:
  case (char *)0x9a:
  case (char *)0xca:
    auVar40._8_8_ = pbVar20;
    auVar40._0_8_ = pbVar19;
    return auVar40;
  case (char *)0xd1:
  case (char *)0xe5:
  case (char *)0xf9:
    goto code_r0x000103c2cdf4;
  case (char *)0xd2:
  case (char *)0xe6:
  case (char *)0xfa:
    FUN_103c2d688();
    if (unaff_x21 == 0) {
      uRame900000000000074 = SUB81(pbVar19,0);
    }
    auVar36._8_8_ = pbVar20;
    auVar36._0_8_ = pbVar19;
    return auVar36;
  case (char *)0xd3:
  case (char *)0xe7:
  case (char *)0xfb:
    goto code_r0x000103c2cccc;
  case (char *)0xd4:
    goto code_r0x000103c2ce14;
  case (char *)0xd5:
  case (char *)0xfd:
    goto code_r0x000103c2cd70;
  case (char *)0xd6:
  case (char *)0xfe:
    auVar37._8_8_ = 0x6e65674172657355;
    auVar37._0_8_ = 0x6e65674172657355;
    return auVar37;
  case (char *)0xde:
    goto code_r0x000103c2ccd0;
  case (char *)0xe8:
    goto code_r0x000103c2cd84;
  case (char *)0xe9:
    func_0x000107c606a8();
  case (char *)0x4a:
  case (char *)0x7a:
  case (char *)0x86:
  case (char *)0xaa:
code_r0x000103c2ce50:
code_r0x000103c2ce54:
    auVar33._8_8_ = pbVar20;
    auVar33._0_8_ = pbVar19;
    return auVar33;
  case (char *)0xea:
    auVar41._8_8_ = 0x6e65674172657355;
    auVar41._0_8_ = 0x6e65674172657355;
    return auVar41;
  case (char *)0xeb:
    break;
  case (char *)0xf5:
    goto code_r0x000103c2cd44;
  case (char *)0xf6:
    uRame900000000000074 = (char)puVar22;
    auVar35._8_8_ = 0x6e65674172657355;
    auVar35._0_8_ = 0x6e65674172657355;
    return auVar35;
  case (char *)0xf8:
    auVar38._0_8_ = *(long *)(pcVar24 + 0x748);
    if (auVar38._0_8_ != 0) {
      auVar38._8_8_ = 0x6e65674172657355;
      return auVar38;
    }
    pbVar19 = &UNK_10dc68228;
    pbVar20 = &UNK_1106ecc48;
    func_0x000107c61520(&UNK_10dc68228,&UNK_1106ecc48);
    pcVar24 = (char *)0x112ff9748;
  case (char *)0xe4:
    *(byte **)pcVar24 = pbVar19;
    auVar39._8_8_ = pbVar20;
    auVar39._0_8_ = pbVar19;
    return auVar39;
  }
  goto code_r0x000107c6142c;
code_r0x000103c2cd94:
  unaff_x20 = (byte *)((ulong)pbVar30 | 0x8000000000000000);
  goto code_r0x000107c6142c;
code_r0x000103c2cd14:
  pcVar24 = pcVar24 + -0x20;
code_r0x000103c2cd18:
  pbVar30 = (byte *)((ulong)pcVar24 | 0x8000000000000000);
  goto code_r0x000103c2cd1c;
code_r0x000103c2ccec:
  pcVar24 = pcVar24 + -0x20;
code_r0x000103c2ccf0:
  pbVar30 = (byte *)((ulong)pcVar24 | 0x8000000000000000);
code_r0x000103c2ccf4:
  pcVar24 = (char *)0xd000000000000012;
code_r0x000103c2ccfc:
  pbVar20 = (byte *)(pcVar24 + 0xb);
code_r0x000103c2cd00:
  goto code_r0x000103c2cd1c;
code_r0x000103c2cccc:
  pcVar24 = pcVar24 + -0x20;
code_r0x000103c2ccd0:
  pbVar30 = (byte *)((ulong)pcVar24 | 0x8000000000000000);
  pcVar24 = (char *)0x12;
  goto code_r0x000103c2ccd8;
code_r0x000103c2d1e0:
  param_3 = param_3 + 0x768;
  pbVar26 = pbVar20;
  goto code_r0x000103c2d1e4;
code_r0x000103c2d14c:
  pbVar26 = (byte *)0x10efb6000;
code_r0x000103c2d150:
  pbVar26 = pbVar26 + 0x390;
  goto code_r0x000103c2d154;
code_r0x000103c2d168:
  puVar22 = (undefined *)((ulong)(pbVar26 + -0x20) | 0x8000000000000000);
  pbVar26 = (byte *)0x12;
  goto code_r0x000103c2d174;
code_r0x000103c2d12c:
  pbVar26 = pbVar26 + -0x20;
  goto code_r0x000103c2d130;
code_r0x000103c2d1e4:
  pbVar19 = pbVar26;
  FUN_103c2d064(pbVar19,puVar22,param_3);
  *unaff_x19 = (byte)pbVar19;
code_r0x000103c2d1f4:
  auVar47._8_8_ = puVar22;
  auVar47._0_8_ = pbVar19;
  return auVar47;
code_r0x000103c2ccd8:
  pbVar20 = (byte *)((ulong)pcVar24 | 0xd000000000000004);
code_r0x000103c2cd1c:
  func_0x000107c5fb58(0x6e65674172657355,pbVar20,pbVar30);
  pbVar19 = pbVar30;
code_r0x000103c2cd30:
  unaff_x20 = pbVar19;
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  auVar61._8_8_ = pbVar20;
  auVar61._0_8_ = unaff_x20;
  return auVar61;
code_r0x000103c2d130:
  puVar22 = (undefined *)((ulong)pbVar26 | 0x8000000000000000);
  pbVar26 = (byte *)0x12;
code_r0x000103c2d138:
  auVar42._0_8_ = (ulong)pbVar26 | 0xd000000000000004;
  auVar42._8_8_ = puVar22;
  return auVar42;
code_r0x000103c2d174:
  pbVar26 = (byte *)((ulong)pbVar26 | 0xd000000000000000);
code_r0x000103c2d178:
  auVar44._8_8_ = puVar22;
  auVar44._0_8_ = pbVar26 + 0xb;
  return auVar44;
code_r0x000103c2d154:
  puVar22 = (undefined *)((ulong)(pbVar26 + -0x20) | 0x8000000000000000);
code_r0x000103c2d15c:
  auVar43._8_8_ = puVar22;
  auVar43._0_8_ = pbVar19;
  return auVar43;
}



/* Entry: 103c2d180; end: 103c2d19f;  */

void FUN_103c2d180(void)

{
  undefined1 *unaff_x20;
  
  FUN_103c2cb04(*unaff_x20,0x103c2cc80);
  return;
}



/* Entry: 103c2d1a0; end: 103c2d1a7;  */

/* WARNING: Possible PIC construction at 0x000103c2ce3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c2d0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c2ce98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c2ce40) */
/* WARNING: Removing unreachable block (ram,0x000103c2d0a4) */
/* WARNING: Removing unreachable block (ram,0x000103c2d0ac) */

void FUN_103c2d1a0(byte *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 in_ZR;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  char *pcVar23;
  byte *pbVar24;
  char *pcVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x30;
  undefined1 auStack_90 [80];
  
  bVar1 = *unaff_x20;
  pcVar23 = (char *)(ulong)bVar1;
  puVar13 = &stack0xffffffffffffffe0;
  puVar3 = &stack0xffffffffffffffe0;
  pbVar27 = (byte *)0xe900000000000074;
  pbVar20 = (byte *)0x6e65674172657355;
  pcVar25 = &UNK_10dc68068;
  pbVar26 = (byte *)(ulong)(byte)pcVar23[0x10dc68068];
  pbVar21 = (byte *)((long)pbVar26 * 4 + 0x103c2ccc4);
  puVar14 = &stack0xffffffffffffffe0;
  puVar15 = &stack0xffffffffffffffe0;
  puVar16 = &stack0xffffffffffffffe0;
  puVar17 = &stack0xffffffffffffffe0;
  puVar18 = &stack0xffffffffffffffe0;
  puVar19 = &stack0xffffffffffffffe0;
  puVar4 = &stack0xffffffffffffffe0;
  puVar5 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xffffffffffffffe0;
  puVar7 = &stack0xffffffffffffffe0;
  puVar12 = &stack0xffffffffffffffe0;
  puVar8 = &stack0xffffffffffffffe0;
  puVar9 = &stack0xffffffffffffffe0;
  puVar10 = &stack0xffffffffffffffe0;
  puVar11 = &stack0xffffffffffffffe0;
  puVar2 = &stack0xffffffffffffffe0;
  pbVar22 = pbVar20;
  pbVar24 = (byte *)pcVar23;
  pbVar28 = pbVar27;
  switch(bVar1) {
  default:
    pcVar23 = "action with ID ";
  case 0xe0:
  case 0xee:
    pcVar23 = pcVar23 + 0x340;
    goto code_r0x000103c2cccc;
  case 1:
  case 7:
    pcVar23 = "action with ID ";
  case 0x19:
  case 0x23:
  case 0x2d:
    pcVar23 = pcVar23 + 0x360;
    goto code_r0x000103c2ccec;
  case 2:
    goto code_r0x000103c2cd1c;
  case 3:
  case 0x1e:
  case 0x28:
  case 0x32:
    pbVar20 = (byte *)0x12;
  case 0x41:
  case 0x71:
  case 0x99:
  case 0xc9:
    pbVar20 = (byte *)((ulong)pbVar20 & 0xffffffffffff | 0xd000000000000000);
    pcVar23 = "PlatformAssertFail";
    goto code_r0x000103c2cd14;
  case 5:
  case 0x20:
  case 0x2a:
  case 0x34:
    goto code_r0x000103c2cd00;
  case 6:
  case 0x13:
  case 0x1c:
  case 0x26:
  case 0x30:
    goto code_r0x000103c2ccfc;
  case 9:
    goto code_r0x000103c2cd5c;
  case 10:
    goto code_r0x000103c2cd80;
  case 0xb:
    goto code_r0x000103c2cd18;
  case 0xc:
    func_0x000103c2ceb4(param_1,0x6e65674172657355,FUN_103c2cbb0);
    return;
  case 0xd:
    goto code_r0x000103c2cde8;
  case 0xe:
    goto code_r0x000103c2cd94;
  case 0xf:
    goto code_r0x000103c2cde4;
  case 0x10:
    goto code_r0x000103c2ce20;
  case 0x12:
  case 0x48:
  case 0x78:
  case 0xa8:
    goto code_r0x000103c2ce04;
  case 0x14:
  case 0x11:
    pbVar24 = pbVar20;
code_r0x000103c2cd44:
    pbVar20 = (byte *)0xd000000000000022;
    pcVar23 = (char *)(ulong)((uint)pbVar24 & 0xff);
    if (((ulong)pbVar24 & 0xff) == 0) {
code_r0x000103c2cd80:
      pcVar23 = "re";
code_r0x000103c2cd84:
      pbVar21 = pbVar20;
      pcVar25 = pcVar23 + 0x4e0;
    }
    else {
      pcVar25 = "PlatformActiveUserSessionServiceRegistry";
code_r0x000103c2cd5c:
      pcVar25 = pcVar25 + -0x20;
      pbVar21 = pbVar20 + 6;
code_r0x000103c2cd64:
      pbVar26 = (byte *)0x10f1b0480;
code_r0x000103c2cd70:
      in_ZR = (int)pcVar23 == 1;
code_r0x000103c2cd74:
      if (!(bool)in_ZR) {
        pbVar21 = pbVar20;
        pcVar25 = (char *)pbVar26;
      }
    }
    func_0x000107c5fb58(param_1,pbVar21,(ulong)pcVar25 | 0x8000000000000000);
    goto code_r0x000103c2cd94;
  case 0x15:
    puVar3 = auStack_90;
  case 0x50:
  case 0x80:
    *(byte **)(puVar3 + 0x50) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x58) = 0xe900000000000074;
    *(undefined1 **)(puVar3 + 0x60) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar3 + 0x68) = unaff_x30;
    pbVar27 = (byte *)0xd000000000000022;
    pcVar23 = puVar3 + 8;
    puVar4 = puVar3;
    unaff_x20 = pbVar20;
code_r0x000103c2cde4:
    func_0x000107c6068c(pcVar23);
    puVar5 = puVar4;
code_r0x000103c2cde8:
    in_ZR = ((ulong)unaff_x20 & 0xff) == 0;
    pcVar23 = (char *)(ulong)((uint)unaff_x20 & 0xff);
    puVar6 = puVar5;
code_r0x000103c2cdec:
    puVar7 = puVar6;
    if ((bool)in_ZR) {
      pcVar23 = "re";
      puVar12 = puVar6;
code_r0x000103c2ce20:
      unaff_x20 = (byte *)(pcVar23 + 0x4e0);
    }
    else {
code_r0x000103c2cdf0:
      pcVar25 = "re";
      puVar8 = puVar7;
code_r0x000103c2cdf4:
      pcVar25 = pcVar25 + 0x4b0;
      pbVar21 = pbVar27 + 6;
      pbVar26 = (byte *)0x10f1b0000;
      puVar9 = puVar8;
code_r0x000103c2ce04:
      pbVar26 = pbVar26 + 0x480;
      in_ZR = (int)pcVar23 == 1;
      puVar10 = puVar9;
      pbVar28 = pbVar27;
code_r0x000103c2ce10:
      puVar11 = puVar10;
      pbVar27 = pbVar21;
      if (!(bool)in_ZR) {
        pbVar27 = pbVar28;
      }
code_r0x000103c2ce14:
      puVar2 = puVar11;
      unaff_x20 = (byte *)pcVar25;
      if (!(bool)in_ZR) {
        unaff_x20 = pbVar26;
      }
code_r0x000103c2ce18:
      puVar12 = puVar2;
    }
    func_0x000107c5fb58(puVar12 + 8,pbVar27,(ulong)unaff_x20 | 0x8000000000000000);
    break;
  case 0x16:
    goto code_r0x000103c2ccf0;
  case 0x17:
  case 0xfc:
    goto code_r0x000103c2cd74;
  case 0x18:
  case 0xf7:
    goto code_r0x000103c2ccd8;
  case 0x1b:
  case 0x25:
  case 0x2f:
  case 0x44:
  case 0x74:
  case 0x9c:
  case 0xcc:
    goto code_r0x000103c2ccf4;
  case 0x1d:
  case 0x27:
  case 0x31:
    goto code_r0x000103c2ccec;
  case 0x21:
  case 0x2b:
  case 0x35:
    goto code_r0x000103c2cd30;
  case 0x22:
  case 0x2c:
  case 0x36:
  case 0xf4:
    goto code_r0x000103c2cd14;
  case 0x40:
    func_0x000107c606a8();
    return;
  case 0x42:
  case 0x72:
  case 0x9a:
  case 0xca:
    return;
  case 0x49:
  case 0x79:
  case 0x83:
  case 0xa9:
    goto code_r0x000103c2ce74;
  case 0x4b:
  case 0x52:
  case 0x7b:
  case 0x87:
  case 0xab:
    goto code_r0x000103c2ce94;
  case 0x4d:
  case 0x5f:
  case 0x7d:
  case 0x89:
  case 0xad:
  case 0xb9:
    goto code_r0x000103c2ce80;
  case 0x4e:
  case 0x59:
  case 99:
  case 0x7e:
  case 0x8d:
  case 0xae:
  case 0xb3:
  case 0xbd:
    goto code_r0x000103c2ce8c;
  case 0x4f:
  case 0x7f:
  case 0xaf:
    goto code_r0x000103c2ce78;
  case 0x51:
  case 0x66:
  case 0x85:
  case 0x90:
  case 0xc0:
    goto code_r0x000103c2ce50;
  case 0x53:
  case 0x5e:
  case 0x65:
  case 0x84:
  case 0x88:
  case 0x8f:
  case 0xb8:
  case 0xbf:
    goto code_r0x000103c2ce68;
  case 0x54:
  case 100:
  case 0x8e:
  case 0xbe:
    func_0x000107c606a8();
    return;
  case 0x55:
  case 0x58:
  case 0x5b:
  case 0x62:
  case 0x67:
  case 0x69:
  case 0x8c:
  case 0x91:
  case 0x93:
  case 0xb2:
  case 0xb5:
  case 0xbc:
  case 0xc1:
  case 0xc3:
    puVar13 = auStack_90;
  case 0x4c:
  case 0x7c:
  case 0xac:
    *(byte **)(puVar13 + 0x50) = unaff_x20;
    *(undefined8 *)(puVar13 + 0x58) = 0xe900000000000074;
    *(undefined1 **)(puVar13 + 0x60) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar13 + 0x68) = unaff_x30;
    puVar14 = puVar13;
code_r0x000103c2ce68:
    func_0x000107c6068c(puVar14 + 8);
    puVar15 = puVar14;
    pbVar27 = pbVar20;
code_r0x000103c2ce74:
    param_1 = pbVar27;
    puVar16 = puVar15;
    pbVar20 = pbVar22;
code_r0x000103c2ce78:
    FUN_103c2d388(param_1);
    puVar17 = puVar16;
code_r0x000103c2ce7c:
    puVar18 = puVar17;
    param_3 = param_1;
code_r0x000103c2ce80:
    puVar19 = puVar18;
    pbVar27 = pbVar20;
code_r0x000103c2ce84:
    pbVar20 = param_3;
    param_1 = puVar19 + 8;
code_r0x000103c2ce8c:
    param_3 = pbVar27;
code_r0x000103c2ce90:
    func_0x000107c5fb58(param_1,pbVar20,param_3);
code_r0x000103c2ce94:
    break;
  case 0x56:
  case 0xb0:
    goto code_r0x000103c2ce18;
  case 0x57:
  case 0x5c:
  case 0x5d:
  case 0xb1:
  case 0xb6:
  case 0xb7:
    goto code_r0x000103c2ce90;
  case 0x5a:
  case 0x61:
  case 0x8b:
  case 0xb4:
  case 0xbb:
    goto code_r0x000103c2ce10;
  case 0x60:
  case 0x8a:
  case 0xba:
    goto code_r0x000103c2ce7c;
  case 0x68:
  case 0x92:
  case 0xc2:
    goto code_r0x000103c2cdf0;
  case 0x6a:
  case 0x94:
  case 0xc4:
    return;
  case 0x70:
    goto code_r0x000103c2ce54;
  case 0x81:
  case 0x82:
    goto code_r0x000103c2ce84;
  case 0x98:
    goto code_r0x000103c2cdec;
  case 200:
    goto code_r0x000103c2cd64;
  case 0xd0:
    func_0x000107c61520(param_1,0x6e65674172657f9d);
    pbRam0000000112ff9750 = param_1;
    return;
  case 0xd1:
  case 0xe5:
  case 0xf9:
    goto code_r0x000103c2cdf4;
  case 0xd2:
  case 0xe6:
  case 0xfa:
    FUN_103c2d688();
    if (unaff_x21 == 0) {
      bRame900000000000074 = (byte)param_1;
    }
    return;
  case 0xd3:
  case 0xe7:
  case 0xfb:
    goto code_r0x000103c2cccc;
  case 0xd4:
    goto code_r0x000103c2ce14;
  case 0xd5:
  case 0xfd:
    goto code_r0x000103c2cd70;
  case 0xd6:
  case 0xfe:
    return;
  case 0xde:
    goto code_r0x000103c2ccd0;
  case 0xe8:
    goto code_r0x000103c2cd84;
  case 0xe9:
    func_0x000107c606a8();
  case 0x4a:
  case 0x7a:
  case 0x86:
  case 0xaa:
code_r0x000103c2ce50:
code_r0x000103c2ce54:
    return;
  case 0xea:
    return;
  case 0xeb:
    break;
  case 0xf5:
    goto code_r0x000103c2cd44;
  case 0xf6:
    bRame900000000000074 = bVar1;
    return;
  case 0xf8:
    if (*(long *)(pcVar23 + 0x748) != 0) {
      return;
    }
    param_1 = &UNK_10dc68228;
    func_0x000107c61520(&UNK_10dc68228,&UNK_1106ecc48);
    pcVar23 = (char *)0x112ff9748;
  case 0xe4:
    *(byte **)pcVar23 = param_1;
    return;
  }
  goto code_r0x000107c6142c;
code_r0x000103c2cd94:
  goto code_r0x000107c6142c;
code_r0x000103c2cd14:
  pcVar23 = pcVar23 + -0x20;
code_r0x000103c2cd18:
  pbVar27 = (byte *)((ulong)pcVar23 | 0x8000000000000000);
  goto code_r0x000103c2cd1c;
code_r0x000103c2ccec:
  pcVar23 = pcVar23 + -0x20;
code_r0x000103c2ccf0:
  pbVar27 = (byte *)((ulong)pcVar23 | 0x8000000000000000);
code_r0x000103c2ccf4:
  pcVar23 = (char *)0xd000000000000012;
code_r0x000103c2ccfc:
  pbVar20 = (byte *)(pcVar23 + 0xb);
code_r0x000103c2cd00:
  goto code_r0x000103c2cd1c;
code_r0x000103c2cccc:
  pcVar23 = pcVar23 + -0x20;
code_r0x000103c2ccd0:
  pbVar27 = (byte *)((ulong)pcVar23 | 0x8000000000000000);
  pcVar23 = (char *)0x12;
code_r0x000103c2ccd8:
  pbVar20 = (byte *)((ulong)pcVar23 | 0xd000000000000004);
code_r0x000103c2cd1c:
  func_0x000107c5fb58(param_1,pbVar20,pbVar27);
code_r0x000103c2cd30:
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 103c2d1a8; end: 103c2d1c7;  */

void FUN_103c2d1a8(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  func_0x000103c2ceb4(param_1,*unaff_x20,0x103c2cc80);
  return;
}



/* Entry: 103c2d1c8; end: 103c2d227;  */

void FUN_103c2d1c8(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103c2d064(uVar1,param_2[1],0x112ff9768);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103c2d228; end: 103c2d25f;  */

void FUN_103c2d228(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_103c2d688(param_2,param_3,0x103c2d024,&UNK_1106eccd8);
  if (unaff_x21 == 0) {
    *param_1 = (char)param_2;
  }
  return;
}



/* Entry: 103c2d260; end: 103c2d283;  */

void FUN_103c2d260(undefined8 *param_1,undefined8 param_2)

{
  FUN_103c2d0c0();
  *param_1 = param_2;
  return;
}



/* Entry: 103c2d284; end: 103c2d303;  */

void FUN_103c2d284(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68350;
  func_0x000107c61520(&UNK_10dc68350,&UNK_1106eccd8);
  puRam0000000112ff9820 = puVar1;
  return;
}



/* Entry: 103c2d304; end: 103c2d35b;  */

ulong FUN_103c2d304(ulong param_1)

{
  func_0x000103c2e1b0();
  func_0x000107c61538();
  func_0x000107c60608();
  func_0x000103c2e1c4();
  if (0x10 < param_1) {
    param_1 = 0x11;
  }
  return param_1;
}



/* Entry: 103c2d35c; end: 103c2d387;  */

void FUN_103c2d35c(void)

{
  func_0x0001000285a8(0x112ff9a40,&UNK_10dc68100);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 103c2d388; end: 103c2d553;  */

/* WARNING: Possible PIC construction at 0x000103c2ce98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c2ce9c) */
/* WARNING: Removing unreachable block (ram,0x000103c2d618) */

undefined1  [16] FUN_103c2d388(ulong param_1,undefined8 param_2,code *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  char *extraout_x8_04;
  char *unaff_x19;
  byte *unaff_x20;
  undefined *unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  undefined4 in_stack_0000000c;
  undefined1 auStack_68 [72];
  
  puVar5 = (undefined *)0xeb00000000644972;
  pcVar2 = (char *)0x6573556c61636f4c;
  pcVar6 = (char *)(param_1 & 0xff);
  pcVar1 = pcVar6;
  switch(pcVar6) {
  default:
    pcVar2 = (char *)0x14;
  case (char *)0xd8:
  case (char *)0xe6:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffffffffffff | 0xd000000000000000);
code_r0x000103c2d3cc:
    pcVar6 = "re";
code_r0x000103c2d3d0:
    pcVar6 = pcVar6 + 0x250;
code_r0x000103c2d530:
    auVar14._8_8_ = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
    auVar14._0_8_ = pcVar2;
    return auVar14;
  case (char *)0x1:
    pcVar6 = "PlatformManualExposureCofStore";
    break;
  case (char *)0x2:
    pcVar2 = (char *)0x14;
  case (char *)0xe0:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffffffffffff | 0xd000000000000000);
    pcVar6 = "PlatformDuplexClient";
    goto code_r0x000103c2d530;
  case (char *)0x3:
    func_0x000103c2e1ec("PlatformDuplexRegistryConfig");
    pcVar2 = (char *)(extraout_x8_00 | 8);
  case (char *)0x19:
  case (char *)0x23:
  case (char *)0x2d:
    auVar8._8_8_ = puVar5;
    auVar8._0_8_ = pcVar2;
    return auVar8;
  case (char *)0x4:
    pcVar2 = (char *)0xd000000000000014;
    pcVar6 = "PlatformBoltUploader";
    goto code_r0x000103c2d530;
  case (char *)0x5:
    pcVar6 = "re";
  case (char *)0x90:
    pcVar6 = pcVar6 + 400;
code_r0x000103c2d4f0:
code_r0x000103c2d4f4:
    func_0x000103c2e1ec(pcVar6);
    auVar12._8_8_ = puVar5;
    auVar12._0_8_ = extraout_x8_03 + 5;
    return auVar12;
  case (char *)0x6:
    func_0x000103c2e1ec("PlatformSUPStore");
    auVar10._0_8_ = extraout_x8_02 + -4;
    auVar10._8_8_ = puVar5;
    return auVar10;
  case (char *)0x7:
    goto code_r0x000103c2d4e4;
  case (char *)0x8:
    pcVar2 = (char *)0xd000000000000014;
    pcVar6 = "PlatformUserProvider";
    goto code_r0x000103c2d530;
  case (char *)0x9:
    pcVar6 = "re";
  case (char *)0xed:
    func_0x000103c2e1ec(pcVar6 + 0x150);
    auVar9._0_8_ = extraout_x8_01 + -1;
    auVar9._8_8_ = puVar5;
    return auVar9;
  case (char *)0xa:
  case (char *)0x40:
  case (char *)0x70:
  case (char *)0xa0:
    pcVar6 = "PlatformUserInfoProvider";
  case (char *)0x52:
  case (char *)0x59:
  case (char *)0x83:
  case (char *)0xac:
  case (char *)0xb3:
code_r0x000103c2d510:
    func_0x000103c2e1ec(pcVar6);
    pcVar6 = extraout_x8_04;
code_r0x000103c2d514:
code_r0x000103c2d518:
    auVar13._8_8_ = puVar5;
    auVar13._0_8_ = pcVar6 + 4;
    return auVar13;
  case (char *)0xb:
  case (char *)0x14:
  case (char *)0x1e:
  case (char *)0x28:
    pcVar6 = "re";
  case (char *)0x18:
  case (char *)0x22:
  case (char *)0x2c:
    pcVar6 = pcVar6 + 0x110;
code_r0x000103c2d404:
code_r0x000103c2d408:
    func_0x000103c2e1ec(pcVar6);
    pcVar2 = (char *)(extraout_x8 | 2);
code_r0x000103c2d414:
    auVar7._8_8_ = puVar5;
    auVar7._0_8_ = pcVar2;
    return auVar7;
  case (char *)0xc:
    pcVar6 = "PlatformBitmojiCreationService";
    break;
  case (char *)0xd:
    pcVar6 = "re";
  case (char *)0x48:
  case (char *)0x78:
    pcVar6 = pcVar6 + 0xd0;
code_r0x000103c2d4cc:
    puVar5 = (undefined *)((ulong)(pcVar6 + -0x20) | 0x8000000000000000);
    pcVar6 = (char *)0x9;
    goto code_r0x000103c2d4d8;
  case (char *)0xe:
    pcVar6 = "re";
  case (char *)0x13:
  case (char *)0x1d:
  case (char *)0x27:
  case (char *)0x3c:
  case (char *)0x6c:
  case (char *)0x94:
  case (char *)0xc4:
    pcVar6 = pcVar6 + 0xb0;
    goto code_r0x000103c2d4cc;
  case (char *)0xf:
  case (char *)0xf4:
    pcVar6 = "PlatformComplianceEngine";
    goto code_r0x000103c2d510;
  case (char *)0x10:
  case (char *)0xef:
    puVar5 = (undefined *)0x800000010f1b0030;
  case (char *)0x11:
  case (char *)0x1b:
  case (char *)0x25:
    pcVar6 = (char *)0xb;
code_r0x000103c2d3ec:
    goto code_r0x000103c2d4d8;
  case (char *)0x15:
  case (char *)0x1f:
  case (char *)0x29:
    goto code_r0x000103c2d3ec;
  case (char *)0x16:
  case (char *)0x20:
  case (char *)0x2a:
    goto code_r0x000103c2d404;
  case (char *)0x1a:
  case (char *)0x24:
  case (char *)0x2e:
  case (char *)0xec:
    goto code_r0x000103c2d414;
  case (char *)0x38:
    auVar17._8_8_ = 0xeb00000000644972;
    auVar17._0_8_ = 0x6573556c61636f4c;
    return auVar17;
  case (char *)0x39:
  case (char *)0x69:
  case (char *)0x91:
  case (char *)0xc1:
    goto code_r0x000103c2d408;
  case (char *)0x3a:
  case (char *)0x6a:
  case (char *)0x92:
  case (char *)0xc2:
    goto code_r0x000103c2d71c;
  case (char *)0x41:
  case (char *)0x71:
  case (char *)0x7b:
  case (char *)0xa1:
    goto code_r0x000103c2d574;
  case (char *)0x42:
  case (char *)0x72:
  case (char *)0x7e:
  case (char *)0xa2:
    goto code_r0x000103c2d548;
  case (char *)0x43:
  case (char *)0x4a:
  case (char *)0x73:
  case (char *)0x7f:
  case (char *)0xa3:
    goto code_r0x000103c2d594;
  case (char *)0x44:
  case (char *)0x74:
  case (char *)0xa4:
    goto code_r0x000103c2d55c;
  case (char *)0x45:
  case (char *)0x57:
  case (char *)0x75:
  case (char *)0x81:
  case (char *)0xa5:
  case (char *)0xb1:
    goto code_r0x000103c2d580;
  case (char *)0x46:
  case (char *)0x51:
  case (char *)0x5b:
  case (char *)0x76:
  case (char *)0x85:
  case (char *)0xa6:
  case (char *)0xab:
  case (char *)0xb5:
    goto code_r0x000103c2d58c;
  case (char *)0x47:
  case (char *)0x77:
  case (char *)0xa7:
    goto code_r0x000103c2d578;
  case (char *)0x49:
  case (char *)0x5e:
  case (char *)0x7d:
  case (char *)0x88:
  case (char *)0xb8:
    puVar4 = puVar5;
    func_0x000107c6068c(auStack_68);
    FUN_103c2d388(0xeb00000000644972);
    func_0x000107c5fb58(auStack_68,puVar5,puVar4);
    goto code_r0x000107c6142c;
  case (char *)0x4b:
  case (char *)0x56:
  case (char *)0x5d:
  case (char *)0x7c:
  case (char *)0x80:
  case (char *)0x87:
  case (char *)0xb0:
  case (char *)0xb7:
    goto code_r0x000103c2d568;
  case (char *)0x4c:
  case (char *)0x5c:
  case (char *)0x86:
  case (char *)0xb6:
    goto code_r0x000103c2d59c;
  case (char *)0x4d:
  case (char *)0x50:
  case (char *)0x53:
  case (char *)0x5a:
  case (char *)0x5f:
  case (char *)0x61:
  case (char *)0x84:
  case (char *)0x89:
  case (char *)0x8b:
  case (char *)0xaa:
  case (char *)0xad:
  case (char *)0xb4:
  case (char *)0xb9:
  case (char *)0xbb:
    goto code_r0x000103c2d558;
  case (char *)0x4e:
  case (char *)0xa8:
    goto code_r0x000103c2d518;
  case (char *)0x4f:
  case (char *)0x54:
  case (char *)0x55:
  case (char *)0xa9:
  case (char *)0xae:
  case (char *)0xaf:
    goto code_r0x000103c2d590;
  case (char *)0x58:
  case (char *)0x82:
  case (char *)0xb2:
    goto code_r0x000103c2d57c;
  case (char *)0x60:
  case (char *)0x8a:
  case (char *)0xba:
    goto code_r0x000103c2d4f0;
  case (char *)0x62:
  case (char *)0x8c:
  case (char *)0xbc:
    goto code_r0x000103c2d5a8;
  case (char *)0x68:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
code_r0x000103c2d558:
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
code_r0x000103c2d55c:
    puVar5 = puRam6573556c61636f54;
    pcVar1 = pcRam6573556c61636f4c;
    unaff_x19 = pcVar6;
code_r0x000103c2d568:
    pcVar2 = pcVar1;
    FUN_103c2d304(pcVar2,puVar5);
    pcVar6 = (char *)(ulong)((uint)pcVar2 & 0xff);
code_r0x000103c2d574:
    *unaff_x19 = (char)pcVar6;
code_r0x000103c2d578:
code_r0x000103c2d57c:
code_r0x000103c2d580:
    auVar15._8_8_ = puVar5;
    auVar15._0_8_ = pcVar2;
    return auVar15;
  case (char *)0x79:
  case (char *)0x7a:
code_r0x000103c2d58c:
code_r0x000103c2d590:
    unaff_x19 = pcVar6;
code_r0x000103c2d594:
    pcVar2 = (char *)(ulong)*unaff_x20;
    FUN_103c2d388();
code_r0x000103c2d59c:
    *(char **)unaff_x19 = pcVar2;
    *(undefined **)(unaff_x19 + 8) = puVar5;
code_r0x000103c2d5a8:
    auVar16._8_8_ = puVar5;
    auVar16._0_8_ = pcVar2;
    return auVar16;
  case (char *)0xc0:
    break;
  case (char *)0xc8:
    pcVar2 = &DAT_10dc68550;
    puVar5 = &UNK_1106ecdf8;
code_r0x000103c2d71c:
    func_0x000107c61520(pcVar2,puVar5);
    pcRam0000000112ff9a58 = pcVar2;
    auVar21._8_8_ = puVar5;
    auVar21._0_8_ = pcVar2;
    return auVar21;
  case (char *)0xc9:
  case (char *)0xdd:
  case (char *)0xf1:
    goto code_r0x000103c2d4f4;
  case (char *)0xca:
  case (char *)0xde:
  case (char *)0xf2:
    uVar3 = 0x6573556c6163733c;
    puVar5 = &UNK_1106ecd68;
    func_0x000107c61520(0x6573556c6163733c,&UNK_1106ecd68);
    uRam0000000112ff9a50 = uVar3;
    auVar19._8_8_ = puVar5;
    auVar19._0_8_ = uVar3;
    return auVar19;
  case (char *)0xcb:
  case (char *)0xdf:
  case (char *)0xf3:
    goto code_r0x000103c2d3cc;
  case (char *)0xcc:
    goto code_r0x000103c2d514;
  case (char *)0xcd:
  case (char *)0xf5:
    goto code_r0x000103c2d470;
  case (char *)0xce:
  case (char *)0xf6:
    unaff_x19 = param_4;
    unaff_x22 = puVar5;
  case (char *)0xf0:
    puVar5 = unaff_x22;
    (*param_3)();
    FUN_103c38cc0((long)&stack0x0000000c + 3,0x6573556c61636f4c,puVar5,unaff_x19,pcVar2);
    func_0x000107c61574(0x6573556c61636f4c);
code_r0x000103c2d6d8:
    auVar20._1_7_ = 0;
    auVar20[0] = in_stack_0000000c._3_1_;
    auVar20._8_8_ = puVar5;
    return auVar20;
  case (char *)0xd6:
  case (char *)0xfe:
    goto code_r0x000103c2d3d0;
  case (char *)0xdc:
    goto code_r0x000103c2d6d8;
  case (char *)0xe1:
    puVar5 = (undefined *)(ulong)*unaff_x20;
code_r0x000103c2d548:
    puVar4 = puVar5;
    FUN_103c2d388(puVar5);
    func_0x000107c5fb58(0x6573556c61636f4c,puVar5,puVar4);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar4);
    auVar23._8_8_ = puVar5;
    auVar23._0_8_ = puVar4;
    return auVar23;
  case (char *)0xe2:
    uVar3 = 0xd000000000000022;
    if ((int)pcVar6 == 0) {
      pcVar2 = "erSessionServiceRegistry";
    }
    else {
      uVar3 = 0xd000000000000028;
      pcVar2 = "ionServiceRegistry";
      if ((int)pcVar6 != 1) {
        uVar3 = 0xd000000000000022;
        pcVar2 = "stryModuleFactory";
      }
    }
    auVar22._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
    auVar22._0_8_ = uVar3;
    return auVar22;
  case (char *)0xe3:
    func_0x0001000285a8(0x6573556c61636f4c,0xeb00000000644aa2);
    uVar3 = 0x112ff9ad8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_initStaticObject_11034f440)();
    auVar24._8_8_ = uVar3;
    auVar24._0_8_ = pcVar2;
    return auVar24;
  case (char *)0xee:
    auVar18._8_8_ = 0xeb00000000644972;
    auVar18._0_8_ = 0x6573556c61636f4c;
    return auVar18;
  }
  puVar5 = (undefined *)((ulong)(pcVar6 + -0x20) | 0x8000000000000000);
  pcVar6 = (char *)0xa;
code_r0x000103c2d470:
code_r0x000103c2d4d8:
  pcVar2 = (char *)((ulong)pcVar6 | 0xd000000000000014);
code_r0x000103c2d4e4:
  auVar11._8_8_ = puVar5;
  auVar11._0_8_ = pcVar2;
  return auVar11;
}



/* Entry: 103c2d554; end: 103c2d5ab;  */

void FUN_103c2d554(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103c2d304(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103c2d5ac; end: 103c2d5e3;  */

void FUN_103c2d5ac(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_103c2d688(param_2,param_3,FUN_103c2c754,&UNK_1106ecd68);
  if (unaff_x21 == 0) {
    *param_1 = (char)param_2;
  }
  return;
}



/* Entry: 103c2d5e4; end: 103c2d607;  */

void FUN_103c2d5e4(undefined8 *param_1,undefined8 param_2)

{
  FUN_103c2d35c();
  *param_1 = param_2;
  return;
}



/* Entry: 103c2d608; end: 103c2d687;  */

void FUN_103c2d608(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68478;
  func_0x000107c61520(&UNK_10dc68478,&UNK_1106ecd68);
  puRam0000000112ff9a48 = puVar1;
  return;
}



/* Entry: 103c2d688; end: 103c2d6f3;  */

undefined1 FUN_103c2d688(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uStack_31;
  
  uVar1 = param_1;
  (*param_3)();
  FUN_103c38cc0(&uStack_31,param_1,param_2,param_4,uVar1);
  func_0x000107c61574(param_1);
  return uStack_31;
}



/* Entry: 103c2d6f4; end: 103c2d733;  */

void FUN_103c2d6f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9a58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc68550;
  func_0x000107c61520(&DAT_10dc68550,&UNK_1106ecdf8);
  puRam0000000112ff9a58 = puVar1;
  return;
}



/* Entry: 103c2d734; end: 103c2d783;  */

ulong FUN_103c2d734(ulong param_1)

{
  func_0x000103c2e1b0();
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000103c2e1c4();
  if (2 < param_1) {
    param_1 = 3;
  }
  return param_1;
}



/* Entry: 103c2d784; end: 103c2d7af;  */

void FUN_103c2d784(void)

{
  func_0x0001000285a8(0x112ff9b00,&UNK_10dc68130);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 103c2d7b0; end: 103c2d81b;  */

undefined1  [16] FUN_103c2d7b0(char param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0xd000000000000022;
  if (param_1 == '\0') {
    pcVar2 = "erSessionServiceRegistry";
  }
  else {
    uVar1 = 0xd000000000000028;
    pcVar2 = "ionServiceRegistry";
    if (param_1 != '\x01') {
      uVar1 = 0xd000000000000022;
      pcVar2 = "stryModuleFactory";
    }
  }
  auVar3._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 103c2d81c; end: 103c2d873;  */

void FUN_103c2d81c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103c2d734(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103c2d874; end: 103c2d8ab;  */

void FUN_103c2d874(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_103c2d688(param_2,param_3,FUN_103c2d6f4,&UNK_1106ecdf8);
  if (unaff_x21 == 0) {
    *param_1 = (char)param_2;
  }
  return;
}



/* Entry: 103c2d8ac; end: 103c2d8cf;  */

void FUN_103c2d8ac(undefined8 *param_1,undefined8 param_2)

{
  FUN_103c2d784();
  *param_1 = param_2;
  return;
}



/* Entry: 103c2d8d0; end: 103c2d94f;  */

void FUN_103c2d8d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc685a0;
  func_0x000107c61520(&UNK_10dc685a0,&UNK_1106ecdf8);
  puRam0000000112ff9b08 = puVar1;
  return;
}



/* Entry: 103c2d950; end: 103c2d953;  */

void FUN_103c2d950(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68138;
  func_0x000107c61520(&UNK_10dc68138,&UNK_1106ecc48);
  puRam0000000112ff9b18 = puVar1;
  return;
}



/* Entry: 103c2d954; end: 103c2d993;  */

void FUN_103c2d954(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68138;
  func_0x000107c61520(&UNK_10dc68138,&UNK_1106ecc48);
  puRam0000000112ff9b18 = puVar1;
  return;
}



/* Entry: 103c2d994; end: 103c2d9a7;  */

void FUN_103c2d994(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103c2cfe4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103c2d9a8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103c2d9a8; end: 103c2d9e7;  */

void FUN_103c2d9a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc681f4;
  func_0x000107c61520(&DAT_10dc681f4,&UNK_1106ecc48);
  puRam0000000112ff9b20 = puVar1;
  return;
}



/* Entry: 103c2d9e8; end: 103c2da0b;  */

void FUN_103c2d9e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103c2cfa4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103c2da0c; end: 103c2da37;  */

void FUN_103c2da0c(void)

{
  FUN_103c2dd20(0x112ff9b28,0x112ff9b30,&UNK_10dc68220);
  return;
}



/* Entry: 103c2da38; end: 103c2da3b;  */

void FUN_103c2da38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68260;
  func_0x000107c61520(&UNK_10dc68260,&UNK_1106eccd8);
  puRam0000000112ff9b38 = puVar1;
  return;
}



/* Entry: 103c2da3c; end: 103c2da7b;  */

void FUN_103c2da3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68260;
  func_0x000107c61520(&UNK_10dc68260,&UNK_1106eccd8);
  puRam0000000112ff9b38 = puVar1;
  return;
}



/* Entry: 103c2da7c; end: 103c2da8f;  */

void FUN_103c2da7c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103c2d2c4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103c2da90();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103c2da90; end: 103c2dacf;  */

void FUN_103c2da90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc6831c;
  func_0x000107c61520(&DAT_10dc6831c,&UNK_1106eccd8);
  puRam0000000112ff9b40 = puVar1;
  return;
}



/* Entry: 103c2dad0; end: 103c2daf3;  */

void FUN_103c2dad0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103c2d284();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103c2daf4; end: 103c2db1f;  */

void FUN_103c2daf4(void)

{
  FUN_103c2dd20(0x112ff9b48,0x112ff9b50,&UNK_10dc68348);
  return;
}



/* Entry: 103c2db20; end: 103c2db23;  */

void FUN_103c2db20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68388;
  func_0x000107c61520(&UNK_10dc68388,&UNK_1106ecd68);
  puRam0000000112ff9b58 = puVar1;
  return;
}



/* Entry: 103c2db24; end: 103c2db63;  */

void FUN_103c2db24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc68388;
  func_0x000107c61520(&UNK_10dc68388,&UNK_1106ecd68);
  puRam0000000112ff9b58 = puVar1;
  return;
}



/* Entry: 103c2db64; end: 103c2db77;  */

void FUN_103c2db64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103c2d648)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103c2db78();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103c2db78; end: 103c2dbb7;  */

void FUN_103c2db78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc68444;
  func_0x000107c61520(&DAT_10dc68444,&UNK_1106ecd68);
  puRam0000000112ff9b60 = puVar1;
  return;
}



/* Entry: 103c2dbb8; end: 103c2dbdb;  */

void FUN_103c2dbb8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103c2d608();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103c2dbdc; end: 103c2dc07;  */

void FUN_103c2dbdc(void)

{
  FUN_103c2dd20(0x112ff9b68,0x112ff9b70,&UNK_10dc68470);
  return;
}



/* Entry: 103c2dc08; end: 103c2dc0b;  */

void FUN_103c2dc08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc684b0;
  func_0x000107c61520(&UNK_10dc684b0,&UNK_1106ecdf8);
  puRam0000000112ff9b78 = puVar1;
  return;
}



/* Entry: 103c2dc0c; end: 103c2dc4b;  */

void FUN_103c2dc0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc684b0;
  func_0x000107c61520(&UNK_10dc684b0,&UNK_1106ecdf8);
  puRam0000000112ff9b78 = puVar1;
  return;
}



/* Entry: 103c2dc4c; end: 103c2dc5f;  */

void FUN_103c2dc4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103c2d910)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103c2dc90();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103c2dc60; end: 103c2dc8f;  */

void FUN_103c2dc60(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103c2dc90; end: 103c2dccf;  */

void FUN_103c2dc90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff9b80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc6856c;
  func_0x000107c61520(&DAT_10dc6856c,&UNK_1106ecdf8);
  puRam0000000112ff9b80 = puVar1;
  return;
}



/* Entry: 103c2dcd0; end: 103c2dcf3;  */

void FUN_103c2dcd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103c2d8d0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103c2dcf4; end: 103c2dd1f;  */

void FUN_103c2dcf4(void)

{
  FUN_103c2dd20(0x112ff9b88,0x112ff9b90,&UNK_10dc68598);
  return;
}



/* Entry: 103c2dd20; end: 103c2dd63;  */

void FUN_103c2dd20(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 103c2dd64; end: 103c2e1ff;  */

void FUN_103c2dd64(void)

{
  return;
}



/* Entry: 103c2e200; end: 103c2e247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103c2e200(void)

{
  long extraout_x8;
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ff9ba0);
  func_0x000107c4b940(uVar1);
  func_0x0001003a611c();
  uVar2 = *(undefined8 *)(unaff_x20 + extraout_x8);
  func_0x000107c615f0(uVar2);
  func_0x000107c5d278(uVar1);
  return uVar2;
}



/* Entry: 103c2e248; end: 103c2e2ef;  */

/* WARNING: Possible PIC construction at 0x000103c2e288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c2e28c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2e248(undefined8 param_1)

{
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c4b940(*(undefined8 *)(unaff_x20 + _DAT_112ff9ba0));
  func_0x0001003a611c();
  uVar1 = *(undefined8 *)(unaff_x20 + extraout_x8);
  *(undefined8 *)(unaff_x20 + extraout_x8) = param_1;
  func_0x000107c615f0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 103c2e2f0; end: 103c2e577;  */

/* WARNING: Possible PIC construction at 0x000103c2e47c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c2e480) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2e2f0(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_1106ed0b8;
  func_0x000107c613fc(&UNK_1106ed0b8,0x18,7);
  *(long *)(puVar3 + 0x10) = param_2;
  cVar1 = *(char *)(param_1 + _DAT_112ff9bb0);
  lVar2 = param_2;
  func_0x000107c60bc4();
  if ((cVar1 == '\x01') && (FUN_103c2e200(), lVar2 != 0)) {
    (**(code **)(param_2 + 0x10))(param_2,lVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c615e8(lVar2);
  }
  else {
    uVar4 = 0;
    func_0x000107c5fd0c(0);
    FUN_103c2e578(&stack0xffffffffffffffb0 + -extraout_x8,1,1,uVar4);
    uVar5 = 0;
    func_0x000103c300ec();
    func_0x000107c61538();
    uVar4 = uVar5;
    FUN_103c2e678();
    puVar6 = &UNK_1106ed0e0;
    func_0x000107c613fc(&UNK_1106ed0e0,0x38,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar5;
    *(undefined8 *)(puVar6 + 0x18) = uVar4;
    *(undefined8 *)(puVar6 + 0x20) = 0x103c2f69c;
    *(undefined **)(puVar6 + 0x28) = puVar3;
    *(long *)(puVar6 + 0x30) = param_1;
    func_0x000107c6157c(puVar3);
    func_0x000107c61174(param_1);
    uVar4 = 0;
    func_0x0001000abba4(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&UNK_10dc686e0,puVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_2);
  return;
}



/* Entry: 103c2e578; end: 103c2e583;  */

void FUN_103c2e578(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x000103c2e580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(in_x3 + -8) + 0x38))();
  return;
}



/* Entry: 103c2e584; end: 103c2e5eb;  */

void FUN_103c2e584(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 in_x3;
  undefined8 in_x4;
  long in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  uVar1 = 0;
  func_0x000103c300ec();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  func_0x000107c61538();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103c2e5ec;
  plVar2[4] = in_x5;
  plVar3 = plVar2;
  func_0x000103c2f9e8();
  uVar4 = *(long *)(plVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[5] = uVar4;
  func_0x000103c2fb64();
  uVar5 = uVar4;
  func_0x000103c2fa6c();
  plVar2[6] = uVar5;
  FUN_103c2e678();
  plVar2[7] = uVar5;
  func_0x000107c5fca8();
  plVar2[8] = uVar4;
  plVar2[9] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c2f09c,uVar4,uVar5);
  return;
}



/* Entry: 103c2e5ec; end: 103c2e637;  */

void FUN_103c2e5ec(undefined8 param_1)

{
  long extraout_x9;
  
  func_0x000103c2fb8c();
  *(undefined8 *)(extraout_x9 + 0x38) = param_1;
  func_0x000103c2fb20(*(undefined8 *)(extraout_x9 + 0x30));
  FUN_103c2e678();
  func_0x000103c2fa30();
  func_0x000103c2fb34();
  func_0x000103c2fb28(FUN_103c2e638);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)();
  return;
}



/* Entry: 103c2e638; end: 103c2e677;  */

void FUN_103c2e638(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(unaff_x22 + 0x10))(uVar1);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103c2e674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c2e678; end: 103c2e6bb;  */

void FUN_103c2e678(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ff9bd8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000103c300ec(0xff);
  puVar2 = &UNK_10dc687f0;
  func_0x000107c61520(&UNK_10dc687f0,uVar1);
  puRam0000000112ff9bd8 = puVar2;
  return;
}



/* Entry: 103c2e6bc; end: 103c2e6fb;  */

void FUN_103c2e6bc(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 in_x3;
  long unaff_x20;
  long unaff_x22;
  undefined8 unaff_x25;
  
  func_0x000103c2fa08();
  func_0x000103c2fa84();
  func_0x000103c2f9b0();
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x25;
  uVar1 = 0;
  func_0x000103c300ec();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  func_0x000107c61538();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103c2e5ec;
  plVar2[4] = unaff_x20;
  plVar3 = plVar2;
  func_0x000103c2f9e8();
  uVar4 = *(long *)(plVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[5] = uVar4;
  func_0x000103c2fb64();
  uVar5 = uVar4;
  func_0x000103c2fa6c();
  plVar2[6] = uVar5;
  FUN_103c2e678();
  plVar2[7] = uVar5;
  func_0x000107c5fca8();
  plVar2[8] = uVar4;
  plVar2[9] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c2f09c,uVar4,uVar5);
  return;
}



/* Entry: 103c2e6fc; end: 103c2e96b;  */

ulong FUN_103c2e6fc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_c0 + -extraout_x8;
  func_0x0001000abe04(param_3,puVar6);
  lVar1 = 0;
  func_0x000107c5fd0c();
  puVar2 = puVar6;
  FUN_103c2f79c(puVar6,1,lVar1);
  uVar8 = param_5;
  func_0x000107c6157c(param_5);
  if ((int)puVar2 == 1) {
    func_0x0001000abe54(puVar6);
    uVar8 = 0x1c00;
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(*(long *)(lVar1 + -8) + 8))(puVar6,lVar1);
    uVar8 = uVar8 & 0xff | 0x1c00;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar9 = *(long *)(param_5 + 0x18);
  func_0x000107c615f0(lVar1);
  func_0x000107c61574(param_5);
  if (lVar1 == 0) {
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar7 = lVar1;
    func_0x000107c614f0();
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  if (param_2 == 0) {
    func_0x0001000abe54(param_3);
    puVar3 = &UNK_1106ed130;
    func_0x000107c613fc(&UNK_1106ed130,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    uVar4 = 0x112daaec0;
    func_0x0001000285a8(0x112daaec0,&UNK_10d9538e0);
    if (lVar9 == 0 && lVar7 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      puVar5 = &uStack_80;
      lStack_70 = lVar7;
      lStack_68 = lVar9;
    }
    func_0x000107c615bc(uVar8,puVar5,uVar4,&UNK_10dc68790,puVar3);
  }
  else {
    func_0x000107c5fb28(param_1,param_2);
    func_0x000107c6142c(param_2);
    puVar3 = &UNK_1106ed158;
    func_0x000107c613fc(&UNK_1106ed158,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    func_0x000107c6157c(param_5);
    uVar4 = 0x112daaec0;
    func_0x0001000285a8(0x112daaec0,&UNK_10d9538e0);
    puStack_b0 = (undefined8 *)0x0;
    if (lVar9 != 0 || lVar7 != 0) {
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &uStack_a0;
      lStack_90 = lVar7;
      lStack_88 = lVar9;
    }
    uStack_b8 = 7;
    lStack_a8 = param_1 + 0x20;
    func_0x000107c615bc(uVar8,&uStack_b8,uVar4,&UNK_10dc68798,puVar3);
    func_0x000107c61574(param_1);
    func_0x0001000abe54(param_3);
    func_0x000107c61574(param_5);
  }
  return uVar8;
}



/* Entry: 103c2e96c; end: 103c2e9b7; -[_TtC14ValdiCoreSwift25AsyncValdiRuntimeProvider getRuntime:] */

void FUN_103c2e96c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  FUN_103c2e2f0();
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103c2e9b8; end: 103c2eaf7;  */

void FUN_103c2e9b8(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  undefined8 unaff_x22;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = param_1;
  func_0x000103c2f9e8();
  func_0x000103c2fb78();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000103c2faf0();
  if (((bool)in_ZR) && (FUN_103c2e200(), lVar1 != 0)) {
    puVar4 = &UNK_1106ecf78;
    func_0x000103c2fad4(&UNK_1106ecf78,0x20);
    *(long *)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    pcStack_60 = FUN_103c2ecd4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100f1c768;
    puStack_68 = &UNK_1106ecf90;
    ppuVar2 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar2);
    puVar4 = puStack_58;
    func_0x000103c2facc();
    func_0x000107c61574(puVar4);
    func_0x000107c440d8(lVar1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(lVar1);
  }
  else {
    func_0x000103c2fb5c();
    func_0x000103c2fa78();
    func_0x000103c2fb64();
    func_0x000103c2fa6c();
    uVar3 = unaff_x22;
    FUN_103c2e678();
    puVar4 = &UNK_1106ecf50;
    func_0x000103c2fad4(&UNK_1106ecf50,0x38);
    *(undefined8 *)(puVar4 + 0x10) = unaff_x22;
    *(undefined8 *)(puVar4 + 0x18) = uVar3;
    *(undefined8 *)(puVar4 + 0x20) = unaff_x20;
    *(long *)(puVar4 + 0x28) = param_1;
    *(undefined8 *)(puVar4 + 0x30) = param_2;
    func_0x000103c2facc();
    func_0x000107c61174();
    func_0x000103c2fadc();
    func_0x000107c61574();
  }
  return;
}



/* Entry: 103c2eaf8; end: 103c2eb5f;  */

void FUN_103c2eaf8(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x5;
  uVar1 = 0;
  func_0x000103c300ec();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  func_0x000107c61538();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103c2eb60;
  plVar2[4] = in_x3;
  plVar3 = plVar2;
  func_0x000103c2f9e8();
  uVar4 = *(long *)(plVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[5] = uVar4;
  func_0x000103c2fb64();
  uVar5 = uVar4;
  func_0x000103c2fa6c();
  plVar2[6] = uVar5;
  FUN_103c2e678();
  plVar2[7] = uVar5;
  func_0x000107c5fca8();
  plVar2[8] = uVar4;
  plVar2[9] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c2f09c,uVar4,uVar5);
  return;
}



/* Entry: 103c2eb60; end: 103c2ebab;  */

void FUN_103c2eb60(undefined8 param_1)

{
  long extraout_x9;
  
  func_0x000103c2fb8c();
  *(undefined8 *)(extraout_x9 + 0x68) = param_1;
  func_0x000103c2fb20(*(undefined8 *)(extraout_x9 + 0x60));
  FUN_103c2e678();
  func_0x000103c2fa30();
  func_0x000103c2fb34();
  func_0x000103c2fb28(FUN_103c2ebac);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)();
  return;
}



/* Entry: 103c2ebac; end: 103c2ec6b;  */

void FUN_103c2ebac(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  puVar1 = &UNK_1106ed180;
  func_0x000103c2fad4(&UNK_1106ed180,0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x103c2f958;
  *(undefined **)(unaff_x22 + 0x38) = puVar1;
  puVar2 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_100f1c768;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1106ed198;
  func_0x000107c60bc4();
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000103c2facc();
  func_0x000107c61574(uVar4);
  func_0x000107c440d8(uVar3);
  func_0x000107c60bd0(puVar2);
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103c2ec68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c2ec6c; end: 103c2ecd3;  */

void FUN_103c2ec6c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_x3;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c615b8(0x70);
  func_0x000103c2fa84();
  func_0x000103c2f9b0();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  uVar1 = 0;
  func_0x000103c300ec();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  func_0x000107c61538();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103c2eb60;
  plVar2[4] = in_x3;
  plVar3 = plVar2;
  func_0x000103c2f9e8();
  uVar4 = *(long *)(plVar3[-1] + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[5] = uVar4;
  func_0x000103c2fb64();
  uVar5 = uVar4;
  func_0x000103c2fa6c();
  plVar2[6] = uVar5;
  FUN_103c2e678();
  plVar2[7] = uVar5;
  func_0x000107c5fca8();
  plVar2[8] = uVar4;
  plVar2[9] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c2f09c,uVar4,uVar5);
  return;
}



/* Entry: 103c2ecd4; end: 103c2ecf3;  */

void FUN_103c2ecd4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103c2ecf4; end: 103c2ed0f;  */

void FUN_103c2ecf4(long param_1,long param_2)

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



/* Entry: 103c2ed10; end: 103c2ed83; -[_TtC14ValdiCoreSwift25AsyncValdiRuntimeProvider getJSRuntime:] */

void FUN_103c2ed10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1106ed090;
  func_0x000107c613fc(&UNK_1106ed090,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_103c2e9b8(0x103c2f698,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103c2ed84; end: 103c2eddf;  */

void FUN_103c2ed84(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  FUN_103c2e200();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000103c2fa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c2ede0;
  plVar1[4] = unaff_x20;
  plVar2 = plVar1;
  func_0x000103c2f9e8();
  uVar3 = *(long *)(plVar2[-1] + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[5] = uVar3;
  func_0x000103c2fb64();
  uVar4 = uVar3;
  func_0x000103c2fa6c();
  plVar1[6] = uVar4;
  FUN_103c2e678();
  plVar1[7] = uVar4;
  func_0x000107c5fca8();
  plVar1[8] = uVar3;
  plVar1[9] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c2f09c,uVar3,uVar4);
  return;
}



/* Entry: 103c2ede0; end: 103c2ee2f;  */

void FUN_103c2ede0(undefined8 param_1)

{
  undefined8 uVar1;
  long extraout_x9;
  undefined8 uVar2;
  
  func_0x000103c2fb8c();
  uVar1 = *(undefined8 *)(extraout_x9 + 0x18);
  uVar2 = *(undefined8 *)(extraout_x9 + 0x10);
  *(undefined8 *)(extraout_x9 + 0x28) = param_1;
  func_0x000103c2fb20(*(undefined8 *)(extraout_x9 + 0x20));
  func_0x000101bcca78(uVar2,uVar1);
  func_0x000103c2fb34();
  func_0x000103c2fb28(FUN_103c2ee30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)();
  return;
}



/* Entry: 103c2ee30; end: 103c2ee3b;  */

void FUN_103c2ee30(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000103c2ee38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Entry: 103c2ee3c; end: 103c2ee9b;  */

void FUN_103c2ee3c(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x98) = param_1;
  *(ulong *)(unaff_x22 + 0xa0) = param_2;
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103c2ee9c;
  plVar2[2] = param_1;
  plVar2[3] = param_2 & 0xcfffffffffffffff;
  FUN_103c2e200();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000103c2fa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar2[1])();
    return;
  }
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  plVar2[4] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_103c2ede0;
  plVar1[4] = unaff_x20;
  plVar2 = plVar1;
  func_0x000103c2f9e8();
  uVar3 = *(long *)(plVar2[-1] + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[5] = uVar3;
  func_0x000103c2fb64();
  uVar4 = uVar3;
  func_0x000103c2fa6c();
  plVar1[6] = uVar4;
  FUN_103c2e678();
  plVar1[7] = uVar4;
  func_0x000107c5fca8();
  plVar1[8] = uVar3;
  plVar1[9] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c2f09c,uVar3,uVar4);
  return;
}



/* Entry: 103c2ee9c; end: 103c2ef67;  */

void FUN_103c2ee9c(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  long *plVar4;
  long lVar5;
  
  lVar3 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(undefined8 *)(lVar3 + 0xb0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa8));
  plVar4 = (long *)(lVar3 + 0x10);
  *plVar4 = lVar5;
  *(long *)(lVar3 + 0x38) = lVar3 + 0x90;
  *(code **)(lVar3 + 0x18) = FUN_103c2ef68;
  plVar1 = plVar4;
  func_0x000107c61448(plVar4,0);
  uVar2 = 0x112ff9be0;
  func_0x0001000285a8(0x112ff9be0,&UNK_10dc68640);
  *(undefined **)(lVar3 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(lVar3 + 0x88) = uVar2;
  *(undefined8 *)(lVar3 + 0x58) = 0x42000000;
  *(code **)(lVar3 + 0x60) = FUN_103c2efd4;
  *(undefined **)(lVar3 + 0x68) = &UNK_1106ecfb8;
  *(long **)(lVar3 + 0x70) = plVar1;
  func_0x000107c440d8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(plVar4);
  return;
}



/* Entry: 103c2ef68; end: 103c2efd3;  */

void FUN_103c2ef68(void)

{
  long *unaff_x22;
  
  func_0x000101bcca78(*(undefined8 *)(*unaff_x22 + 0x98),*(undefined8 *)(*unaff_x22 + 0xa0));
  func_0x000103c2fb34();
  func_0x000103c2fb28(0x103c2efa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)();
  return;
}



/* Entry: 103c2efd4; end: 103c2f00f;  */

void FUN_103c2efd4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar2 = *plVar1;
  func_0x000107c615f0(param_2);
  **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 103c2f010; end: 103c2f01f;  */

void FUN_103c2f010(long param_1,undefined8 param_2)

{
  **(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 103c2f020; end: 103c2f09b;  */

void FUN_103c2f020(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  func_0x000103c2f9e8();
  uVar1 = *(long *)(*(long *)(param_1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  func_0x000103c2fb64();
  uVar2 = uVar1;
  func_0x000103c2fa6c();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  FUN_103c2e678();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  func_0x000107c5fca8();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c2f09c,uVar1,uVar2);
  return;
}



/* Entry: 103c2f09c; end: 103c2f22b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2f09c(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  FUN_103c2e200();
  lVar5 = _DAT_112ff9b98;
  if (param_1 != 0) {
    func_0x000103c2fb54();
    func_0x000103c2fb6c();
                    /* WARNING: Could not recover jumptable at 0x000103c2f0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  lVar10 = *(long *)(unaff_x22 + 0x20);
  *(long *)(unaff_x22 + 0x50) = _DAT_112ff9b98;
  lVar8 = *(long *)(lVar10 + lVar5);
  *(long *)(unaff_x22 + 0x58) = lVar8;
  if (lVar8 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar1 = (undefined8 *)(lVar10 + _DAT_112ff9bb8);
    func_0x000103c2fb5c();
    uVar12 = puVar1[1];
    uVar11 = *puVar1;
    func_0x000103c2fa78(uVar9);
    puVar3 = &UNK_1106ed108;
    func_0x000103c2fad4(&UNK_1106ed108,0x30);
    *(undefined8 *)(puVar3 + 0x10) = uVar7;
    *(undefined8 *)(puVar3 + 0x18) = uVar2;
    *(undefined8 *)(puVar3 + 0x28) = uVar12;
    *(undefined8 *)(puVar3 + 0x20) = uVar11;
    func_0x000103c2facc();
    lVar8 = 0;
    FUN_103c2e6fc(0,0,uVar9,&UNK_10dc686f0,puVar3);
    *(long *)(unaff_x22 + 0x68) = lVar8;
    uVar7 = *(undefined8 *)(lVar10 + lVar5);
    *(long *)(lVar10 + lVar5) = lVar8;
    func_0x000107c6157c();
    func_0x000107c61574(uVar7);
    plVar6 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar6;
    plVar4 = plVar6;
    func_0x000103c2fa90();
    *plVar6 = unaff_x22;
    plVar6[1] = 0x103c2f298;
    lVar5 = unaff_x22 + 0x10;
  }
  else {
    plVar6 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c6157c(lVar8);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x60) = plVar6;
    plVar4 = plVar6;
    func_0x000103c2fa90();
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_103c2f22c;
    lVar5 = unaff_x22 + 0x18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(lVar5,lVar8,plVar4);
  return;
}



/* Entry: 103c2f22c; end: 103c2f2d3;  */

void FUN_103c2f22c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x103c2f268,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48));
  return;
}



/* Entry: 103c2f2d4; end: 103c2f33b;  */

void FUN_103c2f2d4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c615f0(uVar3);
  FUN_103c2e248();
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = 0;
  func_0x000107c61574(uVar1);
  func_0x000103c2fb54();
                    /* WARNING: Could not recover jumptable at 0x000103c2f338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 103c2f33c; end: 103c2f3b7;  */

void FUN_103c2f33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0;
  func_0x000103c300ec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000107c61538();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  iVar1 = *param_4;
  plVar3 = (long *)(ulong)(uint)param_4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103c2f3b8;
                    /* WARNING: Could not recover jumptable at 0x000103c2f3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))();
  return;
}



/* Entry: 103c2f3b8; end: 103c2f403;  */

void FUN_103c2f3b8(undefined8 param_1)

{
  long extraout_x9;
  
  func_0x000103c2fb8c();
  *(undefined8 *)(extraout_x9 + 0x30) = param_1;
  func_0x000103c2fb20(*(undefined8 *)(extraout_x9 + 0x28));
  FUN_103c2e678();
  func_0x000103c2fa30();
  func_0x000103c2fb34();
  func_0x000103c2fb28(FUN_103c2f404);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)();
  return;
}



/* Entry: 103c2f404; end: 103c2f417;  */

void FUN_103c2f404(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000103c2f414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c2f418; end: 103c2f453; -[_TtC14ValdiCoreSwift25AsyncValdiRuntimeProvider init] */

void FUN_103c2f418(void)

{
  func_0x000107c27ce0();
  func_0x0001003a6058();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c2f454; end: 103c2f4ab; -[_TtC14ValdiCoreSwift25AsyncValdiRuntimeProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c2f454(long param_1)

{
  long extraout_x8;
  
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff9bb8 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff9b98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff9ba0));
  func_0x0001003a611c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + extraout_x8));
  return;
}



/* Entry: 103c2f4ac; end: 103c2f50b;  */

void FUN_103c2f4ac(long param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x103c2f95c;
  plVar4[2] = param_1;
  plVar4[3] = param_2 & 0xcfffffffffffffff;
  FUN_103c2e200();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000103c2fa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar4[1])();
    return;
  }
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  plVar4[4] = (long)plVar1;
  *plVar1 = (long)plVar4;
  plVar1[1] = (long)FUN_103c2ede0;
  plVar1[4] = lVar5;
  plVar4 = plVar1;
  func_0x000103c2f9e8();
  uVar2 = *(long *)(plVar4[-1] + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[5] = uVar2;
  func_0x000103c2fb64();
  uVar3 = uVar2;
  func_0x000103c2fa6c();
  plVar1[6] = uVar3;
  FUN_103c2e678();
  plVar1[7] = uVar3;
  func_0x000107c5fca8();
  plVar1[8] = uVar2;
  plVar1[9] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c2f09c,uVar2,uVar3);
  return;
}



/* Entry: 103c2f50c; end: 103c2f56b;  */

void FUN_103c2f50c(long param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_103c2f56c;
  plVar4[0x13] = param_1;
  plVar4[0x14] = param_2 & 0xcfffffffffffffff;
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  plVar4[0x15] = (long)plVar1;
  *plVar1 = (long)plVar4;
  plVar1[1] = (long)FUN_103c2ee9c;
  plVar1[2] = param_1;
  plVar1[3] = param_2 & 0xcfffffffffffffff;
  FUN_103c2e200();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000103c2fa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar1[1])();
    return;
  }
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  plVar1[4] = (long)plVar4;
  *plVar4 = (long)plVar1;
  plVar4[1] = (long)FUN_103c2ede0;
  plVar4[4] = lVar5;
  plVar1 = plVar4;
  func_0x000103c2f9e8();
  uVar2 = *(long *)(plVar1[-1] + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[5] = uVar2;
  func_0x000103c2fb64();
  uVar3 = uVar2;
  func_0x000103c2fa6c();
  plVar4[6] = uVar3;
  FUN_103c2e678();
  plVar4[7] = uVar3;
  func_0x000107c5fca8();
  plVar4[8] = uVar2;
  plVar4[9] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c2f09c,uVar2,uVar3);
  return;
}


