/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048a84f0; end: 1048a84f7;  */

void FUN_1048a84f0(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte bVar9;
  byte *unaff_x20;
  
  bVar9 = *unaff_x20;
  bVar4 = bVar9 >> 5;
  if (2 < bVar4) {
    if (bVar4 < 5) {
      if (bVar4 == 3) {
        if (bVar9 < 0x62) {
          if (bVar9 == 0x60) {
            uVar7 = 2;
          }
          else {
            uVar7 = 3;
          }
        }
        else if (bVar9 == 0x62) {
          uVar7 = 4;
        }
        else {
          uVar7 = 5;
        }
      }
      else if (bVar9 < 0x82) {
        if (bVar9 == 0x80) {
          uVar7 = 6;
        }
        else {
          uVar7 = 7;
        }
      }
      else if (bVar9 == 0x82) {
        uVar7 = 8;
      }
      else {
        uVar7 = 9;
      }
    }
    else if (bVar4 == 5) {
      if (bVar9 < 0xa2) {
        if (bVar9 == 0xa0) {
          uVar7 = 10;
        }
        else {
          uVar7 = 0xb;
        }
      }
      else if (bVar9 == 0xa2) {
        uVar7 = 0xc;
      }
      else {
        uVar7 = 0xd;
      }
    }
    else if (bVar9 == 0xc0) {
      uVar7 = 0xe;
    }
    else {
      uVar7 = 0x10;
    }
    func_0x000107c60690(uVar7);
    return;
  }
  if (bVar4 == 0) {
    func_0x000107c60690(0);
    pcVar1 = "doubleEncryptionResolver";
    pcVar2 = "doubleEncryptionInvoker";
    pcVar3 = "encryptionInfoProvider";
    bVar6 = bVar9 == 1;
    uVar7 = 0xd000000000000017;
    if (!bVar6) {
      uVar7 = 0xd000000000000016;
    }
  }
  else {
    if (bVar4 != 1) {
      func_0x000107c60690(0xf);
      bVar6 = (bVar9 & 0x1f) != 1;
      uVar7 = 0x7475436b63697571;
      if (bVar6) {
        uVar7 = 0x6c6172656e6567;
      }
      uVar8 = 0xe800000000000000;
      if (bVar6) {
        uVar8 = 0xe700000000000000;
      }
      func_0x000107c5fb58(param_1,uVar7,uVar8);
      goto code_r0x00010085aea4;
    }
    bVar9 = bVar9 & 0x1f;
    func_0x000107c60690(1);
    pcVar1 = "opportunisticRetranscode";
    pcVar2 = "snapDocTranscode";
    uVar7 = 0xd000000000000010;
    pcVar3 = "snapDocTranscodeForExport";
    bVar6 = bVar9 == 1;
    if (!bVar6) {
      uVar7 = 0xd000000000000019;
    }
  }
  if (!bVar6) {
    pcVar2 = pcVar3;
  }
  uVar5 = 0xd000000000000018;
  if (bVar9 != 0) {
    uVar5 = uVar7;
    pcVar1 = pcVar2;
  }
  func_0x000107c5fb58(param_1,uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  uVar8 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
code_r0x00010085aea4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar8);
  return;
}



/* Entry: 1048a84f8; end: 1048a8537;  */

void FUN_1048a84f8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x00010085ad2c(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a8538; end: 1048a8543;  */

bool FUN_1048a8538(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = *param_2;
  bVar2 = *param_1;
  bVar3 = bVar2 >> 5;
  if (bVar3 < 3) {
    if (bVar3 == 0) {
      if (bVar1 < 0x20) {
        return bVar2 == bVar1;
      }
    }
    else if (bVar3 == 1) {
      if ((bVar1 & 0xe0) == 0x20) {
LAB_1048a8644:
        return ((bVar1 ^ bVar2) & 0x1f) == 0;
      }
    }
    else if ((bVar1 & 0xe0) == 0x40) goto LAB_1048a8644;
  }
  else if (bVar3 < 5) {
    if (bVar3 == 3) {
      if (bVar2 < 0x62) {
        if (bVar2 == 0x60) {
          if (bVar1 == 0x60) {
            return true;
          }
        }
        else if (bVar1 == 0x61) {
          return true;
        }
      }
      else if (bVar2 == 0x62) {
        if (bVar1 == 0x62) {
          return true;
        }
      }
      else if (bVar1 == 99) {
        return true;
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
  }
  else if (bVar3 == 5) {
    if (bVar2 < 0xa2) {
      if (bVar2 == 0xa0) {
        if (bVar1 == 0xa0) {
          return true;
        }
      }
      else if (bVar1 == 0xa1) {
        return true;
      }
    }
    else if (bVar2 == 0xa2) {
      if (bVar1 == 0xa2) {
        return true;
      }
    }
    else if (bVar1 == 0xa3) {
      return true;
    }
  }
  else if (bVar2 == 0xc0) {
    if (bVar1 == 0xc0) {
      return true;
    }
  }
  else if (bVar1 == 0xc1) {
    return true;
  }
  return false;
}



/* Entry: 1048a8544; end: 1048a859b;  */

undefined8 FUN_1048a8544(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x20);
    uStack_38 = param_2;
    do {
      func_0x000100877620(auStack_40,*puVar2);
      lVar1 = lVar1 + -1;
      param_2 = uStack_38;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return param_2;
}



/* Entry: 1048a859c; end: 1048a874b;  */

bool FUN_1048a859c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1 & 0xff;
  uVar2 = param_2 & 0xff;
  uVar3 = param_1 >> 5 & 7;
  if (uVar3 < 3) {
    if (uVar3 == 0) {
      if (uVar2 < 0x20) {
        return uVar1 == uVar2;
      }
    }
    else if (uVar3 == 1) {
      if ((param_2 & 0xe0) == 0x20) {
LAB_1048a8644:
        return ((uVar2 ^ uVar1) & 0x1f) == 0;
      }
    }
    else if ((param_2 & 0xe0) == 0x40) goto LAB_1048a8644;
  }
  else if (uVar3 < 5) {
    if (uVar3 == 3) {
      if (uVar1 < 0x62) {
        if (uVar1 == 0x60) {
          if (uVar2 == 0x60) {
            return true;
          }
        }
        else if (uVar2 == 0x61) {
          return true;
        }
      }
      else if (uVar1 == 0x62) {
        if (uVar2 == 0x62) {
          return true;
        }
      }
      else if (uVar2 == 99) {
        return true;
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
  }
  else if (uVar3 == 5) {
    if (uVar1 < 0xa2) {
      if (uVar1 == 0xa0) {
        if (uVar2 == 0xa0) {
          return true;
        }
      }
      else if (uVar2 == 0xa1) {
        return true;
      }
    }
    else if (uVar1 == 0xa2) {
      if (uVar2 == 0xa2) {
        return true;
      }
    }
    else if (uVar2 == 0xa3) {
      return true;
    }
  }
  else if (uVar1 == 0xc0) {
    if (uVar2 == 0xc0) {
      return true;
    }
  }
  else if (uVar2 == 0xc1) {
    return true;
  }
  return false;
}



/* Entry: 1048a874c; end: 1048a87b7;  */

ulong FUN_1048a874c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1048a87b8; end: 1048a87bb;  */

void FUN_1048a87b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40460;
  _swift_getWitnessTable(&UNK_10dd40460,&UNK_1107b0348);
  puRam0000000113099cf8 = puVar1;
  return;
}



/* Entry: 1048a87bc; end: 1048a87fb;  */

void FUN_1048a87bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40460;
  _swift_getWitnessTable(&UNK_10dd40460,&UNK_1107b0348);
  puRam0000000113099cf8 = puVar1;
  return;
}



/* Entry: 1048a87fc; end: 1048a87ff;  */

void FUN_1048a87fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099d00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40500;
  _swift_getWitnessTable(&UNK_10dd40500,&UNK_1107b03d8);
  puRam0000000113099d00 = puVar1;
  return;
}



/* Entry: 1048a8800; end: 1048a883f;  */

void FUN_1048a8800(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099d00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40500;
  _swift_getWitnessTable(&UNK_10dd40500,&UNK_1107b03d8);
  puRam0000000113099d00 = puVar1;
  return;
}



/* Entry: 1048a8840; end: 1048a8843;  */

void FUN_1048a8840(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099d08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd405a0;
  _swift_getWitnessTable(&UNK_10dd405a0,&UNK_1107b0468);
  puRam0000000113099d08 = puVar1;
  return;
}



/* Entry: 1048a8844; end: 1048a8883;  */

void FUN_1048a8844(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099d08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd405a0;
  _swift_getWitnessTable(&UNK_10dd405a0,&UNK_1107b0468);
  puRam0000000113099d08 = puVar1;
  return;
}



/* Entry: 1048a8884; end: 1048a88a7;  */

void FUN_1048a8884(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a88a8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a88a8; end: 1048a88e7;  */

void FUN_1048a88a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099d10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4065c;
  _swift_getWitnessTable(&UNK_10dd4065c,&UNK_1107b04f8);
  puRam0000000113099d10 = puVar1;
  return;
}



/* Entry: 1048a88e8; end: 1048a88eb;  */

void FUN_1048a88e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4069c;
  _swift_getWitnessTable(&UNK_10dd4069c,&UNK_1107b04f8);
  puRam0000000113099d18 = puVar1;
  return;
}



/* Entry: 1048a88ec; end: 1048a892b;  */

void FUN_1048a88ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd4069c;
  _swift_getWitnessTable(&UNK_10dd4069c,&UNK_1107b04f8);
  puRam0000000113099d18 = puVar1;
  return;
}



/* Entry: 1048a892c; end: 1048a8ee3;  */

void FUN_1048a892c(void)

{
  return;
}



/* Entry: 1048a8ee4; end: 1048a8f8f;  */

void FUN_1048a8ee4(void)

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



/* Entry: 1048a8f90; end: 1048a8fe7;  */

undefined8 FUN_1048a8f90(void)

{
  undefined8 uVar1;
  byte *unaff_x20;
  
  if ((1 << (ulong)(*unaff_x20 & 0x1f) & 0xd7U) != 0) {
    return 0;
  }
  uVar1 = 0x112e04798;
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  _swift_initStaticObject();
  func_0x000100c8a830();
  return uVar1;
}



/* Entry: 1048a8fe8; end: 1048a8ff3;  */

undefined1  [16] FUN_1048a8fe8(void)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  bVar3 = *unaff_x20;
  if (3 < bVar3) {
    pcVar2 = "TweakUsageReporter";
    uVar4 = 0xd000000000000015;
    if (bVar3 != 6) {
      pcVar2 = "SpectaclesDeviceConnection";
      uVar4 = 0xd000000000000012;
    }
    pcVar1 = "NavigationServicesPrewarm";
    uVar5 = 0xd00000000000001a;
    if (bVar3 != 4) {
      pcVar1 = "SaberStartupReporting";
      uVar5 = 0xd000000000000019;
    }
    if (bVar3 < 6) {
      pcVar2 = pcVar1;
      uVar4 = uVar5;
    }
    auVar7._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
    auVar7._0_8_ = uVar4;
    return auVar7;
  }
  pcVar2 = "UserSessionRepositoryPrewarm";
  uVar4 = 0xd00000000000001a;
  if (bVar3 != 2) {
    pcVar2 = "UserStorageServicesCleanup";
    uVar4 = 0xd00000000000001c;
  }
  pcVar1 = "geServicesPrewarm";
  uVar5 = 0xd000000000000024;
  if (bVar3 != 0) {
    pcVar1 = "UserStorageServicesPrewarm";
    uVar5 = 0xd000000000000021;
  }
  if (bVar3 < 2) {
    pcVar2 = pcVar1;
    uVar4 = uVar5;
  }
  auVar6._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 1048a8ff4; end: 1048a9033;  */

void FUN_1048a8ff4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099e30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40768;
  _swift_getWitnessTable(&UNK_10dd40768,&UNK_1107b0608);
  puRam0000000113099e30 = puVar1;
  return;
}



/* Entry: 1048a9034; end: 1048a9057;  */

void FUN_1048a9034(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048a9058();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048a9058; end: 1048a9097;  */

void FUN_1048a9058(void)

{
  undefined *puVar1;
  
  if (puRam0000000113099e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40790;
  _swift_getWitnessTable(&UNK_10dd40790,&UNK_1107b0608);
  puRam0000000113099e38 = puVar1;
  return;
}



/* Entry: 1048a9098; end: 1048a91fb;  */

int FUN_1048a9098(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048a9114;
        goto LAB_1048a90f8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048a90f8:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_1048a9114:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048a91fc; end: 1048a94c3;  */

void FUN_1048a91fc(ulong param_1,byte param_2)

{
  uint uVar1;
  long lVar2;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      lVar2 = 0x112e04798;
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      _swift_initStackObject();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(ulong *)(lVar2 + 0x20) = param_1;
      func_0x000100c8a830();
      _swift_setDeallocating(lVar2);
      return;
    }
    if (param_2 != 1) goto LAB_1048a92bc;
    uVar1 = (uint)param_1 & 0xff;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      if ((param_1 & 0xff) == 0) {
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
      else {
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
    }
    else if (uVar1 == 2) {
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    }
    else {
      if (uVar1 != 3) {
        return;
      }
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    }
  }
  else if (param_2 == 2) {
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  else if (param_2 == 3) {
    switch(param_1) {
    case 4:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    case 5:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    case 6:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    case 7:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    case 8:
    case 10:
    case 0xd:
      goto LAB_1048a9328;
    case 9:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    case 0xb:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    case 0xc:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    default:
      goto LAB_1048a92bc;
    }
  }
  else {
LAB_1048a92bc:
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  _swift_initStaticObject();
  func_0x000100c8a830();
LAB_1048a9328:
  return;
}



/* Entry: 1048a94c4; end: 1048a996f;  */

undefined1  [16] FUN_1048a94c4(ulong param_1,byte param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      uVar2 = 0xd000000000000013;
      uVar4 = 0x800000010ef2eb70;
      goto LAB_1048a97a0;
    }
    lVar3 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    _swift_allocObject();
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    *(undefined8 *)(lVar3 + 0x20) = 0xd000000000000017;
    *(undefined8 *)(lVar3 + 0x28) = 0x800000010f2175e0;
    uVar1 = (uint)param_1 & 0xff;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      if ((param_1 & 0xff) == 0) {
        uVar5 = 0xeb00000000646565;
        uVar6 = 0x4673646e65697266;
      }
      else {
        uVar5 = 0xe300000000000000;
        uVar6 = 0x70616d;
      }
    }
    else if (uVar1 == 2) {
      uVar5 = 0xe500000000000000;
      uVar6 = 0x79726f7473;
    }
    else if (uVar1 == 3) {
      uVar5 = 0xed00006465654674;
      uVar6 = 0x6867696c746f7073;
    }
    else {
      uVar6 = 0x6e776f6e6b6e75;
      uVar5 = 0xe700000000000000;
    }
  }
  else {
    if (param_2 != 2) {
      uVar5 = 0xee00676e6974726f;
      uVar6 = 0x706552646e756f53;
                    /* WARNING: Could not recover jumptable at 0x0001048a9650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd4081a)[param_1] * 4 + 0x1048a9654))
                (0x706552646e756f53,0xee00676e6974726f);
      auVar7._8_8_ = uVar5;
      auVar7._0_8_ = uVar6;
      return auVar7;
    }
    lVar3 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    _swift_allocObject();
    *(undefined8 *)(lVar3 + 0x18) = 4;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    uVar6 = 0xd000000000000013;
    *(undefined8 *)(lVar3 + 0x20) = 0xd000000000000013;
    *(undefined8 *)(lVar3 + 0x28) = 0x800000010f217540;
    uVar1 = (uint)param_1 & 0xff;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      if ((param_1 & 0xff) == 0) {
        uVar5 = 0xe900000000000064;
        uVar6 = 0x6565466f54646461;
      }
      else {
        uVar5 = 0xee00646565466d6f;
        uVar6 = 0x724665766f6d6572;
      }
    }
    else if (uVar1 == 2) {
      uVar5 = 0xe800000000000000;
      uVar6 = 0x646565466e497369;
    }
    else if (uVar1 == 3) {
      uVar5 = 0xea0000000000736d;
      uVar6 = 0x6574496863746566;
    }
    else {
      uVar5 = 0x800000010f217560;
    }
  }
  *(undefined8 *)(lVar3 + 0x30) = uVar6;
  *(undefined8 *)(lVar3 + 0x38) = uVar5;
  uVar6 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar5 = uVar6;
  func_0x00010011d734();
  uVar2 = 0x23;
  uVar4 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x23,0xe100000000000000,uVar6,uVar5);
  _swift_release(lVar3);
LAB_1048a97a0:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = uVar2;
  return auVar8;
}



/* Entry: 1048a9970; end: 1048a99a3;  */

undefined8 FUN_1048a9970(void)

{
  return 1;
}



/* Entry: 1048a99a4; end: 1048a99f7;  */

void FUN_1048a99a4(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000018,0x800000010f217660);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a99f8; end: 1048a9a13;  */

void FUN_1048a99f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0xd000000000000018,0x800000010f217660);
  return;
}



/* Entry: 1048a9a14; end: 1048a9a63;  */

void FUN_1048a9a14(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,0xd000000000000018,0x800000010f217660);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a9a64; end: 1048a9b0b;  */

undefined8 FUN_1048a9a64(void)

{
  return 1;
}



/* Entry: 1048a9b0c; end: 1048a9b3f;  */

void FUN_1048a9b0c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1048aa9b0(uVar1,param_2[1],0x11309a4d8);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1048a9b40; end: 1048a9be7;  */

void FUN_1048a9b40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar4 = 0xeb00000000646565;
  uVar5 = 0xed00006465654674;
  uVar2 = 0x6867696c746f7073;
  if (bVar3 != 3) {
    uVar5 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  uVar1 = 0x79726f7473;
  if (bVar3 != 2) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe500000000000000;
  if (bVar3 != 2) {
    uVar2 = uVar5;
  }
  uVar5 = 0x4673646e65697266;
  if (bVar3 != 0) {
    uVar4 = 0xe300000000000000;
    uVar5 = 0x70616d;
  }
  if (bVar3 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1048a9be8; end: 1048a9e77;  */

void FUN_1048a9be8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar4 = 0xeb00000000646565;
  uVar5 = 0xed00006465654674;
  uVar2 = 0x6867696c746f7073;
  if (bVar3 != 3) {
    uVar5 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  uVar1 = 0x79726f7473;
  if (bVar3 != 2) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe500000000000000;
  if (bVar3 != 2) {
    uVar2 = uVar5;
  }
  uVar5 = 0x4673646e65697266;
  if (bVar3 != 0) {
    uVar4 = 0xe300000000000000;
    uVar5 = 0x70616d;
  }
  if (bVar3 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a9e78; end: 1048a9ef3;  */

undefined8 FUN_1048a9e78(void)

{
  return 1;
}



/* Entry: 1048a9ef4; end: 1048a9f5f;  */

void FUN_1048a9ef4(undefined8 param_1,long param_2)

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



/* Entry: 1048a9f60; end: 1048a9fa3;  */

void FUN_1048a9f60(undefined8 *param_1)

{
  *param_1 = 0x616f4c6b63617274;
  param_1[1] = 0xeb00000000726564;
  return;
}



/* Entry: 1048a9fa4; end: 1048a9fef;  */

void FUN_1048a9fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,param_3,param_4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048a9ff0; end: 1048aa02f;  */

void FUN_1048a9ff0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
            (param_1,0x616f4c6b63617274,0xeb00000000726564);
  return;
}



/* Entry: 1048aa030; end: 1048aa0ab;  */

void FUN_1048aa030(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,in_x3,in_x4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048aa0ac; end: 1048aa163;  */

void FUN_1048aa0ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0x6574496863746566;
  uVar2 = 0xea0000000000736d;
  if (bVar3 != 3) {
    uVar5 = 0xd000000000000013;
    uVar2 = 0x800000010f217560;
  }
  uVar1 = 0x646565466e497369;
  if (bVar3 != 2) {
    uVar1 = uVar5;
  }
  uVar5 = 0xe800000000000000;
  if (bVar3 != 2) {
    uVar5 = uVar2;
  }
  uVar2 = 0xe900000000000064;
  uVar4 = 0x6565466f54646461;
  if (bVar3 != 0) {
    uVar2 = 0xee00646565466d6f;
    uVar4 = 0x724665766f6d6572;
  }
  if (bVar3 < 2) {
    uVar5 = uVar2;
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar5;
  return;
}



/* Entry: 1048aa164; end: 1048aa6e3;  */

void FUN_1048aa164(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0x6574496863746566;
  uVar2 = 0xea0000000000736d;
  if (bVar3 != 3) {
    uVar5 = 0xd000000000000013;
    uVar2 = 0x800000010f217560;
  }
  uVar1 = 0x646565466e497369;
  if (bVar3 != 2) {
    uVar1 = uVar5;
  }
  uVar5 = 0xe800000000000000;
  if (bVar3 != 2) {
    uVar5 = uVar2;
  }
  uVar2 = 0xe900000000000064;
  uVar4 = 0x6565466f54646461;
  if (bVar3 != 0) {
    uVar2 = 0xee00646565466d6f;
    uVar4 = 0x724665766f6d6572;
  }
  if (bVar3 < 2) {
    uVar5 = uVar2;
    uVar1 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048aa6e4; end: 1048aa6fb;  */

void FUN_1048aa6e4(void)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong *unaff_x20;
  
  uVar4 = *unaff_x20;
  bVar2 = (byte)unaff_x20[1];
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      lVar3 = 0x112e04798;
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      _swift_initStackObject();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      *(ulong *)(lVar3 + 0x20) = uVar4;
      func_0x000100c8a830();
      _swift_setDeallocating(lVar3);
      return;
    }
    if (bVar2 != 1) goto LAB_1048a92bc;
    uVar1 = (uint)uVar4 & 0xff;
    if (uVar1 == 1 || (uVar4 & 0xff) == 0) {
      if ((uVar4 & 0xff) == 0) {
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
      else {
        func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      }
    }
    else if (uVar1 == 2) {
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    }
    else {
      if (uVar1 != 3) {
        return;
      }
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    }
  }
  else if (bVar2 == 2) {
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  else if (bVar2 == 3) {
    switch(uVar4) {
    case 4:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    case 5:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    case 6:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    case 7:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    case 8:
    case 10:
    case 0xd:
      goto LAB_1048a9328;
    case 9:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    case 0xb:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    case 0xc:
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      break;
    default:
      goto LAB_1048a92bc;
    }
  }
  else {
LAB_1048a92bc:
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  }
  _swift_initStaticObject();
  func_0x000100c8a830();
LAB_1048a9328:
  return;
}



/* Entry: 1048aa6fc; end: 1048aa747;  */

void FUN_1048aa6fc(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x0001048aa424(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048aa748; end: 1048aa753;  */

void FUN_1048aa748(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  bVar2 = (byte)unaff_x20[1];
  uVar10 = (uint)uVar3;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyySuF(uVar3);
      return;
    }
    __ss6HasherV8_combineyySuF(5);
    uVar1 = uVar10 & 0xff;
    uVar4 = 0xeb00000000646565;
    uVar5 = 0x4673646e65697266;
    uVar7 = 0xed00006465654674;
    uVar8 = 0x6867696c746f7073;
    if (uVar1 != 3) {
      uVar7 = 0xe700000000000000;
      uVar8 = 0x6e776f6e6b6e75;
    }
    uVar6 = 0x79726f7473;
    if (uVar1 != 2) {
      uVar6 = uVar8;
    }
    uVar8 = 0xe500000000000000;
    if (uVar1 != 2) {
      uVar8 = uVar7;
    }
    uVar7 = 0xe300000000000000;
    uVar9 = 0x70616d;
  }
  else {
    if (bVar2 != 2) {
                    /* WARNING: Could not recover jumptable at 0x0001048aa5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd40828)[uVar3] * 4 + 0x1048aa5ec))();
      return;
    }
    __ss6HasherV8_combineyySuF(10);
    uVar1 = uVar10 & 0xff;
    uVar4 = 0xe900000000000064;
    uVar5 = 0x6565466f54646461;
    uVar8 = 0x6574496863746566;
    uVar7 = 0xea0000000000736d;
    if (uVar1 != 3) {
      uVar8 = 0xd000000000000013;
      uVar7 = 0x800000010f217560;
    }
    uVar6 = 0x646565466e497369;
    if (uVar1 != 2) {
      uVar6 = uVar8;
    }
    uVar8 = 0xe800000000000000;
    if (uVar1 != 2) {
      uVar8 = uVar7;
    }
    uVar7 = 0xee00646565466d6f;
    uVar9 = 0x724665766f6d6572;
  }
  if ((uVar3 & 0xff) != 0) {
    uVar4 = uVar7;
    uVar5 = uVar9;
  }
  if ((uVar10 & 0xff) < 2) {
    uVar8 = uVar4;
    uVar6 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar8);
  return;
}



/* Entry: 1048aa754; end: 1048aa79b;  */

void FUN_1048aa754(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x0001048aa424(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048aa79c; end: 1048aa9af;  */

ulong FUN_1048aa79c(ulong *param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  cVar1 = *(char *)(param_2 + 1);
  bVar2 = (byte)param_1[1];
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      if (cVar1 == '\0') {
        return (ulong)((uint)uVar3 == (uint)*param_2);
      }
    }
    else if (cVar1 == '\x01') goto LAB_1048aa7fc;
  }
  else {
    if (bVar2 != 2) {
                    /* WARNING: Could not recover jumptable at 0x0001048aa820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd40836)[uVar3] * 4 + 0x1048aa824))();
      return uVar3;
    }
    if (cVar1 == '\x02') {
LAB_1048aa7fc:
      return (ulong)((((uint)*param_2 ^ (uint)uVar3) & 0xff) == 0);
    }
  }
  return 0;
}



/* Entry: 1048aa9b0; end: 1048aaa1b;  */

ulong FUN_1048aa9b0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1048aaa1c; end: 1048aaa1f;  */

void FUN_1048aaa1c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a2f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40848;
  _swift_getWitnessTable(&UNK_10dd40848,&UNK_1107b06f8);
  puRam000000011309a2f0 = puVar1;
  return;
}



/* Entry: 1048aaa20; end: 1048aaa5f;  */

void FUN_1048aaa20(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a2f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40848;
  _swift_getWitnessTable(&UNK_10dd40848,&UNK_1107b06f8);
  puRam000000011309a2f0 = puVar1;
  return;
}



/* Entry: 1048aaa60; end: 1048aaa63;  */

void FUN_1048aaa60(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a2f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd408e8;
  _swift_getWitnessTable(&UNK_10dd408e8,&UNK_1107b0788);
  puRam000000011309a2f8 = puVar1;
  return;
}



/* Entry: 1048aaa64; end: 1048aaaa3;  */

void FUN_1048aaa64(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a2f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd408e8;
  _swift_getWitnessTable(&UNK_10dd408e8,&UNK_1107b0788);
  puRam000000011309a2f8 = puVar1;
  return;
}



/* Entry: 1048aaaa4; end: 1048aaaa7;  */

void FUN_1048aaaa4(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40988;
  _swift_getWitnessTable(&UNK_10dd40988,&UNK_1107b0818);
  puRam000000011309a300 = puVar1;
  return;
}



/* Entry: 1048aaaa8; end: 1048aaae7;  */

void FUN_1048aaaa8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40988;
  _swift_getWitnessTable(&UNK_10dd40988,&UNK_1107b0818);
  puRam000000011309a300 = puVar1;
  return;
}



/* Entry: 1048aaae8; end: 1048aaaeb;  */

void FUN_1048aaae8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40a28;
  _swift_getWitnessTable(&UNK_10dd40a28,&UNK_1107b08a8);
  puRam000000011309a308 = puVar1;
  return;
}



/* Entry: 1048aaaec; end: 1048aab2b;  */

void FUN_1048aaaec(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40a28;
  _swift_getWitnessTable(&UNK_10dd40a28,&UNK_1107b08a8);
  puRam000000011309a308 = puVar1;
  return;
}



/* Entry: 1048aab2c; end: 1048aab2f;  */

void FUN_1048aab2c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40ac8;
  _swift_getWitnessTable(&UNK_10dd40ac8,&UNK_1107b0938);
  puRam000000011309a310 = puVar1;
  return;
}



/* Entry: 1048aab30; end: 1048aab6f;  */

void FUN_1048aab30(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40ac8;
  _swift_getWitnessTable(&UNK_10dd40ac8,&UNK_1107b0938);
  puRam000000011309a310 = puVar1;
  return;
}



/* Entry: 1048aab70; end: 1048aab73;  */

void FUN_1048aab70(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40b68;
  _swift_getWitnessTable(&UNK_10dd40b68,&UNK_1107b09c8);
  puRam000000011309a318 = puVar1;
  return;
}



/* Entry: 1048aab74; end: 1048aabb3;  */

void FUN_1048aab74(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40b68;
  _swift_getWitnessTable(&UNK_10dd40b68,&UNK_1107b09c8);
  puRam000000011309a318 = puVar1;
  return;
}



/* Entry: 1048aabb4; end: 1048aabd7;  */

void FUN_1048aabb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048aabd8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048aabd8; end: 1048aac17;  */

void FUN_1048aabd8(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40c24;
  _swift_getWitnessTable(&UNK_10dd40c24,&UNK_1107b0a58);
  puRam000000011309a320 = puVar1;
  return;
}



/* Entry: 1048aac18; end: 1048aac1b;  */

void FUN_1048aac18(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40c64;
  _swift_getWitnessTable(&UNK_10dd40c64,&UNK_1107b0a58);
  puRam000000011309a328 = puVar1;
  return;
}



/* Entry: 1048aac1c; end: 1048aac5b;  */

void FUN_1048aac1c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40c64;
  _swift_getWitnessTable(&UNK_10dd40c64,&UNK_1107b0a58);
  puRam000000011309a328 = puVar1;
  return;
}



/* Entry: 1048aac5c; end: 1048ab02f;  */

undefined8 FUN_1048aac5c(void)

{
  return 0;
}



/* Entry: 1048ab030; end: 1048ab0cf;  */

void FUN_1048ab030(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048ab0d0; end: 1048ab0d3;  */

void FUN_1048ab0d0(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40dc0;
  _swift_getWitnessTable(&UNK_10dd40dc0,&UNK_1107b0b68);
  puRam000000011309a570 = puVar1;
  return;
}



/* Entry: 1048ab0d4; end: 1048ab113;  */

void FUN_1048ab0d4(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40dc0;
  _swift_getWitnessTable(&UNK_10dd40dc0,&UNK_1107b0b68);
  puRam000000011309a570 = puVar1;
  return;
}



/* Entry: 1048ab114; end: 1048ab137;  */

undefined8 FUN_1048ab114(void)

{
  return 0;
}



/* Entry: 1048ab138; end: 1048ab15b;  */

void FUN_1048ab138(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048ab15c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048ab15c; end: 1048ab19b;  */

void FUN_1048ab15c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40de8;
  _swift_getWitnessTable(&UNK_10dd40de8,&UNK_1107b0b68);
  puRam000000011309a578 = puVar1;
  return;
}



/* Entry: 1048ab19c; end: 1048ab397;  */

uint FUN_1048ab19c(uint *param_1,int param_2)

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



/* Entry: 1048ab398; end: 1048ab443;  */

void FUN_1048ab398(void)

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



/* Entry: 1048ab444; end: 1048ab473;  */

undefined * FUN_1048ab444(void)

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



/* Entry: 1048ab474; end: 1048ab47f;  */

undefined1  [16] FUN_1048ab474(void)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  bVar3 = *unaff_x20;
  if (bVar3 < 3) {
    uVar7 = 0x800000010f2157d0;
    uVar5 = 0xd000000000000011;
    if (bVar3 != 1) {
      uVar7 = 0xe900000000000049;
      uVar5 = 0x5577656976657250;
    }
    uVar2 = 0xeb00000000657661;
    uVar6 = 0x5377656976657250;
    if (bVar3 != 0) {
      uVar2 = uVar7;
      uVar6 = uVar5;
    }
    auVar9._8_8_ = uVar2;
    auVar9._0_8_ = uVar6;
    return auVar9;
  }
  uVar1 = 0x800000010f215770;
  uVar7 = 0xd000000000000017;
  if (bVar3 != 5) {
    uVar1 = 0xeb00000000646e65;
    uVar7 = 0x5377656976657250;
  }
  pcVar4 = "PreviewRecoveryPersistence";
  uVar5 = 0xd000000000000016;
  if (bVar3 != 3) {
    pcVar4 = "LegacyPlayerInteraction";
    uVar5 = 0xd00000000000001a;
  }
  if (bVar3 < 5) {
    uVar1 = (ulong)pcVar4 | 0x8000000000000000;
    uVar7 = uVar5;
  }
  auVar8._8_8_ = uVar1;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 1048ab480; end: 1048ab4bf;  */

void FUN_1048ab480(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40e78;
  _swift_getWitnessTable(&UNK_10dd40e78,&UNK_1107b0c58);
  puRam000000011309a580 = puVar1;
  return;
}



/* Entry: 1048ab4c0; end: 1048ab4e3;  */

void FUN_1048ab4c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048ab4e4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048ab4e4; end: 1048ab523;  */

void FUN_1048ab4e4(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40ea0;
  _swift_getWitnessTable(&UNK_10dd40ea0,&UNK_1107b0c58);
  puRam000000011309a588 = puVar1;
  return;
}



/* Entry: 1048ab524; end: 1048ab753;  */

int FUN_1048ab524(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048ab5a0;
        goto LAB_1048ab584;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048ab584:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_1048ab5a0:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048ab754; end: 1048ab7ff;  */

void FUN_1048ab754(void)

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



/* Entry: 1048ab800; end: 1048ab84b;  */

undefined8 FUN_1048ab800(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  if (*unaff_x20 == '\x01') {
    uVar1 = 0x112e04798;
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    _swift_initStaticObject();
    func_0x000100c8a830();
    return uVar1;
  }
  return 0;
}



/* Entry: 1048ab84c; end: 1048ab857;  */

undefined1  [16] FUN_1048ab84c(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar3 = *unaff_x20;
  pcVar4 = "CalendarFetchParticipants";
  uVar6 = 0xd000000000000010;
  if (bVar3 != 3) {
    pcVar4 = "SnapchattersDependencyMonitor";
    uVar6 = 0xd000000000000019;
  }
  pcVar5 = "CalendarDeeplink";
  uVar7 = 0xd000000000000014;
  if (bVar3 != 2) {
    pcVar5 = pcVar4;
    uVar7 = uVar6;
  }
  uVar1 = 0xee00656761506472;
  uVar6 = 0x614365646f435251;
  if (bVar3 != 0) {
    uVar1 = 0x800000010f215580;
    uVar6 = 0xd000000000000018;
  }
  uVar2 = (ulong)pcVar5 | 0x8000000000000000;
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar7 = uVar6;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 1048ab858; end: 1048ab897;  */

void FUN_1048ab858(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40f18;
  _swift_getWitnessTable(&UNK_10dd40f18,&UNK_1107b0d48);
  puRam000000011309a610 = puVar1;
  return;
}



/* Entry: 1048ab898; end: 1048ab8bb;  */

void FUN_1048ab898(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048ab8bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048ab8bc; end: 1048ab8fb;  */

void FUN_1048ab8bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40f40;
  _swift_getWitnessTable(&UNK_10dd40f40,&UNK_1107b0d48);
  puRam000000011309a618 = puVar1;
  return;
}



/* Entry: 1048ab8fc; end: 1048abc07;  */

int FUN_1048ab8fc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048ab978;
        goto LAB_1048ab95c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048ab95c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1048ab978:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048abc08; end: 1048abcb3;  */

void FUN_1048abc08(void)

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



/* Entry: 1048abcb4; end: 1048abcff;  */

undefined8 FUN_1048abcb4(void)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  if (*unaff_x20 == '\x06') {
    uVar1 = 0x112e04798;
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    _swift_initStaticObject();
    func_0x000100c8a830();
    return uVar1;
  }
  return 0;
}



/* Entry: 1048abd00; end: 1048abd0b;  */

/* WARNING: Removing unreachable block (ram,0x0001048abe74) */
/* WARNING: Removing unreachable block (ram,0x0001048abdfc) */
/* WARNING: Removing unreachable block (ram,0x0001048abd80) */
/* WARNING: Removing unreachable block (ram,0x0001048abe88) */

undefined1  [16] FUN_1048abd00(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  char *pcVar3;
  char in_NG;
  bool in_ZR;
  char in_OV;
  uint uVar4;
  char *pcVar5;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  char cVar12;
  char *unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_68 [72];
  char *pcVar6;
  
  bVar9 = *unaff_x20;
  pcVar6 = (char *)(ulong)bVar9;
  uVar4 = (uint)bVar9;
  puVar7 = (undefined *)0xed00007265646e69;
  pcVar5 = (char *)0x6d65527070416e49;
  uVar10 = 0xdd40fc0;
  cVar12 = pcVar6[0x10dd40fc0] * '\x04' + -0x60;
  uVar2 = uRam6d65527070416e4a._2_2_;
  pcVar3 = pcVar5;
  switch(bVar9) {
  default:
    pcVar6 = "tivityInfoProvider";
  case 0x28:
  case 0x36:
  case 0x76:
  case 0x92:
  case 0xd0:
  case 0xde:
    pcVar6 = pcVar6 + 0xb90;
    goto code_r0x0001048abaa8;
  case 1:
    pcVar5 = (char *)0xd000000000000011;
    pcVar6 = "UserNotifications";
    goto code_r0x0001048abbe8;
  case 2:
  case 0x68:
    auVar17._8_8_ = 0x800000010f215b30;
    auVar17._0_8_ = 0xd000000000000019;
    return auVar17;
  case 3:
    pcVar6 = "NotificationBeginPermissionRequest";
    break;
  case 4:
    auVar19._8_8_ = 0x800000010f215ad0;
    auVar19._0_8_ = 0xd000000000000021;
    return auVar19;
  case 5:
    goto code_r0x0001048abb08;
  case 6:
  case 0x80:
  case 0xa0:
    pcVar6 = "post_login_notif_sent_snap";
  case 0x70:
  case 0xc4:
    auVar20._8_8_ = (ulong)pcVar6 | 0x8000000000000000;
    auVar20._0_8_ = 0xd00000000000001c;
    return auVar20;
  case 7:
    auVar18._8_8_ = 0x800000010f215ab0;
    auVar18._0_8_ = 0xd00000000000001e;
    return auVar18;
  case 8:
    pcVar5 = (char *)0xd000000000000011;
  case 0x88:
  case 0xaa:
    pcVar6 = "TokenRegistration";
code_r0x0001048abbe8:
    puVar7 = (undefined *)((ulong)(pcVar6 + -0x20) | 0x8000000000000000);
code_r0x0001048abbf0:
    auVar21._8_8_ = puVar7;
    auVar21._0_8_ = pcVar5;
    return auVar21;
  case 9:
    pcVar6 = "tivityInfoProvider";
  case 0x1d:
  case 0x45:
  case 0x85:
  case 0xc5:
  case 0xec:
  case 0xed:
    pcVar6 = pcVar6 + 0xa90;
    goto code_r0x0001048abb14;
  case 10:
    pcVar5 = (char *)0xd000000000000011;
    pcVar6 = "LoggedOutClearing";
  case 0x54:
  case 0x5c:
  case 100:
  case 0x6c:
    goto code_r0x0001048abbe8;
  case 0xb:
    auVar14._8_8_ = 0x800000010f215a20;
    auVar14._0_8_ = 0xd000000000000020;
    return auVar14;
  case 0xc:
    pcVar6 = "RevokeLocallyScheduledNotification";
    break;
  case 0x18:
    goto code_r0x0001048abc64;
  case 0x19:
  case 0x2d:
  case 0x41:
  case 0x55:
  case 0x5d:
  case 0x65:
  case 0x6d:
  case 0x81:
  case 0xc1:
  case 0xd5:
  case 0xe9:
  case 0xfd:
    goto code_r0x0001048abe98;
  case 0x1a:
  case 0x2e:
  case 0x42:
  case 0x56:
  case 0x5e:
  case 0x66:
  case 0x6e:
  case 0x82:
  case 0x8a:
  case 0xc2:
  case 0xd6:
  case 0xea:
  case 0xfe:
    goto code_r0x0001048abd38;
  case 0x1b:
  case 0x2f:
  case 0x3d:
  case 0x43:
  case 0x57:
  case 0x5f:
  case 0x67:
  case 0x6f:
  case 0x83:
  case 0x8b:
  case 0x8e:
  case 0xc3:
  case 0xd7:
  case 0xeb:
  case 0xff:
    goto code_r0x0001048abaa8;
  case 0x1c:
    goto code_r0x0001048abde0;
  case 0x1e:
  case 0x46:
  case 0x86:
  case 0xc6:
  case 0xd9:
  case 0xee:
    goto code_r0x0001048abd58;
  case 0x26:
  case 0x4e:
  case 0x7d:
  case 0x99:
  case 0xce:
  case 0xe5:
  case 0xf6:
    goto code_r0x0001048abaac;
  case 0x2c:
  case 0xa8:
    goto code_r0x0001048abc34;
  case 0x30:
  case 0x50:
  case 0x7c:
  case 0x90:
  case 0xf8:
    goto code_r0x0001048abab0;
  case 0x31:
  case 0x69:
  case 0x71:
  case 0x95:
    goto code_r0x0001048abd50;
  case 0x32:
  case 0x62:
  case 0x6a:
  case 0x72:
  case 0x96:
  case 0xda:
    auVar29._8_8_ = 0xed00007265646e69;
    auVar29._0_8_ = 0x6d65527070416e49;
    return auVar29;
  case 0x33:
  case 99:
  case 0x6b:
  case 0x73:
  case 0x97:
  case 0xdb:
    if (!in_ZR && in_NG == in_OV) {
      if (uVar4 == 2) {
        uRam6d65527070416e4a = (uint)uVar2 << 0x10;
      }
      else {
        uRam6d65527070416e4a = 0;
      }
      goto code_r0x0001048abec0;
    }
    if (uVar4 == 0) goto code_r0x0001048abec0;
  case 0x94:
    uRam6d65527070416e4a = (uint)uRam6d65527070416e4a._1_3_ << 8;
code_r0x0001048abec0:
    bRam6d65527070416e49 = 0x75;
    auVar34._8_8_ = 0xed00007265646e69;
    auVar34._0_8_ = 0x6d65527070416e49;
    return auVar34;
  case 0x3c:
    pcVar6 = (char *)0x65646e75;
    uVar10 = 4;
  case 0x5a:
    uVar4 = uVar10;
    if ((uint)((ulong)pcVar6 >> 8) < 0xff) {
      uVar4 = 1;
    }
code_r0x0001048abde0:
    uVar10 = uRam6d65527070416e4a;
    if (uVar4 != 4) {
      if (uVar4 == 2) {
        uVar10 = uRam6d65527070416e4a & 0xffff;
        if ((short)uRam6d65527070416e4a != 0) goto LAB_1048abe10;
        goto LAB_1048abe2c;
      }
      uVar10 = uRam6d65527070416e4a & 0xff;
    }
    if (uVar10 != 0) {
LAB_1048abe10:
      auVar31._4_4_ = 0;
      auVar31._0_4_ = ((uint)bRam6d65527070416e49 | uVar10 << 8) - 0xc;
      auVar31._8_8_ = 0xed00007265646e69;
      return auVar31;
    }
LAB_1048abe2c:
    iVar1 = bRam6d65527070416e49 - 0xd;
    if (bRam6d65527070416e49 < 0xd) {
      iVar1 = -1;
    }
    auVar32._4_4_ = 0;
    auVar32._0_4_ = iVar1 + 1;
    auVar32._8_8_ = 0xed00007265646e69;
    return auVar32;
  case 0x3e:
  case 0x7e:
  case 0x9a:
  case 0xe6:
  case 0xfc:
    return ZEXT816(0xed00007265646e69) << 0x40;
  case 0x3f:
  case 0x7f:
  case 0x9b:
  case 0xe7:
    goto code_r0x0001048abab4;
  case 0x40:
    auVar22._8_8_ = 0xed00007265646e69;
    auVar22._0_8_ = 0x6d65527070416e49;
    return auVar22;
  case 0x44:
    goto code_r0x0001048abd40;
  case 0x58:
    goto code_r0x0001048abd14;
  case 0x59:
    goto code_r0x0001048abb14;
  case 0x60:
    bVar11 = 2;
    if (0xfffeff < param_3 + 0xc) {
      bVar11 = 4;
    }
    if (param_3 + 0xc >> 8 < 0xff) {
      bVar11 = 1;
    }
    bVar9 = 0;
    if (0xf3 < param_3) {
      bVar9 = bVar11;
    }
    cVar12 = 'u';
    uVar10 = 0x65646d;
  case 0x89:
    uVar10 = uVar10 + 1;
    goto code_r0x0001048abe98;
  case 0x61:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    goto code_r0x0001048abd50;
  case 0x84:
  case 0x98:
  case 0xad:
    goto code_r0x0001048abc40;
  case 0xa1:
  case 0xa2:
  case 0xa7:
    goto code_r0x0001048abc70;
  case 0xa3:
    goto code_r0x0001048abc68;
  case 0xa4:
    goto code_r0x0001048abc44;
  case 0xa5:
    goto code_r0x0001048abc28;
  case 0xa6:
  case 0xab:
    unaff_x19 = (char *)(ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_68);
  case 0xd8:
    __ss6HasherV8_combineyySuF(unaff_x19);
    __ss6HasherV9_finalizeSiyF();
    auVar25._8_8_ = puVar7;
    auVar25._0_8_ = unaff_x19;
    return auVar25;
  case 0xa9:
    goto code_r0x0001048abc30;
  case 0xac:
  case 0xb0:
    goto code_r0x0001048abc6c;
  case 0xae:
    goto code_r0x0001048abbf0;
  case 0xaf:
    __ss6HasherV5_seedABSi_tcfC();
    goto code_r0x0001048abc28;
  case 0xb1:
    pcVar3 = (char *)(ulong)*unaff_x20;
    pcVar6 = pcVar5;
    goto code_r0x0001048abc64;
  case 0xc0:
    puVar7 = &UNK_10dd41000;
    puVar8 = &UNK_1107b0e38;
    _swift_getWitnessTable(&UNK_10dd41000,&UNK_1107b0e38);
    puRam000000011309a678 = puVar7;
    auVar30._8_8_ = puVar8;
    auVar30._0_8_ = puVar7;
    return auVar30;
  case 0xd4:
    goto code_r0x0001048abd54;
  case 0xe4:
    pcVar5 = *(char **)(pcVar6 + 0x670);
    goto code_r0x0001048abd14;
  case 0xe8:
    goto code_r0x0001048abd24;
  }
  puVar7 = (undefined *)((ulong)(pcVar6 + -0x20) | 0x8000000000000000);
  pcVar5 = (char *)0xd000000000000022;
code_r0x0001048abb08:
  auVar15._8_8_ = puVar7;
  auVar15._0_8_ = pcVar5;
  return auVar15;
code_r0x0001048abc28:
  pcVar5 = unaff_x19;
code_r0x0001048abc30:
  __ss6HasherV8_combineyySuF();
  goto code_r0x0001048abc34;
code_r0x0001048abd14:
  if (pcVar5 != (char *)0x0) {
    auVar26._8_8_ = 0xed00007265646e69;
    auVar26._0_8_ = pcVar5;
    return auVar26;
  }
code_r0x0001048abd24:
  pcVar5 = &UNK_10dd40fd8;
  puVar7 = &UNK_1107b0e38;
  _swift_getWitnessTable(&UNK_10dd40fd8,&UNK_1107b0e38);
  goto code_r0x0001048abd38;
code_r0x0001048abd50:
  *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
code_r0x0001048abd54:
  goto code_r0x0001048abd58;
code_r0x0001048abc34:
  __ss6HasherV9_finalizeSiyF();
code_r0x0001048abc40:
  goto code_r0x0001048abc44;
code_r0x0001048abd38:
  pcVar6 = (char *)0x11309a670;
  goto code_r0x0001048abd40;
code_r0x0001048abc64:
  pcVar5 = pcVar3;
  __ss6HasherV8_combineyySuF(pcVar6,pcVar5);
code_r0x0001048abc68:
code_r0x0001048abc6c:
  goto code_r0x0001048abc70;
code_r0x0001048abaa8:
  pcVar6 = pcVar6 + -0x20;
code_r0x0001048abaac:
  puVar7 = (undefined *)((ulong)pcVar6 | 0x8000000000000000);
code_r0x0001048abab0:
  pcVar6 = (char *)0x11;
  goto code_r0x0001048abab4;
code_r0x0001048abe98:
  bRam6d65527070416e49 = cVar12;
  if (1 < bVar9) {
    if (bVar9 != 2) {
      uRam6d65527070416e4a = uVar10;
      auVar37._8_8_ = 0xed00007265646e69;
      auVar37._0_8_ = 0x6d65527070416e49;
      return auVar37;
    }
    uRam6d65527070416e4a = CONCAT22(uVar2,(short)uVar10);
    auVar35._8_8_ = 0xed00007265646e69;
    auVar35._0_8_ = 0x6d65527070416e49;
    return auVar35;
  }
  if (bVar9 != 0) {
    uRam6d65527070416e4a = CONCAT31(uRam6d65527070416e4a._1_3_,(char)uVar10);
    auVar33._8_8_ = 0xed00007265646e69;
    auVar33._0_8_ = 0x6d65527070416e49;
    return auVar33;
  }
  auVar36._8_8_ = 0xed00007265646e69;
  auVar36._0_8_ = 0x6d65527070416e49;
  return auVar36;
code_r0x0001048abc44:
  auVar23._8_8_ = puVar7;
  auVar23._0_8_ = pcVar5;
  return auVar23;
code_r0x0001048abab4:
  auVar13._8_8_ = puVar7;
  auVar13._0_8_ = ((ulong)pcVar6 | 0xd000000000000000) + 9;
  return auVar13;
code_r0x0001048abb14:
  auVar16._8_8_ = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
  auVar16._0_8_ = 0xd00000000000001b;
  return auVar16;
code_r0x0001048abc70:
  auVar24._8_8_ = puVar7;
  auVar24._0_8_ = pcVar5;
  return auVar24;
code_r0x0001048abd40:
  *(char **)pcVar6 = pcVar5;
  auVar27._8_8_ = puVar7;
  auVar27._0_8_ = pcVar5;
  return auVar27;
code_r0x0001048abd58:
  FUN_1048abd70();
  pcRam6d65527070416e51 = pcVar5;
  auVar28._8_8_ = puVar7;
  auVar28._0_8_ = pcVar5;
  return auVar28;
}



/* Entry: 1048abd0c; end: 1048abd4b;  */

void FUN_1048abd0c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd40fd8;
  _swift_getWitnessTable(&UNK_10dd40fd8,&UNK_1107b0e38);
  puRam000000011309a670 = puVar1;
  return;
}



/* Entry: 1048abd4c; end: 1048abd6f;  */

void FUN_1048abd4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048abd70();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048abd70; end: 1048abdaf;  */

void FUN_1048abd70(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41000;
  _swift_getWitnessTable(&UNK_10dd41000,&UNK_1107b0e38);
  puRam000000011309a678 = puVar1;
  return;
}



/* Entry: 1048abdb0; end: 1048abf1b;  */

int FUN_1048abdb0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf3 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xc) {
      iVar2 = 4;
    }
    if (param_2 + 0xc >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048abe2c;
        goto LAB_1048abe10;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048abe10:
      return ((uint)*param_1 | uVar1 << 8) - 0xc;
    }
  }
LAB_1048abe2c:
  iVar2 = *param_1 - 0xd;
  if (*param_1 < 0xd) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048abf1c; end: 1048abfbb;  */

void FUN_1048abf1c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048abfbc; end: 1048abfbf;  */

void FUN_1048abfbc(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41080;
  _swift_getWitnessTable(&UNK_10dd41080,&UNK_1107b0f28);
  puRam000000011309a680 = puVar1;
  return;
}



/* Entry: 1048abfc0; end: 1048abfff;  */

void FUN_1048abfc0(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd41080;
  _swift_getWitnessTable(&UNK_10dd41080,&UNK_1107b0f28);
  puRam000000011309a680 = puVar1;
  return;
}



/* Entry: 1048ac000; end: 1048ac017;  */

undefined8 FUN_1048ac000(void)

{
  return 0;
}



/* Entry: 1048ac018; end: 1048ac03b;  */

void FUN_1048ac018(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1048ac03c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1048ac03c; end: 1048ac07b;  */

void FUN_1048ac03c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309a688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd410a8;
  _swift_getWitnessTable(&UNK_10dd410a8,&UNK_1107b0f28);
  puRam000000011309a688 = puVar1;
  return;
}



/* Entry: 1048ac07c; end: 1048ac36b;  */

uint FUN_1048ac07c(uint *param_1,int param_2)

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


